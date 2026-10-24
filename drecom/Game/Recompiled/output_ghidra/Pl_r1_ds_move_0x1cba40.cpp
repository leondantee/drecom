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

// Function: Pl_r1_ds_move
// Address: 0x1cba40 - 0x1cc72c
void Pl_r1_ds_move_0x1cba40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_ds_move_0x1cba40");
#endif

    switch (ctx->pc) {
        case 0x1cba40u: goto label_1cba40;
        case 0x1cba44u: goto label_1cba44;
        case 0x1cba48u: goto label_1cba48;
        case 0x1cba4cu: goto label_1cba4c;
        case 0x1cba50u: goto label_1cba50;
        case 0x1cba54u: goto label_1cba54;
        case 0x1cba58u: goto label_1cba58;
        case 0x1cba5cu: goto label_1cba5c;
        case 0x1cba60u: goto label_1cba60;
        case 0x1cba64u: goto label_1cba64;
        case 0x1cba68u: goto label_1cba68;
        case 0x1cba6cu: goto label_1cba6c;
        case 0x1cba70u: goto label_1cba70;
        case 0x1cba74u: goto label_1cba74;
        case 0x1cba78u: goto label_1cba78;
        case 0x1cba7cu: goto label_1cba7c;
        case 0x1cba80u: goto label_1cba80;
        case 0x1cba84u: goto label_1cba84;
        case 0x1cba88u: goto label_1cba88;
        case 0x1cba8cu: goto label_1cba8c;
        case 0x1cba90u: goto label_1cba90;
        case 0x1cba94u: goto label_1cba94;
        case 0x1cba98u: goto label_1cba98;
        case 0x1cba9cu: goto label_1cba9c;
        case 0x1cbaa0u: goto label_1cbaa0;
        case 0x1cbaa4u: goto label_1cbaa4;
        case 0x1cbaa8u: goto label_1cbaa8;
        case 0x1cbaacu: goto label_1cbaac;
        case 0x1cbab0u: goto label_1cbab0;
        case 0x1cbab4u: goto label_1cbab4;
        case 0x1cbab8u: goto label_1cbab8;
        case 0x1cbabcu: goto label_1cbabc;
        case 0x1cbac0u: goto label_1cbac0;
        case 0x1cbac4u: goto label_1cbac4;
        case 0x1cbac8u: goto label_1cbac8;
        case 0x1cbaccu: goto label_1cbacc;
        case 0x1cbad0u: goto label_1cbad0;
        case 0x1cbad4u: goto label_1cbad4;
        case 0x1cbad8u: goto label_1cbad8;
        case 0x1cbadcu: goto label_1cbadc;
        case 0x1cbae0u: goto label_1cbae0;
        case 0x1cbae4u: goto label_1cbae4;
        case 0x1cbae8u: goto label_1cbae8;
        case 0x1cbaecu: goto label_1cbaec;
        case 0x1cbaf0u: goto label_1cbaf0;
        case 0x1cbaf4u: goto label_1cbaf4;
        case 0x1cbaf8u: goto label_1cbaf8;
        case 0x1cbafcu: goto label_1cbafc;
        case 0x1cbb00u: goto label_1cbb00;
        case 0x1cbb04u: goto label_1cbb04;
        case 0x1cbb08u: goto label_1cbb08;
        case 0x1cbb0cu: goto label_1cbb0c;
        case 0x1cbb10u: goto label_1cbb10;
        case 0x1cbb14u: goto label_1cbb14;
        case 0x1cbb18u: goto label_1cbb18;
        case 0x1cbb1cu: goto label_1cbb1c;
        case 0x1cbb20u: goto label_1cbb20;
        case 0x1cbb24u: goto label_1cbb24;
        case 0x1cbb28u: goto label_1cbb28;
        case 0x1cbb2cu: goto label_1cbb2c;
        case 0x1cbb30u: goto label_1cbb30;
        case 0x1cbb34u: goto label_1cbb34;
        case 0x1cbb38u: goto label_1cbb38;
        case 0x1cbb3cu: goto label_1cbb3c;
        case 0x1cbb40u: goto label_1cbb40;
        case 0x1cbb44u: goto label_1cbb44;
        case 0x1cbb48u: goto label_1cbb48;
        case 0x1cbb4cu: goto label_1cbb4c;
        case 0x1cbb50u: goto label_1cbb50;
        case 0x1cbb54u: goto label_1cbb54;
        case 0x1cbb58u: goto label_1cbb58;
        case 0x1cbb5cu: goto label_1cbb5c;
        case 0x1cbb60u: goto label_1cbb60;
        case 0x1cbb64u: goto label_1cbb64;
        case 0x1cbb68u: goto label_1cbb68;
        case 0x1cbb6cu: goto label_1cbb6c;
        case 0x1cbb70u: goto label_1cbb70;
        case 0x1cbb74u: goto label_1cbb74;
        case 0x1cbb78u: goto label_1cbb78;
        case 0x1cbb7cu: goto label_1cbb7c;
        case 0x1cbb80u: goto label_1cbb80;
        case 0x1cbb84u: goto label_1cbb84;
        case 0x1cbb88u: goto label_1cbb88;
        case 0x1cbb8cu: goto label_1cbb8c;
        case 0x1cbb90u: goto label_1cbb90;
        case 0x1cbb94u: goto label_1cbb94;
        case 0x1cbb98u: goto label_1cbb98;
        case 0x1cbb9cu: goto label_1cbb9c;
        case 0x1cbba0u: goto label_1cbba0;
        case 0x1cbba4u: goto label_1cbba4;
        case 0x1cbba8u: goto label_1cbba8;
        case 0x1cbbacu: goto label_1cbbac;
        case 0x1cbbb0u: goto label_1cbbb0;
        case 0x1cbbb4u: goto label_1cbbb4;
        case 0x1cbbb8u: goto label_1cbbb8;
        case 0x1cbbbcu: goto label_1cbbbc;
        case 0x1cbbc0u: goto label_1cbbc0;
        case 0x1cbbc4u: goto label_1cbbc4;
        case 0x1cbbc8u: goto label_1cbbc8;
        case 0x1cbbccu: goto label_1cbbcc;
        case 0x1cbbd0u: goto label_1cbbd0;
        case 0x1cbbd4u: goto label_1cbbd4;
        case 0x1cbbd8u: goto label_1cbbd8;
        case 0x1cbbdcu: goto label_1cbbdc;
        case 0x1cbbe0u: goto label_1cbbe0;
        case 0x1cbbe4u: goto label_1cbbe4;
        case 0x1cbbe8u: goto label_1cbbe8;
        case 0x1cbbecu: goto label_1cbbec;
        case 0x1cbbf0u: goto label_1cbbf0;
        case 0x1cbbf4u: goto label_1cbbf4;
        case 0x1cbbf8u: goto label_1cbbf8;
        case 0x1cbbfcu: goto label_1cbbfc;
        case 0x1cbc00u: goto label_1cbc00;
        case 0x1cbc04u: goto label_1cbc04;
        case 0x1cbc08u: goto label_1cbc08;
        case 0x1cbc0cu: goto label_1cbc0c;
        case 0x1cbc10u: goto label_1cbc10;
        case 0x1cbc14u: goto label_1cbc14;
        case 0x1cbc18u: goto label_1cbc18;
        case 0x1cbc1cu: goto label_1cbc1c;
        case 0x1cbc20u: goto label_1cbc20;
        case 0x1cbc24u: goto label_1cbc24;
        case 0x1cbc28u: goto label_1cbc28;
        case 0x1cbc2cu: goto label_1cbc2c;
        case 0x1cbc30u: goto label_1cbc30;
        case 0x1cbc34u: goto label_1cbc34;
        case 0x1cbc38u: goto label_1cbc38;
        case 0x1cbc3cu: goto label_1cbc3c;
        case 0x1cbc40u: goto label_1cbc40;
        case 0x1cbc44u: goto label_1cbc44;
        case 0x1cbc48u: goto label_1cbc48;
        case 0x1cbc4cu: goto label_1cbc4c;
        case 0x1cbc50u: goto label_1cbc50;
        case 0x1cbc54u: goto label_1cbc54;
        case 0x1cbc58u: goto label_1cbc58;
        case 0x1cbc5cu: goto label_1cbc5c;
        case 0x1cbc60u: goto label_1cbc60;
        case 0x1cbc64u: goto label_1cbc64;
        case 0x1cbc68u: goto label_1cbc68;
        case 0x1cbc6cu: goto label_1cbc6c;
        case 0x1cbc70u: goto label_1cbc70;
        case 0x1cbc74u: goto label_1cbc74;
        case 0x1cbc78u: goto label_1cbc78;
        case 0x1cbc7cu: goto label_1cbc7c;
        case 0x1cbc80u: goto label_1cbc80;
        case 0x1cbc84u: goto label_1cbc84;
        case 0x1cbc88u: goto label_1cbc88;
        case 0x1cbc8cu: goto label_1cbc8c;
        case 0x1cbc90u: goto label_1cbc90;
        case 0x1cbc94u: goto label_1cbc94;
        case 0x1cbc98u: goto label_1cbc98;
        case 0x1cbc9cu: goto label_1cbc9c;
        case 0x1cbca0u: goto label_1cbca0;
        case 0x1cbca4u: goto label_1cbca4;
        case 0x1cbca8u: goto label_1cbca8;
        case 0x1cbcacu: goto label_1cbcac;
        case 0x1cbcb0u: goto label_1cbcb0;
        case 0x1cbcb4u: goto label_1cbcb4;
        case 0x1cbcb8u: goto label_1cbcb8;
        case 0x1cbcbcu: goto label_1cbcbc;
        case 0x1cbcc0u: goto label_1cbcc0;
        case 0x1cbcc4u: goto label_1cbcc4;
        case 0x1cbcc8u: goto label_1cbcc8;
        case 0x1cbcccu: goto label_1cbccc;
        case 0x1cbcd0u: goto label_1cbcd0;
        case 0x1cbcd4u: goto label_1cbcd4;
        case 0x1cbcd8u: goto label_1cbcd8;
        case 0x1cbcdcu: goto label_1cbcdc;
        case 0x1cbce0u: goto label_1cbce0;
        case 0x1cbce4u: goto label_1cbce4;
        case 0x1cbce8u: goto label_1cbce8;
        case 0x1cbcecu: goto label_1cbcec;
        case 0x1cbcf0u: goto label_1cbcf0;
        case 0x1cbcf4u: goto label_1cbcf4;
        case 0x1cbcf8u: goto label_1cbcf8;
        case 0x1cbcfcu: goto label_1cbcfc;
        case 0x1cbd00u: goto label_1cbd00;
        case 0x1cbd04u: goto label_1cbd04;
        case 0x1cbd08u: goto label_1cbd08;
        case 0x1cbd0cu: goto label_1cbd0c;
        case 0x1cbd10u: goto label_1cbd10;
        case 0x1cbd14u: goto label_1cbd14;
        case 0x1cbd18u: goto label_1cbd18;
        case 0x1cbd1cu: goto label_1cbd1c;
        case 0x1cbd20u: goto label_1cbd20;
        case 0x1cbd24u: goto label_1cbd24;
        case 0x1cbd28u: goto label_1cbd28;
        case 0x1cbd2cu: goto label_1cbd2c;
        case 0x1cbd30u: goto label_1cbd30;
        case 0x1cbd34u: goto label_1cbd34;
        case 0x1cbd38u: goto label_1cbd38;
        case 0x1cbd3cu: goto label_1cbd3c;
        case 0x1cbd40u: goto label_1cbd40;
        case 0x1cbd44u: goto label_1cbd44;
        case 0x1cbd48u: goto label_1cbd48;
        case 0x1cbd4cu: goto label_1cbd4c;
        case 0x1cbd50u: goto label_1cbd50;
        case 0x1cbd54u: goto label_1cbd54;
        case 0x1cbd58u: goto label_1cbd58;
        case 0x1cbd5cu: goto label_1cbd5c;
        case 0x1cbd60u: goto label_1cbd60;
        case 0x1cbd64u: goto label_1cbd64;
        case 0x1cbd68u: goto label_1cbd68;
        case 0x1cbd6cu: goto label_1cbd6c;
        case 0x1cbd70u: goto label_1cbd70;
        case 0x1cbd74u: goto label_1cbd74;
        case 0x1cbd78u: goto label_1cbd78;
        case 0x1cbd7cu: goto label_1cbd7c;
        case 0x1cbd80u: goto label_1cbd80;
        case 0x1cbd84u: goto label_1cbd84;
        case 0x1cbd88u: goto label_1cbd88;
        case 0x1cbd8cu: goto label_1cbd8c;
        case 0x1cbd90u: goto label_1cbd90;
        case 0x1cbd94u: goto label_1cbd94;
        case 0x1cbd98u: goto label_1cbd98;
        case 0x1cbd9cu: goto label_1cbd9c;
        case 0x1cbda0u: goto label_1cbda0;
        case 0x1cbda4u: goto label_1cbda4;
        case 0x1cbda8u: goto label_1cbda8;
        case 0x1cbdacu: goto label_1cbdac;
        case 0x1cbdb0u: goto label_1cbdb0;
        case 0x1cbdb4u: goto label_1cbdb4;
        case 0x1cbdb8u: goto label_1cbdb8;
        case 0x1cbdbcu: goto label_1cbdbc;
        case 0x1cbdc0u: goto label_1cbdc0;
        case 0x1cbdc4u: goto label_1cbdc4;
        case 0x1cbdc8u: goto label_1cbdc8;
        case 0x1cbdccu: goto label_1cbdcc;
        case 0x1cbdd0u: goto label_1cbdd0;
        case 0x1cbdd4u: goto label_1cbdd4;
        case 0x1cbdd8u: goto label_1cbdd8;
        case 0x1cbddcu: goto label_1cbddc;
        case 0x1cbde0u: goto label_1cbde0;
        case 0x1cbde4u: goto label_1cbde4;
        case 0x1cbde8u: goto label_1cbde8;
        case 0x1cbdecu: goto label_1cbdec;
        case 0x1cbdf0u: goto label_1cbdf0;
        case 0x1cbdf4u: goto label_1cbdf4;
        case 0x1cbdf8u: goto label_1cbdf8;
        case 0x1cbdfcu: goto label_1cbdfc;
        case 0x1cbe00u: goto label_1cbe00;
        case 0x1cbe04u: goto label_1cbe04;
        case 0x1cbe08u: goto label_1cbe08;
        case 0x1cbe0cu: goto label_1cbe0c;
        case 0x1cbe10u: goto label_1cbe10;
        case 0x1cbe14u: goto label_1cbe14;
        case 0x1cbe18u: goto label_1cbe18;
        case 0x1cbe1cu: goto label_1cbe1c;
        case 0x1cbe20u: goto label_1cbe20;
        case 0x1cbe24u: goto label_1cbe24;
        case 0x1cbe28u: goto label_1cbe28;
        case 0x1cbe2cu: goto label_1cbe2c;
        case 0x1cbe30u: goto label_1cbe30;
        case 0x1cbe34u: goto label_1cbe34;
        case 0x1cbe38u: goto label_1cbe38;
        case 0x1cbe3cu: goto label_1cbe3c;
        case 0x1cbe40u: goto label_1cbe40;
        case 0x1cbe44u: goto label_1cbe44;
        case 0x1cbe48u: goto label_1cbe48;
        case 0x1cbe4cu: goto label_1cbe4c;
        case 0x1cbe50u: goto label_1cbe50;
        case 0x1cbe54u: goto label_1cbe54;
        case 0x1cbe58u: goto label_1cbe58;
        case 0x1cbe5cu: goto label_1cbe5c;
        case 0x1cbe60u: goto label_1cbe60;
        case 0x1cbe64u: goto label_1cbe64;
        case 0x1cbe68u: goto label_1cbe68;
        case 0x1cbe6cu: goto label_1cbe6c;
        case 0x1cbe70u: goto label_1cbe70;
        case 0x1cbe74u: goto label_1cbe74;
        case 0x1cbe78u: goto label_1cbe78;
        case 0x1cbe7cu: goto label_1cbe7c;
        case 0x1cbe80u: goto label_1cbe80;
        case 0x1cbe84u: goto label_1cbe84;
        case 0x1cbe88u: goto label_1cbe88;
        case 0x1cbe8cu: goto label_1cbe8c;
        case 0x1cbe90u: goto label_1cbe90;
        case 0x1cbe94u: goto label_1cbe94;
        case 0x1cbe98u: goto label_1cbe98;
        case 0x1cbe9cu: goto label_1cbe9c;
        case 0x1cbea0u: goto label_1cbea0;
        case 0x1cbea4u: goto label_1cbea4;
        case 0x1cbea8u: goto label_1cbea8;
        case 0x1cbeacu: goto label_1cbeac;
        case 0x1cbeb0u: goto label_1cbeb0;
        case 0x1cbeb4u: goto label_1cbeb4;
        case 0x1cbeb8u: goto label_1cbeb8;
        case 0x1cbebcu: goto label_1cbebc;
        case 0x1cbec0u: goto label_1cbec0;
        case 0x1cbec4u: goto label_1cbec4;
        case 0x1cbec8u: goto label_1cbec8;
        case 0x1cbeccu: goto label_1cbecc;
        case 0x1cbed0u: goto label_1cbed0;
        case 0x1cbed4u: goto label_1cbed4;
        case 0x1cbed8u: goto label_1cbed8;
        case 0x1cbedcu: goto label_1cbedc;
        case 0x1cbee0u: goto label_1cbee0;
        case 0x1cbee4u: goto label_1cbee4;
        case 0x1cbee8u: goto label_1cbee8;
        case 0x1cbeecu: goto label_1cbeec;
        case 0x1cbef0u: goto label_1cbef0;
        case 0x1cbef4u: goto label_1cbef4;
        case 0x1cbef8u: goto label_1cbef8;
        case 0x1cbefcu: goto label_1cbefc;
        case 0x1cbf00u: goto label_1cbf00;
        case 0x1cbf04u: goto label_1cbf04;
        case 0x1cbf08u: goto label_1cbf08;
        case 0x1cbf0cu: goto label_1cbf0c;
        case 0x1cbf10u: goto label_1cbf10;
        case 0x1cbf14u: goto label_1cbf14;
        case 0x1cbf18u: goto label_1cbf18;
        case 0x1cbf1cu: goto label_1cbf1c;
        case 0x1cbf20u: goto label_1cbf20;
        case 0x1cbf24u: goto label_1cbf24;
        case 0x1cbf28u: goto label_1cbf28;
        case 0x1cbf2cu: goto label_1cbf2c;
        case 0x1cbf30u: goto label_1cbf30;
        case 0x1cbf34u: goto label_1cbf34;
        case 0x1cbf38u: goto label_1cbf38;
        case 0x1cbf3cu: goto label_1cbf3c;
        case 0x1cbf40u: goto label_1cbf40;
        case 0x1cbf44u: goto label_1cbf44;
        case 0x1cbf48u: goto label_1cbf48;
        case 0x1cbf4cu: goto label_1cbf4c;
        case 0x1cbf50u: goto label_1cbf50;
        case 0x1cbf54u: goto label_1cbf54;
        case 0x1cbf58u: goto label_1cbf58;
        case 0x1cbf5cu: goto label_1cbf5c;
        case 0x1cbf60u: goto label_1cbf60;
        case 0x1cbf64u: goto label_1cbf64;
        case 0x1cbf68u: goto label_1cbf68;
        case 0x1cbf6cu: goto label_1cbf6c;
        case 0x1cbf70u: goto label_1cbf70;
        case 0x1cbf74u: goto label_1cbf74;
        case 0x1cbf78u: goto label_1cbf78;
        case 0x1cbf7cu: goto label_1cbf7c;
        case 0x1cbf80u: goto label_1cbf80;
        case 0x1cbf84u: goto label_1cbf84;
        case 0x1cbf88u: goto label_1cbf88;
        case 0x1cbf8cu: goto label_1cbf8c;
        case 0x1cbf90u: goto label_1cbf90;
        case 0x1cbf94u: goto label_1cbf94;
        case 0x1cbf98u: goto label_1cbf98;
        case 0x1cbf9cu: goto label_1cbf9c;
        case 0x1cbfa0u: goto label_1cbfa0;
        case 0x1cbfa4u: goto label_1cbfa4;
        case 0x1cbfa8u: goto label_1cbfa8;
        case 0x1cbfacu: goto label_1cbfac;
        case 0x1cbfb0u: goto label_1cbfb0;
        case 0x1cbfb4u: goto label_1cbfb4;
        case 0x1cbfb8u: goto label_1cbfb8;
        case 0x1cbfbcu: goto label_1cbfbc;
        case 0x1cbfc0u: goto label_1cbfc0;
        case 0x1cbfc4u: goto label_1cbfc4;
        case 0x1cbfc8u: goto label_1cbfc8;
        case 0x1cbfccu: goto label_1cbfcc;
        case 0x1cbfd0u: goto label_1cbfd0;
        case 0x1cbfd4u: goto label_1cbfd4;
        case 0x1cbfd8u: goto label_1cbfd8;
        case 0x1cbfdcu: goto label_1cbfdc;
        case 0x1cbfe0u: goto label_1cbfe0;
        case 0x1cbfe4u: goto label_1cbfe4;
        case 0x1cbfe8u: goto label_1cbfe8;
        case 0x1cbfecu: goto label_1cbfec;
        case 0x1cbff0u: goto label_1cbff0;
        case 0x1cbff4u: goto label_1cbff4;
        case 0x1cbff8u: goto label_1cbff8;
        case 0x1cbffcu: goto label_1cbffc;
        case 0x1cc000u: goto label_1cc000;
        case 0x1cc004u: goto label_1cc004;
        case 0x1cc008u: goto label_1cc008;
        case 0x1cc00cu: goto label_1cc00c;
        case 0x1cc010u: goto label_1cc010;
        case 0x1cc014u: goto label_1cc014;
        case 0x1cc018u: goto label_1cc018;
        case 0x1cc01cu: goto label_1cc01c;
        case 0x1cc020u: goto label_1cc020;
        case 0x1cc024u: goto label_1cc024;
        case 0x1cc028u: goto label_1cc028;
        case 0x1cc02cu: goto label_1cc02c;
        case 0x1cc030u: goto label_1cc030;
        case 0x1cc034u: goto label_1cc034;
        case 0x1cc038u: goto label_1cc038;
        case 0x1cc03cu: goto label_1cc03c;
        case 0x1cc040u: goto label_1cc040;
        case 0x1cc044u: goto label_1cc044;
        case 0x1cc048u: goto label_1cc048;
        case 0x1cc04cu: goto label_1cc04c;
        case 0x1cc050u: goto label_1cc050;
        case 0x1cc054u: goto label_1cc054;
        case 0x1cc058u: goto label_1cc058;
        case 0x1cc05cu: goto label_1cc05c;
        case 0x1cc060u: goto label_1cc060;
        case 0x1cc064u: goto label_1cc064;
        case 0x1cc068u: goto label_1cc068;
        case 0x1cc06cu: goto label_1cc06c;
        case 0x1cc070u: goto label_1cc070;
        case 0x1cc074u: goto label_1cc074;
        case 0x1cc078u: goto label_1cc078;
        case 0x1cc07cu: goto label_1cc07c;
        case 0x1cc080u: goto label_1cc080;
        case 0x1cc084u: goto label_1cc084;
        case 0x1cc088u: goto label_1cc088;
        case 0x1cc08cu: goto label_1cc08c;
        case 0x1cc090u: goto label_1cc090;
        case 0x1cc094u: goto label_1cc094;
        case 0x1cc098u: goto label_1cc098;
        case 0x1cc09cu: goto label_1cc09c;
        case 0x1cc0a0u: goto label_1cc0a0;
        case 0x1cc0a4u: goto label_1cc0a4;
        case 0x1cc0a8u: goto label_1cc0a8;
        case 0x1cc0acu: goto label_1cc0ac;
        case 0x1cc0b0u: goto label_1cc0b0;
        case 0x1cc0b4u: goto label_1cc0b4;
        case 0x1cc0b8u: goto label_1cc0b8;
        case 0x1cc0bcu: goto label_1cc0bc;
        case 0x1cc0c0u: goto label_1cc0c0;
        case 0x1cc0c4u: goto label_1cc0c4;
        case 0x1cc0c8u: goto label_1cc0c8;
        case 0x1cc0ccu: goto label_1cc0cc;
        case 0x1cc0d0u: goto label_1cc0d0;
        case 0x1cc0d4u: goto label_1cc0d4;
        case 0x1cc0d8u: goto label_1cc0d8;
        case 0x1cc0dcu: goto label_1cc0dc;
        case 0x1cc0e0u: goto label_1cc0e0;
        case 0x1cc0e4u: goto label_1cc0e4;
        case 0x1cc0e8u: goto label_1cc0e8;
        case 0x1cc0ecu: goto label_1cc0ec;
        case 0x1cc0f0u: goto label_1cc0f0;
        case 0x1cc0f4u: goto label_1cc0f4;
        case 0x1cc0f8u: goto label_1cc0f8;
        case 0x1cc0fcu: goto label_1cc0fc;
        case 0x1cc100u: goto label_1cc100;
        case 0x1cc104u: goto label_1cc104;
        case 0x1cc108u: goto label_1cc108;
        case 0x1cc10cu: goto label_1cc10c;
        case 0x1cc110u: goto label_1cc110;
        case 0x1cc114u: goto label_1cc114;
        case 0x1cc118u: goto label_1cc118;
        case 0x1cc11cu: goto label_1cc11c;
        case 0x1cc120u: goto label_1cc120;
        case 0x1cc124u: goto label_1cc124;
        case 0x1cc128u: goto label_1cc128;
        case 0x1cc12cu: goto label_1cc12c;
        case 0x1cc130u: goto label_1cc130;
        case 0x1cc134u: goto label_1cc134;
        case 0x1cc138u: goto label_1cc138;
        case 0x1cc13cu: goto label_1cc13c;
        case 0x1cc140u: goto label_1cc140;
        case 0x1cc144u: goto label_1cc144;
        case 0x1cc148u: goto label_1cc148;
        case 0x1cc14cu: goto label_1cc14c;
        case 0x1cc150u: goto label_1cc150;
        case 0x1cc154u: goto label_1cc154;
        case 0x1cc158u: goto label_1cc158;
        case 0x1cc15cu: goto label_1cc15c;
        case 0x1cc160u: goto label_1cc160;
        case 0x1cc164u: goto label_1cc164;
        case 0x1cc168u: goto label_1cc168;
        case 0x1cc16cu: goto label_1cc16c;
        case 0x1cc170u: goto label_1cc170;
        case 0x1cc174u: goto label_1cc174;
        case 0x1cc178u: goto label_1cc178;
        case 0x1cc17cu: goto label_1cc17c;
        case 0x1cc180u: goto label_1cc180;
        case 0x1cc184u: goto label_1cc184;
        case 0x1cc188u: goto label_1cc188;
        case 0x1cc18cu: goto label_1cc18c;
        case 0x1cc190u: goto label_1cc190;
        case 0x1cc194u: goto label_1cc194;
        case 0x1cc198u: goto label_1cc198;
        case 0x1cc19cu: goto label_1cc19c;
        case 0x1cc1a0u: goto label_1cc1a0;
        case 0x1cc1a4u: goto label_1cc1a4;
        case 0x1cc1a8u: goto label_1cc1a8;
        case 0x1cc1acu: goto label_1cc1ac;
        case 0x1cc1b0u: goto label_1cc1b0;
        case 0x1cc1b4u: goto label_1cc1b4;
        case 0x1cc1b8u: goto label_1cc1b8;
        case 0x1cc1bcu: goto label_1cc1bc;
        case 0x1cc1c0u: goto label_1cc1c0;
        case 0x1cc1c4u: goto label_1cc1c4;
        case 0x1cc1c8u: goto label_1cc1c8;
        case 0x1cc1ccu: goto label_1cc1cc;
        case 0x1cc1d0u: goto label_1cc1d0;
        case 0x1cc1d4u: goto label_1cc1d4;
        case 0x1cc1d8u: goto label_1cc1d8;
        case 0x1cc1dcu: goto label_1cc1dc;
        case 0x1cc1e0u: goto label_1cc1e0;
        case 0x1cc1e4u: goto label_1cc1e4;
        case 0x1cc1e8u: goto label_1cc1e8;
        case 0x1cc1ecu: goto label_1cc1ec;
        case 0x1cc1f0u: goto label_1cc1f0;
        case 0x1cc1f4u: goto label_1cc1f4;
        case 0x1cc1f8u: goto label_1cc1f8;
        case 0x1cc1fcu: goto label_1cc1fc;
        case 0x1cc200u: goto label_1cc200;
        case 0x1cc204u: goto label_1cc204;
        case 0x1cc208u: goto label_1cc208;
        case 0x1cc20cu: goto label_1cc20c;
        case 0x1cc210u: goto label_1cc210;
        case 0x1cc214u: goto label_1cc214;
        case 0x1cc218u: goto label_1cc218;
        case 0x1cc21cu: goto label_1cc21c;
        case 0x1cc220u: goto label_1cc220;
        case 0x1cc224u: goto label_1cc224;
        case 0x1cc228u: goto label_1cc228;
        case 0x1cc22cu: goto label_1cc22c;
        case 0x1cc230u: goto label_1cc230;
        case 0x1cc234u: goto label_1cc234;
        case 0x1cc238u: goto label_1cc238;
        case 0x1cc23cu: goto label_1cc23c;
        case 0x1cc240u: goto label_1cc240;
        case 0x1cc244u: goto label_1cc244;
        case 0x1cc248u: goto label_1cc248;
        case 0x1cc24cu: goto label_1cc24c;
        case 0x1cc250u: goto label_1cc250;
        case 0x1cc254u: goto label_1cc254;
        case 0x1cc258u: goto label_1cc258;
        case 0x1cc25cu: goto label_1cc25c;
        case 0x1cc260u: goto label_1cc260;
        case 0x1cc264u: goto label_1cc264;
        case 0x1cc268u: goto label_1cc268;
        case 0x1cc26cu: goto label_1cc26c;
        case 0x1cc270u: goto label_1cc270;
        case 0x1cc274u: goto label_1cc274;
        case 0x1cc278u: goto label_1cc278;
        case 0x1cc27cu: goto label_1cc27c;
        case 0x1cc280u: goto label_1cc280;
        case 0x1cc284u: goto label_1cc284;
        case 0x1cc288u: goto label_1cc288;
        case 0x1cc28cu: goto label_1cc28c;
        case 0x1cc290u: goto label_1cc290;
        case 0x1cc294u: goto label_1cc294;
        case 0x1cc298u: goto label_1cc298;
        case 0x1cc29cu: goto label_1cc29c;
        case 0x1cc2a0u: goto label_1cc2a0;
        case 0x1cc2a4u: goto label_1cc2a4;
        case 0x1cc2a8u: goto label_1cc2a8;
        case 0x1cc2acu: goto label_1cc2ac;
        case 0x1cc2b0u: goto label_1cc2b0;
        case 0x1cc2b4u: goto label_1cc2b4;
        case 0x1cc2b8u: goto label_1cc2b8;
        case 0x1cc2bcu: goto label_1cc2bc;
        case 0x1cc2c0u: goto label_1cc2c0;
        case 0x1cc2c4u: goto label_1cc2c4;
        case 0x1cc2c8u: goto label_1cc2c8;
        case 0x1cc2ccu: goto label_1cc2cc;
        case 0x1cc2d0u: goto label_1cc2d0;
        case 0x1cc2d4u: goto label_1cc2d4;
        case 0x1cc2d8u: goto label_1cc2d8;
        case 0x1cc2dcu: goto label_1cc2dc;
        case 0x1cc2e0u: goto label_1cc2e0;
        case 0x1cc2e4u: goto label_1cc2e4;
        case 0x1cc2e8u: goto label_1cc2e8;
        case 0x1cc2ecu: goto label_1cc2ec;
        case 0x1cc2f0u: goto label_1cc2f0;
        case 0x1cc2f4u: goto label_1cc2f4;
        case 0x1cc2f8u: goto label_1cc2f8;
        case 0x1cc2fcu: goto label_1cc2fc;
        case 0x1cc300u: goto label_1cc300;
        case 0x1cc304u: goto label_1cc304;
        case 0x1cc308u: goto label_1cc308;
        case 0x1cc30cu: goto label_1cc30c;
        case 0x1cc310u: goto label_1cc310;
        case 0x1cc314u: goto label_1cc314;
        case 0x1cc318u: goto label_1cc318;
        case 0x1cc31cu: goto label_1cc31c;
        case 0x1cc320u: goto label_1cc320;
        case 0x1cc324u: goto label_1cc324;
        case 0x1cc328u: goto label_1cc328;
        case 0x1cc32cu: goto label_1cc32c;
        case 0x1cc330u: goto label_1cc330;
        case 0x1cc334u: goto label_1cc334;
        case 0x1cc338u: goto label_1cc338;
        case 0x1cc33cu: goto label_1cc33c;
        case 0x1cc340u: goto label_1cc340;
        case 0x1cc344u: goto label_1cc344;
        case 0x1cc348u: goto label_1cc348;
        case 0x1cc34cu: goto label_1cc34c;
        case 0x1cc350u: goto label_1cc350;
        case 0x1cc354u: goto label_1cc354;
        case 0x1cc358u: goto label_1cc358;
        case 0x1cc35cu: goto label_1cc35c;
        case 0x1cc360u: goto label_1cc360;
        case 0x1cc364u: goto label_1cc364;
        case 0x1cc368u: goto label_1cc368;
        case 0x1cc36cu: goto label_1cc36c;
        case 0x1cc370u: goto label_1cc370;
        case 0x1cc374u: goto label_1cc374;
        case 0x1cc378u: goto label_1cc378;
        case 0x1cc37cu: goto label_1cc37c;
        case 0x1cc380u: goto label_1cc380;
        case 0x1cc384u: goto label_1cc384;
        case 0x1cc388u: goto label_1cc388;
        case 0x1cc38cu: goto label_1cc38c;
        case 0x1cc390u: goto label_1cc390;
        case 0x1cc394u: goto label_1cc394;
        case 0x1cc398u: goto label_1cc398;
        case 0x1cc39cu: goto label_1cc39c;
        case 0x1cc3a0u: goto label_1cc3a0;
        case 0x1cc3a4u: goto label_1cc3a4;
        case 0x1cc3a8u: goto label_1cc3a8;
        case 0x1cc3acu: goto label_1cc3ac;
        case 0x1cc3b0u: goto label_1cc3b0;
        case 0x1cc3b4u: goto label_1cc3b4;
        case 0x1cc3b8u: goto label_1cc3b8;
        case 0x1cc3bcu: goto label_1cc3bc;
        case 0x1cc3c0u: goto label_1cc3c0;
        case 0x1cc3c4u: goto label_1cc3c4;
        case 0x1cc3c8u: goto label_1cc3c8;
        case 0x1cc3ccu: goto label_1cc3cc;
        case 0x1cc3d0u: goto label_1cc3d0;
        case 0x1cc3d4u: goto label_1cc3d4;
        case 0x1cc3d8u: goto label_1cc3d8;
        case 0x1cc3dcu: goto label_1cc3dc;
        case 0x1cc3e0u: goto label_1cc3e0;
        case 0x1cc3e4u: goto label_1cc3e4;
        case 0x1cc3e8u: goto label_1cc3e8;
        case 0x1cc3ecu: goto label_1cc3ec;
        case 0x1cc3f0u: goto label_1cc3f0;
        case 0x1cc3f4u: goto label_1cc3f4;
        case 0x1cc3f8u: goto label_1cc3f8;
        case 0x1cc3fcu: goto label_1cc3fc;
        case 0x1cc400u: goto label_1cc400;
        case 0x1cc404u: goto label_1cc404;
        case 0x1cc408u: goto label_1cc408;
        case 0x1cc40cu: goto label_1cc40c;
        case 0x1cc410u: goto label_1cc410;
        case 0x1cc414u: goto label_1cc414;
        case 0x1cc418u: goto label_1cc418;
        case 0x1cc41cu: goto label_1cc41c;
        case 0x1cc420u: goto label_1cc420;
        case 0x1cc424u: goto label_1cc424;
        case 0x1cc428u: goto label_1cc428;
        case 0x1cc42cu: goto label_1cc42c;
        case 0x1cc430u: goto label_1cc430;
        case 0x1cc434u: goto label_1cc434;
        case 0x1cc438u: goto label_1cc438;
        case 0x1cc43cu: goto label_1cc43c;
        case 0x1cc440u: goto label_1cc440;
        case 0x1cc444u: goto label_1cc444;
        case 0x1cc448u: goto label_1cc448;
        case 0x1cc44cu: goto label_1cc44c;
        case 0x1cc450u: goto label_1cc450;
        case 0x1cc454u: goto label_1cc454;
        case 0x1cc458u: goto label_1cc458;
        case 0x1cc45cu: goto label_1cc45c;
        case 0x1cc460u: goto label_1cc460;
        case 0x1cc464u: goto label_1cc464;
        case 0x1cc468u: goto label_1cc468;
        case 0x1cc46cu: goto label_1cc46c;
        case 0x1cc470u: goto label_1cc470;
        case 0x1cc474u: goto label_1cc474;
        case 0x1cc478u: goto label_1cc478;
        case 0x1cc47cu: goto label_1cc47c;
        case 0x1cc480u: goto label_1cc480;
        case 0x1cc484u: goto label_1cc484;
        case 0x1cc488u: goto label_1cc488;
        case 0x1cc48cu: goto label_1cc48c;
        case 0x1cc490u: goto label_1cc490;
        case 0x1cc494u: goto label_1cc494;
        case 0x1cc498u: goto label_1cc498;
        case 0x1cc49cu: goto label_1cc49c;
        case 0x1cc4a0u: goto label_1cc4a0;
        case 0x1cc4a4u: goto label_1cc4a4;
        case 0x1cc4a8u: goto label_1cc4a8;
        case 0x1cc4acu: goto label_1cc4ac;
        case 0x1cc4b0u: goto label_1cc4b0;
        case 0x1cc4b4u: goto label_1cc4b4;
        case 0x1cc4b8u: goto label_1cc4b8;
        case 0x1cc4bcu: goto label_1cc4bc;
        case 0x1cc4c0u: goto label_1cc4c0;
        case 0x1cc4c4u: goto label_1cc4c4;
        case 0x1cc4c8u: goto label_1cc4c8;
        case 0x1cc4ccu: goto label_1cc4cc;
        case 0x1cc4d0u: goto label_1cc4d0;
        case 0x1cc4d4u: goto label_1cc4d4;
        case 0x1cc4d8u: goto label_1cc4d8;
        case 0x1cc4dcu: goto label_1cc4dc;
        case 0x1cc4e0u: goto label_1cc4e0;
        case 0x1cc4e4u: goto label_1cc4e4;
        case 0x1cc4e8u: goto label_1cc4e8;
        case 0x1cc4ecu: goto label_1cc4ec;
        case 0x1cc4f0u: goto label_1cc4f0;
        case 0x1cc4f4u: goto label_1cc4f4;
        case 0x1cc4f8u: goto label_1cc4f8;
        case 0x1cc4fcu: goto label_1cc4fc;
        case 0x1cc500u: goto label_1cc500;
        case 0x1cc504u: goto label_1cc504;
        case 0x1cc508u: goto label_1cc508;
        case 0x1cc50cu: goto label_1cc50c;
        case 0x1cc510u: goto label_1cc510;
        case 0x1cc514u: goto label_1cc514;
        case 0x1cc518u: goto label_1cc518;
        case 0x1cc51cu: goto label_1cc51c;
        case 0x1cc520u: goto label_1cc520;
        case 0x1cc524u: goto label_1cc524;
        case 0x1cc528u: goto label_1cc528;
        case 0x1cc52cu: goto label_1cc52c;
        case 0x1cc530u: goto label_1cc530;
        case 0x1cc534u: goto label_1cc534;
        case 0x1cc538u: goto label_1cc538;
        case 0x1cc53cu: goto label_1cc53c;
        case 0x1cc540u: goto label_1cc540;
        case 0x1cc544u: goto label_1cc544;
        case 0x1cc548u: goto label_1cc548;
        case 0x1cc54cu: goto label_1cc54c;
        case 0x1cc550u: goto label_1cc550;
        case 0x1cc554u: goto label_1cc554;
        case 0x1cc558u: goto label_1cc558;
        case 0x1cc55cu: goto label_1cc55c;
        case 0x1cc560u: goto label_1cc560;
        case 0x1cc564u: goto label_1cc564;
        case 0x1cc568u: goto label_1cc568;
        case 0x1cc56cu: goto label_1cc56c;
        case 0x1cc570u: goto label_1cc570;
        case 0x1cc574u: goto label_1cc574;
        case 0x1cc578u: goto label_1cc578;
        case 0x1cc57cu: goto label_1cc57c;
        case 0x1cc580u: goto label_1cc580;
        case 0x1cc584u: goto label_1cc584;
        case 0x1cc588u: goto label_1cc588;
        case 0x1cc58cu: goto label_1cc58c;
        case 0x1cc590u: goto label_1cc590;
        case 0x1cc594u: goto label_1cc594;
        case 0x1cc598u: goto label_1cc598;
        case 0x1cc59cu: goto label_1cc59c;
        case 0x1cc5a0u: goto label_1cc5a0;
        case 0x1cc5a4u: goto label_1cc5a4;
        case 0x1cc5a8u: goto label_1cc5a8;
        case 0x1cc5acu: goto label_1cc5ac;
        case 0x1cc5b0u: goto label_1cc5b0;
        case 0x1cc5b4u: goto label_1cc5b4;
        case 0x1cc5b8u: goto label_1cc5b8;
        case 0x1cc5bcu: goto label_1cc5bc;
        case 0x1cc5c0u: goto label_1cc5c0;
        case 0x1cc5c4u: goto label_1cc5c4;
        case 0x1cc5c8u: goto label_1cc5c8;
        case 0x1cc5ccu: goto label_1cc5cc;
        case 0x1cc5d0u: goto label_1cc5d0;
        case 0x1cc5d4u: goto label_1cc5d4;
        case 0x1cc5d8u: goto label_1cc5d8;
        case 0x1cc5dcu: goto label_1cc5dc;
        case 0x1cc5e0u: goto label_1cc5e0;
        case 0x1cc5e4u: goto label_1cc5e4;
        case 0x1cc5e8u: goto label_1cc5e8;
        case 0x1cc5ecu: goto label_1cc5ec;
        case 0x1cc5f0u: goto label_1cc5f0;
        case 0x1cc5f4u: goto label_1cc5f4;
        case 0x1cc5f8u: goto label_1cc5f8;
        case 0x1cc5fcu: goto label_1cc5fc;
        case 0x1cc600u: goto label_1cc600;
        case 0x1cc604u: goto label_1cc604;
        case 0x1cc608u: goto label_1cc608;
        case 0x1cc60cu: goto label_1cc60c;
        case 0x1cc610u: goto label_1cc610;
        case 0x1cc614u: goto label_1cc614;
        case 0x1cc618u: goto label_1cc618;
        case 0x1cc61cu: goto label_1cc61c;
        case 0x1cc620u: goto label_1cc620;
        case 0x1cc624u: goto label_1cc624;
        case 0x1cc628u: goto label_1cc628;
        case 0x1cc62cu: goto label_1cc62c;
        case 0x1cc630u: goto label_1cc630;
        case 0x1cc634u: goto label_1cc634;
        case 0x1cc638u: goto label_1cc638;
        case 0x1cc63cu: goto label_1cc63c;
        case 0x1cc640u: goto label_1cc640;
        case 0x1cc644u: goto label_1cc644;
        case 0x1cc648u: goto label_1cc648;
        case 0x1cc64cu: goto label_1cc64c;
        case 0x1cc650u: goto label_1cc650;
        case 0x1cc654u: goto label_1cc654;
        case 0x1cc658u: goto label_1cc658;
        case 0x1cc65cu: goto label_1cc65c;
        case 0x1cc660u: goto label_1cc660;
        case 0x1cc664u: goto label_1cc664;
        case 0x1cc668u: goto label_1cc668;
        case 0x1cc66cu: goto label_1cc66c;
        case 0x1cc670u: goto label_1cc670;
        case 0x1cc674u: goto label_1cc674;
        case 0x1cc678u: goto label_1cc678;
        case 0x1cc67cu: goto label_1cc67c;
        case 0x1cc680u: goto label_1cc680;
        case 0x1cc684u: goto label_1cc684;
        case 0x1cc688u: goto label_1cc688;
        case 0x1cc68cu: goto label_1cc68c;
        case 0x1cc690u: goto label_1cc690;
        case 0x1cc694u: goto label_1cc694;
        case 0x1cc698u: goto label_1cc698;
        case 0x1cc69cu: goto label_1cc69c;
        case 0x1cc6a0u: goto label_1cc6a0;
        case 0x1cc6a4u: goto label_1cc6a4;
        case 0x1cc6a8u: goto label_1cc6a8;
        case 0x1cc6acu: goto label_1cc6ac;
        case 0x1cc6b0u: goto label_1cc6b0;
        case 0x1cc6b4u: goto label_1cc6b4;
        case 0x1cc6b8u: goto label_1cc6b8;
        case 0x1cc6bcu: goto label_1cc6bc;
        case 0x1cc6c0u: goto label_1cc6c0;
        case 0x1cc6c4u: goto label_1cc6c4;
        case 0x1cc6c8u: goto label_1cc6c8;
        case 0x1cc6ccu: goto label_1cc6cc;
        case 0x1cc6d0u: goto label_1cc6d0;
        case 0x1cc6d4u: goto label_1cc6d4;
        case 0x1cc6d8u: goto label_1cc6d8;
        case 0x1cc6dcu: goto label_1cc6dc;
        case 0x1cc6e0u: goto label_1cc6e0;
        case 0x1cc6e4u: goto label_1cc6e4;
        case 0x1cc6e8u: goto label_1cc6e8;
        case 0x1cc6ecu: goto label_1cc6ec;
        case 0x1cc6f0u: goto label_1cc6f0;
        case 0x1cc6f4u: goto label_1cc6f4;
        case 0x1cc6f8u: goto label_1cc6f8;
        case 0x1cc6fcu: goto label_1cc6fc;
        case 0x1cc700u: goto label_1cc700;
        case 0x1cc704u: goto label_1cc704;
        case 0x1cc708u: goto label_1cc708;
        case 0x1cc70cu: goto label_1cc70c;
        case 0x1cc710u: goto label_1cc710;
        case 0x1cc714u: goto label_1cc714;
        case 0x1cc718u: goto label_1cc718;
        case 0x1cc71cu: goto label_1cc71c;
        case 0x1cc720u: goto label_1cc720;
        case 0x1cc724u: goto label_1cc724;
        case 0x1cc728u: goto label_1cc728;
        default: break;
    }

    ctx->pc = 0x1cba40u;

label_1cba40:
    // 0x1cba40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1cba40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1cba44:
    // 0x1cba44: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1cba44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_1cba48:
    // 0x1cba48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cba48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1cba4c:
    // 0x1cba4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cba4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1cba50:
    // 0x1cba50: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x1cba50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
label_1cba54:
    // 0x1cba54: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1cba54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_1cba58:
    // 0x1cba58: 0x2470c960  addiu       $s0, $v1, -0x36A0
    ctx->pc = 0x1cba58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953312));
label_1cba5c:
    // 0x1cba5c: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1cba5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_1cba60:
    // 0x1cba60: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x1cba60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_1cba64:
    // 0x1cba64: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1cba64u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1cba68:
    // 0x1cba68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cba68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cba6c:
    // 0x1cba6c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cba6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cba70:
    // 0x1cba70: 0xa06413a7  sb          $a0, 0x13A7($v1)
    ctx->pc = 0x1cba70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5031), (uint8_t)GPR_U32(ctx, 4));
label_1cba74:
    // 0x1cba74: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1cba74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cba78:
    // 0x1cba78: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1cba78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1cba7c:
    // 0x1cba7c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1cba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_1cba80:
    // 0x1cba80: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1cba80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1cba84:
    // 0x1cba84: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1cba84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1cba88:
    // 0x1cba88: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cba88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1cba8c:
    // 0x1cba8c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1cba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1cba90:
    // 0x1cba90: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x1cba90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_1cba94:
    // 0x1cba94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cba94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1cba98:
    // 0x1cba98: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1cba98u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 3));
label_1cba9c:
    // 0x1cba9c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cba9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbaa0:
    // 0x1cbaa0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1cbaa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_1cbaa4:
    // 0x1cbaa4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1cbaa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1cbaa8:
    // 0x1cbaa8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1cbaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cbaac:
    // 0x1cbaac: 0x10a3008c  beq         $a1, $v1, . + 4 + (0x8C << 2)
label_1cbab0:
    if (ctx->pc == 0x1CBAB0u) {
        ctx->pc = 0x1CBAB4u;
        goto label_1cbab4;
    }
    ctx->pc = 0x1CBAACu;
    {
        const bool branch_taken_0x1cbaac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cbaac) {
            ctx->pc = 0x1CBCE0u;
            goto label_1cbce0;
        }
    }
    ctx->pc = 0x1CBAB4u;
label_1cbab4:
    // 0x1cbab4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1cbab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cbab8:
    // 0x1cbab8: 0x10a40057  beq         $a1, $a0, . + 4 + (0x57 << 2)
label_1cbabc:
    if (ctx->pc == 0x1CBABCu) {
        ctx->pc = 0x1CBAC0u;
        goto label_1cbac0;
    }
    ctx->pc = 0x1CBAB8u;
    {
        const bool branch_taken_0x1cbab8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1cbab8) {
            ctx->pc = 0x1CBC18u;
            goto label_1cbc18;
        }
    }
    ctx->pc = 0x1CBAC0u;
label_1cbac0:
    // 0x1cbac0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cbac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cbac4:
    // 0x1cbac4: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
label_1cbac8:
    if (ctx->pc == 0x1CBAC8u) {
        ctx->pc = 0x1CBACCu;
        goto label_1cbacc;
    }
    ctx->pc = 0x1CBAC4u;
    {
        const bool branch_taken_0x1cbac4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cbac4) {
            ctx->pc = 0x1CBB28u;
            goto label_1cbb28;
        }
    }
    ctx->pc = 0x1CBACCu;
label_1cbacc:
    // 0x1cbacc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1cbad0:
    if (ctx->pc == 0x1CBAD0u) {
        ctx->pc = 0x1CBAD4u;
        goto label_1cbad4;
    }
    ctx->pc = 0x1CBACCu;
    {
        const bool branch_taken_0x1cbacc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbacc) {
            ctx->pc = 0x1CBADCu;
            goto label_1cbadc;
        }
    }
    ctx->pc = 0x1CBAD4u;
label_1cbad4:
    // 0x1cbad4: 0x1000030f  b           . + 4 + (0x30F << 2)
label_1cbad8:
    if (ctx->pc == 0x1CBAD8u) {
        ctx->pc = 0x1CBADCu;
        goto label_1cbadc;
    }
    ctx->pc = 0x1CBAD4u;
    {
        const bool branch_taken_0x1cbad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbad4) {
            ctx->pc = 0x1CC714u;
            goto label_1cc714;
        }
    }
    ctx->pc = 0x1CBADCu;
label_1cbadc:
    // 0x1cbadc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbae0:
    // 0x1cbae0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cbae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbae4:
    // 0x1cbae4: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1cbae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1cbae8:
    // 0x1cbae8: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x1cbae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1cbaec:
    // 0x1cbaec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cbaecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cbaf0:
    // 0x1cbaf0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cbaf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1cbaf4:
    // 0x1cbaf4: 0xc0965d0  jal         func_259740
label_1cbaf8:
    if (ctx->pc == 0x1CBAF8u) {
        ctx->pc = 0x1CBAFCu;
        goto label_1cbafc;
    }
    ctx->pc = 0x1CBAF4u;
    SET_GPR_U32(ctx, 31, 0x1CBAFCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CBAF4u, 0x1CBAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBAFCu;
label_1cbafc:
    // 0x1cbafc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cbafcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cbb00:
    // 0x1cbb00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cbb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cbb04:
    // 0x1cbb04: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x1cbb04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_1cbb08:
    // 0x1cbb08: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1cbb08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_1cbb0c:
    // 0x1cbb0c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1cbb0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cbb10:
    // 0x1cbb10: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1cbb10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_1cbb14:
    // 0x1cbb14: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cbb14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1cbb18:
    // 0x1cbb18: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1cbb18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbb1c:
    // 0x1cbb1c: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x1cbb1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_1cbb20:
    // 0x1cbb20: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1cbb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1cbb24:
    // 0x1cbb24: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1cbb24u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_1cbb28:
    // 0x1cbb28: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbb2c:
    // 0x1cbb2c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1cbb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1cbb30:
    // 0x1cbb30: 0xc096b40  jal         func_25AD00
label_1cbb34:
    if (ctx->pc == 0x1CBB34u) {
        ctx->pc = 0x1CBB38u;
        goto label_1cbb38;
    }
    ctx->pc = 0x1CBB30u;
    SET_GPR_U32(ctx, 31, 0x1CBB38u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CBB30u, 0x1CBB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBB38u;
label_1cbb38:
    // 0x1cbb38: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cbb38u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cbb3c:
    // 0x1cbb3c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbb40:
    // 0x1cbb40: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1cbb40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbb44:
    // 0x1cbb44: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x1cbb44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
label_1cbb48:
    // 0x1cbb48: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1cbb48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_1cbb4c:
    // 0x1cbb4c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1cbb4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cbb50:
    // 0x1cbb50: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x1cbb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
label_1cbb54:
    // 0x1cbb54: 0x24a50180  addiu       $a1, $a1, 0x180
    ctx->pc = 0x1cbb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
label_1cbb58:
    // 0x1cbb58: 0xc040ed8  jal         func_103B60
label_1cbb5c:
    if (ctx->pc == 0x1CBB5Cu) {
        ctx->pc = 0x1CBB60u;
        goto label_1cbb60;
    }
    ctx->pc = 0x1CBB58u;
    SET_GPR_U32(ctx, 31, 0x1CBB60u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1CBB60u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1CBB60u) { return; }
    ctx->pc = 0x1CBB60u;
label_1cbb60:
    // 0x1cbb60: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbb64:
    // 0x1cbb64: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbb68:
    // 0x1cbb68: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1cbb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cbb6c:
    // 0x1cbb6c: 0xc05cd78  jal         func_1735E0
label_1cbb70:
    if (ctx->pc == 0x1CBB70u) {
        ctx->pc = 0x1CBB74u;
        goto label_1cbb74;
    }
    ctx->pc = 0x1CBB6Cu;
    SET_GPR_U32(ctx, 31, 0x1CBB74u);
    ctx->pc = 0x1735E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1735E0u, 0x1CBB6Cu, 0x1CBB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBB74u;
label_1cbb74:
    // 0x1cbb74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cbb74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cbb78:
    // 0x1cbb78: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbb7c:
    // 0x1cbb7c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cbb7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cbb80:
    // 0x1cbb80: 0xc0574f4  jal         func_15D3D0
label_1cbb84:
    if (ctx->pc == 0x1CBB84u) {
        ctx->pc = 0x1CBB88u;
        goto label_1cbb88;
    }
    ctx->pc = 0x1CBB80u;
    SET_GPR_U32(ctx, 31, 0x1CBB88u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x1CBB80u, 0x1CBB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBB88u;
label_1cbb88:
    // 0x1cbb88: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cbb88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cbb8c:
    // 0x1cbb8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cbb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbb90:
    // 0x1cbb90: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1cbb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1cbb94:
    // 0x1cbb94: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1cbb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1cbb98:
    // 0x1cbb98: 0xc05cf7c  jal         func_173DF0
label_1cbb9c:
    if (ctx->pc == 0x1CBB9Cu) {
        ctx->pc = 0x1CBBA0u;
        goto label_1cbba0;
    }
    ctx->pc = 0x1CBB98u;
    SET_GPR_U32(ctx, 31, 0x1CBBA0u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1CBB98u, 0x1CBBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBBA0u;
label_1cbba0:
    // 0x1cbba0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1cbba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1cbba4:
    // 0x1cbba4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1cbba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1cbba8:
    // 0x1cbba8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cbba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cbbac:
    // 0x1cbbac: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1cbbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cbbb0:
    // 0x1cbbb0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1cbbb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cbbb4:
    // 0x1cbbb4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbbb8:
    // 0x1cbbb8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1cbbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cbbbc:
    // 0x1cbbbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cbbbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cbbc0:
    // 0x1cbbc0: 0x0  nop
    ctx->pc = 0x1cbbc0u;
    // NOP
label_1cbbc4:
    // 0x1cbbc4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1cbbc8:
    if (ctx->pc == 0x1CBBC8u) {
        ctx->pc = 0x1CBBCCu;
        goto label_1cbbcc;
    }
    ctx->pc = 0x1CBBC4u;
    {
        const bool branch_taken_0x1cbbc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cbbc4) {
            ctx->pc = 0x1CBBE4u;
            goto label_1cbbe4;
        }
    }
    ctx->pc = 0x1CBBCCu;
label_1cbbcc:
    // 0x1cbbcc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1cbbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1cbbd0:
    // 0x1cbbd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cbbd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cbbd4:
    // 0x1cbbd4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1cbbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cbbd8:
    // 0x1cbbd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cbbd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cbbdc:
    // 0x1cbbdc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbbe0:
    // 0x1cbbe0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1cbbe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1cbbe4:
    // 0x1cbbe4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cbbe4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cbbe8:
    // 0x1cbbe8: 0xc097530  jal         func_25D4C0
label_1cbbec:
    if (ctx->pc == 0x1CBBECu) {
        ctx->pc = 0x1CBBF0u;
        goto label_1cbbf0;
    }
    ctx->pc = 0x1CBBE8u;
    SET_GPR_U32(ctx, 31, 0x1CBBF0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CBBE8u, 0x1CBBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBBF0u;
label_1cbbf0:
    // 0x1cbbf0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cbbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbbf4:
    // 0x1cbbf4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1cbbf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1cbbf8:
    // 0x1cbbf8: 0x106002c6  beqz        $v1, . + 4 + (0x2C6 << 2)
label_1cbbfc:
    if (ctx->pc == 0x1CBBFCu) {
        ctx->pc = 0x1CBC00u;
        goto label_1cbc00;
    }
    ctx->pc = 0x1CBBF8u;
    {
        const bool branch_taken_0x1cbbf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbbf8) {
            ctx->pc = 0x1CC714u;
            goto label_1cc714;
        }
    }
    ctx->pc = 0x1CBC00u;
label_1cbc00:
    // 0x1cbc00: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbc04:
    // 0x1cbc04: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1cbc04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1cbc08:
    // 0x1cbc08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cbc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1cbc0c:
    // 0x1cbc0c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1cbc0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1cbc10:
    // 0x1cbc10: 0x100002c0  b           . + 4 + (0x2C0 << 2)
label_1cbc14:
    if (ctx->pc == 0x1CBC14u) {
        ctx->pc = 0x1CBC18u;
        goto label_1cbc18;
    }
    ctx->pc = 0x1CBC10u;
    {
        const bool branch_taken_0x1cbc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbc10) {
            ctx->pc = 0x1CC714u;
            goto label_1cc714;
        }
    }
    ctx->pc = 0x1CBC18u;
label_1cbc18:
    // 0x1cbc18: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1cbc18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_1cbc1c:
    // 0x1cbc1c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1cbc1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_1cbc20:
    // 0x1cbc20: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1cbc20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cbc24:
    // 0x1cbc24: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1cbc24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_1cbc28:
    // 0x1cbc28: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cbc28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1cbc2c:
    // 0x1cbc2c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cbc2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1cbc30:
    // 0x1cbc30: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1cbc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1cbc34:
    // 0x1cbc34: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1cbc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_1cbc38:
    // 0x1cbc38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cbc38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1cbc3c:
    // 0x1cbc3c: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1cbc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_1cbc40:
    // 0x1cbc40: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbc44:
    // 0x1cbc44: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbc48:
    // 0x1cbc48: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1cbc48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1cbc4c:
    // 0x1cbc4c: 0x24063c61  addiu       $a2, $zero, 0x3C61
    ctx->pc = 0x1cbc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15457));
label_1cbc50:
    // 0x1cbc50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cbc50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cbc54:
    // 0x1cbc54: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cbc54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1cbc58:
    // 0x1cbc58: 0xc0965d0  jal         func_259740
label_1cbc5c:
    if (ctx->pc == 0x1CBC5Cu) {
        ctx->pc = 0x1CBC60u;
        goto label_1cbc60;
    }
    ctx->pc = 0x1CBC58u;
    SET_GPR_U32(ctx, 31, 0x1CBC60u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CBC58u, 0x1CBC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBC60u;
label_1cbc60:
    // 0x1cbc60: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbc64:
    // 0x1cbc64: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x1cbc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_1cbc68:
    // 0x1cbc68: 0xc0675a4  jal         func_19D690
label_1cbc6c:
    if (ctx->pc == 0x1CBC6Cu) {
        ctx->pc = 0x1CBC70u;
        goto label_1cbc70;
    }
    ctx->pc = 0x1CBC68u;
    SET_GPR_U32(ctx, 31, 0x1CBC70u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1CBC68u, 0x1CBC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBC70u;
label_1cbc70:
    // 0x1cbc70: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cbc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbc74:
    // 0x1cbc74: 0x24641b40  addiu       $a0, $v1, 0x1B40
    ctx->pc = 0x1cbc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
label_1cbc78:
    // 0x1cbc78: 0xc0675a4  jal         func_19D690
label_1cbc7c:
    if (ctx->pc == 0x1CBC7Cu) {
        ctx->pc = 0x1CBC80u;
        goto label_1cbc80;
    }
    ctx->pc = 0x1CBC78u;
    SET_GPR_U32(ctx, 31, 0x1CBC80u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1CBC78u, 0x1CBC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBC80u;
label_1cbc80:
    // 0x1cbc80: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cbc80u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cbc84:
    // 0x1cbc84: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cbc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbc88:
    // 0x1cbc88: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x1cbc88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
label_1cbc8c:
    // 0x1cbc8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cbc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbc90:
    // 0x1cbc90: 0xac601b64  sw          $zero, 0x1B64($v1)
    ctx->pc = 0x1cbc90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7012), GPR_U32(ctx, 0));
label_1cbc94:
    // 0x1cbc94: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cbc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbc98:
    // 0x1cbc98: 0xac601b68  sw          $zero, 0x1B68($v1)
    ctx->pc = 0x1cbc98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7016), GPR_U32(ctx, 0));
label_1cbc9c:
    // 0x1cbc9c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbca0:
    // 0x1cbca0: 0xac801b6c  sw          $zero, 0x1B6C($a0)
    ctx->pc = 0x1cbca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7020), GPR_U32(ctx, 0));
label_1cbca4:
    // 0x1cbca4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cbca4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbca8:
    // 0x1cbca8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbcac:
    // 0x1cbcac: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1cbcacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_1cbcb0:
    // 0x1cbcb0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbcb4:
    // 0x1cbcb4: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x1cbcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cbcb8:
    // 0x1cbcb8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbcbc:
    // 0x1cbcbc: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x1cbcbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
label_1cbcc0:
    // 0x1cbcc0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbcc4:
    // 0x1cbcc4: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x1cbcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cbcc8:
    // 0x1cbcc8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbccc:
    // 0x1cbccc: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x1cbcccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_1cbcd0:
    // 0x1cbcd0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cbcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbcd4:
    // 0x1cbcd4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1cbcd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_1cbcd8:
    // 0x1cbcd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cbcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1cbcdc:
    // 0x1cbcdc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1cbcdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1cbce0:
    // 0x1cbce0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbce4:
    // 0x1cbce4: 0x8c431b60  lw          $v1, 0x1B60($v0)
    ctx->pc = 0x1cbce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
label_1cbce8:
    // 0x1cbce8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbcec:
    // 0x1cbcec: 0x8c421b64  lw          $v0, 0x1B64($v0)
    ctx->pc = 0x1cbcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7012)));
label_1cbcf0:
    // 0x1cbcf0: 0x106200b1  beq         $v1, $v0, . + 4 + (0xB1 << 2)
label_1cbcf4:
    if (ctx->pc == 0x1CBCF4u) {
        ctx->pc = 0x1CBCF8u;
        goto label_1cbcf8;
    }
    ctx->pc = 0x1CBCF0u;
    {
        const bool branch_taken_0x1cbcf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cbcf0) {
            ctx->pc = 0x1CBFB8u;
            goto label_1cbfb8;
        }
    }
    ctx->pc = 0x1CBCF8u;
label_1cbcf8:
    // 0x1cbcf8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbcfc:
    // 0x1cbcfc: 0x8c431b60  lw          $v1, 0x1B60($v0)
    ctx->pc = 0x1cbcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
label_1cbd00:
    // 0x1cbd00: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbd04:
    // 0x1cbd04: 0xac431b64  sw          $v1, 0x1B64($v0)
    ctx->pc = 0x1cbd04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 3));
label_1cbd08:
    // 0x1cbd08: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbd0c:
    // 0x1cbd0c: 0x8c441b60  lw          $a0, 0x1B60($v0)
    ctx->pc = 0x1cbd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
label_1cbd10:
    // 0x1cbd10: 0x2c81000b  sltiu       $at, $a0, 0xB
    ctx->pc = 0x1cbd10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_1cbd14:
    // 0x1cbd14: 0x102000a8  beqz        $at, . + 4 + (0xA8 << 2)
label_1cbd18:
    if (ctx->pc == 0x1CBD18u) {
        ctx->pc = 0x1CBD1Cu;
        goto label_1cbd1c;
    }
    ctx->pc = 0x1CBD14u;
    {
        const bool branch_taken_0x1cbd14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbd14) {
            ctx->pc = 0x1CBFB8u;
            goto label_1cbfb8;
        }
    }
    ctx->pc = 0x1CBD1Cu;
label_1cbd1c:
    // 0x1cbd1c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1cbd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_1cbd20:
    // 0x1cbd20: 0x2443f4e0  addiu       $v1, $v0, -0xB20
    ctx->pc = 0x1cbd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964448));
label_1cbd24:
    // 0x1cbd24: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1cbd24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1cbd28:
    // 0x1cbd28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cbd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cbd2c:
    // 0x1cbd2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cbd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cbd30:
    // 0x1cbd30: 0x400008  jr          $v0
label_1cbd34:
    if (ctx->pc == 0x1CBD34u) {
        ctx->pc = 0x1CBD38u;
        goto label_1cbd38;
    }
    ctx->pc = 0x1CBD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBD30u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CBD38u;
label_1cbd38:
    // 0x1cbd38: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbd3c:
    // 0x1cbd3c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbd40:
    // 0x1cbd40: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1cbd40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1cbd44:
    // 0x1cbd44: 0x24063c61  addiu       $a2, $zero, 0x3C61
    ctx->pc = 0x1cbd44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15457));
label_1cbd48:
    // 0x1cbd48: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cbd48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cbd4c:
    // 0x1cbd4c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cbd4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1cbd50:
    // 0x1cbd50: 0xc0965d0  jal         func_259740
label_1cbd54:
    if (ctx->pc == 0x1CBD54u) {
        ctx->pc = 0x1CBD58u;
        goto label_1cbd58;
    }
    ctx->pc = 0x1CBD50u;
    SET_GPR_U32(ctx, 31, 0x1CBD58u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CBD50u, 0x1CBD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBD58u;
label_1cbd58:
    // 0x1cbd58: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cbd58u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cbd5c:
    // 0x1cbd5c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1cbd5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_1cbd60:
    // 0x1cbd60: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1cbd60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_1cbd64:
    // 0x1cbd64: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1cbd64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cbd68:
    // 0x1cbd68: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1cbd68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_1cbd6c:
    // 0x1cbd6c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cbd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1cbd70:
    // 0x1cbd70: 0x10000091  b           . + 4 + (0x91 << 2)
label_1cbd74:
    if (ctx->pc == 0x1CBD74u) {
        ctx->pc = 0x1CBD78u;
        goto label_1cbd78;
    }
    ctx->pc = 0x1CBD70u;
    {
        const bool branch_taken_0x1cbd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbd70) {
            ctx->pc = 0x1CBFB8u;
            goto label_1cbfb8;
        }
    }
    ctx->pc = 0x1CBD78u;
label_1cbd78:
    // 0x1cbd78: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbd78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbd7c:
    // 0x1cbd7c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cbd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbd80:
    // 0x1cbd80: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1cbd80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1cbd84:
    // 0x1cbd84: 0x24063c62  addiu       $a2, $zero, 0x3C62
    ctx->pc = 0x1cbd84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15458));
label_1cbd88:
    // 0x1cbd88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cbd88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cbd8c:
    // 0x1cbd8c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cbd8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1cbd90:
    // 0x1cbd90: 0xc0965d0  jal         func_259740
label_1cbd94:
    if (ctx->pc == 0x1CBD94u) {
        ctx->pc = 0x1CBD98u;
        goto label_1cbd98;
    }
    ctx->pc = 0x1CBD90u;
    SET_GPR_U32(ctx, 31, 0x1CBD98u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CBD90u, 0x1CBD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBD98u;
label_1cbd98:
    // 0x1cbd98: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1cbd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cbd9c:
    // 0x1cbd9c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1cbd9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_1cbda0:
    // 0x1cbda0: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1cbda0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_1cbda4:
    // 0x1cbda4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1cbda4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cbda8:
    // 0x1cbda8: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1cbda8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_1cbdac:
    // 0x1cbdac: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cbdacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1cbdb0:
    // 0x1cbdb0: 0x10000081  b           . + 4 + (0x81 << 2)
label_1cbdb4:
    if (ctx->pc == 0x1CBDB4u) {
        ctx->pc = 0x1CBDB8u;
        goto label_1cbdb8;
    }
    ctx->pc = 0x1CBDB0u;
    {
        const bool branch_taken_0x1cbdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbdb0) {
            ctx->pc = 0x1CBFB8u;
            goto label_1cbfb8;
        }
    }
    ctx->pc = 0x1CBDB8u;
label_1cbdb8:
    // 0x1cbdb8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbdbc:
    // 0x1cbdbc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbdc0:
    // 0x1cbdc0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1cbdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1cbdc4:
    // 0x1cbdc4: 0x24063c63  addiu       $a2, $zero, 0x3C63
    ctx->pc = 0x1cbdc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15459));
label_1cbdc8:
    // 0x1cbdc8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cbdc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cbdcc:
    // 0x1cbdcc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cbdccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1cbdd0:
    // 0x1cbdd0: 0xc0965d0  jal         func_259740
label_1cbdd4:
    if (ctx->pc == 0x1CBDD4u) {
        ctx->pc = 0x1CBDD8u;
        goto label_1cbdd8;
    }
    ctx->pc = 0x1CBDD0u;
    SET_GPR_U32(ctx, 31, 0x1CBDD8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CBDD0u, 0x1CBDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBDD8u;
label_1cbdd8:
    // 0x1cbdd8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1cbdd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_1cbddc:
    // 0x1cbddc: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1cbddcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_1cbde0:
    // 0x1cbde0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1cbde0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cbde4:
    // 0x1cbde4: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1cbde4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_1cbde8:
    // 0x1cbde8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cbde8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1cbdec:
    // 0x1cbdec: 0x10000072  b           . + 4 + (0x72 << 2)
label_1cbdf0:
    if (ctx->pc == 0x1CBDF0u) {
        ctx->pc = 0x1CBDF4u;
        goto label_1cbdf4;
    }
    ctx->pc = 0x1CBDECu;
    {
        const bool branch_taken_0x1cbdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbdec) {
            ctx->pc = 0x1CBFB8u;
            goto label_1cbfb8;
        }
    }
    ctx->pc = 0x1CBDF4u;
label_1cbdf4:
    // 0x1cbdf4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbdf8:
    // 0x1cbdf8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbdfc:
    // 0x1cbdfc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1cbdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1cbe00:
    // 0x1cbe00: 0x24063c9e  addiu       $a2, $zero, 0x3C9E
    ctx->pc = 0x1cbe00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15518));
label_1cbe04:
    // 0x1cbe04: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cbe04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cbe08:
    // 0x1cbe08: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cbe08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1cbe0c:
    // 0x1cbe0c: 0xc0965d0  jal         func_259740
label_1cbe10:
    if (ctx->pc == 0x1CBE10u) {
        ctx->pc = 0x1CBE14u;
        goto label_1cbe14;
    }
    ctx->pc = 0x1CBE0Cu;
    SET_GPR_U32(ctx, 31, 0x1CBE14u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CBE0Cu, 0x1CBE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBE14u;
label_1cbe14:
    // 0x1cbe14: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1cbe14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cbe18:
    // 0x1cbe18: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1cbe18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_1cbe1c:
    // 0x1cbe1c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1cbe1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_1cbe20:
    // 0x1cbe20: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1cbe20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cbe24:
    // 0x1cbe24: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1cbe24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_1cbe28:
    // 0x1cbe28: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cbe28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1cbe2c:
    // 0x1cbe2c: 0x10000062  b           . + 4 + (0x62 << 2)
label_1cbe30:
    if (ctx->pc == 0x1CBE30u) {
        ctx->pc = 0x1CBE34u;
        goto label_1cbe34;
    }
    ctx->pc = 0x1CBE2Cu;
    {
        const bool branch_taken_0x1cbe2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbe2c) {
            ctx->pc = 0x1CBFB8u;
            goto label_1cbfb8;
        }
    }
    ctx->pc = 0x1CBE34u;
label_1cbe34:
    // 0x1cbe34: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbe34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbe38:
    // 0x1cbe38: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbe38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbe3c:
    // 0x1cbe3c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1cbe3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1cbe40:
    // 0x1cbe40: 0x24063c9d  addiu       $a2, $zero, 0x3C9D
    ctx->pc = 0x1cbe40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15517));
label_1cbe44:
    // 0x1cbe44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cbe44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cbe48:
    // 0x1cbe48: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cbe48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1cbe4c:
    // 0x1cbe4c: 0xc0965d0  jal         func_259740
label_1cbe50:
    if (ctx->pc == 0x1CBE50u) {
        ctx->pc = 0x1CBE54u;
        goto label_1cbe54;
    }
    ctx->pc = 0x1CBE4Cu;
    SET_GPR_U32(ctx, 31, 0x1CBE54u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CBE4Cu, 0x1CBE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBE54u;
label_1cbe54:
    // 0x1cbe54: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1cbe54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cbe58:
    // 0x1cbe58: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x1cbe58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_1cbe5c:
    // 0x1cbe5c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1cbe5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_1cbe60:
    // 0x1cbe60: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1cbe60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cbe64:
    // 0x1cbe64: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1cbe64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_1cbe68:
    // 0x1cbe68: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cbe68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1cbe6c:
    // 0x1cbe6c: 0x10000052  b           . + 4 + (0x52 << 2)
label_1cbe70:
    if (ctx->pc == 0x1CBE70u) {
        ctx->pc = 0x1CBE74u;
        goto label_1cbe74;
    }
    ctx->pc = 0x1CBE6Cu;
    {
        const bool branch_taken_0x1cbe6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbe6c) {
            ctx->pc = 0x1CBFB8u;
            goto label_1cbfb8;
        }
    }
    ctx->pc = 0x1CBE74u;
label_1cbe74:
    // 0x1cbe74: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbe74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbe78:
    // 0x1cbe78: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cbe78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbe7c:
    // 0x1cbe7c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1cbe7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1cbe80:
    // 0x1cbe80: 0x24060a71  addiu       $a2, $zero, 0xA71
    ctx->pc = 0x1cbe80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2673));
label_1cbe84:
    // 0x1cbe84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cbe84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cbe88:
    // 0x1cbe88: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cbe88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1cbe8c:
    // 0x1cbe8c: 0xc0965d0  jal         func_259740
label_1cbe90:
    if (ctx->pc == 0x1CBE90u) {
        ctx->pc = 0x1CBE94u;
        goto label_1cbe94;
    }
    ctx->pc = 0x1CBE8Cu;
    SET_GPR_U32(ctx, 31, 0x1CBE94u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CBE8Cu, 0x1CBE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBE94u;
label_1cbe94:
    // 0x1cbe94: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cbe94u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cbe98:
    // 0x1cbe98: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1cbe98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cbe9c:
    // 0x1cbe9c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x1cbe9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_1cbea0:
    // 0x1cbea0: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1cbea0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_1cbea4:
    // 0x1cbea4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1cbea4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cbea8:
    // 0x1cbea8: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1cbea8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_1cbeac:
    // 0x1cbeac: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cbeacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1cbeb0:
    // 0x1cbeb0: 0x10000041  b           . + 4 + (0x41 << 2)
label_1cbeb4:
    if (ctx->pc == 0x1CBEB4u) {
        ctx->pc = 0x1CBEB8u;
        goto label_1cbeb8;
    }
    ctx->pc = 0x1CBEB0u;
    {
        const bool branch_taken_0x1cbeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbeb0) {
            ctx->pc = 0x1CBFB8u;
            goto label_1cbfb8;
        }
    }
    ctx->pc = 0x1CBEB8u;
label_1cbeb8:
    // 0x1cbeb8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbebc:
    // 0x1cbebc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cbebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbec0:
    // 0x1cbec0: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1cbec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1cbec4:
    // 0x1cbec4: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x1cbec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_1cbec8:
    // 0x1cbec8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cbec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cbecc:
    // 0x1cbecc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cbeccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1cbed0:
    // 0x1cbed0: 0xc0965d0  jal         func_259740
label_1cbed4:
    if (ctx->pc == 0x1CBED4u) {
        ctx->pc = 0x1CBED8u;
        goto label_1cbed8;
    }
    ctx->pc = 0x1CBED0u;
    SET_GPR_U32(ctx, 31, 0x1CBED8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CBED0u, 0x1CBED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBED8u;
label_1cbed8:
    // 0x1cbed8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cbed8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cbedc:
    // 0x1cbedc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1cbedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1cbee0:
    // 0x1cbee0: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x1cbee0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_1cbee4:
    // 0x1cbee4: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1cbee4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_1cbee8:
    // 0x1cbee8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1cbee8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cbeec:
    // 0x1cbeec: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1cbeecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_1cbef0:
    // 0x1cbef0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cbef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1cbef4:
    // 0x1cbef4: 0x10000030  b           . + 4 + (0x30 << 2)
label_1cbef8:
    if (ctx->pc == 0x1CBEF8u) {
        ctx->pc = 0x1CBEFCu;
        goto label_1cbefc;
    }
    ctx->pc = 0x1CBEF4u;
    {
        const bool branch_taken_0x1cbef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbef4) {
            ctx->pc = 0x1CBFB8u;
            goto label_1cbfb8;
        }
    }
    ctx->pc = 0x1CBEFCu;
label_1cbefc:
    // 0x1cbefc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbf00:
    // 0x1cbf00: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cbf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbf04:
    // 0x1cbf04: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1cbf04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1cbf08:
    // 0x1cbf08: 0x24060a74  addiu       $a2, $zero, 0xA74
    ctx->pc = 0x1cbf08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2676));
label_1cbf0c:
    // 0x1cbf0c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cbf0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cbf10:
    // 0x1cbf10: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cbf10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1cbf14:
    // 0x1cbf14: 0xc0965d0  jal         func_259740
label_1cbf18:
    if (ctx->pc == 0x1CBF18u) {
        ctx->pc = 0x1CBF1Cu;
        goto label_1cbf1c;
    }
    ctx->pc = 0x1CBF14u;
    SET_GPR_U32(ctx, 31, 0x1CBF1Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CBF14u, 0x1CBF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBF1Cu;
label_1cbf1c:
    // 0x1cbf1c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cbf1cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cbf20:
    // 0x1cbf20: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1cbf20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1cbf24:
    // 0x1cbf24: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x1cbf24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_1cbf28:
    // 0x1cbf28: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1cbf28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_1cbf2c:
    // 0x1cbf2c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1cbf2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cbf30:
    // 0x1cbf30: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1cbf30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_1cbf34:
    // 0x1cbf34: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cbf34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1cbf38:
    // 0x1cbf38: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1cbf3c:
    if (ctx->pc == 0x1CBF3Cu) {
        ctx->pc = 0x1CBF40u;
        goto label_1cbf40;
    }
    ctx->pc = 0x1CBF38u;
    {
        const bool branch_taken_0x1cbf38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbf38) {
            ctx->pc = 0x1CBFB8u;
            goto label_1cbfb8;
        }
    }
    ctx->pc = 0x1CBF40u;
label_1cbf40:
    // 0x1cbf40: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbf40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbf44:
    // 0x1cbf44: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cbf44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbf48:
    // 0x1cbf48: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1cbf48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1cbf4c:
    // 0x1cbf4c: 0x24060075  addiu       $a2, $zero, 0x75
    ctx->pc = 0x1cbf4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_1cbf50:
    // 0x1cbf50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cbf50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cbf54:
    // 0x1cbf54: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cbf54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1cbf58:
    // 0x1cbf58: 0xc0965d0  jal         func_259740
label_1cbf5c:
    if (ctx->pc == 0x1CBF5Cu) {
        ctx->pc = 0x1CBF60u;
        goto label_1cbf60;
    }
    ctx->pc = 0x1CBF58u;
    SET_GPR_U32(ctx, 31, 0x1CBF60u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CBF58u, 0x1CBF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBF60u;
label_1cbf60:
    // 0x1cbf60: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1cbf60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1cbf64:
    // 0x1cbf64: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1cbf64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_1cbf68:
    // 0x1cbf68: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1cbf68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_1cbf6c:
    // 0x1cbf6c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1cbf6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cbf70:
    // 0x1cbf70: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1cbf70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_1cbf74:
    // 0x1cbf74: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cbf74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1cbf78:
    // 0x1cbf78: 0x1000000f  b           . + 4 + (0xF << 2)
label_1cbf7c:
    if (ctx->pc == 0x1CBF7Cu) {
        ctx->pc = 0x1CBF80u;
        goto label_1cbf80;
    }
    ctx->pc = 0x1CBF78u;
    {
        const bool branch_taken_0x1cbf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbf78) {
            ctx->pc = 0x1CBFB8u;
            goto label_1cbfb8;
        }
    }
    ctx->pc = 0x1CBF80u;
label_1cbf80:
    // 0x1cbf80: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbf80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbf84:
    // 0x1cbf84: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbf88:
    // 0x1cbf88: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1cbf88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1cbf8c:
    // 0x1cbf8c: 0x24060076  addiu       $a2, $zero, 0x76
    ctx->pc = 0x1cbf8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_1cbf90:
    // 0x1cbf90: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cbf90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cbf94:
    // 0x1cbf94: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cbf94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1cbf98:
    // 0x1cbf98: 0xc0965d0  jal         func_259740
label_1cbf9c:
    if (ctx->pc == 0x1CBF9Cu) {
        ctx->pc = 0x1CBFA0u;
        goto label_1cbfa0;
    }
    ctx->pc = 0x1CBF98u;
    SET_GPR_U32(ctx, 31, 0x1CBFA0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CBF98u, 0x1CBFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBFA0u;
label_1cbfa0:
    // 0x1cbfa0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1cbfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1cbfa4:
    // 0x1cbfa4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1cbfa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_1cbfa8:
    // 0x1cbfa8: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1cbfa8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_1cbfac:
    // 0x1cbfac: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1cbfacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cbfb0:
    // 0x1cbfb0: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1cbfb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_1cbfb4:
    // 0x1cbfb4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cbfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1cbfb8:
    // 0x1cbfb8: 0xc072e20  jal         func_1CB880
label_1cbfbc:
    if (ctx->pc == 0x1CBFBCu) {
        ctx->pc = 0x1CBFC0u;
        goto label_1cbfc0;
    }
    ctx->pc = 0x1CBFB8u;
    SET_GPR_U32(ctx, 31, 0x1CBFC0u);
    ctx->pc = 0x1CB880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB880u, 0x1CBFB8u, 0x1CBFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBFC0u;
label_1cbfc0:
    // 0x1cbfc0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbfc4:
    // 0x1cbfc4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1cbfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1cbfc8:
    // 0x1cbfc8: 0xc096b40  jal         func_25AD00
label_1cbfcc:
    if (ctx->pc == 0x1CBFCCu) {
        ctx->pc = 0x1CBFD0u;
        goto label_1cbfd0;
    }
    ctx->pc = 0x1CBFC8u;
    SET_GPR_U32(ctx, 31, 0x1CBFD0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CBFC8u, 0x1CBFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBFD0u;
label_1cbfd0:
    // 0x1cbfd0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbfd4:
    // 0x1cbfd4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbfd8:
    // 0x1cbfd8: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1cbfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cbfdc:
    // 0x1cbfdc: 0xc05cd78  jal         func_1735E0
label_1cbfe0:
    if (ctx->pc == 0x1CBFE0u) {
        ctx->pc = 0x1CBFE4u;
        goto label_1cbfe4;
    }
    ctx->pc = 0x1CBFDCu;
    SET_GPR_U32(ctx, 31, 0x1CBFE4u);
    ctx->pc = 0x1735E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1735E0u, 0x1CBFDCu, 0x1CBFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBFE4u;
label_1cbfe4:
    // 0x1cbfe4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cbfe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cbfe8:
    // 0x1cbfe8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbfec:
    // 0x1cbfec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cbfecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cbff0:
    // 0x1cbff0: 0xc0574f4  jal         func_15D3D0
label_1cbff4:
    if (ctx->pc == 0x1CBFF4u) {
        ctx->pc = 0x1CBFF8u;
        goto label_1cbff8;
    }
    ctx->pc = 0x1CBFF0u;
    SET_GPR_U32(ctx, 31, 0x1CBFF8u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x1CBFF0u, 0x1CBFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBFF8u;
label_1cbff8:
    // 0x1cbff8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cbffc:
    // 0x1cbffc: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x1cbffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_1cc000:
    // 0x1cc000: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1cc000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1cc004:
    // 0x1cc004: 0xc05cf7c  jal         func_173DF0
label_1cc008:
    if (ctx->pc == 0x1CC008u) {
        ctx->pc = 0x1CC00Cu;
        goto label_1cc00c;
    }
    ctx->pc = 0x1CC004u;
    SET_GPR_U32(ctx, 31, 0x1CC00Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1CC004u, 0x1CC00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC00Cu;
label_1cc00c:
    // 0x1cc00c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1cc00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1cc010:
    // 0x1cc010: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1cc010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1cc014:
    // 0x1cc014: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cc014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cc018:
    // 0x1cc018: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1cc018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc01c:
    // 0x1cc01c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1cc01cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cc020:
    // 0x1cc020: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc024:
    // 0x1cc024: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1cc024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc028:
    // 0x1cc028: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cc028u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cc02c:
    // 0x1cc02c: 0x0  nop
    ctx->pc = 0x1cc02cu;
    // NOP
label_1cc030:
    // 0x1cc030: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1cc034:
    if (ctx->pc == 0x1CC034u) {
        ctx->pc = 0x1CC038u;
        goto label_1cc038;
    }
    ctx->pc = 0x1CC030u;
    {
        const bool branch_taken_0x1cc030 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cc030) {
            ctx->pc = 0x1CC050u;
            goto label_1cc050;
        }
    }
    ctx->pc = 0x1CC038u;
label_1cc038:
    // 0x1cc038: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1cc038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1cc03c:
    // 0x1cc03c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cc03cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cc040:
    // 0x1cc040: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1cc040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc044:
    // 0x1cc044: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cc044u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cc048:
    // 0x1cc048: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc04c:
    // 0x1cc04c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1cc04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1cc050:
    // 0x1cc050: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cc050u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cc054:
    // 0x1cc054: 0xc097530  jal         func_25D4C0
label_1cc058:
    if (ctx->pc == 0x1CC058u) {
        ctx->pc = 0x1CC05Cu;
        goto label_1cc05c;
    }
    ctx->pc = 0x1CC054u;
    SET_GPR_U32(ctx, 31, 0x1CC05Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CC054u, 0x1CC05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC05Cu;
label_1cc05c:
    // 0x1cc05c: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x1cc05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1cc060:
    // 0x1cc060: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x1cc060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_1cc064:
    // 0x1cc064: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_1cc068:
    if (ctx->pc == 0x1CC068u) {
        ctx->pc = 0x1CC06Cu;
        goto label_1cc06c;
    }
    ctx->pc = 0x1CC064u;
    {
        const bool branch_taken_0x1cc064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc064) {
            ctx->pc = 0x1CC080u;
            goto label_1cc080;
        }
    }
    ctx->pc = 0x1CC06Cu;
label_1cc06c:
    // 0x1cc06c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cc06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1cc070:
    // 0x1cc070: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1cc070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1cc074:
    // 0x1cc074: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x1cc074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_1cc078:
    // 0x1cc078: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
label_1cc07c:
    if (ctx->pc == 0x1CC07Cu) {
        ctx->pc = 0x1CC080u;
        goto label_1cc080;
    }
    ctx->pc = 0x1CC078u;
    {
        const bool branch_taken_0x1cc078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc078) {
            ctx->pc = 0x1CC0FCu;
            goto label_1cc0fc;
        }
    }
    ctx->pc = 0x1CC080u;
label_1cc080:
    // 0x1cc080: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cc080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1cc084:
    // 0x1cc084: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1cc084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1cc088:
    // 0x1cc088: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x1cc088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
label_1cc08c:
    // 0x1cc08c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1cc08cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1cc090:
    // 0x1cc090: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cc090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1cc094:
    // 0x1cc094: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1cc094u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 3));
label_1cc098:
    // 0x1cc098: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cc098u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc09c:
    // 0x1cc09c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc0a0:
    // 0x1cc0a0: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x1cc0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
label_1cc0a4:
    // 0x1cc0a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cc0a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc0a8:
    // 0x1cc0a8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc0ac:
    // 0x1cc0ac: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1cc0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
label_1cc0b0:
    // 0x1cc0b0: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x1cc0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_1cc0b4:
    // 0x1cc0b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cc0b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc0b8:
    // 0x1cc0b8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc0bc:
    // 0x1cc0bc: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x1cc0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
label_1cc0c0:
    // 0x1cc0c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cc0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc0c4:
    // 0x1cc0c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc0c8:
    // 0x1cc0c8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cc0c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1cc0cc:
    // 0x1cc0cc: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1cc0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1cc0d0:
    // 0x1cc0d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc0d4:
    // 0x1cc0d4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1cc0d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1cc0d8:
    // 0x1cc0d8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc0dc:
    // 0x1cc0dc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1cc0dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cc0e0:
    // 0x1cc0e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc0e4:
    // 0x1cc0e4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cc0e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1cc0e8:
    // 0x1cc0e8: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x1cc0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
label_1cc0ec:
    // 0x1cc0ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc0f0:
    // 0x1cc0f0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1cc0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1cc0f4:
    // 0x1cc0f4: 0x10000187  b           . + 4 + (0x187 << 2)
label_1cc0f8:
    if (ctx->pc == 0x1CC0F8u) {
        ctx->pc = 0x1CC0FCu;
        goto label_1cc0fc;
    }
    ctx->pc = 0x1CC0F4u;
    {
        const bool branch_taken_0x1cc0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc0f4) {
            ctx->pc = 0x1CC714u;
            goto label_1cc714;
        }
    }
    ctx->pc = 0x1CC0FCu;
label_1cc0fc:
    // 0x1cc0fc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc100:
    // 0x1cc100: 0x8c651b64  lw          $a1, 0x1B64($v1)
    ctx->pc = 0x1cc100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
label_1cc104:
    // 0x1cc104: 0x2ca1000b  sltiu       $at, $a1, 0xB
    ctx->pc = 0x1cc104u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_1cc108:
    // 0x1cc108: 0x10200182  beqz        $at, . + 4 + (0x182 << 2)
label_1cc10c:
    if (ctx->pc == 0x1CC10Cu) {
        ctx->pc = 0x1CC110u;
        goto label_1cc110;
    }
    ctx->pc = 0x1CC108u;
    {
        const bool branch_taken_0x1cc108 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc108) {
            ctx->pc = 0x1CC714u;
            goto label_1cc714;
        }
    }
    ctx->pc = 0x1CC110u;
label_1cc110:
    // 0x1cc110: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1cc110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_1cc114:
    // 0x1cc114: 0x2464f4b0  addiu       $a0, $v1, -0xB50
    ctx->pc = 0x1cc114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964400));
label_1cc118:
    // 0x1cc118: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1cc118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1cc11c:
    // 0x1cc11c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cc11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1cc120:
    // 0x1cc120: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1cc120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1cc124:
    // 0x1cc124: 0x600008  jr          $v1
label_1cc128:
    if (ctx->pc == 0x1CC128u) {
        ctx->pc = 0x1CC12Cu;
        goto label_1cc12c;
    }
    ctx->pc = 0x1CC124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC124u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CC12Cu;
label_1cc12c:
    // 0x1cc12c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc130:
    // 0x1cc130: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x1cc130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc134:
    // 0x1cc134: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1cc134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1cc138:
    // 0x1cc138: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cc138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc13c:
    // 0x1cc13c: 0x0  nop
    ctx->pc = 0x1cc13cu;
    // NOP
label_1cc140:
    // 0x1cc140: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cc140u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cc144:
    // 0x1cc144: 0x0  nop
    ctx->pc = 0x1cc144u;
    // NOP
label_1cc148:
    // 0x1cc148: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1cc14c:
    if (ctx->pc == 0x1CC14Cu) {
        ctx->pc = 0x1CC150u;
        goto label_1cc150;
    }
    ctx->pc = 0x1CC148u;
    {
        const bool branch_taken_0x1cc148 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cc148) {
            ctx->pc = 0x1CC164u;
            goto label_1cc164;
        }
    }
    ctx->pc = 0x1CC150u;
label_1cc150:
    // 0x1cc150: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cc150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc154:
    // 0x1cc154: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc158:
    // 0x1cc158: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x1cc158u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
label_1cc15c:
    // 0x1cc15c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1cc160:
    if (ctx->pc == 0x1CC160u) {
        ctx->pc = 0x1CC164u;
        goto label_1cc164;
    }
    ctx->pc = 0x1CC15Cu;
    {
        const bool branch_taken_0x1cc15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc15c) {
            ctx->pc = 0x1CC16Cu;
            goto label_1cc16c;
        }
    }
    ctx->pc = 0x1CC164u;
label_1cc164:
    // 0x1cc164: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc168:
    // 0x1cc168: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x1cc168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
label_1cc16c:
    // 0x1cc16c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc170:
    // 0x1cc170: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc174:
    // 0x1cc174: 0xc46c1b54  lwc1        $f12, 0x1B54($v1)
    ctx->pc = 0x1cc174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cc178:
    // 0x1cc178: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1cc178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1cc17c:
    // 0x1cc17c: 0xc058f20  jal         func_163C80
label_1cc180:
    if (ctx->pc == 0x1CC180u) {
        ctx->pc = 0x1CC184u;
        goto label_1cc184;
    }
    ctx->pc = 0x1CC17Cu;
    SET_GPR_U32(ctx, 31, 0x1CC184u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1CC17Cu, 0x1CC184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC184u;
label_1cc184:
    // 0x1cc184: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1cc184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_1cc188:
    // 0x1cc188: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x1cc188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc18c:
    // 0x1cc18c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cc18cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc190:
    // 0x1cc190: 0x0  nop
    ctx->pc = 0x1cc190u;
    // NOP
label_1cc194:
    // 0x1cc194: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cc194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cc198:
    // 0x1cc198: 0x0  nop
    ctx->pc = 0x1cc198u;
    // NOP
label_1cc19c:
    // 0x1cc19c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_1cc1a0:
    if (ctx->pc == 0x1CC1A0u) {
        ctx->pc = 0x1CC1A4u;
        goto label_1cc1a4;
    }
    ctx->pc = 0x1CC19Cu;
    {
        const bool branch_taken_0x1cc19c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cc19c) {
            ctx->pc = 0x1CC1DCu;
            goto label_1cc1dc;
        }
    }
    ctx->pc = 0x1CC1A4u;
label_1cc1a4:
    // 0x1cc1a4: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x1cc1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc1a8:
    // 0x1cc1a8: 0x3c10bbc9  lui         $s0, 0xBBC9
    ctx->pc = 0x1cc1a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48073 << 16));
label_1cc1ac:
    // 0x1cc1ac: 0x36030fdb  ori         $v1, $s0, 0xFDB
    ctx->pc = 0x1cc1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4059);
label_1cc1b0:
    // 0x1cc1b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cc1b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc1b4:
    // 0x1cc1b4: 0x0  nop
    ctx->pc = 0x1cc1b4u;
    // NOP
label_1cc1b8:
    // 0x1cc1b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cc1b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cc1bc:
    // 0x1cc1bc: 0x0  nop
    ctx->pc = 0x1cc1bcu;
    // NOP
label_1cc1c0:
    // 0x1cc1c0: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_1cc1c4:
    if (ctx->pc == 0x1CC1C4u) {
        ctx->pc = 0x1CC1C8u;
        goto label_1cc1c8;
    }
    ctx->pc = 0x1CC1C0u;
    {
        const bool branch_taken_0x1cc1c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cc1c0) {
            ctx->pc = 0x1CC20Cu;
            goto label_1cc20c;
        }
    }
    ctx->pc = 0x1CC1C8u;
label_1cc1c8:
    // 0x1cc1c8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cc1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cc1cc:
    // 0x1cc1cc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc1d0:
    // 0x1cc1d0: 0xac641b60  sw          $a0, 0x1B60($v1)
    ctx->pc = 0x1cc1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 4));
label_1cc1d4:
    // 0x1cc1d4: 0x1000000d  b           . + 4 + (0xD << 2)
label_1cc1d8:
    if (ctx->pc == 0x1CC1D8u) {
        ctx->pc = 0x1CC1DCu;
        goto label_1cc1dc;
    }
    ctx->pc = 0x1CC1D4u;
    {
        const bool branch_taken_0x1cc1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc1d4) {
            ctx->pc = 0x1CC20Cu;
            goto label_1cc20c;
        }
    }
    ctx->pc = 0x1CC1DCu;
label_1cc1dc:
    // 0x1cc1dc: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x1cc1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc1e0:
    // 0x1cc1e0: 0x3c033bc9  lui         $v1, 0x3BC9
    ctx->pc = 0x1cc1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15305 << 16));
label_1cc1e4:
    // 0x1cc1e4: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x1cc1e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1cc1e8:
    // 0x1cc1e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cc1e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc1ec:
    // 0x1cc1ec: 0x0  nop
    ctx->pc = 0x1cc1ecu;
    // NOP
label_1cc1f0:
    // 0x1cc1f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cc1f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cc1f4:
    // 0x1cc1f4: 0x0  nop
    ctx->pc = 0x1cc1f4u;
    // NOP
label_1cc1f8:
    // 0x1cc1f8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1cc1fc:
    if (ctx->pc == 0x1CC1FCu) {
        ctx->pc = 0x1CC200u;
        goto label_1cc200;
    }
    ctx->pc = 0x1CC1F8u;
    {
        const bool branch_taken_0x1cc1f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cc1f8) {
            ctx->pc = 0x1CC20Cu;
            goto label_1cc20c;
        }
    }
    ctx->pc = 0x1CC200u;
label_1cc200:
    // 0x1cc200: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cc200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cc204:
    // 0x1cc204: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cc204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc208:
    // 0x1cc208: 0xac851b60  sw          $a1, 0x1B60($a0)
    ctx->pc = 0x1cc208u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 5));
label_1cc20c:
    // 0x1cc20c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc210:
    // 0x1cc210: 0x846313ac  lh          $v1, 0x13AC($v1)
    ctx->pc = 0x1cc210u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5036)));
label_1cc214:
    // 0x1cc214: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
label_1cc218:
    if (ctx->pc == 0x1CC218u) {
        ctx->pc = 0x1CC21Cu;
        goto label_1cc21c;
    }
    ctx->pc = 0x1CC214u;
    {
        const bool branch_taken_0x1cc214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc214) {
            ctx->pc = 0x1CC298u;
            goto label_1cc298;
        }
    }
    ctx->pc = 0x1CC21Cu;
label_1cc21c:
    // 0x1cc21c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cc21cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc220:
    // 0x1cc220: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc224:
    // 0x1cc224: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x1cc224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
label_1cc228:
    // 0x1cc228: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cc228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc22c:
    // 0x1cc22c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc230:
    // 0x1cc230: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1cc230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
label_1cc234:
    // 0x1cc234: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x1cc234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_1cc238:
    // 0x1cc238: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cc238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc23c:
    // 0x1cc23c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc240:
    // 0x1cc240: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x1cc240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
label_1cc244:
    // 0x1cc244: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cc244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc248:
    // 0x1cc248: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc24c:
    // 0x1cc24c: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1cc24cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_1cc250:
    // 0x1cc250: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1cc250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1cc254:
    // 0x1cc254: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc258:
    // 0x1cc258: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1cc258u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1cc25c:
    // 0x1cc25c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cc25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc260:
    // 0x1cc260: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1cc260u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cc264:
    // 0x1cc264: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc268:
    // 0x1cc268: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cc268u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1cc26c:
    // 0x1cc26c: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x1cc26cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
label_1cc270:
    // 0x1cc270: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1cc270u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc274:
    // 0x1cc274: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x1cc274u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
label_1cc278:
    // 0x1cc278: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cc278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1cc27c:
    // 0x1cc27c: 0x8c271a98  lw          $a3, 0x1A98($at)
    ctx->pc = 0x1cc27cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1cc280:
    // 0x1cc280: 0x2408dfff  addiu       $t0, $zero, -0x2001
    ctx->pc = 0x1cc280u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
label_1cc284:
    // 0x1cc284: 0xe81824  and         $v1, $a3, $t0
    ctx->pc = 0x1cc284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
label_1cc288:
    // 0x1cc288: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cc288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1cc28c:
    // 0x1cc28c: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1cc28cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 3));
label_1cc290:
    // 0x1cc290: 0x10000120  b           . + 4 + (0x120 << 2)
label_1cc294:
    if (ctx->pc == 0x1CC294u) {
        ctx->pc = 0x1CC298u;
        goto label_1cc298;
    }
    ctx->pc = 0x1CC290u;
    {
        const bool branch_taken_0x1cc290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc290) {
            ctx->pc = 0x1CC714u;
            goto label_1cc714;
        }
    }
    ctx->pc = 0x1CC298u;
label_1cc298:
    // 0x1cc298: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x1cc298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1cc29c:
    // 0x1cc29c: 0x30650800  andi        $a1, $v1, 0x800
    ctx->pc = 0x1cc29cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_1cc2a0:
    // 0x1cc2a0: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
label_1cc2a4:
    if (ctx->pc == 0x1CC2A4u) {
        ctx->pc = 0x1CC2A8u;
        goto label_1cc2a8;
    }
    ctx->pc = 0x1CC2A0u;
    {
        const bool branch_taken_0x1cc2a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc2a0) {
            ctx->pc = 0x1CC2E0u;
            goto label_1cc2e0;
        }
    }
    ctx->pc = 0x1CC2A8u;
label_1cc2a8:
    // 0x1cc2a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cc2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc2ac:
    // 0x1cc2ac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc2b0:
    // 0x1cc2b0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cc2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1cc2b4:
    // 0x1cc2b4: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x1cc2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_1cc2b8:
    // 0x1cc2b8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1cc2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc2bc:
    // 0x1cc2bc: 0xa0a40001  sb          $a0, 0x1($a1)
    ctx->pc = 0x1cc2bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
label_1cc2c0:
    // 0x1cc2c0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc2c4:
    // 0x1cc2c4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1cc2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cc2c8:
    // 0x1cc2c8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cc2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc2cc:
    // 0x1cc2cc: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1cc2ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_1cc2d0:
    // 0x1cc2d0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1cc2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc2d4:
    // 0x1cc2d4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1cc2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_1cc2d8:
    // 0x1cc2d8: 0x1000010e  b           . + 4 + (0x10E << 2)
label_1cc2dc:
    if (ctx->pc == 0x1CC2DCu) {
        ctx->pc = 0x1CC2E0u;
        goto label_1cc2e0;
    }
    ctx->pc = 0x1CC2D8u;
    {
        const bool branch_taken_0x1cc2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc2d8) {
            ctx->pc = 0x1CC714u;
            goto label_1cc714;
        }
    }
    ctx->pc = 0x1CC2E0u;
label_1cc2e0:
    // 0x1cc2e0: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x1cc2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1cc2e4:
    // 0x1cc2e4: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x1cc2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_1cc2e8:
    // 0x1cc2e8: 0x1060010a  beqz        $v1, . + 4 + (0x10A << 2)
label_1cc2ec:
    if (ctx->pc == 0x1CC2ECu) {
        ctx->pc = 0x1CC2F0u;
        goto label_1cc2f0;
    }
    ctx->pc = 0x1CC2E8u;
    {
        const bool branch_taken_0x1cc2e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc2e8) {
            ctx->pc = 0x1CC714u;
            goto label_1cc714;
        }
    }
    ctx->pc = 0x1CC2F0u;
label_1cc2f0:
    // 0x1cc2f0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1cc2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cc2f4:
    // 0x1cc2f4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1cc2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc2f8:
    // 0x1cc2f8: 0xaca41b60  sw          $a0, 0x1B60($a1)
    ctx->pc = 0x1cc2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7008), GPR_U32(ctx, 4));
label_1cc2fc:
    // 0x1cc2fc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc300:
    // 0x1cc300: 0xac401b68  sw          $zero, 0x1B68($v0)
    ctx->pc = 0x1cc300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 0));
label_1cc304:
    // 0x1cc304: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cc304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc308:
    // 0x1cc308: 0xac8013e8  sw          $zero, 0x13E8($a0)
    ctx->pc = 0x1cc308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5096), GPR_U32(ctx, 0));
label_1cc30c:
    // 0x1cc30c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc310:
    // 0x1cc310: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1cc310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cc314:
    // 0x1cc314: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cc314u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cc318:
    // 0x1cc318: 0xc056f24  jal         func_15BC90
label_1cc31c:
    if (ctx->pc == 0x1CC31Cu) {
        ctx->pc = 0x1CC320u;
        goto label_1cc320;
    }
    ctx->pc = 0x1CC318u;
    SET_GPR_U32(ctx, 31, 0x1CC320u);
    ctx->pc = 0x15BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BC90u, 0x1CC318u, 0x1CC320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC320u;
label_1cc320:
    // 0x1cc320: 0x104000fc  beqz        $v0, . + 4 + (0xFC << 2)
label_1cc324:
    if (ctx->pc == 0x1CC324u) {
        ctx->pc = 0x1CC328u;
        goto label_1cc328;
    }
    ctx->pc = 0x1CC320u;
    {
        const bool branch_taken_0x1cc320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc320) {
            ctx->pc = 0x1CC714u;
            goto label_1cc714;
        }
    }
    ctx->pc = 0x1CC328u;
label_1cc328:
    // 0x1cc328: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cc328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc32c:
    // 0x1cc32c: 0x8c8413ec  lw          $a0, 0x13EC($a0)
    ctx->pc = 0x1cc32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5100)));
label_1cc330:
    // 0x1cc330: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc334:
    // 0x1cc334: 0xac6413e8  sw          $a0, 0x13E8($v1)
    ctx->pc = 0x1cc334u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5096), GPR_U32(ctx, 4));
label_1cc338:
    // 0x1cc338: 0x100000f6  b           . + 4 + (0xF6 << 2)
label_1cc33c:
    if (ctx->pc == 0x1CC33Cu) {
        ctx->pc = 0x1CC340u;
        goto label_1cc340;
    }
    ctx->pc = 0x1CC338u;
    {
        const bool branch_taken_0x1cc338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc338) {
            ctx->pc = 0x1CC714u;
            goto label_1cc714;
        }
    }
    ctx->pc = 0x1CC340u;
label_1cc340:
    // 0x1cc340: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cc340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc344:
    // 0x1cc344: 0x848513ac  lh          $a1, 0x13AC($a0)
    ctx->pc = 0x1cc344u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5036)));
label_1cc348:
    // 0x1cc348: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_1cc34c:
    if (ctx->pc == 0x1CC34Cu) {
        ctx->pc = 0x1CC350u;
        goto label_1cc350;
    }
    ctx->pc = 0x1CC348u;
    {
        const bool branch_taken_0x1cc348 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc348) {
            ctx->pc = 0x1CC384u;
            goto label_1cc384;
        }
    }
    ctx->pc = 0x1CC350u;
label_1cc350:
    // 0x1cc350: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc354:
    // 0x1cc354: 0x904209df  lbu         $v0, 0x9DF($v0)
    ctx->pc = 0x1cc354u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2527)));
label_1cc358:
    // 0x1cc358: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1cc358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1cc35c:
    // 0x1cc35c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1cc35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1cc360:
    // 0x1cc360: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1cc364:
    if (ctx->pc == 0x1CC364u) {
        ctx->pc = 0x1CC368u;
        goto label_1cc368;
    }
    ctx->pc = 0x1CC360u;
    {
        const bool branch_taken_0x1cc360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc360) {
            ctx->pc = 0x1CC384u;
            goto label_1cc384;
        }
    }
    ctx->pc = 0x1CC368u;
label_1cc368:
    // 0x1cc368: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x1cc368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1cc36c:
    // 0x1cc36c: 0x30430400  andi        $v1, $v0, 0x400
    ctx->pc = 0x1cc36cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_1cc370:
    // 0x1cc370: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1cc374:
    if (ctx->pc == 0x1CC374u) {
        ctx->pc = 0x1CC378u;
        goto label_1cc378;
    }
    ctx->pc = 0x1CC370u;
    {
        const bool branch_taken_0x1cc370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc370) {
            ctx->pc = 0x1CC384u;
            goto label_1cc384;
        }
    }
    ctx->pc = 0x1CC378u;
label_1cc378:
    // 0x1cc378: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cc378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc37c:
    // 0x1cc37c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cc37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc380:
    // 0x1cc380: 0xac831b68  sw          $v1, 0x1B68($a0)
    ctx->pc = 0x1cc380u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7016), GPR_U32(ctx, 3));
label_1cc384:
    // 0x1cc384: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc388:
    // 0x1cc388: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1cc388u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1cc38c:
    // 0x1cc38c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_1cc390:
    if (ctx->pc == 0x1CC390u) {
        ctx->pc = 0x1CC394u;
        goto label_1cc394;
    }
    ctx->pc = 0x1CC38Cu;
    {
        const bool branch_taken_0x1cc38c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc38c) {
            ctx->pc = 0x1CC404u;
            goto label_1cc404;
        }
    }
    ctx->pc = 0x1CC394u;
label_1cc394:
    // 0x1cc394: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc398:
    // 0x1cc398: 0x8c421b68  lw          $v0, 0x1B68($v0)
    ctx->pc = 0x1cc398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7016)));
label_1cc39c:
    // 0x1cc39c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_1cc3a0:
    if (ctx->pc == 0x1CC3A0u) {
        ctx->pc = 0x1CC3A4u;
        goto label_1cc3a4;
    }
    ctx->pc = 0x1CC39Cu;
    {
        const bool branch_taken_0x1cc39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc39c) {
            ctx->pc = 0x1CC3F8u;
            goto label_1cc3f8;
        }
    }
    ctx->pc = 0x1CC3A4u;
label_1cc3a4:
    // 0x1cc3a4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cc3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc3a8:
    // 0x1cc3a8: 0xac801b68  sw          $zero, 0x1B68($a0)
    ctx->pc = 0x1cc3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7016), GPR_U32(ctx, 0));
label_1cc3ac:
    // 0x1cc3ac: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1cc3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cc3b0:
    // 0x1cc3b0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1cc3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc3b4:
    // 0x1cc3b4: 0xaca21b60  sw          $v0, 0x1B60($a1)
    ctx->pc = 0x1cc3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7008), GPR_U32(ctx, 2));
label_1cc3b8:
    // 0x1cc3b8: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1cc3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc3bc:
    // 0x1cc3bc: 0xacc013e8  sw          $zero, 0x13E8($a2)
    ctx->pc = 0x1cc3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 5096), GPR_U32(ctx, 0));
label_1cc3c0:
    // 0x1cc3c0: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1cc3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc3c4:
    // 0x1cc3c4: 0xc4ec00d4  lwc1        $f12, 0xD4($a3)
    ctx->pc = 0x1cc3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cc3c8:
    // 0x1cc3c8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cc3c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cc3cc:
    // 0x1cc3cc: 0xc056f24  jal         func_15BC90
label_1cc3d0:
    if (ctx->pc == 0x1CC3D0u) {
        ctx->pc = 0x1CC3D4u;
        goto label_1cc3d4;
    }
    ctx->pc = 0x1CC3CCu;
    SET_GPR_U32(ctx, 31, 0x1CC3D4u);
    ctx->pc = 0x15BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BC90u, 0x1CC3CCu, 0x1CC3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3D4u;
label_1cc3d4:
    // 0x1cc3d4: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x1cc3d4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cc3d8:
    // 0x1cc3d8: 0x1100000a  beqz        $t0, . + 4 + (0xA << 2)
label_1cc3dc:
    if (ctx->pc == 0x1CC3DCu) {
        ctx->pc = 0x1CC3E0u;
        goto label_1cc3e0;
    }
    ctx->pc = 0x1CC3D8u;
    {
        const bool branch_taken_0x1cc3d8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc3d8) {
            ctx->pc = 0x1CC404u;
            goto label_1cc404;
        }
    }
    ctx->pc = 0x1CC3E0u;
label_1cc3e0:
    // 0x1cc3e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc3e4:
    // 0x1cc3e4: 0x8c4213ec  lw          $v0, 0x13EC($v0)
    ctx->pc = 0x1cc3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5100)));
label_1cc3e8:
    // 0x1cc3e8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cc3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc3ec:
    // 0x1cc3ec: 0xac8213e8  sw          $v0, 0x13E8($a0)
    ctx->pc = 0x1cc3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5096), GPR_U32(ctx, 2));
label_1cc3f0:
    // 0x1cc3f0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1cc3f4:
    if (ctx->pc == 0x1CC3F4u) {
        ctx->pc = 0x1CC3F8u;
        goto label_1cc3f8;
    }
    ctx->pc = 0x1CC3F0u;
    {
        const bool branch_taken_0x1cc3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc3f0) {
            ctx->pc = 0x1CC404u;
            goto label_1cc404;
        }
    }
    ctx->pc = 0x1CC3F8u;
label_1cc3f8:
    // 0x1cc3f8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1cc3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1cc3fc:
    // 0x1cc3fc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc400:
    // 0x1cc400: 0xac621b60  sw          $v0, 0x1B60($v1)
    ctx->pc = 0x1cc400u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 2));
label_1cc404:
    // 0x1cc404: 0xc0bcd40  jal         func_2F3500
label_1cc408:
    if (ctx->pc == 0x1CC408u) {
        ctx->pc = 0x1CC40Cu;
        goto label_1cc40c;
    }
    ctx->pc = 0x1CC404u;
    SET_GPR_U32(ctx, 31, 0x1CC40Cu);
    ctx->pc = 0x2F3500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3500u, 0x1CC404u, 0x1CC40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC40Cu;
label_1cc40c:
    // 0x1cc40c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cc40cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cc410:
    // 0x1cc410: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc414:
    // 0x1cc414: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x1cc414u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
label_1cc418:
    // 0x1cc418: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1cc418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1cc41c:
    // 0x1cc41c: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x1cc41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
label_1cc420:
    // 0x1cc420: 0x106000bc  beqz        $v1, . + 4 + (0xBC << 2)
label_1cc424:
    if (ctx->pc == 0x1CC424u) {
        ctx->pc = 0x1CC428u;
        goto label_1cc428;
    }
    ctx->pc = 0x1CC420u;
    {
        const bool branch_taken_0x1cc420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc420) {
            ctx->pc = 0x1CC714u;
            goto label_1cc714;
        }
    }
    ctx->pc = 0x1CC428u;
label_1cc428:
    // 0x1cc428: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cc428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc42c:
    // 0x1cc42c: 0xc09b88c  jal         func_26E230
label_1cc430:
    if (ctx->pc == 0x1CC430u) {
        ctx->pc = 0x1CC434u;
        goto label_1cc434;
    }
    ctx->pc = 0x1CC42Cu;
    SET_GPR_U32(ctx, 31, 0x1CC434u);
    ctx->pc = 0x26E230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E230u, 0x1CC42Cu, 0x1CC434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC434u;
label_1cc434:
    // 0x1cc434: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_1cc438:
    if (ctx->pc == 0x1CC438u) {
        ctx->pc = 0x1CC43Cu;
        goto label_1cc43c;
    }
    ctx->pc = 0x1CC434u;
    {
        const bool branch_taken_0x1cc434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc434) {
            ctx->pc = 0x1CC714u;
            goto label_1cc714;
        }
    }
    ctx->pc = 0x1CC43Cu;
label_1cc43c:
    // 0x1cc43c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc440:
    // 0x1cc440: 0x844213ac  lh          $v0, 0x13AC($v0)
    ctx->pc = 0x1cc440u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5036)));
label_1cc444:
    // 0x1cc444: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1cc448:
    if (ctx->pc == 0x1CC448u) {
        ctx->pc = 0x1CC44Cu;
        goto label_1cc44c;
    }
    ctx->pc = 0x1CC444u;
    {
        const bool branch_taken_0x1cc444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc444) {
            ctx->pc = 0x1CC480u;
            goto label_1cc480;
        }
    }
    ctx->pc = 0x1CC44Cu;
label_1cc44c:
    // 0x1cc44c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc450:
    // 0x1cc450: 0x904209df  lbu         $v0, 0x9DF($v0)
    ctx->pc = 0x1cc450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2527)));
label_1cc454:
    // 0x1cc454: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1cc454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1cc458:
    // 0x1cc458: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1cc458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_1cc45c:
    // 0x1cc45c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1cc460:
    if (ctx->pc == 0x1CC460u) {
        ctx->pc = 0x1CC464u;
        goto label_1cc464;
    }
    ctx->pc = 0x1CC45Cu;
    {
        const bool branch_taken_0x1cc45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc45c) {
            ctx->pc = 0x1CC480u;
            goto label_1cc480;
        }
    }
    ctx->pc = 0x1CC464u;
label_1cc464:
    // 0x1cc464: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x1cc464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1cc468:
    // 0x1cc468: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1cc468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_1cc46c:
    // 0x1cc46c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1cc470:
    if (ctx->pc == 0x1CC470u) {
        ctx->pc = 0x1CC474u;
        goto label_1cc474;
    }
    ctx->pc = 0x1CC46Cu;
    {
        const bool branch_taken_0x1cc46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc46c) {
            ctx->pc = 0x1CC480u;
            goto label_1cc480;
        }
    }
    ctx->pc = 0x1CC474u;
label_1cc474:
    // 0x1cc474: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cc474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc478:
    // 0x1cc478: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc47c:
    // 0x1cc47c: 0xac431b68  sw          $v1, 0x1B68($v0)
    ctx->pc = 0x1cc47cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 3));
label_1cc480:
    // 0x1cc480: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc484:
    // 0x1cc484: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x1cc484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
label_1cc488:
    // 0x1cc488: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1cc48c:
    if (ctx->pc == 0x1CC48Cu) {
        ctx->pc = 0x1CC490u;
        goto label_1cc490;
    }
    ctx->pc = 0x1CC488u;
    {
        const bool branch_taken_0x1cc488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc488) {
            ctx->pc = 0x1CC4FCu;
            goto label_1cc4fc;
        }
    }
    ctx->pc = 0x1CC490u;
label_1cc490:
    // 0x1cc490: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc494:
    // 0x1cc494: 0x8c621b68  lw          $v0, 0x1B68($v1)
    ctx->pc = 0x1cc494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7016)));
label_1cc498:
    // 0x1cc498: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1cc49c:
    if (ctx->pc == 0x1CC49Cu) {
        ctx->pc = 0x1CC4A0u;
        goto label_1cc4a0;
    }
    ctx->pc = 0x1CC498u;
    {
        const bool branch_taken_0x1cc498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc498) {
            ctx->pc = 0x1CC4F0u;
            goto label_1cc4f0;
        }
    }
    ctx->pc = 0x1CC4A0u;
label_1cc4a0:
    // 0x1cc4a0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc4a4:
    // 0x1cc4a4: 0xac401b68  sw          $zero, 0x1B68($v0)
    ctx->pc = 0x1cc4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 0));
label_1cc4a8:
    // 0x1cc4a8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1cc4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1cc4ac:
    // 0x1cc4ac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc4b0:
    // 0x1cc4b0: 0xac441b60  sw          $a0, 0x1B60($v0)
    ctx->pc = 0x1cc4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 4));
label_1cc4b4:
    // 0x1cc4b4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc4b8:
    // 0x1cc4b8: 0xac6013e8  sw          $zero, 0x13E8($v1)
    ctx->pc = 0x1cc4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5096), GPR_U32(ctx, 0));
label_1cc4bc:
    // 0x1cc4bc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc4c0:
    // 0x1cc4c0: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1cc4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cc4c4:
    // 0x1cc4c4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cc4c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cc4c8:
    // 0x1cc4c8: 0xc056f24  jal         func_15BC90
label_1cc4cc:
    if (ctx->pc == 0x1CC4CCu) {
        ctx->pc = 0x1CC4D0u;
        goto label_1cc4d0;
    }
    ctx->pc = 0x1CC4C8u;
    SET_GPR_U32(ctx, 31, 0x1CC4D0u);
    ctx->pc = 0x15BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BC90u, 0x1CC4C8u, 0x1CC4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4D0u;
label_1cc4d0:
    // 0x1cc4d0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1cc4d4:
    if (ctx->pc == 0x1CC4D4u) {
        ctx->pc = 0x1CC4D8u;
        goto label_1cc4d8;
    }
    ctx->pc = 0x1CC4D0u;
    {
        const bool branch_taken_0x1cc4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc4d0) {
            ctx->pc = 0x1CC4FCu;
            goto label_1cc4fc;
        }
    }
    ctx->pc = 0x1CC4D8u;
label_1cc4d8:
    // 0x1cc4d8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc4dc:
    // 0x1cc4dc: 0x8c4413ec  lw          $a0, 0x13EC($v0)
    ctx->pc = 0x1cc4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5100)));
label_1cc4e0:
    // 0x1cc4e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc4e4:
    // 0x1cc4e4: 0xac4413e8  sw          $a0, 0x13E8($v0)
    ctx->pc = 0x1cc4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5096), GPR_U32(ctx, 4));
label_1cc4e8:
    // 0x1cc4e8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1cc4ec:
    if (ctx->pc == 0x1CC4ECu) {
        ctx->pc = 0x1CC4F0u;
        goto label_1cc4f0;
    }
    ctx->pc = 0x1CC4E8u;
    {
        const bool branch_taken_0x1cc4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc4e8) {
            ctx->pc = 0x1CC4FCu;
            goto label_1cc4fc;
        }
    }
    ctx->pc = 0x1CC4F0u;
label_1cc4f0:
    // 0x1cc4f0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1cc4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1cc4f4:
    // 0x1cc4f4: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1cc4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc4f8:
    // 0x1cc4f8: 0xacc51b60  sw          $a1, 0x1B60($a2)
    ctx->pc = 0x1cc4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 7008), GPR_U32(ctx, 5));
label_1cc4fc:
    // 0x1cc4fc: 0xc0bccb0  jal         func_2F32C0
label_1cc500:
    if (ctx->pc == 0x1CC500u) {
        ctx->pc = 0x1CC504u;
        goto label_1cc504;
    }
    ctx->pc = 0x1CC4FCu;
    SET_GPR_U32(ctx, 31, 0x1CC504u);
    ctx->pc = 0x2F32C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F32C0u, 0x1CC4FCu, 0x1CC504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC504u;
label_1cc504:
    // 0x1cc504: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1cc504u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cc508:
    // 0x1cc508: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1cc508u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc50c:
    // 0x1cc50c: 0x910309df  lbu         $v1, 0x9DF($t0)
    ctx->pc = 0x1cc50cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2527)));
label_1cc510:
    // 0x1cc510: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1cc510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1cc514:
    // 0x1cc514: 0x308300c0  andi        $v1, $a0, 0xC0
    ctx->pc = 0x1cc514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)192);
label_1cc518:
    // 0x1cc518: 0x1060007e  beqz        $v1, . + 4 + (0x7E << 2)
label_1cc51c:
    if (ctx->pc == 0x1CC51Cu) {
        ctx->pc = 0x1CC520u;
        goto label_1cc520;
    }
    ctx->pc = 0x1CC518u;
    {
        const bool branch_taken_0x1cc518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc518) {
            ctx->pc = 0x1CC714u;
            goto label_1cc714;
        }
    }
    ctx->pc = 0x1CC520u;
label_1cc520:
    // 0x1cc520: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1cc520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc524:
    // 0x1cc524: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1cc524u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1cc528:
    // 0x1cc528: 0xc09b8cc  jal         func_26E330
label_1cc52c:
    if (ctx->pc == 0x1CC52Cu) {
        ctx->pc = 0x1CC530u;
        goto label_1cc530;
    }
    ctx->pc = 0x1CC528u;
    SET_GPR_U32(ctx, 31, 0x1CC530u);
    ctx->pc = 0x26E330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E330u, 0x1CC528u, 0x1CC530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC530u;
label_1cc530:
    // 0x1cc530: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1cc530u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cc534:
    // 0x1cc534: 0x10000077  b           . + 4 + (0x77 << 2)
label_1cc538:
    if (ctx->pc == 0x1CC538u) {
        ctx->pc = 0x1CC53Cu;
        goto label_1cc53c;
    }
    ctx->pc = 0x1CC534u;
    {
        const bool branch_taken_0x1cc534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc534) {
            ctx->pc = 0x1CC714u;
            goto label_1cc714;
        }
    }
    ctx->pc = 0x1CC53Cu;
label_1cc53c:
    // 0x1cc53c: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1cc53cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc540:
    // 0x1cc540: 0x84e813ac  lh          $t0, 0x13AC($a3)
    ctx->pc = 0x1cc540u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 5036)));
label_1cc544:
    // 0x1cc544: 0x1100000e  beqz        $t0, . + 4 + (0xE << 2)
label_1cc548:
    if (ctx->pc == 0x1CC548u) {
        ctx->pc = 0x1CC54Cu;
        goto label_1cc54c;
    }
    ctx->pc = 0x1CC544u;
    {
        const bool branch_taken_0x1cc544 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc544) {
            ctx->pc = 0x1CC580u;
            goto label_1cc580;
        }
    }
    ctx->pc = 0x1CC54Cu;
label_1cc54c:
    // 0x1cc54c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc550:
    // 0x1cc550: 0x904209df  lbu         $v0, 0x9DF($v0)
    ctx->pc = 0x1cc550u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2527)));
label_1cc554:
    // 0x1cc554: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1cc554u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1cc558:
    // 0x1cc558: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x1cc558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_1cc55c:
    // 0x1cc55c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1cc560:
    if (ctx->pc == 0x1CC560u) {
        ctx->pc = 0x1CC564u;
        goto label_1cc564;
    }
    ctx->pc = 0x1CC55Cu;
    {
        const bool branch_taken_0x1cc55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc55c) {
            ctx->pc = 0x1CC580u;
            goto label_1cc580;
        }
    }
    ctx->pc = 0x1CC564u;
label_1cc564:
    // 0x1cc564: 0x8e25009c  lw          $a1, 0x9C($s1)
    ctx->pc = 0x1cc564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1cc568:
    // 0x1cc568: 0x30a60400  andi        $a2, $a1, 0x400
    ctx->pc = 0x1cc568u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1024);
label_1cc56c:
    // 0x1cc56c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_1cc570:
    if (ctx->pc == 0x1CC570u) {
        ctx->pc = 0x1CC574u;
        goto label_1cc574;
    }
    ctx->pc = 0x1CC56Cu;
    {
        const bool branch_taken_0x1cc56c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc56c) {
            ctx->pc = 0x1CC580u;
            goto label_1cc580;
        }
    }
    ctx->pc = 0x1CC574u;
label_1cc574:
    // 0x1cc574: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cc574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc578:
    // 0x1cc578: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1cc578u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc57c:
    // 0x1cc57c: 0xad071b68  sw          $a3, 0x1B68($t0)
    ctx->pc = 0x1cc57cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7016), GPR_U32(ctx, 7));
label_1cc580:
    // 0x1cc580: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc584:
    // 0x1cc584: 0x904409e7  lbu         $a0, 0x9E7($v0)
    ctx->pc = 0x1cc584u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
label_1cc588:
    // 0x1cc588: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
label_1cc58c:
    if (ctx->pc == 0x1CC58Cu) {
        ctx->pc = 0x1CC590u;
        goto label_1cc590;
    }
    ctx->pc = 0x1CC588u;
    {
        const bool branch_taken_0x1cc588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc588) {
            ctx->pc = 0x1CC600u;
            goto label_1cc600;
        }
    }
    ctx->pc = 0x1CC590u;
label_1cc590:
    // 0x1cc590: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc594:
    // 0x1cc594: 0x8c451b68  lw          $a1, 0x1B68($v0)
    ctx->pc = 0x1cc594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7016)));
label_1cc598:
    // 0x1cc598: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
label_1cc59c:
    if (ctx->pc == 0x1CC59Cu) {
        ctx->pc = 0x1CC5A0u;
        goto label_1cc5a0;
    }
    ctx->pc = 0x1CC598u;
    {
        const bool branch_taken_0x1cc598 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc598) {
            ctx->pc = 0x1CC5F4u;
            goto label_1cc5f4;
        }
    }
    ctx->pc = 0x1CC5A0u;
label_1cc5a0:
    // 0x1cc5a0: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1cc5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc5a4:
    // 0x1cc5a4: 0xacc01b68  sw          $zero, 0x1B68($a2)
    ctx->pc = 0x1cc5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 7016), GPR_U32(ctx, 0));
label_1cc5a8:
    // 0x1cc5a8: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1cc5a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cc5ac:
    // 0x1cc5ac: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1cc5acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc5b0:
    // 0x1cc5b0: 0xad071b60  sw          $a3, 0x1B60($t0)
    ctx->pc = 0x1cc5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7008), GPR_U32(ctx, 7));
label_1cc5b4:
    // 0x1cc5b4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc5b8:
    // 0x1cc5b8: 0xac4013e8  sw          $zero, 0x13E8($v0)
    ctx->pc = 0x1cc5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5096), GPR_U32(ctx, 0));
label_1cc5bc:
    // 0x1cc5bc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc5c0:
    // 0x1cc5c0: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1cc5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cc5c4:
    // 0x1cc5c4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cc5c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cc5c8:
    // 0x1cc5c8: 0xc056f24  jal         func_15BC90
label_1cc5cc:
    if (ctx->pc == 0x1CC5CCu) {
        ctx->pc = 0x1CC5D0u;
        goto label_1cc5d0;
    }
    ctx->pc = 0x1CC5C8u;
    SET_GPR_U32(ctx, 31, 0x1CC5D0u);
    ctx->pc = 0x15BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BC90u, 0x1CC5C8u, 0x1CC5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC5D0u;
label_1cc5d0:
    // 0x1cc5d0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cc5d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cc5d4:
    // 0x1cc5d4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_1cc5d8:
    if (ctx->pc == 0x1CC5D8u) {
        ctx->pc = 0x1CC5DCu;
        goto label_1cc5dc;
    }
    ctx->pc = 0x1CC5D4u;
    {
        const bool branch_taken_0x1cc5d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc5d4) {
            ctx->pc = 0x1CC600u;
            goto label_1cc600;
        }
    }
    ctx->pc = 0x1CC5DCu;
label_1cc5dc:
    // 0x1cc5dc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc5e0:
    // 0x1cc5e0: 0x8c4513ec  lw          $a1, 0x13EC($v0)
    ctx->pc = 0x1cc5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5100)));
label_1cc5e4:
    // 0x1cc5e4: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1cc5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc5e8:
    // 0x1cc5e8: 0xacc513e8  sw          $a1, 0x13E8($a2)
    ctx->pc = 0x1cc5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 5096), GPR_U32(ctx, 5));
label_1cc5ec:
    // 0x1cc5ec: 0x10000004  b           . + 4 + (0x4 << 2)
label_1cc5f0:
    if (ctx->pc == 0x1CC5F0u) {
        ctx->pc = 0x1CC5F4u;
        goto label_1cc5f4;
    }
    ctx->pc = 0x1CC5ECu;
    {
        const bool branch_taken_0x1cc5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc5ec) {
            ctx->pc = 0x1CC600u;
            goto label_1cc600;
        }
    }
    ctx->pc = 0x1CC5F4u;
label_1cc5f4:
    // 0x1cc5f4: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1cc5f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1cc5f8:
    // 0x1cc5f8: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1cc5f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc5fc:
    // 0x1cc5fc: 0xad071b60  sw          $a3, 0x1B60($t0)
    ctx->pc = 0x1cc5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7008), GPR_U32(ctx, 7));
label_1cc600:
    // 0x1cc600: 0xc0bcd40  jal         func_2F3500
label_1cc604:
    if (ctx->pc == 0x1CC604u) {
        ctx->pc = 0x1CC608u;
        goto label_1cc608;
    }
    ctx->pc = 0x1CC600u;
    SET_GPR_U32(ctx, 31, 0x1CC608u);
    ctx->pc = 0x2F3500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3500u, 0x1CC600u, 0x1CC608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC608u;
label_1cc608:
    // 0x1cc608: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc60c:
    // 0x1cc60c: 0x906409df  lbu         $a0, 0x9DF($v1)
    ctx->pc = 0x1cc60cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
label_1cc610:
    // 0x1cc610: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1cc610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1cc614:
    // 0x1cc614: 0x306500c0  andi        $a1, $v1, 0xC0
    ctx->pc = 0x1cc614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
label_1cc618:
    // 0x1cc618: 0x10a0003e  beqz        $a1, . + 4 + (0x3E << 2)
label_1cc61c:
    if (ctx->pc == 0x1CC61Cu) {
        ctx->pc = 0x1CC620u;
        goto label_1cc620;
    }
    ctx->pc = 0x1CC618u;
    {
        const bool branch_taken_0x1cc618 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc618) {
            ctx->pc = 0x1CC714u;
            goto label_1cc714;
        }
    }
    ctx->pc = 0x1CC620u;
label_1cc620:
    // 0x1cc620: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1cc620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc624:
    // 0x1cc624: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1cc624u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_1cc628:
    // 0x1cc628: 0xc09b88c  jal         func_26E230
label_1cc62c:
    if (ctx->pc == 0x1CC62Cu) {
        ctx->pc = 0x1CC630u;
        goto label_1cc630;
    }
    ctx->pc = 0x1CC628u;
    SET_GPR_U32(ctx, 31, 0x1CC630u);
    ctx->pc = 0x26E230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E230u, 0x1CC628u, 0x1CC630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC630u;
label_1cc630:
    // 0x1cc630: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1cc630u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cc634:
    // 0x1cc634: 0x10000037  b           . + 4 + (0x37 << 2)
label_1cc638:
    if (ctx->pc == 0x1CC638u) {
        ctx->pc = 0x1CC63Cu;
        goto label_1cc63c;
    }
    ctx->pc = 0x1CC634u;
    {
        const bool branch_taken_0x1cc634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc634) {
            ctx->pc = 0x1CC714u;
            goto label_1cc714;
        }
    }
    ctx->pc = 0x1CC63Cu;
label_1cc63c:
    // 0x1cc63c: 0x8e280090  lw          $t0, 0x90($s1)
    ctx->pc = 0x1cc63cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_1cc640:
    // 0x1cc640: 0x31030800  andi        $v1, $t0, 0x800
    ctx->pc = 0x1cc640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
label_1cc644:
    // 0x1cc644: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_1cc648:
    if (ctx->pc == 0x1CC648u) {
        ctx->pc = 0x1CC64Cu;
        goto label_1cc64c;
    }
    ctx->pc = 0x1CC644u;
    {
        const bool branch_taken_0x1cc644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc644) {
            ctx->pc = 0x1CC684u;
            goto label_1cc684;
        }
    }
    ctx->pc = 0x1CC64Cu;
label_1cc64c:
    // 0x1cc64c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cc64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc650:
    // 0x1cc650: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cc650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc654:
    // 0x1cc654: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1cc654u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1cc658:
    // 0x1cc658: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x1cc658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_1cc65c:
    // 0x1cc65c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1cc65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc660:
    // 0x1cc660: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x1cc660u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
label_1cc664:
    // 0x1cc664: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1cc664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc668:
    // 0x1cc668: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x1cc668u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cc66c:
    // 0x1cc66c: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1cc66cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc670:
    // 0x1cc670: 0xa0e00003  sb          $zero, 0x3($a3)
    ctx->pc = 0x1cc670u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
label_1cc674:
    // 0x1cc674: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1cc674u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc678:
    // 0x1cc678: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x1cc678u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
label_1cc67c:
    // 0x1cc67c: 0x10000025  b           . + 4 + (0x25 << 2)
label_1cc680:
    if (ctx->pc == 0x1CC680u) {
        ctx->pc = 0x1CC684u;
        goto label_1cc684;
    }
    ctx->pc = 0x1CC67Cu;
    {
        const bool branch_taken_0x1cc67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc67c) {
            ctx->pc = 0x1CC714u;
            goto label_1cc714;
        }
    }
    ctx->pc = 0x1CC684u;
label_1cc684:
    // 0x1cc684: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc688:
    // 0x1cc688: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1cc688u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1cc68c:
    // 0x1cc68c: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_1cc690:
    if (ctx->pc == 0x1CC690u) {
        ctx->pc = 0x1CC694u;
        goto label_1cc694;
    }
    ctx->pc = 0x1CC68Cu;
    {
        const bool branch_taken_0x1cc68c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc68c) {
            ctx->pc = 0x1CC714u;
            goto label_1cc714;
        }
    }
    ctx->pc = 0x1CC694u;
label_1cc694:
    // 0x1cc694: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cc694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc698:
    // 0x1cc698: 0xac801b60  sw          $zero, 0x1B60($a0)
    ctx->pc = 0x1cc698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 0));
label_1cc69c:
    // 0x1cc69c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1cc6a0:
    if (ctx->pc == 0x1CC6A0u) {
        ctx->pc = 0x1CC6A4u;
        goto label_1cc6a4;
    }
    ctx->pc = 0x1CC69Cu;
    {
        const bool branch_taken_0x1cc69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc69c) {
            ctx->pc = 0x1CC714u;
            goto label_1cc714;
        }
    }
    ctx->pc = 0x1CC6A4u;
label_1cc6a4:
    // 0x1cc6a4: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x1cc6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_1cc6a8:
    // 0x1cc6a8: 0x30650800  andi        $a1, $v1, 0x800
    ctx->pc = 0x1cc6a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_1cc6ac:
    // 0x1cc6ac: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
label_1cc6b0:
    if (ctx->pc == 0x1CC6B0u) {
        ctx->pc = 0x1CC6B4u;
        goto label_1cc6b4;
    }
    ctx->pc = 0x1CC6ACu;
    {
        const bool branch_taken_0x1cc6ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc6ac) {
            ctx->pc = 0x1CC6ECu;
            goto label_1cc6ec;
        }
    }
    ctx->pc = 0x1CC6B4u;
label_1cc6b4:
    // 0x1cc6b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cc6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc6b8:
    // 0x1cc6b8: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1cc6b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc6bc:
    // 0x1cc6bc: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x1cc6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
label_1cc6c0:
    // 0x1cc6c0: 0x24080021  addiu       $t0, $zero, 0x21
    ctx->pc = 0x1cc6c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_1cc6c4:
    // 0x1cc6c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc6c8:
    // 0x1cc6c8: 0xa0680001  sb          $t0, 0x1($v1)
    ctx->pc = 0x1cc6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 8));
label_1cc6cc:
    // 0x1cc6cc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc6d0:
    // 0x1cc6d0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1cc6d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cc6d4:
    // 0x1cc6d4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cc6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc6d8:
    // 0x1cc6d8: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1cc6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_1cc6dc:
    // 0x1cc6dc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc6e0:
    // 0x1cc6e0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1cc6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1cc6e4:
    // 0x1cc6e4: 0x1000000b  b           . + 4 + (0xB << 2)
label_1cc6e8:
    if (ctx->pc == 0x1CC6E8u) {
        ctx->pc = 0x1CC6ECu;
        goto label_1cc6ec;
    }
    ctx->pc = 0x1CC6E4u;
    {
        const bool branch_taken_0x1cc6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc6e4) {
            ctx->pc = 0x1CC714u;
            goto label_1cc714;
        }
    }
    ctx->pc = 0x1CC6ECu;
label_1cc6ec:
    // 0x1cc6ec: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1cc6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc6f0:
    // 0x1cc6f0: 0x90a609e7  lbu         $a2, 0x9E7($a1)
    ctx->pc = 0x1cc6f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
label_1cc6f4:
    // 0x1cc6f4: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1cc6f8:
    if (ctx->pc == 0x1CC6F8u) {
        ctx->pc = 0x1CC6FCu;
        goto label_1cc6fc;
    }
    ctx->pc = 0x1CC6F4u;
    {
        const bool branch_taken_0x1cc6f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc6f4) {
            ctx->pc = 0x1CC714u;
            goto label_1cc714;
        }
    }
    ctx->pc = 0x1CC6FCu;
label_1cc6fc:
    // 0x1cc6fc: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1cc6fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc700:
    // 0x1cc700: 0xace01b60  sw          $zero, 0x1B60($a3)
    ctx->pc = 0x1cc700u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7008), GPR_U32(ctx, 0));
label_1cc704:
    // 0x1cc704: 0x10000003  b           . + 4 + (0x3 << 2)
label_1cc708:
    if (ctx->pc == 0x1CC708u) {
        ctx->pc = 0x1CC70Cu;
        goto label_1cc70c;
    }
    ctx->pc = 0x1CC704u;
    {
        const bool branch_taken_0x1cc704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc704) {
            ctx->pc = 0x1CC714u;
            goto label_1cc714;
        }
    }
    ctx->pc = 0x1CC70Cu;
label_1cc70c:
    // 0x1cc70c: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1cc70cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc710:
    // 0x1cc710: 0xad001b60  sw          $zero, 0x1B60($t0)
    ctx->pc = 0x1cc710u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7008), GPR_U32(ctx, 0));
label_1cc714:
    // 0x1cc714: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1cc714u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc718:
    // 0x1cc718: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cc718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cc71c:
    // 0x1cc71c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cc71cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc720:
    // 0x1cc720: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1cc720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1cc724:
    // 0x1cc724: 0x3e00008  jr          $ra
label_1cc728:
    if (ctx->pc == 0x1CC728u) {
        ctx->pc = 0x1CC72Cu;
        goto label_fallthrough_0x1cc724;
    }
    ctx->pc = 0x1CC724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cc724:
    ctx->pc = 0x1CC72Cu;
}
