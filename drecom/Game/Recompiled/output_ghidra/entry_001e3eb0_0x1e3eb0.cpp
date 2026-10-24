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

// Function: entry_001e3eb0
// Address: 0x1e3eb0 - 0x1e3ef8
void entry_001e3eb0_0x1e3eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3eb0_0x1e3eb0");
#endif

    switch (ctx->pc) {
        case 0x1e3ec4u: goto label_1e3ec4;
        default: break;
    }

    ctx->pc = 0x1e3eb0u;

    // 0x1e3eb0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1e3eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1e3eb4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1e3eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e3eb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e3eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3ebc: 0xc078340  jal         func_1E0D00
    ctx->pc = 0x1E3EBCu;
    SET_GPR_U32(ctx, 31, 0x1E3EC4u);
    ctx->pc = 0x1E0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0D00u, 0x1E3EBCu, 0x1E3EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3EC4u;
label_1e3ec4:
    // 0x1e3ec4: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x1e3ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1e3ec8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3ecc: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e3eccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e3ed0: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e3ed0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e3ed4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E3ED4u;
    {
        const bool branch_taken_0x1e3ed4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3ed4) {
            ctx->pc = 0x1E3EF8u;
            return;
        }
    }
    ctx->pc = 0x1E3EDCu;
    // 0x1e3edc: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x1e3edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x1e3ee0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3ee4: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e3ee4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e3ee8: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e3ee8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e3eec: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3EECu;
    {
        const bool branch_taken_0x1e3eec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3eec) {
            ctx->pc = 0x1E3F00u;
            return;
        }
    }
    ctx->pc = 0x1E3EF4u;
    // 0x1e3ef4: 0x0  nop
    ctx->pc = 0x1e3ef4u;
    // NOP
    ctx->pc = 0x1e3ef8u;
}
