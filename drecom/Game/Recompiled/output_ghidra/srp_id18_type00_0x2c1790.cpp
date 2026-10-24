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

// Function: srp_id18_type00
// Address: 0x2c1790 - 0x2c183c
void srp_id18_type00_0x2c1790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id18_type00_0x2c1790");
#endif

    ctx->pc = 0x2c1790u;

    // 0x2c1790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c1790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c1794: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2c1794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2c1798: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c179c: 0xa0600342  sb          $zero, 0x342($v1)
    ctx->pc = 0x2c179cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 834), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c17a0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2c17a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c17a4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c17a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c17a8: 0xa0640347  sb          $a0, 0x347($v1)
    ctx->pc = 0x2c17a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 839), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c17ac: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2c17acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c17b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c17b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c17b4: 0xa0640344  sb          $a0, 0x344($v1)
    ctx->pc = 0x2c17b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 836), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c17b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c17b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c17bc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c17bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c17c0: 0xa064036d  sb          $a0, 0x36D($v1)
    ctx->pc = 0x2c17c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 877), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c17c4: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2c17c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2c17c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c17c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c17cc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c17ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c17d0: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c17d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c17d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c17d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c17d8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c17d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c17dc: 0xa064036b  sb          $a0, 0x36B($v1)
    ctx->pc = 0x2c17dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 875), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c17e0: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x2c17e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2c17e4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c17e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c17e8: 0xac640334  sw          $a0, 0x334($v1)
    ctx->pc = 0x2c17e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 820), GPR_U32(ctx, 4));
    // 0x2c17ec: 0x3c034340  lui         $v1, 0x4340
    ctx->pc = 0x2c17ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17216 << 16));
    // 0x2c17f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c17f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c17f4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c17f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c17f8: 0xe46002d0  swc1        $f0, 0x2D0($v1)
    ctx->pc = 0x2c17f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 720), bits); }
    // 0x2c17fc: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2c17fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2c1800: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c1800u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1804: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1808: 0xe46002d4  swc1        $f0, 0x2D4($v1)
    ctx->pc = 0x2c1808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 724), bits); }
    // 0x2c180c: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2c180cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2c1810: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c1810u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1814: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1818: 0xe46002d8  swc1        $f0, 0x2D8($v1)
    ctx->pc = 0x2c1818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 728), bits); }
    // 0x2c181c: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x2c181cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x2c1820: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2c1820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2c1824: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c1824u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1828: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c182c: 0xe46002ec  swc1        $f0, 0x2EC($v1)
    ctx->pc = 0x2c182cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 748), bits); }
    // 0x2c1830: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c1830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c1834: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C183Cu;
}
