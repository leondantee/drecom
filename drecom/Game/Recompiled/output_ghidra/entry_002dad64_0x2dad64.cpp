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

// Function: entry_002dad64
// Address: 0x2dad64 - 0x2dad74
void entry_002dad64_0x2dad64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dad64_0x2dad64");
#endif

    ctx->pc = 0x2dad64u;

    // 0x2dad64: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2dad64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dad68: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2dad68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2dad6c: 0xc0c8fbc  jal         func_323EF0
    ctx->pc = 0x2DAD6Cu;
    SET_GPR_U32(ctx, 31, 0x2DAD74u);
    ctx->pc = 0x323EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323EF0u, 0x2DAD6Cu, 0x2DAD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAD74u;
}
