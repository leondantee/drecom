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

// Function: entry_002220a0
// Address: 0x2220a0 - 0x2220a8
void entry_002220a0_0x2220a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002220a0_0x2220a0");
#endif

    ctx->pc = 0x2220a0u;

    // 0x2220a0: 0x11887a  dsrl        $s1, $s1, 1
    ctx->pc = 0x2220a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 1);
    // 0x2220a4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2220a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x2220a8u;
}
