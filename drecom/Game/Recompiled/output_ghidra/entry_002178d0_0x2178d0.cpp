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

// Function: entry_002178d0
// Address: 0x2178d0 - 0x2178d4
void entry_002178d0_0x2178d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002178d0_0x2178d0");
#endif

    ctx->pc = 0x2178d0u;

    // 0x2178d0: 0x24a510a8  addiu       $a1, $a1, 0x10A8
    ctx->pc = 0x2178d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4264));
    ctx->pc = 0x2178d4u;
}
