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

// Function: entry_0011b7b0
// Address: 0x11b7b0 - 0x11b7b4
void entry_0011b7b0_0x11b7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b7b0_0x11b7b0");
#endif

    ctx->pc = 0x11b7b0u;

    // 0x11b7b0: 0x33c20008  andi        $v0, $fp, 0x8
    ctx->pc = 0x11b7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)8);
    ctx->pc = 0x11b7b4u;
}
