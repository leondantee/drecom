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

// Function: caseD_5
// Address: 0x358834 - 0x358844
void caseD_5_0x358834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x358834");
#endif

    ctx->pc = 0x358834u;

    // 0x358834: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x358834u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358838: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x358838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x35883c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x35883cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x358840: 0xacc40014  sw          $a0, 0x14($a2)
    ctx->pc = 0x358840u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 4));
    ctx->pc = 0x358844u;
}
