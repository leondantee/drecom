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

// Function: Em05_R1_atk_tenchu
// Address: 0x20ba30 - 0x20c210
void Em05_R1_atk_tenchu_0x20ba30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_R1_atk_tenchu_0x20ba30");
#endif

    switch (ctx->pc) {
        case 0x20ba30u: goto label_20ba30;
        case 0x20ba34u: goto label_20ba34;
        case 0x20ba38u: goto label_20ba38;
        case 0x20ba3cu: goto label_20ba3c;
        case 0x20ba40u: goto label_20ba40;
        case 0x20ba44u: goto label_20ba44;
        case 0x20ba48u: goto label_20ba48;
        case 0x20ba4cu: goto label_20ba4c;
        case 0x20ba50u: goto label_20ba50;
        case 0x20ba54u: goto label_20ba54;
        case 0x20ba58u: goto label_20ba58;
        case 0x20ba5cu: goto label_20ba5c;
        case 0x20ba60u: goto label_20ba60;
        case 0x20ba64u: goto label_20ba64;
        case 0x20ba68u: goto label_20ba68;
        case 0x20ba6cu: goto label_20ba6c;
        case 0x20ba70u: goto label_20ba70;
        case 0x20ba74u: goto label_20ba74;
        case 0x20ba78u: goto label_20ba78;
        case 0x20ba7cu: goto label_20ba7c;
        case 0x20ba80u: goto label_20ba80;
        case 0x20ba84u: goto label_20ba84;
        case 0x20ba88u: goto label_20ba88;
        case 0x20ba8cu: goto label_20ba8c;
        case 0x20ba90u: goto label_20ba90;
        case 0x20ba94u: goto label_20ba94;
        case 0x20ba98u: goto label_20ba98;
        case 0x20ba9cu: goto label_20ba9c;
        case 0x20baa0u: goto label_20baa0;
        case 0x20baa4u: goto label_20baa4;
        case 0x20baa8u: goto label_20baa8;
        case 0x20baacu: goto label_20baac;
        case 0x20bab0u: goto label_20bab0;
        case 0x20bab4u: goto label_20bab4;
        case 0x20bab8u: goto label_20bab8;
        case 0x20babcu: goto label_20babc;
        case 0x20bac0u: goto label_20bac0;
        case 0x20bac4u: goto label_20bac4;
        case 0x20bac8u: goto label_20bac8;
        case 0x20baccu: goto label_20bacc;
        case 0x20bad0u: goto label_20bad0;
        case 0x20bad4u: goto label_20bad4;
        case 0x20bad8u: goto label_20bad8;
        case 0x20badcu: goto label_20badc;
        case 0x20bae0u: goto label_20bae0;
        case 0x20bae4u: goto label_20bae4;
        case 0x20bae8u: goto label_20bae8;
        case 0x20baecu: goto label_20baec;
        case 0x20baf0u: goto label_20baf0;
        case 0x20baf4u: goto label_20baf4;
        case 0x20baf8u: goto label_20baf8;
        case 0x20bafcu: goto label_20bafc;
        case 0x20bb00u: goto label_20bb00;
        case 0x20bb04u: goto label_20bb04;
        case 0x20bb08u: goto label_20bb08;
        case 0x20bb0cu: goto label_20bb0c;
        case 0x20bb10u: goto label_20bb10;
        case 0x20bb14u: goto label_20bb14;
        case 0x20bb18u: goto label_20bb18;
        case 0x20bb1cu: goto label_20bb1c;
        case 0x20bb20u: goto label_20bb20;
        case 0x20bb24u: goto label_20bb24;
        case 0x20bb28u: goto label_20bb28;
        case 0x20bb2cu: goto label_20bb2c;
        case 0x20bb30u: goto label_20bb30;
        case 0x20bb34u: goto label_20bb34;
        case 0x20bb38u: goto label_20bb38;
        case 0x20bb3cu: goto label_20bb3c;
        case 0x20bb40u: goto label_20bb40;
        case 0x20bb44u: goto label_20bb44;
        case 0x20bb48u: goto label_20bb48;
        case 0x20bb4cu: goto label_20bb4c;
        case 0x20bb50u: goto label_20bb50;
        case 0x20bb54u: goto label_20bb54;
        case 0x20bb58u: goto label_20bb58;
        case 0x20bb5cu: goto label_20bb5c;
        case 0x20bb60u: goto label_20bb60;
        case 0x20bb64u: goto label_20bb64;
        case 0x20bb68u: goto label_20bb68;
        case 0x20bb6cu: goto label_20bb6c;
        case 0x20bb70u: goto label_20bb70;
        case 0x20bb74u: goto label_20bb74;
        case 0x20bb78u: goto label_20bb78;
        case 0x20bb7cu: goto label_20bb7c;
        case 0x20bb80u: goto label_20bb80;
        case 0x20bb84u: goto label_20bb84;
        case 0x20bb88u: goto label_20bb88;
        case 0x20bb8cu: goto label_20bb8c;
        case 0x20bb90u: goto label_20bb90;
        case 0x20bb94u: goto label_20bb94;
        case 0x20bb98u: goto label_20bb98;
        case 0x20bb9cu: goto label_20bb9c;
        case 0x20bba0u: goto label_20bba0;
        case 0x20bba4u: goto label_20bba4;
        case 0x20bba8u: goto label_20bba8;
        case 0x20bbacu: goto label_20bbac;
        case 0x20bbb0u: goto label_20bbb0;
        case 0x20bbb4u: goto label_20bbb4;
        case 0x20bbb8u: goto label_20bbb8;
        case 0x20bbbcu: goto label_20bbbc;
        case 0x20bbc0u: goto label_20bbc0;
        case 0x20bbc4u: goto label_20bbc4;
        case 0x20bbc8u: goto label_20bbc8;
        case 0x20bbccu: goto label_20bbcc;
        case 0x20bbd0u: goto label_20bbd0;
        case 0x20bbd4u: goto label_20bbd4;
        case 0x20bbd8u: goto label_20bbd8;
        case 0x20bbdcu: goto label_20bbdc;
        case 0x20bbe0u: goto label_20bbe0;
        case 0x20bbe4u: goto label_20bbe4;
        case 0x20bbe8u: goto label_20bbe8;
        case 0x20bbecu: goto label_20bbec;
        case 0x20bbf0u: goto label_20bbf0;
        case 0x20bbf4u: goto label_20bbf4;
        case 0x20bbf8u: goto label_20bbf8;
        case 0x20bbfcu: goto label_20bbfc;
        case 0x20bc00u: goto label_20bc00;
        case 0x20bc04u: goto label_20bc04;
        case 0x20bc08u: goto label_20bc08;
        case 0x20bc0cu: goto label_20bc0c;
        case 0x20bc10u: goto label_20bc10;
        case 0x20bc14u: goto label_20bc14;
        case 0x20bc18u: goto label_20bc18;
        case 0x20bc1cu: goto label_20bc1c;
        case 0x20bc20u: goto label_20bc20;
        case 0x20bc24u: goto label_20bc24;
        case 0x20bc28u: goto label_20bc28;
        case 0x20bc2cu: goto label_20bc2c;
        case 0x20bc30u: goto label_20bc30;
        case 0x20bc34u: goto label_20bc34;
        case 0x20bc38u: goto label_20bc38;
        case 0x20bc3cu: goto label_20bc3c;
        case 0x20bc40u: goto label_20bc40;
        case 0x20bc44u: goto label_20bc44;
        case 0x20bc48u: goto label_20bc48;
        case 0x20bc4cu: goto label_20bc4c;
        case 0x20bc50u: goto label_20bc50;
        case 0x20bc54u: goto label_20bc54;
        case 0x20bc58u: goto label_20bc58;
        case 0x20bc5cu: goto label_20bc5c;
        case 0x20bc60u: goto label_20bc60;
        case 0x20bc64u: goto label_20bc64;
        case 0x20bc68u: goto label_20bc68;
        case 0x20bc6cu: goto label_20bc6c;
        case 0x20bc70u: goto label_20bc70;
        case 0x20bc74u: goto label_20bc74;
        case 0x20bc78u: goto label_20bc78;
        case 0x20bc7cu: goto label_20bc7c;
        case 0x20bc80u: goto label_20bc80;
        case 0x20bc84u: goto label_20bc84;
        case 0x20bc88u: goto label_20bc88;
        case 0x20bc8cu: goto label_20bc8c;
        case 0x20bc90u: goto label_20bc90;
        case 0x20bc94u: goto label_20bc94;
        case 0x20bc98u: goto label_20bc98;
        case 0x20bc9cu: goto label_20bc9c;
        case 0x20bca0u: goto label_20bca0;
        case 0x20bca4u: goto label_20bca4;
        case 0x20bca8u: goto label_20bca8;
        case 0x20bcacu: goto label_20bcac;
        case 0x20bcb0u: goto label_20bcb0;
        case 0x20bcb4u: goto label_20bcb4;
        case 0x20bcb8u: goto label_20bcb8;
        case 0x20bcbcu: goto label_20bcbc;
        case 0x20bcc0u: goto label_20bcc0;
        case 0x20bcc4u: goto label_20bcc4;
        case 0x20bcc8u: goto label_20bcc8;
        case 0x20bcccu: goto label_20bccc;
        case 0x20bcd0u: goto label_20bcd0;
        case 0x20bcd4u: goto label_20bcd4;
        case 0x20bcd8u: goto label_20bcd8;
        case 0x20bcdcu: goto label_20bcdc;
        case 0x20bce0u: goto label_20bce0;
        case 0x20bce4u: goto label_20bce4;
        case 0x20bce8u: goto label_20bce8;
        case 0x20bcecu: goto label_20bcec;
        case 0x20bcf0u: goto label_20bcf0;
        case 0x20bcf4u: goto label_20bcf4;
        case 0x20bcf8u: goto label_20bcf8;
        case 0x20bcfcu: goto label_20bcfc;
        case 0x20bd00u: goto label_20bd00;
        case 0x20bd04u: goto label_20bd04;
        case 0x20bd08u: goto label_20bd08;
        case 0x20bd0cu: goto label_20bd0c;
        case 0x20bd10u: goto label_20bd10;
        case 0x20bd14u: goto label_20bd14;
        case 0x20bd18u: goto label_20bd18;
        case 0x20bd1cu: goto label_20bd1c;
        case 0x20bd20u: goto label_20bd20;
        case 0x20bd24u: goto label_20bd24;
        case 0x20bd28u: goto label_20bd28;
        case 0x20bd2cu: goto label_20bd2c;
        case 0x20bd30u: goto label_20bd30;
        case 0x20bd34u: goto label_20bd34;
        case 0x20bd38u: goto label_20bd38;
        case 0x20bd3cu: goto label_20bd3c;
        case 0x20bd40u: goto label_20bd40;
        case 0x20bd44u: goto label_20bd44;
        case 0x20bd48u: goto label_20bd48;
        case 0x20bd4cu: goto label_20bd4c;
        case 0x20bd50u: goto label_20bd50;
        case 0x20bd54u: goto label_20bd54;
        case 0x20bd58u: goto label_20bd58;
        case 0x20bd5cu: goto label_20bd5c;
        case 0x20bd60u: goto label_20bd60;
        case 0x20bd64u: goto label_20bd64;
        case 0x20bd68u: goto label_20bd68;
        case 0x20bd6cu: goto label_20bd6c;
        case 0x20bd70u: goto label_20bd70;
        case 0x20bd74u: goto label_20bd74;
        case 0x20bd78u: goto label_20bd78;
        case 0x20bd7cu: goto label_20bd7c;
        case 0x20bd80u: goto label_20bd80;
        case 0x20bd84u: goto label_20bd84;
        case 0x20bd88u: goto label_20bd88;
        case 0x20bd8cu: goto label_20bd8c;
        case 0x20bd90u: goto label_20bd90;
        case 0x20bd94u: goto label_20bd94;
        case 0x20bd98u: goto label_20bd98;
        case 0x20bd9cu: goto label_20bd9c;
        case 0x20bda0u: goto label_20bda0;
        case 0x20bda4u: goto label_20bda4;
        case 0x20bda8u: goto label_20bda8;
        case 0x20bdacu: goto label_20bdac;
        case 0x20bdb0u: goto label_20bdb0;
        case 0x20bdb4u: goto label_20bdb4;
        case 0x20bdb8u: goto label_20bdb8;
        case 0x20bdbcu: goto label_20bdbc;
        case 0x20bdc0u: goto label_20bdc0;
        case 0x20bdc4u: goto label_20bdc4;
        case 0x20bdc8u: goto label_20bdc8;
        case 0x20bdccu: goto label_20bdcc;
        case 0x20bdd0u: goto label_20bdd0;
        case 0x20bdd4u: goto label_20bdd4;
        case 0x20bdd8u: goto label_20bdd8;
        case 0x20bddcu: goto label_20bddc;
        case 0x20bde0u: goto label_20bde0;
        case 0x20bde4u: goto label_20bde4;
        case 0x20bde8u: goto label_20bde8;
        case 0x20bdecu: goto label_20bdec;
        case 0x20bdf0u: goto label_20bdf0;
        case 0x20bdf4u: goto label_20bdf4;
        case 0x20bdf8u: goto label_20bdf8;
        case 0x20bdfcu: goto label_20bdfc;
        case 0x20be00u: goto label_20be00;
        case 0x20be04u: goto label_20be04;
        case 0x20be08u: goto label_20be08;
        case 0x20be0cu: goto label_20be0c;
        case 0x20be10u: goto label_20be10;
        case 0x20be14u: goto label_20be14;
        case 0x20be18u: goto label_20be18;
        case 0x20be1cu: goto label_20be1c;
        case 0x20be20u: goto label_20be20;
        case 0x20be24u: goto label_20be24;
        case 0x20be28u: goto label_20be28;
        case 0x20be2cu: goto label_20be2c;
        case 0x20be30u: goto label_20be30;
        case 0x20be34u: goto label_20be34;
        case 0x20be38u: goto label_20be38;
        case 0x20be3cu: goto label_20be3c;
        case 0x20be40u: goto label_20be40;
        case 0x20be44u: goto label_20be44;
        case 0x20be48u: goto label_20be48;
        case 0x20be4cu: goto label_20be4c;
        case 0x20be50u: goto label_20be50;
        case 0x20be54u: goto label_20be54;
        case 0x20be58u: goto label_20be58;
        case 0x20be5cu: goto label_20be5c;
        case 0x20be60u: goto label_20be60;
        case 0x20be64u: goto label_20be64;
        case 0x20be68u: goto label_20be68;
        case 0x20be6cu: goto label_20be6c;
        case 0x20be70u: goto label_20be70;
        case 0x20be74u: goto label_20be74;
        case 0x20be78u: goto label_20be78;
        case 0x20be7cu: goto label_20be7c;
        case 0x20be80u: goto label_20be80;
        case 0x20be84u: goto label_20be84;
        case 0x20be88u: goto label_20be88;
        case 0x20be8cu: goto label_20be8c;
        case 0x20be90u: goto label_20be90;
        case 0x20be94u: goto label_20be94;
        case 0x20be98u: goto label_20be98;
        case 0x20be9cu: goto label_20be9c;
        case 0x20bea0u: goto label_20bea0;
        case 0x20bea4u: goto label_20bea4;
        case 0x20bea8u: goto label_20bea8;
        case 0x20beacu: goto label_20beac;
        case 0x20beb0u: goto label_20beb0;
        case 0x20beb4u: goto label_20beb4;
        case 0x20beb8u: goto label_20beb8;
        case 0x20bebcu: goto label_20bebc;
        case 0x20bec0u: goto label_20bec0;
        case 0x20bec4u: goto label_20bec4;
        case 0x20bec8u: goto label_20bec8;
        case 0x20beccu: goto label_20becc;
        case 0x20bed0u: goto label_20bed0;
        case 0x20bed4u: goto label_20bed4;
        case 0x20bed8u: goto label_20bed8;
        case 0x20bedcu: goto label_20bedc;
        case 0x20bee0u: goto label_20bee0;
        case 0x20bee4u: goto label_20bee4;
        case 0x20bee8u: goto label_20bee8;
        case 0x20beecu: goto label_20beec;
        case 0x20bef0u: goto label_20bef0;
        case 0x20bef4u: goto label_20bef4;
        case 0x20bef8u: goto label_20bef8;
        case 0x20befcu: goto label_20befc;
        case 0x20bf00u: goto label_20bf00;
        case 0x20bf04u: goto label_20bf04;
        case 0x20bf08u: goto label_20bf08;
        case 0x20bf0cu: goto label_20bf0c;
        case 0x20bf10u: goto label_20bf10;
        case 0x20bf14u: goto label_20bf14;
        case 0x20bf18u: goto label_20bf18;
        case 0x20bf1cu: goto label_20bf1c;
        case 0x20bf20u: goto label_20bf20;
        case 0x20bf24u: goto label_20bf24;
        case 0x20bf28u: goto label_20bf28;
        case 0x20bf2cu: goto label_20bf2c;
        case 0x20bf30u: goto label_20bf30;
        case 0x20bf34u: goto label_20bf34;
        case 0x20bf38u: goto label_20bf38;
        case 0x20bf3cu: goto label_20bf3c;
        case 0x20bf40u: goto label_20bf40;
        case 0x20bf44u: goto label_20bf44;
        case 0x20bf48u: goto label_20bf48;
        case 0x20bf4cu: goto label_20bf4c;
        case 0x20bf50u: goto label_20bf50;
        case 0x20bf54u: goto label_20bf54;
        case 0x20bf58u: goto label_20bf58;
        case 0x20bf5cu: goto label_20bf5c;
        case 0x20bf60u: goto label_20bf60;
        case 0x20bf64u: goto label_20bf64;
        case 0x20bf68u: goto label_20bf68;
        case 0x20bf6cu: goto label_20bf6c;
        case 0x20bf70u: goto label_20bf70;
        case 0x20bf74u: goto label_20bf74;
        case 0x20bf78u: goto label_20bf78;
        case 0x20bf7cu: goto label_20bf7c;
        case 0x20bf80u: goto label_20bf80;
        case 0x20bf84u: goto label_20bf84;
        case 0x20bf88u: goto label_20bf88;
        case 0x20bf8cu: goto label_20bf8c;
        case 0x20bf90u: goto label_20bf90;
        case 0x20bf94u: goto label_20bf94;
        case 0x20bf98u: goto label_20bf98;
        case 0x20bf9cu: goto label_20bf9c;
        case 0x20bfa0u: goto label_20bfa0;
        case 0x20bfa4u: goto label_20bfa4;
        case 0x20bfa8u: goto label_20bfa8;
        case 0x20bfacu: goto label_20bfac;
        case 0x20bfb0u: goto label_20bfb0;
        case 0x20bfb4u: goto label_20bfb4;
        case 0x20bfb8u: goto label_20bfb8;
        case 0x20bfbcu: goto label_20bfbc;
        case 0x20bfc0u: goto label_20bfc0;
        case 0x20bfc4u: goto label_20bfc4;
        case 0x20bfc8u: goto label_20bfc8;
        case 0x20bfccu: goto label_20bfcc;
        case 0x20bfd0u: goto label_20bfd0;
        case 0x20bfd4u: goto label_20bfd4;
        case 0x20bfd8u: goto label_20bfd8;
        case 0x20bfdcu: goto label_20bfdc;
        case 0x20bfe0u: goto label_20bfe0;
        case 0x20bfe4u: goto label_20bfe4;
        case 0x20bfe8u: goto label_20bfe8;
        case 0x20bfecu: goto label_20bfec;
        case 0x20bff0u: goto label_20bff0;
        case 0x20bff4u: goto label_20bff4;
        case 0x20bff8u: goto label_20bff8;
        case 0x20bffcu: goto label_20bffc;
        case 0x20c000u: goto label_20c000;
        case 0x20c004u: goto label_20c004;
        case 0x20c008u: goto label_20c008;
        case 0x20c00cu: goto label_20c00c;
        case 0x20c010u: goto label_20c010;
        case 0x20c014u: goto label_20c014;
        case 0x20c018u: goto label_20c018;
        case 0x20c01cu: goto label_20c01c;
        case 0x20c020u: goto label_20c020;
        case 0x20c024u: goto label_20c024;
        case 0x20c028u: goto label_20c028;
        case 0x20c02cu: goto label_20c02c;
        case 0x20c030u: goto label_20c030;
        case 0x20c034u: goto label_20c034;
        case 0x20c038u: goto label_20c038;
        case 0x20c03cu: goto label_20c03c;
        case 0x20c040u: goto label_20c040;
        case 0x20c044u: goto label_20c044;
        case 0x20c048u: goto label_20c048;
        case 0x20c04cu: goto label_20c04c;
        case 0x20c050u: goto label_20c050;
        case 0x20c054u: goto label_20c054;
        case 0x20c058u: goto label_20c058;
        case 0x20c05cu: goto label_20c05c;
        case 0x20c060u: goto label_20c060;
        case 0x20c064u: goto label_20c064;
        case 0x20c068u: goto label_20c068;
        case 0x20c06cu: goto label_20c06c;
        case 0x20c070u: goto label_20c070;
        case 0x20c074u: goto label_20c074;
        case 0x20c078u: goto label_20c078;
        case 0x20c07cu: goto label_20c07c;
        case 0x20c080u: goto label_20c080;
        case 0x20c084u: goto label_20c084;
        case 0x20c088u: goto label_20c088;
        case 0x20c08cu: goto label_20c08c;
        case 0x20c090u: goto label_20c090;
        case 0x20c094u: goto label_20c094;
        case 0x20c098u: goto label_20c098;
        case 0x20c09cu: goto label_20c09c;
        case 0x20c0a0u: goto label_20c0a0;
        case 0x20c0a4u: goto label_20c0a4;
        case 0x20c0a8u: goto label_20c0a8;
        case 0x20c0acu: goto label_20c0ac;
        case 0x20c0b0u: goto label_20c0b0;
        case 0x20c0b4u: goto label_20c0b4;
        case 0x20c0b8u: goto label_20c0b8;
        case 0x20c0bcu: goto label_20c0bc;
        case 0x20c0c0u: goto label_20c0c0;
        case 0x20c0c4u: goto label_20c0c4;
        case 0x20c0c8u: goto label_20c0c8;
        case 0x20c0ccu: goto label_20c0cc;
        case 0x20c0d0u: goto label_20c0d0;
        case 0x20c0d4u: goto label_20c0d4;
        case 0x20c0d8u: goto label_20c0d8;
        case 0x20c0dcu: goto label_20c0dc;
        case 0x20c0e0u: goto label_20c0e0;
        case 0x20c0e4u: goto label_20c0e4;
        case 0x20c0e8u: goto label_20c0e8;
        case 0x20c0ecu: goto label_20c0ec;
        case 0x20c0f0u: goto label_20c0f0;
        case 0x20c0f4u: goto label_20c0f4;
        case 0x20c0f8u: goto label_20c0f8;
        case 0x20c0fcu: goto label_20c0fc;
        case 0x20c100u: goto label_20c100;
        case 0x20c104u: goto label_20c104;
        case 0x20c108u: goto label_20c108;
        case 0x20c10cu: goto label_20c10c;
        case 0x20c110u: goto label_20c110;
        case 0x20c114u: goto label_20c114;
        case 0x20c118u: goto label_20c118;
        case 0x20c11cu: goto label_20c11c;
        case 0x20c120u: goto label_20c120;
        case 0x20c124u: goto label_20c124;
        case 0x20c128u: goto label_20c128;
        case 0x20c12cu: goto label_20c12c;
        case 0x20c130u: goto label_20c130;
        case 0x20c134u: goto label_20c134;
        case 0x20c138u: goto label_20c138;
        case 0x20c13cu: goto label_20c13c;
        case 0x20c140u: goto label_20c140;
        case 0x20c144u: goto label_20c144;
        case 0x20c148u: goto label_20c148;
        case 0x20c14cu: goto label_20c14c;
        case 0x20c150u: goto label_20c150;
        case 0x20c154u: goto label_20c154;
        case 0x20c158u: goto label_20c158;
        case 0x20c15cu: goto label_20c15c;
        case 0x20c160u: goto label_20c160;
        case 0x20c164u: goto label_20c164;
        case 0x20c168u: goto label_20c168;
        case 0x20c16cu: goto label_20c16c;
        case 0x20c170u: goto label_20c170;
        case 0x20c174u: goto label_20c174;
        case 0x20c178u: goto label_20c178;
        case 0x20c17cu: goto label_20c17c;
        case 0x20c180u: goto label_20c180;
        case 0x20c184u: goto label_20c184;
        case 0x20c188u: goto label_20c188;
        case 0x20c18cu: goto label_20c18c;
        case 0x20c190u: goto label_20c190;
        case 0x20c194u: goto label_20c194;
        case 0x20c198u: goto label_20c198;
        case 0x20c19cu: goto label_20c19c;
        case 0x20c1a0u: goto label_20c1a0;
        case 0x20c1a4u: goto label_20c1a4;
        case 0x20c1a8u: goto label_20c1a8;
        case 0x20c1acu: goto label_20c1ac;
        case 0x20c1b0u: goto label_20c1b0;
        case 0x20c1b4u: goto label_20c1b4;
        case 0x20c1b8u: goto label_20c1b8;
        case 0x20c1bcu: goto label_20c1bc;
        case 0x20c1c0u: goto label_20c1c0;
        case 0x20c1c4u: goto label_20c1c4;
        case 0x20c1c8u: goto label_20c1c8;
        case 0x20c1ccu: goto label_20c1cc;
        case 0x20c1d0u: goto label_20c1d0;
        case 0x20c1d4u: goto label_20c1d4;
        case 0x20c1d8u: goto label_20c1d8;
        case 0x20c1dcu: goto label_20c1dc;
        case 0x20c1e0u: goto label_20c1e0;
        case 0x20c1e4u: goto label_20c1e4;
        case 0x20c1e8u: goto label_20c1e8;
        case 0x20c1ecu: goto label_20c1ec;
        case 0x20c1f0u: goto label_20c1f0;
        case 0x20c1f4u: goto label_20c1f4;
        case 0x20c1f8u: goto label_20c1f8;
        case 0x20c1fcu: goto label_20c1fc;
        case 0x20c200u: goto label_20c200;
        case 0x20c204u: goto label_20c204;
        case 0x20c208u: goto label_20c208;
        case 0x20c20cu: goto label_20c20c;
        default: break;
    }

    ctx->pc = 0x20ba30u;

label_20ba30:
    // 0x20ba30: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x20ba30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_20ba34:
    // 0x20ba34: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x20ba34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_20ba38:
    // 0x20ba38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20ba38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20ba3c:
    // 0x20ba3c: 0xafa40108  sw          $a0, 0x108($sp)
    ctx->pc = 0x20ba3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 4));
label_20ba40:
    // 0x20ba40: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20ba40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20ba44:
    // 0x20ba44: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x20ba44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_20ba48:
    // 0x20ba48: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x20ba48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_20ba4c:
    // 0x20ba4c: 0x2ca10007  sltiu       $at, $a1, 0x7
    ctx->pc = 0x20ba4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_20ba50:
    // 0x20ba50: 0x102001ea  beqz        $at, . + 4 + (0x1EA << 2)
label_20ba54:
    if (ctx->pc == 0x20BA54u) {
        ctx->pc = 0x20BA58u;
        goto label_20ba58;
    }
    ctx->pc = 0x20BA50u;
    {
        const bool branch_taken_0x20ba50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ba50) {
            ctx->pc = 0x20C1FCu;
            goto label_20c1fc;
        }
    }
    ctx->pc = 0x20BA58u;
label_20ba58:
    // 0x20ba58: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x20ba58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_20ba5c:
    // 0x20ba5c: 0x24640e60  addiu       $a0, $v1, 0xE60
    ctx->pc = 0x20ba5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3680));
label_20ba60:
    // 0x20ba60: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x20ba60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_20ba64:
    // 0x20ba64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20ba64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20ba68:
    // 0x20ba68: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20ba68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20ba6c:
    // 0x20ba6c: 0x600008  jr          $v1
label_20ba70:
    if (ctx->pc == 0x20BA70u) {
        ctx->pc = 0x20BA74u;
        goto label_20ba74;
    }
    ctx->pc = 0x20BA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BA6Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20BA74u;
label_20ba74:
    // 0x20ba74: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x20ba74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20ba78:
    // 0x20ba78: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20ba78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20ba7c:
    // 0x20ba7c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x20ba7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_20ba80:
    // 0x20ba80: 0x3406c808  ori         $a2, $zero, 0xC808
    ctx->pc = 0x20ba80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)51208);
label_20ba84:
    // 0x20ba84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20ba84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ba88:
    // 0x20ba88: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20ba88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_20ba8c:
    // 0x20ba8c: 0xc0965d0  jal         func_259740
label_20ba90:
    if (ctx->pc == 0x20BA90u) {
        ctx->pc = 0x20BA94u;
        goto label_20ba94;
    }
    ctx->pc = 0x20BA8Cu;
    SET_GPR_U32(ctx, 31, 0x20BA94u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20BA8Cu, 0x20BA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BA94u;
label_20ba94:
    // 0x20ba94: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x20ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20ba98:
    // 0x20ba98: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20ba98u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_20ba9c:
    // 0x20ba9c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x20ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20baa0:
    // 0x20baa0: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x20baa0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_20baa4:
    // 0x20baa4: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x20baa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20baa8:
    // 0x20baa8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x20baa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_20baac:
    // 0x20baac: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x20baacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_20bab0:
    // 0x20bab0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20bab0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_20bab4:
    // 0x20bab4: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x20bab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20bab8:
    // 0x20bab8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x20bab8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_20babc:
    // 0x20babc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20babcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20bac0:
    // 0x20bac0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20bac0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_20bac4:
    // 0x20bac4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20bac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20bac8:
    // 0x20bac8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20bac8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20bacc:
    // 0x20bacc: 0xc096b40  jal         func_25AD00
label_20bad0:
    if (ctx->pc == 0x20BAD0u) {
        ctx->pc = 0x20BAD4u;
        goto label_20bad4;
    }
    ctx->pc = 0x20BACCu;
    SET_GPR_U32(ctx, 31, 0x20BAD4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x20BACCu, 0x20BAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BAD4u;
label_20bad4:
    // 0x20bad4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x20bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_20bad8:
    // 0x20bad8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20bad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20badc:
    // 0x20badc: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x20badcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20bae0:
    // 0x20bae0: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x20bae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_20bae4:
    // 0x20bae4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20bae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20bae8:
    // 0x20bae8: 0xc05cd34  jal         func_1734D0
label_20baec:
    if (ctx->pc == 0x20BAECu) {
        ctx->pc = 0x20BAF0u;
        goto label_20baf0;
    }
    ctx->pc = 0x20BAE8u;
    SET_GPR_U32(ctx, 31, 0x20BAF0u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x20BAE8u, 0x20BAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BAF0u;
label_20baf0:
    // 0x20baf0: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20baf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20baf4:
    // 0x20baf4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20baf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20baf8:
    // 0x20baf8: 0xc080f60  jal         func_203D80
label_20bafc:
    if (ctx->pc == 0x20BAFCu) {
        ctx->pc = 0x20BB00u;
        goto label_20bb00;
    }
    ctx->pc = 0x20BAF8u;
    SET_GPR_U32(ctx, 31, 0x20BB00u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x20BAF8u, 0x20BB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BB00u;
label_20bb00:
    // 0x20bb00: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20bb00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20bb04:
    // 0x20bb04: 0xc0974c8  jal         func_25D320
label_20bb08:
    if (ctx->pc == 0x20BB08u) {
        ctx->pc = 0x20BB0Cu;
        goto label_20bb0c;
    }
    ctx->pc = 0x20BB04u;
    SET_GPR_U32(ctx, 31, 0x20BB0Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20BB04u, 0x20BB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BB0Cu;
label_20bb0c:
    // 0x20bb0c: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x20bb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20bb10:
    // 0x20bb10: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x20bb10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_20bb14:
    // 0x20bb14: 0x106001b9  beqz        $v1, . + 4 + (0x1B9 << 2)
label_20bb18:
    if (ctx->pc == 0x20BB18u) {
        ctx->pc = 0x20BB1Cu;
        goto label_20bb1c;
    }
    ctx->pc = 0x20BB14u;
    {
        const bool branch_taken_0x20bb14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bb14) {
            ctx->pc = 0x20C1FCu;
            goto label_20c1fc;
        }
    }
    ctx->pc = 0x20BB1Cu;
label_20bb1c:
    // 0x20bb1c: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x20bb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20bb20:
    // 0x20bb20: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x20bb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20bb24:
    // 0x20bb24: 0x3c0346ea  lui         $v1, 0x46EA
    ctx->pc = 0x20bb24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18154 << 16));
label_20bb28:
    // 0x20bb28: 0x34636000  ori         $v1, $v1, 0x6000
    ctx->pc = 0x20bb28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
label_20bb2c:
    // 0x20bb2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20bb2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20bb30:
    // 0x20bb30: 0x0  nop
    ctx->pc = 0x20bb30u;
    // NOP
label_20bb34:
    // 0x20bb34: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20bb34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20bb38:
    // 0x20bb38: 0x0  nop
    ctx->pc = 0x20bb38u;
    // NOP
label_20bb3c:
    // 0x20bb3c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_20bb40:
    if (ctx->pc == 0x20BB40u) {
        ctx->pc = 0x20BB44u;
        goto label_20bb44;
    }
    ctx->pc = 0x20BB3Cu;
    {
        const bool branch_taken_0x20bb3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bb3c) {
            ctx->pc = 0x20BB5Cu;
            goto label_20bb5c;
        }
    }
    ctx->pc = 0x20BB44u;
label_20bb44:
    // 0x20bb44: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20bb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20bb48:
    // 0x20bb48: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x20bb48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_20bb4c:
    // 0x20bb4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20bb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_20bb50:
    // 0x20bb50: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x20bb50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_20bb54:
    // 0x20bb54: 0x100001a9  b           . + 4 + (0x1A9 << 2)
label_20bb58:
    if (ctx->pc == 0x20BB58u) {
        ctx->pc = 0x20BB5Cu;
        goto label_20bb5c;
    }
    ctx->pc = 0x20BB54u;
    {
        const bool branch_taken_0x20bb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bb54) {
            ctx->pc = 0x20C1FCu;
            goto label_20c1fc;
        }
    }
    ctx->pc = 0x20BB5Cu;
label_20bb5c:
    // 0x20bb5c: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20bb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20bb60:
    // 0x20bb60: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x20bb60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_20bb64:
    // 0x20bb64: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20bb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_20bb68:
    // 0x20bb68: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x20bb68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_20bb6c:
    // 0x20bb6c: 0x100001a3  b           . + 4 + (0x1A3 << 2)
label_20bb70:
    if (ctx->pc == 0x20BB70u) {
        ctx->pc = 0x20BB74u;
        goto label_20bb74;
    }
    ctx->pc = 0x20BB6Cu;
    {
        const bool branch_taken_0x20bb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bb6c) {
            ctx->pc = 0x20C1FCu;
            goto label_20c1fc;
        }
    }
    ctx->pc = 0x20BB74u;
label_20bb74:
    // 0x20bb74: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x20bb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20bb78:
    // 0x20bb78: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20bb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20bb7c:
    // 0x20bb7c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x20bb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_20bb80:
    // 0x20bb80: 0x2406780f  addiu       $a2, $zero, 0x780F
    ctx->pc = 0x20bb80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30735));
label_20bb84:
    // 0x20bb84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20bb84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20bb88:
    // 0x20bb88: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20bb88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_20bb8c:
    // 0x20bb8c: 0xc0965d0  jal         func_259740
label_20bb90:
    if (ctx->pc == 0x20BB90u) {
        ctx->pc = 0x20BB94u;
        goto label_20bb94;
    }
    ctx->pc = 0x20BB8Cu;
    SET_GPR_U32(ctx, 31, 0x20BB94u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20BB8Cu, 0x20BB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BB94u;
label_20bb94:
    // 0x20bb94: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20bb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20bb98:
    // 0x20bb98: 0xc0974c8  jal         func_25D320
label_20bb9c:
    if (ctx->pc == 0x20BB9Cu) {
        ctx->pc = 0x20BBA0u;
        goto label_20bba0;
    }
    ctx->pc = 0x20BB98u;
    SET_GPR_U32(ctx, 31, 0x20BBA0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20BB98u, 0x20BBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BBA0u;
label_20bba0:
    // 0x20bba0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x20bba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20bba4:
    // 0x20bba4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x20bba4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_20bba8:
    // 0x20bba8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20bbac:
    // 0x20bbac: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20bbacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_20bbb0:
    // 0x20bbb0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x20bbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20bbb4:
    // 0x20bbb4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20bbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20bbb8:
    // 0x20bbb8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x20bbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_20bbbc:
    // 0x20bbbc: 0x24067807  addiu       $a2, $zero, 0x7807
    ctx->pc = 0x20bbbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30727));
label_20bbc0:
    // 0x20bbc0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20bbc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20bbc4:
    // 0x20bbc4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20bbc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_20bbc8:
    // 0x20bbc8: 0xc0965d0  jal         func_259740
label_20bbcc:
    if (ctx->pc == 0x20BBCCu) {
        ctx->pc = 0x20BBD0u;
        goto label_20bbd0;
    }
    ctx->pc = 0x20BBC8u;
    SET_GPR_U32(ctx, 31, 0x20BBD0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20BBC8u, 0x20BBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BBD0u;
label_20bbd0:
    // 0x20bbd0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x20bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20bbd4:
    // 0x20bbd4: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20bbd4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_20bbd8:
    // 0x20bbd8: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x20bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20bbdc:
    // 0x20bbdc: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x20bbdcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_20bbe0:
    // 0x20bbe0: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x20bbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_20bbe4:
    // 0x20bbe4: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x20bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20bbe8:
    // 0x20bbe8: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x20bbe8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
label_20bbec:
    // 0x20bbec: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x20bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20bbf0:
    // 0x20bbf0: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x20bbf0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
label_20bbf4:
    // 0x20bbf4: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x20bbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20bbf8:
    // 0x20bbf8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x20bbf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_20bbfc:
    // 0x20bbfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20bc00:
    // 0x20bc00: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20bc00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_20bc04:
    // 0x20bc04: 0x3c023c83  lui         $v0, 0x3C83
    ctx->pc = 0x20bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15491 << 16));
label_20bc08:
    // 0x20bc08: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x20bc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_20bc0c:
    // 0x20bc0c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x20bc0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_20bc10:
    // 0x20bc10: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x20bc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20bc14:
    // 0x20bc14: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x20bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20bc18:
    // 0x20bc18: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x20bc18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_20bc1c:
    // 0x20bc1c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x20bc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20bc20:
    // 0x20bc20: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x20bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_20bc24:
    // 0x20bc24: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x20bc24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_20bc28:
    // 0x20bc28: 0xc05c848  jal         func_172120
label_20bc2c:
    if (ctx->pc == 0x20BC2Cu) {
        ctx->pc = 0x20BC30u;
        goto label_20bc30;
    }
    ctx->pc = 0x20BC28u;
    SET_GPR_U32(ctx, 31, 0x20BC30u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x20BC28u, 0x20BC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC30u;
label_20bc30:
    // 0x20bc30: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x20bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20bc34:
    // 0x20bc34: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x20bc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20bc38:
    // 0x20bc38: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x20bc38u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20bc3c:
    // 0x20bc3c: 0xc058fec  jal         func_163FB0
label_20bc40:
    if (ctx->pc == 0x20BC40u) {
        ctx->pc = 0x20BC44u;
        goto label_20bc44;
    }
    ctx->pc = 0x20BC3Cu;
    SET_GPR_U32(ctx, 31, 0x20BC44u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x20BC3Cu, 0x20BC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC44u;
label_20bc44:
    // 0x20bc44: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x20bc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20bc48:
    // 0x20bc48: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x20bc48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_20bc4c:
    // 0x20bc4c: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20bc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20bc50:
    // 0x20bc50: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20bc50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20bc54:
    // 0x20bc54: 0xc096b40  jal         func_25AD00
label_20bc58:
    if (ctx->pc == 0x20BC58u) {
        ctx->pc = 0x20BC5Cu;
        goto label_20bc5c;
    }
    ctx->pc = 0x20BC54u;
    SET_GPR_U32(ctx, 31, 0x20BC5Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x20BC54u, 0x20BC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC5Cu;
label_20bc5c:
    // 0x20bc5c: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20bc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20bc60:
    // 0x20bc60: 0xc05cd34  jal         func_1734D0
label_20bc64:
    if (ctx->pc == 0x20BC64u) {
        ctx->pc = 0x20BC68u;
        goto label_20bc68;
    }
    ctx->pc = 0x20BC60u;
    SET_GPR_U32(ctx, 31, 0x20BC68u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x20BC60u, 0x20BC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC68u;
label_20bc68:
    // 0x20bc68: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20bc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20bc6c:
    // 0x20bc6c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20bc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20bc70:
    // 0x20bc70: 0xc080f60  jal         func_203D80
label_20bc74:
    if (ctx->pc == 0x20BC74u) {
        ctx->pc = 0x20BC78u;
        goto label_20bc78;
    }
    ctx->pc = 0x20BC70u;
    SET_GPR_U32(ctx, 31, 0x20BC78u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x20BC70u, 0x20BC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC78u;
label_20bc78:
    // 0x20bc78: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20bc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20bc7c:
    // 0x20bc7c: 0xc0974c8  jal         func_25D320
label_20bc80:
    if (ctx->pc == 0x20BC80u) {
        ctx->pc = 0x20BC84u;
        goto label_20bc84;
    }
    ctx->pc = 0x20BC7Cu;
    SET_GPR_U32(ctx, 31, 0x20BC84u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20BC7Cu, 0x20BC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC84u;
label_20bc84:
    // 0x20bc84: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x20bc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20bc88:
    // 0x20bc88: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x20bc88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
label_20bc8c:
    // 0x20bc8c: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
label_20bc90:
    if (ctx->pc == 0x20BC90u) {
        ctx->pc = 0x20BC94u;
        goto label_20bc94;
    }
    ctx->pc = 0x20BC8Cu;
    {
        const bool branch_taken_0x20bc8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bc8c) {
            ctx->pc = 0x20BD88u;
            goto label_20bd88;
        }
    }
    ctx->pc = 0x20BC94u;
label_20bc94:
    // 0x20bc94: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20bc94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20bc98:
    // 0x20bc98: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x20bc98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
label_20bc9c:
    // 0x20bc9c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20bc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_20bca0:
    // 0x20bca0: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x20bca0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
label_20bca4:
    // 0x20bca4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x20bca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_20bca8:
    // 0x20bca8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20bca8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_20bcac:
    // 0x20bcac: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x20bcacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_20bcb0:
    // 0x20bcb0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20bcb0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_20bcb4:
    // 0x20bcb4: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x20bcb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_20bcb8:
    // 0x20bcb8: 0x14200033  bnez        $at, . + 4 + (0x33 << 2)
label_20bcbc:
    if (ctx->pc == 0x20BCBCu) {
        ctx->pc = 0x20BCC0u;
        goto label_20bcc0;
    }
    ctx->pc = 0x20BCB8u;
    {
        const bool branch_taken_0x20bcb8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20bcb8) {
            ctx->pc = 0x20BD88u;
            goto label_20bd88;
        }
    }
    ctx->pc = 0x20BCC0u;
label_20bcc0:
    // 0x20bcc0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x20bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20bcc4:
    // 0x20bcc4: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x20bcc4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_20bcc8:
    // 0x20bcc8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20bcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_20bccc:
    // 0x20bccc: 0x2444a2c0  addiu       $a0, $v0, -0x5D40
    ctx->pc = 0x20bcccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943424));
label_20bcd0:
    // 0x20bcd0: 0xc0bba18  jal         func_2EE860
label_20bcd4:
    if (ctx->pc == 0x20BCD4u) {
        ctx->pc = 0x20BCD8u;
        goto label_20bcd8;
    }
    ctx->pc = 0x20BCD0u;
    SET_GPR_U32(ctx, 31, 0x20BCD8u);
    ctx->pc = 0x2EE860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE860u, 0x20BCD0u, 0x20BCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BCD8u;
label_20bcd8:
    // 0x20bcd8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x20bcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_20bcdc:
    // 0x20bcdc: 0xc040cbc  jal         func_1032F0
label_20bce0:
    if (ctx->pc == 0x20BCE0u) {
        ctx->pc = 0x20BCE4u;
        goto label_20bce4;
    }
    ctx->pc = 0x20BCDCu;
    SET_GPR_U32(ctx, 31, 0x20BCE4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x20BCE4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20BCE4u) { return; }
    ctx->pc = 0x20BCE4u;
label_20bce4:
    // 0x20bce4: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x20bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_20bce8:
    // 0x20bce8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20bce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_20bcec:
    // 0x20bcec: 0xac2292e0  sw          $v0, -0x6D20($at)
    ctx->pc = 0x20bcecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939360), GPR_U32(ctx, 2));
label_20bcf0:
    // 0x20bcf0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_20bcf4:
    // 0x20bcf4: 0x2442a2c0  addiu       $v0, $v0, -0x5D40
    ctx->pc = 0x20bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943424));
label_20bcf8:
    // 0x20bcf8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x20bcf8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20bcfc:
    // 0x20bcfc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_20bd00:
    // 0x20bd00: 0x244292f0  addiu       $v0, $v0, -0x6D10
    ctx->pc = 0x20bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939376));
label_20bd04:
    // 0x20bd04: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x20bd04u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_20bd08:
    // 0x20bd08: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20bd08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_20bd0c:
    // 0x20bd0c: 0xc42192f4  lwc1        $f1, -0x6D0C($at)
    ctx->pc = 0x20bd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20bd10:
    // 0x20bd10: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x20bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_20bd14:
    // 0x20bd14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20bd14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20bd18:
    // 0x20bd18: 0x0  nop
    ctx->pc = 0x20bd18u;
    // NOP
label_20bd1c:
    // 0x20bd1c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20bd1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20bd20:
    // 0x20bd20: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20bd20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_20bd24:
    // 0x20bd24: 0xe42092f4  swc1        $f0, -0x6D0C($at)
    ctx->pc = 0x20bd24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939380), bits); }
label_20bd28:
    // 0x20bd28: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x20bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
label_20bd2c:
    // 0x20bd2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20bd2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20bd30:
    // 0x20bd30: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20bd30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_20bd34:
    // 0x20bd34: 0xe4209300  swc1        $f0, -0x6D00($at)
    ctx->pc = 0x20bd34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939392), bits); }
label_20bd38:
    // 0x20bd38: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20bd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20bd3c:
    // 0x20bd3c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20bd3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_20bd40:
    // 0x20bd40: 0xa4229304  sh          $v0, -0x6CFC($at)
    ctx->pc = 0x20bd40u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294939396), (uint16_t)GPR_U32(ctx, 2));
label_20bd44:
    // 0x20bd44: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20bd44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_20bd48:
    // 0x20bd48: 0xa0209306  sb          $zero, -0x6CFA($at)
    ctx->pc = 0x20bd48u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294939398), (uint8_t)GPR_U32(ctx, 0));
label_20bd4c:
    // 0x20bd4c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20bd4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_20bd50:
    // 0x20bd50: 0xa0209307  sb          $zero, -0x6CF9($at)
    ctx->pc = 0x20bd50u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294939399), (uint8_t)GPR_U32(ctx, 0));
label_20bd54:
    // 0x20bd54: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20bd54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20bd58:
    // 0x20bd58: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20bd58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_20bd5c:
    // 0x20bd5c: 0x244592e0  addiu       $a1, $v0, -0x6D20
    ctx->pc = 0x20bd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939360));
label_20bd60:
    // 0x20bd60: 0xc06ce90  jal         func_1B3A40
label_20bd64:
    if (ctx->pc == 0x20BD64u) {
        ctx->pc = 0x20BD68u;
        goto label_20bd68;
    }
    ctx->pc = 0x20BD60u;
    SET_GPR_U32(ctx, 31, 0x20BD68u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x20BD60u, 0x20BD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD68u;
label_20bd68:
    // 0x20bd68: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x20bd68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_20bd6c:
    // 0x20bd6c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x20bd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_20bd70:
    // 0x20bd70: 0xc0684d8  jal         func_1A1360
label_20bd74:
    if (ctx->pc == 0x20BD74u) {
        ctx->pc = 0x20BD78u;
        goto label_20bd78;
    }
    ctx->pc = 0x20BD70u;
    SET_GPR_U32(ctx, 31, 0x20BD78u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x20BD70u, 0x20BD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD78u;
label_20bd78:
    // 0x20bd78: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x20bd78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
label_20bd7c:
    // 0x20bd7c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x20bd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_20bd80:
    // 0x20bd80: 0xc0684d8  jal         func_1A1360
label_20bd84:
    if (ctx->pc == 0x20BD84u) {
        ctx->pc = 0x20BD88u;
        goto label_20bd88;
    }
    ctx->pc = 0x20BD80u;
    SET_GPR_U32(ctx, 31, 0x20BD88u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x20BD80u, 0x20BD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD88u;
label_20bd88:
    // 0x20bd88: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20bd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20bd8c:
    // 0x20bd8c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x20bd8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_20bd90:
    // 0x20bd90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20bd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_20bd94:
    // 0x20bd94: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x20bd94u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_20bd98:
    // 0x20bd98: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x20bd98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_20bd9c:
    // 0x20bd9c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20bd9cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_20bda0:
    // 0x20bda0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x20bda0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_20bda4:
    // 0x20bda4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x20bda4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_20bda8:
    // 0x20bda8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x20bda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20bdac:
    // 0x20bdac: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x20bdacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
label_20bdb0:
    // 0x20bdb0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x20bdb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_20bdb4:
    // 0x20bdb4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20bdb4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_20bdb8:
    // 0x20bdb8: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x20bdb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_20bdbc:
    // 0x20bdbc: 0x102000da  beqz        $at, . + 4 + (0xDA << 2)
label_20bdc0:
    if (ctx->pc == 0x20BDC0u) {
        ctx->pc = 0x20BDC4u;
        goto label_20bdc4;
    }
    ctx->pc = 0x20BDBCu;
    {
        const bool branch_taken_0x20bdbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bdbc) {
            ctx->pc = 0x20C128u;
            goto label_20c128;
        }
    }
    ctx->pc = 0x20BDC4u;
label_20bdc4:
    // 0x20bdc4: 0xc06766c  jal         func_19D9B0
label_20bdc8:
    if (ctx->pc == 0x20BDC8u) {
        ctx->pc = 0x20BDCCu;
        goto label_20bdcc;
    }
    ctx->pc = 0x20BDC4u;
    SET_GPR_U32(ctx, 31, 0x20BDCCu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x20BDC4u, 0x20BDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BDCCu;
label_20bdcc:
    // 0x20bdcc: 0x3c0245e1  lui         $v0, 0x45E1
    ctx->pc = 0x20bdccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17889 << 16));
label_20bdd0:
    // 0x20bdd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20bdd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20bdd4:
    // 0x20bdd4: 0x0  nop
    ctx->pc = 0x20bdd4u;
    // NOP
label_20bdd8:
    // 0x20bdd8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20bdd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20bddc:
    // 0x20bddc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20bddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_20bde0:
    // 0x20bde0: 0xe42094e8  swc1        $f0, -0x6B18($at)
    ctx->pc = 0x20bde0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939880), bits); }
label_20bde4:
    // 0x20bde4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20bde4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_20bde8:
    // 0x20bde8: 0xc42194e8  lwc1        $f1, -0x6B18($at)
    ctx->pc = 0x20bde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20bdec:
    // 0x20bdec: 0x3c02452f  lui         $v0, 0x452F
    ctx->pc = 0x20bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17711 << 16));
label_20bdf0:
    // 0x20bdf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20bdf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20bdf4:
    // 0x20bdf4: 0x0  nop
    ctx->pc = 0x20bdf4u;
    // NOP
label_20bdf8:
    // 0x20bdf8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20bdf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20bdfc:
    // 0x20bdfc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20bdfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_20be00:
    // 0x20be00: 0xe42094e8  swc1        $f0, -0x6B18($at)
    ctx->pc = 0x20be00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939880), bits); }
label_20be04:
    // 0x20be04: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x20be04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_20be08:
    // 0x20be08: 0xc42cdce0  lwc1        $f12, -0x2320($at)
    ctx->pc = 0x20be08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20be0c:
    // 0x20be0c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x20be0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_20be10:
    // 0x20be10: 0xc42ddce8  lwc1        $f13, -0x2318($at)
    ctx->pc = 0x20be10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_20be14:
    // 0x20be14: 0xc0455e6  jal         func_115798
label_20be18:
    if (ctx->pc == 0x20BE18u) {
        ctx->pc = 0x20BE1Cu;
        goto label_20be1c;
    }
    ctx->pc = 0x20BE14u;
    SET_GPR_U32(ctx, 31, 0x20BE1Cu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x20BE14u, 0x20BE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE1Cu;
label_20be1c:
    // 0x20be1c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20be1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_20be20:
    // 0x20be20: 0xe42094f0  swc1        $f0, -0x6B10($at)
    ctx->pc = 0x20be20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939888), bits); }
label_20be24:
    // 0x20be24: 0xc06765c  jal         func_19D970
label_20be28:
    if (ctx->pc == 0x20BE28u) {
        ctx->pc = 0x20BE2Cu;
        goto label_20be2c;
    }
    ctx->pc = 0x20BE24u;
    SET_GPR_U32(ctx, 31, 0x20BE2Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x20BE24u, 0x20BE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE2Cu;
label_20be2c:
    // 0x20be2c: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x20be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
label_20be30:
    // 0x20be30: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x20be30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
label_20be34:
    // 0x20be34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20be34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20be38:
    // 0x20be38: 0x0  nop
    ctx->pc = 0x20be38u;
    // NOP
label_20be3c:
    // 0x20be3c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20be3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20be40:
    // 0x20be40: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20be40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_20be44:
    // 0x20be44: 0xc42094f0  lwc1        $f0, -0x6B10($at)
    ctx->pc = 0x20be44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20be48:
    // 0x20be48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20be48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_20be4c:
    // 0x20be4c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20be4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_20be50:
    // 0x20be50: 0xe42094f0  swc1        $f0, -0x6B10($at)
    ctx->pc = 0x20be50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939888), bits); }
label_20be54:
    // 0x20be54: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20be54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_20be58:
    // 0x20be58: 0xc42094e8  lwc1        $f0, -0x6B18($at)
    ctx->pc = 0x20be58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20be5c:
    // 0x20be5c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20be5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_20be60:
    // 0x20be60: 0xe420a2a8  swc1        $f0, -0x5D58($at)
    ctx->pc = 0x20be60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294943400), bits); }
label_20be64:
    // 0x20be64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20be64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20be68:
    // 0x20be68: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20be68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_20be6c:
    // 0x20be6c: 0xe420a2a0  swc1        $f0, -0x5D60($at)
    ctx->pc = 0x20be6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294943392), bits); }
label_20be70:
    // 0x20be70: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20be70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_20be74:
    // 0x20be74: 0xc42094e8  lwc1        $f0, -0x6B18($at)
    ctx->pc = 0x20be74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20be78:
    // 0x20be78: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20be78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_20be7c:
    // 0x20be7c: 0xe420a2c8  swc1        $f0, -0x5D38($at)
    ctx->pc = 0x20be7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294943432), bits); }
label_20be80:
    // 0x20be80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20be80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20be84:
    // 0x20be84: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20be84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_20be88:
    // 0x20be88: 0xe420a2c0  swc1        $f0, -0x5D40($at)
    ctx->pc = 0x20be88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294943424), bits); }
label_20be8c:
    // 0x20be8c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x20be8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_20be90:
    // 0x20be90: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20be90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_20be94:
    // 0x20be94: 0xc42c94f0  lwc1        $f12, -0x6B10($at)
    ctx->pc = 0x20be94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20be98:
    // 0x20be98: 0xc067844  jal         func_19E110
label_20be9c:
    if (ctx->pc == 0x20BE9Cu) {
        ctx->pc = 0x20BEA0u;
        goto label_20bea0;
    }
    ctx->pc = 0x20BE98u;
    SET_GPR_U32(ctx, 31, 0x20BEA0u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x20BE98u, 0x20BEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BEA0u;
label_20bea0:
    // 0x20bea0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20bea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_20bea4:
    // 0x20bea4: 0x2444a2a0  addiu       $a0, $v0, -0x5D60
    ctx->pc = 0x20bea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943392));
label_20bea8:
    // 0x20bea8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x20bea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_20beac:
    // 0x20beac: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20beacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_20beb0:
    // 0x20beb0: 0x2446a2a0  addiu       $a2, $v0, -0x5D60
    ctx->pc = 0x20beb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943392));
label_20beb4:
    // 0x20beb4: 0xc040bf4  jal         func_102FD0
label_20beb8:
    if (ctx->pc == 0x20BEB8u) {
        ctx->pc = 0x20BEBCu;
        goto label_20bebc;
    }
    ctx->pc = 0x20BEB4u;
    SET_GPR_U32(ctx, 31, 0x20BEBCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x20BEBCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20BEBCu) { return; }
    ctx->pc = 0x20BEBCu;
label_20bebc:
    // 0x20bebc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_20bec0:
    // 0x20bec0: 0x2444a2c0  addiu       $a0, $v0, -0x5D40
    ctx->pc = 0x20bec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943424));
label_20bec4:
    // 0x20bec4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x20bec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_20bec8:
    // 0x20bec8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_20becc:
    // 0x20becc: 0x2446a2c0  addiu       $a2, $v0, -0x5D40
    ctx->pc = 0x20beccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943424));
label_20bed0:
    // 0x20bed0: 0xc040bf4  jal         func_102FD0
label_20bed4:
    if (ctx->pc == 0x20BED4u) {
        ctx->pc = 0x20BED8u;
        goto label_20bed8;
    }
    ctx->pc = 0x20BED0u;
    SET_GPR_U32(ctx, 31, 0x20BED8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x20BED8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20BED8u) { return; }
    ctx->pc = 0x20BED8u;
label_20bed8:
    // 0x20bed8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x20bed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_20bedc:
    // 0x20bedc: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x20bedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20bee0:
    // 0x20bee0: 0x3c0245fa  lui         $v0, 0x45FA
    ctx->pc = 0x20bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17914 << 16));
label_20bee4:
    // 0x20bee4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20bee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20bee8:
    // 0x20bee8: 0x0  nop
    ctx->pc = 0x20bee8u;
    // NOP
label_20beec:
    // 0x20beec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20beecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20bef0:
    // 0x20bef0: 0x0  nop
    ctx->pc = 0x20bef0u;
    // NOP
label_20bef4:
    // 0x20bef4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_20bef8:
    if (ctx->pc == 0x20BEF8u) {
        ctx->pc = 0x20BEFCu;
        goto label_20befc;
    }
    ctx->pc = 0x20BEF4u;
    {
        const bool branch_taken_0x20bef4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bef4) {
            ctx->pc = 0x20BF48u;
            goto label_20bf48;
        }
    }
    ctx->pc = 0x20BEFCu;
label_20befc:
    // 0x20befc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20befcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_20bf00:
    // 0x20bf00: 0x2442a2a0  addiu       $v0, $v0, -0x5D60
    ctx->pc = 0x20bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943392));
label_20bf04:
    // 0x20bf04: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x20bf04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20bf08:
    // 0x20bf08: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_20bf0c:
    // 0x20bf0c: 0x2442a2b0  addiu       $v0, $v0, -0x5D50
    ctx->pc = 0x20bf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943408));
label_20bf10:
    // 0x20bf10: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x20bf10u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_20bf14:
    // 0x20bf14: 0x3c0245da  lui         $v0, 0x45DA
    ctx->pc = 0x20bf14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17882 << 16));
label_20bf18:
    // 0x20bf18: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x20bf18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
label_20bf1c:
    // 0x20bf1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20bf1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20bf20:
    // 0x20bf20: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20bf20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_20bf24:
    // 0x20bf24: 0xe420a2b4  swc1        $f0, -0x5D4C($at)
    ctx->pc = 0x20bf24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294943412), bits); }
label_20bf28:
    // 0x20bf28: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_20bf2c:
    // 0x20bf2c: 0x2444a2b0  addiu       $a0, $v0, -0x5D50
    ctx->pc = 0x20bf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943408));
label_20bf30:
    // 0x20bf30: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x20bf30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20bf34:
    // 0x20bf34: 0xc05cf7c  jal         func_173DF0
label_20bf38:
    if (ctx->pc == 0x20BF38u) {
        ctx->pc = 0x20BF3Cu;
        goto label_20bf3c;
    }
    ctx->pc = 0x20BF34u;
    SET_GPR_U32(ctx, 31, 0x20BF3Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x20BF34u, 0x20BF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BF3Cu;
label_20bf3c:
    // 0x20bf3c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x20bf3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_20bf40:
    // 0x20bf40: 0x10000007  b           . + 4 + (0x7 << 2)
label_20bf44:
    if (ctx->pc == 0x20BF44u) {
        ctx->pc = 0x20BF48u;
        goto label_20bf48;
    }
    ctx->pc = 0x20BF40u;
    {
        const bool branch_taken_0x20bf40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bf40) {
            ctx->pc = 0x20BF60u;
            goto label_20bf60;
        }
    }
    ctx->pc = 0x20BF48u;
label_20bf48:
    // 0x20bf48: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20bf48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_20bf4c:
    // 0x20bf4c: 0x2444a2a0  addiu       $a0, $v0, -0x5D60
    ctx->pc = 0x20bf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943392));
label_20bf50:
    // 0x20bf50: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x20bf50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20bf54:
    // 0x20bf54: 0xc05cf7c  jal         func_173DF0
label_20bf58:
    if (ctx->pc == 0x20BF58u) {
        ctx->pc = 0x20BF5Cu;
        goto label_20bf5c;
    }
    ctx->pc = 0x20BF54u;
    SET_GPR_U32(ctx, 31, 0x20BF5Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x20BF54u, 0x20BF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BF5Cu;
label_20bf5c:
    // 0x20bf5c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x20bf5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_20bf60:
    // 0x20bf60: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x20bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
label_20bf64:
    // 0x20bf64: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x20bf64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
label_20bf68:
    // 0x20bf68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20bf68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20bf6c:
    // 0x20bf6c: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x20bf6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bf70:
    // 0x20bf70: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x20bf70u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20bf74:
    // 0x20bf74: 0x0  nop
    ctx->pc = 0x20bf74u;
    // NOP
label_20bf78:
    // 0x20bf78: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_20bf7c:
    if (ctx->pc == 0x20BF7Cu) {
        ctx->pc = 0x20BF80u;
        goto label_20bf80;
    }
    ctx->pc = 0x20BF78u;
    {
        const bool branch_taken_0x20bf78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bf78) {
            ctx->pc = 0x20BF90u;
            goto label_20bf90;
        }
    }
    ctx->pc = 0x20BF80u;
label_20bf80:
    // 0x20bf80: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x20bf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bf84:
    // 0x20bf84: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x20bf84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_20bf88:
    // 0x20bf88: 0x10000004  b           . + 4 + (0x4 << 2)
label_20bf8c:
    if (ctx->pc == 0x20BF8Cu) {
        ctx->pc = 0x20BF90u;
        goto label_20bf90;
    }
    ctx->pc = 0x20BF88u;
    {
        const bool branch_taken_0x20bf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bf88) {
            ctx->pc = 0x20BF9Cu;
            goto label_20bf9c;
        }
    }
    ctx->pc = 0x20BF90u;
label_20bf90:
    // 0x20bf90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20bf90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20bf94:
    // 0x20bf94: 0x0  nop
    ctx->pc = 0x20bf94u;
    // NOP
label_20bf98:
    // 0x20bf98: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x20bf98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_20bf9c:
    // 0x20bf9c: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x20bf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bfa0:
    // 0x20bfa0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20bfa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_20bfa4:
    // 0x20bfa4: 0xe420a2c4  swc1        $f0, -0x5D3C($at)
    ctx->pc = 0x20bfa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294943428), bits); }
label_20bfa8:
    // 0x20bfa8: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x20bfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_20bfac:
    // 0x20bfac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20bfacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20bfb0:
    // 0x20bfb0: 0x0  nop
    ctx->pc = 0x20bfb0u;
    // NOP
label_20bfb4:
    // 0x20bfb4: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x20bfb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_20bfb8:
    // 0x20bfb8: 0xc06766c  jal         func_19D9B0
label_20bfbc:
    if (ctx->pc == 0x20BFBCu) {
        ctx->pc = 0x20BFC0u;
        goto label_20bfc0;
    }
    ctx->pc = 0x20BFB8u;
    SET_GPR_U32(ctx, 31, 0x20BFC0u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x20BFB8u, 0x20BFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BFC0u;
label_20bfc0:
    // 0x20bfc0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x20bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_20bfc4:
    // 0x20bfc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20bfc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20bfc8:
    // 0x20bfc8: 0x0  nop
    ctx->pc = 0x20bfc8u;
    // NOP
label_20bfcc:
    // 0x20bfcc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20bfccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20bfd0:
    // 0x20bfd0: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x20bfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bfd4:
    // 0x20bfd4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20bfd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_20bfd8:
    // 0x20bfd8: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x20bfd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_20bfdc:
    // 0x20bfdc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x20bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_20bfe0:
    // 0x20bfe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20bfe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20bfe4:
    // 0x20bfe4: 0x0  nop
    ctx->pc = 0x20bfe4u;
    // NOP
label_20bfe8:
    // 0x20bfe8: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x20bfe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_20bfec:
    // 0x20bfec: 0xc06766c  jal         func_19D9B0
label_20bff0:
    if (ctx->pc == 0x20BFF0u) {
        ctx->pc = 0x20BFF4u;
        goto label_20bff4;
    }
    ctx->pc = 0x20BFECu;
    SET_GPR_U32(ctx, 31, 0x20BFF4u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x20BFECu, 0x20BFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BFF4u;
label_20bff4:
    // 0x20bff4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x20bff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_20bff8:
    // 0x20bff8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20bff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20bffc:
    // 0x20bffc: 0x0  nop
    ctx->pc = 0x20bffcu;
    // NOP
label_20c000:
    // 0x20c000: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20c000u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20c004:
    // 0x20c004: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x20c004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20c008:
    // 0x20c008: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20c008u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_20c00c:
    // 0x20c00c: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x20c00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_20c010:
    // 0x20c010: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20c010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_20c014:
    // 0x20c014: 0x2442a2c0  addiu       $v0, $v0, -0x5D40
    ctx->pc = 0x20c014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943424));
label_20c018:
    // 0x20c018: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x20c018u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20c01c:
    // 0x20c01c: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x20c01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_20c020:
    // 0x20c020: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x20c020u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_20c024:
    // 0x20c024: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x20c024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20c028:
    // 0x20c028: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x20c028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20c02c:
    // 0x20c02c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x20c02cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20c030:
    // 0x20c030: 0x0  nop
    ctx->pc = 0x20c030u;
    // NOP
label_20c034:
    // 0x20c034: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_20c038:
    if (ctx->pc == 0x20C038u) {
        ctx->pc = 0x20C03Cu;
        goto label_20c03c;
    }
    ctx->pc = 0x20C034u;
    {
        const bool branch_taken_0x20c034 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20c034) {
            ctx->pc = 0x20C060u;
            goto label_20c060;
        }
    }
    ctx->pc = 0x20C03Cu;
label_20c03c:
    // 0x20c03c: 0xc06766c  jal         func_19D9B0
label_20c040:
    if (ctx->pc == 0x20C040u) {
        ctx->pc = 0x20C044u;
        goto label_20c044;
    }
    ctx->pc = 0x20C03Cu;
    SET_GPR_U32(ctx, 31, 0x20C044u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x20C03Cu, 0x20C044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C044u;
label_20c044:
    // 0x20c044: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x20c044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_20c048:
    // 0x20c048: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20c048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20c04c:
    // 0x20c04c: 0x0  nop
    ctx->pc = 0x20c04cu;
    // NOP
label_20c050:
    // 0x20c050: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20c050u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20c054:
    // 0x20c054: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x20c054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20c058:
    // 0x20c058: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20c058u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_20c05c:
    // 0x20c05c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x20c05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_20c060:
    // 0x20c060: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x20c060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_20c064:
    // 0x20c064: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20c064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_20c068:
    // 0x20c068: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x20c068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
label_20c06c:
    // 0x20c06c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x20c06cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_20c070:
    // 0x20c070: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x20c070u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20c074:
    // 0x20c074: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20c074u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20c078:
    // 0x20c078: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20c078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_20c07c:
    // 0x20c07c: 0x2446a2a0  addiu       $a2, $v0, -0x5D60
    ctx->pc = 0x20c07cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943392));
label_20c080:
    // 0x20c080: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x20c080u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20c084:
    // 0x20c084: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x20c084u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20c088:
    // 0x20c088: 0x27a900d0  addiu       $t1, $sp, 0xD0
    ctx->pc = 0x20c088u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_20c08c:
    // 0x20c08c: 0xc7ac00f4  lwc1        $f12, 0xF4($sp)
    ctx->pc = 0x20c08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20c090:
    // 0x20c090: 0xc7ae00f8  lwc1        $f14, 0xF8($sp)
    ctx->pc = 0x20c090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_20c094:
    // 0x20c094: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20c094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_20c098:
    // 0x20c098: 0x244aa2d0  addiu       $t2, $v0, -0x5D30
    ctx->pc = 0x20c098u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943440));
label_20c09c:
    // 0x20c09c: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x20c09cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20c0a0:
    // 0x20c0a0: 0xc0bb6c0  jal         func_2EDB00
label_20c0a4:
    if (ctx->pc == 0x20C0A4u) {
        ctx->pc = 0x20C0A8u;
        goto label_20c0a8;
    }
    ctx->pc = 0x20C0A0u;
    SET_GPR_U32(ctx, 31, 0x20C0A8u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x20C0A0u, 0x20C0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C0A8u;
label_20c0a8:
    // 0x20c0a8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20c0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_20c0ac:
    // 0x20c0ac: 0x24508c70  addiu       $s0, $v0, -0x7390
    ctx->pc = 0x20c0acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937712));
label_20c0b0:
    // 0x20c0b0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20c0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_20c0b4:
    // 0x20c0b4: 0x2442a2a0  addiu       $v0, $v0, -0x5D60
    ctx->pc = 0x20c0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943392));
label_20c0b8:
    // 0x20c0b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20c0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_20c0bc:
    // 0x20c0bc: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x20c0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_20c0c0:
    // 0x20c0c0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x20c0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_20c0c4:
    // 0x20c0c4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20c0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20c0c8:
    // 0x20c0c8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x20c0c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_20c0cc:
    // 0x20c0cc: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x20c0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_20c0d0:
    // 0x20c0d0: 0xc06c8e0  jal         func_1B2380
label_20c0d4:
    if (ctx->pc == 0x20C0D4u) {
        ctx->pc = 0x20C0D8u;
        goto label_20c0d8;
    }
    ctx->pc = 0x20C0D0u;
    SET_GPR_U32(ctx, 31, 0x20C0D8u);
    ctx->pc = 0x1B2380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2380u, 0x20C0D0u, 0x20C0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C0D8u;
label_20c0d8:
    // 0x20c0d8: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x20c0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20c0dc:
    // 0x20c0dc: 0x84a4127c  lh          $a0, 0x127C($a1)
    ctx->pc = 0x20c0dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4732)));
label_20c0e0:
    // 0x20c0e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20c0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20c0e4:
    // 0x20c0e4: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x20c0e4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
label_20c0e8:
    // 0x20c0e8: 0xa4a3127c  sh          $v1, 0x127C($a1)
    ctx->pc = 0x20c0e8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4732), (uint16_t)GPR_U32(ctx, 3));
label_20c0ec:
    // 0x20c0ec: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x20c0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20c0f0:
    // 0x20c0f0: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x20c0f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
label_20c0f4:
    // 0x20c0f4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x20c0f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_20c0f8:
    // 0x20c0f8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20c0f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_20c0fc:
    // 0x20c0fc: 0x2861000a  slti        $at, $v1, 0xA
    ctx->pc = 0x20c0fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
label_20c100:
    // 0x20c100: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_20c104:
    if (ctx->pc == 0x20C104u) {
        ctx->pc = 0x20C108u;
        goto label_20c108;
    }
    ctx->pc = 0x20C100u;
    {
        const bool branch_taken_0x20c100 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c100) {
            ctx->pc = 0x20C114u;
            goto label_20c114;
        }
    }
    ctx->pc = 0x20C108u;
label_20c108:
    // 0x20c108: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x20c108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_20c10c:
    // 0x20c10c: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x20c10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20c110:
    // 0x20c110: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x20c110u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
label_20c114:
    // 0x20c114: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x20c114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20c118:
    // 0x20c118: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x20c118u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
label_20c11c:
    // 0x20c11c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20c11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c120:
    // 0x20c120: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x20c120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20c124:
    // 0x20c124: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x20c124u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
label_20c128:
    // 0x20c128: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x20c128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20c12c:
    // 0x20c12c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x20c12cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_20c130:
    // 0x20c130: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_20c134:
    if (ctx->pc == 0x20C134u) {
        ctx->pc = 0x20C138u;
        goto label_20c138;
    }
    ctx->pc = 0x20C130u;
    {
        const bool branch_taken_0x20c130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c130) {
            ctx->pc = 0x20C174u;
            goto label_20c174;
        }
    }
    ctx->pc = 0x20C138u;
label_20c138:
    // 0x20c138: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20c138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20c13c:
    // 0x20c13c: 0x8483127e  lh          $v1, 0x127E($a0)
    ctx->pc = 0x20c13cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
label_20c140:
    // 0x20c140: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20c140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_20c144:
    // 0x20c144: 0xa483127e  sh          $v1, 0x127E($a0)
    ctx->pc = 0x20c144u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 3));
label_20c148:
    // 0x20c148: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x20c148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_20c14c:
    // 0x20c14c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20c14cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_20c150:
    // 0x20c150: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x20c150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_20c154:
    // 0x20c154: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20c154u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_20c158:
    // 0x20c158: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x20c158u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_20c15c:
    // 0x20c15c: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_20c160:
    if (ctx->pc == 0x20C160u) {
        ctx->pc = 0x20C164u;
        goto label_20c164;
    }
    ctx->pc = 0x20C15Cu;
    {
        const bool branch_taken_0x20c15c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c15c) {
            ctx->pc = 0x20C174u;
            goto label_20c174;
        }
    }
    ctx->pc = 0x20C164u;
label_20c164:
    // 0x20c164: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20c164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20c168:
    // 0x20c168: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x20c168u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_20c16c:
    // 0x20c16c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20c16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_20c170:
    // 0x20c170: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x20c170u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_20c174:
    // 0x20c174: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20c174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20c178:
    // 0x20c178: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x20c178u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_20c17c:
    // 0x20c17c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20c17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_20c180:
    // 0x20c180: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x20c180u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_20c184:
    // 0x20c184: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x20c184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_20c188:
    // 0x20c188: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20c188u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_20c18c:
    // 0x20c18c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x20c18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_20c190:
    // 0x20c190: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20c190u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_20c194:
    // 0x20c194: 0x286100b5  slti        $at, $v1, 0xB5
    ctx->pc = 0x20c194u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)181) ? 1 : 0);
label_20c198:
    // 0x20c198: 0x14200018  bnez        $at, . + 4 + (0x18 << 2)
label_20c19c:
    if (ctx->pc == 0x20C19Cu) {
        ctx->pc = 0x20C1A0u;
        goto label_20c1a0;
    }
    ctx->pc = 0x20C198u;
    {
        const bool branch_taken_0x20c198 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c198) {
            ctx->pc = 0x20C1FCu;
            goto label_20c1fc;
        }
    }
    ctx->pc = 0x20C1A0u;
label_20c1a0:
    // 0x20c1a0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x20c1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_20c1a4:
    // 0x20c1a4: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x20c1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20c1a8:
    // 0x20c1a8: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x20c1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
label_20c1ac:
    // 0x20c1ac: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x20c1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_20c1b0:
    // 0x20c1b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20c1b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c1b4:
    // 0x20c1b4: 0x0  nop
    ctx->pc = 0x20c1b4u;
    // NOP
label_20c1b8:
    // 0x20c1b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20c1b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20c1bc:
    // 0x20c1bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20c1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c1c0:
    // 0x20c1c0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_20c1c4:
    if (ctx->pc == 0x20C1C4u) {
        ctx->pc = 0x20C1C8u;
        goto label_20c1c8;
    }
    ctx->pc = 0x20C1C0u;
    {
        const bool branch_taken_0x20c1c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20c1c0) {
            ctx->pc = 0x20C1CCu;
            goto label_20c1cc;
        }
    }
    ctx->pc = 0x20C1C8u;
label_20c1c8:
    // 0x20c1c8: 0x70001e28  paddub      $v1, $zero, $zero
    ctx->pc = 0x20c1c8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20c1cc:
    // 0x20c1cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20c1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c1d0:
    // 0x20c1d0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x20c1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20c1d4:
    // 0x20c1d4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20c1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_20c1d8:
    // 0x20c1d8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x20c1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_20c1dc:
    // 0x20c1dc: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x20c1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20c1e0:
    // 0x20c1e0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x20c1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_20c1e4:
    // 0x20c1e4: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x20c1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20c1e8:
    // 0x20c1e8: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x20c1e8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
label_20c1ec:
    // 0x20c1ec: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x20c1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20c1f0:
    // 0x20c1f0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20c1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_20c1f4:
    // 0x20c1f4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20c1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20c1f8:
    // 0x20c1f8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x20c1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_20c1fc:
    // 0x20c1fc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x20c1fcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20c200:
    // 0x20c200: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20c200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20c204:
    // 0x20c204: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x20c204u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_20c208:
    // 0x20c208: 0x3e00008  jr          $ra
label_20c20c:
    if (ctx->pc == 0x20C20Cu) {
        ctx->pc = 0x20C210u;
        goto label_fallthrough_0x20c208;
    }
    ctx->pc = 0x20C208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20c208:
    ctx->pc = 0x20C210u;
}
