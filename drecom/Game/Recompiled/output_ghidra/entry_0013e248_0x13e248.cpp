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

// Function: entry_0013e248
// Address: 0x13e248 - 0x13e24c
void entry_0013e248_0x13e248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e248_0x13e248");
#endif

    ctx->pc = 0x13e248u;

    // 0x13e248: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x13e248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    ctx->pc = 0x13e24cu;
}
