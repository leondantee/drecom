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

// Function: entry_0027fc4c
// Address: 0x27fc4c - 0x27fc50
void entry_0027fc4c_0x27fc4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027fc4c_0x27fc4c");
#endif

    ctx->pc = 0x27fc4cu;

    // 0x27fc4c: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x27fc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
    ctx->pc = 0x27fc50u;
}
