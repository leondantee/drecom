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

// Function: e2d_id61_type07
// Address: 0x2b9220 - 0x2b92e4
void e2d_id61_type07_0x2b9220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id61_type07_0x2b9220");
#endif

    ctx->pc = 0x2b9220u;

    // 0x2b9220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b9220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b9224: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b9224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b9228: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x2b9228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x2b922c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b922cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9230: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9234: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b9234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b9238: 0x3c034313  lui         $v1, 0x4313
    ctx->pc = 0x2b9238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17171 << 16));
    // 0x2b923c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b923cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9240: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9244: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b9244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b9248: 0x3c0342be  lui         $v1, 0x42BE
    ctx->pc = 0x2b9248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17086 << 16));
    // 0x2b924c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b924cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9250: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9254: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b9254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b9258: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b9258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b925c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b925cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9260: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9264: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b9264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b9268: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2b9268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2b926c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b926cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9270: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9274: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b9274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b9278: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x2b9278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2b927c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b927cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9280: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b9280u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b9284: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2b9284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2b9288: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b9288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b928c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b928cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9290: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9294: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b9294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b9298: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b9298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b929c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b929cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b92a0: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b92a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b92a4: 0x3c033f6b  lui         $v1, 0x3F6B
    ctx->pc = 0x2b92a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16235 << 16));
    // 0x2b92a8: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x2b92a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x2b92ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b92acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b92b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b92b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b92b4: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b92b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b92b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b92b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b92bc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b92bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b92c0: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b92c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b92c4: 0x3c033cf5  lui         $v1, 0x3CF5
    ctx->pc = 0x2b92c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15605 << 16));
    // 0x2b92c8: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2b92c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2b92cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b92ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b92d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b92d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b92d4: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b92d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b92d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b92d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b92dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B92DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B92DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B92E4u;
}
