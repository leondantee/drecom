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

// Function: entry_001e43a8
// Address: 0x1e43a8 - 0x1e43f0
void entry_001e43a8_0x1e43a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e43a8_0x1e43a8");
#endif

    switch (ctx->pc) {
        case 0x1e43bcu: goto label_1e43bc;
        default: break;
    }

    ctx->pc = 0x1e43a8u;

    // 0x1e43a8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1e43a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e43ac: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1e43acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e43b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e43b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e43b4: 0xc078340  jal         func_1E0D00
    ctx->pc = 0x1E43B4u;
    SET_GPR_U32(ctx, 31, 0x1E43BCu);
    ctx->pc = 0x1E0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0D00u, 0x1E43B4u, 0x1E43BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E43BCu;
label_1e43bc:
    // 0x1e43bc: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1e43bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e43c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e43c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e43c4: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e43c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e43c8: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e43c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e43cc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E43CCu;
    {
        const bool branch_taken_0x1e43cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e43cc) {
            ctx->pc = 0x1E43F0u;
            return;
        }
    }
    ctx->pc = 0x1E43D4u;
    // 0x1e43d4: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x1e43d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x1e43d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e43d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e43dc: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e43dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e43e0: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e43e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e43e4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E43E4u;
    {
        const bool branch_taken_0x1e43e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e43e4) {
            ctx->pc = 0x1E43F8u;
            return;
        }
    }
    ctx->pc = 0x1E43ECu;
    // 0x1e43ec: 0x0  nop
    ctx->pc = 0x1e43ecu;
    // NOP
    ctx->pc = 0x1e43f0u;
}
