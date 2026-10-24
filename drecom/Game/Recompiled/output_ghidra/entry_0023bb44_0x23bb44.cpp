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

// Function: entry_0023bb44
// Address: 0x23bb44 - 0x23bb7c
void entry_0023bb44_0x23bb44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023bb44_0x23bb44");
#endif

    ctx->pc = 0x23bb44u;

    // 0x23bb44: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bb48: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x23bb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23bb4c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x23bb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x23bb50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23bb50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bb54: 0x0  nop
    ctx->pc = 0x23bb54u;
    // NOP
    // 0x23bb58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23bb58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23bb5c: 0x0  nop
    ctx->pc = 0x23bb5cu;
    // NOP
    // 0x23bb60: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x23BB60u;
    {
        const bool branch_taken_0x23bb60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23bb60) {
            ctx->pc = 0x23BB7Cu;
            return;
        }
    }
    ctx->pc = 0x23BB68u;
    // 0x23bb68: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x23bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x23bb6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23bb6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bb70: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bb74: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23bb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23bb78: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23bb78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->pc = 0x23bb7cu;
}
