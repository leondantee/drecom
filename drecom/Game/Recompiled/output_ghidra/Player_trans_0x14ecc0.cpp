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

// Function: Player_trans
// Address: 0x14ecc0 - 0x14f3d8
void Player_trans_0x14ecc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Player_trans_0x14ecc0");
#endif

    switch (ctx->pc) {
        case 0x14ecc0u: goto label_14ecc0;
        case 0x14ecc4u: goto label_14ecc4;
        case 0x14ecc8u: goto label_14ecc8;
        case 0x14ecccu: goto label_14eccc;
        case 0x14ecd0u: goto label_14ecd0;
        case 0x14ecd4u: goto label_14ecd4;
        case 0x14ecd8u: goto label_14ecd8;
        case 0x14ecdcu: goto label_14ecdc;
        case 0x14ece0u: goto label_14ece0;
        case 0x14ece4u: goto label_14ece4;
        case 0x14ece8u: goto label_14ece8;
        case 0x14ececu: goto label_14ecec;
        case 0x14ecf0u: goto label_14ecf0;
        case 0x14ecf4u: goto label_14ecf4;
        case 0x14ecf8u: goto label_14ecf8;
        case 0x14ecfcu: goto label_14ecfc;
        case 0x14ed00u: goto label_14ed00;
        case 0x14ed04u: goto label_14ed04;
        case 0x14ed08u: goto label_14ed08;
        case 0x14ed0cu: goto label_14ed0c;
        case 0x14ed10u: goto label_14ed10;
        case 0x14ed14u: goto label_14ed14;
        case 0x14ed18u: goto label_14ed18;
        case 0x14ed1cu: goto label_14ed1c;
        case 0x14ed20u: goto label_14ed20;
        case 0x14ed24u: goto label_14ed24;
        case 0x14ed28u: goto label_14ed28;
        case 0x14ed2cu: goto label_14ed2c;
        case 0x14ed30u: goto label_14ed30;
        case 0x14ed34u: goto label_14ed34;
        case 0x14ed38u: goto label_14ed38;
        case 0x14ed3cu: goto label_14ed3c;
        case 0x14ed40u: goto label_14ed40;
        case 0x14ed44u: goto label_14ed44;
        case 0x14ed48u: goto label_14ed48;
        case 0x14ed4cu: goto label_14ed4c;
        case 0x14ed50u: goto label_14ed50;
        case 0x14ed54u: goto label_14ed54;
        case 0x14ed58u: goto label_14ed58;
        case 0x14ed5cu: goto label_14ed5c;
        case 0x14ed60u: goto label_14ed60;
        case 0x14ed64u: goto label_14ed64;
        case 0x14ed68u: goto label_14ed68;
        case 0x14ed6cu: goto label_14ed6c;
        case 0x14ed70u: goto label_14ed70;
        case 0x14ed74u: goto label_14ed74;
        case 0x14ed78u: goto label_14ed78;
        case 0x14ed7cu: goto label_14ed7c;
        case 0x14ed80u: goto label_14ed80;
        case 0x14ed84u: goto label_14ed84;
        case 0x14ed88u: goto label_14ed88;
        case 0x14ed8cu: goto label_14ed8c;
        case 0x14ed90u: goto label_14ed90;
        case 0x14ed94u: goto label_14ed94;
        case 0x14ed98u: goto label_14ed98;
        case 0x14ed9cu: goto label_14ed9c;
        case 0x14eda0u: goto label_14eda0;
        case 0x14eda4u: goto label_14eda4;
        case 0x14eda8u: goto label_14eda8;
        case 0x14edacu: goto label_14edac;
        case 0x14edb0u: goto label_14edb0;
        case 0x14edb4u: goto label_14edb4;
        case 0x14edb8u: goto label_14edb8;
        case 0x14edbcu: goto label_14edbc;
        case 0x14edc0u: goto label_14edc0;
        case 0x14edc4u: goto label_14edc4;
        case 0x14edc8u: goto label_14edc8;
        case 0x14edccu: goto label_14edcc;
        case 0x14edd0u: goto label_14edd0;
        case 0x14edd4u: goto label_14edd4;
        case 0x14edd8u: goto label_14edd8;
        case 0x14eddcu: goto label_14eddc;
        case 0x14ede0u: goto label_14ede0;
        case 0x14ede4u: goto label_14ede4;
        case 0x14ede8u: goto label_14ede8;
        case 0x14edecu: goto label_14edec;
        case 0x14edf0u: goto label_14edf0;
        case 0x14edf4u: goto label_14edf4;
        case 0x14edf8u: goto label_14edf8;
        case 0x14edfcu: goto label_14edfc;
        case 0x14ee00u: goto label_14ee00;
        case 0x14ee04u: goto label_14ee04;
        case 0x14ee08u: goto label_14ee08;
        case 0x14ee0cu: goto label_14ee0c;
        case 0x14ee10u: goto label_14ee10;
        case 0x14ee14u: goto label_14ee14;
        case 0x14ee18u: goto label_14ee18;
        case 0x14ee1cu: goto label_14ee1c;
        case 0x14ee20u: goto label_14ee20;
        case 0x14ee24u: goto label_14ee24;
        case 0x14ee28u: goto label_14ee28;
        case 0x14ee2cu: goto label_14ee2c;
        case 0x14ee30u: goto label_14ee30;
        case 0x14ee34u: goto label_14ee34;
        case 0x14ee38u: goto label_14ee38;
        case 0x14ee3cu: goto label_14ee3c;
        case 0x14ee40u: goto label_14ee40;
        case 0x14ee44u: goto label_14ee44;
        case 0x14ee48u: goto label_14ee48;
        case 0x14ee4cu: goto label_14ee4c;
        case 0x14ee50u: goto label_14ee50;
        case 0x14ee54u: goto label_14ee54;
        case 0x14ee58u: goto label_14ee58;
        case 0x14ee5cu: goto label_14ee5c;
        case 0x14ee60u: goto label_14ee60;
        case 0x14ee64u: goto label_14ee64;
        case 0x14ee68u: goto label_14ee68;
        case 0x14ee6cu: goto label_14ee6c;
        case 0x14ee70u: goto label_14ee70;
        case 0x14ee74u: goto label_14ee74;
        case 0x14ee78u: goto label_14ee78;
        case 0x14ee7cu: goto label_14ee7c;
        case 0x14ee80u: goto label_14ee80;
        case 0x14ee84u: goto label_14ee84;
        case 0x14ee88u: goto label_14ee88;
        case 0x14ee8cu: goto label_14ee8c;
        case 0x14ee90u: goto label_14ee90;
        case 0x14ee94u: goto label_14ee94;
        case 0x14ee98u: goto label_14ee98;
        case 0x14ee9cu: goto label_14ee9c;
        case 0x14eea0u: goto label_14eea0;
        case 0x14eea4u: goto label_14eea4;
        case 0x14eea8u: goto label_14eea8;
        case 0x14eeacu: goto label_14eeac;
        case 0x14eeb0u: goto label_14eeb0;
        case 0x14eeb4u: goto label_14eeb4;
        case 0x14eeb8u: goto label_14eeb8;
        case 0x14eebcu: goto label_14eebc;
        case 0x14eec0u: goto label_14eec0;
        case 0x14eec4u: goto label_14eec4;
        case 0x14eec8u: goto label_14eec8;
        case 0x14eeccu: goto label_14eecc;
        case 0x14eed0u: goto label_14eed0;
        case 0x14eed4u: goto label_14eed4;
        case 0x14eed8u: goto label_14eed8;
        case 0x14eedcu: goto label_14eedc;
        case 0x14eee0u: goto label_14eee0;
        case 0x14eee4u: goto label_14eee4;
        case 0x14eee8u: goto label_14eee8;
        case 0x14eeecu: goto label_14eeec;
        case 0x14eef0u: goto label_14eef0;
        case 0x14eef4u: goto label_14eef4;
        case 0x14eef8u: goto label_14eef8;
        case 0x14eefcu: goto label_14eefc;
        case 0x14ef00u: goto label_14ef00;
        case 0x14ef04u: goto label_14ef04;
        case 0x14ef08u: goto label_14ef08;
        case 0x14ef0cu: goto label_14ef0c;
        case 0x14ef10u: goto label_14ef10;
        case 0x14ef14u: goto label_14ef14;
        case 0x14ef18u: goto label_14ef18;
        case 0x14ef1cu: goto label_14ef1c;
        case 0x14ef20u: goto label_14ef20;
        case 0x14ef24u: goto label_14ef24;
        case 0x14ef28u: goto label_14ef28;
        case 0x14ef2cu: goto label_14ef2c;
        case 0x14ef30u: goto label_14ef30;
        case 0x14ef34u: goto label_14ef34;
        case 0x14ef38u: goto label_14ef38;
        case 0x14ef3cu: goto label_14ef3c;
        case 0x14ef40u: goto label_14ef40;
        case 0x14ef44u: goto label_14ef44;
        case 0x14ef48u: goto label_14ef48;
        case 0x14ef4cu: goto label_14ef4c;
        case 0x14ef50u: goto label_14ef50;
        case 0x14ef54u: goto label_14ef54;
        case 0x14ef58u: goto label_14ef58;
        case 0x14ef5cu: goto label_14ef5c;
        case 0x14ef60u: goto label_14ef60;
        case 0x14ef64u: goto label_14ef64;
        case 0x14ef68u: goto label_14ef68;
        case 0x14ef6cu: goto label_14ef6c;
        case 0x14ef70u: goto label_14ef70;
        case 0x14ef74u: goto label_14ef74;
        case 0x14ef78u: goto label_14ef78;
        case 0x14ef7cu: goto label_14ef7c;
        case 0x14ef80u: goto label_14ef80;
        case 0x14ef84u: goto label_14ef84;
        case 0x14ef88u: goto label_14ef88;
        case 0x14ef8cu: goto label_14ef8c;
        case 0x14ef90u: goto label_14ef90;
        case 0x14ef94u: goto label_14ef94;
        case 0x14ef98u: goto label_14ef98;
        case 0x14ef9cu: goto label_14ef9c;
        case 0x14efa0u: goto label_14efa0;
        case 0x14efa4u: goto label_14efa4;
        case 0x14efa8u: goto label_14efa8;
        case 0x14efacu: goto label_14efac;
        case 0x14efb0u: goto label_14efb0;
        case 0x14efb4u: goto label_14efb4;
        case 0x14efb8u: goto label_14efb8;
        case 0x14efbcu: goto label_14efbc;
        case 0x14efc0u: goto label_14efc0;
        case 0x14efc4u: goto label_14efc4;
        case 0x14efc8u: goto label_14efc8;
        case 0x14efccu: goto label_14efcc;
        case 0x14efd0u: goto label_14efd0;
        case 0x14efd4u: goto label_14efd4;
        case 0x14efd8u: goto label_14efd8;
        case 0x14efdcu: goto label_14efdc;
        case 0x14efe0u: goto label_14efe0;
        case 0x14efe4u: goto label_14efe4;
        case 0x14efe8u: goto label_14efe8;
        case 0x14efecu: goto label_14efec;
        case 0x14eff0u: goto label_14eff0;
        case 0x14eff4u: goto label_14eff4;
        case 0x14eff8u: goto label_14eff8;
        case 0x14effcu: goto label_14effc;
        case 0x14f000u: goto label_14f000;
        case 0x14f004u: goto label_14f004;
        case 0x14f008u: goto label_14f008;
        case 0x14f00cu: goto label_14f00c;
        case 0x14f010u: goto label_14f010;
        case 0x14f014u: goto label_14f014;
        case 0x14f018u: goto label_14f018;
        case 0x14f01cu: goto label_14f01c;
        case 0x14f020u: goto label_14f020;
        case 0x14f024u: goto label_14f024;
        case 0x14f028u: goto label_14f028;
        case 0x14f02cu: goto label_14f02c;
        case 0x14f030u: goto label_14f030;
        case 0x14f034u: goto label_14f034;
        case 0x14f038u: goto label_14f038;
        case 0x14f03cu: goto label_14f03c;
        case 0x14f040u: goto label_14f040;
        case 0x14f044u: goto label_14f044;
        case 0x14f048u: goto label_14f048;
        case 0x14f04cu: goto label_14f04c;
        case 0x14f050u: goto label_14f050;
        case 0x14f054u: goto label_14f054;
        case 0x14f058u: goto label_14f058;
        case 0x14f05cu: goto label_14f05c;
        case 0x14f060u: goto label_14f060;
        case 0x14f064u: goto label_14f064;
        case 0x14f068u: goto label_14f068;
        case 0x14f06cu: goto label_14f06c;
        case 0x14f070u: goto label_14f070;
        case 0x14f074u: goto label_14f074;
        case 0x14f078u: goto label_14f078;
        case 0x14f07cu: goto label_14f07c;
        case 0x14f080u: goto label_14f080;
        case 0x14f084u: goto label_14f084;
        case 0x14f088u: goto label_14f088;
        case 0x14f08cu: goto label_14f08c;
        case 0x14f090u: goto label_14f090;
        case 0x14f094u: goto label_14f094;
        case 0x14f098u: goto label_14f098;
        case 0x14f09cu: goto label_14f09c;
        case 0x14f0a0u: goto label_14f0a0;
        case 0x14f0a4u: goto label_14f0a4;
        case 0x14f0a8u: goto label_14f0a8;
        case 0x14f0acu: goto label_14f0ac;
        case 0x14f0b0u: goto label_14f0b0;
        case 0x14f0b4u: goto label_14f0b4;
        case 0x14f0b8u: goto label_14f0b8;
        case 0x14f0bcu: goto label_14f0bc;
        case 0x14f0c0u: goto label_14f0c0;
        case 0x14f0c4u: goto label_14f0c4;
        case 0x14f0c8u: goto label_14f0c8;
        case 0x14f0ccu: goto label_14f0cc;
        case 0x14f0d0u: goto label_14f0d0;
        case 0x14f0d4u: goto label_14f0d4;
        case 0x14f0d8u: goto label_14f0d8;
        case 0x14f0dcu: goto label_14f0dc;
        case 0x14f0e0u: goto label_14f0e0;
        case 0x14f0e4u: goto label_14f0e4;
        case 0x14f0e8u: goto label_14f0e8;
        case 0x14f0ecu: goto label_14f0ec;
        case 0x14f0f0u: goto label_14f0f0;
        case 0x14f0f4u: goto label_14f0f4;
        case 0x14f0f8u: goto label_14f0f8;
        case 0x14f0fcu: goto label_14f0fc;
        case 0x14f100u: goto label_14f100;
        case 0x14f104u: goto label_14f104;
        case 0x14f108u: goto label_14f108;
        case 0x14f10cu: goto label_14f10c;
        case 0x14f110u: goto label_14f110;
        case 0x14f114u: goto label_14f114;
        case 0x14f118u: goto label_14f118;
        case 0x14f11cu: goto label_14f11c;
        case 0x14f120u: goto label_14f120;
        case 0x14f124u: goto label_14f124;
        case 0x14f128u: goto label_14f128;
        case 0x14f12cu: goto label_14f12c;
        case 0x14f130u: goto label_14f130;
        case 0x14f134u: goto label_14f134;
        case 0x14f138u: goto label_14f138;
        case 0x14f13cu: goto label_14f13c;
        case 0x14f140u: goto label_14f140;
        case 0x14f144u: goto label_14f144;
        case 0x14f148u: goto label_14f148;
        case 0x14f14cu: goto label_14f14c;
        case 0x14f150u: goto label_14f150;
        case 0x14f154u: goto label_14f154;
        case 0x14f158u: goto label_14f158;
        case 0x14f15cu: goto label_14f15c;
        case 0x14f160u: goto label_14f160;
        case 0x14f164u: goto label_14f164;
        case 0x14f168u: goto label_14f168;
        case 0x14f16cu: goto label_14f16c;
        case 0x14f170u: goto label_14f170;
        case 0x14f174u: goto label_14f174;
        case 0x14f178u: goto label_14f178;
        case 0x14f17cu: goto label_14f17c;
        case 0x14f180u: goto label_14f180;
        case 0x14f184u: goto label_14f184;
        case 0x14f188u: goto label_14f188;
        case 0x14f18cu: goto label_14f18c;
        case 0x14f190u: goto label_14f190;
        case 0x14f194u: goto label_14f194;
        case 0x14f198u: goto label_14f198;
        case 0x14f19cu: goto label_14f19c;
        case 0x14f1a0u: goto label_14f1a0;
        case 0x14f1a4u: goto label_14f1a4;
        case 0x14f1a8u: goto label_14f1a8;
        case 0x14f1acu: goto label_14f1ac;
        case 0x14f1b0u: goto label_14f1b0;
        case 0x14f1b4u: goto label_14f1b4;
        case 0x14f1b8u: goto label_14f1b8;
        case 0x14f1bcu: goto label_14f1bc;
        case 0x14f1c0u: goto label_14f1c0;
        case 0x14f1c4u: goto label_14f1c4;
        case 0x14f1c8u: goto label_14f1c8;
        case 0x14f1ccu: goto label_14f1cc;
        case 0x14f1d0u: goto label_14f1d0;
        case 0x14f1d4u: goto label_14f1d4;
        case 0x14f1d8u: goto label_14f1d8;
        case 0x14f1dcu: goto label_14f1dc;
        case 0x14f1e0u: goto label_14f1e0;
        case 0x14f1e4u: goto label_14f1e4;
        case 0x14f1e8u: goto label_14f1e8;
        case 0x14f1ecu: goto label_14f1ec;
        case 0x14f1f0u: goto label_14f1f0;
        case 0x14f1f4u: goto label_14f1f4;
        case 0x14f1f8u: goto label_14f1f8;
        case 0x14f1fcu: goto label_14f1fc;
        case 0x14f200u: goto label_14f200;
        case 0x14f204u: goto label_14f204;
        case 0x14f208u: goto label_14f208;
        case 0x14f20cu: goto label_14f20c;
        case 0x14f210u: goto label_14f210;
        case 0x14f214u: goto label_14f214;
        case 0x14f218u: goto label_14f218;
        case 0x14f21cu: goto label_14f21c;
        case 0x14f220u: goto label_14f220;
        case 0x14f224u: goto label_14f224;
        case 0x14f228u: goto label_14f228;
        case 0x14f22cu: goto label_14f22c;
        case 0x14f230u: goto label_14f230;
        case 0x14f234u: goto label_14f234;
        case 0x14f238u: goto label_14f238;
        case 0x14f23cu: goto label_14f23c;
        case 0x14f240u: goto label_14f240;
        case 0x14f244u: goto label_14f244;
        case 0x14f248u: goto label_14f248;
        case 0x14f24cu: goto label_14f24c;
        case 0x14f250u: goto label_14f250;
        case 0x14f254u: goto label_14f254;
        case 0x14f258u: goto label_14f258;
        case 0x14f25cu: goto label_14f25c;
        case 0x14f260u: goto label_14f260;
        case 0x14f264u: goto label_14f264;
        case 0x14f268u: goto label_14f268;
        case 0x14f26cu: goto label_14f26c;
        case 0x14f270u: goto label_14f270;
        case 0x14f274u: goto label_14f274;
        case 0x14f278u: goto label_14f278;
        case 0x14f27cu: goto label_14f27c;
        case 0x14f280u: goto label_14f280;
        case 0x14f284u: goto label_14f284;
        case 0x14f288u: goto label_14f288;
        case 0x14f28cu: goto label_14f28c;
        case 0x14f290u: goto label_14f290;
        case 0x14f294u: goto label_14f294;
        case 0x14f298u: goto label_14f298;
        case 0x14f29cu: goto label_14f29c;
        case 0x14f2a0u: goto label_14f2a0;
        case 0x14f2a4u: goto label_14f2a4;
        case 0x14f2a8u: goto label_14f2a8;
        case 0x14f2acu: goto label_14f2ac;
        case 0x14f2b0u: goto label_14f2b0;
        case 0x14f2b4u: goto label_14f2b4;
        case 0x14f2b8u: goto label_14f2b8;
        case 0x14f2bcu: goto label_14f2bc;
        case 0x14f2c0u: goto label_14f2c0;
        case 0x14f2c4u: goto label_14f2c4;
        case 0x14f2c8u: goto label_14f2c8;
        case 0x14f2ccu: goto label_14f2cc;
        case 0x14f2d0u: goto label_14f2d0;
        case 0x14f2d4u: goto label_14f2d4;
        case 0x14f2d8u: goto label_14f2d8;
        case 0x14f2dcu: goto label_14f2dc;
        case 0x14f2e0u: goto label_14f2e0;
        case 0x14f2e4u: goto label_14f2e4;
        case 0x14f2e8u: goto label_14f2e8;
        case 0x14f2ecu: goto label_14f2ec;
        case 0x14f2f0u: goto label_14f2f0;
        case 0x14f2f4u: goto label_14f2f4;
        case 0x14f2f8u: goto label_14f2f8;
        case 0x14f2fcu: goto label_14f2fc;
        case 0x14f300u: goto label_14f300;
        case 0x14f304u: goto label_14f304;
        case 0x14f308u: goto label_14f308;
        case 0x14f30cu: goto label_14f30c;
        case 0x14f310u: goto label_14f310;
        case 0x14f314u: goto label_14f314;
        case 0x14f318u: goto label_14f318;
        case 0x14f31cu: goto label_14f31c;
        case 0x14f320u: goto label_14f320;
        case 0x14f324u: goto label_14f324;
        case 0x14f328u: goto label_14f328;
        case 0x14f32cu: goto label_14f32c;
        case 0x14f330u: goto label_14f330;
        case 0x14f334u: goto label_14f334;
        case 0x14f338u: goto label_14f338;
        case 0x14f33cu: goto label_14f33c;
        case 0x14f340u: goto label_14f340;
        case 0x14f344u: goto label_14f344;
        case 0x14f348u: goto label_14f348;
        case 0x14f34cu: goto label_14f34c;
        case 0x14f350u: goto label_14f350;
        case 0x14f354u: goto label_14f354;
        case 0x14f358u: goto label_14f358;
        case 0x14f35cu: goto label_14f35c;
        case 0x14f360u: goto label_14f360;
        case 0x14f364u: goto label_14f364;
        case 0x14f368u: goto label_14f368;
        case 0x14f36cu: goto label_14f36c;
        case 0x14f370u: goto label_14f370;
        case 0x14f374u: goto label_14f374;
        case 0x14f378u: goto label_14f378;
        case 0x14f37cu: goto label_14f37c;
        case 0x14f380u: goto label_14f380;
        case 0x14f384u: goto label_14f384;
        case 0x14f388u: goto label_14f388;
        case 0x14f38cu: goto label_14f38c;
        case 0x14f390u: goto label_14f390;
        case 0x14f394u: goto label_14f394;
        case 0x14f398u: goto label_14f398;
        case 0x14f39cu: goto label_14f39c;
        case 0x14f3a0u: goto label_14f3a0;
        case 0x14f3a4u: goto label_14f3a4;
        case 0x14f3a8u: goto label_14f3a8;
        case 0x14f3acu: goto label_14f3ac;
        case 0x14f3b0u: goto label_14f3b0;
        case 0x14f3b4u: goto label_14f3b4;
        case 0x14f3b8u: goto label_14f3b8;
        case 0x14f3bcu: goto label_14f3bc;
        case 0x14f3c0u: goto label_14f3c0;
        case 0x14f3c4u: goto label_14f3c4;
        case 0x14f3c8u: goto label_14f3c8;
        case 0x14f3ccu: goto label_14f3cc;
        case 0x14f3d0u: goto label_14f3d0;
        case 0x14f3d4u: goto label_14f3d4;
        default: break;
    }

    ctx->pc = 0x14ecc0u;

label_14ecc0:
    // 0x14ecc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14ecc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_14ecc4:
    // 0x14ecc4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x14ecc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_14ecc8:
    // 0x14ecc8: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x14ecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_14eccc:
    // 0x14eccc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x14ecccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14ecd0:
    // 0x14ecd0: 0xc053904  jal         func_14E410
label_14ecd4:
    if (ctx->pc == 0x14ECD4u) {
        ctx->pc = 0x14ECD8u;
        goto label_14ecd8;
    }
    ctx->pc = 0x14ECD0u;
    SET_GPR_U32(ctx, 31, 0x14ECD8u);
    ctx->pc = 0x14E410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E410u, 0x14ECD0u, 0x14ECD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ECD8u;
label_14ecd8:
    // 0x14ecd8: 0xc053a2c  jal         func_14E8B0
label_14ecdc:
    if (ctx->pc == 0x14ECDCu) {
        ctx->pc = 0x14ECE0u;
        goto label_14ece0;
    }
    ctx->pc = 0x14ECD8u;
    SET_GPR_U32(ctx, 31, 0x14ECE0u);
    ctx->pc = 0x14E8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E8B0u, 0x14ECD8u, 0x14ECE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ECE0u;
label_14ece0:
    // 0x14ece0: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x14ece0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14ece4:
    // 0x14ece4: 0x24c40050  addiu       $a0, $a2, 0x50
    ctx->pc = 0x14ece4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
label_14ece8:
    // 0x14ece8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14ece8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14ecec:
    // 0x14ecec: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x14ececu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_14ecf0:
    // 0x14ecf0: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x14ecf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_14ecf4:
    // 0x14ecf4: 0xc095c94  jal         func_257250
label_14ecf8:
    if (ctx->pc == 0x14ECF8u) {
        ctx->pc = 0x14ECFCu;
        goto label_14ecfc;
    }
    ctx->pc = 0x14ECF4u;
    SET_GPR_U32(ctx, 31, 0x14ECFCu);
    ctx->pc = 0x257250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257250u, 0x14ECF4u, 0x14ECFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ECFCu;
label_14ecfc:
    // 0x14ecfc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14ecfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14ed00:
    // 0x14ed00: 0x8c251a48  lw          $a1, 0x1A48($at)
    ctx->pc = 0x14ed00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6728)));
label_14ed04:
    // 0x14ed04: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x14ed04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
label_14ed08:
    // 0x14ed08: 0xa61024  and         $v0, $a1, $a2
    ctx->pc = 0x14ed08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_14ed0c:
    // 0x14ed0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_14ed10:
    if (ctx->pc == 0x14ED10u) {
        ctx->pc = 0x14ED14u;
        goto label_14ed14;
    }
    ctx->pc = 0x14ED0Cu;
    {
        const bool branch_taken_0x14ed0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ed0c) {
            ctx->pc = 0x14ED20u;
            goto label_14ed20;
        }
    }
    ctx->pc = 0x14ED14u;
label_14ed14:
    // 0x14ed14: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x14ed14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14ed18:
    // 0x14ed18: 0xc097dc0  jal         func_25F700
label_14ed1c:
    if (ctx->pc == 0x14ED1Cu) {
        ctx->pc = 0x14ED20u;
        goto label_14ed20;
    }
    ctx->pc = 0x14ED18u;
    SET_GPR_U32(ctx, 31, 0x14ED20u);
    ctx->pc = 0x25F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F700u, 0x14ED18u, 0x14ED20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ED20u;
label_14ed20:
    // 0x14ed20: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x14ed20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14ed24:
    // 0x14ed24: 0xc05c04c  jal         func_170130
label_14ed28:
    if (ctx->pc == 0x14ED28u) {
        ctx->pc = 0x14ED2Cu;
        goto label_14ed2c;
    }
    ctx->pc = 0x14ED24u;
    SET_GPR_U32(ctx, 31, 0x14ED2Cu);
    ctx->pc = 0x170130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170130u, 0x14ED24u, 0x14ED2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ED2Cu;
label_14ed2c:
    // 0x14ed2c: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x14ed2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14ed30:
    // 0x14ed30: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x14ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_14ed34:
    // 0x14ed34: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x14ed34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_14ed38:
    // 0x14ed38: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_14ed3c:
    if (ctx->pc == 0x14ED3Cu) {
        ctx->pc = 0x14ED40u;
        goto label_14ed40;
    }
    ctx->pc = 0x14ED38u;
    {
        const bool branch_taken_0x14ed38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ed38) {
            ctx->pc = 0x14ED5Cu;
            goto label_14ed5c;
        }
    }
    ctx->pc = 0x14ED40u;
label_14ed40:
    // 0x14ed40: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x14ed40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14ed44:
    // 0x14ed44: 0xc095df0  jal         func_2577C0
label_14ed48:
    if (ctx->pc == 0x14ED48u) {
        ctx->pc = 0x14ED4Cu;
        goto label_14ed4c;
    }
    ctx->pc = 0x14ED44u;
    SET_GPR_U32(ctx, 31, 0x14ED4Cu);
    ctx->pc = 0x2577C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2577C0u, 0x14ED44u, 0x14ED4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ED4Cu;
label_14ed4c:
    // 0x14ed4c: 0xc054158  jal         func_150560
label_14ed50:
    if (ctx->pc == 0x14ED50u) {
        ctx->pc = 0x14ED54u;
        goto label_14ed54;
    }
    ctx->pc = 0x14ED4Cu;
    SET_GPR_U32(ctx, 31, 0x14ED54u);
    ctx->pc = 0x150560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150560u, 0x14ED4Cu, 0x14ED54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ED54u;
label_14ed54:
    // 0x14ed54: 0xc06c658  jal         func_1B1960
label_14ed58:
    if (ctx->pc == 0x14ED58u) {
        ctx->pc = 0x14ED5Cu;
        goto label_14ed5c;
    }
    ctx->pc = 0x14ED54u;
    SET_GPR_U32(ctx, 31, 0x14ED5Cu);
    ctx->pc = 0x1B1960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1960u, 0x14ED54u, 0x14ED5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ED5Cu;
label_14ed5c:
    // 0x14ed5c: 0xc053eb4  jal         func_14FAD0
label_14ed60:
    if (ctx->pc == 0x14ED60u) {
        ctx->pc = 0x14ED64u;
        goto label_14ed64;
    }
    ctx->pc = 0x14ED5Cu;
    SET_GPR_U32(ctx, 31, 0x14ED64u);
    ctx->pc = 0x14FAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FAD0u, 0x14ED5Cu, 0x14ED64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ED64u;
label_14ed64:
    // 0x14ed64: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x14ed64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14ed68:
    // 0x14ed68: 0xc07932c  jal         func_1E4CB0
label_14ed6c:
    if (ctx->pc == 0x14ED6Cu) {
        ctx->pc = 0x14ED70u;
        goto label_14ed70;
    }
    ctx->pc = 0x14ED68u;
    SET_GPR_U32(ctx, 31, 0x14ED70u);
    ctx->pc = 0x1E4CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4CB0u, 0x14ED68u, 0x14ED70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ED70u;
label_14ed70:
    // 0x14ed70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14ed70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14ed74:
    // 0x14ed74: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x14ed74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_14ed78:
    // 0x14ed78: 0x2444c980  addiu       $a0, $v0, -0x3680
    ctx->pc = 0x14ed78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953344));
label_14ed7c:
    // 0x14ed7c: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x14ed7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_14ed80:
    // 0x14ed80: 0xc040c9e  jal         func_103278
label_14ed84:
    if (ctx->pc == 0x14ED84u) {
        ctx->pc = 0x14ED88u;
        goto label_14ed88;
    }
    ctx->pc = 0x14ED80u;
    SET_GPR_U32(ctx, 31, 0x14ED88u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x14ED88u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x14ED88u) { return; }
    ctx->pc = 0x14ED88u;
label_14ed88:
    // 0x14ed88: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14ed88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14ed8c:
    // 0x14ed8c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x14ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_14ed90:
    // 0x14ed90: 0x2444ca80  addiu       $a0, $v0, -0x3580
    ctx->pc = 0x14ed90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953600));
label_14ed94:
    // 0x14ed94: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x14ed94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_14ed98:
    // 0x14ed98: 0xc040c9e  jal         func_103278
label_14ed9c:
    if (ctx->pc == 0x14ED9Cu) {
        ctx->pc = 0x14EDA0u;
        goto label_14eda0;
    }
    ctx->pc = 0x14ED98u;
    SET_GPR_U32(ctx, 31, 0x14EDA0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x14EDA0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x14EDA0u) { return; }
    ctx->pc = 0x14EDA0u;
label_14eda0:
    // 0x14eda0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x14eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_14eda4:
    // 0x14eda4: 0x2444c960  addiu       $a0, $v0, -0x36A0
    ctx->pc = 0x14eda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953312));
label_14eda8:
    // 0x14eda8: 0xc07932c  jal         func_1E4CB0
label_14edac:
    if (ctx->pc == 0x14EDACu) {
        ctx->pc = 0x14EDB0u;
        goto label_14edb0;
    }
    ctx->pc = 0x14EDA8u;
    SET_GPR_U32(ctx, 31, 0x14EDB0u);
    ctx->pc = 0x1E4CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4CB0u, 0x14EDA8u, 0x14EDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EDB0u;
label_14edb0:
    // 0x14edb0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14edb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14edb4:
    // 0x14edb4: 0x8c6313f4  lw          $v1, 0x13F4($v1)
    ctx->pc = 0x14edb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5108)));
label_14edb8:
    // 0x14edb8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_14edbc:
    if (ctx->pc == 0x14EDBCu) {
        ctx->pc = 0x14EDC0u;
        goto label_14edc0;
    }
    ctx->pc = 0x14EDB8u;
    {
        const bool branch_taken_0x14edb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14edb8) {
            ctx->pc = 0x14EE20u;
            goto label_14ee20;
        }
    }
    ctx->pc = 0x14EDC0u;
label_14edc0:
    // 0x14edc0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14edc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14edc4:
    // 0x14edc4: 0x8c6313f4  lw          $v1, 0x13F4($v1)
    ctx->pc = 0x14edc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5108)));
label_14edc8:
    // 0x14edc8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x14edc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_14edcc:
    // 0x14edcc: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x14edccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_14edd0:
    // 0x14edd0: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_14edd4:
    if (ctx->pc == 0x14EDD4u) {
        ctx->pc = 0x14EDD8u;
        goto label_14edd8;
    }
    ctx->pc = 0x14EDD0u;
    {
        const bool branch_taken_0x14edd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14edd0) {
            ctx->pc = 0x14EE74u;
            goto label_14ee74;
        }
    }
    ctx->pc = 0x14EDD8u;
label_14edd8:
    // 0x14edd8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14edd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14eddc:
    // 0x14eddc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x14eddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_14ede0:
    // 0x14ede0: 0x24449260  addiu       $a0, $v0, -0x6DA0
    ctx->pc = 0x14ede0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939232));
label_14ede4:
    // 0x14ede4: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x14ede4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_14ede8:
    // 0x14ede8: 0xc040c9e  jal         func_103278
label_14edec:
    if (ctx->pc == 0x14EDECu) {
        ctx->pc = 0x14EDF0u;
        goto label_14edf0;
    }
    ctx->pc = 0x14EDE8u;
    SET_GPR_U32(ctx, 31, 0x14EDF0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x14EDF0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x14EDF0u) { return; }
    ctx->pc = 0x14EDF0u;
label_14edf0:
    // 0x14edf0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14edf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14edf4:
    // 0x14edf4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x14edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_14edf8:
    // 0x14edf8: 0x24449360  addiu       $a0, $v0, -0x6CA0
    ctx->pc = 0x14edf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939488));
label_14edfc:
    // 0x14edfc: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x14edfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_14ee00:
    // 0x14ee00: 0xc040c9e  jal         func_103278
label_14ee04:
    if (ctx->pc == 0x14EE04u) {
        ctx->pc = 0x14EE08u;
        goto label_14ee08;
    }
    ctx->pc = 0x14EE00u;
    SET_GPR_U32(ctx, 31, 0x14EE08u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x14EE08u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x14EE08u) { return; }
    ctx->pc = 0x14EE08u;
label_14ee08:
    // 0x14ee08: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x14ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_14ee0c:
    // 0x14ee0c: 0x24449240  addiu       $a0, $v0, -0x6DC0
    ctx->pc = 0x14ee0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939200));
label_14ee10:
    // 0x14ee10: 0xc07932c  jal         func_1E4CB0
label_14ee14:
    if (ctx->pc == 0x14EE14u) {
        ctx->pc = 0x14EE18u;
        goto label_14ee18;
    }
    ctx->pc = 0x14EE10u;
    SET_GPR_U32(ctx, 31, 0x14EE18u);
    ctx->pc = 0x1E4CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4CB0u, 0x14EE10u, 0x14EE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EE18u;
label_14ee18:
    // 0x14ee18: 0x10000016  b           . + 4 + (0x16 << 2)
label_14ee1c:
    if (ctx->pc == 0x14EE1Cu) {
        ctx->pc = 0x14EE20u;
        goto label_14ee20;
    }
    ctx->pc = 0x14EE18u;
    {
        const bool branch_taken_0x14ee18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ee18) {
            ctx->pc = 0x14EE74u;
            goto label_14ee74;
        }
    }
    ctx->pc = 0x14EE20u;
label_14ee20:
    // 0x14ee20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14ee20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14ee24:
    // 0x14ee24: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x14ee24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_14ee28:
    // 0x14ee28: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x14ee28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_14ee2c:
    // 0x14ee2c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_14ee30:
    if (ctx->pc == 0x14EE30u) {
        ctx->pc = 0x14EE34u;
        goto label_14ee34;
    }
    ctx->pc = 0x14EE2Cu;
    {
        const bool branch_taken_0x14ee2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ee2c) {
            ctx->pc = 0x14EE74u;
            goto label_14ee74;
        }
    }
    ctx->pc = 0x14EE34u;
label_14ee34:
    // 0x14ee34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14ee34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14ee38:
    // 0x14ee38: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x14ee38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_14ee3c:
    // 0x14ee3c: 0x24449260  addiu       $a0, $v0, -0x6DA0
    ctx->pc = 0x14ee3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939232));
label_14ee40:
    // 0x14ee40: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x14ee40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_14ee44:
    // 0x14ee44: 0xc040c9e  jal         func_103278
label_14ee48:
    if (ctx->pc == 0x14EE48u) {
        ctx->pc = 0x14EE4Cu;
        goto label_14ee4c;
    }
    ctx->pc = 0x14EE44u;
    SET_GPR_U32(ctx, 31, 0x14EE4Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x14EE4Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x14EE4Cu) { return; }
    ctx->pc = 0x14EE4Cu;
label_14ee4c:
    // 0x14ee4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14ee4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14ee50:
    // 0x14ee50: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x14ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_14ee54:
    // 0x14ee54: 0x24449360  addiu       $a0, $v0, -0x6CA0
    ctx->pc = 0x14ee54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939488));
label_14ee58:
    // 0x14ee58: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x14ee58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_14ee5c:
    // 0x14ee5c: 0xc040c9e  jal         func_103278
label_14ee60:
    if (ctx->pc == 0x14EE60u) {
        ctx->pc = 0x14EE64u;
        goto label_14ee64;
    }
    ctx->pc = 0x14EE5Cu;
    SET_GPR_U32(ctx, 31, 0x14EE64u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x14EE64u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x14EE64u) { return; }
    ctx->pc = 0x14EE64u;
label_14ee64:
    // 0x14ee64: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x14ee64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_14ee68:
    // 0x14ee68: 0x24449240  addiu       $a0, $v0, -0x6DC0
    ctx->pc = 0x14ee68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939200));
label_14ee6c:
    // 0x14ee6c: 0xc07932c  jal         func_1E4CB0
label_14ee70:
    if (ctx->pc == 0x14EE70u) {
        ctx->pc = 0x14EE74u;
        goto label_14ee74;
    }
    ctx->pc = 0x14EE6Cu;
    SET_GPR_U32(ctx, 31, 0x14EE74u);
    ctx->pc = 0x1E4CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4CB0u, 0x14EE6Cu, 0x14EE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EE74u;
label_14ee74:
    // 0x14ee74: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x14ee74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
label_14ee78:
    // 0x14ee78: 0x8c23af60  lw          $v1, -0x50A0($at)
    ctx->pc = 0x14ee78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294946656)));
label_14ee7c:
    // 0x14ee7c: 0x2c6303e7  sltiu       $v1, $v1, 0x3E7
    ctx->pc = 0x14ee7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)999) ? 1 : 0);
label_14ee80:
    // 0x14ee80: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_14ee84:
    if (ctx->pc == 0x14EE84u) {
        ctx->pc = 0x14EE88u;
        goto label_14ee88;
    }
    ctx->pc = 0x14EE80u;
    {
        const bool branch_taken_0x14ee80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ee80) {
            ctx->pc = 0x14EE98u;
            goto label_14ee98;
        }
    }
    ctx->pc = 0x14EE88u;
label_14ee88:
    // 0x14ee88: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14ee88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14ee8c:
    // 0x14ee8c: 0x846413aa  lh          $a0, 0x13AA($v1)
    ctx->pc = 0x14ee8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5034)));
label_14ee90:
    // 0x14ee90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14ee90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14ee94:
    // 0x14ee94: 0xa46413a8  sh          $a0, 0x13A8($v1)
    ctx->pc = 0x14ee94u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5032), (uint16_t)GPR_U32(ctx, 4));
label_14ee98:
    // 0x14ee98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14ee98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14ee9c:
    // 0x14ee9c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x14ee9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_14eea0:
    // 0x14eea0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x14eea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_14eea4:
    // 0x14eea4: 0x10600148  beqz        $v1, . + 4 + (0x148 << 2)
label_14eea8:
    if (ctx->pc == 0x14EEA8u) {
        ctx->pc = 0x14EEACu;
        goto label_14eeac;
    }
    ctx->pc = 0x14EEA4u;
    {
        const bool branch_taken_0x14eea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eea4) {
            ctx->pc = 0x14F3C8u;
            goto label_14f3c8;
        }
    }
    ctx->pc = 0x14EEACu;
label_14eeac:
    // 0x14eeac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14eeacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14eeb0:
    // 0x14eeb0: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x14eeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_14eeb4:
    // 0x14eeb4: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x14eeb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_14eeb8:
    // 0x14eeb8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_14eebc:
    if (ctx->pc == 0x14EEBCu) {
        ctx->pc = 0x14EEC0u;
        goto label_14eec0;
    }
    ctx->pc = 0x14EEB8u;
    {
        const bool branch_taken_0x14eeb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eeb8) {
            ctx->pc = 0x14EEFCu;
            goto label_14eefc;
        }
    }
    ctx->pc = 0x14EEC0u;
label_14eec0:
    // 0x14eec0: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x14eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
label_14eec4:
    // 0x14eec4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14eec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14eec8:
    // 0x14eec8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_14eecc:
    // 0x14eecc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x14eeccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_14eed0:
    // 0x14eed0: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x14eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_14eed4:
    // 0x14eed4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x14eed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_14eed8:
    // 0x14eed8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14eed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_14eedc:
    // 0x14eedc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x14eedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14eee0:
    // 0x14eee0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x14eee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_14eee4:
    // 0x14eee4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14eee4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14eee8:
    // 0x14eee8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14eee8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14eeec:
    // 0x14eeec: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x14eeecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_14eef0:
    // 0x14eef0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14eef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14eef4:
    // 0x14eef4: 0xc086488  jal         func_219220
label_14eef8:
    if (ctx->pc == 0x14EEF8u) {
        ctx->pc = 0x14EEFCu;
        goto label_14eefc;
    }
    ctx->pc = 0x14EEF4u;
    SET_GPR_U32(ctx, 31, 0x14EEFCu);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x14EEF4u, 0x14EEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EEFCu;
label_14eefc:
    // 0x14eefc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14eefcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14ef00:
    // 0x14ef00: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x14ef00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_14ef04:
    // 0x14ef04: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x14ef04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_14ef08:
    // 0x14ef08: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_14ef0c:
    if (ctx->pc == 0x14EF0Cu) {
        ctx->pc = 0x14EF10u;
        goto label_14ef10;
    }
    ctx->pc = 0x14EF08u;
    {
        const bool branch_taken_0x14ef08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ef08) {
            ctx->pc = 0x14EF98u;
            goto label_14ef98;
        }
    }
    ctx->pc = 0x14EF10u;
label_14ef10:
    // 0x14ef10: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x14ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14ef14:
    // 0x14ef14: 0x904213a6  lbu         $v0, 0x13A6($v0)
    ctx->pc = 0x14ef14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5030)));
label_14ef18:
    // 0x14ef18: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14ef18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14ef1c:
    // 0x14ef1c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x14ef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14ef20:
    // 0x14ef20: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
label_14ef24:
    if (ctx->pc == 0x14EF24u) {
        ctx->pc = 0x14EF28u;
        goto label_14ef28;
    }
    ctx->pc = 0x14EF20u;
    {
        const bool branch_taken_0x14ef20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14ef20) {
            ctx->pc = 0x14EF8Cu;
            goto label_14ef8c;
        }
    }
    ctx->pc = 0x14EF28u;
label_14ef28:
    // 0x14ef28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14ef2c:
    // 0x14ef2c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_14ef30:
    if (ctx->pc == 0x14EF30u) {
        ctx->pc = 0x14EF34u;
        goto label_14ef34;
    }
    ctx->pc = 0x14EF2Cu;
    {
        const bool branch_taken_0x14ef2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14ef2c) {
            ctx->pc = 0x14EF78u;
            goto label_14ef78;
        }
    }
    ctx->pc = 0x14EF34u;
label_14ef34:
    // 0x14ef34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14ef34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14ef38:
    // 0x14ef38: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_14ef3c:
    if (ctx->pc == 0x14EF3Cu) {
        ctx->pc = 0x14EF40u;
        goto label_14ef40;
    }
    ctx->pc = 0x14EF38u;
    {
        const bool branch_taken_0x14ef38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14ef38) {
            ctx->pc = 0x14EF64u;
            goto label_14ef64;
        }
    }
    ctx->pc = 0x14EF40u;
label_14ef40:
    // 0x14ef40: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_14ef44:
    if (ctx->pc == 0x14EF44u) {
        ctx->pc = 0x14EF48u;
        goto label_14ef48;
    }
    ctx->pc = 0x14EF40u;
    {
        const bool branch_taken_0x14ef40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ef40) {
            ctx->pc = 0x14EF50u;
            goto label_14ef50;
        }
    }
    ctx->pc = 0x14EF48u;
label_14ef48:
    // 0x14ef48: 0x10000001  b           . + 4 + (0x1 << 2)
label_14ef4c:
    if (ctx->pc == 0x14EF4Cu) {
        ctx->pc = 0x14EF50u;
        goto label_14ef50;
    }
    ctx->pc = 0x14EF48u;
    {
        const bool branch_taken_0x14ef48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ef48) {
            ctx->pc = 0x14EF50u;
            goto label_14ef50;
        }
    }
    ctx->pc = 0x14EF50u;
label_14ef50:
    // 0x14ef50: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x14ef50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_14ef54:
    // 0x14ef54: 0xc0bc270  jal         func_2F09C0
label_14ef58:
    if (ctx->pc == 0x14EF58u) {
        ctx->pc = 0x14EF5Cu;
        goto label_14ef5c;
    }
    ctx->pc = 0x14EF54u;
    SET_GPR_U32(ctx, 31, 0x14EF5Cu);
    ctx->pc = 0x2F09C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F09C0u, 0x14EF54u, 0x14EF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EF5Cu;
label_14ef5c:
    // 0x14ef5c: 0x1000000e  b           . + 4 + (0xE << 2)
label_14ef60:
    if (ctx->pc == 0x14EF60u) {
        ctx->pc = 0x14EF64u;
        goto label_14ef64;
    }
    ctx->pc = 0x14EF5Cu;
    {
        const bool branch_taken_0x14ef5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ef5c) {
            ctx->pc = 0x14EF98u;
            goto label_14ef98;
        }
    }
    ctx->pc = 0x14EF64u;
label_14ef64:
    // 0x14ef64: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x14ef64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_14ef68:
    // 0x14ef68: 0xc0c5360  jal         func_314D80
label_14ef6c:
    if (ctx->pc == 0x14EF6Cu) {
        ctx->pc = 0x14EF70u;
        goto label_14ef70;
    }
    ctx->pc = 0x14EF68u;
    SET_GPR_U32(ctx, 31, 0x14EF70u);
    ctx->pc = 0x314D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314D80u, 0x14EF68u, 0x14EF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EF70u;
label_14ef70:
    // 0x14ef70: 0x10000009  b           . + 4 + (0x9 << 2)
label_14ef74:
    if (ctx->pc == 0x14EF74u) {
        ctx->pc = 0x14EF78u;
        goto label_14ef78;
    }
    ctx->pc = 0x14EF70u;
    {
        const bool branch_taken_0x14ef70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ef70) {
            ctx->pc = 0x14EF98u;
            goto label_14ef98;
        }
    }
    ctx->pc = 0x14EF78u;
label_14ef78:
    // 0x14ef78: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x14ef78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_14ef7c:
    // 0x14ef7c: 0xc0bc270  jal         func_2F09C0
label_14ef80:
    if (ctx->pc == 0x14EF80u) {
        ctx->pc = 0x14EF84u;
        goto label_14ef84;
    }
    ctx->pc = 0x14EF7Cu;
    SET_GPR_U32(ctx, 31, 0x14EF84u);
    ctx->pc = 0x2F09C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F09C0u, 0x14EF7Cu, 0x14EF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EF84u;
label_14ef84:
    // 0x14ef84: 0x10000004  b           . + 4 + (0x4 << 2)
label_14ef88:
    if (ctx->pc == 0x14EF88u) {
        ctx->pc = 0x14EF8Cu;
        goto label_14ef8c;
    }
    ctx->pc = 0x14EF84u;
    {
        const bool branch_taken_0x14ef84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ef84) {
            ctx->pc = 0x14EF98u;
            goto label_14ef98;
        }
    }
    ctx->pc = 0x14EF8Cu;
label_14ef8c:
    // 0x14ef8c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x14ef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_14ef90:
    // 0x14ef90: 0xc0c5360  jal         func_314D80
label_14ef94:
    if (ctx->pc == 0x14EF94u) {
        ctx->pc = 0x14EF98u;
        goto label_14ef98;
    }
    ctx->pc = 0x14EF90u;
    SET_GPR_U32(ctx, 31, 0x14EF98u);
    ctx->pc = 0x314D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314D80u, 0x14EF90u, 0x14EF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EF98u;
label_14ef98:
    // 0x14ef98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14ef98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14ef9c:
    // 0x14ef9c: 0x906313f8  lbu         $v1, 0x13F8($v1)
    ctx->pc = 0x14ef9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5112)));
label_14efa0:
    // 0x14efa0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x14efa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14efa4:
    // 0x14efa4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14efa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14efa8:
    // 0x14efa8: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
label_14efac:
    if (ctx->pc == 0x14EFACu) {
        ctx->pc = 0x14EFB0u;
        goto label_14efb0;
    }
    ctx->pc = 0x14EFA8u;
    {
        const bool branch_taken_0x14efa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14efa8) {
            ctx->pc = 0x14EFF4u;
            goto label_14eff4;
        }
    }
    ctx->pc = 0x14EFB0u;
label_14efb0:
    // 0x14efb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14efb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14efb4:
    // 0x14efb4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_14efb8:
    if (ctx->pc == 0x14EFB8u) {
        ctx->pc = 0x14EFBCu;
        goto label_14efbc;
    }
    ctx->pc = 0x14EFB4u;
    {
        const bool branch_taken_0x14efb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14efb4) {
            ctx->pc = 0x14EFC4u;
            goto label_14efc4;
        }
    }
    ctx->pc = 0x14EFBCu;
label_14efbc:
    // 0x14efbc: 0x10000017  b           . + 4 + (0x17 << 2)
label_14efc0:
    if (ctx->pc == 0x14EFC0u) {
        ctx->pc = 0x14EFC4u;
        goto label_14efc4;
    }
    ctx->pc = 0x14EFBCu;
    {
        const bool branch_taken_0x14efbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14efbc) {
            ctx->pc = 0x14F01Cu;
            goto label_14f01c;
        }
    }
    ctx->pc = 0x14EFC4u;
label_14efc4:
    // 0x14efc4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14efc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14efc8:
    // 0x14efc8: 0x84631416  lh          $v1, 0x1416($v1)
    ctx->pc = 0x14efc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5142)));
label_14efcc:
    // 0x14efcc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x14efccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_14efd0:
    // 0x14efd0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x14efd0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_14efd4:
    // 0x14efd4: 0x2863003c  slti        $v1, $v1, 0x3C
    ctx->pc = 0x14efd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)60) ? 1 : 0);
label_14efd8:
    // 0x14efd8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_14efdc:
    if (ctx->pc == 0x14EFDCu) {
        ctx->pc = 0x14EFE0u;
        goto label_14efe0;
    }
    ctx->pc = 0x14EFD8u;
    {
        const bool branch_taken_0x14efd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14efd8) {
            ctx->pc = 0x14F01Cu;
            goto label_14f01c;
        }
    }
    ctx->pc = 0x14EFE0u;
label_14efe0:
    // 0x14efe0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x14efe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_14efe4:
    // 0x14efe4: 0xc0bd128  jal         func_2F44A0
label_14efe8:
    if (ctx->pc == 0x14EFE8u) {
        ctx->pc = 0x14EFECu;
        goto label_14efec;
    }
    ctx->pc = 0x14EFE4u;
    SET_GPR_U32(ctx, 31, 0x14EFECu);
    ctx->pc = 0x2F44A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F44A0u, 0x14EFE4u, 0x14EFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EFECu;
label_14efec:
    // 0x14efec: 0x1000000b  b           . + 4 + (0xB << 2)
label_14eff0:
    if (ctx->pc == 0x14EFF0u) {
        ctx->pc = 0x14EFF4u;
        goto label_14eff4;
    }
    ctx->pc = 0x14EFECu;
    {
        const bool branch_taken_0x14efec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14efec) {
            ctx->pc = 0x14F01Cu;
            goto label_14f01c;
        }
    }
    ctx->pc = 0x14EFF4u;
label_14eff4:
    // 0x14eff4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14eff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14eff8:
    // 0x14eff8: 0x84631416  lh          $v1, 0x1416($v1)
    ctx->pc = 0x14eff8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5142)));
label_14effc:
    // 0x14effc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x14effcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_14f000:
    // 0x14f000: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x14f000u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_14f004:
    // 0x14f004: 0x28630078  slti        $v1, $v1, 0x78
    ctx->pc = 0x14f004u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)120) ? 1 : 0);
label_14f008:
    // 0x14f008: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_14f00c:
    if (ctx->pc == 0x14F00Cu) {
        ctx->pc = 0x14F010u;
        goto label_14f010;
    }
    ctx->pc = 0x14F008u;
    {
        const bool branch_taken_0x14f008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f008) {
            ctx->pc = 0x14F01Cu;
            goto label_14f01c;
        }
    }
    ctx->pc = 0x14F010u;
label_14f010:
    // 0x14f010: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x14f010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_14f014:
    // 0x14f014: 0xc0bd24c  jal         func_2F4930
label_14f018:
    if (ctx->pc == 0x14F018u) {
        ctx->pc = 0x14F01Cu;
        goto label_14f01c;
    }
    ctx->pc = 0x14F014u;
    SET_GPR_U32(ctx, 31, 0x14F01Cu);
    ctx->pc = 0x2F4930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4930u, 0x14F014u, 0x14F01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F01Cu;
label_14f01c:
    // 0x14f01c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14f01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14f020:
    // 0x14f020: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x14f020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_14f024:
    // 0x14f024: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x14f024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_14f028:
    // 0x14f028: 0x1060007d  beqz        $v1, . + 4 + (0x7D << 2)
label_14f02c:
    if (ctx->pc == 0x14F02Cu) {
        ctx->pc = 0x14F030u;
        goto label_14f030;
    }
    ctx->pc = 0x14F028u;
    {
        const bool branch_taken_0x14f028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f028) {
            ctx->pc = 0x14F220u;
            goto label_14f220;
        }
    }
    ctx->pc = 0x14F030u;
label_14f030:
    // 0x14f030: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x14f030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14f034:
    // 0x14f034: 0x904213a6  lbu         $v0, 0x13A6($v0)
    ctx->pc = 0x14f034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5030)));
label_14f038:
    // 0x14f038: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14f038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f03c:
    // 0x14f03c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x14f03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14f040:
    // 0x14f040: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_14f044:
    if (ctx->pc == 0x14F044u) {
        ctx->pc = 0x14F048u;
        goto label_14f048;
    }
    ctx->pc = 0x14F040u;
    {
        const bool branch_taken_0x14f040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f040) {
            ctx->pc = 0x14F070u;
            goto label_14f070;
        }
    }
    ctx->pc = 0x14F048u;
label_14f048:
    // 0x14f048: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14f048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14f04c:
    // 0x14f04c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_14f050:
    if (ctx->pc == 0x14F050u) {
        ctx->pc = 0x14F054u;
        goto label_14f054;
    }
    ctx->pc = 0x14F04Cu;
    {
        const bool branch_taken_0x14f04c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f04c) {
            ctx->pc = 0x14F070u;
            goto label_14f070;
        }
    }
    ctx->pc = 0x14F054u;
label_14f054:
    // 0x14f054: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14f054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14f058:
    // 0x14f058: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_14f05c:
    if (ctx->pc == 0x14F05Cu) {
        ctx->pc = 0x14F060u;
        goto label_14f060;
    }
    ctx->pc = 0x14F058u;
    {
        const bool branch_taken_0x14f058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f058) {
            ctx->pc = 0x14F070u;
            goto label_14f070;
        }
    }
    ctx->pc = 0x14F060u;
label_14f060:
    // 0x14f060: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_14f064:
    if (ctx->pc == 0x14F064u) {
        ctx->pc = 0x14F068u;
        goto label_14f068;
    }
    ctx->pc = 0x14F060u;
    {
        const bool branch_taken_0x14f060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f060) {
            ctx->pc = 0x14F070u;
            goto label_14f070;
        }
    }
    ctx->pc = 0x14F068u;
label_14f068:
    // 0x14f068: 0x10000001  b           . + 4 + (0x1 << 2)
label_14f06c:
    if (ctx->pc == 0x14F06Cu) {
        ctx->pc = 0x14F070u;
        goto label_14f070;
    }
    ctx->pc = 0x14F068u;
    {
        const bool branch_taken_0x14f068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f068) {
            ctx->pc = 0x14F070u;
            goto label_14f070;
        }
    }
    ctx->pc = 0x14F070u;
label_14f070:
    // 0x14f070: 0x3c02413b  lui         $v0, 0x413B
    ctx->pc = 0x14f070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16699 << 16));
label_14f074:
    // 0x14f074: 0x3442902e  ori         $v0, $v0, 0x902E
    ctx->pc = 0x14f074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36910);
label_14f078:
    // 0x14f078: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f07c:
    // 0x14f07c: 0x0  nop
    ctx->pc = 0x14f07cu;
    // NOP
label_14f080:
    // 0x14f080: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x14f080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_14f084:
    // 0x14f084: 0x3c024223  lui         $v0, 0x4223
    ctx->pc = 0x14f084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16931 << 16));
label_14f088:
    // 0x14f088: 0x344292a3  ori         $v0, $v0, 0x92A3
    ctx->pc = 0x14f088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37539);
label_14f08c:
    // 0x14f08c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f08cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f090:
    // 0x14f090: 0x0  nop
    ctx->pc = 0x14f090u;
    // NOP
label_14f094:
    // 0x14f094: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x14f094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_14f098:
    // 0x14f098: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x14f098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
label_14f09c:
    // 0x14f09c: 0x344207ae  ori         $v0, $v0, 0x7AE
    ctx->pc = 0x14f09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1966);
label_14f0a0:
    // 0x14f0a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f0a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f0a4:
    // 0x14f0a4: 0x0  nop
    ctx->pc = 0x14f0a4u;
    // NOP
label_14f0a8:
    // 0x14f0a8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x14f0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_14f0ac:
    // 0x14f0ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14f0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_14f0b0:
    // 0x14f0b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f0b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f0b4:
    // 0x14f0b4: 0x0  nop
    ctx->pc = 0x14f0b4u;
    // NOP
label_14f0b8:
    // 0x14f0b8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x14f0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_14f0bc:
    // 0x14f0bc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x14f0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_14f0c0:
    // 0x14f0c0: 0xc0675a4  jal         func_19D690
label_14f0c4:
    if (ctx->pc == 0x14F0C4u) {
        ctx->pc = 0x14F0C8u;
        goto label_14f0c8;
    }
    ctx->pc = 0x14F0C0u;
    SET_GPR_U32(ctx, 31, 0x14F0C8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x14F0C0u, 0x14F0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F0C8u;
label_14f0c8:
    // 0x14f0c8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x14f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_14f0cc:
    // 0x14f0cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14f0ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14f0d0:
    // 0x14f0d0: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x14f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_14f0d4:
    // 0x14f0d4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x14f0d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_14f0d8:
    // 0x14f0d8: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x14f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_14f0dc:
    // 0x14f0dc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14f0dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_14f0e0:
    // 0x14f0e0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x14f0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14f0e4:
    // 0x14f0e4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x14f0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_14f0e8:
    // 0x14f0e8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x14f0e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_14f0ec:
    // 0x14f0ec: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x14f0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14f0f0:
    // 0x14f0f0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x14f0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_14f0f4:
    // 0x14f0f4: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x14f0f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_14f0f8:
    // 0x14f0f8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x14f0f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14f0fc:
    // 0x14f0fc: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x14f0fcu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14f100:
    // 0x14f100: 0xc0862f8  jal         func_218BE0
label_14f104:
    if (ctx->pc == 0x14F104u) {
        ctx->pc = 0x14F108u;
        goto label_14f108;
    }
    ctx->pc = 0x14F100u;
    SET_GPR_U32(ctx, 31, 0x14F108u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x14F100u, 0x14F108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F108u;
label_14f108:
    // 0x14f108: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x14f108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_14f10c:
    // 0x14f10c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x14f10cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_14f110:
    // 0x14f110: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x14f110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_14f114:
    // 0x14f114: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x14f114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_14f118:
    // 0x14f118: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x14f118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14f11c:
    // 0x14f11c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x14f11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_14f120:
    // 0x14f120: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14f120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14f124:
    // 0x14f124: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x14f124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_14f128:
    // 0x14f128: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14f128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_14f12c:
    // 0x14f12c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x14f12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14f130:
    // 0x14f130: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x14f130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_14f134:
    // 0x14f134: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x14f134u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_14f138:
    // 0x14f138: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x14f138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14f13c:
    // 0x14f13c: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x14f13cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14f140:
    // 0x14f140: 0xc0862f8  jal         func_218BE0
label_14f144:
    if (ctx->pc == 0x14F144u) {
        ctx->pc = 0x14F148u;
        goto label_14f148;
    }
    ctx->pc = 0x14F140u;
    SET_GPR_U32(ctx, 31, 0x14F148u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x14F140u, 0x14F148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F148u;
label_14f148:
    // 0x14f148: 0x3c02c13b  lui         $v0, 0xC13B
    ctx->pc = 0x14f148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49467 << 16));
label_14f14c:
    // 0x14f14c: 0x3442902e  ori         $v0, $v0, 0x902E
    ctx->pc = 0x14f14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36910);
label_14f150:
    // 0x14f150: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f154:
    // 0x14f154: 0x0  nop
    ctx->pc = 0x14f154u;
    // NOP
label_14f158:
    // 0x14f158: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x14f158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_14f15c:
    // 0x14f15c: 0x3c024223  lui         $v0, 0x4223
    ctx->pc = 0x14f15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16931 << 16));
label_14f160:
    // 0x14f160: 0x344292a3  ori         $v0, $v0, 0x92A3
    ctx->pc = 0x14f160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37539);
label_14f164:
    // 0x14f164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f168:
    // 0x14f168: 0x0  nop
    ctx->pc = 0x14f168u;
    // NOP
label_14f16c:
    // 0x14f16c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x14f16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_14f170:
    // 0x14f170: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x14f170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
label_14f174:
    // 0x14f174: 0x344207ae  ori         $v0, $v0, 0x7AE
    ctx->pc = 0x14f174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1966);
label_14f178:
    // 0x14f178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f17c:
    // 0x14f17c: 0x0  nop
    ctx->pc = 0x14f17cu;
    // NOP
label_14f180:
    // 0x14f180: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x14f180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_14f184:
    // 0x14f184: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14f184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_14f188:
    // 0x14f188: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f18c:
    // 0x14f18c: 0x0  nop
    ctx->pc = 0x14f18cu;
    // NOP
label_14f190:
    // 0x14f190: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x14f190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_14f194:
    // 0x14f194: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x14f194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_14f198:
    // 0x14f198: 0xc0675a4  jal         func_19D690
label_14f19c:
    if (ctx->pc == 0x14F19Cu) {
        ctx->pc = 0x14F1A0u;
        goto label_14f1a0;
    }
    ctx->pc = 0x14F198u;
    SET_GPR_U32(ctx, 31, 0x14F1A0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x14F198u, 0x14F1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F1A0u;
label_14f1a0:
    // 0x14f1a0: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x14f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_14f1a4:
    // 0x14f1a4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x14f1a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_14f1a8:
    // 0x14f1a8: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x14f1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_14f1ac:
    // 0x14f1ac: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14f1acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_14f1b0:
    // 0x14f1b0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x14f1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_14f1b4:
    // 0x14f1b4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x14f1b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_14f1b8:
    // 0x14f1b8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x14f1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14f1bc:
    // 0x14f1bc: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x14f1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_14f1c0:
    // 0x14f1c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14f1c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14f1c4:
    // 0x14f1c4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x14f1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14f1c8:
    // 0x14f1c8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x14f1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_14f1cc:
    // 0x14f1cc: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x14f1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_14f1d0:
    // 0x14f1d0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x14f1d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14f1d4:
    // 0x14f1d4: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x14f1d4u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14f1d8:
    // 0x14f1d8: 0xc0862f8  jal         func_218BE0
label_14f1dc:
    if (ctx->pc == 0x14F1DCu) {
        ctx->pc = 0x14F1E0u;
        goto label_14f1e0;
    }
    ctx->pc = 0x14F1D8u;
    SET_GPR_U32(ctx, 31, 0x14F1E0u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x14F1D8u, 0x14F1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F1E0u;
label_14f1e0:
    // 0x14f1e0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x14f1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14f1e4:
    // 0x14f1e4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x14f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_14f1e8:
    // 0x14f1e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14f1e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14f1ec:
    // 0x14f1ec: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x14f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_14f1f0:
    // 0x14f1f0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x14f1f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_14f1f4:
    // 0x14f1f4: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x14f1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_14f1f8:
    // 0x14f1f8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14f1f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_14f1fc:
    // 0x14f1fc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x14f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_14f200:
    // 0x14f200: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x14f200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_14f204:
    // 0x14f204: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x14f204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14f208:
    // 0x14f208: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x14f208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_14f20c:
    // 0x14f20c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x14f20cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_14f210:
    // 0x14f210: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x14f210u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14f214:
    // 0x14f214: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x14f214u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14f218:
    // 0x14f218: 0xc0862f8  jal         func_218BE0
label_14f21c:
    if (ctx->pc == 0x14F21Cu) {
        ctx->pc = 0x14F220u;
        goto label_14f220;
    }
    ctx->pc = 0x14F218u;
    SET_GPR_U32(ctx, 31, 0x14F220u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x14F218u, 0x14F220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F220u;
label_14f220:
    // 0x14f220: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14f220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14f224:
    // 0x14f224: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x14f224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_14f228:
    // 0x14f228: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x14f228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_14f22c:
    // 0x14f22c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14f22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_14f230:
    // 0x14f230: 0x10600065  beqz        $v1, . + 4 + (0x65 << 2)
label_14f234:
    if (ctx->pc == 0x14F234u) {
        ctx->pc = 0x14F238u;
        goto label_14f238;
    }
    ctx->pc = 0x14F230u;
    {
        const bool branch_taken_0x14f230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f230) {
            ctx->pc = 0x14F3C8u;
            goto label_14f3c8;
        }
    }
    ctx->pc = 0x14F238u;
label_14f238:
    // 0x14f238: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14f238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14f23c:
    // 0x14f23c: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x14f23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 316)));
label_14f240:
    // 0x14f240: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x14f240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_14f244:
    // 0x14f244: 0x14600060  bnez        $v1, . + 4 + (0x60 << 2)
label_14f248:
    if (ctx->pc == 0x14F248u) {
        ctx->pc = 0x14F24Cu;
        goto label_14f24c;
    }
    ctx->pc = 0x14F244u;
    {
        const bool branch_taken_0x14f244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f244) {
            ctx->pc = 0x14F3C8u;
            goto label_14f3c8;
        }
    }
    ctx->pc = 0x14F24Cu;
label_14f24c:
    // 0x14f24c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x14f24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_14f250:
    // 0x14f250: 0xc0675a4  jal         func_19D690
label_14f254:
    if (ctx->pc == 0x14F254u) {
        ctx->pc = 0x14F258u;
        goto label_14f258;
    }
    ctx->pc = 0x14F250u;
    SET_GPR_U32(ctx, 31, 0x14F258u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x14F250u, 0x14F258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F258u;
label_14f258:
    // 0x14f258: 0xc067694  jal         func_19DA50
label_14f25c:
    if (ctx->pc == 0x14F25Cu) {
        ctx->pc = 0x14F260u;
        goto label_14f260;
    }
    ctx->pc = 0x14F258u;
    SET_GPR_U32(ctx, 31, 0x14F260u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x14F258u, 0x14F260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F260u;
label_14f260:
    // 0x14f260: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14f260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f264:
    // 0x14f264: 0x30650007  andi        $a1, $v1, 0x7
    ctx->pc = 0x14f264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_14f268:
    // 0x14f268: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x14f268u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_14f26c:
    // 0x14f26c: 0x10200056  beqz        $at, . + 4 + (0x56 << 2)
label_14f270:
    if (ctx->pc == 0x14F270u) {
        ctx->pc = 0x14F274u;
        goto label_14f274;
    }
    ctx->pc = 0x14F26Cu;
    {
        const bool branch_taken_0x14f26c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f26c) {
            ctx->pc = 0x14F3C8u;
            goto label_14f3c8;
        }
    }
    ctx->pc = 0x14F274u;
label_14f274:
    // 0x14f274: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x14f274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_14f278:
    // 0x14f278: 0x2464e920  addiu       $a0, $v1, -0x16E0
    ctx->pc = 0x14f278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961440));
label_14f27c:
    // 0x14f27c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x14f27cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_14f280:
    // 0x14f280: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14f280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_14f284:
    // 0x14f284: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14f284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14f288:
    // 0x14f288: 0x600008  jr          $v1
label_14f28c:
    if (ctx->pc == 0x14F28Cu) {
        ctx->pc = 0x14F290u;
        goto label_14f290;
    }
    ctx->pc = 0x14F288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F288u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14F290u;
label_14f290:
    // 0x14f290: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x14f290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_14f294:
    // 0x14f294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f298:
    // 0x14f298: 0x0  nop
    ctx->pc = 0x14f298u;
    // NOP
label_14f29c:
    // 0x14f29c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x14f29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_14f2a0:
    // 0x14f2a0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x14f2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_14f2a4:
    // 0x14f2a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14f2a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14f2a8:
    // 0x14f2a8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x14f2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14f2ac:
    // 0x14f2ac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14f2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14f2b0:
    // 0x14f2b0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x14f2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_14f2b4:
    // 0x14f2b4: 0xc0bbca0  jal         func_2EF280
label_14f2b8:
    if (ctx->pc == 0x14F2B8u) {
        ctx->pc = 0x14F2BCu;
        goto label_14f2bc;
    }
    ctx->pc = 0x14F2B4u;
    SET_GPR_U32(ctx, 31, 0x14F2BCu);
    ctx->pc = 0x2EF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF280u, 0x14F2B4u, 0x14F2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F2BCu;
label_14f2bc:
    // 0x14f2bc: 0x10000042  b           . + 4 + (0x42 << 2)
label_14f2c0:
    if (ctx->pc == 0x14F2C0u) {
        ctx->pc = 0x14F2C4u;
        goto label_14f2c4;
    }
    ctx->pc = 0x14F2BCu;
    {
        const bool branch_taken_0x14f2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f2bc) {
            ctx->pc = 0x14F3C8u;
            goto label_14f3c8;
        }
    }
    ctx->pc = 0x14F2C4u;
label_14f2c4:
    // 0x14f2c4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x14f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_14f2c8:
    // 0x14f2c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14f2c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14f2cc:
    // 0x14f2cc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x14f2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14f2d0:
    // 0x14f2d0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x14f2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_14f2d4:
    // 0x14f2d4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x14f2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_14f2d8:
    // 0x14f2d8: 0xc0bbca0  jal         func_2EF280
label_14f2dc:
    if (ctx->pc == 0x14F2DCu) {
        ctx->pc = 0x14F2E0u;
        goto label_14f2e0;
    }
    ctx->pc = 0x14F2D8u;
    SET_GPR_U32(ctx, 31, 0x14F2E0u);
    ctx->pc = 0x2EF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF280u, 0x14F2D8u, 0x14F2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F2E0u;
label_14f2e0:
    // 0x14f2e0: 0x10000039  b           . + 4 + (0x39 << 2)
label_14f2e4:
    if (ctx->pc == 0x14F2E4u) {
        ctx->pc = 0x14F2E8u;
        goto label_14f2e8;
    }
    ctx->pc = 0x14F2E0u;
    {
        const bool branch_taken_0x14f2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f2e0) {
            ctx->pc = 0x14F3C8u;
            goto label_14f3c8;
        }
    }
    ctx->pc = 0x14F2E8u;
label_14f2e8:
    // 0x14f2e8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x14f2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_14f2ec:
    // 0x14f2ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14f2ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14f2f0:
    // 0x14f2f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x14f2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14f2f4:
    // 0x14f2f4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x14f2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_14f2f8:
    // 0x14f2f8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x14f2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_14f2fc:
    // 0x14f2fc: 0xc0bbca0  jal         func_2EF280
label_14f300:
    if (ctx->pc == 0x14F300u) {
        ctx->pc = 0x14F304u;
        goto label_14f304;
    }
    ctx->pc = 0x14F2FCu;
    SET_GPR_U32(ctx, 31, 0x14F304u);
    ctx->pc = 0x2EF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF280u, 0x14F2FCu, 0x14F304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F304u;
label_14f304:
    // 0x14f304: 0x10000030  b           . + 4 + (0x30 << 2)
label_14f308:
    if (ctx->pc == 0x14F308u) {
        ctx->pc = 0x14F30Cu;
        goto label_14f30c;
    }
    ctx->pc = 0x14F304u;
    {
        const bool branch_taken_0x14f304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f304) {
            ctx->pc = 0x14F3C8u;
            goto label_14f3c8;
        }
    }
    ctx->pc = 0x14F30Cu;
label_14f30c:
    // 0x14f30c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x14f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_14f310:
    // 0x14f310: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14f310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14f314:
    // 0x14f314: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x14f314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14f318:
    // 0x14f318: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x14f318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_14f31c:
    // 0x14f31c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x14f31cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_14f320:
    // 0x14f320: 0xc0bbca0  jal         func_2EF280
label_14f324:
    if (ctx->pc == 0x14F324u) {
        ctx->pc = 0x14F328u;
        goto label_14f328;
    }
    ctx->pc = 0x14F320u;
    SET_GPR_U32(ctx, 31, 0x14F328u);
    ctx->pc = 0x2EF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF280u, 0x14F320u, 0x14F328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F328u;
label_14f328:
    // 0x14f328: 0x10000027  b           . + 4 + (0x27 << 2)
label_14f32c:
    if (ctx->pc == 0x14F32Cu) {
        ctx->pc = 0x14F330u;
        goto label_14f330;
    }
    ctx->pc = 0x14F328u;
    {
        const bool branch_taken_0x14f328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f328) {
            ctx->pc = 0x14F3C8u;
            goto label_14f3c8;
        }
    }
    ctx->pc = 0x14F330u;
label_14f330:
    // 0x14f330: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x14f330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_14f334:
    // 0x14f334: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x14f334u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14f338:
    // 0x14f338: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x14f338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14f33c:
    // 0x14f33c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x14f33cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_14f340:
    // 0x14f340: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x14f340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_14f344:
    // 0x14f344: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x14f344u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_14f348:
    // 0x14f348: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x14f348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_14f34c:
    // 0x14f34c: 0xc0bbca0  jal         func_2EF280
label_14f350:
    if (ctx->pc == 0x14F350u) {
        ctx->pc = 0x14F354u;
        goto label_14f354;
    }
    ctx->pc = 0x14F34Cu;
    SET_GPR_U32(ctx, 31, 0x14F354u);
    ctx->pc = 0x2EF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF280u, 0x14F34Cu, 0x14F354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F354u;
label_14f354:
    // 0x14f354: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x14f354u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_14f358:
    // 0x14f358: 0x1000001b  b           . + 4 + (0x1B << 2)
label_14f35c:
    if (ctx->pc == 0x14F35Cu) {
        ctx->pc = 0x14F360u;
        goto label_14f360;
    }
    ctx->pc = 0x14F358u;
    {
        const bool branch_taken_0x14f358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f358) {
            ctx->pc = 0x14F3C8u;
            goto label_14f3c8;
        }
    }
    ctx->pc = 0x14F360u;
label_14f360:
    // 0x14f360: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x14f360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_14f364:
    // 0x14f364: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f368:
    // 0x14f368: 0x0  nop
    ctx->pc = 0x14f368u;
    // NOP
label_14f36c:
    // 0x14f36c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x14f36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_14f370:
    // 0x14f370: 0x3c054120  lui         $a1, 0x4120
    ctx->pc = 0x14f370u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16672 << 16));
label_14f374:
    // 0x14f374: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x14f374u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14f378:
    // 0x14f378: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x14f378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14f37c:
    // 0x14f37c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x14f37cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_14f380:
    // 0x14f380: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x14f380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_14f384:
    // 0x14f384: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x14f384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_14f388:
    // 0x14f388: 0xc0bbca0  jal         func_2EF280
label_14f38c:
    if (ctx->pc == 0x14F38Cu) {
        ctx->pc = 0x14F390u;
        goto label_14f390;
    }
    ctx->pc = 0x14F388u;
    SET_GPR_U32(ctx, 31, 0x14F390u);
    ctx->pc = 0x2EF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF280u, 0x14F388u, 0x14F390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F390u;
label_14f390:
    // 0x14f390: 0x1000000d  b           . + 4 + (0xD << 2)
label_14f394:
    if (ctx->pc == 0x14F394u) {
        ctx->pc = 0x14F398u;
        goto label_14f398;
    }
    ctx->pc = 0x14F390u;
    {
        const bool branch_taken_0x14f390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f390) {
            ctx->pc = 0x14F3C8u;
            goto label_14f3c8;
        }
    }
    ctx->pc = 0x14F398u;
label_14f398:
    // 0x14f398: 0x3c04c1a0  lui         $a0, 0xC1A0
    ctx->pc = 0x14f398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49568 << 16));
label_14f39c:
    // 0x14f39c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x14f39cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f3a0:
    // 0x14f3a0: 0x0  nop
    ctx->pc = 0x14f3a0u;
    // NOP
label_14f3a4:
    // 0x14f3a4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x14f3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_14f3a8:
    // 0x14f3a8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x14f3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_14f3ac:
    // 0x14f3ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14f3acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14f3b0:
    // 0x14f3b0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x14f3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14f3b4:
    // 0x14f3b4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x14f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_14f3b8:
    // 0x14f3b8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x14f3b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_14f3bc:
    // 0x14f3bc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x14f3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_14f3c0:
    // 0x14f3c0: 0xc0bbca0  jal         func_2EF280
label_14f3c4:
    if (ctx->pc == 0x14F3C4u) {
        ctx->pc = 0x14F3C8u;
        goto label_14f3c8;
    }
    ctx->pc = 0x14F3C0u;
    SET_GPR_U32(ctx, 31, 0x14F3C8u);
    ctx->pc = 0x2EF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF280u, 0x14F3C0u, 0x14F3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F3C8u;
label_14f3c8:
    // 0x14f3c8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x14f3c8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14f3cc:
    // 0x14f3cc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x14f3ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_14f3d0:
    // 0x14f3d0: 0x3e00008  jr          $ra
label_14f3d4:
    if (ctx->pc == 0x14F3D4u) {
        ctx->pc = 0x14F3D8u;
        goto label_fallthrough_0x14f3d0;
    }
    ctx->pc = 0x14F3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14f3d0:
    ctx->pc = 0x14F3D8u;
}
