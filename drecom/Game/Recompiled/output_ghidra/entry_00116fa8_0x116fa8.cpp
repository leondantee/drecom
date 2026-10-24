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

// Function: entry_00116fa8
// Address: 0x116fa8 - 0x116fb0
void entry_00116fa8_0x116fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116fa8_0x116fa8");
#endif

    ctx->pc = 0x116fa8u;

    // 0x116fa8: 0x804002c  j           func_1000B0
    ctx->pc = 0x116FA8u;
    ctx->pc = 0x116FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116FA8u;
    // 0x116fac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1000B0u;
    _exit_0x1000b0(rdram, ctx, runtime); return;
    ctx->pc = 0x116FB0u;
}
