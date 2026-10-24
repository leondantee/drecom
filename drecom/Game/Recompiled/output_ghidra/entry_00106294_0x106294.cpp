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

// Function: entry_00106294
// Address: 0x106294 - 0x1062b4
void entry_00106294_0x106294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106294_0x106294");
#endif

    switch (ctx->pc) {
        case 0x1062acu: goto label_1062ac;
        default: break;
    }

    ctx->pc = 0x106294u;

    // 0x106294: 0x54102a  slt         $v0, $v0, $s4
    ctx->pc = 0x106294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x106298: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x106298u;
    {
        const bool branch_taken_0x106298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106298u;
        // 0x10629c: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106298) {
            ctx->pc = 0x1062B4u;
            return;
        }
    }
    ctx->pc = 0x1062A0u;
    // 0x1062a0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1062a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1062a4: 0xc042b36  jal         func_10ACD8
    ctx->pc = 0x1062A4u;
    SET_GPR_U32(ctx, 31, 0x1062ACu);
    ctx->pc = 0x1062A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1062A4u;
    // 0x1062a8: 0x2484c720  addiu       $a0, $a0, -0x38E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACD8u, 0x1062A4u, 0x1062ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1062ACu;
label_1062ac:
    // 0x1062ac: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1062ACu;
    {
        const bool branch_taken_0x1062ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1062B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062ACu;
        // 0x1062b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062ac) {
            ctx->pc = 0x106384u;
            return;
        }
    }
    ctx->pc = 0x1062B4u;
}
