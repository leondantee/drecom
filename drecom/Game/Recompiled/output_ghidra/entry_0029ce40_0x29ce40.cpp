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

// Function: entry_0029ce40
// Address: 0x29ce40 - 0x29ce50
void entry_0029ce40_0x29ce40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029ce40_0x29ce40");
#endif

    switch (ctx->pc) {
        case 0x29ce4cu: goto label_29ce4c;
        default: break;
    }

    ctx->pc = 0x29ce40u;

    // 0x29ce40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29ce40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ce44: 0xc084964  jal         func_212590
    ctx->pc = 0x29CE44u;
    SET_GPR_U32(ctx, 31, 0x29CE4Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x29CE44u, 0x29CE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CE4Cu;
label_29ce4c:
    // 0x29ce4c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29ce4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x29ce50u;
}
