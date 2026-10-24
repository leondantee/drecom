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

// Function: e2d_id49_type0c
// Address: 0x2b6030 - 0x2b60cc
void e2d_id49_type0c_0x2b6030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id49_type0c_0x2b6030");
#endif

    ctx->pc = 0x2b6030u;

    // 0x2b6030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b6030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b6034: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b6034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b6038: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x2b6038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x2b603c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b603cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6040: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6044: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b6044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b6048: 0x3c034313  lui         $v1, 0x4313
    ctx->pc = 0x2b6048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17171 << 16));
    // 0x2b604c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b604cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6050: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6054: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b6054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b6058: 0x3c0342be  lui         $v1, 0x42BE
    ctx->pc = 0x2b6058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17086 << 16));
    // 0x2b605c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b605cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6060: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6064: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b6064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b6068: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b6068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b606c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b606cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6070: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6074: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b6074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b6078: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2b6078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2b607c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b607cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6080: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6084: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b6084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b6088: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b6088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b608c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b608cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6090: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b6090u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b6094: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b6094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6098: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b609c: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b609cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b60a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b60a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b60a4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b60a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b60a8: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b60a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b60ac: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2b60acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2b60b0: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b60b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b60b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b60b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b60b8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b60b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b60bc: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b60bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b60c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b60c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b60c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B60C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B60C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B60CCu;
}
