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

// Function: entry_001682c8
// Address: 0x1682c8 - 0x1682d4
void entry_001682c8_0x1682c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001682c8_0x1682c8");
#endif

    ctx->pc = 0x1682c8u;

    // 0x1682c8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1682c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1682cc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1682ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1682d0: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x1682d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1682d4u;
}
