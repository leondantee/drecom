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

// Function: entry_001b5214
// Address: 0x1b5214 - 0x1b5220
void entry_001b5214_0x1b5214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5214_0x1b5214");
#endif

    ctx->pc = 0x1b5214u;

    // 0x1b5214: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b5214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5218: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b5218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b521c: 0xa043156d  sb          $v1, 0x156D($v0)
    ctx->pc = 0x1b521cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5485), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1b5220u;
}
