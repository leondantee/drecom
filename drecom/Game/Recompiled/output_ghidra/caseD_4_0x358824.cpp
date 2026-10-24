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

// Function: caseD_4
// Address: 0x358824 - 0x358834
void caseD_4_0x358824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x358824");
#endif

    ctx->pc = 0x358824u;

    // 0x358824: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x358824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358828: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x358828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x35882c: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x35882cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x358830: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x358830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
    ctx->pc = 0x358834u;
}
