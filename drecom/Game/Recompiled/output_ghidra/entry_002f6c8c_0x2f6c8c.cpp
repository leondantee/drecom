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

// Function: entry_002f6c8c
// Address: 0x2f6c8c - 0x2f6ca0
void entry_002f6c8c_0x2f6c8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f6c8c_0x2f6c8c");
#endif

    ctx->pc = 0x2f6c8cu;

    // 0x2f6c8c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6c90: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2f6c90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f6c94: 0x38c40010  xori        $a0, $a2, 0x10
    ctx->pc = 0x2f6c94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)16);
    // 0x2f6c98: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6c9c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2f6c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x2f6ca0u;
}
