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

// Function: entry_00332648
// Address: 0x332648 - 0x33265c
void entry_00332648_0x332648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00332648_0x332648");
#endif

    ctx->pc = 0x332648u;

    // 0x332648: 0x8e025dc8  lw          $v0, 0x5DC8($s0)
    ctx->pc = 0x332648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
    // 0x33264c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33264Cu;
    {
        const bool branch_taken_0x33264c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33264c) {
            ctx->pc = 0x33265Cu;
            return;
        }
    }
    ctx->pc = 0x332654u;
    // 0x332654: 0xc0cce8c  jal         func_333A30
    ctx->pc = 0x332654u;
    SET_GPR_U32(ctx, 31, 0x33265Cu);
    ctx->pc = 0x333A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333A30u, 0x332654u, 0x33265Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33265Cu;
}
