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

// Function: srp_id31_type00
// Address: 0x2c3160 - 0x2c31c0
void srp_id31_type00_0x2c3160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id31_type00_0x2c3160");
#endif

    ctx->pc = 0x2c3160u;

    // 0x2c3160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c3160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c3164: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2c3164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2c3168: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2c3168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c316c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c316cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c3170: 0xa0640342  sb          $a0, 0x342($v1)
    ctx->pc = 0x2c3170u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 834), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c3174: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c3174u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3178: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c3178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c317c: 0xe46002d0  swc1        $f0, 0x2D0($v1)
    ctx->pc = 0x2c317cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 720), bits); }
    // 0x2c3180: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c3180u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3184: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c3184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c3188: 0xe46002d4  swc1        $f0, 0x2D4($v1)
    ctx->pc = 0x2c3188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 724), bits); }
    // 0x2c318c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c318cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3190: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c3190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c3194: 0xe46002d8  swc1        $f0, 0x2D8($v1)
    ctx->pc = 0x2c3194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 728), bits); }
    // 0x2c3198: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2c3198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2c319c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c319cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c31a0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c31a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c31a4: 0xe46002dc  swc1        $f0, 0x2DC($v1)
    ctx->pc = 0x2c31a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 732), bits); }
    // 0x2c31a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c31a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c31ac: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c31acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c31b0: 0xa064036d  sb          $a0, 0x36D($v1)
    ctx->pc = 0x2c31b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 877), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c31b4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c31b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c31b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C31B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C31B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C31C0u;
}
