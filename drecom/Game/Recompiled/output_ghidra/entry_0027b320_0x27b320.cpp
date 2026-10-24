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

// Function: entry_0027b320
// Address: 0x27b320 - 0x27b328
void entry_0027b320_0x27b320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027b320_0x27b320");
#endif

    ctx->pc = 0x27b320u;

    // 0x27b320: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27b320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27b324: 0x0  nop
    ctx->pc = 0x27b324u;
    // NOP
    ctx->pc = 0x27b328u;
}
