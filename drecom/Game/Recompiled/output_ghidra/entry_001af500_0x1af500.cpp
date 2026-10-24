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

// Function: entry_001af500
// Address: 0x1af500 - 0x1af508
void entry_001af500_0x1af500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af500_0x1af500");
#endif

    ctx->pc = 0x1af500u;

    // 0x1af500: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1af500u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1af504: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1af504u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x1af508u;
}
