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

// Function: entry_00113c90
// Address: 0x113c90 - 0x113c94
void entry_00113c90_0x113c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113c90_0x113c90");
#endif

    ctx->pc = 0x113c90u;

    // 0x113c90: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x113c90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x113c94u;
}
