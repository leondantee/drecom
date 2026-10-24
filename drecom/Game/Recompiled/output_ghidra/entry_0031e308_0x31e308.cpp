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

// Function: entry_0031e308
// Address: 0x31e308 - 0x31e30c
void entry_0031e308_0x31e308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031e308_0x31e308");
#endif

    ctx->pc = 0x31e308u;

    // 0x31e308: 0x2445e340  addiu       $a1, $v0, -0x1CC0
    ctx->pc = 0x31e308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959936));
    ctx->pc = 0x31e30cu;
}
