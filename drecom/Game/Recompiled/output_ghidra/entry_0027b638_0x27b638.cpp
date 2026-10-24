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

// Function: entry_0027b638
// Address: 0x27b638 - 0x27b63c
void entry_0027b638_0x27b638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027b638_0x27b638");
#endif

    ctx->pc = 0x27b638u;

    // 0x27b638: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x27b638u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6728), GPR_U32(ctx, 2));
    ctx->pc = 0x27b63cu;
}
