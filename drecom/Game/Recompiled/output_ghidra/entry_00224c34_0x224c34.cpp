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

// Function: entry_00224c34
// Address: 0x224c34 - 0x224c40
void entry_00224c34_0x224c34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00224c34_0x224c34");
#endif

    switch (ctx->pc) {
        case 0x224c3cu: goto label_224c3c;
        default: break;
    }

    ctx->pc = 0x224c34u;

    // 0x224c34: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x224C34u;
    SET_GPR_U32(ctx, 31, 0x224C3Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x224C34u, 0x224C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C3Cu;
label_224c3c:
    // 0x224c3c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x224c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x224c40u;
}
