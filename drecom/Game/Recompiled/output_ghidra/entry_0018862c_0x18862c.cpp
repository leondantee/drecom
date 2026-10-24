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

// Function: entry_0018862c
// Address: 0x18862c - 0x188634
void entry_0018862c_0x18862c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018862c_0x18862c");
#endif

    ctx->pc = 0x18862cu;

    // 0x18862c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18862cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188630: 0xa38380b4  sb          $v1, -0x7F4C($gp)
    ctx->pc = 0x188630u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934708), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x188634u;
}
