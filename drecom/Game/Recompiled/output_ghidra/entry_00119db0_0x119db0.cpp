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

// Function: entry_00119db0
// Address: 0x119db0 - 0x119dbc
void entry_00119db0_0x119db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119db0_0x119db0");
#endif

    ctx->pc = 0x119db0u;

    // 0x119db0: 0x8d82490c  lw          $v0, 0x490C($t4)
    ctx->pc = 0x119db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 18700)));
    // 0x119db4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x119db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x119db8: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x119db8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
    ctx->pc = 0x119dbcu;
}
