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

// Function: entry_00217720
// Address: 0x217720 - 0x217724
void entry_00217720_0x217720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217720_0x217720");
#endif

    ctx->pc = 0x217720u;

    // 0x217720: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x217720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    ctx->pc = 0x217724u;
}
