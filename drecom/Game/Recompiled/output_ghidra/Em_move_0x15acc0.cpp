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

// Function: Em_move
// Address: 0x15acc0 - 0x15b240
void Em_move_0x15acc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_move_0x15acc0");
#endif

    switch (ctx->pc) {
        case 0x15acc0u: goto label_15acc0;
        case 0x15acc4u: goto label_15acc4;
        case 0x15acc8u: goto label_15acc8;
        case 0x15acccu: goto label_15accc;
        case 0x15acd0u: goto label_15acd0;
        case 0x15acd4u: goto label_15acd4;
        case 0x15acd8u: goto label_15acd8;
        case 0x15acdcu: goto label_15acdc;
        case 0x15ace0u: goto label_15ace0;
        case 0x15ace4u: goto label_15ace4;
        case 0x15ace8u: goto label_15ace8;
        case 0x15acecu: goto label_15acec;
        case 0x15acf0u: goto label_15acf0;
        case 0x15acf4u: goto label_15acf4;
        case 0x15acf8u: goto label_15acf8;
        case 0x15acfcu: goto label_15acfc;
        case 0x15ad00u: goto label_15ad00;
        case 0x15ad04u: goto label_15ad04;
        case 0x15ad08u: goto label_15ad08;
        case 0x15ad0cu: goto label_15ad0c;
        case 0x15ad10u: goto label_15ad10;
        case 0x15ad14u: goto label_15ad14;
        case 0x15ad18u: goto label_15ad18;
        case 0x15ad1cu: goto label_15ad1c;
        case 0x15ad20u: goto label_15ad20;
        case 0x15ad24u: goto label_15ad24;
        case 0x15ad28u: goto label_15ad28;
        case 0x15ad2cu: goto label_15ad2c;
        case 0x15ad30u: goto label_15ad30;
        case 0x15ad34u: goto label_15ad34;
        case 0x15ad38u: goto label_15ad38;
        case 0x15ad3cu: goto label_15ad3c;
        case 0x15ad40u: goto label_15ad40;
        case 0x15ad44u: goto label_15ad44;
        case 0x15ad48u: goto label_15ad48;
        case 0x15ad4cu: goto label_15ad4c;
        case 0x15ad50u: goto label_15ad50;
        case 0x15ad54u: goto label_15ad54;
        case 0x15ad58u: goto label_15ad58;
        case 0x15ad5cu: goto label_15ad5c;
        case 0x15ad60u: goto label_15ad60;
        case 0x15ad64u: goto label_15ad64;
        case 0x15ad68u: goto label_15ad68;
        case 0x15ad6cu: goto label_15ad6c;
        case 0x15ad70u: goto label_15ad70;
        case 0x15ad74u: goto label_15ad74;
        case 0x15ad78u: goto label_15ad78;
        case 0x15ad7cu: goto label_15ad7c;
        case 0x15ad80u: goto label_15ad80;
        case 0x15ad84u: goto label_15ad84;
        case 0x15ad88u: goto label_15ad88;
        case 0x15ad8cu: goto label_15ad8c;
        case 0x15ad90u: goto label_15ad90;
        case 0x15ad94u: goto label_15ad94;
        case 0x15ad98u: goto label_15ad98;
        case 0x15ad9cu: goto label_15ad9c;
        case 0x15ada0u: goto label_15ada0;
        case 0x15ada4u: goto label_15ada4;
        case 0x15ada8u: goto label_15ada8;
        case 0x15adacu: goto label_15adac;
        case 0x15adb0u: goto label_15adb0;
        case 0x15adb4u: goto label_15adb4;
        case 0x15adb8u: goto label_15adb8;
        case 0x15adbcu: goto label_15adbc;
        case 0x15adc0u: goto label_15adc0;
        case 0x15adc4u: goto label_15adc4;
        case 0x15adc8u: goto label_15adc8;
        case 0x15adccu: goto label_15adcc;
        case 0x15add0u: goto label_15add0;
        case 0x15add4u: goto label_15add4;
        case 0x15add8u: goto label_15add8;
        case 0x15addcu: goto label_15addc;
        case 0x15ade0u: goto label_15ade0;
        case 0x15ade4u: goto label_15ade4;
        case 0x15ade8u: goto label_15ade8;
        case 0x15adecu: goto label_15adec;
        case 0x15adf0u: goto label_15adf0;
        case 0x15adf4u: goto label_15adf4;
        case 0x15adf8u: goto label_15adf8;
        case 0x15adfcu: goto label_15adfc;
        case 0x15ae00u: goto label_15ae00;
        case 0x15ae04u: goto label_15ae04;
        case 0x15ae08u: goto label_15ae08;
        case 0x15ae0cu: goto label_15ae0c;
        case 0x15ae10u: goto label_15ae10;
        case 0x15ae14u: goto label_15ae14;
        case 0x15ae18u: goto label_15ae18;
        case 0x15ae1cu: goto label_15ae1c;
        case 0x15ae20u: goto label_15ae20;
        case 0x15ae24u: goto label_15ae24;
        case 0x15ae28u: goto label_15ae28;
        case 0x15ae2cu: goto label_15ae2c;
        case 0x15ae30u: goto label_15ae30;
        case 0x15ae34u: goto label_15ae34;
        case 0x15ae38u: goto label_15ae38;
        case 0x15ae3cu: goto label_15ae3c;
        case 0x15ae40u: goto label_15ae40;
        case 0x15ae44u: goto label_15ae44;
        case 0x15ae48u: goto label_15ae48;
        case 0x15ae4cu: goto label_15ae4c;
        case 0x15ae50u: goto label_15ae50;
        case 0x15ae54u: goto label_15ae54;
        case 0x15ae58u: goto label_15ae58;
        case 0x15ae5cu: goto label_15ae5c;
        case 0x15ae60u: goto label_15ae60;
        case 0x15ae64u: goto label_15ae64;
        case 0x15ae68u: goto label_15ae68;
        case 0x15ae6cu: goto label_15ae6c;
        case 0x15ae70u: goto label_15ae70;
        case 0x15ae74u: goto label_15ae74;
        case 0x15ae78u: goto label_15ae78;
        case 0x15ae7cu: goto label_15ae7c;
        case 0x15ae80u: goto label_15ae80;
        case 0x15ae84u: goto label_15ae84;
        case 0x15ae88u: goto label_15ae88;
        case 0x15ae8cu: goto label_15ae8c;
        case 0x15ae90u: goto label_15ae90;
        case 0x15ae94u: goto label_15ae94;
        case 0x15ae98u: goto label_15ae98;
        case 0x15ae9cu: goto label_15ae9c;
        case 0x15aea0u: goto label_15aea0;
        case 0x15aea4u: goto label_15aea4;
        case 0x15aea8u: goto label_15aea8;
        case 0x15aeacu: goto label_15aeac;
        case 0x15aeb0u: goto label_15aeb0;
        case 0x15aeb4u: goto label_15aeb4;
        case 0x15aeb8u: goto label_15aeb8;
        case 0x15aebcu: goto label_15aebc;
        case 0x15aec0u: goto label_15aec0;
        case 0x15aec4u: goto label_15aec4;
        case 0x15aec8u: goto label_15aec8;
        case 0x15aeccu: goto label_15aecc;
        case 0x15aed0u: goto label_15aed0;
        case 0x15aed4u: goto label_15aed4;
        case 0x15aed8u: goto label_15aed8;
        case 0x15aedcu: goto label_15aedc;
        case 0x15aee0u: goto label_15aee0;
        case 0x15aee4u: goto label_15aee4;
        case 0x15aee8u: goto label_15aee8;
        case 0x15aeecu: goto label_15aeec;
        case 0x15aef0u: goto label_15aef0;
        case 0x15aef4u: goto label_15aef4;
        case 0x15aef8u: goto label_15aef8;
        case 0x15aefcu: goto label_15aefc;
        case 0x15af00u: goto label_15af00;
        case 0x15af04u: goto label_15af04;
        case 0x15af08u: goto label_15af08;
        case 0x15af0cu: goto label_15af0c;
        case 0x15af10u: goto label_15af10;
        case 0x15af14u: goto label_15af14;
        case 0x15af18u: goto label_15af18;
        case 0x15af1cu: goto label_15af1c;
        case 0x15af20u: goto label_15af20;
        case 0x15af24u: goto label_15af24;
        case 0x15af28u: goto label_15af28;
        case 0x15af2cu: goto label_15af2c;
        case 0x15af30u: goto label_15af30;
        case 0x15af34u: goto label_15af34;
        case 0x15af38u: goto label_15af38;
        case 0x15af3cu: goto label_15af3c;
        case 0x15af40u: goto label_15af40;
        case 0x15af44u: goto label_15af44;
        case 0x15af48u: goto label_15af48;
        case 0x15af4cu: goto label_15af4c;
        case 0x15af50u: goto label_15af50;
        case 0x15af54u: goto label_15af54;
        case 0x15af58u: goto label_15af58;
        case 0x15af5cu: goto label_15af5c;
        case 0x15af60u: goto label_15af60;
        case 0x15af64u: goto label_15af64;
        case 0x15af68u: goto label_15af68;
        case 0x15af6cu: goto label_15af6c;
        case 0x15af70u: goto label_15af70;
        case 0x15af74u: goto label_15af74;
        case 0x15af78u: goto label_15af78;
        case 0x15af7cu: goto label_15af7c;
        case 0x15af80u: goto label_15af80;
        case 0x15af84u: goto label_15af84;
        case 0x15af88u: goto label_15af88;
        case 0x15af8cu: goto label_15af8c;
        case 0x15af90u: goto label_15af90;
        case 0x15af94u: goto label_15af94;
        case 0x15af98u: goto label_15af98;
        case 0x15af9cu: goto label_15af9c;
        case 0x15afa0u: goto label_15afa0;
        case 0x15afa4u: goto label_15afa4;
        case 0x15afa8u: goto label_15afa8;
        case 0x15afacu: goto label_15afac;
        case 0x15afb0u: goto label_15afb0;
        case 0x15afb4u: goto label_15afb4;
        case 0x15afb8u: goto label_15afb8;
        case 0x15afbcu: goto label_15afbc;
        case 0x15afc0u: goto label_15afc0;
        case 0x15afc4u: goto label_15afc4;
        case 0x15afc8u: goto label_15afc8;
        case 0x15afccu: goto label_15afcc;
        case 0x15afd0u: goto label_15afd0;
        case 0x15afd4u: goto label_15afd4;
        case 0x15afd8u: goto label_15afd8;
        case 0x15afdcu: goto label_15afdc;
        case 0x15afe0u: goto label_15afe0;
        case 0x15afe4u: goto label_15afe4;
        case 0x15afe8u: goto label_15afe8;
        case 0x15afecu: goto label_15afec;
        case 0x15aff0u: goto label_15aff0;
        case 0x15aff4u: goto label_15aff4;
        case 0x15aff8u: goto label_15aff8;
        case 0x15affcu: goto label_15affc;
        case 0x15b000u: goto label_15b000;
        case 0x15b004u: goto label_15b004;
        case 0x15b008u: goto label_15b008;
        case 0x15b00cu: goto label_15b00c;
        case 0x15b010u: goto label_15b010;
        case 0x15b014u: goto label_15b014;
        case 0x15b018u: goto label_15b018;
        case 0x15b01cu: goto label_15b01c;
        case 0x15b020u: goto label_15b020;
        case 0x15b024u: goto label_15b024;
        case 0x15b028u: goto label_15b028;
        case 0x15b02cu: goto label_15b02c;
        case 0x15b030u: goto label_15b030;
        case 0x15b034u: goto label_15b034;
        case 0x15b038u: goto label_15b038;
        case 0x15b03cu: goto label_15b03c;
        case 0x15b040u: goto label_15b040;
        case 0x15b044u: goto label_15b044;
        case 0x15b048u: goto label_15b048;
        case 0x15b04cu: goto label_15b04c;
        case 0x15b050u: goto label_15b050;
        case 0x15b054u: goto label_15b054;
        case 0x15b058u: goto label_15b058;
        case 0x15b05cu: goto label_15b05c;
        case 0x15b060u: goto label_15b060;
        case 0x15b064u: goto label_15b064;
        case 0x15b068u: goto label_15b068;
        case 0x15b06cu: goto label_15b06c;
        case 0x15b070u: goto label_15b070;
        case 0x15b074u: goto label_15b074;
        case 0x15b078u: goto label_15b078;
        case 0x15b07cu: goto label_15b07c;
        case 0x15b080u: goto label_15b080;
        case 0x15b084u: goto label_15b084;
        case 0x15b088u: goto label_15b088;
        case 0x15b08cu: goto label_15b08c;
        case 0x15b090u: goto label_15b090;
        case 0x15b094u: goto label_15b094;
        case 0x15b098u: goto label_15b098;
        case 0x15b09cu: goto label_15b09c;
        case 0x15b0a0u: goto label_15b0a0;
        case 0x15b0a4u: goto label_15b0a4;
        case 0x15b0a8u: goto label_15b0a8;
        case 0x15b0acu: goto label_15b0ac;
        case 0x15b0b0u: goto label_15b0b0;
        case 0x15b0b4u: goto label_15b0b4;
        case 0x15b0b8u: goto label_15b0b8;
        case 0x15b0bcu: goto label_15b0bc;
        case 0x15b0c0u: goto label_15b0c0;
        case 0x15b0c4u: goto label_15b0c4;
        case 0x15b0c8u: goto label_15b0c8;
        case 0x15b0ccu: goto label_15b0cc;
        case 0x15b0d0u: goto label_15b0d0;
        case 0x15b0d4u: goto label_15b0d4;
        case 0x15b0d8u: goto label_15b0d8;
        case 0x15b0dcu: goto label_15b0dc;
        case 0x15b0e0u: goto label_15b0e0;
        case 0x15b0e4u: goto label_15b0e4;
        case 0x15b0e8u: goto label_15b0e8;
        case 0x15b0ecu: goto label_15b0ec;
        case 0x15b0f0u: goto label_15b0f0;
        case 0x15b0f4u: goto label_15b0f4;
        case 0x15b0f8u: goto label_15b0f8;
        case 0x15b0fcu: goto label_15b0fc;
        case 0x15b100u: goto label_15b100;
        case 0x15b104u: goto label_15b104;
        case 0x15b108u: goto label_15b108;
        case 0x15b10cu: goto label_15b10c;
        case 0x15b110u: goto label_15b110;
        case 0x15b114u: goto label_15b114;
        case 0x15b118u: goto label_15b118;
        case 0x15b11cu: goto label_15b11c;
        case 0x15b120u: goto label_15b120;
        case 0x15b124u: goto label_15b124;
        case 0x15b128u: goto label_15b128;
        case 0x15b12cu: goto label_15b12c;
        case 0x15b130u: goto label_15b130;
        case 0x15b134u: goto label_15b134;
        case 0x15b138u: goto label_15b138;
        case 0x15b13cu: goto label_15b13c;
        case 0x15b140u: goto label_15b140;
        case 0x15b144u: goto label_15b144;
        case 0x15b148u: goto label_15b148;
        case 0x15b14cu: goto label_15b14c;
        case 0x15b150u: goto label_15b150;
        case 0x15b154u: goto label_15b154;
        case 0x15b158u: goto label_15b158;
        case 0x15b15cu: goto label_15b15c;
        case 0x15b160u: goto label_15b160;
        case 0x15b164u: goto label_15b164;
        case 0x15b168u: goto label_15b168;
        case 0x15b16cu: goto label_15b16c;
        case 0x15b170u: goto label_15b170;
        case 0x15b174u: goto label_15b174;
        case 0x15b178u: goto label_15b178;
        case 0x15b17cu: goto label_15b17c;
        case 0x15b180u: goto label_15b180;
        case 0x15b184u: goto label_15b184;
        case 0x15b188u: goto label_15b188;
        case 0x15b18cu: goto label_15b18c;
        case 0x15b190u: goto label_15b190;
        case 0x15b194u: goto label_15b194;
        case 0x15b198u: goto label_15b198;
        case 0x15b19cu: goto label_15b19c;
        case 0x15b1a0u: goto label_15b1a0;
        case 0x15b1a4u: goto label_15b1a4;
        case 0x15b1a8u: goto label_15b1a8;
        case 0x15b1acu: goto label_15b1ac;
        case 0x15b1b0u: goto label_15b1b0;
        case 0x15b1b4u: goto label_15b1b4;
        case 0x15b1b8u: goto label_15b1b8;
        case 0x15b1bcu: goto label_15b1bc;
        case 0x15b1c0u: goto label_15b1c0;
        case 0x15b1c4u: goto label_15b1c4;
        case 0x15b1c8u: goto label_15b1c8;
        case 0x15b1ccu: goto label_15b1cc;
        case 0x15b1d0u: goto label_15b1d0;
        case 0x15b1d4u: goto label_15b1d4;
        case 0x15b1d8u: goto label_15b1d8;
        case 0x15b1dcu: goto label_15b1dc;
        case 0x15b1e0u: goto label_15b1e0;
        case 0x15b1e4u: goto label_15b1e4;
        case 0x15b1e8u: goto label_15b1e8;
        case 0x15b1ecu: goto label_15b1ec;
        case 0x15b1f0u: goto label_15b1f0;
        case 0x15b1f4u: goto label_15b1f4;
        case 0x15b1f8u: goto label_15b1f8;
        case 0x15b1fcu: goto label_15b1fc;
        case 0x15b200u: goto label_15b200;
        case 0x15b204u: goto label_15b204;
        case 0x15b208u: goto label_15b208;
        case 0x15b20cu: goto label_15b20c;
        case 0x15b210u: goto label_15b210;
        case 0x15b214u: goto label_15b214;
        case 0x15b218u: goto label_15b218;
        case 0x15b21cu: goto label_15b21c;
        case 0x15b220u: goto label_15b220;
        case 0x15b224u: goto label_15b224;
        case 0x15b228u: goto label_15b228;
        case 0x15b22cu: goto label_15b22c;
        case 0x15b230u: goto label_15b230;
        case 0x15b234u: goto label_15b234;
        case 0x15b238u: goto label_15b238;
        case 0x15b23cu: goto label_15b23c;
        default: break;
    }

    ctx->pc = 0x15acc0u;

label_15acc0:
    // 0x15acc0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x15acc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_15acc4:
    // 0x15acc4: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x15acc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
label_15acc8:
    // 0x15acc8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15acc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15accc:
    // 0x15accc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15acccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15acd0:
    // 0x15acd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15acd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15acd4:
    // 0x15acd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15acd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15acd8:
    // 0x15acd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15acd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15acdc:
    // 0x15acdc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x15acdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_15ace0:
    // 0x15ace0: 0x2472bb48  addiu       $s2, $v1, -0x44B8
    ctx->pc = 0x15ace0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949704));
label_15ace4:
    // 0x15ace4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x15ace4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_15ace8:
    // 0x15ace8: 0x8c23bb40  lw          $v1, -0x44C0($at)
    ctx->pc = 0x15ace8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949696)));
label_15acec:
    // 0x15acec: 0x1060014b  beqz        $v1, . + 4 + (0x14B << 2)
label_15acf0:
    if (ctx->pc == 0x15ACF0u) {
        ctx->pc = 0x15ACF4u;
        goto label_15acf4;
    }
    ctx->pc = 0x15ACECu;
    {
        const bool branch_taken_0x15acec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15acec) {
            ctx->pc = 0x15B21Cu;
            goto label_15b21c;
        }
    }
    ctx->pc = 0x15ACF4u;
label_15acf4:
    // 0x15acf4: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x15acf4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_15acf8:
    // 0x15acf8: 0x10000115  b           . + 4 + (0x115 << 2)
label_15acfc:
    if (ctx->pc == 0x15ACFCu) {
        ctx->pc = 0x15AD00u;
        goto label_15ad00;
    }
    ctx->pc = 0x15ACF8u;
    {
        const bool branch_taken_0x15acf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15acf8) {
            ctx->pc = 0x15B150u;
            goto label_15b150;
        }
    }
    ctx->pc = 0x15AD00u;
label_15ad00:
    // 0x15ad00: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x15ad00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15ad04:
    // 0x15ad04: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x15ad04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15ad08:
    // 0x15ad08: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x15ad08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_15ad0c:
    // 0x15ad0c: 0x1060010e  beqz        $v1, . + 4 + (0x10E << 2)
label_15ad10:
    if (ctx->pc == 0x15AD10u) {
        ctx->pc = 0x15AD14u;
        goto label_15ad14;
    }
    ctx->pc = 0x15AD0Cu;
    {
        const bool branch_taken_0x15ad0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ad0c) {
            ctx->pc = 0x15B148u;
            goto label_15b148;
        }
    }
    ctx->pc = 0x15AD14u;
label_15ad14:
    // 0x15ad14: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x15ad14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_15ad18:
    // 0x15ad18: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x15ad18u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15ad1c:
    // 0x15ad1c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15ad1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_15ad20:
    // 0x15ad20: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x15ad20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6728)));
label_15ad24:
    // 0x15ad24: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x15ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_15ad28:
    // 0x15ad28: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15ad28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15ad2c:
    // 0x15ad2c: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
label_15ad30:
    if (ctx->pc == 0x15AD30u) {
        ctx->pc = 0x15AD34u;
        goto label_15ad34;
    }
    ctx->pc = 0x15AD2Cu;
    {
        const bool branch_taken_0x15ad2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ad2c) {
            ctx->pc = 0x15AF34u;
            goto label_15af34;
        }
    }
    ctx->pc = 0x15AD34u;
label_15ad34:
    // 0x15ad34: 0x26040170  addiu       $a0, $s0, 0x170
    ctx->pc = 0x15ad34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
label_15ad38:
    // 0x15ad38: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x15ad38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_15ad3c:
    // 0x15ad3c: 0xc040c9e  jal         func_103278
label_15ad40:
    if (ctx->pc == 0x15AD40u) {
        ctx->pc = 0x15AD44u;
        goto label_15ad44;
    }
    ctx->pc = 0x15AD3Cu;
    SET_GPR_U32(ctx, 31, 0x15AD44u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x15AD44u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15AD44u) { return; }
    ctx->pc = 0x15AD44u;
label_15ad44:
    // 0x15ad44: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15ad44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_15ad48:
    // 0x15ad48: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x15ad48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_15ad4c:
    // 0x15ad4c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15ad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_15ad50:
    // 0x15ad50: 0x2446dce0  addiu       $a2, $v0, -0x2320
    ctx->pc = 0x15ad50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_15ad54:
    // 0x15ad54: 0xc0675b0  jal         func_19D6C0
label_15ad58:
    if (ctx->pc == 0x15AD58u) {
        ctx->pc = 0x15AD5Cu;
        goto label_15ad5c;
    }
    ctx->pc = 0x15AD54u;
    SET_GPR_U32(ctx, 31, 0x15AD5Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x15AD54u, 0x15AD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AD5Cu;
label_15ad5c:
    // 0x15ad5c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15ad5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_15ad60:
    // 0x15ad60: 0xc067588  jal         func_19D620
label_15ad64:
    if (ctx->pc == 0x15AD64u) {
        ctx->pc = 0x15AD68u;
        goto label_15ad68;
    }
    ctx->pc = 0x15AD60u;
    SET_GPR_U32(ctx, 31, 0x15AD68u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x15AD60u, 0x15AD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AD68u;
label_15ad68:
    // 0x15ad68: 0xe6001288  swc1        $f0, 0x1288($s0)
    ctx->pc = 0x15ad68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4744), bits); }
label_15ad6c:
    // 0x15ad6c: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x15ad6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15ad70:
    // 0x15ad70: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x15ad70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15ad74:
    // 0x15ad74: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x15ad74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_15ad78:
    // 0x15ad78: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x15ad78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15ad7c:
    // 0x15ad7c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x15ad7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15ad80:
    // 0x15ad80: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15ad80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_15ad84:
    // 0x15ad84: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x15ad84u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_15ad88:
    // 0x15ad88: 0xc06757c  jal         func_19D5F0
label_15ad8c:
    if (ctx->pc == 0x15AD8Cu) {
        ctx->pc = 0x15AD90u;
        goto label_15ad90;
    }
    ctx->pc = 0x15AD88u;
    SET_GPR_U32(ctx, 31, 0x15AD90u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x15AD88u, 0x15AD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AD90u;
label_15ad90:
    // 0x15ad90: 0xe600128c  swc1        $f0, 0x128C($s0)
    ctx->pc = 0x15ad90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4748), bits); }
label_15ad94:
    // 0x15ad94: 0x920210a8  lbu         $v0, 0x10A8($s0)
    ctx->pc = 0x15ad94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4264)));
label_15ad98:
    // 0x15ad98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15ad98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15ad9c:
    // 0x15ad9c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x15ad9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_15ada0:
    // 0x15ada0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_15ada4:
    if (ctx->pc == 0x15ADA4u) {
        ctx->pc = 0x15ADA8u;
        goto label_15ada8;
    }
    ctx->pc = 0x15ADA0u;
    {
        const bool branch_taken_0x15ada0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ada0) {
            ctx->pc = 0x15ADD0u;
            goto label_15add0;
        }
    }
    ctx->pc = 0x15ADA8u;
label_15ada8:
    // 0x15ada8: 0x920210a8  lbu         $v0, 0x10A8($s0)
    ctx->pc = 0x15ada8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4264)));
label_15adac:
    // 0x15adac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15adacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15adb0:
    // 0x15adb0: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x15adb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_15adb4:
    // 0x15adb4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x15adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_15adb8:
    // 0x15adb8: 0x920210a8  lbu         $v0, 0x10A8($s0)
    ctx->pc = 0x15adb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4264)));
label_15adbc:
    // 0x15adbc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15adbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15adc0:
    // 0x15adc0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x15adc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_15adc4:
    // 0x15adc4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x15adc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_15adc8:
    // 0x15adc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15adc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15adcc:
    // 0x15adcc: 0xa20210a8  sb          $v0, 0x10A8($s0)
    ctx->pc = 0x15adccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4264), (uint8_t)GPR_U32(ctx, 2));
label_15add0:
    // 0x15add0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15add0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_15add4:
    // 0x15add4: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x15add4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
label_15add8:
    // 0x15add8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15add8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15addc:
    // 0x15addc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15addcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15ade0:
    // 0x15ade0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x15ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_15ade4:
    // 0x15ade4: 0x24425630  addiu       $v0, $v0, 0x5630
    ctx->pc = 0x15ade4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22064));
label_15ade8:
    // 0x15ade8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15adec:
    // 0x15adec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15adecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15adf0:
    // 0x15adf0: 0x40f809  jalr        $v0
label_15adf4:
    if (ctx->pc == 0x15ADF4u) {
        ctx->pc = 0x15ADF8u;
        goto label_15adf8;
    }
    ctx->pc = 0x15ADF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15ADF8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15ADF0u, 0x15ADF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15ADF8u;
label_15adf8:
    // 0x15adf8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15adf8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_15adfc:
    // 0x15adfc: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x15adfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
label_15ae00:
    // 0x15ae00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15ae00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15ae04:
    // 0x15ae04: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15ae04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15ae08:
    // 0x15ae08: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x15ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_15ae0c:
    // 0x15ae0c: 0x24425590  addiu       $v0, $v0, 0x5590
    ctx->pc = 0x15ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21904));
label_15ae10:
    // 0x15ae10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15ae14:
    // 0x15ae14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15ae18:
    // 0x15ae18: 0x40f809  jalr        $v0
label_15ae1c:
    if (ctx->pc == 0x15AE1Cu) {
        ctx->pc = 0x15AE20u;
        goto label_15ae20;
    }
    ctx->pc = 0x15AE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15AE20u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AE18u, 0x15AE20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15AE20u;
label_15ae20:
    // 0x15ae20: 0x920209de  lbu         $v0, 0x9DE($s0)
    ctx->pc = 0x15ae20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2526)));
label_15ae24:
    // 0x15ae24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15ae24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15ae28:
    // 0x15ae28: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x15ae28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_15ae2c:
    // 0x15ae2c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_15ae30:
    if (ctx->pc == 0x15AE30u) {
        ctx->pc = 0x15AE34u;
        goto label_15ae34;
    }
    ctx->pc = 0x15AE2Cu;
    {
        const bool branch_taken_0x15ae2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ae2c) {
            ctx->pc = 0x15AF00u;
            goto label_15af00;
        }
    }
    ctx->pc = 0x15AE34u;
label_15ae34:
    // 0x15ae34: 0x920209de  lbu         $v0, 0x9DE($s0)
    ctx->pc = 0x15ae34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2526)));
label_15ae38:
    // 0x15ae38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15ae38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15ae3c:
    // 0x15ae3c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x15ae3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_15ae40:
    // 0x15ae40: 0x244204ff  addiu       $v0, $v0, 0x4FF
    ctx->pc = 0x15ae40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1279));
label_15ae44:
    // 0x15ae44: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15ae44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15ae48:
    // 0x15ae48: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x15ae48u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15ae4c:
    // 0x15ae4c: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x15ae4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
label_15ae50:
    // 0x15ae50: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x15ae50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15ae54:
    // 0x15ae54: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x15ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_15ae58:
    // 0x15ae58: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_15ae5c:
    if (ctx->pc == 0x15AE5Cu) {
        ctx->pc = 0x15AE60u;
        goto label_15ae60;
    }
    ctx->pc = 0x15AE58u;
    {
        const bool branch_taken_0x15ae58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15ae58) {
            ctx->pc = 0x15AE78u;
            goto label_15ae78;
        }
    }
    ctx->pc = 0x15AE60u;
label_15ae60:
    // 0x15ae60: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x15ae60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
label_15ae64:
    // 0x15ae64: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x15ae64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15ae68:
    // 0x15ae68: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x15ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_15ae6c:
    // 0x15ae6c: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
label_15ae70:
    if (ctx->pc == 0x15AE70u) {
        ctx->pc = 0x15AE74u;
        goto label_15ae74;
    }
    ctx->pc = 0x15AE6Cu;
    {
        const bool branch_taken_0x15ae6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15ae6c) {
            ctx->pc = 0x15AED8u;
            goto label_15aed8;
        }
    }
    ctx->pc = 0x15AE74u;
label_15ae74:
    // 0x15ae74: 0x0  nop
    ctx->pc = 0x15ae74u;
    // NOP
label_15ae78:
    // 0x15ae78: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x15ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_15ae7c:
    // 0x15ae7c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x15ae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_15ae80:
    // 0x15ae80: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x15ae80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_15ae84:
    // 0x15ae84: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x15ae84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_15ae88:
    // 0x15ae88: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x15ae88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_15ae8c:
    // 0x15ae8c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15ae8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_15ae90:
    // 0x15ae90: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x15ae90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958320)));
label_15ae94:
    // 0x15ae94: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x15ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_15ae98:
    // 0x15ae98: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15ae98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15ae9c:
    // 0x15ae9c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x15ae9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_15aea0:
    // 0x15aea0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x15aea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_15aea4:
    // 0x15aea4: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x15aea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_15aea8:
    // 0x15aea8: 0xc040c70  jal         func_1031C0
label_15aeac:
    if (ctx->pc == 0x15AEACu) {
        ctx->pc = 0x15AEB0u;
        goto label_15aeb0;
    }
    ctx->pc = 0x15AEA8u;
    SET_GPR_U32(ctx, 31, 0x15AEB0u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x15AEB0u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15AEB0u) { return; }
    ctx->pc = 0x15AEB0u;
label_15aeb0:
    // 0x15aeb0: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x15aeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_15aeb4:
    // 0x15aeb4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15aeb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_15aeb8:
    // 0x15aeb8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15aeb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15aebc:
    // 0x15aebc: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x15aebcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_15aec0:
    // 0x15aec0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x15aec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_15aec4:
    // 0x15aec4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x15aec4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_15aec8:
    // 0x15aec8: 0xc067b18  jal         func_19EC60
label_15aecc:
    if (ctx->pc == 0x15AECCu) {
        ctx->pc = 0x15AED0u;
        goto label_15aed0;
    }
    ctx->pc = 0x15AEC8u;
    SET_GPR_U32(ctx, 31, 0x15AED0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x15AEC8u, 0x15AED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AED0u;
label_15aed0:
    // 0x15aed0: 0x1000000b  b           . + 4 + (0xB << 2)
label_15aed4:
    if (ctx->pc == 0x15AED4u) {
        ctx->pc = 0x15AED8u;
        goto label_15aed8;
    }
    ctx->pc = 0x15AED0u;
    {
        const bool branch_taken_0x15aed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15aed0) {
            ctx->pc = 0x15AF00u;
            goto label_15af00;
        }
    }
    ctx->pc = 0x15AED8u;
label_15aed8:
    // 0x15aed8: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x15aed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_15aedc:
    // 0x15aedc: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x15aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_15aee0:
    // 0x15aee0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15aee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_15aee4:
    // 0x15aee4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15aee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15aee8:
    // 0x15aee8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x15aee8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_15aeec:
    // 0x15aeec: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x15aeecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_15aef0:
    // 0x15aef0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x15aef0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_15aef4:
    // 0x15aef4: 0xc067b18  jal         func_19EC60
label_15aef8:
    if (ctx->pc == 0x15AEF8u) {
        ctx->pc = 0x15AEFCu;
        goto label_15aefc;
    }
    ctx->pc = 0x15AEF4u;
    SET_GPR_U32(ctx, 31, 0x15AEFCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x15AEF4u, 0x15AEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AEFCu;
label_15aefc:
    // 0x15aefc: 0x0  nop
    ctx->pc = 0x15aefcu;
    // NOP
label_15af00:
    // 0x15af00: 0x960210a4  lhu         $v0, 0x10A4($s0)
    ctx->pc = 0x15af00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4260)));
label_15af04:
    // 0x15af04: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15af04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15af08:
    // 0x15af08: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x15af08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_15af0c:
    // 0x15af0c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15af0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_15af10:
    // 0x15af10: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x15af10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 316)));
label_15af14:
    // 0x15af14: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x15af14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_15af18:
    // 0x15af18: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_15af1c:
    if (ctx->pc == 0x15AF1Cu) {
        ctx->pc = 0x15AF20u;
        goto label_15af20;
    }
    ctx->pc = 0x15AF18u;
    {
        const bool branch_taken_0x15af18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15af18) {
            ctx->pc = 0x15AF40u;
            goto label_15af40;
        }
    }
    ctx->pc = 0x15AF20u;
label_15af20:
    // 0x15af20: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15af20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_15af24:
    // 0x15af24: 0xc0656e4  jal         func_195B90
label_15af28:
    if (ctx->pc == 0x15AF28u) {
        ctx->pc = 0x15AF2Cu;
        goto label_15af2c;
    }
    ctx->pc = 0x15AF24u;
    SET_GPR_U32(ctx, 31, 0x15AF2Cu);
    ctx->pc = 0x195B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195B90u, 0x15AF24u, 0x15AF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AF2Cu;
label_15af2c:
    // 0x15af2c: 0x10000004  b           . + 4 + (0x4 << 2)
label_15af30:
    if (ctx->pc == 0x15AF30u) {
        ctx->pc = 0x15AF34u;
        goto label_15af34;
    }
    ctx->pc = 0x15AF2Cu;
    {
        const bool branch_taken_0x15af2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15af2c) {
            ctx->pc = 0x15AF40u;
            goto label_15af40;
        }
    }
    ctx->pc = 0x15AF34u;
label_15af34:
    // 0x15af34: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15af34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_15af38:
    // 0x15af38: 0xc097b94  jal         func_25EE50
label_15af3c:
    if (ctx->pc == 0x15AF3Cu) {
        ctx->pc = 0x15AF40u;
        goto label_15af40;
    }
    ctx->pc = 0x15AF38u;
    SET_GPR_U32(ctx, 31, 0x15AF40u);
    ctx->pc = 0x25EE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EE50u, 0x15AF38u, 0x15AF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AF40u;
label_15af40:
    // 0x15af40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15af40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_15af44:
    // 0x15af44: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x15af44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_15af48:
    // 0x15af48: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x15af48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15af4c:
    // 0x15af4c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x15af4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_15af50:
    // 0x15af50: 0xc095c94  jal         func_257250
label_15af54:
    if (ctx->pc == 0x15AF54u) {
        ctx->pc = 0x15AF58u;
        goto label_15af58;
    }
    ctx->pc = 0x15AF50u;
    SET_GPR_U32(ctx, 31, 0x15AF58u);
    ctx->pc = 0x257250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257250u, 0x15AF50u, 0x15AF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AF58u;
label_15af58:
    // 0x15af58: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15af58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_15af5c:
    // 0x15af5c: 0xc07932c  jal         func_1E4CB0
label_15af60:
    if (ctx->pc == 0x15AF60u) {
        ctx->pc = 0x15AF64u;
        goto label_15af64;
    }
    ctx->pc = 0x15AF5Cu;
    SET_GPR_U32(ctx, 31, 0x15AF64u);
    ctx->pc = 0x1E4CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4CB0u, 0x15AF5Cu, 0x15AF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AF64u;
label_15af64:
    // 0x15af64: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x15af64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15af68:
    // 0x15af68: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x15af68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_15af6c:
    // 0x15af6c: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_15af70:
    if (ctx->pc == 0x15AF70u) {
        ctx->pc = 0x15AF74u;
        goto label_15af74;
    }
    ctx->pc = 0x15AF6Cu;
    {
        const bool branch_taken_0x15af6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15af6c) {
            ctx->pc = 0x15B014u;
            goto label_15b014;
        }
    }
    ctx->pc = 0x15AF74u;
label_15af74:
    // 0x15af74: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x15af74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15af78:
    // 0x15af78: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x15af78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_15af7c:
    // 0x15af7c: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
label_15af80:
    if (ctx->pc == 0x15AF80u) {
        ctx->pc = 0x15AF84u;
        goto label_15af84;
    }
    ctx->pc = 0x15AF7Cu;
    {
        const bool branch_taken_0x15af7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15af7c) {
            ctx->pc = 0x15B014u;
            goto label_15b014;
        }
    }
    ctx->pc = 0x15AF84u;
label_15af84:
    // 0x15af84: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x15af84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_15af88:
    // 0x15af88: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15af88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15af8c:
    // 0x15af8c: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x15af8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
label_15af90:
    // 0x15af90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_15af94:
    if (ctx->pc == 0x15AF94u) {
        ctx->pc = 0x15AF98u;
        goto label_15af98;
    }
    ctx->pc = 0x15AF90u;
    {
        const bool branch_taken_0x15af90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15af90) {
            ctx->pc = 0x15AFACu;
            goto label_15afac;
        }
    }
    ctx->pc = 0x15AF98u;
label_15af98:
    // 0x15af98: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15af98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_15af9c:
    // 0x15af9c: 0xc05c7e0  jal         func_171F80
label_15afa0:
    if (ctx->pc == 0x15AFA0u) {
        ctx->pc = 0x15AFA4u;
        goto label_15afa4;
    }
    ctx->pc = 0x15AF9Cu;
    SET_GPR_U32(ctx, 31, 0x15AFA4u);
    ctx->pc = 0x171F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171F80u, 0x15AF9Cu, 0x15AFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AFA4u;
label_15afa4:
    // 0x15afa4: 0x1000000e  b           . + 4 + (0xE << 2)
label_15afa8:
    if (ctx->pc == 0x15AFA8u) {
        ctx->pc = 0x15AFACu;
        goto label_15afac;
    }
    ctx->pc = 0x15AFA4u;
    {
        const bool branch_taken_0x15afa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15afa4) {
            ctx->pc = 0x15AFE0u;
            goto label_15afe0;
        }
    }
    ctx->pc = 0x15AFACu;
label_15afac:
    // 0x15afac: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x15afacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_15afb0:
    // 0x15afb0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15afb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15afb4:
    // 0x15afb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15afb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15afb8:
    // 0x15afb8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_15afbc:
    if (ctx->pc == 0x15AFBCu) {
        ctx->pc = 0x15AFC0u;
        goto label_15afc0;
    }
    ctx->pc = 0x15AFB8u;
    {
        const bool branch_taken_0x15afb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15afb8) {
            ctx->pc = 0x15AFD4u;
            goto label_15afd4;
        }
    }
    ctx->pc = 0x15AFC0u;
label_15afc0:
    // 0x15afc0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15afc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_15afc4:
    // 0x15afc4: 0xc05c40c  jal         func_171030
label_15afc8:
    if (ctx->pc == 0x15AFC8u) {
        ctx->pc = 0x15AFCCu;
        goto label_15afcc;
    }
    ctx->pc = 0x15AFC4u;
    SET_GPR_U32(ctx, 31, 0x15AFCCu);
    ctx->pc = 0x171030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171030u, 0x15AFC4u, 0x15AFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AFCCu;
label_15afcc:
    // 0x15afcc: 0x10000004  b           . + 4 + (0x4 << 2)
label_15afd0:
    if (ctx->pc == 0x15AFD0u) {
        ctx->pc = 0x15AFD4u;
        goto label_15afd4;
    }
    ctx->pc = 0x15AFCCu;
    {
        const bool branch_taken_0x15afcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15afcc) {
            ctx->pc = 0x15AFE0u;
            goto label_15afe0;
        }
    }
    ctx->pc = 0x15AFD4u;
label_15afd4:
    // 0x15afd4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15afd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_15afd8:
    // 0x15afd8: 0xc05c04c  jal         func_170130
label_15afdc:
    if (ctx->pc == 0x15AFDCu) {
        ctx->pc = 0x15AFE0u;
        goto label_15afe0;
    }
    ctx->pc = 0x15AFD8u;
    SET_GPR_U32(ctx, 31, 0x15AFE0u);
    ctx->pc = 0x170130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170130u, 0x15AFD8u, 0x15AFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AFE0u;
label_15afe0:
    // 0x15afe0: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x15afe0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_15afe4:
    // 0x15afe4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15afe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15afe8:
    // 0x15afe8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x15afe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_15afec:
    // 0x15afec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_15aff0:
    if (ctx->pc == 0x15AFF0u) {
        ctx->pc = 0x15AFF4u;
        goto label_15aff4;
    }
    ctx->pc = 0x15AFECu;
    {
        const bool branch_taken_0x15afec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15afec) {
            ctx->pc = 0x15B000u;
            goto label_15b000;
        }
    }
    ctx->pc = 0x15AFF4u;
label_15aff4:
    // 0x15aff4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15aff4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_15aff8:
    // 0x15aff8: 0xc056c90  jal         func_15B240
label_15affc:
    if (ctx->pc == 0x15AFFCu) {
        ctx->pc = 0x15B000u;
        goto label_15b000;
    }
    ctx->pc = 0x15AFF8u;
    SET_GPR_U32(ctx, 31, 0x15B000u);
    ctx->pc = 0x15B240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B240u, 0x15AFF8u, 0x15B000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B000u;
label_15b000:
    // 0x15b000: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15b000u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_15b004:
    // 0x15b004: 0xc095df0  jal         func_2577C0
label_15b008:
    if (ctx->pc == 0x15B008u) {
        ctx->pc = 0x15B00Cu;
        goto label_15b00c;
    }
    ctx->pc = 0x15B004u;
    SET_GPR_U32(ctx, 31, 0x15B00Cu);
    ctx->pc = 0x2577C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2577C0u, 0x15B004u, 0x15B00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B00Cu;
label_15b00c:
    // 0x15b00c: 0x10000010  b           . + 4 + (0x10 << 2)
label_15b010:
    if (ctx->pc == 0x15B010u) {
        ctx->pc = 0x15B014u;
        goto label_15b014;
    }
    ctx->pc = 0x15B00Cu;
    {
        const bool branch_taken_0x15b00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b00c) {
            ctx->pc = 0x15B050u;
            goto label_15b050;
        }
    }
    ctx->pc = 0x15B014u;
label_15b014:
    // 0x15b014: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_15b018:
    // 0x15b018: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x15b018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_15b01c:
    // 0x15b01c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x15b01cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_15b020:
    // 0x15b020: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15b020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15b024:
    // 0x15b024: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15b024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_15b028:
    // 0x15b028: 0x8c630064  lw          $v1, 0x64($v1)
    ctx->pc = 0x15b028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_15b02c:
    // 0x15b02c: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x15b02cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
label_15b030:
    // 0x15b030: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_15b034:
    // 0x15b034: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x15b034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_15b038:
    // 0x15b038: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x15b038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_15b03c:
    // 0x15b03c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15b03cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15b040:
    // 0x15b040: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15b040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_15b044:
    // 0x15b044: 0x8c630138  lw          $v1, 0x138($v1)
    ctx->pc = 0x15b044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
label_15b048:
    // 0x15b048: 0xae030134  sw          $v1, 0x134($s0)
    ctx->pc = 0x15b048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 3));
label_15b04c:
    // 0x15b04c: 0x0  nop
    ctx->pc = 0x15b04cu;
    // NOP
label_15b050:
    // 0x15b050: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x15b050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_15b054:
    // 0x15b054: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x15b054u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_15b058:
    // 0x15b058: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15b058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_15b05c:
    // 0x15b05c: 0x1083003a  beq         $a0, $v1, . + 4 + (0x3A << 2)
label_15b060:
    if (ctx->pc == 0x15B060u) {
        ctx->pc = 0x15B064u;
        goto label_15b064;
    }
    ctx->pc = 0x15B05Cu;
    {
        const bool branch_taken_0x15b05c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15b05c) {
            ctx->pc = 0x15B148u;
            goto label_15b148;
        }
    }
    ctx->pc = 0x15B064u;
label_15b064:
    // 0x15b064: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x15b064u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_15b068:
    // 0x15b068: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x15b068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_15b06c:
    // 0x15b06c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x15b06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15b070:
    // 0x15b070: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
label_15b074:
    if (ctx->pc == 0x15B074u) {
        ctx->pc = 0x15B078u;
        goto label_15b078;
    }
    ctx->pc = 0x15B070u;
    {
        const bool branch_taken_0x15b070 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15b070) {
            ctx->pc = 0x15B148u;
            goto label_15b148;
        }
    }
    ctx->pc = 0x15B078u;
label_15b078:
    // 0x15b078: 0x92030012  lbu         $v1, 0x12($s0)
    ctx->pc = 0x15b078u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
label_15b07c:
    // 0x15b07c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15b07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_15b080:
    // 0x15b080: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x15b080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_15b084:
    // 0x15b084: 0x2065fff5  addi        $a1, $v1, -0xB
    ctx->pc = 0x15b084u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4294967285, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_15b088:
    // 0x15b088: 0x2ca1000d  sltiu       $at, $a1, 0xD
    ctx->pc = 0x15b088u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_15b08c:
    // 0x15b08c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_15b090:
    if (ctx->pc == 0x15B090u) {
        ctx->pc = 0x15B094u;
        goto label_15b094;
    }
    ctx->pc = 0x15B08Cu;
    {
        const bool branch_taken_0x15b08c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b08c) {
            ctx->pc = 0x15B0E0u;
            goto label_15b0e0;
        }
    }
    ctx->pc = 0x15B094u;
label_15b094:
    // 0x15b094: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x15b094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_15b098:
    // 0x15b098: 0x2464e9e0  addiu       $a0, $v1, -0x1620
    ctx->pc = 0x15b098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961632));
label_15b09c:
    // 0x15b09c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x15b09cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_15b0a0:
    // 0x15b0a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15b0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15b0a4:
    // 0x15b0a4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15b0a8:
    // 0x15b0a8: 0x600008  jr          $v1
label_15b0ac:
    if (ctx->pc == 0x15B0ACu) {
        ctx->pc = 0x15B0B0u;
        goto label_15b0b0;
    }
    ctx->pc = 0x15B0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B0A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x15B0B0u;
label_15b0b0:
    // 0x15b0b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b0b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_15b0b4:
    // 0x15b0b4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x15b0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_15b0b8:
    // 0x15b0b8: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x15b0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_15b0bc:
    // 0x15b0bc: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_15b0c0:
    if (ctx->pc == 0x15B0C0u) {
        ctx->pc = 0x15B0C4u;
        goto label_15b0c4;
    }
    ctx->pc = 0x15B0BCu;
    {
        const bool branch_taken_0x15b0bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b0bc) {
            ctx->pc = 0x15B108u;
            goto label_15b108;
        }
    }
    ctx->pc = 0x15B0C4u;
label_15b0c4:
    // 0x15b0c4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15b0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_15b0c8:
    // 0x15b0c8: 0x8423ef68  lh          $v1, -0x1098($at)
    ctx->pc = 0x15b0c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963048)));
label_15b0cc:
    // 0x15b0cc: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x15b0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_15b0d0:
    // 0x15b0d0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15b0d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_15b0d4:
    // 0x15b0d4: 0xa423ef68  sh          $v1, -0x1098($at)
    ctx->pc = 0x15b0d4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294963048), (uint16_t)GPR_U32(ctx, 3));
label_15b0d8:
    // 0x15b0d8: 0x1000000b  b           . + 4 + (0xB << 2)
label_15b0dc:
    if (ctx->pc == 0x15B0DCu) {
        ctx->pc = 0x15B0E0u;
        goto label_15b0e0;
    }
    ctx->pc = 0x15B0D8u;
    {
        const bool branch_taken_0x15b0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b0d8) {
            ctx->pc = 0x15B108u;
            goto label_15b108;
        }
    }
    ctx->pc = 0x15B0E0u;
label_15b0e0:
    // 0x15b0e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_15b0e4:
    // 0x15b0e4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x15b0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_15b0e8:
    // 0x15b0e8: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x15b0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_15b0ec:
    // 0x15b0ec: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_15b0f0:
    if (ctx->pc == 0x15B0F0u) {
        ctx->pc = 0x15B0F4u;
        goto label_15b0f4;
    }
    ctx->pc = 0x15B0ECu;
    {
        const bool branch_taken_0x15b0ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b0ec) {
            ctx->pc = 0x15B108u;
            goto label_15b108;
        }
    }
    ctx->pc = 0x15B0F4u;
label_15b0f4:
    // 0x15b0f4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15b0f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_15b0f8:
    // 0x15b0f8: 0x8423ef68  lh          $v1, -0x1098($at)
    ctx->pc = 0x15b0f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963048)));
label_15b0fc:
    // 0x15b0fc: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x15b0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
label_15b100:
    // 0x15b100: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15b100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_15b104:
    // 0x15b104: 0xa423ef68  sh          $v1, -0x1098($at)
    ctx->pc = 0x15b104u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294963048), (uint16_t)GPR_U32(ctx, 3));
label_15b108:
    // 0x15b108: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15b108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_15b10c:
    // 0x15b10c: 0x8423ef68  lh          $v1, -0x1098($at)
    ctx->pc = 0x15b10cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963048)));
label_15b110:
    // 0x15b110: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x15b110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_15b114:
    // 0x15b114: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x15b114u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_15b118:
    // 0x15b118: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15b118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_15b11c:
    // 0x15b11c: 0x8423ef6a  lh          $v1, -0x1096($at)
    ctx->pc = 0x15b11cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963050)));
label_15b120:
    // 0x15b120: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x15b120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_15b124:
    // 0x15b124: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x15b124u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_15b128:
    // 0x15b128: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x15b128u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_15b12c:
    // 0x15b12c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_15b130:
    if (ctx->pc == 0x15B130u) {
        ctx->pc = 0x15B134u;
        goto label_15b134;
    }
    ctx->pc = 0x15B12Cu;
    {
        const bool branch_taken_0x15b12c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b12c) {
            ctx->pc = 0x15B148u;
            goto label_15b148;
        }
    }
    ctx->pc = 0x15B134u;
label_15b134:
    // 0x15b134: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15b134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_15b138:
    // 0x15b138: 0x8423ef6a  lh          $v1, -0x1096($at)
    ctx->pc = 0x15b138u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963050)));
label_15b13c:
    // 0x15b13c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15b13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_15b140:
    // 0x15b140: 0xa423ef68  sh          $v1, -0x1098($at)
    ctx->pc = 0x15b140u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294963048), (uint16_t)GPR_U32(ctx, 3));
label_15b144:
    // 0x15b144: 0x0  nop
    ctx->pc = 0x15b144u;
    // NOP
label_15b148:
    // 0x15b148: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x15b148u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_15b14c:
    // 0x15b14c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15b14cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_15b150:
    // 0x15b150: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x15b150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_15b154:
    // 0x15b154: 0x8c23bb40  lw          $v1, -0x44C0($at)
    ctx->pc = 0x15b154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949696)));
label_15b158:
    // 0x15b158: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x15b158u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_15b15c:
    // 0x15b15c: 0x1460fee8  bnez        $v1, . + 4 + (-0x118 << 2)
label_15b160:
    if (ctx->pc == 0x15B160u) {
        ctx->pc = 0x15B164u;
        goto label_15b164;
    }
    ctx->pc = 0x15B15Cu;
    {
        const bool branch_taken_0x15b15c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b15c) {
            ctx->pc = 0x15AD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ad00;
        }
    }
    ctx->pc = 0x15B164u;
label_15b164:
    // 0x15b164: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x15b164u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15b168:
    // 0x15b168: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x15b168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15b16c:
    // 0x15b16c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x15b16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_15b170:
    // 0x15b170: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_15b174:
    if (ctx->pc == 0x15B174u) {
        ctx->pc = 0x15B178u;
        goto label_15b178;
    }
    ctx->pc = 0x15B170u;
    {
        const bool branch_taken_0x15b170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b170) {
            ctx->pc = 0x15B1D0u;
            goto label_15b1d0;
        }
    }
    ctx->pc = 0x15B178u;
label_15b178:
    // 0x15b178: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_15b17c:
    // 0x15b17c: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x15b17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6728)));
label_15b180:
    // 0x15b180: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x15b180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_15b184:
    // 0x15b184: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15b184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15b188:
    // 0x15b188: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_15b18c:
    if (ctx->pc == 0x15B18Cu) {
        ctx->pc = 0x15B190u;
        goto label_15b190;
    }
    ctx->pc = 0x15B188u;
    {
        const bool branch_taken_0x15b188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b188) {
            ctx->pc = 0x15B19Cu;
            goto label_15b19c;
        }
    }
    ctx->pc = 0x15B190u;
label_15b190:
    // 0x15b190: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15b190u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_15b194:
    // 0x15b194: 0xc05d054  jal         func_174150
label_15b198:
    if (ctx->pc == 0x15B198u) {
        ctx->pc = 0x15B19Cu;
        goto label_15b19c;
    }
    ctx->pc = 0x15B194u;
    SET_GPR_U32(ctx, 31, 0x15B19Cu);
    ctx->pc = 0x174150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174150u, 0x15B194u, 0x15B19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B19Cu;
label_15b19c:
    // 0x15b19c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15b19cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_15b1a0:
    // 0x15b1a0: 0xc05c04c  jal         func_170130
label_15b1a4:
    if (ctx->pc == 0x15B1A4u) {
        ctx->pc = 0x15B1A8u;
        goto label_15b1a8;
    }
    ctx->pc = 0x15B1A0u;
    SET_GPR_U32(ctx, 31, 0x15B1A8u);
    ctx->pc = 0x170130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170130u, 0x15B1A0u, 0x15B1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B1A8u;
label_15b1a8:
    // 0x15b1a8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15b1a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_15b1ac:
    // 0x15b1ac: 0xc097a5c  jal         func_25E970
label_15b1b0:
    if (ctx->pc == 0x15B1B0u) {
        ctx->pc = 0x15B1B4u;
        goto label_15b1b4;
    }
    ctx->pc = 0x15B1ACu;
    SET_GPR_U32(ctx, 31, 0x15B1B4u);
    ctx->pc = 0x25E970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E970u, 0x15B1ACu, 0x15B1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B1B4u;
label_15b1b4:
    // 0x15b1b4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x15b1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15b1b8:
    // 0x15b1b8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x15b1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_15b1bc:
    // 0x15b1bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_15b1c0:
    if (ctx->pc == 0x15B1C0u) {
        ctx->pc = 0x15B1C4u;
        goto label_15b1c4;
    }
    ctx->pc = 0x15B1BCu;
    {
        const bool branch_taken_0x15b1bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b1bc) {
            ctx->pc = 0x15B1D0u;
            goto label_15b1d0;
        }
    }
    ctx->pc = 0x15B1C4u;
label_15b1c4:
    // 0x15b1c4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15b1c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_15b1c8:
    // 0x15b1c8: 0xc095df0  jal         func_2577C0
label_15b1cc:
    if (ctx->pc == 0x15B1CCu) {
        ctx->pc = 0x15B1D0u;
        goto label_15b1d0;
    }
    ctx->pc = 0x15B1C8u;
    SET_GPR_U32(ctx, 31, 0x15B1D0u);
    ctx->pc = 0x2577C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2577C0u, 0x15B1C8u, 0x15B1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B1D0u;
label_15b1d0:
    // 0x15b1d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b1d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_15b1d4:
    // 0x15b1d4: 0x8c231a54  lw          $v1, 0x1A54($at)
    ctx->pc = 0x15b1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6740)));
label_15b1d8:
    // 0x15b1d8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15b1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15b1dc:
    // 0x15b1dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_15b1e0:
    // 0x15b1e0: 0xac231a54  sw          $v1, 0x1A54($at)
    ctx->pc = 0x15b1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6740), GPR_U32(ctx, 3));
label_15b1e4:
    // 0x15b1e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b1e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_15b1e8:
    // 0x15b1e8: 0x8c231a50  lw          $v1, 0x1A50($at)
    ctx->pc = 0x15b1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6736)));
label_15b1ec:
    // 0x15b1ec: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x15b1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15b1f0:
    // 0x15b1f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_15b1f4:
    // 0x15b1f4: 0x8c231a50  lw          $v1, 0x1A50($at)
    ctx->pc = 0x15b1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6736)));
label_15b1f8:
    // 0x15b1f8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15b1f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_15b1fc:
    // 0x15b1fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_15b200:
    // 0x15b200: 0xac231a50  sw          $v1, 0x1A50($at)
    ctx->pc = 0x15b200u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6736), GPR_U32(ctx, 3));
label_15b204:
    // 0x15b204: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_15b208:
    // 0x15b208: 0x8c241a50  lw          $a0, 0x1A50($at)
    ctx->pc = 0x15b208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6736)));
label_15b20c:
    // 0x15b20c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x15b20cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_15b210:
    // 0x15b210: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15b210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_15b214:
    // 0x15b214: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_15b218:
    // 0x15b218: 0xac231a50  sw          $v1, 0x1A50($at)
    ctx->pc = 0x15b218u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6736), GPR_U32(ctx, 3));
label_15b21c:
    // 0x15b21c: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x15b21cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15b220:
    // 0x15b220: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15b220u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15b224:
    // 0x15b224: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15b224u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15b228:
    // 0x15b228: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15b228u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15b22c:
    // 0x15b22c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15b22cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15b230:
    // 0x15b230: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15b230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15b234:
    // 0x15b234: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x15b234u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_15b238:
    // 0x15b238: 0x3e00008  jr          $ra
label_15b23c:
    if (ctx->pc == 0x15B23Cu) {
        ctx->pc = 0x15B240u;
        goto label_fallthrough_0x15b238;
    }
    ctx->pc = 0x15B238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15b238:
    ctx->pc = 0x15B240u;
}
