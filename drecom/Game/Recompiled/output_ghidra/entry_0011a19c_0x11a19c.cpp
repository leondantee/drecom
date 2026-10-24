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

// Function: entry_0011a19c
// Address: 0x11a19c - 0x11a1a8
void entry_0011a19c_0x11a19c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a19c_0x11a19c");
#endif

    ctx->pc = 0x11a19cu;

    // 0x11a19c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x11a19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a1a0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x11a1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x11a1a4: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x11a1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    ctx->pc = 0x11a1a8u;
}
