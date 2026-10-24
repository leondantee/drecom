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

// Function: entry_0031bf34
// Address: 0x31bf34 - 0x31c080
void entry_0031bf34_0x31bf34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031bf34_0x31bf34");
#endif

    switch (ctx->pc) {
        case 0x31bfa4u: goto label_31bfa4;
        case 0x31bfb0u: goto label_31bfb0;
        case 0x31bfe8u: goto label_31bfe8;
        case 0x31bff4u: goto label_31bff4;
        case 0x31c02cu: goto label_31c02c;
        case 0x31c038u: goto label_31c038;
        case 0x31c070u: goto label_31c070;
        case 0x31c07cu: goto label_31c07c;
        default: break;
    }

    ctx->pc = 0x31bf34u;

    // 0x31bf34: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x31bf34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x31bf38: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31bf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31bf3c: 0x8c860058  lw          $a2, 0x58($a0)
    ctx->pc = 0x31bf3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x31bf40: 0xacc70060  sw          $a3, 0x60($a2)
    ctx->pc = 0x31bf40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 96), GPR_U32(ctx, 7));
    // 0x31bf44: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x31bf44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x31bf48: 0x8fb100c8  lw          $s1, 0xC8($sp)
    ctx->pc = 0x31bf48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31bf4c: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x31bf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x31bf50: 0xac640064  sw          $a0, 0x64($v1)
    ctx->pc = 0x31bf50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 4));
    // 0x31bf54: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x31bf54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x31bf58: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31bf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31bf5c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x31bf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x31bf60: 0xac640068  sw          $a0, 0x68($v1)
    ctx->pc = 0x31bf60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 4));
    // 0x31bf64: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31bf64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31bf68: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x31bf68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x31bf6c: 0xac60006c  sw          $zero, 0x6C($v1)
    ctx->pc = 0x31bf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 0));
    // 0x31bf70: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31bf70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31bf74: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x31bf74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x31bf78: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x31bf78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31bf7c: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x31bf7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x31bf80: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x31bf80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31bf84: 0x43438  dsll        $a2, $a0, 16
    ctx->pc = 0x31bf84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 16);
    // 0x31bf88: 0x34c4ffff  ori         $a0, $a2, 0xFFFF
    ctx->pc = 0x31bf88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x31bf8c: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x31bf8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x31bf90: 0x24046107  addiu       $a0, $zero, 0x6107
    ctx->pc = 0x31bf90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24839));
    // 0x31bf94: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31bf94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31bf98: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31bf98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31bf9c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31BF9Cu;
    SET_GPR_U32(ctx, 31, 0x31BFA4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31BF9Cu, 0x31BFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BFA4u;
label_31bfa4:
    // 0x31bfa4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31bfa4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31bfa8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31BFA8u;
    SET_GPR_U32(ctx, 31, 0x31BFB0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31BFA8u, 0x31BFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BFB0u;
label_31bfb0:
    // 0x31bfb0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x31bfb0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31bfb4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31bfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31bfb8: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x31bfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x31bfbc: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x31bfbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31bfc0: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x31bfc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x31bfc4: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x31bfc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31bfc8: 0x43438  dsll        $a2, $a0, 16
    ctx->pc = 0x31bfc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 16);
    // 0x31bfcc: 0x34c2ffff  ori         $v0, $a2, 0xFFFF
    ctx->pc = 0x31bfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x31bfd0: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x31bfd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x31bfd4: 0x24046207  addiu       $a0, $zero, 0x6207
    ctx->pc = 0x31bfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25095));
    // 0x31bfd8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31bfd8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31bfdc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31bfdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31bfe0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31BFE0u;
    SET_GPR_U32(ctx, 31, 0x31BFE8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31BFE0u, 0x31BFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BFE8u;
label_31bfe8:
    // 0x31bfe8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31bfe8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31bfec: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31BFECu;
    SET_GPR_U32(ctx, 31, 0x31BFF4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31BFECu, 0x31BFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BFF4u;
label_31bff4:
    // 0x31bff4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x31bff4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31bff8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31bff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31bffc: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x31bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x31c000: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x31c000u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31c004: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x31c004u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x31c008: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x31c008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31c00c: 0x43438  dsll        $a2, $a0, 16
    ctx->pc = 0x31c00cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 16);
    // 0x31c010: 0x34c2ffff  ori         $v0, $a2, 0xFFFF
    ctx->pc = 0x31c010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x31c014: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x31c014u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x31c018: 0x2404490c  addiu       $a0, $zero, 0x490C
    ctx->pc = 0x31c018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18700));
    // 0x31c01c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31c01cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31c020: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31c020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c024: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31C024u;
    SET_GPR_U32(ctx, 31, 0x31C02Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31C024u, 0x31C02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C02Cu;
label_31c02c:
    // 0x31c02c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31c02cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31c030: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31C030u;
    SET_GPR_U32(ctx, 31, 0x31C038u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31C030u, 0x31C038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C038u;
label_31c038:
    // 0x31c038: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x31c038u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31c03c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c040: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x31c040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x31c044: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x31c044u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31c048: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x31c048u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x31c04c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x31c04cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31c050: 0x43438  dsll        $a2, $a0, 16
    ctx->pc = 0x31c050u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 16);
    // 0x31c054: 0x34c2ffff  ori         $v0, $a2, 0xFFFF
    ctx->pc = 0x31c054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x31c058: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x31c058u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x31c05c: 0x2404490d  addiu       $a0, $zero, 0x490D
    ctx->pc = 0x31c05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18701));
    // 0x31c060: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31c060u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31c064: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31c064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c068: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31C068u;
    SET_GPR_U32(ctx, 31, 0x31C070u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31C068u, 0x31C070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C070u;
label_31c070:
    // 0x31c070: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31c070u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31c074: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31C074u;
    SET_GPR_U32(ctx, 31, 0x31C07Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31C074u, 0x31C07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C07Cu;
label_31c07c:
    // 0x31c07c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x31c07cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x31c080u;
}
