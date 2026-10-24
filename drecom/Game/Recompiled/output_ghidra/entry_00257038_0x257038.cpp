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

// Function: entry_00257038
// Address: 0x257038 - 0x25704c
void entry_00257038_0x257038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00257038_0x257038");
#endif

    ctx->pc = 0x257038u;

    // 0x257038: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x257038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25703c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x25703cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x257040: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x257040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x257044: 0xc04f734  jal         func_13DCD0
    ctx->pc = 0x257044u;
    SET_GPR_U32(ctx, 31, 0x25704Cu);
    ctx->pc = 0x13DCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DCD0u, 0x257044u, 0x25704Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25704Cu;
}
