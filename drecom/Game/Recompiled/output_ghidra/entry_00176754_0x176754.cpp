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

// Function: entry_00176754
// Address: 0x176754 - 0x176760
void entry_00176754_0x176754(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176754_0x176754");
#endif

    ctx->pc = 0x176754u;

    // 0x176754: 0x14f43c  dsll32      $fp, $s4, 16
    ctx->pc = 0x176754u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 20) << (32 + 16));
    // 0x176758: 0x1ef43f  dsra32      $fp, $fp, 16
    ctx->pc = 0x176758u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 30) >> (32 + 16));
    // 0x17675c: 0x0  nop
    ctx->pc = 0x17675cu;
    // NOP
    ctx->pc = 0x176760u;
}
