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

// Function: entry_0019f2b0
// Address: 0x19f2b0 - 0x19f2c0
void entry_0019f2b0_0x19f2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f2b0_0x19f2b0");
#endif

    ctx->pc = 0x19f2b0u;

    // 0x19f2b0: 0x8c248070  lw          $a0, -0x7F90($at)
    ctx->pc = 0x19f2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934640)));
    // 0x19f2b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19f2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19f2b8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19f2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19f2bc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x19f2bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x19f2c0u;
}
