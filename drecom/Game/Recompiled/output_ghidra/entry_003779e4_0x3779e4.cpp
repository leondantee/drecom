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

// Function: entry_003779e4
// Address: 0x3779e4 - 0x3779e8
void entry_003779e4_0x3779e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003779e4_0x3779e4");
#endif

    ctx->pc = 0x3779e4u;

    // 0x3779e4: 0xac3002e4  sw          $s0, 0x2E4($at)
    ctx->pc = 0x3779e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 740), GPR_U32(ctx, 16));
    ctx->pc = 0x3779e8u;
}
