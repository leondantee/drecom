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

// Function: entry_002970f4
// Address: 0x2970f4 - 0x2970f8
void entry_002970f4_0x2970f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002970f4_0x2970f4");
#endif

    ctx->pc = 0x2970f4u;

    // 0x2970f4: 0xac231a48  sw          $v1, 0x1A48($at)
    ctx->pc = 0x2970f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6728), GPR_U32(ctx, 3));
    ctx->pc = 0x2970f8u;
}
