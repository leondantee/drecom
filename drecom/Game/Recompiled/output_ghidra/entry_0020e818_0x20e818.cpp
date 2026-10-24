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

// Function: entry_0020e818
// Address: 0x20e818 - 0x20e828
void entry_0020e818_0x20e818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020e818_0x20e818");
#endif

    ctx->pc = 0x20e818u;

    // 0x20e818: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e81c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x20e81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x20e820: 0xc0baff8  jal         func_2EBFE0
    ctx->pc = 0x20E820u;
    SET_GPR_U32(ctx, 31, 0x20E828u);
    ctx->pc = 0x2EBFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBFE0u, 0x20E820u, 0x20E828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E828u;
}
