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

// Function: entry_001d8b6c
// Address: 0x1d8b6c - 0x1d8b70
void entry_001d8b6c_0x1d8b6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8b6c_0x1d8b6c");
#endif

    ctx->pc = 0x1d8b6cu;

    // 0x1d8b6c: 0x2444c3c0  addiu       $a0, $v0, -0x3C40
    ctx->pc = 0x1d8b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951872));
    ctx->pc = 0x1d8b70u;
}
