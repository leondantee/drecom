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

// Function: entry_00206574
// Address: 0x206574 - 0x206584
void entry_00206574_0x206574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206574_0x206574");
#endif

    ctx->pc = 0x206574u;

    // 0x206574: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x206574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206578: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x206578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x20657c: 0xc0baff8  jal         func_2EBFE0
    ctx->pc = 0x20657Cu;
    SET_GPR_U32(ctx, 31, 0x206584u);
    ctx->pc = 0x2EBFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBFE0u, 0x20657Cu, 0x206584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206584u;
}
