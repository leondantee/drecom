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

// Function: entry_00214e4c
// Address: 0x214e4c - 0x214e50
void entry_00214e4c_0x214e4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214e4c_0x214e4c");
#endif

    ctx->pc = 0x214e4cu;

    // 0x214e4c: 0x3c100002  lui         $s0, 0x2
    ctx->pc = 0x214e4cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)2 << 16));
    ctx->pc = 0x214e50u;
}
