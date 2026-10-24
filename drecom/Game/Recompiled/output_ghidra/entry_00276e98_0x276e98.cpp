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

// Function: entry_00276e98
// Address: 0x276e98 - 0x276ea0
void entry_00276e98_0x276e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00276e98_0x276e98");
#endif

    ctx->pc = 0x276e98u;

    // 0x276e98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x276e98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x276e9c: 0x0  nop
    ctx->pc = 0x276e9cu;
    // NOP
    ctx->pc = 0x276ea0u;
}
