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

// Function: entry_00125cc8
// Address: 0x125cc8 - 0x125cf4
void entry_00125cc8_0x125cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125cc8_0x125cc8");
#endif

    switch (ctx->pc) {
        case 0x125cd0u: goto label_125cd0;
        default: break;
    }

    ctx->pc = 0x125cc8u;

    // 0x125cc8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x125CC8u;
    SET_GPR_U32(ctx, 31, 0x125CD0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x125CC8u, 0x125CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125CD0u;
label_125cd0:
    // 0x125cd0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x125cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x125cd4: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x125cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x125cd8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x125cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x125cdc: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x125CDCu;
    {
        const bool branch_taken_0x125cdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x125cdc) {
            ctx->pc = 0x125D5Cu;
            return;
        }
    }
    ctx->pc = 0x125CE4u;
    // 0x125ce4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x125CE4u;
    {
        const bool branch_taken_0x125ce4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x125ce4) {
            ctx->pc = 0x125CF4u;
            return;
        }
    }
    ctx->pc = 0x125CECu;
    // 0x125cec: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x125CECu;
    {
        const bool branch_taken_0x125cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125cec) {
            ctx->pc = 0x125D5Cu;
            return;
        }
    }
    ctx->pc = 0x125CF4u;
}
