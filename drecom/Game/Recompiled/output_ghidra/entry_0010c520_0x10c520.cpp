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

// Function: entry_0010c520
// Address: 0x10c520 - 0x10c528
void entry_0010c520_0x10c520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c520_0x10c520");
#endif

    ctx->pc = 0x10c520u;

    // 0x10c520: 0x8046b12  j           func_11AC48
    ctx->pc = 0x10C520u;
    ctx->pc = 0x10C524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C520u;
    // 0x10c524: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AC48u;
    strcpy_0x11ac48(rdram, ctx, runtime); return;
    ctx->pc = 0x10C528u;
}
