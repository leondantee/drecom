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

// Function: entry_001ac194
// Address: 0x1ac194 - 0x1ac198
void entry_001ac194_0x1ac194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac194_0x1ac194");
#endif

    ctx->pc = 0x1ac194u;

    // 0x1ac194: 0x24453f40  addiu       $a1, $v0, 0x3F40
    ctx->pc = 0x1ac194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16192));
    ctx->pc = 0x1ac198u;
}
