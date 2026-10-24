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

// Function: Scrollbar_disp
// Address: 0x1a5f50 - 0x1a6258
void Scrollbar_disp_0x1a5f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scrollbar_disp_0x1a5f50");
#endif

    switch (ctx->pc) {
        case 0x1a5fb8u: goto label_1a5fb8;
        case 0x1a5fc8u: goto label_1a5fc8;
        case 0x1a5fdcu: goto label_1a5fdc;
        case 0x1a5fecu: goto label_1a5fec;
        case 0x1a5ff8u: goto label_1a5ff8;
        case 0x1a6048u: goto label_1a6048;
        case 0x1a6058u: goto label_1a6058;
        case 0x1a606cu: goto label_1a606c;
        case 0x1a607cu: goto label_1a607c;
        case 0x1a6088u: goto label_1a6088;
        case 0x1a60c8u: goto label_1a60c8;
        case 0x1a60dcu: goto label_1a60dc;
        case 0x1a6120u: goto label_1a6120;
        case 0x1a6130u: goto label_1a6130;
        case 0x1a6144u: goto label_1a6144;
        case 0x1a6154u: goto label_1a6154;
        case 0x1a6160u: goto label_1a6160;
        case 0x1a61acu: goto label_1a61ac;
        case 0x1a61bcu: goto label_1a61bc;
        case 0x1a61d0u: goto label_1a61d0;
        case 0x1a61e0u: goto label_1a61e0;
        case 0x1a61ecu: goto label_1a61ec;
        case 0x1a6228u: goto label_1a6228;
        case 0x1a623cu: goto label_1a623c;
        default: break;
    }

    ctx->pc = 0x1a5f50u;

    // 0x1a5f50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a5f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a5f54: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x1a5f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1a5f58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a5f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a5f5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a5f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a5f60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a5f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a5f64: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1a5f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x1a5f68: 0x8fb10048  lw          $s1, 0x48($sp)
    ctx->pc = 0x1a5f68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a5f6c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a5f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a5f70: 0x24700320  addiu       $s0, $v1, 0x320
    ctx->pc = 0x1a5f70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 800));
    // 0x1a5f74: 0x92230314  lbu         $v1, 0x314($s1)
    ctx->pc = 0x1a5f74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 788)));
    // 0x1a5f78: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a5f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a5f7c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1a5f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1a5f80: 0x10600056  beqz        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x1A5F80u;
    {
        const bool branch_taken_0x1a5f80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5f80) {
            ctx->pc = 0x1A60DCu;
            goto label_1a60dc;
        }
    }
    ctx->pc = 0x1A5F88u;
    // 0x1a5f88: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a5f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a5f8c: 0xae020130  sw          $v0, 0x130($s0)
    ctx->pc = 0x1a5f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 2));
    // 0x1a5f90: 0x3c025c00  lui         $v0, 0x5C00
    ctx->pc = 0x1a5f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23552 << 16));
    // 0x1a5f94: 0x34421a06  ori         $v0, $v0, 0x1A06
    ctx->pc = 0x1a5f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6662);
    // 0x1a5f98: 0xae020134  sw          $v0, 0x134($s0)
    ctx->pc = 0x1a5f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
    // 0x1a5f9c: 0x3c02ff40  lui         $v0, 0xFF40
    ctx->pc = 0x1a5f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65344 << 16));
    // 0x1a5fa0: 0x34434040  ori         $v1, $v0, 0x4040
    ctx->pc = 0x1a5fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16448);
    // 0x1a5fa4: 0x26020138  addiu       $v0, $s0, 0x138
    ctx->pc = 0x1a5fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 312));
    // 0x1a5fa8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a5fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a5fac: 0x8e2402fc  lw          $a0, 0x2FC($s1)
    ctx->pc = 0x1a5facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 764)));
    // 0x1a5fb0: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x1A5FB0u;
    SET_GPR_U32(ctx, 31, 0x1A5FB8u);
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x1A5FB0u, 0x1A5FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5FB8u;
label_1a5fb8:
    // 0x1a5fb8: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1a5fb8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a5fbc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1a5fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a5fc0: 0xc040044  jal         func_100110
    ctx->pc = 0x1A5FC0u;
    SET_GPR_U32(ctx, 31, 0x1A5FC8u);
    ctx->pc = 0x100110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100110u, 0x1A5FC0u, 0x1A5FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5FC8u;
label_1a5fc8:
    // 0x1a5fc8: 0x3c034070  lui         $v1, 0x4070
    ctx->pc = 0x1a5fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16496 << 16));
    // 0x1a5fcc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1a5fccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a5fd0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1a5fd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a5fd4: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x1A5FD4u;
    SET_GPR_U32(ctx, 31, 0x1A5FDCu);
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x1A5FD4u, 0x1A5FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5FDCu;
label_1a5fdc:
    // 0x1a5fdc: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x1a5fdcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1a5fe0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1a5fe0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a5fe4: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1A5FE4u;
    SET_GPR_U32(ctx, 31, 0x1A5FECu);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1A5FE4u, 0x1A5FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5FECu;
label_1a5fec:
    // 0x1a5fec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a5fecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a5ff0: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x1A5FF0u;
    SET_GPR_U32(ctx, 31, 0x1A5FF8u);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x1A5FF0u, 0x1A5FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5FF8u;
label_1a5ff8:
    // 0x1a5ff8: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1a5ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1a5ffc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a5ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a6000: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x1a6000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x1a6004: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1a6004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a6008: 0x3c028420  lui         $v0, 0x8420
    ctx->pc = 0x1a6008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33824 << 16));
    // 0x1a600c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a600cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a6010: 0x2602013c  addiu       $v0, $s0, 0x13C
    ctx->pc = 0x1a6010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 316));
    // 0x1a6014: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a6014u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a6018: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x1a6018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a601c: 0x26020140  addiu       $v0, $s0, 0x140
    ctx->pc = 0x1a601cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x1a6020: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a6020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a6024: 0x92220311  lbu         $v0, 0x311($s1)
    ctx->pc = 0x1a6024u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 785)));
    // 0x1a6028: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a6028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a602c: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x1a602cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a6030: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1a6030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a6034: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x1a6034u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x1a6038: 0x8e2202fc  lw          $v0, 0x2FC($s1)
    ctx->pc = 0x1a6038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 764)));
    // 0x1a603c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1a603cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a6040: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x1A6040u;
    SET_GPR_U32(ctx, 31, 0x1A6048u);
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x1A6040u, 0x1A6048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6048u;
label_1a6048:
    // 0x1a6048: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1a6048u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a604c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1a604cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a6050: 0xc040044  jal         func_100110
    ctx->pc = 0x1A6050u;
    SET_GPR_U32(ctx, 31, 0x1A6058u);
    ctx->pc = 0x100110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100110u, 0x1A6050u, 0x1A6058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6058u;
label_1a6058:
    // 0x1a6058: 0x3c034070  lui         $v1, 0x4070
    ctx->pc = 0x1a6058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16496 << 16));
    // 0x1a605c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1a605cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a6060: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1a6060u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a6064: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x1A6064u;
    SET_GPR_U32(ctx, 31, 0x1A606Cu);
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x1A6064u, 0x1A606Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A606Cu;
label_1a606c:
    // 0x1a606c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a606cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a6070: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1a6070u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1a6074: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1A6074u;
    SET_GPR_U32(ctx, 31, 0x1A607Cu);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1A6074u, 0x1A607Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A607Cu;
label_1a607c:
    // 0x1a607c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a607cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a6080: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x1A6080u;
    SET_GPR_U32(ctx, 31, 0x1A6088u);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x1A6080u, 0x1A6088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6088u;
label_1a6088:
    // 0x1a6088: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1a6088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1a608c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a608cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a6090: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x1a6090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x1a6094: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1a6094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a6098: 0x3c0284c0  lui         $v0, 0x84C0
    ctx->pc = 0x1a6098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33984 << 16));
    // 0x1a609c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a609cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a60a0: 0x26020144  addiu       $v0, $s0, 0x144
    ctx->pc = 0x1a60a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 324));
    // 0x1a60a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a60a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a60a8: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x1a60a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a60ac: 0x26020148  addiu       $v0, $s0, 0x148
    ctx->pc = 0x1a60acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
    // 0x1a60b0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a60b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a60b4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a60b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a60b8: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a60b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a60bc: 0x26050130  addiu       $a1, $s0, 0x130
    ctx->pc = 0x1a60bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x1a60c0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A60C0u;
    SET_GPR_U32(ctx, 31, 0x1A60C8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A60C0u, 0x1A60C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A60C8u;
label_1a60c8:
    // 0x1a60c8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a60c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a60cc: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a60ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a60d0: 0x26050220  addiu       $a1, $s0, 0x220
    ctx->pc = 0x1a60d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x1a60d4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A60D4u;
    SET_GPR_U32(ctx, 31, 0x1A60DCu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A60D4u, 0x1A60DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A60DCu;
label_1a60dc:
    // 0x1a60dc: 0x92230314  lbu         $v1, 0x314($s1)
    ctx->pc = 0x1a60dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 788)));
    // 0x1a60e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a60e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a60e4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1a60e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1a60e8: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x1A60E8u;
    {
        const bool branch_taken_0x1a60e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a60e8) {
            ctx->pc = 0x1A623Cu;
            goto label_1a623c;
        }
    }
    ctx->pc = 0x1A60F0u;
    // 0x1a60f0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a60f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a60f4: 0xae0200dc  sw          $v0, 0xDC($s0)
    ctx->pc = 0x1a60f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
    // 0x1a60f8: 0x3c025c00  lui         $v0, 0x5C00
    ctx->pc = 0x1a60f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23552 << 16));
    // 0x1a60fc: 0x34421a06  ori         $v0, $v0, 0x1A06
    ctx->pc = 0x1a60fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6662);
    // 0x1a6100: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x1a6100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x1a6104: 0x3c02ff40  lui         $v0, 0xFF40
    ctx->pc = 0x1a6104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65344 << 16));
    // 0x1a6108: 0x34434040  ori         $v1, $v0, 0x4040
    ctx->pc = 0x1a6108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16448);
    // 0x1a610c: 0x260200e4  addiu       $v0, $s0, 0xE4
    ctx->pc = 0x1a610cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 228));
    // 0x1a6110: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a6110u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a6114: 0x8e240300  lw          $a0, 0x300($s1)
    ctx->pc = 0x1a6114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
    // 0x1a6118: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x1A6118u;
    SET_GPR_U32(ctx, 31, 0x1A6120u);
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x1A6118u, 0x1A6120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6120u;
label_1a6120:
    // 0x1a6120: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1a6120u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a6124: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1a6124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1a6128: 0xc040044  jal         func_100110
    ctx->pc = 0x1A6128u;
    SET_GPR_U32(ctx, 31, 0x1A6130u);
    ctx->pc = 0x100110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100110u, 0x1A6128u, 0x1A6130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6130u;
label_1a6130:
    // 0x1a6130: 0x3c034070  lui         $v1, 0x4070
    ctx->pc = 0x1a6130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16496 << 16));
    // 0x1a6134: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1a6134u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a6138: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1a6138u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a613c: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x1A613Cu;
    SET_GPR_U32(ctx, 31, 0x1A6144u);
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x1A613Cu, 0x1A6144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6144u;
label_1a6144:
    // 0x1a6144: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x1a6144u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1a6148: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1a6148u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a614c: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1A614Cu;
    SET_GPR_U32(ctx, 31, 0x1A6154u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1A614Cu, 0x1A6154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6154u;
label_1a6154:
    // 0x1a6154: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a6154u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a6158: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x1A6158u;
    SET_GPR_U32(ctx, 31, 0x1A6160u);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x1A6158u, 0x1A6160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6160u;
label_1a6160:
    // 0x1a6160: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x1a6160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1a6164: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a6164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a6168: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1a6168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a616c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a616cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a6170: 0x34438140  ori         $v1, $v0, 0x8140
    ctx->pc = 0x1a6170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33088);
    // 0x1a6174: 0x260200e8  addiu       $v0, $s0, 0xE8
    ctx->pc = 0x1a6174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
    // 0x1a6178: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a6178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a617c: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x1a617cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a6180: 0x260200ec  addiu       $v0, $s0, 0xEC
    ctx->pc = 0x1a6180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 236));
    // 0x1a6184: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a6184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a6188: 0x92220312  lbu         $v0, 0x312($s1)
    ctx->pc = 0x1a6188u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 786)));
    // 0x1a618c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a618cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a6190: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x1a6190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a6194: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1a6194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a6198: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x1a6198u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x1a619c: 0x8e220300  lw          $v0, 0x300($s1)
    ctx->pc = 0x1a619cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
    // 0x1a61a0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1a61a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a61a4: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x1A61A4u;
    SET_GPR_U32(ctx, 31, 0x1A61ACu);
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x1A61A4u, 0x1A61ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A61ACu;
label_1a61ac:
    // 0x1a61ac: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1a61acu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a61b0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1a61b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1a61b4: 0xc040044  jal         func_100110
    ctx->pc = 0x1A61B4u;
    SET_GPR_U32(ctx, 31, 0x1A61BCu);
    ctx->pc = 0x100110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100110u, 0x1A61B4u, 0x1A61BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A61BCu;
label_1a61bc:
    // 0x1a61bc: 0x3c034070  lui         $v1, 0x4070
    ctx->pc = 0x1a61bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16496 << 16));
    // 0x1a61c0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1a61c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a61c4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1a61c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a61c8: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x1A61C8u;
    SET_GPR_U32(ctx, 31, 0x1A61D0u);
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x1A61C8u, 0x1A61D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A61D0u;
label_1a61d0:
    // 0x1a61d0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a61d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a61d4: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1a61d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1a61d8: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1A61D8u;
    SET_GPR_U32(ctx, 31, 0x1A61E0u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1A61D8u, 0x1A61E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A61E0u;
label_1a61e0:
    // 0x1a61e0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a61e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a61e4: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x1A61E4u;
    SET_GPR_U32(ctx, 31, 0x1A61ECu);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x1A61E4u, 0x1A61ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A61ECu;
label_1a61ec:
    // 0x1a61ec: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x1a61ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1a61f0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a61f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a61f4: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1a61f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a61f8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a61f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a61fc: 0x34438280  ori         $v1, $v0, 0x8280
    ctx->pc = 0x1a61fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33408);
    // 0x1a6200: 0x260200f0  addiu       $v0, $s0, 0xF0
    ctx->pc = 0x1a6200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x1a6204: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a6204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a6208: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x1a6208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a620c: 0x260200f4  addiu       $v0, $s0, 0xF4
    ctx->pc = 0x1a620cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 244));
    // 0x1a6210: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a6210u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a6214: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a6214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a6218: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a6218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a621c: 0x260500dc  addiu       $a1, $s0, 0xDC
    ctx->pc = 0x1a621cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 220));
    // 0x1a6220: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A6220u;
    SET_GPR_U32(ctx, 31, 0x1A6228u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A6220u, 0x1A6228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6228u;
label_1a6228:
    // 0x1a6228: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a6228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a622c: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a622cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a6230: 0x26050184  addiu       $a1, $s0, 0x184
    ctx->pc = 0x1a6230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 388));
    // 0x1a6234: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A6234u;
    SET_GPR_U32(ctx, 31, 0x1A623Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A6234u, 0x1A623Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A623Cu;
label_1a623c:
    // 0x1a623c: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1a623cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a6240: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a6240u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6244: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a6244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6248: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a6248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a624c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1a624cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a6250: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6258u;
}
