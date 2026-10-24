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

// Function: entry_001b3498
// Address: 0x1b3498 - 0x1b34a8
void entry_001b3498_0x1b3498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3498_0x1b3498");
#endif

    ctx->pc = 0x1b3498u;

    // 0x1b3498: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1b3498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b349c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b349cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b34a0: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x1b34a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x1b34a4: 0x0  nop
    ctx->pc = 0x1b34a4u;
    // NOP
    ctx->pc = 0x1b34a8u;
}
