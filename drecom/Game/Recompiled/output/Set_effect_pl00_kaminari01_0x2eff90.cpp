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

// Function: Set_effect_pl00_kaminari01
// Address: 0x2eff90 - 0x2f0248
void Set_effect_pl00_kaminari01_0x2eff90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_pl00_kaminari01_0x2eff90");
#endif

    switch (ctx->pc) {
        case 0x2eff90u: goto label_2eff90;
        case 0x2eff94u: goto label_2eff94;
        case 0x2eff98u: goto label_2eff98;
        case 0x2eff9cu: goto label_2eff9c;
        case 0x2effa0u: goto label_2effa0;
        case 0x2effa4u: goto label_2effa4;
        case 0x2effa8u: goto label_2effa8;
        case 0x2effacu: goto label_2effac;
        case 0x2effb0u: goto label_2effb0;
        case 0x2effb4u: goto label_2effb4;
        case 0x2effb8u: goto label_2effb8;
        case 0x2effbcu: goto label_2effbc;
        case 0x2effc0u: goto label_2effc0;
        case 0x2effc4u: goto label_2effc4;
        case 0x2effc8u: goto label_2effc8;
        case 0x2effccu: goto label_2effcc;
        case 0x2effd0u: goto label_2effd0;
        case 0x2effd4u: goto label_2effd4;
        case 0x2effd8u: goto label_2effd8;
        case 0x2effdcu: goto label_2effdc;
        case 0x2effe0u: goto label_2effe0;
        case 0x2effe4u: goto label_2effe4;
        case 0x2effe8u: goto label_2effe8;
        case 0x2effecu: goto label_2effec;
        case 0x2efff0u: goto label_2efff0;
        case 0x2efff4u: goto label_2efff4;
        case 0x2efff8u: goto label_2efff8;
        case 0x2efffcu: goto label_2efffc;
        case 0x2f0000u: goto label_2f0000;
        case 0x2f0004u: goto label_2f0004;
        case 0x2f0008u: goto label_2f0008;
        case 0x2f000cu: goto label_2f000c;
        case 0x2f0010u: goto label_2f0010;
        case 0x2f0014u: goto label_2f0014;
        case 0x2f0018u: goto label_2f0018;
        case 0x2f001cu: goto label_2f001c;
        case 0x2f0020u: goto label_2f0020;
        case 0x2f0024u: goto label_2f0024;
        case 0x2f0028u: goto label_2f0028;
        case 0x2f002cu: goto label_2f002c;
        case 0x2f0030u: goto label_2f0030;
        case 0x2f0034u: goto label_2f0034;
        case 0x2f0038u: goto label_2f0038;
        case 0x2f003cu: goto label_2f003c;
        case 0x2f0040u: goto label_2f0040;
        case 0x2f0044u: goto label_2f0044;
        case 0x2f0048u: goto label_2f0048;
        case 0x2f004cu: goto label_2f004c;
        case 0x2f0050u: goto label_2f0050;
        case 0x2f0054u: goto label_2f0054;
        case 0x2f0058u: goto label_2f0058;
        case 0x2f005cu: goto label_2f005c;
        case 0x2f0060u: goto label_2f0060;
        case 0x2f0064u: goto label_2f0064;
        case 0x2f0068u: goto label_2f0068;
        case 0x2f006cu: goto label_2f006c;
        case 0x2f0070u: goto label_2f0070;
        case 0x2f0074u: goto label_2f0074;
        case 0x2f0078u: goto label_2f0078;
        case 0x2f007cu: goto label_2f007c;
        case 0x2f0080u: goto label_2f0080;
        case 0x2f0084u: goto label_2f0084;
        case 0x2f0088u: goto label_2f0088;
        case 0x2f008cu: goto label_2f008c;
        case 0x2f0090u: goto label_2f0090;
        case 0x2f0094u: goto label_2f0094;
        case 0x2f0098u: goto label_2f0098;
        case 0x2f009cu: goto label_2f009c;
        case 0x2f00a0u: goto label_2f00a0;
        case 0x2f00a4u: goto label_2f00a4;
        case 0x2f00a8u: goto label_2f00a8;
        case 0x2f00acu: goto label_2f00ac;
        case 0x2f00b0u: goto label_2f00b0;
        case 0x2f00b4u: goto label_2f00b4;
        case 0x2f00b8u: goto label_2f00b8;
        case 0x2f00bcu: goto label_2f00bc;
        case 0x2f00c0u: goto label_2f00c0;
        case 0x2f00c4u: goto label_2f00c4;
        case 0x2f00c8u: goto label_2f00c8;
        case 0x2f00ccu: goto label_2f00cc;
        case 0x2f00d0u: goto label_2f00d0;
        case 0x2f00d4u: goto label_2f00d4;
        case 0x2f00d8u: goto label_2f00d8;
        case 0x2f00dcu: goto label_2f00dc;
        case 0x2f00e0u: goto label_2f00e0;
        case 0x2f00e4u: goto label_2f00e4;
        case 0x2f00e8u: goto label_2f00e8;
        case 0x2f00ecu: goto label_2f00ec;
        case 0x2f00f0u: goto label_2f00f0;
        case 0x2f00f4u: goto label_2f00f4;
        case 0x2f00f8u: goto label_2f00f8;
        case 0x2f00fcu: goto label_2f00fc;
        case 0x2f0100u: goto label_2f0100;
        case 0x2f0104u: goto label_2f0104;
        case 0x2f0108u: goto label_2f0108;
        case 0x2f010cu: goto label_2f010c;
        case 0x2f0110u: goto label_2f0110;
        case 0x2f0114u: goto label_2f0114;
        case 0x2f0118u: goto label_2f0118;
        case 0x2f011cu: goto label_2f011c;
        case 0x2f0120u: goto label_2f0120;
        case 0x2f0124u: goto label_2f0124;
        case 0x2f0128u: goto label_2f0128;
        case 0x2f012cu: goto label_2f012c;
        case 0x2f0130u: goto label_2f0130;
        case 0x2f0134u: goto label_2f0134;
        case 0x2f0138u: goto label_2f0138;
        case 0x2f013cu: goto label_2f013c;
        case 0x2f0140u: goto label_2f0140;
        case 0x2f0144u: goto label_2f0144;
        case 0x2f0148u: goto label_2f0148;
        case 0x2f014cu: goto label_2f014c;
        case 0x2f0150u: goto label_2f0150;
        case 0x2f0154u: goto label_2f0154;
        case 0x2f0158u: goto label_2f0158;
        case 0x2f015cu: goto label_2f015c;
        case 0x2f0160u: goto label_2f0160;
        case 0x2f0164u: goto label_2f0164;
        case 0x2f0168u: goto label_2f0168;
        case 0x2f016cu: goto label_2f016c;
        case 0x2f0170u: goto label_2f0170;
        case 0x2f0174u: goto label_2f0174;
        case 0x2f0178u: goto label_2f0178;
        case 0x2f017cu: goto label_2f017c;
        case 0x2f0180u: goto label_2f0180;
        case 0x2f0184u: goto label_2f0184;
        case 0x2f0188u: goto label_2f0188;
        case 0x2f018cu: goto label_2f018c;
        case 0x2f0190u: goto label_2f0190;
        case 0x2f0194u: goto label_2f0194;
        case 0x2f0198u: goto label_2f0198;
        case 0x2f019cu: goto label_2f019c;
        case 0x2f01a0u: goto label_2f01a0;
        case 0x2f01a4u: goto label_2f01a4;
        case 0x2f01a8u: goto label_2f01a8;
        case 0x2f01acu: goto label_2f01ac;
        case 0x2f01b0u: goto label_2f01b0;
        case 0x2f01b4u: goto label_2f01b4;
        case 0x2f01b8u: goto label_2f01b8;
        case 0x2f01bcu: goto label_2f01bc;
        case 0x2f01c0u: goto label_2f01c0;
        case 0x2f01c4u: goto label_2f01c4;
        case 0x2f01c8u: goto label_2f01c8;
        case 0x2f01ccu: goto label_2f01cc;
        case 0x2f01d0u: goto label_2f01d0;
        case 0x2f01d4u: goto label_2f01d4;
        case 0x2f01d8u: goto label_2f01d8;
        case 0x2f01dcu: goto label_2f01dc;
        case 0x2f01e0u: goto label_2f01e0;
        case 0x2f01e4u: goto label_2f01e4;
        case 0x2f01e8u: goto label_2f01e8;
        case 0x2f01ecu: goto label_2f01ec;
        case 0x2f01f0u: goto label_2f01f0;
        case 0x2f01f4u: goto label_2f01f4;
        case 0x2f01f8u: goto label_2f01f8;
        case 0x2f01fcu: goto label_2f01fc;
        case 0x2f0200u: goto label_2f0200;
        case 0x2f0204u: goto label_2f0204;
        case 0x2f0208u: goto label_2f0208;
        case 0x2f020cu: goto label_2f020c;
        case 0x2f0210u: goto label_2f0210;
        case 0x2f0214u: goto label_2f0214;
        case 0x2f0218u: goto label_2f0218;
        case 0x2f021cu: goto label_2f021c;
        case 0x2f0220u: goto label_2f0220;
        case 0x2f0224u: goto label_2f0224;
        case 0x2f0228u: goto label_2f0228;
        case 0x2f022cu: goto label_2f022c;
        case 0x2f0230u: goto label_2f0230;
        case 0x2f0234u: goto label_2f0234;
        case 0x2f0238u: goto label_2f0238;
        case 0x2f023cu: goto label_2f023c;
        case 0x2f0240u: goto label_2f0240;
        case 0x2f0244u: goto label_2f0244;
        default: break;
    }

    ctx->pc = 0x2eff90u;

label_2eff90:
    // 0x2eff90: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2eff90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2eff94:
    // 0x2eff94: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x2eff94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
label_2eff98:
    // 0x2eff98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2eff98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2eff9c:
    // 0x2eff9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2eff9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2effa0:
    // 0x2effa0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2effa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2effa4:
    // 0x2effa4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2effa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2effa8:
    // 0x2effa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2effa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2effac:
    // 0x2effac: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x2effacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
label_2effb0:
    // 0x2effb0: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x2effb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
label_2effb4:
    // 0x2effb4: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x2effb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
label_2effb8:
    // 0x2effb8: 0xe7ac0080  swc1        $f12, 0x80($sp)
    ctx->pc = 0x2effb8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_2effbc:
    // 0x2effbc: 0xe7ad0088  swc1        $f13, 0x88($sp)
    ctx->pc = 0x2effbcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_2effc0:
    // 0x2effc0: 0xafa70090  sw          $a3, 0x90($sp)
    ctx->pc = 0x2effc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 7));
label_2effc4:
    // 0x2effc4: 0xafa80098  sw          $t0, 0x98($sp)
    ctx->pc = 0x2effc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 8));
label_2effc8:
    // 0x2effc8: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2effc8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2effcc:
    // 0x2effcc: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2effccu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2effd0:
    // 0x2effd0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2effd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2effd4:
    // 0x2effd4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2effd8:
    if (ctx->pc == 0x2EFFD8u) {
        ctx->pc = 0x2EFFDCu;
        goto label_2effdc;
    }
    ctx->pc = 0x2EFFD4u;
    {
        const bool branch_taken_0x2effd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2effd4) {
            ctx->pc = 0x2EFFE8u;
            goto label_2effe8;
        }
    }
    ctx->pc = 0x2EFFDCu;
label_2effdc:
    // 0x2effdc: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2effdcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2effe0:
    // 0x2effe0: 0x10000004  b           . + 4 + (0x4 << 2)
label_2effe4:
    if (ctx->pc == 0x2EFFE4u) {
        ctx->pc = 0x2EFFE8u;
        goto label_2effe8;
    }
    ctx->pc = 0x2EFFE0u;
    {
        const bool branch_taken_0x2effe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2effe0) {
            ctx->pc = 0x2EFFF4u;
            goto label_2efff4;
        }
    }
    ctx->pc = 0x2EFFE8u;
label_2effe8:
    // 0x2effe8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2effe8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2effec:
    // 0x2effec: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2effecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2efff0:
    // 0x2efff0: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x2efff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2efff4:
    // 0x2efff4: 0x2414000a  addiu       $s4, $zero, 0xA
    ctx->pc = 0x2efff4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2efff8:
    // 0x2efff8: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x2efff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_2efffc:
    // 0x2efffc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2efffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2f0000:
    // 0x2f0000: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2f0000u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_2f0004:
    // 0x2f0004: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x2f0004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_2f0008:
    // 0x2f0008: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f0008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f000c:
    // 0x2f000c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f000cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2f0010:
    // 0x2f0010: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2f0010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_2f0014:
    // 0x2f0014: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f0014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f0018:
    // 0x2f0018: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2f0018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2f001c:
    // 0x2f001c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f001cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2f0020:
    // 0x2f0020: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2f0020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_2f0024:
    // 0x2f0024: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f0024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f0028:
    // 0x2f0028: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f0028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2f002c:
    // 0x2f002c: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x2f002cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
label_2f0030:
    // 0x2f0030: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x2f0030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2f0034:
    // 0x2f0034: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x2f0034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_2f0038:
    // 0x2f0038: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x2f0038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_2f003c:
    // 0x2f003c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2f003cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2f0040:
    // 0x2f0040: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f0040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f0044:
    // 0x2f0044: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f0044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2f0048:
    // 0x2f0048: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f0048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f004c:
    // 0x2f004c: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x2f004cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f0050:
    // 0x2f0050: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2f0050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2f0054:
    // 0x2f0054: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f0054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2f0058:
    // 0x2f0058: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f0058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2f005c:
    // 0x2f005c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f005cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2f0060:
    // 0x2f0060: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f0060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2f0064:
    // 0x2f0064: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f0064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2f0068:
    // 0x2f0068: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f0068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2f006c:
    // 0x2f006c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2f006cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_2f0070:
    // 0x2f0070: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2f0070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2f0074:
    // 0x2f0074: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f0074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2f0078:
    // 0x2f0078: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f0078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2f007c:
    // 0x2f007c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f007cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2f0080:
    // 0x2f0080: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f0080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2f0084:
    // 0x2f0084: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f0084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2f0088:
    // 0x2f0088: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f0088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2f008c:
    // 0x2f008c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2f008cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2f0090:
    // 0x2f0090: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2f0090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2f0094:
    // 0x2f0094: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f0094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2f0098:
    // 0x2f0098: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f0098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2f009c:
    // 0x2f009c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f009cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2f00a0:
    // 0x2f00a0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f00a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2f00a4:
    // 0x2f00a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f00a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2f00a8:
    // 0x2f00a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f00a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2f00ac:
    // 0x2f00ac: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2f00acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
label_2f00b0:
    // 0x2f00b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2f00b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2f00b4:
    // 0x2f00b4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f00b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2f00b8:
    // 0x2f00b8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f00b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2f00bc:
    // 0x2f00bc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f00bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2f00c0:
    // 0x2f00c0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f00c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2f00c4:
    // 0x2f00c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f00c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2f00c8:
    // 0x2f00c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f00c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2f00cc:
    // 0x2f00cc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2f00ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_2f00d0:
    // 0x2f00d0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2f00d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2f00d4:
    // 0x2f00d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f00d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f00d8:
    // 0x2f00d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f00d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f00dc:
    // 0x2f00dc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f00dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2f00e0:
    // 0x2f00e0: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x2f00e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
label_2f00e4:
    // 0x2f00e4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2f00e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2f00e8:
    // 0x2f00e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f00e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f00ec:
    // 0x2f00ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f00ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f00f0:
    // 0x2f00f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f00f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2f00f4:
    // 0x2f00f4: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2f00f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_2f00f8:
    // 0x2f00f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f00f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f00fc:
    // 0x2f00fc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2f00fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2f0100:
    // 0x2f0100: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f0100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f0104:
    // 0x2f0104: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f0104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f0108:
    // 0x2f0108: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f0108u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2f010c:
    // 0x2f010c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f010cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2f0110:
    // 0x2f0110: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2f0110u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_2f0114:
    // 0x2f0114: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2f0114u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_2f0118:
    // 0x2f0118: 0xc0634c8  jal         func_18D320
label_2f011c:
    if (ctx->pc == 0x2F011Cu) {
        ctx->pc = 0x2F0120u;
        goto label_2f0120;
    }
    ctx->pc = 0x2F0118u;
    SET_GPR_U32(ctx, 31, 0x2F0120u);
    ctx->pc = 0x18D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D320u, 0x2F0118u, 0x2F0120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0120u;
label_2f0120:
    // 0x2f0120: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2f0120u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2f0124:
    // 0x2f0124: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f0124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_2f0128:
    // 0x2f0128: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f0128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
label_2f012c:
    // 0x2f012c: 0x12030029  beq         $s0, $v1, . + 4 + (0x29 << 2)
label_2f0130:
    if (ctx->pc == 0x2F0130u) {
        ctx->pc = 0x2F0134u;
        goto label_2f0134;
    }
    ctx->pc = 0x2F012Cu;
    {
        const bool branch_taken_0x2f012c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f012c) {
            ctx->pc = 0x2F01D4u;
            goto label_2f01d4;
        }
    }
    ctx->pc = 0x2F0134u;
label_2f0134:
    // 0x2f0134: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x2f0134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2f0138:
    // 0x2f0138: 0xa202034d  sb          $v0, 0x34D($s0)
    ctx->pc = 0x2f0138u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 845), (uint8_t)GPR_U32(ctx, 2));
label_2f013c:
    // 0x2f013c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f013cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f0140:
    // 0x2f0140: 0xa20202a8  sb          $v0, 0x2A8($s0)
    ctx->pc = 0x2f0140u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 2));
label_2f0144:
    // 0x2f0144: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f0144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2f0148:
    // 0x2f0148: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f014c:
    // 0x2f014c: 0x0  nop
    ctx->pc = 0x2f014cu;
    // NOP
label_2f0150:
    // 0x2f0150: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2f0150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
label_2f0154:
    // 0x2f0154: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f0154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2f0158:
    // 0x2f0158: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f015c:
    // 0x2f015c: 0x0  nop
    ctx->pc = 0x2f015cu;
    // NOP
label_2f0160:
    // 0x2f0160: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2f0160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
label_2f0164:
    // 0x2f0164: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f0164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2f0168:
    // 0x2f0168: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f016c:
    // 0x2f016c: 0x0  nop
    ctx->pc = 0x2f016cu;
    // NOP
label_2f0170:
    // 0x2f0170: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2f0170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
label_2f0174:
    // 0x2f0174: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f0174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2f0178:
    // 0x2f0178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f017c:
    // 0x2f017c: 0x0  nop
    ctx->pc = 0x2f017cu;
    // NOP
label_2f0180:
    // 0x2f0180: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x2f0180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
label_2f0184:
    // 0x2f0184: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x2f0184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_2f0188:
    // 0x2f0188: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2f0188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_2f018c:
    // 0x2f018c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f018cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f0190:
    // 0x2f0190: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2f0190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f0194:
    // 0x2f0194: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f0194u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f0198:
    // 0x2f0198: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x2f0198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
label_2f019c:
    // 0x2f019c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2f019cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_2f01a0:
    // 0x2f01a0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2f01a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2f01a4:
    // 0x2f01a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f01a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f01a8:
    // 0x2f01a8: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2f01a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f01ac:
    // 0x2f01ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f01acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f01b0:
    // 0x2f01b0: 0xe600033c  swc1        $f0, 0x33C($s0)
    ctx->pc = 0x2f01b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 828), bits); }
label_2f01b4:
    // 0x2f01b4: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2f01b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f01b8:
    // 0x2f01b8: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x2f01b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
label_2f01bc:
    // 0x2f01bc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2f01bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2f01c0:
    // 0x2f01c0: 0xa202034f  sb          $v0, 0x34F($s0)
    ctx->pc = 0x2f01c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 2));
label_2f01c4:
    // 0x2f01c4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2f01c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2f01c8:
    // 0x2f01c8: 0xae020364  sw          $v0, 0x364($s0)
    ctx->pc = 0x2f01c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 2));
label_2f01cc:
    // 0x2f01cc: 0x10000003  b           . + 4 + (0x3 << 2)
label_2f01d0:
    if (ctx->pc == 0x2F01D0u) {
        ctx->pc = 0x2F01D4u;
        goto label_2f01d4;
    }
    ctx->pc = 0x2F01CCu;
    {
        const bool branch_taken_0x2f01cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f01cc) {
            ctx->pc = 0x2F01DCu;
            goto label_2f01dc;
        }
    }
    ctx->pc = 0x2F01D4u;
label_2f01d4:
    // 0x2f01d4: 0x10000013  b           . + 4 + (0x13 << 2)
label_2f01d8:
    if (ctx->pc == 0x2F01D8u) {
        ctx->pc = 0x2F01DCu;
        goto label_2f01dc;
    }
    ctx->pc = 0x2F01D4u;
    {
        const bool branch_taken_0x2f01d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f01d4) {
            ctx->pc = 0x2F0224u;
            goto label_2f0224;
        }
    }
    ctx->pc = 0x2F01DCu;
label_2f01dc:
    // 0x2f01dc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2f01dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2f01e0:
    // 0x2f01e0: 0x8e020350  lw          $v0, 0x350($s0)
    ctx->pc = 0x2f01e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
label_2f01e4:
    // 0x2f01e4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2f01e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2f01e8:
    // 0x2f01e8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2f01e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_2f01ec:
    // 0x2f01ec: 0x24426e10  addiu       $v0, $v0, 0x6E10
    ctx->pc = 0x2f01ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28176));
label_2f01f0:
    // 0x2f01f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f01f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f01f4:
    // 0x2f01f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f01f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f01f8:
    // 0x2f01f8: 0x40f809  jalr        $v0
label_2f01fc:
    if (ctx->pc == 0x2F01FCu) {
        ctx->pc = 0x2F0200u;
        goto label_2f0200;
    }
    ctx->pc = 0x2F01F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F0200u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F01F8u, 0x2F0200u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0200u;
label_2f0200:
    // 0x2f0200: 0x8e030ab8  lw          $v1, 0xAB8($s0)
    ctx->pc = 0x2f0200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2744)));
label_2f0204:
    // 0x2f0204: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f0204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2f0208:
    // 0x2f0208: 0xae030ab8  sw          $v1, 0xAB8($s0)
    ctx->pc = 0x2f0208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2744), GPR_U32(ctx, 3));
label_2f020c:
    // 0x2f020c: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x2f020cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
label_2f0210:
    // 0x2f0210: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2f0210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_2f0214:
    // 0x2f0214: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f0214u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f0218:
    // 0x2f0218: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2f0218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f021c:
    // 0x2f021c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f021cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f0220:
    // 0x2f0220: 0xe6000ac8  swc1        $f0, 0xAC8($s0)
    ctx->pc = 0x2f0220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2760), bits); }
label_2f0224:
    // 0x2f0224: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x2f0224u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f0228:
    // 0x2f0228: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f0228u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f022c:
    // 0x2f022c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f022cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f0230:
    // 0x2f0230: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f0230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f0234:
    // 0x2f0234: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f0234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f0238:
    // 0x2f0238: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f0238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f023c:
    // 0x2f023c: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2f023cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2f0240:
    // 0x2f0240: 0x3e00008  jr          $ra
label_2f0244:
    if (ctx->pc == 0x2F0244u) {
        ctx->pc = 0x2F0248u;
        goto label_fallthrough_0x2f0240;
    }
    ctx->pc = 0x2F0240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f0240:
    ctx->pc = 0x2F0248u;
}
