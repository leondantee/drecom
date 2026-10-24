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

// Function: entry_0019ce44
// Address: 0x19ce44 - 0x19ce48
void entry_0019ce44_0x19ce44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ce44_0x19ce44");
#endif

    ctx->pc = 0x19ce44u;

    // 0x19ce44: 0xac2295b4  sw          $v0, -0x6A4C($at)
    ctx->pc = 0x19ce44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940084), GPR_U32(ctx, 2));
    ctx->pc = 0x19ce48u;
}
