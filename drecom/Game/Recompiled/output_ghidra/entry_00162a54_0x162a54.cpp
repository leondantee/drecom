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

// Function: entry_00162a54
// Address: 0x162a54 - 0x162a78
void entry_00162a54_0x162a54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162a54_0x162a54");
#endif

    ctx->pc = 0x162a54u;

    // 0x162a54: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x162a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162a58: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x162a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162a5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x162a5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162a60: 0x0  nop
    ctx->pc = 0x162a60u;
    // NOP
    // 0x162a64: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x162A64u;
    {
        const bool branch_taken_0x162a64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x162a64) {
            ctx->pc = 0x162A78u;
            return;
        }
    }
    ctx->pc = 0x162A6Cu;
    // 0x162a6c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x162a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x162a70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x162A70u;
    {
        const bool branch_taken_0x162a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162a70) {
            ctx->pc = 0x162A7Cu;
            return;
        }
    }
    ctx->pc = 0x162A78u;
}
