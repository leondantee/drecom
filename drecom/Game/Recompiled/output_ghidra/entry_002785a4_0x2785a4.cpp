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

// Function: entry_002785a4
// Address: 0x2785a4 - 0x2785a8
void entry_002785a4_0x2785a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002785a4_0x2785a4");
#endif

    ctx->pc = 0x2785a4u;

    // 0x2785a4: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x2785a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6728), GPR_U32(ctx, 2));
    ctx->pc = 0x2785a8u;
}
