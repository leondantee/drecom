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

// Function: srp_id02_type0a
// Address: 0x2bf9f0 - 0x2bfa74
void srp_id02_type0a_0x2bf9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id02_type0a_0x2bf9f0");
#endif

    ctx->pc = 0x2bf9f0u;

    // 0x2bf9f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bf9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bf9f4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2bf9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2bf9f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bf9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bf9fc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bf9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfa00: 0xa064036a  sb          $a0, 0x36A($v1)
    ctx->pc = 0x2bfa00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 874), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bfa04: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2bfa04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bfa08: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bfa08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfa0c: 0xa0640342  sb          $a0, 0x342($v1)
    ctx->pc = 0x2bfa0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 834), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bfa10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bfa10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfa14: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bfa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfa18: 0xa0640347  sb          $a0, 0x347($v1)
    ctx->pc = 0x2bfa18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 839), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bfa1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bfa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfa20: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bfa20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfa24: 0xa064036b  sb          $a0, 0x36B($v1)
    ctx->pc = 0x2bfa24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 875), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bfa28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bfa28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfa2c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bfa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfa30: 0xa064036c  sb          $a0, 0x36C($v1)
    ctx->pc = 0x2bfa30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 876), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bfa34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bfa34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfa38: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bfa38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfa3c: 0xa064036d  sb          $a0, 0x36D($v1)
    ctx->pc = 0x2bfa3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 877), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bfa40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bfa40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfa44: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bfa44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfa48: 0xa0640344  sb          $a0, 0x344($v1)
    ctx->pc = 0x2bfa48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 836), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bfa4c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2bfa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2bfa50: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bfa50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfa54: 0xac640334  sw          $a0, 0x334($v1)
    ctx->pc = 0x2bfa54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 820), GPR_U32(ctx, 4));
    // 0x2bfa58: 0x3c03428c  lui         $v1, 0x428C
    ctx->pc = 0x2bfa58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17036 << 16));
    // 0x2bfa5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bfa5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bfa60: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bfa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfa64: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2bfa64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2bfa68: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2bfa68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bfa6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFA74u;
}
