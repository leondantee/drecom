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

// Function: e2d_id62_type07
// Address: 0x2b9aa0 - 0x2b9b64
void e2d_id62_type07_0x2b9aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id62_type07_0x2b9aa0");
#endif

    ctx->pc = 0x2b9aa0u;

    // 0x2b9aa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b9aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b9aa4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b9aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b9aa8: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x2b9aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x2b9aac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9aacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9ab0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9ab4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b9ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b9ab8: 0x3c034313  lui         $v1, 0x4313
    ctx->pc = 0x2b9ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17171 << 16));
    // 0x2b9abc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9abcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9ac0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9ac4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b9ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b9ac8: 0x3c0342be  lui         $v1, 0x42BE
    ctx->pc = 0x2b9ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17086 << 16));
    // 0x2b9acc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9accu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9ad0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9ad4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b9ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b9ad8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b9ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b9adc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9adcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9ae0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9ae4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b9ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b9ae8: 0x3c034302  lui         $v1, 0x4302
    ctx->pc = 0x2b9ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17154 << 16));
    // 0x2b9aec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9aecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9af0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9af4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b9af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b9af8: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x2b9af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2b9afc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9b00: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b9b00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b9b04: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2b9b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2b9b08: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b9b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b9b0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9b0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9b10: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9b14: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b9b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b9b18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b9b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9b1c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9b20: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b9b20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b9b24: 0x3c033f6b  lui         $v1, 0x3F6B
    ctx->pc = 0x2b9b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16235 << 16));
    // 0x2b9b28: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x2b9b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x2b9b2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9b2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9b30: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9b34: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b9b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b9b38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b9b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9b3c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9b40: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b9b40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b9b44: 0x3c03bcf5  lui         $v1, 0xBCF5
    ctx->pc = 0x2b9b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48373 << 16));
    // 0x2b9b48: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2b9b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2b9b4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9b4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9b50: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9b54: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b9b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b9b58: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b9b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b9b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9B64u;
}
