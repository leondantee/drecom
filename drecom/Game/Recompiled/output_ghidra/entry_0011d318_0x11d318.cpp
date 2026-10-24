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

// Function: entry_0011d318
// Address: 0x11d318 - 0x11d320
void entry_0011d318_0x11d318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d318_0x11d318");
#endif

    ctx->pc = 0x11d318u;

    // 0x11d318: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x11d318u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d31c: 0x0  nop
    ctx->pc = 0x11d31cu;
    // NOP
    ctx->pc = 0x11d320u;
}
