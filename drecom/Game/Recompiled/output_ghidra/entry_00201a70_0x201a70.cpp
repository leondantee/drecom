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

// Function: entry_00201a70
// Address: 0x201a70 - 0x201ad0
void entry_00201a70_0x201a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201a70_0x201a70");
#endif

    switch (ctx->pc) {
        case 0x201ab0u: goto label_201ab0;
        default: break;
    }

    ctx->pc = 0x201a70u;

    // 0x201a70: 0x601ffec  bgez        $s0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x201A70u;
    {
        const bool branch_taken_0x201a70 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x201a70) {
            ctx->pc = 0x201A24u;
            return;
        }
    }
    ctx->pc = 0x201A78u;
    // 0x201a78: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x201a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x201a7c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x201a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x201a80: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x201a80u;
    SET_GPR_S32(ctx, 19, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x201a84: 0x2723023  subu        $a2, $s3, $s2
    ctx->pc = 0x201a84u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x201a88: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x201a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x201a8c: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x201a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x201a90: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x201a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x201a94: 0x3c021c07  lui         $v0, 0x1C07
    ctx->pc = 0x201a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7175 << 16));
    // 0x201a98: 0x34420a12  ori         $v0, $v0, 0xA12
    ctx->pc = 0x201a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2578);
    // 0x201a9c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x201a9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x201aa0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x201aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x201aa4: 0x24450d38  addiu       $a1, $v0, 0xD38
    ctx->pc = 0x201aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3384));
    // 0x201aa8: 0xc059b14  jal         func_166C50
    ctx->pc = 0x201AA8u;
    SET_GPR_U32(ctx, 31, 0x201AB0u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x201AA8u, 0x201AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201AB0u;
label_201ab0:
    // 0x201ab0: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x201ab0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x201ab4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x201ab4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x201ab8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x201ab8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201abc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x201abcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201ac0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x201ac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201ac4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x201ac4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x201ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x201AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201AD0u;
}
