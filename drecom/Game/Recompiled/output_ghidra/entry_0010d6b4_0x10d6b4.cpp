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

// Function: entry_0010d6b4
// Address: 0x10d6b4 - 0x10d6b8
void entry_0010d6b4_0x10d6b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d6b4_0x10d6b4");
#endif

    ctx->pc = 0x10d6b4u;

    // 0x10d6b4: 0x26703c60  addiu       $s0, $s3, 0x3C60
    ctx->pc = 0x10d6b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 15456));
    ctx->pc = 0x10d6b8u;
}
