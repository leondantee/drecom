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

// Function: entry_002f619c
// Address: 0x2f619c - 0x2f61ac
void entry_002f619c_0x2f619c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f619c_0x2f619c");
#endif

    ctx->pc = 0x2f619cu;

    // 0x2f619c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2f619cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f61a0: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x2f61a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2f61a4: 0xc0c4908  jal         func_312420
    ctx->pc = 0x2F61A4u;
    SET_GPR_U32(ctx, 31, 0x2F61ACu);
    ctx->pc = 0x312420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312420u, 0x2F61A4u, 0x2F61ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F61ACu;
}
