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

// Function: Om83_R1_dm00
// Address: 0x35ad90 - 0x35af28
void Om83_R1_dm00_0x35ad90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om83_R1_dm00_0x35ad90");
#endif

    switch (ctx->pc) {
        case 0x35ae10u: goto label_35ae10;
        case 0x35ae34u: goto label_35ae34;
        case 0x35ae68u: goto label_35ae68;
        case 0x35aeacu: goto label_35aeac;
        case 0x35aeb8u: goto label_35aeb8;
        default: break;
    }

    ctx->pc = 0x35ad90u;

    // 0x35ad90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35ad90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35ad94: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x35ad94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x35ad98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35ad98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35ad9c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x35ad9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x35ada0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x35ada0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x35ada4: 0x2463a960  addiu       $v1, $v1, -0x56A0
    ctx->pc = 0x35ada4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945120));
    // 0x35ada8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x35ada8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35adac: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x35adacu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3AA960u));
    // 0x35adb0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x35adb0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x35adb4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35adb8: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x35adb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x35adbc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35adbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35adc0: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x35adc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x35adc4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35adc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35adc8: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x35adc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x35adcc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35adccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35add0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x35add0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x35add4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x35add4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x35add8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35add8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35addc: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x35ADDCu;
    {
        const bool branch_taken_0x35addc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35addc) {
            ctx->pc = 0x35AE8Cu;
            goto label_35ae8c;
        }
    }
    ctx->pc = 0x35ADE4u;
    // 0x35ade4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35ADE4u;
    {
        const bool branch_taken_0x35ade4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ade4) {
            ctx->pc = 0x35ADF4u;
            goto label_35adf4;
        }
    }
    ctx->pc = 0x35ADECu;
    // 0x35adec: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x35ADECu;
    {
        const bool branch_taken_0x35adec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35adec) {
            ctx->pc = 0x35AF14u;
            goto label_35af14;
        }
    }
    ctx->pc = 0x35ADF4u;
label_35adf4:
    // 0x35adf4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x35adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35adf8: 0x244700e0  addiu       $a3, $v0, 0xE0
    ctx->pc = 0x35adf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x35adfc: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x35adfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x35ae00: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35ae00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35ae04: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35ae04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35ae08: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x35AE08u;
    SET_GPR_U32(ctx, 31, 0x35AE10u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x35AE08u, 0x35AE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AE10u;
label_35ae10:
    // 0x35ae10: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35ae10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ae14: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x35ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x35ae18: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x35ae18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x35ae1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x35ae1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x35ae20: 0x2404042e  addiu       $a0, $zero, 0x42E
    ctx->pc = 0x35ae20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1070));
    // 0x35ae24: 0x24650110  addiu       $a1, $v1, 0x110
    ctx->pc = 0x35ae24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x35ae28: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35ae28u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35ae2c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x35AE2Cu;
    SET_GPR_U32(ctx, 31, 0x35AE34u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x35AE2Cu, 0x35AE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AE34u;
label_35ae34:
    // 0x35ae34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35ae34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ae38: 0x8c640368  lw          $a0, 0x368($v1)
    ctx->pc = 0x35ae38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x35ae3c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x35ae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35ae40: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x35AE40u;
    {
        const bool branch_taken_0x35ae40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35ae40) {
            ctx->pc = 0x35AE68u;
            goto label_35ae68;
        }
    }
    ctx->pc = 0x35AE48u;
    // 0x35ae48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x35ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ae4c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x35ae4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ae50: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x35ae50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x35ae54: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35ae54u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35ae58: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35ae58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ae5c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x35ae5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35ae60: 0xc0965d0  jal         func_259740
    ctx->pc = 0x35AE60u;
    SET_GPR_U32(ctx, 31, 0x35AE68u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x35AE60u, 0x35AE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AE68u;
label_35ae68:
    // 0x35ae68: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x35ae68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ae6c: 0x8ca4133c  lw          $a0, 0x133C($a1)
    ctx->pc = 0x35ae6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4924)));
    // 0x35ae70: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x35ae70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x35ae74: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x35ae74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x35ae78: 0xaca3133c  sw          $v1, 0x133C($a1)
    ctx->pc = 0x35ae78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4924), GPR_U32(ctx, 3));
    // 0x35ae7c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x35ae7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ae80: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x35ae80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x35ae84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35ae84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35ae88: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x35ae88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_35ae8c:
    // 0x35ae8c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35ae8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ae90: 0x8c640368  lw          $a0, 0x368($v1)
    ctx->pc = 0x35ae90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x35ae94: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x35ae94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35ae98: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x35AE98u;
    {
        const bool branch_taken_0x35ae98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35ae98) {
            ctx->pc = 0x35AEB8u;
            goto label_35aeb8;
        }
    }
    ctx->pc = 0x35AEA0u;
    // 0x35aea0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x35aea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35aea4: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x35AEA4u;
    SET_GPR_U32(ctx, 31, 0x35AEACu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x35AEA4u, 0x35AEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AEACu;
label_35aeac:
    // 0x35aeac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x35aeacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35aeb0: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x35AEB0u;
    SET_GPR_U32(ctx, 31, 0x35AEB8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x35AEB0u, 0x35AEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AEB8u;
label_35aeb8:
    // 0x35aeb8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x35aeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35aebc: 0x8c831330  lw          $v1, 0x1330($a0)
    ctx->pc = 0x35aebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4912)));
    // 0x35aec0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35aec4: 0xac831330  sw          $v1, 0x1330($a0)
    ctx->pc = 0x35aec4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4912), GPR_U32(ctx, 3));
    // 0x35aec8: 0x2861001f  slti        $at, $v1, 0x1F
    ctx->pc = 0x35aec8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x35aecc: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x35AECCu;
    {
        const bool branch_taken_0x35aecc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x35aecc) {
            ctx->pc = 0x35AF14u;
            goto label_35af14;
        }
    }
    ctx->pc = 0x35AED4u;
    // 0x35aed4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x35aed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35aed8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35aed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35aedc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35aedcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35aee0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35aee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35aee4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35aee4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35aee8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35aee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35aeec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35aeecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35aef0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35aef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35aef4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35aef4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35aef8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35aefc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35aefcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35af00: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x35af00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35af04: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35af04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35af08: 0xa06411ec  sb          $a0, 0x11EC($v1)
    ctx->pc = 0x35af08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4588), (uint8_t)GPR_U32(ctx, 4));
    // 0x35af0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35af0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35af10: 0xac601330  sw          $zero, 0x1330($v1)
    ctx->pc = 0x35af10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4912), GPR_U32(ctx, 0));
label_35af14:
    // 0x35af14: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x35af14u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35af18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35af18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35af1c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x35af1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35af20: 0x3e00008  jr          $ra
    ctx->pc = 0x35AF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AF28u;
}
