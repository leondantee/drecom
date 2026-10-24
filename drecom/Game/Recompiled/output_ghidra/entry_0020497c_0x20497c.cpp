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

// Function: entry_0020497c
// Address: 0x20497c - 0x204af8
void entry_0020497c_0x20497c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020497c_0x20497c");
#endif

    switch (ctx->pc) {
        case 0x2049a4u: goto label_2049a4;
        case 0x2049ccu: goto label_2049cc;
        case 0x2049f8u: goto label_2049f8;
        case 0x204a2cu: goto label_204a2c;
        case 0x204a58u: goto label_204a58;
        case 0x204a8cu: goto label_204a8c;
        case 0x204abcu: goto label_204abc;
        case 0x204aecu: goto label_204aec;
        default: break;
    }

    ctx->pc = 0x20497cu;

    // 0x20497c: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x20497cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x204980: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x204980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x204984: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x204984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204988: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20498c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x20498cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x204990: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x204990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204994: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x204994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204998: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204998u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20499c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x20499Cu;
    SET_GPR_U32(ctx, 31, 0x2049A4u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x20499Cu, 0x2049A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2049A4u;
label_2049a4:
    // 0x2049a4: 0x3c073ca3  lui         $a3, 0x3CA3
    ctx->pc = 0x2049a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15523 << 16));
    // 0x2049a8: 0x34e6d70a  ori         $a2, $a3, 0xD70A
    ctx->pc = 0x2049a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x2049ac: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x2049acu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2049b0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2049b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2049b4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2049b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2049b8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2049b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2049bc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2049bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2049c0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2049c0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2049c4: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x2049C4u;
    SET_GPR_U32(ctx, 31, 0x2049CCu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x2049C4u, 0x2049CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2049CCu;
label_2049cc:
    // 0x2049cc: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x2049ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x2049d0: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2049d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2049d4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2049d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2049d8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2049d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2049dc: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2049dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2049e0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2049e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2049e4: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x2049e4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2049e8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2049e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2049ec: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2049ecu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2049f0: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x2049F0u;
    SET_GPR_U32(ctx, 31, 0x2049F8u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x2049F0u, 0x2049F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2049F8u;
label_2049f8:
    // 0x2049f8: 0x3c043ca3  lui         $a0, 0x3CA3
    ctx->pc = 0x2049f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15523 << 16));
    // 0x2049fc: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x2049fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x204a00: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x204a00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204a04: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x204a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204a08: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x204a08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x204a0c: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x204a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x204a10: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x204a10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x204a14: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x204a14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204a18: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x204a18u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204a1c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x204a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204a20: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204a20u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204a24: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204A24u;
    SET_GPR_U32(ctx, 31, 0x204A2Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204A24u, 0x204A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204A2Cu;
label_204a2c:
    // 0x204a2c: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x204a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x204a30: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x204a30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x204a34: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x204a34u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204a38: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204a38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204a3c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x204a3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204a40: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x204a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x204a44: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x204a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204a48: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x204a48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204a4c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204a4cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204a50: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204A50u;
    SET_GPR_U32(ctx, 31, 0x204A58u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204A50u, 0x204A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204A58u;
label_204a58:
    // 0x204a58: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204a58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204a5c: 0x3c063ca3  lui         $a2, 0x3CA3
    ctx->pc = 0x204a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15523 << 16));
    // 0x204a60: 0x34c2d70a  ori         $v0, $a2, 0xD70A
    ctx->pc = 0x204a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x204a64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x204a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204a68: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x204a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204a6c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x204a6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x204a70: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x204a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x204a74: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204a74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204a78: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x204a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204a7c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x204a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204a80: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204a80u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204a84: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204A84u;
    SET_GPR_U32(ctx, 31, 0x204A8Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204A84u, 0x204A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204A8Cu;
label_204a8c:
    // 0x204a8c: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x204a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x204a90: 0x34a6d70a  ori         $a2, $a1, 0xD70A
    ctx->pc = 0x204a90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x204a94: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x204a94u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204a98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x204a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204a9c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x204a9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204aa0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x204aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x204aa4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x204aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204aa8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x204aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204aac: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x204aacu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204ab0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204ab0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204ab4: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204AB4u;
    SET_GPR_U32(ctx, 31, 0x204ABCu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204AB4u, 0x204ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204ABCu;
label_204abc:
    // 0x204abc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x204abcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204ac0: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x204ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x204ac4: 0x3445d70a  ori         $a1, $v0, 0xD70A
    ctx->pc = 0x204ac4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x204ac8: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x204ac8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204acc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204ad0: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x204ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x204ad4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x204ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204ad8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x204ad8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204adc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x204adcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204ae0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204ae0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204ae4: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204AE4u;
    SET_GPR_U32(ctx, 31, 0x204AECu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204AE4u, 0x204AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204AECu;
label_204aec:
    // 0x204aec: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204aecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204af0: 0x10000198  b           . + 4 + (0x198 << 2)
    ctx->pc = 0x204AF0u;
    {
        const bool branch_taken_0x204af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204af0) {
            ctx->pc = 0x205154u;
            return;
        }
    }
    ctx->pc = 0x204AF8u;
}
