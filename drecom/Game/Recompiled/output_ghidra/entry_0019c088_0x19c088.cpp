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

// Function: entry_0019c088
// Address: 0x19c088 - 0x19c094
void entry_0019c088_0x19c088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c088_0x19c088");
#endif

    ctx->pc = 0x19c088u;

    // 0x19c088: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19c088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19c08c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x19C08Cu;
    SET_GPR_U32(ctx, 31, 0x19C094u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x19C08Cu, 0x19C094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C094u;
}
