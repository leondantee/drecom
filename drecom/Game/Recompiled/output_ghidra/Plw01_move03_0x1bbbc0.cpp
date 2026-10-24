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

// Function: Plw01_move03
// Address: 0x1bbbc0 - 0x1bd1ac
void Plw01_move03_0x1bbbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw01_move03_0x1bbbc0");
#endif

    switch (ctx->pc) {
        case 0x1bbbc0u: goto label_1bbbc0;
        case 0x1bbbc4u: goto label_1bbbc4;
        case 0x1bbbc8u: goto label_1bbbc8;
        case 0x1bbbccu: goto label_1bbbcc;
        case 0x1bbbd0u: goto label_1bbbd0;
        case 0x1bbbd4u: goto label_1bbbd4;
        case 0x1bbbd8u: goto label_1bbbd8;
        case 0x1bbbdcu: goto label_1bbbdc;
        case 0x1bbbe0u: goto label_1bbbe0;
        case 0x1bbbe4u: goto label_1bbbe4;
        case 0x1bbbe8u: goto label_1bbbe8;
        case 0x1bbbecu: goto label_1bbbec;
        case 0x1bbbf0u: goto label_1bbbf0;
        case 0x1bbbf4u: goto label_1bbbf4;
        case 0x1bbbf8u: goto label_1bbbf8;
        case 0x1bbbfcu: goto label_1bbbfc;
        case 0x1bbc00u: goto label_1bbc00;
        case 0x1bbc04u: goto label_1bbc04;
        case 0x1bbc08u: goto label_1bbc08;
        case 0x1bbc0cu: goto label_1bbc0c;
        case 0x1bbc10u: goto label_1bbc10;
        case 0x1bbc14u: goto label_1bbc14;
        case 0x1bbc18u: goto label_1bbc18;
        case 0x1bbc1cu: goto label_1bbc1c;
        case 0x1bbc20u: goto label_1bbc20;
        case 0x1bbc24u: goto label_1bbc24;
        case 0x1bbc28u: goto label_1bbc28;
        case 0x1bbc2cu: goto label_1bbc2c;
        case 0x1bbc30u: goto label_1bbc30;
        case 0x1bbc34u: goto label_1bbc34;
        case 0x1bbc38u: goto label_1bbc38;
        case 0x1bbc3cu: goto label_1bbc3c;
        case 0x1bbc40u: goto label_1bbc40;
        case 0x1bbc44u: goto label_1bbc44;
        case 0x1bbc48u: goto label_1bbc48;
        case 0x1bbc4cu: goto label_1bbc4c;
        case 0x1bbc50u: goto label_1bbc50;
        case 0x1bbc54u: goto label_1bbc54;
        case 0x1bbc58u: goto label_1bbc58;
        case 0x1bbc5cu: goto label_1bbc5c;
        case 0x1bbc60u: goto label_1bbc60;
        case 0x1bbc64u: goto label_1bbc64;
        case 0x1bbc68u: goto label_1bbc68;
        case 0x1bbc6cu: goto label_1bbc6c;
        case 0x1bbc70u: goto label_1bbc70;
        case 0x1bbc74u: goto label_1bbc74;
        case 0x1bbc78u: goto label_1bbc78;
        case 0x1bbc7cu: goto label_1bbc7c;
        case 0x1bbc80u: goto label_1bbc80;
        case 0x1bbc84u: goto label_1bbc84;
        case 0x1bbc88u: goto label_1bbc88;
        case 0x1bbc8cu: goto label_1bbc8c;
        case 0x1bbc90u: goto label_1bbc90;
        case 0x1bbc94u: goto label_1bbc94;
        case 0x1bbc98u: goto label_1bbc98;
        case 0x1bbc9cu: goto label_1bbc9c;
        case 0x1bbca0u: goto label_1bbca0;
        case 0x1bbca4u: goto label_1bbca4;
        case 0x1bbca8u: goto label_1bbca8;
        case 0x1bbcacu: goto label_1bbcac;
        case 0x1bbcb0u: goto label_1bbcb0;
        case 0x1bbcb4u: goto label_1bbcb4;
        case 0x1bbcb8u: goto label_1bbcb8;
        case 0x1bbcbcu: goto label_1bbcbc;
        case 0x1bbcc0u: goto label_1bbcc0;
        case 0x1bbcc4u: goto label_1bbcc4;
        case 0x1bbcc8u: goto label_1bbcc8;
        case 0x1bbcccu: goto label_1bbccc;
        case 0x1bbcd0u: goto label_1bbcd0;
        case 0x1bbcd4u: goto label_1bbcd4;
        case 0x1bbcd8u: goto label_1bbcd8;
        case 0x1bbcdcu: goto label_1bbcdc;
        case 0x1bbce0u: goto label_1bbce0;
        case 0x1bbce4u: goto label_1bbce4;
        case 0x1bbce8u: goto label_1bbce8;
        case 0x1bbcecu: goto label_1bbcec;
        case 0x1bbcf0u: goto label_1bbcf0;
        case 0x1bbcf4u: goto label_1bbcf4;
        case 0x1bbcf8u: goto label_1bbcf8;
        case 0x1bbcfcu: goto label_1bbcfc;
        case 0x1bbd00u: goto label_1bbd00;
        case 0x1bbd04u: goto label_1bbd04;
        case 0x1bbd08u: goto label_1bbd08;
        case 0x1bbd0cu: goto label_1bbd0c;
        case 0x1bbd10u: goto label_1bbd10;
        case 0x1bbd14u: goto label_1bbd14;
        case 0x1bbd18u: goto label_1bbd18;
        case 0x1bbd1cu: goto label_1bbd1c;
        case 0x1bbd20u: goto label_1bbd20;
        case 0x1bbd24u: goto label_1bbd24;
        case 0x1bbd28u: goto label_1bbd28;
        case 0x1bbd2cu: goto label_1bbd2c;
        case 0x1bbd30u: goto label_1bbd30;
        case 0x1bbd34u: goto label_1bbd34;
        case 0x1bbd38u: goto label_1bbd38;
        case 0x1bbd3cu: goto label_1bbd3c;
        case 0x1bbd40u: goto label_1bbd40;
        case 0x1bbd44u: goto label_1bbd44;
        case 0x1bbd48u: goto label_1bbd48;
        case 0x1bbd4cu: goto label_1bbd4c;
        case 0x1bbd50u: goto label_1bbd50;
        case 0x1bbd54u: goto label_1bbd54;
        case 0x1bbd58u: goto label_1bbd58;
        case 0x1bbd5cu: goto label_1bbd5c;
        case 0x1bbd60u: goto label_1bbd60;
        case 0x1bbd64u: goto label_1bbd64;
        case 0x1bbd68u: goto label_1bbd68;
        case 0x1bbd6cu: goto label_1bbd6c;
        case 0x1bbd70u: goto label_1bbd70;
        case 0x1bbd74u: goto label_1bbd74;
        case 0x1bbd78u: goto label_1bbd78;
        case 0x1bbd7cu: goto label_1bbd7c;
        case 0x1bbd80u: goto label_1bbd80;
        case 0x1bbd84u: goto label_1bbd84;
        case 0x1bbd88u: goto label_1bbd88;
        case 0x1bbd8cu: goto label_1bbd8c;
        case 0x1bbd90u: goto label_1bbd90;
        case 0x1bbd94u: goto label_1bbd94;
        case 0x1bbd98u: goto label_1bbd98;
        case 0x1bbd9cu: goto label_1bbd9c;
        case 0x1bbda0u: goto label_1bbda0;
        case 0x1bbda4u: goto label_1bbda4;
        case 0x1bbda8u: goto label_1bbda8;
        case 0x1bbdacu: goto label_1bbdac;
        case 0x1bbdb0u: goto label_1bbdb0;
        case 0x1bbdb4u: goto label_1bbdb4;
        case 0x1bbdb8u: goto label_1bbdb8;
        case 0x1bbdbcu: goto label_1bbdbc;
        case 0x1bbdc0u: goto label_1bbdc0;
        case 0x1bbdc4u: goto label_1bbdc4;
        case 0x1bbdc8u: goto label_1bbdc8;
        case 0x1bbdccu: goto label_1bbdcc;
        case 0x1bbdd0u: goto label_1bbdd0;
        case 0x1bbdd4u: goto label_1bbdd4;
        case 0x1bbdd8u: goto label_1bbdd8;
        case 0x1bbddcu: goto label_1bbddc;
        case 0x1bbde0u: goto label_1bbde0;
        case 0x1bbde4u: goto label_1bbde4;
        case 0x1bbde8u: goto label_1bbde8;
        case 0x1bbdecu: goto label_1bbdec;
        case 0x1bbdf0u: goto label_1bbdf0;
        case 0x1bbdf4u: goto label_1bbdf4;
        case 0x1bbdf8u: goto label_1bbdf8;
        case 0x1bbdfcu: goto label_1bbdfc;
        case 0x1bbe00u: goto label_1bbe00;
        case 0x1bbe04u: goto label_1bbe04;
        case 0x1bbe08u: goto label_1bbe08;
        case 0x1bbe0cu: goto label_1bbe0c;
        case 0x1bbe10u: goto label_1bbe10;
        case 0x1bbe14u: goto label_1bbe14;
        case 0x1bbe18u: goto label_1bbe18;
        case 0x1bbe1cu: goto label_1bbe1c;
        case 0x1bbe20u: goto label_1bbe20;
        case 0x1bbe24u: goto label_1bbe24;
        case 0x1bbe28u: goto label_1bbe28;
        case 0x1bbe2cu: goto label_1bbe2c;
        case 0x1bbe30u: goto label_1bbe30;
        case 0x1bbe34u: goto label_1bbe34;
        case 0x1bbe38u: goto label_1bbe38;
        case 0x1bbe3cu: goto label_1bbe3c;
        case 0x1bbe40u: goto label_1bbe40;
        case 0x1bbe44u: goto label_1bbe44;
        case 0x1bbe48u: goto label_1bbe48;
        case 0x1bbe4cu: goto label_1bbe4c;
        case 0x1bbe50u: goto label_1bbe50;
        case 0x1bbe54u: goto label_1bbe54;
        case 0x1bbe58u: goto label_1bbe58;
        case 0x1bbe5cu: goto label_1bbe5c;
        case 0x1bbe60u: goto label_1bbe60;
        case 0x1bbe64u: goto label_1bbe64;
        case 0x1bbe68u: goto label_1bbe68;
        case 0x1bbe6cu: goto label_1bbe6c;
        case 0x1bbe70u: goto label_1bbe70;
        case 0x1bbe74u: goto label_1bbe74;
        case 0x1bbe78u: goto label_1bbe78;
        case 0x1bbe7cu: goto label_1bbe7c;
        case 0x1bbe80u: goto label_1bbe80;
        case 0x1bbe84u: goto label_1bbe84;
        case 0x1bbe88u: goto label_1bbe88;
        case 0x1bbe8cu: goto label_1bbe8c;
        case 0x1bbe90u: goto label_1bbe90;
        case 0x1bbe94u: goto label_1bbe94;
        case 0x1bbe98u: goto label_1bbe98;
        case 0x1bbe9cu: goto label_1bbe9c;
        case 0x1bbea0u: goto label_1bbea0;
        case 0x1bbea4u: goto label_1bbea4;
        case 0x1bbea8u: goto label_1bbea8;
        case 0x1bbeacu: goto label_1bbeac;
        case 0x1bbeb0u: goto label_1bbeb0;
        case 0x1bbeb4u: goto label_1bbeb4;
        case 0x1bbeb8u: goto label_1bbeb8;
        case 0x1bbebcu: goto label_1bbebc;
        case 0x1bbec0u: goto label_1bbec0;
        case 0x1bbec4u: goto label_1bbec4;
        case 0x1bbec8u: goto label_1bbec8;
        case 0x1bbeccu: goto label_1bbecc;
        case 0x1bbed0u: goto label_1bbed0;
        case 0x1bbed4u: goto label_1bbed4;
        case 0x1bbed8u: goto label_1bbed8;
        case 0x1bbedcu: goto label_1bbedc;
        case 0x1bbee0u: goto label_1bbee0;
        case 0x1bbee4u: goto label_1bbee4;
        case 0x1bbee8u: goto label_1bbee8;
        case 0x1bbeecu: goto label_1bbeec;
        case 0x1bbef0u: goto label_1bbef0;
        case 0x1bbef4u: goto label_1bbef4;
        case 0x1bbef8u: goto label_1bbef8;
        case 0x1bbefcu: goto label_1bbefc;
        case 0x1bbf00u: goto label_1bbf00;
        case 0x1bbf04u: goto label_1bbf04;
        case 0x1bbf08u: goto label_1bbf08;
        case 0x1bbf0cu: goto label_1bbf0c;
        case 0x1bbf10u: goto label_1bbf10;
        case 0x1bbf14u: goto label_1bbf14;
        case 0x1bbf18u: goto label_1bbf18;
        case 0x1bbf1cu: goto label_1bbf1c;
        case 0x1bbf20u: goto label_1bbf20;
        case 0x1bbf24u: goto label_1bbf24;
        case 0x1bbf28u: goto label_1bbf28;
        case 0x1bbf2cu: goto label_1bbf2c;
        case 0x1bbf30u: goto label_1bbf30;
        case 0x1bbf34u: goto label_1bbf34;
        case 0x1bbf38u: goto label_1bbf38;
        case 0x1bbf3cu: goto label_1bbf3c;
        case 0x1bbf40u: goto label_1bbf40;
        case 0x1bbf44u: goto label_1bbf44;
        case 0x1bbf48u: goto label_1bbf48;
        case 0x1bbf4cu: goto label_1bbf4c;
        case 0x1bbf50u: goto label_1bbf50;
        case 0x1bbf54u: goto label_1bbf54;
        case 0x1bbf58u: goto label_1bbf58;
        case 0x1bbf5cu: goto label_1bbf5c;
        case 0x1bbf60u: goto label_1bbf60;
        case 0x1bbf64u: goto label_1bbf64;
        case 0x1bbf68u: goto label_1bbf68;
        case 0x1bbf6cu: goto label_1bbf6c;
        case 0x1bbf70u: goto label_1bbf70;
        case 0x1bbf74u: goto label_1bbf74;
        case 0x1bbf78u: goto label_1bbf78;
        case 0x1bbf7cu: goto label_1bbf7c;
        case 0x1bbf80u: goto label_1bbf80;
        case 0x1bbf84u: goto label_1bbf84;
        case 0x1bbf88u: goto label_1bbf88;
        case 0x1bbf8cu: goto label_1bbf8c;
        case 0x1bbf90u: goto label_1bbf90;
        case 0x1bbf94u: goto label_1bbf94;
        case 0x1bbf98u: goto label_1bbf98;
        case 0x1bbf9cu: goto label_1bbf9c;
        case 0x1bbfa0u: goto label_1bbfa0;
        case 0x1bbfa4u: goto label_1bbfa4;
        case 0x1bbfa8u: goto label_1bbfa8;
        case 0x1bbfacu: goto label_1bbfac;
        case 0x1bbfb0u: goto label_1bbfb0;
        case 0x1bbfb4u: goto label_1bbfb4;
        case 0x1bbfb8u: goto label_1bbfb8;
        case 0x1bbfbcu: goto label_1bbfbc;
        case 0x1bbfc0u: goto label_1bbfc0;
        case 0x1bbfc4u: goto label_1bbfc4;
        case 0x1bbfc8u: goto label_1bbfc8;
        case 0x1bbfccu: goto label_1bbfcc;
        case 0x1bbfd0u: goto label_1bbfd0;
        case 0x1bbfd4u: goto label_1bbfd4;
        case 0x1bbfd8u: goto label_1bbfd8;
        case 0x1bbfdcu: goto label_1bbfdc;
        case 0x1bbfe0u: goto label_1bbfe0;
        case 0x1bbfe4u: goto label_1bbfe4;
        case 0x1bbfe8u: goto label_1bbfe8;
        case 0x1bbfecu: goto label_1bbfec;
        case 0x1bbff0u: goto label_1bbff0;
        case 0x1bbff4u: goto label_1bbff4;
        case 0x1bbff8u: goto label_1bbff8;
        case 0x1bbffcu: goto label_1bbffc;
        case 0x1bc000u: goto label_1bc000;
        case 0x1bc004u: goto label_1bc004;
        case 0x1bc008u: goto label_1bc008;
        case 0x1bc00cu: goto label_1bc00c;
        case 0x1bc010u: goto label_1bc010;
        case 0x1bc014u: goto label_1bc014;
        case 0x1bc018u: goto label_1bc018;
        case 0x1bc01cu: goto label_1bc01c;
        case 0x1bc020u: goto label_1bc020;
        case 0x1bc024u: goto label_1bc024;
        case 0x1bc028u: goto label_1bc028;
        case 0x1bc02cu: goto label_1bc02c;
        case 0x1bc030u: goto label_1bc030;
        case 0x1bc034u: goto label_1bc034;
        case 0x1bc038u: goto label_1bc038;
        case 0x1bc03cu: goto label_1bc03c;
        case 0x1bc040u: goto label_1bc040;
        case 0x1bc044u: goto label_1bc044;
        case 0x1bc048u: goto label_1bc048;
        case 0x1bc04cu: goto label_1bc04c;
        case 0x1bc050u: goto label_1bc050;
        case 0x1bc054u: goto label_1bc054;
        case 0x1bc058u: goto label_1bc058;
        case 0x1bc05cu: goto label_1bc05c;
        case 0x1bc060u: goto label_1bc060;
        case 0x1bc064u: goto label_1bc064;
        case 0x1bc068u: goto label_1bc068;
        case 0x1bc06cu: goto label_1bc06c;
        case 0x1bc070u: goto label_1bc070;
        case 0x1bc074u: goto label_1bc074;
        case 0x1bc078u: goto label_1bc078;
        case 0x1bc07cu: goto label_1bc07c;
        case 0x1bc080u: goto label_1bc080;
        case 0x1bc084u: goto label_1bc084;
        case 0x1bc088u: goto label_1bc088;
        case 0x1bc08cu: goto label_1bc08c;
        case 0x1bc090u: goto label_1bc090;
        case 0x1bc094u: goto label_1bc094;
        case 0x1bc098u: goto label_1bc098;
        case 0x1bc09cu: goto label_1bc09c;
        case 0x1bc0a0u: goto label_1bc0a0;
        case 0x1bc0a4u: goto label_1bc0a4;
        case 0x1bc0a8u: goto label_1bc0a8;
        case 0x1bc0acu: goto label_1bc0ac;
        case 0x1bc0b0u: goto label_1bc0b0;
        case 0x1bc0b4u: goto label_1bc0b4;
        case 0x1bc0b8u: goto label_1bc0b8;
        case 0x1bc0bcu: goto label_1bc0bc;
        case 0x1bc0c0u: goto label_1bc0c0;
        case 0x1bc0c4u: goto label_1bc0c4;
        case 0x1bc0c8u: goto label_1bc0c8;
        case 0x1bc0ccu: goto label_1bc0cc;
        case 0x1bc0d0u: goto label_1bc0d0;
        case 0x1bc0d4u: goto label_1bc0d4;
        case 0x1bc0d8u: goto label_1bc0d8;
        case 0x1bc0dcu: goto label_1bc0dc;
        case 0x1bc0e0u: goto label_1bc0e0;
        case 0x1bc0e4u: goto label_1bc0e4;
        case 0x1bc0e8u: goto label_1bc0e8;
        case 0x1bc0ecu: goto label_1bc0ec;
        case 0x1bc0f0u: goto label_1bc0f0;
        case 0x1bc0f4u: goto label_1bc0f4;
        case 0x1bc0f8u: goto label_1bc0f8;
        case 0x1bc0fcu: goto label_1bc0fc;
        case 0x1bc100u: goto label_1bc100;
        case 0x1bc104u: goto label_1bc104;
        case 0x1bc108u: goto label_1bc108;
        case 0x1bc10cu: goto label_1bc10c;
        case 0x1bc110u: goto label_1bc110;
        case 0x1bc114u: goto label_1bc114;
        case 0x1bc118u: goto label_1bc118;
        case 0x1bc11cu: goto label_1bc11c;
        case 0x1bc120u: goto label_1bc120;
        case 0x1bc124u: goto label_1bc124;
        case 0x1bc128u: goto label_1bc128;
        case 0x1bc12cu: goto label_1bc12c;
        case 0x1bc130u: goto label_1bc130;
        case 0x1bc134u: goto label_1bc134;
        case 0x1bc138u: goto label_1bc138;
        case 0x1bc13cu: goto label_1bc13c;
        case 0x1bc140u: goto label_1bc140;
        case 0x1bc144u: goto label_1bc144;
        case 0x1bc148u: goto label_1bc148;
        case 0x1bc14cu: goto label_1bc14c;
        case 0x1bc150u: goto label_1bc150;
        case 0x1bc154u: goto label_1bc154;
        case 0x1bc158u: goto label_1bc158;
        case 0x1bc15cu: goto label_1bc15c;
        case 0x1bc160u: goto label_1bc160;
        case 0x1bc164u: goto label_1bc164;
        case 0x1bc168u: goto label_1bc168;
        case 0x1bc16cu: goto label_1bc16c;
        case 0x1bc170u: goto label_1bc170;
        case 0x1bc174u: goto label_1bc174;
        case 0x1bc178u: goto label_1bc178;
        case 0x1bc17cu: goto label_1bc17c;
        case 0x1bc180u: goto label_1bc180;
        case 0x1bc184u: goto label_1bc184;
        case 0x1bc188u: goto label_1bc188;
        case 0x1bc18cu: goto label_1bc18c;
        case 0x1bc190u: goto label_1bc190;
        case 0x1bc194u: goto label_1bc194;
        case 0x1bc198u: goto label_1bc198;
        case 0x1bc19cu: goto label_1bc19c;
        case 0x1bc1a0u: goto label_1bc1a0;
        case 0x1bc1a4u: goto label_1bc1a4;
        case 0x1bc1a8u: goto label_1bc1a8;
        case 0x1bc1acu: goto label_1bc1ac;
        case 0x1bc1b0u: goto label_1bc1b0;
        case 0x1bc1b4u: goto label_1bc1b4;
        case 0x1bc1b8u: goto label_1bc1b8;
        case 0x1bc1bcu: goto label_1bc1bc;
        case 0x1bc1c0u: goto label_1bc1c0;
        case 0x1bc1c4u: goto label_1bc1c4;
        case 0x1bc1c8u: goto label_1bc1c8;
        case 0x1bc1ccu: goto label_1bc1cc;
        case 0x1bc1d0u: goto label_1bc1d0;
        case 0x1bc1d4u: goto label_1bc1d4;
        case 0x1bc1d8u: goto label_1bc1d8;
        case 0x1bc1dcu: goto label_1bc1dc;
        case 0x1bc1e0u: goto label_1bc1e0;
        case 0x1bc1e4u: goto label_1bc1e4;
        case 0x1bc1e8u: goto label_1bc1e8;
        case 0x1bc1ecu: goto label_1bc1ec;
        case 0x1bc1f0u: goto label_1bc1f0;
        case 0x1bc1f4u: goto label_1bc1f4;
        case 0x1bc1f8u: goto label_1bc1f8;
        case 0x1bc1fcu: goto label_1bc1fc;
        case 0x1bc200u: goto label_1bc200;
        case 0x1bc204u: goto label_1bc204;
        case 0x1bc208u: goto label_1bc208;
        case 0x1bc20cu: goto label_1bc20c;
        case 0x1bc210u: goto label_1bc210;
        case 0x1bc214u: goto label_1bc214;
        case 0x1bc218u: goto label_1bc218;
        case 0x1bc21cu: goto label_1bc21c;
        case 0x1bc220u: goto label_1bc220;
        case 0x1bc224u: goto label_1bc224;
        case 0x1bc228u: goto label_1bc228;
        case 0x1bc22cu: goto label_1bc22c;
        case 0x1bc230u: goto label_1bc230;
        case 0x1bc234u: goto label_1bc234;
        case 0x1bc238u: goto label_1bc238;
        case 0x1bc23cu: goto label_1bc23c;
        case 0x1bc240u: goto label_1bc240;
        case 0x1bc244u: goto label_1bc244;
        case 0x1bc248u: goto label_1bc248;
        case 0x1bc24cu: goto label_1bc24c;
        case 0x1bc250u: goto label_1bc250;
        case 0x1bc254u: goto label_1bc254;
        case 0x1bc258u: goto label_1bc258;
        case 0x1bc25cu: goto label_1bc25c;
        case 0x1bc260u: goto label_1bc260;
        case 0x1bc264u: goto label_1bc264;
        case 0x1bc268u: goto label_1bc268;
        case 0x1bc26cu: goto label_1bc26c;
        case 0x1bc270u: goto label_1bc270;
        case 0x1bc274u: goto label_1bc274;
        case 0x1bc278u: goto label_1bc278;
        case 0x1bc27cu: goto label_1bc27c;
        case 0x1bc280u: goto label_1bc280;
        case 0x1bc284u: goto label_1bc284;
        case 0x1bc288u: goto label_1bc288;
        case 0x1bc28cu: goto label_1bc28c;
        case 0x1bc290u: goto label_1bc290;
        case 0x1bc294u: goto label_1bc294;
        case 0x1bc298u: goto label_1bc298;
        case 0x1bc29cu: goto label_1bc29c;
        case 0x1bc2a0u: goto label_1bc2a0;
        case 0x1bc2a4u: goto label_1bc2a4;
        case 0x1bc2a8u: goto label_1bc2a8;
        case 0x1bc2acu: goto label_1bc2ac;
        case 0x1bc2b0u: goto label_1bc2b0;
        case 0x1bc2b4u: goto label_1bc2b4;
        case 0x1bc2b8u: goto label_1bc2b8;
        case 0x1bc2bcu: goto label_1bc2bc;
        case 0x1bc2c0u: goto label_1bc2c0;
        case 0x1bc2c4u: goto label_1bc2c4;
        case 0x1bc2c8u: goto label_1bc2c8;
        case 0x1bc2ccu: goto label_1bc2cc;
        case 0x1bc2d0u: goto label_1bc2d0;
        case 0x1bc2d4u: goto label_1bc2d4;
        case 0x1bc2d8u: goto label_1bc2d8;
        case 0x1bc2dcu: goto label_1bc2dc;
        case 0x1bc2e0u: goto label_1bc2e0;
        case 0x1bc2e4u: goto label_1bc2e4;
        case 0x1bc2e8u: goto label_1bc2e8;
        case 0x1bc2ecu: goto label_1bc2ec;
        case 0x1bc2f0u: goto label_1bc2f0;
        case 0x1bc2f4u: goto label_1bc2f4;
        case 0x1bc2f8u: goto label_1bc2f8;
        case 0x1bc2fcu: goto label_1bc2fc;
        case 0x1bc300u: goto label_1bc300;
        case 0x1bc304u: goto label_1bc304;
        case 0x1bc308u: goto label_1bc308;
        case 0x1bc30cu: goto label_1bc30c;
        case 0x1bc310u: goto label_1bc310;
        case 0x1bc314u: goto label_1bc314;
        case 0x1bc318u: goto label_1bc318;
        case 0x1bc31cu: goto label_1bc31c;
        case 0x1bc320u: goto label_1bc320;
        case 0x1bc324u: goto label_1bc324;
        case 0x1bc328u: goto label_1bc328;
        case 0x1bc32cu: goto label_1bc32c;
        case 0x1bc330u: goto label_1bc330;
        case 0x1bc334u: goto label_1bc334;
        case 0x1bc338u: goto label_1bc338;
        case 0x1bc33cu: goto label_1bc33c;
        case 0x1bc340u: goto label_1bc340;
        case 0x1bc344u: goto label_1bc344;
        case 0x1bc348u: goto label_1bc348;
        case 0x1bc34cu: goto label_1bc34c;
        case 0x1bc350u: goto label_1bc350;
        case 0x1bc354u: goto label_1bc354;
        case 0x1bc358u: goto label_1bc358;
        case 0x1bc35cu: goto label_1bc35c;
        case 0x1bc360u: goto label_1bc360;
        case 0x1bc364u: goto label_1bc364;
        case 0x1bc368u: goto label_1bc368;
        case 0x1bc36cu: goto label_1bc36c;
        case 0x1bc370u: goto label_1bc370;
        case 0x1bc374u: goto label_1bc374;
        case 0x1bc378u: goto label_1bc378;
        case 0x1bc37cu: goto label_1bc37c;
        case 0x1bc380u: goto label_1bc380;
        case 0x1bc384u: goto label_1bc384;
        case 0x1bc388u: goto label_1bc388;
        case 0x1bc38cu: goto label_1bc38c;
        case 0x1bc390u: goto label_1bc390;
        case 0x1bc394u: goto label_1bc394;
        case 0x1bc398u: goto label_1bc398;
        case 0x1bc39cu: goto label_1bc39c;
        case 0x1bc3a0u: goto label_1bc3a0;
        case 0x1bc3a4u: goto label_1bc3a4;
        case 0x1bc3a8u: goto label_1bc3a8;
        case 0x1bc3acu: goto label_1bc3ac;
        case 0x1bc3b0u: goto label_1bc3b0;
        case 0x1bc3b4u: goto label_1bc3b4;
        case 0x1bc3b8u: goto label_1bc3b8;
        case 0x1bc3bcu: goto label_1bc3bc;
        case 0x1bc3c0u: goto label_1bc3c0;
        case 0x1bc3c4u: goto label_1bc3c4;
        case 0x1bc3c8u: goto label_1bc3c8;
        case 0x1bc3ccu: goto label_1bc3cc;
        case 0x1bc3d0u: goto label_1bc3d0;
        case 0x1bc3d4u: goto label_1bc3d4;
        case 0x1bc3d8u: goto label_1bc3d8;
        case 0x1bc3dcu: goto label_1bc3dc;
        case 0x1bc3e0u: goto label_1bc3e0;
        case 0x1bc3e4u: goto label_1bc3e4;
        case 0x1bc3e8u: goto label_1bc3e8;
        case 0x1bc3ecu: goto label_1bc3ec;
        case 0x1bc3f0u: goto label_1bc3f0;
        case 0x1bc3f4u: goto label_1bc3f4;
        case 0x1bc3f8u: goto label_1bc3f8;
        case 0x1bc3fcu: goto label_1bc3fc;
        case 0x1bc400u: goto label_1bc400;
        case 0x1bc404u: goto label_1bc404;
        case 0x1bc408u: goto label_1bc408;
        case 0x1bc40cu: goto label_1bc40c;
        case 0x1bc410u: goto label_1bc410;
        case 0x1bc414u: goto label_1bc414;
        case 0x1bc418u: goto label_1bc418;
        case 0x1bc41cu: goto label_1bc41c;
        case 0x1bc420u: goto label_1bc420;
        case 0x1bc424u: goto label_1bc424;
        case 0x1bc428u: goto label_1bc428;
        case 0x1bc42cu: goto label_1bc42c;
        case 0x1bc430u: goto label_1bc430;
        case 0x1bc434u: goto label_1bc434;
        case 0x1bc438u: goto label_1bc438;
        case 0x1bc43cu: goto label_1bc43c;
        case 0x1bc440u: goto label_1bc440;
        case 0x1bc444u: goto label_1bc444;
        case 0x1bc448u: goto label_1bc448;
        case 0x1bc44cu: goto label_1bc44c;
        case 0x1bc450u: goto label_1bc450;
        case 0x1bc454u: goto label_1bc454;
        case 0x1bc458u: goto label_1bc458;
        case 0x1bc45cu: goto label_1bc45c;
        case 0x1bc460u: goto label_1bc460;
        case 0x1bc464u: goto label_1bc464;
        case 0x1bc468u: goto label_1bc468;
        case 0x1bc46cu: goto label_1bc46c;
        case 0x1bc470u: goto label_1bc470;
        case 0x1bc474u: goto label_1bc474;
        case 0x1bc478u: goto label_1bc478;
        case 0x1bc47cu: goto label_1bc47c;
        case 0x1bc480u: goto label_1bc480;
        case 0x1bc484u: goto label_1bc484;
        case 0x1bc488u: goto label_1bc488;
        case 0x1bc48cu: goto label_1bc48c;
        case 0x1bc490u: goto label_1bc490;
        case 0x1bc494u: goto label_1bc494;
        case 0x1bc498u: goto label_1bc498;
        case 0x1bc49cu: goto label_1bc49c;
        case 0x1bc4a0u: goto label_1bc4a0;
        case 0x1bc4a4u: goto label_1bc4a4;
        case 0x1bc4a8u: goto label_1bc4a8;
        case 0x1bc4acu: goto label_1bc4ac;
        case 0x1bc4b0u: goto label_1bc4b0;
        case 0x1bc4b4u: goto label_1bc4b4;
        case 0x1bc4b8u: goto label_1bc4b8;
        case 0x1bc4bcu: goto label_1bc4bc;
        case 0x1bc4c0u: goto label_1bc4c0;
        case 0x1bc4c4u: goto label_1bc4c4;
        case 0x1bc4c8u: goto label_1bc4c8;
        case 0x1bc4ccu: goto label_1bc4cc;
        case 0x1bc4d0u: goto label_1bc4d0;
        case 0x1bc4d4u: goto label_1bc4d4;
        case 0x1bc4d8u: goto label_1bc4d8;
        case 0x1bc4dcu: goto label_1bc4dc;
        case 0x1bc4e0u: goto label_1bc4e0;
        case 0x1bc4e4u: goto label_1bc4e4;
        case 0x1bc4e8u: goto label_1bc4e8;
        case 0x1bc4ecu: goto label_1bc4ec;
        case 0x1bc4f0u: goto label_1bc4f0;
        case 0x1bc4f4u: goto label_1bc4f4;
        case 0x1bc4f8u: goto label_1bc4f8;
        case 0x1bc4fcu: goto label_1bc4fc;
        case 0x1bc500u: goto label_1bc500;
        case 0x1bc504u: goto label_1bc504;
        case 0x1bc508u: goto label_1bc508;
        case 0x1bc50cu: goto label_1bc50c;
        case 0x1bc510u: goto label_1bc510;
        case 0x1bc514u: goto label_1bc514;
        case 0x1bc518u: goto label_1bc518;
        case 0x1bc51cu: goto label_1bc51c;
        case 0x1bc520u: goto label_1bc520;
        case 0x1bc524u: goto label_1bc524;
        case 0x1bc528u: goto label_1bc528;
        case 0x1bc52cu: goto label_1bc52c;
        case 0x1bc530u: goto label_1bc530;
        case 0x1bc534u: goto label_1bc534;
        case 0x1bc538u: goto label_1bc538;
        case 0x1bc53cu: goto label_1bc53c;
        case 0x1bc540u: goto label_1bc540;
        case 0x1bc544u: goto label_1bc544;
        case 0x1bc548u: goto label_1bc548;
        case 0x1bc54cu: goto label_1bc54c;
        case 0x1bc550u: goto label_1bc550;
        case 0x1bc554u: goto label_1bc554;
        case 0x1bc558u: goto label_1bc558;
        case 0x1bc55cu: goto label_1bc55c;
        case 0x1bc560u: goto label_1bc560;
        case 0x1bc564u: goto label_1bc564;
        case 0x1bc568u: goto label_1bc568;
        case 0x1bc56cu: goto label_1bc56c;
        case 0x1bc570u: goto label_1bc570;
        case 0x1bc574u: goto label_1bc574;
        case 0x1bc578u: goto label_1bc578;
        case 0x1bc57cu: goto label_1bc57c;
        case 0x1bc580u: goto label_1bc580;
        case 0x1bc584u: goto label_1bc584;
        case 0x1bc588u: goto label_1bc588;
        case 0x1bc58cu: goto label_1bc58c;
        case 0x1bc590u: goto label_1bc590;
        case 0x1bc594u: goto label_1bc594;
        case 0x1bc598u: goto label_1bc598;
        case 0x1bc59cu: goto label_1bc59c;
        case 0x1bc5a0u: goto label_1bc5a0;
        case 0x1bc5a4u: goto label_1bc5a4;
        case 0x1bc5a8u: goto label_1bc5a8;
        case 0x1bc5acu: goto label_1bc5ac;
        case 0x1bc5b0u: goto label_1bc5b0;
        case 0x1bc5b4u: goto label_1bc5b4;
        case 0x1bc5b8u: goto label_1bc5b8;
        case 0x1bc5bcu: goto label_1bc5bc;
        case 0x1bc5c0u: goto label_1bc5c0;
        case 0x1bc5c4u: goto label_1bc5c4;
        case 0x1bc5c8u: goto label_1bc5c8;
        case 0x1bc5ccu: goto label_1bc5cc;
        case 0x1bc5d0u: goto label_1bc5d0;
        case 0x1bc5d4u: goto label_1bc5d4;
        case 0x1bc5d8u: goto label_1bc5d8;
        case 0x1bc5dcu: goto label_1bc5dc;
        case 0x1bc5e0u: goto label_1bc5e0;
        case 0x1bc5e4u: goto label_1bc5e4;
        case 0x1bc5e8u: goto label_1bc5e8;
        case 0x1bc5ecu: goto label_1bc5ec;
        case 0x1bc5f0u: goto label_1bc5f0;
        case 0x1bc5f4u: goto label_1bc5f4;
        case 0x1bc5f8u: goto label_1bc5f8;
        case 0x1bc5fcu: goto label_1bc5fc;
        case 0x1bc600u: goto label_1bc600;
        case 0x1bc604u: goto label_1bc604;
        case 0x1bc608u: goto label_1bc608;
        case 0x1bc60cu: goto label_1bc60c;
        case 0x1bc610u: goto label_1bc610;
        case 0x1bc614u: goto label_1bc614;
        case 0x1bc618u: goto label_1bc618;
        case 0x1bc61cu: goto label_1bc61c;
        case 0x1bc620u: goto label_1bc620;
        case 0x1bc624u: goto label_1bc624;
        case 0x1bc628u: goto label_1bc628;
        case 0x1bc62cu: goto label_1bc62c;
        case 0x1bc630u: goto label_1bc630;
        case 0x1bc634u: goto label_1bc634;
        case 0x1bc638u: goto label_1bc638;
        case 0x1bc63cu: goto label_1bc63c;
        case 0x1bc640u: goto label_1bc640;
        case 0x1bc644u: goto label_1bc644;
        case 0x1bc648u: goto label_1bc648;
        case 0x1bc64cu: goto label_1bc64c;
        case 0x1bc650u: goto label_1bc650;
        case 0x1bc654u: goto label_1bc654;
        case 0x1bc658u: goto label_1bc658;
        case 0x1bc65cu: goto label_1bc65c;
        case 0x1bc660u: goto label_1bc660;
        case 0x1bc664u: goto label_1bc664;
        case 0x1bc668u: goto label_1bc668;
        case 0x1bc66cu: goto label_1bc66c;
        case 0x1bc670u: goto label_1bc670;
        case 0x1bc674u: goto label_1bc674;
        case 0x1bc678u: goto label_1bc678;
        case 0x1bc67cu: goto label_1bc67c;
        case 0x1bc680u: goto label_1bc680;
        case 0x1bc684u: goto label_1bc684;
        case 0x1bc688u: goto label_1bc688;
        case 0x1bc68cu: goto label_1bc68c;
        case 0x1bc690u: goto label_1bc690;
        case 0x1bc694u: goto label_1bc694;
        case 0x1bc698u: goto label_1bc698;
        case 0x1bc69cu: goto label_1bc69c;
        case 0x1bc6a0u: goto label_1bc6a0;
        case 0x1bc6a4u: goto label_1bc6a4;
        case 0x1bc6a8u: goto label_1bc6a8;
        case 0x1bc6acu: goto label_1bc6ac;
        case 0x1bc6b0u: goto label_1bc6b0;
        case 0x1bc6b4u: goto label_1bc6b4;
        case 0x1bc6b8u: goto label_1bc6b8;
        case 0x1bc6bcu: goto label_1bc6bc;
        case 0x1bc6c0u: goto label_1bc6c0;
        case 0x1bc6c4u: goto label_1bc6c4;
        case 0x1bc6c8u: goto label_1bc6c8;
        case 0x1bc6ccu: goto label_1bc6cc;
        case 0x1bc6d0u: goto label_1bc6d0;
        case 0x1bc6d4u: goto label_1bc6d4;
        case 0x1bc6d8u: goto label_1bc6d8;
        case 0x1bc6dcu: goto label_1bc6dc;
        case 0x1bc6e0u: goto label_1bc6e0;
        case 0x1bc6e4u: goto label_1bc6e4;
        case 0x1bc6e8u: goto label_1bc6e8;
        case 0x1bc6ecu: goto label_1bc6ec;
        case 0x1bc6f0u: goto label_1bc6f0;
        case 0x1bc6f4u: goto label_1bc6f4;
        case 0x1bc6f8u: goto label_1bc6f8;
        case 0x1bc6fcu: goto label_1bc6fc;
        case 0x1bc700u: goto label_1bc700;
        case 0x1bc704u: goto label_1bc704;
        case 0x1bc708u: goto label_1bc708;
        case 0x1bc70cu: goto label_1bc70c;
        case 0x1bc710u: goto label_1bc710;
        case 0x1bc714u: goto label_1bc714;
        case 0x1bc718u: goto label_1bc718;
        case 0x1bc71cu: goto label_1bc71c;
        case 0x1bc720u: goto label_1bc720;
        case 0x1bc724u: goto label_1bc724;
        case 0x1bc728u: goto label_1bc728;
        case 0x1bc72cu: goto label_1bc72c;
        case 0x1bc730u: goto label_1bc730;
        case 0x1bc734u: goto label_1bc734;
        case 0x1bc738u: goto label_1bc738;
        case 0x1bc73cu: goto label_1bc73c;
        case 0x1bc740u: goto label_1bc740;
        case 0x1bc744u: goto label_1bc744;
        case 0x1bc748u: goto label_1bc748;
        case 0x1bc74cu: goto label_1bc74c;
        case 0x1bc750u: goto label_1bc750;
        case 0x1bc754u: goto label_1bc754;
        case 0x1bc758u: goto label_1bc758;
        case 0x1bc75cu: goto label_1bc75c;
        case 0x1bc760u: goto label_1bc760;
        case 0x1bc764u: goto label_1bc764;
        case 0x1bc768u: goto label_1bc768;
        case 0x1bc76cu: goto label_1bc76c;
        case 0x1bc770u: goto label_1bc770;
        case 0x1bc774u: goto label_1bc774;
        case 0x1bc778u: goto label_1bc778;
        case 0x1bc77cu: goto label_1bc77c;
        case 0x1bc780u: goto label_1bc780;
        case 0x1bc784u: goto label_1bc784;
        case 0x1bc788u: goto label_1bc788;
        case 0x1bc78cu: goto label_1bc78c;
        case 0x1bc790u: goto label_1bc790;
        case 0x1bc794u: goto label_1bc794;
        case 0x1bc798u: goto label_1bc798;
        case 0x1bc79cu: goto label_1bc79c;
        case 0x1bc7a0u: goto label_1bc7a0;
        case 0x1bc7a4u: goto label_1bc7a4;
        case 0x1bc7a8u: goto label_1bc7a8;
        case 0x1bc7acu: goto label_1bc7ac;
        case 0x1bc7b0u: goto label_1bc7b0;
        case 0x1bc7b4u: goto label_1bc7b4;
        case 0x1bc7b8u: goto label_1bc7b8;
        case 0x1bc7bcu: goto label_1bc7bc;
        case 0x1bc7c0u: goto label_1bc7c0;
        case 0x1bc7c4u: goto label_1bc7c4;
        case 0x1bc7c8u: goto label_1bc7c8;
        case 0x1bc7ccu: goto label_1bc7cc;
        case 0x1bc7d0u: goto label_1bc7d0;
        case 0x1bc7d4u: goto label_1bc7d4;
        case 0x1bc7d8u: goto label_1bc7d8;
        case 0x1bc7dcu: goto label_1bc7dc;
        case 0x1bc7e0u: goto label_1bc7e0;
        case 0x1bc7e4u: goto label_1bc7e4;
        case 0x1bc7e8u: goto label_1bc7e8;
        case 0x1bc7ecu: goto label_1bc7ec;
        case 0x1bc7f0u: goto label_1bc7f0;
        case 0x1bc7f4u: goto label_1bc7f4;
        case 0x1bc7f8u: goto label_1bc7f8;
        case 0x1bc7fcu: goto label_1bc7fc;
        case 0x1bc800u: goto label_1bc800;
        case 0x1bc804u: goto label_1bc804;
        case 0x1bc808u: goto label_1bc808;
        case 0x1bc80cu: goto label_1bc80c;
        case 0x1bc810u: goto label_1bc810;
        case 0x1bc814u: goto label_1bc814;
        case 0x1bc818u: goto label_1bc818;
        case 0x1bc81cu: goto label_1bc81c;
        case 0x1bc820u: goto label_1bc820;
        case 0x1bc824u: goto label_1bc824;
        case 0x1bc828u: goto label_1bc828;
        case 0x1bc82cu: goto label_1bc82c;
        case 0x1bc830u: goto label_1bc830;
        case 0x1bc834u: goto label_1bc834;
        case 0x1bc838u: goto label_1bc838;
        case 0x1bc83cu: goto label_1bc83c;
        case 0x1bc840u: goto label_1bc840;
        case 0x1bc844u: goto label_1bc844;
        case 0x1bc848u: goto label_1bc848;
        case 0x1bc84cu: goto label_1bc84c;
        case 0x1bc850u: goto label_1bc850;
        case 0x1bc854u: goto label_1bc854;
        case 0x1bc858u: goto label_1bc858;
        case 0x1bc85cu: goto label_1bc85c;
        case 0x1bc860u: goto label_1bc860;
        case 0x1bc864u: goto label_1bc864;
        case 0x1bc868u: goto label_1bc868;
        case 0x1bc86cu: goto label_1bc86c;
        case 0x1bc870u: goto label_1bc870;
        case 0x1bc874u: goto label_1bc874;
        case 0x1bc878u: goto label_1bc878;
        case 0x1bc87cu: goto label_1bc87c;
        case 0x1bc880u: goto label_1bc880;
        case 0x1bc884u: goto label_1bc884;
        case 0x1bc888u: goto label_1bc888;
        case 0x1bc88cu: goto label_1bc88c;
        case 0x1bc890u: goto label_1bc890;
        case 0x1bc894u: goto label_1bc894;
        case 0x1bc898u: goto label_1bc898;
        case 0x1bc89cu: goto label_1bc89c;
        case 0x1bc8a0u: goto label_1bc8a0;
        case 0x1bc8a4u: goto label_1bc8a4;
        case 0x1bc8a8u: goto label_1bc8a8;
        case 0x1bc8acu: goto label_1bc8ac;
        case 0x1bc8b0u: goto label_1bc8b0;
        case 0x1bc8b4u: goto label_1bc8b4;
        case 0x1bc8b8u: goto label_1bc8b8;
        case 0x1bc8bcu: goto label_1bc8bc;
        case 0x1bc8c0u: goto label_1bc8c0;
        case 0x1bc8c4u: goto label_1bc8c4;
        case 0x1bc8c8u: goto label_1bc8c8;
        case 0x1bc8ccu: goto label_1bc8cc;
        case 0x1bc8d0u: goto label_1bc8d0;
        case 0x1bc8d4u: goto label_1bc8d4;
        case 0x1bc8d8u: goto label_1bc8d8;
        case 0x1bc8dcu: goto label_1bc8dc;
        case 0x1bc8e0u: goto label_1bc8e0;
        case 0x1bc8e4u: goto label_1bc8e4;
        case 0x1bc8e8u: goto label_1bc8e8;
        case 0x1bc8ecu: goto label_1bc8ec;
        case 0x1bc8f0u: goto label_1bc8f0;
        case 0x1bc8f4u: goto label_1bc8f4;
        case 0x1bc8f8u: goto label_1bc8f8;
        case 0x1bc8fcu: goto label_1bc8fc;
        case 0x1bc900u: goto label_1bc900;
        case 0x1bc904u: goto label_1bc904;
        case 0x1bc908u: goto label_1bc908;
        case 0x1bc90cu: goto label_1bc90c;
        case 0x1bc910u: goto label_1bc910;
        case 0x1bc914u: goto label_1bc914;
        case 0x1bc918u: goto label_1bc918;
        case 0x1bc91cu: goto label_1bc91c;
        case 0x1bc920u: goto label_1bc920;
        case 0x1bc924u: goto label_1bc924;
        case 0x1bc928u: goto label_1bc928;
        case 0x1bc92cu: goto label_1bc92c;
        case 0x1bc930u: goto label_1bc930;
        case 0x1bc934u: goto label_1bc934;
        case 0x1bc938u: goto label_1bc938;
        case 0x1bc93cu: goto label_1bc93c;
        case 0x1bc940u: goto label_1bc940;
        case 0x1bc944u: goto label_1bc944;
        case 0x1bc948u: goto label_1bc948;
        case 0x1bc94cu: goto label_1bc94c;
        case 0x1bc950u: goto label_1bc950;
        case 0x1bc954u: goto label_1bc954;
        case 0x1bc958u: goto label_1bc958;
        case 0x1bc95cu: goto label_1bc95c;
        case 0x1bc960u: goto label_1bc960;
        case 0x1bc964u: goto label_1bc964;
        case 0x1bc968u: goto label_1bc968;
        case 0x1bc96cu: goto label_1bc96c;
        case 0x1bc970u: goto label_1bc970;
        case 0x1bc974u: goto label_1bc974;
        case 0x1bc978u: goto label_1bc978;
        case 0x1bc97cu: goto label_1bc97c;
        case 0x1bc980u: goto label_1bc980;
        case 0x1bc984u: goto label_1bc984;
        case 0x1bc988u: goto label_1bc988;
        case 0x1bc98cu: goto label_1bc98c;
        case 0x1bc990u: goto label_1bc990;
        case 0x1bc994u: goto label_1bc994;
        case 0x1bc998u: goto label_1bc998;
        case 0x1bc99cu: goto label_1bc99c;
        case 0x1bc9a0u: goto label_1bc9a0;
        case 0x1bc9a4u: goto label_1bc9a4;
        case 0x1bc9a8u: goto label_1bc9a8;
        case 0x1bc9acu: goto label_1bc9ac;
        case 0x1bc9b0u: goto label_1bc9b0;
        case 0x1bc9b4u: goto label_1bc9b4;
        case 0x1bc9b8u: goto label_1bc9b8;
        case 0x1bc9bcu: goto label_1bc9bc;
        case 0x1bc9c0u: goto label_1bc9c0;
        case 0x1bc9c4u: goto label_1bc9c4;
        case 0x1bc9c8u: goto label_1bc9c8;
        case 0x1bc9ccu: goto label_1bc9cc;
        case 0x1bc9d0u: goto label_1bc9d0;
        case 0x1bc9d4u: goto label_1bc9d4;
        case 0x1bc9d8u: goto label_1bc9d8;
        case 0x1bc9dcu: goto label_1bc9dc;
        case 0x1bc9e0u: goto label_1bc9e0;
        case 0x1bc9e4u: goto label_1bc9e4;
        case 0x1bc9e8u: goto label_1bc9e8;
        case 0x1bc9ecu: goto label_1bc9ec;
        case 0x1bc9f0u: goto label_1bc9f0;
        case 0x1bc9f4u: goto label_1bc9f4;
        case 0x1bc9f8u: goto label_1bc9f8;
        case 0x1bc9fcu: goto label_1bc9fc;
        case 0x1bca00u: goto label_1bca00;
        case 0x1bca04u: goto label_1bca04;
        case 0x1bca08u: goto label_1bca08;
        case 0x1bca0cu: goto label_1bca0c;
        case 0x1bca10u: goto label_1bca10;
        case 0x1bca14u: goto label_1bca14;
        case 0x1bca18u: goto label_1bca18;
        case 0x1bca1cu: goto label_1bca1c;
        case 0x1bca20u: goto label_1bca20;
        case 0x1bca24u: goto label_1bca24;
        case 0x1bca28u: goto label_1bca28;
        case 0x1bca2cu: goto label_1bca2c;
        case 0x1bca30u: goto label_1bca30;
        case 0x1bca34u: goto label_1bca34;
        case 0x1bca38u: goto label_1bca38;
        case 0x1bca3cu: goto label_1bca3c;
        case 0x1bca40u: goto label_1bca40;
        case 0x1bca44u: goto label_1bca44;
        case 0x1bca48u: goto label_1bca48;
        case 0x1bca4cu: goto label_1bca4c;
        case 0x1bca50u: goto label_1bca50;
        case 0x1bca54u: goto label_1bca54;
        case 0x1bca58u: goto label_1bca58;
        case 0x1bca5cu: goto label_1bca5c;
        case 0x1bca60u: goto label_1bca60;
        case 0x1bca64u: goto label_1bca64;
        case 0x1bca68u: goto label_1bca68;
        case 0x1bca6cu: goto label_1bca6c;
        case 0x1bca70u: goto label_1bca70;
        case 0x1bca74u: goto label_1bca74;
        case 0x1bca78u: goto label_1bca78;
        case 0x1bca7cu: goto label_1bca7c;
        case 0x1bca80u: goto label_1bca80;
        case 0x1bca84u: goto label_1bca84;
        case 0x1bca88u: goto label_1bca88;
        case 0x1bca8cu: goto label_1bca8c;
        case 0x1bca90u: goto label_1bca90;
        case 0x1bca94u: goto label_1bca94;
        case 0x1bca98u: goto label_1bca98;
        case 0x1bca9cu: goto label_1bca9c;
        case 0x1bcaa0u: goto label_1bcaa0;
        case 0x1bcaa4u: goto label_1bcaa4;
        case 0x1bcaa8u: goto label_1bcaa8;
        case 0x1bcaacu: goto label_1bcaac;
        case 0x1bcab0u: goto label_1bcab0;
        case 0x1bcab4u: goto label_1bcab4;
        case 0x1bcab8u: goto label_1bcab8;
        case 0x1bcabcu: goto label_1bcabc;
        case 0x1bcac0u: goto label_1bcac0;
        case 0x1bcac4u: goto label_1bcac4;
        case 0x1bcac8u: goto label_1bcac8;
        case 0x1bcaccu: goto label_1bcacc;
        case 0x1bcad0u: goto label_1bcad0;
        case 0x1bcad4u: goto label_1bcad4;
        case 0x1bcad8u: goto label_1bcad8;
        case 0x1bcadcu: goto label_1bcadc;
        case 0x1bcae0u: goto label_1bcae0;
        case 0x1bcae4u: goto label_1bcae4;
        case 0x1bcae8u: goto label_1bcae8;
        case 0x1bcaecu: goto label_1bcaec;
        case 0x1bcaf0u: goto label_1bcaf0;
        case 0x1bcaf4u: goto label_1bcaf4;
        case 0x1bcaf8u: goto label_1bcaf8;
        case 0x1bcafcu: goto label_1bcafc;
        case 0x1bcb00u: goto label_1bcb00;
        case 0x1bcb04u: goto label_1bcb04;
        case 0x1bcb08u: goto label_1bcb08;
        case 0x1bcb0cu: goto label_1bcb0c;
        case 0x1bcb10u: goto label_1bcb10;
        case 0x1bcb14u: goto label_1bcb14;
        case 0x1bcb18u: goto label_1bcb18;
        case 0x1bcb1cu: goto label_1bcb1c;
        case 0x1bcb20u: goto label_1bcb20;
        case 0x1bcb24u: goto label_1bcb24;
        case 0x1bcb28u: goto label_1bcb28;
        case 0x1bcb2cu: goto label_1bcb2c;
        case 0x1bcb30u: goto label_1bcb30;
        case 0x1bcb34u: goto label_1bcb34;
        case 0x1bcb38u: goto label_1bcb38;
        case 0x1bcb3cu: goto label_1bcb3c;
        case 0x1bcb40u: goto label_1bcb40;
        case 0x1bcb44u: goto label_1bcb44;
        case 0x1bcb48u: goto label_1bcb48;
        case 0x1bcb4cu: goto label_1bcb4c;
        case 0x1bcb50u: goto label_1bcb50;
        case 0x1bcb54u: goto label_1bcb54;
        case 0x1bcb58u: goto label_1bcb58;
        case 0x1bcb5cu: goto label_1bcb5c;
        case 0x1bcb60u: goto label_1bcb60;
        case 0x1bcb64u: goto label_1bcb64;
        case 0x1bcb68u: goto label_1bcb68;
        case 0x1bcb6cu: goto label_1bcb6c;
        case 0x1bcb70u: goto label_1bcb70;
        case 0x1bcb74u: goto label_1bcb74;
        case 0x1bcb78u: goto label_1bcb78;
        case 0x1bcb7cu: goto label_1bcb7c;
        case 0x1bcb80u: goto label_1bcb80;
        case 0x1bcb84u: goto label_1bcb84;
        case 0x1bcb88u: goto label_1bcb88;
        case 0x1bcb8cu: goto label_1bcb8c;
        case 0x1bcb90u: goto label_1bcb90;
        case 0x1bcb94u: goto label_1bcb94;
        case 0x1bcb98u: goto label_1bcb98;
        case 0x1bcb9cu: goto label_1bcb9c;
        case 0x1bcba0u: goto label_1bcba0;
        case 0x1bcba4u: goto label_1bcba4;
        case 0x1bcba8u: goto label_1bcba8;
        case 0x1bcbacu: goto label_1bcbac;
        case 0x1bcbb0u: goto label_1bcbb0;
        case 0x1bcbb4u: goto label_1bcbb4;
        case 0x1bcbb8u: goto label_1bcbb8;
        case 0x1bcbbcu: goto label_1bcbbc;
        case 0x1bcbc0u: goto label_1bcbc0;
        case 0x1bcbc4u: goto label_1bcbc4;
        case 0x1bcbc8u: goto label_1bcbc8;
        case 0x1bcbccu: goto label_1bcbcc;
        case 0x1bcbd0u: goto label_1bcbd0;
        case 0x1bcbd4u: goto label_1bcbd4;
        case 0x1bcbd8u: goto label_1bcbd8;
        case 0x1bcbdcu: goto label_1bcbdc;
        case 0x1bcbe0u: goto label_1bcbe0;
        case 0x1bcbe4u: goto label_1bcbe4;
        case 0x1bcbe8u: goto label_1bcbe8;
        case 0x1bcbecu: goto label_1bcbec;
        case 0x1bcbf0u: goto label_1bcbf0;
        case 0x1bcbf4u: goto label_1bcbf4;
        case 0x1bcbf8u: goto label_1bcbf8;
        case 0x1bcbfcu: goto label_1bcbfc;
        case 0x1bcc00u: goto label_1bcc00;
        case 0x1bcc04u: goto label_1bcc04;
        case 0x1bcc08u: goto label_1bcc08;
        case 0x1bcc0cu: goto label_1bcc0c;
        case 0x1bcc10u: goto label_1bcc10;
        case 0x1bcc14u: goto label_1bcc14;
        case 0x1bcc18u: goto label_1bcc18;
        case 0x1bcc1cu: goto label_1bcc1c;
        case 0x1bcc20u: goto label_1bcc20;
        case 0x1bcc24u: goto label_1bcc24;
        case 0x1bcc28u: goto label_1bcc28;
        case 0x1bcc2cu: goto label_1bcc2c;
        case 0x1bcc30u: goto label_1bcc30;
        case 0x1bcc34u: goto label_1bcc34;
        case 0x1bcc38u: goto label_1bcc38;
        case 0x1bcc3cu: goto label_1bcc3c;
        case 0x1bcc40u: goto label_1bcc40;
        case 0x1bcc44u: goto label_1bcc44;
        case 0x1bcc48u: goto label_1bcc48;
        case 0x1bcc4cu: goto label_1bcc4c;
        case 0x1bcc50u: goto label_1bcc50;
        case 0x1bcc54u: goto label_1bcc54;
        case 0x1bcc58u: goto label_1bcc58;
        case 0x1bcc5cu: goto label_1bcc5c;
        case 0x1bcc60u: goto label_1bcc60;
        case 0x1bcc64u: goto label_1bcc64;
        case 0x1bcc68u: goto label_1bcc68;
        case 0x1bcc6cu: goto label_1bcc6c;
        case 0x1bcc70u: goto label_1bcc70;
        case 0x1bcc74u: goto label_1bcc74;
        case 0x1bcc78u: goto label_1bcc78;
        case 0x1bcc7cu: goto label_1bcc7c;
        case 0x1bcc80u: goto label_1bcc80;
        case 0x1bcc84u: goto label_1bcc84;
        case 0x1bcc88u: goto label_1bcc88;
        case 0x1bcc8cu: goto label_1bcc8c;
        case 0x1bcc90u: goto label_1bcc90;
        case 0x1bcc94u: goto label_1bcc94;
        case 0x1bcc98u: goto label_1bcc98;
        case 0x1bcc9cu: goto label_1bcc9c;
        case 0x1bcca0u: goto label_1bcca0;
        case 0x1bcca4u: goto label_1bcca4;
        case 0x1bcca8u: goto label_1bcca8;
        case 0x1bccacu: goto label_1bccac;
        case 0x1bccb0u: goto label_1bccb0;
        case 0x1bccb4u: goto label_1bccb4;
        case 0x1bccb8u: goto label_1bccb8;
        case 0x1bccbcu: goto label_1bccbc;
        case 0x1bccc0u: goto label_1bccc0;
        case 0x1bccc4u: goto label_1bccc4;
        case 0x1bccc8u: goto label_1bccc8;
        case 0x1bccccu: goto label_1bcccc;
        case 0x1bccd0u: goto label_1bccd0;
        case 0x1bccd4u: goto label_1bccd4;
        case 0x1bccd8u: goto label_1bccd8;
        case 0x1bccdcu: goto label_1bccdc;
        case 0x1bcce0u: goto label_1bcce0;
        case 0x1bcce4u: goto label_1bcce4;
        case 0x1bcce8u: goto label_1bcce8;
        case 0x1bccecu: goto label_1bccec;
        case 0x1bccf0u: goto label_1bccf0;
        case 0x1bccf4u: goto label_1bccf4;
        case 0x1bccf8u: goto label_1bccf8;
        case 0x1bccfcu: goto label_1bccfc;
        case 0x1bcd00u: goto label_1bcd00;
        case 0x1bcd04u: goto label_1bcd04;
        case 0x1bcd08u: goto label_1bcd08;
        case 0x1bcd0cu: goto label_1bcd0c;
        case 0x1bcd10u: goto label_1bcd10;
        case 0x1bcd14u: goto label_1bcd14;
        case 0x1bcd18u: goto label_1bcd18;
        case 0x1bcd1cu: goto label_1bcd1c;
        case 0x1bcd20u: goto label_1bcd20;
        case 0x1bcd24u: goto label_1bcd24;
        case 0x1bcd28u: goto label_1bcd28;
        case 0x1bcd2cu: goto label_1bcd2c;
        case 0x1bcd30u: goto label_1bcd30;
        case 0x1bcd34u: goto label_1bcd34;
        case 0x1bcd38u: goto label_1bcd38;
        case 0x1bcd3cu: goto label_1bcd3c;
        case 0x1bcd40u: goto label_1bcd40;
        case 0x1bcd44u: goto label_1bcd44;
        case 0x1bcd48u: goto label_1bcd48;
        case 0x1bcd4cu: goto label_1bcd4c;
        case 0x1bcd50u: goto label_1bcd50;
        case 0x1bcd54u: goto label_1bcd54;
        case 0x1bcd58u: goto label_1bcd58;
        case 0x1bcd5cu: goto label_1bcd5c;
        case 0x1bcd60u: goto label_1bcd60;
        case 0x1bcd64u: goto label_1bcd64;
        case 0x1bcd68u: goto label_1bcd68;
        case 0x1bcd6cu: goto label_1bcd6c;
        case 0x1bcd70u: goto label_1bcd70;
        case 0x1bcd74u: goto label_1bcd74;
        case 0x1bcd78u: goto label_1bcd78;
        case 0x1bcd7cu: goto label_1bcd7c;
        case 0x1bcd80u: goto label_1bcd80;
        case 0x1bcd84u: goto label_1bcd84;
        case 0x1bcd88u: goto label_1bcd88;
        case 0x1bcd8cu: goto label_1bcd8c;
        case 0x1bcd90u: goto label_1bcd90;
        case 0x1bcd94u: goto label_1bcd94;
        case 0x1bcd98u: goto label_1bcd98;
        case 0x1bcd9cu: goto label_1bcd9c;
        case 0x1bcda0u: goto label_1bcda0;
        case 0x1bcda4u: goto label_1bcda4;
        case 0x1bcda8u: goto label_1bcda8;
        case 0x1bcdacu: goto label_1bcdac;
        case 0x1bcdb0u: goto label_1bcdb0;
        case 0x1bcdb4u: goto label_1bcdb4;
        case 0x1bcdb8u: goto label_1bcdb8;
        case 0x1bcdbcu: goto label_1bcdbc;
        case 0x1bcdc0u: goto label_1bcdc0;
        case 0x1bcdc4u: goto label_1bcdc4;
        case 0x1bcdc8u: goto label_1bcdc8;
        case 0x1bcdccu: goto label_1bcdcc;
        case 0x1bcdd0u: goto label_1bcdd0;
        case 0x1bcdd4u: goto label_1bcdd4;
        case 0x1bcdd8u: goto label_1bcdd8;
        case 0x1bcddcu: goto label_1bcddc;
        case 0x1bcde0u: goto label_1bcde0;
        case 0x1bcde4u: goto label_1bcde4;
        case 0x1bcde8u: goto label_1bcde8;
        case 0x1bcdecu: goto label_1bcdec;
        case 0x1bcdf0u: goto label_1bcdf0;
        case 0x1bcdf4u: goto label_1bcdf4;
        case 0x1bcdf8u: goto label_1bcdf8;
        case 0x1bcdfcu: goto label_1bcdfc;
        case 0x1bce00u: goto label_1bce00;
        case 0x1bce04u: goto label_1bce04;
        case 0x1bce08u: goto label_1bce08;
        case 0x1bce0cu: goto label_1bce0c;
        case 0x1bce10u: goto label_1bce10;
        case 0x1bce14u: goto label_1bce14;
        case 0x1bce18u: goto label_1bce18;
        case 0x1bce1cu: goto label_1bce1c;
        case 0x1bce20u: goto label_1bce20;
        case 0x1bce24u: goto label_1bce24;
        case 0x1bce28u: goto label_1bce28;
        case 0x1bce2cu: goto label_1bce2c;
        case 0x1bce30u: goto label_1bce30;
        case 0x1bce34u: goto label_1bce34;
        case 0x1bce38u: goto label_1bce38;
        case 0x1bce3cu: goto label_1bce3c;
        case 0x1bce40u: goto label_1bce40;
        case 0x1bce44u: goto label_1bce44;
        case 0x1bce48u: goto label_1bce48;
        case 0x1bce4cu: goto label_1bce4c;
        case 0x1bce50u: goto label_1bce50;
        case 0x1bce54u: goto label_1bce54;
        case 0x1bce58u: goto label_1bce58;
        case 0x1bce5cu: goto label_1bce5c;
        case 0x1bce60u: goto label_1bce60;
        case 0x1bce64u: goto label_1bce64;
        case 0x1bce68u: goto label_1bce68;
        case 0x1bce6cu: goto label_1bce6c;
        case 0x1bce70u: goto label_1bce70;
        case 0x1bce74u: goto label_1bce74;
        case 0x1bce78u: goto label_1bce78;
        case 0x1bce7cu: goto label_1bce7c;
        case 0x1bce80u: goto label_1bce80;
        case 0x1bce84u: goto label_1bce84;
        case 0x1bce88u: goto label_1bce88;
        case 0x1bce8cu: goto label_1bce8c;
        case 0x1bce90u: goto label_1bce90;
        case 0x1bce94u: goto label_1bce94;
        case 0x1bce98u: goto label_1bce98;
        case 0x1bce9cu: goto label_1bce9c;
        case 0x1bcea0u: goto label_1bcea0;
        case 0x1bcea4u: goto label_1bcea4;
        case 0x1bcea8u: goto label_1bcea8;
        case 0x1bceacu: goto label_1bceac;
        case 0x1bceb0u: goto label_1bceb0;
        case 0x1bceb4u: goto label_1bceb4;
        case 0x1bceb8u: goto label_1bceb8;
        case 0x1bcebcu: goto label_1bcebc;
        case 0x1bcec0u: goto label_1bcec0;
        case 0x1bcec4u: goto label_1bcec4;
        case 0x1bcec8u: goto label_1bcec8;
        case 0x1bceccu: goto label_1bcecc;
        case 0x1bced0u: goto label_1bced0;
        case 0x1bced4u: goto label_1bced4;
        case 0x1bced8u: goto label_1bced8;
        case 0x1bcedcu: goto label_1bcedc;
        case 0x1bcee0u: goto label_1bcee0;
        case 0x1bcee4u: goto label_1bcee4;
        case 0x1bcee8u: goto label_1bcee8;
        case 0x1bceecu: goto label_1bceec;
        case 0x1bcef0u: goto label_1bcef0;
        case 0x1bcef4u: goto label_1bcef4;
        case 0x1bcef8u: goto label_1bcef8;
        case 0x1bcefcu: goto label_1bcefc;
        case 0x1bcf00u: goto label_1bcf00;
        case 0x1bcf04u: goto label_1bcf04;
        case 0x1bcf08u: goto label_1bcf08;
        case 0x1bcf0cu: goto label_1bcf0c;
        case 0x1bcf10u: goto label_1bcf10;
        case 0x1bcf14u: goto label_1bcf14;
        case 0x1bcf18u: goto label_1bcf18;
        case 0x1bcf1cu: goto label_1bcf1c;
        case 0x1bcf20u: goto label_1bcf20;
        case 0x1bcf24u: goto label_1bcf24;
        case 0x1bcf28u: goto label_1bcf28;
        case 0x1bcf2cu: goto label_1bcf2c;
        case 0x1bcf30u: goto label_1bcf30;
        case 0x1bcf34u: goto label_1bcf34;
        case 0x1bcf38u: goto label_1bcf38;
        case 0x1bcf3cu: goto label_1bcf3c;
        case 0x1bcf40u: goto label_1bcf40;
        case 0x1bcf44u: goto label_1bcf44;
        case 0x1bcf48u: goto label_1bcf48;
        case 0x1bcf4cu: goto label_1bcf4c;
        case 0x1bcf50u: goto label_1bcf50;
        case 0x1bcf54u: goto label_1bcf54;
        case 0x1bcf58u: goto label_1bcf58;
        case 0x1bcf5cu: goto label_1bcf5c;
        case 0x1bcf60u: goto label_1bcf60;
        case 0x1bcf64u: goto label_1bcf64;
        case 0x1bcf68u: goto label_1bcf68;
        case 0x1bcf6cu: goto label_1bcf6c;
        case 0x1bcf70u: goto label_1bcf70;
        case 0x1bcf74u: goto label_1bcf74;
        case 0x1bcf78u: goto label_1bcf78;
        case 0x1bcf7cu: goto label_1bcf7c;
        case 0x1bcf80u: goto label_1bcf80;
        case 0x1bcf84u: goto label_1bcf84;
        case 0x1bcf88u: goto label_1bcf88;
        case 0x1bcf8cu: goto label_1bcf8c;
        case 0x1bcf90u: goto label_1bcf90;
        case 0x1bcf94u: goto label_1bcf94;
        case 0x1bcf98u: goto label_1bcf98;
        case 0x1bcf9cu: goto label_1bcf9c;
        case 0x1bcfa0u: goto label_1bcfa0;
        case 0x1bcfa4u: goto label_1bcfa4;
        case 0x1bcfa8u: goto label_1bcfa8;
        case 0x1bcfacu: goto label_1bcfac;
        case 0x1bcfb0u: goto label_1bcfb0;
        case 0x1bcfb4u: goto label_1bcfb4;
        case 0x1bcfb8u: goto label_1bcfb8;
        case 0x1bcfbcu: goto label_1bcfbc;
        case 0x1bcfc0u: goto label_1bcfc0;
        case 0x1bcfc4u: goto label_1bcfc4;
        case 0x1bcfc8u: goto label_1bcfc8;
        case 0x1bcfccu: goto label_1bcfcc;
        case 0x1bcfd0u: goto label_1bcfd0;
        case 0x1bcfd4u: goto label_1bcfd4;
        case 0x1bcfd8u: goto label_1bcfd8;
        case 0x1bcfdcu: goto label_1bcfdc;
        case 0x1bcfe0u: goto label_1bcfe0;
        case 0x1bcfe4u: goto label_1bcfe4;
        case 0x1bcfe8u: goto label_1bcfe8;
        case 0x1bcfecu: goto label_1bcfec;
        case 0x1bcff0u: goto label_1bcff0;
        case 0x1bcff4u: goto label_1bcff4;
        case 0x1bcff8u: goto label_1bcff8;
        case 0x1bcffcu: goto label_1bcffc;
        case 0x1bd000u: goto label_1bd000;
        case 0x1bd004u: goto label_1bd004;
        case 0x1bd008u: goto label_1bd008;
        case 0x1bd00cu: goto label_1bd00c;
        case 0x1bd010u: goto label_1bd010;
        case 0x1bd014u: goto label_1bd014;
        case 0x1bd018u: goto label_1bd018;
        case 0x1bd01cu: goto label_1bd01c;
        case 0x1bd020u: goto label_1bd020;
        case 0x1bd024u: goto label_1bd024;
        case 0x1bd028u: goto label_1bd028;
        case 0x1bd02cu: goto label_1bd02c;
        case 0x1bd030u: goto label_1bd030;
        case 0x1bd034u: goto label_1bd034;
        case 0x1bd038u: goto label_1bd038;
        case 0x1bd03cu: goto label_1bd03c;
        case 0x1bd040u: goto label_1bd040;
        case 0x1bd044u: goto label_1bd044;
        case 0x1bd048u: goto label_1bd048;
        case 0x1bd04cu: goto label_1bd04c;
        case 0x1bd050u: goto label_1bd050;
        case 0x1bd054u: goto label_1bd054;
        case 0x1bd058u: goto label_1bd058;
        case 0x1bd05cu: goto label_1bd05c;
        case 0x1bd060u: goto label_1bd060;
        case 0x1bd064u: goto label_1bd064;
        case 0x1bd068u: goto label_1bd068;
        case 0x1bd06cu: goto label_1bd06c;
        case 0x1bd070u: goto label_1bd070;
        case 0x1bd074u: goto label_1bd074;
        case 0x1bd078u: goto label_1bd078;
        case 0x1bd07cu: goto label_1bd07c;
        case 0x1bd080u: goto label_1bd080;
        case 0x1bd084u: goto label_1bd084;
        case 0x1bd088u: goto label_1bd088;
        case 0x1bd08cu: goto label_1bd08c;
        case 0x1bd090u: goto label_1bd090;
        case 0x1bd094u: goto label_1bd094;
        case 0x1bd098u: goto label_1bd098;
        case 0x1bd09cu: goto label_1bd09c;
        case 0x1bd0a0u: goto label_1bd0a0;
        case 0x1bd0a4u: goto label_1bd0a4;
        case 0x1bd0a8u: goto label_1bd0a8;
        case 0x1bd0acu: goto label_1bd0ac;
        case 0x1bd0b0u: goto label_1bd0b0;
        case 0x1bd0b4u: goto label_1bd0b4;
        case 0x1bd0b8u: goto label_1bd0b8;
        case 0x1bd0bcu: goto label_1bd0bc;
        case 0x1bd0c0u: goto label_1bd0c0;
        case 0x1bd0c4u: goto label_1bd0c4;
        case 0x1bd0c8u: goto label_1bd0c8;
        case 0x1bd0ccu: goto label_1bd0cc;
        case 0x1bd0d0u: goto label_1bd0d0;
        case 0x1bd0d4u: goto label_1bd0d4;
        case 0x1bd0d8u: goto label_1bd0d8;
        case 0x1bd0dcu: goto label_1bd0dc;
        case 0x1bd0e0u: goto label_1bd0e0;
        case 0x1bd0e4u: goto label_1bd0e4;
        case 0x1bd0e8u: goto label_1bd0e8;
        case 0x1bd0ecu: goto label_1bd0ec;
        case 0x1bd0f0u: goto label_1bd0f0;
        case 0x1bd0f4u: goto label_1bd0f4;
        case 0x1bd0f8u: goto label_1bd0f8;
        case 0x1bd0fcu: goto label_1bd0fc;
        case 0x1bd100u: goto label_1bd100;
        case 0x1bd104u: goto label_1bd104;
        case 0x1bd108u: goto label_1bd108;
        case 0x1bd10cu: goto label_1bd10c;
        case 0x1bd110u: goto label_1bd110;
        case 0x1bd114u: goto label_1bd114;
        case 0x1bd118u: goto label_1bd118;
        case 0x1bd11cu: goto label_1bd11c;
        case 0x1bd120u: goto label_1bd120;
        case 0x1bd124u: goto label_1bd124;
        case 0x1bd128u: goto label_1bd128;
        case 0x1bd12cu: goto label_1bd12c;
        case 0x1bd130u: goto label_1bd130;
        case 0x1bd134u: goto label_1bd134;
        case 0x1bd138u: goto label_1bd138;
        case 0x1bd13cu: goto label_1bd13c;
        case 0x1bd140u: goto label_1bd140;
        case 0x1bd144u: goto label_1bd144;
        case 0x1bd148u: goto label_1bd148;
        case 0x1bd14cu: goto label_1bd14c;
        case 0x1bd150u: goto label_1bd150;
        case 0x1bd154u: goto label_1bd154;
        case 0x1bd158u: goto label_1bd158;
        case 0x1bd15cu: goto label_1bd15c;
        case 0x1bd160u: goto label_1bd160;
        case 0x1bd164u: goto label_1bd164;
        case 0x1bd168u: goto label_1bd168;
        case 0x1bd16cu: goto label_1bd16c;
        case 0x1bd170u: goto label_1bd170;
        case 0x1bd174u: goto label_1bd174;
        case 0x1bd178u: goto label_1bd178;
        case 0x1bd17cu: goto label_1bd17c;
        case 0x1bd180u: goto label_1bd180;
        case 0x1bd184u: goto label_1bd184;
        case 0x1bd188u: goto label_1bd188;
        case 0x1bd18cu: goto label_1bd18c;
        case 0x1bd190u: goto label_1bd190;
        case 0x1bd194u: goto label_1bd194;
        case 0x1bd198u: goto label_1bd198;
        case 0x1bd19cu: goto label_1bd19c;
        case 0x1bd1a0u: goto label_1bd1a0;
        case 0x1bd1a4u: goto label_1bd1a4;
        case 0x1bd1a8u: goto label_1bd1a8;
        default: break;
    }

    ctx->pc = 0x1bbbc0u;

label_1bbbc0:
    // 0x1bbbc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1bbbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1bbbc4:
    // 0x1bbbc4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x1bbbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
label_1bbbc8:
    // 0x1bbbc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bbbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1bbbcc:
    // 0x1bbbcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bbbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1bbbd0:
    // 0x1bbbd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bbbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bbbd4:
    // 0x1bbbd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bbbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1bbbd8:
    // 0x1bbbd8: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x1bbbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
label_1bbbdc:
    // 0x1bbbdc: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1bbbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_1bbbe0:
    // 0x1bbbe0: 0x24910080  addiu       $s1, $a0, 0x80
    ctx->pc = 0x1bbbe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_1bbbe4:
    // 0x1bbbe4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1bbbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_1bbbe8:
    // 0x1bbbe8: 0x2473ec70  addiu       $s3, $v1, -0x1390
    ctx->pc = 0x1bbbe8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962288));
label_1bbbec:
    // 0x1bbbec: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bbbecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbbf0:
    // 0x1bbbf0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1bbbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1bbbf4:
    // 0x1bbbf4: 0x3c0397ff  lui         $v1, 0x97FF
    ctx->pc = 0x1bbbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38911 << 16));
label_1bbbf8:
    // 0x1bbbf8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1bbbf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1bbbfc:
    // 0x1bbbfc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1bbbfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1bbc00:
    // 0x1bbc00: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1bbc00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_1bbc04:
    // 0x1bbc04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bbc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bbc08:
    // 0x1bbc08: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bbc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbc0c:
    // 0x1bbc0c: 0xa4651278  sh          $a1, 0x1278($v1)
    ctx->pc = 0x1bbc0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 5));
label_1bbc10:
    // 0x1bbc10: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bbc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbc14:
    // 0x1bbc14: 0x90640003  lbu         $a0, 0x3($v1)
    ctx->pc = 0x1bbc14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_1bbc18:
    // 0x1bbc18: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x1bbc18u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1bbc1c:
    // 0x1bbc1c: 0x2e01000a  sltiu       $at, $s0, 0xA
    ctx->pc = 0x1bbc1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1bbc20:
    // 0x1bbc20: 0x10200542  beqz        $at, . + 4 + (0x542 << 2)
label_1bbc24:
    if (ctx->pc == 0x1BBC24u) {
        ctx->pc = 0x1BBC28u;
        goto label_1bbc28;
    }
    ctx->pc = 0x1BBC20u;
    {
        const bool branch_taken_0x1bbc20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbc20) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BBC28u;
label_1bbc28:
    // 0x1bbc28: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1bbc28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_1bbc2c:
    // 0x1bbc2c: 0x2464f390  addiu       $a0, $v1, -0xC70
    ctx->pc = 0x1bbc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964112));
label_1bbc30:
    // 0x1bbc30: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1bbc30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1bbc34:
    // 0x1bbc34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bbc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bbc38:
    // 0x1bbc38: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1bbc38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bbc3c:
    // 0x1bbc3c: 0xa00008  jr          $a1
label_1bbc40:
    if (ctx->pc == 0x1BBC40u) {
        ctx->pc = 0x1BBC44u;
        goto label_1bbc44;
    }
    ctx->pc = 0x1BBC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBC3Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BBC44u;
label_1bbc44:
    // 0x1bbc44: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1bbc44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1bbc48:
    // 0x1bbc48: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bbc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbc4c:
    // 0x1bbc4c: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x1bbc4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_1bbc50:
    // 0x1bbc50: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1bbc50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbc54:
    // 0x1bbc54: 0xace013f0  sw          $zero, 0x13F0($a3)
    ctx->pc = 0x1bbc54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 5104), GPR_U32(ctx, 0));
label_1bbc58:
    // 0x1bbc58: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bbc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbc5c:
    // 0x1bbc5c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bbc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbc60:
    // 0x1bbc60: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1bbc60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1bbc64:
    // 0x1bbc64: 0x24060a50  addiu       $a2, $zero, 0xA50
    ctx->pc = 0x1bbc64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2640));
label_1bbc68:
    // 0x1bbc68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bbc68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bbc6c:
    // 0x1bbc6c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bbc6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1bbc70:
    // 0x1bbc70: 0xc0965d0  jal         func_259740
label_1bbc74:
    if (ctx->pc == 0x1BBC74u) {
        ctx->pc = 0x1BBC78u;
        goto label_1bbc78;
    }
    ctx->pc = 0x1BBC70u;
    SET_GPR_U32(ctx, 31, 0x1BBC78u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BBC70u, 0x1BBC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBC78u;
label_1bbc78:
    // 0x1bbc78: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1bbc78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bbc7c:
    // 0x1bbc7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bbc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bbc80:
    // 0x1bbc80: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bbc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbc84:
    // 0x1bbc84: 0xac641b6c  sw          $a0, 0x1B6C($v1)
    ctx->pc = 0x1bbc84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7020), GPR_U32(ctx, 4));
label_1bbc88:
    // 0x1bbc88: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bbc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbc8c:
    // 0x1bbc8c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1bbc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1bbc90:
    // 0x1bbc90: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1bbc90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_1bbc94:
    // 0x1bbc94: 0x432024  and         $a0, $v0, $v1
    ctx->pc = 0x1bbc94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1bbc98:
    // 0x1bbc98: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1bbc9c:
    if (ctx->pc == 0x1BBC9Cu) {
        ctx->pc = 0x1BBCA0u;
        goto label_1bbca0;
    }
    ctx->pc = 0x1BBC98u;
    {
        const bool branch_taken_0x1bbc98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbc98) {
            ctx->pc = 0x1BBCA8u;
            goto label_1bbca8;
        }
    }
    ctx->pc = 0x1BBCA0u;
label_1bbca0:
    // 0x1bbca0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bbca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbca4:
    // 0x1bbca4: 0xac601b6c  sw          $zero, 0x1B6C($v1)
    ctx->pc = 0x1bbca4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7020), GPR_U32(ctx, 0));
label_1bbca8:
    // 0x1bbca8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bbca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbcac:
    // 0x1bbcac: 0x904413a6  lbu         $a0, 0x13A6($v0)
    ctx->pc = 0x1bbcacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5030)));
label_1bbcb0:
    // 0x1bbcb0: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1bbcb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1bbcb4:
    // 0x1bbcb4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1bbcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bbcb8:
    // 0x1bbcb8: 0x10a20018  beq         $a1, $v0, . + 4 + (0x18 << 2)
label_1bbcbc:
    if (ctx->pc == 0x1BBCBCu) {
        ctx->pc = 0x1BBCC0u;
        goto label_1bbcc0;
    }
    ctx->pc = 0x1BBCB8u;
    {
        const bool branch_taken_0x1bbcb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bbcb8) {
            ctx->pc = 0x1BBD1Cu;
            goto label_1bbd1c;
        }
    }
    ctx->pc = 0x1BBCC0u;
label_1bbcc0:
    // 0x1bbcc0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bbcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bbcc4:
    // 0x1bbcc4: 0x10a40015  beq         $a1, $a0, . + 4 + (0x15 << 2)
label_1bbcc8:
    if (ctx->pc == 0x1BBCC8u) {
        ctx->pc = 0x1BBCCCu;
        goto label_1bbccc;
    }
    ctx->pc = 0x1BBCC4u;
    {
        const bool branch_taken_0x1bbcc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1bbcc4) {
            ctx->pc = 0x1BBD1Cu;
            goto label_1bbd1c;
        }
    }
    ctx->pc = 0x1BBCCCu;
label_1bbccc:
    // 0x1bbccc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bbcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bbcd0:
    // 0x1bbcd0: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
label_1bbcd4:
    if (ctx->pc == 0x1BBCD4u) {
        ctx->pc = 0x1BBCD8u;
        goto label_1bbcd8;
    }
    ctx->pc = 0x1BBCD0u;
    {
        const bool branch_taken_0x1bbcd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bbcd0) {
            ctx->pc = 0x1BBCE8u;
            goto label_1bbce8;
        }
    }
    ctx->pc = 0x1BBCD8u;
label_1bbcd8:
    // 0x1bbcd8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1bbcdc:
    if (ctx->pc == 0x1BBCDCu) {
        ctx->pc = 0x1BBCE0u;
        goto label_1bbce0;
    }
    ctx->pc = 0x1BBCD8u;
    {
        const bool branch_taken_0x1bbcd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbcd8) {
            ctx->pc = 0x1BBCE8u;
            goto label_1bbce8;
        }
    }
    ctx->pc = 0x1BBCE0u;
label_1bbce0:
    // 0x1bbce0: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1bbce4:
    if (ctx->pc == 0x1BBCE4u) {
        ctx->pc = 0x1BBCE8u;
        goto label_1bbce8;
    }
    ctx->pc = 0x1BBCE0u;
    {
        const bool branch_taken_0x1bbce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbce0) {
            ctx->pc = 0x1BBD50u;
            goto label_1bbd50;
        }
    }
    ctx->pc = 0x1BBCE8u;
label_1bbce8:
    // 0x1bbce8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bbce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbcec:
    // 0x1bbcec: 0x906313a4  lbu         $v1, 0x13A4($v1)
    ctx->pc = 0x1bbcecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5028)));
label_1bbcf0:
    // 0x1bbcf0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1bbcf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1bbcf4:
    // 0x1bbcf4: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x1bbcf4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_1bbcf8:
    // 0x1bbcf8: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
label_1bbcfc:
    if (ctx->pc == 0x1BBCFCu) {
        ctx->pc = 0x1BBD00u;
        goto label_1bbd00;
    }
    ctx->pc = 0x1BBCF8u;
    {
        const bool branch_taken_0x1bbcf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bbcf8) {
            ctx->pc = 0x1BBD50u;
            goto label_1bbd50;
        }
    }
    ctx->pc = 0x1BBD00u;
label_1bbd00:
    // 0x1bbd00: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bbd00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbd04:
    // 0x1bbd04: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1bbd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1bbd08:
    // 0x1bbd08: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1bbd08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_1bbd0c:
    // 0x1bbd0c: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x1bbd0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1bbd10:
    // 0x1bbd10: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x1bbd10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
label_1bbd14:
    // 0x1bbd14: 0x1000000e  b           . + 4 + (0xE << 2)
label_1bbd18:
    if (ctx->pc == 0x1BBD18u) {
        ctx->pc = 0x1BBD1Cu;
        goto label_1bbd1c;
    }
    ctx->pc = 0x1BBD14u;
    {
        const bool branch_taken_0x1bbd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbd14) {
            ctx->pc = 0x1BBD50u;
            goto label_1bbd50;
        }
    }
    ctx->pc = 0x1BBD1Cu;
label_1bbd1c:
    // 0x1bbd1c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bbd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbd20:
    // 0x1bbd20: 0x906313a5  lbu         $v1, 0x13A5($v1)
    ctx->pc = 0x1bbd20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5029)));
label_1bbd24:
    // 0x1bbd24: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bbd24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1bbd28:
    // 0x1bbd28: 0x28660003  slti        $a2, $v1, 0x3
    ctx->pc = 0x1bbd28u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_1bbd2c:
    // 0x1bbd2c: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
label_1bbd30:
    if (ctx->pc == 0x1BBD30u) {
        ctx->pc = 0x1BBD34u;
        goto label_1bbd34;
    }
    ctx->pc = 0x1BBD2Cu;
    {
        const bool branch_taken_0x1bbd2c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bbd2c) {
            ctx->pc = 0x1BBD50u;
            goto label_1bbd50;
        }
    }
    ctx->pc = 0x1BBD34u;
label_1bbd34:
    // 0x1bbd34: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bbd34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbd38:
    // 0x1bbd38: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1bbd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1bbd3c:
    // 0x1bbd3c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1bbd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_1bbd40:
    // 0x1bbd40: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x1bbd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1bbd44:
    // 0x1bbd44: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1bbd44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_1bbd48:
    // 0x1bbd48: 0xc0c51c4  jal         func_314710
label_1bbd4c:
    if (ctx->pc == 0x1BBD4Cu) {
        ctx->pc = 0x1BBD50u;
        goto label_1bbd50;
    }
    ctx->pc = 0x1BBD48u;
    SET_GPR_U32(ctx, 31, 0x1BBD50u);
    ctx->pc = 0x314710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314710u, 0x1BBD48u, 0x1BBD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBD50u;
label_1bbd50:
    // 0x1bbd50: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x1bbd50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbd54:
    // 0x1bbd54: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1bbd54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1bbd58:
    // 0x1bbd58: 0x3c0397ff  lui         $v1, 0x97FF
    ctx->pc = 0x1bbd58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38911 << 16));
label_1bbd5c:
    // 0x1bbd5c: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1bbd5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1bbd60:
    // 0x1bbd60: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1bbd60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1bbd64:
    // 0x1bbd64: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x1bbd64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_1bbd68:
    // 0x1bbd68: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bbd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbd6c:
    // 0x1bbd6c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bbd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbd70:
    // 0x1bbd70: 0xc48c137c  lwc1        $f12, 0x137C($a0)
    ctx->pc = 0x1bbd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bbd74:
    // 0x1bbd74: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x1bbd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1bbd78:
    // 0x1bbd78: 0xc058f20  jal         func_163C80
label_1bbd7c:
    if (ctx->pc == 0x1BBD7Cu) {
        ctx->pc = 0x1BBD80u;
        goto label_1bbd80;
    }
    ctx->pc = 0x1BBD78u;
    SET_GPR_U32(ctx, 31, 0x1BBD80u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1BBD78u, 0x1BBD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBD80u;
label_1bbd80:
    // 0x1bbd80: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1bbd80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1bbd84:
    // 0x1bbd84: 0xc7ac0054  lwc1        $f12, 0x54($sp)
    ctx->pc = 0x1bbd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bbd88:
    // 0x1bbd88: 0xc05733c  jal         func_15CCF0
label_1bbd8c:
    if (ctx->pc == 0x1BBD8Cu) {
        ctx->pc = 0x1BBD90u;
        goto label_1bbd90;
    }
    ctx->pc = 0x1BBD88u;
    SET_GPR_U32(ctx, 31, 0x1BBD90u);
    ctx->pc = 0x15CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CCF0u, 0x1BBD88u, 0x1BBD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBD90u;
label_1bbd90:
    // 0x1bbd90: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bbd90u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bbd94:
    // 0x1bbd94: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bbd94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbd98:
    // 0x1bbd98: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x1bbd98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_1bbd9c:
    // 0x1bbd9c: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x1bbd9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1bbda0:
    // 0x1bbda0: 0xa0a60003  sb          $a2, 0x3($a1)
    ctx->pc = 0x1bbda0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 6));
label_1bbda4:
    // 0x1bbda4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bbda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbda8:
    // 0x1bbda8: 0x8c831b6c  lw          $v1, 0x1B6C($a0)
    ctx->pc = 0x1bbda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7020)));
label_1bbdac:
    // 0x1bbdac: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1bbdb0:
    if (ctx->pc == 0x1BBDB0u) {
        ctx->pc = 0x1BBDB4u;
        goto label_1bbdb4;
    }
    ctx->pc = 0x1BBDACu;
    {
        const bool branch_taken_0x1bbdac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbdac) {
            ctx->pc = 0x1BBDD0u;
            goto label_1bbdd0;
        }
    }
    ctx->pc = 0x1BBDB4u;
label_1bbdb4:
    // 0x1bbdb4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bbdb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1bbdb8:
    // 0x1bbdb8: 0x8c251a98  lw          $a1, 0x1A98($at)
    ctx->pc = 0x1bbdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1bbdbc:
    // 0x1bbdbc: 0x3c04ff7f  lui         $a0, 0xFF7F
    ctx->pc = 0x1bbdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65407 << 16));
label_1bbdc0:
    // 0x1bbdc0: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x1bbdc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_1bbdc4:
    // 0x1bbdc4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1bbdc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1bbdc8:
    // 0x1bbdc8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bbdc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1bbdcc:
    // 0x1bbdcc: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1bbdccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 3));
label_1bbdd0:
    // 0x1bbdd0: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bbdd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbdd4:
    // 0x1bbdd4: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1bbdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1bbdd8:
    // 0x1bbdd8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1bbddc:
    if (ctx->pc == 0x1BBDDCu) {
        ctx->pc = 0x1BBDE0u;
        goto label_1bbde0;
    }
    ctx->pc = 0x1BBDD8u;
    {
        const bool branch_taken_0x1bbdd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbdd8) {
            ctx->pc = 0x1BBDF4u;
            goto label_1bbdf4;
        }
    }
    ctx->pc = 0x1BBDE0u;
label_1bbde0:
    // 0x1bbde0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bbde0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbde4:
    // 0x1bbde4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1bbde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1bbde8:
    // 0x1bbde8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1bbde8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_1bbdec:
    // 0x1bbdec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1bbdecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1bbdf0:
    // 0x1bbdf0: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1bbdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_1bbdf4:
    // 0x1bbdf4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bbdf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1bbdf8:
    // 0x1bbdf8: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1bbdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1bbdfc:
    // 0x1bbdfc: 0x34650100  ori         $a1, $v1, 0x100
    ctx->pc = 0x1bbdfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_1bbe00:
    // 0x1bbe00: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bbe00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1bbe04:
    // 0x1bbe04: 0xac251a64  sw          $a1, 0x1A64($at)
    ctx->pc = 0x1bbe04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 5));
label_1bbe08:
    // 0x1bbe08: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bbe08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbe0c:
    // 0x1bbe0c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1bbe0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_1bbe10:
    // 0x1bbe10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bbe10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1bbe14:
    // 0x1bbe14: 0xc096b40  jal         func_25AD00
label_1bbe18:
    if (ctx->pc == 0x1BBE18u) {
        ctx->pc = 0x1BBE1Cu;
        goto label_1bbe1c;
    }
    ctx->pc = 0x1BBE14u;
    SET_GPR_U32(ctx, 31, 0x1BBE1Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BBE14u, 0x1BBE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE1Cu;
label_1bbe1c:
    // 0x1bbe1c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bbe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbe20:
    // 0x1bbe20: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bbe20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbe24:
    // 0x1bbe24: 0x3c083e49  lui         $t0, 0x3E49
    ctx->pc = 0x1bbe24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15945 << 16));
label_1bbe28:
    // 0x1bbe28: 0x35070fdb  ori         $a3, $t0, 0xFDB
    ctx->pc = 0x1bbe28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)4059);
label_1bbe2c:
    // 0x1bbe2c: 0x44877000  mtc1        $a3, $f14
    ctx->pc = 0x1bbe2cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1bbe30:
    // 0x1bbe30: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1bbe30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bbe34:
    // 0x1bbe34: 0xc4cd00d4  lwc1        $f13, 0xD4($a2)
    ctx->pc = 0x1bbe34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1bbe38:
    // 0x1bbe38: 0xc058f50  jal         func_163D40
label_1bbe3c:
    if (ctx->pc == 0x1BBE3Cu) {
        ctx->pc = 0x1BBE40u;
        goto label_1bbe40;
    }
    ctx->pc = 0x1BBE38u;
    SET_GPR_U32(ctx, 31, 0x1BBE40u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1BBE38u, 0x1BBE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE40u;
label_1bbe40:
    // 0x1bbe40: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bbe40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbe44:
    // 0x1bbe44: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1bbe44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_1bbe48:
    // 0x1bbe48: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bbe48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbe4c:
    // 0x1bbe4c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bbe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbe50:
    // 0x1bbe50: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1bbe50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bbe54:
    // 0x1bbe54: 0xc05cd58  jal         func_173560
label_1bbe58:
    if (ctx->pc == 0x1BBE58u) {
        ctx->pc = 0x1BBE5Cu;
        goto label_1bbe5c;
    }
    ctx->pc = 0x1BBE54u;
    SET_GPR_U32(ctx, 31, 0x1BBE5Cu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1BBE54u, 0x1BBE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE5Cu;
label_1bbe5c:
    // 0x1bbe5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bbe5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1bbe60:
    // 0x1bbe60: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bbe60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbe64:
    // 0x1bbe64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bbe64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1bbe68:
    // 0x1bbe68: 0xc057480  jal         func_15D200
label_1bbe6c:
    if (ctx->pc == 0x1BBE6Cu) {
        ctx->pc = 0x1BBE70u;
        goto label_1bbe70;
    }
    ctx->pc = 0x1BBE68u;
    SET_GPR_U32(ctx, 31, 0x1BBE70u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1BBE68u, 0x1BBE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE70u;
label_1bbe70:
    // 0x1bbe70: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1bbe70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1bbe74:
    // 0x1bbe74: 0xc097530  jal         func_25D4C0
label_1bbe78:
    if (ctx->pc == 0x1BBE78u) {
        ctx->pc = 0x1BBE7Cu;
        goto label_1bbe7c;
    }
    ctx->pc = 0x1BBE74u;
    SET_GPR_U32(ctx, 31, 0x1BBE7Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BBE74u, 0x1BBE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE7Cu;
label_1bbe7c:
    // 0x1bbe7c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bbe7cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bbe80:
    // 0x1bbe80: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bbe80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbe84:
    // 0x1bbe84: 0x90c309e7  lbu         $v1, 0x9E7($a2)
    ctx->pc = 0x1bbe84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2535)));
label_1bbe88:
    // 0x1bbe88: 0x106004a8  beqz        $v1, . + 4 + (0x4A8 << 2)
label_1bbe8c:
    if (ctx->pc == 0x1BBE8Cu) {
        ctx->pc = 0x1BBE90u;
        goto label_1bbe90;
    }
    ctx->pc = 0x1BBE88u;
    {
        const bool branch_taken_0x1bbe88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbe88) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BBE90u;
label_1bbe90:
    // 0x1bbe90: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bbe90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbe94:
    // 0x1bbe94: 0x90a40003  lbu         $a0, 0x3($a1)
    ctx->pc = 0x1bbe94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_1bbe98:
    // 0x1bbe98: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1bbe98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1bbe9c:
    // 0x1bbe9c: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x1bbe9cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
label_1bbea0:
    // 0x1bbea0: 0x100004a2  b           . + 4 + (0x4A2 << 2)
label_1bbea4:
    if (ctx->pc == 0x1BBEA4u) {
        ctx->pc = 0x1BBEA8u;
        goto label_1bbea8;
    }
    ctx->pc = 0x1BBEA0u;
    {
        const bool branch_taken_0x1bbea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbea0) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BBEA8u;
label_1bbea8:
    // 0x1bbea8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1bbea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1bbeac:
    // 0x1bbeac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bbeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbeb0:
    // 0x1bbeb0: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1bbeb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_1bbeb4:
    // 0x1bbeb4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bbeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbeb8:
    // 0x1bbeb8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bbeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbebc:
    // 0x1bbebc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1bbebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1bbec0:
    // 0x1bbec0: 0x24060051  addiu       $a2, $zero, 0x51
    ctx->pc = 0x1bbec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_1bbec4:
    // 0x1bbec4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bbec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bbec8:
    // 0x1bbec8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bbec8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1bbecc:
    // 0x1bbecc: 0xc0965d0  jal         func_259740
label_1bbed0:
    if (ctx->pc == 0x1BBED0u) {
        ctx->pc = 0x1BBED4u;
        goto label_1bbed4;
    }
    ctx->pc = 0x1BBECCu;
    SET_GPR_U32(ctx, 31, 0x1BBED4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BBECCu, 0x1BBED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBED4u;
label_1bbed4:
    // 0x1bbed4: 0x3c024306  lui         $v0, 0x4306
    ctx->pc = 0x1bbed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17158 << 16));
label_1bbed8:
    // 0x1bbed8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1bbed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_1bbedc:
    // 0x1bbedc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bbedcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bbee0:
    // 0x1bbee0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bbee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbee4:
    // 0x1bbee4: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1bbee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_1bbee8:
    // 0x1bbee8: 0x3c034106  lui         $v1, 0x4106
    ctx->pc = 0x1bbee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16646 << 16));
label_1bbeec:
    // 0x1bbeec: 0x34646666  ori         $a0, $v1, 0x6666
    ctx->pc = 0x1bbeecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_1bbef0:
    // 0x1bbef0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bbef0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bbef4:
    // 0x1bbef4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bbef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbef8:
    // 0x1bbef8: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x1bbef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_1bbefc:
    // 0x1bbefc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bbefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbf00:
    // 0x1bbf00: 0xac401b64  sw          $zero, 0x1B64($v0)
    ctx->pc = 0x1bbf00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 0));
label_1bbf04:
    // 0x1bbf04: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bbf04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbf08:
    // 0x1bbf08: 0xac801b68  sw          $zero, 0x1B68($a0)
    ctx->pc = 0x1bbf08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7016), GPR_U32(ctx, 0));
label_1bbf0c:
    // 0x1bbf0c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1bbf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1bbf10:
    // 0x1bbf10: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bbf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbf14:
    // 0x1bbf14: 0xa445127e  sh          $a1, 0x127E($v0)
    ctx->pc = 0x1bbf14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 5));
label_1bbf18:
    // 0x1bbf18: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1bbf18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1bbf1c:
    // 0x1bbf1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bbf1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bbf20:
    // 0x1bbf20: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bbf20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbf24:
    // 0x1bbf24: 0xe4801b50  swc1        $f0, 0x1B50($a0)
    ctx->pc = 0x1bbf24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6992), bits); }
label_1bbf28:
    // 0x1bbf28: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bbf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbf2c:
    // 0x1bbf2c: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x1bbf2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1bbf30:
    // 0x1bbf30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bbf30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1bbf34:
    // 0x1bbf34: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x1bbf34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
label_1bbf38:
    // 0x1bbf38: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bbf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbf3c:
    // 0x1bbf3c: 0x904409da  lbu         $a0, 0x9DA($v0)
    ctx->pc = 0x1bbf3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2522)));
label_1bbf40:
    // 0x1bbf40: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1bbf40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1bbf44:
    // 0x1bbf44: 0x30a3003f  andi        $v1, $a1, 0x3F
    ctx->pc = 0x1bbf44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
label_1bbf48:
    // 0x1bbf48: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1bbf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_1bbf4c:
    // 0x1bbf4c: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_1bbf50:
    if (ctx->pc == 0x1BBF50u) {
        ctx->pc = 0x1BBF54u;
        goto label_1bbf54;
    }
    ctx->pc = 0x1BBF4Cu;
    {
        const bool branch_taken_0x1bbf4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bbf4c) {
            ctx->pc = 0x1BBFA8u;
            goto label_1bbfa8;
        }
    }
    ctx->pc = 0x1BBF54u;
label_1bbf54:
    // 0x1bbf54: 0xc067694  jal         func_19DA50
label_1bbf58:
    if (ctx->pc == 0x1BBF58u) {
        ctx->pc = 0x1BBF5Cu;
        goto label_1bbf5c;
    }
    ctx->pc = 0x1BBF54u;
    SET_GPR_U32(ctx, 31, 0x1BBF5Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1BBF54u, 0x1BBF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBF5Cu;
label_1bbf5c:
    // 0x1bbf5c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1bbf5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1bbf60:
    // 0x1bbf60: 0x30a30003  andi        $v1, $a1, 0x3
    ctx->pc = 0x1bbf60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
label_1bbf64:
    // 0x1bbf64: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1bbf64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1bbf68:
    // 0x1bbf68: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x1bbf68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
label_1bbf6c:
    // 0x1bbf6c: 0x24a652d8  addiu       $a2, $a1, 0x52D8
    ctx->pc = 0x1bbf6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 21208));
label_1bbf70:
    // 0x1bbf70: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x1bbf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1bbf74:
    // 0x1bbf74: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1bbf74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1bbf78:
    // 0x1bbf78: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x1bbf78u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1bbf7c:
    // 0x1bbf7c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bbf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbf80:
    // 0x1bbf80: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x1bbf80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_1bbf84:
    // 0x1bbf84: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1bbf84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_1bbf88:
    // 0x1bbf88: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1bbf88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_1bbf8c:
    // 0x1bbf8c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1bbf8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1bbf90:
    // 0x1bbf90: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x1bbf90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1bbf94:
    // 0x1bbf94: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x1bbf94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_1bbf98:
    // 0x1bbf98: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1bbf98u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1bbf9c:
    // 0x1bbf9c: 0xc067b18  jal         func_19EC60
label_1bbfa0:
    if (ctx->pc == 0x1BBFA0u) {
        ctx->pc = 0x1BBFA4u;
        goto label_1bbfa4;
    }
    ctx->pc = 0x1BBF9Cu;
    SET_GPR_U32(ctx, 31, 0x1BBFA4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1BBF9Cu, 0x1BBFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBFA4u;
label_1bbfa4:
    // 0x1bbfa4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1bbfa4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bbfa8:
    // 0x1bbfa8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bbfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbfac:
    // 0x1bbfac: 0x8c641b6c  lw          $a0, 0x1B6C($v1)
    ctx->pc = 0x1bbfacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
label_1bbfb0:
    // 0x1bbfb0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1bbfb4:
    if (ctx->pc == 0x1BBFB4u) {
        ctx->pc = 0x1BBFB8u;
        goto label_1bbfb8;
    }
    ctx->pc = 0x1BBFB0u;
    {
        const bool branch_taken_0x1bbfb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbfb0) {
            ctx->pc = 0x1BBFD4u;
            goto label_1bbfd4;
        }
    }
    ctx->pc = 0x1BBFB8u;
label_1bbfb8:
    // 0x1bbfb8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bbfb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1bbfbc:
    // 0x1bbfbc: 0x8c251a98  lw          $a1, 0x1A98($at)
    ctx->pc = 0x1bbfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1bbfc0:
    // 0x1bbfc0: 0x3c04ff7f  lui         $a0, 0xFF7F
    ctx->pc = 0x1bbfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65407 << 16));
label_1bbfc4:
    // 0x1bbfc4: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x1bbfc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_1bbfc8:
    // 0x1bbfc8: 0xa21824  and         $v1, $a1, $v0
    ctx->pc = 0x1bbfc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1bbfcc:
    // 0x1bbfcc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bbfccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1bbfd0:
    // 0x1bbfd0: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1bbfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 3));
label_1bbfd4:
    // 0x1bbfd4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bbfd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1bbfd8:
    // 0x1bbfd8: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1bbfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1bbfdc:
    // 0x1bbfdc: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x1bbfdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_1bbfe0:
    // 0x1bbfe0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bbfe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1bbfe4:
    // 0x1bbfe4: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x1bbfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 3));
label_1bbfe8:
    // 0x1bbfe8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bbfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bbfec:
    // 0x1bbfec: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1bbfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1bbff0:
    // 0x1bbff0: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x1bbff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
label_1bbff4:
    // 0x1bbff4: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x1bbff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_1bbff8:
    // 0x1bbff8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1bbff8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1bbffc:
    // 0x1bbffc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bbffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc000:
    // 0x1bc000: 0x908509db  lbu         $a1, 0x9DB($a0)
    ctx->pc = 0x1bc000u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2523)));
label_1bc004:
    // 0x1bc004: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1bc004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1bc008:
    // 0x1bc008: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x1bc008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_1bc00c:
    // 0x1bc00c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_1bc010:
    if (ctx->pc == 0x1BC010u) {
        ctx->pc = 0x1BC014u;
        goto label_1bc014;
    }
    ctx->pc = 0x1BC00Cu;
    {
        const bool branch_taken_0x1bc00c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc00c) {
            ctx->pc = 0x1BC058u;
            goto label_1bc058;
        }
    }
    ctx->pc = 0x1BC014u;
label_1bc014:
    // 0x1bc014: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x1bc014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_1bc018:
    // 0x1bc018: 0x30640020  andi        $a0, $v1, 0x20
    ctx->pc = 0x1bc018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1bc01c:
    // 0x1bc01c: 0x1480000e  bnez        $a0, . + 4 + (0xE << 2)
label_1bc020:
    if (ctx->pc == 0x1BC020u) {
        ctx->pc = 0x1BC024u;
        goto label_1bc024;
    }
    ctx->pc = 0x1BC01Cu;
    {
        const bool branch_taken_0x1bc01c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc01c) {
            ctx->pc = 0x1BC058u;
            goto label_1bc058;
        }
    }
    ctx->pc = 0x1BC024u;
label_1bc024:
    // 0x1bc024: 0x3c0342ac  lui         $v1, 0x42AC
    ctx->pc = 0x1bc024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17068 << 16));
label_1bc028:
    // 0x1bc028: 0x3463cccc  ori         $v1, $v1, 0xCCCC
    ctx->pc = 0x1bc028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52428);
label_1bc02c:
    // 0x1bc02c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bc02cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc030:
    // 0x1bc030: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc034:
    // 0x1bc034: 0xe4801284  swc1        $f0, 0x1284($a0)
    ctx->pc = 0x1bc034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4740), bits); }
label_1bc038:
    // 0x1bc038: 0x3c0340ac  lui         $v1, 0x40AC
    ctx->pc = 0x1bc038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16556 << 16));
label_1bc03c:
    // 0x1bc03c: 0x3463cccc  ori         $v1, $v1, 0xCCCC
    ctx->pc = 0x1bc03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52428);
label_1bc040:
    // 0x1bc040: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bc040u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc044:
    // 0x1bc044: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc048:
    // 0x1bc048: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x1bc048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
label_1bc04c:
    // 0x1bc04c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bc04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc050:
    // 0x1bc050: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc054:
    // 0x1bc054: 0xac641b64  sw          $a0, 0x1B64($v1)
    ctx->pc = 0x1bc054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7012), GPR_U32(ctx, 4));
label_1bc058:
    // 0x1bc058: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc05c:
    // 0x1bc05c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bc05cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1bc060:
    // 0x1bc060: 0xc096b40  jal         func_25AD00
label_1bc064:
    if (ctx->pc == 0x1BC064u) {
        ctx->pc = 0x1BC068u;
        goto label_1bc068;
    }
    ctx->pc = 0x1BC060u;
    SET_GPR_U32(ctx, 31, 0x1BC068u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BC060u, 0x1BC068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC068u;
label_1bc068:
    // 0x1bc068: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bc068u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bc06c:
    // 0x1bc06c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc070:
    // 0x1bc070: 0x8c631b64  lw          $v1, 0x1B64($v1)
    ctx->pc = 0x1bc070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
label_1bc074:
    // 0x1bc074: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1bc078:
    if (ctx->pc == 0x1BC078u) {
        ctx->pc = 0x1BC07Cu;
        goto label_1bc07c;
    }
    ctx->pc = 0x1BC074u;
    {
        const bool branch_taken_0x1bc074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc074) {
            ctx->pc = 0x1BC0A4u;
            goto label_1bc0a4;
        }
    }
    ctx->pc = 0x1BC07Cu;
label_1bc07c:
    // 0x1bc07c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc080:
    // 0x1bc080: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bc080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc084:
    // 0x1bc084: 0x3c073f19  lui         $a3, 0x3F19
    ctx->pc = 0x1bc084u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16153 << 16));
label_1bc088:
    // 0x1bc088: 0x34e3999a  ori         $v1, $a3, 0x999A
    ctx->pc = 0x1bc088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)39322);
label_1bc08c:
    // 0x1bc08c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1bc08cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1bc090:
    // 0x1bc090: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x1bc090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
label_1bc094:
    // 0x1bc094: 0x24a50180  addiu       $a1, $a1, 0x180
    ctx->pc = 0x1bc094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
label_1bc098:
    // 0x1bc098: 0xc040ed8  jal         func_103B60
label_1bc09c:
    if (ctx->pc == 0x1BC09Cu) {
        ctx->pc = 0x1BC0A0u;
        goto label_1bc0a0;
    }
    ctx->pc = 0x1BC098u;
    SET_GPR_U32(ctx, 31, 0x1BC0A0u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1BC0A0u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1BC0A0u) { return; }
    ctx->pc = 0x1BC0A0u;
label_1bc0a0:
    // 0x1bc0a0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bc0a0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bc0a4:
    // 0x1bc0a4: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bc0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc0a8:
    // 0x1bc0a8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc0ac:
    // 0x1bc0ac: 0x3c053e49  lui         $a1, 0x3E49
    ctx->pc = 0x1bc0acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15945 << 16));
label_1bc0b0:
    // 0x1bc0b0: 0x34a30fdb  ori         $v1, $a1, 0xFDB
    ctx->pc = 0x1bc0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_1bc0b4:
    // 0x1bc0b4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1bc0b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1bc0b8:
    // 0x1bc0b8: 0xc4cc1290  lwc1        $f12, 0x1290($a2)
    ctx->pc = 0x1bc0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bc0bc:
    // 0x1bc0bc: 0xc48d00d4  lwc1        $f13, 0xD4($a0)
    ctx->pc = 0x1bc0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1bc0c0:
    // 0x1bc0c0: 0xc058f50  jal         func_163D40
label_1bc0c4:
    if (ctx->pc == 0x1BC0C4u) {
        ctx->pc = 0x1BC0C8u;
        goto label_1bc0c8;
    }
    ctx->pc = 0x1BC0C0u;
    SET_GPR_U32(ctx, 31, 0x1BC0C8u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1BC0C0u, 0x1BC0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC0C8u;
label_1bc0c8:
    // 0x1bc0c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc0cc:
    // 0x1bc0cc: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x1bc0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_1bc0d0:
    // 0x1bc0d0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc0d4:
    // 0x1bc0d4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc0d8:
    // 0x1bc0d8: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x1bc0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bc0dc:
    // 0x1bc0dc: 0xc46d1380  lwc1        $f13, 0x1380($v1)
    ctx->pc = 0x1bc0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1bc0e0:
    // 0x1bc0e0: 0xc058f20  jal         func_163C80
label_1bc0e4:
    if (ctx->pc == 0x1BC0E4u) {
        ctx->pc = 0x1BC0E8u;
        goto label_1bc0e8;
    }
    ctx->pc = 0x1BC0E0u;
    SET_GPR_U32(ctx, 31, 0x1BC0E8u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1BC0E0u, 0x1BC0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC0E8u;
label_1bc0e8:
    // 0x1bc0e8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1bc0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1bc0ec:
    // 0x1bc0ec: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1bc0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bc0f0:
    // 0x1bc0f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bc0f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc0f4:
    // 0x1bc0f4: 0x0  nop
    ctx->pc = 0x1bc0f4u;
    // NOP
label_1bc0f8:
    // 0x1bc0f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bc0f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bc0fc:
    // 0x1bc0fc: 0x0  nop
    ctx->pc = 0x1bc0fcu;
    // NOP
label_1bc100:
    // 0x1bc100: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1bc104:
    if (ctx->pc == 0x1BC104u) {
        ctx->pc = 0x1BC108u;
        goto label_1bc108;
    }
    ctx->pc = 0x1BC100u;
    {
        const bool branch_taken_0x1bc100 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc100) {
            ctx->pc = 0x1BC11Cu;
            goto label_1bc11c;
        }
    }
    ctx->pc = 0x1BC108u;
label_1bc108:
    // 0x1bc108: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1bc108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_1bc10c:
    // 0x1bc10c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1bc10cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bc110:
    // 0x1bc110: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1bc110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bc114:
    // 0x1bc114: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bc114u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1bc118:
    // 0x1bc118: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1bc118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1bc11c:
    // 0x1bc11c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc120:
    // 0x1bc120: 0xc4611b5c  lwc1        $f1, 0x1B5C($v1)
    ctx->pc = 0x1bc120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bc124:
    // 0x1bc124: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x1bc124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
label_1bc128:
    // 0x1bc128: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bc128u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc12c:
    // 0x1bc12c: 0x0  nop
    ctx->pc = 0x1bc12cu;
    // NOP
label_1bc130:
    // 0x1bc130: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bc130u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bc134:
    // 0x1bc134: 0x0  nop
    ctx->pc = 0x1bc134u;
    // NOP
label_1bc138:
    // 0x1bc138: 0x45010038  bc1t        . + 4 + (0x38 << 2)
label_1bc13c:
    if (ctx->pc == 0x1BC13Cu) {
        ctx->pc = 0x1BC140u;
        goto label_1bc140;
    }
    ctx->pc = 0x1BC138u;
    {
        const bool branch_taken_0x1bc138 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc138) {
            ctx->pc = 0x1BC21Cu;
            goto label_1bc21c;
        }
    }
    ctx->pc = 0x1BC140u;
label_1bc140:
    // 0x1bc140: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1bc140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bc144:
    // 0x1bc144: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x1bc144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_1bc148:
    // 0x1bc148: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x1bc148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1bc14c:
    // 0x1bc14c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bc14cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc150:
    // 0x1bc150: 0x0  nop
    ctx->pc = 0x1bc150u;
    // NOP
label_1bc154:
    // 0x1bc154: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bc154u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bc158:
    // 0x1bc158: 0x0  nop
    ctx->pc = 0x1bc158u;
    // NOP
label_1bc15c:
    // 0x1bc15c: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
label_1bc160:
    if (ctx->pc == 0x1BC160u) {
        ctx->pc = 0x1BC164u;
        goto label_1bc164;
    }
    ctx->pc = 0x1BC15Cu;
    {
        const bool branch_taken_0x1bc15c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc15c) {
            ctx->pc = 0x1BC1C8u;
            goto label_1bc1c8;
        }
    }
    ctx->pc = 0x1BC164u;
label_1bc164:
    // 0x1bc164: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bc164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc168:
    // 0x1bc168: 0xc4a11b50  lwc1        $f1, 0x1B50($a1)
    ctx->pc = 0x1bc168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bc16c:
    // 0x1bc16c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1bc16cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_1bc170:
    // 0x1bc170: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x1bc170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_1bc174:
    // 0x1bc174: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bc174u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc178:
    // 0x1bc178: 0x0  nop
    ctx->pc = 0x1bc178u;
    // NOP
label_1bc17c:
    // 0x1bc17c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1bc17cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1bc180:
    // 0x1bc180: 0xe4a01b50  swc1        $f0, 0x1B50($a1)
    ctx->pc = 0x1bc180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 6992), bits); }
label_1bc184:
    // 0x1bc184: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bc184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc188:
    // 0x1bc188: 0xc4a11b50  lwc1        $f1, 0x1B50($a1)
    ctx->pc = 0x1bc188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bc18c:
    // 0x1bc18c: 0x3c073fa6  lui         $a3, 0x3FA6
    ctx->pc = 0x1bc18cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16294 << 16));
label_1bc190:
    // 0x1bc190: 0x34e66666  ori         $a2, $a3, 0x6666
    ctx->pc = 0x1bc190u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)26214);
label_1bc194:
    // 0x1bc194: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1bc194u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc198:
    // 0x1bc198: 0x0  nop
    ctx->pc = 0x1bc198u;
    // NOP
label_1bc19c:
    // 0x1bc19c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bc19cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bc1a0:
    // 0x1bc1a0: 0x0  nop
    ctx->pc = 0x1bc1a0u;
    // NOP
label_1bc1a4:
    // 0x1bc1a4: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
label_1bc1a8:
    if (ctx->pc == 0x1BC1A8u) {
        ctx->pc = 0x1BC1ACu;
        goto label_1bc1ac;
    }
    ctx->pc = 0x1BC1A4u;
    {
        const bool branch_taken_0x1bc1a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc1a4) {
            ctx->pc = 0x1BC21Cu;
            goto label_1bc21c;
        }
    }
    ctx->pc = 0x1BC1ACu;
label_1bc1ac:
    // 0x1bc1ac: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x1bc1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
label_1bc1b0:
    // 0x1bc1b0: 0x34686666  ori         $t0, $v1, 0x6666
    ctx->pc = 0x1bc1b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_1bc1b4:
    // 0x1bc1b4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1bc1b4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc1b8:
    // 0x1bc1b8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc1bc:
    // 0x1bc1bc: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1bc1bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_1bc1c0:
    // 0x1bc1c0: 0x10000016  b           . + 4 + (0x16 << 2)
label_1bc1c4:
    if (ctx->pc == 0x1BC1C4u) {
        ctx->pc = 0x1BC1C8u;
        goto label_1bc1c8;
    }
    ctx->pc = 0x1BC1C0u;
    {
        const bool branch_taken_0x1bc1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc1c0) {
            ctx->pc = 0x1BC21Cu;
            goto label_1bc21c;
        }
    }
    ctx->pc = 0x1BC1C8u;
label_1bc1c8:
    // 0x1bc1c8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc1cc:
    // 0x1bc1cc: 0xc4811b50  lwc1        $f1, 0x1B50($a0)
    ctx->pc = 0x1bc1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bc1d0:
    // 0x1bc1d0: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1bc1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_1bc1d4:
    // 0x1bc1d4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1bc1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_1bc1d8:
    // 0x1bc1d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bc1d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc1dc:
    // 0x1bc1dc: 0x0  nop
    ctx->pc = 0x1bc1dcu;
    // NOP
label_1bc1e0:
    // 0x1bc1e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1bc1e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1bc1e4:
    // 0x1bc1e4: 0xe4801b50  swc1        $f0, 0x1B50($a0)
    ctx->pc = 0x1bc1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6992), bits); }
label_1bc1e8:
    // 0x1bc1e8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc1ec:
    // 0x1bc1ec: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1bc1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bc1f0:
    // 0x1bc1f0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1bc1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_1bc1f4:
    // 0x1bc1f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bc1f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc1f8:
    // 0x1bc1f8: 0x0  nop
    ctx->pc = 0x1bc1f8u;
    // NOP
label_1bc1fc:
    // 0x1bc1fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bc1fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bc200:
    // 0x1bc200: 0x0  nop
    ctx->pc = 0x1bc200u;
    // NOP
label_1bc204:
    // 0x1bc204: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1bc208:
    if (ctx->pc == 0x1BC208u) {
        ctx->pc = 0x1BC20Cu;
        goto label_1bc20c;
    }
    ctx->pc = 0x1BC204u;
    {
        const bool branch_taken_0x1bc204 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc204) {
            ctx->pc = 0x1BC21Cu;
            goto label_1bc21c;
        }
    }
    ctx->pc = 0x1BC20Cu;
label_1bc20c:
    // 0x1bc20c: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x1bc20cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_1bc210:
    // 0x1bc210: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bc210u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc214:
    // 0x1bc214: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc218:
    // 0x1bc218: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1bc218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_1bc21c:
    // 0x1bc21c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bc21cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc220:
    // 0x1bc220: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc224:
    // 0x1bc224: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bc224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc228:
    // 0x1bc228: 0x24a40180  addiu       $a0, $a1, 0x180
    ctx->pc = 0x1bc228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
label_1bc22c:
    // 0x1bc22c: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x1bc22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
label_1bc230:
    // 0x1bc230: 0xc44c1b50  lwc1        $f12, 0x1B50($v0)
    ctx->pc = 0x1bc230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bc234:
    // 0x1bc234: 0xc040ed8  jal         func_103B60
label_1bc238:
    if (ctx->pc == 0x1BC238u) {
        ctx->pc = 0x1BC23Cu;
        goto label_1bc23c;
    }
    ctx->pc = 0x1BC234u;
    SET_GPR_U32(ctx, 31, 0x1BC23Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1BC23Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1BC23Cu) { return; }
    ctx->pc = 0x1BC23Cu;
label_1bc23c:
    // 0x1bc23c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc240:
    // 0x1bc240: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bc240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc244:
    // 0x1bc244: 0xc4ac1290  lwc1        $f12, 0x1290($a1)
    ctx->pc = 0x1bc244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bc248:
    // 0x1bc248: 0xc05cd58  jal         func_173560
label_1bc24c:
    if (ctx->pc == 0x1BC24Cu) {
        ctx->pc = 0x1BC250u;
        goto label_1bc250;
    }
    ctx->pc = 0x1BC248u;
    SET_GPR_U32(ctx, 31, 0x1BC250u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1BC248u, 0x1BC250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC250u;
label_1bc250:
    // 0x1bc250: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1bc250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1bc254:
    // 0x1bc254: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1bc254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1bc258:
    // 0x1bc258: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1bc258u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1bc25c:
    // 0x1bc25c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc260:
    // 0x1bc260: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bc260u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1bc264:
    // 0x1bc264: 0xc057480  jal         func_15D200
label_1bc268:
    if (ctx->pc == 0x1BC268u) {
        ctx->pc = 0x1BC26Cu;
        goto label_1bc26c;
    }
    ctx->pc = 0x1BC264u;
    SET_GPR_U32(ctx, 31, 0x1BC26Cu);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1BC264u, 0x1BC26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC26Cu;
label_1bc26c:
    // 0x1bc26c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bc26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc270:
    // 0x1bc270: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x1bc270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_1bc274:
    // 0x1bc274: 0xc057a80  jal         func_15EA00
label_1bc278:
    if (ctx->pc == 0x1BC278u) {
        ctx->pc = 0x1BC27Cu;
        goto label_1bc27c;
    }
    ctx->pc = 0x1BC274u;
    SET_GPR_U32(ctx, 31, 0x1BC27Cu);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1BC274u, 0x1BC27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC27Cu;
label_1bc27c:
    // 0x1bc27c: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x1bc27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
label_1bc280:
    // 0x1bc280: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1bc280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1bc284:
    // 0x1bc284: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bc284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bc288:
    // 0x1bc288: 0x0  nop
    ctx->pc = 0x1bc288u;
    // NOP
label_1bc28c:
    // 0x1bc28c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bc28cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1bc290:
    // 0x1bc290: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1bc290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_1bc294:
    // 0x1bc294: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc298:
    // 0x1bc298: 0xc4811284  lwc1        $f1, 0x1284($a0)
    ctx->pc = 0x1bc298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bc29c:
    // 0x1bc29c: 0x8fb10068  lw          $s1, 0x68($sp)
    ctx->pc = 0x1bc29cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc2a0:
    // 0x1bc2a0: 0xc6200124  lwc1        $f0, 0x124($s1)
    ctx->pc = 0x1bc2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bc2a4:
    // 0x1bc2a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bc2a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1bc2a8:
    // 0x1bc2a8: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x1bc2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
label_1bc2ac:
    // 0x1bc2ac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc2b0:
    // 0x1bc2b0: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1bc2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bc2b4:
    // 0x1bc2b4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1bc2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bc2b8:
    // 0x1bc2b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bc2b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bc2bc:
    // 0x1bc2bc: 0x0  nop
    ctx->pc = 0x1bc2bcu;
    // NOP
label_1bc2c0:
    // 0x1bc2c0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1bc2c4:
    if (ctx->pc == 0x1BC2C4u) {
        ctx->pc = 0x1BC2C8u;
        goto label_1bc2c8;
    }
    ctx->pc = 0x1BC2C0u;
    {
        const bool branch_taken_0x1bc2c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc2c0) {
            ctx->pc = 0x1BC2D4u;
            goto label_1bc2d4;
        }
    }
    ctx->pc = 0x1BC2C8u;
label_1bc2c8:
    // 0x1bc2c8: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1bc2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bc2cc:
    // 0x1bc2cc: 0x8fb30068  lw          $s3, 0x68($sp)
    ctx->pc = 0x1bc2ccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc2d0:
    // 0x1bc2d0: 0xe6600124  swc1        $f0, 0x124($s3)
    ctx->pc = 0x1bc2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 292), bits); }
label_1bc2d4:
    // 0x1bc2d4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bc2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc2d8:
    // 0x1bc2d8: 0xc4a11280  lwc1        $f1, 0x1280($a1)
    ctx->pc = 0x1bc2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bc2dc:
    // 0x1bc2dc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc2e0:
    // 0x1bc2e0: 0xc4801284  lwc1        $f0, 0x1284($a0)
    ctx->pc = 0x1bc2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bc2e4:
    // 0x1bc2e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bc2e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1bc2e8:
    // 0x1bc2e8: 0xe4801284  swc1        $f0, 0x1284($a0)
    ctx->pc = 0x1bc2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4740), bits); }
label_1bc2ec:
    // 0x1bc2ec: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1bc2ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1bc2f0:
    // 0x1bc2f0: 0xc097530  jal         func_25D4C0
label_1bc2f4:
    if (ctx->pc == 0x1BC2F4u) {
        ctx->pc = 0x1BC2F8u;
        goto label_1bc2f8;
    }
    ctx->pc = 0x1BC2F0u;
    SET_GPR_U32(ctx, 31, 0x1BC2F8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BC2F0u, 0x1BC2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC2F8u;
label_1bc2f8:
    // 0x1bc2f8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bc2f8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bc2fc:
    // 0x1bc2fc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc300:
    // 0x1bc300: 0x8464127e  lh          $a0, 0x127E($v1)
    ctx->pc = 0x1bc300u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
label_1bc304:
    // 0x1bc304: 0x10800033  beqz        $a0, . + 4 + (0x33 << 2)
label_1bc308:
    if (ctx->pc == 0x1BC308u) {
        ctx->pc = 0x1BC30Cu;
        goto label_1bc30c;
    }
    ctx->pc = 0x1BC304u;
    {
        const bool branch_taken_0x1bc304 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc304) {
            ctx->pc = 0x1BC3D4u;
            goto label_1bc3d4;
        }
    }
    ctx->pc = 0x1BC30Cu;
label_1bc30c:
    // 0x1bc30c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bc30cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc310:
    // 0x1bc310: 0x84a3127e  lh          $v1, 0x127E($a1)
    ctx->pc = 0x1bc310u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
label_1bc314:
    // 0x1bc314: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1bc314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1bc318:
    // 0x1bc318: 0xa4a3127e  sh          $v1, 0x127E($a1)
    ctx->pc = 0x1bc318u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 3));
label_1bc31c:
    // 0x1bc31c: 0x24040084  addiu       $a0, $zero, 0x84
    ctx->pc = 0x1bc31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_1bc320:
    // 0x1bc320: 0xc0587a8  jal         func_161EA0
label_1bc324:
    if (ctx->pc == 0x1BC324u) {
        ctx->pc = 0x1BC328u;
        goto label_1bc328;
    }
    ctx->pc = 0x1BC320u;
    SET_GPR_U32(ctx, 31, 0x1BC328u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1BC320u, 0x1BC328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC328u;
label_1bc328:
    // 0x1bc328: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1bc328u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bc32c:
    // 0x1bc32c: 0x12000087  beqz        $s0, . + 4 + (0x87 << 2)
label_1bc330:
    if (ctx->pc == 0x1BC330u) {
        ctx->pc = 0x1BC334u;
        goto label_1bc334;
    }
    ctx->pc = 0x1BC32Cu;
    {
        const bool branch_taken_0x1bc32c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc32c) {
            ctx->pc = 0x1BC54Cu;
            goto label_1bc54c;
        }
    }
    ctx->pc = 0x1BC334u;
label_1bc334:
    // 0x1bc334: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bc334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bc338:
    // 0x1bc338: 0x16030006  bne         $s0, $v1, . + 4 + (0x6 << 2)
label_1bc33c:
    if (ctx->pc == 0x1BC33Cu) {
        ctx->pc = 0x1BC340u;
        goto label_1bc340;
    }
    ctx->pc = 0x1BC338u;
    {
        const bool branch_taken_0x1bc338 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bc338) {
            ctx->pc = 0x1BC354u;
            goto label_1bc354;
        }
    }
    ctx->pc = 0x1BC340u;
label_1bc340:
    // 0x1bc340: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1bc340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bc344:
    // 0x1bc344: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc348:
    // 0x1bc348: 0xac641b68  sw          $a0, 0x1B68($v1)
    ctx->pc = 0x1bc348u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7016), GPR_U32(ctx, 4));
label_1bc34c:
    // 0x1bc34c: 0x1000007f  b           . + 4 + (0x7F << 2)
label_1bc350:
    if (ctx->pc == 0x1BC350u) {
        ctx->pc = 0x1BC354u;
        goto label_1bc354;
    }
    ctx->pc = 0x1BC34Cu;
    {
        const bool branch_taken_0x1bc34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc34c) {
            ctx->pc = 0x1BC54Cu;
            goto label_1bc54c;
        }
    }
    ctx->pc = 0x1BC354u;
label_1bc354:
    // 0x1bc354: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc358:
    // 0x1bc358: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1bc358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1bc35c:
    // 0x1bc35c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1bc35cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_1bc360:
    // 0x1bc360: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x1bc360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1bc364:
    // 0x1bc364: 0x10600371  beqz        $v1, . + 4 + (0x371 << 2)
label_1bc368:
    if (ctx->pc == 0x1BC368u) {
        ctx->pc = 0x1BC36Cu;
        goto label_1bc36c;
    }
    ctx->pc = 0x1BC364u;
    {
        const bool branch_taken_0x1bc364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc364) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BC36Cu;
label_1bc36c:
    // 0x1bc36c: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1bc36cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc370:
    // 0x1bc370: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x1bc370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1bc374:
    // 0x1bc374: 0x3c05feff  lui         $a1, 0xFEFF
    ctx->pc = 0x1bc374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65279 << 16));
label_1bc378:
    // 0x1bc378: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x1bc378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_1bc37c:
    // 0x1bc37c: 0x833024  and         $a2, $a0, $v1
    ctx->pc = 0x1bc37cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1bc380:
    // 0x1bc380: 0xace60008  sw          $a2, 0x8($a3)
    ctx->pc = 0x1bc380u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
label_1bc384:
    // 0x1bc384: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1bc384u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc388:
    // 0x1bc388: 0x90e813a6  lbu         $t0, 0x13A6($a3)
    ctx->pc = 0x1bc388u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5030)));
label_1bc38c:
    // 0x1bc38c: 0x310500ff  andi        $a1, $t0, 0xFF
    ctx->pc = 0x1bc38cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_1bc390:
    // 0x1bc390: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bc390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bc394:
    // 0x1bc394: 0x10a4000b  beq         $a1, $a0, . + 4 + (0xB << 2)
label_1bc398:
    if (ctx->pc == 0x1BC398u) {
        ctx->pc = 0x1BC39Cu;
        goto label_1bc39c;
    }
    ctx->pc = 0x1BC394u;
    {
        const bool branch_taken_0x1bc394 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1bc394) {
            ctx->pc = 0x1BC3C4u;
            goto label_1bc3c4;
        }
    }
    ctx->pc = 0x1BC39Cu;
label_1bc39c:
    // 0x1bc39c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bc39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc3a0:
    // 0x1bc3a0: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
label_1bc3a4:
    if (ctx->pc == 0x1BC3A4u) {
        ctx->pc = 0x1BC3A8u;
        goto label_1bc3a8;
    }
    ctx->pc = 0x1BC3A0u;
    {
        const bool branch_taken_0x1bc3a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bc3a0) {
            ctx->pc = 0x1BC3C4u;
            goto label_1bc3c4;
        }
    }
    ctx->pc = 0x1BC3A8u;
label_1bc3a8:
    // 0x1bc3a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bc3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bc3ac:
    // 0x1bc3ac: 0x10a3035f  beq         $a1, $v1, . + 4 + (0x35F << 2)
label_1bc3b0:
    if (ctx->pc == 0x1BC3B0u) {
        ctx->pc = 0x1BC3B4u;
        goto label_1bc3b4;
    }
    ctx->pc = 0x1BC3ACu;
    {
        const bool branch_taken_0x1bc3ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bc3ac) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BC3B4u;
label_1bc3b4:
    // 0x1bc3b4: 0x10a0035d  beqz        $a1, . + 4 + (0x35D << 2)
label_1bc3b8:
    if (ctx->pc == 0x1BC3B8u) {
        ctx->pc = 0x1BC3BCu;
        goto label_1bc3bc;
    }
    ctx->pc = 0x1BC3B4u;
    {
        const bool branch_taken_0x1bc3b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc3b4) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BC3BCu;
label_1bc3bc:
    // 0x1bc3bc: 0x1000035b  b           . + 4 + (0x35B << 2)
label_1bc3c0:
    if (ctx->pc == 0x1BC3C0u) {
        ctx->pc = 0x1BC3C4u;
        goto label_1bc3c4;
    }
    ctx->pc = 0x1BC3BCu;
    {
        const bool branch_taken_0x1bc3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc3bc) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BC3C4u;
label_1bc3c4:
    // 0x1bc3c4: 0xc0c5238  jal         func_3148E0
label_1bc3c8:
    if (ctx->pc == 0x1BC3C8u) {
        ctx->pc = 0x1BC3CCu;
        goto label_1bc3cc;
    }
    ctx->pc = 0x1BC3C4u;
    SET_GPR_U32(ctx, 31, 0x1BC3CCu);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BC3C4u, 0x1BC3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC3CCu;
label_1bc3cc:
    // 0x1bc3cc: 0x10000357  b           . + 4 + (0x357 << 2)
label_1bc3d0:
    if (ctx->pc == 0x1BC3D0u) {
        ctx->pc = 0x1BC3D4u;
        goto label_1bc3d4;
    }
    ctx->pc = 0x1BC3CCu;
    {
        const bool branch_taken_0x1bc3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc3cc) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BC3D4u;
label_1bc3d4:
    // 0x1bc3d4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc3d8:
    // 0x1bc3d8: 0x906409df  lbu         $a0, 0x9DF($v1)
    ctx->pc = 0x1bc3d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
label_1bc3dc:
    // 0x1bc3dc: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1bc3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1bc3e0:
    // 0x1bc3e0: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x1bc3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_1bc3e4:
    // 0x1bc3e4: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_1bc3e8:
    if (ctx->pc == 0x1BC3E8u) {
        ctx->pc = 0x1BC3ECu;
        goto label_1bc3ec;
    }
    ctx->pc = 0x1BC3E4u;
    {
        const bool branch_taken_0x1bc3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc3e4) {
            ctx->pc = 0x1BC48Cu;
            goto label_1bc48c;
        }
    }
    ctx->pc = 0x1BC3ECu;
label_1bc3ec:
    // 0x1bc3ec: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc3f0:
    // 0x1bc3f0: 0x8c851b68  lw          $a1, 0x1B68($a0)
    ctx->pc = 0x1bc3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7016)));
label_1bc3f4:
    // 0x1bc3f4: 0x34a20001  ori         $v0, $a1, 0x1
    ctx->pc = 0x1bc3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
label_1bc3f8:
    // 0x1bc3f8: 0x34440080  ori         $a0, $v0, 0x80
    ctx->pc = 0x1bc3f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_1bc3fc:
    // 0x1bc3fc: 0xc0587a8  jal         func_161EA0
label_1bc400:
    if (ctx->pc == 0x1BC400u) {
        ctx->pc = 0x1BC404u;
        goto label_1bc404;
    }
    ctx->pc = 0x1BC3FCu;
    SET_GPR_U32(ctx, 31, 0x1BC404u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1BC3FCu, 0x1BC404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC404u;
label_1bc404:
    // 0x1bc404: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
label_1bc408:
    if (ctx->pc == 0x1BC408u) {
        ctx->pc = 0x1BC40Cu;
        goto label_1bc40c;
    }
    ctx->pc = 0x1BC404u;
    {
        const bool branch_taken_0x1bc404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc404) {
            ctx->pc = 0x1BC54Cu;
            goto label_1bc54c;
        }
    }
    ctx->pc = 0x1BC40Cu;
label_1bc40c:
    // 0x1bc40c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc410:
    // 0x1bc410: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1bc410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1bc414:
    // 0x1bc414: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1bc414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_1bc418:
    // 0x1bc418: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1bc418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1bc41c:
    // 0x1bc41c: 0x10600343  beqz        $v1, . + 4 + (0x343 << 2)
label_1bc420:
    if (ctx->pc == 0x1BC420u) {
        ctx->pc = 0x1BC424u;
        goto label_1bc424;
    }
    ctx->pc = 0x1BC41Cu;
    {
        const bool branch_taken_0x1bc41c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc41c) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BC424u;
label_1bc424:
    // 0x1bc424: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bc424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc428:
    // 0x1bc428: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1bc428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1bc42c:
    // 0x1bc42c: 0x3c05feff  lui         $a1, 0xFEFF
    ctx->pc = 0x1bc42cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65279 << 16));
label_1bc430:
    // 0x1bc430: 0x34a4ffff  ori         $a0, $a1, 0xFFFF
    ctx->pc = 0x1bc430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_1bc434:
    // 0x1bc434: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1bc434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1bc438:
    // 0x1bc438: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1bc438u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1bc43c:
    // 0x1bc43c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc440:
    // 0x1bc440: 0x906313a6  lbu         $v1, 0x13A6($v1)
    ctx->pc = 0x1bc440u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
label_1bc444:
    // 0x1bc444: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x1bc444u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1bc448:
    // 0x1bc448: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bc448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bc44c:
    // 0x1bc44c: 0x10c5000b  beq         $a2, $a1, . + 4 + (0xB << 2)
label_1bc450:
    if (ctx->pc == 0x1BC450u) {
        ctx->pc = 0x1BC454u;
        goto label_1bc454;
    }
    ctx->pc = 0x1BC44Cu;
    {
        const bool branch_taken_0x1bc44c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x1bc44c) {
            ctx->pc = 0x1BC47Cu;
            goto label_1bc47c;
        }
    }
    ctx->pc = 0x1BC454u;
label_1bc454:
    // 0x1bc454: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bc454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc458:
    // 0x1bc458: 0x10c40008  beq         $a2, $a0, . + 4 + (0x8 << 2)
label_1bc45c:
    if (ctx->pc == 0x1BC45Cu) {
        ctx->pc = 0x1BC460u;
        goto label_1bc460;
    }
    ctx->pc = 0x1BC458u;
    {
        const bool branch_taken_0x1bc458 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x1bc458) {
            ctx->pc = 0x1BC47Cu;
            goto label_1bc47c;
        }
    }
    ctx->pc = 0x1BC460u;
label_1bc460:
    // 0x1bc460: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bc460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bc464:
    // 0x1bc464: 0x10c30331  beq         $a2, $v1, . + 4 + (0x331 << 2)
label_1bc468:
    if (ctx->pc == 0x1BC468u) {
        ctx->pc = 0x1BC46Cu;
        goto label_1bc46c;
    }
    ctx->pc = 0x1BC464u;
    {
        const bool branch_taken_0x1bc464 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bc464) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BC46Cu;
label_1bc46c:
    // 0x1bc46c: 0x10c0032f  beqz        $a2, . + 4 + (0x32F << 2)
label_1bc470:
    if (ctx->pc == 0x1BC470u) {
        ctx->pc = 0x1BC474u;
        goto label_1bc474;
    }
    ctx->pc = 0x1BC46Cu;
    {
        const bool branch_taken_0x1bc46c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc46c) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BC474u;
label_1bc474:
    // 0x1bc474: 0x1000032d  b           . + 4 + (0x32D << 2)
label_1bc478:
    if (ctx->pc == 0x1BC478u) {
        ctx->pc = 0x1BC47Cu;
        goto label_1bc47c;
    }
    ctx->pc = 0x1BC474u;
    {
        const bool branch_taken_0x1bc474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc474) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BC47Cu;
label_1bc47c:
    // 0x1bc47c: 0xc0c5238  jal         func_3148E0
label_1bc480:
    if (ctx->pc == 0x1BC480u) {
        ctx->pc = 0x1BC484u;
        goto label_1bc484;
    }
    ctx->pc = 0x1BC47Cu;
    SET_GPR_U32(ctx, 31, 0x1BC484u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BC47Cu, 0x1BC484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC484u;
label_1bc484:
    // 0x1bc484: 0x10000329  b           . + 4 + (0x329 << 2)
label_1bc488:
    if (ctx->pc == 0x1BC488u) {
        ctx->pc = 0x1BC48Cu;
        goto label_1bc48c;
    }
    ctx->pc = 0x1BC484u;
    {
        const bool branch_taken_0x1bc484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc484) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BC48Cu;
label_1bc48c:
    // 0x1bc48c: 0x24020085  addiu       $v0, $zero, 0x85
    ctx->pc = 0x1bc48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_1bc490:
    // 0x1bc490: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bc490u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bc494:
    // 0x1bc494: 0xc0587a8  jal         func_161EA0
label_1bc498:
    if (ctx->pc == 0x1BC498u) {
        ctx->pc = 0x1BC49Cu;
        goto label_1bc49c;
    }
    ctx->pc = 0x1BC494u;
    SET_GPR_U32(ctx, 31, 0x1BC49Cu);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1BC494u, 0x1BC49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC49Cu;
label_1bc49c:
    // 0x1bc49c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1bc49cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bc4a0:
    // 0x1bc4a0: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
label_1bc4a4:
    if (ctx->pc == 0x1BC4A4u) {
        ctx->pc = 0x1BC4A8u;
        goto label_1bc4a8;
    }
    ctx->pc = 0x1BC4A0u;
    {
        const bool branch_taken_0x1bc4a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc4a0) {
            ctx->pc = 0x1BC54Cu;
            goto label_1bc54c;
        }
    }
    ctx->pc = 0x1BC4A8u;
label_1bc4a8:
    // 0x1bc4a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1bc4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bc4ac:
    // 0x1bc4ac: 0x16050006  bne         $s0, $a1, . + 4 + (0x6 << 2)
label_1bc4b0:
    if (ctx->pc == 0x1BC4B0u) {
        ctx->pc = 0x1BC4B4u;
        goto label_1bc4b4;
    }
    ctx->pc = 0x1BC4ACu;
    {
        const bool branch_taken_0x1bc4ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        if (branch_taken_0x1bc4ac) {
            ctx->pc = 0x1BC4C8u;
            goto label_1bc4c8;
        }
    }
    ctx->pc = 0x1BC4B4u;
label_1bc4b4:
    // 0x1bc4b4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1bc4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bc4b8:
    // 0x1bc4b8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc4bc:
    // 0x1bc4bc: 0xac641b68  sw          $a0, 0x1B68($v1)
    ctx->pc = 0x1bc4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7016), GPR_U32(ctx, 4));
label_1bc4c0:
    // 0x1bc4c0: 0x10000022  b           . + 4 + (0x22 << 2)
label_1bc4c4:
    if (ctx->pc == 0x1BC4C4u) {
        ctx->pc = 0x1BC4C8u;
        goto label_1bc4c8;
    }
    ctx->pc = 0x1BC4C0u;
    {
        const bool branch_taken_0x1bc4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc4c0) {
            ctx->pc = 0x1BC54Cu;
            goto label_1bc54c;
        }
    }
    ctx->pc = 0x1BC4C8u;
label_1bc4c8:
    // 0x1bc4c8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc4cc:
    // 0x1bc4cc: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1bc4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1bc4d0:
    // 0x1bc4d0: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1bc4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_1bc4d4:
    // 0x1bc4d4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bc4d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1bc4d8:
    // 0x1bc4d8: 0x10600314  beqz        $v1, . + 4 + (0x314 << 2)
label_1bc4dc:
    if (ctx->pc == 0x1BC4DCu) {
        ctx->pc = 0x1BC4E0u;
        goto label_1bc4e0;
    }
    ctx->pc = 0x1BC4D8u;
    {
        const bool branch_taken_0x1bc4d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc4d8) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BC4E0u;
label_1bc4e0:
    // 0x1bc4e0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bc4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc4e4:
    // 0x1bc4e4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1bc4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1bc4e8:
    // 0x1bc4e8: 0x3c04feff  lui         $a0, 0xFEFF
    ctx->pc = 0x1bc4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65279 << 16));
label_1bc4ec:
    // 0x1bc4ec: 0x3486ffff  ori         $a2, $a0, 0xFFFF
    ctx->pc = 0x1bc4ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_1bc4f0:
    // 0x1bc4f0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1bc4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_1bc4f4:
    // 0x1bc4f4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1bc4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1bc4f8:
    // 0x1bc4f8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bc4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc4fc:
    // 0x1bc4fc: 0x90a313a6  lbu         $v1, 0x13A6($a1)
    ctx->pc = 0x1bc4fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5030)));
label_1bc500:
    // 0x1bc500: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1bc500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1bc504:
    // 0x1bc504: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bc504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bc508:
    // 0x1bc508: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_1bc50c:
    if (ctx->pc == 0x1BC50Cu) {
        ctx->pc = 0x1BC510u;
        goto label_1bc510;
    }
    ctx->pc = 0x1BC508u;
    {
        const bool branch_taken_0x1bc508 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bc508) {
            ctx->pc = 0x1BC538u;
            goto label_1bc538;
        }
    }
    ctx->pc = 0x1BC510u;
label_1bc510:
    // 0x1bc510: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bc510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc514:
    // 0x1bc514: 0x10860008  beq         $a0, $a2, . + 4 + (0x8 << 2)
label_1bc518:
    if (ctx->pc == 0x1BC518u) {
        ctx->pc = 0x1BC51Cu;
        goto label_1bc51c;
    }
    ctx->pc = 0x1BC514u;
    {
        const bool branch_taken_0x1bc514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x1bc514) {
            ctx->pc = 0x1BC538u;
            goto label_1bc538;
        }
    }
    ctx->pc = 0x1BC51Cu;
label_1bc51c:
    // 0x1bc51c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bc51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bc520:
    // 0x1bc520: 0x10830302  beq         $a0, $v1, . + 4 + (0x302 << 2)
label_1bc524:
    if (ctx->pc == 0x1BC524u) {
        ctx->pc = 0x1BC528u;
        goto label_1bc528;
    }
    ctx->pc = 0x1BC520u;
    {
        const bool branch_taken_0x1bc520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bc520) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BC528u;
label_1bc528:
    // 0x1bc528: 0x10800300  beqz        $a0, . + 4 + (0x300 << 2)
label_1bc52c:
    if (ctx->pc == 0x1BC52Cu) {
        ctx->pc = 0x1BC530u;
        goto label_1bc530;
    }
    ctx->pc = 0x1BC528u;
    {
        const bool branch_taken_0x1bc528 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc528) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BC530u;
label_1bc530:
    // 0x1bc530: 0x100002fe  b           . + 4 + (0x2FE << 2)
label_1bc534:
    if (ctx->pc == 0x1BC534u) {
        ctx->pc = 0x1BC538u;
        goto label_1bc538;
    }
    ctx->pc = 0x1BC530u;
    {
        const bool branch_taken_0x1bc530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc530) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BC538u;
label_1bc538:
    // 0x1bc538: 0xc0c5238  jal         func_3148E0
label_1bc53c:
    if (ctx->pc == 0x1BC53Cu) {
        ctx->pc = 0x1BC540u;
        goto label_1bc540;
    }
    ctx->pc = 0x1BC538u;
    SET_GPR_U32(ctx, 31, 0x1BC540u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BC538u, 0x1BC540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC540u;
label_1bc540:
    // 0x1bc540: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1bc540u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bc544:
    // 0x1bc544: 0x100002f9  b           . + 4 + (0x2F9 << 2)
label_1bc548:
    if (ctx->pc == 0x1BC548u) {
        ctx->pc = 0x1BC54Cu;
        goto label_1bc54c;
    }
    ctx->pc = 0x1BC544u;
    {
        const bool branch_taken_0x1bc544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc544) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BC54Cu;
label_1bc54c:
    // 0x1bc54c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc550:
    // 0x1bc550: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x1bc550u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
label_1bc554:
    // 0x1bc554: 0x106002f5  beqz        $v1, . + 4 + (0x2F5 << 2)
label_1bc558:
    if (ctx->pc == 0x1BC558u) {
        ctx->pc = 0x1BC55Cu;
        goto label_1bc55c;
    }
    ctx->pc = 0x1BC554u;
    {
        const bool branch_taken_0x1bc554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc554) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BC55Cu;
label_1bc55c:
    // 0x1bc55c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc560:
    // 0x1bc560: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1bc560u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_1bc564:
    // 0x1bc564: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x1bc564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1bc568:
    // 0x1bc568: 0xa0850003  sb          $a1, 0x3($a0)
    ctx->pc = 0x1bc568u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 5));
label_1bc56c:
    // 0x1bc56c: 0x100002ef  b           . + 4 + (0x2EF << 2)
label_1bc570:
    if (ctx->pc == 0x1BC570u) {
        ctx->pc = 0x1BC574u;
        goto label_1bc574;
    }
    ctx->pc = 0x1BC56Cu;
    {
        const bool branch_taken_0x1bc56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc56c) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BC574u;
label_1bc574:
    // 0x1bc574: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bc574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc578:
    // 0x1bc578: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bc578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc57c:
    // 0x1bc57c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1bc57cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_1bc580:
    // 0x1bc580: 0x8c420368  lw          $v0, 0x368($v0)
    ctx->pc = 0x1bc580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1bc584:
    // 0x1bc584: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1bc584u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bc588:
    // 0x1bc588: 0x24060052  addiu       $a2, $zero, 0x52
    ctx->pc = 0x1bc588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_1bc58c:
    // 0x1bc58c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bc58cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc590:
    // 0x1bc590: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bc590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1bc594:
    // 0x1bc594: 0xc0965d0  jal         func_259740
label_1bc598:
    if (ctx->pc == 0x1BC598u) {
        ctx->pc = 0x1BC59Cu;
        goto label_1bc59c;
    }
    ctx->pc = 0x1BC594u;
    SET_GPR_U32(ctx, 31, 0x1BC59Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BC594u, 0x1BC59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC59Cu;
label_1bc59c:
    // 0x1bc59c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bc59cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc5a0:
    // 0x1bc5a0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc5a4:
    // 0x1bc5a4: 0xe4801284  swc1        $f0, 0x1284($a0)
    ctx->pc = 0x1bc5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4740), bits); }
label_1bc5a8:
    // 0x1bc5a8: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1bc5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
label_1bc5ac:
    // 0x1bc5ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bc5acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc5b0:
    // 0x1bc5b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bc5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc5b4:
    // 0x1bc5b4: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x1bc5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_1bc5b8:
    // 0x1bc5b8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc5bc:
    // 0x1bc5bc: 0xac801b60  sw          $zero, 0x1B60($a0)
    ctx->pc = 0x1bc5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 0));
label_1bc5c0:
    // 0x1bc5c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bc5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc5c4:
    // 0x1bc5c4: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x1bc5c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1bc5c8:
    // 0x1bc5c8: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x1bc5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1bc5cc:
    // 0x1bc5cc: 0xa0460003  sb          $a2, 0x3($v0)
    ctx->pc = 0x1bc5ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 6));
label_1bc5d0:
    // 0x1bc5d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc5d4:
    // 0x1bc5d4: 0x8c651b6c  lw          $a1, 0x1B6C($v1)
    ctx->pc = 0x1bc5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
label_1bc5d8:
    // 0x1bc5d8: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_1bc5dc:
    if (ctx->pc == 0x1BC5DCu) {
        ctx->pc = 0x1BC5E0u;
        goto label_1bc5e0;
    }
    ctx->pc = 0x1BC5D8u;
    {
        const bool branch_taken_0x1bc5d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc5d8) {
            ctx->pc = 0x1BC5FCu;
            goto label_1bc5fc;
        }
    }
    ctx->pc = 0x1BC5E0u;
label_1bc5e0:
    // 0x1bc5e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bc5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1bc5e4:
    // 0x1bc5e4: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1bc5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1bc5e8:
    // 0x1bc5e8: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x1bc5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
label_1bc5ec:
    // 0x1bc5ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1bc5ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1bc5f0:
    // 0x1bc5f0: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1bc5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1bc5f4:
    // 0x1bc5f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bc5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1bc5f8:
    // 0x1bc5f8: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1bc5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_1bc5fc:
    // 0x1bc5fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bc5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1bc600:
    // 0x1bc600: 0x8c241a64  lw          $a0, 0x1A64($at)
    ctx->pc = 0x1bc600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1bc604:
    // 0x1bc604: 0x34820100  ori         $v0, $a0, 0x100
    ctx->pc = 0x1bc604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_1bc608:
    // 0x1bc608: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bc608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1bc60c:
    // 0x1bc60c: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1bc60cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 2));
label_1bc610:
    // 0x1bc610: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bc610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc614:
    // 0x1bc614: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x1bc614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1bc618:
    // 0x1bc618: 0x3c070400  lui         $a3, 0x400
    ctx->pc = 0x1bc618u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1024 << 16));
label_1bc61c:
    // 0x1bc61c: 0xc74025  or          $t0, $a2, $a3
    ctx->pc = 0x1bc61cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_1bc620:
    // 0x1bc620: 0xaca80008  sw          $t0, 0x8($a1)
    ctx->pc = 0x1bc620u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
label_1bc624:
    // 0x1bc624: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bc624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc628:
    // 0x1bc628: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bc628u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bc62c:
    // 0x1bc62c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bc62cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1bc630:
    // 0x1bc630: 0xc096b40  jal         func_25AD00
label_1bc634:
    if (ctx->pc == 0x1BC634u) {
        ctx->pc = 0x1BC638u;
        goto label_1bc638;
    }
    ctx->pc = 0x1BC630u;
    SET_GPR_U32(ctx, 31, 0x1BC638u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BC630u, 0x1BC638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC638u;
label_1bc638:
    // 0x1bc638: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bc638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc63c:
    // 0x1bc63c: 0x8c421b64  lw          $v0, 0x1B64($v0)
    ctx->pc = 0x1bc63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7012)));
label_1bc640:
    // 0x1bc640: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1bc644:
    if (ctx->pc == 0x1BC644u) {
        ctx->pc = 0x1BC648u;
        goto label_1bc648;
    }
    ctx->pc = 0x1BC640u;
    {
        const bool branch_taken_0x1bc640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc640) {
            ctx->pc = 0x1BC66Cu;
            goto label_1bc66c;
        }
    }
    ctx->pc = 0x1BC648u;
label_1bc648:
    // 0x1bc648: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc64c:
    // 0x1bc64c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc650:
    // 0x1bc650: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1bc650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_1bc654:
    // 0x1bc654: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1bc654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1bc658:
    // 0x1bc658: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bc658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1bc65c:
    // 0x1bc65c: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x1bc65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
label_1bc660:
    // 0x1bc660: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x1bc660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
label_1bc664:
    // 0x1bc664: 0xc040ed8  jal         func_103B60
label_1bc668:
    if (ctx->pc == 0x1BC668u) {
        ctx->pc = 0x1BC66Cu;
        goto label_1bc66c;
    }
    ctx->pc = 0x1BC664u;
    SET_GPR_U32(ctx, 31, 0x1BC66Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1BC66Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1BC66Cu) { return; }
    ctx->pc = 0x1BC66Cu;
label_1bc66c:
    // 0x1bc66c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bc66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc670:
    // 0x1bc670: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc674:
    // 0x1bc674: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1bc674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bc678:
    // 0x1bc678: 0xc48d1380  lwc1        $f13, 0x1380($a0)
    ctx->pc = 0x1bc678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1bc67c:
    // 0x1bc67c: 0xc058f20  jal         func_163C80
label_1bc680:
    if (ctx->pc == 0x1BC680u) {
        ctx->pc = 0x1BC684u;
        goto label_1bc684;
    }
    ctx->pc = 0x1BC67Cu;
    SET_GPR_U32(ctx, 31, 0x1BC684u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1BC67Cu, 0x1BC684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC684u;
label_1bc684:
    // 0x1bc684: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1bc684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1bc688:
    // 0x1bc688: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1bc688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bc68c:
    // 0x1bc68c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bc68cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc690:
    // 0x1bc690: 0x0  nop
    ctx->pc = 0x1bc690u;
    // NOP
label_1bc694:
    // 0x1bc694: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bc694u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bc698:
    // 0x1bc698: 0x0  nop
    ctx->pc = 0x1bc698u;
    // NOP
label_1bc69c:
    // 0x1bc69c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1bc6a0:
    if (ctx->pc == 0x1BC6A0u) {
        ctx->pc = 0x1BC6A4u;
        goto label_1bc6a4;
    }
    ctx->pc = 0x1BC69Cu;
    {
        const bool branch_taken_0x1bc69c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc69c) {
            ctx->pc = 0x1BC6B8u;
            goto label_1bc6b8;
        }
    }
    ctx->pc = 0x1BC6A4u;
label_1bc6a4:
    // 0x1bc6a4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1bc6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1bc6a8:
    // 0x1bc6a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bc6a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bc6ac:
    // 0x1bc6ac: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1bc6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bc6b0:
    // 0x1bc6b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bc6b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1bc6b4:
    // 0x1bc6b4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1bc6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1bc6b8:
    // 0x1bc6b8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc6bc:
    // 0x1bc6bc: 0xc4611b5c  lwc1        $f1, 0x1B5C($v1)
    ctx->pc = 0x1bc6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bc6c0:
    // 0x1bc6c0: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x1bc6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
label_1bc6c4:
    // 0x1bc6c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bc6c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc6c8:
    // 0x1bc6c8: 0x0  nop
    ctx->pc = 0x1bc6c8u;
    // NOP
label_1bc6cc:
    // 0x1bc6cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bc6ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bc6d0:
    // 0x1bc6d0: 0x0  nop
    ctx->pc = 0x1bc6d0u;
    // NOP
label_1bc6d4:
    // 0x1bc6d4: 0x45010038  bc1t        . + 4 + (0x38 << 2)
label_1bc6d8:
    if (ctx->pc == 0x1BC6D8u) {
        ctx->pc = 0x1BC6DCu;
        goto label_1bc6dc;
    }
    ctx->pc = 0x1BC6D4u;
    {
        const bool branch_taken_0x1bc6d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc6d4) {
            ctx->pc = 0x1BC7B8u;
            goto label_1bc7b8;
        }
    }
    ctx->pc = 0x1BC6DCu;
label_1bc6dc:
    // 0x1bc6dc: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1bc6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bc6e0:
    // 0x1bc6e0: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x1bc6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
label_1bc6e4:
    // 0x1bc6e4: 0x34820fdb  ori         $v0, $a0, 0xFDB
    ctx->pc = 0x1bc6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_1bc6e8:
    // 0x1bc6e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bc6e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc6ec:
    // 0x1bc6ec: 0x0  nop
    ctx->pc = 0x1bc6ecu;
    // NOP
label_1bc6f0:
    // 0x1bc6f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bc6f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bc6f4:
    // 0x1bc6f4: 0x0  nop
    ctx->pc = 0x1bc6f4u;
    // NOP
label_1bc6f8:
    // 0x1bc6f8: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
label_1bc6fc:
    if (ctx->pc == 0x1BC6FCu) {
        ctx->pc = 0x1BC700u;
        goto label_1bc700;
    }
    ctx->pc = 0x1BC6F8u;
    {
        const bool branch_taken_0x1bc6f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc6f8) {
            ctx->pc = 0x1BC764u;
            goto label_1bc764;
        }
    }
    ctx->pc = 0x1BC700u;
label_1bc700:
    // 0x1bc700: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bc700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc704:
    // 0x1bc704: 0xc4a11b50  lwc1        $f1, 0x1B50($a1)
    ctx->pc = 0x1bc704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bc708:
    // 0x1bc708: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1bc708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_1bc70c:
    // 0x1bc70c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1bc70cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1bc710:
    // 0x1bc710: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bc710u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc714:
    // 0x1bc714: 0x0  nop
    ctx->pc = 0x1bc714u;
    // NOP
label_1bc718:
    // 0x1bc718: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1bc718u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1bc71c:
    // 0x1bc71c: 0xe4a01b50  swc1        $f0, 0x1B50($a1)
    ctx->pc = 0x1bc71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 6992), bits); }
label_1bc720:
    // 0x1bc720: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bc720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc724:
    // 0x1bc724: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1bc724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bc728:
    // 0x1bc728: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x1bc728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
label_1bc72c:
    // 0x1bc72c: 0x34656666  ori         $a1, $v1, 0x6666
    ctx->pc = 0x1bc72cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_1bc730:
    // 0x1bc730: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1bc730u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc734:
    // 0x1bc734: 0x0  nop
    ctx->pc = 0x1bc734u;
    // NOP
label_1bc738:
    // 0x1bc738: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bc738u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bc73c:
    // 0x1bc73c: 0x0  nop
    ctx->pc = 0x1bc73cu;
    // NOP
label_1bc740:
    // 0x1bc740: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
label_1bc744:
    if (ctx->pc == 0x1BC744u) {
        ctx->pc = 0x1BC748u;
        goto label_1bc748;
    }
    ctx->pc = 0x1BC740u;
    {
        const bool branch_taken_0x1bc740 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc740) {
            ctx->pc = 0x1BC7B8u;
            goto label_1bc7b8;
        }
    }
    ctx->pc = 0x1BC748u;
label_1bc748:
    // 0x1bc748: 0x3c053fa6  lui         $a1, 0x3FA6
    ctx->pc = 0x1bc748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16294 << 16));
label_1bc74c:
    // 0x1bc74c: 0x34a46666  ori         $a0, $a1, 0x6666
    ctx->pc = 0x1bc74cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26214);
label_1bc750:
    // 0x1bc750: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bc750u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc754:
    // 0x1bc754: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bc754u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc758:
    // 0x1bc758: 0xe4c01b50  swc1        $f0, 0x1B50($a2)
    ctx->pc = 0x1bc758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 6992), bits); }
label_1bc75c:
    // 0x1bc75c: 0x10000016  b           . + 4 + (0x16 << 2)
label_1bc760:
    if (ctx->pc == 0x1BC760u) {
        ctx->pc = 0x1BC764u;
        goto label_1bc764;
    }
    ctx->pc = 0x1BC75Cu;
    {
        const bool branch_taken_0x1bc75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc75c) {
            ctx->pc = 0x1BC7B8u;
            goto label_1bc7b8;
        }
    }
    ctx->pc = 0x1BC764u;
label_1bc764:
    // 0x1bc764: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bc764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc768:
    // 0x1bc768: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1bc768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bc76c:
    // 0x1bc76c: 0x3c123dcc  lui         $s2, 0x3DCC
    ctx->pc = 0x1bc76cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)15820 << 16));
label_1bc770:
    // 0x1bc770: 0x3643cccd  ori         $v1, $s2, 0xCCCD
    ctx->pc = 0x1bc770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)52429);
label_1bc774:
    // 0x1bc774: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bc774u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc778:
    // 0x1bc778: 0x0  nop
    ctx->pc = 0x1bc778u;
    // NOP
label_1bc77c:
    // 0x1bc77c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1bc77cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1bc780:
    // 0x1bc780: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1bc780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_1bc784:
    // 0x1bc784: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc788:
    // 0x1bc788: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1bc788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bc78c:
    // 0x1bc78c: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x1bc78cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
label_1bc790:
    // 0x1bc790: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1bc790u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc794:
    // 0x1bc794: 0x0  nop
    ctx->pc = 0x1bc794u;
    // NOP
label_1bc798:
    // 0x1bc798: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bc798u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bc79c:
    // 0x1bc79c: 0x0  nop
    ctx->pc = 0x1bc79cu;
    // NOP
label_1bc7a0:
    // 0x1bc7a0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1bc7a4:
    if (ctx->pc == 0x1BC7A4u) {
        ctx->pc = 0x1BC7A8u;
        goto label_1bc7a8;
    }
    ctx->pc = 0x1BC7A0u;
    {
        const bool branch_taken_0x1bc7a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc7a0) {
            ctx->pc = 0x1BC7B8u;
            goto label_1bc7b8;
        }
    }
    ctx->pc = 0x1BC7A8u;
label_1bc7a8:
    // 0x1bc7a8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1bc7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_1bc7ac:
    // 0x1bc7ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bc7acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc7b0:
    // 0x1bc7b0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc7b4:
    // 0x1bc7b4: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1bc7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_1bc7b8:
    // 0x1bc7b8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bc7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc7bc:
    // 0x1bc7bc: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bc7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc7c0:
    // 0x1bc7c0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc7c4:
    // 0x1bc7c4: 0x24a40180  addiu       $a0, $a1, 0x180
    ctx->pc = 0x1bc7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
label_1bc7c8:
    // 0x1bc7c8: 0x24c50180  addiu       $a1, $a2, 0x180
    ctx->pc = 0x1bc7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
label_1bc7cc:
    // 0x1bc7cc: 0xc46c1b50  lwc1        $f12, 0x1B50($v1)
    ctx->pc = 0x1bc7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bc7d0:
    // 0x1bc7d0: 0xc040ed8  jal         func_103B60
label_1bc7d4:
    if (ctx->pc == 0x1BC7D4u) {
        ctx->pc = 0x1BC7D8u;
        goto label_1bc7d8;
    }
    ctx->pc = 0x1BC7D0u;
    SET_GPR_U32(ctx, 31, 0x1BC7D8u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1BC7D8u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1BC7D8u) { return; }
    ctx->pc = 0x1BC7D8u;
label_1bc7d8:
    // 0x1bc7d8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc7dc:
    // 0x1bc7dc: 0xc05cd10  jal         func_173440
label_1bc7e0:
    if (ctx->pc == 0x1BC7E0u) {
        ctx->pc = 0x1BC7E4u;
        goto label_1bc7e4;
    }
    ctx->pc = 0x1BC7DCu;
    SET_GPR_U32(ctx, 31, 0x1BC7E4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BC7DCu, 0x1BC7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC7E4u;
label_1bc7e4:
    // 0x1bc7e4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bc7e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bc7e8:
    // 0x1bc7e8: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1bc7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_1bc7ec:
    // 0x1bc7ec: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1bc7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1bc7f0:
    // 0x1bc7f0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1bc7f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1bc7f4:
    // 0x1bc7f4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc7f8:
    // 0x1bc7f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bc7f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1bc7fc:
    // 0x1bc7fc: 0xc057480  jal         func_15D200
label_1bc800:
    if (ctx->pc == 0x1BC800u) {
        ctx->pc = 0x1BC804u;
        goto label_1bc804;
    }
    ctx->pc = 0x1BC7FCu;
    SET_GPR_U32(ctx, 31, 0x1BC804u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1BC7FCu, 0x1BC804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC804u;
label_1bc804:
    // 0x1bc804: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bc804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc808:
    // 0x1bc808: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc80c:
    // 0x1bc80c: 0x24a40120  addiu       $a0, $a1, 0x120
    ctx->pc = 0x1bc80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_1bc810:
    // 0x1bc810: 0x246512c0  addiu       $a1, $v1, 0x12C0
    ctx->pc = 0x1bc810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
label_1bc814:
    // 0x1bc814: 0xc05cf7c  jal         func_173DF0
label_1bc818:
    if (ctx->pc == 0x1BC818u) {
        ctx->pc = 0x1BC81Cu;
        goto label_1bc81c;
    }
    ctx->pc = 0x1BC814u;
    SET_GPR_U32(ctx, 31, 0x1BC81Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1BC814u, 0x1BC81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC81Cu;
label_1bc81c:
    // 0x1bc81c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1bc81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1bc820:
    // 0x1bc820: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc824:
    // 0x1bc824: 0xc4811284  lwc1        $f1, 0x1284($a0)
    ctx->pc = 0x1bc824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bc828:
    // 0x1bc828: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc82c:
    // 0x1bc82c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1bc82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bc830:
    // 0x1bc830: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bc830u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1bc834:
    // 0x1bc834: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1bc834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_1bc838:
    // 0x1bc838: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc83c:
    // 0x1bc83c: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x1bc83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bc840:
    // 0x1bc840: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc844:
    // 0x1bc844: 0xc4801284  lwc1        $f0, 0x1284($a0)
    ctx->pc = 0x1bc844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bc848:
    // 0x1bc848: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bc848u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1bc84c:
    // 0x1bc84c: 0xe4801284  swc1        $f0, 0x1284($a0)
    ctx->pc = 0x1bc84cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4740), bits); }
label_1bc850:
    // 0x1bc850: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc854:
    // 0x1bc854: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1bc854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bc858:
    // 0x1bc858: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1bc858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bc85c:
    // 0x1bc85c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bc85cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bc860:
    // 0x1bc860: 0x0  nop
    ctx->pc = 0x1bc860u;
    // NOP
label_1bc864:
    // 0x1bc864: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1bc868:
    if (ctx->pc == 0x1BC868u) {
        ctx->pc = 0x1BC86Cu;
        goto label_1bc86c;
    }
    ctx->pc = 0x1BC864u;
    {
        const bool branch_taken_0x1bc864 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc864) {
            ctx->pc = 0x1BC884u;
            goto label_1bc884;
        }
    }
    ctx->pc = 0x1BC86Cu;
label_1bc86c:
    // 0x1bc86c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1bc86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bc870:
    // 0x1bc870: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc874:
    // 0x1bc874: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1bc874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_1bc878:
    // 0x1bc878: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bc878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc87c:
    // 0x1bc87c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc880:
    // 0x1bc880: 0xac641b60  sw          $a0, 0x1B60($v1)
    ctx->pc = 0x1bc880u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 4));
label_1bc884:
    // 0x1bc884: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1bc884u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1bc888:
    // 0x1bc888: 0xc097530  jal         func_25D4C0
label_1bc88c:
    if (ctx->pc == 0x1BC88Cu) {
        ctx->pc = 0x1BC890u;
        goto label_1bc890;
    }
    ctx->pc = 0x1BC888u;
    SET_GPR_U32(ctx, 31, 0x1BC890u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BC888u, 0x1BC890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC890u;
label_1bc890:
    // 0x1bc890: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bc890u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bc894:
    // 0x1bc894: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc898:
    // 0x1bc898: 0x8c641b60  lw          $a0, 0x1B60($v1)
    ctx->pc = 0x1bc898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
label_1bc89c:
    // 0x1bc89c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1bc8a0:
    if (ctx->pc == 0x1BC8A0u) {
        ctx->pc = 0x1BC8A4u;
        goto label_1bc8a4;
    }
    ctx->pc = 0x1BC89Cu;
    {
        const bool branch_taken_0x1bc89c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc89c) {
            ctx->pc = 0x1BC8B8u;
            goto label_1bc8b8;
        }
    }
    ctx->pc = 0x1BC8A4u;
label_1bc8a4:
    // 0x1bc8a4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1bc8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1bc8a8:
    // 0x1bc8a8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc8ac:
    // 0x1bc8ac: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1bc8acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
label_1bc8b0:
    // 0x1bc8b0: 0x1000021e  b           . + 4 + (0x21E << 2)
label_1bc8b4:
    if (ctx->pc == 0x1BC8B4u) {
        ctx->pc = 0x1BC8B8u;
        goto label_1bc8b8;
    }
    ctx->pc = 0x1BC8B0u;
    {
        const bool branch_taken_0x1bc8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc8b0) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BC8B8u;
label_1bc8b8:
    // 0x1bc8b8: 0x24040081  addiu       $a0, $zero, 0x81
    ctx->pc = 0x1bc8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_1bc8bc:
    // 0x1bc8bc: 0xc0587a8  jal         func_161EA0
label_1bc8c0:
    if (ctx->pc == 0x1BC8C0u) {
        ctx->pc = 0x1BC8C4u;
        goto label_1bc8c4;
    }
    ctx->pc = 0x1BC8BCu;
    SET_GPR_U32(ctx, 31, 0x1BC8C4u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1BC8BCu, 0x1BC8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC8C4u;
label_1bc8c4:
    // 0x1bc8c4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bc8c4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bc8c8:
    // 0x1bc8c8: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_1bc8cc:
    if (ctx->pc == 0x1BC8CCu) {
        ctx->pc = 0x1BC8D0u;
        goto label_1bc8d0;
    }
    ctx->pc = 0x1BC8C8u;
    {
        const bool branch_taken_0x1bc8c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc8c8) {
            ctx->pc = 0x1BC954u;
            goto label_1bc954;
        }
    }
    ctx->pc = 0x1BC8D0u;
label_1bc8d0:
    // 0x1bc8d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc8d4:
    // 0x1bc8d4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bc8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1bc8d8:
    // 0x1bc8d8: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x1bc8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_1bc8dc:
    // 0x1bc8dc: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x1bc8dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1bc8e0:
    // 0x1bc8e0: 0x10600212  beqz        $v1, . + 4 + (0x212 << 2)
label_1bc8e4:
    if (ctx->pc == 0x1BC8E4u) {
        ctx->pc = 0x1BC8E8u;
        goto label_1bc8e8;
    }
    ctx->pc = 0x1BC8E0u;
    {
        const bool branch_taken_0x1bc8e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc8e0) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BC8E8u;
label_1bc8e8:
    // 0x1bc8e8: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1bc8e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc8ec:
    // 0x1bc8ec: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x1bc8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1bc8f0:
    // 0x1bc8f0: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1bc8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
label_1bc8f4:
    // 0x1bc8f4: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x1bc8f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1bc8f8:
    // 0x1bc8f8: 0x853024  and         $a2, $a0, $a1
    ctx->pc = 0x1bc8f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1bc8fc:
    // 0x1bc8fc: 0xace60008  sw          $a2, 0x8($a3)
    ctx->pc = 0x1bc8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
label_1bc900:
    // 0x1bc900: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc904:
    // 0x1bc904: 0x908313a6  lbu         $v1, 0x13A6($a0)
    ctx->pc = 0x1bc904u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5030)));
label_1bc908:
    // 0x1bc908: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1bc908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1bc90c:
    // 0x1bc90c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bc90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bc910:
    // 0x1bc910: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
label_1bc914:
    if (ctx->pc == 0x1BC914u) {
        ctx->pc = 0x1BC918u;
        goto label_1bc918;
    }
    ctx->pc = 0x1BC910u;
    {
        const bool branch_taken_0x1bc910 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bc910) {
            ctx->pc = 0x1BC940u;
            goto label_1bc940;
        }
    }
    ctx->pc = 0x1BC918u;
label_1bc918:
    // 0x1bc918: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bc918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc91c:
    // 0x1bc91c: 0x10a40008  beq         $a1, $a0, . + 4 + (0x8 << 2)
label_1bc920:
    if (ctx->pc == 0x1BC920u) {
        ctx->pc = 0x1BC924u;
        goto label_1bc924;
    }
    ctx->pc = 0x1BC91Cu;
    {
        const bool branch_taken_0x1bc91c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1bc91c) {
            ctx->pc = 0x1BC940u;
            goto label_1bc940;
        }
    }
    ctx->pc = 0x1BC924u;
label_1bc924:
    // 0x1bc924: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bc924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bc928:
    // 0x1bc928: 0x10a30200  beq         $a1, $v1, . + 4 + (0x200 << 2)
label_1bc92c:
    if (ctx->pc == 0x1BC92Cu) {
        ctx->pc = 0x1BC930u;
        goto label_1bc930;
    }
    ctx->pc = 0x1BC928u;
    {
        const bool branch_taken_0x1bc928 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bc928) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BC930u;
label_1bc930:
    // 0x1bc930: 0x10a001fe  beqz        $a1, . + 4 + (0x1FE << 2)
label_1bc934:
    if (ctx->pc == 0x1BC934u) {
        ctx->pc = 0x1BC938u;
        goto label_1bc938;
    }
    ctx->pc = 0x1BC930u;
    {
        const bool branch_taken_0x1bc930 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc930) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BC938u;
label_1bc938:
    // 0x1bc938: 0x100001fc  b           . + 4 + (0x1FC << 2)
label_1bc93c:
    if (ctx->pc == 0x1BC93Cu) {
        ctx->pc = 0x1BC940u;
        goto label_1bc940;
    }
    ctx->pc = 0x1BC938u;
    {
        const bool branch_taken_0x1bc938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc938) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BC940u;
label_1bc940:
    // 0x1bc940: 0xc0c5238  jal         func_3148E0
label_1bc944:
    if (ctx->pc == 0x1BC944u) {
        ctx->pc = 0x1BC948u;
        goto label_1bc948;
    }
    ctx->pc = 0x1BC940u;
    SET_GPR_U32(ctx, 31, 0x1BC948u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BC940u, 0x1BC948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC948u;
label_1bc948:
    // 0x1bc948: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bc948u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bc94c:
    // 0x1bc94c: 0x100001f7  b           . + 4 + (0x1F7 << 2)
label_1bc950:
    if (ctx->pc == 0x1BC950u) {
        ctx->pc = 0x1BC954u;
        goto label_1bc954;
    }
    ctx->pc = 0x1BC94Cu;
    {
        const bool branch_taken_0x1bc94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc94c) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BC954u;
label_1bc954:
    // 0x1bc954: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc958:
    // 0x1bc958: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1bc958u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1bc95c:
    // 0x1bc95c: 0x106001f3  beqz        $v1, . + 4 + (0x1F3 << 2)
label_1bc960:
    if (ctx->pc == 0x1BC960u) {
        ctx->pc = 0x1BC964u;
        goto label_1bc964;
    }
    ctx->pc = 0x1BC95Cu;
    {
        const bool branch_taken_0x1bc95c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc95c) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BC964u;
label_1bc964:
    // 0x1bc964: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc968:
    // 0x1bc968: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1bc968u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_1bc96c:
    // 0x1bc96c: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x1bc96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1bc970:
    // 0x1bc970: 0xa0850003  sb          $a1, 0x3($a0)
    ctx->pc = 0x1bc970u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 5));
label_1bc974:
    // 0x1bc974: 0x100001ed  b           . + 4 + (0x1ED << 2)
label_1bc978:
    if (ctx->pc == 0x1BC978u) {
        ctx->pc = 0x1BC97Cu;
        goto label_1bc97c;
    }
    ctx->pc = 0x1BC974u;
    {
        const bool branch_taken_0x1bc974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc974) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BC97Cu;
label_1bc97c:
    // 0x1bc97c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc980:
    // 0x1bc980: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc984:
    // 0x1bc984: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1bc984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1bc988:
    // 0x1bc988: 0x24060053  addiu       $a2, $zero, 0x53
    ctx->pc = 0x1bc988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_1bc98c:
    // 0x1bc98c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bc98cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc990:
    // 0x1bc990: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bc990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1bc994:
    // 0x1bc994: 0xc0965d0  jal         func_259740
label_1bc998:
    if (ctx->pc == 0x1BC998u) {
        ctx->pc = 0x1BC99Cu;
        goto label_1bc99c;
    }
    ctx->pc = 0x1BC994u;
    SET_GPR_U32(ctx, 31, 0x1BC99Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BC994u, 0x1BC99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC99Cu;
label_1bc99c:
    // 0x1bc99c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bc99cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bc9a0:
    // 0x1bc9a0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc9a4:
    // 0x1bc9a4: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x1bc9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
label_1bc9a8:
    // 0x1bc9a8: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x1bc9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
label_1bc9ac:
    // 0x1bc9ac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bc9acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc9b0:
    // 0x1bc9b0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc9b4:
    // 0x1bc9b4: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x1bc9b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
label_1bc9b8:
    // 0x1bc9b8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc9bc:
    // 0x1bc9bc: 0x8c631b64  lw          $v1, 0x1B64($v1)
    ctx->pc = 0x1bc9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
label_1bc9c0:
    // 0x1bc9c0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1bc9c4:
    if (ctx->pc == 0x1BC9C4u) {
        ctx->pc = 0x1BC9C8u;
        goto label_1bc9c8;
    }
    ctx->pc = 0x1BC9C0u;
    {
        const bool branch_taken_0x1bc9c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc9c0) {
            ctx->pc = 0x1BC9F8u;
            goto label_1bc9f8;
        }
    }
    ctx->pc = 0x1BC9C8u;
label_1bc9c8:
    // 0x1bc9c8: 0x3c043f19  lui         $a0, 0x3F19
    ctx->pc = 0x1bc9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16153 << 16));
label_1bc9cc:
    // 0x1bc9cc: 0x3483999a  ori         $v1, $a0, 0x999A
    ctx->pc = 0x1bc9ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
label_1bc9d0:
    // 0x1bc9d0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1bc9d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1bc9d4:
    // 0x1bc9d4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc9d8:
    // 0x1bc9d8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bc9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc9dc:
    // 0x1bc9dc: 0x24630180  addiu       $v1, $v1, 0x180
    ctx->pc = 0x1bc9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
label_1bc9e0:
    // 0x1bc9e0: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1bc9e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1bc9e4:
    // 0x1bc9e4: 0x24a20180  addiu       $v0, $a1, 0x180
    ctx->pc = 0x1bc9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
label_1bc9e8:
    // 0x1bc9e8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1bc9e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bc9ec:
    // 0x1bc9ec: 0xc040ed8  jal         func_103B60
label_1bc9f0:
    if (ctx->pc == 0x1BC9F0u) {
        ctx->pc = 0x1BC9F4u;
        goto label_1bc9f4;
    }
    ctx->pc = 0x1BC9ECu;
    SET_GPR_U32(ctx, 31, 0x1BC9F4u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1BC9F4u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1BC9F4u) { return; }
    ctx->pc = 0x1BC9F4u;
label_1bc9f4:
    // 0x1bc9f4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bc9f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bc9f8:
    // 0x1bc9f8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bc9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bc9fc:
    // 0x1bc9fc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bc9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bca00:
    // 0x1bca00: 0x24a41b40  addiu       $a0, $a1, 0x1B40
    ctx->pc = 0x1bca00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 6976));
label_1bca04:
    // 0x1bca04: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x1bca04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_1bca08:
    // 0x1bca08: 0xc040c9e  jal         func_103278
label_1bca0c:
    if (ctx->pc == 0x1BCA0Cu) {
        ctx->pc = 0x1BCA10u;
        goto label_1bca10;
    }
    ctx->pc = 0x1BCA08u;
    SET_GPR_U32(ctx, 31, 0x1BCA10u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1BCA10u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1BCA10u) { return; }
    ctx->pc = 0x1BCA10u;
label_1bca10:
    // 0x1bca10: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bca10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bca14:
    // 0x1bca14: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1bca14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_1bca18:
    // 0x1bca18: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1bca18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1bca1c:
    // 0x1bca1c: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1bca1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1bca20:
    // 0x1bca20: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bca20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bca24:
    // 0x1bca24: 0x8c421b6c  lw          $v0, 0x1B6C($v0)
    ctx->pc = 0x1bca24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
label_1bca28:
    // 0x1bca28: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1bca2c:
    if (ctx->pc == 0x1BCA2Cu) {
        ctx->pc = 0x1BCA30u;
        goto label_1bca30;
    }
    ctx->pc = 0x1BCA28u;
    {
        const bool branch_taken_0x1bca28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bca28) {
            ctx->pc = 0x1BCA4Cu;
            goto label_1bca4c;
        }
    }
    ctx->pc = 0x1BCA30u;
label_1bca30:
    // 0x1bca30: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bca30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1bca34:
    // 0x1bca34: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1bca34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1bca38:
    // 0x1bca38: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x1bca38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
label_1bca3c:
    // 0x1bca3c: 0x3471ffff  ori         $s1, $v1, 0xFFFF
    ctx->pc = 0x1bca3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1bca40:
    // 0x1bca40: 0x919824  and         $s3, $a0, $s1
    ctx->pc = 0x1bca40u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
label_1bca44:
    // 0x1bca44: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bca44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1bca48:
    // 0x1bca48: 0xac331a98  sw          $s3, 0x1A98($at)
    ctx->pc = 0x1bca48u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 19));
label_1bca4c:
    // 0x1bca4c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bca4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bca50:
    // 0x1bca50: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1bca50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1bca54:
    // 0x1bca54: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1bca54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_1bca58:
    // 0x1bca58: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1bca58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1bca5c:
    // 0x1bca5c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1bca5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1bca60:
    // 0x1bca60: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bca60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bca64:
    // 0x1bca64: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bca64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1bca68:
    // 0x1bca68: 0xc096b40  jal         func_25AD00
label_1bca6c:
    if (ctx->pc == 0x1BCA6Cu) {
        ctx->pc = 0x1BCA70u;
        goto label_1bca70;
    }
    ctx->pc = 0x1BCA68u;
    SET_GPR_U32(ctx, 31, 0x1BCA70u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BCA68u, 0x1BCA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCA70u;
label_1bca70:
    // 0x1bca70: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bca70u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bca74:
    // 0x1bca74: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bca74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bca78:
    // 0x1bca78: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bca78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bca7c:
    // 0x1bca7c: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1bca7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bca80:
    // 0x1bca80: 0xc48d1380  lwc1        $f13, 0x1380($a0)
    ctx->pc = 0x1bca80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1bca84:
    // 0x1bca84: 0xc058f20  jal         func_163C80
label_1bca88:
    if (ctx->pc == 0x1BCA88u) {
        ctx->pc = 0x1BCA8Cu;
        goto label_1bca8c;
    }
    ctx->pc = 0x1BCA84u;
    SET_GPR_U32(ctx, 31, 0x1BCA8Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1BCA84u, 0x1BCA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCA8Cu;
label_1bca8c:
    // 0x1bca8c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1bca8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1bca90:
    // 0x1bca90: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1bca90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bca94:
    // 0x1bca94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bca94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bca98:
    // 0x1bca98: 0x0  nop
    ctx->pc = 0x1bca98u;
    // NOP
label_1bca9c:
    // 0x1bca9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bca9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bcaa0:
    // 0x1bcaa0: 0x0  nop
    ctx->pc = 0x1bcaa0u;
    // NOP
label_1bcaa4:
    // 0x1bcaa4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1bcaa8:
    if (ctx->pc == 0x1BCAA8u) {
        ctx->pc = 0x1BCAACu;
        goto label_1bcaac;
    }
    ctx->pc = 0x1BCAA4u;
    {
        const bool branch_taken_0x1bcaa4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bcaa4) {
            ctx->pc = 0x1BCAC0u;
            goto label_1bcac0;
        }
    }
    ctx->pc = 0x1BCAACu;
label_1bcaac:
    // 0x1bcaac: 0x3c10bf80  lui         $s0, 0xBF80
    ctx->pc = 0x1bcaacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49024 << 16));
label_1bcab0:
    // 0x1bcab0: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x1bcab0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bcab4:
    // 0x1bcab4: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1bcab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bcab8:
    // 0x1bcab8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bcab8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1bcabc:
    // 0x1bcabc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1bcabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1bcac0:
    // 0x1bcac0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcac4:
    // 0x1bcac4: 0xc4611b5c  lwc1        $f1, 0x1B5C($v1)
    ctx->pc = 0x1bcac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bcac8:
    // 0x1bcac8: 0x3c044240  lui         $a0, 0x4240
    ctx->pc = 0x1bcac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16960 << 16));
label_1bcacc:
    // 0x1bcacc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bcaccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bcad0:
    // 0x1bcad0: 0x0  nop
    ctx->pc = 0x1bcad0u;
    // NOP
label_1bcad4:
    // 0x1bcad4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bcad4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bcad8:
    // 0x1bcad8: 0x0  nop
    ctx->pc = 0x1bcad8u;
    // NOP
label_1bcadc:
    // 0x1bcadc: 0x45010038  bc1t        . + 4 + (0x38 << 2)
label_1bcae0:
    if (ctx->pc == 0x1BCAE0u) {
        ctx->pc = 0x1BCAE4u;
        goto label_1bcae4;
    }
    ctx->pc = 0x1BCADCu;
    {
        const bool branch_taken_0x1bcadc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bcadc) {
            ctx->pc = 0x1BCBC0u;
            goto label_1bcbc0;
        }
    }
    ctx->pc = 0x1BCAE4u;
label_1bcae4:
    // 0x1bcae4: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1bcae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bcae8:
    // 0x1bcae8: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x1bcae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_1bcaec:
    // 0x1bcaec: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1bcaecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1bcaf0:
    // 0x1bcaf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bcaf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bcaf4:
    // 0x1bcaf4: 0x0  nop
    ctx->pc = 0x1bcaf4u;
    // NOP
label_1bcaf8:
    // 0x1bcaf8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bcaf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bcafc:
    // 0x1bcafc: 0x0  nop
    ctx->pc = 0x1bcafcu;
    // NOP
label_1bcb00:
    // 0x1bcb00: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
label_1bcb04:
    if (ctx->pc == 0x1BCB04u) {
        ctx->pc = 0x1BCB08u;
        goto label_1bcb08;
    }
    ctx->pc = 0x1BCB00u;
    {
        const bool branch_taken_0x1bcb00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bcb00) {
            ctx->pc = 0x1BCB6Cu;
            goto label_1bcb6c;
        }
    }
    ctx->pc = 0x1BCB08u;
label_1bcb08:
    // 0x1bcb08: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bcb08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcb0c:
    // 0x1bcb0c: 0xc4a11b50  lwc1        $f1, 0x1B50($a1)
    ctx->pc = 0x1bcb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bcb10:
    // 0x1bcb10: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1bcb10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_1bcb14:
    // 0x1bcb14: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x1bcb14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_1bcb18:
    // 0x1bcb18: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bcb18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bcb1c:
    // 0x1bcb1c: 0x0  nop
    ctx->pc = 0x1bcb1cu;
    // NOP
label_1bcb20:
    // 0x1bcb20: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1bcb20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1bcb24:
    // 0x1bcb24: 0xe4a01b50  swc1        $f0, 0x1B50($a1)
    ctx->pc = 0x1bcb24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 6992), bits); }
label_1bcb28:
    // 0x1bcb28: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1bcb28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcb2c:
    // 0x1bcb2c: 0xc4e11b50  lwc1        $f1, 0x1B50($a3)
    ctx->pc = 0x1bcb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bcb30:
    // 0x1bcb30: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x1bcb30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
label_1bcb34:
    // 0x1bcb34: 0x34646666  ori         $a0, $v1, 0x6666
    ctx->pc = 0x1bcb34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_1bcb38:
    // 0x1bcb38: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bcb38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bcb3c:
    // 0x1bcb3c: 0x0  nop
    ctx->pc = 0x1bcb3cu;
    // NOP
label_1bcb40:
    // 0x1bcb40: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bcb40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bcb44:
    // 0x1bcb44: 0x0  nop
    ctx->pc = 0x1bcb44u;
    // NOP
label_1bcb48:
    // 0x1bcb48: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
label_1bcb4c:
    if (ctx->pc == 0x1BCB4Cu) {
        ctx->pc = 0x1BCB50u;
        goto label_1bcb50;
    }
    ctx->pc = 0x1BCB48u;
    {
        const bool branch_taken_0x1bcb48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bcb48) {
            ctx->pc = 0x1BCBC0u;
            goto label_1bcbc0;
        }
    }
    ctx->pc = 0x1BCB50u;
label_1bcb50:
    // 0x1bcb50: 0x3c063fa6  lui         $a2, 0x3FA6
    ctx->pc = 0x1bcb50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16294 << 16));
label_1bcb54:
    // 0x1bcb54: 0x34c56666  ori         $a1, $a2, 0x6666
    ctx->pc = 0x1bcb54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)26214);
label_1bcb58:
    // 0x1bcb58: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1bcb58u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bcb5c:
    // 0x1bcb5c: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1bcb5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcb60:
    // 0x1bcb60: 0xe4e01b50  swc1        $f0, 0x1B50($a3)
    ctx->pc = 0x1bcb60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 6992), bits); }
label_1bcb64:
    // 0x1bcb64: 0x10000016  b           . + 4 + (0x16 << 2)
label_1bcb68:
    if (ctx->pc == 0x1BCB68u) {
        ctx->pc = 0x1BCB6Cu;
        goto label_1bcb6c;
    }
    ctx->pc = 0x1BCB64u;
    {
        const bool branch_taken_0x1bcb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcb64) {
            ctx->pc = 0x1BCBC0u;
            goto label_1bcbc0;
        }
    }
    ctx->pc = 0x1BCB6Cu;
label_1bcb6c:
    // 0x1bcb6c: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1bcb6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcb70:
    // 0x1bcb70: 0xc5011b50  lwc1        $f1, 0x1B50($t0)
    ctx->pc = 0x1bcb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bcb74:
    // 0x1bcb74: 0x3c043dcc  lui         $a0, 0x3DCC
    ctx->pc = 0x1bcb74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15820 << 16));
label_1bcb78:
    // 0x1bcb78: 0x3485cccd  ori         $a1, $a0, 0xCCCD
    ctx->pc = 0x1bcb78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_1bcb7c:
    // 0x1bcb7c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1bcb7cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bcb80:
    // 0x1bcb80: 0x0  nop
    ctx->pc = 0x1bcb80u;
    // NOP
label_1bcb84:
    // 0x1bcb84: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1bcb84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1bcb88:
    // 0x1bcb88: 0xe5001b50  swc1        $f0, 0x1B50($t0)
    ctx->pc = 0x1bcb88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 6992), bits); }
label_1bcb8c:
    // 0x1bcb8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcb90:
    // 0x1bcb90: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1bcb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bcb94:
    // 0x1bcb94: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1bcb94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_1bcb98:
    // 0x1bcb98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bcb98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bcb9c:
    // 0x1bcb9c: 0x0  nop
    ctx->pc = 0x1bcb9cu;
    // NOP
label_1bcba0:
    // 0x1bcba0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bcba0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bcba4:
    // 0x1bcba4: 0x0  nop
    ctx->pc = 0x1bcba4u;
    // NOP
label_1bcba8:
    // 0x1bcba8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1bcbac:
    if (ctx->pc == 0x1BCBACu) {
        ctx->pc = 0x1BCBB0u;
        goto label_1bcbb0;
    }
    ctx->pc = 0x1BCBA8u;
    {
        const bool branch_taken_0x1bcba8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bcba8) {
            ctx->pc = 0x1BCBC0u;
            goto label_1bcbc0;
        }
    }
    ctx->pc = 0x1BCBB0u;
label_1bcbb0:
    // 0x1bcbb0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1bcbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1bcbb4:
    // 0x1bcbb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bcbb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bcbb8:
    // 0x1bcbb8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcbbc:
    // 0x1bcbbc: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1bcbbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_1bcbc0:
    // 0x1bcbc0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bcbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcbc4:
    // 0x1bcbc4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcbc8:
    // 0x1bcbc8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bcbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcbcc:
    // 0x1bcbcc: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x1bcbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
label_1bcbd0:
    // 0x1bcbd0: 0x24651b40  addiu       $a1, $v1, 0x1B40
    ctx->pc = 0x1bcbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
label_1bcbd4:
    // 0x1bcbd4: 0xc44c1b50  lwc1        $f12, 0x1B50($v0)
    ctx->pc = 0x1bcbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bcbd8:
    // 0x1bcbd8: 0xc040ed8  jal         func_103B60
label_1bcbdc:
    if (ctx->pc == 0x1BCBDCu) {
        ctx->pc = 0x1BCBE0u;
        goto label_1bcbe0;
    }
    ctx->pc = 0x1BCBD8u;
    SET_GPR_U32(ctx, 31, 0x1BCBE0u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1BCBE0u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1BCBE0u) { return; }
    ctx->pc = 0x1BCBE0u;
label_1bcbe0:
    // 0x1bcbe0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bcbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcbe4:
    // 0x1bcbe4: 0xc05cd10  jal         func_173440
label_1bcbe8:
    if (ctx->pc == 0x1BCBE8u) {
        ctx->pc = 0x1BCBECu;
        goto label_1bcbec;
    }
    ctx->pc = 0x1BCBE4u;
    SET_GPR_U32(ctx, 31, 0x1BCBECu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BCBE4u, 0x1BCBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCBECu;
label_1bcbec:
    // 0x1bcbec: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1bcbecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_1bcbf0:
    // 0x1bcbf0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1bcbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1bcbf4:
    // 0x1bcbf4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1bcbf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1bcbf8:
    // 0x1bcbf8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bcbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcbfc:
    // 0x1bcbfc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bcbfcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1bcc00:
    // 0x1bcc00: 0xc057480  jal         func_15D200
label_1bcc04:
    if (ctx->pc == 0x1BCC04u) {
        ctx->pc = 0x1BCC08u;
        goto label_1bcc08;
    }
    ctx->pc = 0x1BCC00u;
    SET_GPR_U32(ctx, 31, 0x1BCC08u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1BCC00u, 0x1BCC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC08u;
label_1bcc08:
    // 0x1bcc08: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bcc08u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bcc0c:
    // 0x1bcc0c: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bcc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcc10:
    // 0x1bcc10: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcc14:
    // 0x1bcc14: 0x24c40120  addiu       $a0, $a2, 0x120
    ctx->pc = 0x1bcc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
label_1bcc18:
    // 0x1bcc18: 0x246512c0  addiu       $a1, $v1, 0x12C0
    ctx->pc = 0x1bcc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
label_1bcc1c:
    // 0x1bcc1c: 0xc05cf7c  jal         func_173DF0
label_1bcc20:
    if (ctx->pc == 0x1BCC20u) {
        ctx->pc = 0x1BCC24u;
        goto label_1bcc24;
    }
    ctx->pc = 0x1BCC1Cu;
    SET_GPR_U32(ctx, 31, 0x1BCC24u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1BCC1Cu, 0x1BCC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC24u;
label_1bcc24:
    // 0x1bcc24: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1bcc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1bcc28:
    // 0x1bcc28: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcc2c:
    // 0x1bcc2c: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x1bcc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bcc30:
    // 0x1bcc30: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcc34:
    // 0x1bcc34: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1bcc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bcc38:
    // 0x1bcc38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bcc38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1bcc3c:
    // 0x1bcc3c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1bcc3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_1bcc40:
    // 0x1bcc40: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcc44:
    // 0x1bcc44: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x1bcc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bcc48:
    // 0x1bcc48: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bcc48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcc4c:
    // 0x1bcc4c: 0xc4c01284  lwc1        $f0, 0x1284($a2)
    ctx->pc = 0x1bcc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bcc50:
    // 0x1bcc50: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bcc50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1bcc54:
    // 0x1bcc54: 0xe4c01284  swc1        $f0, 0x1284($a2)
    ctx->pc = 0x1bcc54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4740), bits); }
label_1bcc58:
    // 0x1bcc58: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bcc58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcc5c:
    // 0x1bcc5c: 0xc4a10124  lwc1        $f1, 0x124($a1)
    ctx->pc = 0x1bcc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bcc60:
    // 0x1bcc60: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1bcc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bcc64:
    // 0x1bcc64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bcc64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bcc68:
    // 0x1bcc68: 0x0  nop
    ctx->pc = 0x1bcc68u;
    // NOP
label_1bcc6c:
    // 0x1bcc6c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1bcc70:
    if (ctx->pc == 0x1BCC70u) {
        ctx->pc = 0x1BCC74u;
        goto label_1bcc74;
    }
    ctx->pc = 0x1BCC6Cu;
    {
        const bool branch_taken_0x1bcc6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bcc6c) {
            ctx->pc = 0x1BCC8Cu;
            goto label_1bcc8c;
        }
    }
    ctx->pc = 0x1BCC74u;
label_1bcc74:
    // 0x1bcc74: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1bcc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bcc78:
    // 0x1bcc78: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bcc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcc7c:
    // 0x1bcc7c: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1bcc7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_1bcc80:
    // 0x1bcc80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bcc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bcc84:
    // 0x1bcc84: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bcc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcc88:
    // 0x1bcc88: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x1bcc88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
label_1bcc8c:
    // 0x1bcc8c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1bcc8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1bcc90:
    // 0x1bcc90: 0xc097530  jal         func_25D4C0
label_1bcc94:
    if (ctx->pc == 0x1BCC94u) {
        ctx->pc = 0x1BCC98u;
        goto label_1bcc98;
    }
    ctx->pc = 0x1BCC90u;
    SET_GPR_U32(ctx, 31, 0x1BCC98u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BCC90u, 0x1BCC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC98u;
label_1bcc98:
    // 0x1bcc98: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x1bcc98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcc9c:
    // 0x1bcc9c: 0x8e051b60  lw          $a1, 0x1B60($s0)
    ctx->pc = 0x1bcc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7008)));
label_1bcca0:
    // 0x1bcca0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1bcca4:
    if (ctx->pc == 0x1BCCA4u) {
        ctx->pc = 0x1BCCA8u;
        goto label_1bcca8;
    }
    ctx->pc = 0x1BCCA0u;
    {
        const bool branch_taken_0x1bcca0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcca0) {
            ctx->pc = 0x1BCCBCu;
            goto label_1bccbc;
        }
    }
    ctx->pc = 0x1BCCA8u;
label_1bcca8:
    // 0x1bcca8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1bcca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1bccac:
    // 0x1bccac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bccacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bccb0:
    // 0x1bccb0: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1bccb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1bccb4:
    // 0x1bccb4: 0x1000011d  b           . + 4 + (0x11D << 2)
label_1bccb8:
    if (ctx->pc == 0x1BCCB8u) {
        ctx->pc = 0x1BCCBCu;
        goto label_1bccbc;
    }
    ctx->pc = 0x1BCCB4u;
    {
        const bool branch_taken_0x1bccb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bccb4) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BCCBCu;
label_1bccbc:
    // 0x1bccbc: 0x24040081  addiu       $a0, $zero, 0x81
    ctx->pc = 0x1bccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_1bccc0:
    // 0x1bccc0: 0xc0587a8  jal         func_161EA0
label_1bccc4:
    if (ctx->pc == 0x1BCCC4u) {
        ctx->pc = 0x1BCCC8u;
        goto label_1bccc8;
    }
    ctx->pc = 0x1BCCC0u;
    SET_GPR_U32(ctx, 31, 0x1BCCC8u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1BCCC0u, 0x1BCCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCCC8u;
label_1bccc8:
    // 0x1bccc8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bccc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bcccc:
    // 0x1bcccc: 0x10800117  beqz        $a0, . + 4 + (0x117 << 2)
label_1bccd0:
    if (ctx->pc == 0x1BCCD0u) {
        ctx->pc = 0x1BCCD4u;
        goto label_1bccd4;
    }
    ctx->pc = 0x1BCCCCu;
    {
        const bool branch_taken_0x1bcccc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcccc) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BCCD4u;
label_1bccd4:
    // 0x1bccd4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bccd8:
    // 0x1bccd8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1bccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1bccdc:
    // 0x1bccdc: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x1bccdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_1bcce0:
    // 0x1bcce0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1bcce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_1bcce4:
    // 0x1bcce4: 0x10600111  beqz        $v1, . + 4 + (0x111 << 2)
label_1bcce8:
    if (ctx->pc == 0x1BCCE8u) {
        ctx->pc = 0x1BCCECu;
        goto label_1bccec;
    }
    ctx->pc = 0x1BCCE4u;
    {
        const bool branch_taken_0x1bcce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcce4) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BCCECu;
label_1bccec:
    // 0x1bccec: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bccecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bccf0:
    // 0x1bccf0: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1bccf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1bccf4:
    // 0x1bccf4: 0x3c05feff  lui         $a1, 0xFEFF
    ctx->pc = 0x1bccf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65279 << 16));
label_1bccf8:
    // 0x1bccf8: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x1bccf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_1bccfc:
    // 0x1bccfc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bccfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1bcd00:
    // 0x1bcd00: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1bcd00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1bcd04:
    // 0x1bcd04: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bcd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcd08:
    // 0x1bcd08: 0x908313a6  lbu         $v1, 0x13A6($a0)
    ctx->pc = 0x1bcd08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5030)));
label_1bcd0c:
    // 0x1bcd0c: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x1bcd0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1bcd10:
    // 0x1bcd10: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bcd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bcd14:
    // 0x1bcd14: 0x10c3000b  beq         $a2, $v1, . + 4 + (0xB << 2)
label_1bcd18:
    if (ctx->pc == 0x1BCD18u) {
        ctx->pc = 0x1BCD1Cu;
        goto label_1bcd1c;
    }
    ctx->pc = 0x1BCD14u;
    {
        const bool branch_taken_0x1bcd14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bcd14) {
            ctx->pc = 0x1BCD44u;
            goto label_1bcd44;
        }
    }
    ctx->pc = 0x1BCD1Cu;
label_1bcd1c:
    // 0x1bcd1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bcd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bcd20:
    // 0x1bcd20: 0x10c50008  beq         $a2, $a1, . + 4 + (0x8 << 2)
label_1bcd24:
    if (ctx->pc == 0x1BCD24u) {
        ctx->pc = 0x1BCD28u;
        goto label_1bcd28;
    }
    ctx->pc = 0x1BCD20u;
    {
        const bool branch_taken_0x1bcd20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x1bcd20) {
            ctx->pc = 0x1BCD44u;
            goto label_1bcd44;
        }
    }
    ctx->pc = 0x1BCD28u;
label_1bcd28:
    // 0x1bcd28: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1bcd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bcd2c:
    // 0x1bcd2c: 0x10c400ff  beq         $a2, $a0, . + 4 + (0xFF << 2)
label_1bcd30:
    if (ctx->pc == 0x1BCD30u) {
        ctx->pc = 0x1BCD34u;
        goto label_1bcd34;
    }
    ctx->pc = 0x1BCD2Cu;
    {
        const bool branch_taken_0x1bcd2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x1bcd2c) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BCD34u;
label_1bcd34:
    // 0x1bcd34: 0x10c000fd  beqz        $a2, . + 4 + (0xFD << 2)
label_1bcd38:
    if (ctx->pc == 0x1BCD38u) {
        ctx->pc = 0x1BCD3Cu;
        goto label_1bcd3c;
    }
    ctx->pc = 0x1BCD34u;
    {
        const bool branch_taken_0x1bcd34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcd34) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BCD3Cu;
label_1bcd3c:
    // 0x1bcd3c: 0x100000fb  b           . + 4 + (0xFB << 2)
label_1bcd40:
    if (ctx->pc == 0x1BCD40u) {
        ctx->pc = 0x1BCD44u;
        goto label_1bcd44;
    }
    ctx->pc = 0x1BCD3Cu;
    {
        const bool branch_taken_0x1bcd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcd3c) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BCD44u;
label_1bcd44:
    // 0x1bcd44: 0xc0c5238  jal         func_3148E0
label_1bcd48:
    if (ctx->pc == 0x1BCD48u) {
        ctx->pc = 0x1BCD4Cu;
        goto label_1bcd4c;
    }
    ctx->pc = 0x1BCD44u;
    SET_GPR_U32(ctx, 31, 0x1BCD4Cu);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BCD44u, 0x1BCD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD4Cu;
label_1bcd4c:
    // 0x1bcd4c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bcd4cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bcd50:
    // 0x1bcd50: 0x100000f6  b           . + 4 + (0xF6 << 2)
label_1bcd54:
    if (ctx->pc == 0x1BCD54u) {
        ctx->pc = 0x1BCD58u;
        goto label_1bcd58;
    }
    ctx->pc = 0x1BCD50u;
    {
        const bool branch_taken_0x1bcd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcd50) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BCD58u;
label_1bcd58:
    // 0x1bcd58: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bcd58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcd5c:
    // 0x1bcd5c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcd60:
    // 0x1bcd60: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1bcd60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1bcd64:
    // 0x1bcd64: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x1bcd64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1bcd68:
    // 0x1bcd68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bcd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bcd6c:
    // 0x1bcd6c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1bcd6cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bcd70:
    // 0x1bcd70: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1bcd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1bcd74:
    // 0x1bcd74: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x1bcd74u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bcd78:
    // 0x1bcd78: 0xc0965d0  jal         func_259740
label_1bcd7c:
    if (ctx->pc == 0x1BCD7Cu) {
        ctx->pc = 0x1BCD80u;
        goto label_1bcd80;
    }
    ctx->pc = 0x1BCD78u;
    SET_GPR_U32(ctx, 31, 0x1BCD80u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BCD78u, 0x1BCD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD80u;
label_1bcd80:
    // 0x1bcd80: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1bcd80u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bcd84:
    // 0x1bcd84: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1bcd84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcd88:
    // 0x1bcd88: 0xc4e11284  lwc1        $f1, 0x1284($a3)
    ctx->pc = 0x1bcd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bcd8c:
    // 0x1bcd8c: 0x3c02c332  lui         $v0, 0xC332
    ctx->pc = 0x1bcd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49970 << 16));
label_1bcd90:
    // 0x1bcd90: 0x34488000  ori         $t0, $v0, 0x8000
    ctx->pc = 0x1bcd90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1bcd94:
    // 0x1bcd94: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1bcd94u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bcd98:
    // 0x1bcd98: 0x0  nop
    ctx->pc = 0x1bcd98u;
    // NOP
label_1bcd9c:
    // 0x1bcd9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bcd9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bcda0:
    // 0x1bcda0: 0x0  nop
    ctx->pc = 0x1bcda0u;
    // NOP
label_1bcda4:
    // 0x1bcda4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1bcda8:
    if (ctx->pc == 0x1BCDA8u) {
        ctx->pc = 0x1BCDACu;
        goto label_1bcdac;
    }
    ctx->pc = 0x1BCDA4u;
    {
        const bool branch_taken_0x1bcda4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bcda4) {
            ctx->pc = 0x1BCDB8u;
            goto label_1bcdb8;
        }
    }
    ctx->pc = 0x1BCDACu;
label_1bcdac:
    // 0x1bcdac: 0xc05772c  jal         func_15DCB0
label_1bcdb0:
    if (ctx->pc == 0x1BCDB0u) {
        ctx->pc = 0x1BCDB4u;
        goto label_1bcdb4;
    }
    ctx->pc = 0x1BCDACu;
    SET_GPR_U32(ctx, 31, 0x1BCDB4u);
    ctx->pc = 0x15DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DCB0u, 0x1BCDACu, 0x1BCDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCDB4u;
label_1bcdb4:
    // 0x1bcdb4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bcdb4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bcdb8:
    // 0x1bcdb8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bcdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcdbc:
    // 0x1bcdbc: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x1bcdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
label_1bcdc0:
    // 0x1bcdc0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bcdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcdc4:
    // 0x1bcdc4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1bcdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1bcdc8:
    // 0x1bcdc8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1bcdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_1bcdcc:
    // 0x1bcdcc: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x1bcdccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1bcdd0:
    // 0x1bcdd0: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_1bcdd4:
    if (ctx->pc == 0x1BCDD4u) {
        ctx->pc = 0x1BCDD8u;
        goto label_1bcdd8;
    }
    ctx->pc = 0x1BCDD0u;
    {
        const bool branch_taken_0x1bcdd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcdd0) {
            ctx->pc = 0x1BCE3Cu;
            goto label_1bce3c;
        }
    }
    ctx->pc = 0x1BCDD8u;
label_1bcdd8:
    // 0x1bcdd8: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bcdd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcddc:
    // 0x1bcddc: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1bcddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1bcde0:
    // 0x1bcde0: 0x3c04feff  lui         $a0, 0xFEFF
    ctx->pc = 0x1bcde0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65279 << 16));
label_1bcde4:
    // 0x1bcde4: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x1bcde4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_1bcde8:
    // 0x1bcde8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1bcde8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_1bcdec:
    // 0x1bcdec: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1bcdecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1bcdf0:
    // 0x1bcdf0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcdf4:
    // 0x1bcdf4: 0x906213a6  lbu         $v0, 0x13A6($v1)
    ctx->pc = 0x1bcdf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
label_1bcdf8:
    // 0x1bcdf8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1bcdf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1bcdfc:
    // 0x1bcdfc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1bcdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bce00:
    // 0x1bce00: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
label_1bce04:
    if (ctx->pc == 0x1BCE04u) {
        ctx->pc = 0x1BCE08u;
        goto label_1bce08;
    }
    ctx->pc = 0x1BCE00u;
    {
        const bool branch_taken_0x1bce00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bce00) {
            ctx->pc = 0x1BCE30u;
            goto label_1bce30;
        }
    }
    ctx->pc = 0x1BCE08u;
label_1bce08:
    // 0x1bce08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bce08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bce0c:
    // 0x1bce0c: 0x10850008  beq         $a0, $a1, . + 4 + (0x8 << 2)
label_1bce10:
    if (ctx->pc == 0x1BCE10u) {
        ctx->pc = 0x1BCE14u;
        goto label_1bce14;
    }
    ctx->pc = 0x1BCE0Cu;
    {
        const bool branch_taken_0x1bce0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1bce0c) {
            ctx->pc = 0x1BCE30u;
            goto label_1bce30;
        }
    }
    ctx->pc = 0x1BCE14u;
label_1bce14:
    // 0x1bce14: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1bce14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bce18:
    // 0x1bce18: 0x10860008  beq         $a0, $a2, . + 4 + (0x8 << 2)
label_1bce1c:
    if (ctx->pc == 0x1BCE1Cu) {
        ctx->pc = 0x1BCE20u;
        goto label_1bce20;
    }
    ctx->pc = 0x1BCE18u;
    {
        const bool branch_taken_0x1bce18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x1bce18) {
            ctx->pc = 0x1BCE3Cu;
            goto label_1bce3c;
        }
    }
    ctx->pc = 0x1BCE20u;
label_1bce20:
    // 0x1bce20: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1bce24:
    if (ctx->pc == 0x1BCE24u) {
        ctx->pc = 0x1BCE28u;
        goto label_1bce28;
    }
    ctx->pc = 0x1BCE20u;
    {
        const bool branch_taken_0x1bce20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bce20) {
            ctx->pc = 0x1BCE3Cu;
            goto label_1bce3c;
        }
    }
    ctx->pc = 0x1BCE28u;
label_1bce28:
    // 0x1bce28: 0x10000004  b           . + 4 + (0x4 << 2)
label_1bce2c:
    if (ctx->pc == 0x1BCE2Cu) {
        ctx->pc = 0x1BCE30u;
        goto label_1bce30;
    }
    ctx->pc = 0x1BCE28u;
    {
        const bool branch_taken_0x1bce28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bce28) {
            ctx->pc = 0x1BCE3Cu;
            goto label_1bce3c;
        }
    }
    ctx->pc = 0x1BCE30u;
label_1bce30:
    // 0x1bce30: 0xc0c5238  jal         func_3148E0
label_1bce34:
    if (ctx->pc == 0x1BCE34u) {
        ctx->pc = 0x1BCE38u;
        goto label_1bce38;
    }
    ctx->pc = 0x1BCE30u;
    SET_GPR_U32(ctx, 31, 0x1BCE38u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BCE30u, 0x1BCE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE38u;
label_1bce38:
    // 0x1bce38: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1bce38u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bce3c:
    // 0x1bce3c: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1bce3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bce40:
    // 0x1bce40: 0x91020003  lbu         $v0, 0x3($t0)
    ctx->pc = 0x1bce40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
label_1bce44:
    // 0x1bce44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bce44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1bce48:
    // 0x1bce48: 0xa1020003  sb          $v0, 0x3($t0)
    ctx->pc = 0x1bce48u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 2));
label_1bce4c:
    // 0x1bce4c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bce50:
    // 0x1bce50: 0x8c421b6c  lw          $v0, 0x1B6C($v0)
    ctx->pc = 0x1bce50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
label_1bce54:
    // 0x1bce54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1bce58:
    if (ctx->pc == 0x1BCE58u) {
        ctx->pc = 0x1BCE5Cu;
        goto label_1bce5c;
    }
    ctx->pc = 0x1BCE54u;
    {
        const bool branch_taken_0x1bce54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bce54) {
            ctx->pc = 0x1BCE78u;
            goto label_1bce78;
        }
    }
    ctx->pc = 0x1BCE5Cu;
label_1bce5c:
    // 0x1bce5c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bce5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1bce60:
    // 0x1bce60: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1bce60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1bce64:
    // 0x1bce64: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x1bce64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
label_1bce68:
    // 0x1bce68: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1bce68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1bce6c:
    // 0x1bce6c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1bce6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1bce70:
    // 0x1bce70: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bce70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1bce74:
    // 0x1bce74: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1bce74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_1bce78:
    // 0x1bce78: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bce78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bce7c:
    // 0x1bce7c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bce7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1bce80:
    // 0x1bce80: 0xc096b40  jal         func_25AD00
label_1bce84:
    if (ctx->pc == 0x1BCE84u) {
        ctx->pc = 0x1BCE88u;
        goto label_1bce88;
    }
    ctx->pc = 0x1BCE80u;
    SET_GPR_U32(ctx, 31, 0x1BCE88u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BCE80u, 0x1BCE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE88u;
label_1bce88:
    // 0x1bce88: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1bce88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bce8c:
    // 0x1bce8c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bce90:
    // 0x1bce90: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bce90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bce94:
    // 0x1bce94: 0xc05cd10  jal         func_173440
label_1bce98:
    if (ctx->pc == 0x1BCE98u) {
        ctx->pc = 0x1BCE9Cu;
        goto label_1bce9c;
    }
    ctx->pc = 0x1BCE94u;
    SET_GPR_U32(ctx, 31, 0x1BCE9Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BCE94u, 0x1BCE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE9Cu;
label_1bce9c:
    // 0x1bce9c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bce9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1bcea0:
    // 0x1bcea0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bcea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcea4:
    // 0x1bcea4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bcea4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1bcea8:
    // 0x1bcea8: 0xc0573d8  jal         func_15CF60
label_1bceac:
    if (ctx->pc == 0x1BCEACu) {
        ctx->pc = 0x1BCEB0u;
        goto label_1bceb0;
    }
    ctx->pc = 0x1BCEA8u;
    SET_GPR_U32(ctx, 31, 0x1BCEB0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1BCEA8u, 0x1BCEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCEB0u;
label_1bceb0:
    // 0x1bceb0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1bceb0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1bceb4:
    // 0x1bceb4: 0xc097530  jal         func_25D4C0
label_1bceb8:
    if (ctx->pc == 0x1BCEB8u) {
        ctx->pc = 0x1BCEBCu;
        goto label_1bcebc;
    }
    ctx->pc = 0x1BCEB4u;
    SET_GPR_U32(ctx, 31, 0x1BCEBCu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BCEB4u, 0x1BCEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCEBCu;
label_1bcebc:
    // 0x1bcebc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bcebcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bcec0:
    // 0x1bcec0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcec4:
    // 0x1bcec4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bcec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcec8:
    // 0x1bcec8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1bcec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1bcecc:
    // 0x1bcecc: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1bceccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_1bced0:
    // 0x1bced0: 0xc05cf7c  jal         func_173DF0
label_1bced4:
    if (ctx->pc == 0x1BCED4u) {
        ctx->pc = 0x1BCED8u;
        goto label_1bced8;
    }
    ctx->pc = 0x1BCED0u;
    SET_GPR_U32(ctx, 31, 0x1BCED8u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1BCED0u, 0x1BCED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCED8u;
label_1bced8:
    // 0x1bced8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1bced8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1bcedc:
    // 0x1bcedc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcee0:
    // 0x1bcee0: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1bcee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bcee4:
    // 0x1bcee4: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x1bcee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
label_1bcee8:
    // 0x1bcee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bcee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bceec:
    // 0x1bceec: 0x0  nop
    ctx->pc = 0x1bceecu;
    // NOP
label_1bcef0:
    // 0x1bcef0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1bcef0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1bcef4:
    // 0x1bcef4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1bcef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bcef8:
    // 0x1bcef8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1bcef8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bcefc:
    // 0x1bcefc: 0x0  nop
    ctx->pc = 0x1bcefcu;
    // NOP
label_1bcf00:
    // 0x1bcf00: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
label_1bcf04:
    if (ctx->pc == 0x1BCF04u) {
        ctx->pc = 0x1BCF08u;
        goto label_1bcf08;
    }
    ctx->pc = 0x1BCF00u;
    {
        const bool branch_taken_0x1bcf00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bcf00) {
            ctx->pc = 0x1BCF80u;
            goto label_1bcf80;
        }
    }
    ctx->pc = 0x1BCF08u;
label_1bcf08:
    // 0x1bcf08: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bcf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcf0c:
    // 0x1bcf0c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bcf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcf10:
    // 0x1bcf10: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcf14:
    // 0x1bcf14: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x1bcf14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
label_1bcf18:
    // 0x1bcf18: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x1bcf18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_1bcf1c:
    // 0x1bcf1c: 0x24660170  addiu       $a2, $v1, 0x170
    ctx->pc = 0x1bcf1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
label_1bcf20:
    // 0x1bcf20: 0xc0675b0  jal         func_19D6C0
label_1bcf24:
    if (ctx->pc == 0x1BCF24u) {
        ctx->pc = 0x1BCF28u;
        goto label_1bcf28;
    }
    ctx->pc = 0x1BCF20u;
    SET_GPR_U32(ctx, 31, 0x1BCF28u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1BCF20u, 0x1BCF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCF28u;
label_1bcf28:
    // 0x1bcf28: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcf28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcf2c:
    // 0x1bcf2c: 0x8fb20068  lw          $s2, 0x68($sp)
    ctx->pc = 0x1bcf2cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcf30:
    // 0x1bcf30: 0xc46c1b40  lwc1        $f12, 0x1B40($v1)
    ctx->pc = 0x1bcf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bcf34:
    // 0x1bcf34: 0xc64d1b48  lwc1        $f13, 0x1B48($s2)
    ctx->pc = 0x1bcf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1bcf38:
    // 0x1bcf38: 0xc0455e6  jal         func_115798
label_1bcf3c:
    if (ctx->pc == 0x1BCF3Cu) {
        ctx->pc = 0x1BCF40u;
        goto label_1bcf40;
    }
    ctx->pc = 0x1BCF38u;
    SET_GPR_U32(ctx, 31, 0x1BCF40u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1BCF38u, 0x1BCF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCF40u;
label_1bcf40:
    // 0x1bcf40: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcf44:
    // 0x1bcf44: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1bcf44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
label_1bcf48:
    // 0x1bcf48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bcf48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bcf4c:
    // 0x1bcf4c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcf50:
    // 0x1bcf50: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1bcf50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_1bcf54:
    // 0x1bcf54: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x1bcf54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1bcf58:
    // 0x1bcf58: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bcf58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcf5c:
    // 0x1bcf5c: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x1bcf5cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
label_1bcf60:
    // 0x1bcf60: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bcf60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcf64:
    // 0x1bcf64: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x1bcf64u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
label_1bcf68:
    // 0x1bcf68: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcf68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcf6c:
    // 0x1bcf6c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1bcf6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1bcf70:
    // 0x1bcf70: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bcf70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcf74:
    // 0x1bcf74: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1bcf74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1bcf78:
    // 0x1bcf78: 0x1000006c  b           . + 4 + (0x6C << 2)
label_1bcf7c:
    if (ctx->pc == 0x1BCF7Cu) {
        ctx->pc = 0x1BCF80u;
        goto label_1bcf80;
    }
    ctx->pc = 0x1BCF78u;
    {
        const bool branch_taken_0x1bcf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcf78) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BCF80u;
label_1bcf80:
    // 0x1bcf80: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bcf80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcf84:
    // 0x1bcf84: 0x24a212c0  addiu       $v0, $a1, 0x12C0
    ctx->pc = 0x1bcf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4800));
label_1bcf88:
    // 0x1bcf88: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bcf88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bcf8c:
    // 0x1bcf8c: 0xc057b54  jal         func_15ED50
label_1bcf90:
    if (ctx->pc == 0x1BCF90u) {
        ctx->pc = 0x1BCF94u;
        goto label_1bcf94;
    }
    ctx->pc = 0x1BCF8Cu;
    SET_GPR_U32(ctx, 31, 0x1BCF94u);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x1BCF8Cu, 0x1BCF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCF94u;
label_1bcf94:
    // 0x1bcf94: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bcf94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bcf98:
    // 0x1bcf98: 0x14800064  bnez        $a0, . + 4 + (0x64 << 2)
label_1bcf9c:
    if (ctx->pc == 0x1BCF9Cu) {
        ctx->pc = 0x1BCFA0u;
        goto label_1bcfa0;
    }
    ctx->pc = 0x1BCF98u;
    {
        const bool branch_taken_0x1bcf98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bcf98) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BCFA0u;
label_1bcfa0:
    // 0x1bcfa0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcfa4:
    // 0x1bcfa4: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x1bcfa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
label_1bcfa8:
    // 0x1bcfa8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bcfa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1bcfac:
    // 0x1bcfac: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x1bcfacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_1bcfb0:
    // 0x1bcfb0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_1bcfb4:
    if (ctx->pc == 0x1BCFB4u) {
        ctx->pc = 0x1BCFB8u;
        goto label_1bcfb8;
    }
    ctx->pc = 0x1BCFB0u;
    {
        const bool branch_taken_0x1bcfb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcfb0) {
            ctx->pc = 0x1BCFD8u;
            goto label_1bcfd8;
        }
    }
    ctx->pc = 0x1BCFB8u;
label_1bcfb8:
    // 0x1bcfb8: 0xc0585dc  jal         func_161770
label_1bcfbc:
    if (ctx->pc == 0x1BCFBCu) {
        ctx->pc = 0x1BCFC0u;
        goto label_1bcfc0;
    }
    ctx->pc = 0x1BCFB8u;
    SET_GPR_U32(ctx, 31, 0x1BCFC0u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x1BCFB8u, 0x1BCFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCFC0u;
label_1bcfc0:
    // 0x1bcfc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1bcfc4:
    if (ctx->pc == 0x1BCFC4u) {
        ctx->pc = 0x1BCFC8u;
        goto label_1bcfc8;
    }
    ctx->pc = 0x1BCFC0u;
    {
        const bool branch_taken_0x1bcfc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcfc0) {
            ctx->pc = 0x1BCFD8u;
            goto label_1bcfd8;
        }
    }
    ctx->pc = 0x1BCFC8u;
label_1bcfc8:
    // 0x1bcfc8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bcfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcfcc:
    // 0x1bcfcc: 0xa0a010a8  sb          $zero, 0x10A8($a1)
    ctx->pc = 0x1bcfccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4264), (uint8_t)GPR_U32(ctx, 0));
label_1bcfd0:
    // 0x1bcfd0: 0x10000056  b           . + 4 + (0x56 << 2)
label_1bcfd4:
    if (ctx->pc == 0x1BCFD4u) {
        ctx->pc = 0x1BCFD8u;
        goto label_1bcfd8;
    }
    ctx->pc = 0x1BCFD0u;
    {
        const bool branch_taken_0x1bcfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcfd0) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BCFD8u;
label_1bcfd8:
    // 0x1bcfd8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcfdc:
    // 0x1bcfdc: 0x906409e7  lbu         $a0, 0x9E7($v1)
    ctx->pc = 0x1bcfdcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1bcfe0:
    // 0x1bcfe0: 0x10800052  beqz        $a0, . + 4 + (0x52 << 2)
label_1bcfe4:
    if (ctx->pc == 0x1BCFE4u) {
        ctx->pc = 0x1BCFE8u;
        goto label_1bcfe8;
    }
    ctx->pc = 0x1BCFE0u;
    {
        const bool branch_taken_0x1bcfe0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcfe0) {
            ctx->pc = 0x1BD12Cu;
            goto label_1bd12c;
        }
    }
    ctx->pc = 0x1BCFE8u;
label_1bcfe8:
    // 0x1bcfe8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bcfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcfec:
    // 0x1bcfec: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1bcfecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1bcff0:
    // 0x1bcff0: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1bcff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_1bcff4:
    // 0x1bcff4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bcff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1bcff8:
    // 0x1bcff8: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_1bcffc:
    if (ctx->pc == 0x1BCFFCu) {
        ctx->pc = 0x1BD000u;
        goto label_1bd000;
    }
    ctx->pc = 0x1BCFF8u;
    {
        const bool branch_taken_0x1bcff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcff8) {
            ctx->pc = 0x1BD08Cu;
            goto label_1bd08c;
        }
    }
    ctx->pc = 0x1BD000u;
label_1bd000:
    // 0x1bd000: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bd000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bd004:
    // 0x1bd004: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bd008:
    // 0x1bd008: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1bd008u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1bd00c:
    // 0x1bd00c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bd00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bd010:
    // 0x1bd010: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bd010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bd014:
    // 0x1bd014: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1bd014u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_1bd018:
    // 0x1bd018: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bd01c:
    // 0x1bd01c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1bd01cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1bd020:
    // 0x1bd020: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bd024:
    // 0x1bd024: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1bd024u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1bd028:
    // 0x1bd028: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bd02c:
    // 0x1bd02c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1bd02cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1bd030:
    // 0x1bd030: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bd030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bd034:
    // 0x1bd034: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bd038:
    // 0x1bd038: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1bd038u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_1bd03c:
    // 0x1bd03c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bd03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bd040:
    // 0x1bd040: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1bd040u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_1bd044:
    // 0x1bd044: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bd044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bd048:
    // 0x1bd048: 0x9083156d  lbu         $v1, 0x156D($a0)
    ctx->pc = 0x1bd048u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5485)));
label_1bd04c:
    // 0x1bd04c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bd04cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1bd050:
    // 0x1bd050: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1bd050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bd054:
    // 0x1bd054: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_1bd058:
    if (ctx->pc == 0x1BD058u) {
        ctx->pc = 0x1BD05Cu;
        goto label_1bd05c;
    }
    ctx->pc = 0x1BD054u;
    {
        const bool branch_taken_0x1bd054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1bd054) {
            ctx->pc = 0x1BD068u;
            goto label_1bd068;
        }
    }
    ctx->pc = 0x1BD05Cu;
label_1bd05c:
    // 0x1bd05c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bd05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bd060:
    // 0x1bd060: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bd064:
    // 0x1bd064: 0xa065156d  sb          $a1, 0x156D($v1)
    ctx->pc = 0x1bd064u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 5));
label_1bd068:
    // 0x1bd068: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1bd068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1bd06c:
    // 0x1bd06c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bd06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bd070:
    // 0x1bd070: 0xa487127a  sh          $a3, 0x127A($a0)
    ctx->pc = 0x1bd070u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 7));
label_1bd074:
    // 0x1bd074: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bd074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bd078:
    // 0x1bd078: 0xa4a0127c  sh          $zero, 0x127C($a1)
    ctx->pc = 0x1bd078u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4732), (uint16_t)GPR_U32(ctx, 0));
label_1bd07c:
    // 0x1bd07c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bd080:
    // 0x1bd080: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1bd080u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
label_1bd084:
    // 0x1bd084: 0x1000000d  b           . + 4 + (0xD << 2)
label_1bd088:
    if (ctx->pc == 0x1BD088u) {
        ctx->pc = 0x1BD08Cu;
        goto label_1bd08c;
    }
    ctx->pc = 0x1BD084u;
    {
        const bool branch_taken_0x1bd084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd084) {
            ctx->pc = 0x1BD0BCu;
            goto label_1bd0bc;
        }
    }
    ctx->pc = 0x1BD08Cu;
label_1bd08c:
    // 0x1bd08c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bd08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bd090:
    // 0x1bd090: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bd090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bd094:
    // 0x1bd094: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x1bd094u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
label_1bd098:
    // 0x1bd098: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bd09c:
    // 0x1bd09c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1bd09cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_1bd0a0:
    // 0x1bd0a0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bd0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bd0a4:
    // 0x1bd0a4: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1bd0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
label_1bd0a8:
    // 0x1bd0a8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bd0ac:
    // 0x1bd0ac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1bd0acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1bd0b0:
    // 0x1bd0b0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1bd0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1bd0b4:
    // 0x1bd0b4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bd0b8:
    // 0x1bd0b8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1bd0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1bd0bc:
    // 0x1bd0bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bd0bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bd0c0:
    // 0x1bd0c0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bd0c4:
    // 0x1bd0c4: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x1bd0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
label_1bd0c8:
    // 0x1bd0c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bd0cc:
    // 0x1bd0cc: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1bd0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bd0d0:
    // 0x1bd0d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bd0d4:
    // 0x1bd0d4: 0xe4601568  swc1        $f0, 0x1568($v1)
    ctx->pc = 0x1bd0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5480), bits); }
label_1bd0d8:
    // 0x1bd0d8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bd0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bd0dc:
    // 0x1bd0dc: 0xc4801568  lwc1        $f0, 0x1568($a0)
    ctx->pc = 0x1bd0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bd0e0:
    // 0x1bd0e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bd0e4:
    // 0x1bd0e4: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1bd0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
label_1bd0e8:
    // 0x1bd0e8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bd0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bd0ec:
    // 0x1bd0ec: 0x8ca41b6c  lw          $a0, 0x1B6C($a1)
    ctx->pc = 0x1bd0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7020)));
label_1bd0f0:
    // 0x1bd0f0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_1bd0f4:
    if (ctx->pc == 0x1BD0F4u) {
        ctx->pc = 0x1BD0F8u;
        goto label_1bd0f8;
    }
    ctx->pc = 0x1BD0F0u;
    {
        const bool branch_taken_0x1bd0f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd0f0) {
            ctx->pc = 0x1BD100u;
            goto label_1bd100;
        }
    }
    ctx->pc = 0x1BD0F8u;
label_1bd0f8:
    // 0x1bd0f8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bd0fc:
    // 0x1bd0fc: 0xa4601574  sh          $zero, 0x1574($v1)
    ctx->pc = 0x1bd0fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5492), (uint16_t)GPR_U32(ctx, 0));
label_1bd100:
    // 0x1bd100: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bd100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bd104:
    // 0x1bd104: 0x8ca613e8  lw          $a2, 0x13E8($a1)
    ctx->pc = 0x1bd104u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5096)));
label_1bd108:
    // 0x1bd108: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_1bd10c:
    if (ctx->pc == 0x1BD10Cu) {
        ctx->pc = 0x1BD110u;
        goto label_1bd110;
    }
    ctx->pc = 0x1BD108u;
    {
        const bool branch_taken_0x1bd108 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd108) {
            ctx->pc = 0x1BD124u;
            goto label_1bd124;
        }
    }
    ctx->pc = 0x1BD110u;
label_1bd110:
    // 0x1bd110: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1bd110u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bd114:
    // 0x1bd114: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1bd114u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_1bd118:
    // 0x1bd118: 0xc0571d0  jal         func_15C740
label_1bd11c:
    if (ctx->pc == 0x1BD11Cu) {
        ctx->pc = 0x1BD120u;
        goto label_1bd120;
    }
    ctx->pc = 0x1BD118u;
    SET_GPR_U32(ctx, 31, 0x1BD120u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1BD118u, 0x1BD120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD120u;
label_1bd120:
    // 0x1bd120: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x1bd120u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bd124:
    // 0x1bd124: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bd128:
    // 0x1bd128: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x1bd128u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_1bd12c:
    // 0x1bd12c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bd130:
    // 0x1bd130: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bd130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1bd134:
    // 0x1bd134: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1bd134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_1bd138:
    // 0x1bd138: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bd138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1bd13c:
    // 0x1bd13c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_1bd140:
    if (ctx->pc == 0x1BD140u) {
        ctx->pc = 0x1BD144u;
        goto label_1bd144;
    }
    ctx->pc = 0x1BD13Cu;
    {
        const bool branch_taken_0x1bd13c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd13c) {
            ctx->pc = 0x1BD18Cu;
            goto label_1bd18c;
        }
    }
    ctx->pc = 0x1BD144u;
label_1bd144:
    // 0x1bd144: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bd148:
    // 0x1bd148: 0x906313a6  lbu         $v1, 0x13A6($v1)
    ctx->pc = 0x1bd148u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
label_1bd14c:
    // 0x1bd14c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1bd14cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1bd150:
    // 0x1bd150: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bd150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bd154:
    // 0x1bd154: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_1bd158:
    if (ctx->pc == 0x1BD158u) {
        ctx->pc = 0x1BD15Cu;
        goto label_1bd15c;
    }
    ctx->pc = 0x1BD154u;
    {
        const bool branch_taken_0x1bd154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bd154) {
            ctx->pc = 0x1BD184u;
            goto label_1bd184;
        }
    }
    ctx->pc = 0x1BD15Cu;
label_1bd15c:
    // 0x1bd15c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bd15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bd160:
    // 0x1bd160: 0x10850008  beq         $a0, $a1, . + 4 + (0x8 << 2)
label_1bd164:
    if (ctx->pc == 0x1BD164u) {
        ctx->pc = 0x1BD168u;
        goto label_1bd168;
    }
    ctx->pc = 0x1BD160u;
    {
        const bool branch_taken_0x1bd160 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1bd160) {
            ctx->pc = 0x1BD184u;
            goto label_1bd184;
        }
    }
    ctx->pc = 0x1BD168u;
label_1bd168:
    // 0x1bd168: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bd168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bd16c:
    // 0x1bd16c: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_1bd170:
    if (ctx->pc == 0x1BD170u) {
        ctx->pc = 0x1BD174u;
        goto label_1bd174;
    }
    ctx->pc = 0x1BD16Cu;
    {
        const bool branch_taken_0x1bd16c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bd16c) {
            ctx->pc = 0x1BD18Cu;
            goto label_1bd18c;
        }
    }
    ctx->pc = 0x1BD174u;
label_1bd174:
    // 0x1bd174: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1bd178:
    if (ctx->pc == 0x1BD178u) {
        ctx->pc = 0x1BD17Cu;
        goto label_1bd17c;
    }
    ctx->pc = 0x1BD174u;
    {
        const bool branch_taken_0x1bd174 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd174) {
            ctx->pc = 0x1BD18Cu;
            goto label_1bd18c;
        }
    }
    ctx->pc = 0x1BD17Cu;
label_1bd17c:
    // 0x1bd17c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1bd180:
    if (ctx->pc == 0x1BD180u) {
        ctx->pc = 0x1BD184u;
        goto label_1bd184;
    }
    ctx->pc = 0x1BD17Cu;
    {
        const bool branch_taken_0x1bd17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd17c) {
            ctx->pc = 0x1BD18Cu;
            goto label_1bd18c;
        }
    }
    ctx->pc = 0x1BD184u;
label_1bd184:
    // 0x1bd184: 0xc0c5244  jal         func_314910
label_1bd188:
    if (ctx->pc == 0x1BD188u) {
        ctx->pc = 0x1BD18Cu;
        goto label_1bd18c;
    }
    ctx->pc = 0x1BD184u;
    SET_GPR_U32(ctx, 31, 0x1BD18Cu);
    ctx->pc = 0x314910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314910u, 0x1BD184u, 0x1BD18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD18Cu;
label_1bd18c:
    // 0x1bd18c: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x1bd18cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1bd190:
    // 0x1bd190: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bd190u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1bd194:
    // 0x1bd194: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bd194u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bd198:
    // 0x1bd198: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bd198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bd19c:
    // 0x1bd19c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bd19cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bd1a0:
    // 0x1bd1a0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1bd1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1bd1a4:
    // 0x1bd1a4: 0x3e00008  jr          $ra
label_1bd1a8:
    if (ctx->pc == 0x1BD1A8u) {
        ctx->pc = 0x1BD1ACu;
        goto label_fallthrough_0x1bd1a4;
    }
    ctx->pc = 0x1BD1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD1A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bd1a4:
    ctx->pc = 0x1BD1ACu;
}
