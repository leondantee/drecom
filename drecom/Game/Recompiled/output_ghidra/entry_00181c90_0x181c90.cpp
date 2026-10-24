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

// Function: entry_00181c90
// Address: 0x181c90 - 0x181cc0
void entry_00181c90_0x181c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181c90_0x181c90");
#endif

    ctx->pc = 0x181c90u;

    // 0x181c90: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x181c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181c94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x181c94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181c98: 0x0  nop
    ctx->pc = 0x181c98u;
    // NOP
    // 0x181c9c: 0x450000c0  bc1f        . + 4 + (0xC0 << 2)
    ctx->pc = 0x181C9Cu;
    {
        const bool branch_taken_0x181c9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x181c9c) {
            ctx->pc = 0x181FA0u;
            return;
        }
    }
    ctx->pc = 0x181CA4u;
    // 0x181ca4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181ca8: 0x8c23f210  lw          $v1, -0xDF0($at)
    ctx->pc = 0x181ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F210u));
    // 0x181cac: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x181cacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x181cb0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181cb4: 0xac27f210  sw          $a3, -0xDF0($at)
    ctx->pc = 0x181cb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x47F210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F210u, _value); } while (0);
    // 0x181cb8: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x181CB8u;
    {
        const bool branch_taken_0x181cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181cb8) {
            ctx->pc = 0x181FA0u;
            return;
        }
    }
    ctx->pc = 0x181CC0u;
}
