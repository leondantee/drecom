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

// Function: entry_00262378
// Address: 0x262378 - 0x2625b4
void entry_00262378_0x262378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00262378_0x262378");
#endif

    switch (ctx->pc) {
        case 0x262390u: goto label_262390;
        case 0x2623a4u: goto label_2623a4;
        case 0x2623b4u: goto label_2623b4;
        case 0x2623c8u: goto label_2623c8;
        case 0x2623d8u: goto label_2623d8;
        case 0x2623e4u: goto label_2623e4;
        case 0x2623f4u: goto label_2623f4;
        case 0x26240cu: goto label_26240c;
        case 0x262418u: goto label_262418;
        case 0x262430u: goto label_262430;
        case 0x26244cu: goto label_26244c;
        case 0x262460u: goto label_262460;
        case 0x262474u: goto label_262474;
        case 0x26249cu: goto label_26249c;
        case 0x2624b0u: goto label_2624b0;
        case 0x2624d0u: goto label_2624d0;
        case 0x2624e8u: goto label_2624e8;
        case 0x262510u: goto label_262510;
        case 0x262528u: goto label_262528;
        case 0x26254cu: goto label_26254c;
        case 0x26255cu: goto label_26255c;
        case 0x262584u: goto label_262584;
        default: break;
    }

    ctx->pc = 0x262378u;

    // 0x262378: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x262378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x26237c: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x26237cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x262380: 0x27a30190  addiu       $v1, $sp, 0x190
    ctx->pc = 0x262380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x262384: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x262384u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x262388: 0xc040c12  jal         func_103048
    ctx->pc = 0x262388u;
    SET_GPR_U32(ctx, 31, 0x262390u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x262390u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262390u) { return; }
    ctx->pc = 0x262390u;
label_262390:
    // 0x262390: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x262390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x262394: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x262394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x262398: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x262398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x26239c: 0xc040c12  jal         func_103048
    ctx->pc = 0x26239Cu;
    SET_GPR_U32(ctx, 31, 0x2623A4u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x2623A4u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2623A4u) { return; }
    ctx->pc = 0x2623A4u;
label_2623a4:
    // 0x2623a4: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2623a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2623a8: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x2623a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2623ac: 0xc040c24  jal         func_103090
    ctx->pc = 0x2623ACu;
    SET_GPR_U32(ctx, 31, 0x2623B4u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2623B4u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2623B4u) { return; }
    ctx->pc = 0x2623B4u;
label_2623b4:
    // 0x2623b4: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x2623b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2623b8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2623b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2623bc: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x2623bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2623c0: 0xc040c24  jal         func_103090
    ctx->pc = 0x2623C0u;
    SET_GPR_U32(ctx, 31, 0x2623C8u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2623C8u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2623C8u) { return; }
    ctx->pc = 0x2623C8u;
label_2623c8:
    // 0x2623c8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2623c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2623cc: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x2623ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2623d0: 0xc040c24  jal         func_103090
    ctx->pc = 0x2623D0u;
    SET_GPR_U32(ctx, 31, 0x2623D8u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2623D8u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2623D8u) { return; }
    ctx->pc = 0x2623D8u;
label_2623d8:
    // 0x2623d8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2623d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2623dc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2623DCu;
    SET_GPR_U32(ctx, 31, 0x2623E4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2623DCu, 0x2623E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2623E4u;
label_2623e4:
    // 0x2623e4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2623e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2623e8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2623e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2623ec: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x2623ECu;
    SET_GPR_U32(ctx, 31, 0x2623F4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x2623F4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2623F4u) { return; }
    ctx->pc = 0x2623F4u;
label_2623f4:
    // 0x2623f4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2623f4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2623f8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2623f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2623fc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2623fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x262400: 0xc7ac0230  lwc1        $f12, 0x230($sp)
    ctx->pc = 0x262400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x262404: 0xc040d0e  jal         func_103438
    ctx->pc = 0x262404u;
    SET_GPR_U32(ctx, 31, 0x26240Cu);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x26240Cu;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26240Cu) { return; }
    ctx->pc = 0x26240Cu;
label_26240c:
    // 0x26240c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x26240cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x262410: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x262410u;
    SET_GPR_U32(ctx, 31, 0x262418u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x262418u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262418u) { return; }
    ctx->pc = 0x262418u;
label_262418:
    // 0x262418: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x262418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x26241c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26241cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x262420: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x262420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x262424: 0xc7ac0234  lwc1        $f12, 0x234($sp)
    ctx->pc = 0x262424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x262428: 0xc040d0e  jal         func_103438
    ctx->pc = 0x262428u;
    SET_GPR_U32(ctx, 31, 0x262430u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x262430u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262430u) { return; }
    ctx->pc = 0x262430u;
label_262430:
    // 0x262430: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x262430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x262434: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x262434u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x262438: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x262438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x26243c: 0x27b601c0  addiu       $s6, $sp, 0x1C0
    ctx->pc = 0x26243cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x262440: 0x72c03628  paddub      $a2, $s6, $zero
    ctx->pc = 0x262440u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x262444: 0xc040c92  jal         func_103248
    ctx->pc = 0x262444u;
    SET_GPR_U32(ctx, 31, 0x26244Cu);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x26244Cu;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26244Cu) { return; }
    ctx->pc = 0x26244Cu;
label_26244c:
    // 0x26244c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x26244cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x262450: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x262450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x262454: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x262454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x262458: 0xc040c00  jal         func_103000
    ctx->pc = 0x262458u;
    SET_GPR_U32(ctx, 31, 0x262460u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x262460u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262460u) { return; }
    ctx->pc = 0x262460u;
label_262460:
    // 0x262460: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x262460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x262464: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x262464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x262468: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x262468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x26246c: 0xc040c00  jal         func_103000
    ctx->pc = 0x26246Cu;
    SET_GPR_U32(ctx, 31, 0x262474u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x262474u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262474u) { return; }
    ctx->pc = 0x262474u;
label_262474:
    // 0x262474: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x262474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x262478: 0x93a20258  lbu         $v0, 0x258($sp)
    ctx->pc = 0x262478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x26247c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26247cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x262480: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x262480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x262484: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x262484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x262488: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x262488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26248c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x26248cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x262490: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x262490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x262494: 0xc040c92  jal         func_103248
    ctx->pc = 0x262494u;
    SET_GPR_U32(ctx, 31, 0x26249Cu);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x26249Cu;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26249Cu) { return; }
    ctx->pc = 0x26249Cu;
label_26249c:
    // 0x26249c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x26249cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2624a0: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2624a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2624a4: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2624a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2624a8: 0xc040c00  jal         func_103000
    ctx->pc = 0x2624A8u;
    SET_GPR_U32(ctx, 31, 0x2624B0u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x2624B0u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2624B0u) { return; }
    ctx->pc = 0x2624B0u;
label_2624b0:
    // 0x2624b0: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x2624b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2624b4: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x2624b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x2624b8: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2624b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2624bc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2624bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2624c0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2624c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2624c4: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x2624c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2624c8: 0xc040c92  jal         func_103248
    ctx->pc = 0x2624C8u;
    SET_GPR_U32(ctx, 31, 0x2624D0u);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x2624D0u;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2624D0u) { return; }
    ctx->pc = 0x2624D0u;
label_2624d0:
    // 0x2624d0: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x2624d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2624d4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2624d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2624d8: 0x8e420100  lw          $v0, 0x100($s2)
    ctx->pc = 0x2624d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x2624dc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2624dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2624e0: 0xc040c44  jal         func_103110
    ctx->pc = 0x2624E0u;
    SET_GPR_U32(ctx, 31, 0x2624E8u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x2624E8u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2624E8u) { return; }
    ctx->pc = 0x2624E8u;
label_2624e8:
    // 0x2624e8: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x2624e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2624ec: 0x93a50258  lbu         $a1, 0x258($sp)
    ctx->pc = 0x2624ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x2624f0: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x2624f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2624f4: 0x61180  sll         $v0, $a2, 6
    ctx->pc = 0x2624f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x2624f8: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x2624f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2624fc: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x2624fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x262500: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x262500u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x262504: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x262504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x262508: 0xc040c00  jal         func_103000
    ctx->pc = 0x262508u;
    SET_GPR_U32(ctx, 31, 0x262510u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x262510u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262510u) { return; }
    ctx->pc = 0x262510u;
label_262510:
    // 0x262510: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x262510u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x262514: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x262514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x262518: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x262518u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26251c: 0x8e850100  lw          $a1, 0x100($s4)
    ctx->pc = 0x26251cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
    // 0x262520: 0xc040c44  jal         func_103110
    ctx->pc = 0x262520u;
    SET_GPR_U32(ctx, 31, 0x262528u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x262528u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262528u) { return; }
    ctx->pc = 0x262528u;
label_262528:
    // 0x262528: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x262528u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26252c: 0x8fa60250  lw          $a2, 0x250($sp)
    ctx->pc = 0x26252cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x262530: 0x131180  sll         $v0, $s3, 6
    ctx->pc = 0x262530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x262534: 0x8cc30130  lw          $v1, 0x130($a2)
    ctx->pc = 0x262534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
    // 0x262538: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x262538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26253c: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x26253cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x262540: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x262540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x262544: 0xc040c00  jal         func_103000
    ctx->pc = 0x262544u;
    SET_GPR_U32(ctx, 31, 0x26254Cu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x26254Cu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26254Cu) { return; }
    ctx->pc = 0x26254Cu;
label_26254c:
    // 0x26254c: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x26254cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x262550: 0x8e250100  lw          $a1, 0x100($s1)
    ctx->pc = 0x262550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x262554: 0xc040c44  jal         func_103110
    ctx->pc = 0x262554u;
    SET_GPR_U32(ctx, 31, 0x26255Cu);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x26255Cu;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26255Cu) { return; }
    ctx->pc = 0x26255Cu;
label_26255c:
    // 0x26255c: 0x8fa30250  lw          $v1, 0x250($sp)
    ctx->pc = 0x26255cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x262560: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x262560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x262564: 0x8c640130  lw          $a0, 0x130($v1)
    ctx->pc = 0x262564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x262568: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x262568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26256c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x26256cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x262570: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x262570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x262574: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x262574u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x262578: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x262578u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26257c: 0xc040c00  jal         func_103000
    ctx->pc = 0x26257Cu;
    SET_GPR_U32(ctx, 31, 0x262584u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x262584u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262584u) { return; }
    ctx->pc = 0x262584u;
label_262584:
    // 0x262584: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x262584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262588: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x262588u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26258c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x26258cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x262590: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x262590u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x262594: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x262594u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x262598: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x262598u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26259c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26259cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2625a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2625a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2625a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2625a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2625a8: 0x27bd0260  addiu       $sp, $sp, 0x260
    ctx->pc = 0x2625a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x2625ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2625ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2625ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2625B4u;
}
