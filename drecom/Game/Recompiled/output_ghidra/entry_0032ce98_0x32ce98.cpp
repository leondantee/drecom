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

// Function: entry_0032ce98
// Address: 0x32ce98 - 0x32cfac
void entry_0032ce98_0x32ce98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032ce98_0x32ce98");
#endif

    switch (ctx->pc) {
        case 0x32cec4u: goto label_32cec4;
        case 0x32cf2cu: goto label_32cf2c;
        case 0x32cf78u: goto label_32cf78;
        default: break;
    }

    ctx->pc = 0x32ce98u;

    // 0x32ce98: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x32ce98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32ce9c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x32ce9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32cea0: 0x3c021e07  lui         $v0, 0x1E07
    ctx->pc = 0x32cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7687 << 16));
    // 0x32cea4: 0x34431218  ori         $v1, $v0, 0x1218
    ctx->pc = 0x32cea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4632);
    // 0x32cea8: 0x661025  or          $v0, $v1, $a2
    ctx->pc = 0x32cea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x32ceac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32ceacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32ceb0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32ceb4: 0x24421ef0  addiu       $v0, $v0, 0x1EF0
    ctx->pc = 0x32ceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7920));
    // 0x32ceb8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x32ceb8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32cebc: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32CEBCu;
    SET_GPR_U32(ctx, 31, 0x32CEC4u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32CEBCu, 0x32CEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CEC4u;
label_32cec4:
    // 0x32cec4: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x32cec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x32cec8: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x32cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x32cecc: 0x2442b9a0  addiu       $v0, $v0, -0x4660
    ctx->pc = 0x32ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949280));
    // 0x32ced0: 0x2023023  subu        $a2, $s0, $v0
    ctx->pc = 0x32ced0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x32ced4: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x32ced4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x32ced8: 0x3c0230c3  lui         $v0, 0x30C3
    ctx->pc = 0x32ced8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12483 << 16));
    // 0x32cedc: 0x34430c31  ori         $v1, $v0, 0xC31
    ctx->pc = 0x32cedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3121);
    // 0x32cee0: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x32cee0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32cee4: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x32cee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x32cee8: 0x0  nop
    ctx->pc = 0x32cee8u;
    // NOP
    // 0x32ceec: 0x1010  mfhi        $v0
    ctx->pc = 0x32ceecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x32cef0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x32cef0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x32cef4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x32cef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32cef8: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x32cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32cefc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32cefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32cf00: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x32cf00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x32cf04: 0x3c021e07  lui         $v0, 0x1E07
    ctx->pc = 0x32cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7687 << 16));
    // 0x32cf08: 0x34421219  ori         $v0, $v0, 0x1219
    ctx->pc = 0x32cf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4633);
    // 0x32cf0c: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x32cf0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x32cf10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32cf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32cf14: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32cf14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32cf18: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x32cf18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x32cf1c: 0x24631f00  addiu       $v1, $v1, 0x1F00
    ctx->pc = 0x32cf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7936));
    // 0x32cf20: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x32cf20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32cf24: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32CF24u;
    SET_GPR_U32(ctx, 31, 0x32CF2Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32CF24u, 0x32CF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CF2Cu;
label_32cf2c:
    // 0x32cf2c: 0x3c030086  lui         $v1, 0x86
    ctx->pc = 0x32cf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)134 << 16));
    // 0x32cf30: 0x2462c180  addiu       $v0, $v1, -0x3E80
    ctx->pc = 0x32cf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951296));
    // 0x32cf34: 0x2e21023  subu        $v0, $s7, $v0
    ctx->pc = 0x32cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x32cf38: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x32cf38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x32cf3c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x32cf3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x32cf40: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x32cf40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x32cf44: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x32cf44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32cf48: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x32cf48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32cf4c: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x32cf4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32cf50: 0x3c061e07  lui         $a2, 0x1E07
    ctx->pc = 0x32cf50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7687 << 16));
    // 0x32cf54: 0x34c3121a  ori         $v1, $a2, 0x121A
    ctx->pc = 0x32cf54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4634);
    // 0x32cf58: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x32cf58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x32cf5c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x32cf5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32cf60: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x32cf60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x32cf64: 0x24c31f00  addiu       $v1, $a2, 0x1F00
    ctx->pc = 0x32cf64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 7936));
    // 0x32cf68: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x32cf68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32cf6c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x32cf6cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32cf70: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32CF70u;
    SET_GPR_U32(ctx, 31, 0x32CF78u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32CF70u, 0x32CF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CF78u;
label_32cf78:
    // 0x32cf78: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x32cf78u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x32cf7c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x32cf7cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x32cf80: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x32cf80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32cf84: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x32cf84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32cf88: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x32cf88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32cf8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32cf8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32cf90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32cf90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32cf94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32cf94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32cf98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32cf98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32cf9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32cf9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32cfa0: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x32cfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x32cfa4: 0x3e00008  jr          $ra
    ctx->pc = 0x32CFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32CFACu;
}
