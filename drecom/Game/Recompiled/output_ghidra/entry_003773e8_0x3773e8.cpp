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

// Function: entry_003773e8
// Address: 0x3773e8 - 0x3773ec
void entry_003773e8_0x3773e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003773e8_0x3773e8");
#endif

    ctx->pc = 0x3773e8u;

    // 0x3773e8: 0xac20efb4  sw          $zero, -0x104C($at)
    ctx->pc = 0x3773e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963124), GPR_U32(ctx, 0));
    ctx->pc = 0x3773ecu;
}
