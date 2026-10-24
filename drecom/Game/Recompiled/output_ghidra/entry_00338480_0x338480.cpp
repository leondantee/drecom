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

// Function: entry_00338480
// Address: 0x338480 - 0x338484
void entry_00338480_0x338480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00338480_0x338480");
#endif

    ctx->pc = 0x338480u;

    // 0x338480: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x338480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    ctx->pc = 0x338484u;
}
