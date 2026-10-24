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

// Function: entry_002838c8
// Address: 0x2838c8 - 0x2838cc
void entry_002838c8_0x2838c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002838c8_0x2838c8");
#endif

    ctx->pc = 0x2838c8u;

    // 0x2838c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2838c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    ctx->pc = 0x2838ccu;
}
