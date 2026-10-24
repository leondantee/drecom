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

// Function: entry_0010712c
// Address: 0x10712c - 0x107130
void entry_0010712c_0x10712c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010712c_0x10712c");
#endif

    ctx->pc = 0x10712cu;

    // 0x10712c: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x10712cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    ctx->pc = 0x107130u;
}
