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

// Function: entry_001416a8
// Address: 0x1416a8 - 0x1416ac
void entry_001416a8_0x1416a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001416a8_0x1416a8");
#endif

    ctx->pc = 0x1416a8u;

    // 0x1416a8: 0x24458ef8  addiu       $a1, $v0, -0x7108
    ctx->pc = 0x1416a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938360));
    ctx->pc = 0x1416acu;
}
