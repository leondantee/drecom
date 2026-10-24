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

// Function: srp_id1d_type06
// Address: 0x2c22c0 - 0x2c236c
void srp_id1d_type06_0x2c22c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id1d_type06_0x2c22c0");
#endif

    ctx->pc = 0x2c22c0u;

    // 0x2c22c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c22c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c22c4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2c22c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2c22c8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2c22c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2c22cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c22ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c22d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c22d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c22d4: 0xe46002d0  swc1        $f0, 0x2D0($v1)
    ctx->pc = 0x2c22d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 720), bits); }
    // 0x2c22d8: 0x3c0342f8  lui         $v1, 0x42F8
    ctx->pc = 0x2c22d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17144 << 16));
    // 0x2c22dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c22dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c22e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c22e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c22e4: 0xe46002d4  swc1        $f0, 0x2D4($v1)
    ctx->pc = 0x2c22e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 724), bits); }
    // 0x2c22e8: 0x3c0342f8  lui         $v1, 0x42F8
    ctx->pc = 0x2c22e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17144 << 16));
    // 0x2c22ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c22ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c22f0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c22f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c22f4: 0xe46002d8  swc1        $f0, 0x2D8($v1)
    ctx->pc = 0x2c22f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 728), bits); }
    // 0x2c22f8: 0x3c034288  lui         $v1, 0x4288
    ctx->pc = 0x2c22f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17032 << 16));
    // 0x2c22fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c22fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2300: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c2300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c2304: 0xe46002dc  swc1        $f0, 0x2DC($v1)
    ctx->pc = 0x2c2304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 732), bits); }
    // 0x2c2308: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c2308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c230c: 0xa0600368  sb          $zero, 0x368($v1)
    ctx->pc = 0x2c230cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 872), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c2310: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c2310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c2314: 0xa0600342  sb          $zero, 0x342($v1)
    ctx->pc = 0x2c2314u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 834), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c2318: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2c2318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c231c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c231cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c2320: 0xa0640347  sb          $a0, 0x347($v1)
    ctx->pc = 0x2c2320u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 839), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c2324: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2c2324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c2328: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c2328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c232c: 0xa0640344  sb          $a0, 0x344($v1)
    ctx->pc = 0x2c232cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 836), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c2330: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c2330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2334: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c2334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c2338: 0xa064036d  sb          $a0, 0x36D($v1)
    ctx->pc = 0x2c2338u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 877), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c233c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c233cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c2340: 0xa0600368  sb          $zero, 0x368($v1)
    ctx->pc = 0x2c2340u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 872), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c2344: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c2344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2348: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c2348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c234c: 0xa064036b  sb          $a0, 0x36B($v1)
    ctx->pc = 0x2c234cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 875), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c2350: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x2c2350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
    // 0x2c2354: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c2354u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2358: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c2358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c235c: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c235cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c2360: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c2360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c2364: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C236Cu;
}
