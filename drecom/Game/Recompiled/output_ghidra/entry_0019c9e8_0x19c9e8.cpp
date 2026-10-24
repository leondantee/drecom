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

// Function: entry_0019c9e8
// Address: 0x19c9e8 - 0x19c9f0
void entry_0019c9e8_0x19c9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c9e8_0x19c9e8");
#endif

    ctx->pc = 0x19c9e8u;

    // 0x19c9e8: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x19c9e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x19c9ec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19c9ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x19c9f0u;
}
