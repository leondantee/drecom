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

// Function: Em0b_R0_move
// Address: 0x1ebc60 - 0x1ec6e8
void Em0b_R0_move_0x1ebc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_R0_move_0x1ebc60");
#endif

    switch (ctx->pc) {
        case 0x1ebc60u: goto label_1ebc60;
        case 0x1ebc64u: goto label_1ebc64;
        case 0x1ebc68u: goto label_1ebc68;
        case 0x1ebc6cu: goto label_1ebc6c;
        case 0x1ebc70u: goto label_1ebc70;
        case 0x1ebc74u: goto label_1ebc74;
        case 0x1ebc78u: goto label_1ebc78;
        case 0x1ebc7cu: goto label_1ebc7c;
        case 0x1ebc80u: goto label_1ebc80;
        case 0x1ebc84u: goto label_1ebc84;
        case 0x1ebc88u: goto label_1ebc88;
        case 0x1ebc8cu: goto label_1ebc8c;
        case 0x1ebc90u: goto label_1ebc90;
        case 0x1ebc94u: goto label_1ebc94;
        case 0x1ebc98u: goto label_1ebc98;
        case 0x1ebc9cu: goto label_1ebc9c;
        case 0x1ebca0u: goto label_1ebca0;
        case 0x1ebca4u: goto label_1ebca4;
        case 0x1ebca8u: goto label_1ebca8;
        case 0x1ebcacu: goto label_1ebcac;
        case 0x1ebcb0u: goto label_1ebcb0;
        case 0x1ebcb4u: goto label_1ebcb4;
        case 0x1ebcb8u: goto label_1ebcb8;
        case 0x1ebcbcu: goto label_1ebcbc;
        case 0x1ebcc0u: goto label_1ebcc0;
        case 0x1ebcc4u: goto label_1ebcc4;
        case 0x1ebcc8u: goto label_1ebcc8;
        case 0x1ebcccu: goto label_1ebccc;
        case 0x1ebcd0u: goto label_1ebcd0;
        case 0x1ebcd4u: goto label_1ebcd4;
        case 0x1ebcd8u: goto label_1ebcd8;
        case 0x1ebcdcu: goto label_1ebcdc;
        case 0x1ebce0u: goto label_1ebce0;
        case 0x1ebce4u: goto label_1ebce4;
        case 0x1ebce8u: goto label_1ebce8;
        case 0x1ebcecu: goto label_1ebcec;
        case 0x1ebcf0u: goto label_1ebcf0;
        case 0x1ebcf4u: goto label_1ebcf4;
        case 0x1ebcf8u: goto label_1ebcf8;
        case 0x1ebcfcu: goto label_1ebcfc;
        case 0x1ebd00u: goto label_1ebd00;
        case 0x1ebd04u: goto label_1ebd04;
        case 0x1ebd08u: goto label_1ebd08;
        case 0x1ebd0cu: goto label_1ebd0c;
        case 0x1ebd10u: goto label_1ebd10;
        case 0x1ebd14u: goto label_1ebd14;
        case 0x1ebd18u: goto label_1ebd18;
        case 0x1ebd1cu: goto label_1ebd1c;
        case 0x1ebd20u: goto label_1ebd20;
        case 0x1ebd24u: goto label_1ebd24;
        case 0x1ebd28u: goto label_1ebd28;
        case 0x1ebd2cu: goto label_1ebd2c;
        case 0x1ebd30u: goto label_1ebd30;
        case 0x1ebd34u: goto label_1ebd34;
        case 0x1ebd38u: goto label_1ebd38;
        case 0x1ebd3cu: goto label_1ebd3c;
        case 0x1ebd40u: goto label_1ebd40;
        case 0x1ebd44u: goto label_1ebd44;
        case 0x1ebd48u: goto label_1ebd48;
        case 0x1ebd4cu: goto label_1ebd4c;
        case 0x1ebd50u: goto label_1ebd50;
        case 0x1ebd54u: goto label_1ebd54;
        case 0x1ebd58u: goto label_1ebd58;
        case 0x1ebd5cu: goto label_1ebd5c;
        case 0x1ebd60u: goto label_1ebd60;
        case 0x1ebd64u: goto label_1ebd64;
        case 0x1ebd68u: goto label_1ebd68;
        case 0x1ebd6cu: goto label_1ebd6c;
        case 0x1ebd70u: goto label_1ebd70;
        case 0x1ebd74u: goto label_1ebd74;
        case 0x1ebd78u: goto label_1ebd78;
        case 0x1ebd7cu: goto label_1ebd7c;
        case 0x1ebd80u: goto label_1ebd80;
        case 0x1ebd84u: goto label_1ebd84;
        case 0x1ebd88u: goto label_1ebd88;
        case 0x1ebd8cu: goto label_1ebd8c;
        case 0x1ebd90u: goto label_1ebd90;
        case 0x1ebd94u: goto label_1ebd94;
        case 0x1ebd98u: goto label_1ebd98;
        case 0x1ebd9cu: goto label_1ebd9c;
        case 0x1ebda0u: goto label_1ebda0;
        case 0x1ebda4u: goto label_1ebda4;
        case 0x1ebda8u: goto label_1ebda8;
        case 0x1ebdacu: goto label_1ebdac;
        case 0x1ebdb0u: goto label_1ebdb0;
        case 0x1ebdb4u: goto label_1ebdb4;
        case 0x1ebdb8u: goto label_1ebdb8;
        case 0x1ebdbcu: goto label_1ebdbc;
        case 0x1ebdc0u: goto label_1ebdc0;
        case 0x1ebdc4u: goto label_1ebdc4;
        case 0x1ebdc8u: goto label_1ebdc8;
        case 0x1ebdccu: goto label_1ebdcc;
        case 0x1ebdd0u: goto label_1ebdd0;
        case 0x1ebdd4u: goto label_1ebdd4;
        case 0x1ebdd8u: goto label_1ebdd8;
        case 0x1ebddcu: goto label_1ebddc;
        case 0x1ebde0u: goto label_1ebde0;
        case 0x1ebde4u: goto label_1ebde4;
        case 0x1ebde8u: goto label_1ebde8;
        case 0x1ebdecu: goto label_1ebdec;
        case 0x1ebdf0u: goto label_1ebdf0;
        case 0x1ebdf4u: goto label_1ebdf4;
        case 0x1ebdf8u: goto label_1ebdf8;
        case 0x1ebdfcu: goto label_1ebdfc;
        case 0x1ebe00u: goto label_1ebe00;
        case 0x1ebe04u: goto label_1ebe04;
        case 0x1ebe08u: goto label_1ebe08;
        case 0x1ebe0cu: goto label_1ebe0c;
        case 0x1ebe10u: goto label_1ebe10;
        case 0x1ebe14u: goto label_1ebe14;
        case 0x1ebe18u: goto label_1ebe18;
        case 0x1ebe1cu: goto label_1ebe1c;
        case 0x1ebe20u: goto label_1ebe20;
        case 0x1ebe24u: goto label_1ebe24;
        case 0x1ebe28u: goto label_1ebe28;
        case 0x1ebe2cu: goto label_1ebe2c;
        case 0x1ebe30u: goto label_1ebe30;
        case 0x1ebe34u: goto label_1ebe34;
        case 0x1ebe38u: goto label_1ebe38;
        case 0x1ebe3cu: goto label_1ebe3c;
        case 0x1ebe40u: goto label_1ebe40;
        case 0x1ebe44u: goto label_1ebe44;
        case 0x1ebe48u: goto label_1ebe48;
        case 0x1ebe4cu: goto label_1ebe4c;
        case 0x1ebe50u: goto label_1ebe50;
        case 0x1ebe54u: goto label_1ebe54;
        case 0x1ebe58u: goto label_1ebe58;
        case 0x1ebe5cu: goto label_1ebe5c;
        case 0x1ebe60u: goto label_1ebe60;
        case 0x1ebe64u: goto label_1ebe64;
        case 0x1ebe68u: goto label_1ebe68;
        case 0x1ebe6cu: goto label_1ebe6c;
        case 0x1ebe70u: goto label_1ebe70;
        case 0x1ebe74u: goto label_1ebe74;
        case 0x1ebe78u: goto label_1ebe78;
        case 0x1ebe7cu: goto label_1ebe7c;
        case 0x1ebe80u: goto label_1ebe80;
        case 0x1ebe84u: goto label_1ebe84;
        case 0x1ebe88u: goto label_1ebe88;
        case 0x1ebe8cu: goto label_1ebe8c;
        case 0x1ebe90u: goto label_1ebe90;
        case 0x1ebe94u: goto label_1ebe94;
        case 0x1ebe98u: goto label_1ebe98;
        case 0x1ebe9cu: goto label_1ebe9c;
        case 0x1ebea0u: goto label_1ebea0;
        case 0x1ebea4u: goto label_1ebea4;
        case 0x1ebea8u: goto label_1ebea8;
        case 0x1ebeacu: goto label_1ebeac;
        case 0x1ebeb0u: goto label_1ebeb0;
        case 0x1ebeb4u: goto label_1ebeb4;
        case 0x1ebeb8u: goto label_1ebeb8;
        case 0x1ebebcu: goto label_1ebebc;
        case 0x1ebec0u: goto label_1ebec0;
        case 0x1ebec4u: goto label_1ebec4;
        case 0x1ebec8u: goto label_1ebec8;
        case 0x1ebeccu: goto label_1ebecc;
        case 0x1ebed0u: goto label_1ebed0;
        case 0x1ebed4u: goto label_1ebed4;
        case 0x1ebed8u: goto label_1ebed8;
        case 0x1ebedcu: goto label_1ebedc;
        case 0x1ebee0u: goto label_1ebee0;
        case 0x1ebee4u: goto label_1ebee4;
        case 0x1ebee8u: goto label_1ebee8;
        case 0x1ebeecu: goto label_1ebeec;
        case 0x1ebef0u: goto label_1ebef0;
        case 0x1ebef4u: goto label_1ebef4;
        case 0x1ebef8u: goto label_1ebef8;
        case 0x1ebefcu: goto label_1ebefc;
        case 0x1ebf00u: goto label_1ebf00;
        case 0x1ebf04u: goto label_1ebf04;
        case 0x1ebf08u: goto label_1ebf08;
        case 0x1ebf0cu: goto label_1ebf0c;
        case 0x1ebf10u: goto label_1ebf10;
        case 0x1ebf14u: goto label_1ebf14;
        case 0x1ebf18u: goto label_1ebf18;
        case 0x1ebf1cu: goto label_1ebf1c;
        case 0x1ebf20u: goto label_1ebf20;
        case 0x1ebf24u: goto label_1ebf24;
        case 0x1ebf28u: goto label_1ebf28;
        case 0x1ebf2cu: goto label_1ebf2c;
        case 0x1ebf30u: goto label_1ebf30;
        case 0x1ebf34u: goto label_1ebf34;
        case 0x1ebf38u: goto label_1ebf38;
        case 0x1ebf3cu: goto label_1ebf3c;
        case 0x1ebf40u: goto label_1ebf40;
        case 0x1ebf44u: goto label_1ebf44;
        case 0x1ebf48u: goto label_1ebf48;
        case 0x1ebf4cu: goto label_1ebf4c;
        case 0x1ebf50u: goto label_1ebf50;
        case 0x1ebf54u: goto label_1ebf54;
        case 0x1ebf58u: goto label_1ebf58;
        case 0x1ebf5cu: goto label_1ebf5c;
        case 0x1ebf60u: goto label_1ebf60;
        case 0x1ebf64u: goto label_1ebf64;
        case 0x1ebf68u: goto label_1ebf68;
        case 0x1ebf6cu: goto label_1ebf6c;
        case 0x1ebf70u: goto label_1ebf70;
        case 0x1ebf74u: goto label_1ebf74;
        case 0x1ebf78u: goto label_1ebf78;
        case 0x1ebf7cu: goto label_1ebf7c;
        case 0x1ebf80u: goto label_1ebf80;
        case 0x1ebf84u: goto label_1ebf84;
        case 0x1ebf88u: goto label_1ebf88;
        case 0x1ebf8cu: goto label_1ebf8c;
        case 0x1ebf90u: goto label_1ebf90;
        case 0x1ebf94u: goto label_1ebf94;
        case 0x1ebf98u: goto label_1ebf98;
        case 0x1ebf9cu: goto label_1ebf9c;
        case 0x1ebfa0u: goto label_1ebfa0;
        case 0x1ebfa4u: goto label_1ebfa4;
        case 0x1ebfa8u: goto label_1ebfa8;
        case 0x1ebfacu: goto label_1ebfac;
        case 0x1ebfb0u: goto label_1ebfb0;
        case 0x1ebfb4u: goto label_1ebfb4;
        case 0x1ebfb8u: goto label_1ebfb8;
        case 0x1ebfbcu: goto label_1ebfbc;
        case 0x1ebfc0u: goto label_1ebfc0;
        case 0x1ebfc4u: goto label_1ebfc4;
        case 0x1ebfc8u: goto label_1ebfc8;
        case 0x1ebfccu: goto label_1ebfcc;
        case 0x1ebfd0u: goto label_1ebfd0;
        case 0x1ebfd4u: goto label_1ebfd4;
        case 0x1ebfd8u: goto label_1ebfd8;
        case 0x1ebfdcu: goto label_1ebfdc;
        case 0x1ebfe0u: goto label_1ebfe0;
        case 0x1ebfe4u: goto label_1ebfe4;
        case 0x1ebfe8u: goto label_1ebfe8;
        case 0x1ebfecu: goto label_1ebfec;
        case 0x1ebff0u: goto label_1ebff0;
        case 0x1ebff4u: goto label_1ebff4;
        case 0x1ebff8u: goto label_1ebff8;
        case 0x1ebffcu: goto label_1ebffc;
        case 0x1ec000u: goto label_1ec000;
        case 0x1ec004u: goto label_1ec004;
        case 0x1ec008u: goto label_1ec008;
        case 0x1ec00cu: goto label_1ec00c;
        case 0x1ec010u: goto label_1ec010;
        case 0x1ec014u: goto label_1ec014;
        case 0x1ec018u: goto label_1ec018;
        case 0x1ec01cu: goto label_1ec01c;
        case 0x1ec020u: goto label_1ec020;
        case 0x1ec024u: goto label_1ec024;
        case 0x1ec028u: goto label_1ec028;
        case 0x1ec02cu: goto label_1ec02c;
        case 0x1ec030u: goto label_1ec030;
        case 0x1ec034u: goto label_1ec034;
        case 0x1ec038u: goto label_1ec038;
        case 0x1ec03cu: goto label_1ec03c;
        case 0x1ec040u: goto label_1ec040;
        case 0x1ec044u: goto label_1ec044;
        case 0x1ec048u: goto label_1ec048;
        case 0x1ec04cu: goto label_1ec04c;
        case 0x1ec050u: goto label_1ec050;
        case 0x1ec054u: goto label_1ec054;
        case 0x1ec058u: goto label_1ec058;
        case 0x1ec05cu: goto label_1ec05c;
        case 0x1ec060u: goto label_1ec060;
        case 0x1ec064u: goto label_1ec064;
        case 0x1ec068u: goto label_1ec068;
        case 0x1ec06cu: goto label_1ec06c;
        case 0x1ec070u: goto label_1ec070;
        case 0x1ec074u: goto label_1ec074;
        case 0x1ec078u: goto label_1ec078;
        case 0x1ec07cu: goto label_1ec07c;
        case 0x1ec080u: goto label_1ec080;
        case 0x1ec084u: goto label_1ec084;
        case 0x1ec088u: goto label_1ec088;
        case 0x1ec08cu: goto label_1ec08c;
        case 0x1ec090u: goto label_1ec090;
        case 0x1ec094u: goto label_1ec094;
        case 0x1ec098u: goto label_1ec098;
        case 0x1ec09cu: goto label_1ec09c;
        case 0x1ec0a0u: goto label_1ec0a0;
        case 0x1ec0a4u: goto label_1ec0a4;
        case 0x1ec0a8u: goto label_1ec0a8;
        case 0x1ec0acu: goto label_1ec0ac;
        case 0x1ec0b0u: goto label_1ec0b0;
        case 0x1ec0b4u: goto label_1ec0b4;
        case 0x1ec0b8u: goto label_1ec0b8;
        case 0x1ec0bcu: goto label_1ec0bc;
        case 0x1ec0c0u: goto label_1ec0c0;
        case 0x1ec0c4u: goto label_1ec0c4;
        case 0x1ec0c8u: goto label_1ec0c8;
        case 0x1ec0ccu: goto label_1ec0cc;
        case 0x1ec0d0u: goto label_1ec0d0;
        case 0x1ec0d4u: goto label_1ec0d4;
        case 0x1ec0d8u: goto label_1ec0d8;
        case 0x1ec0dcu: goto label_1ec0dc;
        case 0x1ec0e0u: goto label_1ec0e0;
        case 0x1ec0e4u: goto label_1ec0e4;
        case 0x1ec0e8u: goto label_1ec0e8;
        case 0x1ec0ecu: goto label_1ec0ec;
        case 0x1ec0f0u: goto label_1ec0f0;
        case 0x1ec0f4u: goto label_1ec0f4;
        case 0x1ec0f8u: goto label_1ec0f8;
        case 0x1ec0fcu: goto label_1ec0fc;
        case 0x1ec100u: goto label_1ec100;
        case 0x1ec104u: goto label_1ec104;
        case 0x1ec108u: goto label_1ec108;
        case 0x1ec10cu: goto label_1ec10c;
        case 0x1ec110u: goto label_1ec110;
        case 0x1ec114u: goto label_1ec114;
        case 0x1ec118u: goto label_1ec118;
        case 0x1ec11cu: goto label_1ec11c;
        case 0x1ec120u: goto label_1ec120;
        case 0x1ec124u: goto label_1ec124;
        case 0x1ec128u: goto label_1ec128;
        case 0x1ec12cu: goto label_1ec12c;
        case 0x1ec130u: goto label_1ec130;
        case 0x1ec134u: goto label_1ec134;
        case 0x1ec138u: goto label_1ec138;
        case 0x1ec13cu: goto label_1ec13c;
        case 0x1ec140u: goto label_1ec140;
        case 0x1ec144u: goto label_1ec144;
        case 0x1ec148u: goto label_1ec148;
        case 0x1ec14cu: goto label_1ec14c;
        case 0x1ec150u: goto label_1ec150;
        case 0x1ec154u: goto label_1ec154;
        case 0x1ec158u: goto label_1ec158;
        case 0x1ec15cu: goto label_1ec15c;
        case 0x1ec160u: goto label_1ec160;
        case 0x1ec164u: goto label_1ec164;
        case 0x1ec168u: goto label_1ec168;
        case 0x1ec16cu: goto label_1ec16c;
        case 0x1ec170u: goto label_1ec170;
        case 0x1ec174u: goto label_1ec174;
        case 0x1ec178u: goto label_1ec178;
        case 0x1ec17cu: goto label_1ec17c;
        case 0x1ec180u: goto label_1ec180;
        case 0x1ec184u: goto label_1ec184;
        case 0x1ec188u: goto label_1ec188;
        case 0x1ec18cu: goto label_1ec18c;
        case 0x1ec190u: goto label_1ec190;
        case 0x1ec194u: goto label_1ec194;
        case 0x1ec198u: goto label_1ec198;
        case 0x1ec19cu: goto label_1ec19c;
        case 0x1ec1a0u: goto label_1ec1a0;
        case 0x1ec1a4u: goto label_1ec1a4;
        case 0x1ec1a8u: goto label_1ec1a8;
        case 0x1ec1acu: goto label_1ec1ac;
        case 0x1ec1b0u: goto label_1ec1b0;
        case 0x1ec1b4u: goto label_1ec1b4;
        case 0x1ec1b8u: goto label_1ec1b8;
        case 0x1ec1bcu: goto label_1ec1bc;
        case 0x1ec1c0u: goto label_1ec1c0;
        case 0x1ec1c4u: goto label_1ec1c4;
        case 0x1ec1c8u: goto label_1ec1c8;
        case 0x1ec1ccu: goto label_1ec1cc;
        case 0x1ec1d0u: goto label_1ec1d0;
        case 0x1ec1d4u: goto label_1ec1d4;
        case 0x1ec1d8u: goto label_1ec1d8;
        case 0x1ec1dcu: goto label_1ec1dc;
        case 0x1ec1e0u: goto label_1ec1e0;
        case 0x1ec1e4u: goto label_1ec1e4;
        case 0x1ec1e8u: goto label_1ec1e8;
        case 0x1ec1ecu: goto label_1ec1ec;
        case 0x1ec1f0u: goto label_1ec1f0;
        case 0x1ec1f4u: goto label_1ec1f4;
        case 0x1ec1f8u: goto label_1ec1f8;
        case 0x1ec1fcu: goto label_1ec1fc;
        case 0x1ec200u: goto label_1ec200;
        case 0x1ec204u: goto label_1ec204;
        case 0x1ec208u: goto label_1ec208;
        case 0x1ec20cu: goto label_1ec20c;
        case 0x1ec210u: goto label_1ec210;
        case 0x1ec214u: goto label_1ec214;
        case 0x1ec218u: goto label_1ec218;
        case 0x1ec21cu: goto label_1ec21c;
        case 0x1ec220u: goto label_1ec220;
        case 0x1ec224u: goto label_1ec224;
        case 0x1ec228u: goto label_1ec228;
        case 0x1ec22cu: goto label_1ec22c;
        case 0x1ec230u: goto label_1ec230;
        case 0x1ec234u: goto label_1ec234;
        case 0x1ec238u: goto label_1ec238;
        case 0x1ec23cu: goto label_1ec23c;
        case 0x1ec240u: goto label_1ec240;
        case 0x1ec244u: goto label_1ec244;
        case 0x1ec248u: goto label_1ec248;
        case 0x1ec24cu: goto label_1ec24c;
        case 0x1ec250u: goto label_1ec250;
        case 0x1ec254u: goto label_1ec254;
        case 0x1ec258u: goto label_1ec258;
        case 0x1ec25cu: goto label_1ec25c;
        case 0x1ec260u: goto label_1ec260;
        case 0x1ec264u: goto label_1ec264;
        case 0x1ec268u: goto label_1ec268;
        case 0x1ec26cu: goto label_1ec26c;
        case 0x1ec270u: goto label_1ec270;
        case 0x1ec274u: goto label_1ec274;
        case 0x1ec278u: goto label_1ec278;
        case 0x1ec27cu: goto label_1ec27c;
        case 0x1ec280u: goto label_1ec280;
        case 0x1ec284u: goto label_1ec284;
        case 0x1ec288u: goto label_1ec288;
        case 0x1ec28cu: goto label_1ec28c;
        case 0x1ec290u: goto label_1ec290;
        case 0x1ec294u: goto label_1ec294;
        case 0x1ec298u: goto label_1ec298;
        case 0x1ec29cu: goto label_1ec29c;
        case 0x1ec2a0u: goto label_1ec2a0;
        case 0x1ec2a4u: goto label_1ec2a4;
        case 0x1ec2a8u: goto label_1ec2a8;
        case 0x1ec2acu: goto label_1ec2ac;
        case 0x1ec2b0u: goto label_1ec2b0;
        case 0x1ec2b4u: goto label_1ec2b4;
        case 0x1ec2b8u: goto label_1ec2b8;
        case 0x1ec2bcu: goto label_1ec2bc;
        case 0x1ec2c0u: goto label_1ec2c0;
        case 0x1ec2c4u: goto label_1ec2c4;
        case 0x1ec2c8u: goto label_1ec2c8;
        case 0x1ec2ccu: goto label_1ec2cc;
        case 0x1ec2d0u: goto label_1ec2d0;
        case 0x1ec2d4u: goto label_1ec2d4;
        case 0x1ec2d8u: goto label_1ec2d8;
        case 0x1ec2dcu: goto label_1ec2dc;
        case 0x1ec2e0u: goto label_1ec2e0;
        case 0x1ec2e4u: goto label_1ec2e4;
        case 0x1ec2e8u: goto label_1ec2e8;
        case 0x1ec2ecu: goto label_1ec2ec;
        case 0x1ec2f0u: goto label_1ec2f0;
        case 0x1ec2f4u: goto label_1ec2f4;
        case 0x1ec2f8u: goto label_1ec2f8;
        case 0x1ec2fcu: goto label_1ec2fc;
        case 0x1ec300u: goto label_1ec300;
        case 0x1ec304u: goto label_1ec304;
        case 0x1ec308u: goto label_1ec308;
        case 0x1ec30cu: goto label_1ec30c;
        case 0x1ec310u: goto label_1ec310;
        case 0x1ec314u: goto label_1ec314;
        case 0x1ec318u: goto label_1ec318;
        case 0x1ec31cu: goto label_1ec31c;
        case 0x1ec320u: goto label_1ec320;
        case 0x1ec324u: goto label_1ec324;
        case 0x1ec328u: goto label_1ec328;
        case 0x1ec32cu: goto label_1ec32c;
        case 0x1ec330u: goto label_1ec330;
        case 0x1ec334u: goto label_1ec334;
        case 0x1ec338u: goto label_1ec338;
        case 0x1ec33cu: goto label_1ec33c;
        case 0x1ec340u: goto label_1ec340;
        case 0x1ec344u: goto label_1ec344;
        case 0x1ec348u: goto label_1ec348;
        case 0x1ec34cu: goto label_1ec34c;
        case 0x1ec350u: goto label_1ec350;
        case 0x1ec354u: goto label_1ec354;
        case 0x1ec358u: goto label_1ec358;
        case 0x1ec35cu: goto label_1ec35c;
        case 0x1ec360u: goto label_1ec360;
        case 0x1ec364u: goto label_1ec364;
        case 0x1ec368u: goto label_1ec368;
        case 0x1ec36cu: goto label_1ec36c;
        case 0x1ec370u: goto label_1ec370;
        case 0x1ec374u: goto label_1ec374;
        case 0x1ec378u: goto label_1ec378;
        case 0x1ec37cu: goto label_1ec37c;
        case 0x1ec380u: goto label_1ec380;
        case 0x1ec384u: goto label_1ec384;
        case 0x1ec388u: goto label_1ec388;
        case 0x1ec38cu: goto label_1ec38c;
        case 0x1ec390u: goto label_1ec390;
        case 0x1ec394u: goto label_1ec394;
        case 0x1ec398u: goto label_1ec398;
        case 0x1ec39cu: goto label_1ec39c;
        case 0x1ec3a0u: goto label_1ec3a0;
        case 0x1ec3a4u: goto label_1ec3a4;
        case 0x1ec3a8u: goto label_1ec3a8;
        case 0x1ec3acu: goto label_1ec3ac;
        case 0x1ec3b0u: goto label_1ec3b0;
        case 0x1ec3b4u: goto label_1ec3b4;
        case 0x1ec3b8u: goto label_1ec3b8;
        case 0x1ec3bcu: goto label_1ec3bc;
        case 0x1ec3c0u: goto label_1ec3c0;
        case 0x1ec3c4u: goto label_1ec3c4;
        case 0x1ec3c8u: goto label_1ec3c8;
        case 0x1ec3ccu: goto label_1ec3cc;
        case 0x1ec3d0u: goto label_1ec3d0;
        case 0x1ec3d4u: goto label_1ec3d4;
        case 0x1ec3d8u: goto label_1ec3d8;
        case 0x1ec3dcu: goto label_1ec3dc;
        case 0x1ec3e0u: goto label_1ec3e0;
        case 0x1ec3e4u: goto label_1ec3e4;
        case 0x1ec3e8u: goto label_1ec3e8;
        case 0x1ec3ecu: goto label_1ec3ec;
        case 0x1ec3f0u: goto label_1ec3f0;
        case 0x1ec3f4u: goto label_1ec3f4;
        case 0x1ec3f8u: goto label_1ec3f8;
        case 0x1ec3fcu: goto label_1ec3fc;
        case 0x1ec400u: goto label_1ec400;
        case 0x1ec404u: goto label_1ec404;
        case 0x1ec408u: goto label_1ec408;
        case 0x1ec40cu: goto label_1ec40c;
        case 0x1ec410u: goto label_1ec410;
        case 0x1ec414u: goto label_1ec414;
        case 0x1ec418u: goto label_1ec418;
        case 0x1ec41cu: goto label_1ec41c;
        case 0x1ec420u: goto label_1ec420;
        case 0x1ec424u: goto label_1ec424;
        case 0x1ec428u: goto label_1ec428;
        case 0x1ec42cu: goto label_1ec42c;
        case 0x1ec430u: goto label_1ec430;
        case 0x1ec434u: goto label_1ec434;
        case 0x1ec438u: goto label_1ec438;
        case 0x1ec43cu: goto label_1ec43c;
        case 0x1ec440u: goto label_1ec440;
        case 0x1ec444u: goto label_1ec444;
        case 0x1ec448u: goto label_1ec448;
        case 0x1ec44cu: goto label_1ec44c;
        case 0x1ec450u: goto label_1ec450;
        case 0x1ec454u: goto label_1ec454;
        case 0x1ec458u: goto label_1ec458;
        case 0x1ec45cu: goto label_1ec45c;
        case 0x1ec460u: goto label_1ec460;
        case 0x1ec464u: goto label_1ec464;
        case 0x1ec468u: goto label_1ec468;
        case 0x1ec46cu: goto label_1ec46c;
        case 0x1ec470u: goto label_1ec470;
        case 0x1ec474u: goto label_1ec474;
        case 0x1ec478u: goto label_1ec478;
        case 0x1ec47cu: goto label_1ec47c;
        case 0x1ec480u: goto label_1ec480;
        case 0x1ec484u: goto label_1ec484;
        case 0x1ec488u: goto label_1ec488;
        case 0x1ec48cu: goto label_1ec48c;
        case 0x1ec490u: goto label_1ec490;
        case 0x1ec494u: goto label_1ec494;
        case 0x1ec498u: goto label_1ec498;
        case 0x1ec49cu: goto label_1ec49c;
        case 0x1ec4a0u: goto label_1ec4a0;
        case 0x1ec4a4u: goto label_1ec4a4;
        case 0x1ec4a8u: goto label_1ec4a8;
        case 0x1ec4acu: goto label_1ec4ac;
        case 0x1ec4b0u: goto label_1ec4b0;
        case 0x1ec4b4u: goto label_1ec4b4;
        case 0x1ec4b8u: goto label_1ec4b8;
        case 0x1ec4bcu: goto label_1ec4bc;
        case 0x1ec4c0u: goto label_1ec4c0;
        case 0x1ec4c4u: goto label_1ec4c4;
        case 0x1ec4c8u: goto label_1ec4c8;
        case 0x1ec4ccu: goto label_1ec4cc;
        case 0x1ec4d0u: goto label_1ec4d0;
        case 0x1ec4d4u: goto label_1ec4d4;
        case 0x1ec4d8u: goto label_1ec4d8;
        case 0x1ec4dcu: goto label_1ec4dc;
        case 0x1ec4e0u: goto label_1ec4e0;
        case 0x1ec4e4u: goto label_1ec4e4;
        case 0x1ec4e8u: goto label_1ec4e8;
        case 0x1ec4ecu: goto label_1ec4ec;
        case 0x1ec4f0u: goto label_1ec4f0;
        case 0x1ec4f4u: goto label_1ec4f4;
        case 0x1ec4f8u: goto label_1ec4f8;
        case 0x1ec4fcu: goto label_1ec4fc;
        case 0x1ec500u: goto label_1ec500;
        case 0x1ec504u: goto label_1ec504;
        case 0x1ec508u: goto label_1ec508;
        case 0x1ec50cu: goto label_1ec50c;
        case 0x1ec510u: goto label_1ec510;
        case 0x1ec514u: goto label_1ec514;
        case 0x1ec518u: goto label_1ec518;
        case 0x1ec51cu: goto label_1ec51c;
        case 0x1ec520u: goto label_1ec520;
        case 0x1ec524u: goto label_1ec524;
        case 0x1ec528u: goto label_1ec528;
        case 0x1ec52cu: goto label_1ec52c;
        case 0x1ec530u: goto label_1ec530;
        case 0x1ec534u: goto label_1ec534;
        case 0x1ec538u: goto label_1ec538;
        case 0x1ec53cu: goto label_1ec53c;
        case 0x1ec540u: goto label_1ec540;
        case 0x1ec544u: goto label_1ec544;
        case 0x1ec548u: goto label_1ec548;
        case 0x1ec54cu: goto label_1ec54c;
        case 0x1ec550u: goto label_1ec550;
        case 0x1ec554u: goto label_1ec554;
        case 0x1ec558u: goto label_1ec558;
        case 0x1ec55cu: goto label_1ec55c;
        case 0x1ec560u: goto label_1ec560;
        case 0x1ec564u: goto label_1ec564;
        case 0x1ec568u: goto label_1ec568;
        case 0x1ec56cu: goto label_1ec56c;
        case 0x1ec570u: goto label_1ec570;
        case 0x1ec574u: goto label_1ec574;
        case 0x1ec578u: goto label_1ec578;
        case 0x1ec57cu: goto label_1ec57c;
        case 0x1ec580u: goto label_1ec580;
        case 0x1ec584u: goto label_1ec584;
        case 0x1ec588u: goto label_1ec588;
        case 0x1ec58cu: goto label_1ec58c;
        case 0x1ec590u: goto label_1ec590;
        case 0x1ec594u: goto label_1ec594;
        case 0x1ec598u: goto label_1ec598;
        case 0x1ec59cu: goto label_1ec59c;
        case 0x1ec5a0u: goto label_1ec5a0;
        case 0x1ec5a4u: goto label_1ec5a4;
        case 0x1ec5a8u: goto label_1ec5a8;
        case 0x1ec5acu: goto label_1ec5ac;
        case 0x1ec5b0u: goto label_1ec5b0;
        case 0x1ec5b4u: goto label_1ec5b4;
        case 0x1ec5b8u: goto label_1ec5b8;
        case 0x1ec5bcu: goto label_1ec5bc;
        case 0x1ec5c0u: goto label_1ec5c0;
        case 0x1ec5c4u: goto label_1ec5c4;
        case 0x1ec5c8u: goto label_1ec5c8;
        case 0x1ec5ccu: goto label_1ec5cc;
        case 0x1ec5d0u: goto label_1ec5d0;
        case 0x1ec5d4u: goto label_1ec5d4;
        case 0x1ec5d8u: goto label_1ec5d8;
        case 0x1ec5dcu: goto label_1ec5dc;
        case 0x1ec5e0u: goto label_1ec5e0;
        case 0x1ec5e4u: goto label_1ec5e4;
        case 0x1ec5e8u: goto label_1ec5e8;
        case 0x1ec5ecu: goto label_1ec5ec;
        case 0x1ec5f0u: goto label_1ec5f0;
        case 0x1ec5f4u: goto label_1ec5f4;
        case 0x1ec5f8u: goto label_1ec5f8;
        case 0x1ec5fcu: goto label_1ec5fc;
        case 0x1ec600u: goto label_1ec600;
        case 0x1ec604u: goto label_1ec604;
        case 0x1ec608u: goto label_1ec608;
        case 0x1ec60cu: goto label_1ec60c;
        case 0x1ec610u: goto label_1ec610;
        case 0x1ec614u: goto label_1ec614;
        case 0x1ec618u: goto label_1ec618;
        case 0x1ec61cu: goto label_1ec61c;
        case 0x1ec620u: goto label_1ec620;
        case 0x1ec624u: goto label_1ec624;
        case 0x1ec628u: goto label_1ec628;
        case 0x1ec62cu: goto label_1ec62c;
        case 0x1ec630u: goto label_1ec630;
        case 0x1ec634u: goto label_1ec634;
        case 0x1ec638u: goto label_1ec638;
        case 0x1ec63cu: goto label_1ec63c;
        case 0x1ec640u: goto label_1ec640;
        case 0x1ec644u: goto label_1ec644;
        case 0x1ec648u: goto label_1ec648;
        case 0x1ec64cu: goto label_1ec64c;
        case 0x1ec650u: goto label_1ec650;
        case 0x1ec654u: goto label_1ec654;
        case 0x1ec658u: goto label_1ec658;
        case 0x1ec65cu: goto label_1ec65c;
        case 0x1ec660u: goto label_1ec660;
        case 0x1ec664u: goto label_1ec664;
        case 0x1ec668u: goto label_1ec668;
        case 0x1ec66cu: goto label_1ec66c;
        case 0x1ec670u: goto label_1ec670;
        case 0x1ec674u: goto label_1ec674;
        case 0x1ec678u: goto label_1ec678;
        case 0x1ec67cu: goto label_1ec67c;
        case 0x1ec680u: goto label_1ec680;
        case 0x1ec684u: goto label_1ec684;
        case 0x1ec688u: goto label_1ec688;
        case 0x1ec68cu: goto label_1ec68c;
        case 0x1ec690u: goto label_1ec690;
        case 0x1ec694u: goto label_1ec694;
        case 0x1ec698u: goto label_1ec698;
        case 0x1ec69cu: goto label_1ec69c;
        case 0x1ec6a0u: goto label_1ec6a0;
        case 0x1ec6a4u: goto label_1ec6a4;
        case 0x1ec6a8u: goto label_1ec6a8;
        case 0x1ec6acu: goto label_1ec6ac;
        case 0x1ec6b0u: goto label_1ec6b0;
        case 0x1ec6b4u: goto label_1ec6b4;
        case 0x1ec6b8u: goto label_1ec6b8;
        case 0x1ec6bcu: goto label_1ec6bc;
        case 0x1ec6c0u: goto label_1ec6c0;
        case 0x1ec6c4u: goto label_1ec6c4;
        case 0x1ec6c8u: goto label_1ec6c8;
        case 0x1ec6ccu: goto label_1ec6cc;
        case 0x1ec6d0u: goto label_1ec6d0;
        case 0x1ec6d4u: goto label_1ec6d4;
        case 0x1ec6d8u: goto label_1ec6d8;
        case 0x1ec6dcu: goto label_1ec6dc;
        case 0x1ec6e0u: goto label_1ec6e0;
        case 0x1ec6e4u: goto label_1ec6e4;
        default: break;
    }

    ctx->pc = 0x1ebc60u;

label_1ebc60:
    // 0x1ebc60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ebc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1ebc64:
    // 0x1ebc64: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x1ebc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
label_1ebc68:
    // 0x1ebc68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ebc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ebc6c:
    // 0x1ebc6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ebc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ebc70:
    // 0x1ebc70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ebc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ebc74:
    // 0x1ebc74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ebc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ebc78:
    // 0x1ebc78: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x1ebc78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
label_1ebc7c:
    // 0x1ebc7c: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x1ebc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
label_1ebc80:
    // 0x1ebc80: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ebc80u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ebc84:
    // 0x1ebc84: 0x0  nop
    ctx->pc = 0x1ebc84u;
    // NOP
label_1ebc88:
    // 0x1ebc88: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1ebc88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1ebc8c:
    // 0x1ebc8c: 0x24100064  addiu       $s0, $zero, 0x64
    ctx->pc = 0x1ebc8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1ebc90:
    // 0x1ebc90: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ebc94:
    // 0x1ebc94: 0x8c510130  lw          $s1, 0x130($v0)
    ctx->pc = 0x1ebc94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_1ebc98:
    // 0x1ebc98: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ebc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ebc9c:
    // 0x1ebc9c: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x1ebc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1ebca0:
    // 0x1ebca0: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1ebca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1ebca4:
    // 0x1ebca4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1ebca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1ebca8:
    // 0x1ebca8: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
label_1ebcac:
    if (ctx->pc == 0x1EBCACu) {
        ctx->pc = 0x1EBCB0u;
        goto label_1ebcb0;
    }
    ctx->pc = 0x1EBCA8u;
    {
        const bool branch_taken_0x1ebca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebca8) {
            ctx->pc = 0x1EBDD8u;
            goto label_1ebdd8;
        }
    }
    ctx->pc = 0x1EBCB0u;
label_1ebcb0:
    // 0x1ebcb0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ebcb4:
    // 0x1ebcb4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ebcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ebcb8:
    // 0x1ebcb8: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1ebcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1ebcbc:
    // 0x1ebcbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ebcbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1ebcc0:
    // 0x1ebcc0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_1ebcc4:
    if (ctx->pc == 0x1EBCC4u) {
        ctx->pc = 0x1EBCC8u;
        goto label_1ebcc8;
    }
    ctx->pc = 0x1EBCC0u;
    {
        const bool branch_taken_0x1ebcc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebcc0) {
            ctx->pc = 0x1EBD48u;
            goto label_1ebd48;
        }
    }
    ctx->pc = 0x1EBCC8u;
label_1ebcc8:
    // 0x1ebcc8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ebccc:
    // 0x1ebccc: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1ebcccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ebcd0:
    // 0x1ebcd0: 0xc481002c  lwc1        $f1, 0x2C($a0)
    ctx->pc = 0x1ebcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ebcd4:
    // 0x1ebcd4: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1ebcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_1ebcd8:
    // 0x1ebcd8: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x1ebcd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1ebcdc:
    // 0x1ebcdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ebcdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ebce0:
    // 0x1ebce0: 0x0  nop
    ctx->pc = 0x1ebce0u;
    // NOP
label_1ebce4:
    // 0x1ebce4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ebce4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ebce8:
    // 0x1ebce8: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x1ebce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
label_1ebcec:
    // 0x1ebcec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ebcf0:
    // 0x1ebcf0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ebcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ebcf4:
    // 0x1ebcf4: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x1ebcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ebcf8:
    // 0x1ebcf8: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x1ebcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_1ebcfc:
    // 0x1ebcfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ebcfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ebd00:
    // 0x1ebd00: 0x0  nop
    ctx->pc = 0x1ebd00u;
    // NOP
label_1ebd04:
    // 0x1ebd04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ebd04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ebd08:
    // 0x1ebd08: 0x0  nop
    ctx->pc = 0x1ebd08u;
    // NOP
label_1ebd0c:
    // 0x1ebd0c: 0x4501002b  bc1t        . + 4 + (0x2B << 2)
label_1ebd10:
    if (ctx->pc == 0x1EBD10u) {
        ctx->pc = 0x1EBD14u;
        goto label_1ebd14;
    }
    ctx->pc = 0x1EBD0Cu;
    {
        const bool branch_taken_0x1ebd0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebd0c) {
            ctx->pc = 0x1EBDBCu;
            goto label_1ebdbc;
        }
    }
    ctx->pc = 0x1EBD14u;
label_1ebd14:
    // 0x1ebd14: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ebd18:
    // 0x1ebd18: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1ebd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ebd1c:
    // 0x1ebd1c: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1ebd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_1ebd20:
    // 0x1ebd20: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1ebd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1ebd24:
    // 0x1ebd24: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ebd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1ebd28:
    // 0x1ebd28: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1ebd28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
label_1ebd2c:
    // 0x1ebd2c: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x1ebd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_1ebd30:
    // 0x1ebd30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ebd30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ebd34:
    // 0x1ebd34: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ebd38:
    // 0x1ebd38: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1ebd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ebd3c:
    // 0x1ebd3c: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x1ebd3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
label_1ebd40:
    // 0x1ebd40: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1ebd44:
    if (ctx->pc == 0x1EBD44u) {
        ctx->pc = 0x1EBD48u;
        goto label_1ebd48;
    }
    ctx->pc = 0x1EBD40u;
    {
        const bool branch_taken_0x1ebd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebd40) {
            ctx->pc = 0x1EBDBCu;
            goto label_1ebdbc;
        }
    }
    ctx->pc = 0x1EBD48u;
label_1ebd48:
    // 0x1ebd48: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ebd4c:
    // 0x1ebd4c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ebd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ebd50:
    // 0x1ebd50: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x1ebd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ebd54:
    // 0x1ebd54: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1ebd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_1ebd58:
    // 0x1ebd58: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1ebd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1ebd5c:
    // 0x1ebd5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ebd5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ebd60:
    // 0x1ebd60: 0x0  nop
    ctx->pc = 0x1ebd60u;
    // NOP
label_1ebd64:
    // 0x1ebd64: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ebd64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ebd68:
    // 0x1ebd68: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x1ebd68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
label_1ebd6c:
    // 0x1ebd6c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ebd70:
    // 0x1ebd70: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ebd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ebd74:
    // 0x1ebd74: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x1ebd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ebd78:
    // 0x1ebd78: 0x3c02c140  lui         $v0, 0xC140
    ctx->pc = 0x1ebd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49472 << 16));
label_1ebd7c:
    // 0x1ebd7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ebd7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ebd80:
    // 0x1ebd80: 0x0  nop
    ctx->pc = 0x1ebd80u;
    // NOP
label_1ebd84:
    // 0x1ebd84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ebd84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ebd88:
    // 0x1ebd88: 0x0  nop
    ctx->pc = 0x1ebd88u;
    // NOP
label_1ebd8c:
    // 0x1ebd8c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_1ebd90:
    if (ctx->pc == 0x1EBD90u) {
        ctx->pc = 0x1EBD94u;
        goto label_1ebd94;
    }
    ctx->pc = 0x1EBD8Cu;
    {
        const bool branch_taken_0x1ebd8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebd8c) {
            ctx->pc = 0x1EBDBCu;
            goto label_1ebdbc;
        }
    }
    ctx->pc = 0x1EBD94u;
label_1ebd94:
    // 0x1ebd94: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ebd98:
    // 0x1ebd98: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1ebd98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ebd9c:
    // 0x1ebd9c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x1ebd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_1ebda0:
    // 0x1ebda0: 0x34430001  ori         $v1, $v0, 0x1
    ctx->pc = 0x1ebda0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1ebda4:
    // 0x1ebda4: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x1ebda4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
label_1ebda8:
    // 0x1ebda8: 0x3c02c140  lui         $v0, 0xC140
    ctx->pc = 0x1ebda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49472 << 16));
label_1ebdac:
    // 0x1ebdac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ebdacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ebdb0:
    // 0x1ebdb0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ebdb4:
    // 0x1ebdb4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ebdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ebdb8:
    // 0x1ebdb8: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x1ebdb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
label_1ebdbc:
    // 0x1ebdbc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ebdc0:
    // 0x1ebdc0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ebdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ebdc4:
    // 0x1ebdc4: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x1ebdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ebdc8:
    // 0x1ebdc8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ebdcc:
    // 0x1ebdcc: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1ebdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ebdd0:
    // 0x1ebdd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ebdd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1ebdd4:
    // 0x1ebdd4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1ebdd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1ebdd8:
    // 0x1ebdd8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ebdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ebddc:
    // 0x1ebddc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ebde0:
    // 0x1ebde0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1ebde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1ebde4:
    // 0x1ebde4: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1ebde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_1ebde8:
    // 0x1ebde8: 0xc05cf7c  jal         func_173DF0
label_1ebdec:
    if (ctx->pc == 0x1EBDECu) {
        ctx->pc = 0x1EBDF0u;
        goto label_1ebdf0;
    }
    ctx->pc = 0x1EBDE8u;
    SET_GPR_U32(ctx, 31, 0x1EBDF0u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1EBDE8u, 0x1EBDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBDF0u;
label_1ebdf0:
    // 0x1ebdf0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1ebdf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_1ebdf4:
    // 0x1ebdf4: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x1ebdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
label_1ebdf8:
    // 0x1ebdf8: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x1ebdf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
label_1ebdfc:
    // 0x1ebdfc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ebdfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ebe00:
    // 0x1ebe00: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1ebe00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ebe04:
    // 0x1ebe04: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1ebe04u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ebe08:
    // 0x1ebe08: 0x0  nop
    ctx->pc = 0x1ebe08u;
    // NOP
label_1ebe0c:
    // 0x1ebe0c: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
label_1ebe10:
    if (ctx->pc == 0x1EBE10u) {
        ctx->pc = 0x1EBE14u;
        goto label_1ebe14;
    }
    ctx->pc = 0x1EBE0Cu;
    {
        const bool branch_taken_0x1ebe0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebe0c) {
            ctx->pc = 0x1EBE80u;
            goto label_1ebe80;
        }
    }
    ctx->pc = 0x1EBE14u;
label_1ebe14:
    // 0x1ebe14: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebe14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ebe18:
    // 0x1ebe18: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1ebe18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ebe1c:
    // 0x1ebe1c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1ebe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_1ebe20:
    // 0x1ebe20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ebe20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ebe24:
    // 0x1ebe24: 0x0  nop
    ctx->pc = 0x1ebe24u;
    // NOP
label_1ebe28:
    // 0x1ebe28: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1ebe28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ebe2c:
    // 0x1ebe2c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1ebe2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ebe30:
    // 0x1ebe30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ebe30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ebe34:
    // 0x1ebe34: 0x0  nop
    ctx->pc = 0x1ebe34u;
    // NOP
label_1ebe38:
    // 0x1ebe38: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_1ebe3c:
    if (ctx->pc == 0x1EBE3Cu) {
        ctx->pc = 0x1EBE40u;
        goto label_1ebe40;
    }
    ctx->pc = 0x1EBE38u;
    {
        const bool branch_taken_0x1ebe38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebe38) {
            ctx->pc = 0x1EBE80u;
            goto label_1ebe80;
        }
    }
    ctx->pc = 0x1EBE40u;
label_1ebe40:
    // 0x1ebe40: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1ebe40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ebe44:
    // 0x1ebe44: 0xc4c10124  lwc1        $f1, 0x124($a2)
    ctx->pc = 0x1ebe44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ebe48:
    // 0x1ebe48: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1ebe48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_1ebe4c:
    // 0x1ebe4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ebe4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ebe50:
    // 0x1ebe50: 0x0  nop
    ctx->pc = 0x1ebe50u;
    // NOP
label_1ebe54:
    // 0x1ebe54: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1ebe54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1ebe58:
    // 0x1ebe58: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1ebe58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ebe5c:
    // 0x1ebe5c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ebe5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ebe60:
    // 0x1ebe60: 0x0  nop
    ctx->pc = 0x1ebe60u;
    // NOP
label_1ebe64:
    // 0x1ebe64: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1ebe68:
    if (ctx->pc == 0x1EBE68u) {
        ctx->pc = 0x1EBE6Cu;
        goto label_1ebe6c;
    }
    ctx->pc = 0x1EBE64u;
    {
        const bool branch_taken_0x1ebe64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebe64) {
            ctx->pc = 0x1EBE80u;
            goto label_1ebe80;
        }
    }
    ctx->pc = 0x1EBE6Cu;
label_1ebe6c:
    // 0x1ebe6c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ebe70:
    // 0x1ebe70: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ebe70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ebe74:
    // 0x1ebe74: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x1ebe74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_1ebe78:
    // 0x1ebe78: 0x34820001  ori         $v0, $a0, 0x1
    ctx->pc = 0x1ebe78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_1ebe7c:
    // 0x1ebe7c: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x1ebe7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
label_1ebe80:
    // 0x1ebe80: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ebe80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ebe84:
    // 0x1ebe84: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x1ebe84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
label_1ebe88:
    // 0x1ebe88: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ebe88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1ebe8c:
    // 0x1ebe8c: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x1ebe8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_1ebe90:
    // 0x1ebe90: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
label_1ebe94:
    if (ctx->pc == 0x1EBE94u) {
        ctx->pc = 0x1EBE98u;
        goto label_1ebe98;
    }
    ctx->pc = 0x1EBE90u;
    {
        const bool branch_taken_0x1ebe90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebe90) {
            ctx->pc = 0x1EC00Cu;
            goto label_1ec00c;
        }
    }
    ctx->pc = 0x1EBE98u;
label_1ebe98:
    // 0x1ebe98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ebe98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ebe9c:
    // 0x1ebe9c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ebe9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ebea0:
    // 0x1ebea0: 0xe4a00184  swc1        $f0, 0x184($a1)
    ctx->pc = 0x1ebea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 388), bits); }
label_1ebea4:
    // 0x1ebea4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1ebea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1ebea8:
    // 0x1ebea8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ebea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ebeac:
    // 0x1ebeac: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1ebeacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_1ebeb0:
    // 0x1ebeb0: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1ebeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ebeb4:
    // 0x1ebeb4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ebeb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ebeb8:
    // 0x1ebeb8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ebebc:
    // 0x1ebebc: 0x24531330  addiu       $s3, $v0, 0x1330
    ctx->pc = 0x1ebebcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ebec0:
    // 0x1ebec0: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x1ebec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
label_1ebec4:
    // 0x1ebec4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ebec8:
    // 0x1ebec8: 0x24521330  addiu       $s2, $v0, 0x1330
    ctx->pc = 0x1ebec8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ebecc:
    // 0x1ebecc: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x1ebeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_1ebed0:
    // 0x1ebed0: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1ebed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_1ebed4:
    // 0x1ebed4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1ebed8:
    if (ctx->pc == 0x1EBED8u) {
        ctx->pc = 0x1EBEDCu;
        goto label_1ebedc;
    }
    ctx->pc = 0x1EBED4u;
    {
        const bool branch_taken_0x1ebed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebed4) {
            ctx->pc = 0x1EBEFCu;
            goto label_1ebefc;
        }
    }
    ctx->pc = 0x1EBEDCu;
label_1ebedc:
    // 0x1ebedc: 0x3c0344af  lui         $v1, 0x44AF
    ctx->pc = 0x1ebedcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17583 << 16));
label_1ebee0:
    // 0x1ebee0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ebee0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ebee4:
    // 0x1ebee4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1ebee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_1ebee8:
    // 0x1ebee8: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1ebee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ebeec:
    // 0x1ebeec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ebeecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ebef0:
    // 0x1ebef0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ebef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ebef4:
    // 0x1ebef4: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1ebef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_1ebef8:
    // 0x1ebef8: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x1ebef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_1ebefc:
    // 0x1ebefc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ebefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ebf00:
    // 0x1ebf00: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1ebf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1ebf04:
    // 0x1ebf04: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x1ebf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ebf08:
    // 0x1ebf08: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x1ebf08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_1ebf0c:
    // 0x1ebf0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ebf0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ebf10:
    // 0x1ebf10: 0x0  nop
    ctx->pc = 0x1ebf10u;
    // NOP
label_1ebf14:
    // 0x1ebf14: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1ebf14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1ebf18:
    // 0x1ebf18: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ebf18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ebf1c:
    // 0x1ebf1c: 0xc4a00124  lwc1        $f0, 0x124($a1)
    ctx->pc = 0x1ebf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ebf20:
    // 0x1ebf20: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ebf20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ebf24:
    // 0x1ebf24: 0x0  nop
    ctx->pc = 0x1ebf24u;
    // NOP
label_1ebf28:
    // 0x1ebf28: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1ebf2c:
    if (ctx->pc == 0x1EBF2Cu) {
        ctx->pc = 0x1EBF30u;
        goto label_1ebf30;
    }
    ctx->pc = 0x1EBF28u;
    {
        const bool branch_taken_0x1ebf28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebf28) {
            ctx->pc = 0x1EBF40u;
            goto label_1ebf40;
        }
    }
    ctx->pc = 0x1EBF30u;
label_1ebf30:
    // 0x1ebf30: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1ebf30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1ebf34:
    // 0x1ebf34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ebf34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ebf38:
    // 0x1ebf38: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ebf3c:
    // 0x1ebf3c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x1ebf3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_1ebf40:
    // 0x1ebf40: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ebf44:
    // 0x1ebf44: 0x24461330  addiu       $a2, $v0, 0x1330
    ctx->pc = 0x1ebf44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ebf48:
    // 0x1ebf48: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x1ebf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ebf4c:
    // 0x1ebf4c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1ebf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_1ebf50:
    // 0x1ebf50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ebf50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ebf54:
    // 0x1ebf54: 0x0  nop
    ctx->pc = 0x1ebf54u;
    // NOP
label_1ebf58:
    // 0x1ebf58: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1ebf58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ebf5c:
    // 0x1ebf5c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ebf60:
    // 0x1ebf60: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1ebf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ebf64:
    // 0x1ebf64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ebf64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ebf68:
    // 0x1ebf68: 0x0  nop
    ctx->pc = 0x1ebf68u;
    // NOP
label_1ebf6c:
    // 0x1ebf6c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1ebf70:
    if (ctx->pc == 0x1EBF70u) {
        ctx->pc = 0x1EBF74u;
        goto label_1ebf74;
    }
    ctx->pc = 0x1EBF6Cu;
    {
        const bool branch_taken_0x1ebf6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebf6c) {
            ctx->pc = 0x1EBF84u;
            goto label_1ebf84;
        }
    }
    ctx->pc = 0x1EBF74u;
label_1ebf74:
    // 0x1ebf74: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x1ebf74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
label_1ebf78:
    // 0x1ebf78: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1ebf78u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ebf7c:
    // 0x1ebf7c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ebf80:
    // 0x1ebf80: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x1ebf80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_1ebf84:
    // 0x1ebf84: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ebf88:
    // 0x1ebf88: 0x24481330  addiu       $t0, $v0, 0x1330
    ctx->pc = 0x1ebf88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ebf8c:
    // 0x1ebf8c: 0xc5010010  lwc1        $f1, 0x10($t0)
    ctx->pc = 0x1ebf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ebf90:
    // 0x1ebf90: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1ebf90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_1ebf94:
    // 0x1ebf94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ebf94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ebf98:
    // 0x1ebf98: 0x0  nop
    ctx->pc = 0x1ebf98u;
    // NOP
label_1ebf9c:
    // 0x1ebf9c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1ebf9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1ebfa0:
    // 0x1ebfa0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ebfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ebfa4:
    // 0x1ebfa4: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1ebfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ebfa8:
    // 0x1ebfa8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ebfa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ebfac:
    // 0x1ebfac: 0x0  nop
    ctx->pc = 0x1ebfacu;
    // NOP
label_1ebfb0:
    // 0x1ebfb0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1ebfb4:
    if (ctx->pc == 0x1EBFB4u) {
        ctx->pc = 0x1EBFB8u;
        goto label_1ebfb8;
    }
    ctx->pc = 0x1EBFB0u;
    {
        const bool branch_taken_0x1ebfb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebfb0) {
            ctx->pc = 0x1EBFC8u;
            goto label_1ebfc8;
        }
    }
    ctx->pc = 0x1EBFB8u;
label_1ebfb8:
    // 0x1ebfb8: 0x3c02c100  lui         $v0, 0xC100
    ctx->pc = 0x1ebfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
label_1ebfbc:
    // 0x1ebfbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ebfbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ebfc0:
    // 0x1ebfc0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ebfc4:
    // 0x1ebfc4: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x1ebfc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_1ebfc8:
    // 0x1ebfc8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ebfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ebfcc:
    // 0x1ebfcc: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x1ebfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_1ebfd0:
    // 0x1ebfd0: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x1ebfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ebfd4:
    // 0x1ebfd4: 0x3c05442f  lui         $a1, 0x442F
    ctx->pc = 0x1ebfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17455 << 16));
label_1ebfd8:
    // 0x1ebfd8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1ebfd8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ebfdc:
    // 0x1ebfdc: 0x0  nop
    ctx->pc = 0x1ebfdcu;
    // NOP
label_1ebfe0:
    // 0x1ebfe0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1ebfe0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ebfe4:
    // 0x1ebfe4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ebfe8:
    // 0x1ebfe8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1ebfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ebfec:
    // 0x1ebfec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ebfecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ebff0:
    // 0x1ebff0: 0x0  nop
    ctx->pc = 0x1ebff0u;
    // NOP
label_1ebff4:
    // 0x1ebff4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1ebff8:
    if (ctx->pc == 0x1EBFF8u) {
        ctx->pc = 0x1EBFFCu;
        goto label_1ebffc;
    }
    ctx->pc = 0x1EBFF4u;
    {
        const bool branch_taken_0x1ebff4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebff4) {
            ctx->pc = 0x1EC00Cu;
            goto label_1ec00c;
        }
    }
    ctx->pc = 0x1EBFFCu;
label_1ebffc:
    // 0x1ebffc: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1ebffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_1ec000:
    // 0x1ec000: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ec004:
    // 0x1ec004: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec008:
    // 0x1ec008: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x1ec008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_1ec00c:
    // 0x1ec00c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec010:
    // 0x1ec010: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec014:
    // 0x1ec014: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1ec014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1ec018:
    // 0x1ec018: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1ec018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_1ec01c:
    // 0x1ec01c: 0x1440008b  bnez        $v0, . + 4 + (0x8B << 2)
label_1ec020:
    if (ctx->pc == 0x1EC020u) {
        ctx->pc = 0x1EC024u;
        goto label_1ec024;
    }
    ctx->pc = 0x1EC01Cu;
    {
        const bool branch_taken_0x1ec01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec01c) {
            ctx->pc = 0x1EC24Cu;
            goto label_1ec24c;
        }
    }
    ctx->pc = 0x1EC024u;
label_1ec024:
    // 0x1ec024: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec028:
    // 0x1ec028: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec02c:
    // 0x1ec02c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1ec02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ec030:
    // 0x1ec030: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec034:
    // 0x1ec034: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x1ec034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec038:
    // 0x1ec038: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ec038u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ec03c:
    // 0x1ec03c: 0x0  nop
    ctx->pc = 0x1ec03cu;
    // NOP
label_1ec040:
    // 0x1ec040: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
label_1ec044:
    if (ctx->pc == 0x1EC044u) {
        ctx->pc = 0x1EC048u;
        goto label_1ec048;
    }
    ctx->pc = 0x1EC040u;
    {
        const bool branch_taken_0x1ec040 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec040) {
            ctx->pc = 0x1EC138u;
            goto label_1ec138;
        }
    }
    ctx->pc = 0x1EC048u;
label_1ec048:
    // 0x1ec048: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec04c:
    // 0x1ec04c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec050:
    // 0x1ec050: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1ec050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ec054:
    // 0x1ec054: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec058:
    // 0x1ec058: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x1ec058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec05c:
    // 0x1ec05c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ec05cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ec060:
    // 0x1ec060: 0x0  nop
    ctx->pc = 0x1ec060u;
    // NOP
label_1ec064:
    // 0x1ec064: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_1ec068:
    if (ctx->pc == 0x1EC068u) {
        ctx->pc = 0x1EC06Cu;
        goto label_1ec06c;
    }
    ctx->pc = 0x1EC064u;
    {
        const bool branch_taken_0x1ec064 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec064) {
            ctx->pc = 0x1EC0C0u;
            goto label_1ec0c0;
        }
    }
    ctx->pc = 0x1EC06Cu;
label_1ec06c:
    // 0x1ec06c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec070:
    // 0x1ec070: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec074:
    // 0x1ec074: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x1ec074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ec078:
    // 0x1ec078: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec07c:
    // 0x1ec07c: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x1ec07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec080:
    // 0x1ec080: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ec080u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1ec084:
    // 0x1ec084: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1ec084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_1ec088:
    // 0x1ec088: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec08c:
    // 0x1ec08c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec090:
    // 0x1ec090: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1ec090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ec094:
    // 0x1ec094: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec098:
    // 0x1ec098: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x1ec098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec09c:
    // 0x1ec09c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ec09cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ec0a0:
    // 0x1ec0a0: 0x0  nop
    ctx->pc = 0x1ec0a0u;
    // NOP
label_1ec0a4:
    // 0x1ec0a4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1ec0a8:
    if (ctx->pc == 0x1EC0A8u) {
        ctx->pc = 0x1EC0ACu;
        goto label_1ec0ac;
    }
    ctx->pc = 0x1EC0A4u;
    {
        const bool branch_taken_0x1ec0a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec0a4) {
            ctx->pc = 0x1EC0C0u;
            goto label_1ec0c0;
        }
    }
    ctx->pc = 0x1EC0ACu;
label_1ec0ac:
    // 0x1ec0ac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec0b0:
    // 0x1ec0b0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec0b4:
    // 0x1ec0b4: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1ec0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec0b8:
    // 0x1ec0b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec0bc:
    // 0x1ec0bc: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1ec0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_1ec0c0:
    // 0x1ec0c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec0c4:
    // 0x1ec0c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec0c8:
    // 0x1ec0c8: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1ec0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ec0cc:
    // 0x1ec0cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec0d0:
    // 0x1ec0d0: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x1ec0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec0d4:
    // 0x1ec0d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ec0d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ec0d8:
    // 0x1ec0d8: 0x0  nop
    ctx->pc = 0x1ec0d8u;
    // NOP
label_1ec0dc:
    // 0x1ec0dc: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_1ec0e0:
    if (ctx->pc == 0x1EC0E0u) {
        ctx->pc = 0x1EC0E4u;
        goto label_1ec0e4;
    }
    ctx->pc = 0x1EC0DCu;
    {
        const bool branch_taken_0x1ec0dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec0dc) {
            ctx->pc = 0x1EC138u;
            goto label_1ec138;
        }
    }
    ctx->pc = 0x1EC0E4u;
label_1ec0e4:
    // 0x1ec0e4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec0e8:
    // 0x1ec0e8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec0ec:
    // 0x1ec0ec: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x1ec0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ec0f0:
    // 0x1ec0f0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec0f4:
    // 0x1ec0f4: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x1ec0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec0f8:
    // 0x1ec0f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ec0f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1ec0fc:
    // 0x1ec0fc: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1ec0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_1ec100:
    // 0x1ec100: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec104:
    // 0x1ec104: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec108:
    // 0x1ec108: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1ec108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ec10c:
    // 0x1ec10c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec110:
    // 0x1ec110: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x1ec110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec114:
    // 0x1ec114: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ec114u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ec118:
    // 0x1ec118: 0x0  nop
    ctx->pc = 0x1ec118u;
    // NOP
label_1ec11c:
    // 0x1ec11c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1ec120:
    if (ctx->pc == 0x1EC120u) {
        ctx->pc = 0x1EC124u;
        goto label_1ec124;
    }
    ctx->pc = 0x1EC11Cu;
    {
        const bool branch_taken_0x1ec11c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec11c) {
            ctx->pc = 0x1EC138u;
            goto label_1ec138;
        }
    }
    ctx->pc = 0x1EC124u;
label_1ec124:
    // 0x1ec124: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec128:
    // 0x1ec128: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec12c:
    // 0x1ec12c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1ec12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec130:
    // 0x1ec130: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec134:
    // 0x1ec134: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1ec134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_1ec138:
    // 0x1ec138: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec13c:
    // 0x1ec13c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec140:
    // 0x1ec140: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1ec140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ec144:
    // 0x1ec144: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec148:
    // 0x1ec148: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x1ec148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec14c:
    // 0x1ec14c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ec14cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ec150:
    // 0x1ec150: 0x0  nop
    ctx->pc = 0x1ec150u;
    // NOP
label_1ec154:
    // 0x1ec154: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
label_1ec158:
    if (ctx->pc == 0x1EC158u) {
        ctx->pc = 0x1EC15Cu;
        goto label_1ec15c;
    }
    ctx->pc = 0x1EC154u;
    {
        const bool branch_taken_0x1ec154 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec154) {
            ctx->pc = 0x1EC24Cu;
            goto label_1ec24c;
        }
    }
    ctx->pc = 0x1EC15Cu;
label_1ec15c:
    // 0x1ec15c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec160:
    // 0x1ec160: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec164:
    // 0x1ec164: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1ec164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ec168:
    // 0x1ec168: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec16c:
    // 0x1ec16c: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x1ec16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec170:
    // 0x1ec170: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ec170u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ec174:
    // 0x1ec174: 0x0  nop
    ctx->pc = 0x1ec174u;
    // NOP
label_1ec178:
    // 0x1ec178: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_1ec17c:
    if (ctx->pc == 0x1EC17Cu) {
        ctx->pc = 0x1EC180u;
        goto label_1ec180;
    }
    ctx->pc = 0x1EC178u;
    {
        const bool branch_taken_0x1ec178 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec178) {
            ctx->pc = 0x1EC1D4u;
            goto label_1ec1d4;
        }
    }
    ctx->pc = 0x1EC180u;
label_1ec180:
    // 0x1ec180: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec184:
    // 0x1ec184: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec188:
    // 0x1ec188: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x1ec188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ec18c:
    // 0x1ec18c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec190:
    // 0x1ec190: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x1ec190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec194:
    // 0x1ec194: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ec194u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1ec198:
    // 0x1ec198: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x1ec198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_1ec19c:
    // 0x1ec19c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec1a0:
    // 0x1ec1a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec1a4:
    // 0x1ec1a4: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1ec1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ec1a8:
    // 0x1ec1a8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec1ac:
    // 0x1ec1ac: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x1ec1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec1b0:
    // 0x1ec1b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ec1b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ec1b4:
    // 0x1ec1b4: 0x0  nop
    ctx->pc = 0x1ec1b4u;
    // NOP
label_1ec1b8:
    // 0x1ec1b8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1ec1bc:
    if (ctx->pc == 0x1EC1BCu) {
        ctx->pc = 0x1EC1C0u;
        goto label_1ec1c0;
    }
    ctx->pc = 0x1EC1B8u;
    {
        const bool branch_taken_0x1ec1b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec1b8) {
            ctx->pc = 0x1EC1D4u;
            goto label_1ec1d4;
        }
    }
    ctx->pc = 0x1EC1C0u;
label_1ec1c0:
    // 0x1ec1c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec1c4:
    // 0x1ec1c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec1c8:
    // 0x1ec1c8: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1ec1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec1cc:
    // 0x1ec1cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec1d0:
    // 0x1ec1d0: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x1ec1d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_1ec1d4:
    // 0x1ec1d4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec1d8:
    // 0x1ec1d8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec1dc:
    // 0x1ec1dc: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1ec1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ec1e0:
    // 0x1ec1e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec1e4:
    // 0x1ec1e4: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x1ec1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec1e8:
    // 0x1ec1e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ec1e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ec1ec:
    // 0x1ec1ec: 0x0  nop
    ctx->pc = 0x1ec1ecu;
    // NOP
label_1ec1f0:
    // 0x1ec1f0: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_1ec1f4:
    if (ctx->pc == 0x1EC1F4u) {
        ctx->pc = 0x1EC1F8u;
        goto label_1ec1f8;
    }
    ctx->pc = 0x1EC1F0u;
    {
        const bool branch_taken_0x1ec1f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec1f0) {
            ctx->pc = 0x1EC24Cu;
            goto label_1ec24c;
        }
    }
    ctx->pc = 0x1EC1F8u;
label_1ec1f8:
    // 0x1ec1f8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec1fc:
    // 0x1ec1fc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec200:
    // 0x1ec200: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x1ec200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ec204:
    // 0x1ec204: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec208:
    // 0x1ec208: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x1ec208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec20c:
    // 0x1ec20c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ec20cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1ec210:
    // 0x1ec210: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x1ec210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_1ec214:
    // 0x1ec214: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec218:
    // 0x1ec218: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec21c:
    // 0x1ec21c: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1ec21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ec220:
    // 0x1ec220: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec224:
    // 0x1ec224: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x1ec224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec228:
    // 0x1ec228: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ec228u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ec22c:
    // 0x1ec22c: 0x0  nop
    ctx->pc = 0x1ec22cu;
    // NOP
label_1ec230:
    // 0x1ec230: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1ec234:
    if (ctx->pc == 0x1EC234u) {
        ctx->pc = 0x1EC238u;
        goto label_1ec238;
    }
    ctx->pc = 0x1EC230u;
    {
        const bool branch_taken_0x1ec230 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec230) {
            ctx->pc = 0x1EC24Cu;
            goto label_1ec24c;
        }
    }
    ctx->pc = 0x1EC238u;
label_1ec238:
    // 0x1ec238: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec23c:
    // 0x1ec23c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec240:
    // 0x1ec240: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1ec240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec244:
    // 0x1ec244: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec248:
    // 0x1ec248: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x1ec248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_1ec24c:
    // 0x1ec24c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec250:
    // 0x1ec250: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec254:
    // 0x1ec254: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x1ec254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ec258:
    // 0x1ec258: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec25c:
    // 0x1ec25c: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x1ec25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec260:
    // 0x1ec260: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ec260u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ec264:
    // 0x1ec264: 0x0  nop
    ctx->pc = 0x1ec264u;
    // NOP
label_1ec268:
    // 0x1ec268: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
label_1ec26c:
    if (ctx->pc == 0x1EC26Cu) {
        ctx->pc = 0x1EC270u;
        goto label_1ec270;
    }
    ctx->pc = 0x1EC268u;
    {
        const bool branch_taken_0x1ec268 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec268) {
            ctx->pc = 0x1EC360u;
            goto label_1ec360;
        }
    }
    ctx->pc = 0x1EC270u;
label_1ec270:
    // 0x1ec270: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec274:
    // 0x1ec274: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec278:
    // 0x1ec278: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x1ec278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ec27c:
    // 0x1ec27c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec280:
    // 0x1ec280: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x1ec280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec284:
    // 0x1ec284: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ec284u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ec288:
    // 0x1ec288: 0x0  nop
    ctx->pc = 0x1ec288u;
    // NOP
label_1ec28c:
    // 0x1ec28c: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_1ec290:
    if (ctx->pc == 0x1EC290u) {
        ctx->pc = 0x1EC294u;
        goto label_1ec294;
    }
    ctx->pc = 0x1EC28Cu;
    {
        const bool branch_taken_0x1ec28c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec28c) {
            ctx->pc = 0x1EC2E8u;
            goto label_1ec2e8;
        }
    }
    ctx->pc = 0x1EC294u;
label_1ec294:
    // 0x1ec294: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec298:
    // 0x1ec298: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec29c:
    // 0x1ec29c: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x1ec29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ec2a0:
    // 0x1ec2a0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec2a4:
    // 0x1ec2a4: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x1ec2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec2a8:
    // 0x1ec2a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ec2a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1ec2ac:
    // 0x1ec2ac: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x1ec2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_1ec2b0:
    // 0x1ec2b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec2b4:
    // 0x1ec2b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec2b8:
    // 0x1ec2b8: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x1ec2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ec2bc:
    // 0x1ec2bc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec2c0:
    // 0x1ec2c0: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x1ec2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec2c4:
    // 0x1ec2c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ec2c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ec2c8:
    // 0x1ec2c8: 0x0  nop
    ctx->pc = 0x1ec2c8u;
    // NOP
label_1ec2cc:
    // 0x1ec2cc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1ec2d0:
    if (ctx->pc == 0x1EC2D0u) {
        ctx->pc = 0x1EC2D4u;
        goto label_1ec2d4;
    }
    ctx->pc = 0x1EC2CCu;
    {
        const bool branch_taken_0x1ec2cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec2cc) {
            ctx->pc = 0x1EC2E8u;
            goto label_1ec2e8;
        }
    }
    ctx->pc = 0x1EC2D4u;
label_1ec2d4:
    // 0x1ec2d4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec2d8:
    // 0x1ec2d8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec2dc:
    // 0x1ec2dc: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1ec2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec2e0:
    // 0x1ec2e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec2e4:
    // 0x1ec2e4: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x1ec2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_1ec2e8:
    // 0x1ec2e8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec2ec:
    // 0x1ec2ec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec2f0:
    // 0x1ec2f0: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x1ec2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ec2f4:
    // 0x1ec2f4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec2f8:
    // 0x1ec2f8: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x1ec2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec2fc:
    // 0x1ec2fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ec2fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ec300:
    // 0x1ec300: 0x0  nop
    ctx->pc = 0x1ec300u;
    // NOP
label_1ec304:
    // 0x1ec304: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_1ec308:
    if (ctx->pc == 0x1EC308u) {
        ctx->pc = 0x1EC30Cu;
        goto label_1ec30c;
    }
    ctx->pc = 0x1EC304u;
    {
        const bool branch_taken_0x1ec304 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec304) {
            ctx->pc = 0x1EC360u;
            goto label_1ec360;
        }
    }
    ctx->pc = 0x1EC30Cu;
label_1ec30c:
    // 0x1ec30c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec310:
    // 0x1ec310: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec314:
    // 0x1ec314: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x1ec314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ec318:
    // 0x1ec318: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec31c:
    // 0x1ec31c: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x1ec31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec320:
    // 0x1ec320: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ec320u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1ec324:
    // 0x1ec324: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x1ec324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_1ec328:
    // 0x1ec328: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec32c:
    // 0x1ec32c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec330:
    // 0x1ec330: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x1ec330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ec334:
    // 0x1ec334: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec338:
    // 0x1ec338: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x1ec338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec33c:
    // 0x1ec33c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ec33cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ec340:
    // 0x1ec340: 0x0  nop
    ctx->pc = 0x1ec340u;
    // NOP
label_1ec344:
    // 0x1ec344: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1ec348:
    if (ctx->pc == 0x1EC348u) {
        ctx->pc = 0x1EC34Cu;
        goto label_1ec34c;
    }
    ctx->pc = 0x1EC344u;
    {
        const bool branch_taken_0x1ec344 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec344) {
            ctx->pc = 0x1EC360u;
            goto label_1ec360;
        }
    }
    ctx->pc = 0x1EC34Cu;
label_1ec34c:
    // 0x1ec34c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec350:
    // 0x1ec350: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec354:
    // 0x1ec354: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1ec354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec358:
    // 0x1ec358: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec35c:
    // 0x1ec35c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x1ec35cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_1ec360:
    // 0x1ec360: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec364:
    // 0x1ec364: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec368:
    // 0x1ec368: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x1ec368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ec36c:
    // 0x1ec36c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec370:
    // 0x1ec370: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec374:
    // 0x1ec374: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1ec374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec378:
    // 0x1ec378: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1ec378u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ec37c:
    // 0x1ec37c: 0x0  nop
    ctx->pc = 0x1ec37cu;
    // NOP
label_1ec380:
    // 0x1ec380: 0x45010045  bc1t        . + 4 + (0x45 << 2)
label_1ec384:
    if (ctx->pc == 0x1EC384u) {
        ctx->pc = 0x1EC388u;
        goto label_1ec388;
    }
    ctx->pc = 0x1EC380u;
    {
        const bool branch_taken_0x1ec380 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec380) {
            ctx->pc = 0x1EC498u;
            goto label_1ec498;
        }
    }
    ctx->pc = 0x1EC388u;
label_1ec388:
    // 0x1ec388: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec38c:
    // 0x1ec38c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec390:
    // 0x1ec390: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1ec390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ec394:
    // 0x1ec394: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec398:
    // 0x1ec398: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec39c:
    // 0x1ec39c: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x1ec39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec3a0:
    // 0x1ec3a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ec3a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ec3a4:
    // 0x1ec3a4: 0x0  nop
    ctx->pc = 0x1ec3a4u;
    // NOP
label_1ec3a8:
    // 0x1ec3a8: 0x45010019  bc1t        . + 4 + (0x19 << 2)
label_1ec3ac:
    if (ctx->pc == 0x1EC3ACu) {
        ctx->pc = 0x1EC3B0u;
        goto label_1ec3b0;
    }
    ctx->pc = 0x1EC3A8u;
    {
        const bool branch_taken_0x1ec3a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec3a8) {
            ctx->pc = 0x1EC410u;
            goto label_1ec410;
        }
    }
    ctx->pc = 0x1EC3B0u;
label_1ec3b0:
    // 0x1ec3b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec3b4:
    // 0x1ec3b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec3b8:
    // 0x1ec3b8: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x1ec3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ec3bc:
    // 0x1ec3bc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec3c0:
    // 0x1ec3c0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec3c4:
    // 0x1ec3c4: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x1ec3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec3c8:
    // 0x1ec3c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ec3c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1ec3cc:
    // 0x1ec3cc: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x1ec3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_1ec3d0:
    // 0x1ec3d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec3d4:
    // 0x1ec3d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec3d8:
    // 0x1ec3d8: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1ec3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ec3dc:
    // 0x1ec3dc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec3e0:
    // 0x1ec3e0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec3e4:
    // 0x1ec3e4: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x1ec3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec3e8:
    // 0x1ec3e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ec3e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ec3ec:
    // 0x1ec3ec: 0x0  nop
    ctx->pc = 0x1ec3ecu;
    // NOP
label_1ec3f0:
    // 0x1ec3f0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1ec3f4:
    if (ctx->pc == 0x1EC3F4u) {
        ctx->pc = 0x1EC3F8u;
        goto label_1ec3f8;
    }
    ctx->pc = 0x1EC3F0u;
    {
        const bool branch_taken_0x1ec3f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec3f0) {
            ctx->pc = 0x1EC410u;
            goto label_1ec410;
        }
    }
    ctx->pc = 0x1EC3F8u;
label_1ec3f8:
    // 0x1ec3f8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec3fc:
    // 0x1ec3fc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec400:
    // 0x1ec400: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1ec400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec404:
    // 0x1ec404: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec408:
    // 0x1ec408: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec40c:
    // 0x1ec40c: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x1ec40cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_1ec410:
    // 0x1ec410: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec414:
    // 0x1ec414: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec418:
    // 0x1ec418: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1ec418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ec41c:
    // 0x1ec41c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec420:
    // 0x1ec420: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec424:
    // 0x1ec424: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x1ec424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec428:
    // 0x1ec428: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ec428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ec42c:
    // 0x1ec42c: 0x0  nop
    ctx->pc = 0x1ec42cu;
    // NOP
label_1ec430:
    // 0x1ec430: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_1ec434:
    if (ctx->pc == 0x1EC434u) {
        ctx->pc = 0x1EC438u;
        goto label_1ec438;
    }
    ctx->pc = 0x1EC430u;
    {
        const bool branch_taken_0x1ec430 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec430) {
            ctx->pc = 0x1EC498u;
            goto label_1ec498;
        }
    }
    ctx->pc = 0x1EC438u;
label_1ec438:
    // 0x1ec438: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec43c:
    // 0x1ec43c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec440:
    // 0x1ec440: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x1ec440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ec444:
    // 0x1ec444: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec448:
    // 0x1ec448: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec44c:
    // 0x1ec44c: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x1ec44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec450:
    // 0x1ec450: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ec450u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1ec454:
    // 0x1ec454: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x1ec454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_1ec458:
    // 0x1ec458: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec45c:
    // 0x1ec45c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec460:
    // 0x1ec460: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1ec460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ec464:
    // 0x1ec464: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec468:
    // 0x1ec468: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec46c:
    // 0x1ec46c: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x1ec46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec470:
    // 0x1ec470: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ec470u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ec474:
    // 0x1ec474: 0x0  nop
    ctx->pc = 0x1ec474u;
    // NOP
label_1ec478:
    // 0x1ec478: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1ec47c:
    if (ctx->pc == 0x1EC47Cu) {
        ctx->pc = 0x1EC480u;
        goto label_1ec480;
    }
    ctx->pc = 0x1EC478u;
    {
        const bool branch_taken_0x1ec478 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec478) {
            ctx->pc = 0x1EC498u;
            goto label_1ec498;
        }
    }
    ctx->pc = 0x1EC480u;
label_1ec480:
    // 0x1ec480: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec484:
    // 0x1ec484: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec488:
    // 0x1ec488: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1ec488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec48c:
    // 0x1ec48c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec490:
    // 0x1ec490: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec494:
    // 0x1ec494: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x1ec494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_1ec498:
    // 0x1ec498: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ec498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec49c:
    // 0x1ec49c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec4a0:
    // 0x1ec4a0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1ec4a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1ec4a4:
    // 0x1ec4a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ec4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ec4a8:
    // 0x1ec4a8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ec4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ec4ac:
    // 0x1ec4ac: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ec4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1ec4b0:
    // 0x1ec4b0: 0x24429df0  addiu       $v0, $v0, -0x6210
    ctx->pc = 0x1ec4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942192));
label_1ec4b4:
    // 0x1ec4b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ec4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ec4b8:
    // 0x1ec4b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ec4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ec4bc:
    // 0x1ec4bc: 0x40f809  jalr        $v0
label_1ec4c0:
    if (ctx->pc == 0x1EC4C0u) {
        ctx->pc = 0x1EC4C4u;
        goto label_1ec4c4;
    }
    ctx->pc = 0x1EC4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EC4C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC4BCu, 0x1EC4C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EC4C4u;
label_1ec4c4:
    // 0x1ec4c4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ec4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec4c8:
    // 0x1ec4c8: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x1ec4c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec4cc:
    // 0x1ec4cc: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1ec4ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1ec4d0:
    // 0x1ec4d0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1ec4d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ec4d4:
    // 0x1ec4d4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1ec4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1ec4d8:
    // 0x1ec4d8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ec4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1ec4dc:
    // 0x1ec4dc: 0x24429e50  addiu       $v0, $v0, -0x61B0
    ctx->pc = 0x1ec4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942288));
label_1ec4e0:
    // 0x1ec4e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ec4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ec4e4:
    // 0x1ec4e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ec4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ec4e8:
    // 0x1ec4e8: 0x40f809  jalr        $v0
label_1ec4ec:
    if (ctx->pc == 0x1EC4ECu) {
        ctx->pc = 0x1EC4F0u;
        goto label_1ec4f0;
    }
    ctx->pc = 0x1EC4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EC4F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC4E8u, 0x1EC4F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EC4F0u;
label_1ec4f0:
    // 0x1ec4f0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec4f4:
    // 0x1ec4f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec4f8:
    // 0x1ec4f8: 0x8442005c  lh          $v0, 0x5C($v0)
    ctx->pc = 0x1ec4f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 92)));
label_1ec4fc:
    // 0x1ec4fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ec500:
    if (ctx->pc == 0x1EC500u) {
        ctx->pc = 0x1EC504u;
        goto label_1ec504;
    }
    ctx->pc = 0x1EC4FCu;
    {
        const bool branch_taken_0x1ec4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec4fc) {
            ctx->pc = 0x1EC518u;
            goto label_1ec518;
        }
    }
    ctx->pc = 0x1EC504u;
label_1ec504:
    // 0x1ec504: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ec504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec508:
    // 0x1ec508: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1ec508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_1ec50c:
    // 0x1ec50c: 0x8462005c  lh          $v0, 0x5C($v1)
    ctx->pc = 0x1ec50cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
label_1ec510:
    // 0x1ec510: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ec510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ec514:
    // 0x1ec514: 0xa462005c  sh          $v0, 0x5C($v1)
    ctx->pc = 0x1ec514u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 2));
label_1ec518:
    // 0x1ec518: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec51c:
    // 0x1ec51c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec520:
    // 0x1ec520: 0x944200aa  lhu         $v0, 0xAA($v0)
    ctx->pc = 0x1ec520u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 170)));
label_1ec524:
    // 0x1ec524: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1ec524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1ec528:
    // 0x1ec528: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x1ec528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_1ec52c:
    // 0x1ec52c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1ec530:
    if (ctx->pc == 0x1EC530u) {
        ctx->pc = 0x1EC534u;
        goto label_1ec534;
    }
    ctx->pc = 0x1EC52Cu;
    {
        const bool branch_taken_0x1ec52c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec52c) {
            ctx->pc = 0x1EC55Cu;
            goto label_1ec55c;
        }
    }
    ctx->pc = 0x1EC534u;
label_1ec534:
    // 0x1ec534: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec538:
    // 0x1ec538: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec53c:
    // 0x1ec53c: 0x8442005c  lh          $v0, 0x5C($v0)
    ctx->pc = 0x1ec53cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 92)));
label_1ec540:
    // 0x1ec540: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ec544:
    if (ctx->pc == 0x1EC544u) {
        ctx->pc = 0x1EC548u;
        goto label_1ec548;
    }
    ctx->pc = 0x1EC540u;
    {
        const bool branch_taken_0x1ec540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec540) {
            ctx->pc = 0x1EC55Cu;
            goto label_1ec55c;
        }
    }
    ctx->pc = 0x1EC548u;
label_1ec548:
    // 0x1ec548: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec54c:
    // 0x1ec54c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1ec54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec550:
    // 0x1ec550: 0x8482005c  lh          $v0, 0x5C($a0)
    ctx->pc = 0x1ec550u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 92)));
label_1ec554:
    // 0x1ec554: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1ec554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ec558:
    // 0x1ec558: 0xa483005c  sh          $v1, 0x5C($a0)
    ctx->pc = 0x1ec558u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 92), (uint16_t)GPR_U32(ctx, 3));
label_1ec55c:
    // 0x1ec55c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec560:
    // 0x1ec560: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1ec560u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_1ec564:
    // 0x1ec564: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1ec564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1ec568:
    // 0x1ec568: 0x30420700  andi        $v0, $v0, 0x700
    ctx->pc = 0x1ec568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1792);
label_1ec56c:
    // 0x1ec56c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1ec570:
    if (ctx->pc == 0x1EC570u) {
        ctx->pc = 0x1EC574u;
        goto label_1ec574;
    }
    ctx->pc = 0x1EC56Cu;
    {
        const bool branch_taken_0x1ec56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec56c) {
            ctx->pc = 0x1EC59Cu;
            goto label_1ec59c;
        }
    }
    ctx->pc = 0x1EC574u;
label_1ec574:
    // 0x1ec574: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec578:
    // 0x1ec578: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec57c:
    // 0x1ec57c: 0x84440076  lh          $a0, 0x76($v0)
    ctx->pc = 0x1ec57cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 118)));
label_1ec580:
    // 0x1ec580: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1ec584:
    if (ctx->pc == 0x1EC584u) {
        ctx->pc = 0x1EC588u;
        goto label_1ec588;
    }
    ctx->pc = 0x1EC580u;
    {
        const bool branch_taken_0x1ec580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec580) {
            ctx->pc = 0x1EC59Cu;
            goto label_1ec59c;
        }
    }
    ctx->pc = 0x1EC588u;
label_1ec588:
    // 0x1ec588: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec58c:
    // 0x1ec58c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ec58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec590:
    // 0x1ec590: 0x84620076  lh          $v0, 0x76($v1)
    ctx->pc = 0x1ec590u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 118)));
label_1ec594:
    // 0x1ec594: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ec594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ec598:
    // 0x1ec598: 0xa4620076  sh          $v0, 0x76($v1)
    ctx->pc = 0x1ec598u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 118), (uint16_t)GPR_U32(ctx, 2));
label_1ec59c:
    // 0x1ec59c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec5a0:
    // 0x1ec5a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec5a4:
    // 0x1ec5a4: 0x84420078  lh          $v0, 0x78($v0)
    ctx->pc = 0x1ec5a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_1ec5a8:
    // 0x1ec5a8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1ec5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_1ec5ac:
    // 0x1ec5ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ec5acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1ec5b0:
    // 0x1ec5b0: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x1ec5b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_1ec5b4:
    // 0x1ec5b4: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_1ec5b8:
    if (ctx->pc == 0x1EC5B8u) {
        ctx->pc = 0x1EC5BCu;
        goto label_1ec5bc;
    }
    ctx->pc = 0x1EC5B4u;
    {
        const bool branch_taken_0x1ec5b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec5b4) {
            ctx->pc = 0x1EC604u;
            goto label_1ec604;
        }
    }
    ctx->pc = 0x1EC5BCu;
label_1ec5bc:
    // 0x1ec5bc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec5c0:
    // 0x1ec5c0: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1ec5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec5c4:
    // 0x1ec5c4: 0x84850078  lh          $a1, 0x78($a0)
    ctx->pc = 0x1ec5c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 120)));
label_1ec5c8:
    // 0x1ec5c8: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1ec5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1ec5cc:
    // 0x1ec5cc: 0xa4820078  sh          $v0, 0x78($a0)
    ctx->pc = 0x1ec5ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 120), (uint16_t)GPR_U32(ctx, 2));
label_1ec5d0:
    // 0x1ec5d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec5d4:
    // 0x1ec5d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec5d8:
    // 0x1ec5d8: 0x84420078  lh          $v0, 0x78($v0)
    ctx->pc = 0x1ec5d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_1ec5dc:
    // 0x1ec5dc: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x1ec5dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
label_1ec5e0:
    // 0x1ec5e0: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1ec5e0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_1ec5e4:
    // 0x1ec5e4: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x1ec5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
label_1ec5e8:
    // 0x1ec5e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ec5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1ec5ec:
    // 0x1ec5ec: 0x24030a08  addiu       $v1, $zero, 0xA08
    ctx->pc = 0x1ec5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2568));
label_1ec5f0:
    // 0x1ec5f0: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x1ec5f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1ec5f4:
    // 0x1ec5f4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1ec5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_1ec5f8:
    // 0x1ec5f8: 0x24450ca0  addiu       $a1, $v0, 0xCA0
    ctx->pc = 0x1ec5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3232));
label_1ec5fc:
    // 0x1ec5fc: 0xc059b14  jal         func_166C50
label_1ec600:
    if (ctx->pc == 0x1EC600u) {
        ctx->pc = 0x1EC604u;
        goto label_1ec604;
    }
    ctx->pc = 0x1EC5FCu;
    SET_GPR_U32(ctx, 31, 0x1EC604u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1EC5FCu, 0x1EC604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC604u;
label_1ec604:
    // 0x1ec604: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ec604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec608:
    // 0x1ec608: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ec608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1ec60c:
    // 0x1ec60c: 0x24459ca0  addiu       $a1, $v0, -0x6360
    ctx->pc = 0x1ec60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941856));
label_1ec610:
    // 0x1ec610: 0xc07e9c4  jal         func_1FA710
label_1ec614:
    if (ctx->pc == 0x1EC614u) {
        ctx->pc = 0x1EC618u;
        goto label_1ec618;
    }
    ctx->pc = 0x1EC610u;
    SET_GPR_U32(ctx, 31, 0x1EC618u);
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x1EC610u, 0x1EC618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC618u;
label_1ec618:
    // 0x1ec618: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec61c:
    // 0x1ec61c: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1ec61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ec620:
    // 0x1ec620: 0xc047fe2  jal         func_11FF88
label_1ec624:
    if (ctx->pc == 0x1EC624u) {
        ctx->pc = 0x1EC628u;
        goto label_1ec628;
    }
    ctx->pc = 0x1EC620u;
    SET_GPR_U32(ctx, 31, 0x1EC628u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x1EC620u, 0x1EC628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC628u;
label_1ec628:
    // 0x1ec628: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1ec628u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ec62c:
    // 0x1ec62c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec630:
    // 0x1ec630: 0xc44c0124  lwc1        $f12, 0x124($v0)
    ctx->pc = 0x1ec630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ec634:
    // 0x1ec634: 0xc047fe2  jal         func_11FF88
label_1ec638:
    if (ctx->pc == 0x1EC638u) {
        ctx->pc = 0x1EC63Cu;
        goto label_1ec63c;
    }
    ctx->pc = 0x1EC634u;
    SET_GPR_U32(ctx, 31, 0x1EC63Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x1EC634u, 0x1EC63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC63Cu;
label_1ec63c:
    // 0x1ec63c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1ec63cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ec640:
    // 0x1ec640: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec644:
    // 0x1ec644: 0xc44c0128  lwc1        $f12, 0x128($v0)
    ctx->pc = 0x1ec644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ec648:
    // 0x1ec648: 0xc047fe2  jal         func_11FF88
label_1ec64c:
    if (ctx->pc == 0x1EC64Cu) {
        ctx->pc = 0x1EC650u;
        goto label_1ec650;
    }
    ctx->pc = 0x1EC648u;
    SET_GPR_U32(ctx, 31, 0x1EC650u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x1EC648u, 0x1EC650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC650u;
label_1ec650:
    // 0x1ec650: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x1ec650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
label_1ec654:
    // 0x1ec654: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1ec654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_1ec658:
    // 0x1ec658: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1ec658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_1ec65c:
    // 0x1ec65c: 0x34630a05  ori         $v1, $v1, 0xA05
    ctx->pc = 0x1ec65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2565);
label_1ec660:
    // 0x1ec660: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1ec660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1ec664:
    // 0x1ec664: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1ec664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_1ec668:
    // 0x1ec668: 0x24650ca8  addiu       $a1, $v1, 0xCA8
    ctx->pc = 0x1ec668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 3240));
label_1ec66c:
    // 0x1ec66c: 0x72603628  paddub      $a2, $s3, $zero
    ctx->pc = 0x1ec66cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_1ec670:
    // 0x1ec670: 0x72403e28  paddub      $a3, $s2, $zero
    ctx->pc = 0x1ec670u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1ec674:
    // 0x1ec674: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x1ec674u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ec678:
    // 0x1ec678: 0xc059b14  jal         func_166C50
label_1ec67c:
    if (ctx->pc == 0x1EC67Cu) {
        ctx->pc = 0x1EC680u;
        goto label_1ec680;
    }
    ctx->pc = 0x1EC678u;
    SET_GPR_U32(ctx, 31, 0x1EC680u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1EC678u, 0x1EC680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC680u;
label_1ec680:
    // 0x1ec680: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec684:
    // 0x1ec684: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1ec684u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1ec688:
    // 0x1ec688: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1ec688u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ec68c:
    // 0x1ec68c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec690:
    // 0x1ec690: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1ec690u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1ec694:
    // 0x1ec694: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1ec694u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ec698:
    // 0x1ec698: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec69c:
    // 0x1ec69c: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x1ec69cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1ec6a0:
    // 0x1ec6a0: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x1ec6a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ec6a4:
    // 0x1ec6a4: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x1ec6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
label_1ec6a8:
    // 0x1ec6a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ec6a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1ec6ac:
    // 0x1ec6ac: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1ec6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_1ec6b0:
    // 0x1ec6b0: 0x34420a06  ori         $v0, $v0, 0xA06
    ctx->pc = 0x1ec6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2566);
label_1ec6b4:
    // 0x1ec6b4: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1ec6b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1ec6b8:
    // 0x1ec6b8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1ec6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_1ec6bc:
    // 0x1ec6bc: 0x24450cb8  addiu       $a1, $v0, 0xCB8
    ctx->pc = 0x1ec6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3256));
label_1ec6c0:
    // 0x1ec6c0: 0xc059b14  jal         func_166C50
label_1ec6c4:
    if (ctx->pc == 0x1EC6C4u) {
        ctx->pc = 0x1EC6C8u;
        goto label_1ec6c8;
    }
    ctx->pc = 0x1EC6C0u;
    SET_GPR_U32(ctx, 31, 0x1EC6C8u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1EC6C0u, 0x1EC6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC6C8u;
label_1ec6c8:
    // 0x1ec6c8: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x1ec6c8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ec6cc:
    // 0x1ec6cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ec6ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ec6d0:
    // 0x1ec6d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ec6d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ec6d4:
    // 0x1ec6d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ec6d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ec6d8:
    // 0x1ec6d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ec6d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ec6dc:
    // 0x1ec6dc: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1ec6dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ec6e0:
    // 0x1ec6e0: 0x3e00008  jr          $ra
label_1ec6e4:
    if (ctx->pc == 0x1EC6E4u) {
        ctx->pc = 0x1EC6E8u;
        goto label_fallthrough_0x1ec6e0;
    }
    ctx->pc = 0x1EC6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC6E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ec6e0:
    ctx->pc = 0x1EC6E8u;
}
