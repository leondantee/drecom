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

// Function: entry_00189194
// Address: 0x189194 - 0x189198
void entry_00189194_0x189194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189194_0x189194");
#endif

    ctx->pc = 0x189194u;

    // 0x189194: 0xac202508  sw          $zero, 0x2508($at)
    ctx->pc = 0x189194u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9480), GPR_U32(ctx, 0));
    ctx->pc = 0x189198u;
}
