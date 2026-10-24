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

// Function: entry_001b4040
// Address: 0x1b4040 - 0x1b4048
void entry_001b4040_0x1b4040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4040_0x1b4040");
#endif

    ctx->pc = 0x1b4040u;

    // 0x1b4040: 0x36b50005  ori         $s5, $s5, 0x5
    ctx->pc = 0x1b4040u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)5);
    // 0x1b4044: 0x0  nop
    ctx->pc = 0x1b4044u;
    // NOP
    ctx->pc = 0x1b4048u;
}
