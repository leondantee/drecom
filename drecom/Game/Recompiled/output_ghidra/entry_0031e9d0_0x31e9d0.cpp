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

// Function: entry_0031e9d0
// Address: 0x31e9d0 - 0x31e9d4
void entry_0031e9d0_0x31e9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031e9d0_0x31e9d0");
#endif

    ctx->pc = 0x31e9d0u;

    // 0x31e9d0: 0x36100010  ori         $s0, $s0, 0x10
    ctx->pc = 0x31e9d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
    ctx->pc = 0x31e9d4u;
}
