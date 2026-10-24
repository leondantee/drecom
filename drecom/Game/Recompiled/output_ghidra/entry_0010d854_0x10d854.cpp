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

// Function: entry_0010d854
// Address: 0x10d854 - 0x10d858
void entry_0010d854_0x10d854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d854_0x10d854");
#endif

    ctx->pc = 0x10d854u;

    // 0x10d854: 0x26f03ea8  addiu       $s0, $s7, 0x3EA8
    ctx->pc = 0x10d854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 16040));
    ctx->pc = 0x10d858u;
}
