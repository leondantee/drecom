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

// Function: entry_00116e84
// Address: 0x116e84 - 0x116e94
void entry_00116e84_0x116e84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116e84_0x116e84");
#endif

    switch (ctx->pc) {
        case 0x116e8cu: goto label_116e8c;
        default: break;
    }

    ctx->pc = 0x116e84u;

    // 0x116e84: 0xc046372  jal         func_118DC8
    ctx->pc = 0x116E84u;
    SET_GPR_U32(ctx, 31, 0x116E8Cu);
    ctx->pc = 0x116E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116E84u;
    // 0x116e88: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DC8u, 0x116E84u, 0x116E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116E8Cu;
label_116e8c:
    // 0x116e8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x116E8Cu;
    {
        const bool branch_taken_0x116e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E8Cu;
        // 0x116e90: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e8c) {
            ctx->pc = 0x116E98u;
            return;
        }
    }
    ctx->pc = 0x116E94u;
}
