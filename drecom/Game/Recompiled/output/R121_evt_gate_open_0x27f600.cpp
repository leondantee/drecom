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

// Function: R121_evt_gate_open
// Address: 0x27f600 - 0x27f934
void R121_evt_gate_open_0x27f600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R121_evt_gate_open_0x27f600");
#endif

    switch (ctx->pc) {
        case 0x27f634u: goto label_27f634;
        case 0x27f640u: goto label_27f640;
        case 0x27f680u: goto label_27f680;
        case 0x27f69cu: goto label_27f69c;
        case 0x27f6d0u: goto label_27f6d0;
        case 0x27f6e4u: goto label_27f6e4;
        case 0x27f6f8u: goto label_27f6f8;
        case 0x27f704u: goto label_27f704;
        case 0x27f748u: goto label_27f748;
        case 0x27f75cu: goto label_27f75c;
        case 0x27f770u: goto label_27f770;
        case 0x27f77cu: goto label_27f77c;
        case 0x27f7bcu: goto label_27f7bc;
        case 0x27f7c8u: goto label_27f7c8;
        case 0x27f7fcu: goto label_27f7fc;
        case 0x27f808u: goto label_27f808;
        case 0x27f83cu: goto label_27f83c;
        case 0x27f848u: goto label_27f848;
        case 0x27f85cu: goto label_27f85c;
        case 0x27f890u: goto label_27f890;
        case 0x27f8c4u: goto label_27f8c4;
        case 0x27f8d8u: goto label_27f8d8;
        case 0x27f8ecu: goto label_27f8ec;
        case 0x27f8f8u: goto label_27f8f8;
        case 0x27f914u: goto label_27f914;
        default: break;
    }

    ctx->pc = 0x27f600u;

    // 0x27f600: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x27f600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x27f604: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x27f604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x27f608: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27f608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27f60c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27f60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27f610: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27f610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27f614: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27f614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27f618: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27f618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27f61c: 0x8c33f9e0  lw          $s3, -0x620($at)
    ctx->pc = 0x27f61cu;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x61F9E0u));
    // 0x27f620: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x27f620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27f624: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27f624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27f628: 0x2445fb90  addiu       $a1, $v0, -0x470
    ctx->pc = 0x27f628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966160));
    // 0x27f62c: 0xc0848cc  jal         func_212330
    ctx->pc = 0x27F62Cu;
    SET_GPR_U32(ctx, 31, 0x27F634u);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x27F62Cu, 0x27F634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F634u;
label_27f634:
    // 0x27f634: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x27f634u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x27f638: 0xc096558  jal         func_259560
    ctx->pc = 0x27F638u;
    SET_GPR_U32(ctx, 31, 0x27F640u);
    ctx->pc = 0x259560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259560u, 0x27F638u, 0x27F640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F640u;
label_27f640:
    // 0x27f640: 0x8e7102d0  lw          $s1, 0x2D0($s3)
    ctx->pc = 0x27f640u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 720)));
    // 0x27f644: 0x8e6202d0  lw          $v0, 0x2D0($s3)
    ctx->pc = 0x27f644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 720)));
    // 0x27f648: 0x24520190  addiu       $s2, $v0, 0x190
    ctx->pc = 0x27f648u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x27f64c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x27f64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x27f650: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27f650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27f654: 0xa4221b78  sh          $v0, 0x1B78($at)
    ctx->pc = 0x27f654u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B78u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x621B78u, _value); } while (0);
    // 0x27f658: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x27f658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x27f65c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x27f65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x27f660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f664: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27f664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27f668: 0xe4201b7c  swc1        $f0, 0x1B7C($at)
    ctx->pc = 0x27f668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x621B7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B7Cu, _value); } while (0); }
    // 0x27f66c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x27f66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27f670: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27f670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27f674: 0x2445f990  addiu       $a1, $v0, -0x670
    ctx->pc = 0x27f674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965648));
    // 0x27f678: 0xc0848cc  jal         func_212330
    ctx->pc = 0x27F678u;
    SET_GPR_U32(ctx, 31, 0x27F680u);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x27F678u, 0x27F680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F680u;
label_27f680:
    // 0x27f680: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x27f680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x27f684: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27f684u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f688: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x27f688u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f68c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27f68cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f690: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x27f690u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f694: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x27F694u;
    SET_GPR_U32(ctx, 31, 0x27F69Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x27F694u, 0x27F69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F69Cu;
label_27f69c:
    // 0x27f69c: 0x3c02bd0e  lui         $v0, 0xBD0E
    ctx->pc = 0x27f69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48398 << 16));
    // 0x27f6a0: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x27f6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x27f6a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f6a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f6a8: 0x0  nop
    ctx->pc = 0x27f6a8u;
    // NOP
    // 0x27f6ac: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x27f6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x27f6b0: 0x3c023d0e  lui         $v0, 0x3D0E
    ctx->pc = 0x27f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15630 << 16));
    // 0x27f6b4: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x27f6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x27f6b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f6b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f6bc: 0x0  nop
    ctx->pc = 0x27f6bcu;
    // NOP
    // 0x27f6c0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x27f6c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x27f6c4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27f6c4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f6c8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27F6C8u;
    {
        const bool branch_taken_0x27f6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f6c8) {
            ctx->pc = 0x27F708u;
            goto label_27f708;
        }
    }
    ctx->pc = 0x27F6D0u;
label_27f6d0:
    // 0x27f6d0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x27f6d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27f6d4: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x27f6d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27f6d8: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x27f6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27f6dc: 0xc067808  jal         func_19E020
    ctx->pc = 0x27F6DCu;
    SET_GPR_U32(ctx, 31, 0x27F6E4u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x27F6DCu, 0x27F6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F6E4u;
label_27f6e4:
    // 0x27f6e4: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x27f6e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x27f6e8: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x27f6e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x27f6ec: 0xc7ac005c  lwc1        $f12, 0x5C($sp)
    ctx->pc = 0x27f6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27f6f0: 0xc067808  jal         func_19E020
    ctx->pc = 0x27F6F0u;
    SET_GPR_U32(ctx, 31, 0x27F6F8u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x27F6F0u, 0x27F6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F6F8u;
label_27f6f8:
    // 0x27f6f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27f6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f6fc: 0xc084964  jal         func_212590
    ctx->pc = 0x27F6FCu;
    SET_GPR_U32(ctx, 31, 0x27F704u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27F6FCu, 0x27F704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F704u;
label_27f704:
    // 0x27f704: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27f704u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_27f708:
    // 0x27f708: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x27f708u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x27f70c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x27F70Cu;
    {
        const bool branch_taken_0x27f70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f70c) {
            ctx->pc = 0x27F6D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f6d0;
        }
    }
    ctx->pc = 0x27F714u;
    // 0x27f714: 0x3c023d0e  lui         $v0, 0x3D0E
    ctx->pc = 0x27f714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15630 << 16));
    // 0x27f718: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x27f718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x27f71c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f71cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f720: 0x0  nop
    ctx->pc = 0x27f720u;
    // NOP
    // 0x27f724: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x27f724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x27f728: 0x3c02bd0e  lui         $v0, 0xBD0E
    ctx->pc = 0x27f728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48398 << 16));
    // 0x27f72c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x27f72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x27f730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f734: 0x0  nop
    ctx->pc = 0x27f734u;
    // NOP
    // 0x27f738: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x27f738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x27f73c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27f73cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f740: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27F740u;
    {
        const bool branch_taken_0x27f740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f740) {
            ctx->pc = 0x27F780u;
            goto label_27f780;
        }
    }
    ctx->pc = 0x27F748u;
label_27f748:
    // 0x27f748: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x27f748u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27f74c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x27f74cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27f750: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x27f750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27f754: 0xc067808  jal         func_19E020
    ctx->pc = 0x27F754u;
    SET_GPR_U32(ctx, 31, 0x27F75Cu);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x27F754u, 0x27F75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F75Cu;
label_27f75c:
    // 0x27f75c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x27f75cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x27f760: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x27f760u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x27f764: 0xc7ac005c  lwc1        $f12, 0x5C($sp)
    ctx->pc = 0x27f764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27f768: 0xc067808  jal         func_19E020
    ctx->pc = 0x27F768u;
    SET_GPR_U32(ctx, 31, 0x27F770u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x27F768u, 0x27F770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F770u;
label_27f770:
    // 0x27f770: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27f770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f774: 0xc084964  jal         func_212590
    ctx->pc = 0x27F774u;
    SET_GPR_U32(ctx, 31, 0x27F77Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27F774u, 0x27F77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F77Cu;
label_27f77c:
    // 0x27f77c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27f77cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_27f780:
    // 0x27f780: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x27f780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x27f784: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x27F784u;
    {
        const bool branch_taken_0x27f784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f784) {
            ctx->pc = 0x27F748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f748;
        }
    }
    ctx->pc = 0x27F78Cu;
    // 0x27f78c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x27f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x27f790: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27f790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27f794: 0xa4221b78  sh          $v0, 0x1B78($at)
    ctx->pc = 0x27f794u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B78u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x621B78u, _value); } while (0);
    // 0x27f798: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x27f798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x27f79c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f79cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f7a0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27f7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27f7a4: 0xe4201b7c  swc1        $f0, 0x1B7C($at)
    ctx->pc = 0x27f7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x621B7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B7Cu, _value); } while (0); }
    // 0x27f7a8: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x27f7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27f7ac: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27f7b0: 0x2445f990  addiu       $a1, $v0, -0x670
    ctx->pc = 0x27f7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965648));
    // 0x27f7b4: 0xc0848cc  jal         func_212330
    ctx->pc = 0x27F7B4u;
    SET_GPR_U32(ctx, 31, 0x27F7BCu);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x27F7B4u, 0x27F7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F7BCu;
label_27f7bc:
    // 0x27f7bc: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x27f7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x27f7c0: 0xc084964  jal         func_212590
    ctx->pc = 0x27F7C0u;
    SET_GPR_U32(ctx, 31, 0x27F7C8u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27F7C0u, 0x27F7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F7C8u;
label_27f7c8:
    // 0x27f7c8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x27f7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x27f7cc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27f7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27f7d0: 0xa4221b78  sh          $v0, 0x1B78($at)
    ctx->pc = 0x27f7d0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B78u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x621B78u, _value); } while (0);
    // 0x27f7d4: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x27f7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x27f7d8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x27f7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x27f7dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f7dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f7e0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27f7e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27f7e4: 0xe4201b7c  swc1        $f0, 0x1B7C($at)
    ctx->pc = 0x27f7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x621B7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B7Cu, _value); } while (0); }
    // 0x27f7e8: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x27f7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27f7ec: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27f7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27f7f0: 0x2445f990  addiu       $a1, $v0, -0x670
    ctx->pc = 0x27f7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965648));
    // 0x27f7f4: 0xc0848cc  jal         func_212330
    ctx->pc = 0x27F7F4u;
    SET_GPR_U32(ctx, 31, 0x27F7FCu);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x27F7F4u, 0x27F7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F7FCu;
label_27f7fc:
    // 0x27f7fc: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x27f7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x27f800: 0xc084964  jal         func_212590
    ctx->pc = 0x27F800u;
    SET_GPR_U32(ctx, 31, 0x27F808u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27F800u, 0x27F808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F808u;
label_27f808:
    // 0x27f808: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x27f808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x27f80c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27f80cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27f810: 0xa4221b78  sh          $v0, 0x1B78($at)
    ctx->pc = 0x27f810u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B78u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x621B78u, _value); } while (0);
    // 0x27f814: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x27f814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x27f818: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x27f818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x27f81c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f81cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f820: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27f820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27f824: 0xe4201b7c  swc1        $f0, 0x1B7C($at)
    ctx->pc = 0x27f824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x621B7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B7Cu, _value); } while (0); }
    // 0x27f828: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x27f828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27f82c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27f82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27f830: 0x2445f990  addiu       $a1, $v0, -0x670
    ctx->pc = 0x27f830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965648));
    // 0x27f834: 0xc0848cc  jal         func_212330
    ctx->pc = 0x27F834u;
    SET_GPR_U32(ctx, 31, 0x27F83Cu);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x27F834u, 0x27F83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F83Cu;
label_27f83c:
    // 0x27f83c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x27f83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x27f840: 0xc084964  jal         func_212590
    ctx->pc = 0x27F840u;
    SET_GPR_U32(ctx, 31, 0x27F848u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27F840u, 0x27F848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F848u;
label_27f848:
    // 0x27f848: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x27f848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27f84c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27f84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27f850: 0x2445f940  addiu       $a1, $v0, -0x6C0
    ctx->pc = 0x27f850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965568));
    // 0x27f854: 0xc0848cc  jal         func_212330
    ctx->pc = 0x27F854u;
    SET_GPR_U32(ctx, 31, 0x27F85Cu);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x27F854u, 0x27F85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F85Cu;
label_27f85c:
    // 0x27f85c: 0x2402010e  addiu       $v0, $zero, 0x10E
    ctx->pc = 0x27f85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
    // 0x27f860: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27f860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27f864: 0xa4221b78  sh          $v0, 0x1B78($at)
    ctx->pc = 0x27f864u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B78u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x621B78u, _value); } while (0);
    // 0x27f868: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x27f868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x27f86c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x27f86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x27f870: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f874: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27f874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27f878: 0xe4201b7c  swc1        $f0, 0x1B7C($at)
    ctx->pc = 0x27f878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x621B7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B7Cu, _value); } while (0); }
    // 0x27f87c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x27f87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27f880: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27f880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27f884: 0x2445fa90  addiu       $a1, $v0, -0x570
    ctx->pc = 0x27f884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965904));
    // 0x27f888: 0xc0848cc  jal         func_212330
    ctx->pc = 0x27F888u;
    SET_GPR_U32(ctx, 31, 0x27F890u);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x27F888u, 0x27F890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F890u;
label_27f890:
    // 0x27f890: 0x3c02bb9e  lui         $v0, 0xBB9E
    ctx->pc = 0x27f890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48030 << 16));
    // 0x27f894: 0x3442dd1e  ori         $v0, $v0, 0xDD1E
    ctx->pc = 0x27f894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56606);
    // 0x27f898: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f89c: 0x0  nop
    ctx->pc = 0x27f89cu;
    // NOP
    // 0x27f8a0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x27f8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x27f8a4: 0x3c023b9e  lui         $v0, 0x3B9E
    ctx->pc = 0x27f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15262 << 16));
    // 0x27f8a8: 0x3442dd1e  ori         $v0, $v0, 0xDD1E
    ctx->pc = 0x27f8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56606);
    // 0x27f8ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f8acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f8b0: 0x0  nop
    ctx->pc = 0x27f8b0u;
    // NOP
    // 0x27f8b4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x27f8b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x27f8b8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27f8b8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f8bc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x27F8BCu;
    {
        const bool branch_taken_0x27f8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f8bc) {
            ctx->pc = 0x27F900u;
            goto label_27f900;
        }
    }
    ctx->pc = 0x27F8C4u;
label_27f8c4:
    // 0x27f8c4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x27f8c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27f8c8: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x27f8c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27f8cc: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x27f8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27f8d0: 0xc067808  jal         func_19E020
    ctx->pc = 0x27F8D0u;
    SET_GPR_U32(ctx, 31, 0x27F8D8u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x27F8D0u, 0x27F8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F8D8u;
label_27f8d8:
    // 0x27f8d8: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x27f8d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x27f8dc: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x27f8dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x27f8e0: 0xc7ac005c  lwc1        $f12, 0x5C($sp)
    ctx->pc = 0x27f8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27f8e4: 0xc067808  jal         func_19E020
    ctx->pc = 0x27F8E4u;
    SET_GPR_U32(ctx, 31, 0x27F8ECu);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x27F8E4u, 0x27F8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F8ECu;
label_27f8ec:
    // 0x27f8ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27f8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f8f0: 0xc084964  jal         func_212590
    ctx->pc = 0x27F8F0u;
    SET_GPR_U32(ctx, 31, 0x27F8F8u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27F8F0u, 0x27F8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F8F8u;
label_27f8f8:
    // 0x27f8f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27f8f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27f8fc: 0x0  nop
    ctx->pc = 0x27f8fcu;
    // NOP
label_27f900:
    // 0x27f900: 0x2e02010e  sltiu       $v0, $s0, 0x10E
    ctx->pc = 0x27f900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)270) ? 1 : 0);
    // 0x27f904: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x27F904u;
    {
        const bool branch_taken_0x27f904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f904) {
            ctx->pc = 0x27F8C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f8c4;
        }
    }
    ctx->pc = 0x27F90Cu;
    // 0x27f90c: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27F90Cu;
    SET_GPR_U32(ctx, 31, 0x27F914u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27F90Cu, 0x27F914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F914u;
label_27f914:
    // 0x27f914: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x27f914u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27f918: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27f918u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27f91c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27f91cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27f920: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27f920u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f924: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27f924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f928: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x27f928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27f92c: 0x3e00008  jr          $ra
    ctx->pc = 0x27F92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F934u;
}
