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

// Function: entry_00181f58
// Address: 0x181f58 - 0x181f88
void entry_00181f58_0x181f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181f58_0x181f58");
#endif

    ctx->pc = 0x181f58u;

    // 0x181f58: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x181f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181f5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x181f5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181f60: 0x0  nop
    ctx->pc = 0x181f60u;
    // NOP
    // 0x181f64: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x181F64u;
    {
        const bool branch_taken_0x181f64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x181f64) {
            ctx->pc = 0x181FA0u;
            return;
        }
    }
    ctx->pc = 0x181F6Cu;
    // 0x181f6c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181f70: 0x8c23f210  lw          $v1, -0xDF0($at)
    ctx->pc = 0x181f70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F210u));
    // 0x181f74: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x181f74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x181f78: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181f7c: 0xac27f210  sw          $a3, -0xDF0($at)
    ctx->pc = 0x181f7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x47F210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F210u, _value); } while (0);
    // 0x181f80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x181F80u;
    {
        const bool branch_taken_0x181f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181f80) {
            ctx->pc = 0x181FA0u;
            return;
        }
    }
    ctx->pc = 0x181F88u;
}
