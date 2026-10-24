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

// Function: entry_0015bd44
// Address: 0x15bd44 - 0x15bd48
void entry_0015bd44_0x15bd44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bd44_0x15bd44");
#endif

    ctx->pc = 0x15bd44u;

    // 0x15bd44: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x15bd44u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x15bd48u;
}
