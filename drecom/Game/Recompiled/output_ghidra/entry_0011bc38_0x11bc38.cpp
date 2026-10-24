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

// Function: entry_0011bc38
// Address: 0x11bc38 - 0x11bc3c
void entry_0011bc38_0x11bc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bc38_0x11bc38");
#endif

    ctx->pc = 0x11bc38u;

    // 0x11bc38: 0x2662fea4  addiu       $v0, $s3, -0x15C
    ctx->pc = 0x11bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966948));
    ctx->pc = 0x11bc3cu;
}
