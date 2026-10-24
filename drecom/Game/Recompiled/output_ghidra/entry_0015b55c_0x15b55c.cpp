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

// Function: entry_0015b55c
// Address: 0x15b55c - 0x15b560
void entry_0015b55c_0x15b55c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b55c_0x15b55c");
#endif

    ctx->pc = 0x15b55cu;

    // 0x15b55c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15b55cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x15b560u;
}
