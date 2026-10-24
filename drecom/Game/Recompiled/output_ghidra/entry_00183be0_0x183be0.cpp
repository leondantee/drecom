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

// Function: entry_00183be0
// Address: 0x183be0 - 0x183be4
void entry_00183be0_0x183be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183be0_0x183be0");
#endif

    ctx->pc = 0x183be0u;

    // 0x183be0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x183be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    ctx->pc = 0x183be4u;
}
