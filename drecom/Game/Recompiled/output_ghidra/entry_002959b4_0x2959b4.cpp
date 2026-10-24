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

// Function: entry_002959b4
// Address: 0x2959b4 - 0x295ac0
void entry_002959b4_0x2959b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002959b4_0x2959b4");
#endif

    switch (ctx->pc) {
        case 0x2959f0u: goto label_2959f0;
        case 0x295a2cu: goto label_295a2c;
        case 0x295a70u: goto label_295a70;
        case 0x295ab8u: goto label_295ab8;
        default: break;
    }

    ctx->pc = 0x2959b4u;

    // 0x2959b4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2959b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2959b8: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x2959b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x2959bc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2959bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2959c0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2959c0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2959c4: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x2959c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x2959c8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2959c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2959cc: 0x3c021d06  lui         $v0, 0x1D06
    ctx->pc = 0x2959ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7430 << 16));
    // 0x2959d0: 0x34420700  ori         $v0, $v0, 0x700
    ctx->pc = 0x2959d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1792);
    // 0x2959d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2959d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2959d8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2959d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2959dc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2959dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2959e0: 0x244517e8  addiu       $a1, $v0, 0x17E8
    ctx->pc = 0x2959e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6120));
    // 0x2959e4: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x2959e4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2959e8: 0xc059b14  jal         func_166C50
    ctx->pc = 0x2959E8u;
    SET_GPR_U32(ctx, 31, 0x2959F0u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x2959E8u, 0x2959F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2959F0u;
label_2959f0:
    // 0x2959f0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2959f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2959f4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2959f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2959f8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2959f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2959fc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2959fcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x295a00: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x295a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x295a04: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x295a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x295a08: 0x3c021d07  lui         $v0, 0x1D07
    ctx->pc = 0x295a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7431 << 16));
    // 0x295a0c: 0x34420700  ori         $v0, $v0, 0x700
    ctx->pc = 0x295a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1792);
    // 0x295a10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x295a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x295a14: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x295a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x295a18: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x295a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x295a1c: 0x244517f8  addiu       $a1, $v0, 0x17F8
    ctx->pc = 0x295a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6136));
    // 0x295a20: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x295a20u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x295a24: 0xc059b14  jal         func_166C50
    ctx->pc = 0x295A24u;
    SET_GPR_U32(ctx, 31, 0x295A2Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x295A24u, 0x295A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295A2Cu;
label_295a2c:
    // 0x295a2c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x295a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x295a30: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x295a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x295a34: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x295a34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x295a38: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x295a38u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x295a3c: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x295a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x295a40: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x295a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x295a44: 0x3c021d06  lui         $v0, 0x1D06
    ctx->pc = 0x295a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7430 << 16));
    // 0x295a48: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x295a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x295a4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x295a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x295a50: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x295a50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x295a54: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x295a54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x295a58: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x295a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x295a5c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x295a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x295a60: 0x24451808  addiu       $a1, $v0, 0x1808
    ctx->pc = 0x295a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6152));
    // 0x295a64: 0x8c660020  lw          $a2, 0x20($v1)
    ctx->pc = 0x295a64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x295a68: 0xc059b14  jal         func_166C50
    ctx->pc = 0x295A68u;
    SET_GPR_U32(ctx, 31, 0x295A70u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x295A68u, 0x295A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295A70u;
label_295a70:
    // 0x295a70: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x295a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x295a74: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x295a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x295a78: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x295a78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x295a7c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x295a7cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x295a80: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x295a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x295a84: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x295a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x295a88: 0x3c021d07  lui         $v0, 0x1D07
    ctx->pc = 0x295a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7431 << 16));
    // 0x295a8c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x295a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x295a90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x295a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x295a94: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x295a94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x295a98: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x295a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x295a9c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x295a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x295aa0: 0x94420024  lhu         $v0, 0x24($v0)
    ctx->pc = 0x295aa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x295aa4: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x295aa4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x295aa8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x295aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x295aac: 0x24451808  addiu       $a1, $v0, 0x1808
    ctx->pc = 0x295aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6152));
    // 0x295ab0: 0xc059b14  jal         func_166C50
    ctx->pc = 0x295AB0u;
    SET_GPR_U32(ctx, 31, 0x295AB8u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x295AB0u, 0x295AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295AB8u;
label_295ab8:
    // 0x295ab8: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x295ab8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x295abc: 0x0  nop
    ctx->pc = 0x295abcu;
    // NOP
    ctx->pc = 0x295ac0u;
}
