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

// Function: entry_0018ddb0
// Address: 0x18ddb0 - 0x18ddcc
void entry_0018ddb0_0x18ddb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ddb0_0x18ddb0");
#endif

    ctx->pc = 0x18ddb0u;

    // 0x18ddb0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x18ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ddb4: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18DDB4u;
    {
        const bool branch_taken_0x18ddb4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x18ddb4) {
            ctx->pc = 0x18DDCCu;
            return;
        }
    }
    ctx->pc = 0x18DDBCu;
    // 0x18ddbc: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18ddc0: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18ddc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18ddc4: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x18DDC4u;
    {
        const bool branch_taken_0x18ddc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ddc4) {
            ctx->pc = 0x18DF30u;
            return;
        }
    }
    ctx->pc = 0x18DDCCu;
}
