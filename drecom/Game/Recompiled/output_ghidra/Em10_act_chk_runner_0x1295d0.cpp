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

// Function: Em10_act_chk_runner
// Address: 0x1295d0 - 0x129d90
void Em10_act_chk_runner_0x1295d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_act_chk_runner_0x1295d0");
#endif

    switch (ctx->pc) {
        case 0x1295d0u: goto label_1295d0;
        case 0x1295d4u: goto label_1295d4;
        case 0x1295d8u: goto label_1295d8;
        case 0x1295dcu: goto label_1295dc;
        case 0x1295e0u: goto label_1295e0;
        case 0x1295e4u: goto label_1295e4;
        case 0x1295e8u: goto label_1295e8;
        case 0x1295ecu: goto label_1295ec;
        case 0x1295f0u: goto label_1295f0;
        case 0x1295f4u: goto label_1295f4;
        case 0x1295f8u: goto label_1295f8;
        case 0x1295fcu: goto label_1295fc;
        case 0x129600u: goto label_129600;
        case 0x129604u: goto label_129604;
        case 0x129608u: goto label_129608;
        case 0x12960cu: goto label_12960c;
        case 0x129610u: goto label_129610;
        case 0x129614u: goto label_129614;
        case 0x129618u: goto label_129618;
        case 0x12961cu: goto label_12961c;
        case 0x129620u: goto label_129620;
        case 0x129624u: goto label_129624;
        case 0x129628u: goto label_129628;
        case 0x12962cu: goto label_12962c;
        case 0x129630u: goto label_129630;
        case 0x129634u: goto label_129634;
        case 0x129638u: goto label_129638;
        case 0x12963cu: goto label_12963c;
        case 0x129640u: goto label_129640;
        case 0x129644u: goto label_129644;
        case 0x129648u: goto label_129648;
        case 0x12964cu: goto label_12964c;
        case 0x129650u: goto label_129650;
        case 0x129654u: goto label_129654;
        case 0x129658u: goto label_129658;
        case 0x12965cu: goto label_12965c;
        case 0x129660u: goto label_129660;
        case 0x129664u: goto label_129664;
        case 0x129668u: goto label_129668;
        case 0x12966cu: goto label_12966c;
        case 0x129670u: goto label_129670;
        case 0x129674u: goto label_129674;
        case 0x129678u: goto label_129678;
        case 0x12967cu: goto label_12967c;
        case 0x129680u: goto label_129680;
        case 0x129684u: goto label_129684;
        case 0x129688u: goto label_129688;
        case 0x12968cu: goto label_12968c;
        case 0x129690u: goto label_129690;
        case 0x129694u: goto label_129694;
        case 0x129698u: goto label_129698;
        case 0x12969cu: goto label_12969c;
        case 0x1296a0u: goto label_1296a0;
        case 0x1296a4u: goto label_1296a4;
        case 0x1296a8u: goto label_1296a8;
        case 0x1296acu: goto label_1296ac;
        case 0x1296b0u: goto label_1296b0;
        case 0x1296b4u: goto label_1296b4;
        case 0x1296b8u: goto label_1296b8;
        case 0x1296bcu: goto label_1296bc;
        case 0x1296c0u: goto label_1296c0;
        case 0x1296c4u: goto label_1296c4;
        case 0x1296c8u: goto label_1296c8;
        case 0x1296ccu: goto label_1296cc;
        case 0x1296d0u: goto label_1296d0;
        case 0x1296d4u: goto label_1296d4;
        case 0x1296d8u: goto label_1296d8;
        case 0x1296dcu: goto label_1296dc;
        case 0x1296e0u: goto label_1296e0;
        case 0x1296e4u: goto label_1296e4;
        case 0x1296e8u: goto label_1296e8;
        case 0x1296ecu: goto label_1296ec;
        case 0x1296f0u: goto label_1296f0;
        case 0x1296f4u: goto label_1296f4;
        case 0x1296f8u: goto label_1296f8;
        case 0x1296fcu: goto label_1296fc;
        case 0x129700u: goto label_129700;
        case 0x129704u: goto label_129704;
        case 0x129708u: goto label_129708;
        case 0x12970cu: goto label_12970c;
        case 0x129710u: goto label_129710;
        case 0x129714u: goto label_129714;
        case 0x129718u: goto label_129718;
        case 0x12971cu: goto label_12971c;
        case 0x129720u: goto label_129720;
        case 0x129724u: goto label_129724;
        case 0x129728u: goto label_129728;
        case 0x12972cu: goto label_12972c;
        case 0x129730u: goto label_129730;
        case 0x129734u: goto label_129734;
        case 0x129738u: goto label_129738;
        case 0x12973cu: goto label_12973c;
        case 0x129740u: goto label_129740;
        case 0x129744u: goto label_129744;
        case 0x129748u: goto label_129748;
        case 0x12974cu: goto label_12974c;
        case 0x129750u: goto label_129750;
        case 0x129754u: goto label_129754;
        case 0x129758u: goto label_129758;
        case 0x12975cu: goto label_12975c;
        case 0x129760u: goto label_129760;
        case 0x129764u: goto label_129764;
        case 0x129768u: goto label_129768;
        case 0x12976cu: goto label_12976c;
        case 0x129770u: goto label_129770;
        case 0x129774u: goto label_129774;
        case 0x129778u: goto label_129778;
        case 0x12977cu: goto label_12977c;
        case 0x129780u: goto label_129780;
        case 0x129784u: goto label_129784;
        case 0x129788u: goto label_129788;
        case 0x12978cu: goto label_12978c;
        case 0x129790u: goto label_129790;
        case 0x129794u: goto label_129794;
        case 0x129798u: goto label_129798;
        case 0x12979cu: goto label_12979c;
        case 0x1297a0u: goto label_1297a0;
        case 0x1297a4u: goto label_1297a4;
        case 0x1297a8u: goto label_1297a8;
        case 0x1297acu: goto label_1297ac;
        case 0x1297b0u: goto label_1297b0;
        case 0x1297b4u: goto label_1297b4;
        case 0x1297b8u: goto label_1297b8;
        case 0x1297bcu: goto label_1297bc;
        case 0x1297c0u: goto label_1297c0;
        case 0x1297c4u: goto label_1297c4;
        case 0x1297c8u: goto label_1297c8;
        case 0x1297ccu: goto label_1297cc;
        case 0x1297d0u: goto label_1297d0;
        case 0x1297d4u: goto label_1297d4;
        case 0x1297d8u: goto label_1297d8;
        case 0x1297dcu: goto label_1297dc;
        case 0x1297e0u: goto label_1297e0;
        case 0x1297e4u: goto label_1297e4;
        case 0x1297e8u: goto label_1297e8;
        case 0x1297ecu: goto label_1297ec;
        case 0x1297f0u: goto label_1297f0;
        case 0x1297f4u: goto label_1297f4;
        case 0x1297f8u: goto label_1297f8;
        case 0x1297fcu: goto label_1297fc;
        case 0x129800u: goto label_129800;
        case 0x129804u: goto label_129804;
        case 0x129808u: goto label_129808;
        case 0x12980cu: goto label_12980c;
        case 0x129810u: goto label_129810;
        case 0x129814u: goto label_129814;
        case 0x129818u: goto label_129818;
        case 0x12981cu: goto label_12981c;
        case 0x129820u: goto label_129820;
        case 0x129824u: goto label_129824;
        case 0x129828u: goto label_129828;
        case 0x12982cu: goto label_12982c;
        case 0x129830u: goto label_129830;
        case 0x129834u: goto label_129834;
        case 0x129838u: goto label_129838;
        case 0x12983cu: goto label_12983c;
        case 0x129840u: goto label_129840;
        case 0x129844u: goto label_129844;
        case 0x129848u: goto label_129848;
        case 0x12984cu: goto label_12984c;
        case 0x129850u: goto label_129850;
        case 0x129854u: goto label_129854;
        case 0x129858u: goto label_129858;
        case 0x12985cu: goto label_12985c;
        case 0x129860u: goto label_129860;
        case 0x129864u: goto label_129864;
        case 0x129868u: goto label_129868;
        case 0x12986cu: goto label_12986c;
        case 0x129870u: goto label_129870;
        case 0x129874u: goto label_129874;
        case 0x129878u: goto label_129878;
        case 0x12987cu: goto label_12987c;
        case 0x129880u: goto label_129880;
        case 0x129884u: goto label_129884;
        case 0x129888u: goto label_129888;
        case 0x12988cu: goto label_12988c;
        case 0x129890u: goto label_129890;
        case 0x129894u: goto label_129894;
        case 0x129898u: goto label_129898;
        case 0x12989cu: goto label_12989c;
        case 0x1298a0u: goto label_1298a0;
        case 0x1298a4u: goto label_1298a4;
        case 0x1298a8u: goto label_1298a8;
        case 0x1298acu: goto label_1298ac;
        case 0x1298b0u: goto label_1298b0;
        case 0x1298b4u: goto label_1298b4;
        case 0x1298b8u: goto label_1298b8;
        case 0x1298bcu: goto label_1298bc;
        case 0x1298c0u: goto label_1298c0;
        case 0x1298c4u: goto label_1298c4;
        case 0x1298c8u: goto label_1298c8;
        case 0x1298ccu: goto label_1298cc;
        case 0x1298d0u: goto label_1298d0;
        case 0x1298d4u: goto label_1298d4;
        case 0x1298d8u: goto label_1298d8;
        case 0x1298dcu: goto label_1298dc;
        case 0x1298e0u: goto label_1298e0;
        case 0x1298e4u: goto label_1298e4;
        case 0x1298e8u: goto label_1298e8;
        case 0x1298ecu: goto label_1298ec;
        case 0x1298f0u: goto label_1298f0;
        case 0x1298f4u: goto label_1298f4;
        case 0x1298f8u: goto label_1298f8;
        case 0x1298fcu: goto label_1298fc;
        case 0x129900u: goto label_129900;
        case 0x129904u: goto label_129904;
        case 0x129908u: goto label_129908;
        case 0x12990cu: goto label_12990c;
        case 0x129910u: goto label_129910;
        case 0x129914u: goto label_129914;
        case 0x129918u: goto label_129918;
        case 0x12991cu: goto label_12991c;
        case 0x129920u: goto label_129920;
        case 0x129924u: goto label_129924;
        case 0x129928u: goto label_129928;
        case 0x12992cu: goto label_12992c;
        case 0x129930u: goto label_129930;
        case 0x129934u: goto label_129934;
        case 0x129938u: goto label_129938;
        case 0x12993cu: goto label_12993c;
        case 0x129940u: goto label_129940;
        case 0x129944u: goto label_129944;
        case 0x129948u: goto label_129948;
        case 0x12994cu: goto label_12994c;
        case 0x129950u: goto label_129950;
        case 0x129954u: goto label_129954;
        case 0x129958u: goto label_129958;
        case 0x12995cu: goto label_12995c;
        case 0x129960u: goto label_129960;
        case 0x129964u: goto label_129964;
        case 0x129968u: goto label_129968;
        case 0x12996cu: goto label_12996c;
        case 0x129970u: goto label_129970;
        case 0x129974u: goto label_129974;
        case 0x129978u: goto label_129978;
        case 0x12997cu: goto label_12997c;
        case 0x129980u: goto label_129980;
        case 0x129984u: goto label_129984;
        case 0x129988u: goto label_129988;
        case 0x12998cu: goto label_12998c;
        case 0x129990u: goto label_129990;
        case 0x129994u: goto label_129994;
        case 0x129998u: goto label_129998;
        case 0x12999cu: goto label_12999c;
        case 0x1299a0u: goto label_1299a0;
        case 0x1299a4u: goto label_1299a4;
        case 0x1299a8u: goto label_1299a8;
        case 0x1299acu: goto label_1299ac;
        case 0x1299b0u: goto label_1299b0;
        case 0x1299b4u: goto label_1299b4;
        case 0x1299b8u: goto label_1299b8;
        case 0x1299bcu: goto label_1299bc;
        case 0x1299c0u: goto label_1299c0;
        case 0x1299c4u: goto label_1299c4;
        case 0x1299c8u: goto label_1299c8;
        case 0x1299ccu: goto label_1299cc;
        case 0x1299d0u: goto label_1299d0;
        case 0x1299d4u: goto label_1299d4;
        case 0x1299d8u: goto label_1299d8;
        case 0x1299dcu: goto label_1299dc;
        case 0x1299e0u: goto label_1299e0;
        case 0x1299e4u: goto label_1299e4;
        case 0x1299e8u: goto label_1299e8;
        case 0x1299ecu: goto label_1299ec;
        case 0x1299f0u: goto label_1299f0;
        case 0x1299f4u: goto label_1299f4;
        case 0x1299f8u: goto label_1299f8;
        case 0x1299fcu: goto label_1299fc;
        case 0x129a00u: goto label_129a00;
        case 0x129a04u: goto label_129a04;
        case 0x129a08u: goto label_129a08;
        case 0x129a0cu: goto label_129a0c;
        case 0x129a10u: goto label_129a10;
        case 0x129a14u: goto label_129a14;
        case 0x129a18u: goto label_129a18;
        case 0x129a1cu: goto label_129a1c;
        case 0x129a20u: goto label_129a20;
        case 0x129a24u: goto label_129a24;
        case 0x129a28u: goto label_129a28;
        case 0x129a2cu: goto label_129a2c;
        case 0x129a30u: goto label_129a30;
        case 0x129a34u: goto label_129a34;
        case 0x129a38u: goto label_129a38;
        case 0x129a3cu: goto label_129a3c;
        case 0x129a40u: goto label_129a40;
        case 0x129a44u: goto label_129a44;
        case 0x129a48u: goto label_129a48;
        case 0x129a4cu: goto label_129a4c;
        case 0x129a50u: goto label_129a50;
        case 0x129a54u: goto label_129a54;
        case 0x129a58u: goto label_129a58;
        case 0x129a5cu: goto label_129a5c;
        case 0x129a60u: goto label_129a60;
        case 0x129a64u: goto label_129a64;
        case 0x129a68u: goto label_129a68;
        case 0x129a6cu: goto label_129a6c;
        case 0x129a70u: goto label_129a70;
        case 0x129a74u: goto label_129a74;
        case 0x129a78u: goto label_129a78;
        case 0x129a7cu: goto label_129a7c;
        case 0x129a80u: goto label_129a80;
        case 0x129a84u: goto label_129a84;
        case 0x129a88u: goto label_129a88;
        case 0x129a8cu: goto label_129a8c;
        case 0x129a90u: goto label_129a90;
        case 0x129a94u: goto label_129a94;
        case 0x129a98u: goto label_129a98;
        case 0x129a9cu: goto label_129a9c;
        case 0x129aa0u: goto label_129aa0;
        case 0x129aa4u: goto label_129aa4;
        case 0x129aa8u: goto label_129aa8;
        case 0x129aacu: goto label_129aac;
        case 0x129ab0u: goto label_129ab0;
        case 0x129ab4u: goto label_129ab4;
        case 0x129ab8u: goto label_129ab8;
        case 0x129abcu: goto label_129abc;
        case 0x129ac0u: goto label_129ac0;
        case 0x129ac4u: goto label_129ac4;
        case 0x129ac8u: goto label_129ac8;
        case 0x129accu: goto label_129acc;
        case 0x129ad0u: goto label_129ad0;
        case 0x129ad4u: goto label_129ad4;
        case 0x129ad8u: goto label_129ad8;
        case 0x129adcu: goto label_129adc;
        case 0x129ae0u: goto label_129ae0;
        case 0x129ae4u: goto label_129ae4;
        case 0x129ae8u: goto label_129ae8;
        case 0x129aecu: goto label_129aec;
        case 0x129af0u: goto label_129af0;
        case 0x129af4u: goto label_129af4;
        case 0x129af8u: goto label_129af8;
        case 0x129afcu: goto label_129afc;
        case 0x129b00u: goto label_129b00;
        case 0x129b04u: goto label_129b04;
        case 0x129b08u: goto label_129b08;
        case 0x129b0cu: goto label_129b0c;
        case 0x129b10u: goto label_129b10;
        case 0x129b14u: goto label_129b14;
        case 0x129b18u: goto label_129b18;
        case 0x129b1cu: goto label_129b1c;
        case 0x129b20u: goto label_129b20;
        case 0x129b24u: goto label_129b24;
        case 0x129b28u: goto label_129b28;
        case 0x129b2cu: goto label_129b2c;
        case 0x129b30u: goto label_129b30;
        case 0x129b34u: goto label_129b34;
        case 0x129b38u: goto label_129b38;
        case 0x129b3cu: goto label_129b3c;
        case 0x129b40u: goto label_129b40;
        case 0x129b44u: goto label_129b44;
        case 0x129b48u: goto label_129b48;
        case 0x129b4cu: goto label_129b4c;
        case 0x129b50u: goto label_129b50;
        case 0x129b54u: goto label_129b54;
        case 0x129b58u: goto label_129b58;
        case 0x129b5cu: goto label_129b5c;
        case 0x129b60u: goto label_129b60;
        case 0x129b64u: goto label_129b64;
        case 0x129b68u: goto label_129b68;
        case 0x129b6cu: goto label_129b6c;
        case 0x129b70u: goto label_129b70;
        case 0x129b74u: goto label_129b74;
        case 0x129b78u: goto label_129b78;
        case 0x129b7cu: goto label_129b7c;
        case 0x129b80u: goto label_129b80;
        case 0x129b84u: goto label_129b84;
        case 0x129b88u: goto label_129b88;
        case 0x129b8cu: goto label_129b8c;
        case 0x129b90u: goto label_129b90;
        case 0x129b94u: goto label_129b94;
        case 0x129b98u: goto label_129b98;
        case 0x129b9cu: goto label_129b9c;
        case 0x129ba0u: goto label_129ba0;
        case 0x129ba4u: goto label_129ba4;
        case 0x129ba8u: goto label_129ba8;
        case 0x129bacu: goto label_129bac;
        case 0x129bb0u: goto label_129bb0;
        case 0x129bb4u: goto label_129bb4;
        case 0x129bb8u: goto label_129bb8;
        case 0x129bbcu: goto label_129bbc;
        case 0x129bc0u: goto label_129bc0;
        case 0x129bc4u: goto label_129bc4;
        case 0x129bc8u: goto label_129bc8;
        case 0x129bccu: goto label_129bcc;
        case 0x129bd0u: goto label_129bd0;
        case 0x129bd4u: goto label_129bd4;
        case 0x129bd8u: goto label_129bd8;
        case 0x129bdcu: goto label_129bdc;
        case 0x129be0u: goto label_129be0;
        case 0x129be4u: goto label_129be4;
        case 0x129be8u: goto label_129be8;
        case 0x129becu: goto label_129bec;
        case 0x129bf0u: goto label_129bf0;
        case 0x129bf4u: goto label_129bf4;
        case 0x129bf8u: goto label_129bf8;
        case 0x129bfcu: goto label_129bfc;
        case 0x129c00u: goto label_129c00;
        case 0x129c04u: goto label_129c04;
        case 0x129c08u: goto label_129c08;
        case 0x129c0cu: goto label_129c0c;
        case 0x129c10u: goto label_129c10;
        case 0x129c14u: goto label_129c14;
        case 0x129c18u: goto label_129c18;
        case 0x129c1cu: goto label_129c1c;
        case 0x129c20u: goto label_129c20;
        case 0x129c24u: goto label_129c24;
        case 0x129c28u: goto label_129c28;
        case 0x129c2cu: goto label_129c2c;
        case 0x129c30u: goto label_129c30;
        case 0x129c34u: goto label_129c34;
        case 0x129c38u: goto label_129c38;
        case 0x129c3cu: goto label_129c3c;
        case 0x129c40u: goto label_129c40;
        case 0x129c44u: goto label_129c44;
        case 0x129c48u: goto label_129c48;
        case 0x129c4cu: goto label_129c4c;
        case 0x129c50u: goto label_129c50;
        case 0x129c54u: goto label_129c54;
        case 0x129c58u: goto label_129c58;
        case 0x129c5cu: goto label_129c5c;
        case 0x129c60u: goto label_129c60;
        case 0x129c64u: goto label_129c64;
        case 0x129c68u: goto label_129c68;
        case 0x129c6cu: goto label_129c6c;
        case 0x129c70u: goto label_129c70;
        case 0x129c74u: goto label_129c74;
        case 0x129c78u: goto label_129c78;
        case 0x129c7cu: goto label_129c7c;
        case 0x129c80u: goto label_129c80;
        case 0x129c84u: goto label_129c84;
        case 0x129c88u: goto label_129c88;
        case 0x129c8cu: goto label_129c8c;
        case 0x129c90u: goto label_129c90;
        case 0x129c94u: goto label_129c94;
        case 0x129c98u: goto label_129c98;
        case 0x129c9cu: goto label_129c9c;
        case 0x129ca0u: goto label_129ca0;
        case 0x129ca4u: goto label_129ca4;
        case 0x129ca8u: goto label_129ca8;
        case 0x129cacu: goto label_129cac;
        case 0x129cb0u: goto label_129cb0;
        case 0x129cb4u: goto label_129cb4;
        case 0x129cb8u: goto label_129cb8;
        case 0x129cbcu: goto label_129cbc;
        case 0x129cc0u: goto label_129cc0;
        case 0x129cc4u: goto label_129cc4;
        case 0x129cc8u: goto label_129cc8;
        case 0x129cccu: goto label_129ccc;
        case 0x129cd0u: goto label_129cd0;
        case 0x129cd4u: goto label_129cd4;
        case 0x129cd8u: goto label_129cd8;
        case 0x129cdcu: goto label_129cdc;
        case 0x129ce0u: goto label_129ce0;
        case 0x129ce4u: goto label_129ce4;
        case 0x129ce8u: goto label_129ce8;
        case 0x129cecu: goto label_129cec;
        case 0x129cf0u: goto label_129cf0;
        case 0x129cf4u: goto label_129cf4;
        case 0x129cf8u: goto label_129cf8;
        case 0x129cfcu: goto label_129cfc;
        case 0x129d00u: goto label_129d00;
        case 0x129d04u: goto label_129d04;
        case 0x129d08u: goto label_129d08;
        case 0x129d0cu: goto label_129d0c;
        case 0x129d10u: goto label_129d10;
        case 0x129d14u: goto label_129d14;
        case 0x129d18u: goto label_129d18;
        case 0x129d1cu: goto label_129d1c;
        case 0x129d20u: goto label_129d20;
        case 0x129d24u: goto label_129d24;
        case 0x129d28u: goto label_129d28;
        case 0x129d2cu: goto label_129d2c;
        case 0x129d30u: goto label_129d30;
        case 0x129d34u: goto label_129d34;
        case 0x129d38u: goto label_129d38;
        case 0x129d3cu: goto label_129d3c;
        case 0x129d40u: goto label_129d40;
        case 0x129d44u: goto label_129d44;
        case 0x129d48u: goto label_129d48;
        case 0x129d4cu: goto label_129d4c;
        case 0x129d50u: goto label_129d50;
        case 0x129d54u: goto label_129d54;
        case 0x129d58u: goto label_129d58;
        case 0x129d5cu: goto label_129d5c;
        case 0x129d60u: goto label_129d60;
        case 0x129d64u: goto label_129d64;
        case 0x129d68u: goto label_129d68;
        case 0x129d6cu: goto label_129d6c;
        case 0x129d70u: goto label_129d70;
        case 0x129d74u: goto label_129d74;
        case 0x129d78u: goto label_129d78;
        case 0x129d7cu: goto label_129d7c;
        case 0x129d80u: goto label_129d80;
        case 0x129d84u: goto label_129d84;
        case 0x129d88u: goto label_129d88;
        case 0x129d8cu: goto label_129d8c;
        default: break;
    }

    ctx->pc = 0x1295d0u;

label_1295d0:
    // 0x1295d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1295d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1295d4:
    // 0x1295d4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x1295d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_1295d8:
    // 0x1295d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1295d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1295dc:
    // 0x1295dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1295dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1295e0:
    // 0x1295e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1295e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1295e4:
    // 0x1295e4: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1295e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_1295e8:
    // 0x1295e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1295e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1295ec:
    // 0x1295ec: 0x24501330  addiu       $s0, $v0, 0x1330
    ctx->pc = 0x1295ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1295f0:
    // 0x1295f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1295f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1295f4:
    // 0x1295f4: 0xc05cdd8  jal         func_173760
label_1295f8:
    if (ctx->pc == 0x1295F8u) {
        ctx->pc = 0x1295FCu;
        goto label_1295fc;
    }
    ctx->pc = 0x1295F4u;
    SET_GPR_U32(ctx, 31, 0x1295FCu);
    ctx->pc = 0x173760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173760u, 0x1295F4u, 0x1295FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1295FCu;
label_1295fc:
    // 0x1295fc: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1295fcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_129600:
    // 0x129600: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129604:
    // 0x129604: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x129604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129608:
    // 0x129608: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x129608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_12960c:
    // 0x12960c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x12960cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_129610:
    // 0x129610: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x129610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_129614:
    // 0x129614: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x129614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_129618:
    // 0x129618: 0xc05cc90  jal         func_173240
label_12961c:
    if (ctx->pc == 0x12961Cu) {
        ctx->pc = 0x129620u;
        goto label_129620;
    }
    ctx->pc = 0x129618u;
    SET_GPR_U32(ctx, 31, 0x129620u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x129618u, 0x129620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129620u;
label_129620:
    // 0x129620: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x129620u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_129624:
    // 0x129624: 0x2e410008  sltiu       $at, $s2, 0x8
    ctx->pc = 0x129624u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_129628:
    // 0x129628: 0x102001d2  beqz        $at, . + 4 + (0x1D2 << 2)
label_12962c:
    if (ctx->pc == 0x12962Cu) {
        ctx->pc = 0x129630u;
        goto label_129630;
    }
    ctx->pc = 0x129628u;
    {
        const bool branch_taken_0x129628 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x129628) {
            ctx->pc = 0x129D74u;
            goto label_129d74;
        }
    }
    ctx->pc = 0x129630u;
label_129630:
    // 0x129630: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x129630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_129634:
    // 0x129634: 0x2464e420  addiu       $a0, $v1, -0x1BE0
    ctx->pc = 0x129634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960160));
label_129638:
    // 0x129638: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x129638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_12963c:
    // 0x12963c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12963cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_129640:
    // 0x129640: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x129640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_129644:
    // 0x129644: 0x600008  jr          $v1
label_129648:
    if (ctx->pc == 0x129648u) {
        ctx->pc = 0x12964Cu;
        goto label_12964c;
    }
    ctx->pc = 0x129644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129644u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12964Cu;
label_12964c:
    // 0x12964c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x12964cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_129650:
    // 0x129650: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x129650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_129654:
    // 0x129654: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_129658:
    if (ctx->pc == 0x129658u) {
        ctx->pc = 0x12965Cu;
        goto label_12965c;
    }
    ctx->pc = 0x129654u;
    {
        const bool branch_taken_0x129654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x129654) {
            ctx->pc = 0x12966Cu;
            goto label_12966c;
        }
    }
    ctx->pc = 0x12965Cu;
label_12965c:
    // 0x12965c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12965cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129660:
    // 0x129660: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x129660u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_129664:
    // 0x129664: 0x106001c3  beqz        $v1, . + 4 + (0x1C3 << 2)
label_129668:
    if (ctx->pc == 0x129668u) {
        ctx->pc = 0x12966Cu;
        goto label_12966c;
    }
    ctx->pc = 0x129664u;
    {
        const bool branch_taken_0x129664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x129664) {
            ctx->pc = 0x129D74u;
            goto label_129d74;
        }
    }
    ctx->pc = 0x12966Cu;
label_12966c:
    // 0x12966c: 0x9603007c  lhu         $v1, 0x7C($s0)
    ctx->pc = 0x12966cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
label_129670:
    // 0x129670: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_129674:
    if (ctx->pc == 0x129674u) {
        ctx->pc = 0x129678u;
        goto label_129678;
    }
    ctx->pc = 0x129670u;
    {
        const bool branch_taken_0x129670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x129670) {
            ctx->pc = 0x1296B4u;
            goto label_1296b4;
        }
    }
    ctx->pc = 0x129678u;
label_129678:
    // 0x129678: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12967c:
    // 0x12967c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12967cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129680:
    // 0x129680: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129680u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_129684:
    // 0x129684: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x129684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_129688:
    // 0x129688: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12968c:
    // 0x12968c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12968cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_129690:
    // 0x129690: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129694:
    // 0x129694: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129694u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_129698:
    // 0x129698: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12969c:
    // 0x12969c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12969cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1296a0:
    // 0x1296a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1296a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1296a4:
    // 0x1296a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1296a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1296a8:
    // 0x1296a8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1296a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1296ac:
    // 0x1296ac: 0x100001b1  b           . + 4 + (0x1B1 << 2)
label_1296b0:
    if (ctx->pc == 0x1296B0u) {
        ctx->pc = 0x1296B4u;
        goto label_1296b4;
    }
    ctx->pc = 0x1296ACu;
    {
        const bool branch_taken_0x1296ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1296ac) {
            ctx->pc = 0x129D74u;
            goto label_129d74;
        }
    }
    ctx->pc = 0x1296B4u;
label_1296b4:
    // 0x1296b4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1296b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1296b8:
    // 0x1296b8: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x1296b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1296bc:
    // 0x1296bc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1296c0:
    if (ctx->pc == 0x1296C0u) {
        ctx->pc = 0x1296C4u;
        goto label_1296c4;
    }
    ctx->pc = 0x1296BCu;
    {
        const bool branch_taken_0x1296bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1296bc) {
            ctx->pc = 0x1296DCu;
            goto label_1296dc;
        }
    }
    ctx->pc = 0x1296C4u;
label_1296c4:
    // 0x1296c4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1296c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1296c8:
    // 0x1296c8: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x1296c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_1296cc:
    // 0x1296cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1296ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1296d0:
    // 0x1296d0: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1296d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_1296d4:
    // 0x1296d4: 0x100001a7  b           . + 4 + (0x1A7 << 2)
label_1296d8:
    if (ctx->pc == 0x1296D8u) {
        ctx->pc = 0x1296DCu;
        goto label_1296dc;
    }
    ctx->pc = 0x1296D4u;
    {
        const bool branch_taken_0x1296d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1296d4) {
            ctx->pc = 0x129D74u;
            goto label_129d74;
        }
    }
    ctx->pc = 0x1296DCu;
label_1296dc:
    // 0x1296dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1296dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1296e0:
    // 0x1296e0: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x1296e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_1296e4:
    // 0x1296e4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1296e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1296e8:
    // 0x1296e8: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1296e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_1296ec:
    // 0x1296ec: 0x106000ab  beqz        $v1, . + 4 + (0xAB << 2)
label_1296f0:
    if (ctx->pc == 0x1296F0u) {
        ctx->pc = 0x1296F4u;
        goto label_1296f4;
    }
    ctx->pc = 0x1296ECu;
    {
        const bool branch_taken_0x1296ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1296ec) {
            ctx->pc = 0x12999Cu;
            goto label_12999c;
        }
    }
    ctx->pc = 0x1296F4u;
label_1296f4:
    // 0x1296f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1296f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1296f8:
    // 0x1296f8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1296f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1296fc:
    // 0x1296fc: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x1296fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
label_129700:
    // 0x129700: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x129700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_129704:
    // 0x129704: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x129704u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129708:
    // 0x129708: 0x0  nop
    ctx->pc = 0x129708u;
    // NOP
label_12970c:
    // 0x12970c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12970cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_129710:
    // 0x129710: 0x0  nop
    ctx->pc = 0x129710u;
    // NOP
label_129714:
    // 0x129714: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_129718:
    if (ctx->pc == 0x129718u) {
        ctx->pc = 0x12971Cu;
        goto label_12971c;
    }
    ctx->pc = 0x129714u;
    {
        const bool branch_taken_0x129714 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x129714) {
            ctx->pc = 0x129760u;
            goto label_129760;
        }
    }
    ctx->pc = 0x12971Cu;
label_12971c:
    // 0x12971c: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x12971cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_129720:
    // 0x129720: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_129724:
    if (ctx->pc == 0x129724u) {
        ctx->pc = 0x129728u;
        goto label_129728;
    }
    ctx->pc = 0x129720u;
    {
        const bool branch_taken_0x129720 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x129720) {
            ctx->pc = 0x129758u;
            goto label_129758;
        }
    }
    ctx->pc = 0x129728u;
label_129728:
    // 0x129728: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12972c:
    // 0x12972c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12972cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129730:
    // 0x129730: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129730u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_129734:
    // 0x129734: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x129734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_129738:
    // 0x129738: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12973c:
    // 0x12973c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12973cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_129740:
    // 0x129740: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129744:
    // 0x129744: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129744u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_129748:
    // 0x129748: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12974c:
    // 0x12974c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12974cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_129750:
    // 0x129750: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129754:
    // 0x129754: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129754u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_129758:
    // 0x129758: 0x10000186  b           . + 4 + (0x186 << 2)
label_12975c:
    if (ctx->pc == 0x12975Cu) {
        ctx->pc = 0x129760u;
        goto label_129760;
    }
    ctx->pc = 0x129758u;
    {
        const bool branch_taken_0x129758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129758) {
            ctx->pc = 0x129D74u;
            goto label_129d74;
        }
    }
    ctx->pc = 0x129760u;
label_129760:
    // 0x129760: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129764:
    // 0x129764: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x129764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_129768:
    // 0x129768: 0x3c0345ab  lui         $v1, 0x45AB
    ctx->pc = 0x129768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17835 << 16));
label_12976c:
    // 0x12976c: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x12976cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
label_129770:
    // 0x129770: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x129770u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129774:
    // 0x129774: 0x0  nop
    ctx->pc = 0x129774u;
    // NOP
label_129778:
    // 0x129778: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x129778u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12977c:
    // 0x12977c: 0x0  nop
    ctx->pc = 0x12977cu;
    // NOP
label_129780:
    // 0x129780: 0x4500017c  bc1f        . + 4 + (0x17C << 2)
label_129784:
    if (ctx->pc == 0x129784u) {
        ctx->pc = 0x129788u;
        goto label_129788;
    }
    ctx->pc = 0x129780u;
    {
        const bool branch_taken_0x129780 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x129780) {
            ctx->pc = 0x129D74u;
            goto label_129d74;
        }
    }
    ctx->pc = 0x129788u;
label_129788:
    // 0x129788: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x129788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12978c:
    // 0x12978c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x12978cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_129790:
    // 0x129790: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x129790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
label_129794:
    // 0x129794: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x129794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_129798:
    // 0x129798: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x129798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12979c:
    // 0x12979c: 0x0  nop
    ctx->pc = 0x12979cu;
    // NOP
label_1297a0:
    // 0x1297a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1297a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1297a4:
    // 0x1297a4: 0x0  nop
    ctx->pc = 0x1297a4u;
    // NOP
label_1297a8:
    // 0x1297a8: 0x45010035  bc1t        . + 4 + (0x35 << 2)
label_1297ac:
    if (ctx->pc == 0x1297ACu) {
        ctx->pc = 0x1297B0u;
        goto label_1297b0;
    }
    ctx->pc = 0x1297A8u;
    {
        const bool branch_taken_0x1297a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1297a8) {
            ctx->pc = 0x129880u;
            goto label_129880;
        }
    }
    ctx->pc = 0x1297B0u;
label_1297b0:
    // 0x1297b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1297b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1297b4:
    // 0x1297b4: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1297b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1297b8:
    // 0x1297b8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1297b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1297bc:
    // 0x1297bc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1297c0:
    if (ctx->pc == 0x1297C0u) {
        ctx->pc = 0x1297C4u;
        goto label_1297c4;
    }
    ctx->pc = 0x1297BCu;
    {
        const bool branch_taken_0x1297bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1297bc) {
            ctx->pc = 0x1297D4u;
            goto label_1297d4;
        }
    }
    ctx->pc = 0x1297C4u;
label_1297c4:
    // 0x1297c4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1297c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1297c8:
    // 0x1297c8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1297c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1297cc:
    // 0x1297cc: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_1297d0:
    if (ctx->pc == 0x1297D0u) {
        ctx->pc = 0x1297D4u;
        goto label_1297d4;
    }
    ctx->pc = 0x1297CCu;
    {
        const bool branch_taken_0x1297cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1297cc) {
            ctx->pc = 0x129880u;
            goto label_129880;
        }
    }
    ctx->pc = 0x1297D4u;
label_1297d4:
    // 0x1297d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1297d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1297d8:
    // 0x1297d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1297d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1297dc:
    // 0x1297dc: 0xc05d25c  jal         func_174970
label_1297e0:
    if (ctx->pc == 0x1297E0u) {
        ctx->pc = 0x1297E4u;
        goto label_1297e4;
    }
    ctx->pc = 0x1297DCu;
    SET_GPR_U32(ctx, 31, 0x1297E4u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x1297DCu, 0x1297E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1297E4u;
label_1297e4:
    // 0x1297e4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_1297e8:
    if (ctx->pc == 0x1297E8u) {
        ctx->pc = 0x1297ECu;
        goto label_1297ec;
    }
    ctx->pc = 0x1297E4u;
    {
        const bool branch_taken_0x1297e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1297e4) {
            ctx->pc = 0x129880u;
            goto label_129880;
        }
    }
    ctx->pc = 0x1297ECu;
label_1297ec:
    // 0x1297ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1297ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1297f0:
    // 0x1297f0: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1297f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1297f4:
    // 0x1297f4: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1297f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_1297f8:
    // 0x1297f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1297f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1297fc:
    // 0x1297fc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1297fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_129800:
    // 0x129800: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x129800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_129804:
    // 0x129804: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x129804u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_129808:
    // 0x129808: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x129808u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12980c:
    // 0x12980c: 0x0  nop
    ctx->pc = 0x12980cu;
    // NOP
label_129810:
    // 0x129810: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_129814:
    if (ctx->pc == 0x129814u) {
        ctx->pc = 0x129818u;
        goto label_129818;
    }
    ctx->pc = 0x129810u;
    {
        const bool branch_taken_0x129810 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x129810) {
            ctx->pc = 0x129880u;
            goto label_129880;
        }
    }
    ctx->pc = 0x129818u;
label_129818:
    // 0x129818: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12981c:
    // 0x12981c: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x12981cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_129820:
    // 0x129820: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x129820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_129824:
    // 0x129824: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x129824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_129828:
    // 0x129828: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x129828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_12982c:
    // 0x12982c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12982cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129830:
    // 0x129830: 0x0  nop
    ctx->pc = 0x129830u;
    // NOP
label_129834:
    // 0x129834: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x129834u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_129838:
    // 0x129838: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x129838u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12983c:
    // 0x12983c: 0x0  nop
    ctx->pc = 0x12983cu;
    // NOP
label_129840:
    // 0x129840: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_129844:
    if (ctx->pc == 0x129844u) {
        ctx->pc = 0x129848u;
        goto label_129848;
    }
    ctx->pc = 0x129840u;
    {
        const bool branch_taken_0x129840 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x129840) {
            ctx->pc = 0x129880u;
            goto label_129880;
        }
    }
    ctx->pc = 0x129848u;
label_129848:
    // 0x129848: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12984c:
    // 0x12984c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12984cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129850:
    // 0x129850: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129850u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_129854:
    // 0x129854: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x129854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_129858:
    // 0x129858: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12985c:
    // 0x12985c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12985cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_129860:
    // 0x129860: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129864:
    // 0x129864: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129864u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_129868:
    // 0x129868: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12986c:
    // 0x12986c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12986cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_129870:
    // 0x129870: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129874:
    // 0x129874: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129874u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_129878:
    // 0x129878: 0x1000013e  b           . + 4 + (0x13E << 2)
label_12987c:
    if (ctx->pc == 0x12987Cu) {
        ctx->pc = 0x129880u;
        goto label_129880;
    }
    ctx->pc = 0x129878u;
    {
        const bool branch_taken_0x129878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129878) {
            ctx->pc = 0x129D74u;
            goto label_129d74;
        }
    }
    ctx->pc = 0x129880u;
label_129880:
    // 0x129880: 0xc067694  jal         func_19DA50
label_129884:
    if (ctx->pc == 0x129884u) {
        ctx->pc = 0x129888u;
        goto label_129888;
    }
    ctx->pc = 0x129880u;
    SET_GPR_U32(ctx, 31, 0x129888u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x129880u, 0x129888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129888u;
label_129888:
    // 0x129888: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x129888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12988c:
    // 0x12988c: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x12988cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_129890:
    // 0x129890: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x129890u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_129894:
    // 0x129894: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
label_129898:
    if (ctx->pc == 0x129898u) {
        ctx->pc = 0x12989Cu;
        goto label_12989c;
    }
    ctx->pc = 0x129894u;
    {
        const bool branch_taken_0x129894 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x129894) {
            ctx->pc = 0x129994u;
            goto label_129994;
        }
    }
    ctx->pc = 0x12989Cu;
label_12989c:
    // 0x12989c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x12989cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_1298a0:
    // 0x1298a0: 0x2464e400  addiu       $a0, $v1, -0x1C00
    ctx->pc = 0x1298a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960128));
label_1298a4:
    // 0x1298a4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1298a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1298a8:
    // 0x1298a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1298a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1298ac:
    // 0x1298ac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1298acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1298b0:
    // 0x1298b0: 0x600008  jr          $v1
label_1298b4:
    if (ctx->pc == 0x1298B4u) {
        ctx->pc = 0x1298B8u;
        goto label_1298b8;
    }
    ctx->pc = 0x1298B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1298B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1298B8u;
label_1298b8:
    // 0x1298b8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1298b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1298bc:
    // 0x1298bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1298bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1298c0:
    // 0x1298c0: 0xc05d25c  jal         func_174970
label_1298c4:
    if (ctx->pc == 0x1298C4u) {
        ctx->pc = 0x1298C8u;
        goto label_1298c8;
    }
    ctx->pc = 0x1298C0u;
    SET_GPR_U32(ctx, 31, 0x1298C8u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x1298C0u, 0x1298C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1298C8u;
label_1298c8:
    // 0x1298c8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_1298cc:
    if (ctx->pc == 0x1298CCu) {
        ctx->pc = 0x1298D0u;
        goto label_1298d0;
    }
    ctx->pc = 0x1298C8u;
    {
        const bool branch_taken_0x1298c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1298c8) {
            ctx->pc = 0x12995Cu;
            goto label_12995c;
        }
    }
    ctx->pc = 0x1298D0u;
label_1298d0:
    // 0x1298d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1298d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1298d4:
    // 0x1298d4: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1298d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1298d8:
    // 0x1298d8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1298d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_1298dc:
    // 0x1298dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1298dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1298e0:
    // 0x1298e0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1298e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_1298e4:
    // 0x1298e4: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1298e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1298e8:
    // 0x1298e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1298e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1298ec:
    // 0x1298ec: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1298ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1298f0:
    // 0x1298f0: 0x0  nop
    ctx->pc = 0x1298f0u;
    // NOP
label_1298f4:
    // 0x1298f4: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_1298f8:
    if (ctx->pc == 0x1298F8u) {
        ctx->pc = 0x1298FCu;
        goto label_1298fc;
    }
    ctx->pc = 0x1298F4u;
    {
        const bool branch_taken_0x1298f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1298f4) {
            ctx->pc = 0x12995Cu;
            goto label_12995c;
        }
    }
    ctx->pc = 0x1298FCu;
label_1298fc:
    // 0x1298fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1298fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129900:
    // 0x129900: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x129900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_129904:
    // 0x129904: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x129904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_129908:
    // 0x129908: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x129908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12990c:
    // 0x12990c: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x12990cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_129910:
    // 0x129910: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x129910u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129914:
    // 0x129914: 0x0  nop
    ctx->pc = 0x129914u;
    // NOP
label_129918:
    // 0x129918: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x129918u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_12991c:
    // 0x12991c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x12991cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_129920:
    // 0x129920: 0x0  nop
    ctx->pc = 0x129920u;
    // NOP
label_129924:
    // 0x129924: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_129928:
    if (ctx->pc == 0x129928u) {
        ctx->pc = 0x12992Cu;
        goto label_12992c;
    }
    ctx->pc = 0x129924u;
    {
        const bool branch_taken_0x129924 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x129924) {
            ctx->pc = 0x12995Cu;
            goto label_12995c;
        }
    }
    ctx->pc = 0x12992Cu;
label_12992c:
    // 0x12992c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12992cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129930:
    // 0x129930: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129934:
    // 0x129934: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129934u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_129938:
    // 0x129938: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x129938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_12993c:
    // 0x12993c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12993cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129940:
    // 0x129940: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x129940u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_129944:
    // 0x129944: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129948:
    // 0x129948: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129948u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_12994c:
    // 0x12994c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12994cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129950:
    // 0x129950: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x129950u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_129954:
    // 0x129954: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129958:
    // 0x129958: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129958u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_12995c:
    // 0x12995c: 0x10000105  b           . + 4 + (0x105 << 2)
label_129960:
    if (ctx->pc == 0x129960u) {
        ctx->pc = 0x129964u;
        goto label_129964;
    }
    ctx->pc = 0x12995Cu;
    {
        const bool branch_taken_0x12995c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12995c) {
            ctx->pc = 0x129D74u;
            goto label_129d74;
        }
    }
    ctx->pc = 0x129964u;
label_129964:
    // 0x129964: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129968:
    // 0x129968: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12996c:
    // 0x12996c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12996cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_129970:
    // 0x129970: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x129970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_129974:
    // 0x129974: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129978:
    // 0x129978: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x129978u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_12997c:
    // 0x12997c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12997cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129980:
    // 0x129980: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129980u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_129984:
    // 0x129984: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129988:
    // 0x129988: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x129988u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12998c:
    // 0x12998c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12998cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129990:
    // 0x129990: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129990u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_129994:
    // 0x129994: 0x100000f7  b           . + 4 + (0xF7 << 2)
label_129998:
    if (ctx->pc == 0x129998u) {
        ctx->pc = 0x12999Cu;
        goto label_12999c;
    }
    ctx->pc = 0x129994u;
    {
        const bool branch_taken_0x129994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129994) {
            ctx->pc = 0x129D74u;
            goto label_129d74;
        }
    }
    ctx->pc = 0x12999Cu;
label_12999c:
    // 0x12999c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12999cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1299a0:
    // 0x1299a0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1299a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1299a4:
    // 0x1299a4: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x1299a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
label_1299a8:
    // 0x1299a8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1299a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_1299ac:
    // 0x1299ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1299acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1299b0:
    // 0x1299b0: 0x0  nop
    ctx->pc = 0x1299b0u;
    // NOP
label_1299b4:
    // 0x1299b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1299b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1299b8:
    // 0x1299b8: 0x0  nop
    ctx->pc = 0x1299b8u;
    // NOP
label_1299bc:
    // 0x1299bc: 0x45000043  bc1f        . + 4 + (0x43 << 2)
label_1299c0:
    if (ctx->pc == 0x1299C0u) {
        ctx->pc = 0x1299C4u;
        goto label_1299c4;
    }
    ctx->pc = 0x1299BCu;
    {
        const bool branch_taken_0x1299bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1299bc) {
            ctx->pc = 0x129ACCu;
            goto label_129acc;
        }
    }
    ctx->pc = 0x1299C4u;
label_1299c4:
    // 0x1299c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1299c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1299c8:
    // 0x1299c8: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1299c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1299cc:
    // 0x1299cc: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1299ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_1299d0:
    // 0x1299d0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_1299d4:
    if (ctx->pc == 0x1299D4u) {
        ctx->pc = 0x1299D8u;
        goto label_1299d8;
    }
    ctx->pc = 0x1299D0u;
    {
        const bool branch_taken_0x1299d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1299d0) {
            ctx->pc = 0x129A10u;
            goto label_129a10;
        }
    }
    ctx->pc = 0x1299D8u;
label_1299d8:
    // 0x1299d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1299d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1299dc:
    // 0x1299dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1299dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1299e0:
    // 0x1299e0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1299e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1299e4:
    // 0x1299e4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1299e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1299e8:
    // 0x1299e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1299e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1299ec:
    // 0x1299ec: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1299ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1299f0:
    // 0x1299f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1299f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1299f4:
    // 0x1299f4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1299f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1299f8:
    // 0x1299f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1299f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1299fc:
    // 0x1299fc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1299fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_129a00:
    // 0x129a00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129a04:
    // 0x129a04: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129a04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_129a08:
    // 0x129a08: 0x100000da  b           . + 4 + (0xDA << 2)
label_129a0c:
    if (ctx->pc == 0x129A0Cu) {
        ctx->pc = 0x129A10u;
        goto label_129a10;
    }
    ctx->pc = 0x129A08u;
    {
        const bool branch_taken_0x129a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129a08) {
            ctx->pc = 0x129D74u;
            goto label_129d74;
        }
    }
    ctx->pc = 0x129A10u;
label_129a10:
    // 0x129a10: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x129a10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_129a14:
    // 0x129a14: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
label_129a18:
    if (ctx->pc == 0x129A18u) {
        ctx->pc = 0x129A1Cu;
        goto label_129a1c;
    }
    ctx->pc = 0x129A14u;
    {
        const bool branch_taken_0x129a14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x129a14) {
            ctx->pc = 0x129AC4u;
            goto label_129ac4;
        }
    }
    ctx->pc = 0x129A1Cu;
label_129a1c:
    // 0x129a1c: 0xc067694  jal         func_19DA50
label_129a20:
    if (ctx->pc == 0x129A20u) {
        ctx->pc = 0x129A24u;
        goto label_129a24;
    }
    ctx->pc = 0x129A1Cu;
    SET_GPR_U32(ctx, 31, 0x129A24u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x129A1Cu, 0x129A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129A24u;
label_129a24:
    // 0x129a24: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x129a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_129a28:
    // 0x129a28: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x129a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_129a2c:
    // 0x129a2c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_129a30:
    if (ctx->pc == 0x129A30u) {
        ctx->pc = 0x129A34u;
        goto label_129a34;
    }
    ctx->pc = 0x129A2Cu;
    {
        const bool branch_taken_0x129a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x129a2c) {
            ctx->pc = 0x129A94u;
            goto label_129a94;
        }
    }
    ctx->pc = 0x129A34u;
label_129a34:
    // 0x129a34: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x129a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129a38:
    // 0x129a38: 0xc04d8bc  jal         func_1362F0
label_129a3c:
    if (ctx->pc == 0x129A3Cu) {
        ctx->pc = 0x129A40u;
        goto label_129a40;
    }
    ctx->pc = 0x129A38u;
    SET_GPR_U32(ctx, 31, 0x129A40u);
    ctx->pc = 0x1362F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362F0u, 0x129A38u, 0x129A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129A40u;
label_129a40:
    // 0x129a40: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_129a44:
    if (ctx->pc == 0x129A44u) {
        ctx->pc = 0x129A48u;
        goto label_129a48;
    }
    ctx->pc = 0x129A40u;
    {
        const bool branch_taken_0x129a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129a40) {
            ctx->pc = 0x129AC4u;
            goto label_129ac4;
        }
    }
    ctx->pc = 0x129A48u;
label_129a48:
    // 0x129a48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129a4c:
    // 0x129a4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129a50:
    // 0x129a50: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129a50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_129a54:
    // 0x129a54: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x129a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_129a58:
    // 0x129a58: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129a5c:
    // 0x129a5c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x129a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_129a60:
    // 0x129a60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129a64:
    // 0x129a64: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129a64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_129a68:
    // 0x129a68: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129a6c:
    // 0x129a6c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x129a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_129a70:
    // 0x129a70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129a74:
    // 0x129a74: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129a74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_129a78:
    // 0x129a78: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x129a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129a7c:
    // 0x129a7c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x129a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_129a80:
    // 0x129a80: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x129a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_129a84:
    // 0x129a84: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x129a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_129a88:
    // 0x129a88: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x129a88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_129a8c:
    // 0x129a8c: 0x1000000d  b           . + 4 + (0xD << 2)
label_129a90:
    if (ctx->pc == 0x129A90u) {
        ctx->pc = 0x129A94u;
        goto label_129a94;
    }
    ctx->pc = 0x129A8Cu;
    {
        const bool branch_taken_0x129a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129a8c) {
            ctx->pc = 0x129AC4u;
            goto label_129ac4;
        }
    }
    ctx->pc = 0x129A94u;
label_129a94:
    // 0x129a94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129a98:
    // 0x129a98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129a9c:
    // 0x129a9c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_129aa0:
    // 0x129aa0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x129aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_129aa4:
    // 0x129aa4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129aa8:
    // 0x129aa8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x129aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_129aac:
    // 0x129aac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129ab0:
    // 0x129ab0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_129ab4:
    // 0x129ab4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129ab8:
    // 0x129ab8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x129ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_129abc:
    // 0x129abc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129ac0:
    // 0x129ac0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_129ac4:
    // 0x129ac4: 0x100000ab  b           . + 4 + (0xAB << 2)
label_129ac8:
    if (ctx->pc == 0x129AC8u) {
        ctx->pc = 0x129ACCu;
        goto label_129acc;
    }
    ctx->pc = 0x129AC4u;
    {
        const bool branch_taken_0x129ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129ac4) {
            ctx->pc = 0x129D74u;
            goto label_129d74;
        }
    }
    ctx->pc = 0x129ACCu;
label_129acc:
    // 0x129acc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129ad0:
    // 0x129ad0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x129ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_129ad4:
    // 0x129ad4: 0x3c0344a2  lui         $v1, 0x44A2
    ctx->pc = 0x129ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17570 << 16));
label_129ad8:
    // 0x129ad8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x129ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_129adc:
    // 0x129adc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x129adcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129ae0:
    // 0x129ae0: 0x0  nop
    ctx->pc = 0x129ae0u;
    // NOP
label_129ae4:
    // 0x129ae4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x129ae4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_129ae8:
    // 0x129ae8: 0x0  nop
    ctx->pc = 0x129ae8u;
    // NOP
label_129aec:
    // 0x129aec: 0x45000026  bc1f        . + 4 + (0x26 << 2)
label_129af0:
    if (ctx->pc == 0x129AF0u) {
        ctx->pc = 0x129AF4u;
        goto label_129af4;
    }
    ctx->pc = 0x129AECu;
    {
        const bool branch_taken_0x129aec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x129aec) {
            ctx->pc = 0x129B88u;
            goto label_129b88;
        }
    }
    ctx->pc = 0x129AF4u;
label_129af4:
    // 0x129af4: 0xc067694  jal         func_19DA50
label_129af8:
    if (ctx->pc == 0x129AF8u) {
        ctx->pc = 0x129AFCu;
        goto label_129afc;
    }
    ctx->pc = 0x129AF4u;
    SET_GPR_U32(ctx, 31, 0x129AFCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x129AF4u, 0x129AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129AFCu;
label_129afc:
    // 0x129afc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x129afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_129b00:
    // 0x129b00: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x129b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_129b04:
    // 0x129b04: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_129b08:
    if (ctx->pc == 0x129B08u) {
        ctx->pc = 0x129B0Cu;
        goto label_129b0c;
    }
    ctx->pc = 0x129B04u;
    {
        const bool branch_taken_0x129b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x129b04) {
            ctx->pc = 0x129B50u;
            goto label_129b50;
        }
    }
    ctx->pc = 0x129B0Cu;
label_129b0c:
    // 0x129b0c: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x129b0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_129b10:
    // 0x129b10: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_129b14:
    if (ctx->pc == 0x129B14u) {
        ctx->pc = 0x129B18u;
        goto label_129b18;
    }
    ctx->pc = 0x129B10u;
    {
        const bool branch_taken_0x129b10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x129b10) {
            ctx->pc = 0x129B80u;
            goto label_129b80;
        }
    }
    ctx->pc = 0x129B18u;
label_129b18:
    // 0x129b18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129b1c:
    // 0x129b1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129b20:
    // 0x129b20: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129b20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_129b24:
    // 0x129b24: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x129b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_129b28:
    // 0x129b28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129b2c:
    // 0x129b2c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x129b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_129b30:
    // 0x129b30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129b34:
    // 0x129b34: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129b34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_129b38:
    // 0x129b38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129b3c:
    // 0x129b3c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x129b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_129b40:
    // 0x129b40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129b44:
    // 0x129b44: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129b44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_129b48:
    // 0x129b48: 0x1000000d  b           . + 4 + (0xD << 2)
label_129b4c:
    if (ctx->pc == 0x129B4Cu) {
        ctx->pc = 0x129B50u;
        goto label_129b50;
    }
    ctx->pc = 0x129B48u;
    {
        const bool branch_taken_0x129b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129b48) {
            ctx->pc = 0x129B80u;
            goto label_129b80;
        }
    }
    ctx->pc = 0x129B50u;
label_129b50:
    // 0x129b50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129b54:
    // 0x129b54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129b58:
    // 0x129b58: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129b58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_129b5c:
    // 0x129b5c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x129b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_129b60:
    // 0x129b60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129b64:
    // 0x129b64: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x129b64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_129b68:
    // 0x129b68: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129b6c:
    // 0x129b6c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_129b70:
    // 0x129b70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129b74:
    // 0x129b74: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x129b74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_129b78:
    // 0x129b78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129b7c:
    // 0x129b7c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_129b80:
    // 0x129b80: 0x1000007c  b           . + 4 + (0x7C << 2)
label_129b84:
    if (ctx->pc == 0x129B84u) {
        ctx->pc = 0x129B88u;
        goto label_129b88;
    }
    ctx->pc = 0x129B80u;
    {
        const bool branch_taken_0x129b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129b80) {
            ctx->pc = 0x129D74u;
            goto label_129d74;
        }
    }
    ctx->pc = 0x129B88u;
label_129b88:
    // 0x129b88: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129b8c:
    // 0x129b8c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x129b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_129b90:
    // 0x129b90: 0x3c03455a  lui         $v1, 0x455A
    ctx->pc = 0x129b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17754 << 16));
label_129b94:
    // 0x129b94: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x129b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
label_129b98:
    // 0x129b98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x129b98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129b9c:
    // 0x129b9c: 0x0  nop
    ctx->pc = 0x129b9cu;
    // NOP
label_129ba0:
    // 0x129ba0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x129ba0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_129ba4:
    // 0x129ba4: 0x0  nop
    ctx->pc = 0x129ba4u;
    // NOP
label_129ba8:
    // 0x129ba8: 0x45000072  bc1f        . + 4 + (0x72 << 2)
label_129bac:
    if (ctx->pc == 0x129BACu) {
        ctx->pc = 0x129BB0u;
        goto label_129bb0;
    }
    ctx->pc = 0x129BA8u;
    {
        const bool branch_taken_0x129ba8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x129ba8) {
            ctx->pc = 0x129D74u;
            goto label_129d74;
        }
    }
    ctx->pc = 0x129BB0u;
label_129bb0:
    // 0x129bb0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x129bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129bb4:
    // 0x129bb4: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x129bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_129bb8:
    // 0x129bb8: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x129bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
label_129bbc:
    // 0x129bbc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x129bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_129bc0:
    // 0x129bc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x129bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129bc4:
    // 0x129bc4: 0x0  nop
    ctx->pc = 0x129bc4u;
    // NOP
label_129bc8:
    // 0x129bc8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x129bc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_129bcc:
    // 0x129bcc: 0x0  nop
    ctx->pc = 0x129bccu;
    // NOP
label_129bd0:
    // 0x129bd0: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
label_129bd4:
    if (ctx->pc == 0x129BD4u) {
        ctx->pc = 0x129BD8u;
        goto label_129bd8;
    }
    ctx->pc = 0x129BD0u;
    {
        const bool branch_taken_0x129bd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x129bd0) {
            ctx->pc = 0x129C4Cu;
            goto label_129c4c;
        }
    }
    ctx->pc = 0x129BD8u;
label_129bd8:
    // 0x129bd8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x129bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_129bdc:
    // 0x129bdc: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x129bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_129be0:
    // 0x129be0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x129be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_129be4:
    // 0x129be4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_129be8:
    if (ctx->pc == 0x129BE8u) {
        ctx->pc = 0x129BECu;
        goto label_129bec;
    }
    ctx->pc = 0x129BE4u;
    {
        const bool branch_taken_0x129be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129be4) {
            ctx->pc = 0x129BFCu;
            goto label_129bfc;
        }
    }
    ctx->pc = 0x129BECu;
label_129bec:
    // 0x129bec: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x129becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_129bf0:
    // 0x129bf0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x129bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_129bf4:
    // 0x129bf4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_129bf8:
    if (ctx->pc == 0x129BF8u) {
        ctx->pc = 0x129BFCu;
        goto label_129bfc;
    }
    ctx->pc = 0x129BF4u;
    {
        const bool branch_taken_0x129bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129bf4) {
            ctx->pc = 0x129C4Cu;
            goto label_129c4c;
        }
    }
    ctx->pc = 0x129BFCu;
label_129bfc:
    // 0x129bfc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x129bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129c00:
    // 0x129c00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x129c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129c04:
    // 0x129c04: 0xc05d25c  jal         func_174970
label_129c08:
    if (ctx->pc == 0x129C08u) {
        ctx->pc = 0x129C0Cu;
        goto label_129c0c;
    }
    ctx->pc = 0x129C04u;
    SET_GPR_U32(ctx, 31, 0x129C0Cu);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x129C04u, 0x129C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129C0Cu;
label_129c0c:
    // 0x129c0c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_129c10:
    if (ctx->pc == 0x129C10u) {
        ctx->pc = 0x129C14u;
        goto label_129c14;
    }
    ctx->pc = 0x129C0Cu;
    {
        const bool branch_taken_0x129c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129c0c) {
            ctx->pc = 0x129C4Cu;
            goto label_129c4c;
        }
    }
    ctx->pc = 0x129C14u;
label_129c14:
    // 0x129c14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129c18:
    // 0x129c18: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129c1c:
    // 0x129c1c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_129c20:
    // 0x129c20: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x129c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_129c24:
    // 0x129c24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129c28:
    // 0x129c28: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x129c28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_129c2c:
    // 0x129c2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129c30:
    // 0x129c30: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129c30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_129c34:
    // 0x129c34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129c38:
    // 0x129c38: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x129c38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_129c3c:
    // 0x129c3c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129c40:
    // 0x129c40: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129c40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_129c44:
    // 0x129c44: 0x1000004b  b           . + 4 + (0x4B << 2)
label_129c48:
    if (ctx->pc == 0x129C48u) {
        ctx->pc = 0x129C4Cu;
        goto label_129c4c;
    }
    ctx->pc = 0x129C44u;
    {
        const bool branch_taken_0x129c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129c44) {
            ctx->pc = 0x129D74u;
            goto label_129d74;
        }
    }
    ctx->pc = 0x129C4Cu;
label_129c4c:
    // 0x129c4c: 0xc067694  jal         func_19DA50
label_129c50:
    if (ctx->pc == 0x129C50u) {
        ctx->pc = 0x129C54u;
        goto label_129c54;
    }
    ctx->pc = 0x129C4Cu;
    SET_GPR_U32(ctx, 31, 0x129C54u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x129C4Cu, 0x129C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129C54u;
label_129c54:
    // 0x129c54: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x129c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_129c58:
    // 0x129c58: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x129c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_129c5c:
    // 0x129c5c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x129c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_129c60:
    // 0x129c60: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
label_129c64:
    if (ctx->pc == 0x129C64u) {
        ctx->pc = 0x129C68u;
        goto label_129c68;
    }
    ctx->pc = 0x129C60u;
    {
        const bool branch_taken_0x129c60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x129c60) {
            ctx->pc = 0x129D04u;
            goto label_129d04;
        }
    }
    ctx->pc = 0x129C68u;
label_129c68:
    // 0x129c68: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x129c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_129c6c:
    // 0x129c6c: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
label_129c70:
    if (ctx->pc == 0x129C70u) {
        ctx->pc = 0x129C74u;
        goto label_129c74;
    }
    ctx->pc = 0x129C6Cu;
    {
        const bool branch_taken_0x129c6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x129c6c) {
            ctx->pc = 0x129D04u;
            goto label_129d04;
        }
    }
    ctx->pc = 0x129C74u;
label_129c74:
    // 0x129c74: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x129c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_129c78:
    // 0x129c78: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
label_129c7c:
    if (ctx->pc == 0x129C7Cu) {
        ctx->pc = 0x129C80u;
        goto label_129c80;
    }
    ctx->pc = 0x129C78u;
    {
        const bool branch_taken_0x129c78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x129c78) {
            ctx->pc = 0x129D04u;
            goto label_129d04;
        }
    }
    ctx->pc = 0x129C80u;
label_129c80:
    // 0x129c80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x129c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_129c84:
    // 0x129c84: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
label_129c88:
    if (ctx->pc == 0x129C88u) {
        ctx->pc = 0x129C8Cu;
        goto label_129c8c;
    }
    ctx->pc = 0x129C84u;
    {
        const bool branch_taken_0x129c84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x129c84) {
            ctx->pc = 0x129D04u;
            goto label_129d04;
        }
    }
    ctx->pc = 0x129C8Cu;
label_129c8c:
    // 0x129c8c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_129c90:
    if (ctx->pc == 0x129C90u) {
        ctx->pc = 0x129C94u;
        goto label_129c94;
    }
    ctx->pc = 0x129C8Cu;
    {
        const bool branch_taken_0x129c8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x129c8c) {
            ctx->pc = 0x129C9Cu;
            goto label_129c9c;
        }
    }
    ctx->pc = 0x129C94u;
label_129c94:
    // 0x129c94: 0x10000027  b           . + 4 + (0x27 << 2)
label_129c98:
    if (ctx->pc == 0x129C98u) {
        ctx->pc = 0x129C9Cu;
        goto label_129c9c;
    }
    ctx->pc = 0x129C94u;
    {
        const bool branch_taken_0x129c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129c94) {
            ctx->pc = 0x129D34u;
            goto label_129d34;
        }
    }
    ctx->pc = 0x129C9Cu;
label_129c9c:
    // 0x129c9c: 0x16200017  bnez        $s1, . + 4 + (0x17 << 2)
label_129ca0:
    if (ctx->pc == 0x129CA0u) {
        ctx->pc = 0x129CA4u;
        goto label_129ca4;
    }
    ctx->pc = 0x129C9Cu;
    {
        const bool branch_taken_0x129c9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x129c9c) {
            ctx->pc = 0x129CFCu;
            goto label_129cfc;
        }
    }
    ctx->pc = 0x129CA4u;
label_129ca4:
    // 0x129ca4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x129ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129ca8:
    // 0x129ca8: 0xc04d8bc  jal         func_1362F0
label_129cac:
    if (ctx->pc == 0x129CACu) {
        ctx->pc = 0x129CB0u;
        goto label_129cb0;
    }
    ctx->pc = 0x129CA8u;
    SET_GPR_U32(ctx, 31, 0x129CB0u);
    ctx->pc = 0x1362F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362F0u, 0x129CA8u, 0x129CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129CB0u;
label_129cb0:
    // 0x129cb0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_129cb4:
    if (ctx->pc == 0x129CB4u) {
        ctx->pc = 0x129CB8u;
        goto label_129cb8;
    }
    ctx->pc = 0x129CB0u;
    {
        const bool branch_taken_0x129cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129cb0) {
            ctx->pc = 0x129CFCu;
            goto label_129cfc;
        }
    }
    ctx->pc = 0x129CB8u;
label_129cb8:
    // 0x129cb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129cbc:
    // 0x129cbc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129cc0:
    // 0x129cc0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_129cc4:
    // 0x129cc4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x129cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_129cc8:
    // 0x129cc8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129ccc:
    // 0x129ccc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x129cccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_129cd0:
    // 0x129cd0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129cd4:
    // 0x129cd4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_129cd8:
    // 0x129cd8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129cdc:
    // 0x129cdc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x129cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_129ce0:
    // 0x129ce0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129ce4:
    // 0x129ce4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_129ce8:
    // 0x129ce8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x129ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129cec:
    // 0x129cec: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x129cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_129cf0:
    // 0x129cf0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x129cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_129cf4:
    // 0x129cf4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x129cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_129cf8:
    // 0x129cf8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x129cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_129cfc:
    // 0x129cfc: 0x1000001d  b           . + 4 + (0x1D << 2)
label_129d00:
    if (ctx->pc == 0x129D00u) {
        ctx->pc = 0x129D04u;
        goto label_129d04;
    }
    ctx->pc = 0x129CFCu;
    {
        const bool branch_taken_0x129cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129cfc) {
            ctx->pc = 0x129D74u;
            goto label_129d74;
        }
    }
    ctx->pc = 0x129D04u;
label_129d04:
    // 0x129d04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129d08:
    // 0x129d08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129d0c:
    // 0x129d0c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_129d10:
    // 0x129d10: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x129d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_129d14:
    // 0x129d14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129d18:
    // 0x129d18: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x129d18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_129d1c:
    // 0x129d1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129d20:
    // 0x129d20: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129d20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_129d24:
    // 0x129d24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129d28:
    // 0x129d28: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x129d28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_129d2c:
    // 0x129d2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129d30:
    // 0x129d30: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129d30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_129d34:
    // 0x129d34: 0x1000000f  b           . + 4 + (0xF << 2)
label_129d38:
    if (ctx->pc == 0x129D38u) {
        ctx->pc = 0x129D3Cu;
        goto label_129d3c;
    }
    ctx->pc = 0x129D34u;
    {
        const bool branch_taken_0x129d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129d34) {
            ctx->pc = 0x129D74u;
            goto label_129d74;
        }
    }
    ctx->pc = 0x129D3Cu;
label_129d3c:
    // 0x129d3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129d40:
    // 0x129d40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129d44:
    // 0x129d44: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129d44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_129d48:
    // 0x129d48: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x129d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_129d4c:
    // 0x129d4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129d50:
    // 0x129d50: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x129d50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_129d54:
    // 0x129d54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129d58:
    // 0x129d58: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129d58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_129d5c:
    // 0x129d5c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129d60:
    // 0x129d60: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x129d60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_129d64:
    // 0x129d64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_129d68:
    // 0x129d68: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129d68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_129d6c:
    // 0x129d6c: 0x10000001  b           . + 4 + (0x1 << 2)
label_129d70:
    if (ctx->pc == 0x129D70u) {
        ctx->pc = 0x129D74u;
        goto label_129d74;
    }
    ctx->pc = 0x129D6Cu;
    {
        const bool branch_taken_0x129d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129d6c) {
            ctx->pc = 0x129D74u;
            goto label_129d74;
        }
    }
    ctx->pc = 0x129D74u;
label_129d74:
    // 0x129d74: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x129d74u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_129d78:
    // 0x129d78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x129d78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_129d7c:
    // 0x129d7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x129d7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_129d80:
    // 0x129d80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x129d80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_129d84:
    // 0x129d84: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x129d84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_129d88:
    // 0x129d88: 0x3e00008  jr          $ra
label_129d8c:
    if (ctx->pc == 0x129D8Cu) {
        ctx->pc = 0x129D90u;
        goto label_fallthrough_0x129d88;
    }
    ctx->pc = 0x129D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x129d88:
    ctx->pc = 0x129D90u;
}
