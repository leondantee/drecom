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

// Function: entry_002e5594
// Address: 0x2e5594 - 0x2e55a4
void entry_002e5594_0x2e5594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e5594_0x2e5594");
#endif

    ctx->pc = 0x2e5594u;

    // 0x2e5594: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e5594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5598: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2e5598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2e559c: 0xc0c92ec  jal         func_324BB0
    ctx->pc = 0x2E559Cu;
    SET_GPR_U32(ctx, 31, 0x2E55A4u);
    ctx->pc = 0x324BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324BB0u, 0x2E559Cu, 0x2E55A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E55A4u;
}
