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

// Function: entry_002f7514
// Address: 0x2f7514 - 0x2f7518
void entry_002f7514_0x2f7514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f7514_0x2f7514");
#endif

    ctx->pc = 0x2f7514u;

    // 0x2f7514: 0x24150005  addiu       $s5, $zero, 0x5
    ctx->pc = 0x2f7514u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x2f7518u;
}
