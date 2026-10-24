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

// Function: entry_002f6a08
// Address: 0x2f6a08 - 0x2f6a0c
void entry_002f6a08_0x2f6a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f6a08_0x2f6a08");
#endif

    ctx->pc = 0x2f6a08u;

    // 0x2f6a08: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2f6a08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2f6a0cu;
}
