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

// Function: entry_0032df2c
// Address: 0x32df2c - 0x32e02c
void entry_0032df2c_0x32df2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032df2c_0x32df2c");
#endif

    switch (ctx->pc) {
        case 0x32df58u: goto label_32df58;
        case 0x32dfb8u: goto label_32dfb8;
        case 0x32dff4u: goto label_32dff4;
        default: break;
    }

    ctx->pc = 0x32df2cu;

    // 0x32df2c: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x32df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32df30: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32df30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32df34: 0x3c021e07  lui         $v0, 0x1E07
    ctx->pc = 0x32df34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7687 << 16));
    // 0x32df38: 0x34420a18  ori         $v0, $v0, 0xA18
    ctx->pc = 0x32df38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2584);
    // 0x32df3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32df3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32df40: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32df40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32df44: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32df44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32df48: 0x245e1f40  addiu       $fp, $v0, 0x1F40
    ctx->pc = 0x32df48u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 8000));
    // 0x32df4c: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x32df4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x32df50: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32DF50u;
    SET_GPR_U32(ctx, 31, 0x32DF58u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32DF50u, 0x32DF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DF58u;
label_32df58:
    // 0x32df58: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x32df58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x32df5c: 0x2442c190  addiu       $v0, $v0, -0x3E70
    ctx->pc = 0x32df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951312));
    // 0x32df60: 0x2023023  subu        $a2, $s0, $v0
    ctx->pc = 0x32df60u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x32df64: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x32df64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x32df68: 0x3c0230c3  lui         $v0, 0x30C3
    ctx->pc = 0x32df68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12483 << 16));
    // 0x32df6c: 0x34420c31  ori         $v0, $v0, 0xC31
    ctx->pc = 0x32df6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3121);
    // 0x32df70: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x32df70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32df74: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x32df74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x32df78: 0x0  nop
    ctx->pc = 0x32df78u;
    // NOP
    // 0x32df7c: 0x1010  mfhi        $v0
    ctx->pc = 0x32df7cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x32df80: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x32df80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x32df84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32df84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32df88: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x32df88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32df8c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x32df8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32df90: 0x3c031e07  lui         $v1, 0x1E07
    ctx->pc = 0x32df90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7687 << 16));
    // 0x32df94: 0x347e0a19  ori         $fp, $v1, 0xA19
    ctx->pc = 0x32df94u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2585);
    // 0x32df98: 0x3c61825  or          $v1, $fp, $a2
    ctx->pc = 0x32df98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) | GPR_U64(ctx, 6));
    // 0x32df9c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x32df9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32dfa0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x32dfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x32dfa4: 0x24631f00  addiu       $v1, $v1, 0x1F00
    ctx->pc = 0x32dfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7936));
    // 0x32dfa8: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x32dfa8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32dfac: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x32dfacu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32dfb0: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32DFB0u;
    SET_GPR_U32(ctx, 31, 0x32DFB8u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32DFB0u, 0x32DFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DFB8u;
label_32dfb8:
    // 0x32dfb8: 0x3c030086  lui         $v1, 0x86
    ctx->pc = 0x32dfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)134 << 16));
    // 0x32dfbc: 0x2462c290  addiu       $v0, $v1, -0x3D70
    ctx->pc = 0x32dfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951568));
    // 0x32dfc0: 0x2c21823  subu        $v1, $s6, $v0
    ctx->pc = 0x32dfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x32dfc4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x32dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x32dfc8: 0x33103  sra         $a2, $v1, 4
    ctx->pc = 0x32dfc8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 4));
    // 0x32dfcc: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x32dfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32dfd0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32dfd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32dfd4: 0x3c021e07  lui         $v0, 0x1E07
    ctx->pc = 0x32dfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7687 << 16));
    // 0x32dfd8: 0x34420a1a  ori         $v0, $v0, 0xA1A
    ctx->pc = 0x32dfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2586);
    // 0x32dfdc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32dfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32dfe0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32dfe0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32dfe4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32dfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32dfe8: 0x24451f00  addiu       $a1, $v0, 0x1F00
    ctx->pc = 0x32dfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7936));
    // 0x32dfec: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32DFECu;
    SET_GPR_U32(ctx, 31, 0x32DFF4u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32DFECu, 0x32DFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DFF4u;
label_32dff4:
    // 0x32dff4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32dff4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32dff8: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x32dff8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x32dffc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x32dffcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x32e000: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x32e000u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32e004: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x32e004u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32e008: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x32e008u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32e00c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32e00cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32e010: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32e010u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32e014: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32e014u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32e018: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32e018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32e01c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32e01cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e020: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x32e020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x32e024: 0x3e00008  jr          $ra
    ctx->pc = 0x32E024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E02Cu;
}
