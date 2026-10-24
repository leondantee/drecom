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

// Function: entry_001b56d4
// Address: 0x1b56d4 - 0x1b56f8
void entry_001b56d4_0x1b56d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b56d4_0x1b56d4");
#endif

    switch (ctx->pc) {
        case 0x1b56dcu: goto label_1b56dc;
        default: break;
    }

    ctx->pc = 0x1b56d4u;

    // 0x1b56d4: 0xc057acc  jal         func_15EB30
    ctx->pc = 0x1B56D4u;
    SET_GPR_U32(ctx, 31, 0x1B56DCu);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x1B56D4u, 0x1B56DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B56DCu;
label_1b56dc:
    // 0x1b56dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B56DCu;
    {
        const bool branch_taken_0x1b56dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b56dc) {
            ctx->pc = 0x1B56F8u;
            return;
        }
    }
    ctx->pc = 0x1B56E4u;
    // 0x1b56e4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1b56e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b56e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b56e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b56ec: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1b56ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1b56f0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1B56F0u;
    {
        const bool branch_taken_0x1b56f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b56f0) {
            ctx->pc = 0x1B5794u;
            return;
        }
    }
    ctx->pc = 0x1B56F8u;
}
