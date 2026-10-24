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

// Function: entry_001e20e8
// Address: 0x1e20e8 - 0x1e2130
void entry_001e20e8_0x1e20e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e20e8_0x1e20e8");
#endif

    switch (ctx->pc) {
        case 0x1e20fcu: goto label_1e20fc;
        default: break;
    }

    ctx->pc = 0x1e20e8u;

    // 0x1e20e8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1e20e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e20ec: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1e20ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e20f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e20f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e20f4: 0xc078340  jal         func_1E0D00
    ctx->pc = 0x1E20F4u;
    SET_GPR_U32(ctx, 31, 0x1E20FCu);
    ctx->pc = 0x1E0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0D00u, 0x1E20F4u, 0x1E20FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E20FCu;
label_1e20fc:
    // 0x1e20fc: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x1e20fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e2100: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e2100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2104: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e2104u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e2108: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e2108u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e210c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E210Cu;
    {
        const bool branch_taken_0x1e210c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e210c) {
            ctx->pc = 0x1E2130u;
            return;
        }
    }
    ctx->pc = 0x1E2114u;
    // 0x1e2114: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x1e2114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x1e2118: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e2118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e211c: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e211cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e2120: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e2120u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e2124: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E2124u;
    {
        const bool branch_taken_0x1e2124 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2124) {
            ctx->pc = 0x1E2138u;
            return;
        }
    }
    ctx->pc = 0x1E212Cu;
    // 0x1e212c: 0x0  nop
    ctx->pc = 0x1e212cu;
    // NOP
    ctx->pc = 0x1e2130u;
}
