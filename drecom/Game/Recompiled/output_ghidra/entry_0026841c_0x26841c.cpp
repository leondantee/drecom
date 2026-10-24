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

// Function: entry_0026841c
// Address: 0x26841c - 0x268424
void entry_0026841c_0x26841c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026841c_0x26841c");
#endif

    ctx->pc = 0x26841cu;

    // 0x26841c: 0x8c23dbc8  lw          $v1, -0x2438($at)
    ctx->pc = 0x26841cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958024)));
    // 0x268420: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x268420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    ctx->pc = 0x268424u;
}
