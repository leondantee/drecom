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

// Function: Set_effect_kaminari00
// Address: 0x21bf50 - 0x21c208
void Set_effect_kaminari00_0x21bf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_kaminari00_0x21bf50");
#endif

    switch (ctx->pc) {
        case 0x21c11cu: goto label_21c11c;
        default: break;
    }

    ctx->pc = 0x21bf50u;

    // 0x21bf50: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x21bf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x21bf54: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x21bf54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x21bf58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21bf58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21bf5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21bf5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21bf60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21bf60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21bf64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21bf64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21bf68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21bf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21bf6c: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x21bf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x21bf70: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x21bf70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x21bf74: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x21bf74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
    // 0x21bf78: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x21bf78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x21bf7c: 0xafa80088  sw          $t0, 0x88($sp)
    ctx->pc = 0x21bf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 8));
    // 0x21bf80: 0xafa90090  sw          $t1, 0x90($sp)
    ctx->pc = 0x21bf80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 9));
    // 0x21bf84: 0xe7ac0098  swc1        $f12, 0x98($sp)
    ctx->pc = 0x21bf84u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x21bf88: 0xe7ad00a0  swc1        $f13, 0xA0($sp)
    ctx->pc = 0x21bf88u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x21bf8c: 0xe7ae00a8  swc1        $f14, 0xA8($sp)
    ctx->pc = 0x21bf8cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x21bf90: 0xafaa00b0  sw          $t2, 0xB0($sp)
    ctx->pc = 0x21bf90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 10));
    // 0x21bf94: 0xa3ab00b8  sb          $t3, 0xB8($sp)
    ctx->pc = 0x21bf94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 184), (uint8_t)GPR_U32(ctx, 11));
    // 0x21bf98: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x21bf98u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21bf9c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x21bf9cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21bfa0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x21bfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x21bfa4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21BFA4u;
    {
        const bool branch_taken_0x21bfa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bfa4) {
            ctx->pc = 0x21BFD4u;
            goto label_21bfd4;
        }
    }
    ctx->pc = 0x21BFACu;
    // 0x21bfac: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x21bfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21bfb0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21BFB0u;
    {
        const bool branch_taken_0x21bfb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bfb0) {
            ctx->pc = 0x21BFC4u;
            goto label_21bfc4;
        }
    }
    ctx->pc = 0x21BFB8u;
    // 0x21bfb8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x21bfb8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21bfbc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x21BFBCu;
    {
        const bool branch_taken_0x21bfbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bfbc) {
            ctx->pc = 0x21BFF8u;
            goto label_21bff8;
        }
    }
    ctx->pc = 0x21BFC4u;
label_21bfc4:
    // 0x21bfc4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x21bfc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21bfc8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x21bfc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21bfcc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21BFCCu;
    {
        const bool branch_taken_0x21bfcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bfcc) {
            ctx->pc = 0x21BFF8u;
            goto label_21bff8;
        }
    }
    ctx->pc = 0x21BFD4u;
label_21bfd4:
    // 0x21bfd4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x21bfd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21bfd8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x21bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21bfdc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21BFDCu;
    {
        const bool branch_taken_0x21bfdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bfdc) {
            ctx->pc = 0x21BFF0u;
            goto label_21bff0;
        }
    }
    ctx->pc = 0x21BFE4u;
    // 0x21bfe4: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x21bfe4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21bfe8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21BFE8u;
    {
        const bool branch_taken_0x21bfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bfe8) {
            ctx->pc = 0x21BFF8u;
            goto label_21bff8;
        }
    }
    ctx->pc = 0x21BFF0u;
label_21bff0:
    // 0x21bff0: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x21bff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21bff4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x21bff4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21bff8:
    // 0x21bff8: 0x93a200b8  lbu         $v0, 0xB8($sp)
    ctx->pc = 0x21bff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x21bffc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21bffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21c000: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21C000u;
    {
        const bool branch_taken_0x21c000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c000) {
            ctx->pc = 0x21C014u;
            goto label_21c014;
        }
    }
    ctx->pc = 0x21C008u;
    // 0x21c008: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x21c008u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c00c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21C00Cu;
    {
        const bool branch_taken_0x21c00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c00c) {
            ctx->pc = 0x21C018u;
            goto label_21c018;
        }
    }
    ctx->pc = 0x21C014u;
label_21c014:
    // 0x21c014: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x21c014u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_21c018:
    // 0x21c018: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x21c018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x21c01c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21c01cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21c020: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x21c020u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x21c024: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x21c024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x21c028: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21c028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21c02c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x21c02cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x21c030: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x21c030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x21c034: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21c034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21c038: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x21c038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x21c03c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21c03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21c040: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x21c040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x21c044: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x21c044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x21c048: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x21c048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21c04c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21c04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21c050: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x21c050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x21c054: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21c054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21c058: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x21c058u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21c05c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21c060: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21c060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21c064: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21c064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21c068: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21c068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21c06c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21c06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21c070: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21c070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21c074: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21c074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21c078: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x21c078u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21c07c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x21c07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21c080: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21c080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21c084: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21c084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21c088: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21c088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21c08c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21c08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21c090: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21c090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21c094: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21c094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21c098: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x21c098u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x21c09c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x21c09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x21c0a0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21c0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21c0a4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21c0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21c0a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21c0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21c0ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21c0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21c0b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21c0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21c0b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21c0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21c0b8: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x21c0b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21c0bc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x21c0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21c0c0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21c0c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21c0c4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21c0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21c0c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21c0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21c0cc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21c0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21c0d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21c0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21c0d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21c0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21c0d8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x21c0d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x21c0dc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x21c0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21c0e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21c0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21c0e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21c0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21c0e8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x21c0e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x21c0ec: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x21c0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
    // 0x21c0f0: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x21c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x21c0f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21c0f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21c0f8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x21c0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x21c0fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21c0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21c100: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21c100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21c104: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x21c104u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x21c108: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x21c108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21c10c: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x21c10cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21c110: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x21c110u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x21c114: 0xc0634c8  jal         func_18D320
    ctx->pc = 0x21C114u;
    SET_GPR_U32(ctx, 31, 0x21C11Cu);
    ctx->pc = 0x18D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D320u, 0x21C114u, 0x21C11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C11Cu;
label_21c11c:
    // 0x21c11c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x21c11cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21c120: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21c120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21c124: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21c124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21c128: 0x1203002c  beq         $s0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x21C128u;
    {
        const bool branch_taken_0x21c128 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x21c128) {
            ctx->pc = 0x21C1DCu;
            goto label_21c1dc;
        }
    }
    ctx->pc = 0x21C130u;
    // 0x21c130: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21c130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21c134: 0xa20302a8  sb          $v1, 0x2A8($s0)
    ctx->pc = 0x21c134u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 3));
    // 0x21c138: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x21c138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x21c13c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c13cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c140: 0x0  nop
    ctx->pc = 0x21c140u;
    // NOP
    // 0x21c144: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x21c144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x21c148: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x21c148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x21c14c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c14cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c150: 0x0  nop
    ctx->pc = 0x21c150u;
    // NOP
    // 0x21c154: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x21c154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x21c158: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x21c158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x21c15c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c15cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c160: 0x0  nop
    ctx->pc = 0x21c160u;
    // NOP
    // 0x21c164: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x21c164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x21c168: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x21c168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x21c16c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c16cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c170: 0x0  nop
    ctx->pc = 0x21c170u;
    // NOP
    // 0x21c174: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x21c174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
    // 0x21c178: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x21c178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c17c: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x21c17cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x21c180: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x21c180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c184: 0xe6000270  swc1        $f0, 0x270($s0)
    ctx->pc = 0x21c184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
    // 0x21c188: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x21c188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c18c: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x21c18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
    // 0x21c190: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x21c190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c194: 0xe6000278  swc1        $f0, 0x278($s0)
    ctx->pc = 0x21c194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
    // 0x21c198: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x21c198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21c19c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x21c19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c1a0: 0xe6000280  swc1        $f0, 0x280($s0)
    ctx->pc = 0x21c1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
    // 0x21c1a4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x21c1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21c1a8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x21c1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c1ac: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x21c1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    // 0x21c1b0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x21c1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21c1b4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x21c1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c1b8: 0xe6000288  swc1        $f0, 0x288($s0)
    ctx->pc = 0x21c1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
    // 0x21c1bc: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x21c1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c1c0: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x21c1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
    // 0x21c1c4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x21c1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x21c1c8: 0xa203034f  sb          $v1, 0x34F($s0)
    ctx->pc = 0x21c1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 3));
    // 0x21c1cc: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x21c1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x21c1d0: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x21c1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
    // 0x21c1d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21C1D4u;
    {
        const bool branch_taken_0x21c1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c1d4) {
            ctx->pc = 0x21C1E4u;
            goto label_21c1e4;
        }
    }
    ctx->pc = 0x21C1DCu;
label_21c1dc:
    // 0x21c1dc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x21C1DCu;
    {
        const bool branch_taken_0x21c1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c1dc) {
            ctx->pc = 0x21C1E4u;
            goto label_21c1e4;
        }
    }
    ctx->pc = 0x21C1E4u;
label_21c1e4:
    // 0x21c1e4: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x21c1e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21c1e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21c1e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21c1ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21c1ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21c1f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21c1f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21c1f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21c1f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c1f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21c1f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c1fc: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x21c1fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x21c200: 0x3e00008  jr          $ra
    ctx->pc = 0x21C200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C208u;
}
