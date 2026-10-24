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

// Function: entry_0013d4fc
// Address: 0x13d4fc - 0x13d510
void entry_0013d4fc_0x13d4fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d4fc_0x13d4fc");
#endif

    ctx->pc = 0x13d4fcu;

    // 0x13d4fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d500: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x13d500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13d504: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x13d504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x13d508: 0xc04f734  jal         func_13DCD0
    ctx->pc = 0x13D508u;
    SET_GPR_U32(ctx, 31, 0x13D510u);
    ctx->pc = 0x13DCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DCD0u, 0x13D508u, 0x13D510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D510u;
}
