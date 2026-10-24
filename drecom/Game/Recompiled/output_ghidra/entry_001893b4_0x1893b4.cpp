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

// Function: entry_001893b4
// Address: 0x1893b4 - 0x1893b8
void entry_001893b4_0x1893b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001893b4_0x1893b4");
#endif

    ctx->pc = 0x1893b4u;

    // 0x1893b4: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1893b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    ctx->pc = 0x1893b8u;
}
