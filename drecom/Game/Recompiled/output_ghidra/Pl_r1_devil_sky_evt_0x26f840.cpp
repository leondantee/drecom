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

// Function: Pl_r1_devil_sky_evt
// Address: 0x26f840 - 0x270348
void Pl_r1_devil_sky_evt_0x26f840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_devil_sky_evt_0x26f840");
#endif

    switch (ctx->pc) {
        case 0x26f840u: goto label_26f840;
        case 0x26f844u: goto label_26f844;
        case 0x26f848u: goto label_26f848;
        case 0x26f84cu: goto label_26f84c;
        case 0x26f850u: goto label_26f850;
        case 0x26f854u: goto label_26f854;
        case 0x26f858u: goto label_26f858;
        case 0x26f85cu: goto label_26f85c;
        case 0x26f860u: goto label_26f860;
        case 0x26f864u: goto label_26f864;
        case 0x26f868u: goto label_26f868;
        case 0x26f86cu: goto label_26f86c;
        case 0x26f870u: goto label_26f870;
        case 0x26f874u: goto label_26f874;
        case 0x26f878u: goto label_26f878;
        case 0x26f87cu: goto label_26f87c;
        case 0x26f880u: goto label_26f880;
        case 0x26f884u: goto label_26f884;
        case 0x26f888u: goto label_26f888;
        case 0x26f88cu: goto label_26f88c;
        case 0x26f890u: goto label_26f890;
        case 0x26f894u: goto label_26f894;
        case 0x26f898u: goto label_26f898;
        case 0x26f89cu: goto label_26f89c;
        case 0x26f8a0u: goto label_26f8a0;
        case 0x26f8a4u: goto label_26f8a4;
        case 0x26f8a8u: goto label_26f8a8;
        case 0x26f8acu: goto label_26f8ac;
        case 0x26f8b0u: goto label_26f8b0;
        case 0x26f8b4u: goto label_26f8b4;
        case 0x26f8b8u: goto label_26f8b8;
        case 0x26f8bcu: goto label_26f8bc;
        case 0x26f8c0u: goto label_26f8c0;
        case 0x26f8c4u: goto label_26f8c4;
        case 0x26f8c8u: goto label_26f8c8;
        case 0x26f8ccu: goto label_26f8cc;
        case 0x26f8d0u: goto label_26f8d0;
        case 0x26f8d4u: goto label_26f8d4;
        case 0x26f8d8u: goto label_26f8d8;
        case 0x26f8dcu: goto label_26f8dc;
        case 0x26f8e0u: goto label_26f8e0;
        case 0x26f8e4u: goto label_26f8e4;
        case 0x26f8e8u: goto label_26f8e8;
        case 0x26f8ecu: goto label_26f8ec;
        case 0x26f8f0u: goto label_26f8f0;
        case 0x26f8f4u: goto label_26f8f4;
        case 0x26f8f8u: goto label_26f8f8;
        case 0x26f8fcu: goto label_26f8fc;
        case 0x26f900u: goto label_26f900;
        case 0x26f904u: goto label_26f904;
        case 0x26f908u: goto label_26f908;
        case 0x26f90cu: goto label_26f90c;
        case 0x26f910u: goto label_26f910;
        case 0x26f914u: goto label_26f914;
        case 0x26f918u: goto label_26f918;
        case 0x26f91cu: goto label_26f91c;
        case 0x26f920u: goto label_26f920;
        case 0x26f924u: goto label_26f924;
        case 0x26f928u: goto label_26f928;
        case 0x26f92cu: goto label_26f92c;
        case 0x26f930u: goto label_26f930;
        case 0x26f934u: goto label_26f934;
        case 0x26f938u: goto label_26f938;
        case 0x26f93cu: goto label_26f93c;
        case 0x26f940u: goto label_26f940;
        case 0x26f944u: goto label_26f944;
        case 0x26f948u: goto label_26f948;
        case 0x26f94cu: goto label_26f94c;
        case 0x26f950u: goto label_26f950;
        case 0x26f954u: goto label_26f954;
        case 0x26f958u: goto label_26f958;
        case 0x26f95cu: goto label_26f95c;
        case 0x26f960u: goto label_26f960;
        case 0x26f964u: goto label_26f964;
        case 0x26f968u: goto label_26f968;
        case 0x26f96cu: goto label_26f96c;
        case 0x26f970u: goto label_26f970;
        case 0x26f974u: goto label_26f974;
        case 0x26f978u: goto label_26f978;
        case 0x26f97cu: goto label_26f97c;
        case 0x26f980u: goto label_26f980;
        case 0x26f984u: goto label_26f984;
        case 0x26f988u: goto label_26f988;
        case 0x26f98cu: goto label_26f98c;
        case 0x26f990u: goto label_26f990;
        case 0x26f994u: goto label_26f994;
        case 0x26f998u: goto label_26f998;
        case 0x26f99cu: goto label_26f99c;
        case 0x26f9a0u: goto label_26f9a0;
        case 0x26f9a4u: goto label_26f9a4;
        case 0x26f9a8u: goto label_26f9a8;
        case 0x26f9acu: goto label_26f9ac;
        case 0x26f9b0u: goto label_26f9b0;
        case 0x26f9b4u: goto label_26f9b4;
        case 0x26f9b8u: goto label_26f9b8;
        case 0x26f9bcu: goto label_26f9bc;
        case 0x26f9c0u: goto label_26f9c0;
        case 0x26f9c4u: goto label_26f9c4;
        case 0x26f9c8u: goto label_26f9c8;
        case 0x26f9ccu: goto label_26f9cc;
        case 0x26f9d0u: goto label_26f9d0;
        case 0x26f9d4u: goto label_26f9d4;
        case 0x26f9d8u: goto label_26f9d8;
        case 0x26f9dcu: goto label_26f9dc;
        case 0x26f9e0u: goto label_26f9e0;
        case 0x26f9e4u: goto label_26f9e4;
        case 0x26f9e8u: goto label_26f9e8;
        case 0x26f9ecu: goto label_26f9ec;
        case 0x26f9f0u: goto label_26f9f0;
        case 0x26f9f4u: goto label_26f9f4;
        case 0x26f9f8u: goto label_26f9f8;
        case 0x26f9fcu: goto label_26f9fc;
        case 0x26fa00u: goto label_26fa00;
        case 0x26fa04u: goto label_26fa04;
        case 0x26fa08u: goto label_26fa08;
        case 0x26fa0cu: goto label_26fa0c;
        case 0x26fa10u: goto label_26fa10;
        case 0x26fa14u: goto label_26fa14;
        case 0x26fa18u: goto label_26fa18;
        case 0x26fa1cu: goto label_26fa1c;
        case 0x26fa20u: goto label_26fa20;
        case 0x26fa24u: goto label_26fa24;
        case 0x26fa28u: goto label_26fa28;
        case 0x26fa2cu: goto label_26fa2c;
        case 0x26fa30u: goto label_26fa30;
        case 0x26fa34u: goto label_26fa34;
        case 0x26fa38u: goto label_26fa38;
        case 0x26fa3cu: goto label_26fa3c;
        case 0x26fa40u: goto label_26fa40;
        case 0x26fa44u: goto label_26fa44;
        case 0x26fa48u: goto label_26fa48;
        case 0x26fa4cu: goto label_26fa4c;
        case 0x26fa50u: goto label_26fa50;
        case 0x26fa54u: goto label_26fa54;
        case 0x26fa58u: goto label_26fa58;
        case 0x26fa5cu: goto label_26fa5c;
        case 0x26fa60u: goto label_26fa60;
        case 0x26fa64u: goto label_26fa64;
        case 0x26fa68u: goto label_26fa68;
        case 0x26fa6cu: goto label_26fa6c;
        case 0x26fa70u: goto label_26fa70;
        case 0x26fa74u: goto label_26fa74;
        case 0x26fa78u: goto label_26fa78;
        case 0x26fa7cu: goto label_26fa7c;
        case 0x26fa80u: goto label_26fa80;
        case 0x26fa84u: goto label_26fa84;
        case 0x26fa88u: goto label_26fa88;
        case 0x26fa8cu: goto label_26fa8c;
        case 0x26fa90u: goto label_26fa90;
        case 0x26fa94u: goto label_26fa94;
        case 0x26fa98u: goto label_26fa98;
        case 0x26fa9cu: goto label_26fa9c;
        case 0x26faa0u: goto label_26faa0;
        case 0x26faa4u: goto label_26faa4;
        case 0x26faa8u: goto label_26faa8;
        case 0x26faacu: goto label_26faac;
        case 0x26fab0u: goto label_26fab0;
        case 0x26fab4u: goto label_26fab4;
        case 0x26fab8u: goto label_26fab8;
        case 0x26fabcu: goto label_26fabc;
        case 0x26fac0u: goto label_26fac0;
        case 0x26fac4u: goto label_26fac4;
        case 0x26fac8u: goto label_26fac8;
        case 0x26faccu: goto label_26facc;
        case 0x26fad0u: goto label_26fad0;
        case 0x26fad4u: goto label_26fad4;
        case 0x26fad8u: goto label_26fad8;
        case 0x26fadcu: goto label_26fadc;
        case 0x26fae0u: goto label_26fae0;
        case 0x26fae4u: goto label_26fae4;
        case 0x26fae8u: goto label_26fae8;
        case 0x26faecu: goto label_26faec;
        case 0x26faf0u: goto label_26faf0;
        case 0x26faf4u: goto label_26faf4;
        case 0x26faf8u: goto label_26faf8;
        case 0x26fafcu: goto label_26fafc;
        case 0x26fb00u: goto label_26fb00;
        case 0x26fb04u: goto label_26fb04;
        case 0x26fb08u: goto label_26fb08;
        case 0x26fb0cu: goto label_26fb0c;
        case 0x26fb10u: goto label_26fb10;
        case 0x26fb14u: goto label_26fb14;
        case 0x26fb18u: goto label_26fb18;
        case 0x26fb1cu: goto label_26fb1c;
        case 0x26fb20u: goto label_26fb20;
        case 0x26fb24u: goto label_26fb24;
        case 0x26fb28u: goto label_26fb28;
        case 0x26fb2cu: goto label_26fb2c;
        case 0x26fb30u: goto label_26fb30;
        case 0x26fb34u: goto label_26fb34;
        case 0x26fb38u: goto label_26fb38;
        case 0x26fb3cu: goto label_26fb3c;
        case 0x26fb40u: goto label_26fb40;
        case 0x26fb44u: goto label_26fb44;
        case 0x26fb48u: goto label_26fb48;
        case 0x26fb4cu: goto label_26fb4c;
        case 0x26fb50u: goto label_26fb50;
        case 0x26fb54u: goto label_26fb54;
        case 0x26fb58u: goto label_26fb58;
        case 0x26fb5cu: goto label_26fb5c;
        case 0x26fb60u: goto label_26fb60;
        case 0x26fb64u: goto label_26fb64;
        case 0x26fb68u: goto label_26fb68;
        case 0x26fb6cu: goto label_26fb6c;
        case 0x26fb70u: goto label_26fb70;
        case 0x26fb74u: goto label_26fb74;
        case 0x26fb78u: goto label_26fb78;
        case 0x26fb7cu: goto label_26fb7c;
        case 0x26fb80u: goto label_26fb80;
        case 0x26fb84u: goto label_26fb84;
        case 0x26fb88u: goto label_26fb88;
        case 0x26fb8cu: goto label_26fb8c;
        case 0x26fb90u: goto label_26fb90;
        case 0x26fb94u: goto label_26fb94;
        case 0x26fb98u: goto label_26fb98;
        case 0x26fb9cu: goto label_26fb9c;
        case 0x26fba0u: goto label_26fba0;
        case 0x26fba4u: goto label_26fba4;
        case 0x26fba8u: goto label_26fba8;
        case 0x26fbacu: goto label_26fbac;
        case 0x26fbb0u: goto label_26fbb0;
        case 0x26fbb4u: goto label_26fbb4;
        case 0x26fbb8u: goto label_26fbb8;
        case 0x26fbbcu: goto label_26fbbc;
        case 0x26fbc0u: goto label_26fbc0;
        case 0x26fbc4u: goto label_26fbc4;
        case 0x26fbc8u: goto label_26fbc8;
        case 0x26fbccu: goto label_26fbcc;
        case 0x26fbd0u: goto label_26fbd0;
        case 0x26fbd4u: goto label_26fbd4;
        case 0x26fbd8u: goto label_26fbd8;
        case 0x26fbdcu: goto label_26fbdc;
        case 0x26fbe0u: goto label_26fbe0;
        case 0x26fbe4u: goto label_26fbe4;
        case 0x26fbe8u: goto label_26fbe8;
        case 0x26fbecu: goto label_26fbec;
        case 0x26fbf0u: goto label_26fbf0;
        case 0x26fbf4u: goto label_26fbf4;
        case 0x26fbf8u: goto label_26fbf8;
        case 0x26fbfcu: goto label_26fbfc;
        case 0x26fc00u: goto label_26fc00;
        case 0x26fc04u: goto label_26fc04;
        case 0x26fc08u: goto label_26fc08;
        case 0x26fc0cu: goto label_26fc0c;
        case 0x26fc10u: goto label_26fc10;
        case 0x26fc14u: goto label_26fc14;
        case 0x26fc18u: goto label_26fc18;
        case 0x26fc1cu: goto label_26fc1c;
        case 0x26fc20u: goto label_26fc20;
        case 0x26fc24u: goto label_26fc24;
        case 0x26fc28u: goto label_26fc28;
        case 0x26fc2cu: goto label_26fc2c;
        case 0x26fc30u: goto label_26fc30;
        case 0x26fc34u: goto label_26fc34;
        case 0x26fc38u: goto label_26fc38;
        case 0x26fc3cu: goto label_26fc3c;
        case 0x26fc40u: goto label_26fc40;
        case 0x26fc44u: goto label_26fc44;
        case 0x26fc48u: goto label_26fc48;
        case 0x26fc4cu: goto label_26fc4c;
        case 0x26fc50u: goto label_26fc50;
        case 0x26fc54u: goto label_26fc54;
        case 0x26fc58u: goto label_26fc58;
        case 0x26fc5cu: goto label_26fc5c;
        case 0x26fc60u: goto label_26fc60;
        case 0x26fc64u: goto label_26fc64;
        case 0x26fc68u: goto label_26fc68;
        case 0x26fc6cu: goto label_26fc6c;
        case 0x26fc70u: goto label_26fc70;
        case 0x26fc74u: goto label_26fc74;
        case 0x26fc78u: goto label_26fc78;
        case 0x26fc7cu: goto label_26fc7c;
        case 0x26fc80u: goto label_26fc80;
        case 0x26fc84u: goto label_26fc84;
        case 0x26fc88u: goto label_26fc88;
        case 0x26fc8cu: goto label_26fc8c;
        case 0x26fc90u: goto label_26fc90;
        case 0x26fc94u: goto label_26fc94;
        case 0x26fc98u: goto label_26fc98;
        case 0x26fc9cu: goto label_26fc9c;
        case 0x26fca0u: goto label_26fca0;
        case 0x26fca4u: goto label_26fca4;
        case 0x26fca8u: goto label_26fca8;
        case 0x26fcacu: goto label_26fcac;
        case 0x26fcb0u: goto label_26fcb0;
        case 0x26fcb4u: goto label_26fcb4;
        case 0x26fcb8u: goto label_26fcb8;
        case 0x26fcbcu: goto label_26fcbc;
        case 0x26fcc0u: goto label_26fcc0;
        case 0x26fcc4u: goto label_26fcc4;
        case 0x26fcc8u: goto label_26fcc8;
        case 0x26fcccu: goto label_26fccc;
        case 0x26fcd0u: goto label_26fcd0;
        case 0x26fcd4u: goto label_26fcd4;
        case 0x26fcd8u: goto label_26fcd8;
        case 0x26fcdcu: goto label_26fcdc;
        case 0x26fce0u: goto label_26fce0;
        case 0x26fce4u: goto label_26fce4;
        case 0x26fce8u: goto label_26fce8;
        case 0x26fcecu: goto label_26fcec;
        case 0x26fcf0u: goto label_26fcf0;
        case 0x26fcf4u: goto label_26fcf4;
        case 0x26fcf8u: goto label_26fcf8;
        case 0x26fcfcu: goto label_26fcfc;
        case 0x26fd00u: goto label_26fd00;
        case 0x26fd04u: goto label_26fd04;
        case 0x26fd08u: goto label_26fd08;
        case 0x26fd0cu: goto label_26fd0c;
        case 0x26fd10u: goto label_26fd10;
        case 0x26fd14u: goto label_26fd14;
        case 0x26fd18u: goto label_26fd18;
        case 0x26fd1cu: goto label_26fd1c;
        case 0x26fd20u: goto label_26fd20;
        case 0x26fd24u: goto label_26fd24;
        case 0x26fd28u: goto label_26fd28;
        case 0x26fd2cu: goto label_26fd2c;
        case 0x26fd30u: goto label_26fd30;
        case 0x26fd34u: goto label_26fd34;
        case 0x26fd38u: goto label_26fd38;
        case 0x26fd3cu: goto label_26fd3c;
        case 0x26fd40u: goto label_26fd40;
        case 0x26fd44u: goto label_26fd44;
        case 0x26fd48u: goto label_26fd48;
        case 0x26fd4cu: goto label_26fd4c;
        case 0x26fd50u: goto label_26fd50;
        case 0x26fd54u: goto label_26fd54;
        case 0x26fd58u: goto label_26fd58;
        case 0x26fd5cu: goto label_26fd5c;
        case 0x26fd60u: goto label_26fd60;
        case 0x26fd64u: goto label_26fd64;
        case 0x26fd68u: goto label_26fd68;
        case 0x26fd6cu: goto label_26fd6c;
        case 0x26fd70u: goto label_26fd70;
        case 0x26fd74u: goto label_26fd74;
        case 0x26fd78u: goto label_26fd78;
        case 0x26fd7cu: goto label_26fd7c;
        case 0x26fd80u: goto label_26fd80;
        case 0x26fd84u: goto label_26fd84;
        case 0x26fd88u: goto label_26fd88;
        case 0x26fd8cu: goto label_26fd8c;
        case 0x26fd90u: goto label_26fd90;
        case 0x26fd94u: goto label_26fd94;
        case 0x26fd98u: goto label_26fd98;
        case 0x26fd9cu: goto label_26fd9c;
        case 0x26fda0u: goto label_26fda0;
        case 0x26fda4u: goto label_26fda4;
        case 0x26fda8u: goto label_26fda8;
        case 0x26fdacu: goto label_26fdac;
        case 0x26fdb0u: goto label_26fdb0;
        case 0x26fdb4u: goto label_26fdb4;
        case 0x26fdb8u: goto label_26fdb8;
        case 0x26fdbcu: goto label_26fdbc;
        case 0x26fdc0u: goto label_26fdc0;
        case 0x26fdc4u: goto label_26fdc4;
        case 0x26fdc8u: goto label_26fdc8;
        case 0x26fdccu: goto label_26fdcc;
        case 0x26fdd0u: goto label_26fdd0;
        case 0x26fdd4u: goto label_26fdd4;
        case 0x26fdd8u: goto label_26fdd8;
        case 0x26fddcu: goto label_26fddc;
        case 0x26fde0u: goto label_26fde0;
        case 0x26fde4u: goto label_26fde4;
        case 0x26fde8u: goto label_26fde8;
        case 0x26fdecu: goto label_26fdec;
        case 0x26fdf0u: goto label_26fdf0;
        case 0x26fdf4u: goto label_26fdf4;
        case 0x26fdf8u: goto label_26fdf8;
        case 0x26fdfcu: goto label_26fdfc;
        case 0x26fe00u: goto label_26fe00;
        case 0x26fe04u: goto label_26fe04;
        case 0x26fe08u: goto label_26fe08;
        case 0x26fe0cu: goto label_26fe0c;
        case 0x26fe10u: goto label_26fe10;
        case 0x26fe14u: goto label_26fe14;
        case 0x26fe18u: goto label_26fe18;
        case 0x26fe1cu: goto label_26fe1c;
        case 0x26fe20u: goto label_26fe20;
        case 0x26fe24u: goto label_26fe24;
        case 0x26fe28u: goto label_26fe28;
        case 0x26fe2cu: goto label_26fe2c;
        case 0x26fe30u: goto label_26fe30;
        case 0x26fe34u: goto label_26fe34;
        case 0x26fe38u: goto label_26fe38;
        case 0x26fe3cu: goto label_26fe3c;
        case 0x26fe40u: goto label_26fe40;
        case 0x26fe44u: goto label_26fe44;
        case 0x26fe48u: goto label_26fe48;
        case 0x26fe4cu: goto label_26fe4c;
        case 0x26fe50u: goto label_26fe50;
        case 0x26fe54u: goto label_26fe54;
        case 0x26fe58u: goto label_26fe58;
        case 0x26fe5cu: goto label_26fe5c;
        case 0x26fe60u: goto label_26fe60;
        case 0x26fe64u: goto label_26fe64;
        case 0x26fe68u: goto label_26fe68;
        case 0x26fe6cu: goto label_26fe6c;
        case 0x26fe70u: goto label_26fe70;
        case 0x26fe74u: goto label_26fe74;
        case 0x26fe78u: goto label_26fe78;
        case 0x26fe7cu: goto label_26fe7c;
        case 0x26fe80u: goto label_26fe80;
        case 0x26fe84u: goto label_26fe84;
        case 0x26fe88u: goto label_26fe88;
        case 0x26fe8cu: goto label_26fe8c;
        case 0x26fe90u: goto label_26fe90;
        case 0x26fe94u: goto label_26fe94;
        case 0x26fe98u: goto label_26fe98;
        case 0x26fe9cu: goto label_26fe9c;
        case 0x26fea0u: goto label_26fea0;
        case 0x26fea4u: goto label_26fea4;
        case 0x26fea8u: goto label_26fea8;
        case 0x26feacu: goto label_26feac;
        case 0x26feb0u: goto label_26feb0;
        case 0x26feb4u: goto label_26feb4;
        case 0x26feb8u: goto label_26feb8;
        case 0x26febcu: goto label_26febc;
        case 0x26fec0u: goto label_26fec0;
        case 0x26fec4u: goto label_26fec4;
        case 0x26fec8u: goto label_26fec8;
        case 0x26feccu: goto label_26fecc;
        case 0x26fed0u: goto label_26fed0;
        case 0x26fed4u: goto label_26fed4;
        case 0x26fed8u: goto label_26fed8;
        case 0x26fedcu: goto label_26fedc;
        case 0x26fee0u: goto label_26fee0;
        case 0x26fee4u: goto label_26fee4;
        case 0x26fee8u: goto label_26fee8;
        case 0x26feecu: goto label_26feec;
        case 0x26fef0u: goto label_26fef0;
        case 0x26fef4u: goto label_26fef4;
        case 0x26fef8u: goto label_26fef8;
        case 0x26fefcu: goto label_26fefc;
        case 0x26ff00u: goto label_26ff00;
        case 0x26ff04u: goto label_26ff04;
        case 0x26ff08u: goto label_26ff08;
        case 0x26ff0cu: goto label_26ff0c;
        case 0x26ff10u: goto label_26ff10;
        case 0x26ff14u: goto label_26ff14;
        case 0x26ff18u: goto label_26ff18;
        case 0x26ff1cu: goto label_26ff1c;
        case 0x26ff20u: goto label_26ff20;
        case 0x26ff24u: goto label_26ff24;
        case 0x26ff28u: goto label_26ff28;
        case 0x26ff2cu: goto label_26ff2c;
        case 0x26ff30u: goto label_26ff30;
        case 0x26ff34u: goto label_26ff34;
        case 0x26ff38u: goto label_26ff38;
        case 0x26ff3cu: goto label_26ff3c;
        case 0x26ff40u: goto label_26ff40;
        case 0x26ff44u: goto label_26ff44;
        case 0x26ff48u: goto label_26ff48;
        case 0x26ff4cu: goto label_26ff4c;
        case 0x26ff50u: goto label_26ff50;
        case 0x26ff54u: goto label_26ff54;
        case 0x26ff58u: goto label_26ff58;
        case 0x26ff5cu: goto label_26ff5c;
        case 0x26ff60u: goto label_26ff60;
        case 0x26ff64u: goto label_26ff64;
        case 0x26ff68u: goto label_26ff68;
        case 0x26ff6cu: goto label_26ff6c;
        case 0x26ff70u: goto label_26ff70;
        case 0x26ff74u: goto label_26ff74;
        case 0x26ff78u: goto label_26ff78;
        case 0x26ff7cu: goto label_26ff7c;
        case 0x26ff80u: goto label_26ff80;
        case 0x26ff84u: goto label_26ff84;
        case 0x26ff88u: goto label_26ff88;
        case 0x26ff8cu: goto label_26ff8c;
        case 0x26ff90u: goto label_26ff90;
        case 0x26ff94u: goto label_26ff94;
        case 0x26ff98u: goto label_26ff98;
        case 0x26ff9cu: goto label_26ff9c;
        case 0x26ffa0u: goto label_26ffa0;
        case 0x26ffa4u: goto label_26ffa4;
        case 0x26ffa8u: goto label_26ffa8;
        case 0x26ffacu: goto label_26ffac;
        case 0x26ffb0u: goto label_26ffb0;
        case 0x26ffb4u: goto label_26ffb4;
        case 0x26ffb8u: goto label_26ffb8;
        case 0x26ffbcu: goto label_26ffbc;
        case 0x26ffc0u: goto label_26ffc0;
        case 0x26ffc4u: goto label_26ffc4;
        case 0x26ffc8u: goto label_26ffc8;
        case 0x26ffccu: goto label_26ffcc;
        case 0x26ffd0u: goto label_26ffd0;
        case 0x26ffd4u: goto label_26ffd4;
        case 0x26ffd8u: goto label_26ffd8;
        case 0x26ffdcu: goto label_26ffdc;
        case 0x26ffe0u: goto label_26ffe0;
        case 0x26ffe4u: goto label_26ffe4;
        case 0x26ffe8u: goto label_26ffe8;
        case 0x26ffecu: goto label_26ffec;
        case 0x26fff0u: goto label_26fff0;
        case 0x26fff4u: goto label_26fff4;
        case 0x26fff8u: goto label_26fff8;
        case 0x26fffcu: goto label_26fffc;
        case 0x270000u: goto label_270000;
        case 0x270004u: goto label_270004;
        case 0x270008u: goto label_270008;
        case 0x27000cu: goto label_27000c;
        case 0x270010u: goto label_270010;
        case 0x270014u: goto label_270014;
        case 0x270018u: goto label_270018;
        case 0x27001cu: goto label_27001c;
        case 0x270020u: goto label_270020;
        case 0x270024u: goto label_270024;
        case 0x270028u: goto label_270028;
        case 0x27002cu: goto label_27002c;
        case 0x270030u: goto label_270030;
        case 0x270034u: goto label_270034;
        case 0x270038u: goto label_270038;
        case 0x27003cu: goto label_27003c;
        case 0x270040u: goto label_270040;
        case 0x270044u: goto label_270044;
        case 0x270048u: goto label_270048;
        case 0x27004cu: goto label_27004c;
        case 0x270050u: goto label_270050;
        case 0x270054u: goto label_270054;
        case 0x270058u: goto label_270058;
        case 0x27005cu: goto label_27005c;
        case 0x270060u: goto label_270060;
        case 0x270064u: goto label_270064;
        case 0x270068u: goto label_270068;
        case 0x27006cu: goto label_27006c;
        case 0x270070u: goto label_270070;
        case 0x270074u: goto label_270074;
        case 0x270078u: goto label_270078;
        case 0x27007cu: goto label_27007c;
        case 0x270080u: goto label_270080;
        case 0x270084u: goto label_270084;
        case 0x270088u: goto label_270088;
        case 0x27008cu: goto label_27008c;
        case 0x270090u: goto label_270090;
        case 0x270094u: goto label_270094;
        case 0x270098u: goto label_270098;
        case 0x27009cu: goto label_27009c;
        case 0x2700a0u: goto label_2700a0;
        case 0x2700a4u: goto label_2700a4;
        case 0x2700a8u: goto label_2700a8;
        case 0x2700acu: goto label_2700ac;
        case 0x2700b0u: goto label_2700b0;
        case 0x2700b4u: goto label_2700b4;
        case 0x2700b8u: goto label_2700b8;
        case 0x2700bcu: goto label_2700bc;
        case 0x2700c0u: goto label_2700c0;
        case 0x2700c4u: goto label_2700c4;
        case 0x2700c8u: goto label_2700c8;
        case 0x2700ccu: goto label_2700cc;
        case 0x2700d0u: goto label_2700d0;
        case 0x2700d4u: goto label_2700d4;
        case 0x2700d8u: goto label_2700d8;
        case 0x2700dcu: goto label_2700dc;
        case 0x2700e0u: goto label_2700e0;
        case 0x2700e4u: goto label_2700e4;
        case 0x2700e8u: goto label_2700e8;
        case 0x2700ecu: goto label_2700ec;
        case 0x2700f0u: goto label_2700f0;
        case 0x2700f4u: goto label_2700f4;
        case 0x2700f8u: goto label_2700f8;
        case 0x2700fcu: goto label_2700fc;
        case 0x270100u: goto label_270100;
        case 0x270104u: goto label_270104;
        case 0x270108u: goto label_270108;
        case 0x27010cu: goto label_27010c;
        case 0x270110u: goto label_270110;
        case 0x270114u: goto label_270114;
        case 0x270118u: goto label_270118;
        case 0x27011cu: goto label_27011c;
        case 0x270120u: goto label_270120;
        case 0x270124u: goto label_270124;
        case 0x270128u: goto label_270128;
        case 0x27012cu: goto label_27012c;
        case 0x270130u: goto label_270130;
        case 0x270134u: goto label_270134;
        case 0x270138u: goto label_270138;
        case 0x27013cu: goto label_27013c;
        case 0x270140u: goto label_270140;
        case 0x270144u: goto label_270144;
        case 0x270148u: goto label_270148;
        case 0x27014cu: goto label_27014c;
        case 0x270150u: goto label_270150;
        case 0x270154u: goto label_270154;
        case 0x270158u: goto label_270158;
        case 0x27015cu: goto label_27015c;
        case 0x270160u: goto label_270160;
        case 0x270164u: goto label_270164;
        case 0x270168u: goto label_270168;
        case 0x27016cu: goto label_27016c;
        case 0x270170u: goto label_270170;
        case 0x270174u: goto label_270174;
        case 0x270178u: goto label_270178;
        case 0x27017cu: goto label_27017c;
        case 0x270180u: goto label_270180;
        case 0x270184u: goto label_270184;
        case 0x270188u: goto label_270188;
        case 0x27018cu: goto label_27018c;
        case 0x270190u: goto label_270190;
        case 0x270194u: goto label_270194;
        case 0x270198u: goto label_270198;
        case 0x27019cu: goto label_27019c;
        case 0x2701a0u: goto label_2701a0;
        case 0x2701a4u: goto label_2701a4;
        case 0x2701a8u: goto label_2701a8;
        case 0x2701acu: goto label_2701ac;
        case 0x2701b0u: goto label_2701b0;
        case 0x2701b4u: goto label_2701b4;
        case 0x2701b8u: goto label_2701b8;
        case 0x2701bcu: goto label_2701bc;
        case 0x2701c0u: goto label_2701c0;
        case 0x2701c4u: goto label_2701c4;
        case 0x2701c8u: goto label_2701c8;
        case 0x2701ccu: goto label_2701cc;
        case 0x2701d0u: goto label_2701d0;
        case 0x2701d4u: goto label_2701d4;
        case 0x2701d8u: goto label_2701d8;
        case 0x2701dcu: goto label_2701dc;
        case 0x2701e0u: goto label_2701e0;
        case 0x2701e4u: goto label_2701e4;
        case 0x2701e8u: goto label_2701e8;
        case 0x2701ecu: goto label_2701ec;
        case 0x2701f0u: goto label_2701f0;
        case 0x2701f4u: goto label_2701f4;
        case 0x2701f8u: goto label_2701f8;
        case 0x2701fcu: goto label_2701fc;
        case 0x270200u: goto label_270200;
        case 0x270204u: goto label_270204;
        case 0x270208u: goto label_270208;
        case 0x27020cu: goto label_27020c;
        case 0x270210u: goto label_270210;
        case 0x270214u: goto label_270214;
        case 0x270218u: goto label_270218;
        case 0x27021cu: goto label_27021c;
        case 0x270220u: goto label_270220;
        case 0x270224u: goto label_270224;
        case 0x270228u: goto label_270228;
        case 0x27022cu: goto label_27022c;
        case 0x270230u: goto label_270230;
        case 0x270234u: goto label_270234;
        case 0x270238u: goto label_270238;
        case 0x27023cu: goto label_27023c;
        case 0x270240u: goto label_270240;
        case 0x270244u: goto label_270244;
        case 0x270248u: goto label_270248;
        case 0x27024cu: goto label_27024c;
        case 0x270250u: goto label_270250;
        case 0x270254u: goto label_270254;
        case 0x270258u: goto label_270258;
        case 0x27025cu: goto label_27025c;
        case 0x270260u: goto label_270260;
        case 0x270264u: goto label_270264;
        case 0x270268u: goto label_270268;
        case 0x27026cu: goto label_27026c;
        case 0x270270u: goto label_270270;
        case 0x270274u: goto label_270274;
        case 0x270278u: goto label_270278;
        case 0x27027cu: goto label_27027c;
        case 0x270280u: goto label_270280;
        case 0x270284u: goto label_270284;
        case 0x270288u: goto label_270288;
        case 0x27028cu: goto label_27028c;
        case 0x270290u: goto label_270290;
        case 0x270294u: goto label_270294;
        case 0x270298u: goto label_270298;
        case 0x27029cu: goto label_27029c;
        case 0x2702a0u: goto label_2702a0;
        case 0x2702a4u: goto label_2702a4;
        case 0x2702a8u: goto label_2702a8;
        case 0x2702acu: goto label_2702ac;
        case 0x2702b0u: goto label_2702b0;
        case 0x2702b4u: goto label_2702b4;
        case 0x2702b8u: goto label_2702b8;
        case 0x2702bcu: goto label_2702bc;
        case 0x2702c0u: goto label_2702c0;
        case 0x2702c4u: goto label_2702c4;
        case 0x2702c8u: goto label_2702c8;
        case 0x2702ccu: goto label_2702cc;
        case 0x2702d0u: goto label_2702d0;
        case 0x2702d4u: goto label_2702d4;
        case 0x2702d8u: goto label_2702d8;
        case 0x2702dcu: goto label_2702dc;
        case 0x2702e0u: goto label_2702e0;
        case 0x2702e4u: goto label_2702e4;
        case 0x2702e8u: goto label_2702e8;
        case 0x2702ecu: goto label_2702ec;
        case 0x2702f0u: goto label_2702f0;
        case 0x2702f4u: goto label_2702f4;
        case 0x2702f8u: goto label_2702f8;
        case 0x2702fcu: goto label_2702fc;
        case 0x270300u: goto label_270300;
        case 0x270304u: goto label_270304;
        case 0x270308u: goto label_270308;
        case 0x27030cu: goto label_27030c;
        case 0x270310u: goto label_270310;
        case 0x270314u: goto label_270314;
        case 0x270318u: goto label_270318;
        case 0x27031cu: goto label_27031c;
        case 0x270320u: goto label_270320;
        case 0x270324u: goto label_270324;
        case 0x270328u: goto label_270328;
        case 0x27032cu: goto label_27032c;
        case 0x270330u: goto label_270330;
        case 0x270334u: goto label_270334;
        case 0x270338u: goto label_270338;
        case 0x27033cu: goto label_27033c;
        case 0x270340u: goto label_270340;
        case 0x270344u: goto label_270344;
        default: break;
    }

    ctx->pc = 0x26f840u;

label_26f840:
    // 0x26f840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26f840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_26f844:
    // 0x26f844: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x26f844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_26f848:
    // 0x26f848: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x26f848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_26f84c:
    // 0x26f84c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f850:
    // 0x26f850: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x26f850u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_26f854:
    // 0x26f854: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x26f854u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_26f858:
    // 0x26f858: 0x2cc10008  sltiu       $at, $a2, 0x8
    ctx->pc = 0x26f858u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_26f85c:
    // 0x26f85c: 0x102002ac  beqz        $at, . + 4 + (0x2AC << 2)
label_26f860:
    if (ctx->pc == 0x26F860u) {
        ctx->pc = 0x26F864u;
        goto label_26f864;
    }
    ctx->pc = 0x26F85Cu;
    {
        const bool branch_taken_0x26f85c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f85c) {
            ctx->pc = 0x270310u;
            goto label_270310;
        }
    }
    ctx->pc = 0x26F864u;
label_26f864:
    // 0x26f864: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x26f864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_26f868:
    // 0x26f868: 0x24651540  addiu       $a1, $v1, 0x1540
    ctx->pc = 0x26f868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5440));
label_26f86c:
    // 0x26f86c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x26f86cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_26f870:
    // 0x26f870: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x26f870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_26f874:
    // 0x26f874: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x26f874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_26f878:
    // 0x26f878: 0xa00008  jr          $a1
label_26f87c:
    if (ctx->pc == 0x26F87Cu) {
        ctx->pc = 0x26F880u;
        goto label_26f880;
    }
    ctx->pc = 0x26F878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F878u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26F880u;
label_26f880:
    // 0x26f880: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26f880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_26f884:
    // 0x26f884: 0x8c261a98  lw          $a2, 0x1A98($at)
    ctx->pc = 0x26f884u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_26f888:
    // 0x26f888: 0x34c82000  ori         $t0, $a2, 0x2000
    ctx->pc = 0x26f888u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8192);
label_26f88c:
    // 0x26f88c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26f88cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_26f890:
    // 0x26f890: 0xac281a98  sw          $t0, 0x1A98($at)
    ctx->pc = 0x26f890u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 8));
label_26f894:
    // 0x26f894: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x26f894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_26f898:
    // 0x26f898: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f89c:
    // 0x26f89c: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x26f89cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
label_26f8a0:
    // 0x26f8a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26f8a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26f8a4:
    // 0x26f8a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f8a8:
    // 0x26f8a8: 0xe4801b50  swc1        $f0, 0x1B50($a0)
    ctx->pc = 0x26f8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6992), bits); }
label_26f8ac:
    // 0x26f8ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26f8acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26f8b0:
    // 0x26f8b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f8b4:
    // 0x26f8b4: 0xe4601b54  swc1        $f0, 0x1B54($v1)
    ctx->pc = 0x26f8b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6996), bits); }
label_26f8b8:
    // 0x26f8b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26f8b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26f8bc:
    // 0x26f8bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f8c0:
    // 0x26f8c0: 0xe4401b58  swc1        $f0, 0x1B58($v0)
    ctx->pc = 0x26f8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7000), bits); }
label_26f8c4:
    // 0x26f8c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f8c8:
    // 0x26f8c8: 0xac401b64  sw          $zero, 0x1B64($v0)
    ctx->pc = 0x26f8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 0));
label_26f8cc:
    // 0x26f8cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f8d0:
    // 0x26f8d0: 0x844713ae  lh          $a3, 0x13AE($v0)
    ctx->pc = 0x26f8d0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5038)));
label_26f8d4:
    // 0x26f8d4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x26f8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f8d8:
    // 0x26f8d8: 0xa4a713ac  sh          $a3, 0x13AC($a1)
    ctx->pc = 0x26f8d8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 5036), (uint16_t)GPR_U32(ctx, 7));
label_26f8dc:
    // 0x26f8dc: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x26f8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f8e0:
    // 0x26f8e0: 0xa4c0127c  sh          $zero, 0x127C($a2)
    ctx->pc = 0x26f8e0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4732), (uint16_t)GPR_U32(ctx, 0));
label_26f8e4:
    // 0x26f8e4: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x26f8e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f8e8:
    // 0x26f8e8: 0xc50000d4  lwc1        $f0, 0xD4($t0)
    ctx->pc = 0x26f8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26f8ec:
    // 0x26f8ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f8f0:
    // 0x26f8f0: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x26f8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_26f8f4:
    // 0x26f8f4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f8f8:
    // 0x26f8f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f8fc:
    // 0x26f8fc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26f8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_26f900:
    // 0x26f900: 0x24060a82  addiu       $a2, $zero, 0xA82
    ctx->pc = 0x26f900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2690));
label_26f904:
    // 0x26f904: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26f904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26f908:
    // 0x26f908: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26f908u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_26f90c:
    // 0x26f90c: 0xc0965d0  jal         func_259740
label_26f910:
    if (ctx->pc == 0x26F910u) {
        ctx->pc = 0x26F914u;
        goto label_26f914;
    }
    ctx->pc = 0x26F90Cu;
    SET_GPR_U32(ctx, 31, 0x26F914u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26F90Cu, 0x26F914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F914u;
label_26f914:
    // 0x26f914: 0x3c02458d  lui         $v0, 0x458D
    ctx->pc = 0x26f914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17805 << 16));
label_26f918:
    // 0x26f918: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x26f918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_26f91c:
    // 0x26f91c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26f91cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26f920:
    // 0x26f920: 0xc045630  jal         func_1158C0
label_26f924:
    if (ctx->pc == 0x26F924u) {
        ctx->pc = 0x26F928u;
        goto label_26f928;
    }
    ctx->pc = 0x26F920u;
    SET_GPR_U32(ctx, 31, 0x26F928u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x26F920u, 0x26F928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F928u;
label_26f928:
    // 0x26f928: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x26f928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_26f92c:
    // 0x26f92c: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x26f92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_26f930:
    // 0x26f930: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x26f930u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26f934:
    // 0x26f934: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x26f934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26f938:
    // 0x26f938: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x26f938u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_26f93c:
    // 0x26f93c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f940:
    // 0x26f940: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x26f940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_26f944:
    // 0x26f944: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x26f944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26f948:
    // 0x26f948: 0xc047fa2  jal         func_11FE88
label_26f94c:
    if (ctx->pc == 0x26F94Cu) {
        ctx->pc = 0x26F950u;
        goto label_26f950;
    }
    ctx->pc = 0x26F948u;
    SET_GPR_U32(ctx, 31, 0x26F950u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x26F948u, 0x26F950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F950u;
label_26f950:
    // 0x26f950: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f954:
    // 0x26f954: 0xac621b60  sw          $v0, 0x1B60($v1)
    ctx->pc = 0x26f954u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 2));
label_26f958:
    // 0x26f958: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f95c:
    // 0x26f95c: 0x8c621b60  lw          $v0, 0x1B60($v1)
    ctx->pc = 0x26f95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
label_26f960:
    // 0x26f960: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x26f960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
label_26f964:
    // 0x26f964: 0xac621b60  sw          $v0, 0x1B60($v1)
    ctx->pc = 0x26f964u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 2));
label_26f968:
    // 0x26f968: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x26f968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_26f96c:
    // 0x26f96c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26f96cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26f970:
    // 0x26f970: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f974:
    // 0x26f974: 0xe4801280  swc1        $f0, 0x1280($a0)
    ctx->pc = 0x26f974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4736), bits); }
label_26f978:
    // 0x26f978: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f97c:
    // 0x26f97c: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x26f97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
label_26f980:
    // 0x26f980: 0xc0675a4  jal         func_19D690
label_26f984:
    if (ctx->pc == 0x26F984u) {
        ctx->pc = 0x26F988u;
        goto label_26f988;
    }
    ctx->pc = 0x26F980u;
    SET_GPR_U32(ctx, 31, 0x26F988u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26F980u, 0x26F988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F988u;
label_26f988:
    // 0x26f988: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26f988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_26f98c:
    // 0x26f98c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26f98cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26f990:
    // 0x26f990: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f994:
    // 0x26f994: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f998:
    // 0x26f998: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x26f998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_26f99c:
    // 0x26f99c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26f99cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26f9a0:
    // 0x26f9a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f9a4:
    // 0x26f9a4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x26f9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_26f9a8:
    // 0x26f9a8: 0x24661b40  addiu       $a2, $v1, 0x1B40
    ctx->pc = 0x26f9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
label_26f9ac:
    // 0x26f9ac: 0x8c471b60  lw          $a3, 0x1B60($v0)
    ctx->pc = 0x26f9acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
label_26f9b0:
    // 0x26f9b0: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26f9b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_26f9b4:
    // 0x26f9b4: 0xc0bbfe4  jal         func_2EFF90
label_26f9b8:
    if (ctx->pc == 0x26F9B8u) {
        ctx->pc = 0x26F9BCu;
        goto label_26f9bc;
    }
    ctx->pc = 0x26F9B4u;
    SET_GPR_U32(ctx, 31, 0x26F9BCu);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26F9B4u, 0x26F9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F9BCu;
label_26f9bc:
    // 0x26f9bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f9c0:
    // 0x26f9c0: 0x24641b40  addiu       $a0, $v1, 0x1B40
    ctx->pc = 0x26f9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
label_26f9c4:
    // 0x26f9c4: 0xc0675a4  jal         func_19D690
label_26f9c8:
    if (ctx->pc == 0x26F9C8u) {
        ctx->pc = 0x26F9CCu;
        goto label_26f9cc;
    }
    ctx->pc = 0x26F9C4u;
    SET_GPR_U32(ctx, 31, 0x26F9CCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26F9C4u, 0x26F9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F9CCu;
label_26f9cc:
    // 0x26f9cc: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x26f9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_26f9d0:
    // 0x26f9d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26f9d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26f9d4:
    // 0x26f9d4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26f9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_26f9d8:
    // 0x26f9d8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26f9d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26f9dc:
    // 0x26f9dc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f9e0:
    // 0x26f9e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f9e4:
    // 0x26f9e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f9e8:
    // 0x26f9e8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x26f9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_26f9ec:
    // 0x26f9ec: 0x24661b40  addiu       $a2, $v1, 0x1B40
    ctx->pc = 0x26f9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
label_26f9f0:
    // 0x26f9f0: 0x8c471b60  lw          $a3, 0x1B60($v0)
    ctx->pc = 0x26f9f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
label_26f9f4:
    // 0x26f9f4: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26f9f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_26f9f8:
    // 0x26f9f8: 0xc0bbfe4  jal         func_2EFF90
label_26f9fc:
    if (ctx->pc == 0x26F9FCu) {
        ctx->pc = 0x26FA00u;
        goto label_26fa00;
    }
    ctx->pc = 0x26F9F8u;
    SET_GPR_U32(ctx, 31, 0x26FA00u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26F9F8u, 0x26FA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FA00u;
label_26fa00:
    // 0x26fa00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fa04:
    // 0x26fa04: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x26fa04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
label_26fa08:
    // 0x26fa08: 0xc0675a4  jal         func_19D690
label_26fa0c:
    if (ctx->pc == 0x26FA0Cu) {
        ctx->pc = 0x26FA10u;
        goto label_26fa10;
    }
    ctx->pc = 0x26FA08u;
    SET_GPR_U32(ctx, 31, 0x26FA10u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26FA08u, 0x26FA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FA10u;
label_26fa10:
    // 0x26fa10: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_26fa14:
    // 0x26fa14: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26fa14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26fa18:
    // 0x26fa18: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fa18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fa1c:
    // 0x26fa1c: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x26fa1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fa20:
    // 0x26fa20: 0x3c054316  lui         $a1, 0x4316
    ctx->pc = 0x26fa20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17174 << 16));
label_26fa24:
    // 0x26fa24: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x26fa24u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26fa28:
    // 0x26fa28: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26fa28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fa2c:
    // 0x26fa2c: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x26fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_26fa30:
    // 0x26fa30: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x26fa30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26fa34:
    // 0x26fa34: 0x24c61b40  addiu       $a2, $a2, 0x1B40
    ctx->pc = 0x26fa34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6976));
label_26fa38:
    // 0x26fa38: 0x8c671b60  lw          $a3, 0x1B60($v1)
    ctx->pc = 0x26fa38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
label_26fa3c:
    // 0x26fa3c: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26fa3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_26fa40:
    // 0x26fa40: 0xc0bbfe4  jal         func_2EFF90
label_26fa44:
    if (ctx->pc == 0x26FA44u) {
        ctx->pc = 0x26FA48u;
        goto label_26fa48;
    }
    ctx->pc = 0x26FA40u;
    SET_GPR_U32(ctx, 31, 0x26FA48u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26FA40u, 0x26FA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FA48u;
label_26fa48:
    // 0x26fa48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26fa48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fa4c:
    // 0x26fa4c: 0x24641b40  addiu       $a0, $v1, 0x1B40
    ctx->pc = 0x26fa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
label_26fa50:
    // 0x26fa50: 0xc0675a4  jal         func_19D690
label_26fa54:
    if (ctx->pc == 0x26FA54u) {
        ctx->pc = 0x26FA58u;
        goto label_26fa58;
    }
    ctx->pc = 0x26FA50u;
    SET_GPR_U32(ctx, 31, 0x26FA58u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26FA50u, 0x26FA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FA58u;
label_26fa58:
    // 0x26fa58: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_26fa5c:
    // 0x26fa5c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26fa5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26fa60:
    // 0x26fa60: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fa60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fa64:
    // 0x26fa64: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26fa64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fa68:
    // 0x26fa68: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x26fa68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_26fa6c:
    // 0x26fa6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26fa6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26fa70:
    // 0x26fa70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fa74:
    // 0x26fa74: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x26fa74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_26fa78:
    // 0x26fa78: 0x24661b40  addiu       $a2, $v1, 0x1B40
    ctx->pc = 0x26fa78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
label_26fa7c:
    // 0x26fa7c: 0x8c471b60  lw          $a3, 0x1B60($v0)
    ctx->pc = 0x26fa7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
label_26fa80:
    // 0x26fa80: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26fa80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_26fa84:
    // 0x26fa84: 0xc0bbfe4  jal         func_2EFF90
label_26fa88:
    if (ctx->pc == 0x26FA88u) {
        ctx->pc = 0x26FA8Cu;
        goto label_26fa8c;
    }
    ctx->pc = 0x26FA84u;
    SET_GPR_U32(ctx, 31, 0x26FA8Cu);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26FA84u, 0x26FA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FA8Cu;
label_26fa8c:
    // 0x26fa8c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fa90:
    // 0x26fa90: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x26fa90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
label_26fa94:
    // 0x26fa94: 0xc0675a4  jal         func_19D690
label_26fa98:
    if (ctx->pc == 0x26FA98u) {
        ctx->pc = 0x26FA9Cu;
        goto label_26fa9c;
    }
    ctx->pc = 0x26FA94u;
    SET_GPR_U32(ctx, 31, 0x26FA9Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26FA94u, 0x26FA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FA9Cu;
label_26fa9c:
    // 0x26fa9c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26fa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_26faa0:
    // 0x26faa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26faa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26faa4:
    // 0x26faa4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26faa8:
    // 0x26faa8: 0xe4401b40  swc1        $f0, 0x1B40($v0)
    ctx->pc = 0x26faa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6976), bits); }
label_26faac:
    // 0x26faac: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x26faacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
label_26fab0:
    // 0x26fab0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x26fab0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26fab4:
    // 0x26fab4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fab8:
    // 0x26fab8: 0xe4401b48  swc1        $f0, 0x1B48($v0)
    ctx->pc = 0x26fab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6984), bits); }
label_26fabc:
    // 0x26fabc: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x26fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
label_26fac0:
    // 0x26fac0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26fac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26fac4:
    // 0x26fac4: 0x3c044248  lui         $a0, 0x4248
    ctx->pc = 0x26fac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16968 << 16));
label_26fac8:
    // 0x26fac8: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x26fac8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26facc:
    // 0x26facc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26faccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fad0:
    // 0x26fad0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26fad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fad4:
    // 0x26fad4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fad8:
    // 0x26fad8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x26fad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26fadc:
    // 0x26fadc: 0x24661b40  addiu       $a2, $v1, 0x1B40
    ctx->pc = 0x26fadcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
label_26fae0:
    // 0x26fae0: 0x8c471b60  lw          $a3, 0x1B60($v0)
    ctx->pc = 0x26fae0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
label_26fae4:
    // 0x26fae4: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26fae4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_26fae8:
    // 0x26fae8: 0xc0bbfe4  jal         func_2EFF90
label_26faec:
    if (ctx->pc == 0x26FAECu) {
        ctx->pc = 0x26FAF0u;
        goto label_26faf0;
    }
    ctx->pc = 0x26FAE8u;
    SET_GPR_U32(ctx, 31, 0x26FAF0u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26FAE8u, 0x26FAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FAF0u;
label_26faf0:
    // 0x26faf0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26faf0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26faf4:
    // 0x26faf4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x26faf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26faf8:
    // 0x26faf8: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x26faf8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_26fafc:
    // 0x26fafc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x26fafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_26fb00:
    // 0x26fb00: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x26fb00u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_26fb04:
    // 0x26fb04: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26fb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fb08:
    // 0x26fb08: 0x906409db  lbu         $a0, 0x9DB($v1)
    ctx->pc = 0x26fb08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
label_26fb0c:
    // 0x26fb0c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x26fb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_26fb10:
    // 0x26fb10: 0x30450080  andi        $a1, $v0, 0x80
    ctx->pc = 0x26fb10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_26fb14:
    // 0x26fb14: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_26fb18:
    if (ctx->pc == 0x26FB18u) {
        ctx->pc = 0x26FB1Cu;
        goto label_26fb1c;
    }
    ctx->pc = 0x26FB14u;
    {
        const bool branch_taken_0x26fb14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fb14) {
            ctx->pc = 0x26FB30u;
            goto label_26fb30;
        }
    }
    ctx->pc = 0x26FB1Cu;
label_26fb1c:
    // 0x26fb1c: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x26fb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fb20:
    // 0x26fb20: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x26fb20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_26fb24:
    // 0x26fb24: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26fb24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26fb28:
    // 0x26fb28: 0xc0bc448  jal         func_2F1120
label_26fb2c:
    if (ctx->pc == 0x26FB2Cu) {
        ctx->pc = 0x26FB30u;
        goto label_26fb30;
    }
    ctx->pc = 0x26FB28u;
    SET_GPR_U32(ctx, 31, 0x26FB30u);
    ctx->pc = 0x2F1120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1120u, 0x26FB28u, 0x26FB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FB30u;
label_26fb30:
    // 0x26fb30: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x26fb30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fb34:
    // 0x26fb34: 0x910209da  lbu         $v0, 0x9DA($t0)
    ctx->pc = 0x26fb34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2522)));
label_26fb38:
    // 0x26fb38: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x26fb38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_26fb3c:
    // 0x26fb3c: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x26fb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_26fb40:
    // 0x26fb40: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_26fb44:
    if (ctx->pc == 0x26FB44u) {
        ctx->pc = 0x26FB48u;
        goto label_26fb48;
    }
    ctx->pc = 0x26FB40u;
    {
        const bool branch_taken_0x26fb40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fb40) {
            ctx->pc = 0x26FBE4u;
            goto label_26fbe4;
        }
    }
    ctx->pc = 0x26FB48u;
label_26fb48:
    // 0x26fb48: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fb4c:
    // 0x26fb4c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26fb4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26fb50:
    // 0x26fb50: 0xc096b40  jal         func_25AD00
label_26fb54:
    if (ctx->pc == 0x26FB54u) {
        ctx->pc = 0x26FB58u;
        goto label_26fb58;
    }
    ctx->pc = 0x26FB50u;
    SET_GPR_U32(ctx, 31, 0x26FB58u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26FB50u, 0x26FB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FB58u;
label_26fb58:
    // 0x26fb58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fb5c:
    // 0x26fb5c: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x26fb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_26fb60:
    // 0x26fb60: 0xc0675a4  jal         func_19D690
label_26fb64:
    if (ctx->pc == 0x26FB64u) {
        ctx->pc = 0x26FB68u;
        goto label_26fb68;
    }
    ctx->pc = 0x26FB60u;
    SET_GPR_U32(ctx, 31, 0x26FB68u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26FB60u, 0x26FB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FB68u;
label_26fb68:
    // 0x26fb68: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fb6c:
    // 0x26fb6c: 0xc05cd10  jal         func_173440
label_26fb70:
    if (ctx->pc == 0x26FB70u) {
        ctx->pc = 0x26FB74u;
        goto label_26fb74;
    }
    ctx->pc = 0x26FB6Cu;
    SET_GPR_U32(ctx, 31, 0x26FB74u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x26FB6Cu, 0x26FB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FB74u;
label_26fb74:
    // 0x26fb74: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fb78:
    // 0x26fb78: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x26fb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26fb7c:
    // 0x26fb7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26fb7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26fb80:
    // 0x26fb80: 0x0  nop
    ctx->pc = 0x26fb80u;
    // NOP
label_26fb84:
    // 0x26fb84: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26fb84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26fb88:
    // 0x26fb88: 0x0  nop
    ctx->pc = 0x26fb88u;
    // NOP
label_26fb8c:
    // 0x26fb8c: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_26fb90:
    if (ctx->pc == 0x26FB90u) {
        ctx->pc = 0x26FB94u;
        goto label_26fb94;
    }
    ctx->pc = 0x26FB8Cu;
    {
        const bool branch_taken_0x26fb8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26fb8c) {
            ctx->pc = 0x26FBC4u;
            goto label_26fbc4;
        }
    }
    ctx->pc = 0x26FB94u;
label_26fb94:
    // 0x26fb94: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fb98:
    // 0x26fb98: 0xc4811284  lwc1        $f1, 0x1284($a0)
    ctx->pc = 0x26fb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26fb9c:
    // 0x26fb9c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fba0:
    // 0x26fba0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x26fba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26fba4:
    // 0x26fba4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26fba4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_26fba8:
    // 0x26fba8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x26fba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_26fbac:
    // 0x26fbac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fbb0:
    // 0x26fbb0: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x26fbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26fbb4:
    // 0x26fbb4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26fbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fbb8:
    // 0x26fbb8: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x26fbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26fbbc:
    // 0x26fbbc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26fbbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_26fbc0:
    // 0x26fbc0: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x26fbc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
label_26fbc4:
    // 0x26fbc4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26fbc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26fbc8:
    // 0x26fbc8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fbcc:
    // 0x26fbcc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26fbccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26fbd0:
    // 0x26fbd0: 0xc0574f4  jal         func_15D3D0
label_26fbd4:
    if (ctx->pc == 0x26FBD4u) {
        ctx->pc = 0x26FBD8u;
        goto label_26fbd8;
    }
    ctx->pc = 0x26FBD0u;
    SET_GPR_U32(ctx, 31, 0x26FBD8u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x26FBD0u, 0x26FBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FBD8u;
label_26fbd8:
    // 0x26fbd8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26fbd8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26fbdc:
    // 0x26fbdc: 0x10000010  b           . + 4 + (0x10 << 2)
label_26fbe0:
    if (ctx->pc == 0x26FBE0u) {
        ctx->pc = 0x26FBE4u;
        goto label_26fbe4;
    }
    ctx->pc = 0x26FBDCu;
    {
        const bool branch_taken_0x26fbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fbdc) {
            ctx->pc = 0x26FC20u;
            goto label_26fc20;
        }
    }
    ctx->pc = 0x26FBE4u;
label_26fbe4:
    // 0x26fbe4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fbe8:
    // 0x26fbe8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26fbe8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26fbec:
    // 0x26fbec: 0xc096b40  jal         func_25AD00
label_26fbf0:
    if (ctx->pc == 0x26FBF0u) {
        ctx->pc = 0x26FBF4u;
        goto label_26fbf4;
    }
    ctx->pc = 0x26FBECu;
    SET_GPR_U32(ctx, 31, 0x26FBF4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26FBECu, 0x26FBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FBF4u;
label_26fbf4:
    // 0x26fbf4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26fbf4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26fbf8:
    // 0x26fbf8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fbfc:
    // 0x26fbfc: 0xc05cd10  jal         func_173440
label_26fc00:
    if (ctx->pc == 0x26FC00u) {
        ctx->pc = 0x26FC04u;
        goto label_26fc04;
    }
    ctx->pc = 0x26FBFCu;
    SET_GPR_U32(ctx, 31, 0x26FC04u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x26FBFCu, 0x26FC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FC04u;
label_26fc04:
    // 0x26fc04: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26fc04u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26fc08:
    // 0x26fc08: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26fc08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26fc0c:
    // 0x26fc0c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fc10:
    // 0x26fc10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26fc10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26fc14:
    // 0x26fc14: 0xc0573d8  jal         func_15CF60
label_26fc18:
    if (ctx->pc == 0x26FC18u) {
        ctx->pc = 0x26FC1Cu;
        goto label_26fc1c;
    }
    ctx->pc = 0x26FC14u;
    SET_GPR_U32(ctx, 31, 0x26FC1Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x26FC14u, 0x26FC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FC1Cu;
label_26fc1c:
    // 0x26fc1c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26fc1cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26fc20:
    // 0x26fc20: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26fc20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26fc24:
    // 0x26fc24: 0xc097530  jal         func_25D4C0
label_26fc28:
    if (ctx->pc == 0x26FC28u) {
        ctx->pc = 0x26FC2Cu;
        goto label_26fc2c;
    }
    ctx->pc = 0x26FC24u;
    SET_GPR_U32(ctx, 31, 0x26FC2Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26FC24u, 0x26FC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FC2Cu;
label_26fc2c:
    // 0x26fc2c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26fc2cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26fc30:
    // 0x26fc30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26fc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fc34:
    // 0x26fc34: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x26fc34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_26fc38:
    // 0x26fc38: 0x106001b5  beqz        $v1, . + 4 + (0x1B5 << 2)
label_26fc3c:
    if (ctx->pc == 0x26FC3Cu) {
        ctx->pc = 0x26FC40u;
        goto label_26fc40;
    }
    ctx->pc = 0x26FC38u;
    {
        const bool branch_taken_0x26fc38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fc38) {
            ctx->pc = 0x270310u;
            goto label_270310;
        }
    }
    ctx->pc = 0x26FC40u;
label_26fc40:
    // 0x26fc40: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fc44:
    // 0x26fc44: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x26fc44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_26fc48:
    // 0x26fc48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26fc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_26fc4c:
    // 0x26fc4c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x26fc4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_26fc50:
    // 0x26fc50: 0x100001af  b           . + 4 + (0x1AF << 2)
label_26fc54:
    if (ctx->pc == 0x26FC54u) {
        ctx->pc = 0x26FC58u;
        goto label_26fc58;
    }
    ctx->pc = 0x26FC50u;
    {
        const bool branch_taken_0x26fc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fc50) {
            ctx->pc = 0x270310u;
            goto label_270310;
        }
    }
    ctx->pc = 0x26FC58u;
label_26fc58:
    // 0x26fc58: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fc5c:
    // 0x26fc5c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fc60:
    // 0x26fc60: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26fc60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_26fc64:
    // 0x26fc64: 0x2406056a  addiu       $a2, $zero, 0x56A
    ctx->pc = 0x26fc64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1386));
label_26fc68:
    // 0x26fc68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26fc68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26fc6c:
    // 0x26fc6c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26fc6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_26fc70:
    // 0x26fc70: 0xc0965d0  jal         func_259740
label_26fc74:
    if (ctx->pc == 0x26FC74u) {
        ctx->pc = 0x26FC78u;
        goto label_26fc78;
    }
    ctx->pc = 0x26FC70u;
    SET_GPR_U32(ctx, 31, 0x26FC78u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26FC70u, 0x26FC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FC78u;
label_26fc78:
    // 0x26fc78: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fc7c:
    // 0x26fc7c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26fc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_26fc80:
    // 0x26fc80: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x26fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_26fc84:
    // 0x26fc84: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26fc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_26fc88:
    // 0x26fc88: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x26fc88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_26fc8c:
    // 0x26fc8c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fc90:
    // 0x26fc90: 0xa44013c0  sh          $zero, 0x13C0($v0)
    ctx->pc = 0x26fc90u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5056), (uint16_t)GPR_U32(ctx, 0));
label_26fc94:
    // 0x26fc94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x26fc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26fc98:
    // 0x26fc98: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fc9c:
    // 0x26fc9c: 0xa44313c2  sh          $v1, 0x13C2($v0)
    ctx->pc = 0x26fc9cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5058), (uint16_t)GPR_U32(ctx, 3));
label_26fca0:
    // 0x26fca0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26fca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fca4:
    // 0x26fca4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x26fca4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_26fca8:
    // 0x26fca8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26fca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26fcac:
    // 0x26fcac: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x26fcacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_26fcb0:
    // 0x26fcb0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fcb4:
    // 0x26fcb4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26fcb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26fcb8:
    // 0x26fcb8: 0xc096b40  jal         func_25AD00
label_26fcbc:
    if (ctx->pc == 0x26FCBCu) {
        ctx->pc = 0x26FCC0u;
        goto label_26fcc0;
    }
    ctx->pc = 0x26FCB8u;
    SET_GPR_U32(ctx, 31, 0x26FCC0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26FCB8u, 0x26FCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FCC0u;
label_26fcc0:
    // 0x26fcc0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fcc4:
    // 0x26fcc4: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x26fcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_26fcc8:
    // 0x26fcc8: 0xc0675a4  jal         func_19D690
label_26fccc:
    if (ctx->pc == 0x26FCCCu) {
        ctx->pc = 0x26FCD0u;
        goto label_26fcd0;
    }
    ctx->pc = 0x26FCC8u;
    SET_GPR_U32(ctx, 31, 0x26FCD0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26FCC8u, 0x26FCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FCD0u;
label_26fcd0:
    // 0x26fcd0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fcd4:
    // 0x26fcd4: 0xc05cd10  jal         func_173440
label_26fcd8:
    if (ctx->pc == 0x26FCD8u) {
        ctx->pc = 0x26FCDCu;
        goto label_26fcdc;
    }
    ctx->pc = 0x26FCD4u;
    SET_GPR_U32(ctx, 31, 0x26FCDCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x26FCD4u, 0x26FCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FCDCu;
label_26fcdc:
    // 0x26fcdc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fce0:
    // 0x26fce0: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x26fce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26fce4:
    // 0x26fce4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26fce4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26fce8:
    // 0x26fce8: 0x0  nop
    ctx->pc = 0x26fce8u;
    // NOP
label_26fcec:
    // 0x26fcec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26fcecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26fcf0:
    // 0x26fcf0: 0x0  nop
    ctx->pc = 0x26fcf0u;
    // NOP
label_26fcf4:
    // 0x26fcf4: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_26fcf8:
    if (ctx->pc == 0x26FCF8u) {
        ctx->pc = 0x26FCFCu;
        goto label_26fcfc;
    }
    ctx->pc = 0x26FCF4u;
    {
        const bool branch_taken_0x26fcf4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26fcf4) {
            ctx->pc = 0x26FD2Cu;
            goto label_26fd2c;
        }
    }
    ctx->pc = 0x26FCFCu;
label_26fcfc:
    // 0x26fcfc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fd00:
    // 0x26fd00: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x26fd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26fd04:
    // 0x26fd04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fd08:
    // 0x26fd08: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x26fd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26fd0c:
    // 0x26fd0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26fd0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_26fd10:
    // 0x26fd10: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x26fd10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_26fd14:
    // 0x26fd14: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fd18:
    // 0x26fd18: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x26fd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26fd1c:
    // 0x26fd1c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fd20:
    // 0x26fd20: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x26fd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26fd24:
    // 0x26fd24: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26fd24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_26fd28:
    // 0x26fd28: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x26fd28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_26fd2c:
    // 0x26fd2c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26fd2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26fd30:
    // 0x26fd30: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fd34:
    // 0x26fd34: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26fd34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26fd38:
    // 0x26fd38: 0xc0574f4  jal         func_15D3D0
label_26fd3c:
    if (ctx->pc == 0x26FD3Cu) {
        ctx->pc = 0x26FD40u;
        goto label_26fd40;
    }
    ctx->pc = 0x26FD38u;
    SET_GPR_U32(ctx, 31, 0x26FD40u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x26FD38u, 0x26FD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FD40u;
label_26fd40:
    // 0x26fd40: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26fd40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26fd44:
    // 0x26fd44: 0xc097530  jal         func_25D4C0
label_26fd48:
    if (ctx->pc == 0x26FD48u) {
        ctx->pc = 0x26FD4Cu;
        goto label_26fd4c;
    }
    ctx->pc = 0x26FD44u;
    SET_GPR_U32(ctx, 31, 0x26FD4Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26FD44u, 0x26FD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FD4Cu;
label_26fd4c:
    // 0x26fd4c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26fd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fd50:
    // 0x26fd50: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x26fd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26fd54:
    // 0x26fd54: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x26fd54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_26fd58:
    // 0x26fd58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26fd58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26fd5c:
    // 0x26fd5c: 0x0  nop
    ctx->pc = 0x26fd5cu;
    // NOP
label_26fd60:
    // 0x26fd60: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26fd60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26fd64:
    // 0x26fd64: 0x0  nop
    ctx->pc = 0x26fd64u;
    // NOP
label_26fd68:
    // 0x26fd68: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_26fd6c:
    if (ctx->pc == 0x26FD6Cu) {
        ctx->pc = 0x26FD70u;
        goto label_26fd70;
    }
    ctx->pc = 0x26FD68u;
    {
        const bool branch_taken_0x26fd68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26fd68) {
            ctx->pc = 0x26FD90u;
            goto label_26fd90;
        }
    }
    ctx->pc = 0x26FD70u;
label_26fd70:
    // 0x26fd70: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26fd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fd74:
    // 0x26fd74: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x26fd74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_26fd78:
    // 0x26fd78: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_26fd7c:
    if (ctx->pc == 0x26FD7Cu) {
        ctx->pc = 0x26FD80u;
        goto label_26fd80;
    }
    ctx->pc = 0x26FD78u;
    {
        const bool branch_taken_0x26fd78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fd78) {
            ctx->pc = 0x26FD90u;
            goto label_26fd90;
        }
    }
    ctx->pc = 0x26FD80u;
label_26fd80:
    // 0x26fd80: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fd80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fd84:
    // 0x26fd84: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x26fd84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_26fd88:
    // 0x26fd88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26fd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_26fd8c:
    // 0x26fd8c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x26fd8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_26fd90:
    // 0x26fd90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26fd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fd94:
    // 0x26fd94: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x26fd94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
label_26fd98:
    // 0x26fd98: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x26fd98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_26fd9c:
    // 0x26fd9c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x26fd9cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_26fda0:
    // 0x26fda0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x26fda0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_26fda4:
    // 0x26fda4: 0x1460015a  bnez        $v1, . + 4 + (0x15A << 2)
label_26fda8:
    if (ctx->pc == 0x26FDA8u) {
        ctx->pc = 0x26FDACu;
        goto label_26fdac;
    }
    ctx->pc = 0x26FDA4u;
    {
        const bool branch_taken_0x26fda4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26fda4) {
            ctx->pc = 0x270310u;
            goto label_270310;
        }
    }
    ctx->pc = 0x26FDACu;
label_26fdac:
    // 0x26fdac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x26fdacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_26fdb0:
    // 0x26fdb0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26fdb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26fdb4:
    // 0x26fdb4: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x26fdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_26fdb8:
    // 0x26fdb8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x26fdb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_26fdbc:
    // 0x26fdbc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x26fdbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_26fdc0:
    // 0x26fdc0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fdc4:
    // 0x26fdc4: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x26fdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_26fdc8:
    // 0x26fdc8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x26fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_26fdcc:
    // 0x26fdcc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26fdccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26fdd0:
    // 0x26fdd0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26fdd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26fdd4:
    // 0x26fdd4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26fdd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26fdd8:
    // 0x26fdd8: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x26fdd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_26fddc:
    // 0x26fddc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x26fddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26fde0:
    // 0x26fde0: 0xc086488  jal         func_219220
label_26fde4:
    if (ctx->pc == 0x26FDE4u) {
        ctx->pc = 0x26FDE8u;
        goto label_26fde8;
    }
    ctx->pc = 0x26FDE0u;
    SET_GPR_U32(ctx, 31, 0x26FDE8u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x26FDE0u, 0x26FDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FDE8u;
label_26fde8:
    // 0x26fde8: 0x10000149  b           . + 4 + (0x149 << 2)
label_26fdec:
    if (ctx->pc == 0x26FDECu) {
        ctx->pc = 0x26FDF0u;
        goto label_26fdf0;
    }
    ctx->pc = 0x26FDE8u;
    {
        const bool branch_taken_0x26fde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fde8) {
            ctx->pc = 0x270310u;
            goto label_270310;
        }
    }
    ctx->pc = 0x26FDF0u;
label_26fdf0:
    // 0x26fdf0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fdf4:
    // 0x26fdf4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fdf8:
    // 0x26fdf8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26fdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_26fdfc:
    // 0x26fdfc: 0x2406006b  addiu       $a2, $zero, 0x6B
    ctx->pc = 0x26fdfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
label_26fe00:
    // 0x26fe00: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26fe00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26fe04:
    // 0x26fe04: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26fe04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_26fe08:
    // 0x26fe08: 0xc0965d0  jal         func_259740
label_26fe0c:
    if (ctx->pc == 0x26FE0Cu) {
        ctx->pc = 0x26FE10u;
        goto label_26fe10;
    }
    ctx->pc = 0x26FE08u;
    SET_GPR_U32(ctx, 31, 0x26FE10u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26FE08u, 0x26FE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FE10u;
label_26fe10:
    // 0x26fe10: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fe14:
    // 0x26fe14: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x26fe14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
label_26fe18:
    // 0x26fe18: 0xc0675a4  jal         func_19D690
label_26fe1c:
    if (ctx->pc == 0x26FE1Cu) {
        ctx->pc = 0x26FE20u;
        goto label_26fe20;
    }
    ctx->pc = 0x26FE18u;
    SET_GPR_U32(ctx, 31, 0x26FE20u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26FE18u, 0x26FE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FE20u;
label_26fe20:
    // 0x26fe20: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x26fe20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_26fe24:
    // 0x26fe24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26fe24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26fe28:
    // 0x26fe28: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fe28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fe2c:
    // 0x26fe2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26fe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fe30:
    // 0x26fe30: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_26fe34:
    // 0x26fe34: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26fe34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26fe38:
    // 0x26fe38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fe3c:
    // 0x26fe3c: 0x94420a02  lhu         $v0, 0xA02($v0)
    ctx->pc = 0x26fe3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2562)));
label_26fe40:
    // 0x26fe40: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x26fe40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_26fe44:
    // 0x26fe44: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x26fe44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_26fe48:
    // 0x26fe48: 0x24661b40  addiu       $a2, $v1, 0x1B40
    ctx->pc = 0x26fe48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
label_26fe4c:
    // 0x26fe4c: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26fe4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_26fe50:
    // 0x26fe50: 0xc0bbfe4  jal         func_2EFF90
label_26fe54:
    if (ctx->pc == 0x26FE54u) {
        ctx->pc = 0x26FE58u;
        goto label_26fe58;
    }
    ctx->pc = 0x26FE50u;
    SET_GPR_U32(ctx, 31, 0x26FE58u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26FE50u, 0x26FE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FE58u;
label_26fe58:
    // 0x26fe58: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fe58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fe5c:
    // 0x26fe5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26fe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fe60:
    // 0x26fe60: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x26fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_26fe64:
    // 0x26fe64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26fe64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26fe68:
    // 0x26fe68: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_26fe6c:
    // 0x26fe6c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26fe6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26fe70:
    // 0x26fe70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fe70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fe74:
    // 0x26fe74: 0x94420a02  lhu         $v0, 0xA02($v0)
    ctx->pc = 0x26fe74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2562)));
label_26fe78:
    // 0x26fe78: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x26fe78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_26fe7c:
    // 0x26fe7c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x26fe7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_26fe80:
    // 0x26fe80: 0x24661b40  addiu       $a2, $v1, 0x1B40
    ctx->pc = 0x26fe80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
label_26fe84:
    // 0x26fe84: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26fe84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_26fe88:
    // 0x26fe88: 0xc0bbfe4  jal         func_2EFF90
label_26fe8c:
    if (ctx->pc == 0x26FE8Cu) {
        ctx->pc = 0x26FE90u;
        goto label_26fe90;
    }
    ctx->pc = 0x26FE88u;
    SET_GPR_U32(ctx, 31, 0x26FE90u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26FE88u, 0x26FE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FE90u;
label_26fe90:
    // 0x26fe90: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x26fe90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
label_26fe94:
    // 0x26fe94: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x26fe94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26fe98:
    // 0x26fe98: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fe98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fe9c:
    // 0x26fe9c: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x26fe9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fea0:
    // 0x26fea0: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x26fea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_26fea4:
    // 0x26fea4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x26fea4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26fea8:
    // 0x26fea8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x26fea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26feac:
    // 0x26feac: 0x94a30a02  lhu         $v1, 0xA02($a1)
    ctx->pc = 0x26feacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2562)));
label_26feb0:
    // 0x26feb0: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x26feb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_26feb4:
    // 0x26feb4: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x26feb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_26feb8:
    // 0x26feb8: 0x24c61b40  addiu       $a2, $a2, 0x1B40
    ctx->pc = 0x26feb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6976));
label_26febc:
    // 0x26febc: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26febcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_26fec0:
    // 0x26fec0: 0xc0bbfe4  jal         func_2EFF90
label_26fec4:
    if (ctx->pc == 0x26FEC4u) {
        ctx->pc = 0x26FEC8u;
        goto label_26fec8;
    }
    ctx->pc = 0x26FEC0u;
    SET_GPR_U32(ctx, 31, 0x26FEC8u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26FEC0u, 0x26FEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FEC8u;
label_26fec8:
    // 0x26fec8: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x26fec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
label_26fecc:
    // 0x26fecc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x26feccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26fed0:
    // 0x26fed0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fed4:
    // 0x26fed4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26fed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fed8:
    // 0x26fed8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26fed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_26fedc:
    // 0x26fedc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26fedcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26fee0:
    // 0x26fee0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26fee4:
    // 0x26fee4: 0x94420a02  lhu         $v0, 0xA02($v0)
    ctx->pc = 0x26fee4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2562)));
label_26fee8:
    // 0x26fee8: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x26fee8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_26feec:
    // 0x26feec: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x26feecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_26fef0:
    // 0x26fef0: 0x24661b40  addiu       $a2, $v1, 0x1B40
    ctx->pc = 0x26fef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
label_26fef4:
    // 0x26fef4: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26fef4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_26fef8:
    // 0x26fef8: 0xc0bbfe4  jal         func_2EFF90
label_26fefc:
    if (ctx->pc == 0x26FEFCu) {
        ctx->pc = 0x26FF00u;
        goto label_26ff00;
    }
    ctx->pc = 0x26FEF8u;
    SET_GPR_U32(ctx, 31, 0x26FF00u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26FEF8u, 0x26FF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FF00u;
label_26ff00:
    // 0x26ff00: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x26ff00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_26ff04:
    // 0x26ff04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26ff08:
    // 0x26ff08: 0xac441b6c  sw          $a0, 0x1B6C($v0)
    ctx->pc = 0x26ff08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7020), GPR_U32(ctx, 4));
label_26ff0c:
    // 0x26ff0c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x26ff0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26ff10:
    // 0x26ff10: 0x90a60002  lbu         $a2, 0x2($a1)
    ctx->pc = 0x26ff10u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_26ff14:
    // 0x26ff14: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x26ff14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_26ff18:
    // 0x26ff18: 0xa0a70002  sb          $a3, 0x2($a1)
    ctx->pc = 0x26ff18u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 7));
label_26ff1c:
    // 0x26ff1c: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x26ff1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26ff20:
    // 0x26ff20: 0xc5011b54  lwc1        $f1, 0x1B54($t0)
    ctx->pc = 0x26ff20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26ff24:
    // 0x26ff24: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26ff24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_26ff28:
    // 0x26ff28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26ff28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26ff2c:
    // 0x26ff2c: 0x0  nop
    ctx->pc = 0x26ff2cu;
    // NOP
label_26ff30:
    // 0x26ff30: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26ff30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26ff34:
    // 0x26ff34: 0xe5001b54  swc1        $f0, 0x1B54($t0)
    ctx->pc = 0x26ff34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 6996), bits); }
label_26ff38:
    // 0x26ff38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26ff3c:
    // 0x26ff3c: 0x8c421b64  lw          $v0, 0x1B64($v0)
    ctx->pc = 0x26ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7012)));
label_26ff40:
    // 0x26ff40: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_26ff44:
    if (ctx->pc == 0x26FF44u) {
        ctx->pc = 0x26FF48u;
        goto label_26ff48;
    }
    ctx->pc = 0x26FF40u;
    {
        const bool branch_taken_0x26ff40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ff40) {
            ctx->pc = 0x26FFCCu;
            goto label_26ffcc;
        }
    }
    ctx->pc = 0x26FF48u;
label_26ff48:
    // 0x26ff48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ff48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26ff4c:
    // 0x26ff4c: 0xc4611b58  lwc1        $f1, 0x1B58($v1)
    ctx->pc = 0x26ff4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26ff50:
    // 0x26ff50: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x26ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_26ff54:
    // 0x26ff54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26ff54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26ff58:
    // 0x26ff58: 0x0  nop
    ctx->pc = 0x26ff58u;
    // NOP
label_26ff5c:
    // 0x26ff5c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26ff5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_26ff60:
    // 0x26ff60: 0xe4601b58  swc1        $f0, 0x1B58($v1)
    ctx->pc = 0x26ff60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 7000), bits); }
label_26ff64:
    // 0x26ff64: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26ff68:
    // 0x26ff68: 0xc4411b58  lwc1        $f1, 0x1B58($v0)
    ctx->pc = 0x26ff68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26ff6c:
    // 0x26ff6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26ff6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26ff70:
    // 0x26ff70: 0x0  nop
    ctx->pc = 0x26ff70u;
    // NOP
label_26ff74:
    // 0x26ff74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26ff74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26ff78:
    // 0x26ff78: 0x0  nop
    ctx->pc = 0x26ff78u;
    // NOP
label_26ff7c:
    // 0x26ff7c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_26ff80:
    if (ctx->pc == 0x26FF80u) {
        ctx->pc = 0x26FF84u;
        goto label_26ff84;
    }
    ctx->pc = 0x26FF7Cu;
    {
        const bool branch_taken_0x26ff7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ff7c) {
            ctx->pc = 0x26FF90u;
            goto label_26ff90;
        }
    }
    ctx->pc = 0x26FF84u;
label_26ff84:
    // 0x26ff84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26ff84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26ff88:
    // 0x26ff88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ff88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26ff8c:
    // 0x26ff8c: 0xe4601b58  swc1        $f0, 0x1B58($v1)
    ctx->pc = 0x26ff8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 7000), bits); }
label_26ff90:
    // 0x26ff90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ff90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26ff94:
    // 0x26ff94: 0x8c621b6c  lw          $v0, 0x1B6C($v1)
    ctx->pc = 0x26ff94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
label_26ff98:
    // 0x26ff98: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_26ff9c:
    if (ctx->pc == 0x26FF9Cu) {
        ctx->pc = 0x26FFA0u;
        goto label_26ffa0;
    }
    ctx->pc = 0x26FF98u;
    {
        const bool branch_taken_0x26ff98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ff98) {
            ctx->pc = 0x27001Cu;
            goto label_27001c;
        }
    }
    ctx->pc = 0x26FFA0u;
label_26ffa0:
    // 0x26ffa0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26ffa4:
    // 0x26ffa4: 0x8c421b6c  lw          $v0, 0x1B6C($v0)
    ctx->pc = 0x26ffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
label_26ffa8:
    // 0x26ffa8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x26ffa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_26ffac:
    // 0x26ffac: 0xc0bcf50  jal         func_2F3D40
label_26ffb0:
    if (ctx->pc == 0x26FFB0u) {
        ctx->pc = 0x26FFB4u;
        goto label_26ffb4;
    }
    ctx->pc = 0x26FFACu;
    SET_GPR_U32(ctx, 31, 0x26FFB4u);
    ctx->pc = 0x2F3D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3D40u, 0x26FFACu, 0x26FFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FFB4u;
label_26ffb4:
    // 0x26ffb4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ffb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26ffb8:
    // 0x26ffb8: 0x8c821b6c  lw          $v0, 0x1B6C($a0)
    ctx->pc = 0x26ffb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7020)));
label_26ffbc:
    // 0x26ffbc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26ffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_26ffc0:
    // 0x26ffc0: 0xac821b6c  sw          $v0, 0x1B6C($a0)
    ctx->pc = 0x26ffc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7020), GPR_U32(ctx, 2));
label_26ffc4:
    // 0x26ffc4: 0x10000015  b           . + 4 + (0x15 << 2)
label_26ffc8:
    if (ctx->pc == 0x26FFC8u) {
        ctx->pc = 0x26FFCCu;
        goto label_26ffcc;
    }
    ctx->pc = 0x26FFC4u;
    {
        const bool branch_taken_0x26ffc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ffc4) {
            ctx->pc = 0x27001Cu;
            goto label_27001c;
        }
    }
    ctx->pc = 0x26FFCCu;
label_26ffcc:
    // 0x26ffcc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ffccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26ffd0:
    // 0x26ffd0: 0xc4811b58  lwc1        $f1, 0x1B58($a0)
    ctx->pc = 0x26ffd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26ffd4:
    // 0x26ffd4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x26ffd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_26ffd8:
    // 0x26ffd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26ffd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26ffdc:
    // 0x26ffdc: 0x0  nop
    ctx->pc = 0x26ffdcu;
    // NOP
label_26ffe0:
    // 0x26ffe0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26ffe0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26ffe4:
    // 0x26ffe4: 0xe4801b58  swc1        $f0, 0x1B58($a0)
    ctx->pc = 0x26ffe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7000), bits); }
label_26ffe8:
    // 0x26ffe8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26ffec:
    // 0x26ffec: 0xc4411b58  lwc1        $f1, 0x1B58($v0)
    ctx->pc = 0x26ffecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26fff0:
    // 0x26fff0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x26fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_26fff4:
    // 0x26fff4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26fff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26fff8:
    // 0x26fff8: 0x0  nop
    ctx->pc = 0x26fff8u;
    // NOP
label_26fffc:
    // 0x26fffc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26fffcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_270000:
    // 0x270000: 0x0  nop
    ctx->pc = 0x270000u;
    // NOP
label_270004:
    // 0x270004: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_270008:
    if (ctx->pc == 0x270008u) {
        ctx->pc = 0x27000Cu;
        goto label_27000c;
    }
    ctx->pc = 0x270004u;
    {
        const bool branch_taken_0x270004 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x270004) {
            ctx->pc = 0x27001Cu;
            goto label_27001c;
        }
    }
    ctx->pc = 0x27000Cu;
label_27000c:
    // 0x27000c: 0x3c054300  lui         $a1, 0x4300
    ctx->pc = 0x27000cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17152 << 16));
label_270010:
    // 0x270010: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x270010u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_270014:
    // 0x270014: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x270014u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_270018:
    // 0x270018: 0xe4c01b58  swc1        $f0, 0x1B58($a2)
    ctx->pc = 0x270018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 7000), bits); }
label_27001c:
    // 0x27001c: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x27001cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_270020:
    // 0x270020: 0xc4e11b58  lwc1        $f1, 0x1B58($a3)
    ctx->pc = 0x270020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_270024:
    // 0x270024: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x270024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_270028:
    // 0x270028: 0x0  nop
    ctx->pc = 0x270028u;
    // NOP
label_27002c:
    // 0x27002c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27002cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_270030:
    // 0x270030: 0x0  nop
    ctx->pc = 0x270030u;
    // NOP
label_270034:
    // 0x270034: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_270038:
    if (ctx->pc == 0x270038u) {
        ctx->pc = 0x27003Cu;
        goto label_27003c;
    }
    ctx->pc = 0x270034u;
    {
        const bool branch_taken_0x270034 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x270034) {
            ctx->pc = 0x270070u;
            goto label_270070;
        }
    }
    ctx->pc = 0x27003Cu;
label_27003c:
    // 0x27003c: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x27003cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_270040:
    // 0x270040: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_270044:
    // 0x270044: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x270044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_270048:
    // 0x270048: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_27004c:
    // 0x27004c: 0xc50c1b54  lwc1        $f12, 0x1B54($t0)
    ctx->pc = 0x27004cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_270050:
    // 0x270050: 0xc44d1b58  lwc1        $f13, 0x1B58($v0)
    ctx->pc = 0x270050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_270054:
    // 0x270054: 0xc46e1b58  lwc1        $f14, 0x1B58($v1)
    ctx->pc = 0x270054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_270058:
    // 0x270058: 0xc48f1b58  lwc1        $f15, 0x1B58($a0)
    ctx->pc = 0x270058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_27005c:
    // 0x27005c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27005cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270060:
    // 0x270060: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x270060u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_270064:
    // 0x270064: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x270064u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_270068:
    // 0x270068: 0xc0bc138  jal         func_2F04E0
label_27006c:
    if (ctx->pc == 0x27006Cu) {
        ctx->pc = 0x270070u;
        goto label_270070;
    }
    ctx->pc = 0x270068u;
    SET_GPR_U32(ctx, 31, 0x270070u);
    ctx->pc = 0x2F04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F04E0u, 0x270068u, 0x270070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270070u;
label_270070:
    // 0x270070: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_270074:
    // 0x270074: 0x904409db  lbu         $a0, 0x9DB($v0)
    ctx->pc = 0x270074u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
label_270078:
    // 0x270078: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x270078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_27007c:
    // 0x27007c: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x27007cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_270080:
    // 0x270080: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_270084:
    if (ctx->pc == 0x270084u) {
        ctx->pc = 0x270088u;
        goto label_270088;
    }
    ctx->pc = 0x270080u;
    {
        const bool branch_taken_0x270080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x270080) {
            ctx->pc = 0x27009Cu;
            goto label_27009c;
        }
    }
    ctx->pc = 0x270088u;
label_270088:
    // 0x270088: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x270088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_27008c:
    // 0x27008c: 0x8c251a64  lw          $a1, 0x1A64($at)
    ctx->pc = 0x27008cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_270090:
    // 0x270090: 0x34a60020  ori         $a2, $a1, 0x20
    ctx->pc = 0x270090u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32);
label_270094:
    // 0x270094: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x270094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_270098:
    // 0x270098: 0xac261a64  sw          $a2, 0x1A64($at)
    ctx->pc = 0x270098u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 6));
label_27009c:
    // 0x27009c: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x27009cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2700a0:
    // 0x2700a0: 0x90e809db  lbu         $t0, 0x9DB($a3)
    ctx->pc = 0x2700a0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2523)));
label_2700a4:
    // 0x2700a4: 0x310200ff  andi        $v0, $t0, 0xFF
    ctx->pc = 0x2700a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_2700a8:
    // 0x2700a8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2700a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_2700ac:
    // 0x2700ac: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_2700b0:
    if (ctx->pc == 0x2700B0u) {
        ctx->pc = 0x2700B4u;
        goto label_2700b4;
    }
    ctx->pc = 0x2700ACu;
    {
        const bool branch_taken_0x2700ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2700ac) {
            ctx->pc = 0x270154u;
            goto label_270154;
        }
    }
    ctx->pc = 0x2700B4u;
label_2700b4:
    // 0x2700b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2700b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2700b8:
    // 0x2700b8: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x2700b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_2700bc:
    // 0x2700bc: 0x34828000  ori         $v0, $a0, 0x8000
    ctx->pc = 0x2700bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
label_2700c0:
    // 0x2700c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2700c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2700c4:
    // 0x2700c4: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x2700c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_2700c8:
    // 0x2700c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2700c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2700cc:
    // 0x2700cc: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x2700ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_2700d0:
    // 0x2700d0: 0x2404dfff  addiu       $a0, $zero, -0x2001
    ctx->pc = 0x2700d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
label_2700d4:
    // 0x2700d4: 0x443024  and         $a2, $v0, $a0
    ctx->pc = 0x2700d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2700d8:
    // 0x2700d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2700d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2700dc:
    // 0x2700dc: 0xac261a98  sw          $a2, 0x1A98($at)
    ctx->pc = 0x2700dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 6));
label_2700e0:
    // 0x2700e0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2700e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2700e4:
    // 0x2700e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2700e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2700e8:
    // 0x2700e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2700e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2700ec:
    // 0x2700ec: 0x8ca61344  lw          $a2, 0x1344($a1)
    ctx->pc = 0x2700ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4932)));
label_2700f0:
    // 0x2700f0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2700f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2700f4:
    // 0x2700f4: 0x8c671334  lw          $a3, 0x1334($v1)
    ctx->pc = 0x2700f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
label_2700f8:
    // 0x2700f8: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2700f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_2700fc:
    // 0x2700fc: 0x8c48133c  lw          $t0, 0x133C($v0)
    ctx->pc = 0x2700fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4924)));
label_270100:
    // 0x270100: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x270100u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_270104:
    // 0x270104: 0xc050f5c  jal         func_143D70
label_270108:
    if (ctx->pc == 0x270108u) {
        ctx->pc = 0x27010Cu;
        goto label_27010c;
    }
    ctx->pc = 0x270104u;
    SET_GPR_U32(ctx, 31, 0x27010Cu);
    ctx->pc = 0x143D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143D70u, 0x270104u, 0x27010Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27010Cu;
label_27010c:
    // 0x27010c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27010cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270110:
    // 0x270110: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_270114:
    // 0x270114: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x270114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_270118:
    // 0x270118: 0xa0430090  sb          $v1, 0x90($v0)
    ctx->pc = 0x270118u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 144), (uint8_t)GPR_U32(ctx, 3));
label_27011c:
    // 0x27011c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x27011cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_270120:
    // 0x270120: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x270120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_270124:
    // 0x270124: 0xa0800630  sb          $zero, 0x630($a0)
    ctx->pc = 0x270124u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1584), (uint8_t)GPR_U32(ctx, 0));
label_270128:
    // 0x270128: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x270128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27012c:
    // 0x27012c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x27012cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_270130:
    // 0x270130: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x270130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_270134:
    // 0x270134: 0xa04307e0  sb          $v1, 0x7E0($v0)
    ctx->pc = 0x270134u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2016), (uint8_t)GPR_U32(ctx, 3));
label_270138:
    // 0x270138: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x270138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27013c:
    // 0x27013c: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x27013cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_270140:
    // 0x270140: 0x8cc70058  lw          $a3, 0x58($a2)
    ctx->pc = 0x270140u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
label_270144:
    // 0x270144: 0xa0e50870  sb          $a1, 0x870($a3)
    ctx->pc = 0x270144u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2160), (uint8_t)GPR_U32(ctx, 5));
label_270148:
    // 0x270148: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x270148u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27014c:
    // 0x27014c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x27014cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_270150:
    // 0x270150: 0xac481b64  sw          $t0, 0x1B64($v0)
    ctx->pc = 0x270150u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 8));
label_270154:
    // 0x270154: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_270158:
    // 0x270158: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x270158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27015c:
    // 0x27015c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27015cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_270160:
    // 0x270160: 0x0  nop
    ctx->pc = 0x270160u;
    // NOP
label_270164:
    // 0x270164: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x270164u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_270168:
    // 0x270168: 0x0  nop
    ctx->pc = 0x270168u;
    // NOP
label_27016c:
    // 0x27016c: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_270170:
    if (ctx->pc == 0x270170u) {
        ctx->pc = 0x270174u;
        goto label_270174;
    }
    ctx->pc = 0x27016Cu;
    {
        const bool branch_taken_0x27016c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27016c) {
            ctx->pc = 0x2701A4u;
            goto label_2701a4;
        }
    }
    ctx->pc = 0x270174u;
label_270174:
    // 0x270174: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_270178:
    // 0x270178: 0xc4811284  lwc1        $f1, 0x1284($a0)
    ctx->pc = 0x270178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27017c:
    // 0x27017c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x27017cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_270180:
    // 0x270180: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x270180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_270184:
    // 0x270184: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x270184u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_270188:
    // 0x270188: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x270188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_27018c:
    // 0x27018c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x27018cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_270190:
    // 0x270190: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x270190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_270194:
    // 0x270194: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_270198:
    // 0x270198: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x270198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27019c:
    // 0x27019c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x27019cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2701a0:
    // 0x2701a0: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x2701a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_2701a4:
    // 0x2701a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2701a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2701a8:
    // 0x2701a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2701a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2701ac:
    // 0x2701ac: 0xc096b40  jal         func_25AD00
label_2701b0:
    if (ctx->pc == 0x2701B0u) {
        ctx->pc = 0x2701B4u;
        goto label_2701b4;
    }
    ctx->pc = 0x2701ACu;
    SET_GPR_U32(ctx, 31, 0x2701B4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2701ACu, 0x2701B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2701B4u;
label_2701b4:
    // 0x2701b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2701b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2701b8:
    // 0x2701b8: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x2701b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_2701bc:
    // 0x2701bc: 0xc0675a4  jal         func_19D690
label_2701c0:
    if (ctx->pc == 0x2701C0u) {
        ctx->pc = 0x2701C4u;
        goto label_2701c4;
    }
    ctx->pc = 0x2701BCu;
    SET_GPR_U32(ctx, 31, 0x2701C4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2701BCu, 0x2701C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2701C4u;
label_2701c4:
    // 0x2701c4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2701c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2701c8:
    // 0x2701c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2701c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2701cc:
    // 0x2701cc: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2701ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2701d0:
    // 0x2701d0: 0xc05cd10  jal         func_173440
label_2701d4:
    if (ctx->pc == 0x2701D4u) {
        ctx->pc = 0x2701D8u;
        goto label_2701d8;
    }
    ctx->pc = 0x2701D0u;
    SET_GPR_U32(ctx, 31, 0x2701D8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2701D0u, 0x2701D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2701D8u;
label_2701d8:
    // 0x2701d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2701d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2701dc:
    // 0x2701dc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2701dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2701e0:
    // 0x2701e0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2701e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_2701e4:
    // 0x2701e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2701e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2701e8:
    // 0x2701e8: 0xc0574f4  jal         func_15D3D0
label_2701ec:
    if (ctx->pc == 0x2701ECu) {
        ctx->pc = 0x2701F0u;
        goto label_2701f0;
    }
    ctx->pc = 0x2701E8u;
    SET_GPR_U32(ctx, 31, 0x2701F0u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x2701E8u, 0x2701F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2701F0u;
label_2701f0:
    // 0x2701f0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2701f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2701f4:
    // 0x2701f4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2701f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2701f8:
    // 0x2701f8: 0xc097530  jal         func_25D4C0
label_2701fc:
    if (ctx->pc == 0x2701FCu) {
        ctx->pc = 0x270200u;
        goto label_270200;
    }
    ctx->pc = 0x2701F8u;
    SET_GPR_U32(ctx, 31, 0x270200u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x2701F8u, 0x270200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270200u;
label_270200:
    // 0x270200: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x270200u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_270204:
    // 0x270204: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x270204u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_270208:
    // 0x270208: 0x910309e7  lbu         $v1, 0x9E7($t0)
    ctx->pc = 0x270208u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2535)));
label_27020c:
    // 0x27020c: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
label_270210:
    if (ctx->pc == 0x270210u) {
        ctx->pc = 0x270214u;
        goto label_270214;
    }
    ctx->pc = 0x27020Cu;
    {
        const bool branch_taken_0x27020c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27020c) {
            ctx->pc = 0x270310u;
            goto label_270310;
        }
    }
    ctx->pc = 0x270214u;
label_270214:
    // 0x270214: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x270214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_270218:
    // 0x270218: 0xa0a010a8  sb          $zero, 0x10A8($a1)
    ctx->pc = 0x270218u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4264), (uint8_t)GPR_U32(ctx, 0));
label_27021c:
    // 0x27021c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x27021cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_270220:
    // 0x270220: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x270220u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_270224:
    // 0x270224: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x270224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_270228:
    // 0x270228: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x270228u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_27022c:
    // 0x27022c: 0x10000038  b           . + 4 + (0x38 << 2)
label_270230:
    if (ctx->pc == 0x270230u) {
        ctx->pc = 0x270234u;
        goto label_270234;
    }
    ctx->pc = 0x27022Cu;
    {
        const bool branch_taken_0x27022c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27022c) {
            ctx->pc = 0x270310u;
            goto label_270310;
        }
    }
    ctx->pc = 0x270234u;
label_270234:
    // 0x270234: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_270238:
    // 0x270238: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_27023c:
    // 0x27023c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x27023cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_270240:
    // 0x270240: 0x24061461  addiu       $a2, $zero, 0x1461
    ctx->pc = 0x270240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5217));
label_270244:
    // 0x270244: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270248:
    // 0x270248: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x270248u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_27024c:
    // 0x27024c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x27024cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_270250:
    // 0x270250: 0xc0965d0  jal         func_259740
label_270254:
    if (ctx->pc == 0x270254u) {
        ctx->pc = 0x270258u;
        goto label_270258;
    }
    ctx->pc = 0x270250u;
    SET_GPR_U32(ctx, 31, 0x270258u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x270250u, 0x270258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270258u;
label_270258:
    // 0x270258: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x270258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_27025c:
    // 0x27025c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x27025cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_270260:
    // 0x270260: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x270260u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_270264:
    // 0x270264: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_270268:
    // 0x270268: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x270268u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_27026c:
    // 0x27026c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27026cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_270270:
    // 0x270270: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x270270u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
label_270274:
    // 0x270274: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_270278:
    // 0x270278: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x270278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_27027c:
    // 0x27027c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x27027cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_270280:
    // 0x270280: 0xc096b40  jal         func_25AD00
label_270284:
    if (ctx->pc == 0x270284u) {
        ctx->pc = 0x270288u;
        goto label_270288;
    }
    ctx->pc = 0x270280u;
    SET_GPR_U32(ctx, 31, 0x270288u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x270280u, 0x270288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270288u;
label_270288:
    // 0x270288: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x270288u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_27028c:
    // 0x27028c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x27028cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_270290:
    // 0x270290: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x270290u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_270294:
    // 0x270294: 0xc05cd34  jal         func_1734D0
label_270298:
    if (ctx->pc == 0x270298u) {
        ctx->pc = 0x27029Cu;
        goto label_27029c;
    }
    ctx->pc = 0x270294u;
    SET_GPR_U32(ctx, 31, 0x27029Cu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x270294u, 0x27029Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27029Cu;
label_27029c:
    // 0x27029c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27029cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2702a0:
    // 0x2702a0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2702a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2702a4:
    // 0x2702a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2702a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2702a8:
    // 0x2702a8: 0xc0574f4  jal         func_15D3D0
label_2702ac:
    if (ctx->pc == 0x2702ACu) {
        ctx->pc = 0x2702B0u;
        goto label_2702b0;
    }
    ctx->pc = 0x2702A8u;
    SET_GPR_U32(ctx, 31, 0x2702B0u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x2702A8u, 0x2702B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2702B0u;
label_2702b0:
    // 0x2702b0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2702b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2702b4:
    // 0x2702b4: 0xc097530  jal         func_25D4C0
label_2702b8:
    if (ctx->pc == 0x2702B8u) {
        ctx->pc = 0x2702BCu;
        goto label_2702bc;
    }
    ctx->pc = 0x2702B4u;
    SET_GPR_U32(ctx, 31, 0x2702BCu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x2702B4u, 0x2702BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2702BCu;
label_2702bc:
    // 0x2702bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2702bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2702c0:
    // 0x2702c0: 0x84641278  lh          $a0, 0x1278($v1)
    ctx->pc = 0x2702c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_2702c4:
    // 0x2702c4: 0x14800012  bnez        $a0, . + 4 + (0x12 << 2)
label_2702c8:
    if (ctx->pc == 0x2702C8u) {
        ctx->pc = 0x2702CCu;
        goto label_2702cc;
    }
    ctx->pc = 0x2702C4u;
    {
        const bool branch_taken_0x2702c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2702c4) {
            ctx->pc = 0x270310u;
            goto label_270310;
        }
    }
    ctx->pc = 0x2702CCu;
label_2702cc:
    // 0x2702cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2702ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2702d0:
    // 0x2702d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2702d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2702d4:
    // 0x2702d4: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x2702d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
label_2702d8:
    // 0x2702d8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2702d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2702dc:
    // 0x2702dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2702dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2702e0:
    // 0x2702e0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2702e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2702e4:
    // 0x2702e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2702e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2702e8:
    // 0x2702e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2702e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2702ec:
    // 0x2702ec: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2702ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_2702f0:
    // 0x2702f0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2702f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2702f4:
    // 0x2702f4: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2702f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_2702f8:
    // 0x2702f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2702f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2702fc:
    // 0x2702fc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2702fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_270300:
    // 0x270300: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x270300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_270304:
    // 0x270304: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x270304u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_270308:
    // 0x270308: 0x1000000b  b           . + 4 + (0xB << 2)
label_27030c:
    if (ctx->pc == 0x27030Cu) {
        ctx->pc = 0x270310u;
        goto label_270310;
    }
    ctx->pc = 0x270308u;
    {
        const bool branch_taken_0x270308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270308) {
            ctx->pc = 0x270338u;
            goto label_270338;
        }
    }
    ctx->pc = 0x270310u;
label_270310:
    // 0x270310: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x270310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_270314:
    // 0x270314: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x270314u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
label_270318:
    // 0x270318: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x270318u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_27031c:
    // 0x27031c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x27031cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_270320:
    // 0x270320: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x270320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_270324:
    // 0x270324: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_270328:
    if (ctx->pc == 0x270328u) {
        ctx->pc = 0x27032Cu;
        goto label_27032c;
    }
    ctx->pc = 0x270324u;
    {
        const bool branch_taken_0x270324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x270324) {
            ctx->pc = 0x270338u;
            goto label_270338;
        }
    }
    ctx->pc = 0x27032Cu;
label_27032c:
    // 0x27032c: 0xc0bc094  jal         func_2F0250
label_270330:
    if (ctx->pc == 0x270330u) {
        ctx->pc = 0x270334u;
        goto label_270334;
    }
    ctx->pc = 0x27032Cu;
    SET_GPR_U32(ctx, 31, 0x270334u);
    ctx->pc = 0x2F0250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0250u, 0x27032Cu, 0x270334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270334u;
label_270334:
    // 0x270334: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x270334u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_270338:
    // 0x270338: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x270338u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27033c:
    // 0x27033c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x27033cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_270340:
    // 0x270340: 0x3e00008  jr          $ra
label_270344:
    if (ctx->pc == 0x270344u) {
        ctx->pc = 0x270348u;
        goto label_fallthrough_0x270340;
    }
    ctx->pc = 0x270340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x270340:
    ctx->pc = 0x270348u;
}
