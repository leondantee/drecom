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

// Function: entry_0027efb0
// Address: 0x27efb0 - 0x27efb8
void entry_0027efb0_0x27efb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027efb0_0x27efb0");
#endif

    ctx->pc = 0x27efb0u;

    // 0x27efb0: 0xa020d691  sb          $zero, -0x296F($at)
    ctx->pc = 0x27efb0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294956689), (uint8_t)GPR_U32(ctx, 0));
    // 0x27efb4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x27efb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x27efb8u;
}
