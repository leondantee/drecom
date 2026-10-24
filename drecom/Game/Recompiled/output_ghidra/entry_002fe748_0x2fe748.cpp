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

// Function: entry_002fe748
// Address: 0x2fe748 - 0x2fe750
void entry_002fe748_0x2fe748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fe748_0x2fe748");
#endif

    ctx->pc = 0x2fe748u;

    // 0x2fe748: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2fe748u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2fe74c: 0x0  nop
    ctx->pc = 0x2fe74cu;
    // NOP
    ctx->pc = 0x2fe750u;
}
