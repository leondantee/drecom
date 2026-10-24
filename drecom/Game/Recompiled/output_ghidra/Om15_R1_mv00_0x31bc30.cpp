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

// Function: Om15_R1_mv00
// Address: 0x31bc30 - 0x31cd68
void Om15_R1_mv00_0x31bc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om15_R1_mv00_0x31bc30");
#endif

    switch (ctx->pc) {
        case 0x31bc30u: goto label_31bc30;
        case 0x31bc34u: goto label_31bc34;
        case 0x31bc38u: goto label_31bc38;
        case 0x31bc3cu: goto label_31bc3c;
        case 0x31bc40u: goto label_31bc40;
        case 0x31bc44u: goto label_31bc44;
        case 0x31bc48u: goto label_31bc48;
        case 0x31bc4cu: goto label_31bc4c;
        case 0x31bc50u: goto label_31bc50;
        case 0x31bc54u: goto label_31bc54;
        case 0x31bc58u: goto label_31bc58;
        case 0x31bc5cu: goto label_31bc5c;
        case 0x31bc60u: goto label_31bc60;
        case 0x31bc64u: goto label_31bc64;
        case 0x31bc68u: goto label_31bc68;
        case 0x31bc6cu: goto label_31bc6c;
        case 0x31bc70u: goto label_31bc70;
        case 0x31bc74u: goto label_31bc74;
        case 0x31bc78u: goto label_31bc78;
        case 0x31bc7cu: goto label_31bc7c;
        case 0x31bc80u: goto label_31bc80;
        case 0x31bc84u: goto label_31bc84;
        case 0x31bc88u: goto label_31bc88;
        case 0x31bc8cu: goto label_31bc8c;
        case 0x31bc90u: goto label_31bc90;
        case 0x31bc94u: goto label_31bc94;
        case 0x31bc98u: goto label_31bc98;
        case 0x31bc9cu: goto label_31bc9c;
        case 0x31bca0u: goto label_31bca0;
        case 0x31bca4u: goto label_31bca4;
        case 0x31bca8u: goto label_31bca8;
        case 0x31bcacu: goto label_31bcac;
        case 0x31bcb0u: goto label_31bcb0;
        case 0x31bcb4u: goto label_31bcb4;
        case 0x31bcb8u: goto label_31bcb8;
        case 0x31bcbcu: goto label_31bcbc;
        case 0x31bcc0u: goto label_31bcc0;
        case 0x31bcc4u: goto label_31bcc4;
        case 0x31bcc8u: goto label_31bcc8;
        case 0x31bcccu: goto label_31bccc;
        case 0x31bcd0u: goto label_31bcd0;
        case 0x31bcd4u: goto label_31bcd4;
        case 0x31bcd8u: goto label_31bcd8;
        case 0x31bcdcu: goto label_31bcdc;
        case 0x31bce0u: goto label_31bce0;
        case 0x31bce4u: goto label_31bce4;
        case 0x31bce8u: goto label_31bce8;
        case 0x31bcecu: goto label_31bcec;
        case 0x31bcf0u: goto label_31bcf0;
        case 0x31bcf4u: goto label_31bcf4;
        case 0x31bcf8u: goto label_31bcf8;
        case 0x31bcfcu: goto label_31bcfc;
        case 0x31bd00u: goto label_31bd00;
        case 0x31bd04u: goto label_31bd04;
        case 0x31bd08u: goto label_31bd08;
        case 0x31bd0cu: goto label_31bd0c;
        case 0x31bd10u: goto label_31bd10;
        case 0x31bd14u: goto label_31bd14;
        case 0x31bd18u: goto label_31bd18;
        case 0x31bd1cu: goto label_31bd1c;
        case 0x31bd20u: goto label_31bd20;
        case 0x31bd24u: goto label_31bd24;
        case 0x31bd28u: goto label_31bd28;
        case 0x31bd2cu: goto label_31bd2c;
        case 0x31bd30u: goto label_31bd30;
        case 0x31bd34u: goto label_31bd34;
        case 0x31bd38u: goto label_31bd38;
        case 0x31bd3cu: goto label_31bd3c;
        case 0x31bd40u: goto label_31bd40;
        case 0x31bd44u: goto label_31bd44;
        case 0x31bd48u: goto label_31bd48;
        case 0x31bd4cu: goto label_31bd4c;
        case 0x31bd50u: goto label_31bd50;
        case 0x31bd54u: goto label_31bd54;
        case 0x31bd58u: goto label_31bd58;
        case 0x31bd5cu: goto label_31bd5c;
        case 0x31bd60u: goto label_31bd60;
        case 0x31bd64u: goto label_31bd64;
        case 0x31bd68u: goto label_31bd68;
        case 0x31bd6cu: goto label_31bd6c;
        case 0x31bd70u: goto label_31bd70;
        case 0x31bd74u: goto label_31bd74;
        case 0x31bd78u: goto label_31bd78;
        case 0x31bd7cu: goto label_31bd7c;
        case 0x31bd80u: goto label_31bd80;
        case 0x31bd84u: goto label_31bd84;
        case 0x31bd88u: goto label_31bd88;
        case 0x31bd8cu: goto label_31bd8c;
        case 0x31bd90u: goto label_31bd90;
        case 0x31bd94u: goto label_31bd94;
        case 0x31bd98u: goto label_31bd98;
        case 0x31bd9cu: goto label_31bd9c;
        case 0x31bda0u: goto label_31bda0;
        case 0x31bda4u: goto label_31bda4;
        case 0x31bda8u: goto label_31bda8;
        case 0x31bdacu: goto label_31bdac;
        case 0x31bdb0u: goto label_31bdb0;
        case 0x31bdb4u: goto label_31bdb4;
        case 0x31bdb8u: goto label_31bdb8;
        case 0x31bdbcu: goto label_31bdbc;
        case 0x31bdc0u: goto label_31bdc0;
        case 0x31bdc4u: goto label_31bdc4;
        case 0x31bdc8u: goto label_31bdc8;
        case 0x31bdccu: goto label_31bdcc;
        case 0x31bdd0u: goto label_31bdd0;
        case 0x31bdd4u: goto label_31bdd4;
        case 0x31bdd8u: goto label_31bdd8;
        case 0x31bddcu: goto label_31bddc;
        case 0x31bde0u: goto label_31bde0;
        case 0x31bde4u: goto label_31bde4;
        case 0x31bde8u: goto label_31bde8;
        case 0x31bdecu: goto label_31bdec;
        case 0x31bdf0u: goto label_31bdf0;
        case 0x31bdf4u: goto label_31bdf4;
        case 0x31bdf8u: goto label_31bdf8;
        case 0x31bdfcu: goto label_31bdfc;
        case 0x31be00u: goto label_31be00;
        case 0x31be04u: goto label_31be04;
        case 0x31be08u: goto label_31be08;
        case 0x31be0cu: goto label_31be0c;
        case 0x31be10u: goto label_31be10;
        case 0x31be14u: goto label_31be14;
        case 0x31be18u: goto label_31be18;
        case 0x31be1cu: goto label_31be1c;
        case 0x31be20u: goto label_31be20;
        case 0x31be24u: goto label_31be24;
        case 0x31be28u: goto label_31be28;
        case 0x31be2cu: goto label_31be2c;
        case 0x31be30u: goto label_31be30;
        case 0x31be34u: goto label_31be34;
        case 0x31be38u: goto label_31be38;
        case 0x31be3cu: goto label_31be3c;
        case 0x31be40u: goto label_31be40;
        case 0x31be44u: goto label_31be44;
        case 0x31be48u: goto label_31be48;
        case 0x31be4cu: goto label_31be4c;
        case 0x31be50u: goto label_31be50;
        case 0x31be54u: goto label_31be54;
        case 0x31be58u: goto label_31be58;
        case 0x31be5cu: goto label_31be5c;
        case 0x31be60u: goto label_31be60;
        case 0x31be64u: goto label_31be64;
        case 0x31be68u: goto label_31be68;
        case 0x31be6cu: goto label_31be6c;
        case 0x31be70u: goto label_31be70;
        case 0x31be74u: goto label_31be74;
        case 0x31be78u: goto label_31be78;
        case 0x31be7cu: goto label_31be7c;
        case 0x31be80u: goto label_31be80;
        case 0x31be84u: goto label_31be84;
        case 0x31be88u: goto label_31be88;
        case 0x31be8cu: goto label_31be8c;
        case 0x31be90u: goto label_31be90;
        case 0x31be94u: goto label_31be94;
        case 0x31be98u: goto label_31be98;
        case 0x31be9cu: goto label_31be9c;
        case 0x31bea0u: goto label_31bea0;
        case 0x31bea4u: goto label_31bea4;
        case 0x31bea8u: goto label_31bea8;
        case 0x31beacu: goto label_31beac;
        case 0x31beb0u: goto label_31beb0;
        case 0x31beb4u: goto label_31beb4;
        case 0x31beb8u: goto label_31beb8;
        case 0x31bebcu: goto label_31bebc;
        case 0x31bec0u: goto label_31bec0;
        case 0x31bec4u: goto label_31bec4;
        case 0x31bec8u: goto label_31bec8;
        case 0x31beccu: goto label_31becc;
        case 0x31bed0u: goto label_31bed0;
        case 0x31bed4u: goto label_31bed4;
        case 0x31bed8u: goto label_31bed8;
        case 0x31bedcu: goto label_31bedc;
        case 0x31bee0u: goto label_31bee0;
        case 0x31bee4u: goto label_31bee4;
        case 0x31bee8u: goto label_31bee8;
        case 0x31beecu: goto label_31beec;
        case 0x31bef0u: goto label_31bef0;
        case 0x31bef4u: goto label_31bef4;
        case 0x31bef8u: goto label_31bef8;
        case 0x31befcu: goto label_31befc;
        case 0x31bf00u: goto label_31bf00;
        case 0x31bf04u: goto label_31bf04;
        case 0x31bf08u: goto label_31bf08;
        case 0x31bf0cu: goto label_31bf0c;
        case 0x31bf10u: goto label_31bf10;
        case 0x31bf14u: goto label_31bf14;
        case 0x31bf18u: goto label_31bf18;
        case 0x31bf1cu: goto label_31bf1c;
        case 0x31bf20u: goto label_31bf20;
        case 0x31bf24u: goto label_31bf24;
        case 0x31bf28u: goto label_31bf28;
        case 0x31bf2cu: goto label_31bf2c;
        case 0x31bf30u: goto label_31bf30;
        case 0x31bf34u: goto label_31bf34;
        case 0x31bf38u: goto label_31bf38;
        case 0x31bf3cu: goto label_31bf3c;
        case 0x31bf40u: goto label_31bf40;
        case 0x31bf44u: goto label_31bf44;
        case 0x31bf48u: goto label_31bf48;
        case 0x31bf4cu: goto label_31bf4c;
        case 0x31bf50u: goto label_31bf50;
        case 0x31bf54u: goto label_31bf54;
        case 0x31bf58u: goto label_31bf58;
        case 0x31bf5cu: goto label_31bf5c;
        case 0x31bf60u: goto label_31bf60;
        case 0x31bf64u: goto label_31bf64;
        case 0x31bf68u: goto label_31bf68;
        case 0x31bf6cu: goto label_31bf6c;
        case 0x31bf70u: goto label_31bf70;
        case 0x31bf74u: goto label_31bf74;
        case 0x31bf78u: goto label_31bf78;
        case 0x31bf7cu: goto label_31bf7c;
        case 0x31bf80u: goto label_31bf80;
        case 0x31bf84u: goto label_31bf84;
        case 0x31bf88u: goto label_31bf88;
        case 0x31bf8cu: goto label_31bf8c;
        case 0x31bf90u: goto label_31bf90;
        case 0x31bf94u: goto label_31bf94;
        case 0x31bf98u: goto label_31bf98;
        case 0x31bf9cu: goto label_31bf9c;
        case 0x31bfa0u: goto label_31bfa0;
        case 0x31bfa4u: goto label_31bfa4;
        case 0x31bfa8u: goto label_31bfa8;
        case 0x31bfacu: goto label_31bfac;
        case 0x31bfb0u: goto label_31bfb0;
        case 0x31bfb4u: goto label_31bfb4;
        case 0x31bfb8u: goto label_31bfb8;
        case 0x31bfbcu: goto label_31bfbc;
        case 0x31bfc0u: goto label_31bfc0;
        case 0x31bfc4u: goto label_31bfc4;
        case 0x31bfc8u: goto label_31bfc8;
        case 0x31bfccu: goto label_31bfcc;
        case 0x31bfd0u: goto label_31bfd0;
        case 0x31bfd4u: goto label_31bfd4;
        case 0x31bfd8u: goto label_31bfd8;
        case 0x31bfdcu: goto label_31bfdc;
        case 0x31bfe0u: goto label_31bfe0;
        case 0x31bfe4u: goto label_31bfe4;
        case 0x31bfe8u: goto label_31bfe8;
        case 0x31bfecu: goto label_31bfec;
        case 0x31bff0u: goto label_31bff0;
        case 0x31bff4u: goto label_31bff4;
        case 0x31bff8u: goto label_31bff8;
        case 0x31bffcu: goto label_31bffc;
        case 0x31c000u: goto label_31c000;
        case 0x31c004u: goto label_31c004;
        case 0x31c008u: goto label_31c008;
        case 0x31c00cu: goto label_31c00c;
        case 0x31c010u: goto label_31c010;
        case 0x31c014u: goto label_31c014;
        case 0x31c018u: goto label_31c018;
        case 0x31c01cu: goto label_31c01c;
        case 0x31c020u: goto label_31c020;
        case 0x31c024u: goto label_31c024;
        case 0x31c028u: goto label_31c028;
        case 0x31c02cu: goto label_31c02c;
        case 0x31c030u: goto label_31c030;
        case 0x31c034u: goto label_31c034;
        case 0x31c038u: goto label_31c038;
        case 0x31c03cu: goto label_31c03c;
        case 0x31c040u: goto label_31c040;
        case 0x31c044u: goto label_31c044;
        case 0x31c048u: goto label_31c048;
        case 0x31c04cu: goto label_31c04c;
        case 0x31c050u: goto label_31c050;
        case 0x31c054u: goto label_31c054;
        case 0x31c058u: goto label_31c058;
        case 0x31c05cu: goto label_31c05c;
        case 0x31c060u: goto label_31c060;
        case 0x31c064u: goto label_31c064;
        case 0x31c068u: goto label_31c068;
        case 0x31c06cu: goto label_31c06c;
        case 0x31c070u: goto label_31c070;
        case 0x31c074u: goto label_31c074;
        case 0x31c078u: goto label_31c078;
        case 0x31c07cu: goto label_31c07c;
        case 0x31c080u: goto label_31c080;
        case 0x31c084u: goto label_31c084;
        case 0x31c088u: goto label_31c088;
        case 0x31c08cu: goto label_31c08c;
        case 0x31c090u: goto label_31c090;
        case 0x31c094u: goto label_31c094;
        case 0x31c098u: goto label_31c098;
        case 0x31c09cu: goto label_31c09c;
        case 0x31c0a0u: goto label_31c0a0;
        case 0x31c0a4u: goto label_31c0a4;
        case 0x31c0a8u: goto label_31c0a8;
        case 0x31c0acu: goto label_31c0ac;
        case 0x31c0b0u: goto label_31c0b0;
        case 0x31c0b4u: goto label_31c0b4;
        case 0x31c0b8u: goto label_31c0b8;
        case 0x31c0bcu: goto label_31c0bc;
        case 0x31c0c0u: goto label_31c0c0;
        case 0x31c0c4u: goto label_31c0c4;
        case 0x31c0c8u: goto label_31c0c8;
        case 0x31c0ccu: goto label_31c0cc;
        case 0x31c0d0u: goto label_31c0d0;
        case 0x31c0d4u: goto label_31c0d4;
        case 0x31c0d8u: goto label_31c0d8;
        case 0x31c0dcu: goto label_31c0dc;
        case 0x31c0e0u: goto label_31c0e0;
        case 0x31c0e4u: goto label_31c0e4;
        case 0x31c0e8u: goto label_31c0e8;
        case 0x31c0ecu: goto label_31c0ec;
        case 0x31c0f0u: goto label_31c0f0;
        case 0x31c0f4u: goto label_31c0f4;
        case 0x31c0f8u: goto label_31c0f8;
        case 0x31c0fcu: goto label_31c0fc;
        case 0x31c100u: goto label_31c100;
        case 0x31c104u: goto label_31c104;
        case 0x31c108u: goto label_31c108;
        case 0x31c10cu: goto label_31c10c;
        case 0x31c110u: goto label_31c110;
        case 0x31c114u: goto label_31c114;
        case 0x31c118u: goto label_31c118;
        case 0x31c11cu: goto label_31c11c;
        case 0x31c120u: goto label_31c120;
        case 0x31c124u: goto label_31c124;
        case 0x31c128u: goto label_31c128;
        case 0x31c12cu: goto label_31c12c;
        case 0x31c130u: goto label_31c130;
        case 0x31c134u: goto label_31c134;
        case 0x31c138u: goto label_31c138;
        case 0x31c13cu: goto label_31c13c;
        case 0x31c140u: goto label_31c140;
        case 0x31c144u: goto label_31c144;
        case 0x31c148u: goto label_31c148;
        case 0x31c14cu: goto label_31c14c;
        case 0x31c150u: goto label_31c150;
        case 0x31c154u: goto label_31c154;
        case 0x31c158u: goto label_31c158;
        case 0x31c15cu: goto label_31c15c;
        case 0x31c160u: goto label_31c160;
        case 0x31c164u: goto label_31c164;
        case 0x31c168u: goto label_31c168;
        case 0x31c16cu: goto label_31c16c;
        case 0x31c170u: goto label_31c170;
        case 0x31c174u: goto label_31c174;
        case 0x31c178u: goto label_31c178;
        case 0x31c17cu: goto label_31c17c;
        case 0x31c180u: goto label_31c180;
        case 0x31c184u: goto label_31c184;
        case 0x31c188u: goto label_31c188;
        case 0x31c18cu: goto label_31c18c;
        case 0x31c190u: goto label_31c190;
        case 0x31c194u: goto label_31c194;
        case 0x31c198u: goto label_31c198;
        case 0x31c19cu: goto label_31c19c;
        case 0x31c1a0u: goto label_31c1a0;
        case 0x31c1a4u: goto label_31c1a4;
        case 0x31c1a8u: goto label_31c1a8;
        case 0x31c1acu: goto label_31c1ac;
        case 0x31c1b0u: goto label_31c1b0;
        case 0x31c1b4u: goto label_31c1b4;
        case 0x31c1b8u: goto label_31c1b8;
        case 0x31c1bcu: goto label_31c1bc;
        case 0x31c1c0u: goto label_31c1c0;
        case 0x31c1c4u: goto label_31c1c4;
        case 0x31c1c8u: goto label_31c1c8;
        case 0x31c1ccu: goto label_31c1cc;
        case 0x31c1d0u: goto label_31c1d0;
        case 0x31c1d4u: goto label_31c1d4;
        case 0x31c1d8u: goto label_31c1d8;
        case 0x31c1dcu: goto label_31c1dc;
        case 0x31c1e0u: goto label_31c1e0;
        case 0x31c1e4u: goto label_31c1e4;
        case 0x31c1e8u: goto label_31c1e8;
        case 0x31c1ecu: goto label_31c1ec;
        case 0x31c1f0u: goto label_31c1f0;
        case 0x31c1f4u: goto label_31c1f4;
        case 0x31c1f8u: goto label_31c1f8;
        case 0x31c1fcu: goto label_31c1fc;
        case 0x31c200u: goto label_31c200;
        case 0x31c204u: goto label_31c204;
        case 0x31c208u: goto label_31c208;
        case 0x31c20cu: goto label_31c20c;
        case 0x31c210u: goto label_31c210;
        case 0x31c214u: goto label_31c214;
        case 0x31c218u: goto label_31c218;
        case 0x31c21cu: goto label_31c21c;
        case 0x31c220u: goto label_31c220;
        case 0x31c224u: goto label_31c224;
        case 0x31c228u: goto label_31c228;
        case 0x31c22cu: goto label_31c22c;
        case 0x31c230u: goto label_31c230;
        case 0x31c234u: goto label_31c234;
        case 0x31c238u: goto label_31c238;
        case 0x31c23cu: goto label_31c23c;
        case 0x31c240u: goto label_31c240;
        case 0x31c244u: goto label_31c244;
        case 0x31c248u: goto label_31c248;
        case 0x31c24cu: goto label_31c24c;
        case 0x31c250u: goto label_31c250;
        case 0x31c254u: goto label_31c254;
        case 0x31c258u: goto label_31c258;
        case 0x31c25cu: goto label_31c25c;
        case 0x31c260u: goto label_31c260;
        case 0x31c264u: goto label_31c264;
        case 0x31c268u: goto label_31c268;
        case 0x31c26cu: goto label_31c26c;
        case 0x31c270u: goto label_31c270;
        case 0x31c274u: goto label_31c274;
        case 0x31c278u: goto label_31c278;
        case 0x31c27cu: goto label_31c27c;
        case 0x31c280u: goto label_31c280;
        case 0x31c284u: goto label_31c284;
        case 0x31c288u: goto label_31c288;
        case 0x31c28cu: goto label_31c28c;
        case 0x31c290u: goto label_31c290;
        case 0x31c294u: goto label_31c294;
        case 0x31c298u: goto label_31c298;
        case 0x31c29cu: goto label_31c29c;
        case 0x31c2a0u: goto label_31c2a0;
        case 0x31c2a4u: goto label_31c2a4;
        case 0x31c2a8u: goto label_31c2a8;
        case 0x31c2acu: goto label_31c2ac;
        case 0x31c2b0u: goto label_31c2b0;
        case 0x31c2b4u: goto label_31c2b4;
        case 0x31c2b8u: goto label_31c2b8;
        case 0x31c2bcu: goto label_31c2bc;
        case 0x31c2c0u: goto label_31c2c0;
        case 0x31c2c4u: goto label_31c2c4;
        case 0x31c2c8u: goto label_31c2c8;
        case 0x31c2ccu: goto label_31c2cc;
        case 0x31c2d0u: goto label_31c2d0;
        case 0x31c2d4u: goto label_31c2d4;
        case 0x31c2d8u: goto label_31c2d8;
        case 0x31c2dcu: goto label_31c2dc;
        case 0x31c2e0u: goto label_31c2e0;
        case 0x31c2e4u: goto label_31c2e4;
        case 0x31c2e8u: goto label_31c2e8;
        case 0x31c2ecu: goto label_31c2ec;
        case 0x31c2f0u: goto label_31c2f0;
        case 0x31c2f4u: goto label_31c2f4;
        case 0x31c2f8u: goto label_31c2f8;
        case 0x31c2fcu: goto label_31c2fc;
        case 0x31c300u: goto label_31c300;
        case 0x31c304u: goto label_31c304;
        case 0x31c308u: goto label_31c308;
        case 0x31c30cu: goto label_31c30c;
        case 0x31c310u: goto label_31c310;
        case 0x31c314u: goto label_31c314;
        case 0x31c318u: goto label_31c318;
        case 0x31c31cu: goto label_31c31c;
        case 0x31c320u: goto label_31c320;
        case 0x31c324u: goto label_31c324;
        case 0x31c328u: goto label_31c328;
        case 0x31c32cu: goto label_31c32c;
        case 0x31c330u: goto label_31c330;
        case 0x31c334u: goto label_31c334;
        case 0x31c338u: goto label_31c338;
        case 0x31c33cu: goto label_31c33c;
        case 0x31c340u: goto label_31c340;
        case 0x31c344u: goto label_31c344;
        case 0x31c348u: goto label_31c348;
        case 0x31c34cu: goto label_31c34c;
        case 0x31c350u: goto label_31c350;
        case 0x31c354u: goto label_31c354;
        case 0x31c358u: goto label_31c358;
        case 0x31c35cu: goto label_31c35c;
        case 0x31c360u: goto label_31c360;
        case 0x31c364u: goto label_31c364;
        case 0x31c368u: goto label_31c368;
        case 0x31c36cu: goto label_31c36c;
        case 0x31c370u: goto label_31c370;
        case 0x31c374u: goto label_31c374;
        case 0x31c378u: goto label_31c378;
        case 0x31c37cu: goto label_31c37c;
        case 0x31c380u: goto label_31c380;
        case 0x31c384u: goto label_31c384;
        case 0x31c388u: goto label_31c388;
        case 0x31c38cu: goto label_31c38c;
        case 0x31c390u: goto label_31c390;
        case 0x31c394u: goto label_31c394;
        case 0x31c398u: goto label_31c398;
        case 0x31c39cu: goto label_31c39c;
        case 0x31c3a0u: goto label_31c3a0;
        case 0x31c3a4u: goto label_31c3a4;
        case 0x31c3a8u: goto label_31c3a8;
        case 0x31c3acu: goto label_31c3ac;
        case 0x31c3b0u: goto label_31c3b0;
        case 0x31c3b4u: goto label_31c3b4;
        case 0x31c3b8u: goto label_31c3b8;
        case 0x31c3bcu: goto label_31c3bc;
        case 0x31c3c0u: goto label_31c3c0;
        case 0x31c3c4u: goto label_31c3c4;
        case 0x31c3c8u: goto label_31c3c8;
        case 0x31c3ccu: goto label_31c3cc;
        case 0x31c3d0u: goto label_31c3d0;
        case 0x31c3d4u: goto label_31c3d4;
        case 0x31c3d8u: goto label_31c3d8;
        case 0x31c3dcu: goto label_31c3dc;
        case 0x31c3e0u: goto label_31c3e0;
        case 0x31c3e4u: goto label_31c3e4;
        case 0x31c3e8u: goto label_31c3e8;
        case 0x31c3ecu: goto label_31c3ec;
        case 0x31c3f0u: goto label_31c3f0;
        case 0x31c3f4u: goto label_31c3f4;
        case 0x31c3f8u: goto label_31c3f8;
        case 0x31c3fcu: goto label_31c3fc;
        case 0x31c400u: goto label_31c400;
        case 0x31c404u: goto label_31c404;
        case 0x31c408u: goto label_31c408;
        case 0x31c40cu: goto label_31c40c;
        case 0x31c410u: goto label_31c410;
        case 0x31c414u: goto label_31c414;
        case 0x31c418u: goto label_31c418;
        case 0x31c41cu: goto label_31c41c;
        case 0x31c420u: goto label_31c420;
        case 0x31c424u: goto label_31c424;
        case 0x31c428u: goto label_31c428;
        case 0x31c42cu: goto label_31c42c;
        case 0x31c430u: goto label_31c430;
        case 0x31c434u: goto label_31c434;
        case 0x31c438u: goto label_31c438;
        case 0x31c43cu: goto label_31c43c;
        case 0x31c440u: goto label_31c440;
        case 0x31c444u: goto label_31c444;
        case 0x31c448u: goto label_31c448;
        case 0x31c44cu: goto label_31c44c;
        case 0x31c450u: goto label_31c450;
        case 0x31c454u: goto label_31c454;
        case 0x31c458u: goto label_31c458;
        case 0x31c45cu: goto label_31c45c;
        case 0x31c460u: goto label_31c460;
        case 0x31c464u: goto label_31c464;
        case 0x31c468u: goto label_31c468;
        case 0x31c46cu: goto label_31c46c;
        case 0x31c470u: goto label_31c470;
        case 0x31c474u: goto label_31c474;
        case 0x31c478u: goto label_31c478;
        case 0x31c47cu: goto label_31c47c;
        case 0x31c480u: goto label_31c480;
        case 0x31c484u: goto label_31c484;
        case 0x31c488u: goto label_31c488;
        case 0x31c48cu: goto label_31c48c;
        case 0x31c490u: goto label_31c490;
        case 0x31c494u: goto label_31c494;
        case 0x31c498u: goto label_31c498;
        case 0x31c49cu: goto label_31c49c;
        case 0x31c4a0u: goto label_31c4a0;
        case 0x31c4a4u: goto label_31c4a4;
        case 0x31c4a8u: goto label_31c4a8;
        case 0x31c4acu: goto label_31c4ac;
        case 0x31c4b0u: goto label_31c4b0;
        case 0x31c4b4u: goto label_31c4b4;
        case 0x31c4b8u: goto label_31c4b8;
        case 0x31c4bcu: goto label_31c4bc;
        case 0x31c4c0u: goto label_31c4c0;
        case 0x31c4c4u: goto label_31c4c4;
        case 0x31c4c8u: goto label_31c4c8;
        case 0x31c4ccu: goto label_31c4cc;
        case 0x31c4d0u: goto label_31c4d0;
        case 0x31c4d4u: goto label_31c4d4;
        case 0x31c4d8u: goto label_31c4d8;
        case 0x31c4dcu: goto label_31c4dc;
        case 0x31c4e0u: goto label_31c4e0;
        case 0x31c4e4u: goto label_31c4e4;
        case 0x31c4e8u: goto label_31c4e8;
        case 0x31c4ecu: goto label_31c4ec;
        case 0x31c4f0u: goto label_31c4f0;
        case 0x31c4f4u: goto label_31c4f4;
        case 0x31c4f8u: goto label_31c4f8;
        case 0x31c4fcu: goto label_31c4fc;
        case 0x31c500u: goto label_31c500;
        case 0x31c504u: goto label_31c504;
        case 0x31c508u: goto label_31c508;
        case 0x31c50cu: goto label_31c50c;
        case 0x31c510u: goto label_31c510;
        case 0x31c514u: goto label_31c514;
        case 0x31c518u: goto label_31c518;
        case 0x31c51cu: goto label_31c51c;
        case 0x31c520u: goto label_31c520;
        case 0x31c524u: goto label_31c524;
        case 0x31c528u: goto label_31c528;
        case 0x31c52cu: goto label_31c52c;
        case 0x31c530u: goto label_31c530;
        case 0x31c534u: goto label_31c534;
        case 0x31c538u: goto label_31c538;
        case 0x31c53cu: goto label_31c53c;
        case 0x31c540u: goto label_31c540;
        case 0x31c544u: goto label_31c544;
        case 0x31c548u: goto label_31c548;
        case 0x31c54cu: goto label_31c54c;
        case 0x31c550u: goto label_31c550;
        case 0x31c554u: goto label_31c554;
        case 0x31c558u: goto label_31c558;
        case 0x31c55cu: goto label_31c55c;
        case 0x31c560u: goto label_31c560;
        case 0x31c564u: goto label_31c564;
        case 0x31c568u: goto label_31c568;
        case 0x31c56cu: goto label_31c56c;
        case 0x31c570u: goto label_31c570;
        case 0x31c574u: goto label_31c574;
        case 0x31c578u: goto label_31c578;
        case 0x31c57cu: goto label_31c57c;
        case 0x31c580u: goto label_31c580;
        case 0x31c584u: goto label_31c584;
        case 0x31c588u: goto label_31c588;
        case 0x31c58cu: goto label_31c58c;
        case 0x31c590u: goto label_31c590;
        case 0x31c594u: goto label_31c594;
        case 0x31c598u: goto label_31c598;
        case 0x31c59cu: goto label_31c59c;
        case 0x31c5a0u: goto label_31c5a0;
        case 0x31c5a4u: goto label_31c5a4;
        case 0x31c5a8u: goto label_31c5a8;
        case 0x31c5acu: goto label_31c5ac;
        case 0x31c5b0u: goto label_31c5b0;
        case 0x31c5b4u: goto label_31c5b4;
        case 0x31c5b8u: goto label_31c5b8;
        case 0x31c5bcu: goto label_31c5bc;
        case 0x31c5c0u: goto label_31c5c0;
        case 0x31c5c4u: goto label_31c5c4;
        case 0x31c5c8u: goto label_31c5c8;
        case 0x31c5ccu: goto label_31c5cc;
        case 0x31c5d0u: goto label_31c5d0;
        case 0x31c5d4u: goto label_31c5d4;
        case 0x31c5d8u: goto label_31c5d8;
        case 0x31c5dcu: goto label_31c5dc;
        case 0x31c5e0u: goto label_31c5e0;
        case 0x31c5e4u: goto label_31c5e4;
        case 0x31c5e8u: goto label_31c5e8;
        case 0x31c5ecu: goto label_31c5ec;
        case 0x31c5f0u: goto label_31c5f0;
        case 0x31c5f4u: goto label_31c5f4;
        case 0x31c5f8u: goto label_31c5f8;
        case 0x31c5fcu: goto label_31c5fc;
        case 0x31c600u: goto label_31c600;
        case 0x31c604u: goto label_31c604;
        case 0x31c608u: goto label_31c608;
        case 0x31c60cu: goto label_31c60c;
        case 0x31c610u: goto label_31c610;
        case 0x31c614u: goto label_31c614;
        case 0x31c618u: goto label_31c618;
        case 0x31c61cu: goto label_31c61c;
        case 0x31c620u: goto label_31c620;
        case 0x31c624u: goto label_31c624;
        case 0x31c628u: goto label_31c628;
        case 0x31c62cu: goto label_31c62c;
        case 0x31c630u: goto label_31c630;
        case 0x31c634u: goto label_31c634;
        case 0x31c638u: goto label_31c638;
        case 0x31c63cu: goto label_31c63c;
        case 0x31c640u: goto label_31c640;
        case 0x31c644u: goto label_31c644;
        case 0x31c648u: goto label_31c648;
        case 0x31c64cu: goto label_31c64c;
        case 0x31c650u: goto label_31c650;
        case 0x31c654u: goto label_31c654;
        case 0x31c658u: goto label_31c658;
        case 0x31c65cu: goto label_31c65c;
        case 0x31c660u: goto label_31c660;
        case 0x31c664u: goto label_31c664;
        case 0x31c668u: goto label_31c668;
        case 0x31c66cu: goto label_31c66c;
        case 0x31c670u: goto label_31c670;
        case 0x31c674u: goto label_31c674;
        case 0x31c678u: goto label_31c678;
        case 0x31c67cu: goto label_31c67c;
        case 0x31c680u: goto label_31c680;
        case 0x31c684u: goto label_31c684;
        case 0x31c688u: goto label_31c688;
        case 0x31c68cu: goto label_31c68c;
        case 0x31c690u: goto label_31c690;
        case 0x31c694u: goto label_31c694;
        case 0x31c698u: goto label_31c698;
        case 0x31c69cu: goto label_31c69c;
        case 0x31c6a0u: goto label_31c6a0;
        case 0x31c6a4u: goto label_31c6a4;
        case 0x31c6a8u: goto label_31c6a8;
        case 0x31c6acu: goto label_31c6ac;
        case 0x31c6b0u: goto label_31c6b0;
        case 0x31c6b4u: goto label_31c6b4;
        case 0x31c6b8u: goto label_31c6b8;
        case 0x31c6bcu: goto label_31c6bc;
        case 0x31c6c0u: goto label_31c6c0;
        case 0x31c6c4u: goto label_31c6c4;
        case 0x31c6c8u: goto label_31c6c8;
        case 0x31c6ccu: goto label_31c6cc;
        case 0x31c6d0u: goto label_31c6d0;
        case 0x31c6d4u: goto label_31c6d4;
        case 0x31c6d8u: goto label_31c6d8;
        case 0x31c6dcu: goto label_31c6dc;
        case 0x31c6e0u: goto label_31c6e0;
        case 0x31c6e4u: goto label_31c6e4;
        case 0x31c6e8u: goto label_31c6e8;
        case 0x31c6ecu: goto label_31c6ec;
        case 0x31c6f0u: goto label_31c6f0;
        case 0x31c6f4u: goto label_31c6f4;
        case 0x31c6f8u: goto label_31c6f8;
        case 0x31c6fcu: goto label_31c6fc;
        case 0x31c700u: goto label_31c700;
        case 0x31c704u: goto label_31c704;
        case 0x31c708u: goto label_31c708;
        case 0x31c70cu: goto label_31c70c;
        case 0x31c710u: goto label_31c710;
        case 0x31c714u: goto label_31c714;
        case 0x31c718u: goto label_31c718;
        case 0x31c71cu: goto label_31c71c;
        case 0x31c720u: goto label_31c720;
        case 0x31c724u: goto label_31c724;
        case 0x31c728u: goto label_31c728;
        case 0x31c72cu: goto label_31c72c;
        case 0x31c730u: goto label_31c730;
        case 0x31c734u: goto label_31c734;
        case 0x31c738u: goto label_31c738;
        case 0x31c73cu: goto label_31c73c;
        case 0x31c740u: goto label_31c740;
        case 0x31c744u: goto label_31c744;
        case 0x31c748u: goto label_31c748;
        case 0x31c74cu: goto label_31c74c;
        case 0x31c750u: goto label_31c750;
        case 0x31c754u: goto label_31c754;
        case 0x31c758u: goto label_31c758;
        case 0x31c75cu: goto label_31c75c;
        case 0x31c760u: goto label_31c760;
        case 0x31c764u: goto label_31c764;
        case 0x31c768u: goto label_31c768;
        case 0x31c76cu: goto label_31c76c;
        case 0x31c770u: goto label_31c770;
        case 0x31c774u: goto label_31c774;
        case 0x31c778u: goto label_31c778;
        case 0x31c77cu: goto label_31c77c;
        case 0x31c780u: goto label_31c780;
        case 0x31c784u: goto label_31c784;
        case 0x31c788u: goto label_31c788;
        case 0x31c78cu: goto label_31c78c;
        case 0x31c790u: goto label_31c790;
        case 0x31c794u: goto label_31c794;
        case 0x31c798u: goto label_31c798;
        case 0x31c79cu: goto label_31c79c;
        case 0x31c7a0u: goto label_31c7a0;
        case 0x31c7a4u: goto label_31c7a4;
        case 0x31c7a8u: goto label_31c7a8;
        case 0x31c7acu: goto label_31c7ac;
        case 0x31c7b0u: goto label_31c7b0;
        case 0x31c7b4u: goto label_31c7b4;
        case 0x31c7b8u: goto label_31c7b8;
        case 0x31c7bcu: goto label_31c7bc;
        case 0x31c7c0u: goto label_31c7c0;
        case 0x31c7c4u: goto label_31c7c4;
        case 0x31c7c8u: goto label_31c7c8;
        case 0x31c7ccu: goto label_31c7cc;
        case 0x31c7d0u: goto label_31c7d0;
        case 0x31c7d4u: goto label_31c7d4;
        case 0x31c7d8u: goto label_31c7d8;
        case 0x31c7dcu: goto label_31c7dc;
        case 0x31c7e0u: goto label_31c7e0;
        case 0x31c7e4u: goto label_31c7e4;
        case 0x31c7e8u: goto label_31c7e8;
        case 0x31c7ecu: goto label_31c7ec;
        case 0x31c7f0u: goto label_31c7f0;
        case 0x31c7f4u: goto label_31c7f4;
        case 0x31c7f8u: goto label_31c7f8;
        case 0x31c7fcu: goto label_31c7fc;
        case 0x31c800u: goto label_31c800;
        case 0x31c804u: goto label_31c804;
        case 0x31c808u: goto label_31c808;
        case 0x31c80cu: goto label_31c80c;
        case 0x31c810u: goto label_31c810;
        case 0x31c814u: goto label_31c814;
        case 0x31c818u: goto label_31c818;
        case 0x31c81cu: goto label_31c81c;
        case 0x31c820u: goto label_31c820;
        case 0x31c824u: goto label_31c824;
        case 0x31c828u: goto label_31c828;
        case 0x31c82cu: goto label_31c82c;
        case 0x31c830u: goto label_31c830;
        case 0x31c834u: goto label_31c834;
        case 0x31c838u: goto label_31c838;
        case 0x31c83cu: goto label_31c83c;
        case 0x31c840u: goto label_31c840;
        case 0x31c844u: goto label_31c844;
        case 0x31c848u: goto label_31c848;
        case 0x31c84cu: goto label_31c84c;
        case 0x31c850u: goto label_31c850;
        case 0x31c854u: goto label_31c854;
        case 0x31c858u: goto label_31c858;
        case 0x31c85cu: goto label_31c85c;
        case 0x31c860u: goto label_31c860;
        case 0x31c864u: goto label_31c864;
        case 0x31c868u: goto label_31c868;
        case 0x31c86cu: goto label_31c86c;
        case 0x31c870u: goto label_31c870;
        case 0x31c874u: goto label_31c874;
        case 0x31c878u: goto label_31c878;
        case 0x31c87cu: goto label_31c87c;
        case 0x31c880u: goto label_31c880;
        case 0x31c884u: goto label_31c884;
        case 0x31c888u: goto label_31c888;
        case 0x31c88cu: goto label_31c88c;
        case 0x31c890u: goto label_31c890;
        case 0x31c894u: goto label_31c894;
        case 0x31c898u: goto label_31c898;
        case 0x31c89cu: goto label_31c89c;
        case 0x31c8a0u: goto label_31c8a0;
        case 0x31c8a4u: goto label_31c8a4;
        case 0x31c8a8u: goto label_31c8a8;
        case 0x31c8acu: goto label_31c8ac;
        case 0x31c8b0u: goto label_31c8b0;
        case 0x31c8b4u: goto label_31c8b4;
        case 0x31c8b8u: goto label_31c8b8;
        case 0x31c8bcu: goto label_31c8bc;
        case 0x31c8c0u: goto label_31c8c0;
        case 0x31c8c4u: goto label_31c8c4;
        case 0x31c8c8u: goto label_31c8c8;
        case 0x31c8ccu: goto label_31c8cc;
        case 0x31c8d0u: goto label_31c8d0;
        case 0x31c8d4u: goto label_31c8d4;
        case 0x31c8d8u: goto label_31c8d8;
        case 0x31c8dcu: goto label_31c8dc;
        case 0x31c8e0u: goto label_31c8e0;
        case 0x31c8e4u: goto label_31c8e4;
        case 0x31c8e8u: goto label_31c8e8;
        case 0x31c8ecu: goto label_31c8ec;
        case 0x31c8f0u: goto label_31c8f0;
        case 0x31c8f4u: goto label_31c8f4;
        case 0x31c8f8u: goto label_31c8f8;
        case 0x31c8fcu: goto label_31c8fc;
        case 0x31c900u: goto label_31c900;
        case 0x31c904u: goto label_31c904;
        case 0x31c908u: goto label_31c908;
        case 0x31c90cu: goto label_31c90c;
        case 0x31c910u: goto label_31c910;
        case 0x31c914u: goto label_31c914;
        case 0x31c918u: goto label_31c918;
        case 0x31c91cu: goto label_31c91c;
        case 0x31c920u: goto label_31c920;
        case 0x31c924u: goto label_31c924;
        case 0x31c928u: goto label_31c928;
        case 0x31c92cu: goto label_31c92c;
        case 0x31c930u: goto label_31c930;
        case 0x31c934u: goto label_31c934;
        case 0x31c938u: goto label_31c938;
        case 0x31c93cu: goto label_31c93c;
        case 0x31c940u: goto label_31c940;
        case 0x31c944u: goto label_31c944;
        case 0x31c948u: goto label_31c948;
        case 0x31c94cu: goto label_31c94c;
        case 0x31c950u: goto label_31c950;
        case 0x31c954u: goto label_31c954;
        case 0x31c958u: goto label_31c958;
        case 0x31c95cu: goto label_31c95c;
        case 0x31c960u: goto label_31c960;
        case 0x31c964u: goto label_31c964;
        case 0x31c968u: goto label_31c968;
        case 0x31c96cu: goto label_31c96c;
        case 0x31c970u: goto label_31c970;
        case 0x31c974u: goto label_31c974;
        case 0x31c978u: goto label_31c978;
        case 0x31c97cu: goto label_31c97c;
        case 0x31c980u: goto label_31c980;
        case 0x31c984u: goto label_31c984;
        case 0x31c988u: goto label_31c988;
        case 0x31c98cu: goto label_31c98c;
        case 0x31c990u: goto label_31c990;
        case 0x31c994u: goto label_31c994;
        case 0x31c998u: goto label_31c998;
        case 0x31c99cu: goto label_31c99c;
        case 0x31c9a0u: goto label_31c9a0;
        case 0x31c9a4u: goto label_31c9a4;
        case 0x31c9a8u: goto label_31c9a8;
        case 0x31c9acu: goto label_31c9ac;
        case 0x31c9b0u: goto label_31c9b0;
        case 0x31c9b4u: goto label_31c9b4;
        case 0x31c9b8u: goto label_31c9b8;
        case 0x31c9bcu: goto label_31c9bc;
        case 0x31c9c0u: goto label_31c9c0;
        case 0x31c9c4u: goto label_31c9c4;
        case 0x31c9c8u: goto label_31c9c8;
        case 0x31c9ccu: goto label_31c9cc;
        case 0x31c9d0u: goto label_31c9d0;
        case 0x31c9d4u: goto label_31c9d4;
        case 0x31c9d8u: goto label_31c9d8;
        case 0x31c9dcu: goto label_31c9dc;
        case 0x31c9e0u: goto label_31c9e0;
        case 0x31c9e4u: goto label_31c9e4;
        case 0x31c9e8u: goto label_31c9e8;
        case 0x31c9ecu: goto label_31c9ec;
        case 0x31c9f0u: goto label_31c9f0;
        case 0x31c9f4u: goto label_31c9f4;
        case 0x31c9f8u: goto label_31c9f8;
        case 0x31c9fcu: goto label_31c9fc;
        case 0x31ca00u: goto label_31ca00;
        case 0x31ca04u: goto label_31ca04;
        case 0x31ca08u: goto label_31ca08;
        case 0x31ca0cu: goto label_31ca0c;
        case 0x31ca10u: goto label_31ca10;
        case 0x31ca14u: goto label_31ca14;
        case 0x31ca18u: goto label_31ca18;
        case 0x31ca1cu: goto label_31ca1c;
        case 0x31ca20u: goto label_31ca20;
        case 0x31ca24u: goto label_31ca24;
        case 0x31ca28u: goto label_31ca28;
        case 0x31ca2cu: goto label_31ca2c;
        case 0x31ca30u: goto label_31ca30;
        case 0x31ca34u: goto label_31ca34;
        case 0x31ca38u: goto label_31ca38;
        case 0x31ca3cu: goto label_31ca3c;
        case 0x31ca40u: goto label_31ca40;
        case 0x31ca44u: goto label_31ca44;
        case 0x31ca48u: goto label_31ca48;
        case 0x31ca4cu: goto label_31ca4c;
        case 0x31ca50u: goto label_31ca50;
        case 0x31ca54u: goto label_31ca54;
        case 0x31ca58u: goto label_31ca58;
        case 0x31ca5cu: goto label_31ca5c;
        case 0x31ca60u: goto label_31ca60;
        case 0x31ca64u: goto label_31ca64;
        case 0x31ca68u: goto label_31ca68;
        case 0x31ca6cu: goto label_31ca6c;
        case 0x31ca70u: goto label_31ca70;
        case 0x31ca74u: goto label_31ca74;
        case 0x31ca78u: goto label_31ca78;
        case 0x31ca7cu: goto label_31ca7c;
        case 0x31ca80u: goto label_31ca80;
        case 0x31ca84u: goto label_31ca84;
        case 0x31ca88u: goto label_31ca88;
        case 0x31ca8cu: goto label_31ca8c;
        case 0x31ca90u: goto label_31ca90;
        case 0x31ca94u: goto label_31ca94;
        case 0x31ca98u: goto label_31ca98;
        case 0x31ca9cu: goto label_31ca9c;
        case 0x31caa0u: goto label_31caa0;
        case 0x31caa4u: goto label_31caa4;
        case 0x31caa8u: goto label_31caa8;
        case 0x31caacu: goto label_31caac;
        case 0x31cab0u: goto label_31cab0;
        case 0x31cab4u: goto label_31cab4;
        case 0x31cab8u: goto label_31cab8;
        case 0x31cabcu: goto label_31cabc;
        case 0x31cac0u: goto label_31cac0;
        case 0x31cac4u: goto label_31cac4;
        case 0x31cac8u: goto label_31cac8;
        case 0x31caccu: goto label_31cacc;
        case 0x31cad0u: goto label_31cad0;
        case 0x31cad4u: goto label_31cad4;
        case 0x31cad8u: goto label_31cad8;
        case 0x31cadcu: goto label_31cadc;
        case 0x31cae0u: goto label_31cae0;
        case 0x31cae4u: goto label_31cae4;
        case 0x31cae8u: goto label_31cae8;
        case 0x31caecu: goto label_31caec;
        case 0x31caf0u: goto label_31caf0;
        case 0x31caf4u: goto label_31caf4;
        case 0x31caf8u: goto label_31caf8;
        case 0x31cafcu: goto label_31cafc;
        case 0x31cb00u: goto label_31cb00;
        case 0x31cb04u: goto label_31cb04;
        case 0x31cb08u: goto label_31cb08;
        case 0x31cb0cu: goto label_31cb0c;
        case 0x31cb10u: goto label_31cb10;
        case 0x31cb14u: goto label_31cb14;
        case 0x31cb18u: goto label_31cb18;
        case 0x31cb1cu: goto label_31cb1c;
        case 0x31cb20u: goto label_31cb20;
        case 0x31cb24u: goto label_31cb24;
        case 0x31cb28u: goto label_31cb28;
        case 0x31cb2cu: goto label_31cb2c;
        case 0x31cb30u: goto label_31cb30;
        case 0x31cb34u: goto label_31cb34;
        case 0x31cb38u: goto label_31cb38;
        case 0x31cb3cu: goto label_31cb3c;
        case 0x31cb40u: goto label_31cb40;
        case 0x31cb44u: goto label_31cb44;
        case 0x31cb48u: goto label_31cb48;
        case 0x31cb4cu: goto label_31cb4c;
        case 0x31cb50u: goto label_31cb50;
        case 0x31cb54u: goto label_31cb54;
        case 0x31cb58u: goto label_31cb58;
        case 0x31cb5cu: goto label_31cb5c;
        case 0x31cb60u: goto label_31cb60;
        case 0x31cb64u: goto label_31cb64;
        case 0x31cb68u: goto label_31cb68;
        case 0x31cb6cu: goto label_31cb6c;
        case 0x31cb70u: goto label_31cb70;
        case 0x31cb74u: goto label_31cb74;
        case 0x31cb78u: goto label_31cb78;
        case 0x31cb7cu: goto label_31cb7c;
        case 0x31cb80u: goto label_31cb80;
        case 0x31cb84u: goto label_31cb84;
        case 0x31cb88u: goto label_31cb88;
        case 0x31cb8cu: goto label_31cb8c;
        case 0x31cb90u: goto label_31cb90;
        case 0x31cb94u: goto label_31cb94;
        case 0x31cb98u: goto label_31cb98;
        case 0x31cb9cu: goto label_31cb9c;
        case 0x31cba0u: goto label_31cba0;
        case 0x31cba4u: goto label_31cba4;
        case 0x31cba8u: goto label_31cba8;
        case 0x31cbacu: goto label_31cbac;
        case 0x31cbb0u: goto label_31cbb0;
        case 0x31cbb4u: goto label_31cbb4;
        case 0x31cbb8u: goto label_31cbb8;
        case 0x31cbbcu: goto label_31cbbc;
        case 0x31cbc0u: goto label_31cbc0;
        case 0x31cbc4u: goto label_31cbc4;
        case 0x31cbc8u: goto label_31cbc8;
        case 0x31cbccu: goto label_31cbcc;
        case 0x31cbd0u: goto label_31cbd0;
        case 0x31cbd4u: goto label_31cbd4;
        case 0x31cbd8u: goto label_31cbd8;
        case 0x31cbdcu: goto label_31cbdc;
        case 0x31cbe0u: goto label_31cbe0;
        case 0x31cbe4u: goto label_31cbe4;
        case 0x31cbe8u: goto label_31cbe8;
        case 0x31cbecu: goto label_31cbec;
        case 0x31cbf0u: goto label_31cbf0;
        case 0x31cbf4u: goto label_31cbf4;
        case 0x31cbf8u: goto label_31cbf8;
        case 0x31cbfcu: goto label_31cbfc;
        case 0x31cc00u: goto label_31cc00;
        case 0x31cc04u: goto label_31cc04;
        case 0x31cc08u: goto label_31cc08;
        case 0x31cc0cu: goto label_31cc0c;
        case 0x31cc10u: goto label_31cc10;
        case 0x31cc14u: goto label_31cc14;
        case 0x31cc18u: goto label_31cc18;
        case 0x31cc1cu: goto label_31cc1c;
        case 0x31cc20u: goto label_31cc20;
        case 0x31cc24u: goto label_31cc24;
        case 0x31cc28u: goto label_31cc28;
        case 0x31cc2cu: goto label_31cc2c;
        case 0x31cc30u: goto label_31cc30;
        case 0x31cc34u: goto label_31cc34;
        case 0x31cc38u: goto label_31cc38;
        case 0x31cc3cu: goto label_31cc3c;
        case 0x31cc40u: goto label_31cc40;
        case 0x31cc44u: goto label_31cc44;
        case 0x31cc48u: goto label_31cc48;
        case 0x31cc4cu: goto label_31cc4c;
        case 0x31cc50u: goto label_31cc50;
        case 0x31cc54u: goto label_31cc54;
        case 0x31cc58u: goto label_31cc58;
        case 0x31cc5cu: goto label_31cc5c;
        case 0x31cc60u: goto label_31cc60;
        case 0x31cc64u: goto label_31cc64;
        case 0x31cc68u: goto label_31cc68;
        case 0x31cc6cu: goto label_31cc6c;
        case 0x31cc70u: goto label_31cc70;
        case 0x31cc74u: goto label_31cc74;
        case 0x31cc78u: goto label_31cc78;
        case 0x31cc7cu: goto label_31cc7c;
        case 0x31cc80u: goto label_31cc80;
        case 0x31cc84u: goto label_31cc84;
        case 0x31cc88u: goto label_31cc88;
        case 0x31cc8cu: goto label_31cc8c;
        case 0x31cc90u: goto label_31cc90;
        case 0x31cc94u: goto label_31cc94;
        case 0x31cc98u: goto label_31cc98;
        case 0x31cc9cu: goto label_31cc9c;
        case 0x31cca0u: goto label_31cca0;
        case 0x31cca4u: goto label_31cca4;
        case 0x31cca8u: goto label_31cca8;
        case 0x31ccacu: goto label_31ccac;
        case 0x31ccb0u: goto label_31ccb0;
        case 0x31ccb4u: goto label_31ccb4;
        case 0x31ccb8u: goto label_31ccb8;
        case 0x31ccbcu: goto label_31ccbc;
        case 0x31ccc0u: goto label_31ccc0;
        case 0x31ccc4u: goto label_31ccc4;
        case 0x31ccc8u: goto label_31ccc8;
        case 0x31ccccu: goto label_31cccc;
        case 0x31ccd0u: goto label_31ccd0;
        case 0x31ccd4u: goto label_31ccd4;
        case 0x31ccd8u: goto label_31ccd8;
        case 0x31ccdcu: goto label_31ccdc;
        case 0x31cce0u: goto label_31cce0;
        case 0x31cce4u: goto label_31cce4;
        case 0x31cce8u: goto label_31cce8;
        case 0x31ccecu: goto label_31ccec;
        case 0x31ccf0u: goto label_31ccf0;
        case 0x31ccf4u: goto label_31ccf4;
        case 0x31ccf8u: goto label_31ccf8;
        case 0x31ccfcu: goto label_31ccfc;
        case 0x31cd00u: goto label_31cd00;
        case 0x31cd04u: goto label_31cd04;
        case 0x31cd08u: goto label_31cd08;
        case 0x31cd0cu: goto label_31cd0c;
        case 0x31cd10u: goto label_31cd10;
        case 0x31cd14u: goto label_31cd14;
        case 0x31cd18u: goto label_31cd18;
        case 0x31cd1cu: goto label_31cd1c;
        case 0x31cd20u: goto label_31cd20;
        case 0x31cd24u: goto label_31cd24;
        case 0x31cd28u: goto label_31cd28;
        case 0x31cd2cu: goto label_31cd2c;
        case 0x31cd30u: goto label_31cd30;
        case 0x31cd34u: goto label_31cd34;
        case 0x31cd38u: goto label_31cd38;
        case 0x31cd3cu: goto label_31cd3c;
        case 0x31cd40u: goto label_31cd40;
        case 0x31cd44u: goto label_31cd44;
        case 0x31cd48u: goto label_31cd48;
        case 0x31cd4cu: goto label_31cd4c;
        case 0x31cd50u: goto label_31cd50;
        case 0x31cd54u: goto label_31cd54;
        case 0x31cd58u: goto label_31cd58;
        case 0x31cd5cu: goto label_31cd5c;
        case 0x31cd60u: goto label_31cd60;
        case 0x31cd64u: goto label_31cd64;
        default: break;
    }

    ctx->pc = 0x31bc30u;

label_31bc30:
    // 0x31bc30: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x31bc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_31bc34:
    // 0x31bc34: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x31bc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
label_31bc38:
    // 0x31bc38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31bc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_31bc3c:
    // 0x31bc3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31bc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_31bc40:
    // 0x31bc40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31bc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_31bc44:
    // 0x31bc44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31bc44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_31bc48:
    // 0x31bc48: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x31bc48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
label_31bc4c:
    // 0x31bc4c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x31bc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_31bc50:
    // 0x31bc50: 0x24439ce0  addiu       $v1, $v0, -0x6320
    ctx->pc = 0x31bc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941920));
label_31bc54:
    // 0x31bc54: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x31bc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_31bc58:
    // 0x31bc58: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x31bc58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_31bc5c:
    // 0x31bc5c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31bc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_31bc60:
    // 0x31bc60: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x31bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_31bc64:
    // 0x31bc64: 0x24429cf0  addiu       $v0, $v0, -0x6310
    ctx->pc = 0x31bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941936));
label_31bc68:
    // 0x31bc68: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x31bc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_31bc6c:
    // 0x31bc6c: 0x78500000  lq          $s0, 0x0($v0)
    ctx->pc = 0x31bc6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_31bc70:
    // 0x31bc70: 0x7c700000  sq          $s0, 0x0($v1)
    ctx->pc = 0x31bc70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 16));
label_31bc74:
    // 0x31bc74: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x31bc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_31bc78:
    // 0x31bc78: 0x24519d00  addiu       $s1, $v0, -0x6300
    ctx->pc = 0x31bc78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941952));
label_31bc7c:
    // 0x31bc7c: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x31bc7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_31bc80:
    // 0x31bc80: 0x7a240000  lq          $a0, 0x0($s1)
    ctx->pc = 0x31bc80u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_31bc84:
    // 0x31bc84: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x31bc84u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
label_31bc88:
    // 0x31bc88: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x31bc88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31bc8c:
    // 0x31bc8c: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x31bc8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_31bc90:
    // 0x31bc90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31bc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_31bc94:
    // 0x31bc94: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x31bc94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_31bc98:
    // 0x31bc98: 0x102002f9  beqz        $at, . + 4 + (0x2F9 << 2)
label_31bc9c:
    if (ctx->pc == 0x31BC9Cu) {
        ctx->pc = 0x31BCA0u;
        goto label_31bca0;
    }
    ctx->pc = 0x31BC98u;
    {
        const bool branch_taken_0x31bc98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bc98) {
            ctx->pc = 0x31C880u;
            goto label_31c880;
        }
    }
    ctx->pc = 0x31BCA0u;
label_31bca0:
    // 0x31bca0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x31bca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_31bca4:
    // 0x31bca4: 0x24641de0  addiu       $a0, $v1, 0x1DE0
    ctx->pc = 0x31bca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 7648));
label_31bca8:
    // 0x31bca8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x31bca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_31bcac:
    // 0x31bcac: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x31bcacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_31bcb0:
    // 0x31bcb0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x31bcb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31bcb4:
    // 0x31bcb4: 0xc00008  jr          $a2
label_31bcb8:
    if (ctx->pc == 0x31BCB8u) {
        ctx->pc = 0x31BCBCu;
        goto label_31bcbc;
    }
    ctx->pc = 0x31BCB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BCB4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x31BCBCu;
label_31bcbc:
    // 0x31bcbc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31bcc0:
    // 0x31bcc0: 0xac4012ac  sw          $zero, 0x12AC($v0)
    ctx->pc = 0x31bcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4780), GPR_U32(ctx, 0));
label_31bcc4:
    // 0x31bcc4: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x31bcc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31bcc8:
    // 0x31bcc8: 0xace012b0  sw          $zero, 0x12B0($a3)
    ctx->pc = 0x31bcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4784), GPR_U32(ctx, 0));
label_31bccc:
    // 0x31bccc: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31bcccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31bcd0:
    // 0x31bcd0: 0xac8012b4  sw          $zero, 0x12B4($a0)
    ctx->pc = 0x31bcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4788), GPR_U32(ctx, 0));
label_31bcd4:
    // 0x31bcd4: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x31bcd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31bcd8:
    // 0x31bcd8: 0xacc012b8  sw          $zero, 0x12B8($a2)
    ctx->pc = 0x31bcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4792), GPR_U32(ctx, 0));
label_31bcdc:
    // 0x31bcdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31bcdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31bce0:
    // 0x31bce0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31bce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31bce4:
    // 0x31bce4: 0xe44012dc  swc1        $f0, 0x12DC($v0)
    ctx->pc = 0x31bce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4828), bits); }
label_31bce8:
    // 0x31bce8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31bce8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31bcec:
    // 0x31bcec: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31bcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31bcf0:
    // 0x31bcf0: 0xe44012e0  swc1        $f0, 0x12E0($v0)
    ctx->pc = 0x31bcf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4832), bits); }
label_31bcf4:
    // 0x31bcf4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31bcf8:
    // 0x31bcf8: 0xac401290  sw          $zero, 0x1290($v0)
    ctx->pc = 0x31bcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4752), GPR_U32(ctx, 0));
label_31bcfc:
    // 0x31bcfc: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x31bcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_31bd00:
    // 0x31bd00: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x31bd00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_31bd04:
    // 0x31bd04: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31bd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31bd08:
    // 0x31bd08: 0xac431330  sw          $v1, 0x1330($v0)
    ctx->pc = 0x31bd08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4912), GPR_U32(ctx, 3));
label_31bd0c:
    // 0x31bd0c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31bd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31bd10:
    // 0x31bd10: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x31bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_31bd14:
    // 0x31bd14: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x31bd14u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_31bd18:
    // 0x31bd18: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x31bd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_31bd1c:
    // 0x31bd1c: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x31bd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
label_31bd20:
    // 0x31bd20: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x31bd20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31bd24:
    // 0x31bd24: 0x24c20120  addiu       $v0, $a2, 0x120
    ctx->pc = 0x31bd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
label_31bd28:
    // 0x31bd28: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x31bd28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_31bd2c:
    // 0x31bd2c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x31bd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31bd30:
    // 0x31bd30: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x31bd30u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_31bd34:
    // 0x31bd34: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x31bd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31bd38:
    // 0x31bd38: 0x3c024743  lui         $v0, 0x4743
    ctx->pc = 0x31bd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18243 << 16));
label_31bd3c:
    // 0x31bd3c: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x31bd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
label_31bd40:
    // 0x31bd40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31bd40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31bd44:
    // 0x31bd44: 0x0  nop
    ctx->pc = 0x31bd44u;
    // NOP
label_31bd48:
    // 0x31bd48: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31bd48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31bd4c:
    // 0x31bd4c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x31bd4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_31bd50:
    // 0x31bd50: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x31bd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_31bd54:
    // 0x31bd54: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x31bd54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_31bd58:
    // 0x31bd58: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x31bd58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31bd5c:
    // 0x31bd5c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31bd5cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31bd60:
    // 0x31bd60: 0xc059e1c  jal         func_167870
label_31bd64:
    if (ctx->pc == 0x31BD64u) {
        ctx->pc = 0x31BD68u;
        goto label_31bd68;
    }
    ctx->pc = 0x31BD60u;
    SET_GPR_U32(ctx, 31, 0x31BD68u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x31BD60u, 0x31BD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BD68u;
label_31bd68:
    // 0x31bd68: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x31bd68u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31bd6c:
    // 0x31bd6c: 0x166000da  bnez        $s3, . + 4 + (0xDA << 2)
label_31bd70:
    if (ctx->pc == 0x31BD70u) {
        ctx->pc = 0x31BD74u;
        goto label_31bd74;
    }
    ctx->pc = 0x31BD6Cu;
    {
        const bool branch_taken_0x31bd6c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x31bd6c) {
            ctx->pc = 0x31C0D8u;
            goto label_31c0d8;
        }
    }
    ctx->pc = 0x31BD74u;
label_31bd74:
    // 0x31bd74: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31bd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31bd78:
    // 0x31bd78: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x31bd78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_31bd7c:
    // 0x31bd7c: 0x34c20002  ori         $v0, $a2, 0x2
    ctx->pc = 0x31bd7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
label_31bd80:
    // 0x31bd80: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x31bd80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_31bd84:
    // 0x31bd84: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x31bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_31bd88:
    // 0x31bd88: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x31bd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_31bd8c:
    // 0x31bd8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31bd8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31bd90:
    // 0x31bd90: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31bd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31bd94:
    // 0x31bd94: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x31bd94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
label_31bd98:
    // 0x31bd98: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x31bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_31bd9c:
    // 0x31bd9c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x31bd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_31bda0:
    // 0x31bda0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31bda0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31bda4:
    // 0x31bda4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31bda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31bda8:
    // 0x31bda8: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x31bda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
label_31bdac:
    // 0x31bdac: 0x3c043e4c  lui         $a0, 0x3E4C
    ctx->pc = 0x31bdacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15948 << 16));
label_31bdb0:
    // 0x31bdb0: 0x3482cccd  ori         $v0, $a0, 0xCCCD
    ctx->pc = 0x31bdb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_31bdb4:
    // 0x31bdb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31bdb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31bdb8:
    // 0x31bdb8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31bdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31bdbc:
    // 0x31bdbc: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x31bdbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
label_31bdc0:
    // 0x31bdc0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31bdc4:
    // 0x31bdc4: 0x9444000e  lhu         $a0, 0xE($v0)
    ctx->pc = 0x31bdc4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_31bdc8:
    // 0x31bdc8: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x31bdc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_31bdcc:
    // 0x31bdcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31bdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31bdd0:
    // 0x31bdd0: 0x10620058  beq         $v1, $v0, . + 4 + (0x58 << 2)
label_31bdd4:
    if (ctx->pc == 0x31BDD4u) {
        ctx->pc = 0x31BDD8u;
        goto label_31bdd8;
    }
    ctx->pc = 0x31BDD0u;
    {
        const bool branch_taken_0x31bdd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31bdd0) {
            ctx->pc = 0x31BF34u;
            goto label_31bf34;
        }
    }
    ctx->pc = 0x31BDD8u;
label_31bdd8:
    // 0x31bdd8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_31bddc:
    if (ctx->pc == 0x31BDDCu) {
        ctx->pc = 0x31BDE0u;
        goto label_31bde0;
    }
    ctx->pc = 0x31BDD8u;
    {
        const bool branch_taken_0x31bdd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bdd8) {
            ctx->pc = 0x31BDE8u;
            goto label_31bde8;
        }
    }
    ctx->pc = 0x31BDE0u;
label_31bde0:
    // 0x31bde0: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_31bde4:
    if (ctx->pc == 0x31BDE4u) {
        ctx->pc = 0x31BDE8u;
        goto label_31bde8;
    }
    ctx->pc = 0x31BDE0u;
    {
        const bool branch_taken_0x31bde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bde0) {
            ctx->pc = 0x31C080u;
            goto label_31c080;
        }
    }
    ctx->pc = 0x31BDE8u;
label_31bde8:
    // 0x31bde8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x31bde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_31bdec:
    // 0x31bdec: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31bdf0:
    // 0x31bdf0: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x31bdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_31bdf4:
    // 0x31bdf4: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x31bdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
label_31bdf8:
    // 0x31bdf8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x31bdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_31bdfc:
    // 0x31bdfc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31bdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31be00:
    // 0x31be00: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x31be00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_31be04:
    // 0x31be04: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x31be04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
label_31be08:
    // 0x31be08: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x31be08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_31be0c:
    // 0x31be0c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31be0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31be10:
    // 0x31be10: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x31be10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_31be14:
    // 0x31be14: 0xac640068  sw          $a0, 0x68($v1)
    ctx->pc = 0x31be14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 4));
label_31be18:
    // 0x31be18: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31be18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31be1c:
    // 0x31be1c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x31be1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_31be20:
    // 0x31be20: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x31be20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
label_31be24:
    // 0x31be24: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31be24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31be28:
    // 0x31be28: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x31be28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_31be2c:
    // 0x31be2c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x31be2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_31be30:
    // 0x31be30: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x31be30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_31be34:
    // 0x31be34: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31be34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_31be38:
    // 0x31be38: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x31be38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
label_31be3c:
    // 0x31be3c: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x31be3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_31be40:
    // 0x31be40: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x31be40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_31be44:
    // 0x31be44: 0x24046102  addiu       $a0, $zero, 0x6102
    ctx->pc = 0x31be44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24834));
label_31be48:
    // 0x31be48: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31be48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31be4c:
    // 0x31be4c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31be4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_31be50:
    // 0x31be50: 0xc062f5c  jal         func_18BD70
label_31be54:
    if (ctx->pc == 0x31BE54u) {
        ctx->pc = 0x31BE58u;
        goto label_31be58;
    }
    ctx->pc = 0x31BE50u;
    SET_GPR_U32(ctx, 31, 0x31BE58u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31BE50u, 0x31BE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BE58u;
label_31be58:
    // 0x31be58: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31be58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31be5c:
    // 0x31be5c: 0xc0630a8  jal         func_18C2A0
label_31be60:
    if (ctx->pc == 0x31BE60u) {
        ctx->pc = 0x31BE64u;
        goto label_31be64;
    }
    ctx->pc = 0x31BE5Cu;
    SET_GPR_U32(ctx, 31, 0x31BE64u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31BE5Cu, 0x31BE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BE64u;
label_31be64:
    // 0x31be64: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31be64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31be68:
    // 0x31be68: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x31be68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_31be6c:
    // 0x31be6c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x31be6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_31be70:
    // 0x31be70: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x31be70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_31be74:
    // 0x31be74: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x31be74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_31be78:
    // 0x31be78: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x31be78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
label_31be7c:
    // 0x31be7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31be7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_31be80:
    // 0x31be80: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x31be80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_31be84:
    // 0x31be84: 0x24046202  addiu       $a0, $zero, 0x6202
    ctx->pc = 0x31be84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25090));
label_31be88:
    // 0x31be88: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31be88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31be8c:
    // 0x31be8c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31be8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_31be90:
    // 0x31be90: 0xc062f5c  jal         func_18BD70
label_31be94:
    if (ctx->pc == 0x31BE94u) {
        ctx->pc = 0x31BE98u;
        goto label_31be98;
    }
    ctx->pc = 0x31BE90u;
    SET_GPR_U32(ctx, 31, 0x31BE98u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31BE90u, 0x31BE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BE98u;
label_31be98:
    // 0x31be98: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31be98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31be9c:
    // 0x31be9c: 0xc0630a8  jal         func_18C2A0
label_31bea0:
    if (ctx->pc == 0x31BEA0u) {
        ctx->pc = 0x31BEA4u;
        goto label_31bea4;
    }
    ctx->pc = 0x31BE9Cu;
    SET_GPR_U32(ctx, 31, 0x31BEA4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31BE9Cu, 0x31BEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BEA4u;
label_31bea4:
    // 0x31bea4: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x31bea4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31bea8:
    // 0x31bea8: 0x8ce40130  lw          $a0, 0x130($a3)
    ctx->pc = 0x31bea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
label_31beac:
    // 0x31beac: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x31beacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
label_31beb0:
    // 0x31beb0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x31beb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_31beb4:
    // 0x31beb4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31beb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_31beb8:
    // 0x31beb8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31beb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_31bebc:
    // 0x31bebc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31bebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_31bec0:
    // 0x31bec0: 0xc23824  and         $a3, $a2, $v0
    ctx->pc = 0x31bec0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_31bec4:
    // 0x31bec4: 0x2404490a  addiu       $a0, $zero, 0x490A
    ctx->pc = 0x31bec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18698));
label_31bec8:
    // 0x31bec8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31bec8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31becc:
    // 0x31becc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31beccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_31bed0:
    // 0x31bed0: 0xc062f5c  jal         func_18BD70
label_31bed4:
    if (ctx->pc == 0x31BED4u) {
        ctx->pc = 0x31BED8u;
        goto label_31bed8;
    }
    ctx->pc = 0x31BED0u;
    SET_GPR_U32(ctx, 31, 0x31BED8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31BED0u, 0x31BED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BED8u;
label_31bed8:
    // 0x31bed8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31bed8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31bedc:
    // 0x31bedc: 0xc0630a8  jal         func_18C2A0
label_31bee0:
    if (ctx->pc == 0x31BEE0u) {
        ctx->pc = 0x31BEE4u;
        goto label_31bee4;
    }
    ctx->pc = 0x31BEDCu;
    SET_GPR_U32(ctx, 31, 0x31BEE4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31BEDCu, 0x31BEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BEE4u;
label_31bee4:
    // 0x31bee4: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x31bee4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31bee8:
    // 0x31bee8: 0x8ce40130  lw          $a0, 0x130($a3)
    ctx->pc = 0x31bee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
label_31beec:
    // 0x31beec: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x31beecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
label_31bef0:
    // 0x31bef0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x31bef0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_31bef4:
    // 0x31bef4: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x31bef4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_31bef8:
    // 0x31bef8: 0x48438  dsll        $s0, $a0, 16
    ctx->pc = 0x31bef8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) << 16);
label_31befc:
    // 0x31befc: 0x3603ffff  ori         $v1, $s0, 0xFFFF
    ctx->pc = 0x31befcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
label_31bf00:
    // 0x31bf00: 0xc33824  and         $a3, $a2, $v1
    ctx->pc = 0x31bf00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_31bf04:
    // 0x31bf04: 0x2404490b  addiu       $a0, $zero, 0x490B
    ctx->pc = 0x31bf04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18699));
label_31bf08:
    // 0x31bf08: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31bf08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31bf0c:
    // 0x31bf0c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31bf0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_31bf10:
    // 0x31bf10: 0xc062f5c  jal         func_18BD70
label_31bf14:
    if (ctx->pc == 0x31BF14u) {
        ctx->pc = 0x31BF18u;
        goto label_31bf18;
    }
    ctx->pc = 0x31BF10u;
    SET_GPR_U32(ctx, 31, 0x31BF18u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31BF10u, 0x31BF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BF18u;
label_31bf18:
    // 0x31bf18: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x31bf18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31bf1c:
    // 0x31bf1c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x31bf1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_31bf20:
    // 0x31bf20: 0xc0630a8  jal         func_18C2A0
label_31bf24:
    if (ctx->pc == 0x31BF24u) {
        ctx->pc = 0x31BF28u;
        goto label_31bf28;
    }
    ctx->pc = 0x31BF20u;
    SET_GPR_U32(ctx, 31, 0x31BF28u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31BF20u, 0x31BF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BF28u;
label_31bf28:
    // 0x31bf28: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x31bf28u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31bf2c:
    // 0x31bf2c: 0x10000054  b           . + 4 + (0x54 << 2)
label_31bf30:
    if (ctx->pc == 0x31BF30u) {
        ctx->pc = 0x31BF34u;
        goto label_31bf34;
    }
    ctx->pc = 0x31BF2Cu;
    {
        const bool branch_taken_0x31bf2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bf2c) {
            ctx->pc = 0x31C080u;
            goto label_31c080;
        }
    }
    ctx->pc = 0x31BF34u;
label_31bf34:
    // 0x31bf34: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x31bf34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_31bf38:
    // 0x31bf38: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31bf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31bf3c:
    // 0x31bf3c: 0x8c860058  lw          $a2, 0x58($a0)
    ctx->pc = 0x31bf3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_31bf40:
    // 0x31bf40: 0xacc70060  sw          $a3, 0x60($a2)
    ctx->pc = 0x31bf40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 96), GPR_U32(ctx, 7));
label_31bf44:
    // 0x31bf44: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x31bf44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_31bf48:
    // 0x31bf48: 0x8fb100c8  lw          $s1, 0xC8($sp)
    ctx->pc = 0x31bf48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31bf4c:
    // 0x31bf4c: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x31bf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_31bf50:
    // 0x31bf50: 0xac640064  sw          $a0, 0x64($v1)
    ctx->pc = 0x31bf50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 4));
label_31bf54:
    // 0x31bf54: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x31bf54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_31bf58:
    // 0x31bf58: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31bf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31bf5c:
    // 0x31bf5c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x31bf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_31bf60:
    // 0x31bf60: 0xac640068  sw          $a0, 0x68($v1)
    ctx->pc = 0x31bf60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 4));
label_31bf64:
    // 0x31bf64: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31bf64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31bf68:
    // 0x31bf68: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x31bf68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_31bf6c:
    // 0x31bf6c: 0xac60006c  sw          $zero, 0x6C($v1)
    ctx->pc = 0x31bf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 0));
label_31bf70:
    // 0x31bf70: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31bf70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31bf74:
    // 0x31bf74: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x31bf74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_31bf78:
    // 0x31bf78: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x31bf78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
label_31bf7c:
    // 0x31bf7c: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x31bf7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
label_31bf80:
    // 0x31bf80: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x31bf80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_31bf84:
    // 0x31bf84: 0x43438  dsll        $a2, $a0, 16
    ctx->pc = 0x31bf84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 16);
label_31bf88:
    // 0x31bf88: 0x34c4ffff  ori         $a0, $a2, 0xFFFF
    ctx->pc = 0x31bf88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_31bf8c:
    // 0x31bf8c: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x31bf8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
label_31bf90:
    // 0x31bf90: 0x24046107  addiu       $a0, $zero, 0x6107
    ctx->pc = 0x31bf90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24839));
label_31bf94:
    // 0x31bf94: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31bf94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31bf98:
    // 0x31bf98: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31bf98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_31bf9c:
    // 0x31bf9c: 0xc062f5c  jal         func_18BD70
label_31bfa0:
    if (ctx->pc == 0x31BFA0u) {
        ctx->pc = 0x31BFA4u;
        goto label_31bfa4;
    }
    ctx->pc = 0x31BF9Cu;
    SET_GPR_U32(ctx, 31, 0x31BFA4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31BF9Cu, 0x31BFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BFA4u;
label_31bfa4:
    // 0x31bfa4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31bfa4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31bfa8:
    // 0x31bfa8: 0xc0630a8  jal         func_18C2A0
label_31bfac:
    if (ctx->pc == 0x31BFACu) {
        ctx->pc = 0x31BFB0u;
        goto label_31bfb0;
    }
    ctx->pc = 0x31BFA8u;
    SET_GPR_U32(ctx, 31, 0x31BFB0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31BFA8u, 0x31BFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BFB0u;
label_31bfb0:
    // 0x31bfb0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x31bfb0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31bfb4:
    // 0x31bfb4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31bfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31bfb8:
    // 0x31bfb8: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x31bfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_31bfbc:
    // 0x31bfbc: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x31bfbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
label_31bfc0:
    // 0x31bfc0: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x31bfc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
label_31bfc4:
    // 0x31bfc4: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x31bfc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_31bfc8:
    // 0x31bfc8: 0x43438  dsll        $a2, $a0, 16
    ctx->pc = 0x31bfc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 16);
label_31bfcc:
    // 0x31bfcc: 0x34c2ffff  ori         $v0, $a2, 0xFFFF
    ctx->pc = 0x31bfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_31bfd0:
    // 0x31bfd0: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x31bfd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_31bfd4:
    // 0x31bfd4: 0x24046207  addiu       $a0, $zero, 0x6207
    ctx->pc = 0x31bfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25095));
label_31bfd8:
    // 0x31bfd8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31bfd8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31bfdc:
    // 0x31bfdc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31bfdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_31bfe0:
    // 0x31bfe0: 0xc062f5c  jal         func_18BD70
label_31bfe4:
    if (ctx->pc == 0x31BFE4u) {
        ctx->pc = 0x31BFE8u;
        goto label_31bfe8;
    }
    ctx->pc = 0x31BFE0u;
    SET_GPR_U32(ctx, 31, 0x31BFE8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31BFE0u, 0x31BFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BFE8u;
label_31bfe8:
    // 0x31bfe8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31bfe8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31bfec:
    // 0x31bfec: 0xc0630a8  jal         func_18C2A0
label_31bff0:
    if (ctx->pc == 0x31BFF0u) {
        ctx->pc = 0x31BFF4u;
        goto label_31bff4;
    }
    ctx->pc = 0x31BFECu;
    SET_GPR_U32(ctx, 31, 0x31BFF4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31BFECu, 0x31BFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BFF4u;
label_31bff4:
    // 0x31bff4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x31bff4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31bff8:
    // 0x31bff8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31bff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31bffc:
    // 0x31bffc: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x31bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_31c000:
    // 0x31c000: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x31c000u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
label_31c004:
    // 0x31c004: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x31c004u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
label_31c008:
    // 0x31c008: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x31c008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_31c00c:
    // 0x31c00c: 0x43438  dsll        $a2, $a0, 16
    ctx->pc = 0x31c00cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 16);
label_31c010:
    // 0x31c010: 0x34c2ffff  ori         $v0, $a2, 0xFFFF
    ctx->pc = 0x31c010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_31c014:
    // 0x31c014: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x31c014u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_31c018:
    // 0x31c018: 0x2404490c  addiu       $a0, $zero, 0x490C
    ctx->pc = 0x31c018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18700));
label_31c01c:
    // 0x31c01c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31c01cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31c020:
    // 0x31c020: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31c020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_31c024:
    // 0x31c024: 0xc062f5c  jal         func_18BD70
label_31c028:
    if (ctx->pc == 0x31C028u) {
        ctx->pc = 0x31C02Cu;
        goto label_31c02c;
    }
    ctx->pc = 0x31C024u;
    SET_GPR_U32(ctx, 31, 0x31C02Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31C024u, 0x31C02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C02Cu;
label_31c02c:
    // 0x31c02c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31c02cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31c030:
    // 0x31c030: 0xc0630a8  jal         func_18C2A0
label_31c034:
    if (ctx->pc == 0x31C034u) {
        ctx->pc = 0x31C038u;
        goto label_31c038;
    }
    ctx->pc = 0x31C030u;
    SET_GPR_U32(ctx, 31, 0x31C038u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31C030u, 0x31C038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C038u;
label_31c038:
    // 0x31c038: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x31c038u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31c03c:
    // 0x31c03c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c040:
    // 0x31c040: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x31c040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_31c044:
    // 0x31c044: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x31c044u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
label_31c048:
    // 0x31c048: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x31c048u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
label_31c04c:
    // 0x31c04c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x31c04cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_31c050:
    // 0x31c050: 0x43438  dsll        $a2, $a0, 16
    ctx->pc = 0x31c050u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 16);
label_31c054:
    // 0x31c054: 0x34c2ffff  ori         $v0, $a2, 0xFFFF
    ctx->pc = 0x31c054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_31c058:
    // 0x31c058: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x31c058u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_31c05c:
    // 0x31c05c: 0x2404490d  addiu       $a0, $zero, 0x490D
    ctx->pc = 0x31c05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18701));
label_31c060:
    // 0x31c060: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31c060u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31c064:
    // 0x31c064: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31c064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_31c068:
    // 0x31c068: 0xc062f5c  jal         func_18BD70
label_31c06c:
    if (ctx->pc == 0x31C06Cu) {
        ctx->pc = 0x31C070u;
        goto label_31c070;
    }
    ctx->pc = 0x31C068u;
    SET_GPR_U32(ctx, 31, 0x31C070u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31C068u, 0x31C070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C070u;
label_31c070:
    // 0x31c070: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31c070u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31c074:
    // 0x31c074: 0xc0630a8  jal         func_18C2A0
label_31c078:
    if (ctx->pc == 0x31C078u) {
        ctx->pc = 0x31C07Cu;
        goto label_31c07c;
    }
    ctx->pc = 0x31C074u;
    SET_GPR_U32(ctx, 31, 0x31C07Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31C074u, 0x31C07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C07Cu;
label_31c07c:
    // 0x31c07c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x31c07cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31c080:
    // 0x31c080: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31c080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_31c084:
    // 0x31c084: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x31c084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958320)));
label_31c088:
    // 0x31c088: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x31c088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31c08c:
    // 0x31c08c: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x31c08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_31c090:
    // 0x31c090: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31c090u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31c094:
    // 0x31c094: 0x0  nop
    ctx->pc = 0x31c094u;
    // NOP
label_31c098:
    // 0x31c098: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31c098u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_31c09c:
    // 0x31c09c: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x31c09cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c0a0:
    // 0x31c0a0: 0xe4e00124  swc1        $f0, 0x124($a3)
    ctx->pc = 0x31c0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 292), bits); }
label_31c0a4:
    // 0x31c0a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x31c0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31c0a8:
    // 0x31c0a8: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x31c0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c0ac:
    // 0x31c0ac: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x31c0acu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
label_31c0b0:
    // 0x31c0b0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c0b4:
    // 0x31c0b4: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x31c0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_31c0b8:
    // 0x31c0b8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c0bc:
    // 0x31c0bc: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x31c0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_31c0c0:
    // 0x31c0c0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c0c4:
    // 0x31c0c4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x31c0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
label_31c0c8:
    // 0x31c0c8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c0cc:
    // 0x31c0cc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x31c0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_31c0d0:
    // 0x31c0d0: 0x100001eb  b           . + 4 + (0x1EB << 2)
label_31c0d4:
    if (ctx->pc == 0x31C0D4u) {
        ctx->pc = 0x31C0D8u;
        goto label_31c0d8;
    }
    ctx->pc = 0x31C0D0u;
    {
        const bool branch_taken_0x31c0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c0d0) {
            ctx->pc = 0x31C880u;
            goto label_31c880;
        }
    }
    ctx->pc = 0x31C0D8u;
label_31c0d8:
    // 0x31c0d8: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x31c0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31c0dc:
    // 0x31c0dc: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31c0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c0e0:
    // 0x31c0e0: 0xe48012cc  swc1        $f0, 0x12CC($a0)
    ctx->pc = 0x31c0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4812), bits); }
label_31c0e4:
    // 0x31c0e4: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x31c0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_31c0e8:
    // 0x31c0e8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31c0e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_31c0ec:
    // 0x31c0ec: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c0f0:
    // 0x31c0f0: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x31c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_31c0f4:
    // 0x31c0f4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31c0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_31c0f8:
    // 0x31c0f8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c0fc:
    // 0x31c0fc: 0xc4611304  lwc1        $f1, 0x1304($v1)
    ctx->pc = 0x31c0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31c100:
    // 0x31c100: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x31c100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_31c104:
    // 0x31c104: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31c104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31c108:
    // 0x31c108: 0x0  nop
    ctx->pc = 0x31c108u;
    // NOP
label_31c10c:
    // 0x31c10c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31c10cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31c110:
    // 0x31c110: 0xe4601304  swc1        $f0, 0x1304($v1)
    ctx->pc = 0x31c110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4868), bits); }
label_31c114:
    // 0x31c114: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c118:
    // 0x31c118: 0x8c621290  lw          $v0, 0x1290($v1)
    ctx->pc = 0x31c118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4752)));
label_31c11c:
    // 0x31c11c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x31c11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_31c120:
    // 0x31c120: 0xac621290  sw          $v0, 0x1290($v1)
    ctx->pc = 0x31c120u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 2));
label_31c124:
    // 0x31c124: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31c124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c128:
    // 0x31c128: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x31c128u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_31c12c:
    // 0x31c12c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x31c12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_31c130:
    // 0x31c130: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x31c130u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_31c134:
    // 0x31c134: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c138:
    // 0x31c138: 0x8c421294  lw          $v0, 0x1294($v0)
    ctx->pc = 0x31c138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4756)));
label_31c13c:
    // 0x31c13c: 0x1440008b  bnez        $v0, . + 4 + (0x8B << 2)
label_31c140:
    if (ctx->pc == 0x31C140u) {
        ctx->pc = 0x31C144u;
        goto label_31c144;
    }
    ctx->pc = 0x31C13Cu;
    {
        const bool branch_taken_0x31c13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c13c) {
            ctx->pc = 0x31C36Cu;
            goto label_31c36c;
        }
    }
    ctx->pc = 0x31C144u;
label_31c144:
    // 0x31c144: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c148:
    // 0x31c148: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x31c148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_31c14c:
    // 0x31c14c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x31c14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_31c150:
    // 0x31c150: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x31c150u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_31c154:
    // 0x31c154: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31c154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31c158:
    // 0x31c158: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31c158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c15c:
    // 0x31c15c: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x31c15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
label_31c160:
    // 0x31c160: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31c160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31c164:
    // 0x31c164: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c168:
    // 0x31c168: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x31c168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
label_31c16c:
    // 0x31c16c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31c16cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31c170:
    // 0x31c170: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c174:
    // 0x31c174: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x31c174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
label_31c178:
    // 0x31c178: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c17c:
    // 0x31c17c: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x31c17cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_31c180:
    // 0x31c180: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x31c180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_31c184:
    // 0x31c184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31c184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31c188:
    // 0x31c188: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_31c18c:
    if (ctx->pc == 0x31C18Cu) {
        ctx->pc = 0x31C190u;
        goto label_31c190;
    }
    ctx->pc = 0x31C188u;
    {
        const bool branch_taken_0x31c188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31c188) {
            ctx->pc = 0x31C1E4u;
            goto label_31c1e4;
        }
    }
    ctx->pc = 0x31C190u;
label_31c190:
    // 0x31c190: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_31c194:
    if (ctx->pc == 0x31C194u) {
        ctx->pc = 0x31C198u;
        goto label_31c198;
    }
    ctx->pc = 0x31C190u;
    {
        const bool branch_taken_0x31c190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c190) {
            ctx->pc = 0x31C1A0u;
            goto label_31c1a0;
        }
    }
    ctx->pc = 0x31C198u;
label_31c198:
    // 0x31c198: 0x10000021  b           . + 4 + (0x21 << 2)
label_31c19c:
    if (ctx->pc == 0x31C19Cu) {
        ctx->pc = 0x31C1A0u;
        goto label_31c1a0;
    }
    ctx->pc = 0x31C198u;
    {
        const bool branch_taken_0x31c198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c198) {
            ctx->pc = 0x31C220u;
            goto label_31c220;
        }
    }
    ctx->pc = 0x31C1A0u;
label_31c1a0:
    // 0x31c1a0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x31c1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_31c1a4:
    // 0x31c1a4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c1a8:
    // 0x31c1a8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x31c1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_31c1ac:
    // 0x31c1ac: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x31c1acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
label_31c1b0:
    // 0x31c1b0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x31c1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_31c1b4:
    // 0x31c1b4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c1b8:
    // 0x31c1b8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x31c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_31c1bc:
    // 0x31c1bc: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x31c1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
label_31c1c0:
    // 0x31c1c0: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x31c1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_31c1c4:
    // 0x31c1c4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c1c8:
    // 0x31c1c8: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x31c1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_31c1cc:
    // 0x31c1cc: 0xac640068  sw          $a0, 0x68($v1)
    ctx->pc = 0x31c1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 4));
label_31c1d0:
    // 0x31c1d0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c1d4:
    // 0x31c1d4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x31c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_31c1d8:
    // 0x31c1d8: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x31c1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
label_31c1dc:
    // 0x31c1dc: 0x10000010  b           . + 4 + (0x10 << 2)
label_31c1e0:
    if (ctx->pc == 0x31C1E0u) {
        ctx->pc = 0x31C1E4u;
        goto label_31c1e4;
    }
    ctx->pc = 0x31C1DCu;
    {
        const bool branch_taken_0x31c1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c1dc) {
            ctx->pc = 0x31C220u;
            goto label_31c220;
        }
    }
    ctx->pc = 0x31C1E4u;
label_31c1e4:
    // 0x31c1e4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x31c1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_31c1e8:
    // 0x31c1e8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c1ec:
    // 0x31c1ec: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x31c1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_31c1f0:
    // 0x31c1f0: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x31c1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
label_31c1f4:
    // 0x31c1f4: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x31c1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_31c1f8:
    // 0x31c1f8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31c1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c1fc:
    // 0x31c1fc: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x31c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_31c200:
    // 0x31c200: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x31c200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
label_31c204:
    // 0x31c204: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x31c204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_31c208:
    // 0x31c208: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c20c:
    // 0x31c20c: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x31c20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_31c210:
    // 0x31c210: 0xac830068  sw          $v1, 0x68($a0)
    ctx->pc = 0x31c210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 3));
label_31c214:
    // 0x31c214: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c218:
    // 0x31c218: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x31c218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_31c21c:
    // 0x31c21c: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x31c21cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
label_31c220:
    // 0x31c220: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c224:
    // 0x31c224: 0x9443000e  lhu         $v1, 0xE($v0)
    ctx->pc = 0x31c224u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_31c228:
    // 0x31c228: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x31c228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_31c22c:
    // 0x31c22c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31c22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31c230:
    // 0x31c230: 0x10430027  beq         $v0, $v1, . + 4 + (0x27 << 2)
label_31c234:
    if (ctx->pc == 0x31C234u) {
        ctx->pc = 0x31C238u;
        goto label_31c238;
    }
    ctx->pc = 0x31C230u;
    {
        const bool branch_taken_0x31c230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x31c230) {
            ctx->pc = 0x31C2D0u;
            goto label_31c2d0;
        }
    }
    ctx->pc = 0x31C238u;
label_31c238:
    // 0x31c238: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_31c23c:
    if (ctx->pc == 0x31C23Cu) {
        ctx->pc = 0x31C240u;
        goto label_31c240;
    }
    ctx->pc = 0x31C238u;
    {
        const bool branch_taken_0x31c238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c238) {
            ctx->pc = 0x31C248u;
            goto label_31c248;
        }
    }
    ctx->pc = 0x31C240u;
label_31c240:
    // 0x31c240: 0x10000044  b           . + 4 + (0x44 << 2)
label_31c244:
    if (ctx->pc == 0x31C244u) {
        ctx->pc = 0x31C248u;
        goto label_31c248;
    }
    ctx->pc = 0x31C240u;
    {
        const bool branch_taken_0x31c240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c240) {
            ctx->pc = 0x31C354u;
            goto label_31c354;
        }
    }
    ctx->pc = 0x31C248u;
label_31c248:
    // 0x31c248: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c24c:
    // 0x31c24c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x31c24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_31c250:
    // 0x31c250: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31c250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_31c254:
    // 0x31c254: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31c254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_31c258:
    // 0x31c258: 0x3410ffff  ori         $s0, $zero, 0xFFFF
    ctx->pc = 0x31c258u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_31c25c:
    // 0x31c25c: 0x101438  dsll        $v0, $s0, 16
    ctx->pc = 0x31c25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << 16);
label_31c260:
    // 0x31c260: 0x3451ffff  ori         $s1, $v0, 0xFFFF
    ctx->pc = 0x31c260u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_31c264:
    // 0x31c264: 0x713824  and         $a3, $v1, $s1
    ctx->pc = 0x31c264u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
label_31c268:
    // 0x31c268: 0x24046102  addiu       $a0, $zero, 0x6102
    ctx->pc = 0x31c268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24834));
label_31c26c:
    // 0x31c26c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31c26cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31c270:
    // 0x31c270: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31c270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_31c274:
    // 0x31c274: 0xc062f5c  jal         func_18BD70
label_31c278:
    if (ctx->pc == 0x31C278u) {
        ctx->pc = 0x31C27Cu;
        goto label_31c27c;
    }
    ctx->pc = 0x31C274u;
    SET_GPR_U32(ctx, 31, 0x31C27Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31C274u, 0x31C27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C27Cu;
label_31c27c:
    // 0x31c27c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31c27cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31c280:
    // 0x31c280: 0xc0630a8  jal         func_18C2A0
label_31c284:
    if (ctx->pc == 0x31C284u) {
        ctx->pc = 0x31C288u;
        goto label_31c288;
    }
    ctx->pc = 0x31C280u;
    SET_GPR_U32(ctx, 31, 0x31C288u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31C280u, 0x31C288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C288u;
label_31c288:
    // 0x31c288: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c28c:
    // 0x31c28c: 0x8c640130  lw          $a0, 0x130($v1)
    ctx->pc = 0x31c28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_31c290:
    // 0x31c290: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x31c290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_31c294:
    // 0x31c294: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31c294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_31c298:
    // 0x31c298: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x31c298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_31c29c:
    // 0x31c29c: 0x43438  dsll        $a2, $a0, 16
    ctx->pc = 0x31c29cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 16);
label_31c2a0:
    // 0x31c2a0: 0x34c2ffff  ori         $v0, $a2, 0xFFFF
    ctx->pc = 0x31c2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_31c2a4:
    // 0x31c2a4: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31c2a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_31c2a8:
    // 0x31c2a8: 0x24046202  addiu       $a0, $zero, 0x6202
    ctx->pc = 0x31c2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25090));
label_31c2ac:
    // 0x31c2ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31c2acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31c2b0:
    // 0x31c2b0: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31c2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_31c2b4:
    // 0x31c2b4: 0xc062f5c  jal         func_18BD70
label_31c2b8:
    if (ctx->pc == 0x31C2B8u) {
        ctx->pc = 0x31C2BCu;
        goto label_31c2bc;
    }
    ctx->pc = 0x31C2B4u;
    SET_GPR_U32(ctx, 31, 0x31C2BCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31C2B4u, 0x31C2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C2BCu;
label_31c2bc:
    // 0x31c2bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31c2bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31c2c0:
    // 0x31c2c0: 0xc0630a8  jal         func_18C2A0
label_31c2c4:
    if (ctx->pc == 0x31C2C4u) {
        ctx->pc = 0x31C2C8u;
        goto label_31c2c8;
    }
    ctx->pc = 0x31C2C0u;
    SET_GPR_U32(ctx, 31, 0x31C2C8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31C2C0u, 0x31C2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C2C8u;
label_31c2c8:
    // 0x31c2c8: 0x10000022  b           . + 4 + (0x22 << 2)
label_31c2cc:
    if (ctx->pc == 0x31C2CCu) {
        ctx->pc = 0x31C2D0u;
        goto label_31c2d0;
    }
    ctx->pc = 0x31C2C8u;
    {
        const bool branch_taken_0x31c2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c2c8) {
            ctx->pc = 0x31C354u;
            goto label_31c354;
        }
    }
    ctx->pc = 0x31C2D0u;
label_31c2d0:
    // 0x31c2d0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c2d4:
    // 0x31c2d4: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x31c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_31c2d8:
    // 0x31c2d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x31c2d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_31c2dc:
    // 0x31c2dc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31c2dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_31c2e0:
    // 0x31c2e0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31c2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_31c2e4:
    // 0x31c2e4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31c2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_31c2e8:
    // 0x31c2e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31c2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_31c2ec:
    // 0x31c2ec: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31c2ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_31c2f0:
    // 0x31c2f0: 0x24046107  addiu       $a0, $zero, 0x6107
    ctx->pc = 0x31c2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24839));
label_31c2f4:
    // 0x31c2f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31c2f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31c2f8:
    // 0x31c2f8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31c2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_31c2fc:
    // 0x31c2fc: 0xc062f5c  jal         func_18BD70
label_31c300:
    if (ctx->pc == 0x31C300u) {
        ctx->pc = 0x31C304u;
        goto label_31c304;
    }
    ctx->pc = 0x31C2FCu;
    SET_GPR_U32(ctx, 31, 0x31C304u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31C2FCu, 0x31C304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C304u;
label_31c304:
    // 0x31c304: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31c304u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31c308:
    // 0x31c308: 0xc0630a8  jal         func_18C2A0
label_31c30c:
    if (ctx->pc == 0x31C30Cu) {
        ctx->pc = 0x31C310u;
        goto label_31c310;
    }
    ctx->pc = 0x31C308u;
    SET_GPR_U32(ctx, 31, 0x31C310u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31C308u, 0x31C310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C310u;
label_31c310:
    // 0x31c310: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c314:
    // 0x31c314: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x31c314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_31c318:
    // 0x31c318: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31c318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_31c31c:
    // 0x31c31c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x31c31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_31c320:
    // 0x31c320: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x31c320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_31c324:
    // 0x31c324: 0x42c38  dsll        $a1, $a0, 16
    ctx->pc = 0x31c324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 16);
label_31c328:
    // 0x31c328: 0x34a6ffff  ori         $a2, $a1, 0xFFFF
    ctx->pc = 0x31c328u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_31c32c:
    // 0x31c32c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x31c32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_31c330:
    // 0x31c330: 0x24046207  addiu       $a0, $zero, 0x6207
    ctx->pc = 0x31c330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25095));
label_31c334:
    // 0x31c334: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31c334u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31c338:
    // 0x31c338: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31c338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_31c33c:
    // 0x31c33c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x31c33cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31c340:
    // 0x31c340: 0xc062f5c  jal         func_18BD70
label_31c344:
    if (ctx->pc == 0x31C344u) {
        ctx->pc = 0x31C348u;
        goto label_31c348;
    }
    ctx->pc = 0x31C340u;
    SET_GPR_U32(ctx, 31, 0x31C348u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31C340u, 0x31C348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C348u;
label_31c348:
    // 0x31c348: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31c348u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31c34c:
    // 0x31c34c: 0xc0630a8  jal         func_18C2A0
label_31c350:
    if (ctx->pc == 0x31C350u) {
        ctx->pc = 0x31C354u;
        goto label_31c354;
    }
    ctx->pc = 0x31C34Cu;
    SET_GPR_U32(ctx, 31, 0x31C354u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31C34Cu, 0x31C354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C354u;
label_31c354:
    // 0x31c354: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c358:
    // 0x31c358: 0xac40129c  sw          $zero, 0x129C($v0)
    ctx->pc = 0x31c358u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4764), GPR_U32(ctx, 0));
label_31c35c:
    // 0x31c35c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c360:
    // 0x31c360: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x31c360u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_31c364:
    // 0x31c364: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31c364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_31c368:
    // 0x31c368: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x31c368u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_31c36c:
    // 0x31c36c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c370:
    // 0x31c370: 0x8c621294  lw          $v0, 0x1294($v1)
    ctx->pc = 0x31c370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4756)));
label_31c374:
    // 0x31c374: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x31c374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_31c378:
    // 0x31c378: 0xac641294  sw          $a0, 0x1294($v1)
    ctx->pc = 0x31c378u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4756), GPR_U32(ctx, 4));
label_31c37c:
    // 0x31c37c: 0x10000140  b           . + 4 + (0x140 << 2)
label_31c380:
    if (ctx->pc == 0x31C380u) {
        ctx->pc = 0x31C384u;
        goto label_31c384;
    }
    ctx->pc = 0x31C37Cu;
    {
        const bool branch_taken_0x31c37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c37c) {
            ctx->pc = 0x31C880u;
            goto label_31c880;
        }
    }
    ctx->pc = 0x31C384u;
label_31c384:
    // 0x31c384: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c388:
    // 0x31c388: 0x8c62129c  lw          $v0, 0x129C($v1)
    ctx->pc = 0x31c388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4764)));
label_31c38c:
    // 0x31c38c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x31c38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_31c390:
    // 0x31c390: 0xac64129c  sw          $a0, 0x129C($v1)
    ctx->pc = 0x31c390u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4764), GPR_U32(ctx, 4));
label_31c394:
    // 0x31c394: 0x2c810015  sltiu       $at, $a0, 0x15
    ctx->pc = 0x31c394u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
label_31c398:
    // 0x31c398: 0x14200139  bnez        $at, . + 4 + (0x139 << 2)
label_31c39c:
    if (ctx->pc == 0x31C39Cu) {
        ctx->pc = 0x31C3A0u;
        goto label_31c3a0;
    }
    ctx->pc = 0x31C398u;
    {
        const bool branch_taken_0x31c398 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c398) {
            ctx->pc = 0x31C880u;
            goto label_31c880;
        }
    }
    ctx->pc = 0x31C3A0u;
label_31c3a0:
    // 0x31c3a0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x31c3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_31c3a4:
    // 0x31c3a4: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x31c3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_31c3a8:
    // 0x31c3a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31c3a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31c3ac:
    // 0x31c3ac: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c3b0:
    // 0x31c3b0: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x31c3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
label_31c3b4:
    // 0x31c3b4: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x31c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_31c3b8:
    // 0x31c3b8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x31c3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_31c3bc:
    // 0x31c3bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31c3bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31c3c0:
    // 0x31c3c0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c3c4:
    // 0x31c3c4: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x31c3c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
label_31c3c8:
    // 0x31c3c8: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x31c3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_31c3cc:
    // 0x31c3cc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x31c3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_31c3d0:
    // 0x31c3d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31c3d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31c3d4:
    // 0x31c3d4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31c3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c3d8:
    // 0x31c3d8: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x31c3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
label_31c3dc:
    // 0x31c3dc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c3e0:
    // 0x31c3e0: 0xac40129c  sw          $zero, 0x129C($v0)
    ctx->pc = 0x31c3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4764), GPR_U32(ctx, 0));
label_31c3e4:
    // 0x31c3e4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c3e8:
    // 0x31c3e8: 0x8c621290  lw          $v0, 0x1290($v1)
    ctx->pc = 0x31c3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4752)));
label_31c3ec:
    // 0x31c3ec: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x31c3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_31c3f0:
    // 0x31c3f0: 0xac621290  sw          $v0, 0x1290($v1)
    ctx->pc = 0x31c3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 2));
label_31c3f4:
    // 0x31c3f4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c3f8:
    // 0x31c3f8: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x31c3f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_31c3fc:
    // 0x31c3fc: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x31c3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_31c400:
    // 0x31c400: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x31c400u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
label_31c404:
    // 0x31c404: 0x1000011e  b           . + 4 + (0x11E << 2)
label_31c408:
    if (ctx->pc == 0x31C408u) {
        ctx->pc = 0x31C40Cu;
        goto label_31c40c;
    }
    ctx->pc = 0x31C404u;
    {
        const bool branch_taken_0x31c404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c404) {
            ctx->pc = 0x31C880u;
            goto label_31c880;
        }
    }
    ctx->pc = 0x31C40Cu;
label_31c40c:
    // 0x31c40c: 0xc067694  jal         func_19DA50
label_31c410:
    if (ctx->pc == 0x31C410u) {
        ctx->pc = 0x31C414u;
        goto label_31c414;
    }
    ctx->pc = 0x31C40Cu;
    SET_GPR_U32(ctx, 31, 0x31C414u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x31C40Cu, 0x31C414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C414u;
label_31c414:
    // 0x31c414: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x31c414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_31c418:
    // 0x31c418: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x31c418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_31c41c:
    // 0x31c41c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x31c41cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_31c420:
    // 0x31c420: 0x0  nop
    ctx->pc = 0x31c420u;
    // NOP
label_31c424:
    // 0x31c424: 0x0  nop
    ctx->pc = 0x31c424u;
    // NOP
label_31c428:
    // 0x31c428: 0x3810  mfhi        $a3
    ctx->pc = 0x31c428u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_31c42c:
    // 0x31c42c: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x31c42cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_31c430:
    // 0x31c430: 0x873023  subu        $a2, $a0, $a3
    ctx->pc = 0x31c430u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_31c434:
    // 0x31c434: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x31c434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_31c438:
    // 0x31c438: 0x24420258  addiu       $v0, $v0, 0x258
    ctx->pc = 0x31c438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 600));
label_31c43c:
    // 0x31c43c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c440:
    // 0x31c440: 0xac621330  sw          $v0, 0x1330($v1)
    ctx->pc = 0x31c440u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4912), GPR_U32(ctx, 2));
label_31c444:
    // 0x31c444: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c448:
    // 0x31c448: 0x9444000e  lhu         $a0, 0xE($v0)
    ctx->pc = 0x31c448u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_31c44c:
    // 0x31c44c: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x31c44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_31c450:
    // 0x31c450: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31c450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31c454:
    // 0x31c454: 0x1062005f  beq         $v1, $v0, . + 4 + (0x5F << 2)
label_31c458:
    if (ctx->pc == 0x31C458u) {
        ctx->pc = 0x31C45Cu;
        goto label_31c45c;
    }
    ctx->pc = 0x31C454u;
    {
        const bool branch_taken_0x31c454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31c454) {
            ctx->pc = 0x31C5D4u;
            goto label_31c5d4;
        }
    }
    ctx->pc = 0x31C45Cu;
label_31c45c:
    // 0x31c45c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_31c460:
    if (ctx->pc == 0x31C460u) {
        ctx->pc = 0x31C464u;
        goto label_31c464;
    }
    ctx->pc = 0x31C45Cu;
    {
        const bool branch_taken_0x31c45c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c45c) {
            ctx->pc = 0x31C46Cu;
            goto label_31c46c;
        }
    }
    ctx->pc = 0x31C464u;
label_31c464:
    // 0x31c464: 0x10000093  b           . + 4 + (0x93 << 2)
label_31c468:
    if (ctx->pc == 0x31C468u) {
        ctx->pc = 0x31C46Cu;
        goto label_31c46c;
    }
    ctx->pc = 0x31C464u;
    {
        const bool branch_taken_0x31c464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c464) {
            ctx->pc = 0x31C6B4u;
            goto label_31c6b4;
        }
    }
    ctx->pc = 0x31C46Cu;
label_31c46c:
    // 0x31c46c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c470:
    // 0x31c470: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x31c470u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_31c474:
    // 0x31c474: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x31c474u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
label_31c478:
    // 0x31c478: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x31c478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_31c47c:
    // 0x31c47c: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x31c47cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_31c480:
    // 0x31c480: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x31c480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
label_31c484:
    // 0x31c484: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31c484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_31c488:
    // 0x31c488: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x31c488u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_31c48c:
    // 0x31c48c: 0x24042d02  addiu       $a0, $zero, 0x2D02
    ctx->pc = 0x31c48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11522));
label_31c490:
    // 0x31c490: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31c490u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31c494:
    // 0x31c494: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31c494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_31c498:
    // 0x31c498: 0xc062f5c  jal         func_18BD70
label_31c49c:
    if (ctx->pc == 0x31C49Cu) {
        ctx->pc = 0x31C4A0u;
        goto label_31c4a0;
    }
    ctx->pc = 0x31C498u;
    SET_GPR_U32(ctx, 31, 0x31C4A0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31C498u, 0x31C4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C4A0u;
label_31c4a0:
    // 0x31c4a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31c4a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31c4a4:
    // 0x31c4a4: 0xc0630a8  jal         func_18C2A0
label_31c4a8:
    if (ctx->pc == 0x31C4A8u) {
        ctx->pc = 0x31C4ACu;
        goto label_31c4ac;
    }
    ctx->pc = 0x31C4A4u;
    SET_GPR_U32(ctx, 31, 0x31C4ACu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31C4A4u, 0x31C4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C4ACu;
label_31c4ac:
    // 0x31c4ac: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c4b0:
    // 0x31c4b0: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x31c4b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_31c4b4:
    // 0x31c4b4: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x31c4b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
label_31c4b8:
    // 0x31c4b8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x31c4b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_31c4bc:
    // 0x31c4bc: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x31c4bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_31c4c0:
    // 0x31c4c0: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x31c4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
label_31c4c4:
    // 0x31c4c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31c4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_31c4c8:
    // 0x31c4c8: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x31c4c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_31c4cc:
    // 0x31c4cc: 0x2404490a  addiu       $a0, $zero, 0x490A
    ctx->pc = 0x31c4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18698));
label_31c4d0:
    // 0x31c4d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31c4d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31c4d4:
    // 0x31c4d4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31c4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_31c4d8:
    // 0x31c4d8: 0xc062f5c  jal         func_18BD70
label_31c4dc:
    if (ctx->pc == 0x31C4DCu) {
        ctx->pc = 0x31C4E0u;
        goto label_31c4e0;
    }
    ctx->pc = 0x31C4D8u;
    SET_GPR_U32(ctx, 31, 0x31C4E0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31C4D8u, 0x31C4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C4E0u;
label_31c4e0:
    // 0x31c4e0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31c4e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31c4e4:
    // 0x31c4e4: 0xc0630a8  jal         func_18C2A0
label_31c4e8:
    if (ctx->pc == 0x31C4E8u) {
        ctx->pc = 0x31C4ECu;
        goto label_31c4ec;
    }
    ctx->pc = 0x31C4E4u;
    SET_GPR_U32(ctx, 31, 0x31C4ECu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31C4E4u, 0x31C4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C4ECu;
label_31c4ec:
    // 0x31c4ec: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x31c4ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31c4f0:
    // 0x31c4f0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c4f4:
    // 0x31c4f4: 0x8c670130  lw          $a3, 0x130($v1)
    ctx->pc = 0x31c4f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_31c4f8:
    // 0x31c4f8: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x31c4f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
label_31c4fc:
    // 0x31c4fc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x31c4fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_31c500:
    // 0x31c500: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x31c500u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_31c504:
    // 0x31c504: 0x62c38  dsll        $a1, $a2, 16
    ctx->pc = 0x31c504u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << 16);
label_31c508:
    // 0x31c508: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x31c508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_31c50c:
    // 0x31c50c: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x31c50cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_31c510:
    // 0x31c510: 0x2404490b  addiu       $a0, $zero, 0x490B
    ctx->pc = 0x31c510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18699));
label_31c514:
    // 0x31c514: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31c514u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31c518:
    // 0x31c518: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31c518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_31c51c:
    // 0x31c51c: 0xc062f5c  jal         func_18BD70
label_31c520:
    if (ctx->pc == 0x31C520u) {
        ctx->pc = 0x31C524u;
        goto label_31c524;
    }
    ctx->pc = 0x31C51Cu;
    SET_GPR_U32(ctx, 31, 0x31C524u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31C51Cu, 0x31C524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C524u;
label_31c524:
    // 0x31c524: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31c524u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31c528:
    // 0x31c528: 0xc0630a8  jal         func_18C2A0
label_31c52c:
    if (ctx->pc == 0x31C52Cu) {
        ctx->pc = 0x31C530u;
        goto label_31c530;
    }
    ctx->pc = 0x31C528u;
    SET_GPR_U32(ctx, 31, 0x31C530u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31C528u, 0x31C530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C530u;
label_31c530:
    // 0x31c530: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x31c530u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31c534:
    // 0x31c534: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c538:
    // 0x31c538: 0xac7012a4  sw          $s0, 0x12A4($v1)
    ctx->pc = 0x31c538u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4772), GPR_U32(ctx, 16));
label_31c53c:
    // 0x31c53c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31c53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c540:
    // 0x31c540: 0xac9112a8  sw          $s1, 0x12A8($a0)
    ctx->pc = 0x31c540u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4776), GPR_U32(ctx, 17));
label_31c544:
    // 0x31c544: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c548:
    // 0x31c548: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x31c548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_31c54c:
    // 0x31c54c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x31c54cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_31c550:
    // 0x31c550: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x31c550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_31c554:
    // 0x31c554: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x31c554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_31c558:
    // 0x31c558: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x31c558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_31c55c:
    // 0x31c55c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x31c55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_31c560:
    // 0x31c560: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x31c560u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_31c564:
    // 0x31c564: 0x2404490e  addiu       $a0, $zero, 0x490E
    ctx->pc = 0x31c564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18702));
label_31c568:
    // 0x31c568: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31c568u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31c56c:
    // 0x31c56c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31c56cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_31c570:
    // 0x31c570: 0xc062f5c  jal         func_18BD70
label_31c574:
    if (ctx->pc == 0x31C574u) {
        ctx->pc = 0x31C578u;
        goto label_31c578;
    }
    ctx->pc = 0x31C570u;
    SET_GPR_U32(ctx, 31, 0x31C578u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31C570u, 0x31C578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C578u;
label_31c578:
    // 0x31c578: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31c578u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31c57c:
    // 0x31c57c: 0xc0630a8  jal         func_18C2A0
label_31c580:
    if (ctx->pc == 0x31C580u) {
        ctx->pc = 0x31C584u;
        goto label_31c584;
    }
    ctx->pc = 0x31C57Cu;
    SET_GPR_U32(ctx, 31, 0x31C584u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31C57Cu, 0x31C584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C584u;
label_31c584:
    // 0x31c584: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x31c584u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31c588:
    // 0x31c588: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31c588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c58c:
    // 0x31c58c: 0x8c860130  lw          $a2, 0x130($a0)
    ctx->pc = 0x31c58cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_31c590:
    // 0x31c590: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x31c590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_31c594:
    // 0x31c594: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x31c594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_31c598:
    // 0x31c598: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x31c598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_31c59c:
    // 0x31c59c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x31c59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_31c5a0:
    // 0x31c5a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x31c5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_31c5a4:
    // 0x31c5a4: 0x433824  and         $a3, $v0, $v1
    ctx->pc = 0x31c5a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_31c5a8:
    // 0x31c5a8: 0x2404490f  addiu       $a0, $zero, 0x490F
    ctx->pc = 0x31c5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18703));
label_31c5ac:
    // 0x31c5ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31c5acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31c5b0:
    // 0x31c5b0: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31c5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_31c5b4:
    // 0x31c5b4: 0xc062f5c  jal         func_18BD70
label_31c5b8:
    if (ctx->pc == 0x31C5B8u) {
        ctx->pc = 0x31C5BCu;
        goto label_31c5bc;
    }
    ctx->pc = 0x31C5B4u;
    SET_GPR_U32(ctx, 31, 0x31C5BCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31C5B4u, 0x31C5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C5BCu;
label_31c5bc:
    // 0x31c5bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31c5bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31c5c0:
    // 0x31c5c0: 0xc0630a8  jal         func_18C2A0
label_31c5c4:
    if (ctx->pc == 0x31C5C4u) {
        ctx->pc = 0x31C5C8u;
        goto label_31c5c8;
    }
    ctx->pc = 0x31C5C0u;
    SET_GPR_U32(ctx, 31, 0x31C5C8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31C5C0u, 0x31C5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C5C8u;
label_31c5c8:
    // 0x31c5c8: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x31c5c8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31c5cc:
    // 0x31c5cc: 0x10000039  b           . + 4 + (0x39 << 2)
label_31c5d0:
    if (ctx->pc == 0x31C5D0u) {
        ctx->pc = 0x31C5D4u;
        goto label_31c5d4;
    }
    ctx->pc = 0x31C5CCu;
    {
        const bool branch_taken_0x31c5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c5cc) {
            ctx->pc = 0x31C6B4u;
            goto label_31c6b4;
        }
    }
    ctx->pc = 0x31C5D4u;
label_31c5d4:
    // 0x31c5d4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31c5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c5d8:
    // 0x31c5d8: 0x8c860130  lw          $a2, 0x130($a0)
    ctx->pc = 0x31c5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_31c5dc:
    // 0x31c5dc: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x31c5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_31c5e0:
    // 0x31c5e0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x31c5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_31c5e4:
    // 0x31c5e4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x31c5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_31c5e8:
    // 0x31c5e8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x31c5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_31c5ec:
    // 0x31c5ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x31c5ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_31c5f0:
    // 0x31c5f0: 0x433824  and         $a3, $v0, $v1
    ctx->pc = 0x31c5f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_31c5f4:
    // 0x31c5f4: 0x24042d03  addiu       $a0, $zero, 0x2D03
    ctx->pc = 0x31c5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11523));
label_31c5f8:
    // 0x31c5f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31c5f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31c5fc:
    // 0x31c5fc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31c5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_31c600:
    // 0x31c600: 0xc062f5c  jal         func_18BD70
label_31c604:
    if (ctx->pc == 0x31C604u) {
        ctx->pc = 0x31C608u;
        goto label_31c608;
    }
    ctx->pc = 0x31C600u;
    SET_GPR_U32(ctx, 31, 0x31C608u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31C600u, 0x31C608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C608u;
label_31c608:
    // 0x31c608: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31c608u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31c60c:
    // 0x31c60c: 0xc0630a8  jal         func_18C2A0
label_31c610:
    if (ctx->pc == 0x31C610u) {
        ctx->pc = 0x31C614u;
        goto label_31c614;
    }
    ctx->pc = 0x31C60Cu;
    SET_GPR_U32(ctx, 31, 0x31C614u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31C60Cu, 0x31C614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C614u;
label_31c614:
    // 0x31c614: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x31c614u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31c618:
    // 0x31c618: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31c618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c61c:
    // 0x31c61c: 0x8c860130  lw          $a2, 0x130($a0)
    ctx->pc = 0x31c61cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_31c620:
    // 0x31c620: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x31c620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_31c624:
    // 0x31c624: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x31c624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_31c628:
    // 0x31c628: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x31c628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_31c62c:
    // 0x31c62c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x31c62cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_31c630:
    // 0x31c630: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x31c630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_31c634:
    // 0x31c634: 0x433824  and         $a3, $v0, $v1
    ctx->pc = 0x31c634u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_31c638:
    // 0x31c638: 0x2404490c  addiu       $a0, $zero, 0x490C
    ctx->pc = 0x31c638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18700));
label_31c63c:
    // 0x31c63c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31c63cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31c640:
    // 0x31c640: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31c640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_31c644:
    // 0x31c644: 0xc062f5c  jal         func_18BD70
label_31c648:
    if (ctx->pc == 0x31C648u) {
        ctx->pc = 0x31C64Cu;
        goto label_31c64c;
    }
    ctx->pc = 0x31C644u;
    SET_GPR_U32(ctx, 31, 0x31C64Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31C644u, 0x31C64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C64Cu;
label_31c64c:
    // 0x31c64c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31c64cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31c650:
    // 0x31c650: 0xc0630a8  jal         func_18C2A0
label_31c654:
    if (ctx->pc == 0x31C654u) {
        ctx->pc = 0x31C658u;
        goto label_31c658;
    }
    ctx->pc = 0x31C650u;
    SET_GPR_U32(ctx, 31, 0x31C658u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31C650u, 0x31C658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C658u;
label_31c658:
    // 0x31c658: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x31c658u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31c65c:
    // 0x31c65c: 0x70e08628  paddub      $s0, $a3, $zero
    ctx->pc = 0x31c65cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_31c660:
    // 0x31c660: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31c660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c664:
    // 0x31c664: 0x8c860130  lw          $a2, 0x130($a0)
    ctx->pc = 0x31c664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_31c668:
    // 0x31c668: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x31c668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_31c66c:
    // 0x31c66c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x31c66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_31c670:
    // 0x31c670: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x31c670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_31c674:
    // 0x31c674: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x31c674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_31c678:
    // 0x31c678: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x31c678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_31c67c:
    // 0x31c67c: 0x433824  and         $a3, $v0, $v1
    ctx->pc = 0x31c67cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_31c680:
    // 0x31c680: 0x2404490d  addiu       $a0, $zero, 0x490D
    ctx->pc = 0x31c680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18701));
label_31c684:
    // 0x31c684: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31c684u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31c688:
    // 0x31c688: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31c688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_31c68c:
    // 0x31c68c: 0xc062f5c  jal         func_18BD70
label_31c690:
    if (ctx->pc == 0x31C690u) {
        ctx->pc = 0x31C694u;
        goto label_31c694;
    }
    ctx->pc = 0x31C68Cu;
    SET_GPR_U32(ctx, 31, 0x31C694u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31C68Cu, 0x31C694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C694u;
label_31c694:
    // 0x31c694: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31c694u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31c698:
    // 0x31c698: 0xc0630a8  jal         func_18C2A0
label_31c69c:
    if (ctx->pc == 0x31C69Cu) {
        ctx->pc = 0x31C6A0u;
        goto label_31c6a0;
    }
    ctx->pc = 0x31C698u;
    SET_GPR_U32(ctx, 31, 0x31C6A0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31C698u, 0x31C6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C6A0u;
label_31c6a0:
    // 0x31c6a0: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x31c6a0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31c6a4:
    // 0x31c6a4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c6a8:
    // 0x31c6a8: 0xac5012a4  sw          $s0, 0x12A4($v0)
    ctx->pc = 0x31c6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4772), GPR_U32(ctx, 16));
label_31c6ac:
    // 0x31c6ac: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c6b0:
    // 0x31c6b0: 0xac5112a8  sw          $s1, 0x12A8($v0)
    ctx->pc = 0x31c6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4776), GPR_U32(ctx, 17));
label_31c6b4:
    // 0x31c6b4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31c6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c6b8:
    // 0x31c6b8: 0x8c821290  lw          $v0, 0x1290($a0)
    ctx->pc = 0x31c6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4752)));
label_31c6bc:
    // 0x31c6bc: 0x34430001  ori         $v1, $v0, 0x1
    ctx->pc = 0x31c6bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_31c6c0:
    // 0x31c6c0: 0xac831290  sw          $v1, 0x1290($a0)
    ctx->pc = 0x31c6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4752), GPR_U32(ctx, 3));
label_31c6c4:
    // 0x31c6c4: 0x3c02c1c0  lui         $v0, 0xC1C0
    ctx->pc = 0x31c6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49600 << 16));
label_31c6c8:
    // 0x31c6c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31c6c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31c6cc:
    // 0x31c6cc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c6d0:
    // 0x31c6d0: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x31c6d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_31c6d4:
    // 0x31c6d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31c6d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31c6d8:
    // 0x31c6d8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c6dc:
    // 0x31c6dc: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x31c6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
label_31c6e0:
    // 0x31c6e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31c6e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31c6e4:
    // 0x31c6e4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c6e8:
    // 0x31c6e8: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x31c6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_31c6ec:
    // 0x31c6ec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x31c6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_31c6f0:
    // 0x31c6f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31c6f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31c6f4:
    // 0x31c6f4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c6f8:
    // 0x31c6f8: 0xe440018c  swc1        $f0, 0x18C($v0)
    ctx->pc = 0x31c6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 396), bits); }
label_31c6fc:
    // 0x31c6fc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c700:
    // 0x31c700: 0xac40128c  sw          $zero, 0x128C($v0)
    ctx->pc = 0x31c700u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4748), GPR_U32(ctx, 0));
label_31c704:
    // 0x31c704: 0x3c0441c0  lui         $a0, 0x41C0
    ctx->pc = 0x31c704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16832 << 16));
label_31c708:
    // 0x31c708: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31c708u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31c70c:
    // 0x31c70c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c710:
    // 0x31c710: 0xe44012d0  swc1        $f0, 0x12D0($v0)
    ctx->pc = 0x31c710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4816), bits); }
label_31c714:
    // 0x31c714: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c718:
    // 0x31c718: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x31c718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_31c71c:
    // 0x31c71c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31c71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_31c720:
    // 0x31c720: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x31c720u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_31c724:
    // 0x31c724: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c728:
    // 0x31c728: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x31c728u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_31c72c:
    // 0x31c72c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31c72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_31c730:
    // 0x31c730: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x31c730u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_31c734:
    // 0x31c734: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31c734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c738:
    // 0x31c738: 0xc05cd34  jal         func_1734D0
label_31c73c:
    if (ctx->pc == 0x31C73Cu) {
        ctx->pc = 0x31C740u;
        goto label_31c740;
    }
    ctx->pc = 0x31C738u;
    SET_GPR_U32(ctx, 31, 0x31C740u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x31C738u, 0x31C740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C740u;
label_31c740:
    // 0x31c740: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c744:
    // 0x31c744: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x31c744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31c748:
    // 0x31c748: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x31c748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_31c74c:
    // 0x31c74c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31c74cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31c750:
    // 0x31c750: 0x0  nop
    ctx->pc = 0x31c750u;
    // NOP
label_31c754:
    // 0x31c754: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31c754u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31c758:
    // 0x31c758: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x31c758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
label_31c75c:
    // 0x31c75c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c760:
    // 0x31c760: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x31c760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31c764:
    // 0x31c764: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c768:
    // 0x31c768: 0xc46012cc  lwc1        $f0, 0x12CC($v1)
    ctx->pc = 0x31c768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31c76c:
    // 0x31c76c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31c76cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31c770:
    // 0x31c770: 0x0  nop
    ctx->pc = 0x31c770u;
    // NOP
label_31c774:
    // 0x31c774: 0x45000042  bc1f        . + 4 + (0x42 << 2)
label_31c778:
    if (ctx->pc == 0x31C778u) {
        ctx->pc = 0x31C77Cu;
        goto label_31c77c;
    }
    ctx->pc = 0x31C774u;
    {
        const bool branch_taken_0x31c774 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31c774) {
            ctx->pc = 0x31C880u;
            goto label_31c880;
        }
    }
    ctx->pc = 0x31C77Cu;
label_31c77c:
    // 0x31c77c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c780:
    // 0x31c780: 0x8c43128c  lw          $v1, 0x128C($v0)
    ctx->pc = 0x31c780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
label_31c784:
    // 0x31c784: 0x2c61000f  sltiu       $at, $v1, 0xF
    ctx->pc = 0x31c784u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_31c788:
    // 0x31c788: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
label_31c78c:
    if (ctx->pc == 0x31C78Cu) {
        ctx->pc = 0x31C790u;
        goto label_31c790;
    }
    ctx->pc = 0x31C788u;
    {
        const bool branch_taken_0x31c788 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c788) {
            ctx->pc = 0x31C7F4u;
            goto label_31c7f4;
        }
    }
    ctx->pc = 0x31C790u;
label_31c790:
    // 0x31c790: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c794:
    // 0x31c794: 0xc44012cc  lwc1        $f0, 0x12CC($v0)
    ctx->pc = 0x31c794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31c798:
    // 0x31c798: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c79c:
    // 0x31c79c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x31c79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_31c7a0:
    // 0x31c7a0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c7a4:
    // 0x31c7a4: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x31c7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_31c7a8:
    // 0x31c7a8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x31c7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_31c7ac:
    // 0x31c7ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31c7acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_31c7b0:
    // 0x31c7b0: 0xc46012d0  lwc1        $f0, 0x12D0($v1)
    ctx->pc = 0x31c7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31c7b4:
    // 0x31c7b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31c7b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_31c7b8:
    // 0x31c7b8: 0xe46012d0  swc1        $f0, 0x12D0($v1)
    ctx->pc = 0x31c7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4816), bits); }
label_31c7bc:
    // 0x31c7bc: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31c7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c7c0:
    // 0x31c7c0: 0xc48012d0  lwc1        $f0, 0x12D0($a0)
    ctx->pc = 0x31c7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31c7c4:
    // 0x31c7c4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c7c8:
    // 0x31c7c8: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x31c7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_31c7cc:
    // 0x31c7cc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c7d0:
    // 0x31c7d0: 0x8c62128c  lw          $v0, 0x128C($v1)
    ctx->pc = 0x31c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
label_31c7d4:
    // 0x31c7d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_31c7d8:
    // 0x31c7d8: 0xac62128c  sw          $v0, 0x128C($v1)
    ctx->pc = 0x31c7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 2));
label_31c7dc:
    // 0x31c7dc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c7e0:
    // 0x31c7e0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x31c7e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_31c7e4:
    // 0x31c7e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31c7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_31c7e8:
    // 0x31c7e8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x31c7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_31c7ec:
    // 0x31c7ec: 0x10000024  b           . + 4 + (0x24 << 2)
label_31c7f0:
    if (ctx->pc == 0x31C7F0u) {
        ctx->pc = 0x31C7F4u;
        goto label_31c7f4;
    }
    ctx->pc = 0x31C7ECu;
    {
        const bool branch_taken_0x31c7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c7ec) {
            ctx->pc = 0x31C880u;
            goto label_31c880;
        }
    }
    ctx->pc = 0x31C7F4u;
label_31c7f4:
    // 0x31c7f4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c7f8:
    // 0x31c7f8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x31c7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_31c7fc:
    // 0x31c7fc: 0xc05cfdc  jal         func_173F70
label_31c800:
    if (ctx->pc == 0x31C800u) {
        ctx->pc = 0x31C804u;
        goto label_31c804;
    }
    ctx->pc = 0x31C7FCu;
    SET_GPR_U32(ctx, 31, 0x31C804u);
    ctx->pc = 0x173F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173F70u, 0x31C7FCu, 0x31C804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C804u;
label_31c804:
    // 0x31c804: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x31c804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_31c808:
    // 0x31c808: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x31c808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31c80c:
    // 0x31c80c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c810:
    // 0x31c810: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x31c810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_31c814:
    // 0x31c814: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x31c814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_31c818:
    // 0x31c818: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c81c:
    // 0x31c81c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x31c81cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_31c820:
    // 0x31c820: 0x10000017  b           . + 4 + (0x17 << 2)
label_31c824:
    if (ctx->pc == 0x31C824u) {
        ctx->pc = 0x31C828u;
        goto label_31c828;
    }
    ctx->pc = 0x31C820u;
    {
        const bool branch_taken_0x31c820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c820) {
            ctx->pc = 0x31C880u;
            goto label_31c880;
        }
    }
    ctx->pc = 0x31C828u;
label_31c828:
    // 0x31c828: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31c828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c82c:
    // 0x31c82c: 0xc05cd34  jal         func_1734D0
label_31c830:
    if (ctx->pc == 0x31C830u) {
        ctx->pc = 0x31C834u;
        goto label_31c834;
    }
    ctx->pc = 0x31C82Cu;
    SET_GPR_U32(ctx, 31, 0x31C834u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x31C82Cu, 0x31C834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C834u;
label_31c834:
    // 0x31c834: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c838:
    // 0x31c838: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x31c838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31c83c:
    // 0x31c83c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x31c83cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_31c840:
    // 0x31c840: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31c840u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31c844:
    // 0x31c844: 0x0  nop
    ctx->pc = 0x31c844u;
    // NOP
label_31c848:
    // 0x31c848: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31c848u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31c84c:
    // 0x31c84c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x31c84cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_31c850:
    // 0x31c850: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c854:
    // 0x31c854: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x31c854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31c858:
    // 0x31c858: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31c858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31c85c:
    // 0x31c85c: 0x0  nop
    ctx->pc = 0x31c85cu;
    // NOP
label_31c860:
    // 0x31c860: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31c860u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31c864:
    // 0x31c864: 0x0  nop
    ctx->pc = 0x31c864u;
    // NOP
label_31c868:
    // 0x31c868: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_31c86c:
    if (ctx->pc == 0x31C86Cu) {
        ctx->pc = 0x31C870u;
        goto label_31c870;
    }
    ctx->pc = 0x31C868u;
    {
        const bool branch_taken_0x31c868 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31c868) {
            ctx->pc = 0x31C880u;
            goto label_31c880;
        }
    }
    ctx->pc = 0x31C870u;
label_31c870:
    // 0x31c870: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c874:
    // 0x31c874: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x31c874u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_31c878:
    // 0x31c878: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31c878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_31c87c:
    // 0x31c87c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x31c87cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_31c880:
    // 0x31c880: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c884:
    // 0x31c884: 0x8c7012a4  lw          $s0, 0x12A4($v1)
    ctx->pc = 0x31c884u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4772)));
label_31c888:
    // 0x31c888: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c88c:
    // 0x31c88c: 0x8c5112a8  lw          $s1, 0x12A8($v0)
    ctx->pc = 0x31c88cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4776)));
label_31c890:
    // 0x31c890: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x31c890u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c894:
    // 0x31c894: 0x8ce41290  lw          $a0, 0x1290($a3)
    ctx->pc = 0x31c894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4752)));
label_31c898:
    // 0x31c898: 0x30860008  andi        $a2, $a0, 0x8
    ctx->pc = 0x31c898u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
label_31c89c:
    // 0x31c89c: 0x10c00029  beqz        $a2, . + 4 + (0x29 << 2)
label_31c8a0:
    if (ctx->pc == 0x31C8A0u) {
        ctx->pc = 0x31C8A4u;
        goto label_31c8a4;
    }
    ctx->pc = 0x31C89Cu;
    {
        const bool branch_taken_0x31c89c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c89c) {
            ctx->pc = 0x31C944u;
            goto label_31c944;
        }
    }
    ctx->pc = 0x31C8A4u;
label_31c8a4:
    // 0x31c8a4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c8a8:
    // 0x31c8a8: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x31c8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31c8ac:
    // 0x31c8ac: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c8b0:
    // 0x31c8b0: 0xc4401304  lwc1        $f0, 0x1304($v0)
    ctx->pc = 0x31c8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31c8b4:
    // 0x31c8b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31c8b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31c8b8:
    // 0x31c8b8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x31c8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_31c8bc:
    // 0x31c8bc: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x31c8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31c8c0:
    // 0x31c8c0: 0x3c04453b  lui         $a0, 0x453B
    ctx->pc = 0x31c8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17723 << 16));
label_31c8c4:
    // 0x31c8c4: 0x34838000  ori         $v1, $a0, 0x8000
    ctx->pc = 0x31c8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
label_31c8c8:
    // 0x31c8c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31c8c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31c8cc:
    // 0x31c8cc: 0x0  nop
    ctx->pc = 0x31c8ccu;
    // NOP
label_31c8d0:
    // 0x31c8d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31c8d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31c8d4:
    // 0x31c8d4: 0x0  nop
    ctx->pc = 0x31c8d4u;
    // NOP
label_31c8d8:
    // 0x31c8d8: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_31c8dc:
    if (ctx->pc == 0x31C8DCu) {
        ctx->pc = 0x31C8E0u;
        goto label_31c8e0;
    }
    ctx->pc = 0x31C8D8u;
    {
        const bool branch_taken_0x31c8d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31c8d8) {
            ctx->pc = 0x31C944u;
            goto label_31c944;
        }
    }
    ctx->pc = 0x31C8E0u;
label_31c8e0:
    // 0x31c8e0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c8e4:
    // 0x31c8e4: 0x24044b00  addiu       $a0, $zero, 0x4B00
    ctx->pc = 0x31c8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19200));
label_31c8e8:
    // 0x31c8e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31c8e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31c8ec:
    // 0x31c8ec: 0x24661300  addiu       $a2, $v1, 0x1300
    ctx->pc = 0x31c8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_31c8f0:
    // 0x31c8f0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31c8f0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31c8f4:
    // 0x31c8f4: 0xc062f5c  jal         func_18BD70
label_31c8f8:
    if (ctx->pc == 0x31C8F8u) {
        ctx->pc = 0x31C8FCu;
        goto label_31c8fc;
    }
    ctx->pc = 0x31C8F4u;
    SET_GPR_U32(ctx, 31, 0x31C8FCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31C8F4u, 0x31C8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C8FCu;
label_31c8fc:
    // 0x31c8fc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31c8fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31c900:
    // 0x31c900: 0xc0630a8  jal         func_18C2A0
label_31c904:
    if (ctx->pc == 0x31C904u) {
        ctx->pc = 0x31C908u;
        goto label_31c908;
    }
    ctx->pc = 0x31C900u;
    SET_GPR_U32(ctx, 31, 0x31C908u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31C900u, 0x31C908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C908u;
label_31c908:
    // 0x31c908: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x31c908u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31c90c:
    // 0x31c90c: 0x70e09628  paddub      $s2, $a3, $zero
    ctx->pc = 0x31c90cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_31c910:
    // 0x31c910: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x31c910u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
label_31c914:
    // 0x31c914: 0x34c40011  ori         $a0, $a2, 0x11
    ctx->pc = 0x31c914u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)17);
label_31c918:
    // 0x31c918: 0x1244000a  beq         $s2, $a0, . + 4 + (0xA << 2)
label_31c91c:
    if (ctx->pc == 0x31C91Cu) {
        ctx->pc = 0x31C920u;
        goto label_31c920;
    }
    ctx->pc = 0x31C918u;
    {
        const bool branch_taken_0x31c918 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        if (branch_taken_0x31c918) {
            ctx->pc = 0x31C944u;
            goto label_31c944;
        }
    }
    ctx->pc = 0x31C920u;
label_31c920:
    // 0x31c920: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x31c920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_31c924:
    // 0x31c924: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x31c924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_31c928:
    // 0x31c928: 0x3c02399d  lui         $v0, 0x399D
    ctx->pc = 0x31c928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14749 << 16));
label_31c92c:
    // 0x31c92c: 0x34424952  ori         $v0, $v0, 0x4952
    ctx->pc = 0x31c92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18770);
label_31c930:
    // 0x31c930: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31c930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_31c934:
    // 0x31c934: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x31c934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31c938:
    // 0x31c938: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31c938u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_31c93c:
    // 0x31c93c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x31c93cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_31c940:
    // 0x31c940: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x31c940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
label_31c944:
    // 0x31c944: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c948:
    // 0x31c948: 0x8c631290  lw          $v1, 0x1290($v1)
    ctx->pc = 0x31c948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4752)));
label_31c94c:
    // 0x31c94c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x31c94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_31c950:
    // 0x31c950: 0x104000c1  beqz        $v0, . + 4 + (0xC1 << 2)
label_31c954:
    if (ctx->pc == 0x31C954u) {
        ctx->pc = 0x31C958u;
        goto label_31c958;
    }
    ctx->pc = 0x31C950u;
    {
        const bool branch_taken_0x31c950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c950) {
            ctx->pc = 0x31CC58u;
            goto label_31cc58;
        }
    }
    ctx->pc = 0x31C958u;
label_31c958:
    // 0x31c958: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c95c:
    // 0x31c95c: 0x8c4212ac  lw          $v0, 0x12AC($v0)
    ctx->pc = 0x31c95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
label_31c960:
    // 0x31c960: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x31c960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31c964:
    // 0x31c964: 0x10470032  beq         $v0, $a3, . + 4 + (0x32 << 2)
label_31c968:
    if (ctx->pc == 0x31C968u) {
        ctx->pc = 0x31C96Cu;
        goto label_31c96c;
    }
    ctx->pc = 0x31C964u;
    {
        const bool branch_taken_0x31c964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x31c964) {
            ctx->pc = 0x31CA30u;
            goto label_31ca30;
        }
    }
    ctx->pc = 0x31C96Cu;
label_31c96c:
    // 0x31c96c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_31c970:
    if (ctx->pc == 0x31C970u) {
        ctx->pc = 0x31C974u;
        goto label_31c974;
    }
    ctx->pc = 0x31C96Cu;
    {
        const bool branch_taken_0x31c96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c96c) {
            ctx->pc = 0x31C97Cu;
            goto label_31c97c;
        }
    }
    ctx->pc = 0x31C974u;
label_31c974:
    // 0x31c974: 0x10000056  b           . + 4 + (0x56 << 2)
label_31c978:
    if (ctx->pc == 0x31C978u) {
        ctx->pc = 0x31C97Cu;
        goto label_31c97c;
    }
    ctx->pc = 0x31C974u;
    {
        const bool branch_taken_0x31c974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c974) {
            ctx->pc = 0x31CAD0u;
            goto label_31cad0;
        }
    }
    ctx->pc = 0x31C97Cu;
label_31c97c:
    // 0x31c97c: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x31c97cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
label_31c980:
    // 0x31c980: 0x34c40011  ori         $a0, $a2, 0x11
    ctx->pc = 0x31c980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)17);
label_31c984:
    // 0x31c984: 0x1204000a  beq         $s0, $a0, . + 4 + (0xA << 2)
label_31c988:
    if (ctx->pc == 0x31C988u) {
        ctx->pc = 0x31C98Cu;
        goto label_31c98c;
    }
    ctx->pc = 0x31C984u;
    {
        const bool branch_taken_0x31c984 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x31c984) {
            ctx->pc = 0x31C9B0u;
            goto label_31c9b0;
        }
    }
    ctx->pc = 0x31C98Cu;
label_31c98c:
    // 0x31c98c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c990:
    // 0x31c990: 0xc44112dc  lwc1        $f1, 0x12DC($v0)
    ctx->pc = 0x31c990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31c994:
    // 0x31c994: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x31c994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_31c998:
    // 0x31c998: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31c998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31c99c:
    // 0x31c99c: 0x0  nop
    ctx->pc = 0x31c99cu;
    // NOP
label_31c9a0:
    // 0x31c9a0: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x31c9a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_31c9a4:
    // 0x31c9a4: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x31c9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31c9a8:
    // 0x31c9a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31c9a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_31c9ac:
    // 0x31c9ac: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x31c9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_31c9b0:
    // 0x31c9b0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c9b4:
    // 0x31c9b4: 0xc46112dc  lwc1        $f1, 0x12DC($v1)
    ctx->pc = 0x31c9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31c9b8:
    // 0x31c9b8: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x31c9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_31c9bc:
    // 0x31c9bc: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x31c9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_31c9c0:
    // 0x31c9c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31c9c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31c9c4:
    // 0x31c9c4: 0x0  nop
    ctx->pc = 0x31c9c4u;
    // NOP
label_31c9c8:
    // 0x31c9c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31c9c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31c9cc:
    // 0x31c9cc: 0xe46012dc  swc1        $f0, 0x12DC($v1)
    ctx->pc = 0x31c9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4828), bits); }
label_31c9d0:
    // 0x31c9d0: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31c9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c9d4:
    // 0x31c9d4: 0x8c8512b0  lw          $a1, 0x12B0($a0)
    ctx->pc = 0x31c9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4784)));
label_31c9d8:
    // 0x31c9d8: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x31c9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_31c9dc:
    // 0x31c9dc: 0xac8612b0  sw          $a2, 0x12B0($a0)
    ctx->pc = 0x31c9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4784), GPR_U32(ctx, 6));
label_31c9e0:
    // 0x31c9e0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31c9e4:
    // 0x31c9e4: 0xc44112dc  lwc1        $f1, 0x12DC($v0)
    ctx->pc = 0x31c9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31c9e8:
    // 0x31c9e8: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x31c9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_31c9ec:
    // 0x31c9ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31c9ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31c9f0:
    // 0x31c9f0: 0x0  nop
    ctx->pc = 0x31c9f0u;
    // NOP
label_31c9f4:
    // 0x31c9f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x31c9f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31c9f8:
    // 0x31c9f8: 0x0  nop
    ctx->pc = 0x31c9f8u;
    // NOP
label_31c9fc:
    // 0x31c9fc: 0x45010034  bc1t        . + 4 + (0x34 << 2)
label_31ca00:
    if (ctx->pc == 0x31CA00u) {
        ctx->pc = 0x31CA04u;
        goto label_31ca04;
    }
    ctx->pc = 0x31C9FCu;
    {
        const bool branch_taken_0x31c9fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31c9fc) {
            ctx->pc = 0x31CAD0u;
            goto label_31cad0;
        }
    }
    ctx->pc = 0x31CA04u;
label_31ca04:
    // 0x31ca04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31ca04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31ca08:
    // 0x31ca08: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31ca08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31ca0c:
    // 0x31ca0c: 0xac4612ac  sw          $a2, 0x12AC($v0)
    ctx->pc = 0x31ca0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4780), GPR_U32(ctx, 6));
label_31ca10:
    // 0x31ca10: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31ca10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31ca14:
    // 0x31ca14: 0xac4012b0  sw          $zero, 0x12B0($v0)
    ctx->pc = 0x31ca14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4784), GPR_U32(ctx, 0));
label_31ca18:
    // 0x31ca18: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x31ca18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_31ca1c:
    // 0x31ca1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31ca1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31ca20:
    // 0x31ca20: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31ca20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31ca24:
    // 0x31ca24: 0xe46012dc  swc1        $f0, 0x12DC($v1)
    ctx->pc = 0x31ca24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4828), bits); }
label_31ca28:
    // 0x31ca28: 0x10000029  b           . + 4 + (0x29 << 2)
label_31ca2c:
    if (ctx->pc == 0x31CA2Cu) {
        ctx->pc = 0x31CA30u;
        goto label_31ca30;
    }
    ctx->pc = 0x31CA28u;
    {
        const bool branch_taken_0x31ca28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ca28) {
            ctx->pc = 0x31CAD0u;
            goto label_31cad0;
        }
    }
    ctx->pc = 0x31CA30u;
label_31ca30:
    // 0x31ca30: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x31ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_31ca34:
    // 0x31ca34: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x31ca34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
label_31ca38:
    // 0x31ca38: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
label_31ca3c:
    if (ctx->pc == 0x31CA3Cu) {
        ctx->pc = 0x31CA40u;
        goto label_31ca40;
    }
    ctx->pc = 0x31CA38u;
    {
        const bool branch_taken_0x31ca38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x31ca38) {
            ctx->pc = 0x31CA64u;
            goto label_31ca64;
        }
    }
    ctx->pc = 0x31CA40u;
label_31ca40:
    // 0x31ca40: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31ca40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31ca44:
    // 0x31ca44: 0xc46112dc  lwc1        $f1, 0x12DC($v1)
    ctx->pc = 0x31ca44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31ca48:
    // 0x31ca48: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x31ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_31ca4c:
    // 0x31ca4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31ca4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31ca50:
    // 0x31ca50: 0x0  nop
    ctx->pc = 0x31ca50u;
    // NOP
label_31ca54:
    // 0x31ca54: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x31ca54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_31ca58:
    // 0x31ca58: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x31ca58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31ca5c:
    // 0x31ca5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31ca5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_31ca60:
    // 0x31ca60: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x31ca60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_31ca64:
    // 0x31ca64: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31ca64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31ca68:
    // 0x31ca68: 0x8c8312b0  lw          $v1, 0x12B0($a0)
    ctx->pc = 0x31ca68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4784)));
label_31ca6c:
    // 0x31ca6c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x31ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_31ca70:
    // 0x31ca70: 0xac8212b0  sw          $v0, 0x12B0($a0)
    ctx->pc = 0x31ca70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4784), GPR_U32(ctx, 2));
label_31ca74:
    // 0x31ca74: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31ca74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31ca78:
    // 0x31ca78: 0xc48112dc  lwc1        $f1, 0x12DC($a0)
    ctx->pc = 0x31ca78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31ca7c:
    // 0x31ca7c: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x31ca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_31ca80:
    // 0x31ca80: 0x3443126f  ori         $v1, $v0, 0x126F
    ctx->pc = 0x31ca80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_31ca84:
    // 0x31ca84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31ca84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31ca88:
    // 0x31ca88: 0x0  nop
    ctx->pc = 0x31ca88u;
    // NOP
label_31ca8c:
    // 0x31ca8c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31ca8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31ca90:
    // 0x31ca90: 0xe48012dc  swc1        $f0, 0x12DC($a0)
    ctx->pc = 0x31ca90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4828), bits); }
label_31ca94:
    // 0x31ca94: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31ca94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31ca98:
    // 0x31ca98: 0xc46112dc  lwc1        $f1, 0x12DC($v1)
    ctx->pc = 0x31ca98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31ca9c:
    // 0x31ca9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31ca9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31caa0:
    // 0x31caa0: 0x0  nop
    ctx->pc = 0x31caa0u;
    // NOP
label_31caa4:
    // 0x31caa4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31caa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31caa8:
    // 0x31caa8: 0x0  nop
    ctx->pc = 0x31caa8u;
    // NOP
label_31caac:
    // 0x31caac: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_31cab0:
    if (ctx->pc == 0x31CAB0u) {
        ctx->pc = 0x31CAB4u;
        goto label_31cab4;
    }
    ctx->pc = 0x31CAACu;
    {
        const bool branch_taken_0x31caac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31caac) {
            ctx->pc = 0x31CAD0u;
            goto label_31cad0;
        }
    }
    ctx->pc = 0x31CAB4u;
label_31cab4:
    // 0x31cab4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31cab8:
    // 0x31cab8: 0xac4012ac  sw          $zero, 0x12AC($v0)
    ctx->pc = 0x31cab8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4780), GPR_U32(ctx, 0));
label_31cabc:
    // 0x31cabc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31cac0:
    // 0x31cac0: 0xac4012b0  sw          $zero, 0x12B0($v0)
    ctx->pc = 0x31cac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4784), GPR_U32(ctx, 0));
label_31cac4:
    // 0x31cac4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31cac4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31cac8:
    // 0x31cac8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31cac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31cacc:
    // 0x31cacc: 0xe46012dc  swc1        $f0, 0x12DC($v1)
    ctx->pc = 0x31caccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4828), bits); }
label_31cad0:
    // 0x31cad0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31cad4:
    // 0x31cad4: 0x8c4212b4  lw          $v0, 0x12B4($v0)
    ctx->pc = 0x31cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4788)));
label_31cad8:
    // 0x31cad8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31cad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31cadc:
    // 0x31cadc: 0x10440035  beq         $v0, $a0, . + 4 + (0x35 << 2)
label_31cae0:
    if (ctx->pc == 0x31CAE0u) {
        ctx->pc = 0x31CAE4u;
        goto label_31cae4;
    }
    ctx->pc = 0x31CADCu;
    {
        const bool branch_taken_0x31cadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x31cadc) {
            ctx->pc = 0x31CBB4u;
            goto label_31cbb4;
        }
    }
    ctx->pc = 0x31CAE4u;
label_31cae4:
    // 0x31cae4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_31cae8:
    if (ctx->pc == 0x31CAE8u) {
        ctx->pc = 0x31CAECu;
        goto label_31caec;
    }
    ctx->pc = 0x31CAE4u;
    {
        const bool branch_taken_0x31cae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cae4) {
            ctx->pc = 0x31CAF4u;
            goto label_31caf4;
        }
    }
    ctx->pc = 0x31CAECu;
label_31caec:
    // 0x31caec: 0x1000005a  b           . + 4 + (0x5A << 2)
label_31caf0:
    if (ctx->pc == 0x31CAF0u) {
        ctx->pc = 0x31CAF4u;
        goto label_31caf4;
    }
    ctx->pc = 0x31CAECu;
    {
        const bool branch_taken_0x31caec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31caec) {
            ctx->pc = 0x31CC58u;
            goto label_31cc58;
        }
    }
    ctx->pc = 0x31CAF4u;
label_31caf4:
    // 0x31caf4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x31caf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_31caf8:
    // 0x31caf8: 0x34620011  ori         $v0, $v1, 0x11
    ctx->pc = 0x31caf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
label_31cafc:
    // 0x31cafc: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
label_31cb00:
    if (ctx->pc == 0x31CB00u) {
        ctx->pc = 0x31CB04u;
        goto label_31cb04;
    }
    ctx->pc = 0x31CAFCu;
    {
        const bool branch_taken_0x31cafc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x31cafc) {
            ctx->pc = 0x31CB2Cu;
            goto label_31cb2c;
        }
    }
    ctx->pc = 0x31CB04u;
label_31cb04:
    // 0x31cb04: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31cb08:
    // 0x31cb08: 0xc44112e0  lwc1        $f1, 0x12E0($v0)
    ctx->pc = 0x31cb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31cb0c:
    // 0x31cb0c: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x31cb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_31cb10:
    // 0x31cb10: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x31cb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_31cb14:
    // 0x31cb14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31cb14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31cb18:
    // 0x31cb18: 0x0  nop
    ctx->pc = 0x31cb18u;
    // NOP
label_31cb1c:
    // 0x31cb1c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x31cb1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_31cb20:
    // 0x31cb20: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x31cb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31cb24:
    // 0x31cb24: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31cb24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_31cb28:
    // 0x31cb28: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x31cb28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_31cb2c:
    // 0x31cb2c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31cb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31cb30:
    // 0x31cb30: 0xc46112e0  lwc1        $f1, 0x12E0($v1)
    ctx->pc = 0x31cb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31cb34:
    // 0x31cb34: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x31cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_31cb38:
    // 0x31cb38: 0x3444126f  ori         $a0, $v0, 0x126F
    ctx->pc = 0x31cb38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_31cb3c:
    // 0x31cb3c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31cb3cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31cb40:
    // 0x31cb40: 0x0  nop
    ctx->pc = 0x31cb40u;
    // NOP
label_31cb44:
    // 0x31cb44: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31cb44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31cb48:
    // 0x31cb48: 0xe46012e0  swc1        $f0, 0x12E0($v1)
    ctx->pc = 0x31cb48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4832), bits); }
label_31cb4c:
    // 0x31cb4c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31cb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31cb50:
    // 0x31cb50: 0x8c6212b8  lw          $v0, 0x12B8($v1)
    ctx->pc = 0x31cb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4792)));
label_31cb54:
    // 0x31cb54: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x31cb54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_31cb58:
    // 0x31cb58: 0xac6712b8  sw          $a3, 0x12B8($v1)
    ctx->pc = 0x31cb58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4792), GPR_U32(ctx, 7));
label_31cb5c:
    // 0x31cb5c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31cb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31cb60:
    // 0x31cb60: 0xc48112e0  lwc1        $f1, 0x12E0($a0)
    ctx->pc = 0x31cb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31cb64:
    // 0x31cb64: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x31cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_31cb68:
    // 0x31cb68: 0x3446999a  ori         $a2, $v0, 0x999A
    ctx->pc = 0x31cb68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_31cb6c:
    // 0x31cb6c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x31cb6cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31cb70:
    // 0x31cb70: 0x0  nop
    ctx->pc = 0x31cb70u;
    // NOP
label_31cb74:
    // 0x31cb74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x31cb74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31cb78:
    // 0x31cb78: 0x0  nop
    ctx->pc = 0x31cb78u;
    // NOP
label_31cb7c:
    // 0x31cb7c: 0x45010036  bc1t        . + 4 + (0x36 << 2)
label_31cb80:
    if (ctx->pc == 0x31CB80u) {
        ctx->pc = 0x31CB84u;
        goto label_31cb84;
    }
    ctx->pc = 0x31CB7Cu;
    {
        const bool branch_taken_0x31cb7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31cb7c) {
            ctx->pc = 0x31CC58u;
            goto label_31cc58;
        }
    }
    ctx->pc = 0x31CB84u;
label_31cb84:
    // 0x31cb84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31cb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31cb88:
    // 0x31cb88: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31cb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31cb8c:
    // 0x31cb8c: 0xac6212b4  sw          $v0, 0x12B4($v1)
    ctx->pc = 0x31cb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4788), GPR_U32(ctx, 2));
label_31cb90:
    // 0x31cb90: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31cb94:
    // 0x31cb94: 0xac4012b8  sw          $zero, 0x12B8($v0)
    ctx->pc = 0x31cb94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4792), GPR_U32(ctx, 0));
label_31cb98:
    // 0x31cb98: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x31cb98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
label_31cb9c:
    // 0x31cb9c: 0x3464999a  ori         $a0, $v1, 0x999A
    ctx->pc = 0x31cb9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_31cba0:
    // 0x31cba0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31cba0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31cba4:
    // 0x31cba4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31cba8:
    // 0x31cba8: 0xe44012e0  swc1        $f0, 0x12E0($v0)
    ctx->pc = 0x31cba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4832), bits); }
label_31cbac:
    // 0x31cbac: 0x1000002a  b           . + 4 + (0x2A << 2)
label_31cbb0:
    if (ctx->pc == 0x31CBB0u) {
        ctx->pc = 0x31CBB4u;
        goto label_31cbb4;
    }
    ctx->pc = 0x31CBACu;
    {
        const bool branch_taken_0x31cbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cbac) {
            ctx->pc = 0x31CC58u;
            goto label_31cc58;
        }
    }
    ctx->pc = 0x31CBB4u;
label_31cbb4:
    // 0x31cbb4: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x31cbb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
label_31cbb8:
    // 0x31cbb8: 0x34e20011  ori         $v0, $a3, 0x11
    ctx->pc = 0x31cbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)17);
label_31cbbc:
    // 0x31cbbc: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
label_31cbc0:
    if (ctx->pc == 0x31CBC0u) {
        ctx->pc = 0x31CBC4u;
        goto label_31cbc4;
    }
    ctx->pc = 0x31CBBCu;
    {
        const bool branch_taken_0x31cbbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x31cbbc) {
            ctx->pc = 0x31CBECu;
            goto label_31cbec;
        }
    }
    ctx->pc = 0x31CBC4u;
label_31cbc4:
    // 0x31cbc4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31cbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31cbc8:
    // 0x31cbc8: 0xc48112e0  lwc1        $f1, 0x12E0($a0)
    ctx->pc = 0x31cbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31cbcc:
    // 0x31cbcc: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x31cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_31cbd0:
    // 0x31cbd0: 0x3446999a  ori         $a2, $v0, 0x999A
    ctx->pc = 0x31cbd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_31cbd4:
    // 0x31cbd4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x31cbd4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31cbd8:
    // 0x31cbd8: 0x0  nop
    ctx->pc = 0x31cbd8u;
    // NOP
label_31cbdc:
    // 0x31cbdc: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x31cbdcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_31cbe0:
    // 0x31cbe0: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x31cbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31cbe4:
    // 0x31cbe4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31cbe4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_31cbe8:
    // 0x31cbe8: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x31cbe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_31cbec:
    // 0x31cbec: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31cbf0:
    // 0x31cbf0: 0x8c4712b8  lw          $a3, 0x12B8($v0)
    ctx->pc = 0x31cbf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4792)));
label_31cbf4:
    // 0x31cbf4: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x31cbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_31cbf8:
    // 0x31cbf8: 0xac4412b8  sw          $a0, 0x12B8($v0)
    ctx->pc = 0x31cbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4792), GPR_U32(ctx, 4));
label_31cbfc:
    // 0x31cbfc: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x31cbfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31cc00:
    // 0x31cc00: 0xc4c112e0  lwc1        $f1, 0x12E0($a2)
    ctx->pc = 0x31cc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31cc04:
    // 0x31cc04: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x31cc04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_31cc08:
    // 0x31cc08: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x31cc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_31cc0c:
    // 0x31cc0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31cc0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31cc10:
    // 0x31cc10: 0x0  nop
    ctx->pc = 0x31cc10u;
    // NOP
label_31cc14:
    // 0x31cc14: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31cc14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31cc18:
    // 0x31cc18: 0xe4c012e0  swc1        $f0, 0x12E0($a2)
    ctx->pc = 0x31cc18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4832), bits); }
label_31cc1c:
    // 0x31cc1c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31cc20:
    // 0x31cc20: 0xc44112e0  lwc1        $f1, 0x12E0($v0)
    ctx->pc = 0x31cc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31cc24:
    // 0x31cc24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31cc24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31cc28:
    // 0x31cc28: 0x0  nop
    ctx->pc = 0x31cc28u;
    // NOP
label_31cc2c:
    // 0x31cc2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31cc2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31cc30:
    // 0x31cc30: 0x0  nop
    ctx->pc = 0x31cc30u;
    // NOP
label_31cc34:
    // 0x31cc34: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_31cc38:
    if (ctx->pc == 0x31CC38u) {
        ctx->pc = 0x31CC3Cu;
        goto label_31cc3c;
    }
    ctx->pc = 0x31CC34u;
    {
        const bool branch_taken_0x31cc34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31cc34) {
            ctx->pc = 0x31CC58u;
            goto label_31cc58;
        }
    }
    ctx->pc = 0x31CC3Cu;
label_31cc3c:
    // 0x31cc3c: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x31cc3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31cc40:
    // 0x31cc40: 0xace012b4  sw          $zero, 0x12B4($a3)
    ctx->pc = 0x31cc40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4788), GPR_U32(ctx, 0));
label_31cc44:
    // 0x31cc44: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31cc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31cc48:
    // 0x31cc48: 0xac8012b8  sw          $zero, 0x12B8($a0)
    ctx->pc = 0x31cc48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4792), GPR_U32(ctx, 0));
label_31cc4c:
    // 0x31cc4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31cc4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31cc50:
    // 0x31cc50: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x31cc50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31cc54:
    // 0x31cc54: 0xe4c012e0  swc1        $f0, 0x12E0($a2)
    ctx->pc = 0x31cc54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4832), bits); }
label_31cc58:
    // 0x31cc58: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31cc5c:
    // 0x31cc5c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31cc5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31cc60:
    // 0x31cc60: 0xc0c7874  jal         func_31E1D0
label_31cc64:
    if (ctx->pc == 0x31CC64u) {
        ctx->pc = 0x31CC68u;
        goto label_31cc68;
    }
    ctx->pc = 0x31CC60u;
    SET_GPR_U32(ctx, 31, 0x31CC68u);
    ctx->pc = 0x31E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E1D0u, 0x31CC60u, 0x31CC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CC68u;
label_31cc68:
    // 0x31cc68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_31cc6c:
    if (ctx->pc == 0x31CC6Cu) {
        ctx->pc = 0x31CC70u;
        goto label_31cc70;
    }
    ctx->pc = 0x31CC68u;
    {
        const bool branch_taken_0x31cc68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cc68) {
            ctx->pc = 0x31CC80u;
            goto label_31cc80;
        }
    }
    ctx->pc = 0x31CC70u;
label_31cc70:
    // 0x31cc70: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x31cc70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31cc74:
    // 0x31cc74: 0x8ce41290  lw          $a0, 0x1290($a3)
    ctx->pc = 0x31cc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4752)));
label_31cc78:
    // 0x31cc78: 0x34860004  ori         $a2, $a0, 0x4
    ctx->pc = 0x31cc78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
label_31cc7c:
    // 0x31cc7c: 0xace61290  sw          $a2, 0x1290($a3)
    ctx->pc = 0x31cc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4752), GPR_U32(ctx, 6));
label_31cc80:
    // 0x31cc80: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31cc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31cc84:
    // 0x31cc84: 0x8c901290  lw          $s0, 0x1290($a0)
    ctx->pc = 0x31cc84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4752)));
label_31cc88:
    // 0x31cc88: 0x32030004  andi        $v1, $s0, 0x4
    ctx->pc = 0x31cc88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
label_31cc8c:
    // 0x31cc8c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_31cc90:
    if (ctx->pc == 0x31CC90u) {
        ctx->pc = 0x31CC94u;
        goto label_31cc94;
    }
    ctx->pc = 0x31CC8Cu;
    {
        const bool branch_taken_0x31cc8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cc8c) {
            ctx->pc = 0x31CCD4u;
            goto label_31ccd4;
        }
    }
    ctx->pc = 0x31CC94u;
label_31cc94:
    // 0x31cc94: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x31cc94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31cc98:
    // 0x31cc98: 0x8ce41290  lw          $a0, 0x1290($a3)
    ctx->pc = 0x31cc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4752)));
label_31cc9c:
    // 0x31cc9c: 0x30860002  andi        $a2, $a0, 0x2
    ctx->pc = 0x31cc9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_31cca0:
    // 0x31cca0: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
label_31cca4:
    if (ctx->pc == 0x31CCA4u) {
        ctx->pc = 0x31CCA8u;
        goto label_31cca8;
    }
    ctx->pc = 0x31CCA0u;
    {
        const bool branch_taken_0x31cca0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cca0) {
            ctx->pc = 0x31CCD4u;
            goto label_31ccd4;
        }
    }
    ctx->pc = 0x31CCA8u;
label_31cca8:
    // 0x31cca8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x31cca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31ccac:
    // 0x31ccac: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31ccacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31ccb0:
    // 0x31ccb0: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x31ccb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_31ccb4:
    // 0x31ccb4: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x31ccb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31ccb8:
    // 0x31ccb8: 0xa0e00001  sb          $zero, 0x1($a3)
    ctx->pc = 0x31ccb8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 0));
label_31ccbc:
    // 0x31ccbc: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31ccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31ccc0:
    // 0x31ccc0: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x31ccc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_31ccc4:
    // 0x31ccc4: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x31ccc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31ccc8:
    // 0x31ccc8: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x31ccc8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
label_31cccc:
    // 0x31cccc: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31ccccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31ccd0:
    // 0x31ccd0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x31ccd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_31ccd4:
    // 0x31ccd4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31ccd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_31ccd8:
    // 0x31ccd8: 0x8c311a48  lw          $s1, 0x1A48($at)
    ctx->pc = 0x31ccd8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6728)));
label_31ccdc:
    // 0x31ccdc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x31ccdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_31cce0:
    // 0x31cce0: 0x2232024  and         $a0, $s1, $v1
    ctx->pc = 0x31cce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
label_31cce4:
    // 0x31cce4: 0x14800018  bnez        $a0, . + 4 + (0x18 << 2)
label_31cce8:
    if (ctx->pc == 0x31CCE8u) {
        ctx->pc = 0x31CCECu;
        goto label_31ccec;
    }
    ctx->pc = 0x31CCE4u;
    {
        const bool branch_taken_0x31cce4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x31cce4) {
            ctx->pc = 0x31CD48u;
            goto label_31cd48;
        }
    }
    ctx->pc = 0x31CCECu;
label_31ccec:
    // 0x31ccec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31ccecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_31ccf0:
    // 0x31ccf0: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x31ccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6728)));
label_31ccf4:
    // 0x31ccf4: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x31ccf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_31ccf8:
    // 0x31ccf8: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_31ccfc:
    if (ctx->pc == 0x31CCFCu) {
        ctx->pc = 0x31CD00u;
        goto label_31cd00;
    }
    ctx->pc = 0x31CCF8u;
    {
        const bool branch_taken_0x31ccf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ccf8) {
            ctx->pc = 0x31CD48u;
            goto label_31cd48;
        }
    }
    ctx->pc = 0x31CD00u;
label_31cd00:
    // 0x31cd00: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31cd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31cd04:
    // 0x31cd04: 0x8c831330  lw          $v1, 0x1330($a0)
    ctx->pc = 0x31cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4912)));
label_31cd08:
    // 0x31cd08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x31cd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_31cd0c:
    // 0x31cd0c: 0xac831330  sw          $v1, 0x1330($a0)
    ctx->pc = 0x31cd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4912), GPR_U32(ctx, 3));
label_31cd10:
    // 0x31cd10: 0x1c60000d  bgtz        $v1, . + 4 + (0xD << 2)
label_31cd14:
    if (ctx->pc == 0x31CD14u) {
        ctx->pc = 0x31CD18u;
        goto label_31cd18;
    }
    ctx->pc = 0x31CD10u;
    {
        const bool branch_taken_0x31cd10 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x31cd10) {
            ctx->pc = 0x31CD48u;
            goto label_31cd48;
        }
    }
    ctx->pc = 0x31CD18u;
label_31cd18:
    // 0x31cd18: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x31cd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31cd1c:
    // 0x31cd1c: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x31cd1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31cd20:
    // 0x31cd20: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x31cd20u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
label_31cd24:
    // 0x31cd24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31cd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31cd28:
    // 0x31cd28: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x31cd28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31cd2c:
    // 0x31cd2c: 0xa0c40001  sb          $a0, 0x1($a2)
    ctx->pc = 0x31cd2cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 4));
label_31cd30:
    // 0x31cd30: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31cd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31cd34:
    // 0x31cd34: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x31cd34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_31cd38:
    // 0x31cd38: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x31cd38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31cd3c:
    // 0x31cd3c: 0xa0e00003  sb          $zero, 0x3($a3)
    ctx->pc = 0x31cd3cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
label_31cd40:
    // 0x31cd40: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31cd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_31cd44:
    // 0x31cd44: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x31cd44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_31cd48:
    // 0x31cd48: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x31cd48u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31cd4c:
    // 0x31cd4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31cd4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31cd50:
    // 0x31cd50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31cd50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31cd54:
    // 0x31cd54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31cd54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31cd58:
    // 0x31cd58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31cd58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_31cd5c:
    // 0x31cd5c: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x31cd5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_31cd60:
    // 0x31cd60: 0x3e00008  jr          $ra
label_31cd64:
    if (ctx->pc == 0x31CD64u) {
        ctx->pc = 0x31CD68u;
        goto label_fallthrough_0x31cd60;
    }
    ctx->pc = 0x31CD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CD60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31cd60:
    ctx->pc = 0x31CD68u;
}
