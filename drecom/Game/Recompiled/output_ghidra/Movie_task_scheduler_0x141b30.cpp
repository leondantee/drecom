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

// Function: Movie_task_scheduler
// Address: 0x141b30 - 0x141ba0
void Movie_task_scheduler_0x141b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Movie_task_scheduler_0x141b30");
#endif

    switch (ctx->pc) {
        case 0x141b48u: goto label_141b48;
        case 0x141b78u: goto label_141b78;
        default: break;
    }

    ctx->pc = 0x141b30u;

    // 0x141b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x141b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x141b34: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x141b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x141b38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x141b3c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x141b3cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x141b40: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x141B40u;
    {
        const bool branch_taken_0x141b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141b40) {
            ctx->pc = 0x141B80u;
            goto label_141b80;
        }
    }
    ctx->pc = 0x141B48u;
label_141b48:
    // 0x141b48: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x141b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x141b4c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x141b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x141b50: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x141b50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x141b54: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x141b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x141b58: 0x2463c100  addiu       $v1, $v1, -0x3F00
    ctx->pc = 0x141b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951168));
    // 0x141b5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x141b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x141b60: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x141b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x141b64: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x141B64u;
    {
        const bool branch_taken_0x141b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x141b64) {
            ctx->pc = 0x141B78u;
            goto label_141b78;
        }
    }
    ctx->pc = 0x141B6Cu;
    // 0x141b6c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x141b6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x141b70: 0xc0d7594  jal         func_35D650
    ctx->pc = 0x141B70u;
    SET_GPR_U32(ctx, 31, 0x141B78u);
    ctx->pc = 0x35D650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D650u, 0x141B70u, 0x141B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141B78u;
label_141b78:
    // 0x141b78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x141b78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x141b7c: 0x0  nop
    ctx->pc = 0x141b7cu;
    // NOP
label_141b80:
    // 0x141b80: 0x2e030006  sltiu       $v1, $s0, 0x6
    ctx->pc = 0x141b80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x141b84: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x141B84u;
    {
        const bool branch_taken_0x141b84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x141b84) {
            ctx->pc = 0x141B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141b48;
        }
    }
    ctx->pc = 0x141B8Cu;
    // 0x141b8c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x141b8cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141b90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141b90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141b94: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x141b94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x141b98: 0x3e00008  jr          $ra
    ctx->pc = 0x141B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141BA0u;
}
