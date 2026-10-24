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

// Function: entry_0027ac34
// Address: 0x27ac34 - 0x27ac38
void entry_0027ac34_0x27ac34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027ac34_0x27ac34");
#endif

    ctx->pc = 0x27ac34u;

    // 0x27ac34: 0xa2000062  sb          $zero, 0x62($s0)
    ctx->pc = 0x27ac34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 98), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x27ac38u;
}
