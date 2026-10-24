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

// Function: entry_002929e8
// Address: 0x2929e8 - 0x2929f8
void entry_002929e8_0x2929e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002929e8_0x2929e8");
#endif

    ctx->pc = 0x2929e8u;

    // 0x2929e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2929e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2929ec: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2929ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2929f0: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x2929f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x2929f4: 0x0  nop
    ctx->pc = 0x2929f4u;
    // NOP
    ctx->pc = 0x2929f8u;
}
