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

// Function: entry_00195c90
// Address: 0x195c90 - 0x195c98
void entry_00195c90_0x195c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195c90_0x195c90");
#endif

    ctx->pc = 0x195c90u;

    // 0x195c90: 0x8e10003c  lw          $s0, 0x3C($s0)
    ctx->pc = 0x195c90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x195c94: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x195c94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x195c98u;
}
