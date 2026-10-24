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

// Function: entry_00113c94
// Address: 0x113c94 - 0x113c9c
void entry_00113c94_0x113c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113c94_0x113c94");
#endif

    ctx->pc = 0x113c94u;

    // 0x113c94: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x113c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x113c98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x113c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x113c9cu;
}
