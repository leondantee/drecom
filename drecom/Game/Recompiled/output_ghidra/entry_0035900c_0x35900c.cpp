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

// Function: entry_0035900c
// Address: 0x35900c - 0x359020
void entry_0035900c_0x35900c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035900c_0x35900c");
#endif

    ctx->pc = 0x35900cu;

    // 0x35900c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35900cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x359010: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x359010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x359014: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x359014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x359018: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x359018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35901c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x35901cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x359020u;
}
