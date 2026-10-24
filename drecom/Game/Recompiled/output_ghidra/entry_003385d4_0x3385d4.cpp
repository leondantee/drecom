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

// Function: entry_003385d4
// Address: 0x3385d4 - 0x3385e0
void entry_003385d4_0x3385d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003385d4_0x3385d4");
#endif

    ctx->pc = 0x3385d4u;

    // 0x3385d4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x3385d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x3385d8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3385d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3385dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3385dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x3385e0u;
}
