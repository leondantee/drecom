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

// Function: entry_00137b98
// Address: 0x137b98 - 0x137bc4
void entry_00137b98_0x137b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137b98_0x137b98");
#endif

    ctx->pc = 0x137b98u;

    // 0x137b98: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x137b98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x137b9c: 0x1460ffc4  bnez        $v1, . + 4 + (-0x3C << 2)
    ctx->pc = 0x137B9Cu;
    {
        const bool branch_taken_0x137b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x137b9c) {
            ctx->pc = 0x137AB0u;
            return;
        }
    }
    ctx->pc = 0x137BA4u;
    // 0x137ba4: 0x8663008e  lh          $v1, 0x8E($s3)
    ctx->pc = 0x137ba4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 142)));
    // 0x137ba8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x137BA8u;
    {
        const bool branch_taken_0x137ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x137ba8) {
            ctx->pc = 0x137BC4u;
            return;
        }
    }
    ctx->pc = 0x137BB0u;
    // 0x137bb0: 0x8663008e  lh          $v1, 0x8E($s3)
    ctx->pc = 0x137bb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 142)));
    // 0x137bb4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x137bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x137bb8: 0xa663008e  sh          $v1, 0x8E($s3)
    ctx->pc = 0x137bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 142), (uint16_t)GPR_U32(ctx, 3));
    // 0x137bbc: 0x10000154  b           . + 4 + (0x154 << 2)
    ctx->pc = 0x137BBCu;
    {
        const bool branch_taken_0x137bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137bbc) {
            ctx->pc = 0x138110u;
            return;
        }
    }
    ctx->pc = 0x137BC4u;
}
