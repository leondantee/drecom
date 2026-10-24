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

// Function: entry_002e2bb4
// Address: 0x2e2bb4 - 0x2e2bb8
void entry_002e2bb4_0x2e2bb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e2bb4_0x2e2bb4");
#endif

    ctx->pc = 0x2e2bb4u;

    // 0x2e2bb4: 0xa20000dd  sb          $zero, 0xDD($s0)
    ctx->pc = 0x2e2bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 221), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2e2bb8u;
}
