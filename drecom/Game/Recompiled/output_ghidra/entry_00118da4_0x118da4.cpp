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

// Function: entry_00118da4
// Address: 0x118da4 - 0x118da8
void entry_00118da4_0x118da4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118da4_0x118da4");
#endif

    ctx->pc = 0x118da4u;

    // 0x118da4: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x118da4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
    ctx->pc = 0x118da8u;
}
