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

// Function: entry_0010f3c8
// Address: 0x10f3c8 - 0x10f418
void entry_0010f3c8_0x10f3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f3c8_0x10f3c8");
#endif

    switch (ctx->pc) {
        case 0x10f414u: goto label_10f414;
        default: break;
    }

    ctx->pc = 0x10f3c8u;

    // 0x10f3c8: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x10f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x10f3cc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x10f3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x10f3d0: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x10f3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10f3d4: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x10f3d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x10f3d8: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x10f3d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x10f3dc: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x10f3dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x10f3e0: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x10f3e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x10f3e4: 0xb2240007  sdl         $a0, 0x7($s1)
    ctx->pc = 0x10f3e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10f3e8: 0xb6240000  sdr         $a0, 0x0($s1)
    ctx->pc = 0x10f3e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10f3ec: 0xb226000f  sdl         $a2, 0xF($s1)
    ctx->pc = 0x10f3ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10f3f0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x10f3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x10f3f4: 0xb6260008  sdr         $a2, 0x8($s1)
    ctx->pc = 0x10f3f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10f3f8: 0x2052825  or          $a1, $s0, $a1
    ctx->pc = 0x10f3f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
    // 0x10f3fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10f400: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x10f400u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x10f404: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x10f404u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x10f408: 0x8cc445bc  lw          $a0, 0x45BC($a2)
    ctx->pc = 0x10f408u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3845BCu));
    // 0x10f40c: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10F40Cu;
    SET_GPR_U32(ctx, 31, 0x10F414u);
    ctx->pc = 0x10F410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F40Cu;
    // 0x10f410: 0x8cb00000  lw          $s0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10F414u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F414u) { return; }
    ctx->pc = 0x10F414u;
label_10f414:
    // 0x10f414: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10f414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10f418u;
}
