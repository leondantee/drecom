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

// Function: entry_00216dd8
// Address: 0x216dd8 - 0x216df0
void entry_00216dd8_0x216dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216dd8_0x216dd8");
#endif

    switch (ctx->pc) {
        case 0x216de8u: goto label_216de8;
        default: break;
    }

    ctx->pc = 0x216dd8u;

    // 0x216dd8: 0x12020061  beq         $s0, $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x216DD8u;
    {
        const bool branch_taken_0x216dd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x216DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216DD8u;
        // 0x216ddc: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216dd8) {
            ctx->pc = 0x216F60u;
            return;
        }
    }
    ctx->pc = 0x216DE0u;
    // 0x216de0: 0xc0858c8  jal         func_216320
    ctx->pc = 0x216DE0u;
    SET_GPR_U32(ctx, 31, 0x216DE8u);
    ctx->pc = 0x216320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216320u, 0x216DE0u, 0x216DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216DE8u;
label_216de8:
    // 0x216de8: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x216DE8u;
    {
        const bool branch_taken_0x216de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216DE8u;
        // 0x216dec: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216de8) {
            ctx->pc = 0x216F60u;
            return;
        }
    }
    ctx->pc = 0x216DF0u;
}
