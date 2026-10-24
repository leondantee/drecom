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

// Function: H_cam_task_all_kill
// Address: 0x184c30 - 0x184c80
void H_cam_task_all_kill_0x184c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("H_cam_task_all_kill_0x184c30");
#endif

    switch (ctx->pc) {
        case 0x184c50u: goto label_184c50;
        default: break;
    }

    ctx->pc = 0x184c30u;

    // 0x184c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x184c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x184c34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x184c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x184c38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x184c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x184c3c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x184c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x184c40: 0x2470f430  addiu       $s0, $v1, -0xBD0
    ctx->pc = 0x184c40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964272));
    // 0x184c44: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x184c44u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x184c48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x184C48u;
    {
        const bool branch_taken_0x184c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184c48) {
            ctx->pc = 0x184C60u;
            goto label_184c60;
        }
    }
    ctx->pc = 0x184C50u;
label_184c50:
    // 0x184c50: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x184c50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x184c54: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x184c54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x184c58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x184c58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x184c5c: 0x0  nop
    ctx->pc = 0x184c5cu;
    // NOP
label_184c60:
    // 0x184c60: 0x2e230020  sltiu       $v1, $s1, 0x20
    ctx->pc = 0x184c60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x184c64: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x184C64u;
    {
        const bool branch_taken_0x184c64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x184c64) {
            ctx->pc = 0x184C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184c50;
        }
    }
    ctx->pc = 0x184C6Cu;
    // 0x184c6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x184c6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184c70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x184c70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184c74: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x184c74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x184c78: 0x3e00008  jr          $ra
    ctx->pc = 0x184C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184C80u;
}
