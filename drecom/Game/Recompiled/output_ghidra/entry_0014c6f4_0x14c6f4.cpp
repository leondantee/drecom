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

// Function: entry_0014c6f4
// Address: 0x14c6f4 - 0x14c6f8
void entry_0014c6f4_0x14c6f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c6f4_0x14c6f4");
#endif

    ctx->pc = 0x14c6f4u;

    // 0x14c6f4: 0xac209230  sw          $zero, -0x6DD0($at)
    ctx->pc = 0x14c6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939184), GPR_U32(ctx, 0));
    ctx->pc = 0x14c6f8u;
}
