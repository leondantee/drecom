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

// Function: entry_0010f7dc
// Address: 0x10f7dc - 0x10f7e4
void entry_0010f7dc_0x10f7dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f7dc_0x10f7dc");
#endif

    ctx->pc = 0x10f7dcu;

    // 0x10f7dc: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x10f7dcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    // 0x10f7e0: 0x3c16003b  lui         $s6, 0x3B
    ctx->pc = 0x10f7e0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
    ctx->pc = 0x10f7e4u;
}
