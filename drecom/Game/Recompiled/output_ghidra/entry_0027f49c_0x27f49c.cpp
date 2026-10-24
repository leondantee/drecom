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

// Function: entry_0027f49c
// Address: 0x27f49c - 0x27f4a0
void entry_0027f49c_0x27f49c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027f49c_0x27f49c");
#endif

    ctx->pc = 0x27f49cu;

    // 0x27f49c: 0xac23d4b8  sw          $v1, -0x2B48($at)
    ctx->pc = 0x27f49cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956216), GPR_U32(ctx, 3));
    ctx->pc = 0x27f4a0u;
}
