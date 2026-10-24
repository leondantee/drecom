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

// Function: entry_00167998
// Address: 0x167998 - 0x1679a4
void entry_00167998_0x167998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167998_0x167998");
#endif

    ctx->pc = 0x167998u;

    // 0x167998: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x167998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x16799c: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x16799cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1679a0: 0x628823  subu        $s1, $v1, $v0
    ctx->pc = 0x1679a0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1679a4u;
}
