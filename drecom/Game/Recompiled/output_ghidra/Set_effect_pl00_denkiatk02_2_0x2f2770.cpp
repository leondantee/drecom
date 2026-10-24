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

// Function: Set_effect_pl00_denkiatk02_2
// Address: 0x2f2770 - 0x2f2a78
void Set_effect_pl00_denkiatk02_2_0x2f2770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_pl00_denkiatk02_2_0x2f2770");
#endif

    switch (ctx->pc) {
        case 0x2f2770u: goto label_2f2770;
        case 0x2f2774u: goto label_2f2774;
        case 0x2f2778u: goto label_2f2778;
        case 0x2f277cu: goto label_2f277c;
        case 0x2f2780u: goto label_2f2780;
        case 0x2f2784u: goto label_2f2784;
        case 0x2f2788u: goto label_2f2788;
        case 0x2f278cu: goto label_2f278c;
        case 0x2f2790u: goto label_2f2790;
        case 0x2f2794u: goto label_2f2794;
        case 0x2f2798u: goto label_2f2798;
        case 0x2f279cu: goto label_2f279c;
        case 0x2f27a0u: goto label_2f27a0;
        case 0x2f27a4u: goto label_2f27a4;
        case 0x2f27a8u: goto label_2f27a8;
        case 0x2f27acu: goto label_2f27ac;
        case 0x2f27b0u: goto label_2f27b0;
        case 0x2f27b4u: goto label_2f27b4;
        case 0x2f27b8u: goto label_2f27b8;
        case 0x2f27bcu: goto label_2f27bc;
        case 0x2f27c0u: goto label_2f27c0;
        case 0x2f27c4u: goto label_2f27c4;
        case 0x2f27c8u: goto label_2f27c8;
        case 0x2f27ccu: goto label_2f27cc;
        case 0x2f27d0u: goto label_2f27d0;
        case 0x2f27d4u: goto label_2f27d4;
        case 0x2f27d8u: goto label_2f27d8;
        case 0x2f27dcu: goto label_2f27dc;
        case 0x2f27e0u: goto label_2f27e0;
        case 0x2f27e4u: goto label_2f27e4;
        case 0x2f27e8u: goto label_2f27e8;
        case 0x2f27ecu: goto label_2f27ec;
        case 0x2f27f0u: goto label_2f27f0;
        case 0x2f27f4u: goto label_2f27f4;
        case 0x2f27f8u: goto label_2f27f8;
        case 0x2f27fcu: goto label_2f27fc;
        case 0x2f2800u: goto label_2f2800;
        case 0x2f2804u: goto label_2f2804;
        case 0x2f2808u: goto label_2f2808;
        case 0x2f280cu: goto label_2f280c;
        case 0x2f2810u: goto label_2f2810;
        case 0x2f2814u: goto label_2f2814;
        case 0x2f2818u: goto label_2f2818;
        case 0x2f281cu: goto label_2f281c;
        case 0x2f2820u: goto label_2f2820;
        case 0x2f2824u: goto label_2f2824;
        case 0x2f2828u: goto label_2f2828;
        case 0x2f282cu: goto label_2f282c;
        case 0x2f2830u: goto label_2f2830;
        case 0x2f2834u: goto label_2f2834;
        case 0x2f2838u: goto label_2f2838;
        case 0x2f283cu: goto label_2f283c;
        case 0x2f2840u: goto label_2f2840;
        case 0x2f2844u: goto label_2f2844;
        case 0x2f2848u: goto label_2f2848;
        case 0x2f284cu: goto label_2f284c;
        case 0x2f2850u: goto label_2f2850;
        case 0x2f2854u: goto label_2f2854;
        case 0x2f2858u: goto label_2f2858;
        case 0x2f285cu: goto label_2f285c;
        case 0x2f2860u: goto label_2f2860;
        case 0x2f2864u: goto label_2f2864;
        case 0x2f2868u: goto label_2f2868;
        case 0x2f286cu: goto label_2f286c;
        case 0x2f2870u: goto label_2f2870;
        case 0x2f2874u: goto label_2f2874;
        case 0x2f2878u: goto label_2f2878;
        case 0x2f287cu: goto label_2f287c;
        case 0x2f2880u: goto label_2f2880;
        case 0x2f2884u: goto label_2f2884;
        case 0x2f2888u: goto label_2f2888;
        case 0x2f288cu: goto label_2f288c;
        case 0x2f2890u: goto label_2f2890;
        case 0x2f2894u: goto label_2f2894;
        case 0x2f2898u: goto label_2f2898;
        case 0x2f289cu: goto label_2f289c;
        case 0x2f28a0u: goto label_2f28a0;
        case 0x2f28a4u: goto label_2f28a4;
        case 0x2f28a8u: goto label_2f28a8;
        case 0x2f28acu: goto label_2f28ac;
        case 0x2f28b0u: goto label_2f28b0;
        case 0x2f28b4u: goto label_2f28b4;
        case 0x2f28b8u: goto label_2f28b8;
        case 0x2f28bcu: goto label_2f28bc;
        case 0x2f28c0u: goto label_2f28c0;
        case 0x2f28c4u: goto label_2f28c4;
        case 0x2f28c8u: goto label_2f28c8;
        case 0x2f28ccu: goto label_2f28cc;
        case 0x2f28d0u: goto label_2f28d0;
        case 0x2f28d4u: goto label_2f28d4;
        case 0x2f28d8u: goto label_2f28d8;
        case 0x2f28dcu: goto label_2f28dc;
        case 0x2f28e0u: goto label_2f28e0;
        case 0x2f28e4u: goto label_2f28e4;
        case 0x2f28e8u: goto label_2f28e8;
        case 0x2f28ecu: goto label_2f28ec;
        case 0x2f28f0u: goto label_2f28f0;
        case 0x2f28f4u: goto label_2f28f4;
        case 0x2f28f8u: goto label_2f28f8;
        case 0x2f28fcu: goto label_2f28fc;
        case 0x2f2900u: goto label_2f2900;
        case 0x2f2904u: goto label_2f2904;
        case 0x2f2908u: goto label_2f2908;
        case 0x2f290cu: goto label_2f290c;
        case 0x2f2910u: goto label_2f2910;
        case 0x2f2914u: goto label_2f2914;
        case 0x2f2918u: goto label_2f2918;
        case 0x2f291cu: goto label_2f291c;
        case 0x2f2920u: goto label_2f2920;
        case 0x2f2924u: goto label_2f2924;
        case 0x2f2928u: goto label_2f2928;
        case 0x2f292cu: goto label_2f292c;
        case 0x2f2930u: goto label_2f2930;
        case 0x2f2934u: goto label_2f2934;
        case 0x2f2938u: goto label_2f2938;
        case 0x2f293cu: goto label_2f293c;
        case 0x2f2940u: goto label_2f2940;
        case 0x2f2944u: goto label_2f2944;
        case 0x2f2948u: goto label_2f2948;
        case 0x2f294cu: goto label_2f294c;
        case 0x2f2950u: goto label_2f2950;
        case 0x2f2954u: goto label_2f2954;
        case 0x2f2958u: goto label_2f2958;
        case 0x2f295cu: goto label_2f295c;
        case 0x2f2960u: goto label_2f2960;
        case 0x2f2964u: goto label_2f2964;
        case 0x2f2968u: goto label_2f2968;
        case 0x2f296cu: goto label_2f296c;
        case 0x2f2970u: goto label_2f2970;
        case 0x2f2974u: goto label_2f2974;
        case 0x2f2978u: goto label_2f2978;
        case 0x2f297cu: goto label_2f297c;
        case 0x2f2980u: goto label_2f2980;
        case 0x2f2984u: goto label_2f2984;
        case 0x2f2988u: goto label_2f2988;
        case 0x2f298cu: goto label_2f298c;
        case 0x2f2990u: goto label_2f2990;
        case 0x2f2994u: goto label_2f2994;
        case 0x2f2998u: goto label_2f2998;
        case 0x2f299cu: goto label_2f299c;
        case 0x2f29a0u: goto label_2f29a0;
        case 0x2f29a4u: goto label_2f29a4;
        case 0x2f29a8u: goto label_2f29a8;
        case 0x2f29acu: goto label_2f29ac;
        case 0x2f29b0u: goto label_2f29b0;
        case 0x2f29b4u: goto label_2f29b4;
        case 0x2f29b8u: goto label_2f29b8;
        case 0x2f29bcu: goto label_2f29bc;
        case 0x2f29c0u: goto label_2f29c0;
        case 0x2f29c4u: goto label_2f29c4;
        case 0x2f29c8u: goto label_2f29c8;
        case 0x2f29ccu: goto label_2f29cc;
        case 0x2f29d0u: goto label_2f29d0;
        case 0x2f29d4u: goto label_2f29d4;
        case 0x2f29d8u: goto label_2f29d8;
        case 0x2f29dcu: goto label_2f29dc;
        case 0x2f29e0u: goto label_2f29e0;
        case 0x2f29e4u: goto label_2f29e4;
        case 0x2f29e8u: goto label_2f29e8;
        case 0x2f29ecu: goto label_2f29ec;
        case 0x2f29f0u: goto label_2f29f0;
        case 0x2f29f4u: goto label_2f29f4;
        case 0x2f29f8u: goto label_2f29f8;
        case 0x2f29fcu: goto label_2f29fc;
        case 0x2f2a00u: goto label_2f2a00;
        case 0x2f2a04u: goto label_2f2a04;
        case 0x2f2a08u: goto label_2f2a08;
        case 0x2f2a0cu: goto label_2f2a0c;
        case 0x2f2a10u: goto label_2f2a10;
        case 0x2f2a14u: goto label_2f2a14;
        case 0x2f2a18u: goto label_2f2a18;
        case 0x2f2a1cu: goto label_2f2a1c;
        case 0x2f2a20u: goto label_2f2a20;
        case 0x2f2a24u: goto label_2f2a24;
        case 0x2f2a28u: goto label_2f2a28;
        case 0x2f2a2cu: goto label_2f2a2c;
        case 0x2f2a30u: goto label_2f2a30;
        case 0x2f2a34u: goto label_2f2a34;
        case 0x2f2a38u: goto label_2f2a38;
        case 0x2f2a3cu: goto label_2f2a3c;
        case 0x2f2a40u: goto label_2f2a40;
        case 0x2f2a44u: goto label_2f2a44;
        case 0x2f2a48u: goto label_2f2a48;
        case 0x2f2a4cu: goto label_2f2a4c;
        case 0x2f2a50u: goto label_2f2a50;
        case 0x2f2a54u: goto label_2f2a54;
        case 0x2f2a58u: goto label_2f2a58;
        case 0x2f2a5cu: goto label_2f2a5c;
        case 0x2f2a60u: goto label_2f2a60;
        case 0x2f2a64u: goto label_2f2a64;
        case 0x2f2a68u: goto label_2f2a68;
        case 0x2f2a6cu: goto label_2f2a6c;
        case 0x2f2a70u: goto label_2f2a70;
        case 0x2f2a74u: goto label_2f2a74;
        default: break;
    }

    ctx->pc = 0x2f2770u;

label_2f2770:
    // 0x2f2770: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2f2770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2f2774:
    // 0x2f2774: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x2f2774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
label_2f2778:
    // 0x2f2778: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f2778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2f277c:
    // 0x2f277c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f277cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2f2780:
    // 0x2f2780: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f2780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2f2784:
    // 0x2f2784: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f2784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2f2788:
    // 0x2f2788: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f2788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2f278c:
    // 0x2f278c: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x2f278cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
label_2f2790:
    // 0x2f2790: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x2f2790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
label_2f2794:
    // 0x2f2794: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x2f2794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
label_2f2798:
    // 0x2f2798: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x2f2798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
label_2f279c:
    // 0x2f279c: 0xafa80088  sw          $t0, 0x88($sp)
    ctx->pc = 0x2f279cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 8));
label_2f27a0:
    // 0x2f27a0: 0xafa90090  sw          $t1, 0x90($sp)
    ctx->pc = 0x2f27a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 9));
label_2f27a4:
    // 0x2f27a4: 0xe7ad00a0  swc1        $f13, 0xA0($sp)
    ctx->pc = 0x2f27a4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2f27a8:
    // 0x2f27a8: 0xe7ae00a8  swc1        $f14, 0xA8($sp)
    ctx->pc = 0x2f27a8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2f27ac:
    // 0x2f27ac: 0xafaa00b0  sw          $t2, 0xB0($sp)
    ctx->pc = 0x2f27acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 10));
label_2f27b0:
    // 0x2f27b0: 0xa3ab00b8  sb          $t3, 0xB8($sp)
    ctx->pc = 0x2f27b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 184), (uint8_t)GPR_U32(ctx, 11));
label_2f27b4:
    // 0x2f27b4: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2f27b4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f27b8:
    // 0x2f27b8: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2f27b8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f27bc:
    // 0x2f27bc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2f27bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2f27c0:
    // 0x2f27c0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2f27c4:
    if (ctx->pc == 0x2F27C4u) {
        ctx->pc = 0x2F27C8u;
        goto label_2f27c8;
    }
    ctx->pc = 0x2F27C0u;
    {
        const bool branch_taken_0x2f27c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f27c0) {
            ctx->pc = 0x2F27F0u;
            goto label_2f27f0;
        }
    }
    ctx->pc = 0x2F27C8u;
label_2f27c8:
    // 0x2f27c8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2f27c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2f27cc:
    // 0x2f27cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2f27d0:
    if (ctx->pc == 0x2F27D0u) {
        ctx->pc = 0x2F27D4u;
        goto label_2f27d4;
    }
    ctx->pc = 0x2F27CCu;
    {
        const bool branch_taken_0x2f27cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f27cc) {
            ctx->pc = 0x2F27E0u;
            goto label_2f27e0;
        }
    }
    ctx->pc = 0x2F27D4u;
label_2f27d4:
    // 0x2f27d4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2f27d4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f27d8:
    // 0x2f27d8: 0x1000000e  b           . + 4 + (0xE << 2)
label_2f27dc:
    if (ctx->pc == 0x2F27DCu) {
        ctx->pc = 0x2F27E0u;
        goto label_2f27e0;
    }
    ctx->pc = 0x2F27D8u;
    {
        const bool branch_taken_0x2f27d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f27d8) {
            ctx->pc = 0x2F2814u;
            goto label_2f2814;
        }
    }
    ctx->pc = 0x2F27E0u;
label_2f27e0:
    // 0x2f27e0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2f27e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f27e4:
    // 0x2f27e4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2f27e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f27e8:
    // 0x2f27e8: 0x1000000a  b           . + 4 + (0xA << 2)
label_2f27ec:
    if (ctx->pc == 0x2F27ECu) {
        ctx->pc = 0x2F27F0u;
        goto label_2f27f0;
    }
    ctx->pc = 0x2F27E8u;
    {
        const bool branch_taken_0x2f27e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f27e8) {
            ctx->pc = 0x2F2814u;
            goto label_2f2814;
        }
    }
    ctx->pc = 0x2F27F0u;
label_2f27f0:
    // 0x2f27f0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2f27f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f27f4:
    // 0x2f27f4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2f27f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2f27f8:
    // 0x2f27f8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2f27fc:
    if (ctx->pc == 0x2F27FCu) {
        ctx->pc = 0x2F2800u;
        goto label_2f2800;
    }
    ctx->pc = 0x2F27F8u;
    {
        const bool branch_taken_0x2f27f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f27f8) {
            ctx->pc = 0x2F280Cu;
            goto label_2f280c;
        }
    }
    ctx->pc = 0x2F2800u;
label_2f2800:
    // 0x2f2800: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2f2800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f2804:
    // 0x2f2804: 0x10000003  b           . + 4 + (0x3 << 2)
label_2f2808:
    if (ctx->pc == 0x2F2808u) {
        ctx->pc = 0x2F280Cu;
        goto label_2f280c;
    }
    ctx->pc = 0x2F2804u;
    {
        const bool branch_taken_0x2f2804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2804) {
            ctx->pc = 0x2F2814u;
            goto label_2f2814;
        }
    }
    ctx->pc = 0x2F280Cu;
label_2f280c:
    // 0x2f280c: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x2f280cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f2810:
    // 0x2f2810: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2f2810u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2814:
    // 0x2f2814: 0x93a200b8  lbu         $v0, 0xB8($sp)
    ctx->pc = 0x2f2814u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 184)));
label_2f2818:
    // 0x2f2818: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f2818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f281c:
    // 0x2f281c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2f2820:
    if (ctx->pc == 0x2F2820u) {
        ctx->pc = 0x2F2824u;
        goto label_2f2824;
    }
    ctx->pc = 0x2F281Cu;
    {
        const bool branch_taken_0x2f281c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f281c) {
            ctx->pc = 0x2F2830u;
            goto label_2f2830;
        }
    }
    ctx->pc = 0x2F2824u;
label_2f2824:
    // 0x2f2824: 0x2414000c  addiu       $s4, $zero, 0xC
    ctx->pc = 0x2f2824u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2f2828:
    // 0x2f2828: 0x10000002  b           . + 4 + (0x2 << 2)
label_2f282c:
    if (ctx->pc == 0x2F282Cu) {
        ctx->pc = 0x2F2830u;
        goto label_2f2830;
    }
    ctx->pc = 0x2F2828u;
    {
        const bool branch_taken_0x2f2828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2828) {
            ctx->pc = 0x2F2834u;
            goto label_2f2834;
        }
    }
    ctx->pc = 0x2F2830u;
label_2f2830:
    // 0x2f2830: 0x2414000c  addiu       $s4, $zero, 0xC
    ctx->pc = 0x2f2830u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2f2834:
    // 0x2f2834: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x2f2834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_2f2838:
    // 0x2f2838: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f2838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2f283c:
    // 0x2f283c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2f283cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_2f2840:
    // 0x2f2840: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x2f2840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_2f2844:
    // 0x2f2844: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f2844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f2848:
    // 0x2f2848: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f2848u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2f284c:
    // 0x2f284c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2f284cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_2f2850:
    // 0x2f2850: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f2850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f2854:
    // 0x2f2854: 0x3c023c00  lui         $v0, 0x3C00
    ctx->pc = 0x2f2854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15360 << 16));
label_2f2858:
    // 0x2f2858: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f2858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f285c:
    // 0x2f285c: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x2f285cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_2f2860:
    // 0x2f2860: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x2f2860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_2f2864:
    // 0x2f2864: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2f2864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2f2868:
    // 0x2f2868: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f2868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f286c:
    // 0x2f286c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f286cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2f2870:
    // 0x2f2870: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f2870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f2874:
    // 0x2f2874: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x2f2874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f2878:
    // 0x2f2878: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2f2878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2f287c:
    // 0x2f287c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f287cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2f2880:
    // 0x2f2880: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f2880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2f2884:
    // 0x2f2884: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f2884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2f2888:
    // 0x2f2888: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f2888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2f288c:
    // 0x2f288c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f288cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2f2890:
    // 0x2f2890: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f2890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2f2894:
    // 0x2f2894: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2f2894u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_2f2898:
    // 0x2f2898: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2f2898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2f289c:
    // 0x2f289c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f289cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2f28a0:
    // 0x2f28a0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f28a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2f28a4:
    // 0x2f28a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f28a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2f28a8:
    // 0x2f28a8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f28a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2f28ac:
    // 0x2f28ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f28acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2f28b0:
    // 0x2f28b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f28b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2f28b4:
    // 0x2f28b4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2f28b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2f28b8:
    // 0x2f28b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2f28b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2f28bc:
    // 0x2f28bc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f28bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2f28c0:
    // 0x2f28c0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f28c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2f28c4:
    // 0x2f28c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f28c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2f28c8:
    // 0x2f28c8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f28c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2f28cc:
    // 0x2f28cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f28ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2f28d0:
    // 0x2f28d0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f28d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2f28d4:
    // 0x2f28d4: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2f28d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
label_2f28d8:
    // 0x2f28d8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2f28d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2f28dc:
    // 0x2f28dc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f28dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2f28e0:
    // 0x2f28e0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f28e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2f28e4:
    // 0x2f28e4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f28e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2f28e8:
    // 0x2f28e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f28e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2f28ec:
    // 0x2f28ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f28ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2f28f0:
    // 0x2f28f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f28f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2f28f4:
    // 0x2f28f4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2f28f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_2f28f8:
    // 0x2f28f8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2f28f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2f28fc:
    // 0x2f28fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f28fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f2900:
    // 0x2f2900: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f2900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f2904:
    // 0x2f2904: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f2904u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2f2908:
    // 0x2f2908: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x2f2908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
label_2f290c:
    // 0x2f290c: 0x3c02000e  lui         $v0, 0xE
    ctx->pc = 0x2f290cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14 << 16));
label_2f2910:
    // 0x2f2910: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f2910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f2914:
    // 0x2f2914: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2f2914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2f2918:
    // 0x2f2918: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f2918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f291c:
    // 0x2f291c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f291cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f2920:
    // 0x2f2920: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f2920u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2f2924:
    // 0x2f2924: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2f2924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f2928:
    // 0x2f2928: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2f2928u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_2f292c:
    // 0x2f292c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2f292cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_2f2930:
    // 0x2f2930: 0xc0634c8  jal         func_18D320
label_2f2934:
    if (ctx->pc == 0x2F2934u) {
        ctx->pc = 0x2F2938u;
        goto label_2f2938;
    }
    ctx->pc = 0x2F2930u;
    SET_GPR_U32(ctx, 31, 0x2F2938u);
    ctx->pc = 0x18D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D320u, 0x2F2930u, 0x2F2938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2938u;
label_2f2938:
    // 0x2f2938: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2f2938u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2f293c:
    // 0x2f293c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f293cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_2f2940:
    // 0x2f2940: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f2940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
label_2f2944:
    // 0x2f2944: 0x12030043  beq         $s0, $v1, . + 4 + (0x43 << 2)
label_2f2948:
    if (ctx->pc == 0x2F2948u) {
        ctx->pc = 0x2F294Cu;
        goto label_2f294c;
    }
    ctx->pc = 0x2F2944u;
    {
        const bool branch_taken_0x2f2944 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f2944) {
            ctx->pc = 0x2F2A54u;
            goto label_2f2a54;
        }
    }
    ctx->pc = 0x2F294Cu;
label_2f294c:
    // 0x2f294c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x2f294cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2f2950:
    // 0x2f2950: 0xa202034d  sb          $v0, 0x34D($s0)
    ctx->pc = 0x2f2950u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 845), (uint8_t)GPR_U32(ctx, 2));
label_2f2954:
    // 0x2f2954: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f2954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2958:
    // 0x2f2958: 0xa20202a8  sb          $v0, 0x2A8($s0)
    ctx->pc = 0x2f2958u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 2));
label_2f295c:
    // 0x2f295c: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2f295cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
label_2f2960:
    // 0x2f2960: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2964:
    // 0x2f2964: 0x0  nop
    ctx->pc = 0x2f2964u;
    // NOP
label_2f2968:
    // 0x2f2968: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2f2968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
label_2f296c:
    // 0x2f296c: 0x3c024288  lui         $v0, 0x4288
    ctx->pc = 0x2f296cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17032 << 16));
label_2f2970:
    // 0x2f2970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2974:
    // 0x2f2974: 0x0  nop
    ctx->pc = 0x2f2974u;
    // NOP
label_2f2978:
    // 0x2f2978: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2f2978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
label_2f297c:
    // 0x2f297c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f297cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2f2980:
    // 0x2f2980: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2984:
    // 0x2f2984: 0x0  nop
    ctx->pc = 0x2f2984u;
    // NOP
label_2f2988:
    // 0x2f2988: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2f2988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
label_2f298c:
    // 0x2f298c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2f298cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
label_2f2990:
    // 0x2f2990: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2994:
    // 0x2f2994: 0x0  nop
    ctx->pc = 0x2f2994u;
    // NOP
label_2f2998:
    // 0x2f2998: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x2f2998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
label_2f299c:
    // 0x2f299c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f299cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2f29a0:
    // 0x2f29a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f29a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f29a4:
    // 0x2f29a4: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2f29a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f29a8:
    // 0x2f29a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f29a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f29ac:
    // 0x2f29ac: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x2f29acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
label_2f29b0:
    // 0x2f29b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f29b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f29b4:
    // 0x2f29b4: 0x0  nop
    ctx->pc = 0x2f29b4u;
    // NOP
label_2f29b8:
    // 0x2f29b8: 0xe6000270  swc1        $f0, 0x270($s0)
    ctx->pc = 0x2f29b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
label_2f29bc:
    // 0x2f29bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f29bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f29c0:
    // 0x2f29c0: 0x0  nop
    ctx->pc = 0x2f29c0u;
    // NOP
label_2f29c4:
    // 0x2f29c4: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x2f29c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
label_2f29c8:
    // 0x2f29c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f29c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f29cc:
    // 0x2f29cc: 0x0  nop
    ctx->pc = 0x2f29ccu;
    // NOP
label_2f29d0:
    // 0x2f29d0: 0xe6000278  swc1        $f0, 0x278($s0)
    ctx->pc = 0x2f29d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
label_2f29d4:
    // 0x2f29d4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2f29d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2f29d8:
    // 0x2f29d8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2f29d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f29dc:
    // 0x2f29dc: 0xe6000280  swc1        $f0, 0x280($s0)
    ctx->pc = 0x2f29dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
label_2f29e0:
    // 0x2f29e0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2f29e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2f29e4:
    // 0x2f29e4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2f29e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f29e8:
    // 0x2f29e8: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x2f29e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
label_2f29ec:
    // 0x2f29ec: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2f29ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2f29f0:
    // 0x2f29f0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2f29f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f29f4:
    // 0x2f29f4: 0xe6000288  swc1        $f0, 0x288($s0)
    ctx->pc = 0x2f29f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
label_2f29f8:
    // 0x2f29f8: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2f29f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f29fc:
    // 0x2f29fc: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x2f29fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
label_2f2a00:
    // 0x2f2a00: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2f2a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2f2a04:
    // 0x2f2a04: 0xa202034f  sb          $v0, 0x34F($s0)
    ctx->pc = 0x2f2a04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 2));
label_2f2a08:
    // 0x2f2a08: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2f2a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2f2a0c:
    // 0x2f2a0c: 0xae020364  sw          $v0, 0x364($s0)
    ctx->pc = 0x2f2a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 2));
label_2f2a10:
    // 0x2f2a10: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2f2a10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2f2a14:
    // 0x2f2a14: 0x8e020350  lw          $v0, 0x350($s0)
    ctx->pc = 0x2f2a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
label_2f2a18:
    // 0x2f2a18: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2f2a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2f2a1c:
    // 0x2f2a1c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2f2a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_2f2a20:
    // 0x2f2a20: 0x24426e10  addiu       $v0, $v0, 0x6E10
    ctx->pc = 0x2f2a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28176));
label_2f2a24:
    // 0x2f2a24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f2a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f2a28:
    // 0x2f2a28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f2a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f2a2c:
    // 0x2f2a2c: 0x40f809  jalr        $v0
label_2f2a30:
    if (ctx->pc == 0x2F2A30u) {
        ctx->pc = 0x2F2A34u;
        goto label_2f2a34;
    }
    ctx->pc = 0x2F2A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F2A34u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2A2Cu, 0x2F2A34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2A34u;
label_2f2a34:
    // 0x2f2a34: 0x8e020ab8  lw          $v0, 0xAB8($s0)
    ctx->pc = 0x2f2a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2744)));
label_2f2a38:
    // 0x2f2a38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f2a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2f2a3c:
    // 0x2f2a3c: 0xae020ab8  sw          $v0, 0xAB8($s0)
    ctx->pc = 0x2f2a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2744), GPR_U32(ctx, 2));
label_2f2a40:
    // 0x2f2a40: 0x26040140  addiu       $a0, $s0, 0x140
    ctx->pc = 0x2f2a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
label_2f2a44:
    // 0x2f2a44: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2f2a44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_2f2a48:
    // 0x2f2a48: 0x24060130  addiu       $a2, $zero, 0x130
    ctx->pc = 0x2f2a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
label_2f2a4c:
    // 0x2f2a4c: 0xc0462a6  jal         func_118A98
label_2f2a50:
    if (ctx->pc == 0x2F2A50u) {
        ctx->pc = 0x2F2A54u;
        goto label_2f2a54;
    }
    ctx->pc = 0x2F2A4Cu;
    SET_GPR_U32(ctx, 31, 0x2F2A54u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x2F2A54u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2F2A54u) { return; }
    ctx->pc = 0x2F2A54u;
label_2f2a54:
    // 0x2f2a54: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x2f2a54u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f2a58:
    // 0x2f2a58: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f2a58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f2a5c:
    // 0x2f2a5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f2a5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f2a60:
    // 0x2f2a60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f2a60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f2a64:
    // 0x2f2a64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f2a64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f2a68:
    // 0x2f2a68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f2a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f2a6c:
    // 0x2f2a6c: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2f2a6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2f2a70:
    // 0x2f2a70: 0x3e00008  jr          $ra
label_2f2a74:
    if (ctx->pc == 0x2F2A74u) {
        ctx->pc = 0x2F2A78u;
        goto label_fallthrough_0x2f2a70;
    }
    ctx->pc = 0x2F2A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f2a70:
    ctx->pc = 0x2F2A78u;
}
