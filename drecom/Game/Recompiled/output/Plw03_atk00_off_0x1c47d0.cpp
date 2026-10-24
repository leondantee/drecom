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

// Function: Plw03_atk00_off
// Address: 0x1c47d0 - 0x1c49d8
void Plw03_atk00_off_0x1c47d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw03_atk00_off_0x1c47d0");
#endif

    switch (ctx->pc) {
        case 0x1c4850u: goto label_1c4850;
        case 0x1c4878u: goto label_1c4878;
        case 0x1c4898u: goto label_1c4898;
        case 0x1c48a8u: goto label_1c48a8;
        case 0x1c48d8u: goto label_1c48d8;
        case 0x1c48e4u: goto label_1c48e4;
        case 0x1c48f8u: goto label_1c48f8;
        case 0x1c4904u: goto label_1c4904;
        case 0x1c490cu: goto label_1c490c;
        case 0x1c4928u: goto label_1c4928;
        default: break;
    }

    ctx->pc = 0x1c47d0u;

    // 0x1c47d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c47d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c47d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c47d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c47d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c47d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c47dc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1c47dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1c47e0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c47e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c47e4: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c47e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c47e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c47e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c47ec: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c47ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c47f0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c47f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c47f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c47f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c47f8: 0x1083002f  beq         $a0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1C47F8u;
    {
        const bool branch_taken_0x1c47f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c47f8) {
            ctx->pc = 0x1C48B8u;
            goto label_1c48b8;
        }
    }
    ctx->pc = 0x1C4800u;
    // 0x1c4800: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4800u;
    {
        const bool branch_taken_0x1c4800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4800) {
            ctx->pc = 0x1C4810u;
            goto label_1c4810;
        }
    }
    ctx->pc = 0x1C4808u;
    // 0x1c4808: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x1C4808u;
    {
        const bool branch_taken_0x1c4808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4808) {
            ctx->pc = 0x1C49C4u;
            goto label_1c49c4;
        }
    }
    ctx->pc = 0x1C4810u;
label_1c4810:
    // 0x1c4810: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c4810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4814: 0xc4401568  lwc1        $f0, 0x1568($v0)
    ctx->pc = 0x1c4814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4818: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c4818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c481c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1c481cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1c4820: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c4820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c4824: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c4824u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c4828: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C4828u;
    {
        const bool branch_taken_0x1c4828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4828) {
            ctx->pc = 0x1C4858u;
            goto label_1c4858;
        }
    }
    ctx->pc = 0x1C4830u;
    // 0x1c4830: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c4830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4834: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c4834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4838: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c4838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c483c: 0x24061402  addiu       $a2, $zero, 0x1402
    ctx->pc = 0x1c483cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5122));
    // 0x1c4840: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c4840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4844: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c4844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c4848: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C4848u;
    SET_GPR_U32(ctx, 31, 0x1C4850u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C4848u, 0x1C4850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4850u;
label_1c4850:
    // 0x1c4850: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C4850u;
    {
        const bool branch_taken_0x1c4850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4850) {
            ctx->pc = 0x1C4878u;
            goto label_1c4878;
        }
    }
    ctx->pc = 0x1C4858u;
label_1c4858:
    // 0x1c4858: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c4858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c485c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c485cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4860: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c4860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c4864: 0x24060502  addiu       $a2, $zero, 0x502
    ctx->pc = 0x1c4864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1282));
    // 0x1c4868: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c4868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c486c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c486cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c4870: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C4870u;
    SET_GPR_U32(ctx, 31, 0x1C4878u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C4870u, 0x1C4878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4878u;
label_1c4878:
    // 0x1c4878: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c4878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c487c: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c487cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c4880: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4884: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c4884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4888: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c4888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c488c: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c488cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c4890: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C4890u;
    SET_GPR_U32(ctx, 31, 0x1C4898u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C4890u, 0x1C4898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4898u;
label_1c4898:
    // 0x1c4898: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c4898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c489c: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1c489cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c48a0: 0xc05733c  jal         func_15CCF0
    ctx->pc = 0x1C48A0u;
    SET_GPR_U32(ctx, 31, 0x1C48A8u);
    ctx->pc = 0x15CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CCF0u, 0x1C48A0u, 0x1C48A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C48A8u;
label_1c48a8:
    // 0x1c48a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c48a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c48ac: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c48acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c48b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c48b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c48b4: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c48b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c48b8:
    // 0x1c48b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c48b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c48bc: 0xc4401568  lwc1        $f0, 0x1568($v0)
    ctx->pc = 0x1c48bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c48c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c48c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c48c4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1c48c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1c48c8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c48c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c48cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c48ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c48d0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C48D0u;
    SET_GPR_U32(ctx, 31, 0x1C48D8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C48D0u, 0x1C48D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C48D8u;
label_1c48d8:
    // 0x1c48d8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c48d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c48dc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C48DCu;
    SET_GPR_U32(ctx, 31, 0x1C48E4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C48DCu, 0x1C48E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C48E4u;
label_1c48e4:
    // 0x1c48e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c48e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c48e8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c48e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c48ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c48ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c48f0: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C48F0u;
    SET_GPR_U32(ctx, 31, 0x1C48F8u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C48F0u, 0x1C48F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C48F8u;
label_1c48f8:
    // 0x1c48f8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c48f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c48fc: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C48FCu;
    SET_GPR_U32(ctx, 31, 0x1C4904u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C48FCu, 0x1C4904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4904u;
label_1c4904:
    // 0x1c4904: 0xc06d390  jal         func_1B4E40
    ctx->pc = 0x1C4904u;
    SET_GPR_U32(ctx, 31, 0x1C490Cu);
    ctx->pc = 0x1B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4E40u, 0x1C4904u, 0x1C490Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C490Cu;
label_1c490c:
    // 0x1c490c: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1C490Cu;
    {
        const bool branch_taken_0x1c490c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c490c) {
            ctx->pc = 0x1C49C4u;
            goto label_1c49c4;
        }
    }
    ctx->pc = 0x1C4914u;
    // 0x1c4914: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c4914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4918: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c4918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c491c: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c491cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c4920: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C4920u;
    SET_GPR_U32(ctx, 31, 0x1C4928u);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C4920u, 0x1C4928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4928u;
label_1c4928:
    // 0x1c4928: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1C4928u;
    {
        const bool branch_taken_0x1c4928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4928) {
            ctx->pc = 0x1C49ACu;
            goto label_1c49ac;
        }
    }
    ctx->pc = 0x1C4930u;
    // 0x1c4930: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1c4930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1c4934: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c4934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c4938: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C4938u;
    {
        const bool branch_taken_0x1c4938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4938) {
            ctx->pc = 0x1C4980u;
            goto label_1c4980;
        }
    }
    ctx->pc = 0x1C4940u;
    // 0x1c4940: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4944: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c4944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c4948: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c4948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c494c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c494cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c4950: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1C4950u;
    {
        const bool branch_taken_0x1c4950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4950) {
            ctx->pc = 0x1C4980u;
            goto label_1c4980;
        }
    }
    ctx->pc = 0x1C4958u;
    // 0x1c4958: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c4958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c495c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c495cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c4960: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c4960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c4964: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c4964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c4968: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c4968u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c496c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c496cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4970: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4974: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c4974u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c4978: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c497c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c497cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c4980:
    // 0x1c4980: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4984: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1c4984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1c4988: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1C4988u;
    {
        const bool branch_taken_0x1c4988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4988) {
            ctx->pc = 0x1C49C4u;
            goto label_1c49c4;
        }
    }
    ctx->pc = 0x1C4990u;
    // 0x1c4990: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c4990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4994: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4998: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c4998u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c499c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c499cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c49a0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c49a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c49a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C49A4u;
    {
        const bool branch_taken_0x1c49a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c49a4) {
            ctx->pc = 0x1C49C4u;
            goto label_1c49c4;
        }
    }
    ctx->pc = 0x1C49ACu;
label_1c49ac:
    // 0x1c49ac: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c49acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c49b0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c49b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c49b4: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c49b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c49b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c49b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c49bc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c49bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c49c0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c49c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1c49c4:
    // 0x1c49c4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c49c4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c49c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c49c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c49cc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c49ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c49d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C49D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C49D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C49D8u;
}
