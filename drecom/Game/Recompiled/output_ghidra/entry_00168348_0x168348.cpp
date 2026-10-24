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

// Function: entry_00168348
// Address: 0x168348 - 0x168354
void entry_00168348_0x168348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168348_0x168348");
#endif

    ctx->pc = 0x168348u;

    // 0x168348: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x168348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x16834c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x16834cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x168350: 0x629023  subu        $s2, $v1, $v0
    ctx->pc = 0x168350u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x168354u;
}
