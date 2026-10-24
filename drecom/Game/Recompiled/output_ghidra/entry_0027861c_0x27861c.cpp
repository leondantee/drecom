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

// Function: entry_0027861c
// Address: 0x27861c - 0x278620
void entry_0027861c_0x27861c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027861c_0x27861c");
#endif

    ctx->pc = 0x27861cu;

    // 0x27861c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27861cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    ctx->pc = 0x278620u;
}
