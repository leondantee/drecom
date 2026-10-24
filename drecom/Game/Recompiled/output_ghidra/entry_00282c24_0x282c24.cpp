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

// Function: entry_00282c24
// Address: 0x282c24 - 0x282c28
void entry_00282c24_0x282c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00282c24_0x282c24");
#endif

    ctx->pc = 0x282c24u;

    // 0x282c24: 0xac231b90  sw          $v1, 0x1B90($at)
    ctx->pc = 0x282c24u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7056), GPR_U32(ctx, 3));
    ctx->pc = 0x282c28u;
}
