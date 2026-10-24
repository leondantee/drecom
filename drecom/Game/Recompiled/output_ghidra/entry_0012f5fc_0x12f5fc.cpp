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

// Function: entry_0012f5fc
// Address: 0x12f5fc - 0x12f7a4
void entry_0012f5fc_0x12f5fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f5fc_0x12f5fc");
#endif

    switch (ctx->pc) {
        case 0x12f618u: goto label_12f618;
        case 0x12f624u: goto label_12f624;
        case 0x12f634u: goto label_12f634;
        case 0x12f640u: goto label_12f640;
        case 0x12f724u: goto label_12f724;
        case 0x12f744u: goto label_12f744;
        case 0x12f774u: goto label_12f774;
        default: break;
    }

    ctx->pc = 0x12f5fcu;

    // 0x12f5fc: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x12f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x12f600: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x12f600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x12f604: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x12f604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x12f608: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x12f608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12f60c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12f60cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12f610: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12F610u;
    SET_GPR_U32(ctx, 31, 0x12F618u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12F610u, 0x12F618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F618u;
label_12f618:
    // 0x12f618: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x12f618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12f61c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12F61Cu;
    SET_GPR_U32(ctx, 31, 0x12F624u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12F61Cu, 0x12F624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F624u;
label_12f624:
    // 0x12f624: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x12f624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12f628: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12f628u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12f62c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12F62Cu;
    SET_GPR_U32(ctx, 31, 0x12F634u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12F62Cu, 0x12F634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F634u;
label_12f634:
    // 0x12f634: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x12f634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12f638: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12F638u;
    SET_GPR_U32(ctx, 31, 0x12F640u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12F638u, 0x12F640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F640u;
label_12f640:
    // 0x12f640: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x12f640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12f644: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x12f644u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x12f648: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x12f648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12f64c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x12f64cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x12f650: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x12F650u;
    {
        const bool branch_taken_0x12f650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f650) {
            ctx->pc = 0x12F7A4u;
            return;
        }
    }
    ctx->pc = 0x12F658u;
    // 0x12f658: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x12f658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f65c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x12f65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x12f660: 0xe4208d98  swc1        $f0, -0x7268($at)
    ctx->pc = 0x12f660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x388D98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x388D98u, _value); } while (0); }
    // 0x12f664: 0xc601003c  lwc1        $f1, 0x3C($s0)
    ctx->pc = 0x12f664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f668: 0x3c034216  lui         $v1, 0x4216
    ctx->pc = 0x12f668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16918 << 16));
    // 0x12f66c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12f66cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f670: 0x0  nop
    ctx->pc = 0x12f670u;
    // NOP
    // 0x12f674: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12f674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12f678: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x12f678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x12f67c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12f67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f680: 0xa3838094  sb          $v1, -0x7F6C($gp)
    ctx->pc = 0x12f680u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934676), (uint8_t)GPR_U32(ctx, 3));
    // 0x12f684: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x12f684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x12f688: 0x8c246828  lw          $a0, 0x6828($at)
    ctx->pc = 0x12f688u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3B6828u));
    // 0x12f68c: 0xc48101a0  lwc1        $f1, 0x1A0($a0)
    ctx->pc = 0x12f68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f690: 0x3c033e19  lui         $v1, 0x3E19
    ctx->pc = 0x12f690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15897 << 16));
    // 0x12f694: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x12f694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x12f698: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12f698u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f69c: 0x0  nop
    ctx->pc = 0x12f69cu;
    // NOP
    // 0x12f6a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12f6a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12f6a4: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x12f6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x12f6a8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x12f6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x12f6ac: 0x8c246828  lw          $a0, 0x6828($at)
    ctx->pc = 0x12f6acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3B6828u));
    // 0x12f6b0: 0xc48101a4  lwc1        $f1, 0x1A4($a0)
    ctx->pc = 0x12f6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f6b4: 0x3c033e19  lui         $v1, 0x3E19
    ctx->pc = 0x12f6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15897 << 16));
    // 0x12f6b8: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x12f6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x12f6bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12f6bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f6c0: 0x0  nop
    ctx->pc = 0x12f6c0u;
    // NOP
    // 0x12f6c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12f6c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12f6c8: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x12f6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
    // 0x12f6cc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x12f6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x12f6d0: 0x8c246828  lw          $a0, 0x6828($at)
    ctx->pc = 0x12f6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3B6828u));
    // 0x12f6d4: 0xc48101a8  lwc1        $f1, 0x1A8($a0)
    ctx->pc = 0x12f6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f6d8: 0x3c033e19  lui         $v1, 0x3E19
    ctx->pc = 0x12f6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15897 << 16));
    // 0x12f6dc: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x12f6dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x12f6e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12f6e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f6e4: 0x0  nop
    ctx->pc = 0x12f6e4u;
    // NOP
    // 0x12f6e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12f6e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12f6ec: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x12f6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    // 0x12f6f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x12f6f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x12f6f4: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x12f6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x12f6f8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x12f6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x12f6fc: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x12F6FCu;
    {
        const bool branch_taken_0x12f6fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f6fc) {
            ctx->pc = 0x12F7A4u;
            return;
        }
    }
    ctx->pc = 0x12F704u;
    // 0x12f704: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x12f704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x12f708: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x12f708u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x12f70c: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x12f70cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x12f710: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x12F710u;
    {
        const bool branch_taken_0x12f710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f710) {
            ctx->pc = 0x12F7A4u;
            return;
        }
    }
    ctx->pc = 0x12F718u;
    // 0x12f718: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12f718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12f71c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x12F71Cu;
    SET_GPR_U32(ctx, 31, 0x12F724u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12F71Cu, 0x12F724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F724u;
label_12f724:
    // 0x12f724: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x12f724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12f728: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x12f728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12f72c: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x12f72cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12f730: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x12f730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12f734: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x12f734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x12f738: 0x24478d98  addiu       $a3, $v0, -0x7268
    ctx->pc = 0x12f738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938008));
    // 0x12f73c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x12F73Cu;
    SET_GPR_U32(ctx, 31, 0x12F744u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x12F73Cu, 0x12F744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F744u;
label_12f744:
    // 0x12f744: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x12f744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
    // 0x12f748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f74c: 0x0  nop
    ctx->pc = 0x12f74cu;
    // NOP
    // 0x12f750: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x12f750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x12f754: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x12f754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12f758: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x12f758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12f75c: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x12f75cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12f760: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x12f760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12f764: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x12f764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x12f768: 0x24478d98  addiu       $a3, $v0, -0x7268
    ctx->pc = 0x12f768u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938008));
    // 0x12f76c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x12F76Cu;
    SET_GPR_U32(ctx, 31, 0x12F774u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x12F76Cu, 0x12F774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F774u;
label_12f774:
    // 0x12f774: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x12f774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x12f778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f77c: 0x0  nop
    ctx->pc = 0x12f77cu;
    // NOP
    // 0x12f780: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x12f780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x12f784: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x12f784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12f788: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x12f788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12f78c: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x12f78cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12f790: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x12f790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12f794: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x12f794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x12f798: 0x24478d98  addiu       $a3, $v0, -0x7268
    ctx->pc = 0x12f798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938008));
    // 0x12f79c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x12F79Cu;
    SET_GPR_U32(ctx, 31, 0x12F7A4u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x12F79Cu, 0x12F7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F7A4u;
}
