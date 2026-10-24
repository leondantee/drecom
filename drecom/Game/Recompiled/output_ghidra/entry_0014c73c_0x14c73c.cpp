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

// Function: entry_0014c73c
// Address: 0x14c73c - 0x14c740
void entry_0014c73c_0x14c73c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c73c_0x14c73c");
#endif

    ctx->pc = 0x14c73cu;

    // 0x14c73c: 0x2445e7b0  addiu       $a1, $v0, -0x1850
    ctx->pc = 0x14c73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961072));
    ctx->pc = 0x14c740u;
}
