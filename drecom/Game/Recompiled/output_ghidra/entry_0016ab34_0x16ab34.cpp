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

// Function: entry_0016ab34
// Address: 0x16ab34 - 0x16ab40
void entry_0016ab34_0x16ab34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ab34_0x16ab34");
#endif

    ctx->pc = 0x16ab34u;

    // 0x16ab34: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x16ab34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x16ab38: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x16ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x16ab3c: 0x628823  subu        $s1, $v1, $v0
    ctx->pc = 0x16ab3cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x16ab40u;
}
