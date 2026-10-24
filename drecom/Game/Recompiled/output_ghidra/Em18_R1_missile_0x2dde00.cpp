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

// Function: Em18_R1_missile
// Address: 0x2dde00 - 0x2de474
void Em18_R1_missile_0x2dde00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_R1_missile_0x2dde00");
#endif

    switch (ctx->pc) {
        case 0x2dde00u: goto label_2dde00;
        case 0x2dde04u: goto label_2dde04;
        case 0x2dde08u: goto label_2dde08;
        case 0x2dde0cu: goto label_2dde0c;
        case 0x2dde10u: goto label_2dde10;
        case 0x2dde14u: goto label_2dde14;
        case 0x2dde18u: goto label_2dde18;
        case 0x2dde1cu: goto label_2dde1c;
        case 0x2dde20u: goto label_2dde20;
        case 0x2dde24u: goto label_2dde24;
        case 0x2dde28u: goto label_2dde28;
        case 0x2dde2cu: goto label_2dde2c;
        case 0x2dde30u: goto label_2dde30;
        case 0x2dde34u: goto label_2dde34;
        case 0x2dde38u: goto label_2dde38;
        case 0x2dde3cu: goto label_2dde3c;
        case 0x2dde40u: goto label_2dde40;
        case 0x2dde44u: goto label_2dde44;
        case 0x2dde48u: goto label_2dde48;
        case 0x2dde4cu: goto label_2dde4c;
        case 0x2dde50u: goto label_2dde50;
        case 0x2dde54u: goto label_2dde54;
        case 0x2dde58u: goto label_2dde58;
        case 0x2dde5cu: goto label_2dde5c;
        case 0x2dde60u: goto label_2dde60;
        case 0x2dde64u: goto label_2dde64;
        case 0x2dde68u: goto label_2dde68;
        case 0x2dde6cu: goto label_2dde6c;
        case 0x2dde70u: goto label_2dde70;
        case 0x2dde74u: goto label_2dde74;
        case 0x2dde78u: goto label_2dde78;
        case 0x2dde7cu: goto label_2dde7c;
        case 0x2dde80u: goto label_2dde80;
        case 0x2dde84u: goto label_2dde84;
        case 0x2dde88u: goto label_2dde88;
        case 0x2dde8cu: goto label_2dde8c;
        case 0x2dde90u: goto label_2dde90;
        case 0x2dde94u: goto label_2dde94;
        case 0x2dde98u: goto label_2dde98;
        case 0x2dde9cu: goto label_2dde9c;
        case 0x2ddea0u: goto label_2ddea0;
        case 0x2ddea4u: goto label_2ddea4;
        case 0x2ddea8u: goto label_2ddea8;
        case 0x2ddeacu: goto label_2ddeac;
        case 0x2ddeb0u: goto label_2ddeb0;
        case 0x2ddeb4u: goto label_2ddeb4;
        case 0x2ddeb8u: goto label_2ddeb8;
        case 0x2ddebcu: goto label_2ddebc;
        case 0x2ddec0u: goto label_2ddec0;
        case 0x2ddec4u: goto label_2ddec4;
        case 0x2ddec8u: goto label_2ddec8;
        case 0x2ddeccu: goto label_2ddecc;
        case 0x2dded0u: goto label_2dded0;
        case 0x2dded4u: goto label_2dded4;
        case 0x2dded8u: goto label_2dded8;
        case 0x2ddedcu: goto label_2ddedc;
        case 0x2ddee0u: goto label_2ddee0;
        case 0x2ddee4u: goto label_2ddee4;
        case 0x2ddee8u: goto label_2ddee8;
        case 0x2ddeecu: goto label_2ddeec;
        case 0x2ddef0u: goto label_2ddef0;
        case 0x2ddef4u: goto label_2ddef4;
        case 0x2ddef8u: goto label_2ddef8;
        case 0x2ddefcu: goto label_2ddefc;
        case 0x2ddf00u: goto label_2ddf00;
        case 0x2ddf04u: goto label_2ddf04;
        case 0x2ddf08u: goto label_2ddf08;
        case 0x2ddf0cu: goto label_2ddf0c;
        case 0x2ddf10u: goto label_2ddf10;
        case 0x2ddf14u: goto label_2ddf14;
        case 0x2ddf18u: goto label_2ddf18;
        case 0x2ddf1cu: goto label_2ddf1c;
        case 0x2ddf20u: goto label_2ddf20;
        case 0x2ddf24u: goto label_2ddf24;
        case 0x2ddf28u: goto label_2ddf28;
        case 0x2ddf2cu: goto label_2ddf2c;
        case 0x2ddf30u: goto label_2ddf30;
        case 0x2ddf34u: goto label_2ddf34;
        case 0x2ddf38u: goto label_2ddf38;
        case 0x2ddf3cu: goto label_2ddf3c;
        case 0x2ddf40u: goto label_2ddf40;
        case 0x2ddf44u: goto label_2ddf44;
        case 0x2ddf48u: goto label_2ddf48;
        case 0x2ddf4cu: goto label_2ddf4c;
        case 0x2ddf50u: goto label_2ddf50;
        case 0x2ddf54u: goto label_2ddf54;
        case 0x2ddf58u: goto label_2ddf58;
        case 0x2ddf5cu: goto label_2ddf5c;
        case 0x2ddf60u: goto label_2ddf60;
        case 0x2ddf64u: goto label_2ddf64;
        case 0x2ddf68u: goto label_2ddf68;
        case 0x2ddf6cu: goto label_2ddf6c;
        case 0x2ddf70u: goto label_2ddf70;
        case 0x2ddf74u: goto label_2ddf74;
        case 0x2ddf78u: goto label_2ddf78;
        case 0x2ddf7cu: goto label_2ddf7c;
        case 0x2ddf80u: goto label_2ddf80;
        case 0x2ddf84u: goto label_2ddf84;
        case 0x2ddf88u: goto label_2ddf88;
        case 0x2ddf8cu: goto label_2ddf8c;
        case 0x2ddf90u: goto label_2ddf90;
        case 0x2ddf94u: goto label_2ddf94;
        case 0x2ddf98u: goto label_2ddf98;
        case 0x2ddf9cu: goto label_2ddf9c;
        case 0x2ddfa0u: goto label_2ddfa0;
        case 0x2ddfa4u: goto label_2ddfa4;
        case 0x2ddfa8u: goto label_2ddfa8;
        case 0x2ddfacu: goto label_2ddfac;
        case 0x2ddfb0u: goto label_2ddfb0;
        case 0x2ddfb4u: goto label_2ddfb4;
        case 0x2ddfb8u: goto label_2ddfb8;
        case 0x2ddfbcu: goto label_2ddfbc;
        case 0x2ddfc0u: goto label_2ddfc0;
        case 0x2ddfc4u: goto label_2ddfc4;
        case 0x2ddfc8u: goto label_2ddfc8;
        case 0x2ddfccu: goto label_2ddfcc;
        case 0x2ddfd0u: goto label_2ddfd0;
        case 0x2ddfd4u: goto label_2ddfd4;
        case 0x2ddfd8u: goto label_2ddfd8;
        case 0x2ddfdcu: goto label_2ddfdc;
        case 0x2ddfe0u: goto label_2ddfe0;
        case 0x2ddfe4u: goto label_2ddfe4;
        case 0x2ddfe8u: goto label_2ddfe8;
        case 0x2ddfecu: goto label_2ddfec;
        case 0x2ddff0u: goto label_2ddff0;
        case 0x2ddff4u: goto label_2ddff4;
        case 0x2ddff8u: goto label_2ddff8;
        case 0x2ddffcu: goto label_2ddffc;
        case 0x2de000u: goto label_2de000;
        case 0x2de004u: goto label_2de004;
        case 0x2de008u: goto label_2de008;
        case 0x2de00cu: goto label_2de00c;
        case 0x2de010u: goto label_2de010;
        case 0x2de014u: goto label_2de014;
        case 0x2de018u: goto label_2de018;
        case 0x2de01cu: goto label_2de01c;
        case 0x2de020u: goto label_2de020;
        case 0x2de024u: goto label_2de024;
        case 0x2de028u: goto label_2de028;
        case 0x2de02cu: goto label_2de02c;
        case 0x2de030u: goto label_2de030;
        case 0x2de034u: goto label_2de034;
        case 0x2de038u: goto label_2de038;
        case 0x2de03cu: goto label_2de03c;
        case 0x2de040u: goto label_2de040;
        case 0x2de044u: goto label_2de044;
        case 0x2de048u: goto label_2de048;
        case 0x2de04cu: goto label_2de04c;
        case 0x2de050u: goto label_2de050;
        case 0x2de054u: goto label_2de054;
        case 0x2de058u: goto label_2de058;
        case 0x2de05cu: goto label_2de05c;
        case 0x2de060u: goto label_2de060;
        case 0x2de064u: goto label_2de064;
        case 0x2de068u: goto label_2de068;
        case 0x2de06cu: goto label_2de06c;
        case 0x2de070u: goto label_2de070;
        case 0x2de074u: goto label_2de074;
        case 0x2de078u: goto label_2de078;
        case 0x2de07cu: goto label_2de07c;
        case 0x2de080u: goto label_2de080;
        case 0x2de084u: goto label_2de084;
        case 0x2de088u: goto label_2de088;
        case 0x2de08cu: goto label_2de08c;
        case 0x2de090u: goto label_2de090;
        case 0x2de094u: goto label_2de094;
        case 0x2de098u: goto label_2de098;
        case 0x2de09cu: goto label_2de09c;
        case 0x2de0a0u: goto label_2de0a0;
        case 0x2de0a4u: goto label_2de0a4;
        case 0x2de0a8u: goto label_2de0a8;
        case 0x2de0acu: goto label_2de0ac;
        case 0x2de0b0u: goto label_2de0b0;
        case 0x2de0b4u: goto label_2de0b4;
        case 0x2de0b8u: goto label_2de0b8;
        case 0x2de0bcu: goto label_2de0bc;
        case 0x2de0c0u: goto label_2de0c0;
        case 0x2de0c4u: goto label_2de0c4;
        case 0x2de0c8u: goto label_2de0c8;
        case 0x2de0ccu: goto label_2de0cc;
        case 0x2de0d0u: goto label_2de0d0;
        case 0x2de0d4u: goto label_2de0d4;
        case 0x2de0d8u: goto label_2de0d8;
        case 0x2de0dcu: goto label_2de0dc;
        case 0x2de0e0u: goto label_2de0e0;
        case 0x2de0e4u: goto label_2de0e4;
        case 0x2de0e8u: goto label_2de0e8;
        case 0x2de0ecu: goto label_2de0ec;
        case 0x2de0f0u: goto label_2de0f0;
        case 0x2de0f4u: goto label_2de0f4;
        case 0x2de0f8u: goto label_2de0f8;
        case 0x2de0fcu: goto label_2de0fc;
        case 0x2de100u: goto label_2de100;
        case 0x2de104u: goto label_2de104;
        case 0x2de108u: goto label_2de108;
        case 0x2de10cu: goto label_2de10c;
        case 0x2de110u: goto label_2de110;
        case 0x2de114u: goto label_2de114;
        case 0x2de118u: goto label_2de118;
        case 0x2de11cu: goto label_2de11c;
        case 0x2de120u: goto label_2de120;
        case 0x2de124u: goto label_2de124;
        case 0x2de128u: goto label_2de128;
        case 0x2de12cu: goto label_2de12c;
        case 0x2de130u: goto label_2de130;
        case 0x2de134u: goto label_2de134;
        case 0x2de138u: goto label_2de138;
        case 0x2de13cu: goto label_2de13c;
        case 0x2de140u: goto label_2de140;
        case 0x2de144u: goto label_2de144;
        case 0x2de148u: goto label_2de148;
        case 0x2de14cu: goto label_2de14c;
        case 0x2de150u: goto label_2de150;
        case 0x2de154u: goto label_2de154;
        case 0x2de158u: goto label_2de158;
        case 0x2de15cu: goto label_2de15c;
        case 0x2de160u: goto label_2de160;
        case 0x2de164u: goto label_2de164;
        case 0x2de168u: goto label_2de168;
        case 0x2de16cu: goto label_2de16c;
        case 0x2de170u: goto label_2de170;
        case 0x2de174u: goto label_2de174;
        case 0x2de178u: goto label_2de178;
        case 0x2de17cu: goto label_2de17c;
        case 0x2de180u: goto label_2de180;
        case 0x2de184u: goto label_2de184;
        case 0x2de188u: goto label_2de188;
        case 0x2de18cu: goto label_2de18c;
        case 0x2de190u: goto label_2de190;
        case 0x2de194u: goto label_2de194;
        case 0x2de198u: goto label_2de198;
        case 0x2de19cu: goto label_2de19c;
        case 0x2de1a0u: goto label_2de1a0;
        case 0x2de1a4u: goto label_2de1a4;
        case 0x2de1a8u: goto label_2de1a8;
        case 0x2de1acu: goto label_2de1ac;
        case 0x2de1b0u: goto label_2de1b0;
        case 0x2de1b4u: goto label_2de1b4;
        case 0x2de1b8u: goto label_2de1b8;
        case 0x2de1bcu: goto label_2de1bc;
        case 0x2de1c0u: goto label_2de1c0;
        case 0x2de1c4u: goto label_2de1c4;
        case 0x2de1c8u: goto label_2de1c8;
        case 0x2de1ccu: goto label_2de1cc;
        case 0x2de1d0u: goto label_2de1d0;
        case 0x2de1d4u: goto label_2de1d4;
        case 0x2de1d8u: goto label_2de1d8;
        case 0x2de1dcu: goto label_2de1dc;
        case 0x2de1e0u: goto label_2de1e0;
        case 0x2de1e4u: goto label_2de1e4;
        case 0x2de1e8u: goto label_2de1e8;
        case 0x2de1ecu: goto label_2de1ec;
        case 0x2de1f0u: goto label_2de1f0;
        case 0x2de1f4u: goto label_2de1f4;
        case 0x2de1f8u: goto label_2de1f8;
        case 0x2de1fcu: goto label_2de1fc;
        case 0x2de200u: goto label_2de200;
        case 0x2de204u: goto label_2de204;
        case 0x2de208u: goto label_2de208;
        case 0x2de20cu: goto label_2de20c;
        case 0x2de210u: goto label_2de210;
        case 0x2de214u: goto label_2de214;
        case 0x2de218u: goto label_2de218;
        case 0x2de21cu: goto label_2de21c;
        case 0x2de220u: goto label_2de220;
        case 0x2de224u: goto label_2de224;
        case 0x2de228u: goto label_2de228;
        case 0x2de22cu: goto label_2de22c;
        case 0x2de230u: goto label_2de230;
        case 0x2de234u: goto label_2de234;
        case 0x2de238u: goto label_2de238;
        case 0x2de23cu: goto label_2de23c;
        case 0x2de240u: goto label_2de240;
        case 0x2de244u: goto label_2de244;
        case 0x2de248u: goto label_2de248;
        case 0x2de24cu: goto label_2de24c;
        case 0x2de250u: goto label_2de250;
        case 0x2de254u: goto label_2de254;
        case 0x2de258u: goto label_2de258;
        case 0x2de25cu: goto label_2de25c;
        case 0x2de260u: goto label_2de260;
        case 0x2de264u: goto label_2de264;
        case 0x2de268u: goto label_2de268;
        case 0x2de26cu: goto label_2de26c;
        case 0x2de270u: goto label_2de270;
        case 0x2de274u: goto label_2de274;
        case 0x2de278u: goto label_2de278;
        case 0x2de27cu: goto label_2de27c;
        case 0x2de280u: goto label_2de280;
        case 0x2de284u: goto label_2de284;
        case 0x2de288u: goto label_2de288;
        case 0x2de28cu: goto label_2de28c;
        case 0x2de290u: goto label_2de290;
        case 0x2de294u: goto label_2de294;
        case 0x2de298u: goto label_2de298;
        case 0x2de29cu: goto label_2de29c;
        case 0x2de2a0u: goto label_2de2a0;
        case 0x2de2a4u: goto label_2de2a4;
        case 0x2de2a8u: goto label_2de2a8;
        case 0x2de2acu: goto label_2de2ac;
        case 0x2de2b0u: goto label_2de2b0;
        case 0x2de2b4u: goto label_2de2b4;
        case 0x2de2b8u: goto label_2de2b8;
        case 0x2de2bcu: goto label_2de2bc;
        case 0x2de2c0u: goto label_2de2c0;
        case 0x2de2c4u: goto label_2de2c4;
        case 0x2de2c8u: goto label_2de2c8;
        case 0x2de2ccu: goto label_2de2cc;
        case 0x2de2d0u: goto label_2de2d0;
        case 0x2de2d4u: goto label_2de2d4;
        case 0x2de2d8u: goto label_2de2d8;
        case 0x2de2dcu: goto label_2de2dc;
        case 0x2de2e0u: goto label_2de2e0;
        case 0x2de2e4u: goto label_2de2e4;
        case 0x2de2e8u: goto label_2de2e8;
        case 0x2de2ecu: goto label_2de2ec;
        case 0x2de2f0u: goto label_2de2f0;
        case 0x2de2f4u: goto label_2de2f4;
        case 0x2de2f8u: goto label_2de2f8;
        case 0x2de2fcu: goto label_2de2fc;
        case 0x2de300u: goto label_2de300;
        case 0x2de304u: goto label_2de304;
        case 0x2de308u: goto label_2de308;
        case 0x2de30cu: goto label_2de30c;
        case 0x2de310u: goto label_2de310;
        case 0x2de314u: goto label_2de314;
        case 0x2de318u: goto label_2de318;
        case 0x2de31cu: goto label_2de31c;
        case 0x2de320u: goto label_2de320;
        case 0x2de324u: goto label_2de324;
        case 0x2de328u: goto label_2de328;
        case 0x2de32cu: goto label_2de32c;
        case 0x2de330u: goto label_2de330;
        case 0x2de334u: goto label_2de334;
        case 0x2de338u: goto label_2de338;
        case 0x2de33cu: goto label_2de33c;
        case 0x2de340u: goto label_2de340;
        case 0x2de344u: goto label_2de344;
        case 0x2de348u: goto label_2de348;
        case 0x2de34cu: goto label_2de34c;
        case 0x2de350u: goto label_2de350;
        case 0x2de354u: goto label_2de354;
        case 0x2de358u: goto label_2de358;
        case 0x2de35cu: goto label_2de35c;
        case 0x2de360u: goto label_2de360;
        case 0x2de364u: goto label_2de364;
        case 0x2de368u: goto label_2de368;
        case 0x2de36cu: goto label_2de36c;
        case 0x2de370u: goto label_2de370;
        case 0x2de374u: goto label_2de374;
        case 0x2de378u: goto label_2de378;
        case 0x2de37cu: goto label_2de37c;
        case 0x2de380u: goto label_2de380;
        case 0x2de384u: goto label_2de384;
        case 0x2de388u: goto label_2de388;
        case 0x2de38cu: goto label_2de38c;
        case 0x2de390u: goto label_2de390;
        case 0x2de394u: goto label_2de394;
        case 0x2de398u: goto label_2de398;
        case 0x2de39cu: goto label_2de39c;
        case 0x2de3a0u: goto label_2de3a0;
        case 0x2de3a4u: goto label_2de3a4;
        case 0x2de3a8u: goto label_2de3a8;
        case 0x2de3acu: goto label_2de3ac;
        case 0x2de3b0u: goto label_2de3b0;
        case 0x2de3b4u: goto label_2de3b4;
        case 0x2de3b8u: goto label_2de3b8;
        case 0x2de3bcu: goto label_2de3bc;
        case 0x2de3c0u: goto label_2de3c0;
        case 0x2de3c4u: goto label_2de3c4;
        case 0x2de3c8u: goto label_2de3c8;
        case 0x2de3ccu: goto label_2de3cc;
        case 0x2de3d0u: goto label_2de3d0;
        case 0x2de3d4u: goto label_2de3d4;
        case 0x2de3d8u: goto label_2de3d8;
        case 0x2de3dcu: goto label_2de3dc;
        case 0x2de3e0u: goto label_2de3e0;
        case 0x2de3e4u: goto label_2de3e4;
        case 0x2de3e8u: goto label_2de3e8;
        case 0x2de3ecu: goto label_2de3ec;
        case 0x2de3f0u: goto label_2de3f0;
        case 0x2de3f4u: goto label_2de3f4;
        case 0x2de3f8u: goto label_2de3f8;
        case 0x2de3fcu: goto label_2de3fc;
        case 0x2de400u: goto label_2de400;
        case 0x2de404u: goto label_2de404;
        case 0x2de408u: goto label_2de408;
        case 0x2de40cu: goto label_2de40c;
        case 0x2de410u: goto label_2de410;
        case 0x2de414u: goto label_2de414;
        case 0x2de418u: goto label_2de418;
        case 0x2de41cu: goto label_2de41c;
        case 0x2de420u: goto label_2de420;
        case 0x2de424u: goto label_2de424;
        case 0x2de428u: goto label_2de428;
        case 0x2de42cu: goto label_2de42c;
        case 0x2de430u: goto label_2de430;
        case 0x2de434u: goto label_2de434;
        case 0x2de438u: goto label_2de438;
        case 0x2de43cu: goto label_2de43c;
        case 0x2de440u: goto label_2de440;
        case 0x2de444u: goto label_2de444;
        case 0x2de448u: goto label_2de448;
        case 0x2de44cu: goto label_2de44c;
        case 0x2de450u: goto label_2de450;
        case 0x2de454u: goto label_2de454;
        case 0x2de458u: goto label_2de458;
        case 0x2de45cu: goto label_2de45c;
        case 0x2de460u: goto label_2de460;
        case 0x2de464u: goto label_2de464;
        case 0x2de468u: goto label_2de468;
        case 0x2de46cu: goto label_2de46c;
        case 0x2de470u: goto label_2de470;
        default: break;
    }

    ctx->pc = 0x2dde00u;

label_2dde00:
    // 0x2dde00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2dde00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2dde04:
    // 0x2dde04: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2dde04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_2dde08:
    // 0x2dde08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dde08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2dde0c:
    // 0x2dde0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dde0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2dde10:
    // 0x2dde10: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x2dde10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_2dde14:
    // 0x2dde14: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x2dde14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_2dde18:
    // 0x2dde18: 0x24710080  addiu       $s1, $v1, 0x80
    ctx->pc = 0x2dde18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_2dde1c:
    // 0x2dde1c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2dde1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2dde20:
    // 0x2dde20: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x2dde20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2dde24:
    // 0x2dde24: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2dde24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2dde28:
    // 0x2dde28: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2dde28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2dde2c:
    // 0x2dde2c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2dde2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2dde30:
    // 0x2dde30: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x2dde30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2dde34:
    // 0x2dde34: 0x10200189  beqz        $at, . + 4 + (0x189 << 2)
label_2dde38:
    if (ctx->pc == 0x2DDE38u) {
        ctx->pc = 0x2DDE3Cu;
        goto label_2dde3c;
    }
    ctx->pc = 0x2DDE34u;
    {
        const bool branch_taken_0x2dde34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dde34) {
            ctx->pc = 0x2DE45Cu;
            goto label_2de45c;
        }
    }
    ctx->pc = 0x2DDE3Cu;
label_2dde3c:
    // 0x2dde3c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2dde3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2dde40:
    // 0x2dde40: 0x246419b0  addiu       $a0, $v1, 0x19B0
    ctx->pc = 0x2dde40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6576));
label_2dde44:
    // 0x2dde44: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2dde44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2dde48:
    // 0x2dde48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2dde48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2dde4c:
    // 0x2dde4c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2dde4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2dde50:
    // 0x2dde50: 0x600008  jr          $v1
label_2dde54:
    if (ctx->pc == 0x2DDE54u) {
        ctx->pc = 0x2DDE58u;
        goto label_2dde58;
    }
    ctx->pc = 0x2DDE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDE50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2DDE58u;
label_2dde58:
    // 0x2dde58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dde58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dde5c:
    // 0x2dde5c: 0xa20200d6  sb          $v0, 0xD6($s0)
    ctx->pc = 0x2dde5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 214), (uint8_t)GPR_U32(ctx, 2));
label_2dde60:
    // 0x2dde60: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2dde60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
label_2dde64:
    // 0x2dde64: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2dde64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2dde68:
    // 0x2dde68: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2dde68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2dde6c:
    // 0x2dde6c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2dde70:
    if (ctx->pc == 0x2DDE70u) {
        ctx->pc = 0x2DDE74u;
        goto label_2dde74;
    }
    ctx->pc = 0x2DDE6Cu;
    {
        const bool branch_taken_0x2dde6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dde6c) {
            ctx->pc = 0x2DDE9Cu;
            goto label_2dde9c;
        }
    }
    ctx->pc = 0x2DDE74u;
label_2dde74:
    // 0x2dde74: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2dde74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2dde78:
    // 0x2dde78: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2dde78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2dde7c:
    // 0x2dde7c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2dde7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2dde80:
    // 0x2dde80: 0x24060a37  addiu       $a2, $zero, 0xA37
    ctx->pc = 0x2dde80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2615));
label_2dde84:
    // 0x2dde84: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2dde84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2dde88:
    // 0x2dde88: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2dde88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2dde8c:
    // 0x2dde8c: 0xc0965d0  jal         func_259740
label_2dde90:
    if (ctx->pc == 0x2DDE90u) {
        ctx->pc = 0x2DDE94u;
        goto label_2dde94;
    }
    ctx->pc = 0x2DDE8Cu;
    SET_GPR_U32(ctx, 31, 0x2DDE94u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DDE8Cu, 0x2DDE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDE94u;
label_2dde94:
    // 0x2dde94: 0x10000009  b           . + 4 + (0x9 << 2)
label_2dde98:
    if (ctx->pc == 0x2DDE98u) {
        ctx->pc = 0x2DDE9Cu;
        goto label_2dde9c;
    }
    ctx->pc = 0x2DDE94u;
    {
        const bool branch_taken_0x2dde94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dde94) {
            ctx->pc = 0x2DDEBCu;
            goto label_2ddebc;
        }
    }
    ctx->pc = 0x2DDE9Cu;
label_2dde9c:
    // 0x2dde9c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2dde9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2ddea0:
    // 0x2ddea0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2ddea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2ddea4:
    // 0x2ddea4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2ddea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2ddea8:
    // 0x2ddea8: 0x24060a38  addiu       $a2, $zero, 0xA38
    ctx->pc = 0x2ddea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2616));
label_2ddeac:
    // 0x2ddeac: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2ddeacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2ddeb0:
    // 0x2ddeb0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2ddeb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2ddeb4:
    // 0x2ddeb4: 0xc0965d0  jal         func_259740
label_2ddeb8:
    if (ctx->pc == 0x2DDEB8u) {
        ctx->pc = 0x2DDEBCu;
        goto label_2ddebc;
    }
    ctx->pc = 0x2DDEB4u;
    SET_GPR_U32(ctx, 31, 0x2DDEBCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DDEB4u, 0x2DDEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDEBCu;
label_2ddebc:
    // 0x2ddebc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2ddebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2ddec0:
    // 0x2ddec0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2ddec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2ddec4:
    // 0x2ddec4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2ddec4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_2ddec8:
    // 0x2ddec8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2ddec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2ddecc:
    // 0x2ddecc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2ddeccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2dded0:
    // 0x2dded0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2dded0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2dded4:
    // 0x2dded4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2dded4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2dded8:
    // 0x2dded8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2dded8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2ddedc:
    // 0x2ddedc: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2ddedcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
label_2ddee0:
    // 0x2ddee0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_2ddee4:
    if (ctx->pc == 0x2DDEE4u) {
        ctx->pc = 0x2DDEE8u;
        goto label_2ddee8;
    }
    ctx->pc = 0x2DDEE0u;
    {
        const bool branch_taken_0x2ddee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddee0) {
            ctx->pc = 0x2DDF44u;
            goto label_2ddf44;
        }
    }
    ctx->pc = 0x2DDEE8u;
label_2ddee8:
    // 0x2ddee8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2ddee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2ddeec:
    // 0x2ddeec: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2ddeecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_2ddef0:
    // 0x2ddef0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ddef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2ddef4:
    // 0x2ddef4: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2ddef4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_2ddef8:
    // 0x2ddef8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2ddef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2ddefc:
    // 0x2ddefc: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2ddefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_2ddf00:
    // 0x2ddf00: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2ddf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_2ddf04:
    // 0x2ddf04: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2ddf04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_2ddf08:
    // 0x2ddf08: 0xc05ccfc  jal         func_1733F0
label_2ddf0c:
    if (ctx->pc == 0x2DDF0Cu) {
        ctx->pc = 0x2DDF10u;
        goto label_2ddf10;
    }
    ctx->pc = 0x2DDF08u;
    SET_GPR_U32(ctx, 31, 0x2DDF10u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x2DDF08u, 0x2DDF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDF10u;
label_2ddf10:
    // 0x2ddf10: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2ddf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2ddf14:
    // 0x2ddf14: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2ddf14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_2ddf18:
    // 0x2ddf18: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2ddf18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2ddf1c:
    // 0x2ddf1c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2ddf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2ddf20:
    // 0x2ddf20: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x2ddf20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
label_2ddf24:
    // 0x2ddf24: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2ddf24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2ddf28:
    // 0x2ddf28: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2ddf28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2ddf2c:
    // 0x2ddf2c: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x2ddf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ddf30:
    // 0x2ddf30: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x2ddf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2ddf34:
    // 0x2ddf34: 0xc058f50  jal         func_163D40
label_2ddf38:
    if (ctx->pc == 0x2DDF38u) {
        ctx->pc = 0x2DDF3Cu;
        goto label_2ddf3c;
    }
    ctx->pc = 0x2DDF34u;
    SET_GPR_U32(ctx, 31, 0x2DDF3Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2DDF34u, 0x2DDF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDF3Cu;
label_2ddf3c:
    // 0x2ddf3c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2ddf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2ddf40:
    // 0x2ddf40: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2ddf40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_2ddf44:
    // 0x2ddf44: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2ddf44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2ddf48:
    // 0x2ddf48: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ddf48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2ddf4c:
    // 0x2ddf4c: 0xc096b40  jal         func_25AD00
label_2ddf50:
    if (ctx->pc == 0x2DDF50u) {
        ctx->pc = 0x2DDF54u;
        goto label_2ddf54;
    }
    ctx->pc = 0x2DDF4Cu;
    SET_GPR_U32(ctx, 31, 0x2DDF54u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DDF4Cu, 0x2DDF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDF54u;
label_2ddf54:
    // 0x2ddf54: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2ddf54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2ddf58:
    // 0x2ddf58: 0xc05cd10  jal         func_173440
label_2ddf5c:
    if (ctx->pc == 0x2DDF5Cu) {
        ctx->pc = 0x2DDF60u;
        goto label_2ddf60;
    }
    ctx->pc = 0x2DDF58u;
    SET_GPR_U32(ctx, 31, 0x2DDF60u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DDF58u, 0x2DDF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDF60u;
label_2ddf60:
    // 0x2ddf60: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2ddf60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2ddf64:
    // 0x2ddf64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ddf64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2ddf68:
    // 0x2ddf68: 0xc05cec4  jal         func_173B10
label_2ddf6c:
    if (ctx->pc == 0x2DDF6Cu) {
        ctx->pc = 0x2DDF70u;
        goto label_2ddf70;
    }
    ctx->pc = 0x2DDF68u;
    SET_GPR_U32(ctx, 31, 0x2DDF70u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DDF68u, 0x2DDF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDF70u;
label_2ddf70:
    // 0x2ddf70: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2ddf70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2ddf74:
    // 0x2ddf74: 0xc0974dc  jal         func_25D370
label_2ddf78:
    if (ctx->pc == 0x2DDF78u) {
        ctx->pc = 0x2DDF7Cu;
        goto label_2ddf7c;
    }
    ctx->pc = 0x2DDF74u;
    SET_GPR_U32(ctx, 31, 0x2DDF7Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DDF74u, 0x2DDF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDF7Cu;
label_2ddf7c:
    // 0x2ddf7c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2ddf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2ddf80:
    // 0x2ddf80: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2ddf80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_2ddf84:
    // 0x2ddf84: 0x10600135  beqz        $v1, . + 4 + (0x135 << 2)
label_2ddf88:
    if (ctx->pc == 0x2DDF88u) {
        ctx->pc = 0x2DDF8Cu;
        goto label_2ddf8c;
    }
    ctx->pc = 0x2DDF84u;
    {
        const bool branch_taken_0x2ddf84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddf84) {
            ctx->pc = 0x2DE45Cu;
            goto label_2de45c;
        }
    }
    ctx->pc = 0x2DDF8Cu;
label_2ddf8c:
    // 0x2ddf8c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2ddf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2ddf90:
    // 0x2ddf90: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2ddf90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_2ddf94:
    // 0x2ddf94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ddf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2ddf98:
    // 0x2ddf98: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2ddf98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_2ddf9c:
    // 0x2ddf9c: 0x1000012f  b           . + 4 + (0x12F << 2)
label_2ddfa0:
    if (ctx->pc == 0x2DDFA0u) {
        ctx->pc = 0x2DDFA4u;
        goto label_2ddfa4;
    }
    ctx->pc = 0x2DDF9Cu;
    {
        const bool branch_taken_0x2ddf9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddf9c) {
            ctx->pc = 0x2DE45Cu;
            goto label_2de45c;
        }
    }
    ctx->pc = 0x2DDFA4u;
label_2ddfa4:
    // 0x2ddfa4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2ddfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2ddfa8:
    // 0x2ddfa8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2ddfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2ddfac:
    // 0x2ddfac: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2ddfacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2ddfb0:
    // 0x2ddfb0: 0x2406003a  addiu       $a2, $zero, 0x3A
    ctx->pc = 0x2ddfb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_2ddfb4:
    // 0x2ddfb4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2ddfb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2ddfb8:
    // 0x2ddfb8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2ddfb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2ddfbc:
    // 0x2ddfbc: 0xc0965d0  jal         func_259740
label_2ddfc0:
    if (ctx->pc == 0x2DDFC0u) {
        ctx->pc = 0x2DDFC4u;
        goto label_2ddfc4;
    }
    ctx->pc = 0x2DDFBCu;
    SET_GPR_U32(ctx, 31, 0x2DDFC4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DDFBCu, 0x2DDFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDFC4u;
label_2ddfc4:
    // 0x2ddfc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ddfc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ddfc8:
    // 0x2ddfc8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2ddfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2ddfcc:
    // 0x2ddfcc: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2ddfccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_2ddfd0:
    // 0x2ddfd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ddfd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ddfd4:
    // 0x2ddfd4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2ddfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2ddfd8:
    // 0x2ddfd8: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2ddfd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_2ddfdc:
    // 0x2ddfdc: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x2ddfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_2ddfe0:
    // 0x2ddfe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ddfe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ddfe4:
    // 0x2ddfe4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2ddfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2ddfe8:
    // 0x2ddfe8: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2ddfe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_2ddfec:
    // 0x2ddfec: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2ddfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2ddff0:
    // 0x2ddff0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2ddff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2ddff4:
    // 0x2ddff4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2ddff4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_2ddff8:
    // 0x2ddff8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2ddff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2ddffc:
    // 0x2ddffc: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x2ddffcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_2de000:
    // 0x2de000: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2de000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2de004:
    // 0x2de004: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2de004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de008:
    // 0x2de008: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x2de008u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
label_2de00c:
    // 0x2de00c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2de00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de010:
    // 0x2de010: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2de010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2de014:
    // 0x2de014: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2de014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2de018:
    // 0x2de018: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2de018u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2de01c:
    // 0x2de01c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2de01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de020:
    // 0x2de020: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2de020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2de024:
    // 0x2de024: 0xc096b40  jal         func_25AD00
label_2de028:
    if (ctx->pc == 0x2DE028u) {
        ctx->pc = 0x2DE02Cu;
        goto label_2de02c;
    }
    ctx->pc = 0x2DE024u;
    SET_GPR_U32(ctx, 31, 0x2DE02Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DE024u, 0x2DE02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE02Cu;
label_2de02c:
    // 0x2de02c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2de02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de030:
    // 0x2de030: 0xc05cd10  jal         func_173440
label_2de034:
    if (ctx->pc == 0x2DE034u) {
        ctx->pc = 0x2DE038u;
        goto label_2de038;
    }
    ctx->pc = 0x2DE030u;
    SET_GPR_U32(ctx, 31, 0x2DE038u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DE030u, 0x2DE038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE038u;
label_2de038:
    // 0x2de038: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2de038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de03c:
    // 0x2de03c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2de03cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2de040:
    // 0x2de040: 0xc05cec4  jal         func_173B10
label_2de044:
    if (ctx->pc == 0x2DE044u) {
        ctx->pc = 0x2DE048u;
        goto label_2de048;
    }
    ctx->pc = 0x2DE040u;
    SET_GPR_U32(ctx, 31, 0x2DE048u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DE040u, 0x2DE048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE048u;
label_2de048:
    // 0x2de048: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2de048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de04c:
    // 0x2de04c: 0xc0974dc  jal         func_25D370
label_2de050:
    if (ctx->pc == 0x2DE050u) {
        ctx->pc = 0x2DE054u;
        goto label_2de054;
    }
    ctx->pc = 0x2DE04Cu;
    SET_GPR_U32(ctx, 31, 0x2DE054u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DE04Cu, 0x2DE054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE054u;
label_2de054:
    // 0x2de054: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2de054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de058:
    // 0x2de058: 0x904209df  lbu         $v0, 0x9DF($v0)
    ctx->pc = 0x2de058u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2527)));
label_2de05c:
    // 0x2de05c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2de05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2de060:
    // 0x2de060: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2de060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_2de064:
    // 0x2de064: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_2de068:
    if (ctx->pc == 0x2DE068u) {
        ctx->pc = 0x2DE06Cu;
        goto label_2de06c;
    }
    ctx->pc = 0x2DE064u;
    {
        const bool branch_taken_0x2de064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de064) {
            ctx->pc = 0x2DE130u;
            goto label_2de130;
        }
    }
    ctx->pc = 0x2DE06Cu;
label_2de06c:
    // 0x2de06c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2de06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2de070:
    // 0x2de070: 0xc0675a4  jal         func_19D690
label_2de074:
    if (ctx->pc == 0x2DE074u) {
        ctx->pc = 0x2DE078u;
        goto label_2de078;
    }
    ctx->pc = 0x2DE070u;
    SET_GPR_U32(ctx, 31, 0x2DE078u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2DE070u, 0x2DE078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE078u;
label_2de078:
    // 0x2de078: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2de078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de07c:
    // 0x2de07c: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x2de07cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
label_2de080:
    // 0x2de080: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2de084:
    if (ctx->pc == 0x2DE084u) {
        ctx->pc = 0x2DE088u;
        goto label_2de088;
    }
    ctx->pc = 0x2DE080u;
    {
        const bool branch_taken_0x2de080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de080) {
            ctx->pc = 0x2DE0D4u;
            goto label_2de0d4;
        }
    }
    ctx->pc = 0x2DE088u;
label_2de088:
    // 0x2de088: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2de088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
label_2de08c:
    // 0x2de08c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2de08cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2de090:
    // 0x2de090: 0x0  nop
    ctx->pc = 0x2de090u;
    // NOP
label_2de094:
    // 0x2de094: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2de094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2de098:
    // 0x2de098: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2de098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de09c:
    // 0x2de09c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2de09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de0a0:
    // 0x2de0a0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2de0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_2de0a4:
    // 0x2de0a4: 0x244503c0  addiu       $a1, $v0, 0x3C0
    ctx->pc = 0x2de0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
label_2de0a8:
    // 0x2de0a8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2de0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2de0ac:
    // 0x2de0ac: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2de0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2de0b0:
    // 0x2de0b0: 0x24478e0c  addiu       $a3, $v0, -0x71F4
    ctx->pc = 0x2de0b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938124));
label_2de0b4:
    // 0x2de0b4: 0xc06d02c  jal         func_1B40B0
label_2de0b8:
    if (ctx->pc == 0x2DE0B8u) {
        ctx->pc = 0x2DE0BCu;
        goto label_2de0bc;
    }
    ctx->pc = 0x2DE0B4u;
    SET_GPR_U32(ctx, 31, 0x2DE0BCu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2DE0B4u, 0x2DE0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE0BCu;
label_2de0bc:
    // 0x2de0bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2de0c0:
    if (ctx->pc == 0x2DE0C0u) {
        ctx->pc = 0x2DE0C4u;
        goto label_2de0c4;
    }
    ctx->pc = 0x2DE0BCu;
    {
        const bool branch_taken_0x2de0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de0bc) {
            ctx->pc = 0x2DE0D4u;
            goto label_2de0d4;
        }
    }
    ctx->pc = 0x2DE0C4u;
label_2de0c4:
    // 0x2de0c4: 0xc0b6534  jal         func_2D94D0
label_2de0c8:
    if (ctx->pc == 0x2DE0C8u) {
        ctx->pc = 0x2DE0CCu;
        goto label_2de0cc;
    }
    ctx->pc = 0x2DE0C4u;
    SET_GPR_U32(ctx, 31, 0x2DE0CCu);
    ctx->pc = 0x2D94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D94D0u, 0x2DE0C4u, 0x2DE0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE0CCu;
label_2de0cc:
    // 0x2de0cc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2de0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de0d0:
    // 0x2de0d0: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x2de0d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
label_2de0d4:
    // 0x2de0d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2de0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de0d8:
    // 0x2de0d8: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x2de0d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
label_2de0dc:
    // 0x2de0dc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2de0e0:
    if (ctx->pc == 0x2DE0E0u) {
        ctx->pc = 0x2DE0E4u;
        goto label_2de0e4;
    }
    ctx->pc = 0x2DE0DCu;
    {
        const bool branch_taken_0x2de0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de0dc) {
            ctx->pc = 0x2DE130u;
            goto label_2de130;
        }
    }
    ctx->pc = 0x2DE0E4u;
label_2de0e4:
    // 0x2de0e4: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x2de0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
label_2de0e8:
    // 0x2de0e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2de0e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2de0ec:
    // 0x2de0ec: 0x0  nop
    ctx->pc = 0x2de0ecu;
    // NOP
label_2de0f0:
    // 0x2de0f0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2de0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2de0f4:
    // 0x2de0f4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2de0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de0f8:
    // 0x2de0f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2de0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de0fc:
    // 0x2de0fc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2de0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_2de100:
    // 0x2de100: 0x244503c0  addiu       $a1, $v0, 0x3C0
    ctx->pc = 0x2de100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
label_2de104:
    // 0x2de104: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2de104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2de108:
    // 0x2de108: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2de108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2de10c:
    // 0x2de10c: 0x24478e0c  addiu       $a3, $v0, -0x71F4
    ctx->pc = 0x2de10cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938124));
label_2de110:
    // 0x2de110: 0xc06d02c  jal         func_1B40B0
label_2de114:
    if (ctx->pc == 0x2DE114u) {
        ctx->pc = 0x2DE118u;
        goto label_2de118;
    }
    ctx->pc = 0x2DE110u;
    SET_GPR_U32(ctx, 31, 0x2DE118u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2DE110u, 0x2DE118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE118u;
label_2de118:
    // 0x2de118: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2de11c:
    if (ctx->pc == 0x2DE11Cu) {
        ctx->pc = 0x2DE120u;
        goto label_2de120;
    }
    ctx->pc = 0x2DE118u;
    {
        const bool branch_taken_0x2de118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de118) {
            ctx->pc = 0x2DE130u;
            goto label_2de130;
        }
    }
    ctx->pc = 0x2DE120u;
label_2de120:
    // 0x2de120: 0xc0b6534  jal         func_2D94D0
label_2de124:
    if (ctx->pc == 0x2DE124u) {
        ctx->pc = 0x2DE128u;
        goto label_2de128;
    }
    ctx->pc = 0x2DE120u;
    SET_GPR_U32(ctx, 31, 0x2DE128u);
    ctx->pc = 0x2D94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D94D0u, 0x2DE120u, 0x2DE128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE128u;
label_2de128:
    // 0x2de128: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2de128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de12c:
    // 0x2de12c: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x2de12cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
label_2de130:
    // 0x2de130: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2de130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de134:
    // 0x2de134: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2de134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2de138:
    // 0x2de138: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x2de138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_2de13c:
    // 0x2de13c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2de13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_2de140:
    // 0x2de140: 0x2446dce0  addiu       $a2, $v0, -0x2320
    ctx->pc = 0x2de140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_2de144:
    // 0x2de144: 0xc0675b0  jal         func_19D6C0
label_2de148:
    if (ctx->pc == 0x2DE148u) {
        ctx->pc = 0x2DE14Cu;
        goto label_2de14c;
    }
    ctx->pc = 0x2DE144u;
    SET_GPR_U32(ctx, 31, 0x2DE14Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2DE144u, 0x2DE14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE14Cu;
label_2de14c:
    // 0x2de14c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2de14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2de150:
    // 0x2de150: 0xc067588  jal         func_19D620
label_2de154:
    if (ctx->pc == 0x2DE154u) {
        ctx->pc = 0x2DE158u;
        goto label_2de158;
    }
    ctx->pc = 0x2DE150u;
    SET_GPR_U32(ctx, 31, 0x2DE158u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x2DE150u, 0x2DE158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE158u;
label_2de158:
    // 0x2de158: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2de158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2de15c:
    // 0x2de15c: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x2de15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2de160:
    // 0x2de160: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x2de160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
label_2de164:
    // 0x2de164: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2de164u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2de168:
    // 0x2de168: 0x0  nop
    ctx->pc = 0x2de168u;
    // NOP
label_2de16c:
    // 0x2de16c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2de16cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2de170:
    // 0x2de170: 0x0  nop
    ctx->pc = 0x2de170u;
    // NOP
label_2de174:
    // 0x2de174: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_2de178:
    if (ctx->pc == 0x2DE178u) {
        ctx->pc = 0x2DE17Cu;
        goto label_2de17c;
    }
    ctx->pc = 0x2DE174u;
    {
        const bool branch_taken_0x2de174 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2de174) {
            ctx->pc = 0x2DE194u;
            goto label_2de194;
        }
    }
    ctx->pc = 0x2DE17Cu;
label_2de17c:
    // 0x2de17c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2de17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de180:
    // 0x2de180: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2de180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_2de184:
    // 0x2de184: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2de184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2de188:
    // 0x2de188: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2de188u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_2de18c:
    // 0x2de18c: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_2de190:
    if (ctx->pc == 0x2DE190u) {
        ctx->pc = 0x2DE194u;
        goto label_2de194;
    }
    ctx->pc = 0x2DE18Cu;
    {
        const bool branch_taken_0x2de18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de18c) {
            ctx->pc = 0x2DE45Cu;
            goto label_2de45c;
        }
    }
    ctx->pc = 0x2DE194u;
label_2de194:
    // 0x2de194: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2de194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de198:
    // 0x2de198: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2de198u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_2de19c:
    // 0x2de19c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2de1a0:
    if (ctx->pc == 0x2DE1A0u) {
        ctx->pc = 0x2DE1A4u;
        goto label_2de1a4;
    }
    ctx->pc = 0x2DE19Cu;
    {
        const bool branch_taken_0x2de19c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de19c) {
            ctx->pc = 0x2DE1BCu;
            goto label_2de1bc;
        }
    }
    ctx->pc = 0x2DE1A4u;
label_2de1a4:
    // 0x2de1a4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2de1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de1a8:
    // 0x2de1a8: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2de1a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_2de1ac:
    // 0x2de1ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2de1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2de1b0:
    // 0x2de1b0: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2de1b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_2de1b4:
    // 0x2de1b4: 0x10000007  b           . + 4 + (0x7 << 2)
label_2de1b8:
    if (ctx->pc == 0x2DE1B8u) {
        ctx->pc = 0x2DE1BCu;
        goto label_2de1bc;
    }
    ctx->pc = 0x2DE1B4u;
    {
        const bool branch_taken_0x2de1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de1b4) {
            ctx->pc = 0x2DE1D4u;
            goto label_2de1d4;
        }
    }
    ctx->pc = 0x2DE1BCu;
label_2de1bc:
    // 0x2de1bc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2de1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de1c0:
    // 0x2de1c0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2de1c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_2de1c4:
    // 0x2de1c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2de1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2de1c8:
    // 0x2de1c8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2de1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_2de1cc:
    // 0x2de1cc: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_2de1d0:
    if (ctx->pc == 0x2DE1D0u) {
        ctx->pc = 0x2DE1D4u;
        goto label_2de1d4;
    }
    ctx->pc = 0x2DE1CCu;
    {
        const bool branch_taken_0x2de1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de1cc) {
            ctx->pc = 0x2DE45Cu;
            goto label_2de45c;
        }
    }
    ctx->pc = 0x2DE1D4u;
label_2de1d4:
    // 0x2de1d4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2de1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de1d8:
    // 0x2de1d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2de1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de1dc:
    // 0x2de1dc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2de1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2de1e0:
    // 0x2de1e0: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2de1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_2de1e4:
    // 0x2de1e4: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x2de1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
label_2de1e8:
    // 0x2de1e8: 0xc0675b0  jal         func_19D6C0
label_2de1ec:
    if (ctx->pc == 0x2DE1ECu) {
        ctx->pc = 0x2DE1F0u;
        goto label_2de1f0;
    }
    ctx->pc = 0x2DE1E8u;
    SET_GPR_U32(ctx, 31, 0x2DE1F0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2DE1E8u, 0x2DE1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE1F0u;
label_2de1f0:
    // 0x2de1f0: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x2de1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2de1f4:
    // 0x2de1f4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2de1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2de1f8:
    // 0x2de1f8: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2de1f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2de1fc:
    // 0x2de1fc: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2de1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2de200:
    // 0x2de200: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2de200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2de204:
    // 0x2de204: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2de204u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2de208:
    // 0x2de208: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x2de208u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2de20c:
    // 0x2de20c: 0xc06757c  jal         func_19D5F0
label_2de210:
    if (ctx->pc == 0x2DE210u) {
        ctx->pc = 0x2DE214u;
        goto label_2de214;
    }
    ctx->pc = 0x2DE20Cu;
    SET_GPR_U32(ctx, 31, 0x2DE214u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x2DE20Cu, 0x2DE214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE214u;
label_2de214:
    // 0x2de214: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2de214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2de218:
    // 0x2de218: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x2de218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2de21c:
    // 0x2de21c: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x2de21cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_2de220:
    // 0x2de220: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2de220u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2de224:
    // 0x2de224: 0x0  nop
    ctx->pc = 0x2de224u;
    // NOP
label_2de228:
    // 0x2de228: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2de228u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2de22c:
    // 0x2de22c: 0x0  nop
    ctx->pc = 0x2de22cu;
    // NOP
label_2de230:
    // 0x2de230: 0x45000023  bc1f        . + 4 + (0x23 << 2)
label_2de234:
    if (ctx->pc == 0x2DE234u) {
        ctx->pc = 0x2DE238u;
        goto label_2de238;
    }
    ctx->pc = 0x2DE230u;
    {
        const bool branch_taken_0x2de230 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2de230) {
            ctx->pc = 0x2DE2C0u;
            goto label_2de2c0;
        }
    }
    ctx->pc = 0x2DE238u;
label_2de238:
    // 0x2de238: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2de238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de23c:
    // 0x2de23c: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x2de23cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
label_2de240:
    // 0x2de240: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2de240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2de244:
    // 0x2de244: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x2de244u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
label_2de248:
    // 0x2de248: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2de248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de24c:
    // 0x2de24c: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x2de24cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
label_2de250:
    // 0x2de250: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2de250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_2de254:
    // 0x2de254: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2de254u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_2de258:
    // 0x2de258: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x2de258u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_2de25c:
    // 0x2de25c: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
label_2de260:
    if (ctx->pc == 0x2DE260u) {
        ctx->pc = 0x2DE264u;
        goto label_2de264;
    }
    ctx->pc = 0x2DE25Cu;
    {
        const bool branch_taken_0x2de25c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de25c) {
            ctx->pc = 0x2DE27Cu;
            goto label_2de27c;
        }
    }
    ctx->pc = 0x2DE264u;
label_2de264:
    // 0x2de264: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2de264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de268:
    // 0x2de268: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2de268u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_2de26c:
    // 0x2de26c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2de26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2de270:
    // 0x2de270: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2de270u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_2de274:
    // 0x2de274: 0x10000079  b           . + 4 + (0x79 << 2)
label_2de278:
    if (ctx->pc == 0x2DE278u) {
        ctx->pc = 0x2DE27Cu;
        goto label_2de27c;
    }
    ctx->pc = 0x2DE274u;
    {
        const bool branch_taken_0x2de274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de274) {
            ctx->pc = 0x2DE45Cu;
            goto label_2de45c;
        }
    }
    ctx->pc = 0x2DE27Cu;
label_2de27c:
    // 0x2de27c: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x2de27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2de280:
    // 0x2de280: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x2de280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2de284:
    // 0x2de284: 0xc0455e6  jal         func_115798
label_2de288:
    if (ctx->pc == 0x2DE288u) {
        ctx->pc = 0x2DE28Cu;
        goto label_2de28c;
    }
    ctx->pc = 0x2DE284u;
    SET_GPR_U32(ctx, 31, 0x2DE28Cu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2DE284u, 0x2DE28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE28Cu;
label_2de28c:
    // 0x2de28c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2de28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_2de290:
    // 0x2de290: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2de290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de294:
    // 0x2de294: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x2de294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
label_2de298:
    // 0x2de298: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2de298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
label_2de29c:
    // 0x2de29c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2de29cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2de2a0:
    // 0x2de2a0: 0xc7ac004c  lwc1        $f12, 0x4C($sp)
    ctx->pc = 0x2de2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2de2a4:
    // 0x2de2a4: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x2de2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2de2a8:
    // 0x2de2a8: 0xc058f50  jal         func_163D40
label_2de2ac:
    if (ctx->pc == 0x2DE2ACu) {
        ctx->pc = 0x2DE2B0u;
        goto label_2de2b0;
    }
    ctx->pc = 0x2DE2A8u;
    SET_GPR_U32(ctx, 31, 0x2DE2B0u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2DE2A8u, 0x2DE2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE2B0u;
label_2de2b0:
    // 0x2de2b0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2de2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de2b4:
    // 0x2de2b4: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x2de2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_2de2b8:
    // 0x2de2b8: 0x10000068  b           . + 4 + (0x68 << 2)
label_2de2bc:
    if (ctx->pc == 0x2DE2BCu) {
        ctx->pc = 0x2DE2C0u;
        goto label_2de2c0;
    }
    ctx->pc = 0x2DE2B8u;
    {
        const bool branch_taken_0x2de2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de2b8) {
            ctx->pc = 0x2DE45Cu;
            goto label_2de45c;
        }
    }
    ctx->pc = 0x2DE2C0u;
label_2de2c0:
    // 0x2de2c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2de2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de2c4:
    // 0x2de2c4: 0xa460127a  sh          $zero, 0x127A($v1)
    ctx->pc = 0x2de2c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 0));
label_2de2c8:
    // 0x2de2c8: 0x10000064  b           . + 4 + (0x64 << 2)
label_2de2cc:
    if (ctx->pc == 0x2DE2CCu) {
        ctx->pc = 0x2DE2D0u;
        goto label_2de2d0;
    }
    ctx->pc = 0x2DE2C8u;
    {
        const bool branch_taken_0x2de2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de2c8) {
            ctx->pc = 0x2DE45Cu;
            goto label_2de45c;
        }
    }
    ctx->pc = 0x2DE2D0u;
label_2de2d0:
    // 0x2de2d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2de2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de2d4:
    // 0x2de2d4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2de2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de2d8:
    // 0x2de2d8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2de2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2de2dc:
    // 0x2de2dc: 0x2406003b  addiu       $a2, $zero, 0x3B
    ctx->pc = 0x2de2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_2de2e0:
    // 0x2de2e0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2de2e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2de2e4:
    // 0x2de2e4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2de2e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2de2e8:
    // 0x2de2e8: 0xc0965d0  jal         func_259740
label_2de2ec:
    if (ctx->pc == 0x2DE2ECu) {
        ctx->pc = 0x2DE2F0u;
        goto label_2de2f0;
    }
    ctx->pc = 0x2DE2E8u;
    SET_GPR_U32(ctx, 31, 0x2DE2F0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DE2E8u, 0x2DE2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE2F0u;
label_2de2f0:
    // 0x2de2f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2de2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2de2f4:
    // 0x2de2f4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2de2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de2f8:
    // 0x2de2f8: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x2de2f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
label_2de2fc:
    // 0x2de2fc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2de2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de300:
    // 0x2de300: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2de300u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2de304:
    // 0x2de304: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2de304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2de308:
    // 0x2de308: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2de308u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2de30c:
    // 0x2de30c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2de30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de310:
    // 0x2de310: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2de310u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2de314:
    // 0x2de314: 0xc096b40  jal         func_25AD00
label_2de318:
    if (ctx->pc == 0x2DE318u) {
        ctx->pc = 0x2DE31Cu;
        goto label_2de31c;
    }
    ctx->pc = 0x2DE314u;
    SET_GPR_U32(ctx, 31, 0x2DE31Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DE314u, 0x2DE31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE31Cu;
label_2de31c:
    // 0x2de31c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2de31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de320:
    // 0x2de320: 0xc05cd10  jal         func_173440
label_2de324:
    if (ctx->pc == 0x2DE324u) {
        ctx->pc = 0x2DE328u;
        goto label_2de328;
    }
    ctx->pc = 0x2DE320u;
    SET_GPR_U32(ctx, 31, 0x2DE328u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DE320u, 0x2DE328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE328u;
label_2de328:
    // 0x2de328: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2de328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de32c:
    // 0x2de32c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2de32cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2de330:
    // 0x2de330: 0xc05cec4  jal         func_173B10
label_2de334:
    if (ctx->pc == 0x2DE334u) {
        ctx->pc = 0x2DE338u;
        goto label_2de338;
    }
    ctx->pc = 0x2DE330u;
    SET_GPR_U32(ctx, 31, 0x2DE338u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DE330u, 0x2DE338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE338u;
label_2de338:
    // 0x2de338: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2de338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de33c:
    // 0x2de33c: 0xc0974dc  jal         func_25D370
label_2de340:
    if (ctx->pc == 0x2DE340u) {
        ctx->pc = 0x2DE344u;
        goto label_2de344;
    }
    ctx->pc = 0x2DE33Cu;
    SET_GPR_U32(ctx, 31, 0x2DE344u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DE33Cu, 0x2DE344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE344u;
label_2de344:
    // 0x2de344: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2de344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de348:
    // 0x2de348: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x2de348u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
label_2de34c:
    // 0x2de34c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2de34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2de350:
    // 0x2de350: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2de350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_2de354:
    // 0x2de354: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
label_2de358:
    if (ctx->pc == 0x2DE358u) {
        ctx->pc = 0x2DE35Cu;
        goto label_2de35c;
    }
    ctx->pc = 0x2DE354u;
    {
        const bool branch_taken_0x2de354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de354) {
            ctx->pc = 0x2DE420u;
            goto label_2de420;
        }
    }
    ctx->pc = 0x2DE35Cu;
label_2de35c:
    // 0x2de35c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2de35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2de360:
    // 0x2de360: 0xc0675a4  jal         func_19D690
label_2de364:
    if (ctx->pc == 0x2DE364u) {
        ctx->pc = 0x2DE368u;
        goto label_2de368;
    }
    ctx->pc = 0x2DE360u;
    SET_GPR_U32(ctx, 31, 0x2DE368u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2DE360u, 0x2DE368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE368u;
label_2de368:
    // 0x2de368: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2de368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de36c:
    // 0x2de36c: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x2de36cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
label_2de370:
    // 0x2de370: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_2de374:
    if (ctx->pc == 0x2DE374u) {
        ctx->pc = 0x2DE378u;
        goto label_2de378;
    }
    ctx->pc = 0x2DE370u;
    {
        const bool branch_taken_0x2de370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de370) {
            ctx->pc = 0x2DE3C4u;
            goto label_2de3c4;
        }
    }
    ctx->pc = 0x2DE378u;
label_2de378:
    // 0x2de378: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2de378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
label_2de37c:
    // 0x2de37c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2de37cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2de380:
    // 0x2de380: 0x0  nop
    ctx->pc = 0x2de380u;
    // NOP
label_2de384:
    // 0x2de384: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2de384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2de388:
    // 0x2de388: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2de388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de38c:
    // 0x2de38c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2de38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de390:
    // 0x2de390: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2de390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_2de394:
    // 0x2de394: 0x244503c0  addiu       $a1, $v0, 0x3C0
    ctx->pc = 0x2de394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
label_2de398:
    // 0x2de398: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2de398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2de39c:
    // 0x2de39c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2de39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2de3a0:
    // 0x2de3a0: 0x24478e0c  addiu       $a3, $v0, -0x71F4
    ctx->pc = 0x2de3a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938124));
label_2de3a4:
    // 0x2de3a4: 0xc06d02c  jal         func_1B40B0
label_2de3a8:
    if (ctx->pc == 0x2DE3A8u) {
        ctx->pc = 0x2DE3ACu;
        goto label_2de3ac;
    }
    ctx->pc = 0x2DE3A4u;
    SET_GPR_U32(ctx, 31, 0x2DE3ACu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2DE3A4u, 0x2DE3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE3ACu;
label_2de3ac:
    // 0x2de3ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2de3b0:
    if (ctx->pc == 0x2DE3B0u) {
        ctx->pc = 0x2DE3B4u;
        goto label_2de3b4;
    }
    ctx->pc = 0x2DE3ACu;
    {
        const bool branch_taken_0x2de3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de3ac) {
            ctx->pc = 0x2DE3C4u;
            goto label_2de3c4;
        }
    }
    ctx->pc = 0x2DE3B4u;
label_2de3b4:
    // 0x2de3b4: 0xc0b6534  jal         func_2D94D0
label_2de3b8:
    if (ctx->pc == 0x2DE3B8u) {
        ctx->pc = 0x2DE3BCu;
        goto label_2de3bc;
    }
    ctx->pc = 0x2DE3B4u;
    SET_GPR_U32(ctx, 31, 0x2DE3BCu);
    ctx->pc = 0x2D94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D94D0u, 0x2DE3B4u, 0x2DE3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE3BCu;
label_2de3bc:
    // 0x2de3bc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2de3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de3c0:
    // 0x2de3c0: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x2de3c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
label_2de3c4:
    // 0x2de3c4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2de3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de3c8:
    // 0x2de3c8: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x2de3c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
label_2de3cc:
    // 0x2de3cc: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_2de3d0:
    if (ctx->pc == 0x2DE3D0u) {
        ctx->pc = 0x2DE3D4u;
        goto label_2de3d4;
    }
    ctx->pc = 0x2DE3CCu;
    {
        const bool branch_taken_0x2de3cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de3cc) {
            ctx->pc = 0x2DE420u;
            goto label_2de420;
        }
    }
    ctx->pc = 0x2DE3D4u;
label_2de3d4:
    // 0x2de3d4: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x2de3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
label_2de3d8:
    // 0x2de3d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2de3d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2de3dc:
    // 0x2de3dc: 0x0  nop
    ctx->pc = 0x2de3dcu;
    // NOP
label_2de3e0:
    // 0x2de3e0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2de3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2de3e4:
    // 0x2de3e4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2de3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de3e8:
    // 0x2de3e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2de3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de3ec:
    // 0x2de3ec: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2de3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_2de3f0:
    // 0x2de3f0: 0x244503c0  addiu       $a1, $v0, 0x3C0
    ctx->pc = 0x2de3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
label_2de3f4:
    // 0x2de3f4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2de3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2de3f8:
    // 0x2de3f8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2de3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2de3fc:
    // 0x2de3fc: 0x24478e0c  addiu       $a3, $v0, -0x71F4
    ctx->pc = 0x2de3fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938124));
label_2de400:
    // 0x2de400: 0xc06d02c  jal         func_1B40B0
label_2de404:
    if (ctx->pc == 0x2DE404u) {
        ctx->pc = 0x2DE408u;
        goto label_2de408;
    }
    ctx->pc = 0x2DE400u;
    SET_GPR_U32(ctx, 31, 0x2DE408u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2DE400u, 0x2DE408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE408u;
label_2de408:
    // 0x2de408: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2de40c:
    if (ctx->pc == 0x2DE40Cu) {
        ctx->pc = 0x2DE410u;
        goto label_2de410;
    }
    ctx->pc = 0x2DE408u;
    {
        const bool branch_taken_0x2de408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de408) {
            ctx->pc = 0x2DE420u;
            goto label_2de420;
        }
    }
    ctx->pc = 0x2DE410u;
label_2de410:
    // 0x2de410: 0xc0b6534  jal         func_2D94D0
label_2de414:
    if (ctx->pc == 0x2DE414u) {
        ctx->pc = 0x2DE418u;
        goto label_2de418;
    }
    ctx->pc = 0x2DE410u;
    SET_GPR_U32(ctx, 31, 0x2DE418u);
    ctx->pc = 0x2D94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D94D0u, 0x2DE410u, 0x2DE418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE418u;
label_2de418:
    // 0x2de418: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2de418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de41c:
    // 0x2de41c: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x2de41cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
label_2de420:
    // 0x2de420: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2de420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de424:
    // 0x2de424: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2de424u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_2de428:
    // 0x2de428: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_2de42c:
    if (ctx->pc == 0x2DE42Cu) {
        ctx->pc = 0x2DE430u;
        goto label_2de430;
    }
    ctx->pc = 0x2DE428u;
    {
        const bool branch_taken_0x2de428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de428) {
            ctx->pc = 0x2DE45Cu;
            goto label_2de45c;
        }
    }
    ctx->pc = 0x2DE430u;
label_2de430:
    // 0x2de430: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2de430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2de434:
    // 0x2de434: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2de434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de438:
    // 0x2de438: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2de438u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2de43c:
    // 0x2de43c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2de43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de440:
    // 0x2de440: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2de440u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_2de444:
    // 0x2de444: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2de444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de448:
    // 0x2de448: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2de448u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_2de44c:
    // 0x2de44c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2de44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de450:
    // 0x2de450: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2de450u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_2de454:
    // 0x2de454: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2de454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2de458:
    // 0x2de458: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2de458u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2de45c:
    // 0x2de45c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2de45cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2de460:
    // 0x2de460: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2de460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2de464:
    // 0x2de464: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2de464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2de468:
    // 0x2de468: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2de468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2de46c:
    // 0x2de46c: 0x3e00008  jr          $ra
label_2de470:
    if (ctx->pc == 0x2DE470u) {
        ctx->pc = 0x2DE474u;
        goto label_fallthrough_0x2de46c;
    }
    ctx->pc = 0x2DE46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2de46c:
    ctx->pc = 0x2DE474u;
}
