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

// Function: e2d_id61_type05
// Address: 0x2b90a0 - 0x2b9164
void e2d_id61_type05_0x2b90a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id61_type05_0x2b90a0");
#endif

    ctx->pc = 0x2b90a0u;

    // 0x2b90a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b90a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b90a4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b90a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b90a8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b90a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b90ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b90acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b90b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b90b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b90b4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b90b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b90b8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b90b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b90bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b90bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b90c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b90c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b90c4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b90c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b90c8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b90c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b90cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b90ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b90d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b90d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b90d4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b90d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b90d8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b90d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b90dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b90dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b90e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b90e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b90e4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b90e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b90e8: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2b90e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2b90ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b90ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b90f0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b90f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b90f4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b90f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b90f8: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x2b90f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2b90fc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b90fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9100: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b9100u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b9104: 0x3c033e19  lui         $v1, 0x3E19
    ctx->pc = 0x2b9104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15897 << 16));
    // 0x2b9108: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2b9108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2b910c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b910cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9110: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9114: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b9114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b9118: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b9118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b911c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b911cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9120: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b9120u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b9124: 0x3c033f59  lui         $v1, 0x3F59
    ctx->pc = 0x2b9124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16217 << 16));
    // 0x2b9128: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2b9128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2b912c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b912cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9130: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9134: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b9134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b9138: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b9138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b913c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b913cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9140: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b9140u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b9144: 0x3c033cf5  lui         $v1, 0x3CF5
    ctx->pc = 0x2b9144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15605 << 16));
    // 0x2b9148: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2b9148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2b914c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b914cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9150: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9154: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b9154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b9158: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b9158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b915c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B915Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B915Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9164u;
}
