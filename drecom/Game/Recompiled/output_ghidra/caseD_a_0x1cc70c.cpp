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

// Function: caseD_a
// Address: 0x1cc70c - 0x1cc714
void caseD_a_0x1cc70c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x1cc70c");
#endif

    ctx->pc = 0x1cc70cu;

    // 0x1cc70c: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1cc70cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc710: 0xad001b60  sw          $zero, 0x1B60($t0)
    ctx->pc = 0x1cc710u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7008), GPR_U32(ctx, 0));
    ctx->pc = 0x1cc714u;
}
