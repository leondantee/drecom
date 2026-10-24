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

// Function: entry_002172c8
// Address: 0x2172c8 - 0x2172cc
void entry_002172c8_0x2172c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002172c8_0x2172c8");
#endif

    ctx->pc = 0x2172c8u;

    // 0x2172c8: 0x2630cec0  addiu       $s0, $s1, -0x3140
    ctx->pc = 0x2172c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954688));
    ctx->pc = 0x2172ccu;
}
