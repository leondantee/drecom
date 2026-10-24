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

// Function: entry_001e2150
// Address: 0x1e2150 - 0x1e2198
void entry_001e2150_0x1e2150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2150_0x1e2150");
#endif

    switch (ctx->pc) {
        case 0x1e2164u: goto label_1e2164;
        default: break;
    }

    ctx->pc = 0x1e2150u;

    // 0x1e2150: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1e2150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1e2154: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1e2154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e2158: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e2158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e215c: 0xc078340  jal         func_1E0D00
    ctx->pc = 0x1E215Cu;
    SET_GPR_U32(ctx, 31, 0x1E2164u);
    ctx->pc = 0x1E0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0D00u, 0x1E215Cu, 0x1E2164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2164u;
label_1e2164:
    // 0x1e2164: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x1e2164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1e2168: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e2168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e216c: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e216cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e2170: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e2170u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e2174: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E2174u;
    {
        const bool branch_taken_0x1e2174 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2174) {
            ctx->pc = 0x1E2198u;
            return;
        }
    }
    ctx->pc = 0x1E217Cu;
    // 0x1e217c: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x1e217cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x1e2180: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e2180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2184: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e2184u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e2188: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e2188u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e218c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E218Cu;
    {
        const bool branch_taken_0x1e218c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e218c) {
            ctx->pc = 0x1E21A0u;
            return;
        }
    }
    ctx->pc = 0x1E2194u;
    // 0x1e2194: 0x0  nop
    ctx->pc = 0x1e2194u;
    // NOP
    ctx->pc = 0x1e2198u;
}
