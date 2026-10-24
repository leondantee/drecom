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

// Function: entry_0011ca70
// Address: 0x11ca70 - 0x11ca7c
void entry_0011ca70_0x11ca70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ca70_0x11ca70");
#endif

    ctx->pc = 0x11ca70u;

    // 0x11ca70: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x11ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x11ca74: 0x24880002  addiu       $t0, $a0, 0x2
    ctx->pc = 0x11ca74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x11ca78: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x11ca78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x11ca7cu;
}
