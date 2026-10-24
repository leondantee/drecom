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

// Function: srp_id06_type00
// Address: 0x2bfc00 - 0x2bfc84
void srp_id06_type00_0x2bfc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id06_type00_0x2bfc00");
#endif

    ctx->pc = 0x2bfc00u;

    // 0x2bfc00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bfc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bfc04: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2bfc04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2bfc08: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2bfc08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2bfc0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bfc0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bfc10: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bfc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfc14: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2bfc14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2bfc18: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x2bfc18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x2bfc1c: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2bfc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2bfc20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bfc20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bfc24: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bfc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfc28: 0xe46002e0  swc1        $f0, 0x2E0($v1)
    ctx->pc = 0x2bfc28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 736), bits); }
    // 0x2bfc2c: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x2bfc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x2bfc30: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2bfc30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2bfc34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bfc34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bfc38: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bfc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfc3c: 0xe46002e4  swc1        $f0, 0x2E4($v1)
    ctx->pc = 0x2bfc3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 740), bits); }
    // 0x2bfc40: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x2bfc40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x2bfc44: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2bfc44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2bfc48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bfc48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bfc4c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bfc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfc50: 0xe46002e8  swc1        $f0, 0x2E8($v1)
    ctx->pc = 0x2bfc50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 744), bits); }
    // 0x2bfc54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bfc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfc58: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bfc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfc5c: 0xa0640344  sb          $a0, 0x344($v1)
    ctx->pc = 0x2bfc5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 836), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bfc60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bfc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfc64: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bfc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfc68: 0xa0640347  sb          $a0, 0x347($v1)
    ctx->pc = 0x2bfc68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 839), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bfc6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bfc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfc70: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bfc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfc74: 0xa064036d  sb          $a0, 0x36D($v1)
    ctx->pc = 0x2bfc74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 877), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bfc78: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2bfc78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bfc7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFC7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFC84u;
}
