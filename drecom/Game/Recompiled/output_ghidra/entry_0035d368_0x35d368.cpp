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

// Function: entry_0035d368
// Address: 0x35d368 - 0x35d36c
void entry_0035d368_0x35d368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035d368_0x35d368");
#endif

    ctx->pc = 0x35d368u;

    // 0x35d368: 0x2415000c  addiu       $s5, $zero, 0xC
    ctx->pc = 0x35d368u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x35d36cu;
}
