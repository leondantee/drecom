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

// Function: Sat_exec
// Address: 0x19cd00 - 0x19cd48
void Sat_exec_0x19cd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sat_exec_0x19cd00");
#endif

    switch (ctx->pc) {
        case 0x19cd30u: goto label_19cd30;
        default: break;
    }

    ctx->pc = 0x19cd00u;

    // 0x19cd00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19cd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19cd04: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x19cd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x19cd08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19cd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19cd0c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x19cd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x19cd10: 0x8fb00028  lw          $s0, 0x28($sp)
    ctx->pc = 0x19cd10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19cd14: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x19cd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19cd18: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19CD18u;
    {
        const bool branch_taken_0x19cd18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cd18) {
            ctx->pc = 0x19CD34u;
            goto label_19cd34;
        }
    }
    ctx->pc = 0x19CD20u;
    // 0x19cd20: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19cd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19cd24: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x19cd24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19cd28: 0xc0848cc  jal         func_212330
    ctx->pc = 0x19CD28u;
    SET_GPR_U32(ctx, 31, 0x19CD30u);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x19CD28u, 0x19CD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CD30u;
label_19cd30:
    // 0x19cd30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19cd34:
    // 0x19cd34: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x19cd34u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cd38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19cd38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cd3c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19cd3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19cd40: 0x3e00008  jr          $ra
    ctx->pc = 0x19CD40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CD40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CD48u;
}
