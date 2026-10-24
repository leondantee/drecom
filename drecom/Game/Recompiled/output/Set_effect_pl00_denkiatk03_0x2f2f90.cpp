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

// Function: Set_effect_pl00_denkiatk03
// Address: 0x2f2f90 - 0x2f32bc
void Set_effect_pl00_denkiatk03_0x2f2f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_pl00_denkiatk03_0x2f2f90");
#endif

    switch (ctx->pc) {
        case 0x2f2f90u: goto label_2f2f90;
        case 0x2f2f94u: goto label_2f2f94;
        case 0x2f2f98u: goto label_2f2f98;
        case 0x2f2f9cu: goto label_2f2f9c;
        case 0x2f2fa0u: goto label_2f2fa0;
        case 0x2f2fa4u: goto label_2f2fa4;
        case 0x2f2fa8u: goto label_2f2fa8;
        case 0x2f2facu: goto label_2f2fac;
        case 0x2f2fb0u: goto label_2f2fb0;
        case 0x2f2fb4u: goto label_2f2fb4;
        case 0x2f2fb8u: goto label_2f2fb8;
        case 0x2f2fbcu: goto label_2f2fbc;
        case 0x2f2fc0u: goto label_2f2fc0;
        case 0x2f2fc4u: goto label_2f2fc4;
        case 0x2f2fc8u: goto label_2f2fc8;
        case 0x2f2fccu: goto label_2f2fcc;
        case 0x2f2fd0u: goto label_2f2fd0;
        case 0x2f2fd4u: goto label_2f2fd4;
        case 0x2f2fd8u: goto label_2f2fd8;
        case 0x2f2fdcu: goto label_2f2fdc;
        case 0x2f2fe0u: goto label_2f2fe0;
        case 0x2f2fe4u: goto label_2f2fe4;
        case 0x2f2fe8u: goto label_2f2fe8;
        case 0x2f2fecu: goto label_2f2fec;
        case 0x2f2ff0u: goto label_2f2ff0;
        case 0x2f2ff4u: goto label_2f2ff4;
        case 0x2f2ff8u: goto label_2f2ff8;
        case 0x2f2ffcu: goto label_2f2ffc;
        case 0x2f3000u: goto label_2f3000;
        case 0x2f3004u: goto label_2f3004;
        case 0x2f3008u: goto label_2f3008;
        case 0x2f300cu: goto label_2f300c;
        case 0x2f3010u: goto label_2f3010;
        case 0x2f3014u: goto label_2f3014;
        case 0x2f3018u: goto label_2f3018;
        case 0x2f301cu: goto label_2f301c;
        case 0x2f3020u: goto label_2f3020;
        case 0x2f3024u: goto label_2f3024;
        case 0x2f3028u: goto label_2f3028;
        case 0x2f302cu: goto label_2f302c;
        case 0x2f3030u: goto label_2f3030;
        case 0x2f3034u: goto label_2f3034;
        case 0x2f3038u: goto label_2f3038;
        case 0x2f303cu: goto label_2f303c;
        case 0x2f3040u: goto label_2f3040;
        case 0x2f3044u: goto label_2f3044;
        case 0x2f3048u: goto label_2f3048;
        case 0x2f304cu: goto label_2f304c;
        case 0x2f3050u: goto label_2f3050;
        case 0x2f3054u: goto label_2f3054;
        case 0x2f3058u: goto label_2f3058;
        case 0x2f305cu: goto label_2f305c;
        case 0x2f3060u: goto label_2f3060;
        case 0x2f3064u: goto label_2f3064;
        case 0x2f3068u: goto label_2f3068;
        case 0x2f306cu: goto label_2f306c;
        case 0x2f3070u: goto label_2f3070;
        case 0x2f3074u: goto label_2f3074;
        case 0x2f3078u: goto label_2f3078;
        case 0x2f307cu: goto label_2f307c;
        case 0x2f3080u: goto label_2f3080;
        case 0x2f3084u: goto label_2f3084;
        case 0x2f3088u: goto label_2f3088;
        case 0x2f308cu: goto label_2f308c;
        case 0x2f3090u: goto label_2f3090;
        case 0x2f3094u: goto label_2f3094;
        case 0x2f3098u: goto label_2f3098;
        case 0x2f309cu: goto label_2f309c;
        case 0x2f30a0u: goto label_2f30a0;
        case 0x2f30a4u: goto label_2f30a4;
        case 0x2f30a8u: goto label_2f30a8;
        case 0x2f30acu: goto label_2f30ac;
        case 0x2f30b0u: goto label_2f30b0;
        case 0x2f30b4u: goto label_2f30b4;
        case 0x2f30b8u: goto label_2f30b8;
        case 0x2f30bcu: goto label_2f30bc;
        case 0x2f30c0u: goto label_2f30c0;
        case 0x2f30c4u: goto label_2f30c4;
        case 0x2f30c8u: goto label_2f30c8;
        case 0x2f30ccu: goto label_2f30cc;
        case 0x2f30d0u: goto label_2f30d0;
        case 0x2f30d4u: goto label_2f30d4;
        case 0x2f30d8u: goto label_2f30d8;
        case 0x2f30dcu: goto label_2f30dc;
        case 0x2f30e0u: goto label_2f30e0;
        case 0x2f30e4u: goto label_2f30e4;
        case 0x2f30e8u: goto label_2f30e8;
        case 0x2f30ecu: goto label_2f30ec;
        case 0x2f30f0u: goto label_2f30f0;
        case 0x2f30f4u: goto label_2f30f4;
        case 0x2f30f8u: goto label_2f30f8;
        case 0x2f30fcu: goto label_2f30fc;
        case 0x2f3100u: goto label_2f3100;
        case 0x2f3104u: goto label_2f3104;
        case 0x2f3108u: goto label_2f3108;
        case 0x2f310cu: goto label_2f310c;
        case 0x2f3110u: goto label_2f3110;
        case 0x2f3114u: goto label_2f3114;
        case 0x2f3118u: goto label_2f3118;
        case 0x2f311cu: goto label_2f311c;
        case 0x2f3120u: goto label_2f3120;
        case 0x2f3124u: goto label_2f3124;
        case 0x2f3128u: goto label_2f3128;
        case 0x2f312cu: goto label_2f312c;
        case 0x2f3130u: goto label_2f3130;
        case 0x2f3134u: goto label_2f3134;
        case 0x2f3138u: goto label_2f3138;
        case 0x2f313cu: goto label_2f313c;
        case 0x2f3140u: goto label_2f3140;
        case 0x2f3144u: goto label_2f3144;
        case 0x2f3148u: goto label_2f3148;
        case 0x2f314cu: goto label_2f314c;
        case 0x2f3150u: goto label_2f3150;
        case 0x2f3154u: goto label_2f3154;
        case 0x2f3158u: goto label_2f3158;
        case 0x2f315cu: goto label_2f315c;
        case 0x2f3160u: goto label_2f3160;
        case 0x2f3164u: goto label_2f3164;
        case 0x2f3168u: goto label_2f3168;
        case 0x2f316cu: goto label_2f316c;
        case 0x2f3170u: goto label_2f3170;
        case 0x2f3174u: goto label_2f3174;
        case 0x2f3178u: goto label_2f3178;
        case 0x2f317cu: goto label_2f317c;
        case 0x2f3180u: goto label_2f3180;
        case 0x2f3184u: goto label_2f3184;
        case 0x2f3188u: goto label_2f3188;
        case 0x2f318cu: goto label_2f318c;
        case 0x2f3190u: goto label_2f3190;
        case 0x2f3194u: goto label_2f3194;
        case 0x2f3198u: goto label_2f3198;
        case 0x2f319cu: goto label_2f319c;
        case 0x2f31a0u: goto label_2f31a0;
        case 0x2f31a4u: goto label_2f31a4;
        case 0x2f31a8u: goto label_2f31a8;
        case 0x2f31acu: goto label_2f31ac;
        case 0x2f31b0u: goto label_2f31b0;
        case 0x2f31b4u: goto label_2f31b4;
        case 0x2f31b8u: goto label_2f31b8;
        case 0x2f31bcu: goto label_2f31bc;
        case 0x2f31c0u: goto label_2f31c0;
        case 0x2f31c4u: goto label_2f31c4;
        case 0x2f31c8u: goto label_2f31c8;
        case 0x2f31ccu: goto label_2f31cc;
        case 0x2f31d0u: goto label_2f31d0;
        case 0x2f31d4u: goto label_2f31d4;
        case 0x2f31d8u: goto label_2f31d8;
        case 0x2f31dcu: goto label_2f31dc;
        case 0x2f31e0u: goto label_2f31e0;
        case 0x2f31e4u: goto label_2f31e4;
        case 0x2f31e8u: goto label_2f31e8;
        case 0x2f31ecu: goto label_2f31ec;
        case 0x2f31f0u: goto label_2f31f0;
        case 0x2f31f4u: goto label_2f31f4;
        case 0x2f31f8u: goto label_2f31f8;
        case 0x2f31fcu: goto label_2f31fc;
        case 0x2f3200u: goto label_2f3200;
        case 0x2f3204u: goto label_2f3204;
        case 0x2f3208u: goto label_2f3208;
        case 0x2f320cu: goto label_2f320c;
        case 0x2f3210u: goto label_2f3210;
        case 0x2f3214u: goto label_2f3214;
        case 0x2f3218u: goto label_2f3218;
        case 0x2f321cu: goto label_2f321c;
        case 0x2f3220u: goto label_2f3220;
        case 0x2f3224u: goto label_2f3224;
        case 0x2f3228u: goto label_2f3228;
        case 0x2f322cu: goto label_2f322c;
        case 0x2f3230u: goto label_2f3230;
        case 0x2f3234u: goto label_2f3234;
        case 0x2f3238u: goto label_2f3238;
        case 0x2f323cu: goto label_2f323c;
        case 0x2f3240u: goto label_2f3240;
        case 0x2f3244u: goto label_2f3244;
        case 0x2f3248u: goto label_2f3248;
        case 0x2f324cu: goto label_2f324c;
        case 0x2f3250u: goto label_2f3250;
        case 0x2f3254u: goto label_2f3254;
        case 0x2f3258u: goto label_2f3258;
        case 0x2f325cu: goto label_2f325c;
        case 0x2f3260u: goto label_2f3260;
        case 0x2f3264u: goto label_2f3264;
        case 0x2f3268u: goto label_2f3268;
        case 0x2f326cu: goto label_2f326c;
        case 0x2f3270u: goto label_2f3270;
        case 0x2f3274u: goto label_2f3274;
        case 0x2f3278u: goto label_2f3278;
        case 0x2f327cu: goto label_2f327c;
        case 0x2f3280u: goto label_2f3280;
        case 0x2f3284u: goto label_2f3284;
        case 0x2f3288u: goto label_2f3288;
        case 0x2f328cu: goto label_2f328c;
        case 0x2f3290u: goto label_2f3290;
        case 0x2f3294u: goto label_2f3294;
        case 0x2f3298u: goto label_2f3298;
        case 0x2f329cu: goto label_2f329c;
        case 0x2f32a0u: goto label_2f32a0;
        case 0x2f32a4u: goto label_2f32a4;
        case 0x2f32a8u: goto label_2f32a8;
        case 0x2f32acu: goto label_2f32ac;
        case 0x2f32b0u: goto label_2f32b0;
        case 0x2f32b4u: goto label_2f32b4;
        case 0x2f32b8u: goto label_2f32b8;
        default: break;
    }

    ctx->pc = 0x2f2f90u;

label_2f2f90:
    // 0x2f2f90: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2f2f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2f2f94:
    // 0x2f2f94: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x2f2f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
label_2f2f98:
    // 0x2f2f98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f2f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2f2f9c:
    // 0x2f2f9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f2f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2f2fa0:
    // 0x2f2fa0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f2fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2f2fa4:
    // 0x2f2fa4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f2fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2f2fa8:
    // 0x2f2fa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f2fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2f2fac:
    // 0x2f2fac: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x2f2facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
label_2f2fb0:
    // 0x2f2fb0: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x2f2fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
label_2f2fb4:
    // 0x2f2fb4: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x2f2fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
label_2f2fb8:
    // 0x2f2fb8: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x2f2fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
label_2f2fbc:
    // 0x2f2fbc: 0xafa80088  sw          $t0, 0x88($sp)
    ctx->pc = 0x2f2fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 8));
label_2f2fc0:
    // 0x2f2fc0: 0xafa90090  sw          $t1, 0x90($sp)
    ctx->pc = 0x2f2fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 9));
label_2f2fc4:
    // 0x2f2fc4: 0xe7ad00a0  swc1        $f13, 0xA0($sp)
    ctx->pc = 0x2f2fc4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2f2fc8:
    // 0x2f2fc8: 0xafaa00b0  sw          $t2, 0xB0($sp)
    ctx->pc = 0x2f2fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 10));
label_2f2fcc:
    // 0x2f2fcc: 0xa3ab00b8  sb          $t3, 0xB8($sp)
    ctx->pc = 0x2f2fccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 184), (uint8_t)GPR_U32(ctx, 11));
label_2f2fd0:
    // 0x2f2fd0: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2f2fd0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f2fd4:
    // 0x2f2fd4: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2f2fd4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f2fd8:
    // 0x2f2fd8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2f2fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2f2fdc:
    // 0x2f2fdc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2f2fe0:
    if (ctx->pc == 0x2F2FE0u) {
        ctx->pc = 0x2F2FE4u;
        goto label_2f2fe4;
    }
    ctx->pc = 0x2F2FDCu;
    {
        const bool branch_taken_0x2f2fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2fdc) {
            ctx->pc = 0x2F300Cu;
            goto label_2f300c;
        }
    }
    ctx->pc = 0x2F2FE4u;
label_2f2fe4:
    // 0x2f2fe4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2f2fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2f2fe8:
    // 0x2f2fe8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2f2fec:
    if (ctx->pc == 0x2F2FECu) {
        ctx->pc = 0x2F2FF0u;
        goto label_2f2ff0;
    }
    ctx->pc = 0x2F2FE8u;
    {
        const bool branch_taken_0x2f2fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2fe8) {
            ctx->pc = 0x2F2FFCu;
            goto label_2f2ffc;
        }
    }
    ctx->pc = 0x2F2FF0u;
label_2f2ff0:
    // 0x2f2ff0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2f2ff0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f2ff4:
    // 0x2f2ff4: 0x1000000e  b           . + 4 + (0xE << 2)
label_2f2ff8:
    if (ctx->pc == 0x2F2FF8u) {
        ctx->pc = 0x2F2FFCu;
        goto label_2f2ffc;
    }
    ctx->pc = 0x2F2FF4u;
    {
        const bool branch_taken_0x2f2ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2ff4) {
            ctx->pc = 0x2F3030u;
            goto label_2f3030;
        }
    }
    ctx->pc = 0x2F2FFCu;
label_2f2ffc:
    // 0x2f2ffc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2f2ffcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3000:
    // 0x2f3000: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2f3000u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3004:
    // 0x2f3004: 0x1000000a  b           . + 4 + (0xA << 2)
label_2f3008:
    if (ctx->pc == 0x2F3008u) {
        ctx->pc = 0x2F300Cu;
        goto label_2f300c;
    }
    ctx->pc = 0x2F3004u;
    {
        const bool branch_taken_0x2f3004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3004) {
            ctx->pc = 0x2F3030u;
            goto label_2f3030;
        }
    }
    ctx->pc = 0x2F300Cu;
label_2f300c:
    // 0x2f300c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2f300cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3010:
    // 0x2f3010: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2f3010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2f3014:
    // 0x2f3014: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2f3018:
    if (ctx->pc == 0x2F3018u) {
        ctx->pc = 0x2F301Cu;
        goto label_2f301c;
    }
    ctx->pc = 0x2F3014u;
    {
        const bool branch_taken_0x2f3014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3014) {
            ctx->pc = 0x2F3028u;
            goto label_2f3028;
        }
    }
    ctx->pc = 0x2F301Cu;
label_2f301c:
    // 0x2f301c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2f301cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f3020:
    // 0x2f3020: 0x10000003  b           . + 4 + (0x3 << 2)
label_2f3024:
    if (ctx->pc == 0x2F3024u) {
        ctx->pc = 0x2F3028u;
        goto label_2f3028;
    }
    ctx->pc = 0x2F3020u;
    {
        const bool branch_taken_0x2f3020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3020) {
            ctx->pc = 0x2F3030u;
            goto label_2f3030;
        }
    }
    ctx->pc = 0x2F3028u;
label_2f3028:
    // 0x2f3028: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x2f3028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f302c:
    // 0x2f302c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2f302cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3030:
    // 0x2f3030: 0x93a200b8  lbu         $v0, 0xB8($sp)
    ctx->pc = 0x2f3030u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 184)));
label_2f3034:
    // 0x2f3034: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f3034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f3038:
    // 0x2f3038: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2f303c:
    if (ctx->pc == 0x2F303Cu) {
        ctx->pc = 0x2F3040u;
        goto label_2f3040;
    }
    ctx->pc = 0x2F3038u;
    {
        const bool branch_taken_0x2f3038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3038) {
            ctx->pc = 0x2F304Cu;
            goto label_2f304c;
        }
    }
    ctx->pc = 0x2F3040u;
label_2f3040:
    // 0x2f3040: 0x2414000c  addiu       $s4, $zero, 0xC
    ctx->pc = 0x2f3040u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2f3044:
    // 0x2f3044: 0x10000002  b           . + 4 + (0x2 << 2)
label_2f3048:
    if (ctx->pc == 0x2F3048u) {
        ctx->pc = 0x2F304Cu;
        goto label_2f304c;
    }
    ctx->pc = 0x2F3044u;
    {
        const bool branch_taken_0x2f3044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3044) {
            ctx->pc = 0x2F3050u;
            goto label_2f3050;
        }
    }
    ctx->pc = 0x2F304Cu;
label_2f304c:
    // 0x2f304c: 0x2414000c  addiu       $s4, $zero, 0xC
    ctx->pc = 0x2f304cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2f3050:
    // 0x2f3050: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x2f3050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_2f3054:
    // 0x2f3054: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f3054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f3058:
    // 0x2f3058: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f3058u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2f305c:
    // 0x2f305c: 0x34430200  ori         $v1, $v0, 0x200
    ctx->pc = 0x2f305cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_2f3060:
    // 0x2f3060: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x2f3060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_2f3064:
    // 0x2f3064: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f3064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f3068:
    // 0x2f3068: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f3068u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2f306c:
    // 0x2f306c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2f306cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_2f3070:
    // 0x2f3070: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f3070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f3074:
    // 0x2f3074: 0x3c023c00  lui         $v0, 0x3C00
    ctx->pc = 0x2f3074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15360 << 16));
label_2f3078:
    // 0x2f3078: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f3078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f307c:
    // 0x2f307c: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x2f307cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_2f3080:
    // 0x2f3080: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x2f3080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_2f3084:
    // 0x2f3084: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2f3084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2f3088:
    // 0x2f3088: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f3088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f308c:
    // 0x2f308c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f308cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2f3090:
    // 0x2f3090: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f3090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f3094:
    // 0x2f3094: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x2f3094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f3098:
    // 0x2f3098: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2f3098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2f309c:
    // 0x2f309c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f309cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2f30a0:
    // 0x2f30a0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f30a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2f30a4:
    // 0x2f30a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f30a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2f30a8:
    // 0x2f30a8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f30a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2f30ac:
    // 0x2f30ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f30acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2f30b0:
    // 0x2f30b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f30b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2f30b4:
    // 0x2f30b4: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2f30b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_2f30b8:
    // 0x2f30b8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2f30b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2f30bc:
    // 0x2f30bc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f30bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2f30c0:
    // 0x2f30c0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f30c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2f30c4:
    // 0x2f30c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f30c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2f30c8:
    // 0x2f30c8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f30c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2f30cc:
    // 0x2f30cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f30ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2f30d0:
    // 0x2f30d0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f30d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2f30d4:
    // 0x2f30d4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2f30d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2f30d8:
    // 0x2f30d8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2f30d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2f30dc:
    // 0x2f30dc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f30dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2f30e0:
    // 0x2f30e0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f30e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2f30e4:
    // 0x2f30e4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f30e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2f30e8:
    // 0x2f30e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f30e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2f30ec:
    // 0x2f30ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f30ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2f30f0:
    // 0x2f30f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f30f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2f30f4:
    // 0x2f30f4: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2f30f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
label_2f30f8:
    // 0x2f30f8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2f30f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2f30fc:
    // 0x2f30fc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f30fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2f3100:
    // 0x2f3100: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f3100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2f3104:
    // 0x2f3104: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f3104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2f3108:
    // 0x2f3108: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f3108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2f310c:
    // 0x2f310c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f310cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2f3110:
    // 0x2f3110: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f3110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2f3114:
    // 0x2f3114: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2f3114u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_2f3118:
    // 0x2f3118: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2f3118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2f311c:
    // 0x2f311c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f311cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f3120:
    // 0x2f3120: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f3120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f3124:
    // 0x2f3124: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f3124u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2f3128:
    // 0x2f3128: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x2f3128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
label_2f312c:
    // 0x2f312c: 0x3c02000e  lui         $v0, 0xE
    ctx->pc = 0x2f312cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14 << 16));
label_2f3130:
    // 0x2f3130: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f3130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f3134:
    // 0x2f3134: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2f3134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2f3138:
    // 0x2f3138: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f3138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f313c:
    // 0x2f313c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f313cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f3140:
    // 0x2f3140: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f3140u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2f3144:
    // 0x2f3144: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2f3144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f3148:
    // 0x2f3148: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2f3148u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_2f314c:
    // 0x2f314c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2f314cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_2f3150:
    // 0x2f3150: 0xc0634c8  jal         func_18D320
label_2f3154:
    if (ctx->pc == 0x2F3154u) {
        ctx->pc = 0x2F3158u;
        goto label_2f3158;
    }
    ctx->pc = 0x2F3150u;
    SET_GPR_U32(ctx, 31, 0x2F3158u);
    ctx->pc = 0x18D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D320u, 0x2F3150u, 0x2F3158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3158u;
label_2f3158:
    // 0x2f3158: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2f3158u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2f315c:
    // 0x2f315c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f315cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_2f3160:
    // 0x2f3160: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f3160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
label_2f3164:
    // 0x2f3164: 0x1203004a  beq         $s0, $v1, . + 4 + (0x4A << 2)
label_2f3168:
    if (ctx->pc == 0x2F3168u) {
        ctx->pc = 0x2F316Cu;
        goto label_2f316c;
    }
    ctx->pc = 0x2F3164u;
    {
        const bool branch_taken_0x2f3164 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f3164) {
            ctx->pc = 0x2F3290u;
            goto label_2f3290;
        }
    }
    ctx->pc = 0x2F316Cu;
label_2f316c:
    // 0x2f316c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x2f316cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2f3170:
    // 0x2f3170: 0xa202034d  sb          $v0, 0x34D($s0)
    ctx->pc = 0x2f3170u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 845), (uint8_t)GPR_U32(ctx, 2));
label_2f3174:
    // 0x2f3174: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3178:
    // 0x2f3178: 0xa20202a8  sb          $v0, 0x2A8($s0)
    ctx->pc = 0x2f3178u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 2));
label_2f317c:
    // 0x2f317c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f317cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2f3180:
    // 0x2f3180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3184:
    // 0x2f3184: 0x0  nop
    ctx->pc = 0x2f3184u;
    // NOP
label_2f3188:
    // 0x2f3188: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2f3188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
label_2f318c:
    // 0x2f318c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f318cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2f3190:
    // 0x2f3190: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3194:
    // 0x2f3194: 0x0  nop
    ctx->pc = 0x2f3194u;
    // NOP
label_2f3198:
    // 0x2f3198: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2f3198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
label_2f319c:
    // 0x2f319c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f319cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2f31a0:
    // 0x2f31a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f31a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f31a4:
    // 0x2f31a4: 0x0  nop
    ctx->pc = 0x2f31a4u;
    // NOP
label_2f31a8:
    // 0x2f31a8: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2f31a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
label_2f31ac:
    // 0x2f31ac: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f31acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2f31b0:
    // 0x2f31b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f31b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f31b4:
    // 0x2f31b4: 0x0  nop
    ctx->pc = 0x2f31b4u;
    // NOP
label_2f31b8:
    // 0x2f31b8: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x2f31b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
label_2f31bc:
    // 0x2f31bc: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x2f31bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
label_2f31c0:
    // 0x2f31c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f31c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f31c4:
    // 0x2f31c4: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2f31c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f31c8:
    // 0x2f31c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f31c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f31cc:
    // 0x2f31cc: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x2f31ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
label_2f31d0:
    // 0x2f31d0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2f31d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2f31d4:
    // 0x2f31d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f31d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f31d8:
    // 0x2f31d8: 0x0  nop
    ctx->pc = 0x2f31d8u;
    // NOP
label_2f31dc:
    // 0x2f31dc: 0xe6000270  swc1        $f0, 0x270($s0)
    ctx->pc = 0x2f31dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
label_2f31e0:
    // 0x2f31e0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2f31e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2f31e4:
    // 0x2f31e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f31e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f31e8:
    // 0x2f31e8: 0x0  nop
    ctx->pc = 0x2f31e8u;
    // NOP
label_2f31ec:
    // 0x2f31ec: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x2f31ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
label_2f31f0:
    // 0x2f31f0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2f31f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2f31f4:
    // 0x2f31f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f31f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f31f8:
    // 0x2f31f8: 0x0  nop
    ctx->pc = 0x2f31f8u;
    // NOP
label_2f31fc:
    // 0x2f31fc: 0xe6000278  swc1        $f0, 0x278($s0)
    ctx->pc = 0x2f31fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
label_2f3200:
    // 0x2f3200: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2f3200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2f3204:
    // 0x2f3204: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2f3204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f3208:
    // 0x2f3208: 0xe6000280  swc1        $f0, 0x280($s0)
    ctx->pc = 0x2f3208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
label_2f320c:
    // 0x2f320c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2f320cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2f3210:
    // 0x2f3210: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2f3210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f3214:
    // 0x2f3214: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x2f3214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
label_2f3218:
    // 0x2f3218: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2f3218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2f321c:
    // 0x2f321c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2f321cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f3220:
    // 0x2f3220: 0xe6000288  swc1        $f0, 0x288($s0)
    ctx->pc = 0x2f3220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
label_2f3224:
    // 0x2f3224: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x2f3224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
label_2f3228:
    // 0x2f3228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f322c:
    // 0x2f322c: 0x0  nop
    ctx->pc = 0x2f322cu;
    // NOP
label_2f3230:
    // 0x2f3230: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x2f3230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
label_2f3234:
    // 0x2f3234: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2f3234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2f3238:
    // 0x2f3238: 0xa202034f  sb          $v0, 0x34F($s0)
    ctx->pc = 0x2f3238u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 2));
label_2f323c:
    // 0x2f323c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2f323cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2f3240:
    // 0x2f3240: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x2f3240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_2f3244:
    // 0x2f3244: 0xae020364  sw          $v0, 0x364($s0)
    ctx->pc = 0x2f3244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 2));
label_2f3248:
    // 0x2f3248: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2f3248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2f324c:
    // 0x2f324c: 0x24420012  addiu       $v0, $v0, 0x12
    ctx->pc = 0x2f324cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18));
label_2f3250:
    // 0x2f3250: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f3250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f3254:
    // 0x2f3254: 0xa20202ab  sb          $v0, 0x2AB($s0)
    ctx->pc = 0x2f3254u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 683), (uint8_t)GPR_U32(ctx, 2));
label_2f3258:
    // 0x2f3258: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2f3258u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2f325c:
    // 0x2f325c: 0x8e020350  lw          $v0, 0x350($s0)
    ctx->pc = 0x2f325cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
label_2f3260:
    // 0x2f3260: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2f3260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2f3264:
    // 0x2f3264: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2f3264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_2f3268:
    // 0x2f3268: 0x24426e10  addiu       $v0, $v0, 0x6E10
    ctx->pc = 0x2f3268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28176));
label_2f326c:
    // 0x2f326c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f326cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f3270:
    // 0x2f3270: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f3270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f3274:
    // 0x2f3274: 0x40f809  jalr        $v0
label_2f3278:
    if (ctx->pc == 0x2F3278u) {
        ctx->pc = 0x2F327Cu;
        goto label_2f327c;
    }
    ctx->pc = 0x2F3274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F327Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3274u, 0x2F327Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F327Cu;
label_2f327c:
    // 0x2f327c: 0x8e030ab8  lw          $v1, 0xAB8($s0)
    ctx->pc = 0x2f327cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2744)));
label_2f3280:
    // 0x2f3280: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f3280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2f3284:
    // 0x2f3284: 0xae030ab8  sw          $v1, 0xAB8($s0)
    ctx->pc = 0x2f3284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2744), GPR_U32(ctx, 3));
label_2f3288:
    // 0x2f3288: 0x10000003  b           . + 4 + (0x3 << 2)
label_2f328c:
    if (ctx->pc == 0x2F328Cu) {
        ctx->pc = 0x2F3290u;
        goto label_2f3290;
    }
    ctx->pc = 0x2F3288u;
    {
        const bool branch_taken_0x2f3288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3288) {
            ctx->pc = 0x2F3298u;
            goto label_2f3298;
        }
    }
    ctx->pc = 0x2F3290u;
label_2f3290:
    // 0x2f3290: 0x10000001  b           . + 4 + (0x1 << 2)
label_2f3294:
    if (ctx->pc == 0x2F3294u) {
        ctx->pc = 0x2F3298u;
        goto label_2f3298;
    }
    ctx->pc = 0x2F3290u;
    {
        const bool branch_taken_0x2f3290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3290) {
            ctx->pc = 0x2F3298u;
            goto label_2f3298;
        }
    }
    ctx->pc = 0x2F3298u;
label_2f3298:
    // 0x2f3298: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x2f3298u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f329c:
    // 0x2f329c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f329cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f32a0:
    // 0x2f32a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f32a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f32a4:
    // 0x2f32a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f32a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f32a8:
    // 0x2f32a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f32a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f32ac:
    // 0x2f32ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f32acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f32b0:
    // 0x2f32b0: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2f32b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2f32b4:
    // 0x2f32b4: 0x3e00008  jr          $ra
label_2f32b8:
    if (ctx->pc == 0x2F32B8u) {
        ctx->pc = 0x2F32BCu;
        goto label_fallthrough_0x2f32b4;
    }
    ctx->pc = 0x2F32B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F32B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f32b4:
    ctx->pc = 0x2F32BCu;
}
