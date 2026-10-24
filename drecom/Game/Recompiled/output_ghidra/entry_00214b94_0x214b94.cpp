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

// Function: entry_00214b94
// Address: 0x214b94 - 0x214b98
void entry_00214b94_0x214b94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214b94_0x214b94");
#endif

    ctx->pc = 0x214b94u;

    // 0x214b94: 0x244241e0  addiu       $v0, $v0, 0x41E0
    ctx->pc = 0x214b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16864));
    ctx->pc = 0x214b98u;
}
