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

// Function: e2d_id61_type02
// Address: 0x2b8e20 - 0x2b8ee4
void e2d_id61_type02_0x2b8e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id61_type02_0x2b8e20");
#endif

    ctx->pc = 0x2b8e20u;

    // 0x2b8e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b8e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b8e24: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b8e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b8e28: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x2b8e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x2b8e2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8e2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8e30: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8e34: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b8e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b8e38: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2b8e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2b8e3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8e3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8e40: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8e44: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b8e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b8e48: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2b8e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2b8e4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8e4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8e50: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8e54: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b8e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b8e58: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b8e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b8e5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8e5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8e60: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8e64: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b8e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b8e68: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2b8e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2b8e6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8e6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8e70: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8e74: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b8e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b8e78: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x2b8e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2b8e7c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8e80: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b8e80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b8e84: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2b8e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2b8e88: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b8e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b8e8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8e8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8e90: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8e94: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b8e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b8e98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b8e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8e9c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8ea0: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b8ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b8ea4: 0x3c033f6b  lui         $v1, 0x3F6B
    ctx->pc = 0x2b8ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16235 << 16));
    // 0x2b8ea8: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x2b8ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x2b8eac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8eacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8eb0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8eb4: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b8eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b8eb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b8eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8ebc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8ec0: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b8ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b8ec4: 0x3c033cf5  lui         $v1, 0x3CF5
    ctx->pc = 0x2b8ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15605 << 16));
    // 0x2b8ec8: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2b8ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2b8ecc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8eccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8ed0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8ed4: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b8ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b8ed8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b8ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b8edc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8EE4u;
}
