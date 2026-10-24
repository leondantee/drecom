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

// Function: entry_00264910
// Address: 0x264910 - 0x264918
void entry_00264910_0x264910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264910_0x264910");
#endif

    ctx->pc = 0x264910u;

    // 0x264910: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x264910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x264914: 0x0  nop
    ctx->pc = 0x264914u;
    // NOP
    ctx->pc = 0x264918u;
}
