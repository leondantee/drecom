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

// Function: entry_00117cd0
// Address: 0x117cd0 - 0x117cd4
void entry_00117cd0_0x117cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117cd0_0x117cd0");
#endif

    ctx->pc = 0x117cd0u;

    // 0x117cd0: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x117cd0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    ctx->pc = 0x117cd4u;
}
