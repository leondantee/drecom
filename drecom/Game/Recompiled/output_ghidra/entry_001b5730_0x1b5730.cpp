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

// Function: entry_001b5730
// Address: 0x1b5730 - 0x1b5764
void entry_001b5730_0x1b5730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5730_0x1b5730");
#endif

    switch (ctx->pc) {
        case 0x1b5748u: goto label_1b5748;
        default: break;
    }

    ctx->pc = 0x1b5730u;

    // 0x1b5730: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b5730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b5734: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1b5734u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1b5738: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B5738u;
    {
        const bool branch_taken_0x1b5738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5738) {
            ctx->pc = 0x1B5794u;
            return;
        }
    }
    ctx->pc = 0x1B5740u;
    // 0x1b5740: 0xc057acc  jal         func_15EB30
    ctx->pc = 0x1B5740u;
    SET_GPR_U32(ctx, 31, 0x1B5748u);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x1B5740u, 0x1B5748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5748u;
label_1b5748:
    // 0x1b5748: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5748u;
    {
        const bool branch_taken_0x1b5748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5748) {
            ctx->pc = 0x1B5764u;
            return;
        }
    }
    ctx->pc = 0x1B5750u;
    // 0x1b5750: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1b5750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b5754: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b5754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b5758: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1b5758u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1b575c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B575Cu;
    {
        const bool branch_taken_0x1b575c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b575c) {
            ctx->pc = 0x1B5794u;
            return;
        }
    }
    ctx->pc = 0x1B5764u;
}
