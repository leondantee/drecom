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

// Function: entry_00214bc8
// Address: 0x214bc8 - 0x214bd0
void entry_00214bc8_0x214bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214bc8_0x214bc8");
#endif

    ctx->pc = 0x214bc8u;

    // 0x214bc8: 0xc085162  jal         func_214588
    ctx->pc = 0x214BC8u;
    SET_GPR_U32(ctx, 31, 0x214BD0u);
    ctx->pc = 0x214BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214BC8u;
    // 0x214bcc: 0xffab00a8  sd          $t3, 0xA8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214588u, 0x214BC8u, 0x214BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214BD0u;
}
