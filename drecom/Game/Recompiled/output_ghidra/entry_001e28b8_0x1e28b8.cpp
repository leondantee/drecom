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

// Function: entry_001e28b8
// Address: 0x1e28b8 - 0x1e2900
void entry_001e28b8_0x1e28b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e28b8_0x1e28b8");
#endif

    switch (ctx->pc) {
        case 0x1e28ccu: goto label_1e28cc;
        default: break;
    }

    ctx->pc = 0x1e28b8u;

    // 0x1e28b8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1e28b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e28bc: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1e28bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e28c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e28c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e28c4: 0xc078340  jal         func_1E0D00
    ctx->pc = 0x1E28C4u;
    SET_GPR_U32(ctx, 31, 0x1E28CCu);
    ctx->pc = 0x1E0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0D00u, 0x1E28C4u, 0x1E28CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E28CCu;
label_1e28cc:
    // 0x1e28cc: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x1e28ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e28d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e28d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e28d4: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e28d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e28d8: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e28d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e28dc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E28DCu;
    {
        const bool branch_taken_0x1e28dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e28dc) {
            ctx->pc = 0x1E2900u;
            return;
        }
    }
    ctx->pc = 0x1E28E4u;
    // 0x1e28e4: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x1e28e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x1e28e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e28e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e28ec: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e28ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e28f0: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e28f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e28f4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E28F4u;
    {
        const bool branch_taken_0x1e28f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e28f4) {
            ctx->pc = 0x1E2908u;
            return;
        }
    }
    ctx->pc = 0x1E28FCu;
    // 0x1e28fc: 0x0  nop
    ctx->pc = 0x1e28fcu;
    // NOP
    ctx->pc = 0x1e2900u;
}
