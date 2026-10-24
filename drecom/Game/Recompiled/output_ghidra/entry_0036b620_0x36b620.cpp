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

// Function: entry_0036b620
// Address: 0x36b620 - 0x36b634
void entry_0036b620_0x36b620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036b620_0x36b620");
#endif

    ctx->pc = 0x36b620u;

    // 0x36b620: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36b620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36b624: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x36b624u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x36b628: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x36b628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36b62c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36b630: 0xac431340  sw          $v1, 0x1340($v0)
    ctx->pc = 0x36b630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4928), GPR_U32(ctx, 3));
    ctx->pc = 0x36b634u;
}
