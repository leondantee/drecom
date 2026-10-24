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

// Function: entry_001c4748
// Address: 0x1c4748 - 0x1c477c
void entry_001c4748_0x1c4748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4748_0x1c4748");
#endif

    switch (ctx->pc) {
        case 0x1c4760u: goto label_1c4760;
        default: break;
    }

    ctx->pc = 0x1c4748u;

    // 0x1c4748: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c474c: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1c474cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1c4750: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C4750u;
    {
        const bool branch_taken_0x1c4750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4750) {
            ctx->pc = 0x1C47ACu;
            return;
        }
    }
    ctx->pc = 0x1C4758u;
    // 0x1c4758: 0xc057acc  jal         func_15EB30
    ctx->pc = 0x1C4758u;
    SET_GPR_U32(ctx, 31, 0x1C4760u);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x1C4758u, 0x1C4760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4760u;
label_1c4760:
    // 0x1c4760: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4760u;
    {
        const bool branch_taken_0x1c4760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4760) {
            ctx->pc = 0x1C477Cu;
            return;
        }
    }
    ctx->pc = 0x1C4768u;
    // 0x1c4768: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1c4768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c476c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c476cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4770: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1c4770u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1c4774: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C4774u;
    {
        const bool branch_taken_0x1c4774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4774) {
            ctx->pc = 0x1C47ACu;
            return;
        }
    }
    ctx->pc = 0x1C477Cu;
}
