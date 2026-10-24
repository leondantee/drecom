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

// Function: entry_0016506c
// Address: 0x16506c - 0x165098
void entry_0016506c_0x16506c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016506c_0x16506c");
#endif

    ctx->pc = 0x16506cu;

    // 0x16506c: 0x72009e28  paddub      $s3, $s0, $zero
    ctx->pc = 0x16506cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x165070: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x165070u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x165074: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x165074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x165078: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x165078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16507c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16507cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x165080: 0x52082b  sltu        $at, $v0, $s2
    ctx->pc = 0x165080u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x165084: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x165084u;
    {
        const bool branch_taken_0x165084 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x165084) {
            ctx->pc = 0x1650F0u;
            return;
        }
    }
    ctx->pc = 0x16508Cu;
    // 0x16508c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x16508cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x165090: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x165090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x165094: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x165094u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->pc = 0x165098u;
}
