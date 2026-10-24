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

// Function: entry_001b8330
// Address: 0x1b8330 - 0x1b8338
void entry_001b8330_0x1b8330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8330_0x1b8330");
#endif

    ctx->pc = 0x1b8330u;

    // 0x1b8330: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b8330u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8334: 0xa10010a8  sb          $zero, 0x10A8($t0)
    ctx->pc = 0x1b8334u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4264), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1b8338u;
}
