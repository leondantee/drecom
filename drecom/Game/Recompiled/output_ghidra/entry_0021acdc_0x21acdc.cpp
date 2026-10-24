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

// Function: entry_0021acdc
// Address: 0x21acdc - 0x21af10
void entry_0021acdc_0x21acdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021acdc_0x21acdc");
#endif

    switch (ctx->pc) {
        case 0x21ad10u: goto label_21ad10;
        case 0x21ad1cu: goto label_21ad1c;
        case 0x21ad7cu: goto label_21ad7c;
        case 0x21ada0u: goto label_21ada0;
        case 0x21adc4u: goto label_21adc4;
        case 0x21ade8u: goto label_21ade8;
        case 0x21ae4cu: goto label_21ae4c;
        case 0x21ae7cu: goto label_21ae7c;
        default: break;
    }

    ctx->pc = 0x21acdcu;

    // 0x21acdc: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x21acdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21ace0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x21ace0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x21ace4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x21ace4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x21ace8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x21ace8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x21acec: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x21acecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21acf0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x21acf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x21acf4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x21acf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x21acf8: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x21acf8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x21acfc: 0x24041409  addiu       $a0, $zero, 0x1409
    ctx->pc = 0x21acfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5129));
    // 0x21ad00: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21ad00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21ad04: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x21ad04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x21ad08: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21AD08u;
    SET_GPR_U32(ctx, 31, 0x21AD10u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21AD08u, 0x21AD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AD10u;
label_21ad10:
    // 0x21ad10: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21ad10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21ad14: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21AD14u;
    SET_GPR_U32(ctx, 31, 0x21AD1Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21AD14u, 0x21AD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AD1Cu;
label_21ad1c:
    // 0x21ad1c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x21ad1cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21ad20: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21ad20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21ad24: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x21ad24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21ad28: 0x12040079  beq         $s0, $a0, . + 4 + (0x79 << 2)
    ctx->pc = 0x21AD28u;
    {
        const bool branch_taken_0x21ad28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x21ad28) {
            ctx->pc = 0x21AF10u;
            return;
        }
    }
    ctx->pc = 0x21AD30u;
    // 0x21ad30: 0x3c0242f9  lui         $v0, 0x42F9
    ctx->pc = 0x21ad30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17145 << 16));
    // 0x21ad34: 0x3444cccd  ori         $a0, $v0, 0xCCCD
    ctx->pc = 0x21ad34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x21ad38: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x21ad38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ad3c: 0x0  nop
    ctx->pc = 0x21ad3cu;
    // NOP
    // 0x21ad40: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21ad40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21ad44: 0x3c0342f9  lui         $v1, 0x42F9
    ctx->pc = 0x21ad44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17145 << 16));
    // 0x21ad48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21ad48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ad4c: 0x0  nop
    ctx->pc = 0x21ad4cu;
    // NOP
    // 0x21ad50: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21ad50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21ad54: 0x3c0242f8  lui         $v0, 0x42F8
    ctx->pc = 0x21ad54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17144 << 16));
    // 0x21ad58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21ad58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ad5c: 0x0  nop
    ctx->pc = 0x21ad5cu;
    // NOP
    // 0x21ad60: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21ad60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21ad64: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x21ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x21ad68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21ad68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ad6c: 0x0  nop
    ctx->pc = 0x21ad6cu;
    // NOP
    // 0x21ad70: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21ad70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21ad74: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21AD74u;
    SET_GPR_U32(ctx, 31, 0x21AD7Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21AD74u, 0x21AD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AD7Cu;
label_21ad7c:
    // 0x21ad7c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x21ad7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x21ad80: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x21ad80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21ad84: 0x0  nop
    ctx->pc = 0x21ad84u;
    // NOP
    // 0x21ad88: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x21ad88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x21ad8c: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x21ad8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ad90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21ad90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21ad94: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21ad94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21ad98: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21AD98u;
    SET_GPR_U32(ctx, 31, 0x21ADA0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21AD98u, 0x21ADA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ADA0u;
label_21ada0:
    // 0x21ada0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21ada4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x21ada4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21ada8: 0x0  nop
    ctx->pc = 0x21ada8u;
    // NOP
    // 0x21adac: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x21adacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x21adb0: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x21adb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21adb4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21adb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21adb8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21adb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21adbc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21ADBCu;
    SET_GPR_U32(ctx, 31, 0x21ADC4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21ADBCu, 0x21ADC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ADC4u;
label_21adc4:
    // 0x21adc4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21adc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21adc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21adcc: 0x0  nop
    ctx->pc = 0x21adccu;
    // NOP
    // 0x21add0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21add0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21add4: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x21add4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21add8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21add8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21addc: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21addcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21ade0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21ADE0u;
    SET_GPR_U32(ctx, 31, 0x21ADE8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21ADE0u, 0x21ADE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ADE8u;
label_21ade8:
    // 0x21ade8: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x21ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x21adec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x21adecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21adf0: 0x0  nop
    ctx->pc = 0x21adf0u;
    // NOP
    // 0x21adf4: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x21adf4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x21adf8: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x21adf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21adfc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21adfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21ae00: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21ae00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21ae04: 0x3c043f79  lui         $a0, 0x3F79
    ctx->pc = 0x21ae04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16249 << 16));
    // 0x21ae08: 0x3487999a  ori         $a3, $a0, 0x999A
    ctx->pc = 0x21ae08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
    // 0x21ae0c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x21ae0cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ae10: 0x0  nop
    ctx->pc = 0x21ae10u;
    // NOP
    // 0x21ae14: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x21ae14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x21ae18: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x21ae18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x21ae1c: 0x3446999a  ori         $a2, $v0, 0x999A
    ctx->pc = 0x21ae1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x21ae20: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x21ae20u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ae24: 0x0  nop
    ctx->pc = 0x21ae24u;
    // NOP
    // 0x21ae28: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x21ae28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x21ae2c: 0x3c033f77  lui         $v1, 0x3F77
    ctx->pc = 0x21ae2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16247 << 16));
    // 0x21ae30: 0x34620a3d  ori         $v0, $v1, 0xA3D
    ctx->pc = 0x21ae30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2621);
    // 0x21ae34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21ae34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ae38: 0x0  nop
    ctx->pc = 0x21ae38u;
    // NOP
    // 0x21ae3c: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x21ae3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x21ae40: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x21ae40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21ae44: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x21AE44u;
    SET_GPR_U32(ctx, 31, 0x21AE4Cu);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x21AE44u, 0x21AE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AE4Cu;
label_21ae4c:
    // 0x21ae4c: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x21ae4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x21ae50: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21ae50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21ae54: 0x0  nop
    ctx->pc = 0x21ae54u;
    // NOP
    // 0x21ae58: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21ae58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21ae5c: 0xe6010050  swc1        $f1, 0x50($s0)
    ctx->pc = 0x21ae5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x21ae60: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x21ae60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
    // 0x21ae64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21ae64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ae68: 0x0  nop
    ctx->pc = 0x21ae68u;
    // NOP
    // 0x21ae6c: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x21ae6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x21ae70: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x21ae70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21ae74: 0xc0454c4  jal         func_115310
    ctx->pc = 0x21AE74u;
    SET_GPR_U32(ctx, 31, 0x21AE7Cu);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x21AE74u, 0x21AE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AE7Cu;
label_21ae7c:
    // 0x21ae7c: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x21ae7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x21ae80: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21ae80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21ae84: 0x0  nop
    ctx->pc = 0x21ae84u;
    // NOP
    // 0x21ae88: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21ae88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21ae8c: 0xe6010058  swc1        $f1, 0x58($s0)
    ctx->pc = 0x21ae8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x21ae90: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x21ae90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x21ae94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21ae94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ae98: 0x0  nop
    ctx->pc = 0x21ae98u;
    // NOP
    // 0x21ae9c: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x21ae9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x21aea0: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x21aea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x21aea4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21aea4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21aea8: 0x0  nop
    ctx->pc = 0x21aea8u;
    // NOP
    // 0x21aeac: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x21aeacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x21aeb0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x21aeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x21aeb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21aeb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21aeb8: 0x0  nop
    ctx->pc = 0x21aeb8u;
    // NOP
    // 0x21aebc: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x21aebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x21aec0: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x21aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x21aec4: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x21aec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x21aec8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21aec8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21aecc: 0x0  nop
    ctx->pc = 0x21aeccu;
    // NOP
    // 0x21aed0: 0xe6010070  swc1        $f1, 0x70($s0)
    ctx->pc = 0x21aed0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x21aed4: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x21aed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x21aed8: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x21aed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x21aedc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21aedcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21aee0: 0x0  nop
    ctx->pc = 0x21aee0u;
    // NOP
    // 0x21aee4: 0xe6010078  swc1        $f1, 0x78($s0)
    ctx->pc = 0x21aee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x21aee8: 0x3c03bfc0  lui         $v1, 0xBFC0
    ctx->pc = 0x21aee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49088 << 16));
    // 0x21aeec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21aeecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21aef0: 0x0  nop
    ctx->pc = 0x21aef0u;
    // NOP
    // 0x21aef4: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x21aef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x21aef8: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x21aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x21aefc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21aefcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21af00: 0x0  nop
    ctx->pc = 0x21af00u;
    // NOP
    // 0x21af04: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x21af04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x21af08: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x21af08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x21af0c: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x21af0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    ctx->pc = 0x21af10u;
}
