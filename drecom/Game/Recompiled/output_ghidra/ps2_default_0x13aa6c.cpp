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

// Function: default
// Address: 0x13aa6c - 0x13aa98
void ps2_default_0x13aa6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x13aa6c");
#endif

    ctx->pc = 0x13aa6cu;

    // 0x13aa6c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13aa70: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x13aa70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13aa74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13aa74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13aa78: 0x0  nop
    ctx->pc = 0x13aa78u;
    // NOP
    // 0x13aa7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13aa7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13aa80: 0x0  nop
    ctx->pc = 0x13aa80u;
    // NOP
    // 0x13aa84: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x13AA84u;
    {
        const bool branch_taken_0x13aa84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13aa84) {
            ctx->pc = 0x13AA98u;
            return;
        }
    }
    ctx->pc = 0x13AA8Cu;
    // 0x13aa8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13aa8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13aa90: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13aa94: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x13aa94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    ctx->pc = 0x13aa98u;
}
