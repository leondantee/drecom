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

// Function: entry_0010b658
// Address: 0x10b658 - 0x10b660
void entry_0010b658_0x10b658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b658_0x10b658");
#endif

    ctx->pc = 0x10b658u;

    // 0x10b658: 0xc041c9e  jal         func_107278
    ctx->pc = 0x10B658u;
    SET_GPR_U32(ctx, 31, 0x10B660u);
    ctx->pc = 0x10B65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B658u;
    // 0x10b65c: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x10B658u, 0x10B660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B660u;
}
