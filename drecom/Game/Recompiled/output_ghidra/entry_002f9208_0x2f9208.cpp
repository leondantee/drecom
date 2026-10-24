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

// Function: entry_002f9208
// Address: 0x2f9208 - 0x2f9230
void entry_002f9208_0x2f9208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f9208_0x2f9208");
#endif

    ctx->pc = 0x2f9208u;

    // 0x2f9208: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f9208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f920c: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2f920cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f9210: 0x28630032  slti        $v1, $v1, 0x32
    ctx->pc = 0x2f9210u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x2f9214: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9214u;
    {
        const bool branch_taken_0x2f9214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9214) {
            ctx->pc = 0x2F9230u;
            return;
        }
    }
    ctx->pc = 0x2F921Cu;
    // 0x2f921c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f921cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f9220: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2f9220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f9224: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x2f9224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x2f9228: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f9228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f922c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2f922cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x2f9230u;
}
