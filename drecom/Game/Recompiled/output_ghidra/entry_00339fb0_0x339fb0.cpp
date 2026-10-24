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

// Function: entry_00339fb0
// Address: 0x339fb0 - 0x339fb4
void entry_00339fb0_0x339fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00339fb0_0x339fb0");
#endif

    ctx->pc = 0x339fb0u;

    // 0x339fb0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    ctx->pc = 0x339fb4u;
}
