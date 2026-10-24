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

// Function: entry_00169b50
// Address: 0x169b50 - 0x169b5c
void entry_00169b50_0x169b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169b50_0x169b50");
#endif

    ctx->pc = 0x169b50u;

    // 0x169b50: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169b54: 0x8c22ab20  lw          $v0, -0x54E0($at)
    ctx->pc = 0x169b54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47AB20u));
    // 0x169b58: 0x0  nop
    ctx->pc = 0x169b58u;
    // NOP
    ctx->pc = 0x169b5cu;
}
