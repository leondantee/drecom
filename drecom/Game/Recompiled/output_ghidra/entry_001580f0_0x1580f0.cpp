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

// Function: entry_001580f0
// Address: 0x1580f0 - 0x158100
void entry_001580f0_0x1580f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001580f0_0x1580f0");
#endif

    ctx->pc = 0x1580f0u;

    // 0x1580f0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1580f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1580f4: 0x8c354f14  lw          $s5, 0x4F14($at)
    ctx->pc = 0x1580f4u;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x3F4F14u));
    // 0x1580f8: 0x0  nop
    ctx->pc = 0x1580f8u;
    // NOP
    // 0x1580fc: 0x0  nop
    ctx->pc = 0x1580fcu;
    // NOP
    ctx->pc = 0x158100u;
}
