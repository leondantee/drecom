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

// Function: entry_0011ec70
// Address: 0x11ec70 - 0x11ec78
void entry_0011ec70_0x11ec70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ec70_0x11ec70");
#endif

    ctx->pc = 0x11ec70u;

    // 0x11ec70: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x11ec70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11ec74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11ec74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11ec78u;
}
