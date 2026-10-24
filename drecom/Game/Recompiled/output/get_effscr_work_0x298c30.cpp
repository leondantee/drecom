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

// Function: get_effscr_work
// Address: 0x298c30 - 0x298cb0
void get_effscr_work_0x298c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("get_effscr_work_0x298c30");
#endif

    switch (ctx->pc) {
        case 0x298c50u: goto label_298c50;
        default: break;
    }

    ctx->pc = 0x298c30u;

    // 0x298c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x298c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x298c34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x298c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x298c38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x298c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x298c3c: 0x3c020085  lui         $v0, 0x85
    ctx->pc = 0x298c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)133 << 16));
    // 0x298c40: 0x24513590  addiu       $s1, $v0, 0x3590
    ctx->pc = 0x298c40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 13712));
    // 0x298c44: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x298c44u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x298c48: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x298C48u;
    {
        const bool branch_taken_0x298c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298c48) {
            ctx->pc = 0x298C88u;
            goto label_298c88;
        }
    }
    ctx->pc = 0x298C50u;
label_298c50:
    // 0x298c50: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x298c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x298c54: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x298c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x298c58: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x298c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x298c5c: 0x3c020085  lui         $v0, 0x85
    ctx->pc = 0x298c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)133 << 16));
    // 0x298c60: 0x24423590  addiu       $v0, $v0, 0x3590
    ctx->pc = 0x298c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13712));
    // 0x298c64: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x298c64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x298c68: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x298c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x298c6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x298c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x298c70: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x298C70u;
    {
        const bool branch_taken_0x298c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298c70) {
            ctx->pc = 0x298C84u;
            goto label_298c84;
        }
    }
    ctx->pc = 0x298C78u;
    // 0x298c78: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x298c78u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x298c7c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x298C7Cu;
    {
        const bool branch_taken_0x298c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298c7c) {
            ctx->pc = 0x298C9Cu;
            goto label_298c9c;
        }
    }
    ctx->pc = 0x298C84u;
label_298c84:
    // 0x298c84: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x298c84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_298c88:
    // 0x298c88: 0x2e020040  sltiu       $v0, $s0, 0x40
    ctx->pc = 0x298c88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x298c8c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x298C8Cu;
    {
        const bool branch_taken_0x298c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298c8c) {
            ctx->pc = 0x298C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_298c50;
        }
    }
    ctx->pc = 0x298C94u;
    // 0x298c94: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x298c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x298c98: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x298c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
label_298c9c:
    // 0x298c9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x298c9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298ca0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x298ca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298ca4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x298ca4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x298ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x298CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298CB0u;
}
