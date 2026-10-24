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

// Function: Bg_layer_move
// Address: 0x201fc0 - 0x2025ac
void Bg_layer_move_0x201fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Bg_layer_move_0x201fc0");
#endif

    switch (ctx->pc) {
        case 0x2020c4u: goto label_2020c4;
        case 0x2020e8u: goto label_2020e8;
        case 0x2020fcu: goto label_2020fc;
        case 0x20210cu: goto label_20210c;
        case 0x202164u: goto label_202164;
        case 0x202174u: goto label_202174;
        case 0x202180u: goto label_202180;
        case 0x20223cu: goto label_20223c;
        case 0x202260u: goto label_202260;
        case 0x2022b8u: goto label_2022b8;
        case 0x2022c8u: goto label_2022c8;
        case 0x2022d4u: goto label_2022d4;
        case 0x2022f4u: goto label_2022f4;
        case 0x20231cu: goto label_20231c;
        case 0x202340u: goto label_202340;
        case 0x202350u: goto label_202350;
        case 0x20235cu: goto label_20235c;
        default: break;
    }

    ctx->pc = 0x201fc0u;

    // 0x201fc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x201fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x201fc4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x201fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x201fc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x201fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x201fcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x201fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x201fd0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x201fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x201fd4: 0xe7ac0040  swc1        $f12, 0x40($sp)
    ctx->pc = 0x201fd4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x201fd8: 0xe7ad0048  swc1        $f13, 0x48($sp)
    ctx->pc = 0x201fd8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x201fdc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x201fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x201fe0: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x201fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x201fe4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x201fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x201fe8: 0x9042485c  lbu         $v0, 0x485C($v0)
    ctx->pc = 0x201fe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18524)));
    // 0x201fec: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x201FECu;
    {
        const bool branch_taken_0x201fec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x201fec) {
            ctx->pc = 0x202008u;
            goto label_202008;
        }
    }
    ctx->pc = 0x201FF4u;
    // 0x201ff4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x201ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201ff8: 0x0  nop
    ctx->pc = 0x201ff8u;
    // NOP
    // 0x201ffc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x201ffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x202000: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x202000u;
    {
        const bool branch_taken_0x202000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202000) {
            ctx->pc = 0x202024u;
            goto label_202024;
        }
    }
    ctx->pc = 0x202008u;
label_202008:
    // 0x202008: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x202008u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x20200c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20200cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x202010: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x202010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x202014: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x202014u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202018: 0x0  nop
    ctx->pc = 0x202018u;
    // NOP
    // 0x20201c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20201cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x202020: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x202020u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_202024:
    // 0x202024: 0x8e020a70  lw          $v0, 0xA70($s0)
    ctx->pc = 0x202024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2672)));
    // 0x202028: 0xc44001b0  lwc1        $f0, 0x1B0($v0)
    ctx->pc = 0x202028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20202c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20202cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x202030: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x202030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x202034: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x202034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202038: 0x0  nop
    ctx->pc = 0x202038u;
    // NOP
    // 0x20203c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x20203cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x202040: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x202040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202044: 0xe440484c  swc1        $f0, 0x484C($v0)
    ctx->pc = 0x202044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 18508), bits); }
    // 0x202048: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x202048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20204c: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x20204cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x202050: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x202050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x202054: 0xc460484c  lwc1        $f0, 0x484C($v1)
    ctx->pc = 0x202054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 18508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202058: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x202058u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20205c: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x20205cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x202060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x202060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202064: 0x0  nop
    ctx->pc = 0x202064u;
    // NOP
    // 0x202068: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x202068u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x20206c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20206cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202070: 0xe4404850  swc1        $f0, 0x4850($v0)
    ctx->pc = 0x202070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 18512), bits); }
    // 0x202074: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x202074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202078: 0x9042485c  lbu         $v0, 0x485C($v0)
    ctx->pc = 0x202078u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18524)));
    // 0x20207c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20207Cu;
    {
        const bool branch_taken_0x20207c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20207c) {
            ctx->pc = 0x202098u;
            goto label_202098;
        }
    }
    ctx->pc = 0x202084u;
    // 0x202084: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x202084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202088: 0x0  nop
    ctx->pc = 0x202088u;
    // NOP
    // 0x20208c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20208cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x202090: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x202090u;
    {
        const bool branch_taken_0x202090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202090) {
            ctx->pc = 0x2020B4u;
            goto label_2020b4;
        }
    }
    ctx->pc = 0x202098u;
label_202098:
    // 0x202098: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x202098u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x20209c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20209cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2020a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2020a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2020a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2020a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2020a8: 0x0  nop
    ctx->pc = 0x2020a8u;
    // NOP
    // 0x2020ac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2020acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2020b0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2020b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2020b4:
    // 0x2020b4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2020b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2020b8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2020b8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2020bc: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x2020BCu;
    SET_GPR_U32(ctx, 31, 0x2020C4u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2020BCu, 0x2020C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2020C4u;
label_2020c4:
    // 0x2020c4: 0x3c034019  lui         $v1, 0x4019
    ctx->pc = 0x2020c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16409 << 16));
    // 0x2020c8: 0x346321fb  ori         $v1, $v1, 0x21FB
    ctx->pc = 0x2020c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8699);
    // 0x2020cc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2020ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2020d0: 0x3c035444  lui         $v1, 0x5444
    ctx->pc = 0x2020d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21572 << 16));
    // 0x2020d4: 0x34632d18  ori         $v1, $v1, 0x2D18
    ctx->pc = 0x2020d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11544);
    // 0x2020d8: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x2020d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2020dc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2020dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2020e0: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x2020E0u;
    SET_GPR_U32(ctx, 31, 0x2020E8u);
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x2020E0u, 0x2020E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2020E8u;
label_2020e8:
    // 0x2020e8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2020e8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2020ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2020ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2020f0: 0x8c44483c  lw          $a0, 0x483C($v0)
    ctx->pc = 0x2020f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18492)));
    // 0x2020f4: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x2020F4u;
    SET_GPR_U32(ctx, 31, 0x2020FCu);
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x2020F4u, 0x2020FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2020FCu;
label_2020fc:
    // 0x2020fc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2020fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x202100: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x202100u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x202104: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x202104u;
    SET_GPR_U32(ctx, 31, 0x20210Cu);
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x202104u, 0x20210Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20210Cu;
label_20210c:
    // 0x20210c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x20210cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x202110: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x202110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202114: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x202114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202118: 0x8c424844  lw          $v0, 0x4844($v0)
    ctx->pc = 0x202118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18500)));
    // 0x20211c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20211Cu;
    {
        const bool branch_taken_0x20211c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20211c) {
            ctx->pc = 0x202138u;
            goto label_202138;
        }
    }
    ctx->pc = 0x202124u;
    // 0x202124: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x202124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202128: 0x0  nop
    ctx->pc = 0x202128u;
    // NOP
    // 0x20212c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20212cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x202130: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x202130u;
    {
        const bool branch_taken_0x202130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202130) {
            ctx->pc = 0x202154u;
            goto label_202154;
        }
    }
    ctx->pc = 0x202138u;
label_202138:
    // 0x202138: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x202138u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x20213c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20213cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x202140: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x202140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x202144: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x202144u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202148: 0x0  nop
    ctx->pc = 0x202148u;
    // NOP
    // 0x20214c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20214cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x202150: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x202150u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_202154:
    // 0x202154: 0xc4c04830  lwc1        $f0, 0x4830($a2)
    ctx->pc = 0x202154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 18480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202158: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x202158u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20215c: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x20215Cu;
    SET_GPR_U32(ctx, 31, 0x202164u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x20215Cu, 0x202164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202164u;
label_202164:
    // 0x202164: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x202164u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x202168: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x202168u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20216c: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x20216Cu;
    SET_GPR_U32(ctx, 31, 0x202174u);
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x20216Cu, 0x202174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202174u;
label_202174:
    // 0x202174: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x202174u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x202178: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x202178u;
    SET_GPR_U32(ctx, 31, 0x202180u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x202178u, 0x202180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202180u;
label_202180:
    // 0x202180: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x202180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202184: 0xe4404854  swc1        $f0, 0x4854($v0)
    ctx->pc = 0x202184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 18516), bits); }
    // 0x202188: 0x8e020a70  lw          $v0, 0xA70($s0)
    ctx->pc = 0x202188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2672)));
    // 0x20218c: 0xc4400194  lwc1        $f0, 0x194($v0)
    ctx->pc = 0x20218cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202190: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x202190u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x202194: 0x3c024843  lui         $v0, 0x4843
    ctx->pc = 0x202194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18499 << 16));
    // 0x202198: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x202198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x20219c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20219cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2021a0: 0x0  nop
    ctx->pc = 0x2021a0u;
    // NOP
    // 0x2021a4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2021a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2021a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2021a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2021ac: 0xe4404858  swc1        $f0, 0x4858($v0)
    ctx->pc = 0x2021acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 18520), bits); }
    // 0x2021b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2021b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2021b4: 0x8c424840  lw          $v0, 0x4840($v0)
    ctx->pc = 0x2021b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18496)));
    // 0x2021b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2021b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2021bc: 0x0  nop
    ctx->pc = 0x2021bcu;
    // NOP
    // 0x2021c0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2021c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2021c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2021c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2021c8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2021c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2021cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2021ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2021d0: 0xc4604850  lwc1        $f0, 0x4850($v1)
    ctx->pc = 0x2021d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 18512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2021d4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2021d4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2021d8: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x2021d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2021dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2021dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2021e0: 0xc4404858  lwc1        $f0, 0x4858($v0)
    ctx->pc = 0x2021e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 18520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2021e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2021e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2021e8: 0xe4404858  swc1        $f0, 0x4858($v0)
    ctx->pc = 0x2021e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 18520), bits); }
    // 0x2021ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2021ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2021f0: 0x9042485c  lbu         $v0, 0x485C($v0)
    ctx->pc = 0x2021f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18524)));
    // 0x2021f4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2021F4u;
    {
        const bool branch_taken_0x2021f4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2021f4) {
            ctx->pc = 0x202210u;
            goto label_202210;
        }
    }
    ctx->pc = 0x2021FCu;
    // 0x2021fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2021fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202200: 0x0  nop
    ctx->pc = 0x202200u;
    // NOP
    // 0x202204: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x202204u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x202208: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x202208u;
    {
        const bool branch_taken_0x202208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202208) {
            ctx->pc = 0x20222Cu;
            goto label_20222c;
        }
    }
    ctx->pc = 0x202210u;
label_202210:
    // 0x202210: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x202210u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x202214: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x202214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x202218: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x202218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x20221c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20221cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202220: 0x0  nop
    ctx->pc = 0x202220u;
    // NOP
    // 0x202224: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x202224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x202228: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x202228u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_20222c:
    // 0x20222c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x20222cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202230: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x202230u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x202234: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x202234u;
    SET_GPR_U32(ctx, 31, 0x20223Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x202234u, 0x20223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20223Cu;
label_20223c:
    // 0x20223c: 0x3c034019  lui         $v1, 0x4019
    ctx->pc = 0x20223cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16409 << 16));
    // 0x202240: 0x346321fb  ori         $v1, $v1, 0x21FB
    ctx->pc = 0x202240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8699);
    // 0x202244: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x202244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202248: 0x3c035444  lui         $v1, 0x5444
    ctx->pc = 0x202248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21572 << 16));
    // 0x20224c: 0x34632d18  ori         $v1, $v1, 0x2D18
    ctx->pc = 0x20224cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11544);
    // 0x202250: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x202250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x202254: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x202254u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x202258: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x202258u;
    SET_GPR_U32(ctx, 31, 0x202260u);
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x202258u, 0x202260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202260u;
label_202260:
    // 0x202260: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x202260u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x202264: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x202264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202268: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x202268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20226c: 0x8c424848  lw          $v0, 0x4848($v0)
    ctx->pc = 0x20226cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18504)));
    // 0x202270: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x202270u;
    {
        const bool branch_taken_0x202270 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x202270) {
            ctx->pc = 0x20228Cu;
            goto label_20228c;
        }
    }
    ctx->pc = 0x202278u;
    // 0x202278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x202278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20227c: 0x0  nop
    ctx->pc = 0x20227cu;
    // NOP
    // 0x202280: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x202280u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x202284: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x202284u;
    {
        const bool branch_taken_0x202284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202284) {
            ctx->pc = 0x2022A8u;
            goto label_2022a8;
        }
    }
    ctx->pc = 0x20228Cu;
label_20228c:
    // 0x20228c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x20228cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x202290: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x202290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x202294: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x202294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x202298: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x202298u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20229c: 0x0  nop
    ctx->pc = 0x20229cu;
    // NOP
    // 0x2022a0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2022a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2022a4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2022a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2022a8:
    // 0x2022a8: 0xc4c0482c  lwc1        $f0, 0x482C($a2)
    ctx->pc = 0x2022a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 18476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2022ac: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x2022acu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2022b0: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x2022B0u;
    SET_GPR_U32(ctx, 31, 0x2022B8u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2022B0u, 0x2022B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2022B8u;
label_2022b8:
    // 0x2022b8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2022b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2022bc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2022bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2022c0: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x2022C0u;
    SET_GPR_U32(ctx, 31, 0x2022C8u);
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x2022C0u, 0x2022C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2022C8u;
label_2022c8:
    // 0x2022c8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2022c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2022cc: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x2022CCu;
    SET_GPR_U32(ctx, 31, 0x2022D4u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x2022CCu, 0x2022D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2022D4u;
label_2022d4:
    // 0x2022d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2022d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2022d8: 0xc4414858  lwc1        $f1, 0x4858($v0)
    ctx->pc = 0x2022d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 18520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2022dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2022dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2022e0: 0xe4404858  swc1        $f0, 0x4858($v0)
    ctx->pc = 0x2022e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 18520), bits); }
    // 0x2022e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2022e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2022e8: 0x8c444834  lw          $a0, 0x4834($v0)
    ctx->pc = 0x2022e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18484)));
    // 0x2022ec: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x2022ECu;
    SET_GPR_U32(ctx, 31, 0x2022F4u);
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x2022ECu, 0x2022F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2022F4u;
label_2022f4:
    // 0x2022f4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2022f4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2022f8: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x2022f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x2022fc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2022fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x202300: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x202300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x202304: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x202304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x202308: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x202308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20230c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20230cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x202310: 0x46001302  mul.s       $f12, $f2, $f0
    ctx->pc = 0x202310u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x202314: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x202314u;
    SET_GPR_U32(ctx, 31, 0x20231Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x202314u, 0x20231Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20231Cu;
label_20231c:
    // 0x20231c: 0x3c034009  lui         $v1, 0x4009
    ctx->pc = 0x20231cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16393 << 16));
    // 0x202320: 0x346321fb  ori         $v1, $v1, 0x21FB
    ctx->pc = 0x202320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8699);
    // 0x202324: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x202324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202328: 0x3c035444  lui         $v1, 0x5444
    ctx->pc = 0x202328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21572 << 16));
    // 0x20232c: 0x34632d18  ori         $v1, $v1, 0x2D18
    ctx->pc = 0x20232cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11544);
    // 0x202330: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x202330u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x202334: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x202334u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x202338: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x202338u;
    SET_GPR_U32(ctx, 31, 0x202340u);
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x202338u, 0x202340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202340u;
label_202340:
    // 0x202340: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x202340u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x202344: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x202344u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x202348: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x202348u;
    SET_GPR_U32(ctx, 31, 0x202350u);
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x202348u, 0x202350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202350u;
label_202350:
    // 0x202350: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x202350u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x202354: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x202354u;
    SET_GPR_U32(ctx, 31, 0x20235Cu);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x202354u, 0x20235Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20235Cu;
label_20235c:
    // 0x20235c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20235cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202360: 0xac624838  sw          $v0, 0x4838($v1)
    ctx->pc = 0x202360u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18488), GPR_U32(ctx, 2));
    // 0x202364: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x202364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202368: 0x8c834844  lw          $v1, 0x4844($a0)
    ctx->pc = 0x202368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18500)));
    // 0x20236c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20236cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x202370: 0xac834844  sw          $v1, 0x4844($a0)
    ctx->pc = 0x202370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 18500), GPR_U32(ctx, 3));
    // 0x202374: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x202374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202378: 0xc4614830  lwc1        $f1, 0x4830($v1)
    ctx->pc = 0x202378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 18480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20237c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20237cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202380: 0x0  nop
    ctx->pc = 0x202380u;
    // NOP
    // 0x202384: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x202384u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x202388: 0x0  nop
    ctx->pc = 0x202388u;
    // NOP
    // 0x20238c: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x20238Cu;
    {
        const bool branch_taken_0x20238c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20238c) {
            ctx->pc = 0x20240Cu;
            goto label_20240c;
        }
    }
    ctx->pc = 0x202394u;
    // 0x202394: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x202394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202398: 0x8c634844  lw          $v1, 0x4844($v1)
    ctx->pc = 0x202398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18500)));
    // 0x20239c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20239Cu;
    {
        const bool branch_taken_0x20239c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x20239c) {
            ctx->pc = 0x2023B8u;
            goto label_2023b8;
        }
    }
    ctx->pc = 0x2023A4u;
    // 0x2023a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2023a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2023a8: 0x0  nop
    ctx->pc = 0x2023a8u;
    // NOP
    // 0x2023ac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2023acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2023b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2023B0u;
    {
        const bool branch_taken_0x2023b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2023b0) {
            ctx->pc = 0x2023D4u;
            goto label_2023d4;
        }
    }
    ctx->pc = 0x2023B8u;
label_2023b8:
    // 0x2023b8: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x2023b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2023bc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2023bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2023c0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2023c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2023c4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2023c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2023c8: 0x0  nop
    ctx->pc = 0x2023c8u;
    // NOP
    // 0x2023cc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2023ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2023d0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2023d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2023d4:
    // 0x2023d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2023d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2023d8: 0xc4604830  lwc1        $f0, 0x4830($v1)
    ctx->pc = 0x2023d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 18480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2023dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2023dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2023e0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2023e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2023e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2023e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2023e8: 0x0  nop
    ctx->pc = 0x2023e8u;
    // NOP
    // 0x2023ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2023ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2023f0: 0x0  nop
    ctx->pc = 0x2023f0u;
    // NOP
    // 0x2023f4: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x2023F4u;
    {
        const bool branch_taken_0x2023f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2023f4) {
            ctx->pc = 0x20247Cu;
            goto label_20247c;
        }
    }
    ctx->pc = 0x2023FCu;
    // 0x2023fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2023fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202400: 0xac604844  sw          $zero, 0x4844($v1)
    ctx->pc = 0x202400u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18500), GPR_U32(ctx, 0));
    // 0x202404: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x202404u;
    {
        const bool branch_taken_0x202404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202404) {
            ctx->pc = 0x20247Cu;
            goto label_20247c;
        }
    }
    ctx->pc = 0x20240Cu;
label_20240c:
    // 0x20240c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20240cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202410: 0x8c634844  lw          $v1, 0x4844($v1)
    ctx->pc = 0x202410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18500)));
    // 0x202414: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x202414u;
    {
        const bool branch_taken_0x202414 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x202414) {
            ctx->pc = 0x202430u;
            goto label_202430;
        }
    }
    ctx->pc = 0x20241Cu;
    // 0x20241c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20241cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202420: 0x0  nop
    ctx->pc = 0x202420u;
    // NOP
    // 0x202424: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x202424u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x202428: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x202428u;
    {
        const bool branch_taken_0x202428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202428) {
            ctx->pc = 0x20244Cu;
            goto label_20244c;
        }
    }
    ctx->pc = 0x202430u;
label_202430:
    // 0x202430: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x202430u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x202434: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x202434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x202438: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x202438u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x20243c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20243cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202440: 0x0  nop
    ctx->pc = 0x202440u;
    // NOP
    // 0x202444: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x202444u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x202448: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x202448u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_20244c:
    // 0x20244c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20244cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202450: 0xc4604830  lwc1        $f0, 0x4830($v1)
    ctx->pc = 0x202450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 18480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202454: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x202454u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x202458: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x202458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x20245c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20245cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202460: 0x0  nop
    ctx->pc = 0x202460u;
    // NOP
    // 0x202464: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x202464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x202468: 0x0  nop
    ctx->pc = 0x202468u;
    // NOP
    // 0x20246c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x20246Cu;
    {
        const bool branch_taken_0x20246c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20246c) {
            ctx->pc = 0x20247Cu;
            goto label_20247c;
        }
    }
    ctx->pc = 0x202474u;
    // 0x202474: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x202474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202478: 0xac604844  sw          $zero, 0x4844($v1)
    ctx->pc = 0x202478u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18500), GPR_U32(ctx, 0));
label_20247c:
    // 0x20247c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20247cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202480: 0x8c834848  lw          $v1, 0x4848($a0)
    ctx->pc = 0x202480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18504)));
    // 0x202484: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x202484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x202488: 0xac834848  sw          $v1, 0x4848($a0)
    ctx->pc = 0x202488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 18504), GPR_U32(ctx, 3));
    // 0x20248c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20248cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202490: 0xc461482c  lwc1        $f1, 0x482C($v1)
    ctx->pc = 0x202490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 18476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x202494: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x202494u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202498: 0x0  nop
    ctx->pc = 0x202498u;
    // NOP
    // 0x20249c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20249cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2024a0: 0x0  nop
    ctx->pc = 0x2024a0u;
    // NOP
    // 0x2024a4: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x2024A4u;
    {
        const bool branch_taken_0x2024a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2024a4) {
            ctx->pc = 0x202524u;
            goto label_202524;
        }
    }
    ctx->pc = 0x2024ACu;
    // 0x2024ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2024acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2024b0: 0x8c634848  lw          $v1, 0x4848($v1)
    ctx->pc = 0x2024b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18504)));
    // 0x2024b4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2024B4u;
    {
        const bool branch_taken_0x2024b4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2024b4) {
            ctx->pc = 0x2024D0u;
            goto label_2024d0;
        }
    }
    ctx->pc = 0x2024BCu;
    // 0x2024bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2024bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2024c0: 0x0  nop
    ctx->pc = 0x2024c0u;
    // NOP
    // 0x2024c4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2024c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2024c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2024C8u;
    {
        const bool branch_taken_0x2024c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2024c8) {
            ctx->pc = 0x2024ECu;
            goto label_2024ec;
        }
    }
    ctx->pc = 0x2024D0u;
label_2024d0:
    // 0x2024d0: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x2024d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2024d4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2024d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2024d8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2024d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2024dc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2024dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2024e0: 0x0  nop
    ctx->pc = 0x2024e0u;
    // NOP
    // 0x2024e4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2024e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2024e8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2024e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2024ec:
    // 0x2024ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2024ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2024f0: 0xc460482c  lwc1        $f0, 0x482C($v1)
    ctx->pc = 0x2024f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 18476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2024f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2024f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2024f8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2024f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2024fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2024fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202500: 0x0  nop
    ctx->pc = 0x202500u;
    // NOP
    // 0x202504: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x202504u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x202508: 0x0  nop
    ctx->pc = 0x202508u;
    // NOP
    // 0x20250c: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x20250Cu;
    {
        const bool branch_taken_0x20250c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20250c) {
            ctx->pc = 0x202594u;
            goto label_202594;
        }
    }
    ctx->pc = 0x202514u;
    // 0x202514: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x202514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202518: 0xac604848  sw          $zero, 0x4848($v1)
    ctx->pc = 0x202518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18504), GPR_U32(ctx, 0));
    // 0x20251c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x20251Cu;
    {
        const bool branch_taken_0x20251c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20251c) {
            ctx->pc = 0x202594u;
            goto label_202594;
        }
    }
    ctx->pc = 0x202524u;
label_202524:
    // 0x202524: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x202524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202528: 0x8c634848  lw          $v1, 0x4848($v1)
    ctx->pc = 0x202528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18504)));
    // 0x20252c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20252Cu;
    {
        const bool branch_taken_0x20252c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x20252c) {
            ctx->pc = 0x202548u;
            goto label_202548;
        }
    }
    ctx->pc = 0x202534u;
    // 0x202534: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x202534u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202538: 0x0  nop
    ctx->pc = 0x202538u;
    // NOP
    // 0x20253c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20253cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x202540: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x202540u;
    {
        const bool branch_taken_0x202540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202540) {
            ctx->pc = 0x202564u;
            goto label_202564;
        }
    }
    ctx->pc = 0x202548u;
label_202548:
    // 0x202548: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x202548u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x20254c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x20254cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x202550: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x202550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x202554: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x202554u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202558: 0x0  nop
    ctx->pc = 0x202558u;
    // NOP
    // 0x20255c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20255cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x202560: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x202560u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_202564:
    // 0x202564: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x202564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202568: 0xc460482c  lwc1        $f0, 0x482C($v1)
    ctx->pc = 0x202568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 18476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20256c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20256cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x202570: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x202570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x202574: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x202574u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202578: 0x0  nop
    ctx->pc = 0x202578u;
    // NOP
    // 0x20257c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20257cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x202580: 0x0  nop
    ctx->pc = 0x202580u;
    // NOP
    // 0x202584: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x202584u;
    {
        const bool branch_taken_0x202584 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x202584) {
            ctx->pc = 0x202594u;
            goto label_202594;
        }
    }
    ctx->pc = 0x20258Cu;
    // 0x20258c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20258cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202590: 0xac604848  sw          $zero, 0x4848($v1)
    ctx->pc = 0x202590u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18504), GPR_U32(ctx, 0));
label_202594:
    // 0x202594: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x202594u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202598: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x202598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20259c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20259cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2025a0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2025a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2025a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2025A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2025A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2025ACu;
}
