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

// Function: entry_00189198
// Address: 0x189198 - 0x18919c
void entry_00189198_0x189198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189198_0x189198");
#endif

    ctx->pc = 0x189198u;

    // 0x189198: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x189198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    ctx->pc = 0x18919cu;
}
