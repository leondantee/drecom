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

// Function: Em02_R1_mv00
// Address: 0x29df40 - 0x29e13c
void Em02_R1_mv00_0x29df40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_R1_mv00_0x29df40");
#endif

    switch (ctx->pc) {
        case 0x29dfccu: goto label_29dfcc;
        case 0x29dfd4u: goto label_29dfd4;
        case 0x29e000u: goto label_29e000;
        case 0x29e00cu: goto label_29e00c;
        case 0x29e01cu: goto label_29e01c;
        case 0x29e028u: goto label_29e028;
        case 0x29e054u: goto label_29e054;
        case 0x29e088u: goto label_29e088;
        case 0x29e0a0u: goto label_29e0a0;
        case 0x29e0acu: goto label_29e0ac;
        case 0x29e0bcu: goto label_29e0bc;
        case 0x29e0c8u: goto label_29e0c8;
        case 0x29e104u: goto label_29e104;
        case 0x29e10cu: goto label_29e10c;
        default: break;
    }

    ctx->pc = 0x29df40u;

    // 0x29df40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29df40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29df44: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x29df44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x29df48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29df48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29df4c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x29df4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x29df50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29df50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29df54: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x29df54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x29df58: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x29df58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x29df5c: 0x24636b30  addiu       $v1, $v1, 0x6B30
    ctx->pc = 0x29df5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27440));
    // 0x29df60: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x29df60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x29df64: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x29df64u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x396B30u));
    // 0x29df68: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x29df68u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x29df6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29df6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29df70: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x29df70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x29df74: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x29df74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29df78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29df78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29df7c: 0x10830044  beq         $a0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x29DF7Cu;
    {
        const bool branch_taken_0x29df7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29df7c) {
            ctx->pc = 0x29E090u;
            goto label_29e090;
        }
    }
    ctx->pc = 0x29DF84u;
    // 0x29df84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29df84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29df88: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x29DF88u;
    {
        const bool branch_taken_0x29df88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29df88) {
            ctx->pc = 0x29DFF0u;
            goto label_29dff0;
        }
    }
    ctx->pc = 0x29DF90u;
    // 0x29df90: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29DF90u;
    {
        const bool branch_taken_0x29df90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29df90) {
            ctx->pc = 0x29DFA0u;
            goto label_29dfa0;
        }
    }
    ctx->pc = 0x29DF98u;
    // 0x29df98: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x29DF98u;
    {
        const bool branch_taken_0x29df98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29df98) {
            ctx->pc = 0x29E128u;
            goto label_29e128;
        }
    }
    ctx->pc = 0x29DFA0u;
label_29dfa0:
    // 0x29dfa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29dfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29dfa4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dfa8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x29dfa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x29dfac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dfb0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29dfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dfb4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x29dfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x29dfb8: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x29dfb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29dfbc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29dfbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29dfc0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x29dfc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x29dfc4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x29DFC4u;
    SET_GPR_U32(ctx, 31, 0x29DFCCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x29DFC4u, 0x29DFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DFCCu;
label_29dfcc:
    // 0x29dfcc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29DFCCu;
    SET_GPR_U32(ctx, 31, 0x29DFD4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29DFCCu, 0x29DFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DFD4u;
label_29dfd4:
    // 0x29dfd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29dfd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29dfd8: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x29dfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x29dfdc: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x29dfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x29dfe0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x29dfe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29dfe4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x29dfe4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x29dfe8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dfec: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x29dfecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_29dff0:
    // 0x29dff0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29dff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dff4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x29dff4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29dff8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x29DFF8u;
    SET_GPR_U32(ctx, 31, 0x29E000u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x29DFF8u, 0x29E000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E000u;
label_29e000:
    // 0x29e000: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29e000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e004: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x29E004u;
    SET_GPR_U32(ctx, 31, 0x29E00Cu);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x29E004u, 0x29E00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E00Cu;
label_29e00c:
    // 0x29e00c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29e00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e010: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x29e010u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29e014: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x29E014u;
    SET_GPR_U32(ctx, 31, 0x29E01Cu);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x29E014u, 0x29E01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E01Cu;
label_29e01c:
    // 0x29e01c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29e01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e020: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x29E020u;
    SET_GPR_U32(ctx, 31, 0x29E028u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x29E020u, 0x29E028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E028u;
label_29e028:
    // 0x29e028: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x29e028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e02c: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x29e02cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x29e030: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x29e030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x29e034: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x29e034u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x29e038: 0x1480003b  bnez        $a0, . + 4 + (0x3B << 2)
    ctx->pc = 0x29E038u;
    {
        const bool branch_taken_0x29e038 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e038) {
            ctx->pc = 0x29E128u;
            goto label_29e128;
        }
    }
    ctx->pc = 0x29E040u;
    // 0x29e040: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29e040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29e044: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29e044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e048: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x29e048u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x29e04c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29E04Cu;
    SET_GPR_U32(ctx, 31, 0x29E054u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29E04Cu, 0x29E054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E054u;
label_29e054:
    // 0x29e054: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29e054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29e058: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x29e058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x29e05c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x29e060: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x29e060u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x29e064: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29e064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29e068: 0x34460f00  ori         $a2, $v0, 0xF00
    ctx->pc = 0x29e068u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3840);
    // 0x29e06c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29e06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e070: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29e070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e074: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x29e074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x29e078: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29e078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e07c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x29e07cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x29e080: 0xc0965d0  jal         func_259740
    ctx->pc = 0x29E080u;
    SET_GPR_U32(ctx, 31, 0x29E088u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x29E080u, 0x29E088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E088u;
label_29e088:
    // 0x29e088: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x29E088u;
    {
        const bool branch_taken_0x29e088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e088) {
            ctx->pc = 0x29E128u;
            goto label_29e128;
        }
    }
    ctx->pc = 0x29E090u;
label_29e090:
    // 0x29e090: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29e090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e094: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x29e094u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29e098: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x29E098u;
    SET_GPR_U32(ctx, 31, 0x29E0A0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x29E098u, 0x29E0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E0A0u;
label_29e0a0:
    // 0x29e0a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29e0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e0a4: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x29E0A4u;
    SET_GPR_U32(ctx, 31, 0x29E0ACu);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x29E0A4u, 0x29E0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E0ACu;
label_29e0ac:
    // 0x29e0ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29e0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e0b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x29e0b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29e0b4: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x29E0B4u;
    SET_GPR_U32(ctx, 31, 0x29E0BCu);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x29E0B4u, 0x29E0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E0BCu;
label_29e0bc:
    // 0x29e0bc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29e0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e0c0: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x29E0C0u;
    SET_GPR_U32(ctx, 31, 0x29E0C8u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x29E0C0u, 0x29E0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E0C8u;
label_29e0c8:
    // 0x29e0c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29e0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e0cc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x29e0ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x29e0d0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x29E0D0u;
    {
        const bool branch_taken_0x29e0d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e0d0) {
            ctx->pc = 0x29E128u;
            goto label_29e128;
        }
    }
    ctx->pc = 0x29E0D8u;
    // 0x29e0d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29e0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e0dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29e0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e0e0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x29e0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x29e0e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e0e8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29e0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e0ec: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x29e0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x29e0f0: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x29e0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29e0f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29e0f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e0f8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x29e0f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x29e0fc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x29E0FCu;
    SET_GPR_U32(ctx, 31, 0x29E104u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x29E0FCu, 0x29E104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E104u;
label_29e104:
    // 0x29e104: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29E104u;
    SET_GPR_U32(ctx, 31, 0x29E10Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29E104u, 0x29E10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E10Cu;
label_29e10c:
    // 0x29e10c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29e10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29e110: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x29e110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x29e114: 0x2463001e  addiu       $v1, $v1, 0x1E
    ctx->pc = 0x29e114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x29e118: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x29e118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x29e11c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x29e11cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x29e120: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29e120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e124: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x29e124u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_29e128:
    // 0x29e128: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x29e128u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e12c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29e12cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e130: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x29e130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29e134: 0x3e00008  jr          $ra
    ctx->pc = 0x29E134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E13Cu;
}
