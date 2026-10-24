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

// Function: entry_00106f80
// Address: 0x106f80 - 0x106f98
void entry_00106f80_0x106f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106f80_0x106f80");
#endif

    ctx->pc = 0x106f80u;

    // 0x106f80: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x106f80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x106f84: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106F84u;
    {
        const bool branch_taken_0x106f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F84u;
        // 0x106f88: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f84) {
            ctx->pc = 0x106F98u;
            return;
        }
    }
    ctx->pc = 0x106F8Cu;
    // 0x106f8c: 0x8e443bf4  lw          $a0, 0x3BF4($s2)
    ctx->pc = 0x106f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15348)));
    // 0x106f90: 0xc042928  jal         func_10A4A0
    ctx->pc = 0x106F90u;
    SET_GPR_U32(ctx, 31, 0x106F98u);
    ctx->pc = 0x106F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106F90u;
    // 0x106f94: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A4A0u, 0x106F90u, 0x106F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106F98u;
}
