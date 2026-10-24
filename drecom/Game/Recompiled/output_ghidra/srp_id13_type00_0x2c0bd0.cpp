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

// Function: srp_id13_type00
// Address: 0x2c0bd0 - 0x2c0c4c
void srp_id13_type00_0x2c0bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id13_type00_0x2c0bd0");
#endif

    ctx->pc = 0x2c0bd0u;

    // 0x2c0bd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c0bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c0bd4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2c0bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2c0bd8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0bdc: 0xa0600342  sb          $zero, 0x342($v1)
    ctx->pc = 0x2c0bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 834), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c0be0: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2c0be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c0be4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0be8: 0xa0640347  sb          $a0, 0x347($v1)
    ctx->pc = 0x2c0be8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 839), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c0bec: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2c0becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c0bf0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0bf4: 0xa0640344  sb          $a0, 0x344($v1)
    ctx->pc = 0x2c0bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 836), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c0bf8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c0bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0bfc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0c00: 0xa064036d  sb          $a0, 0x36D($v1)
    ctx->pc = 0x2c0c00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 877), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c0c04: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2c0c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2c0c08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0c08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0c0c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0c10: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c0c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c0c14: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2c0c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2c0c18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0c18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0c1c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0c20: 0xe460033c  swc1        $f0, 0x33C($v1)
    ctx->pc = 0x2c0c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 828), bits); }
    // 0x2c0c24: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0c28: 0xa0600348  sb          $zero, 0x348($v1)
    ctx->pc = 0x2c0c28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 840), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c0c2c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0c30: 0xa0600345  sb          $zero, 0x345($v1)
    ctx->pc = 0x2c0c30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 837), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c0c34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c0c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0c38: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0c3c: 0xa064036b  sb          $a0, 0x36B($v1)
    ctx->pc = 0x2c0c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 875), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c0c40: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c0c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c0c44: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0C4Cu;
}
