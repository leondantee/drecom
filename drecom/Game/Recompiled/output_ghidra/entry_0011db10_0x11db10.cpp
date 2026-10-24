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

// Function: entry_0011db10
// Address: 0x11db10 - 0x11db14
void entry_0011db10_0x11db10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011db10_0x11db10");
#endif

    ctx->pc = 0x11db10u;

    // 0x11db10: 0xff2f0000  sd          $t7, 0x0($t9)
    ctx->pc = 0x11db10u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 15));
    ctx->pc = 0x11db14u;
}
