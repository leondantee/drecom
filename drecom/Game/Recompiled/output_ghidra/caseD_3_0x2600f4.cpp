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
// Address: 0x2600f4 - 0x260248
void caseD_3_0x2600f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x2600f4");
#endif

    switch (ctx->pc) {
        case 0x260104u: goto label_260104;
        case 0x260118u: goto label_260118;
        case 0x260130u: goto label_260130;
        case 0x260144u: goto label_260144;
        case 0x260168u: goto label_260168;
        case 0x260188u: goto label_260188;
        case 0x2601a4u: goto label_2601a4;
        case 0x2601c8u: goto label_2601c8;
        case 0x2601e0u: goto label_2601e0;
        case 0x2601f4u: goto label_2601f4;
        case 0x260208u: goto label_260208;
        case 0x260224u: goto label_260224;
        case 0x260240u: goto label_260240;
        default: break;
    }

    ctx->pc = 0x2600f4u;

    // 0x2600f4: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x2600f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2600f8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2600f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2600fc: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x2600FCu;
    SET_GPR_U32(ctx, 31, 0x260104u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260104u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260104u) { return; }
    ctx->pc = 0x260104u;
label_260104:
    // 0x260104: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x260104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x260108: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x260108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x26010c: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x26010cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x260110: 0xc040d0e  jal         func_103438
    ctx->pc = 0x260110u;
    SET_GPR_U32(ctx, 31, 0x260118u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x260118u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260118u) { return; }
    ctx->pc = 0x260118u;
label_260118:
    // 0x260118: 0x27a201f0  addiu       $v0, $sp, 0x1F0
    ctx->pc = 0x260118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x26011c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26011cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260120: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x260120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x260124: 0xc62c0108  lwc1        $f12, 0x108($s1)
    ctx->pc = 0x260124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x260128: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x260128u;
    SET_GPR_U32(ctx, 31, 0x260130u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x260130u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260130u) { return; }
    ctx->pc = 0x260130u;
label_260130:
    // 0x260130: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x260130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x260134: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x260134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x260138: 0xc62c010c  lwc1        $f12, 0x10C($s1)
    ctx->pc = 0x260138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26013c: 0xc040ce4  jal         func_103390
    ctx->pc = 0x26013Cu;
    SET_GPR_U32(ctx, 31, 0x260144u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x260144u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260144u) { return; }
    ctx->pc = 0x260144u;
label_260144:
    // 0x260144: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x260144u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260148: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x260148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x26014c: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x26014cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x260150: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260150u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x260154: 0x246200e0  addiu       $v0, $v1, 0xE0
    ctx->pc = 0x260154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x260158: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260158u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26015c: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x26015cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x260160: 0xc040c00  jal         func_103000
    ctx->pc = 0x260160u;
    SET_GPR_U32(ctx, 31, 0x260168u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x260168u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260168u) { return; }
    ctx->pc = 0x260168u;
label_260168:
    // 0x260168: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x260168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x26016c: 0x162900  sll         $a1, $s6, 4
    ctx->pc = 0x26016cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x260170: 0x8c820330  lw          $v0, 0x330($a0)
    ctx->pc = 0x260170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 816)));
    // 0x260174: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x260174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x260178: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x260178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x26017c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x26017cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x260180: 0xc040ec4  jal         func_103B10
    ctx->pc = 0x260180u;
    SET_GPR_U32(ctx, 31, 0x260188u);
    ctx->pc = 0x103B10u;
    {
        ctx->pc = 0x260188u;
        ps2_stubs::sceVu0CopyVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260188u) { return; }
    ctx->pc = 0x260188u;
label_260188:
    // 0x260188: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x260188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x26018c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26018cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x260190: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x260190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x260194: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260194u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x260198: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x260198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x26019c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x26019Cu;
    SET_GPR_U32(ctx, 31, 0x2601A4u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x2601A4u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2601A4u) { return; }
    ctx->pc = 0x2601A4u;
label_2601a4:
    // 0x2601a4: 0x3c163f80  lui         $s6, 0x3F80
    ctx->pc = 0x2601a4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16256 << 16));
    // 0x2601a8: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x2601a8u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2601ac: 0x0  nop
    ctx->pc = 0x2601acu;
    // NOP
    // 0x2601b0: 0xe7a0019c  swc1        $f0, 0x19C($sp)
    ctx->pc = 0x2601b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
    // 0x2601b4: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2601b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2601b8: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x2601b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2601bc: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x2601bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2601c0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2601C0u;
    SET_GPR_U32(ctx, 31, 0x2601C8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2601C8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2601C8u) { return; }
    ctx->pc = 0x2601C8u;
label_2601c8:
    // 0x2601c8: 0x27a30190  addiu       $v1, $sp, 0x190
    ctx->pc = 0x2601c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2601cc: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2601ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2601d0: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x2601d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2601d4: 0x27a60220  addiu       $a2, $sp, 0x220
    ctx->pc = 0x2601d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2601d8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x2601D8u;
    SET_GPR_U32(ctx, 31, 0x2601E0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2601D8u, 0x2601E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2601E0u;
label_2601e0:
    // 0x2601e0: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2601e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2601e4: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x2601e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2601e8: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x2601e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2601ec: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2601ECu;
    SET_GPR_U32(ctx, 31, 0x2601F4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2601ECu, 0x2601F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2601F4u;
label_2601f4:
    // 0x2601f4: 0x27a20220  addiu       $v0, $sp, 0x220
    ctx->pc = 0x2601f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2601f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2601f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2601fc: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x2601fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x260200: 0xc040c9e  jal         func_103278
    ctx->pc = 0x260200u;
    SET_GPR_U32(ctx, 31, 0x260208u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x260208u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260208u) { return; }
    ctx->pc = 0x260208u;
label_260208:
    // 0x260208: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x260208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x26020c: 0x102980  sll         $a1, $s0, 6
    ctx->pc = 0x26020cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x260210: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x260210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x260214: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x260214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x260218: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x260218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x26021c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x26021Cu;
    SET_GPR_U32(ctx, 31, 0x260224u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x260224u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260224u) { return; }
    ctx->pc = 0x260224u;
label_260224:
    // 0x260224: 0x8fa60260  lw          $a2, 0x260($sp)
    ctx->pc = 0x260224u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x260228: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x260228u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x26022c: 0x8cc60330  lw          $a2, 0x330($a2)
    ctx->pc = 0x26022cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 816)));
    // 0x260230: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x260230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x260234: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x260234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x260238: 0xc040c9e  jal         func_103278
    ctx->pc = 0x260238u;
    SET_GPR_U32(ctx, 31, 0x260240u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x260240u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260240u) { return; }
    ctx->pc = 0x260240u;
label_260240:
    // 0x260240: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x260240u;
    {
        const bool branch_taken_0x260240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260240) {
            ctx->pc = 0x260324u;
            return;
        }
    }
    ctx->pc = 0x260248u;
}
