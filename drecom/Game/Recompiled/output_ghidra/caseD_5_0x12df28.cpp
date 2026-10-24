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

// Function: caseD_5
// Address: 0x12df28 - 0x12e09c
void caseD_5_0x12df28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x12df28");
#endif

    switch (ctx->pc) {
        case 0x12df40u: goto label_12df40;
        case 0x12df6cu: goto label_12df6c;
        case 0x12df88u: goto label_12df88;
        case 0x12df94u: goto label_12df94;
        case 0x12dfa4u: goto label_12dfa4;
        case 0x12dfb0u: goto label_12dfb0;
        case 0x12dfd8u: goto label_12dfd8;
        case 0x12e00cu: goto label_12e00c;
        case 0x12e028u: goto label_12e028;
        case 0x12e06cu: goto label_12e06c;
        default: break;
    }

    ctx->pc = 0x12df28u;

    // 0x12df28: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12df28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12df2c: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x12df2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12df30: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x12df30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x12df34: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x12df34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x12df38: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x12DF38u;
    SET_GPR_U32(ctx, 31, 0x12DF40u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x12DF38u, 0x12DF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DF40u;
label_12df40:
    // 0x12df40: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12df40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12df44: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x12df44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x12df48: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12df48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12df4c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12df4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12df50: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x12df50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x12df54: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12df54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12df58: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x12df58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x12df5c: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x12df5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12df60: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x12df60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x12df64: 0xc058f50  jal         func_163D40
    ctx->pc = 0x12DF64u;
    SET_GPR_U32(ctx, 31, 0x12DF6Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x12DF64u, 0x12DF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DF6Cu;
label_12df6c:
    // 0x12df6c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12df6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12df70: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x12df70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x12df74: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x12df74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12df78: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x12df78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x12df7c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12df7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12df80: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12DF80u;
    SET_GPR_U32(ctx, 31, 0x12DF88u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12DF80u, 0x12DF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DF88u;
label_12df88:
    // 0x12df88: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12df88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12df8c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12DF8Cu;
    SET_GPR_U32(ctx, 31, 0x12DF94u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12DF8Cu, 0x12DF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DF94u;
label_12df94:
    // 0x12df94: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12df94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12df98: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12df98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12df9c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12DF9Cu;
    SET_GPR_U32(ctx, 31, 0x12DFA4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12DF9Cu, 0x12DFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DFA4u;
label_12dfa4:
    // 0x12dfa4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12dfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dfa8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12DFA8u;
    SET_GPR_U32(ctx, 31, 0x12DFB0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12DFA8u, 0x12DFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DFB0u;
label_12dfb0:
    // 0x12dfb0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x12dfb0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12dfb4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12dfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dfb8: 0x906409db  lbu         $a0, 0x9DB($v1)
    ctx->pc = 0x12dfb8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x12dfbc: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x12dfbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x12dfc0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x12dfc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x12dfc4: 0x10600064  beqz        $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x12DFC4u;
    {
        const bool branch_taken_0x12dfc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dfc4) {
            ctx->pc = 0x12E158u;
            return;
        }
    }
    ctx->pc = 0x12DFCCu;
    // 0x12dfcc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x12dfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12dfd0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x12DFD0u;
    SET_GPR_U32(ctx, 31, 0x12DFD8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12DFD0u, 0x12DFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DFD8u;
label_12dfd8:
    // 0x12dfd8: 0x3c03c2c8  lui         $v1, 0xC2C8
    ctx->pc = 0x12dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49864 << 16));
    // 0x12dfdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12dfdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12dfe0: 0x0  nop
    ctx->pc = 0x12dfe0u;
    // NOP
    // 0x12dfe4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x12dfe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x12dfe8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dfec: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12dfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12dff0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12dff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dff4: 0x24450580  addiu       $a1, $v0, 0x580
    ctx->pc = 0x12dff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x12dff8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x12dff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12dffc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x12dffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x12e000: 0x24478d8c  addiu       $a3, $v0, -0x7274
    ctx->pc = 0x12e000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937996));
    // 0x12e004: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x12E004u;
    SET_GPR_U32(ctx, 31, 0x12E00Cu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x12E004u, 0x12E00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E00Cu;
label_12e00c:
    // 0x12e00c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x12e00cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12e010: 0x10e00022  beqz        $a3, . + 4 + (0x22 << 2)
    ctx->pc = 0x12E010u;
    {
        const bool branch_taken_0x12e010 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e010) {
            ctx->pc = 0x12E09Cu;
            return;
        }
    }
    ctx->pc = 0x12E018u;
    // 0x12e018: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x12e018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x12e01c: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x12e01cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x12e020: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x12E020u;
    SET_GPR_U32(ctx, 31, 0x12E028u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12E020u, 0x12E028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E028u;
label_12e028:
    // 0x12e028: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12e028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12e02c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x12e02cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12e030: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x12e030u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x12e034: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x12e034u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12e038: 0x53438  dsll        $a2, $a1, 16
    ctx->pc = 0x12e038u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << 16);
    // 0x12e03c: 0x34c7ffff  ori         $a3, $a2, 0xFFFF
    ctx->pc = 0x12e03cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x12e040: 0x874024  and         $t0, $a0, $a3
    ctx->pc = 0x12e040u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x12e044: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x12e044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x12e048: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x12e048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x12e04c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12e050: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12e050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12e054: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x12e054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x12e058: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12e058u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12e05c: 0x24470580  addiu       $a3, $v0, 0x580
    ctx->pc = 0x12e05cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x12e060: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x12e060u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12e064: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x12E064u;
    SET_GPR_U32(ctx, 31, 0x12E06Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x12E064u, 0x12E06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E06Cu;
label_12e06c:
    // 0x12e06c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12e06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12e070: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x12e070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x12e074: 0x3c07469c  lui         $a3, 0x469C
    ctx->pc = 0x12e074u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)18076 << 16));
    // 0x12e078: 0x34e64000  ori         $a2, $a3, 0x4000
    ctx->pc = 0x12e078u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16384);
    // 0x12e07c: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x12e07cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12e080: 0x24080516  addiu       $t0, $zero, 0x516
    ctx->pc = 0x12e080u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1302));
    // 0x12e084: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x12e084u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x12e088: 0x24a205b0  addiu       $v0, $a1, 0x5B0
    ctx->pc = 0x12e088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1456));
    // 0x12e08c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x12e08cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12e090: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12e090u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12e094: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x12E094u;
    SET_GPR_U32(ctx, 31, 0x12E09Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12E094u, 0x12E09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E09Cu;
}
