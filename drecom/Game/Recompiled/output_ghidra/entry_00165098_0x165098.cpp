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

// Function: entry_00165098
// Address: 0x165098 - 0x1650e0
void entry_00165098_0x165098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165098_0x165098");
#endif

    switch (ctx->pc) {
        case 0x1650d4u: goto label_1650d4;
        default: break;
    }

    ctx->pc = 0x165098u;

    // 0x165098: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x165098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16509c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x16509Cu;
    {
        const bool branch_taken_0x16509c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16509c) {
            ctx->pc = 0x16506Cu;
            return;
        }
    }
    ctx->pc = 0x1650A4u;
    // 0x1650a4: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1650a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1650a8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1650a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1650ac: 0x3c01014e  lui         $at, 0x14E
    ctx->pc = 0x1650acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)334 << 16));
    // 0x1650b0: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x1650b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1);
    // 0x1650b4: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1650b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1650b8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1650B8u;
    {
        const bool branch_taken_0x1650b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1650b8) {
            ctx->pc = 0x1650E0u;
            return;
        }
    }
    ctx->pc = 0x1650C0u;
    // 0x1650c0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1650c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1650c4: 0x2444ead0  addiu       $a0, $v0, -0x1530
    ctx->pc = 0x1650c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961872));
    // 0x1650c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1650c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1650cc: 0xc059c48  jal         func_167120
    ctx->pc = 0x1650CCu;
    SET_GPR_U32(ctx, 31, 0x1650D4u);
    ctx->pc = 0x167120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167120u, 0x1650CCu, 0x1650D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1650D4u;
label_1650d4:
    // 0x1650d4: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1650d4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1650d8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1650D8u;
    {
        const bool branch_taken_0x1650d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1650d8) {
            ctx->pc = 0x165120u;
            return;
        }
    }
    ctx->pc = 0x1650E0u;
}
