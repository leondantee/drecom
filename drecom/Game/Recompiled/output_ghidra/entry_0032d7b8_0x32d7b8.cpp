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

// Function: entry_0032d7b8
// Address: 0x32d7b8 - 0x32d7c8
void entry_0032d7b8_0x32d7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032d7b8_0x32d7b8");
#endif

    ctx->pc = 0x32d7b8u;

    // 0x32d7b8: 0x26100054  addiu       $s0, $s0, 0x54
    ctx->pc = 0x32d7b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x32d7bc: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x32d7bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x32d7c0: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x32d7c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x32d7c4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x32d7c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->pc = 0x32d7c8u;
}
