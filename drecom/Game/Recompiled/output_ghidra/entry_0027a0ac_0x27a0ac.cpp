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

// Function: entry_0027a0ac
// Address: 0x27a0ac - 0x27a0b8
void entry_0027a0ac_0x27a0ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027a0ac_0x27a0ac");
#endif

    switch (ctx->pc) {
        case 0x27a0b4u: goto label_27a0b4;
        default: break;
    }

    ctx->pc = 0x27a0acu;

    // 0x27a0ac: 0xc09e834  jal         func_27A0D0
    ctx->pc = 0x27A0ACu;
    SET_GPR_U32(ctx, 31, 0x27A0B4u);
    ctx->pc = 0x27A0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A0D0u, 0x27A0ACu, 0x27A0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A0B4u;
label_27a0b4:
    // 0x27a0b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27a0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x27a0b8u;
}
