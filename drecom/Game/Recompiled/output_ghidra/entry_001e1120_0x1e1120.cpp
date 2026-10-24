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

// Function: entry_001e1120
// Address: 0x1e1120 - 0x1e1168
void entry_001e1120_0x1e1120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1120_0x1e1120");
#endif

    switch (ctx->pc) {
        case 0x1e1134u: goto label_1e1134;
        default: break;
    }

    ctx->pc = 0x1e1120u;

    // 0x1e1120: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1e1120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e1124: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1e1124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e1128: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e1128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e112c: 0xc078340  jal         func_1E0D00
    ctx->pc = 0x1E112Cu;
    SET_GPR_U32(ctx, 31, 0x1E1134u);
    ctx->pc = 0x1E0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0D00u, 0x1E112Cu, 0x1E1134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1134u;
label_1e1134:
    // 0x1e1134: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1e1134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e1138: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e1138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e113c: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e113cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e1140: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e1140u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e1144: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E1144u;
    {
        const bool branch_taken_0x1e1144 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1144) {
            ctx->pc = 0x1E1168u;
            return;
        }
    }
    ctx->pc = 0x1E114Cu;
    // 0x1e114c: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x1e114cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x1e1150: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e1150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e1154: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e1154u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e1158: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e1158u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e115c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E115Cu;
    {
        const bool branch_taken_0x1e115c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e115c) {
            ctx->pc = 0x1E1170u;
            return;
        }
    }
    ctx->pc = 0x1E1164u;
    // 0x1e1164: 0x0  nop
    ctx->pc = 0x1e1164u;
    // NOP
    ctx->pc = 0x1e1168u;
}
