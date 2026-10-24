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

// Function: entry_001c1be0
// Address: 0x1c1be0 - 0x1c1c04
void entry_001c1be0_0x1c1be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1be0_0x1c1be0");
#endif

    switch (ctx->pc) {
        case 0x1c1be8u: goto label_1c1be8;
        default: break;
    }

    ctx->pc = 0x1c1be0u;

    // 0x1c1be0: 0xc057acc  jal         func_15EB30
    ctx->pc = 0x1C1BE0u;
    SET_GPR_U32(ctx, 31, 0x1C1BE8u);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x1C1BE0u, 0x1C1BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1BE8u;
label_1c1be8:
    // 0x1c1be8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C1BE8u;
    {
        const bool branch_taken_0x1c1be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1be8) {
            ctx->pc = 0x1C1C04u;
            return;
        }
    }
    ctx->pc = 0x1C1BF0u;
    // 0x1c1bf0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1c1bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c1bf4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1bf8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1c1bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1c1bfc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1C1BFCu;
    {
        const bool branch_taken_0x1c1bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1bfc) {
            ctx->pc = 0x1C1CA0u;
            return;
        }
    }
    ctx->pc = 0x1C1C04u;
}
