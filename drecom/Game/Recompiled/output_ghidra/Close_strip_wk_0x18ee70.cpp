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

// Function: Close_strip_wk
// Address: 0x18ee70 - 0x18efa4
void Close_strip_wk_0x18ee70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Close_strip_wk_0x18ee70");
#endif

    ctx->pc = 0x18ee70u;

    // 0x18ee70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18ee70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18ee74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ee74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18ee78: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x18ee78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x18ee7c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x18ee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x18ee80: 0x2450a630  addiu       $s0, $v0, -0x59D0
    ctx->pc = 0x18ee80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944304));
    // 0x18ee84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ee84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ee88: 0xac400b18  sw          $zero, 0xB18($v0)
    ctx->pc = 0x18ee88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2840), GPR_U32(ctx, 0));
    // 0x18ee8c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ee90: 0x8c420b20  lw          $v0, 0xB20($v0)
    ctx->pc = 0x18ee90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2848)));
    // 0x18ee94: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18EE94u;
    {
        const bool branch_taken_0x18ee94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ee94) {
            ctx->pc = 0x18EED0u;
            goto label_18eed0;
        }
    }
    ctx->pc = 0x18EE9Cu;
    // 0x18ee9c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18eea0: 0x8c420b24  lw          $v0, 0xB24($v0)
    ctx->pc = 0x18eea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2852)));
    // 0x18eea4: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x18eea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x18eea8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18EEA8u;
    {
        const bool branch_taken_0x18eea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18eea8) {
            ctx->pc = 0x18EEBCu;
            goto label_18eebc;
        }
    }
    ctx->pc = 0x18EEB0u;
    // 0x18eeb0: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x18eeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x18eeb4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x18EEB4u;
    {
        const bool branch_taken_0x18eeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eeb4) {
            ctx->pc = 0x18EF14u;
            goto label_18ef14;
        }
    }
    ctx->pc = 0x18EEBCu;
label_18eebc:
    // 0x18eebc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18eec0: 0x8c420b24  lw          $v0, 0xB24($v0)
    ctx->pc = 0x18eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2852)));
    // 0x18eec4: 0xac400b20  sw          $zero, 0xB20($v0)
    ctx->pc = 0x18eec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2848), GPR_U32(ctx, 0));
    // 0x18eec8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x18EEC8u;
    {
        const bool branch_taken_0x18eec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eec8) {
            ctx->pc = 0x18EF14u;
            goto label_18ef14;
        }
    }
    ctx->pc = 0x18EED0u;
label_18eed0:
    // 0x18eed0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18eed4: 0x8c430b24  lw          $v1, 0xB24($v0)
    ctx->pc = 0x18eed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2852)));
    // 0x18eed8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18eed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18eedc: 0x8c420b20  lw          $v0, 0xB20($v0)
    ctx->pc = 0x18eedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2848)));
    // 0x18eee0: 0xac430b24  sw          $v1, 0xB24($v0)
    ctx->pc = 0x18eee0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2852), GPR_U32(ctx, 3));
    // 0x18eee4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18EEE4u;
    {
        const bool branch_taken_0x18eee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18eee4) {
            ctx->pc = 0x18EF00u;
            goto label_18ef00;
        }
    }
    ctx->pc = 0x18EEECu;
    // 0x18eeec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18eef0: 0x8c420b20  lw          $v0, 0xB20($v0)
    ctx->pc = 0x18eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2848)));
    // 0x18eef4: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x18eef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x18eef8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18EEF8u;
    {
        const bool branch_taken_0x18eef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eef8) {
            ctx->pc = 0x18EF14u;
            goto label_18ef14;
        }
    }
    ctx->pc = 0x18EF00u;
label_18ef00:
    // 0x18ef00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ef04: 0x8c430b20  lw          $v1, 0xB20($v0)
    ctx->pc = 0x18ef04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2848)));
    // 0x18ef08: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ef08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ef0c: 0x8c420b24  lw          $v0, 0xB24($v0)
    ctx->pc = 0x18ef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2852)));
    // 0x18ef10: 0xac430b20  sw          $v1, 0xB20($v0)
    ctx->pc = 0x18ef10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2848), GPR_U32(ctx, 3));
label_18ef14:
    // 0x18ef14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ef14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ef18: 0x94420340  lhu         $v0, 0x340($v0)
    ctx->pc = 0x18ef18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 832)));
    // 0x18ef1c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18ef1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18ef20: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x18ef20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x18ef24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18EF24u;
    {
        const bool branch_taken_0x18ef24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ef24) {
            ctx->pc = 0x18EF3Cu;
            goto label_18ef3c;
        }
    }
    ctx->pc = 0x18EF2Cu;
    // 0x18ef2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ef30: 0x8c420b24  lw          $v0, 0xB24($v0)
    ctx->pc = 0x18ef30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2852)));
    // 0x18ef34: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x18EF34u;
    {
        const bool branch_taken_0x18ef34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ef34) {
            ctx->pc = 0x18EF94u;
            goto label_18ef94;
        }
    }
    ctx->pc = 0x18EF3Cu;
label_18ef3c:
    // 0x18ef3c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ef40: 0xac400b2c  sw          $zero, 0xB2C($v0)
    ctx->pc = 0x18ef40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2860), GPR_U32(ctx, 0));
    // 0x18ef44: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x18ef44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x18ef48: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18EF48u;
    {
        const bool branch_taken_0x18ef48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ef48) {
            ctx->pc = 0x18EF68u;
            goto label_18ef68;
        }
    }
    ctx->pc = 0x18EF50u;
    // 0x18ef50: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ef54: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x18ef54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x18ef58: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ef58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ef5c: 0xac400b28  sw          $zero, 0xB28($v0)
    ctx->pc = 0x18ef5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2856), GPR_U32(ctx, 0));
    // 0x18ef60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18EF60u;
    {
        const bool branch_taken_0x18ef60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ef60) {
            ctx->pc = 0x18EF80u;
            goto label_18ef80;
        }
    }
    ctx->pc = 0x18EF68u;
label_18ef68:
    // 0x18ef68: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x18ef68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x18ef6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ef70: 0xac430b28  sw          $v1, 0xB28($v0)
    ctx->pc = 0x18ef70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2856), GPR_U32(ctx, 3));
    // 0x18ef74: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x18ef74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ef78: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x18ef78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x18ef7c: 0xac430b2c  sw          $v1, 0xB2C($v0)
    ctx->pc = 0x18ef7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2860), GPR_U32(ctx, 3));
label_18ef80:
    // 0x18ef80: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ef80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ef84: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x18ef84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x18ef88: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ef8c: 0x8c420b24  lw          $v0, 0xB24($v0)
    ctx->pc = 0x18ef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2852)));
    // 0x18ef90: 0x0  nop
    ctx->pc = 0x18ef90u;
    // NOP
label_18ef94:
    // 0x18ef94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ef94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ef98: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x18ef98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18ef9c: 0x3e00008  jr          $ra
    ctx->pc = 0x18EF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EF9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EFA4u;
}
