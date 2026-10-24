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

// Function: entry_00264f90
// Address: 0x264f90 - 0x264f98
void entry_00264f90_0x264f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264f90_0x264f90");
#endif

    ctx->pc = 0x264f90u;

    // 0x264f90: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x264f90u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x264f94: 0x0  nop
    ctx->pc = 0x264f94u;
    // NOP
    ctx->pc = 0x264f98u;
}
