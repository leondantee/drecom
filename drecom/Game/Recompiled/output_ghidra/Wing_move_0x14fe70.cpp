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

// Function: Wing_move
// Address: 0x14fe70 - 0x15055c
void Wing_move_0x14fe70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Wing_move_0x14fe70");
#endif

    switch (ctx->pc) {
        case 0x14fe70u: goto label_14fe70;
        case 0x14fe74u: goto label_14fe74;
        case 0x14fe78u: goto label_14fe78;
        case 0x14fe7cu: goto label_14fe7c;
        case 0x14fe80u: goto label_14fe80;
        case 0x14fe84u: goto label_14fe84;
        case 0x14fe88u: goto label_14fe88;
        case 0x14fe8cu: goto label_14fe8c;
        case 0x14fe90u: goto label_14fe90;
        case 0x14fe94u: goto label_14fe94;
        case 0x14fe98u: goto label_14fe98;
        case 0x14fe9cu: goto label_14fe9c;
        case 0x14fea0u: goto label_14fea0;
        case 0x14fea4u: goto label_14fea4;
        case 0x14fea8u: goto label_14fea8;
        case 0x14feacu: goto label_14feac;
        case 0x14feb0u: goto label_14feb0;
        case 0x14feb4u: goto label_14feb4;
        case 0x14feb8u: goto label_14feb8;
        case 0x14febcu: goto label_14febc;
        case 0x14fec0u: goto label_14fec0;
        case 0x14fec4u: goto label_14fec4;
        case 0x14fec8u: goto label_14fec8;
        case 0x14feccu: goto label_14fecc;
        case 0x14fed0u: goto label_14fed0;
        case 0x14fed4u: goto label_14fed4;
        case 0x14fed8u: goto label_14fed8;
        case 0x14fedcu: goto label_14fedc;
        case 0x14fee0u: goto label_14fee0;
        case 0x14fee4u: goto label_14fee4;
        case 0x14fee8u: goto label_14fee8;
        case 0x14feecu: goto label_14feec;
        case 0x14fef0u: goto label_14fef0;
        case 0x14fef4u: goto label_14fef4;
        case 0x14fef8u: goto label_14fef8;
        case 0x14fefcu: goto label_14fefc;
        case 0x14ff00u: goto label_14ff00;
        case 0x14ff04u: goto label_14ff04;
        case 0x14ff08u: goto label_14ff08;
        case 0x14ff0cu: goto label_14ff0c;
        case 0x14ff10u: goto label_14ff10;
        case 0x14ff14u: goto label_14ff14;
        case 0x14ff18u: goto label_14ff18;
        case 0x14ff1cu: goto label_14ff1c;
        case 0x14ff20u: goto label_14ff20;
        case 0x14ff24u: goto label_14ff24;
        case 0x14ff28u: goto label_14ff28;
        case 0x14ff2cu: goto label_14ff2c;
        case 0x14ff30u: goto label_14ff30;
        case 0x14ff34u: goto label_14ff34;
        case 0x14ff38u: goto label_14ff38;
        case 0x14ff3cu: goto label_14ff3c;
        case 0x14ff40u: goto label_14ff40;
        case 0x14ff44u: goto label_14ff44;
        case 0x14ff48u: goto label_14ff48;
        case 0x14ff4cu: goto label_14ff4c;
        case 0x14ff50u: goto label_14ff50;
        case 0x14ff54u: goto label_14ff54;
        case 0x14ff58u: goto label_14ff58;
        case 0x14ff5cu: goto label_14ff5c;
        case 0x14ff60u: goto label_14ff60;
        case 0x14ff64u: goto label_14ff64;
        case 0x14ff68u: goto label_14ff68;
        case 0x14ff6cu: goto label_14ff6c;
        case 0x14ff70u: goto label_14ff70;
        case 0x14ff74u: goto label_14ff74;
        case 0x14ff78u: goto label_14ff78;
        case 0x14ff7cu: goto label_14ff7c;
        case 0x14ff80u: goto label_14ff80;
        case 0x14ff84u: goto label_14ff84;
        case 0x14ff88u: goto label_14ff88;
        case 0x14ff8cu: goto label_14ff8c;
        case 0x14ff90u: goto label_14ff90;
        case 0x14ff94u: goto label_14ff94;
        case 0x14ff98u: goto label_14ff98;
        case 0x14ff9cu: goto label_14ff9c;
        case 0x14ffa0u: goto label_14ffa0;
        case 0x14ffa4u: goto label_14ffa4;
        case 0x14ffa8u: goto label_14ffa8;
        case 0x14ffacu: goto label_14ffac;
        case 0x14ffb0u: goto label_14ffb0;
        case 0x14ffb4u: goto label_14ffb4;
        case 0x14ffb8u: goto label_14ffb8;
        case 0x14ffbcu: goto label_14ffbc;
        case 0x14ffc0u: goto label_14ffc0;
        case 0x14ffc4u: goto label_14ffc4;
        case 0x14ffc8u: goto label_14ffc8;
        case 0x14ffccu: goto label_14ffcc;
        case 0x14ffd0u: goto label_14ffd0;
        case 0x14ffd4u: goto label_14ffd4;
        case 0x14ffd8u: goto label_14ffd8;
        case 0x14ffdcu: goto label_14ffdc;
        case 0x14ffe0u: goto label_14ffe0;
        case 0x14ffe4u: goto label_14ffe4;
        case 0x14ffe8u: goto label_14ffe8;
        case 0x14ffecu: goto label_14ffec;
        case 0x14fff0u: goto label_14fff0;
        case 0x14fff4u: goto label_14fff4;
        case 0x14fff8u: goto label_14fff8;
        case 0x14fffcu: goto label_14fffc;
        case 0x150000u: goto label_150000;
        case 0x150004u: goto label_150004;
        case 0x150008u: goto label_150008;
        case 0x15000cu: goto label_15000c;
        case 0x150010u: goto label_150010;
        case 0x150014u: goto label_150014;
        case 0x150018u: goto label_150018;
        case 0x15001cu: goto label_15001c;
        case 0x150020u: goto label_150020;
        case 0x150024u: goto label_150024;
        case 0x150028u: goto label_150028;
        case 0x15002cu: goto label_15002c;
        case 0x150030u: goto label_150030;
        case 0x150034u: goto label_150034;
        case 0x150038u: goto label_150038;
        case 0x15003cu: goto label_15003c;
        case 0x150040u: goto label_150040;
        case 0x150044u: goto label_150044;
        case 0x150048u: goto label_150048;
        case 0x15004cu: goto label_15004c;
        case 0x150050u: goto label_150050;
        case 0x150054u: goto label_150054;
        case 0x150058u: goto label_150058;
        case 0x15005cu: goto label_15005c;
        case 0x150060u: goto label_150060;
        case 0x150064u: goto label_150064;
        case 0x150068u: goto label_150068;
        case 0x15006cu: goto label_15006c;
        case 0x150070u: goto label_150070;
        case 0x150074u: goto label_150074;
        case 0x150078u: goto label_150078;
        case 0x15007cu: goto label_15007c;
        case 0x150080u: goto label_150080;
        case 0x150084u: goto label_150084;
        case 0x150088u: goto label_150088;
        case 0x15008cu: goto label_15008c;
        case 0x150090u: goto label_150090;
        case 0x150094u: goto label_150094;
        case 0x150098u: goto label_150098;
        case 0x15009cu: goto label_15009c;
        case 0x1500a0u: goto label_1500a0;
        case 0x1500a4u: goto label_1500a4;
        case 0x1500a8u: goto label_1500a8;
        case 0x1500acu: goto label_1500ac;
        case 0x1500b0u: goto label_1500b0;
        case 0x1500b4u: goto label_1500b4;
        case 0x1500b8u: goto label_1500b8;
        case 0x1500bcu: goto label_1500bc;
        case 0x1500c0u: goto label_1500c0;
        case 0x1500c4u: goto label_1500c4;
        case 0x1500c8u: goto label_1500c8;
        case 0x1500ccu: goto label_1500cc;
        case 0x1500d0u: goto label_1500d0;
        case 0x1500d4u: goto label_1500d4;
        case 0x1500d8u: goto label_1500d8;
        case 0x1500dcu: goto label_1500dc;
        case 0x1500e0u: goto label_1500e0;
        case 0x1500e4u: goto label_1500e4;
        case 0x1500e8u: goto label_1500e8;
        case 0x1500ecu: goto label_1500ec;
        case 0x1500f0u: goto label_1500f0;
        case 0x1500f4u: goto label_1500f4;
        case 0x1500f8u: goto label_1500f8;
        case 0x1500fcu: goto label_1500fc;
        case 0x150100u: goto label_150100;
        case 0x150104u: goto label_150104;
        case 0x150108u: goto label_150108;
        case 0x15010cu: goto label_15010c;
        case 0x150110u: goto label_150110;
        case 0x150114u: goto label_150114;
        case 0x150118u: goto label_150118;
        case 0x15011cu: goto label_15011c;
        case 0x150120u: goto label_150120;
        case 0x150124u: goto label_150124;
        case 0x150128u: goto label_150128;
        case 0x15012cu: goto label_15012c;
        case 0x150130u: goto label_150130;
        case 0x150134u: goto label_150134;
        case 0x150138u: goto label_150138;
        case 0x15013cu: goto label_15013c;
        case 0x150140u: goto label_150140;
        case 0x150144u: goto label_150144;
        case 0x150148u: goto label_150148;
        case 0x15014cu: goto label_15014c;
        case 0x150150u: goto label_150150;
        case 0x150154u: goto label_150154;
        case 0x150158u: goto label_150158;
        case 0x15015cu: goto label_15015c;
        case 0x150160u: goto label_150160;
        case 0x150164u: goto label_150164;
        case 0x150168u: goto label_150168;
        case 0x15016cu: goto label_15016c;
        case 0x150170u: goto label_150170;
        case 0x150174u: goto label_150174;
        case 0x150178u: goto label_150178;
        case 0x15017cu: goto label_15017c;
        case 0x150180u: goto label_150180;
        case 0x150184u: goto label_150184;
        case 0x150188u: goto label_150188;
        case 0x15018cu: goto label_15018c;
        case 0x150190u: goto label_150190;
        case 0x150194u: goto label_150194;
        case 0x150198u: goto label_150198;
        case 0x15019cu: goto label_15019c;
        case 0x1501a0u: goto label_1501a0;
        case 0x1501a4u: goto label_1501a4;
        case 0x1501a8u: goto label_1501a8;
        case 0x1501acu: goto label_1501ac;
        case 0x1501b0u: goto label_1501b0;
        case 0x1501b4u: goto label_1501b4;
        case 0x1501b8u: goto label_1501b8;
        case 0x1501bcu: goto label_1501bc;
        case 0x1501c0u: goto label_1501c0;
        case 0x1501c4u: goto label_1501c4;
        case 0x1501c8u: goto label_1501c8;
        case 0x1501ccu: goto label_1501cc;
        case 0x1501d0u: goto label_1501d0;
        case 0x1501d4u: goto label_1501d4;
        case 0x1501d8u: goto label_1501d8;
        case 0x1501dcu: goto label_1501dc;
        case 0x1501e0u: goto label_1501e0;
        case 0x1501e4u: goto label_1501e4;
        case 0x1501e8u: goto label_1501e8;
        case 0x1501ecu: goto label_1501ec;
        case 0x1501f0u: goto label_1501f0;
        case 0x1501f4u: goto label_1501f4;
        case 0x1501f8u: goto label_1501f8;
        case 0x1501fcu: goto label_1501fc;
        case 0x150200u: goto label_150200;
        case 0x150204u: goto label_150204;
        case 0x150208u: goto label_150208;
        case 0x15020cu: goto label_15020c;
        case 0x150210u: goto label_150210;
        case 0x150214u: goto label_150214;
        case 0x150218u: goto label_150218;
        case 0x15021cu: goto label_15021c;
        case 0x150220u: goto label_150220;
        case 0x150224u: goto label_150224;
        case 0x150228u: goto label_150228;
        case 0x15022cu: goto label_15022c;
        case 0x150230u: goto label_150230;
        case 0x150234u: goto label_150234;
        case 0x150238u: goto label_150238;
        case 0x15023cu: goto label_15023c;
        case 0x150240u: goto label_150240;
        case 0x150244u: goto label_150244;
        case 0x150248u: goto label_150248;
        case 0x15024cu: goto label_15024c;
        case 0x150250u: goto label_150250;
        case 0x150254u: goto label_150254;
        case 0x150258u: goto label_150258;
        case 0x15025cu: goto label_15025c;
        case 0x150260u: goto label_150260;
        case 0x150264u: goto label_150264;
        case 0x150268u: goto label_150268;
        case 0x15026cu: goto label_15026c;
        case 0x150270u: goto label_150270;
        case 0x150274u: goto label_150274;
        case 0x150278u: goto label_150278;
        case 0x15027cu: goto label_15027c;
        case 0x150280u: goto label_150280;
        case 0x150284u: goto label_150284;
        case 0x150288u: goto label_150288;
        case 0x15028cu: goto label_15028c;
        case 0x150290u: goto label_150290;
        case 0x150294u: goto label_150294;
        case 0x150298u: goto label_150298;
        case 0x15029cu: goto label_15029c;
        case 0x1502a0u: goto label_1502a0;
        case 0x1502a4u: goto label_1502a4;
        case 0x1502a8u: goto label_1502a8;
        case 0x1502acu: goto label_1502ac;
        case 0x1502b0u: goto label_1502b0;
        case 0x1502b4u: goto label_1502b4;
        case 0x1502b8u: goto label_1502b8;
        case 0x1502bcu: goto label_1502bc;
        case 0x1502c0u: goto label_1502c0;
        case 0x1502c4u: goto label_1502c4;
        case 0x1502c8u: goto label_1502c8;
        case 0x1502ccu: goto label_1502cc;
        case 0x1502d0u: goto label_1502d0;
        case 0x1502d4u: goto label_1502d4;
        case 0x1502d8u: goto label_1502d8;
        case 0x1502dcu: goto label_1502dc;
        case 0x1502e0u: goto label_1502e0;
        case 0x1502e4u: goto label_1502e4;
        case 0x1502e8u: goto label_1502e8;
        case 0x1502ecu: goto label_1502ec;
        case 0x1502f0u: goto label_1502f0;
        case 0x1502f4u: goto label_1502f4;
        case 0x1502f8u: goto label_1502f8;
        case 0x1502fcu: goto label_1502fc;
        case 0x150300u: goto label_150300;
        case 0x150304u: goto label_150304;
        case 0x150308u: goto label_150308;
        case 0x15030cu: goto label_15030c;
        case 0x150310u: goto label_150310;
        case 0x150314u: goto label_150314;
        case 0x150318u: goto label_150318;
        case 0x15031cu: goto label_15031c;
        case 0x150320u: goto label_150320;
        case 0x150324u: goto label_150324;
        case 0x150328u: goto label_150328;
        case 0x15032cu: goto label_15032c;
        case 0x150330u: goto label_150330;
        case 0x150334u: goto label_150334;
        case 0x150338u: goto label_150338;
        case 0x15033cu: goto label_15033c;
        case 0x150340u: goto label_150340;
        case 0x150344u: goto label_150344;
        case 0x150348u: goto label_150348;
        case 0x15034cu: goto label_15034c;
        case 0x150350u: goto label_150350;
        case 0x150354u: goto label_150354;
        case 0x150358u: goto label_150358;
        case 0x15035cu: goto label_15035c;
        case 0x150360u: goto label_150360;
        case 0x150364u: goto label_150364;
        case 0x150368u: goto label_150368;
        case 0x15036cu: goto label_15036c;
        case 0x150370u: goto label_150370;
        case 0x150374u: goto label_150374;
        case 0x150378u: goto label_150378;
        case 0x15037cu: goto label_15037c;
        case 0x150380u: goto label_150380;
        case 0x150384u: goto label_150384;
        case 0x150388u: goto label_150388;
        case 0x15038cu: goto label_15038c;
        case 0x150390u: goto label_150390;
        case 0x150394u: goto label_150394;
        case 0x150398u: goto label_150398;
        case 0x15039cu: goto label_15039c;
        case 0x1503a0u: goto label_1503a0;
        case 0x1503a4u: goto label_1503a4;
        case 0x1503a8u: goto label_1503a8;
        case 0x1503acu: goto label_1503ac;
        case 0x1503b0u: goto label_1503b0;
        case 0x1503b4u: goto label_1503b4;
        case 0x1503b8u: goto label_1503b8;
        case 0x1503bcu: goto label_1503bc;
        case 0x1503c0u: goto label_1503c0;
        case 0x1503c4u: goto label_1503c4;
        case 0x1503c8u: goto label_1503c8;
        case 0x1503ccu: goto label_1503cc;
        case 0x1503d0u: goto label_1503d0;
        case 0x1503d4u: goto label_1503d4;
        case 0x1503d8u: goto label_1503d8;
        case 0x1503dcu: goto label_1503dc;
        case 0x1503e0u: goto label_1503e0;
        case 0x1503e4u: goto label_1503e4;
        case 0x1503e8u: goto label_1503e8;
        case 0x1503ecu: goto label_1503ec;
        case 0x1503f0u: goto label_1503f0;
        case 0x1503f4u: goto label_1503f4;
        case 0x1503f8u: goto label_1503f8;
        case 0x1503fcu: goto label_1503fc;
        case 0x150400u: goto label_150400;
        case 0x150404u: goto label_150404;
        case 0x150408u: goto label_150408;
        case 0x15040cu: goto label_15040c;
        case 0x150410u: goto label_150410;
        case 0x150414u: goto label_150414;
        case 0x150418u: goto label_150418;
        case 0x15041cu: goto label_15041c;
        case 0x150420u: goto label_150420;
        case 0x150424u: goto label_150424;
        case 0x150428u: goto label_150428;
        case 0x15042cu: goto label_15042c;
        case 0x150430u: goto label_150430;
        case 0x150434u: goto label_150434;
        case 0x150438u: goto label_150438;
        case 0x15043cu: goto label_15043c;
        case 0x150440u: goto label_150440;
        case 0x150444u: goto label_150444;
        case 0x150448u: goto label_150448;
        case 0x15044cu: goto label_15044c;
        case 0x150450u: goto label_150450;
        case 0x150454u: goto label_150454;
        case 0x150458u: goto label_150458;
        case 0x15045cu: goto label_15045c;
        case 0x150460u: goto label_150460;
        case 0x150464u: goto label_150464;
        case 0x150468u: goto label_150468;
        case 0x15046cu: goto label_15046c;
        case 0x150470u: goto label_150470;
        case 0x150474u: goto label_150474;
        case 0x150478u: goto label_150478;
        case 0x15047cu: goto label_15047c;
        case 0x150480u: goto label_150480;
        case 0x150484u: goto label_150484;
        case 0x150488u: goto label_150488;
        case 0x15048cu: goto label_15048c;
        case 0x150490u: goto label_150490;
        case 0x150494u: goto label_150494;
        case 0x150498u: goto label_150498;
        case 0x15049cu: goto label_15049c;
        case 0x1504a0u: goto label_1504a0;
        case 0x1504a4u: goto label_1504a4;
        case 0x1504a8u: goto label_1504a8;
        case 0x1504acu: goto label_1504ac;
        case 0x1504b0u: goto label_1504b0;
        case 0x1504b4u: goto label_1504b4;
        case 0x1504b8u: goto label_1504b8;
        case 0x1504bcu: goto label_1504bc;
        case 0x1504c0u: goto label_1504c0;
        case 0x1504c4u: goto label_1504c4;
        case 0x1504c8u: goto label_1504c8;
        case 0x1504ccu: goto label_1504cc;
        case 0x1504d0u: goto label_1504d0;
        case 0x1504d4u: goto label_1504d4;
        case 0x1504d8u: goto label_1504d8;
        case 0x1504dcu: goto label_1504dc;
        case 0x1504e0u: goto label_1504e0;
        case 0x1504e4u: goto label_1504e4;
        case 0x1504e8u: goto label_1504e8;
        case 0x1504ecu: goto label_1504ec;
        case 0x1504f0u: goto label_1504f0;
        case 0x1504f4u: goto label_1504f4;
        case 0x1504f8u: goto label_1504f8;
        case 0x1504fcu: goto label_1504fc;
        case 0x150500u: goto label_150500;
        case 0x150504u: goto label_150504;
        case 0x150508u: goto label_150508;
        case 0x15050cu: goto label_15050c;
        case 0x150510u: goto label_150510;
        case 0x150514u: goto label_150514;
        case 0x150518u: goto label_150518;
        case 0x15051cu: goto label_15051c;
        case 0x150520u: goto label_150520;
        case 0x150524u: goto label_150524;
        case 0x150528u: goto label_150528;
        case 0x15052cu: goto label_15052c;
        case 0x150530u: goto label_150530;
        case 0x150534u: goto label_150534;
        case 0x150538u: goto label_150538;
        case 0x15053cu: goto label_15053c;
        case 0x150540u: goto label_150540;
        case 0x150544u: goto label_150544;
        case 0x150548u: goto label_150548;
        case 0x15054cu: goto label_15054c;
        case 0x150550u: goto label_150550;
        case 0x150554u: goto label_150554;
        case 0x150558u: goto label_150558;
        default: break;
    }

    ctx->pc = 0x14fe70u;

label_14fe70:
    // 0x14fe70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14fe70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_14fe74:
    // 0x14fe74: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x14fe74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_14fe78:
    // 0x14fe78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14fe78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_14fe7c:
    // 0x14fe7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14fe7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14fe80:
    // 0x14fe80: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x14fe80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_14fe84:
    // 0x14fe84: 0x2471dbc0  addiu       $s1, $v1, -0x2440
    ctx->pc = 0x14fe84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
label_14fe88:
    // 0x14fe88: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x14fe88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_14fe8c:
    // 0x14fe8c: 0x2470c960  addiu       $s0, $v1, -0x36A0
    ctx->pc = 0x14fe8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953312));
label_14fe90:
    // 0x14fe90: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14fe90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14fe94:
    // 0x14fe94: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x14fe94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_14fe98:
    // 0x14fe98: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x14fe98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_14fe9c:
    // 0x14fe9c: 0x106001a5  beqz        $v1, . + 4 + (0x1A5 << 2)
label_14fea0:
    if (ctx->pc == 0x14FEA0u) {
        ctx->pc = 0x14FEA4u;
        goto label_14fea4;
    }
    ctx->pc = 0x14FE9Cu;
    {
        const bool branch_taken_0x14fe9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fe9c) {
            ctx->pc = 0x150534u;
            goto label_150534;
        }
    }
    ctx->pc = 0x14FEA4u;
label_14fea4:
    // 0x14fea4: 0x922313a7  lbu         $v1, 0x13A7($s1)
    ctx->pc = 0x14fea4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5031)));
label_14fea8:
    // 0x14fea8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x14fea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14feac:
    // 0x14feac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14feacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14feb0:
    // 0x14feb0: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_14feb4:
    if (ctx->pc == 0x14FEB4u) {
        ctx->pc = 0x14FEB8u;
        goto label_14feb8;
    }
    ctx->pc = 0x14FEB0u;
    {
        const bool branch_taken_0x14feb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14feb0) {
            ctx->pc = 0x14FECCu;
            goto label_14fecc;
        }
    }
    ctx->pc = 0x14FEB8u;
label_14feb8:
    // 0x14feb8: 0x922313a7  lbu         $v1, 0x13A7($s1)
    ctx->pc = 0x14feb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5031)));
label_14febc:
    // 0x14febc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x14febcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14fec0:
    // 0x14fec0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14fec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14fec4:
    // 0x14fec4: 0x1483019b  bne         $a0, $v1, . + 4 + (0x19B << 2)
label_14fec8:
    if (ctx->pc == 0x14FEC8u) {
        ctx->pc = 0x14FECCu;
        goto label_14fecc;
    }
    ctx->pc = 0x14FEC4u;
    {
        const bool branch_taken_0x14fec4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14fec4) {
            ctx->pc = 0x150534u;
            goto label_150534;
        }
    }
    ctx->pc = 0x14FECCu;
label_14fecc:
    // 0x14fecc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14feccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14fed0:
    // 0x14fed0: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x14fed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6728)));
label_14fed4:
    // 0x14fed4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14fed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_14fed8:
    // 0x14fed8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14fed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14fedc:
    // 0x14fedc: 0x14400181  bnez        $v0, . + 4 + (0x181 << 2)
label_14fee0:
    if (ctx->pc == 0x14FEE0u) {
        ctx->pc = 0x14FEE4u;
        goto label_14fee4;
    }
    ctx->pc = 0x14FEDCu;
    {
        const bool branch_taken_0x14fedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14fedc) {
            ctx->pc = 0x1504E4u;
            goto label_1504e4;
        }
    }
    ctx->pc = 0x14FEE4u;
label_14fee4:
    // 0x14fee4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x14fee4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_14fee8:
    // 0x14fee8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x14fee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14feec:
    // 0x14feec: 0x2c81000c  sltiu       $at, $a0, 0xC
    ctx->pc = 0x14feecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_14fef0:
    // 0x14fef0: 0x10200175  beqz        $at, . + 4 + (0x175 << 2)
label_14fef4:
    if (ctx->pc == 0x14FEF4u) {
        ctx->pc = 0x14FEF8u;
        goto label_14fef8;
    }
    ctx->pc = 0x14FEF0u;
    {
        const bool branch_taken_0x14fef0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fef0) {
            ctx->pc = 0x1504C8u;
            goto label_1504c8;
        }
    }
    ctx->pc = 0x14FEF8u;
label_14fef8:
    // 0x14fef8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x14fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_14fefc:
    // 0x14fefc: 0x2443e960  addiu       $v1, $v0, -0x16A0
    ctx->pc = 0x14fefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961504));
label_14ff00:
    // 0x14ff00: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x14ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_14ff04:
    // 0x14ff04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14ff08:
    // 0x14ff08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14ff08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14ff0c:
    // 0x14ff0c: 0x400008  jr          $v0
label_14ff10:
    if (ctx->pc == 0x14FF10u) {
        ctx->pc = 0x14FF14u;
        goto label_14ff14;
    }
    ctx->pc = 0x14FF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FF0Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14FF14u;
label_14ff14:
    // 0x14ff14: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x14ff14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_14ff18:
    // 0x14ff18: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14ff18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14ff1c:
    // 0x14ff1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14ff20:
    // 0x14ff20: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_14ff24:
    if (ctx->pc == 0x14FF24u) {
        ctx->pc = 0x14FF28u;
        goto label_14ff28;
    }
    ctx->pc = 0x14FF20u;
    {
        const bool branch_taken_0x14ff20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14ff20) {
            ctx->pc = 0x14FF60u;
            goto label_14ff60;
        }
    }
    ctx->pc = 0x14FF28u;
label_14ff28:
    // 0x14ff28: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_14ff2c:
    if (ctx->pc == 0x14FF2Cu) {
        ctx->pc = 0x14FF30u;
        goto label_14ff30;
    }
    ctx->pc = 0x14FF28u;
    {
        const bool branch_taken_0x14ff28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ff28) {
            ctx->pc = 0x14FF38u;
            goto label_14ff38;
        }
    }
    ctx->pc = 0x14FF30u;
label_14ff30:
    // 0x14ff30: 0x10000165  b           . + 4 + (0x165 << 2)
label_14ff34:
    if (ctx->pc == 0x14FF34u) {
        ctx->pc = 0x14FF38u;
        goto label_14ff38;
    }
    ctx->pc = 0x14FF30u;
    {
        const bool branch_taken_0x14ff30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ff30) {
            ctx->pc = 0x1504C8u;
            goto label_1504c8;
        }
    }
    ctx->pc = 0x14FF38u;
label_14ff38:
    // 0x14ff38: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14ff38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_14ff3c:
    // 0x14ff3c: 0x8e050368  lw          $a1, 0x368($s0)
    ctx->pc = 0x14ff3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
label_14ff40:
    // 0x14ff40: 0x24063c08  addiu       $a2, $zero, 0x3C08
    ctx->pc = 0x14ff40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15368));
label_14ff44:
    // 0x14ff44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14ff44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14ff48:
    // 0x14ff48: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14ff48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14ff4c:
    // 0x14ff4c: 0xc0965d0  jal         func_259740
label_14ff50:
    if (ctx->pc == 0x14FF50u) {
        ctx->pc = 0x14FF54u;
        goto label_14ff54;
    }
    ctx->pc = 0x14FF4Cu;
    SET_GPR_U32(ctx, 31, 0x14FF54u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14FF4Cu, 0x14FF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FF54u;
label_14ff54:
    // 0x14ff54: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x14ff54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_14ff58:
    // 0x14ff58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14ff5c:
    // 0x14ff5c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x14ff5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_14ff60:
    // 0x14ff60: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14ff60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_14ff64:
    // 0x14ff64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14ff64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14ff68:
    // 0x14ff68: 0xc096b40  jal         func_25AD00
label_14ff6c:
    if (ctx->pc == 0x14FF6Cu) {
        ctx->pc = 0x14FF70u;
        goto label_14ff70;
    }
    ctx->pc = 0x14FF68u;
    SET_GPR_U32(ctx, 31, 0x14FF70u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14FF68u, 0x14FF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FF70u;
label_14ff70:
    // 0x14ff70: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14ff70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_14ff74:
    // 0x14ff74: 0xc097478  jal         func_25D1E0
label_14ff78:
    if (ctx->pc == 0x14FF78u) {
        ctx->pc = 0x14FF7Cu;
        goto label_14ff7c;
    }
    ctx->pc = 0x14FF74u;
    SET_GPR_U32(ctx, 31, 0x14FF7Cu);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x14FF74u, 0x14FF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FF7Cu;
label_14ff7c:
    // 0x14ff7c: 0x10000152  b           . + 4 + (0x152 << 2)
label_14ff80:
    if (ctx->pc == 0x14FF80u) {
        ctx->pc = 0x14FF84u;
        goto label_14ff84;
    }
    ctx->pc = 0x14FF7Cu;
    {
        const bool branch_taken_0x14ff7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ff7c) {
            ctx->pc = 0x1504C8u;
            goto label_1504c8;
        }
    }
    ctx->pc = 0x14FF84u;
label_14ff84:
    // 0x14ff84: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x14ff84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_14ff88:
    // 0x14ff88: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14ff88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14ff8c:
    // 0x14ff8c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x14ff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14ff90:
    // 0x14ff90: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
label_14ff94:
    if (ctx->pc == 0x14FF94u) {
        ctx->pc = 0x14FF98u;
        goto label_14ff98;
    }
    ctx->pc = 0x14FF90u;
    {
        const bool branch_taken_0x14ff90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14ff90) {
            ctx->pc = 0x15004Cu;
            goto label_15004c;
        }
    }
    ctx->pc = 0x14FF98u;
label_14ff98:
    // 0x14ff98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14ff98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14ff9c:
    // 0x14ff9c: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
label_14ffa0:
    if (ctx->pc == 0x14FFA0u) {
        ctx->pc = 0x14FFA4u;
        goto label_14ffa4;
    }
    ctx->pc = 0x14FF9Cu;
    {
        const bool branch_taken_0x14ff9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14ff9c) {
            ctx->pc = 0x150024u;
            goto label_150024;
        }
    }
    ctx->pc = 0x14FFA4u;
label_14ffa4:
    // 0x14ffa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14ffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14ffa8:
    // 0x14ffa8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_14ffac:
    if (ctx->pc == 0x14FFACu) {
        ctx->pc = 0x14FFB0u;
        goto label_14ffb0;
    }
    ctx->pc = 0x14FFA8u;
    {
        const bool branch_taken_0x14ffa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14ffa8) {
            ctx->pc = 0x14FFE8u;
            goto label_14ffe8;
        }
    }
    ctx->pc = 0x14FFB0u;
label_14ffb0:
    // 0x14ffb0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_14ffb4:
    if (ctx->pc == 0x14FFB4u) {
        ctx->pc = 0x14FFB8u;
        goto label_14ffb8;
    }
    ctx->pc = 0x14FFB0u;
    {
        const bool branch_taken_0x14ffb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ffb0) {
            ctx->pc = 0x14FFC0u;
            goto label_14ffc0;
        }
    }
    ctx->pc = 0x14FFB8u;
label_14ffb8:
    // 0x14ffb8: 0x10000143  b           . + 4 + (0x143 << 2)
label_14ffbc:
    if (ctx->pc == 0x14FFBCu) {
        ctx->pc = 0x14FFC0u;
        goto label_14ffc0;
    }
    ctx->pc = 0x14FFB8u;
    {
        const bool branch_taken_0x14ffb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ffb8) {
            ctx->pc = 0x1504C8u;
            goto label_1504c8;
        }
    }
    ctx->pc = 0x14FFC0u;
label_14ffc0:
    // 0x14ffc0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14ffc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_14ffc4:
    // 0x14ffc4: 0x8e050368  lw          $a1, 0x368($s0)
    ctx->pc = 0x14ffc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
label_14ffc8:
    // 0x14ffc8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x14ffc8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14ffcc:
    // 0x14ffcc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14ffccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14ffd0:
    // 0x14ffd0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14ffd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14ffd4:
    // 0x14ffd4: 0xc0965d0  jal         func_259740
label_14ffd8:
    if (ctx->pc == 0x14FFD8u) {
        ctx->pc = 0x14FFDCu;
        goto label_14ffdc;
    }
    ctx->pc = 0x14FFD4u;
    SET_GPR_U32(ctx, 31, 0x14FFDCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14FFD4u, 0x14FFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FFDCu;
label_14ffdc:
    // 0x14ffdc: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x14ffdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_14ffe0:
    // 0x14ffe0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14ffe4:
    // 0x14ffe4: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x14ffe4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_14ffe8:
    // 0x14ffe8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14ffe8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_14ffec:
    // 0x14ffec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14ffecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14fff0:
    // 0x14fff0: 0xc096b40  jal         func_25AD00
label_14fff4:
    if (ctx->pc == 0x14FFF4u) {
        ctx->pc = 0x14FFF8u;
        goto label_14fff8;
    }
    ctx->pc = 0x14FFF0u;
    SET_GPR_U32(ctx, 31, 0x14FFF8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14FFF0u, 0x14FFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FFF8u;
label_14fff8:
    // 0x14fff8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14fff8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_14fffc:
    // 0x14fffc: 0xc097478  jal         func_25D1E0
label_150000:
    if (ctx->pc == 0x150000u) {
        ctx->pc = 0x150004u;
        goto label_150004;
    }
    ctx->pc = 0x14FFFCu;
    SET_GPR_U32(ctx, 31, 0x150004u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x14FFFCu, 0x150004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150004u;
label_150004:
    // 0x150004: 0x920209e7  lbu         $v0, 0x9E7($s0)
    ctx->pc = 0x150004u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2535)));
label_150008:
    // 0x150008: 0x1040012f  beqz        $v0, . + 4 + (0x12F << 2)
label_15000c:
    if (ctx->pc == 0x15000Cu) {
        ctx->pc = 0x150010u;
        goto label_150010;
    }
    ctx->pc = 0x150008u;
    {
        const bool branch_taken_0x150008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150008) {
            ctx->pc = 0x1504C8u;
            goto label_1504c8;
        }
    }
    ctx->pc = 0x150010u;
label_150010:
    // 0x150010: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x150010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_150014:
    // 0x150014: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x150014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_150018:
    // 0x150018: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x150018u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_15001c:
    // 0x15001c: 0x1000012a  b           . + 4 + (0x12A << 2)
label_150020:
    if (ctx->pc == 0x150020u) {
        ctx->pc = 0x150024u;
        goto label_150024;
    }
    ctx->pc = 0x15001Cu;
    {
        const bool branch_taken_0x15001c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15001c) {
            ctx->pc = 0x1504C8u;
            goto label_1504c8;
        }
    }
    ctx->pc = 0x150024u;
label_150024:
    // 0x150024: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x150024u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_150028:
    // 0x150028: 0x8e050368  lw          $a1, 0x368($s0)
    ctx->pc = 0x150028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
label_15002c:
    // 0x15002c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15002cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_150030:
    // 0x150030: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x150030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_150034:
    // 0x150034: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x150034u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_150038:
    // 0x150038: 0xc0965d0  jal         func_259740
label_15003c:
    if (ctx->pc == 0x15003Cu) {
        ctx->pc = 0x150040u;
        goto label_150040;
    }
    ctx->pc = 0x150038u;
    SET_GPR_U32(ctx, 31, 0x150040u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x150038u, 0x150040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150040u;
label_150040:
    // 0x150040: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x150040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_150044:
    // 0x150044: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x150044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_150048:
    // 0x150048: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x150048u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_15004c:
    // 0x15004c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15004cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_150050:
    // 0x150050: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x150050u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_150054:
    // 0x150054: 0xc096b40  jal         func_25AD00
label_150058:
    if (ctx->pc == 0x150058u) {
        ctx->pc = 0x15005Cu;
        goto label_15005c;
    }
    ctx->pc = 0x150054u;
    SET_GPR_U32(ctx, 31, 0x15005Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x150054u, 0x15005Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15005Cu;
label_15005c:
    // 0x15005c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15005cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_150060:
    // 0x150060: 0xc097478  jal         func_25D1E0
label_150064:
    if (ctx->pc == 0x150064u) {
        ctx->pc = 0x150068u;
        goto label_150068;
    }
    ctx->pc = 0x150060u;
    SET_GPR_U32(ctx, 31, 0x150068u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x150060u, 0x150068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150068u;
label_150068:
    // 0x150068: 0x10000117  b           . + 4 + (0x117 << 2)
label_15006c:
    if (ctx->pc == 0x15006Cu) {
        ctx->pc = 0x150070u;
        goto label_150070;
    }
    ctx->pc = 0x150068u;
    {
        const bool branch_taken_0x150068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150068) {
            ctx->pc = 0x1504C8u;
            goto label_1504c8;
        }
    }
    ctx->pc = 0x150070u;
label_150070:
    // 0x150070: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x150070u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_150074:
    // 0x150074: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x150074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_150078:
    // 0x150078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x150078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15007c:
    // 0x15007c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_150080:
    if (ctx->pc == 0x150080u) {
        ctx->pc = 0x150084u;
        goto label_150084;
    }
    ctx->pc = 0x15007Cu;
    {
        const bool branch_taken_0x15007c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15007c) {
            ctx->pc = 0x1500BCu;
            goto label_1500bc;
        }
    }
    ctx->pc = 0x150084u;
label_150084:
    // 0x150084: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_150088:
    if (ctx->pc == 0x150088u) {
        ctx->pc = 0x15008Cu;
        goto label_15008c;
    }
    ctx->pc = 0x150084u;
    {
        const bool branch_taken_0x150084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150084) {
            ctx->pc = 0x150094u;
            goto label_150094;
        }
    }
    ctx->pc = 0x15008Cu;
label_15008c:
    // 0x15008c: 0x1000010e  b           . + 4 + (0x10E << 2)
label_150090:
    if (ctx->pc == 0x150090u) {
        ctx->pc = 0x150094u;
        goto label_150094;
    }
    ctx->pc = 0x15008Cu;
    {
        const bool branch_taken_0x15008c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15008c) {
            ctx->pc = 0x1504C8u;
            goto label_1504c8;
        }
    }
    ctx->pc = 0x150094u;
label_150094:
    // 0x150094: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x150094u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_150098:
    // 0x150098: 0x8e050368  lw          $a1, 0x368($s0)
    ctx->pc = 0x150098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
label_15009c:
    // 0x15009c: 0x24063c09  addiu       $a2, $zero, 0x3C09
    ctx->pc = 0x15009cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15369));
label_1500a0:
    // 0x1500a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1500a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1500a4:
    // 0x1500a4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1500a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1500a8:
    // 0x1500a8: 0xc0965d0  jal         func_259740
label_1500ac:
    if (ctx->pc == 0x1500ACu) {
        ctx->pc = 0x1500B0u;
        goto label_1500b0;
    }
    ctx->pc = 0x1500A8u;
    SET_GPR_U32(ctx, 31, 0x1500B0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1500A8u, 0x1500B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1500B0u;
label_1500b0:
    // 0x1500b0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1500b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1500b4:
    // 0x1500b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1500b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1500b8:
    // 0x1500b8: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1500b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_1500bc:
    // 0x1500bc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1500bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1500c0:
    // 0x1500c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1500c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1500c4:
    // 0x1500c4: 0xc096b40  jal         func_25AD00
label_1500c8:
    if (ctx->pc == 0x1500C8u) {
        ctx->pc = 0x1500CCu;
        goto label_1500cc;
    }
    ctx->pc = 0x1500C4u;
    SET_GPR_U32(ctx, 31, 0x1500CCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1500C4u, 0x1500CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1500CCu;
label_1500cc:
    // 0x1500cc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1500ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1500d0:
    // 0x1500d0: 0xc097478  jal         func_25D1E0
label_1500d4:
    if (ctx->pc == 0x1500D4u) {
        ctx->pc = 0x1500D8u;
        goto label_1500d8;
    }
    ctx->pc = 0x1500D0u;
    SET_GPR_U32(ctx, 31, 0x1500D8u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x1500D0u, 0x1500D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1500D8u;
label_1500d8:
    // 0x1500d8: 0x100000fb  b           . + 4 + (0xFB << 2)
label_1500dc:
    if (ctx->pc == 0x1500DCu) {
        ctx->pc = 0x1500E0u;
        goto label_1500e0;
    }
    ctx->pc = 0x1500D8u;
    {
        const bool branch_taken_0x1500d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1500d8) {
            ctx->pc = 0x1504C8u;
            goto label_1504c8;
        }
    }
    ctx->pc = 0x1500E0u;
label_1500e0:
    // 0x1500e0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1500e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1500e4:
    // 0x1500e4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1500e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1500e8:
    // 0x1500e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1500e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1500ec:
    // 0x1500ec: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_1500f0:
    if (ctx->pc == 0x1500F0u) {
        ctx->pc = 0x1500F4u;
        goto label_1500f4;
    }
    ctx->pc = 0x1500ECu;
    {
        const bool branch_taken_0x1500ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1500ec) {
            ctx->pc = 0x15012Cu;
            goto label_15012c;
        }
    }
    ctx->pc = 0x1500F4u;
label_1500f4:
    // 0x1500f4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1500f8:
    if (ctx->pc == 0x1500F8u) {
        ctx->pc = 0x1500FCu;
        goto label_1500fc;
    }
    ctx->pc = 0x1500F4u;
    {
        const bool branch_taken_0x1500f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1500f4) {
            ctx->pc = 0x150104u;
            goto label_150104;
        }
    }
    ctx->pc = 0x1500FCu;
label_1500fc:
    // 0x1500fc: 0x100000f2  b           . + 4 + (0xF2 << 2)
label_150100:
    if (ctx->pc == 0x150100u) {
        ctx->pc = 0x150104u;
        goto label_150104;
    }
    ctx->pc = 0x1500FCu;
    {
        const bool branch_taken_0x1500fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1500fc) {
            ctx->pc = 0x1504C8u;
            goto label_1504c8;
        }
    }
    ctx->pc = 0x150104u;
label_150104:
    // 0x150104: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x150104u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_150108:
    // 0x150108: 0x8e050368  lw          $a1, 0x368($s0)
    ctx->pc = 0x150108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
label_15010c:
    // 0x15010c: 0x24063c09  addiu       $a2, $zero, 0x3C09
    ctx->pc = 0x15010cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15369));
label_150110:
    // 0x150110: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x150110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_150114:
    // 0x150114: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x150114u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_150118:
    // 0x150118: 0xc0965d0  jal         func_259740
label_15011c:
    if (ctx->pc == 0x15011Cu) {
        ctx->pc = 0x150120u;
        goto label_150120;
    }
    ctx->pc = 0x150118u;
    SET_GPR_U32(ctx, 31, 0x150120u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x150118u, 0x150120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150120u;
label_150120:
    // 0x150120: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x150120u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_150124:
    // 0x150124: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x150124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_150128:
    // 0x150128: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x150128u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_15012c:
    // 0x15012c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15012cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_150130:
    // 0x150130: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x150130u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_150134:
    // 0x150134: 0xc096b40  jal         func_25AD00
label_150138:
    if (ctx->pc == 0x150138u) {
        ctx->pc = 0x15013Cu;
        goto label_15013c;
    }
    ctx->pc = 0x150134u;
    SET_GPR_U32(ctx, 31, 0x15013Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x150134u, 0x15013Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15013Cu;
label_15013c:
    // 0x15013c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15013cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_150140:
    // 0x150140: 0xc097478  jal         func_25D1E0
label_150144:
    if (ctx->pc == 0x150144u) {
        ctx->pc = 0x150148u;
        goto label_150148;
    }
    ctx->pc = 0x150140u;
    SET_GPR_U32(ctx, 31, 0x150148u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x150140u, 0x150148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150148u;
label_150148:
    // 0x150148: 0x100000df  b           . + 4 + (0xDF << 2)
label_15014c:
    if (ctx->pc == 0x15014Cu) {
        ctx->pc = 0x150150u;
        goto label_150150;
    }
    ctx->pc = 0x150148u;
    {
        const bool branch_taken_0x150148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150148) {
            ctx->pc = 0x1504C8u;
            goto label_1504c8;
        }
    }
    ctx->pc = 0x150150u;
label_150150:
    // 0x150150: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x150150u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_150154:
    // 0x150154: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x150154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_150158:
    // 0x150158: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x150158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15015c:
    // 0x15015c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_150160:
    if (ctx->pc == 0x150160u) {
        ctx->pc = 0x150164u;
        goto label_150164;
    }
    ctx->pc = 0x15015Cu;
    {
        const bool branch_taken_0x15015c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15015c) {
            ctx->pc = 0x15019Cu;
            goto label_15019c;
        }
    }
    ctx->pc = 0x150164u;
label_150164:
    // 0x150164: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_150168:
    if (ctx->pc == 0x150168u) {
        ctx->pc = 0x15016Cu;
        goto label_15016c;
    }
    ctx->pc = 0x150164u;
    {
        const bool branch_taken_0x150164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150164) {
            ctx->pc = 0x150174u;
            goto label_150174;
        }
    }
    ctx->pc = 0x15016Cu;
label_15016c:
    // 0x15016c: 0x100000d6  b           . + 4 + (0xD6 << 2)
label_150170:
    if (ctx->pc == 0x150170u) {
        ctx->pc = 0x150174u;
        goto label_150174;
    }
    ctx->pc = 0x15016Cu;
    {
        const bool branch_taken_0x15016c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15016c) {
            ctx->pc = 0x1504C8u;
            goto label_1504c8;
        }
    }
    ctx->pc = 0x150174u;
label_150174:
    // 0x150174: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x150174u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_150178:
    // 0x150178: 0x8e050368  lw          $a1, 0x368($s0)
    ctx->pc = 0x150178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
label_15017c:
    // 0x15017c: 0x24063c09  addiu       $a2, $zero, 0x3C09
    ctx->pc = 0x15017cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15369));
label_150180:
    // 0x150180: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x150180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_150184:
    // 0x150184: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x150184u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_150188:
    // 0x150188: 0xc0965d0  jal         func_259740
label_15018c:
    if (ctx->pc == 0x15018Cu) {
        ctx->pc = 0x150190u;
        goto label_150190;
    }
    ctx->pc = 0x150188u;
    SET_GPR_U32(ctx, 31, 0x150190u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x150188u, 0x150190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150190u;
label_150190:
    // 0x150190: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x150190u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_150194:
    // 0x150194: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x150194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_150198:
    // 0x150198: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x150198u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_15019c:
    // 0x15019c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15019cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1501a0:
    // 0x1501a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1501a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1501a4:
    // 0x1501a4: 0xc096b40  jal         func_25AD00
label_1501a8:
    if (ctx->pc == 0x1501A8u) {
        ctx->pc = 0x1501ACu;
        goto label_1501ac;
    }
    ctx->pc = 0x1501A4u;
    SET_GPR_U32(ctx, 31, 0x1501ACu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1501A4u, 0x1501ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1501ACu;
label_1501ac:
    // 0x1501ac: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1501acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1501b0:
    // 0x1501b0: 0xc097478  jal         func_25D1E0
label_1501b4:
    if (ctx->pc == 0x1501B4u) {
        ctx->pc = 0x1501B8u;
        goto label_1501b8;
    }
    ctx->pc = 0x1501B0u;
    SET_GPR_U32(ctx, 31, 0x1501B8u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x1501B0u, 0x1501B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1501B8u;
label_1501b8:
    // 0x1501b8: 0x100000c3  b           . + 4 + (0xC3 << 2)
label_1501bc:
    if (ctx->pc == 0x1501BCu) {
        ctx->pc = 0x1501C0u;
        goto label_1501c0;
    }
    ctx->pc = 0x1501B8u;
    {
        const bool branch_taken_0x1501b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1501b8) {
            ctx->pc = 0x1504C8u;
            goto label_1504c8;
        }
    }
    ctx->pc = 0x1501C0u;
label_1501c0:
    // 0x1501c0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1501c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1501c4:
    // 0x1501c4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1501c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1501c8:
    // 0x1501c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1501c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1501cc:
    // 0x1501cc: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_1501d0:
    if (ctx->pc == 0x1501D0u) {
        ctx->pc = 0x1501D4u;
        goto label_1501d4;
    }
    ctx->pc = 0x1501CCu;
    {
        const bool branch_taken_0x1501cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1501cc) {
            ctx->pc = 0x15020Cu;
            goto label_15020c;
        }
    }
    ctx->pc = 0x1501D4u;
label_1501d4:
    // 0x1501d4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1501d8:
    if (ctx->pc == 0x1501D8u) {
        ctx->pc = 0x1501DCu;
        goto label_1501dc;
    }
    ctx->pc = 0x1501D4u;
    {
        const bool branch_taken_0x1501d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1501d4) {
            ctx->pc = 0x1501E4u;
            goto label_1501e4;
        }
    }
    ctx->pc = 0x1501DCu;
label_1501dc:
    // 0x1501dc: 0x100000ba  b           . + 4 + (0xBA << 2)
label_1501e0:
    if (ctx->pc == 0x1501E0u) {
        ctx->pc = 0x1501E4u;
        goto label_1501e4;
    }
    ctx->pc = 0x1501DCu;
    {
        const bool branch_taken_0x1501dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1501dc) {
            ctx->pc = 0x1504C8u;
            goto label_1504c8;
        }
    }
    ctx->pc = 0x1501E4u;
label_1501e4:
    // 0x1501e4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1501e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1501e8:
    // 0x1501e8: 0x8e050368  lw          $a1, 0x368($s0)
    ctx->pc = 0x1501e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
label_1501ec:
    // 0x1501ec: 0x24063c0a  addiu       $a2, $zero, 0x3C0A
    ctx->pc = 0x1501ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15370));
label_1501f0:
    // 0x1501f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1501f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1501f4:
    // 0x1501f4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1501f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1501f8:
    // 0x1501f8: 0xc0965d0  jal         func_259740
label_1501fc:
    if (ctx->pc == 0x1501FCu) {
        ctx->pc = 0x150200u;
        goto label_150200;
    }
    ctx->pc = 0x1501F8u;
    SET_GPR_U32(ctx, 31, 0x150200u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1501F8u, 0x150200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150200u;
label_150200:
    // 0x150200: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x150200u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_150204:
    // 0x150204: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x150204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_150208:
    // 0x150208: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x150208u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_15020c:
    // 0x15020c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15020cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_150210:
    // 0x150210: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x150210u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_150214:
    // 0x150214: 0xc096b40  jal         func_25AD00
label_150218:
    if (ctx->pc == 0x150218u) {
        ctx->pc = 0x15021Cu;
        goto label_15021c;
    }
    ctx->pc = 0x150214u;
    SET_GPR_U32(ctx, 31, 0x15021Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x150214u, 0x15021Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15021Cu;
label_15021c:
    // 0x15021c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15021cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_150220:
    // 0x150220: 0xc097478  jal         func_25D1E0
label_150224:
    if (ctx->pc == 0x150224u) {
        ctx->pc = 0x150228u;
        goto label_150228;
    }
    ctx->pc = 0x150220u;
    SET_GPR_U32(ctx, 31, 0x150228u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x150220u, 0x150228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150228u;
label_150228:
    // 0x150228: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_15022c:
    if (ctx->pc == 0x15022Cu) {
        ctx->pc = 0x150230u;
        goto label_150230;
    }
    ctx->pc = 0x150228u;
    {
        const bool branch_taken_0x150228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150228) {
            ctx->pc = 0x1504C8u;
            goto label_1504c8;
        }
    }
    ctx->pc = 0x150230u;
label_150230:
    // 0x150230: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x150230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_150234:
    // 0x150234: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x150234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_150238:
    // 0x150238: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x150238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15023c:
    // 0x15023c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_150240:
    if (ctx->pc == 0x150240u) {
        ctx->pc = 0x150244u;
        goto label_150244;
    }
    ctx->pc = 0x15023Cu;
    {
        const bool branch_taken_0x15023c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15023c) {
            ctx->pc = 0x15027Cu;
            goto label_15027c;
        }
    }
    ctx->pc = 0x150244u;
label_150244:
    // 0x150244: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_150248:
    if (ctx->pc == 0x150248u) {
        ctx->pc = 0x15024Cu;
        goto label_15024c;
    }
    ctx->pc = 0x150244u;
    {
        const bool branch_taken_0x150244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150244) {
            ctx->pc = 0x150254u;
            goto label_150254;
        }
    }
    ctx->pc = 0x15024Cu;
label_15024c:
    // 0x15024c: 0x1000009e  b           . + 4 + (0x9E << 2)
label_150250:
    if (ctx->pc == 0x150250u) {
        ctx->pc = 0x150254u;
        goto label_150254;
    }
    ctx->pc = 0x15024Cu;
    {
        const bool branch_taken_0x15024c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15024c) {
            ctx->pc = 0x1504C8u;
            goto label_1504c8;
        }
    }
    ctx->pc = 0x150254u;
label_150254:
    // 0x150254: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x150254u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_150258:
    // 0x150258: 0x8e050368  lw          $a1, 0x368($s0)
    ctx->pc = 0x150258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
label_15025c:
    // 0x15025c: 0x24060a02  addiu       $a2, $zero, 0xA02
    ctx->pc = 0x15025cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2562));
label_150260:
    // 0x150260: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x150260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_150264:
    // 0x150264: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x150264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_150268:
    // 0x150268: 0xc0965d0  jal         func_259740
label_15026c:
    if (ctx->pc == 0x15026Cu) {
        ctx->pc = 0x150270u;
        goto label_150270;
    }
    ctx->pc = 0x150268u;
    SET_GPR_U32(ctx, 31, 0x150270u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x150268u, 0x150270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150270u;
label_150270:
    // 0x150270: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x150270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_150274:
    // 0x150274: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x150274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_150278:
    // 0x150278: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x150278u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_15027c:
    // 0x15027c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15027cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_150280:
    // 0x150280: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x150280u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_150284:
    // 0x150284: 0xc096b40  jal         func_25AD00
label_150288:
    if (ctx->pc == 0x150288u) {
        ctx->pc = 0x15028Cu;
        goto label_15028c;
    }
    ctx->pc = 0x150284u;
    SET_GPR_U32(ctx, 31, 0x15028Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x150284u, 0x15028Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15028Cu;
label_15028c:
    // 0x15028c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15028cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_150290:
    // 0x150290: 0xc097478  jal         func_25D1E0
label_150294:
    if (ctx->pc == 0x150294u) {
        ctx->pc = 0x150298u;
        goto label_150298;
    }
    ctx->pc = 0x150290u;
    SET_GPR_U32(ctx, 31, 0x150298u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x150290u, 0x150298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150298u;
label_150298:
    // 0x150298: 0x1000008b  b           . + 4 + (0x8B << 2)
label_15029c:
    if (ctx->pc == 0x15029Cu) {
        ctx->pc = 0x1502A0u;
        goto label_1502a0;
    }
    ctx->pc = 0x150298u;
    {
        const bool branch_taken_0x150298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150298) {
            ctx->pc = 0x1504C8u;
            goto label_1504c8;
        }
    }
    ctx->pc = 0x1502A0u;
label_1502a0:
    // 0x1502a0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1502a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1502a4:
    // 0x1502a4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1502a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1502a8:
    // 0x1502a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1502a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1502ac:
    // 0x1502ac: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_1502b0:
    if (ctx->pc == 0x1502B0u) {
        ctx->pc = 0x1502B4u;
        goto label_1502b4;
    }
    ctx->pc = 0x1502ACu;
    {
        const bool branch_taken_0x1502ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1502ac) {
            ctx->pc = 0x1502ECu;
            goto label_1502ec;
        }
    }
    ctx->pc = 0x1502B4u;
label_1502b4:
    // 0x1502b4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1502b8:
    if (ctx->pc == 0x1502B8u) {
        ctx->pc = 0x1502BCu;
        goto label_1502bc;
    }
    ctx->pc = 0x1502B4u;
    {
        const bool branch_taken_0x1502b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1502b4) {
            ctx->pc = 0x1502C4u;
            goto label_1502c4;
        }
    }
    ctx->pc = 0x1502BCu;
label_1502bc:
    // 0x1502bc: 0x10000082  b           . + 4 + (0x82 << 2)
label_1502c0:
    if (ctx->pc == 0x1502C0u) {
        ctx->pc = 0x1502C4u;
        goto label_1502c4;
    }
    ctx->pc = 0x1502BCu;
    {
        const bool branch_taken_0x1502bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1502bc) {
            ctx->pc = 0x1504C8u;
            goto label_1504c8;
        }
    }
    ctx->pc = 0x1502C4u;
label_1502c4:
    // 0x1502c4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1502c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1502c8:
    // 0x1502c8: 0x8e050368  lw          $a1, 0x368($s0)
    ctx->pc = 0x1502c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
label_1502cc:
    // 0x1502cc: 0x24060a03  addiu       $a2, $zero, 0xA03
    ctx->pc = 0x1502ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2563));
label_1502d0:
    // 0x1502d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1502d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1502d4:
    // 0x1502d4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1502d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1502d8:
    // 0x1502d8: 0xc0965d0  jal         func_259740
label_1502dc:
    if (ctx->pc == 0x1502DCu) {
        ctx->pc = 0x1502E0u;
        goto label_1502e0;
    }
    ctx->pc = 0x1502D8u;
    SET_GPR_U32(ctx, 31, 0x1502E0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1502D8u, 0x1502E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1502E0u;
label_1502e0:
    // 0x1502e0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1502e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1502e4:
    // 0x1502e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1502e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1502e8:
    // 0x1502e8: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1502e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_1502ec:
    // 0x1502ec: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1502ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1502f0:
    // 0x1502f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1502f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1502f4:
    // 0x1502f4: 0xc096b40  jal         func_25AD00
label_1502f8:
    if (ctx->pc == 0x1502F8u) {
        ctx->pc = 0x1502FCu;
        goto label_1502fc;
    }
    ctx->pc = 0x1502F4u;
    SET_GPR_U32(ctx, 31, 0x1502FCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1502F4u, 0x1502FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1502FCu;
label_1502fc:
    // 0x1502fc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1502fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_150300:
    // 0x150300: 0xc097478  jal         func_25D1E0
label_150304:
    if (ctx->pc == 0x150304u) {
        ctx->pc = 0x150308u;
        goto label_150308;
    }
    ctx->pc = 0x150300u;
    SET_GPR_U32(ctx, 31, 0x150308u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x150300u, 0x150308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150308u;
label_150308:
    // 0x150308: 0x1000006f  b           . + 4 + (0x6F << 2)
label_15030c:
    if (ctx->pc == 0x15030Cu) {
        ctx->pc = 0x150310u;
        goto label_150310;
    }
    ctx->pc = 0x150308u;
    {
        const bool branch_taken_0x150308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150308) {
            ctx->pc = 0x1504C8u;
            goto label_1504c8;
        }
    }
    ctx->pc = 0x150310u;
label_150310:
    // 0x150310: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x150310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_150314:
    // 0x150314: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x150314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_150318:
    // 0x150318: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x150318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15031c:
    // 0x15031c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_150320:
    if (ctx->pc == 0x150320u) {
        ctx->pc = 0x150324u;
        goto label_150324;
    }
    ctx->pc = 0x15031Cu;
    {
        const bool branch_taken_0x15031c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15031c) {
            ctx->pc = 0x15035Cu;
            goto label_15035c;
        }
    }
    ctx->pc = 0x150324u;
label_150324:
    // 0x150324: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_150328:
    if (ctx->pc == 0x150328u) {
        ctx->pc = 0x15032Cu;
        goto label_15032c;
    }
    ctx->pc = 0x150324u;
    {
        const bool branch_taken_0x150324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150324) {
            ctx->pc = 0x150334u;
            goto label_150334;
        }
    }
    ctx->pc = 0x15032Cu;
label_15032c:
    // 0x15032c: 0x10000066  b           . + 4 + (0x66 << 2)
label_150330:
    if (ctx->pc == 0x150330u) {
        ctx->pc = 0x150334u;
        goto label_150334;
    }
    ctx->pc = 0x15032Cu;
    {
        const bool branch_taken_0x15032c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15032c) {
            ctx->pc = 0x1504C8u;
            goto label_1504c8;
        }
    }
    ctx->pc = 0x150334u;
label_150334:
    // 0x150334: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x150334u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_150338:
    // 0x150338: 0x8e050368  lw          $a1, 0x368($s0)
    ctx->pc = 0x150338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
label_15033c:
    // 0x15033c: 0x24060a04  addiu       $a2, $zero, 0xA04
    ctx->pc = 0x15033cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2564));
label_150340:
    // 0x150340: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x150340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_150344:
    // 0x150344: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x150344u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_150348:
    // 0x150348: 0xc0965d0  jal         func_259740
label_15034c:
    if (ctx->pc == 0x15034Cu) {
        ctx->pc = 0x150350u;
        goto label_150350;
    }
    ctx->pc = 0x150348u;
    SET_GPR_U32(ctx, 31, 0x150350u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x150348u, 0x150350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150350u;
label_150350:
    // 0x150350: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x150350u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_150354:
    // 0x150354: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x150354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_150358:
    // 0x150358: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x150358u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_15035c:
    // 0x15035c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15035cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_150360:
    // 0x150360: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x150360u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_150364:
    // 0x150364: 0xc096b40  jal         func_25AD00
label_150368:
    if (ctx->pc == 0x150368u) {
        ctx->pc = 0x15036Cu;
        goto label_15036c;
    }
    ctx->pc = 0x150364u;
    SET_GPR_U32(ctx, 31, 0x15036Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x150364u, 0x15036Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15036Cu;
label_15036c:
    // 0x15036c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15036cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_150370:
    // 0x150370: 0xc097478  jal         func_25D1E0
label_150374:
    if (ctx->pc == 0x150374u) {
        ctx->pc = 0x150378u;
        goto label_150378;
    }
    ctx->pc = 0x150370u;
    SET_GPR_U32(ctx, 31, 0x150378u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x150370u, 0x150378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150378u;
label_150378:
    // 0x150378: 0x10000053  b           . + 4 + (0x53 << 2)
label_15037c:
    if (ctx->pc == 0x15037Cu) {
        ctx->pc = 0x150380u;
        goto label_150380;
    }
    ctx->pc = 0x150378u;
    {
        const bool branch_taken_0x150378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150378) {
            ctx->pc = 0x1504C8u;
            goto label_1504c8;
        }
    }
    ctx->pc = 0x150380u;
label_150380:
    // 0x150380: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x150380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_150384:
    // 0x150384: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x150384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_150388:
    // 0x150388: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x150388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15038c:
    // 0x15038c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_150390:
    if (ctx->pc == 0x150390u) {
        ctx->pc = 0x150394u;
        goto label_150394;
    }
    ctx->pc = 0x15038Cu;
    {
        const bool branch_taken_0x15038c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15038c) {
            ctx->pc = 0x1503CCu;
            goto label_1503cc;
        }
    }
    ctx->pc = 0x150394u;
label_150394:
    // 0x150394: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_150398:
    if (ctx->pc == 0x150398u) {
        ctx->pc = 0x15039Cu;
        goto label_15039c;
    }
    ctx->pc = 0x150394u;
    {
        const bool branch_taken_0x150394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150394) {
            ctx->pc = 0x1503A4u;
            goto label_1503a4;
        }
    }
    ctx->pc = 0x15039Cu;
label_15039c:
    // 0x15039c: 0x1000004a  b           . + 4 + (0x4A << 2)
label_1503a0:
    if (ctx->pc == 0x1503A0u) {
        ctx->pc = 0x1503A4u;
        goto label_1503a4;
    }
    ctx->pc = 0x15039Cu;
    {
        const bool branch_taken_0x15039c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15039c) {
            ctx->pc = 0x1504C8u;
            goto label_1504c8;
        }
    }
    ctx->pc = 0x1503A4u;
label_1503a4:
    // 0x1503a4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1503a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1503a8:
    // 0x1503a8: 0x8e050368  lw          $a1, 0x368($s0)
    ctx->pc = 0x1503a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
label_1503ac:
    // 0x1503ac: 0x24060a05  addiu       $a2, $zero, 0xA05
    ctx->pc = 0x1503acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2565));
label_1503b0:
    // 0x1503b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1503b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1503b4:
    // 0x1503b4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1503b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1503b8:
    // 0x1503b8: 0xc0965d0  jal         func_259740
label_1503bc:
    if (ctx->pc == 0x1503BCu) {
        ctx->pc = 0x1503C0u;
        goto label_1503c0;
    }
    ctx->pc = 0x1503B8u;
    SET_GPR_U32(ctx, 31, 0x1503C0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1503B8u, 0x1503C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1503C0u;
label_1503c0:
    // 0x1503c0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1503c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1503c4:
    // 0x1503c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1503c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1503c8:
    // 0x1503c8: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1503c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_1503cc:
    // 0x1503cc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1503ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1503d0:
    // 0x1503d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1503d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1503d4:
    // 0x1503d4: 0xc096b40  jal         func_25AD00
label_1503d8:
    if (ctx->pc == 0x1503D8u) {
        ctx->pc = 0x1503DCu;
        goto label_1503dc;
    }
    ctx->pc = 0x1503D4u;
    SET_GPR_U32(ctx, 31, 0x1503DCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1503D4u, 0x1503DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1503DCu;
label_1503dc:
    // 0x1503dc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1503dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1503e0:
    // 0x1503e0: 0xc097478  jal         func_25D1E0
label_1503e4:
    if (ctx->pc == 0x1503E4u) {
        ctx->pc = 0x1503E8u;
        goto label_1503e8;
    }
    ctx->pc = 0x1503E0u;
    SET_GPR_U32(ctx, 31, 0x1503E8u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x1503E0u, 0x1503E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1503E8u;
label_1503e8:
    // 0x1503e8: 0x10000037  b           . + 4 + (0x37 << 2)
label_1503ec:
    if (ctx->pc == 0x1503ECu) {
        ctx->pc = 0x1503F0u;
        goto label_1503f0;
    }
    ctx->pc = 0x1503E8u;
    {
        const bool branch_taken_0x1503e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1503e8) {
            ctx->pc = 0x1504C8u;
            goto label_1504c8;
        }
    }
    ctx->pc = 0x1503F0u;
label_1503f0:
    // 0x1503f0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1503f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1503f4:
    // 0x1503f4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1503f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1503f8:
    // 0x1503f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1503f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1503fc:
    // 0x1503fc: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_150400:
    if (ctx->pc == 0x150400u) {
        ctx->pc = 0x150404u;
        goto label_150404;
    }
    ctx->pc = 0x1503FCu;
    {
        const bool branch_taken_0x1503fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1503fc) {
            ctx->pc = 0x15043Cu;
            goto label_15043c;
        }
    }
    ctx->pc = 0x150404u;
label_150404:
    // 0x150404: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_150408:
    if (ctx->pc == 0x150408u) {
        ctx->pc = 0x15040Cu;
        goto label_15040c;
    }
    ctx->pc = 0x150404u;
    {
        const bool branch_taken_0x150404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150404) {
            ctx->pc = 0x150414u;
            goto label_150414;
        }
    }
    ctx->pc = 0x15040Cu;
label_15040c:
    // 0x15040c: 0x1000002e  b           . + 4 + (0x2E << 2)
label_150410:
    if (ctx->pc == 0x150410u) {
        ctx->pc = 0x150414u;
        goto label_150414;
    }
    ctx->pc = 0x15040Cu;
    {
        const bool branch_taken_0x15040c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15040c) {
            ctx->pc = 0x1504C8u;
            goto label_1504c8;
        }
    }
    ctx->pc = 0x150414u;
label_150414:
    // 0x150414: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x150414u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_150418:
    // 0x150418: 0x8e050368  lw          $a1, 0x368($s0)
    ctx->pc = 0x150418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
label_15041c:
    // 0x15041c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x15041cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_150420:
    // 0x150420: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x150420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_150424:
    // 0x150424: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x150424u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_150428:
    // 0x150428: 0xc0965d0  jal         func_259740
label_15042c:
    if (ctx->pc == 0x15042Cu) {
        ctx->pc = 0x150430u;
        goto label_150430;
    }
    ctx->pc = 0x150428u;
    SET_GPR_U32(ctx, 31, 0x150430u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x150428u, 0x150430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150430u;
label_150430:
    // 0x150430: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x150430u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_150434:
    // 0x150434: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x150434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_150438:
    // 0x150438: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x150438u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_15043c:
    // 0x15043c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15043cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_150440:
    // 0x150440: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x150440u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_150444:
    // 0x150444: 0xc096b40  jal         func_25AD00
label_150448:
    if (ctx->pc == 0x150448u) {
        ctx->pc = 0x15044Cu;
        goto label_15044c;
    }
    ctx->pc = 0x150444u;
    SET_GPR_U32(ctx, 31, 0x15044Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x150444u, 0x15044Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15044Cu;
label_15044c:
    // 0x15044c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15044cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_150450:
    // 0x150450: 0xc097478  jal         func_25D1E0
label_150454:
    if (ctx->pc == 0x150454u) {
        ctx->pc = 0x150458u;
        goto label_150458;
    }
    ctx->pc = 0x150450u;
    SET_GPR_U32(ctx, 31, 0x150458u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x150450u, 0x150458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150458u;
label_150458:
    // 0x150458: 0x1000001b  b           . + 4 + (0x1B << 2)
label_15045c:
    if (ctx->pc == 0x15045Cu) {
        ctx->pc = 0x150460u;
        goto label_150460;
    }
    ctx->pc = 0x150458u;
    {
        const bool branch_taken_0x150458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150458) {
            ctx->pc = 0x1504C8u;
            goto label_1504c8;
        }
    }
    ctx->pc = 0x150460u;
label_150460:
    // 0x150460: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x150460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_150464:
    // 0x150464: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x150464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_150468:
    // 0x150468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x150468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15046c:
    // 0x15046c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_150470:
    if (ctx->pc == 0x150470u) {
        ctx->pc = 0x150474u;
        goto label_150474;
    }
    ctx->pc = 0x15046Cu;
    {
        const bool branch_taken_0x15046c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15046c) {
            ctx->pc = 0x1504ACu;
            goto label_1504ac;
        }
    }
    ctx->pc = 0x150474u;
label_150474:
    // 0x150474: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_150478:
    if (ctx->pc == 0x150478u) {
        ctx->pc = 0x15047Cu;
        goto label_15047c;
    }
    ctx->pc = 0x150474u;
    {
        const bool branch_taken_0x150474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150474) {
            ctx->pc = 0x150484u;
            goto label_150484;
        }
    }
    ctx->pc = 0x15047Cu;
label_15047c:
    // 0x15047c: 0x10000012  b           . + 4 + (0x12 << 2)
label_150480:
    if (ctx->pc == 0x150480u) {
        ctx->pc = 0x150484u;
        goto label_150484;
    }
    ctx->pc = 0x15047Cu;
    {
        const bool branch_taken_0x15047c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15047c) {
            ctx->pc = 0x1504C8u;
            goto label_1504c8;
        }
    }
    ctx->pc = 0x150484u;
label_150484:
    // 0x150484: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x150484u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_150488:
    // 0x150488: 0x8e050368  lw          $a1, 0x368($s0)
    ctx->pc = 0x150488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
label_15048c:
    // 0x15048c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x15048cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_150490:
    // 0x150490: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x150490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_150494:
    // 0x150494: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x150494u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_150498:
    // 0x150498: 0xc0965d0  jal         func_259740
label_15049c:
    if (ctx->pc == 0x15049Cu) {
        ctx->pc = 0x1504A0u;
        goto label_1504a0;
    }
    ctx->pc = 0x150498u;
    SET_GPR_U32(ctx, 31, 0x1504A0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x150498u, 0x1504A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1504A0u;
label_1504a0:
    // 0x1504a0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1504a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1504a4:
    // 0x1504a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1504a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1504a8:
    // 0x1504a8: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1504a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_1504ac:
    // 0x1504ac: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1504acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1504b0:
    // 0x1504b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1504b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1504b4:
    // 0x1504b4: 0xc096b40  jal         func_25AD00
label_1504b8:
    if (ctx->pc == 0x1504B8u) {
        ctx->pc = 0x1504BCu;
        goto label_1504bc;
    }
    ctx->pc = 0x1504B4u;
    SET_GPR_U32(ctx, 31, 0x1504BCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1504B4u, 0x1504BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1504BCu;
label_1504bc:
    // 0x1504bc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1504bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1504c0:
    // 0x1504c0: 0xc097478  jal         func_25D1E0
label_1504c4:
    if (ctx->pc == 0x1504C4u) {
        ctx->pc = 0x1504C8u;
        goto label_1504c8;
    }
    ctx->pc = 0x1504C0u;
    SET_GPR_U32(ctx, 31, 0x1504C8u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x1504C0u, 0x1504C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1504C8u;
label_1504c8:
    // 0x1504c8: 0x922213a7  lbu         $v0, 0x13A7($s1)
    ctx->pc = 0x1504c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5031)));
label_1504cc:
    // 0x1504cc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1504ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1504d0:
    // 0x1504d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1504d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1504d4:
    // 0x1504d4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1504d8:
    if (ctx->pc == 0x1504D8u) {
        ctx->pc = 0x1504DCu;
        goto label_1504dc;
    }
    ctx->pc = 0x1504D4u;
    {
        const bool branch_taken_0x1504d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1504d4) {
            ctx->pc = 0x1504E4u;
            goto label_1504e4;
        }
    }
    ctx->pc = 0x1504DCu;
label_1504dc:
    // 0x1504dc: 0xc053f0c  jal         func_14FC30
label_1504e0:
    if (ctx->pc == 0x1504E0u) {
        ctx->pc = 0x1504E4u;
        goto label_1504e4;
    }
    ctx->pc = 0x1504DCu;
    SET_GPR_U32(ctx, 31, 0x1504E4u);
    ctx->pc = 0x14FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FC30u, 0x1504DCu, 0x1504E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1504E4u;
label_1504e4:
    // 0x1504e4: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x1504e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_1504e8:
    // 0x1504e8: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x1504e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1504ec:
    // 0x1504ec: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x1504ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
label_1504f0:
    // 0x1504f0: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x1504f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_1504f4:
    // 0x1504f4: 0xc0675a4  jal         func_19D690
label_1504f8:
    if (ctx->pc == 0x1504F8u) {
        ctx->pc = 0x1504FCu;
        goto label_1504fc;
    }
    ctx->pc = 0x1504F4u;
    SET_GPR_U32(ctx, 31, 0x1504FCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1504F4u, 0x1504FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1504FCu;
label_1504fc:
    // 0x1504fc: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x1504fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_150500:
    // 0x150500: 0xc0675a4  jal         func_19D690
label_150504:
    if (ctx->pc == 0x150504u) {
        ctx->pc = 0x150508u;
        goto label_150508;
    }
    ctx->pc = 0x150500u;
    SET_GPR_U32(ctx, 31, 0x150508u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x150500u, 0x150508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150508u;
label_150508:
    // 0x150508: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x150508u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_15050c:
    // 0x15050c: 0xc097a68  jal         func_25E9A0
label_150510:
    if (ctx->pc == 0x150510u) {
        ctx->pc = 0x150514u;
        goto label_150514;
    }
    ctx->pc = 0x15050Cu;
    SET_GPR_U32(ctx, 31, 0x150514u);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x15050Cu, 0x150514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150514u;
label_150514:
    // 0x150514: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x150514u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_150518:
    // 0x150518: 0xc05c04c  jal         func_170130
label_15051c:
    if (ctx->pc == 0x15051Cu) {
        ctx->pc = 0x150520u;
        goto label_150520;
    }
    ctx->pc = 0x150518u;
    SET_GPR_U32(ctx, 31, 0x150520u);
    ctx->pc = 0x170130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170130u, 0x150518u, 0x150520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150520u;
label_150520:
    // 0x150520: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x150520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_150524:
    // 0x150524: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x150524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_150528:
    // 0x150528: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x150528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_15052c:
    // 0x15052c: 0x10000005  b           . + 4 + (0x5 << 2)
label_150530:
    if (ctx->pc == 0x150530u) {
        ctx->pc = 0x150534u;
        goto label_150534;
    }
    ctx->pc = 0x15052Cu;
    {
        const bool branch_taken_0x15052c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15052c) {
            ctx->pc = 0x150544u;
            goto label_150544;
        }
    }
    ctx->pc = 0x150534u;
label_150534:
    // 0x150534: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x150534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_150538:
    // 0x150538: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x150538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_15053c:
    // 0x15053c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15053cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_150540:
    // 0x150540: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x150540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_150544:
    // 0x150544: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x150544u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_150548:
    // 0x150548: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x150548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15054c:
    // 0x15054c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15054cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_150550:
    // 0x150550: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x150550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_150554:
    // 0x150554: 0x3e00008  jr          $ra
label_150558:
    if (ctx->pc == 0x150558u) {
        ctx->pc = 0x15055Cu;
        goto label_fallthrough_0x150554;
    }
    ctx->pc = 0x150554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x150554:
    ctx->pc = 0x15055Cu;
}
