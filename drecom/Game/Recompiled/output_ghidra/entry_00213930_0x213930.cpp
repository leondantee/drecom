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

// Function: entry_00213930
// Address: 0x213930 - 0x213938
void entry_00213930_0x213930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213930_0x213930");
#endif

    ctx->pc = 0x213930u;

    // 0x213930: 0xc084a2c  jal         func_2128B0
    ctx->pc = 0x213930u;
    SET_GPR_U32(ctx, 31, 0x213938u);
    ctx->pc = 0x213934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213930u;
    // 0x213934: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2128B0u;
    {
        ctx->pc = 0x213938u;
        ps2_syscalls::ChangeThreadPriority(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x213938u) { return; }
    ctx->pc = 0x213938u;
}
