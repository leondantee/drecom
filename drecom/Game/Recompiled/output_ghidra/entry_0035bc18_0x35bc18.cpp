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

// Function: entry_0035bc18
// Address: 0x35bc18 - 0x35bc20
void entry_0035bc18_0x35bc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035bc18_0x35bc18");
#endif

    ctx->pc = 0x35bc18u;

    // 0x35bc18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35bc18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35bc1c: 0x0  nop
    ctx->pc = 0x35bc1cu;
    // NOP
    ctx->pc = 0x35bc20u;
}
