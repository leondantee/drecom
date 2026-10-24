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

// Function: entry_0016a108
// Address: 0x16a108 - 0x16a128
void entry_0016a108_0x16a108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a108_0x16a108");
#endif

    ctx->pc = 0x16a108u;

    // 0x16a108: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x16a108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x16a10c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x16A10Cu;
    {
        const bool branch_taken_0x16a10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a10c) {
            ctx->pc = 0x16A0ECu;
            return;
        }
    }
    ctx->pc = 0x16A114u;
    // 0x16a114: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x16a114u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16a118: 0x27b00160  addiu       $s0, $sp, 0x160
    ctx->pc = 0x16a118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x16a11c: 0xafb00254  sw          $s0, 0x254($sp)
    ctx->pc = 0x16a11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 16));
    // 0x16a120: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16A120u;
    {
        const bool branch_taken_0x16a120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a120) {
            ctx->pc = 0x16A148u;
            return;
        }
    }
    ctx->pc = 0x16A128u;
}
