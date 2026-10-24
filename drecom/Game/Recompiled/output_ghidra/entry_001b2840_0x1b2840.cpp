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

// Function: entry_001b2840
// Address: 0x1b2840 - 0x1b2848
void entry_001b2840_0x1b2840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2840_0x1b2840");
#endif

    ctx->pc = 0x1b2840u;

    // 0x1b2840: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x1b2840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1b2844: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1b2844u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->pc = 0x1b2848u;
}
