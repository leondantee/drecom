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

// Function: entry_0037be18
// Address: 0x37be18 - 0x37be48
void entry_0037be18_0x37be18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037be18_0x37be18");
#endif

    ctx->pc = 0x37be18u;

    // 0x37be18: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37be18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37be1c: 0x8c2305a0  lw          $v1, 0x5A0($at)
    ctx->pc = 0x37be1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A05A0u));
    // 0x37be20: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x37be20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x37be24: 0x14600091  bnez        $v1, . + 4 + (0x91 << 2)
    ctx->pc = 0x37BE24u;
    {
        const bool branch_taken_0x37be24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37be24) {
            ctx->pc = 0x37C06Cu;
            return;
        }
    }
    ctx->pc = 0x37BE2Cu;
    // 0x37be2c: 0x8e225dd0  lw          $v0, 0x5DD0($s1)
    ctx->pc = 0x37be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24016)));
    // 0x37be30: 0x14400068  bnez        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x37BE30u;
    {
        const bool branch_taken_0x37be30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37be30) {
            ctx->pc = 0x37BFD4u;
            return;
        }
    }
    ctx->pc = 0x37BE38u;
    // 0x37be38: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x37be38u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37be3c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x37be3cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37be40: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x37BE40u;
    {
        const bool branch_taken_0x37be40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37be40) {
            ctx->pc = 0x37BE68u;
            return;
        }
    }
    ctx->pc = 0x37BE48u;
}
