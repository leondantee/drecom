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

// Function: entry_0015b148
// Address: 0x15b148 - 0x15b150
void entry_0015b148_0x15b148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b148_0x15b148");
#endif

    ctx->pc = 0x15b148u;

    // 0x15b148: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x15b148u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x15b14c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15b14cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x15b150u;
}
