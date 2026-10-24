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

// Function: entry_001a0328
// Address: 0x1a0328 - 0x1a0340
void entry_001a0328_0x1a0328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0328_0x1a0328");
#endif

    ctx->pc = 0x1a0328u;

    // 0x1a0328: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x1a0328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a032c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1A032Cu;
    {
        const bool branch_taken_0x1a032c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a032c) {
            ctx->pc = 0x1A02F4u;
            return;
        }
    }
    ctx->pc = 0x1A0334u;
    // 0x1a0334: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a0334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0338: 0xc0ce824  jal         func_33A090
    ctx->pc = 0x1A0338u;
    SET_GPR_U32(ctx, 31, 0x1A0340u);
    ctx->pc = 0x33A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A090u, 0x1A0338u, 0x1A0340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0340u;
}
