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

// Function: entry_00190834
// Address: 0x190834 - 0x190840
void entry_00190834_0x190834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190834_0x190834");
#endif

    ctx->pc = 0x190834u;

    // 0x190834: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x190834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x190838: 0x8c302580  lw          $s0, 0x2580($at)
    ctx->pc = 0x190838u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x532580u));
    // 0x19083c: 0x0  nop
    ctx->pc = 0x19083cu;
    // NOP
    ctx->pc = 0x190840u;
}
