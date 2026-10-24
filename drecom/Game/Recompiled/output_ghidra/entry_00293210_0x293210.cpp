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

// Function: entry_00293210
// Address: 0x293210 - 0x293330
void entry_00293210_0x293210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00293210_0x293210");
#endif

    switch (ctx->pc) {
        case 0x29326cu: goto label_29326c;
        case 0x2932c8u: goto label_2932c8;
        case 0x293324u: goto label_293324;
        default: break;
    }

    ctx->pc = 0x293210u;

    // 0x293210: 0x1e103c  dsll32      $v0, $fp, 0
    ctx->pc = 0x293210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) << (32 + 0));
    // 0x293214: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x293214u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x293218: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x293218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x29321c: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x29321cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x293220: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x293220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x293224: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x293224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x293228: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x293228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29322c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x29322cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x293230: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x293230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x293234: 0x731023  subu        $v0, $v1, $s3
    ctx->pc = 0x293234u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x293238: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x293238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x29323c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x29323cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x293240: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x293240u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x293244: 0x61a38  dsll        $v1, $a2, 8
    ctx->pc = 0x293244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << 8);
    // 0x293248: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x293248u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29324c: 0x34a40002  ori         $a0, $a1, 0x2
    ctx->pc = 0x29324cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x293250: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x293250u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x293254: 0x24c51778  addiu       $a1, $a2, 0x1778
    ctx->pc = 0x293254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 6008));
    // 0x293258: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x293258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x29325c: 0x24661780  addiu       $a2, $v1, 0x1780
    ctx->pc = 0x29325cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6016));
    // 0x293260: 0x72603e28  paddub      $a3, $s3, $zero
    ctx->pc = 0x293260u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x293264: 0xc059b14  jal         func_166C50
    ctx->pc = 0x293264u;
    SET_GPR_U32(ctx, 31, 0x29326Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x293264u, 0x29326Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29326Cu;
label_29326c:
    // 0x29326c: 0x1e383c  dsll32      $a3, $fp, 0
    ctx->pc = 0x29326cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 30) << (32 + 0));
    // 0x293270: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x293270u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x293274: 0x71c38  dsll        $v1, $a3, 16
    ctx->pc = 0x293274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << 16);
    // 0x293278: 0x24040808  addiu       $a0, $zero, 0x808
    ctx->pc = 0x293278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x29327c: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x29327cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x293280: 0x3c041d00  lui         $a0, 0x1D00
    ctx->pc = 0x293280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7424 << 16));
    // 0x293284: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x293284u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x293288: 0x652025  or          $a0, $v1, $a1
    ctx->pc = 0x293288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x29328c: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x29328cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x293290: 0x733823  subu        $a3, $v1, $s3
    ctx->pc = 0x293290u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x293294: 0x24e20005  addiu       $v0, $a3, 0x5
    ctx->pc = 0x293294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 5));
    // 0x293298: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x293298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29329c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x29329cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2932a0: 0x23a38  dsll        $a3, $v0, 8
    ctx->pc = 0x2932a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 8);
    // 0x2932a4: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x2932a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x2932a8: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x2932a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x2932ac: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2932acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2932b0: 0x24451778  addiu       $a1, $v0, 0x1778
    ctx->pc = 0x2932b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6008));
    // 0x2932b4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2932b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2932b8: 0x24461780  addiu       $a2, $v0, 0x1780
    ctx->pc = 0x2932b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6016));
    // 0x2932bc: 0x72603e28  paddub      $a3, $s3, $zero
    ctx->pc = 0x2932bcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2932c0: 0xc059b14  jal         func_166C50
    ctx->pc = 0x2932C0u;
    SET_GPR_U32(ctx, 31, 0x2932C8u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x2932C0u, 0x2932C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2932C8u;
label_2932c8:
    // 0x2932c8: 0x1e103c  dsll32      $v0, $fp, 0
    ctx->pc = 0x2932c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) << (32 + 0));
    // 0x2932cc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2932ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2932d0: 0x22c38  dsll        $a1, $v0, 16
    ctx->pc = 0x2932d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 16);
    // 0x2932d4: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x2932d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x2932d8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2932d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2932dc: 0x3c031e00  lui         $v1, 0x1E00
    ctx->pc = 0x2932dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7680 << 16));
    // 0x2932e0: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x2932e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2932e4: 0xa41825  or          $v1, $a1, $a0
    ctx->pc = 0x2932e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2932e8: 0x1320c0  sll         $a0, $s3, 3
    ctx->pc = 0x2932e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2932ec: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x2932ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2932f0: 0x24820005  addiu       $v0, $a0, 0x5
    ctx->pc = 0x2932f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x2932f4: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2932f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2932f8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2932f8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2932fc: 0x52238  dsll        $a0, $a1, 8
    ctx->pc = 0x2932fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << 8);
    // 0x293300: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x293300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x293304: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x293304u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x293308: 0x3c07003b  lui         $a3, 0x3B
    ctx->pc = 0x293308u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59 << 16));
    // 0x29330c: 0x24e51778  addiu       $a1, $a3, 0x1778
    ctx->pc = 0x29330cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 6008));
    // 0x293310: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x293310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x293314: 0x24661780  addiu       $a2, $v1, 0x1780
    ctx->pc = 0x293314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6016));
    // 0x293318: 0x72603e28  paddub      $a3, $s3, $zero
    ctx->pc = 0x293318u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x29331c: 0xc059b14  jal         func_166C50
    ctx->pc = 0x29331Cu;
    SET_GPR_U32(ctx, 31, 0x293324u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x29331Cu, 0x293324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293324u;
label_293324:
    // 0x293324: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x293324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x293328: 0x70809e28  paddub      $s3, $a0, $zero
    ctx->pc = 0x293328u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x29332c: 0x0  nop
    ctx->pc = 0x29332cu;
    // NOP
    ctx->pc = 0x293330u;
}
