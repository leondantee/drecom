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

// Function: caseD_3
// Address: 0x260360 - 0x2603a0
void caseD_3_0x260360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x260360");
#endif

    switch (ctx->pc) {
        case 0x260374u: goto label_260374;
        case 0x260394u: goto label_260394;
        default: break;
    }

    ctx->pc = 0x260360u;

    // 0x260360: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x260360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x260364: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x260364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x260368: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x260368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x26036c: 0xc040c80  jal         func_103200
    ctx->pc = 0x26036Cu;
    SET_GPR_U32(ctx, 31, 0x260374u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x260374u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260374u) { return; }
    ctx->pc = 0x260374u;
label_260374:
    // 0x260374: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260374u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260378: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x260378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x26037c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26037cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260380: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x260380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x260384: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260384u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260388: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x260388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x26038c: 0xc040c80  jal         func_103200
    ctx->pc = 0x26038Cu;
    SET_GPR_U32(ctx, 31, 0x260394u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x260394u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260394u) { return; }
    ctx->pc = 0x260394u;
label_260394:
    // 0x260394: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260394u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260398: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x260398u;
    {
        const bool branch_taken_0x260398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260398) {
            ctx->pc = 0x260424u;
            return;
        }
    }
    ctx->pc = 0x2603A0u;
}
