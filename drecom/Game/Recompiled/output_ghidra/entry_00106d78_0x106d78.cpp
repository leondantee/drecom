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

// Function: entry_00106d78
// Address: 0x106d78 - 0x106d90
void entry_00106d78_0x106d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106d78_0x106d78");
#endif

    switch (ctx->pc) {
        case 0x106d8cu: goto label_106d8c;
        default: break;
    }

    ctx->pc = 0x106d78u;

    // 0x106d78: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x106d78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x106d7c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106D7Cu;
    {
        const bool branch_taken_0x106d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D7Cu;
        // 0x106d80: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106d7c) {
            ctx->pc = 0x106D90u;
            return;
        }
    }
    ctx->pc = 0x106D84u;
    // 0x106d84: 0xc042928  jal         func_10A4A0
    ctx->pc = 0x106D84u;
    SET_GPR_U32(ctx, 31, 0x106D8Cu);
    ctx->pc = 0x106D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106D84u;
    // 0x106d88: 0x8e643bf4  lw          $a0, 0x3BF4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 15348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A4A0u, 0x106D84u, 0x106D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106D8Cu;
label_106d8c:
    // 0x106d8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x106d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x106d90u;
}
