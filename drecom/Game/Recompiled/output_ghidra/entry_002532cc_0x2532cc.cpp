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

// Function: entry_002532cc
// Address: 0x2532cc - 0x2532d0
void entry_002532cc_0x2532cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002532cc_0x2532cc");
#endif

    ctx->pc = 0x2532ccu;

    // 0x2532cc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2532ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2532d0u;
}
