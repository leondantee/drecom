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

// Function: entry_0013bd10
// Address: 0x13bd10 - 0x13bd18
void entry_0013bd10_0x13bd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bd10_0x13bd10");
#endif

    ctx->pc = 0x13bd10u;

    // 0x13bd10: 0x26100120  addiu       $s0, $s0, 0x120
    ctx->pc = 0x13bd10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x13bd14: 0x0  nop
    ctx->pc = 0x13bd14u;
    // NOP
    ctx->pc = 0x13bd18u;
}
