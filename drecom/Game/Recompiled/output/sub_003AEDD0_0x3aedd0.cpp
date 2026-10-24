#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003AEDD0
// Address: 0x3aedd0 - 0x3aef60
void sub_003AEDD0_0x3aedd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AEDD0_0x3aedd0");
#endif

    switch (ctx->pc) {
        case 0x3aedfcu: goto label_3aedfc;
        default: break;
    }

    ctx->pc = 0x3aedd0u;

    // 0x3aedd0: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x3aedd0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x3aedd4: 0x61657220  daddi       $a1, $t3, 0x7220
    ctx->pc = 0x3aedd4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29216; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x3aedd8: 0x696d2064  ldl         $t5, 0x2064($t3)
    ctx->pc = 0x3aedd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8292); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x3aeddc: 0xa2e7373  j           func_8B9CDCC
    ctx->pc = 0x3AEDDCu;
    ctx->pc = 0x8B9CDCCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8B9CDCCu, 0x3AEDDCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AEDE4u;
    // 0x3aede4: 0x0  nop
    ctx->pc = 0x3aede4u;
    // NOP
    // 0x3aede8: 0x0  nop
    ctx->pc = 0x3aede8u;
    // NOP
    // 0x3aedec: 0x0  nop
    ctx->pc = 0x3aedecu;
    // NOP
    // 0x3aedf0: 0x199540  sll         $s2, $t9, 21
    ctx->pc = 0x3aedf0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), 21));
    // 0x3aedf4: 0x1995b0  tge         $zero, $t9, 598
    ctx->pc = 0x3aedf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aedf8: 0x1997cc  .word       0x001997CC                   # syscall     607 # 00190000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aedf8u;
    ctx->pc = 0x3AEDFCu;
runtime->handleSyscall(rdram, ctx, 0x665Fu);
label_3aedfc:
    // 0x3aedfc: 0x1997fc  dsll32      $s2, $t9, 31
    ctx->pc = 0x3aedfcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 25) << (32 + 31));
    // 0x3aee00: 0x1999bc  dsll32      $s3, $t9, 6
    ctx->pc = 0x3aee00u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 25) << (32 + 6));
    // 0x3aee04: 0x1999f4  teq         $zero, $t9, 615
    ctx->pc = 0x3aee04u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aee08: 0x0  nop
    ctx->pc = 0x3aee08u;
    // NOP
    // 0x3aee0c: 0x0  nop
    ctx->pc = 0x3aee0cu;
    // NOP
    // 0x3aee10: 0x199e00  sll         $s3, $t9, 24
    ctx->pc = 0x3aee10u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 25), 24));
    // 0x3aee14: 0x199e30  tge         $zero, $t9, 632
    ctx->pc = 0x3aee14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aee18: 0x19a000  sll         $s4, $t9, 0
    ctx->pc = 0x3aee18u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 25), 0));
    // 0x3aee1c: 0x19a038  dsll        $s4, $t9, 0
    ctx->pc = 0x3aee1cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 25) << 0);
    // 0x3aee20: 0x19a1fc  dsll32      $s4, $t9, 7
    ctx->pc = 0x3aee20u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 25) << (32 + 7));
    // 0x3aee24: 0x19a234  teq         $zero, $t9, 648
    ctx->pc = 0x3aee24u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aee28: 0x0  nop
    ctx->pc = 0x3aee28u;
    // NOP
    // 0x3aee2c: 0x0  nop
    ctx->pc = 0x3aee2cu;
    // NOP
    // 0x3aee30: 0x6f726463  ldr         $s2, 0x6463($k1)
    ctx->pc = 0x3aee30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25699); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x3aee34: 0x5c3a306d  .word       0x5C3A306D                   # bgtzl       $at, . + 4 + (0x306D << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3AEE34u;
    {
        const bool branch_taken_0x3aee34 = (GPR_S32(ctx, 1) > 0);
        if (branch_taken_0x3aee34) {
            ctx->pc = 0x3AEE38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEE34u;
            // 0x3aee38: 0x41544144  .word       0x41544144                   # INVALID     $t2, $s4, 0x4144 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x3AEE38 raw=0x41544144");
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BAFECu;
            return;
        }
    }
    ctx->pc = 0x3AEE3Cu;
    // 0x3aee3c: 0x444f4d5c  .word       0x444F4D5C                   # cfc1        $t7, $9 # 0000055C <InstrIdType: R5900_COP1>
    ctx->pc = 0x3aee3cu;
    SET_GPR_U32(ctx, 15, 0); // Unimplemented FCR9
    // 0x3aee40: 0x53454c55  beql        $k0, $a1, . + 4 + (0x4C55 << 2)
    ctx->pc = 0x3AEE40u;
    {
        const bool branch_taken_0x3aee40 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 5));
        if (branch_taken_0x3aee40) {
            ctx->pc = 0x3AEE44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEE40u;
            // 0x3aee44: 0x42494c5c  .word       0x42494C5C                   # INVALID     $s2, $t1, 0x4C5C # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x3AEE44 raw=0x42494C5C");
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1F98u;
            return;
        }
    }
    ctx->pc = 0x3AEE48u;
    // 0x3aee48: 0x492e4453  .word       0x492E4453                   # INVALID     $t1, $t6, 0x4453 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x3aee48u;
    throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x3AEE48 raw=0x492E4453");
    // 0x3aee4c: 0x313b5852  andi        $k1, $t1, 0x5852
    ctx->pc = 0x3aee4cu;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)22610);
    // 0x3aee50: 0x0  nop
    ctx->pc = 0x3aee50u;
    // NOP
    // 0x3aee54: 0x0  nop
    ctx->pc = 0x3aee54u;
    // NOP
    // 0x3aee58: 0x0  nop
    ctx->pc = 0x3aee58u;
    // NOP
    // 0x3aee5c: 0x0  nop
    ctx->pc = 0x3aee5cu;
    // NOP
    // 0x3aee60: 0x6f726463  ldr         $s2, 0x6463($k1)
    ctx->pc = 0x3aee60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25699); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x3aee64: 0x5c3a306d  .word       0x5C3A306D                   # bgtzl       $at, . + 4 + (0x306D << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3AEE64u;
    {
        const bool branch_taken_0x3aee64 = (GPR_S32(ctx, 1) > 0);
        if (branch_taken_0x3aee64) {
            ctx->pc = 0x3AEE68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEE64u;
            // 0x3aee68: 0x41544144  .word       0x41544144                   # INVALID     $t2, $s4, 0x4144 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x3AEE68 raw=0x41544144");
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BB01Cu;
            return;
        }
    }
    ctx->pc = 0x3AEE6Cu;
    // 0x3aee6c: 0x444f4d5c  .word       0x444F4D5C                   # cfc1        $t7, $9 # 0000055C <InstrIdType: R5900_COP1>
    ctx->pc = 0x3aee6cu;
    SET_GPR_U32(ctx, 15, 0); // Unimplemented FCR9
    // 0x3aee70: 0x53454c55  beql        $k0, $a1, . + 4 + (0x4C55 << 2)
    ctx->pc = 0x3AEE70u;
    {
        const bool branch_taken_0x3aee70 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 5));
        if (branch_taken_0x3aee70) {
            ctx->pc = 0x3AEE74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEE70u;
            // 0x3aee74: 0x444f4d5c  .word       0x444F4D5C                   # cfc1        $t7, $9 # 0000055C <InstrIdType: R5900_COP1> (Delay Slot)
            SET_GPR_U32(ctx, 15, 0); // Unimplemented FCR9
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1FC8u;
            return;
        }
    }
    ctx->pc = 0x3AEE78u;
    // 0x3aee78: 0x4e595348  .word       0x4E595348                   # INVALID     $s2, $t9, 0x5348 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aee78u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x3AEE78 raw=0x4E595348");
    // 0x3aee7c: 0x5852492e  .word       0x5852492E                   # blezl       $v0, . + 4 + (0x492E << 2) # 00120000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3AEE7Cu;
    {
        const bool branch_taken_0x3aee7c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3aee7c) {
            ctx->pc = 0x3AEE80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEE7Cu;
            // 0x3aee80: 0x313b  dsra        $a2, $zero, 4 (Delay Slot)
            SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> 4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1338u;
            return;
        }
    }
    ctx->pc = 0x3AEE84u;
    // 0x3aee84: 0x0  nop
    ctx->pc = 0x3aee84u;
    // NOP
    // 0x3aee88: 0x0  nop
    ctx->pc = 0x3aee88u;
    // NOP
    // 0x3aee8c: 0x0  nop
    ctx->pc = 0x3aee8cu;
    // NOP
    // 0x3aee90: 0x6f726463  ldr         $s2, 0x6463($k1)
    ctx->pc = 0x3aee90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25699); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x3aee94: 0x5c3a306d  .word       0x5C3A306D                   # bgtzl       $at, . + 4 + (0x306D << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3AEE94u;
    {
        const bool branch_taken_0x3aee94 = (GPR_S32(ctx, 1) > 0);
        if (branch_taken_0x3aee94) {
            ctx->pc = 0x3AEE98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEE94u;
            // 0x3aee98: 0x41544144  .word       0x41544144                   # INVALID     $t2, $s4, 0x4144 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x3AEE98 raw=0x41544144");
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BB04Cu;
            return;
        }
    }
    ctx->pc = 0x3AEE9Cu;
    // 0x3aee9c: 0x444f4d5c  .word       0x444F4D5C                   # cfc1        $t7, $9 # 0000055C <InstrIdType: R5900_COP1>
    ctx->pc = 0x3aee9cu;
    SET_GPR_U32(ctx, 15, 0); // Unimplemented FCR9
    // 0x3aeea0: 0x53454c55  beql        $k0, $a1, . + 4 + (0x4C55 << 2)
    ctx->pc = 0x3AEEA0u;
    {
        const bool branch_taken_0x3aeea0 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 5));
        if (branch_taken_0x3aeea0) {
            ctx->pc = 0x3AEEA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEEA0u;
            // 0x3aeea4: 0x444f4d5c  .word       0x444F4D5C                   # cfc1        $t7, $9 # 0000055C <InstrIdType: R5900_COP1> (Delay Slot)
            SET_GPR_U32(ctx, 15, 0); // Unimplemented FCR9
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1FF8u;
            return;
        }
    }
    ctx->pc = 0x3AEEA8u;
    // 0x3aeea8: 0x4944494d  .word       0x4944494D                   # INVALID     $t2, $a0, 0x494D # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x3aeea8u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x3AEEA8 raw=0x4944494D");
    // 0x3aeeac: 0x5852492e  .word       0x5852492E                   # blezl       $v0, . + 4 + (0x492E << 2) # 00120000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3AEEACu;
    {
        const bool branch_taken_0x3aeeac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3aeeac) {
            ctx->pc = 0x3AEEB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEEACu;
            // 0x3aeeb0: 0x313b  dsra        $a2, $zero, 4 (Delay Slot)
            SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> 4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1368u;
            return;
        }
    }
    ctx->pc = 0x3AEEB4u;
    // 0x3aeeb4: 0x0  nop
    ctx->pc = 0x3aeeb4u;
    // NOP
    // 0x3aeeb8: 0x0  nop
    ctx->pc = 0x3aeeb8u;
    // NOP
    // 0x3aeebc: 0x0  nop
    ctx->pc = 0x3aeebcu;
    // NOP
    // 0x3aeec0: 0x6f726463  ldr         $s2, 0x6463($k1)
    ctx->pc = 0x3aeec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25699); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x3aeec4: 0x5c3a306d  .word       0x5C3A306D                   # bgtzl       $at, . + 4 + (0x306D << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3AEEC4u;
    {
        const bool branch_taken_0x3aeec4 = (GPR_S32(ctx, 1) > 0);
        if (branch_taken_0x3aeec4) {
            ctx->pc = 0x3AEEC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEEC4u;
            // 0x3aeec8: 0x41544144  .word       0x41544144                   # INVALID     $t2, $s4, 0x4144 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x3AEEC8 raw=0x41544144");
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BB07Cu;
            return;
        }
    }
    ctx->pc = 0x3AEECCu;
    // 0x3aeecc: 0x444f4d5c  .word       0x444F4D5C                   # cfc1        $t7, $9 # 0000055C <InstrIdType: R5900_COP1>
    ctx->pc = 0x3aeeccu;
    SET_GPR_U32(ctx, 15, 0); // Unimplemented FCR9
    // 0x3aeed0: 0x53454c55  beql        $k0, $a1, . + 4 + (0x4C55 << 2)
    ctx->pc = 0x3AEED0u;
    {
        const bool branch_taken_0x3aeed0 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 5));
        if (branch_taken_0x3aeed0) {
            ctx->pc = 0x3AEED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEED0u;
            // 0x3aeed4: 0x444f4d5c  .word       0x444F4D5C                   # cfc1        $t7, $9 # 0000055C <InstrIdType: R5900_COP1> (Delay Slot)
            SET_GPR_U32(ctx, 15, 0); // Unimplemented FCR9
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2028u;
            return;
        }
    }
    ctx->pc = 0x3AEED8u;
    // 0x3aeed8: 0x4e49534d  .word       0x4E49534D                   # INVALID     $s2, $t1, 0x534D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aeed8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x3AEED8 raw=0x4E49534D");
    // 0x3aeedc: 0x5852492e  .word       0x5852492E                   # blezl       $v0, . + 4 + (0x492E << 2) # 00120000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3AEEDCu;
    {
        const bool branch_taken_0x3aeedc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3aeedc) {
            ctx->pc = 0x3AEEE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEEDCu;
            // 0x3aeee0: 0x313b  dsra        $a2, $zero, 4 (Delay Slot)
            SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> 4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1398u;
            return;
        }
    }
    ctx->pc = 0x3AEEE4u;
    // 0x3aeee4: 0x0  nop
    ctx->pc = 0x3aeee4u;
    // NOP
    // 0x3aeee8: 0x0  nop
    ctx->pc = 0x3aeee8u;
    // NOP
    // 0x3aeeec: 0x0  nop
    ctx->pc = 0x3aeeecu;
    // NOP
    // 0x3aeef0: 0x6f726463  ldr         $s2, 0x6463($k1)
    ctx->pc = 0x3aeef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25699); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x3aeef4: 0x5c3a306d  .word       0x5C3A306D                   # bgtzl       $at, . + 4 + (0x306D << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3AEEF4u;
    {
        const bool branch_taken_0x3aeef4 = (GPR_S32(ctx, 1) > 0);
        if (branch_taken_0x3aeef4) {
            ctx->pc = 0x3AEEF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEEF4u;
            // 0x3aeef8: 0x41544144  .word       0x41544144                   # INVALID     $t2, $s4, 0x4144 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x3AEEF8 raw=0x41544144");
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BB0ACu;
            return;
        }
    }
    ctx->pc = 0x3AEEFCu;
    // 0x3aeefc: 0x444f4d5c  .word       0x444F4D5C                   # cfc1        $t7, $9 # 0000055C <InstrIdType: R5900_COP1>
    ctx->pc = 0x3aeefcu;
    SET_GPR_U32(ctx, 15, 0); // Unimplemented FCR9
    // 0x3aef00: 0x53454c55  beql        $k0, $a1, . + 4 + (0x4C55 << 2)
    ctx->pc = 0x3AEF00u;
    {
        const bool branch_taken_0x3aef00 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 5));
        if (branch_taken_0x3aef00) {
            ctx->pc = 0x3AEF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEF00u;
            // 0x3aef04: 0x4e53545c  .word       0x4E53545C                   # INVALID     $s2, $s3, 0x545C # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x3AEF04 raw=0x4E53545C");
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2058u;
            return;
        }
    }
    ctx->pc = 0x3AEF08u;
    // 0x3aef08: 0x56524444  bnel        $s2, $s2, . + 4 + (0x4444 << 2)
    ctx->pc = 0x3AEF08u;
    {
        const bool branch_taken_0x3aef08 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 18));
        if (branch_taken_0x3aef08) {
            ctx->pc = 0x3AEF0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEF08u;
            // 0x3aef0c: 0x52492e4d  beql        $s2, $t1, . + 4 + (0x2E4D << 2) (Delay Slot)
            // Likely branch instruction at 0x3AEF0C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C001Cu;
            return;
        }
    }
    ctx->pc = 0x3AEF10u;
    // 0x3aef10: 0x313b58  .word       0x00313B58                   # mult        $a3, $at, $s1 # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3aef10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3aef14: 0x0  nop
    ctx->pc = 0x3aef14u;
    // NOP
    // 0x3aef18: 0x0  nop
    ctx->pc = 0x3aef18u;
    // NOP
    // 0x3aef1c: 0x0  nop
    ctx->pc = 0x3aef1cu;
    // NOP
    // 0x3aef20: 0x20474158  addi        $a3, $v0, 0x4158
    ctx->pc = 0x3aef20u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)16728, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x3aef24: 0x72617453  .word       0x72617453                   # mtlo1       $s3 # 00017440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3aef24u;
    ctx->lo1 = GPR_U64(ctx, 19);
    // 0x3aef28: 0x72452074  .word       0x72452074                   # psllh       $a0, $a1, 1 # 02400000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3aef28u;
    SET_GPR_VEC(ctx, 4, _mm_slli_epi16(GPR_VEC(ctx, 5), 1));
    // 0x3aef2c: 0x21726f72  addi        $s2, $t3, 0x6F72
    ctx->pc = 0x3aef2cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)28530, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
    // 0x3aef30: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x3aef30u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
    // 0x3aef34: 0x0  nop
    ctx->pc = 0x3aef34u;
    // NOP
    // 0x3aef38: 0x0  nop
    ctx->pc = 0x3aef38u;
    // NOP
    // 0x3aef3c: 0x0  nop
    ctx->pc = 0x3aef3cu;
    // NOP
    // 0x3aef40: 0x6e756f53  ldr         $s5, 0x6F53($s3)
    ctx->pc = 0x3aef40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28499); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x3aef44: 0x66452064  daddiu      $a1, $s2, 0x2064
    ctx->pc = 0x3aef44u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)8292);
    // 0x3aef48: 0x74636566  .word       0x74636566                   # INVALID     $v1, $v1, 0x6566 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aef48u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AEF48 raw=0x74636566");
    // 0x3aef4c: 0x74655320  .word       0x74655320                   # INVALID     $v1, $a1, 0x5320 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aef4cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3AEF4C raw=0x74655320");
    // 0x3aef50: 0x72724520  .word       0x72724520                   # madd1       $t0, $s3, $s2 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3aef50u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3aef54: 0x2121726f  addi        $at, $t1, 0x726F
    ctx->pc = 0x3aef54u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 9), (int32_t)29295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
    // 0x3aef58: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x3aef58u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    // 0x3aef5c: 0x0  nop
    ctx->pc = 0x3aef5cu;
    // NOP
    ctx->pc = 0x3aef60u;
}
