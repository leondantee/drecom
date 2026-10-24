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

// Function: entry_001ac548
// Address: 0x1ac548 - 0x1ac554
void entry_001ac548_0x1ac548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac548_0x1ac548");
#endif

    ctx->pc = 0x1ac548u;

    // 0x1ac548: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ac548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ac54c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1ac54cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ac550: 0x0  nop
    ctx->pc = 0x1ac550u;
    // NOP
    ctx->pc = 0x1ac554u;
}
