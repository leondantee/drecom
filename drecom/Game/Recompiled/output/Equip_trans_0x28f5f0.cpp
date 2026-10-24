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

// Function: Equip_trans
// Address: 0x28f5f0 - 0x290998
void Equip_trans_0x28f5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Equip_trans_0x28f5f0");
#endif

    switch (ctx->pc) {
        case 0x28f5f0u: goto label_28f5f0;
        case 0x28f5f4u: goto label_28f5f4;
        case 0x28f5f8u: goto label_28f5f8;
        case 0x28f5fcu: goto label_28f5fc;
        case 0x28f600u: goto label_28f600;
        case 0x28f604u: goto label_28f604;
        case 0x28f608u: goto label_28f608;
        case 0x28f60cu: goto label_28f60c;
        case 0x28f610u: goto label_28f610;
        case 0x28f614u: goto label_28f614;
        case 0x28f618u: goto label_28f618;
        case 0x28f61cu: goto label_28f61c;
        case 0x28f620u: goto label_28f620;
        case 0x28f624u: goto label_28f624;
        case 0x28f628u: goto label_28f628;
        case 0x28f62cu: goto label_28f62c;
        case 0x28f630u: goto label_28f630;
        case 0x28f634u: goto label_28f634;
        case 0x28f638u: goto label_28f638;
        case 0x28f63cu: goto label_28f63c;
        case 0x28f640u: goto label_28f640;
        case 0x28f644u: goto label_28f644;
        case 0x28f648u: goto label_28f648;
        case 0x28f64cu: goto label_28f64c;
        case 0x28f650u: goto label_28f650;
        case 0x28f654u: goto label_28f654;
        case 0x28f658u: goto label_28f658;
        case 0x28f65cu: goto label_28f65c;
        case 0x28f660u: goto label_28f660;
        case 0x28f664u: goto label_28f664;
        case 0x28f668u: goto label_28f668;
        case 0x28f66cu: goto label_28f66c;
        case 0x28f670u: goto label_28f670;
        case 0x28f674u: goto label_28f674;
        case 0x28f678u: goto label_28f678;
        case 0x28f67cu: goto label_28f67c;
        case 0x28f680u: goto label_28f680;
        case 0x28f684u: goto label_28f684;
        case 0x28f688u: goto label_28f688;
        case 0x28f68cu: goto label_28f68c;
        case 0x28f690u: goto label_28f690;
        case 0x28f694u: goto label_28f694;
        case 0x28f698u: goto label_28f698;
        case 0x28f69cu: goto label_28f69c;
        case 0x28f6a0u: goto label_28f6a0;
        case 0x28f6a4u: goto label_28f6a4;
        case 0x28f6a8u: goto label_28f6a8;
        case 0x28f6acu: goto label_28f6ac;
        case 0x28f6b0u: goto label_28f6b0;
        case 0x28f6b4u: goto label_28f6b4;
        case 0x28f6b8u: goto label_28f6b8;
        case 0x28f6bcu: goto label_28f6bc;
        case 0x28f6c0u: goto label_28f6c0;
        case 0x28f6c4u: goto label_28f6c4;
        case 0x28f6c8u: goto label_28f6c8;
        case 0x28f6ccu: goto label_28f6cc;
        case 0x28f6d0u: goto label_28f6d0;
        case 0x28f6d4u: goto label_28f6d4;
        case 0x28f6d8u: goto label_28f6d8;
        case 0x28f6dcu: goto label_28f6dc;
        case 0x28f6e0u: goto label_28f6e0;
        case 0x28f6e4u: goto label_28f6e4;
        case 0x28f6e8u: goto label_28f6e8;
        case 0x28f6ecu: goto label_28f6ec;
        case 0x28f6f0u: goto label_28f6f0;
        case 0x28f6f4u: goto label_28f6f4;
        case 0x28f6f8u: goto label_28f6f8;
        case 0x28f6fcu: goto label_28f6fc;
        case 0x28f700u: goto label_28f700;
        case 0x28f704u: goto label_28f704;
        case 0x28f708u: goto label_28f708;
        case 0x28f70cu: goto label_28f70c;
        case 0x28f710u: goto label_28f710;
        case 0x28f714u: goto label_28f714;
        case 0x28f718u: goto label_28f718;
        case 0x28f71cu: goto label_28f71c;
        case 0x28f720u: goto label_28f720;
        case 0x28f724u: goto label_28f724;
        case 0x28f728u: goto label_28f728;
        case 0x28f72cu: goto label_28f72c;
        case 0x28f730u: goto label_28f730;
        case 0x28f734u: goto label_28f734;
        case 0x28f738u: goto label_28f738;
        case 0x28f73cu: goto label_28f73c;
        case 0x28f740u: goto label_28f740;
        case 0x28f744u: goto label_28f744;
        case 0x28f748u: goto label_28f748;
        case 0x28f74cu: goto label_28f74c;
        case 0x28f750u: goto label_28f750;
        case 0x28f754u: goto label_28f754;
        case 0x28f758u: goto label_28f758;
        case 0x28f75cu: goto label_28f75c;
        case 0x28f760u: goto label_28f760;
        case 0x28f764u: goto label_28f764;
        case 0x28f768u: goto label_28f768;
        case 0x28f76cu: goto label_28f76c;
        case 0x28f770u: goto label_28f770;
        case 0x28f774u: goto label_28f774;
        case 0x28f778u: goto label_28f778;
        case 0x28f77cu: goto label_28f77c;
        case 0x28f780u: goto label_28f780;
        case 0x28f784u: goto label_28f784;
        case 0x28f788u: goto label_28f788;
        case 0x28f78cu: goto label_28f78c;
        case 0x28f790u: goto label_28f790;
        case 0x28f794u: goto label_28f794;
        case 0x28f798u: goto label_28f798;
        case 0x28f79cu: goto label_28f79c;
        case 0x28f7a0u: goto label_28f7a0;
        case 0x28f7a4u: goto label_28f7a4;
        case 0x28f7a8u: goto label_28f7a8;
        case 0x28f7acu: goto label_28f7ac;
        case 0x28f7b0u: goto label_28f7b0;
        case 0x28f7b4u: goto label_28f7b4;
        case 0x28f7b8u: goto label_28f7b8;
        case 0x28f7bcu: goto label_28f7bc;
        case 0x28f7c0u: goto label_28f7c0;
        case 0x28f7c4u: goto label_28f7c4;
        case 0x28f7c8u: goto label_28f7c8;
        case 0x28f7ccu: goto label_28f7cc;
        case 0x28f7d0u: goto label_28f7d0;
        case 0x28f7d4u: goto label_28f7d4;
        case 0x28f7d8u: goto label_28f7d8;
        case 0x28f7dcu: goto label_28f7dc;
        case 0x28f7e0u: goto label_28f7e0;
        case 0x28f7e4u: goto label_28f7e4;
        case 0x28f7e8u: goto label_28f7e8;
        case 0x28f7ecu: goto label_28f7ec;
        case 0x28f7f0u: goto label_28f7f0;
        case 0x28f7f4u: goto label_28f7f4;
        case 0x28f7f8u: goto label_28f7f8;
        case 0x28f7fcu: goto label_28f7fc;
        case 0x28f800u: goto label_28f800;
        case 0x28f804u: goto label_28f804;
        case 0x28f808u: goto label_28f808;
        case 0x28f80cu: goto label_28f80c;
        case 0x28f810u: goto label_28f810;
        case 0x28f814u: goto label_28f814;
        case 0x28f818u: goto label_28f818;
        case 0x28f81cu: goto label_28f81c;
        case 0x28f820u: goto label_28f820;
        case 0x28f824u: goto label_28f824;
        case 0x28f828u: goto label_28f828;
        case 0x28f82cu: goto label_28f82c;
        case 0x28f830u: goto label_28f830;
        case 0x28f834u: goto label_28f834;
        case 0x28f838u: goto label_28f838;
        case 0x28f83cu: goto label_28f83c;
        case 0x28f840u: goto label_28f840;
        case 0x28f844u: goto label_28f844;
        case 0x28f848u: goto label_28f848;
        case 0x28f84cu: goto label_28f84c;
        case 0x28f850u: goto label_28f850;
        case 0x28f854u: goto label_28f854;
        case 0x28f858u: goto label_28f858;
        case 0x28f85cu: goto label_28f85c;
        case 0x28f860u: goto label_28f860;
        case 0x28f864u: goto label_28f864;
        case 0x28f868u: goto label_28f868;
        case 0x28f86cu: goto label_28f86c;
        case 0x28f870u: goto label_28f870;
        case 0x28f874u: goto label_28f874;
        case 0x28f878u: goto label_28f878;
        case 0x28f87cu: goto label_28f87c;
        case 0x28f880u: goto label_28f880;
        case 0x28f884u: goto label_28f884;
        case 0x28f888u: goto label_28f888;
        case 0x28f88cu: goto label_28f88c;
        case 0x28f890u: goto label_28f890;
        case 0x28f894u: goto label_28f894;
        case 0x28f898u: goto label_28f898;
        case 0x28f89cu: goto label_28f89c;
        case 0x28f8a0u: goto label_28f8a0;
        case 0x28f8a4u: goto label_28f8a4;
        case 0x28f8a8u: goto label_28f8a8;
        case 0x28f8acu: goto label_28f8ac;
        case 0x28f8b0u: goto label_28f8b0;
        case 0x28f8b4u: goto label_28f8b4;
        case 0x28f8b8u: goto label_28f8b8;
        case 0x28f8bcu: goto label_28f8bc;
        case 0x28f8c0u: goto label_28f8c0;
        case 0x28f8c4u: goto label_28f8c4;
        case 0x28f8c8u: goto label_28f8c8;
        case 0x28f8ccu: goto label_28f8cc;
        case 0x28f8d0u: goto label_28f8d0;
        case 0x28f8d4u: goto label_28f8d4;
        case 0x28f8d8u: goto label_28f8d8;
        case 0x28f8dcu: goto label_28f8dc;
        case 0x28f8e0u: goto label_28f8e0;
        case 0x28f8e4u: goto label_28f8e4;
        case 0x28f8e8u: goto label_28f8e8;
        case 0x28f8ecu: goto label_28f8ec;
        case 0x28f8f0u: goto label_28f8f0;
        case 0x28f8f4u: goto label_28f8f4;
        case 0x28f8f8u: goto label_28f8f8;
        case 0x28f8fcu: goto label_28f8fc;
        case 0x28f900u: goto label_28f900;
        case 0x28f904u: goto label_28f904;
        case 0x28f908u: goto label_28f908;
        case 0x28f90cu: goto label_28f90c;
        case 0x28f910u: goto label_28f910;
        case 0x28f914u: goto label_28f914;
        case 0x28f918u: goto label_28f918;
        case 0x28f91cu: goto label_28f91c;
        case 0x28f920u: goto label_28f920;
        case 0x28f924u: goto label_28f924;
        case 0x28f928u: goto label_28f928;
        case 0x28f92cu: goto label_28f92c;
        case 0x28f930u: goto label_28f930;
        case 0x28f934u: goto label_28f934;
        case 0x28f938u: goto label_28f938;
        case 0x28f93cu: goto label_28f93c;
        case 0x28f940u: goto label_28f940;
        case 0x28f944u: goto label_28f944;
        case 0x28f948u: goto label_28f948;
        case 0x28f94cu: goto label_28f94c;
        case 0x28f950u: goto label_28f950;
        case 0x28f954u: goto label_28f954;
        case 0x28f958u: goto label_28f958;
        case 0x28f95cu: goto label_28f95c;
        case 0x28f960u: goto label_28f960;
        case 0x28f964u: goto label_28f964;
        case 0x28f968u: goto label_28f968;
        case 0x28f96cu: goto label_28f96c;
        case 0x28f970u: goto label_28f970;
        case 0x28f974u: goto label_28f974;
        case 0x28f978u: goto label_28f978;
        case 0x28f97cu: goto label_28f97c;
        case 0x28f980u: goto label_28f980;
        case 0x28f984u: goto label_28f984;
        case 0x28f988u: goto label_28f988;
        case 0x28f98cu: goto label_28f98c;
        case 0x28f990u: goto label_28f990;
        case 0x28f994u: goto label_28f994;
        case 0x28f998u: goto label_28f998;
        case 0x28f99cu: goto label_28f99c;
        case 0x28f9a0u: goto label_28f9a0;
        case 0x28f9a4u: goto label_28f9a4;
        case 0x28f9a8u: goto label_28f9a8;
        case 0x28f9acu: goto label_28f9ac;
        case 0x28f9b0u: goto label_28f9b0;
        case 0x28f9b4u: goto label_28f9b4;
        case 0x28f9b8u: goto label_28f9b8;
        case 0x28f9bcu: goto label_28f9bc;
        case 0x28f9c0u: goto label_28f9c0;
        case 0x28f9c4u: goto label_28f9c4;
        case 0x28f9c8u: goto label_28f9c8;
        case 0x28f9ccu: goto label_28f9cc;
        case 0x28f9d0u: goto label_28f9d0;
        case 0x28f9d4u: goto label_28f9d4;
        case 0x28f9d8u: goto label_28f9d8;
        case 0x28f9dcu: goto label_28f9dc;
        case 0x28f9e0u: goto label_28f9e0;
        case 0x28f9e4u: goto label_28f9e4;
        case 0x28f9e8u: goto label_28f9e8;
        case 0x28f9ecu: goto label_28f9ec;
        case 0x28f9f0u: goto label_28f9f0;
        case 0x28f9f4u: goto label_28f9f4;
        case 0x28f9f8u: goto label_28f9f8;
        case 0x28f9fcu: goto label_28f9fc;
        case 0x28fa00u: goto label_28fa00;
        case 0x28fa04u: goto label_28fa04;
        case 0x28fa08u: goto label_28fa08;
        case 0x28fa0cu: goto label_28fa0c;
        case 0x28fa10u: goto label_28fa10;
        case 0x28fa14u: goto label_28fa14;
        case 0x28fa18u: goto label_28fa18;
        case 0x28fa1cu: goto label_28fa1c;
        case 0x28fa20u: goto label_28fa20;
        case 0x28fa24u: goto label_28fa24;
        case 0x28fa28u: goto label_28fa28;
        case 0x28fa2cu: goto label_28fa2c;
        case 0x28fa30u: goto label_28fa30;
        case 0x28fa34u: goto label_28fa34;
        case 0x28fa38u: goto label_28fa38;
        case 0x28fa3cu: goto label_28fa3c;
        case 0x28fa40u: goto label_28fa40;
        case 0x28fa44u: goto label_28fa44;
        case 0x28fa48u: goto label_28fa48;
        case 0x28fa4cu: goto label_28fa4c;
        case 0x28fa50u: goto label_28fa50;
        case 0x28fa54u: goto label_28fa54;
        case 0x28fa58u: goto label_28fa58;
        case 0x28fa5cu: goto label_28fa5c;
        case 0x28fa60u: goto label_28fa60;
        case 0x28fa64u: goto label_28fa64;
        case 0x28fa68u: goto label_28fa68;
        case 0x28fa6cu: goto label_28fa6c;
        case 0x28fa70u: goto label_28fa70;
        case 0x28fa74u: goto label_28fa74;
        case 0x28fa78u: goto label_28fa78;
        case 0x28fa7cu: goto label_28fa7c;
        case 0x28fa80u: goto label_28fa80;
        case 0x28fa84u: goto label_28fa84;
        case 0x28fa88u: goto label_28fa88;
        case 0x28fa8cu: goto label_28fa8c;
        case 0x28fa90u: goto label_28fa90;
        case 0x28fa94u: goto label_28fa94;
        case 0x28fa98u: goto label_28fa98;
        case 0x28fa9cu: goto label_28fa9c;
        case 0x28faa0u: goto label_28faa0;
        case 0x28faa4u: goto label_28faa4;
        case 0x28faa8u: goto label_28faa8;
        case 0x28faacu: goto label_28faac;
        case 0x28fab0u: goto label_28fab0;
        case 0x28fab4u: goto label_28fab4;
        case 0x28fab8u: goto label_28fab8;
        case 0x28fabcu: goto label_28fabc;
        case 0x28fac0u: goto label_28fac0;
        case 0x28fac4u: goto label_28fac4;
        case 0x28fac8u: goto label_28fac8;
        case 0x28faccu: goto label_28facc;
        case 0x28fad0u: goto label_28fad0;
        case 0x28fad4u: goto label_28fad4;
        case 0x28fad8u: goto label_28fad8;
        case 0x28fadcu: goto label_28fadc;
        case 0x28fae0u: goto label_28fae0;
        case 0x28fae4u: goto label_28fae4;
        case 0x28fae8u: goto label_28fae8;
        case 0x28faecu: goto label_28faec;
        case 0x28faf0u: goto label_28faf0;
        case 0x28faf4u: goto label_28faf4;
        case 0x28faf8u: goto label_28faf8;
        case 0x28fafcu: goto label_28fafc;
        case 0x28fb00u: goto label_28fb00;
        case 0x28fb04u: goto label_28fb04;
        case 0x28fb08u: goto label_28fb08;
        case 0x28fb0cu: goto label_28fb0c;
        case 0x28fb10u: goto label_28fb10;
        case 0x28fb14u: goto label_28fb14;
        case 0x28fb18u: goto label_28fb18;
        case 0x28fb1cu: goto label_28fb1c;
        case 0x28fb20u: goto label_28fb20;
        case 0x28fb24u: goto label_28fb24;
        case 0x28fb28u: goto label_28fb28;
        case 0x28fb2cu: goto label_28fb2c;
        case 0x28fb30u: goto label_28fb30;
        case 0x28fb34u: goto label_28fb34;
        case 0x28fb38u: goto label_28fb38;
        case 0x28fb3cu: goto label_28fb3c;
        case 0x28fb40u: goto label_28fb40;
        case 0x28fb44u: goto label_28fb44;
        case 0x28fb48u: goto label_28fb48;
        case 0x28fb4cu: goto label_28fb4c;
        case 0x28fb50u: goto label_28fb50;
        case 0x28fb54u: goto label_28fb54;
        case 0x28fb58u: goto label_28fb58;
        case 0x28fb5cu: goto label_28fb5c;
        case 0x28fb60u: goto label_28fb60;
        case 0x28fb64u: goto label_28fb64;
        case 0x28fb68u: goto label_28fb68;
        case 0x28fb6cu: goto label_28fb6c;
        case 0x28fb70u: goto label_28fb70;
        case 0x28fb74u: goto label_28fb74;
        case 0x28fb78u: goto label_28fb78;
        case 0x28fb7cu: goto label_28fb7c;
        case 0x28fb80u: goto label_28fb80;
        case 0x28fb84u: goto label_28fb84;
        case 0x28fb88u: goto label_28fb88;
        case 0x28fb8cu: goto label_28fb8c;
        case 0x28fb90u: goto label_28fb90;
        case 0x28fb94u: goto label_28fb94;
        case 0x28fb98u: goto label_28fb98;
        case 0x28fb9cu: goto label_28fb9c;
        case 0x28fba0u: goto label_28fba0;
        case 0x28fba4u: goto label_28fba4;
        case 0x28fba8u: goto label_28fba8;
        case 0x28fbacu: goto label_28fbac;
        case 0x28fbb0u: goto label_28fbb0;
        case 0x28fbb4u: goto label_28fbb4;
        case 0x28fbb8u: goto label_28fbb8;
        case 0x28fbbcu: goto label_28fbbc;
        case 0x28fbc0u: goto label_28fbc0;
        case 0x28fbc4u: goto label_28fbc4;
        case 0x28fbc8u: goto label_28fbc8;
        case 0x28fbccu: goto label_28fbcc;
        case 0x28fbd0u: goto label_28fbd0;
        case 0x28fbd4u: goto label_28fbd4;
        case 0x28fbd8u: goto label_28fbd8;
        case 0x28fbdcu: goto label_28fbdc;
        case 0x28fbe0u: goto label_28fbe0;
        case 0x28fbe4u: goto label_28fbe4;
        case 0x28fbe8u: goto label_28fbe8;
        case 0x28fbecu: goto label_28fbec;
        case 0x28fbf0u: goto label_28fbf0;
        case 0x28fbf4u: goto label_28fbf4;
        case 0x28fbf8u: goto label_28fbf8;
        case 0x28fbfcu: goto label_28fbfc;
        case 0x28fc00u: goto label_28fc00;
        case 0x28fc04u: goto label_28fc04;
        case 0x28fc08u: goto label_28fc08;
        case 0x28fc0cu: goto label_28fc0c;
        case 0x28fc10u: goto label_28fc10;
        case 0x28fc14u: goto label_28fc14;
        case 0x28fc18u: goto label_28fc18;
        case 0x28fc1cu: goto label_28fc1c;
        case 0x28fc20u: goto label_28fc20;
        case 0x28fc24u: goto label_28fc24;
        case 0x28fc28u: goto label_28fc28;
        case 0x28fc2cu: goto label_28fc2c;
        case 0x28fc30u: goto label_28fc30;
        case 0x28fc34u: goto label_28fc34;
        case 0x28fc38u: goto label_28fc38;
        case 0x28fc3cu: goto label_28fc3c;
        case 0x28fc40u: goto label_28fc40;
        case 0x28fc44u: goto label_28fc44;
        case 0x28fc48u: goto label_28fc48;
        case 0x28fc4cu: goto label_28fc4c;
        case 0x28fc50u: goto label_28fc50;
        case 0x28fc54u: goto label_28fc54;
        case 0x28fc58u: goto label_28fc58;
        case 0x28fc5cu: goto label_28fc5c;
        case 0x28fc60u: goto label_28fc60;
        case 0x28fc64u: goto label_28fc64;
        case 0x28fc68u: goto label_28fc68;
        case 0x28fc6cu: goto label_28fc6c;
        case 0x28fc70u: goto label_28fc70;
        case 0x28fc74u: goto label_28fc74;
        case 0x28fc78u: goto label_28fc78;
        case 0x28fc7cu: goto label_28fc7c;
        case 0x28fc80u: goto label_28fc80;
        case 0x28fc84u: goto label_28fc84;
        case 0x28fc88u: goto label_28fc88;
        case 0x28fc8cu: goto label_28fc8c;
        case 0x28fc90u: goto label_28fc90;
        case 0x28fc94u: goto label_28fc94;
        case 0x28fc98u: goto label_28fc98;
        case 0x28fc9cu: goto label_28fc9c;
        case 0x28fca0u: goto label_28fca0;
        case 0x28fca4u: goto label_28fca4;
        case 0x28fca8u: goto label_28fca8;
        case 0x28fcacu: goto label_28fcac;
        case 0x28fcb0u: goto label_28fcb0;
        case 0x28fcb4u: goto label_28fcb4;
        case 0x28fcb8u: goto label_28fcb8;
        case 0x28fcbcu: goto label_28fcbc;
        case 0x28fcc0u: goto label_28fcc0;
        case 0x28fcc4u: goto label_28fcc4;
        case 0x28fcc8u: goto label_28fcc8;
        case 0x28fcccu: goto label_28fccc;
        case 0x28fcd0u: goto label_28fcd0;
        case 0x28fcd4u: goto label_28fcd4;
        case 0x28fcd8u: goto label_28fcd8;
        case 0x28fcdcu: goto label_28fcdc;
        case 0x28fce0u: goto label_28fce0;
        case 0x28fce4u: goto label_28fce4;
        case 0x28fce8u: goto label_28fce8;
        case 0x28fcecu: goto label_28fcec;
        case 0x28fcf0u: goto label_28fcf0;
        case 0x28fcf4u: goto label_28fcf4;
        case 0x28fcf8u: goto label_28fcf8;
        case 0x28fcfcu: goto label_28fcfc;
        case 0x28fd00u: goto label_28fd00;
        case 0x28fd04u: goto label_28fd04;
        case 0x28fd08u: goto label_28fd08;
        case 0x28fd0cu: goto label_28fd0c;
        case 0x28fd10u: goto label_28fd10;
        case 0x28fd14u: goto label_28fd14;
        case 0x28fd18u: goto label_28fd18;
        case 0x28fd1cu: goto label_28fd1c;
        case 0x28fd20u: goto label_28fd20;
        case 0x28fd24u: goto label_28fd24;
        case 0x28fd28u: goto label_28fd28;
        case 0x28fd2cu: goto label_28fd2c;
        case 0x28fd30u: goto label_28fd30;
        case 0x28fd34u: goto label_28fd34;
        case 0x28fd38u: goto label_28fd38;
        case 0x28fd3cu: goto label_28fd3c;
        case 0x28fd40u: goto label_28fd40;
        case 0x28fd44u: goto label_28fd44;
        case 0x28fd48u: goto label_28fd48;
        case 0x28fd4cu: goto label_28fd4c;
        case 0x28fd50u: goto label_28fd50;
        case 0x28fd54u: goto label_28fd54;
        case 0x28fd58u: goto label_28fd58;
        case 0x28fd5cu: goto label_28fd5c;
        case 0x28fd60u: goto label_28fd60;
        case 0x28fd64u: goto label_28fd64;
        case 0x28fd68u: goto label_28fd68;
        case 0x28fd6cu: goto label_28fd6c;
        case 0x28fd70u: goto label_28fd70;
        case 0x28fd74u: goto label_28fd74;
        case 0x28fd78u: goto label_28fd78;
        case 0x28fd7cu: goto label_28fd7c;
        case 0x28fd80u: goto label_28fd80;
        case 0x28fd84u: goto label_28fd84;
        case 0x28fd88u: goto label_28fd88;
        case 0x28fd8cu: goto label_28fd8c;
        case 0x28fd90u: goto label_28fd90;
        case 0x28fd94u: goto label_28fd94;
        case 0x28fd98u: goto label_28fd98;
        case 0x28fd9cu: goto label_28fd9c;
        case 0x28fda0u: goto label_28fda0;
        case 0x28fda4u: goto label_28fda4;
        case 0x28fda8u: goto label_28fda8;
        case 0x28fdacu: goto label_28fdac;
        case 0x28fdb0u: goto label_28fdb0;
        case 0x28fdb4u: goto label_28fdb4;
        case 0x28fdb8u: goto label_28fdb8;
        case 0x28fdbcu: goto label_28fdbc;
        case 0x28fdc0u: goto label_28fdc0;
        case 0x28fdc4u: goto label_28fdc4;
        case 0x28fdc8u: goto label_28fdc8;
        case 0x28fdccu: goto label_28fdcc;
        case 0x28fdd0u: goto label_28fdd0;
        case 0x28fdd4u: goto label_28fdd4;
        case 0x28fdd8u: goto label_28fdd8;
        case 0x28fddcu: goto label_28fddc;
        case 0x28fde0u: goto label_28fde0;
        case 0x28fde4u: goto label_28fde4;
        case 0x28fde8u: goto label_28fde8;
        case 0x28fdecu: goto label_28fdec;
        case 0x28fdf0u: goto label_28fdf0;
        case 0x28fdf4u: goto label_28fdf4;
        case 0x28fdf8u: goto label_28fdf8;
        case 0x28fdfcu: goto label_28fdfc;
        case 0x28fe00u: goto label_28fe00;
        case 0x28fe04u: goto label_28fe04;
        case 0x28fe08u: goto label_28fe08;
        case 0x28fe0cu: goto label_28fe0c;
        case 0x28fe10u: goto label_28fe10;
        case 0x28fe14u: goto label_28fe14;
        case 0x28fe18u: goto label_28fe18;
        case 0x28fe1cu: goto label_28fe1c;
        case 0x28fe20u: goto label_28fe20;
        case 0x28fe24u: goto label_28fe24;
        case 0x28fe28u: goto label_28fe28;
        case 0x28fe2cu: goto label_28fe2c;
        case 0x28fe30u: goto label_28fe30;
        case 0x28fe34u: goto label_28fe34;
        case 0x28fe38u: goto label_28fe38;
        case 0x28fe3cu: goto label_28fe3c;
        case 0x28fe40u: goto label_28fe40;
        case 0x28fe44u: goto label_28fe44;
        case 0x28fe48u: goto label_28fe48;
        case 0x28fe4cu: goto label_28fe4c;
        case 0x28fe50u: goto label_28fe50;
        case 0x28fe54u: goto label_28fe54;
        case 0x28fe58u: goto label_28fe58;
        case 0x28fe5cu: goto label_28fe5c;
        case 0x28fe60u: goto label_28fe60;
        case 0x28fe64u: goto label_28fe64;
        case 0x28fe68u: goto label_28fe68;
        case 0x28fe6cu: goto label_28fe6c;
        case 0x28fe70u: goto label_28fe70;
        case 0x28fe74u: goto label_28fe74;
        case 0x28fe78u: goto label_28fe78;
        case 0x28fe7cu: goto label_28fe7c;
        case 0x28fe80u: goto label_28fe80;
        case 0x28fe84u: goto label_28fe84;
        case 0x28fe88u: goto label_28fe88;
        case 0x28fe8cu: goto label_28fe8c;
        case 0x28fe90u: goto label_28fe90;
        case 0x28fe94u: goto label_28fe94;
        case 0x28fe98u: goto label_28fe98;
        case 0x28fe9cu: goto label_28fe9c;
        case 0x28fea0u: goto label_28fea0;
        case 0x28fea4u: goto label_28fea4;
        case 0x28fea8u: goto label_28fea8;
        case 0x28feacu: goto label_28feac;
        case 0x28feb0u: goto label_28feb0;
        case 0x28feb4u: goto label_28feb4;
        case 0x28feb8u: goto label_28feb8;
        case 0x28febcu: goto label_28febc;
        case 0x28fec0u: goto label_28fec0;
        case 0x28fec4u: goto label_28fec4;
        case 0x28fec8u: goto label_28fec8;
        case 0x28feccu: goto label_28fecc;
        case 0x28fed0u: goto label_28fed0;
        case 0x28fed4u: goto label_28fed4;
        case 0x28fed8u: goto label_28fed8;
        case 0x28fedcu: goto label_28fedc;
        case 0x28fee0u: goto label_28fee0;
        case 0x28fee4u: goto label_28fee4;
        case 0x28fee8u: goto label_28fee8;
        case 0x28feecu: goto label_28feec;
        case 0x28fef0u: goto label_28fef0;
        case 0x28fef4u: goto label_28fef4;
        case 0x28fef8u: goto label_28fef8;
        case 0x28fefcu: goto label_28fefc;
        case 0x28ff00u: goto label_28ff00;
        case 0x28ff04u: goto label_28ff04;
        case 0x28ff08u: goto label_28ff08;
        case 0x28ff0cu: goto label_28ff0c;
        case 0x28ff10u: goto label_28ff10;
        case 0x28ff14u: goto label_28ff14;
        case 0x28ff18u: goto label_28ff18;
        case 0x28ff1cu: goto label_28ff1c;
        case 0x28ff20u: goto label_28ff20;
        case 0x28ff24u: goto label_28ff24;
        case 0x28ff28u: goto label_28ff28;
        case 0x28ff2cu: goto label_28ff2c;
        case 0x28ff30u: goto label_28ff30;
        case 0x28ff34u: goto label_28ff34;
        case 0x28ff38u: goto label_28ff38;
        case 0x28ff3cu: goto label_28ff3c;
        case 0x28ff40u: goto label_28ff40;
        case 0x28ff44u: goto label_28ff44;
        case 0x28ff48u: goto label_28ff48;
        case 0x28ff4cu: goto label_28ff4c;
        case 0x28ff50u: goto label_28ff50;
        case 0x28ff54u: goto label_28ff54;
        case 0x28ff58u: goto label_28ff58;
        case 0x28ff5cu: goto label_28ff5c;
        case 0x28ff60u: goto label_28ff60;
        case 0x28ff64u: goto label_28ff64;
        case 0x28ff68u: goto label_28ff68;
        case 0x28ff6cu: goto label_28ff6c;
        case 0x28ff70u: goto label_28ff70;
        case 0x28ff74u: goto label_28ff74;
        case 0x28ff78u: goto label_28ff78;
        case 0x28ff7cu: goto label_28ff7c;
        case 0x28ff80u: goto label_28ff80;
        case 0x28ff84u: goto label_28ff84;
        case 0x28ff88u: goto label_28ff88;
        case 0x28ff8cu: goto label_28ff8c;
        case 0x28ff90u: goto label_28ff90;
        case 0x28ff94u: goto label_28ff94;
        case 0x28ff98u: goto label_28ff98;
        case 0x28ff9cu: goto label_28ff9c;
        case 0x28ffa0u: goto label_28ffa0;
        case 0x28ffa4u: goto label_28ffa4;
        case 0x28ffa8u: goto label_28ffa8;
        case 0x28ffacu: goto label_28ffac;
        case 0x28ffb0u: goto label_28ffb0;
        case 0x28ffb4u: goto label_28ffb4;
        case 0x28ffb8u: goto label_28ffb8;
        case 0x28ffbcu: goto label_28ffbc;
        case 0x28ffc0u: goto label_28ffc0;
        case 0x28ffc4u: goto label_28ffc4;
        case 0x28ffc8u: goto label_28ffc8;
        case 0x28ffccu: goto label_28ffcc;
        case 0x28ffd0u: goto label_28ffd0;
        case 0x28ffd4u: goto label_28ffd4;
        case 0x28ffd8u: goto label_28ffd8;
        case 0x28ffdcu: goto label_28ffdc;
        case 0x28ffe0u: goto label_28ffe0;
        case 0x28ffe4u: goto label_28ffe4;
        case 0x28ffe8u: goto label_28ffe8;
        case 0x28ffecu: goto label_28ffec;
        case 0x28fff0u: goto label_28fff0;
        case 0x28fff4u: goto label_28fff4;
        case 0x28fff8u: goto label_28fff8;
        case 0x28fffcu: goto label_28fffc;
        case 0x290000u: goto label_290000;
        case 0x290004u: goto label_290004;
        case 0x290008u: goto label_290008;
        case 0x29000cu: goto label_29000c;
        case 0x290010u: goto label_290010;
        case 0x290014u: goto label_290014;
        case 0x290018u: goto label_290018;
        case 0x29001cu: goto label_29001c;
        case 0x290020u: goto label_290020;
        case 0x290024u: goto label_290024;
        case 0x290028u: goto label_290028;
        case 0x29002cu: goto label_29002c;
        case 0x290030u: goto label_290030;
        case 0x290034u: goto label_290034;
        case 0x290038u: goto label_290038;
        case 0x29003cu: goto label_29003c;
        case 0x290040u: goto label_290040;
        case 0x290044u: goto label_290044;
        case 0x290048u: goto label_290048;
        case 0x29004cu: goto label_29004c;
        case 0x290050u: goto label_290050;
        case 0x290054u: goto label_290054;
        case 0x290058u: goto label_290058;
        case 0x29005cu: goto label_29005c;
        case 0x290060u: goto label_290060;
        case 0x290064u: goto label_290064;
        case 0x290068u: goto label_290068;
        case 0x29006cu: goto label_29006c;
        case 0x290070u: goto label_290070;
        case 0x290074u: goto label_290074;
        case 0x290078u: goto label_290078;
        case 0x29007cu: goto label_29007c;
        case 0x290080u: goto label_290080;
        case 0x290084u: goto label_290084;
        case 0x290088u: goto label_290088;
        case 0x29008cu: goto label_29008c;
        case 0x290090u: goto label_290090;
        case 0x290094u: goto label_290094;
        case 0x290098u: goto label_290098;
        case 0x29009cu: goto label_29009c;
        case 0x2900a0u: goto label_2900a0;
        case 0x2900a4u: goto label_2900a4;
        case 0x2900a8u: goto label_2900a8;
        case 0x2900acu: goto label_2900ac;
        case 0x2900b0u: goto label_2900b0;
        case 0x2900b4u: goto label_2900b4;
        case 0x2900b8u: goto label_2900b8;
        case 0x2900bcu: goto label_2900bc;
        case 0x2900c0u: goto label_2900c0;
        case 0x2900c4u: goto label_2900c4;
        case 0x2900c8u: goto label_2900c8;
        case 0x2900ccu: goto label_2900cc;
        case 0x2900d0u: goto label_2900d0;
        case 0x2900d4u: goto label_2900d4;
        case 0x2900d8u: goto label_2900d8;
        case 0x2900dcu: goto label_2900dc;
        case 0x2900e0u: goto label_2900e0;
        case 0x2900e4u: goto label_2900e4;
        case 0x2900e8u: goto label_2900e8;
        case 0x2900ecu: goto label_2900ec;
        case 0x2900f0u: goto label_2900f0;
        case 0x2900f4u: goto label_2900f4;
        case 0x2900f8u: goto label_2900f8;
        case 0x2900fcu: goto label_2900fc;
        case 0x290100u: goto label_290100;
        case 0x290104u: goto label_290104;
        case 0x290108u: goto label_290108;
        case 0x29010cu: goto label_29010c;
        case 0x290110u: goto label_290110;
        case 0x290114u: goto label_290114;
        case 0x290118u: goto label_290118;
        case 0x29011cu: goto label_29011c;
        case 0x290120u: goto label_290120;
        case 0x290124u: goto label_290124;
        case 0x290128u: goto label_290128;
        case 0x29012cu: goto label_29012c;
        case 0x290130u: goto label_290130;
        case 0x290134u: goto label_290134;
        case 0x290138u: goto label_290138;
        case 0x29013cu: goto label_29013c;
        case 0x290140u: goto label_290140;
        case 0x290144u: goto label_290144;
        case 0x290148u: goto label_290148;
        case 0x29014cu: goto label_29014c;
        case 0x290150u: goto label_290150;
        case 0x290154u: goto label_290154;
        case 0x290158u: goto label_290158;
        case 0x29015cu: goto label_29015c;
        case 0x290160u: goto label_290160;
        case 0x290164u: goto label_290164;
        case 0x290168u: goto label_290168;
        case 0x29016cu: goto label_29016c;
        case 0x290170u: goto label_290170;
        case 0x290174u: goto label_290174;
        case 0x290178u: goto label_290178;
        case 0x29017cu: goto label_29017c;
        case 0x290180u: goto label_290180;
        case 0x290184u: goto label_290184;
        case 0x290188u: goto label_290188;
        case 0x29018cu: goto label_29018c;
        case 0x290190u: goto label_290190;
        case 0x290194u: goto label_290194;
        case 0x290198u: goto label_290198;
        case 0x29019cu: goto label_29019c;
        case 0x2901a0u: goto label_2901a0;
        case 0x2901a4u: goto label_2901a4;
        case 0x2901a8u: goto label_2901a8;
        case 0x2901acu: goto label_2901ac;
        case 0x2901b0u: goto label_2901b0;
        case 0x2901b4u: goto label_2901b4;
        case 0x2901b8u: goto label_2901b8;
        case 0x2901bcu: goto label_2901bc;
        case 0x2901c0u: goto label_2901c0;
        case 0x2901c4u: goto label_2901c4;
        case 0x2901c8u: goto label_2901c8;
        case 0x2901ccu: goto label_2901cc;
        case 0x2901d0u: goto label_2901d0;
        case 0x2901d4u: goto label_2901d4;
        case 0x2901d8u: goto label_2901d8;
        case 0x2901dcu: goto label_2901dc;
        case 0x2901e0u: goto label_2901e0;
        case 0x2901e4u: goto label_2901e4;
        case 0x2901e8u: goto label_2901e8;
        case 0x2901ecu: goto label_2901ec;
        case 0x2901f0u: goto label_2901f0;
        case 0x2901f4u: goto label_2901f4;
        case 0x2901f8u: goto label_2901f8;
        case 0x2901fcu: goto label_2901fc;
        case 0x290200u: goto label_290200;
        case 0x290204u: goto label_290204;
        case 0x290208u: goto label_290208;
        case 0x29020cu: goto label_29020c;
        case 0x290210u: goto label_290210;
        case 0x290214u: goto label_290214;
        case 0x290218u: goto label_290218;
        case 0x29021cu: goto label_29021c;
        case 0x290220u: goto label_290220;
        case 0x290224u: goto label_290224;
        case 0x290228u: goto label_290228;
        case 0x29022cu: goto label_29022c;
        case 0x290230u: goto label_290230;
        case 0x290234u: goto label_290234;
        case 0x290238u: goto label_290238;
        case 0x29023cu: goto label_29023c;
        case 0x290240u: goto label_290240;
        case 0x290244u: goto label_290244;
        case 0x290248u: goto label_290248;
        case 0x29024cu: goto label_29024c;
        case 0x290250u: goto label_290250;
        case 0x290254u: goto label_290254;
        case 0x290258u: goto label_290258;
        case 0x29025cu: goto label_29025c;
        case 0x290260u: goto label_290260;
        case 0x290264u: goto label_290264;
        case 0x290268u: goto label_290268;
        case 0x29026cu: goto label_29026c;
        case 0x290270u: goto label_290270;
        case 0x290274u: goto label_290274;
        case 0x290278u: goto label_290278;
        case 0x29027cu: goto label_29027c;
        case 0x290280u: goto label_290280;
        case 0x290284u: goto label_290284;
        case 0x290288u: goto label_290288;
        case 0x29028cu: goto label_29028c;
        case 0x290290u: goto label_290290;
        case 0x290294u: goto label_290294;
        case 0x290298u: goto label_290298;
        case 0x29029cu: goto label_29029c;
        case 0x2902a0u: goto label_2902a0;
        case 0x2902a4u: goto label_2902a4;
        case 0x2902a8u: goto label_2902a8;
        case 0x2902acu: goto label_2902ac;
        case 0x2902b0u: goto label_2902b0;
        case 0x2902b4u: goto label_2902b4;
        case 0x2902b8u: goto label_2902b8;
        case 0x2902bcu: goto label_2902bc;
        case 0x2902c0u: goto label_2902c0;
        case 0x2902c4u: goto label_2902c4;
        case 0x2902c8u: goto label_2902c8;
        case 0x2902ccu: goto label_2902cc;
        case 0x2902d0u: goto label_2902d0;
        case 0x2902d4u: goto label_2902d4;
        case 0x2902d8u: goto label_2902d8;
        case 0x2902dcu: goto label_2902dc;
        case 0x2902e0u: goto label_2902e0;
        case 0x2902e4u: goto label_2902e4;
        case 0x2902e8u: goto label_2902e8;
        case 0x2902ecu: goto label_2902ec;
        case 0x2902f0u: goto label_2902f0;
        case 0x2902f4u: goto label_2902f4;
        case 0x2902f8u: goto label_2902f8;
        case 0x2902fcu: goto label_2902fc;
        case 0x290300u: goto label_290300;
        case 0x290304u: goto label_290304;
        case 0x290308u: goto label_290308;
        case 0x29030cu: goto label_29030c;
        case 0x290310u: goto label_290310;
        case 0x290314u: goto label_290314;
        case 0x290318u: goto label_290318;
        case 0x29031cu: goto label_29031c;
        case 0x290320u: goto label_290320;
        case 0x290324u: goto label_290324;
        case 0x290328u: goto label_290328;
        case 0x29032cu: goto label_29032c;
        case 0x290330u: goto label_290330;
        case 0x290334u: goto label_290334;
        case 0x290338u: goto label_290338;
        case 0x29033cu: goto label_29033c;
        case 0x290340u: goto label_290340;
        case 0x290344u: goto label_290344;
        case 0x290348u: goto label_290348;
        case 0x29034cu: goto label_29034c;
        case 0x290350u: goto label_290350;
        case 0x290354u: goto label_290354;
        case 0x290358u: goto label_290358;
        case 0x29035cu: goto label_29035c;
        case 0x290360u: goto label_290360;
        case 0x290364u: goto label_290364;
        case 0x290368u: goto label_290368;
        case 0x29036cu: goto label_29036c;
        case 0x290370u: goto label_290370;
        case 0x290374u: goto label_290374;
        case 0x290378u: goto label_290378;
        case 0x29037cu: goto label_29037c;
        case 0x290380u: goto label_290380;
        case 0x290384u: goto label_290384;
        case 0x290388u: goto label_290388;
        case 0x29038cu: goto label_29038c;
        case 0x290390u: goto label_290390;
        case 0x290394u: goto label_290394;
        case 0x290398u: goto label_290398;
        case 0x29039cu: goto label_29039c;
        case 0x2903a0u: goto label_2903a0;
        case 0x2903a4u: goto label_2903a4;
        case 0x2903a8u: goto label_2903a8;
        case 0x2903acu: goto label_2903ac;
        case 0x2903b0u: goto label_2903b0;
        case 0x2903b4u: goto label_2903b4;
        case 0x2903b8u: goto label_2903b8;
        case 0x2903bcu: goto label_2903bc;
        case 0x2903c0u: goto label_2903c0;
        case 0x2903c4u: goto label_2903c4;
        case 0x2903c8u: goto label_2903c8;
        case 0x2903ccu: goto label_2903cc;
        case 0x2903d0u: goto label_2903d0;
        case 0x2903d4u: goto label_2903d4;
        case 0x2903d8u: goto label_2903d8;
        case 0x2903dcu: goto label_2903dc;
        case 0x2903e0u: goto label_2903e0;
        case 0x2903e4u: goto label_2903e4;
        case 0x2903e8u: goto label_2903e8;
        case 0x2903ecu: goto label_2903ec;
        case 0x2903f0u: goto label_2903f0;
        case 0x2903f4u: goto label_2903f4;
        case 0x2903f8u: goto label_2903f8;
        case 0x2903fcu: goto label_2903fc;
        case 0x290400u: goto label_290400;
        case 0x290404u: goto label_290404;
        case 0x290408u: goto label_290408;
        case 0x29040cu: goto label_29040c;
        case 0x290410u: goto label_290410;
        case 0x290414u: goto label_290414;
        case 0x290418u: goto label_290418;
        case 0x29041cu: goto label_29041c;
        case 0x290420u: goto label_290420;
        case 0x290424u: goto label_290424;
        case 0x290428u: goto label_290428;
        case 0x29042cu: goto label_29042c;
        case 0x290430u: goto label_290430;
        case 0x290434u: goto label_290434;
        case 0x290438u: goto label_290438;
        case 0x29043cu: goto label_29043c;
        case 0x290440u: goto label_290440;
        case 0x290444u: goto label_290444;
        case 0x290448u: goto label_290448;
        case 0x29044cu: goto label_29044c;
        case 0x290450u: goto label_290450;
        case 0x290454u: goto label_290454;
        case 0x290458u: goto label_290458;
        case 0x29045cu: goto label_29045c;
        case 0x290460u: goto label_290460;
        case 0x290464u: goto label_290464;
        case 0x290468u: goto label_290468;
        case 0x29046cu: goto label_29046c;
        case 0x290470u: goto label_290470;
        case 0x290474u: goto label_290474;
        case 0x290478u: goto label_290478;
        case 0x29047cu: goto label_29047c;
        case 0x290480u: goto label_290480;
        case 0x290484u: goto label_290484;
        case 0x290488u: goto label_290488;
        case 0x29048cu: goto label_29048c;
        case 0x290490u: goto label_290490;
        case 0x290494u: goto label_290494;
        case 0x290498u: goto label_290498;
        case 0x29049cu: goto label_29049c;
        case 0x2904a0u: goto label_2904a0;
        case 0x2904a4u: goto label_2904a4;
        case 0x2904a8u: goto label_2904a8;
        case 0x2904acu: goto label_2904ac;
        case 0x2904b0u: goto label_2904b0;
        case 0x2904b4u: goto label_2904b4;
        case 0x2904b8u: goto label_2904b8;
        case 0x2904bcu: goto label_2904bc;
        case 0x2904c0u: goto label_2904c0;
        case 0x2904c4u: goto label_2904c4;
        case 0x2904c8u: goto label_2904c8;
        case 0x2904ccu: goto label_2904cc;
        case 0x2904d0u: goto label_2904d0;
        case 0x2904d4u: goto label_2904d4;
        case 0x2904d8u: goto label_2904d8;
        case 0x2904dcu: goto label_2904dc;
        case 0x2904e0u: goto label_2904e0;
        case 0x2904e4u: goto label_2904e4;
        case 0x2904e8u: goto label_2904e8;
        case 0x2904ecu: goto label_2904ec;
        case 0x2904f0u: goto label_2904f0;
        case 0x2904f4u: goto label_2904f4;
        case 0x2904f8u: goto label_2904f8;
        case 0x2904fcu: goto label_2904fc;
        case 0x290500u: goto label_290500;
        case 0x290504u: goto label_290504;
        case 0x290508u: goto label_290508;
        case 0x29050cu: goto label_29050c;
        case 0x290510u: goto label_290510;
        case 0x290514u: goto label_290514;
        case 0x290518u: goto label_290518;
        case 0x29051cu: goto label_29051c;
        case 0x290520u: goto label_290520;
        case 0x290524u: goto label_290524;
        case 0x290528u: goto label_290528;
        case 0x29052cu: goto label_29052c;
        case 0x290530u: goto label_290530;
        case 0x290534u: goto label_290534;
        case 0x290538u: goto label_290538;
        case 0x29053cu: goto label_29053c;
        case 0x290540u: goto label_290540;
        case 0x290544u: goto label_290544;
        case 0x290548u: goto label_290548;
        case 0x29054cu: goto label_29054c;
        case 0x290550u: goto label_290550;
        case 0x290554u: goto label_290554;
        case 0x290558u: goto label_290558;
        case 0x29055cu: goto label_29055c;
        case 0x290560u: goto label_290560;
        case 0x290564u: goto label_290564;
        case 0x290568u: goto label_290568;
        case 0x29056cu: goto label_29056c;
        case 0x290570u: goto label_290570;
        case 0x290574u: goto label_290574;
        case 0x290578u: goto label_290578;
        case 0x29057cu: goto label_29057c;
        case 0x290580u: goto label_290580;
        case 0x290584u: goto label_290584;
        case 0x290588u: goto label_290588;
        case 0x29058cu: goto label_29058c;
        case 0x290590u: goto label_290590;
        case 0x290594u: goto label_290594;
        case 0x290598u: goto label_290598;
        case 0x29059cu: goto label_29059c;
        case 0x2905a0u: goto label_2905a0;
        case 0x2905a4u: goto label_2905a4;
        case 0x2905a8u: goto label_2905a8;
        case 0x2905acu: goto label_2905ac;
        case 0x2905b0u: goto label_2905b0;
        case 0x2905b4u: goto label_2905b4;
        case 0x2905b8u: goto label_2905b8;
        case 0x2905bcu: goto label_2905bc;
        case 0x2905c0u: goto label_2905c0;
        case 0x2905c4u: goto label_2905c4;
        case 0x2905c8u: goto label_2905c8;
        case 0x2905ccu: goto label_2905cc;
        case 0x2905d0u: goto label_2905d0;
        case 0x2905d4u: goto label_2905d4;
        case 0x2905d8u: goto label_2905d8;
        case 0x2905dcu: goto label_2905dc;
        case 0x2905e0u: goto label_2905e0;
        case 0x2905e4u: goto label_2905e4;
        case 0x2905e8u: goto label_2905e8;
        case 0x2905ecu: goto label_2905ec;
        case 0x2905f0u: goto label_2905f0;
        case 0x2905f4u: goto label_2905f4;
        case 0x2905f8u: goto label_2905f8;
        case 0x2905fcu: goto label_2905fc;
        case 0x290600u: goto label_290600;
        case 0x290604u: goto label_290604;
        case 0x290608u: goto label_290608;
        case 0x29060cu: goto label_29060c;
        case 0x290610u: goto label_290610;
        case 0x290614u: goto label_290614;
        case 0x290618u: goto label_290618;
        case 0x29061cu: goto label_29061c;
        case 0x290620u: goto label_290620;
        case 0x290624u: goto label_290624;
        case 0x290628u: goto label_290628;
        case 0x29062cu: goto label_29062c;
        case 0x290630u: goto label_290630;
        case 0x290634u: goto label_290634;
        case 0x290638u: goto label_290638;
        case 0x29063cu: goto label_29063c;
        case 0x290640u: goto label_290640;
        case 0x290644u: goto label_290644;
        case 0x290648u: goto label_290648;
        case 0x29064cu: goto label_29064c;
        case 0x290650u: goto label_290650;
        case 0x290654u: goto label_290654;
        case 0x290658u: goto label_290658;
        case 0x29065cu: goto label_29065c;
        case 0x290660u: goto label_290660;
        case 0x290664u: goto label_290664;
        case 0x290668u: goto label_290668;
        case 0x29066cu: goto label_29066c;
        case 0x290670u: goto label_290670;
        case 0x290674u: goto label_290674;
        case 0x290678u: goto label_290678;
        case 0x29067cu: goto label_29067c;
        case 0x290680u: goto label_290680;
        case 0x290684u: goto label_290684;
        case 0x290688u: goto label_290688;
        case 0x29068cu: goto label_29068c;
        case 0x290690u: goto label_290690;
        case 0x290694u: goto label_290694;
        case 0x290698u: goto label_290698;
        case 0x29069cu: goto label_29069c;
        case 0x2906a0u: goto label_2906a0;
        case 0x2906a4u: goto label_2906a4;
        case 0x2906a8u: goto label_2906a8;
        case 0x2906acu: goto label_2906ac;
        case 0x2906b0u: goto label_2906b0;
        case 0x2906b4u: goto label_2906b4;
        case 0x2906b8u: goto label_2906b8;
        case 0x2906bcu: goto label_2906bc;
        case 0x2906c0u: goto label_2906c0;
        case 0x2906c4u: goto label_2906c4;
        case 0x2906c8u: goto label_2906c8;
        case 0x2906ccu: goto label_2906cc;
        case 0x2906d0u: goto label_2906d0;
        case 0x2906d4u: goto label_2906d4;
        case 0x2906d8u: goto label_2906d8;
        case 0x2906dcu: goto label_2906dc;
        case 0x2906e0u: goto label_2906e0;
        case 0x2906e4u: goto label_2906e4;
        case 0x2906e8u: goto label_2906e8;
        case 0x2906ecu: goto label_2906ec;
        case 0x2906f0u: goto label_2906f0;
        case 0x2906f4u: goto label_2906f4;
        case 0x2906f8u: goto label_2906f8;
        case 0x2906fcu: goto label_2906fc;
        case 0x290700u: goto label_290700;
        case 0x290704u: goto label_290704;
        case 0x290708u: goto label_290708;
        case 0x29070cu: goto label_29070c;
        case 0x290710u: goto label_290710;
        case 0x290714u: goto label_290714;
        case 0x290718u: goto label_290718;
        case 0x29071cu: goto label_29071c;
        case 0x290720u: goto label_290720;
        case 0x290724u: goto label_290724;
        case 0x290728u: goto label_290728;
        case 0x29072cu: goto label_29072c;
        case 0x290730u: goto label_290730;
        case 0x290734u: goto label_290734;
        case 0x290738u: goto label_290738;
        case 0x29073cu: goto label_29073c;
        case 0x290740u: goto label_290740;
        case 0x290744u: goto label_290744;
        case 0x290748u: goto label_290748;
        case 0x29074cu: goto label_29074c;
        case 0x290750u: goto label_290750;
        case 0x290754u: goto label_290754;
        case 0x290758u: goto label_290758;
        case 0x29075cu: goto label_29075c;
        case 0x290760u: goto label_290760;
        case 0x290764u: goto label_290764;
        case 0x290768u: goto label_290768;
        case 0x29076cu: goto label_29076c;
        case 0x290770u: goto label_290770;
        case 0x290774u: goto label_290774;
        case 0x290778u: goto label_290778;
        case 0x29077cu: goto label_29077c;
        case 0x290780u: goto label_290780;
        case 0x290784u: goto label_290784;
        case 0x290788u: goto label_290788;
        case 0x29078cu: goto label_29078c;
        case 0x290790u: goto label_290790;
        case 0x290794u: goto label_290794;
        case 0x290798u: goto label_290798;
        case 0x29079cu: goto label_29079c;
        case 0x2907a0u: goto label_2907a0;
        case 0x2907a4u: goto label_2907a4;
        case 0x2907a8u: goto label_2907a8;
        case 0x2907acu: goto label_2907ac;
        case 0x2907b0u: goto label_2907b0;
        case 0x2907b4u: goto label_2907b4;
        case 0x2907b8u: goto label_2907b8;
        case 0x2907bcu: goto label_2907bc;
        case 0x2907c0u: goto label_2907c0;
        case 0x2907c4u: goto label_2907c4;
        case 0x2907c8u: goto label_2907c8;
        case 0x2907ccu: goto label_2907cc;
        case 0x2907d0u: goto label_2907d0;
        case 0x2907d4u: goto label_2907d4;
        case 0x2907d8u: goto label_2907d8;
        case 0x2907dcu: goto label_2907dc;
        case 0x2907e0u: goto label_2907e0;
        case 0x2907e4u: goto label_2907e4;
        case 0x2907e8u: goto label_2907e8;
        case 0x2907ecu: goto label_2907ec;
        case 0x2907f0u: goto label_2907f0;
        case 0x2907f4u: goto label_2907f4;
        case 0x2907f8u: goto label_2907f8;
        case 0x2907fcu: goto label_2907fc;
        case 0x290800u: goto label_290800;
        case 0x290804u: goto label_290804;
        case 0x290808u: goto label_290808;
        case 0x29080cu: goto label_29080c;
        case 0x290810u: goto label_290810;
        case 0x290814u: goto label_290814;
        case 0x290818u: goto label_290818;
        case 0x29081cu: goto label_29081c;
        case 0x290820u: goto label_290820;
        case 0x290824u: goto label_290824;
        case 0x290828u: goto label_290828;
        case 0x29082cu: goto label_29082c;
        case 0x290830u: goto label_290830;
        case 0x290834u: goto label_290834;
        case 0x290838u: goto label_290838;
        case 0x29083cu: goto label_29083c;
        case 0x290840u: goto label_290840;
        case 0x290844u: goto label_290844;
        case 0x290848u: goto label_290848;
        case 0x29084cu: goto label_29084c;
        case 0x290850u: goto label_290850;
        case 0x290854u: goto label_290854;
        case 0x290858u: goto label_290858;
        case 0x29085cu: goto label_29085c;
        case 0x290860u: goto label_290860;
        case 0x290864u: goto label_290864;
        case 0x290868u: goto label_290868;
        case 0x29086cu: goto label_29086c;
        case 0x290870u: goto label_290870;
        case 0x290874u: goto label_290874;
        case 0x290878u: goto label_290878;
        case 0x29087cu: goto label_29087c;
        case 0x290880u: goto label_290880;
        case 0x290884u: goto label_290884;
        case 0x290888u: goto label_290888;
        case 0x29088cu: goto label_29088c;
        case 0x290890u: goto label_290890;
        case 0x290894u: goto label_290894;
        case 0x290898u: goto label_290898;
        case 0x29089cu: goto label_29089c;
        case 0x2908a0u: goto label_2908a0;
        case 0x2908a4u: goto label_2908a4;
        case 0x2908a8u: goto label_2908a8;
        case 0x2908acu: goto label_2908ac;
        case 0x2908b0u: goto label_2908b0;
        case 0x2908b4u: goto label_2908b4;
        case 0x2908b8u: goto label_2908b8;
        case 0x2908bcu: goto label_2908bc;
        case 0x2908c0u: goto label_2908c0;
        case 0x2908c4u: goto label_2908c4;
        case 0x2908c8u: goto label_2908c8;
        case 0x2908ccu: goto label_2908cc;
        case 0x2908d0u: goto label_2908d0;
        case 0x2908d4u: goto label_2908d4;
        case 0x2908d8u: goto label_2908d8;
        case 0x2908dcu: goto label_2908dc;
        case 0x2908e0u: goto label_2908e0;
        case 0x2908e4u: goto label_2908e4;
        case 0x2908e8u: goto label_2908e8;
        case 0x2908ecu: goto label_2908ec;
        case 0x2908f0u: goto label_2908f0;
        case 0x2908f4u: goto label_2908f4;
        case 0x2908f8u: goto label_2908f8;
        case 0x2908fcu: goto label_2908fc;
        case 0x290900u: goto label_290900;
        case 0x290904u: goto label_290904;
        case 0x290908u: goto label_290908;
        case 0x29090cu: goto label_29090c;
        case 0x290910u: goto label_290910;
        case 0x290914u: goto label_290914;
        case 0x290918u: goto label_290918;
        case 0x29091cu: goto label_29091c;
        case 0x290920u: goto label_290920;
        case 0x290924u: goto label_290924;
        case 0x290928u: goto label_290928;
        case 0x29092cu: goto label_29092c;
        case 0x290930u: goto label_290930;
        case 0x290934u: goto label_290934;
        case 0x290938u: goto label_290938;
        case 0x29093cu: goto label_29093c;
        case 0x290940u: goto label_290940;
        case 0x290944u: goto label_290944;
        case 0x290948u: goto label_290948;
        case 0x29094cu: goto label_29094c;
        case 0x290950u: goto label_290950;
        case 0x290954u: goto label_290954;
        case 0x290958u: goto label_290958;
        case 0x29095cu: goto label_29095c;
        case 0x290960u: goto label_290960;
        case 0x290964u: goto label_290964;
        case 0x290968u: goto label_290968;
        case 0x29096cu: goto label_29096c;
        case 0x290970u: goto label_290970;
        case 0x290974u: goto label_290974;
        case 0x290978u: goto label_290978;
        case 0x29097cu: goto label_29097c;
        case 0x290980u: goto label_290980;
        case 0x290984u: goto label_290984;
        case 0x290988u: goto label_290988;
        case 0x29098cu: goto label_29098c;
        case 0x290990u: goto label_290990;
        case 0x290994u: goto label_290994;
        default: break;
    }

    ctx->pc = 0x28f5f0u;

label_28f5f0:
    // 0x28f5f0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x28f5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_28f5f4:
    // 0x28f5f4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x28f5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
label_28f5f8:
    // 0x28f5f8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x28f5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_28f5fc:
    // 0x28f5fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x28f5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_28f600:
    // 0x28f600: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28f600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_28f604:
    // 0x28f604: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28f604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_28f608:
    // 0x28f608: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28f608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_28f60c:
    // 0x28f60c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28f60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_28f610:
    // 0x28f610: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28f610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_28f614:
    // 0x28f614: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28f614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28f618:
    // 0x28f618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28f618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_28f61c:
    // 0x28f61c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28f61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_28f620:
    // 0x28f620: 0x24426150  addiu       $v0, $v0, 0x6150
    ctx->pc = 0x28f620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
label_28f624:
    // 0x28f624: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x28f624u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28f628:
    // 0x28f628: 0x26110728  addiu       $s1, $s0, 0x728
    ctx->pc = 0x28f628u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1832));
label_28f62c:
    // 0x28f62c: 0xafb100e8  sw          $s1, 0xE8($sp)
    ctx->pc = 0x28f62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 17));
label_28f630:
    // 0x28f630: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28f630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_28f634:
    // 0x28f634: 0x24432858  addiu       $v1, $v0, 0x2858
    ctx->pc = 0x28f634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10328));
label_28f638:
    // 0x28f638: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x28f638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_28f63c:
    // 0x28f63c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28f63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_28f640:
    // 0x28f640: 0x24472868  addiu       $a3, $v0, 0x2868
    ctx->pc = 0x28f640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 10344));
label_28f644:
    // 0x28f644: 0xafa700b8  sw          $a3, 0xB8($sp)
    ctx->pc = 0x28f644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 7));
label_28f648:
    // 0x28f648: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28f648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_28f64c:
    // 0x28f64c: 0x24422878  addiu       $v0, $v0, 0x2878
    ctx->pc = 0x28f64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10360));
label_28f650:
    // 0x28f650: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x28f650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_28f654:
    // 0x28f654: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x28f654u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_28f658:
    // 0x28f658: 0x24c22888  addiu       $v0, $a2, 0x2888
    ctx->pc = 0x28f658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 10376));
label_28f65c:
    // 0x28f65c: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x28f65cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28f660:
    // 0x28f660: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28f660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_28f664:
    // 0x28f664: 0x244228d8  addiu       $v0, $v0, 0x28D8
    ctx->pc = 0x28f664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10456));
label_28f668:
    // 0x28f668: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x28f668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_28f66c:
    // 0x28f66c: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x28f66cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_28f670:
    // 0x28f670: 0x24c228e8  addiu       $v0, $a2, 0x28E8
    ctx->pc = 0x28f670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 10472));
label_28f674:
    // 0x28f674: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x28f674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_28f678:
    // 0x28f678: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x28f678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_28f67c:
    // 0x28f67c: 0x246228f8  addiu       $v0, $v1, 0x28F8
    ctx->pc = 0x28f67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 10488));
label_28f680:
    // 0x28f680: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x28f680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
label_28f684:
    // 0x28f684: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x28f684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_28f688:
    // 0x28f688: 0x24622908  addiu       $v0, $v1, 0x2908
    ctx->pc = 0x28f688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 10504));
label_28f68c:
    // 0x28f68c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x28f68cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_28f690:
    // 0x28f690: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x28f690u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_28f694:
    // 0x28f694: 0x24c22920  addiu       $v0, $a2, 0x2920
    ctx->pc = 0x28f694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 10528));
label_28f698:
    // 0x28f698: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x28f698u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28f69c:
    // 0x28f69c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x28f69cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_28f6a0:
    // 0x28f6a0: 0x24622978  addiu       $v0, $v1, 0x2978
    ctx->pc = 0x28f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 10616));
label_28f6a4:
    // 0x28f6a4: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x28f6a4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28f6a8:
    // 0x28f6a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28f6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_28f6ac:
    // 0x28f6ac: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x28f6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_28f6b0:
    // 0x28f6b0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28f6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_28f6b4:
    // 0x28f6b4: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x28f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_28f6b8:
    // 0x28f6b8: 0x34431015  ori         $v1, $v0, 0x1015
    ctx->pc = 0x28f6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
label_28f6bc:
    // 0x28f6bc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x28f6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_28f6c0:
    // 0x28f6c0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x28f6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_28f6c4:
    // 0x28f6c4: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x28f6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_28f6c8:
    // 0x28f6c8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x28f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_28f6cc:
    // 0x28f6cc: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x28f6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
label_28f6d0:
    // 0x28f6d0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28f6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_28f6d4:
    // 0x28f6d4: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x28f6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_28f6d8:
    // 0x28f6d8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x28f6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_28f6dc:
    // 0x28f6dc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x28f6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_28f6e0:
    // 0x28f6e0: 0x34431043  ori         $v1, $v0, 0x1043
    ctx->pc = 0x28f6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
label_28f6e4:
    // 0x28f6e4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x28f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_28f6e8:
    // 0x28f6e8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x28f6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_28f6ec:
    // 0x28f6ec: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x28f6ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_28f6f0:
    // 0x28f6f0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x28f6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_28f6f4:
    // 0x28f6f4: 0xfc470008  sd          $a3, 0x8($v0)
    ctx->pc = 0x28f6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 7));
label_28f6f8:
    // 0x28f6f8: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x28f6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
label_28f6fc:
    // 0x28f6fc: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x28f6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_28f700:
    // 0x28f700: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x28f700u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_28f704:
    // 0x28f704: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x28f704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_28f708:
    // 0x28f708: 0x3442103f  ori         $v0, $v0, 0x103F
    ctx->pc = 0x28f708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4159);
label_28f70c:
    // 0x28f70c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x28f70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_28f710:
    // 0x28f710: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x28f710u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_28f714:
    // 0x28f714: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28f714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_28f718:
    // 0x28f718: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x28f718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_28f71c:
    // 0x28f71c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28f71cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_28f720:
    // 0x28f720: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x28f720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_28f724:
    // 0x28f724: 0x34421015  ori         $v0, $v0, 0x1015
    ctx->pc = 0x28f724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
label_28f728:
    // 0x28f728: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x28f728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_28f72c:
    // 0x28f72c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x28f72cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_28f730:
    // 0x28f730: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x28f730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_28f734:
    // 0x28f734: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x28f734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_28f738:
    // 0x28f738: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x28f738u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
label_28f73c:
    // 0x28f73c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x28f73cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
label_28f740:
    // 0x28f740: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x28f740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_28f744:
    // 0x28f744: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x28f744u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_28f748:
    // 0x28f748: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x28f748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_28f74c:
    // 0x28f74c: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x28f74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
label_28f750:
    // 0x28f750: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x28f750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_28f754:
    // 0x28f754: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x28f754u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_28f758:
    // 0x28f758: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x28f758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_28f75c:
    // 0x28f75c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x28f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_28f760:
    // 0x28f760: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x28f760u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
label_28f764:
    // 0x28f764: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28f764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_28f768:
    // 0x28f768: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x28f768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_28f76c:
    // 0x28f76c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28f76cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_28f770:
    // 0x28f770: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x28f770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_28f774:
    // 0x28f774: 0x3446103f  ori         $a2, $v0, 0x103F
    ctx->pc = 0x28f774u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4159);
label_28f778:
    // 0x28f778: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x28f778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_28f77c:
    // 0x28f77c: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x28f77cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
label_28f780:
    // 0x28f780: 0x8e035dc8  lw          $v1, 0x5DC8($s0)
    ctx->pc = 0x28f780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
label_28f784:
    // 0x28f784: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x28f784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_28f788:
    // 0x28f788: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_28f78c:
    if (ctx->pc == 0x28F78Cu) {
        ctx->pc = 0x28F790u;
        goto label_28f790;
    }
    ctx->pc = 0x28F788u;
    {
        const bool branch_taken_0x28f788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28f788) {
            ctx->pc = 0x28F7DCu;
            goto label_28f7dc;
        }
    }
    ctx->pc = 0x28F790u;
label_28f790:
    // 0x28f790: 0x8e035dcc  lw          $v1, 0x5DCC($s0)
    ctx->pc = 0x28f790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24012)));
label_28f794:
    // 0x28f794: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28f794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_28f798:
    // 0x28f798: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_28f79c:
    if (ctx->pc == 0x28F79Cu) {
        ctx->pc = 0x28F7A0u;
        goto label_28f7a0;
    }
    ctx->pc = 0x28F798u;
    {
        const bool branch_taken_0x28f798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28f798) {
            ctx->pc = 0x28F7DCu;
            goto label_28f7dc;
        }
    }
    ctx->pc = 0x28F7A0u;
label_28f7a0:
    // 0x28f7a0: 0xc60c5e00  lwc1        $f12, 0x5E00($s0)
    ctx->pc = 0x28f7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_28f7a4:
    // 0x28f7a4: 0xc047fe2  jal         func_11FF88
label_28f7a8:
    if (ctx->pc == 0x28F7A8u) {
        ctx->pc = 0x28F7ACu;
        goto label_28f7ac;
    }
    ctx->pc = 0x28F7A4u;
    SET_GPR_U32(ctx, 31, 0x28F7ACu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x28F7A4u, 0x28F7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F7ACu;
label_28f7ac:
    // 0x28f7ac: 0x3c034060  lui         $v1, 0x4060
    ctx->pc = 0x28f7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16480 << 16));
label_28f7b0:
    // 0x28f7b0: 0x3983c  dsll32      $s3, $v1, 0
    ctx->pc = 0x28f7b0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) << (32 + 0));
label_28f7b4:
    // 0x28f7b4: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x28f7b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_28f7b8:
    // 0x28f7b8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x28f7b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28f7bc:
    // 0x28f7bc: 0xc047af0  jal         func_11EBC0
label_28f7c0:
    if (ctx->pc == 0x28F7C0u) {
        ctx->pc = 0x28F7C4u;
        goto label_28f7c4;
    }
    ctx->pc = 0x28F7BCu;
    SET_GPR_U32(ctx, 31, 0x28F7C4u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x28F7BCu, 0x28F7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F7C4u;
label_28f7c4:
    // 0x28f7c4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28f7c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28f7c8:
    // 0x28f7c8: 0xc047ca2  jal         func_11F288
label_28f7cc:
    if (ctx->pc == 0x28F7CCu) {
        ctx->pc = 0x28F7D0u;
        goto label_28f7d0;
    }
    ctx->pc = 0x28F7C8u;
    SET_GPR_U32(ctx, 31, 0x28F7D0u);
    ctx->pc = 0x11F288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F288u, 0x28F7C8u, 0x28F7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F7D0u;
label_28f7d0:
    // 0x28f7d0: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x28f7d0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28f7d4:
    // 0x28f7d4: 0x10000010  b           . + 4 + (0x10 << 2)
label_28f7d8:
    if (ctx->pc == 0x28F7D8u) {
        ctx->pc = 0x28F7DCu;
        goto label_28f7dc;
    }
    ctx->pc = 0x28F7D4u;
    {
        const bool branch_taken_0x28f7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f7d4) {
            ctx->pc = 0x28F818u;
            goto label_28f818;
        }
    }
    ctx->pc = 0x28F7DCu;
label_28f7dc:
    // 0x28f7dc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_28f7e0:
    // 0x28f7e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28f7e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28f7e4:
    // 0x28f7e4: 0xc6005e00  lwc1        $f0, 0x5E00($s0)
    ctx->pc = 0x28f7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28f7e8:
    // 0x28f7e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28f7e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_28f7ec:
    // 0x28f7ec: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28f7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_28f7f0:
    // 0x28f7f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f7f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28f7f4:
    // 0x28f7f4: 0x0  nop
    ctx->pc = 0x28f7f4u;
    // NOP
label_28f7f8:
    // 0x28f7f8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x28f7f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_28f7fc:
    // 0x28f7fc: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x28f7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
label_28f800:
    // 0x28f800: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28f800u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28f804:
    // 0x28f804: 0x0  nop
    ctx->pc = 0x28f804u;
    // NOP
label_28f808:
    // 0x28f808: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x28f808u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_28f80c:
    // 0x28f80c: 0xc047fa2  jal         func_11FE88
label_28f810:
    if (ctx->pc == 0x28F810u) {
        ctx->pc = 0x28F814u;
        goto label_28f814;
    }
    ctx->pc = 0x28F80Cu;
    SET_GPR_U32(ctx, 31, 0x28F814u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x28F80Cu, 0x28F814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F814u;
label_28f814:
    // 0x28f814: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x28f814u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28f818:
    // 0x28f818: 0x92025e04  lbu         $v0, 0x5E04($s0)
    ctx->pc = 0x28f818u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24068)));
label_28f81c:
    // 0x28f81c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28f81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_28f820:
    // 0x28f820: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28f820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28f824:
    // 0x28f824: 0x14460010  bne         $v0, $a2, . + 4 + (0x10 << 2)
label_28f828:
    if (ctx->pc == 0x28F828u) {
        ctx->pc = 0x28F82Cu;
        goto label_28f82c;
    }
    ctx->pc = 0x28F824u;
    {
        const bool branch_taken_0x28f824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x28f824) {
            ctx->pc = 0x28F868u;
            goto label_28f868;
        }
    }
    ctx->pc = 0x28F82Cu;
label_28f82c:
    // 0x28f82c: 0xc60c5e00  lwc1        $f12, 0x5E00($s0)
    ctx->pc = 0x28f82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_28f830:
    // 0x28f830: 0xc047fe2  jal         func_11FF88
label_28f834:
    if (ctx->pc == 0x28F834u) {
        ctx->pc = 0x28F838u;
        goto label_28f838;
    }
    ctx->pc = 0x28F830u;
    SET_GPR_U32(ctx, 31, 0x28F838u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x28F830u, 0x28F838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F838u;
label_28f838:
    // 0x28f838: 0x3c034060  lui         $v1, 0x4060
    ctx->pc = 0x28f838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16480 << 16));
label_28f83c:
    // 0x28f83c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x28f83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_28f840:
    // 0x28f840: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28f840u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_28f844:
    // 0x28f844: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x28f844u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28f848:
    // 0x28f848: 0xc047af0  jal         func_11EBC0
label_28f84c:
    if (ctx->pc == 0x28F84Cu) {
        ctx->pc = 0x28F850u;
        goto label_28f850;
    }
    ctx->pc = 0x28F848u;
    SET_GPR_U32(ctx, 31, 0x28F850u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x28F848u, 0x28F850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F850u;
label_28f850:
    // 0x28f850: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28f850u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28f854:
    // 0x28f854: 0xc047ca2  jal         func_11F288
label_28f858:
    if (ctx->pc == 0x28F858u) {
        ctx->pc = 0x28F85Cu;
        goto label_28f85c;
    }
    ctx->pc = 0x28F854u;
    SET_GPR_U32(ctx, 31, 0x28F85Cu);
    ctx->pc = 0x11F288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F288u, 0x28F854u, 0x28F85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F85Cu;
label_28f85c:
    // 0x28f85c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x28f85cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28f860:
    // 0x28f860: 0x10000015  b           . + 4 + (0x15 << 2)
label_28f864:
    if (ctx->pc == 0x28F864u) {
        ctx->pc = 0x28F868u;
        goto label_28f868;
    }
    ctx->pc = 0x28F860u;
    {
        const bool branch_taken_0x28f860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f860) {
            ctx->pc = 0x28F8B8u;
            goto label_28f8b8;
        }
    }
    ctx->pc = 0x28F868u;
label_28f868:
    // 0x28f868: 0x92065e04  lbu         $a2, 0x5E04($s0)
    ctx->pc = 0x28f868u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24068)));
label_28f86c:
    // 0x28f86c: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x28f86cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_28f870:
    // 0x28f870: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28f870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28f874:
    // 0x28f874: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_28f878:
    if (ctx->pc == 0x28F878u) {
        ctx->pc = 0x28F87Cu;
        goto label_28f87c;
    }
    ctx->pc = 0x28F874u;
    {
        const bool branch_taken_0x28f874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28f874) {
            ctx->pc = 0x28F8B8u;
            goto label_28f8b8;
        }
    }
    ctx->pc = 0x28F87Cu;
label_28f87c:
    // 0x28f87c: 0x3c123f00  lui         $s2, 0x3F00
    ctx->pc = 0x28f87cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16128 << 16));
label_28f880:
    // 0x28f880: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x28f880u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28f884:
    // 0x28f884: 0xc6005e00  lwc1        $f0, 0x5E00($s0)
    ctx->pc = 0x28f884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28f888:
    // 0x28f888: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28f888u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_28f88c:
    // 0x28f88c: 0x3c153f00  lui         $s5, 0x3F00
    ctx->pc = 0x28f88cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)16128 << 16));
label_28f890:
    // 0x28f890: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x28f890u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28f894:
    // 0x28f894: 0x0  nop
    ctx->pc = 0x28f894u;
    // NOP
label_28f898:
    // 0x28f898: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x28f898u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_28f89c:
    // 0x28f89c: 0x3c1e4300  lui         $fp, 0x4300
    ctx->pc = 0x28f89cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)17152 << 16));
label_28f8a0:
    // 0x28f8a0: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x28f8a0u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28f8a4:
    // 0x28f8a4: 0x0  nop
    ctx->pc = 0x28f8a4u;
    // NOP
label_28f8a8:
    // 0x28f8a8: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x28f8a8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_28f8ac:
    // 0x28f8ac: 0xc047fa2  jal         func_11FE88
label_28f8b0:
    if (ctx->pc == 0x28F8B0u) {
        ctx->pc = 0x28F8B4u;
        goto label_28f8b4;
    }
    ctx->pc = 0x28F8ACu;
    SET_GPR_U32(ctx, 31, 0x28F8B4u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x28F8ACu, 0x28F8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F8B4u;
label_28f8b4:
    // 0x28f8b4: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x28f8b4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28f8b8:
    // 0x28f8b8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x28f8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_28f8bc:
    // 0x28f8bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28f8bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28f8c0:
    // 0x28f8c0: 0xc6006620  lwc1        $f0, 0x6620($s0)
    ctx->pc = 0x28f8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28f8c4:
    // 0x28f8c4: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x28f8c4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_28f8c8:
    // 0x28f8c8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_28f8cc:
    // 0x28f8cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f8ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28f8d0:
    // 0x28f8d0: 0x0  nop
    ctx->pc = 0x28f8d0u;
    // NOP
label_28f8d4:
    // 0x28f8d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28f8d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28f8d8:
    // 0x28f8d8: 0x0  nop
    ctx->pc = 0x28f8d8u;
    // NOP
label_28f8dc:
    // 0x28f8dc: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_28f8e0:
    if (ctx->pc == 0x28F8E0u) {
        ctx->pc = 0x28F8E4u;
        goto label_28f8e4;
    }
    ctx->pc = 0x28F8DCu;
    {
        const bool branch_taken_0x28f8dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28f8dc) {
            ctx->pc = 0x28F964u;
            goto label_28f964;
        }
    }
    ctx->pc = 0x28F8E4u;
label_28f8e4:
    // 0x28f8e4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x28f8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_28f8e8:
    // 0x28f8e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28f8e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28f8ec:
    // 0x28f8ec: 0xc6006620  lwc1        $f0, 0x6620($s0)
    ctx->pc = 0x28f8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28f8f0:
    // 0x28f8f0: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x28f8f0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_28f8f4:
    // 0x28f8f4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x28f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_28f8f8:
    // 0x28f8f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f8f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28f8fc:
    // 0x28f8fc: 0x0  nop
    ctx->pc = 0x28f8fcu;
    // NOP
label_28f900:
    // 0x28f900: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x28f900u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_28f904:
    // 0x28f904: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28f904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_28f908:
    // 0x28f908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28f90c:
    // 0x28f90c: 0x0  nop
    ctx->pc = 0x28f90cu;
    // NOP
label_28f910:
    // 0x28f910: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x28f910u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_28f914:
    // 0x28f914: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
label_28f918:
    if (ctx->pc == 0x28F918u) {
        ctx->pc = 0x28F91Cu;
        goto label_28f91c;
    }
    ctx->pc = 0x28F914u;
    {
        const bool branch_taken_0x28f914 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x28f914) {
            ctx->pc = 0x28F930u;
            goto label_28f930;
        }
    }
    ctx->pc = 0x28F91Cu;
label_28f91c:
    // 0x28f91c: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x28f91cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28f920:
    // 0x28f920: 0x0  nop
    ctx->pc = 0x28f920u;
    // NOP
label_28f924:
    // 0x28f924: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28f924u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28f928:
    // 0x28f928: 0x10000008  b           . + 4 + (0x8 << 2)
label_28f92c:
    if (ctx->pc == 0x28F92Cu) {
        ctx->pc = 0x28F930u;
        goto label_28f930;
    }
    ctx->pc = 0x28F928u;
    {
        const bool branch_taken_0x28f928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f928) {
            ctx->pc = 0x28F94Cu;
            goto label_28f94c;
        }
    }
    ctx->pc = 0x28F930u;
label_28f930:
    // 0x28f930: 0x133042  srl         $a2, $s3, 1
    ctx->pc = 0x28f930u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
label_28f934:
    // 0x28f934: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x28f934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_28f938:
    // 0x28f938: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x28f938u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_28f93c:
    // 0x28f93c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x28f93cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28f940:
    // 0x28f940: 0x0  nop
    ctx->pc = 0x28f940u;
    // NOP
label_28f944:
    // 0x28f944: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28f944u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28f948:
    // 0x28f948: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28f948u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28f94c:
    // 0x28f94c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x28f94cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_28f950:
    // 0x28f950: 0xc047fa2  jal         func_11FE88
label_28f954:
    if (ctx->pc == 0x28F954u) {
        ctx->pc = 0x28F958u;
        goto label_28f958;
    }
    ctx->pc = 0x28F950u;
    SET_GPR_U32(ctx, 31, 0x28F958u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x28F950u, 0x28F958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F958u;
label_28f958:
    // 0x28f958: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x28f958u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28f95c:
    // 0x28f95c: 0x10000023  b           . + 4 + (0x23 << 2)
label_28f960:
    if (ctx->pc == 0x28F960u) {
        ctx->pc = 0x28F964u;
        goto label_28f964;
    }
    ctx->pc = 0x28F95Cu;
    {
        const bool branch_taken_0x28f95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f95c) {
            ctx->pc = 0x28F9ECu;
            goto label_28f9ec;
        }
    }
    ctx->pc = 0x28F964u;
label_28f964:
    // 0x28f964: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x28f964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_28f968:
    // 0x28f968: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28f968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28f96c:
    // 0x28f96c: 0xc6006620  lwc1        $f0, 0x6620($s0)
    ctx->pc = 0x28f96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28f970:
    // 0x28f970: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x28f970u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_28f974:
    // 0x28f974: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28f974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_28f978:
    // 0x28f978: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28f97c:
    // 0x28f97c: 0x0  nop
    ctx->pc = 0x28f97cu;
    // NOP
label_28f980:
    // 0x28f980: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x28f980u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_28f984:
    // 0x28f984: 0x3c174000  lui         $s7, 0x4000
    ctx->pc = 0x28f984u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)16384 << 16));
label_28f988:
    // 0x28f988: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x28f988u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28f98c:
    // 0x28f98c: 0x0  nop
    ctx->pc = 0x28f98cu;
    // NOP
label_28f990:
    // 0x28f990: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x28f990u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_28f994:
    // 0x28f994: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28f994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_28f998:
    // 0x28f998: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28f99c:
    // 0x28f99c: 0x0  nop
    ctx->pc = 0x28f99cu;
    // NOP
label_28f9a0:
    // 0x28f9a0: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x28f9a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_28f9a4:
    // 0x28f9a4: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
label_28f9a8:
    if (ctx->pc == 0x28F9A8u) {
        ctx->pc = 0x28F9ACu;
        goto label_28f9ac;
    }
    ctx->pc = 0x28F9A4u;
    {
        const bool branch_taken_0x28f9a4 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x28f9a4) {
            ctx->pc = 0x28F9C0u;
            goto label_28f9c0;
        }
    }
    ctx->pc = 0x28F9ACu;
label_28f9ac:
    // 0x28f9ac: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x28f9acu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28f9b0:
    // 0x28f9b0: 0x0  nop
    ctx->pc = 0x28f9b0u;
    // NOP
label_28f9b4:
    // 0x28f9b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28f9b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28f9b8:
    // 0x28f9b8: 0x10000008  b           . + 4 + (0x8 << 2)
label_28f9bc:
    if (ctx->pc == 0x28F9BCu) {
        ctx->pc = 0x28F9C0u;
        goto label_28f9c0;
    }
    ctx->pc = 0x28F9B8u;
    {
        const bool branch_taken_0x28f9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f9b8) {
            ctx->pc = 0x28F9DCu;
            goto label_28f9dc;
        }
    }
    ctx->pc = 0x28F9C0u;
label_28f9c0:
    // 0x28f9c0: 0x131842  srl         $v1, $s3, 1
    ctx->pc = 0x28f9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
label_28f9c4:
    // 0x28f9c4: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x28f9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_28f9c8:
    // 0x28f9c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28f9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_28f9cc:
    // 0x28f9cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28f9ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28f9d0:
    // 0x28f9d0: 0x0  nop
    ctx->pc = 0x28f9d0u;
    // NOP
label_28f9d4:
    // 0x28f9d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28f9d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28f9d8:
    // 0x28f9d8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28f9d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28f9dc:
    // 0x28f9dc: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x28f9dcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_28f9e0:
    // 0x28f9e0: 0xc047fa2  jal         func_11FE88
label_28f9e4:
    if (ctx->pc == 0x28F9E4u) {
        ctx->pc = 0x28F9E8u;
        goto label_28f9e8;
    }
    ctx->pc = 0x28F9E0u;
    SET_GPR_U32(ctx, 31, 0x28F9E8u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x28F9E0u, 0x28F9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F9E8u;
label_28f9e8:
    // 0x28f9e8: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x28f9e8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28f9ec:
    // 0x28f9ec: 0x82025de8  lb          $v0, 0x5DE8($s0)
    ctx->pc = 0x28f9ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24040)));
label_28f9f0:
    // 0x28f9f0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x28f9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_28f9f4:
    // 0x28f9f4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x28f9f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_28f9f8:
    // 0x28f9f8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x28f9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28f9fc:
    // 0x28f9fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x28f9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28fa00:
    // 0x28fa00: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x28fa00u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28fa04:
    // 0x28fa04: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x28fa04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_28fa08:
    // 0x28fa08: 0x24626010  addiu       $v0, $v1, 0x6010
    ctx->pc = 0x28fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 24592));
label_28fa0c:
    // 0x28fa0c: 0x46a821  addu        $s5, $v0, $a2
    ctx->pc = 0x28fa0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_28fa10:
    // 0x28fa10: 0x72a09628  paddub      $s2, $s5, $zero
    ctx->pc = 0x28fa10u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_28fa14:
    // 0x28fa14: 0x240301a2  addiu       $v1, $zero, 0x1A2
    ctx->pc = 0x28fa14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 418));
label_28fa18:
    // 0x28fa18: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x28fa18u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_28fa1c:
    // 0x28fa1c: 0x2402011b  addiu       $v0, $zero, 0x11B
    ctx->pc = 0x28fa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 283));
label_28fa20:
    // 0x28fa20: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x28fa20u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28fa24:
    // 0x28fa24: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x28fa24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_28fa28:
    // 0x28fa28: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x28fa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_28fa2c:
    // 0x28fa2c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x28fa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28fa30:
    // 0x28fa30: 0xafa300f4  sw          $v1, 0xF4($sp)
    ctx->pc = 0x28fa30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 3));
label_28fa34:
    // 0x28fa34: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x28fa34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_28fa38:
    // 0x28fa38: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x28fa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_28fa3c:
    // 0x28fa3c: 0x62b823  subu        $s7, $v1, $v0
    ctx->pc = 0x28fa3cu;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28fa40:
    // 0x28fa40: 0xafb700f8  sw          $s7, 0xF8($sp)
    ctx->pc = 0x28fa40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 23));
label_28fa44:
    // 0x28fa44: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x28fa44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_28fa48:
    // 0x28fa48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28fa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28fa4c:
    // 0x28fa4c: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x28fa4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
label_28fa50:
    // 0x28fa50: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x28fa50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_28fa54:
    // 0x28fa54: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x28fa54u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28fa58:
    // 0x28fa58: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x28fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_28fa5c:
    // 0x28fa5c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28fa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28fa60:
    // 0x28fa60: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x28fa60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_28fa64:
    // 0x28fa64: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x28fa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_28fa68:
    // 0x28fa68: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x28fa68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
label_28fa6c:
    // 0x28fa6c: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x28fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_28fa70:
    // 0x28fa70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28fa70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28fa74:
    // 0x28fa74: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x28fa74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_28fa78:
    // 0x28fa78: 0x2a21023  subu        $v0, $s5, $v0
    ctx->pc = 0x28fa78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_28fa7c:
    // 0x28fa7c: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x28fa7cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28fa80:
    // 0x28fa80: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x28fa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_28fa84:
    // 0x28fa84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28fa84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28fa88:
    // 0x28fa88: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x28fa88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_28fa8c:
    // 0x28fa8c: 0x3c21823  subu        $v1, $fp, $v0
    ctx->pc = 0x28fa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_28fa90:
    // 0x28fa90: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x28fa90u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_28fa94:
    // 0x28fa94: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x28fa94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_28fa98:
    // 0x28fa98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28fa98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28fa9c:
    // 0x28fa9c: 0xc6006620  lwc1        $f0, 0x6620($s0)
    ctx->pc = 0x28fa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28faa0:
    // 0x28faa0: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x28faa0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_28faa4:
    // 0x28faa4: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x28faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
label_28faa8:
    // 0x28faa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28faa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28faac:
    // 0x28faac: 0x0  nop
    ctx->pc = 0x28faacu;
    // NOP
label_28fab0:
    // 0x28fab0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x28fab0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_28fab4:
    // 0x28fab4: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x28fab4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28fab8:
    // 0x28fab8: 0x0  nop
    ctx->pc = 0x28fab8u;
    // NOP
label_28fabc:
    // 0x28fabc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28fabcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28fac0:
    // 0x28fac0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x28fac0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_28fac4:
    // 0x28fac4: 0xc047f7e  jal         func_11FDF8
label_28fac8:
    if (ctx->pc == 0x28FAC8u) {
        ctx->pc = 0x28FACCu;
        goto label_28facc;
    }
    ctx->pc = 0x28FAC4u;
    SET_GPR_U32(ctx, 31, 0x28FACCu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28FAC4u, 0x28FACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FACCu;
label_28facc:
    // 0x28facc: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x28faccu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28fad0:
    // 0x28fad0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x28fad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_28fad4:
    // 0x28fad4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28fad4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28fad8:
    // 0x28fad8: 0xc6006620  lwc1        $f0, 0x6620($s0)
    ctx->pc = 0x28fad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28fadc:
    // 0x28fadc: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x28fadcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_28fae0:
    // 0x28fae0: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x28fae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
label_28fae4:
    // 0x28fae4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28fae4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28fae8:
    // 0x28fae8: 0x0  nop
    ctx->pc = 0x28fae8u;
    // NOP
label_28faec:
    // 0x28faec: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x28faecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_28faf0:
    // 0x28faf0: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x28faf0u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28faf4:
    // 0x28faf4: 0x0  nop
    ctx->pc = 0x28faf4u;
    // NOP
label_28faf8:
    // 0x28faf8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28faf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28fafc:
    // 0x28fafc: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x28fafcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_28fb00:
    // 0x28fb00: 0xc047f7e  jal         func_11FDF8
label_28fb04:
    if (ctx->pc == 0x28FB04u) {
        ctx->pc = 0x28FB08u;
        goto label_28fb08;
    }
    ctx->pc = 0x28FB00u;
    SET_GPR_U32(ctx, 31, 0x28FB08u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28FB00u, 0x28FB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FB08u;
label_28fb08:
    // 0x28fb08: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28fb08u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28fb0c:
    // 0x28fb0c: 0x7060be28  paddub      $s7, $v1, $zero
    ctx->pc = 0x28fb0cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_28fb10:
    // 0x28fb10: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x28fb10u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28fb14:
    // 0x28fb14: 0x0  nop
    ctx->pc = 0x28fb14u;
    // NOP
label_28fb18:
    // 0x28fb18: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x28fb18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_28fb1c:
    // 0x28fb1c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x28fb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_28fb20:
    // 0x28fb20: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x28fb20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_28fb24:
    // 0x28fb24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28fb24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28fb28:
    // 0x28fb28: 0x0  nop
    ctx->pc = 0x28fb28u;
    // NOP
label_28fb2c:
    // 0x28fb2c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x28fb2cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_28fb30:
    // 0x28fb30: 0xc047f7e  jal         func_11FDF8
label_28fb34:
    if (ctx->pc == 0x28FB34u) {
        ctx->pc = 0x28FB38u;
        goto label_28fb38;
    }
    ctx->pc = 0x28FB30u;
    SET_GPR_U32(ctx, 31, 0x28FB38u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28FB30u, 0x28FB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FB38u;
label_28fb38:
    // 0x28fb38: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x28fb38u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28fb3c:
    // 0x28fb3c: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x28fb3cu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28fb40:
    // 0x28fb40: 0x0  nop
    ctx->pc = 0x28fb40u;
    // NOP
label_28fb44:
    // 0x28fb44: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x28fb44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_28fb48:
    // 0x28fb48: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x28fb48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
label_28fb4c:
    // 0x28fb4c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x28fb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_28fb50:
    // 0x28fb50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28fb50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28fb54:
    // 0x28fb54: 0x0  nop
    ctx->pc = 0x28fb54u;
    // NOP
label_28fb58:
    // 0x28fb58: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x28fb58u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_28fb5c:
    // 0x28fb5c: 0xc047f7e  jal         func_11FDF8
label_28fb60:
    if (ctx->pc == 0x28FB60u) {
        ctx->pc = 0x28FB64u;
        goto label_28fb64;
    }
    ctx->pc = 0x28FB5Cu;
    SET_GPR_U32(ctx, 31, 0x28FB64u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28FB5Cu, 0x28FB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FB64u;
label_28fb64:
    // 0x28fb64: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x28fb64u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28fb68:
    // 0x28fb68: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28fb68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_28fb6c:
    // 0x28fb6c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x28fb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_28fb70:
    // 0x28fb70: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x28fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
label_28fb74:
    // 0x28fb74: 0x34432b16  ori         $v1, $v0, 0x2B16
    ctx->pc = 0x28fb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
label_28fb78:
    // 0x28fb78: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x28fb78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_28fb7c:
    // 0x28fb7c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x28fb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_28fb80:
    // 0x28fb80: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28fb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_28fb84:
    // 0x28fb84: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x28fb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_28fb88:
    // 0x28fb88: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x28fb88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_28fb8c:
    // 0x28fb8c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x28fb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_28fb90:
    // 0x28fb90: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x28fb90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_28fb94:
    // 0x28fb94: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x28fb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_28fb98:
    // 0x28fb98: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x28fb98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_28fb9c:
    // 0x28fb9c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x28fb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_28fba0:
    // 0x28fba0: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x28fba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_28fba4:
    // 0x28fba4: 0x26230014  addiu       $v1, $s1, 0x14
    ctx->pc = 0x28fba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_28fba8:
    // 0x28fba8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28fba8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_28fbac:
    // 0x28fbac: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x28fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_28fbb0:
    // 0x28fbb0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x28fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_28fbb4:
    // 0x28fbb4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x28fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_28fbb8:
    // 0x28fbb8: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x28fbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_28fbbc:
    // 0x28fbbc: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x28fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_28fbc0:
    // 0x28fbc0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28fbc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_28fbc4:
    // 0x28fbc4: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x28fbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_28fbc8:
    // 0x28fbc8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28fbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_28fbcc:
    // 0x28fbcc: 0x132400  sll         $a0, $s3, 16
    ctx->pc = 0x28fbccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
label_28fbd0:
    // 0x28fbd0: 0x131a00  sll         $v1, $s3, 8
    ctx->pc = 0x28fbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
label_28fbd4:
    // 0x28fbd4: 0x2631025  or          $v0, $s3, $v1
    ctx->pc = 0x28fbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
label_28fbd8:
    // 0x28fbd8: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x28fbd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_28fbdc:
    // 0x28fbdc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_28fbe0:
    // 0x28fbe0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28fbe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_28fbe4:
    // 0x28fbe4: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x28fbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_28fbe8:
    // 0x28fbe8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28fbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_28fbec:
    // 0x28fbec: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x28fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
label_28fbf0:
    // 0x28fbf0: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x28fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
label_28fbf4:
    // 0x28fbf4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x28fbf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_28fbf8:
    // 0x28fbf8: 0x1e18c0  sll         $v1, $fp, 3
    ctx->pc = 0x28fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
label_28fbfc:
    // 0x28fbfc: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x28fbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_28fc00:
    // 0x28fc00: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x28fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_28fc04:
    // 0x28fc04: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x28fc04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_28fc08:
    // 0x28fc08: 0x26220018  addiu       $v0, $s1, 0x18
    ctx->pc = 0x28fc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_28fc0c:
    // 0x28fc0c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28fc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_28fc10:
    // 0x28fc10: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x28fc10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
label_28fc14:
    // 0x28fc14: 0x2622001c  addiu       $v0, $s1, 0x1C
    ctx->pc = 0x28fc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_28fc18:
    // 0x28fc18: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28fc18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_28fc1c:
    // 0x28fc1c: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x28fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
label_28fc20:
    // 0x28fc20: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x28fc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
label_28fc24:
    // 0x28fc24: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x28fc24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_28fc28:
    // 0x28fc28: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x28fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_28fc2c:
    // 0x28fc2c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x28fc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_28fc30:
    // 0x28fc30: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x28fc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_28fc34:
    // 0x28fc34: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x28fc34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_28fc38:
    // 0x28fc38: 0xc21825  or          $v1, $a2, $v0
    ctx->pc = 0x28fc38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_28fc3c:
    // 0x28fc3c: 0x26220024  addiu       $v0, $s1, 0x24
    ctx->pc = 0x28fc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
label_28fc40:
    // 0x28fc40: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28fc40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_28fc44:
    // 0x28fc44: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x28fc44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
label_28fc48:
    // 0x28fc48: 0x26220028  addiu       $v0, $s1, 0x28
    ctx->pc = 0x28fc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_28fc4c:
    // 0x28fc4c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28fc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_28fc50:
    // 0x28fc50: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x28fc50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_28fc54:
    // 0x28fc54: 0x2482e7a8  addiu       $v0, $a0, -0x1858
    ctx->pc = 0x28fc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961064));
label_28fc58:
    // 0x28fc58: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x28fc58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_28fc5c:
    // 0x28fc5c: 0x8e025dc4  lw          $v0, 0x5DC4($s0)
    ctx->pc = 0x28fc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24004)));
label_28fc60:
    // 0x28fc60: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_28fc64:
    if (ctx->pc == 0x28FC64u) {
        ctx->pc = 0x28FC68u;
        goto label_28fc68;
    }
    ctx->pc = 0x28FC60u;
    {
        const bool branch_taken_0x28fc60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28fc60) {
            ctx->pc = 0x28FCA0u;
            goto label_28fca0;
        }
    }
    ctx->pc = 0x28FC68u;
label_28fc68:
    // 0x28fc68: 0x8e035dc8  lw          $v1, 0x5DC8($s0)
    ctx->pc = 0x28fc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
label_28fc6c:
    // 0x28fc6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28fc70:
    // 0x28fc70: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_28fc74:
    if (ctx->pc == 0x28FC74u) {
        ctx->pc = 0x28FC78u;
        goto label_28fc78;
    }
    ctx->pc = 0x28FC70u;
    {
        const bool branch_taken_0x28fc70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28fc70) {
            ctx->pc = 0x28FCA0u;
            goto label_28fca0;
        }
    }
    ctx->pc = 0x28FC78u;
label_28fc78:
    // 0x28fc78: 0x131c00  sll         $v1, $s3, 16
    ctx->pc = 0x28fc78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
label_28fc7c:
    // 0x28fc7c: 0x131200  sll         $v0, $s3, 8
    ctx->pc = 0x28fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
label_28fc80:
    // 0x28fc80: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x28fc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_28fc84:
    // 0x28fc84: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x28fc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_28fc88:
    // 0x28fc88: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x28fc88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_28fc8c:
    // 0x28fc8c: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x28fc8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_28fc90:
    // 0x28fc90: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x28fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_28fc94:
    // 0x28fc94: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28fc94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_28fc98:
    // 0x28fc98: 0x10000022  b           . + 4 + (0x22 << 2)
label_28fc9c:
    if (ctx->pc == 0x28FC9Cu) {
        ctx->pc = 0x28FCA0u;
        goto label_28fca0;
    }
    ctx->pc = 0x28FC98u;
    {
        const bool branch_taken_0x28fc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fc98) {
            ctx->pc = 0x28FD24u;
            goto label_28fd24;
        }
    }
    ctx->pc = 0x28FCA0u;
label_28fca0:
    // 0x28fca0: 0xc6015e00  lwc1        $f1, 0x5E00($s0)
    ctx->pc = 0x28fca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28fca4:
    // 0x28fca4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28fca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_28fca8:
    // 0x28fca8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28fca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28fcac:
    // 0x28fcac: 0x0  nop
    ctx->pc = 0x28fcacu;
    // NOP
label_28fcb0:
    // 0x28fcb0: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x28fcb0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_28fcb4:
    // 0x28fcb4: 0xc045630  jal         func_1158C0
label_28fcb8:
    if (ctx->pc == 0x28FCB8u) {
        ctx->pc = 0x28FCBCu;
        goto label_28fcbc;
    }
    ctx->pc = 0x28FCB4u;
    SET_GPR_U32(ctx, 31, 0x28FCBCu);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x28FCB4u, 0x28FCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FCBCu;
label_28fcbc:
    // 0x28fcbc: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
label_28fcc0:
    if (ctx->pc == 0x28FCC0u) {
        ctx->pc = 0x28FCC4u;
        goto label_28fcc4;
    }
    ctx->pc = 0x28FCBCu;
    {
        const bool branch_taken_0x28fcbc = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x28fcbc) {
            ctx->pc = 0x28FCD8u;
            goto label_28fcd8;
        }
    }
    ctx->pc = 0x28FCC4u;
label_28fcc4:
    // 0x28fcc4: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x28fcc4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28fcc8:
    // 0x28fcc8: 0x0  nop
    ctx->pc = 0x28fcc8u;
    // NOP
label_28fccc:
    // 0x28fccc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28fcccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_28fcd0:
    // 0x28fcd0: 0x10000008  b           . + 4 + (0x8 << 2)
label_28fcd4:
    if (ctx->pc == 0x28FCD4u) {
        ctx->pc = 0x28FCD8u;
        goto label_28fcd8;
    }
    ctx->pc = 0x28FCD0u;
    {
        const bool branch_taken_0x28fcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fcd0) {
            ctx->pc = 0x28FCF4u;
            goto label_28fcf4;
        }
    }
    ctx->pc = 0x28FCD8u;
label_28fcd8:
    // 0x28fcd8: 0x133042  srl         $a2, $s3, 1
    ctx->pc = 0x28fcd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
label_28fcdc:
    // 0x28fcdc: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x28fcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_28fce0:
    // 0x28fce0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x28fce0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_28fce4:
    // 0x28fce4: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x28fce4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28fce8:
    // 0x28fce8: 0x0  nop
    ctx->pc = 0x28fce8u;
    // NOP
label_28fcec:
    // 0x28fcec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28fcecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_28fcf0:
    // 0x28fcf0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x28fcf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_28fcf4:
    // 0x28fcf4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x28fcf4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_28fcf8:
    // 0x28fcf8: 0xc047fa2  jal         func_11FE88
label_28fcfc:
    if (ctx->pc == 0x28FCFCu) {
        ctx->pc = 0x28FD00u;
        goto label_28fd00;
    }
    ctx->pc = 0x28FCF8u;
    SET_GPR_U32(ctx, 31, 0x28FD00u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x28FCF8u, 0x28FD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FD00u;
label_28fd00:
    // 0x28fd00: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x28fd00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
label_28fd04:
    // 0x28fd04: 0x131c00  sll         $v1, $s3, 16
    ctx->pc = 0x28fd04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
label_28fd08:
    // 0x28fd08: 0x132200  sll         $a0, $s3, 8
    ctx->pc = 0x28fd08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
label_28fd0c:
    // 0x28fd0c: 0x2641025  or          $v0, $s3, $a0
    ctx->pc = 0x28fd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 4));
label_28fd10:
    // 0x28fd10: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28fd10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_28fd14:
    // 0x28fd14: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28fd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_28fd18:
    // 0x28fd18: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28fd18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_28fd1c:
    // 0x28fd1c: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x28fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_28fd20:
    // 0x28fd20: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28fd20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_28fd24:
    // 0x28fd24: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x28fd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_28fd28:
    // 0x28fd28: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28fd28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28fd2c:
    // 0x28fd2c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x28fd2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_28fd30:
    // 0x28fd30: 0xc05dbd8  jal         func_176F60
label_28fd34:
    if (ctx->pc == 0x28FD34u) {
        ctx->pc = 0x28FD38u;
        goto label_28fd38;
    }
    ctx->pc = 0x28FD30u;
    SET_GPR_U32(ctx, 31, 0x28FD38u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28FD30u, 0x28FD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FD38u;
label_28fd38:
    // 0x28fd38: 0x2631002c  addiu       $s1, $s1, 0x2C
    ctx->pc = 0x28fd38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
label_28fd3c:
    // 0x28fd3c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28fd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_28fd40:
    // 0x28fd40: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x28fd40u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_28fd44:
    // 0x28fd44: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x28fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_28fd48:
    // 0x28fd48: 0x34431009  ori         $v1, $v0, 0x1009
    ctx->pc = 0x28fd48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
label_28fd4c:
    // 0x28fd4c: 0xaec30004  sw          $v1, 0x4($s6)
    ctx->pc = 0x28fd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 3));
label_28fd50:
    // 0x28fd50: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x28fd50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_28fd54:
    // 0x28fd54: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x28fd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
label_28fd58:
    // 0x28fd58: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x28fd58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_28fd5c:
    // 0x28fd5c: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x28fd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
label_28fd60:
    // 0x28fd60: 0x3446000a  ori         $a2, $v0, 0xA
    ctx->pc = 0x28fd60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_28fd64:
    // 0x28fd64: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x28fd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_28fd68:
    // 0x28fd68: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28fd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_28fd6c:
    // 0x28fd6c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x28fd6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_28fd70:
    // 0x28fd70: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x28fd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
label_28fd74:
    // 0x28fd74: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x28fd74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_28fd78:
    // 0x28fd78: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x28fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_28fd7c:
    // 0x28fd7c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x28fd7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_28fd80:
    // 0x28fd80: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x28fd80u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_28fd84:
    // 0x28fd84: 0x31638  dsll        $v0, $v1, 24
    ctx->pc = 0x28fd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 24);
label_28fd88:
    // 0x28fd88: 0x461825  or          $v1, $v0, $a2
    ctx->pc = 0x28fd88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_28fd8c:
    // 0x28fd8c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x28fd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_28fd90:
    // 0x28fd90: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x28fd90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
label_28fd94:
    // 0x28fd94: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x28fd94u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_28fd98:
    // 0x28fd98: 0x610bc  dsll32      $v0, $a2, 2
    ctx->pc = 0x28fd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 2));
label_28fd9c:
    // 0x28fd9c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x28fd9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_28fda0:
    // 0x28fda0: 0xfec30008  sd          $v1, 0x8($s6)
    ctx->pc = 0x28fda0u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 3));
label_28fda4:
    // 0x28fda4: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x28fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_28fda8:
    // 0x28fda8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28fda8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28fdac:
    // 0x28fdac: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x28fdacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
label_28fdb0:
    // 0x28fdb0: 0xc05dbd8  jal         func_176F60
label_28fdb4:
    if (ctx->pc == 0x28FDB4u) {
        ctx->pc = 0x28FDB8u;
        goto label_28fdb8;
    }
    ctx->pc = 0x28FDB0u;
    SET_GPR_U32(ctx, 31, 0x28FDB8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28FDB0u, 0x28FDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FDB8u;
label_28fdb8:
    // 0x28fdb8: 0x26c30010  addiu       $v1, $s6, 0x10
    ctx->pc = 0x28fdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_28fdbc:
    // 0x28fdbc: 0x7060b628  paddub      $s6, $v1, $zero
    ctx->pc = 0x28fdbcu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_28fdc0:
    // 0x28fdc0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28fdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_28fdc4:
    // 0x28fdc4: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x28fdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_28fdc8:
    // 0x28fdc8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x28fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_28fdcc:
    // 0x28fdcc: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x28fdccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
label_28fdd0:
    // 0x28fdd0: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x28fdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_28fdd4:
    // 0x28fdd4: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x28fdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_28fdd8:
    // 0x28fdd8: 0xfe830008  sd          $v1, 0x8($s4)
    ctx->pc = 0x28fdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 3));
label_28fddc:
    // 0x28fddc: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x28fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_28fde0:
    // 0x28fde0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28fde0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28fde4:
    // 0x28fde4: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x28fde4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_28fde8:
    // 0x28fde8: 0xc05dbd8  jal         func_176F60
label_28fdec:
    if (ctx->pc == 0x28FDECu) {
        ctx->pc = 0x28FDF0u;
        goto label_28fdf0;
    }
    ctx->pc = 0x28FDE8u;
    SET_GPR_U32(ctx, 31, 0x28FDF0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28FDE8u, 0x28FDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FDF0u;
label_28fdf0:
    // 0x28fdf0: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x28fdf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_28fdf4:
    // 0x28fdf4: 0x70c0a628  paddub      $s4, $a2, $zero
    ctx->pc = 0x28fdf4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_28fdf8:
    // 0x28fdf8: 0x8e035dc8  lw          $v1, 0x5DC8($s0)
    ctx->pc = 0x28fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
label_28fdfc:
    // 0x28fdfc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x28fdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_28fe00:
    // 0x28fe00: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_28fe04:
    if (ctx->pc == 0x28FE04u) {
        ctx->pc = 0x28FE08u;
        goto label_28fe08;
    }
    ctx->pc = 0x28FE00u;
    {
        const bool branch_taken_0x28fe00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28fe00) {
            ctx->pc = 0x28FE54u;
            goto label_28fe54;
        }
    }
    ctx->pc = 0x28FE08u;
label_28fe08:
    // 0x28fe08: 0x8e025dcc  lw          $v0, 0x5DCC($s0)
    ctx->pc = 0x28fe08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24012)));
label_28fe0c:
    // 0x28fe0c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x28fe0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_28fe10:
    // 0x28fe10: 0x14470010  bne         $v0, $a3, . + 4 + (0x10 << 2)
label_28fe14:
    if (ctx->pc == 0x28FE14u) {
        ctx->pc = 0x28FE18u;
        goto label_28fe18;
    }
    ctx->pc = 0x28FE10u;
    {
        const bool branch_taken_0x28fe10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x28fe10) {
            ctx->pc = 0x28FE54u;
            goto label_28fe54;
        }
    }
    ctx->pc = 0x28FE18u;
label_28fe18:
    // 0x28fe18: 0xc60c5e00  lwc1        $f12, 0x5E00($s0)
    ctx->pc = 0x28fe18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_28fe1c:
    // 0x28fe1c: 0xc047fe2  jal         func_11FF88
label_28fe20:
    if (ctx->pc == 0x28FE20u) {
        ctx->pc = 0x28FE24u;
        goto label_28fe24;
    }
    ctx->pc = 0x28FE1Cu;
    SET_GPR_U32(ctx, 31, 0x28FE24u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x28FE1Cu, 0x28FE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FE24u;
label_28fe24:
    // 0x28fe24: 0x3c064060  lui         $a2, 0x4060
    ctx->pc = 0x28fe24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16480 << 16));
label_28fe28:
    // 0x28fe28: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x28fe28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
label_28fe2c:
    // 0x28fe2c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28fe2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_28fe30:
    // 0x28fe30: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x28fe30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28fe34:
    // 0x28fe34: 0xc047af0  jal         func_11EBC0
label_28fe38:
    if (ctx->pc == 0x28FE38u) {
        ctx->pc = 0x28FE3Cu;
        goto label_28fe3c;
    }
    ctx->pc = 0x28FE34u;
    SET_GPR_U32(ctx, 31, 0x28FE3Cu);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x28FE34u, 0x28FE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FE3Cu;
label_28fe3c:
    // 0x28fe3c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28fe3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28fe40:
    // 0x28fe40: 0xc047ca2  jal         func_11F288
label_28fe44:
    if (ctx->pc == 0x28FE44u) {
        ctx->pc = 0x28FE48u;
        goto label_28fe48;
    }
    ctx->pc = 0x28FE40u;
    SET_GPR_U32(ctx, 31, 0x28FE48u);
    ctx->pc = 0x11F288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F288u, 0x28FE40u, 0x28FE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FE48u;
label_28fe48:
    // 0x28fe48: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x28fe48u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28fe4c:
    // 0x28fe4c: 0x10000010  b           . + 4 + (0x10 << 2)
label_28fe50:
    if (ctx->pc == 0x28FE50u) {
        ctx->pc = 0x28FE54u;
        goto label_28fe54;
    }
    ctx->pc = 0x28FE4Cu;
    {
        const bool branch_taken_0x28fe4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fe4c) {
            ctx->pc = 0x28FE90u;
            goto label_28fe90;
        }
    }
    ctx->pc = 0x28FE54u;
label_28fe54:
    // 0x28fe54: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x28fe54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_28fe58:
    // 0x28fe58: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28fe58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28fe5c:
    // 0x28fe5c: 0xc6005e00  lwc1        $f0, 0x5E00($s0)
    ctx->pc = 0x28fe5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28fe60:
    // 0x28fe60: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28fe60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_28fe64:
    // 0x28fe64: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_28fe68:
    // 0x28fe68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28fe68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28fe6c:
    // 0x28fe6c: 0x0  nop
    ctx->pc = 0x28fe6cu;
    // NOP
label_28fe70:
    // 0x28fe70: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x28fe70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_28fe74:
    // 0x28fe74: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x28fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
label_28fe78:
    // 0x28fe78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28fe78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28fe7c:
    // 0x28fe7c: 0x0  nop
    ctx->pc = 0x28fe7cu;
    // NOP
label_28fe80:
    // 0x28fe80: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x28fe80u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_28fe84:
    // 0x28fe84: 0xc047fa2  jal         func_11FE88
label_28fe88:
    if (ctx->pc == 0x28FE88u) {
        ctx->pc = 0x28FE8Cu;
        goto label_28fe8c;
    }
    ctx->pc = 0x28FE84u;
    SET_GPR_U32(ctx, 31, 0x28FE8Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x28FE84u, 0x28FE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FE8Cu;
label_28fe8c:
    // 0x28fe8c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x28fe8cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28fe90:
    // 0x28fe90: 0x92025e04  lbu         $v0, 0x5E04($s0)
    ctx->pc = 0x28fe90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24068)));
label_28fe94:
    // 0x28fe94: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x28fe94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_28fe98:
    // 0x28fe98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28fe98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28fe9c:
    // 0x28fe9c: 0x14c30010  bne         $a2, $v1, . + 4 + (0x10 << 2)
label_28fea0:
    if (ctx->pc == 0x28FEA0u) {
        ctx->pc = 0x28FEA4u;
        goto label_28fea4;
    }
    ctx->pc = 0x28FE9Cu;
    {
        const bool branch_taken_0x28fe9c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x28fe9c) {
            ctx->pc = 0x28FEE0u;
            goto label_28fee0;
        }
    }
    ctx->pc = 0x28FEA4u;
label_28fea4:
    // 0x28fea4: 0xc60c5e00  lwc1        $f12, 0x5E00($s0)
    ctx->pc = 0x28fea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_28fea8:
    // 0x28fea8: 0xc047fe2  jal         func_11FF88
label_28feac:
    if (ctx->pc == 0x28FEACu) {
        ctx->pc = 0x28FEB0u;
        goto label_28feb0;
    }
    ctx->pc = 0x28FEA8u;
    SET_GPR_U32(ctx, 31, 0x28FEB0u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x28FEA8u, 0x28FEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FEB0u;
label_28feb0:
    // 0x28feb0: 0x3c064060  lui         $a2, 0x4060
    ctx->pc = 0x28feb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16480 << 16));
label_28feb4:
    // 0x28feb4: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x28feb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
label_28feb8:
    // 0x28feb8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28feb8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_28febc:
    // 0x28febc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x28febcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28fec0:
    // 0x28fec0: 0xc047af0  jal         func_11EBC0
label_28fec4:
    if (ctx->pc == 0x28FEC4u) {
        ctx->pc = 0x28FEC8u;
        goto label_28fec8;
    }
    ctx->pc = 0x28FEC0u;
    SET_GPR_U32(ctx, 31, 0x28FEC8u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x28FEC0u, 0x28FEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FEC8u;
label_28fec8:
    // 0x28fec8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28fec8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28fecc:
    // 0x28fecc: 0xc047ca2  jal         func_11F288
label_28fed0:
    if (ctx->pc == 0x28FED0u) {
        ctx->pc = 0x28FED4u;
        goto label_28fed4;
    }
    ctx->pc = 0x28FECCu;
    SET_GPR_U32(ctx, 31, 0x28FED4u);
    ctx->pc = 0x11F288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F288u, 0x28FECCu, 0x28FED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FED4u;
label_28fed4:
    // 0x28fed4: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x28fed4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28fed8:
    // 0x28fed8: 0x10000015  b           . + 4 + (0x15 << 2)
label_28fedc:
    if (ctx->pc == 0x28FEDCu) {
        ctx->pc = 0x28FEE0u;
        goto label_28fee0;
    }
    ctx->pc = 0x28FED8u;
    {
        const bool branch_taken_0x28fed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fed8) {
            ctx->pc = 0x28FF30u;
            goto label_28ff30;
        }
    }
    ctx->pc = 0x28FEE0u;
label_28fee0:
    // 0x28fee0: 0x92035e04  lbu         $v1, 0x5E04($s0)
    ctx->pc = 0x28fee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24068)));
label_28fee4:
    // 0x28fee4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x28fee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_28fee8:
    // 0x28fee8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28feec:
    // 0x28feec: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_28fef0:
    if (ctx->pc == 0x28FEF0u) {
        ctx->pc = 0x28FEF4u;
        goto label_28fef4;
    }
    ctx->pc = 0x28FEECu;
    {
        const bool branch_taken_0x28feec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28feec) {
            ctx->pc = 0x28FF30u;
            goto label_28ff30;
        }
    }
    ctx->pc = 0x28FEF4u;
label_28fef4:
    // 0x28fef4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x28fef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_28fef8:
    // 0x28fef8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28fef8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28fefc:
    // 0x28fefc: 0xc6005e00  lwc1        $f0, 0x5E00($s0)
    ctx->pc = 0x28fefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ff00:
    // 0x28ff00: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28ff00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_28ff04:
    // 0x28ff04: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_28ff08:
    // 0x28ff08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ff08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28ff0c:
    // 0x28ff0c: 0x0  nop
    ctx->pc = 0x28ff0cu;
    // NOP
label_28ff10:
    // 0x28ff10: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x28ff10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_28ff14:
    // 0x28ff14: 0x3c064300  lui         $a2, 0x4300
    ctx->pc = 0x28ff14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17152 << 16));
label_28ff18:
    // 0x28ff18: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x28ff18u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28ff1c:
    // 0x28ff1c: 0x0  nop
    ctx->pc = 0x28ff1cu;
    // NOP
label_28ff20:
    // 0x28ff20: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x28ff20u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_28ff24:
    // 0x28ff24: 0xc047fa2  jal         func_11FE88
label_28ff28:
    if (ctx->pc == 0x28FF28u) {
        ctx->pc = 0x28FF2Cu;
        goto label_28ff2c;
    }
    ctx->pc = 0x28FF24u;
    SET_GPR_U32(ctx, 31, 0x28FF2Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x28FF24u, 0x28FF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FF2Cu;
label_28ff2c:
    // 0x28ff2c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x28ff2cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28ff30:
    // 0x28ff30: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x28ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_28ff34:
    // 0x28ff34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28ff34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28ff38:
    // 0x28ff38: 0xc6006620  lwc1        $f0, 0x6620($s0)
    ctx->pc = 0x28ff38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ff3c:
    // 0x28ff3c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x28ff3cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_28ff40:
    // 0x28ff40: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x28ff40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_28ff44:
    // 0x28ff44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28ff44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28ff48:
    // 0x28ff48: 0x0  nop
    ctx->pc = 0x28ff48u;
    // NOP
label_28ff4c:
    // 0x28ff4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28ff4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28ff50:
    // 0x28ff50: 0x0  nop
    ctx->pc = 0x28ff50u;
    // NOP
label_28ff54:
    // 0x28ff54: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_28ff58:
    if (ctx->pc == 0x28FF58u) {
        ctx->pc = 0x28FF5Cu;
        goto label_28ff5c;
    }
    ctx->pc = 0x28FF54u;
    {
        const bool branch_taken_0x28ff54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28ff54) {
            ctx->pc = 0x28FFDCu;
            goto label_28ffdc;
        }
    }
    ctx->pc = 0x28FF5Cu;
label_28ff5c:
    // 0x28ff5c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x28ff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_28ff60:
    // 0x28ff60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28ff60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28ff64:
    // 0x28ff64: 0xc6006620  lwc1        $f0, 0x6620($s0)
    ctx->pc = 0x28ff64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ff68:
    // 0x28ff68: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x28ff68u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_28ff6c:
    // 0x28ff6c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x28ff6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_28ff70:
    // 0x28ff70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28ff70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28ff74:
    // 0x28ff74: 0x0  nop
    ctx->pc = 0x28ff74u;
    // NOP
label_28ff78:
    // 0x28ff78: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x28ff78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_28ff7c:
    // 0x28ff7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_28ff80:
    // 0x28ff80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ff80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28ff84:
    // 0x28ff84: 0x0  nop
    ctx->pc = 0x28ff84u;
    // NOP
label_28ff88:
    // 0x28ff88: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x28ff88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_28ff8c:
    // 0x28ff8c: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
label_28ff90:
    if (ctx->pc == 0x28FF90u) {
        ctx->pc = 0x28FF94u;
        goto label_28ff94;
    }
    ctx->pc = 0x28FF8Cu;
    {
        const bool branch_taken_0x28ff8c = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x28ff8c) {
            ctx->pc = 0x28FFA8u;
            goto label_28ffa8;
        }
    }
    ctx->pc = 0x28FF94u;
label_28ff94:
    // 0x28ff94: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x28ff94u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28ff98:
    // 0x28ff98: 0x0  nop
    ctx->pc = 0x28ff98u;
    // NOP
label_28ff9c:
    // 0x28ff9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28ff9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28ffa0:
    // 0x28ffa0: 0x10000008  b           . + 4 + (0x8 << 2)
label_28ffa4:
    if (ctx->pc == 0x28FFA4u) {
        ctx->pc = 0x28FFA8u;
        goto label_28ffa8;
    }
    ctx->pc = 0x28FFA0u;
    {
        const bool branch_taken_0x28ffa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ffa0) {
            ctx->pc = 0x28FFC4u;
            goto label_28ffc4;
        }
    }
    ctx->pc = 0x28FFA8u;
label_28ffa8:
    // 0x28ffa8: 0x131042  srl         $v0, $s3, 1
    ctx->pc = 0x28ffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
label_28ffac:
    // 0x28ffac: 0x32630001  andi        $v1, $s3, 0x1
    ctx->pc = 0x28ffacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_28ffb0:
    // 0x28ffb0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28ffb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_28ffb4:
    // 0x28ffb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ffb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28ffb8:
    // 0x28ffb8: 0x0  nop
    ctx->pc = 0x28ffb8u;
    // NOP
label_28ffbc:
    // 0x28ffbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28ffbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28ffc0:
    // 0x28ffc0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28ffc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28ffc4:
    // 0x28ffc4: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x28ffc4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_28ffc8:
    // 0x28ffc8: 0xc047fa2  jal         func_11FE88
label_28ffcc:
    if (ctx->pc == 0x28FFCCu) {
        ctx->pc = 0x28FFD0u;
        goto label_28ffd0;
    }
    ctx->pc = 0x28FFC8u;
    SET_GPR_U32(ctx, 31, 0x28FFD0u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x28FFC8u, 0x28FFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FFD0u;
label_28ffd0:
    // 0x28ffd0: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x28ffd0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_28ffd4:
    // 0x28ffd4: 0x10000023  b           . + 4 + (0x23 << 2)
label_28ffd8:
    if (ctx->pc == 0x28FFD8u) {
        ctx->pc = 0x28FFDCu;
        goto label_28ffdc;
    }
    ctx->pc = 0x28FFD4u;
    {
        const bool branch_taken_0x28ffd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ffd4) {
            ctx->pc = 0x290064u;
            goto label_290064;
        }
    }
    ctx->pc = 0x28FFDCu;
label_28ffdc:
    // 0x28ffdc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x28ffdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_28ffe0:
    // 0x28ffe0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28ffe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28ffe4:
    // 0x28ffe4: 0xc6006620  lwc1        $f0, 0x6620($s0)
    ctx->pc = 0x28ffe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ffe8:
    // 0x28ffe8: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x28ffe8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_28ffec:
    // 0x28ffec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28ffecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_28fff0:
    // 0x28fff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28fff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28fff4:
    // 0x28fff4: 0x0  nop
    ctx->pc = 0x28fff4u;
    // NOP
label_28fff8:
    // 0x28fff8: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x28fff8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_28fffc:
    // 0x28fffc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x28fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_290000:
    // 0x290000: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x290000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_290004:
    // 0x290004: 0x0  nop
    ctx->pc = 0x290004u;
    // NOP
label_290008:
    // 0x290008: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x290008u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_29000c:
    // 0x29000c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29000cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_290010:
    // 0x290010: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x290010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_290014:
    // 0x290014: 0x0  nop
    ctx->pc = 0x290014u;
    // NOP
label_290018:
    // 0x290018: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x290018u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_29001c:
    // 0x29001c: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
label_290020:
    if (ctx->pc == 0x290020u) {
        ctx->pc = 0x290024u;
        goto label_290024;
    }
    ctx->pc = 0x29001Cu;
    {
        const bool branch_taken_0x29001c = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x29001c) {
            ctx->pc = 0x290038u;
            goto label_290038;
        }
    }
    ctx->pc = 0x290024u;
label_290024:
    // 0x290024: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x290024u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_290028:
    // 0x290028: 0x0  nop
    ctx->pc = 0x290028u;
    // NOP
label_29002c:
    // 0x29002c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29002cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_290030:
    // 0x290030: 0x10000008  b           . + 4 + (0x8 << 2)
label_290034:
    if (ctx->pc == 0x290034u) {
        ctx->pc = 0x290038u;
        goto label_290038;
    }
    ctx->pc = 0x290030u;
    {
        const bool branch_taken_0x290030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290030) {
            ctx->pc = 0x290054u;
            goto label_290054;
        }
    }
    ctx->pc = 0x290038u;
label_290038:
    // 0x290038: 0x131842  srl         $v1, $s3, 1
    ctx->pc = 0x290038u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
label_29003c:
    // 0x29003c: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x29003cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_290040:
    // 0x290040: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x290040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_290044:
    // 0x290044: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x290044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_290048:
    // 0x290048: 0x0  nop
    ctx->pc = 0x290048u;
    // NOP
label_29004c:
    // 0x29004c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29004cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_290050:
    // 0x290050: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x290050u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_290054:
    // 0x290054: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x290054u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_290058:
    // 0x290058: 0xc047fa2  jal         func_11FE88
label_29005c:
    if (ctx->pc == 0x29005Cu) {
        ctx->pc = 0x290060u;
        goto label_290060;
    }
    ctx->pc = 0x290058u;
    SET_GPR_U32(ctx, 31, 0x290060u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x290058u, 0x290060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290060u;
label_290060:
    // 0x290060: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x290060u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_290064:
    // 0x290064: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x290064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
label_290068:
    // 0x290068: 0x30460004  andi        $a2, $v0, 0x4
    ctx->pc = 0x290068u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_29006c:
    // 0x29006c: 0x14c000f9  bnez        $a2, . + 4 + (0xF9 << 2)
label_290070:
    if (ctx->pc == 0x290070u) {
        ctx->pc = 0x290074u;
        goto label_290074;
    }
    ctx->pc = 0x29006Cu;
    {
        const bool branch_taken_0x29006c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x29006c) {
            ctx->pc = 0x290454u;
            goto label_290454;
        }
    }
    ctx->pc = 0x290074u;
label_290074:
    // 0x290074: 0x82025de9  lb          $v0, 0x5DE9($s0)
    ctx->pc = 0x290074u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24041)));
label_290078:
    // 0x290078: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x290078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_29007c:
    // 0x29007c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x29007cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_290080:
    // 0x290080: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x290080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_290084:
    // 0x290084: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x290084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_290088:
    // 0x290088: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29008c:
    // 0x29008c: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x29008cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_290090:
    // 0x290090: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x290090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_290094:
    // 0x290094: 0x24626090  addiu       $v0, $v1, 0x6090
    ctx->pc = 0x290094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 24720));
label_290098:
    // 0x290098: 0x469021  addu        $s2, $v0, $a2
    ctx->pc = 0x290098u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_29009c:
    // 0x29009c: 0x241501a2  addiu       $s5, $zero, 0x1A2
    ctx->pc = 0x29009cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 418));
label_2900a0:
    // 0x2900a0: 0x241e011b  addiu       $fp, $zero, 0x11B
    ctx->pc = 0x2900a0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 283));
label_2900a4:
    // 0x2900a4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2900a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2900a8:
    // 0x2900a8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2900a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2900ac:
    // 0x2900ac: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2900acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2900b0:
    // 0x2900b0: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x2900b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
label_2900b4:
    // 0x2900b4: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2900b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2900b8:
    // 0x2900b8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2900b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2900bc:
    // 0x2900bc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2900bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2900c0:
    // 0x2900c0: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x2900c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
label_2900c4:
    // 0x2900c4: 0x8fa600f4  lw          $a2, 0xF4($sp)
    ctx->pc = 0x2900c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_2900c8:
    // 0x2900c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2900c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2900cc:
    // 0x2900cc: 0x61043  sra         $v0, $a2, 1
    ctx->pc = 0x2900ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
label_2900d0:
    // 0x2900d0: 0x2a2b821  addu        $s7, $s5, $v0
    ctx->pc = 0x2900d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2900d4:
    // 0x2900d4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2900d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_2900d8:
    // 0x2900d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2900d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2900dc:
    // 0x2900dc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2900dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_2900e0:
    // 0x2900e0: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x2900e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_2900e4:
    // 0x2900e4: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x2900e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
label_2900e8:
    // 0x2900e8: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x2900e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_2900ec:
    // 0x2900ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2900ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2900f0:
    // 0x2900f0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2900f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_2900f4:
    // 0x2900f4: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x2900f4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2900f8:
    // 0x2900f8: 0x70c01628  paddub      $v0, $a2, $zero
    ctx->pc = 0x2900f8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2900fc:
    // 0x2900fc: 0x2a2a823  subu        $s5, $s5, $v0
    ctx->pc = 0x2900fcu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_290100:
    // 0x290100: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x290100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_290104:
    // 0x290104: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x290104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_290108:
    // 0x290108: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x290108u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
label_29010c:
    // 0x29010c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x29010cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_290110:
    // 0x290110: 0x3c31823  subu        $v1, $fp, $v1
    ctx->pc = 0x290110u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_290114:
    // 0x290114: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x290114u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_290118:
    // 0x290118: 0x171023  negu        $v0, $s7
    ctx->pc = 0x290118u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
label_29011c:
    // 0x29011c: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x29011cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_290120:
    // 0x290120: 0x15b823  negu        $s7, $s5
    ctx->pc = 0x290120u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 21)));
label_290124:
    // 0x290124: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x290124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_290128:
    // 0x290128: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x290128u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_29012c:
    // 0x29012c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x29012cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_290130:
    // 0x290130: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x290130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_290134:
    // 0x290134: 0xc6006620  lwc1        $f0, 0x6620($s0)
    ctx->pc = 0x290134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_290138:
    // 0x290138: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x290138u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_29013c:
    // 0x29013c: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x29013cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
label_290140:
    // 0x290140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x290140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_290144:
    // 0x290144: 0x0  nop
    ctx->pc = 0x290144u;
    // NOP
label_290148:
    // 0x290148: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x290148u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_29014c:
    // 0x29014c: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x29014cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_290150:
    // 0x290150: 0x0  nop
    ctx->pc = 0x290150u;
    // NOP
label_290154:
    // 0x290154: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x290154u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_290158:
    // 0x290158: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x290158u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_29015c:
    // 0x29015c: 0xc047f7e  jal         func_11FDF8
label_290160:
    if (ctx->pc == 0x290160u) {
        ctx->pc = 0x290164u;
        goto label_290164;
    }
    ctx->pc = 0x29015Cu;
    SET_GPR_U32(ctx, 31, 0x290164u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x29015Cu, 0x290164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290164u;
label_290164:
    // 0x290164: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x290164u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_290168:
    // 0x290168: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x290168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_29016c:
    // 0x29016c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29016cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_290170:
    // 0x290170: 0xc6006620  lwc1        $f0, 0x6620($s0)
    ctx->pc = 0x290170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_290174:
    // 0x290174: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x290174u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_290178:
    // 0x290178: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x290178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
label_29017c:
    // 0x29017c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29017cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_290180:
    // 0x290180: 0x0  nop
    ctx->pc = 0x290180u;
    // NOP
label_290184:
    // 0x290184: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x290184u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_290188:
    // 0x290188: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x290188u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29018c:
    // 0x29018c: 0x0  nop
    ctx->pc = 0x29018cu;
    // NOP
label_290190:
    // 0x290190: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x290190u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_290194:
    // 0x290194: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x290194u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_290198:
    // 0x290198: 0xc047f7e  jal         func_11FDF8
label_29019c:
    if (ctx->pc == 0x29019Cu) {
        ctx->pc = 0x2901A0u;
        goto label_2901a0;
    }
    ctx->pc = 0x290198u;
    SET_GPR_U32(ctx, 31, 0x2901A0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x290198u, 0x2901A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2901A0u;
label_2901a0:
    // 0x2901a0: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x2901a0u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2901a4:
    // 0x2901a4: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x2901a4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2901a8:
    // 0x2901a8: 0x0  nop
    ctx->pc = 0x2901a8u;
    // NOP
label_2901ac:
    // 0x2901ac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2901acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2901b0:
    // 0x2901b0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2901b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_2901b4:
    // 0x2901b4: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x2901b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2901b8:
    // 0x2901b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2901b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2901bc:
    // 0x2901bc: 0x0  nop
    ctx->pc = 0x2901bcu;
    // NOP
label_2901c0:
    // 0x2901c0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2901c0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2901c4:
    // 0x2901c4: 0xc047f7e  jal         func_11FDF8
label_2901c8:
    if (ctx->pc == 0x2901C8u) {
        ctx->pc = 0x2901CCu;
        goto label_2901cc;
    }
    ctx->pc = 0x2901C4u;
    SET_GPR_U32(ctx, 31, 0x2901CCu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2901C4u, 0x2901CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2901CCu;
label_2901cc:
    // 0x2901cc: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x2901ccu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2901d0:
    // 0x2901d0: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x2901d0u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2901d4:
    // 0x2901d4: 0x0  nop
    ctx->pc = 0x2901d4u;
    // NOP
label_2901d8:
    // 0x2901d8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2901d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2901dc:
    // 0x2901dc: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2901dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_2901e0:
    // 0x2901e0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2901e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2901e4:
    // 0x2901e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2901e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2901e8:
    // 0x2901e8: 0x0  nop
    ctx->pc = 0x2901e8u;
    // NOP
label_2901ec:
    // 0x2901ec: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2901ecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2901f0:
    // 0x2901f0: 0xc047f7e  jal         func_11FDF8
label_2901f4:
    if (ctx->pc == 0x2901F4u) {
        ctx->pc = 0x2901F8u;
        goto label_2901f8;
    }
    ctx->pc = 0x2901F0u;
    SET_GPR_U32(ctx, 31, 0x2901F8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2901F0u, 0x2901F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2901F8u;
label_2901f8:
    // 0x2901f8: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x2901f8u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2901fc:
    // 0x2901fc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2901fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_290200:
    // 0x290200: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x290200u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_290204:
    // 0x290204: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x290204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
label_290208:
    // 0x290208: 0x34422b16  ori         $v0, $v0, 0x2B16
    ctx->pc = 0x290208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
label_29020c:
    // 0x29020c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x29020cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_290210:
    // 0x290210: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x290210u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_290214:
    // 0x290214: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x290214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_290218:
    // 0x290218: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x290218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_29021c:
    // 0x29021c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x29021cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_290220:
    // 0x290220: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x290220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_290224:
    // 0x290224: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x290224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_290228:
    // 0x290228: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x290228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_29022c:
    // 0x29022c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x29022cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_290230:
    // 0x290230: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x290230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_290234:
    // 0x290234: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x290234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_290238:
    // 0x290238: 0x26220014  addiu       $v0, $s1, 0x14
    ctx->pc = 0x290238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_29023c:
    // 0x29023c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29023cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_290240:
    // 0x290240: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x290240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_290244:
    // 0x290244: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x290244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_290248:
    // 0x290248: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x290248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_29024c:
    // 0x29024c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29024cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_290250:
    // 0x290250: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x290250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_290254:
    // 0x290254: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x290254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_290258:
    // 0x290258: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x290258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_29025c:
    // 0x29025c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29025cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_290260:
    // 0x290260: 0x131400  sll         $v0, $s3, 16
    ctx->pc = 0x290260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
label_290264:
    // 0x290264: 0x131a00  sll         $v1, $s3, 8
    ctx->pc = 0x290264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
label_290268:
    // 0x290268: 0x2631825  or          $v1, $s3, $v1
    ctx->pc = 0x290268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
label_29026c:
    // 0x29026c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29026cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_290270:
    // 0x290270: 0x131e00  sll         $v1, $s3, 24
    ctx->pc = 0x290270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 24));
label_290274:
    // 0x290274: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x290274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_290278:
    // 0x290278: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x290278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_29027c:
    // 0x29027c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29027cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_290280:
    // 0x290280: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x290280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
label_290284:
    // 0x290284: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x290284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
label_290288:
    // 0x290288: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x290288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_29028c:
    // 0x29028c: 0x1e20c0  sll         $a0, $fp, 3
    ctx->pc = 0x29028cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
label_290290:
    // 0x290290: 0x24827900  addiu       $v0, $a0, 0x7900
    ctx->pc = 0x290290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
label_290294:
    // 0x290294: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x290294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_290298:
    // 0x290298: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x290298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_29029c:
    // 0x29029c: 0x26220018  addiu       $v0, $s1, 0x18
    ctx->pc = 0x29029cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_2902a0:
    // 0x2902a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2902a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2902a4:
    // 0x2902a4: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x2902a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
label_2902a8:
    // 0x2902a8: 0x2622001c  addiu       $v0, $s1, 0x1C
    ctx->pc = 0x2902a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_2902ac:
    // 0x2902ac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2902acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2902b0:
    // 0x2902b0: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x2902b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
label_2902b4:
    // 0x2902b4: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x2902b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
label_2902b8:
    // 0x2902b8: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x2902b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2902bc:
    // 0x2902bc: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x2902bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_2902c0:
    // 0x2902c0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2902c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2902c4:
    // 0x2902c4: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x2902c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_2902c8:
    // 0x2902c8: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x2902c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2902cc:
    // 0x2902cc: 0xa41825  or          $v1, $a1, $a0
    ctx->pc = 0x2902ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_2902d0:
    // 0x2902d0: 0x26220024  addiu       $v0, $s1, 0x24
    ctx->pc = 0x2902d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
label_2902d4:
    // 0x2902d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2902d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2902d8:
    // 0x2902d8: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x2902d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
label_2902dc:
    // 0x2902dc: 0x26220028  addiu       $v0, $s1, 0x28
    ctx->pc = 0x2902dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_2902e0:
    // 0x2902e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2902e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2902e4:
    // 0x2902e4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2902e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_2902e8:
    // 0x2902e8: 0x2462e7d0  addiu       $v0, $v1, -0x1830
    ctx->pc = 0x2902e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961104));
label_2902ec:
    // 0x2902ec: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2902ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2902f0:
    // 0x2902f0: 0x8e025dc4  lw          $v0, 0x5DC4($s0)
    ctx->pc = 0x2902f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24004)));
label_2902f4:
    // 0x2902f4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_2902f8:
    if (ctx->pc == 0x2902F8u) {
        ctx->pc = 0x2902FCu;
        goto label_2902fc;
    }
    ctx->pc = 0x2902F4u;
    {
        const bool branch_taken_0x2902f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2902f4) {
            ctx->pc = 0x290334u;
            goto label_290334;
        }
    }
    ctx->pc = 0x2902FCu;
label_2902fc:
    // 0x2902fc: 0x8e025dc8  lw          $v0, 0x5DC8($s0)
    ctx->pc = 0x2902fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
label_290300:
    // 0x290300: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x290300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_290304:
    // 0x290304: 0x1044000b  beq         $v0, $a0, . + 4 + (0xB << 2)
label_290308:
    if (ctx->pc == 0x290308u) {
        ctx->pc = 0x29030Cu;
        goto label_29030c;
    }
    ctx->pc = 0x290304u;
    {
        const bool branch_taken_0x290304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x290304) {
            ctx->pc = 0x290334u;
            goto label_290334;
        }
    }
    ctx->pc = 0x29030Cu;
label_29030c:
    // 0x29030c: 0x131c00  sll         $v1, $s3, 16
    ctx->pc = 0x29030cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
label_290310:
    // 0x290310: 0x131200  sll         $v0, $s3, 8
    ctx->pc = 0x290310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
label_290314:
    // 0x290314: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x290314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_290318:
    // 0x290318: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x290318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_29031c:
    // 0x29031c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29031cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_290320:
    // 0x290320: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x290320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_290324:
    // 0x290324: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x290324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_290328:
    // 0x290328: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x290328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_29032c:
    // 0x29032c: 0x10000022  b           . + 4 + (0x22 << 2)
label_290330:
    if (ctx->pc == 0x290330u) {
        ctx->pc = 0x290334u;
        goto label_290334;
    }
    ctx->pc = 0x29032Cu;
    {
        const bool branch_taken_0x29032c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29032c) {
            ctx->pc = 0x2903B8u;
            goto label_2903b8;
        }
    }
    ctx->pc = 0x290334u;
label_290334:
    // 0x290334: 0xc6015e00  lwc1        $f1, 0x5E00($s0)
    ctx->pc = 0x290334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_290338:
    // 0x290338: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x290338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_29033c:
    // 0x29033c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29033cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_290340:
    // 0x290340: 0x0  nop
    ctx->pc = 0x290340u;
    // NOP
label_290344:
    // 0x290344: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x290344u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_290348:
    // 0x290348: 0xc045630  jal         func_1158C0
label_29034c:
    if (ctx->pc == 0x29034Cu) {
        ctx->pc = 0x290350u;
        goto label_290350;
    }
    ctx->pc = 0x290348u;
    SET_GPR_U32(ctx, 31, 0x290350u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x290348u, 0x290350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290350u;
label_290350:
    // 0x290350: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
label_290354:
    if (ctx->pc == 0x290354u) {
        ctx->pc = 0x290358u;
        goto label_290358;
    }
    ctx->pc = 0x290350u;
    {
        const bool branch_taken_0x290350 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x290350) {
            ctx->pc = 0x29036Cu;
            goto label_29036c;
        }
    }
    ctx->pc = 0x290358u;
label_290358:
    // 0x290358: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x290358u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29035c:
    // 0x29035c: 0x0  nop
    ctx->pc = 0x29035cu;
    // NOP
label_290360:
    // 0x290360: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x290360u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_290364:
    // 0x290364: 0x10000008  b           . + 4 + (0x8 << 2)
label_290368:
    if (ctx->pc == 0x290368u) {
        ctx->pc = 0x29036Cu;
        goto label_29036c;
    }
    ctx->pc = 0x290364u;
    {
        const bool branch_taken_0x290364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290364) {
            ctx->pc = 0x290388u;
            goto label_290388;
        }
    }
    ctx->pc = 0x29036Cu;
label_29036c:
    // 0x29036c: 0x131042  srl         $v0, $s3, 1
    ctx->pc = 0x29036cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
label_290370:
    // 0x290370: 0x32660001  andi        $a2, $s3, 0x1
    ctx->pc = 0x290370u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_290374:
    // 0x290374: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x290374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_290378:
    // 0x290378: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x290378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29037c:
    // 0x29037c: 0x0  nop
    ctx->pc = 0x29037cu;
    // NOP
label_290380:
    // 0x290380: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x290380u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_290384:
    // 0x290384: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x290384u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_290388:
    // 0x290388: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x290388u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_29038c:
    // 0x29038c: 0xc047fa2  jal         func_11FE88
label_290390:
    if (ctx->pc == 0x290390u) {
        ctx->pc = 0x290394u;
        goto label_290394;
    }
    ctx->pc = 0x29038Cu;
    SET_GPR_U32(ctx, 31, 0x290394u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x29038Cu, 0x290394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290394u;
label_290394:
    // 0x290394: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x290394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
label_290398:
    // 0x290398: 0x131c00  sll         $v1, $s3, 16
    ctx->pc = 0x290398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
label_29039c:
    // 0x29039c: 0x131200  sll         $v0, $s3, 8
    ctx->pc = 0x29039cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
label_2903a0:
    // 0x2903a0: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x2903a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_2903a4:
    // 0x2903a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2903a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2903a8:
    // 0x2903a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2903a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2903ac:
    // 0x2903ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2903acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2903b0:
    // 0x2903b0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2903b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2903b4:
    // 0x2903b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2903b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2903b8:
    // 0x2903b8: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x2903b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_2903bc:
    // 0x2903bc: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x2903bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_2903c0:
    // 0x2903c0: 0xc05dbd8  jal         func_176F60
label_2903c4:
    if (ctx->pc == 0x2903C4u) {
        ctx->pc = 0x2903C8u;
        goto label_2903c8;
    }
    ctx->pc = 0x2903C0u;
    SET_GPR_U32(ctx, 31, 0x2903C8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x2903C0u, 0x2903C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2903C8u;
label_2903c8:
    // 0x2903c8: 0x2622002c  addiu       $v0, $s1, 0x2C
    ctx->pc = 0x2903c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
label_2903cc:
    // 0x2903cc: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2903ccu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2903d0:
    // 0x2903d0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2903d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2903d4:
    // 0x2903d4: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x2903d4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_2903d8:
    // 0x2903d8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2903d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_2903dc:
    // 0x2903dc: 0x34621009  ori         $v0, $v1, 0x1009
    ctx->pc = 0x2903dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4105);
label_2903e0:
    // 0x2903e0: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x2903e0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
label_2903e4:
    // 0x2903e4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2903e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2903e8:
    // 0x2903e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2903e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2903ec:
    // 0x2903ec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2903ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2903f0:
    // 0x2903f0: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x2903f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
label_2903f4:
    // 0x2903f4: 0x3444000a  ori         $a0, $v0, 0xA
    ctx->pc = 0x2903f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_2903f8:
    // 0x2903f8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2903f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2903fc:
    // 0x2903fc: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x2903fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_290400:
    // 0x290400: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x290400u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_290404:
    // 0x290404: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x290404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
label_290408:
    // 0x290408: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x290408u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_29040c:
    // 0x29040c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x29040cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_290410:
    // 0x290410: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x290410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_290414:
    // 0x290414: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x290414u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_290418:
    // 0x290418: 0x21e38  dsll        $v1, $v0, 24
    ctx->pc = 0x290418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 24);
label_29041c:
    // 0x29041c: 0x662025  or          $a0, $v1, $a2
    ctx->pc = 0x29041cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_290420:
    // 0x290420: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x290420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_290424:
    // 0x290424: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x290424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_290428:
    // 0x290428: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x290428u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_29042c:
    // 0x29042c: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x29042cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_290430:
    // 0x290430: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x290430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_290434:
    // 0x290434: 0xfec30008  sd          $v1, 0x8($s6)
    ctx->pc = 0x290434u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 3));
label_290438:
    // 0x290438: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x290438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_29043c:
    // 0x29043c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x29043cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_290440:
    // 0x290440: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x290440u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
label_290444:
    // 0x290444: 0xc05dbd8  jal         func_176F60
label_290448:
    if (ctx->pc == 0x290448u) {
        ctx->pc = 0x29044Cu;
        goto label_29044c;
    }
    ctx->pc = 0x290444u;
    SET_GPR_U32(ctx, 31, 0x29044Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x290444u, 0x29044Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29044Cu;
label_29044c:
    // 0x29044c: 0x26d10010  addiu       $s1, $s6, 0x10
    ctx->pc = 0x29044cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_290450:
    // 0x290450: 0x7220b628  paddub      $s6, $s1, $zero
    ctx->pc = 0x290450u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_290454:
    // 0x290454: 0x9202660d  lbu         $v0, 0x660D($s0)
    ctx->pc = 0x290454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26125)));
label_290458:
    // 0x290458: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x290458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29045c:
    // 0x29045c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29045cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_290460:
    // 0x290460: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_290464:
    if (ctx->pc == 0x290464u) {
        ctx->pc = 0x290468u;
        goto label_290468;
    }
    ctx->pc = 0x290460u;
    {
        const bool branch_taken_0x290460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x290460) {
            ctx->pc = 0x290488u;
            goto label_290488;
        }
    }
    ctx->pc = 0x290468u;
label_290468:
    // 0x290468: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x290468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_29046c:
    // 0x29046c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x29046cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_290470:
    // 0x290470: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x290470u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_290474:
    // 0x290474: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x290474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_290478:
    // 0x290478: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x290478u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_29047c:
    // 0x29047c: 0x2406008c  addiu       $a2, $zero, 0x8C
    ctx->pc = 0x29047cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_290480:
    // 0x290480: 0xc0654fc  jal         func_1953F0
label_290484:
    if (ctx->pc == 0x290484u) {
        ctx->pc = 0x290488u;
        goto label_290488;
    }
    ctx->pc = 0x290480u;
    SET_GPR_U32(ctx, 31, 0x290488u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x290480u, 0x290488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290488u;
label_290488:
    // 0x290488: 0xc6016620  lwc1        $f1, 0x6620($s0)
    ctx->pc = 0x290488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29048c:
    // 0x29048c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x29048cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_290490:
    // 0x290490: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x290490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_290494:
    // 0x290494: 0x0  nop
    ctx->pc = 0x290494u;
    // NOP
label_290498:
    // 0x290498: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x290498u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29049c:
    // 0x29049c: 0x0  nop
    ctx->pc = 0x29049cu;
    // NOP
label_2904a0:
    // 0x2904a0: 0x45000107  bc1f        . + 4 + (0x107 << 2)
label_2904a4:
    if (ctx->pc == 0x2904A4u) {
        ctx->pc = 0x2904A8u;
        goto label_2904a8;
    }
    ctx->pc = 0x2904A0u;
    {
        const bool branch_taken_0x2904a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2904a0) {
            ctx->pc = 0x2908C0u;
            goto label_2908c0;
        }
    }
    ctx->pc = 0x2904A8u;
label_2904a8:
    // 0x2904a8: 0x82025de9  lb          $v0, 0x5DE9($s0)
    ctx->pc = 0x2904a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24041)));
label_2904ac:
    // 0x2904ac: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x2904acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
label_2904b0:
    // 0x2904b0: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x2904b0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_2904b4:
    // 0x2904b4: 0x14c00102  bnez        $a2, . + 4 + (0x102 << 2)
label_2904b8:
    if (ctx->pc == 0x2904B8u) {
        ctx->pc = 0x2904BCu;
        goto label_2904bc;
    }
    ctx->pc = 0x2904B4u;
    {
        const bool branch_taken_0x2904b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2904b4) {
            ctx->pc = 0x2908C0u;
            goto label_2908c0;
        }
    }
    ctx->pc = 0x2904BCu;
label_2904bc:
    // 0x2904bc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2904bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2904c0:
    // 0x2904c0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2904c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_2904c4:
    // 0x2904c4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2904c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2904c8:
    // 0x2904c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2904c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2904cc:
    // 0x2904cc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2904ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2904d0:
    // 0x2904d0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2904d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2904d4:
    // 0x2904d4: 0x23200  sll         $a2, $v0, 8
    ctx->pc = 0x2904d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_2904d8:
    // 0x2904d8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2904d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2904dc:
    // 0x2904dc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2904dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_2904e0:
    // 0x2904e0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2904e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2904e4:
    // 0x2904e4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2904e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2904e8:
    // 0x2904e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2904e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2904ec:
    // 0x2904ec: 0x3043ff00  andi        $v1, $v0, 0xFF00
    ctx->pc = 0x2904ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
label_2904f0:
    // 0x2904f0: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2904f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_2904f4:
    // 0x2904f4: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x2904f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2904f8:
    // 0x2904f8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2904f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2904fc:
    // 0x2904fc: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2904fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 2));
label_290500:
    // 0x290500: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x290500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_290504:
    // 0x290504: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x290504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_290508:
    // 0x290508: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29050c:
    // 0x29050c: 0x146200ec  bne         $v1, $v0, . + 4 + (0xEC << 2)
label_290510:
    if (ctx->pc == 0x290510u) {
        ctx->pc = 0x290514u;
        goto label_290514;
    }
    ctx->pc = 0x29050Cu;
    {
        const bool branch_taken_0x29050c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29050c) {
            ctx->pc = 0x2908C0u;
            goto label_2908c0;
        }
    }
    ctx->pc = 0x290514u;
label_290514:
    // 0x290514: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x290514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_290518:
    // 0x290518: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x290518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_29051c:
    // 0x29051c: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x29051cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_290520:
    // 0x290520: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x290520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_290524:
    // 0x290524: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x290524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_290528:
    // 0x290528: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x290528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29052c:
    // 0x29052c: 0x23a00  sll         $a3, $v0, 8
    ctx->pc = 0x29052cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_290530:
    // 0x290530: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x290530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_290534:
    // 0x290534: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x290534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_290538:
    // 0x290538: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x290538u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_29053c:
    // 0x29053c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x29053cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_290540:
    // 0x290540: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x290540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_290544:
    // 0x290544: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x290544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
label_290548:
    // 0x290548: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x290548u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_29054c:
    // 0x29054c: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x29054cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_290550:
    // 0x290550: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x290550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_290554:
    // 0x290554: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x290554u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 2));
label_290558:
    // 0x290558: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x290558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29055c:
    // 0x29055c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x29055cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_290560:
    // 0x290560: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x290560u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_290564:
    // 0x290564: 0x0  nop
    ctx->pc = 0x290564u;
    // NOP
label_290568:
    // 0x290568: 0x0  nop
    ctx->pc = 0x290568u;
    // NOP
label_29056c:
    // 0x29056c: 0x1010  mfhi        $v0
    ctx->pc = 0x29056cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_290570:
    // 0x290570: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x290570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
label_290574:
    // 0x290574: 0x8fa600fc  lw          $a2, 0xFC($sp)
    ctx->pc = 0x290574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_290578:
    // 0x290578: 0x2cc10006  sltiu       $at, $a2, 0x6
    ctx->pc = 0x290578u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_29057c:
    // 0x29057c: 0x102000c6  beqz        $at, . + 4 + (0xC6 << 2)
label_290580:
    if (ctx->pc == 0x290580u) {
        ctx->pc = 0x290584u;
        goto label_290584;
    }
    ctx->pc = 0x29057Cu;
    {
        const bool branch_taken_0x29057c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29057c) {
            ctx->pc = 0x290898u;
            goto label_290898;
        }
    }
    ctx->pc = 0x290584u;
label_290584:
    // 0x290584: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x290584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_290588:
    // 0x290588: 0x24621760  addiu       $v0, $v1, 0x1760
    ctx->pc = 0x290588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 5984));
label_29058c:
    // 0x29058c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x29058cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_290590:
    // 0x290590: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x290590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_290594:
    // 0x290594: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x290594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_290598:
    // 0x290598: 0x400008  jr          $v0
label_29059c:
    if (ctx->pc == 0x29059Cu) {
        ctx->pc = 0x2905A0u;
        goto label_2905a0;
    }
    ctx->pc = 0x290598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290598u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2905A0u;
label_2905a0:
    // 0x2905a0: 0x3c0242be  lui         $v0, 0x42BE
    ctx->pc = 0x2905a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17086 << 16));
label_2905a4:
    // 0x2905a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2905a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2905a8:
    // 0x2905a8: 0x0  nop
    ctx->pc = 0x2905a8u;
    // NOP
label_2905ac:
    // 0x2905ac: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2905acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2905b0:
    // 0x2905b0: 0x3c034359  lui         $v1, 0x4359
    ctx->pc = 0x2905b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17241 << 16));
label_2905b4:
    // 0x2905b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2905b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2905b8:
    // 0x2905b8: 0x0  nop
    ctx->pc = 0x2905b8u;
    // NOP
label_2905bc:
    // 0x2905bc: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2905bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_2905c0:
    // 0x2905c0: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x2905c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
label_2905c4:
    // 0x2905c4: 0x3443ff00  ori         $v1, $v0, 0xFF00
    ctx->pc = 0x2905c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_2905c8:
    // 0x2905c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2905c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2905cc:
    // 0x2905cc: 0x0  nop
    ctx->pc = 0x2905ccu;
    // NOP
label_2905d0:
    // 0x2905d0: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2905d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2905d4:
    // 0x2905d4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2905d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2905d8:
    // 0x2905d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2905d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2905dc:
    // 0x2905dc: 0x0  nop
    ctx->pc = 0x2905dcu;
    // NOP
label_2905e0:
    // 0x2905e0: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2905e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_2905e4:
    // 0x2905e4: 0x24026a03  addiu       $v0, $zero, 0x6A03
    ctx->pc = 0x2905e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27139));
label_2905e8:
    // 0x2905e8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2905e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2905ec:
    // 0x2905ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2905ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2905f0:
    // 0x2905f0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2905f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2905f4:
    // 0x2905f4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2905f4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2905f8:
    // 0x2905f8: 0xc062f5c  jal         func_18BD70
label_2905fc:
    if (ctx->pc == 0x2905FCu) {
        ctx->pc = 0x290600u;
        goto label_290600;
    }
    ctx->pc = 0x2905F8u;
    SET_GPR_U32(ctx, 31, 0x290600u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2905F8u, 0x290600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290600u;
label_290600:
    // 0x290600: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x290600u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_290604:
    // 0x290604: 0xc0630a8  jal         func_18C2A0
label_290608:
    if (ctx->pc == 0x290608u) {
        ctx->pc = 0x29060Cu;
        goto label_29060c;
    }
    ctx->pc = 0x290604u;
    SET_GPR_U32(ctx, 31, 0x29060Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x290604u, 0x29060Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29060Cu;
label_29060c:
    // 0x29060c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x29060cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_290610:
    // 0x290610: 0xac222988  sw          $v0, 0x2988($at)
    ctx->pc = 0x290610u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10632), GPR_U32(ctx, 2));
label_290614:
    // 0x290614: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_290618:
    if (ctx->pc == 0x290618u) {
        ctx->pc = 0x29061Cu;
        goto label_29061c;
    }
    ctx->pc = 0x290614u;
    {
        const bool branch_taken_0x290614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290614) {
            ctx->pc = 0x290898u;
            goto label_290898;
        }
    }
    ctx->pc = 0x29061Cu;
label_29061c:
    // 0x29061c: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x29061cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_290620:
    // 0x290620: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x290620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_290624:
    // 0x290624: 0x0  nop
    ctx->pc = 0x290624u;
    // NOP
label_290628:
    // 0x290628: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x290628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_29062c:
    // 0x29062c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x29062cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_290630:
    // 0x290630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x290630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_290634:
    // 0x290634: 0x0  nop
    ctx->pc = 0x290634u;
    // NOP
label_290638:
    // 0x290638: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x290638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_29063c:
    // 0x29063c: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x29063cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
label_290640:
    // 0x290640: 0x3443ff00  ori         $v1, $v0, 0xFF00
    ctx->pc = 0x290640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_290644:
    // 0x290644: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x290644u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_290648:
    // 0x290648: 0x0  nop
    ctx->pc = 0x290648u;
    // NOP
label_29064c:
    // 0x29064c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x29064cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_290650:
    // 0x290650: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x290650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_290654:
    // 0x290654: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x290654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_290658:
    // 0x290658: 0x0  nop
    ctx->pc = 0x290658u;
    // NOP
label_29065c:
    // 0x29065c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x29065cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_290660:
    // 0x290660: 0x24036a04  addiu       $v1, $zero, 0x6A04
    ctx->pc = 0x290660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27140));
label_290664:
    // 0x290664: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x290664u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_290668:
    // 0x290668: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x290668u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_29066c:
    // 0x29066c: 0x27b300a0  addiu       $s3, $sp, 0xA0
    ctx->pc = 0x29066cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_290670:
    // 0x290670: 0x72603628  paddub      $a2, $s3, $zero
    ctx->pc = 0x290670u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_290674:
    // 0x290674: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x290674u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_290678:
    // 0x290678: 0xc062f5c  jal         func_18BD70
label_29067c:
    if (ctx->pc == 0x29067Cu) {
        ctx->pc = 0x290680u;
        goto label_290680;
    }
    ctx->pc = 0x290678u;
    SET_GPR_U32(ctx, 31, 0x290680u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x290678u, 0x290680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290680u;
label_290680:
    // 0x290680: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x290680u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_290684:
    // 0x290684: 0xc0630a8  jal         func_18C2A0
label_290688:
    if (ctx->pc == 0x290688u) {
        ctx->pc = 0x29068Cu;
        goto label_29068c;
    }
    ctx->pc = 0x290684u;
    SET_GPR_U32(ctx, 31, 0x29068Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x290684u, 0x29068Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29068Cu;
label_29068c:
    // 0x29068c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x29068cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_290690:
    // 0x290690: 0xac222988  sw          $v0, 0x2988($at)
    ctx->pc = 0x290690u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10632), GPR_U32(ctx, 2));
label_290694:
    // 0x290694: 0x10000080  b           . + 4 + (0x80 << 2)
label_290698:
    if (ctx->pc == 0x290698u) {
        ctx->pc = 0x29069Cu;
        goto label_29069c;
    }
    ctx->pc = 0x290694u;
    {
        const bool branch_taken_0x290694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290694) {
            ctx->pc = 0x290898u;
            goto label_290898;
        }
    }
    ctx->pc = 0x29069Cu;
label_29069c:
    // 0x29069c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x29069cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2906a0:
    // 0x2906a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2906a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2906a4:
    // 0x2906a4: 0x0  nop
    ctx->pc = 0x2906a4u;
    // NOP
label_2906a8:
    // 0x2906a8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2906a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2906ac:
    // 0x2906ac: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x2906acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
label_2906b0:
    // 0x2906b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2906b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2906b4:
    // 0x2906b4: 0x0  nop
    ctx->pc = 0x2906b4u;
    // NOP
label_2906b8:
    // 0x2906b8: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2906b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_2906bc:
    // 0x2906bc: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x2906bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
label_2906c0:
    // 0x2906c0: 0x3443ff00  ori         $v1, $v0, 0xFF00
    ctx->pc = 0x2906c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_2906c4:
    // 0x2906c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2906c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2906c8:
    // 0x2906c8: 0x0  nop
    ctx->pc = 0x2906c8u;
    // NOP
label_2906cc:
    // 0x2906cc: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2906ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2906d0:
    // 0x2906d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2906d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2906d4:
    // 0x2906d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2906d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2906d8:
    // 0x2906d8: 0x0  nop
    ctx->pc = 0x2906d8u;
    // NOP
label_2906dc:
    // 0x2906dc: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2906dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_2906e0:
    // 0x2906e0: 0x24026903  addiu       $v0, $zero, 0x6903
    ctx->pc = 0x2906e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26883));
label_2906e4:
    // 0x2906e4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2906e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2906e8:
    // 0x2906e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2906e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2906ec:
    // 0x2906ec: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2906ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2906f0:
    // 0x2906f0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2906f0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2906f4:
    // 0x2906f4: 0xc062f5c  jal         func_18BD70
label_2906f8:
    if (ctx->pc == 0x2906F8u) {
        ctx->pc = 0x2906FCu;
        goto label_2906fc;
    }
    ctx->pc = 0x2906F4u;
    SET_GPR_U32(ctx, 31, 0x2906FCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2906F4u, 0x2906FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2906FCu;
label_2906fc:
    // 0x2906fc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2906fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_290700:
    // 0x290700: 0xc0630a8  jal         func_18C2A0
label_290704:
    if (ctx->pc == 0x290704u) {
        ctx->pc = 0x290708u;
        goto label_290708;
    }
    ctx->pc = 0x290700u;
    SET_GPR_U32(ctx, 31, 0x290708u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x290700u, 0x290708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290708u;
label_290708:
    // 0x290708: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x290708u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_29070c:
    // 0x29070c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x29070cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_290710:
    // 0x290710: 0xac232988  sw          $v1, 0x2988($at)
    ctx->pc = 0x290710u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10632), GPR_U32(ctx, 3));
label_290714:
    // 0x290714: 0x10000060  b           . + 4 + (0x60 << 2)
label_290718:
    if (ctx->pc == 0x290718u) {
        ctx->pc = 0x29071Cu;
        goto label_29071c;
    }
    ctx->pc = 0x290714u;
    {
        const bool branch_taken_0x290714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290714) {
            ctx->pc = 0x290898u;
            goto label_290898;
        }
    }
    ctx->pc = 0x29071Cu;
label_29071c:
    // 0x29071c: 0x3c03434d  lui         $v1, 0x434D
    ctx->pc = 0x29071cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17229 << 16));
label_290720:
    // 0x290720: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x290720u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_290724:
    // 0x290724: 0x0  nop
    ctx->pc = 0x290724u;
    // NOP
label_290728:
    // 0x290728: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x290728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_29072c:
    // 0x29072c: 0x3c0242a6  lui         $v0, 0x42A6
    ctx->pc = 0x29072cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17062 << 16));
label_290730:
    // 0x290730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x290730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_290734:
    // 0x290734: 0x0  nop
    ctx->pc = 0x290734u;
    // NOP
label_290738:
    // 0x290738: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x290738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_29073c:
    // 0x29073c: 0x3c06477f  lui         $a2, 0x477F
    ctx->pc = 0x29073cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18303 << 16));
label_290740:
    // 0x290740: 0x34c2ff00  ori         $v0, $a2, 0xFF00
    ctx->pc = 0x290740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65280);
label_290744:
    // 0x290744: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x290744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_290748:
    // 0x290748: 0x0  nop
    ctx->pc = 0x290748u;
    // NOP
label_29074c:
    // 0x29074c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x29074cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_290750:
    // 0x290750: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x290750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_290754:
    // 0x290754: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x290754u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_290758:
    // 0x290758: 0x0  nop
    ctx->pc = 0x290758u;
    // NOP
label_29075c:
    // 0x29075c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x29075cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_290760:
    // 0x290760: 0x24026904  addiu       $v0, $zero, 0x6904
    ctx->pc = 0x290760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26884));
label_290764:
    // 0x290764: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x290764u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_290768:
    // 0x290768: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x290768u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_29076c:
    // 0x29076c: 0x27b200a0  addiu       $s2, $sp, 0xA0
    ctx->pc = 0x29076cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_290770:
    // 0x290770: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x290770u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_290774:
    // 0x290774: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x290774u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_290778:
    // 0x290778: 0xc062f5c  jal         func_18BD70
label_29077c:
    if (ctx->pc == 0x29077Cu) {
        ctx->pc = 0x290780u;
        goto label_290780;
    }
    ctx->pc = 0x290778u;
    SET_GPR_U32(ctx, 31, 0x290780u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x290778u, 0x290780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290780u;
label_290780:
    // 0x290780: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x290780u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_290784:
    // 0x290784: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x290784u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_290788:
    // 0x290788: 0xc0630a8  jal         func_18C2A0
label_29078c:
    if (ctx->pc == 0x29078Cu) {
        ctx->pc = 0x290790u;
        goto label_290790;
    }
    ctx->pc = 0x290788u;
    SET_GPR_U32(ctx, 31, 0x290790u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x290788u, 0x290790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290790u;
label_290790:
    // 0x290790: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x290790u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_290794:
    // 0x290794: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x290794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_290798:
    // 0x290798: 0xac3e2988  sw          $fp, 0x2988($at)
    ctx->pc = 0x290798u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10632), GPR_U32(ctx, 30));
label_29079c:
    // 0x29079c: 0x1000003e  b           . + 4 + (0x3E << 2)
label_2907a0:
    if (ctx->pc == 0x2907A0u) {
        ctx->pc = 0x2907A4u;
        goto label_2907a4;
    }
    ctx->pc = 0x29079Cu;
    {
        const bool branch_taken_0x29079c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29079c) {
            ctx->pc = 0x290898u;
            goto label_290898;
        }
    }
    ctx->pc = 0x2907A4u;
label_2907a4:
    // 0x2907a4: 0x3c024342  lui         $v0, 0x4342
    ctx->pc = 0x2907a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17218 << 16));
label_2907a8:
    // 0x2907a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2907a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2907ac:
    // 0x2907ac: 0x0  nop
    ctx->pc = 0x2907acu;
    // NOP
label_2907b0:
    // 0x2907b0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2907b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2907b4:
    // 0x2907b4: 0x3c03429c  lui         $v1, 0x429C
    ctx->pc = 0x2907b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17052 << 16));
label_2907b8:
    // 0x2907b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2907b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2907bc:
    // 0x2907bc: 0x0  nop
    ctx->pc = 0x2907bcu;
    // NOP
label_2907c0:
    // 0x2907c0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2907c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_2907c4:
    // 0x2907c4: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x2907c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
label_2907c8:
    // 0x2907c8: 0x3462ff00  ori         $v0, $v1, 0xFF00
    ctx->pc = 0x2907c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_2907cc:
    // 0x2907cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2907ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2907d0:
    // 0x2907d0: 0x0  nop
    ctx->pc = 0x2907d0u;
    // NOP
label_2907d4:
    // 0x2907d4: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2907d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2907d8:
    // 0x2907d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2907d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2907dc:
    // 0x2907dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2907dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2907e0:
    // 0x2907e0: 0x0  nop
    ctx->pc = 0x2907e0u;
    // NOP
label_2907e4:
    // 0x2907e4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2907e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_2907e8:
    // 0x2907e8: 0x24026905  addiu       $v0, $zero, 0x6905
    ctx->pc = 0x2907e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26885));
label_2907ec:
    // 0x2907ec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2907ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2907f0:
    // 0x2907f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2907f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2907f4:
    // 0x2907f4: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2907f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2907f8:
    // 0x2907f8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2907f8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2907fc:
    // 0x2907fc: 0xc062f5c  jal         func_18BD70
label_290800:
    if (ctx->pc == 0x290800u) {
        ctx->pc = 0x290804u;
        goto label_290804;
    }
    ctx->pc = 0x2907FCu;
    SET_GPR_U32(ctx, 31, 0x290804u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2907FCu, 0x290804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290804u;
label_290804:
    // 0x290804: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x290804u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_290808:
    // 0x290808: 0xc0630a8  jal         func_18C2A0
label_29080c:
    if (ctx->pc == 0x29080Cu) {
        ctx->pc = 0x290810u;
        goto label_290810;
    }
    ctx->pc = 0x290808u;
    SET_GPR_U32(ctx, 31, 0x290810u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x290808u, 0x290810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290810u;
label_290810:
    // 0x290810: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x290810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_290814:
    // 0x290814: 0xac222988  sw          $v0, 0x2988($at)
    ctx->pc = 0x290814u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10632), GPR_U32(ctx, 2));
label_290818:
    // 0x290818: 0x1000001f  b           . + 4 + (0x1F << 2)
label_29081c:
    if (ctx->pc == 0x29081Cu) {
        ctx->pc = 0x290820u;
        goto label_290820;
    }
    ctx->pc = 0x290818u;
    {
        const bool branch_taken_0x290818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290818) {
            ctx->pc = 0x290898u;
            goto label_290898;
        }
    }
    ctx->pc = 0x290820u;
label_290820:
    // 0x290820: 0x3c0242b2  lui         $v0, 0x42B2
    ctx->pc = 0x290820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17074 << 16));
label_290824:
    // 0x290824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x290824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_290828:
    // 0x290828: 0x0  nop
    ctx->pc = 0x290828u;
    // NOP
label_29082c:
    // 0x29082c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x29082cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_290830:
    // 0x290830: 0x3c024357  lui         $v0, 0x4357
    ctx->pc = 0x290830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17239 << 16));
label_290834:
    // 0x290834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x290834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_290838:
    // 0x290838: 0x0  nop
    ctx->pc = 0x290838u;
    // NOP
label_29083c:
    // 0x29083c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x29083cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_290840:
    // 0x290840: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x290840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
label_290844:
    // 0x290844: 0x3457ff00  ori         $s7, $v0, 0xFF00
    ctx->pc = 0x290844u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_290848:
    // 0x290848: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x290848u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29084c:
    // 0x29084c: 0x0  nop
    ctx->pc = 0x29084cu;
    // NOP
label_290850:
    // 0x290850: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x290850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_290854:
    // 0x290854: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x290854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_290858:
    // 0x290858: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x290858u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29085c:
    // 0x29085c: 0x0  nop
    ctx->pc = 0x29085cu;
    // NOP
label_290860:
    // 0x290860: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x290860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_290864:
    // 0x290864: 0x24026906  addiu       $v0, $zero, 0x6906
    ctx->pc = 0x290864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26886));
label_290868:
    // 0x290868: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x290868u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_29086c:
    // 0x29086c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x29086cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_290870:
    // 0x290870: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x290870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_290874:
    // 0x290874: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x290874u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_290878:
    // 0x290878: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x290878u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_29087c:
    // 0x29087c: 0xc062f5c  jal         func_18BD70
label_290880:
    if (ctx->pc == 0x290880u) {
        ctx->pc = 0x290884u;
        goto label_290884;
    }
    ctx->pc = 0x29087Cu;
    SET_GPR_U32(ctx, 31, 0x290884u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x29087Cu, 0x290884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290884u;
label_290884:
    // 0x290884: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x290884u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_290888:
    // 0x290888: 0xc0630a8  jal         func_18C2A0
label_29088c:
    if (ctx->pc == 0x29088Cu) {
        ctx->pc = 0x290890u;
        goto label_290890;
    }
    ctx->pc = 0x290888u;
    SET_GPR_U32(ctx, 31, 0x290890u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x290888u, 0x290890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290890u;
label_290890:
    // 0x290890: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x290890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_290894:
    // 0x290894: 0xac222988  sw          $v0, 0x2988($at)
    ctx->pc = 0x290894u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10632), GPR_U32(ctx, 2));
label_290898:
    // 0x290898: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x290898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_29089c:
    // 0x29089c: 0x8c232988  lw          $v1, 0x2988($at)
    ctx->pc = 0x29089cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10632)));
label_2908a0:
    // 0x2908a0: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x2908a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
label_2908a4:
    // 0x2908a4: 0x34c20011  ori         $v0, $a2, 0x11
    ctx->pc = 0x2908a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)17);
label_2908a8:
    // 0x2908a8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2908ac:
    if (ctx->pc == 0x2908ACu) {
        ctx->pc = 0x2908B0u;
        goto label_2908b0;
    }
    ctx->pc = 0x2908A8u;
    {
        const bool branch_taken_0x2908a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2908a8) {
            ctx->pc = 0x2908C0u;
            goto label_2908c0;
        }
    }
    ctx->pc = 0x2908B0u;
label_2908b0:
    // 0x2908b0: 0x2403008c  addiu       $v1, $zero, 0x8C
    ctx->pc = 0x2908b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_2908b4:
    // 0x2908b4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2908b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_2908b8:
    // 0x2908b8: 0x8c222988  lw          $v0, 0x2988($at)
    ctx->pc = 0x2908b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10632)));
label_2908bc:
    // 0x2908bc: 0xa043011c  sb          $v1, 0x11C($v0)
    ctx->pc = 0x2908bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 3));
label_2908c0:
    // 0x2908c0: 0x26150018  addiu       $s5, $s0, 0x18
    ctx->pc = 0x2908c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_2908c4:
    // 0x2908c4: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x2908c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_2908c8:
    // 0x2908c8: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2908c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2908cc:
    // 0x2908cc: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2908ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2908d0:
    // 0x2908d0: 0xc05dbd8  jal         func_176F60
label_2908d4:
    if (ctx->pc == 0x2908D4u) {
        ctx->pc = 0x2908D8u;
        goto label_2908d8;
    }
    ctx->pc = 0x2908D0u;
    SET_GPR_U32(ctx, 31, 0x2908D8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x2908D0u, 0x2908D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2908D8u;
label_2908d8:
    // 0x2908d8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2908d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2908dc:
    // 0x2908dc: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x2908dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_2908e0:
    // 0x2908e0: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2908e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_2908e4:
    // 0x2908e4: 0x34621043  ori         $v0, $v1, 0x1043
    ctx->pc = 0x2908e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4163);
label_2908e8:
    // 0x2908e8: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x2908e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_2908ec:
    // 0x2908ec: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x2908ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_2908f0:
    // 0x2908f0: 0xfe830008  sd          $v1, 0x8($s4)
    ctx->pc = 0x2908f0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 3));
label_2908f4:
    // 0x2908f4: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x2908f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_2908f8:
    // 0x2908f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2908f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2908fc:
    // 0x2908fc: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x2908fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_290900:
    // 0x290900: 0xc05dbd8  jal         func_176F60
label_290904:
    if (ctx->pc == 0x290904u) {
        ctx->pc = 0x290908u;
        goto label_290908;
    }
    ctx->pc = 0x290900u;
    SET_GPR_U32(ctx, 31, 0x290908u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x290900u, 0x290908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290908u;
label_290908:
    // 0x290908: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x290908u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_29090c:
    // 0x29090c: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x29090cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_290910:
    // 0x290910: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x290910u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_290914:
    // 0x290914: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x290914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_290918:
    // 0x290918: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x290918u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_29091c:
    // 0x29091c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x29091cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_290920:
    // 0x290920: 0x34421048  ori         $v0, $v0, 0x1048
    ctx->pc = 0x290920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4168);
label_290924:
    // 0x290924: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x290924u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_290928:
    // 0x290928: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x290928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_29092c:
    // 0x29092c: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x29092cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
label_290930:
    // 0x290930: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x290930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_290934:
    // 0x290934: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x290934u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_290938:
    // 0x290938: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x290938u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_29093c:
    // 0x29093c: 0xc05dbd8  jal         func_176F60
label_290940:
    if (ctx->pc == 0x290940u) {
        ctx->pc = 0x290944u;
        goto label_290944;
    }
    ctx->pc = 0x29093Cu;
    SET_GPR_U32(ctx, 31, 0x290944u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x29093Cu, 0x290944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290944u;
label_290944:
    // 0x290944: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x290944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_290948:
    // 0x290948: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x290948u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_29094c:
    // 0x29094c: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x29094cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_290950:
    // 0x290950: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x290950u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_290954:
    // 0x290954: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x290954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_290958:
    // 0x290958: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x290958u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_29095c:
    // 0x29095c: 0xc05dbd8  jal         func_176F60
label_290960:
    if (ctx->pc == 0x290960u) {
        ctx->pc = 0x290964u;
        goto label_290964;
    }
    ctx->pc = 0x29095Cu;
    SET_GPR_U32(ctx, 31, 0x290964u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x29095Cu, 0x290964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290964u;
label_290964:
    // 0x290964: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x290964u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_290968:
    // 0x290968: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x290968u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_29096c:
    // 0x29096c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x29096cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_290970:
    // 0x290970: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x290970u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_290974:
    // 0x290974: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x290974u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_290978:
    // 0x290978: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x290978u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_29097c:
    // 0x29097c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29097cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_290980:
    // 0x290980: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x290980u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_290984:
    // 0x290984: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x290984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_290988:
    // 0x290988: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x290988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29098c:
    // 0x29098c: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x29098cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_290990:
    // 0x290990: 0x3e00008  jr          $ra
label_290994:
    if (ctx->pc == 0x290994u) {
        ctx->pc = 0x290998u;
        goto label_fallthrough_0x290990;
    }
    ctx->pc = 0x290990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x290990:
    ctx->pc = 0x290998u;
}
