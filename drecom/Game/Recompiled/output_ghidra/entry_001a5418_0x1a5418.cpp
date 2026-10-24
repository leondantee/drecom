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

// Function: entry_001a5418
// Address: 0x1a5418 - 0x1a541c
void entry_001a5418_0x1a5418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5418_0x1a5418");
#endif

    ctx->pc = 0x1a5418u;

    // 0x1a5418: 0x2445f0c8  addiu       $a1, $v0, -0xF38
    ctx->pc = 0x1a5418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963400));
    ctx->pc = 0x1a541cu;
}
