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

// Function: e2d_id61_type08
// Address: 0x2b92f0 - 0x2b9380
void e2d_id61_type08_0x2b92f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id61_type08_0x2b92f0");
#endif

    ctx->pc = 0x2b92f0u;

    // 0x2b92f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b92f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b92f4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b92f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b92f8: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x2b92f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x2b92fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b92fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9300: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9304: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b9304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b9308: 0x3c034313  lui         $v1, 0x4313
    ctx->pc = 0x2b9308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17171 << 16));
    // 0x2b930c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b930cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9310: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9314: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b9314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b9318: 0x3c0342be  lui         $v1, 0x42BE
    ctx->pc = 0x2b9318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17086 << 16));
    // 0x2b931c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b931cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9320: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9324: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b9324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b9328: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2b9328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2b932c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b932cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9330: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9334: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b9334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b9338: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2b9338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2b933c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b933cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9340: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9344: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b9344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b9348: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b9348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b934c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b934cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9350: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b9350u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b9354: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b9354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9358: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b935c: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b935cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b9360: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2b9360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2b9364: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b9364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b9368: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9368u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b936c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b936cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9370: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b9370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b9374: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b9374u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b9378: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9380u;
}
