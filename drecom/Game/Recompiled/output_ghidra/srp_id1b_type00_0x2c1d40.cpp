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

// Function: srp_id1b_type00
// Address: 0x2c1d40 - 0x2c1dd4
void srp_id1b_type00_0x2c1d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id1b_type00_0x2c1d40");
#endif

    ctx->pc = 0x2c1d40u;

    // 0x2c1d40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c1d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c1d44: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2c1d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2c1d48: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1d4c: 0xa060034e  sb          $zero, 0x34E($v1)
    ctx->pc = 0x2c1d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 846), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c1d50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c1d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1d54: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1d58: 0xa064036d  sb          $a0, 0x36D($v1)
    ctx->pc = 0x2c1d58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 877), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c1d5c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1d60: 0xa0600342  sb          $zero, 0x342($v1)
    ctx->pc = 0x2c1d60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 834), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c1d64: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2c1d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c1d68: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1d6c: 0xa0640347  sb          $a0, 0x347($v1)
    ctx->pc = 0x2c1d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 839), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c1d70: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2c1d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2c1d74: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1d78: 0xa0640344  sb          $a0, 0x344($v1)
    ctx->pc = 0x2c1d78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 836), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c1d7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c1d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1d80: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1d84: 0xa064036d  sb          $a0, 0x36D($v1)
    ctx->pc = 0x2c1d84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 877), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c1d88: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x2c1d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x2c1d8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c1d8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1d90: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1d94: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c1d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c1d98: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2c1d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2c1d9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c1d9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1da0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1da4: 0xe460033c  swc1        $f0, 0x33C($v1)
    ctx->pc = 0x2c1da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 828), bits); }
    // 0x2c1da8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1dac: 0xa0600348  sb          $zero, 0x348($v1)
    ctx->pc = 0x2c1dacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 840), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c1db0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1db4: 0xa0600345  sb          $zero, 0x345($v1)
    ctx->pc = 0x2c1db4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 837), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c1db8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1dbc: 0xa060036b  sb          $zero, 0x36B($v1)
    ctx->pc = 0x2c1dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 875), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c1dc0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1dc4: 0xa060036c  sb          $zero, 0x36C($v1)
    ctx->pc = 0x2c1dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 876), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c1dc8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c1dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c1dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1DD4u;
}
