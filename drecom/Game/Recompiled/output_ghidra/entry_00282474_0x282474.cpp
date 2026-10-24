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

// Function: entry_00282474
// Address: 0x282474 - 0x282478
void entry_00282474_0x282474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00282474_0x282474");
#endif

    ctx->pc = 0x282474u;

    // 0x282474: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x282474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    ctx->pc = 0x282478u;
}
