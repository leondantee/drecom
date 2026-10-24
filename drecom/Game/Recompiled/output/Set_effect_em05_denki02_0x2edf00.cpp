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

// Function: Set_effect_em05_denki02
// Address: 0x2edf00 - 0x2ee218
void Set_effect_em05_denki02_0x2edf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_em05_denki02_0x2edf00");
#endif

    switch (ctx->pc) {
        case 0x2edf00u: goto label_2edf00;
        case 0x2edf04u: goto label_2edf04;
        case 0x2edf08u: goto label_2edf08;
        case 0x2edf0cu: goto label_2edf0c;
        case 0x2edf10u: goto label_2edf10;
        case 0x2edf14u: goto label_2edf14;
        case 0x2edf18u: goto label_2edf18;
        case 0x2edf1cu: goto label_2edf1c;
        case 0x2edf20u: goto label_2edf20;
        case 0x2edf24u: goto label_2edf24;
        case 0x2edf28u: goto label_2edf28;
        case 0x2edf2cu: goto label_2edf2c;
        case 0x2edf30u: goto label_2edf30;
        case 0x2edf34u: goto label_2edf34;
        case 0x2edf38u: goto label_2edf38;
        case 0x2edf3cu: goto label_2edf3c;
        case 0x2edf40u: goto label_2edf40;
        case 0x2edf44u: goto label_2edf44;
        case 0x2edf48u: goto label_2edf48;
        case 0x2edf4cu: goto label_2edf4c;
        case 0x2edf50u: goto label_2edf50;
        case 0x2edf54u: goto label_2edf54;
        case 0x2edf58u: goto label_2edf58;
        case 0x2edf5cu: goto label_2edf5c;
        case 0x2edf60u: goto label_2edf60;
        case 0x2edf64u: goto label_2edf64;
        case 0x2edf68u: goto label_2edf68;
        case 0x2edf6cu: goto label_2edf6c;
        case 0x2edf70u: goto label_2edf70;
        case 0x2edf74u: goto label_2edf74;
        case 0x2edf78u: goto label_2edf78;
        case 0x2edf7cu: goto label_2edf7c;
        case 0x2edf80u: goto label_2edf80;
        case 0x2edf84u: goto label_2edf84;
        case 0x2edf88u: goto label_2edf88;
        case 0x2edf8cu: goto label_2edf8c;
        case 0x2edf90u: goto label_2edf90;
        case 0x2edf94u: goto label_2edf94;
        case 0x2edf98u: goto label_2edf98;
        case 0x2edf9cu: goto label_2edf9c;
        case 0x2edfa0u: goto label_2edfa0;
        case 0x2edfa4u: goto label_2edfa4;
        case 0x2edfa8u: goto label_2edfa8;
        case 0x2edfacu: goto label_2edfac;
        case 0x2edfb0u: goto label_2edfb0;
        case 0x2edfb4u: goto label_2edfb4;
        case 0x2edfb8u: goto label_2edfb8;
        case 0x2edfbcu: goto label_2edfbc;
        case 0x2edfc0u: goto label_2edfc0;
        case 0x2edfc4u: goto label_2edfc4;
        case 0x2edfc8u: goto label_2edfc8;
        case 0x2edfccu: goto label_2edfcc;
        case 0x2edfd0u: goto label_2edfd0;
        case 0x2edfd4u: goto label_2edfd4;
        case 0x2edfd8u: goto label_2edfd8;
        case 0x2edfdcu: goto label_2edfdc;
        case 0x2edfe0u: goto label_2edfe0;
        case 0x2edfe4u: goto label_2edfe4;
        case 0x2edfe8u: goto label_2edfe8;
        case 0x2edfecu: goto label_2edfec;
        case 0x2edff0u: goto label_2edff0;
        case 0x2edff4u: goto label_2edff4;
        case 0x2edff8u: goto label_2edff8;
        case 0x2edffcu: goto label_2edffc;
        case 0x2ee000u: goto label_2ee000;
        case 0x2ee004u: goto label_2ee004;
        case 0x2ee008u: goto label_2ee008;
        case 0x2ee00cu: goto label_2ee00c;
        case 0x2ee010u: goto label_2ee010;
        case 0x2ee014u: goto label_2ee014;
        case 0x2ee018u: goto label_2ee018;
        case 0x2ee01cu: goto label_2ee01c;
        case 0x2ee020u: goto label_2ee020;
        case 0x2ee024u: goto label_2ee024;
        case 0x2ee028u: goto label_2ee028;
        case 0x2ee02cu: goto label_2ee02c;
        case 0x2ee030u: goto label_2ee030;
        case 0x2ee034u: goto label_2ee034;
        case 0x2ee038u: goto label_2ee038;
        case 0x2ee03cu: goto label_2ee03c;
        case 0x2ee040u: goto label_2ee040;
        case 0x2ee044u: goto label_2ee044;
        case 0x2ee048u: goto label_2ee048;
        case 0x2ee04cu: goto label_2ee04c;
        case 0x2ee050u: goto label_2ee050;
        case 0x2ee054u: goto label_2ee054;
        case 0x2ee058u: goto label_2ee058;
        case 0x2ee05cu: goto label_2ee05c;
        case 0x2ee060u: goto label_2ee060;
        case 0x2ee064u: goto label_2ee064;
        case 0x2ee068u: goto label_2ee068;
        case 0x2ee06cu: goto label_2ee06c;
        case 0x2ee070u: goto label_2ee070;
        case 0x2ee074u: goto label_2ee074;
        case 0x2ee078u: goto label_2ee078;
        case 0x2ee07cu: goto label_2ee07c;
        case 0x2ee080u: goto label_2ee080;
        case 0x2ee084u: goto label_2ee084;
        case 0x2ee088u: goto label_2ee088;
        case 0x2ee08cu: goto label_2ee08c;
        case 0x2ee090u: goto label_2ee090;
        case 0x2ee094u: goto label_2ee094;
        case 0x2ee098u: goto label_2ee098;
        case 0x2ee09cu: goto label_2ee09c;
        case 0x2ee0a0u: goto label_2ee0a0;
        case 0x2ee0a4u: goto label_2ee0a4;
        case 0x2ee0a8u: goto label_2ee0a8;
        case 0x2ee0acu: goto label_2ee0ac;
        case 0x2ee0b0u: goto label_2ee0b0;
        case 0x2ee0b4u: goto label_2ee0b4;
        case 0x2ee0b8u: goto label_2ee0b8;
        case 0x2ee0bcu: goto label_2ee0bc;
        case 0x2ee0c0u: goto label_2ee0c0;
        case 0x2ee0c4u: goto label_2ee0c4;
        case 0x2ee0c8u: goto label_2ee0c8;
        case 0x2ee0ccu: goto label_2ee0cc;
        case 0x2ee0d0u: goto label_2ee0d0;
        case 0x2ee0d4u: goto label_2ee0d4;
        case 0x2ee0d8u: goto label_2ee0d8;
        case 0x2ee0dcu: goto label_2ee0dc;
        case 0x2ee0e0u: goto label_2ee0e0;
        case 0x2ee0e4u: goto label_2ee0e4;
        case 0x2ee0e8u: goto label_2ee0e8;
        case 0x2ee0ecu: goto label_2ee0ec;
        case 0x2ee0f0u: goto label_2ee0f0;
        case 0x2ee0f4u: goto label_2ee0f4;
        case 0x2ee0f8u: goto label_2ee0f8;
        case 0x2ee0fcu: goto label_2ee0fc;
        case 0x2ee100u: goto label_2ee100;
        case 0x2ee104u: goto label_2ee104;
        case 0x2ee108u: goto label_2ee108;
        case 0x2ee10cu: goto label_2ee10c;
        case 0x2ee110u: goto label_2ee110;
        case 0x2ee114u: goto label_2ee114;
        case 0x2ee118u: goto label_2ee118;
        case 0x2ee11cu: goto label_2ee11c;
        case 0x2ee120u: goto label_2ee120;
        case 0x2ee124u: goto label_2ee124;
        case 0x2ee128u: goto label_2ee128;
        case 0x2ee12cu: goto label_2ee12c;
        case 0x2ee130u: goto label_2ee130;
        case 0x2ee134u: goto label_2ee134;
        case 0x2ee138u: goto label_2ee138;
        case 0x2ee13cu: goto label_2ee13c;
        case 0x2ee140u: goto label_2ee140;
        case 0x2ee144u: goto label_2ee144;
        case 0x2ee148u: goto label_2ee148;
        case 0x2ee14cu: goto label_2ee14c;
        case 0x2ee150u: goto label_2ee150;
        case 0x2ee154u: goto label_2ee154;
        case 0x2ee158u: goto label_2ee158;
        case 0x2ee15cu: goto label_2ee15c;
        case 0x2ee160u: goto label_2ee160;
        case 0x2ee164u: goto label_2ee164;
        case 0x2ee168u: goto label_2ee168;
        case 0x2ee16cu: goto label_2ee16c;
        case 0x2ee170u: goto label_2ee170;
        case 0x2ee174u: goto label_2ee174;
        case 0x2ee178u: goto label_2ee178;
        case 0x2ee17cu: goto label_2ee17c;
        case 0x2ee180u: goto label_2ee180;
        case 0x2ee184u: goto label_2ee184;
        case 0x2ee188u: goto label_2ee188;
        case 0x2ee18cu: goto label_2ee18c;
        case 0x2ee190u: goto label_2ee190;
        case 0x2ee194u: goto label_2ee194;
        case 0x2ee198u: goto label_2ee198;
        case 0x2ee19cu: goto label_2ee19c;
        case 0x2ee1a0u: goto label_2ee1a0;
        case 0x2ee1a4u: goto label_2ee1a4;
        case 0x2ee1a8u: goto label_2ee1a8;
        case 0x2ee1acu: goto label_2ee1ac;
        case 0x2ee1b0u: goto label_2ee1b0;
        case 0x2ee1b4u: goto label_2ee1b4;
        case 0x2ee1b8u: goto label_2ee1b8;
        case 0x2ee1bcu: goto label_2ee1bc;
        case 0x2ee1c0u: goto label_2ee1c0;
        case 0x2ee1c4u: goto label_2ee1c4;
        case 0x2ee1c8u: goto label_2ee1c8;
        case 0x2ee1ccu: goto label_2ee1cc;
        case 0x2ee1d0u: goto label_2ee1d0;
        case 0x2ee1d4u: goto label_2ee1d4;
        case 0x2ee1d8u: goto label_2ee1d8;
        case 0x2ee1dcu: goto label_2ee1dc;
        case 0x2ee1e0u: goto label_2ee1e0;
        case 0x2ee1e4u: goto label_2ee1e4;
        case 0x2ee1e8u: goto label_2ee1e8;
        case 0x2ee1ecu: goto label_2ee1ec;
        case 0x2ee1f0u: goto label_2ee1f0;
        case 0x2ee1f4u: goto label_2ee1f4;
        case 0x2ee1f8u: goto label_2ee1f8;
        case 0x2ee1fcu: goto label_2ee1fc;
        case 0x2ee200u: goto label_2ee200;
        case 0x2ee204u: goto label_2ee204;
        case 0x2ee208u: goto label_2ee208;
        case 0x2ee20cu: goto label_2ee20c;
        case 0x2ee210u: goto label_2ee210;
        case 0x2ee214u: goto label_2ee214;
        default: break;
    }

    ctx->pc = 0x2edf00u;

label_2edf00:
    // 0x2edf00: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2edf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2edf04:
    // 0x2edf04: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x2edf04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
label_2edf08:
    // 0x2edf08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2edf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2edf0c:
    // 0x2edf0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2edf0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2edf10:
    // 0x2edf10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2edf10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2edf14:
    // 0x2edf14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2edf14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2edf18:
    // 0x2edf18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2edf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2edf1c:
    // 0x2edf1c: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x2edf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
label_2edf20:
    // 0x2edf20: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x2edf20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
label_2edf24:
    // 0x2edf24: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x2edf24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
label_2edf28:
    // 0x2edf28: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x2edf28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
label_2edf2c:
    // 0x2edf2c: 0xafa80088  sw          $t0, 0x88($sp)
    ctx->pc = 0x2edf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 8));
label_2edf30:
    // 0x2edf30: 0xafa90090  sw          $t1, 0x90($sp)
    ctx->pc = 0x2edf30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 9));
label_2edf34:
    // 0x2edf34: 0xe7ac0098  swc1        $f12, 0x98($sp)
    ctx->pc = 0x2edf34u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_2edf38:
    // 0x2edf38: 0xe7ad00a0  swc1        $f13, 0xA0($sp)
    ctx->pc = 0x2edf38u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2edf3c:
    // 0x2edf3c: 0xe7ae00a8  swc1        $f14, 0xA8($sp)
    ctx->pc = 0x2edf3cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2edf40:
    // 0x2edf40: 0xafaa00b0  sw          $t2, 0xB0($sp)
    ctx->pc = 0x2edf40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 10));
label_2edf44:
    // 0x2edf44: 0xa3ab00b8  sb          $t3, 0xB8($sp)
    ctx->pc = 0x2edf44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 184), (uint8_t)GPR_U32(ctx, 11));
label_2edf48:
    // 0x2edf48: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2edf48u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2edf4c:
    // 0x2edf4c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2edf4cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2edf50:
    // 0x2edf50: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2edf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2edf54:
    // 0x2edf54: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2edf58:
    if (ctx->pc == 0x2EDF58u) {
        ctx->pc = 0x2EDF5Cu;
        goto label_2edf5c;
    }
    ctx->pc = 0x2EDF54u;
    {
        const bool branch_taken_0x2edf54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2edf54) {
            ctx->pc = 0x2EDF84u;
            goto label_2edf84;
        }
    }
    ctx->pc = 0x2EDF5Cu;
label_2edf5c:
    // 0x2edf5c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2edf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2edf60:
    // 0x2edf60: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2edf64:
    if (ctx->pc == 0x2EDF64u) {
        ctx->pc = 0x2EDF68u;
        goto label_2edf68;
    }
    ctx->pc = 0x2EDF60u;
    {
        const bool branch_taken_0x2edf60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2edf60) {
            ctx->pc = 0x2EDF74u;
            goto label_2edf74;
        }
    }
    ctx->pc = 0x2EDF68u;
label_2edf68:
    // 0x2edf68: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2edf68u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2edf6c:
    // 0x2edf6c: 0x1000000e  b           . + 4 + (0xE << 2)
label_2edf70:
    if (ctx->pc == 0x2EDF70u) {
        ctx->pc = 0x2EDF74u;
        goto label_2edf74;
    }
    ctx->pc = 0x2EDF6Cu;
    {
        const bool branch_taken_0x2edf6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edf6c) {
            ctx->pc = 0x2EDFA8u;
            goto label_2edfa8;
        }
    }
    ctx->pc = 0x2EDF74u;
label_2edf74:
    // 0x2edf74: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2edf74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2edf78:
    // 0x2edf78: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2edf78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2edf7c:
    // 0x2edf7c: 0x1000000a  b           . + 4 + (0xA << 2)
label_2edf80:
    if (ctx->pc == 0x2EDF80u) {
        ctx->pc = 0x2EDF84u;
        goto label_2edf84;
    }
    ctx->pc = 0x2EDF7Cu;
    {
        const bool branch_taken_0x2edf7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edf7c) {
            ctx->pc = 0x2EDFA8u;
            goto label_2edfa8;
        }
    }
    ctx->pc = 0x2EDF84u;
label_2edf84:
    // 0x2edf84: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2edf84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2edf88:
    // 0x2edf88: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2edf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2edf8c:
    // 0x2edf8c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2edf90:
    if (ctx->pc == 0x2EDF90u) {
        ctx->pc = 0x2EDF94u;
        goto label_2edf94;
    }
    ctx->pc = 0x2EDF8Cu;
    {
        const bool branch_taken_0x2edf8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2edf8c) {
            ctx->pc = 0x2EDFA0u;
            goto label_2edfa0;
        }
    }
    ctx->pc = 0x2EDF94u;
label_2edf94:
    // 0x2edf94: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2edf94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2edf98:
    // 0x2edf98: 0x10000003  b           . + 4 + (0x3 << 2)
label_2edf9c:
    if (ctx->pc == 0x2EDF9Cu) {
        ctx->pc = 0x2EDFA0u;
        goto label_2edfa0;
    }
    ctx->pc = 0x2EDF98u;
    {
        const bool branch_taken_0x2edf98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edf98) {
            ctx->pc = 0x2EDFA8u;
            goto label_2edfa8;
        }
    }
    ctx->pc = 0x2EDFA0u;
label_2edfa0:
    // 0x2edfa0: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x2edfa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2edfa4:
    // 0x2edfa4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2edfa4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2edfa8:
    // 0x2edfa8: 0x93a200b8  lbu         $v0, 0xB8($sp)
    ctx->pc = 0x2edfa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 184)));
label_2edfac:
    // 0x2edfac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2edfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2edfb0:
    // 0x2edfb0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2edfb4:
    if (ctx->pc == 0x2EDFB4u) {
        ctx->pc = 0x2EDFB8u;
        goto label_2edfb8;
    }
    ctx->pc = 0x2EDFB0u;
    {
        const bool branch_taken_0x2edfb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2edfb0) {
            ctx->pc = 0x2EDFC4u;
            goto label_2edfc4;
        }
    }
    ctx->pc = 0x2EDFB8u;
label_2edfb8:
    // 0x2edfb8: 0x24140009  addiu       $s4, $zero, 0x9
    ctx->pc = 0x2edfb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2edfbc:
    // 0x2edfbc: 0x10000002  b           . + 4 + (0x2 << 2)
label_2edfc0:
    if (ctx->pc == 0x2EDFC0u) {
        ctx->pc = 0x2EDFC4u;
        goto label_2edfc4;
    }
    ctx->pc = 0x2EDFBCu;
    {
        const bool branch_taken_0x2edfbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edfbc) {
            ctx->pc = 0x2EDFC8u;
            goto label_2edfc8;
        }
    }
    ctx->pc = 0x2EDFC4u;
label_2edfc4:
    // 0x2edfc4: 0x24140009  addiu       $s4, $zero, 0x9
    ctx->pc = 0x2edfc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2edfc8:
    // 0x2edfc8: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x2edfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_2edfcc:
    // 0x2edfcc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2edfccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2edfd0:
    // 0x2edfd0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2edfd0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_2edfd4:
    // 0x2edfd4: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x2edfd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_2edfd8:
    // 0x2edfd8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2edfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2edfdc:
    // 0x2edfdc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2edfdcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2edfe0:
    // 0x2edfe0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2edfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_2edfe4:
    // 0x2edfe4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2edfe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2edfe8:
    // 0x2edfe8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2edfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2edfec:
    // 0x2edfec: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2edfecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_2edff0:
    // 0x2edff0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2edff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2edff4:
    // 0x2edff4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2edff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2edff8:
    // 0x2edff8: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x2edff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
label_2edffc:
    // 0x2edffc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x2edffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2ee000:
    // 0x2ee000: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x2ee000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_2ee004:
    // 0x2ee004: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x2ee004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_2ee008:
    // 0x2ee008: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2ee008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2ee00c:
    // 0x2ee00c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ee00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ee010:
    // 0x2ee010: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2ee010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2ee014:
    // 0x2ee014: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ee014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ee018:
    // 0x2ee018: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x2ee018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ee01c:
    // 0x2ee01c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2ee01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2ee020:
    // 0x2ee020: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ee020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2ee024:
    // 0x2ee024: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ee024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2ee028:
    // 0x2ee028: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ee028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2ee02c:
    // 0x2ee02c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ee02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2ee030:
    // 0x2ee030: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ee030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2ee034:
    // 0x2ee034: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ee034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2ee038:
    // 0x2ee038: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2ee038u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_2ee03c:
    // 0x2ee03c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2ee03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2ee040:
    // 0x2ee040: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ee040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2ee044:
    // 0x2ee044: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ee044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2ee048:
    // 0x2ee048: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ee048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2ee04c:
    // 0x2ee04c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ee04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2ee050:
    // 0x2ee050: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ee050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2ee054:
    // 0x2ee054: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ee054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2ee058:
    // 0x2ee058: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2ee058u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2ee05c:
    // 0x2ee05c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2ee05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2ee060:
    // 0x2ee060: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ee060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2ee064:
    // 0x2ee064: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ee064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2ee068:
    // 0x2ee068: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ee068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2ee06c:
    // 0x2ee06c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ee06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2ee070:
    // 0x2ee070: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ee070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2ee074:
    // 0x2ee074: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ee074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2ee078:
    // 0x2ee078: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2ee078u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
label_2ee07c:
    // 0x2ee07c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2ee07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2ee080:
    // 0x2ee080: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ee080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2ee084:
    // 0x2ee084: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ee084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2ee088:
    // 0x2ee088: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ee088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2ee08c:
    // 0x2ee08c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ee08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2ee090:
    // 0x2ee090: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ee090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2ee094:
    // 0x2ee094: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ee094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2ee098:
    // 0x2ee098: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2ee098u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_2ee09c:
    // 0x2ee09c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2ee09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_2ee0a0:
    // 0x2ee0a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ee0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ee0a4:
    // 0x2ee0a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ee0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ee0a8:
    // 0x2ee0a8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2ee0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2ee0ac:
    // 0x2ee0ac: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x2ee0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
label_2ee0b0:
    // 0x2ee0b0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2ee0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2ee0b4:
    // 0x2ee0b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ee0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ee0b8:
    // 0x2ee0b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ee0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ee0bc:
    // 0x2ee0bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ee0bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2ee0c0:
    // 0x2ee0c0: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2ee0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_2ee0c4:
    // 0x2ee0c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ee0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ee0c8:
    // 0x2ee0c8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2ee0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2ee0cc:
    // 0x2ee0cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ee0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ee0d0:
    // 0x2ee0d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ee0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ee0d4:
    // 0x2ee0d4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ee0d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2ee0d8:
    // 0x2ee0d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ee0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2ee0dc:
    // 0x2ee0dc: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2ee0dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_2ee0e0:
    // 0x2ee0e0: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2ee0e0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_2ee0e4:
    // 0x2ee0e4: 0xc0634c8  jal         func_18D320
label_2ee0e8:
    if (ctx->pc == 0x2EE0E8u) {
        ctx->pc = 0x2EE0ECu;
        goto label_2ee0ec;
    }
    ctx->pc = 0x2EE0E4u;
    SET_GPR_U32(ctx, 31, 0x2EE0ECu);
    ctx->pc = 0x18D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D320u, 0x2EE0E4u, 0x2EE0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE0ECu;
label_2ee0ec:
    // 0x2ee0ec: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2ee0ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2ee0f0:
    // 0x2ee0f0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ee0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_2ee0f4:
    // 0x2ee0f4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ee0f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
label_2ee0f8:
    // 0x2ee0f8: 0x1203003c  beq         $s0, $v1, . + 4 + (0x3C << 2)
label_2ee0fc:
    if (ctx->pc == 0x2EE0FCu) {
        ctx->pc = 0x2EE100u;
        goto label_2ee100;
    }
    ctx->pc = 0x2EE0F8u;
    {
        const bool branch_taken_0x2ee0f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee0f8) {
            ctx->pc = 0x2EE1ECu;
            goto label_2ee1ec;
        }
    }
    ctx->pc = 0x2EE100u;
label_2ee100:
    // 0x2ee100: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2ee100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_2ee104:
    // 0x2ee104: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ee104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ee108:
    // 0x2ee108: 0xa20202a8  sb          $v0, 0x2A8($s0)
    ctx->pc = 0x2ee108u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 2));
label_2ee10c:
    // 0x2ee10c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ee10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2ee110:
    // 0x2ee110: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ee114:
    // 0x2ee114: 0x0  nop
    ctx->pc = 0x2ee114u;
    // NOP
label_2ee118:
    // 0x2ee118: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2ee118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
label_2ee11c:
    // 0x2ee11c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ee11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2ee120:
    // 0x2ee120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ee124:
    // 0x2ee124: 0x0  nop
    ctx->pc = 0x2ee124u;
    // NOP
label_2ee128:
    // 0x2ee128: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2ee128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
label_2ee12c:
    // 0x2ee12c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ee12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2ee130:
    // 0x2ee130: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ee134:
    // 0x2ee134: 0x0  nop
    ctx->pc = 0x2ee134u;
    // NOP
label_2ee138:
    // 0x2ee138: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2ee138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
label_2ee13c:
    // 0x2ee13c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2ee13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_2ee140:
    // 0x2ee140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ee144:
    // 0x2ee144: 0x0  nop
    ctx->pc = 0x2ee144u;
    // NOP
label_2ee148:
    // 0x2ee148: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x2ee148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
label_2ee14c:
    // 0x2ee14c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ee14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2ee150:
    // 0x2ee150: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ee150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ee154:
    // 0x2ee154: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2ee154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ee158:
    // 0x2ee158: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ee158u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2ee15c:
    // 0x2ee15c: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x2ee15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
label_2ee160:
    // 0x2ee160: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2ee160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ee164:
    // 0x2ee164: 0xe6000270  swc1        $f0, 0x270($s0)
    ctx->pc = 0x2ee164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
label_2ee168:
    // 0x2ee168: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2ee168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ee16c:
    // 0x2ee16c: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x2ee16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
label_2ee170:
    // 0x2ee170: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2ee170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ee174:
    // 0x2ee174: 0xe6000278  swc1        $f0, 0x278($s0)
    ctx->pc = 0x2ee174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
label_2ee178:
    // 0x2ee178: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2ee178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2ee17c:
    // 0x2ee17c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2ee17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ee180:
    // 0x2ee180: 0xe6000280  swc1        $f0, 0x280($s0)
    ctx->pc = 0x2ee180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
label_2ee184:
    // 0x2ee184: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2ee184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2ee188:
    // 0x2ee188: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2ee188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ee18c:
    // 0x2ee18c: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x2ee18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
label_2ee190:
    // 0x2ee190: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2ee190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2ee194:
    // 0x2ee194: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2ee194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ee198:
    // 0x2ee198: 0xe6000288  swc1        $f0, 0x288($s0)
    ctx->pc = 0x2ee198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
label_2ee19c:
    // 0x2ee19c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2ee19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ee1a0:
    // 0x2ee1a0: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x2ee1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
label_2ee1a4:
    // 0x2ee1a4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2ee1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2ee1a8:
    // 0x2ee1a8: 0xa202034f  sb          $v0, 0x34F($s0)
    ctx->pc = 0x2ee1a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 2));
label_2ee1ac:
    // 0x2ee1ac: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2ee1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2ee1b0:
    // 0x2ee1b0: 0xae020364  sw          $v0, 0x364($s0)
    ctx->pc = 0x2ee1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 2));
label_2ee1b4:
    // 0x2ee1b4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2ee1b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2ee1b8:
    // 0x2ee1b8: 0x8e020350  lw          $v0, 0x350($s0)
    ctx->pc = 0x2ee1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
label_2ee1bc:
    // 0x2ee1bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2ee1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2ee1c0:
    // 0x2ee1c0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2ee1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_2ee1c4:
    // 0x2ee1c4: 0x24426e10  addiu       $v0, $v0, 0x6E10
    ctx->pc = 0x2ee1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28176));
label_2ee1c8:
    // 0x2ee1c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ee1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ee1cc:
    // 0x2ee1cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ee1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ee1d0:
    // 0x2ee1d0: 0x40f809  jalr        $v0
label_2ee1d4:
    if (ctx->pc == 0x2EE1D4u) {
        ctx->pc = 0x2EE1D8u;
        goto label_2ee1d8;
    }
    ctx->pc = 0x2EE1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EE1D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE1D0u, 0x2EE1D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EE1D8u;
label_2ee1d8:
    // 0x2ee1d8: 0x8e030ab8  lw          $v1, 0xAB8($s0)
    ctx->pc = 0x2ee1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2744)));
label_2ee1dc:
    // 0x2ee1dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ee1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2ee1e0:
    // 0x2ee1e0: 0xae030ab8  sw          $v1, 0xAB8($s0)
    ctx->pc = 0x2ee1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2744), GPR_U32(ctx, 3));
label_2ee1e4:
    // 0x2ee1e4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ee1e8:
    if (ctx->pc == 0x2EE1E8u) {
        ctx->pc = 0x2EE1ECu;
        goto label_2ee1ec;
    }
    ctx->pc = 0x2EE1E4u;
    {
        const bool branch_taken_0x2ee1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee1e4) {
            ctx->pc = 0x2EE1F4u;
            goto label_2ee1f4;
        }
    }
    ctx->pc = 0x2EE1ECu;
label_2ee1ec:
    // 0x2ee1ec: 0x10000001  b           . + 4 + (0x1 << 2)
label_2ee1f0:
    if (ctx->pc == 0x2EE1F0u) {
        ctx->pc = 0x2EE1F4u;
        goto label_2ee1f4;
    }
    ctx->pc = 0x2EE1ECu;
    {
        const bool branch_taken_0x2ee1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee1ec) {
            ctx->pc = 0x2EE1F4u;
            goto label_2ee1f4;
        }
    }
    ctx->pc = 0x2EE1F4u;
label_2ee1f4:
    // 0x2ee1f4: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x2ee1f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ee1f8:
    // 0x2ee1f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ee1f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ee1fc:
    // 0x2ee1fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ee1fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ee200:
    // 0x2ee200: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ee200u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ee204:
    // 0x2ee204: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ee204u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ee208:
    // 0x2ee208: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ee208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ee20c:
    // 0x2ee20c: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2ee20cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2ee210:
    // 0x2ee210: 0x3e00008  jr          $ra
label_2ee214:
    if (ctx->pc == 0x2EE214u) {
        ctx->pc = 0x2EE218u;
        goto label_fallthrough_0x2ee210;
    }
    ctx->pc = 0x2EE210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ee210:
    ctx->pc = 0x2EE218u;
}
