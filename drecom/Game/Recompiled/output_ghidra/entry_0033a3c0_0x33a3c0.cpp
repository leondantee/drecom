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

// Function: entry_0033a3c0
// Address: 0x33a3c0 - 0x33a3cc
void entry_0033a3c0_0x33a3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a3c0_0x33a3c0");
#endif

    ctx->pc = 0x33a3c0u;

    // 0x33a3c0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a3c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a3c4: 0x8c3052c0  lw          $s0, 0x52C0($at)
    ctx->pc = 0x33a3c4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x8952C0u));
    // 0x33a3c8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33a3c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    ctx->pc = 0x33a3ccu;
}
