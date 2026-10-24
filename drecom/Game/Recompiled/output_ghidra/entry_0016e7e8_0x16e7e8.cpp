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

// Function: entry_0016e7e8
// Address: 0x16e7e8 - 0x16e7f4
void entry_0016e7e8_0x16e7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e7e8_0x16e7e8");
#endif

    ctx->pc = 0x16e7e8u;

    // 0x16e7e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16e7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16e7ec: 0x8c300df0  lw          $s0, 0xDF0($at)
    ctx->pc = 0x16e7ecu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0DF0u));
    // 0x16e7f0: 0x0  nop
    ctx->pc = 0x16e7f0u;
    // NOP
    ctx->pc = 0x16e7f4u;
}
