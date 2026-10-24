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

// Function: Em06_dm_ck
// Address: 0x19adb0 - 0x19b12c
void Em06_dm_ck_0x19adb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em06_dm_ck_0x19adb0");
#endif

    switch (ctx->pc) {
        case 0x19ae1cu: goto label_19ae1c;
        case 0x19ae34u: goto label_19ae34;
        case 0x19ae4cu: goto label_19ae4c;
        case 0x19ae6cu: goto label_19ae6c;
        case 0x19aee8u: goto label_19aee8;
        case 0x19af08u: goto label_19af08;
        case 0x19b020u: goto label_19b020;
        case 0x19b040u: goto label_19b040;
        default: break;
    }

    ctx->pc = 0x19adb0u;

    // 0x19adb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19adb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19adb4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x19adb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x19adb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19adb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19adbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19adbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19adc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19adc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19adc4: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x19adc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x19adc8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19adc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19adcc: 0x906311ee  lbu         $v1, 0x11EE($v1)
    ctx->pc = 0x19adccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4590)));
    // 0x19add0: 0x106000cf  beqz        $v1, . + 4 + (0xCF << 2)
    ctx->pc = 0x19ADD0u;
    {
        const bool branch_taken_0x19add0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19add0) {
            ctx->pc = 0x19B110u;
            goto label_19b110;
        }
    }
    ctx->pc = 0x19ADD8u;
    // 0x19add8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x19add8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19addc: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x19addcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x19ade0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x19ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19ade4: 0x8c501210  lw          $s0, 0x1210($v0)
    ctx->pc = 0x19ade4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4624)));
    // 0x19ade8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x19ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19adec: 0x84420096  lh          $v0, 0x96($v0)
    ctx->pc = 0x19adecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 150)));
    // 0x19adf0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x19adf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19adf4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x19adf4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x19adf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19adfc: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x19ADFCu;
    {
        const bool branch_taken_0x19adfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19adfc) {
            ctx->pc = 0x19AE54u;
            goto label_19ae54;
        }
    }
    ctx->pc = 0x19AE04u;
    // 0x19ae04: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x19ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19ae08: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x19ae08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19ae0c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x19ae0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19ae10: 0x844611f2  lh          $a2, 0x11F2($v0)
    ctx->pc = 0x19ae10u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x19ae14: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x19AE14u;
    SET_GPR_U32(ctx, 31, 0x19AE1Cu);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x19AE14u, 0x19AE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AE1Cu;
label_19ae1c:
    // 0x19ae1c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x19ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19ae20: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x19ae20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19ae24: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x19ae24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19ae28: 0x844611f2  lh          $a2, 0x11F2($v0)
    ctx->pc = 0x19ae28u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x19ae2c: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x19AE2Cu;
    SET_GPR_U32(ctx, 31, 0x19AE34u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x19AE2Cu, 0x19AE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AE34u;
label_19ae34:
    // 0x19ae34: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x19ae34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19ae38: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x19ae38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19ae3c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x19ae3cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19ae40: 0x844611f2  lh          $a2, 0x11F2($v0)
    ctx->pc = 0x19ae40u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x19ae44: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x19AE44u;
    SET_GPR_U32(ctx, 31, 0x19AE4Cu);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x19AE44u, 0x19AE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AE4Cu;
label_19ae4c:
    // 0x19ae4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19AE4Cu;
    {
        const bool branch_taken_0x19ae4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ae4c) {
            ctx->pc = 0x19AE6Cu;
            goto label_19ae6c;
        }
    }
    ctx->pc = 0x19AE54u;
label_19ae54:
    // 0x19ae54: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x19ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19ae58: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x19ae58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19ae5c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x19ae5cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19ae60: 0x844611f2  lh          $a2, 0x11F2($v0)
    ctx->pc = 0x19ae60u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x19ae64: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x19AE64u;
    SET_GPR_U32(ctx, 31, 0x19AE6Cu);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x19AE64u, 0x19AE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AE6Cu;
label_19ae6c:
    // 0x19ae6c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x19ae6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19ae70: 0x8c831340  lw          $v1, 0x1340($a0)
    ctx->pc = 0x19ae70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4928)));
    // 0x19ae74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19ae74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19ae78: 0xac831340  sw          $v1, 0x1340($a0)
    ctx->pc = 0x19ae78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4928), GPR_U32(ctx, 3));
    // 0x19ae7c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19ae7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19ae80: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x19ae80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x19ae84: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x19ae84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x19ae88: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x19ae88u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x19ae8c: 0x461004e  bgez        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x19AE8Cu;
    {
        const bool branch_taken_0x19ae8c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x19ae8c) {
            ctx->pc = 0x19AFC8u;
            goto label_19afc8;
        }
    }
    ctx->pc = 0x19AE94u;
    // 0x19ae94: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19ae94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19ae98: 0x906210a8  lbu         $v0, 0x10A8($v1)
    ctx->pc = 0x19ae98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x19ae9c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x19ae9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x19aea0: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x19aea0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x19aea4: 0x2402051d  addiu       $v0, $zero, 0x51D
    ctx->pc = 0x19aea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1309));
    // 0x19aea8: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x19aea8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19aeac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x19aeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19aeb0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x19aeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x19aeb4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x19aeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19aeb8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x19aeb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19aebc: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x19aebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19aec0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x19aec0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x19aec4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x19aec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x19aec8: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x19aec8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x19aecc: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x19aeccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x19aed0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19aed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19aed4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x19aed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19aed8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x19aed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19aedc: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x19aedcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x19aee0: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x19AEE0u;
    SET_GPR_U32(ctx, 31, 0x19AEE8u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x19AEE8u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19AEE8u) { return; }
    ctx->pc = 0x19AEE8u;
label_19aee8:
    // 0x19aee8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x19aee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x19aeec: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x19aeecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x19aef0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19aef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19aef4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x19aef4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x19aef8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x19aef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19aefc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x19aefcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19af00: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x19AF00u;
    SET_GPR_U32(ctx, 31, 0x19AF08u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x19AF00u, 0x19AF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AF08u;
label_19af08:
    // 0x19af08: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19af08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19af0c: 0x8c631344  lw          $v1, 0x1344($v1)
    ctx->pc = 0x19af0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4932)));
    // 0x19af10: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x19af10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x19af14: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x19AF14u;
    {
        const bool branch_taken_0x19af14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19af14) {
            ctx->pc = 0x19AF74u;
            goto label_19af74;
        }
    }
    ctx->pc = 0x19AF1Cu;
    // 0x19af1c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19af1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19af20: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x19af20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x19af24: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x19af24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19af28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19af28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19af2c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19AF2Cu;
    {
        const bool branch_taken_0x19af2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19af2c) {
            ctx->pc = 0x19AF3Cu;
            goto label_19af3c;
        }
    }
    ctx->pc = 0x19AF34u;
    // 0x19af34: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x19AF34u;
    {
        const bool branch_taken_0x19af34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19af34) {
            ctx->pc = 0x19AF3Cu;
            goto label_19af3c;
        }
    }
    ctx->pc = 0x19AF3Cu;
label_19af3c:
    // 0x19af3c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x19af3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19af40: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19af40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19af44: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x19af44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x19af48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19af48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19af4c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19af4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19af50: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x19af50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x19af54: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19af54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19af58: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x19af58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x19af5c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19af5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19af60: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x19af60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x19af64: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19af64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19af68: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x19af68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x19af6c: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x19AF6Cu;
    {
        const bool branch_taken_0x19af6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19af6c) {
            ctx->pc = 0x19B110u;
            goto label_19b110;
        }
    }
    ctx->pc = 0x19AF74u;
label_19af74:
    // 0x19af74: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19af74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19af78: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x19af78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x19af7c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x19af7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19af80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19af80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19af84: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19AF84u;
    {
        const bool branch_taken_0x19af84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19af84) {
            ctx->pc = 0x19AF94u;
            goto label_19af94;
        }
    }
    ctx->pc = 0x19AF8Cu;
    // 0x19af8c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x19AF8Cu;
    {
        const bool branch_taken_0x19af8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19af8c) {
            ctx->pc = 0x19AF94u;
            goto label_19af94;
        }
    }
    ctx->pc = 0x19AF94u;
label_19af94:
    // 0x19af94: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x19af94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19af98: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19af98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19af9c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x19af9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x19afa0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19afa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19afa4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x19afa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x19afa8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19afa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19afac: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x19afacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x19afb0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19afb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19afb4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x19afb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x19afb8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19afb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19afbc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x19afbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x19afc0: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x19AFC0u;
    {
        const bool branch_taken_0x19afc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19afc0) {
            ctx->pc = 0x19B110u;
            goto label_19b110;
        }
    }
    ctx->pc = 0x19AFC8u;
label_19afc8:
    // 0x19afc8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19afc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19afcc: 0x8c641340  lw          $a0, 0x1340($v1)
    ctx->pc = 0x19afccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4928)));
    // 0x19afd0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x19afd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19afd4: 0x1483004e  bne         $a0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x19AFD4u;
    {
        const bool branch_taken_0x19afd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19afd4) {
            ctx->pc = 0x19B110u;
            goto label_19b110;
        }
    }
    ctx->pc = 0x19AFDCu;
    // 0x19afdc: 0x24020511  addiu       $v0, $zero, 0x511
    ctx->pc = 0x19afdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x19afe0: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x19afe0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19afe4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x19afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19afe8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x19afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x19afec: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x19afecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19aff0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x19aff0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19aff4: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x19aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19aff8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x19aff8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x19affc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x19affcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x19b000: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x19b000u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x19b004: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x19b004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x19b008: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19b008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19b00c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x19b00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19b010: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x19b010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19b014: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x19b014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x19b018: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x19B018u;
    SET_GPR_U32(ctx, 31, 0x19B020u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x19B020u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19B020u) { return; }
    ctx->pc = 0x19B020u;
label_19b020:
    // 0x19b020: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x19b020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x19b024: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x19b024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x19b028: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19b028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19b02c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x19b02cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x19b030: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x19b030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19b034: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x19b034u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19b038: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x19B038u;
    SET_GPR_U32(ctx, 31, 0x19B040u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x19B038u, 0x19B040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B040u;
label_19b040:
    // 0x19b040: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19b040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19b044: 0xac601340  sw          $zero, 0x1340($v1)
    ctx->pc = 0x19b044u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4928), GPR_U32(ctx, 0));
    // 0x19b048: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19b048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19b04c: 0x906411ef  lbu         $a0, 0x11EF($v1)
    ctx->pc = 0x19b04cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4591)));
    // 0x19b050: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19b050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19b054: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x19b054u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x19b058: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19b058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19b05c: 0x8c631344  lw          $v1, 0x1344($v1)
    ctx->pc = 0x19b05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4932)));
    // 0x19b060: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x19b060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x19b064: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x19B064u;
    {
        const bool branch_taken_0x19b064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b064) {
            ctx->pc = 0x19B0C4u;
            goto label_19b0c4;
        }
    }
    ctx->pc = 0x19B06Cu;
    // 0x19b06c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19b06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19b070: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x19b070u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x19b074: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x19b074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19b078: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19b078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b07c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B07Cu;
    {
        const bool branch_taken_0x19b07c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19b07c) {
            ctx->pc = 0x19B08Cu;
            goto label_19b08c;
        }
    }
    ctx->pc = 0x19B084u;
    // 0x19b084: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x19B084u;
    {
        const bool branch_taken_0x19b084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b084) {
            ctx->pc = 0x19B08Cu;
            goto label_19b08c;
        }
    }
    ctx->pc = 0x19B08Cu;
label_19b08c:
    // 0x19b08c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x19b08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b090: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19b090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19b094: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x19b094u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x19b098: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19b098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b09c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19b09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19b0a0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x19b0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x19b0a4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19b0a8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x19b0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b0ac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19b0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19b0b0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x19b0b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b0b4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19b0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19b0b8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x19b0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x19b0bc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x19B0BCu;
    {
        const bool branch_taken_0x19b0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b0bc) {
            ctx->pc = 0x19B110u;
            goto label_19b110;
        }
    }
    ctx->pc = 0x19B0C4u;
label_19b0c4:
    // 0x19b0c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19b0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19b0c8: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x19b0c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x19b0cc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x19b0ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19b0d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19b0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b0d4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B0D4u;
    {
        const bool branch_taken_0x19b0d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19b0d4) {
            ctx->pc = 0x19B0E4u;
            goto label_19b0e4;
        }
    }
    ctx->pc = 0x19B0DCu;
    // 0x19b0dc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x19B0DCu;
    {
        const bool branch_taken_0x19b0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b0dc) {
            ctx->pc = 0x19B0E4u;
            goto label_19b0e4;
        }
    }
    ctx->pc = 0x19B0E4u;
label_19b0e4:
    // 0x19b0e4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x19b0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b0e8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19b0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19b0ec: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x19b0ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x19b0f0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19b0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19b0f4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x19b0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b0f8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19b0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19b0fc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x19b0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b100: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19b100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19b104: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x19b104u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b108: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19b108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19b10c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x19b10cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_19b110:
    // 0x19b110: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x19b110u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b114: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19b114u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b118: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19b118u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b11c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19b11cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b120: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x19b120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x19b124: 0x3e00008  jr          $ra
    ctx->pc = 0x19B124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B12Cu;
}
