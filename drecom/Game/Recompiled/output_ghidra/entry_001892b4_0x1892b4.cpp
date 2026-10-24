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

// Function: entry_001892b4
// Address: 0x1892b4 - 0x1892b8
void entry_001892b4_0x1892b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001892b4_0x1892b4");
#endif

    ctx->pc = 0x1892b4u;

    // 0x1892b4: 0xac222508  sw          $v0, 0x2508($at)
    ctx->pc = 0x1892b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9480), GPR_U32(ctx, 2));
    ctx->pc = 0x1892b8u;
}
