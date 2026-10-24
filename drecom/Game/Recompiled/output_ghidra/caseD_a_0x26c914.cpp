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

// Function: caseD_a
// Address: 0x26c914 - 0x26c960
void caseD_a_0x26c914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x26c914");
#endif

    switch (ctx->pc) {
        case 0x26c924u: goto label_26c924;
        case 0x26c95cu: goto label_26c95c;
        default: break;
    }

    ctx->pc = 0x26c914u;

    // 0x26c914: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x26c914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x26c918: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x26c918u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x26c91c: 0xc0bcf50  jal         func_2F3D40
    ctx->pc = 0x26C91Cu;
    SET_GPR_U32(ctx, 31, 0x26C924u);
    ctx->pc = 0x2F3D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3D40u, 0x26C91Cu, 0x26C924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C924u;
label_26c924:
    // 0x26c924: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x26c924u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26c928: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x26c928u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c92c: 0x8ce81b68  lw          $t0, 0x1B68($a3)
    ctx->pc = 0x26c92cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 7016)));
    // 0x26c930: 0x11000011  beqz        $t0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26C930u;
    {
        const bool branch_taken_0x26c930 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c930) {
            ctx->pc = 0x26C978u;
            return;
        }
    }
    ctx->pc = 0x26C938u;
    // 0x26c938: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c93c: 0x8c631b68  lw          $v1, 0x1B68($v1)
    ctx->pc = 0x26c93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7016)));
    // 0x26c940: 0x2c610005  sltiu       $at, $v1, 0x5
    ctx->pc = 0x26c940u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x26c944: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x26C944u;
    {
        const bool branch_taken_0x26c944 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c944) {
            ctx->pc = 0x26C960u;
            return;
        }
    }
    ctx->pc = 0x26C94Cu;
    // 0x26c94c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26c94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x26c950: 0x8c24fd50  lw          $a0, -0x2B0($at)
    ctx->pc = 0x26c950u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61FD50u));
    // 0x26c954: 0xc09b960  jal         func_26E580
    ctx->pc = 0x26C954u;
    SET_GPR_U32(ctx, 31, 0x26C95Cu);
    ctx->pc = 0x26E580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E580u, 0x26C954u, 0x26C95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C95Cu;
label_26c95c:
    // 0x26c95c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x26c95cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x26c960u;
}
