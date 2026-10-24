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
// Address: 0x260898 - 0x260998
void caseD_6_0x260898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x260898");
#endif

    switch (ctx->pc) {
        case 0x2608b8u: goto label_2608b8;
        case 0x2608d4u: goto label_2608d4;
        case 0x2608e8u: goto label_2608e8;
        case 0x260904u: goto label_260904;
        case 0x260920u: goto label_260920;
        case 0x260934u: goto label_260934;
        case 0x260948u: goto label_260948;
        case 0x260968u: goto label_260968;
        case 0x260978u: goto label_260978;
        case 0x260990u: goto label_260990;
        default: break;
    }

    ctx->pc = 0x260898u;

    // 0x260898: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x260898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x26089c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x26089cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2608a0: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x2608a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2608a4: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2608a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2608a8: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x2608a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2608ac: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2608acu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2608b0: 0xc040c12  jal         func_103048
    ctx->pc = 0x2608B0u;
    SET_GPR_U32(ctx, 31, 0x2608B8u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x2608B8u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2608B8u) { return; }
    ctx->pc = 0x2608B8u;
label_2608b8:
    // 0x2608b8: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x2608b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2608bc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2608bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2608c0: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x2608c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2608c4: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x2608c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2608c8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2608c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2608cc: 0xc040c12  jal         func_103048
    ctx->pc = 0x2608CCu;
    SET_GPR_U32(ctx, 31, 0x2608D4u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x2608D4u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2608D4u) { return; }
    ctx->pc = 0x2608D4u;
label_2608d4:
    // 0x2608d4: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x2608d4u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2608d8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2608d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2608dc: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x2608dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2608e0: 0xc040c24  jal         func_103090
    ctx->pc = 0x2608E0u;
    SET_GPR_U32(ctx, 31, 0x2608E8u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2608E8u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2608E8u) { return; }
    ctx->pc = 0x2608E8u;
label_2608e8:
    // 0x2608e8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2608e8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2608ec: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x2608ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2608f0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2608f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2608f4: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x2608f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2608f8: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2608f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2608fc: 0xc040c24  jal         func_103090
    ctx->pc = 0x2608FCu;
    SET_GPR_U32(ctx, 31, 0x260904u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260904u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260904u) { return; }
    ctx->pc = 0x260904u;
label_260904:
    // 0x260904: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260904u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260908: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x260908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x26090c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x26090cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x260910: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x260910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x260914: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260914u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260918: 0xc040c24  jal         func_103090
    ctx->pc = 0x260918u;
    SET_GPR_U32(ctx, 31, 0x260920u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260920u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260920u) { return; }
    ctx->pc = 0x260920u;
label_260920:
    // 0x260920: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260920u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260924: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x260924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x260928: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260928u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x26092c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26092Cu;
    SET_GPR_U32(ctx, 31, 0x260934u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26092Cu, 0x260934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260934u;
label_260934:
    // 0x260934: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x260934u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260938: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x260938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x26093c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26093cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260940: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x260940u;
    SET_GPR_U32(ctx, 31, 0x260948u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260948u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260948u) { return; }
    ctx->pc = 0x260948u;
label_260948:
    // 0x260948: 0xc7a00240  lwc1        $f0, 0x240($sp)
    ctx->pc = 0x260948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26094c: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x26094cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x260950: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x260950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x260954: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260954u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x260958: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x260958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x26095c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x26095cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260960: 0xc040ce4  jal         func_103390
    ctx->pc = 0x260960u;
    SET_GPR_U32(ctx, 31, 0x260968u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x260968u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260968u) { return; }
    ctx->pc = 0x260968u;
label_260968:
    // 0x260968: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x260968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x26096c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x26096cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x260970: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x260970u;
    SET_GPR_U32(ctx, 31, 0x260978u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260978u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260978u) { return; }
    ctx->pc = 0x260978u;
label_260978:
    // 0x260978: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x260978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26097c: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x26097cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x260980: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x260980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x260984: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x260984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x260988: 0xc040ce4  jal         func_103390
    ctx->pc = 0x260988u;
    SET_GPR_U32(ctx, 31, 0x260990u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x260990u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260990u) { return; }
    ctx->pc = 0x260990u;
label_260990:
    // 0x260990: 0x10000168  b           . + 4 + (0x168 << 2)
    ctx->pc = 0x260990u;
    {
        const bool branch_taken_0x260990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260990) {
            ctx->pc = 0x260F34u;
            return;
        }
    }
    ctx->pc = 0x260998u;
}
