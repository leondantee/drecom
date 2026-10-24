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

// Function: entry_002154e8
// Address: 0x2154e8 - 0x2154f0
void entry_002154e8_0x2154e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002154e8_0x2154e8");
#endif

    ctx->pc = 0x2154e8u;

    // 0x2154e8: 0x8084b88  j           func_212E20
    ctx->pc = 0x2154E8u;
    ctx->pc = 0x2154ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2154E8u;
    // 0x2154ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212E20u;
    sceSifSetReg_0x212e20(rdram, ctx, runtime); return;
    ctx->pc = 0x2154F0u;
}
