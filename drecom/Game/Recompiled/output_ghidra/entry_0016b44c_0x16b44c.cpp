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

// Function: entry_0016b44c
// Address: 0x16b44c - 0x16b458
void entry_0016b44c_0x16b44c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b44c_0x16b44c");
#endif

    ctx->pc = 0x16b44cu;

    // 0x16b44c: 0x8fb000c0  lw          $s0, 0xC0($sp)
    ctx->pc = 0x16b44cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16b450: 0x8fb100b0  lw          $s1, 0xB0($sp)
    ctx->pc = 0x16b450u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16b454: 0x0  nop
    ctx->pc = 0x16b454u;
    // NOP
    ctx->pc = 0x16b458u;
}
