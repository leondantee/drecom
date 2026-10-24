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

// Function: entry_00262058
// Address: 0x262058 - 0x26230c
void entry_00262058_0x262058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00262058_0x262058");
#endif

    switch (ctx->pc) {
        case 0x2620a0u: goto label_2620a0;
        case 0x2620b4u: goto label_2620b4;
        case 0x2620c8u: goto label_2620c8;
        case 0x2620dcu: goto label_2620dc;
        case 0x2620f4u: goto label_2620f4;
        case 0x262110u: goto label_262110;
        case 0x262128u: goto label_262128;
        case 0x26214cu: goto label_26214c;
        case 0x262160u: goto label_262160;
        case 0x262174u: goto label_262174;
        case 0x262184u: goto label_262184;
        case 0x2621a0u: goto label_2621a0;
        case 0x2621bcu: goto label_2621bc;
        case 0x2621e0u: goto label_2621e0;
        case 0x2621f4u: goto label_2621f4;
        case 0x262200u: goto label_262200;
        case 0x262284u: goto label_262284;
        case 0x2622ecu: goto label_2622ec;
        default: break;
    }

    ctx->pc = 0x262058u;

    // 0x262058: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x262058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x26205c: 0xc44102d8  lwc1        $f1, 0x2D8($v0)
    ctx->pc = 0x26205cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262060: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x262060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262064: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x262064u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x262068: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x262068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
    // 0x26206c: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x26206cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262070: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x262070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x262074: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x262074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x262078: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x262078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x26207c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26207cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x262080: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x262080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x262084: 0xc7a10224  lwc1        $f1, 0x224($sp)
    ctx->pc = 0x262084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262088: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x262088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26208c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26208cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x262090: 0xe7a00224  swc1        $f0, 0x224($sp)
    ctx->pc = 0x262090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
    // 0x262094: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x262094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x262098: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x262098u;
    SET_GPR_U32(ctx, 31, 0x2620A0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x2620A0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2620A0u) { return; }
    ctx->pc = 0x2620A0u;
label_2620a0:
    // 0x2620a0: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2620a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2620a4: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x2620a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2620a8: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x2620a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2620ac: 0xc040d0e  jal         func_103438
    ctx->pc = 0x2620ACu;
    SET_GPR_U32(ctx, 31, 0x2620B4u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x2620B4u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2620B4u) { return; }
    ctx->pc = 0x2620B4u;
label_2620b4:
    // 0x2620b4: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2620b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2620b8: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x2620b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2620bc: 0xc62c0108  lwc1        $f12, 0x108($s1)
    ctx->pc = 0x2620bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2620c0: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x2620C0u;
    SET_GPR_U32(ctx, 31, 0x2620C8u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x2620C8u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2620C8u) { return; }
    ctx->pc = 0x2620C8u;
label_2620c8:
    // 0x2620c8: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2620c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2620cc: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x2620ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2620d0: 0xc62c010c  lwc1        $f12, 0x10C($s1)
    ctx->pc = 0x2620d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2620d4: 0xc040ce4  jal         func_103390
    ctx->pc = 0x2620D4u;
    SET_GPR_U32(ctx, 31, 0x2620DCu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x2620DCu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2620DCu) { return; }
    ctx->pc = 0x2620DCu;
label_2620dc:
    // 0x2620dc: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x2620dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2620e0: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2620e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2620e4: 0x244500e0  addiu       $a1, $v0, 0xE0
    ctx->pc = 0x2620e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x2620e8: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x2620e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2620ec: 0xc040c00  jal         func_103000
    ctx->pc = 0x2620ECu;
    SET_GPR_U32(ctx, 31, 0x2620F4u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x2620F4u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2620F4u) { return; }
    ctx->pc = 0x2620F4u;
label_2620f4:
    // 0x2620f4: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x2620f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2620f8: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x2620f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2620fc: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x2620fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x262100: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x262100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x262104: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x262104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x262108: 0xc040ec4  jal         func_103B10
    ctx->pc = 0x262108u;
    SET_GPR_U32(ctx, 31, 0x262110u);
    ctx->pc = 0x103B10u;
    {
        ctx->pc = 0x262110u;
        ps2_stubs::sceVu0CopyVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262110u) { return; }
    ctx->pc = 0x262110u;
label_262110:
    // 0x262110: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x262110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x262114: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x262114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x262118: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x262118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x26211c: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x26211cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x262120: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x262120u;
    SET_GPR_U32(ctx, 31, 0x262128u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x262128u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262128u) { return; }
    ctx->pc = 0x262128u;
label_262128:
    // 0x262128: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x262128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x26212c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26212cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262130: 0x0  nop
    ctx->pc = 0x262130u;
    // NOP
    // 0x262134: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x262134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
    // 0x262138: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x262138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x26213c: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x26213cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x262140: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x262140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x262144: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x262144u;
    SET_GPR_U32(ctx, 31, 0x26214Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x26214Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26214Cu) { return; }
    ctx->pc = 0x26214Cu;
label_26214c:
    // 0x26214c: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x26214cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x262150: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x262150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x262154: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x262154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x262158: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x262158u;
    SET_GPR_U32(ctx, 31, 0x262160u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x262158u, 0x262160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262160u;
label_262160:
    // 0x262160: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x262160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x262164: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x262164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x262168: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x262168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x26216c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x26216Cu;
    SET_GPR_U32(ctx, 31, 0x262174u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x26216Cu, 0x262174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262174u;
label_262174:
    // 0x262174: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x262174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x262178: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x262178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x26217c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x26217Cu;
    SET_GPR_U32(ctx, 31, 0x262184u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x262184u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262184u) { return; }
    ctx->pc = 0x262184u;
label_262184:
    // 0x262184: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x262184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x262188: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x262188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x26218c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x26218cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x262190: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x262190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x262194: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x262194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x262198: 0xc040ca2  jal         func_103288
    ctx->pc = 0x262198u;
    SET_GPR_U32(ctx, 31, 0x2621A0u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x2621A0u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2621A0u) { return; }
    ctx->pc = 0x2621A0u;
label_2621a0:
    // 0x2621a0: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x2621a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2621a4: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x2621a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2621a8: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x2621a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x2621ac: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2621acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2621b0: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2621b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2621b4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2621B4u;
    SET_GPR_U32(ctx, 31, 0x2621BCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2621BCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2621BCu) { return; }
    ctx->pc = 0x2621BCu;
label_2621bc:
    // 0x2621bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2621bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2621c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2621c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2621c4: 0x0  nop
    ctx->pc = 0x2621c4u;
    // NOP
    // 0x2621c8: 0xe7a001cc  swc1        $f0, 0x1CC($sp)
    ctx->pc = 0x2621c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
    // 0x2621cc: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2621ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2621d0: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x2621d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2621d4: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x2621d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2621d8: 0xc040c80  jal         func_103200
    ctx->pc = 0x2621D8u;
    SET_GPR_U32(ctx, 31, 0x2621E0u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x2621E0u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2621E0u) { return; }
    ctx->pc = 0x2621E0u;
label_2621e0:
    // 0x2621e0: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x2621e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2621e4: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x2621e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2621e8: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x2621e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2621ec: 0xc040c80  jal         func_103200
    ctx->pc = 0x2621ECu;
    SET_GPR_U32(ctx, 31, 0x2621F4u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x2621F4u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2621F4u) { return; }
    ctx->pc = 0x2621F4u;
label_2621f4:
    // 0x2621f4: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2621f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2621f8: 0xc067588  jal         func_19D620
    ctx->pc = 0x2621F8u;
    SET_GPR_U32(ctx, 31, 0x262200u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x2621F8u, 0x262200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262200u;
label_262200:
    // 0x262200: 0xe7a00240  swc1        $f0, 0x240($sp)
    ctx->pc = 0x262200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
    // 0x262204: 0xc7a20240  lwc1        $f2, 0x240($sp)
    ctx->pc = 0x262204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x262208: 0xc7a10238  lwc1        $f1, 0x238($sp)
    ctx->pc = 0x262208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26220c: 0xc7a0023c  lwc1        $f0, 0x23C($sp)
    ctx->pc = 0x26220cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262210: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x262210u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x262214: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x262214u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262218: 0x0  nop
    ctx->pc = 0x262218u;
    // NOP
    // 0x26221c: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x26221Cu;
    {
        const bool branch_taken_0x26221c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26221c) {
            ctx->pc = 0x26230Cu;
            return;
        }
    }
    ctx->pc = 0x262224u;
    // 0x262224: 0xc7a1023c  lwc1        $f1, 0x23C($sp)
    ctx->pc = 0x262224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262228: 0xc7a0023c  lwc1        $f0, 0x23C($sp)
    ctx->pc = 0x262228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26222c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x26222cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x262230: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x262230u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x262234: 0xc7a10238  lwc1        $f1, 0x238($sp)
    ctx->pc = 0x262234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262238: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x262238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26223c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x26223cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x262240: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x262240u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x262244: 0xc7a10240  lwc1        $f1, 0x240($sp)
    ctx->pc = 0x262244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262248: 0xc7a00240  lwc1        $f0, 0x240($sp)
    ctx->pc = 0x262248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26224c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x26224cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x262250: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x262250u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x262254: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x262254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x262258: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x262258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26225c: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x26225cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262260: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x262260u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x262264: 0xc7a00240  lwc1        $f0, 0x240($sp)
    ctx->pc = 0x262264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262268: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x262268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26226c: 0x46001303  div.s       $f12, $f2, $f0
    ctx->pc = 0x26226cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x262270: 0x0  nop
    ctx->pc = 0x262270u;
    // NOP
    // 0x262274: 0x0  nop
    ctx->pc = 0x262274u;
    // NOP
    // 0x262278: 0x0  nop
    ctx->pc = 0x262278u;
    // NOP
    // 0x26227c: 0xc045566  jal         func_115598
    ctx->pc = 0x26227Cu;
    SET_GPR_U32(ctx, 31, 0x262284u);
    ctx->pc = 0x115598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115598u, 0x26227Cu, 0x262284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262284u;
label_262284:
    // 0x262284: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x262284u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x262288: 0xe7a00230  swc1        $f0, 0x230($sp)
    ctx->pc = 0x262288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x26228c: 0xc7a10240  lwc1        $f1, 0x240($sp)
    ctx->pc = 0x26228cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262290: 0xc7a00240  lwc1        $f0, 0x240($sp)
    ctx->pc = 0x262290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262294: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x262294u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x262298: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x262298u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x26229c: 0xc7a10238  lwc1        $f1, 0x238($sp)
    ctx->pc = 0x26229cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2622a0: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x2622a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2622a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2622a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2622a8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2622a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2622ac: 0xc7a1023c  lwc1        $f1, 0x23C($sp)
    ctx->pc = 0x2622acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2622b0: 0xc7a0023c  lwc1        $f0, 0x23C($sp)
    ctx->pc = 0x2622b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2622b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2622b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2622b8: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x2622b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2622bc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2622bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2622c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2622c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2622c4: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x2622c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2622c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2622c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2622cc: 0xc7a0023c  lwc1        $f0, 0x23C($sp)
    ctx->pc = 0x2622ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2622d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2622d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2622d4: 0x46001303  div.s       $f12, $f2, $f0
    ctx->pc = 0x2622d4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2622d8: 0x0  nop
    ctx->pc = 0x2622d8u;
    // NOP
    // 0x2622dc: 0x0  nop
    ctx->pc = 0x2622dcu;
    // NOP
    // 0x2622e0: 0x0  nop
    ctx->pc = 0x2622e0u;
    // NOP
    // 0x2622e4: 0xc045566  jal         func_115598
    ctx->pc = 0x2622E4u;
    SET_GPR_U32(ctx, 31, 0x2622ECu);
    ctx->pc = 0x115598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115598u, 0x2622E4u, 0x2622ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2622ECu;
label_2622ec:
    // 0x2622ec: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2622ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2622f0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2622f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2622f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2622f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2622f8: 0x0  nop
    ctx->pc = 0x2622f8u;
    // NOP
    // 0x2622fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2622fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x262300: 0xe7a00234  swc1        $f0, 0x234($sp)
    ctx->pc = 0x262300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
    // 0x262304: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x262304u;
    {
        const bool branch_taken_0x262304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262304) {
            ctx->pc = 0x262378u;
            return;
        }
    }
    ctx->pc = 0x26230Cu;
}
