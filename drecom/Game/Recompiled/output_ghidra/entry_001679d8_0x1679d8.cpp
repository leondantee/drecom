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

// Function: entry_001679d8
// Address: 0x1679d8 - 0x1679e4
void entry_001679d8_0x1679d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001679d8_0x1679d8");
#endif

    ctx->pc = 0x1679d8u;

    // 0x1679d8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1679d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1679dc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1679dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1679e0: 0x629023  subu        $s2, $v1, $v0
    ctx->pc = 0x1679e0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1679e4u;
}
