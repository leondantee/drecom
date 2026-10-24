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

// Function: Pl_r1_dp_time_atk
// Address: 0x1d0110 - 0x1d0a34
void Pl_r1_dp_time_atk_0x1d0110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_dp_time_atk_0x1d0110");
#endif

    switch (ctx->pc) {
        case 0x1d0110u: goto label_1d0110;
        case 0x1d0114u: goto label_1d0114;
        case 0x1d0118u: goto label_1d0118;
        case 0x1d011cu: goto label_1d011c;
        case 0x1d0120u: goto label_1d0120;
        case 0x1d0124u: goto label_1d0124;
        case 0x1d0128u: goto label_1d0128;
        case 0x1d012cu: goto label_1d012c;
        case 0x1d0130u: goto label_1d0130;
        case 0x1d0134u: goto label_1d0134;
        case 0x1d0138u: goto label_1d0138;
        case 0x1d013cu: goto label_1d013c;
        case 0x1d0140u: goto label_1d0140;
        case 0x1d0144u: goto label_1d0144;
        case 0x1d0148u: goto label_1d0148;
        case 0x1d014cu: goto label_1d014c;
        case 0x1d0150u: goto label_1d0150;
        case 0x1d0154u: goto label_1d0154;
        case 0x1d0158u: goto label_1d0158;
        case 0x1d015cu: goto label_1d015c;
        case 0x1d0160u: goto label_1d0160;
        case 0x1d0164u: goto label_1d0164;
        case 0x1d0168u: goto label_1d0168;
        case 0x1d016cu: goto label_1d016c;
        case 0x1d0170u: goto label_1d0170;
        case 0x1d0174u: goto label_1d0174;
        case 0x1d0178u: goto label_1d0178;
        case 0x1d017cu: goto label_1d017c;
        case 0x1d0180u: goto label_1d0180;
        case 0x1d0184u: goto label_1d0184;
        case 0x1d0188u: goto label_1d0188;
        case 0x1d018cu: goto label_1d018c;
        case 0x1d0190u: goto label_1d0190;
        case 0x1d0194u: goto label_1d0194;
        case 0x1d0198u: goto label_1d0198;
        case 0x1d019cu: goto label_1d019c;
        case 0x1d01a0u: goto label_1d01a0;
        case 0x1d01a4u: goto label_1d01a4;
        case 0x1d01a8u: goto label_1d01a8;
        case 0x1d01acu: goto label_1d01ac;
        case 0x1d01b0u: goto label_1d01b0;
        case 0x1d01b4u: goto label_1d01b4;
        case 0x1d01b8u: goto label_1d01b8;
        case 0x1d01bcu: goto label_1d01bc;
        case 0x1d01c0u: goto label_1d01c0;
        case 0x1d01c4u: goto label_1d01c4;
        case 0x1d01c8u: goto label_1d01c8;
        case 0x1d01ccu: goto label_1d01cc;
        case 0x1d01d0u: goto label_1d01d0;
        case 0x1d01d4u: goto label_1d01d4;
        case 0x1d01d8u: goto label_1d01d8;
        case 0x1d01dcu: goto label_1d01dc;
        case 0x1d01e0u: goto label_1d01e0;
        case 0x1d01e4u: goto label_1d01e4;
        case 0x1d01e8u: goto label_1d01e8;
        case 0x1d01ecu: goto label_1d01ec;
        case 0x1d01f0u: goto label_1d01f0;
        case 0x1d01f4u: goto label_1d01f4;
        case 0x1d01f8u: goto label_1d01f8;
        case 0x1d01fcu: goto label_1d01fc;
        case 0x1d0200u: goto label_1d0200;
        case 0x1d0204u: goto label_1d0204;
        case 0x1d0208u: goto label_1d0208;
        case 0x1d020cu: goto label_1d020c;
        case 0x1d0210u: goto label_1d0210;
        case 0x1d0214u: goto label_1d0214;
        case 0x1d0218u: goto label_1d0218;
        case 0x1d021cu: goto label_1d021c;
        case 0x1d0220u: goto label_1d0220;
        case 0x1d0224u: goto label_1d0224;
        case 0x1d0228u: goto label_1d0228;
        case 0x1d022cu: goto label_1d022c;
        case 0x1d0230u: goto label_1d0230;
        case 0x1d0234u: goto label_1d0234;
        case 0x1d0238u: goto label_1d0238;
        case 0x1d023cu: goto label_1d023c;
        case 0x1d0240u: goto label_1d0240;
        case 0x1d0244u: goto label_1d0244;
        case 0x1d0248u: goto label_1d0248;
        case 0x1d024cu: goto label_1d024c;
        case 0x1d0250u: goto label_1d0250;
        case 0x1d0254u: goto label_1d0254;
        case 0x1d0258u: goto label_1d0258;
        case 0x1d025cu: goto label_1d025c;
        case 0x1d0260u: goto label_1d0260;
        case 0x1d0264u: goto label_1d0264;
        case 0x1d0268u: goto label_1d0268;
        case 0x1d026cu: goto label_1d026c;
        case 0x1d0270u: goto label_1d0270;
        case 0x1d0274u: goto label_1d0274;
        case 0x1d0278u: goto label_1d0278;
        case 0x1d027cu: goto label_1d027c;
        case 0x1d0280u: goto label_1d0280;
        case 0x1d0284u: goto label_1d0284;
        case 0x1d0288u: goto label_1d0288;
        case 0x1d028cu: goto label_1d028c;
        case 0x1d0290u: goto label_1d0290;
        case 0x1d0294u: goto label_1d0294;
        case 0x1d0298u: goto label_1d0298;
        case 0x1d029cu: goto label_1d029c;
        case 0x1d02a0u: goto label_1d02a0;
        case 0x1d02a4u: goto label_1d02a4;
        case 0x1d02a8u: goto label_1d02a8;
        case 0x1d02acu: goto label_1d02ac;
        case 0x1d02b0u: goto label_1d02b0;
        case 0x1d02b4u: goto label_1d02b4;
        case 0x1d02b8u: goto label_1d02b8;
        case 0x1d02bcu: goto label_1d02bc;
        case 0x1d02c0u: goto label_1d02c0;
        case 0x1d02c4u: goto label_1d02c4;
        case 0x1d02c8u: goto label_1d02c8;
        case 0x1d02ccu: goto label_1d02cc;
        case 0x1d02d0u: goto label_1d02d0;
        case 0x1d02d4u: goto label_1d02d4;
        case 0x1d02d8u: goto label_1d02d8;
        case 0x1d02dcu: goto label_1d02dc;
        case 0x1d02e0u: goto label_1d02e0;
        case 0x1d02e4u: goto label_1d02e4;
        case 0x1d02e8u: goto label_1d02e8;
        case 0x1d02ecu: goto label_1d02ec;
        case 0x1d02f0u: goto label_1d02f0;
        case 0x1d02f4u: goto label_1d02f4;
        case 0x1d02f8u: goto label_1d02f8;
        case 0x1d02fcu: goto label_1d02fc;
        case 0x1d0300u: goto label_1d0300;
        case 0x1d0304u: goto label_1d0304;
        case 0x1d0308u: goto label_1d0308;
        case 0x1d030cu: goto label_1d030c;
        case 0x1d0310u: goto label_1d0310;
        case 0x1d0314u: goto label_1d0314;
        case 0x1d0318u: goto label_1d0318;
        case 0x1d031cu: goto label_1d031c;
        case 0x1d0320u: goto label_1d0320;
        case 0x1d0324u: goto label_1d0324;
        case 0x1d0328u: goto label_1d0328;
        case 0x1d032cu: goto label_1d032c;
        case 0x1d0330u: goto label_1d0330;
        case 0x1d0334u: goto label_1d0334;
        case 0x1d0338u: goto label_1d0338;
        case 0x1d033cu: goto label_1d033c;
        case 0x1d0340u: goto label_1d0340;
        case 0x1d0344u: goto label_1d0344;
        case 0x1d0348u: goto label_1d0348;
        case 0x1d034cu: goto label_1d034c;
        case 0x1d0350u: goto label_1d0350;
        case 0x1d0354u: goto label_1d0354;
        case 0x1d0358u: goto label_1d0358;
        case 0x1d035cu: goto label_1d035c;
        case 0x1d0360u: goto label_1d0360;
        case 0x1d0364u: goto label_1d0364;
        case 0x1d0368u: goto label_1d0368;
        case 0x1d036cu: goto label_1d036c;
        case 0x1d0370u: goto label_1d0370;
        case 0x1d0374u: goto label_1d0374;
        case 0x1d0378u: goto label_1d0378;
        case 0x1d037cu: goto label_1d037c;
        case 0x1d0380u: goto label_1d0380;
        case 0x1d0384u: goto label_1d0384;
        case 0x1d0388u: goto label_1d0388;
        case 0x1d038cu: goto label_1d038c;
        case 0x1d0390u: goto label_1d0390;
        case 0x1d0394u: goto label_1d0394;
        case 0x1d0398u: goto label_1d0398;
        case 0x1d039cu: goto label_1d039c;
        case 0x1d03a0u: goto label_1d03a0;
        case 0x1d03a4u: goto label_1d03a4;
        case 0x1d03a8u: goto label_1d03a8;
        case 0x1d03acu: goto label_1d03ac;
        case 0x1d03b0u: goto label_1d03b0;
        case 0x1d03b4u: goto label_1d03b4;
        case 0x1d03b8u: goto label_1d03b8;
        case 0x1d03bcu: goto label_1d03bc;
        case 0x1d03c0u: goto label_1d03c0;
        case 0x1d03c4u: goto label_1d03c4;
        case 0x1d03c8u: goto label_1d03c8;
        case 0x1d03ccu: goto label_1d03cc;
        case 0x1d03d0u: goto label_1d03d0;
        case 0x1d03d4u: goto label_1d03d4;
        case 0x1d03d8u: goto label_1d03d8;
        case 0x1d03dcu: goto label_1d03dc;
        case 0x1d03e0u: goto label_1d03e0;
        case 0x1d03e4u: goto label_1d03e4;
        case 0x1d03e8u: goto label_1d03e8;
        case 0x1d03ecu: goto label_1d03ec;
        case 0x1d03f0u: goto label_1d03f0;
        case 0x1d03f4u: goto label_1d03f4;
        case 0x1d03f8u: goto label_1d03f8;
        case 0x1d03fcu: goto label_1d03fc;
        case 0x1d0400u: goto label_1d0400;
        case 0x1d0404u: goto label_1d0404;
        case 0x1d0408u: goto label_1d0408;
        case 0x1d040cu: goto label_1d040c;
        case 0x1d0410u: goto label_1d0410;
        case 0x1d0414u: goto label_1d0414;
        case 0x1d0418u: goto label_1d0418;
        case 0x1d041cu: goto label_1d041c;
        case 0x1d0420u: goto label_1d0420;
        case 0x1d0424u: goto label_1d0424;
        case 0x1d0428u: goto label_1d0428;
        case 0x1d042cu: goto label_1d042c;
        case 0x1d0430u: goto label_1d0430;
        case 0x1d0434u: goto label_1d0434;
        case 0x1d0438u: goto label_1d0438;
        case 0x1d043cu: goto label_1d043c;
        case 0x1d0440u: goto label_1d0440;
        case 0x1d0444u: goto label_1d0444;
        case 0x1d0448u: goto label_1d0448;
        case 0x1d044cu: goto label_1d044c;
        case 0x1d0450u: goto label_1d0450;
        case 0x1d0454u: goto label_1d0454;
        case 0x1d0458u: goto label_1d0458;
        case 0x1d045cu: goto label_1d045c;
        case 0x1d0460u: goto label_1d0460;
        case 0x1d0464u: goto label_1d0464;
        case 0x1d0468u: goto label_1d0468;
        case 0x1d046cu: goto label_1d046c;
        case 0x1d0470u: goto label_1d0470;
        case 0x1d0474u: goto label_1d0474;
        case 0x1d0478u: goto label_1d0478;
        case 0x1d047cu: goto label_1d047c;
        case 0x1d0480u: goto label_1d0480;
        case 0x1d0484u: goto label_1d0484;
        case 0x1d0488u: goto label_1d0488;
        case 0x1d048cu: goto label_1d048c;
        case 0x1d0490u: goto label_1d0490;
        case 0x1d0494u: goto label_1d0494;
        case 0x1d0498u: goto label_1d0498;
        case 0x1d049cu: goto label_1d049c;
        case 0x1d04a0u: goto label_1d04a0;
        case 0x1d04a4u: goto label_1d04a4;
        case 0x1d04a8u: goto label_1d04a8;
        case 0x1d04acu: goto label_1d04ac;
        case 0x1d04b0u: goto label_1d04b0;
        case 0x1d04b4u: goto label_1d04b4;
        case 0x1d04b8u: goto label_1d04b8;
        case 0x1d04bcu: goto label_1d04bc;
        case 0x1d04c0u: goto label_1d04c0;
        case 0x1d04c4u: goto label_1d04c4;
        case 0x1d04c8u: goto label_1d04c8;
        case 0x1d04ccu: goto label_1d04cc;
        case 0x1d04d0u: goto label_1d04d0;
        case 0x1d04d4u: goto label_1d04d4;
        case 0x1d04d8u: goto label_1d04d8;
        case 0x1d04dcu: goto label_1d04dc;
        case 0x1d04e0u: goto label_1d04e0;
        case 0x1d04e4u: goto label_1d04e4;
        case 0x1d04e8u: goto label_1d04e8;
        case 0x1d04ecu: goto label_1d04ec;
        case 0x1d04f0u: goto label_1d04f0;
        case 0x1d04f4u: goto label_1d04f4;
        case 0x1d04f8u: goto label_1d04f8;
        case 0x1d04fcu: goto label_1d04fc;
        case 0x1d0500u: goto label_1d0500;
        case 0x1d0504u: goto label_1d0504;
        case 0x1d0508u: goto label_1d0508;
        case 0x1d050cu: goto label_1d050c;
        case 0x1d0510u: goto label_1d0510;
        case 0x1d0514u: goto label_1d0514;
        case 0x1d0518u: goto label_1d0518;
        case 0x1d051cu: goto label_1d051c;
        case 0x1d0520u: goto label_1d0520;
        case 0x1d0524u: goto label_1d0524;
        case 0x1d0528u: goto label_1d0528;
        case 0x1d052cu: goto label_1d052c;
        case 0x1d0530u: goto label_1d0530;
        case 0x1d0534u: goto label_1d0534;
        case 0x1d0538u: goto label_1d0538;
        case 0x1d053cu: goto label_1d053c;
        case 0x1d0540u: goto label_1d0540;
        case 0x1d0544u: goto label_1d0544;
        case 0x1d0548u: goto label_1d0548;
        case 0x1d054cu: goto label_1d054c;
        case 0x1d0550u: goto label_1d0550;
        case 0x1d0554u: goto label_1d0554;
        case 0x1d0558u: goto label_1d0558;
        case 0x1d055cu: goto label_1d055c;
        case 0x1d0560u: goto label_1d0560;
        case 0x1d0564u: goto label_1d0564;
        case 0x1d0568u: goto label_1d0568;
        case 0x1d056cu: goto label_1d056c;
        case 0x1d0570u: goto label_1d0570;
        case 0x1d0574u: goto label_1d0574;
        case 0x1d0578u: goto label_1d0578;
        case 0x1d057cu: goto label_1d057c;
        case 0x1d0580u: goto label_1d0580;
        case 0x1d0584u: goto label_1d0584;
        case 0x1d0588u: goto label_1d0588;
        case 0x1d058cu: goto label_1d058c;
        case 0x1d0590u: goto label_1d0590;
        case 0x1d0594u: goto label_1d0594;
        case 0x1d0598u: goto label_1d0598;
        case 0x1d059cu: goto label_1d059c;
        case 0x1d05a0u: goto label_1d05a0;
        case 0x1d05a4u: goto label_1d05a4;
        case 0x1d05a8u: goto label_1d05a8;
        case 0x1d05acu: goto label_1d05ac;
        case 0x1d05b0u: goto label_1d05b0;
        case 0x1d05b4u: goto label_1d05b4;
        case 0x1d05b8u: goto label_1d05b8;
        case 0x1d05bcu: goto label_1d05bc;
        case 0x1d05c0u: goto label_1d05c0;
        case 0x1d05c4u: goto label_1d05c4;
        case 0x1d05c8u: goto label_1d05c8;
        case 0x1d05ccu: goto label_1d05cc;
        case 0x1d05d0u: goto label_1d05d0;
        case 0x1d05d4u: goto label_1d05d4;
        case 0x1d05d8u: goto label_1d05d8;
        case 0x1d05dcu: goto label_1d05dc;
        case 0x1d05e0u: goto label_1d05e0;
        case 0x1d05e4u: goto label_1d05e4;
        case 0x1d05e8u: goto label_1d05e8;
        case 0x1d05ecu: goto label_1d05ec;
        case 0x1d05f0u: goto label_1d05f0;
        case 0x1d05f4u: goto label_1d05f4;
        case 0x1d05f8u: goto label_1d05f8;
        case 0x1d05fcu: goto label_1d05fc;
        case 0x1d0600u: goto label_1d0600;
        case 0x1d0604u: goto label_1d0604;
        case 0x1d0608u: goto label_1d0608;
        case 0x1d060cu: goto label_1d060c;
        case 0x1d0610u: goto label_1d0610;
        case 0x1d0614u: goto label_1d0614;
        case 0x1d0618u: goto label_1d0618;
        case 0x1d061cu: goto label_1d061c;
        case 0x1d0620u: goto label_1d0620;
        case 0x1d0624u: goto label_1d0624;
        case 0x1d0628u: goto label_1d0628;
        case 0x1d062cu: goto label_1d062c;
        case 0x1d0630u: goto label_1d0630;
        case 0x1d0634u: goto label_1d0634;
        case 0x1d0638u: goto label_1d0638;
        case 0x1d063cu: goto label_1d063c;
        case 0x1d0640u: goto label_1d0640;
        case 0x1d0644u: goto label_1d0644;
        case 0x1d0648u: goto label_1d0648;
        case 0x1d064cu: goto label_1d064c;
        case 0x1d0650u: goto label_1d0650;
        case 0x1d0654u: goto label_1d0654;
        case 0x1d0658u: goto label_1d0658;
        case 0x1d065cu: goto label_1d065c;
        case 0x1d0660u: goto label_1d0660;
        case 0x1d0664u: goto label_1d0664;
        case 0x1d0668u: goto label_1d0668;
        case 0x1d066cu: goto label_1d066c;
        case 0x1d0670u: goto label_1d0670;
        case 0x1d0674u: goto label_1d0674;
        case 0x1d0678u: goto label_1d0678;
        case 0x1d067cu: goto label_1d067c;
        case 0x1d0680u: goto label_1d0680;
        case 0x1d0684u: goto label_1d0684;
        case 0x1d0688u: goto label_1d0688;
        case 0x1d068cu: goto label_1d068c;
        case 0x1d0690u: goto label_1d0690;
        case 0x1d0694u: goto label_1d0694;
        case 0x1d0698u: goto label_1d0698;
        case 0x1d069cu: goto label_1d069c;
        case 0x1d06a0u: goto label_1d06a0;
        case 0x1d06a4u: goto label_1d06a4;
        case 0x1d06a8u: goto label_1d06a8;
        case 0x1d06acu: goto label_1d06ac;
        case 0x1d06b0u: goto label_1d06b0;
        case 0x1d06b4u: goto label_1d06b4;
        case 0x1d06b8u: goto label_1d06b8;
        case 0x1d06bcu: goto label_1d06bc;
        case 0x1d06c0u: goto label_1d06c0;
        case 0x1d06c4u: goto label_1d06c4;
        case 0x1d06c8u: goto label_1d06c8;
        case 0x1d06ccu: goto label_1d06cc;
        case 0x1d06d0u: goto label_1d06d0;
        case 0x1d06d4u: goto label_1d06d4;
        case 0x1d06d8u: goto label_1d06d8;
        case 0x1d06dcu: goto label_1d06dc;
        case 0x1d06e0u: goto label_1d06e0;
        case 0x1d06e4u: goto label_1d06e4;
        case 0x1d06e8u: goto label_1d06e8;
        case 0x1d06ecu: goto label_1d06ec;
        case 0x1d06f0u: goto label_1d06f0;
        case 0x1d06f4u: goto label_1d06f4;
        case 0x1d06f8u: goto label_1d06f8;
        case 0x1d06fcu: goto label_1d06fc;
        case 0x1d0700u: goto label_1d0700;
        case 0x1d0704u: goto label_1d0704;
        case 0x1d0708u: goto label_1d0708;
        case 0x1d070cu: goto label_1d070c;
        case 0x1d0710u: goto label_1d0710;
        case 0x1d0714u: goto label_1d0714;
        case 0x1d0718u: goto label_1d0718;
        case 0x1d071cu: goto label_1d071c;
        case 0x1d0720u: goto label_1d0720;
        case 0x1d0724u: goto label_1d0724;
        case 0x1d0728u: goto label_1d0728;
        case 0x1d072cu: goto label_1d072c;
        case 0x1d0730u: goto label_1d0730;
        case 0x1d0734u: goto label_1d0734;
        case 0x1d0738u: goto label_1d0738;
        case 0x1d073cu: goto label_1d073c;
        case 0x1d0740u: goto label_1d0740;
        case 0x1d0744u: goto label_1d0744;
        case 0x1d0748u: goto label_1d0748;
        case 0x1d074cu: goto label_1d074c;
        case 0x1d0750u: goto label_1d0750;
        case 0x1d0754u: goto label_1d0754;
        case 0x1d0758u: goto label_1d0758;
        case 0x1d075cu: goto label_1d075c;
        case 0x1d0760u: goto label_1d0760;
        case 0x1d0764u: goto label_1d0764;
        case 0x1d0768u: goto label_1d0768;
        case 0x1d076cu: goto label_1d076c;
        case 0x1d0770u: goto label_1d0770;
        case 0x1d0774u: goto label_1d0774;
        case 0x1d0778u: goto label_1d0778;
        case 0x1d077cu: goto label_1d077c;
        case 0x1d0780u: goto label_1d0780;
        case 0x1d0784u: goto label_1d0784;
        case 0x1d0788u: goto label_1d0788;
        case 0x1d078cu: goto label_1d078c;
        case 0x1d0790u: goto label_1d0790;
        case 0x1d0794u: goto label_1d0794;
        case 0x1d0798u: goto label_1d0798;
        case 0x1d079cu: goto label_1d079c;
        case 0x1d07a0u: goto label_1d07a0;
        case 0x1d07a4u: goto label_1d07a4;
        case 0x1d07a8u: goto label_1d07a8;
        case 0x1d07acu: goto label_1d07ac;
        case 0x1d07b0u: goto label_1d07b0;
        case 0x1d07b4u: goto label_1d07b4;
        case 0x1d07b8u: goto label_1d07b8;
        case 0x1d07bcu: goto label_1d07bc;
        case 0x1d07c0u: goto label_1d07c0;
        case 0x1d07c4u: goto label_1d07c4;
        case 0x1d07c8u: goto label_1d07c8;
        case 0x1d07ccu: goto label_1d07cc;
        case 0x1d07d0u: goto label_1d07d0;
        case 0x1d07d4u: goto label_1d07d4;
        case 0x1d07d8u: goto label_1d07d8;
        case 0x1d07dcu: goto label_1d07dc;
        case 0x1d07e0u: goto label_1d07e0;
        case 0x1d07e4u: goto label_1d07e4;
        case 0x1d07e8u: goto label_1d07e8;
        case 0x1d07ecu: goto label_1d07ec;
        case 0x1d07f0u: goto label_1d07f0;
        case 0x1d07f4u: goto label_1d07f4;
        case 0x1d07f8u: goto label_1d07f8;
        case 0x1d07fcu: goto label_1d07fc;
        case 0x1d0800u: goto label_1d0800;
        case 0x1d0804u: goto label_1d0804;
        case 0x1d0808u: goto label_1d0808;
        case 0x1d080cu: goto label_1d080c;
        case 0x1d0810u: goto label_1d0810;
        case 0x1d0814u: goto label_1d0814;
        case 0x1d0818u: goto label_1d0818;
        case 0x1d081cu: goto label_1d081c;
        case 0x1d0820u: goto label_1d0820;
        case 0x1d0824u: goto label_1d0824;
        case 0x1d0828u: goto label_1d0828;
        case 0x1d082cu: goto label_1d082c;
        case 0x1d0830u: goto label_1d0830;
        case 0x1d0834u: goto label_1d0834;
        case 0x1d0838u: goto label_1d0838;
        case 0x1d083cu: goto label_1d083c;
        case 0x1d0840u: goto label_1d0840;
        case 0x1d0844u: goto label_1d0844;
        case 0x1d0848u: goto label_1d0848;
        case 0x1d084cu: goto label_1d084c;
        case 0x1d0850u: goto label_1d0850;
        case 0x1d0854u: goto label_1d0854;
        case 0x1d0858u: goto label_1d0858;
        case 0x1d085cu: goto label_1d085c;
        case 0x1d0860u: goto label_1d0860;
        case 0x1d0864u: goto label_1d0864;
        case 0x1d0868u: goto label_1d0868;
        case 0x1d086cu: goto label_1d086c;
        case 0x1d0870u: goto label_1d0870;
        case 0x1d0874u: goto label_1d0874;
        case 0x1d0878u: goto label_1d0878;
        case 0x1d087cu: goto label_1d087c;
        case 0x1d0880u: goto label_1d0880;
        case 0x1d0884u: goto label_1d0884;
        case 0x1d0888u: goto label_1d0888;
        case 0x1d088cu: goto label_1d088c;
        case 0x1d0890u: goto label_1d0890;
        case 0x1d0894u: goto label_1d0894;
        case 0x1d0898u: goto label_1d0898;
        case 0x1d089cu: goto label_1d089c;
        case 0x1d08a0u: goto label_1d08a0;
        case 0x1d08a4u: goto label_1d08a4;
        case 0x1d08a8u: goto label_1d08a8;
        case 0x1d08acu: goto label_1d08ac;
        case 0x1d08b0u: goto label_1d08b0;
        case 0x1d08b4u: goto label_1d08b4;
        case 0x1d08b8u: goto label_1d08b8;
        case 0x1d08bcu: goto label_1d08bc;
        case 0x1d08c0u: goto label_1d08c0;
        case 0x1d08c4u: goto label_1d08c4;
        case 0x1d08c8u: goto label_1d08c8;
        case 0x1d08ccu: goto label_1d08cc;
        case 0x1d08d0u: goto label_1d08d0;
        case 0x1d08d4u: goto label_1d08d4;
        case 0x1d08d8u: goto label_1d08d8;
        case 0x1d08dcu: goto label_1d08dc;
        case 0x1d08e0u: goto label_1d08e0;
        case 0x1d08e4u: goto label_1d08e4;
        case 0x1d08e8u: goto label_1d08e8;
        case 0x1d08ecu: goto label_1d08ec;
        case 0x1d08f0u: goto label_1d08f0;
        case 0x1d08f4u: goto label_1d08f4;
        case 0x1d08f8u: goto label_1d08f8;
        case 0x1d08fcu: goto label_1d08fc;
        case 0x1d0900u: goto label_1d0900;
        case 0x1d0904u: goto label_1d0904;
        case 0x1d0908u: goto label_1d0908;
        case 0x1d090cu: goto label_1d090c;
        case 0x1d0910u: goto label_1d0910;
        case 0x1d0914u: goto label_1d0914;
        case 0x1d0918u: goto label_1d0918;
        case 0x1d091cu: goto label_1d091c;
        case 0x1d0920u: goto label_1d0920;
        case 0x1d0924u: goto label_1d0924;
        case 0x1d0928u: goto label_1d0928;
        case 0x1d092cu: goto label_1d092c;
        case 0x1d0930u: goto label_1d0930;
        case 0x1d0934u: goto label_1d0934;
        case 0x1d0938u: goto label_1d0938;
        case 0x1d093cu: goto label_1d093c;
        case 0x1d0940u: goto label_1d0940;
        case 0x1d0944u: goto label_1d0944;
        case 0x1d0948u: goto label_1d0948;
        case 0x1d094cu: goto label_1d094c;
        case 0x1d0950u: goto label_1d0950;
        case 0x1d0954u: goto label_1d0954;
        case 0x1d0958u: goto label_1d0958;
        case 0x1d095cu: goto label_1d095c;
        case 0x1d0960u: goto label_1d0960;
        case 0x1d0964u: goto label_1d0964;
        case 0x1d0968u: goto label_1d0968;
        case 0x1d096cu: goto label_1d096c;
        case 0x1d0970u: goto label_1d0970;
        case 0x1d0974u: goto label_1d0974;
        case 0x1d0978u: goto label_1d0978;
        case 0x1d097cu: goto label_1d097c;
        case 0x1d0980u: goto label_1d0980;
        case 0x1d0984u: goto label_1d0984;
        case 0x1d0988u: goto label_1d0988;
        case 0x1d098cu: goto label_1d098c;
        case 0x1d0990u: goto label_1d0990;
        case 0x1d0994u: goto label_1d0994;
        case 0x1d0998u: goto label_1d0998;
        case 0x1d099cu: goto label_1d099c;
        case 0x1d09a0u: goto label_1d09a0;
        case 0x1d09a4u: goto label_1d09a4;
        case 0x1d09a8u: goto label_1d09a8;
        case 0x1d09acu: goto label_1d09ac;
        case 0x1d09b0u: goto label_1d09b0;
        case 0x1d09b4u: goto label_1d09b4;
        case 0x1d09b8u: goto label_1d09b8;
        case 0x1d09bcu: goto label_1d09bc;
        case 0x1d09c0u: goto label_1d09c0;
        case 0x1d09c4u: goto label_1d09c4;
        case 0x1d09c8u: goto label_1d09c8;
        case 0x1d09ccu: goto label_1d09cc;
        case 0x1d09d0u: goto label_1d09d0;
        case 0x1d09d4u: goto label_1d09d4;
        case 0x1d09d8u: goto label_1d09d8;
        case 0x1d09dcu: goto label_1d09dc;
        case 0x1d09e0u: goto label_1d09e0;
        case 0x1d09e4u: goto label_1d09e4;
        case 0x1d09e8u: goto label_1d09e8;
        case 0x1d09ecu: goto label_1d09ec;
        case 0x1d09f0u: goto label_1d09f0;
        case 0x1d09f4u: goto label_1d09f4;
        case 0x1d09f8u: goto label_1d09f8;
        case 0x1d09fcu: goto label_1d09fc;
        case 0x1d0a00u: goto label_1d0a00;
        case 0x1d0a04u: goto label_1d0a04;
        case 0x1d0a08u: goto label_1d0a08;
        case 0x1d0a0cu: goto label_1d0a0c;
        case 0x1d0a10u: goto label_1d0a10;
        case 0x1d0a14u: goto label_1d0a14;
        case 0x1d0a18u: goto label_1d0a18;
        case 0x1d0a1cu: goto label_1d0a1c;
        case 0x1d0a20u: goto label_1d0a20;
        case 0x1d0a24u: goto label_1d0a24;
        case 0x1d0a28u: goto label_1d0a28;
        case 0x1d0a2cu: goto label_1d0a2c;
        case 0x1d0a30u: goto label_1d0a30;
        default: break;
    }

    ctx->pc = 0x1d0110u;

label_1d0110:
    // 0x1d0110: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d0110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1d0114:
    // 0x1d0114: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1d0114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_1d0118:
    // 0x1d0118: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d0118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d011c:
    // 0x1d011c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1d011cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_1d0120:
    // 0x1d0120: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1d0120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_1d0124:
    // 0x1d0124: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1d0124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_1d0128:
    // 0x1d0128: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d0128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1d012c:
    // 0x1d012c: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1d012cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1d0130:
    // 0x1d0130: 0x30830200  andi        $v1, $a0, 0x200
    ctx->pc = 0x1d0130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
label_1d0134:
    // 0x1d0134: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1d0138:
    if (ctx->pc == 0x1D0138u) {
        ctx->pc = 0x1D013Cu;
        goto label_1d013c;
    }
    ctx->pc = 0x1D0134u;
    {
        const bool branch_taken_0x1d0134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0134) {
            ctx->pc = 0x1D0148u;
            goto label_1d0148;
        }
    }
    ctx->pc = 0x1D013Cu;
label_1d013c:
    // 0x1d013c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1d013cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d0140:
    // 0x1d0140: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0144:
    // 0x1d0144: 0xa06413a7  sb          $a0, 0x13A7($v1)
    ctx->pc = 0x1d0144u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5031), (uint8_t)GPR_U32(ctx, 4));
label_1d0148:
    // 0x1d0148: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d0148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1d014c:
    // 0x1d014c: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1d014cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1d0150:
    // 0x1d0150: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1d0150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_1d0154:
    // 0x1d0154: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d0154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1d0158:
    // 0x1d0158: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x1d0158u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 3));
label_1d015c:
    // 0x1d015c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d015cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0160:
    // 0x1d0160: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1d0160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
label_1d0164:
    // 0x1d0164: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1d0168:
    if (ctx->pc == 0x1D0168u) {
        ctx->pc = 0x1D016Cu;
        goto label_1d016c;
    }
    ctx->pc = 0x1D0164u;
    {
        const bool branch_taken_0x1d0164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0164) {
            ctx->pc = 0x1D018Cu;
            goto label_1d018c;
        }
    }
    ctx->pc = 0x1D016Cu;
label_1d016c:
    // 0x1d016c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d016cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1d0170:
    // 0x1d0170: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1d0170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1d0174:
    // 0x1d0174: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1d0174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_1d0178:
    // 0x1d0178: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d0178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1d017c:
    // 0x1d017c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d017cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1d0180:
    // 0x1d0180: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1d0180u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 3));
label_1d0184:
    // 0x1d0184: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0188:
    // 0x1d0188: 0xa0601921  sb          $zero, 0x1921($v1)
    ctx->pc = 0x1d0188u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6433), (uint8_t)GPR_U32(ctx, 0));
label_1d018c:
    // 0x1d018c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d018cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0190:
    // 0x1d0190: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1d0190u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_1d0194:
    // 0x1d0194: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1d0194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1d0198:
    // 0x1d0198: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x1d0198u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1d019c:
    // 0x1d019c: 0x10200220  beqz        $at, . + 4 + (0x220 << 2)
label_1d01a0:
    if (ctx->pc == 0x1D01A0u) {
        ctx->pc = 0x1D01A4u;
        goto label_1d01a4;
    }
    ctx->pc = 0x1D019Cu;
    {
        const bool branch_taken_0x1d019c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d019c) {
            ctx->pc = 0x1D0A20u;
            goto label_1d0a20;
        }
    }
    ctx->pc = 0x1D01A4u;
label_1d01a4:
    // 0x1d01a4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1d01a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_1d01a8:
    // 0x1d01a8: 0x2465f580  addiu       $a1, $v1, -0xA80
    ctx->pc = 0x1d01a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964608));
label_1d01ac:
    // 0x1d01ac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1d01acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1d01b0:
    // 0x1d01b0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d01b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1d01b4:
    // 0x1d01b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d01b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d01b8:
    // 0x1d01b8: 0x600008  jr          $v1
label_1d01bc:
    if (ctx->pc == 0x1D01BCu) {
        ctx->pc = 0x1D01C0u;
        goto label_1d01c0;
    }
    ctx->pc = 0x1D01B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D01B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D01C0u;
label_1d01c0:
    // 0x1d01c0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d01c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d01c4:
    // 0x1d01c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d01c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d01c8:
    // 0x1d01c8: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1d01c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1d01cc:
    // 0x1d01cc: 0x24061e8c  addiu       $a2, $zero, 0x1E8C
    ctx->pc = 0x1d01ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7820));
label_1d01d0:
    // 0x1d01d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d01d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d01d4:
    // 0x1d01d4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1d01d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1d01d8:
    // 0x1d01d8: 0xc0965d0  jal         func_259740
label_1d01dc:
    if (ctx->pc == 0x1D01DCu) {
        ctx->pc = 0x1D01E0u;
        goto label_1d01e0;
    }
    ctx->pc = 0x1D01D8u;
    SET_GPR_U32(ctx, 31, 0x1D01E0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1D01D8u, 0x1D01E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D01E0u;
label_1d01e0:
    // 0x1d01e0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1d01e0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1d01e4:
    // 0x1d01e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d01e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d01e8:
    // 0x1d01e8: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x1d01e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
label_1d01ec:
    // 0x1d01ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d01ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d01f0:
    // 0x1d01f0: 0xac601b6c  sw          $zero, 0x1B6C($v1)
    ctx->pc = 0x1d01f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7020), GPR_U32(ctx, 0));
label_1d01f4:
    // 0x1d01f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d01f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d01f8:
    // 0x1d01f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d01f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d01fc:
    // 0x1d01fc: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1d01fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
label_1d0200:
    // 0x1d0200: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d0200u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0204:
    // 0x1d0204: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0208:
    // 0x1d0208: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x1d0208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
label_1d020c:
    // 0x1d020c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d020cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0210:
    // 0x1d0210: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x1d0210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0214:
    // 0x1d0214: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1d0214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1d0218:
    // 0x1d0218: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d021c:
    // 0x1d021c: 0x0  nop
    ctx->pc = 0x1d021cu;
    // NOP
label_1d0220:
    // 0x1d0220: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d0220u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d0224:
    // 0x1d0224: 0x0  nop
    ctx->pc = 0x1d0224u;
    // NOP
label_1d0228:
    // 0x1d0228: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1d022c:
    if (ctx->pc == 0x1D022Cu) {
        ctx->pc = 0x1D0230u;
        goto label_1d0230;
    }
    ctx->pc = 0x1D0228u;
    {
        const bool branch_taken_0x1d0228 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d0228) {
            ctx->pc = 0x1D0240u;
            goto label_1d0240;
        }
    }
    ctx->pc = 0x1D0230u;
label_1d0230:
    // 0x1d0230: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x1d0230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
label_1d0234:
    // 0x1d0234: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d0234u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0238:
    // 0x1d0238: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d023c:
    // 0x1d023c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1d023cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_1d0240:
    // 0x1d0240: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d0240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0244:
    // 0x1d0244: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x1d0244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0248:
    // 0x1d0248: 0x3c03c1a0  lui         $v1, 0xC1A0
    ctx->pc = 0x1d0248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49568 << 16));
label_1d024c:
    // 0x1d024c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d024cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0250:
    // 0x1d0250: 0x0  nop
    ctx->pc = 0x1d0250u;
    // NOP
label_1d0254:
    // 0x1d0254: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d0254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d0258:
    // 0x1d0258: 0x0  nop
    ctx->pc = 0x1d0258u;
    // NOP
label_1d025c:
    // 0x1d025c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1d0260:
    if (ctx->pc == 0x1D0260u) {
        ctx->pc = 0x1D0264u;
        goto label_1d0264;
    }
    ctx->pc = 0x1D025Cu;
    {
        const bool branch_taken_0x1d025c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d025c) {
            ctx->pc = 0x1D0274u;
            goto label_1d0274;
        }
    }
    ctx->pc = 0x1D0264u;
label_1d0264:
    // 0x1d0264: 0x3c03c1a0  lui         $v1, 0xC1A0
    ctx->pc = 0x1d0264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49568 << 16));
label_1d0268:
    // 0x1d0268: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d0268u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d026c:
    // 0x1d026c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d026cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0270:
    // 0x1d0270: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1d0270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_1d0274:
    // 0x1d0274: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0278:
    // 0x1d0278: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1d0278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d027c:
    // 0x1d027c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d027cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0280:
    // 0x1d0280: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1d0280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
label_1d0284:
    // 0x1d0284: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1d0284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0288:
    // 0x1d0288: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x1d0288u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_1d028c:
    // 0x1d028c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1d028cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d0290:
    // 0x1d0290: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x1d0290u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
label_1d0294:
    // 0x1d0294: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0298:
    // 0x1d0298: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x1d0298u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
label_1d029c:
    // 0x1d029c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d029cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1d02a0:
    // 0x1d02a0: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1d02a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_1d02a4:
    // 0x1d02a4: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_1d02a8:
    if (ctx->pc == 0x1D02A8u) {
        ctx->pc = 0x1D02ACu;
        goto label_1d02ac;
    }
    ctx->pc = 0x1D02A4u;
    {
        const bool branch_taken_0x1d02a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d02a4) {
            ctx->pc = 0x1D032Cu;
            goto label_1d032c;
        }
    }
    ctx->pc = 0x1D02ACu;
label_1d02ac:
    // 0x1d02ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d02acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1d02b0:
    // 0x1d02b0: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1d02b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1d02b4:
    // 0x1d02b4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d02b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_1d02b8:
    // 0x1d02b8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d02b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1d02bc:
    // 0x1d02bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d02bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1d02c0:
    // 0x1d02c0: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1d02c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 3));
label_1d02c4:
    // 0x1d02c4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1d02c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1d02c8:
    // 0x1d02c8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d02c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d02cc:
    // 0x1d02cc: 0xa083157d  sb          $v1, 0x157D($a0)
    ctx->pc = 0x1d02ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5501), (uint8_t)GPR_U32(ctx, 3));
label_1d02d0:
    // 0x1d02d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d02d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d02d4:
    // 0x1d02d4: 0x8c621b6c  lw          $v0, 0x1B6C($v1)
    ctx->pc = 0x1d02d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
label_1d02d8:
    // 0x1d02d8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_1d02dc:
    if (ctx->pc == 0x1D02DCu) {
        ctx->pc = 0x1D02E0u;
        goto label_1d02e0;
    }
    ctx->pc = 0x1D02D8u;
    {
        const bool branch_taken_0x1d02d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d02d8) {
            ctx->pc = 0x1D032Cu;
            goto label_1d032c;
        }
    }
    ctx->pc = 0x1D02E0u;
label_1d02e0:
    // 0x1d02e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d02e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d02e4:
    // 0x1d02e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d02e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d02e8:
    // 0x1d02e8: 0xac431b6c  sw          $v1, 0x1B6C($v0)
    ctx->pc = 0x1d02e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7020), GPR_U32(ctx, 3));
label_1d02ec:
    // 0x1d02ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d02ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d02f0:
    // 0x1d02f0: 0x844215ec  lh          $v0, 0x15EC($v0)
    ctx->pc = 0x1d02f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5612)));
label_1d02f4:
    // 0x1d02f4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1d02f8:
    if (ctx->pc == 0x1D02F8u) {
        ctx->pc = 0x1D02FCu;
        goto label_1d02fc;
    }
    ctx->pc = 0x1D02F4u;
    {
        const bool branch_taken_0x1d02f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d02f4) {
            ctx->pc = 0x1D032Cu;
            goto label_1d032c;
        }
    }
    ctx->pc = 0x1D02FCu;
label_1d02fc:
    // 0x1d02fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d02fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0300:
    // 0x1d0300: 0x846215ec  lh          $v0, 0x15EC($v1)
    ctx->pc = 0x1d0300u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
label_1d0304:
    // 0x1d0304: 0x2442ff6a  addiu       $v0, $v0, -0x96
    ctx->pc = 0x1d0304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967146));
label_1d0308:
    // 0x1d0308: 0xa46215ec  sh          $v0, 0x15EC($v1)
    ctx->pc = 0x1d0308u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5612), (uint16_t)GPR_U32(ctx, 2));
label_1d030c:
    // 0x1d030c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d030cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0310:
    // 0x1d0310: 0x844215ec  lh          $v0, 0x15EC($v0)
    ctx->pc = 0x1d0310u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5612)));
label_1d0314:
    // 0x1d0314: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d0314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_1d0318:
    // 0x1d0318: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d0318u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1d031c:
    // 0x1d031c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1d0320:
    if (ctx->pc == 0x1D0320u) {
        ctx->pc = 0x1D0324u;
        goto label_1d0324;
    }
    ctx->pc = 0x1D031Cu;
    {
        const bool branch_taken_0x1d031c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1d031c) {
            ctx->pc = 0x1D032Cu;
            goto label_1d032c;
        }
    }
    ctx->pc = 0x1D0324u;
label_1d0324:
    // 0x1d0324: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0328:
    // 0x1d0328: 0xa44015ec  sh          $zero, 0x15EC($v0)
    ctx->pc = 0x1d0328u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5612), (uint16_t)GPR_U32(ctx, 0));
label_1d032c:
    // 0x1d032c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d032cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0330:
    // 0x1d0330: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1d0330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1d0334:
    // 0x1d0334: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1d0334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_1d0338:
    // 0x1d0338: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1d0338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1d033c:
    // 0x1d033c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1d033cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1d0340:
    // 0x1d0340: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d0340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0344:
    // 0x1d0344: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1d0344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1d0348:
    // 0x1d0348: 0xc096b40  jal         func_25AD00
label_1d034c:
    if (ctx->pc == 0x1D034Cu) {
        ctx->pc = 0x1D0350u;
        goto label_1d0350;
    }
    ctx->pc = 0x1D0348u;
    SET_GPR_U32(ctx, 31, 0x1D0350u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1D0348u, 0x1D0350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0350u;
label_1d0350:
    // 0x1d0350: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d0350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0354:
    // 0x1d0354: 0xc05cd10  jal         func_173440
label_1d0358:
    if (ctx->pc == 0x1D0358u) {
        ctx->pc = 0x1D035Cu;
        goto label_1d035c;
    }
    ctx->pc = 0x1D0354u;
    SET_GPR_U32(ctx, 31, 0x1D035Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1D0354u, 0x1D035Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D035Cu;
label_1d035c:
    // 0x1d035c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d035cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d0360:
    // 0x1d0360: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d0360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0364:
    // 0x1d0364: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1d0364u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1d0368:
    // 0x1d0368: 0xc057480  jal         func_15D200
label_1d036c:
    if (ctx->pc == 0x1D036Cu) {
        ctx->pc = 0x1D0370u;
        goto label_1d0370;
    }
    ctx->pc = 0x1D0368u;
    SET_GPR_U32(ctx, 31, 0x1D0370u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1D0368u, 0x1D0370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0370u;
label_1d0370:
    // 0x1d0370: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0374:
    // 0x1d0374: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1d0374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0378:
    // 0x1d0378: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d0378u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d037c:
    // 0x1d037c: 0x0  nop
    ctx->pc = 0x1d037cu;
    // NOP
label_1d0380:
    // 0x1d0380: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d0380u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d0384:
    // 0x1d0384: 0x0  nop
    ctx->pc = 0x1d0384u;
    // NOP
label_1d0388:
    // 0x1d0388: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
label_1d038c:
    if (ctx->pc == 0x1D038Cu) {
        ctx->pc = 0x1D0390u;
        goto label_1d0390;
    }
    ctx->pc = 0x1D0388u;
    {
        const bool branch_taken_0x1d0388 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d0388) {
            ctx->pc = 0x1D0400u;
            goto label_1d0400;
        }
    }
    ctx->pc = 0x1D0390u;
label_1d0390:
    // 0x1d0390: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0394:
    // 0x1d0394: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x1d0394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_1d0398:
    // 0x1d0398: 0xc057a80  jal         func_15EA00
label_1d039c:
    if (ctx->pc == 0x1D039Cu) {
        ctx->pc = 0x1D03A0u;
        goto label_1d03a0;
    }
    ctx->pc = 0x1D0398u;
    SET_GPR_U32(ctx, 31, 0x1D03A0u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1D0398u, 0x1D03A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D03A0u;
label_1d03a0:
    // 0x1d03a0: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x1d03a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
label_1d03a4:
    // 0x1d03a4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1d03a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1d03a8:
    // 0x1d03a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d03a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d03ac:
    // 0x1d03ac: 0x0  nop
    ctx->pc = 0x1d03acu;
    // NOP
label_1d03b0:
    // 0x1d03b0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d03b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1d03b4:
    // 0x1d03b4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1d03b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1d03b8:
    // 0x1d03b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d03b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d03bc:
    // 0x1d03bc: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1d03bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d03c0:
    // 0x1d03c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d03c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d03c4:
    // 0x1d03c4: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1d03c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d03c8:
    // 0x1d03c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d03c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d03cc:
    // 0x1d03cc: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1d03ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1d03d0:
    // 0x1d03d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d03d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d03d4:
    // 0x1d03d4: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1d03d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d03d8:
    // 0x1d03d8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1d03d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d03dc:
    // 0x1d03dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d03dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d03e0:
    // 0x1d03e0: 0x0  nop
    ctx->pc = 0x1d03e0u;
    // NOP
label_1d03e4:
    // 0x1d03e4: 0x45010026  bc1t        . + 4 + (0x26 << 2)
label_1d03e8:
    if (ctx->pc == 0x1D03E8u) {
        ctx->pc = 0x1D03ECu;
        goto label_1d03ec;
    }
    ctx->pc = 0x1D03E4u;
    {
        const bool branch_taken_0x1d03e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d03e4) {
            ctx->pc = 0x1D0480u;
            goto label_1d0480;
        }
    }
    ctx->pc = 0x1D03ECu;
label_1d03ec:
    // 0x1d03ec: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1d03ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d03f0:
    // 0x1d03f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d03f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d03f4:
    // 0x1d03f4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1d03f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1d03f8:
    // 0x1d03f8: 0x10000021  b           . + 4 + (0x21 << 2)
label_1d03fc:
    if (ctx->pc == 0x1D03FCu) {
        ctx->pc = 0x1D0400u;
        goto label_1d0400;
    }
    ctx->pc = 0x1D03F8u;
    {
        const bool branch_taken_0x1d03f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d03f8) {
            ctx->pc = 0x1D0480u;
            goto label_1d0480;
        }
    }
    ctx->pc = 0x1D0400u;
label_1d0400:
    // 0x1d0400: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0404:
    // 0x1d0404: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0408:
    // 0x1d0408: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1d0408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1d040c:
    // 0x1d040c: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1d040cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_1d0410:
    // 0x1d0410: 0xc05cf7c  jal         func_173DF0
label_1d0414:
    if (ctx->pc == 0x1D0414u) {
        ctx->pc = 0x1D0418u;
        goto label_1d0418;
    }
    ctx->pc = 0x1D0410u;
    SET_GPR_U32(ctx, 31, 0x1D0418u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1D0410u, 0x1D0418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0418u;
label_1d0418:
    // 0x1d0418: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1d0418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1d041c:
    // 0x1d041c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d041cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0420:
    // 0x1d0420: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1d0420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0424:
    // 0x1d0424: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0428:
    // 0x1d0428: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1d0428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d042c:
    // 0x1d042c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d042cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d0430:
    // 0x1d0430: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1d0430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1d0434:
    // 0x1d0434: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0438:
    // 0x1d0438: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1d0438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d043c:
    // 0x1d043c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d043cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0440:
    // 0x1d0440: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x1d0440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0444:
    // 0x1d0444: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d0444u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1d0448:
    // 0x1d0448: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1d0448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_1d044c:
    // 0x1d044c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d044cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0450:
    // 0x1d0450: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1d0450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0454:
    // 0x1d0454: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1d0454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0458:
    // 0x1d0458: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d0458u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d045c:
    // 0x1d045c: 0x0  nop
    ctx->pc = 0x1d045cu;
    // NOP
label_1d0460:
    // 0x1d0460: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1d0464:
    if (ctx->pc == 0x1D0464u) {
        ctx->pc = 0x1D0468u;
        goto label_1d0468;
    }
    ctx->pc = 0x1D0460u;
    {
        const bool branch_taken_0x1d0460 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d0460) {
            ctx->pc = 0x1D0480u;
            goto label_1d0480;
        }
    }
    ctx->pc = 0x1D0468u;
label_1d0468:
    // 0x1d0468: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1d0468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d046c:
    // 0x1d046c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d046cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0470:
    // 0x1d0470: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1d0470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1d0474:
    // 0x1d0474: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d0474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0478:
    // 0x1d0478: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d047c:
    // 0x1d047c: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x1d047cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
label_1d0480:
    // 0x1d0480: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0484:
    // 0x1d0484: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1d0484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0488:
    // 0x1d0488: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d048c:
    // 0x1d048c: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x1d048cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0490:
    // 0x1d0490: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d0490u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1d0494:
    // 0x1d0494: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1d0494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_1d0498:
    // 0x1d0498: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1d0498u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1d049c:
    // 0x1d049c: 0xc097530  jal         func_25D4C0
label_1d04a0:
    if (ctx->pc == 0x1D04A0u) {
        ctx->pc = 0x1D04A4u;
        goto label_1d04a4;
    }
    ctx->pc = 0x1D049Cu;
    SET_GPR_U32(ctx, 31, 0x1D04A4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1D049Cu, 0x1D04A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D04A4u;
label_1d04a4:
    // 0x1d04a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d04a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d04a8:
    // 0x1d04a8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1d04a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1d04ac:
    // 0x1d04ac: 0x1060015c  beqz        $v1, . + 4 + (0x15C << 2)
label_1d04b0:
    if (ctx->pc == 0x1D04B0u) {
        ctx->pc = 0x1D04B4u;
        goto label_1d04b4;
    }
    ctx->pc = 0x1D04ACu;
    {
        const bool branch_taken_0x1d04ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d04ac) {
            ctx->pc = 0x1D0A20u;
            goto label_1d0a20;
        }
    }
    ctx->pc = 0x1D04B4u;
label_1d04b4:
    // 0x1d04b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d04b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d04b8:
    // 0x1d04b8: 0x8c631b60  lw          $v1, 0x1B60($v1)
    ctx->pc = 0x1d04b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
label_1d04bc:
    // 0x1d04bc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1d04c0:
    if (ctx->pc == 0x1D04C0u) {
        ctx->pc = 0x1D04C4u;
        goto label_1d04c4;
    }
    ctx->pc = 0x1D04BCu;
    {
        const bool branch_taken_0x1d04bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d04bc) {
            ctx->pc = 0x1D04D8u;
            goto label_1d04d8;
        }
    }
    ctx->pc = 0x1D04C4u;
label_1d04c4:
    // 0x1d04c4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1d04c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d04c8:
    // 0x1d04c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d04c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d04cc:
    // 0x1d04cc: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1d04ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_1d04d0:
    // 0x1d04d0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d04d4:
    if (ctx->pc == 0x1D04D4u) {
        ctx->pc = 0x1D04D8u;
        goto label_1d04d8;
    }
    ctx->pc = 0x1D04D0u;
    {
        const bool branch_taken_0x1d04d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d04d0) {
            ctx->pc = 0x1D04E8u;
            goto label_1d04e8;
        }
    }
    ctx->pc = 0x1D04D8u;
label_1d04d8:
    // 0x1d04d8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d04d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d04dc:
    // 0x1d04dc: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1d04dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1d04e0:
    // 0x1d04e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d04e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d04e4:
    // 0x1d04e4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1d04e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1d04e8:
    // 0x1d04e8: 0x1000014d  b           . + 4 + (0x14D << 2)
label_1d04ec:
    if (ctx->pc == 0x1D04ECu) {
        ctx->pc = 0x1D04F0u;
        goto label_1d04f0;
    }
    ctx->pc = 0x1D04E8u;
    {
        const bool branch_taken_0x1d04e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d04e8) {
            ctx->pc = 0x1D0A20u;
            goto label_1d0a20;
        }
    }
    ctx->pc = 0x1D04F0u;
label_1d04f0:
    // 0x1d04f0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d04f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d04f4:
    // 0x1d04f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d04f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d04f8:
    // 0x1d04f8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1d04f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1d04fc:
    // 0x1d04fc: 0x2406008d  addiu       $a2, $zero, 0x8D
    ctx->pc = 0x1d04fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
label_1d0500:
    // 0x1d0500: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d0500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0504:
    // 0x1d0504: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1d0504u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1d0508:
    // 0x1d0508: 0xc0965d0  jal         func_259740
label_1d050c:
    if (ctx->pc == 0x1D050Cu) {
        ctx->pc = 0x1D0510u;
        goto label_1d0510;
    }
    ctx->pc = 0x1D0508u;
    SET_GPR_U32(ctx, 31, 0x1D0510u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1D0508u, 0x1D0510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0510u;
label_1d0510:
    // 0x1d0510: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0514:
    // 0x1d0514: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x1d0514u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
label_1d0518:
    // 0x1d0518: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d051c:
    // 0x1d051c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1d051cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_1d0520:
    // 0x1d0520: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d0520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d0524:
    // 0x1d0524: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1d0524u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1d0528:
    // 0x1d0528: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d0528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d052c:
    // 0x1d052c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1d052cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1d0530:
    // 0x1d0530: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1d0530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_1d0534:
    // 0x1d0534: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1d0534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1d0538:
    // 0x1d0538: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1d0538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1d053c:
    // 0x1d053c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d053cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0540:
    // 0x1d0540: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1d0540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1d0544:
    // 0x1d0544: 0xc096b40  jal         func_25AD00
label_1d0548:
    if (ctx->pc == 0x1D0548u) {
        ctx->pc = 0x1D054Cu;
        goto label_1d054c;
    }
    ctx->pc = 0x1D0544u;
    SET_GPR_U32(ctx, 31, 0x1D054Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1D0544u, 0x1D054Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D054Cu;
label_1d054c:
    // 0x1d054c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d054cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0550:
    // 0x1d0550: 0xc05cd10  jal         func_173440
label_1d0554:
    if (ctx->pc == 0x1D0554u) {
        ctx->pc = 0x1D0558u;
        goto label_1d0558;
    }
    ctx->pc = 0x1D0550u;
    SET_GPR_U32(ctx, 31, 0x1D0558u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1D0550u, 0x1D0558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0558u;
label_1d0558:
    // 0x1d0558: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d0558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d055c:
    // 0x1d055c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d055cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0560:
    // 0x1d0560: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1d0560u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1d0564:
    // 0x1d0564: 0xc057480  jal         func_15D200
label_1d0568:
    if (ctx->pc == 0x1D0568u) {
        ctx->pc = 0x1D056Cu;
        goto label_1d056c;
    }
    ctx->pc = 0x1D0564u;
    SET_GPR_U32(ctx, 31, 0x1D056Cu);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1D0564u, 0x1D056Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D056Cu;
label_1d056c:
    // 0x1d056c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d056cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0570:
    // 0x1d0570: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1d0570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0574:
    // 0x1d0574: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d0574u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0578:
    // 0x1d0578: 0x0  nop
    ctx->pc = 0x1d0578u;
    // NOP
label_1d057c:
    // 0x1d057c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d057cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d0580:
    // 0x1d0580: 0x0  nop
    ctx->pc = 0x1d0580u;
    // NOP
label_1d0584:
    // 0x1d0584: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
label_1d0588:
    if (ctx->pc == 0x1D0588u) {
        ctx->pc = 0x1D058Cu;
        goto label_1d058c;
    }
    ctx->pc = 0x1D0584u;
    {
        const bool branch_taken_0x1d0584 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d0584) {
            ctx->pc = 0x1D05FCu;
            goto label_1d05fc;
        }
    }
    ctx->pc = 0x1D058Cu;
label_1d058c:
    // 0x1d058c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d058cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0590:
    // 0x1d0590: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x1d0590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_1d0594:
    // 0x1d0594: 0xc057a80  jal         func_15EA00
label_1d0598:
    if (ctx->pc == 0x1D0598u) {
        ctx->pc = 0x1D059Cu;
        goto label_1d059c;
    }
    ctx->pc = 0x1D0594u;
    SET_GPR_U32(ctx, 31, 0x1D059Cu);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1D0594u, 0x1D059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D059Cu;
label_1d059c:
    // 0x1d059c: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x1d059cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
label_1d05a0:
    // 0x1d05a0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1d05a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1d05a4:
    // 0x1d05a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d05a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d05a8:
    // 0x1d05a8: 0x0  nop
    ctx->pc = 0x1d05a8u;
    // NOP
label_1d05ac:
    // 0x1d05ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d05acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1d05b0:
    // 0x1d05b0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1d05b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1d05b4:
    // 0x1d05b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d05b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d05b8:
    // 0x1d05b8: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1d05b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d05bc:
    // 0x1d05bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d05bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d05c0:
    // 0x1d05c0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1d05c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d05c4:
    // 0x1d05c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d05c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d05c8:
    // 0x1d05c8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1d05c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1d05cc:
    // 0x1d05cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d05ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d05d0:
    // 0x1d05d0: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1d05d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d05d4:
    // 0x1d05d4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1d05d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d05d8:
    // 0x1d05d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d05d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d05dc:
    // 0x1d05dc: 0x0  nop
    ctx->pc = 0x1d05dcu;
    // NOP
label_1d05e0:
    // 0x1d05e0: 0x45010026  bc1t        . + 4 + (0x26 << 2)
label_1d05e4:
    if (ctx->pc == 0x1D05E4u) {
        ctx->pc = 0x1D05E8u;
        goto label_1d05e8;
    }
    ctx->pc = 0x1D05E0u;
    {
        const bool branch_taken_0x1d05e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d05e0) {
            ctx->pc = 0x1D067Cu;
            goto label_1d067c;
        }
    }
    ctx->pc = 0x1D05E8u;
label_1d05e8:
    // 0x1d05e8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1d05e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d05ec:
    // 0x1d05ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d05ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d05f0:
    // 0x1d05f0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1d05f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1d05f4:
    // 0x1d05f4: 0x10000021  b           . + 4 + (0x21 << 2)
label_1d05f8:
    if (ctx->pc == 0x1D05F8u) {
        ctx->pc = 0x1D05FCu;
        goto label_1d05fc;
    }
    ctx->pc = 0x1D05F4u;
    {
        const bool branch_taken_0x1d05f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d05f4) {
            ctx->pc = 0x1D067Cu;
            goto label_1d067c;
        }
    }
    ctx->pc = 0x1D05FCu;
label_1d05fc:
    // 0x1d05fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d05fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0600:
    // 0x1d0600: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0604:
    // 0x1d0604: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1d0604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1d0608:
    // 0x1d0608: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1d0608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_1d060c:
    // 0x1d060c: 0xc05cf7c  jal         func_173DF0
label_1d0610:
    if (ctx->pc == 0x1D0610u) {
        ctx->pc = 0x1D0614u;
        goto label_1d0614;
    }
    ctx->pc = 0x1D060Cu;
    SET_GPR_U32(ctx, 31, 0x1D0614u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1D060Cu, 0x1D0614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0614u;
label_1d0614:
    // 0x1d0614: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1d0614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1d0618:
    // 0x1d0618: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d061c:
    // 0x1d061c: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1d061cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0620:
    // 0x1d0620: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0624:
    // 0x1d0624: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1d0624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0628:
    // 0x1d0628: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d0628u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d062c:
    // 0x1d062c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1d062cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1d0630:
    // 0x1d0630: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0634:
    // 0x1d0634: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1d0634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0638:
    // 0x1d0638: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d063c:
    // 0x1d063c: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x1d063cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0640:
    // 0x1d0640: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d0640u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1d0644:
    // 0x1d0644: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1d0644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_1d0648:
    // 0x1d0648: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d064c:
    // 0x1d064c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1d064cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0650:
    // 0x1d0650: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1d0650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0654:
    // 0x1d0654: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d0654u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d0658:
    // 0x1d0658: 0x0  nop
    ctx->pc = 0x1d0658u;
    // NOP
label_1d065c:
    // 0x1d065c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1d0660:
    if (ctx->pc == 0x1D0660u) {
        ctx->pc = 0x1D0664u;
        goto label_1d0664;
    }
    ctx->pc = 0x1D065Cu;
    {
        const bool branch_taken_0x1d065c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d065c) {
            ctx->pc = 0x1D067Cu;
            goto label_1d067c;
        }
    }
    ctx->pc = 0x1D0664u;
label_1d0664:
    // 0x1d0664: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1d0664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0668:
    // 0x1d0668: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d066c:
    // 0x1d066c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1d066cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1d0670:
    // 0x1d0670: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d0670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0674:
    // 0x1d0674: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0678:
    // 0x1d0678: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x1d0678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
label_1d067c:
    // 0x1d067c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d067cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0680:
    // 0x1d0680: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1d0680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0684:
    // 0x1d0684: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0688:
    // 0x1d0688: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x1d0688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d068c:
    // 0x1d068c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d068cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1d0690:
    // 0x1d0690: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1d0690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_1d0694:
    // 0x1d0694: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1d0694u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1d0698:
    // 0x1d0698: 0xc097530  jal         func_25D4C0
label_1d069c:
    if (ctx->pc == 0x1D069Cu) {
        ctx->pc = 0x1D06A0u;
        goto label_1d06a0;
    }
    ctx->pc = 0x1D0698u;
    SET_GPR_U32(ctx, 31, 0x1D06A0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1D0698u, 0x1D06A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D06A0u;
label_1d06a0:
    // 0x1d06a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d06a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d06a4:
    // 0x1d06a4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1d06a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1d06a8:
    // 0x1d06a8: 0xc096b40  jal         func_25AD00
label_1d06ac:
    if (ctx->pc == 0x1D06ACu) {
        ctx->pc = 0x1D06B0u;
        goto label_1d06b0;
    }
    ctx->pc = 0x1D06A8u;
    SET_GPR_U32(ctx, 31, 0x1D06B0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1D06A8u, 0x1D06B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D06B0u;
label_1d06b0:
    // 0x1d06b0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d06b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d06b4:
    // 0x1d06b4: 0xc05cd10  jal         func_173440
label_1d06b8:
    if (ctx->pc == 0x1D06B8u) {
        ctx->pc = 0x1D06BCu;
        goto label_1d06bc;
    }
    ctx->pc = 0x1D06B4u;
    SET_GPR_U32(ctx, 31, 0x1D06BCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1D06B4u, 0x1D06BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D06BCu;
label_1d06bc:
    // 0x1d06bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d06bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d06c0:
    // 0x1d06c0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d06c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d06c4:
    // 0x1d06c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1d06c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1d06c8:
    // 0x1d06c8: 0xc0573d8  jal         func_15CF60
label_1d06cc:
    if (ctx->pc == 0x1D06CCu) {
        ctx->pc = 0x1D06D0u;
        goto label_1d06d0;
    }
    ctx->pc = 0x1D06C8u;
    SET_GPR_U32(ctx, 31, 0x1D06D0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1D06C8u, 0x1D06D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D06D0u;
label_1d06d0:
    // 0x1d06d0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1d06d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1d06d4:
    // 0x1d06d4: 0xc097530  jal         func_25D4C0
label_1d06d8:
    if (ctx->pc == 0x1D06D8u) {
        ctx->pc = 0x1D06DCu;
        goto label_1d06dc;
    }
    ctx->pc = 0x1D06D4u;
    SET_GPR_U32(ctx, 31, 0x1D06DCu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1D06D4u, 0x1D06DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D06DCu;
label_1d06dc:
    // 0x1d06dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d06dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d06e0:
    // 0x1d06e0: 0x8c631b60  lw          $v1, 0x1B60($v1)
    ctx->pc = 0x1d06e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
label_1d06e4:
    // 0x1d06e4: 0x106000ce  beqz        $v1, . + 4 + (0xCE << 2)
label_1d06e8:
    if (ctx->pc == 0x1D06E8u) {
        ctx->pc = 0x1D06ECu;
        goto label_1d06ec;
    }
    ctx->pc = 0x1D06E4u;
    {
        const bool branch_taken_0x1d06e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d06e4) {
            ctx->pc = 0x1D0A20u;
            goto label_1d0a20;
        }
    }
    ctx->pc = 0x1D06ECu;
label_1d06ec:
    // 0x1d06ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d06ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d06f0:
    // 0x1d06f0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1d06f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1d06f4:
    // 0x1d06f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d06f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d06f8:
    // 0x1d06f8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1d06f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1d06fc:
    // 0x1d06fc: 0x100000c8  b           . + 4 + (0xC8 << 2)
label_1d0700:
    if (ctx->pc == 0x1D0700u) {
        ctx->pc = 0x1D0704u;
        goto label_1d0704;
    }
    ctx->pc = 0x1D06FCu;
    {
        const bool branch_taken_0x1d06fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d06fc) {
            ctx->pc = 0x1D0A20u;
            goto label_1d0a20;
        }
    }
    ctx->pc = 0x1D0704u;
label_1d0704:
    // 0x1d0704: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d0704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0708:
    // 0x1d0708: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d070c:
    // 0x1d070c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1d070cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1d0710:
    // 0x1d0710: 0x2406008e  addiu       $a2, $zero, 0x8E
    ctx->pc = 0x1d0710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
label_1d0714:
    // 0x1d0714: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d0714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0718:
    // 0x1d0718: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1d0718u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1d071c:
    // 0x1d071c: 0xc0965d0  jal         func_259740
label_1d0720:
    if (ctx->pc == 0x1D0720u) {
        ctx->pc = 0x1D0724u;
        goto label_1d0724;
    }
    ctx->pc = 0x1D071Cu;
    SET_GPR_U32(ctx, 31, 0x1D0724u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1D071Cu, 0x1D0724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0724u;
label_1d0724:
    // 0x1d0724: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0728:
    // 0x1d0728: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1d0728u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_1d072c:
    // 0x1d072c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d072cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d0730:
    // 0x1d0730: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1d0730u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1d0734:
    // 0x1d0734: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0738:
    // 0x1d0738: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1d0738u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
label_1d073c:
    // 0x1d073c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d073cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1d0740:
    // 0x1d0740: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1d0740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_1d0744:
    // 0x1d0744: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d0748:
    if (ctx->pc == 0x1D0748u) {
        ctx->pc = 0x1D074Cu;
        goto label_1d074c;
    }
    ctx->pc = 0x1D0744u;
    {
        const bool branch_taken_0x1d0744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0744) {
            ctx->pc = 0x1D0754u;
            goto label_1d0754;
        }
    }
    ctx->pc = 0x1D074Cu;
label_1d074c:
    // 0x1d074c: 0xc0d7c50  jal         func_35F140
label_1d0750:
    if (ctx->pc == 0x1D0750u) {
        ctx->pc = 0x1D0754u;
        goto label_1d0754;
    }
    ctx->pc = 0x1D074Cu;
    SET_GPR_U32(ctx, 31, 0x1D0754u);
    ctx->pc = 0x35F140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F140u, 0x1D074Cu, 0x1D0754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0754u;
label_1d0754:
    // 0x1d0754: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d0754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0758:
    // 0x1d0758: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1d0758u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1d075c:
    // 0x1d075c: 0xc096b40  jal         func_25AD00
label_1d0760:
    if (ctx->pc == 0x1D0760u) {
        ctx->pc = 0x1D0764u;
        goto label_1d0764;
    }
    ctx->pc = 0x1D075Cu;
    SET_GPR_U32(ctx, 31, 0x1D0764u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1D075Cu, 0x1D0764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0764u;
label_1d0764:
    // 0x1d0764: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d0764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0768:
    // 0x1d0768: 0xc05cd10  jal         func_173440
label_1d076c:
    if (ctx->pc == 0x1D076Cu) {
        ctx->pc = 0x1D0770u;
        goto label_1d0770;
    }
    ctx->pc = 0x1D0768u;
    SET_GPR_U32(ctx, 31, 0x1D0770u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1D0768u, 0x1D0770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0770u;
label_1d0770:
    // 0x1d0770: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d0770u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d0774:
    // 0x1d0774: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d0774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0778:
    // 0x1d0778: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1d0778u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1d077c:
    // 0x1d077c: 0xc0573d8  jal         func_15CF60
label_1d0780:
    if (ctx->pc == 0x1D0780u) {
        ctx->pc = 0x1D0784u;
        goto label_1d0784;
    }
    ctx->pc = 0x1D077Cu;
    SET_GPR_U32(ctx, 31, 0x1D0784u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1D077Cu, 0x1D0784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0784u;
label_1d0784:
    // 0x1d0784: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1d0784u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1d0788:
    // 0x1d0788: 0xc097530  jal         func_25D4C0
label_1d078c:
    if (ctx->pc == 0x1D078Cu) {
        ctx->pc = 0x1D0790u;
        goto label_1d0790;
    }
    ctx->pc = 0x1D0788u;
    SET_GPR_U32(ctx, 31, 0x1D0790u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1D0788u, 0x1D0790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0790u;
label_1d0790:
    // 0x1d0790: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0794:
    // 0x1d0794: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x1d0794u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
label_1d0798:
    // 0x1d0798: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d0798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1d079c:
    // 0x1d079c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1d079cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_1d07a0:
    // 0x1d07a0: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
label_1d07a4:
    if (ctx->pc == 0x1D07A4u) {
        ctx->pc = 0x1D07A8u;
        goto label_1d07a8;
    }
    ctx->pc = 0x1D07A0u;
    {
        const bool branch_taken_0x1d07a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d07a0) {
            ctx->pc = 0x1D0910u;
            goto label_1d0910;
        }
    }
    ctx->pc = 0x1D07A8u;
label_1d07a8:
    // 0x1d07a8: 0xc057acc  jal         func_15EB30
label_1d07ac:
    if (ctx->pc == 0x1D07ACu) {
        ctx->pc = 0x1D07B0u;
        goto label_1d07b0;
    }
    ctx->pc = 0x1D07A8u;
    SET_GPR_U32(ctx, 31, 0x1D07B0u);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x1D07A8u, 0x1D07B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D07B0u;
label_1d07b0:
    // 0x1d07b0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1d07b4:
    if (ctx->pc == 0x1D07B4u) {
        ctx->pc = 0x1D07B8u;
        goto label_1d07b8;
    }
    ctx->pc = 0x1D07B0u;
    {
        const bool branch_taken_0x1d07b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d07b0) {
            ctx->pc = 0x1D07E0u;
            goto label_1d07e0;
        }
    }
    ctx->pc = 0x1D07B8u;
label_1d07b8:
    // 0x1d07b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d07b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d07bc:
    // 0x1d07bc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1d07bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1d07c0:
    // 0x1d07c0: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1d07c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_1d07c4:
    // 0x1d07c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d07c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1d07c8:
    // 0x1d07c8: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
label_1d07cc:
    if (ctx->pc == 0x1D07CCu) {
        ctx->pc = 0x1D07D0u;
        goto label_1d07d0;
    }
    ctx->pc = 0x1D07C8u;
    {
        const bool branch_taken_0x1d07c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d07c8) {
            ctx->pc = 0x1D08FCu;
            goto label_1d08fc;
        }
    }
    ctx->pc = 0x1D07D0u;
label_1d07d0:
    // 0x1d07d0: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1d07d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1d07d4:
    // 0x1d07d4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1d07d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1d07d8:
    // 0x1d07d8: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
label_1d07dc:
    if (ctx->pc == 0x1D07DCu) {
        ctx->pc = 0x1D07E0u;
        goto label_1d07e0;
    }
    ctx->pc = 0x1D07D8u;
    {
        const bool branch_taken_0x1d07d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d07d8) {
            ctx->pc = 0x1D08FCu;
            goto label_1d08fc;
        }
    }
    ctx->pc = 0x1D07E0u;
label_1d07e0:
    // 0x1d07e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d07e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d07e4:
    // 0x1d07e4: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x1d07e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_1d07e8:
    // 0x1d07e8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1d07e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d07ec:
    // 0x1d07ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d07ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d07f0:
    // 0x1d07f0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1d07f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1d07f4:
    // 0x1d07f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d07f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d07f8:
    // 0x1d07f8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1d07f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1d07fc:
    // 0x1d07fc: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1d07fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_1d0800:
    // 0x1d0800: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d0800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1d0804:
    // 0x1d0804: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_1d0808:
    if (ctx->pc == 0x1D0808u) {
        ctx->pc = 0x1D080Cu;
        goto label_1d080c;
    }
    ctx->pc = 0x1D0804u;
    {
        const bool branch_taken_0x1d0804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0804) {
            ctx->pc = 0x1D0890u;
            goto label_1d0890;
        }
    }
    ctx->pc = 0x1D080Cu;
label_1d080c:
    // 0x1d080c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d080cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0810:
    // 0x1d0810: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0814:
    // 0x1d0814: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1d0814u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1d0818:
    // 0x1d0818: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d0818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d081c:
    // 0x1d081c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d081cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0820:
    // 0x1d0820: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1d0820u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1d0824:
    // 0x1d0824: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0828:
    // 0x1d0828: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1d0828u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1d082c:
    // 0x1d082c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d082cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0830:
    // 0x1d0830: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1d0830u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1d0834:
    // 0x1d0834: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0838:
    // 0x1d0838: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1d0838u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1d083c:
    // 0x1d083c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d083cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0840:
    // 0x1d0840: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0844:
    // 0x1d0844: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1d0844u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_1d0848:
    // 0x1d0848: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d084c:
    // 0x1d084c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1d084cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1d0850:
    // 0x1d0850: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0854:
    // 0x1d0854: 0x9063156d  lbu         $v1, 0x156D($v1)
    ctx->pc = 0x1d0854u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5485)));
label_1d0858:
    // 0x1d0858: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1d0858u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1d085c:
    // 0x1d085c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d085cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d0860:
    // 0x1d0860: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_1d0864:
    if (ctx->pc == 0x1D0864u) {
        ctx->pc = 0x1D0868u;
        goto label_1d0868;
    }
    ctx->pc = 0x1D0860u;
    {
        const bool branch_taken_0x1d0860 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d0860) {
            ctx->pc = 0x1D0874u;
            goto label_1d0874;
        }
    }
    ctx->pc = 0x1D0868u;
label_1d0868:
    // 0x1d0868: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d0868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d086c:
    // 0x1d086c: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x1d086cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0870:
    // 0x1d0870: 0xa203156d  sb          $v1, 0x156D($s0)
    ctx->pc = 0x1d0870u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5485), (uint8_t)GPR_U32(ctx, 3));
label_1d0874:
    // 0x1d0874: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1d0874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d0878:
    // 0x1d0878: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d087c:
    // 0x1d087c: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1d087cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
label_1d0880:
    // 0x1d0880: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d0880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0884:
    // 0x1d0884: 0xa480127c  sh          $zero, 0x127C($a0)
    ctx->pc = 0x1d0884u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 0));
label_1d0888:
    // 0x1d0888: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d088c:
    // 0x1d088c: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1d088cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
label_1d0890:
    // 0x1d0890: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d0890u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0894:
    // 0x1d0894: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0898:
    // 0x1d0898: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x1d0898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
label_1d089c:
    // 0x1d089c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d089cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d08a0:
    // 0x1d08a0: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1d08a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d08a4:
    // 0x1d08a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d08a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d08a8:
    // 0x1d08a8: 0xe4601568  swc1        $f0, 0x1568($v1)
    ctx->pc = 0x1d08a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5480), bits); }
label_1d08ac:
    // 0x1d08ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d08acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d08b0:
    // 0x1d08b0: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1d08b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d08b4:
    // 0x1d08b4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d08b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d08b8:
    // 0x1d08b8: 0xe4801570  swc1        $f0, 0x1570($a0)
    ctx->pc = 0x1d08b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5488), bits); }
label_1d08bc:
    // 0x1d08bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d08bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d08c0:
    // 0x1d08c0: 0x8c631b6c  lw          $v1, 0x1B6C($v1)
    ctx->pc = 0x1d08c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
label_1d08c4:
    // 0x1d08c4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1d08c8:
    if (ctx->pc == 0x1D08C8u) {
        ctx->pc = 0x1D08CCu;
        goto label_1d08cc;
    }
    ctx->pc = 0x1D08C4u;
    {
        const bool branch_taken_0x1d08c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d08c4) {
            ctx->pc = 0x1D08D4u;
            goto label_1d08d4;
        }
    }
    ctx->pc = 0x1D08CCu;
label_1d08cc:
    // 0x1d08cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d08ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d08d0:
    // 0x1d08d0: 0xa4601574  sh          $zero, 0x1574($v1)
    ctx->pc = 0x1d08d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5492), (uint16_t)GPR_U32(ctx, 0));
label_1d08d4:
    // 0x1d08d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d08d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d08d8:
    // 0x1d08d8: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1d08d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
label_1d08dc:
    // 0x1d08dc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1d08e0:
    if (ctx->pc == 0x1D08E0u) {
        ctx->pc = 0x1D08E4u;
        goto label_1d08e4;
    }
    ctx->pc = 0x1D08DCu;
    {
        const bool branch_taken_0x1d08dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d08dc) {
            ctx->pc = 0x1D08F4u;
            goto label_1d08f4;
        }
    }
    ctx->pc = 0x1D08E4u;
label_1d08e4:
    // 0x1d08e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d08e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d08e8:
    // 0x1d08e8: 0xc0571d0  jal         func_15C740
label_1d08ec:
    if (ctx->pc == 0x1D08ECu) {
        ctx->pc = 0x1D08F0u;
        goto label_1d08f0;
    }
    ctx->pc = 0x1D08E8u;
    SET_GPR_U32(ctx, 31, 0x1D08F0u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1D08E8u, 0x1D08F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D08F0u;
label_1d08f0:
    // 0x1d08f0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1d08f0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1d08f4:
    // 0x1d08f4: 0x1000004a  b           . + 4 + (0x4A << 2)
label_1d08f8:
    if (ctx->pc == 0x1D08F8u) {
        ctx->pc = 0x1D08FCu;
        goto label_1d08fc;
    }
    ctx->pc = 0x1D08F4u;
    {
        const bool branch_taken_0x1d08f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d08f4) {
            ctx->pc = 0x1D0A20u;
            goto label_1d0a20;
        }
    }
    ctx->pc = 0x1D08FCu;
label_1d08fc:
    // 0x1d08fc: 0xc058478  jal         func_1611E0
label_1d0900:
    if (ctx->pc == 0x1D0900u) {
        ctx->pc = 0x1D0904u;
        goto label_1d0904;
    }
    ctx->pc = 0x1D08FCu;
    SET_GPR_U32(ctx, 31, 0x1D0904u);
    ctx->pc = 0x1611E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1611E0u, 0x1D08FCu, 0x1D0904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0904u;
label_1d0904:
    // 0x1d0904: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1d0904u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1d0908:
    // 0x1d0908: 0x14a00045  bnez        $a1, . + 4 + (0x45 << 2)
label_1d090c:
    if (ctx->pc == 0x1D090Cu) {
        ctx->pc = 0x1D0910u;
        goto label_1d0910;
    }
    ctx->pc = 0x1D0908u;
    {
        const bool branch_taken_0x1d0908 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0908) {
            ctx->pc = 0x1D0A20u;
            goto label_1d0a20;
        }
    }
    ctx->pc = 0x1D0910u;
label_1d0910:
    // 0x1d0910: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0914:
    // 0x1d0914: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1d0914u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1d0918:
    // 0x1d0918: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
label_1d091c:
    if (ctx->pc == 0x1D091Cu) {
        ctx->pc = 0x1D0920u;
        goto label_1d0920;
    }
    ctx->pc = 0x1D0918u;
    {
        const bool branch_taken_0x1d0918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0918) {
            ctx->pc = 0x1D0A20u;
            goto label_1d0a20;
        }
    }
    ctx->pc = 0x1D0920u;
label_1d0920:
    // 0x1d0920: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0924:
    // 0x1d0924: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1d0924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1d0928:
    // 0x1d0928: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1d0928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_1d092c:
    // 0x1d092c: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x1d092cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1d0930:
    // 0x1d0930: 0x10a0002f  beqz        $a1, . + 4 + (0x2F << 2)
label_1d0934:
    if (ctx->pc == 0x1D0934u) {
        ctx->pc = 0x1D0938u;
        goto label_1d0938;
    }
    ctx->pc = 0x1D0930u;
    {
        const bool branch_taken_0x1d0930 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0930) {
            ctx->pc = 0x1D09F0u;
            goto label_1d09f0;
        }
    }
    ctx->pc = 0x1D0938u;
label_1d0938:
    // 0x1d0938: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d0938u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d093c:
    // 0x1d093c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1d093cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0940:
    // 0x1d0940: 0xe4c01564  swc1        $f0, 0x1564($a2)
    ctx->pc = 0x1d0940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 5476), bits); }
label_1d0944:
    // 0x1d0944: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x1d0944u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0948:
    // 0x1d0948: 0xc4e000d4  lwc1        $f0, 0xD4($a3)
    ctx->pc = 0x1d0948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d094c:
    // 0x1d094c: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x1d094cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0950:
    // 0x1d0950: 0xe5001568  swc1        $f0, 0x1568($t0)
    ctx->pc = 0x1d0950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 5480), bits); }
label_1d0954:
    // 0x1d0954: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0958:
    // 0x1d0958: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1d0958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d095c:
    // 0x1d095c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d095cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0960:
    // 0x1d0960: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1d0960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
label_1d0964:
    // 0x1d0964: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0968:
    // 0x1d0968: 0xa4601574  sh          $zero, 0x1574($v1)
    ctx->pc = 0x1d0968u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5492), (uint16_t)GPR_U32(ctx, 0));
label_1d096c:
    // 0x1d096c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d096cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0970:
    // 0x1d0970: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1d0970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
label_1d0974:
    // 0x1d0974: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1d0978:
    if (ctx->pc == 0x1D0978u) {
        ctx->pc = 0x1D097Cu;
        goto label_1d097c;
    }
    ctx->pc = 0x1D0974u;
    {
        const bool branch_taken_0x1d0974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0974) {
            ctx->pc = 0x1D0988u;
            goto label_1d0988;
        }
    }
    ctx->pc = 0x1D097Cu;
label_1d097c:
    // 0x1d097c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d097cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0980:
    // 0x1d0980: 0xc0571d0  jal         func_15C740
label_1d0984:
    if (ctx->pc == 0x1D0984u) {
        ctx->pc = 0x1D0988u;
        goto label_1d0988;
    }
    ctx->pc = 0x1D0980u;
    SET_GPR_U32(ctx, 31, 0x1D0988u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1D0980u, 0x1D0988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0988u;
label_1d0988:
    // 0x1d0988: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d0988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d098c:
    // 0x1d098c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d098cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0990:
    // 0x1d0990: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1d0990u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1d0994:
    // 0x1d0994: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d0994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d0998:
    // 0x1d0998: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d099c:
    // 0x1d099c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1d099cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1d09a0:
    // 0x1d09a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d09a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d09a4:
    // 0x1d09a4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1d09a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1d09a8:
    // 0x1d09a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d09a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d09ac:
    // 0x1d09ac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1d09acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1d09b0:
    // 0x1d09b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d09b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d09b4:
    // 0x1d09b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1d09b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1d09b8:
    // 0x1d09b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d09b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d09bc:
    // 0x1d09bc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1d09bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d09c0:
    // 0x1d09c0: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1d09c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_1d09c4:
    // 0x1d09c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d09c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d09c8:
    // 0x1d09c8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1d09c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1d09cc:
    // 0x1d09cc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1d09ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d09d0:
    // 0x1d09d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d09d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d09d4:
    // 0x1d09d4: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1d09d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
label_1d09d8:
    // 0x1d09d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d09d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d09dc:
    // 0x1d09dc: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1d09dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
label_1d09e0:
    // 0x1d09e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d09e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d09e4:
    // 0x1d09e4: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1d09e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
label_1d09e8:
    // 0x1d09e8: 0x1000000d  b           . + 4 + (0xD << 2)
label_1d09ec:
    if (ctx->pc == 0x1D09ECu) {
        ctx->pc = 0x1D09F0u;
        goto label_1d09f0;
    }
    ctx->pc = 0x1D09E8u;
    {
        const bool branch_taken_0x1d09e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d09e8) {
            ctx->pc = 0x1D0A20u;
            goto label_1d0a20;
        }
    }
    ctx->pc = 0x1D09F0u;
label_1d09f0:
    // 0x1d09f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d09f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d09f4:
    // 0x1d09f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d09f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d09f8:
    // 0x1d09f8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1d09f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1d09fc:
    // 0x1d09fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d09fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0a00:
    // 0x1d0a00: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1d0a00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_1d0a04:
    // 0x1d0a04: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0a08:
    // 0x1d0a08: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1d0a08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1d0a0c:
    // 0x1d0a0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0a10:
    // 0x1d0a10: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1d0a10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1d0a14:
    // 0x1d0a14: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1d0a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1d0a18:
    // 0x1d0a18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0a1c:
    // 0x1d0a1c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1d0a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1d0a20:
    // 0x1d0a20: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1d0a20u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d0a24:
    // 0x1d0a24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d0a24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0a28:
    // 0x1d0a28: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1d0a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1d0a2c:
    // 0x1d0a2c: 0x3e00008  jr          $ra
label_1d0a30:
    if (ctx->pc == 0x1D0A30u) {
        ctx->pc = 0x1D0A34u;
        goto label_fallthrough_0x1d0a2c;
    }
    ctx->pc = 0x1D0A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d0a2c:
    ctx->pc = 0x1D0A34u;
}
