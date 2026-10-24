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

// Function: entry_0015b7c0
// Address: 0x15b7c0 - 0x15b7c4
void entry_0015b7c0_0x15b7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b7c0_0x15b7c0");
#endif

    ctx->pc = 0x15b7c0u;

    // 0x15b7c0: 0xae1413e8  sw          $s4, 0x13E8($s0)
    ctx->pc = 0x15b7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5096), GPR_U32(ctx, 20));
    ctx->pc = 0x15b7c4u;
}
