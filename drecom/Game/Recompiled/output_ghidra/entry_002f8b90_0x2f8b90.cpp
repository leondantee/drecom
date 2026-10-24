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

// Function: entry_002f8b90
// Address: 0x2f8b90 - 0x2f8bb8
void entry_002f8b90_0x2f8b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f8b90_0x2f8b90");
#endif

    ctx->pc = 0x2f8b90u;

    // 0x2f8b90: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2f8b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8b94: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x2f8b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2f8b98: 0x28630190  slti        $v1, $v1, 0x190
    ctx->pc = 0x2f8b98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)400) ? 1 : 0);
    // 0x2f8b9c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F8B9Cu;
    {
        const bool branch_taken_0x2f8b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8b9c) {
            ctx->pc = 0x2F8BB8u;
            return;
        }
    }
    ctx->pc = 0x2F8BA4u;
    // 0x2f8ba4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f8ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8ba8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2f8ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f8bac: 0x38700010  xori        $s0, $v1, 0x10
    ctx->pc = 0x2f8bacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x2f8bb0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f8bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8bb4: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2f8bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    ctx->pc = 0x2f8bb8u;
}
