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

// Function: entry_001de940
// Address: 0x1de940 - 0x1de950
void entry_001de940_0x1de940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de940_0x1de940");
#endif

    ctx->pc = 0x1de940u;

    // 0x1de940: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1de940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1de944: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1de944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1de948: 0xc04f734  jal         func_13DCD0
    ctx->pc = 0x1DE948u;
    SET_GPR_U32(ctx, 31, 0x1DE950u);
    ctx->pc = 0x13DCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DCD0u, 0x1DE948u, 0x1DE950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE950u;
}
