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

// Function: entry_00241100
// Address: 0x241100 - 0x241114
void entry_00241100_0x241100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00241100_0x241100");
#endif

    switch (ctx->pc) {
        case 0x241110u: goto label_241110;
        default: break;
    }

    ctx->pc = 0x241100u;

    // 0x241100: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x241100u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x241104: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x241104u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x241108: 0xc040ca2  jal         func_103288
    ctx->pc = 0x241108u;
    SET_GPR_U32(ctx, 31, 0x241110u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x241110u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x241110u) { return; }
    ctx->pc = 0x241110u;
label_241110:
    // 0x241110: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x241110u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x241114u;
}
