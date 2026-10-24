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

// Function: srp_id11_type00
// Address: 0x2c0970 - 0x2c09fc
void srp_id11_type00_0x2c0970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id11_type00_0x2c0970");
#endif

    ctx->pc = 0x2c0970u;

    // 0x2c0970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c0970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c0974: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2c0974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2c0978: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c097c: 0xa0600342  sb          $zero, 0x342($v1)
    ctx->pc = 0x2c097cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 834), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c0980: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2c0980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c0984: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0988: 0xa0640347  sb          $a0, 0x347($v1)
    ctx->pc = 0x2c0988u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 839), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c098c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2c098cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c0990: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0994: 0xa0640344  sb          $a0, 0x344($v1)
    ctx->pc = 0x2c0994u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 836), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c0998: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c0998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c099c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c099cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c09a0: 0xa064036d  sb          $a0, 0x36D($v1)
    ctx->pc = 0x2c09a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 877), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c09a4: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x2c09a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x2c09a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c09a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c09ac: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c09acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c09b0: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c09b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c09b4: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x2c09b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x2c09b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c09b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c09bc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c09bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c09c0: 0xe460033c  swc1        $f0, 0x33C($v1)
    ctx->pc = 0x2c09c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 828), bits); }
    // 0x2c09c4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c09c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c09c8: 0xa0600348  sb          $zero, 0x348($v1)
    ctx->pc = 0x2c09c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 840), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c09cc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c09ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c09d0: 0xa0600345  sb          $zero, 0x345($v1)
    ctx->pc = 0x2c09d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 837), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c09d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c09d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c09d8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c09d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c09dc: 0xa064036b  sb          $a0, 0x36B($v1)
    ctx->pc = 0x2c09dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 875), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c09e0: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2c09e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2c09e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c09e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c09e8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c09e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c09ec: 0xe4600274  swc1        $f0, 0x274($v1)
    ctx->pc = 0x2c09ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 628), bits); }
    // 0x2c09f0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c09f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c09f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C09F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C09F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C09FCu;
}
