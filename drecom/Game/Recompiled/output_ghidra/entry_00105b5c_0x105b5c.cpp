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

// Function: entry_00105b5c
// Address: 0x105b5c - 0x105b60
void entry_00105b5c_0x105b5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105b5c_0x105b5c");
#endif

    ctx->pc = 0x105b5cu;

    // 0x105b5c: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x105b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    ctx->pc = 0x105b60u;
}
