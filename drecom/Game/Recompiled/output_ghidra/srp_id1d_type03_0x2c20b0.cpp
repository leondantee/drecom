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

// Function: srp_id1d_type03
// Address: 0x2c20b0 - 0x2c215c
void srp_id1d_type03_0x2c20b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id1d_type03_0x2c20b0");
#endif

    ctx->pc = 0x2c20b0u;

    // 0x2c20b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c20b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c20b4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2c20b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2c20b8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2c20b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2c20bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c20bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c20c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c20c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c20c4: 0xe46002d0  swc1        $f0, 0x2D0($v1)
    ctx->pc = 0x2c20c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 720), bits); }
    // 0x2c20c8: 0x3c0342f8  lui         $v1, 0x42F8
    ctx->pc = 0x2c20c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17144 << 16));
    // 0x2c20cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c20ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c20d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c20d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c20d4: 0xe46002d4  swc1        $f0, 0x2D4($v1)
    ctx->pc = 0x2c20d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 724), bits); }
    // 0x2c20d8: 0x3c0342f8  lui         $v1, 0x42F8
    ctx->pc = 0x2c20d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17144 << 16));
    // 0x2c20dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c20dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c20e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c20e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c20e4: 0xe46002d8  swc1        $f0, 0x2D8($v1)
    ctx->pc = 0x2c20e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 728), bits); }
    // 0x2c20e8: 0x3c03429c  lui         $v1, 0x429C
    ctx->pc = 0x2c20e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17052 << 16));
    // 0x2c20ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c20ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c20f0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c20f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c20f4: 0xe46002dc  swc1        $f0, 0x2DC($v1)
    ctx->pc = 0x2c20f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 732), bits); }
    // 0x2c20f8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c20f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c20fc: 0xa0600368  sb          $zero, 0x368($v1)
    ctx->pc = 0x2c20fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 872), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c2100: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c2100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c2104: 0xa0600342  sb          $zero, 0x342($v1)
    ctx->pc = 0x2c2104u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 834), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c2108: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2c2108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c210c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c210cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c2110: 0xa0640347  sb          $a0, 0x347($v1)
    ctx->pc = 0x2c2110u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 839), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c2114: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2c2114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c2118: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c2118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c211c: 0xa0640344  sb          $a0, 0x344($v1)
    ctx->pc = 0x2c211cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 836), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c2120: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c2120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2124: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c2124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c2128: 0xa064036d  sb          $a0, 0x36D($v1)
    ctx->pc = 0x2c2128u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 877), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c212c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c212cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c2130: 0xa0600368  sb          $zero, 0x368($v1)
    ctx->pc = 0x2c2130u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 872), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c2134: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c2134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2138: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c2138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c213c: 0xa064036b  sb          $a0, 0x36B($v1)
    ctx->pc = 0x2c213cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 875), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c2140: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x2c2140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x2c2144: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c2144u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2148: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c2148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c214c: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c214cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c2150: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c2150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c2154: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C215Cu;
}
