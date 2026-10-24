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

// Function: entry_00332600
// Address: 0x332600 - 0x332620
void entry_00332600_0x332600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00332600_0x332600");
#endif

    switch (ctx->pc) {
        case 0x332618u: goto label_332618;
        default: break;
    }

    ctx->pc = 0x332600u;

    // 0x332600: 0x8e035dc0  lw          $v1, 0x5DC0($s0)
    ctx->pc = 0x332600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24000)));
    // 0x332604: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x332604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x332608: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x332608u;
    {
        const bool branch_taken_0x332608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x332608) {
            ctx->pc = 0x332648u;
            return;
        }
    }
    ctx->pc = 0x332610u;
    // 0x332610: 0xc0cccc4  jal         func_333310
    ctx->pc = 0x332610u;
    SET_GPR_U32(ctx, 31, 0x332618u);
    ctx->pc = 0x333310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333310u, 0x332610u, 0x332618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332618u;
label_332618:
    // 0x332618: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x332618u;
    {
        const bool branch_taken_0x332618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x332618) {
            ctx->pc = 0x332648u;
            return;
        }
    }
    ctx->pc = 0x332620u;
}
