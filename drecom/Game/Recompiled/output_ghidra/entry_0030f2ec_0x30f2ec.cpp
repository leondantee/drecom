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

// Function: entry_0030f2ec
// Address: 0x30f2ec - 0x30f35c
void entry_0030f2ec_0x30f2ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030f2ec_0x30f2ec");
#endif

    switch (ctx->pc) {
        case 0x30f2fcu: goto label_30f2fc;
        case 0x30f314u: goto label_30f314;
        case 0x30f32cu: goto label_30f32c;
        case 0x30f340u: goto label_30f340;
        case 0x30f350u: goto label_30f350;
        default: break;
    }

    ctx->pc = 0x30f2ecu;

    // 0x30f2ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x30f2ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x30f2f0: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x30f2f0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x30f2f4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x30F2F4u;
    SET_GPR_U32(ctx, 31, 0x30F2FCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x30F2F4u, 0x30F2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F2FCu;
label_30f2fc:
    // 0x30f2fc: 0x27b60210  addiu       $s6, $sp, 0x210
    ctx->pc = 0x30f2fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x30f300: 0x72c02628  paddub      $a0, $s6, $zero
    ctx->pc = 0x30f300u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x30f304: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x30f304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x30f308: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x30f308u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x30f30c: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x30F30Cu;
    SET_GPR_U32(ctx, 31, 0x30F314u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x30F314u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30F314u) { return; }
    ctx->pc = 0x30F314u;
label_30f314:
    // 0x30f314: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30f314u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30f318: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x30f318u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x30f31c: 0x27a30210  addiu       $v1, $sp, 0x210
    ctx->pc = 0x30f31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x30f320: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x30f320u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x30f324: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30F324u;
    SET_GPR_U32(ctx, 31, 0x30F32Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30F32Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30F32Cu) { return; }
    ctx->pc = 0x30F32Cu;
label_30f32c:
    // 0x30f32c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x30f32cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30f330: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x30f330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x30f334: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x30f334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x30f338: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30F338u;
    SET_GPR_U32(ctx, 31, 0x30F340u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30F340u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30F340u) { return; }
    ctx->pc = 0x30F340u;
label_30f340:
    // 0x30f340: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x30f340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x30f344: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x30f344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x30f348: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30F348u;
    SET_GPR_U32(ctx, 31, 0x30F350u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30F350u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30F350u) { return; }
    ctx->pc = 0x30F350u;
label_30f350:
    // 0x30f350: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30f350u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30f354: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x30F354u;
    {
        const bool branch_taken_0x30f354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f354) {
            ctx->pc = 0x30F420u;
            return;
        }
    }
    ctx->pc = 0x30F35Cu;
}
