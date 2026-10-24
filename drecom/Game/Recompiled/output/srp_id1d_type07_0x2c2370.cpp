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

// Function: srp_id1d_type07
// Address: 0x2c2370 - 0x2c241c
void srp_id1d_type07_0x2c2370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id1d_type07_0x2c2370");
#endif

    ctx->pc = 0x2c2370u;

    // 0x2c2370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c2370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c2374: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2c2374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2c2378: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2c2378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2c237c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c237cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2380: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c2380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c2384: 0xe46002d0  swc1        $f0, 0x2D0($v1)
    ctx->pc = 0x2c2384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 720), bits); }
    // 0x2c2388: 0x3c0342f8  lui         $v1, 0x42F8
    ctx->pc = 0x2c2388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17144 << 16));
    // 0x2c238c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c238cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2390: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c2390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c2394: 0xe46002d4  swc1        $f0, 0x2D4($v1)
    ctx->pc = 0x2c2394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 724), bits); }
    // 0x2c2398: 0x3c0342f8  lui         $v1, 0x42F8
    ctx->pc = 0x2c2398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17144 << 16));
    // 0x2c239c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c239cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c23a0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c23a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c23a4: 0xe46002d8  swc1        $f0, 0x2D8($v1)
    ctx->pc = 0x2c23a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 728), bits); }
    // 0x2c23a8: 0x3c03429c  lui         $v1, 0x429C
    ctx->pc = 0x2c23a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17052 << 16));
    // 0x2c23ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c23acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c23b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c23b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c23b4: 0xe46002dc  swc1        $f0, 0x2DC($v1)
    ctx->pc = 0x2c23b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 732), bits); }
    // 0x2c23b8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c23b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c23bc: 0xa0600368  sb          $zero, 0x368($v1)
    ctx->pc = 0x2c23bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 872), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c23c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c23c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c23c4: 0xa0600342  sb          $zero, 0x342($v1)
    ctx->pc = 0x2c23c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 834), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c23c8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2c23c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c23cc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c23ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c23d0: 0xa0640347  sb          $a0, 0x347($v1)
    ctx->pc = 0x2c23d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 839), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c23d4: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2c23d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c23d8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c23d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c23dc: 0xa0640344  sb          $a0, 0x344($v1)
    ctx->pc = 0x2c23dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 836), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c23e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c23e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c23e4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c23e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c23e8: 0xa064036d  sb          $a0, 0x36D($v1)
    ctx->pc = 0x2c23e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 877), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c23ec: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c23ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c23f0: 0xa0600368  sb          $zero, 0x368($v1)
    ctx->pc = 0x2c23f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 872), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c23f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c23f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c23f8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c23f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c23fc: 0xa064036b  sb          $a0, 0x36B($v1)
    ctx->pc = 0x2c23fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 875), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c2400: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x2c2400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x2c2404: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c2404u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2408: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c2408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c240c: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c240cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c2410: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c2410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c2414: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C241Cu;
}
