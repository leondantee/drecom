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

// Function: Skeleton
// Address: 0x25f9f0 - 0x261100
void Skeleton_0x25f9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Skeleton_0x25f9f0");
#endif

    switch (ctx->pc) {
        case 0x25f9f0u: goto label_25f9f0;
        case 0x25f9f4u: goto label_25f9f4;
        case 0x25f9f8u: goto label_25f9f8;
        case 0x25f9fcu: goto label_25f9fc;
        case 0x25fa00u: goto label_25fa00;
        case 0x25fa04u: goto label_25fa04;
        case 0x25fa08u: goto label_25fa08;
        case 0x25fa0cu: goto label_25fa0c;
        case 0x25fa10u: goto label_25fa10;
        case 0x25fa14u: goto label_25fa14;
        case 0x25fa18u: goto label_25fa18;
        case 0x25fa1cu: goto label_25fa1c;
        case 0x25fa20u: goto label_25fa20;
        case 0x25fa24u: goto label_25fa24;
        case 0x25fa28u: goto label_25fa28;
        case 0x25fa2cu: goto label_25fa2c;
        case 0x25fa30u: goto label_25fa30;
        case 0x25fa34u: goto label_25fa34;
        case 0x25fa38u: goto label_25fa38;
        case 0x25fa3cu: goto label_25fa3c;
        case 0x25fa40u: goto label_25fa40;
        case 0x25fa44u: goto label_25fa44;
        case 0x25fa48u: goto label_25fa48;
        case 0x25fa4cu: goto label_25fa4c;
        case 0x25fa50u: goto label_25fa50;
        case 0x25fa54u: goto label_25fa54;
        case 0x25fa58u: goto label_25fa58;
        case 0x25fa5cu: goto label_25fa5c;
        case 0x25fa60u: goto label_25fa60;
        case 0x25fa64u: goto label_25fa64;
        case 0x25fa68u: goto label_25fa68;
        case 0x25fa6cu: goto label_25fa6c;
        case 0x25fa70u: goto label_25fa70;
        case 0x25fa74u: goto label_25fa74;
        case 0x25fa78u: goto label_25fa78;
        case 0x25fa7cu: goto label_25fa7c;
        case 0x25fa80u: goto label_25fa80;
        case 0x25fa84u: goto label_25fa84;
        case 0x25fa88u: goto label_25fa88;
        case 0x25fa8cu: goto label_25fa8c;
        case 0x25fa90u: goto label_25fa90;
        case 0x25fa94u: goto label_25fa94;
        case 0x25fa98u: goto label_25fa98;
        case 0x25fa9cu: goto label_25fa9c;
        case 0x25faa0u: goto label_25faa0;
        case 0x25faa4u: goto label_25faa4;
        case 0x25faa8u: goto label_25faa8;
        case 0x25faacu: goto label_25faac;
        case 0x25fab0u: goto label_25fab0;
        case 0x25fab4u: goto label_25fab4;
        case 0x25fab8u: goto label_25fab8;
        case 0x25fabcu: goto label_25fabc;
        case 0x25fac0u: goto label_25fac0;
        case 0x25fac4u: goto label_25fac4;
        case 0x25fac8u: goto label_25fac8;
        case 0x25faccu: goto label_25facc;
        case 0x25fad0u: goto label_25fad0;
        case 0x25fad4u: goto label_25fad4;
        case 0x25fad8u: goto label_25fad8;
        case 0x25fadcu: goto label_25fadc;
        case 0x25fae0u: goto label_25fae0;
        case 0x25fae4u: goto label_25fae4;
        case 0x25fae8u: goto label_25fae8;
        case 0x25faecu: goto label_25faec;
        case 0x25faf0u: goto label_25faf0;
        case 0x25faf4u: goto label_25faf4;
        case 0x25faf8u: goto label_25faf8;
        case 0x25fafcu: goto label_25fafc;
        case 0x25fb00u: goto label_25fb00;
        case 0x25fb04u: goto label_25fb04;
        case 0x25fb08u: goto label_25fb08;
        case 0x25fb0cu: goto label_25fb0c;
        case 0x25fb10u: goto label_25fb10;
        case 0x25fb14u: goto label_25fb14;
        case 0x25fb18u: goto label_25fb18;
        case 0x25fb1cu: goto label_25fb1c;
        case 0x25fb20u: goto label_25fb20;
        case 0x25fb24u: goto label_25fb24;
        case 0x25fb28u: goto label_25fb28;
        case 0x25fb2cu: goto label_25fb2c;
        case 0x25fb30u: goto label_25fb30;
        case 0x25fb34u: goto label_25fb34;
        case 0x25fb38u: goto label_25fb38;
        case 0x25fb3cu: goto label_25fb3c;
        case 0x25fb40u: goto label_25fb40;
        case 0x25fb44u: goto label_25fb44;
        case 0x25fb48u: goto label_25fb48;
        case 0x25fb4cu: goto label_25fb4c;
        case 0x25fb50u: goto label_25fb50;
        case 0x25fb54u: goto label_25fb54;
        case 0x25fb58u: goto label_25fb58;
        case 0x25fb5cu: goto label_25fb5c;
        case 0x25fb60u: goto label_25fb60;
        case 0x25fb64u: goto label_25fb64;
        case 0x25fb68u: goto label_25fb68;
        case 0x25fb6cu: goto label_25fb6c;
        case 0x25fb70u: goto label_25fb70;
        case 0x25fb74u: goto label_25fb74;
        case 0x25fb78u: goto label_25fb78;
        case 0x25fb7cu: goto label_25fb7c;
        case 0x25fb80u: goto label_25fb80;
        case 0x25fb84u: goto label_25fb84;
        case 0x25fb88u: goto label_25fb88;
        case 0x25fb8cu: goto label_25fb8c;
        case 0x25fb90u: goto label_25fb90;
        case 0x25fb94u: goto label_25fb94;
        case 0x25fb98u: goto label_25fb98;
        case 0x25fb9cu: goto label_25fb9c;
        case 0x25fba0u: goto label_25fba0;
        case 0x25fba4u: goto label_25fba4;
        case 0x25fba8u: goto label_25fba8;
        case 0x25fbacu: goto label_25fbac;
        case 0x25fbb0u: goto label_25fbb0;
        case 0x25fbb4u: goto label_25fbb4;
        case 0x25fbb8u: goto label_25fbb8;
        case 0x25fbbcu: goto label_25fbbc;
        case 0x25fbc0u: goto label_25fbc0;
        case 0x25fbc4u: goto label_25fbc4;
        case 0x25fbc8u: goto label_25fbc8;
        case 0x25fbccu: goto label_25fbcc;
        case 0x25fbd0u: goto label_25fbd0;
        case 0x25fbd4u: goto label_25fbd4;
        case 0x25fbd8u: goto label_25fbd8;
        case 0x25fbdcu: goto label_25fbdc;
        case 0x25fbe0u: goto label_25fbe0;
        case 0x25fbe4u: goto label_25fbe4;
        case 0x25fbe8u: goto label_25fbe8;
        case 0x25fbecu: goto label_25fbec;
        case 0x25fbf0u: goto label_25fbf0;
        case 0x25fbf4u: goto label_25fbf4;
        case 0x25fbf8u: goto label_25fbf8;
        case 0x25fbfcu: goto label_25fbfc;
        case 0x25fc00u: goto label_25fc00;
        case 0x25fc04u: goto label_25fc04;
        case 0x25fc08u: goto label_25fc08;
        case 0x25fc0cu: goto label_25fc0c;
        case 0x25fc10u: goto label_25fc10;
        case 0x25fc14u: goto label_25fc14;
        case 0x25fc18u: goto label_25fc18;
        case 0x25fc1cu: goto label_25fc1c;
        case 0x25fc20u: goto label_25fc20;
        case 0x25fc24u: goto label_25fc24;
        case 0x25fc28u: goto label_25fc28;
        case 0x25fc2cu: goto label_25fc2c;
        case 0x25fc30u: goto label_25fc30;
        case 0x25fc34u: goto label_25fc34;
        case 0x25fc38u: goto label_25fc38;
        case 0x25fc3cu: goto label_25fc3c;
        case 0x25fc40u: goto label_25fc40;
        case 0x25fc44u: goto label_25fc44;
        case 0x25fc48u: goto label_25fc48;
        case 0x25fc4cu: goto label_25fc4c;
        case 0x25fc50u: goto label_25fc50;
        case 0x25fc54u: goto label_25fc54;
        case 0x25fc58u: goto label_25fc58;
        case 0x25fc5cu: goto label_25fc5c;
        case 0x25fc60u: goto label_25fc60;
        case 0x25fc64u: goto label_25fc64;
        case 0x25fc68u: goto label_25fc68;
        case 0x25fc6cu: goto label_25fc6c;
        case 0x25fc70u: goto label_25fc70;
        case 0x25fc74u: goto label_25fc74;
        case 0x25fc78u: goto label_25fc78;
        case 0x25fc7cu: goto label_25fc7c;
        case 0x25fc80u: goto label_25fc80;
        case 0x25fc84u: goto label_25fc84;
        case 0x25fc88u: goto label_25fc88;
        case 0x25fc8cu: goto label_25fc8c;
        case 0x25fc90u: goto label_25fc90;
        case 0x25fc94u: goto label_25fc94;
        case 0x25fc98u: goto label_25fc98;
        case 0x25fc9cu: goto label_25fc9c;
        case 0x25fca0u: goto label_25fca0;
        case 0x25fca4u: goto label_25fca4;
        case 0x25fca8u: goto label_25fca8;
        case 0x25fcacu: goto label_25fcac;
        case 0x25fcb0u: goto label_25fcb0;
        case 0x25fcb4u: goto label_25fcb4;
        case 0x25fcb8u: goto label_25fcb8;
        case 0x25fcbcu: goto label_25fcbc;
        case 0x25fcc0u: goto label_25fcc0;
        case 0x25fcc4u: goto label_25fcc4;
        case 0x25fcc8u: goto label_25fcc8;
        case 0x25fcccu: goto label_25fccc;
        case 0x25fcd0u: goto label_25fcd0;
        case 0x25fcd4u: goto label_25fcd4;
        case 0x25fcd8u: goto label_25fcd8;
        case 0x25fcdcu: goto label_25fcdc;
        case 0x25fce0u: goto label_25fce0;
        case 0x25fce4u: goto label_25fce4;
        case 0x25fce8u: goto label_25fce8;
        case 0x25fcecu: goto label_25fcec;
        case 0x25fcf0u: goto label_25fcf0;
        case 0x25fcf4u: goto label_25fcf4;
        case 0x25fcf8u: goto label_25fcf8;
        case 0x25fcfcu: goto label_25fcfc;
        case 0x25fd00u: goto label_25fd00;
        case 0x25fd04u: goto label_25fd04;
        case 0x25fd08u: goto label_25fd08;
        case 0x25fd0cu: goto label_25fd0c;
        case 0x25fd10u: goto label_25fd10;
        case 0x25fd14u: goto label_25fd14;
        case 0x25fd18u: goto label_25fd18;
        case 0x25fd1cu: goto label_25fd1c;
        case 0x25fd20u: goto label_25fd20;
        case 0x25fd24u: goto label_25fd24;
        case 0x25fd28u: goto label_25fd28;
        case 0x25fd2cu: goto label_25fd2c;
        case 0x25fd30u: goto label_25fd30;
        case 0x25fd34u: goto label_25fd34;
        case 0x25fd38u: goto label_25fd38;
        case 0x25fd3cu: goto label_25fd3c;
        case 0x25fd40u: goto label_25fd40;
        case 0x25fd44u: goto label_25fd44;
        case 0x25fd48u: goto label_25fd48;
        case 0x25fd4cu: goto label_25fd4c;
        case 0x25fd50u: goto label_25fd50;
        case 0x25fd54u: goto label_25fd54;
        case 0x25fd58u: goto label_25fd58;
        case 0x25fd5cu: goto label_25fd5c;
        case 0x25fd60u: goto label_25fd60;
        case 0x25fd64u: goto label_25fd64;
        case 0x25fd68u: goto label_25fd68;
        case 0x25fd6cu: goto label_25fd6c;
        case 0x25fd70u: goto label_25fd70;
        case 0x25fd74u: goto label_25fd74;
        case 0x25fd78u: goto label_25fd78;
        case 0x25fd7cu: goto label_25fd7c;
        case 0x25fd80u: goto label_25fd80;
        case 0x25fd84u: goto label_25fd84;
        case 0x25fd88u: goto label_25fd88;
        case 0x25fd8cu: goto label_25fd8c;
        case 0x25fd90u: goto label_25fd90;
        case 0x25fd94u: goto label_25fd94;
        case 0x25fd98u: goto label_25fd98;
        case 0x25fd9cu: goto label_25fd9c;
        case 0x25fda0u: goto label_25fda0;
        case 0x25fda4u: goto label_25fda4;
        case 0x25fda8u: goto label_25fda8;
        case 0x25fdacu: goto label_25fdac;
        case 0x25fdb0u: goto label_25fdb0;
        case 0x25fdb4u: goto label_25fdb4;
        case 0x25fdb8u: goto label_25fdb8;
        case 0x25fdbcu: goto label_25fdbc;
        case 0x25fdc0u: goto label_25fdc0;
        case 0x25fdc4u: goto label_25fdc4;
        case 0x25fdc8u: goto label_25fdc8;
        case 0x25fdccu: goto label_25fdcc;
        case 0x25fdd0u: goto label_25fdd0;
        case 0x25fdd4u: goto label_25fdd4;
        case 0x25fdd8u: goto label_25fdd8;
        case 0x25fddcu: goto label_25fddc;
        case 0x25fde0u: goto label_25fde0;
        case 0x25fde4u: goto label_25fde4;
        case 0x25fde8u: goto label_25fde8;
        case 0x25fdecu: goto label_25fdec;
        case 0x25fdf0u: goto label_25fdf0;
        case 0x25fdf4u: goto label_25fdf4;
        case 0x25fdf8u: goto label_25fdf8;
        case 0x25fdfcu: goto label_25fdfc;
        case 0x25fe00u: goto label_25fe00;
        case 0x25fe04u: goto label_25fe04;
        case 0x25fe08u: goto label_25fe08;
        case 0x25fe0cu: goto label_25fe0c;
        case 0x25fe10u: goto label_25fe10;
        case 0x25fe14u: goto label_25fe14;
        case 0x25fe18u: goto label_25fe18;
        case 0x25fe1cu: goto label_25fe1c;
        case 0x25fe20u: goto label_25fe20;
        case 0x25fe24u: goto label_25fe24;
        case 0x25fe28u: goto label_25fe28;
        case 0x25fe2cu: goto label_25fe2c;
        case 0x25fe30u: goto label_25fe30;
        case 0x25fe34u: goto label_25fe34;
        case 0x25fe38u: goto label_25fe38;
        case 0x25fe3cu: goto label_25fe3c;
        case 0x25fe40u: goto label_25fe40;
        case 0x25fe44u: goto label_25fe44;
        case 0x25fe48u: goto label_25fe48;
        case 0x25fe4cu: goto label_25fe4c;
        case 0x25fe50u: goto label_25fe50;
        case 0x25fe54u: goto label_25fe54;
        case 0x25fe58u: goto label_25fe58;
        case 0x25fe5cu: goto label_25fe5c;
        case 0x25fe60u: goto label_25fe60;
        case 0x25fe64u: goto label_25fe64;
        case 0x25fe68u: goto label_25fe68;
        case 0x25fe6cu: goto label_25fe6c;
        case 0x25fe70u: goto label_25fe70;
        case 0x25fe74u: goto label_25fe74;
        case 0x25fe78u: goto label_25fe78;
        case 0x25fe7cu: goto label_25fe7c;
        case 0x25fe80u: goto label_25fe80;
        case 0x25fe84u: goto label_25fe84;
        case 0x25fe88u: goto label_25fe88;
        case 0x25fe8cu: goto label_25fe8c;
        case 0x25fe90u: goto label_25fe90;
        case 0x25fe94u: goto label_25fe94;
        case 0x25fe98u: goto label_25fe98;
        case 0x25fe9cu: goto label_25fe9c;
        case 0x25fea0u: goto label_25fea0;
        case 0x25fea4u: goto label_25fea4;
        case 0x25fea8u: goto label_25fea8;
        case 0x25feacu: goto label_25feac;
        case 0x25feb0u: goto label_25feb0;
        case 0x25feb4u: goto label_25feb4;
        case 0x25feb8u: goto label_25feb8;
        case 0x25febcu: goto label_25febc;
        case 0x25fec0u: goto label_25fec0;
        case 0x25fec4u: goto label_25fec4;
        case 0x25fec8u: goto label_25fec8;
        case 0x25feccu: goto label_25fecc;
        case 0x25fed0u: goto label_25fed0;
        case 0x25fed4u: goto label_25fed4;
        case 0x25fed8u: goto label_25fed8;
        case 0x25fedcu: goto label_25fedc;
        case 0x25fee0u: goto label_25fee0;
        case 0x25fee4u: goto label_25fee4;
        case 0x25fee8u: goto label_25fee8;
        case 0x25feecu: goto label_25feec;
        case 0x25fef0u: goto label_25fef0;
        case 0x25fef4u: goto label_25fef4;
        case 0x25fef8u: goto label_25fef8;
        case 0x25fefcu: goto label_25fefc;
        case 0x25ff00u: goto label_25ff00;
        case 0x25ff04u: goto label_25ff04;
        case 0x25ff08u: goto label_25ff08;
        case 0x25ff0cu: goto label_25ff0c;
        case 0x25ff10u: goto label_25ff10;
        case 0x25ff14u: goto label_25ff14;
        case 0x25ff18u: goto label_25ff18;
        case 0x25ff1cu: goto label_25ff1c;
        case 0x25ff20u: goto label_25ff20;
        case 0x25ff24u: goto label_25ff24;
        case 0x25ff28u: goto label_25ff28;
        case 0x25ff2cu: goto label_25ff2c;
        case 0x25ff30u: goto label_25ff30;
        case 0x25ff34u: goto label_25ff34;
        case 0x25ff38u: goto label_25ff38;
        case 0x25ff3cu: goto label_25ff3c;
        case 0x25ff40u: goto label_25ff40;
        case 0x25ff44u: goto label_25ff44;
        case 0x25ff48u: goto label_25ff48;
        case 0x25ff4cu: goto label_25ff4c;
        case 0x25ff50u: goto label_25ff50;
        case 0x25ff54u: goto label_25ff54;
        case 0x25ff58u: goto label_25ff58;
        case 0x25ff5cu: goto label_25ff5c;
        case 0x25ff60u: goto label_25ff60;
        case 0x25ff64u: goto label_25ff64;
        case 0x25ff68u: goto label_25ff68;
        case 0x25ff6cu: goto label_25ff6c;
        case 0x25ff70u: goto label_25ff70;
        case 0x25ff74u: goto label_25ff74;
        case 0x25ff78u: goto label_25ff78;
        case 0x25ff7cu: goto label_25ff7c;
        case 0x25ff80u: goto label_25ff80;
        case 0x25ff84u: goto label_25ff84;
        case 0x25ff88u: goto label_25ff88;
        case 0x25ff8cu: goto label_25ff8c;
        case 0x25ff90u: goto label_25ff90;
        case 0x25ff94u: goto label_25ff94;
        case 0x25ff98u: goto label_25ff98;
        case 0x25ff9cu: goto label_25ff9c;
        case 0x25ffa0u: goto label_25ffa0;
        case 0x25ffa4u: goto label_25ffa4;
        case 0x25ffa8u: goto label_25ffa8;
        case 0x25ffacu: goto label_25ffac;
        case 0x25ffb0u: goto label_25ffb0;
        case 0x25ffb4u: goto label_25ffb4;
        case 0x25ffb8u: goto label_25ffb8;
        case 0x25ffbcu: goto label_25ffbc;
        case 0x25ffc0u: goto label_25ffc0;
        case 0x25ffc4u: goto label_25ffc4;
        case 0x25ffc8u: goto label_25ffc8;
        case 0x25ffccu: goto label_25ffcc;
        case 0x25ffd0u: goto label_25ffd0;
        case 0x25ffd4u: goto label_25ffd4;
        case 0x25ffd8u: goto label_25ffd8;
        case 0x25ffdcu: goto label_25ffdc;
        case 0x25ffe0u: goto label_25ffe0;
        case 0x25ffe4u: goto label_25ffe4;
        case 0x25ffe8u: goto label_25ffe8;
        case 0x25ffecu: goto label_25ffec;
        case 0x25fff0u: goto label_25fff0;
        case 0x25fff4u: goto label_25fff4;
        case 0x25fff8u: goto label_25fff8;
        case 0x25fffcu: goto label_25fffc;
        case 0x260000u: goto label_260000;
        case 0x260004u: goto label_260004;
        case 0x260008u: goto label_260008;
        case 0x26000cu: goto label_26000c;
        case 0x260010u: goto label_260010;
        case 0x260014u: goto label_260014;
        case 0x260018u: goto label_260018;
        case 0x26001cu: goto label_26001c;
        case 0x260020u: goto label_260020;
        case 0x260024u: goto label_260024;
        case 0x260028u: goto label_260028;
        case 0x26002cu: goto label_26002c;
        case 0x260030u: goto label_260030;
        case 0x260034u: goto label_260034;
        case 0x260038u: goto label_260038;
        case 0x26003cu: goto label_26003c;
        case 0x260040u: goto label_260040;
        case 0x260044u: goto label_260044;
        case 0x260048u: goto label_260048;
        case 0x26004cu: goto label_26004c;
        case 0x260050u: goto label_260050;
        case 0x260054u: goto label_260054;
        case 0x260058u: goto label_260058;
        case 0x26005cu: goto label_26005c;
        case 0x260060u: goto label_260060;
        case 0x260064u: goto label_260064;
        case 0x260068u: goto label_260068;
        case 0x26006cu: goto label_26006c;
        case 0x260070u: goto label_260070;
        case 0x260074u: goto label_260074;
        case 0x260078u: goto label_260078;
        case 0x26007cu: goto label_26007c;
        case 0x260080u: goto label_260080;
        case 0x260084u: goto label_260084;
        case 0x260088u: goto label_260088;
        case 0x26008cu: goto label_26008c;
        case 0x260090u: goto label_260090;
        case 0x260094u: goto label_260094;
        case 0x260098u: goto label_260098;
        case 0x26009cu: goto label_26009c;
        case 0x2600a0u: goto label_2600a0;
        case 0x2600a4u: goto label_2600a4;
        case 0x2600a8u: goto label_2600a8;
        case 0x2600acu: goto label_2600ac;
        case 0x2600b0u: goto label_2600b0;
        case 0x2600b4u: goto label_2600b4;
        case 0x2600b8u: goto label_2600b8;
        case 0x2600bcu: goto label_2600bc;
        case 0x2600c0u: goto label_2600c0;
        case 0x2600c4u: goto label_2600c4;
        case 0x2600c8u: goto label_2600c8;
        case 0x2600ccu: goto label_2600cc;
        case 0x2600d0u: goto label_2600d0;
        case 0x2600d4u: goto label_2600d4;
        case 0x2600d8u: goto label_2600d8;
        case 0x2600dcu: goto label_2600dc;
        case 0x2600e0u: goto label_2600e0;
        case 0x2600e4u: goto label_2600e4;
        case 0x2600e8u: goto label_2600e8;
        case 0x2600ecu: goto label_2600ec;
        case 0x2600f0u: goto label_2600f0;
        case 0x2600f4u: goto label_2600f4;
        case 0x2600f8u: goto label_2600f8;
        case 0x2600fcu: goto label_2600fc;
        case 0x260100u: goto label_260100;
        case 0x260104u: goto label_260104;
        case 0x260108u: goto label_260108;
        case 0x26010cu: goto label_26010c;
        case 0x260110u: goto label_260110;
        case 0x260114u: goto label_260114;
        case 0x260118u: goto label_260118;
        case 0x26011cu: goto label_26011c;
        case 0x260120u: goto label_260120;
        case 0x260124u: goto label_260124;
        case 0x260128u: goto label_260128;
        case 0x26012cu: goto label_26012c;
        case 0x260130u: goto label_260130;
        case 0x260134u: goto label_260134;
        case 0x260138u: goto label_260138;
        case 0x26013cu: goto label_26013c;
        case 0x260140u: goto label_260140;
        case 0x260144u: goto label_260144;
        case 0x260148u: goto label_260148;
        case 0x26014cu: goto label_26014c;
        case 0x260150u: goto label_260150;
        case 0x260154u: goto label_260154;
        case 0x260158u: goto label_260158;
        case 0x26015cu: goto label_26015c;
        case 0x260160u: goto label_260160;
        case 0x260164u: goto label_260164;
        case 0x260168u: goto label_260168;
        case 0x26016cu: goto label_26016c;
        case 0x260170u: goto label_260170;
        case 0x260174u: goto label_260174;
        case 0x260178u: goto label_260178;
        case 0x26017cu: goto label_26017c;
        case 0x260180u: goto label_260180;
        case 0x260184u: goto label_260184;
        case 0x260188u: goto label_260188;
        case 0x26018cu: goto label_26018c;
        case 0x260190u: goto label_260190;
        case 0x260194u: goto label_260194;
        case 0x260198u: goto label_260198;
        case 0x26019cu: goto label_26019c;
        case 0x2601a0u: goto label_2601a0;
        case 0x2601a4u: goto label_2601a4;
        case 0x2601a8u: goto label_2601a8;
        case 0x2601acu: goto label_2601ac;
        case 0x2601b0u: goto label_2601b0;
        case 0x2601b4u: goto label_2601b4;
        case 0x2601b8u: goto label_2601b8;
        case 0x2601bcu: goto label_2601bc;
        case 0x2601c0u: goto label_2601c0;
        case 0x2601c4u: goto label_2601c4;
        case 0x2601c8u: goto label_2601c8;
        case 0x2601ccu: goto label_2601cc;
        case 0x2601d0u: goto label_2601d0;
        case 0x2601d4u: goto label_2601d4;
        case 0x2601d8u: goto label_2601d8;
        case 0x2601dcu: goto label_2601dc;
        case 0x2601e0u: goto label_2601e0;
        case 0x2601e4u: goto label_2601e4;
        case 0x2601e8u: goto label_2601e8;
        case 0x2601ecu: goto label_2601ec;
        case 0x2601f0u: goto label_2601f0;
        case 0x2601f4u: goto label_2601f4;
        case 0x2601f8u: goto label_2601f8;
        case 0x2601fcu: goto label_2601fc;
        case 0x260200u: goto label_260200;
        case 0x260204u: goto label_260204;
        case 0x260208u: goto label_260208;
        case 0x26020cu: goto label_26020c;
        case 0x260210u: goto label_260210;
        case 0x260214u: goto label_260214;
        case 0x260218u: goto label_260218;
        case 0x26021cu: goto label_26021c;
        case 0x260220u: goto label_260220;
        case 0x260224u: goto label_260224;
        case 0x260228u: goto label_260228;
        case 0x26022cu: goto label_26022c;
        case 0x260230u: goto label_260230;
        case 0x260234u: goto label_260234;
        case 0x260238u: goto label_260238;
        case 0x26023cu: goto label_26023c;
        case 0x260240u: goto label_260240;
        case 0x260244u: goto label_260244;
        case 0x260248u: goto label_260248;
        case 0x26024cu: goto label_26024c;
        case 0x260250u: goto label_260250;
        case 0x260254u: goto label_260254;
        case 0x260258u: goto label_260258;
        case 0x26025cu: goto label_26025c;
        case 0x260260u: goto label_260260;
        case 0x260264u: goto label_260264;
        case 0x260268u: goto label_260268;
        case 0x26026cu: goto label_26026c;
        case 0x260270u: goto label_260270;
        case 0x260274u: goto label_260274;
        case 0x260278u: goto label_260278;
        case 0x26027cu: goto label_26027c;
        case 0x260280u: goto label_260280;
        case 0x260284u: goto label_260284;
        case 0x260288u: goto label_260288;
        case 0x26028cu: goto label_26028c;
        case 0x260290u: goto label_260290;
        case 0x260294u: goto label_260294;
        case 0x260298u: goto label_260298;
        case 0x26029cu: goto label_26029c;
        case 0x2602a0u: goto label_2602a0;
        case 0x2602a4u: goto label_2602a4;
        case 0x2602a8u: goto label_2602a8;
        case 0x2602acu: goto label_2602ac;
        case 0x2602b0u: goto label_2602b0;
        case 0x2602b4u: goto label_2602b4;
        case 0x2602b8u: goto label_2602b8;
        case 0x2602bcu: goto label_2602bc;
        case 0x2602c0u: goto label_2602c0;
        case 0x2602c4u: goto label_2602c4;
        case 0x2602c8u: goto label_2602c8;
        case 0x2602ccu: goto label_2602cc;
        case 0x2602d0u: goto label_2602d0;
        case 0x2602d4u: goto label_2602d4;
        case 0x2602d8u: goto label_2602d8;
        case 0x2602dcu: goto label_2602dc;
        case 0x2602e0u: goto label_2602e0;
        case 0x2602e4u: goto label_2602e4;
        case 0x2602e8u: goto label_2602e8;
        case 0x2602ecu: goto label_2602ec;
        case 0x2602f0u: goto label_2602f0;
        case 0x2602f4u: goto label_2602f4;
        case 0x2602f8u: goto label_2602f8;
        case 0x2602fcu: goto label_2602fc;
        case 0x260300u: goto label_260300;
        case 0x260304u: goto label_260304;
        case 0x260308u: goto label_260308;
        case 0x26030cu: goto label_26030c;
        case 0x260310u: goto label_260310;
        case 0x260314u: goto label_260314;
        case 0x260318u: goto label_260318;
        case 0x26031cu: goto label_26031c;
        case 0x260320u: goto label_260320;
        case 0x260324u: goto label_260324;
        case 0x260328u: goto label_260328;
        case 0x26032cu: goto label_26032c;
        case 0x260330u: goto label_260330;
        case 0x260334u: goto label_260334;
        case 0x260338u: goto label_260338;
        case 0x26033cu: goto label_26033c;
        case 0x260340u: goto label_260340;
        case 0x260344u: goto label_260344;
        case 0x260348u: goto label_260348;
        case 0x26034cu: goto label_26034c;
        case 0x260350u: goto label_260350;
        case 0x260354u: goto label_260354;
        case 0x260358u: goto label_260358;
        case 0x26035cu: goto label_26035c;
        case 0x260360u: goto label_260360;
        case 0x260364u: goto label_260364;
        case 0x260368u: goto label_260368;
        case 0x26036cu: goto label_26036c;
        case 0x260370u: goto label_260370;
        case 0x260374u: goto label_260374;
        case 0x260378u: goto label_260378;
        case 0x26037cu: goto label_26037c;
        case 0x260380u: goto label_260380;
        case 0x260384u: goto label_260384;
        case 0x260388u: goto label_260388;
        case 0x26038cu: goto label_26038c;
        case 0x260390u: goto label_260390;
        case 0x260394u: goto label_260394;
        case 0x260398u: goto label_260398;
        case 0x26039cu: goto label_26039c;
        case 0x2603a0u: goto label_2603a0;
        case 0x2603a4u: goto label_2603a4;
        case 0x2603a8u: goto label_2603a8;
        case 0x2603acu: goto label_2603ac;
        case 0x2603b0u: goto label_2603b0;
        case 0x2603b4u: goto label_2603b4;
        case 0x2603b8u: goto label_2603b8;
        case 0x2603bcu: goto label_2603bc;
        case 0x2603c0u: goto label_2603c0;
        case 0x2603c4u: goto label_2603c4;
        case 0x2603c8u: goto label_2603c8;
        case 0x2603ccu: goto label_2603cc;
        case 0x2603d0u: goto label_2603d0;
        case 0x2603d4u: goto label_2603d4;
        case 0x2603d8u: goto label_2603d8;
        case 0x2603dcu: goto label_2603dc;
        case 0x2603e0u: goto label_2603e0;
        case 0x2603e4u: goto label_2603e4;
        case 0x2603e8u: goto label_2603e8;
        case 0x2603ecu: goto label_2603ec;
        case 0x2603f0u: goto label_2603f0;
        case 0x2603f4u: goto label_2603f4;
        case 0x2603f8u: goto label_2603f8;
        case 0x2603fcu: goto label_2603fc;
        case 0x260400u: goto label_260400;
        case 0x260404u: goto label_260404;
        case 0x260408u: goto label_260408;
        case 0x26040cu: goto label_26040c;
        case 0x260410u: goto label_260410;
        case 0x260414u: goto label_260414;
        case 0x260418u: goto label_260418;
        case 0x26041cu: goto label_26041c;
        case 0x260420u: goto label_260420;
        case 0x260424u: goto label_260424;
        case 0x260428u: goto label_260428;
        case 0x26042cu: goto label_26042c;
        case 0x260430u: goto label_260430;
        case 0x260434u: goto label_260434;
        case 0x260438u: goto label_260438;
        case 0x26043cu: goto label_26043c;
        case 0x260440u: goto label_260440;
        case 0x260444u: goto label_260444;
        case 0x260448u: goto label_260448;
        case 0x26044cu: goto label_26044c;
        case 0x260450u: goto label_260450;
        case 0x260454u: goto label_260454;
        case 0x260458u: goto label_260458;
        case 0x26045cu: goto label_26045c;
        case 0x260460u: goto label_260460;
        case 0x260464u: goto label_260464;
        case 0x260468u: goto label_260468;
        case 0x26046cu: goto label_26046c;
        case 0x260470u: goto label_260470;
        case 0x260474u: goto label_260474;
        case 0x260478u: goto label_260478;
        case 0x26047cu: goto label_26047c;
        case 0x260480u: goto label_260480;
        case 0x260484u: goto label_260484;
        case 0x260488u: goto label_260488;
        case 0x26048cu: goto label_26048c;
        case 0x260490u: goto label_260490;
        case 0x260494u: goto label_260494;
        case 0x260498u: goto label_260498;
        case 0x26049cu: goto label_26049c;
        case 0x2604a0u: goto label_2604a0;
        case 0x2604a4u: goto label_2604a4;
        case 0x2604a8u: goto label_2604a8;
        case 0x2604acu: goto label_2604ac;
        case 0x2604b0u: goto label_2604b0;
        case 0x2604b4u: goto label_2604b4;
        case 0x2604b8u: goto label_2604b8;
        case 0x2604bcu: goto label_2604bc;
        case 0x2604c0u: goto label_2604c0;
        case 0x2604c4u: goto label_2604c4;
        case 0x2604c8u: goto label_2604c8;
        case 0x2604ccu: goto label_2604cc;
        case 0x2604d0u: goto label_2604d0;
        case 0x2604d4u: goto label_2604d4;
        case 0x2604d8u: goto label_2604d8;
        case 0x2604dcu: goto label_2604dc;
        case 0x2604e0u: goto label_2604e0;
        case 0x2604e4u: goto label_2604e4;
        case 0x2604e8u: goto label_2604e8;
        case 0x2604ecu: goto label_2604ec;
        case 0x2604f0u: goto label_2604f0;
        case 0x2604f4u: goto label_2604f4;
        case 0x2604f8u: goto label_2604f8;
        case 0x2604fcu: goto label_2604fc;
        case 0x260500u: goto label_260500;
        case 0x260504u: goto label_260504;
        case 0x260508u: goto label_260508;
        case 0x26050cu: goto label_26050c;
        case 0x260510u: goto label_260510;
        case 0x260514u: goto label_260514;
        case 0x260518u: goto label_260518;
        case 0x26051cu: goto label_26051c;
        case 0x260520u: goto label_260520;
        case 0x260524u: goto label_260524;
        case 0x260528u: goto label_260528;
        case 0x26052cu: goto label_26052c;
        case 0x260530u: goto label_260530;
        case 0x260534u: goto label_260534;
        case 0x260538u: goto label_260538;
        case 0x26053cu: goto label_26053c;
        case 0x260540u: goto label_260540;
        case 0x260544u: goto label_260544;
        case 0x260548u: goto label_260548;
        case 0x26054cu: goto label_26054c;
        case 0x260550u: goto label_260550;
        case 0x260554u: goto label_260554;
        case 0x260558u: goto label_260558;
        case 0x26055cu: goto label_26055c;
        case 0x260560u: goto label_260560;
        case 0x260564u: goto label_260564;
        case 0x260568u: goto label_260568;
        case 0x26056cu: goto label_26056c;
        case 0x260570u: goto label_260570;
        case 0x260574u: goto label_260574;
        case 0x260578u: goto label_260578;
        case 0x26057cu: goto label_26057c;
        case 0x260580u: goto label_260580;
        case 0x260584u: goto label_260584;
        case 0x260588u: goto label_260588;
        case 0x26058cu: goto label_26058c;
        case 0x260590u: goto label_260590;
        case 0x260594u: goto label_260594;
        case 0x260598u: goto label_260598;
        case 0x26059cu: goto label_26059c;
        case 0x2605a0u: goto label_2605a0;
        case 0x2605a4u: goto label_2605a4;
        case 0x2605a8u: goto label_2605a8;
        case 0x2605acu: goto label_2605ac;
        case 0x2605b0u: goto label_2605b0;
        case 0x2605b4u: goto label_2605b4;
        case 0x2605b8u: goto label_2605b8;
        case 0x2605bcu: goto label_2605bc;
        case 0x2605c0u: goto label_2605c0;
        case 0x2605c4u: goto label_2605c4;
        case 0x2605c8u: goto label_2605c8;
        case 0x2605ccu: goto label_2605cc;
        case 0x2605d0u: goto label_2605d0;
        case 0x2605d4u: goto label_2605d4;
        case 0x2605d8u: goto label_2605d8;
        case 0x2605dcu: goto label_2605dc;
        case 0x2605e0u: goto label_2605e0;
        case 0x2605e4u: goto label_2605e4;
        case 0x2605e8u: goto label_2605e8;
        case 0x2605ecu: goto label_2605ec;
        case 0x2605f0u: goto label_2605f0;
        case 0x2605f4u: goto label_2605f4;
        case 0x2605f8u: goto label_2605f8;
        case 0x2605fcu: goto label_2605fc;
        case 0x260600u: goto label_260600;
        case 0x260604u: goto label_260604;
        case 0x260608u: goto label_260608;
        case 0x26060cu: goto label_26060c;
        case 0x260610u: goto label_260610;
        case 0x260614u: goto label_260614;
        case 0x260618u: goto label_260618;
        case 0x26061cu: goto label_26061c;
        case 0x260620u: goto label_260620;
        case 0x260624u: goto label_260624;
        case 0x260628u: goto label_260628;
        case 0x26062cu: goto label_26062c;
        case 0x260630u: goto label_260630;
        case 0x260634u: goto label_260634;
        case 0x260638u: goto label_260638;
        case 0x26063cu: goto label_26063c;
        case 0x260640u: goto label_260640;
        case 0x260644u: goto label_260644;
        case 0x260648u: goto label_260648;
        case 0x26064cu: goto label_26064c;
        case 0x260650u: goto label_260650;
        case 0x260654u: goto label_260654;
        case 0x260658u: goto label_260658;
        case 0x26065cu: goto label_26065c;
        case 0x260660u: goto label_260660;
        case 0x260664u: goto label_260664;
        case 0x260668u: goto label_260668;
        case 0x26066cu: goto label_26066c;
        case 0x260670u: goto label_260670;
        case 0x260674u: goto label_260674;
        case 0x260678u: goto label_260678;
        case 0x26067cu: goto label_26067c;
        case 0x260680u: goto label_260680;
        case 0x260684u: goto label_260684;
        case 0x260688u: goto label_260688;
        case 0x26068cu: goto label_26068c;
        case 0x260690u: goto label_260690;
        case 0x260694u: goto label_260694;
        case 0x260698u: goto label_260698;
        case 0x26069cu: goto label_26069c;
        case 0x2606a0u: goto label_2606a0;
        case 0x2606a4u: goto label_2606a4;
        case 0x2606a8u: goto label_2606a8;
        case 0x2606acu: goto label_2606ac;
        case 0x2606b0u: goto label_2606b0;
        case 0x2606b4u: goto label_2606b4;
        case 0x2606b8u: goto label_2606b8;
        case 0x2606bcu: goto label_2606bc;
        case 0x2606c0u: goto label_2606c0;
        case 0x2606c4u: goto label_2606c4;
        case 0x2606c8u: goto label_2606c8;
        case 0x2606ccu: goto label_2606cc;
        case 0x2606d0u: goto label_2606d0;
        case 0x2606d4u: goto label_2606d4;
        case 0x2606d8u: goto label_2606d8;
        case 0x2606dcu: goto label_2606dc;
        case 0x2606e0u: goto label_2606e0;
        case 0x2606e4u: goto label_2606e4;
        case 0x2606e8u: goto label_2606e8;
        case 0x2606ecu: goto label_2606ec;
        case 0x2606f0u: goto label_2606f0;
        case 0x2606f4u: goto label_2606f4;
        case 0x2606f8u: goto label_2606f8;
        case 0x2606fcu: goto label_2606fc;
        case 0x260700u: goto label_260700;
        case 0x260704u: goto label_260704;
        case 0x260708u: goto label_260708;
        case 0x26070cu: goto label_26070c;
        case 0x260710u: goto label_260710;
        case 0x260714u: goto label_260714;
        case 0x260718u: goto label_260718;
        case 0x26071cu: goto label_26071c;
        case 0x260720u: goto label_260720;
        case 0x260724u: goto label_260724;
        case 0x260728u: goto label_260728;
        case 0x26072cu: goto label_26072c;
        case 0x260730u: goto label_260730;
        case 0x260734u: goto label_260734;
        case 0x260738u: goto label_260738;
        case 0x26073cu: goto label_26073c;
        case 0x260740u: goto label_260740;
        case 0x260744u: goto label_260744;
        case 0x260748u: goto label_260748;
        case 0x26074cu: goto label_26074c;
        case 0x260750u: goto label_260750;
        case 0x260754u: goto label_260754;
        case 0x260758u: goto label_260758;
        case 0x26075cu: goto label_26075c;
        case 0x260760u: goto label_260760;
        case 0x260764u: goto label_260764;
        case 0x260768u: goto label_260768;
        case 0x26076cu: goto label_26076c;
        case 0x260770u: goto label_260770;
        case 0x260774u: goto label_260774;
        case 0x260778u: goto label_260778;
        case 0x26077cu: goto label_26077c;
        case 0x260780u: goto label_260780;
        case 0x260784u: goto label_260784;
        case 0x260788u: goto label_260788;
        case 0x26078cu: goto label_26078c;
        case 0x260790u: goto label_260790;
        case 0x260794u: goto label_260794;
        case 0x260798u: goto label_260798;
        case 0x26079cu: goto label_26079c;
        case 0x2607a0u: goto label_2607a0;
        case 0x2607a4u: goto label_2607a4;
        case 0x2607a8u: goto label_2607a8;
        case 0x2607acu: goto label_2607ac;
        case 0x2607b0u: goto label_2607b0;
        case 0x2607b4u: goto label_2607b4;
        case 0x2607b8u: goto label_2607b8;
        case 0x2607bcu: goto label_2607bc;
        case 0x2607c0u: goto label_2607c0;
        case 0x2607c4u: goto label_2607c4;
        case 0x2607c8u: goto label_2607c8;
        case 0x2607ccu: goto label_2607cc;
        case 0x2607d0u: goto label_2607d0;
        case 0x2607d4u: goto label_2607d4;
        case 0x2607d8u: goto label_2607d8;
        case 0x2607dcu: goto label_2607dc;
        case 0x2607e0u: goto label_2607e0;
        case 0x2607e4u: goto label_2607e4;
        case 0x2607e8u: goto label_2607e8;
        case 0x2607ecu: goto label_2607ec;
        case 0x2607f0u: goto label_2607f0;
        case 0x2607f4u: goto label_2607f4;
        case 0x2607f8u: goto label_2607f8;
        case 0x2607fcu: goto label_2607fc;
        case 0x260800u: goto label_260800;
        case 0x260804u: goto label_260804;
        case 0x260808u: goto label_260808;
        case 0x26080cu: goto label_26080c;
        case 0x260810u: goto label_260810;
        case 0x260814u: goto label_260814;
        case 0x260818u: goto label_260818;
        case 0x26081cu: goto label_26081c;
        case 0x260820u: goto label_260820;
        case 0x260824u: goto label_260824;
        case 0x260828u: goto label_260828;
        case 0x26082cu: goto label_26082c;
        case 0x260830u: goto label_260830;
        case 0x260834u: goto label_260834;
        case 0x260838u: goto label_260838;
        case 0x26083cu: goto label_26083c;
        case 0x260840u: goto label_260840;
        case 0x260844u: goto label_260844;
        case 0x260848u: goto label_260848;
        case 0x26084cu: goto label_26084c;
        case 0x260850u: goto label_260850;
        case 0x260854u: goto label_260854;
        case 0x260858u: goto label_260858;
        case 0x26085cu: goto label_26085c;
        case 0x260860u: goto label_260860;
        case 0x260864u: goto label_260864;
        case 0x260868u: goto label_260868;
        case 0x26086cu: goto label_26086c;
        case 0x260870u: goto label_260870;
        case 0x260874u: goto label_260874;
        case 0x260878u: goto label_260878;
        case 0x26087cu: goto label_26087c;
        case 0x260880u: goto label_260880;
        case 0x260884u: goto label_260884;
        case 0x260888u: goto label_260888;
        case 0x26088cu: goto label_26088c;
        case 0x260890u: goto label_260890;
        case 0x260894u: goto label_260894;
        case 0x260898u: goto label_260898;
        case 0x26089cu: goto label_26089c;
        case 0x2608a0u: goto label_2608a0;
        case 0x2608a4u: goto label_2608a4;
        case 0x2608a8u: goto label_2608a8;
        case 0x2608acu: goto label_2608ac;
        case 0x2608b0u: goto label_2608b0;
        case 0x2608b4u: goto label_2608b4;
        case 0x2608b8u: goto label_2608b8;
        case 0x2608bcu: goto label_2608bc;
        case 0x2608c0u: goto label_2608c0;
        case 0x2608c4u: goto label_2608c4;
        case 0x2608c8u: goto label_2608c8;
        case 0x2608ccu: goto label_2608cc;
        case 0x2608d0u: goto label_2608d0;
        case 0x2608d4u: goto label_2608d4;
        case 0x2608d8u: goto label_2608d8;
        case 0x2608dcu: goto label_2608dc;
        case 0x2608e0u: goto label_2608e0;
        case 0x2608e4u: goto label_2608e4;
        case 0x2608e8u: goto label_2608e8;
        case 0x2608ecu: goto label_2608ec;
        case 0x2608f0u: goto label_2608f0;
        case 0x2608f4u: goto label_2608f4;
        case 0x2608f8u: goto label_2608f8;
        case 0x2608fcu: goto label_2608fc;
        case 0x260900u: goto label_260900;
        case 0x260904u: goto label_260904;
        case 0x260908u: goto label_260908;
        case 0x26090cu: goto label_26090c;
        case 0x260910u: goto label_260910;
        case 0x260914u: goto label_260914;
        case 0x260918u: goto label_260918;
        case 0x26091cu: goto label_26091c;
        case 0x260920u: goto label_260920;
        case 0x260924u: goto label_260924;
        case 0x260928u: goto label_260928;
        case 0x26092cu: goto label_26092c;
        case 0x260930u: goto label_260930;
        case 0x260934u: goto label_260934;
        case 0x260938u: goto label_260938;
        case 0x26093cu: goto label_26093c;
        case 0x260940u: goto label_260940;
        case 0x260944u: goto label_260944;
        case 0x260948u: goto label_260948;
        case 0x26094cu: goto label_26094c;
        case 0x260950u: goto label_260950;
        case 0x260954u: goto label_260954;
        case 0x260958u: goto label_260958;
        case 0x26095cu: goto label_26095c;
        case 0x260960u: goto label_260960;
        case 0x260964u: goto label_260964;
        case 0x260968u: goto label_260968;
        case 0x26096cu: goto label_26096c;
        case 0x260970u: goto label_260970;
        case 0x260974u: goto label_260974;
        case 0x260978u: goto label_260978;
        case 0x26097cu: goto label_26097c;
        case 0x260980u: goto label_260980;
        case 0x260984u: goto label_260984;
        case 0x260988u: goto label_260988;
        case 0x26098cu: goto label_26098c;
        case 0x260990u: goto label_260990;
        case 0x260994u: goto label_260994;
        case 0x260998u: goto label_260998;
        case 0x26099cu: goto label_26099c;
        case 0x2609a0u: goto label_2609a0;
        case 0x2609a4u: goto label_2609a4;
        case 0x2609a8u: goto label_2609a8;
        case 0x2609acu: goto label_2609ac;
        case 0x2609b0u: goto label_2609b0;
        case 0x2609b4u: goto label_2609b4;
        case 0x2609b8u: goto label_2609b8;
        case 0x2609bcu: goto label_2609bc;
        case 0x2609c0u: goto label_2609c0;
        case 0x2609c4u: goto label_2609c4;
        case 0x2609c8u: goto label_2609c8;
        case 0x2609ccu: goto label_2609cc;
        case 0x2609d0u: goto label_2609d0;
        case 0x2609d4u: goto label_2609d4;
        case 0x2609d8u: goto label_2609d8;
        case 0x2609dcu: goto label_2609dc;
        case 0x2609e0u: goto label_2609e0;
        case 0x2609e4u: goto label_2609e4;
        case 0x2609e8u: goto label_2609e8;
        case 0x2609ecu: goto label_2609ec;
        case 0x2609f0u: goto label_2609f0;
        case 0x2609f4u: goto label_2609f4;
        case 0x2609f8u: goto label_2609f8;
        case 0x2609fcu: goto label_2609fc;
        case 0x260a00u: goto label_260a00;
        case 0x260a04u: goto label_260a04;
        case 0x260a08u: goto label_260a08;
        case 0x260a0cu: goto label_260a0c;
        case 0x260a10u: goto label_260a10;
        case 0x260a14u: goto label_260a14;
        case 0x260a18u: goto label_260a18;
        case 0x260a1cu: goto label_260a1c;
        case 0x260a20u: goto label_260a20;
        case 0x260a24u: goto label_260a24;
        case 0x260a28u: goto label_260a28;
        case 0x260a2cu: goto label_260a2c;
        case 0x260a30u: goto label_260a30;
        case 0x260a34u: goto label_260a34;
        case 0x260a38u: goto label_260a38;
        case 0x260a3cu: goto label_260a3c;
        case 0x260a40u: goto label_260a40;
        case 0x260a44u: goto label_260a44;
        case 0x260a48u: goto label_260a48;
        case 0x260a4cu: goto label_260a4c;
        case 0x260a50u: goto label_260a50;
        case 0x260a54u: goto label_260a54;
        case 0x260a58u: goto label_260a58;
        case 0x260a5cu: goto label_260a5c;
        case 0x260a60u: goto label_260a60;
        case 0x260a64u: goto label_260a64;
        case 0x260a68u: goto label_260a68;
        case 0x260a6cu: goto label_260a6c;
        case 0x260a70u: goto label_260a70;
        case 0x260a74u: goto label_260a74;
        case 0x260a78u: goto label_260a78;
        case 0x260a7cu: goto label_260a7c;
        case 0x260a80u: goto label_260a80;
        case 0x260a84u: goto label_260a84;
        case 0x260a88u: goto label_260a88;
        case 0x260a8cu: goto label_260a8c;
        case 0x260a90u: goto label_260a90;
        case 0x260a94u: goto label_260a94;
        case 0x260a98u: goto label_260a98;
        case 0x260a9cu: goto label_260a9c;
        case 0x260aa0u: goto label_260aa0;
        case 0x260aa4u: goto label_260aa4;
        case 0x260aa8u: goto label_260aa8;
        case 0x260aacu: goto label_260aac;
        case 0x260ab0u: goto label_260ab0;
        case 0x260ab4u: goto label_260ab4;
        case 0x260ab8u: goto label_260ab8;
        case 0x260abcu: goto label_260abc;
        case 0x260ac0u: goto label_260ac0;
        case 0x260ac4u: goto label_260ac4;
        case 0x260ac8u: goto label_260ac8;
        case 0x260accu: goto label_260acc;
        case 0x260ad0u: goto label_260ad0;
        case 0x260ad4u: goto label_260ad4;
        case 0x260ad8u: goto label_260ad8;
        case 0x260adcu: goto label_260adc;
        case 0x260ae0u: goto label_260ae0;
        case 0x260ae4u: goto label_260ae4;
        case 0x260ae8u: goto label_260ae8;
        case 0x260aecu: goto label_260aec;
        case 0x260af0u: goto label_260af0;
        case 0x260af4u: goto label_260af4;
        case 0x260af8u: goto label_260af8;
        case 0x260afcu: goto label_260afc;
        case 0x260b00u: goto label_260b00;
        case 0x260b04u: goto label_260b04;
        case 0x260b08u: goto label_260b08;
        case 0x260b0cu: goto label_260b0c;
        case 0x260b10u: goto label_260b10;
        case 0x260b14u: goto label_260b14;
        case 0x260b18u: goto label_260b18;
        case 0x260b1cu: goto label_260b1c;
        case 0x260b20u: goto label_260b20;
        case 0x260b24u: goto label_260b24;
        case 0x260b28u: goto label_260b28;
        case 0x260b2cu: goto label_260b2c;
        case 0x260b30u: goto label_260b30;
        case 0x260b34u: goto label_260b34;
        case 0x260b38u: goto label_260b38;
        case 0x260b3cu: goto label_260b3c;
        case 0x260b40u: goto label_260b40;
        case 0x260b44u: goto label_260b44;
        case 0x260b48u: goto label_260b48;
        case 0x260b4cu: goto label_260b4c;
        case 0x260b50u: goto label_260b50;
        case 0x260b54u: goto label_260b54;
        case 0x260b58u: goto label_260b58;
        case 0x260b5cu: goto label_260b5c;
        case 0x260b60u: goto label_260b60;
        case 0x260b64u: goto label_260b64;
        case 0x260b68u: goto label_260b68;
        case 0x260b6cu: goto label_260b6c;
        case 0x260b70u: goto label_260b70;
        case 0x260b74u: goto label_260b74;
        case 0x260b78u: goto label_260b78;
        case 0x260b7cu: goto label_260b7c;
        case 0x260b80u: goto label_260b80;
        case 0x260b84u: goto label_260b84;
        case 0x260b88u: goto label_260b88;
        case 0x260b8cu: goto label_260b8c;
        case 0x260b90u: goto label_260b90;
        case 0x260b94u: goto label_260b94;
        case 0x260b98u: goto label_260b98;
        case 0x260b9cu: goto label_260b9c;
        case 0x260ba0u: goto label_260ba0;
        case 0x260ba4u: goto label_260ba4;
        case 0x260ba8u: goto label_260ba8;
        case 0x260bacu: goto label_260bac;
        case 0x260bb0u: goto label_260bb0;
        case 0x260bb4u: goto label_260bb4;
        case 0x260bb8u: goto label_260bb8;
        case 0x260bbcu: goto label_260bbc;
        case 0x260bc0u: goto label_260bc0;
        case 0x260bc4u: goto label_260bc4;
        case 0x260bc8u: goto label_260bc8;
        case 0x260bccu: goto label_260bcc;
        case 0x260bd0u: goto label_260bd0;
        case 0x260bd4u: goto label_260bd4;
        case 0x260bd8u: goto label_260bd8;
        case 0x260bdcu: goto label_260bdc;
        case 0x260be0u: goto label_260be0;
        case 0x260be4u: goto label_260be4;
        case 0x260be8u: goto label_260be8;
        case 0x260becu: goto label_260bec;
        case 0x260bf0u: goto label_260bf0;
        case 0x260bf4u: goto label_260bf4;
        case 0x260bf8u: goto label_260bf8;
        case 0x260bfcu: goto label_260bfc;
        case 0x260c00u: goto label_260c00;
        case 0x260c04u: goto label_260c04;
        case 0x260c08u: goto label_260c08;
        case 0x260c0cu: goto label_260c0c;
        case 0x260c10u: goto label_260c10;
        case 0x260c14u: goto label_260c14;
        case 0x260c18u: goto label_260c18;
        case 0x260c1cu: goto label_260c1c;
        case 0x260c20u: goto label_260c20;
        case 0x260c24u: goto label_260c24;
        case 0x260c28u: goto label_260c28;
        case 0x260c2cu: goto label_260c2c;
        case 0x260c30u: goto label_260c30;
        case 0x260c34u: goto label_260c34;
        case 0x260c38u: goto label_260c38;
        case 0x260c3cu: goto label_260c3c;
        case 0x260c40u: goto label_260c40;
        case 0x260c44u: goto label_260c44;
        case 0x260c48u: goto label_260c48;
        case 0x260c4cu: goto label_260c4c;
        case 0x260c50u: goto label_260c50;
        case 0x260c54u: goto label_260c54;
        case 0x260c58u: goto label_260c58;
        case 0x260c5cu: goto label_260c5c;
        case 0x260c60u: goto label_260c60;
        case 0x260c64u: goto label_260c64;
        case 0x260c68u: goto label_260c68;
        case 0x260c6cu: goto label_260c6c;
        case 0x260c70u: goto label_260c70;
        case 0x260c74u: goto label_260c74;
        case 0x260c78u: goto label_260c78;
        case 0x260c7cu: goto label_260c7c;
        case 0x260c80u: goto label_260c80;
        case 0x260c84u: goto label_260c84;
        case 0x260c88u: goto label_260c88;
        case 0x260c8cu: goto label_260c8c;
        case 0x260c90u: goto label_260c90;
        case 0x260c94u: goto label_260c94;
        case 0x260c98u: goto label_260c98;
        case 0x260c9cu: goto label_260c9c;
        case 0x260ca0u: goto label_260ca0;
        case 0x260ca4u: goto label_260ca4;
        case 0x260ca8u: goto label_260ca8;
        case 0x260cacu: goto label_260cac;
        case 0x260cb0u: goto label_260cb0;
        case 0x260cb4u: goto label_260cb4;
        case 0x260cb8u: goto label_260cb8;
        case 0x260cbcu: goto label_260cbc;
        case 0x260cc0u: goto label_260cc0;
        case 0x260cc4u: goto label_260cc4;
        case 0x260cc8u: goto label_260cc8;
        case 0x260cccu: goto label_260ccc;
        case 0x260cd0u: goto label_260cd0;
        case 0x260cd4u: goto label_260cd4;
        case 0x260cd8u: goto label_260cd8;
        case 0x260cdcu: goto label_260cdc;
        case 0x260ce0u: goto label_260ce0;
        case 0x260ce4u: goto label_260ce4;
        case 0x260ce8u: goto label_260ce8;
        case 0x260cecu: goto label_260cec;
        case 0x260cf0u: goto label_260cf0;
        case 0x260cf4u: goto label_260cf4;
        case 0x260cf8u: goto label_260cf8;
        case 0x260cfcu: goto label_260cfc;
        case 0x260d00u: goto label_260d00;
        case 0x260d04u: goto label_260d04;
        case 0x260d08u: goto label_260d08;
        case 0x260d0cu: goto label_260d0c;
        case 0x260d10u: goto label_260d10;
        case 0x260d14u: goto label_260d14;
        case 0x260d18u: goto label_260d18;
        case 0x260d1cu: goto label_260d1c;
        case 0x260d20u: goto label_260d20;
        case 0x260d24u: goto label_260d24;
        case 0x260d28u: goto label_260d28;
        case 0x260d2cu: goto label_260d2c;
        case 0x260d30u: goto label_260d30;
        case 0x260d34u: goto label_260d34;
        case 0x260d38u: goto label_260d38;
        case 0x260d3cu: goto label_260d3c;
        case 0x260d40u: goto label_260d40;
        case 0x260d44u: goto label_260d44;
        case 0x260d48u: goto label_260d48;
        case 0x260d4cu: goto label_260d4c;
        case 0x260d50u: goto label_260d50;
        case 0x260d54u: goto label_260d54;
        case 0x260d58u: goto label_260d58;
        case 0x260d5cu: goto label_260d5c;
        case 0x260d60u: goto label_260d60;
        case 0x260d64u: goto label_260d64;
        case 0x260d68u: goto label_260d68;
        case 0x260d6cu: goto label_260d6c;
        case 0x260d70u: goto label_260d70;
        case 0x260d74u: goto label_260d74;
        case 0x260d78u: goto label_260d78;
        case 0x260d7cu: goto label_260d7c;
        case 0x260d80u: goto label_260d80;
        case 0x260d84u: goto label_260d84;
        case 0x260d88u: goto label_260d88;
        case 0x260d8cu: goto label_260d8c;
        case 0x260d90u: goto label_260d90;
        case 0x260d94u: goto label_260d94;
        case 0x260d98u: goto label_260d98;
        case 0x260d9cu: goto label_260d9c;
        case 0x260da0u: goto label_260da0;
        case 0x260da4u: goto label_260da4;
        case 0x260da8u: goto label_260da8;
        case 0x260dacu: goto label_260dac;
        case 0x260db0u: goto label_260db0;
        case 0x260db4u: goto label_260db4;
        case 0x260db8u: goto label_260db8;
        case 0x260dbcu: goto label_260dbc;
        case 0x260dc0u: goto label_260dc0;
        case 0x260dc4u: goto label_260dc4;
        case 0x260dc8u: goto label_260dc8;
        case 0x260dccu: goto label_260dcc;
        case 0x260dd0u: goto label_260dd0;
        case 0x260dd4u: goto label_260dd4;
        case 0x260dd8u: goto label_260dd8;
        case 0x260ddcu: goto label_260ddc;
        case 0x260de0u: goto label_260de0;
        case 0x260de4u: goto label_260de4;
        case 0x260de8u: goto label_260de8;
        case 0x260decu: goto label_260dec;
        case 0x260df0u: goto label_260df0;
        case 0x260df4u: goto label_260df4;
        case 0x260df8u: goto label_260df8;
        case 0x260dfcu: goto label_260dfc;
        case 0x260e00u: goto label_260e00;
        case 0x260e04u: goto label_260e04;
        case 0x260e08u: goto label_260e08;
        case 0x260e0cu: goto label_260e0c;
        case 0x260e10u: goto label_260e10;
        case 0x260e14u: goto label_260e14;
        case 0x260e18u: goto label_260e18;
        case 0x260e1cu: goto label_260e1c;
        case 0x260e20u: goto label_260e20;
        case 0x260e24u: goto label_260e24;
        case 0x260e28u: goto label_260e28;
        case 0x260e2cu: goto label_260e2c;
        case 0x260e30u: goto label_260e30;
        case 0x260e34u: goto label_260e34;
        case 0x260e38u: goto label_260e38;
        case 0x260e3cu: goto label_260e3c;
        case 0x260e40u: goto label_260e40;
        case 0x260e44u: goto label_260e44;
        case 0x260e48u: goto label_260e48;
        case 0x260e4cu: goto label_260e4c;
        case 0x260e50u: goto label_260e50;
        case 0x260e54u: goto label_260e54;
        case 0x260e58u: goto label_260e58;
        case 0x260e5cu: goto label_260e5c;
        case 0x260e60u: goto label_260e60;
        case 0x260e64u: goto label_260e64;
        case 0x260e68u: goto label_260e68;
        case 0x260e6cu: goto label_260e6c;
        case 0x260e70u: goto label_260e70;
        case 0x260e74u: goto label_260e74;
        case 0x260e78u: goto label_260e78;
        case 0x260e7cu: goto label_260e7c;
        case 0x260e80u: goto label_260e80;
        case 0x260e84u: goto label_260e84;
        case 0x260e88u: goto label_260e88;
        case 0x260e8cu: goto label_260e8c;
        case 0x260e90u: goto label_260e90;
        case 0x260e94u: goto label_260e94;
        case 0x260e98u: goto label_260e98;
        case 0x260e9cu: goto label_260e9c;
        case 0x260ea0u: goto label_260ea0;
        case 0x260ea4u: goto label_260ea4;
        case 0x260ea8u: goto label_260ea8;
        case 0x260eacu: goto label_260eac;
        case 0x260eb0u: goto label_260eb0;
        case 0x260eb4u: goto label_260eb4;
        case 0x260eb8u: goto label_260eb8;
        case 0x260ebcu: goto label_260ebc;
        case 0x260ec0u: goto label_260ec0;
        case 0x260ec4u: goto label_260ec4;
        case 0x260ec8u: goto label_260ec8;
        case 0x260eccu: goto label_260ecc;
        case 0x260ed0u: goto label_260ed0;
        case 0x260ed4u: goto label_260ed4;
        case 0x260ed8u: goto label_260ed8;
        case 0x260edcu: goto label_260edc;
        case 0x260ee0u: goto label_260ee0;
        case 0x260ee4u: goto label_260ee4;
        case 0x260ee8u: goto label_260ee8;
        case 0x260eecu: goto label_260eec;
        case 0x260ef0u: goto label_260ef0;
        case 0x260ef4u: goto label_260ef4;
        case 0x260ef8u: goto label_260ef8;
        case 0x260efcu: goto label_260efc;
        case 0x260f00u: goto label_260f00;
        case 0x260f04u: goto label_260f04;
        case 0x260f08u: goto label_260f08;
        case 0x260f0cu: goto label_260f0c;
        case 0x260f10u: goto label_260f10;
        case 0x260f14u: goto label_260f14;
        case 0x260f18u: goto label_260f18;
        case 0x260f1cu: goto label_260f1c;
        case 0x260f20u: goto label_260f20;
        case 0x260f24u: goto label_260f24;
        case 0x260f28u: goto label_260f28;
        case 0x260f2cu: goto label_260f2c;
        case 0x260f30u: goto label_260f30;
        case 0x260f34u: goto label_260f34;
        case 0x260f38u: goto label_260f38;
        case 0x260f3cu: goto label_260f3c;
        case 0x260f40u: goto label_260f40;
        case 0x260f44u: goto label_260f44;
        case 0x260f48u: goto label_260f48;
        case 0x260f4cu: goto label_260f4c;
        case 0x260f50u: goto label_260f50;
        case 0x260f54u: goto label_260f54;
        case 0x260f58u: goto label_260f58;
        case 0x260f5cu: goto label_260f5c;
        case 0x260f60u: goto label_260f60;
        case 0x260f64u: goto label_260f64;
        case 0x260f68u: goto label_260f68;
        case 0x260f6cu: goto label_260f6c;
        case 0x260f70u: goto label_260f70;
        case 0x260f74u: goto label_260f74;
        case 0x260f78u: goto label_260f78;
        case 0x260f7cu: goto label_260f7c;
        case 0x260f80u: goto label_260f80;
        case 0x260f84u: goto label_260f84;
        case 0x260f88u: goto label_260f88;
        case 0x260f8cu: goto label_260f8c;
        case 0x260f90u: goto label_260f90;
        case 0x260f94u: goto label_260f94;
        case 0x260f98u: goto label_260f98;
        case 0x260f9cu: goto label_260f9c;
        case 0x260fa0u: goto label_260fa0;
        case 0x260fa4u: goto label_260fa4;
        case 0x260fa8u: goto label_260fa8;
        case 0x260facu: goto label_260fac;
        case 0x260fb0u: goto label_260fb0;
        case 0x260fb4u: goto label_260fb4;
        case 0x260fb8u: goto label_260fb8;
        case 0x260fbcu: goto label_260fbc;
        case 0x260fc0u: goto label_260fc0;
        case 0x260fc4u: goto label_260fc4;
        case 0x260fc8u: goto label_260fc8;
        case 0x260fccu: goto label_260fcc;
        case 0x260fd0u: goto label_260fd0;
        case 0x260fd4u: goto label_260fd4;
        case 0x260fd8u: goto label_260fd8;
        case 0x260fdcu: goto label_260fdc;
        case 0x260fe0u: goto label_260fe0;
        case 0x260fe4u: goto label_260fe4;
        case 0x260fe8u: goto label_260fe8;
        case 0x260fecu: goto label_260fec;
        case 0x260ff0u: goto label_260ff0;
        case 0x260ff4u: goto label_260ff4;
        case 0x260ff8u: goto label_260ff8;
        case 0x260ffcu: goto label_260ffc;
        case 0x261000u: goto label_261000;
        case 0x261004u: goto label_261004;
        case 0x261008u: goto label_261008;
        case 0x26100cu: goto label_26100c;
        case 0x261010u: goto label_261010;
        case 0x261014u: goto label_261014;
        case 0x261018u: goto label_261018;
        case 0x26101cu: goto label_26101c;
        case 0x261020u: goto label_261020;
        case 0x261024u: goto label_261024;
        case 0x261028u: goto label_261028;
        case 0x26102cu: goto label_26102c;
        case 0x261030u: goto label_261030;
        case 0x261034u: goto label_261034;
        case 0x261038u: goto label_261038;
        case 0x26103cu: goto label_26103c;
        case 0x261040u: goto label_261040;
        case 0x261044u: goto label_261044;
        case 0x261048u: goto label_261048;
        case 0x26104cu: goto label_26104c;
        case 0x261050u: goto label_261050;
        case 0x261054u: goto label_261054;
        case 0x261058u: goto label_261058;
        case 0x26105cu: goto label_26105c;
        case 0x261060u: goto label_261060;
        case 0x261064u: goto label_261064;
        case 0x261068u: goto label_261068;
        case 0x26106cu: goto label_26106c;
        case 0x261070u: goto label_261070;
        case 0x261074u: goto label_261074;
        case 0x261078u: goto label_261078;
        case 0x26107cu: goto label_26107c;
        case 0x261080u: goto label_261080;
        case 0x261084u: goto label_261084;
        case 0x261088u: goto label_261088;
        case 0x26108cu: goto label_26108c;
        case 0x261090u: goto label_261090;
        case 0x261094u: goto label_261094;
        case 0x261098u: goto label_261098;
        case 0x26109cu: goto label_26109c;
        case 0x2610a0u: goto label_2610a0;
        case 0x2610a4u: goto label_2610a4;
        case 0x2610a8u: goto label_2610a8;
        case 0x2610acu: goto label_2610ac;
        case 0x2610b0u: goto label_2610b0;
        case 0x2610b4u: goto label_2610b4;
        case 0x2610b8u: goto label_2610b8;
        case 0x2610bcu: goto label_2610bc;
        case 0x2610c0u: goto label_2610c0;
        case 0x2610c4u: goto label_2610c4;
        case 0x2610c8u: goto label_2610c8;
        case 0x2610ccu: goto label_2610cc;
        case 0x2610d0u: goto label_2610d0;
        case 0x2610d4u: goto label_2610d4;
        case 0x2610d8u: goto label_2610d8;
        case 0x2610dcu: goto label_2610dc;
        case 0x2610e0u: goto label_2610e0;
        case 0x2610e4u: goto label_2610e4;
        case 0x2610e8u: goto label_2610e8;
        case 0x2610ecu: goto label_2610ec;
        case 0x2610f0u: goto label_2610f0;
        case 0x2610f4u: goto label_2610f4;
        case 0x2610f8u: goto label_2610f8;
        case 0x2610fcu: goto label_2610fc;
        default: break;
    }

    ctx->pc = 0x25f9f0u;

label_25f9f0:
    // 0x25f9f0: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x25f9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
label_25f9f4:
    // 0x25f9f4: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x25f9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
label_25f9f8:
    // 0x25f9f8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x25f9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_25f9fc:
    // 0x25f9fc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x25f9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_25fa00:
    // 0x25fa00: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x25fa00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_25fa04:
    // 0x25fa04: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25fa04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_25fa08:
    // 0x25fa08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25fa08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_25fa0c:
    // 0x25fa0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25fa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_25fa10:
    // 0x25fa10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25fa10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_25fa14:
    // 0x25fa14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25fa14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_25fa18:
    // 0x25fa18: 0xafa40260  sw          $a0, 0x260($sp)
    ctx->pc = 0x25fa18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
label_25fa1c:
    // 0x25fa1c: 0xa3a50268  sb          $a1, 0x268($sp)
    ctx->pc = 0x25fa1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 616), (uint8_t)GPR_U32(ctx, 5));
label_25fa20:
    // 0x25fa20: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x25fa20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25fa24:
    // 0x25fa24: 0x93a50268  lbu         $a1, 0x268($sp)
    ctx->pc = 0x25fa24u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 616)));
label_25fa28:
    // 0x25fa28: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x25fa28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_25fa2c:
    // 0x25fa2c: 0x8c66034c  lw          $a2, 0x34C($v1)
    ctx->pc = 0x25fa2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 844)));
label_25fa30:
    // 0x25fa30: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x25fa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_25fa34:
    // 0x25fa34: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x25fa34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_25fa38:
    // 0x25fa38: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x25fa38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_25fa3c:
    // 0x25fa3c: 0x70a0a628  paddub      $s4, $a1, $zero
    ctx->pc = 0x25fa3cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_25fa40:
    // 0x25fa40: 0x93a20268  lbu         $v0, 0x268($sp)
    ctx->pc = 0x25fa40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 616)));
label_25fa44:
    // 0x25fa44: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x25fa44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_25fa48:
    // 0x25fa48: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x25fa48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_25fa4c:
    // 0x25fa4c: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x25fa4cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_25fa50:
    // 0x25fa50: 0x93a20268  lbu         $v0, 0x268($sp)
    ctx->pc = 0x25fa50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 616)));
label_25fa54:
    // 0x25fa54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25fa54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_25fa58:
    // 0x25fa58: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x25fa58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_25fa5c:
    // 0x25fa5c: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x25fa5cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_25fa60:
    // 0x25fa60: 0x93a50268  lbu         $a1, 0x268($sp)
    ctx->pc = 0x25fa60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 616)));
label_25fa64:
    // 0x25fa64: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x25fa64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_25fa68:
    // 0x25fa68: 0x24560003  addiu       $s6, $v0, 0x3
    ctx->pc = 0x25fa68u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_25fa6c:
    // 0x25fa6c: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x25fa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25fa70:
    // 0x25fa70: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x25fa70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_25fa74:
    // 0x25fa74: 0x8c860330  lw          $a2, 0x330($a0)
    ctx->pc = 0x25fa74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 816)));
label_25fa78:
    // 0x25fa78: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x25fa78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_25fa7c:
    // 0x25fa7c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x25fa7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25fa80:
    // 0x25fa80: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x25fa80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
label_25fa84:
    // 0x25fa84: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x25fa84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25fa88:
    // 0x25fa88: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x25fa88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_25fa8c:
    // 0x25fa8c: 0x8c660330  lw          $a2, 0x330($v1)
    ctx->pc = 0x25fa8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
label_25fa90:
    // 0x25fa90: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x25fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_25fa94:
    // 0x25fa94: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x25fa94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25fa98:
    // 0x25fa98: 0xe7a0024c  swc1        $f0, 0x24C($sp)
    ctx->pc = 0x25fa98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 588), bits); }
label_25fa9c:
    // 0x25fa9c: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x25fa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25faa0:
    // 0x25faa0: 0x93a50268  lbu         $a1, 0x268($sp)
    ctx->pc = 0x25faa0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 616)));
label_25faa4:
    // 0x25faa4: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x25faa4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_25faa8:
    // 0x25faa8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x25faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_25faac:
    // 0x25faac: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x25faacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_25fab0:
    // 0x25fab0: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x25fab0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_25fab4:
    // 0x25fab4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x25fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_25fab8:
    // 0x25fab8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x25fab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_25fabc:
    // 0x25fabc: 0x8c8502d0  lw          $a1, 0x2D0($a0)
    ctx->pc = 0x25fabcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
label_25fac0:
    // 0x25fac0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x25fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25fac4:
    // 0x25fac4: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x25fac4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25fac8:
    // 0x25fac8: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x25fac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25facc:
    // 0x25facc: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x25faccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_25fad0:
    // 0x25fad0: 0xb31021  addu        $v0, $a1, $s3
    ctx->pc = 0x25fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_25fad4:
    // 0x25fad4: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x25fad4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_25fad8:
    // 0x25fad8: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x25fad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_25fadc:
    // 0x25fadc: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x25fadcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_25fae0:
    // 0x25fae0: 0x8c8502d0  lw          $a1, 0x2D0($a0)
    ctx->pc = 0x25fae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
label_25fae4:
    // 0x25fae4: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x25fae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_25fae8:
    // 0x25fae8: 0x7080ae28  paddub      $s5, $a0, $zero
    ctx->pc = 0x25fae8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_25faec:
    // 0x25faec: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x25faecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25faf0:
    // 0x25faf0: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x25faf0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_25faf4:
    // 0x25faf4: 0xd01821  addu        $v1, $a2, $s0
    ctx->pc = 0x25faf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_25faf8:
    // 0x25faf8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x25faf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_25fafc:
    // 0x25fafc: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x25fafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25fb00:
    // 0x25fb00: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x25fb00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_25fb04:
    // 0x25fb04: 0x8c4402d0  lw          $a0, 0x2D0($v0)
    ctx->pc = 0x25fb04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_25fb08:
    // 0x25fb08: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x25fb08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25fb0c:
    // 0x25fb0c: 0x70a08e28  paddub      $s1, $a1, $zero
    ctx->pc = 0x25fb0cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_25fb10:
    // 0x25fb10: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x25fb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25fb14:
    // 0x25fb14: 0x162080  sll         $a0, $s6, 2
    ctx->pc = 0x25fb14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_25fb18:
    // 0x25fb18: 0x962821  addu        $a1, $a0, $s6
    ctx->pc = 0x25fb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
label_25fb1c:
    // 0x25fb1c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x25fb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_25fb20:
    // 0x25fb20: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x25fb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_25fb24:
    // 0x25fb24: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x25fb24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_25fb28:
    // 0x25fb28: 0x8c4502d0  lw          $a1, 0x2D0($v0)
    ctx->pc = 0x25fb28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_25fb2c:
    // 0x25fb2c: 0xa4b821  addu        $s7, $a1, $a0
    ctx->pc = 0x25fb2cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_25fb30:
    // 0x25fb30: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x25fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25fb34:
    // 0x25fb34: 0x93a50268  lbu         $a1, 0x268($sp)
    ctx->pc = 0x25fb34u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 616)));
label_25fb38:
    // 0x25fb38: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x25fb38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_25fb3c:
    // 0x25fb3c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x25fb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_25fb40:
    // 0x25fb40: 0x8c440330  lw          $a0, 0x330($v0)
    ctx->pc = 0x25fb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
label_25fb44:
    // 0x25fb44: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x25fb44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25fb48:
    // 0x25fb48: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x25fb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25fb4c:
    // 0x25fb4c: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x25fb4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_25fb50:
    // 0x25fb50: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x25fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25fb54:
    // 0x25fb54: 0x93a30268  lbu         $v1, 0x268($sp)
    ctx->pc = 0x25fb54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 616)));
label_25fb58:
    // 0x25fb58: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x25fb58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_25fb5c:
    // 0x25fb5c: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x25fb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_25fb60:
    // 0x25fb60: 0x8c460330  lw          $a2, 0x330($v0)
    ctx->pc = 0x25fb60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
label_25fb64:
    // 0x25fb64: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x25fb64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_25fb68:
    // 0x25fb68: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x25fb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25fb6c:
    // 0x25fb6c: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x25fb6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_25fb70:
    // 0x25fb70: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x25fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25fb74:
    // 0x25fb74: 0x93a50268  lbu         $a1, 0x268($sp)
    ctx->pc = 0x25fb74u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 616)));
label_25fb78:
    // 0x25fb78: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x25fb78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_25fb7c:
    // 0x25fb7c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x25fb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_25fb80:
    // 0x25fb80: 0x8c450330  lw          $a1, 0x330($v0)
    ctx->pc = 0x25fb80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
label_25fb84:
    // 0x25fb84: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x25fb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_25fb88:
    // 0x25fb88: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x25fb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25fb8c:
    // 0x25fb8c: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x25fb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_25fb90:
    // 0x25fb90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25fb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_25fb94:
    // 0x25fb94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25fb94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25fb98:
    // 0x25fb98: 0x0  nop
    ctx->pc = 0x25fb98u;
    // NOP
label_25fb9c:
    // 0x25fb9c: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x25fb9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
label_25fba0:
    // 0x25fba0: 0xc6400110  lwc1        $f0, 0x110($s2)
    ctx->pc = 0x25fba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25fba4:
    // 0x25fba4: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x25fba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_25fba8:
    // 0x25fba8: 0xc6400114  lwc1        $f0, 0x114($s2)
    ctx->pc = 0x25fba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25fbac:
    // 0x25fbac: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x25fbacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_25fbb0:
    // 0x25fbb0: 0xc6400118  lwc1        $f0, 0x118($s2)
    ctx->pc = 0x25fbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25fbb4:
    // 0x25fbb4: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x25fbb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_25fbb8:
    // 0x25fbb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25fbb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25fbbc:
    // 0x25fbbc: 0x0  nop
    ctx->pc = 0x25fbbcu;
    // NOP
label_25fbc0:
    // 0x25fbc0: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x25fbc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_25fbc4:
    // 0x25fbc4: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x25fbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25fbc8:
    // 0x25fbc8: 0x93a50268  lbu         $a1, 0x268($sp)
    ctx->pc = 0x25fbc8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 616)));
label_25fbcc:
    // 0x25fbcc: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x25fbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_25fbd0:
    // 0x25fbd0: 0x8c840344  lw          $a0, 0x344($a0)
    ctx->pc = 0x25fbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 836)));
label_25fbd4:
    // 0x25fbd4: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x25fbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_25fbd8:
    // 0x25fbd8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x25fbd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_25fbdc:
    // 0x25fbdc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x25fbdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_25fbe0:
    // 0x25fbe0: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x25fbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_25fbe4:
    // 0x25fbe4: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x25fbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25fbe8:
    // 0x25fbe8: 0x8ca60130  lw          $a2, 0x130($a1)
    ctx->pc = 0x25fbe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_25fbec:
    // 0x25fbec: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x25fbecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_25fbf0:
    // 0x25fbf0: 0x27a201f0  addiu       $v0, $sp, 0x1F0
    ctx->pc = 0x25fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_25fbf4:
    // 0x25fbf4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25fbf4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25fbf8:
    // 0x25fbf8: 0xc040ca2  jal         func_103288
label_25fbfc:
    if (ctx->pc == 0x25FBFCu) {
        ctx->pc = 0x25FC00u;
        goto label_25fc00;
    }
    ctx->pc = 0x25FBF8u;
    SET_GPR_U32(ctx, 31, 0x25FC00u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x25FC00u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25FC00u) { return; }
    ctx->pc = 0x25FC00u;
label_25fc00:
    // 0x25fc00: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x25fc00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_25fc04:
    // 0x25fc04: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x25fc04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_25fc08:
    // 0x25fc08: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x25fc08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_25fc0c:
    // 0x25fc0c: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x25fc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_25fc10:
    // 0x25fc10: 0xc040c7a  jal         func_1031E8
label_25fc14:
    if (ctx->pc == 0x25FC14u) {
        ctx->pc = 0x25FC18u;
        goto label_25fc18;
    }
    ctx->pc = 0x25FC10u;
    SET_GPR_U32(ctx, 31, 0x25FC18u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x25FC18u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25FC18u) { return; }
    ctx->pc = 0x25FC18u;
label_25fc18:
    // 0x25fc18: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x25fc18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_25fc1c:
    // 0x25fc1c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x25fc1cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25fc20:
    // 0x25fc20: 0x0  nop
    ctx->pc = 0x25fc20u;
    // NOP
label_25fc24:
    // 0x25fc24: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x25fc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_25fc28:
    // 0x25fc28: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x25fc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_25fc2c:
    // 0x25fc2c: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x25fc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_25fc30:
    // 0x25fc30: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x25fc30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_25fc34:
    // 0x25fc34: 0xc040bf4  jal         func_102FD0
label_25fc38:
    if (ctx->pc == 0x25FC38u) {
        ctx->pc = 0x25FC3Cu;
        goto label_25fc3c;
    }
    ctx->pc = 0x25FC34u;
    SET_GPR_U32(ctx, 31, 0x25FC3Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x25FC3Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25FC3Cu) { return; }
    ctx->pc = 0x25FC3Cu;
label_25fc3c:
    // 0x25fc3c: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x25fc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_25fc40:
    // 0x25fc40: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x25fc40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_25fc44:
    // 0x25fc44: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x25fc44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_25fc48:
    // 0x25fc48: 0xc040bf4  jal         func_102FD0
label_25fc4c:
    if (ctx->pc == 0x25FC4Cu) {
        ctx->pc = 0x25FC50u;
        goto label_25fc50;
    }
    ctx->pc = 0x25FC48u;
    SET_GPR_U32(ctx, 31, 0x25FC50u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x25FC50u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25FC50u) { return; }
    ctx->pc = 0x25FC50u;
label_25fc50:
    // 0x25fc50: 0xc6210110  lwc1        $f1, 0x110($s1)
    ctx->pc = 0x25fc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25fc54:
    // 0x25fc54: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x25fc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25fc58:
    // 0x25fc58: 0xc44002e0  lwc1        $f0, 0x2E0($v0)
    ctx->pc = 0x25fc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25fc5c:
    // 0x25fc5c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25fc5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25fc60:
    // 0x25fc60: 0xe7a00230  swc1        $f0, 0x230($sp)
    ctx->pc = 0x25fc60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
label_25fc64:
    // 0x25fc64: 0xc6200114  lwc1        $f0, 0x114($s1)
    ctx->pc = 0x25fc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25fc68:
    // 0x25fc68: 0xe7a00234  swc1        $f0, 0x234($sp)
    ctx->pc = 0x25fc68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
label_25fc6c:
    // 0x25fc6c: 0xc6210118  lwc1        $f1, 0x118($s1)
    ctx->pc = 0x25fc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25fc70:
    // 0x25fc70: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x25fc70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25fc74:
    // 0x25fc74: 0xc4a002e8  lwc1        $f0, 0x2E8($a1)
    ctx->pc = 0x25fc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25fc78:
    // 0x25fc78: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25fc78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25fc7c:
    // 0x25fc7c: 0xe7a00238  swc1        $f0, 0x238($sp)
    ctx->pc = 0x25fc7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
label_25fc80:
    // 0x25fc80: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x25fc80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_25fc84:
    // 0x25fc84: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x25fc84u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25fc88:
    // 0x25fc88: 0x0  nop
    ctx->pc = 0x25fc88u;
    // NOP
label_25fc8c:
    // 0x25fc8c: 0xe7a0023c  swc1        $f0, 0x23C($sp)
    ctx->pc = 0x25fc8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 572), bits); }
label_25fc90:
    // 0x25fc90: 0x8fa60260  lw          $a2, 0x260($sp)
    ctx->pc = 0x25fc90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25fc94:
    // 0x25fc94: 0x94c209e0  lhu         $v0, 0x9E0($a2)
    ctx->pc = 0x25fc94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2528)));
label_25fc98:
    // 0x25fc98: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x25fc98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_25fc9c:
    // 0x25fc9c: 0x30840004  andi        $a0, $a0, 0x4
    ctx->pc = 0x25fc9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_25fca0:
    // 0x25fca0: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_25fca4:
    if (ctx->pc == 0x25FCA4u) {
        ctx->pc = 0x25FCA8u;
        goto label_25fca8;
    }
    ctx->pc = 0x25FCA0u;
    {
        const bool branch_taken_0x25fca0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fca0) {
            ctx->pc = 0x25FCCCu;
            goto label_25fccc;
        }
    }
    ctx->pc = 0x25FCA8u;
label_25fca8:
    // 0x25fca8: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x25fca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25fcac:
    // 0x25fcac: 0x8ca20354  lw          $v0, 0x354($a1)
    ctx->pc = 0x25fcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 852)));
label_25fcb0:
    // 0x25fcb0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_25fcb4:
    if (ctx->pc == 0x25FCB4u) {
        ctx->pc = 0x25FCB8u;
        goto label_25fcb8;
    }
    ctx->pc = 0x25FCB0u;
    {
        const bool branch_taken_0x25fcb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fcb0) {
            ctx->pc = 0x25FCCCu;
            goto label_25fccc;
        }
    }
    ctx->pc = 0x25FCB8u;
label_25fcb8:
    // 0x25fcb8: 0xc6210110  lwc1        $f1, 0x110($s1)
    ctx->pc = 0x25fcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25fcbc:
    // 0x25fcbc: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x25fcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25fcc0:
    // 0x25fcc0: 0xc48002e0  lwc1        $f0, 0x2E0($a0)
    ctx->pc = 0x25fcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25fcc4:
    // 0x25fcc4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25fcc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_25fcc8:
    // 0x25fcc8: 0xe7a00230  swc1        $f0, 0x230($sp)
    ctx->pc = 0x25fcc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
label_25fccc:
    // 0x25fccc: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x25fcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25fcd0:
    // 0x25fcd0: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x25fcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_25fcd4:
    // 0x25fcd4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x25fcd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_25fcd8:
    // 0x25fcd8: 0x244500e0  addiu       $a1, $v0, 0xE0
    ctx->pc = 0x25fcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
label_25fcdc:
    // 0x25fcdc: 0x27a60230  addiu       $a2, $sp, 0x230
    ctx->pc = 0x25fcdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_25fce0:
    // 0x25fce0: 0xc040bf4  jal         func_102FD0
label_25fce4:
    if (ctx->pc == 0x25FCE4u) {
        ctx->pc = 0x25FCE8u;
        goto label_25fce8;
    }
    ctx->pc = 0x25FCE0u;
    SET_GPR_U32(ctx, 31, 0x25FCE8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x25FCE8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25FCE8u) { return; }
    ctx->pc = 0x25FCE8u;
label_25fce8:
    // 0x25fce8: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x25fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25fcec:
    // 0x25fcec: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x25fcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25fcf0:
    // 0x25fcf0: 0xc7a00234  lwc1        $f0, 0x234($sp)
    ctx->pc = 0x25fcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25fcf4:
    // 0x25fcf4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25fcf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_25fcf8:
    // 0x25fcf8: 0xe7a0025c  swc1        $f0, 0x25C($sp)
    ctx->pc = 0x25fcf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 604), bits); }
label_25fcfc:
    // 0x25fcfc: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x25fcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25fd00:
    // 0x25fd00: 0x948209e0  lhu         $v0, 0x9E0($a0)
    ctx->pc = 0x25fd00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2528)));
label_25fd04:
    // 0x25fd04: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25fd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_25fd08:
    // 0x25fd08: 0x30450008  andi        $a1, $v0, 0x8
    ctx->pc = 0x25fd08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_25fd0c:
    // 0x25fd0c: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_25fd10:
    if (ctx->pc == 0x25FD10u) {
        ctx->pc = 0x25FD14u;
        goto label_25fd14;
    }
    ctx->pc = 0x25FD0Cu;
    {
        const bool branch_taken_0x25fd0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x25fd0c) {
            ctx->pc = 0x25FD2Cu;
            goto label_25fd2c;
        }
    }
    ctx->pc = 0x25FD14u;
label_25fd14:
    // 0x25fd14: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x25fd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25fd18:
    // 0x25fd18: 0x904409da  lbu         $a0, 0x9DA($v0)
    ctx->pc = 0x25fd18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2522)));
label_25fd1c:
    // 0x25fd1c: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x25fd1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_25fd20:
    // 0x25fd20: 0x30a60040  andi        $a2, $a1, 0x40
    ctx->pc = 0x25fd20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
label_25fd24:
    // 0x25fd24: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_25fd28:
    if (ctx->pc == 0x25FD28u) {
        ctx->pc = 0x25FD2Cu;
        goto label_25fd2c;
    }
    ctx->pc = 0x25FD24u;
    {
        const bool branch_taken_0x25fd24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fd24) {
            ctx->pc = 0x25FD40u;
            goto label_25fd40;
        }
    }
    ctx->pc = 0x25FD2Cu;
label_25fd2c:
    // 0x25fd2c: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x25fd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25fd30:
    // 0x25fd30: 0xc44002d8  lwc1        $f0, 0x2D8($v0)
    ctx->pc = 0x25fd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25fd34:
    // 0x25fd34: 0xe7a00254  swc1        $f0, 0x254($sp)
    ctx->pc = 0x25fd34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 596), bits); }
label_25fd38:
    // 0x25fd38: 0x1000001c  b           . + 4 + (0x1C << 2)
label_25fd3c:
    if (ctx->pc == 0x25FD3Cu) {
        ctx->pc = 0x25FD40u;
        goto label_25fd40;
    }
    ctx->pc = 0x25FD38u;
    {
        const bool branch_taken_0x25fd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fd38) {
            ctx->pc = 0x25FDACu;
            goto label_25fdac;
        }
    }
    ctx->pc = 0x25FD40u;
label_25fd40:
    // 0x25fd40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x25fd40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_25fd44:
    // 0x25fd44: 0x8c24fdf8  lw          $a0, -0x208($at)
    ctx->pc = 0x25fd44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966776)));
label_25fd48:
    // 0x25fd48: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_25fd4c:
    if (ctx->pc == 0x25FD4Cu) {
        ctx->pc = 0x25FD50u;
        goto label_25fd50;
    }
    ctx->pc = 0x25FD48u;
    {
        const bool branch_taken_0x25fd48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x25fd48) {
            ctx->pc = 0x25FD64u;
            goto label_25fd64;
        }
    }
    ctx->pc = 0x25FD50u;
label_25fd50:
    // 0x25fd50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25fd50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25fd54:
    // 0x25fd54: 0x0  nop
    ctx->pc = 0x25fd54u;
    // NOP
label_25fd58:
    // 0x25fd58: 0xe7a00254  swc1        $f0, 0x254($sp)
    ctx->pc = 0x25fd58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 596), bits); }
label_25fd5c:
    // 0x25fd5c: 0x10000013  b           . + 4 + (0x13 << 2)
label_25fd60:
    if (ctx->pc == 0x25FD60u) {
        ctx->pc = 0x25FD64u;
        goto label_25fd64;
    }
    ctx->pc = 0x25FD5Cu;
    {
        const bool branch_taken_0x25fd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fd5c) {
            ctx->pc = 0x25FDACu;
            goto label_25fdac;
        }
    }
    ctx->pc = 0x25FD64u;
label_25fd64:
    // 0x25fd64: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x25fd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_25fd68:
    // 0x25fd68: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x25fd68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_25fd6c:
    // 0x25fd6c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x25fd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_25fd70:
    // 0x25fd70: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x25fd70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_25fd74:
    // 0x25fd74: 0xc05cf7c  jal         func_173DF0
label_25fd78:
    if (ctx->pc == 0x25FD78u) {
        ctx->pc = 0x25FD7Cu;
        goto label_25fd7c;
    }
    ctx->pc = 0x25FD74u;
    SET_GPR_U32(ctx, 31, 0x25FD7Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x25FD74u, 0x25FD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FD7Cu;
label_25fd7c:
    // 0x25fd7c: 0xe7a00254  swc1        $f0, 0x254($sp)
    ctx->pc = 0x25fd7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 596), bits); }
label_25fd80:
    // 0x25fd80: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x25fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
label_25fd84:
    // 0x25fd84: 0x34462400  ori         $a2, $v0, 0x2400
    ctx->pc = 0x25fd84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
label_25fd88:
    // 0x25fd88: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x25fd88u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25fd8c:
    // 0x25fd8c: 0xc7a00254  lwc1        $f0, 0x254($sp)
    ctx->pc = 0x25fd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25fd90:
    // 0x25fd90: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x25fd90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25fd94:
    // 0x25fd94: 0x0  nop
    ctx->pc = 0x25fd94u;
    // NOP
label_25fd98:
    // 0x25fd98: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_25fd9c:
    if (ctx->pc == 0x25FD9Cu) {
        ctx->pc = 0x25FDA0u;
        goto label_25fda0;
    }
    ctx->pc = 0x25FD98u;
    {
        const bool branch_taken_0x25fd98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25fd98) {
            ctx->pc = 0x25FDACu;
            goto label_25fdac;
        }
    }
    ctx->pc = 0x25FDA0u;
label_25fda0:
    // 0x25fda0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25fda0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25fda4:
    // 0x25fda4: 0x0  nop
    ctx->pc = 0x25fda4u;
    // NOP
label_25fda8:
    // 0x25fda8: 0xe7a00254  swc1        $f0, 0x254($sp)
    ctx->pc = 0x25fda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 596), bits); }
label_25fdac:
    // 0x25fdac: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x25fdacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25fdb0:
    // 0x25fdb0: 0xc4a102d8  lwc1        $f1, 0x2D8($a1)
    ctx->pc = 0x25fdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25fdb4:
    // 0x25fdb4: 0xc7a00254  lwc1        $f0, 0x254($sp)
    ctx->pc = 0x25fdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25fdb8:
    // 0x25fdb8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25fdb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_25fdbc:
    // 0x25fdbc: 0xe7a00258  swc1        $f0, 0x258($sp)
    ctx->pc = 0x25fdbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
label_25fdc0:
    // 0x25fdc0: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x25fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25fdc4:
    // 0x25fdc4: 0x90440012  lbu         $a0, 0x12($v0)
    ctx->pc = 0x25fdc4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_25fdc8:
    // 0x25fdc8: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x25fdc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_25fdcc:
    // 0x25fdcc: 0x30a40080  andi        $a0, $a1, 0x80
    ctx->pc = 0x25fdccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
label_25fdd0:
    // 0x25fdd0: 0x1080005b  beqz        $a0, . + 4 + (0x5B << 2)
label_25fdd4:
    if (ctx->pc == 0x25FDD4u) {
        ctx->pc = 0x25FDD8u;
        goto label_25fdd8;
    }
    ctx->pc = 0x25FDD0u;
    {
        const bool branch_taken_0x25fdd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fdd0) {
            ctx->pc = 0x25FF40u;
            goto label_25ff40;
        }
    }
    ctx->pc = 0x25FDD8u;
label_25fdd8:
    // 0x25fdd8: 0xc7a10258  lwc1        $f1, 0x258($sp)
    ctx->pc = 0x25fdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25fddc:
    // 0x25fddc: 0x3c0542c8  lui         $a1, 0x42C8
    ctx->pc = 0x25fddcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17096 << 16));
label_25fde0:
    // 0x25fde0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x25fde0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25fde4:
    // 0x25fde4: 0x0  nop
    ctx->pc = 0x25fde4u;
    // NOP
label_25fde8:
    // 0x25fde8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25fde8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25fdec:
    // 0x25fdec: 0x0  nop
    ctx->pc = 0x25fdecu;
    // NOP
label_25fdf0:
    // 0x25fdf0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_25fdf4:
    if (ctx->pc == 0x25FDF4u) {
        ctx->pc = 0x25FDF8u;
        goto label_25fdf8;
    }
    ctx->pc = 0x25FDF0u;
    {
        const bool branch_taken_0x25fdf0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25fdf0) {
            ctx->pc = 0x25FE10u;
            goto label_25fe10;
        }
    }
    ctx->pc = 0x25FDF8u;
label_25fdf8:
    // 0x25fdf8: 0x8fa60260  lw          $a2, 0x260($sp)
    ctx->pc = 0x25fdf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25fdfc:
    // 0x25fdfc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x25fdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_25fe00:
    // 0x25fe00: 0x8cc402d4  lw          $a0, 0x2D4($a2)
    ctx->pc = 0x25fe00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 724)));
label_25fe04:
    // 0x25fe04: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x25fe04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_25fe08:
    // 0x25fe08: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x25fe08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25fe0c:
    // 0x25fe0c: 0xe7a00258  swc1        $f0, 0x258($sp)
    ctx->pc = 0x25fe0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
label_25fe10:
    // 0x25fe10: 0xc7a10258  lwc1        $f1, 0x258($sp)
    ctx->pc = 0x25fe10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25fe14:
    // 0x25fe14: 0x3c03c2c8  lui         $v1, 0xC2C8
    ctx->pc = 0x25fe14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49864 << 16));
label_25fe18:
    // 0x25fe18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25fe18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25fe1c:
    // 0x25fe1c: 0x0  nop
    ctx->pc = 0x25fe1cu;
    // NOP
label_25fe20:
    // 0x25fe20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25fe20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25fe24:
    // 0x25fe24: 0x0  nop
    ctx->pc = 0x25fe24u;
    // NOP
label_25fe28:
    // 0x25fe28: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_25fe2c:
    if (ctx->pc == 0x25FE2Cu) {
        ctx->pc = 0x25FE30u;
        goto label_25fe30;
    }
    ctx->pc = 0x25FE28u;
    {
        const bool branch_taken_0x25fe28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25fe28) {
            ctx->pc = 0x25FE48u;
            goto label_25fe48;
        }
    }
    ctx->pc = 0x25FE30u;
label_25fe30:
    // 0x25fe30: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x25fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25fe34:
    // 0x25fe34: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x25fe34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_25fe38:
    // 0x25fe38: 0x8c4502d4  lw          $a1, 0x2D4($v0)
    ctx->pc = 0x25fe38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
label_25fe3c:
    // 0x25fe3c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x25fe3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_25fe40:
    // 0x25fe40: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x25fe40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25fe44:
    // 0x25fe44: 0xe7a00258  swc1        $f0, 0x258($sp)
    ctx->pc = 0x25fe44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
label_25fe48:
    // 0x25fe48: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x25fe48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25fe4c:
    // 0x25fe4c: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x25fe4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_25fe50:
    // 0x25fe50: 0x8ca202d4  lw          $v0, 0x2D4($a1)
    ctx->pc = 0x25fe50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 724)));
label_25fe54:
    // 0x25fe54: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x25fe54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_25fe58:
    // 0x25fe58: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x25fe58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25fe5c:
    // 0x25fe5c: 0xc7a00258  lwc1        $f0, 0x258($sp)
    ctx->pc = 0x25fe5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25fe60:
    // 0x25fe60: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x25fe60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25fe64:
    // 0x25fe64: 0x0  nop
    ctx->pc = 0x25fe64u;
    // NOP
label_25fe68:
    // 0x25fe68: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
label_25fe6c:
    if (ctx->pc == 0x25FE6Cu) {
        ctx->pc = 0x25FE70u;
        goto label_25fe70;
    }
    ctx->pc = 0x25FE68u;
    {
        const bool branch_taken_0x25fe68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25fe68) {
            ctx->pc = 0x25FED8u;
            goto label_25fed8;
        }
    }
    ctx->pc = 0x25FE70u;
label_25fe70:
    // 0x25fe70: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x25fe70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25fe74:
    // 0x25fe74: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x25fe74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_25fe78:
    // 0x25fe78: 0x8ca202d4  lw          $v0, 0x2D4($a1)
    ctx->pc = 0x25fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 724)));
label_25fe7c:
    // 0x25fe7c: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x25fe7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_25fe80:
    // 0x25fe80: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x25fe80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25fe84:
    // 0x25fe84: 0x3c0541c8  lui         $a1, 0x41C8
    ctx->pc = 0x25fe84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16840 << 16));
label_25fe88:
    // 0x25fe88: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x25fe88u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25fe8c:
    // 0x25fe8c: 0x0  nop
    ctx->pc = 0x25fe8cu;
    // NOP
label_25fe90:
    // 0x25fe90: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x25fe90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_25fe94:
    // 0x25fe94: 0xc7a00258  lwc1        $f0, 0x258($sp)
    ctx->pc = 0x25fe94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25fe98:
    // 0x25fe98: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x25fe98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25fe9c:
    // 0x25fe9c: 0x0  nop
    ctx->pc = 0x25fe9cu;
    // NOP
label_25fea0:
    // 0x25fea0: 0x4501007f  bc1t        . + 4 + (0x7F << 2)
label_25fea4:
    if (ctx->pc == 0x25FEA4u) {
        ctx->pc = 0x25FEA8u;
        goto label_25fea8;
    }
    ctx->pc = 0x25FEA0u;
    {
        const bool branch_taken_0x25fea0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25fea0) {
            ctx->pc = 0x2600A0u;
            goto label_2600a0;
        }
    }
    ctx->pc = 0x25FEA8u;
label_25fea8:
    // 0x25fea8: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x25fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25feac:
    // 0x25feac: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x25feacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_25feb0:
    // 0x25feb0: 0x8c4602d4  lw          $a2, 0x2D4($v0)
    ctx->pc = 0x25feb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
label_25feb4:
    // 0x25feb4: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x25feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_25feb8:
    // 0x25feb8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x25feb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25febc:
    // 0x25febc: 0x3c0441c8  lui         $a0, 0x41C8
    ctx->pc = 0x25febcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16840 << 16));
label_25fec0:
    // 0x25fec0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25fec0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25fec4:
    // 0x25fec4: 0x0  nop
    ctx->pc = 0x25fec4u;
    // NOP
label_25fec8:
    // 0x25fec8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25fec8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_25fecc:
    // 0x25fecc: 0xe7a00258  swc1        $f0, 0x258($sp)
    ctx->pc = 0x25feccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
label_25fed0:
    // 0x25fed0: 0x10000073  b           . + 4 + (0x73 << 2)
label_25fed4:
    if (ctx->pc == 0x25FED4u) {
        ctx->pc = 0x25FED8u;
        goto label_25fed8;
    }
    ctx->pc = 0x25FED0u;
    {
        const bool branch_taken_0x25fed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fed0) {
            ctx->pc = 0x2600A0u;
            goto label_2600a0;
        }
    }
    ctx->pc = 0x25FED8u;
label_25fed8:
    // 0x25fed8: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x25fed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25fedc:
    // 0x25fedc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x25fedcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_25fee0:
    // 0x25fee0: 0x8ca402d4  lw          $a0, 0x2D4($a1)
    ctx->pc = 0x25fee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 724)));
label_25fee4:
    // 0x25fee4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x25fee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_25fee8:
    // 0x25fee8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x25fee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25feec:
    // 0x25feec: 0x3c0441c8  lui         $a0, 0x41C8
    ctx->pc = 0x25feecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16840 << 16));
label_25fef0:
    // 0x25fef0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25fef0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25fef4:
    // 0x25fef4: 0x0  nop
    ctx->pc = 0x25fef4u;
    // NOP
label_25fef8:
    // 0x25fef8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x25fef8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25fefc:
    // 0x25fefc: 0xc7a00258  lwc1        $f0, 0x258($sp)
    ctx->pc = 0x25fefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ff00:
    // 0x25ff00: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25ff00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25ff04:
    // 0x25ff04: 0x0  nop
    ctx->pc = 0x25ff04u;
    // NOP
label_25ff08:
    // 0x25ff08: 0x45000065  bc1f        . + 4 + (0x65 << 2)
label_25ff0c:
    if (ctx->pc == 0x25FF0Cu) {
        ctx->pc = 0x25FF10u;
        goto label_25ff10;
    }
    ctx->pc = 0x25FF08u;
    {
        const bool branch_taken_0x25ff08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ff08) {
            ctx->pc = 0x2600A0u;
            goto label_2600a0;
        }
    }
    ctx->pc = 0x25FF10u;
label_25ff10:
    // 0x25ff10: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x25ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25ff14:
    // 0x25ff14: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x25ff14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_25ff18:
    // 0x25ff18: 0x8c4502d4  lw          $a1, 0x2D4($v0)
    ctx->pc = 0x25ff18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
label_25ff1c:
    // 0x25ff1c: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x25ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_25ff20:
    // 0x25ff20: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x25ff20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ff24:
    // 0x25ff24: 0x3c0441c8  lui         $a0, 0x41C8
    ctx->pc = 0x25ff24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16840 << 16));
label_25ff28:
    // 0x25ff28: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25ff28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25ff2c:
    // 0x25ff2c: 0x0  nop
    ctx->pc = 0x25ff2cu;
    // NOP
label_25ff30:
    // 0x25ff30: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25ff30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25ff34:
    // 0x25ff34: 0xe7a00258  swc1        $f0, 0x258($sp)
    ctx->pc = 0x25ff34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
label_25ff38:
    // 0x25ff38: 0x10000059  b           . + 4 + (0x59 << 2)
label_25ff3c:
    if (ctx->pc == 0x25FF3Cu) {
        ctx->pc = 0x25FF40u;
        goto label_25ff40;
    }
    ctx->pc = 0x25FF38u;
    {
        const bool branch_taken_0x25ff38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ff38) {
            ctx->pc = 0x2600A0u;
            goto label_2600a0;
        }
    }
    ctx->pc = 0x25FF40u;
label_25ff40:
    // 0x25ff40: 0xc7a10258  lwc1        $f1, 0x258($sp)
    ctx->pc = 0x25ff40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ff44:
    // 0x25ff44: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x25ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_25ff48:
    // 0x25ff48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25ff48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25ff4c:
    // 0x25ff4c: 0x0  nop
    ctx->pc = 0x25ff4cu;
    // NOP
label_25ff50:
    // 0x25ff50: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25ff50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25ff54:
    // 0x25ff54: 0x0  nop
    ctx->pc = 0x25ff54u;
    // NOP
label_25ff58:
    // 0x25ff58: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_25ff5c:
    if (ctx->pc == 0x25FF5Cu) {
        ctx->pc = 0x25FF60u;
        goto label_25ff60;
    }
    ctx->pc = 0x25FF58u;
    {
        const bool branch_taken_0x25ff58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ff58) {
            ctx->pc = 0x25FF78u;
            goto label_25ff78;
        }
    }
    ctx->pc = 0x25FF60u;
label_25ff60:
    // 0x25ff60: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x25ff60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25ff64:
    // 0x25ff64: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x25ff64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_25ff68:
    // 0x25ff68: 0x8c8202d4  lw          $v0, 0x2D4($a0)
    ctx->pc = 0x25ff68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 724)));
label_25ff6c:
    // 0x25ff6c: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x25ff6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_25ff70:
    // 0x25ff70: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x25ff70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ff74:
    // 0x25ff74: 0xe7a00258  swc1        $f0, 0x258($sp)
    ctx->pc = 0x25ff74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
label_25ff78:
    // 0x25ff78: 0xc7a10258  lwc1        $f1, 0x258($sp)
    ctx->pc = 0x25ff78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ff7c:
    // 0x25ff7c: 0x3c05c3fa  lui         $a1, 0xC3FA
    ctx->pc = 0x25ff7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50170 << 16));
label_25ff80:
    // 0x25ff80: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x25ff80u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25ff84:
    // 0x25ff84: 0x0  nop
    ctx->pc = 0x25ff84u;
    // NOP
label_25ff88:
    // 0x25ff88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25ff88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25ff8c:
    // 0x25ff8c: 0x0  nop
    ctx->pc = 0x25ff8cu;
    // NOP
label_25ff90:
    // 0x25ff90: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_25ff94:
    if (ctx->pc == 0x25FF94u) {
        ctx->pc = 0x25FF98u;
        goto label_25ff98;
    }
    ctx->pc = 0x25FF90u;
    {
        const bool branch_taken_0x25ff90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ff90) {
            ctx->pc = 0x25FFB0u;
            goto label_25ffb0;
        }
    }
    ctx->pc = 0x25FF98u;
label_25ff98:
    // 0x25ff98: 0x8fa60260  lw          $a2, 0x260($sp)
    ctx->pc = 0x25ff98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25ff9c:
    // 0x25ff9c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x25ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_25ffa0:
    // 0x25ffa0: 0x8cc502d4  lw          $a1, 0x2D4($a2)
    ctx->pc = 0x25ffa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 724)));
label_25ffa4:
    // 0x25ffa4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25ffa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25ffa8:
    // 0x25ffa8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x25ffa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ffac:
    // 0x25ffac: 0xe7a00258  swc1        $f0, 0x258($sp)
    ctx->pc = 0x25ffacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
label_25ffb0:
    // 0x25ffb0: 0x8fa60260  lw          $a2, 0x260($sp)
    ctx->pc = 0x25ffb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25ffb4:
    // 0x25ffb4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x25ffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_25ffb8:
    // 0x25ffb8: 0x8cc602d4  lw          $a2, 0x2D4($a2)
    ctx->pc = 0x25ffb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 724)));
label_25ffbc:
    // 0x25ffbc: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x25ffbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_25ffc0:
    // 0x25ffc0: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x25ffc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ffc4:
    // 0x25ffc4: 0xc7a00258  lwc1        $f0, 0x258($sp)
    ctx->pc = 0x25ffc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ffc8:
    // 0x25ffc8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x25ffc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25ffcc:
    // 0x25ffcc: 0x0  nop
    ctx->pc = 0x25ffccu;
    // NOP
label_25ffd0:
    // 0x25ffd0: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
label_25ffd4:
    if (ctx->pc == 0x25FFD4u) {
        ctx->pc = 0x25FFD8u;
        goto label_25ffd8;
    }
    ctx->pc = 0x25FFD0u;
    {
        const bool branch_taken_0x25ffd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ffd0) {
            ctx->pc = 0x260040u;
            goto label_260040;
        }
    }
    ctx->pc = 0x25FFD8u;
label_25ffd8:
    // 0x25ffd8: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x25ffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_25ffdc:
    // 0x25ffdc: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x25ffdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_25ffe0:
    // 0x25ffe0: 0x8c4602d4  lw          $a2, 0x2D4($v0)
    ctx->pc = 0x25ffe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
label_25ffe4:
    // 0x25ffe4: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x25ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_25ffe8:
    // 0x25ffe8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x25ffe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ffec:
    // 0x25ffec: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x25ffecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
label_25fff0:
    // 0x25fff0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25fff0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25fff4:
    // 0x25fff4: 0x0  nop
    ctx->pc = 0x25fff4u;
    // NOP
label_25fff8:
    // 0x25fff8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x25fff8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_25fffc:
    // 0x25fffc: 0xc7a00258  lwc1        $f0, 0x258($sp)
    ctx->pc = 0x25fffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260000:
    // 0x260000: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x260000u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_260004:
    // 0x260004: 0x0  nop
    ctx->pc = 0x260004u;
    // NOP
label_260008:
    // 0x260008: 0x45010025  bc1t        . + 4 + (0x25 << 2)
label_26000c:
    if (ctx->pc == 0x26000Cu) {
        ctx->pc = 0x260010u;
        goto label_260010;
    }
    ctx->pc = 0x260008u;
    {
        const bool branch_taken_0x260008 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x260008) {
            ctx->pc = 0x2600A0u;
            goto label_2600a0;
        }
    }
    ctx->pc = 0x260010u;
label_260010:
    // 0x260010: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x260010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_260014:
    // 0x260014: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x260014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_260018:
    // 0x260018: 0x8ca402d4  lw          $a0, 0x2D4($a1)
    ctx->pc = 0x260018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 724)));
label_26001c:
    // 0x26001c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x26001cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_260020:
    // 0x260020: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x260020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260024:
    // 0x260024: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x260024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
label_260028:
    // 0x260028: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x260028u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26002c:
    // 0x26002c: 0x0  nop
    ctx->pc = 0x26002cu;
    // NOP
label_260030:
    // 0x260030: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x260030u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_260034:
    // 0x260034: 0xe7a00258  swc1        $f0, 0x258($sp)
    ctx->pc = 0x260034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
label_260038:
    // 0x260038: 0x10000019  b           . + 4 + (0x19 << 2)
label_26003c:
    if (ctx->pc == 0x26003Cu) {
        ctx->pc = 0x260040u;
        goto label_260040;
    }
    ctx->pc = 0x260038u;
    {
        const bool branch_taken_0x260038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260038) {
            ctx->pc = 0x2600A0u;
            goto label_2600a0;
        }
    }
    ctx->pc = 0x260040u;
label_260040:
    // 0x260040: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x260040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_260044:
    // 0x260044: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x260044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_260048:
    // 0x260048: 0x8c4502d4  lw          $a1, 0x2D4($v0)
    ctx->pc = 0x260048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
label_26004c:
    // 0x26004c: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x26004cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_260050:
    // 0x260050: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x260050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260054:
    // 0x260054: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x260054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
label_260058:
    // 0x260058: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x260058u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26005c:
    // 0x26005c: 0x0  nop
    ctx->pc = 0x26005cu;
    // NOP
label_260060:
    // 0x260060: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x260060u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_260064:
    // 0x260064: 0xc7a00258  lwc1        $f0, 0x258($sp)
    ctx->pc = 0x260064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260068:
    // 0x260068: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x260068u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26006c:
    // 0x26006c: 0x0  nop
    ctx->pc = 0x26006cu;
    // NOP
label_260070:
    // 0x260070: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_260074:
    if (ctx->pc == 0x260074u) {
        ctx->pc = 0x260078u;
        goto label_260078;
    }
    ctx->pc = 0x260070u;
    {
        const bool branch_taken_0x260070 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x260070) {
            ctx->pc = 0x2600A0u;
            goto label_2600a0;
        }
    }
    ctx->pc = 0x260078u;
label_260078:
    // 0x260078: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x260078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_26007c:
    // 0x26007c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x26007cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_260080:
    // 0x260080: 0x8c4502d4  lw          $a1, 0x2D4($v0)
    ctx->pc = 0x260080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
label_260084:
    // 0x260084: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x260084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_260088:
    // 0x260088: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x260088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26008c:
    // 0x26008c: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x26008cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
label_260090:
    // 0x260090: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x260090u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_260094:
    // 0x260094: 0x0  nop
    ctx->pc = 0x260094u;
    // NOP
label_260098:
    // 0x260098: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x260098u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_26009c:
    // 0x26009c: 0xe7a00258  swc1        $f0, 0x258($sp)
    ctx->pc = 0x26009cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
label_2600a0:
    // 0x2600a0: 0xc7a00258  lwc1        $f0, 0x258($sp)
    ctx->pc = 0x2600a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2600a4:
    // 0x2600a4: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x2600a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_2600a8:
    // 0x2600a8: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x2600a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2600ac:
    // 0x2600ac: 0x8ca202d4  lw          $v0, 0x2D4($a1)
    ctx->pc = 0x2600acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 724)));
label_2600b0:
    // 0x2600b0: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x2600b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2600b4:
    // 0x2600b4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2600b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_2600b8:
    // 0x2600b8: 0xc7a10234  lwc1        $f1, 0x234($sp)
    ctx->pc = 0x2600b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2600bc:
    // 0x2600bc: 0xc7a00258  lwc1        $f0, 0x258($sp)
    ctx->pc = 0x2600bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2600c0:
    // 0x2600c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2600c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2600c4:
    // 0x2600c4: 0xe7a00234  swc1        $f0, 0x234($sp)
    ctx->pc = 0x2600c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
label_2600c8:
    // 0x2600c8: 0x2285fffd  addi        $a1, $s4, -0x3
    ctx->pc = 0x2600c8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 20), (int32_t)4294967293, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2600cc:
    // 0x2600cc: 0x2ca10010  sltiu       $at, $a1, 0x10
    ctx->pc = 0x2600ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_2600d0:
    // 0x2600d0: 0x10200094  beqz        $at, . + 4 + (0x94 << 2)
label_2600d4:
    if (ctx->pc == 0x2600D4u) {
        ctx->pc = 0x2600D8u;
        goto label_2600d8;
    }
    ctx->pc = 0x2600D0u;
    {
        const bool branch_taken_0x2600d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2600d0) {
            ctx->pc = 0x260324u;
            goto label_260324;
        }
    }
    ctx->pc = 0x2600D8u;
label_2600d8:
    // 0x2600d8: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x2600d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
label_2600dc:
    // 0x2600dc: 0x24c21430  addiu       $v0, $a2, 0x1430
    ctx->pc = 0x2600dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 5168));
label_2600e0:
    // 0x2600e0: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x2600e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2600e4:
    // 0x2600e4: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x2600e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2600e8:
    // 0x2600e8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2600e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2600ec:
    // 0x2600ec: 0x400008  jr          $v0
label_2600f0:
    if (ctx->pc == 0x2600F0u) {
        ctx->pc = 0x2600F4u;
        goto label_2600f4;
    }
    ctx->pc = 0x2600ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2600ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2600F4u;
label_2600f4:
    // 0x2600f4: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x2600f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2600f8:
    // 0x2600f8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2600f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_2600fc:
    // 0x2600fc: 0xc040cbc  jal         func_1032F0
label_260100:
    if (ctx->pc == 0x260100u) {
        ctx->pc = 0x260104u;
        goto label_260104;
    }
    ctx->pc = 0x2600FCu;
    SET_GPR_U32(ctx, 31, 0x260104u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260104u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260104u) { return; }
    ctx->pc = 0x260104u;
label_260104:
    // 0x260104: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x260104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_260108:
    // 0x260108: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x260108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_26010c:
    // 0x26010c: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x26010cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_260110:
    // 0x260110: 0xc040d0e  jal         func_103438
label_260114:
    if (ctx->pc == 0x260114u) {
        ctx->pc = 0x260118u;
        goto label_260118;
    }
    ctx->pc = 0x260110u;
    SET_GPR_U32(ctx, 31, 0x260118u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x260118u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260118u) { return; }
    ctx->pc = 0x260118u;
label_260118:
    // 0x260118: 0x27a201f0  addiu       $v0, $sp, 0x1F0
    ctx->pc = 0x260118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_26011c:
    // 0x26011c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26011cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260120:
    // 0x260120: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x260120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_260124:
    // 0x260124: 0xc62c0108  lwc1        $f12, 0x108($s1)
    ctx->pc = 0x260124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_260128:
    // 0x260128: 0xc040d38  jal         func_1034E0
label_26012c:
    if (ctx->pc == 0x26012Cu) {
        ctx->pc = 0x260130u;
        goto label_260130;
    }
    ctx->pc = 0x260128u;
    SET_GPR_U32(ctx, 31, 0x260130u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x260130u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260130u) { return; }
    ctx->pc = 0x260130u;
label_260130:
    // 0x260130: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x260130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_260134:
    // 0x260134: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x260134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_260138:
    // 0x260138: 0xc62c010c  lwc1        $f12, 0x10C($s1)
    ctx->pc = 0x260138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26013c:
    // 0x26013c: 0xc040ce4  jal         func_103390
label_260140:
    if (ctx->pc == 0x260140u) {
        ctx->pc = 0x260144u;
        goto label_260144;
    }
    ctx->pc = 0x26013Cu;
    SET_GPR_U32(ctx, 31, 0x260144u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x260144u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260144u) { return; }
    ctx->pc = 0x260144u;
label_260144:
    // 0x260144: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x260144u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260148:
    // 0x260148: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x260148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_26014c:
    // 0x26014c: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x26014cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_260150:
    // 0x260150: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260150u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_260154:
    // 0x260154: 0x246200e0  addiu       $v0, $v1, 0xE0
    ctx->pc = 0x260154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
label_260158:
    // 0x260158: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260158u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26015c:
    // 0x26015c: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x26015cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_260160:
    // 0x260160: 0xc040c00  jal         func_103000
label_260164:
    if (ctx->pc == 0x260164u) {
        ctx->pc = 0x260168u;
        goto label_260168;
    }
    ctx->pc = 0x260160u;
    SET_GPR_U32(ctx, 31, 0x260168u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x260168u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260168u) { return; }
    ctx->pc = 0x260168u;
label_260168:
    // 0x260168: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x260168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_26016c:
    // 0x26016c: 0x162900  sll         $a1, $s6, 4
    ctx->pc = 0x26016cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
label_260170:
    // 0x260170: 0x8c820330  lw          $v0, 0x330($a0)
    ctx->pc = 0x260170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 816)));
label_260174:
    // 0x260174: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x260174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_260178:
    // 0x260178: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x260178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_26017c:
    // 0x26017c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x26017cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_260180:
    // 0x260180: 0xc040ec4  jal         func_103B10
label_260184:
    if (ctx->pc == 0x260184u) {
        ctx->pc = 0x260188u;
        goto label_260188;
    }
    ctx->pc = 0x260180u;
    SET_GPR_U32(ctx, 31, 0x260188u);
    ctx->pc = 0x103B10u;
    {
        ctx->pc = 0x260188u;
        ps2_stubs::sceVu0CopyVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260188u) { return; }
    ctx->pc = 0x260188u;
label_260188:
    // 0x260188: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x260188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_26018c:
    // 0x26018c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26018cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_260190:
    // 0x260190: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x260190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_260194:
    // 0x260194: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260194u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_260198:
    // 0x260198: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x260198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_26019c:
    // 0x26019c: 0xc040ed8  jal         func_103B60
label_2601a0:
    if (ctx->pc == 0x2601A0u) {
        ctx->pc = 0x2601A4u;
        goto label_2601a4;
    }
    ctx->pc = 0x26019Cu;
    SET_GPR_U32(ctx, 31, 0x2601A4u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x2601A4u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2601A4u) { return; }
    ctx->pc = 0x2601A4u;
label_2601a4:
    // 0x2601a4: 0x3c163f80  lui         $s6, 0x3F80
    ctx->pc = 0x2601a4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16256 << 16));
label_2601a8:
    // 0x2601a8: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x2601a8u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2601ac:
    // 0x2601ac: 0x0  nop
    ctx->pc = 0x2601acu;
    // NOP
label_2601b0:
    // 0x2601b0: 0xe7a0019c  swc1        $f0, 0x19C($sp)
    ctx->pc = 0x2601b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
label_2601b4:
    // 0x2601b4: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2601b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2601b8:
    // 0x2601b8: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x2601b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2601bc:
    // 0x2601bc: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x2601bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2601c0:
    // 0x2601c0: 0xc040bf4  jal         func_102FD0
label_2601c4:
    if (ctx->pc == 0x2601C4u) {
        ctx->pc = 0x2601C8u;
        goto label_2601c8;
    }
    ctx->pc = 0x2601C0u;
    SET_GPR_U32(ctx, 31, 0x2601C8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2601C8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2601C8u) { return; }
    ctx->pc = 0x2601C8u;
label_2601c8:
    // 0x2601c8: 0x27a30190  addiu       $v1, $sp, 0x190
    ctx->pc = 0x2601c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2601cc:
    // 0x2601cc: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2601ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2601d0:
    // 0x2601d0: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x2601d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2601d4:
    // 0x2601d4: 0x27a60220  addiu       $a2, $sp, 0x220
    ctx->pc = 0x2601d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_2601d8:
    // 0x2601d8: 0xc0675b0  jal         func_19D6C0
label_2601dc:
    if (ctx->pc == 0x2601DCu) {
        ctx->pc = 0x2601E0u;
        goto label_2601e0;
    }
    ctx->pc = 0x2601D8u;
    SET_GPR_U32(ctx, 31, 0x2601E0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2601D8u, 0x2601E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2601E0u;
label_2601e0:
    // 0x2601e0: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2601e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2601e4:
    // 0x2601e4: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x2601e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_2601e8:
    // 0x2601e8: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x2601e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2601ec:
    // 0x2601ec: 0xc0675a8  jal         func_19D6A0
label_2601f0:
    if (ctx->pc == 0x2601F0u) {
        ctx->pc = 0x2601F4u;
        goto label_2601f4;
    }
    ctx->pc = 0x2601ECu;
    SET_GPR_U32(ctx, 31, 0x2601F4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2601ECu, 0x2601F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2601F4u;
label_2601f4:
    // 0x2601f4: 0x27a20220  addiu       $v0, $sp, 0x220
    ctx->pc = 0x2601f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_2601f8:
    // 0x2601f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2601f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2601fc:
    // 0x2601fc: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x2601fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_260200:
    // 0x260200: 0xc040c9e  jal         func_103278
label_260204:
    if (ctx->pc == 0x260204u) {
        ctx->pc = 0x260208u;
        goto label_260208;
    }
    ctx->pc = 0x260200u;
    SET_GPR_U32(ctx, 31, 0x260208u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x260208u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260208u) { return; }
    ctx->pc = 0x260208u;
label_260208:
    // 0x260208: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x260208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_26020c:
    // 0x26020c: 0x102980  sll         $a1, $s0, 6
    ctx->pc = 0x26020cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_260210:
    // 0x260210: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x260210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_260214:
    // 0x260214: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x260214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_260218:
    // 0x260218: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x260218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_26021c:
    // 0x26021c: 0xc040ca2  jal         func_103288
label_260220:
    if (ctx->pc == 0x260220u) {
        ctx->pc = 0x260224u;
        goto label_260224;
    }
    ctx->pc = 0x26021Cu;
    SET_GPR_U32(ctx, 31, 0x260224u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x260224u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260224u) { return; }
    ctx->pc = 0x260224u;
label_260224:
    // 0x260224: 0x8fa60260  lw          $a2, 0x260($sp)
    ctx->pc = 0x260224u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_260228:
    // 0x260228: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x260228u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_26022c:
    // 0x26022c: 0x8cc60330  lw          $a2, 0x330($a2)
    ctx->pc = 0x26022cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 816)));
label_260230:
    // 0x260230: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x260230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_260234:
    // 0x260234: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x260234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_260238:
    // 0x260238: 0xc040c9e  jal         func_103278
label_26023c:
    if (ctx->pc == 0x26023Cu) {
        ctx->pc = 0x260240u;
        goto label_260240;
    }
    ctx->pc = 0x260238u;
    SET_GPR_U32(ctx, 31, 0x260240u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x260240u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260240u) { return; }
    ctx->pc = 0x260240u;
label_260240:
    // 0x260240: 0x10000038  b           . + 4 + (0x38 << 2)
label_260244:
    if (ctx->pc == 0x260244u) {
        ctx->pc = 0x260248u;
        goto label_260248;
    }
    ctx->pc = 0x260240u;
    {
        const bool branch_taken_0x260240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260240) {
            ctx->pc = 0x260324u;
            goto label_260324;
        }
    }
    ctx->pc = 0x260248u;
label_260248:
    // 0x260248: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x260248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_26024c:
    // 0x26024c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x26024cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_260250:
    // 0x260250: 0xc040cbc  jal         func_1032F0
label_260254:
    if (ctx->pc == 0x260254u) {
        ctx->pc = 0x260258u;
        goto label_260258;
    }
    ctx->pc = 0x260250u;
    SET_GPR_U32(ctx, 31, 0x260258u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260258u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260258u) { return; }
    ctx->pc = 0x260258u;
label_260258:
    // 0x260258: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x260258u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26025c:
    // 0x26025c: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x26025cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_260260:
    // 0x260260: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x260260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_260264:
    // 0x260264: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x260264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_260268:
    // 0x260268: 0xc040d0e  jal         func_103438
label_26026c:
    if (ctx->pc == 0x26026Cu) {
        ctx->pc = 0x260270u;
        goto label_260270;
    }
    ctx->pc = 0x260268u;
    SET_GPR_U32(ctx, 31, 0x260270u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x260270u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260270u) { return; }
    ctx->pc = 0x260270u;
label_260270:
    // 0x260270: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x260270u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260274:
    // 0x260274: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x260274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_260278:
    // 0x260278: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x260278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_26027c:
    // 0x26027c: 0xc62c0108  lwc1        $f12, 0x108($s1)
    ctx->pc = 0x26027cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_260280:
    // 0x260280: 0xc040d38  jal         func_1034E0
label_260284:
    if (ctx->pc == 0x260284u) {
        ctx->pc = 0x260288u;
        goto label_260288;
    }
    ctx->pc = 0x260280u;
    SET_GPR_U32(ctx, 31, 0x260288u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x260288u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260288u) { return; }
    ctx->pc = 0x260288u;
label_260288:
    // 0x260288: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x260288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_26028c:
    // 0x26028c: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x26028cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_260290:
    // 0x260290: 0xc62c010c  lwc1        $f12, 0x10C($s1)
    ctx->pc = 0x260290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_260294:
    // 0x260294: 0xc040ce4  jal         func_103390
label_260298:
    if (ctx->pc == 0x260298u) {
        ctx->pc = 0x26029Cu;
        goto label_26029c;
    }
    ctx->pc = 0x260294u;
    SET_GPR_U32(ctx, 31, 0x26029Cu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x26029Cu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26029Cu) { return; }
    ctx->pc = 0x26029Cu;
label_26029c:
    // 0x26029c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26029cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2602a0:
    // 0x2602a0: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x2602a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_2602a4:
    // 0x2602a4: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2602a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2602a8:
    // 0x2602a8: 0x246500e0  addiu       $a1, $v1, 0xE0
    ctx->pc = 0x2602a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
label_2602ac:
    // 0x2602ac: 0x27b701f0  addiu       $s7, $sp, 0x1F0
    ctx->pc = 0x2602acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2602b0:
    // 0x2602b0: 0x72e03628  paddub      $a2, $s7, $zero
    ctx->pc = 0x2602b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
label_2602b4:
    // 0x2602b4: 0xc040c00  jal         func_103000
label_2602b8:
    if (ctx->pc == 0x2602B8u) {
        ctx->pc = 0x2602BCu;
        goto label_2602bc;
    }
    ctx->pc = 0x2602B4u;
    SET_GPR_U32(ctx, 31, 0x2602BCu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x2602BCu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2602BCu) { return; }
    ctx->pc = 0x2602BCu;
label_2602bc:
    // 0x2602bc: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x2602bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2602c0:
    // 0x2602c0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2602c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_2602c4:
    // 0x2602c4: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x2602c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_2602c8:
    // 0x2602c8: 0xc040c9e  jal         func_103278
label_2602cc:
    if (ctx->pc == 0x2602CCu) {
        ctx->pc = 0x2602D0u;
        goto label_2602d0;
    }
    ctx->pc = 0x2602C8u;
    SET_GPR_U32(ctx, 31, 0x2602D0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2602D0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2602D0u) { return; }
    ctx->pc = 0x2602D0u;
label_2602d0:
    // 0x2602d0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2602d0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2602d4:
    // 0x2602d4: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x2602d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_2602d8:
    // 0x2602d8: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x2602d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2602dc:
    // 0x2602dc: 0xc040c9e  jal         func_103278
label_2602e0:
    if (ctx->pc == 0x2602E0u) {
        ctx->pc = 0x2602E4u;
        goto label_2602e4;
    }
    ctx->pc = 0x2602DCu;
    SET_GPR_U32(ctx, 31, 0x2602E4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2602E4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2602E4u) { return; }
    ctx->pc = 0x2602E4u;
label_2602e4:
    // 0x2602e4: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x2602e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_2602e8:
    // 0x2602e8: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x2602e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_2602ec:
    // 0x2602ec: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x2602ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_2602f0:
    // 0x2602f0: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x2602f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2602f4:
    // 0x2602f4: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2602f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2602f8:
    // 0x2602f8: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x2602f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2602fc:
    // 0x2602fc: 0xc040ca2  jal         func_103288
label_260300:
    if (ctx->pc == 0x260300u) {
        ctx->pc = 0x260304u;
        goto label_260304;
    }
    ctx->pc = 0x2602FCu;
    SET_GPR_U32(ctx, 31, 0x260304u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x260304u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260304u) { return; }
    ctx->pc = 0x260304u;
label_260304:
    // 0x260304: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x260304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_260308:
    // 0x260308: 0x133100  sll         $a2, $s3, 4
    ctx->pc = 0x260308u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_26030c:
    // 0x26030c: 0x8ca30330  lw          $v1, 0x330($a1)
    ctx->pc = 0x26030cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 816)));
label_260310:
    // 0x260310: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x260310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_260314:
    // 0x260314: 0x27a201d0  addiu       $v0, $sp, 0x1D0
    ctx->pc = 0x260314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_260318:
    // 0x260318: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260318u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26031c:
    // 0x26031c: 0xc040c9e  jal         func_103278
label_260320:
    if (ctx->pc == 0x260320u) {
        ctx->pc = 0x260324u;
        goto label_260324;
    }
    ctx->pc = 0x26031Cu;
    SET_GPR_U32(ctx, 31, 0x260324u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x260324u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260324u) { return; }
    ctx->pc = 0x260324u;
label_260324:
    // 0x260324: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x260324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_260328:
    // 0x260328: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x260328u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26032c:
    // 0x26032c: 0x0  nop
    ctx->pc = 0x26032cu;
    // NOP
label_260330:
    // 0x260330: 0xe7a001dc  swc1        $f0, 0x1DC($sp)
    ctx->pc = 0x260330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
label_260334:
    // 0x260334: 0x2285fffd  addi        $a1, $s4, -0x3
    ctx->pc = 0x260334u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 20), (int32_t)4294967293, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_260338:
    // 0x260338: 0x2ca10010  sltiu       $at, $a1, 0x10
    ctx->pc = 0x260338u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_26033c:
    // 0x26033c: 0x10200039  beqz        $at, . + 4 + (0x39 << 2)
label_260340:
    if (ctx->pc == 0x260340u) {
        ctx->pc = 0x260344u;
        goto label_260344;
    }
    ctx->pc = 0x26033Cu;
    {
        const bool branch_taken_0x26033c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26033c) {
            ctx->pc = 0x260424u;
            goto label_260424;
        }
    }
    ctx->pc = 0x260344u;
label_260344:
    // 0x260344: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x260344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_260348:
    // 0x260348: 0x244413f0  addiu       $a0, $v0, 0x13F0
    ctx->pc = 0x260348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5104));
label_26034c:
    // 0x26034c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x26034cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_260350:
    // 0x260350: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x260350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_260354:
    // 0x260354: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x260354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_260358:
    // 0x260358: 0x800008  jr          $a0
label_26035c:
    if (ctx->pc == 0x26035Cu) {
        ctx->pc = 0x260360u;
        goto label_260360;
    }
    ctx->pc = 0x260358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260358u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x260360u;
label_260360:
    // 0x260360: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x260360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_260364:
    // 0x260364: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x260364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_260368:
    // 0x260368: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x260368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_26036c:
    // 0x26036c: 0xc040c80  jal         func_103200
label_260370:
    if (ctx->pc == 0x260370u) {
        ctx->pc = 0x260374u;
        goto label_260374;
    }
    ctx->pc = 0x26036Cu;
    SET_GPR_U32(ctx, 31, 0x260374u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x260374u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260374u) { return; }
    ctx->pc = 0x260374u;
label_260374:
    // 0x260374: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260374u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260378:
    // 0x260378: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x260378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_26037c:
    // 0x26037c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26037cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260380:
    // 0x260380: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x260380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_260384:
    // 0x260384: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260384u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260388:
    // 0x260388: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x260388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_26038c:
    // 0x26038c: 0xc040c80  jal         func_103200
label_260390:
    if (ctx->pc == 0x260390u) {
        ctx->pc = 0x260394u;
        goto label_260394;
    }
    ctx->pc = 0x26038Cu;
    SET_GPR_U32(ctx, 31, 0x260394u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x260394u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260394u) { return; }
    ctx->pc = 0x260394u;
label_260394:
    // 0x260394: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260394u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260398:
    // 0x260398: 0x10000022  b           . + 4 + (0x22 << 2)
label_26039c:
    if (ctx->pc == 0x26039Cu) {
        ctx->pc = 0x2603A0u;
        goto label_2603a0;
    }
    ctx->pc = 0x260398u;
    {
        const bool branch_taken_0x260398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260398) {
            ctx->pc = 0x260424u;
            goto label_260424;
        }
    }
    ctx->pc = 0x2603A0u;
label_2603a0:
    // 0x2603a0: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x2603a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_2603a4:
    // 0x2603a4: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2603a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2603a8:
    // 0x2603a8: 0x27a20190  addiu       $v0, $sp, 0x190
    ctx->pc = 0x2603a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2603ac:
    // 0x2603ac: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2603acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2603b0:
    // 0x2603b0: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x2603b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_2603b4:
    // 0x2603b4: 0xc040c80  jal         func_103200
label_2603b8:
    if (ctx->pc == 0x2603B8u) {
        ctx->pc = 0x2603BCu;
        goto label_2603bc;
    }
    ctx->pc = 0x2603B4u;
    SET_GPR_U32(ctx, 31, 0x2603BCu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x2603BCu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2603BCu) { return; }
    ctx->pc = 0x2603BCu;
label_2603bc:
    // 0x2603bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2603bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2603c0:
    // 0x2603c0: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x2603c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2603c4:
    // 0x2603c4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2603c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_2603c8:
    // 0x2603c8: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x2603c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_2603cc:
    // 0x2603cc: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2603ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2603d0:
    // 0x2603d0: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x2603d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_2603d4:
    // 0x2603d4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2603d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2603d8:
    // 0x2603d8: 0xc040c80  jal         func_103200
label_2603dc:
    if (ctx->pc == 0x2603DCu) {
        ctx->pc = 0x2603E0u;
        goto label_2603e0;
    }
    ctx->pc = 0x2603D8u;
    SET_GPR_U32(ctx, 31, 0x2603E0u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x2603E0u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2603E0u) { return; }
    ctx->pc = 0x2603E0u;
label_2603e0:
    // 0x2603e0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2603e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2603e4:
    // 0x2603e4: 0x1000000f  b           . + 4 + (0xF << 2)
label_2603e8:
    if (ctx->pc == 0x2603E8u) {
        ctx->pc = 0x2603ECu;
        goto label_2603ec;
    }
    ctx->pc = 0x2603E4u;
    {
        const bool branch_taken_0x2603e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2603e4) {
            ctx->pc = 0x260424u;
            goto label_260424;
        }
    }
    ctx->pc = 0x2603ECu;
label_2603ec:
    // 0x2603ec: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x2603ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_2603f0:
    // 0x2603f0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2603f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_2603f4:
    // 0x2603f4: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x2603f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2603f8:
    // 0x2603f8: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2603f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2603fc:
    // 0x2603fc: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x2603fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_260400:
    // 0x260400: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x260400u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260404:
    // 0x260404: 0xc040c80  jal         func_103200
label_260408:
    if (ctx->pc == 0x260408u) {
        ctx->pc = 0x26040Cu;
        goto label_26040c;
    }
    ctx->pc = 0x260404u;
    SET_GPR_U32(ctx, 31, 0x26040Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x26040Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26040Cu) { return; }
    ctx->pc = 0x26040Cu;
label_26040c:
    // 0x26040c: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x26040cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_260410:
    // 0x260410: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260410u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_260414:
    // 0x260414: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x260414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_260418:
    // 0x260418: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x260418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_26041c:
    // 0x26041c: 0xc040c80  jal         func_103200
label_260420:
    if (ctx->pc == 0x260420u) {
        ctx->pc = 0x260424u;
        goto label_260424;
    }
    ctx->pc = 0x26041Cu;
    SET_GPR_U32(ctx, 31, 0x260424u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x260424u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260424u) { return; }
    ctx->pc = 0x260424u;
label_260424:
    // 0x260424: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x260424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_260428:
    // 0x260428: 0xc067588  jal         func_19D620
label_26042c:
    if (ctx->pc == 0x26042Cu) {
        ctx->pc = 0x260430u;
        goto label_260430;
    }
    ctx->pc = 0x260428u;
    SET_GPR_U32(ctx, 31, 0x260430u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x260428u, 0x260430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260430u;
label_260430:
    // 0x260430: 0xe7a00250  swc1        $f0, 0x250($sp)
    ctx->pc = 0x260430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
label_260434:
    // 0x260434: 0xc7a20250  lwc1        $f2, 0x250($sp)
    ctx->pc = 0x260434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_260438:
    // 0x260438: 0xc7a10248  lwc1        $f1, 0x248($sp)
    ctx->pc = 0x260438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26043c:
    // 0x26043c: 0xc7a0024c  lwc1        $f0, 0x24C($sp)
    ctx->pc = 0x26043cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260440:
    // 0x260440: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x260440u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_260444:
    // 0x260444: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x260444u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_260448:
    // 0x260448: 0x0  nop
    ctx->pc = 0x260448u;
    // NOP
label_26044c:
    // 0x26044c: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
label_260450:
    if (ctx->pc == 0x260450u) {
        ctx->pc = 0x260454u;
        goto label_260454;
    }
    ctx->pc = 0x26044Cu;
    {
        const bool branch_taken_0x26044c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26044c) {
            ctx->pc = 0x26053Cu;
            goto label_26053c;
        }
    }
    ctx->pc = 0x260454u;
label_260454:
    // 0x260454: 0xc7a1024c  lwc1        $f1, 0x24C($sp)
    ctx->pc = 0x260454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260458:
    // 0x260458: 0xc7a0024c  lwc1        $f0, 0x24C($sp)
    ctx->pc = 0x260458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26045c:
    // 0x26045c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x26045cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_260460:
    // 0x260460: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x260460u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
label_260464:
    // 0x260464: 0xc7a10248  lwc1        $f1, 0x248($sp)
    ctx->pc = 0x260464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260468:
    // 0x260468: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x260468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26046c:
    // 0x26046c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x26046cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_260470:
    // 0x260470: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x260470u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_260474:
    // 0x260474: 0xc7a10250  lwc1        $f1, 0x250($sp)
    ctx->pc = 0x260474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260478:
    // 0x260478: 0xc7a00250  lwc1        $f0, 0x250($sp)
    ctx->pc = 0x260478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26047c:
    // 0x26047c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x26047cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_260480:
    // 0x260480: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x260480u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_260484:
    // 0x260484: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x260484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_260488:
    // 0x260488: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x260488u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26048c:
    // 0x26048c: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x26048cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260490:
    // 0x260490: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x260490u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_260494:
    // 0x260494: 0xc7a00250  lwc1        $f0, 0x250($sp)
    ctx->pc = 0x260494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260498:
    // 0x260498: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x260498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_26049c:
    // 0x26049c: 0x46001303  div.s       $f12, $f2, $f0
    ctx->pc = 0x26049cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_2604a0:
    // 0x2604a0: 0x0  nop
    ctx->pc = 0x2604a0u;
    // NOP
label_2604a4:
    // 0x2604a4: 0x0  nop
    ctx->pc = 0x2604a4u;
    // NOP
label_2604a8:
    // 0x2604a8: 0x0  nop
    ctx->pc = 0x2604a8u;
    // NOP
label_2604ac:
    // 0x2604ac: 0xc045566  jal         func_115598
label_2604b0:
    if (ctx->pc == 0x2604B0u) {
        ctx->pc = 0x2604B4u;
        goto label_2604b4;
    }
    ctx->pc = 0x2604ACu;
    SET_GPR_U32(ctx, 31, 0x2604B4u);
    ctx->pc = 0x115598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115598u, 0x2604ACu, 0x2604B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2604B4u;
label_2604b4:
    // 0x2604b4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2604b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2604b8:
    // 0x2604b8: 0xe7a00240  swc1        $f0, 0x240($sp)
    ctx->pc = 0x2604b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
label_2604bc:
    // 0x2604bc: 0xc7a10250  lwc1        $f1, 0x250($sp)
    ctx->pc = 0x2604bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2604c0:
    // 0x2604c0: 0xc7a00250  lwc1        $f0, 0x250($sp)
    ctx->pc = 0x2604c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2604c4:
    // 0x2604c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2604c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2604c8:
    // 0x2604c8: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x2604c8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
label_2604cc:
    // 0x2604cc: 0xc7a10248  lwc1        $f1, 0x248($sp)
    ctx->pc = 0x2604ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2604d0:
    // 0x2604d0: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x2604d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2604d4:
    // 0x2604d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2604d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2604d8:
    // 0x2604d8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2604d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2604dc:
    // 0x2604dc: 0xc7a1024c  lwc1        $f1, 0x24C($sp)
    ctx->pc = 0x2604dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2604e0:
    // 0x2604e0: 0xc7a0024c  lwc1        $f0, 0x24C($sp)
    ctx->pc = 0x2604e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2604e4:
    // 0x2604e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2604e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2604e8:
    // 0x2604e8: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x2604e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2604ec:
    // 0x2604ec: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x2604ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_2604f0:
    // 0x2604f0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2604f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2604f4:
    // 0x2604f4: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x2604f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2604f8:
    // 0x2604f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2604f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2604fc:
    // 0x2604fc: 0xc7a0024c  lwc1        $f0, 0x24C($sp)
    ctx->pc = 0x2604fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260500:
    // 0x260500: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x260500u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_260504:
    // 0x260504: 0x46001303  div.s       $f12, $f2, $f0
    ctx->pc = 0x260504u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_260508:
    // 0x260508: 0x0  nop
    ctx->pc = 0x260508u;
    // NOP
label_26050c:
    // 0x26050c: 0x0  nop
    ctx->pc = 0x26050cu;
    // NOP
label_260510:
    // 0x260510: 0x0  nop
    ctx->pc = 0x260510u;
    // NOP
label_260514:
    // 0x260514: 0xc045566  jal         func_115598
label_260518:
    if (ctx->pc == 0x260518u) {
        ctx->pc = 0x26051Cu;
        goto label_26051c;
    }
    ctx->pc = 0x260514u;
    SET_GPR_U32(ctx, 31, 0x26051Cu);
    ctx->pc = 0x115598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115598u, 0x260514u, 0x26051Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26051Cu;
label_26051c:
    // 0x26051c: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x26051cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
label_260520:
    // 0x260520: 0x34820fdb  ori         $v0, $a0, 0xFDB
    ctx->pc = 0x260520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_260524:
    // 0x260524: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x260524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_260528:
    // 0x260528: 0x0  nop
    ctx->pc = 0x260528u;
    // NOP
label_26052c:
    // 0x26052c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26052cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_260530:
    // 0x260530: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x260530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
label_260534:
    // 0x260534: 0x10000037  b           . + 4 + (0x37 << 2)
label_260538:
    if (ctx->pc == 0x260538u) {
        ctx->pc = 0x26053Cu;
        goto label_26053c;
    }
    ctx->pc = 0x260534u;
    {
        const bool branch_taken_0x260534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260534) {
            ctx->pc = 0x260614u;
            goto label_260614;
        }
    }
    ctx->pc = 0x26053Cu;
label_26053c:
    // 0x26053c: 0x27a201a0  addiu       $v0, $sp, 0x1A0
    ctx->pc = 0x26053cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_260540:
    // 0x260540: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260540u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260544:
    // 0x260544: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x260544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_260548:
    // 0x260548: 0xc040c24  jal         func_103090
label_26054c:
    if (ctx->pc == 0x26054Cu) {
        ctx->pc = 0x260550u;
        goto label_260550;
    }
    ctx->pc = 0x260548u;
    SET_GPR_U32(ctx, 31, 0x260550u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260550u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260550u) { return; }
    ctx->pc = 0x260550u;
label_260550:
    // 0x260550: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260550u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260554:
    // 0x260554: 0xc7a10248  lwc1        $f1, 0x248($sp)
    ctx->pc = 0x260554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260558:
    // 0x260558: 0xc7a0024c  lwc1        $f0, 0x24C($sp)
    ctx->pc = 0x260558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26055c:
    // 0x26055c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x26055cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_260560:
    // 0x260560: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x260560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_260564:
    // 0x260564: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x260564u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_260568:
    // 0x260568: 0x27a201a0  addiu       $v0, $sp, 0x1A0
    ctx->pc = 0x260568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_26056c:
    // 0x26056c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x26056cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260570:
    // 0x260570: 0xc040ed8  jal         func_103B60
label_260574:
    if (ctx->pc == 0x260574u) {
        ctx->pc = 0x260578u;
        goto label_260578;
    }
    ctx->pc = 0x260570u;
    SET_GPR_U32(ctx, 31, 0x260578u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x260578u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260578u) { return; }
    ctx->pc = 0x260578u;
label_260578:
    // 0x260578: 0x2284fffd  addi        $a0, $s4, -0x3
    ctx->pc = 0x260578u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 20), (int32_t)4294967293, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_26057c:
    // 0x26057c: 0x2c810010  sltiu       $at, $a0, 0x10
    ctx->pc = 0x26057cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_260580:
    // 0x260580: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
label_260584:
    if (ctx->pc == 0x260584u) {
        ctx->pc = 0x260588u;
        goto label_260588;
    }
    ctx->pc = 0x260580u;
    {
        const bool branch_taken_0x260580 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x260580) {
            ctx->pc = 0x2605FCu;
            goto label_2605fc;
        }
    }
    ctx->pc = 0x260588u;
label_260588:
    // 0x260588: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x260588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_26058c:
    // 0x26058c: 0x244213b0  addiu       $v0, $v0, 0x13B0
    ctx->pc = 0x26058cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5040));
label_260590:
    // 0x260590: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x260590u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_260594:
    // 0x260594: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x260594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_260598:
    // 0x260598: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x260598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26059c:
    // 0x26059c: 0x800008  jr          $a0
label_2605a0:
    if (ctx->pc == 0x2605A0u) {
        ctx->pc = 0x2605A4u;
        goto label_2605a4;
    }
    ctx->pc = 0x26059Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2605A4u: goto label_2605a4;
            case 0x2605D8u: goto label_2605d8;
            case 0x2605FCu: goto label_2605fc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26059Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2605A4u;
label_2605a4:
    // 0x2605a4: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x2605a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_2605a8:
    // 0x2605a8: 0x103180  sll         $a2, $s0, 6
    ctx->pc = 0x2605a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_2605ac:
    // 0x2605ac: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x2605acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_2605b0:
    // 0x2605b0: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x2605b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2605b4:
    // 0x2605b4: 0x24850030  addiu       $a1, $a0, 0x30
    ctx->pc = 0x2605b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_2605b8:
    // 0x2605b8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2605b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_2605bc:
    // 0x2605bc: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x2605bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_2605c0:
    // 0x2605c0: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2605c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2605c4:
    // 0x2605c4: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x2605c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_2605c8:
    // 0x2605c8: 0xc0675b0  jal         func_19D6C0
label_2605cc:
    if (ctx->pc == 0x2605CCu) {
        ctx->pc = 0x2605D0u;
        goto label_2605d0;
    }
    ctx->pc = 0x2605C8u;
    SET_GPR_U32(ctx, 31, 0x2605D0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2605C8u, 0x2605D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2605D0u;
label_2605d0:
    // 0x2605d0: 0x1000000a  b           . + 4 + (0xA << 2)
label_2605d4:
    if (ctx->pc == 0x2605D4u) {
        ctx->pc = 0x2605D8u;
        goto label_2605d8;
    }
    ctx->pc = 0x2605D0u;
    {
        const bool branch_taken_0x2605d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2605d0) {
            ctx->pc = 0x2605FCu;
            goto label_2605fc;
        }
    }
    ctx->pc = 0x2605D8u;
label_2605d8:
    // 0x2605d8: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x2605d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_2605dc:
    // 0x2605dc: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x2605dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_2605e0:
    // 0x2605e0: 0x8ca40130  lw          $a0, 0x130($a1)
    ctx->pc = 0x2605e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_2605e4:
    // 0x2605e4: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x2605e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2605e8:
    // 0x2605e8: 0x24a40030  addiu       $a0, $a1, 0x30
    ctx->pc = 0x2605e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_2605ec:
    // 0x2605ec: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x2605ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_2605f0:
    // 0x2605f0: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x2605f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_2605f4:
    // 0x2605f4: 0xc0675a8  jal         func_19D6A0
label_2605f8:
    if (ctx->pc == 0x2605F8u) {
        ctx->pc = 0x2605FCu;
        goto label_2605fc;
    }
    ctx->pc = 0x2605F4u;
    SET_GPR_U32(ctx, 31, 0x2605FCu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2605F4u, 0x2605FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2605FCu;
label_2605fc:
    // 0x2605fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2605fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_260600:
    // 0x260600: 0x0  nop
    ctx->pc = 0x260600u;
    // NOP
label_260604:
    // 0x260604: 0xe7a00240  swc1        $f0, 0x240($sp)
    ctx->pc = 0x260604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
label_260608:
    // 0x260608: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x260608u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26060c:
    // 0x26060c: 0x0  nop
    ctx->pc = 0x26060cu;
    // NOP
label_260610:
    // 0x260610: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x260610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
label_260614:
    // 0x260614: 0x2284fffd  addi        $a0, $s4, -0x3
    ctx->pc = 0x260614u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 20), (int32_t)4294967293, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_260618:
    // 0x260618: 0x2c810010  sltiu       $at, $a0, 0x10
    ctx->pc = 0x260618u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_26061c:
    // 0x26061c: 0x10200245  beqz        $at, . + 4 + (0x245 << 2)
label_260620:
    if (ctx->pc == 0x260620u) {
        ctx->pc = 0x260624u;
        goto label_260624;
    }
    ctx->pc = 0x26061Cu;
    {
        const bool branch_taken_0x26061c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26061c) {
            ctx->pc = 0x260F34u;
            goto label_260f34;
        }
    }
    ctx->pc = 0x260624u;
label_260624:
    // 0x260624: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x260624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_260628:
    // 0x260628: 0x24431370  addiu       $v1, $v0, 0x1370
    ctx->pc = 0x260628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4976));
label_26062c:
    // 0x26062c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x26062cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_260630:
    // 0x260630: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x260630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_260634:
    // 0x260634: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x260634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_260638:
    // 0x260638: 0xa00008  jr          $a1
label_26063c:
    if (ctx->pc == 0x26063Cu) {
        ctx->pc = 0x260640u;
        goto label_260640;
    }
    ctx->pc = 0x260638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260638u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x260640u;
label_260640:
    // 0x260640: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x260640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_260644:
    // 0x260644: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x260644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_260648:
    // 0x260648: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x260648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_26064c:
    // 0x26064c: 0xc040c12  jal         func_103048
label_260650:
    if (ctx->pc == 0x260650u) {
        ctx->pc = 0x260654u;
        goto label_260654;
    }
    ctx->pc = 0x26064Cu;
    SET_GPR_U32(ctx, 31, 0x260654u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x260654u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260654u) { return; }
    ctx->pc = 0x260654u;
label_260654:
    // 0x260654: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x260654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_260658:
    // 0x260658: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260658u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_26065c:
    // 0x26065c: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x26065cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_260660:
    // 0x260660: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x260660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_260664:
    // 0x260664: 0xc040c12  jal         func_103048
label_260668:
    if (ctx->pc == 0x260668u) {
        ctx->pc = 0x26066Cu;
        goto label_26066c;
    }
    ctx->pc = 0x260664u;
    SET_GPR_U32(ctx, 31, 0x26066Cu);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x26066Cu;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26066Cu) { return; }
    ctx->pc = 0x26066Cu;
label_26066c:
    // 0x26066c: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x26066cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_260670:
    // 0x260670: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x260670u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_260674:
    // 0x260674: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x260674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_260678:
    // 0x260678: 0xc040c24  jal         func_103090
label_26067c:
    if (ctx->pc == 0x26067Cu) {
        ctx->pc = 0x260680u;
        goto label_260680;
    }
    ctx->pc = 0x260678u;
    SET_GPR_U32(ctx, 31, 0x260680u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260680u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260680u) { return; }
    ctx->pc = 0x260680u;
label_260680:
    // 0x260680: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x260680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_260684:
    // 0x260684: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260684u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_260688:
    // 0x260688: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x260688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_26068c:
    // 0x26068c: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x26068cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_260690:
    // 0x260690: 0xc040c24  jal         func_103090
label_260694:
    if (ctx->pc == 0x260694u) {
        ctx->pc = 0x260698u;
        goto label_260698;
    }
    ctx->pc = 0x260690u;
    SET_GPR_U32(ctx, 31, 0x260698u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260698u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260698u) { return; }
    ctx->pc = 0x260698u;
label_260698:
    // 0x260698: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x260698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_26069c:
    // 0x26069c: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x26069cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_2606a0:
    // 0x2606a0: 0xc040c24  jal         func_103090
label_2606a4:
    if (ctx->pc == 0x2606A4u) {
        ctx->pc = 0x2606A8u;
        goto label_2606a8;
    }
    ctx->pc = 0x2606A0u;
    SET_GPR_U32(ctx, 31, 0x2606A8u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2606A8u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2606A8u) { return; }
    ctx->pc = 0x2606A8u;
label_2606a8:
    // 0x2606a8: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2606a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_2606ac:
    // 0x2606ac: 0xc0675a4  jal         func_19D690
label_2606b0:
    if (ctx->pc == 0x2606B0u) {
        ctx->pc = 0x2606B4u;
        goto label_2606b4;
    }
    ctx->pc = 0x2606ACu;
    SET_GPR_U32(ctx, 31, 0x2606B4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2606ACu, 0x2606B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2606B4u;
label_2606b4:
    // 0x2606b4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2606b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2606b8:
    // 0x2606b8: 0xc040cbc  jal         func_1032F0
label_2606bc:
    if (ctx->pc == 0x2606BCu) {
        ctx->pc = 0x2606C0u;
        goto label_2606c0;
    }
    ctx->pc = 0x2606B8u;
    SET_GPR_U32(ctx, 31, 0x2606C0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x2606C0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2606C0u) { return; }
    ctx->pc = 0x2606C0u;
label_2606c0:
    // 0x2606c0: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x2606c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2606c4:
    // 0x2606c4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2606c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2606c8:
    // 0x2606c8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2606c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2606cc:
    // 0x2606cc: 0xc7ac0240  lwc1        $f12, 0x240($sp)
    ctx->pc = 0x2606ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2606d0:
    // 0x2606d0: 0xc040d0e  jal         func_103438
label_2606d4:
    if (ctx->pc == 0x2606D4u) {
        ctx->pc = 0x2606D8u;
        goto label_2606d8;
    }
    ctx->pc = 0x2606D0u;
    SET_GPR_U32(ctx, 31, 0x2606D8u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x2606D8u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2606D8u) { return; }
    ctx->pc = 0x2606D8u;
label_2606d8:
    // 0x2606d8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2606d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2606dc:
    // 0x2606dc: 0xc040cbc  jal         func_1032F0
label_2606e0:
    if (ctx->pc == 0x2606E0u) {
        ctx->pc = 0x2606E4u;
        goto label_2606e4;
    }
    ctx->pc = 0x2606DCu;
    SET_GPR_U32(ctx, 31, 0x2606E4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x2606E4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2606E4u) { return; }
    ctx->pc = 0x2606E4u;
label_2606e4:
    // 0x2606e4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2606e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2606e8:
    // 0x2606e8: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2606e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2606ec:
    // 0x2606ec: 0xc7ac0244  lwc1        $f12, 0x244($sp)
    ctx->pc = 0x2606ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2606f0:
    // 0x2606f0: 0xc040d0e  jal         func_103438
label_2606f4:
    if (ctx->pc == 0x2606F4u) {
        ctx->pc = 0x2606F8u;
        goto label_2606f8;
    }
    ctx->pc = 0x2606F0u;
    SET_GPR_U32(ctx, 31, 0x2606F8u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x2606F8u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2606F8u) { return; }
    ctx->pc = 0x2606F8u;
label_2606f8:
    // 0x2606f8: 0x1000020e  b           . + 4 + (0x20E << 2)
label_2606fc:
    if (ctx->pc == 0x2606FCu) {
        ctx->pc = 0x260700u;
        goto label_260700;
    }
    ctx->pc = 0x2606F8u;
    {
        const bool branch_taken_0x2606f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2606f8) {
            ctx->pc = 0x260F34u;
            goto label_260f34;
        }
    }
    ctx->pc = 0x260700u;
label_260700:
    // 0x260700: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x260700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_260704:
    // 0x260704: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x260704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_260708:
    // 0x260708: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x260708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_26070c:
    // 0x26070c: 0xc040c12  jal         func_103048
label_260710:
    if (ctx->pc == 0x260710u) {
        ctx->pc = 0x260714u;
        goto label_260714;
    }
    ctx->pc = 0x26070Cu;
    SET_GPR_U32(ctx, 31, 0x260714u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x260714u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260714u) { return; }
    ctx->pc = 0x260714u;
label_260714:
    // 0x260714: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x260714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_260718:
    // 0x260718: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260718u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_26071c:
    // 0x26071c: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x26071cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_260720:
    // 0x260720: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x260720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_260724:
    // 0x260724: 0xc040c12  jal         func_103048
label_260728:
    if (ctx->pc == 0x260728u) {
        ctx->pc = 0x26072Cu;
        goto label_26072c;
    }
    ctx->pc = 0x260724u;
    SET_GPR_U32(ctx, 31, 0x26072Cu);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x26072Cu;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26072Cu) { return; }
    ctx->pc = 0x26072Cu;
label_26072c:
    // 0x26072c: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x26072cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_260730:
    // 0x260730: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x260730u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_260734:
    // 0x260734: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x260734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_260738:
    // 0x260738: 0xc040c24  jal         func_103090
label_26073c:
    if (ctx->pc == 0x26073Cu) {
        ctx->pc = 0x260740u;
        goto label_260740;
    }
    ctx->pc = 0x260738u;
    SET_GPR_U32(ctx, 31, 0x260740u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260740u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260740u) { return; }
    ctx->pc = 0x260740u;
label_260740:
    // 0x260740: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x260740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_260744:
    // 0x260744: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260744u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_260748:
    // 0x260748: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x260748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_26074c:
    // 0x26074c: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x26074cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_260750:
    // 0x260750: 0xc040c24  jal         func_103090
label_260754:
    if (ctx->pc == 0x260754u) {
        ctx->pc = 0x260758u;
        goto label_260758;
    }
    ctx->pc = 0x260750u;
    SET_GPR_U32(ctx, 31, 0x260758u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260758u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260758u) { return; }
    ctx->pc = 0x260758u;
label_260758:
    // 0x260758: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x260758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_26075c:
    // 0x26075c: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x26075cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_260760:
    // 0x260760: 0xc040c24  jal         func_103090
label_260764:
    if (ctx->pc == 0x260764u) {
        ctx->pc = 0x260768u;
        goto label_260768;
    }
    ctx->pc = 0x260760u;
    SET_GPR_U32(ctx, 31, 0x260768u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260768u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260768u) { return; }
    ctx->pc = 0x260768u;
label_260768:
    // 0x260768: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x260768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_26076c:
    // 0x26076c: 0xc0675a4  jal         func_19D690
label_260770:
    if (ctx->pc == 0x260770u) {
        ctx->pc = 0x260774u;
        goto label_260774;
    }
    ctx->pc = 0x26076Cu;
    SET_GPR_U32(ctx, 31, 0x260774u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26076Cu, 0x260774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260774u;
label_260774:
    // 0x260774: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x260774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_260778:
    // 0x260778: 0xc040cbc  jal         func_1032F0
label_26077c:
    if (ctx->pc == 0x26077Cu) {
        ctx->pc = 0x260780u;
        goto label_260780;
    }
    ctx->pc = 0x260778u;
    SET_GPR_U32(ctx, 31, 0x260780u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260780u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260780u) { return; }
    ctx->pc = 0x260780u;
label_260780:
    // 0x260780: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x260780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_260784:
    // 0x260784: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x260784u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_260788:
    // 0x260788: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x260788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_26078c:
    // 0x26078c: 0xc7ac0240  lwc1        $f12, 0x240($sp)
    ctx->pc = 0x26078cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_260790:
    // 0x260790: 0xc040d0e  jal         func_103438
label_260794:
    if (ctx->pc == 0x260794u) {
        ctx->pc = 0x260798u;
        goto label_260798;
    }
    ctx->pc = 0x260790u;
    SET_GPR_U32(ctx, 31, 0x260798u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x260798u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260798u) { return; }
    ctx->pc = 0x260798u;
label_260798:
    // 0x260798: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x260798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_26079c:
    // 0x26079c: 0xc040cbc  jal         func_1032F0
label_2607a0:
    if (ctx->pc == 0x2607A0u) {
        ctx->pc = 0x2607A4u;
        goto label_2607a4;
    }
    ctx->pc = 0x26079Cu;
    SET_GPR_U32(ctx, 31, 0x2607A4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x2607A4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2607A4u) { return; }
    ctx->pc = 0x2607A4u;
label_2607a4:
    // 0x2607a4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2607a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2607a8:
    // 0x2607a8: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2607a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2607ac:
    // 0x2607ac: 0xc7ac0244  lwc1        $f12, 0x244($sp)
    ctx->pc = 0x2607acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2607b0:
    // 0x2607b0: 0xc040d0e  jal         func_103438
label_2607b4:
    if (ctx->pc == 0x2607B4u) {
        ctx->pc = 0x2607B8u;
        goto label_2607b8;
    }
    ctx->pc = 0x2607B0u;
    SET_GPR_U32(ctx, 31, 0x2607B8u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x2607B8u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2607B8u) { return; }
    ctx->pc = 0x2607B8u;
label_2607b8:
    // 0x2607b8: 0x100001de  b           . + 4 + (0x1DE << 2)
label_2607bc:
    if (ctx->pc == 0x2607BCu) {
        ctx->pc = 0x2607C0u;
        goto label_2607c0;
    }
    ctx->pc = 0x2607B8u;
    {
        const bool branch_taken_0x2607b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2607b8) {
            ctx->pc = 0x260F34u;
            goto label_260f34;
        }
    }
    ctx->pc = 0x2607C0u;
label_2607c0:
    // 0x2607c0: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2607c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_2607c4:
    // 0x2607c4: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x2607c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_2607c8:
    // 0x2607c8: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x2607c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2607cc:
    // 0x2607cc: 0xc040c12  jal         func_103048
label_2607d0:
    if (ctx->pc == 0x2607D0u) {
        ctx->pc = 0x2607D4u;
        goto label_2607d4;
    }
    ctx->pc = 0x2607CCu;
    SET_GPR_U32(ctx, 31, 0x2607D4u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x2607D4u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2607D4u) { return; }
    ctx->pc = 0x2607D4u;
label_2607d4:
    // 0x2607d4: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x2607d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2607d8:
    // 0x2607d8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2607d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_2607dc:
    // 0x2607dc: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x2607dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_2607e0:
    // 0x2607e0: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x2607e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_2607e4:
    // 0x2607e4: 0xc040c12  jal         func_103048
label_2607e8:
    if (ctx->pc == 0x2607E8u) {
        ctx->pc = 0x2607ECu;
        goto label_2607ec;
    }
    ctx->pc = 0x2607E4u;
    SET_GPR_U32(ctx, 31, 0x2607ECu);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x2607ECu;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2607ECu) { return; }
    ctx->pc = 0x2607ECu;
label_2607ec:
    // 0x2607ec: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x2607ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2607f0:
    // 0x2607f0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2607f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2607f4:
    // 0x2607f4: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x2607f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_2607f8:
    // 0x2607f8: 0xc040c24  jal         func_103090
label_2607fc:
    if (ctx->pc == 0x2607FCu) {
        ctx->pc = 0x260800u;
        goto label_260800;
    }
    ctx->pc = 0x2607F8u;
    SET_GPR_U32(ctx, 31, 0x260800u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260800u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260800u) { return; }
    ctx->pc = 0x260800u;
label_260800:
    // 0x260800: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x260800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_260804:
    // 0x260804: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260804u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_260808:
    // 0x260808: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x260808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_26080c:
    // 0x26080c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x26080cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260810:
    // 0x260810: 0xc040c24  jal         func_103090
label_260814:
    if (ctx->pc == 0x260814u) {
        ctx->pc = 0x260818u;
        goto label_260818;
    }
    ctx->pc = 0x260810u;
    SET_GPR_U32(ctx, 31, 0x260818u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260818u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260818u) { return; }
    ctx->pc = 0x260818u;
label_260818:
    // 0x260818: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260818u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26081c:
    // 0x26081c: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x26081cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_260820:
    // 0x260820: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260820u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_260824:
    // 0x260824: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x260824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_260828:
    // 0x260828: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260828u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26082c:
    // 0x26082c: 0xc040c24  jal         func_103090
label_260830:
    if (ctx->pc == 0x260830u) {
        ctx->pc = 0x260834u;
        goto label_260834;
    }
    ctx->pc = 0x26082Cu;
    SET_GPR_U32(ctx, 31, 0x260834u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260834u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260834u) { return; }
    ctx->pc = 0x260834u;
label_260834:
    // 0x260834: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x260834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_260838:
    // 0x260838: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260838u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_26083c:
    // 0x26083c: 0xc0675a4  jal         func_19D690
label_260840:
    if (ctx->pc == 0x260840u) {
        ctx->pc = 0x260844u;
        goto label_260844;
    }
    ctx->pc = 0x26083Cu;
    SET_GPR_U32(ctx, 31, 0x260844u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26083Cu, 0x260844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260844u;
label_260844:
    // 0x260844: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x260844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_260848:
    // 0x260848: 0xc040cbc  jal         func_1032F0
label_26084c:
    if (ctx->pc == 0x26084Cu) {
        ctx->pc = 0x260850u;
        goto label_260850;
    }
    ctx->pc = 0x260848u;
    SET_GPR_U32(ctx, 31, 0x260850u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260850u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260850u) { return; }
    ctx->pc = 0x260850u;
label_260850:
    // 0x260850: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260850u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260854:
    // 0x260854: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x260854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_260858:
    // 0x260858: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x260858u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_26085c:
    // 0x26085c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x26085cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_260860:
    // 0x260860: 0xc7ac0240  lwc1        $f12, 0x240($sp)
    ctx->pc = 0x260860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_260864:
    // 0x260864: 0xc040ce4  jal         func_103390
label_260868:
    if (ctx->pc == 0x260868u) {
        ctx->pc = 0x26086Cu;
        goto label_26086c;
    }
    ctx->pc = 0x260864u;
    SET_GPR_U32(ctx, 31, 0x26086Cu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x26086Cu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26086Cu) { return; }
    ctx->pc = 0x26086Cu;
label_26086c:
    // 0x26086c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x26086cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_260870:
    // 0x260870: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x260870u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_260874:
    // 0x260874: 0xc040cbc  jal         func_1032F0
label_260878:
    if (ctx->pc == 0x260878u) {
        ctx->pc = 0x26087Cu;
        goto label_26087c;
    }
    ctx->pc = 0x260874u;
    SET_GPR_U32(ctx, 31, 0x26087Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x26087Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26087Cu) { return; }
    ctx->pc = 0x26087Cu;
label_26087c:
    // 0x26087c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x26087cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_260880:
    // 0x260880: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x260880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_260884:
    // 0x260884: 0xc7ac0244  lwc1        $f12, 0x244($sp)
    ctx->pc = 0x260884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_260888:
    // 0x260888: 0xc040ce4  jal         func_103390
label_26088c:
    if (ctx->pc == 0x26088Cu) {
        ctx->pc = 0x260890u;
        goto label_260890;
    }
    ctx->pc = 0x260888u;
    SET_GPR_U32(ctx, 31, 0x260890u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x260890u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260890u) { return; }
    ctx->pc = 0x260890u;
label_260890:
    // 0x260890: 0x100001a8  b           . + 4 + (0x1A8 << 2)
label_260894:
    if (ctx->pc == 0x260894u) {
        ctx->pc = 0x260898u;
        goto label_260898;
    }
    ctx->pc = 0x260890u;
    {
        const bool branch_taken_0x260890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260890) {
            ctx->pc = 0x260F34u;
            goto label_260f34;
        }
    }
    ctx->pc = 0x260898u;
label_260898:
    // 0x260898: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x260898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_26089c:
    // 0x26089c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x26089cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_2608a0:
    // 0x2608a0: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x2608a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_2608a4:
    // 0x2608a4: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2608a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2608a8:
    // 0x2608a8: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x2608a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2608ac:
    // 0x2608ac: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2608acu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2608b0:
    // 0x2608b0: 0xc040c12  jal         func_103048
label_2608b4:
    if (ctx->pc == 0x2608B4u) {
        ctx->pc = 0x2608B8u;
        goto label_2608b8;
    }
    ctx->pc = 0x2608B0u;
    SET_GPR_U32(ctx, 31, 0x2608B8u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x2608B8u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2608B8u) { return; }
    ctx->pc = 0x2608B8u;
label_2608b8:
    // 0x2608b8: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x2608b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2608bc:
    // 0x2608bc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2608bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_2608c0:
    // 0x2608c0: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x2608c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_2608c4:
    // 0x2608c4: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x2608c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_2608c8:
    // 0x2608c8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2608c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2608cc:
    // 0x2608cc: 0xc040c12  jal         func_103048
label_2608d0:
    if (ctx->pc == 0x2608D0u) {
        ctx->pc = 0x2608D4u;
        goto label_2608d4;
    }
    ctx->pc = 0x2608CCu;
    SET_GPR_U32(ctx, 31, 0x2608D4u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x2608D4u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2608D4u) { return; }
    ctx->pc = 0x2608D4u;
label_2608d4:
    // 0x2608d4: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x2608d4u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2608d8:
    // 0x2608d8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2608d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2608dc:
    // 0x2608dc: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x2608dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_2608e0:
    // 0x2608e0: 0xc040c24  jal         func_103090
label_2608e4:
    if (ctx->pc == 0x2608E4u) {
        ctx->pc = 0x2608E8u;
        goto label_2608e8;
    }
    ctx->pc = 0x2608E0u;
    SET_GPR_U32(ctx, 31, 0x2608E8u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2608E8u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2608E8u) { return; }
    ctx->pc = 0x2608E8u;
label_2608e8:
    // 0x2608e8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2608e8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2608ec:
    // 0x2608ec: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x2608ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2608f0:
    // 0x2608f0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2608f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2608f4:
    // 0x2608f4: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x2608f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_2608f8:
    // 0x2608f8: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2608f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2608fc:
    // 0x2608fc: 0xc040c24  jal         func_103090
label_260900:
    if (ctx->pc == 0x260900u) {
        ctx->pc = 0x260904u;
        goto label_260904;
    }
    ctx->pc = 0x2608FCu;
    SET_GPR_U32(ctx, 31, 0x260904u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260904u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260904u) { return; }
    ctx->pc = 0x260904u;
label_260904:
    // 0x260904: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260904u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260908:
    // 0x260908: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x260908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_26090c:
    // 0x26090c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x26090cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_260910:
    // 0x260910: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x260910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_260914:
    // 0x260914: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260914u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260918:
    // 0x260918: 0xc040c24  jal         func_103090
label_26091c:
    if (ctx->pc == 0x26091Cu) {
        ctx->pc = 0x260920u;
        goto label_260920;
    }
    ctx->pc = 0x260918u;
    SET_GPR_U32(ctx, 31, 0x260920u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260920u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260920u) { return; }
    ctx->pc = 0x260920u;
label_260920:
    // 0x260920: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260920u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260924:
    // 0x260924: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x260924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_260928:
    // 0x260928: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260928u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_26092c:
    // 0x26092c: 0xc0675a4  jal         func_19D690
label_260930:
    if (ctx->pc == 0x260930u) {
        ctx->pc = 0x260934u;
        goto label_260934;
    }
    ctx->pc = 0x26092Cu;
    SET_GPR_U32(ctx, 31, 0x260934u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26092Cu, 0x260934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260934u;
label_260934:
    // 0x260934: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x260934u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260938:
    // 0x260938: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x260938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_26093c:
    // 0x26093c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26093cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260940:
    // 0x260940: 0xc040cbc  jal         func_1032F0
label_260944:
    if (ctx->pc == 0x260944u) {
        ctx->pc = 0x260948u;
        goto label_260948;
    }
    ctx->pc = 0x260940u;
    SET_GPR_U32(ctx, 31, 0x260948u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260948u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260948u) { return; }
    ctx->pc = 0x260948u;
label_260948:
    // 0x260948: 0xc7a00240  lwc1        $f0, 0x240($sp)
    ctx->pc = 0x260948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26094c:
    // 0x26094c: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x26094cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_260950:
    // 0x260950: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x260950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_260954:
    // 0x260954: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260954u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_260958:
    // 0x260958: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x260958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_26095c:
    // 0x26095c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x26095cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260960:
    // 0x260960: 0xc040ce4  jal         func_103390
label_260964:
    if (ctx->pc == 0x260964u) {
        ctx->pc = 0x260968u;
        goto label_260968;
    }
    ctx->pc = 0x260960u;
    SET_GPR_U32(ctx, 31, 0x260968u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x260968u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260968u) { return; }
    ctx->pc = 0x260968u;
label_260968:
    // 0x260968: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x260968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_26096c:
    // 0x26096c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x26096cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_260970:
    // 0x260970: 0xc040cbc  jal         func_1032F0
label_260974:
    if (ctx->pc == 0x260974u) {
        ctx->pc = 0x260978u;
        goto label_260978;
    }
    ctx->pc = 0x260970u;
    SET_GPR_U32(ctx, 31, 0x260978u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260978u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260978u) { return; }
    ctx->pc = 0x260978u;
label_260978:
    // 0x260978: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x260978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26097c:
    // 0x26097c: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x26097cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_260980:
    // 0x260980: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x260980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_260984:
    // 0x260984: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x260984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_260988:
    // 0x260988: 0xc040ce4  jal         func_103390
label_26098c:
    if (ctx->pc == 0x26098Cu) {
        ctx->pc = 0x260990u;
        goto label_260990;
    }
    ctx->pc = 0x260988u;
    SET_GPR_U32(ctx, 31, 0x260990u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x260990u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260990u) { return; }
    ctx->pc = 0x260990u;
label_260990:
    // 0x260990: 0x10000168  b           . + 4 + (0x168 << 2)
label_260994:
    if (ctx->pc == 0x260994u) {
        ctx->pc = 0x260998u;
        goto label_260998;
    }
    ctx->pc = 0x260990u;
    {
        const bool branch_taken_0x260990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260990) {
            ctx->pc = 0x260F34u;
            goto label_260f34;
        }
    }
    ctx->pc = 0x260998u;
label_260998:
    // 0x260998: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x260998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_26099c:
    // 0x26099c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x26099cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2609a0:
    // 0x2609a0: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x2609a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2609a4:
    // 0x2609a4: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x2609a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_2609a8:
    // 0x2609a8: 0xc040c12  jal         func_103048
label_2609ac:
    if (ctx->pc == 0x2609ACu) {
        ctx->pc = 0x2609B0u;
        goto label_2609b0;
    }
    ctx->pc = 0x2609A8u;
    SET_GPR_U32(ctx, 31, 0x2609B0u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x2609B0u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2609B0u) { return; }
    ctx->pc = 0x2609B0u;
label_2609b0:
    // 0x2609b0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2609b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2609b4:
    // 0x2609b4: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x2609b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2609b8:
    // 0x2609b8: 0x27a201a0  addiu       $v0, $sp, 0x1A0
    ctx->pc = 0x2609b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_2609bc:
    // 0x2609bc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2609bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2609c0:
    // 0x2609c0: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x2609c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_2609c4:
    // 0x2609c4: 0xc040c12  jal         func_103048
label_2609c8:
    if (ctx->pc == 0x2609C8u) {
        ctx->pc = 0x2609CCu;
        goto label_2609cc;
    }
    ctx->pc = 0x2609C4u;
    SET_GPR_U32(ctx, 31, 0x2609CCu);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x2609CCu;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2609CCu) { return; }
    ctx->pc = 0x2609CCu;
label_2609cc:
    // 0x2609cc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2609ccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2609d0:
    // 0x2609d0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2609d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2609d4:
    // 0x2609d4: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x2609d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2609d8:
    // 0x2609d8: 0xc040c24  jal         func_103090
label_2609dc:
    if (ctx->pc == 0x2609DCu) {
        ctx->pc = 0x2609E0u;
        goto label_2609e0;
    }
    ctx->pc = 0x2609D8u;
    SET_GPR_U32(ctx, 31, 0x2609E0u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2609E0u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2609E0u) { return; }
    ctx->pc = 0x2609E0u;
label_2609e0:
    // 0x2609e0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2609e0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2609e4:
    // 0x2609e4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2609e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2609e8:
    // 0x2609e8: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x2609e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_2609ec:
    // 0x2609ec: 0xc040c24  jal         func_103090
label_2609f0:
    if (ctx->pc == 0x2609F0u) {
        ctx->pc = 0x2609F4u;
        goto label_2609f4;
    }
    ctx->pc = 0x2609ECu;
    SET_GPR_U32(ctx, 31, 0x2609F4u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2609F4u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2609F4u) { return; }
    ctx->pc = 0x2609F4u;
label_2609f4:
    // 0x2609f4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2609f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2609f8:
    // 0x2609f8: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x2609f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_2609fc:
    // 0x2609fc: 0xc040c24  jal         func_103090
label_260a00:
    if (ctx->pc == 0x260A00u) {
        ctx->pc = 0x260A04u;
        goto label_260a04;
    }
    ctx->pc = 0x2609FCu;
    SET_GPR_U32(ctx, 31, 0x260A04u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260A04u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260A04u) { return; }
    ctx->pc = 0x260A04u;
label_260a04:
    // 0x260a04: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x260a04u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260a08:
    // 0x260a08: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x260a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_260a0c:
    // 0x260a0c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x260a0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_260a10:
    // 0x260a10: 0xc0675a4  jal         func_19D690
label_260a14:
    if (ctx->pc == 0x260A14u) {
        ctx->pc = 0x260A18u;
        goto label_260a18;
    }
    ctx->pc = 0x260A10u;
    SET_GPR_U32(ctx, 31, 0x260A18u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x260A10u, 0x260A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260A18u;
label_260a18:
    // 0x260a18: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260a18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260a1c:
    // 0x260a1c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x260a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_260a20:
    // 0x260a20: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260a20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_260a24:
    // 0x260a24: 0xc040cbc  jal         func_1032F0
label_260a28:
    if (ctx->pc == 0x260A28u) {
        ctx->pc = 0x260A2Cu;
        goto label_260a2c;
    }
    ctx->pc = 0x260A24u;
    SET_GPR_U32(ctx, 31, 0x260A2Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260A2Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260A2Cu) { return; }
    ctx->pc = 0x260A2Cu;
label_260a2c:
    // 0x260a2c: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x260a2cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260a30:
    // 0x260a30: 0xc7a00240  lwc1        $f0, 0x240($sp)
    ctx->pc = 0x260a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260a34:
    // 0x260a34: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x260a34u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_260a38:
    // 0x260a38: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x260a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_260a3c:
    // 0x260a3c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260a3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260a40:
    // 0x260a40: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x260a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_260a44:
    // 0x260a44: 0xc040d0e  jal         func_103438
label_260a48:
    if (ctx->pc == 0x260A48u) {
        ctx->pc = 0x260A4Cu;
        goto label_260a4c;
    }
    ctx->pc = 0x260A44u;
    SET_GPR_U32(ctx, 31, 0x260A4Cu);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x260A4Cu;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260A4Cu) { return; }
    ctx->pc = 0x260A4Cu;
label_260a4c:
    // 0x260a4c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260a4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260a50:
    // 0x260a50: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x260a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_260a54:
    // 0x260a54: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x260a54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_260a58:
    // 0x260a58: 0xc040cbc  jal         func_1032F0
label_260a5c:
    if (ctx->pc == 0x260A5Cu) {
        ctx->pc = 0x260A60u;
        goto label_260a60;
    }
    ctx->pc = 0x260A58u;
    SET_GPR_U32(ctx, 31, 0x260A60u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260A60u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260A60u) { return; }
    ctx->pc = 0x260A60u;
label_260a60:
    // 0x260a60: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260a60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260a64:
    // 0x260a64: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x260a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260a68:
    // 0x260a68: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x260a68u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_260a6c:
    // 0x260a6c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x260a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_260a70:
    // 0x260a70: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260a70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_260a74:
    // 0x260a74: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x260a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_260a78:
    // 0x260a78: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260a78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260a7c:
    // 0x260a7c: 0xc040d0e  jal         func_103438
label_260a80:
    if (ctx->pc == 0x260A80u) {
        ctx->pc = 0x260A84u;
        goto label_260a84;
    }
    ctx->pc = 0x260A7Cu;
    SET_GPR_U32(ctx, 31, 0x260A84u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x260A84u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260A84u) { return; }
    ctx->pc = 0x260A84u;
label_260a84:
    // 0x260a84: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x260a84u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260a88:
    // 0x260a88: 0x1000012a  b           . + 4 + (0x12A << 2)
label_260a8c:
    if (ctx->pc == 0x260A8Cu) {
        ctx->pc = 0x260A90u;
        goto label_260a90;
    }
    ctx->pc = 0x260A88u;
    {
        const bool branch_taken_0x260a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260a88) {
            ctx->pc = 0x260F34u;
            goto label_260f34;
        }
    }
    ctx->pc = 0x260A90u;
label_260a90:
    // 0x260a90: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x260a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_260a94:
    // 0x260a94: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x260a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_260a98:
    // 0x260a98: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x260a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_260a9c:
    // 0x260a9c: 0xc040c12  jal         func_103048
label_260aa0:
    if (ctx->pc == 0x260AA0u) {
        ctx->pc = 0x260AA4u;
        goto label_260aa4;
    }
    ctx->pc = 0x260A9Cu;
    SET_GPR_U32(ctx, 31, 0x260AA4u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x260AA4u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260AA4u) { return; }
    ctx->pc = 0x260AA4u;
label_260aa4:
    // 0x260aa4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260aa4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260aa8:
    // 0x260aa8: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x260aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_260aac:
    // 0x260aac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260aacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260ab0:
    // 0x260ab0: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x260ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_260ab4:
    // 0x260ab4: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x260ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_260ab8:
    // 0x260ab8: 0xc040c12  jal         func_103048
label_260abc:
    if (ctx->pc == 0x260ABCu) {
        ctx->pc = 0x260AC0u;
        goto label_260ac0;
    }
    ctx->pc = 0x260AB8u;
    SET_GPR_U32(ctx, 31, 0x260AC0u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x260AC0u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260AC0u) { return; }
    ctx->pc = 0x260AC0u;
label_260ac0:
    // 0x260ac0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x260ac0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260ac4:
    // 0x260ac4: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x260ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_260ac8:
    // 0x260ac8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260ac8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_260acc:
    // 0x260acc: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x260accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_260ad0:
    // 0x260ad0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260ad0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260ad4:
    // 0x260ad4: 0xc040c24  jal         func_103090
label_260ad8:
    if (ctx->pc == 0x260AD8u) {
        ctx->pc = 0x260ADCu;
        goto label_260adc;
    }
    ctx->pc = 0x260AD4u;
    SET_GPR_U32(ctx, 31, 0x260ADCu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260ADCu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260ADCu) { return; }
    ctx->pc = 0x260ADCu;
label_260adc:
    // 0x260adc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x260adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_260ae0:
    // 0x260ae0: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x260ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_260ae4:
    // 0x260ae4: 0xc040c24  jal         func_103090
label_260ae8:
    if (ctx->pc == 0x260AE8u) {
        ctx->pc = 0x260AECu;
        goto label_260aec;
    }
    ctx->pc = 0x260AE4u;
    SET_GPR_U32(ctx, 31, 0x260AECu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260AECu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260AECu) { return; }
    ctx->pc = 0x260AECu;
label_260aec:
    // 0x260aec: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x260aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_260af0:
    // 0x260af0: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x260af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_260af4:
    // 0x260af4: 0xc040c24  jal         func_103090
label_260af8:
    if (ctx->pc == 0x260AF8u) {
        ctx->pc = 0x260AFCu;
        goto label_260afc;
    }
    ctx->pc = 0x260AF4u;
    SET_GPR_U32(ctx, 31, 0x260AFCu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260AFCu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260AFCu) { return; }
    ctx->pc = 0x260AFCu;
label_260afc:
    // 0x260afc: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x260afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_260b00:
    // 0x260b00: 0xc0675a4  jal         func_19D690
label_260b04:
    if (ctx->pc == 0x260B04u) {
        ctx->pc = 0x260B08u;
        goto label_260b08;
    }
    ctx->pc = 0x260B00u;
    SET_GPR_U32(ctx, 31, 0x260B08u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x260B00u, 0x260B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260B08u;
label_260b08:
    // 0x260b08: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260b08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260b0c:
    // 0x260b0c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x260b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_260b10:
    // 0x260b10: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260b10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_260b14:
    // 0x260b14: 0xc040cbc  jal         func_1032F0
label_260b18:
    if (ctx->pc == 0x260B18u) {
        ctx->pc = 0x260B1Cu;
        goto label_260b1c;
    }
    ctx->pc = 0x260B14u;
    SET_GPR_U32(ctx, 31, 0x260B1Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260B1Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260B1Cu) { return; }
    ctx->pc = 0x260B1Cu;
label_260b1c:
    // 0x260b1c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x260b1cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260b20:
    // 0x260b20: 0xc7a00240  lwc1        $f0, 0x240($sp)
    ctx->pc = 0x260b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260b24:
    // 0x260b24: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x260b24u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_260b28:
    // 0x260b28: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x260b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_260b2c:
    // 0x260b2c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260b2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_260b30:
    // 0x260b30: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x260b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_260b34:
    // 0x260b34: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260b34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260b38:
    // 0x260b38: 0xc040d0e  jal         func_103438
label_260b3c:
    if (ctx->pc == 0x260B3Cu) {
        ctx->pc = 0x260B40u;
        goto label_260b40;
    }
    ctx->pc = 0x260B38u;
    SET_GPR_U32(ctx, 31, 0x260B40u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x260B40u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260B40u) { return; }
    ctx->pc = 0x260B40u;
label_260b40:
    // 0x260b40: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x260b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_260b44:
    // 0x260b44: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x260b44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_260b48:
    // 0x260b48: 0xc040cbc  jal         func_1032F0
label_260b4c:
    if (ctx->pc == 0x260B4Cu) {
        ctx->pc = 0x260B50u;
        goto label_260b50;
    }
    ctx->pc = 0x260B48u;
    SET_GPR_U32(ctx, 31, 0x260B50u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260B50u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260B50u) { return; }
    ctx->pc = 0x260B50u;
label_260b50:
    // 0x260b50: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260b50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260b54:
    // 0x260b54: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x260b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260b58:
    // 0x260b58: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x260b58u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_260b5c:
    // 0x260b5c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x260b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_260b60:
    // 0x260b60: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x260b60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_260b64:
    // 0x260b64: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x260b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_260b68:
    // 0x260b68: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260b68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260b6c:
    // 0x260b6c: 0xc040d0e  jal         func_103438
label_260b70:
    if (ctx->pc == 0x260B70u) {
        ctx->pc = 0x260B74u;
        goto label_260b74;
    }
    ctx->pc = 0x260B6Cu;
    SET_GPR_U32(ctx, 31, 0x260B74u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x260B74u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260B74u) { return; }
    ctx->pc = 0x260B74u;
label_260b74:
    // 0x260b74: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x260b74u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260b78:
    // 0x260b78: 0x100000ee  b           . + 4 + (0xEE << 2)
label_260b7c:
    if (ctx->pc == 0x260B7Cu) {
        ctx->pc = 0x260B80u;
        goto label_260b80;
    }
    ctx->pc = 0x260B78u;
    {
        const bool branch_taken_0x260b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260b78) {
            ctx->pc = 0x260F34u;
            goto label_260f34;
        }
    }
    ctx->pc = 0x260B80u;
label_260b80:
    // 0x260b80: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x260b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_260b84:
    // 0x260b84: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x260b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_260b88:
    // 0x260b88: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x260b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_260b8c:
    // 0x260b8c: 0xc040c12  jal         func_103048
label_260b90:
    if (ctx->pc == 0x260B90u) {
        ctx->pc = 0x260B94u;
        goto label_260b94;
    }
    ctx->pc = 0x260B8Cu;
    SET_GPR_U32(ctx, 31, 0x260B94u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x260B94u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260B94u) { return; }
    ctx->pc = 0x260B94u;
label_260b94:
    // 0x260b94: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x260b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_260b98:
    // 0x260b98: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x260b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_260b9c:
    // 0x260b9c: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x260b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_260ba0:
    // 0x260ba0: 0xc040c12  jal         func_103048
label_260ba4:
    if (ctx->pc == 0x260BA4u) {
        ctx->pc = 0x260BA8u;
        goto label_260ba8;
    }
    ctx->pc = 0x260BA0u;
    SET_GPR_U32(ctx, 31, 0x260BA8u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x260BA8u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260BA8u) { return; }
    ctx->pc = 0x260BA8u;
label_260ba8:
    // 0x260ba8: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x260ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_260bac:
    // 0x260bac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260bacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260bb0:
    // 0x260bb0: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x260bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_260bb4:
    // 0x260bb4: 0xc040c24  jal         func_103090
label_260bb8:
    if (ctx->pc == 0x260BB8u) {
        ctx->pc = 0x260BBCu;
        goto label_260bbc;
    }
    ctx->pc = 0x260BB4u;
    SET_GPR_U32(ctx, 31, 0x260BBCu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260BBCu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260BBCu) { return; }
    ctx->pc = 0x260BBCu;
label_260bbc:
    // 0x260bbc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260bbcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260bc0:
    // 0x260bc0: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x260bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_260bc4:
    // 0x260bc4: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x260bc4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_260bc8:
    // 0x260bc8: 0x27a201a0  addiu       $v0, $sp, 0x1A0
    ctx->pc = 0x260bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_260bcc:
    // 0x260bcc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260bccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260bd0:
    // 0x260bd0: 0xc040c24  jal         func_103090
label_260bd4:
    if (ctx->pc == 0x260BD4u) {
        ctx->pc = 0x260BD8u;
        goto label_260bd8;
    }
    ctx->pc = 0x260BD0u;
    SET_GPR_U32(ctx, 31, 0x260BD8u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260BD8u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260BD8u) { return; }
    ctx->pc = 0x260BD8u;
label_260bd8:
    // 0x260bd8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260bd8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260bdc:
    // 0x260bdc: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x260bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_260be0:
    // 0x260be0: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x260be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_260be4:
    // 0x260be4: 0xc040c24  jal         func_103090
label_260be8:
    if (ctx->pc == 0x260BE8u) {
        ctx->pc = 0x260BECu;
        goto label_260bec;
    }
    ctx->pc = 0x260BE4u;
    SET_GPR_U32(ctx, 31, 0x260BECu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260BECu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260BECu) { return; }
    ctx->pc = 0x260BECu;
label_260bec:
    // 0x260bec: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x260becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_260bf0:
    // 0x260bf0: 0xc0675a4  jal         func_19D690
label_260bf4:
    if (ctx->pc == 0x260BF4u) {
        ctx->pc = 0x260BF8u;
        goto label_260bf8;
    }
    ctx->pc = 0x260BF0u;
    SET_GPR_U32(ctx, 31, 0x260BF8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x260BF0u, 0x260BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260BF8u;
label_260bf8:
    // 0x260bf8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x260bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_260bfc:
    // 0x260bfc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260bfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_260c00:
    // 0x260c00: 0xc040cbc  jal         func_1032F0
label_260c04:
    if (ctx->pc == 0x260C04u) {
        ctx->pc = 0x260C08u;
        goto label_260c08;
    }
    ctx->pc = 0x260C00u;
    SET_GPR_U32(ctx, 31, 0x260C08u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260C08u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260C08u) { return; }
    ctx->pc = 0x260C08u;
label_260c08:
    // 0x260c08: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260c08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260c0c:
    // 0x260c0c: 0xc7a00240  lwc1        $f0, 0x240($sp)
    ctx->pc = 0x260c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260c10:
    // 0x260c10: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x260c10u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_260c14:
    // 0x260c14: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x260c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_260c18:
    // 0x260c18: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x260c18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_260c1c:
    // 0x260c1c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x260c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_260c20:
    // 0x260c20: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260c20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260c24:
    // 0x260c24: 0xc040ce4  jal         func_103390
label_260c28:
    if (ctx->pc == 0x260C28u) {
        ctx->pc = 0x260C2Cu;
        goto label_260c2c;
    }
    ctx->pc = 0x260C24u;
    SET_GPR_U32(ctx, 31, 0x260C2Cu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x260C2Cu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260C2Cu) { return; }
    ctx->pc = 0x260C2Cu;
label_260c2c:
    // 0x260c2c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x260c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_260c30:
    // 0x260c30: 0xc040cbc  jal         func_1032F0
label_260c34:
    if (ctx->pc == 0x260C34u) {
        ctx->pc = 0x260C38u;
        goto label_260c38;
    }
    ctx->pc = 0x260C30u;
    SET_GPR_U32(ctx, 31, 0x260C38u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260C38u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260C38u) { return; }
    ctx->pc = 0x260C38u;
label_260c38:
    // 0x260c38: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x260c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260c3c:
    // 0x260c3c: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x260c3cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_260c40:
    // 0x260c40: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x260c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_260c44:
    // 0x260c44: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260c44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260c48:
    // 0x260c48: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x260c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_260c4c:
    // 0x260c4c: 0xc040ce4  jal         func_103390
label_260c50:
    if (ctx->pc == 0x260C50u) {
        ctx->pc = 0x260C54u;
        goto label_260c54;
    }
    ctx->pc = 0x260C4Cu;
    SET_GPR_U32(ctx, 31, 0x260C54u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x260C54u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260C54u) { return; }
    ctx->pc = 0x260C54u;
label_260c54:
    // 0x260c54: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_260c58:
    if (ctx->pc == 0x260C58u) {
        ctx->pc = 0x260C5Cu;
        goto label_260c5c;
    }
    ctx->pc = 0x260C54u;
    {
        const bool branch_taken_0x260c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260c54) {
            ctx->pc = 0x260F34u;
            goto label_260f34;
        }
    }
    ctx->pc = 0x260C5Cu;
label_260c5c:
    // 0x260c5c: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x260c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_260c60:
    // 0x260c60: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x260c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_260c64:
    // 0x260c64: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x260c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_260c68:
    // 0x260c68: 0xc040c12  jal         func_103048
label_260c6c:
    if (ctx->pc == 0x260C6Cu) {
        ctx->pc = 0x260C70u;
        goto label_260c70;
    }
    ctx->pc = 0x260C68u;
    SET_GPR_U32(ctx, 31, 0x260C70u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x260C70u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260C70u) { return; }
    ctx->pc = 0x260C70u;
label_260c70:
    // 0x260c70: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x260c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_260c74:
    // 0x260c74: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x260c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_260c78:
    // 0x260c78: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x260c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_260c7c:
    // 0x260c7c: 0xc040c12  jal         func_103048
label_260c80:
    if (ctx->pc == 0x260C80u) {
        ctx->pc = 0x260C84u;
        goto label_260c84;
    }
    ctx->pc = 0x260C7Cu;
    SET_GPR_U32(ctx, 31, 0x260C84u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x260C84u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260C84u) { return; }
    ctx->pc = 0x260C84u;
label_260c84:
    // 0x260c84: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x260c84u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260c88:
    // 0x260c88: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x260c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_260c8c:
    // 0x260c8c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260c8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260c90:
    // 0x260c90: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x260c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_260c94:
    // 0x260c94: 0xc040c24  jal         func_103090
label_260c98:
    if (ctx->pc == 0x260C98u) {
        ctx->pc = 0x260C9Cu;
        goto label_260c9c;
    }
    ctx->pc = 0x260C94u;
    SET_GPR_U32(ctx, 31, 0x260C9Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260C9Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260C9Cu) { return; }
    ctx->pc = 0x260C9Cu;
label_260c9c:
    // 0x260c9c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x260c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_260ca0:
    // 0x260ca0: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x260ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_260ca4:
    // 0x260ca4: 0xc040c24  jal         func_103090
label_260ca8:
    if (ctx->pc == 0x260CA8u) {
        ctx->pc = 0x260CACu;
        goto label_260cac;
    }
    ctx->pc = 0x260CA4u;
    SET_GPR_U32(ctx, 31, 0x260CACu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260CACu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260CACu) { return; }
    ctx->pc = 0x260CACu;
label_260cac:
    // 0x260cac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260cacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260cb0:
    // 0x260cb0: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x260cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_260cb4:
    // 0x260cb4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260cb4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_260cb8:
    // 0x260cb8: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x260cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_260cbc:
    // 0x260cbc: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x260cbcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_260cc0:
    // 0x260cc0: 0xc040c24  jal         func_103090
label_260cc4:
    if (ctx->pc == 0x260CC4u) {
        ctx->pc = 0x260CC8u;
        goto label_260cc8;
    }
    ctx->pc = 0x260CC0u;
    SET_GPR_U32(ctx, 31, 0x260CC8u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260CC8u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260CC8u) { return; }
    ctx->pc = 0x260CC8u;
label_260cc8:
    // 0x260cc8: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x260cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_260ccc:
    // 0x260ccc: 0xc0675a4  jal         func_19D690
label_260cd0:
    if (ctx->pc == 0x260CD0u) {
        ctx->pc = 0x260CD4u;
        goto label_260cd4;
    }
    ctx->pc = 0x260CCCu;
    SET_GPR_U32(ctx, 31, 0x260CD4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x260CCCu, 0x260CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260CD4u;
label_260cd4:
    // 0x260cd4: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x260cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_260cd8:
    // 0x260cd8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x260cd8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_260cdc:
    // 0x260cdc: 0xc040cbc  jal         func_1032F0
label_260ce0:
    if (ctx->pc == 0x260CE0u) {
        ctx->pc = 0x260CE4u;
        goto label_260ce4;
    }
    ctx->pc = 0x260CDCu;
    SET_GPR_U32(ctx, 31, 0x260CE4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260CE4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260CE4u) { return; }
    ctx->pc = 0x260CE4u;
label_260ce4:
    // 0x260ce4: 0xc7a00240  lwc1        $f0, 0x240($sp)
    ctx->pc = 0x260ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260ce8:
    // 0x260ce8: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x260ce8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_260cec:
    // 0x260cec: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x260cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_260cf0:
    // 0x260cf0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x260cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_260cf4:
    // 0x260cf4: 0xc040ce4  jal         func_103390
label_260cf8:
    if (ctx->pc == 0x260CF8u) {
        ctx->pc = 0x260CFCu;
        goto label_260cfc;
    }
    ctx->pc = 0x260CF4u;
    SET_GPR_U32(ctx, 31, 0x260CFCu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x260CFCu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260CFCu) { return; }
    ctx->pc = 0x260CFCu;
label_260cfc:
    // 0x260cfc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260cfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260d00:
    // 0x260d00: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x260d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_260d04:
    // 0x260d04: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260d04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_260d08:
    // 0x260d08: 0xc040cbc  jal         func_1032F0
label_260d0c:
    if (ctx->pc == 0x260D0Cu) {
        ctx->pc = 0x260D10u;
        goto label_260d10;
    }
    ctx->pc = 0x260D08u;
    SET_GPR_U32(ctx, 31, 0x260D10u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260D10u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260D10u) { return; }
    ctx->pc = 0x260D10u;
label_260d10:
    // 0x260d10: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x260d10u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260d14:
    // 0x260d14: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x260d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260d18:
    // 0x260d18: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x260d18u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_260d1c:
    // 0x260d1c: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x260d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_260d20:
    // 0x260d20: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260d20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260d24:
    // 0x260d24: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x260d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_260d28:
    // 0x260d28: 0xc040ce4  jal         func_103390
label_260d2c:
    if (ctx->pc == 0x260D2Cu) {
        ctx->pc = 0x260D30u;
        goto label_260d30;
    }
    ctx->pc = 0x260D28u;
    SET_GPR_U32(ctx, 31, 0x260D30u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x260D30u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260D30u) { return; }
    ctx->pc = 0x260D30u;
label_260d30:
    // 0x260d30: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260d30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260d34:
    // 0x260d34: 0x1000007f  b           . + 4 + (0x7F << 2)
label_260d38:
    if (ctx->pc == 0x260D38u) {
        ctx->pc = 0x260D3Cu;
        goto label_260d3c;
    }
    ctx->pc = 0x260D34u;
    {
        const bool branch_taken_0x260d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260d34) {
            ctx->pc = 0x260F34u;
            goto label_260f34;
        }
    }
    ctx->pc = 0x260D3Cu;
label_260d3c:
    // 0x260d3c: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x260d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_260d40:
    // 0x260d40: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x260d40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_260d44:
    // 0x260d44: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x260d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_260d48:
    // 0x260d48: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260d48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260d4c:
    // 0x260d4c: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x260d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_260d50:
    // 0x260d50: 0xc040c12  jal         func_103048
label_260d54:
    if (ctx->pc == 0x260D54u) {
        ctx->pc = 0x260D58u;
        goto label_260d58;
    }
    ctx->pc = 0x260D50u;
    SET_GPR_U32(ctx, 31, 0x260D58u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x260D58u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260D58u) { return; }
    ctx->pc = 0x260D58u;
label_260d58:
    // 0x260d58: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260d58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260d5c:
    // 0x260d5c: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x260d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_260d60:
    // 0x260d60: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260d60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260d64:
    // 0x260d64: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x260d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_260d68:
    // 0x260d68: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x260d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_260d6c:
    // 0x260d6c: 0xc040c12  jal         func_103048
label_260d70:
    if (ctx->pc == 0x260D70u) {
        ctx->pc = 0x260D74u;
        goto label_260d74;
    }
    ctx->pc = 0x260D6Cu;
    SET_GPR_U32(ctx, 31, 0x260D74u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x260D74u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260D74u) { return; }
    ctx->pc = 0x260D74u;
label_260d74:
    // 0x260d74: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x260d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_260d78:
    // 0x260d78: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x260d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_260d7c:
    // 0x260d7c: 0xc040c24  jal         func_103090
label_260d80:
    if (ctx->pc == 0x260D80u) {
        ctx->pc = 0x260D84u;
        goto label_260d84;
    }
    ctx->pc = 0x260D7Cu;
    SET_GPR_U32(ctx, 31, 0x260D84u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260D84u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260D84u) { return; }
    ctx->pc = 0x260D84u;
label_260d84:
    // 0x260d84: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x260d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_260d88:
    // 0x260d88: 0x27a201a0  addiu       $v0, $sp, 0x1A0
    ctx->pc = 0x260d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_260d8c:
    // 0x260d8c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260d8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260d90:
    // 0x260d90: 0xc040c24  jal         func_103090
label_260d94:
    if (ctx->pc == 0x260D94u) {
        ctx->pc = 0x260D98u;
        goto label_260d98;
    }
    ctx->pc = 0x260D90u;
    SET_GPR_U32(ctx, 31, 0x260D98u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260D98u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260D98u) { return; }
    ctx->pc = 0x260D98u;
label_260d98:
    // 0x260d98: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260d98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260d9c:
    // 0x260d9c: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x260d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_260da0:
    // 0x260da0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260da0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260da4:
    // 0x260da4: 0x27a301b0  addiu       $v1, $sp, 0x1B0
    ctx->pc = 0x260da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_260da8:
    // 0x260da8: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x260da8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_260dac:
    // 0x260dac: 0xc040c24  jal         func_103090
label_260db0:
    if (ctx->pc == 0x260DB0u) {
        ctx->pc = 0x260DB4u;
        goto label_260db4;
    }
    ctx->pc = 0x260DACu;
    SET_GPR_U32(ctx, 31, 0x260DB4u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260DB4u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260DB4u) { return; }
    ctx->pc = 0x260DB4u;
label_260db4:
    // 0x260db4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260db4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260db8:
    // 0x260db8: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x260db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_260dbc:
    // 0x260dbc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260dbcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260dc0:
    // 0x260dc0: 0xc0675a4  jal         func_19D690
label_260dc4:
    if (ctx->pc == 0x260DC4u) {
        ctx->pc = 0x260DC8u;
        goto label_260dc8;
    }
    ctx->pc = 0x260DC0u;
    SET_GPR_U32(ctx, 31, 0x260DC8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x260DC0u, 0x260DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260DC8u;
label_260dc8:
    // 0x260dc8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260dc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260dcc:
    // 0x260dcc: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x260dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_260dd0:
    // 0x260dd0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260dd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260dd4:
    // 0x260dd4: 0xc040cbc  jal         func_1032F0
label_260dd8:
    if (ctx->pc == 0x260DD8u) {
        ctx->pc = 0x260DDCu;
        goto label_260ddc;
    }
    ctx->pc = 0x260DD4u;
    SET_GPR_U32(ctx, 31, 0x260DDCu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260DDCu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260DDCu) { return; }
    ctx->pc = 0x260DDCu;
label_260ddc:
    // 0x260ddc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260ddcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260de0:
    // 0x260de0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x260de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_260de4:
    // 0x260de4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260de4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_260de8:
    // 0x260de8: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x260de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_260dec:
    // 0x260dec: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260decu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260df0:
    // 0x260df0: 0xc7ac0240  lwc1        $f12, 0x240($sp)
    ctx->pc = 0x260df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_260df4:
    // 0x260df4: 0xc040ce4  jal         func_103390
label_260df8:
    if (ctx->pc == 0x260DF8u) {
        ctx->pc = 0x260DFCu;
        goto label_260dfc;
    }
    ctx->pc = 0x260DF4u;
    SET_GPR_U32(ctx, 31, 0x260DFCu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x260DFCu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260DFCu) { return; }
    ctx->pc = 0x260DFCu;
label_260dfc:
    // 0x260dfc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260dfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260e00:
    // 0x260e00: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x260e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_260e04:
    // 0x260e04: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260e04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_260e08:
    // 0x260e08: 0xc040cbc  jal         func_1032F0
label_260e0c:
    if (ctx->pc == 0x260E0Cu) {
        ctx->pc = 0x260E10u;
        goto label_260e10;
    }
    ctx->pc = 0x260E08u;
    SET_GPR_U32(ctx, 31, 0x260E10u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260E10u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260E10u) { return; }
    ctx->pc = 0x260E10u;
label_260e10:
    // 0x260e10: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x260e10u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260e14:
    // 0x260e14: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x260e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_260e18:
    // 0x260e18: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260e18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260e1c:
    // 0x260e1c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x260e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_260e20:
    // 0x260e20: 0xc7ac0244  lwc1        $f12, 0x244($sp)
    ctx->pc = 0x260e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_260e24:
    // 0x260e24: 0xc040ce4  jal         func_103390
label_260e28:
    if (ctx->pc == 0x260E28u) {
        ctx->pc = 0x260E2Cu;
        goto label_260e2c;
    }
    ctx->pc = 0x260E24u;
    SET_GPR_U32(ctx, 31, 0x260E2Cu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x260E2Cu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260E2Cu) { return; }
    ctx->pc = 0x260E2Cu;
label_260e2c:
    // 0x260e2c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260e2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260e30:
    // 0x260e30: 0x10000040  b           . + 4 + (0x40 << 2)
label_260e34:
    if (ctx->pc == 0x260E34u) {
        ctx->pc = 0x260E38u;
        goto label_260e38;
    }
    ctx->pc = 0x260E30u;
    {
        const bool branch_taken_0x260e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260e30) {
            ctx->pc = 0x260F34u;
            goto label_260f34;
        }
    }
    ctx->pc = 0x260E38u;
label_260e38:
    // 0x260e38: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x260e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_260e3c:
    // 0x260e3c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x260e3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_260e40:
    // 0x260e40: 0x27a201a0  addiu       $v0, $sp, 0x1A0
    ctx->pc = 0x260e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_260e44:
    // 0x260e44: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260e44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260e48:
    // 0x260e48: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x260e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_260e4c:
    // 0x260e4c: 0xc040c12  jal         func_103048
label_260e50:
    if (ctx->pc == 0x260E50u) {
        ctx->pc = 0x260E54u;
        goto label_260e54;
    }
    ctx->pc = 0x260E4Cu;
    SET_GPR_U32(ctx, 31, 0x260E54u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x260E54u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260E54u) { return; }
    ctx->pc = 0x260E54u;
label_260e54:
    // 0x260e54: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260e54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260e58:
    // 0x260e58: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x260e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_260e5c:
    // 0x260e5c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260e5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260e60:
    // 0x260e60: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x260e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_260e64:
    // 0x260e64: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x260e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_260e68:
    // 0x260e68: 0xc040c12  jal         func_103048
label_260e6c:
    if (ctx->pc == 0x260E6Cu) {
        ctx->pc = 0x260E70u;
        goto label_260e70;
    }
    ctx->pc = 0x260E68u;
    SET_GPR_U32(ctx, 31, 0x260E70u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x260E70u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260E70u) { return; }
    ctx->pc = 0x260E70u;
label_260e70:
    // 0x260e70: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x260e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_260e74:
    // 0x260e74: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x260e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_260e78:
    // 0x260e78: 0xc040c24  jal         func_103090
label_260e7c:
    if (ctx->pc == 0x260E7Cu) {
        ctx->pc = 0x260E80u;
        goto label_260e80;
    }
    ctx->pc = 0x260E78u;
    SET_GPR_U32(ctx, 31, 0x260E80u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260E80u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260E80u) { return; }
    ctx->pc = 0x260E80u;
label_260e80:
    // 0x260e80: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x260e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_260e84:
    // 0x260e84: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x260e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_260e88:
    // 0x260e88: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260e88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260e8c:
    // 0x260e8c: 0xc040c24  jal         func_103090
label_260e90:
    if (ctx->pc == 0x260E90u) {
        ctx->pc = 0x260E94u;
        goto label_260e94;
    }
    ctx->pc = 0x260E8Cu;
    SET_GPR_U32(ctx, 31, 0x260E94u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260E94u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260E94u) { return; }
    ctx->pc = 0x260E94u;
label_260e94:
    // 0x260e94: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260e94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260e98:
    // 0x260e98: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x260e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_260e9c:
    // 0x260e9c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260e9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260ea0:
    // 0x260ea0: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x260ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_260ea4:
    // 0x260ea4: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x260ea4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_260ea8:
    // 0x260ea8: 0xc040c24  jal         func_103090
label_260eac:
    if (ctx->pc == 0x260EACu) {
        ctx->pc = 0x260EB0u;
        goto label_260eb0;
    }
    ctx->pc = 0x260EA8u;
    SET_GPR_U32(ctx, 31, 0x260EB0u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260EB0u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260EB0u) { return; }
    ctx->pc = 0x260EB0u;
label_260eb0:
    // 0x260eb0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260eb0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260eb4:
    // 0x260eb4: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x260eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_260eb8:
    // 0x260eb8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260eb8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260ebc:
    // 0x260ebc: 0xc0675a4  jal         func_19D690
label_260ec0:
    if (ctx->pc == 0x260EC0u) {
        ctx->pc = 0x260EC4u;
        goto label_260ec4;
    }
    ctx->pc = 0x260EBCu;
    SET_GPR_U32(ctx, 31, 0x260EC4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x260EBCu, 0x260EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260EC4u;
label_260ec4:
    // 0x260ec4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260ec4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260ec8:
    // 0x260ec8: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x260ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_260ecc:
    // 0x260ecc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260eccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260ed0:
    // 0x260ed0: 0xc040cbc  jal         func_1032F0
label_260ed4:
    if (ctx->pc == 0x260ED4u) {
        ctx->pc = 0x260ED8u;
        goto label_260ed8;
    }
    ctx->pc = 0x260ED0u;
    SET_GPR_U32(ctx, 31, 0x260ED8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260ED8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260ED8u) { return; }
    ctx->pc = 0x260ED8u;
label_260ed8:
    // 0x260ed8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260ed8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260edc:
    // 0x260edc: 0xc7a00240  lwc1        $f0, 0x240($sp)
    ctx->pc = 0x260edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260ee0:
    // 0x260ee0: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x260ee0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_260ee4:
    // 0x260ee4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x260ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_260ee8:
    // 0x260ee8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260ee8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_260eec:
    // 0x260eec: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x260eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_260ef0:
    // 0x260ef0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260ef0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260ef4:
    // 0x260ef4: 0xc040d38  jal         func_1034E0
label_260ef8:
    if (ctx->pc == 0x260EF8u) {
        ctx->pc = 0x260EFCu;
        goto label_260efc;
    }
    ctx->pc = 0x260EF4u;
    SET_GPR_U32(ctx, 31, 0x260EFCu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x260EFCu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260EFCu) { return; }
    ctx->pc = 0x260EFCu;
label_260efc:
    // 0x260efc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260efcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260f00:
    // 0x260f00: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x260f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_260f04:
    // 0x260f04: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260f04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_260f08:
    // 0x260f08: 0xc040cbc  jal         func_1032F0
label_260f0c:
    if (ctx->pc == 0x260F0Cu) {
        ctx->pc = 0x260F10u;
        goto label_260f10;
    }
    ctx->pc = 0x260F08u;
    SET_GPR_U32(ctx, 31, 0x260F10u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260F10u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260F10u) { return; }
    ctx->pc = 0x260F10u;
label_260f10:
    // 0x260f10: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x260f10u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260f14:
    // 0x260f14: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x260f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260f18:
    // 0x260f18: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x260f18u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_260f1c:
    // 0x260f1c: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x260f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_260f20:
    // 0x260f20: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260f20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260f24:
    // 0x260f24: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x260f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_260f28:
    // 0x260f28: 0xc040d38  jal         func_1034E0
label_260f2c:
    if (ctx->pc == 0x260F2Cu) {
        ctx->pc = 0x260F30u;
        goto label_260f30;
    }
    ctx->pc = 0x260F28u;
    SET_GPR_U32(ctx, 31, 0x260F30u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x260F30u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260F30u) { return; }
    ctx->pc = 0x260F30u;
label_260f30:
    // 0x260f30: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260f30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260f34:
    // 0x260f34: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x260f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_260f38:
    // 0x260f38: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x260f38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_260f3c:
    // 0x260f3c: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x260f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_260f40:
    // 0x260f40: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260f40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260f44:
    // 0x260f44: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x260f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_260f48:
    // 0x260f48: 0xc040c92  jal         func_103248
label_260f4c:
    if (ctx->pc == 0x260F4Cu) {
        ctx->pc = 0x260F50u;
        goto label_260f50;
    }
    ctx->pc = 0x260F48u;
    SET_GPR_U32(ctx, 31, 0x260F50u);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x260F50u;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260F50u) { return; }
    ctx->pc = 0x260F50u;
label_260f50:
    // 0x260f50: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260f50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260f54:
    // 0x260f54: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x260f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_260f58:
    // 0x260f58: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260f58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260f5c:
    // 0x260f5c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x260f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_260f60:
    // 0x260f60: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x260f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_260f64:
    // 0x260f64: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x260f64u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260f68:
    // 0x260f68: 0xc040c00  jal         func_103000
label_260f6c:
    if (ctx->pc == 0x260F6Cu) {
        ctx->pc = 0x260F70u;
        goto label_260f70;
    }
    ctx->pc = 0x260F68u;
    SET_GPR_U32(ctx, 31, 0x260F70u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x260F70u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260F70u) { return; }
    ctx->pc = 0x260F70u;
label_260f70:
    // 0x260f70: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260f70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260f74:
    // 0x260f74: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x260f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_260f78:
    // 0x260f78: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260f78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_260f7c:
    // 0x260f7c: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x260f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_260f80:
    // 0x260f80: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260f80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260f84:
    // 0x260f84: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x260f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_260f88:
    // 0x260f88: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x260f88u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260f8c:
    // 0x260f8c: 0xc040c00  jal         func_103000
label_260f90:
    if (ctx->pc == 0x260F90u) {
        ctx->pc = 0x260F94u;
        goto label_260f94;
    }
    ctx->pc = 0x260F8Cu;
    SET_GPR_U32(ctx, 31, 0x260F94u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x260F94u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260F94u) { return; }
    ctx->pc = 0x260F94u;
label_260f94:
    // 0x260f94: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260f94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260f98:
    // 0x260f98: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x260f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_260f9c:
    // 0x260f9c: 0x93a40268  lbu         $a0, 0x268($sp)
    ctx->pc = 0x260f9cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 616)));
label_260fa0:
    // 0x260fa0: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x260fa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_260fa4:
    // 0x260fa4: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x260fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_260fa8:
    // 0x260fa8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x260fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_260fac:
    // 0x260fac: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x260facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_260fb0:
    // 0x260fb0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x260fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_260fb4:
    // 0x260fb4: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x260fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_260fb8:
    // 0x260fb8: 0xc040c92  jal         func_103248
label_260fbc:
    if (ctx->pc == 0x260FBCu) {
        ctx->pc = 0x260FC0u;
        goto label_260fc0;
    }
    ctx->pc = 0x260FB8u;
    SET_GPR_U32(ctx, 31, 0x260FC0u);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x260FC0u;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260FC0u) { return; }
    ctx->pc = 0x260FC0u;
label_260fc0:
    // 0x260fc0: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x260fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_260fc4:
    // 0x260fc4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x260fc4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_260fc8:
    // 0x260fc8: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x260fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_260fcc:
    // 0x260fcc: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x260fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_260fd0:
    // 0x260fd0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x260fd0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260fd4:
    // 0x260fd4: 0xc040c00  jal         func_103000
label_260fd8:
    if (ctx->pc == 0x260FD8u) {
        ctx->pc = 0x260FDCu;
        goto label_260fdc;
    }
    ctx->pc = 0x260FD4u;
    SET_GPR_U32(ctx, 31, 0x260FDCu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x260FDCu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260FDCu) { return; }
    ctx->pc = 0x260FDCu;
label_260fdc:
    // 0x260fdc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x260fdcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260fe0:
    // 0x260fe0: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x260fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_260fe4:
    // 0x260fe4: 0x132180  sll         $a0, $s3, 6
    ctx->pc = 0x260fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_260fe8:
    // 0x260fe8: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x260fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_260fec:
    // 0x260fec: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x260fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_260ff0:
    // 0x260ff0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260ff0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_260ff4:
    // 0x260ff4: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x260ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_260ff8:
    // 0x260ff8: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x260ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_260ffc:
    // 0x260ffc: 0xc040c92  jal         func_103248
label_261000:
    if (ctx->pc == 0x261000u) {
        ctx->pc = 0x261004u;
        goto label_261004;
    }
    ctx->pc = 0x260FFCu;
    SET_GPR_U32(ctx, 31, 0x261004u);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x261004u;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261004u) { return; }
    ctx->pc = 0x261004u;
label_261004:
    // 0x261004: 0x27a201f0  addiu       $v0, $sp, 0x1F0
    ctx->pc = 0x261004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_261008:
    // 0x261008: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x261008u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26100c:
    // 0x26100c: 0x8e450100  lw          $a1, 0x100($s2)
    ctx->pc = 0x26100cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
label_261010:
    // 0x261010: 0xc040c44  jal         func_103110
label_261014:
    if (ctx->pc == 0x261014u) {
        ctx->pc = 0x261018u;
        goto label_261018;
    }
    ctx->pc = 0x261010u;
    SET_GPR_U32(ctx, 31, 0x261018u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x261018u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261018u) { return; }
    ctx->pc = 0x261018u;
label_261018:
    // 0x261018: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x261018u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26101c:
    // 0x26101c: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x26101cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_261020:
    // 0x261020: 0x93b60268  lbu         $s6, 0x268($sp)
    ctx->pc = 0x261020u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 616)));
label_261024:
    // 0x261024: 0x32c400ff  andi        $a0, $s6, 0xFF
    ctx->pc = 0x261024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_261028:
    // 0x261028: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x261028u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_26102c:
    // 0x26102c: 0x8c460130  lw          $a2, 0x130($v0)
    ctx->pc = 0x26102cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_261030:
    // 0x261030: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x261030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_261034:
    // 0x261034: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x261034u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_261038:
    // 0x261038: 0x27a301f0  addiu       $v1, $sp, 0x1F0
    ctx->pc = 0x261038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_26103c:
    // 0x26103c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x26103cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_261040:
    // 0x261040: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x261040u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_261044:
    // 0x261044: 0xc040c00  jal         func_103000
label_261048:
    if (ctx->pc == 0x261048u) {
        ctx->pc = 0x26104Cu;
        goto label_26104c;
    }
    ctx->pc = 0x261044u;
    SET_GPR_U32(ctx, 31, 0x26104Cu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x26104Cu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26104Cu) { return; }
    ctx->pc = 0x26104Cu;
label_26104c:
    // 0x26104c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x26104cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_261050:
    // 0x261050: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x261050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_261054:
    // 0x261054: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x261054u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_261058:
    // 0x261058: 0x8ea20100  lw          $v0, 0x100($s5)
    ctx->pc = 0x261058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 256)));
label_26105c:
    // 0x26105c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x26105cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_261060:
    // 0x261060: 0xc040c44  jal         func_103110
label_261064:
    if (ctx->pc == 0x261064u) {
        ctx->pc = 0x261068u;
        goto label_261068;
    }
    ctx->pc = 0x261060u;
    SET_GPR_U32(ctx, 31, 0x261068u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x261068u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261068u) { return; }
    ctx->pc = 0x261068u;
label_261068:
    // 0x261068: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x261068u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26106c:
    // 0x26106c: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x26106cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_261070:
    // 0x261070: 0x133180  sll         $a2, $s3, 6
    ctx->pc = 0x261070u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_261074:
    // 0x261074: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x261074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_261078:
    // 0x261078: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x261078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_26107c:
    // 0x26107c: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x26107cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_261080:
    // 0x261080: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x261080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_261084:
    // 0x261084: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x261084u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_261088:
    // 0x261088: 0xc040c00  jal         func_103000
label_26108c:
    if (ctx->pc == 0x26108Cu) {
        ctx->pc = 0x261090u;
        goto label_261090;
    }
    ctx->pc = 0x261088u;
    SET_GPR_U32(ctx, 31, 0x261090u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x261090u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261090u) { return; }
    ctx->pc = 0x261090u;
label_261090:
    // 0x261090: 0x27a201f0  addiu       $v0, $sp, 0x1F0
    ctx->pc = 0x261090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_261094:
    // 0x261094: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x261094u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_261098:
    // 0x261098: 0x8e250100  lw          $a1, 0x100($s1)
    ctx->pc = 0x261098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
label_26109c:
    // 0x26109c: 0xc040c44  jal         func_103110
label_2610a0:
    if (ctx->pc == 0x2610A0u) {
        ctx->pc = 0x2610A4u;
        goto label_2610a4;
    }
    ctx->pc = 0x26109Cu;
    SET_GPR_U32(ctx, 31, 0x2610A4u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x2610A4u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2610A4u) { return; }
    ctx->pc = 0x2610A4u;
label_2610a4:
    // 0x2610a4: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x2610a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_2610a8:
    // 0x2610a8: 0x102980  sll         $a1, $s0, 6
    ctx->pc = 0x2610a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_2610ac:
    // 0x2610ac: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2610acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_2610b0:
    // 0x2610b0: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x2610b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2610b4:
    // 0x2610b4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2610b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_2610b8:
    // 0x2610b8: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x2610b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2610bc:
    // 0x2610bc: 0xc040c00  jal         func_103000
label_2610c0:
    if (ctx->pc == 0x2610C0u) {
        ctx->pc = 0x2610C4u;
        goto label_2610c4;
    }
    ctx->pc = 0x2610BCu;
    SET_GPR_U32(ctx, 31, 0x2610C4u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x2610C4u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2610C4u) { return; }
    ctx->pc = 0x2610C4u;
label_2610c4:
    // 0x2610c4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2610c4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2610c8:
    // 0x2610c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2610c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2610cc:
    // 0x2610cc: 0x70a01628  paddub      $v0, $a1, $zero
    ctx->pc = 0x2610ccu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_2610d0:
    // 0x2610d0: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x2610d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2610d4:
    // 0x2610d4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2610d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2610d8:
    // 0x2610d8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2610d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2610dc:
    // 0x2610dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2610dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2610e0:
    // 0x2610e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2610e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2610e4:
    // 0x2610e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2610e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2610e8:
    // 0x2610e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2610e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2610ec:
    // 0x2610ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2610ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2610f0:
    // 0x2610f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2610f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2610f4:
    // 0x2610f4: 0x27bd0270  addiu       $sp, $sp, 0x270
    ctx->pc = 0x2610f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_2610f8:
    // 0x2610f8: 0x3e00008  jr          $ra
label_2610fc:
    if (ctx->pc == 0x2610FCu) {
        ctx->pc = 0x261100u;
        goto label_fallthrough_0x2610f8;
    }
    ctx->pc = 0x2610F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2610F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2610f8:
    ctx->pc = 0x261100u;
}
