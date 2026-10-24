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

// Function: Plw01_move06_kick
// Address: 0x1bad10 - 0x1bbbbc
void Plw01_move06_kick_0x1bad10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw01_move06_kick_0x1bad10");
#endif

    switch (ctx->pc) {
        case 0x1bad10u: goto label_1bad10;
        case 0x1bad14u: goto label_1bad14;
        case 0x1bad18u: goto label_1bad18;
        case 0x1bad1cu: goto label_1bad1c;
        case 0x1bad20u: goto label_1bad20;
        case 0x1bad24u: goto label_1bad24;
        case 0x1bad28u: goto label_1bad28;
        case 0x1bad2cu: goto label_1bad2c;
        case 0x1bad30u: goto label_1bad30;
        case 0x1bad34u: goto label_1bad34;
        case 0x1bad38u: goto label_1bad38;
        case 0x1bad3cu: goto label_1bad3c;
        case 0x1bad40u: goto label_1bad40;
        case 0x1bad44u: goto label_1bad44;
        case 0x1bad48u: goto label_1bad48;
        case 0x1bad4cu: goto label_1bad4c;
        case 0x1bad50u: goto label_1bad50;
        case 0x1bad54u: goto label_1bad54;
        case 0x1bad58u: goto label_1bad58;
        case 0x1bad5cu: goto label_1bad5c;
        case 0x1bad60u: goto label_1bad60;
        case 0x1bad64u: goto label_1bad64;
        case 0x1bad68u: goto label_1bad68;
        case 0x1bad6cu: goto label_1bad6c;
        case 0x1bad70u: goto label_1bad70;
        case 0x1bad74u: goto label_1bad74;
        case 0x1bad78u: goto label_1bad78;
        case 0x1bad7cu: goto label_1bad7c;
        case 0x1bad80u: goto label_1bad80;
        case 0x1bad84u: goto label_1bad84;
        case 0x1bad88u: goto label_1bad88;
        case 0x1bad8cu: goto label_1bad8c;
        case 0x1bad90u: goto label_1bad90;
        case 0x1bad94u: goto label_1bad94;
        case 0x1bad98u: goto label_1bad98;
        case 0x1bad9cu: goto label_1bad9c;
        case 0x1bada0u: goto label_1bada0;
        case 0x1bada4u: goto label_1bada4;
        case 0x1bada8u: goto label_1bada8;
        case 0x1badacu: goto label_1badac;
        case 0x1badb0u: goto label_1badb0;
        case 0x1badb4u: goto label_1badb4;
        case 0x1badb8u: goto label_1badb8;
        case 0x1badbcu: goto label_1badbc;
        case 0x1badc0u: goto label_1badc0;
        case 0x1badc4u: goto label_1badc4;
        case 0x1badc8u: goto label_1badc8;
        case 0x1badccu: goto label_1badcc;
        case 0x1badd0u: goto label_1badd0;
        case 0x1badd4u: goto label_1badd4;
        case 0x1badd8u: goto label_1badd8;
        case 0x1baddcu: goto label_1baddc;
        case 0x1bade0u: goto label_1bade0;
        case 0x1bade4u: goto label_1bade4;
        case 0x1bade8u: goto label_1bade8;
        case 0x1badecu: goto label_1badec;
        case 0x1badf0u: goto label_1badf0;
        case 0x1badf4u: goto label_1badf4;
        case 0x1badf8u: goto label_1badf8;
        case 0x1badfcu: goto label_1badfc;
        case 0x1bae00u: goto label_1bae00;
        case 0x1bae04u: goto label_1bae04;
        case 0x1bae08u: goto label_1bae08;
        case 0x1bae0cu: goto label_1bae0c;
        case 0x1bae10u: goto label_1bae10;
        case 0x1bae14u: goto label_1bae14;
        case 0x1bae18u: goto label_1bae18;
        case 0x1bae1cu: goto label_1bae1c;
        case 0x1bae20u: goto label_1bae20;
        case 0x1bae24u: goto label_1bae24;
        case 0x1bae28u: goto label_1bae28;
        case 0x1bae2cu: goto label_1bae2c;
        case 0x1bae30u: goto label_1bae30;
        case 0x1bae34u: goto label_1bae34;
        case 0x1bae38u: goto label_1bae38;
        case 0x1bae3cu: goto label_1bae3c;
        case 0x1bae40u: goto label_1bae40;
        case 0x1bae44u: goto label_1bae44;
        case 0x1bae48u: goto label_1bae48;
        case 0x1bae4cu: goto label_1bae4c;
        case 0x1bae50u: goto label_1bae50;
        case 0x1bae54u: goto label_1bae54;
        case 0x1bae58u: goto label_1bae58;
        case 0x1bae5cu: goto label_1bae5c;
        case 0x1bae60u: goto label_1bae60;
        case 0x1bae64u: goto label_1bae64;
        case 0x1bae68u: goto label_1bae68;
        case 0x1bae6cu: goto label_1bae6c;
        case 0x1bae70u: goto label_1bae70;
        case 0x1bae74u: goto label_1bae74;
        case 0x1bae78u: goto label_1bae78;
        case 0x1bae7cu: goto label_1bae7c;
        case 0x1bae80u: goto label_1bae80;
        case 0x1bae84u: goto label_1bae84;
        case 0x1bae88u: goto label_1bae88;
        case 0x1bae8cu: goto label_1bae8c;
        case 0x1bae90u: goto label_1bae90;
        case 0x1bae94u: goto label_1bae94;
        case 0x1bae98u: goto label_1bae98;
        case 0x1bae9cu: goto label_1bae9c;
        case 0x1baea0u: goto label_1baea0;
        case 0x1baea4u: goto label_1baea4;
        case 0x1baea8u: goto label_1baea8;
        case 0x1baeacu: goto label_1baeac;
        case 0x1baeb0u: goto label_1baeb0;
        case 0x1baeb4u: goto label_1baeb4;
        case 0x1baeb8u: goto label_1baeb8;
        case 0x1baebcu: goto label_1baebc;
        case 0x1baec0u: goto label_1baec0;
        case 0x1baec4u: goto label_1baec4;
        case 0x1baec8u: goto label_1baec8;
        case 0x1baeccu: goto label_1baecc;
        case 0x1baed0u: goto label_1baed0;
        case 0x1baed4u: goto label_1baed4;
        case 0x1baed8u: goto label_1baed8;
        case 0x1baedcu: goto label_1baedc;
        case 0x1baee0u: goto label_1baee0;
        case 0x1baee4u: goto label_1baee4;
        case 0x1baee8u: goto label_1baee8;
        case 0x1baeecu: goto label_1baeec;
        case 0x1baef0u: goto label_1baef0;
        case 0x1baef4u: goto label_1baef4;
        case 0x1baef8u: goto label_1baef8;
        case 0x1baefcu: goto label_1baefc;
        case 0x1baf00u: goto label_1baf00;
        case 0x1baf04u: goto label_1baf04;
        case 0x1baf08u: goto label_1baf08;
        case 0x1baf0cu: goto label_1baf0c;
        case 0x1baf10u: goto label_1baf10;
        case 0x1baf14u: goto label_1baf14;
        case 0x1baf18u: goto label_1baf18;
        case 0x1baf1cu: goto label_1baf1c;
        case 0x1baf20u: goto label_1baf20;
        case 0x1baf24u: goto label_1baf24;
        case 0x1baf28u: goto label_1baf28;
        case 0x1baf2cu: goto label_1baf2c;
        case 0x1baf30u: goto label_1baf30;
        case 0x1baf34u: goto label_1baf34;
        case 0x1baf38u: goto label_1baf38;
        case 0x1baf3cu: goto label_1baf3c;
        case 0x1baf40u: goto label_1baf40;
        case 0x1baf44u: goto label_1baf44;
        case 0x1baf48u: goto label_1baf48;
        case 0x1baf4cu: goto label_1baf4c;
        case 0x1baf50u: goto label_1baf50;
        case 0x1baf54u: goto label_1baf54;
        case 0x1baf58u: goto label_1baf58;
        case 0x1baf5cu: goto label_1baf5c;
        case 0x1baf60u: goto label_1baf60;
        case 0x1baf64u: goto label_1baf64;
        case 0x1baf68u: goto label_1baf68;
        case 0x1baf6cu: goto label_1baf6c;
        case 0x1baf70u: goto label_1baf70;
        case 0x1baf74u: goto label_1baf74;
        case 0x1baf78u: goto label_1baf78;
        case 0x1baf7cu: goto label_1baf7c;
        case 0x1baf80u: goto label_1baf80;
        case 0x1baf84u: goto label_1baf84;
        case 0x1baf88u: goto label_1baf88;
        case 0x1baf8cu: goto label_1baf8c;
        case 0x1baf90u: goto label_1baf90;
        case 0x1baf94u: goto label_1baf94;
        case 0x1baf98u: goto label_1baf98;
        case 0x1baf9cu: goto label_1baf9c;
        case 0x1bafa0u: goto label_1bafa0;
        case 0x1bafa4u: goto label_1bafa4;
        case 0x1bafa8u: goto label_1bafa8;
        case 0x1bafacu: goto label_1bafac;
        case 0x1bafb0u: goto label_1bafb0;
        case 0x1bafb4u: goto label_1bafb4;
        case 0x1bafb8u: goto label_1bafb8;
        case 0x1bafbcu: goto label_1bafbc;
        case 0x1bafc0u: goto label_1bafc0;
        case 0x1bafc4u: goto label_1bafc4;
        case 0x1bafc8u: goto label_1bafc8;
        case 0x1bafccu: goto label_1bafcc;
        case 0x1bafd0u: goto label_1bafd0;
        case 0x1bafd4u: goto label_1bafd4;
        case 0x1bafd8u: goto label_1bafd8;
        case 0x1bafdcu: goto label_1bafdc;
        case 0x1bafe0u: goto label_1bafe0;
        case 0x1bafe4u: goto label_1bafe4;
        case 0x1bafe8u: goto label_1bafe8;
        case 0x1bafecu: goto label_1bafec;
        case 0x1baff0u: goto label_1baff0;
        case 0x1baff4u: goto label_1baff4;
        case 0x1baff8u: goto label_1baff8;
        case 0x1baffcu: goto label_1baffc;
        case 0x1bb000u: goto label_1bb000;
        case 0x1bb004u: goto label_1bb004;
        case 0x1bb008u: goto label_1bb008;
        case 0x1bb00cu: goto label_1bb00c;
        case 0x1bb010u: goto label_1bb010;
        case 0x1bb014u: goto label_1bb014;
        case 0x1bb018u: goto label_1bb018;
        case 0x1bb01cu: goto label_1bb01c;
        case 0x1bb020u: goto label_1bb020;
        case 0x1bb024u: goto label_1bb024;
        case 0x1bb028u: goto label_1bb028;
        case 0x1bb02cu: goto label_1bb02c;
        case 0x1bb030u: goto label_1bb030;
        case 0x1bb034u: goto label_1bb034;
        case 0x1bb038u: goto label_1bb038;
        case 0x1bb03cu: goto label_1bb03c;
        case 0x1bb040u: goto label_1bb040;
        case 0x1bb044u: goto label_1bb044;
        case 0x1bb048u: goto label_1bb048;
        case 0x1bb04cu: goto label_1bb04c;
        case 0x1bb050u: goto label_1bb050;
        case 0x1bb054u: goto label_1bb054;
        case 0x1bb058u: goto label_1bb058;
        case 0x1bb05cu: goto label_1bb05c;
        case 0x1bb060u: goto label_1bb060;
        case 0x1bb064u: goto label_1bb064;
        case 0x1bb068u: goto label_1bb068;
        case 0x1bb06cu: goto label_1bb06c;
        case 0x1bb070u: goto label_1bb070;
        case 0x1bb074u: goto label_1bb074;
        case 0x1bb078u: goto label_1bb078;
        case 0x1bb07cu: goto label_1bb07c;
        case 0x1bb080u: goto label_1bb080;
        case 0x1bb084u: goto label_1bb084;
        case 0x1bb088u: goto label_1bb088;
        case 0x1bb08cu: goto label_1bb08c;
        case 0x1bb090u: goto label_1bb090;
        case 0x1bb094u: goto label_1bb094;
        case 0x1bb098u: goto label_1bb098;
        case 0x1bb09cu: goto label_1bb09c;
        case 0x1bb0a0u: goto label_1bb0a0;
        case 0x1bb0a4u: goto label_1bb0a4;
        case 0x1bb0a8u: goto label_1bb0a8;
        case 0x1bb0acu: goto label_1bb0ac;
        case 0x1bb0b0u: goto label_1bb0b0;
        case 0x1bb0b4u: goto label_1bb0b4;
        case 0x1bb0b8u: goto label_1bb0b8;
        case 0x1bb0bcu: goto label_1bb0bc;
        case 0x1bb0c0u: goto label_1bb0c0;
        case 0x1bb0c4u: goto label_1bb0c4;
        case 0x1bb0c8u: goto label_1bb0c8;
        case 0x1bb0ccu: goto label_1bb0cc;
        case 0x1bb0d0u: goto label_1bb0d0;
        case 0x1bb0d4u: goto label_1bb0d4;
        case 0x1bb0d8u: goto label_1bb0d8;
        case 0x1bb0dcu: goto label_1bb0dc;
        case 0x1bb0e0u: goto label_1bb0e0;
        case 0x1bb0e4u: goto label_1bb0e4;
        case 0x1bb0e8u: goto label_1bb0e8;
        case 0x1bb0ecu: goto label_1bb0ec;
        case 0x1bb0f0u: goto label_1bb0f0;
        case 0x1bb0f4u: goto label_1bb0f4;
        case 0x1bb0f8u: goto label_1bb0f8;
        case 0x1bb0fcu: goto label_1bb0fc;
        case 0x1bb100u: goto label_1bb100;
        case 0x1bb104u: goto label_1bb104;
        case 0x1bb108u: goto label_1bb108;
        case 0x1bb10cu: goto label_1bb10c;
        case 0x1bb110u: goto label_1bb110;
        case 0x1bb114u: goto label_1bb114;
        case 0x1bb118u: goto label_1bb118;
        case 0x1bb11cu: goto label_1bb11c;
        case 0x1bb120u: goto label_1bb120;
        case 0x1bb124u: goto label_1bb124;
        case 0x1bb128u: goto label_1bb128;
        case 0x1bb12cu: goto label_1bb12c;
        case 0x1bb130u: goto label_1bb130;
        case 0x1bb134u: goto label_1bb134;
        case 0x1bb138u: goto label_1bb138;
        case 0x1bb13cu: goto label_1bb13c;
        case 0x1bb140u: goto label_1bb140;
        case 0x1bb144u: goto label_1bb144;
        case 0x1bb148u: goto label_1bb148;
        case 0x1bb14cu: goto label_1bb14c;
        case 0x1bb150u: goto label_1bb150;
        case 0x1bb154u: goto label_1bb154;
        case 0x1bb158u: goto label_1bb158;
        case 0x1bb15cu: goto label_1bb15c;
        case 0x1bb160u: goto label_1bb160;
        case 0x1bb164u: goto label_1bb164;
        case 0x1bb168u: goto label_1bb168;
        case 0x1bb16cu: goto label_1bb16c;
        case 0x1bb170u: goto label_1bb170;
        case 0x1bb174u: goto label_1bb174;
        case 0x1bb178u: goto label_1bb178;
        case 0x1bb17cu: goto label_1bb17c;
        case 0x1bb180u: goto label_1bb180;
        case 0x1bb184u: goto label_1bb184;
        case 0x1bb188u: goto label_1bb188;
        case 0x1bb18cu: goto label_1bb18c;
        case 0x1bb190u: goto label_1bb190;
        case 0x1bb194u: goto label_1bb194;
        case 0x1bb198u: goto label_1bb198;
        case 0x1bb19cu: goto label_1bb19c;
        case 0x1bb1a0u: goto label_1bb1a0;
        case 0x1bb1a4u: goto label_1bb1a4;
        case 0x1bb1a8u: goto label_1bb1a8;
        case 0x1bb1acu: goto label_1bb1ac;
        case 0x1bb1b0u: goto label_1bb1b0;
        case 0x1bb1b4u: goto label_1bb1b4;
        case 0x1bb1b8u: goto label_1bb1b8;
        case 0x1bb1bcu: goto label_1bb1bc;
        case 0x1bb1c0u: goto label_1bb1c0;
        case 0x1bb1c4u: goto label_1bb1c4;
        case 0x1bb1c8u: goto label_1bb1c8;
        case 0x1bb1ccu: goto label_1bb1cc;
        case 0x1bb1d0u: goto label_1bb1d0;
        case 0x1bb1d4u: goto label_1bb1d4;
        case 0x1bb1d8u: goto label_1bb1d8;
        case 0x1bb1dcu: goto label_1bb1dc;
        case 0x1bb1e0u: goto label_1bb1e0;
        case 0x1bb1e4u: goto label_1bb1e4;
        case 0x1bb1e8u: goto label_1bb1e8;
        case 0x1bb1ecu: goto label_1bb1ec;
        case 0x1bb1f0u: goto label_1bb1f0;
        case 0x1bb1f4u: goto label_1bb1f4;
        case 0x1bb1f8u: goto label_1bb1f8;
        case 0x1bb1fcu: goto label_1bb1fc;
        case 0x1bb200u: goto label_1bb200;
        case 0x1bb204u: goto label_1bb204;
        case 0x1bb208u: goto label_1bb208;
        case 0x1bb20cu: goto label_1bb20c;
        case 0x1bb210u: goto label_1bb210;
        case 0x1bb214u: goto label_1bb214;
        case 0x1bb218u: goto label_1bb218;
        case 0x1bb21cu: goto label_1bb21c;
        case 0x1bb220u: goto label_1bb220;
        case 0x1bb224u: goto label_1bb224;
        case 0x1bb228u: goto label_1bb228;
        case 0x1bb22cu: goto label_1bb22c;
        case 0x1bb230u: goto label_1bb230;
        case 0x1bb234u: goto label_1bb234;
        case 0x1bb238u: goto label_1bb238;
        case 0x1bb23cu: goto label_1bb23c;
        case 0x1bb240u: goto label_1bb240;
        case 0x1bb244u: goto label_1bb244;
        case 0x1bb248u: goto label_1bb248;
        case 0x1bb24cu: goto label_1bb24c;
        case 0x1bb250u: goto label_1bb250;
        case 0x1bb254u: goto label_1bb254;
        case 0x1bb258u: goto label_1bb258;
        case 0x1bb25cu: goto label_1bb25c;
        case 0x1bb260u: goto label_1bb260;
        case 0x1bb264u: goto label_1bb264;
        case 0x1bb268u: goto label_1bb268;
        case 0x1bb26cu: goto label_1bb26c;
        case 0x1bb270u: goto label_1bb270;
        case 0x1bb274u: goto label_1bb274;
        case 0x1bb278u: goto label_1bb278;
        case 0x1bb27cu: goto label_1bb27c;
        case 0x1bb280u: goto label_1bb280;
        case 0x1bb284u: goto label_1bb284;
        case 0x1bb288u: goto label_1bb288;
        case 0x1bb28cu: goto label_1bb28c;
        case 0x1bb290u: goto label_1bb290;
        case 0x1bb294u: goto label_1bb294;
        case 0x1bb298u: goto label_1bb298;
        case 0x1bb29cu: goto label_1bb29c;
        case 0x1bb2a0u: goto label_1bb2a0;
        case 0x1bb2a4u: goto label_1bb2a4;
        case 0x1bb2a8u: goto label_1bb2a8;
        case 0x1bb2acu: goto label_1bb2ac;
        case 0x1bb2b0u: goto label_1bb2b0;
        case 0x1bb2b4u: goto label_1bb2b4;
        case 0x1bb2b8u: goto label_1bb2b8;
        case 0x1bb2bcu: goto label_1bb2bc;
        case 0x1bb2c0u: goto label_1bb2c0;
        case 0x1bb2c4u: goto label_1bb2c4;
        case 0x1bb2c8u: goto label_1bb2c8;
        case 0x1bb2ccu: goto label_1bb2cc;
        case 0x1bb2d0u: goto label_1bb2d0;
        case 0x1bb2d4u: goto label_1bb2d4;
        case 0x1bb2d8u: goto label_1bb2d8;
        case 0x1bb2dcu: goto label_1bb2dc;
        case 0x1bb2e0u: goto label_1bb2e0;
        case 0x1bb2e4u: goto label_1bb2e4;
        case 0x1bb2e8u: goto label_1bb2e8;
        case 0x1bb2ecu: goto label_1bb2ec;
        case 0x1bb2f0u: goto label_1bb2f0;
        case 0x1bb2f4u: goto label_1bb2f4;
        case 0x1bb2f8u: goto label_1bb2f8;
        case 0x1bb2fcu: goto label_1bb2fc;
        case 0x1bb300u: goto label_1bb300;
        case 0x1bb304u: goto label_1bb304;
        case 0x1bb308u: goto label_1bb308;
        case 0x1bb30cu: goto label_1bb30c;
        case 0x1bb310u: goto label_1bb310;
        case 0x1bb314u: goto label_1bb314;
        case 0x1bb318u: goto label_1bb318;
        case 0x1bb31cu: goto label_1bb31c;
        case 0x1bb320u: goto label_1bb320;
        case 0x1bb324u: goto label_1bb324;
        case 0x1bb328u: goto label_1bb328;
        case 0x1bb32cu: goto label_1bb32c;
        case 0x1bb330u: goto label_1bb330;
        case 0x1bb334u: goto label_1bb334;
        case 0x1bb338u: goto label_1bb338;
        case 0x1bb33cu: goto label_1bb33c;
        case 0x1bb340u: goto label_1bb340;
        case 0x1bb344u: goto label_1bb344;
        case 0x1bb348u: goto label_1bb348;
        case 0x1bb34cu: goto label_1bb34c;
        case 0x1bb350u: goto label_1bb350;
        case 0x1bb354u: goto label_1bb354;
        case 0x1bb358u: goto label_1bb358;
        case 0x1bb35cu: goto label_1bb35c;
        case 0x1bb360u: goto label_1bb360;
        case 0x1bb364u: goto label_1bb364;
        case 0x1bb368u: goto label_1bb368;
        case 0x1bb36cu: goto label_1bb36c;
        case 0x1bb370u: goto label_1bb370;
        case 0x1bb374u: goto label_1bb374;
        case 0x1bb378u: goto label_1bb378;
        case 0x1bb37cu: goto label_1bb37c;
        case 0x1bb380u: goto label_1bb380;
        case 0x1bb384u: goto label_1bb384;
        case 0x1bb388u: goto label_1bb388;
        case 0x1bb38cu: goto label_1bb38c;
        case 0x1bb390u: goto label_1bb390;
        case 0x1bb394u: goto label_1bb394;
        case 0x1bb398u: goto label_1bb398;
        case 0x1bb39cu: goto label_1bb39c;
        case 0x1bb3a0u: goto label_1bb3a0;
        case 0x1bb3a4u: goto label_1bb3a4;
        case 0x1bb3a8u: goto label_1bb3a8;
        case 0x1bb3acu: goto label_1bb3ac;
        case 0x1bb3b0u: goto label_1bb3b0;
        case 0x1bb3b4u: goto label_1bb3b4;
        case 0x1bb3b8u: goto label_1bb3b8;
        case 0x1bb3bcu: goto label_1bb3bc;
        case 0x1bb3c0u: goto label_1bb3c0;
        case 0x1bb3c4u: goto label_1bb3c4;
        case 0x1bb3c8u: goto label_1bb3c8;
        case 0x1bb3ccu: goto label_1bb3cc;
        case 0x1bb3d0u: goto label_1bb3d0;
        case 0x1bb3d4u: goto label_1bb3d4;
        case 0x1bb3d8u: goto label_1bb3d8;
        case 0x1bb3dcu: goto label_1bb3dc;
        case 0x1bb3e0u: goto label_1bb3e0;
        case 0x1bb3e4u: goto label_1bb3e4;
        case 0x1bb3e8u: goto label_1bb3e8;
        case 0x1bb3ecu: goto label_1bb3ec;
        case 0x1bb3f0u: goto label_1bb3f0;
        case 0x1bb3f4u: goto label_1bb3f4;
        case 0x1bb3f8u: goto label_1bb3f8;
        case 0x1bb3fcu: goto label_1bb3fc;
        case 0x1bb400u: goto label_1bb400;
        case 0x1bb404u: goto label_1bb404;
        case 0x1bb408u: goto label_1bb408;
        case 0x1bb40cu: goto label_1bb40c;
        case 0x1bb410u: goto label_1bb410;
        case 0x1bb414u: goto label_1bb414;
        case 0x1bb418u: goto label_1bb418;
        case 0x1bb41cu: goto label_1bb41c;
        case 0x1bb420u: goto label_1bb420;
        case 0x1bb424u: goto label_1bb424;
        case 0x1bb428u: goto label_1bb428;
        case 0x1bb42cu: goto label_1bb42c;
        case 0x1bb430u: goto label_1bb430;
        case 0x1bb434u: goto label_1bb434;
        case 0x1bb438u: goto label_1bb438;
        case 0x1bb43cu: goto label_1bb43c;
        case 0x1bb440u: goto label_1bb440;
        case 0x1bb444u: goto label_1bb444;
        case 0x1bb448u: goto label_1bb448;
        case 0x1bb44cu: goto label_1bb44c;
        case 0x1bb450u: goto label_1bb450;
        case 0x1bb454u: goto label_1bb454;
        case 0x1bb458u: goto label_1bb458;
        case 0x1bb45cu: goto label_1bb45c;
        case 0x1bb460u: goto label_1bb460;
        case 0x1bb464u: goto label_1bb464;
        case 0x1bb468u: goto label_1bb468;
        case 0x1bb46cu: goto label_1bb46c;
        case 0x1bb470u: goto label_1bb470;
        case 0x1bb474u: goto label_1bb474;
        case 0x1bb478u: goto label_1bb478;
        case 0x1bb47cu: goto label_1bb47c;
        case 0x1bb480u: goto label_1bb480;
        case 0x1bb484u: goto label_1bb484;
        case 0x1bb488u: goto label_1bb488;
        case 0x1bb48cu: goto label_1bb48c;
        case 0x1bb490u: goto label_1bb490;
        case 0x1bb494u: goto label_1bb494;
        case 0x1bb498u: goto label_1bb498;
        case 0x1bb49cu: goto label_1bb49c;
        case 0x1bb4a0u: goto label_1bb4a0;
        case 0x1bb4a4u: goto label_1bb4a4;
        case 0x1bb4a8u: goto label_1bb4a8;
        case 0x1bb4acu: goto label_1bb4ac;
        case 0x1bb4b0u: goto label_1bb4b0;
        case 0x1bb4b4u: goto label_1bb4b4;
        case 0x1bb4b8u: goto label_1bb4b8;
        case 0x1bb4bcu: goto label_1bb4bc;
        case 0x1bb4c0u: goto label_1bb4c0;
        case 0x1bb4c4u: goto label_1bb4c4;
        case 0x1bb4c8u: goto label_1bb4c8;
        case 0x1bb4ccu: goto label_1bb4cc;
        case 0x1bb4d0u: goto label_1bb4d0;
        case 0x1bb4d4u: goto label_1bb4d4;
        case 0x1bb4d8u: goto label_1bb4d8;
        case 0x1bb4dcu: goto label_1bb4dc;
        case 0x1bb4e0u: goto label_1bb4e0;
        case 0x1bb4e4u: goto label_1bb4e4;
        case 0x1bb4e8u: goto label_1bb4e8;
        case 0x1bb4ecu: goto label_1bb4ec;
        case 0x1bb4f0u: goto label_1bb4f0;
        case 0x1bb4f4u: goto label_1bb4f4;
        case 0x1bb4f8u: goto label_1bb4f8;
        case 0x1bb4fcu: goto label_1bb4fc;
        case 0x1bb500u: goto label_1bb500;
        case 0x1bb504u: goto label_1bb504;
        case 0x1bb508u: goto label_1bb508;
        case 0x1bb50cu: goto label_1bb50c;
        case 0x1bb510u: goto label_1bb510;
        case 0x1bb514u: goto label_1bb514;
        case 0x1bb518u: goto label_1bb518;
        case 0x1bb51cu: goto label_1bb51c;
        case 0x1bb520u: goto label_1bb520;
        case 0x1bb524u: goto label_1bb524;
        case 0x1bb528u: goto label_1bb528;
        case 0x1bb52cu: goto label_1bb52c;
        case 0x1bb530u: goto label_1bb530;
        case 0x1bb534u: goto label_1bb534;
        case 0x1bb538u: goto label_1bb538;
        case 0x1bb53cu: goto label_1bb53c;
        case 0x1bb540u: goto label_1bb540;
        case 0x1bb544u: goto label_1bb544;
        case 0x1bb548u: goto label_1bb548;
        case 0x1bb54cu: goto label_1bb54c;
        case 0x1bb550u: goto label_1bb550;
        case 0x1bb554u: goto label_1bb554;
        case 0x1bb558u: goto label_1bb558;
        case 0x1bb55cu: goto label_1bb55c;
        case 0x1bb560u: goto label_1bb560;
        case 0x1bb564u: goto label_1bb564;
        case 0x1bb568u: goto label_1bb568;
        case 0x1bb56cu: goto label_1bb56c;
        case 0x1bb570u: goto label_1bb570;
        case 0x1bb574u: goto label_1bb574;
        case 0x1bb578u: goto label_1bb578;
        case 0x1bb57cu: goto label_1bb57c;
        case 0x1bb580u: goto label_1bb580;
        case 0x1bb584u: goto label_1bb584;
        case 0x1bb588u: goto label_1bb588;
        case 0x1bb58cu: goto label_1bb58c;
        case 0x1bb590u: goto label_1bb590;
        case 0x1bb594u: goto label_1bb594;
        case 0x1bb598u: goto label_1bb598;
        case 0x1bb59cu: goto label_1bb59c;
        case 0x1bb5a0u: goto label_1bb5a0;
        case 0x1bb5a4u: goto label_1bb5a4;
        case 0x1bb5a8u: goto label_1bb5a8;
        case 0x1bb5acu: goto label_1bb5ac;
        case 0x1bb5b0u: goto label_1bb5b0;
        case 0x1bb5b4u: goto label_1bb5b4;
        case 0x1bb5b8u: goto label_1bb5b8;
        case 0x1bb5bcu: goto label_1bb5bc;
        case 0x1bb5c0u: goto label_1bb5c0;
        case 0x1bb5c4u: goto label_1bb5c4;
        case 0x1bb5c8u: goto label_1bb5c8;
        case 0x1bb5ccu: goto label_1bb5cc;
        case 0x1bb5d0u: goto label_1bb5d0;
        case 0x1bb5d4u: goto label_1bb5d4;
        case 0x1bb5d8u: goto label_1bb5d8;
        case 0x1bb5dcu: goto label_1bb5dc;
        case 0x1bb5e0u: goto label_1bb5e0;
        case 0x1bb5e4u: goto label_1bb5e4;
        case 0x1bb5e8u: goto label_1bb5e8;
        case 0x1bb5ecu: goto label_1bb5ec;
        case 0x1bb5f0u: goto label_1bb5f0;
        case 0x1bb5f4u: goto label_1bb5f4;
        case 0x1bb5f8u: goto label_1bb5f8;
        case 0x1bb5fcu: goto label_1bb5fc;
        case 0x1bb600u: goto label_1bb600;
        case 0x1bb604u: goto label_1bb604;
        case 0x1bb608u: goto label_1bb608;
        case 0x1bb60cu: goto label_1bb60c;
        case 0x1bb610u: goto label_1bb610;
        case 0x1bb614u: goto label_1bb614;
        case 0x1bb618u: goto label_1bb618;
        case 0x1bb61cu: goto label_1bb61c;
        case 0x1bb620u: goto label_1bb620;
        case 0x1bb624u: goto label_1bb624;
        case 0x1bb628u: goto label_1bb628;
        case 0x1bb62cu: goto label_1bb62c;
        case 0x1bb630u: goto label_1bb630;
        case 0x1bb634u: goto label_1bb634;
        case 0x1bb638u: goto label_1bb638;
        case 0x1bb63cu: goto label_1bb63c;
        case 0x1bb640u: goto label_1bb640;
        case 0x1bb644u: goto label_1bb644;
        case 0x1bb648u: goto label_1bb648;
        case 0x1bb64cu: goto label_1bb64c;
        case 0x1bb650u: goto label_1bb650;
        case 0x1bb654u: goto label_1bb654;
        case 0x1bb658u: goto label_1bb658;
        case 0x1bb65cu: goto label_1bb65c;
        case 0x1bb660u: goto label_1bb660;
        case 0x1bb664u: goto label_1bb664;
        case 0x1bb668u: goto label_1bb668;
        case 0x1bb66cu: goto label_1bb66c;
        case 0x1bb670u: goto label_1bb670;
        case 0x1bb674u: goto label_1bb674;
        case 0x1bb678u: goto label_1bb678;
        case 0x1bb67cu: goto label_1bb67c;
        case 0x1bb680u: goto label_1bb680;
        case 0x1bb684u: goto label_1bb684;
        case 0x1bb688u: goto label_1bb688;
        case 0x1bb68cu: goto label_1bb68c;
        case 0x1bb690u: goto label_1bb690;
        case 0x1bb694u: goto label_1bb694;
        case 0x1bb698u: goto label_1bb698;
        case 0x1bb69cu: goto label_1bb69c;
        case 0x1bb6a0u: goto label_1bb6a0;
        case 0x1bb6a4u: goto label_1bb6a4;
        case 0x1bb6a8u: goto label_1bb6a8;
        case 0x1bb6acu: goto label_1bb6ac;
        case 0x1bb6b0u: goto label_1bb6b0;
        case 0x1bb6b4u: goto label_1bb6b4;
        case 0x1bb6b8u: goto label_1bb6b8;
        case 0x1bb6bcu: goto label_1bb6bc;
        case 0x1bb6c0u: goto label_1bb6c0;
        case 0x1bb6c4u: goto label_1bb6c4;
        case 0x1bb6c8u: goto label_1bb6c8;
        case 0x1bb6ccu: goto label_1bb6cc;
        case 0x1bb6d0u: goto label_1bb6d0;
        case 0x1bb6d4u: goto label_1bb6d4;
        case 0x1bb6d8u: goto label_1bb6d8;
        case 0x1bb6dcu: goto label_1bb6dc;
        case 0x1bb6e0u: goto label_1bb6e0;
        case 0x1bb6e4u: goto label_1bb6e4;
        case 0x1bb6e8u: goto label_1bb6e8;
        case 0x1bb6ecu: goto label_1bb6ec;
        case 0x1bb6f0u: goto label_1bb6f0;
        case 0x1bb6f4u: goto label_1bb6f4;
        case 0x1bb6f8u: goto label_1bb6f8;
        case 0x1bb6fcu: goto label_1bb6fc;
        case 0x1bb700u: goto label_1bb700;
        case 0x1bb704u: goto label_1bb704;
        case 0x1bb708u: goto label_1bb708;
        case 0x1bb70cu: goto label_1bb70c;
        case 0x1bb710u: goto label_1bb710;
        case 0x1bb714u: goto label_1bb714;
        case 0x1bb718u: goto label_1bb718;
        case 0x1bb71cu: goto label_1bb71c;
        case 0x1bb720u: goto label_1bb720;
        case 0x1bb724u: goto label_1bb724;
        case 0x1bb728u: goto label_1bb728;
        case 0x1bb72cu: goto label_1bb72c;
        case 0x1bb730u: goto label_1bb730;
        case 0x1bb734u: goto label_1bb734;
        case 0x1bb738u: goto label_1bb738;
        case 0x1bb73cu: goto label_1bb73c;
        case 0x1bb740u: goto label_1bb740;
        case 0x1bb744u: goto label_1bb744;
        case 0x1bb748u: goto label_1bb748;
        case 0x1bb74cu: goto label_1bb74c;
        case 0x1bb750u: goto label_1bb750;
        case 0x1bb754u: goto label_1bb754;
        case 0x1bb758u: goto label_1bb758;
        case 0x1bb75cu: goto label_1bb75c;
        case 0x1bb760u: goto label_1bb760;
        case 0x1bb764u: goto label_1bb764;
        case 0x1bb768u: goto label_1bb768;
        case 0x1bb76cu: goto label_1bb76c;
        case 0x1bb770u: goto label_1bb770;
        case 0x1bb774u: goto label_1bb774;
        case 0x1bb778u: goto label_1bb778;
        case 0x1bb77cu: goto label_1bb77c;
        case 0x1bb780u: goto label_1bb780;
        case 0x1bb784u: goto label_1bb784;
        case 0x1bb788u: goto label_1bb788;
        case 0x1bb78cu: goto label_1bb78c;
        case 0x1bb790u: goto label_1bb790;
        case 0x1bb794u: goto label_1bb794;
        case 0x1bb798u: goto label_1bb798;
        case 0x1bb79cu: goto label_1bb79c;
        case 0x1bb7a0u: goto label_1bb7a0;
        case 0x1bb7a4u: goto label_1bb7a4;
        case 0x1bb7a8u: goto label_1bb7a8;
        case 0x1bb7acu: goto label_1bb7ac;
        case 0x1bb7b0u: goto label_1bb7b0;
        case 0x1bb7b4u: goto label_1bb7b4;
        case 0x1bb7b8u: goto label_1bb7b8;
        case 0x1bb7bcu: goto label_1bb7bc;
        case 0x1bb7c0u: goto label_1bb7c0;
        case 0x1bb7c4u: goto label_1bb7c4;
        case 0x1bb7c8u: goto label_1bb7c8;
        case 0x1bb7ccu: goto label_1bb7cc;
        case 0x1bb7d0u: goto label_1bb7d0;
        case 0x1bb7d4u: goto label_1bb7d4;
        case 0x1bb7d8u: goto label_1bb7d8;
        case 0x1bb7dcu: goto label_1bb7dc;
        case 0x1bb7e0u: goto label_1bb7e0;
        case 0x1bb7e4u: goto label_1bb7e4;
        case 0x1bb7e8u: goto label_1bb7e8;
        case 0x1bb7ecu: goto label_1bb7ec;
        case 0x1bb7f0u: goto label_1bb7f0;
        case 0x1bb7f4u: goto label_1bb7f4;
        case 0x1bb7f8u: goto label_1bb7f8;
        case 0x1bb7fcu: goto label_1bb7fc;
        case 0x1bb800u: goto label_1bb800;
        case 0x1bb804u: goto label_1bb804;
        case 0x1bb808u: goto label_1bb808;
        case 0x1bb80cu: goto label_1bb80c;
        case 0x1bb810u: goto label_1bb810;
        case 0x1bb814u: goto label_1bb814;
        case 0x1bb818u: goto label_1bb818;
        case 0x1bb81cu: goto label_1bb81c;
        case 0x1bb820u: goto label_1bb820;
        case 0x1bb824u: goto label_1bb824;
        case 0x1bb828u: goto label_1bb828;
        case 0x1bb82cu: goto label_1bb82c;
        case 0x1bb830u: goto label_1bb830;
        case 0x1bb834u: goto label_1bb834;
        case 0x1bb838u: goto label_1bb838;
        case 0x1bb83cu: goto label_1bb83c;
        case 0x1bb840u: goto label_1bb840;
        case 0x1bb844u: goto label_1bb844;
        case 0x1bb848u: goto label_1bb848;
        case 0x1bb84cu: goto label_1bb84c;
        case 0x1bb850u: goto label_1bb850;
        case 0x1bb854u: goto label_1bb854;
        case 0x1bb858u: goto label_1bb858;
        case 0x1bb85cu: goto label_1bb85c;
        case 0x1bb860u: goto label_1bb860;
        case 0x1bb864u: goto label_1bb864;
        case 0x1bb868u: goto label_1bb868;
        case 0x1bb86cu: goto label_1bb86c;
        case 0x1bb870u: goto label_1bb870;
        case 0x1bb874u: goto label_1bb874;
        case 0x1bb878u: goto label_1bb878;
        case 0x1bb87cu: goto label_1bb87c;
        case 0x1bb880u: goto label_1bb880;
        case 0x1bb884u: goto label_1bb884;
        case 0x1bb888u: goto label_1bb888;
        case 0x1bb88cu: goto label_1bb88c;
        case 0x1bb890u: goto label_1bb890;
        case 0x1bb894u: goto label_1bb894;
        case 0x1bb898u: goto label_1bb898;
        case 0x1bb89cu: goto label_1bb89c;
        case 0x1bb8a0u: goto label_1bb8a0;
        case 0x1bb8a4u: goto label_1bb8a4;
        case 0x1bb8a8u: goto label_1bb8a8;
        case 0x1bb8acu: goto label_1bb8ac;
        case 0x1bb8b0u: goto label_1bb8b0;
        case 0x1bb8b4u: goto label_1bb8b4;
        case 0x1bb8b8u: goto label_1bb8b8;
        case 0x1bb8bcu: goto label_1bb8bc;
        case 0x1bb8c0u: goto label_1bb8c0;
        case 0x1bb8c4u: goto label_1bb8c4;
        case 0x1bb8c8u: goto label_1bb8c8;
        case 0x1bb8ccu: goto label_1bb8cc;
        case 0x1bb8d0u: goto label_1bb8d0;
        case 0x1bb8d4u: goto label_1bb8d4;
        case 0x1bb8d8u: goto label_1bb8d8;
        case 0x1bb8dcu: goto label_1bb8dc;
        case 0x1bb8e0u: goto label_1bb8e0;
        case 0x1bb8e4u: goto label_1bb8e4;
        case 0x1bb8e8u: goto label_1bb8e8;
        case 0x1bb8ecu: goto label_1bb8ec;
        case 0x1bb8f0u: goto label_1bb8f0;
        case 0x1bb8f4u: goto label_1bb8f4;
        case 0x1bb8f8u: goto label_1bb8f8;
        case 0x1bb8fcu: goto label_1bb8fc;
        case 0x1bb900u: goto label_1bb900;
        case 0x1bb904u: goto label_1bb904;
        case 0x1bb908u: goto label_1bb908;
        case 0x1bb90cu: goto label_1bb90c;
        case 0x1bb910u: goto label_1bb910;
        case 0x1bb914u: goto label_1bb914;
        case 0x1bb918u: goto label_1bb918;
        case 0x1bb91cu: goto label_1bb91c;
        case 0x1bb920u: goto label_1bb920;
        case 0x1bb924u: goto label_1bb924;
        case 0x1bb928u: goto label_1bb928;
        case 0x1bb92cu: goto label_1bb92c;
        case 0x1bb930u: goto label_1bb930;
        case 0x1bb934u: goto label_1bb934;
        case 0x1bb938u: goto label_1bb938;
        case 0x1bb93cu: goto label_1bb93c;
        case 0x1bb940u: goto label_1bb940;
        case 0x1bb944u: goto label_1bb944;
        case 0x1bb948u: goto label_1bb948;
        case 0x1bb94cu: goto label_1bb94c;
        case 0x1bb950u: goto label_1bb950;
        case 0x1bb954u: goto label_1bb954;
        case 0x1bb958u: goto label_1bb958;
        case 0x1bb95cu: goto label_1bb95c;
        case 0x1bb960u: goto label_1bb960;
        case 0x1bb964u: goto label_1bb964;
        case 0x1bb968u: goto label_1bb968;
        case 0x1bb96cu: goto label_1bb96c;
        case 0x1bb970u: goto label_1bb970;
        case 0x1bb974u: goto label_1bb974;
        case 0x1bb978u: goto label_1bb978;
        case 0x1bb97cu: goto label_1bb97c;
        case 0x1bb980u: goto label_1bb980;
        case 0x1bb984u: goto label_1bb984;
        case 0x1bb988u: goto label_1bb988;
        case 0x1bb98cu: goto label_1bb98c;
        case 0x1bb990u: goto label_1bb990;
        case 0x1bb994u: goto label_1bb994;
        case 0x1bb998u: goto label_1bb998;
        case 0x1bb99cu: goto label_1bb99c;
        case 0x1bb9a0u: goto label_1bb9a0;
        case 0x1bb9a4u: goto label_1bb9a4;
        case 0x1bb9a8u: goto label_1bb9a8;
        case 0x1bb9acu: goto label_1bb9ac;
        case 0x1bb9b0u: goto label_1bb9b0;
        case 0x1bb9b4u: goto label_1bb9b4;
        case 0x1bb9b8u: goto label_1bb9b8;
        case 0x1bb9bcu: goto label_1bb9bc;
        case 0x1bb9c0u: goto label_1bb9c0;
        case 0x1bb9c4u: goto label_1bb9c4;
        case 0x1bb9c8u: goto label_1bb9c8;
        case 0x1bb9ccu: goto label_1bb9cc;
        case 0x1bb9d0u: goto label_1bb9d0;
        case 0x1bb9d4u: goto label_1bb9d4;
        case 0x1bb9d8u: goto label_1bb9d8;
        case 0x1bb9dcu: goto label_1bb9dc;
        case 0x1bb9e0u: goto label_1bb9e0;
        case 0x1bb9e4u: goto label_1bb9e4;
        case 0x1bb9e8u: goto label_1bb9e8;
        case 0x1bb9ecu: goto label_1bb9ec;
        case 0x1bb9f0u: goto label_1bb9f0;
        case 0x1bb9f4u: goto label_1bb9f4;
        case 0x1bb9f8u: goto label_1bb9f8;
        case 0x1bb9fcu: goto label_1bb9fc;
        case 0x1bba00u: goto label_1bba00;
        case 0x1bba04u: goto label_1bba04;
        case 0x1bba08u: goto label_1bba08;
        case 0x1bba0cu: goto label_1bba0c;
        case 0x1bba10u: goto label_1bba10;
        case 0x1bba14u: goto label_1bba14;
        case 0x1bba18u: goto label_1bba18;
        case 0x1bba1cu: goto label_1bba1c;
        case 0x1bba20u: goto label_1bba20;
        case 0x1bba24u: goto label_1bba24;
        case 0x1bba28u: goto label_1bba28;
        case 0x1bba2cu: goto label_1bba2c;
        case 0x1bba30u: goto label_1bba30;
        case 0x1bba34u: goto label_1bba34;
        case 0x1bba38u: goto label_1bba38;
        case 0x1bba3cu: goto label_1bba3c;
        case 0x1bba40u: goto label_1bba40;
        case 0x1bba44u: goto label_1bba44;
        case 0x1bba48u: goto label_1bba48;
        case 0x1bba4cu: goto label_1bba4c;
        case 0x1bba50u: goto label_1bba50;
        case 0x1bba54u: goto label_1bba54;
        case 0x1bba58u: goto label_1bba58;
        case 0x1bba5cu: goto label_1bba5c;
        case 0x1bba60u: goto label_1bba60;
        case 0x1bba64u: goto label_1bba64;
        case 0x1bba68u: goto label_1bba68;
        case 0x1bba6cu: goto label_1bba6c;
        case 0x1bba70u: goto label_1bba70;
        case 0x1bba74u: goto label_1bba74;
        case 0x1bba78u: goto label_1bba78;
        case 0x1bba7cu: goto label_1bba7c;
        case 0x1bba80u: goto label_1bba80;
        case 0x1bba84u: goto label_1bba84;
        case 0x1bba88u: goto label_1bba88;
        case 0x1bba8cu: goto label_1bba8c;
        case 0x1bba90u: goto label_1bba90;
        case 0x1bba94u: goto label_1bba94;
        case 0x1bba98u: goto label_1bba98;
        case 0x1bba9cu: goto label_1bba9c;
        case 0x1bbaa0u: goto label_1bbaa0;
        case 0x1bbaa4u: goto label_1bbaa4;
        case 0x1bbaa8u: goto label_1bbaa8;
        case 0x1bbaacu: goto label_1bbaac;
        case 0x1bbab0u: goto label_1bbab0;
        case 0x1bbab4u: goto label_1bbab4;
        case 0x1bbab8u: goto label_1bbab8;
        case 0x1bbabcu: goto label_1bbabc;
        case 0x1bbac0u: goto label_1bbac0;
        case 0x1bbac4u: goto label_1bbac4;
        case 0x1bbac8u: goto label_1bbac8;
        case 0x1bbaccu: goto label_1bbacc;
        case 0x1bbad0u: goto label_1bbad0;
        case 0x1bbad4u: goto label_1bbad4;
        case 0x1bbad8u: goto label_1bbad8;
        case 0x1bbadcu: goto label_1bbadc;
        case 0x1bbae0u: goto label_1bbae0;
        case 0x1bbae4u: goto label_1bbae4;
        case 0x1bbae8u: goto label_1bbae8;
        case 0x1bbaecu: goto label_1bbaec;
        case 0x1bbaf0u: goto label_1bbaf0;
        case 0x1bbaf4u: goto label_1bbaf4;
        case 0x1bbaf8u: goto label_1bbaf8;
        case 0x1bbafcu: goto label_1bbafc;
        case 0x1bbb00u: goto label_1bbb00;
        case 0x1bbb04u: goto label_1bbb04;
        case 0x1bbb08u: goto label_1bbb08;
        case 0x1bbb0cu: goto label_1bbb0c;
        case 0x1bbb10u: goto label_1bbb10;
        case 0x1bbb14u: goto label_1bbb14;
        case 0x1bbb18u: goto label_1bbb18;
        case 0x1bbb1cu: goto label_1bbb1c;
        case 0x1bbb20u: goto label_1bbb20;
        case 0x1bbb24u: goto label_1bbb24;
        case 0x1bbb28u: goto label_1bbb28;
        case 0x1bbb2cu: goto label_1bbb2c;
        case 0x1bbb30u: goto label_1bbb30;
        case 0x1bbb34u: goto label_1bbb34;
        case 0x1bbb38u: goto label_1bbb38;
        case 0x1bbb3cu: goto label_1bbb3c;
        case 0x1bbb40u: goto label_1bbb40;
        case 0x1bbb44u: goto label_1bbb44;
        case 0x1bbb48u: goto label_1bbb48;
        case 0x1bbb4cu: goto label_1bbb4c;
        case 0x1bbb50u: goto label_1bbb50;
        case 0x1bbb54u: goto label_1bbb54;
        case 0x1bbb58u: goto label_1bbb58;
        case 0x1bbb5cu: goto label_1bbb5c;
        case 0x1bbb60u: goto label_1bbb60;
        case 0x1bbb64u: goto label_1bbb64;
        case 0x1bbb68u: goto label_1bbb68;
        case 0x1bbb6cu: goto label_1bbb6c;
        case 0x1bbb70u: goto label_1bbb70;
        case 0x1bbb74u: goto label_1bbb74;
        case 0x1bbb78u: goto label_1bbb78;
        case 0x1bbb7cu: goto label_1bbb7c;
        case 0x1bbb80u: goto label_1bbb80;
        case 0x1bbb84u: goto label_1bbb84;
        case 0x1bbb88u: goto label_1bbb88;
        case 0x1bbb8cu: goto label_1bbb8c;
        case 0x1bbb90u: goto label_1bbb90;
        case 0x1bbb94u: goto label_1bbb94;
        case 0x1bbb98u: goto label_1bbb98;
        case 0x1bbb9cu: goto label_1bbb9c;
        case 0x1bbba0u: goto label_1bbba0;
        case 0x1bbba4u: goto label_1bbba4;
        case 0x1bbba8u: goto label_1bbba8;
        case 0x1bbbacu: goto label_1bbbac;
        case 0x1bbbb0u: goto label_1bbbb0;
        case 0x1bbbb4u: goto label_1bbbb4;
        case 0x1bbbb8u: goto label_1bbbb8;
        default: break;
    }

    ctx->pc = 0x1bad10u;

label_1bad10:
    // 0x1bad10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1bad10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1bad14:
    // 0x1bad14: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x1bad14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_1bad18:
    // 0x1bad18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bad18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1bad1c:
    // 0x1bad1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bad1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bad20:
    // 0x1bad20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bad20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1bad24:
    // 0x1bad24: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x1bad24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_1bad28:
    // 0x1bad28: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1bad28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_1bad2c:
    // 0x1bad2c: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1bad2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_1bad30:
    // 0x1bad30: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1bad30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_1bad34:
    // 0x1bad34: 0x2472ec70  addiu       $s2, $v1, -0x1390
    ctx->pc = 0x1bad34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962288));
label_1bad38:
    // 0x1bad38: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1bad38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bad3c:
    // 0x1bad3c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1bad3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1bad40:
    // 0x1bad40: 0x3c0597ff  lui         $a1, 0x97FF
    ctx->pc = 0x1bad40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38911 << 16));
label_1bad44:
    // 0x1bad44: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x1bad44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_1bad48:
    // 0x1bad48: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bad48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1bad4c:
    // 0x1bad4c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1bad4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1bad50:
    // 0x1bad50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bad50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bad54:
    // 0x1bad54: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bad54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bad58:
    // 0x1bad58: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1bad58u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_1bad5c:
    // 0x1bad5c: 0x8e0319e4  lw          $v1, 0x19E4($s0)
    ctx->pc = 0x1bad5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6628)));
label_1bad60:
    // 0x1bad60: 0x34640400  ori         $a0, $v1, 0x400
    ctx->pc = 0x1bad60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
label_1bad64:
    // 0x1bad64: 0xae0419e4  sw          $a0, 0x19E4($s0)
    ctx->pc = 0x1bad64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6628), GPR_U32(ctx, 4));
label_1bad68:
    // 0x1bad68: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bad68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bad6c:
    // 0x1bad6c: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1bad6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_1bad70:
    // 0x1bad70: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1bad70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1bad74:
    // 0x1bad74: 0x2c81000c  sltiu       $at, $a0, 0xC
    ctx->pc = 0x1bad74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_1bad78:
    // 0x1bad78: 0x10200365  beqz        $at, . + 4 + (0x365 << 2)
label_1bad7c:
    if (ctx->pc == 0x1BAD7Cu) {
        ctx->pc = 0x1BAD80u;
        goto label_1bad80;
    }
    ctx->pc = 0x1BAD78u;
    {
        const bool branch_taken_0x1bad78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bad78) {
            ctx->pc = 0x1BBB10u;
            goto label_1bbb10;
        }
    }
    ctx->pc = 0x1BAD80u;
label_1bad80:
    // 0x1bad80: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1bad80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_1bad84:
    // 0x1bad84: 0x2465f360  addiu       $a1, $v1, -0xCA0
    ctx->pc = 0x1bad84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964064));
label_1bad88:
    // 0x1bad88: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1bad88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1bad8c:
    // 0x1bad8c: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x1bad8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1bad90:
    // 0x1bad90: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1bad90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bad94:
    // 0x1bad94: 0x600008  jr          $v1
label_1bad98:
    if (ctx->pc == 0x1BAD98u) {
        ctx->pc = 0x1BAD9Cu;
        goto label_1bad9c;
    }
    ctx->pc = 0x1BAD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAD94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BAD9Cu;
label_1bad9c:
    // 0x1bad9c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1bad9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1bada0:
    // 0x1bada0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bada0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bada4:
    // 0x1bada4: 0xa04410a8  sb          $a0, 0x10A8($v0)
    ctx->pc = 0x1bada4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 4));
label_1bada8:
    // 0x1bada8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bada8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1badac:
    // 0x1badac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1badacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1badb0:
    // 0x1badb0: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x1badb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1badb4:
    // 0x1badb4: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1badb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1badb8:
    // 0x1badb8: 0xc058f20  jal         func_163C80
label_1badbc:
    if (ctx->pc == 0x1BADBCu) {
        ctx->pc = 0x1BADC0u;
        goto label_1badc0;
    }
    ctx->pc = 0x1BADB8u;
    SET_GPR_U32(ctx, 31, 0x1BADC0u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1BADB8u, 0x1BADC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BADC0u;
label_1badc0:
    // 0x1badc0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1badc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1badc4:
    // 0x1badc4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1badc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1badc8:
    // 0x1badc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1badc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1badcc:
    // 0x1badcc: 0x0  nop
    ctx->pc = 0x1badccu;
    // NOP
label_1badd0:
    // 0x1badd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1badd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1badd4:
    // 0x1badd4: 0x0  nop
    ctx->pc = 0x1badd4u;
    // NOP
label_1badd8:
    // 0x1badd8: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_1baddc:
    if (ctx->pc == 0x1BADDCu) {
        ctx->pc = 0x1BADE0u;
        goto label_1bade0;
    }
    ctx->pc = 0x1BADD8u;
    {
        const bool branch_taken_0x1badd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1badd8) {
            ctx->pc = 0x1BAE14u;
            goto label_1bae14;
        }
    }
    ctx->pc = 0x1BADE0u;
label_1bade0:
    // 0x1bade0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bade0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bade4:
    // 0x1bade4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bade4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bade8:
    // 0x1bade8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1bade8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1badec:
    // 0x1badec: 0x24060093  addiu       $a2, $zero, 0x93
    ctx->pc = 0x1badecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
label_1badf0:
    // 0x1badf0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1badf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1badf4:
    // 0x1badf4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1badf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1badf8:
    // 0x1badf8: 0xc0965d0  jal         func_259740
label_1badfc:
    if (ctx->pc == 0x1BADFCu) {
        ctx->pc = 0x1BAE00u;
        goto label_1bae00;
    }
    ctx->pc = 0x1BADF8u;
    SET_GPR_U32(ctx, 31, 0x1BAE00u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BADF8u, 0x1BAE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE00u;
label_1bae00:
    // 0x1bae00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bae00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bae04:
    // 0x1bae04: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bae04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bae08:
    // 0x1bae08: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x1bae08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
label_1bae0c:
    // 0x1bae0c: 0x1000000c  b           . + 4 + (0xC << 2)
label_1bae10:
    if (ctx->pc == 0x1BAE10u) {
        ctx->pc = 0x1BAE14u;
        goto label_1bae14;
    }
    ctx->pc = 0x1BAE0Cu;
    {
        const bool branch_taken_0x1bae0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bae0c) {
            ctx->pc = 0x1BAE40u;
            goto label_1bae40;
        }
    }
    ctx->pc = 0x1BAE14u;
label_1bae14:
    // 0x1bae14: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bae14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bae18:
    // 0x1bae18: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bae18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bae1c:
    // 0x1bae1c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1bae1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1bae20:
    // 0x1bae20: 0x24060093  addiu       $a2, $zero, 0x93
    ctx->pc = 0x1bae20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
label_1bae24:
    // 0x1bae24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bae24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bae28:
    // 0x1bae28: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bae28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1bae2c:
    // 0x1bae2c: 0xc0965d0  jal         func_259740
label_1bae30:
    if (ctx->pc == 0x1BAE30u) {
        ctx->pc = 0x1BAE34u;
        goto label_1bae34;
    }
    ctx->pc = 0x1BAE2Cu;
    SET_GPR_U32(ctx, 31, 0x1BAE34u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BAE2Cu, 0x1BAE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE34u;
label_1bae34:
    // 0x1bae34: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bae34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bae38:
    // 0x1bae38: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bae38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bae3c:
    // 0x1bae3c: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x1bae3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
label_1bae40:
    // 0x1bae40: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x1bae40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
label_1bae44:
    // 0x1bae44: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x1bae44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
label_1bae48:
    // 0x1bae48: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x1bae48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_1bae4c:
    // 0x1bae4c: 0xc0684d8  jal         func_1A1360
label_1bae50:
    if (ctx->pc == 0x1BAE50u) {
        ctx->pc = 0x1BAE54u;
        goto label_1bae54;
    }
    ctx->pc = 0x1BAE4Cu;
    SET_GPR_U32(ctx, 31, 0x1BAE54u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1BAE4Cu, 0x1BAE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE54u;
label_1bae54:
    // 0x1bae54: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bae54u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bae58:
    // 0x1bae58: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bae58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bae5c:
    // 0x1bae5c: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1bae5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_1bae60:
    // 0x1bae60: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x1bae60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1bae64:
    // 0x1bae64: 0xa0860003  sb          $a2, 0x3($a0)
    ctx->pc = 0x1bae64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 6));
label_1bae68:
    // 0x1bae68: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1bae68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bae6c:
    // 0x1bae6c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1bae6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1bae70:
    // 0x1bae70: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1bae70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_1bae74:
    // 0x1bae74: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1bae74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1bae78:
    // 0x1bae78: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1bae78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1bae7c:
    // 0x1bae7c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bae7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1bae80:
    // 0x1bae80: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1bae80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1bae84:
    // 0x1bae84: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x1bae84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_1bae88:
    // 0x1bae88: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bae88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1bae8c:
    // 0x1bae8c: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x1bae8cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 3));
label_1bae90:
    // 0x1bae90: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bae90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bae94:
    // 0x1bae94: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bae94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1bae98:
    // 0x1bae98: 0xc096b40  jal         func_25AD00
label_1bae9c:
    if (ctx->pc == 0x1BAE9Cu) {
        ctx->pc = 0x1BAEA0u;
        goto label_1baea0;
    }
    ctx->pc = 0x1BAE98u;
    SET_GPR_U32(ctx, 31, 0x1BAEA0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BAE98u, 0x1BAEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAEA0u;
label_1baea0:
    // 0x1baea0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1baea0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1baea4:
    // 0x1baea4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1baea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1baea8:
    // 0x1baea8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1baea8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1baeac:
    // 0x1baeac: 0xc05cd10  jal         func_173440
label_1baeb0:
    if (ctx->pc == 0x1BAEB0u) {
        ctx->pc = 0x1BAEB4u;
        goto label_1baeb4;
    }
    ctx->pc = 0x1BAEACu;
    SET_GPR_U32(ctx, 31, 0x1BAEB4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BAEACu, 0x1BAEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAEB4u;
label_1baeb4:
    // 0x1baeb4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1baeb4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1baeb8:
    // 0x1baeb8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1baeb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1baebc:
    // 0x1baebc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1baebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1baec0:
    // 0x1baec0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1baec0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1baec4:
    // 0x1baec4: 0xc057480  jal         func_15D200
label_1baec8:
    if (ctx->pc == 0x1BAEC8u) {
        ctx->pc = 0x1BAECCu;
        goto label_1baecc;
    }
    ctx->pc = 0x1BAEC4u;
    SET_GPR_U32(ctx, 31, 0x1BAECCu);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1BAEC4u, 0x1BAECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAECCu;
label_1baecc:
    // 0x1baecc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1baeccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1baed0:
    // 0x1baed0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1baed0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1baed4:
    // 0x1baed4: 0xc097530  jal         func_25D4C0
label_1baed8:
    if (ctx->pc == 0x1BAED8u) {
        ctx->pc = 0x1BAEDCu;
        goto label_1baedc;
    }
    ctx->pc = 0x1BAED4u;
    SET_GPR_U32(ctx, 31, 0x1BAEDCu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BAED4u, 0x1BAEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAEDCu;
label_1baedc:
    // 0x1baedc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1baedcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1baee0:
    // 0x1baee0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1baee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1baee4:
    // 0x1baee4: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x1baee4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
label_1baee8:
    // 0x1baee8: 0x10600309  beqz        $v1, . + 4 + (0x309 << 2)
label_1baeec:
    if (ctx->pc == 0x1BAEECu) {
        ctx->pc = 0x1BAEF0u;
        goto label_1baef0;
    }
    ctx->pc = 0x1BAEE8u;
    {
        const bool branch_taken_0x1baee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baee8) {
            ctx->pc = 0x1BBB10u;
            goto label_1bbb10;
        }
    }
    ctx->pc = 0x1BAEF0u;
label_1baef0:
    // 0x1baef0: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1baef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1baef4:
    // 0x1baef4: 0x90a40003  lbu         $a0, 0x3($a1)
    ctx->pc = 0x1baef4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_1baef8:
    // 0x1baef8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1baef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1baefc:
    // 0x1baefc: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x1baefcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
label_1baf00:
    // 0x1baf00: 0x10000303  b           . + 4 + (0x303 << 2)
label_1baf04:
    if (ctx->pc == 0x1BAF04u) {
        ctx->pc = 0x1BAF08u;
        goto label_1baf08;
    }
    ctx->pc = 0x1BAF00u;
    {
        const bool branch_taken_0x1baf00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baf00) {
            ctx->pc = 0x1BBB10u;
            goto label_1bbb10;
        }
    }
    ctx->pc = 0x1BAF08u;
label_1baf08:
    // 0x1baf08: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1baf08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1baf0c:
    // 0x1baf0c: 0xaca01b64  sw          $zero, 0x1B64($a1)
    ctx->pc = 0x1baf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7012), GPR_U32(ctx, 0));
label_1baf10:
    // 0x1baf10: 0x8e060090  lw          $a2, 0x90($s0)
    ctx->pc = 0x1baf10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1baf14:
    // 0x1baf14: 0x30c70020  andi        $a3, $a2, 0x20
    ctx->pc = 0x1baf14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
label_1baf18:
    // 0x1baf18: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
label_1baf1c:
    if (ctx->pc == 0x1BAF1Cu) {
        ctx->pc = 0x1BAF20u;
        goto label_1baf20;
    }
    ctx->pc = 0x1BAF18u;
    {
        const bool branch_taken_0x1baf18 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1baf18) {
            ctx->pc = 0x1BAF2Cu;
            goto label_1baf2c;
        }
    }
    ctx->pc = 0x1BAF20u;
label_1baf20:
    // 0x1baf20: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1baf20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1baf24:
    // 0x1baf24: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1baf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1baf28:
    // 0x1baf28: 0xac481b64  sw          $t0, 0x1B64($v0)
    ctx->pc = 0x1baf28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 8));
label_1baf2c:
    // 0x1baf2c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1baf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1baf30:
    // 0x1baf30: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x1baf30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_1baf34:
    // 0x1baf34: 0xc0675a4  jal         func_19D690
label_1baf38:
    if (ctx->pc == 0x1BAF38u) {
        ctx->pc = 0x1BAF3Cu;
        goto label_1baf3c;
    }
    ctx->pc = 0x1BAF34u;
    SET_GPR_U32(ctx, 31, 0x1BAF3Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1BAF34u, 0x1BAF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAF3Cu;
label_1baf3c:
    // 0x1baf3c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1baf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1baf40:
    // 0x1baf40: 0x8c421b64  lw          $v0, 0x1B64($v0)
    ctx->pc = 0x1baf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7012)));
label_1baf44:
    // 0x1baf44: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1baf48:
    if (ctx->pc == 0x1BAF48u) {
        ctx->pc = 0x1BAF4Cu;
        goto label_1baf4c;
    }
    ctx->pc = 0x1BAF44u;
    {
        const bool branch_taken_0x1baf44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baf44) {
            ctx->pc = 0x1BAF84u;
            goto label_1baf84;
        }
    }
    ctx->pc = 0x1BAF4Cu;
label_1baf4c:
    // 0x1baf4c: 0x3c0242a2  lui         $v0, 0x42A2
    ctx->pc = 0x1baf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17058 << 16));
label_1baf50:
    // 0x1baf50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1baf50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1baf54:
    // 0x1baf54: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1baf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1baf58:
    // 0x1baf58: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1baf58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_1baf5c:
    // 0x1baf5c: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x1baf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_1baf60:
    // 0x1baf60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1baf60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1baf64:
    // 0x1baf64: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1baf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1baf68:
    // 0x1baf68: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x1baf68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_1baf6c:
    // 0x1baf6c: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x1baf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
label_1baf70:
    // 0x1baf70: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1baf70u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1baf74:
    // 0x1baf74: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1baf74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1baf78:
    // 0x1baf78: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x1baf78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
label_1baf7c:
    // 0x1baf7c: 0x1000000f  b           . + 4 + (0xF << 2)
label_1baf80:
    if (ctx->pc == 0x1BAF80u) {
        ctx->pc = 0x1BAF84u;
        goto label_1baf84;
    }
    ctx->pc = 0x1BAF7Cu;
    {
        const bool branch_taken_0x1baf7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baf7c) {
            ctx->pc = 0x1BAFBCu;
            goto label_1bafbc;
        }
    }
    ctx->pc = 0x1BAF84u;
label_1baf84:
    // 0x1baf84: 0x3c034309  lui         $v1, 0x4309
    ctx->pc = 0x1baf84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17161 << 16));
label_1baf88:
    // 0x1baf88: 0x3462b333  ori         $v0, $v1, 0xB333
    ctx->pc = 0x1baf88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45875);
label_1baf8c:
    // 0x1baf8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1baf8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1baf90:
    // 0x1baf90: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1baf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1baf94:
    // 0x1baf94: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1baf94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_1baf98:
    // 0x1baf98: 0x3c0540a3  lui         $a1, 0x40A3
    ctx->pc = 0x1baf98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16547 << 16));
label_1baf9c:
    // 0x1baf9c: 0x34a43334  ori         $a0, $a1, 0x3334
    ctx->pc = 0x1baf9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13108);
label_1bafa0:
    // 0x1bafa0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bafa0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bafa4:
    // 0x1bafa4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bafa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bafa8:
    // 0x1bafa8: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x1bafa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_1bafac:
    // 0x1bafac: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x1bafacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_1bafb0:
    // 0x1bafb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bafb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bafb4:
    // 0x1bafb4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bafb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bafb8:
    // 0x1bafb8: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1bafb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_1bafbc:
    // 0x1bafbc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bafbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bafc0:
    // 0x1bafc0: 0x8c421b60  lw          $v0, 0x1B60($v0)
    ctx->pc = 0x1bafc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
label_1bafc4:
    // 0x1bafc4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1bafc8:
    if (ctx->pc == 0x1BAFC8u) {
        ctx->pc = 0x1BAFCCu;
        goto label_1bafcc;
    }
    ctx->pc = 0x1BAFC4u;
    {
        const bool branch_taken_0x1bafc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bafc4) {
            ctx->pc = 0x1BAFF4u;
            goto label_1baff4;
        }
    }
    ctx->pc = 0x1BAFCCu;
label_1bafcc:
    // 0x1bafcc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bafccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bafd0:
    // 0x1bafd0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bafd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bafd4:
    // 0x1bafd4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1bafd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1bafd8:
    // 0x1bafd8: 0x24060094  addiu       $a2, $zero, 0x94
    ctx->pc = 0x1bafd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
label_1bafdc:
    // 0x1bafdc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1bafdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1bafe0:
    // 0x1bafe0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bafe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1bafe4:
    // 0x1bafe4: 0xc0965d0  jal         func_259740
label_1bafe8:
    if (ctx->pc == 0x1BAFE8u) {
        ctx->pc = 0x1BAFECu;
        goto label_1bafec;
    }
    ctx->pc = 0x1BAFE4u;
    SET_GPR_U32(ctx, 31, 0x1BAFECu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BAFE4u, 0x1BAFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAFECu;
label_1bafec:
    // 0x1bafec: 0x10000009  b           . + 4 + (0x9 << 2)
label_1baff0:
    if (ctx->pc == 0x1BAFF0u) {
        ctx->pc = 0x1BAFF4u;
        goto label_1baff4;
    }
    ctx->pc = 0x1BAFECu;
    {
        const bool branch_taken_0x1bafec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bafec) {
            ctx->pc = 0x1BB014u;
            goto label_1bb014;
        }
    }
    ctx->pc = 0x1BAFF4u;
label_1baff4:
    // 0x1baff4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1baff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1baff8:
    // 0x1baff8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1baff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1baffc:
    // 0x1baffc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1baffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1bb000:
    // 0x1bb000: 0x24060094  addiu       $a2, $zero, 0x94
    ctx->pc = 0x1bb000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
label_1bb004:
    // 0x1bb004: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bb004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb008:
    // 0x1bb008: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bb008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1bb00c:
    // 0x1bb00c: 0xc0965d0  jal         func_259740
label_1bb010:
    if (ctx->pc == 0x1BB010u) {
        ctx->pc = 0x1BB014u;
        goto label_1bb014;
    }
    ctx->pc = 0x1BB00Cu;
    SET_GPR_U32(ctx, 31, 0x1BB014u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BB00Cu, 0x1BB014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB014u;
label_1bb014:
    // 0x1bb014: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1bb014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1bb018:
    // 0x1bb018: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb01c:
    // 0x1bb01c: 0xa04410a8  sb          $a0, 0x10A8($v0)
    ctx->pc = 0x1bb01cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 4));
label_1bb020:
    // 0x1bb020: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb024:
    // 0x1bb024: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1bb024u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_1bb028:
    // 0x1bb028: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1bb028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1bb02c:
    // 0x1bb02c: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1bb02cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1bb030:
    // 0x1bb030: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1bb030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb034:
    // 0x1bb034: 0x90a209da  lbu         $v0, 0x9DA($a1)
    ctx->pc = 0x1bb034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2522)));
label_1bb038:
    // 0x1bb038: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1bb038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1bb03c:
    // 0x1bb03c: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x1bb03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_1bb040:
    // 0x1bb040: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1bb040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_1bb044:
    // 0x1bb044: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_1bb048:
    if (ctx->pc == 0x1BB048u) {
        ctx->pc = 0x1BB04Cu;
        goto label_1bb04c;
    }
    ctx->pc = 0x1BB044u;
    {
        const bool branch_taken_0x1bb044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bb044) {
            ctx->pc = 0x1BB0A0u;
            goto label_1bb0a0;
        }
    }
    ctx->pc = 0x1BB04Cu;
label_1bb04c:
    // 0x1bb04c: 0xc067694  jal         func_19DA50
label_1bb050:
    if (ctx->pc == 0x1BB050u) {
        ctx->pc = 0x1BB054u;
        goto label_1bb054;
    }
    ctx->pc = 0x1BB04Cu;
    SET_GPR_U32(ctx, 31, 0x1BB054u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1BB04Cu, 0x1BB054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB054u;
label_1bb054:
    // 0x1bb054: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1bb054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1bb058:
    // 0x1bb058: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1bb058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_1bb05c:
    // 0x1bb05c: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1bb05cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1bb060:
    // 0x1bb060: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1bb060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1bb064:
    // 0x1bb064: 0x244352d8  addiu       $v1, $v0, 0x52D8
    ctx->pc = 0x1bb064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 21208));
label_1bb068:
    // 0x1bb068: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bb068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bb06c:
    // 0x1bb06c: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x1bb06cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1bb070:
    // 0x1bb070: 0x3091ffff  andi        $s1, $a0, 0xFFFF
    ctx->pc = 0x1bb070u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1bb074:
    // 0x1bb074: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb078:
    // 0x1bb078: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x1bb078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_1bb07c:
    // 0x1bb07c: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1bb07cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_1bb080:
    // 0x1bb080: 0x34624000  ori         $v0, $v1, 0x4000
    ctx->pc = 0x1bb080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_1bb084:
    // 0x1bb084: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bb084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1bb088:
    // 0x1bb088: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1bb088u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1bb08c:
    // 0x1bb08c: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x1bb08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_1bb090:
    // 0x1bb090: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1bb090u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1bb094:
    // 0x1bb094: 0xc067b18  jal         func_19EC60
label_1bb098:
    if (ctx->pc == 0x1BB098u) {
        ctx->pc = 0x1BB09Cu;
        goto label_1bb09c;
    }
    ctx->pc = 0x1BB094u;
    SET_GPR_U32(ctx, 31, 0x1BB09Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1BB094u, 0x1BB09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB09Cu;
label_1bb09c:
    // 0x1bb09c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bb09cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bb0a0:
    // 0x1bb0a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bb0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1bb0a4:
    // 0x1bb0a4: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1bb0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1bb0a8:
    // 0x1bb0a8: 0x34660100  ori         $a2, $v1, 0x100
    ctx->pc = 0x1bb0a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_1bb0ac:
    // 0x1bb0ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bb0acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1bb0b0:
    // 0x1bb0b0: 0xac261a64  sw          $a2, 0x1A64($at)
    ctx->pc = 0x1bb0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 6));
label_1bb0b4:
    // 0x1bb0b4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1bb0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb0b8:
    // 0x1bb0b8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1bb0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1bb0bc:
    // 0x1bb0bc: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1bb0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_1bb0c0:
    // 0x1bb0c0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1bb0c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1bb0c4:
    // 0x1bb0c4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1bb0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1bb0c8:
    // 0x1bb0c8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb0cc:
    // 0x1bb0cc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bb0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1bb0d0:
    // 0x1bb0d0: 0xc096b40  jal         func_25AD00
label_1bb0d4:
    if (ctx->pc == 0x1BB0D4u) {
        ctx->pc = 0x1BB0D8u;
        goto label_1bb0d8;
    }
    ctx->pc = 0x1BB0D0u;
    SET_GPR_U32(ctx, 31, 0x1BB0D8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BB0D0u, 0x1BB0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB0D8u;
label_1bb0d8:
    // 0x1bb0d8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1bb0d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bb0dc:
    // 0x1bb0dc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb0e0:
    // 0x1bb0e0: 0xc05cd10  jal         func_173440
label_1bb0e4:
    if (ctx->pc == 0x1BB0E4u) {
        ctx->pc = 0x1BB0E8u;
        goto label_1bb0e8;
    }
    ctx->pc = 0x1BB0E0u;
    SET_GPR_U32(ctx, 31, 0x1BB0E8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BB0E0u, 0x1BB0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB0E8u;
label_1bb0e8:
    // 0x1bb0e8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bb0e8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bb0ec:
    // 0x1bb0ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bb0ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1bb0f0:
    // 0x1bb0f0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb0f4:
    // 0x1bb0f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bb0f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1bb0f8:
    // 0x1bb0f8: 0xc057480  jal         func_15D200
label_1bb0fc:
    if (ctx->pc == 0x1BB0FCu) {
        ctx->pc = 0x1BB100u;
        goto label_1bb100;
    }
    ctx->pc = 0x1BB0F8u;
    SET_GPR_U32(ctx, 31, 0x1BB100u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1BB0F8u, 0x1BB100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB100u;
label_1bb100:
    // 0x1bb100: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb104:
    // 0x1bb104: 0x24820120  addiu       $v0, $a0, 0x120
    ctx->pc = 0x1bb104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_1bb108:
    // 0x1bb108: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bb108u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bb10c:
    // 0x1bb10c: 0xc057a80  jal         func_15EA00
label_1bb110:
    if (ctx->pc == 0x1BB110u) {
        ctx->pc = 0x1BB114u;
        goto label_1bb114;
    }
    ctx->pc = 0x1BB10Cu;
    SET_GPR_U32(ctx, 31, 0x1BB114u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1BB10Cu, 0x1BB114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB114u;
label_1bb114:
    // 0x1bb114: 0x3c064467  lui         $a2, 0x4467
    ctx->pc = 0x1bb114u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17511 << 16));
label_1bb118:
    // 0x1bb118: 0x34c54000  ori         $a1, $a2, 0x4000
    ctx->pc = 0x1bb118u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
label_1bb11c:
    // 0x1bb11c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1bb11cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bb120:
    // 0x1bb120: 0x0  nop
    ctx->pc = 0x1bb120u;
    // NOP
label_1bb124:
    // 0x1bb124: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bb124u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1bb128:
    // 0x1bb128: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1bb128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_1bb12c:
    // 0x1bb12c: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x1bb12cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb130:
    // 0x1bb130: 0xc4e11284  lwc1        $f1, 0x1284($a3)
    ctx->pc = 0x1bb130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bb134:
    // 0x1bb134: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x1bb134u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb138:
    // 0x1bb138: 0xc5000124  lwc1        $f0, 0x124($t0)
    ctx->pc = 0x1bb138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bb13c:
    // 0x1bb13c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bb13cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1bb140:
    // 0x1bb140: 0xe5000124  swc1        $f0, 0x124($t0)
    ctx->pc = 0x1bb140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 292), bits); }
label_1bb144:
    // 0x1bb144: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb148:
    // 0x1bb148: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1bb148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bb14c:
    // 0x1bb14c: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1bb14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bb150:
    // 0x1bb150: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bb150u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bb154:
    // 0x1bb154: 0x0  nop
    ctx->pc = 0x1bb154u;
    // NOP
label_1bb158:
    // 0x1bb158: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1bb15c:
    if (ctx->pc == 0x1BB15Cu) {
        ctx->pc = 0x1BB160u;
        goto label_1bb160;
    }
    ctx->pc = 0x1BB158u;
    {
        const bool branch_taken_0x1bb158 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bb158) {
            ctx->pc = 0x1BB16Cu;
            goto label_1bb16c;
        }
    }
    ctx->pc = 0x1BB160u;
label_1bb160:
    // 0x1bb160: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1bb160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bb164:
    // 0x1bb164: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb168:
    // 0x1bb168: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1bb168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1bb16c:
    // 0x1bb16c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb170:
    // 0x1bb170: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1bb170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bb174:
    // 0x1bb174: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb178:
    // 0x1bb178: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x1bb178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bb17c:
    // 0x1bb17c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bb17cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1bb180:
    // 0x1bb180: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1bb180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_1bb184:
    // 0x1bb184: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1bb184u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1bb188:
    // 0x1bb188: 0xc097530  jal         func_25D4C0
label_1bb18c:
    if (ctx->pc == 0x1BB18Cu) {
        ctx->pc = 0x1BB190u;
        goto label_1bb190;
    }
    ctx->pc = 0x1BB188u;
    SET_GPR_U32(ctx, 31, 0x1BB190u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BB188u, 0x1BB190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB190u;
label_1bb190:
    // 0x1bb190: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb194:
    // 0x1bb194: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1bb194u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1bb198:
    // 0x1bb198: 0x1060025d  beqz        $v1, . + 4 + (0x25D << 2)
label_1bb19c:
    if (ctx->pc == 0x1BB19Cu) {
        ctx->pc = 0x1BB1A0u;
        goto label_1bb1a0;
    }
    ctx->pc = 0x1BB198u;
    {
        const bool branch_taken_0x1bb198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb198) {
            ctx->pc = 0x1BBB10u;
            goto label_1bbb10;
        }
    }
    ctx->pc = 0x1BB1A0u;
label_1bb1a0:
    // 0x1bb1a0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb1a4:
    // 0x1bb1a4: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1bb1a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_1bb1a8:
    // 0x1bb1a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bb1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1bb1ac:
    // 0x1bb1ac: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1bb1acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
label_1bb1b0:
    // 0x1bb1b0: 0x10000257  b           . + 4 + (0x257 << 2)
label_1bb1b4:
    if (ctx->pc == 0x1BB1B4u) {
        ctx->pc = 0x1BB1B8u;
        goto label_1bb1b8;
    }
    ctx->pc = 0x1BB1B0u;
    {
        const bool branch_taken_0x1bb1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb1b0) {
            ctx->pc = 0x1BBB10u;
            goto label_1bbb10;
        }
    }
    ctx->pc = 0x1BB1B8u;
label_1bb1b8:
    // 0x1bb1b8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1bb1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1bb1bc:
    // 0x1bb1bc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb1c0:
    // 0x1bb1c0: 0xa06510a8  sb          $a1, 0x10A8($v1)
    ctx->pc = 0x1bb1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 5));
label_1bb1c4:
    // 0x1bb1c4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb1c8:
    // 0x1bb1c8: 0xac401b68  sw          $zero, 0x1B68($v0)
    ctx->pc = 0x1bb1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 0));
label_1bb1cc:
    // 0x1bb1cc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb1d0:
    // 0x1bb1d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb1d4:
    // 0x1bb1d4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1bb1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1bb1d8:
    // 0x1bb1d8: 0x24060096  addiu       $a2, $zero, 0x96
    ctx->pc = 0x1bb1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_1bb1dc:
    // 0x1bb1dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bb1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb1e0:
    // 0x1bb1e0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bb1e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1bb1e4:
    // 0x1bb1e4: 0xc0965d0  jal         func_259740
label_1bb1e8:
    if (ctx->pc == 0x1BB1E8u) {
        ctx->pc = 0x1BB1ECu;
        goto label_1bb1ec;
    }
    ctx->pc = 0x1BB1E4u;
    SET_GPR_U32(ctx, 31, 0x1BB1ECu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BB1E4u, 0x1BB1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB1ECu;
label_1bb1ec:
    // 0x1bb1ec: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb1f0:
    // 0x1bb1f0: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x1bb1f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_1bb1f4:
    // 0x1bb1f4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1bb1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1bb1f8:
    // 0x1bb1f8: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1bb1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
label_1bb1fc:
    // 0x1bb1fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bb1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1bb200:
    // 0x1bb200: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1bb200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1bb204:
    // 0x1bb204: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1bb204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_1bb208:
    // 0x1bb208: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bb208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1bb20c:
    // 0x1bb20c: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1bb20cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 2));
label_1bb210:
    // 0x1bb210: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb214:
    // 0x1bb214: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1bb214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1bb218:
    // 0x1bb218: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1bb218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_1bb21c:
    // 0x1bb21c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bb21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1bb220:
    // 0x1bb220: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1bb220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1bb224:
    // 0x1bb224: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb228:
    // 0x1bb228: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bb228u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1bb22c:
    // 0x1bb22c: 0xc096b40  jal         func_25AD00
label_1bb230:
    if (ctx->pc == 0x1BB230u) {
        ctx->pc = 0x1BB234u;
        goto label_1bb234;
    }
    ctx->pc = 0x1BB22Cu;
    SET_GPR_U32(ctx, 31, 0x1BB234u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BB22Cu, 0x1BB234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB234u;
label_1bb234:
    // 0x1bb234: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb238:
    // 0x1bb238: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb23c:
    // 0x1bb23c: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1bb23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bb240:
    // 0x1bb240: 0xc05cd58  jal         func_173560
label_1bb244:
    if (ctx->pc == 0x1BB244u) {
        ctx->pc = 0x1BB248u;
        goto label_1bb248;
    }
    ctx->pc = 0x1BB240u;
    SET_GPR_U32(ctx, 31, 0x1BB248u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1BB240u, 0x1BB248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB248u;
label_1bb248:
    // 0x1bb248: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bb248u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1bb24c:
    // 0x1bb24c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb250:
    // 0x1bb250: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bb250u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1bb254:
    // 0x1bb254: 0xc057480  jal         func_15D200
label_1bb258:
    if (ctx->pc == 0x1BB258u) {
        ctx->pc = 0x1BB25Cu;
        goto label_1bb25c;
    }
    ctx->pc = 0x1BB254u;
    SET_GPR_U32(ctx, 31, 0x1BB25Cu);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1BB254u, 0x1BB25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB25Cu;
label_1bb25c:
    // 0x1bb25c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb260:
    // 0x1bb260: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x1bb260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_1bb264:
    // 0x1bb264: 0xc057a80  jal         func_15EA00
label_1bb268:
    if (ctx->pc == 0x1BB268u) {
        ctx->pc = 0x1BB26Cu;
        goto label_1bb26c;
    }
    ctx->pc = 0x1BB264u;
    SET_GPR_U32(ctx, 31, 0x1BB26Cu);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1BB264u, 0x1BB26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB26Cu;
label_1bb26c:
    // 0x1bb26c: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x1bb26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
label_1bb270:
    // 0x1bb270: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x1bb270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1bb274:
    // 0x1bb274: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1bb274u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bb278:
    // 0x1bb278: 0x0  nop
    ctx->pc = 0x1bb278u;
    // NOP
label_1bb27c:
    // 0x1bb27c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bb27cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1bb280:
    // 0x1bb280: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1bb280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_1bb284:
    // 0x1bb284: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb288:
    // 0x1bb288: 0xc4811284  lwc1        $f1, 0x1284($a0)
    ctx->pc = 0x1bb288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bb28c:
    // 0x1bb28c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1bb28cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb290:
    // 0x1bb290: 0xc4a00124  lwc1        $f0, 0x124($a1)
    ctx->pc = 0x1bb290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bb294:
    // 0x1bb294: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bb294u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1bb298:
    // 0x1bb298: 0xe4a00124  swc1        $f0, 0x124($a1)
    ctx->pc = 0x1bb298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 292), bits); }
label_1bb29c:
    // 0x1bb29c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb2a0:
    // 0x1bb2a0: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1bb2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bb2a4:
    // 0x1bb2a4: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1bb2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bb2a8:
    // 0x1bb2a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bb2a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bb2ac:
    // 0x1bb2ac: 0x0  nop
    ctx->pc = 0x1bb2acu;
    // NOP
label_1bb2b0:
    // 0x1bb2b0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1bb2b4:
    if (ctx->pc == 0x1BB2B4u) {
        ctx->pc = 0x1BB2B8u;
        goto label_1bb2b8;
    }
    ctx->pc = 0x1BB2B0u;
    {
        const bool branch_taken_0x1bb2b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bb2b0) {
            ctx->pc = 0x1BB2C4u;
            goto label_1bb2c4;
        }
    }
    ctx->pc = 0x1BB2B8u;
label_1bb2b8:
    // 0x1bb2b8: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1bb2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bb2bc:
    // 0x1bb2bc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb2c0:
    // 0x1bb2c0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1bb2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1bb2c4:
    // 0x1bb2c4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb2c8:
    // 0x1bb2c8: 0xc4811280  lwc1        $f1, 0x1280($a0)
    ctx->pc = 0x1bb2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bb2cc:
    // 0x1bb2cc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb2d0:
    // 0x1bb2d0: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x1bb2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bb2d4:
    // 0x1bb2d4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bb2d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1bb2d8:
    // 0x1bb2d8: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1bb2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
label_1bb2dc:
    // 0x1bb2dc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1bb2dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1bb2e0:
    // 0x1bb2e0: 0xc097530  jal         func_25D4C0
label_1bb2e4:
    if (ctx->pc == 0x1BB2E4u) {
        ctx->pc = 0x1BB2E8u;
        goto label_1bb2e8;
    }
    ctx->pc = 0x1BB2E0u;
    SET_GPR_U32(ctx, 31, 0x1BB2E8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BB2E0u, 0x1BB2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB2E8u;
label_1bb2e8:
    // 0x1bb2e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bb2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb2ec:
    // 0x1bb2ec: 0xc0587a8  jal         func_161EA0
label_1bb2f0:
    if (ctx->pc == 0x1BB2F0u) {
        ctx->pc = 0x1BB2F4u;
        goto label_1bb2f4;
    }
    ctx->pc = 0x1BB2ECu;
    SET_GPR_U32(ctx, 31, 0x1BB2F4u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1BB2ECu, 0x1BB2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB2F4u;
label_1bb2f4:
    // 0x1bb2f4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1bb2f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bb2f8:
    // 0x1bb2f8: 0x10a00022  beqz        $a1, . + 4 + (0x22 << 2)
label_1bb2fc:
    if (ctx->pc == 0x1BB2FCu) {
        ctx->pc = 0x1BB300u;
        goto label_1bb300;
    }
    ctx->pc = 0x1BB2F8u;
    {
        const bool branch_taken_0x1bb2f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb2f8) {
            ctx->pc = 0x1BB384u;
            goto label_1bb384;
        }
    }
    ctx->pc = 0x1BB300u;
label_1bb300:
    // 0x1bb300: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1bb300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb304:
    // 0x1bb304: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1bb304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1bb308:
    // 0x1bb308: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1bb308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_1bb30c:
    // 0x1bb30c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1bb30cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1bb310:
    // 0x1bb310: 0x106001ff  beqz        $v1, . + 4 + (0x1FF << 2)
label_1bb314:
    if (ctx->pc == 0x1BB314u) {
        ctx->pc = 0x1BB318u;
        goto label_1bb318;
    }
    ctx->pc = 0x1BB310u;
    {
        const bool branch_taken_0x1bb310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb310) {
            ctx->pc = 0x1BBB10u;
            goto label_1bbb10;
        }
    }
    ctx->pc = 0x1BB318u;
label_1bb318:
    // 0x1bb318: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1bb318u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb31c:
    // 0x1bb31c: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1bb31cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1bb320:
    // 0x1bb320: 0x3c04feff  lui         $a0, 0xFEFF
    ctx->pc = 0x1bb320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65279 << 16));
label_1bb324:
    // 0x1bb324: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x1bb324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_1bb328:
    // 0x1bb328: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1bb328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1bb32c:
    // 0x1bb32c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1bb32cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1bb330:
    // 0x1bb330: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb334:
    // 0x1bb334: 0x906313a6  lbu         $v1, 0x13A6($v1)
    ctx->pc = 0x1bb334u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
label_1bb338:
    // 0x1bb338: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1bb338u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1bb33c:
    // 0x1bb33c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bb33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bb340:
    // 0x1bb340: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
label_1bb344:
    if (ctx->pc == 0x1BB344u) {
        ctx->pc = 0x1BB348u;
        goto label_1bb348;
    }
    ctx->pc = 0x1BB340u;
    {
        const bool branch_taken_0x1bb340 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bb340) {
            ctx->pc = 0x1BB370u;
            goto label_1bb370;
        }
    }
    ctx->pc = 0x1BB348u;
label_1bb348:
    // 0x1bb348: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bb348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb34c:
    // 0x1bb34c: 0x10a40008  beq         $a1, $a0, . + 4 + (0x8 << 2)
label_1bb350:
    if (ctx->pc == 0x1BB350u) {
        ctx->pc = 0x1BB354u;
        goto label_1bb354;
    }
    ctx->pc = 0x1BB34Cu;
    {
        const bool branch_taken_0x1bb34c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1bb34c) {
            ctx->pc = 0x1BB370u;
            goto label_1bb370;
        }
    }
    ctx->pc = 0x1BB354u;
label_1bb354:
    // 0x1bb354: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bb354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bb358:
    // 0x1bb358: 0x10a301ed  beq         $a1, $v1, . + 4 + (0x1ED << 2)
label_1bb35c:
    if (ctx->pc == 0x1BB35Cu) {
        ctx->pc = 0x1BB360u;
        goto label_1bb360;
    }
    ctx->pc = 0x1BB358u;
    {
        const bool branch_taken_0x1bb358 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bb358) {
            ctx->pc = 0x1BBB10u;
            goto label_1bbb10;
        }
    }
    ctx->pc = 0x1BB360u;
label_1bb360:
    // 0x1bb360: 0x10a001eb  beqz        $a1, . + 4 + (0x1EB << 2)
label_1bb364:
    if (ctx->pc == 0x1BB364u) {
        ctx->pc = 0x1BB368u;
        goto label_1bb368;
    }
    ctx->pc = 0x1BB360u;
    {
        const bool branch_taken_0x1bb360 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb360) {
            ctx->pc = 0x1BBB10u;
            goto label_1bbb10;
        }
    }
    ctx->pc = 0x1BB368u;
label_1bb368:
    // 0x1bb368: 0x100001e9  b           . + 4 + (0x1E9 << 2)
label_1bb36c:
    if (ctx->pc == 0x1BB36Cu) {
        ctx->pc = 0x1BB370u;
        goto label_1bb370;
    }
    ctx->pc = 0x1BB368u;
    {
        const bool branch_taken_0x1bb368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb368) {
            ctx->pc = 0x1BBB10u;
            goto label_1bbb10;
        }
    }
    ctx->pc = 0x1BB370u;
label_1bb370:
    // 0x1bb370: 0xc0c5238  jal         func_3148E0
label_1bb374:
    if (ctx->pc == 0x1BB374u) {
        ctx->pc = 0x1BB378u;
        goto label_1bb378;
    }
    ctx->pc = 0x1BB370u;
    SET_GPR_U32(ctx, 31, 0x1BB378u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BB370u, 0x1BB378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB378u;
label_1bb378:
    // 0x1bb378: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bb378u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bb37c:
    // 0x1bb37c: 0x100001e4  b           . + 4 + (0x1E4 << 2)
label_1bb380:
    if (ctx->pc == 0x1BB380u) {
        ctx->pc = 0x1BB384u;
        goto label_1bb384;
    }
    ctx->pc = 0x1BB37Cu;
    {
        const bool branch_taken_0x1bb37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb37c) {
            ctx->pc = 0x1BBB10u;
            goto label_1bbb10;
        }
    }
    ctx->pc = 0x1BB384u;
label_1bb384:
    // 0x1bb384: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb388:
    // 0x1bb388: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1bb388u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1bb38c:
    // 0x1bb38c: 0x106001e0  beqz        $v1, . + 4 + (0x1E0 << 2)
label_1bb390:
    if (ctx->pc == 0x1BB390u) {
        ctx->pc = 0x1BB394u;
        goto label_1bb394;
    }
    ctx->pc = 0x1BB38Cu;
    {
        const bool branch_taken_0x1bb38c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb38c) {
            ctx->pc = 0x1BBB10u;
            goto label_1bbb10;
        }
    }
    ctx->pc = 0x1BB394u;
label_1bb394:
    // 0x1bb394: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb398:
    // 0x1bb398: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1bb398u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_1bb39c:
    // 0x1bb39c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bb39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1bb3a0:
    // 0x1bb3a0: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1bb3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
label_1bb3a4:
    // 0x1bb3a4: 0x100001da  b           . + 4 + (0x1DA << 2)
label_1bb3a8:
    if (ctx->pc == 0x1BB3A8u) {
        ctx->pc = 0x1BB3ACu;
        goto label_1bb3ac;
    }
    ctx->pc = 0x1BB3A4u;
    {
        const bool branch_taken_0x1bb3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb3a4) {
            ctx->pc = 0x1BBB10u;
            goto label_1bbb10;
        }
    }
    ctx->pc = 0x1BB3ACu;
label_1bb3ac:
    // 0x1bb3ac: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb3b0:
    // 0x1bb3b0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb3b4:
    // 0x1bb3b4: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1bb3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1bb3b8:
    // 0x1bb3b8: 0x24060097  addiu       $a2, $zero, 0x97
    ctx->pc = 0x1bb3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
label_1bb3bc:
    // 0x1bb3bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bb3bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb3c0:
    // 0x1bb3c0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bb3c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1bb3c4:
    // 0x1bb3c4: 0xc0965d0  jal         func_259740
label_1bb3c8:
    if (ctx->pc == 0x1BB3C8u) {
        ctx->pc = 0x1BB3CCu;
        goto label_1bb3cc;
    }
    ctx->pc = 0x1BB3C4u;
    SET_GPR_U32(ctx, 31, 0x1BB3CCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BB3C4u, 0x1BB3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB3CCu;
label_1bb3cc:
    // 0x1bb3cc: 0x3c1040a3  lui         $s0, 0x40A3
    ctx->pc = 0x1bb3ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16547 << 16));
label_1bb3d0:
    // 0x1bb3d0: 0x36033334  ori         $v1, $s0, 0x3334
    ctx->pc = 0x1bb3d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)13108);
label_1bb3d4:
    // 0x1bb3d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bb3d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bb3d8:
    // 0x1bb3d8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb3dc:
    // 0x1bb3dc: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x1bb3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
label_1bb3e0:
    // 0x1bb3e0: 0x8fb20058  lw          $s2, 0x58($sp)
    ctx->pc = 0x1bb3e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb3e4:
    // 0x1bb3e4: 0xae401b60  sw          $zero, 0x1B60($s2)
    ctx->pc = 0x1bb3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7008), GPR_U32(ctx, 0));
label_1bb3e8:
    // 0x1bb3e8: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1bb3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb3ec:
    // 0x1bb3ec: 0x90c40003  lbu         $a0, 0x3($a2)
    ctx->pc = 0x1bb3ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
label_1bb3f0:
    // 0x1bb3f0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1bb3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1bb3f4:
    // 0x1bb3f4: 0xa0c30003  sb          $v1, 0x3($a2)
    ctx->pc = 0x1bb3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 3));
label_1bb3f8:
    // 0x1bb3f8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1bb3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb3fc:
    // 0x1bb3fc: 0x8ca31b6c  lw          $v1, 0x1B6C($a1)
    ctx->pc = 0x1bb3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7020)));
label_1bb400:
    // 0x1bb400: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1bb404:
    if (ctx->pc == 0x1BB404u) {
        ctx->pc = 0x1BB408u;
        goto label_1bb408;
    }
    ctx->pc = 0x1BB400u;
    {
        const bool branch_taken_0x1bb400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb400) {
            ctx->pc = 0x1BB424u;
            goto label_1bb424;
        }
    }
    ctx->pc = 0x1BB408u;
label_1bb408:
    // 0x1bb408: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bb408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1bb40c:
    // 0x1bb40c: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1bb40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1bb410:
    // 0x1bb410: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x1bb410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
label_1bb414:
    // 0x1bb414: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1bb414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1bb418:
    // 0x1bb418: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1bb418u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1bb41c:
    // 0x1bb41c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bb41cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1bb420:
    // 0x1bb420: 0xac241a98  sw          $a0, 0x1A98($at)
    ctx->pc = 0x1bb420u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 4));
label_1bb424:
    // 0x1bb424: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bb424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1bb428:
    // 0x1bb428: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1bb428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1bb42c:
    // 0x1bb42c: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x1bb42cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_1bb430:
    // 0x1bb430: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bb430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1bb434:
    // 0x1bb434: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x1bb434u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 3));
label_1bb438:
    // 0x1bb438: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb43c:
    // 0x1bb43c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1bb43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1bb440:
    // 0x1bb440: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x1bb440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
label_1bb444:
    // 0x1bb444: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1bb444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_1bb448:
    // 0x1bb448: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1bb448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1bb44c:
    // 0x1bb44c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb450:
    // 0x1bb450: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bb450u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1bb454:
    // 0x1bb454: 0xc096b40  jal         func_25AD00
label_1bb458:
    if (ctx->pc == 0x1BB458u) {
        ctx->pc = 0x1BB45Cu;
        goto label_1bb45c;
    }
    ctx->pc = 0x1BB454u;
    SET_GPR_U32(ctx, 31, 0x1BB45Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BB454u, 0x1BB45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB45Cu;
label_1bb45c:
    // 0x1bb45c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bb45cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bb460:
    // 0x1bb460: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb464:
    // 0x1bb464: 0xc05cd10  jal         func_173440
label_1bb468:
    if (ctx->pc == 0x1BB468u) {
        ctx->pc = 0x1BB46Cu;
        goto label_1bb46c;
    }
    ctx->pc = 0x1BB464u;
    SET_GPR_U32(ctx, 31, 0x1BB46Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BB464u, 0x1BB46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB46Cu;
label_1bb46c:
    // 0x1bb46c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bb46cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1bb470:
    // 0x1bb470: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb474:
    // 0x1bb474: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bb474u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1bb478:
    // 0x1bb478: 0xc057480  jal         func_15D200
label_1bb47c:
    if (ctx->pc == 0x1BB47Cu) {
        ctx->pc = 0x1BB480u;
        goto label_1bb480;
    }
    ctx->pc = 0x1BB478u;
    SET_GPR_U32(ctx, 31, 0x1BB480u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1BB478u, 0x1BB480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB480u;
label_1bb480:
    // 0x1bb480: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb484:
    // 0x1bb484: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb488:
    // 0x1bb488: 0x24850120  addiu       $a1, $a0, 0x120
    ctx->pc = 0x1bb488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_1bb48c:
    // 0x1bb48c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1bb48cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1bb490:
    // 0x1bb490: 0x244612c0  addiu       $a2, $v0, 0x12C0
    ctx->pc = 0x1bb490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_1bb494:
    // 0x1bb494: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1bb494u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_1bb498:
    // 0x1bb498: 0xc05cf7c  jal         func_173DF0
label_1bb49c:
    if (ctx->pc == 0x1BB49Cu) {
        ctx->pc = 0x1BB4A0u;
        goto label_1bb4a0;
    }
    ctx->pc = 0x1BB498u;
    SET_GPR_U32(ctx, 31, 0x1BB4A0u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1BB498u, 0x1BB4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB4A0u;
label_1bb4a0:
    // 0x1bb4a0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1bb4a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1bb4a4:
    // 0x1bb4a4: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x1bb4a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb4a8:
    // 0x1bb4a8: 0xc4e11284  lwc1        $f1, 0x1284($a3)
    ctx->pc = 0x1bb4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bb4ac:
    // 0x1bb4ac: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x1bb4acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb4b0:
    // 0x1bb4b0: 0xc5000124  lwc1        $f0, 0x124($t0)
    ctx->pc = 0x1bb4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bb4b4:
    // 0x1bb4b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bb4b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1bb4b8:
    // 0x1bb4b8: 0xe5000124  swc1        $f0, 0x124($t0)
    ctx->pc = 0x1bb4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 292), bits); }
label_1bb4bc:
    // 0x1bb4bc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb4c0:
    // 0x1bb4c0: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1bb4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bb4c4:
    // 0x1bb4c4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb4c8:
    // 0x1bb4c8: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x1bb4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bb4cc:
    // 0x1bb4cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bb4ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1bb4d0:
    // 0x1bb4d0: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1bb4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
label_1bb4d4:
    // 0x1bb4d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb4d8:
    // 0x1bb4d8: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1bb4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bb4dc:
    // 0x1bb4dc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1bb4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bb4e0:
    // 0x1bb4e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bb4e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bb4e4:
    // 0x1bb4e4: 0x0  nop
    ctx->pc = 0x1bb4e4u;
    // NOP
label_1bb4e8:
    // 0x1bb4e8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1bb4ec:
    if (ctx->pc == 0x1BB4ECu) {
        ctx->pc = 0x1BB4F0u;
        goto label_1bb4f0;
    }
    ctx->pc = 0x1BB4E8u;
    {
        const bool branch_taken_0x1bb4e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bb4e8) {
            ctx->pc = 0x1BB508u;
            goto label_1bb508;
        }
    }
    ctx->pc = 0x1BB4F0u;
label_1bb4f0:
    // 0x1bb4f0: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1bb4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bb4f4:
    // 0x1bb4f4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb4f8:
    // 0x1bb4f8: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1bb4f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_1bb4fc:
    // 0x1bb4fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb500:
    // 0x1bb500: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1bb500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb504:
    // 0x1bb504: 0xaca21b60  sw          $v0, 0x1B60($a1)
    ctx->pc = 0x1bb504u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7008), GPR_U32(ctx, 2));
label_1bb508:
    // 0x1bb508: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1bb508u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1bb50c:
    // 0x1bb50c: 0xc097530  jal         func_25D4C0
label_1bb510:
    if (ctx->pc == 0x1BB510u) {
        ctx->pc = 0x1BB514u;
        goto label_1bb514;
    }
    ctx->pc = 0x1BB50Cu;
    SET_GPR_U32(ctx, 31, 0x1BB514u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BB50Cu, 0x1BB514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB514u;
label_1bb514:
    // 0x1bb514: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1bb514u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bb518:
    // 0x1bb518: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x1bb518u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb51c:
    // 0x1bb51c: 0x8ce81b60  lw          $t0, 0x1B60($a3)
    ctx->pc = 0x1bb51cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 7008)));
label_1bb520:
    // 0x1bb520: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
label_1bb524:
    if (ctx->pc == 0x1BB524u) {
        ctx->pc = 0x1BB528u;
        goto label_1bb528;
    }
    ctx->pc = 0x1BB520u;
    {
        const bool branch_taken_0x1bb520 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb520) {
            ctx->pc = 0x1BB53Cu;
            goto label_1bb53c;
        }
    }
    ctx->pc = 0x1BB528u;
label_1bb528:
    // 0x1bb528: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1bb528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1bb52c:
    // 0x1bb52c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb530:
    // 0x1bb530: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1bb530u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1bb534:
    // 0x1bb534: 0x10000176  b           . + 4 + (0x176 << 2)
label_1bb538:
    if (ctx->pc == 0x1BB538u) {
        ctx->pc = 0x1BB53Cu;
        goto label_1bb53c;
    }
    ctx->pc = 0x1BB534u;
    {
        const bool branch_taken_0x1bb534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb534) {
            ctx->pc = 0x1BBB10u;
            goto label_1bbb10;
        }
    }
    ctx->pc = 0x1BB53Cu;
label_1bb53c:
    // 0x1bb53c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bb53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb540:
    // 0x1bb540: 0xc0587a8  jal         func_161EA0
label_1bb544:
    if (ctx->pc == 0x1BB544u) {
        ctx->pc = 0x1BB548u;
        goto label_1bb548;
    }
    ctx->pc = 0x1BB540u;
    SET_GPR_U32(ctx, 31, 0x1BB548u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1BB540u, 0x1BB548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB548u;
label_1bb548:
    // 0x1bb548: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_1bb54c:
    if (ctx->pc == 0x1BB54Cu) {
        ctx->pc = 0x1BB550u;
        goto label_1bb550;
    }
    ctx->pc = 0x1BB548u;
    {
        const bool branch_taken_0x1bb548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb548) {
            ctx->pc = 0x1BB5D4u;
            goto label_1bb5d4;
        }
    }
    ctx->pc = 0x1BB550u;
label_1bb550:
    // 0x1bb550: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1bb550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb554:
    // 0x1bb554: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1bb554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1bb558:
    // 0x1bb558: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1bb558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_1bb55c:
    // 0x1bb55c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1bb55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1bb560:
    // 0x1bb560: 0x1060016b  beqz        $v1, . + 4 + (0x16B << 2)
label_1bb564:
    if (ctx->pc == 0x1BB564u) {
        ctx->pc = 0x1BB568u;
        goto label_1bb568;
    }
    ctx->pc = 0x1BB560u;
    {
        const bool branch_taken_0x1bb560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb560) {
            ctx->pc = 0x1BBB10u;
            goto label_1bbb10;
        }
    }
    ctx->pc = 0x1BB568u;
label_1bb568:
    // 0x1bb568: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1bb568u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb56c:
    // 0x1bb56c: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1bb56cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1bb570:
    // 0x1bb570: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1bb570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
label_1bb574:
    // 0x1bb574: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1bb574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1bb578:
    // 0x1bb578: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x1bb578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1bb57c:
    // 0x1bb57c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1bb57cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1bb580:
    // 0x1bb580: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb584:
    // 0x1bb584: 0x906313a6  lbu         $v1, 0x13A6($v1)
    ctx->pc = 0x1bb584u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
label_1bb588:
    // 0x1bb588: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1bb588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1bb58c:
    // 0x1bb58c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bb58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bb590:
    // 0x1bb590: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_1bb594:
    if (ctx->pc == 0x1BB594u) {
        ctx->pc = 0x1BB598u;
        goto label_1bb598;
    }
    ctx->pc = 0x1BB590u;
    {
        const bool branch_taken_0x1bb590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bb590) {
            ctx->pc = 0x1BB5C0u;
            goto label_1bb5c0;
        }
    }
    ctx->pc = 0x1BB598u;
label_1bb598:
    // 0x1bb598: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bb598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb59c:
    // 0x1bb59c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_1bb5a0:
    if (ctx->pc == 0x1BB5A0u) {
        ctx->pc = 0x1BB5A4u;
        goto label_1bb5a4;
    }
    ctx->pc = 0x1BB59Cu;
    {
        const bool branch_taken_0x1bb59c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bb59c) {
            ctx->pc = 0x1BB5C0u;
            goto label_1bb5c0;
        }
    }
    ctx->pc = 0x1BB5A4u;
label_1bb5a4:
    // 0x1bb5a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bb5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bb5a8:
    // 0x1bb5a8: 0x10830159  beq         $a0, $v1, . + 4 + (0x159 << 2)
label_1bb5ac:
    if (ctx->pc == 0x1BB5ACu) {
        ctx->pc = 0x1BB5B0u;
        goto label_1bb5b0;
    }
    ctx->pc = 0x1BB5A8u;
    {
        const bool branch_taken_0x1bb5a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bb5a8) {
            ctx->pc = 0x1BBB10u;
            goto label_1bbb10;
        }
    }
    ctx->pc = 0x1BB5B0u;
label_1bb5b0:
    // 0x1bb5b0: 0x10800157  beqz        $a0, . + 4 + (0x157 << 2)
label_1bb5b4:
    if (ctx->pc == 0x1BB5B4u) {
        ctx->pc = 0x1BB5B8u;
        goto label_1bb5b8;
    }
    ctx->pc = 0x1BB5B0u;
    {
        const bool branch_taken_0x1bb5b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb5b0) {
            ctx->pc = 0x1BBB10u;
            goto label_1bbb10;
        }
    }
    ctx->pc = 0x1BB5B8u;
label_1bb5b8:
    // 0x1bb5b8: 0x10000155  b           . + 4 + (0x155 << 2)
label_1bb5bc:
    if (ctx->pc == 0x1BB5BCu) {
        ctx->pc = 0x1BB5C0u;
        goto label_1bb5c0;
    }
    ctx->pc = 0x1BB5B8u;
    {
        const bool branch_taken_0x1bb5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb5b8) {
            ctx->pc = 0x1BBB10u;
            goto label_1bbb10;
        }
    }
    ctx->pc = 0x1BB5C0u;
label_1bb5c0:
    // 0x1bb5c0: 0xc0c5238  jal         func_3148E0
label_1bb5c4:
    if (ctx->pc == 0x1BB5C4u) {
        ctx->pc = 0x1BB5C8u;
        goto label_1bb5c8;
    }
    ctx->pc = 0x1BB5C0u;
    SET_GPR_U32(ctx, 31, 0x1BB5C8u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BB5C0u, 0x1BB5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB5C8u;
label_1bb5c8:
    // 0x1bb5c8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bb5c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bb5cc:
    // 0x1bb5cc: 0x10000150  b           . + 4 + (0x150 << 2)
label_1bb5d0:
    if (ctx->pc == 0x1BB5D0u) {
        ctx->pc = 0x1BB5D4u;
        goto label_1bb5d4;
    }
    ctx->pc = 0x1BB5CCu;
    {
        const bool branch_taken_0x1bb5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb5cc) {
            ctx->pc = 0x1BBB10u;
            goto label_1bbb10;
        }
    }
    ctx->pc = 0x1BB5D4u;
label_1bb5d4:
    // 0x1bb5d4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb5d8:
    // 0x1bb5d8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1bb5d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1bb5dc:
    // 0x1bb5dc: 0x1060014c  beqz        $v1, . + 4 + (0x14C << 2)
label_1bb5e0:
    if (ctx->pc == 0x1BB5E0u) {
        ctx->pc = 0x1BB5E4u;
        goto label_1bb5e4;
    }
    ctx->pc = 0x1BB5DCu;
    {
        const bool branch_taken_0x1bb5dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb5dc) {
            ctx->pc = 0x1BBB10u;
            goto label_1bbb10;
        }
    }
    ctx->pc = 0x1BB5E4u;
label_1bb5e4:
    // 0x1bb5e4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb5e8:
    // 0x1bb5e8: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1bb5e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_1bb5ec:
    // 0x1bb5ec: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x1bb5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1bb5f0:
    // 0x1bb5f0: 0xa0850003  sb          $a1, 0x3($a0)
    ctx->pc = 0x1bb5f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 5));
label_1bb5f4:
    // 0x1bb5f4: 0x10000146  b           . + 4 + (0x146 << 2)
label_1bb5f8:
    if (ctx->pc == 0x1BB5F8u) {
        ctx->pc = 0x1BB5FCu;
        goto label_1bb5fc;
    }
    ctx->pc = 0x1BB5F4u;
    {
        const bool branch_taken_0x1bb5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb5f4) {
            ctx->pc = 0x1BBB10u;
            goto label_1bbb10;
        }
    }
    ctx->pc = 0x1BB5FCu;
label_1bb5fc:
    // 0x1bb5fc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb600:
    // 0x1bb600: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb604:
    // 0x1bb604: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1bb604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1bb608:
    // 0x1bb608: 0x24060098  addiu       $a2, $zero, 0x98
    ctx->pc = 0x1bb608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
label_1bb60c:
    // 0x1bb60c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bb60cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb610:
    // 0x1bb610: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bb610u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1bb614:
    // 0x1bb614: 0xc0965d0  jal         func_259740
label_1bb618:
    if (ctx->pc == 0x1BB618u) {
        ctx->pc = 0x1BB61Cu;
        goto label_1bb61c;
    }
    ctx->pc = 0x1BB614u;
    SET_GPR_U32(ctx, 31, 0x1BB61Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BB614u, 0x1BB61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB61Cu;
label_1bb61c:
    // 0x1bb61c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb620:
    // 0x1bb620: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x1bb620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
label_1bb624:
    // 0x1bb624: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x1bb624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
label_1bb628:
    // 0x1bb628: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bb628u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bb62c:
    // 0x1bb62c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb630:
    // 0x1bb630: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x1bb630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_1bb634:
    // 0x1bb634: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb638:
    // 0x1bb638: 0x8c421b64  lw          $v0, 0x1B64($v0)
    ctx->pc = 0x1bb638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7012)));
label_1bb63c:
    // 0x1bb63c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1bb640:
    if (ctx->pc == 0x1BB640u) {
        ctx->pc = 0x1BB644u;
        goto label_1bb644;
    }
    ctx->pc = 0x1BB63Cu;
    {
        const bool branch_taken_0x1bb63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb63c) {
            ctx->pc = 0x1BB668u;
            goto label_1bb668;
        }
    }
    ctx->pc = 0x1BB644u;
label_1bb644:
    // 0x1bb644: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1bb644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_1bb648:
    // 0x1bb648: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1bb648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1bb64c:
    // 0x1bb64c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bb64cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1bb650:
    // 0x1bb650: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb654:
    // 0x1bb654: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb658:
    // 0x1bb658: 0x24640180  addiu       $a0, $v1, 0x180
    ctx->pc = 0x1bb658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
label_1bb65c:
    // 0x1bb65c: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x1bb65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_1bb660:
    // 0x1bb660: 0xc040ed8  jal         func_103B60
label_1bb664:
    if (ctx->pc == 0x1BB664u) {
        ctx->pc = 0x1BB668u;
        goto label_1bb668;
    }
    ctx->pc = 0x1BB660u;
    SET_GPR_U32(ctx, 31, 0x1BB668u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1BB668u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1BB668u) { return; }
    ctx->pc = 0x1BB668u;
label_1bb668:
    // 0x1bb668: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb66c:
    // 0x1bb66c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb670:
    // 0x1bb670: 0x24641b40  addiu       $a0, $v1, 0x1B40
    ctx->pc = 0x1bb670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
label_1bb674:
    // 0x1bb674: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x1bb674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_1bb678:
    // 0x1bb678: 0xc040c9e  jal         func_103278
label_1bb67c:
    if (ctx->pc == 0x1BB67Cu) {
        ctx->pc = 0x1BB680u;
        goto label_1bb680;
    }
    ctx->pc = 0x1BB678u;
    SET_GPR_U32(ctx, 31, 0x1BB680u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1BB680u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1BB680u) { return; }
    ctx->pc = 0x1BB680u;
label_1bb680:
    // 0x1bb680: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb684:
    // 0x1bb684: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1bb684u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_1bb688:
    // 0x1bb688: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bb688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1bb68c:
    // 0x1bb68c: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1bb68cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1bb690:
    // 0x1bb690: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb694:
    // 0x1bb694: 0x8c441b6c  lw          $a0, 0x1B6C($v0)
    ctx->pc = 0x1bb694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
label_1bb698:
    // 0x1bb698: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1bb69c:
    if (ctx->pc == 0x1BB69Cu) {
        ctx->pc = 0x1BB6A0u;
        goto label_1bb6a0;
    }
    ctx->pc = 0x1BB698u;
    {
        const bool branch_taken_0x1bb698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb698) {
            ctx->pc = 0x1BB6BCu;
            goto label_1bb6bc;
        }
    }
    ctx->pc = 0x1BB6A0u;
label_1bb6a0:
    // 0x1bb6a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bb6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1bb6a4:
    // 0x1bb6a4: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1bb6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1bb6a8:
    // 0x1bb6a8: 0x3c06ff7f  lui         $a2, 0xFF7F
    ctx->pc = 0x1bb6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65407 << 16));
label_1bb6ac:
    // 0x1bb6ac: 0x34c5ffff  ori         $a1, $a2, 0xFFFF
    ctx->pc = 0x1bb6acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1bb6b0:
    // 0x1bb6b0: 0x453824  and         $a3, $v0, $a1
    ctx->pc = 0x1bb6b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_1bb6b4:
    // 0x1bb6b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bb6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1bb6b8:
    // 0x1bb6b8: 0xac271a98  sw          $a3, 0x1A98($at)
    ctx->pc = 0x1bb6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 7));
label_1bb6bc:
    // 0x1bb6bc: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x1bb6bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb6c0:
    // 0x1bb6c0: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x1bb6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_1bb6c4:
    // 0x1bb6c4: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x1bb6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
label_1bb6c8:
    // 0x1bb6c8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1bb6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1bb6cc:
    // 0x1bb6cc: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x1bb6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
label_1bb6d0:
    // 0x1bb6d0: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1bb6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb6d4:
    // 0x1bb6d4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1bb6d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1bb6d8:
    // 0x1bb6d8: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1bb6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1bb6dc:
    // 0x1bb6dc: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1bb6dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_1bb6e0:
    // 0x1bb6e0: 0xc096b40  jal         func_25AD00
label_1bb6e4:
    if (ctx->pc == 0x1BB6E4u) {
        ctx->pc = 0x1BB6E8u;
        goto label_1bb6e8;
    }
    ctx->pc = 0x1BB6E0u;
    SET_GPR_U32(ctx, 31, 0x1BB6E8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BB6E0u, 0x1BB6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB6E8u;
label_1bb6e8:
    // 0x1bb6e8: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1bb6e8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bb6ec:
    // 0x1bb6ec: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x1bb6ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb6f0:
    // 0x1bb6f0: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x1bb6f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_1bb6f4:
    // 0x1bb6f4: 0xc05cd10  jal         func_173440
label_1bb6f8:
    if (ctx->pc == 0x1BB6F8u) {
        ctx->pc = 0x1BB6FCu;
        goto label_1bb6fc;
    }
    ctx->pc = 0x1BB6F4u;
    SET_GPR_U32(ctx, 31, 0x1BB6FCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BB6F4u, 0x1BB6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB6FCu;
label_1bb6fc:
    // 0x1bb6fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bb6fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1bb700:
    // 0x1bb700: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb704:
    // 0x1bb704: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bb704u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1bb708:
    // 0x1bb708: 0xc057480  jal         func_15D200
label_1bb70c:
    if (ctx->pc == 0x1BB70Cu) {
        ctx->pc = 0x1BB710u;
        goto label_1bb710;
    }
    ctx->pc = 0x1BB708u;
    SET_GPR_U32(ctx, 31, 0x1BB710u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1BB708u, 0x1BB710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB710u;
label_1bb710:
    // 0x1bb710: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb714:
    // 0x1bb714: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb718:
    // 0x1bb718: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1bb718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1bb71c:
    // 0x1bb71c: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1bb71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_1bb720:
    // 0x1bb720: 0xc05cf7c  jal         func_173DF0
label_1bb724:
    if (ctx->pc == 0x1BB724u) {
        ctx->pc = 0x1BB728u;
        goto label_1bb728;
    }
    ctx->pc = 0x1BB720u;
    SET_GPR_U32(ctx, 31, 0x1BB728u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1BB720u, 0x1BB728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB728u;
label_1bb728:
    // 0x1bb728: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1bb728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1bb72c:
    // 0x1bb72c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb730:
    // 0x1bb730: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1bb730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bb734:
    // 0x1bb734: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb738:
    // 0x1bb738: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1bb738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bb73c:
    // 0x1bb73c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bb73cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1bb740:
    // 0x1bb740: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1bb740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1bb744:
    // 0x1bb744: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb748:
    // 0x1bb748: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x1bb748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bb74c:
    // 0x1bb74c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb750:
    // 0x1bb750: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x1bb750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bb754:
    // 0x1bb754: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bb754u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1bb758:
    // 0x1bb758: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1bb758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_1bb75c:
    // 0x1bb75c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb760:
    // 0x1bb760: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1bb760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bb764:
    // 0x1bb764: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1bb764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bb768:
    // 0x1bb768: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bb768u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bb76c:
    // 0x1bb76c: 0x0  nop
    ctx->pc = 0x1bb76cu;
    // NOP
label_1bb770:
    // 0x1bb770: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1bb774:
    if (ctx->pc == 0x1BB774u) {
        ctx->pc = 0x1BB778u;
        goto label_1bb778;
    }
    ctx->pc = 0x1BB770u;
    {
        const bool branch_taken_0x1bb770 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bb770) {
            ctx->pc = 0x1BB790u;
            goto label_1bb790;
        }
    }
    ctx->pc = 0x1BB778u;
label_1bb778:
    // 0x1bb778: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1bb778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bb77c:
    // 0x1bb77c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb780:
    // 0x1bb780: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1bb780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1bb784:
    // 0x1bb784: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb788:
    // 0x1bb788: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb78c:
    // 0x1bb78c: 0xac821b60  sw          $v0, 0x1B60($a0)
    ctx->pc = 0x1bb78cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 2));
label_1bb790:
    // 0x1bb790: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1bb790u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1bb794:
    // 0x1bb794: 0xc097530  jal         func_25D4C0
label_1bb798:
    if (ctx->pc == 0x1BB798u) {
        ctx->pc = 0x1BB79Cu;
        goto label_1bb79c;
    }
    ctx->pc = 0x1BB794u;
    SET_GPR_U32(ctx, 31, 0x1BB79Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BB794u, 0x1BB79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB79Cu;
label_1bb79c:
    // 0x1bb79c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb7a0:
    // 0x1bb7a0: 0x8c631b60  lw          $v1, 0x1B60($v1)
    ctx->pc = 0x1bb7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
label_1bb7a4:
    // 0x1bb7a4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1bb7a8:
    if (ctx->pc == 0x1BB7A8u) {
        ctx->pc = 0x1BB7ACu;
        goto label_1bb7ac;
    }
    ctx->pc = 0x1BB7A4u;
    {
        const bool branch_taken_0x1bb7a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb7a4) {
            ctx->pc = 0x1BB7C4u;
            goto label_1bb7c4;
        }
    }
    ctx->pc = 0x1BB7ACu;
label_1bb7ac:
    // 0x1bb7ac: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb7b0:
    // 0x1bb7b0: 0x90910003  lbu         $s1, 0x3($a0)
    ctx->pc = 0x1bb7b0u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_1bb7b4:
    // 0x1bb7b4: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1bb7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1bb7b8:
    // 0x1bb7b8: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1bb7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
label_1bb7bc:
    // 0x1bb7bc: 0x100000d4  b           . + 4 + (0xD4 << 2)
label_1bb7c0:
    if (ctx->pc == 0x1BB7C0u) {
        ctx->pc = 0x1BB7C4u;
        goto label_1bb7c4;
    }
    ctx->pc = 0x1BB7BCu;
    {
        const bool branch_taken_0x1bb7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb7bc) {
            ctx->pc = 0x1BBB10u;
            goto label_1bbb10;
        }
    }
    ctx->pc = 0x1BB7C4u;
label_1bb7c4:
    // 0x1bb7c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bb7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb7c8:
    // 0x1bb7c8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1bb7c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1bb7cc:
    // 0x1bb7cc: 0xc0587a8  jal         func_161EA0
label_1bb7d0:
    if (ctx->pc == 0x1BB7D0u) {
        ctx->pc = 0x1BB7D4u;
        goto label_1bb7d4;
    }
    ctx->pc = 0x1BB7CCu;
    SET_GPR_U32(ctx, 31, 0x1BB7D4u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1BB7CCu, 0x1BB7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB7D4u;
label_1bb7d4:
    // 0x1bb7d4: 0x104000ce  beqz        $v0, . + 4 + (0xCE << 2)
label_1bb7d8:
    if (ctx->pc == 0x1BB7D8u) {
        ctx->pc = 0x1BB7DCu;
        goto label_1bb7dc;
    }
    ctx->pc = 0x1BB7D4u;
    {
        const bool branch_taken_0x1bb7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb7d4) {
            ctx->pc = 0x1BBB10u;
            goto label_1bbb10;
        }
    }
    ctx->pc = 0x1BB7DCu;
label_1bb7dc:
    // 0x1bb7dc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb7e0:
    // 0x1bb7e0: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1bb7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1bb7e4:
    // 0x1bb7e4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1bb7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_1bb7e8:
    // 0x1bb7e8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1bb7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1bb7ec:
    // 0x1bb7ec: 0x106000c8  beqz        $v1, . + 4 + (0xC8 << 2)
label_1bb7f0:
    if (ctx->pc == 0x1BB7F0u) {
        ctx->pc = 0x1BB7F4u;
        goto label_1bb7f4;
    }
    ctx->pc = 0x1BB7ECu;
    {
        const bool branch_taken_0x1bb7ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb7ec) {
            ctx->pc = 0x1BBB10u;
            goto label_1bbb10;
        }
    }
    ctx->pc = 0x1BB7F4u;
label_1bb7f4:
    // 0x1bb7f4: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1bb7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb7f8:
    // 0x1bb7f8: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1bb7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1bb7fc:
    // 0x1bb7fc: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1bb7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
label_1bb800:
    // 0x1bb800: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1bb800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1bb804:
    // 0x1bb804: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x1bb804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1bb808:
    // 0x1bb808: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1bb808u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1bb80c:
    // 0x1bb80c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb810:
    // 0x1bb810: 0x908513a6  lbu         $a1, 0x13A6($a0)
    ctx->pc = 0x1bb810u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5030)));
label_1bb814:
    // 0x1bb814: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bb814u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1bb818:
    // 0x1bb818: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bb818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bb81c:
    // 0x1bb81c: 0x10a4000b  beq         $a1, $a0, . + 4 + (0xB << 2)
label_1bb820:
    if (ctx->pc == 0x1BB820u) {
        ctx->pc = 0x1BB824u;
        goto label_1bb824;
    }
    ctx->pc = 0x1BB81Cu;
    {
        const bool branch_taken_0x1bb81c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1bb81c) {
            ctx->pc = 0x1BB84Cu;
            goto label_1bb84c;
        }
    }
    ctx->pc = 0x1BB824u;
label_1bb824:
    // 0x1bb824: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bb824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb828:
    // 0x1bb828: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
label_1bb82c:
    if (ctx->pc == 0x1BB82Cu) {
        ctx->pc = 0x1BB830u;
        goto label_1bb830;
    }
    ctx->pc = 0x1BB828u;
    {
        const bool branch_taken_0x1bb828 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bb828) {
            ctx->pc = 0x1BB84Cu;
            goto label_1bb84c;
        }
    }
    ctx->pc = 0x1BB830u;
label_1bb830:
    // 0x1bb830: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1bb830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bb834:
    // 0x1bb834: 0x10a400b6  beq         $a1, $a0, . + 4 + (0xB6 << 2)
label_1bb838:
    if (ctx->pc == 0x1BB838u) {
        ctx->pc = 0x1BB83Cu;
        goto label_1bb83c;
    }
    ctx->pc = 0x1BB834u;
    {
        const bool branch_taken_0x1bb834 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1bb834) {
            ctx->pc = 0x1BBB10u;
            goto label_1bbb10;
        }
    }
    ctx->pc = 0x1BB83Cu;
label_1bb83c:
    // 0x1bb83c: 0x10a000b4  beqz        $a1, . + 4 + (0xB4 << 2)
label_1bb840:
    if (ctx->pc == 0x1BB840u) {
        ctx->pc = 0x1BB844u;
        goto label_1bb844;
    }
    ctx->pc = 0x1BB83Cu;
    {
        const bool branch_taken_0x1bb83c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb83c) {
            ctx->pc = 0x1BBB10u;
            goto label_1bbb10;
        }
    }
    ctx->pc = 0x1BB844u;
label_1bb844:
    // 0x1bb844: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_1bb848:
    if (ctx->pc == 0x1BB848u) {
        ctx->pc = 0x1BB84Cu;
        goto label_1bb84c;
    }
    ctx->pc = 0x1BB844u;
    {
        const bool branch_taken_0x1bb844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb844) {
            ctx->pc = 0x1BBB10u;
            goto label_1bbb10;
        }
    }
    ctx->pc = 0x1BB84Cu;
label_1bb84c:
    // 0x1bb84c: 0xc0c5238  jal         func_3148E0
label_1bb850:
    if (ctx->pc == 0x1BB850u) {
        ctx->pc = 0x1BB854u;
        goto label_1bb854;
    }
    ctx->pc = 0x1BB84Cu;
    SET_GPR_U32(ctx, 31, 0x1BB854u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BB84Cu, 0x1BB854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB854u;
label_1bb854:
    // 0x1bb854: 0x100000ae  b           . + 4 + (0xAE << 2)
label_1bb858:
    if (ctx->pc == 0x1BB858u) {
        ctx->pc = 0x1BB85Cu;
        goto label_1bb85c;
    }
    ctx->pc = 0x1BB854u;
    {
        const bool branch_taken_0x1bb854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb854) {
            ctx->pc = 0x1BBB10u;
            goto label_1bbb10;
        }
    }
    ctx->pc = 0x1BB85Cu;
label_1bb85c:
    // 0x1bb85c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb860:
    // 0x1bb860: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb864:
    // 0x1bb864: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1bb864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1bb868:
    // 0x1bb868: 0x24060099  addiu       $a2, $zero, 0x99
    ctx->pc = 0x1bb868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
label_1bb86c:
    // 0x1bb86c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bb86cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb870:
    // 0x1bb870: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bb870u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1bb874:
    // 0x1bb874: 0xc0965d0  jal         func_259740
label_1bb878:
    if (ctx->pc == 0x1BB878u) {
        ctx->pc = 0x1BB87Cu;
        goto label_1bb87c;
    }
    ctx->pc = 0x1BB874u;
    SET_GPR_U32(ctx, 31, 0x1BB87Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BB874u, 0x1BB87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB87Cu;
label_1bb87c:
    // 0x1bb87c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb880:
    // 0x1bb880: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1bb880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bb884:
    // 0x1bb884: 0x3c02c332  lui         $v0, 0xC332
    ctx->pc = 0x1bb884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49970 << 16));
label_1bb888:
    // 0x1bb888: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1bb888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1bb88c:
    // 0x1bb88c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bb88cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bb890:
    // 0x1bb890: 0x0  nop
    ctx->pc = 0x1bb890u;
    // NOP
label_1bb894:
    // 0x1bb894: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bb894u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bb898:
    // 0x1bb898: 0x0  nop
    ctx->pc = 0x1bb898u;
    // NOP
label_1bb89c:
    // 0x1bb89c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1bb8a0:
    if (ctx->pc == 0x1BB8A0u) {
        ctx->pc = 0x1BB8A4u;
        goto label_1bb8a4;
    }
    ctx->pc = 0x1BB89Cu;
    {
        const bool branch_taken_0x1bb89c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bb89c) {
            ctx->pc = 0x1BB8ACu;
            goto label_1bb8ac;
        }
    }
    ctx->pc = 0x1BB8A4u;
label_1bb8a4:
    // 0x1bb8a4: 0xc05772c  jal         func_15DCB0
label_1bb8a8:
    if (ctx->pc == 0x1BB8A8u) {
        ctx->pc = 0x1BB8ACu;
        goto label_1bb8ac;
    }
    ctx->pc = 0x1BB8A4u;
    SET_GPR_U32(ctx, 31, 0x1BB8ACu);
    ctx->pc = 0x15DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DCB0u, 0x1BB8A4u, 0x1BB8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB8ACu;
label_1bb8ac:
    // 0x1bb8ac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb8b0:
    // 0x1bb8b0: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x1bb8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
label_1bb8b4:
    // 0x1bb8b4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb8b8:
    // 0x1bb8b8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bb8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1bb8bc:
    // 0x1bb8bc: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1bb8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_1bb8c0:
    // 0x1bb8c0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bb8c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1bb8c4:
    // 0x1bb8c4: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_1bb8c8:
    if (ctx->pc == 0x1BB8C8u) {
        ctx->pc = 0x1BB8CCu;
        goto label_1bb8cc;
    }
    ctx->pc = 0x1BB8C4u;
    {
        const bool branch_taken_0x1bb8c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb8c4) {
            ctx->pc = 0x1BB92Cu;
            goto label_1bb92c;
        }
    }
    ctx->pc = 0x1BB8CCu;
label_1bb8cc:
    // 0x1bb8cc: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1bb8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb8d0:
    // 0x1bb8d0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1bb8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1bb8d4:
    // 0x1bb8d4: 0x3c04feff  lui         $a0, 0xFEFF
    ctx->pc = 0x1bb8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65279 << 16));
label_1bb8d8:
    // 0x1bb8d8: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x1bb8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_1bb8dc:
    // 0x1bb8dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1bb8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1bb8e0:
    // 0x1bb8e0: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1bb8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_1bb8e4:
    // 0x1bb8e4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1bb8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb8e8:
    // 0x1bb8e8: 0x90a613a6  lbu         $a2, 0x13A6($a1)
    ctx->pc = 0x1bb8e8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5030)));
label_1bb8ec:
    // 0x1bb8ec: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x1bb8ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1bb8f0:
    // 0x1bb8f0: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1bb8f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bb8f4:
    // 0x1bb8f4: 0x10e8000b  beq         $a3, $t0, . + 4 + (0xB << 2)
label_1bb8f8:
    if (ctx->pc == 0x1BB8F8u) {
        ctx->pc = 0x1BB8FCu;
        goto label_1bb8fc;
    }
    ctx->pc = 0x1BB8F4u;
    {
        const bool branch_taken_0x1bb8f4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 8));
        if (branch_taken_0x1bb8f4) {
            ctx->pc = 0x1BB924u;
            goto label_1bb924;
        }
    }
    ctx->pc = 0x1BB8FCu;
label_1bb8fc:
    // 0x1bb8fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb900:
    // 0x1bb900: 0x10e20008  beq         $a3, $v0, . + 4 + (0x8 << 2)
label_1bb904:
    if (ctx->pc == 0x1BB904u) {
        ctx->pc = 0x1BB908u;
        goto label_1bb908;
    }
    ctx->pc = 0x1BB900u;
    {
        const bool branch_taken_0x1bb900 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bb900) {
            ctx->pc = 0x1BB924u;
            goto label_1bb924;
        }
    }
    ctx->pc = 0x1BB908u;
label_1bb908:
    // 0x1bb908: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1bb908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bb90c:
    // 0x1bb90c: 0x10e40007  beq         $a3, $a0, . + 4 + (0x7 << 2)
label_1bb910:
    if (ctx->pc == 0x1BB910u) {
        ctx->pc = 0x1BB914u;
        goto label_1bb914;
    }
    ctx->pc = 0x1BB90Cu;
    {
        const bool branch_taken_0x1bb90c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x1bb90c) {
            ctx->pc = 0x1BB92Cu;
            goto label_1bb92c;
        }
    }
    ctx->pc = 0x1BB914u;
label_1bb914:
    // 0x1bb914: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
label_1bb918:
    if (ctx->pc == 0x1BB918u) {
        ctx->pc = 0x1BB91Cu;
        goto label_1bb91c;
    }
    ctx->pc = 0x1BB914u;
    {
        const bool branch_taken_0x1bb914 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb914) {
            ctx->pc = 0x1BB92Cu;
            goto label_1bb92c;
        }
    }
    ctx->pc = 0x1BB91Cu;
label_1bb91c:
    // 0x1bb91c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1bb920:
    if (ctx->pc == 0x1BB920u) {
        ctx->pc = 0x1BB924u;
        goto label_1bb924;
    }
    ctx->pc = 0x1BB91Cu;
    {
        const bool branch_taken_0x1bb91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb91c) {
            ctx->pc = 0x1BB92Cu;
            goto label_1bb92c;
        }
    }
    ctx->pc = 0x1BB924u;
label_1bb924:
    // 0x1bb924: 0xc0c5238  jal         func_3148E0
label_1bb928:
    if (ctx->pc == 0x1BB928u) {
        ctx->pc = 0x1BB92Cu;
        goto label_1bb92c;
    }
    ctx->pc = 0x1BB924u;
    SET_GPR_U32(ctx, 31, 0x1BB92Cu);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BB924u, 0x1BB92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB92Cu;
label_1bb92c:
    // 0x1bb92c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb930:
    // 0x1bb930: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1bb930u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_1bb934:
    // 0x1bb934: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bb934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1bb938:
    // 0x1bb938: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1bb938u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1bb93c:
    // 0x1bb93c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb940:
    // 0x1bb940: 0x8c821b6c  lw          $v0, 0x1B6C($a0)
    ctx->pc = 0x1bb940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7020)));
label_1bb944:
    // 0x1bb944: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1bb948:
    if (ctx->pc == 0x1BB948u) {
        ctx->pc = 0x1BB94Cu;
        goto label_1bb94c;
    }
    ctx->pc = 0x1BB944u;
    {
        const bool branch_taken_0x1bb944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb944) {
            ctx->pc = 0x1BB968u;
            goto label_1bb968;
        }
    }
    ctx->pc = 0x1BB94Cu;
label_1bb94c:
    // 0x1bb94c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bb94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1bb950:
    // 0x1bb950: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1bb950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1bb954:
    // 0x1bb954: 0x3c04ff7f  lui         $a0, 0xFF7F
    ctx->pc = 0x1bb954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65407 << 16));
label_1bb958:
    // 0x1bb958: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x1bb958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_1bb95c:
    // 0x1bb95c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1bb95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1bb960:
    // 0x1bb960: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bb960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1bb964:
    // 0x1bb964: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1bb964u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_1bb968:
    // 0x1bb968: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb96c:
    // 0x1bb96c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bb96cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1bb970:
    // 0x1bb970: 0xc096b40  jal         func_25AD00
label_1bb974:
    if (ctx->pc == 0x1BB974u) {
        ctx->pc = 0x1BB978u;
        goto label_1bb978;
    }
    ctx->pc = 0x1BB970u;
    SET_GPR_U32(ctx, 31, 0x1BB978u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BB970u, 0x1BB978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB978u;
label_1bb978:
    // 0x1bb978: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb97c:
    // 0x1bb97c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bb97cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bb980:
    // 0x1bb980: 0xc05cd10  jal         func_173440
label_1bb984:
    if (ctx->pc == 0x1BB984u) {
        ctx->pc = 0x1BB988u;
        goto label_1bb988;
    }
    ctx->pc = 0x1BB980u;
    SET_GPR_U32(ctx, 31, 0x1BB988u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BB980u, 0x1BB988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB988u;
label_1bb988:
    // 0x1bb988: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bb988u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bb98c:
    // 0x1bb98c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bb98cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1bb990:
    // 0x1bb990: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb994:
    // 0x1bb994: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bb994u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bb998:
    // 0x1bb998: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bb998u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1bb99c:
    // 0x1bb99c: 0xc0573d8  jal         func_15CF60
label_1bb9a0:
    if (ctx->pc == 0x1BB9A0u) {
        ctx->pc = 0x1BB9A4u;
        goto label_1bb9a4;
    }
    ctx->pc = 0x1BB99Cu;
    SET_GPR_U32(ctx, 31, 0x1BB9A4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1BB99Cu, 0x1BB9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB9A4u;
label_1bb9a4:
    // 0x1bb9a4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1bb9a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1bb9a8:
    // 0x1bb9a8: 0xc097530  jal         func_25D4C0
label_1bb9ac:
    if (ctx->pc == 0x1BB9ACu) {
        ctx->pc = 0x1BB9B0u;
        goto label_1bb9b0;
    }
    ctx->pc = 0x1BB9A8u;
    SET_GPR_U32(ctx, 31, 0x1BB9B0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BB9A8u, 0x1BB9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB9B0u;
label_1bb9b0:
    // 0x1bb9b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bb9b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bb9b4:
    // 0x1bb9b4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb9b8:
    // 0x1bb9b8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb9bc:
    // 0x1bb9bc: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1bb9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1bb9c0:
    // 0x1bb9c0: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1bb9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_1bb9c4:
    // 0x1bb9c4: 0xc05cf7c  jal         func_173DF0
label_1bb9c8:
    if (ctx->pc == 0x1BB9C8u) {
        ctx->pc = 0x1BB9CCu;
        goto label_1bb9cc;
    }
    ctx->pc = 0x1BB9C4u;
    SET_GPR_U32(ctx, 31, 0x1BB9CCu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1BB9C4u, 0x1BB9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB9CCu;
label_1bb9cc:
    // 0x1bb9cc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1bb9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1bb9d0:
    // 0x1bb9d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bb9d4:
    // 0x1bb9d4: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1bb9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bb9d8:
    // 0x1bb9d8: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x1bb9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
label_1bb9dc:
    // 0x1bb9dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bb9dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bb9e0:
    // 0x1bb9e0: 0x0  nop
    ctx->pc = 0x1bb9e0u;
    // NOP
label_1bb9e4:
    // 0x1bb9e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1bb9e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1bb9e8:
    // 0x1bb9e8: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1bb9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bb9ec:
    // 0x1bb9ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1bb9ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bb9f0:
    // 0x1bb9f0: 0x0  nop
    ctx->pc = 0x1bb9f0u;
    // NOP
label_1bb9f4:
    // 0x1bb9f4: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_1bb9f8:
    if (ctx->pc == 0x1BB9F8u) {
        ctx->pc = 0x1BB9FCu;
        goto label_1bb9fc;
    }
    ctx->pc = 0x1BB9F4u;
    {
        const bool branch_taken_0x1bb9f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bb9f4) {
            ctx->pc = 0x1BBA78u;
            goto label_1bba78;
        }
    }
    ctx->pc = 0x1BB9FCu;
label_1bb9fc:
    // 0x1bb9fc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bba00:
    // 0x1bba00: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bba00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bba04:
    // 0x1bba04: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bba04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bba08:
    // 0x1bba08: 0x24841b40  addiu       $a0, $a0, 0x1B40
    ctx->pc = 0x1bba08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6976));
label_1bba0c:
    // 0x1bba0c: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1bba0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1bba10:
    // 0x1bba10: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x1bba10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
label_1bba14:
    // 0x1bba14: 0xc0675b0  jal         func_19D6C0
label_1bba18:
    if (ctx->pc == 0x1BBA18u) {
        ctx->pc = 0x1BBA1Cu;
        goto label_1bba1c;
    }
    ctx->pc = 0x1BBA14u;
    SET_GPR_U32(ctx, 31, 0x1BBA1Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1BBA14u, 0x1BBA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBA1Cu;
label_1bba1c:
    // 0x1bba1c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bba1cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bba20:
    // 0x1bba20: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bba20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bba24:
    // 0x1bba24: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bba24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bba28:
    // 0x1bba28: 0xc48c1b40  lwc1        $f12, 0x1B40($a0)
    ctx->pc = 0x1bba28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bba2c:
    // 0x1bba2c: 0xc46d1b48  lwc1        $f13, 0x1B48($v1)
    ctx->pc = 0x1bba2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1bba30:
    // 0x1bba30: 0xc0455e6  jal         func_115798
label_1bba34:
    if (ctx->pc == 0x1BBA34u) {
        ctx->pc = 0x1BBA38u;
        goto label_1bba38;
    }
    ctx->pc = 0x1BBA30u;
    SET_GPR_U32(ctx, 31, 0x1BBA38u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1BBA30u, 0x1BBA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBA38u;
label_1bba38:
    // 0x1bba38: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1bba38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bba3c:
    // 0x1bba3c: 0xe4c01290  swc1        $f0, 0x1290($a2)
    ctx->pc = 0x1bba3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4752), bits); }
label_1bba40:
    // 0x1bba40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bba40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bba44:
    // 0x1bba44: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bba44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bba48:
    // 0x1bba48: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1bba48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_1bba4c:
    // 0x1bba4c: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x1bba4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1bba50:
    // 0x1bba50: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bba50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bba54:
    // 0x1bba54: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1bba54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1bba58:
    // 0x1bba58: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bba58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bba5c:
    // 0x1bba5c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1bba5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1bba60:
    // 0x1bba60: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bba60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bba64:
    // 0x1bba64: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1bba64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1bba68:
    // 0x1bba68: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1bba68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bba6c:
    // 0x1bba6c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1bba6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_1bba70:
    // 0x1bba70: 0x10000027  b           . + 4 + (0x27 << 2)
label_1bba74:
    if (ctx->pc == 0x1BBA74u) {
        ctx->pc = 0x1BBA78u;
        goto label_1bba78;
    }
    ctx->pc = 0x1BBA70u;
    {
        const bool branch_taken_0x1bba70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bba70) {
            ctx->pc = 0x1BBB10u;
            goto label_1bbb10;
        }
    }
    ctx->pc = 0x1BBA78u;
label_1bba78:
    // 0x1bba78: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bba78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bba7c:
    // 0x1bba7c: 0x246412c0  addiu       $a0, $v1, 0x12C0
    ctx->pc = 0x1bba7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
label_1bba80:
    // 0x1bba80: 0xc057b54  jal         func_15ED50
label_1bba84:
    if (ctx->pc == 0x1BBA84u) {
        ctx->pc = 0x1BBA88u;
        goto label_1bba88;
    }
    ctx->pc = 0x1BBA80u;
    SET_GPR_U32(ctx, 31, 0x1BBA88u);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x1BBA80u, 0x1BBA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBA88u;
label_1bba88:
    // 0x1bba88: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bba88u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bba8c:
    // 0x1bba8c: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
label_1bba90:
    if (ctx->pc == 0x1BBA90u) {
        ctx->pc = 0x1BBA94u;
        goto label_1bba94;
    }
    ctx->pc = 0x1BBA8Cu;
    {
        const bool branch_taken_0x1bba8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bba8c) {
            ctx->pc = 0x1BBB10u;
            goto label_1bbb10;
        }
    }
    ctx->pc = 0x1BBA94u;
label_1bba94:
    // 0x1bba94: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bba94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bba98:
    // 0x1bba98: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x1bba98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
label_1bba9c:
    // 0x1bba9c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bba9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1bbaa0:
    // 0x1bbaa0: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x1bbaa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_1bbaa4:
    // 0x1bbaa4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_1bbaa8:
    if (ctx->pc == 0x1BBAA8u) {
        ctx->pc = 0x1BBAACu;
        goto label_1bbaac;
    }
    ctx->pc = 0x1BBAA4u;
    {
        const bool branch_taken_0x1bbaa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbaa4) {
            ctx->pc = 0x1BBAD0u;
            goto label_1bbad0;
        }
    }
    ctx->pc = 0x1BBAACu;
label_1bbaac:
    // 0x1bbaac: 0xc0585dc  jal         func_161770
label_1bbab0:
    if (ctx->pc == 0x1BBAB0u) {
        ctx->pc = 0x1BBAB4u;
        goto label_1bbab4;
    }
    ctx->pc = 0x1BBAACu;
    SET_GPR_U32(ctx, 31, 0x1BBAB4u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x1BBAACu, 0x1BBAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBAB4u;
label_1bbab4:
    // 0x1bbab4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bbab4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bbab8:
    // 0x1bbab8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1bbabc:
    if (ctx->pc == 0x1BBABCu) {
        ctx->pc = 0x1BBAC0u;
        goto label_1bbac0;
    }
    ctx->pc = 0x1BBAB8u;
    {
        const bool branch_taken_0x1bbab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbab8) {
            ctx->pc = 0x1BBAD0u;
            goto label_1bbad0;
        }
    }
    ctx->pc = 0x1BBAC0u;
label_1bbac0:
    // 0x1bbac0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bbac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bbac4:
    // 0x1bbac4: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x1bbac4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_1bbac8:
    // 0x1bbac8: 0x10000011  b           . + 4 + (0x11 << 2)
label_1bbacc:
    if (ctx->pc == 0x1BBACCu) {
        ctx->pc = 0x1BBAD0u;
        goto label_1bbad0;
    }
    ctx->pc = 0x1BBAC8u;
    {
        const bool branch_taken_0x1bbac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbac8) {
            ctx->pc = 0x1BBB10u;
            goto label_1bbb10;
        }
    }
    ctx->pc = 0x1BBAD0u;
label_1bbad0:
    // 0x1bbad0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bbad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bbad4:
    // 0x1bbad4: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x1bbad4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
label_1bbad8:
    // 0x1bbad8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1bbadc:
    if (ctx->pc == 0x1BBADCu) {
        ctx->pc = 0x1BBAE0u;
        goto label_1bbae0;
    }
    ctx->pc = 0x1BBAD8u;
    {
        const bool branch_taken_0x1bbad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbad8) {
            ctx->pc = 0x1BBB10u;
            goto label_1bbb10;
        }
    }
    ctx->pc = 0x1BBAE0u;
label_1bbae0:
    // 0x1bbae0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bbae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bbae4:
    // 0x1bbae4: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1bbae4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bbae8:
    // 0x1bbae8: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x1bbae8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
label_1bbaec:
    // 0x1bbaec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bbaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bbaf0:
    // 0x1bbaf0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1bbaf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_1bbaf4:
    // 0x1bbaf4: 0x8fb00058  lw          $s0, 0x58($sp)
    ctx->pc = 0x1bbaf4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bbaf8:
    // 0x1bbaf8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1bbaf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_1bbafc:
    // 0x1bbafc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bbafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bbb00:
    // 0x1bbb00: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1bbb00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1bbb04:
    // 0x1bbb04: 0x2412003c  addiu       $s2, $zero, 0x3C
    ctx->pc = 0x1bbb04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1bbb08:
    // 0x1bbb08: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1bbb08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bbb0c:
    // 0x1bbb0c: 0xacd20004  sw          $s2, 0x4($a2)
    ctx->pc = 0x1bbb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 18));
label_1bbb10:
    // 0x1bbb10: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bbb10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bbb14:
    // 0x1bbb14: 0x8c831b6c  lw          $v1, 0x1B6C($a0)
    ctx->pc = 0x1bbb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7020)));
label_1bbb18:
    // 0x1bbb18: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1bbb1c:
    if (ctx->pc == 0x1BBB1Cu) {
        ctx->pc = 0x1BBB20u;
        goto label_1bbb20;
    }
    ctx->pc = 0x1BBB18u;
    {
        const bool branch_taken_0x1bbb18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbb18) {
            ctx->pc = 0x1BBB3Cu;
            goto label_1bbb3c;
        }
    }
    ctx->pc = 0x1BBB20u;
label_1bbb20:
    // 0x1bbb20: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bbb20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1bbb24:
    // 0x1bbb24: 0x8c251a98  lw          $a1, 0x1A98($at)
    ctx->pc = 0x1bbb24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1bbb28:
    // 0x1bbb28: 0x3c04ff7f  lui         $a0, 0xFF7F
    ctx->pc = 0x1bbb28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65407 << 16));
label_1bbb2c:
    // 0x1bbb2c: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x1bbb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_1bbb30:
    // 0x1bbb30: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1bbb30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1bbb34:
    // 0x1bbb34: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bbb34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1bbb38:
    // 0x1bbb38: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1bbb38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 3));
label_1bbb3c:
    // 0x1bbb3c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bbb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bbb40:
    // 0x1bbb40: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bbb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1bbb44:
    // 0x1bbb44: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1bbb44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_1bbb48:
    // 0x1bbb48: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bbb48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1bbb4c:
    // 0x1bbb4c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_1bbb50:
    if (ctx->pc == 0x1BBB50u) {
        ctx->pc = 0x1BBB54u;
        goto label_1bbb54;
    }
    ctx->pc = 0x1BBB4Cu;
    {
        const bool branch_taken_0x1bbb4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbb4c) {
            ctx->pc = 0x1BBBA0u;
            goto label_1bbba0;
        }
    }
    ctx->pc = 0x1BBB54u;
label_1bbb54:
    // 0x1bbb54: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bbb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1bbb58:
    // 0x1bbb58: 0x908313a6  lbu         $v1, 0x13A6($a0)
    ctx->pc = 0x1bbb58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5030)));
label_1bbb5c:
    // 0x1bbb5c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1bbb5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1bbb60:
    // 0x1bbb60: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bbb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bbb64:
    // 0x1bbb64: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
label_1bbb68:
    if (ctx->pc == 0x1BBB68u) {
        ctx->pc = 0x1BBB6Cu;
        goto label_1bbb6c;
    }
    ctx->pc = 0x1BBB64u;
    {
        const bool branch_taken_0x1bbb64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bbb64) {
            ctx->pc = 0x1BBB94u;
            goto label_1bbb94;
        }
    }
    ctx->pc = 0x1BBB6Cu;
label_1bbb6c:
    // 0x1bbb6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bbb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bbb70:
    // 0x1bbb70: 0x10a40008  beq         $a1, $a0, . + 4 + (0x8 << 2)
label_1bbb74:
    if (ctx->pc == 0x1BBB74u) {
        ctx->pc = 0x1BBB78u;
        goto label_1bbb78;
    }
    ctx->pc = 0x1BBB70u;
    {
        const bool branch_taken_0x1bbb70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1bbb70) {
            ctx->pc = 0x1BBB94u;
            goto label_1bbb94;
        }
    }
    ctx->pc = 0x1BBB78u;
label_1bbb78:
    // 0x1bbb78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bbb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bbb7c:
    // 0x1bbb7c: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
label_1bbb80:
    if (ctx->pc == 0x1BBB80u) {
        ctx->pc = 0x1BBB84u;
        goto label_1bbb84;
    }
    ctx->pc = 0x1BBB7Cu;
    {
        const bool branch_taken_0x1bbb7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bbb7c) {
            ctx->pc = 0x1BBBA0u;
            goto label_1bbba0;
        }
    }
    ctx->pc = 0x1BBB84u;
label_1bbb84:
    // 0x1bbb84: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1bbb88:
    if (ctx->pc == 0x1BBB88u) {
        ctx->pc = 0x1BBB8Cu;
        goto label_1bbb8c;
    }
    ctx->pc = 0x1BBB84u;
    {
        const bool branch_taken_0x1bbb84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbb84) {
            ctx->pc = 0x1BBBA0u;
            goto label_1bbba0;
        }
    }
    ctx->pc = 0x1BBB8Cu;
label_1bbb8c:
    // 0x1bbb8c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1bbb90:
    if (ctx->pc == 0x1BBB90u) {
        ctx->pc = 0x1BBB94u;
        goto label_1bbb94;
    }
    ctx->pc = 0x1BBB8Cu;
    {
        const bool branch_taken_0x1bbb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbb8c) {
            ctx->pc = 0x1BBBA0u;
            goto label_1bbba0;
        }
    }
    ctx->pc = 0x1BBB94u;
label_1bbb94:
    // 0x1bbb94: 0xc0c5244  jal         func_314910
label_1bbb98:
    if (ctx->pc == 0x1BBB98u) {
        ctx->pc = 0x1BBB9Cu;
        goto label_1bbb9c;
    }
    ctx->pc = 0x1BBB94u;
    SET_GPR_U32(ctx, 31, 0x1BBB9Cu);
    ctx->pc = 0x314910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314910u, 0x1BBB94u, 0x1BBB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBB9Cu;
label_1bbb9c:
    // 0x1bbb9c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bbb9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1bbba0:
    // 0x1bbba0: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1bbba0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1bbba4:
    // 0x1bbba4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bbba4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bbba8:
    // 0x1bbba8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bbba8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bbbac:
    // 0x1bbbac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bbbacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bbbb0:
    // 0x1bbbb0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1bbbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1bbbb4:
    // 0x1bbbb4: 0x3e00008  jr          $ra
label_1bbbb8:
    if (ctx->pc == 0x1BBBB8u) {
        ctx->pc = 0x1BBBBCu;
        goto label_fallthrough_0x1bbbb4;
    }
    ctx->pc = 0x1BBBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bbbb4:
    ctx->pc = 0x1BBBBCu;
}
