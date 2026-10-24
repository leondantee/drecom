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

// Function: entry_00339b68
// Address: 0x339b68 - 0x339b6c
void entry_00339b68_0x339b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00339b68_0x339b68");
#endif

    ctx->pc = 0x339b68u;

    // 0x339b68: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    ctx->pc = 0x339b6cu;
}
