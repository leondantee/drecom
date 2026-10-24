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

// Function: entry_003390f8
// Address: 0x3390f8 - 0x3390fc
void entry_003390f8_0x3390f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003390f8_0x3390f8");
#endif

    ctx->pc = 0x3390f8u;

    // 0x3390f8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3390f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    ctx->pc = 0x3390fcu;
}
