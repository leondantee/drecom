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

// Function: Em0f_move
// Address: 0x30ac50 - 0x30b1a8
void Em0f_move_0x30ac50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_move_0x30ac50");
#endif

    switch (ctx->pc) {
        case 0x30ac50u: goto label_30ac50;
        case 0x30ac54u: goto label_30ac54;
        case 0x30ac58u: goto label_30ac58;
        case 0x30ac5cu: goto label_30ac5c;
        case 0x30ac60u: goto label_30ac60;
        case 0x30ac64u: goto label_30ac64;
        case 0x30ac68u: goto label_30ac68;
        case 0x30ac6cu: goto label_30ac6c;
        case 0x30ac70u: goto label_30ac70;
        case 0x30ac74u: goto label_30ac74;
        case 0x30ac78u: goto label_30ac78;
        case 0x30ac7cu: goto label_30ac7c;
        case 0x30ac80u: goto label_30ac80;
        case 0x30ac84u: goto label_30ac84;
        case 0x30ac88u: goto label_30ac88;
        case 0x30ac8cu: goto label_30ac8c;
        case 0x30ac90u: goto label_30ac90;
        case 0x30ac94u: goto label_30ac94;
        case 0x30ac98u: goto label_30ac98;
        case 0x30ac9cu: goto label_30ac9c;
        case 0x30aca0u: goto label_30aca0;
        case 0x30aca4u: goto label_30aca4;
        case 0x30aca8u: goto label_30aca8;
        case 0x30acacu: goto label_30acac;
        case 0x30acb0u: goto label_30acb0;
        case 0x30acb4u: goto label_30acb4;
        case 0x30acb8u: goto label_30acb8;
        case 0x30acbcu: goto label_30acbc;
        case 0x30acc0u: goto label_30acc0;
        case 0x30acc4u: goto label_30acc4;
        case 0x30acc8u: goto label_30acc8;
        case 0x30acccu: goto label_30accc;
        case 0x30acd0u: goto label_30acd0;
        case 0x30acd4u: goto label_30acd4;
        case 0x30acd8u: goto label_30acd8;
        case 0x30acdcu: goto label_30acdc;
        case 0x30ace0u: goto label_30ace0;
        case 0x30ace4u: goto label_30ace4;
        case 0x30ace8u: goto label_30ace8;
        case 0x30acecu: goto label_30acec;
        case 0x30acf0u: goto label_30acf0;
        case 0x30acf4u: goto label_30acf4;
        case 0x30acf8u: goto label_30acf8;
        case 0x30acfcu: goto label_30acfc;
        case 0x30ad00u: goto label_30ad00;
        case 0x30ad04u: goto label_30ad04;
        case 0x30ad08u: goto label_30ad08;
        case 0x30ad0cu: goto label_30ad0c;
        case 0x30ad10u: goto label_30ad10;
        case 0x30ad14u: goto label_30ad14;
        case 0x30ad18u: goto label_30ad18;
        case 0x30ad1cu: goto label_30ad1c;
        case 0x30ad20u: goto label_30ad20;
        case 0x30ad24u: goto label_30ad24;
        case 0x30ad28u: goto label_30ad28;
        case 0x30ad2cu: goto label_30ad2c;
        case 0x30ad30u: goto label_30ad30;
        case 0x30ad34u: goto label_30ad34;
        case 0x30ad38u: goto label_30ad38;
        case 0x30ad3cu: goto label_30ad3c;
        case 0x30ad40u: goto label_30ad40;
        case 0x30ad44u: goto label_30ad44;
        case 0x30ad48u: goto label_30ad48;
        case 0x30ad4cu: goto label_30ad4c;
        case 0x30ad50u: goto label_30ad50;
        case 0x30ad54u: goto label_30ad54;
        case 0x30ad58u: goto label_30ad58;
        case 0x30ad5cu: goto label_30ad5c;
        case 0x30ad60u: goto label_30ad60;
        case 0x30ad64u: goto label_30ad64;
        case 0x30ad68u: goto label_30ad68;
        case 0x30ad6cu: goto label_30ad6c;
        case 0x30ad70u: goto label_30ad70;
        case 0x30ad74u: goto label_30ad74;
        case 0x30ad78u: goto label_30ad78;
        case 0x30ad7cu: goto label_30ad7c;
        case 0x30ad80u: goto label_30ad80;
        case 0x30ad84u: goto label_30ad84;
        case 0x30ad88u: goto label_30ad88;
        case 0x30ad8cu: goto label_30ad8c;
        case 0x30ad90u: goto label_30ad90;
        case 0x30ad94u: goto label_30ad94;
        case 0x30ad98u: goto label_30ad98;
        case 0x30ad9cu: goto label_30ad9c;
        case 0x30ada0u: goto label_30ada0;
        case 0x30ada4u: goto label_30ada4;
        case 0x30ada8u: goto label_30ada8;
        case 0x30adacu: goto label_30adac;
        case 0x30adb0u: goto label_30adb0;
        case 0x30adb4u: goto label_30adb4;
        case 0x30adb8u: goto label_30adb8;
        case 0x30adbcu: goto label_30adbc;
        case 0x30adc0u: goto label_30adc0;
        case 0x30adc4u: goto label_30adc4;
        case 0x30adc8u: goto label_30adc8;
        case 0x30adccu: goto label_30adcc;
        case 0x30add0u: goto label_30add0;
        case 0x30add4u: goto label_30add4;
        case 0x30add8u: goto label_30add8;
        case 0x30addcu: goto label_30addc;
        case 0x30ade0u: goto label_30ade0;
        case 0x30ade4u: goto label_30ade4;
        case 0x30ade8u: goto label_30ade8;
        case 0x30adecu: goto label_30adec;
        case 0x30adf0u: goto label_30adf0;
        case 0x30adf4u: goto label_30adf4;
        case 0x30adf8u: goto label_30adf8;
        case 0x30adfcu: goto label_30adfc;
        case 0x30ae00u: goto label_30ae00;
        case 0x30ae04u: goto label_30ae04;
        case 0x30ae08u: goto label_30ae08;
        case 0x30ae0cu: goto label_30ae0c;
        case 0x30ae10u: goto label_30ae10;
        case 0x30ae14u: goto label_30ae14;
        case 0x30ae18u: goto label_30ae18;
        case 0x30ae1cu: goto label_30ae1c;
        case 0x30ae20u: goto label_30ae20;
        case 0x30ae24u: goto label_30ae24;
        case 0x30ae28u: goto label_30ae28;
        case 0x30ae2cu: goto label_30ae2c;
        case 0x30ae30u: goto label_30ae30;
        case 0x30ae34u: goto label_30ae34;
        case 0x30ae38u: goto label_30ae38;
        case 0x30ae3cu: goto label_30ae3c;
        case 0x30ae40u: goto label_30ae40;
        case 0x30ae44u: goto label_30ae44;
        case 0x30ae48u: goto label_30ae48;
        case 0x30ae4cu: goto label_30ae4c;
        case 0x30ae50u: goto label_30ae50;
        case 0x30ae54u: goto label_30ae54;
        case 0x30ae58u: goto label_30ae58;
        case 0x30ae5cu: goto label_30ae5c;
        case 0x30ae60u: goto label_30ae60;
        case 0x30ae64u: goto label_30ae64;
        case 0x30ae68u: goto label_30ae68;
        case 0x30ae6cu: goto label_30ae6c;
        case 0x30ae70u: goto label_30ae70;
        case 0x30ae74u: goto label_30ae74;
        case 0x30ae78u: goto label_30ae78;
        case 0x30ae7cu: goto label_30ae7c;
        case 0x30ae80u: goto label_30ae80;
        case 0x30ae84u: goto label_30ae84;
        case 0x30ae88u: goto label_30ae88;
        case 0x30ae8cu: goto label_30ae8c;
        case 0x30ae90u: goto label_30ae90;
        case 0x30ae94u: goto label_30ae94;
        case 0x30ae98u: goto label_30ae98;
        case 0x30ae9cu: goto label_30ae9c;
        case 0x30aea0u: goto label_30aea0;
        case 0x30aea4u: goto label_30aea4;
        case 0x30aea8u: goto label_30aea8;
        case 0x30aeacu: goto label_30aeac;
        case 0x30aeb0u: goto label_30aeb0;
        case 0x30aeb4u: goto label_30aeb4;
        case 0x30aeb8u: goto label_30aeb8;
        case 0x30aebcu: goto label_30aebc;
        case 0x30aec0u: goto label_30aec0;
        case 0x30aec4u: goto label_30aec4;
        case 0x30aec8u: goto label_30aec8;
        case 0x30aeccu: goto label_30aecc;
        case 0x30aed0u: goto label_30aed0;
        case 0x30aed4u: goto label_30aed4;
        case 0x30aed8u: goto label_30aed8;
        case 0x30aedcu: goto label_30aedc;
        case 0x30aee0u: goto label_30aee0;
        case 0x30aee4u: goto label_30aee4;
        case 0x30aee8u: goto label_30aee8;
        case 0x30aeecu: goto label_30aeec;
        case 0x30aef0u: goto label_30aef0;
        case 0x30aef4u: goto label_30aef4;
        case 0x30aef8u: goto label_30aef8;
        case 0x30aefcu: goto label_30aefc;
        case 0x30af00u: goto label_30af00;
        case 0x30af04u: goto label_30af04;
        case 0x30af08u: goto label_30af08;
        case 0x30af0cu: goto label_30af0c;
        case 0x30af10u: goto label_30af10;
        case 0x30af14u: goto label_30af14;
        case 0x30af18u: goto label_30af18;
        case 0x30af1cu: goto label_30af1c;
        case 0x30af20u: goto label_30af20;
        case 0x30af24u: goto label_30af24;
        case 0x30af28u: goto label_30af28;
        case 0x30af2cu: goto label_30af2c;
        case 0x30af30u: goto label_30af30;
        case 0x30af34u: goto label_30af34;
        case 0x30af38u: goto label_30af38;
        case 0x30af3cu: goto label_30af3c;
        case 0x30af40u: goto label_30af40;
        case 0x30af44u: goto label_30af44;
        case 0x30af48u: goto label_30af48;
        case 0x30af4cu: goto label_30af4c;
        case 0x30af50u: goto label_30af50;
        case 0x30af54u: goto label_30af54;
        case 0x30af58u: goto label_30af58;
        case 0x30af5cu: goto label_30af5c;
        case 0x30af60u: goto label_30af60;
        case 0x30af64u: goto label_30af64;
        case 0x30af68u: goto label_30af68;
        case 0x30af6cu: goto label_30af6c;
        case 0x30af70u: goto label_30af70;
        case 0x30af74u: goto label_30af74;
        case 0x30af78u: goto label_30af78;
        case 0x30af7cu: goto label_30af7c;
        case 0x30af80u: goto label_30af80;
        case 0x30af84u: goto label_30af84;
        case 0x30af88u: goto label_30af88;
        case 0x30af8cu: goto label_30af8c;
        case 0x30af90u: goto label_30af90;
        case 0x30af94u: goto label_30af94;
        case 0x30af98u: goto label_30af98;
        case 0x30af9cu: goto label_30af9c;
        case 0x30afa0u: goto label_30afa0;
        case 0x30afa4u: goto label_30afa4;
        case 0x30afa8u: goto label_30afa8;
        case 0x30afacu: goto label_30afac;
        case 0x30afb0u: goto label_30afb0;
        case 0x30afb4u: goto label_30afb4;
        case 0x30afb8u: goto label_30afb8;
        case 0x30afbcu: goto label_30afbc;
        case 0x30afc0u: goto label_30afc0;
        case 0x30afc4u: goto label_30afc4;
        case 0x30afc8u: goto label_30afc8;
        case 0x30afccu: goto label_30afcc;
        case 0x30afd0u: goto label_30afd0;
        case 0x30afd4u: goto label_30afd4;
        case 0x30afd8u: goto label_30afd8;
        case 0x30afdcu: goto label_30afdc;
        case 0x30afe0u: goto label_30afe0;
        case 0x30afe4u: goto label_30afe4;
        case 0x30afe8u: goto label_30afe8;
        case 0x30afecu: goto label_30afec;
        case 0x30aff0u: goto label_30aff0;
        case 0x30aff4u: goto label_30aff4;
        case 0x30aff8u: goto label_30aff8;
        case 0x30affcu: goto label_30affc;
        case 0x30b000u: goto label_30b000;
        case 0x30b004u: goto label_30b004;
        case 0x30b008u: goto label_30b008;
        case 0x30b00cu: goto label_30b00c;
        case 0x30b010u: goto label_30b010;
        case 0x30b014u: goto label_30b014;
        case 0x30b018u: goto label_30b018;
        case 0x30b01cu: goto label_30b01c;
        case 0x30b020u: goto label_30b020;
        case 0x30b024u: goto label_30b024;
        case 0x30b028u: goto label_30b028;
        case 0x30b02cu: goto label_30b02c;
        case 0x30b030u: goto label_30b030;
        case 0x30b034u: goto label_30b034;
        case 0x30b038u: goto label_30b038;
        case 0x30b03cu: goto label_30b03c;
        case 0x30b040u: goto label_30b040;
        case 0x30b044u: goto label_30b044;
        case 0x30b048u: goto label_30b048;
        case 0x30b04cu: goto label_30b04c;
        case 0x30b050u: goto label_30b050;
        case 0x30b054u: goto label_30b054;
        case 0x30b058u: goto label_30b058;
        case 0x30b05cu: goto label_30b05c;
        case 0x30b060u: goto label_30b060;
        case 0x30b064u: goto label_30b064;
        case 0x30b068u: goto label_30b068;
        case 0x30b06cu: goto label_30b06c;
        case 0x30b070u: goto label_30b070;
        case 0x30b074u: goto label_30b074;
        case 0x30b078u: goto label_30b078;
        case 0x30b07cu: goto label_30b07c;
        case 0x30b080u: goto label_30b080;
        case 0x30b084u: goto label_30b084;
        case 0x30b088u: goto label_30b088;
        case 0x30b08cu: goto label_30b08c;
        case 0x30b090u: goto label_30b090;
        case 0x30b094u: goto label_30b094;
        case 0x30b098u: goto label_30b098;
        case 0x30b09cu: goto label_30b09c;
        case 0x30b0a0u: goto label_30b0a0;
        case 0x30b0a4u: goto label_30b0a4;
        case 0x30b0a8u: goto label_30b0a8;
        case 0x30b0acu: goto label_30b0ac;
        case 0x30b0b0u: goto label_30b0b0;
        case 0x30b0b4u: goto label_30b0b4;
        case 0x30b0b8u: goto label_30b0b8;
        case 0x30b0bcu: goto label_30b0bc;
        case 0x30b0c0u: goto label_30b0c0;
        case 0x30b0c4u: goto label_30b0c4;
        case 0x30b0c8u: goto label_30b0c8;
        case 0x30b0ccu: goto label_30b0cc;
        case 0x30b0d0u: goto label_30b0d0;
        case 0x30b0d4u: goto label_30b0d4;
        case 0x30b0d8u: goto label_30b0d8;
        case 0x30b0dcu: goto label_30b0dc;
        case 0x30b0e0u: goto label_30b0e0;
        case 0x30b0e4u: goto label_30b0e4;
        case 0x30b0e8u: goto label_30b0e8;
        case 0x30b0ecu: goto label_30b0ec;
        case 0x30b0f0u: goto label_30b0f0;
        case 0x30b0f4u: goto label_30b0f4;
        case 0x30b0f8u: goto label_30b0f8;
        case 0x30b0fcu: goto label_30b0fc;
        case 0x30b100u: goto label_30b100;
        case 0x30b104u: goto label_30b104;
        case 0x30b108u: goto label_30b108;
        case 0x30b10cu: goto label_30b10c;
        case 0x30b110u: goto label_30b110;
        case 0x30b114u: goto label_30b114;
        case 0x30b118u: goto label_30b118;
        case 0x30b11cu: goto label_30b11c;
        case 0x30b120u: goto label_30b120;
        case 0x30b124u: goto label_30b124;
        case 0x30b128u: goto label_30b128;
        case 0x30b12cu: goto label_30b12c;
        case 0x30b130u: goto label_30b130;
        case 0x30b134u: goto label_30b134;
        case 0x30b138u: goto label_30b138;
        case 0x30b13cu: goto label_30b13c;
        case 0x30b140u: goto label_30b140;
        case 0x30b144u: goto label_30b144;
        case 0x30b148u: goto label_30b148;
        case 0x30b14cu: goto label_30b14c;
        case 0x30b150u: goto label_30b150;
        case 0x30b154u: goto label_30b154;
        case 0x30b158u: goto label_30b158;
        case 0x30b15cu: goto label_30b15c;
        case 0x30b160u: goto label_30b160;
        case 0x30b164u: goto label_30b164;
        case 0x30b168u: goto label_30b168;
        case 0x30b16cu: goto label_30b16c;
        case 0x30b170u: goto label_30b170;
        case 0x30b174u: goto label_30b174;
        case 0x30b178u: goto label_30b178;
        case 0x30b17cu: goto label_30b17c;
        case 0x30b180u: goto label_30b180;
        case 0x30b184u: goto label_30b184;
        case 0x30b188u: goto label_30b188;
        case 0x30b18cu: goto label_30b18c;
        case 0x30b190u: goto label_30b190;
        case 0x30b194u: goto label_30b194;
        case 0x30b198u: goto label_30b198;
        case 0x30b19cu: goto label_30b19c;
        case 0x30b1a0u: goto label_30b1a0;
        case 0x30b1a4u: goto label_30b1a4;
        default: break;
    }

    ctx->pc = 0x30ac50u;

label_30ac50:
    // 0x30ac50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x30ac50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_30ac54:
    // 0x30ac54: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x30ac54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
label_30ac58:
    // 0x30ac58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30ac58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_30ac5c:
    // 0x30ac5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30ac5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_30ac60:
    // 0x30ac60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30ac60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_30ac64:
    // 0x30ac64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30ac64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_30ac68:
    // 0x30ac68: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x30ac68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
label_30ac6c:
    // 0x30ac6c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30ac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30ac70:
    // 0x30ac70: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30ac70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30ac74:
    // 0x30ac74: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x30ac74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_30ac78:
    // 0x30ac78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30ac78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_30ac7c:
    // 0x30ac7c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x30ac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_30ac80:
    // 0x30ac80: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30ac80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_30ac84:
    // 0x30ac84: 0x24429810  addiu       $v0, $v0, -0x67F0
    ctx->pc = 0x30ac84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940688));
label_30ac88:
    // 0x30ac88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30ac88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30ac8c:
    // 0x30ac8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30ac90:
    // 0x30ac90: 0x40f809  jalr        $v0
label_30ac94:
    if (ctx->pc == 0x30AC94u) {
        ctx->pc = 0x30AC98u;
        goto label_30ac98;
    }
    ctx->pc = 0x30AC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30AC98u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30AC90u, 0x30AC98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30AC98u;
label_30ac98:
    // 0x30ac98: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30ac98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30ac9c:
    // 0x30ac9c: 0xc0c4448  jal         func_311120
label_30aca0:
    if (ctx->pc == 0x30ACA0u) {
        ctx->pc = 0x30ACA4u;
        goto label_30aca4;
    }
    ctx->pc = 0x30AC9Cu;
    SET_GPR_U32(ctx, 31, 0x30ACA4u);
    ctx->pc = 0x311120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311120u, 0x30AC9Cu, 0x30ACA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ACA4u;
label_30aca4:
    // 0x30aca4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30aca8:
    // 0x30aca8: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x30aca8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
label_30acac:
    // 0x30acac: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x30acacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_30acb0:
    // 0x30acb0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x30acb0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_30acb4:
    // 0x30acb4: 0x4400015  bltz        $v0, . + 4 + (0x15 << 2)
label_30acb8:
    if (ctx->pc == 0x30ACB8u) {
        ctx->pc = 0x30ACBCu;
        goto label_30acbc;
    }
    ctx->pc = 0x30ACB4u;
    {
        const bool branch_taken_0x30acb4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x30acb4) {
            ctx->pc = 0x30AD0Cu;
            goto label_30ad0c;
        }
    }
    ctx->pc = 0x30ACBCu;
label_30acbc:
    // 0x30acbc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30acc0:
    // 0x30acc0: 0x8c421338  lw          $v0, 0x1338($v0)
    ctx->pc = 0x30acc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
label_30acc4:
    // 0x30acc4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x30acc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_30acc8:
    // 0x30acc8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_30accc:
    if (ctx->pc == 0x30ACCCu) {
        ctx->pc = 0x30ACD0u;
        goto label_30acd0;
    }
    ctx->pc = 0x30ACC8u;
    {
        const bool branch_taken_0x30acc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30acc8) {
            ctx->pc = 0x30ACE4u;
            goto label_30ace4;
        }
    }
    ctx->pc = 0x30ACD0u;
label_30acd0:
    // 0x30acd0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30acd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30acd4:
    // 0x30acd4: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x30acd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_30acd8:
    // 0x30acd8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x30acd8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_30acdc:
    // 0x30acdc: 0xc0c45f0  jal         func_3117C0
label_30ace0:
    if (ctx->pc == 0x30ACE0u) {
        ctx->pc = 0x30ACE4u;
        goto label_30ace4;
    }
    ctx->pc = 0x30ACDCu;
    SET_GPR_U32(ctx, 31, 0x30ACE4u);
    ctx->pc = 0x3117C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3117C0u, 0x30ACDCu, 0x30ACE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ACE4u;
label_30ace4:
    // 0x30ace4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30ace8:
    // 0x30ace8: 0x8c421338  lw          $v0, 0x1338($v0)
    ctx->pc = 0x30ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
label_30acec:
    // 0x30acec: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x30acecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_30acf0:
    // 0x30acf0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_30acf4:
    if (ctx->pc == 0x30ACF4u) {
        ctx->pc = 0x30ACF8u;
        goto label_30acf8;
    }
    ctx->pc = 0x30ACF0u;
    {
        const bool branch_taken_0x30acf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30acf0) {
            ctx->pc = 0x30AD0Cu;
            goto label_30ad0c;
        }
    }
    ctx->pc = 0x30ACF8u;
label_30acf8:
    // 0x30acf8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30acf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30acfc:
    // 0x30acfc: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x30acfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_30ad00:
    // 0x30ad00: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30ad00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30ad04:
    // 0x30ad04: 0xc0c45f0  jal         func_3117C0
label_30ad08:
    if (ctx->pc == 0x30AD08u) {
        ctx->pc = 0x30AD0Cu;
        goto label_30ad0c;
    }
    ctx->pc = 0x30AD04u;
    SET_GPR_U32(ctx, 31, 0x30AD0Cu);
    ctx->pc = 0x3117C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3117C0u, 0x30AD04u, 0x30AD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AD0Cu;
label_30ad0c:
    // 0x30ad0c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30ad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30ad10:
    // 0x30ad10: 0x8c421338  lw          $v0, 0x1338($v0)
    ctx->pc = 0x30ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
label_30ad14:
    // 0x30ad14: 0x304201fe  andi        $v0, $v0, 0x1FE
    ctx->pc = 0x30ad14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)510);
label_30ad18:
    // 0x30ad18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_30ad1c:
    if (ctx->pc == 0x30AD1Cu) {
        ctx->pc = 0x30AD20u;
        goto label_30ad20;
    }
    ctx->pc = 0x30AD18u;
    {
        const bool branch_taken_0x30ad18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ad18) {
            ctx->pc = 0x30AD2Cu;
            goto label_30ad2c;
        }
    }
    ctx->pc = 0x30AD20u;
label_30ad20:
    // 0x30ad20: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30ad20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30ad24:
    // 0x30ad24: 0xc0c2d3c  jal         func_30B4F0
label_30ad28:
    if (ctx->pc == 0x30AD28u) {
        ctx->pc = 0x30AD2Cu;
        goto label_30ad2c;
    }
    ctx->pc = 0x30AD24u;
    SET_GPR_U32(ctx, 31, 0x30AD2Cu);
    ctx->pc = 0x30B4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B4F0u, 0x30AD24u, 0x30AD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AD2Cu;
label_30ad2c:
    // 0x30ad2c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30ad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30ad30:
    // 0x30ad30: 0x8c431338  lw          $v1, 0x1338($v0)
    ctx->pc = 0x30ad30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
label_30ad34:
    // 0x30ad34: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x30ad34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_30ad38:
    // 0x30ad38: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x30ad38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_30ad3c:
    // 0x30ad3c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_30ad40:
    if (ctx->pc == 0x30AD40u) {
        ctx->pc = 0x30AD44u;
        goto label_30ad44;
    }
    ctx->pc = 0x30AD3Cu;
    {
        const bool branch_taken_0x30ad3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ad3c) {
            ctx->pc = 0x30AD60u;
            goto label_30ad60;
        }
    }
    ctx->pc = 0x30AD44u;
label_30ad44:
    // 0x30ad44: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30ad48:
    // 0x30ad48: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x30ad48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_30ad4c:
    // 0x30ad4c: 0x245106c0  addiu       $s1, $v0, 0x6C0
    ctx->pc = 0x30ad4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
label_30ad50:
    // 0x30ad50: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30ad50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30ad54:
    // 0x30ad54: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x30ad54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_30ad58:
    // 0x30ad58: 0xc079140  jal         func_1E4500
label_30ad5c:
    if (ctx->pc == 0x30AD5Cu) {
        ctx->pc = 0x30AD60u;
        goto label_30ad60;
    }
    ctx->pc = 0x30AD58u;
    SET_GPR_U32(ctx, 31, 0x30AD60u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x30AD58u, 0x30AD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AD60u;
label_30ad60:
    // 0x30ad60: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30ad60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30ad64:
    // 0x30ad64: 0x8c431368  lw          $v1, 0x1368($v0)
    ctx->pc = 0x30ad64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4968)));
label_30ad68:
    // 0x30ad68: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x30ad68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_30ad6c:
    // 0x30ad6c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x30ad6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_30ad70:
    // 0x30ad70: 0x1440007b  bnez        $v0, . + 4 + (0x7B << 2)
label_30ad74:
    if (ctx->pc == 0x30AD74u) {
        ctx->pc = 0x30AD78u;
        goto label_30ad78;
    }
    ctx->pc = 0x30AD70u;
    {
        const bool branch_taken_0x30ad70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30ad70) {
            ctx->pc = 0x30AF60u;
            goto label_30af60;
        }
    }
    ctx->pc = 0x30AD78u;
label_30ad78:
    // 0x30ad78: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30ad7c:
    // 0x30ad7c: 0x8c431338  lw          $v1, 0x1338($v0)
    ctx->pc = 0x30ad7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
label_30ad80:
    // 0x30ad80: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x30ad80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_30ad84:
    // 0x30ad84: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x30ad84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_30ad88:
    // 0x30ad88: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_30ad8c:
    if (ctx->pc == 0x30AD8Cu) {
        ctx->pc = 0x30AD90u;
        goto label_30ad90;
    }
    ctx->pc = 0x30AD88u;
    {
        const bool branch_taken_0x30ad88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ad88) {
            ctx->pc = 0x30AEB8u;
            goto label_30aeb8;
        }
    }
    ctx->pc = 0x30AD90u;
label_30ad90:
    // 0x30ad90: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30ad90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30ad94:
    // 0x30ad94: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x30ad94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_30ad98:
    // 0x30ad98: 0x24511680  addiu       $s1, $v0, 0x1680
    ctx->pc = 0x30ad98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5760));
label_30ad9c:
    // 0x30ad9c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30ad9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30ada0:
    // 0x30ada0: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x30ada0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_30ada4:
    // 0x30ada4: 0xc079140  jal         func_1E4500
label_30ada8:
    if (ctx->pc == 0x30ADA8u) {
        ctx->pc = 0x30ADACu;
        goto label_30adac;
    }
    ctx->pc = 0x30ADA4u;
    SET_GPR_U32(ctx, 31, 0x30ADACu);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x30ADA4u, 0x30ADACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ADACu;
label_30adac:
    // 0x30adac: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30adacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30adb0:
    // 0x30adb0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30adb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_30adb4:
    // 0x30adb4: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x30adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_30adb8:
    // 0x30adb8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30adb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_30adbc:
    // 0x30adbc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30adbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_30adc0:
    // 0x30adc0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30adc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_30adc4:
    // 0x30adc4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30adc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_30adc8:
    // 0x30adc8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30adc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_30adcc:
    // 0x30adcc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x30adccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_30add0:
    // 0x30add0: 0x24045500  addiu       $a0, $zero, 0x5500
    ctx->pc = 0x30add0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21760));
label_30add4:
    // 0x30add4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30add4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_30add8:
    // 0x30add8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x30add8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_30addc:
    // 0x30addc: 0xc062f5c  jal         func_18BD70
label_30ade0:
    if (ctx->pc == 0x30ADE0u) {
        ctx->pc = 0x30ADE4u;
        goto label_30ade4;
    }
    ctx->pc = 0x30ADDCu;
    SET_GPR_U32(ctx, 31, 0x30ADE4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30ADDCu, 0x30ADE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ADE4u;
label_30ade4:
    // 0x30ade4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30ade4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_30ade8:
    // 0x30ade8: 0xc0630a8  jal         func_18C2A0
label_30adec:
    if (ctx->pc == 0x30ADECu) {
        ctx->pc = 0x30ADF0u;
        goto label_30adf0;
    }
    ctx->pc = 0x30ADE8u;
    SET_GPR_U32(ctx, 31, 0x30ADF0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30ADE8u, 0x30ADF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ADF0u;
label_30adf0:
    // 0x30adf0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x30adf0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_30adf4:
    // 0x30adf4: 0x1000002c  b           . + 4 + (0x2C << 2)
label_30adf8:
    if (ctx->pc == 0x30ADF8u) {
        ctx->pc = 0x30ADFCu;
        goto label_30adfc;
    }
    ctx->pc = 0x30ADF4u;
    {
        const bool branch_taken_0x30adf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30adf4) {
            ctx->pc = 0x30AEA8u;
            goto label_30aea8;
        }
    }
    ctx->pc = 0x30ADFCu;
label_30adfc:
    // 0x30adfc: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x30adfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_30ae00:
    // 0x30ae00: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30ae00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_30ae04:
    // 0x30ae04: 0x244297b0  addiu       $v0, $v0, -0x6850
    ctx->pc = 0x30ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940592));
label_30ae08:
    // 0x30ae08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30ae0c:
    // 0x30ae0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x30ae0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30ae10:
    // 0x30ae10: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_30ae14:
    // 0x30ae14: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x30ae14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30ae18:
    // 0x30ae18: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30ae18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_30ae1c:
    // 0x30ae1c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30ae20:
    // 0x30ae20: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x30ae20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_30ae24:
    // 0x30ae24: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30ae28:
    // 0x30ae28: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x30ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_30ae2c:
    // 0x30ae2c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x30ae2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30ae30:
    // 0x30ae30: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x30ae30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
label_30ae34:
    // 0x30ae34: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x30ae34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_30ae38:
    // 0x30ae38: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x30ae38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
label_30ae3c:
    // 0x30ae3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_30ae40:
    // 0x30ae40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30ae40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30ae44:
    // 0x30ae44: 0x0  nop
    ctx->pc = 0x30ae44u;
    // NOP
label_30ae48:
    // 0x30ae48: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x30ae48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_30ae4c:
    // 0x30ae4c: 0xc601012c  lwc1        $f1, 0x12C($s0)
    ctx->pc = 0x30ae4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30ae50:
    // 0x30ae50: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x30ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_30ae54:
    // 0x30ae54: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x30ae54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_30ae58:
    // 0x30ae58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30ae58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30ae5c:
    // 0x30ae5c: 0x0  nop
    ctx->pc = 0x30ae5cu;
    // NOP
label_30ae60:
    // 0x30ae60: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x30ae60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_30ae64:
    // 0x30ae64: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x30ae64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
label_30ae68:
    // 0x30ae68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_30ae6c:
    // 0x30ae6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30ae6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30ae70:
    // 0x30ae70: 0x0  nop
    ctx->pc = 0x30ae70u;
    // NOP
label_30ae74:
    // 0x30ae74: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x30ae74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
label_30ae78:
    // 0x30ae78: 0xc601012c  lwc1        $f1, 0x12C($s0)
    ctx->pc = 0x30ae78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30ae7c:
    // 0x30ae7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30ae7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30ae80:
    // 0x30ae80: 0x0  nop
    ctx->pc = 0x30ae80u;
    // NOP
label_30ae84:
    // 0x30ae84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30ae84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30ae88:
    // 0x30ae88: 0x0  nop
    ctx->pc = 0x30ae88u;
    // NOP
label_30ae8c:
    // 0x30ae8c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_30ae90:
    if (ctx->pc == 0x30AE90u) {
        ctx->pc = 0x30AE94u;
        goto label_30ae94;
    }
    ctx->pc = 0x30AE8Cu;
    {
        const bool branch_taken_0x30ae8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30ae8c) {
            ctx->pc = 0x30AEA0u;
            goto label_30aea0;
        }
    }
    ctx->pc = 0x30AE94u;
label_30ae94:
    // 0x30ae94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30ae94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30ae98:
    // 0x30ae98: 0x0  nop
    ctx->pc = 0x30ae98u;
    // NOP
label_30ae9c:
    // 0x30ae9c: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x30ae9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
label_30aea0:
    // 0x30aea0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30aea0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_30aea4:
    // 0x30aea4: 0x0  nop
    ctx->pc = 0x30aea4u;
    // NOP
label_30aea8:
    // 0x30aea8: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x30aea8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_30aeac:
    // 0x30aeac: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
label_30aeb0:
    if (ctx->pc == 0x30AEB0u) {
        ctx->pc = 0x30AEB4u;
        goto label_30aeb4;
    }
    ctx->pc = 0x30AEACu;
    {
        const bool branch_taken_0x30aeac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30aeac) {
            ctx->pc = 0x30ADFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30adfc;
        }
    }
    ctx->pc = 0x30AEB4u;
label_30aeb4:
    // 0x30aeb4: 0x0  nop
    ctx->pc = 0x30aeb4u;
    // NOP
label_30aeb8:
    // 0x30aeb8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_30aebc:
    // 0x30aebc: 0x244298c0  addiu       $v0, $v0, -0x6740
    ctx->pc = 0x30aebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940864));
label_30aec0:
    // 0x30aec0: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x30aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_30aec4:
    // 0x30aec4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x30aec4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_30aec8:
    // 0x30aec8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x30aec8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_30aecc:
    // 0x30aecc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x30aeccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_30aed0:
    // 0x30aed0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x30aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_30aed4:
    // 0x30aed4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x30aed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_30aed8:
    // 0x30aed8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30aed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_30aedc:
    // 0x30aedc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30aee0:
    // 0x30aee0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30aee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_30aee4:
    // 0x30aee4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x30aee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_30aee8:
    // 0x30aee8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x30aee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_30aeec:
    // 0x30aeec: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x30aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_30aef0:
    // 0x30aef0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x30aef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_30aef4:
    // 0x30aef4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_30aef8:
    // 0x30aef8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30aefc:
    // 0x30aefc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x30aefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
label_30af00:
    // 0x30af00: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x30af00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_30af04:
    // 0x30af04: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x30af04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_30af08:
    // 0x30af08: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x30af08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_30af0c:
    // 0x30af0c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x30af0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 2));
label_30af10:
    // 0x30af10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30af10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_30af14:
    // 0x30af14: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x30af14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_30af18:
    // 0x30af18: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x30af18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_30af1c:
    // 0x30af1c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30af1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30af20:
    // 0x30af20: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30af20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_30af24:
    // 0x30af24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30af24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30af28:
    // 0x30af28: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30af28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_30af2c:
    // 0x30af2c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30af2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_30af30:
    // 0x30af30: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30af30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_30af34:
    // 0x30af34: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30af34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_30af38:
    // 0x30af38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30af38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_30af3c:
    // 0x30af3c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x30af3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_30af40:
    // 0x30af40: 0x24045505  addiu       $a0, $zero, 0x5505
    ctx->pc = 0x30af40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21765));
label_30af44:
    // 0x30af44: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30af44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_30af48:
    // 0x30af48: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x30af48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_30af4c:
    // 0x30af4c: 0xc062f5c  jal         func_18BD70
label_30af50:
    if (ctx->pc == 0x30AF50u) {
        ctx->pc = 0x30AF54u;
        goto label_30af54;
    }
    ctx->pc = 0x30AF4Cu;
    SET_GPR_U32(ctx, 31, 0x30AF54u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30AF4Cu, 0x30AF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AF54u;
label_30af54:
    // 0x30af54: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30af54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_30af58:
    // 0x30af58: 0xc0630a8  jal         func_18C2A0
label_30af5c:
    if (ctx->pc == 0x30AF5Cu) {
        ctx->pc = 0x30AF60u;
        goto label_30af60;
    }
    ctx->pc = 0x30AF58u;
    SET_GPR_U32(ctx, 31, 0x30AF60u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30AF58u, 0x30AF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AF60u;
label_30af60:
    // 0x30af60: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30af60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30af64:
    // 0x30af64: 0x8c431338  lw          $v1, 0x1338($v0)
    ctx->pc = 0x30af64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
label_30af68:
    // 0x30af68: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x30af68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_30af6c:
    // 0x30af6c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x30af6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_30af70:
    // 0x30af70: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_30af74:
    if (ctx->pc == 0x30AF74u) {
        ctx->pc = 0x30AF78u;
        goto label_30af78;
    }
    ctx->pc = 0x30AF70u;
    {
        const bool branch_taken_0x30af70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30af70) {
            ctx->pc = 0x30B014u;
            goto label_30b014;
        }
    }
    ctx->pc = 0x30AF78u;
label_30af78:
    // 0x30af78: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30af78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30af7c:
    // 0x30af7c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x30af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_30af80:
    // 0x30af80: 0x24530af0  addiu       $s3, $v0, 0xAF0
    ctx->pc = 0x30af80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 2800));
label_30af84:
    // 0x30af84: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30af84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30af88:
    // 0x30af88: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x30af88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_30af8c:
    // 0x30af8c: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x30af8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_30af90:
    // 0x30af90: 0xc05cf7c  jal         func_173DF0
label_30af94:
    if (ctx->pc == 0x30AF94u) {
        ctx->pc = 0x30AF98u;
        goto label_30af98;
    }
    ctx->pc = 0x30AF90u;
    SET_GPR_U32(ctx, 31, 0x30AF98u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x30AF90u, 0x30AF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AF98u;
label_30af98:
    // 0x30af98: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x30af98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_30af9c:
    // 0x30af9c: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x30af9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30afa0:
    // 0x30afa0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x30afa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_30afa4:
    // 0x30afa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30afa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30afa8:
    // 0x30afa8: 0x0  nop
    ctx->pc = 0x30afa8u;
    // NOP
label_30afac:
    // 0x30afac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x30afacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_30afb0:
    // 0x30afb0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x30afb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_30afb4:
    // 0x30afb4: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x30afb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30afb8:
    // 0x30afb8: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x30afb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_30afbc:
    // 0x30afbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30afbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30afc0:
    // 0x30afc0: 0x0  nop
    ctx->pc = 0x30afc0u;
    // NOP
label_30afc4:
    // 0x30afc4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x30afc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_30afc8:
    // 0x30afc8: 0xe6600034  swc1        $f0, 0x34($s3)
    ctx->pc = 0x30afc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
label_30afcc:
    // 0x30afcc: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x30afccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30afd0:
    // 0x30afd0: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x30afd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30afd4:
    // 0x30afd4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30afd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30afd8:
    // 0x30afd8: 0x0  nop
    ctx->pc = 0x30afd8u;
    // NOP
label_30afdc:
    // 0x30afdc: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_30afe0:
    if (ctx->pc == 0x30AFE0u) {
        ctx->pc = 0x30AFE4u;
        goto label_30afe4;
    }
    ctx->pc = 0x30AFDCu;
    {
        const bool branch_taken_0x30afdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30afdc) {
            ctx->pc = 0x30B014u;
            goto label_30b014;
        }
    }
    ctx->pc = 0x30AFE4u;
label_30afe4:
    // 0x30afe4: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x30afe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30afe8:
    // 0x30afe8: 0xe6600034  swc1        $f0, 0x34($s3)
    ctx->pc = 0x30afe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
label_30afec:
    // 0x30afec: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30afecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30aff0:
    // 0x30aff0: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x30aff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
label_30aff4:
    // 0x30aff4: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x30aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
label_30aff8:
    // 0x30aff8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30aff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_30affc:
    // 0x30affc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x30affcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_30b000:
    // 0x30b000: 0xac821338  sw          $v0, 0x1338($a0)
    ctx->pc = 0x30b000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 2));
label_30b004:
    // 0x30b004: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30b004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30b008:
    // 0x30b008: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x30b008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_30b00c:
    // 0x30b00c: 0xc096ca4  jal         func_25B290
label_30b010:
    if (ctx->pc == 0x30B010u) {
        ctx->pc = 0x30B014u;
        goto label_30b014;
    }
    ctx->pc = 0x30B00Cu;
    SET_GPR_U32(ctx, 31, 0x30B014u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x30B00Cu, 0x30B014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B014u;
label_30b014:
    // 0x30b014: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30b014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30b018:
    // 0x30b018: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x30b018u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
label_30b01c:
    // 0x30b01c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x30b01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_30b020:
    // 0x30b020: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x30b020u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_30b024:
    // 0x30b024: 0x4410031  bgez        $v0, . + 4 + (0x31 << 2)
label_30b028:
    if (ctx->pc == 0x30B028u) {
        ctx->pc = 0x30B02Cu;
        goto label_30b02c;
    }
    ctx->pc = 0x30B024u;
    {
        const bool branch_taken_0x30b024 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x30b024) {
            ctx->pc = 0x30B0ECu;
            goto label_30b0ec;
        }
    }
    ctx->pc = 0x30B02Cu;
label_30b02c:
    // 0x30b02c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30b030:
    // 0x30b030: 0x8c421368  lw          $v0, 0x1368($v0)
    ctx->pc = 0x30b030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4968)));
label_30b034:
    // 0x30b034: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30b034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_30b038:
    // 0x30b038: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_30b03c:
    if (ctx->pc == 0x30B03Cu) {
        ctx->pc = 0x30B040u;
        goto label_30b040;
    }
    ctx->pc = 0x30B038u;
    {
        const bool branch_taken_0x30b038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b038) {
            ctx->pc = 0x30B05Cu;
            goto label_30b05c;
        }
    }
    ctx->pc = 0x30B040u;
label_30b040:
    // 0x30b040: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30b040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30b044:
    // 0x30b044: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x30b044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_30b048:
    // 0x30b048: 0x24510cf0  addiu       $s1, $v0, 0xCF0
    ctx->pc = 0x30b048u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
label_30b04c:
    // 0x30b04c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30b04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30b050:
    // 0x30b050: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x30b050u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_30b054:
    // 0x30b054: 0xc079140  jal         func_1E4500
label_30b058:
    if (ctx->pc == 0x30B058u) {
        ctx->pc = 0x30B05Cu;
        goto label_30b05c;
    }
    ctx->pc = 0x30B054u;
    SET_GPR_U32(ctx, 31, 0x30B05Cu);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x30B054u, 0x30B05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B05Cu;
label_30b05c:
    // 0x30b05c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30b05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30b060:
    // 0x30b060: 0x8c421368  lw          $v0, 0x1368($v0)
    ctx->pc = 0x30b060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4968)));
label_30b064:
    // 0x30b064: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x30b064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_30b068:
    // 0x30b068: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_30b06c:
    if (ctx->pc == 0x30B06Cu) {
        ctx->pc = 0x30B070u;
        goto label_30b070;
    }
    ctx->pc = 0x30B068u;
    {
        const bool branch_taken_0x30b068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b068) {
            ctx->pc = 0x30B08Cu;
            goto label_30b08c;
        }
    }
    ctx->pc = 0x30B070u;
label_30b070:
    // 0x30b070: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30b070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30b074:
    // 0x30b074: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x30b074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_30b078:
    // 0x30b078: 0x24511440  addiu       $s1, $v0, 0x1440
    ctx->pc = 0x30b078u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5184));
label_30b07c:
    // 0x30b07c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30b07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30b080:
    // 0x30b080: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x30b080u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_30b084:
    // 0x30b084: 0xc079140  jal         func_1E4500
label_30b088:
    if (ctx->pc == 0x30B088u) {
        ctx->pc = 0x30B08Cu;
        goto label_30b08c;
    }
    ctx->pc = 0x30B084u;
    SET_GPR_U32(ctx, 31, 0x30B08Cu);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x30B084u, 0x30B08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B08Cu;
label_30b08c:
    // 0x30b08c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30b090:
    // 0x30b090: 0x8c421368  lw          $v0, 0x1368($v0)
    ctx->pc = 0x30b090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4968)));
label_30b094:
    // 0x30b094: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x30b094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_30b098:
    // 0x30b098: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_30b09c:
    if (ctx->pc == 0x30B09Cu) {
        ctx->pc = 0x30B0A0u;
        goto label_30b0a0;
    }
    ctx->pc = 0x30B098u;
    {
        const bool branch_taken_0x30b098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b098) {
            ctx->pc = 0x30B0BCu;
            goto label_30b0bc;
        }
    }
    ctx->pc = 0x30B0A0u;
label_30b0a0:
    // 0x30b0a0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30b0a4:
    // 0x30b0a4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x30b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_30b0a8:
    // 0x30b0a8: 0x245113b0  addiu       $s1, $v0, 0x13B0
    ctx->pc = 0x30b0a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5040));
label_30b0ac:
    // 0x30b0ac: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30b0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30b0b0:
    // 0x30b0b0: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x30b0b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_30b0b4:
    // 0x30b0b4: 0xc079140  jal         func_1E4500
label_30b0b8:
    if (ctx->pc == 0x30B0B8u) {
        ctx->pc = 0x30B0BCu;
        goto label_30b0bc;
    }
    ctx->pc = 0x30B0B4u;
    SET_GPR_U32(ctx, 31, 0x30B0BCu);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x30B0B4u, 0x30B0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B0BCu;
label_30b0bc:
    // 0x30b0bc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30b0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30b0c0:
    // 0x30b0c0: 0x8c421368  lw          $v0, 0x1368($v0)
    ctx->pc = 0x30b0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4968)));
label_30b0c4:
    // 0x30b0c4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x30b0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_30b0c8:
    // 0x30b0c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_30b0cc:
    if (ctx->pc == 0x30B0CCu) {
        ctx->pc = 0x30B0D0u;
        goto label_30b0d0;
    }
    ctx->pc = 0x30B0C8u;
    {
        const bool branch_taken_0x30b0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b0c8) {
            ctx->pc = 0x30B0ECu;
            goto label_30b0ec;
        }
    }
    ctx->pc = 0x30B0D0u;
label_30b0d0:
    // 0x30b0d0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30b0d4:
    // 0x30b0d4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x30b0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_30b0d8:
    // 0x30b0d8: 0x24511320  addiu       $s1, $v0, 0x1320
    ctx->pc = 0x30b0d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4896));
label_30b0dc:
    // 0x30b0dc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30b0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30b0e0:
    // 0x30b0e0: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x30b0e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_30b0e4:
    // 0x30b0e4: 0xc079140  jal         func_1E4500
label_30b0e8:
    if (ctx->pc == 0x30B0E8u) {
        ctx->pc = 0x30B0ECu;
        goto label_30b0ec;
    }
    ctx->pc = 0x30B0E4u;
    SET_GPR_U32(ctx, 31, 0x30B0ECu);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x30B0E4u, 0x30B0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B0ECu;
label_30b0ec:
    // 0x30b0ec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30b0f0:
    // 0x30b0f0: 0x8c421368  lw          $v0, 0x1368($v0)
    ctx->pc = 0x30b0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4968)));
label_30b0f4:
    // 0x30b0f4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x30b0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_30b0f8:
    // 0x30b0f8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_30b0fc:
    if (ctx->pc == 0x30B0FCu) {
        ctx->pc = 0x30B100u;
        goto label_30b100;
    }
    ctx->pc = 0x30B0F8u;
    {
        const bool branch_taken_0x30b0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b0f8) {
            ctx->pc = 0x30B138u;
            goto label_30b138;
        }
    }
    ctx->pc = 0x30B100u;
label_30b100:
    // 0x30b100: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30b100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30b104:
    // 0x30b104: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x30b104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_30b108:
    // 0x30b108: 0x24511710  addiu       $s1, $v0, 0x1710
    ctx->pc = 0x30b108u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5904));
label_30b10c:
    // 0x30b10c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30b10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30b110:
    // 0x30b110: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x30b110u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_30b114:
    // 0x30b114: 0xc079140  jal         func_1E4500
label_30b118:
    if (ctx->pc == 0x30B118u) {
        ctx->pc = 0x30B11Cu;
        goto label_30b11c;
    }
    ctx->pc = 0x30B114u;
    SET_GPR_U32(ctx, 31, 0x30B11Cu);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x30B114u, 0x30B11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B11Cu;
label_30b11c:
    // 0x30b11c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30b120:
    // 0x30b120: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x30b120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_30b124:
    // 0x30b124: 0x245117a0  addiu       $s1, $v0, 0x17A0
    ctx->pc = 0x30b124u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 6048));
label_30b128:
    // 0x30b128: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30b128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30b12c:
    // 0x30b12c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x30b12cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_30b130:
    // 0x30b130: 0xc079140  jal         func_1E4500
label_30b134:
    if (ctx->pc == 0x30B134u) {
        ctx->pc = 0x30B138u;
        goto label_30b138;
    }
    ctx->pc = 0x30B130u;
    SET_GPR_U32(ctx, 31, 0x30B138u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x30B130u, 0x30B138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B138u;
label_30b138:
    // 0x30b138: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30b138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30b13c:
    // 0x30b13c: 0xc0c2e4c  jal         func_30B930
label_30b140:
    if (ctx->pc == 0x30B140u) {
        ctx->pc = 0x30B144u;
        goto label_30b144;
    }
    ctx->pc = 0x30B13Cu;
    SET_GPR_U32(ctx, 31, 0x30B144u);
    ctx->pc = 0x30B930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B930u, 0x30B13Cu, 0x30B144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B144u;
label_30b144:
    // 0x30b144: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30b144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30b148:
    // 0x30b148: 0xc0c2cec  jal         func_30B3B0
label_30b14c:
    if (ctx->pc == 0x30B14Cu) {
        ctx->pc = 0x30B150u;
        goto label_30b150;
    }
    ctx->pc = 0x30B148u;
    SET_GPR_U32(ctx, 31, 0x30B150u);
    ctx->pc = 0x30B3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B3B0u, 0x30B148u, 0x30B150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B150u;
label_30b150:
    // 0x30b150: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30b150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30b154:
    // 0x30b154: 0xc0c2c6c  jal         func_30B1B0
label_30b158:
    if (ctx->pc == 0x30B158u) {
        ctx->pc = 0x30B15Cu;
        goto label_30b15c;
    }
    ctx->pc = 0x30B154u;
    SET_GPR_U32(ctx, 31, 0x30B15Cu);
    ctx->pc = 0x30B1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B1B0u, 0x30B154u, 0x30B15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B15Cu;
label_30b15c:
    // 0x30b15c: 0xc067694  jal         func_19DA50
label_30b160:
    if (ctx->pc == 0x30B160u) {
        ctx->pc = 0x30B164u;
        goto label_30b164;
    }
    ctx->pc = 0x30B15Cu;
    SET_GPR_U32(ctx, 31, 0x30B164u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x30B15Cu, 0x30B164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B164u;
label_30b164:
    // 0x30b164: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x30b164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_30b168:
    // 0x30b168: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x30b168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_30b16c:
    // 0x30b16c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x30b16cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_30b170:
    // 0x30b170: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30b170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_30b174:
    // 0x30b174: 0x24639790  addiu       $v1, $v1, -0x6870
    ctx->pc = 0x30b174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940560));
label_30b178:
    // 0x30b178: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30b178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_30b17c:
    // 0x30b17c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x30b17cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_30b180:
    // 0x30b180: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x30b180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_30b184:
    // 0x30b184: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x30b184u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
label_30b188:
    // 0x30b188: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x30b188u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30b18c:
    // 0x30b18c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30b18cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30b190:
    // 0x30b190: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30b190u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30b194:
    // 0x30b194: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30b194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30b198:
    // 0x30b198: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30b198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30b19c:
    // 0x30b19c: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x30b19cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_30b1a0:
    // 0x30b1a0: 0x3e00008  jr          $ra
label_30b1a4:
    if (ctx->pc == 0x30B1A4u) {
        ctx->pc = 0x30B1A8u;
        goto label_fallthrough_0x30b1a0;
    }
    ctx->pc = 0x30B1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x30b1a0:
    ctx->pc = 0x30B1A8u;
}
