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

// Function: Movie_task_init
// Address: 0x1d8760 - 0x1d87c0
void Movie_task_init_0x1d8760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Movie_task_init_0x1d8760");
#endif

    switch (ctx->pc) {
        case 0x1d878cu: goto label_1d878c;
        default: break;
    }

    ctx->pc = 0x1d8760u;

    // 0x1d8760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d8760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d8764: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d8764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d8768: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d8768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d876c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d876cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d8770: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1d8770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1d8774: 0x2472c100  addiu       $s2, $v1, -0x3F00
    ctx->pc = 0x1d8774u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951168));
    // 0x1d8778: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1d8778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1d877c: 0x2470c174  addiu       $s0, $v1, -0x3E8C
    ctx->pc = 0x1d877cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951284));
    // 0x1d8780: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x1d8780u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d8784: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8784u;
    {
        const bool branch_taken_0x1d8784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8784) {
            ctx->pc = 0x1D8798u;
            goto label_1d8798;
        }
    }
    ctx->pc = 0x1D878Cu;
label_1d878c:
    // 0x1d878c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1d878cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1d8790: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x1d8790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1d8794: 0x0  nop
    ctx->pc = 0x1d8794u;
    // NOP
label_1d8798:
    // 0x1d8798: 0x72201e28  paddub      $v1, $s1, $zero
    ctx->pc = 0x1d8798u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1d879c: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x1d879cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d87a0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D87A0u;
    {
        const bool branch_taken_0x1d87a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d87a0) {
            ctx->pc = 0x1D878Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d878c;
        }
    }
    ctx->pc = 0x1D87A8u;
    // 0x1d87a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d87a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d87ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d87acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d87b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d87b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d87b4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d87b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d87b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D87B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D87B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D87C0u;
}
