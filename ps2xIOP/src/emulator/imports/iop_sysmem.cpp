#include "iop_sysmem.h"

#include "../core/iop_cpu.h"
#include "../core/iop_memory.h"
#include "ps2x/iop/iop_host.h"

#include <string>
#include <cstdio>

namespace ps2x::iop::detail
{
    IopSysmem::IopSysmem(IopHost &host, IopMemory &memory) noexcept
        : m_host(host), m_memory(memory)
    {
    }

    bool IopSysmem::dispatchImport(uint16_t ordinal, IopCpuState &cpu)
    {
        const uint32_t a0 = cpu.gpr[4];
        const uint32_t a1 = cpu.gpr[5];
        const uint32_t a2 = cpu.gpr[6];
        const auto setV0 = [&](uint32_t value)
        {
            cpu.gpr[2] = value;
        };

        switch (ordinal)
        {
        case 4: // AllocSysMemory
        {
            const uint32_t address = a0 == 2u
                                         ? m_memory.allocate(a1, 16u, a2)
                                         : m_memory.allocate(a1, 16u, std::nullopt, a0 == 1u);
            if (address == 0u)
            {
                std::fprintf(stderr,
                    "[IOP MEMORY DEBUG] AllocSysMemory FAILED mode=%u size=%u fixed=0x%X maxFree=%u\n",
                    a0, a1, a2, m_memory.maxFreeMemory());
                const std::string layout = m_memory.heapLayoutForDiagnostics();
                std::fputs(layout.c_str(), stderr);
            }
            if (address != 0u)
            {
                std::fprintf(stderr,
                    "[IOP ALLOC TRACE] pc=0x%X mode=%u size=%u address=0x%X\n",
                    cpu.pc, a0, a1, address);
            }
            setV0(address);
            return true;
        }
        case 5: // FreeSysMemory
        {
            const auto block = m_memory.allocationContaining(a0);
            const bool released = m_memory.freeAllocation(a0);
            std::fprintf(stderr,
                "[IOP FREE TRACE] pc=0x%X address=0x%X size=%u released=%u\n",
                cpu.pc, a0,
                block && block->address == a0 ? block->size : 0u,
                released ? 1u : 0u);
            setV0(released ? 0u : 0xFFFFFFFFu);
            return true;
        }
        case 6: // QueryMemSize
            setV0(IopMemory::RamSize);
            return true;
        case 7: // QueryMaxFreeMemSize
            setV0(m_memory.maxFreeMemory());
            return true;
        case 8: // QueryTotalFreeMemSize
            setV0(m_memory.totalFreeMemory());
            return true;
        case 9: // QueryBlockTopAddress
            if (const auto block = m_memory.allocationContaining(a0))
                setV0(block->address);
            else
                setV0(0u);
            return true;
        case 10: // QueryBlockSize
            if (const auto block = m_memory.allocationContaining(a0))
                setV0(block->size);
            else
                setV0(0xFFFFFFFFu);
            return true;
        case 14: // Kprintf
        {
            const std::string format = m_memory.readString(a0, 512u);
            m_host.log(LogLevel::Info, std::string("[IOP Kprintf] ") + format);
            setV0(static_cast<uint32_t>(format.size()));
            return true;
        }
        case 15:
            setV0(0u);
            return true;
        default:
            return false;
        }
    }
}
