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

// Function: entry_00379d10
// Address: 0x379d10 - 0x379d30
void entry_00379d10_0x379d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00379d10_0x379d10");
#endif

    switch (ctx->pc) {
        case 0x379d28u: goto label_379d28;
        default: break;
    }

    ctx->pc = 0x379d10u;

    // 0x379d10: 0x8e045dc0  lw          $a0, 0x5DC0($s0)
    ctx->pc = 0x379d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24000)));
    // 0x379d14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x379d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x379d18: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x379D18u;
    {
        const bool branch_taken_0x379d18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x379d18) {
            ctx->pc = 0x379D58u;
            return;
        }
    }
    ctx->pc = 0x379D20u;
    // 0x379d20: 0xc0de7f4  jal         func_379FD0
    ctx->pc = 0x379D20u;
    SET_GPR_U32(ctx, 31, 0x379D28u);
    ctx->pc = 0x379FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379FD0u, 0x379D20u, 0x379D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379D28u;
label_379d28:
    // 0x379d28: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x379D28u;
    {
        const bool branch_taken_0x379d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x379d28) {
            ctx->pc = 0x379D58u;
            return;
        }
    }
    ctx->pc = 0x379D30u;
}
