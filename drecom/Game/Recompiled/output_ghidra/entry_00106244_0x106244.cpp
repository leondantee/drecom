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

// Function: entry_00106244
// Address: 0x106244 - 0x106264
void entry_00106244_0x106244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106244_0x106244");
#endif

    switch (ctx->pc) {
        case 0x106254u: goto label_106254;
        default: break;
    }

    ctx->pc = 0x106244u;

    // 0x106244: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x106244u;
    {
        const bool branch_taken_0x106244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106244u;
        // 0x106248: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106244) {
            ctx->pc = 0x106294u;
            return;
        }
    }
    ctx->pc = 0x10624Cu;
    // 0x10624c: 0xc041c0a  jal         func_107028
    ctx->pc = 0x10624Cu;
    SET_GPR_U32(ctx, 31, 0x106254u);
    ctx->pc = 0x106250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10624Cu;
    // 0x106250: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107028u, 0x10624Cu, 0x106254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106254u;
label_106254:
    // 0x106254: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x106254u;
    {
        const bool branch_taken_0x106254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106254u;
        // 0x106258: 0x8e423d08  lw          $v0, 0x3D08($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106254) {
            ctx->pc = 0x106264u;
            return;
        }
    }
    ctx->pc = 0x10625Cu;
    // 0x10625c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10625Cu;
    {
        const bool branch_taken_0x10625c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10625c) {
            ctx->pc = 0x106270u;
            return;
        }
    }
    ctx->pc = 0x106264u;
}
