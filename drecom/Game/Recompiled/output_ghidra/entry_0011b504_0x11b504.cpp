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

// Function: entry_0011b504
// Address: 0x11b504 - 0x11b510
void entry_0011b504_0x11b504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b504_0x11b504");
#endif

    ctx->pc = 0x11b504u;

    // 0x11b504: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x11b504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x11b508: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x11b508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x11b50c: 0xafa501f0  sw          $a1, 0x1F0($sp)
    ctx->pc = 0x11b50cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 5));
    ctx->pc = 0x11b510u;
}
