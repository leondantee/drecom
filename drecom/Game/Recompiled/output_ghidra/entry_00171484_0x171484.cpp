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

// Function: entry_00171484
// Address: 0x171484 - 0x171488
void entry_00171484_0x171484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171484_0x171484");
#endif

    ctx->pc = 0x171484u;

    // 0x171484: 0xafb10168  sw          $s1, 0x168($sp)
    ctx->pc = 0x171484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 17));
    ctx->pc = 0x171488u;
}
