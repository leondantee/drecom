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

// Function: entry_00115f2c
// Address: 0x115f2c - 0x115f38
void entry_00115f2c_0x115f2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115f2c_0x115f2c");
#endif

    ctx->pc = 0x115f2cu;

    // 0x115f2c: 0x16183c  dsll32      $v1, $s6, 0
    ctx->pc = 0x115f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 0));
    // 0x115f30: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x115f30u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x115f34: 0x438004  sllv        $s0, $v1, $v0
    ctx->pc = 0x115f34u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    ctx->pc = 0x115f38u;
}
