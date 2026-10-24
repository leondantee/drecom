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

// Function: entry_0011b7a8
// Address: 0x11b7a8 - 0x11b7b0
void entry_0011b7a8_0x11b7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b7a8_0x11b7a8");
#endif

    ctx->pc = 0x11b7a8u;

    // 0x11b7a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b7ac: 0x52900a  movz        $s2, $v0, $s2
    ctx->pc = 0x11b7acu;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    ctx->pc = 0x11b7b0u;
}
