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

// Function: Map_floor_scroll_trans
// Address: 0x32fae0 - 0x3323c0
void Map_floor_scroll_trans_0x32fae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Map_floor_scroll_trans_0x32fae0");
#endif

    switch (ctx->pc) {
        case 0x32fae0u: goto label_32fae0;
        case 0x32fae4u: goto label_32fae4;
        case 0x32fae8u: goto label_32fae8;
        case 0x32faecu: goto label_32faec;
        case 0x32faf0u: goto label_32faf0;
        case 0x32faf4u: goto label_32faf4;
        case 0x32faf8u: goto label_32faf8;
        case 0x32fafcu: goto label_32fafc;
        case 0x32fb00u: goto label_32fb00;
        case 0x32fb04u: goto label_32fb04;
        case 0x32fb08u: goto label_32fb08;
        case 0x32fb0cu: goto label_32fb0c;
        case 0x32fb10u: goto label_32fb10;
        case 0x32fb14u: goto label_32fb14;
        case 0x32fb18u: goto label_32fb18;
        case 0x32fb1cu: goto label_32fb1c;
        case 0x32fb20u: goto label_32fb20;
        case 0x32fb24u: goto label_32fb24;
        case 0x32fb28u: goto label_32fb28;
        case 0x32fb2cu: goto label_32fb2c;
        case 0x32fb30u: goto label_32fb30;
        case 0x32fb34u: goto label_32fb34;
        case 0x32fb38u: goto label_32fb38;
        case 0x32fb3cu: goto label_32fb3c;
        case 0x32fb40u: goto label_32fb40;
        case 0x32fb44u: goto label_32fb44;
        case 0x32fb48u: goto label_32fb48;
        case 0x32fb4cu: goto label_32fb4c;
        case 0x32fb50u: goto label_32fb50;
        case 0x32fb54u: goto label_32fb54;
        case 0x32fb58u: goto label_32fb58;
        case 0x32fb5cu: goto label_32fb5c;
        case 0x32fb60u: goto label_32fb60;
        case 0x32fb64u: goto label_32fb64;
        case 0x32fb68u: goto label_32fb68;
        case 0x32fb6cu: goto label_32fb6c;
        case 0x32fb70u: goto label_32fb70;
        case 0x32fb74u: goto label_32fb74;
        case 0x32fb78u: goto label_32fb78;
        case 0x32fb7cu: goto label_32fb7c;
        case 0x32fb80u: goto label_32fb80;
        case 0x32fb84u: goto label_32fb84;
        case 0x32fb88u: goto label_32fb88;
        case 0x32fb8cu: goto label_32fb8c;
        case 0x32fb90u: goto label_32fb90;
        case 0x32fb94u: goto label_32fb94;
        case 0x32fb98u: goto label_32fb98;
        case 0x32fb9cu: goto label_32fb9c;
        case 0x32fba0u: goto label_32fba0;
        case 0x32fba4u: goto label_32fba4;
        case 0x32fba8u: goto label_32fba8;
        case 0x32fbacu: goto label_32fbac;
        case 0x32fbb0u: goto label_32fbb0;
        case 0x32fbb4u: goto label_32fbb4;
        case 0x32fbb8u: goto label_32fbb8;
        case 0x32fbbcu: goto label_32fbbc;
        case 0x32fbc0u: goto label_32fbc0;
        case 0x32fbc4u: goto label_32fbc4;
        case 0x32fbc8u: goto label_32fbc8;
        case 0x32fbccu: goto label_32fbcc;
        case 0x32fbd0u: goto label_32fbd0;
        case 0x32fbd4u: goto label_32fbd4;
        case 0x32fbd8u: goto label_32fbd8;
        case 0x32fbdcu: goto label_32fbdc;
        case 0x32fbe0u: goto label_32fbe0;
        case 0x32fbe4u: goto label_32fbe4;
        case 0x32fbe8u: goto label_32fbe8;
        case 0x32fbecu: goto label_32fbec;
        case 0x32fbf0u: goto label_32fbf0;
        case 0x32fbf4u: goto label_32fbf4;
        case 0x32fbf8u: goto label_32fbf8;
        case 0x32fbfcu: goto label_32fbfc;
        case 0x32fc00u: goto label_32fc00;
        case 0x32fc04u: goto label_32fc04;
        case 0x32fc08u: goto label_32fc08;
        case 0x32fc0cu: goto label_32fc0c;
        case 0x32fc10u: goto label_32fc10;
        case 0x32fc14u: goto label_32fc14;
        case 0x32fc18u: goto label_32fc18;
        case 0x32fc1cu: goto label_32fc1c;
        case 0x32fc20u: goto label_32fc20;
        case 0x32fc24u: goto label_32fc24;
        case 0x32fc28u: goto label_32fc28;
        case 0x32fc2cu: goto label_32fc2c;
        case 0x32fc30u: goto label_32fc30;
        case 0x32fc34u: goto label_32fc34;
        case 0x32fc38u: goto label_32fc38;
        case 0x32fc3cu: goto label_32fc3c;
        case 0x32fc40u: goto label_32fc40;
        case 0x32fc44u: goto label_32fc44;
        case 0x32fc48u: goto label_32fc48;
        case 0x32fc4cu: goto label_32fc4c;
        case 0x32fc50u: goto label_32fc50;
        case 0x32fc54u: goto label_32fc54;
        case 0x32fc58u: goto label_32fc58;
        case 0x32fc5cu: goto label_32fc5c;
        case 0x32fc60u: goto label_32fc60;
        case 0x32fc64u: goto label_32fc64;
        case 0x32fc68u: goto label_32fc68;
        case 0x32fc6cu: goto label_32fc6c;
        case 0x32fc70u: goto label_32fc70;
        case 0x32fc74u: goto label_32fc74;
        case 0x32fc78u: goto label_32fc78;
        case 0x32fc7cu: goto label_32fc7c;
        case 0x32fc80u: goto label_32fc80;
        case 0x32fc84u: goto label_32fc84;
        case 0x32fc88u: goto label_32fc88;
        case 0x32fc8cu: goto label_32fc8c;
        case 0x32fc90u: goto label_32fc90;
        case 0x32fc94u: goto label_32fc94;
        case 0x32fc98u: goto label_32fc98;
        case 0x32fc9cu: goto label_32fc9c;
        case 0x32fca0u: goto label_32fca0;
        case 0x32fca4u: goto label_32fca4;
        case 0x32fca8u: goto label_32fca8;
        case 0x32fcacu: goto label_32fcac;
        case 0x32fcb0u: goto label_32fcb0;
        case 0x32fcb4u: goto label_32fcb4;
        case 0x32fcb8u: goto label_32fcb8;
        case 0x32fcbcu: goto label_32fcbc;
        case 0x32fcc0u: goto label_32fcc0;
        case 0x32fcc4u: goto label_32fcc4;
        case 0x32fcc8u: goto label_32fcc8;
        case 0x32fcccu: goto label_32fccc;
        case 0x32fcd0u: goto label_32fcd0;
        case 0x32fcd4u: goto label_32fcd4;
        case 0x32fcd8u: goto label_32fcd8;
        case 0x32fcdcu: goto label_32fcdc;
        case 0x32fce0u: goto label_32fce0;
        case 0x32fce4u: goto label_32fce4;
        case 0x32fce8u: goto label_32fce8;
        case 0x32fcecu: goto label_32fcec;
        case 0x32fcf0u: goto label_32fcf0;
        case 0x32fcf4u: goto label_32fcf4;
        case 0x32fcf8u: goto label_32fcf8;
        case 0x32fcfcu: goto label_32fcfc;
        case 0x32fd00u: goto label_32fd00;
        case 0x32fd04u: goto label_32fd04;
        case 0x32fd08u: goto label_32fd08;
        case 0x32fd0cu: goto label_32fd0c;
        case 0x32fd10u: goto label_32fd10;
        case 0x32fd14u: goto label_32fd14;
        case 0x32fd18u: goto label_32fd18;
        case 0x32fd1cu: goto label_32fd1c;
        case 0x32fd20u: goto label_32fd20;
        case 0x32fd24u: goto label_32fd24;
        case 0x32fd28u: goto label_32fd28;
        case 0x32fd2cu: goto label_32fd2c;
        case 0x32fd30u: goto label_32fd30;
        case 0x32fd34u: goto label_32fd34;
        case 0x32fd38u: goto label_32fd38;
        case 0x32fd3cu: goto label_32fd3c;
        case 0x32fd40u: goto label_32fd40;
        case 0x32fd44u: goto label_32fd44;
        case 0x32fd48u: goto label_32fd48;
        case 0x32fd4cu: goto label_32fd4c;
        case 0x32fd50u: goto label_32fd50;
        case 0x32fd54u: goto label_32fd54;
        case 0x32fd58u: goto label_32fd58;
        case 0x32fd5cu: goto label_32fd5c;
        case 0x32fd60u: goto label_32fd60;
        case 0x32fd64u: goto label_32fd64;
        case 0x32fd68u: goto label_32fd68;
        case 0x32fd6cu: goto label_32fd6c;
        case 0x32fd70u: goto label_32fd70;
        case 0x32fd74u: goto label_32fd74;
        case 0x32fd78u: goto label_32fd78;
        case 0x32fd7cu: goto label_32fd7c;
        case 0x32fd80u: goto label_32fd80;
        case 0x32fd84u: goto label_32fd84;
        case 0x32fd88u: goto label_32fd88;
        case 0x32fd8cu: goto label_32fd8c;
        case 0x32fd90u: goto label_32fd90;
        case 0x32fd94u: goto label_32fd94;
        case 0x32fd98u: goto label_32fd98;
        case 0x32fd9cu: goto label_32fd9c;
        case 0x32fda0u: goto label_32fda0;
        case 0x32fda4u: goto label_32fda4;
        case 0x32fda8u: goto label_32fda8;
        case 0x32fdacu: goto label_32fdac;
        case 0x32fdb0u: goto label_32fdb0;
        case 0x32fdb4u: goto label_32fdb4;
        case 0x32fdb8u: goto label_32fdb8;
        case 0x32fdbcu: goto label_32fdbc;
        case 0x32fdc0u: goto label_32fdc0;
        case 0x32fdc4u: goto label_32fdc4;
        case 0x32fdc8u: goto label_32fdc8;
        case 0x32fdccu: goto label_32fdcc;
        case 0x32fdd0u: goto label_32fdd0;
        case 0x32fdd4u: goto label_32fdd4;
        case 0x32fdd8u: goto label_32fdd8;
        case 0x32fddcu: goto label_32fddc;
        case 0x32fde0u: goto label_32fde0;
        case 0x32fde4u: goto label_32fde4;
        case 0x32fde8u: goto label_32fde8;
        case 0x32fdecu: goto label_32fdec;
        case 0x32fdf0u: goto label_32fdf0;
        case 0x32fdf4u: goto label_32fdf4;
        case 0x32fdf8u: goto label_32fdf8;
        case 0x32fdfcu: goto label_32fdfc;
        case 0x32fe00u: goto label_32fe00;
        case 0x32fe04u: goto label_32fe04;
        case 0x32fe08u: goto label_32fe08;
        case 0x32fe0cu: goto label_32fe0c;
        case 0x32fe10u: goto label_32fe10;
        case 0x32fe14u: goto label_32fe14;
        case 0x32fe18u: goto label_32fe18;
        case 0x32fe1cu: goto label_32fe1c;
        case 0x32fe20u: goto label_32fe20;
        case 0x32fe24u: goto label_32fe24;
        case 0x32fe28u: goto label_32fe28;
        case 0x32fe2cu: goto label_32fe2c;
        case 0x32fe30u: goto label_32fe30;
        case 0x32fe34u: goto label_32fe34;
        case 0x32fe38u: goto label_32fe38;
        case 0x32fe3cu: goto label_32fe3c;
        case 0x32fe40u: goto label_32fe40;
        case 0x32fe44u: goto label_32fe44;
        case 0x32fe48u: goto label_32fe48;
        case 0x32fe4cu: goto label_32fe4c;
        case 0x32fe50u: goto label_32fe50;
        case 0x32fe54u: goto label_32fe54;
        case 0x32fe58u: goto label_32fe58;
        case 0x32fe5cu: goto label_32fe5c;
        case 0x32fe60u: goto label_32fe60;
        case 0x32fe64u: goto label_32fe64;
        case 0x32fe68u: goto label_32fe68;
        case 0x32fe6cu: goto label_32fe6c;
        case 0x32fe70u: goto label_32fe70;
        case 0x32fe74u: goto label_32fe74;
        case 0x32fe78u: goto label_32fe78;
        case 0x32fe7cu: goto label_32fe7c;
        case 0x32fe80u: goto label_32fe80;
        case 0x32fe84u: goto label_32fe84;
        case 0x32fe88u: goto label_32fe88;
        case 0x32fe8cu: goto label_32fe8c;
        case 0x32fe90u: goto label_32fe90;
        case 0x32fe94u: goto label_32fe94;
        case 0x32fe98u: goto label_32fe98;
        case 0x32fe9cu: goto label_32fe9c;
        case 0x32fea0u: goto label_32fea0;
        case 0x32fea4u: goto label_32fea4;
        case 0x32fea8u: goto label_32fea8;
        case 0x32feacu: goto label_32feac;
        case 0x32feb0u: goto label_32feb0;
        case 0x32feb4u: goto label_32feb4;
        case 0x32feb8u: goto label_32feb8;
        case 0x32febcu: goto label_32febc;
        case 0x32fec0u: goto label_32fec0;
        case 0x32fec4u: goto label_32fec4;
        case 0x32fec8u: goto label_32fec8;
        case 0x32feccu: goto label_32fecc;
        case 0x32fed0u: goto label_32fed0;
        case 0x32fed4u: goto label_32fed4;
        case 0x32fed8u: goto label_32fed8;
        case 0x32fedcu: goto label_32fedc;
        case 0x32fee0u: goto label_32fee0;
        case 0x32fee4u: goto label_32fee4;
        case 0x32fee8u: goto label_32fee8;
        case 0x32feecu: goto label_32feec;
        case 0x32fef0u: goto label_32fef0;
        case 0x32fef4u: goto label_32fef4;
        case 0x32fef8u: goto label_32fef8;
        case 0x32fefcu: goto label_32fefc;
        case 0x32ff00u: goto label_32ff00;
        case 0x32ff04u: goto label_32ff04;
        case 0x32ff08u: goto label_32ff08;
        case 0x32ff0cu: goto label_32ff0c;
        case 0x32ff10u: goto label_32ff10;
        case 0x32ff14u: goto label_32ff14;
        case 0x32ff18u: goto label_32ff18;
        case 0x32ff1cu: goto label_32ff1c;
        case 0x32ff20u: goto label_32ff20;
        case 0x32ff24u: goto label_32ff24;
        case 0x32ff28u: goto label_32ff28;
        case 0x32ff2cu: goto label_32ff2c;
        case 0x32ff30u: goto label_32ff30;
        case 0x32ff34u: goto label_32ff34;
        case 0x32ff38u: goto label_32ff38;
        case 0x32ff3cu: goto label_32ff3c;
        case 0x32ff40u: goto label_32ff40;
        case 0x32ff44u: goto label_32ff44;
        case 0x32ff48u: goto label_32ff48;
        case 0x32ff4cu: goto label_32ff4c;
        case 0x32ff50u: goto label_32ff50;
        case 0x32ff54u: goto label_32ff54;
        case 0x32ff58u: goto label_32ff58;
        case 0x32ff5cu: goto label_32ff5c;
        case 0x32ff60u: goto label_32ff60;
        case 0x32ff64u: goto label_32ff64;
        case 0x32ff68u: goto label_32ff68;
        case 0x32ff6cu: goto label_32ff6c;
        case 0x32ff70u: goto label_32ff70;
        case 0x32ff74u: goto label_32ff74;
        case 0x32ff78u: goto label_32ff78;
        case 0x32ff7cu: goto label_32ff7c;
        case 0x32ff80u: goto label_32ff80;
        case 0x32ff84u: goto label_32ff84;
        case 0x32ff88u: goto label_32ff88;
        case 0x32ff8cu: goto label_32ff8c;
        case 0x32ff90u: goto label_32ff90;
        case 0x32ff94u: goto label_32ff94;
        case 0x32ff98u: goto label_32ff98;
        case 0x32ff9cu: goto label_32ff9c;
        case 0x32ffa0u: goto label_32ffa0;
        case 0x32ffa4u: goto label_32ffa4;
        case 0x32ffa8u: goto label_32ffa8;
        case 0x32ffacu: goto label_32ffac;
        case 0x32ffb0u: goto label_32ffb0;
        case 0x32ffb4u: goto label_32ffb4;
        case 0x32ffb8u: goto label_32ffb8;
        case 0x32ffbcu: goto label_32ffbc;
        case 0x32ffc0u: goto label_32ffc0;
        case 0x32ffc4u: goto label_32ffc4;
        case 0x32ffc8u: goto label_32ffc8;
        case 0x32ffccu: goto label_32ffcc;
        case 0x32ffd0u: goto label_32ffd0;
        case 0x32ffd4u: goto label_32ffd4;
        case 0x32ffd8u: goto label_32ffd8;
        case 0x32ffdcu: goto label_32ffdc;
        case 0x32ffe0u: goto label_32ffe0;
        case 0x32ffe4u: goto label_32ffe4;
        case 0x32ffe8u: goto label_32ffe8;
        case 0x32ffecu: goto label_32ffec;
        case 0x32fff0u: goto label_32fff0;
        case 0x32fff4u: goto label_32fff4;
        case 0x32fff8u: goto label_32fff8;
        case 0x32fffcu: goto label_32fffc;
        case 0x330000u: goto label_330000;
        case 0x330004u: goto label_330004;
        case 0x330008u: goto label_330008;
        case 0x33000cu: goto label_33000c;
        case 0x330010u: goto label_330010;
        case 0x330014u: goto label_330014;
        case 0x330018u: goto label_330018;
        case 0x33001cu: goto label_33001c;
        case 0x330020u: goto label_330020;
        case 0x330024u: goto label_330024;
        case 0x330028u: goto label_330028;
        case 0x33002cu: goto label_33002c;
        case 0x330030u: goto label_330030;
        case 0x330034u: goto label_330034;
        case 0x330038u: goto label_330038;
        case 0x33003cu: goto label_33003c;
        case 0x330040u: goto label_330040;
        case 0x330044u: goto label_330044;
        case 0x330048u: goto label_330048;
        case 0x33004cu: goto label_33004c;
        case 0x330050u: goto label_330050;
        case 0x330054u: goto label_330054;
        case 0x330058u: goto label_330058;
        case 0x33005cu: goto label_33005c;
        case 0x330060u: goto label_330060;
        case 0x330064u: goto label_330064;
        case 0x330068u: goto label_330068;
        case 0x33006cu: goto label_33006c;
        case 0x330070u: goto label_330070;
        case 0x330074u: goto label_330074;
        case 0x330078u: goto label_330078;
        case 0x33007cu: goto label_33007c;
        case 0x330080u: goto label_330080;
        case 0x330084u: goto label_330084;
        case 0x330088u: goto label_330088;
        case 0x33008cu: goto label_33008c;
        case 0x330090u: goto label_330090;
        case 0x330094u: goto label_330094;
        case 0x330098u: goto label_330098;
        case 0x33009cu: goto label_33009c;
        case 0x3300a0u: goto label_3300a0;
        case 0x3300a4u: goto label_3300a4;
        case 0x3300a8u: goto label_3300a8;
        case 0x3300acu: goto label_3300ac;
        case 0x3300b0u: goto label_3300b0;
        case 0x3300b4u: goto label_3300b4;
        case 0x3300b8u: goto label_3300b8;
        case 0x3300bcu: goto label_3300bc;
        case 0x3300c0u: goto label_3300c0;
        case 0x3300c4u: goto label_3300c4;
        case 0x3300c8u: goto label_3300c8;
        case 0x3300ccu: goto label_3300cc;
        case 0x3300d0u: goto label_3300d0;
        case 0x3300d4u: goto label_3300d4;
        case 0x3300d8u: goto label_3300d8;
        case 0x3300dcu: goto label_3300dc;
        case 0x3300e0u: goto label_3300e0;
        case 0x3300e4u: goto label_3300e4;
        case 0x3300e8u: goto label_3300e8;
        case 0x3300ecu: goto label_3300ec;
        case 0x3300f0u: goto label_3300f0;
        case 0x3300f4u: goto label_3300f4;
        case 0x3300f8u: goto label_3300f8;
        case 0x3300fcu: goto label_3300fc;
        case 0x330100u: goto label_330100;
        case 0x330104u: goto label_330104;
        case 0x330108u: goto label_330108;
        case 0x33010cu: goto label_33010c;
        case 0x330110u: goto label_330110;
        case 0x330114u: goto label_330114;
        case 0x330118u: goto label_330118;
        case 0x33011cu: goto label_33011c;
        case 0x330120u: goto label_330120;
        case 0x330124u: goto label_330124;
        case 0x330128u: goto label_330128;
        case 0x33012cu: goto label_33012c;
        case 0x330130u: goto label_330130;
        case 0x330134u: goto label_330134;
        case 0x330138u: goto label_330138;
        case 0x33013cu: goto label_33013c;
        case 0x330140u: goto label_330140;
        case 0x330144u: goto label_330144;
        case 0x330148u: goto label_330148;
        case 0x33014cu: goto label_33014c;
        case 0x330150u: goto label_330150;
        case 0x330154u: goto label_330154;
        case 0x330158u: goto label_330158;
        case 0x33015cu: goto label_33015c;
        case 0x330160u: goto label_330160;
        case 0x330164u: goto label_330164;
        case 0x330168u: goto label_330168;
        case 0x33016cu: goto label_33016c;
        case 0x330170u: goto label_330170;
        case 0x330174u: goto label_330174;
        case 0x330178u: goto label_330178;
        case 0x33017cu: goto label_33017c;
        case 0x330180u: goto label_330180;
        case 0x330184u: goto label_330184;
        case 0x330188u: goto label_330188;
        case 0x33018cu: goto label_33018c;
        case 0x330190u: goto label_330190;
        case 0x330194u: goto label_330194;
        case 0x330198u: goto label_330198;
        case 0x33019cu: goto label_33019c;
        case 0x3301a0u: goto label_3301a0;
        case 0x3301a4u: goto label_3301a4;
        case 0x3301a8u: goto label_3301a8;
        case 0x3301acu: goto label_3301ac;
        case 0x3301b0u: goto label_3301b0;
        case 0x3301b4u: goto label_3301b4;
        case 0x3301b8u: goto label_3301b8;
        case 0x3301bcu: goto label_3301bc;
        case 0x3301c0u: goto label_3301c0;
        case 0x3301c4u: goto label_3301c4;
        case 0x3301c8u: goto label_3301c8;
        case 0x3301ccu: goto label_3301cc;
        case 0x3301d0u: goto label_3301d0;
        case 0x3301d4u: goto label_3301d4;
        case 0x3301d8u: goto label_3301d8;
        case 0x3301dcu: goto label_3301dc;
        case 0x3301e0u: goto label_3301e0;
        case 0x3301e4u: goto label_3301e4;
        case 0x3301e8u: goto label_3301e8;
        case 0x3301ecu: goto label_3301ec;
        case 0x3301f0u: goto label_3301f0;
        case 0x3301f4u: goto label_3301f4;
        case 0x3301f8u: goto label_3301f8;
        case 0x3301fcu: goto label_3301fc;
        case 0x330200u: goto label_330200;
        case 0x330204u: goto label_330204;
        case 0x330208u: goto label_330208;
        case 0x33020cu: goto label_33020c;
        case 0x330210u: goto label_330210;
        case 0x330214u: goto label_330214;
        case 0x330218u: goto label_330218;
        case 0x33021cu: goto label_33021c;
        case 0x330220u: goto label_330220;
        case 0x330224u: goto label_330224;
        case 0x330228u: goto label_330228;
        case 0x33022cu: goto label_33022c;
        case 0x330230u: goto label_330230;
        case 0x330234u: goto label_330234;
        case 0x330238u: goto label_330238;
        case 0x33023cu: goto label_33023c;
        case 0x330240u: goto label_330240;
        case 0x330244u: goto label_330244;
        case 0x330248u: goto label_330248;
        case 0x33024cu: goto label_33024c;
        case 0x330250u: goto label_330250;
        case 0x330254u: goto label_330254;
        case 0x330258u: goto label_330258;
        case 0x33025cu: goto label_33025c;
        case 0x330260u: goto label_330260;
        case 0x330264u: goto label_330264;
        case 0x330268u: goto label_330268;
        case 0x33026cu: goto label_33026c;
        case 0x330270u: goto label_330270;
        case 0x330274u: goto label_330274;
        case 0x330278u: goto label_330278;
        case 0x33027cu: goto label_33027c;
        case 0x330280u: goto label_330280;
        case 0x330284u: goto label_330284;
        case 0x330288u: goto label_330288;
        case 0x33028cu: goto label_33028c;
        case 0x330290u: goto label_330290;
        case 0x330294u: goto label_330294;
        case 0x330298u: goto label_330298;
        case 0x33029cu: goto label_33029c;
        case 0x3302a0u: goto label_3302a0;
        case 0x3302a4u: goto label_3302a4;
        case 0x3302a8u: goto label_3302a8;
        case 0x3302acu: goto label_3302ac;
        case 0x3302b0u: goto label_3302b0;
        case 0x3302b4u: goto label_3302b4;
        case 0x3302b8u: goto label_3302b8;
        case 0x3302bcu: goto label_3302bc;
        case 0x3302c0u: goto label_3302c0;
        case 0x3302c4u: goto label_3302c4;
        case 0x3302c8u: goto label_3302c8;
        case 0x3302ccu: goto label_3302cc;
        case 0x3302d0u: goto label_3302d0;
        case 0x3302d4u: goto label_3302d4;
        case 0x3302d8u: goto label_3302d8;
        case 0x3302dcu: goto label_3302dc;
        case 0x3302e0u: goto label_3302e0;
        case 0x3302e4u: goto label_3302e4;
        case 0x3302e8u: goto label_3302e8;
        case 0x3302ecu: goto label_3302ec;
        case 0x3302f0u: goto label_3302f0;
        case 0x3302f4u: goto label_3302f4;
        case 0x3302f8u: goto label_3302f8;
        case 0x3302fcu: goto label_3302fc;
        case 0x330300u: goto label_330300;
        case 0x330304u: goto label_330304;
        case 0x330308u: goto label_330308;
        case 0x33030cu: goto label_33030c;
        case 0x330310u: goto label_330310;
        case 0x330314u: goto label_330314;
        case 0x330318u: goto label_330318;
        case 0x33031cu: goto label_33031c;
        case 0x330320u: goto label_330320;
        case 0x330324u: goto label_330324;
        case 0x330328u: goto label_330328;
        case 0x33032cu: goto label_33032c;
        case 0x330330u: goto label_330330;
        case 0x330334u: goto label_330334;
        case 0x330338u: goto label_330338;
        case 0x33033cu: goto label_33033c;
        case 0x330340u: goto label_330340;
        case 0x330344u: goto label_330344;
        case 0x330348u: goto label_330348;
        case 0x33034cu: goto label_33034c;
        case 0x330350u: goto label_330350;
        case 0x330354u: goto label_330354;
        case 0x330358u: goto label_330358;
        case 0x33035cu: goto label_33035c;
        case 0x330360u: goto label_330360;
        case 0x330364u: goto label_330364;
        case 0x330368u: goto label_330368;
        case 0x33036cu: goto label_33036c;
        case 0x330370u: goto label_330370;
        case 0x330374u: goto label_330374;
        case 0x330378u: goto label_330378;
        case 0x33037cu: goto label_33037c;
        case 0x330380u: goto label_330380;
        case 0x330384u: goto label_330384;
        case 0x330388u: goto label_330388;
        case 0x33038cu: goto label_33038c;
        case 0x330390u: goto label_330390;
        case 0x330394u: goto label_330394;
        case 0x330398u: goto label_330398;
        case 0x33039cu: goto label_33039c;
        case 0x3303a0u: goto label_3303a0;
        case 0x3303a4u: goto label_3303a4;
        case 0x3303a8u: goto label_3303a8;
        case 0x3303acu: goto label_3303ac;
        case 0x3303b0u: goto label_3303b0;
        case 0x3303b4u: goto label_3303b4;
        case 0x3303b8u: goto label_3303b8;
        case 0x3303bcu: goto label_3303bc;
        case 0x3303c0u: goto label_3303c0;
        case 0x3303c4u: goto label_3303c4;
        case 0x3303c8u: goto label_3303c8;
        case 0x3303ccu: goto label_3303cc;
        case 0x3303d0u: goto label_3303d0;
        case 0x3303d4u: goto label_3303d4;
        case 0x3303d8u: goto label_3303d8;
        case 0x3303dcu: goto label_3303dc;
        case 0x3303e0u: goto label_3303e0;
        case 0x3303e4u: goto label_3303e4;
        case 0x3303e8u: goto label_3303e8;
        case 0x3303ecu: goto label_3303ec;
        case 0x3303f0u: goto label_3303f0;
        case 0x3303f4u: goto label_3303f4;
        case 0x3303f8u: goto label_3303f8;
        case 0x3303fcu: goto label_3303fc;
        case 0x330400u: goto label_330400;
        case 0x330404u: goto label_330404;
        case 0x330408u: goto label_330408;
        case 0x33040cu: goto label_33040c;
        case 0x330410u: goto label_330410;
        case 0x330414u: goto label_330414;
        case 0x330418u: goto label_330418;
        case 0x33041cu: goto label_33041c;
        case 0x330420u: goto label_330420;
        case 0x330424u: goto label_330424;
        case 0x330428u: goto label_330428;
        case 0x33042cu: goto label_33042c;
        case 0x330430u: goto label_330430;
        case 0x330434u: goto label_330434;
        case 0x330438u: goto label_330438;
        case 0x33043cu: goto label_33043c;
        case 0x330440u: goto label_330440;
        case 0x330444u: goto label_330444;
        case 0x330448u: goto label_330448;
        case 0x33044cu: goto label_33044c;
        case 0x330450u: goto label_330450;
        case 0x330454u: goto label_330454;
        case 0x330458u: goto label_330458;
        case 0x33045cu: goto label_33045c;
        case 0x330460u: goto label_330460;
        case 0x330464u: goto label_330464;
        case 0x330468u: goto label_330468;
        case 0x33046cu: goto label_33046c;
        case 0x330470u: goto label_330470;
        case 0x330474u: goto label_330474;
        case 0x330478u: goto label_330478;
        case 0x33047cu: goto label_33047c;
        case 0x330480u: goto label_330480;
        case 0x330484u: goto label_330484;
        case 0x330488u: goto label_330488;
        case 0x33048cu: goto label_33048c;
        case 0x330490u: goto label_330490;
        case 0x330494u: goto label_330494;
        case 0x330498u: goto label_330498;
        case 0x33049cu: goto label_33049c;
        case 0x3304a0u: goto label_3304a0;
        case 0x3304a4u: goto label_3304a4;
        case 0x3304a8u: goto label_3304a8;
        case 0x3304acu: goto label_3304ac;
        case 0x3304b0u: goto label_3304b0;
        case 0x3304b4u: goto label_3304b4;
        case 0x3304b8u: goto label_3304b8;
        case 0x3304bcu: goto label_3304bc;
        case 0x3304c0u: goto label_3304c0;
        case 0x3304c4u: goto label_3304c4;
        case 0x3304c8u: goto label_3304c8;
        case 0x3304ccu: goto label_3304cc;
        case 0x3304d0u: goto label_3304d0;
        case 0x3304d4u: goto label_3304d4;
        case 0x3304d8u: goto label_3304d8;
        case 0x3304dcu: goto label_3304dc;
        case 0x3304e0u: goto label_3304e0;
        case 0x3304e4u: goto label_3304e4;
        case 0x3304e8u: goto label_3304e8;
        case 0x3304ecu: goto label_3304ec;
        case 0x3304f0u: goto label_3304f0;
        case 0x3304f4u: goto label_3304f4;
        case 0x3304f8u: goto label_3304f8;
        case 0x3304fcu: goto label_3304fc;
        case 0x330500u: goto label_330500;
        case 0x330504u: goto label_330504;
        case 0x330508u: goto label_330508;
        case 0x33050cu: goto label_33050c;
        case 0x330510u: goto label_330510;
        case 0x330514u: goto label_330514;
        case 0x330518u: goto label_330518;
        case 0x33051cu: goto label_33051c;
        case 0x330520u: goto label_330520;
        case 0x330524u: goto label_330524;
        case 0x330528u: goto label_330528;
        case 0x33052cu: goto label_33052c;
        case 0x330530u: goto label_330530;
        case 0x330534u: goto label_330534;
        case 0x330538u: goto label_330538;
        case 0x33053cu: goto label_33053c;
        case 0x330540u: goto label_330540;
        case 0x330544u: goto label_330544;
        case 0x330548u: goto label_330548;
        case 0x33054cu: goto label_33054c;
        case 0x330550u: goto label_330550;
        case 0x330554u: goto label_330554;
        case 0x330558u: goto label_330558;
        case 0x33055cu: goto label_33055c;
        case 0x330560u: goto label_330560;
        case 0x330564u: goto label_330564;
        case 0x330568u: goto label_330568;
        case 0x33056cu: goto label_33056c;
        case 0x330570u: goto label_330570;
        case 0x330574u: goto label_330574;
        case 0x330578u: goto label_330578;
        case 0x33057cu: goto label_33057c;
        case 0x330580u: goto label_330580;
        case 0x330584u: goto label_330584;
        case 0x330588u: goto label_330588;
        case 0x33058cu: goto label_33058c;
        case 0x330590u: goto label_330590;
        case 0x330594u: goto label_330594;
        case 0x330598u: goto label_330598;
        case 0x33059cu: goto label_33059c;
        case 0x3305a0u: goto label_3305a0;
        case 0x3305a4u: goto label_3305a4;
        case 0x3305a8u: goto label_3305a8;
        case 0x3305acu: goto label_3305ac;
        case 0x3305b0u: goto label_3305b0;
        case 0x3305b4u: goto label_3305b4;
        case 0x3305b8u: goto label_3305b8;
        case 0x3305bcu: goto label_3305bc;
        case 0x3305c0u: goto label_3305c0;
        case 0x3305c4u: goto label_3305c4;
        case 0x3305c8u: goto label_3305c8;
        case 0x3305ccu: goto label_3305cc;
        case 0x3305d0u: goto label_3305d0;
        case 0x3305d4u: goto label_3305d4;
        case 0x3305d8u: goto label_3305d8;
        case 0x3305dcu: goto label_3305dc;
        case 0x3305e0u: goto label_3305e0;
        case 0x3305e4u: goto label_3305e4;
        case 0x3305e8u: goto label_3305e8;
        case 0x3305ecu: goto label_3305ec;
        case 0x3305f0u: goto label_3305f0;
        case 0x3305f4u: goto label_3305f4;
        case 0x3305f8u: goto label_3305f8;
        case 0x3305fcu: goto label_3305fc;
        case 0x330600u: goto label_330600;
        case 0x330604u: goto label_330604;
        case 0x330608u: goto label_330608;
        case 0x33060cu: goto label_33060c;
        case 0x330610u: goto label_330610;
        case 0x330614u: goto label_330614;
        case 0x330618u: goto label_330618;
        case 0x33061cu: goto label_33061c;
        case 0x330620u: goto label_330620;
        case 0x330624u: goto label_330624;
        case 0x330628u: goto label_330628;
        case 0x33062cu: goto label_33062c;
        case 0x330630u: goto label_330630;
        case 0x330634u: goto label_330634;
        case 0x330638u: goto label_330638;
        case 0x33063cu: goto label_33063c;
        case 0x330640u: goto label_330640;
        case 0x330644u: goto label_330644;
        case 0x330648u: goto label_330648;
        case 0x33064cu: goto label_33064c;
        case 0x330650u: goto label_330650;
        case 0x330654u: goto label_330654;
        case 0x330658u: goto label_330658;
        case 0x33065cu: goto label_33065c;
        case 0x330660u: goto label_330660;
        case 0x330664u: goto label_330664;
        case 0x330668u: goto label_330668;
        case 0x33066cu: goto label_33066c;
        case 0x330670u: goto label_330670;
        case 0x330674u: goto label_330674;
        case 0x330678u: goto label_330678;
        case 0x33067cu: goto label_33067c;
        case 0x330680u: goto label_330680;
        case 0x330684u: goto label_330684;
        case 0x330688u: goto label_330688;
        case 0x33068cu: goto label_33068c;
        case 0x330690u: goto label_330690;
        case 0x330694u: goto label_330694;
        case 0x330698u: goto label_330698;
        case 0x33069cu: goto label_33069c;
        case 0x3306a0u: goto label_3306a0;
        case 0x3306a4u: goto label_3306a4;
        case 0x3306a8u: goto label_3306a8;
        case 0x3306acu: goto label_3306ac;
        case 0x3306b0u: goto label_3306b0;
        case 0x3306b4u: goto label_3306b4;
        case 0x3306b8u: goto label_3306b8;
        case 0x3306bcu: goto label_3306bc;
        case 0x3306c0u: goto label_3306c0;
        case 0x3306c4u: goto label_3306c4;
        case 0x3306c8u: goto label_3306c8;
        case 0x3306ccu: goto label_3306cc;
        case 0x3306d0u: goto label_3306d0;
        case 0x3306d4u: goto label_3306d4;
        case 0x3306d8u: goto label_3306d8;
        case 0x3306dcu: goto label_3306dc;
        case 0x3306e0u: goto label_3306e0;
        case 0x3306e4u: goto label_3306e4;
        case 0x3306e8u: goto label_3306e8;
        case 0x3306ecu: goto label_3306ec;
        case 0x3306f0u: goto label_3306f0;
        case 0x3306f4u: goto label_3306f4;
        case 0x3306f8u: goto label_3306f8;
        case 0x3306fcu: goto label_3306fc;
        case 0x330700u: goto label_330700;
        case 0x330704u: goto label_330704;
        case 0x330708u: goto label_330708;
        case 0x33070cu: goto label_33070c;
        case 0x330710u: goto label_330710;
        case 0x330714u: goto label_330714;
        case 0x330718u: goto label_330718;
        case 0x33071cu: goto label_33071c;
        case 0x330720u: goto label_330720;
        case 0x330724u: goto label_330724;
        case 0x330728u: goto label_330728;
        case 0x33072cu: goto label_33072c;
        case 0x330730u: goto label_330730;
        case 0x330734u: goto label_330734;
        case 0x330738u: goto label_330738;
        case 0x33073cu: goto label_33073c;
        case 0x330740u: goto label_330740;
        case 0x330744u: goto label_330744;
        case 0x330748u: goto label_330748;
        case 0x33074cu: goto label_33074c;
        case 0x330750u: goto label_330750;
        case 0x330754u: goto label_330754;
        case 0x330758u: goto label_330758;
        case 0x33075cu: goto label_33075c;
        case 0x330760u: goto label_330760;
        case 0x330764u: goto label_330764;
        case 0x330768u: goto label_330768;
        case 0x33076cu: goto label_33076c;
        case 0x330770u: goto label_330770;
        case 0x330774u: goto label_330774;
        case 0x330778u: goto label_330778;
        case 0x33077cu: goto label_33077c;
        case 0x330780u: goto label_330780;
        case 0x330784u: goto label_330784;
        case 0x330788u: goto label_330788;
        case 0x33078cu: goto label_33078c;
        case 0x330790u: goto label_330790;
        case 0x330794u: goto label_330794;
        case 0x330798u: goto label_330798;
        case 0x33079cu: goto label_33079c;
        case 0x3307a0u: goto label_3307a0;
        case 0x3307a4u: goto label_3307a4;
        case 0x3307a8u: goto label_3307a8;
        case 0x3307acu: goto label_3307ac;
        case 0x3307b0u: goto label_3307b0;
        case 0x3307b4u: goto label_3307b4;
        case 0x3307b8u: goto label_3307b8;
        case 0x3307bcu: goto label_3307bc;
        case 0x3307c0u: goto label_3307c0;
        case 0x3307c4u: goto label_3307c4;
        case 0x3307c8u: goto label_3307c8;
        case 0x3307ccu: goto label_3307cc;
        case 0x3307d0u: goto label_3307d0;
        case 0x3307d4u: goto label_3307d4;
        case 0x3307d8u: goto label_3307d8;
        case 0x3307dcu: goto label_3307dc;
        case 0x3307e0u: goto label_3307e0;
        case 0x3307e4u: goto label_3307e4;
        case 0x3307e8u: goto label_3307e8;
        case 0x3307ecu: goto label_3307ec;
        case 0x3307f0u: goto label_3307f0;
        case 0x3307f4u: goto label_3307f4;
        case 0x3307f8u: goto label_3307f8;
        case 0x3307fcu: goto label_3307fc;
        case 0x330800u: goto label_330800;
        case 0x330804u: goto label_330804;
        case 0x330808u: goto label_330808;
        case 0x33080cu: goto label_33080c;
        case 0x330810u: goto label_330810;
        case 0x330814u: goto label_330814;
        case 0x330818u: goto label_330818;
        case 0x33081cu: goto label_33081c;
        case 0x330820u: goto label_330820;
        case 0x330824u: goto label_330824;
        case 0x330828u: goto label_330828;
        case 0x33082cu: goto label_33082c;
        case 0x330830u: goto label_330830;
        case 0x330834u: goto label_330834;
        case 0x330838u: goto label_330838;
        case 0x33083cu: goto label_33083c;
        case 0x330840u: goto label_330840;
        case 0x330844u: goto label_330844;
        case 0x330848u: goto label_330848;
        case 0x33084cu: goto label_33084c;
        case 0x330850u: goto label_330850;
        case 0x330854u: goto label_330854;
        case 0x330858u: goto label_330858;
        case 0x33085cu: goto label_33085c;
        case 0x330860u: goto label_330860;
        case 0x330864u: goto label_330864;
        case 0x330868u: goto label_330868;
        case 0x33086cu: goto label_33086c;
        case 0x330870u: goto label_330870;
        case 0x330874u: goto label_330874;
        case 0x330878u: goto label_330878;
        case 0x33087cu: goto label_33087c;
        case 0x330880u: goto label_330880;
        case 0x330884u: goto label_330884;
        case 0x330888u: goto label_330888;
        case 0x33088cu: goto label_33088c;
        case 0x330890u: goto label_330890;
        case 0x330894u: goto label_330894;
        case 0x330898u: goto label_330898;
        case 0x33089cu: goto label_33089c;
        case 0x3308a0u: goto label_3308a0;
        case 0x3308a4u: goto label_3308a4;
        case 0x3308a8u: goto label_3308a8;
        case 0x3308acu: goto label_3308ac;
        case 0x3308b0u: goto label_3308b0;
        case 0x3308b4u: goto label_3308b4;
        case 0x3308b8u: goto label_3308b8;
        case 0x3308bcu: goto label_3308bc;
        case 0x3308c0u: goto label_3308c0;
        case 0x3308c4u: goto label_3308c4;
        case 0x3308c8u: goto label_3308c8;
        case 0x3308ccu: goto label_3308cc;
        case 0x3308d0u: goto label_3308d0;
        case 0x3308d4u: goto label_3308d4;
        case 0x3308d8u: goto label_3308d8;
        case 0x3308dcu: goto label_3308dc;
        case 0x3308e0u: goto label_3308e0;
        case 0x3308e4u: goto label_3308e4;
        case 0x3308e8u: goto label_3308e8;
        case 0x3308ecu: goto label_3308ec;
        case 0x3308f0u: goto label_3308f0;
        case 0x3308f4u: goto label_3308f4;
        case 0x3308f8u: goto label_3308f8;
        case 0x3308fcu: goto label_3308fc;
        case 0x330900u: goto label_330900;
        case 0x330904u: goto label_330904;
        case 0x330908u: goto label_330908;
        case 0x33090cu: goto label_33090c;
        case 0x330910u: goto label_330910;
        case 0x330914u: goto label_330914;
        case 0x330918u: goto label_330918;
        case 0x33091cu: goto label_33091c;
        case 0x330920u: goto label_330920;
        case 0x330924u: goto label_330924;
        case 0x330928u: goto label_330928;
        case 0x33092cu: goto label_33092c;
        case 0x330930u: goto label_330930;
        case 0x330934u: goto label_330934;
        case 0x330938u: goto label_330938;
        case 0x33093cu: goto label_33093c;
        case 0x330940u: goto label_330940;
        case 0x330944u: goto label_330944;
        case 0x330948u: goto label_330948;
        case 0x33094cu: goto label_33094c;
        case 0x330950u: goto label_330950;
        case 0x330954u: goto label_330954;
        case 0x330958u: goto label_330958;
        case 0x33095cu: goto label_33095c;
        case 0x330960u: goto label_330960;
        case 0x330964u: goto label_330964;
        case 0x330968u: goto label_330968;
        case 0x33096cu: goto label_33096c;
        case 0x330970u: goto label_330970;
        case 0x330974u: goto label_330974;
        case 0x330978u: goto label_330978;
        case 0x33097cu: goto label_33097c;
        case 0x330980u: goto label_330980;
        case 0x330984u: goto label_330984;
        case 0x330988u: goto label_330988;
        case 0x33098cu: goto label_33098c;
        case 0x330990u: goto label_330990;
        case 0x330994u: goto label_330994;
        case 0x330998u: goto label_330998;
        case 0x33099cu: goto label_33099c;
        case 0x3309a0u: goto label_3309a0;
        case 0x3309a4u: goto label_3309a4;
        case 0x3309a8u: goto label_3309a8;
        case 0x3309acu: goto label_3309ac;
        case 0x3309b0u: goto label_3309b0;
        case 0x3309b4u: goto label_3309b4;
        case 0x3309b8u: goto label_3309b8;
        case 0x3309bcu: goto label_3309bc;
        case 0x3309c0u: goto label_3309c0;
        case 0x3309c4u: goto label_3309c4;
        case 0x3309c8u: goto label_3309c8;
        case 0x3309ccu: goto label_3309cc;
        case 0x3309d0u: goto label_3309d0;
        case 0x3309d4u: goto label_3309d4;
        case 0x3309d8u: goto label_3309d8;
        case 0x3309dcu: goto label_3309dc;
        case 0x3309e0u: goto label_3309e0;
        case 0x3309e4u: goto label_3309e4;
        case 0x3309e8u: goto label_3309e8;
        case 0x3309ecu: goto label_3309ec;
        case 0x3309f0u: goto label_3309f0;
        case 0x3309f4u: goto label_3309f4;
        case 0x3309f8u: goto label_3309f8;
        case 0x3309fcu: goto label_3309fc;
        case 0x330a00u: goto label_330a00;
        case 0x330a04u: goto label_330a04;
        case 0x330a08u: goto label_330a08;
        case 0x330a0cu: goto label_330a0c;
        case 0x330a10u: goto label_330a10;
        case 0x330a14u: goto label_330a14;
        case 0x330a18u: goto label_330a18;
        case 0x330a1cu: goto label_330a1c;
        case 0x330a20u: goto label_330a20;
        case 0x330a24u: goto label_330a24;
        case 0x330a28u: goto label_330a28;
        case 0x330a2cu: goto label_330a2c;
        case 0x330a30u: goto label_330a30;
        case 0x330a34u: goto label_330a34;
        case 0x330a38u: goto label_330a38;
        case 0x330a3cu: goto label_330a3c;
        case 0x330a40u: goto label_330a40;
        case 0x330a44u: goto label_330a44;
        case 0x330a48u: goto label_330a48;
        case 0x330a4cu: goto label_330a4c;
        case 0x330a50u: goto label_330a50;
        case 0x330a54u: goto label_330a54;
        case 0x330a58u: goto label_330a58;
        case 0x330a5cu: goto label_330a5c;
        case 0x330a60u: goto label_330a60;
        case 0x330a64u: goto label_330a64;
        case 0x330a68u: goto label_330a68;
        case 0x330a6cu: goto label_330a6c;
        case 0x330a70u: goto label_330a70;
        case 0x330a74u: goto label_330a74;
        case 0x330a78u: goto label_330a78;
        case 0x330a7cu: goto label_330a7c;
        case 0x330a80u: goto label_330a80;
        case 0x330a84u: goto label_330a84;
        case 0x330a88u: goto label_330a88;
        case 0x330a8cu: goto label_330a8c;
        case 0x330a90u: goto label_330a90;
        case 0x330a94u: goto label_330a94;
        case 0x330a98u: goto label_330a98;
        case 0x330a9cu: goto label_330a9c;
        case 0x330aa0u: goto label_330aa0;
        case 0x330aa4u: goto label_330aa4;
        case 0x330aa8u: goto label_330aa8;
        case 0x330aacu: goto label_330aac;
        case 0x330ab0u: goto label_330ab0;
        case 0x330ab4u: goto label_330ab4;
        case 0x330ab8u: goto label_330ab8;
        case 0x330abcu: goto label_330abc;
        case 0x330ac0u: goto label_330ac0;
        case 0x330ac4u: goto label_330ac4;
        case 0x330ac8u: goto label_330ac8;
        case 0x330accu: goto label_330acc;
        case 0x330ad0u: goto label_330ad0;
        case 0x330ad4u: goto label_330ad4;
        case 0x330ad8u: goto label_330ad8;
        case 0x330adcu: goto label_330adc;
        case 0x330ae0u: goto label_330ae0;
        case 0x330ae4u: goto label_330ae4;
        case 0x330ae8u: goto label_330ae8;
        case 0x330aecu: goto label_330aec;
        case 0x330af0u: goto label_330af0;
        case 0x330af4u: goto label_330af4;
        case 0x330af8u: goto label_330af8;
        case 0x330afcu: goto label_330afc;
        case 0x330b00u: goto label_330b00;
        case 0x330b04u: goto label_330b04;
        case 0x330b08u: goto label_330b08;
        case 0x330b0cu: goto label_330b0c;
        case 0x330b10u: goto label_330b10;
        case 0x330b14u: goto label_330b14;
        case 0x330b18u: goto label_330b18;
        case 0x330b1cu: goto label_330b1c;
        case 0x330b20u: goto label_330b20;
        case 0x330b24u: goto label_330b24;
        case 0x330b28u: goto label_330b28;
        case 0x330b2cu: goto label_330b2c;
        case 0x330b30u: goto label_330b30;
        case 0x330b34u: goto label_330b34;
        case 0x330b38u: goto label_330b38;
        case 0x330b3cu: goto label_330b3c;
        case 0x330b40u: goto label_330b40;
        case 0x330b44u: goto label_330b44;
        case 0x330b48u: goto label_330b48;
        case 0x330b4cu: goto label_330b4c;
        case 0x330b50u: goto label_330b50;
        case 0x330b54u: goto label_330b54;
        case 0x330b58u: goto label_330b58;
        case 0x330b5cu: goto label_330b5c;
        case 0x330b60u: goto label_330b60;
        case 0x330b64u: goto label_330b64;
        case 0x330b68u: goto label_330b68;
        case 0x330b6cu: goto label_330b6c;
        case 0x330b70u: goto label_330b70;
        case 0x330b74u: goto label_330b74;
        case 0x330b78u: goto label_330b78;
        case 0x330b7cu: goto label_330b7c;
        case 0x330b80u: goto label_330b80;
        case 0x330b84u: goto label_330b84;
        case 0x330b88u: goto label_330b88;
        case 0x330b8cu: goto label_330b8c;
        case 0x330b90u: goto label_330b90;
        case 0x330b94u: goto label_330b94;
        case 0x330b98u: goto label_330b98;
        case 0x330b9cu: goto label_330b9c;
        case 0x330ba0u: goto label_330ba0;
        case 0x330ba4u: goto label_330ba4;
        case 0x330ba8u: goto label_330ba8;
        case 0x330bacu: goto label_330bac;
        case 0x330bb0u: goto label_330bb0;
        case 0x330bb4u: goto label_330bb4;
        case 0x330bb8u: goto label_330bb8;
        case 0x330bbcu: goto label_330bbc;
        case 0x330bc0u: goto label_330bc0;
        case 0x330bc4u: goto label_330bc4;
        case 0x330bc8u: goto label_330bc8;
        case 0x330bccu: goto label_330bcc;
        case 0x330bd0u: goto label_330bd0;
        case 0x330bd4u: goto label_330bd4;
        case 0x330bd8u: goto label_330bd8;
        case 0x330bdcu: goto label_330bdc;
        case 0x330be0u: goto label_330be0;
        case 0x330be4u: goto label_330be4;
        case 0x330be8u: goto label_330be8;
        case 0x330becu: goto label_330bec;
        case 0x330bf0u: goto label_330bf0;
        case 0x330bf4u: goto label_330bf4;
        case 0x330bf8u: goto label_330bf8;
        case 0x330bfcu: goto label_330bfc;
        case 0x330c00u: goto label_330c00;
        case 0x330c04u: goto label_330c04;
        case 0x330c08u: goto label_330c08;
        case 0x330c0cu: goto label_330c0c;
        case 0x330c10u: goto label_330c10;
        case 0x330c14u: goto label_330c14;
        case 0x330c18u: goto label_330c18;
        case 0x330c1cu: goto label_330c1c;
        case 0x330c20u: goto label_330c20;
        case 0x330c24u: goto label_330c24;
        case 0x330c28u: goto label_330c28;
        case 0x330c2cu: goto label_330c2c;
        case 0x330c30u: goto label_330c30;
        case 0x330c34u: goto label_330c34;
        case 0x330c38u: goto label_330c38;
        case 0x330c3cu: goto label_330c3c;
        case 0x330c40u: goto label_330c40;
        case 0x330c44u: goto label_330c44;
        case 0x330c48u: goto label_330c48;
        case 0x330c4cu: goto label_330c4c;
        case 0x330c50u: goto label_330c50;
        case 0x330c54u: goto label_330c54;
        case 0x330c58u: goto label_330c58;
        case 0x330c5cu: goto label_330c5c;
        case 0x330c60u: goto label_330c60;
        case 0x330c64u: goto label_330c64;
        case 0x330c68u: goto label_330c68;
        case 0x330c6cu: goto label_330c6c;
        case 0x330c70u: goto label_330c70;
        case 0x330c74u: goto label_330c74;
        case 0x330c78u: goto label_330c78;
        case 0x330c7cu: goto label_330c7c;
        case 0x330c80u: goto label_330c80;
        case 0x330c84u: goto label_330c84;
        case 0x330c88u: goto label_330c88;
        case 0x330c8cu: goto label_330c8c;
        case 0x330c90u: goto label_330c90;
        case 0x330c94u: goto label_330c94;
        case 0x330c98u: goto label_330c98;
        case 0x330c9cu: goto label_330c9c;
        case 0x330ca0u: goto label_330ca0;
        case 0x330ca4u: goto label_330ca4;
        case 0x330ca8u: goto label_330ca8;
        case 0x330cacu: goto label_330cac;
        case 0x330cb0u: goto label_330cb0;
        case 0x330cb4u: goto label_330cb4;
        case 0x330cb8u: goto label_330cb8;
        case 0x330cbcu: goto label_330cbc;
        case 0x330cc0u: goto label_330cc0;
        case 0x330cc4u: goto label_330cc4;
        case 0x330cc8u: goto label_330cc8;
        case 0x330cccu: goto label_330ccc;
        case 0x330cd0u: goto label_330cd0;
        case 0x330cd4u: goto label_330cd4;
        case 0x330cd8u: goto label_330cd8;
        case 0x330cdcu: goto label_330cdc;
        case 0x330ce0u: goto label_330ce0;
        case 0x330ce4u: goto label_330ce4;
        case 0x330ce8u: goto label_330ce8;
        case 0x330cecu: goto label_330cec;
        case 0x330cf0u: goto label_330cf0;
        case 0x330cf4u: goto label_330cf4;
        case 0x330cf8u: goto label_330cf8;
        case 0x330cfcu: goto label_330cfc;
        case 0x330d00u: goto label_330d00;
        case 0x330d04u: goto label_330d04;
        case 0x330d08u: goto label_330d08;
        case 0x330d0cu: goto label_330d0c;
        case 0x330d10u: goto label_330d10;
        case 0x330d14u: goto label_330d14;
        case 0x330d18u: goto label_330d18;
        case 0x330d1cu: goto label_330d1c;
        case 0x330d20u: goto label_330d20;
        case 0x330d24u: goto label_330d24;
        case 0x330d28u: goto label_330d28;
        case 0x330d2cu: goto label_330d2c;
        case 0x330d30u: goto label_330d30;
        case 0x330d34u: goto label_330d34;
        case 0x330d38u: goto label_330d38;
        case 0x330d3cu: goto label_330d3c;
        case 0x330d40u: goto label_330d40;
        case 0x330d44u: goto label_330d44;
        case 0x330d48u: goto label_330d48;
        case 0x330d4cu: goto label_330d4c;
        case 0x330d50u: goto label_330d50;
        case 0x330d54u: goto label_330d54;
        case 0x330d58u: goto label_330d58;
        case 0x330d5cu: goto label_330d5c;
        case 0x330d60u: goto label_330d60;
        case 0x330d64u: goto label_330d64;
        case 0x330d68u: goto label_330d68;
        case 0x330d6cu: goto label_330d6c;
        case 0x330d70u: goto label_330d70;
        case 0x330d74u: goto label_330d74;
        case 0x330d78u: goto label_330d78;
        case 0x330d7cu: goto label_330d7c;
        case 0x330d80u: goto label_330d80;
        case 0x330d84u: goto label_330d84;
        case 0x330d88u: goto label_330d88;
        case 0x330d8cu: goto label_330d8c;
        case 0x330d90u: goto label_330d90;
        case 0x330d94u: goto label_330d94;
        case 0x330d98u: goto label_330d98;
        case 0x330d9cu: goto label_330d9c;
        case 0x330da0u: goto label_330da0;
        case 0x330da4u: goto label_330da4;
        case 0x330da8u: goto label_330da8;
        case 0x330dacu: goto label_330dac;
        case 0x330db0u: goto label_330db0;
        case 0x330db4u: goto label_330db4;
        case 0x330db8u: goto label_330db8;
        case 0x330dbcu: goto label_330dbc;
        case 0x330dc0u: goto label_330dc0;
        case 0x330dc4u: goto label_330dc4;
        case 0x330dc8u: goto label_330dc8;
        case 0x330dccu: goto label_330dcc;
        case 0x330dd0u: goto label_330dd0;
        case 0x330dd4u: goto label_330dd4;
        case 0x330dd8u: goto label_330dd8;
        case 0x330ddcu: goto label_330ddc;
        case 0x330de0u: goto label_330de0;
        case 0x330de4u: goto label_330de4;
        case 0x330de8u: goto label_330de8;
        case 0x330decu: goto label_330dec;
        case 0x330df0u: goto label_330df0;
        case 0x330df4u: goto label_330df4;
        case 0x330df8u: goto label_330df8;
        case 0x330dfcu: goto label_330dfc;
        case 0x330e00u: goto label_330e00;
        case 0x330e04u: goto label_330e04;
        case 0x330e08u: goto label_330e08;
        case 0x330e0cu: goto label_330e0c;
        case 0x330e10u: goto label_330e10;
        case 0x330e14u: goto label_330e14;
        case 0x330e18u: goto label_330e18;
        case 0x330e1cu: goto label_330e1c;
        case 0x330e20u: goto label_330e20;
        case 0x330e24u: goto label_330e24;
        case 0x330e28u: goto label_330e28;
        case 0x330e2cu: goto label_330e2c;
        case 0x330e30u: goto label_330e30;
        case 0x330e34u: goto label_330e34;
        case 0x330e38u: goto label_330e38;
        case 0x330e3cu: goto label_330e3c;
        case 0x330e40u: goto label_330e40;
        case 0x330e44u: goto label_330e44;
        case 0x330e48u: goto label_330e48;
        case 0x330e4cu: goto label_330e4c;
        case 0x330e50u: goto label_330e50;
        case 0x330e54u: goto label_330e54;
        case 0x330e58u: goto label_330e58;
        case 0x330e5cu: goto label_330e5c;
        case 0x330e60u: goto label_330e60;
        case 0x330e64u: goto label_330e64;
        case 0x330e68u: goto label_330e68;
        case 0x330e6cu: goto label_330e6c;
        case 0x330e70u: goto label_330e70;
        case 0x330e74u: goto label_330e74;
        case 0x330e78u: goto label_330e78;
        case 0x330e7cu: goto label_330e7c;
        case 0x330e80u: goto label_330e80;
        case 0x330e84u: goto label_330e84;
        case 0x330e88u: goto label_330e88;
        case 0x330e8cu: goto label_330e8c;
        case 0x330e90u: goto label_330e90;
        case 0x330e94u: goto label_330e94;
        case 0x330e98u: goto label_330e98;
        case 0x330e9cu: goto label_330e9c;
        case 0x330ea0u: goto label_330ea0;
        case 0x330ea4u: goto label_330ea4;
        case 0x330ea8u: goto label_330ea8;
        case 0x330eacu: goto label_330eac;
        case 0x330eb0u: goto label_330eb0;
        case 0x330eb4u: goto label_330eb4;
        case 0x330eb8u: goto label_330eb8;
        case 0x330ebcu: goto label_330ebc;
        case 0x330ec0u: goto label_330ec0;
        case 0x330ec4u: goto label_330ec4;
        case 0x330ec8u: goto label_330ec8;
        case 0x330eccu: goto label_330ecc;
        case 0x330ed0u: goto label_330ed0;
        case 0x330ed4u: goto label_330ed4;
        case 0x330ed8u: goto label_330ed8;
        case 0x330edcu: goto label_330edc;
        case 0x330ee0u: goto label_330ee0;
        case 0x330ee4u: goto label_330ee4;
        case 0x330ee8u: goto label_330ee8;
        case 0x330eecu: goto label_330eec;
        case 0x330ef0u: goto label_330ef0;
        case 0x330ef4u: goto label_330ef4;
        case 0x330ef8u: goto label_330ef8;
        case 0x330efcu: goto label_330efc;
        case 0x330f00u: goto label_330f00;
        case 0x330f04u: goto label_330f04;
        case 0x330f08u: goto label_330f08;
        case 0x330f0cu: goto label_330f0c;
        case 0x330f10u: goto label_330f10;
        case 0x330f14u: goto label_330f14;
        case 0x330f18u: goto label_330f18;
        case 0x330f1cu: goto label_330f1c;
        case 0x330f20u: goto label_330f20;
        case 0x330f24u: goto label_330f24;
        case 0x330f28u: goto label_330f28;
        case 0x330f2cu: goto label_330f2c;
        case 0x330f30u: goto label_330f30;
        case 0x330f34u: goto label_330f34;
        case 0x330f38u: goto label_330f38;
        case 0x330f3cu: goto label_330f3c;
        case 0x330f40u: goto label_330f40;
        case 0x330f44u: goto label_330f44;
        case 0x330f48u: goto label_330f48;
        case 0x330f4cu: goto label_330f4c;
        case 0x330f50u: goto label_330f50;
        case 0x330f54u: goto label_330f54;
        case 0x330f58u: goto label_330f58;
        case 0x330f5cu: goto label_330f5c;
        case 0x330f60u: goto label_330f60;
        case 0x330f64u: goto label_330f64;
        case 0x330f68u: goto label_330f68;
        case 0x330f6cu: goto label_330f6c;
        case 0x330f70u: goto label_330f70;
        case 0x330f74u: goto label_330f74;
        case 0x330f78u: goto label_330f78;
        case 0x330f7cu: goto label_330f7c;
        case 0x330f80u: goto label_330f80;
        case 0x330f84u: goto label_330f84;
        case 0x330f88u: goto label_330f88;
        case 0x330f8cu: goto label_330f8c;
        case 0x330f90u: goto label_330f90;
        case 0x330f94u: goto label_330f94;
        case 0x330f98u: goto label_330f98;
        case 0x330f9cu: goto label_330f9c;
        case 0x330fa0u: goto label_330fa0;
        case 0x330fa4u: goto label_330fa4;
        case 0x330fa8u: goto label_330fa8;
        case 0x330facu: goto label_330fac;
        case 0x330fb0u: goto label_330fb0;
        case 0x330fb4u: goto label_330fb4;
        case 0x330fb8u: goto label_330fb8;
        case 0x330fbcu: goto label_330fbc;
        case 0x330fc0u: goto label_330fc0;
        case 0x330fc4u: goto label_330fc4;
        case 0x330fc8u: goto label_330fc8;
        case 0x330fccu: goto label_330fcc;
        case 0x330fd0u: goto label_330fd0;
        case 0x330fd4u: goto label_330fd4;
        case 0x330fd8u: goto label_330fd8;
        case 0x330fdcu: goto label_330fdc;
        case 0x330fe0u: goto label_330fe0;
        case 0x330fe4u: goto label_330fe4;
        case 0x330fe8u: goto label_330fe8;
        case 0x330fecu: goto label_330fec;
        case 0x330ff0u: goto label_330ff0;
        case 0x330ff4u: goto label_330ff4;
        case 0x330ff8u: goto label_330ff8;
        case 0x330ffcu: goto label_330ffc;
        case 0x331000u: goto label_331000;
        case 0x331004u: goto label_331004;
        case 0x331008u: goto label_331008;
        case 0x33100cu: goto label_33100c;
        case 0x331010u: goto label_331010;
        case 0x331014u: goto label_331014;
        case 0x331018u: goto label_331018;
        case 0x33101cu: goto label_33101c;
        case 0x331020u: goto label_331020;
        case 0x331024u: goto label_331024;
        case 0x331028u: goto label_331028;
        case 0x33102cu: goto label_33102c;
        case 0x331030u: goto label_331030;
        case 0x331034u: goto label_331034;
        case 0x331038u: goto label_331038;
        case 0x33103cu: goto label_33103c;
        case 0x331040u: goto label_331040;
        case 0x331044u: goto label_331044;
        case 0x331048u: goto label_331048;
        case 0x33104cu: goto label_33104c;
        case 0x331050u: goto label_331050;
        case 0x331054u: goto label_331054;
        case 0x331058u: goto label_331058;
        case 0x33105cu: goto label_33105c;
        case 0x331060u: goto label_331060;
        case 0x331064u: goto label_331064;
        case 0x331068u: goto label_331068;
        case 0x33106cu: goto label_33106c;
        case 0x331070u: goto label_331070;
        case 0x331074u: goto label_331074;
        case 0x331078u: goto label_331078;
        case 0x33107cu: goto label_33107c;
        case 0x331080u: goto label_331080;
        case 0x331084u: goto label_331084;
        case 0x331088u: goto label_331088;
        case 0x33108cu: goto label_33108c;
        case 0x331090u: goto label_331090;
        case 0x331094u: goto label_331094;
        case 0x331098u: goto label_331098;
        case 0x33109cu: goto label_33109c;
        case 0x3310a0u: goto label_3310a0;
        case 0x3310a4u: goto label_3310a4;
        case 0x3310a8u: goto label_3310a8;
        case 0x3310acu: goto label_3310ac;
        case 0x3310b0u: goto label_3310b0;
        case 0x3310b4u: goto label_3310b4;
        case 0x3310b8u: goto label_3310b8;
        case 0x3310bcu: goto label_3310bc;
        case 0x3310c0u: goto label_3310c0;
        case 0x3310c4u: goto label_3310c4;
        case 0x3310c8u: goto label_3310c8;
        case 0x3310ccu: goto label_3310cc;
        case 0x3310d0u: goto label_3310d0;
        case 0x3310d4u: goto label_3310d4;
        case 0x3310d8u: goto label_3310d8;
        case 0x3310dcu: goto label_3310dc;
        case 0x3310e0u: goto label_3310e0;
        case 0x3310e4u: goto label_3310e4;
        case 0x3310e8u: goto label_3310e8;
        case 0x3310ecu: goto label_3310ec;
        case 0x3310f0u: goto label_3310f0;
        case 0x3310f4u: goto label_3310f4;
        case 0x3310f8u: goto label_3310f8;
        case 0x3310fcu: goto label_3310fc;
        case 0x331100u: goto label_331100;
        case 0x331104u: goto label_331104;
        case 0x331108u: goto label_331108;
        case 0x33110cu: goto label_33110c;
        case 0x331110u: goto label_331110;
        case 0x331114u: goto label_331114;
        case 0x331118u: goto label_331118;
        case 0x33111cu: goto label_33111c;
        case 0x331120u: goto label_331120;
        case 0x331124u: goto label_331124;
        case 0x331128u: goto label_331128;
        case 0x33112cu: goto label_33112c;
        case 0x331130u: goto label_331130;
        case 0x331134u: goto label_331134;
        case 0x331138u: goto label_331138;
        case 0x33113cu: goto label_33113c;
        case 0x331140u: goto label_331140;
        case 0x331144u: goto label_331144;
        case 0x331148u: goto label_331148;
        case 0x33114cu: goto label_33114c;
        case 0x331150u: goto label_331150;
        case 0x331154u: goto label_331154;
        case 0x331158u: goto label_331158;
        case 0x33115cu: goto label_33115c;
        case 0x331160u: goto label_331160;
        case 0x331164u: goto label_331164;
        case 0x331168u: goto label_331168;
        case 0x33116cu: goto label_33116c;
        case 0x331170u: goto label_331170;
        case 0x331174u: goto label_331174;
        case 0x331178u: goto label_331178;
        case 0x33117cu: goto label_33117c;
        case 0x331180u: goto label_331180;
        case 0x331184u: goto label_331184;
        case 0x331188u: goto label_331188;
        case 0x33118cu: goto label_33118c;
        case 0x331190u: goto label_331190;
        case 0x331194u: goto label_331194;
        case 0x331198u: goto label_331198;
        case 0x33119cu: goto label_33119c;
        case 0x3311a0u: goto label_3311a0;
        case 0x3311a4u: goto label_3311a4;
        case 0x3311a8u: goto label_3311a8;
        case 0x3311acu: goto label_3311ac;
        case 0x3311b0u: goto label_3311b0;
        case 0x3311b4u: goto label_3311b4;
        case 0x3311b8u: goto label_3311b8;
        case 0x3311bcu: goto label_3311bc;
        case 0x3311c0u: goto label_3311c0;
        case 0x3311c4u: goto label_3311c4;
        case 0x3311c8u: goto label_3311c8;
        case 0x3311ccu: goto label_3311cc;
        case 0x3311d0u: goto label_3311d0;
        case 0x3311d4u: goto label_3311d4;
        case 0x3311d8u: goto label_3311d8;
        case 0x3311dcu: goto label_3311dc;
        case 0x3311e0u: goto label_3311e0;
        case 0x3311e4u: goto label_3311e4;
        case 0x3311e8u: goto label_3311e8;
        case 0x3311ecu: goto label_3311ec;
        case 0x3311f0u: goto label_3311f0;
        case 0x3311f4u: goto label_3311f4;
        case 0x3311f8u: goto label_3311f8;
        case 0x3311fcu: goto label_3311fc;
        case 0x331200u: goto label_331200;
        case 0x331204u: goto label_331204;
        case 0x331208u: goto label_331208;
        case 0x33120cu: goto label_33120c;
        case 0x331210u: goto label_331210;
        case 0x331214u: goto label_331214;
        case 0x331218u: goto label_331218;
        case 0x33121cu: goto label_33121c;
        case 0x331220u: goto label_331220;
        case 0x331224u: goto label_331224;
        case 0x331228u: goto label_331228;
        case 0x33122cu: goto label_33122c;
        case 0x331230u: goto label_331230;
        case 0x331234u: goto label_331234;
        case 0x331238u: goto label_331238;
        case 0x33123cu: goto label_33123c;
        case 0x331240u: goto label_331240;
        case 0x331244u: goto label_331244;
        case 0x331248u: goto label_331248;
        case 0x33124cu: goto label_33124c;
        case 0x331250u: goto label_331250;
        case 0x331254u: goto label_331254;
        case 0x331258u: goto label_331258;
        case 0x33125cu: goto label_33125c;
        case 0x331260u: goto label_331260;
        case 0x331264u: goto label_331264;
        case 0x331268u: goto label_331268;
        case 0x33126cu: goto label_33126c;
        case 0x331270u: goto label_331270;
        case 0x331274u: goto label_331274;
        case 0x331278u: goto label_331278;
        case 0x33127cu: goto label_33127c;
        case 0x331280u: goto label_331280;
        case 0x331284u: goto label_331284;
        case 0x331288u: goto label_331288;
        case 0x33128cu: goto label_33128c;
        case 0x331290u: goto label_331290;
        case 0x331294u: goto label_331294;
        case 0x331298u: goto label_331298;
        case 0x33129cu: goto label_33129c;
        case 0x3312a0u: goto label_3312a0;
        case 0x3312a4u: goto label_3312a4;
        case 0x3312a8u: goto label_3312a8;
        case 0x3312acu: goto label_3312ac;
        case 0x3312b0u: goto label_3312b0;
        case 0x3312b4u: goto label_3312b4;
        case 0x3312b8u: goto label_3312b8;
        case 0x3312bcu: goto label_3312bc;
        case 0x3312c0u: goto label_3312c0;
        case 0x3312c4u: goto label_3312c4;
        case 0x3312c8u: goto label_3312c8;
        case 0x3312ccu: goto label_3312cc;
        case 0x3312d0u: goto label_3312d0;
        case 0x3312d4u: goto label_3312d4;
        case 0x3312d8u: goto label_3312d8;
        case 0x3312dcu: goto label_3312dc;
        case 0x3312e0u: goto label_3312e0;
        case 0x3312e4u: goto label_3312e4;
        case 0x3312e8u: goto label_3312e8;
        case 0x3312ecu: goto label_3312ec;
        case 0x3312f0u: goto label_3312f0;
        case 0x3312f4u: goto label_3312f4;
        case 0x3312f8u: goto label_3312f8;
        case 0x3312fcu: goto label_3312fc;
        case 0x331300u: goto label_331300;
        case 0x331304u: goto label_331304;
        case 0x331308u: goto label_331308;
        case 0x33130cu: goto label_33130c;
        case 0x331310u: goto label_331310;
        case 0x331314u: goto label_331314;
        case 0x331318u: goto label_331318;
        case 0x33131cu: goto label_33131c;
        case 0x331320u: goto label_331320;
        case 0x331324u: goto label_331324;
        case 0x331328u: goto label_331328;
        case 0x33132cu: goto label_33132c;
        case 0x331330u: goto label_331330;
        case 0x331334u: goto label_331334;
        case 0x331338u: goto label_331338;
        case 0x33133cu: goto label_33133c;
        case 0x331340u: goto label_331340;
        case 0x331344u: goto label_331344;
        case 0x331348u: goto label_331348;
        case 0x33134cu: goto label_33134c;
        case 0x331350u: goto label_331350;
        case 0x331354u: goto label_331354;
        case 0x331358u: goto label_331358;
        case 0x33135cu: goto label_33135c;
        case 0x331360u: goto label_331360;
        case 0x331364u: goto label_331364;
        case 0x331368u: goto label_331368;
        case 0x33136cu: goto label_33136c;
        case 0x331370u: goto label_331370;
        case 0x331374u: goto label_331374;
        case 0x331378u: goto label_331378;
        case 0x33137cu: goto label_33137c;
        case 0x331380u: goto label_331380;
        case 0x331384u: goto label_331384;
        case 0x331388u: goto label_331388;
        case 0x33138cu: goto label_33138c;
        case 0x331390u: goto label_331390;
        case 0x331394u: goto label_331394;
        case 0x331398u: goto label_331398;
        case 0x33139cu: goto label_33139c;
        case 0x3313a0u: goto label_3313a0;
        case 0x3313a4u: goto label_3313a4;
        case 0x3313a8u: goto label_3313a8;
        case 0x3313acu: goto label_3313ac;
        case 0x3313b0u: goto label_3313b0;
        case 0x3313b4u: goto label_3313b4;
        case 0x3313b8u: goto label_3313b8;
        case 0x3313bcu: goto label_3313bc;
        case 0x3313c0u: goto label_3313c0;
        case 0x3313c4u: goto label_3313c4;
        case 0x3313c8u: goto label_3313c8;
        case 0x3313ccu: goto label_3313cc;
        case 0x3313d0u: goto label_3313d0;
        case 0x3313d4u: goto label_3313d4;
        case 0x3313d8u: goto label_3313d8;
        case 0x3313dcu: goto label_3313dc;
        case 0x3313e0u: goto label_3313e0;
        case 0x3313e4u: goto label_3313e4;
        case 0x3313e8u: goto label_3313e8;
        case 0x3313ecu: goto label_3313ec;
        case 0x3313f0u: goto label_3313f0;
        case 0x3313f4u: goto label_3313f4;
        case 0x3313f8u: goto label_3313f8;
        case 0x3313fcu: goto label_3313fc;
        case 0x331400u: goto label_331400;
        case 0x331404u: goto label_331404;
        case 0x331408u: goto label_331408;
        case 0x33140cu: goto label_33140c;
        case 0x331410u: goto label_331410;
        case 0x331414u: goto label_331414;
        case 0x331418u: goto label_331418;
        case 0x33141cu: goto label_33141c;
        case 0x331420u: goto label_331420;
        case 0x331424u: goto label_331424;
        case 0x331428u: goto label_331428;
        case 0x33142cu: goto label_33142c;
        case 0x331430u: goto label_331430;
        case 0x331434u: goto label_331434;
        case 0x331438u: goto label_331438;
        case 0x33143cu: goto label_33143c;
        case 0x331440u: goto label_331440;
        case 0x331444u: goto label_331444;
        case 0x331448u: goto label_331448;
        case 0x33144cu: goto label_33144c;
        case 0x331450u: goto label_331450;
        case 0x331454u: goto label_331454;
        case 0x331458u: goto label_331458;
        case 0x33145cu: goto label_33145c;
        case 0x331460u: goto label_331460;
        case 0x331464u: goto label_331464;
        case 0x331468u: goto label_331468;
        case 0x33146cu: goto label_33146c;
        case 0x331470u: goto label_331470;
        case 0x331474u: goto label_331474;
        case 0x331478u: goto label_331478;
        case 0x33147cu: goto label_33147c;
        case 0x331480u: goto label_331480;
        case 0x331484u: goto label_331484;
        case 0x331488u: goto label_331488;
        case 0x33148cu: goto label_33148c;
        case 0x331490u: goto label_331490;
        case 0x331494u: goto label_331494;
        case 0x331498u: goto label_331498;
        case 0x33149cu: goto label_33149c;
        case 0x3314a0u: goto label_3314a0;
        case 0x3314a4u: goto label_3314a4;
        case 0x3314a8u: goto label_3314a8;
        case 0x3314acu: goto label_3314ac;
        case 0x3314b0u: goto label_3314b0;
        case 0x3314b4u: goto label_3314b4;
        case 0x3314b8u: goto label_3314b8;
        case 0x3314bcu: goto label_3314bc;
        case 0x3314c0u: goto label_3314c0;
        case 0x3314c4u: goto label_3314c4;
        case 0x3314c8u: goto label_3314c8;
        case 0x3314ccu: goto label_3314cc;
        case 0x3314d0u: goto label_3314d0;
        case 0x3314d4u: goto label_3314d4;
        case 0x3314d8u: goto label_3314d8;
        case 0x3314dcu: goto label_3314dc;
        case 0x3314e0u: goto label_3314e0;
        case 0x3314e4u: goto label_3314e4;
        case 0x3314e8u: goto label_3314e8;
        case 0x3314ecu: goto label_3314ec;
        case 0x3314f0u: goto label_3314f0;
        case 0x3314f4u: goto label_3314f4;
        case 0x3314f8u: goto label_3314f8;
        case 0x3314fcu: goto label_3314fc;
        case 0x331500u: goto label_331500;
        case 0x331504u: goto label_331504;
        case 0x331508u: goto label_331508;
        case 0x33150cu: goto label_33150c;
        case 0x331510u: goto label_331510;
        case 0x331514u: goto label_331514;
        case 0x331518u: goto label_331518;
        case 0x33151cu: goto label_33151c;
        case 0x331520u: goto label_331520;
        case 0x331524u: goto label_331524;
        case 0x331528u: goto label_331528;
        case 0x33152cu: goto label_33152c;
        case 0x331530u: goto label_331530;
        case 0x331534u: goto label_331534;
        case 0x331538u: goto label_331538;
        case 0x33153cu: goto label_33153c;
        case 0x331540u: goto label_331540;
        case 0x331544u: goto label_331544;
        case 0x331548u: goto label_331548;
        case 0x33154cu: goto label_33154c;
        case 0x331550u: goto label_331550;
        case 0x331554u: goto label_331554;
        case 0x331558u: goto label_331558;
        case 0x33155cu: goto label_33155c;
        case 0x331560u: goto label_331560;
        case 0x331564u: goto label_331564;
        case 0x331568u: goto label_331568;
        case 0x33156cu: goto label_33156c;
        case 0x331570u: goto label_331570;
        case 0x331574u: goto label_331574;
        case 0x331578u: goto label_331578;
        case 0x33157cu: goto label_33157c;
        case 0x331580u: goto label_331580;
        case 0x331584u: goto label_331584;
        case 0x331588u: goto label_331588;
        case 0x33158cu: goto label_33158c;
        case 0x331590u: goto label_331590;
        case 0x331594u: goto label_331594;
        case 0x331598u: goto label_331598;
        case 0x33159cu: goto label_33159c;
        case 0x3315a0u: goto label_3315a0;
        case 0x3315a4u: goto label_3315a4;
        case 0x3315a8u: goto label_3315a8;
        case 0x3315acu: goto label_3315ac;
        case 0x3315b0u: goto label_3315b0;
        case 0x3315b4u: goto label_3315b4;
        case 0x3315b8u: goto label_3315b8;
        case 0x3315bcu: goto label_3315bc;
        case 0x3315c0u: goto label_3315c0;
        case 0x3315c4u: goto label_3315c4;
        case 0x3315c8u: goto label_3315c8;
        case 0x3315ccu: goto label_3315cc;
        case 0x3315d0u: goto label_3315d0;
        case 0x3315d4u: goto label_3315d4;
        case 0x3315d8u: goto label_3315d8;
        case 0x3315dcu: goto label_3315dc;
        case 0x3315e0u: goto label_3315e0;
        case 0x3315e4u: goto label_3315e4;
        case 0x3315e8u: goto label_3315e8;
        case 0x3315ecu: goto label_3315ec;
        case 0x3315f0u: goto label_3315f0;
        case 0x3315f4u: goto label_3315f4;
        case 0x3315f8u: goto label_3315f8;
        case 0x3315fcu: goto label_3315fc;
        case 0x331600u: goto label_331600;
        case 0x331604u: goto label_331604;
        case 0x331608u: goto label_331608;
        case 0x33160cu: goto label_33160c;
        case 0x331610u: goto label_331610;
        case 0x331614u: goto label_331614;
        case 0x331618u: goto label_331618;
        case 0x33161cu: goto label_33161c;
        case 0x331620u: goto label_331620;
        case 0x331624u: goto label_331624;
        case 0x331628u: goto label_331628;
        case 0x33162cu: goto label_33162c;
        case 0x331630u: goto label_331630;
        case 0x331634u: goto label_331634;
        case 0x331638u: goto label_331638;
        case 0x33163cu: goto label_33163c;
        case 0x331640u: goto label_331640;
        case 0x331644u: goto label_331644;
        case 0x331648u: goto label_331648;
        case 0x33164cu: goto label_33164c;
        case 0x331650u: goto label_331650;
        case 0x331654u: goto label_331654;
        case 0x331658u: goto label_331658;
        case 0x33165cu: goto label_33165c;
        case 0x331660u: goto label_331660;
        case 0x331664u: goto label_331664;
        case 0x331668u: goto label_331668;
        case 0x33166cu: goto label_33166c;
        case 0x331670u: goto label_331670;
        case 0x331674u: goto label_331674;
        case 0x331678u: goto label_331678;
        case 0x33167cu: goto label_33167c;
        case 0x331680u: goto label_331680;
        case 0x331684u: goto label_331684;
        case 0x331688u: goto label_331688;
        case 0x33168cu: goto label_33168c;
        case 0x331690u: goto label_331690;
        case 0x331694u: goto label_331694;
        case 0x331698u: goto label_331698;
        case 0x33169cu: goto label_33169c;
        case 0x3316a0u: goto label_3316a0;
        case 0x3316a4u: goto label_3316a4;
        case 0x3316a8u: goto label_3316a8;
        case 0x3316acu: goto label_3316ac;
        case 0x3316b0u: goto label_3316b0;
        case 0x3316b4u: goto label_3316b4;
        case 0x3316b8u: goto label_3316b8;
        case 0x3316bcu: goto label_3316bc;
        case 0x3316c0u: goto label_3316c0;
        case 0x3316c4u: goto label_3316c4;
        case 0x3316c8u: goto label_3316c8;
        case 0x3316ccu: goto label_3316cc;
        case 0x3316d0u: goto label_3316d0;
        case 0x3316d4u: goto label_3316d4;
        case 0x3316d8u: goto label_3316d8;
        case 0x3316dcu: goto label_3316dc;
        case 0x3316e0u: goto label_3316e0;
        case 0x3316e4u: goto label_3316e4;
        case 0x3316e8u: goto label_3316e8;
        case 0x3316ecu: goto label_3316ec;
        case 0x3316f0u: goto label_3316f0;
        case 0x3316f4u: goto label_3316f4;
        case 0x3316f8u: goto label_3316f8;
        case 0x3316fcu: goto label_3316fc;
        case 0x331700u: goto label_331700;
        case 0x331704u: goto label_331704;
        case 0x331708u: goto label_331708;
        case 0x33170cu: goto label_33170c;
        case 0x331710u: goto label_331710;
        case 0x331714u: goto label_331714;
        case 0x331718u: goto label_331718;
        case 0x33171cu: goto label_33171c;
        case 0x331720u: goto label_331720;
        case 0x331724u: goto label_331724;
        case 0x331728u: goto label_331728;
        case 0x33172cu: goto label_33172c;
        case 0x331730u: goto label_331730;
        case 0x331734u: goto label_331734;
        case 0x331738u: goto label_331738;
        case 0x33173cu: goto label_33173c;
        case 0x331740u: goto label_331740;
        case 0x331744u: goto label_331744;
        case 0x331748u: goto label_331748;
        case 0x33174cu: goto label_33174c;
        case 0x331750u: goto label_331750;
        case 0x331754u: goto label_331754;
        case 0x331758u: goto label_331758;
        case 0x33175cu: goto label_33175c;
        case 0x331760u: goto label_331760;
        case 0x331764u: goto label_331764;
        case 0x331768u: goto label_331768;
        case 0x33176cu: goto label_33176c;
        case 0x331770u: goto label_331770;
        case 0x331774u: goto label_331774;
        case 0x331778u: goto label_331778;
        case 0x33177cu: goto label_33177c;
        case 0x331780u: goto label_331780;
        case 0x331784u: goto label_331784;
        case 0x331788u: goto label_331788;
        case 0x33178cu: goto label_33178c;
        case 0x331790u: goto label_331790;
        case 0x331794u: goto label_331794;
        case 0x331798u: goto label_331798;
        case 0x33179cu: goto label_33179c;
        case 0x3317a0u: goto label_3317a0;
        case 0x3317a4u: goto label_3317a4;
        case 0x3317a8u: goto label_3317a8;
        case 0x3317acu: goto label_3317ac;
        case 0x3317b0u: goto label_3317b0;
        case 0x3317b4u: goto label_3317b4;
        case 0x3317b8u: goto label_3317b8;
        case 0x3317bcu: goto label_3317bc;
        case 0x3317c0u: goto label_3317c0;
        case 0x3317c4u: goto label_3317c4;
        case 0x3317c8u: goto label_3317c8;
        case 0x3317ccu: goto label_3317cc;
        case 0x3317d0u: goto label_3317d0;
        case 0x3317d4u: goto label_3317d4;
        case 0x3317d8u: goto label_3317d8;
        case 0x3317dcu: goto label_3317dc;
        case 0x3317e0u: goto label_3317e0;
        case 0x3317e4u: goto label_3317e4;
        case 0x3317e8u: goto label_3317e8;
        case 0x3317ecu: goto label_3317ec;
        case 0x3317f0u: goto label_3317f0;
        case 0x3317f4u: goto label_3317f4;
        case 0x3317f8u: goto label_3317f8;
        case 0x3317fcu: goto label_3317fc;
        case 0x331800u: goto label_331800;
        case 0x331804u: goto label_331804;
        case 0x331808u: goto label_331808;
        case 0x33180cu: goto label_33180c;
        case 0x331810u: goto label_331810;
        case 0x331814u: goto label_331814;
        case 0x331818u: goto label_331818;
        case 0x33181cu: goto label_33181c;
        case 0x331820u: goto label_331820;
        case 0x331824u: goto label_331824;
        case 0x331828u: goto label_331828;
        case 0x33182cu: goto label_33182c;
        case 0x331830u: goto label_331830;
        case 0x331834u: goto label_331834;
        case 0x331838u: goto label_331838;
        case 0x33183cu: goto label_33183c;
        case 0x331840u: goto label_331840;
        case 0x331844u: goto label_331844;
        case 0x331848u: goto label_331848;
        case 0x33184cu: goto label_33184c;
        case 0x331850u: goto label_331850;
        case 0x331854u: goto label_331854;
        case 0x331858u: goto label_331858;
        case 0x33185cu: goto label_33185c;
        case 0x331860u: goto label_331860;
        case 0x331864u: goto label_331864;
        case 0x331868u: goto label_331868;
        case 0x33186cu: goto label_33186c;
        case 0x331870u: goto label_331870;
        case 0x331874u: goto label_331874;
        case 0x331878u: goto label_331878;
        case 0x33187cu: goto label_33187c;
        case 0x331880u: goto label_331880;
        case 0x331884u: goto label_331884;
        case 0x331888u: goto label_331888;
        case 0x33188cu: goto label_33188c;
        case 0x331890u: goto label_331890;
        case 0x331894u: goto label_331894;
        case 0x331898u: goto label_331898;
        case 0x33189cu: goto label_33189c;
        case 0x3318a0u: goto label_3318a0;
        case 0x3318a4u: goto label_3318a4;
        case 0x3318a8u: goto label_3318a8;
        case 0x3318acu: goto label_3318ac;
        case 0x3318b0u: goto label_3318b0;
        case 0x3318b4u: goto label_3318b4;
        case 0x3318b8u: goto label_3318b8;
        case 0x3318bcu: goto label_3318bc;
        case 0x3318c0u: goto label_3318c0;
        case 0x3318c4u: goto label_3318c4;
        case 0x3318c8u: goto label_3318c8;
        case 0x3318ccu: goto label_3318cc;
        case 0x3318d0u: goto label_3318d0;
        case 0x3318d4u: goto label_3318d4;
        case 0x3318d8u: goto label_3318d8;
        case 0x3318dcu: goto label_3318dc;
        case 0x3318e0u: goto label_3318e0;
        case 0x3318e4u: goto label_3318e4;
        case 0x3318e8u: goto label_3318e8;
        case 0x3318ecu: goto label_3318ec;
        case 0x3318f0u: goto label_3318f0;
        case 0x3318f4u: goto label_3318f4;
        case 0x3318f8u: goto label_3318f8;
        case 0x3318fcu: goto label_3318fc;
        case 0x331900u: goto label_331900;
        case 0x331904u: goto label_331904;
        case 0x331908u: goto label_331908;
        case 0x33190cu: goto label_33190c;
        case 0x331910u: goto label_331910;
        case 0x331914u: goto label_331914;
        case 0x331918u: goto label_331918;
        case 0x33191cu: goto label_33191c;
        case 0x331920u: goto label_331920;
        case 0x331924u: goto label_331924;
        case 0x331928u: goto label_331928;
        case 0x33192cu: goto label_33192c;
        case 0x331930u: goto label_331930;
        case 0x331934u: goto label_331934;
        case 0x331938u: goto label_331938;
        case 0x33193cu: goto label_33193c;
        case 0x331940u: goto label_331940;
        case 0x331944u: goto label_331944;
        case 0x331948u: goto label_331948;
        case 0x33194cu: goto label_33194c;
        case 0x331950u: goto label_331950;
        case 0x331954u: goto label_331954;
        case 0x331958u: goto label_331958;
        case 0x33195cu: goto label_33195c;
        case 0x331960u: goto label_331960;
        case 0x331964u: goto label_331964;
        case 0x331968u: goto label_331968;
        case 0x33196cu: goto label_33196c;
        case 0x331970u: goto label_331970;
        case 0x331974u: goto label_331974;
        case 0x331978u: goto label_331978;
        case 0x33197cu: goto label_33197c;
        case 0x331980u: goto label_331980;
        case 0x331984u: goto label_331984;
        case 0x331988u: goto label_331988;
        case 0x33198cu: goto label_33198c;
        case 0x331990u: goto label_331990;
        case 0x331994u: goto label_331994;
        case 0x331998u: goto label_331998;
        case 0x33199cu: goto label_33199c;
        case 0x3319a0u: goto label_3319a0;
        case 0x3319a4u: goto label_3319a4;
        case 0x3319a8u: goto label_3319a8;
        case 0x3319acu: goto label_3319ac;
        case 0x3319b0u: goto label_3319b0;
        case 0x3319b4u: goto label_3319b4;
        case 0x3319b8u: goto label_3319b8;
        case 0x3319bcu: goto label_3319bc;
        case 0x3319c0u: goto label_3319c0;
        case 0x3319c4u: goto label_3319c4;
        case 0x3319c8u: goto label_3319c8;
        case 0x3319ccu: goto label_3319cc;
        case 0x3319d0u: goto label_3319d0;
        case 0x3319d4u: goto label_3319d4;
        case 0x3319d8u: goto label_3319d8;
        case 0x3319dcu: goto label_3319dc;
        case 0x3319e0u: goto label_3319e0;
        case 0x3319e4u: goto label_3319e4;
        case 0x3319e8u: goto label_3319e8;
        case 0x3319ecu: goto label_3319ec;
        case 0x3319f0u: goto label_3319f0;
        case 0x3319f4u: goto label_3319f4;
        case 0x3319f8u: goto label_3319f8;
        case 0x3319fcu: goto label_3319fc;
        case 0x331a00u: goto label_331a00;
        case 0x331a04u: goto label_331a04;
        case 0x331a08u: goto label_331a08;
        case 0x331a0cu: goto label_331a0c;
        case 0x331a10u: goto label_331a10;
        case 0x331a14u: goto label_331a14;
        case 0x331a18u: goto label_331a18;
        case 0x331a1cu: goto label_331a1c;
        case 0x331a20u: goto label_331a20;
        case 0x331a24u: goto label_331a24;
        case 0x331a28u: goto label_331a28;
        case 0x331a2cu: goto label_331a2c;
        case 0x331a30u: goto label_331a30;
        case 0x331a34u: goto label_331a34;
        case 0x331a38u: goto label_331a38;
        case 0x331a3cu: goto label_331a3c;
        case 0x331a40u: goto label_331a40;
        case 0x331a44u: goto label_331a44;
        case 0x331a48u: goto label_331a48;
        case 0x331a4cu: goto label_331a4c;
        case 0x331a50u: goto label_331a50;
        case 0x331a54u: goto label_331a54;
        case 0x331a58u: goto label_331a58;
        case 0x331a5cu: goto label_331a5c;
        case 0x331a60u: goto label_331a60;
        case 0x331a64u: goto label_331a64;
        case 0x331a68u: goto label_331a68;
        case 0x331a6cu: goto label_331a6c;
        case 0x331a70u: goto label_331a70;
        case 0x331a74u: goto label_331a74;
        case 0x331a78u: goto label_331a78;
        case 0x331a7cu: goto label_331a7c;
        case 0x331a80u: goto label_331a80;
        case 0x331a84u: goto label_331a84;
        case 0x331a88u: goto label_331a88;
        case 0x331a8cu: goto label_331a8c;
        case 0x331a90u: goto label_331a90;
        case 0x331a94u: goto label_331a94;
        case 0x331a98u: goto label_331a98;
        case 0x331a9cu: goto label_331a9c;
        case 0x331aa0u: goto label_331aa0;
        case 0x331aa4u: goto label_331aa4;
        case 0x331aa8u: goto label_331aa8;
        case 0x331aacu: goto label_331aac;
        case 0x331ab0u: goto label_331ab0;
        case 0x331ab4u: goto label_331ab4;
        case 0x331ab8u: goto label_331ab8;
        case 0x331abcu: goto label_331abc;
        case 0x331ac0u: goto label_331ac0;
        case 0x331ac4u: goto label_331ac4;
        case 0x331ac8u: goto label_331ac8;
        case 0x331accu: goto label_331acc;
        case 0x331ad0u: goto label_331ad0;
        case 0x331ad4u: goto label_331ad4;
        case 0x331ad8u: goto label_331ad8;
        case 0x331adcu: goto label_331adc;
        case 0x331ae0u: goto label_331ae0;
        case 0x331ae4u: goto label_331ae4;
        case 0x331ae8u: goto label_331ae8;
        case 0x331aecu: goto label_331aec;
        case 0x331af0u: goto label_331af0;
        case 0x331af4u: goto label_331af4;
        case 0x331af8u: goto label_331af8;
        case 0x331afcu: goto label_331afc;
        case 0x331b00u: goto label_331b00;
        case 0x331b04u: goto label_331b04;
        case 0x331b08u: goto label_331b08;
        case 0x331b0cu: goto label_331b0c;
        case 0x331b10u: goto label_331b10;
        case 0x331b14u: goto label_331b14;
        case 0x331b18u: goto label_331b18;
        case 0x331b1cu: goto label_331b1c;
        case 0x331b20u: goto label_331b20;
        case 0x331b24u: goto label_331b24;
        case 0x331b28u: goto label_331b28;
        case 0x331b2cu: goto label_331b2c;
        case 0x331b30u: goto label_331b30;
        case 0x331b34u: goto label_331b34;
        case 0x331b38u: goto label_331b38;
        case 0x331b3cu: goto label_331b3c;
        case 0x331b40u: goto label_331b40;
        case 0x331b44u: goto label_331b44;
        case 0x331b48u: goto label_331b48;
        case 0x331b4cu: goto label_331b4c;
        case 0x331b50u: goto label_331b50;
        case 0x331b54u: goto label_331b54;
        case 0x331b58u: goto label_331b58;
        case 0x331b5cu: goto label_331b5c;
        case 0x331b60u: goto label_331b60;
        case 0x331b64u: goto label_331b64;
        case 0x331b68u: goto label_331b68;
        case 0x331b6cu: goto label_331b6c;
        case 0x331b70u: goto label_331b70;
        case 0x331b74u: goto label_331b74;
        case 0x331b78u: goto label_331b78;
        case 0x331b7cu: goto label_331b7c;
        case 0x331b80u: goto label_331b80;
        case 0x331b84u: goto label_331b84;
        case 0x331b88u: goto label_331b88;
        case 0x331b8cu: goto label_331b8c;
        case 0x331b90u: goto label_331b90;
        case 0x331b94u: goto label_331b94;
        case 0x331b98u: goto label_331b98;
        case 0x331b9cu: goto label_331b9c;
        case 0x331ba0u: goto label_331ba0;
        case 0x331ba4u: goto label_331ba4;
        case 0x331ba8u: goto label_331ba8;
        case 0x331bacu: goto label_331bac;
        case 0x331bb0u: goto label_331bb0;
        case 0x331bb4u: goto label_331bb4;
        case 0x331bb8u: goto label_331bb8;
        case 0x331bbcu: goto label_331bbc;
        case 0x331bc0u: goto label_331bc0;
        case 0x331bc4u: goto label_331bc4;
        case 0x331bc8u: goto label_331bc8;
        case 0x331bccu: goto label_331bcc;
        case 0x331bd0u: goto label_331bd0;
        case 0x331bd4u: goto label_331bd4;
        case 0x331bd8u: goto label_331bd8;
        case 0x331bdcu: goto label_331bdc;
        case 0x331be0u: goto label_331be0;
        case 0x331be4u: goto label_331be4;
        case 0x331be8u: goto label_331be8;
        case 0x331becu: goto label_331bec;
        case 0x331bf0u: goto label_331bf0;
        case 0x331bf4u: goto label_331bf4;
        case 0x331bf8u: goto label_331bf8;
        case 0x331bfcu: goto label_331bfc;
        case 0x331c00u: goto label_331c00;
        case 0x331c04u: goto label_331c04;
        case 0x331c08u: goto label_331c08;
        case 0x331c0cu: goto label_331c0c;
        case 0x331c10u: goto label_331c10;
        case 0x331c14u: goto label_331c14;
        case 0x331c18u: goto label_331c18;
        case 0x331c1cu: goto label_331c1c;
        case 0x331c20u: goto label_331c20;
        case 0x331c24u: goto label_331c24;
        case 0x331c28u: goto label_331c28;
        case 0x331c2cu: goto label_331c2c;
        case 0x331c30u: goto label_331c30;
        case 0x331c34u: goto label_331c34;
        case 0x331c38u: goto label_331c38;
        case 0x331c3cu: goto label_331c3c;
        case 0x331c40u: goto label_331c40;
        case 0x331c44u: goto label_331c44;
        case 0x331c48u: goto label_331c48;
        case 0x331c4cu: goto label_331c4c;
        case 0x331c50u: goto label_331c50;
        case 0x331c54u: goto label_331c54;
        case 0x331c58u: goto label_331c58;
        case 0x331c5cu: goto label_331c5c;
        case 0x331c60u: goto label_331c60;
        case 0x331c64u: goto label_331c64;
        case 0x331c68u: goto label_331c68;
        case 0x331c6cu: goto label_331c6c;
        case 0x331c70u: goto label_331c70;
        case 0x331c74u: goto label_331c74;
        case 0x331c78u: goto label_331c78;
        case 0x331c7cu: goto label_331c7c;
        case 0x331c80u: goto label_331c80;
        case 0x331c84u: goto label_331c84;
        case 0x331c88u: goto label_331c88;
        case 0x331c8cu: goto label_331c8c;
        case 0x331c90u: goto label_331c90;
        case 0x331c94u: goto label_331c94;
        case 0x331c98u: goto label_331c98;
        case 0x331c9cu: goto label_331c9c;
        case 0x331ca0u: goto label_331ca0;
        case 0x331ca4u: goto label_331ca4;
        case 0x331ca8u: goto label_331ca8;
        case 0x331cacu: goto label_331cac;
        case 0x331cb0u: goto label_331cb0;
        case 0x331cb4u: goto label_331cb4;
        case 0x331cb8u: goto label_331cb8;
        case 0x331cbcu: goto label_331cbc;
        case 0x331cc0u: goto label_331cc0;
        case 0x331cc4u: goto label_331cc4;
        case 0x331cc8u: goto label_331cc8;
        case 0x331cccu: goto label_331ccc;
        case 0x331cd0u: goto label_331cd0;
        case 0x331cd4u: goto label_331cd4;
        case 0x331cd8u: goto label_331cd8;
        case 0x331cdcu: goto label_331cdc;
        case 0x331ce0u: goto label_331ce0;
        case 0x331ce4u: goto label_331ce4;
        case 0x331ce8u: goto label_331ce8;
        case 0x331cecu: goto label_331cec;
        case 0x331cf0u: goto label_331cf0;
        case 0x331cf4u: goto label_331cf4;
        case 0x331cf8u: goto label_331cf8;
        case 0x331cfcu: goto label_331cfc;
        case 0x331d00u: goto label_331d00;
        case 0x331d04u: goto label_331d04;
        case 0x331d08u: goto label_331d08;
        case 0x331d0cu: goto label_331d0c;
        case 0x331d10u: goto label_331d10;
        case 0x331d14u: goto label_331d14;
        case 0x331d18u: goto label_331d18;
        case 0x331d1cu: goto label_331d1c;
        case 0x331d20u: goto label_331d20;
        case 0x331d24u: goto label_331d24;
        case 0x331d28u: goto label_331d28;
        case 0x331d2cu: goto label_331d2c;
        case 0x331d30u: goto label_331d30;
        case 0x331d34u: goto label_331d34;
        case 0x331d38u: goto label_331d38;
        case 0x331d3cu: goto label_331d3c;
        case 0x331d40u: goto label_331d40;
        case 0x331d44u: goto label_331d44;
        case 0x331d48u: goto label_331d48;
        case 0x331d4cu: goto label_331d4c;
        case 0x331d50u: goto label_331d50;
        case 0x331d54u: goto label_331d54;
        case 0x331d58u: goto label_331d58;
        case 0x331d5cu: goto label_331d5c;
        case 0x331d60u: goto label_331d60;
        case 0x331d64u: goto label_331d64;
        case 0x331d68u: goto label_331d68;
        case 0x331d6cu: goto label_331d6c;
        case 0x331d70u: goto label_331d70;
        case 0x331d74u: goto label_331d74;
        case 0x331d78u: goto label_331d78;
        case 0x331d7cu: goto label_331d7c;
        case 0x331d80u: goto label_331d80;
        case 0x331d84u: goto label_331d84;
        case 0x331d88u: goto label_331d88;
        case 0x331d8cu: goto label_331d8c;
        case 0x331d90u: goto label_331d90;
        case 0x331d94u: goto label_331d94;
        case 0x331d98u: goto label_331d98;
        case 0x331d9cu: goto label_331d9c;
        case 0x331da0u: goto label_331da0;
        case 0x331da4u: goto label_331da4;
        case 0x331da8u: goto label_331da8;
        case 0x331dacu: goto label_331dac;
        case 0x331db0u: goto label_331db0;
        case 0x331db4u: goto label_331db4;
        case 0x331db8u: goto label_331db8;
        case 0x331dbcu: goto label_331dbc;
        case 0x331dc0u: goto label_331dc0;
        case 0x331dc4u: goto label_331dc4;
        case 0x331dc8u: goto label_331dc8;
        case 0x331dccu: goto label_331dcc;
        case 0x331dd0u: goto label_331dd0;
        case 0x331dd4u: goto label_331dd4;
        case 0x331dd8u: goto label_331dd8;
        case 0x331ddcu: goto label_331ddc;
        case 0x331de0u: goto label_331de0;
        case 0x331de4u: goto label_331de4;
        case 0x331de8u: goto label_331de8;
        case 0x331decu: goto label_331dec;
        case 0x331df0u: goto label_331df0;
        case 0x331df4u: goto label_331df4;
        case 0x331df8u: goto label_331df8;
        case 0x331dfcu: goto label_331dfc;
        case 0x331e00u: goto label_331e00;
        case 0x331e04u: goto label_331e04;
        case 0x331e08u: goto label_331e08;
        case 0x331e0cu: goto label_331e0c;
        case 0x331e10u: goto label_331e10;
        case 0x331e14u: goto label_331e14;
        case 0x331e18u: goto label_331e18;
        case 0x331e1cu: goto label_331e1c;
        case 0x331e20u: goto label_331e20;
        case 0x331e24u: goto label_331e24;
        case 0x331e28u: goto label_331e28;
        case 0x331e2cu: goto label_331e2c;
        case 0x331e30u: goto label_331e30;
        case 0x331e34u: goto label_331e34;
        case 0x331e38u: goto label_331e38;
        case 0x331e3cu: goto label_331e3c;
        case 0x331e40u: goto label_331e40;
        case 0x331e44u: goto label_331e44;
        case 0x331e48u: goto label_331e48;
        case 0x331e4cu: goto label_331e4c;
        case 0x331e50u: goto label_331e50;
        case 0x331e54u: goto label_331e54;
        case 0x331e58u: goto label_331e58;
        case 0x331e5cu: goto label_331e5c;
        case 0x331e60u: goto label_331e60;
        case 0x331e64u: goto label_331e64;
        case 0x331e68u: goto label_331e68;
        case 0x331e6cu: goto label_331e6c;
        case 0x331e70u: goto label_331e70;
        case 0x331e74u: goto label_331e74;
        case 0x331e78u: goto label_331e78;
        case 0x331e7cu: goto label_331e7c;
        case 0x331e80u: goto label_331e80;
        case 0x331e84u: goto label_331e84;
        case 0x331e88u: goto label_331e88;
        case 0x331e8cu: goto label_331e8c;
        case 0x331e90u: goto label_331e90;
        case 0x331e94u: goto label_331e94;
        case 0x331e98u: goto label_331e98;
        case 0x331e9cu: goto label_331e9c;
        case 0x331ea0u: goto label_331ea0;
        case 0x331ea4u: goto label_331ea4;
        case 0x331ea8u: goto label_331ea8;
        case 0x331eacu: goto label_331eac;
        case 0x331eb0u: goto label_331eb0;
        case 0x331eb4u: goto label_331eb4;
        case 0x331eb8u: goto label_331eb8;
        case 0x331ebcu: goto label_331ebc;
        case 0x331ec0u: goto label_331ec0;
        case 0x331ec4u: goto label_331ec4;
        case 0x331ec8u: goto label_331ec8;
        case 0x331eccu: goto label_331ecc;
        case 0x331ed0u: goto label_331ed0;
        case 0x331ed4u: goto label_331ed4;
        case 0x331ed8u: goto label_331ed8;
        case 0x331edcu: goto label_331edc;
        case 0x331ee0u: goto label_331ee0;
        case 0x331ee4u: goto label_331ee4;
        case 0x331ee8u: goto label_331ee8;
        case 0x331eecu: goto label_331eec;
        case 0x331ef0u: goto label_331ef0;
        case 0x331ef4u: goto label_331ef4;
        case 0x331ef8u: goto label_331ef8;
        case 0x331efcu: goto label_331efc;
        case 0x331f00u: goto label_331f00;
        case 0x331f04u: goto label_331f04;
        case 0x331f08u: goto label_331f08;
        case 0x331f0cu: goto label_331f0c;
        case 0x331f10u: goto label_331f10;
        case 0x331f14u: goto label_331f14;
        case 0x331f18u: goto label_331f18;
        case 0x331f1cu: goto label_331f1c;
        case 0x331f20u: goto label_331f20;
        case 0x331f24u: goto label_331f24;
        case 0x331f28u: goto label_331f28;
        case 0x331f2cu: goto label_331f2c;
        case 0x331f30u: goto label_331f30;
        case 0x331f34u: goto label_331f34;
        case 0x331f38u: goto label_331f38;
        case 0x331f3cu: goto label_331f3c;
        case 0x331f40u: goto label_331f40;
        case 0x331f44u: goto label_331f44;
        case 0x331f48u: goto label_331f48;
        case 0x331f4cu: goto label_331f4c;
        case 0x331f50u: goto label_331f50;
        case 0x331f54u: goto label_331f54;
        case 0x331f58u: goto label_331f58;
        case 0x331f5cu: goto label_331f5c;
        case 0x331f60u: goto label_331f60;
        case 0x331f64u: goto label_331f64;
        case 0x331f68u: goto label_331f68;
        case 0x331f6cu: goto label_331f6c;
        case 0x331f70u: goto label_331f70;
        case 0x331f74u: goto label_331f74;
        case 0x331f78u: goto label_331f78;
        case 0x331f7cu: goto label_331f7c;
        case 0x331f80u: goto label_331f80;
        case 0x331f84u: goto label_331f84;
        case 0x331f88u: goto label_331f88;
        case 0x331f8cu: goto label_331f8c;
        case 0x331f90u: goto label_331f90;
        case 0x331f94u: goto label_331f94;
        case 0x331f98u: goto label_331f98;
        case 0x331f9cu: goto label_331f9c;
        case 0x331fa0u: goto label_331fa0;
        case 0x331fa4u: goto label_331fa4;
        case 0x331fa8u: goto label_331fa8;
        case 0x331facu: goto label_331fac;
        case 0x331fb0u: goto label_331fb0;
        case 0x331fb4u: goto label_331fb4;
        case 0x331fb8u: goto label_331fb8;
        case 0x331fbcu: goto label_331fbc;
        case 0x331fc0u: goto label_331fc0;
        case 0x331fc4u: goto label_331fc4;
        case 0x331fc8u: goto label_331fc8;
        case 0x331fccu: goto label_331fcc;
        case 0x331fd0u: goto label_331fd0;
        case 0x331fd4u: goto label_331fd4;
        case 0x331fd8u: goto label_331fd8;
        case 0x331fdcu: goto label_331fdc;
        case 0x331fe0u: goto label_331fe0;
        case 0x331fe4u: goto label_331fe4;
        case 0x331fe8u: goto label_331fe8;
        case 0x331fecu: goto label_331fec;
        case 0x331ff0u: goto label_331ff0;
        case 0x331ff4u: goto label_331ff4;
        case 0x331ff8u: goto label_331ff8;
        case 0x331ffcu: goto label_331ffc;
        case 0x332000u: goto label_332000;
        case 0x332004u: goto label_332004;
        case 0x332008u: goto label_332008;
        case 0x33200cu: goto label_33200c;
        case 0x332010u: goto label_332010;
        case 0x332014u: goto label_332014;
        case 0x332018u: goto label_332018;
        case 0x33201cu: goto label_33201c;
        case 0x332020u: goto label_332020;
        case 0x332024u: goto label_332024;
        case 0x332028u: goto label_332028;
        case 0x33202cu: goto label_33202c;
        case 0x332030u: goto label_332030;
        case 0x332034u: goto label_332034;
        case 0x332038u: goto label_332038;
        case 0x33203cu: goto label_33203c;
        case 0x332040u: goto label_332040;
        case 0x332044u: goto label_332044;
        case 0x332048u: goto label_332048;
        case 0x33204cu: goto label_33204c;
        case 0x332050u: goto label_332050;
        case 0x332054u: goto label_332054;
        case 0x332058u: goto label_332058;
        case 0x33205cu: goto label_33205c;
        case 0x332060u: goto label_332060;
        case 0x332064u: goto label_332064;
        case 0x332068u: goto label_332068;
        case 0x33206cu: goto label_33206c;
        case 0x332070u: goto label_332070;
        case 0x332074u: goto label_332074;
        case 0x332078u: goto label_332078;
        case 0x33207cu: goto label_33207c;
        case 0x332080u: goto label_332080;
        case 0x332084u: goto label_332084;
        case 0x332088u: goto label_332088;
        case 0x33208cu: goto label_33208c;
        case 0x332090u: goto label_332090;
        case 0x332094u: goto label_332094;
        case 0x332098u: goto label_332098;
        case 0x33209cu: goto label_33209c;
        case 0x3320a0u: goto label_3320a0;
        case 0x3320a4u: goto label_3320a4;
        case 0x3320a8u: goto label_3320a8;
        case 0x3320acu: goto label_3320ac;
        case 0x3320b0u: goto label_3320b0;
        case 0x3320b4u: goto label_3320b4;
        case 0x3320b8u: goto label_3320b8;
        case 0x3320bcu: goto label_3320bc;
        case 0x3320c0u: goto label_3320c0;
        case 0x3320c4u: goto label_3320c4;
        case 0x3320c8u: goto label_3320c8;
        case 0x3320ccu: goto label_3320cc;
        case 0x3320d0u: goto label_3320d0;
        case 0x3320d4u: goto label_3320d4;
        case 0x3320d8u: goto label_3320d8;
        case 0x3320dcu: goto label_3320dc;
        case 0x3320e0u: goto label_3320e0;
        case 0x3320e4u: goto label_3320e4;
        case 0x3320e8u: goto label_3320e8;
        case 0x3320ecu: goto label_3320ec;
        case 0x3320f0u: goto label_3320f0;
        case 0x3320f4u: goto label_3320f4;
        case 0x3320f8u: goto label_3320f8;
        case 0x3320fcu: goto label_3320fc;
        case 0x332100u: goto label_332100;
        case 0x332104u: goto label_332104;
        case 0x332108u: goto label_332108;
        case 0x33210cu: goto label_33210c;
        case 0x332110u: goto label_332110;
        case 0x332114u: goto label_332114;
        case 0x332118u: goto label_332118;
        case 0x33211cu: goto label_33211c;
        case 0x332120u: goto label_332120;
        case 0x332124u: goto label_332124;
        case 0x332128u: goto label_332128;
        case 0x33212cu: goto label_33212c;
        case 0x332130u: goto label_332130;
        case 0x332134u: goto label_332134;
        case 0x332138u: goto label_332138;
        case 0x33213cu: goto label_33213c;
        case 0x332140u: goto label_332140;
        case 0x332144u: goto label_332144;
        case 0x332148u: goto label_332148;
        case 0x33214cu: goto label_33214c;
        case 0x332150u: goto label_332150;
        case 0x332154u: goto label_332154;
        case 0x332158u: goto label_332158;
        case 0x33215cu: goto label_33215c;
        case 0x332160u: goto label_332160;
        case 0x332164u: goto label_332164;
        case 0x332168u: goto label_332168;
        case 0x33216cu: goto label_33216c;
        case 0x332170u: goto label_332170;
        case 0x332174u: goto label_332174;
        case 0x332178u: goto label_332178;
        case 0x33217cu: goto label_33217c;
        case 0x332180u: goto label_332180;
        case 0x332184u: goto label_332184;
        case 0x332188u: goto label_332188;
        case 0x33218cu: goto label_33218c;
        case 0x332190u: goto label_332190;
        case 0x332194u: goto label_332194;
        case 0x332198u: goto label_332198;
        case 0x33219cu: goto label_33219c;
        case 0x3321a0u: goto label_3321a0;
        case 0x3321a4u: goto label_3321a4;
        case 0x3321a8u: goto label_3321a8;
        case 0x3321acu: goto label_3321ac;
        case 0x3321b0u: goto label_3321b0;
        case 0x3321b4u: goto label_3321b4;
        case 0x3321b8u: goto label_3321b8;
        case 0x3321bcu: goto label_3321bc;
        case 0x3321c0u: goto label_3321c0;
        case 0x3321c4u: goto label_3321c4;
        case 0x3321c8u: goto label_3321c8;
        case 0x3321ccu: goto label_3321cc;
        case 0x3321d0u: goto label_3321d0;
        case 0x3321d4u: goto label_3321d4;
        case 0x3321d8u: goto label_3321d8;
        case 0x3321dcu: goto label_3321dc;
        case 0x3321e0u: goto label_3321e0;
        case 0x3321e4u: goto label_3321e4;
        case 0x3321e8u: goto label_3321e8;
        case 0x3321ecu: goto label_3321ec;
        case 0x3321f0u: goto label_3321f0;
        case 0x3321f4u: goto label_3321f4;
        case 0x3321f8u: goto label_3321f8;
        case 0x3321fcu: goto label_3321fc;
        case 0x332200u: goto label_332200;
        case 0x332204u: goto label_332204;
        case 0x332208u: goto label_332208;
        case 0x33220cu: goto label_33220c;
        case 0x332210u: goto label_332210;
        case 0x332214u: goto label_332214;
        case 0x332218u: goto label_332218;
        case 0x33221cu: goto label_33221c;
        case 0x332220u: goto label_332220;
        case 0x332224u: goto label_332224;
        case 0x332228u: goto label_332228;
        case 0x33222cu: goto label_33222c;
        case 0x332230u: goto label_332230;
        case 0x332234u: goto label_332234;
        case 0x332238u: goto label_332238;
        case 0x33223cu: goto label_33223c;
        case 0x332240u: goto label_332240;
        case 0x332244u: goto label_332244;
        case 0x332248u: goto label_332248;
        case 0x33224cu: goto label_33224c;
        case 0x332250u: goto label_332250;
        case 0x332254u: goto label_332254;
        case 0x332258u: goto label_332258;
        case 0x33225cu: goto label_33225c;
        case 0x332260u: goto label_332260;
        case 0x332264u: goto label_332264;
        case 0x332268u: goto label_332268;
        case 0x33226cu: goto label_33226c;
        case 0x332270u: goto label_332270;
        case 0x332274u: goto label_332274;
        case 0x332278u: goto label_332278;
        case 0x33227cu: goto label_33227c;
        case 0x332280u: goto label_332280;
        case 0x332284u: goto label_332284;
        case 0x332288u: goto label_332288;
        case 0x33228cu: goto label_33228c;
        case 0x332290u: goto label_332290;
        case 0x332294u: goto label_332294;
        case 0x332298u: goto label_332298;
        case 0x33229cu: goto label_33229c;
        case 0x3322a0u: goto label_3322a0;
        case 0x3322a4u: goto label_3322a4;
        case 0x3322a8u: goto label_3322a8;
        case 0x3322acu: goto label_3322ac;
        case 0x3322b0u: goto label_3322b0;
        case 0x3322b4u: goto label_3322b4;
        case 0x3322b8u: goto label_3322b8;
        case 0x3322bcu: goto label_3322bc;
        case 0x3322c0u: goto label_3322c0;
        case 0x3322c4u: goto label_3322c4;
        case 0x3322c8u: goto label_3322c8;
        case 0x3322ccu: goto label_3322cc;
        case 0x3322d0u: goto label_3322d0;
        case 0x3322d4u: goto label_3322d4;
        case 0x3322d8u: goto label_3322d8;
        case 0x3322dcu: goto label_3322dc;
        case 0x3322e0u: goto label_3322e0;
        case 0x3322e4u: goto label_3322e4;
        case 0x3322e8u: goto label_3322e8;
        case 0x3322ecu: goto label_3322ec;
        case 0x3322f0u: goto label_3322f0;
        case 0x3322f4u: goto label_3322f4;
        case 0x3322f8u: goto label_3322f8;
        case 0x3322fcu: goto label_3322fc;
        case 0x332300u: goto label_332300;
        case 0x332304u: goto label_332304;
        case 0x332308u: goto label_332308;
        case 0x33230cu: goto label_33230c;
        case 0x332310u: goto label_332310;
        case 0x332314u: goto label_332314;
        case 0x332318u: goto label_332318;
        case 0x33231cu: goto label_33231c;
        case 0x332320u: goto label_332320;
        case 0x332324u: goto label_332324;
        case 0x332328u: goto label_332328;
        case 0x33232cu: goto label_33232c;
        case 0x332330u: goto label_332330;
        case 0x332334u: goto label_332334;
        case 0x332338u: goto label_332338;
        case 0x33233cu: goto label_33233c;
        case 0x332340u: goto label_332340;
        case 0x332344u: goto label_332344;
        case 0x332348u: goto label_332348;
        case 0x33234cu: goto label_33234c;
        case 0x332350u: goto label_332350;
        case 0x332354u: goto label_332354;
        case 0x332358u: goto label_332358;
        case 0x33235cu: goto label_33235c;
        case 0x332360u: goto label_332360;
        case 0x332364u: goto label_332364;
        case 0x332368u: goto label_332368;
        case 0x33236cu: goto label_33236c;
        case 0x332370u: goto label_332370;
        case 0x332374u: goto label_332374;
        case 0x332378u: goto label_332378;
        case 0x33237cu: goto label_33237c;
        case 0x332380u: goto label_332380;
        case 0x332384u: goto label_332384;
        case 0x332388u: goto label_332388;
        case 0x33238cu: goto label_33238c;
        case 0x332390u: goto label_332390;
        case 0x332394u: goto label_332394;
        case 0x332398u: goto label_332398;
        case 0x33239cu: goto label_33239c;
        case 0x3323a0u: goto label_3323a0;
        case 0x3323a4u: goto label_3323a4;
        case 0x3323a8u: goto label_3323a8;
        case 0x3323acu: goto label_3323ac;
        case 0x3323b0u: goto label_3323b0;
        case 0x3323b4u: goto label_3323b4;
        case 0x3323b8u: goto label_3323b8;
        case 0x3323bcu: goto label_3323bc;
        default: break;
    }

    ctx->pc = 0x32fae0u;

label_32fae0:
    // 0x32fae0: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x32fae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_32fae4:
    // 0x32fae4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x32fae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
label_32fae8:
    // 0x32fae8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x32fae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_32faec:
    // 0x32faec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x32faecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_32faf0:
    // 0x32faf0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x32faf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_32faf4:
    // 0x32faf4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x32faf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_32faf8:
    // 0x32faf8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x32faf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_32fafc:
    // 0x32fafc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32fafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_32fb00:
    // 0x32fb00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32fb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_32fb04:
    // 0x32fb04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32fb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32fb08:
    // 0x32fb08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32fb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32fb0c:
    // 0x32fb0c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x32fb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_32fb10:
    // 0x32fb10: 0x24826150  addiu       $v0, $a0, 0x6150
    ctx->pc = 0x32fb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 24912));
label_32fb14:
    // 0x32fb14: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x32fb14u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_32fb18:
    // 0x32fb18: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x32fb18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_32fb1c:
    // 0x32fb1c: 0x2464fe10  addiu       $a0, $v1, -0x1F0
    ctx->pc = 0x32fb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966800));
label_32fb20:
    // 0x32fb20: 0xafa4025c  sw          $a0, 0x25C($sp)
    ctx->pc = 0x32fb20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 4));
label_32fb24:
    // 0x32fb24: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x32fb24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_32fb28:
    // 0x32fb28: 0x24a2dbc0  addiu       $v0, $a1, -0x2440
    ctx->pc = 0x32fb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958016));
label_32fb2c:
    // 0x32fb2c: 0xafa20260  sw          $v0, 0x260($sp)
    ctx->pc = 0x32fb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
label_32fb30:
    // 0x32fb30: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32fb30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
label_32fb34:
    // 0x32fb34: 0x2485f420  addiu       $a1, $a0, -0xBE0
    ctx->pc = 0x32fb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964256));
label_32fb38:
    // 0x32fb38: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x32fb38u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_32fb3c:
    // 0x32fb3c: 0x3c060089  lui         $a2, 0x89
    ctx->pc = 0x32fb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)137 << 16));
label_32fb40:
    // 0x32fb40: 0x24c20a20  addiu       $v0, $a2, 0xA20
    ctx->pc = 0x32fb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 2592));
label_32fb44:
    // 0x32fb44: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x32fb44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
label_32fb48:
    // 0x32fb48: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32fb48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
label_32fb4c:
    // 0x32fb4c: 0x24830af0  addiu       $v1, $a0, 0xAF0
    ctx->pc = 0x32fb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2800));
label_32fb50:
    // 0x32fb50: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x32fb50u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_32fb54:
    // 0x32fb54: 0x3c050089  lui         $a1, 0x89
    ctx->pc = 0x32fb54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)137 << 16));
label_32fb58:
    // 0x32fb58: 0x24a212f0  addiu       $v0, $a1, 0x12F0
    ctx->pc = 0x32fb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4848));
label_32fb5c:
    // 0x32fb5c: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x32fb5cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_32fb60:
    // 0x32fb60: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32fb60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_32fb64:
    // 0x32fb64: 0x8c272718  lw          $a3, 0x2718($at)
    ctx->pc = 0x32fb64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10008)));
label_32fb68:
    // 0x32fb68: 0x14e0000d  bnez        $a3, . + 4 + (0xD << 2)
label_32fb6c:
    if (ctx->pc == 0x32FB6Cu) {
        ctx->pc = 0x32FB70u;
        goto label_32fb70;
    }
    ctx->pc = 0x32FB68u;
    {
        const bool branch_taken_0x32fb68 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x32fb68) {
            ctx->pc = 0x32FBA0u;
            goto label_32fba0;
        }
    }
    ctx->pc = 0x32FB70u;
label_32fb70:
    // 0x32fb70: 0x8e6365a0  lw          $v1, 0x65A0($s3)
    ctx->pc = 0x32fb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26016)));
label_32fb74:
    // 0x32fb74: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32fb74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_32fb78:
    // 0x32fb78: 0xac232710  sw          $v1, 0x2710($at)
    ctx->pc = 0x32fb78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10000), GPR_U32(ctx, 3));
label_32fb7c:
    // 0x32fb7c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32fb7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_32fb80:
    // 0x32fb80: 0x8c262718  lw          $a2, 0x2718($at)
    ctx->pc = 0x32fb80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10008)));
label_32fb84:
    // 0x32fb84: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x32fb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_32fb88:
    // 0x32fb88: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32fb88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_32fb8c:
    // 0x32fb8c: 0xac222718  sw          $v0, 0x2718($at)
    ctx->pc = 0x32fb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10008), GPR_U32(ctx, 2));
label_32fb90:
    // 0x32fb90: 0x826765b3  lb          $a3, 0x65B3($s3)
    ctx->pc = 0x32fb90u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 26035)));
label_32fb94:
    // 0x32fb94: 0xa26765b0  sb          $a3, 0x65B0($s3)
    ctx->pc = 0x32fb94u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 26032), (uint8_t)GPR_U32(ctx, 7));
label_32fb98:
    // 0x32fb98: 0x826265b1  lb          $v0, 0x65B1($s3)
    ctx->pc = 0x32fb98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 26033)));
label_32fb9c:
    // 0x32fb9c: 0xa26265ae  sb          $v0, 0x65AE($s3)
    ctx->pc = 0x32fb9cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 26030), (uint8_t)GPR_U32(ctx, 2));
label_32fba0:
    // 0x32fba0: 0x8e635dd0  lw          $v1, 0x5DD0($s3)
    ctx->pc = 0x32fba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24016)));
label_32fba4:
    // 0x32fba4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_32fba8:
    if (ctx->pc == 0x32FBA8u) {
        ctx->pc = 0x32FBACu;
        goto label_32fbac;
    }
    ctx->pc = 0x32FBA4u;
    {
        const bool branch_taken_0x32fba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fba4) {
            ctx->pc = 0x32FBB4u;
            goto label_32fbb4;
        }
    }
    ctx->pc = 0x32FBACu;
label_32fbac:
    // 0x32fbac: 0x10000134  b           . + 4 + (0x134 << 2)
label_32fbb0:
    if (ctx->pc == 0x32FBB0u) {
        ctx->pc = 0x32FBB4u;
        goto label_32fbb4;
    }
    ctx->pc = 0x32FBACu;
    {
        const bool branch_taken_0x32fbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fbac) {
            ctx->pc = 0x330080u;
            goto label_330080;
        }
    }
    ctx->pc = 0x32FBB4u;
label_32fbb4:
    // 0x32fbb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x32fbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32fbb8:
    // 0x32fbb8: 0x70c09628  paddub      $s2, $a2, $zero
    ctx->pc = 0x32fbb8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_32fbbc:
    // 0x32fbbc: 0x10000008  b           . + 4 + (0x8 << 2)
label_32fbc0:
    if (ctx->pc == 0x32FBC0u) {
        ctx->pc = 0x32FBC4u;
        goto label_32fbc4;
    }
    ctx->pc = 0x32FBBCu;
    {
        const bool branch_taken_0x32fbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fbbc) {
            ctx->pc = 0x32FBE0u;
            goto label_32fbe0;
        }
    }
    ctx->pc = 0x32FBC4u;
label_32fbc4:
    // 0x32fbc4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x32fbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_32fbc8:
    // 0x32fbc8: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x32fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_32fbcc:
    // 0x32fbcc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x32fbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_32fbd0:
    // 0x32fbd0: 0xac430520  sw          $v1, 0x520($v0)
    ctx->pc = 0x32fbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1312), GPR_U32(ctx, 3));
label_32fbd4:
    // 0x32fbd4: 0x26460001  addiu       $a2, $s2, 0x1
    ctx->pc = 0x32fbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_32fbd8:
    // 0x32fbd8: 0x70c09628  paddub      $s2, $a2, $zero
    ctx->pc = 0x32fbd8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_32fbdc:
    // 0x32fbdc: 0x0  nop
    ctx->pc = 0x32fbdcu;
    // NOP
label_32fbe0:
    // 0x32fbe0: 0x2a420020  slti        $v0, $s2, 0x20
    ctx->pc = 0x32fbe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
label_32fbe4:
    // 0x32fbe4: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_32fbe8:
    if (ctx->pc == 0x32FBE8u) {
        ctx->pc = 0x32FBECu;
        goto label_32fbec;
    }
    ctx->pc = 0x32FBE4u;
    {
        const bool branch_taken_0x32fbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32fbe4) {
            ctx->pc = 0x32FBC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32fbc4;
        }
    }
    ctx->pc = 0x32FBECu;
label_32fbec:
    // 0x32fbec: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32fbecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_32fbf0:
    // 0x32fbf0: 0x8c372710  lw          $s7, 0x2710($at)
    ctx->pc = 0x32fbf0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10000)));
label_32fbf4:
    // 0x32fbf4: 0xae7765a0  sw          $s7, 0x65A0($s3)
    ctx->pc = 0x32fbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 26016), GPR_U32(ctx, 23));
label_32fbf8:
    // 0x32fbf8: 0x826265b0  lb          $v0, 0x65B0($s3)
    ctx->pc = 0x32fbf8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 26032)));
label_32fbfc:
    // 0x32fbfc: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x32fbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_32fc00:
    // 0x32fc00: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x32fc00u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_32fc04:
    // 0x32fc04: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x32fc04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_32fc08:
    // 0x32fc08: 0x10670048  beq         $v1, $a3, . + 4 + (0x48 << 2)
label_32fc0c:
    if (ctx->pc == 0x32FC0Cu) {
        ctx->pc = 0x32FC10u;
        goto label_32fc10;
    }
    ctx->pc = 0x32FC08u;
    {
        const bool branch_taken_0x32fc08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x32fc08) {
            ctx->pc = 0x32FD2Cu;
            goto label_32fd2c;
        }
    }
    ctx->pc = 0x32FC10u;
label_32fc10:
    // 0x32fc10: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32fc14:
    // 0x32fc14: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
label_32fc18:
    if (ctx->pc == 0x32FC18u) {
        ctx->pc = 0x32FC1Cu;
        goto label_32fc1c;
    }
    ctx->pc = 0x32FC14u;
    {
        const bool branch_taken_0x32fc14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32fc14) {
            ctx->pc = 0x32FD00u;
            goto label_32fd00;
        }
    }
    ctx->pc = 0x32FC1Cu;
label_32fc1c:
    // 0x32fc1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32fc20:
    // 0x32fc20: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
label_32fc24:
    if (ctx->pc == 0x32FC24u) {
        ctx->pc = 0x32FC28u;
        goto label_32fc28;
    }
    ctx->pc = 0x32FC20u;
    {
        const bool branch_taken_0x32fc20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32fc20) {
            ctx->pc = 0x32FCD8u;
            goto label_32fcd8;
        }
    }
    ctx->pc = 0x32FC28u;
label_32fc28:
    // 0x32fc28: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_32fc2c:
    if (ctx->pc == 0x32FC2Cu) {
        ctx->pc = 0x32FC30u;
        goto label_32fc30;
    }
    ctx->pc = 0x32FC28u;
    {
        const bool branch_taken_0x32fc28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fc28) {
            ctx->pc = 0x32FCB0u;
            goto label_32fcb0;
        }
    }
    ctx->pc = 0x32FC30u;
label_32fc30:
    // 0x32fc30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x32fc30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32fc34:
    // 0x32fc34: 0x10660003  beq         $v1, $a2, . + 4 + (0x3 << 2)
label_32fc38:
    if (ctx->pc == 0x32FC38u) {
        ctx->pc = 0x32FC3Cu;
        goto label_32fc3c;
    }
    ctx->pc = 0x32FC34u;
    {
        const bool branch_taken_0x32fc34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x32fc34) {
            ctx->pc = 0x32FC44u;
            goto label_32fc44;
        }
    }
    ctx->pc = 0x32FC3Cu;
label_32fc3c:
    // 0x32fc3c: 0x10000045  b           . + 4 + (0x45 << 2)
label_32fc40:
    if (ctx->pc == 0x32FC40u) {
        ctx->pc = 0x32FC44u;
        goto label_32fc44;
    }
    ctx->pc = 0x32FC3Cu;
    {
        const bool branch_taken_0x32fc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fc3c) {
            ctx->pc = 0x32FD54u;
            goto label_32fd54;
        }
    }
    ctx->pc = 0x32FC44u;
label_32fc44:
    // 0x32fc44: 0x24030095  addiu       $v1, $zero, 0x95
    ctx->pc = 0x32fc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
label_32fc48:
    // 0x32fc48: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x32fc48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_32fc4c:
    // 0x32fc4c: 0x26620520  addiu       $v0, $s3, 0x520
    ctx->pc = 0x32fc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1312));
label_32fc50:
    // 0x32fc50: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x32fc50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_32fc54:
    // 0x32fc54: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x32fc54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_32fc58:
    // 0x32fc58: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x32fc58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32fc5c:
    // 0x32fc5c: 0xc0a4a6c  jal         func_2929B0
label_32fc60:
    if (ctx->pc == 0x32FC60u) {
        ctx->pc = 0x32FC64u;
        goto label_32fc64;
    }
    ctx->pc = 0x32FC5Cu;
    SET_GPR_U32(ctx, 31, 0x32FC64u);
    ctx->pc = 0x2929B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2929B0u, 0x32FC5Cu, 0x32FC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FC64u;
label_32fc64:
    // 0x32fc64: 0x24030094  addiu       $v1, $zero, 0x94
    ctx->pc = 0x32fc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
label_32fc68:
    // 0x32fc68: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x32fc68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_32fc6c:
    // 0x32fc6c: 0x26620520  addiu       $v0, $s3, 0x520
    ctx->pc = 0x32fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1312));
label_32fc70:
    // 0x32fc70: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x32fc70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_32fc74:
    // 0x32fc74: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x32fc74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_32fc78:
    // 0x32fc78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x32fc78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32fc7c:
    // 0x32fc7c: 0xc0a4a6c  jal         func_2929B0
label_32fc80:
    if (ctx->pc == 0x32FC80u) {
        ctx->pc = 0x32FC84u;
        goto label_32fc84;
    }
    ctx->pc = 0x32FC7Cu;
    SET_GPR_U32(ctx, 31, 0x32FC84u);
    ctx->pc = 0x2929B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2929B0u, 0x32FC7Cu, 0x32FC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FC84u;
label_32fc84:
    // 0x32fc84: 0x24020093  addiu       $v0, $zero, 0x93
    ctx->pc = 0x32fc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
label_32fc88:
    // 0x32fc88: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32fc88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_32fc8c:
    // 0x32fc8c: 0x26630520  addiu       $v1, $s3, 0x520
    ctx->pc = 0x32fc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1312));
label_32fc90:
    // 0x32fc90: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x32fc90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_32fc94:
    // 0x32fc94: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_32fc98:
    // 0x32fc98: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x32fc98u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_32fc9c:
    // 0x32fc9c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x32fc9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32fca0:
    // 0x32fca0: 0xc0a4a6c  jal         func_2929B0
label_32fca4:
    if (ctx->pc == 0x32FCA4u) {
        ctx->pc = 0x32FCA8u;
        goto label_32fca8;
    }
    ctx->pc = 0x32FCA0u;
    SET_GPR_U32(ctx, 31, 0x32FCA8u);
    ctx->pc = 0x2929B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2929B0u, 0x32FCA0u, 0x32FCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FCA8u;
label_32fca8:
    // 0x32fca8: 0x1000002a  b           . + 4 + (0x2A << 2)
label_32fcac:
    if (ctx->pc == 0x32FCACu) {
        ctx->pc = 0x32FCB0u;
        goto label_32fcb0;
    }
    ctx->pc = 0x32FCA8u;
    {
        const bool branch_taken_0x32fca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fca8) {
            ctx->pc = 0x32FD54u;
            goto label_32fd54;
        }
    }
    ctx->pc = 0x32FCB0u;
label_32fcb0:
    // 0x32fcb0: 0x2403009e  addiu       $v1, $zero, 0x9E
    ctx->pc = 0x32fcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
label_32fcb4:
    // 0x32fcb4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x32fcb4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_32fcb8:
    // 0x32fcb8: 0x26680520  addiu       $t0, $s3, 0x520
    ctx->pc = 0x32fcb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 1312));
label_32fcbc:
    // 0x32fcbc: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x32fcbcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_32fcc0:
    // 0x32fcc0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x32fcc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_32fcc4:
    // 0x32fcc4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x32fcc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32fcc8:
    // 0x32fcc8: 0xc0a4a6c  jal         func_2929B0
label_32fccc:
    if (ctx->pc == 0x32FCCCu) {
        ctx->pc = 0x32FCD0u;
        goto label_32fcd0;
    }
    ctx->pc = 0x32FCC8u;
    SET_GPR_U32(ctx, 31, 0x32FCD0u);
    ctx->pc = 0x2929B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2929B0u, 0x32FCC8u, 0x32FCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FCD0u;
label_32fcd0:
    // 0x32fcd0: 0x10000020  b           . + 4 + (0x20 << 2)
label_32fcd4:
    if (ctx->pc == 0x32FCD4u) {
        ctx->pc = 0x32FCD8u;
        goto label_32fcd8;
    }
    ctx->pc = 0x32FCD0u;
    {
        const bool branch_taken_0x32fcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fcd0) {
            ctx->pc = 0x32FD54u;
            goto label_32fd54;
        }
    }
    ctx->pc = 0x32FCD8u;
label_32fcd8:
    // 0x32fcd8: 0x2406009f  addiu       $a2, $zero, 0x9F
    ctx->pc = 0x32fcd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
label_32fcdc:
    // 0x32fcdc: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x32fcdcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_32fce0:
    // 0x32fce0: 0x26630520  addiu       $v1, $s3, 0x520
    ctx->pc = 0x32fce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1312));
label_32fce4:
    // 0x32fce4: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x32fce4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_32fce8:
    // 0x32fce8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x32fce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_32fcec:
    // 0x32fcec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x32fcecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32fcf0:
    // 0x32fcf0: 0xc0a4a6c  jal         func_2929B0
label_32fcf4:
    if (ctx->pc == 0x32FCF4u) {
        ctx->pc = 0x32FCF8u;
        goto label_32fcf8;
    }
    ctx->pc = 0x32FCF0u;
    SET_GPR_U32(ctx, 31, 0x32FCF8u);
    ctx->pc = 0x2929B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2929B0u, 0x32FCF0u, 0x32FCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FCF8u;
label_32fcf8:
    // 0x32fcf8: 0x10000016  b           . + 4 + (0x16 << 2)
label_32fcfc:
    if (ctx->pc == 0x32FCFCu) {
        ctx->pc = 0x32FD00u;
        goto label_32fd00;
    }
    ctx->pc = 0x32FCF8u;
    {
        const bool branch_taken_0x32fcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fcf8) {
            ctx->pc = 0x32FD54u;
            goto label_32fd54;
        }
    }
    ctx->pc = 0x32FD00u;
label_32fd00:
    // 0x32fd00: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x32fd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_32fd04:
    // 0x32fd04: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x32fd04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_32fd08:
    // 0x32fd08: 0x26630520  addiu       $v1, $s3, 0x520
    ctx->pc = 0x32fd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1312));
label_32fd0c:
    // 0x32fd0c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x32fd0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_32fd10:
    // 0x32fd10: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x32fd10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_32fd14:
    // 0x32fd14: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x32fd14u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_32fd18:
    // 0x32fd18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x32fd18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32fd1c:
    // 0x32fd1c: 0xc0a4a6c  jal         func_2929B0
label_32fd20:
    if (ctx->pc == 0x32FD20u) {
        ctx->pc = 0x32FD24u;
        goto label_32fd24;
    }
    ctx->pc = 0x32FD1Cu;
    SET_GPR_U32(ctx, 31, 0x32FD24u);
    ctx->pc = 0x2929B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2929B0u, 0x32FD1Cu, 0x32FD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FD24u;
label_32fd24:
    // 0x32fd24: 0x1000000b  b           . + 4 + (0xB << 2)
label_32fd28:
    if (ctx->pc == 0x32FD28u) {
        ctx->pc = 0x32FD2Cu;
        goto label_32fd2c;
    }
    ctx->pc = 0x32FD24u;
    {
        const bool branch_taken_0x32fd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fd24) {
            ctx->pc = 0x32FD54u;
            goto label_32fd54;
        }
    }
    ctx->pc = 0x32FD2Cu;
label_32fd2c:
    // 0x32fd2c: 0x240700a1  addiu       $a3, $zero, 0xA1
    ctx->pc = 0x32fd2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
label_32fd30:
    // 0x32fd30: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x32fd30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_32fd34:
    // 0x32fd34: 0x26680520  addiu       $t0, $s3, 0x520
    ctx->pc = 0x32fd34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 1312));
label_32fd38:
    // 0x32fd38: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x32fd38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_32fd3c:
    // 0x32fd3c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x32fd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_32fd40:
    // 0x32fd40: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x32fd40u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_32fd44:
    // 0x32fd44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x32fd44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32fd48:
    // 0x32fd48: 0xc0a4a6c  jal         func_2929B0
label_32fd4c:
    if (ctx->pc == 0x32FD4Cu) {
        ctx->pc = 0x32FD50u;
        goto label_32fd50;
    }
    ctx->pc = 0x32FD48u;
    SET_GPR_U32(ctx, 31, 0x32FD50u);
    ctx->pc = 0x2929B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2929B0u, 0x32FD48u, 0x32FD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FD50u;
label_32fd50:
    // 0x32fd50: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x32fd50u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_32fd54:
    // 0x32fd54: 0x8e675dd0  lw          $a3, 0x5DD0($s3)
    ctx->pc = 0x32fd54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24016)));
label_32fd58:
    // 0x32fd58: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x32fd58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_32fd5c:
    // 0x32fd5c: 0xae675dd0  sw          $a3, 0x5DD0($s3)
    ctx->pc = 0x32fd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24016), GPR_U32(ctx, 7));
label_32fd60:
    // 0x32fd60: 0x8fa7025c  lw          $a3, 0x25C($sp)
    ctx->pc = 0x32fd60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_32fd64:
    // 0x32fd64: 0x8ce30258  lw          $v1, 0x258($a3)
    ctx->pc = 0x32fd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 600)));
label_32fd68:
    // 0x32fd68: 0x24021770  addiu       $v0, $zero, 0x1770
    ctx->pc = 0x32fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
label_32fd6c:
    // 0x32fd6c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x32fd6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_32fd70:
    // 0x32fd70: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x32fd70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_32fd74:
    // 0x32fd74: 0x2466a6a0  addiu       $a2, $v1, -0x5960
    ctx->pc = 0x32fd74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944416));
label_32fd78:
    // 0x32fd78: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x32fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_32fd7c:
    // 0x32fd7c: 0x826365b3  lb          $v1, 0x65B3($s3)
    ctx->pc = 0x32fd7cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 26035)));
label_32fd80:
    // 0x32fd80: 0x3963c  dsll32      $s2, $v1, 24
    ctx->pc = 0x32fd80u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 24));
label_32fd84:
    // 0x32fd84: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x32fd84u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
label_32fd88:
    // 0x32fd88: 0x123940  sll         $a3, $s2, 5
    ctx->pc = 0x32fd88u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
label_32fd8c:
    // 0x32fd8c: 0xf23023  subu        $a2, $a3, $s2
    ctx->pc = 0x32fd8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
label_32fd90:
    // 0x32fd90: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x32fd90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_32fd94:
    // 0x32fd94: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x32fd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_32fd98:
    // 0x32fd98: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x32fd98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_32fd9c:
    // 0x32fd9c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x32fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_32fda0:
    // 0x32fda0: 0x8fa3025c  lw          $v1, 0x25C($sp)
    ctx->pc = 0x32fda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_32fda4:
    // 0x32fda4: 0x8c67025c  lw          $a3, 0x25C($v1)
    ctx->pc = 0x32fda4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 604)));
label_32fda8:
    // 0x32fda8: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x32fda8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_32fdac:
    // 0x32fdac: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x32fdacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_32fdb0:
    // 0x32fdb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32fdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_32fdb4:
    // 0x32fdb4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x32fdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_32fdb8:
    // 0x32fdb8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x32fdb8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_32fdbc:
    // 0x32fdbc: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x32fdbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_32fdc0:
    // 0x32fdc0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x32fdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_32fdc4:
    // 0x32fdc4: 0xc31023  subu        $v0, $a2, $v1
    ctx->pc = 0x32fdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_32fdc8:
    // 0x32fdc8: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x32fdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_32fdcc:
    // 0x32fdcc: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x32fdccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_32fdd0:
    // 0x32fdd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32fdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_32fdd4:
    // 0x32fdd4: 0xafa2026c  sw          $v0, 0x26C($sp)
    ctx->pc = 0x32fdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
label_32fdd8:
    // 0x32fdd8: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x32fdd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_32fddc:
    // 0x32fddc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x32fddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_32fde0:
    // 0x32fde0: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x32fde0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_32fde4:
    // 0x32fde4: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x32fde4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_32fde8:
    // 0x32fde8: 0xafa60270  sw          $a2, 0x270($sp)
    ctx->pc = 0x32fde8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 6));
label_32fdec:
    // 0x32fdec: 0x8fa2025c  lw          $v0, 0x25C($sp)
    ctx->pc = 0x32fdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_32fdf0:
    // 0x32fdf0: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x32fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
label_32fdf4:
    // 0x32fdf4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x32fdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_32fdf8:
    // 0x32fdf8: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x32fdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_32fdfc:
    // 0x32fdfc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x32fdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_32fe00:
    // 0x32fe00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32fe04:
    // 0x32fe04: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x32fe04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_32fe08:
    // 0x32fe08: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32fe08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_32fe0c:
    // 0x32fe0c: 0x24424ab0  addiu       $v0, $v0, 0x4AB0
    ctx->pc = 0x32fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19120));
label_32fe10:
    // 0x32fe10: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x32fe10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_32fe14:
    // 0x32fe14: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x32fe14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_32fe18:
    // 0x32fe18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32fe1c:
    // 0x32fe1c: 0x8fa3025c  lw          $v1, 0x25C($sp)
    ctx->pc = 0x32fe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_32fe20:
    // 0x32fe20: 0x8c63025c  lw          $v1, 0x25C($v1)
    ctx->pc = 0x32fe20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 604)));
label_32fe24:
    // 0x32fe24: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x32fe24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_32fe28:
    // 0x32fe28: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x32fe28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_32fe2c:
    // 0x32fe2c: 0xafa60268  sw          $a2, 0x268($sp)
    ctx->pc = 0x32fe2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 6));
label_32fe30:
    // 0x32fe30: 0x8fa2025c  lw          $v0, 0x25C($sp)
    ctx->pc = 0x32fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_32fe34:
    // 0x32fe34: 0x8c420258  lw          $v0, 0x258($v0)
    ctx->pc = 0x32fe34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
label_32fe38:
    // 0x32fe38: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x32fe38u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_32fe3c:
    // 0x32fe3c: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x32fe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_32fe40:
    // 0x32fe40: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32fe40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_32fe44:
    // 0x32fe44: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x32fe44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_32fe48:
    // 0x32fe48: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x32fe48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_32fe4c:
    // 0x32fe4c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_32fe50:
    // 0x32fe50: 0x24425e60  addiu       $v0, $v0, 0x5E60
    ctx->pc = 0x32fe50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24160));
label_32fe54:
    // 0x32fe54: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x32fe54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_32fe58:
    // 0x32fe58: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x32fe58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_32fe5c:
    // 0x32fe5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32fe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32fe60:
    // 0x32fe60: 0x8fa6025c  lw          $a2, 0x25C($sp)
    ctx->pc = 0x32fe60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_32fe64:
    // 0x32fe64: 0x8cc3025c  lw          $v1, 0x25C($a2)
    ctx->pc = 0x32fe64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 604)));
label_32fe68:
    // 0x32fe68: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x32fe68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_32fe6c:
    // 0x32fe6c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x32fe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_32fe70:
    // 0x32fe70: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x32fe70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_32fe74:
    // 0x32fe74: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x32fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_32fe78:
    // 0x32fe78: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x32fe78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32fe7c:
    // 0x32fe7c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_32fe80:
    if (ctx->pc == 0x32FE80u) {
        ctx->pc = 0x32FE84u;
        goto label_32fe84;
    }
    ctx->pc = 0x32FE7Cu;
    {
        const bool branch_taken_0x32fe7c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x32fe7c) {
            ctx->pc = 0x32FE98u;
            goto label_32fe98;
        }
    }
    ctx->pc = 0x32FE84u;
label_32fe84:
    // 0x32fe84: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32fe84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_32fe88:
    // 0x32fe88: 0x0  nop
    ctx->pc = 0x32fe88u;
    // NOP
label_32fe8c:
    // 0x32fe8c: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x32fe8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_32fe90:
    // 0x32fe90: 0x10000008  b           . + 4 + (0x8 << 2)
label_32fe94:
    if (ctx->pc == 0x32FE94u) {
        ctx->pc = 0x32FE98u;
        goto label_32fe98;
    }
    ctx->pc = 0x32FE90u;
    {
        const bool branch_taken_0x32fe90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fe90) {
            ctx->pc = 0x32FEB4u;
            goto label_32feb4;
        }
    }
    ctx->pc = 0x32FE98u;
label_32fe98:
    // 0x32fe98: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x32fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_32fe9c:
    // 0x32fe9c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x32fe9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_32fea0:
    // 0x32fea0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32fea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_32fea4:
    // 0x32fea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32fea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32fea8:
    // 0x32fea8: 0x0  nop
    ctx->pc = 0x32fea8u;
    // NOP
label_32feac:
    // 0x32feac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32feacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_32feb0:
    // 0x32feb0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x32feb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_32feb4:
    // 0x32feb4: 0x3c064248  lui         $a2, 0x4248
    ctx->pc = 0x32feb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16968 << 16));
label_32feb8:
    // 0x32feb8: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x32feb8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_32febc:
    // 0x32febc: 0x0  nop
    ctx->pc = 0x32febcu;
    // NOP
label_32fec0:
    // 0x32fec0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x32fec0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_32fec4:
    // 0x32fec4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32fec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_32fec8:
    // 0x32fec8: 0xe42026f0  swc1        $f0, 0x26F0($at)
    ctx->pc = 0x32fec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 9968), bits); }
label_32fecc:
    // 0x32fecc: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x32feccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_32fed0:
    // 0x32fed0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x32fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_32fed4:
    // 0x32fed4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_32fed8:
    if (ctx->pc == 0x32FED8u) {
        ctx->pc = 0x32FEDCu;
        goto label_32fedc;
    }
    ctx->pc = 0x32FED4u;
    {
        const bool branch_taken_0x32fed4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x32fed4) {
            ctx->pc = 0x32FEF0u;
            goto label_32fef0;
        }
    }
    ctx->pc = 0x32FEDCu;
label_32fedc:
    // 0x32fedc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32fedcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32fee0:
    // 0x32fee0: 0x0  nop
    ctx->pc = 0x32fee0u;
    // NOP
label_32fee4:
    // 0x32fee4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32fee4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_32fee8:
    // 0x32fee8: 0x1000000a  b           . + 4 + (0xA << 2)
label_32feec:
    if (ctx->pc == 0x32FEECu) {
        ctx->pc = 0x32FEF0u;
        goto label_32fef0;
    }
    ctx->pc = 0x32FEE8u;
    {
        const bool branch_taken_0x32fee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fee8) {
            ctx->pc = 0x32FF14u;
            goto label_32ff14;
        }
    }
    ctx->pc = 0x32FEF0u;
label_32fef0:
    // 0x32fef0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x32fef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_32fef4:
    // 0x32fef4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32fef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_32fef8:
    // 0x32fef8: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x32fef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_32fefc:
    // 0x32fefc: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x32fefcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_32ff00:
    // 0x32ff00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32ff00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_32ff04:
    // 0x32ff04: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x32ff04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_32ff08:
    // 0x32ff08: 0x0  nop
    ctx->pc = 0x32ff08u;
    // NOP
label_32ff0c:
    // 0x32ff0c: 0x46806060  cvt.s.w     $f1, $f12
    ctx->pc = 0x32ff0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_32ff10:
    // 0x32ff10: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x32ff10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_32ff14:
    // 0x32ff14: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x32ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_32ff18:
    // 0x32ff18: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x32ff18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_32ff1c:
    // 0x32ff1c: 0x0  nop
    ctx->pc = 0x32ff1cu;
    // NOP
label_32ff20:
    // 0x32ff20: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x32ff20u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_32ff24:
    // 0x32ff24: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32ff24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_32ff28:
    // 0x32ff28: 0xe42c26f4  swc1        $f12, 0x26F4($at)
    ctx->pc = 0x32ff28u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 9972), bits); }
label_32ff2c:
    // 0x32ff2c: 0x3c0342fa  lui         $v1, 0x42FA
    ctx->pc = 0x32ff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17146 << 16));
label_32ff30:
    // 0x32ff30: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32ff30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_32ff34:
    // 0x32ff34: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x32ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_32ff38:
    // 0x32ff38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x32ff38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_32ff3c:
    // 0x32ff3c: 0x0  nop
    ctx->pc = 0x32ff3cu;
    // NOP
label_32ff40:
    // 0x32ff40: 0x46806020  cvt.s.w     $f0, $f12
    ctx->pc = 0x32ff40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_32ff44:
    // 0x32ff44: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x32ff44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_32ff48:
    // 0x32ff48: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x32ff48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
label_32ff4c:
    // 0x32ff4c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x32ff4cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32ff50:
    // 0x32ff50: 0x0  nop
    ctx->pc = 0x32ff50u;
    // NOP
label_32ff54:
    // 0x32ff54: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x32ff54u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_32ff58:
    // 0x32ff58: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32ff58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_32ff5c:
    // 0x32ff5c: 0xc42026f0  lwc1        $f0, 0x26F0($at)
    ctx->pc = 0x32ff5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 9968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32ff60:
    // 0x32ff60: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x32ff60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_32ff64:
    // 0x32ff64: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32ff64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_32ff68:
    // 0x32ff68: 0xe42026f8  swc1        $f0, 0x26F8($at)
    ctx->pc = 0x32ff68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 9976), bits); }
label_32ff6c:
    // 0x32ff6c: 0x3c0342fa  lui         $v1, 0x42FA
    ctx->pc = 0x32ff6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17146 << 16));
label_32ff70:
    // 0x32ff70: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32ff70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_32ff74:
    // 0x32ff74: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x32ff74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_32ff78:
    // 0x32ff78: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x32ff78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_32ff7c:
    // 0x32ff7c: 0x0  nop
    ctx->pc = 0x32ff7cu;
    // NOP
label_32ff80:
    // 0x32ff80: 0x46806020  cvt.s.w     $f0, $f12
    ctx->pc = 0x32ff80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_32ff84:
    // 0x32ff84: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x32ff84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_32ff88:
    // 0x32ff88: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x32ff88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
label_32ff8c:
    // 0x32ff8c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x32ff8cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32ff90:
    // 0x32ff90: 0x0  nop
    ctx->pc = 0x32ff90u;
    // NOP
label_32ff94:
    // 0x32ff94: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x32ff94u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_32ff98:
    // 0x32ff98: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32ff98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_32ff9c:
    // 0x32ff9c: 0xc42026f4  lwc1        $f0, 0x26F4($at)
    ctx->pc = 0x32ff9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 9972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32ffa0:
    // 0x32ffa0: 0x460c0040  add.s       $f1, $f0, $f12
    ctx->pc = 0x32ffa0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_32ffa4:
    // 0x32ffa4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32ffa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_32ffa8:
    // 0x32ffa8: 0xe42126fc  swc1        $f1, 0x26FC($at)
    ctx->pc = 0x32ffa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 9980), bits); }
label_32ffac:
    // 0x32ffac: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32ffacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_32ffb0:
    // 0x32ffb0: 0xc42026f8  lwc1        $f0, 0x26F8($at)
    ctx->pc = 0x32ffb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 9976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32ffb4:
    // 0x32ffb4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32ffb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_32ffb8:
    // 0x32ffb8: 0xe42026f0  swc1        $f0, 0x26F0($at)
    ctx->pc = 0x32ffb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 9968), bits); }
label_32ffbc:
    // 0x32ffbc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32ffbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_32ffc0:
    // 0x32ffc0: 0xc42c26fc  lwc1        $f12, 0x26FC($at)
    ctx->pc = 0x32ffc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 9980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_32ffc4:
    // 0x32ffc4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32ffc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_32ffc8:
    // 0x32ffc8: 0xe42c26f4  swc1        $f12, 0x26F4($at)
    ctx->pc = 0x32ffc8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 9972), bits); }
label_32ffcc:
    // 0x32ffcc: 0x8fa60260  lw          $a2, 0x260($sp)
    ctx->pc = 0x32ffccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_32ffd0:
    // 0x32ffd0: 0xc4c00120  lwc1        $f0, 0x120($a2)
    ctx->pc = 0x32ffd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32ffd4:
    // 0x32ffd4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x32ffd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_32ffd8:
    // 0x32ffd8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x32ffd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32ffdc:
    // 0x32ffdc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x32ffdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_32ffe0:
    // 0x32ffe0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32ffe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_32ffe4:
    // 0x32ffe4: 0xe4202700  swc1        $f0, 0x2700($at)
    ctx->pc = 0x32ffe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 9984), bits); }
label_32ffe8:
    // 0x32ffe8: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x32ffe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_32ffec:
    // 0x32ffec: 0xc46c0128  lwc1        $f12, 0x128($v1)
    ctx->pc = 0x32ffecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_32fff0:
    // 0x32fff0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x32fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_32fff4:
    // 0x32fff4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x32fff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32fff8:
    // 0x32fff8: 0x46006041  sub.s       $f1, $f12, $f0
    ctx->pc = 0x32fff8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_32fffc:
    // 0x32fffc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32fffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_330000:
    // 0x330000: 0xe4212708  swc1        $f1, 0x2708($at)
    ctx->pc = 0x330000u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 9992), bits); }
label_330004:
    // 0x330004: 0x8fa3026c  lw          $v1, 0x26C($sp)
    ctx->pc = 0x330004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_330008:
    // 0x330008: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x330008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33000c:
    // 0x33000c: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x33000cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
label_330010:
    // 0x330010: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x330010u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_330014:
    // 0x330014: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x330014u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330018:
    // 0x330018: 0x0  nop
    ctx->pc = 0x330018u;
    // NOP
label_33001c:
    // 0x33001c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x33001cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_330020:
    // 0x330020: 0x3c0a42fa  lui         $t2, 0x42FA
    ctx->pc = 0x330020u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17146 << 16));
label_330024:
    // 0x330024: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x330024u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330028:
    // 0x330028: 0x0  nop
    ctx->pc = 0x330028u;
    // NOP
label_33002c:
    // 0x33002c: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x33002cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_330030:
    // 0x330030: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x330030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_330034:
    // 0x330034: 0xc4202700  lwc1        $f0, 0x2700($at)
    ctx->pc = 0x330034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 9984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330038:
    // 0x330038: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x330038u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_33003c:
    // 0x33003c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33003cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_330040:
    // 0x330040: 0xe42c2700  swc1        $f12, 0x2700($at)
    ctx->pc = 0x330040u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 9984), bits); }
label_330044:
    // 0x330044: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x330044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_330048:
    // 0x330048: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x330048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33004c:
    // 0x33004c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x33004cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_330050:
    // 0x330050: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330054:
    // 0x330054: 0x0  nop
    ctx->pc = 0x330054u;
    // NOP
label_330058:
    // 0x330058: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x330058u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_33005c:
    // 0x33005c: 0x3c0342fa  lui         $v1, 0x42FA
    ctx->pc = 0x33005cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17146 << 16));
label_330060:
    // 0x330060: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x330060u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330064:
    // 0x330064: 0x0  nop
    ctx->pc = 0x330064u;
    // NOP
label_330068:
    // 0x330068: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x330068u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_33006c:
    // 0x33006c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33006cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_330070:
    // 0x330070: 0xc4202708  lwc1        $f0, 0x2708($at)
    ctx->pc = 0x330070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 9992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330074:
    // 0x330074: 0x460c0040  add.s       $f1, $f0, $f12
    ctx->pc = 0x330074u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_330078:
    // 0x330078: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x330078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_33007c:
    // 0x33007c: 0xe4212708  swc1        $f1, 0x2708($at)
    ctx->pc = 0x33007cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 9992), bits); }
label_330080:
    // 0x330080: 0x826265b0  lb          $v0, 0x65B0($s3)
    ctx->pc = 0x330080u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 26032)));
label_330084:
    // 0x330084: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x330084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_330088:
    // 0x330088: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x330088u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_33008c:
    // 0x33008c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x33008cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_330090:
    // 0x330090: 0x826b65b3  lb          $t3, 0x65B3($s3)
    ctx->pc = 0x330090u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 26035)));
label_330094:
    // 0x330094: 0xb1e3c  dsll32      $v1, $t3, 24
    ctx->pc = 0x330094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) << (32 + 24));
label_330098:
    // 0x330098: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x330098u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_33009c:
    // 0x33009c: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x33009cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3300a0:
    // 0x3300a0: 0x1443020a  bne         $v0, $v1, . + 4 + (0x20A << 2)
label_3300a4:
    if (ctx->pc == 0x3300A4u) {
        ctx->pc = 0x3300A8u;
        goto label_3300a8;
    }
    ctx->pc = 0x3300A0u;
    {
        const bool branch_taken_0x3300a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3300a0) {
            ctx->pc = 0x3308CCu;
            goto label_3308cc;
        }
    }
    ctx->pc = 0x3300A8u;
label_3300a8:
    // 0x3300a8: 0x3c07003b  lui         $a3, 0x3B
    ctx->pc = 0x3300a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59 << 16));
label_3300ac:
    // 0x3300ac: 0x24e79700  addiu       $a3, $a3, -0x6900
    ctx->pc = 0x3300acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940416));
label_3300b0:
    // 0x3300b0: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x3300b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_3300b4:
    // 0x3300b4: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x3300b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_3300b8:
    // 0x3300b8: 0x78e80010  lq          $t0, 0x10($a3)
    ctx->pc = 0x3300b8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 7), 16)));
label_3300bc:
    // 0x3300bc: 0x78e90020  lq          $t1, 0x20($a3)
    ctx->pc = 0x3300bcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 7), 32)));
label_3300c0:
    // 0x3300c0: 0x78e20030  lq          $v0, 0x30($a3)
    ctx->pc = 0x3300c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 48)));
label_3300c4:
    // 0x3300c4: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x3300c4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
label_3300c8:
    // 0x3300c8: 0x7cc80010  sq          $t0, 0x10($a2)
    ctx->pc = 0x3300c8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 8));
label_3300cc:
    // 0x3300cc: 0x7cc90020  sq          $t1, 0x20($a2)
    ctx->pc = 0x3300ccu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 9));
label_3300d0:
    // 0x3300d0: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x3300d0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
label_3300d4:
    // 0x3300d4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x3300d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_3300d8:
    // 0x3300d8: 0x246395a0  addiu       $v1, $v1, -0x6A60
    ctx->pc = 0x3300d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940064));
label_3300dc:
    // 0x3300dc: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x3300dcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_3300e0:
    // 0x3300e0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3300e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3300e4:
    // 0x3300e4: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3300e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3300e8:
    // 0x3300e8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3300e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3300ec:
    // 0x3300ec: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x3300ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3300f0:
    // 0x3300f0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3300f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3300f4:
    // 0x3300f4: 0xafa2026c  sw          $v0, 0x26C($sp)
    ctx->pc = 0x3300f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
label_3300f8:
    // 0x3300f8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3300f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3300fc:
    // 0x3300fc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3300fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_330100:
    // 0x330100: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x330100u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_330104:
    // 0x330104: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x330104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
label_330108:
    // 0x330108: 0x8fa6026c  lw          $a2, 0x26C($sp)
    ctx->pc = 0x330108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_33010c:
    // 0x33010c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x33010cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_330110:
    // 0x330110: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x330110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_330114:
    // 0x330114: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x330114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_330118:
    // 0x330118: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x330118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_33011c:
    // 0x33011c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x33011cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_330120:
    // 0x330120: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x330120u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330124:
    // 0x330124: 0x0  nop
    ctx->pc = 0x330124u;
    // NOP
label_330128:
    // 0x330128: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x330128u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_33012c:
    // 0x33012c: 0xc7a001c0  lwc1        $f0, 0x1C0($sp)
    ctx->pc = 0x33012cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330130:
    // 0x330130: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x330130u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_330134:
    // 0x330134: 0xe7a101c0  swc1        $f1, 0x1C0($sp)
    ctx->pc = 0x330134u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_330138:
    // 0x330138: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x330138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_33013c:
    // 0x33013c: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x33013cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_330140:
    // 0x330140: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x330140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_330144:
    // 0x330144: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x330144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_330148:
    // 0x330148: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x330148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_33014c:
    // 0x33014c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x33014cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_330150:
    // 0x330150: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330154:
    // 0x330154: 0x0  nop
    ctx->pc = 0x330154u;
    // NOP
label_330158:
    // 0x330158: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x330158u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_33015c:
    // 0x33015c: 0xc7a001d0  lwc1        $f0, 0x1D0($sp)
    ctx->pc = 0x33015cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330160:
    // 0x330160: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x330160u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_330164:
    // 0x330164: 0xe7a101d0  swc1        $f1, 0x1D0($sp)
    ctx->pc = 0x330164u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_330168:
    // 0x330168: 0x8fa6026c  lw          $a2, 0x26C($sp)
    ctx->pc = 0x330168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_33016c:
    // 0x33016c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x33016cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_330170:
    // 0x330170: 0x464821  addu        $t1, $v0, $a2
    ctx->pc = 0x330170u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_330174:
    // 0x330174: 0x93880  sll         $a3, $t1, 2
    ctx->pc = 0x330174u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_330178:
    // 0x330178: 0x1273021  addu        $a2, $t1, $a3
    ctx->pc = 0x330178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_33017c:
    // 0x33017c: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x33017cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_330180:
    // 0x330180: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x330180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_330184:
    // 0x330184: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x330184u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_330188:
    // 0x330188: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33018c:
    // 0x33018c: 0x0  nop
    ctx->pc = 0x33018cu;
    // NOP
label_330190:
    // 0x330190: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x330190u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_330194:
    // 0x330194: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x330194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330198:
    // 0x330198: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x330198u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_33019c:
    // 0x33019c: 0xe7a101e0  swc1        $f1, 0x1E0($sp)
    ctx->pc = 0x33019cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_3301a0:
    // 0x3301a0: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x3301a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_3301a4:
    // 0x3301a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3301a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3301a8:
    // 0x3301a8: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x3301a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3301ac:
    // 0x3301ac: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3301acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3301b0:
    // 0x3301b0: 0xc33821  addu        $a3, $a2, $v1
    ctx->pc = 0x3301b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_3301b4:
    // 0x3301b4: 0x74040  sll         $t0, $a3, 1
    ctx->pc = 0x3301b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_3301b8:
    // 0x3301b8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3301b8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3301bc:
    // 0x3301bc: 0x0  nop
    ctx->pc = 0x3301bcu;
    // NOP
label_3301c0:
    // 0x3301c0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x3301c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_3301c4:
    // 0x3301c4: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x3301c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3301c8:
    // 0x3301c8: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x3301c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_3301cc:
    // 0x3301cc: 0xe7a101f0  swc1        $f1, 0x1F0($sp)
    ctx->pc = 0x3301ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_3301d0:
    // 0x3301d0: 0x8fa60270  lw          $a2, 0x270($sp)
    ctx->pc = 0x3301d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_3301d4:
    // 0x3301d4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3301d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3301d8:
    // 0x3301d8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3301d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3301dc:
    // 0x3301dc: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x3301dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3301e0:
    // 0x3301e0: 0x473021  addu        $a2, $v0, $a3
    ctx->pc = 0x3301e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3301e4:
    // 0x3301e4: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x3301e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_3301e8:
    // 0x3301e8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3301e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3301ec:
    // 0x3301ec: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3301ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3301f0:
    // 0x3301f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3301f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3301f4:
    // 0x3301f4: 0x0  nop
    ctx->pc = 0x3301f4u;
    // NOP
label_3301f8:
    // 0x3301f8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x3301f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_3301fc:
    // 0x3301fc: 0xc7a001c4  lwc1        $f0, 0x1C4($sp)
    ctx->pc = 0x3301fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330200:
    // 0x330200: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x330200u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_330204:
    // 0x330204: 0xe7a101c4  swc1        $f1, 0x1C4($sp)
    ctx->pc = 0x330204u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_330208:
    // 0x330208: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x330208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_33020c:
    // 0x33020c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x33020cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_330210:
    // 0x330210: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x330210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_330214:
    // 0x330214: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x330214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_330218:
    // 0x330218: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x330218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33021c:
    // 0x33021c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x33021cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_330220:
    // 0x330220: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x330220u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330224:
    // 0x330224: 0x0  nop
    ctx->pc = 0x330224u;
    // NOP
label_330228:
    // 0x330228: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x330228u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_33022c:
    // 0x33022c: 0xc7a001d4  lwc1        $f0, 0x1D4($sp)
    ctx->pc = 0x33022cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330230:
    // 0x330230: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x330230u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_330234:
    // 0x330234: 0xe7a101d4  swc1        $f1, 0x1D4($sp)
    ctx->pc = 0x330234u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
label_330238:
    // 0x330238: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x330238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_33023c:
    // 0x33023c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x33023cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_330240:
    // 0x330240: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x330240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_330244:
    // 0x330244: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x330244u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_330248:
    // 0x330248: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x330248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_33024c:
    // 0x33024c: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x33024cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_330250:
    // 0x330250: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330254:
    // 0x330254: 0x0  nop
    ctx->pc = 0x330254u;
    // NOP
label_330258:
    // 0x330258: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x330258u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_33025c:
    // 0x33025c: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x33025cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330260:
    // 0x330260: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x330260u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_330264:
    // 0x330264: 0xe7a101e4  swc1        $f1, 0x1E4($sp)
    ctx->pc = 0x330264u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
label_330268:
    // 0x330268: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x330268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_33026c:
    // 0x33026c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x33026cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_330270:
    // 0x330270: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x330270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_330274:
    // 0x330274: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x330274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_330278:
    // 0x330278: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x330278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_33027c:
    // 0x33027c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x33027cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_330280:
    // 0x330280: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330284:
    // 0x330284: 0x0  nop
    ctx->pc = 0x330284u;
    // NOP
label_330288:
    // 0x330288: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x330288u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_33028c:
    // 0x33028c: 0xc7a001f4  lwc1        $f0, 0x1F4($sp)
    ctx->pc = 0x33028cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330290:
    // 0x330290: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x330290u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_330294:
    // 0x330294: 0xe7a101f4  swc1        $f1, 0x1F4($sp)
    ctx->pc = 0x330294u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
label_330298:
    // 0x330298: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x330298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_33029c:
    // 0x33029c: 0xc4202700  lwc1        $f0, 0x2700($at)
    ctx->pc = 0x33029cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 9984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3302a0:
    // 0x3302a0: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x3302a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_3302a4:
    // 0x3302a4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3302a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_3302a8:
    // 0x3302a8: 0xc42c2708  lwc1        $f12, 0x2708($at)
    ctx->pc = 0x3302a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 9992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3302ac:
    // 0x3302ac: 0xe7ac0204  swc1        $f12, 0x204($sp)
    ctx->pc = 0x3302acu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
label_3302b0:
    // 0x3302b0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x3302b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_3302b4:
    // 0x3302b4: 0xc040cbc  jal         func_1032F0
label_3302b8:
    if (ctx->pc == 0x3302B8u) {
        ctx->pc = 0x3302BCu;
        goto label_3302bc;
    }
    ctx->pc = 0x3302B4u;
    SET_GPR_U32(ctx, 31, 0x3302BCu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x3302BCu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3302BCu) { return; }
    ctx->pc = 0x3302BCu;
label_3302bc:
    // 0x3302bc: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x3302bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_3302c0:
    // 0x3302c0: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x3302c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3302c4:
    // 0x3302c4: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x3302c4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_3302c8:
    // 0x3302c8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x3302c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_3302cc:
    // 0x3302cc: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x3302ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_3302d0:
    // 0x3302d0: 0xc040ce4  jal         func_103390
label_3302d4:
    if (ctx->pc == 0x3302D4u) {
        ctx->pc = 0x3302D8u;
        goto label_3302d8;
    }
    ctx->pc = 0x3302D0u;
    SET_GPR_U32(ctx, 31, 0x3302D8u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x3302D8u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3302D8u) { return; }
    ctx->pc = 0x3302D8u;
label_3302d8:
    // 0x3302d8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x3302d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_3302dc:
    // 0x3302dc: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x3302dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_3302e0:
    // 0x3302e0: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x3302e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_3302e4:
    // 0x3302e4: 0xc040c92  jal         func_103248
label_3302e8:
    if (ctx->pc == 0x3302E8u) {
        ctx->pc = 0x3302ECu;
        goto label_3302ec;
    }
    ctx->pc = 0x3302E4u;
    SET_GPR_U32(ctx, 31, 0x3302ECu);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x3302ECu;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3302ECu) { return; }
    ctx->pc = 0x3302ECu;
label_3302ec:
    // 0x3302ec: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x3302ecu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3302f0:
    // 0x3302f0: 0x10000019  b           . + 4 + (0x19 << 2)
label_3302f4:
    if (ctx->pc == 0x3302F4u) {
        ctx->pc = 0x3302F8u;
        goto label_3302f8;
    }
    ctx->pc = 0x3302F0u;
    {
        const bool branch_taken_0x3302f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3302f0) {
            ctx->pc = 0x330358u;
            goto label_330358;
        }
    }
    ctx->pc = 0x3302F8u;
label_3302f8:
    // 0x3302f8: 0x172100  sll         $a0, $s7, 4
    ctx->pc = 0x3302f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
label_3302fc:
    // 0x3302fc: 0x9d1821  addu        $v1, $a0, $sp
    ctx->pc = 0x3302fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_330300:
    // 0x330300: 0x172900  sll         $a1, $s7, 4
    ctx->pc = 0x330300u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
label_330304:
    // 0x330304: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x330304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_330308:
    // 0x330308: 0x24670180  addiu       $a3, $v1, 0x180
    ctx->pc = 0x330308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
label_33030c:
    // 0x33030c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x33030cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_330310:
    // 0x330310: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x330310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_330314:
    // 0x330314: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x330314u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_330318:
    // 0x330318: 0x244601c0  addiu       $a2, $v0, 0x1C0
    ctx->pc = 0x330318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
label_33031c:
    // 0x33031c: 0xc040bf4  jal         func_102FD0
label_330320:
    if (ctx->pc == 0x330320u) {
        ctx->pc = 0x330324u;
        goto label_330324;
    }
    ctx->pc = 0x33031Cu;
    SET_GPR_U32(ctx, 31, 0x330324u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x330324u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x330324u) { return; }
    ctx->pc = 0x330324u;
label_330324:
    // 0x330324: 0x173900  sll         $a3, $s7, 4
    ctx->pc = 0x330324u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
label_330328:
    // 0x330328: 0xfd1021  addu        $v0, $a3, $sp
    ctx->pc = 0x330328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
label_33032c:
    // 0x33032c: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x33032cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
label_330330:
    // 0x330330: 0x7d3021  addu        $a2, $v1, $sp
    ctx->pc = 0x330330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_330334:
    // 0x330334: 0x24430180  addiu       $v1, $v0, 0x180
    ctx->pc = 0x330334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_330338:
    // 0x330338: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x330338u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_33033c:
    // 0x33033c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33033cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_330340:
    // 0x330340: 0x24429610  addiu       $v0, $v0, -0x69F0
    ctx->pc = 0x330340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940176));
label_330344:
    // 0x330344: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x330344u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_330348:
    // 0x330348: 0x24c60180  addiu       $a2, $a2, 0x180
    ctx->pc = 0x330348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
label_33034c:
    // 0x33034c: 0xc040bf4  jal         func_102FD0
label_330350:
    if (ctx->pc == 0x330350u) {
        ctx->pc = 0x330354u;
        goto label_330354;
    }
    ctx->pc = 0x33034Cu;
    SET_GPR_U32(ctx, 31, 0x330354u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x330354u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x330354u) { return; }
    ctx->pc = 0x330354u;
label_330354:
    // 0x330354: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x330354u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_330358:
    // 0x330358: 0x2ae20004  slti        $v0, $s7, 0x4
    ctx->pc = 0x330358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)4) ? 1 : 0);
label_33035c:
    // 0x33035c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_330360:
    if (ctx->pc == 0x330360u) {
        ctx->pc = 0x330364u;
        goto label_330364;
    }
    ctx->pc = 0x33035Cu;
    {
        const bool branch_taken_0x33035c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33035c) {
            ctx->pc = 0x3302F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3302f8;
        }
    }
    ctx->pc = 0x330364u;
label_330364:
    // 0x330364: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x330364u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_330368:
    // 0x330368: 0x10000017  b           . + 4 + (0x17 << 2)
label_33036c:
    if (ctx->pc == 0x33036Cu) {
        ctx->pc = 0x330370u;
        goto label_330370;
    }
    ctx->pc = 0x330368u;
    {
        const bool branch_taken_0x330368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330368) {
            ctx->pc = 0x3303C8u;
            goto label_3303c8;
        }
    }
    ctx->pc = 0x330370u;
label_330370:
    // 0x330370: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x330370u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_330374:
    // 0x330374: 0x1000000e  b           . + 4 + (0xE << 2)
label_330378:
    if (ctx->pc == 0x330378u) {
        ctx->pc = 0x33037Cu;
        goto label_33037c;
    }
    ctx->pc = 0x330374u;
    {
        const bool branch_taken_0x330374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330374) {
            ctx->pc = 0x3303B0u;
            goto label_3303b0;
        }
    }
    ctx->pc = 0x33037Cu;
label_33037c:
    // 0x33037c: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x33037cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
label_330380:
    // 0x330380: 0x7d3821  addu        $a3, $v1, $sp
    ctx->pc = 0x330380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_330384:
    // 0x330384: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x330384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_330388:
    // 0x330388: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x330388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_33038c:
    // 0x33038c: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x33038cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_330390:
    // 0x330390: 0x3466d70a  ori         $a2, $v1, 0xD70A
    ctx->pc = 0x330390u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_330394:
    // 0x330394: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x330394u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330398:
    // 0x330398: 0xc44c0180  lwc1        $f12, 0x180($v0)
    ctx->pc = 0x330398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_33039c:
    // 0x33039c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x33039cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_3303a0:
    // 0x3303a0: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x3303a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_3303a4:
    // 0x3303a4: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x3303a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3303a8:
    // 0x3303a8: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x3303a8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3303ac:
    // 0x3303ac: 0x0  nop
    ctx->pc = 0x3303acu;
    // NOP
label_3303b0:
    // 0x3303b0: 0x2a460004  slti        $a2, $s2, 0x4
    ctx->pc = 0x3303b0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_3303b4:
    // 0x3303b4: 0x14c0fff1  bnez        $a2, . + 4 + (-0xF << 2)
label_3303b8:
    if (ctx->pc == 0x3303B8u) {
        ctx->pc = 0x3303BCu;
        goto label_3303bc;
    }
    ctx->pc = 0x3303B4u;
    {
        const bool branch_taken_0x3303b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3303b4) {
            ctx->pc = 0x33037Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33037c;
        }
    }
    ctx->pc = 0x3303BCu;
label_3303bc:
    // 0x3303bc: 0x26e70001  addiu       $a3, $s7, 0x1
    ctx->pc = 0x3303bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_3303c0:
    // 0x3303c0: 0x70e0be28  paddub      $s7, $a3, $zero
    ctx->pc = 0x3303c0u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_3303c4:
    // 0x3303c4: 0x0  nop
    ctx->pc = 0x3303c4u;
    // NOP
label_3303c8:
    // 0x3303c8: 0x2ae20004  slti        $v0, $s7, 0x4
    ctx->pc = 0x3303c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)4) ? 1 : 0);
label_3303cc:
    // 0x3303cc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_3303d0:
    if (ctx->pc == 0x3303D0u) {
        ctx->pc = 0x3303D4u;
        goto label_3303d4;
    }
    ctx->pc = 0x3303CCu;
    {
        const bool branch_taken_0x3303cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3303cc) {
            ctx->pc = 0x330370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330370;
        }
    }
    ctx->pc = 0x3303D4u;
label_3303d4:
    // 0x3303d4: 0x8e636610  lw          $v1, 0x6610($s3)
    ctx->pc = 0x3303d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26128)));
label_3303d8:
    // 0x3303d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3303d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3303dc:
    // 0x3303dc: 0x0  nop
    ctx->pc = 0x3303dcu;
    // NOP
label_3303e0:
    // 0x3303e0: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x3303e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3303e4:
    // 0x3303e4: 0xc7ac0180  lwc1        $f12, 0x180($sp)
    ctx->pc = 0x3303e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3303e8:
    // 0x3303e8: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x3303e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_3303ec:
    // 0x3303ec: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x3303ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_3303f0:
    // 0x3303f0: 0x8e626610  lw          $v0, 0x6610($s3)
    ctx->pc = 0x3303f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26128)));
label_3303f4:
    // 0x3303f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3303f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3303f8:
    // 0x3303f8: 0x0  nop
    ctx->pc = 0x3303f8u;
    // NOP
label_3303fc:
    // 0x3303fc: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x3303fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_330400:
    // 0x330400: 0xc7ac0190  lwc1        $f12, 0x190($sp)
    ctx->pc = 0x330400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_330404:
    // 0x330404: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x330404u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_330408:
    // 0x330408: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x330408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_33040c:
    // 0x33040c: 0x8e666610  lw          $a2, 0x6610($s3)
    ctx->pc = 0x33040cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26128)));
label_330410:
    // 0x330410: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x330410u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_330414:
    // 0x330414: 0x0  nop
    ctx->pc = 0x330414u;
    // NOP
label_330418:
    // 0x330418: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x330418u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_33041c:
    // 0x33041c: 0xc7ac01a0  lwc1        $f12, 0x1A0($sp)
    ctx->pc = 0x33041cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_330420:
    // 0x330420: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x330420u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_330424:
    // 0x330424: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x330424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_330428:
    // 0x330428: 0x8e676610  lw          $a3, 0x6610($s3)
    ctx->pc = 0x330428u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26128)));
label_33042c:
    // 0x33042c: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x33042cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_330430:
    // 0x330430: 0x0  nop
    ctx->pc = 0x330430u;
    // NOP
label_330434:
    // 0x330434: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x330434u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_330438:
    // 0x330438: 0xc7ac01b0  lwc1        $f12, 0x1B0($sp)
    ctx->pc = 0x330438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_33043c:
    // 0x33043c: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x33043cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_330440:
    // 0x330440: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x330440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_330444:
    // 0x330444: 0x8e626614  lw          $v0, 0x6614($s3)
    ctx->pc = 0x330444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26132)));
label_330448:
    // 0x330448: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33044c:
    // 0x33044c: 0x0  nop
    ctx->pc = 0x33044cu;
    // NOP
label_330450:
    // 0x330450: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x330450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_330454:
    // 0x330454: 0xc7a10184  lwc1        $f1, 0x184($sp)
    ctx->pc = 0x330454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_330458:
    // 0x330458: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x330458u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_33045c:
    // 0x33045c: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x33045cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_330460:
    // 0x330460: 0x8e626614  lw          $v0, 0x6614($s3)
    ctx->pc = 0x330460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26132)));
label_330464:
    // 0x330464: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x330464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_330468:
    // 0x330468: 0x0  nop
    ctx->pc = 0x330468u;
    // NOP
label_33046c:
    // 0x33046c: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x33046cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_330470:
    // 0x330470: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x330470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_330474:
    // 0x330474: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x330474u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_330478:
    // 0x330478: 0xe7a00194  swc1        $f0, 0x194($sp)
    ctx->pc = 0x330478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_33047c:
    // 0x33047c: 0x8e636614  lw          $v1, 0x6614($s3)
    ctx->pc = 0x33047cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26132)));
label_330480:
    // 0x330480: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x330480u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330484:
    // 0x330484: 0x0  nop
    ctx->pc = 0x330484u;
    // NOP
label_330488:
    // 0x330488: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x330488u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_33048c:
    // 0x33048c: 0xc7a001a4  lwc1        $f0, 0x1A4($sp)
    ctx->pc = 0x33048cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330490:
    // 0x330490: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x330490u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_330494:
    // 0x330494: 0xe7a001a4  swc1        $f0, 0x1A4($sp)
    ctx->pc = 0x330494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_330498:
    // 0x330498: 0x8e626614  lw          $v0, 0x6614($s3)
    ctx->pc = 0x330498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26132)));
label_33049c:
    // 0x33049c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33049cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3304a0:
    // 0x3304a0: 0x0  nop
    ctx->pc = 0x3304a0u;
    // NOP
label_3304a4:
    // 0x3304a4: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x3304a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3304a8:
    // 0x3304a8: 0xc7a101b4  lwc1        $f1, 0x1B4($sp)
    ctx->pc = 0x3304a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3304ac:
    // 0x3304ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3304acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3304b0:
    // 0x3304b0: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x3304b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_3304b4:
    // 0x3304b4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3304b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3304b8:
    // 0x3304b8: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x3304b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_3304bc:
    // 0x3304bc: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x3304bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
label_3304c0:
    // 0x3304c0: 0x3c088800  lui         $t0, 0x8800
    ctx->pc = 0x3304c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)34816 << 16));
label_3304c4:
    // 0x3304c4: 0x35033b14  ori         $v1, $t0, 0x3B14
    ctx->pc = 0x3304c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)15124);
label_3304c8:
    // 0x3304c8: 0x8fa60264  lw          $a2, 0x264($sp)
    ctx->pc = 0x3304c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_3304cc:
    // 0x3304cc: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x3304ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_3304d0:
    // 0x3304d0: 0x8fa70264  lw          $a3, 0x264($sp)
    ctx->pc = 0x3304d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_3304d4:
    // 0x3304d4: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x3304d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3304d8:
    // 0x3304d8: 0x34460040  ori         $a2, $v0, 0x40
    ctx->pc = 0x3304d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_3304dc:
    // 0x3304dc: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x3304dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
label_3304e0:
    // 0x3304e0: 0x3c068080  lui         $a2, 0x8080
    ctx->pc = 0x3304e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32896 << 16));
label_3304e4:
    // 0x3304e4: 0x34c38000  ori         $v1, $a2, 0x8000
    ctx->pc = 0x3304e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
label_3304e8:
    // 0x3304e8: 0x8fa70264  lw          $a3, 0x264($sp)
    ctx->pc = 0x3304e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_3304ec:
    // 0x3304ec: 0x24e20010  addiu       $v0, $a3, 0x10
    ctx->pc = 0x3304ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_3304f0:
    // 0x3304f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3304f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3304f4:
    // 0x3304f4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3304f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3304f8:
    // 0x3304f8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3304f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3304fc:
    // 0x3304fc: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x3304fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_330500:
    // 0x330500: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x330500u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_330504:
    // 0x330504: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x330504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_330508:
    // 0x330508: 0x623825  or          $a3, $v1, $v0
    ctx->pc = 0x330508u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_33050c:
    // 0x33050c: 0x8fa80264  lw          $t0, 0x264($sp)
    ctx->pc = 0x33050cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_330510:
    // 0x330510: 0x25030014  addiu       $v1, $t0, 0x14
    ctx->pc = 0x330510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
label_330514:
    // 0x330514: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x330514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_330518:
    // 0x330518: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x330518u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_33051c:
    // 0x33051c: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x33051cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_330520:
    // 0x330520: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x330520u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_330524:
    // 0x330524: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x330524u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_330528:
    // 0x330528: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x330528u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_33052c:
    // 0x33052c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x33052cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_330530:
    // 0x330530: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x330530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_330534:
    // 0x330534: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x330534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_330538:
    // 0x330538: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x330538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_33053c:
    // 0x33053c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x33053cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_330540:
    // 0x330540: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x330540u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_330544:
    // 0x330544: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x330544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_330548:
    // 0x330548: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x330548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_33054c:
    // 0x33054c: 0x39400  sll         $s2, $v1, 16
    ctx->pc = 0x33054cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_330550:
    // 0x330550: 0xd23825  or          $a3, $a2, $s2
    ctx->pc = 0x330550u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 18));
label_330554:
    // 0x330554: 0x8fa60264  lw          $a2, 0x264($sp)
    ctx->pc = 0x330554u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_330558:
    // 0x330558: 0x24c3002c  addiu       $v1, $a2, 0x2C
    ctx->pc = 0x330558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 44));
label_33055c:
    // 0x33055c: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x33055cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_330560:
    // 0x330560: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x330560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_330564:
    // 0x330564: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x330564u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_330568:
    // 0x330568: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x330568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_33056c:
    // 0x33056c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33056cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_330570:
    // 0x330570: 0x33c00  sll         $a3, $v1, 16
    ctx->pc = 0x330570u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_330574:
    // 0x330574: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x330574u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_330578:
    // 0x330578: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x330578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_33057c:
    // 0x33057c: 0x24630038  addiu       $v1, $v1, 0x38
    ctx->pc = 0x33057cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
label_330580:
    // 0x330580: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x330580u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_330584:
    // 0x330584: 0xc7ac0180  lwc1        $f12, 0x180($sp)
    ctx->pc = 0x330584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_330588:
    // 0x330588: 0xc047fa2  jal         func_11FE88
label_33058c:
    if (ctx->pc == 0x33058Cu) {
        ctx->pc = 0x330590u;
        goto label_330590;
    }
    ctx->pc = 0x330588u;
    SET_GPR_U32(ctx, 31, 0x330590u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x330588u, 0x330590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330590u;
label_330590:
    // 0x330590: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x330590u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_330594:
    // 0x330594: 0x24c37000  addiu       $v1, $a2, 0x7000
    ctx->pc = 0x330594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 28672));
label_330598:
    // 0x330598: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x330598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_33059c:
    // 0x33059c: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x33059cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_3305a0:
    // 0x3305a0: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x3305a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3305a4:
    // 0x3305a4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3305a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3305a8:
    // 0x3305a8: 0xc047fa2  jal         func_11FE88
label_3305ac:
    if (ctx->pc == 0x3305ACu) {
        ctx->pc = 0x3305B0u;
        goto label_3305b0;
    }
    ctx->pc = 0x3305A8u;
    SET_GPR_U32(ctx, 31, 0x3305B0u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x3305A8u, 0x3305B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3305B0u;
label_3305b0:
    // 0x3305b0: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x3305b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3305b4:
    // 0x3305b4: 0x24c37900  addiu       $v1, $a2, 0x7900
    ctx->pc = 0x3305b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
label_3305b8:
    // 0x3305b8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x3305b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_3305bc:
    // 0x3305bc: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x3305bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3305c0:
    // 0x3305c0: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x3305c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3305c4:
    // 0x3305c4: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x3305c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_3305c8:
    // 0x3305c8: 0x24430018  addiu       $v1, $v0, 0x18
    ctx->pc = 0x3305c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_3305cc:
    // 0x3305cc: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x3305ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_3305d0:
    // 0x3305d0: 0x3406fffb  ori         $a2, $zero, 0xFFFB
    ctx->pc = 0x3305d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
label_3305d4:
    // 0x3305d4: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x3305d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_3305d8:
    // 0x3305d8: 0x2443001c  addiu       $v1, $v0, 0x1C
    ctx->pc = 0x3305d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_3305dc:
    // 0x3305dc: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x3305dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_3305e0:
    // 0x3305e0: 0xc7ac0190  lwc1        $f12, 0x190($sp)
    ctx->pc = 0x3305e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3305e4:
    // 0x3305e4: 0xc047fa2  jal         func_11FE88
label_3305e8:
    if (ctx->pc == 0x3305E8u) {
        ctx->pc = 0x3305ECu;
        goto label_3305ec;
    }
    ctx->pc = 0x3305E4u;
    SET_GPR_U32(ctx, 31, 0x3305ECu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x3305E4u, 0x3305ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3305ECu;
label_3305ec:
    // 0x3305ec: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3305ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3305f0:
    // 0x3305f0: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x3305f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
label_3305f4:
    // 0x3305f4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3305f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3305f8:
    // 0x3305f8: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x3305f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_3305fc:
    // 0x3305fc: 0xc7ac0194  lwc1        $f12, 0x194($sp)
    ctx->pc = 0x3305fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_330600:
    // 0x330600: 0xc047fa2  jal         func_11FE88
label_330604:
    if (ctx->pc == 0x330604u) {
        ctx->pc = 0x330608u;
        goto label_330608;
    }
    ctx->pc = 0x330600u;
    SET_GPR_U32(ctx, 31, 0x330608u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x330600u, 0x330608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330608u;
label_330608:
    // 0x330608: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x330608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_33060c:
    // 0x33060c: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x33060cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_330610:
    // 0x330610: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x330610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_330614:
    // 0x330614: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x330614u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_330618:
    // 0x330618: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x330618u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_33061c:
    // 0x33061c: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x33061cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_330620:
    // 0x330620: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x330620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_330624:
    // 0x330624: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x330624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_330628:
    // 0x330628: 0x3406fffb  ori         $a2, $zero, 0xFFFB
    ctx->pc = 0x330628u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
label_33062c:
    // 0x33062c: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x33062cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_330630:
    // 0x330630: 0x24620028  addiu       $v0, $v1, 0x28
    ctx->pc = 0x330630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_330634:
    // 0x330634: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x330634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_330638:
    // 0x330638: 0xc7a001a0  lwc1        $f0, 0x1A0($sp)
    ctx->pc = 0x330638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33063c:
    // 0x33063c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x33063cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_330640:
    // 0x330640: 0xc047fa2  jal         func_11FE88
label_330644:
    if (ctx->pc == 0x330644u) {
        ctx->pc = 0x330648u;
        goto label_330648;
    }
    ctx->pc = 0x330640u;
    SET_GPR_U32(ctx, 31, 0x330648u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x330640u, 0x330648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330648u;
label_330648:
    // 0x330648: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x330648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_33064c:
    // 0x33064c: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x33064cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
label_330650:
    // 0x330650: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x330650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_330654:
    // 0x330654: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x330654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_330658:
    // 0x330658: 0xc7a001a4  lwc1        $f0, 0x1A4($sp)
    ctx->pc = 0x330658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33065c:
    // 0x33065c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x33065cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_330660:
    // 0x330660: 0xc047fa2  jal         func_11FE88
label_330664:
    if (ctx->pc == 0x330664u) {
        ctx->pc = 0x330668u;
        goto label_330668;
    }
    ctx->pc = 0x330660u;
    SET_GPR_U32(ctx, 31, 0x330668u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x330660u, 0x330668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330668u;
label_330668:
    // 0x330668: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x330668u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_33066c:
    // 0x33066c: 0x24c37900  addiu       $v1, $a2, 0x7900
    ctx->pc = 0x33066cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
label_330670:
    // 0x330670: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x330670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_330674:
    // 0x330674: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x330674u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_330678:
    // 0x330678: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x330678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_33067c:
    // 0x33067c: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x33067cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_330680:
    // 0x330680: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x330680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_330684:
    // 0x330684: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x330684u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_330688:
    // 0x330688: 0x3402fffb  ori         $v0, $zero, 0xFFFB
    ctx->pc = 0x330688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
label_33068c:
    // 0x33068c: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x33068cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_330690:
    // 0x330690: 0x24660034  addiu       $a2, $v1, 0x34
    ctx->pc = 0x330690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
label_330694:
    // 0x330694: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x330694u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_330698:
    // 0x330698: 0xc7ac01b0  lwc1        $f12, 0x1B0($sp)
    ctx->pc = 0x330698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_33069c:
    // 0x33069c: 0xc047fa2  jal         func_11FE88
label_3306a0:
    if (ctx->pc == 0x3306A0u) {
        ctx->pc = 0x3306A4u;
        goto label_3306a4;
    }
    ctx->pc = 0x33069Cu;
    SET_GPR_U32(ctx, 31, 0x3306A4u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x33069Cu, 0x3306A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3306A4u;
label_3306a4:
    // 0x3306a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3306a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3306a8:
    // 0x3306a8: 0x24437000  addiu       $v1, $v0, 0x7000
    ctx->pc = 0x3306a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
label_3306ac:
    // 0x3306ac: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x3306acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_3306b0:
    // 0x3306b0: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x3306b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_3306b4:
    // 0x3306b4: 0xc7a001b4  lwc1        $f0, 0x1B4($sp)
    ctx->pc = 0x3306b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3306b8:
    // 0x3306b8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3306b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3306bc:
    // 0x3306bc: 0xc047fa2  jal         func_11FE88
label_3306c0:
    if (ctx->pc == 0x3306C0u) {
        ctx->pc = 0x3306C4u;
        goto label_3306c4;
    }
    ctx->pc = 0x3306BCu;
    SET_GPR_U32(ctx, 31, 0x3306C4u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x3306BCu, 0x3306C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3306C4u;
label_3306c4:
    // 0x3306c4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x3306c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3306c8:
    // 0x3306c8: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x3306c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_3306cc:
    // 0x3306cc: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x3306ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_3306d0:
    // 0x3306d0: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x3306d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3306d4:
    // 0x3306d4: 0x461825  or          $v1, $v0, $a2
    ctx->pc = 0x3306d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_3306d8:
    // 0x3306d8: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x3306d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_3306dc:
    // 0x3306dc: 0x2447003c  addiu       $a3, $v0, 0x3C
    ctx->pc = 0x3306dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_3306e0:
    // 0x3306e0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x3306e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_3306e4:
    // 0x3306e4: 0x3406fffb  ori         $a2, $zero, 0xFFFB
    ctx->pc = 0x3306e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
label_3306e8:
    // 0x3306e8: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x3306e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_3306ec:
    // 0x3306ec: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x3306ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_3306f0:
    // 0x3306f0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x3306f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_3306f4:
    // 0x3306f4: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x3306f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_3306f8:
    // 0x3306f8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3306f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_3306fc:
    // 0x3306fc: 0x2443e7a8  addiu       $v1, $v0, -0x1858
    ctx->pc = 0x3306fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961064));
label_330700:
    // 0x330700: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x330700u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_330704:
    // 0x330704: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x330704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_330708:
    // 0x330708: 0xc0462a6  jal         func_118A98
label_33070c:
    if (ctx->pc == 0x33070Cu) {
        ctx->pc = 0x330710u;
        goto label_330710;
    }
    ctx->pc = 0x330708u;
    SET_GPR_U32(ctx, 31, 0x330710u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x330710u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x330710u) { return; }
    ctx->pc = 0x330710u;
label_330710:
    // 0x330710: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x330710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_330714:
    // 0x330714: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x330714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
label_330718:
    // 0x330718: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x330718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_33071c:
    // 0x33071c: 0x8c6a0008  lw          $t2, 0x8($v1)
    ctx->pc = 0x33071cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_330720:
    // 0x330720: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x330720u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_330724:
    // 0x330724: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x330724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_330728:
    // 0x330728: 0xdd420018  ld          $v0, 0x18($t2)
    ctx->pc = 0x330728u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 10), 24)));
label_33072c:
    // 0x33072c: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x33072cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
label_330730:
    // 0x330730: 0x214be  dsrl32      $v0, $v0, 18
    ctx->pc = 0x330730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 18));
label_330734:
    // 0x330734: 0x43182d  daddu       $v1, $v0, $v1
    ctx->pc = 0x330734u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_330738:
    // 0x330738: 0xdd420018  ld          $v0, 0x18($t2)
    ctx->pc = 0x330738u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 10), 24)));
label_33073c:
    // 0x33073c: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x33073cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
label_330740:
    // 0x330740: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x330740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
label_330744:
    // 0x330744: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x330744u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_330748:
    // 0x330748: 0x3597c  dsll32      $t3, $v1, 5
    ctx->pc = 0x330748u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << (32 + 5));
label_33074c:
    // 0x33074c: 0x3c07fff8  lui         $a3, 0xFFF8
    ctx->pc = 0x33074cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65528 << 16));
label_330750:
    // 0x330750: 0x34e3001f  ori         $v1, $a3, 0x1F
    ctx->pc = 0x330750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)31);
label_330754:
    // 0x330754: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x330754u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
label_330758:
    // 0x330758: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x330758u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_33075c:
    // 0x33075c: 0x61c38  dsll        $v1, $a2, 16
    ctx->pc = 0x33075cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << 16);
label_330760:
    // 0x330760: 0x3468ffff  ori         $t0, $v1, 0xFFFF
    ctx->pc = 0x330760u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_330764:
    // 0x330764: 0x1074825  or          $t1, $t0, $a3
    ctx->pc = 0x330764u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
label_330768:
    // 0x330768: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x330768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
label_33076c:
    // 0x33076c: 0x4b1825  or          $v1, $v0, $t3
    ctx->pc = 0x33076cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
label_330770:
    // 0x330770: 0xfd430018  sd          $v1, 0x18($t2)
    ctx->pc = 0x330770u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 24), GPR_U64(ctx, 3));
label_330774:
    // 0x330774: 0x26630018  addiu       $v1, $s3, 0x18
    ctx->pc = 0x330774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_330778:
    // 0x330778: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x330778u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_33077c:
    // 0x33077c: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x33077cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_330780:
    // 0x330780: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x330780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_330784:
    // 0x330784: 0x7ba500c0  lq          $a1, 0xC0($sp)
    ctx->pc = 0x330784u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_330788:
    // 0x330788: 0xc05dbd8  jal         func_176F60
label_33078c:
    if (ctx->pc == 0x33078Cu) {
        ctx->pc = 0x330790u;
        goto label_330790;
    }
    ctx->pc = 0x330788u;
    SET_GPR_U32(ctx, 31, 0x330790u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x330788u, 0x330790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330790u;
label_330790:
    // 0x330790: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x330790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_330794:
    // 0x330794: 0x24420044  addiu       $v0, $v0, 0x44
    ctx->pc = 0x330794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
label_330798:
    // 0x330798: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x330798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
label_33079c:
    // 0x33079c: 0x26a30028  addiu       $v1, $s5, 0x28
    ctx->pc = 0x33079cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
label_3307a0:
    // 0x3307a0: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x3307a0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_3307a4:
    // 0x3307a4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3307a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3307a8:
    // 0x3307a8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x3307a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_3307ac:
    // 0x3307ac: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x3307acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_3307b0:
    // 0x3307b0: 0x34661043  ori         $a2, $v1, 0x1043
    ctx->pc = 0x3307b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4163);
label_3307b4:
    // 0x3307b4: 0xae860004  sw          $a2, 0x4($s4)
    ctx->pc = 0x3307b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 6));
label_3307b8:
    // 0x3307b8: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x3307b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_3307bc:
    // 0x3307bc: 0xfe860008  sd          $a2, 0x8($s4)
    ctx->pc = 0x3307bcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 6));
label_3307c0:
    // 0x3307c0: 0x26630018  addiu       $v1, $s3, 0x18
    ctx->pc = 0x3307c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_3307c4:
    // 0x3307c4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x3307c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_3307c8:
    // 0x3307c8: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x3307c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_3307cc:
    // 0x3307cc: 0xc05dbd8  jal         func_176F60
label_3307d0:
    if (ctx->pc == 0x3307D0u) {
        ctx->pc = 0x3307D4u;
        goto label_3307d4;
    }
    ctx->pc = 0x3307CCu;
    SET_GPR_U32(ctx, 31, 0x3307D4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3307CCu, 0x3307D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3307D4u;
label_3307d4:
    // 0x3307d4: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x3307d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_3307d8:
    // 0x3307d8: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x3307d8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_3307dc:
    // 0x3307dc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3307dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3307e0:
    // 0x3307e0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x3307e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_3307e4:
    // 0x3307e4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x3307e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_3307e8:
    // 0x3307e8: 0x34661048  ori         $a2, $v1, 0x1048
    ctx->pc = 0x3307e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4168);
label_3307ec:
    // 0x3307ec: 0xae860004  sw          $a2, 0x4($s4)
    ctx->pc = 0x3307ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 6));
label_3307f0:
    // 0x3307f0: 0xfe800008  sd          $zero, 0x8($s4)
    ctx->pc = 0x3307f0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 0));
label_3307f4:
    // 0x3307f4: 0x26620018  addiu       $v0, $s3, 0x18
    ctx->pc = 0x3307f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_3307f8:
    // 0x3307f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3307f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3307fc:
    // 0x3307fc: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x3307fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_330800:
    // 0x330800: 0xc05dbd8  jal         func_176F60
label_330804:
    if (ctx->pc == 0x330804u) {
        ctx->pc = 0x330808u;
        goto label_330808;
    }
    ctx->pc = 0x330800u;
    SET_GPR_U32(ctx, 31, 0x330808u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x330800u, 0x330808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330808u;
label_330808:
    // 0x330808: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x330808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_33080c:
    // 0x33080c: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x33080cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_330810:
    // 0x330810: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x330810u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
label_330814:
    // 0x330814: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x330814u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
label_330818:
    // 0x330818: 0x3c090400  lui         $t1, 0x400
    ctx->pc = 0x330818u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1024 << 16));
label_33081c:
    // 0x33081c: 0x35221009  ori         $v0, $t1, 0x1009
    ctx->pc = 0x33081cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4105);
label_330820:
    // 0x330820: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x330820u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_330824:
    // 0x330824: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x330824u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_330828:
    // 0x330828: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x330828u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
label_33082c:
    // 0x33082c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x33082cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_330830:
    // 0x330830: 0x61138  dsll        $v0, $a2, 4
    ctx->pc = 0x330830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 4);
label_330834:
    // 0x330834: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x330834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_330838:
    // 0x330838: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x330838u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_33083c:
    // 0x33083c: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x33083cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_330840:
    // 0x330840: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x330840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_330844:
    // 0x330844: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x330844u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
label_330848:
    // 0x330848: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x330848u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_33084c:
    // 0x33084c: 0x61bb8  dsll        $v1, $a2, 14
    ctx->pc = 0x33084cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << 14);
label_330850:
    // 0x330850: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x330850u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_330854:
    // 0x330854: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x330854u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_330858:
    // 0x330858: 0x8303c  dsll32      $a2, $t0, 0
    ctx->pc = 0x330858u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << (32 + 0));
label_33085c:
    // 0x33085c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x33085cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_330860:
    // 0x330860: 0x61638  dsll        $v0, $a2, 24
    ctx->pc = 0x330860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 24);
label_330864:
    // 0x330864: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x330864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_330868:
    // 0x330868: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x330868u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_33086c:
    // 0x33086c: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x33086cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
label_330870:
    // 0x330870: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x330870u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_330874:
    // 0x330874: 0x618bc  dsll32      $v1, $a2, 2
    ctx->pc = 0x330874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 2));
label_330878:
    // 0x330878: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x330878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_33087c:
    // 0x33087c: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x33087cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_330880:
    // 0x330880: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x330880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_330884:
    // 0x330884: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x330884u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
label_330888:
    // 0x330888: 0x26640018  addiu       $a0, $s3, 0x18
    ctx->pc = 0x330888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_33088c:
    // 0x33088c: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x33088cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_330890:
    // 0x330890: 0xc05dbd8  jal         func_176F60
label_330894:
    if (ctx->pc == 0x330894u) {
        ctx->pc = 0x330898u;
        goto label_330898;
    }
    ctx->pc = 0x330890u;
    SET_GPR_U32(ctx, 31, 0x330898u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x330890u, 0x330898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330898u;
label_330898:
    // 0x330898: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x330898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_33089c:
    // 0x33089c: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x33089cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_3308a0:
    // 0x3308a0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3308a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3308a4:
    // 0x3308a4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x3308a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_3308a8:
    // 0x3308a8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3308a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_3308ac:
    // 0x3308ac: 0x3443103f  ori         $v1, $v0, 0x103F
    ctx->pc = 0x3308acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4159);
label_3308b0:
    // 0x3308b0: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x3308b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_3308b4:
    // 0x3308b4: 0x26640018  addiu       $a0, $s3, 0x18
    ctx->pc = 0x3308b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_3308b8:
    // 0x3308b8: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x3308b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_3308bc:
    // 0x3308bc: 0xc05dbd8  jal         func_176F60
label_3308c0:
    if (ctx->pc == 0x3308C0u) {
        ctx->pc = 0x3308C4u;
        goto label_3308c4;
    }
    ctx->pc = 0x3308BCu;
    SET_GPR_U32(ctx, 31, 0x3308C4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3308BCu, 0x3308C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3308C4u;
label_3308c4:
    // 0x3308c4: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x3308c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_3308c8:
    // 0x3308c8: 0x70a0a628  paddub      $s4, $a1, $zero
    ctx->pc = 0x3308c8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_3308cc:
    // 0x3308cc: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x3308ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3308d0:
    // 0x3308d0: 0xafa6021c  sw          $a2, 0x21C($sp)
    ctx->pc = 0x3308d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 6));
label_3308d4:
    // 0x3308d4: 0xafa60218  sw          $a2, 0x218($sp)
    ctx->pc = 0x3308d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 6));
label_3308d8:
    // 0x3308d8: 0xafa60214  sw          $a2, 0x214($sp)
    ctx->pc = 0x3308d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 6));
label_3308dc:
    // 0x3308dc: 0xafa60210  sw          $a2, 0x210($sp)
    ctx->pc = 0x3308dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 6));
label_3308e0:
    // 0x3308e0: 0x826265ae  lb          $v0, 0x65AE($s3)
    ctx->pc = 0x3308e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 26030)));
label_3308e4:
    // 0x3308e4: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x3308e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
label_3308e8:
    // 0x3308e8: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x3308e8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_3308ec:
    // 0x3308ec: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3308ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3308f0:
    // 0x3308f0: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x3308f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3308f4:
    // 0x3308f4: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x3308f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_3308f8:
    // 0x3308f8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3308f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_3308fc:
    // 0x3308fc: 0x244255a0  addiu       $v0, $v0, 0x55A0
    ctx->pc = 0x3308fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21920));
label_330900:
    // 0x330900: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x330900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_330904:
    // 0x330904: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x330904u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_330908:
    // 0x330908: 0x100004d1  b           . + 4 + (0x4D1 << 2)
label_33090c:
    if (ctx->pc == 0x33090Cu) {
        ctx->pc = 0x330910u;
        goto label_330910;
    }
    ctx->pc = 0x330908u;
    {
        const bool branch_taken_0x330908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330908) {
            ctx->pc = 0x331C50u;
            goto label_331c50;
        }
    }
    ctx->pc = 0x330910u;
label_330910:
    // 0x330910: 0x82c40000  lb          $a0, 0x0($s6)
    ctx->pc = 0x330910u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_330914:
    // 0x330914: 0x4163c  dsll32      $v0, $a0, 24
    ctx->pc = 0x330914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 24));
label_330918:
    // 0x330918: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x330918u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_33091c:
    // 0x33091c: 0x826365b0  lb          $v1, 0x65B0($s3)
    ctx->pc = 0x33091cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 26032)));
label_330920:
    // 0x330920: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x330920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
label_330924:
    // 0x330924: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x330924u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_330928:
    // 0x330928: 0x144404c7  bne         $v0, $a0, . + 4 + (0x4C7 << 2)
label_33092c:
    if (ctx->pc == 0x33092Cu) {
        ctx->pc = 0x330930u;
        goto label_330930;
    }
    ctx->pc = 0x330928u;
    {
        const bool branch_taken_0x330928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x330928) {
            ctx->pc = 0x331C48u;
            goto label_331c48;
        }
    }
    ctx->pc = 0x330930u;
label_330930:
    // 0x330930: 0x826565ae  lb          $a1, 0x65AE($s3)
    ctx->pc = 0x330930u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 26030)));
label_330934:
    // 0x330934: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x330934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
label_330938:
    // 0x330938: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x330938u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_33093c:
    // 0x33093c: 0x92c40008  lbu         $a0, 0x8($s6)
    ctx->pc = 0x33093cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 8)));
label_330940:
    // 0x330940: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x330940u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_330944:
    // 0x330944: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x330944u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_330948:
    // 0x330948: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x330948u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_33094c:
    // 0x33094c: 0xc0cc938  jal         func_3324E0
label_330950:
    if (ctx->pc == 0x330950u) {
        ctx->pc = 0x330954u;
        goto label_330954;
    }
    ctx->pc = 0x33094Cu;
    SET_GPR_U32(ctx, 31, 0x330954u);
    ctx->pc = 0x3324E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3324E0u, 0x33094Cu, 0x330954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330954u;
label_330954:
    // 0x330954: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x330954u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_330958:
    // 0x330958: 0x70c0f628  paddub      $fp, $a2, $zero
    ctx->pc = 0x330958u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_33095c:
    // 0x33095c: 0x826265ae  lb          $v0, 0x65AE($s3)
    ctx->pc = 0x33095cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 26030)));
label_330960:
    // 0x330960: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x330960u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
label_330964:
    // 0x330964: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x330964u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_330968:
    // 0x330968: 0x92c30009  lbu         $v1, 0x9($s6)
    ctx->pc = 0x330968u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 9)));
label_33096c:
    // 0x33096c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x33096cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_330970:
    // 0x330970: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x330970u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_330974:
    // 0x330974: 0xc0cc938  jal         func_3324E0
label_330978:
    if (ctx->pc == 0x330978u) {
        ctx->pc = 0x33097Cu;
        goto label_33097c;
    }
    ctx->pc = 0x330974u;
    SET_GPR_U32(ctx, 31, 0x33097Cu);
    ctx->pc = 0x3324E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3324E0u, 0x330974u, 0x33097Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33097Cu;
label_33097c:
    // 0x33097c: 0xafa2028c  sw          $v0, 0x28C($sp)
    ctx->pc = 0x33097cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 2));
label_330980:
    // 0x330980: 0x17c00005  bnez        $fp, . + 4 + (0x5 << 2)
label_330984:
    if (ctx->pc == 0x330984u) {
        ctx->pc = 0x330988u;
        goto label_330988;
    }
    ctx->pc = 0x330980u;
    {
        const bool branch_taken_0x330980 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x330980) {
            ctx->pc = 0x330998u;
            goto label_330998;
        }
    }
    ctx->pc = 0x330988u;
label_330988:
    // 0x330988: 0x8fa7028c  lw          $a3, 0x28C($sp)
    ctx->pc = 0x330988u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
label_33098c:
    // 0x33098c: 0x10e004ae  beqz        $a3, . + 4 + (0x4AE << 2)
label_330990:
    if (ctx->pc == 0x330990u) {
        ctx->pc = 0x330994u;
        goto label_330994;
    }
    ctx->pc = 0x33098Cu;
    {
        const bool branch_taken_0x33098c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x33098c) {
            ctx->pc = 0x331C48u;
            goto label_331c48;
        }
    }
    ctx->pc = 0x330994u;
label_330994:
    // 0x330994: 0x0  nop
    ctx->pc = 0x330994u;
    // NOP
label_330998:
    // 0x330998: 0x96c30002  lhu         $v1, 0x2($s6)
    ctx->pc = 0x330998u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
label_33099c:
    // 0x33099c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_3309a0:
    if (ctx->pc == 0x3309A0u) {
        ctx->pc = 0x3309A4u;
        goto label_3309a4;
    }
    ctx->pc = 0x33099Cu;
    {
        const bool branch_taken_0x33099c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x33099c) {
            ctx->pc = 0x3309B8u;
            goto label_3309b8;
        }
    }
    ctx->pc = 0x3309A4u;
label_3309a4:
    // 0x3309a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3309a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3309a8:
    // 0x3309a8: 0x0  nop
    ctx->pc = 0x3309a8u;
    // NOP
label_3309ac:
    // 0x3309ac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3309acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3309b0:
    // 0x3309b0: 0x10000008  b           . + 4 + (0x8 << 2)
label_3309b4:
    if (ctx->pc == 0x3309B4u) {
        ctx->pc = 0x3309B8u;
        goto label_3309b8;
    }
    ctx->pc = 0x3309B0u;
    {
        const bool branch_taken_0x3309b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3309b0) {
            ctx->pc = 0x3309D4u;
            goto label_3309d4;
        }
    }
    ctx->pc = 0x3309B8u;
label_3309b8:
    // 0x3309b8: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x3309b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_3309bc:
    // 0x3309bc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3309bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3309c0:
    // 0x3309c0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3309c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_3309c4:
    // 0x3309c4: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x3309c4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3309c8:
    // 0x3309c8: 0x0  nop
    ctx->pc = 0x3309c8u;
    // NOP
label_3309cc:
    // 0x3309cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3309ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3309d0:
    // 0x3309d0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3309d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3309d4:
    // 0x3309d4: 0x3c074248  lui         $a3, 0x4248
    ctx->pc = 0x3309d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16968 << 16));
label_3309d8:
    // 0x3309d8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3309d8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3309dc:
    // 0x3309dc: 0x0  nop
    ctx->pc = 0x3309dcu;
    // NOP
label_3309e0:
    // 0x3309e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3309e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3309e4:
    // 0x3309e4: 0xe7a00284  swc1        $f0, 0x284($sp)
    ctx->pc = 0x3309e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 644), bits); }
label_3309e8:
    // 0x3309e8: 0x96c20004  lhu         $v0, 0x4($s6)
    ctx->pc = 0x3309e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
label_3309ec:
    // 0x3309ec: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_3309f0:
    if (ctx->pc == 0x3309F0u) {
        ctx->pc = 0x3309F4u;
        goto label_3309f4;
    }
    ctx->pc = 0x3309ECu;
    {
        const bool branch_taken_0x3309ec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3309ec) {
            ctx->pc = 0x330A08u;
            goto label_330a08;
        }
    }
    ctx->pc = 0x3309F4u;
label_3309f4:
    // 0x3309f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3309f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3309f8:
    // 0x3309f8: 0x0  nop
    ctx->pc = 0x3309f8u;
    // NOP
label_3309fc:
    // 0x3309fc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3309fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_330a00:
    // 0x330a00: 0x10000008  b           . + 4 + (0x8 << 2)
label_330a04:
    if (ctx->pc == 0x330A04u) {
        ctx->pc = 0x330A08u;
        goto label_330a08;
    }
    ctx->pc = 0x330A00u;
    {
        const bool branch_taken_0x330a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330a00) {
            ctx->pc = 0x330A24u;
            goto label_330a24;
        }
    }
    ctx->pc = 0x330A08u;
label_330a08:
    // 0x330a08: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x330a08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_330a0c:
    // 0x330a0c: 0x30460001  andi        $a2, $v0, 0x1
    ctx->pc = 0x330a0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_330a10:
    // 0x330a10: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x330a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_330a14:
    // 0x330a14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x330a14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330a18:
    // 0x330a18: 0x0  nop
    ctx->pc = 0x330a18u;
    // NOP
label_330a1c:
    // 0x330a1c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x330a1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_330a20:
    // 0x330a20: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x330a20u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_330a24:
    // 0x330a24: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x330a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_330a28:
    // 0x330a28: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x330a28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_330a2c:
    // 0x330a2c: 0x0  nop
    ctx->pc = 0x330a2cu;
    // NOP
label_330a30:
    // 0x330a30: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x330a30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_330a34:
    // 0x330a34: 0xe7a00288  swc1        $f0, 0x288($sp)
    ctx->pc = 0x330a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
label_330a38:
    // 0x330a38: 0xc7a10284  lwc1        $f1, 0x284($sp)
    ctx->pc = 0x330a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_330a3c:
    // 0x330a3c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x330a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_330a40:
    // 0x330a40: 0xc42026f0  lwc1        $f0, 0x26F0($at)
    ctx->pc = 0x330a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 9968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330a44:
    // 0x330a44: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x330a44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_330a48:
    // 0x330a48: 0xe7a00284  swc1        $f0, 0x284($sp)
    ctx->pc = 0x330a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 644), bits); }
label_330a4c:
    // 0x330a4c: 0xc7a10288  lwc1        $f1, 0x288($sp)
    ctx->pc = 0x330a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_330a50:
    // 0x330a50: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x330a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_330a54:
    // 0x330a54: 0xc42026f4  lwc1        $f0, 0x26F4($at)
    ctx->pc = 0x330a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 9972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330a58:
    // 0x330a58: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x330a58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_330a5c:
    // 0x330a5c: 0xe7a00288  swc1        $f0, 0x288($sp)
    ctx->pc = 0x330a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
label_330a60:
    // 0x330a60: 0x92c20007  lbu         $v0, 0x7($s6)
    ctx->pc = 0x330a60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 7)));
label_330a64:
    // 0x330a64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x330a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_330a68:
    // 0x330a68: 0x10400312  beqz        $v0, . + 4 + (0x312 << 2)
label_330a6c:
    if (ctx->pc == 0x330A6Cu) {
        ctx->pc = 0x330A70u;
        goto label_330a70;
    }
    ctx->pc = 0x330A68u;
    {
        const bool branch_taken_0x330a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x330a68) {
            ctx->pc = 0x3316B4u;
            goto label_3316b4;
        }
    }
    ctx->pc = 0x330A70u;
label_330a70:
    // 0x330a70: 0x17c00005  bnez        $fp, . + 4 + (0x5 << 2)
label_330a74:
    if (ctx->pc == 0x330A74u) {
        ctx->pc = 0x330A78u;
        goto label_330a78;
    }
    ctx->pc = 0x330A70u;
    {
        const bool branch_taken_0x330a70 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x330a70) {
            ctx->pc = 0x330A88u;
            goto label_330a88;
        }
    }
    ctx->pc = 0x330A78u;
label_330a78:
    // 0x330a78: 0x8fa6028c  lw          $a2, 0x28C($sp)
    ctx->pc = 0x330a78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
label_330a7c:
    // 0x330a7c: 0x10c0030d  beqz        $a2, . + 4 + (0x30D << 2)
label_330a80:
    if (ctx->pc == 0x330A80u) {
        ctx->pc = 0x330A84u;
        goto label_330a84;
    }
    ctx->pc = 0x330A7Cu;
    {
        const bool branch_taken_0x330a7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x330a7c) {
            ctx->pc = 0x3316B4u;
            goto label_3316b4;
        }
    }
    ctx->pc = 0x330A84u;
label_330a84:
    // 0x330a84: 0x0  nop
    ctx->pc = 0x330a84u;
    // NOP
label_330a88:
    // 0x330a88: 0x92c20006  lbu         $v0, 0x6($s6)
    ctx->pc = 0x330a88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 6)));
label_330a8c:
    // 0x330a8c: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x330a8cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_330a90:
    // 0x330a90: 0x2ee10006  sltiu       $at, $s7, 0x6
    ctx->pc = 0x330a90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_330a94:
    // 0x330a94: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_330a98:
    if (ctx->pc == 0x330A98u) {
        ctx->pc = 0x330A9Cu;
        goto label_330a9c;
    }
    ctx->pc = 0x330A94u;
    {
        const bool branch_taken_0x330a94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x330a94) {
            ctx->pc = 0x330AD8u;
            goto label_330ad8;
        }
    }
    ctx->pc = 0x330A9Cu;
label_330a9c:
    // 0x330a9c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x330a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_330aa0:
    // 0x330aa0: 0x244320b0  addiu       $v1, $v0, 0x20B0
    ctx->pc = 0x330aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8368));
label_330aa4:
    // 0x330aa4: 0x173880  sll         $a3, $s7, 2
    ctx->pc = 0x330aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_330aa8:
    // 0x330aa8: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x330aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_330aac:
    // 0x330aac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x330aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_330ab0:
    // 0x330ab0: 0x400008  jr          $v0
label_330ab4:
    if (ctx->pc == 0x330AB4u) {
        ctx->pc = 0x330AB8u;
        goto label_330ab8;
    }
    ctx->pc = 0x330AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330AB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x330AB8u;
label_330ab8:
    // 0x330ab8: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x330ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
label_330abc:
    // 0x330abc: 0x24c395c8  addiu       $v1, $a2, -0x6A38
    ctx->pc = 0x330abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940104));
label_330ac0:
    // 0x330ac0: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x330ac0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_330ac4:
    // 0x330ac4: 0x10000004  b           . + 4 + (0x4 << 2)
label_330ac8:
    if (ctx->pc == 0x330AC8u) {
        ctx->pc = 0x330ACCu;
        goto label_330acc;
    }
    ctx->pc = 0x330AC4u;
    {
        const bool branch_taken_0x330ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330ac4) {
            ctx->pc = 0x330AD8u;
            goto label_330ad8;
        }
    }
    ctx->pc = 0x330ACCu;
label_330acc:
    // 0x330acc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x330accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_330ad0:
    // 0x330ad0: 0x244695dc  addiu       $a2, $v0, -0x6A24
    ctx->pc = 0x330ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940124));
label_330ad4:
    // 0x330ad4: 0x70c08e28  paddub      $s1, $a2, $zero
    ctx->pc = 0x330ad4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_330ad8:
    // 0x330ad8: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x330ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_330adc:
    // 0x330adc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x330adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_330ae0:
    // 0x330ae0: 0xe21823  subu        $v1, $a3, $v0
    ctx->pc = 0x330ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_330ae4:
    // 0x330ae4: 0xafa3026c  sw          $v1, 0x26C($sp)
    ctx->pc = 0x330ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 3));
label_330ae8:
    // 0x330ae8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x330ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_330aec:
    // 0x330aec: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x330aecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_330af0:
    // 0x330af0: 0x463823  subu        $a3, $v0, $a2
    ctx->pc = 0x330af0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_330af4:
    // 0x330af4: 0xafa70270  sw          $a3, 0x270($sp)
    ctx->pc = 0x330af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 7));
label_330af8:
    // 0x330af8: 0xc7a10284  lwc1        $f1, 0x284($sp)
    ctx->pc = 0x330af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_330afc:
    // 0x330afc: 0xe7a10274  swc1        $f1, 0x274($sp)
    ctx->pc = 0x330afcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
label_330b00:
    // 0x330b00: 0xc7a00288  lwc1        $f0, 0x288($sp)
    ctx->pc = 0x330b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330b04:
    // 0x330b04: 0xe7a00278  swc1        $f0, 0x278($sp)
    ctx->pc = 0x330b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
label_330b08:
    // 0x330b08: 0x3c023f2a  lui         $v0, 0x3F2A
    ctx->pc = 0x330b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16170 << 16));
label_330b0c:
    // 0x330b0c: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x330b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_330b10:
    // 0x330b10: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x330b10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_330b14:
    // 0x330b14: 0x8fa3026c  lw          $v1, 0x26C($sp)
    ctx->pc = 0x330b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_330b18:
    // 0x330b18: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x330b18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_330b1c:
    // 0x330b1c: 0x0  nop
    ctx->pc = 0x330b1cu;
    // NOP
label_330b20:
    // 0x330b20: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x330b20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_330b24:
    // 0x330b24: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x330b24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_330b28:
    // 0x330b28: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x330b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
label_330b2c:
    // 0x330b2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330b30:
    // 0x330b30: 0x0  nop
    ctx->pc = 0x330b30u;
    // NOP
label_330b34:
    // 0x330b34: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x330b34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_330b38:
    // 0x330b38: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x330b38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
label_330b3c:
    // 0x330b3c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x330b3cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330b40:
    // 0x330b40: 0x0  nop
    ctx->pc = 0x330b40u;
    // NOP
label_330b44:
    // 0x330b44: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x330b44u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_330b48:
    // 0x330b48: 0xc7a00274  lwc1        $f0, 0x274($sp)
    ctx->pc = 0x330b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330b4c:
    // 0x330b4c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x330b4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_330b50:
    // 0x330b50: 0xe7a00274  swc1        $f0, 0x274($sp)
    ctx->pc = 0x330b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
label_330b54:
    // 0x330b54: 0x3c033f2a  lui         $v1, 0x3F2A
    ctx->pc = 0x330b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16170 << 16));
label_330b58:
    // 0x330b58: 0x3462aaab  ori         $v0, $v1, 0xAAAB
    ctx->pc = 0x330b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
label_330b5c:
    // 0x330b5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x330b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_330b60:
    // 0x330b60: 0x8fa80270  lw          $t0, 0x270($sp)
    ctx->pc = 0x330b60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_330b64:
    // 0x330b64: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x330b64u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330b68:
    // 0x330b68: 0x0  nop
    ctx->pc = 0x330b68u;
    // NOP
label_330b6c:
    // 0x330b6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x330b6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_330b70:
    // 0x330b70: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x330b70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_330b74:
    // 0x330b74: 0x3c0642fa  lui         $a2, 0x42FA
    ctx->pc = 0x330b74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17146 << 16));
label_330b78:
    // 0x330b78: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x330b78u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330b7c:
    // 0x330b7c: 0x0  nop
    ctx->pc = 0x330b7cu;
    // NOP
label_330b80:
    // 0x330b80: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x330b80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_330b84:
    // 0x330b84: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x330b84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
label_330b88:
    // 0x330b88: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x330b88u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330b8c:
    // 0x330b8c: 0x0  nop
    ctx->pc = 0x330b8cu;
    // NOP
label_330b90:
    // 0x330b90: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x330b90u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_330b94:
    // 0x330b94: 0xc7a10278  lwc1        $f1, 0x278($sp)
    ctx->pc = 0x330b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_330b98:
    // 0x330b98: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x330b98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_330b9c:
    // 0x330b9c: 0xe7a00278  swc1        $f0, 0x278($sp)
    ctx->pc = 0x330b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
label_330ba0:
    // 0x330ba0: 0x3c063f2a  lui         $a2, 0x3F2A
    ctx->pc = 0x330ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16170 << 16));
label_330ba4:
    // 0x330ba4: 0x34c2aaab  ori         $v0, $a2, 0xAAAB
    ctx->pc = 0x330ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)43691);
label_330ba8:
    // 0x330ba8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x330ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_330bac:
    // 0x330bac: 0x8fa3026c  lw          $v1, 0x26C($sp)
    ctx->pc = 0x330bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_330bb0:
    // 0x330bb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x330bb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330bb4:
    // 0x330bb4: 0x0  nop
    ctx->pc = 0x330bb4u;
    // NOP
label_330bb8:
    // 0x330bb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x330bb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_330bbc:
    // 0x330bbc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x330bbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_330bc0:
    // 0x330bc0: 0x3c0642fa  lui         $a2, 0x42FA
    ctx->pc = 0x330bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17146 << 16));
label_330bc4:
    // 0x330bc4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x330bc4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330bc8:
    // 0x330bc8: 0x0  nop
    ctx->pc = 0x330bc8u;
    // NOP
label_330bcc:
    // 0x330bcc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x330bccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_330bd0:
    // 0x330bd0: 0xc7a10274  lwc1        $f1, 0x274($sp)
    ctx->pc = 0x330bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_330bd4:
    // 0x330bd4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x330bd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_330bd8:
    // 0x330bd8: 0xe7a0027c  swc1        $f0, 0x27C($sp)
    ctx->pc = 0x330bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
label_330bdc:
    // 0x330bdc: 0x3c023f2a  lui         $v0, 0x3F2A
    ctx->pc = 0x330bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16170 << 16));
label_330be0:
    // 0x330be0: 0x3447aaab  ori         $a3, $v0, 0xAAAB
    ctx->pc = 0x330be0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_330be4:
    // 0x330be4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x330be4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330be8:
    // 0x330be8: 0x8fa30270  lw          $v1, 0x270($sp)
    ctx->pc = 0x330be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_330bec:
    // 0x330bec: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x330becu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_330bf0:
    // 0x330bf0: 0x0  nop
    ctx->pc = 0x330bf0u;
    // NOP
label_330bf4:
    // 0x330bf4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x330bf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_330bf8:
    // 0x330bf8: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x330bf8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_330bfc:
    // 0x330bfc: 0x3c0342fa  lui         $v1, 0x42FA
    ctx->pc = 0x330bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17146 << 16));
label_330c00:
    // 0x330c00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x330c00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330c04:
    // 0x330c04: 0x0  nop
    ctx->pc = 0x330c04u;
    // NOP
label_330c08:
    // 0x330c08: 0x460c0082  mul.s       $f2, $f0, $f12
    ctx->pc = 0x330c08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_330c0c:
    // 0x330c0c: 0xc7a00278  lwc1        $f0, 0x278($sp)
    ctx->pc = 0x330c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330c10:
    // 0x330c10: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x330c10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_330c14:
    // 0x330c14: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x330c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_330c18:
    // 0x330c18: 0x3c073c23  lui         $a3, 0x3C23
    ctx->pc = 0x330c18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15395 << 16));
label_330c1c:
    // 0x330c1c: 0x34e7d70a  ori         $a3, $a3, 0xD70A
    ctx->pc = 0x330c1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
label_330c20:
    // 0x330c20: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x330c20u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_330c24:
    // 0x330c24: 0xc7a00274  lwc1        $f0, 0x274($sp)
    ctx->pc = 0x330c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330c28:
    // 0x330c28: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x330c28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_330c2c:
    // 0x330c2c: 0xe7a10274  swc1        $f1, 0x274($sp)
    ctx->pc = 0x330c2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
label_330c30:
    // 0x330c30: 0x3c073c23  lui         $a3, 0x3C23
    ctx->pc = 0x330c30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15395 << 16));
label_330c34:
    // 0x330c34: 0x34e2d70a  ori         $v0, $a3, 0xD70A
    ctx->pc = 0x330c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
label_330c38:
    // 0x330c38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x330c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_330c3c:
    // 0x330c3c: 0xc7a00278  lwc1        $f0, 0x278($sp)
    ctx->pc = 0x330c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330c40:
    // 0x330c40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x330c40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_330c44:
    // 0x330c44: 0xe7a00278  swc1        $f0, 0x278($sp)
    ctx->pc = 0x330c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
label_330c48:
    // 0x330c48: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x330c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_330c4c:
    // 0x330c4c: 0x3468d70a  ori         $t0, $v1, 0xD70A
    ctx->pc = 0x330c4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_330c50:
    // 0x330c50: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x330c50u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330c54:
    // 0x330c54: 0xc7a1027c  lwc1        $f1, 0x27C($sp)
    ctx->pc = 0x330c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_330c58:
    // 0x330c58: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x330c58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_330c5c:
    // 0x330c5c: 0xe7a0027c  swc1        $f0, 0x27C($sp)
    ctx->pc = 0x330c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
label_330c60:
    // 0x330c60: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x330c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_330c64:
    // 0x330c64: 0x3467d70a  ori         $a3, $v1, 0xD70A
    ctx->pc = 0x330c64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_330c68:
    // 0x330c68: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x330c68u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_330c6c:
    // 0x330c6c: 0xc7a00280  lwc1        $f0, 0x280($sp)
    ctx->pc = 0x330c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330c70:
    // 0x330c70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x330c70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_330c74:
    // 0x330c74: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x330c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_330c78:
    // 0x330c78: 0x3c073f4c  lui         $a3, 0x3F4C
    ctx->pc = 0x330c78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16204 << 16));
label_330c7c:
    // 0x330c7c: 0x34e7cccd  ori         $a3, $a3, 0xCCCD
    ctx->pc = 0x330c7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
label_330c80:
    // 0x330c80: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x330c80u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_330c84:
    // 0x330c84: 0xc7a00274  lwc1        $f0, 0x274($sp)
    ctx->pc = 0x330c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330c88:
    // 0x330c88: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x330c88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_330c8c:
    // 0x330c8c: 0xe7a00274  swc1        $f0, 0x274($sp)
    ctx->pc = 0x330c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
label_330c90:
    // 0x330c90: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x330c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
label_330c94:
    // 0x330c94: 0x3467cccd  ori         $a3, $v1, 0xCCCD
    ctx->pc = 0x330c94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_330c98:
    // 0x330c98: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x330c98u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_330c9c:
    // 0x330c9c: 0xc7a0027c  lwc1        $f0, 0x27C($sp)
    ctx->pc = 0x330c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330ca0:
    // 0x330ca0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x330ca0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_330ca4:
    // 0x330ca4: 0xe7a0027c  swc1        $f0, 0x27C($sp)
    ctx->pc = 0x330ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
label_330ca8:
    // 0x330ca8: 0x8e626610  lw          $v0, 0x6610($s3)
    ctx->pc = 0x330ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26128)));
label_330cac:
    // 0x330cac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x330cacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_330cb0:
    // 0x330cb0: 0x0  nop
    ctx->pc = 0x330cb0u;
    // NOP
label_330cb4:
    // 0x330cb4: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x330cb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_330cb8:
    // 0x330cb8: 0xc7a10274  lwc1        $f1, 0x274($sp)
    ctx->pc = 0x330cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_330cbc:
    // 0x330cbc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x330cbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_330cc0:
    // 0x330cc0: 0xe7a00274  swc1        $f0, 0x274($sp)
    ctx->pc = 0x330cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
label_330cc4:
    // 0x330cc4: 0x8e626614  lw          $v0, 0x6614($s3)
    ctx->pc = 0x330cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26132)));
label_330cc8:
    // 0x330cc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330ccc:
    // 0x330ccc: 0x0  nop
    ctx->pc = 0x330cccu;
    // NOP
label_330cd0:
    // 0x330cd0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x330cd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_330cd4:
    // 0x330cd4: 0xc7a10278  lwc1        $f1, 0x278($sp)
    ctx->pc = 0x330cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_330cd8:
    // 0x330cd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x330cd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_330cdc:
    // 0x330cdc: 0xe7a00278  swc1        $f0, 0x278($sp)
    ctx->pc = 0x330cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
label_330ce0:
    // 0x330ce0: 0x8e636610  lw          $v1, 0x6610($s3)
    ctx->pc = 0x330ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26128)));
label_330ce4:
    // 0x330ce4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x330ce4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330ce8:
    // 0x330ce8: 0x0  nop
    ctx->pc = 0x330ce8u;
    // NOP
label_330cec:
    // 0x330cec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x330cecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_330cf0:
    // 0x330cf0: 0xc7a0027c  lwc1        $f0, 0x27C($sp)
    ctx->pc = 0x330cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330cf4:
    // 0x330cf4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x330cf4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_330cf8:
    // 0x330cf8: 0xe7a1027c  swc1        $f1, 0x27C($sp)
    ctx->pc = 0x330cf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
label_330cfc:
    // 0x330cfc: 0x8e666614  lw          $a2, 0x6614($s3)
    ctx->pc = 0x330cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26132)));
label_330d00:
    // 0x330d00: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x330d00u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330d04:
    // 0x330d04: 0x0  nop
    ctx->pc = 0x330d04u;
    // NOP
label_330d08:
    // 0x330d08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x330d08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_330d0c:
    // 0x330d0c: 0xc7a10280  lwc1        $f1, 0x280($sp)
    ctx->pc = 0x330d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_330d10:
    // 0x330d10: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x330d10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_330d14:
    // 0x330d14: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x330d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_330d18:
    // 0x330d18: 0xc7ac0274  lwc1        $f12, 0x274($sp)
    ctx->pc = 0x330d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_330d1c:
    // 0x330d1c: 0xc047fa2  jal         func_11FE88
label_330d20:
    if (ctx->pc == 0x330D20u) {
        ctx->pc = 0x330D24u;
        goto label_330d24;
    }
    ctx->pc = 0x330D1Cu;
    SET_GPR_U32(ctx, 31, 0x330D24u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x330D1Cu, 0x330D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330D24u;
label_330d24:
    // 0x330d24: 0xafa20230  sw          $v0, 0x230($sp)
    ctx->pc = 0x330d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
label_330d28:
    // 0x330d28: 0xc7ac0278  lwc1        $f12, 0x278($sp)
    ctx->pc = 0x330d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_330d2c:
    // 0x330d2c: 0xc047fa2  jal         func_11FE88
label_330d30:
    if (ctx->pc == 0x330D30u) {
        ctx->pc = 0x330D34u;
        goto label_330d34;
    }
    ctx->pc = 0x330D2Cu;
    SET_GPR_U32(ctx, 31, 0x330D34u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x330D2Cu, 0x330D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330D34u;
label_330d34:
    // 0x330d34: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x330d34u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_330d38:
    // 0x330d38: 0xafa30234  sw          $v1, 0x234($sp)
    ctx->pc = 0x330d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 3));
label_330d3c:
    // 0x330d3c: 0xc7a0027c  lwc1        $f0, 0x27C($sp)
    ctx->pc = 0x330d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330d40:
    // 0x330d40: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x330d40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_330d44:
    // 0x330d44: 0xc047fa2  jal         func_11FE88
label_330d48:
    if (ctx->pc == 0x330D48u) {
        ctx->pc = 0x330D4Cu;
        goto label_330d4c;
    }
    ctx->pc = 0x330D44u;
    SET_GPR_U32(ctx, 31, 0x330D4Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x330D44u, 0x330D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330D4Cu;
label_330d4c:
    // 0x330d4c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x330d4cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_330d50:
    // 0x330d50: 0xafb20238  sw          $s2, 0x238($sp)
    ctx->pc = 0x330d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 18));
label_330d54:
    // 0x330d54: 0xc7ac0280  lwc1        $f12, 0x280($sp)
    ctx->pc = 0x330d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_330d58:
    // 0x330d58: 0xc047fa2  jal         func_11FE88
label_330d5c:
    if (ctx->pc == 0x330D5Cu) {
        ctx->pc = 0x330D60u;
        goto label_330d60;
    }
    ctx->pc = 0x330D58u;
    SET_GPR_U32(ctx, 31, 0x330D60u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x330D58u, 0x330D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330D60u;
label_330d60:
    // 0x330d60: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x330d60u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_330d64:
    // 0x330d64: 0xafa7023c  sw          $a3, 0x23C($sp)
    ctx->pc = 0x330d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 7));
label_330d68:
    // 0x330d68: 0xc7ac0274  lwc1        $f12, 0x274($sp)
    ctx->pc = 0x330d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_330d6c:
    // 0x330d6c: 0xc047fa2  jal         func_11FE88
label_330d70:
    if (ctx->pc == 0x330D70u) {
        ctx->pc = 0x330D74u;
        goto label_330d74;
    }
    ctx->pc = 0x330D6Cu;
    SET_GPR_U32(ctx, 31, 0x330D74u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x330D6Cu, 0x330D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330D74u;
label_330d74:
    // 0x330d74: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x330d74u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_330d78:
    // 0x330d78: 0xafa60240  sw          $a2, 0x240($sp)
    ctx->pc = 0x330d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 6));
label_330d7c:
    // 0x330d7c: 0xc7ac0278  lwc1        $f12, 0x278($sp)
    ctx->pc = 0x330d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_330d80:
    // 0x330d80: 0xc047fa2  jal         func_11FE88
label_330d84:
    if (ctx->pc == 0x330D84u) {
        ctx->pc = 0x330D88u;
        goto label_330d88;
    }
    ctx->pc = 0x330D80u;
    SET_GPR_U32(ctx, 31, 0x330D88u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x330D80u, 0x330D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330D88u;
label_330d88:
    // 0x330d88: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x330d88u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_330d8c:
    // 0x330d8c: 0xafa30244  sw          $v1, 0x244($sp)
    ctx->pc = 0x330d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 3));
label_330d90:
    // 0x330d90: 0xc7a0027c  lwc1        $f0, 0x27C($sp)
    ctx->pc = 0x330d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330d94:
    // 0x330d94: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x330d94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_330d98:
    // 0x330d98: 0xc047fa2  jal         func_11FE88
label_330d9c:
    if (ctx->pc == 0x330D9Cu) {
        ctx->pc = 0x330DA0u;
        goto label_330da0;
    }
    ctx->pc = 0x330D98u;
    SET_GPR_U32(ctx, 31, 0x330DA0u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x330D98u, 0x330DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330DA0u;
label_330da0:
    // 0x330da0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x330da0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_330da4:
    // 0x330da4: 0xafa30248  sw          $v1, 0x248($sp)
    ctx->pc = 0x330da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 3));
label_330da8:
    // 0x330da8: 0xc7ac0280  lwc1        $f12, 0x280($sp)
    ctx->pc = 0x330da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_330dac:
    // 0x330dac: 0xc047fa2  jal         func_11FE88
label_330db0:
    if (ctx->pc == 0x330DB0u) {
        ctx->pc = 0x330DB4u;
        goto label_330db4;
    }
    ctx->pc = 0x330DACu;
    SET_GPR_U32(ctx, 31, 0x330DB4u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x330DACu, 0x330DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330DB4u;
label_330db4:
    // 0x330db4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x330db4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_330db8:
    // 0x330db8: 0xafa6024c  sw          $a2, 0x24C($sp)
    ctx->pc = 0x330db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 6));
label_330dbc:
    // 0x330dbc: 0x92c20006  lbu         $v0, 0x6($s6)
    ctx->pc = 0x330dbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 6)));
label_330dc0:
    // 0x330dc0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x330dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_330dc4:
    // 0x330dc4: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x330dc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_330dc8:
    // 0x330dc8: 0x1020012b  beqz        $at, . + 4 + (0x12B << 2)
label_330dcc:
    if (ctx->pc == 0x330DCCu) {
        ctx->pc = 0x330DD0u;
        goto label_330dd0;
    }
    ctx->pc = 0x330DC8u;
    {
        const bool branch_taken_0x330dc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x330dc8) {
            ctx->pc = 0x331278u;
            goto label_331278;
        }
    }
    ctx->pc = 0x330DD0u;
label_330dd0:
    // 0x330dd0: 0x3c07003b  lui         $a3, 0x3B
    ctx->pc = 0x330dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59 << 16));
label_330dd4:
    // 0x330dd4: 0x24e62090  addiu       $a2, $a3, 0x2090
    ctx->pc = 0x330dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 8336));
label_330dd8:
    // 0x330dd8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x330dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_330ddc:
    // 0x330ddc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x330ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_330de0:
    // 0x330de0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x330de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_330de4:
    // 0x330de4: 0x400008  jr          $v0
label_330de8:
    if (ctx->pc == 0x330DE8u) {
        ctx->pc = 0x330DECu;
        goto label_330dec;
    }
    ctx->pc = 0x330DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330DE4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x330DECu;
label_330dec:
    // 0x330dec: 0x0  nop
    ctx->pc = 0x330decu;
    // NOP
label_330df0:
    // 0x330df0: 0x8fa60234  lw          $a2, 0x234($sp)
    ctx->pc = 0x330df0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
label_330df4:
    // 0x330df4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x330df4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330df8:
    // 0x330df8: 0x0  nop
    ctx->pc = 0x330df8u;
    // NOP
label_330dfc:
    // 0x330dfc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x330dfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_330e00:
    // 0x330e00: 0x3c034010  lui         $v1, 0x4010
    ctx->pc = 0x330e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16400 << 16));
label_330e04:
    // 0x330e04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x330e04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330e08:
    // 0x330e08: 0x0  nop
    ctx->pc = 0x330e08u;
    // NOP
label_330e0c:
    // 0x330e0c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x330e0cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_330e10:
    // 0x330e10: 0xc047f7e  jal         func_11FDF8
label_330e14:
    if (ctx->pc == 0x330E14u) {
        ctx->pc = 0x330E18u;
        goto label_330e18;
    }
    ctx->pc = 0x330E10u;
    SET_GPR_U32(ctx, 31, 0x330E18u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x330E10u, 0x330E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330E18u;
label_330e18:
    // 0x330e18: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x330e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_330e1c:
    // 0x330e1c: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x330e1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_330e20:
    // 0x330e20: 0xafa20234  sw          $v0, 0x234($sp)
    ctx->pc = 0x330e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 2));
label_330e24:
    // 0x330e24: 0x8fa2023c  lw          $v0, 0x23C($sp)
    ctx->pc = 0x330e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
label_330e28:
    // 0x330e28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330e2c:
    // 0x330e2c: 0x0  nop
    ctx->pc = 0x330e2cu;
    // NOP
label_330e30:
    // 0x330e30: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x330e30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_330e34:
    // 0x330e34: 0x3c064010  lui         $a2, 0x4010
    ctx->pc = 0x330e34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16400 << 16));
label_330e38:
    // 0x330e38: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x330e38u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330e3c:
    // 0x330e3c: 0x0  nop
    ctx->pc = 0x330e3cu;
    // NOP
label_330e40:
    // 0x330e40: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x330e40u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_330e44:
    // 0x330e44: 0xc047f7e  jal         func_11FDF8
label_330e48:
    if (ctx->pc == 0x330E48u) {
        ctx->pc = 0x330E4Cu;
        goto label_330e4c;
    }
    ctx->pc = 0x330E44u;
    SET_GPR_U32(ctx, 31, 0x330E4Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x330E44u, 0x330E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330E4Cu;
label_330e4c:
    // 0x330e4c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x330e4cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_330e50:
    // 0x330e50: 0xafa3023c  sw          $v1, 0x23C($sp)
    ctx->pc = 0x330e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 3));
label_330e54:
    // 0x330e54: 0x8fa30244  lw          $v1, 0x244($sp)
    ctx->pc = 0x330e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
label_330e58:
    // 0x330e58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x330e58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330e5c:
    // 0x330e5c: 0x0  nop
    ctx->pc = 0x330e5cu;
    // NOP
label_330e60:
    // 0x330e60: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x330e60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_330e64:
    // 0x330e64: 0x3c064010  lui         $a2, 0x4010
    ctx->pc = 0x330e64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16400 << 16));
label_330e68:
    // 0x330e68: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x330e68u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330e6c:
    // 0x330e6c: 0x0  nop
    ctx->pc = 0x330e6cu;
    // NOP
label_330e70:
    // 0x330e70: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x330e70u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_330e74:
    // 0x330e74: 0xc047f7e  jal         func_11FDF8
label_330e78:
    if (ctx->pc == 0x330E78u) {
        ctx->pc = 0x330E7Cu;
        goto label_330e7c;
    }
    ctx->pc = 0x330E74u;
    SET_GPR_U32(ctx, 31, 0x330E7Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x330E74u, 0x330E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330E7Cu;
label_330e7c:
    // 0x330e7c: 0xafa20244  sw          $v0, 0x244($sp)
    ctx->pc = 0x330e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 2));
label_330e80:
    // 0x330e80: 0x8fa3024c  lw          $v1, 0x24C($sp)
    ctx->pc = 0x330e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
label_330e84:
    // 0x330e84: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x330e84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_330e88:
    // 0x330e88: 0x0  nop
    ctx->pc = 0x330e88u;
    // NOP
label_330e8c:
    // 0x330e8c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x330e8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_330e90:
    // 0x330e90: 0x3c064010  lui         $a2, 0x4010
    ctx->pc = 0x330e90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16400 << 16));
label_330e94:
    // 0x330e94: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x330e94u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_330e98:
    // 0x330e98: 0x0  nop
    ctx->pc = 0x330e98u;
    // NOP
label_330e9c:
    // 0x330e9c: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x330e9cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
label_330ea0:
    // 0x330ea0: 0xc047f7e  jal         func_11FDF8
label_330ea4:
    if (ctx->pc == 0x330EA4u) {
        ctx->pc = 0x330EA8u;
        goto label_330ea8;
    }
    ctx->pc = 0x330EA0u;
    SET_GPR_U32(ctx, 31, 0x330EA8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x330EA0u, 0x330EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330EA8u;
label_330ea8:
    // 0x330ea8: 0xafa2024c  sw          $v0, 0x24C($sp)
    ctx->pc = 0x330ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
label_330eac:
    // 0x330eac: 0x100000f2  b           . + 4 + (0xF2 << 2)
label_330eb0:
    if (ctx->pc == 0x330EB0u) {
        ctx->pc = 0x330EB4u;
        goto label_330eb4;
    }
    ctx->pc = 0x330EACu;
    {
        const bool branch_taken_0x330eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330eac) {
            ctx->pc = 0x331278u;
            goto label_331278;
        }
    }
    ctx->pc = 0x330EB4u;
label_330eb4:
    // 0x330eb4: 0x8fa30234  lw          $v1, 0x234($sp)
    ctx->pc = 0x330eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
label_330eb8:
    // 0x330eb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x330eb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330ebc:
    // 0x330ebc: 0x0  nop
    ctx->pc = 0x330ebcu;
    // NOP
label_330ec0:
    // 0x330ec0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x330ec0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_330ec4:
    // 0x330ec4: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x330ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
label_330ec8:
    // 0x330ec8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330ecc:
    // 0x330ecc: 0x0  nop
    ctx->pc = 0x330eccu;
    // NOP
label_330ed0:
    // 0x330ed0: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x330ed0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_330ed4:
    // 0x330ed4: 0xc047f7e  jal         func_11FDF8
label_330ed8:
    if (ctx->pc == 0x330ED8u) {
        ctx->pc = 0x330EDCu;
        goto label_330edc;
    }
    ctx->pc = 0x330ED4u;
    SET_GPR_U32(ctx, 31, 0x330EDCu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x330ED4u, 0x330EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330EDCu;
label_330edc:
    // 0x330edc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x330edcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_330ee0:
    // 0x330ee0: 0xafa30234  sw          $v1, 0x234($sp)
    ctx->pc = 0x330ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 3));
label_330ee4:
    // 0x330ee4: 0x8fa2023c  lw          $v0, 0x23C($sp)
    ctx->pc = 0x330ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
label_330ee8:
    // 0x330ee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330eec:
    // 0x330eec: 0x0  nop
    ctx->pc = 0x330eecu;
    // NOP
label_330ef0:
    // 0x330ef0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x330ef0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_330ef4:
    // 0x330ef4: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x330ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
label_330ef8:
    // 0x330ef8: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x330ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_330efc:
    // 0x330efc: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x330efcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_330f00:
    // 0x330f00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x330f00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_330f04:
    // 0x330f04: 0x0  nop
    ctx->pc = 0x330f04u;
    // NOP
label_330f08:
    // 0x330f08: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x330f08u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_330f0c:
    // 0x330f0c: 0xc047f7e  jal         func_11FDF8
label_330f10:
    if (ctx->pc == 0x330F10u) {
        ctx->pc = 0x330F14u;
        goto label_330f14;
    }
    ctx->pc = 0x330F0Cu;
    SET_GPR_U32(ctx, 31, 0x330F14u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x330F0Cu, 0x330F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330F14u;
label_330f14:
    // 0x330f14: 0xafa2023c  sw          $v0, 0x23C($sp)
    ctx->pc = 0x330f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 2));
label_330f18:
    // 0x330f18: 0x8fa30244  lw          $v1, 0x244($sp)
    ctx->pc = 0x330f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
label_330f1c:
    // 0x330f1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x330f1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330f20:
    // 0x330f20: 0x0  nop
    ctx->pc = 0x330f20u;
    // NOP
label_330f24:
    // 0x330f24: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x330f24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_330f28:
    // 0x330f28: 0x3c034090  lui         $v1, 0x4090
    ctx->pc = 0x330f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16528 << 16));
label_330f2c:
    // 0x330f2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x330f2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330f30:
    // 0x330f30: 0x0  nop
    ctx->pc = 0x330f30u;
    // NOP
label_330f34:
    // 0x330f34: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x330f34u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_330f38:
    // 0x330f38: 0xc047f7e  jal         func_11FDF8
label_330f3c:
    if (ctx->pc == 0x330F3Cu) {
        ctx->pc = 0x330F40u;
        goto label_330f40;
    }
    ctx->pc = 0x330F38u;
    SET_GPR_U32(ctx, 31, 0x330F40u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x330F38u, 0x330F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330F40u;
label_330f40:
    // 0x330f40: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x330f40u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_330f44:
    // 0x330f44: 0xafa30244  sw          $v1, 0x244($sp)
    ctx->pc = 0x330f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 3));
label_330f48:
    // 0x330f48: 0x8fa6024c  lw          $a2, 0x24C($sp)
    ctx->pc = 0x330f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
label_330f4c:
    // 0x330f4c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x330f4cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330f50:
    // 0x330f50: 0x0  nop
    ctx->pc = 0x330f50u;
    // NOP
label_330f54:
    // 0x330f54: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x330f54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_330f58:
    // 0x330f58: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x330f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
label_330f5c:
    // 0x330f5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330f60:
    // 0x330f60: 0x0  nop
    ctx->pc = 0x330f60u;
    // NOP
label_330f64:
    // 0x330f64: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x330f64u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_330f68:
    // 0x330f68: 0xc047f7e  jal         func_11FDF8
label_330f6c:
    if (ctx->pc == 0x330F6Cu) {
        ctx->pc = 0x330F70u;
        goto label_330f70;
    }
    ctx->pc = 0x330F68u;
    SET_GPR_U32(ctx, 31, 0x330F70u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x330F68u, 0x330F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330F70u;
label_330f70:
    // 0x330f70: 0xafa2024c  sw          $v0, 0x24C($sp)
    ctx->pc = 0x330f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
label_330f74:
    // 0x330f74: 0x100000c0  b           . + 4 + (0xC0 << 2)
label_330f78:
    if (ctx->pc == 0x330F78u) {
        ctx->pc = 0x330F7Cu;
        goto label_330f7c;
    }
    ctx->pc = 0x330F74u;
    {
        const bool branch_taken_0x330f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330f74) {
            ctx->pc = 0x331278u;
            goto label_331278;
        }
    }
    ctx->pc = 0x330F7Cu;
label_330f7c:
    // 0x330f7c: 0x8fa60234  lw          $a2, 0x234($sp)
    ctx->pc = 0x330f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
label_330f80:
    // 0x330f80: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x330f80u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330f84:
    // 0x330f84: 0x0  nop
    ctx->pc = 0x330f84u;
    // NOP
label_330f88:
    // 0x330f88: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x330f88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_330f8c:
    // 0x330f8c: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x330f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
label_330f90:
    // 0x330f90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x330f90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330f94:
    // 0x330f94: 0x0  nop
    ctx->pc = 0x330f94u;
    // NOP
label_330f98:
    // 0x330f98: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x330f98u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_330f9c:
    // 0x330f9c: 0xc047f7e  jal         func_11FDF8
label_330fa0:
    if (ctx->pc == 0x330FA0u) {
        ctx->pc = 0x330FA4u;
        goto label_330fa4;
    }
    ctx->pc = 0x330F9Cu;
    SET_GPR_U32(ctx, 31, 0x330FA4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x330F9Cu, 0x330FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330FA4u;
label_330fa4:
    // 0x330fa4: 0xafa20234  sw          $v0, 0x234($sp)
    ctx->pc = 0x330fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 2));
label_330fa8:
    // 0x330fa8: 0x8fa2023c  lw          $v0, 0x23C($sp)
    ctx->pc = 0x330fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
label_330fac:
    // 0x330fac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330fb0:
    // 0x330fb0: 0x0  nop
    ctx->pc = 0x330fb0u;
    // NOP
label_330fb4:
    // 0x330fb4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x330fb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_330fb8:
    // 0x330fb8: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x330fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
label_330fbc:
    // 0x330fbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x330fbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330fc0:
    // 0x330fc0: 0x0  nop
    ctx->pc = 0x330fc0u;
    // NOP
label_330fc4:
    // 0x330fc4: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x330fc4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_330fc8:
    // 0x330fc8: 0xc047f7e  jal         func_11FDF8
label_330fcc:
    if (ctx->pc == 0x330FCCu) {
        ctx->pc = 0x330FD0u;
        goto label_330fd0;
    }
    ctx->pc = 0x330FC8u;
    SET_GPR_U32(ctx, 31, 0x330FD0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x330FC8u, 0x330FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330FD0u;
label_330fd0:
    // 0x330fd0: 0xafa2023c  sw          $v0, 0x23C($sp)
    ctx->pc = 0x330fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 2));
label_330fd4:
    // 0x330fd4: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x330fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
label_330fd8:
    // 0x330fd8: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x330fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_330fdc:
    // 0x330fdc: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x330fdcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_330fe0:
    // 0x330fe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330fe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330fe4:
    // 0x330fe4: 0x0  nop
    ctx->pc = 0x330fe4u;
    // NOP
label_330fe8:
    // 0x330fe8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x330fe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_330fec:
    // 0x330fec: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x330fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
label_330ff0:
    // 0x330ff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330ff4:
    // 0x330ff4: 0x0  nop
    ctx->pc = 0x330ff4u;
    // NOP
label_330ff8:
    // 0x330ff8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x330ff8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_330ffc:
    // 0x330ffc: 0xc047f7e  jal         func_11FDF8
label_331000:
    if (ctx->pc == 0x331000u) {
        ctx->pc = 0x331004u;
        goto label_331004;
    }
    ctx->pc = 0x330FFCu;
    SET_GPR_U32(ctx, 31, 0x331004u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x330FFCu, 0x331004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331004u;
label_331004:
    // 0x331004: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x331004u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_331008:
    // 0x331008: 0xafa60244  sw          $a2, 0x244($sp)
    ctx->pc = 0x331008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 6));
label_33100c:
    // 0x33100c: 0x8fa3024c  lw          $v1, 0x24C($sp)
    ctx->pc = 0x33100cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
label_331010:
    // 0x331010: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x331010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331014:
    // 0x331014: 0x0  nop
    ctx->pc = 0x331014u;
    // NOP
label_331018:
    // 0x331018: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x331018u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_33101c:
    // 0x33101c: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x33101cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
label_331020:
    // 0x331020: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x331020u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331024:
    // 0x331024: 0x0  nop
    ctx->pc = 0x331024u;
    // NOP
label_331028:
    // 0x331028: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x331028u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_33102c:
    // 0x33102c: 0xc047f7e  jal         func_11FDF8
label_331030:
    if (ctx->pc == 0x331030u) {
        ctx->pc = 0x331034u;
        goto label_331034;
    }
    ctx->pc = 0x33102Cu;
    SET_GPR_U32(ctx, 31, 0x331034u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x33102Cu, 0x331034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331034u;
label_331034:
    // 0x331034: 0xafa2024c  sw          $v0, 0x24C($sp)
    ctx->pc = 0x331034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
label_331038:
    // 0x331038: 0x1000008f  b           . + 4 + (0x8F << 2)
label_33103c:
    if (ctx->pc == 0x33103Cu) {
        ctx->pc = 0x331040u;
        goto label_331040;
    }
    ctx->pc = 0x331038u;
    {
        const bool branch_taken_0x331038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331038) {
            ctx->pc = 0x331278u;
            goto label_331278;
        }
    }
    ctx->pc = 0x331040u;
label_331040:
    // 0x331040: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x331040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_331044:
    // 0x331044: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x331044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331048:
    // 0x331048: 0x0  nop
    ctx->pc = 0x331048u;
    // NOP
label_33104c:
    // 0x33104c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x33104cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_331050:
    // 0x331050: 0x3c034010  lui         $v1, 0x4010
    ctx->pc = 0x331050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16400 << 16));
label_331054:
    // 0x331054: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x331054u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331058:
    // 0x331058: 0x0  nop
    ctx->pc = 0x331058u;
    // NOP
label_33105c:
    // 0x33105c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x33105cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_331060:
    // 0x331060: 0xc047f7e  jal         func_11FDF8
label_331064:
    if (ctx->pc == 0x331064u) {
        ctx->pc = 0x331068u;
        goto label_331068;
    }
    ctx->pc = 0x331060u;
    SET_GPR_U32(ctx, 31, 0x331068u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x331060u, 0x331068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331068u;
label_331068:
    // 0x331068: 0xafa20230  sw          $v0, 0x230($sp)
    ctx->pc = 0x331068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
label_33106c:
    // 0x33106c: 0x8fa30238  lw          $v1, 0x238($sp)
    ctx->pc = 0x33106cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
label_331070:
    // 0x331070: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x331070u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331074:
    // 0x331074: 0x0  nop
    ctx->pc = 0x331074u;
    // NOP
label_331078:
    // 0x331078: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x331078u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_33107c:
    // 0x33107c: 0x3c064010  lui         $a2, 0x4010
    ctx->pc = 0x33107cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16400 << 16));
label_331080:
    // 0x331080: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x331080u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331084:
    // 0x331084: 0x0  nop
    ctx->pc = 0x331084u;
    // NOP
label_331088:
    // 0x331088: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x331088u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_33108c:
    // 0x33108c: 0xc047f7e  jal         func_11FDF8
label_331090:
    if (ctx->pc == 0x331090u) {
        ctx->pc = 0x331094u;
        goto label_331094;
    }
    ctx->pc = 0x33108Cu;
    SET_GPR_U32(ctx, 31, 0x331094u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x33108Cu, 0x331094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331094u;
label_331094:
    // 0x331094: 0xafa20238  sw          $v0, 0x238($sp)
    ctx->pc = 0x331094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 2));
label_331098:
    // 0x331098: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x331098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_33109c:
    // 0x33109c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33109cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3310a0:
    // 0x3310a0: 0x0  nop
    ctx->pc = 0x3310a0u;
    // NOP
label_3310a4:
    // 0x3310a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3310a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3310a8:
    // 0x3310a8: 0x3c034010  lui         $v1, 0x4010
    ctx->pc = 0x3310a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16400 << 16));
label_3310ac:
    // 0x3310ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3310acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3310b0:
    // 0x3310b0: 0x0  nop
    ctx->pc = 0x3310b0u;
    // NOP
label_3310b4:
    // 0x3310b4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3310b4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3310b8:
    // 0x3310b8: 0xc047f7e  jal         func_11FDF8
label_3310bc:
    if (ctx->pc == 0x3310BCu) {
        ctx->pc = 0x3310C0u;
        goto label_3310c0;
    }
    ctx->pc = 0x3310B8u;
    SET_GPR_U32(ctx, 31, 0x3310C0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x3310B8u, 0x3310C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3310C0u;
label_3310c0:
    // 0x3310c0: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x3310c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_3310c4:
    // 0x3310c4: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x3310c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3310c8:
    // 0x3310c8: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x3310c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
label_3310cc:
    // 0x3310cc: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x3310ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
label_3310d0:
    // 0x3310d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3310d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3310d4:
    // 0x3310d4: 0x0  nop
    ctx->pc = 0x3310d4u;
    // NOP
label_3310d8:
    // 0x3310d8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3310d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3310dc:
    // 0x3310dc: 0x3c034010  lui         $v1, 0x4010
    ctx->pc = 0x3310dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16400 << 16));
label_3310e0:
    // 0x3310e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3310e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3310e4:
    // 0x3310e4: 0x0  nop
    ctx->pc = 0x3310e4u;
    // NOP
label_3310e8:
    // 0x3310e8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3310e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3310ec:
    // 0x3310ec: 0xc047f7e  jal         func_11FDF8
label_3310f0:
    if (ctx->pc == 0x3310F0u) {
        ctx->pc = 0x3310F4u;
        goto label_3310f4;
    }
    ctx->pc = 0x3310ECu;
    SET_GPR_U32(ctx, 31, 0x3310F4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x3310ECu, 0x3310F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3310F4u;
label_3310f4:
    // 0x3310f4: 0xafa20248  sw          $v0, 0x248($sp)
    ctx->pc = 0x3310f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
label_3310f8:
    // 0x3310f8: 0x1000005f  b           . + 4 + (0x5F << 2)
label_3310fc:
    if (ctx->pc == 0x3310FCu) {
        ctx->pc = 0x331100u;
        goto label_331100;
    }
    ctx->pc = 0x3310F8u;
    {
        const bool branch_taken_0x3310f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3310f8) {
            ctx->pc = 0x331278u;
            goto label_331278;
        }
    }
    ctx->pc = 0x331100u;
label_331100:
    // 0x331100: 0x8fa60230  lw          $a2, 0x230($sp)
    ctx->pc = 0x331100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_331104:
    // 0x331104: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x331104u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331108:
    // 0x331108: 0x0  nop
    ctx->pc = 0x331108u;
    // NOP
label_33110c:
    // 0x33110c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x33110cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_331110:
    // 0x331110: 0x3c034090  lui         $v1, 0x4090
    ctx->pc = 0x331110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16528 << 16));
label_331114:
    // 0x331114: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x331114u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331118:
    // 0x331118: 0x0  nop
    ctx->pc = 0x331118u;
    // NOP
label_33111c:
    // 0x33111c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x33111cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_331120:
    // 0x331120: 0xc047f7e  jal         func_11FDF8
label_331124:
    if (ctx->pc == 0x331124u) {
        ctx->pc = 0x331128u;
        goto label_331128;
    }
    ctx->pc = 0x331120u;
    SET_GPR_U32(ctx, 31, 0x331128u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x331120u, 0x331128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331128u;
label_331128:
    // 0x331128: 0xafa20230  sw          $v0, 0x230($sp)
    ctx->pc = 0x331128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
label_33112c:
    // 0x33112c: 0x8fa70238  lw          $a3, 0x238($sp)
    ctx->pc = 0x33112cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
label_331130:
    // 0x331130: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x331130u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331134:
    // 0x331134: 0x0  nop
    ctx->pc = 0x331134u;
    // NOP
label_331138:
    // 0x331138: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x331138u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_33113c:
    // 0x33113c: 0x3c064090  lui         $a2, 0x4090
    ctx->pc = 0x33113cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16528 << 16));
label_331140:
    // 0x331140: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x331140u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331144:
    // 0x331144: 0x0  nop
    ctx->pc = 0x331144u;
    // NOP
label_331148:
    // 0x331148: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x331148u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_33114c:
    // 0x33114c: 0xc047f7e  jal         func_11FDF8
label_331150:
    if (ctx->pc == 0x331150u) {
        ctx->pc = 0x331154u;
        goto label_331154;
    }
    ctx->pc = 0x33114Cu;
    SET_GPR_U32(ctx, 31, 0x331154u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x33114Cu, 0x331154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331154u;
label_331154:
    // 0x331154: 0xafa20238  sw          $v0, 0x238($sp)
    ctx->pc = 0x331154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 2));
label_331158:
    // 0x331158: 0x8fa30240  lw          $v1, 0x240($sp)
    ctx->pc = 0x331158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_33115c:
    // 0x33115c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33115cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331160:
    // 0x331160: 0x0  nop
    ctx->pc = 0x331160u;
    // NOP
label_331164:
    // 0x331164: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x331164u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_331168:
    // 0x331168: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x331168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
label_33116c:
    // 0x33116c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33116cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331170:
    // 0x331170: 0x0  nop
    ctx->pc = 0x331170u;
    // NOP
label_331174:
    // 0x331174: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x331174u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_331178:
    // 0x331178: 0xc047f7e  jal         func_11FDF8
label_33117c:
    if (ctx->pc == 0x33117Cu) {
        ctx->pc = 0x331180u;
        goto label_331180;
    }
    ctx->pc = 0x331178u;
    SET_GPR_U32(ctx, 31, 0x331180u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x331178u, 0x331180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331180u;
label_331180:
    // 0x331180: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x331180u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_331184:
    // 0x331184: 0xafa30240  sw          $v1, 0x240($sp)
    ctx->pc = 0x331184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 3));
label_331188:
    // 0x331188: 0x8fa60248  lw          $a2, 0x248($sp)
    ctx->pc = 0x331188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
label_33118c:
    // 0x33118c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x33118cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331190:
    // 0x331190: 0x0  nop
    ctx->pc = 0x331190u;
    // NOP
label_331194:
    // 0x331194: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x331194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_331198:
    // 0x331198: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x331198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
label_33119c:
    // 0x33119c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33119cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3311a0:
    // 0x3311a0: 0x0  nop
    ctx->pc = 0x3311a0u;
    // NOP
label_3311a4:
    // 0x3311a4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3311a4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3311a8:
    // 0x3311a8: 0xc047f7e  jal         func_11FDF8
label_3311ac:
    if (ctx->pc == 0x3311ACu) {
        ctx->pc = 0x3311B0u;
        goto label_3311b0;
    }
    ctx->pc = 0x3311A8u;
    SET_GPR_U32(ctx, 31, 0x3311B0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x3311A8u, 0x3311B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3311B0u;
label_3311b0:
    // 0x3311b0: 0xafa20248  sw          $v0, 0x248($sp)
    ctx->pc = 0x3311b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
label_3311b4:
    // 0x3311b4: 0x10000030  b           . + 4 + (0x30 << 2)
label_3311b8:
    if (ctx->pc == 0x3311B8u) {
        ctx->pc = 0x3311BCu;
        goto label_3311bc;
    }
    ctx->pc = 0x3311B4u;
    {
        const bool branch_taken_0x3311b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3311b4) {
            ctx->pc = 0x331278u;
            goto label_331278;
        }
    }
    ctx->pc = 0x3311BCu;
label_3311bc:
    // 0x3311bc: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x3311bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_3311c0:
    // 0x3311c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3311c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3311c4:
    // 0x3311c4: 0x0  nop
    ctx->pc = 0x3311c4u;
    // NOP
label_3311c8:
    // 0x3311c8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3311c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3311cc:
    // 0x3311cc: 0x3c0a40e0  lui         $t2, 0x40E0
    ctx->pc = 0x3311ccu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16608 << 16));
label_3311d0:
    // 0x3311d0: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x3311d0u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3311d4:
    // 0x3311d4: 0x0  nop
    ctx->pc = 0x3311d4u;
    // NOP
label_3311d8:
    // 0x3311d8: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x3311d8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3311dc:
    // 0x3311dc: 0xc047f7e  jal         func_11FDF8
label_3311e0:
    if (ctx->pc == 0x3311E0u) {
        ctx->pc = 0x3311E4u;
        goto label_3311e4;
    }
    ctx->pc = 0x3311DCu;
    SET_GPR_U32(ctx, 31, 0x3311E4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x3311DCu, 0x3311E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3311E4u;
label_3311e4:
    // 0x3311e4: 0xafa20230  sw          $v0, 0x230($sp)
    ctx->pc = 0x3311e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
label_3311e8:
    // 0x3311e8: 0x8fa30238  lw          $v1, 0x238($sp)
    ctx->pc = 0x3311e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
label_3311ec:
    // 0x3311ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3311ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3311f0:
    // 0x3311f0: 0x0  nop
    ctx->pc = 0x3311f0u;
    // NOP
label_3311f4:
    // 0x3311f4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x3311f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_3311f8:
    // 0x3311f8: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x3311f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
label_3311fc:
    // 0x3311fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3311fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331200:
    // 0x331200: 0x0  nop
    ctx->pc = 0x331200u;
    // NOP
label_331204:
    // 0x331204: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x331204u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_331208:
    // 0x331208: 0xc047f7e  jal         func_11FDF8
label_33120c:
    if (ctx->pc == 0x33120Cu) {
        ctx->pc = 0x331210u;
        goto label_331210;
    }
    ctx->pc = 0x331208u;
    SET_GPR_U32(ctx, 31, 0x331210u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x331208u, 0x331210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331210u;
label_331210:
    // 0x331210: 0xafa20238  sw          $v0, 0x238($sp)
    ctx->pc = 0x331210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 2));
label_331214:
    // 0x331214: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x331214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_331218:
    // 0x331218: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x331218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33121c:
    // 0x33121c: 0x0  nop
    ctx->pc = 0x33121cu;
    // NOP
label_331220:
    // 0x331220: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x331220u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_331224:
    // 0x331224: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x331224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
label_331228:
    // 0x331228: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x331228u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33122c:
    // 0x33122c: 0x0  nop
    ctx->pc = 0x33122cu;
    // NOP
label_331230:
    // 0x331230: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x331230u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_331234:
    // 0x331234: 0xc047f7e  jal         func_11FDF8
label_331238:
    if (ctx->pc == 0x331238u) {
        ctx->pc = 0x33123Cu;
        goto label_33123c;
    }
    ctx->pc = 0x331234u;
    SET_GPR_U32(ctx, 31, 0x33123Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x331234u, 0x33123Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33123Cu;
label_33123c:
    // 0x33123c: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x33123cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
label_331240:
    // 0x331240: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x331240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
label_331244:
    // 0x331244: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x331244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_331248:
    // 0x331248: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x331248u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_33124c:
    // 0x33124c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33124cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331250:
    // 0x331250: 0x0  nop
    ctx->pc = 0x331250u;
    // NOP
label_331254:
    // 0x331254: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x331254u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_331258:
    // 0x331258: 0x3c0b40e0  lui         $t3, 0x40E0
    ctx->pc = 0x331258u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16608 << 16));
label_33125c:
    // 0x33125c: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x33125cu;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331260:
    // 0x331260: 0x0  nop
    ctx->pc = 0x331260u;
    // NOP
label_331264:
    // 0x331264: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x331264u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_331268:
    // 0x331268: 0xc047f7e  jal         func_11FDF8
label_33126c:
    if (ctx->pc == 0x33126Cu) {
        ctx->pc = 0x331270u;
        goto label_331270;
    }
    ctx->pc = 0x331268u;
    SET_GPR_U32(ctx, 31, 0x331270u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x331268u, 0x331270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331270u;
label_331270:
    // 0x331270: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x331270u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_331274:
    // 0x331274: 0xafa30248  sw          $v1, 0x248($sp)
    ctx->pc = 0x331274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 3));
label_331278:
    // 0x331278: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x331278u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_33127c:
    // 0x33127c: 0x100000e4  b           . + 4 + (0xE4 << 2)
label_331280:
    if (ctx->pc == 0x331280u) {
        ctx->pc = 0x331284u;
        goto label_331284;
    }
    ctx->pc = 0x33127Cu;
    {
        const bool branch_taken_0x33127c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33127c) {
            ctx->pc = 0x331610u;
            goto label_331610;
        }
    }
    ctx->pc = 0x331284u;
label_331284:
    // 0x331284: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x331284u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_331288:
    // 0x331288: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x331288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
label_33128c:
    // 0x33128c: 0x3c066400  lui         $a2, 0x6400
    ctx->pc = 0x33128cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25600 << 16));
label_331290:
    // 0x331290: 0x34c72b16  ori         $a3, $a2, 0x2B16
    ctx->pc = 0x331290u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)11030);
label_331294:
    // 0x331294: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x331294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
label_331298:
    // 0x331298: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x331298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_33129c:
    // 0x33129c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x33129cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3312a0:
    // 0x3312a0: 0x34680040  ori         $t0, $v1, 0x40
    ctx->pc = 0x3312a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_3312a4:
    // 0x3312a4: 0xae080004  sw          $t0, 0x4($s0)
    ctx->pc = 0x3312a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 8));
label_3312a8:
    // 0x3312a8: 0x92c90006  lbu         $t1, 0x6($s6)
    ctx->pc = 0x3312a8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 6)));
label_3312ac:
    // 0x3312ac: 0x312200ff  andi        $v0, $t1, 0xFF
    ctx->pc = 0x3312acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_3312b0:
    // 0x3312b0: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x3312b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_3312b4:
    // 0x3312b4: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
label_3312b8:
    if (ctx->pc == 0x3312B8u) {
        ctx->pc = 0x3312BCu;
        goto label_3312bc;
    }
    ctx->pc = 0x3312B4u;
    {
        const bool branch_taken_0x3312b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3312b4) {
            ctx->pc = 0x331380u;
            goto label_331380;
        }
    }
    ctx->pc = 0x3312BCu;
label_3312bc:
    // 0x3312bc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x3312bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_3312c0:
    // 0x3312c0: 0x24632070  addiu       $v1, $v1, 0x2070
    ctx->pc = 0x3312c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8304));
label_3312c4:
    // 0x3312c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3312c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3312c8:
    // 0x3312c8: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3312c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3312cc:
    // 0x3312cc: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x3312ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3312d0:
    // 0x3312d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3312d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3312d4:
    // 0x3312d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3312d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3312d8:
    // 0x3312d8: 0x400008  jr          $v0
label_3312dc:
    if (ctx->pc == 0x3312DCu) {
        ctx->pc = 0x3312E0u;
        goto label_3312e0;
    }
    ctx->pc = 0x3312D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3312E0u: goto label_3312e0;
            case 0x331330u: goto label_331330;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3312D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3312E0u;
label_3312e0:
    // 0x3312e0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3312e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3312e4:
    // 0x3312e4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x3312e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3312e8:
    // 0x3312e8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x3312e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3312ec:
    // 0x3312ec: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3312ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3312f0:
    // 0x3312f0: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x3312f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3312f4:
    // 0x3312f4: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x3312f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3312f8:
    // 0x3312f8: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x3312f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_3312fc:
    // 0x3312fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3312fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_331300:
    // 0x331300: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x331300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_331304:
    // 0x331304: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x331304u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_331308:
    // 0x331308: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x331308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_33130c:
    // 0x33130c: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x33130cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_331310:
    // 0x331310: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x331310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_331314:
    // 0x331314: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x331314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_331318:
    // 0x331318: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x331318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_33131c:
    // 0x33131c: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x33131cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_331320:
    // 0x331320: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x331320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_331324:
    // 0x331324: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x331324u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_331328:
    // 0x331328: 0x10000015  b           . + 4 + (0x15 << 2)
label_33132c:
    if (ctx->pc == 0x33132Cu) {
        ctx->pc = 0x331330u;
        goto label_331330;
    }
    ctx->pc = 0x331328u;
    {
        const bool branch_taken_0x331328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331328) {
            ctx->pc = 0x331380u;
            goto label_331380;
        }
    }
    ctx->pc = 0x331330u;
label_331330:
    // 0x331330: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x331330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_331334:
    // 0x331334: 0x24490001  addiu       $t1, $v0, 0x1
    ctx->pc = 0x331334u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_331338:
    // 0x331338: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x331338u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_33133c:
    // 0x33133c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x33133cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_331340:
    // 0x331340: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x331340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_331344:
    // 0x331344: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x331344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_331348:
    // 0x331348: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x331348u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_33134c:
    // 0x33134c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x33134cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_331350:
    // 0x331350: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x331350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_331354:
    // 0x331354: 0xe33025  or          $a2, $a3, $v1
    ctx->pc = 0x331354u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_331358:
    // 0x331358: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x331358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_33135c:
    // 0x33135c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x33135cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_331360:
    // 0x331360: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x331360u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_331364:
    // 0x331364: 0x74100  sll         $t0, $a3, 4
    ctx->pc = 0x331364u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_331368:
    // 0x331368: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x331368u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_33136c:
    // 0x33136c: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x33136cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_331370:
    // 0x331370: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x331370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_331374:
    // 0x331374: 0x1023825  or          $a3, $t0, $v0
    ctx->pc = 0x331374u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_331378:
    // 0x331378: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x331378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_33137c:
    // 0x33137c: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x33137cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
label_331380:
    // 0x331380: 0x13c00010  beqz        $fp, . + 4 + (0x10 << 2)
label_331384:
    if (ctx->pc == 0x331384u) {
        ctx->pc = 0x331388u;
        goto label_331388;
    }
    ctx->pc = 0x331380u;
    {
        const bool branch_taken_0x331380 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x331380) {
            ctx->pc = 0x3313C4u;
            goto label_3313c4;
        }
    }
    ctx->pc = 0x331388u;
label_331388:
    // 0x331388: 0x8fa2028c  lw          $v0, 0x28C($sp)
    ctx->pc = 0x331388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
label_33138c:
    // 0x33138c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x33138cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_331390:
    // 0x331390: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x331390u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_331394:
    // 0x331394: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_331398:
    if (ctx->pc == 0x331398u) {
        ctx->pc = 0x33139Cu;
        goto label_33139c;
    }
    ctx->pc = 0x331394u;
    {
        const bool branch_taken_0x331394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x331394) {
            ctx->pc = 0x3313C4u;
            goto label_3313c4;
        }
    }
    ctx->pc = 0x33139Cu;
label_33139c:
    // 0x33139c: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x33139cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_3313a0:
    // 0x3313a0: 0xafa20220  sw          $v0, 0x220($sp)
    ctx->pc = 0x3313a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
label_3313a4:
    // 0x3313a4: 0x24040065  addiu       $a0, $zero, 0x65
    ctx->pc = 0x3313a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_3313a8:
    // 0x3313a8: 0xafa40224  sw          $a0, 0x224($sp)
    ctx->pc = 0x3313a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 4));
label_3313ac:
    // 0x3313ac: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x3313acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3313b0:
    // 0x3313b0: 0xafa20228  sw          $v0, 0x228($sp)
    ctx->pc = 0x3313b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 2));
label_3313b4:
    // 0x3313b4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x3313b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3313b8:
    // 0x3313b8: 0xafa3022c  sw          $v1, 0x22C($sp)
    ctx->pc = 0x3313b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 3));
label_3313bc:
    // 0x3313bc: 0x1000003c  b           . + 4 + (0x3C << 2)
label_3313c0:
    if (ctx->pc == 0x3313C0u) {
        ctx->pc = 0x3313C4u;
        goto label_3313c4;
    }
    ctx->pc = 0x3313BCu;
    {
        const bool branch_taken_0x3313bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3313bc) {
            ctx->pc = 0x3314B0u;
            goto label_3314b0;
        }
    }
    ctx->pc = 0x3313C4u;
label_3313c4:
    // 0x3313c4: 0x92c20007  lbu         $v0, 0x7($s6)
    ctx->pc = 0x3313c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 7)));
label_3313c8:
    // 0x3313c8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3313c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3313cc:
    // 0x3313cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3313ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3313d0:
    // 0x3313d0: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
label_3313d4:
    if (ctx->pc == 0x3313D4u) {
        ctx->pc = 0x3313D8u;
        goto label_3313d8;
    }
    ctx->pc = 0x3313D0u;
    {
        const bool branch_taken_0x3313d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3313d0) {
            ctx->pc = 0x331470u;
            goto label_331470;
        }
    }
    ctx->pc = 0x3313D8u;
label_3313d8:
    // 0x3313d8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3313d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3313dc:
    // 0x3313dc: 0x1064001c  beq         $v1, $a0, . + 4 + (0x1C << 2)
label_3313e0:
    if (ctx->pc == 0x3313E0u) {
        ctx->pc = 0x3313E4u;
        goto label_3313e4;
    }
    ctx->pc = 0x3313DCu;
    {
        const bool branch_taken_0x3313dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3313dc) {
            ctx->pc = 0x331450u;
            goto label_331450;
        }
    }
    ctx->pc = 0x3313E4u;
label_3313e4:
    // 0x3313e4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_3313e8:
    if (ctx->pc == 0x3313E8u) {
        ctx->pc = 0x3313ECu;
        goto label_3313ec;
    }
    ctx->pc = 0x3313E4u;
    {
        const bool branch_taken_0x3313e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3313e4) {
            ctx->pc = 0x331428u;
            goto label_331428;
        }
    }
    ctx->pc = 0x3313ECu;
label_3313ec:
    // 0x3313ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3313ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3313f0:
    // 0x3313f0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_3313f4:
    if (ctx->pc == 0x3313F4u) {
        ctx->pc = 0x3313F8u;
        goto label_3313f8;
    }
    ctx->pc = 0x3313F0u;
    {
        const bool branch_taken_0x3313f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3313f0) {
            ctx->pc = 0x331400u;
            goto label_331400;
        }
    }
    ctx->pc = 0x3313F8u;
label_3313f8:
    // 0x3313f8: 0x10000025  b           . + 4 + (0x25 << 2)
label_3313fc:
    if (ctx->pc == 0x3313FCu) {
        ctx->pc = 0x331400u;
        goto label_331400;
    }
    ctx->pc = 0x3313F8u;
    {
        const bool branch_taken_0x3313f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3313f8) {
            ctx->pc = 0x331490u;
            goto label_331490;
        }
    }
    ctx->pc = 0x331400u;
label_331400:
    // 0x331400: 0x24050065  addiu       $a1, $zero, 0x65
    ctx->pc = 0x331400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_331404:
    // 0x331404: 0xafa50220  sw          $a1, 0x220($sp)
    ctx->pc = 0x331404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 5));
label_331408:
    // 0x331408: 0x24060065  addiu       $a2, $zero, 0x65
    ctx->pc = 0x331408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_33140c:
    // 0x33140c: 0xafa60224  sw          $a2, 0x224($sp)
    ctx->pc = 0x33140cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 6));
label_331410:
    // 0x331410: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x331410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_331414:
    // 0x331414: 0xafa20228  sw          $v0, 0x228($sp)
    ctx->pc = 0x331414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 2));
label_331418:
    // 0x331418: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x331418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_33141c:
    // 0x33141c: 0xafa4022c  sw          $a0, 0x22C($sp)
    ctx->pc = 0x33141cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 4));
label_331420:
    // 0x331420: 0x10000023  b           . + 4 + (0x23 << 2)
label_331424:
    if (ctx->pc == 0x331424u) {
        ctx->pc = 0x331428u;
        goto label_331428;
    }
    ctx->pc = 0x331420u;
    {
        const bool branch_taken_0x331420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331420) {
            ctx->pc = 0x3314B0u;
            goto label_3314b0;
        }
    }
    ctx->pc = 0x331428u;
label_331428:
    // 0x331428: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x331428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_33142c:
    // 0x33142c: 0xafa20220  sw          $v0, 0x220($sp)
    ctx->pc = 0x33142cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
label_331430:
    // 0x331430: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x331430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_331434:
    // 0x331434: 0xafa50224  sw          $a1, 0x224($sp)
    ctx->pc = 0x331434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 5));
label_331438:
    // 0x331438: 0x240300a2  addiu       $v1, $zero, 0xA2
    ctx->pc = 0x331438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
label_33143c:
    // 0x33143c: 0xafa30228  sw          $v1, 0x228($sp)
    ctx->pc = 0x33143cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 3));
label_331440:
    // 0x331440: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x331440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_331444:
    // 0x331444: 0xafa4022c  sw          $a0, 0x22C($sp)
    ctx->pc = 0x331444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 4));
label_331448:
    // 0x331448: 0x10000019  b           . + 4 + (0x19 << 2)
label_33144c:
    if (ctx->pc == 0x33144Cu) {
        ctx->pc = 0x331450u;
        goto label_331450;
    }
    ctx->pc = 0x331448u;
    {
        const bool branch_taken_0x331448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331448) {
            ctx->pc = 0x3314B0u;
            goto label_3314b0;
        }
    }
    ctx->pc = 0x331450u;
label_331450:
    // 0x331450: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x331450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_331454:
    // 0x331454: 0xafa20220  sw          $v0, 0x220($sp)
    ctx->pc = 0x331454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
label_331458:
    // 0x331458: 0xafa00224  sw          $zero, 0x224($sp)
    ctx->pc = 0x331458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 0));
label_33145c:
    // 0x33145c: 0xafa00228  sw          $zero, 0x228($sp)
    ctx->pc = 0x33145cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 0));
label_331460:
    // 0x331460: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x331460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_331464:
    // 0x331464: 0xafa3022c  sw          $v1, 0x22C($sp)
    ctx->pc = 0x331464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 3));
label_331468:
    // 0x331468: 0x10000011  b           . + 4 + (0x11 << 2)
label_33146c:
    if (ctx->pc == 0x33146Cu) {
        ctx->pc = 0x331470u;
        goto label_331470;
    }
    ctx->pc = 0x331468u;
    {
        const bool branch_taken_0x331468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331468) {
            ctx->pc = 0x3314B0u;
            goto label_3314b0;
        }
    }
    ctx->pc = 0x331470u;
label_331470:
    // 0x331470: 0xafa00220  sw          $zero, 0x220($sp)
    ctx->pc = 0x331470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 0));
label_331474:
    // 0x331474: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x331474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_331478:
    // 0x331478: 0xafa40224  sw          $a0, 0x224($sp)
    ctx->pc = 0x331478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 4));
label_33147c:
    // 0x33147c: 0xafa00228  sw          $zero, 0x228($sp)
    ctx->pc = 0x33147cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 0));
label_331480:
    // 0x331480: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x331480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_331484:
    // 0x331484: 0xafa5022c  sw          $a1, 0x22C($sp)
    ctx->pc = 0x331484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 5));
label_331488:
    // 0x331488: 0x10000009  b           . + 4 + (0x9 << 2)
label_33148c:
    if (ctx->pc == 0x33148Cu) {
        ctx->pc = 0x331490u;
        goto label_331490;
    }
    ctx->pc = 0x331488u;
    {
        const bool branch_taken_0x331488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331488) {
            ctx->pc = 0x3314B0u;
            goto label_3314b0;
        }
    }
    ctx->pc = 0x331490u;
label_331490:
    // 0x331490: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x331490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_331494:
    // 0x331494: 0xafa20220  sw          $v0, 0x220($sp)
    ctx->pc = 0x331494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
label_331498:
    // 0x331498: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x331498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_33149c:
    // 0x33149c: 0xafa40224  sw          $a0, 0x224($sp)
    ctx->pc = 0x33149cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 4));
label_3314a0:
    // 0x3314a0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x3314a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3314a4:
    // 0x3314a4: 0xafa50228  sw          $a1, 0x228($sp)
    ctx->pc = 0x3314a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 5));
label_3314a8:
    // 0x3314a8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x3314a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3314ac:
    // 0x3314ac: 0xafa6022c  sw          $a2, 0x22C($sp)
    ctx->pc = 0x3314acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 6));
label_3314b0:
    // 0x3314b0: 0x8fa20228  lw          $v0, 0x228($sp)
    ctx->pc = 0x3314b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
label_3314b4:
    // 0x3314b4: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x3314b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_3314b8:
    // 0x3314b8: 0x8fa30224  lw          $v1, 0x224($sp)
    ctx->pc = 0x3314b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
label_3314bc:
    // 0x3314bc: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x3314bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_3314c0:
    // 0x3314c0: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x3314c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_3314c4:
    // 0x3314c4: 0x453825  or          $a3, $v0, $a1
    ctx->pc = 0x3314c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_3314c8:
    // 0x3314c8: 0x871825  or          $v1, $a0, $a3
    ctx->pc = 0x3314c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
label_3314cc:
    // 0x3314cc: 0x8fa6022c  lw          $a2, 0x22C($sp)
    ctx->pc = 0x3314ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
label_3314d0:
    // 0x3314d0: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x3314d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
label_3314d4:
    // 0x3314d4: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x3314d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3314d8:
    // 0x3314d8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x3314d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3314dc:
    // 0x3314dc: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x3314dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
label_3314e0:
    // 0x3314e0: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x3314e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_3314e4:
    // 0x3314e4: 0x7d3021  addu        $a2, $v1, $sp
    ctx->pc = 0x3314e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_3314e8:
    // 0x3314e8: 0x8cc30230  lw          $v1, 0x230($a2)
    ctx->pc = 0x3314e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 560)));
label_3314ec:
    // 0x3314ec: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x3314ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3314f0:
    // 0x3314f0: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x3314f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
label_3314f4:
    // 0x3314f4: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x3314f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3314f8:
    // 0x3314f8: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x3314f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_3314fc:
    // 0x3314fc: 0x5db821  addu        $s7, $v0, $sp
    ctx->pc = 0x3314fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_331500:
    // 0x331500: 0x8ee20234  lw          $v0, 0x234($s7)
    ctx->pc = 0x331500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 564)));
label_331504:
    // 0x331504: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x331504u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_331508:
    // 0x331508: 0x24677900  addiu       $a3, $v1, 0x7900
    ctx->pc = 0x331508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_33150c:
    // 0x33150c: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x33150cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_331510:
    // 0x331510: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x331510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_331514:
    // 0x331514: 0x26060018  addiu       $a2, $s0, 0x18
    ctx->pc = 0x331514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_331518:
    // 0x331518: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x331518u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_33151c:
    // 0x33151c: 0x3403fffa  ori         $v1, $zero, 0xFFFA
    ctx->pc = 0x33151cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
label_331520:
    // 0x331520: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x331520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
label_331524:
    // 0x331524: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x331524u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_331528:
    // 0x331528: 0x123100  sll         $a2, $s2, 4
    ctx->pc = 0x331528u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_33152c:
    // 0x33152c: 0xdd3821  addu        $a3, $a2, $sp
    ctx->pc = 0x33152cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
label_331530:
    // 0x331530: 0x8ce20238  lw          $v0, 0x238($a3)
    ctx->pc = 0x331530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 568)));
label_331534:
    // 0x331534: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x331534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_331538:
    // 0x331538: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x331538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
label_33153c:
    // 0x33153c: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x33153cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_331540:
    // 0x331540: 0x123900  sll         $a3, $s2, 4
    ctx->pc = 0x331540u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_331544:
    // 0x331544: 0xfd1021  addu        $v0, $a3, $sp
    ctx->pc = 0x331544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
label_331548:
    // 0x331548: 0x8c42023c  lw          $v0, 0x23C($v0)
    ctx->pc = 0x331548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
label_33154c:
    // 0x33154c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x33154cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_331550:
    // 0x331550: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x331550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_331554:
    // 0x331554: 0x23c00  sll         $a3, $v0, 16
    ctx->pc = 0x331554u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_331558:
    // 0x331558: 0xc71025  or          $v0, $a2, $a3
    ctx->pc = 0x331558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_33155c:
    // 0x33155c: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x33155cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_331560:
    // 0x331560: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x331560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_331564:
    // 0x331564: 0x3408fffa  ori         $t0, $zero, 0xFFFA
    ctx->pc = 0x331564u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
label_331568:
    // 0x331568: 0x26060028  addiu       $a2, $s0, 0x28
    ctx->pc = 0x331568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_33156c:
    // 0x33156c: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x33156cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
label_331570:
    // 0x331570: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x331570u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_331574:
    // 0x331574: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x331574u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
label_331578:
    // 0x331578: 0x24e2e7a8  addiu       $v0, $a3, -0x1858
    ctx->pc = 0x331578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961064));
label_33157c:
    // 0x33157c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x33157cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_331580:
    // 0x331580: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x331580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_331584:
    // 0x331584: 0xc0462a6  jal         func_118A98
label_331588:
    if (ctx->pc == 0x331588u) {
        ctx->pc = 0x33158Cu;
        goto label_33158c;
    }
    ctx->pc = 0x331584u;
    SET_GPR_U32(ctx, 31, 0x33158Cu);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x33158Cu;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33158Cu) { return; }
    ctx->pc = 0x33158Cu;
label_33158c:
    // 0x33158c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x33158cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_331590:
    // 0x331590: 0xae150008  sw          $s5, 0x8($s0)
    ctx->pc = 0x331590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 21));
label_331594:
    // 0x331594: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x331594u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_331598:
    // 0x331598: 0x96270002  lhu         $a3, 0x2($s1)
    ctx->pc = 0x331598u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_33159c:
    // 0x33159c: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x33159cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_3315a0:
    // 0x3315a0: 0xdcc30018  ld          $v1, 0x18($a2)
    ctx->pc = 0x3315a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 24)));
label_3315a4:
    // 0x3315a4: 0x31b78  dsll        $v1, $v1, 13
    ctx->pc = 0x3315a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 13);
label_3315a8:
    // 0x3315a8: 0x33cbe  dsrl32      $a3, $v1, 18
    ctx->pc = 0x3315a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) >> (32 + 18));
label_3315ac:
    // 0x3315ac: 0xe2382d  daddu       $a3, $a3, $v0
    ctx->pc = 0x3315acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 2));
label_3315b0:
    // 0x3315b0: 0xdcc20018  ld          $v0, 0x18($a2)
    ctx->pc = 0x3315b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 24)));
label_3315b4:
    // 0x3315b4: 0x30e73fff  andi        $a3, $a3, 0x3FFF
    ctx->pc = 0x3315b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
label_3315b8:
    // 0x3315b8: 0x7417c  dsll32      $t0, $a3, 5
    ctx->pc = 0x3315b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 5));
label_3315bc:
    // 0x3315bc: 0x3c07fff8  lui         $a3, 0xFFF8
    ctx->pc = 0x3315bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65528 << 16));
label_3315c0:
    // 0x3315c0: 0x34e3001f  ori         $v1, $a3, 0x1F
    ctx->pc = 0x3315c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)31);
label_3315c4:
    // 0x3315c4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3315c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_3315c8:
    // 0x3315c8: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x3315c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3315cc:
    // 0x3315cc: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x3315ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_3315d0:
    // 0x3315d0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x3315d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_3315d4:
    // 0x3315d4: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x3315d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_3315d8:
    // 0x3315d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3315d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3315dc:
    // 0x3315dc: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x3315dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_3315e0:
    // 0x3315e0: 0xfcc20018  sd          $v0, 0x18($a2)
    ctx->pc = 0x3315e0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
label_3315e4:
    // 0x3315e4: 0x26630018  addiu       $v1, $s3, 0x18
    ctx->pc = 0x3315e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_3315e8:
    // 0x3315e8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x3315e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_3315ec:
    // 0x3315ec: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x3315ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_3315f0:
    // 0x3315f0: 0xc05dbd8  jal         func_176F60
label_3315f4:
    if (ctx->pc == 0x3315F4u) {
        ctx->pc = 0x3315F8u;
        goto label_3315f8;
    }
    ctx->pc = 0x3315F0u;
    SET_GPR_U32(ctx, 31, 0x3315F8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3315F0u, 0x3315F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3315F8u;
label_3315f8:
    // 0x3315f8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x3315f8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3315fc:
    // 0x3315fc: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x3315fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_331600:
    // 0x331600: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x331600u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_331604:
    // 0x331604: 0x26a30028  addiu       $v1, $s5, 0x28
    ctx->pc = 0x331604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
label_331608:
    // 0x331608: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x331608u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_33160c:
    // 0x33160c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x33160cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_331610:
    // 0x331610: 0x2a470002  slti        $a3, $s2, 0x2
    ctx->pc = 0x331610u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_331614:
    // 0x331614: 0x14e0ff1b  bnez        $a3, . + 4 + (-0xE5 << 2)
label_331618:
    if (ctx->pc == 0x331618u) {
        ctx->pc = 0x33161Cu;
        goto label_33161c;
    }
    ctx->pc = 0x331614u;
    {
        const bool branch_taken_0x331614 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x331614) {
            ctx->pc = 0x331284u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_331284;
        }
    }
    ctx->pc = 0x33161Cu;
label_33161c:
    // 0x33161c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x33161cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
label_331620:
    // 0x331620: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x331620u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
label_331624:
    // 0x331624: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x331624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_331628:
    // 0x331628: 0x34631009  ori         $v1, $v1, 0x1009
    ctx->pc = 0x331628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4105);
label_33162c:
    // 0x33162c: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x33162cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_331630:
    // 0x331630: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x331630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_331634:
    // 0x331634: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x331634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_331638:
    // 0x331638: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x331638u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_33163c:
    // 0x33163c: 0x21938  dsll        $v1, $v0, 4
    ctx->pc = 0x33163cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 4);
label_331640:
    // 0x331640: 0x3467000a  ori         $a3, $v1, 0xA
    ctx->pc = 0x331640u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
label_331644:
    // 0x331644: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x331644u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_331648:
    // 0x331648: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x331648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
label_33164c:
    // 0x33164c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x33164cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_331650:
    // 0x331650: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x331650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
label_331654:
    // 0x331654: 0xe31025  or          $v0, $a3, $v1
    ctx->pc = 0x331654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_331658:
    // 0x331658: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x331658u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_33165c:
    // 0x33165c: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x33165cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
label_331660:
    // 0x331660: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x331660u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_331664:
    // 0x331664: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x331664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
label_331668:
    // 0x331668: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x331668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
label_33166c:
    // 0x33166c: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x33166cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_331670:
    // 0x331670: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x331670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_331674:
    // 0x331674: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x331674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_331678:
    // 0x331678: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x331678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
label_33167c:
    // 0x33167c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x33167cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_331680:
    // 0x331680: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x331680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_331684:
    // 0x331684: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x331684u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_331688:
    // 0x331688: 0xfe860008  sd          $a2, 0x8($s4)
    ctx->pc = 0x331688u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 6));
label_33168c:
    // 0x33168c: 0x26620018  addiu       $v0, $s3, 0x18
    ctx->pc = 0x33168cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_331690:
    // 0x331690: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x331690u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_331694:
    // 0x331694: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x331694u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_331698:
    // 0x331698: 0xc05dbd8  jal         func_176F60
label_33169c:
    if (ctx->pc == 0x33169Cu) {
        ctx->pc = 0x3316A0u;
        goto label_3316a0;
    }
    ctx->pc = 0x331698u;
    SET_GPR_U32(ctx, 31, 0x3316A0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x331698u, 0x3316A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3316A0u;
label_3316a0:
    // 0x3316a0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3316a0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3316a4:
    // 0x3316a4: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x3316a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_3316a8:
    // 0x3316a8: 0x70c0a628  paddub      $s4, $a2, $zero
    ctx->pc = 0x3316a8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_3316ac:
    // 0x3316ac: 0x10000166  b           . + 4 + (0x166 << 2)
label_3316b0:
    if (ctx->pc == 0x3316B0u) {
        ctx->pc = 0x3316B4u;
        goto label_3316b4;
    }
    ctx->pc = 0x3316ACu;
    {
        const bool branch_taken_0x3316ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3316ac) {
            ctx->pc = 0x331C48u;
            goto label_331c48;
        }
    }
    ctx->pc = 0x3316B4u;
label_3316b4:
    // 0x3316b4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3316b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_3316b8:
    // 0x3316b8: 0x244395b4  addiu       $v1, $v0, -0x6A4C
    ctx->pc = 0x3316b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940084));
label_3316bc:
    // 0x3316bc: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x3316bcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_3316c0:
    // 0x3316c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3316c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3316c4:
    // 0x3316c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3316c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3316c8:
    // 0x3316c8: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x3316c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
label_3316cc:
    // 0x3316cc: 0x34432b16  ori         $v1, $v0, 0x2B16
    ctx->pc = 0x3316ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
label_3316d0:
    // 0x3316d0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3316d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_3316d4:
    // 0x3316d4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3316d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_3316d8:
    // 0x3316d8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3316d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3316dc:
    // 0x3316dc: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x3316dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_3316e0:
    // 0x3316e0: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x3316e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3316e4:
    // 0x3316e4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3316e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_3316e8:
    // 0x3316e8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3316e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3316ec:
    // 0x3316ec: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3316ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3316f0:
    // 0x3316f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3316f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3316f4:
    // 0x3316f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3316f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3316f8:
    // 0x3316f8: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3316f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3316fc:
    // 0x3316fc: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x3316fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_331700:
    // 0x331700: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x331700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_331704:
    // 0x331704: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x331704u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_331708:
    // 0x331708: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x331708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_33170c:
    // 0x33170c: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x33170cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_331710:
    // 0x331710: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x331710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_331714:
    // 0x331714: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x331714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_331718:
    // 0x331718: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x331718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_33171c:
    // 0x33171c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x33171cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_331720:
    // 0x331720: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x331720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_331724:
    // 0x331724: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x331724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_331728:
    // 0x331728: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x331728u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_33172c:
    // 0x33172c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x33172cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_331730:
    // 0x331730: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x331730u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_331734:
    // 0x331734: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x331734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_331738:
    // 0x331738: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x331738u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_33173c:
    // 0x33173c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x33173cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_331740:
    // 0x331740: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x331740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_331744:
    // 0x331744: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x331744u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_331748:
    // 0x331748: 0xafa3026c  sw          $v1, 0x26C($sp)
    ctx->pc = 0x331748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 3));
label_33174c:
    // 0x33174c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x33174cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_331750:
    // 0x331750: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x331750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_331754:
    // 0x331754: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x331754u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_331758:
    // 0x331758: 0xafa30270  sw          $v1, 0x270($sp)
    ctx->pc = 0x331758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 3));
label_33175c:
    // 0x33175c: 0x8fa6026c  lw          $a2, 0x26C($sp)
    ctx->pc = 0x33175cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_331760:
    // 0x331760: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x331760u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331764:
    // 0x331764: 0x0  nop
    ctx->pc = 0x331764u;
    // NOP
label_331768:
    // 0x331768: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x331768u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_33176c:
    // 0x33176c: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x33176cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
label_331770:
    // 0x331770: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x331770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331774:
    // 0x331774: 0x0  nop
    ctx->pc = 0x331774u;
    // NOP
label_331778:
    // 0x331778: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x331778u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_33177c:
    // 0x33177c: 0xc047f7e  jal         func_11FDF8
label_331780:
    if (ctx->pc == 0x331780u) {
        ctx->pc = 0x331784u;
        goto label_331784;
    }
    ctx->pc = 0x33177Cu;
    SET_GPR_U32(ctx, 31, 0x331784u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x33177Cu, 0x331784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331784u;
label_331784:
    // 0x331784: 0xafa2026c  sw          $v0, 0x26C($sp)
    ctx->pc = 0x331784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
label_331788:
    // 0x331788: 0x8fa30270  lw          $v1, 0x270($sp)
    ctx->pc = 0x331788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_33178c:
    // 0x33178c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33178cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331790:
    // 0x331790: 0x0  nop
    ctx->pc = 0x331790u;
    // NOP
label_331794:
    // 0x331794: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x331794u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_331798:
    // 0x331798: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x331798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
label_33179c:
    // 0x33179c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x33179cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_3317a0:
    // 0x3317a0: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x3317a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3317a4:
    // 0x3317a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3317a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3317a8:
    // 0x3317a8: 0x0  nop
    ctx->pc = 0x3317a8u;
    // NOP
label_3317ac:
    // 0x3317ac: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x3317acu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3317b0:
    // 0x3317b0: 0xc047f7e  jal         func_11FDF8
label_3317b4:
    if (ctx->pc == 0x3317B4u) {
        ctx->pc = 0x3317B8u;
        goto label_3317b8;
    }
    ctx->pc = 0x3317B0u;
    SET_GPR_U32(ctx, 31, 0x3317B8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x3317B0u, 0x3317B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3317B8u;
label_3317b8:
    // 0x3317b8: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x3317b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
label_3317bc:
    // 0x3317bc: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x3317bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_3317c0:
    // 0x3317c0: 0xafa30220  sw          $v1, 0x220($sp)
    ctx->pc = 0x3317c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 3));
label_3317c4:
    // 0x3317c4: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x3317c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_3317c8:
    // 0x3317c8: 0xafa20224  sw          $v0, 0x224($sp)
    ctx->pc = 0x3317c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 2));
label_3317cc:
    // 0x3317cc: 0x240600a2  addiu       $a2, $zero, 0xA2
    ctx->pc = 0x3317ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
label_3317d0:
    // 0x3317d0: 0xafa60228  sw          $a2, 0x228($sp)
    ctx->pc = 0x3317d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 6));
label_3317d4:
    // 0x3317d4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x3317d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3317d8:
    // 0x3317d8: 0xafa3022c  sw          $v1, 0x22C($sp)
    ctx->pc = 0x3317d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 3));
label_3317dc:
    // 0x3317dc: 0x8fa20228  lw          $v0, 0x228($sp)
    ctx->pc = 0x3317dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
label_3317e0:
    // 0x3317e0: 0x23c00  sll         $a3, $v0, 16
    ctx->pc = 0x3317e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_3317e4:
    // 0x3317e4: 0x8fa60224  lw          $a2, 0x224($sp)
    ctx->pc = 0x3317e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
label_3317e8:
    // 0x3317e8: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x3317e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_3317ec:
    // 0x3317ec: 0x8fa30220  lw          $v1, 0x220($sp)
    ctx->pc = 0x3317ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_3317f0:
    // 0x3317f0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3317f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3317f4:
    // 0x3317f4: 0xe21825  or          $v1, $a3, $v0
    ctx->pc = 0x3317f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_3317f8:
    // 0x3317f8: 0x8fa6022c  lw          $a2, 0x22C($sp)
    ctx->pc = 0x3317f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
label_3317fc:
    // 0x3317fc: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x3317fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
label_331800:
    // 0x331800: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x331800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_331804:
    // 0x331804: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x331804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_331808:
    // 0x331808: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x331808u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_33180c:
    // 0x33180c: 0xc7a00284  lwc1        $f0, 0x284($sp)
    ctx->pc = 0x33180cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_331810:
    // 0x331810: 0xe7a00274  swc1        $f0, 0x274($sp)
    ctx->pc = 0x331810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
label_331814:
    // 0x331814: 0xc7a00288  lwc1        $f0, 0x288($sp)
    ctx->pc = 0x331814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_331818:
    // 0x331818: 0xe7a00278  swc1        $f0, 0x278($sp)
    ctx->pc = 0x331818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
label_33181c:
    // 0x33181c: 0x8faa026c  lw          $t2, 0x26C($sp)
    ctx->pc = 0x33181cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_331820:
    // 0x331820: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x331820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_331824:
    // 0x331824: 0xa1043  sra         $v0, $t2, 1
    ctx->pc = 0x331824u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 10), 1));
label_331828:
    // 0x331828: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x331828u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_33182c:
    // 0x33182c: 0x70601628  paddub      $v0, $v1, $zero
    ctx->pc = 0x33182cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_331830:
    // 0x331830: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x331830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331834:
    // 0x331834: 0x0  nop
    ctx->pc = 0x331834u;
    // NOP
label_331838:
    // 0x331838: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x331838u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_33183c:
    // 0x33183c: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x33183cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
label_331840:
    // 0x331840: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x331840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_331844:
    // 0x331844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x331844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331848:
    // 0x331848: 0x0  nop
    ctx->pc = 0x331848u;
    // NOP
label_33184c:
    // 0x33184c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x33184cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_331850:
    // 0x331850: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x331850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_331854:
    // 0x331854: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x331854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331858:
    // 0x331858: 0x0  nop
    ctx->pc = 0x331858u;
    // NOP
label_33185c:
    // 0x33185c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x33185cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_331860:
    // 0x331860: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x331860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_331864:
    // 0x331864: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x331864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_331868:
    // 0x331868: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x331868u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_33186c:
    // 0x33186c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33186cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331870:
    // 0x331870: 0x0  nop
    ctx->pc = 0x331870u;
    // NOP
label_331874:
    // 0x331874: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x331874u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_331878:
    // 0x331878: 0xc7a10274  lwc1        $f1, 0x274($sp)
    ctx->pc = 0x331878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33187c:
    // 0x33187c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x33187cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_331880:
    // 0x331880: 0xe7a00274  swc1        $f0, 0x274($sp)
    ctx->pc = 0x331880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
label_331884:
    // 0x331884: 0x8fab0270  lw          $t3, 0x270($sp)
    ctx->pc = 0x331884u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_331888:
    // 0x331888: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x331888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33188c:
    // 0x33188c: 0xb3843  sra         $a3, $t3, 1
    ctx->pc = 0x33188cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 11), 1));
label_331890:
    // 0x331890: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x331890u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_331894:
    // 0x331894: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x331894u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331898:
    // 0x331898: 0x0  nop
    ctx->pc = 0x331898u;
    // NOP
label_33189c:
    // 0x33189c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x33189cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3318a0:
    // 0x3318a0: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x3318a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_3318a4:
    // 0x3318a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3318a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3318a8:
    // 0x3318a8: 0x0  nop
    ctx->pc = 0x3318a8u;
    // NOP
label_3318ac:
    // 0x3318ac: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3318acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3318b0:
    // 0x3318b0: 0x3c0840c0  lui         $t0, 0x40C0
    ctx->pc = 0x3318b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16576 << 16));
label_3318b4:
    // 0x3318b4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3318b4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3318b8:
    // 0x3318b8: 0x0  nop
    ctx->pc = 0x3318b8u;
    // NOP
label_3318bc:
    // 0x3318bc: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3318bcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_3318c0:
    // 0x3318c0: 0xc7a00278  lwc1        $f0, 0x278($sp)
    ctx->pc = 0x3318c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3318c4:
    // 0x3318c4: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x3318c4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
label_3318c8:
    // 0x3318c8: 0xe7ac0278  swc1        $f12, 0x278($sp)
    ctx->pc = 0x3318c8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
label_3318cc:
    // 0x3318cc: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x3318ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_3318d0:
    // 0x3318d0: 0x3449cccd  ori         $t1, $v0, 0xCCCD
    ctx->pc = 0x3318d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3318d4:
    // 0x3318d4: 0x44896000  mtc1        $t1, $f12
    ctx->pc = 0x3318d4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3318d8:
    // 0x3318d8: 0x8fa3026c  lw          $v1, 0x26C($sp)
    ctx->pc = 0x3318d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_3318dc:
    // 0x3318dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3318dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3318e0:
    // 0x3318e0: 0x0  nop
    ctx->pc = 0x3318e0u;
    // NOP
label_3318e4:
    // 0x3318e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3318e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3318e8:
    // 0x3318e8: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x3318e8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_3318ec:
    // 0x3318ec: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x3318ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_3318f0:
    // 0x3318f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3318f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3318f4:
    // 0x3318f4: 0x0  nop
    ctx->pc = 0x3318f4u;
    // NOP
label_3318f8:
    // 0x3318f8: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x3318f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_3318fc:
    // 0x3318fc: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x3318fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_331900:
    // 0x331900: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x331900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_331904:
    // 0x331904: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x331904u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_331908:
    // 0x331908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x331908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33190c:
    // 0x33190c: 0x0  nop
    ctx->pc = 0x33190cu;
    // NOP
label_331910:
    // 0x331910: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x331910u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_331914:
    // 0x331914: 0xc7a00274  lwc1        $f0, 0x274($sp)
    ctx->pc = 0x331914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_331918:
    // 0x331918: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x331918u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_33191c:
    // 0x33191c: 0xe7a0027c  swc1        $f0, 0x27C($sp)
    ctx->pc = 0x33191cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
label_331920:
    // 0x331920: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x331920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_331924:
    // 0x331924: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x331924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_331928:
    // 0x331928: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x331928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_33192c:
    // 0x33192c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33192cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331930:
    // 0x331930: 0x0  nop
    ctx->pc = 0x331930u;
    // NOP
label_331934:
    // 0x331934: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x331934u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_331938:
    // 0x331938: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x331938u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_33193c:
    // 0x33193c: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x33193cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_331940:
    // 0x331940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x331940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331944:
    // 0x331944: 0x0  nop
    ctx->pc = 0x331944u;
    // NOP
label_331948:
    // 0x331948: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x331948u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_33194c:
    // 0x33194c: 0xc7a00278  lwc1        $f0, 0x278($sp)
    ctx->pc = 0x33194cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_331950:
    // 0x331950: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x331950u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_331954:
    // 0x331954: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x331954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_331958:
    // 0x331958: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x331958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_33195c:
    // 0x33195c: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x33195cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_331960:
    // 0x331960: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x331960u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_331964:
    // 0x331964: 0xc7a00274  lwc1        $f0, 0x274($sp)
    ctx->pc = 0x331964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_331968:
    // 0x331968: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x331968u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_33196c:
    // 0x33196c: 0xe7a00274  swc1        $f0, 0x274($sp)
    ctx->pc = 0x33196cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
label_331970:
    // 0x331970: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x331970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_331974:
    // 0x331974: 0x3466d70a  ori         $a2, $v1, 0xD70A
    ctx->pc = 0x331974u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_331978:
    // 0x331978: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x331978u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_33197c:
    // 0x33197c: 0xc7a00278  lwc1        $f0, 0x278($sp)
    ctx->pc = 0x33197cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_331980:
    // 0x331980: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x331980u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_331984:
    // 0x331984: 0xe7a20278  swc1        $f2, 0x278($sp)
    ctx->pc = 0x331984u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
label_331988:
    // 0x331988: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x331988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_33198c:
    // 0x33198c: 0x3466d70a  ori         $a2, $v1, 0xD70A
    ctx->pc = 0x33198cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_331990:
    // 0x331990: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x331990u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_331994:
    // 0x331994: 0xc7a0027c  lwc1        $f0, 0x27C($sp)
    ctx->pc = 0x331994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_331998:
    // 0x331998: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x331998u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_33199c:
    // 0x33199c: 0xe7a1027c  swc1        $f1, 0x27C($sp)
    ctx->pc = 0x33199cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
label_3319a0:
    // 0x3319a0: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x3319a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_3319a4:
    // 0x3319a4: 0x3462d70a  ori         $v0, $v1, 0xD70A
    ctx->pc = 0x3319a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_3319a8:
    // 0x3319a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3319a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3319ac:
    // 0x3319ac: 0xc7a10280  lwc1        $f1, 0x280($sp)
    ctx->pc = 0x3319acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3319b0:
    // 0x3319b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3319b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3319b4:
    // 0x3319b4: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x3319b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_3319b8:
    // 0x3319b8: 0x3c063f4c  lui         $a2, 0x3F4C
    ctx->pc = 0x3319b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16204 << 16));
label_3319bc:
    // 0x3319bc: 0x34c2cccd  ori         $v0, $a2, 0xCCCD
    ctx->pc = 0x3319bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
label_3319c0:
    // 0x3319c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3319c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3319c4:
    // 0x3319c4: 0xc7a00274  lwc1        $f0, 0x274($sp)
    ctx->pc = 0x3319c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3319c8:
    // 0x3319c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3319c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3319cc:
    // 0x3319cc: 0xe7a00274  swc1        $f0, 0x274($sp)
    ctx->pc = 0x3319ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
label_3319d0:
    // 0x3319d0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x3319d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_3319d4:
    // 0x3319d4: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x3319d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3319d8:
    // 0x3319d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3319d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3319dc:
    // 0x3319dc: 0xc7a0027c  lwc1        $f0, 0x27C($sp)
    ctx->pc = 0x3319dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3319e0:
    // 0x3319e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3319e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3319e4:
    // 0x3319e4: 0xe7a0027c  swc1        $f0, 0x27C($sp)
    ctx->pc = 0x3319e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
label_3319e8:
    // 0x3319e8: 0x8e626610  lw          $v0, 0x6610($s3)
    ctx->pc = 0x3319e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26128)));
label_3319ec:
    // 0x3319ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3319ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3319f0:
    // 0x3319f0: 0x0  nop
    ctx->pc = 0x3319f0u;
    // NOP
label_3319f4:
    // 0x3319f4: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x3319f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3319f8:
    // 0x3319f8: 0xc7a10274  lwc1        $f1, 0x274($sp)
    ctx->pc = 0x3319f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3319fc:
    // 0x3319fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3319fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_331a00:
    // 0x331a00: 0xe7a00274  swc1        $f0, 0x274($sp)
    ctx->pc = 0x331a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
label_331a04:
    // 0x331a04: 0x8e626614  lw          $v0, 0x6614($s3)
    ctx->pc = 0x331a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26132)));
label_331a08:
    // 0x331a08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x331a08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331a0c:
    // 0x331a0c: 0x0  nop
    ctx->pc = 0x331a0cu;
    // NOP
label_331a10:
    // 0x331a10: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x331a10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_331a14:
    // 0x331a14: 0xc7a00278  lwc1        $f0, 0x278($sp)
    ctx->pc = 0x331a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_331a18:
    // 0x331a18: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x331a18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_331a1c:
    // 0x331a1c: 0xe7a10278  swc1        $f1, 0x278($sp)
    ctx->pc = 0x331a1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
label_331a20:
    // 0x331a20: 0x8e666610  lw          $a2, 0x6610($s3)
    ctx->pc = 0x331a20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26128)));
label_331a24:
    // 0x331a24: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x331a24u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331a28:
    // 0x331a28: 0x0  nop
    ctx->pc = 0x331a28u;
    // NOP
label_331a2c:
    // 0x331a2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x331a2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_331a30:
    // 0x331a30: 0xc7a1027c  lwc1        $f1, 0x27C($sp)
    ctx->pc = 0x331a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_331a34:
    // 0x331a34: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x331a34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_331a38:
    // 0x331a38: 0xe7a0027c  swc1        $f0, 0x27C($sp)
    ctx->pc = 0x331a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
label_331a3c:
    // 0x331a3c: 0x8e626614  lw          $v0, 0x6614($s3)
    ctx->pc = 0x331a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26132)));
label_331a40:
    // 0x331a40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x331a40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331a44:
    // 0x331a44: 0x0  nop
    ctx->pc = 0x331a44u;
    // NOP
label_331a48:
    // 0x331a48: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x331a48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_331a4c:
    // 0x331a4c: 0xc7a00280  lwc1        $f0, 0x280($sp)
    ctx->pc = 0x331a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_331a50:
    // 0x331a50: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x331a50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_331a54:
    // 0x331a54: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x331a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_331a58:
    // 0x331a58: 0xc7ac0274  lwc1        $f12, 0x274($sp)
    ctx->pc = 0x331a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_331a5c:
    // 0x331a5c: 0xc047fa2  jal         func_11FE88
label_331a60:
    if (ctx->pc == 0x331A60u) {
        ctx->pc = 0x331A64u;
        goto label_331a64;
    }
    ctx->pc = 0x331A5Cu;
    SET_GPR_U32(ctx, 31, 0x331A64u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x331A5Cu, 0x331A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331A64u;
label_331a64:
    // 0x331a64: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x331a64u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_331a68:
    // 0x331a68: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x331a68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_331a6c:
    // 0x331a6c: 0x24e67000  addiu       $a2, $a3, 0x7000
    ctx->pc = 0x331a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 28672));
label_331a70:
    // 0x331a70: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x331a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_331a74:
    // 0x331a74: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x331a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_331a78:
    // 0x331a78: 0xc7ac0278  lwc1        $f12, 0x278($sp)
    ctx->pc = 0x331a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_331a7c:
    // 0x331a7c: 0xc047fa2  jal         func_11FE88
label_331a80:
    if (ctx->pc == 0x331A80u) {
        ctx->pc = 0x331A84u;
        goto label_331a84;
    }
    ctx->pc = 0x331A7Cu;
    SET_GPR_U32(ctx, 31, 0x331A84u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x331A7Cu, 0x331A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331A84u;
label_331a84:
    // 0x331a84: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x331a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_331a88:
    // 0x331a88: 0x24667900  addiu       $a2, $v1, 0x7900
    ctx->pc = 0x331a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_331a8c:
    // 0x331a8c: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x331a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_331a90:
    // 0x331a90: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x331a90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_331a94:
    // 0x331a94: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x331a94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_331a98:
    // 0x331a98: 0x26080018  addiu       $t0, $s0, 0x18
    ctx->pc = 0x331a98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_331a9c:
    // 0x331a9c: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x331a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
label_331aa0:
    // 0x331aa0: 0x3406fffa  ori         $a2, $zero, 0xFFFA
    ctx->pc = 0x331aa0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
label_331aa4:
    // 0x331aa4: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x331aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
label_331aa8:
    // 0x331aa8: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x331aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_331aac:
    // 0x331aac: 0xc7ac027c  lwc1        $f12, 0x27C($sp)
    ctx->pc = 0x331aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_331ab0:
    // 0x331ab0: 0xc047fa2  jal         func_11FE88
label_331ab4:
    if (ctx->pc == 0x331AB4u) {
        ctx->pc = 0x331AB8u;
        goto label_331ab8;
    }
    ctx->pc = 0x331AB0u;
    SET_GPR_U32(ctx, 31, 0x331AB8u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x331AB0u, 0x331AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331AB8u;
label_331ab8:
    // 0x331ab8: 0x23900  sll         $a3, $v0, 4
    ctx->pc = 0x331ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_331abc:
    // 0x331abc: 0x24e67000  addiu       $a2, $a3, 0x7000
    ctx->pc = 0x331abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 28672));
label_331ac0:
    // 0x331ac0: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x331ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_331ac4:
    // 0x331ac4: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x331ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_331ac8:
    // 0x331ac8: 0xc7a00280  lwc1        $f0, 0x280($sp)
    ctx->pc = 0x331ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_331acc:
    // 0x331acc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x331accu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_331ad0:
    // 0x331ad0: 0xc047fa2  jal         func_11FE88
label_331ad4:
    if (ctx->pc == 0x331AD4u) {
        ctx->pc = 0x331AD8u;
        goto label_331ad8;
    }
    ctx->pc = 0x331AD0u;
    SET_GPR_U32(ctx, 31, 0x331AD8u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x331AD0u, 0x331AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331AD8u;
label_331ad8:
    // 0x331ad8: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x331ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_331adc:
    // 0x331adc: 0x24827900  addiu       $v0, $a0, 0x7900
    ctx->pc = 0x331adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
label_331ae0:
    // 0x331ae0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x331ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_331ae4:
    // 0x331ae4: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x331ae4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_331ae8:
    // 0x331ae8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x331ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_331aec:
    // 0x331aec: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x331aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_331af0:
    // 0x331af0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x331af0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_331af4:
    // 0x331af4: 0x3402fffa  ori         $v0, $zero, 0xFFFA
    ctx->pc = 0x331af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
label_331af8:
    // 0x331af8: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x331af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_331afc:
    // 0x331afc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x331afcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_331b00:
    // 0x331b00: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x331b00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_331b04:
    // 0x331b04: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x331b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_331b08:
    // 0x331b08: 0x2445e7a8  addiu       $a1, $v0, -0x1858
    ctx->pc = 0x331b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961064));
label_331b0c:
    // 0x331b0c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x331b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_331b10:
    // 0x331b10: 0xc0462a6  jal         func_118A98
label_331b14:
    if (ctx->pc == 0x331B14u) {
        ctx->pc = 0x331B18u;
        goto label_331b18;
    }
    ctx->pc = 0x331B10u;
    SET_GPR_U32(ctx, 31, 0x331B18u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x331B18u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x331B18u) { return; }
    ctx->pc = 0x331B18u;
label_331b18:
    // 0x331b18: 0xae150008  sw          $s5, 0x8($s0)
    ctx->pc = 0x331b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 21));
label_331b1c:
    // 0x331b1c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x331b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_331b20:
    // 0x331b20: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x331b20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_331b24:
    // 0x331b24: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x331b24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_331b28:
    // 0x331b28: 0xdc830018  ld          $v1, 0x18($a0)
    ctx->pc = 0x331b28u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 24)));
label_331b2c:
    // 0x331b2c: 0x31378  dsll        $v0, $v1, 13
    ctx->pc = 0x331b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 13);
label_331b30:
    // 0x331b30: 0x214be  dsrl32      $v0, $v0, 18
    ctx->pc = 0x331b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 18));
label_331b34:
    // 0x331b34: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x331b34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
label_331b38:
    // 0x331b38: 0xdc830018  ld          $v1, 0x18($a0)
    ctx->pc = 0x331b38u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 24)));
label_331b3c:
    // 0x331b3c: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x331b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_331b40:
    // 0x331b40: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x331b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
label_331b44:
    // 0x331b44: 0x3c05fff8  lui         $a1, 0xFFF8
    ctx->pc = 0x331b44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65528 << 16));
label_331b48:
    // 0x331b48: 0x34a5001f  ori         $a1, $a1, 0x1F
    ctx->pc = 0x331b48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31);
label_331b4c:
    // 0x331b4c: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x331b4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
label_331b50:
    // 0x331b50: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x331b50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_331b54:
    // 0x331b54: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x331b54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_331b58:
    // 0x331b58: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x331b58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_331b5c:
    // 0x331b5c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x331b5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_331b60:
    // 0x331b60: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x331b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_331b64:
    // 0x331b64: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x331b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_331b68:
    // 0x331b68: 0xfc820018  sd          $v0, 0x18($a0)
    ctx->pc = 0x331b68u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 2));
label_331b6c:
    // 0x331b6c: 0x26640018  addiu       $a0, $s3, 0x18
    ctx->pc = 0x331b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_331b70:
    // 0x331b70: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x331b70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_331b74:
    // 0x331b74: 0xc05dbd8  jal         func_176F60
label_331b78:
    if (ctx->pc == 0x331B78u) {
        ctx->pc = 0x331B7Cu;
        goto label_331b7c;
    }
    ctx->pc = 0x331B74u;
    SET_GPR_U32(ctx, 31, 0x331B7Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x331B74u, 0x331B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331B7Cu;
label_331b7c:
    // 0x331b7c: 0x2603002c  addiu       $v1, $s0, 0x2C
    ctx->pc = 0x331b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_331b80:
    // 0x331b80: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x331b80u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_331b84:
    // 0x331b84: 0x26a40028  addiu       $a0, $s5, 0x28
    ctx->pc = 0x331b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
label_331b88:
    // 0x331b88: 0x7080ae28  paddub      $s5, $a0, $zero
    ctx->pc = 0x331b88u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_331b8c:
    // 0x331b8c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x331b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_331b90:
    // 0x331b90: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x331b90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
label_331b94:
    // 0x331b94: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x331b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
label_331b98:
    // 0x331b98: 0x34821009  ori         $v0, $a0, 0x1009
    ctx->pc = 0x331b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4105);
label_331b9c:
    // 0x331b9c: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x331b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_331ba0:
    // 0x331ba0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x331ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_331ba4:
    // 0x331ba4: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x331ba4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
label_331ba8:
    // 0x331ba8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x331ba8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_331bac:
    // 0x331bac: 0x61138  dsll        $v0, $a2, 4
    ctx->pc = 0x331bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 4);
label_331bb0:
    // 0x331bb0: 0x3444000a  ori         $a0, $v0, 0xA
    ctx->pc = 0x331bb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_331bb4:
    // 0x331bb4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x331bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_331bb8:
    // 0x331bb8: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x331bb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_331bbc:
    // 0x331bbc: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x331bbcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_331bc0:
    // 0x331bc0: 0x513b8  dsll        $v0, $a1, 14
    ctx->pc = 0x331bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 14);
label_331bc4:
    // 0x331bc4: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x331bc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_331bc8:
    // 0x331bc8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x331bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_331bcc:
    // 0x331bcc: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x331bccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
label_331bd0:
    // 0x331bd0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x331bd0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_331bd4:
    // 0x331bd4: 0x61638  dsll        $v0, $a2, 24
    ctx->pc = 0x331bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 24);
label_331bd8:
    // 0x331bd8: 0x473825  or          $a3, $v0, $a3
    ctx->pc = 0x331bd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_331bdc:
    // 0x331bdc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x331bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_331be0:
    // 0x331be0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x331be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_331be4:
    // 0x331be4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x331be4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_331be8:
    // 0x331be8: 0x330bc  dsll32      $a2, $v1, 2
    ctx->pc = 0x331be8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 2));
label_331bec:
    // 0x331bec: 0xc71825  or          $v1, $a2, $a3
    ctx->pc = 0x331becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_331bf0:
    // 0x331bf0: 0xfe830008  sd          $v1, 0x8($s4)
    ctx->pc = 0x331bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 3));
label_331bf4:
    // 0x331bf4: 0x26620018  addiu       $v0, $s3, 0x18
    ctx->pc = 0x331bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_331bf8:
    // 0x331bf8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x331bf8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_331bfc:
    // 0x331bfc: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x331bfcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_331c00:
    // 0x331c00: 0xc05dbd8  jal         func_176F60
label_331c04:
    if (ctx->pc == 0x331C04u) {
        ctx->pc = 0x331C08u;
        goto label_331c08;
    }
    ctx->pc = 0x331C00u;
    SET_GPR_U32(ctx, 31, 0x331C08u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x331C00u, 0x331C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331C08u;
label_331c08:
    // 0x331c08: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x331c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_331c0c:
    // 0x331c0c: 0x70c0a628  paddub      $s4, $a2, $zero
    ctx->pc = 0x331c0cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_331c10:
    // 0x331c10: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x331c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_331c14:
    // 0x331c14: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x331c14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_331c18:
    // 0x331c18: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x331c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_331c1c:
    // 0x331c1c: 0x34571043  ori         $s7, $v0, 0x1043
    ctx->pc = 0x331c1cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
label_331c20:
    // 0x331c20: 0xae970004  sw          $s7, 0x4($s4)
    ctx->pc = 0x331c20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 23));
label_331c24:
    // 0x331c24: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x331c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_331c28:
    // 0x331c28: 0xfe830008  sd          $v1, 0x8($s4)
    ctx->pc = 0x331c28u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 3));
label_331c2c:
    // 0x331c2c: 0x26670018  addiu       $a3, $s3, 0x18
    ctx->pc = 0x331c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_331c30:
    // 0x331c30: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x331c30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_331c34:
    // 0x331c34: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x331c34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_331c38:
    // 0x331c38: 0xc05dbd8  jal         func_176F60
label_331c3c:
    if (ctx->pc == 0x331C3Cu) {
        ctx->pc = 0x331C40u;
        goto label_331c40;
    }
    ctx->pc = 0x331C38u;
    SET_GPR_U32(ctx, 31, 0x331C40u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x331C38u, 0x331C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331C40u;
label_331c40:
    // 0x331c40: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x331c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_331c44:
    // 0x331c44: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x331c44u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_331c48:
    // 0x331c48: 0x26c6000a  addiu       $a2, $s6, 0xA
    ctx->pc = 0x331c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 10));
label_331c4c:
    // 0x331c4c: 0x70c0b628  paddub      $s6, $a2, $zero
    ctx->pc = 0x331c4cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_331c50:
    // 0x331c50: 0x82c30000  lb          $v1, 0x0($s6)
    ctx->pc = 0x331c50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_331c54:
    // 0x331c54: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x331c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
label_331c58:
    // 0x331c58: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x331c58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_331c5c:
    // 0x331c5c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x331c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_331c60:
    // 0x331c60: 0x1446fb2b  bne         $v0, $a2, . + 4 + (-0x4D5 << 2)
label_331c64:
    if (ctx->pc == 0x331C64u) {
        ctx->pc = 0x331C68u;
        goto label_331c68;
    }
    ctx->pc = 0x331C60u;
    {
        const bool branch_taken_0x331c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x331c60) {
            ctx->pc = 0x330910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330910;
        }
    }
    ctx->pc = 0x331C68u;
label_331c68:
    // 0x331c68: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x331c68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_331c6c:
    // 0x331c6c: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x331c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
label_331c70:
    // 0x331c70: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x331c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_331c74:
    // 0x331c74: 0x34621043  ori         $v0, $v1, 0x1043
    ctx->pc = 0x331c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4163);
label_331c78:
    // 0x331c78: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x331c78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_331c7c:
    // 0x331c7c: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x331c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_331c80:
    // 0x331c80: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x331c80u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
label_331c84:
    // 0x331c84: 0x26660018  addiu       $a2, $s3, 0x18
    ctx->pc = 0x331c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_331c88:
    // 0x331c88: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x331c88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_331c8c:
    // 0x331c8c: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x331c8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_331c90:
    // 0x331c90: 0xc05dbd8  jal         func_176F60
label_331c94:
    if (ctx->pc == 0x331C94u) {
        ctx->pc = 0x331C98u;
        goto label_331c98;
    }
    ctx->pc = 0x331C90u;
    SET_GPR_U32(ctx, 31, 0x331C98u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x331C90u, 0x331C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331C98u;
label_331c98:
    // 0x331c98: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x331c98u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_331c9c:
    // 0x331c9c: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x331c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_331ca0:
    // 0x331ca0: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x331ca0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_331ca4:
    // 0x331ca4: 0x826265ae  lb          $v0, 0x65AE($s3)
    ctx->pc = 0x331ca4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 26030)));
label_331ca8:
    // 0x331ca8: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x331ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_331cac:
    // 0x331cac: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x331cacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_331cb0:
    // 0x331cb0: 0x24021770  addiu       $v0, $zero, 0x1770
    ctx->pc = 0x331cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
label_331cb4:
    // 0x331cb4: 0x623818  mult        $a3, $v1, $v0
    ctx->pc = 0x331cb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_331cb8:
    // 0x331cb8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x331cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_331cbc:
    // 0x331cbc: 0x2443a6a0  addiu       $v1, $v0, -0x5960
    ctx->pc = 0x331cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944416));
label_331cc0:
    // 0x331cc0: 0x674021  addu        $t0, $v1, $a3
    ctx->pc = 0x331cc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_331cc4:
    // 0x331cc4: 0x826665b0  lb          $a2, 0x65B0($s3)
    ctx->pc = 0x331cc4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 26032)));
label_331cc8:
    // 0x331cc8: 0x63e3c  dsll32      $a3, $a2, 24
    ctx->pc = 0x331cc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 24));
label_331ccc:
    // 0x331ccc: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x331cccu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
label_331cd0:
    // 0x331cd0: 0x71140  sll         $v0, $a3, 5
    ctx->pc = 0x331cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_331cd4:
    // 0x331cd4: 0x473023  subu        $a2, $v0, $a3
    ctx->pc = 0x331cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_331cd8:
    // 0x331cd8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x331cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_331cdc:
    // 0x331cdc: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x331cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_331ce0:
    // 0x331ce0: 0x638c0  sll         $a3, $a2, 3
    ctx->pc = 0x331ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_331ce4:
    // 0x331ce4: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x331ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_331ce8:
    // 0x331ce8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x331ce8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_331cec:
    // 0x331cec: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x331cecu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_331cf0:
    // 0x331cf0: 0x10000165  b           . + 4 + (0x165 << 2)
label_331cf4:
    if (ctx->pc == 0x331CF4u) {
        ctx->pc = 0x331CF8u;
        goto label_331cf8;
    }
    ctx->pc = 0x331CF0u;
    {
        const bool branch_taken_0x331cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331cf0) {
            ctx->pc = 0x332288u;
            goto label_332288;
        }
    }
    ctx->pc = 0x331CF8u;
label_331cf8:
    // 0x331cf8: 0x826365ae  lb          $v1, 0x65AE($s3)
    ctx->pc = 0x331cf8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 26030)));
label_331cfc:
    // 0x331cfc: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x331cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_331d00:
    // 0x331d00: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x331d00u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_331d04:
    // 0x331d04: 0x33880  sll         $a3, $v1, 2
    ctx->pc = 0x331d04u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_331d08:
    // 0x331d08: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x331d08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_331d0c:
    // 0x331d0c: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x331d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_331d10:
    // 0x331d10: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x331d10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_331d14:
    // 0x331d14: 0x74100  sll         $t0, $a3, 4
    ctx->pc = 0x331d14u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_331d18:
    // 0x331d18: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x331d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_331d1c:
    // 0x331d1c: 0x24674ab0  addiu       $a3, $v1, 0x4AB0
    ctx->pc = 0x331d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 19120));
label_331d20:
    // 0x331d20: 0xe81821  addu        $v1, $a3, $t0
    ctx->pc = 0x331d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_331d24:
    // 0x331d24: 0x1738c0  sll         $a3, $s7, 3
    ctx->pc = 0x331d24u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
label_331d28:
    // 0x331d28: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x331d28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_331d2c:
    // 0x331d2c: 0xafa70268  sw          $a3, 0x268($sp)
    ctx->pc = 0x331d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 7));
label_331d30:
    // 0x331d30: 0x826765ae  lb          $a3, 0x65AE($s3)
    ctx->pc = 0x331d30u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 26030)));
label_331d34:
    // 0x331d34: 0x71e3c  dsll32      $v1, $a3, 24
    ctx->pc = 0x331d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 24));
label_331d38:
    // 0x331d38: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x331d38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_331d3c:
    // 0x331d3c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x331d3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_331d40:
    // 0x331d40: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x331d40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
label_331d44:
    // 0x331d44: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x331d44u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_331d48:
    // 0x331d48: 0xc0cc938  jal         func_3324E0
label_331d4c:
    if (ctx->pc == 0x331D4Cu) {
        ctx->pc = 0x331D50u;
        goto label_331d50;
    }
    ctx->pc = 0x331D48u;
    SET_GPR_U32(ctx, 31, 0x331D50u);
    ctx->pc = 0x3324E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3324E0u, 0x331D48u, 0x331D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331D50u;
label_331d50:
    // 0x331d50: 0x10400149  beqz        $v0, . + 4 + (0x149 << 2)
label_331d54:
    if (ctx->pc == 0x331D54u) {
        ctx->pc = 0x331D58u;
        goto label_331d58;
    }
    ctx->pc = 0x331D50u;
    {
        const bool branch_taken_0x331d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x331d50) {
            ctx->pc = 0x332278u;
            goto label_332278;
        }
    }
    ctx->pc = 0x331D58u;
label_331d58:
    // 0x331d58: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x331d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_331d5c:
    // 0x331d5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x331d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_331d60:
    // 0x331d60: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_331d64:
    if (ctx->pc == 0x331D64u) {
        ctx->pc = 0x331D68u;
        goto label_331d68;
    }
    ctx->pc = 0x331D60u;
    {
        const bool branch_taken_0x331d60 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x331d60) {
            ctx->pc = 0x331D7Cu;
            goto label_331d7c;
        }
    }
    ctx->pc = 0x331D68u;
label_331d68:
    // 0x331d68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x331d68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331d6c:
    // 0x331d6c: 0x0  nop
    ctx->pc = 0x331d6cu;
    // NOP
label_331d70:
    // 0x331d70: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x331d70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_331d74:
    // 0x331d74: 0x10000008  b           . + 4 + (0x8 << 2)
label_331d78:
    if (ctx->pc == 0x331D78u) {
        ctx->pc = 0x331D7Cu;
        goto label_331d7c;
    }
    ctx->pc = 0x331D74u;
    {
        const bool branch_taken_0x331d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331d74) {
            ctx->pc = 0x331D98u;
            goto label_331d98;
        }
    }
    ctx->pc = 0x331D7Cu;
label_331d7c:
    // 0x331d7c: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x331d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_331d80:
    // 0x331d80: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x331d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_331d84:
    // 0x331d84: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x331d84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_331d88:
    // 0x331d88: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x331d88u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331d8c:
    // 0x331d8c: 0x0  nop
    ctx->pc = 0x331d8cu;
    // NOP
label_331d90:
    // 0x331d90: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x331d90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_331d94:
    // 0x331d94: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x331d94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_331d98:
    // 0x331d98: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x331d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_331d9c:
    // 0x331d9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x331d9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_331da0:
    // 0x331da0: 0x0  nop
    ctx->pc = 0x331da0u;
    // NOP
label_331da4:
    // 0x331da4: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x331da4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_331da8:
    // 0x331da8: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x331da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_331dac:
    // 0x331dac: 0x8fb20268  lw          $s2, 0x268($sp)
    ctx->pc = 0x331dacu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_331db0:
    // 0x331db0: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x331db0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_331db4:
    // 0x331db4: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
label_331db8:
    if (ctx->pc == 0x331DB8u) {
        ctx->pc = 0x331DBCu;
        goto label_331dbc;
    }
    ctx->pc = 0x331DB4u;
    {
        const bool branch_taken_0x331db4 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x331db4) {
            ctx->pc = 0x331DD0u;
            goto label_331dd0;
        }
    }
    ctx->pc = 0x331DBCu;
label_331dbc:
    // 0x331dbc: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x331dbcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_331dc0:
    // 0x331dc0: 0x0  nop
    ctx->pc = 0x331dc0u;
    // NOP
label_331dc4:
    // 0x331dc4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x331dc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_331dc8:
    // 0x331dc8: 0x10000008  b           . + 4 + (0x8 << 2)
label_331dcc:
    if (ctx->pc == 0x331DCCu) {
        ctx->pc = 0x331DD0u;
        goto label_331dd0;
    }
    ctx->pc = 0x331DC8u;
    {
        const bool branch_taken_0x331dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331dc8) {
            ctx->pc = 0x331DECu;
            goto label_331dec;
        }
    }
    ctx->pc = 0x331DD0u;
label_331dd0:
    // 0x331dd0: 0x73042  srl         $a2, $a3, 1
    ctx->pc = 0x331dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
label_331dd4:
    // 0x331dd4: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x331dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_331dd8:
    // 0x331dd8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x331dd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_331ddc:
    // 0x331ddc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x331ddcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331de0:
    // 0x331de0: 0x0  nop
    ctx->pc = 0x331de0u;
    // NOP
label_331de4:
    // 0x331de4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x331de4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_331de8:
    // 0x331de8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x331de8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_331dec:
    // 0x331dec: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x331decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_331df0:
    // 0x331df0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x331df0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331df4:
    // 0x331df4: 0x0  nop
    ctx->pc = 0x331df4u;
    // NOP
label_331df8:
    // 0x331df8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x331df8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_331dfc:
    // 0x331dfc: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x331dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_331e00:
    // 0x331e00: 0x826665ae  lb          $a2, 0x65AE($s3)
    ctx->pc = 0x331e00u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 26030)));
label_331e04:
    // 0x331e04: 0x6163c  dsll32      $v0, $a2, 24
    ctx->pc = 0x331e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 24));
label_331e08:
    // 0x331e08: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x331e08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_331e0c:
    // 0x331e0c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x331e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_331e10:
    // 0x331e10: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x331e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_331e14:
    // 0x331e14: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x331e14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_331e18:
    // 0x331e18: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x331e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_331e1c:
    // 0x331e1c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x331e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_331e20:
    // 0x331e20: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x331e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_331e24:
    // 0x331e24: 0x24465e60  addiu       $a2, $v0, 0x5E60
    ctx->pc = 0x331e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24160));
label_331e28:
    // 0x331e28: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x331e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_331e2c:
    // 0x331e2c: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x331e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
label_331e30:
    // 0x331e30: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x331e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_331e34:
    // 0x331e34: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x331e34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_331e38:
    // 0x331e38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x331e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_331e3c:
    // 0x331e3c: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x331e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_331e40:
    // 0x331e40: 0x8fa60130  lw          $a2, 0x130($sp)
    ctx->pc = 0x331e40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_331e44:
    // 0x331e44: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x331e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_331e48:
    // 0x331e48: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x331e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_331e4c:
    // 0x331e4c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x331e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_331e50:
    // 0x331e50: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x331e50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_331e54:
    // 0x331e54: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x331e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_331e58:
    // 0x331e58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x331e58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_331e5c:
    // 0x331e5c: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x331e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_331e60:
    // 0x331e60: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x331e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_331e64:
    // 0x331e64: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x331e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_331e68:
    // 0x331e68: 0x8fa60130  lw          $a2, 0x130($sp)
    ctx->pc = 0x331e68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_331e6c:
    // 0x331e6c: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x331e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_331e70:
    // 0x331e70: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x331e70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_331e74:
    // 0x331e74: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x331e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_331e78:
    // 0x331e78: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x331e78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_331e7c:
    // 0x331e7c: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x331e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_331e80:
    // 0x331e80: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x331e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_331e84:
    // 0x331e84: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x331e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_331e88:
    // 0x331e88: 0x433023  subu        $a2, $v0, $v1
    ctx->pc = 0x331e88u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_331e8c:
    // 0x331e8c: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x331e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_331e90:
    // 0x331e90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x331e90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331e94:
    // 0x331e94: 0x0  nop
    ctx->pc = 0x331e94u;
    // NOP
label_331e98:
    // 0x331e98: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x331e98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_331e9c:
    // 0x331e9c: 0x3c0342fa  lui         $v1, 0x42FA
    ctx->pc = 0x331e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17146 << 16));
label_331ea0:
    // 0x331ea0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x331ea0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331ea4:
    // 0x331ea4: 0x0  nop
    ctx->pc = 0x331ea4u;
    // NOP
label_331ea8:
    // 0x331ea8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x331ea8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_331eac:
    // 0x331eac: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x331eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_331eb0:
    // 0x331eb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x331eb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_331eb4:
    // 0x331eb4: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x331eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_331eb8:
    // 0x331eb8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x331eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_331ebc:
    // 0x331ebc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x331ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_331ec0:
    // 0x331ec0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x331ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_331ec4:
    // 0x331ec4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x331ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_331ec8:
    // 0x331ec8: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x331ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_331ecc:
    // 0x331ecc: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x331eccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_331ed0:
    // 0x331ed0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x331ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331ed4:
    // 0x331ed4: 0x0  nop
    ctx->pc = 0x331ed4u;
    // NOP
label_331ed8:
    // 0x331ed8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x331ed8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_331edc:
    // 0x331edc: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x331edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
label_331ee0:
    // 0x331ee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x331ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_331ee4:
    // 0x331ee4: 0x0  nop
    ctx->pc = 0x331ee4u;
    // NOP
label_331ee8:
    // 0x331ee8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x331ee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_331eec:
    // 0x331eec: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x331eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_331ef0:
    // 0x331ef0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x331ef0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_331ef4:
    // 0x331ef4: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x331ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_331ef8:
    // 0x331ef8: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x331ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_331efc:
    // 0x331efc: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x331efcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_331f00:
    // 0x331f00: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x331f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_331f04:
    // 0x331f04: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x331f04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_331f08:
    // 0x331f08: 0x3c030089  lui         $v1, 0x89
    ctx->pc = 0x331f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)137 << 16));
label_331f0c:
    // 0x331f0c: 0x246626f0  addiu       $a2, $v1, 0x26F0
    ctx->pc = 0x331f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 9968));
label_331f10:
    // 0x331f10: 0xc040c80  jal         func_103200
label_331f14:
    if (ctx->pc == 0x331F14u) {
        ctx->pc = 0x331F18u;
        goto label_331f18;
    }
    ctx->pc = 0x331F10u;
    SET_GPR_U32(ctx, 31, 0x331F18u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x331F18u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x331F18u) { return; }
    ctx->pc = 0x331F18u;
label_331f18:
    // 0x331f18: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x331f18u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_331f1c:
    // 0x331f1c: 0x1000000c  b           . + 4 + (0xC << 2)
label_331f20:
    if (ctx->pc == 0x331F20u) {
        ctx->pc = 0x331F24u;
        goto label_331f24;
    }
    ctx->pc = 0x331F1Cu;
    {
        const bool branch_taken_0x331f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331f1c) {
            ctx->pc = 0x331F50u;
            goto label_331f50;
        }
    }
    ctx->pc = 0x331F24u;
label_331f24:
    // 0x331f24: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x331f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_331f28:
    // 0x331f28: 0x5d3021  addu        $a2, $v0, $sp
    ctx->pc = 0x331f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_331f2c:
    // 0x331f2c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x331f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_331f30:
    // 0x331f30: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x331f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_331f34:
    // 0x331f34: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x331f34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_331f38:
    // 0x331f38: 0xc4c00120  lwc1        $f0, 0x120($a2)
    ctx->pc = 0x331f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_331f3c:
    // 0x331f3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x331f3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_331f40:
    // 0x331f40: 0xe4c00120  swc1        $f0, 0x120($a2)
    ctx->pc = 0x331f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 288), bits); }
label_331f44:
    // 0x331f44: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x331f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_331f48:
    // 0x331f48: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x331f48u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_331f4c:
    // 0x331f4c: 0x0  nop
    ctx->pc = 0x331f4cu;
    // NOP
label_331f50:
    // 0x331f50: 0x2a430004  slti        $v1, $s2, 0x4
    ctx->pc = 0x331f50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_331f54:
    // 0x331f54: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_331f58:
    if (ctx->pc == 0x331F58u) {
        ctx->pc = 0x331F5Cu;
        goto label_331f5c;
    }
    ctx->pc = 0x331F54u;
    {
        const bool branch_taken_0x331f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x331f54) {
            ctx->pc = 0x331F24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_331f24;
        }
    }
    ctx->pc = 0x331F5Cu;
label_331f5c:
    // 0x331f5c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x331f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_331f60:
    // 0x331f60: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x331f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_331f64:
    // 0x331f64: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x331f64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_331f68:
    // 0x331f68: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x331f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_331f6c:
    // 0x331f6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x331f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_331f70:
    // 0x331f70: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x331f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_331f74:
    // 0x331f74: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x331f74u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_331f78:
    // 0x331f78: 0xe7ac0120  swc1        $f12, 0x120($sp)
    ctx->pc = 0x331f78u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_331f7c:
    // 0x331f7c: 0x3c063f4c  lui         $a2, 0x3F4C
    ctx->pc = 0x331f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16204 << 16));
label_331f80:
    // 0x331f80: 0x34c2cccd  ori         $v0, $a2, 0xCCCD
    ctx->pc = 0x331f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
label_331f84:
    // 0x331f84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x331f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_331f88:
    // 0x331f88: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x331f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_331f8c:
    // 0x331f8c: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x331f8cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_331f90:
    // 0x331f90: 0xe7ac0128  swc1        $f12, 0x128($sp)
    ctx->pc = 0x331f90u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_331f94:
    // 0x331f94: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x331f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_331f98:
    // 0x331f98: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x331f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_331f9c:
    // 0x331f9c: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x331f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
label_331fa0:
    // 0x331fa0: 0x34432b16  ori         $v1, $v0, 0x2B16
    ctx->pc = 0x331fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
label_331fa4:
    // 0x331fa4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x331fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_331fa8:
    // 0x331fa8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x331fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_331fac:
    // 0x331fac: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x331facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_331fb0:
    // 0x331fb0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x331fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_331fb4:
    // 0x331fb4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x331fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_331fb8:
    // 0x331fb8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x331fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_331fbc:
    // 0x331fbc: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x331fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_331fc0:
    // 0x331fc0: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x331fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_331fc4:
    // 0x331fc4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x331fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_331fc8:
    // 0x331fc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x331fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_331fcc:
    // 0x331fcc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x331fccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_331fd0:
    // 0x331fd0: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x331fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_331fd4:
    // 0x331fd4: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x331fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_331fd8:
    // 0x331fd8: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x331fd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_331fdc:
    // 0x331fdc: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x331fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_331fe0:
    // 0x331fe0: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x331fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_331fe4:
    // 0x331fe4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x331fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_331fe8:
    // 0x331fe8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x331fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_331fec:
    // 0x331fec: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x331fecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_331ff0:
    // 0x331ff0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x331ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_331ff4:
    // 0x331ff4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x331ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_331ff8:
    // 0x331ff8: 0x23c00  sll         $a3, $v0, 16
    ctx->pc = 0x331ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_331ffc:
    // 0x331ffc: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x331ffcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_332000:
    // 0x332000: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x332000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_332004:
    // 0x332004: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x332004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_332008:
    // 0x332008: 0x826365af  lb          $v1, 0x65AF($s3)
    ctx->pc = 0x332008u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 26031)));
label_33200c:
    // 0x33200c: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x33200cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
label_332010:
    // 0x332010: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x332010u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_332014:
    // 0x332014: 0x16e20007  bne         $s7, $v0, . + 4 + (0x7 << 2)
label_332018:
    if (ctx->pc == 0x332018u) {
        ctx->pc = 0x33201Cu;
        goto label_33201c;
    }
    ctx->pc = 0x332014u;
    {
        const bool branch_taken_0x332014 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x332014) {
            ctx->pc = 0x332034u;
            goto label_332034;
        }
    }
    ctx->pc = 0x33201Cu;
label_33201c:
    // 0x33201c: 0x3c068046  lui         $a2, 0x8046
    ctx->pc = 0x33201cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32838 << 16));
label_332020:
    // 0x332020: 0x34c35094  ori         $v1, $a2, 0x5094
    ctx->pc = 0x332020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)20628);
label_332024:
    // 0x332024: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x332024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_332028:
    // 0x332028: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x332028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_33202c:
    // 0x33202c: 0x10000006  b           . + 4 + (0x6 << 2)
label_332030:
    if (ctx->pc == 0x332030u) {
        ctx->pc = 0x332034u;
        goto label_332034;
    }
    ctx->pc = 0x33202Cu;
    {
        const bool branch_taken_0x33202c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33202c) {
            ctx->pc = 0x332048u;
            goto label_332048;
        }
    }
    ctx->pc = 0x332034u;
label_332034:
    // 0x332034: 0x3c038060  lui         $v1, 0x8060
    ctx->pc = 0x332034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32864 << 16));
label_332038:
    // 0x332038: 0x34626060  ori         $v0, $v1, 0x6060
    ctx->pc = 0x332038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24672);
label_33203c:
    // 0x33203c: 0x260a0010  addiu       $t2, $s0, 0x10
    ctx->pc = 0x33203cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_332040:
    // 0x332040: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x332040u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
label_332044:
    // 0x332044: 0x0  nop
    ctx->pc = 0x332044u;
    // NOP
label_332048:
    // 0x332048: 0x8e626610  lw          $v0, 0x6610($s3)
    ctx->pc = 0x332048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26128)));
label_33204c:
    // 0x33204c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x33204cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_332050:
    // 0x332050: 0x0  nop
    ctx->pc = 0x332050u;
    // NOP
label_332054:
    // 0x332054: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x332054u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_332058:
    // 0x332058: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x332058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33205c:
    // 0x33205c: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x33205cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_332060:
    // 0x332060: 0xe7ac0120  swc1        $f12, 0x120($sp)
    ctx->pc = 0x332060u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_332064:
    // 0x332064: 0x8e636614  lw          $v1, 0x6614($s3)
    ctx->pc = 0x332064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26132)));
label_332068:
    // 0x332068: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332068u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33206c:
    // 0x33206c: 0x0  nop
    ctx->pc = 0x33206cu;
    // NOP
label_332070:
    // 0x332070: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x332070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_332074:
    // 0x332074: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x332074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_332078:
    // 0x332078: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x332078u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_33207c:
    // 0x33207c: 0xe7ac0124  swc1        $f12, 0x124($sp)
    ctx->pc = 0x33207cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_332080:
    // 0x332080: 0x8e626610  lw          $v0, 0x6610($s3)
    ctx->pc = 0x332080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26128)));
label_332084:
    // 0x332084: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x332084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_332088:
    // 0x332088: 0x0  nop
    ctx->pc = 0x332088u;
    // NOP
label_33208c:
    // 0x33208c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x33208cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_332090:
    // 0x332090: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x332090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_332094:
    // 0x332094: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x332094u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_332098:
    // 0x332098: 0xe7ac0128  swc1        $f12, 0x128($sp)
    ctx->pc = 0x332098u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_33209c:
    // 0x33209c: 0x8e626614  lw          $v0, 0x6614($s3)
    ctx->pc = 0x33209cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26132)));
label_3320a0:
    // 0x3320a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3320a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3320a4:
    // 0x3320a4: 0x0  nop
    ctx->pc = 0x3320a4u;
    // NOP
label_3320a8:
    // 0x3320a8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3320a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3320ac:
    // 0x3320ac: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x3320acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3320b0:
    // 0x3320b0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x3320b0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3320b4:
    // 0x3320b4: 0xe7ac012c  swc1        $f12, 0x12C($sp)
    ctx->pc = 0x3320b4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_3320b8:
    // 0x3320b8: 0xc7ac0120  lwc1        $f12, 0x120($sp)
    ctx->pc = 0x3320b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3320bc:
    // 0x3320bc: 0xc047f7e  jal         func_11FDF8
label_3320c0:
    if (ctx->pc == 0x3320C0u) {
        ctx->pc = 0x3320C4u;
        goto label_3320c4;
    }
    ctx->pc = 0x3320BCu;
    SET_GPR_U32(ctx, 31, 0x3320C4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x3320BCu, 0x3320C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3320C4u;
label_3320c4:
    // 0x3320c4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3320c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3320c8:
    // 0x3320c8: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x3320c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
label_3320cc:
    // 0x3320cc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3320ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3320d0:
    // 0x3320d0: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3320d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_3320d4:
    // 0x3320d4: 0xc7ac0124  lwc1        $f12, 0x124($sp)
    ctx->pc = 0x3320d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3320d8:
    // 0x3320d8: 0xc047f7e  jal         func_11FDF8
label_3320dc:
    if (ctx->pc == 0x3320DCu) {
        ctx->pc = 0x3320E0u;
        goto label_3320e0;
    }
    ctx->pc = 0x3320D8u;
    SET_GPR_U32(ctx, 31, 0x3320E0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x3320D8u, 0x3320E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3320E0u;
label_3320e0:
    // 0x3320e0: 0x70405e28  paddub      $t3, $v0, $zero
    ctx->pc = 0x3320e0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3320e4:
    // 0x3320e4: 0xb18c0  sll         $v1, $t3, 3
    ctx->pc = 0x3320e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
label_3320e8:
    // 0x3320e8: 0x24677900  addiu       $a3, $v1, 0x7900
    ctx->pc = 0x3320e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_3320ec:
    // 0x3320ec: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x3320ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_3320f0:
    // 0x3320f0: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x3320f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3320f4:
    // 0x3320f4: 0x473025  or          $a2, $v0, $a3
    ctx->pc = 0x3320f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_3320f8:
    // 0x3320f8: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x3320f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_3320fc:
    // 0x3320fc: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x3320fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_332100:
    // 0x332100: 0x3408fff8  ori         $t0, $zero, 0xFFF8
    ctx->pc = 0x332100u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
label_332104:
    // 0x332104: 0x2609001c  addiu       $t1, $s0, 0x1C
    ctx->pc = 0x332104u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
label_332108:
    // 0x332108: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x332108u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
label_33210c:
    // 0x33210c: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x33210cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_332110:
    // 0x332110: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x332110u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
label_332114:
    // 0x332114: 0xc047f7e  jal         func_11FDF8
label_332118:
    if (ctx->pc == 0x332118u) {
        ctx->pc = 0x33211Cu;
        goto label_33211c;
    }
    ctx->pc = 0x332114u;
    SET_GPR_U32(ctx, 31, 0x33211Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x332114u, 0x33211Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33211Cu;
label_33211c:
    // 0x33211c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33211cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_332120:
    // 0x332120: 0x24637000  addiu       $v1, $v1, 0x7000
    ctx->pc = 0x332120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
label_332124:
    // 0x332124: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x332124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_332128:
    // 0x332128: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x332128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_33212c:
    // 0x33212c: 0xc7ac012c  lwc1        $f12, 0x12C($sp)
    ctx->pc = 0x33212cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_332130:
    // 0x332130: 0xc047f7e  jal         func_11FDF8
label_332134:
    if (ctx->pc == 0x332134u) {
        ctx->pc = 0x332138u;
        goto label_332138;
    }
    ctx->pc = 0x332130u;
    SET_GPR_U32(ctx, 31, 0x332138u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x332130u, 0x332138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332138u;
label_332138:
    // 0x332138: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x332138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_33213c:
    // 0x33213c: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x33213cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_332140:
    // 0x332140: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x332140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_332144:
    // 0x332144: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x332144u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_332148:
    // 0x332148: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x332148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_33214c:
    // 0x33214c: 0x26060024  addiu       $a2, $s0, 0x24
    ctx->pc = 0x33214cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_332150:
    // 0x332150: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x332150u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_332154:
    // 0x332154: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x332154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
label_332158:
    // 0x332158: 0x26060028  addiu       $a2, $s0, 0x28
    ctx->pc = 0x332158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_33215c:
    // 0x33215c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x33215cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_332160:
    // 0x332160: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x332160u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_332164:
    // 0x332164: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x332164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_332168:
    // 0x332168: 0x244300ae  addiu       $v1, $v0, 0xAE
    ctx->pc = 0x332168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 174));
label_33216c:
    // 0x33216c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33216cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_332170:
    // 0x332170: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x332170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_332174:
    // 0x332174: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x332174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_332178:
    // 0x332178: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x332178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_33217c:
    // 0x33217c: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x33217cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
label_332180:
    // 0x332180: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x332180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_332184:
    // 0x332184: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x332184u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_332188:
    // 0x332188: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x332188u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_33218c:
    // 0x33218c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x33218cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_332190:
    // 0x332190: 0xc0462a6  jal         func_118A98
label_332194:
    if (ctx->pc == 0x332194u) {
        ctx->pc = 0x332198u;
        goto label_332198;
    }
    ctx->pc = 0x332190u;
    SET_GPR_U32(ctx, 31, 0x332198u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x332198u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x332198u) { return; }
    ctx->pc = 0x332198u;
label_332198:
    // 0x332198: 0xae150008  sw          $s5, 0x8($s0)
    ctx->pc = 0x332198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 21));
label_33219c:
    // 0x33219c: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x33219cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3321a0:
    // 0x3321a0: 0x96270002  lhu         $a3, 0x2($s1)
    ctx->pc = 0x3321a0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_3321a4:
    // 0x3321a4: 0x30e6ffff  andi        $a2, $a3, 0xFFFF
    ctx->pc = 0x3321a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_3321a8:
    // 0x3321a8: 0xdd220018  ld          $v0, 0x18($t1)
    ctx->pc = 0x3321a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 9), 24)));
label_3321ac:
    // 0x3321ac: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3321acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3321b0:
    // 0x3321b0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3321b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3321b4:
    // 0x3321b4: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x3321b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
label_3321b8:
    // 0x3321b8: 0x21cbe  dsrl32      $v1, $v0, 18
    ctx->pc = 0x3321b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 18));
label_3321bc:
    // 0x3321bc: 0x66302d  daddu       $a2, $v1, $a2
    ctx->pc = 0x3321bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 6));
label_3321c0:
    // 0x3321c0: 0xdd230018  ld          $v1, 0x18($t1)
    ctx->pc = 0x3321c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 9), 24)));
label_3321c4:
    // 0x3321c4: 0x30c73fff  andi        $a3, $a2, 0x3FFF
    ctx->pc = 0x3321c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
label_3321c8:
    // 0x3321c8: 0x7417c  dsll32      $t0, $a3, 5
    ctx->pc = 0x3321c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 5));
label_3321cc:
    // 0x3321cc: 0x3c02fff8  lui         $v0, 0xFFF8
    ctx->pc = 0x3321ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65528 << 16));
label_3321d0:
    // 0x3321d0: 0x3446001f  ori         $a2, $v0, 0x1F
    ctx->pc = 0x3321d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
label_3321d4:
    // 0x3321d4: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x3321d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_3321d8:
    // 0x3321d8: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x3321d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3321dc:
    // 0x3321dc: 0x73438  dsll        $a2, $a3, 16
    ctx->pc = 0x3321dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << 16);
label_3321e0:
    // 0x3321e0: 0x34c4ffff  ori         $a0, $a2, 0xFFFF
    ctx->pc = 0x3321e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_3321e4:
    // 0x3321e4: 0x7fa400a0  sq          $a0, 0xA0($sp)
    ctx->pc = 0x3321e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 4));
label_3321e8:
    // 0x3321e8: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x3321e8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3321ec:
    // 0x3321ec: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x3321ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_3321f0:
    // 0x3321f0: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x3321f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3321f4:
    // 0x3321f4: 0x881025  or          $v0, $a0, $t0
    ctx->pc = 0x3321f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
label_3321f8:
    // 0x3321f8: 0xfd220018  sd          $v0, 0x18($t1)
    ctx->pc = 0x3321f8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 24), GPR_U64(ctx, 2));
label_3321fc:
    // 0x3321fc: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x3321fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_332200:
    // 0x332200: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x332200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_332204:
    // 0x332204: 0x244300ae  addiu       $v1, $v0, 0xAE
    ctx->pc = 0x332204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 174));
label_332208:
    // 0x332208: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x332208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33220c:
    // 0x33220c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x33220cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_332210:
    // 0x332210: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x332210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_332214:
    // 0x332214: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x332214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_332218:
    // 0x332218: 0x24a6cca0  addiu       $a2, $a1, -0x3360
    ctx->pc = 0x332218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954144));
label_33221c:
    // 0x33221c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x33221cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_332220:
    // 0x332220: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x332220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_332224:
    // 0x332224: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x332224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_332228:
    // 0x332228: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
label_33222c:
    if (ctx->pc == 0x33222Cu) {
        ctx->pc = 0x332230u;
        goto label_332230;
    }
    ctx->pc = 0x332228u;
    {
        const bool branch_taken_0x332228 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x332228) {
            ctx->pc = 0x332258u;
            goto label_332258;
        }
    }
    ctx->pc = 0x332230u;
label_332230:
    // 0x332230: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x332230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_332234:
    // 0x332234: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_332238:
    if (ctx->pc == 0x332238u) {
        ctx->pc = 0x33223Cu;
        goto label_33223c;
    }
    ctx->pc = 0x332234u;
    {
        const bool branch_taken_0x332234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x332234) {
            ctx->pc = 0x332258u;
            goto label_332258;
        }
    }
    ctx->pc = 0x33223Cu;
label_33223c:
    // 0x33223c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x33223cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_332240:
    // 0x332240: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
label_332244:
    if (ctx->pc == 0x332244u) {
        ctx->pc = 0x332248u;
        goto label_332248;
    }
    ctx->pc = 0x332240u;
    {
        const bool branch_taken_0x332240 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x332240) {
            ctx->pc = 0x332258u;
            goto label_332258;
        }
    }
    ctx->pc = 0x332248u;
label_332248:
    // 0x332248: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x332248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_33224c:
    // 0x33224c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_332250:
    if (ctx->pc == 0x332250u) {
        ctx->pc = 0x332254u;
        goto label_332254;
    }
    ctx->pc = 0x33224Cu;
    {
        const bool branch_taken_0x33224c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33224c) {
            ctx->pc = 0x332268u;
            goto label_332268;
        }
    }
    ctx->pc = 0x332254u;
label_332254:
    // 0x332254: 0x0  nop
    ctx->pc = 0x332254u;
    // NOP
label_332258:
    // 0x332258: 0x26640018  addiu       $a0, $s3, 0x18
    ctx->pc = 0x332258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_33225c:
    // 0x33225c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x33225cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_332260:
    // 0x332260: 0xc05dbd8  jal         func_176F60
label_332264:
    if (ctx->pc == 0x332264u) {
        ctx->pc = 0x332268u;
        goto label_332268;
    }
    ctx->pc = 0x332260u;
    SET_GPR_U32(ctx, 31, 0x332268u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x332260u, 0x332268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332268u;
label_332268:
    // 0x332268: 0x2603002c  addiu       $v1, $s0, 0x2C
    ctx->pc = 0x332268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_33226c:
    // 0x33226c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x33226cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_332270:
    // 0x332270: 0x26a40028  addiu       $a0, $s5, 0x28
    ctx->pc = 0x332270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
label_332274:
    // 0x332274: 0x7080ae28  paddub      $s5, $a0, $zero
    ctx->pc = 0x332274u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_332278:
    // 0x332278: 0x26250014  addiu       $a1, $s1, 0x14
    ctx->pc = 0x332278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_33227c:
    // 0x33227c: 0x70a08e28  paddub      $s1, $a1, $zero
    ctx->pc = 0x33227cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_332280:
    // 0x332280: 0x26e20001  addiu       $v0, $s7, 0x1
    ctx->pc = 0x332280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_332284:
    // 0x332284: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x332284u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_332288:
    // 0x332288: 0x826465ae  lb          $a0, 0x65AE($s3)
    ctx->pc = 0x332288u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 26030)));
label_33228c:
    // 0x33228c: 0x42e3c  dsll32      $a1, $a0, 24
    ctx->pc = 0x33228cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 24));
label_332290:
    // 0x332290: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x332290u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_332294:
    // 0x332294: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x332294u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
label_332298:
    // 0x332298: 0x24c27b10  addiu       $v0, $a2, 0x7B10
    ctx->pc = 0x332298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 31504));
label_33229c:
    // 0x33229c: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x33229cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3322a0:
    // 0x3322a0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3322a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3322a4:
    // 0x3322a4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x3322a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3322a8:
    // 0x3322a8: 0x2e5102a  slt         $v0, $s7, $a1
    ctx->pc = 0x3322a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3322ac:
    // 0x3322ac: 0x1440fe92  bnez        $v0, . + 4 + (-0x16E << 2)
label_3322b0:
    if (ctx->pc == 0x3322B0u) {
        ctx->pc = 0x3322B4u;
        goto label_3322b4;
    }
    ctx->pc = 0x3322ACu;
    {
        const bool branch_taken_0x3322ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3322ac) {
            ctx->pc = 0x331CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_331cf8;
        }
    }
    ctx->pc = 0x3322B4u;
label_3322b4:
    // 0x3322b4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3322b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3322b8:
    // 0x3322b8: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x3322b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
label_3322bc:
    // 0x3322bc: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x3322bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
label_3322c0:
    // 0x3322c0: 0x34c31043  ori         $v1, $a2, 0x1043
    ctx->pc = 0x3322c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4163);
label_3322c4:
    // 0x3322c4: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x3322c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_3322c8:
    // 0x3322c8: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x3322c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_3322cc:
    // 0x3322cc: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x3322ccu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
label_3322d0:
    // 0x3322d0: 0x26670018  addiu       $a3, $s3, 0x18
    ctx->pc = 0x3322d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_3322d4:
    // 0x3322d4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x3322d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_3322d8:
    // 0x3322d8: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x3322d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_3322dc:
    // 0x3322dc: 0xc05dbd8  jal         func_176F60
label_3322e0:
    if (ctx->pc == 0x3322E0u) {
        ctx->pc = 0x3322E4u;
        goto label_3322e4;
    }
    ctx->pc = 0x3322DCu;
    SET_GPR_U32(ctx, 31, 0x3322E4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3322DCu, 0x3322E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3322E4u;
label_3322e4:
    // 0x3322e4: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x3322e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_3322e8:
    // 0x3322e8: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x3322e8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_3322ec:
    // 0x3322ec: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x3322ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
label_3322f0:
    // 0x3322f0: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x3322f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
label_3322f4:
    // 0x3322f4: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3322f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_3322f8:
    // 0x3322f8: 0x34431015  ori         $v1, $v0, 0x1015
    ctx->pc = 0x3322f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
label_3322fc:
    // 0x3322fc: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x3322fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_332300:
    // 0x332300: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x332300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_332304:
    // 0x332304: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x332304u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
label_332308:
    // 0x332308: 0x26660018  addiu       $a2, $s3, 0x18
    ctx->pc = 0x332308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_33230c:
    // 0x33230c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x33230cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_332310:
    // 0x332310: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x332310u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_332314:
    // 0x332314: 0xc05dbd8  jal         func_176F60
label_332318:
    if (ctx->pc == 0x332318u) {
        ctx->pc = 0x33231Cu;
        goto label_33231c;
    }
    ctx->pc = 0x332314u;
    SET_GPR_U32(ctx, 31, 0x33231Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x332314u, 0x33231Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33231Cu;
label_33231c:
    // 0x33231c: 0x26970010  addiu       $s7, $s4, 0x10
    ctx->pc = 0x33231cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_332320:
    // 0x332320: 0x72e0a628  paddub      $s4, $s7, $zero
    ctx->pc = 0x332320u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
label_332324:
    // 0x332324: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x332324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_332328:
    // 0x332328: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x332328u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_33232c:
    // 0x33232c: 0x3c070400  lui         $a3, 0x400
    ctx->pc = 0x33232cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1024 << 16));
label_332330:
    // 0x332330: 0x34e31009  ori         $v1, $a3, 0x1009
    ctx->pc = 0x332330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4105);
label_332334:
    // 0x332334: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x332334u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_332338:
    // 0x332338: 0xfe800008  sd          $zero, 0x8($s4)
    ctx->pc = 0x332338u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 0));
label_33233c:
    // 0x33233c: 0x26620018  addiu       $v0, $s3, 0x18
    ctx->pc = 0x33233cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_332340:
    // 0x332340: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x332340u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_332344:
    // 0x332344: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x332344u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_332348:
    // 0x332348: 0xc05dbd8  jal         func_176F60
label_33234c:
    if (ctx->pc == 0x33234Cu) {
        ctx->pc = 0x332350u;
        goto label_332350;
    }
    ctx->pc = 0x332348u;
    SET_GPR_U32(ctx, 31, 0x332350u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x332348u, 0x332350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332350u;
label_332350:
    // 0x332350: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x332350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_332354:
    // 0x332354: 0x70c0a628  paddub      $s4, $a2, $zero
    ctx->pc = 0x332354u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_332358:
    // 0x332358: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x332358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_33235c:
    // 0x33235c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x33235cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_332360:
    // 0x332360: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x332360u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
label_332364:
    // 0x332364: 0x34c2103f  ori         $v0, $a2, 0x103F
    ctx->pc = 0x332364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4159);
label_332368:
    // 0x332368: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x332368u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_33236c:
    // 0x33236c: 0xfe800008  sd          $zero, 0x8($s4)
    ctx->pc = 0x33236cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 0));
label_332370:
    // 0x332370: 0x26670018  addiu       $a3, $s3, 0x18
    ctx->pc = 0x332370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_332374:
    // 0x332374: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x332374u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_332378:
    // 0x332378: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x332378u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_33237c:
    // 0x33237c: 0xc05dbd8  jal         func_176F60
label_332380:
    if (ctx->pc == 0x332380u) {
        ctx->pc = 0x332384u;
        goto label_332384;
    }
    ctx->pc = 0x33237Cu;
    SET_GPR_U32(ctx, 31, 0x332384u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x33237Cu, 0x332384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332384u;
label_332384:
    // 0x332384: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x332384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_332388:
    // 0x332388: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x332388u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_33238c:
    // 0x33238c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x33238cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_332390:
    // 0x332390: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x332390u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_332394:
    // 0x332394: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x332394u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_332398:
    // 0x332398: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x332398u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_33239c:
    // 0x33239c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x33239cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3323a0:
    // 0x3323a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3323a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3323a4:
    // 0x3323a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3323a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3323a8:
    // 0x3323a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3323a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3323ac:
    // 0x3323ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3323acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3323b0:
    // 0x3323b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3323b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3323b4:
    // 0x3323b4: 0x27bd0290  addiu       $sp, $sp, 0x290
    ctx->pc = 0x3323b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_3323b8:
    // 0x3323b8: 0x3e00008  jr          $ra
label_3323bc:
    if (ctx->pc == 0x3323BCu) {
        ctx->pc = 0x3323C0u;
        goto label_fallthrough_0x3323b8;
    }
    ctx->pc = 0x3323B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3323B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3323b8:
    ctx->pc = 0x3323C0u;
}
