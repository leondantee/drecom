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

// Function: entry_001ac134
// Address: 0x1ac134 - 0x1ac138
void entry_001ac134_0x1ac134(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac134_0x1ac134");
#endif

    ctx->pc = 0x1ac134u;

    // 0x1ac134: 0x24454f50  addiu       $a1, $v0, 0x4F50
    ctx->pc = 0x1ac134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20304));
    ctx->pc = 0x1ac138u;
}
