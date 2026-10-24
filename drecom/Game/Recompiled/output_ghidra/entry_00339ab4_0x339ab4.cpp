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

// Function: entry_00339ab4
// Address: 0x339ab4 - 0x339ab8
void entry_00339ab4_0x339ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00339ab4_0x339ab4");
#endif

    ctx->pc = 0x339ab4u;

    // 0x339ab4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    ctx->pc = 0x339ab8u;
}
