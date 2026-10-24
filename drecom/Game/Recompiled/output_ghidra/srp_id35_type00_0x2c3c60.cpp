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

// Function: srp_id35_type00
// Address: 0x2c3c60 - 0x2c3d08
void srp_id35_type00_0x2c3c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id35_type00_0x2c3c60");
#endif

    ctx->pc = 0x2c3c60u;

    // 0x2c3c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c3c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c3c64: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2c3c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2c3c68: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c3c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c3c6c: 0xa060036a  sb          $zero, 0x36A($v1)
    ctx->pc = 0x2c3c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 874), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c3c70: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2c3c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2c3c74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c3c74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3c78: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c3c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c3c7c: 0xe46002d0  swc1        $f0, 0x2D0($v1)
    ctx->pc = 0x2c3c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 720), bits); }
    // 0x2c3c80: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2c3c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2c3c84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c3c84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3c88: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c3c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c3c8c: 0xe46002d4  swc1        $f0, 0x2D4($v1)
    ctx->pc = 0x2c3c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 724), bits); }
    // 0x2c3c90: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2c3c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2c3c94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c3c94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3c98: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c3c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c3c9c: 0xe46002d8  swc1        $f0, 0x2D8($v1)
    ctx->pc = 0x2c3c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 728), bits); }
    // 0x2c3ca0: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2c3ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2c3ca4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c3ca4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3ca8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c3ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c3cac: 0xe46002dc  swc1        $f0, 0x2DC($v1)
    ctx->pc = 0x2c3cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 732), bits); }
    // 0x2c3cb0: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2c3cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c3cb4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c3cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c3cb8: 0xa0640347  sb          $a0, 0x347($v1)
    ctx->pc = 0x2c3cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 839), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c3cbc: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2c3cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2c3cc0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c3cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c3cc4: 0xa0640344  sb          $a0, 0x344($v1)
    ctx->pc = 0x2c3cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 836), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c3cc8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2c3cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c3ccc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c3cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c3cd0: 0xa06402a8  sb          $a0, 0x2A8($v1)
    ctx->pc = 0x2c3cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 680), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c3cd4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2c3cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2c3cd8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c3cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c3cdc: 0xa064034f  sb          $a0, 0x34F($v1)
    ctx->pc = 0x2c3cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 847), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c3ce0: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x2c3ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2c3ce4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c3ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c3ce8: 0xac640364  sw          $a0, 0x364($v1)
    ctx->pc = 0x2c3ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 868), GPR_U32(ctx, 4));
    // 0x2c3cec: 0x3c03442f  lui         $v1, 0x442F
    ctx->pc = 0x2c3cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17455 << 16));
    // 0x2c3cf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c3cf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3cf4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c3cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c3cf8: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c3cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c3cfc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c3cfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c3d00: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3D08u;
}
