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

// Function: entry_0019ceb4
// Address: 0x19ceb4 - 0x19ceb8
void entry_0019ceb4_0x19ceb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ceb4_0x19ceb4");
#endif

    ctx->pc = 0x19ceb4u;

    // 0x19ceb4: 0xac2295b4  sw          $v0, -0x6A4C($at)
    ctx->pc = 0x19ceb4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940084), GPR_U32(ctx, 2));
    ctx->pc = 0x19ceb8u;
}
