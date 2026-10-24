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

// Function: entry_00114aa0
// Address: 0x114aa0 - 0x114aa4
void entry_00114aa0_0x114aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114aa0_0x114aa0");
#endif

    ctx->pc = 0x114aa0u;

    // 0x114aa0: 0x240207ff  addiu       $v0, $zero, 0x7FF
    ctx->pc = 0x114aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    ctx->pc = 0x114aa4u;
}
