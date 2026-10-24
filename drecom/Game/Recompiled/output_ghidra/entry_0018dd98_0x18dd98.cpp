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

// Function: entry_0018dd98
// Address: 0x18dd98 - 0x18dda0
void entry_0018dd98_0x18dd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dd98_0x18dd98");
#endif

    ctx->pc = 0x18dd98u;

    // 0x18dd98: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x18dd98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x18dd9c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18dd9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x18dda0u;
}
