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

// Function: caseD_12
// Address: 0x2603ec - 0x260424
void caseD_12_0x2603ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_12_0x2603ec");
#endif

    switch (ctx->pc) {
        case 0x26040cu: goto label_26040c;
        default: break;
    }

    ctx->pc = 0x2603ecu;

    // 0x2603ec: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x2603ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2603f0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2603f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2603f4: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x2603f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2603f8: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2603f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2603fc: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x2603fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x260400: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x260400u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260404: 0xc040c80  jal         func_103200
    ctx->pc = 0x260404u;
    SET_GPR_U32(ctx, 31, 0x26040Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x26040Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26040Cu) { return; }
    ctx->pc = 0x26040Cu;
label_26040c:
    // 0x26040c: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x26040cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x260410: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260410u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x260414: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x260414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x260418: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x260418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x26041c: 0xc040c80  jal         func_103200
    ctx->pc = 0x26041Cu;
    SET_GPR_U32(ctx, 31, 0x260424u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x260424u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260424u) { return; }
    ctx->pc = 0x260424u;
}
