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

// Function: entry_00261918
// Address: 0x261918 - 0x261b54
void entry_00261918_0x261918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00261918_0x261918");
#endif

    switch (ctx->pc) {
        case 0x261930u: goto label_261930;
        case 0x261944u: goto label_261944;
        case 0x261954u: goto label_261954;
        case 0x261968u: goto label_261968;
        case 0x261978u: goto label_261978;
        case 0x261984u: goto label_261984;
        case 0x261994u: goto label_261994;
        case 0x2619acu: goto label_2619ac;
        case 0x2619b8u: goto label_2619b8;
        case 0x2619d0u: goto label_2619d0;
        case 0x2619ecu: goto label_2619ec;
        case 0x261a00u: goto label_261a00;
        case 0x261a14u: goto label_261a14;
        case 0x261a3cu: goto label_261a3c;
        case 0x261a50u: goto label_261a50;
        case 0x261a70u: goto label_261a70;
        case 0x261a88u: goto label_261a88;
        case 0x261ab0u: goto label_261ab0;
        case 0x261ac8u: goto label_261ac8;
        case 0x261aecu: goto label_261aec;
        case 0x261afcu: goto label_261afc;
        case 0x261b24u: goto label_261b24;
        default: break;
    }

    ctx->pc = 0x261918u;

    // 0x261918: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x261918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x26191c: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x26191cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x261920: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x261920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x261924: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x261924u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x261928: 0xc040c12  jal         func_103048
    ctx->pc = 0x261928u;
    SET_GPR_U32(ctx, 31, 0x261930u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x261930u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261930u) { return; }
    ctx->pc = 0x261930u;
label_261930:
    // 0x261930: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x261930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x261934: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x261934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x261938: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x261938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x26193c: 0xc040c12  jal         func_103048
    ctx->pc = 0x26193Cu;
    SET_GPR_U32(ctx, 31, 0x261944u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x261944u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261944u) { return; }
    ctx->pc = 0x261944u;
label_261944:
    // 0x261944: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x261944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x261948: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x261948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x26194c: 0xc040c24  jal         func_103090
    ctx->pc = 0x26194Cu;
    SET_GPR_U32(ctx, 31, 0x261954u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x261954u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261954u) { return; }
    ctx->pc = 0x261954u;
label_261954:
    // 0x261954: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x261954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x261958: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x261958u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x26195c: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x26195cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x261960: 0xc040c24  jal         func_103090
    ctx->pc = 0x261960u;
    SET_GPR_U32(ctx, 31, 0x261968u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x261968u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261968u) { return; }
    ctx->pc = 0x261968u;
label_261968:
    // 0x261968: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x261968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x26196c: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x26196cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x261970: 0xc040c24  jal         func_103090
    ctx->pc = 0x261970u;
    SET_GPR_U32(ctx, 31, 0x261978u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x261978u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261978u) { return; }
    ctx->pc = 0x261978u;
label_261978:
    // 0x261978: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x261978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x26197c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26197Cu;
    SET_GPR_U32(ctx, 31, 0x261984u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26197Cu, 0x261984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261984u;
label_261984:
    // 0x261984: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x261984u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x261988: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x261988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x26198c: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x26198Cu;
    SET_GPR_U32(ctx, 31, 0x261994u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x261994u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261994u) { return; }
    ctx->pc = 0x261994u;
label_261994:
    // 0x261994: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x261994u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x261998: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x261998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x26199c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x26199cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2619a0: 0xc7ac0230  lwc1        $f12, 0x230($sp)
    ctx->pc = 0x2619a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2619a4: 0xc040d0e  jal         func_103438
    ctx->pc = 0x2619A4u;
    SET_GPR_U32(ctx, 31, 0x2619ACu);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x2619ACu;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2619ACu) { return; }
    ctx->pc = 0x2619ACu;
label_2619ac:
    // 0x2619ac: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2619acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2619b0: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x2619B0u;
    SET_GPR_U32(ctx, 31, 0x2619B8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x2619B8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2619B8u) { return; }
    ctx->pc = 0x2619B8u;
label_2619b8:
    // 0x2619b8: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x2619b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2619bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2619bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2619c0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2619c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2619c4: 0xc7ac0234  lwc1        $f12, 0x234($sp)
    ctx->pc = 0x2619c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2619c8: 0xc040d0e  jal         func_103438
    ctx->pc = 0x2619C8u;
    SET_GPR_U32(ctx, 31, 0x2619D0u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x2619D0u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2619D0u) { return; }
    ctx->pc = 0x2619D0u;
label_2619d0:
    // 0x2619d0: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x2619d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2619d4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2619d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2619d8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2619d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2619dc: 0x27b601c0  addiu       $s6, $sp, 0x1C0
    ctx->pc = 0x2619dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2619e0: 0x72c03628  paddub      $a2, $s6, $zero
    ctx->pc = 0x2619e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x2619e4: 0xc040c92  jal         func_103248
    ctx->pc = 0x2619E4u;
    SET_GPR_U32(ctx, 31, 0x2619ECu);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x2619ECu;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2619ECu) { return; }
    ctx->pc = 0x2619ECu;
label_2619ec:
    // 0x2619ec: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2619ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2619f0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2619f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2619f4: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2619f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2619f8: 0xc040c00  jal         func_103000
    ctx->pc = 0x2619F8u;
    SET_GPR_U32(ctx, 31, 0x261A00u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x261A00u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261A00u) { return; }
    ctx->pc = 0x261A00u;
label_261a00:
    // 0x261a00: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x261a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x261a04: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x261a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x261a08: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x261a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x261a0c: 0xc040c00  jal         func_103000
    ctx->pc = 0x261A0Cu;
    SET_GPR_U32(ctx, 31, 0x261A14u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x261A14u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261A14u) { return; }
    ctx->pc = 0x261A14u;
label_261a14:
    // 0x261a14: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x261a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261a18: 0x93a20258  lbu         $v0, 0x258($sp)
    ctx->pc = 0x261a18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x261a1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x261a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x261a20: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x261a20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x261a24: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x261a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x261a28: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x261a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261a2c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x261a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x261a30: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x261a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x261a34: 0xc040c92  jal         func_103248
    ctx->pc = 0x261A34u;
    SET_GPR_U32(ctx, 31, 0x261A3Cu);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x261A3Cu;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261A3Cu) { return; }
    ctx->pc = 0x261A3Cu;
label_261a3c:
    // 0x261a3c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x261a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x261a40: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x261a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x261a44: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x261a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x261a48: 0xc040c00  jal         func_103000
    ctx->pc = 0x261A48u;
    SET_GPR_U32(ctx, 31, 0x261A50u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x261A50u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261A50u) { return; }
    ctx->pc = 0x261A50u;
label_261a50:
    // 0x261a50: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x261a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261a54: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x261a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x261a58: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x261a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x261a5c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x261a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261a60: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x261a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x261a64: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x261a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x261a68: 0xc040c92  jal         func_103248
    ctx->pc = 0x261A68u;
    SET_GPR_U32(ctx, 31, 0x261A70u);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x261A70u;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261A70u) { return; }
    ctx->pc = 0x261A70u;
label_261a70:
    // 0x261a70: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x261a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x261a74: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x261a74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x261a78: 0x8e420100  lw          $v0, 0x100($s2)
    ctx->pc = 0x261a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x261a7c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x261a7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x261a80: 0xc040c44  jal         func_103110
    ctx->pc = 0x261A80u;
    SET_GPR_U32(ctx, 31, 0x261A88u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x261A88u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261A88u) { return; }
    ctx->pc = 0x261A88u;
label_261a88:
    // 0x261a88: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x261a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261a8c: 0x93a50258  lbu         $a1, 0x258($sp)
    ctx->pc = 0x261a8cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x261a90: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x261a90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x261a94: 0x61180  sll         $v0, $a2, 6
    ctx->pc = 0x261a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x261a98: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x261a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x261a9c: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x261a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x261aa0: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x261aa0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x261aa4: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x261aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x261aa8: 0xc040c00  jal         func_103000
    ctx->pc = 0x261AA8u;
    SET_GPR_U32(ctx, 31, 0x261AB0u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x261AB0u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261AB0u) { return; }
    ctx->pc = 0x261AB0u;
label_261ab0:
    // 0x261ab0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x261ab0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x261ab4: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x261ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x261ab8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x261ab8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x261abc: 0x8e850100  lw          $a1, 0x100($s4)
    ctx->pc = 0x261abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
    // 0x261ac0: 0xc040c44  jal         func_103110
    ctx->pc = 0x261AC0u;
    SET_GPR_U32(ctx, 31, 0x261AC8u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x261AC8u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261AC8u) { return; }
    ctx->pc = 0x261AC8u;
label_261ac8:
    // 0x261ac8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x261ac8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x261acc: 0x8fa60250  lw          $a2, 0x250($sp)
    ctx->pc = 0x261accu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261ad0: 0x131180  sll         $v0, $s3, 6
    ctx->pc = 0x261ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x261ad4: 0x8cc30130  lw          $v1, 0x130($a2)
    ctx->pc = 0x261ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
    // 0x261ad8: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x261ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x261adc: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x261adcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x261ae0: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x261ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x261ae4: 0xc040c00  jal         func_103000
    ctx->pc = 0x261AE4u;
    SET_GPR_U32(ctx, 31, 0x261AECu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x261AECu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261AECu) { return; }
    ctx->pc = 0x261AECu;
label_261aec:
    // 0x261aec: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x261aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x261af0: 0x8e250100  lw          $a1, 0x100($s1)
    ctx->pc = 0x261af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x261af4: 0xc040c44  jal         func_103110
    ctx->pc = 0x261AF4u;
    SET_GPR_U32(ctx, 31, 0x261AFCu);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x261AFCu;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261AFCu) { return; }
    ctx->pc = 0x261AFCu;
label_261afc:
    // 0x261afc: 0x8fa30250  lw          $v1, 0x250($sp)
    ctx->pc = 0x261afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261b00: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x261b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x261b04: 0x8c640130  lw          $a0, 0x130($v1)
    ctx->pc = 0x261b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x261b08: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x261b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x261b0c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x261b0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x261b10: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x261b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x261b14: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x261b14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x261b18: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x261b18u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x261b1c: 0xc040c00  jal         func_103000
    ctx->pc = 0x261B1Cu;
    SET_GPR_U32(ctx, 31, 0x261B24u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x261B24u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261B24u) { return; }
    ctx->pc = 0x261B24u;
label_261b24:
    // 0x261b24: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x261b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261b28: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x261b28u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x261b2c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x261b2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x261b30: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x261b30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x261b34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x261b34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x261b38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x261b38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x261b3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x261b3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x261b40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x261b40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261b44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x261b44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x261b48: 0x27bd0260  addiu       $sp, $sp, 0x260
    ctx->pc = 0x261b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x261b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x261B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261B54u;
}
