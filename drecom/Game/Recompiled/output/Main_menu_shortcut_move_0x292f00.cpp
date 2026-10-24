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

// Function: Main_menu_shortcut_move
// Address: 0x292f00 - 0x2930c0
void Main_menu_shortcut_move_0x292f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Main_menu_shortcut_move_0x292f00");
#endif

    switch (ctx->pc) {
        case 0x292facu: goto label_292fac;
        case 0x292fc4u: goto label_292fc4;
        case 0x292fdcu: goto label_292fdc;
        case 0x292ff0u: goto label_292ff0;
        case 0x293060u: goto label_293060;
        case 0x293078u: goto label_293078;
        case 0x293090u: goto label_293090;
        case 0x2930a4u: goto label_2930a4;
        default: break;
    }

    ctx->pc = 0x292f00u;

    // 0x292f00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x292f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x292f04: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x292f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x292f08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x292f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x292f0c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x292f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x292f10: 0x24706150  addiu       $s0, $v1, 0x6150
    ctx->pc = 0x292f10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24912));
    // 0x292f14: 0x92036608  lbu         $v1, 0x6608($s0)
    ctx->pc = 0x292f14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x62C758u));
    // 0x292f18: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x292f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x292f1c: 0x14600063  bnez        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x292F1Cu;
    {
        const bool branch_taken_0x292f1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x292f1c) {
            ctx->pc = 0x2930ACu;
            goto label_2930ac;
        }
    }
    ctx->pc = 0x292F24u;
    // 0x292f24: 0x9203660c  lbu         $v1, 0x660C($s0)
    ctx->pc = 0x292f24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26124)));
    // 0x292f28: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x292f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x292f2c: 0x1460005f  bnez        $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x292F2Cu;
    {
        const bool branch_taken_0x292f2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x292f2c) {
            ctx->pc = 0x2930ACu;
            goto label_2930ac;
        }
    }
    ctx->pc = 0x292F34u;
    // 0x292f34: 0x9203660d  lbu         $v1, 0x660D($s0)
    ctx->pc = 0x292f34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26125)));
    // 0x292f38: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x292f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x292f3c: 0x1460005b  bnez        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x292F3Cu;
    {
        const bool branch_taken_0x292f3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x292f3c) {
            ctx->pc = 0x2930ACu;
            goto label_2930ac;
        }
    }
    ctx->pc = 0x292F44u;
    // 0x292f44: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x292f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x292f48: 0x94230084  lhu         $v1, 0x84($at)
    ctx->pc = 0x292f48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x292f4c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x292f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x292f50: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x292f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x292f54: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x292F54u;
    {
        const bool branch_taken_0x292f54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x292f54) {
            ctx->pc = 0x292FF8u;
            goto label_292ff8;
        }
    }
    ctx->pc = 0x292F5Cu;
    // 0x292f5c: 0x8e025dc4  lw          $v0, 0x5DC4($s0)
    ctx->pc = 0x292f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24004)));
    // 0x292f60: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x292F60u;
    {
        const bool branch_taken_0x292f60 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x292f60) {
            ctx->pc = 0x292F7Cu;
            goto label_292f7c;
        }
    }
    ctx->pc = 0x292F68u;
    // 0x292f68: 0x8e025dc4  lw          $v0, 0x5DC4($s0)
    ctx->pc = 0x292f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24004)));
    // 0x292f6c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x292f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x292f70: 0xae025dc4  sw          $v0, 0x5DC4($s0)
    ctx->pc = 0x292f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24004), GPR_U32(ctx, 2));
    // 0x292f74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x292F74u;
    {
        const bool branch_taken_0x292f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292f74) {
            ctx->pc = 0x292F84u;
            goto label_292f84;
        }
    }
    ctx->pc = 0x292F7Cu;
label_292f7c:
    // 0x292f7c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x292f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x292f80: 0xae025dc4  sw          $v0, 0x5DC4($s0)
    ctx->pc = 0x292f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24004), GPR_U32(ctx, 2));
label_292f84:
    // 0x292f84: 0xae005dc8  sw          $zero, 0x5DC8($s0)
    ctx->pc = 0x292f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 0));
    // 0x292f88: 0xae005dd0  sw          $zero, 0x5DD0($s0)
    ctx->pc = 0x292f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 0));
    // 0x292f8c: 0x8e0265a4  lw          $v0, 0x65A4($s0)
    ctx->pc = 0x292f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26020)));
    // 0x292f90: 0xae0265a0  sw          $v0, 0x65A0($s0)
    ctx->pc = 0x292f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26016), GPR_U32(ctx, 2));
    // 0x292f94: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x292f94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x292f98: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x292f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x292f9c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x292f9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292fa0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x292fa0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292fa4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x292FA4u;
    SET_GPR_U32(ctx, 31, 0x292FACu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x292FA4u, 0x292FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292FACu;
label_292fac:
    // 0x292fac: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x292facu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292fb0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x292fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292fb4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x292fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292fb8: 0x2406008c  addiu       $a2, $zero, 0x8C
    ctx->pc = 0x292fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x292fbc: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x292FBCu;
    SET_GPR_U32(ctx, 31, 0x292FC4u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x292FBCu, 0x292FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292FC4u;
label_292fc4:
    // 0x292fc4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x292fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292fc8: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x292fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292fcc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x292fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292fd0: 0x2406008d  addiu       $a2, $zero, 0x8D
    ctx->pc = 0x292fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x292fd4: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x292FD4u;
    SET_GPR_U32(ctx, 31, 0x292FDCu);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x292FD4u, 0x292FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292FDCu;
label_292fdc:
    // 0x292fdc: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x292fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x292fe0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x292fe0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292fe4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x292fe4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292fe8: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x292FE8u;
    SET_GPR_U32(ctx, 31, 0x292FF0u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x292FE8u, 0x292FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292FF0u;
label_292ff0:
    // 0x292ff0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x292ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x292ff4: 0xae035dc0  sw          $v1, 0x5DC0($s0)
    ctx->pc = 0x292ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24000), GPR_U32(ctx, 3));
label_292ff8:
    // 0x292ff8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x292ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x292ffc: 0x94230084  lhu         $v1, 0x84($at)
    ctx->pc = 0x292ffcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x293000: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x293000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x293004: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x293004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x293008: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x293008u;
    {
        const bool branch_taken_0x293008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x293008) {
            ctx->pc = 0x2930ACu;
            goto label_2930ac;
        }
    }
    ctx->pc = 0x293010u;
    // 0x293010: 0x8e025dc4  lw          $v0, 0x5DC4($s0)
    ctx->pc = 0x293010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24004)));
    // 0x293014: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x293014u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x293018: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x293018u;
    {
        const bool branch_taken_0x293018 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x293018) {
            ctx->pc = 0x293034u;
            goto label_293034;
        }
    }
    ctx->pc = 0x293020u;
    // 0x293020: 0x8e025dc4  lw          $v0, 0x5DC4($s0)
    ctx->pc = 0x293020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24004)));
    // 0x293024: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x293024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x293028: 0xae025dc4  sw          $v0, 0x5DC4($s0)
    ctx->pc = 0x293028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24004), GPR_U32(ctx, 2));
    // 0x29302c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29302Cu;
    {
        const bool branch_taken_0x29302c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29302c) {
            ctx->pc = 0x293038u;
            goto label_293038;
        }
    }
    ctx->pc = 0x293034u;
label_293034:
    // 0x293034: 0xae005dc4  sw          $zero, 0x5DC4($s0)
    ctx->pc = 0x293034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24004), GPR_U32(ctx, 0));
label_293038:
    // 0x293038: 0xae005dc8  sw          $zero, 0x5DC8($s0)
    ctx->pc = 0x293038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 0));
    // 0x29303c: 0xae005dd0  sw          $zero, 0x5DD0($s0)
    ctx->pc = 0x29303cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 0));
    // 0x293040: 0x8e0265a4  lw          $v0, 0x65A4($s0)
    ctx->pc = 0x293040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26020)));
    // 0x293044: 0xae0265a0  sw          $v0, 0x65A0($s0)
    ctx->pc = 0x293044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26016), GPR_U32(ctx, 2));
    // 0x293048: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x293048u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29304c: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x29304cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x293050: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x293050u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x293054: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x293054u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x293058: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x293058u;
    SET_GPR_U32(ctx, 31, 0x293060u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x293058u, 0x293060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293060u;
label_293060:
    // 0x293060: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x293060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x293064: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x293064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x293068: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x293068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29306c: 0x2406008c  addiu       $a2, $zero, 0x8C
    ctx->pc = 0x29306cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x293070: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x293070u;
    SET_GPR_U32(ctx, 31, 0x293078u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x293070u, 0x293078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293078u;
label_293078:
    // 0x293078: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x293078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29307c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x29307cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x293080: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x293080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x293084: 0x2406008d  addiu       $a2, $zero, 0x8D
    ctx->pc = 0x293084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x293088: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x293088u;
    SET_GPR_U32(ctx, 31, 0x293090u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x293088u, 0x293090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293090u;
label_293090:
    // 0x293090: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x293090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x293094: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x293094u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x293098: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x293098u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29309c: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x29309Cu;
    SET_GPR_U32(ctx, 31, 0x2930A4u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x29309Cu, 0x2930A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2930A4u;
label_2930a4:
    // 0x2930a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2930a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2930a8: 0xae035dc0  sw          $v1, 0x5DC0($s0)
    ctx->pc = 0x2930a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24000), GPR_U32(ctx, 3));
label_2930ac:
    // 0x2930ac: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2930acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2930b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2930b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2930b4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2930b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2930b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2930B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2930B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2930C0u;
}
