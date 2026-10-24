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

// Function: entry_0033aff4
// Address: 0x33aff4 - 0x33b014
void entry_0033aff4_0x33aff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033aff4_0x33aff4");
#endif

    switch (ctx->pc) {
        case 0x33b00cu: goto label_33b00c;
        default: break;
    }

    ctx->pc = 0x33aff4u;

    // 0x33aff4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33aff8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33aff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33affc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x33affcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33b000: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x33b000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x33b004: 0xc0cea94  jal         func_33AA50
    ctx->pc = 0x33B004u;
    SET_GPR_U32(ctx, 31, 0x33B00Cu);
    ctx->pc = 0x33AA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AA50u, 0x33B004u, 0x33B00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B00Cu;
label_33b00c:
    // 0x33b00c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x33B00Cu;
    {
        const bool branch_taken_0x33b00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b00c) {
            ctx->pc = 0x33B0ACu;
            return;
        }
    }
    ctx->pc = 0x33B014u;
}
