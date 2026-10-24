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

// Function: Em10_act_chk_stronger
// Address: 0x125dc0 - 0x126564
void Em10_act_chk_stronger_0x125dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_act_chk_stronger_0x125dc0");
#endif

    switch (ctx->pc) {
        case 0x125dc0u: goto label_125dc0;
        case 0x125dc4u: goto label_125dc4;
        case 0x125dc8u: goto label_125dc8;
        case 0x125dccu: goto label_125dcc;
        case 0x125dd0u: goto label_125dd0;
        case 0x125dd4u: goto label_125dd4;
        case 0x125dd8u: goto label_125dd8;
        case 0x125ddcu: goto label_125ddc;
        case 0x125de0u: goto label_125de0;
        case 0x125de4u: goto label_125de4;
        case 0x125de8u: goto label_125de8;
        case 0x125decu: goto label_125dec;
        case 0x125df0u: goto label_125df0;
        case 0x125df4u: goto label_125df4;
        case 0x125df8u: goto label_125df8;
        case 0x125dfcu: goto label_125dfc;
        case 0x125e00u: goto label_125e00;
        case 0x125e04u: goto label_125e04;
        case 0x125e08u: goto label_125e08;
        case 0x125e0cu: goto label_125e0c;
        case 0x125e10u: goto label_125e10;
        case 0x125e14u: goto label_125e14;
        case 0x125e18u: goto label_125e18;
        case 0x125e1cu: goto label_125e1c;
        case 0x125e20u: goto label_125e20;
        case 0x125e24u: goto label_125e24;
        case 0x125e28u: goto label_125e28;
        case 0x125e2cu: goto label_125e2c;
        case 0x125e30u: goto label_125e30;
        case 0x125e34u: goto label_125e34;
        case 0x125e38u: goto label_125e38;
        case 0x125e3cu: goto label_125e3c;
        case 0x125e40u: goto label_125e40;
        case 0x125e44u: goto label_125e44;
        case 0x125e48u: goto label_125e48;
        case 0x125e4cu: goto label_125e4c;
        case 0x125e50u: goto label_125e50;
        case 0x125e54u: goto label_125e54;
        case 0x125e58u: goto label_125e58;
        case 0x125e5cu: goto label_125e5c;
        case 0x125e60u: goto label_125e60;
        case 0x125e64u: goto label_125e64;
        case 0x125e68u: goto label_125e68;
        case 0x125e6cu: goto label_125e6c;
        case 0x125e70u: goto label_125e70;
        case 0x125e74u: goto label_125e74;
        case 0x125e78u: goto label_125e78;
        case 0x125e7cu: goto label_125e7c;
        case 0x125e80u: goto label_125e80;
        case 0x125e84u: goto label_125e84;
        case 0x125e88u: goto label_125e88;
        case 0x125e8cu: goto label_125e8c;
        case 0x125e90u: goto label_125e90;
        case 0x125e94u: goto label_125e94;
        case 0x125e98u: goto label_125e98;
        case 0x125e9cu: goto label_125e9c;
        case 0x125ea0u: goto label_125ea0;
        case 0x125ea4u: goto label_125ea4;
        case 0x125ea8u: goto label_125ea8;
        case 0x125eacu: goto label_125eac;
        case 0x125eb0u: goto label_125eb0;
        case 0x125eb4u: goto label_125eb4;
        case 0x125eb8u: goto label_125eb8;
        case 0x125ebcu: goto label_125ebc;
        case 0x125ec0u: goto label_125ec0;
        case 0x125ec4u: goto label_125ec4;
        case 0x125ec8u: goto label_125ec8;
        case 0x125eccu: goto label_125ecc;
        case 0x125ed0u: goto label_125ed0;
        case 0x125ed4u: goto label_125ed4;
        case 0x125ed8u: goto label_125ed8;
        case 0x125edcu: goto label_125edc;
        case 0x125ee0u: goto label_125ee0;
        case 0x125ee4u: goto label_125ee4;
        case 0x125ee8u: goto label_125ee8;
        case 0x125eecu: goto label_125eec;
        case 0x125ef0u: goto label_125ef0;
        case 0x125ef4u: goto label_125ef4;
        case 0x125ef8u: goto label_125ef8;
        case 0x125efcu: goto label_125efc;
        case 0x125f00u: goto label_125f00;
        case 0x125f04u: goto label_125f04;
        case 0x125f08u: goto label_125f08;
        case 0x125f0cu: goto label_125f0c;
        case 0x125f10u: goto label_125f10;
        case 0x125f14u: goto label_125f14;
        case 0x125f18u: goto label_125f18;
        case 0x125f1cu: goto label_125f1c;
        case 0x125f20u: goto label_125f20;
        case 0x125f24u: goto label_125f24;
        case 0x125f28u: goto label_125f28;
        case 0x125f2cu: goto label_125f2c;
        case 0x125f30u: goto label_125f30;
        case 0x125f34u: goto label_125f34;
        case 0x125f38u: goto label_125f38;
        case 0x125f3cu: goto label_125f3c;
        case 0x125f40u: goto label_125f40;
        case 0x125f44u: goto label_125f44;
        case 0x125f48u: goto label_125f48;
        case 0x125f4cu: goto label_125f4c;
        case 0x125f50u: goto label_125f50;
        case 0x125f54u: goto label_125f54;
        case 0x125f58u: goto label_125f58;
        case 0x125f5cu: goto label_125f5c;
        case 0x125f60u: goto label_125f60;
        case 0x125f64u: goto label_125f64;
        case 0x125f68u: goto label_125f68;
        case 0x125f6cu: goto label_125f6c;
        case 0x125f70u: goto label_125f70;
        case 0x125f74u: goto label_125f74;
        case 0x125f78u: goto label_125f78;
        case 0x125f7cu: goto label_125f7c;
        case 0x125f80u: goto label_125f80;
        case 0x125f84u: goto label_125f84;
        case 0x125f88u: goto label_125f88;
        case 0x125f8cu: goto label_125f8c;
        case 0x125f90u: goto label_125f90;
        case 0x125f94u: goto label_125f94;
        case 0x125f98u: goto label_125f98;
        case 0x125f9cu: goto label_125f9c;
        case 0x125fa0u: goto label_125fa0;
        case 0x125fa4u: goto label_125fa4;
        case 0x125fa8u: goto label_125fa8;
        case 0x125facu: goto label_125fac;
        case 0x125fb0u: goto label_125fb0;
        case 0x125fb4u: goto label_125fb4;
        case 0x125fb8u: goto label_125fb8;
        case 0x125fbcu: goto label_125fbc;
        case 0x125fc0u: goto label_125fc0;
        case 0x125fc4u: goto label_125fc4;
        case 0x125fc8u: goto label_125fc8;
        case 0x125fccu: goto label_125fcc;
        case 0x125fd0u: goto label_125fd0;
        case 0x125fd4u: goto label_125fd4;
        case 0x125fd8u: goto label_125fd8;
        case 0x125fdcu: goto label_125fdc;
        case 0x125fe0u: goto label_125fe0;
        case 0x125fe4u: goto label_125fe4;
        case 0x125fe8u: goto label_125fe8;
        case 0x125fecu: goto label_125fec;
        case 0x125ff0u: goto label_125ff0;
        case 0x125ff4u: goto label_125ff4;
        case 0x125ff8u: goto label_125ff8;
        case 0x125ffcu: goto label_125ffc;
        case 0x126000u: goto label_126000;
        case 0x126004u: goto label_126004;
        case 0x126008u: goto label_126008;
        case 0x12600cu: goto label_12600c;
        case 0x126010u: goto label_126010;
        case 0x126014u: goto label_126014;
        case 0x126018u: goto label_126018;
        case 0x12601cu: goto label_12601c;
        case 0x126020u: goto label_126020;
        case 0x126024u: goto label_126024;
        case 0x126028u: goto label_126028;
        case 0x12602cu: goto label_12602c;
        case 0x126030u: goto label_126030;
        case 0x126034u: goto label_126034;
        case 0x126038u: goto label_126038;
        case 0x12603cu: goto label_12603c;
        case 0x126040u: goto label_126040;
        case 0x126044u: goto label_126044;
        case 0x126048u: goto label_126048;
        case 0x12604cu: goto label_12604c;
        case 0x126050u: goto label_126050;
        case 0x126054u: goto label_126054;
        case 0x126058u: goto label_126058;
        case 0x12605cu: goto label_12605c;
        case 0x126060u: goto label_126060;
        case 0x126064u: goto label_126064;
        case 0x126068u: goto label_126068;
        case 0x12606cu: goto label_12606c;
        case 0x126070u: goto label_126070;
        case 0x126074u: goto label_126074;
        case 0x126078u: goto label_126078;
        case 0x12607cu: goto label_12607c;
        case 0x126080u: goto label_126080;
        case 0x126084u: goto label_126084;
        case 0x126088u: goto label_126088;
        case 0x12608cu: goto label_12608c;
        case 0x126090u: goto label_126090;
        case 0x126094u: goto label_126094;
        case 0x126098u: goto label_126098;
        case 0x12609cu: goto label_12609c;
        case 0x1260a0u: goto label_1260a0;
        case 0x1260a4u: goto label_1260a4;
        case 0x1260a8u: goto label_1260a8;
        case 0x1260acu: goto label_1260ac;
        case 0x1260b0u: goto label_1260b0;
        case 0x1260b4u: goto label_1260b4;
        case 0x1260b8u: goto label_1260b8;
        case 0x1260bcu: goto label_1260bc;
        case 0x1260c0u: goto label_1260c0;
        case 0x1260c4u: goto label_1260c4;
        case 0x1260c8u: goto label_1260c8;
        case 0x1260ccu: goto label_1260cc;
        case 0x1260d0u: goto label_1260d0;
        case 0x1260d4u: goto label_1260d4;
        case 0x1260d8u: goto label_1260d8;
        case 0x1260dcu: goto label_1260dc;
        case 0x1260e0u: goto label_1260e0;
        case 0x1260e4u: goto label_1260e4;
        case 0x1260e8u: goto label_1260e8;
        case 0x1260ecu: goto label_1260ec;
        case 0x1260f0u: goto label_1260f0;
        case 0x1260f4u: goto label_1260f4;
        case 0x1260f8u: goto label_1260f8;
        case 0x1260fcu: goto label_1260fc;
        case 0x126100u: goto label_126100;
        case 0x126104u: goto label_126104;
        case 0x126108u: goto label_126108;
        case 0x12610cu: goto label_12610c;
        case 0x126110u: goto label_126110;
        case 0x126114u: goto label_126114;
        case 0x126118u: goto label_126118;
        case 0x12611cu: goto label_12611c;
        case 0x126120u: goto label_126120;
        case 0x126124u: goto label_126124;
        case 0x126128u: goto label_126128;
        case 0x12612cu: goto label_12612c;
        case 0x126130u: goto label_126130;
        case 0x126134u: goto label_126134;
        case 0x126138u: goto label_126138;
        case 0x12613cu: goto label_12613c;
        case 0x126140u: goto label_126140;
        case 0x126144u: goto label_126144;
        case 0x126148u: goto label_126148;
        case 0x12614cu: goto label_12614c;
        case 0x126150u: goto label_126150;
        case 0x126154u: goto label_126154;
        case 0x126158u: goto label_126158;
        case 0x12615cu: goto label_12615c;
        case 0x126160u: goto label_126160;
        case 0x126164u: goto label_126164;
        case 0x126168u: goto label_126168;
        case 0x12616cu: goto label_12616c;
        case 0x126170u: goto label_126170;
        case 0x126174u: goto label_126174;
        case 0x126178u: goto label_126178;
        case 0x12617cu: goto label_12617c;
        case 0x126180u: goto label_126180;
        case 0x126184u: goto label_126184;
        case 0x126188u: goto label_126188;
        case 0x12618cu: goto label_12618c;
        case 0x126190u: goto label_126190;
        case 0x126194u: goto label_126194;
        case 0x126198u: goto label_126198;
        case 0x12619cu: goto label_12619c;
        case 0x1261a0u: goto label_1261a0;
        case 0x1261a4u: goto label_1261a4;
        case 0x1261a8u: goto label_1261a8;
        case 0x1261acu: goto label_1261ac;
        case 0x1261b0u: goto label_1261b0;
        case 0x1261b4u: goto label_1261b4;
        case 0x1261b8u: goto label_1261b8;
        case 0x1261bcu: goto label_1261bc;
        case 0x1261c0u: goto label_1261c0;
        case 0x1261c4u: goto label_1261c4;
        case 0x1261c8u: goto label_1261c8;
        case 0x1261ccu: goto label_1261cc;
        case 0x1261d0u: goto label_1261d0;
        case 0x1261d4u: goto label_1261d4;
        case 0x1261d8u: goto label_1261d8;
        case 0x1261dcu: goto label_1261dc;
        case 0x1261e0u: goto label_1261e0;
        case 0x1261e4u: goto label_1261e4;
        case 0x1261e8u: goto label_1261e8;
        case 0x1261ecu: goto label_1261ec;
        case 0x1261f0u: goto label_1261f0;
        case 0x1261f4u: goto label_1261f4;
        case 0x1261f8u: goto label_1261f8;
        case 0x1261fcu: goto label_1261fc;
        case 0x126200u: goto label_126200;
        case 0x126204u: goto label_126204;
        case 0x126208u: goto label_126208;
        case 0x12620cu: goto label_12620c;
        case 0x126210u: goto label_126210;
        case 0x126214u: goto label_126214;
        case 0x126218u: goto label_126218;
        case 0x12621cu: goto label_12621c;
        case 0x126220u: goto label_126220;
        case 0x126224u: goto label_126224;
        case 0x126228u: goto label_126228;
        case 0x12622cu: goto label_12622c;
        case 0x126230u: goto label_126230;
        case 0x126234u: goto label_126234;
        case 0x126238u: goto label_126238;
        case 0x12623cu: goto label_12623c;
        case 0x126240u: goto label_126240;
        case 0x126244u: goto label_126244;
        case 0x126248u: goto label_126248;
        case 0x12624cu: goto label_12624c;
        case 0x126250u: goto label_126250;
        case 0x126254u: goto label_126254;
        case 0x126258u: goto label_126258;
        case 0x12625cu: goto label_12625c;
        case 0x126260u: goto label_126260;
        case 0x126264u: goto label_126264;
        case 0x126268u: goto label_126268;
        case 0x12626cu: goto label_12626c;
        case 0x126270u: goto label_126270;
        case 0x126274u: goto label_126274;
        case 0x126278u: goto label_126278;
        case 0x12627cu: goto label_12627c;
        case 0x126280u: goto label_126280;
        case 0x126284u: goto label_126284;
        case 0x126288u: goto label_126288;
        case 0x12628cu: goto label_12628c;
        case 0x126290u: goto label_126290;
        case 0x126294u: goto label_126294;
        case 0x126298u: goto label_126298;
        case 0x12629cu: goto label_12629c;
        case 0x1262a0u: goto label_1262a0;
        case 0x1262a4u: goto label_1262a4;
        case 0x1262a8u: goto label_1262a8;
        case 0x1262acu: goto label_1262ac;
        case 0x1262b0u: goto label_1262b0;
        case 0x1262b4u: goto label_1262b4;
        case 0x1262b8u: goto label_1262b8;
        case 0x1262bcu: goto label_1262bc;
        case 0x1262c0u: goto label_1262c0;
        case 0x1262c4u: goto label_1262c4;
        case 0x1262c8u: goto label_1262c8;
        case 0x1262ccu: goto label_1262cc;
        case 0x1262d0u: goto label_1262d0;
        case 0x1262d4u: goto label_1262d4;
        case 0x1262d8u: goto label_1262d8;
        case 0x1262dcu: goto label_1262dc;
        case 0x1262e0u: goto label_1262e0;
        case 0x1262e4u: goto label_1262e4;
        case 0x1262e8u: goto label_1262e8;
        case 0x1262ecu: goto label_1262ec;
        case 0x1262f0u: goto label_1262f0;
        case 0x1262f4u: goto label_1262f4;
        case 0x1262f8u: goto label_1262f8;
        case 0x1262fcu: goto label_1262fc;
        case 0x126300u: goto label_126300;
        case 0x126304u: goto label_126304;
        case 0x126308u: goto label_126308;
        case 0x12630cu: goto label_12630c;
        case 0x126310u: goto label_126310;
        case 0x126314u: goto label_126314;
        case 0x126318u: goto label_126318;
        case 0x12631cu: goto label_12631c;
        case 0x126320u: goto label_126320;
        case 0x126324u: goto label_126324;
        case 0x126328u: goto label_126328;
        case 0x12632cu: goto label_12632c;
        case 0x126330u: goto label_126330;
        case 0x126334u: goto label_126334;
        case 0x126338u: goto label_126338;
        case 0x12633cu: goto label_12633c;
        case 0x126340u: goto label_126340;
        case 0x126344u: goto label_126344;
        case 0x126348u: goto label_126348;
        case 0x12634cu: goto label_12634c;
        case 0x126350u: goto label_126350;
        case 0x126354u: goto label_126354;
        case 0x126358u: goto label_126358;
        case 0x12635cu: goto label_12635c;
        case 0x126360u: goto label_126360;
        case 0x126364u: goto label_126364;
        case 0x126368u: goto label_126368;
        case 0x12636cu: goto label_12636c;
        case 0x126370u: goto label_126370;
        case 0x126374u: goto label_126374;
        case 0x126378u: goto label_126378;
        case 0x12637cu: goto label_12637c;
        case 0x126380u: goto label_126380;
        case 0x126384u: goto label_126384;
        case 0x126388u: goto label_126388;
        case 0x12638cu: goto label_12638c;
        case 0x126390u: goto label_126390;
        case 0x126394u: goto label_126394;
        case 0x126398u: goto label_126398;
        case 0x12639cu: goto label_12639c;
        case 0x1263a0u: goto label_1263a0;
        case 0x1263a4u: goto label_1263a4;
        case 0x1263a8u: goto label_1263a8;
        case 0x1263acu: goto label_1263ac;
        case 0x1263b0u: goto label_1263b0;
        case 0x1263b4u: goto label_1263b4;
        case 0x1263b8u: goto label_1263b8;
        case 0x1263bcu: goto label_1263bc;
        case 0x1263c0u: goto label_1263c0;
        case 0x1263c4u: goto label_1263c4;
        case 0x1263c8u: goto label_1263c8;
        case 0x1263ccu: goto label_1263cc;
        case 0x1263d0u: goto label_1263d0;
        case 0x1263d4u: goto label_1263d4;
        case 0x1263d8u: goto label_1263d8;
        case 0x1263dcu: goto label_1263dc;
        case 0x1263e0u: goto label_1263e0;
        case 0x1263e4u: goto label_1263e4;
        case 0x1263e8u: goto label_1263e8;
        case 0x1263ecu: goto label_1263ec;
        case 0x1263f0u: goto label_1263f0;
        case 0x1263f4u: goto label_1263f4;
        case 0x1263f8u: goto label_1263f8;
        case 0x1263fcu: goto label_1263fc;
        case 0x126400u: goto label_126400;
        case 0x126404u: goto label_126404;
        case 0x126408u: goto label_126408;
        case 0x12640cu: goto label_12640c;
        case 0x126410u: goto label_126410;
        case 0x126414u: goto label_126414;
        case 0x126418u: goto label_126418;
        case 0x12641cu: goto label_12641c;
        case 0x126420u: goto label_126420;
        case 0x126424u: goto label_126424;
        case 0x126428u: goto label_126428;
        case 0x12642cu: goto label_12642c;
        case 0x126430u: goto label_126430;
        case 0x126434u: goto label_126434;
        case 0x126438u: goto label_126438;
        case 0x12643cu: goto label_12643c;
        case 0x126440u: goto label_126440;
        case 0x126444u: goto label_126444;
        case 0x126448u: goto label_126448;
        case 0x12644cu: goto label_12644c;
        case 0x126450u: goto label_126450;
        case 0x126454u: goto label_126454;
        case 0x126458u: goto label_126458;
        case 0x12645cu: goto label_12645c;
        case 0x126460u: goto label_126460;
        case 0x126464u: goto label_126464;
        case 0x126468u: goto label_126468;
        case 0x12646cu: goto label_12646c;
        case 0x126470u: goto label_126470;
        case 0x126474u: goto label_126474;
        case 0x126478u: goto label_126478;
        case 0x12647cu: goto label_12647c;
        case 0x126480u: goto label_126480;
        case 0x126484u: goto label_126484;
        case 0x126488u: goto label_126488;
        case 0x12648cu: goto label_12648c;
        case 0x126490u: goto label_126490;
        case 0x126494u: goto label_126494;
        case 0x126498u: goto label_126498;
        case 0x12649cu: goto label_12649c;
        case 0x1264a0u: goto label_1264a0;
        case 0x1264a4u: goto label_1264a4;
        case 0x1264a8u: goto label_1264a8;
        case 0x1264acu: goto label_1264ac;
        case 0x1264b0u: goto label_1264b0;
        case 0x1264b4u: goto label_1264b4;
        case 0x1264b8u: goto label_1264b8;
        case 0x1264bcu: goto label_1264bc;
        case 0x1264c0u: goto label_1264c0;
        case 0x1264c4u: goto label_1264c4;
        case 0x1264c8u: goto label_1264c8;
        case 0x1264ccu: goto label_1264cc;
        case 0x1264d0u: goto label_1264d0;
        case 0x1264d4u: goto label_1264d4;
        case 0x1264d8u: goto label_1264d8;
        case 0x1264dcu: goto label_1264dc;
        case 0x1264e0u: goto label_1264e0;
        case 0x1264e4u: goto label_1264e4;
        case 0x1264e8u: goto label_1264e8;
        case 0x1264ecu: goto label_1264ec;
        case 0x1264f0u: goto label_1264f0;
        case 0x1264f4u: goto label_1264f4;
        case 0x1264f8u: goto label_1264f8;
        case 0x1264fcu: goto label_1264fc;
        case 0x126500u: goto label_126500;
        case 0x126504u: goto label_126504;
        case 0x126508u: goto label_126508;
        case 0x12650cu: goto label_12650c;
        case 0x126510u: goto label_126510;
        case 0x126514u: goto label_126514;
        case 0x126518u: goto label_126518;
        case 0x12651cu: goto label_12651c;
        case 0x126520u: goto label_126520;
        case 0x126524u: goto label_126524;
        case 0x126528u: goto label_126528;
        case 0x12652cu: goto label_12652c;
        case 0x126530u: goto label_126530;
        case 0x126534u: goto label_126534;
        case 0x126538u: goto label_126538;
        case 0x12653cu: goto label_12653c;
        case 0x126540u: goto label_126540;
        case 0x126544u: goto label_126544;
        case 0x126548u: goto label_126548;
        case 0x12654cu: goto label_12654c;
        case 0x126550u: goto label_126550;
        case 0x126554u: goto label_126554;
        case 0x126558u: goto label_126558;
        case 0x12655cu: goto label_12655c;
        case 0x126560u: goto label_126560;
        default: break;
    }

    ctx->pc = 0x125dc0u;

label_125dc0:
    // 0x125dc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x125dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_125dc4:
    // 0x125dc4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x125dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_125dc8:
    // 0x125dc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x125dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_125dcc:
    // 0x125dcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x125dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_125dd0:
    // 0x125dd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x125dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_125dd4:
    // 0x125dd4: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x125dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_125dd8:
    // 0x125dd8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x125dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125ddc:
    // 0x125ddc: 0x24501330  addiu       $s0, $v0, 0x1330
    ctx->pc = 0x125ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_125de0:
    // 0x125de0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x125de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125de4:
    // 0x125de4: 0xc05cdd8  jal         func_173760
label_125de8:
    if (ctx->pc == 0x125DE8u) {
        ctx->pc = 0x125DECu;
        goto label_125dec;
    }
    ctx->pc = 0x125DE4u;
    SET_GPR_U32(ctx, 31, 0x125DECu);
    ctx->pc = 0x173760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173760u, 0x125DE4u, 0x125DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125DECu;
label_125dec:
    // 0x125dec: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x125decu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_125df0:
    // 0x125df0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125df4:
    // 0x125df4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x125df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125df8:
    // 0x125df8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x125df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_125dfc:
    // 0x125dfc: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x125dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_125e00:
    // 0x125e00: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x125e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_125e04:
    // 0x125e04: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x125e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_125e08:
    // 0x125e08: 0xc05cc90  jal         func_173240
label_125e0c:
    if (ctx->pc == 0x125E0Cu) {
        ctx->pc = 0x125E10u;
        goto label_125e10;
    }
    ctx->pc = 0x125E08u;
    SET_GPR_U32(ctx, 31, 0x125E10u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x125E08u, 0x125E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125E10u;
label_125e10:
    // 0x125e10: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x125e10u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_125e14:
    // 0x125e14: 0x2e410008  sltiu       $at, $s2, 0x8
    ctx->pc = 0x125e14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_125e18:
    // 0x125e18: 0x102001cb  beqz        $at, . + 4 + (0x1CB << 2)
label_125e1c:
    if (ctx->pc == 0x125E1Cu) {
        ctx->pc = 0x125E20u;
        goto label_125e20;
    }
    ctx->pc = 0x125E18u;
    {
        const bool branch_taken_0x125e18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x125e18) {
            ctx->pc = 0x126548u;
            goto label_126548;
        }
    }
    ctx->pc = 0x125E20u;
label_125e20:
    // 0x125e20: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x125e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_125e24:
    // 0x125e24: 0x2464e210  addiu       $a0, $v1, -0x1DF0
    ctx->pc = 0x125e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959632));
label_125e28:
    // 0x125e28: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x125e28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_125e2c:
    // 0x125e2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x125e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_125e30:
    // 0x125e30: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x125e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_125e34:
    // 0x125e34: 0x600008  jr          $v1
label_125e38:
    if (ctx->pc == 0x125E38u) {
        ctx->pc = 0x125E3Cu;
        goto label_125e3c;
    }
    ctx->pc = 0x125E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125E34u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x125E3Cu;
label_125e3c:
    // 0x125e3c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x125e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_125e40:
    // 0x125e40: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x125e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_125e44:
    // 0x125e44: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_125e48:
    if (ctx->pc == 0x125E48u) {
        ctx->pc = 0x125E4Cu;
        goto label_125e4c;
    }
    ctx->pc = 0x125E44u;
    {
        const bool branch_taken_0x125e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x125e44) {
            ctx->pc = 0x125E5Cu;
            goto label_125e5c;
        }
    }
    ctx->pc = 0x125E4Cu;
label_125e4c:
    // 0x125e4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125e50:
    // 0x125e50: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x125e50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_125e54:
    // 0x125e54: 0x106001bc  beqz        $v1, . + 4 + (0x1BC << 2)
label_125e58:
    if (ctx->pc == 0x125E58u) {
        ctx->pc = 0x125E5Cu;
        goto label_125e5c;
    }
    ctx->pc = 0x125E54u;
    {
        const bool branch_taken_0x125e54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x125e54) {
            ctx->pc = 0x126548u;
            goto label_126548;
        }
    }
    ctx->pc = 0x125E5Cu;
label_125e5c:
    // 0x125e5c: 0x9603007c  lhu         $v1, 0x7C($s0)
    ctx->pc = 0x125e5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
label_125e60:
    // 0x125e60: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_125e64:
    if (ctx->pc == 0x125E64u) {
        ctx->pc = 0x125E68u;
        goto label_125e68;
    }
    ctx->pc = 0x125E60u;
    {
        const bool branch_taken_0x125e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x125e60) {
            ctx->pc = 0x125EA4u;
            goto label_125ea4;
        }
    }
    ctx->pc = 0x125E68u;
label_125e68:
    // 0x125e68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125e6c:
    // 0x125e6c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125e70:
    // 0x125e70: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x125e70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_125e74:
    // 0x125e74: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x125e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_125e78:
    // 0x125e78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125e7c:
    // 0x125e7c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x125e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_125e80:
    // 0x125e80: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125e84:
    // 0x125e84: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x125e84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_125e88:
    // 0x125e88: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125e8c:
    // 0x125e8c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x125e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_125e90:
    // 0x125e90: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x125e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_125e94:
    // 0x125e94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125e98:
    // 0x125e98: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x125e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_125e9c:
    // 0x125e9c: 0x100001aa  b           . + 4 + (0x1AA << 2)
label_125ea0:
    if (ctx->pc == 0x125EA0u) {
        ctx->pc = 0x125EA4u;
        goto label_125ea4;
    }
    ctx->pc = 0x125E9Cu;
    {
        const bool branch_taken_0x125e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125e9c) {
            ctx->pc = 0x126548u;
            goto label_126548;
        }
    }
    ctx->pc = 0x125EA4u;
label_125ea4:
    // 0x125ea4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x125ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_125ea8:
    // 0x125ea8: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x125ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_125eac:
    // 0x125eac: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_125eb0:
    if (ctx->pc == 0x125EB0u) {
        ctx->pc = 0x125EB4u;
        goto label_125eb4;
    }
    ctx->pc = 0x125EACu;
    {
        const bool branch_taken_0x125eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x125eac) {
            ctx->pc = 0x125ECCu;
            goto label_125ecc;
        }
    }
    ctx->pc = 0x125EB4u;
label_125eb4:
    // 0x125eb4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x125eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_125eb8:
    // 0x125eb8: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x125eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_125ebc:
    // 0x125ebc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x125ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_125ec0:
    // 0x125ec0: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x125ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_125ec4:
    // 0x125ec4: 0x100001a0  b           . + 4 + (0x1A0 << 2)
label_125ec8:
    if (ctx->pc == 0x125EC8u) {
        ctx->pc = 0x125ECCu;
        goto label_125ecc;
    }
    ctx->pc = 0x125EC4u;
    {
        const bool branch_taken_0x125ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125ec4) {
            ctx->pc = 0x126548u;
            goto label_126548;
        }
    }
    ctx->pc = 0x125ECCu;
label_125ecc:
    // 0x125ecc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125ed0:
    // 0x125ed0: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x125ed0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_125ed4:
    // 0x125ed4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x125ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_125ed8:
    // 0x125ed8: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x125ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_125edc:
    // 0x125edc: 0x1060009a  beqz        $v1, . + 4 + (0x9A << 2)
label_125ee0:
    if (ctx->pc == 0x125EE0u) {
        ctx->pc = 0x125EE4u;
        goto label_125ee4;
    }
    ctx->pc = 0x125EDCu;
    {
        const bool branch_taken_0x125edc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x125edc) {
            ctx->pc = 0x126148u;
            goto label_126148;
        }
    }
    ctx->pc = 0x125EE4u;
label_125ee4:
    // 0x125ee4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125ee8:
    // 0x125ee8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x125ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_125eec:
    // 0x125eec: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x125eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
label_125ef0:
    // 0x125ef0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x125ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_125ef4:
    // 0x125ef4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x125ef4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_125ef8:
    // 0x125ef8: 0x0  nop
    ctx->pc = 0x125ef8u;
    // NOP
label_125efc:
    // 0x125efc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x125efcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_125f00:
    // 0x125f00: 0x0  nop
    ctx->pc = 0x125f00u;
    // NOP
label_125f04:
    // 0x125f04: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_125f08:
    if (ctx->pc == 0x125F08u) {
        ctx->pc = 0x125F0Cu;
        goto label_125f0c;
    }
    ctx->pc = 0x125F04u;
    {
        const bool branch_taken_0x125f04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x125f04) {
            ctx->pc = 0x125F50u;
            goto label_125f50;
        }
    }
    ctx->pc = 0x125F0Cu;
label_125f0c:
    // 0x125f0c: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x125f0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_125f10:
    // 0x125f10: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_125f14:
    if (ctx->pc == 0x125F14u) {
        ctx->pc = 0x125F18u;
        goto label_125f18;
    }
    ctx->pc = 0x125F10u;
    {
        const bool branch_taken_0x125f10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x125f10) {
            ctx->pc = 0x125F48u;
            goto label_125f48;
        }
    }
    ctx->pc = 0x125F18u;
label_125f18:
    // 0x125f18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125f1c:
    // 0x125f1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125f20:
    // 0x125f20: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x125f20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_125f24:
    // 0x125f24: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x125f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_125f28:
    // 0x125f28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125f2c:
    // 0x125f2c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x125f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_125f30:
    // 0x125f30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125f34:
    // 0x125f34: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x125f34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_125f38:
    // 0x125f38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125f3c:
    // 0x125f3c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x125f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_125f40:
    // 0x125f40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125f44:
    // 0x125f44: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x125f44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_125f48:
    // 0x125f48: 0x1000017f  b           . + 4 + (0x17F << 2)
label_125f4c:
    if (ctx->pc == 0x125F4Cu) {
        ctx->pc = 0x125F50u;
        goto label_125f50;
    }
    ctx->pc = 0x125F48u;
    {
        const bool branch_taken_0x125f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125f48) {
            ctx->pc = 0x126548u;
            goto label_126548;
        }
    }
    ctx->pc = 0x125F50u;
label_125f50:
    // 0x125f50: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125f54:
    // 0x125f54: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x125f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_125f58:
    // 0x125f58: 0x3c0345ab  lui         $v1, 0x45AB
    ctx->pc = 0x125f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17835 << 16));
label_125f5c:
    // 0x125f5c: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x125f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
label_125f60:
    // 0x125f60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x125f60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_125f64:
    // 0x125f64: 0x0  nop
    ctx->pc = 0x125f64u;
    // NOP
label_125f68:
    // 0x125f68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x125f68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_125f6c:
    // 0x125f6c: 0x0  nop
    ctx->pc = 0x125f6cu;
    // NOP
label_125f70:
    // 0x125f70: 0x45000175  bc1f        . + 4 + (0x175 << 2)
label_125f74:
    if (ctx->pc == 0x125F74u) {
        ctx->pc = 0x125F78u;
        goto label_125f78;
    }
    ctx->pc = 0x125F70u;
    {
        const bool branch_taken_0x125f70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x125f70) {
            ctx->pc = 0x126548u;
            goto label_126548;
        }
    }
    ctx->pc = 0x125F78u;
label_125f78:
    // 0x125f78: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x125f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125f7c:
    // 0x125f7c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x125f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_125f80:
    // 0x125f80: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x125f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
label_125f84:
    // 0x125f84: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x125f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_125f88:
    // 0x125f88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x125f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_125f8c:
    // 0x125f8c: 0x0  nop
    ctx->pc = 0x125f8cu;
    // NOP
label_125f90:
    // 0x125f90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x125f90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_125f94:
    // 0x125f94: 0x0  nop
    ctx->pc = 0x125f94u;
    // NOP
label_125f98:
    // 0x125f98: 0x45010035  bc1t        . + 4 + (0x35 << 2)
label_125f9c:
    if (ctx->pc == 0x125F9Cu) {
        ctx->pc = 0x125FA0u;
        goto label_125fa0;
    }
    ctx->pc = 0x125F98u;
    {
        const bool branch_taken_0x125f98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x125f98) {
            ctx->pc = 0x126070u;
            goto label_126070;
        }
    }
    ctx->pc = 0x125FA0u;
label_125fa0:
    // 0x125fa0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x125fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_125fa4:
    // 0x125fa4: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x125fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_125fa8:
    // 0x125fa8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x125fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_125fac:
    // 0x125fac: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_125fb0:
    if (ctx->pc == 0x125FB0u) {
        ctx->pc = 0x125FB4u;
        goto label_125fb4;
    }
    ctx->pc = 0x125FACu;
    {
        const bool branch_taken_0x125fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125fac) {
            ctx->pc = 0x125FC4u;
            goto label_125fc4;
        }
    }
    ctx->pc = 0x125FB4u;
label_125fb4:
    // 0x125fb4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x125fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_125fb8:
    // 0x125fb8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x125fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_125fbc:
    // 0x125fbc: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_125fc0:
    if (ctx->pc == 0x125FC0u) {
        ctx->pc = 0x125FC4u;
        goto label_125fc4;
    }
    ctx->pc = 0x125FBCu;
    {
        const bool branch_taken_0x125fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125fbc) {
            ctx->pc = 0x126070u;
            goto label_126070;
        }
    }
    ctx->pc = 0x125FC4u;
label_125fc4:
    // 0x125fc4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x125fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125fc8:
    // 0x125fc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x125fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125fcc:
    // 0x125fcc: 0xc05d25c  jal         func_174970
label_125fd0:
    if (ctx->pc == 0x125FD0u) {
        ctx->pc = 0x125FD4u;
        goto label_125fd4;
    }
    ctx->pc = 0x125FCCu;
    SET_GPR_U32(ctx, 31, 0x125FD4u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x125FCCu, 0x125FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125FD4u;
label_125fd4:
    // 0x125fd4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_125fd8:
    if (ctx->pc == 0x125FD8u) {
        ctx->pc = 0x125FDCu;
        goto label_125fdc;
    }
    ctx->pc = 0x125FD4u;
    {
        const bool branch_taken_0x125fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125fd4) {
            ctx->pc = 0x126070u;
            goto label_126070;
        }
    }
    ctx->pc = 0x125FDCu;
label_125fdc:
    // 0x125fdc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_125fe0:
    // 0x125fe0: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x125fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_125fe4:
    // 0x125fe4: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x125fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_125fe8:
    // 0x125fe8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x125fe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_125fec:
    // 0x125fec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x125fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_125ff0:
    // 0x125ff0: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x125ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_125ff4:
    // 0x125ff4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x125ff4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_125ff8:
    // 0x125ff8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x125ff8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_125ffc:
    // 0x125ffc: 0x0  nop
    ctx->pc = 0x125ffcu;
    // NOP
label_126000:
    // 0x126000: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_126004:
    if (ctx->pc == 0x126004u) {
        ctx->pc = 0x126008u;
        goto label_126008;
    }
    ctx->pc = 0x126000u;
    {
        const bool branch_taken_0x126000 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x126000) {
            ctx->pc = 0x126070u;
            goto label_126070;
        }
    }
    ctx->pc = 0x126008u;
label_126008:
    // 0x126008: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12600c:
    // 0x12600c: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x12600cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_126010:
    // 0x126010: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x126010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_126014:
    // 0x126014: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x126014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_126018:
    // 0x126018: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x126018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_12601c:
    // 0x12601c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12601cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_126020:
    // 0x126020: 0x0  nop
    ctx->pc = 0x126020u;
    // NOP
label_126024:
    // 0x126024: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x126024u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_126028:
    // 0x126028: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x126028u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12602c:
    // 0x12602c: 0x0  nop
    ctx->pc = 0x12602cu;
    // NOP
label_126030:
    // 0x126030: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_126034:
    if (ctx->pc == 0x126034u) {
        ctx->pc = 0x126038u;
        goto label_126038;
    }
    ctx->pc = 0x126030u;
    {
        const bool branch_taken_0x126030 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x126030) {
            ctx->pc = 0x126070u;
            goto label_126070;
        }
    }
    ctx->pc = 0x126038u;
label_126038:
    // 0x126038: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12603c:
    // 0x12603c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12603cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126040:
    // 0x126040: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126040u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_126044:
    // 0x126044: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x126044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_126048:
    // 0x126048: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12604c:
    // 0x12604c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12604cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_126050:
    // 0x126050: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126054:
    // 0x126054: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126054u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_126058:
    // 0x126058: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12605c:
    // 0x12605c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12605cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_126060:
    // 0x126060: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126064:
    // 0x126064: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x126064u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_126068:
    // 0x126068: 0x10000137  b           . + 4 + (0x137 << 2)
label_12606c:
    if (ctx->pc == 0x12606Cu) {
        ctx->pc = 0x126070u;
        goto label_126070;
    }
    ctx->pc = 0x126068u;
    {
        const bool branch_taken_0x126068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126068) {
            ctx->pc = 0x126548u;
            goto label_126548;
        }
    }
    ctx->pc = 0x126070u;
label_126070:
    // 0x126070: 0xc067694  jal         func_19DA50
label_126074:
    if (ctx->pc == 0x126074u) {
        ctx->pc = 0x126078u;
        goto label_126078;
    }
    ctx->pc = 0x126070u;
    SET_GPR_U32(ctx, 31, 0x126078u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x126070u, 0x126078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126078u;
label_126078:
    // 0x126078: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x126078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12607c:
    // 0x12607c: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x12607cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_126080:
    // 0x126080: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x126080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126084:
    // 0x126084: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_126088:
    if (ctx->pc == 0x126088u) {
        ctx->pc = 0x12608Cu;
        goto label_12608c;
    }
    ctx->pc = 0x126084u;
    {
        const bool branch_taken_0x126084 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x126084) {
            ctx->pc = 0x12609Cu;
            goto label_12609c;
        }
    }
    ctx->pc = 0x12608Cu;
label_12608c:
    // 0x12608c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_126090:
    if (ctx->pc == 0x126090u) {
        ctx->pc = 0x126094u;
        goto label_126094;
    }
    ctx->pc = 0x12608Cu;
    {
        const bool branch_taken_0x12608c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12608c) {
            ctx->pc = 0x12609Cu;
            goto label_12609c;
        }
    }
    ctx->pc = 0x126094u;
label_126094:
    // 0x126094: 0x1000002a  b           . + 4 + (0x2A << 2)
label_126098:
    if (ctx->pc == 0x126098u) {
        ctx->pc = 0x12609Cu;
        goto label_12609c;
    }
    ctx->pc = 0x126094u;
    {
        const bool branch_taken_0x126094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126094) {
            ctx->pc = 0x126140u;
            goto label_126140;
        }
    }
    ctx->pc = 0x12609Cu;
label_12609c:
    // 0x12609c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12609cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1260a0:
    // 0x1260a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1260a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1260a4:
    // 0x1260a4: 0xc05d25c  jal         func_174970
label_1260a8:
    if (ctx->pc == 0x1260A8u) {
        ctx->pc = 0x1260ACu;
        goto label_1260ac;
    }
    ctx->pc = 0x1260A4u;
    SET_GPR_U32(ctx, 31, 0x1260ACu);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x1260A4u, 0x1260ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1260ACu;
label_1260ac:
    // 0x1260ac: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_1260b0:
    if (ctx->pc == 0x1260B0u) {
        ctx->pc = 0x1260B4u;
        goto label_1260b4;
    }
    ctx->pc = 0x1260ACu;
    {
        const bool branch_taken_0x1260ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1260ac) {
            ctx->pc = 0x126140u;
            goto label_126140;
        }
    }
    ctx->pc = 0x1260B4u;
label_1260b4:
    // 0x1260b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1260b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1260b8:
    // 0x1260b8: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1260b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1260bc:
    // 0x1260bc: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1260bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_1260c0:
    // 0x1260c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1260c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1260c4:
    // 0x1260c4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1260c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_1260c8:
    // 0x1260c8: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1260c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1260cc:
    // 0x1260cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1260ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1260d0:
    // 0x1260d0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1260d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1260d4:
    // 0x1260d4: 0x0  nop
    ctx->pc = 0x1260d4u;
    // NOP
label_1260d8:
    // 0x1260d8: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_1260dc:
    if (ctx->pc == 0x1260DCu) {
        ctx->pc = 0x1260E0u;
        goto label_1260e0;
    }
    ctx->pc = 0x1260D8u;
    {
        const bool branch_taken_0x1260d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1260d8) {
            ctx->pc = 0x126140u;
            goto label_126140;
        }
    }
    ctx->pc = 0x1260E0u;
label_1260e0:
    // 0x1260e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1260e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1260e4:
    // 0x1260e4: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1260e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1260e8:
    // 0x1260e8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1260e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_1260ec:
    // 0x1260ec: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x1260ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1260f0:
    // 0x1260f0: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1260f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_1260f4:
    // 0x1260f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1260f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1260f8:
    // 0x1260f8: 0x0  nop
    ctx->pc = 0x1260f8u;
    // NOP
label_1260fc:
    // 0x1260fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1260fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_126100:
    // 0x126100: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x126100u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_126104:
    // 0x126104: 0x0  nop
    ctx->pc = 0x126104u;
    // NOP
label_126108:
    // 0x126108: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_12610c:
    if (ctx->pc == 0x12610Cu) {
        ctx->pc = 0x126110u;
        goto label_126110;
    }
    ctx->pc = 0x126108u;
    {
        const bool branch_taken_0x126108 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x126108) {
            ctx->pc = 0x126140u;
            goto label_126140;
        }
    }
    ctx->pc = 0x126110u;
label_126110:
    // 0x126110: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126114:
    // 0x126114: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126118:
    // 0x126118: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126118u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12611c:
    // 0x12611c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x12611cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_126120:
    // 0x126120: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126124:
    // 0x126124: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126124u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_126128:
    // 0x126128: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12612c:
    // 0x12612c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12612cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_126130:
    // 0x126130: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126134:
    // 0x126134: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126134u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_126138:
    // 0x126138: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12613c:
    // 0x12613c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12613cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_126140:
    // 0x126140: 0x10000101  b           . + 4 + (0x101 << 2)
label_126144:
    if (ctx->pc == 0x126144u) {
        ctx->pc = 0x126148u;
        goto label_126148;
    }
    ctx->pc = 0x126140u;
    {
        const bool branch_taken_0x126140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126140) {
            ctx->pc = 0x126548u;
            goto label_126548;
        }
    }
    ctx->pc = 0x126148u;
label_126148:
    // 0x126148: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12614c:
    // 0x12614c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x12614cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_126150:
    // 0x126150: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x126150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
label_126154:
    // 0x126154: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x126154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_126158:
    // 0x126158: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x126158u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12615c:
    // 0x12615c: 0x0  nop
    ctx->pc = 0x12615cu;
    // NOP
label_126160:
    // 0x126160: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x126160u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_126164:
    // 0x126164: 0x0  nop
    ctx->pc = 0x126164u;
    // NOP
label_126168:
    // 0x126168: 0x45000043  bc1f        . + 4 + (0x43 << 2)
label_12616c:
    if (ctx->pc == 0x12616Cu) {
        ctx->pc = 0x126170u;
        goto label_126170;
    }
    ctx->pc = 0x126168u;
    {
        const bool branch_taken_0x126168 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x126168) {
            ctx->pc = 0x126278u;
            goto label_126278;
        }
    }
    ctx->pc = 0x126170u;
label_126170:
    // 0x126170: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x126170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_126174:
    // 0x126174: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x126174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_126178:
    // 0x126178: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x126178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_12617c:
    // 0x12617c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_126180:
    if (ctx->pc == 0x126180u) {
        ctx->pc = 0x126184u;
        goto label_126184;
    }
    ctx->pc = 0x12617Cu;
    {
        const bool branch_taken_0x12617c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12617c) {
            ctx->pc = 0x1261BCu;
            goto label_1261bc;
        }
    }
    ctx->pc = 0x126184u;
label_126184:
    // 0x126184: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126188:
    // 0x126188: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12618c:
    // 0x12618c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12618cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_126190:
    // 0x126190: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x126190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_126194:
    // 0x126194: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126198:
    // 0x126198: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126198u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_12619c:
    // 0x12619c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12619cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1261a0:
    // 0x1261a0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1261a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1261a4:
    // 0x1261a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1261a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1261a8:
    // 0x1261a8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1261a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1261ac:
    // 0x1261ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1261acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1261b0:
    // 0x1261b0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1261b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1261b4:
    // 0x1261b4: 0x100000e4  b           . + 4 + (0xE4 << 2)
label_1261b8:
    if (ctx->pc == 0x1261B8u) {
        ctx->pc = 0x1261BCu;
        goto label_1261bc;
    }
    ctx->pc = 0x1261B4u;
    {
        const bool branch_taken_0x1261b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1261b4) {
            ctx->pc = 0x126548u;
            goto label_126548;
        }
    }
    ctx->pc = 0x1261BCu;
label_1261bc:
    // 0x1261bc: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x1261bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1261c0:
    // 0x1261c0: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
label_1261c4:
    if (ctx->pc == 0x1261C4u) {
        ctx->pc = 0x1261C8u;
        goto label_1261c8;
    }
    ctx->pc = 0x1261C0u;
    {
        const bool branch_taken_0x1261c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1261c0) {
            ctx->pc = 0x126270u;
            goto label_126270;
        }
    }
    ctx->pc = 0x1261C8u;
label_1261c8:
    // 0x1261c8: 0xc067694  jal         func_19DA50
label_1261cc:
    if (ctx->pc == 0x1261CCu) {
        ctx->pc = 0x1261D0u;
        goto label_1261d0;
    }
    ctx->pc = 0x1261C8u;
    SET_GPR_U32(ctx, 31, 0x1261D0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1261C8u, 0x1261D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1261D0u;
label_1261d0:
    // 0x1261d0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1261d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1261d4:
    // 0x1261d4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1261d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1261d8:
    // 0x1261d8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_1261dc:
    if (ctx->pc == 0x1261DCu) {
        ctx->pc = 0x1261E0u;
        goto label_1261e0;
    }
    ctx->pc = 0x1261D8u;
    {
        const bool branch_taken_0x1261d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1261d8) {
            ctx->pc = 0x126240u;
            goto label_126240;
        }
    }
    ctx->pc = 0x1261E0u;
label_1261e0:
    // 0x1261e0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1261e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1261e4:
    // 0x1261e4: 0xc04d8bc  jal         func_1362F0
label_1261e8:
    if (ctx->pc == 0x1261E8u) {
        ctx->pc = 0x1261ECu;
        goto label_1261ec;
    }
    ctx->pc = 0x1261E4u;
    SET_GPR_U32(ctx, 31, 0x1261ECu);
    ctx->pc = 0x1362F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362F0u, 0x1261E4u, 0x1261ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1261ECu;
label_1261ec:
    // 0x1261ec: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1261f0:
    if (ctx->pc == 0x1261F0u) {
        ctx->pc = 0x1261F4u;
        goto label_1261f4;
    }
    ctx->pc = 0x1261ECu;
    {
        const bool branch_taken_0x1261ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1261ec) {
            ctx->pc = 0x126270u;
            goto label_126270;
        }
    }
    ctx->pc = 0x1261F4u;
label_1261f4:
    // 0x1261f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1261f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1261f8:
    // 0x1261f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1261f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1261fc:
    // 0x1261fc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1261fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_126200:
    // 0x126200: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x126200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_126204:
    // 0x126204: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126208:
    // 0x126208: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126208u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_12620c:
    // 0x12620c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12620cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126210:
    // 0x126210: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126210u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_126214:
    // 0x126214: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126218:
    // 0x126218: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126218u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12621c:
    // 0x12621c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12621cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126220:
    // 0x126220: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x126220u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_126224:
    // 0x126224: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x126224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126228:
    // 0x126228: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x126228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_12622c:
    // 0x12622c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x12622cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_126230:
    // 0x126230: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x126230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_126234:
    // 0x126234: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x126234u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_126238:
    // 0x126238: 0x1000000d  b           . + 4 + (0xD << 2)
label_12623c:
    if (ctx->pc == 0x12623Cu) {
        ctx->pc = 0x126240u;
        goto label_126240;
    }
    ctx->pc = 0x126238u;
    {
        const bool branch_taken_0x126238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126238) {
            ctx->pc = 0x126270u;
            goto label_126270;
        }
    }
    ctx->pc = 0x126240u;
label_126240:
    // 0x126240: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126244:
    // 0x126244: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126248:
    // 0x126248: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126248u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12624c:
    // 0x12624c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x12624cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_126250:
    // 0x126250: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126254:
    // 0x126254: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126254u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_126258:
    // 0x126258: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12625c:
    // 0x12625c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12625cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_126260:
    // 0x126260: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126264:
    // 0x126264: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126264u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_126268:
    // 0x126268: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12626c:
    // 0x12626c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12626cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_126270:
    // 0x126270: 0x100000b5  b           . + 4 + (0xB5 << 2)
label_126274:
    if (ctx->pc == 0x126274u) {
        ctx->pc = 0x126278u;
        goto label_126278;
    }
    ctx->pc = 0x126270u;
    {
        const bool branch_taken_0x126270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126270) {
            ctx->pc = 0x126548u;
            goto label_126548;
        }
    }
    ctx->pc = 0x126278u;
label_126278:
    // 0x126278: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12627c:
    // 0x12627c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x12627cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_126280:
    // 0x126280: 0x3c0344a2  lui         $v1, 0x44A2
    ctx->pc = 0x126280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17570 << 16));
label_126284:
    // 0x126284: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x126284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_126288:
    // 0x126288: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x126288u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12628c:
    // 0x12628c: 0x0  nop
    ctx->pc = 0x12628cu;
    // NOP
label_126290:
    // 0x126290: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x126290u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_126294:
    // 0x126294: 0x0  nop
    ctx->pc = 0x126294u;
    // NOP
label_126298:
    // 0x126298: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_12629c:
    if (ctx->pc == 0x12629Cu) {
        ctx->pc = 0x1262A0u;
        goto label_1262a0;
    }
    ctx->pc = 0x126298u;
    {
        const bool branch_taken_0x126298 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x126298) {
            ctx->pc = 0x1262E4u;
            goto label_1262e4;
        }
    }
    ctx->pc = 0x1262A0u;
label_1262a0:
    // 0x1262a0: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x1262a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1262a4:
    // 0x1262a4: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_1262a8:
    if (ctx->pc == 0x1262A8u) {
        ctx->pc = 0x1262ACu;
        goto label_1262ac;
    }
    ctx->pc = 0x1262A4u;
    {
        const bool branch_taken_0x1262a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1262a4) {
            ctx->pc = 0x1262DCu;
            goto label_1262dc;
        }
    }
    ctx->pc = 0x1262ACu;
label_1262ac:
    // 0x1262ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1262acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1262b0:
    // 0x1262b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1262b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1262b4:
    // 0x1262b4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1262b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1262b8:
    // 0x1262b8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1262b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1262bc:
    // 0x1262bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1262bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1262c0:
    // 0x1262c0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1262c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1262c4:
    // 0x1262c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1262c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1262c8:
    // 0x1262c8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1262c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1262cc:
    // 0x1262cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1262ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1262d0:
    // 0x1262d0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1262d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1262d4:
    // 0x1262d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1262d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1262d8:
    // 0x1262d8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1262d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1262dc:
    // 0x1262dc: 0x1000009a  b           . + 4 + (0x9A << 2)
label_1262e0:
    if (ctx->pc == 0x1262E0u) {
        ctx->pc = 0x1262E4u;
        goto label_1262e4;
    }
    ctx->pc = 0x1262DCu;
    {
        const bool branch_taken_0x1262dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1262dc) {
            ctx->pc = 0x126548u;
            goto label_126548;
        }
    }
    ctx->pc = 0x1262E4u;
label_1262e4:
    // 0x1262e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1262e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1262e8:
    // 0x1262e8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1262e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1262ec:
    // 0x1262ec: 0x3c03455a  lui         $v1, 0x455A
    ctx->pc = 0x1262ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17754 << 16));
label_1262f0:
    // 0x1262f0: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x1262f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
label_1262f4:
    // 0x1262f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1262f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1262f8:
    // 0x1262f8: 0x0  nop
    ctx->pc = 0x1262f8u;
    // NOP
label_1262fc:
    // 0x1262fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1262fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_126300:
    // 0x126300: 0x0  nop
    ctx->pc = 0x126300u;
    // NOP
label_126304:
    // 0x126304: 0x45000090  bc1f        . + 4 + (0x90 << 2)
label_126308:
    if (ctx->pc == 0x126308u) {
        ctx->pc = 0x12630Cu;
        goto label_12630c;
    }
    ctx->pc = 0x126304u;
    {
        const bool branch_taken_0x126304 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x126304) {
            ctx->pc = 0x126548u;
            goto label_126548;
        }
    }
    ctx->pc = 0x12630Cu;
label_12630c:
    // 0x12630c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12630cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126310:
    // 0x126310: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x126310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_126314:
    // 0x126314: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x126314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
label_126318:
    // 0x126318: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x126318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_12631c:
    // 0x12631c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12631cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_126320:
    // 0x126320: 0x0  nop
    ctx->pc = 0x126320u;
    // NOP
label_126324:
    // 0x126324: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x126324u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_126328:
    // 0x126328: 0x0  nop
    ctx->pc = 0x126328u;
    // NOP
label_12632c:
    // 0x12632c: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
label_126330:
    if (ctx->pc == 0x126330u) {
        ctx->pc = 0x126334u;
        goto label_126334;
    }
    ctx->pc = 0x12632Cu;
    {
        const bool branch_taken_0x12632c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12632c) {
            ctx->pc = 0x1263A8u;
            goto label_1263a8;
        }
    }
    ctx->pc = 0x126334u;
label_126334:
    // 0x126334: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x126334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_126338:
    // 0x126338: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x126338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_12633c:
    // 0x12633c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x12633cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_126340:
    // 0x126340: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_126344:
    if (ctx->pc == 0x126344u) {
        ctx->pc = 0x126348u;
        goto label_126348;
    }
    ctx->pc = 0x126340u;
    {
        const bool branch_taken_0x126340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126340) {
            ctx->pc = 0x126358u;
            goto label_126358;
        }
    }
    ctx->pc = 0x126348u;
label_126348:
    // 0x126348: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x126348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_12634c:
    // 0x12634c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x12634cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_126350:
    // 0x126350: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_126354:
    if (ctx->pc == 0x126354u) {
        ctx->pc = 0x126358u;
        goto label_126358;
    }
    ctx->pc = 0x126350u;
    {
        const bool branch_taken_0x126350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126350) {
            ctx->pc = 0x1263A8u;
            goto label_1263a8;
        }
    }
    ctx->pc = 0x126358u;
label_126358:
    // 0x126358: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x126358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12635c:
    // 0x12635c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12635cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126360:
    // 0x126360: 0xc05d25c  jal         func_174970
label_126364:
    if (ctx->pc == 0x126364u) {
        ctx->pc = 0x126368u;
        goto label_126368;
    }
    ctx->pc = 0x126360u;
    SET_GPR_U32(ctx, 31, 0x126368u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x126360u, 0x126368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126368u;
label_126368:
    // 0x126368: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_12636c:
    if (ctx->pc == 0x12636Cu) {
        ctx->pc = 0x126370u;
        goto label_126370;
    }
    ctx->pc = 0x126368u;
    {
        const bool branch_taken_0x126368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126368) {
            ctx->pc = 0x1263A8u;
            goto label_1263a8;
        }
    }
    ctx->pc = 0x126370u;
label_126370:
    // 0x126370: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126374:
    // 0x126374: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126378:
    // 0x126378: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126378u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12637c:
    // 0x12637c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x12637cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_126380:
    // 0x126380: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126384:
    // 0x126384: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126384u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_126388:
    // 0x126388: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12638c:
    // 0x12638c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12638cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_126390:
    // 0x126390: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126394:
    // 0x126394: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126394u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_126398:
    // 0x126398: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12639c:
    // 0x12639c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12639cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1263a0:
    // 0x1263a0: 0x10000069  b           . + 4 + (0x69 << 2)
label_1263a4:
    if (ctx->pc == 0x1263A4u) {
        ctx->pc = 0x1263A8u;
        goto label_1263a8;
    }
    ctx->pc = 0x1263A0u;
    {
        const bool branch_taken_0x1263a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1263a0) {
            ctx->pc = 0x126548u;
            goto label_126548;
        }
    }
    ctx->pc = 0x1263A8u;
label_1263a8:
    // 0x1263a8: 0xc067694  jal         func_19DA50
label_1263ac:
    if (ctx->pc == 0x1263ACu) {
        ctx->pc = 0x1263B0u;
        goto label_1263b0;
    }
    ctx->pc = 0x1263A8u;
    SET_GPR_U32(ctx, 31, 0x1263B0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1263A8u, 0x1263B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1263B0u;
label_1263b0:
    // 0x1263b0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1263b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1263b4:
    // 0x1263b4: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x1263b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_1263b8:
    // 0x1263b8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1263b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1263bc:
    // 0x1263bc: 0x10830040  beq         $a0, $v1, . + 4 + (0x40 << 2)
label_1263c0:
    if (ctx->pc == 0x1263C0u) {
        ctx->pc = 0x1263C4u;
        goto label_1263c4;
    }
    ctx->pc = 0x1263BCu;
    {
        const bool branch_taken_0x1263bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1263bc) {
            ctx->pc = 0x1264C0u;
            goto label_1264c0;
        }
    }
    ctx->pc = 0x1263C4u;
label_1263c4:
    // 0x1263c4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1263c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1263c8:
    // 0x1263c8: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
label_1263cc:
    if (ctx->pc == 0x1263CCu) {
        ctx->pc = 0x1263D0u;
        goto label_1263d0;
    }
    ctx->pc = 0x1263C8u;
    {
        const bool branch_taken_0x1263c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1263c8) {
            ctx->pc = 0x12646Cu;
            goto label_12646c;
        }
    }
    ctx->pc = 0x1263D0u;
label_1263d0:
    // 0x1263d0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1263d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1263d4:
    // 0x1263d4: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
label_1263d8:
    if (ctx->pc == 0x1263D8u) {
        ctx->pc = 0x1263DCu;
        goto label_1263dc;
    }
    ctx->pc = 0x1263D4u;
    {
        const bool branch_taken_0x1263d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1263d4) {
            ctx->pc = 0x12646Cu;
            goto label_12646c;
        }
    }
    ctx->pc = 0x1263DCu;
label_1263dc:
    // 0x1263dc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1263dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1263e0:
    // 0x1263e0: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
label_1263e4:
    if (ctx->pc == 0x1263E4u) {
        ctx->pc = 0x1263E8u;
        goto label_1263e8;
    }
    ctx->pc = 0x1263E0u;
    {
        const bool branch_taken_0x1263e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1263e0) {
            ctx->pc = 0x12646Cu;
            goto label_12646c;
        }
    }
    ctx->pc = 0x1263E8u;
label_1263e8:
    // 0x1263e8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1263e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1263ec:
    // 0x1263ec: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
label_1263f0:
    if (ctx->pc == 0x1263F0u) {
        ctx->pc = 0x1263F4u;
        goto label_1263f4;
    }
    ctx->pc = 0x1263ECu;
    {
        const bool branch_taken_0x1263ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1263ec) {
            ctx->pc = 0x12646Cu;
            goto label_12646c;
        }
    }
    ctx->pc = 0x1263F4u;
label_1263f4:
    // 0x1263f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1263f8:
    if (ctx->pc == 0x1263F8u) {
        ctx->pc = 0x1263FCu;
        goto label_1263fc;
    }
    ctx->pc = 0x1263F4u;
    {
        const bool branch_taken_0x1263f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1263f4) {
            ctx->pc = 0x126404u;
            goto label_126404;
        }
    }
    ctx->pc = 0x1263FCu;
label_1263fc:
    // 0x1263fc: 0x10000042  b           . + 4 + (0x42 << 2)
label_126400:
    if (ctx->pc == 0x126400u) {
        ctx->pc = 0x126404u;
        goto label_126404;
    }
    ctx->pc = 0x1263FCu;
    {
        const bool branch_taken_0x1263fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1263fc) {
            ctx->pc = 0x126508u;
            goto label_126508;
        }
    }
    ctx->pc = 0x126404u;
label_126404:
    // 0x126404: 0x16200017  bnez        $s1, . + 4 + (0x17 << 2)
label_126408:
    if (ctx->pc == 0x126408u) {
        ctx->pc = 0x12640Cu;
        goto label_12640c;
    }
    ctx->pc = 0x126404u;
    {
        const bool branch_taken_0x126404 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x126404) {
            ctx->pc = 0x126464u;
            goto label_126464;
        }
    }
    ctx->pc = 0x12640Cu;
label_12640c:
    // 0x12640c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12640cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126410:
    // 0x126410: 0xc04d8bc  jal         func_1362F0
label_126414:
    if (ctx->pc == 0x126414u) {
        ctx->pc = 0x126418u;
        goto label_126418;
    }
    ctx->pc = 0x126410u;
    SET_GPR_U32(ctx, 31, 0x126418u);
    ctx->pc = 0x1362F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362F0u, 0x126410u, 0x126418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126418u;
label_126418:
    // 0x126418: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_12641c:
    if (ctx->pc == 0x12641Cu) {
        ctx->pc = 0x126420u;
        goto label_126420;
    }
    ctx->pc = 0x126418u;
    {
        const bool branch_taken_0x126418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126418) {
            ctx->pc = 0x126464u;
            goto label_126464;
        }
    }
    ctx->pc = 0x126420u;
label_126420:
    // 0x126420: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126424:
    // 0x126424: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126428:
    // 0x126428: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126428u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12642c:
    // 0x12642c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x12642cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_126430:
    // 0x126430: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126434:
    // 0x126434: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126434u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_126438:
    // 0x126438: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12643c:
    // 0x12643c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12643cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_126440:
    // 0x126440: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126444:
    // 0x126444: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126444u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_126448:
    // 0x126448: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12644c:
    // 0x12644c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12644cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_126450:
    // 0x126450: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x126450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126454:
    // 0x126454: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x126454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_126458:
    // 0x126458: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x126458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_12645c:
    // 0x12645c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x12645cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_126460:
    // 0x126460: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x126460u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_126464:
    // 0x126464: 0x10000038  b           . + 4 + (0x38 << 2)
label_126468:
    if (ctx->pc == 0x126468u) {
        ctx->pc = 0x12646Cu;
        goto label_12646c;
    }
    ctx->pc = 0x126464u;
    {
        const bool branch_taken_0x126464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126464) {
            ctx->pc = 0x126548u;
            goto label_126548;
        }
    }
    ctx->pc = 0x12646Cu;
label_12646c:
    // 0x12646c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12646cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126470:
    // 0x126470: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x126470u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
label_126474:
    // 0x126474: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x126474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_126478:
    // 0x126478: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x126478u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_12647c:
    // 0x12647c: 0x2861012c  slti        $at, $v1, 0x12C
    ctx->pc = 0x12647cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)300) ? 1 : 0);
label_126480:
    // 0x126480: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
label_126484:
    if (ctx->pc == 0x126484u) {
        ctx->pc = 0x126488u;
        goto label_126488;
    }
    ctx->pc = 0x126480u;
    {
        const bool branch_taken_0x126480 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x126480) {
            ctx->pc = 0x126508u;
            goto label_126508;
        }
    }
    ctx->pc = 0x126488u;
label_126488:
    // 0x126488: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12648c:
    // 0x12648c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12648cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126490:
    // 0x126490: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126490u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_126494:
    // 0x126494: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x126494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_126498:
    // 0x126498: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12649c:
    // 0x12649c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12649cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1264a0:
    // 0x1264a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1264a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1264a4:
    // 0x1264a4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1264a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1264a8:
    // 0x1264a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1264a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1264ac:
    // 0x1264ac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1264acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1264b0:
    // 0x1264b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1264b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1264b4:
    // 0x1264b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1264b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1264b8:
    // 0x1264b8: 0x10000013  b           . + 4 + (0x13 << 2)
label_1264bc:
    if (ctx->pc == 0x1264BCu) {
        ctx->pc = 0x1264C0u;
        goto label_1264c0;
    }
    ctx->pc = 0x1264B8u;
    {
        const bool branch_taken_0x1264b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1264b8) {
            ctx->pc = 0x126508u;
            goto label_126508;
        }
    }
    ctx->pc = 0x1264C0u;
label_1264c0:
    // 0x1264c0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1264c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1264c4:
    // 0x1264c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1264c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1264c8:
    // 0x1264c8: 0xc05d25c  jal         func_174970
label_1264cc:
    if (ctx->pc == 0x1264CCu) {
        ctx->pc = 0x1264D0u;
        goto label_1264d0;
    }
    ctx->pc = 0x1264C8u;
    SET_GPR_U32(ctx, 31, 0x1264D0u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x1264C8u, 0x1264D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1264D0u;
label_1264d0:
    // 0x1264d0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1264d4:
    if (ctx->pc == 0x1264D4u) {
        ctx->pc = 0x1264D8u;
        goto label_1264d8;
    }
    ctx->pc = 0x1264D0u;
    {
        const bool branch_taken_0x1264d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1264d0) {
            ctx->pc = 0x126508u;
            goto label_126508;
        }
    }
    ctx->pc = 0x1264D8u;
label_1264d8:
    // 0x1264d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1264d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1264dc:
    // 0x1264dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1264dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1264e0:
    // 0x1264e0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1264e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1264e4:
    // 0x1264e4: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x1264e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1264e8:
    // 0x1264e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1264e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1264ec:
    // 0x1264ec: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1264ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1264f0:
    // 0x1264f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1264f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1264f4:
    // 0x1264f4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1264f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1264f8:
    // 0x1264f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1264f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1264fc:
    // 0x1264fc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1264fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_126500:
    // 0x126500: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126504:
    // 0x126504: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x126504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_126508:
    // 0x126508: 0x1000000f  b           . + 4 + (0xF << 2)
label_12650c:
    if (ctx->pc == 0x12650Cu) {
        ctx->pc = 0x126510u;
        goto label_126510;
    }
    ctx->pc = 0x126508u;
    {
        const bool branch_taken_0x126508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126508) {
            ctx->pc = 0x126548u;
            goto label_126548;
        }
    }
    ctx->pc = 0x126510u;
label_126510:
    // 0x126510: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126514:
    // 0x126514: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126518:
    // 0x126518: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126518u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12651c:
    // 0x12651c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x12651cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_126520:
    // 0x126520: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126524:
    // 0x126524: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126524u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_126528:
    // 0x126528: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12652c:
    // 0x12652c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12652cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_126530:
    // 0x126530: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_126534:
    // 0x126534: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126534u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_126538:
    // 0x126538: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12653c:
    // 0x12653c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12653cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_126540:
    // 0x126540: 0x10000001  b           . + 4 + (0x1 << 2)
label_126544:
    if (ctx->pc == 0x126544u) {
        ctx->pc = 0x126548u;
        goto label_126548;
    }
    ctx->pc = 0x126540u;
    {
        const bool branch_taken_0x126540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126540) {
            ctx->pc = 0x126548u;
            goto label_126548;
        }
    }
    ctx->pc = 0x126548u;
label_126548:
    // 0x126548: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x126548u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_12654c:
    // 0x12654c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12654cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_126550:
    // 0x126550: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x126550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_126554:
    // 0x126554: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x126554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_126558:
    // 0x126558: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x126558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_12655c:
    // 0x12655c: 0x3e00008  jr          $ra
label_126560:
    if (ctx->pc == 0x126560u) {
        ctx->pc = 0x126564u;
        goto label_fallthrough_0x12655c;
    }
    ctx->pc = 0x12655Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12655Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12655c:
    ctx->pc = 0x126564u;
}
