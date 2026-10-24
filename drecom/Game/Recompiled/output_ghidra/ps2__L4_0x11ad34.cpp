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

// Function: $L4
// Address: 0x11ad34 - 0x11ad38
void ps2__L4_0x11ad34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L4_0x11ad34");
#endif

    ctx->pc = 0x11ad34u;

    // 0x11ad34: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x11ad34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11ad38u;
}
