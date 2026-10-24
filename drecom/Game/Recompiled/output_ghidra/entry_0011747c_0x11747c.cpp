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

// Function: entry_0011747c
// Address: 0x11747c - 0x117480
void entry_0011747c_0x11747c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011747c_0x11747c");
#endif

    ctx->pc = 0x11747cu;

    // 0x11747c: 0x35220001  ori         $v0, $t1, 0x1
    ctx->pc = 0x11747cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
    ctx->pc = 0x117480u;
}
