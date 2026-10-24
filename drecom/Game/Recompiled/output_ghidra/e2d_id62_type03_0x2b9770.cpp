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

// Function: e2d_id62_type03
// Address: 0x2b9770 - 0x2b9800
void e2d_id62_type03_0x2b9770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id62_type03_0x2b9770");
#endif

    ctx->pc = 0x2b9770u;

    // 0x2b9770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b9770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b9774: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b9774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b9778: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x2b9778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x2b977c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b977cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9780: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9784: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b9784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b9788: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2b9788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2b978c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b978cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9790: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9794: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b9794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b9798: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2b9798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2b979c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b979cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b97a0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b97a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b97a4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b97a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b97a8: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2b97a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2b97ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b97acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b97b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b97b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b97b4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b97b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b97b8: 0x3c03432a  lui         $v1, 0x432A
    ctx->pc = 0x2b97b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17194 << 16));
    // 0x2b97bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b97bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b97c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b97c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b97c4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b97c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b97c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b97c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b97cc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b97ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b97d0: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b97d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b97d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b97d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b97d8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b97d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b97dc: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b97dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b97e0: 0x3c03bc23  lui         $v1, 0xBC23
    ctx->pc = 0x2b97e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48163 << 16));
    // 0x2b97e4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b97e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b97e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b97e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b97ec: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b97ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b97f0: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b97f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b97f4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b97f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b97f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B97F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B97F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9800u;
}
