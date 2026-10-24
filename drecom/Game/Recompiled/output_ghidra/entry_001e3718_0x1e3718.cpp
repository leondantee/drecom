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

// Function: entry_001e3718
// Address: 0x1e3718 - 0x1e3760
void entry_001e3718_0x1e3718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3718_0x1e3718");
#endif

    switch (ctx->pc) {
        case 0x1e372cu: goto label_1e372c;
        default: break;
    }

    ctx->pc = 0x1e3718u;

    // 0x1e3718: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1e3718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e371c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1e371cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e3720: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e3720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3724: 0xc078340  jal         func_1E0D00
    ctx->pc = 0x1E3724u;
    SET_GPR_U32(ctx, 31, 0x1E372Cu);
    ctx->pc = 0x1E0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0D00u, 0x1E3724u, 0x1E372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E372Cu;
label_1e372c:
    // 0x1e372c: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1e372cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e3730: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3734: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e3734u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e3738: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e3738u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e373c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E373Cu;
    {
        const bool branch_taken_0x1e373c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e373c) {
            ctx->pc = 0x1E3760u;
            return;
        }
    }
    ctx->pc = 0x1E3744u;
    // 0x1e3744: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x1e3744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x1e3748: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e374c: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e374cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e3750: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e3750u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e3754: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3754u;
    {
        const bool branch_taken_0x1e3754 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3754) {
            ctx->pc = 0x1E3768u;
            return;
        }
    }
    ctx->pc = 0x1E375Cu;
    // 0x1e375c: 0x0  nop
    ctx->pc = 0x1e375cu;
    // NOP
    ctx->pc = 0x1e3760u;
}
