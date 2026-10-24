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

// Function: entry_0017a284
// Address: 0x17a284 - 0x17a288
void entry_0017a284_0x17a284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a284_0x17a284");
#endif

    ctx->pc = 0x17a284u;

    // 0x17a284: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x17a284u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x17a288u;
}
