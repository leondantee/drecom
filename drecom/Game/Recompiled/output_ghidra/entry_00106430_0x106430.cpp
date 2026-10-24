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

// Function: entry_00106430
// Address: 0x106430 - 0x106454
void entry_00106430_0x106430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106430_0x106430");
#endif

    switch (ctx->pc) {
        case 0x10644cu: goto label_10644c;
        default: break;
    }

    ctx->pc = 0x106430u;

    // 0x106430: 0x8d833d7c  lw          $v1, 0x3D7C($t4)
    ctx->pc = 0x106430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 15740)));
    // 0x106434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x106434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106438: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x106438u;
    {
        const bool branch_taken_0x106438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x106438) {
            ctx->pc = 0x10643Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106438u;
            // 0x10643c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106454u;
            return;
        }
    }
    ctx->pc = 0x106440u;
    // 0x106440: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x106440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x106444: 0xc042b36  jal         func_10ACD8
    ctx->pc = 0x106444u;
    SET_GPR_U32(ctx, 31, 0x10644Cu);
    ctx->pc = 0x106448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106444u;
    // 0x106448: 0x2484c740  addiu       $a0, $a0, -0x38C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACD8u, 0x106444u, 0x10644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10644Cu;
label_10644c:
    // 0x10644c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x10644cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106450: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x106450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x106454u;
}
