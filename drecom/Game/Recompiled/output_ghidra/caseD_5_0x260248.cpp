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

// Function: caseD_5
// Address: 0x260248 - 0x260324
void caseD_5_0x260248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x260248");
#endif

    switch (ctx->pc) {
        case 0x260258u: goto label_260258;
        case 0x260270u: goto label_260270;
        case 0x260288u: goto label_260288;
        case 0x26029cu: goto label_26029c;
        case 0x2602bcu: goto label_2602bc;
        case 0x2602d0u: goto label_2602d0;
        case 0x2602e4u: goto label_2602e4;
        case 0x260304u: goto label_260304;
        default: break;
    }

    ctx->pc = 0x260248u;

    // 0x260248: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x260248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x26024c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x26024cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x260250: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x260250u;
    SET_GPR_U32(ctx, 31, 0x260258u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260258u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260258u) { return; }
    ctx->pc = 0x260258u;
label_260258:
    // 0x260258: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x260258u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26025c: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x26025cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x260260: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x260260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x260264: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x260264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x260268: 0xc040d0e  jal         func_103438
    ctx->pc = 0x260268u;
    SET_GPR_U32(ctx, 31, 0x260270u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x260270u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260270u) { return; }
    ctx->pc = 0x260270u;
label_260270:
    // 0x260270: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x260270u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260274: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x260274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x260278: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x260278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x26027c: 0xc62c0108  lwc1        $f12, 0x108($s1)
    ctx->pc = 0x26027cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x260280: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x260280u;
    SET_GPR_U32(ctx, 31, 0x260288u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x260288u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260288u) { return; }
    ctx->pc = 0x260288u;
label_260288:
    // 0x260288: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x260288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x26028c: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x26028cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x260290: 0xc62c010c  lwc1        $f12, 0x10C($s1)
    ctx->pc = 0x260290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x260294: 0xc040ce4  jal         func_103390
    ctx->pc = 0x260294u;
    SET_GPR_U32(ctx, 31, 0x26029Cu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x26029Cu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26029Cu) { return; }
    ctx->pc = 0x26029Cu;
label_26029c:
    // 0x26029c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26029cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2602a0: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x2602a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2602a4: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2602a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2602a8: 0x246500e0  addiu       $a1, $v1, 0xE0
    ctx->pc = 0x2602a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x2602ac: 0x27b701f0  addiu       $s7, $sp, 0x1F0
    ctx->pc = 0x2602acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2602b0: 0x72e03628  paddub      $a2, $s7, $zero
    ctx->pc = 0x2602b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x2602b4: 0xc040c00  jal         func_103000
    ctx->pc = 0x2602B4u;
    SET_GPR_U32(ctx, 31, 0x2602BCu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x2602BCu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2602BCu) { return; }
    ctx->pc = 0x2602BCu;
label_2602bc:
    // 0x2602bc: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x2602bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2602c0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2602c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2602c4: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x2602c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2602c8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2602C8u;
    SET_GPR_U32(ctx, 31, 0x2602D0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2602D0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2602D0u) { return; }
    ctx->pc = 0x2602D0u;
label_2602d0:
    // 0x2602d0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2602d0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2602d4: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x2602d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2602d8: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x2602d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2602dc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2602DCu;
    SET_GPR_U32(ctx, 31, 0x2602E4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2602E4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2602E4u) { return; }
    ctx->pc = 0x2602E4u;
label_2602e4:
    // 0x2602e4: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x2602e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2602e8: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x2602e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x2602ec: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x2602ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x2602f0: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x2602f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2602f4: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2602f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2602f8: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x2602f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2602fc: 0xc040ca2  jal         func_103288
    ctx->pc = 0x2602FCu;
    SET_GPR_U32(ctx, 31, 0x260304u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x260304u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260304u) { return; }
    ctx->pc = 0x260304u;
label_260304:
    // 0x260304: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x260304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x260308: 0x133100  sll         $a2, $s3, 4
    ctx->pc = 0x260308u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x26030c: 0x8ca30330  lw          $v1, 0x330($a1)
    ctx->pc = 0x26030cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 816)));
    // 0x260310: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x260310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x260314: 0x27a201d0  addiu       $v0, $sp, 0x1D0
    ctx->pc = 0x260314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x260318: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260318u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26031c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x26031Cu;
    SET_GPR_U32(ctx, 31, 0x260324u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x260324u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260324u) { return; }
    ctx->pc = 0x260324u;
}
