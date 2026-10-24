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

// Function: entry_0025de80
// Address: 0x25de80 - 0x25e010
void entry_0025de80_0x25de80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025de80_0x25de80");
#endif

    switch (ctx->pc) {
        case 0x25de90u: goto label_25de90;
        case 0x25dea4u: goto label_25dea4;
        case 0x25debcu: goto label_25debc;
        case 0x25dedcu: goto label_25dedc;
        case 0x25df14u: goto label_25df14;
        case 0x25df28u: goto label_25df28;
        case 0x25df3cu: goto label_25df3c;
        case 0x25df60u: goto label_25df60;
        case 0x25df78u: goto label_25df78;
        case 0x25dfa8u: goto label_25dfa8;
        case 0x25dfc4u: goto label_25dfc4;
        case 0x25dfd4u: goto label_25dfd4;
        case 0x25dff8u: goto label_25dff8;
        case 0x25e008u: goto label_25e008;
        default: break;
    }

    ctx->pc = 0x25de80u;

    // 0x25de80: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x25de80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25de84: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x25de84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25de88: 0xc0677d8  jal         func_19DF60
    ctx->pc = 0x25DE88u;
    SET_GPR_U32(ctx, 31, 0x25DE90u);
    ctx->pc = 0x19DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF60u, 0x25DE88u, 0x25DE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DE90u;
label_25de90:
    // 0x25de90: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x25de90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25de94: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x25de94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25de98: 0xc62c0108  lwc1        $f12, 0x108($s1)
    ctx->pc = 0x25de98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25de9c: 0xc067808  jal         func_19E020
    ctx->pc = 0x25DE9Cu;
    SET_GPR_U32(ctx, 31, 0x25DEA4u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x25DE9Cu, 0x25DEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DEA4u;
label_25dea4:
    // 0x25dea4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25dea4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25dea8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x25dea8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25deac: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x25deacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25deb0: 0xc62c010c  lwc1        $f12, 0x10C($s1)
    ctx->pc = 0x25deb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25deb4: 0xc0676d0  jal         func_19DB40
    ctx->pc = 0x25DEB4u;
    SET_GPR_U32(ctx, 31, 0x25DEBCu);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x25DEB4u, 0x25DEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DEBCu;
label_25debc:
    // 0x25debc: 0x142180  sll         $a0, $s4, 6
    ctx->pc = 0x25debcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x25dec0: 0x8e050130  lw          $a1, 0x130($s0)
    ctx->pc = 0x25dec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x25dec4: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x25dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x25dec8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25dec8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25decc: 0x8e250100  lw          $a1, 0x100($s1)
    ctx->pc = 0x25deccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x25ded0: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x25ded0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25ded4: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x25DED4u;
    SET_GPR_U32(ctx, 31, 0x25DEDCu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25DED4u, 0x25DEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DEDCu;
label_25dedc:
    // 0x25dedc: 0x96220140  lhu         $v0, 0x140($s1)
    ctx->pc = 0x25dedcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x25dee0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25dee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25dee4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x25dee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x25dee8: 0x10400131  beqz        $v0, . + 4 + (0x131 << 2)
    ctx->pc = 0x25DEE8u;
    {
        const bool branch_taken_0x25dee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dee8) {
            ctx->pc = 0x25E3B0u;
            return;
        }
    }
    ctx->pc = 0x25DEF0u;
    // 0x25def0: 0x96220140  lhu         $v0, 0x140($s1)
    ctx->pc = 0x25def0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x25def4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25def4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25def8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x25def8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x25defc: 0x1440012c  bnez        $v0, . + 4 + (0x12C << 2)
    ctx->pc = 0x25DEFCu;
    {
        const bool branch_taken_0x25defc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25defc) {
            ctx->pc = 0x25E3B0u;
            return;
        }
    }
    ctx->pc = 0x25DF04u;
    // 0x25df04: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x25df04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x25df08: 0xc62c011c  lwc1        $f12, 0x11C($s1)
    ctx->pc = 0x25df08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25df0c: 0xc0677d8  jal         func_19DF60
    ctx->pc = 0x25DF0Cu;
    SET_GPR_U32(ctx, 31, 0x25DF14u);
    ctx->pc = 0x19DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF60u, 0x25DF0Cu, 0x25DF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DF14u;
label_25df14:
    // 0x25df14: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x25df14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x25df18: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x25df18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x25df1c: 0xc62c0120  lwc1        $f12, 0x120($s1)
    ctx->pc = 0x25df1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25df20: 0xc067808  jal         func_19E020
    ctx->pc = 0x25DF20u;
    SET_GPR_U32(ctx, 31, 0x25DF28u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x25DF20u, 0x25DF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DF28u;
label_25df28:
    // 0x25df28: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x25df28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x25df2c: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x25df2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x25df30: 0xc62c0124  lwc1        $f12, 0x124($s1)
    ctx->pc = 0x25df30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25df34: 0xc0676d0  jal         func_19DB40
    ctx->pc = 0x25DF34u;
    SET_GPR_U32(ctx, 31, 0x25DF3Cu);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x25DF34u, 0x25DF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DF3Cu;
label_25df3c:
    // 0x25df3c: 0x141980  sll         $v1, $s4, 6
    ctx->pc = 0x25df3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x25df40: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x25df40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x25df44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25df44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25df48: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x25df48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x25df4c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x25df4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x25df50: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x25df50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x25df54: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x25df54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25df58: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25DF58u;
    SET_GPR_U32(ctx, 31, 0x25DF60u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25DF60u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25DF60u) { return; }
    ctx->pc = 0x25DF60u;
label_25df60:
    // 0x25df60: 0x141180  sll         $v0, $s4, 6
    ctx->pc = 0x25df60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x25df64: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x25df64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x25df68: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x25df68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25df6c: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x25df6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x25df70: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x25DF70u;
    SET_GPR_U32(ctx, 31, 0x25DF78u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x25DF70u, 0x25DF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DF78u;
label_25df78:
    // 0x25df78: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x25df78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25df7c: 0x141180  sll         $v0, $s4, 6
    ctx->pc = 0x25df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x25df80: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x25df80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x25df84: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x25df84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25df88: 0x141180  sll         $v0, $s4, 6
    ctx->pc = 0x25df88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x25df8c: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x25df8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x25df90: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x25df90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25df94: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x25df94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x25df98: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x25df98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x25df9c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x25df9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25dfa0: 0xc040c00  jal         func_103000
    ctx->pc = 0x25DFA0u;
    SET_GPR_U32(ctx, 31, 0x25DFA8u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25DFA8u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25DFA8u) { return; }
    ctx->pc = 0x25DFA8u;
label_25dfa8:
    // 0x25dfa8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25dfa8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25dfac: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x25dfacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x25dfb0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x25dfb0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x25dfb4: 0x8e220100  lw          $v0, 0x100($s1)
    ctx->pc = 0x25dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x25dfb8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x25dfb8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25dfbc: 0xc040c44  jal         func_103110
    ctx->pc = 0x25DFBCu;
    SET_GPR_U32(ctx, 31, 0x25DFC4u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x25DFC4u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25DFC4u) { return; }
    ctx->pc = 0x25DFC4u;
label_25dfc4:
    // 0x25dfc4: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x25dfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x25dfc8: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x25dfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x25dfcc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25DFCCu;
    SET_GPR_U32(ctx, 31, 0x25DFD4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25DFD4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25DFD4u) { return; }
    ctx->pc = 0x25DFD4u;
label_25dfd4:
    // 0x25dfd4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25dfd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25dfd8: 0x142980  sll         $a1, $s4, 6
    ctx->pc = 0x25dfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x25dfdc: 0x8e060130  lw          $a2, 0x130($s0)
    ctx->pc = 0x25dfdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x25dfe0: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x25dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x25dfe4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x25dfe4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25dfe8: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x25dfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x25dfec: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x25dfecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25dff0: 0xc040c00  jal         func_103000
    ctx->pc = 0x25DFF0u;
    SET_GPR_U32(ctx, 31, 0x25DFF8u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25DFF8u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25DFF8u) { return; }
    ctx->pc = 0x25DFF8u;
label_25dff8:
    // 0x25dff8: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x25dff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x25dffc: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x25dffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x25e000: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25E000u;
    SET_GPR_U32(ctx, 31, 0x25E008u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25E008u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25E008u) { return; }
    ctx->pc = 0x25E008u;
label_25e008:
    // 0x25e008: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x25E008u;
    {
        const bool branch_taken_0x25e008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e008) {
            ctx->pc = 0x25E3B0u;
            return;
        }
    }
    ctx->pc = 0x25E010u;
}
