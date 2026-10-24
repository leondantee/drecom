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

// Function: entry_0018a960
// Address: 0x18a960 - 0x18a968
void entry_0018a960_0x18a960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a960_0x18a960");
#endif

    ctx->pc = 0x18a960u;

    // 0x18a960: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a964: 0x8c23ac50  lw          $v1, -0x53B0($at)
    ctx->pc = 0x18a964u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAC50u));
    ctx->pc = 0x18a968u;
}
