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

// Function: CB_DelayTh
// Address: 0x10d078 - 0x10d080
void CB_DelayTh_0x10d078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CB_DelayTh_0x10d078");
#endif

    ctx->pc = 0x10d078u;

    // 0x10d078: 0x8084a94  j           func_212A50
    ctx->pc = 0x10D078u;
    ctx->pc = 0x10D07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D078u;
    // 0x10d07c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A50u;
    iSignalSema_0x212a50(rdram, ctx, runtime); return;
    ctx->pc = 0x10D080u;
}
