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

// Function: entry_0010f2f0
// Address: 0x10f2f0 - 0x10f330
void entry_0010f2f0_0x10f2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f2f0_0x10f2f0");
#endif

    switch (ctx->pc) {
        case 0x10f32cu: goto label_10f32c;
        default: break;
    }

    ctx->pc = 0x10f2f0u;

    // 0x10f2f0: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x10f2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x10f2f4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x10f2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x10f2f8: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x10f2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10f2fc: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x10f2fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x10f300: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x10f300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x10f304: 0xb2240007  sdl         $a0, 0x7($s1)
    ctx->pc = 0x10f304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10f308: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x10f308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x10f30c: 0xb6240000  sdr         $a0, 0x0($s1)
    ctx->pc = 0x10f30cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10f310: 0x2052825  or          $a1, $s0, $a1
    ctx->pc = 0x10f310u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
    // 0x10f314: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10f314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10f318: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x10f318u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x10f31c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x10f31cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x10f320: 0x8cc445bc  lw          $a0, 0x45BC($a2)
    ctx->pc = 0x10f320u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3845BCu));
    // 0x10f324: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10F324u;
    SET_GPR_U32(ctx, 31, 0x10F32Cu);
    ctx->pc = 0x10F328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F324u;
    // 0x10f328: 0x8cb00000  lw          $s0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10F32Cu;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F32Cu) { return; }
    ctx->pc = 0x10F32Cu;
label_10f32c:
    // 0x10f32c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10f32cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10f330u;
}
