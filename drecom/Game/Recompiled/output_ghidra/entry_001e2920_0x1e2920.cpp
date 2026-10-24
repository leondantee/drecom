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

// Function: entry_001e2920
// Address: 0x1e2920 - 0x1e2968
void entry_001e2920_0x1e2920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2920_0x1e2920");
#endif

    switch (ctx->pc) {
        case 0x1e2934u: goto label_1e2934;
        default: break;
    }

    ctx->pc = 0x1e2920u;

    // 0x1e2920: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1e2920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1e2924: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1e2924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e2928: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e2928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e292c: 0xc078340  jal         func_1E0D00
    ctx->pc = 0x1E292Cu;
    SET_GPR_U32(ctx, 31, 0x1E2934u);
    ctx->pc = 0x1E0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0D00u, 0x1E292Cu, 0x1E2934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2934u;
label_1e2934:
    // 0x1e2934: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x1e2934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1e2938: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e2938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e293c: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e293cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e2940: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e2940u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e2944: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E2944u;
    {
        const bool branch_taken_0x1e2944 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2944) {
            ctx->pc = 0x1E2968u;
            return;
        }
    }
    ctx->pc = 0x1E294Cu;
    // 0x1e294c: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x1e294cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x1e2950: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e2950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2954: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e2954u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e2958: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e2958u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e295c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E295Cu;
    {
        const bool branch_taken_0x1e295c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e295c) {
            ctx->pc = 0x1E2970u;
            return;
        }
    }
    ctx->pc = 0x1E2964u;
    // 0x1e2964: 0x0  nop
    ctx->pc = 0x1e2964u;
    // NOP
    ctx->pc = 0x1e2968u;
}
