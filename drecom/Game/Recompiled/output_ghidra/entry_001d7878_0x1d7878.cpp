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

// Function: entry_001d7878
// Address: 0x1d7878 - 0x1d78a4
void entry_001d7878_0x1d7878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7878_0x1d7878");
#endif

    ctx->pc = 0x1d7878u;

    // 0x1d7878: 0x72a01e28  paddub      $v1, $s5, $zero
    ctx->pc = 0x1d7878u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1d787c: 0x2475ffff  addiu       $s5, $v1, -0x1
    ctx->pc = 0x1d787cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d7880: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1D7880u;
    {
        const bool branch_taken_0x1d7880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7880) {
            ctx->pc = 0x1D77FCu;
            return;
        }
    }
    ctx->pc = 0x1D7888u;
    // 0x1d7888: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d7888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d788c: 0x16830005  bne         $s4, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D788Cu;
    {
        const bool branch_taken_0x1d788c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d788c) {
            ctx->pc = 0x1D78A4u;
            return;
        }
    }
    ctx->pc = 0x1D7894u;
    // 0x1d7894: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d7894u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d7898: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1d7898u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1d789c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1D789Cu;
    {
        const bool branch_taken_0x1d789c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d789c) {
            ctx->pc = 0x1D7960u;
            return;
        }
    }
    ctx->pc = 0x1D78A4u;
}
