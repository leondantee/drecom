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

// Function: entry_00105b60
// Address: 0x105b60 - 0x105b64
void entry_00105b60_0x105b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105b60_0x105b60");
#endif

    ctx->pc = 0x105b60u;

    // 0x105b60: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    ctx->pc = 0x105b64u;
}
