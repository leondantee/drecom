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

// Function: Om15_R1_die01
// Address: 0x31dee0 - 0x31e1cc
void Om15_R1_die01_0x31dee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om15_R1_die01_0x31dee0");
#endif

    switch (ctx->pc) {
        case 0x31df50u: goto label_31df50;
        case 0x31dfb8u: goto label_31dfb8;
        case 0x31dfc4u: goto label_31dfc4;
        case 0x31dff8u: goto label_31dff8;
        case 0x31e004u: goto label_31e004;
        case 0x31e040u: goto label_31e040;
        case 0x31e04cu: goto label_31e04c;
        case 0x31e080u: goto label_31e080;
        case 0x31e08cu: goto label_31e08c;
        default: break;
    }

    ctx->pc = 0x31dee0u;

    // 0x31dee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31dee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31dee4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x31dee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x31dee8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x31dee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x31deec: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x31deecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x31def0: 0x24639d60  addiu       $v1, $v1, -0x62A0
    ctx->pc = 0x31def0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942048));
    // 0x31def4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x31def4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31def8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x31def8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399D60u));
    // 0x31defc: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x31defcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x31df00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31df00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31df04: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x31df04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x31df08: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x31df08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31df0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31df0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31df10: 0x10830083  beq         $a0, $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x31DF10u;
    {
        const bool branch_taken_0x31df10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31df10) {
            ctx->pc = 0x31E120u;
            goto label_31e120;
        }
    }
    ctx->pc = 0x31DF18u;
    // 0x31df18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31df18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31df1c: 0x1083005f  beq         $a0, $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x31DF1Cu;
    {
        const bool branch_taken_0x31df1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31df1c) {
            ctx->pc = 0x31E09Cu;
            goto label_31e09c;
        }
    }
    ctx->pc = 0x31DF24u;
    // 0x31df24: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31DF24u;
    {
        const bool branch_taken_0x31df24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31df24) {
            ctx->pc = 0x31DF34u;
            goto label_31df34;
        }
    }
    ctx->pc = 0x31DF2Cu;
    // 0x31df2c: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x31DF2Cu;
    {
        const bool branch_taken_0x31df2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31df2c) {
            ctx->pc = 0x31E1BCu;
            goto label_31e1bc;
        }
    }
    ctx->pc = 0x31DF34u;
label_31df34:
    // 0x31df34: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31df34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31df38: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x31df38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31df3c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x31df3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31df40: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x31df40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31df44: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x31df44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31df48: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x31DF48u;
    SET_GPR_U32(ctx, 31, 0x31DF50u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x31DF48u, 0x31DF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DF50u;
label_31df50:
    // 0x31df50: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x31df50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x31df54: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31df54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31df58: 0xac64129c  sw          $a0, 0x129C($v1)
    ctx->pc = 0x31df58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4764), GPR_U32(ctx, 4));
    // 0x31df5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31df5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31df60: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x31df60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x31df64: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x31df64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x31df68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31df68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31df6c: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x31DF6Cu;
    {
        const bool branch_taken_0x31df6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31df6c) {
            ctx->pc = 0x31E00Cu;
            goto label_31e00c;
        }
    }
    ctx->pc = 0x31DF74u;
    // 0x31df74: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31DF74u;
    {
        const bool branch_taken_0x31df74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31df74) {
            ctx->pc = 0x31DF84u;
            goto label_31df84;
        }
    }
    ctx->pc = 0x31DF7Cu;
    // 0x31df7c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x31DF7Cu;
    {
        const bool branch_taken_0x31df7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31df7c) {
            ctx->pc = 0x31E08Cu;
            goto label_31e08c;
        }
    }
    ctx->pc = 0x31DF84u;
label_31df84:
    // 0x31df84: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31df84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31df88: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x31df88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31df8c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31df8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31df90: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31df90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31df94: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31df94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31df98: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31df98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31df9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31df9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31dfa0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31dfa0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31dfa4: 0x24046102  addiu       $a0, $zero, 0x6102
    ctx->pc = 0x31dfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24834));
    // 0x31dfa8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31dfa8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31dfac: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x31dfacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31dfb0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31DFB0u;
    SET_GPR_U32(ctx, 31, 0x31DFB8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31DFB0u, 0x31DFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DFB8u;
label_31dfb8:
    // 0x31dfb8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31dfb8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31dfbc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31DFBCu;
    SET_GPR_U32(ctx, 31, 0x31DFC4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31DFBCu, 0x31DFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DFC4u;
label_31dfc4:
    // 0x31dfc4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31dfc8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x31dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31dfcc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31dfccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31dfd0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31dfd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31dfd4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31dfd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31dfd8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31dfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31dfdc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31dfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31dfe0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31dfe0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31dfe4: 0x24046202  addiu       $a0, $zero, 0x6202
    ctx->pc = 0x31dfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25090));
    // 0x31dfe8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31dfe8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31dfec: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x31dfecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31dff0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31DFF0u;
    SET_GPR_U32(ctx, 31, 0x31DFF8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31DFF0u, 0x31DFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DFF8u;
label_31dff8:
    // 0x31dff8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31dff8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31dffc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31DFFCu;
    SET_GPR_U32(ctx, 31, 0x31E004u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31DFFCu, 0x31E004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E004u;
label_31e004:
    // 0x31e004: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x31E004u;
    {
        const bool branch_taken_0x31e004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e004) {
            ctx->pc = 0x31E08Cu;
            goto label_31e08c;
        }
    }
    ctx->pc = 0x31E00Cu;
label_31e00c:
    // 0x31e00c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e010: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x31e010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31e014: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31e014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31e018: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31e018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31e01c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31e01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31e020: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31e020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31e024: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31e024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31e028: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31e028u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31e02c: 0x24046107  addiu       $a0, $zero, 0x6107
    ctx->pc = 0x31e02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24839));
    // 0x31e030: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31e030u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31e034: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x31e034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31e038: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31E038u;
    SET_GPR_U32(ctx, 31, 0x31E040u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31E038u, 0x31E040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E040u;
label_31e040:
    // 0x31e040: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31e040u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31e044: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31E044u;
    SET_GPR_U32(ctx, 31, 0x31E04Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31E044u, 0x31E04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E04Cu;
label_31e04c:
    // 0x31e04c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e050: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x31e050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31e054: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31e054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31e058: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31e058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31e05c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31e05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31e060: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31e060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31e064: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31e064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31e068: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31e068u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31e06c: 0x24046207  addiu       $a0, $zero, 0x6207
    ctx->pc = 0x31e06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25095));
    // 0x31e070: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31e070u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31e074: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x31e074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31e078: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31E078u;
    SET_GPR_U32(ctx, 31, 0x31E080u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31E078u, 0x31E080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E080u;
label_31e080:
    // 0x31e080: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31e080u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31e084: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31E084u;
    SET_GPR_U32(ctx, 31, 0x31E08Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31E084u, 0x31E08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E08Cu;
label_31e08c:
    // 0x31e08c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x31e08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e090: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x31e090u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x31e094: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31e094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31e098: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x31e098u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_31e09c:
    // 0x31e09c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x31e09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e0a0: 0x8c83129c  lw          $v1, 0x129C($a0)
    ctx->pc = 0x31e0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4764)));
    // 0x31e0a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x31e0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31e0a8: 0xac83129c  sw          $v1, 0x129C($a0)
    ctx->pc = 0x31e0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4764), GPR_U32(ctx, 3));
    // 0x31e0ac: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31E0ACu;
    {
        const bool branch_taken_0x31e0ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e0ac) {
            ctx->pc = 0x31E0C4u;
            goto label_31e0c4;
        }
    }
    ctx->pc = 0x31E0B4u;
    // 0x31e0b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x31e0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e0b8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x31e0b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x31e0bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31e0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31e0c0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x31e0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_31e0c4:
    // 0x31e0c4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x31e0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e0c8: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x31e0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x31e0cc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x31e0ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x31e0d0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31e0d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31e0d4: 0xc48001a0  lwc1        $f0, 0x1A0($a0)
    ctx->pc = 0x31e0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e0d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31e0d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31e0dc: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x31e0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x31e0e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x31e0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e0e4: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x31e0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x31e0e8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x31e0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x31e0ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31e0ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31e0f0: 0xc48001a4  lwc1        $f0, 0x1A4($a0)
    ctx->pc = 0x31e0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e0f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31e0f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31e0f8: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x31e0f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
    // 0x31e0fc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x31e0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e100: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x31e100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x31e104: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x31e104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x31e108: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31e108u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31e10c: 0xc48001a8  lwc1        $f0, 0x1A8($a0)
    ctx->pc = 0x31e10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e110: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31e110u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31e114: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x31e114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    // 0x31e118: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x31E118u;
    {
        const bool branch_taken_0x31e118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e118) {
            ctx->pc = 0x31E1BCu;
            goto label_31e1bc;
        }
    }
    ctx->pc = 0x31E120u;
label_31e120:
    // 0x31e120: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31e120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31e124: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31e124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e128: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x31e128u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x31e12c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31e12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e130: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x31e130u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x31e134: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31e134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e138: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x31e138u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31e13c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31e13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e140: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x31e140u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31e144: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31e144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e148: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x31e148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x31e14c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31e14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e150: 0xac601298  sw          $zero, 0x1298($v1)
    ctx->pc = 0x31e150u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4760), GPR_U32(ctx, 0));
    // 0x31e154: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31e154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e158: 0xac601290  sw          $zero, 0x1290($v1)
    ctx->pc = 0x31e158u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 0));
    // 0x31e15c: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x31e15cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x31e160: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x31e160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x31e164: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31e164u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e168: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31e168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e16c: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x31e16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x31e170: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x31e170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x31e174: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x31e174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x31e178: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31e178u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e17c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31e17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e180: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x31e180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x31e184: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x31e184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x31e188: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x31e188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x31e18c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31e18cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e190: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31e190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e194: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x31e194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x31e198: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31e198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e19c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31e19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e1a0: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x31e1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x31e1a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31e1a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e1a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31e1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e1ac: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x31e1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x31e1b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31e1b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e1b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31e1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e1b8: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x31e1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
label_31e1bc:
    // 0x31e1bc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x31e1bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e1c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x31e1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31e1c4: 0x3e00008  jr          $ra
    ctx->pc = 0x31E1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E1C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E1CCu;
}
