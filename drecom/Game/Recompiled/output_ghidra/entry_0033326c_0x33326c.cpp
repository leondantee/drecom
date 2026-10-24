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

// Function: entry_0033326c
// Address: 0x33326c - 0x333288
void entry_0033326c_0x33326c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033326c_0x33326c");
#endif

    ctx->pc = 0x33326cu;

    // 0x33326c: 0x2931821  addu        $v1, $s4, $s3
    ctx->pc = 0x33326cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x333270: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x333270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x333274: 0x72082a  slt         $at, $v1, $s2
    ctx->pc = 0x333274u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x333278: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x333278u;
    {
        const bool branch_taken_0x333278 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x333278) {
            ctx->pc = 0x333288u;
            return;
        }
    }
    ctx->pc = 0x333280u;
    // 0x333280: 0x253b823  subu        $s7, $s2, $s3
    ctx->pc = 0x333280u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x333284: 0x72e09628  paddub      $s2, $s7, $zero
    ctx->pc = 0x333284u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    ctx->pc = 0x333288u;
}
