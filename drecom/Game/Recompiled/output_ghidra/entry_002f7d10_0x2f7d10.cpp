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

// Function: entry_002f7d10
// Address: 0x2f7d10 - 0x2f7d38
void entry_002f7d10_0x2f7d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f7d10_0x2f7d10");
#endif

    ctx->pc = 0x2f7d10u;

    // 0x2f7d10: 0x8fa900f8  lw          $t1, 0xF8($sp)
    ctx->pc = 0x2f7d10u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7d14: 0x8d2a00d4  lw          $t2, 0xD4($t1)
    ctx->pc = 0x2f7d14u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 212)));
    // 0x2f7d18: 0x29480190  slti        $t0, $t2, 0x190
    ctx->pc = 0x2f7d18u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)400) ? 1 : 0);
    // 0x2f7d1c: 0x15000006  bnez        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F7D1Cu;
    {
        const bool branch_taken_0x2f7d1c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7d1c) {
            ctx->pc = 0x2F7D38u;
            return;
        }
    }
    ctx->pc = 0x2F7D24u;
    // 0x2f7d24: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f7d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7d28: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f7d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f7d2c: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x2f7d2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x2f7d30: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f7d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7d34: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2f7d34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x2f7d38u;
}
