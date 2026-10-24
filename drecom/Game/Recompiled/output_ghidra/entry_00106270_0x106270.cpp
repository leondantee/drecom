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

// Function: entry_00106270
// Address: 0x106270 - 0x106290
void entry_00106270_0x106270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106270_0x106270");
#endif

    switch (ctx->pc) {
        case 0x106278u: goto label_106278;
        default: break;
    }

    ctx->pc = 0x106270u;

    // 0x106270: 0xc041792  jal         func_105E48
    ctx->pc = 0x106270u;
    SET_GPR_U32(ctx, 31, 0x106278u);
    ctx->pc = 0x105E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105E48u, 0x106270u, 0x106278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106278u;
label_106278:
    // 0x106278: 0x8ea33d08  lw          $v1, 0x3D08($s5)
    ctx->pc = 0x106278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 15624)));
    // 0x10627c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10627Cu;
    {
        const bool branch_taken_0x10627c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x106280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10627Cu;
        // 0x106280: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10627c) {
            ctx->pc = 0x106290u;
            return;
        }
    }
    ctx->pc = 0x106284u;
    // 0x106284: 0xaea03d08  sw          $zero, 0x3D08($s5)
    ctx->pc = 0x106284u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 15624), GPR_U32(ctx, 0));
    // 0x106288: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x106288u;
    {
        const bool branch_taken_0x106288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106288u;
        // 0x10628c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106288) {
            ctx->pc = 0x106384u;
            return;
        }
    }
    ctx->pc = 0x106290u;
}
