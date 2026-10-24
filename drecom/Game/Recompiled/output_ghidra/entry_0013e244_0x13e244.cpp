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

// Function: entry_0013e244
// Address: 0x13e244 - 0x13e248
void entry_0013e244_0x13e244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e244_0x13e244");
#endif

    ctx->pc = 0x13e244u;

    // 0x13e244: 0xfc2078b0  sd          $zero, 0x78B0($at)
    ctx->pc = 0x13e244u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 30896), GPR_U64(ctx, 0));
    ctx->pc = 0x13e248u;
}
