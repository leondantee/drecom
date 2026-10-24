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

// Function: entry_001d7c88
// Address: 0x1d7c88 - 0x1d7cb4
void entry_001d7c88_0x1d7c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7c88_0x1d7c88");
#endif

    ctx->pc = 0x1d7c88u;

    // 0x1d7c88: 0x72a01e28  paddub      $v1, $s5, $zero
    ctx->pc = 0x1d7c88u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1d7c8c: 0x2475ffff  addiu       $s5, $v1, -0x1
    ctx->pc = 0x1d7c8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d7c90: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1D7C90u;
    {
        const bool branch_taken_0x1d7c90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7c90) {
            ctx->pc = 0x1D7C0Cu;
            return;
        }
    }
    ctx->pc = 0x1D7C98u;
    // 0x1d7c98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d7c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7c9c: 0x16830005  bne         $s4, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7C9Cu;
    {
        const bool branch_taken_0x1d7c9c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d7c9c) {
            ctx->pc = 0x1D7CB4u;
            return;
        }
    }
    ctx->pc = 0x1D7CA4u;
    // 0x1d7ca4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d7ca4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d7ca8: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1d7ca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1d7cac: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1D7CACu;
    {
        const bool branch_taken_0x1d7cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7cac) {
            ctx->pc = 0x1D7DB0u;
            return;
        }
    }
    ctx->pc = 0x1D7CB4u;
}
