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

// Function: entry_00371c70
// Address: 0x371c70 - 0x371c78
void entry_00371c70_0x371c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00371c70_0x371c70");
#endif

    ctx->pc = 0x371c70u;

    // 0x371c70: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x371c70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x371c74: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x371c74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x371c78u;
}
