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

// Function: entry_0010c048
// Address: 0x10c048 - 0x10c04c
void entry_0010c048_0x10c048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c048_0x10c048");
#endif

    ctx->pc = 0x10c048u;

    // 0x10c048: 0x24503b00  addiu       $s0, $v0, 0x3B00
    ctx->pc = 0x10c048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 15104));
    ctx->pc = 0x10c04cu;
}
