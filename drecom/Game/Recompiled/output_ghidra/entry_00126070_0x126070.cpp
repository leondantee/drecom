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

// Function: entry_00126070
// Address: 0x126070 - 0x12609c
void entry_00126070_0x126070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126070_0x126070");
#endif

    switch (ctx->pc) {
        case 0x126078u: goto label_126078;
        default: break;
    }

    ctx->pc = 0x126070u;

    // 0x126070: 0xc067694  jal         func_19DA50
    ctx->pc = 0x126070u;
    SET_GPR_U32(ctx, 31, 0x126078u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x126070u, 0x126078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126078u;
label_126078:
    // 0x126078: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x126078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12607c: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x12607cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x126080: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x126080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126084: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x126084u;
    {
        const bool branch_taken_0x126084 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x126084) {
            ctx->pc = 0x12609Cu;
            return;
        }
    }
    ctx->pc = 0x12608Cu;
    // 0x12608c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12608Cu;
    {
        const bool branch_taken_0x12608c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12608c) {
            ctx->pc = 0x12609Cu;
            return;
        }
    }
    ctx->pc = 0x126094u;
    // 0x126094: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x126094u;
    {
        const bool branch_taken_0x126094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126094) {
            ctx->pc = 0x126140u;
            return;
        }
    }
    ctx->pc = 0x12609Cu;
}
