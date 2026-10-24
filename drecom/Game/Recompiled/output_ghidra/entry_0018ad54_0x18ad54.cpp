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

// Function: entry_0018ad54
// Address: 0x18ad54 - 0x18ad60
void entry_0018ad54_0x18ad54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ad54_0x18ad54");
#endif

    switch (ctx->pc) {
        case 0x18ad5cu: goto label_18ad5c;
        default: break;
    }

    ctx->pc = 0x18ad54u;

    // 0x18ad54: 0xc05e858  jal         func_17A160
    ctx->pc = 0x18AD54u;
    SET_GPR_U32(ctx, 31, 0x18AD5Cu);
    ctx->pc = 0x17A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A160u, 0x18AD54u, 0x18AD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AD5Cu;
label_18ad5c:
    // 0x18ad5c: 0x240400bb  addiu       $a0, $zero, 0xBB
    ctx->pc = 0x18ad5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
    ctx->pc = 0x18ad60u;
}
