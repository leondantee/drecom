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

// Function: entry_00377d98
// Address: 0x377d98 - 0x377d9c
void entry_00377d98_0x377d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00377d98_0x377d98");
#endif

    ctx->pc = 0x377d98u;

    // 0x377d98: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    ctx->pc = 0x377d9cu;
}
