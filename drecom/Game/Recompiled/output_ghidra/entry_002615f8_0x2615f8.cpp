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

// Function: entry_002615f8
// Address: 0x2615f8 - 0x2618ac
void entry_002615f8_0x2615f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002615f8_0x2615f8");
#endif

    switch (ctx->pc) {
        case 0x261640u: goto label_261640;
        case 0x261654u: goto label_261654;
        case 0x261668u: goto label_261668;
        case 0x26167cu: goto label_26167c;
        case 0x261694u: goto label_261694;
        case 0x2616b0u: goto label_2616b0;
        case 0x2616c8u: goto label_2616c8;
        case 0x2616ecu: goto label_2616ec;
        case 0x261700u: goto label_261700;
        case 0x261714u: goto label_261714;
        case 0x261724u: goto label_261724;
        case 0x261740u: goto label_261740;
        case 0x26175cu: goto label_26175c;
        case 0x261780u: goto label_261780;
        case 0x261794u: goto label_261794;
        case 0x2617a0u: goto label_2617a0;
        case 0x261824u: goto label_261824;
        case 0x26188cu: goto label_26188c;
        default: break;
    }

    ctx->pc = 0x2615f8u;

    // 0x2615f8: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x2615f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2615fc: 0xc44102d8  lwc1        $f1, 0x2D8($v0)
    ctx->pc = 0x2615fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261600: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x261600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261604: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x261604u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x261608: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x261608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
    // 0x26160c: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x26160cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261610: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261614: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x261614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x261618: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x261618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x26161c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26161cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261620: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x261620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x261624: 0xc7a10224  lwc1        $f1, 0x224($sp)
    ctx->pc = 0x261624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261628: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x261628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26162c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26162cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x261630: 0xe7a00224  swc1        $f0, 0x224($sp)
    ctx->pc = 0x261630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
    // 0x261634: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x261634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x261638: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x261638u;
    SET_GPR_U32(ctx, 31, 0x261640u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x261640u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261640u) { return; }
    ctx->pc = 0x261640u;
label_261640:
    // 0x261640: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x261640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x261644: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x261644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x261648: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x261648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26164c: 0xc040d0e  jal         func_103438
    ctx->pc = 0x26164Cu;
    SET_GPR_U32(ctx, 31, 0x261654u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x261654u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261654u) { return; }
    ctx->pc = 0x261654u;
label_261654:
    // 0x261654: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x261654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x261658: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x261658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x26165c: 0xc62c0108  lwc1        $f12, 0x108($s1)
    ctx->pc = 0x26165cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x261660: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x261660u;
    SET_GPR_U32(ctx, 31, 0x261668u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x261668u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261668u) { return; }
    ctx->pc = 0x261668u;
label_261668:
    // 0x261668: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x261668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x26166c: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x26166cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x261670: 0xc62c010c  lwc1        $f12, 0x10C($s1)
    ctx->pc = 0x261670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x261674: 0xc040ce4  jal         func_103390
    ctx->pc = 0x261674u;
    SET_GPR_U32(ctx, 31, 0x26167Cu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x26167Cu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26167Cu) { return; }
    ctx->pc = 0x26167Cu;
label_26167c:
    // 0x26167c: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x26167cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261680: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x261680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x261684: 0x244500e0  addiu       $a1, $v0, 0xE0
    ctx->pc = 0x261684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x261688: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x261688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x26168c: 0xc040c00  jal         func_103000
    ctx->pc = 0x26168Cu;
    SET_GPR_U32(ctx, 31, 0x261694u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x261694u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261694u) { return; }
    ctx->pc = 0x261694u;
label_261694:
    // 0x261694: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261698: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x261698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x26169c: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x26169cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x2616a0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2616a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2616a4: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x2616a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2616a8: 0xc040ec4  jal         func_103B10
    ctx->pc = 0x2616A8u;
    SET_GPR_U32(ctx, 31, 0x2616B0u);
    ctx->pc = 0x103B10u;
    {
        ctx->pc = 0x2616B0u;
        ps2_stubs::sceVu0CopyVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2616B0u) { return; }
    ctx->pc = 0x2616B0u;
label_2616b0:
    // 0x2616b0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2616b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2616b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2616b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2616b8: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2616b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2616bc: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x2616bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2616c0: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x2616C0u;
    SET_GPR_U32(ctx, 31, 0x2616C8u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x2616C8u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2616C8u) { return; }
    ctx->pc = 0x2616C8u;
label_2616c8:
    // 0x2616c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2616c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2616cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2616ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2616d0: 0x0  nop
    ctx->pc = 0x2616d0u;
    // NOP
    // 0x2616d4: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x2616d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
    // 0x2616d8: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2616d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2616dc: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x2616dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2616e0: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x2616e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2616e4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2616E4u;
    SET_GPR_U32(ctx, 31, 0x2616ECu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2616ECu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2616ECu) { return; }
    ctx->pc = 0x2616ECu;
label_2616ec:
    // 0x2616ec: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2616ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2616f0: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x2616f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2616f4: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x2616f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x2616f8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x2616F8u;
    SET_GPR_U32(ctx, 31, 0x261700u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2616F8u, 0x261700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261700u;
label_261700:
    // 0x261700: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x261700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x261704: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x261704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x261708: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x261708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x26170c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x26170Cu;
    SET_GPR_U32(ctx, 31, 0x261714u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x26170Cu, 0x261714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261714u;
label_261714:
    // 0x261714: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x261714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x261718: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x261718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x26171c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x26171Cu;
    SET_GPR_U32(ctx, 31, 0x261724u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x261724u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261724u) { return; }
    ctx->pc = 0x261724u;
label_261724:
    // 0x261724: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261728: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x261728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x26172c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x26172cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x261730: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x261730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261734: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x261734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x261738: 0xc040ca2  jal         func_103288
    ctx->pc = 0x261738u;
    SET_GPR_U32(ctx, 31, 0x261740u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x261740u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261740u) { return; }
    ctx->pc = 0x261740u;
label_261740:
    // 0x261740: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261744: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x261744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x261748: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x261748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x26174c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x26174cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261750: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x261750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x261754: 0xc040c9e  jal         func_103278
    ctx->pc = 0x261754u;
    SET_GPR_U32(ctx, 31, 0x26175Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x26175Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26175Cu) { return; }
    ctx->pc = 0x26175Cu;
label_26175c:
    // 0x26175c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x26175cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x261760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x261760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261764: 0x0  nop
    ctx->pc = 0x261764u;
    // NOP
    // 0x261768: 0xe7a001cc  swc1        $f0, 0x1CC($sp)
    ctx->pc = 0x261768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
    // 0x26176c: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x26176cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x261770: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x261770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x261774: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x261774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x261778: 0xc040c80  jal         func_103200
    ctx->pc = 0x261778u;
    SET_GPR_U32(ctx, 31, 0x261780u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x261780u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261780u) { return; }
    ctx->pc = 0x261780u;
label_261780:
    // 0x261780: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x261780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x261784: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x261784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x261788: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x261788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x26178c: 0xc040c80  jal         func_103200
    ctx->pc = 0x26178Cu;
    SET_GPR_U32(ctx, 31, 0x261794u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x261794u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261794u) { return; }
    ctx->pc = 0x261794u;
label_261794:
    // 0x261794: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x261794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x261798: 0xc067588  jal         func_19D620
    ctx->pc = 0x261798u;
    SET_GPR_U32(ctx, 31, 0x2617A0u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x261798u, 0x2617A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2617A0u;
label_2617a0:
    // 0x2617a0: 0xe7a00240  swc1        $f0, 0x240($sp)
    ctx->pc = 0x2617a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
    // 0x2617a4: 0xc7a20240  lwc1        $f2, 0x240($sp)
    ctx->pc = 0x2617a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2617a8: 0xc7a10238  lwc1        $f1, 0x238($sp)
    ctx->pc = 0x2617a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2617ac: 0xc7a0023c  lwc1        $f0, 0x23C($sp)
    ctx->pc = 0x2617acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2617b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2617b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2617b4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2617b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2617b8: 0x0  nop
    ctx->pc = 0x2617b8u;
    // NOP
    // 0x2617bc: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x2617BCu;
    {
        const bool branch_taken_0x2617bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2617bc) {
            ctx->pc = 0x2618ACu;
            return;
        }
    }
    ctx->pc = 0x2617C4u;
    // 0x2617c4: 0xc7a1023c  lwc1        $f1, 0x23C($sp)
    ctx->pc = 0x2617c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2617c8: 0xc7a0023c  lwc1        $f0, 0x23C($sp)
    ctx->pc = 0x2617c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2617cc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2617ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2617d0: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x2617d0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x2617d4: 0xc7a10238  lwc1        $f1, 0x238($sp)
    ctx->pc = 0x2617d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2617d8: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x2617d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2617dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2617dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2617e0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2617e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2617e4: 0xc7a10240  lwc1        $f1, 0x240($sp)
    ctx->pc = 0x2617e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2617e8: 0xc7a00240  lwc1        $f0, 0x240($sp)
    ctx->pc = 0x2617e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2617ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2617ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2617f0: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x2617f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2617f4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2617f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2617f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2617f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2617fc: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x2617fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261800: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x261800u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x261804: 0xc7a00240  lwc1        $f0, 0x240($sp)
    ctx->pc = 0x261804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261808: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x261808u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26180c: 0x46001303  div.s       $f12, $f2, $f0
    ctx->pc = 0x26180cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x261810: 0x0  nop
    ctx->pc = 0x261810u;
    // NOP
    // 0x261814: 0x0  nop
    ctx->pc = 0x261814u;
    // NOP
    // 0x261818: 0x0  nop
    ctx->pc = 0x261818u;
    // NOP
    // 0x26181c: 0xc045566  jal         func_115598
    ctx->pc = 0x26181Cu;
    SET_GPR_U32(ctx, 31, 0x261824u);
    ctx->pc = 0x115598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115598u, 0x26181Cu, 0x261824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261824u;
label_261824:
    // 0x261824: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x261824u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x261828: 0xe7a00230  swc1        $f0, 0x230($sp)
    ctx->pc = 0x261828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x26182c: 0xc7a10240  lwc1        $f1, 0x240($sp)
    ctx->pc = 0x26182cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261830: 0xc7a00240  lwc1        $f0, 0x240($sp)
    ctx->pc = 0x261830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261834: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x261834u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x261838: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x261838u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x26183c: 0xc7a10238  lwc1        $f1, 0x238($sp)
    ctx->pc = 0x26183cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261840: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x261840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261844: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x261844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x261848: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x261848u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x26184c: 0xc7a1023c  lwc1        $f1, 0x23C($sp)
    ctx->pc = 0x26184cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261850: 0xc7a0023c  lwc1        $f0, 0x23C($sp)
    ctx->pc = 0x261850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261854: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x261854u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x261858: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x261858u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x26185c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x26185cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x261860: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x261860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261864: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x261864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261868: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x261868u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26186c: 0xc7a0023c  lwc1        $f0, 0x23C($sp)
    ctx->pc = 0x26186cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261870: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x261870u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x261874: 0x46001303  div.s       $f12, $f2, $f0
    ctx->pc = 0x261874u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x261878: 0x0  nop
    ctx->pc = 0x261878u;
    // NOP
    // 0x26187c: 0x0  nop
    ctx->pc = 0x26187cu;
    // NOP
    // 0x261880: 0x0  nop
    ctx->pc = 0x261880u;
    // NOP
    // 0x261884: 0xc045566  jal         func_115598
    ctx->pc = 0x261884u;
    SET_GPR_U32(ctx, 31, 0x26188Cu);
    ctx->pc = 0x115598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115598u, 0x261884u, 0x26188Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26188Cu;
label_26188c:
    // 0x26188c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x26188cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x261890: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x261890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x261894: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x261894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261898: 0x0  nop
    ctx->pc = 0x261898u;
    // NOP
    // 0x26189c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26189cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2618a0: 0xe7a00234  swc1        $f0, 0x234($sp)
    ctx->pc = 0x2618a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
    // 0x2618a4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2618A4u;
    {
        const bool branch_taken_0x2618a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2618a4) {
            ctx->pc = 0x261918u;
            return;
        }
    }
    ctx->pc = 0x2618ACu;
}
