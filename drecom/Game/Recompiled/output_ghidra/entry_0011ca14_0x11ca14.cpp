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

// Function: entry_0011ca14
// Address: 0x11ca14 - 0x11ca18
void entry_0011ca14_0x11ca14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ca14_0x11ca14");
#endif

    ctx->pc = 0x11ca14u;

    // 0x11ca14: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x11ca14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    ctx->pc = 0x11ca18u;
}
