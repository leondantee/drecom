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

// Function: entry_0027ab0c
// Address: 0x27ab0c - 0x27ab10
void entry_0027ab0c_0x27ab0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027ab0c_0x27ab0c");
#endif

    ctx->pc = 0x27ab0cu;

    // 0x27ab0c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x27ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    ctx->pc = 0x27ab10u;
}
