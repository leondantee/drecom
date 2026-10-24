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

// Function: default
// Address: 0x25d048 - 0x25d070
void ps2_default_0x25d048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x25d048");
#endif

    ctx->pc = 0x25d048u;

    // 0x25d048: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x25d048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x25d04c: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x25d04cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x25d050: 0x1e8c3c  dsll32      $s1, $fp, 16
    ctx->pc = 0x25d050u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 30) << (32 + 16));
    // 0x25d054: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x25d054u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x25d058: 0x71302a  slt         $a2, $v1, $s1
    ctx->pc = 0x25d058u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x25d05c: 0x14c0fe4e  bnez        $a2, . + 4 + (-0x1B2 << 2)
    ctx->pc = 0x25D05Cu;
    {
        const bool branch_taken_0x25d05c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d05c) {
            ctx->pc = 0x25C998u;
            return;
        }
    }
    ctx->pc = 0x25D064u;
    // 0x25d064: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x25d064u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25d068: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x25D068u;
    {
        const bool branch_taken_0x25d068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d068) {
            ctx->pc = 0x25D130u;
            return;
        }
    }
    ctx->pc = 0x25D070u;
}
