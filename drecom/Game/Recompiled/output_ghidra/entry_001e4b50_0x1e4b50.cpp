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

// Function: entry_001e4b50
// Address: 0x1e4b50 - 0x1e4b54
void entry_001e4b50_0x1e4b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4b50_0x1e4b50");
#endif

    ctx->pc = 0x1e4b50u;

    // 0x1e4b50: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e4b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    ctx->pc = 0x1e4b54u;
}
