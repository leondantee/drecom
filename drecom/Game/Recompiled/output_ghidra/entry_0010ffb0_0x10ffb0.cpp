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

// Function: entry_0010ffb0
// Address: 0x10ffb0 - 0x10ffb4
void entry_0010ffb0_0x10ffb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ffb0_0x10ffb0");
#endif

    ctx->pc = 0x10ffb0u;

    // 0x10ffb0: 0x244267c0  addiu       $v0, $v0, 0x67C0
    ctx->pc = 0x10ffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26560));
    ctx->pc = 0x10ffb4u;
}
