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

// Function: e2d_id62_type02
// Address: 0x2b96a0 - 0x2b9764
void e2d_id62_type02_0x2b96a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id62_type02_0x2b96a0");
#endif

    ctx->pc = 0x2b96a0u;

    // 0x2b96a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b96a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b96a4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b96a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b96a8: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x2b96a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x2b96ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b96acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b96b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b96b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b96b4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b96b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b96b8: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2b96b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2b96bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b96bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b96c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b96c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b96c4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b96c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b96c8: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2b96c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2b96cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b96ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b96d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b96d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b96d4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b96d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b96d8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b96d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b96dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b96dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b96e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b96e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b96e4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b96e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b96e8: 0x3c0342dc  lui         $v1, 0x42DC
    ctx->pc = 0x2b96e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17116 << 16));
    // 0x2b96ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b96ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b96f0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b96f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b96f4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b96f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b96f8: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x2b96f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2b96fc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b96fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9700: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b9700u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b9704: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2b9704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2b9708: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b9708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b970c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b970cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9710: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9714: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b9714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b9718: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b9718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b971c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b971cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9720: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b9720u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b9724: 0x3c033f6b  lui         $v1, 0x3F6B
    ctx->pc = 0x2b9724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16235 << 16));
    // 0x2b9728: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x2b9728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x2b972c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b972cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9730: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9734: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b9734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b9738: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b9738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b973c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b973cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9740: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b9740u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b9744: 0x3c03bcf5  lui         $v1, 0xBCF5
    ctx->pc = 0x2b9744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48373 << 16));
    // 0x2b9748: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2b9748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2b974c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b974cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9750: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9754: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b9754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b9758: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b9758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b975c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B975Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B975Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9764u;
}
