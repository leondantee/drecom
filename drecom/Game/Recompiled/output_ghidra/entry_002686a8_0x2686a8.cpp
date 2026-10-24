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

// Function: entry_002686a8
// Address: 0x2686a8 - 0x2686ac
void entry_002686a8_0x2686a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002686a8_0x2686a8");
#endif

    ctx->pc = 0x2686a8u;

    // 0x2686a8: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x2686a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    ctx->pc = 0x2686acu;
}
