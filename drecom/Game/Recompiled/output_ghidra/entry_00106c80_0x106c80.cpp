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

// Function: entry_00106c80
// Address: 0x106c80 - 0x106ca4
void entry_00106c80_0x106c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106c80_0x106c80");
#endif

    switch (ctx->pc) {
        case 0x106c90u: goto label_106c90;
        default: break;
    }

    ctx->pc = 0x106c80u;

    // 0x106c80: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x106c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c84: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x106c84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c88: 0xc041a68  jal         func_1069A0
    ctx->pc = 0x106C88u;
    SET_GPR_U32(ctx, 31, 0x106C90u);
    ctx->pc = 0x106C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106C88u;
    // 0x106c8c: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1069A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069A0u, 0x106C88u, 0x106C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106C90u;
label_106c90:
    // 0x106c90: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x106C90u;
    {
        const bool branch_taken_0x106c90 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x106c90) {
            ctx->pc = 0x106CA4u;
            return;
        }
    }
    ctx->pc = 0x106C98u;
    // 0x106c98: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x106c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x106c9c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x106c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x106ca0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x106ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x106ca4u;
}
