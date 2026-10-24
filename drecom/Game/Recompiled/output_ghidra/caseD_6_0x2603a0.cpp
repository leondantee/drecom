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

// Function: caseD_6
// Address: 0x2603a0 - 0x2603ec
void caseD_6_0x2603a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x2603a0");
#endif

    switch (ctx->pc) {
        case 0x2603bcu: goto label_2603bc;
        case 0x2603e0u: goto label_2603e0;
        default: break;
    }

    ctx->pc = 0x2603a0u;

    // 0x2603a0: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x2603a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2603a4: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2603a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2603a8: 0x27a20190  addiu       $v0, $sp, 0x190
    ctx->pc = 0x2603a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2603ac: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2603acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2603b0: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x2603b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2603b4: 0xc040c80  jal         func_103200
    ctx->pc = 0x2603B4u;
    SET_GPR_U32(ctx, 31, 0x2603BCu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x2603BCu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2603BCu) { return; }
    ctx->pc = 0x2603BCu;
label_2603bc:
    // 0x2603bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2603bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2603c0: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x2603c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2603c4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2603c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2603c8: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x2603c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2603cc: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2603ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2603d0: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x2603d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2603d4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2603d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2603d8: 0xc040c80  jal         func_103200
    ctx->pc = 0x2603D8u;
    SET_GPR_U32(ctx, 31, 0x2603E0u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x2603E0u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2603E0u) { return; }
    ctx->pc = 0x2603E0u;
label_2603e0:
    // 0x2603e0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2603e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2603e4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2603E4u;
    {
        const bool branch_taken_0x2603e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2603e4) {
            ctx->pc = 0x260424u;
            return;
        }
    }
    ctx->pc = 0x2603ECu;
}
