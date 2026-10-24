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

// Function: entry_001a8370
// Address: 0x1a8370 - 0x1a8374
void entry_001a8370_0x1a8370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8370_0x1a8370");
#endif

    ctx->pc = 0x1a8370u;

    // 0x1a8370: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x1a8370u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1a8374u;
}
