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

// Function: entry_002f6e04
// Address: 0x2f6e04 - 0x2f6e08
void entry_002f6e04_0x2f6e04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f6e04_0x2f6e04");
#endif

    ctx->pc = 0x2f6e04u;

    // 0x2f6e04: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x2f6e04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2f6e08u;
}
