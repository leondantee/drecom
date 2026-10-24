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

// Function: entry_001893b8
// Address: 0x1893b8 - 0x1893bc
void entry_001893b8_0x1893b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001893b8_0x1893b8");
#endif

    ctx->pc = 0x1893b8u;

    // 0x1893b8: 0x244624f0  addiu       $a2, $v0, 0x24F0
    ctx->pc = 0x1893b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 9456));
    ctx->pc = 0x1893bcu;
}
