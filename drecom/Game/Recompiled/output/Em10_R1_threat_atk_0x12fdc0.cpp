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

// Function: Em10_R1_threat_atk
// Address: 0x12fdc0 - 0x130690
void Em10_R1_threat_atk_0x12fdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_threat_atk_0x12fdc0");
#endif

    switch (ctx->pc) {
        case 0x12fdc0u: goto label_12fdc0;
        case 0x12fdc4u: goto label_12fdc4;
        case 0x12fdc8u: goto label_12fdc8;
        case 0x12fdccu: goto label_12fdcc;
        case 0x12fdd0u: goto label_12fdd0;
        case 0x12fdd4u: goto label_12fdd4;
        case 0x12fdd8u: goto label_12fdd8;
        case 0x12fddcu: goto label_12fddc;
        case 0x12fde0u: goto label_12fde0;
        case 0x12fde4u: goto label_12fde4;
        case 0x12fde8u: goto label_12fde8;
        case 0x12fdecu: goto label_12fdec;
        case 0x12fdf0u: goto label_12fdf0;
        case 0x12fdf4u: goto label_12fdf4;
        case 0x12fdf8u: goto label_12fdf8;
        case 0x12fdfcu: goto label_12fdfc;
        case 0x12fe00u: goto label_12fe00;
        case 0x12fe04u: goto label_12fe04;
        case 0x12fe08u: goto label_12fe08;
        case 0x12fe0cu: goto label_12fe0c;
        case 0x12fe10u: goto label_12fe10;
        case 0x12fe14u: goto label_12fe14;
        case 0x12fe18u: goto label_12fe18;
        case 0x12fe1cu: goto label_12fe1c;
        case 0x12fe20u: goto label_12fe20;
        case 0x12fe24u: goto label_12fe24;
        case 0x12fe28u: goto label_12fe28;
        case 0x12fe2cu: goto label_12fe2c;
        case 0x12fe30u: goto label_12fe30;
        case 0x12fe34u: goto label_12fe34;
        case 0x12fe38u: goto label_12fe38;
        case 0x12fe3cu: goto label_12fe3c;
        case 0x12fe40u: goto label_12fe40;
        case 0x12fe44u: goto label_12fe44;
        case 0x12fe48u: goto label_12fe48;
        case 0x12fe4cu: goto label_12fe4c;
        case 0x12fe50u: goto label_12fe50;
        case 0x12fe54u: goto label_12fe54;
        case 0x12fe58u: goto label_12fe58;
        case 0x12fe5cu: goto label_12fe5c;
        case 0x12fe60u: goto label_12fe60;
        case 0x12fe64u: goto label_12fe64;
        case 0x12fe68u: goto label_12fe68;
        case 0x12fe6cu: goto label_12fe6c;
        case 0x12fe70u: goto label_12fe70;
        case 0x12fe74u: goto label_12fe74;
        case 0x12fe78u: goto label_12fe78;
        case 0x12fe7cu: goto label_12fe7c;
        case 0x12fe80u: goto label_12fe80;
        case 0x12fe84u: goto label_12fe84;
        case 0x12fe88u: goto label_12fe88;
        case 0x12fe8cu: goto label_12fe8c;
        case 0x12fe90u: goto label_12fe90;
        case 0x12fe94u: goto label_12fe94;
        case 0x12fe98u: goto label_12fe98;
        case 0x12fe9cu: goto label_12fe9c;
        case 0x12fea0u: goto label_12fea0;
        case 0x12fea4u: goto label_12fea4;
        case 0x12fea8u: goto label_12fea8;
        case 0x12feacu: goto label_12feac;
        case 0x12feb0u: goto label_12feb0;
        case 0x12feb4u: goto label_12feb4;
        case 0x12feb8u: goto label_12feb8;
        case 0x12febcu: goto label_12febc;
        case 0x12fec0u: goto label_12fec0;
        case 0x12fec4u: goto label_12fec4;
        case 0x12fec8u: goto label_12fec8;
        case 0x12feccu: goto label_12fecc;
        case 0x12fed0u: goto label_12fed0;
        case 0x12fed4u: goto label_12fed4;
        case 0x12fed8u: goto label_12fed8;
        case 0x12fedcu: goto label_12fedc;
        case 0x12fee0u: goto label_12fee0;
        case 0x12fee4u: goto label_12fee4;
        case 0x12fee8u: goto label_12fee8;
        case 0x12feecu: goto label_12feec;
        case 0x12fef0u: goto label_12fef0;
        case 0x12fef4u: goto label_12fef4;
        case 0x12fef8u: goto label_12fef8;
        case 0x12fefcu: goto label_12fefc;
        case 0x12ff00u: goto label_12ff00;
        case 0x12ff04u: goto label_12ff04;
        case 0x12ff08u: goto label_12ff08;
        case 0x12ff0cu: goto label_12ff0c;
        case 0x12ff10u: goto label_12ff10;
        case 0x12ff14u: goto label_12ff14;
        case 0x12ff18u: goto label_12ff18;
        case 0x12ff1cu: goto label_12ff1c;
        case 0x12ff20u: goto label_12ff20;
        case 0x12ff24u: goto label_12ff24;
        case 0x12ff28u: goto label_12ff28;
        case 0x12ff2cu: goto label_12ff2c;
        case 0x12ff30u: goto label_12ff30;
        case 0x12ff34u: goto label_12ff34;
        case 0x12ff38u: goto label_12ff38;
        case 0x12ff3cu: goto label_12ff3c;
        case 0x12ff40u: goto label_12ff40;
        case 0x12ff44u: goto label_12ff44;
        case 0x12ff48u: goto label_12ff48;
        case 0x12ff4cu: goto label_12ff4c;
        case 0x12ff50u: goto label_12ff50;
        case 0x12ff54u: goto label_12ff54;
        case 0x12ff58u: goto label_12ff58;
        case 0x12ff5cu: goto label_12ff5c;
        case 0x12ff60u: goto label_12ff60;
        case 0x12ff64u: goto label_12ff64;
        case 0x12ff68u: goto label_12ff68;
        case 0x12ff6cu: goto label_12ff6c;
        case 0x12ff70u: goto label_12ff70;
        case 0x12ff74u: goto label_12ff74;
        case 0x12ff78u: goto label_12ff78;
        case 0x12ff7cu: goto label_12ff7c;
        case 0x12ff80u: goto label_12ff80;
        case 0x12ff84u: goto label_12ff84;
        case 0x12ff88u: goto label_12ff88;
        case 0x12ff8cu: goto label_12ff8c;
        case 0x12ff90u: goto label_12ff90;
        case 0x12ff94u: goto label_12ff94;
        case 0x12ff98u: goto label_12ff98;
        case 0x12ff9cu: goto label_12ff9c;
        case 0x12ffa0u: goto label_12ffa0;
        case 0x12ffa4u: goto label_12ffa4;
        case 0x12ffa8u: goto label_12ffa8;
        case 0x12ffacu: goto label_12ffac;
        case 0x12ffb0u: goto label_12ffb0;
        case 0x12ffb4u: goto label_12ffb4;
        case 0x12ffb8u: goto label_12ffb8;
        case 0x12ffbcu: goto label_12ffbc;
        case 0x12ffc0u: goto label_12ffc0;
        case 0x12ffc4u: goto label_12ffc4;
        case 0x12ffc8u: goto label_12ffc8;
        case 0x12ffccu: goto label_12ffcc;
        case 0x12ffd0u: goto label_12ffd0;
        case 0x12ffd4u: goto label_12ffd4;
        case 0x12ffd8u: goto label_12ffd8;
        case 0x12ffdcu: goto label_12ffdc;
        case 0x12ffe0u: goto label_12ffe0;
        case 0x12ffe4u: goto label_12ffe4;
        case 0x12ffe8u: goto label_12ffe8;
        case 0x12ffecu: goto label_12ffec;
        case 0x12fff0u: goto label_12fff0;
        case 0x12fff4u: goto label_12fff4;
        case 0x12fff8u: goto label_12fff8;
        case 0x12fffcu: goto label_12fffc;
        case 0x130000u: goto label_130000;
        case 0x130004u: goto label_130004;
        case 0x130008u: goto label_130008;
        case 0x13000cu: goto label_13000c;
        case 0x130010u: goto label_130010;
        case 0x130014u: goto label_130014;
        case 0x130018u: goto label_130018;
        case 0x13001cu: goto label_13001c;
        case 0x130020u: goto label_130020;
        case 0x130024u: goto label_130024;
        case 0x130028u: goto label_130028;
        case 0x13002cu: goto label_13002c;
        case 0x130030u: goto label_130030;
        case 0x130034u: goto label_130034;
        case 0x130038u: goto label_130038;
        case 0x13003cu: goto label_13003c;
        case 0x130040u: goto label_130040;
        case 0x130044u: goto label_130044;
        case 0x130048u: goto label_130048;
        case 0x13004cu: goto label_13004c;
        case 0x130050u: goto label_130050;
        case 0x130054u: goto label_130054;
        case 0x130058u: goto label_130058;
        case 0x13005cu: goto label_13005c;
        case 0x130060u: goto label_130060;
        case 0x130064u: goto label_130064;
        case 0x130068u: goto label_130068;
        case 0x13006cu: goto label_13006c;
        case 0x130070u: goto label_130070;
        case 0x130074u: goto label_130074;
        case 0x130078u: goto label_130078;
        case 0x13007cu: goto label_13007c;
        case 0x130080u: goto label_130080;
        case 0x130084u: goto label_130084;
        case 0x130088u: goto label_130088;
        case 0x13008cu: goto label_13008c;
        case 0x130090u: goto label_130090;
        case 0x130094u: goto label_130094;
        case 0x130098u: goto label_130098;
        case 0x13009cu: goto label_13009c;
        case 0x1300a0u: goto label_1300a0;
        case 0x1300a4u: goto label_1300a4;
        case 0x1300a8u: goto label_1300a8;
        case 0x1300acu: goto label_1300ac;
        case 0x1300b0u: goto label_1300b0;
        case 0x1300b4u: goto label_1300b4;
        case 0x1300b8u: goto label_1300b8;
        case 0x1300bcu: goto label_1300bc;
        case 0x1300c0u: goto label_1300c0;
        case 0x1300c4u: goto label_1300c4;
        case 0x1300c8u: goto label_1300c8;
        case 0x1300ccu: goto label_1300cc;
        case 0x1300d0u: goto label_1300d0;
        case 0x1300d4u: goto label_1300d4;
        case 0x1300d8u: goto label_1300d8;
        case 0x1300dcu: goto label_1300dc;
        case 0x1300e0u: goto label_1300e0;
        case 0x1300e4u: goto label_1300e4;
        case 0x1300e8u: goto label_1300e8;
        case 0x1300ecu: goto label_1300ec;
        case 0x1300f0u: goto label_1300f0;
        case 0x1300f4u: goto label_1300f4;
        case 0x1300f8u: goto label_1300f8;
        case 0x1300fcu: goto label_1300fc;
        case 0x130100u: goto label_130100;
        case 0x130104u: goto label_130104;
        case 0x130108u: goto label_130108;
        case 0x13010cu: goto label_13010c;
        case 0x130110u: goto label_130110;
        case 0x130114u: goto label_130114;
        case 0x130118u: goto label_130118;
        case 0x13011cu: goto label_13011c;
        case 0x130120u: goto label_130120;
        case 0x130124u: goto label_130124;
        case 0x130128u: goto label_130128;
        case 0x13012cu: goto label_13012c;
        case 0x130130u: goto label_130130;
        case 0x130134u: goto label_130134;
        case 0x130138u: goto label_130138;
        case 0x13013cu: goto label_13013c;
        case 0x130140u: goto label_130140;
        case 0x130144u: goto label_130144;
        case 0x130148u: goto label_130148;
        case 0x13014cu: goto label_13014c;
        case 0x130150u: goto label_130150;
        case 0x130154u: goto label_130154;
        case 0x130158u: goto label_130158;
        case 0x13015cu: goto label_13015c;
        case 0x130160u: goto label_130160;
        case 0x130164u: goto label_130164;
        case 0x130168u: goto label_130168;
        case 0x13016cu: goto label_13016c;
        case 0x130170u: goto label_130170;
        case 0x130174u: goto label_130174;
        case 0x130178u: goto label_130178;
        case 0x13017cu: goto label_13017c;
        case 0x130180u: goto label_130180;
        case 0x130184u: goto label_130184;
        case 0x130188u: goto label_130188;
        case 0x13018cu: goto label_13018c;
        case 0x130190u: goto label_130190;
        case 0x130194u: goto label_130194;
        case 0x130198u: goto label_130198;
        case 0x13019cu: goto label_13019c;
        case 0x1301a0u: goto label_1301a0;
        case 0x1301a4u: goto label_1301a4;
        case 0x1301a8u: goto label_1301a8;
        case 0x1301acu: goto label_1301ac;
        case 0x1301b0u: goto label_1301b0;
        case 0x1301b4u: goto label_1301b4;
        case 0x1301b8u: goto label_1301b8;
        case 0x1301bcu: goto label_1301bc;
        case 0x1301c0u: goto label_1301c0;
        case 0x1301c4u: goto label_1301c4;
        case 0x1301c8u: goto label_1301c8;
        case 0x1301ccu: goto label_1301cc;
        case 0x1301d0u: goto label_1301d0;
        case 0x1301d4u: goto label_1301d4;
        case 0x1301d8u: goto label_1301d8;
        case 0x1301dcu: goto label_1301dc;
        case 0x1301e0u: goto label_1301e0;
        case 0x1301e4u: goto label_1301e4;
        case 0x1301e8u: goto label_1301e8;
        case 0x1301ecu: goto label_1301ec;
        case 0x1301f0u: goto label_1301f0;
        case 0x1301f4u: goto label_1301f4;
        case 0x1301f8u: goto label_1301f8;
        case 0x1301fcu: goto label_1301fc;
        case 0x130200u: goto label_130200;
        case 0x130204u: goto label_130204;
        case 0x130208u: goto label_130208;
        case 0x13020cu: goto label_13020c;
        case 0x130210u: goto label_130210;
        case 0x130214u: goto label_130214;
        case 0x130218u: goto label_130218;
        case 0x13021cu: goto label_13021c;
        case 0x130220u: goto label_130220;
        case 0x130224u: goto label_130224;
        case 0x130228u: goto label_130228;
        case 0x13022cu: goto label_13022c;
        case 0x130230u: goto label_130230;
        case 0x130234u: goto label_130234;
        case 0x130238u: goto label_130238;
        case 0x13023cu: goto label_13023c;
        case 0x130240u: goto label_130240;
        case 0x130244u: goto label_130244;
        case 0x130248u: goto label_130248;
        case 0x13024cu: goto label_13024c;
        case 0x130250u: goto label_130250;
        case 0x130254u: goto label_130254;
        case 0x130258u: goto label_130258;
        case 0x13025cu: goto label_13025c;
        case 0x130260u: goto label_130260;
        case 0x130264u: goto label_130264;
        case 0x130268u: goto label_130268;
        case 0x13026cu: goto label_13026c;
        case 0x130270u: goto label_130270;
        case 0x130274u: goto label_130274;
        case 0x130278u: goto label_130278;
        case 0x13027cu: goto label_13027c;
        case 0x130280u: goto label_130280;
        case 0x130284u: goto label_130284;
        case 0x130288u: goto label_130288;
        case 0x13028cu: goto label_13028c;
        case 0x130290u: goto label_130290;
        case 0x130294u: goto label_130294;
        case 0x130298u: goto label_130298;
        case 0x13029cu: goto label_13029c;
        case 0x1302a0u: goto label_1302a0;
        case 0x1302a4u: goto label_1302a4;
        case 0x1302a8u: goto label_1302a8;
        case 0x1302acu: goto label_1302ac;
        case 0x1302b0u: goto label_1302b0;
        case 0x1302b4u: goto label_1302b4;
        case 0x1302b8u: goto label_1302b8;
        case 0x1302bcu: goto label_1302bc;
        case 0x1302c0u: goto label_1302c0;
        case 0x1302c4u: goto label_1302c4;
        case 0x1302c8u: goto label_1302c8;
        case 0x1302ccu: goto label_1302cc;
        case 0x1302d0u: goto label_1302d0;
        case 0x1302d4u: goto label_1302d4;
        case 0x1302d8u: goto label_1302d8;
        case 0x1302dcu: goto label_1302dc;
        case 0x1302e0u: goto label_1302e0;
        case 0x1302e4u: goto label_1302e4;
        case 0x1302e8u: goto label_1302e8;
        case 0x1302ecu: goto label_1302ec;
        case 0x1302f0u: goto label_1302f0;
        case 0x1302f4u: goto label_1302f4;
        case 0x1302f8u: goto label_1302f8;
        case 0x1302fcu: goto label_1302fc;
        case 0x130300u: goto label_130300;
        case 0x130304u: goto label_130304;
        case 0x130308u: goto label_130308;
        case 0x13030cu: goto label_13030c;
        case 0x130310u: goto label_130310;
        case 0x130314u: goto label_130314;
        case 0x130318u: goto label_130318;
        case 0x13031cu: goto label_13031c;
        case 0x130320u: goto label_130320;
        case 0x130324u: goto label_130324;
        case 0x130328u: goto label_130328;
        case 0x13032cu: goto label_13032c;
        case 0x130330u: goto label_130330;
        case 0x130334u: goto label_130334;
        case 0x130338u: goto label_130338;
        case 0x13033cu: goto label_13033c;
        case 0x130340u: goto label_130340;
        case 0x130344u: goto label_130344;
        case 0x130348u: goto label_130348;
        case 0x13034cu: goto label_13034c;
        case 0x130350u: goto label_130350;
        case 0x130354u: goto label_130354;
        case 0x130358u: goto label_130358;
        case 0x13035cu: goto label_13035c;
        case 0x130360u: goto label_130360;
        case 0x130364u: goto label_130364;
        case 0x130368u: goto label_130368;
        case 0x13036cu: goto label_13036c;
        case 0x130370u: goto label_130370;
        case 0x130374u: goto label_130374;
        case 0x130378u: goto label_130378;
        case 0x13037cu: goto label_13037c;
        case 0x130380u: goto label_130380;
        case 0x130384u: goto label_130384;
        case 0x130388u: goto label_130388;
        case 0x13038cu: goto label_13038c;
        case 0x130390u: goto label_130390;
        case 0x130394u: goto label_130394;
        case 0x130398u: goto label_130398;
        case 0x13039cu: goto label_13039c;
        case 0x1303a0u: goto label_1303a0;
        case 0x1303a4u: goto label_1303a4;
        case 0x1303a8u: goto label_1303a8;
        case 0x1303acu: goto label_1303ac;
        case 0x1303b0u: goto label_1303b0;
        case 0x1303b4u: goto label_1303b4;
        case 0x1303b8u: goto label_1303b8;
        case 0x1303bcu: goto label_1303bc;
        case 0x1303c0u: goto label_1303c0;
        case 0x1303c4u: goto label_1303c4;
        case 0x1303c8u: goto label_1303c8;
        case 0x1303ccu: goto label_1303cc;
        case 0x1303d0u: goto label_1303d0;
        case 0x1303d4u: goto label_1303d4;
        case 0x1303d8u: goto label_1303d8;
        case 0x1303dcu: goto label_1303dc;
        case 0x1303e0u: goto label_1303e0;
        case 0x1303e4u: goto label_1303e4;
        case 0x1303e8u: goto label_1303e8;
        case 0x1303ecu: goto label_1303ec;
        case 0x1303f0u: goto label_1303f0;
        case 0x1303f4u: goto label_1303f4;
        case 0x1303f8u: goto label_1303f8;
        case 0x1303fcu: goto label_1303fc;
        case 0x130400u: goto label_130400;
        case 0x130404u: goto label_130404;
        case 0x130408u: goto label_130408;
        case 0x13040cu: goto label_13040c;
        case 0x130410u: goto label_130410;
        case 0x130414u: goto label_130414;
        case 0x130418u: goto label_130418;
        case 0x13041cu: goto label_13041c;
        case 0x130420u: goto label_130420;
        case 0x130424u: goto label_130424;
        case 0x130428u: goto label_130428;
        case 0x13042cu: goto label_13042c;
        case 0x130430u: goto label_130430;
        case 0x130434u: goto label_130434;
        case 0x130438u: goto label_130438;
        case 0x13043cu: goto label_13043c;
        case 0x130440u: goto label_130440;
        case 0x130444u: goto label_130444;
        case 0x130448u: goto label_130448;
        case 0x13044cu: goto label_13044c;
        case 0x130450u: goto label_130450;
        case 0x130454u: goto label_130454;
        case 0x130458u: goto label_130458;
        case 0x13045cu: goto label_13045c;
        case 0x130460u: goto label_130460;
        case 0x130464u: goto label_130464;
        case 0x130468u: goto label_130468;
        case 0x13046cu: goto label_13046c;
        case 0x130470u: goto label_130470;
        case 0x130474u: goto label_130474;
        case 0x130478u: goto label_130478;
        case 0x13047cu: goto label_13047c;
        case 0x130480u: goto label_130480;
        case 0x130484u: goto label_130484;
        case 0x130488u: goto label_130488;
        case 0x13048cu: goto label_13048c;
        case 0x130490u: goto label_130490;
        case 0x130494u: goto label_130494;
        case 0x130498u: goto label_130498;
        case 0x13049cu: goto label_13049c;
        case 0x1304a0u: goto label_1304a0;
        case 0x1304a4u: goto label_1304a4;
        case 0x1304a8u: goto label_1304a8;
        case 0x1304acu: goto label_1304ac;
        case 0x1304b0u: goto label_1304b0;
        case 0x1304b4u: goto label_1304b4;
        case 0x1304b8u: goto label_1304b8;
        case 0x1304bcu: goto label_1304bc;
        case 0x1304c0u: goto label_1304c0;
        case 0x1304c4u: goto label_1304c4;
        case 0x1304c8u: goto label_1304c8;
        case 0x1304ccu: goto label_1304cc;
        case 0x1304d0u: goto label_1304d0;
        case 0x1304d4u: goto label_1304d4;
        case 0x1304d8u: goto label_1304d8;
        case 0x1304dcu: goto label_1304dc;
        case 0x1304e0u: goto label_1304e0;
        case 0x1304e4u: goto label_1304e4;
        case 0x1304e8u: goto label_1304e8;
        case 0x1304ecu: goto label_1304ec;
        case 0x1304f0u: goto label_1304f0;
        case 0x1304f4u: goto label_1304f4;
        case 0x1304f8u: goto label_1304f8;
        case 0x1304fcu: goto label_1304fc;
        case 0x130500u: goto label_130500;
        case 0x130504u: goto label_130504;
        case 0x130508u: goto label_130508;
        case 0x13050cu: goto label_13050c;
        case 0x130510u: goto label_130510;
        case 0x130514u: goto label_130514;
        case 0x130518u: goto label_130518;
        case 0x13051cu: goto label_13051c;
        case 0x130520u: goto label_130520;
        case 0x130524u: goto label_130524;
        case 0x130528u: goto label_130528;
        case 0x13052cu: goto label_13052c;
        case 0x130530u: goto label_130530;
        case 0x130534u: goto label_130534;
        case 0x130538u: goto label_130538;
        case 0x13053cu: goto label_13053c;
        case 0x130540u: goto label_130540;
        case 0x130544u: goto label_130544;
        case 0x130548u: goto label_130548;
        case 0x13054cu: goto label_13054c;
        case 0x130550u: goto label_130550;
        case 0x130554u: goto label_130554;
        case 0x130558u: goto label_130558;
        case 0x13055cu: goto label_13055c;
        case 0x130560u: goto label_130560;
        case 0x130564u: goto label_130564;
        case 0x130568u: goto label_130568;
        case 0x13056cu: goto label_13056c;
        case 0x130570u: goto label_130570;
        case 0x130574u: goto label_130574;
        case 0x130578u: goto label_130578;
        case 0x13057cu: goto label_13057c;
        case 0x130580u: goto label_130580;
        case 0x130584u: goto label_130584;
        case 0x130588u: goto label_130588;
        case 0x13058cu: goto label_13058c;
        case 0x130590u: goto label_130590;
        case 0x130594u: goto label_130594;
        case 0x130598u: goto label_130598;
        case 0x13059cu: goto label_13059c;
        case 0x1305a0u: goto label_1305a0;
        case 0x1305a4u: goto label_1305a4;
        case 0x1305a8u: goto label_1305a8;
        case 0x1305acu: goto label_1305ac;
        case 0x1305b0u: goto label_1305b0;
        case 0x1305b4u: goto label_1305b4;
        case 0x1305b8u: goto label_1305b8;
        case 0x1305bcu: goto label_1305bc;
        case 0x1305c0u: goto label_1305c0;
        case 0x1305c4u: goto label_1305c4;
        case 0x1305c8u: goto label_1305c8;
        case 0x1305ccu: goto label_1305cc;
        case 0x1305d0u: goto label_1305d0;
        case 0x1305d4u: goto label_1305d4;
        case 0x1305d8u: goto label_1305d8;
        case 0x1305dcu: goto label_1305dc;
        case 0x1305e0u: goto label_1305e0;
        case 0x1305e4u: goto label_1305e4;
        case 0x1305e8u: goto label_1305e8;
        case 0x1305ecu: goto label_1305ec;
        case 0x1305f0u: goto label_1305f0;
        case 0x1305f4u: goto label_1305f4;
        case 0x1305f8u: goto label_1305f8;
        case 0x1305fcu: goto label_1305fc;
        case 0x130600u: goto label_130600;
        case 0x130604u: goto label_130604;
        case 0x130608u: goto label_130608;
        case 0x13060cu: goto label_13060c;
        case 0x130610u: goto label_130610;
        case 0x130614u: goto label_130614;
        case 0x130618u: goto label_130618;
        case 0x13061cu: goto label_13061c;
        case 0x130620u: goto label_130620;
        case 0x130624u: goto label_130624;
        case 0x130628u: goto label_130628;
        case 0x13062cu: goto label_13062c;
        case 0x130630u: goto label_130630;
        case 0x130634u: goto label_130634;
        case 0x130638u: goto label_130638;
        case 0x13063cu: goto label_13063c;
        case 0x130640u: goto label_130640;
        case 0x130644u: goto label_130644;
        case 0x130648u: goto label_130648;
        case 0x13064cu: goto label_13064c;
        case 0x130650u: goto label_130650;
        case 0x130654u: goto label_130654;
        case 0x130658u: goto label_130658;
        case 0x13065cu: goto label_13065c;
        case 0x130660u: goto label_130660;
        case 0x130664u: goto label_130664;
        case 0x130668u: goto label_130668;
        case 0x13066cu: goto label_13066c;
        case 0x130670u: goto label_130670;
        case 0x130674u: goto label_130674;
        case 0x130678u: goto label_130678;
        case 0x13067cu: goto label_13067c;
        case 0x130680u: goto label_130680;
        case 0x130684u: goto label_130684;
        case 0x130688u: goto label_130688;
        case 0x13068cu: goto label_13068c;
        default: break;
    }

    ctx->pc = 0x12fdc0u;

label_12fdc0:
    // 0x12fdc0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x12fdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_12fdc4:
    // 0x12fdc4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x12fdc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_12fdc8:
    // 0x12fdc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12fdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_12fdcc:
    // 0x12fdcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12fdccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_12fdd0:
    // 0x12fdd0: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x12fdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
label_12fdd4:
    // 0x12fdd4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12fdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12fdd8:
    // 0x12fdd8: 0x24711330  addiu       $s1, $v1, 0x1330
    ctx->pc = 0x12fdd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_12fddc:
    // 0x12fddc: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x12fddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12fde0:
    // 0x12fde0: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x12fde0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_12fde4:
    // 0x12fde4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x12fde4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_12fde8:
    // 0x12fde8: 0x2c810008  sltiu       $at, $a0, 0x8
    ctx->pc = 0x12fde8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_12fdec:
    // 0x12fdec: 0x10200222  beqz        $at, . + 4 + (0x222 << 2)
label_12fdf0:
    if (ctx->pc == 0x12FDF0u) {
        ctx->pc = 0x12FDF4u;
        goto label_12fdf4;
    }
    ctx->pc = 0x12FDECu;
    {
        const bool branch_taken_0x12fdec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fdec) {
            ctx->pc = 0x130678u;
            goto label_130678;
        }
    }
    ctx->pc = 0x12FDF4u;
label_12fdf4:
    // 0x12fdf4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x12fdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_12fdf8:
    // 0x12fdf8: 0x2465e520  addiu       $a1, $v1, -0x1AE0
    ctx->pc = 0x12fdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960416));
label_12fdfc:
    // 0x12fdfc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x12fdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_12fe00:
    // 0x12fe00: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x12fe00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_12fe04:
    // 0x12fe04: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x12fe04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_12fe08:
    // 0x12fe08: 0x600008  jr          $v1
label_12fe0c:
    if (ctx->pc == 0x12FE0Cu) {
        ctx->pc = 0x12FE10u;
        goto label_12fe10;
    }
    ctx->pc = 0x12FE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FE08u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12FE10u;
label_12fe10:
    // 0x12fe10: 0xc067694  jal         func_19DA50
label_12fe14:
    if (ctx->pc == 0x12FE14u) {
        ctx->pc = 0x12FE18u;
        goto label_12fe18;
    }
    ctx->pc = 0x12FE10u;
    SET_GPR_U32(ctx, 31, 0x12FE18u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x12FE10u, 0x12FE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE18u;
label_12fe18:
    // 0x12fe18: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x12fe18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12fe1c:
    // 0x12fe1c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x12fe1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_12fe20:
    // 0x12fe20: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x12fe20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12fe24:
    // 0x12fe24: 0x10640022  beq         $v1, $a0, . + 4 + (0x22 << 2)
label_12fe28:
    if (ctx->pc == 0x12FE28u) {
        ctx->pc = 0x12FE2Cu;
        goto label_12fe2c;
    }
    ctx->pc = 0x12FE24u;
    {
        const bool branch_taken_0x12fe24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x12fe24) {
            ctx->pc = 0x12FEB0u;
            goto label_12feb0;
        }
    }
    ctx->pc = 0x12FE2Cu;
label_12fe2c:
    // 0x12fe2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12fe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12fe30:
    // 0x12fe30: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_12fe34:
    if (ctx->pc == 0x12FE34u) {
        ctx->pc = 0x12FE38u;
        goto label_12fe38;
    }
    ctx->pc = 0x12FE30u;
    {
        const bool branch_taken_0x12fe30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12fe30) {
            ctx->pc = 0x12FE80u;
            goto label_12fe80;
        }
    }
    ctx->pc = 0x12FE38u;
label_12fe38:
    // 0x12fe38: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_12fe3c:
    if (ctx->pc == 0x12FE3Cu) {
        ctx->pc = 0x12FE40u;
        goto label_12fe40;
    }
    ctx->pc = 0x12FE38u;
    {
        const bool branch_taken_0x12fe38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fe38) {
            ctx->pc = 0x12FE48u;
            goto label_12fe48;
        }
    }
    ctx->pc = 0x12FE40u;
label_12fe40:
    // 0x12fe40: 0x10000001  b           . + 4 + (0x1 << 2)
label_12fe44:
    if (ctx->pc == 0x12FE44u) {
        ctx->pc = 0x12FE48u;
        goto label_12fe48;
    }
    ctx->pc = 0x12FE40u;
    {
        const bool branch_taken_0x12fe40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fe40) {
            ctx->pc = 0x12FE48u;
            goto label_12fe48;
        }
    }
    ctx->pc = 0x12FE48u;
label_12fe48:
    // 0x12fe48: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12fe48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12fe4c:
    // 0x12fe4c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_12fe50:
    // 0x12fe50: 0x3c05469c  lui         $a1, 0x469C
    ctx->pc = 0x12fe50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18076 << 16));
label_12fe54:
    // 0x12fe54: 0x34a44000  ori         $a0, $a1, 0x4000
    ctx->pc = 0x12fe54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
label_12fe58:
    // 0x12fe58: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x12fe58u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12fe5c:
    // 0x12fe5c: 0x24060504  addiu       $a2, $zero, 0x504
    ctx->pc = 0x12fe5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
label_12fe60:
    // 0x12fe60: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x12fe60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_12fe64:
    // 0x12fe64: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x12fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_12fe68:
    // 0x12fe68: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x12fe68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12fe6c:
    // 0x12fe6c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12fe6cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12fe70:
    // 0x12fe70: 0xc067b18  jal         func_19EC60
label_12fe74:
    if (ctx->pc == 0x12FE74u) {
        ctx->pc = 0x12FE78u;
        goto label_12fe78;
    }
    ctx->pc = 0x12FE70u;
    SET_GPR_U32(ctx, 31, 0x12FE78u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12FE70u, 0x12FE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE78u;
label_12fe78:
    // 0x12fe78: 0x10000018  b           . + 4 + (0x18 << 2)
label_12fe7c:
    if (ctx->pc == 0x12FE7Cu) {
        ctx->pc = 0x12FE80u;
        goto label_12fe80;
    }
    ctx->pc = 0x12FE78u;
    {
        const bool branch_taken_0x12fe78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fe78) {
            ctx->pc = 0x12FEDCu;
            goto label_12fedc;
        }
    }
    ctx->pc = 0x12FE80u;
label_12fe80:
    // 0x12fe80: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12fe84:
    // 0x12fe84: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x12fe84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_12fe88:
    // 0x12fe88: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x12fe88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_12fe8c:
    // 0x12fe8c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x12fe8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_12fe90:
    // 0x12fe90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12fe90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12fe94:
    // 0x12fe94: 0x24040505  addiu       $a0, $zero, 0x505
    ctx->pc = 0x12fe94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1285));
label_12fe98:
    // 0x12fe98: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x12fe98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_12fe9c:
    // 0x12fe9c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12fe9cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12fea0:
    // 0x12fea0: 0xc067b18  jal         func_19EC60
label_12fea4:
    if (ctx->pc == 0x12FEA4u) {
        ctx->pc = 0x12FEA8u;
        goto label_12fea8;
    }
    ctx->pc = 0x12FEA0u;
    SET_GPR_U32(ctx, 31, 0x12FEA8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12FEA0u, 0x12FEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FEA8u;
label_12fea8:
    // 0x12fea8: 0x1000000c  b           . + 4 + (0xC << 2)
label_12feac:
    if (ctx->pc == 0x12FEACu) {
        ctx->pc = 0x12FEB0u;
        goto label_12feb0;
    }
    ctx->pc = 0x12FEA8u;
    {
        const bool branch_taken_0x12fea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fea8) {
            ctx->pc = 0x12FEDCu;
            goto label_12fedc;
        }
    }
    ctx->pc = 0x12FEB0u;
label_12feb0:
    // 0x12feb0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12feb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12feb4:
    // 0x12feb4: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x12feb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_12feb8:
    // 0x12feb8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x12feb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_12febc:
    // 0x12febc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x12febcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_12fec0:
    // 0x12fec0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12fec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12fec4:
    // 0x12fec4: 0x24040506  addiu       $a0, $zero, 0x506
    ctx->pc = 0x12fec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1286));
label_12fec8:
    // 0x12fec8: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x12fec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_12fecc:
    // 0x12fecc: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x12feccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_12fed0:
    // 0x12fed0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12fed0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12fed4:
    // 0x12fed4: 0xc067b18  jal         func_19EC60
label_12fed8:
    if (ctx->pc == 0x12FED8u) {
        ctx->pc = 0x12FEDCu;
        goto label_12fedc;
    }
    ctx->pc = 0x12FED4u;
    SET_GPR_U32(ctx, 31, 0x12FEDCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12FED4u, 0x12FEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FEDCu;
label_12fedc:
    // 0x12fedc: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x12fedcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_12fee0:
    // 0x12fee0: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x12fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_12fee4:
    // 0x12fee4: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x12fee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_12fee8:
    // 0x12fee8: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x12fee8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_12feec:
    // 0x12feec: 0x24100046  addiu       $s0, $zero, 0x46
    ctx->pc = 0x12feecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_12fef0:
    // 0x12fef0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12fef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12fef4:
    // 0x12fef4: 0x36063c00  ori         $a2, $s0, 0x3C00
    ctx->pc = 0x12fef4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)15360);
label_12fef8:
    // 0x12fef8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12fef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12fefc:
    // 0x12fefc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12fefcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_12ff00:
    // 0x12ff00: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12ff00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12ff04:
    // 0x12ff04: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12ff04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_12ff08:
    // 0x12ff08: 0xc0965d0  jal         func_259740
label_12ff0c:
    if (ctx->pc == 0x12FF0Cu) {
        ctx->pc = 0x12FF10u;
        goto label_12ff10;
    }
    ctx->pc = 0x12FF08u;
    SET_GPR_U32(ctx, 31, 0x12FF10u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12FF08u, 0x12FF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FF10u;
label_12ff10:
    // 0x12ff10: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12ff10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12ff14:
    // 0x12ff14: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x12ff14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_12ff18:
    // 0x12ff18: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x12ff18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_12ff1c:
    // 0x12ff1c: 0xa0860002  sb          $a2, 0x2($a0)
    ctx->pc = 0x12ff1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 6));
label_12ff20:
    // 0x12ff20: 0x3c073cc9  lui         $a3, 0x3CC9
    ctx->pc = 0x12ff20u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15561 << 16));
label_12ff24:
    // 0x12ff24: 0x34e20fdb  ori         $v0, $a3, 0xFDB
    ctx->pc = 0x12ff24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4059);
label_12ff28:
    // 0x12ff28: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x12ff28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_12ff2c:
    // 0x12ff2c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12ff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12ff30:
    // 0x12ff30: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x12ff30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12ff34:
    // 0x12ff34: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12ff34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12ff38:
    // 0x12ff38: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x12ff38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_12ff3c:
    // 0x12ff3c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x12ff3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12ff40:
    // 0x12ff40: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x12ff40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
label_12ff44:
    // 0x12ff44: 0xc05c848  jal         func_172120
label_12ff48:
    if (ctx->pc == 0x12FF48u) {
        ctx->pc = 0x12FF4Cu;
        goto label_12ff4c;
    }
    ctx->pc = 0x12FF44u;
    SET_GPR_U32(ctx, 31, 0x12FF4Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x12FF44u, 0x12FF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FF4Cu;
label_12ff4c:
    // 0x12ff4c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x12ff4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_12ff50:
    // 0x12ff50: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12ff54:
    // 0x12ff54: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x12ff54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12ff58:
    // 0x12ff58: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x12ff58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ff5c:
    // 0x12ff5c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x12ff5cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_12ff60:
    // 0x12ff60: 0xc058fec  jal         func_163FB0
label_12ff64:
    if (ctx->pc == 0x12FF64u) {
        ctx->pc = 0x12FF68u;
        goto label_12ff68;
    }
    ctx->pc = 0x12FF60u;
    SET_GPR_U32(ctx, 31, 0x12FF68u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x12FF60u, 0x12FF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FF68u;
label_12ff68:
    // 0x12ff68: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12ff68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12ff6c:
    // 0x12ff6c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12ff6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_12ff70:
    // 0x12ff70: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12ff70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12ff74:
    // 0x12ff74: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12ff74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12ff78:
    // 0x12ff78: 0xc096b40  jal         func_25AD00
label_12ff7c:
    if (ctx->pc == 0x12FF7Cu) {
        ctx->pc = 0x12FF80u;
        goto label_12ff80;
    }
    ctx->pc = 0x12FF78u;
    SET_GPR_U32(ctx, 31, 0x12FF80u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12FF78u, 0x12FF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FF80u;
label_12ff80:
    // 0x12ff80: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12ff80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12ff84:
    // 0x12ff84: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x12ff84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_12ff88:
    // 0x12ff88: 0xc0675a4  jal         func_19D690
label_12ff8c:
    if (ctx->pc == 0x12FF8Cu) {
        ctx->pc = 0x12FF90u;
        goto label_12ff90;
    }
    ctx->pc = 0x12FF88u;
    SET_GPR_U32(ctx, 31, 0x12FF90u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12FF88u, 0x12FF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FF90u;
label_12ff90:
    // 0x12ff90: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12ff90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12ff94:
    // 0x12ff94: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x12ff94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_12ff98:
    // 0x12ff98: 0xc05cd10  jal         func_173440
label_12ff9c:
    if (ctx->pc == 0x12FF9Cu) {
        ctx->pc = 0x12FFA0u;
        goto label_12ffa0;
    }
    ctx->pc = 0x12FF98u;
    SET_GPR_U32(ctx, 31, 0x12FFA0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12FF98u, 0x12FFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FFA0u;
label_12ffa0:
    // 0x12ffa0: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x12ffa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12ffa4:
    // 0x12ffa4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12ffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_12ffa8:
    // 0x12ffa8: 0x24e50120  addiu       $a1, $a3, 0x120
    ctx->pc = 0x12ffa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
label_12ffac:
    // 0x12ffac: 0xc040c9e  jal         func_103278
label_12ffb0:
    if (ctx->pc == 0x12FFB0u) {
        ctx->pc = 0x12FFB4u;
        goto label_12ffb4;
    }
    ctx->pc = 0x12FFACu;
    SET_GPR_U32(ctx, 31, 0x12FFB4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x12FFB4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12FFB4u) { return; }
    ctx->pc = 0x12FFB4u;
label_12ffb4:
    // 0x12ffb4: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12ffb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12ffb8:
    // 0x12ffb8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12ffb8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12ffbc:
    // 0x12ffbc: 0xc05cec4  jal         func_173B10
label_12ffc0:
    if (ctx->pc == 0x12FFC0u) {
        ctx->pc = 0x12FFC4u;
        goto label_12ffc4;
    }
    ctx->pc = 0x12FFBCu;
    SET_GPR_U32(ctx, 31, 0x12FFC4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12FFBCu, 0x12FFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FFC4u;
label_12ffc4:
    // 0x12ffc4: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12ffc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12ffc8:
    // 0x12ffc8: 0xc0974dc  jal         func_25D370
label_12ffcc:
    if (ctx->pc == 0x12FFCCu) {
        ctx->pc = 0x12FFD0u;
        goto label_12ffd0;
    }
    ctx->pc = 0x12FFC8u;
    SET_GPR_U32(ctx, 31, 0x12FFD0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12FFC8u, 0x12FFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FFD0u;
label_12ffd0:
    // 0x12ffd0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12ffd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12ffd4:
    // 0x12ffd4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12ffd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_12ffd8:
    // 0x12ffd8: 0x106001a7  beqz        $v1, . + 4 + (0x1A7 << 2)
label_12ffdc:
    if (ctx->pc == 0x12FFDCu) {
        ctx->pc = 0x12FFE0u;
        goto label_12ffe0;
    }
    ctx->pc = 0x12FFD8u;
    {
        const bool branch_taken_0x12ffd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ffd8) {
            ctx->pc = 0x130678u;
            goto label_130678;
        }
    }
    ctx->pc = 0x12FFE0u;
label_12ffe0:
    // 0x12ffe0: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x12ffe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12ffe4:
    // 0x12ffe4: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x12ffe4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_12ffe8:
    // 0x12ffe8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x12ffe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_12ffec:
    // 0x12ffec: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x12ffecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_12fff0:
    // 0x12fff0: 0x100001a1  b           . + 4 + (0x1A1 << 2)
label_12fff4:
    if (ctx->pc == 0x12FFF4u) {
        ctx->pc = 0x12FFF8u;
        goto label_12fff8;
    }
    ctx->pc = 0x12FFF0u;
    {
        const bool branch_taken_0x12fff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fff0) {
            ctx->pc = 0x130678u;
            goto label_130678;
        }
    }
    ctx->pc = 0x12FFF8u;
label_12fff8:
    // 0x12fff8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12fff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12fffc:
    // 0x12fffc: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x12fffcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_130000:
    // 0x130000: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x130000u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_130004:
    // 0x130004: 0x3085f000  andi        $a1, $a0, 0xF000
    ctx->pc = 0x130004u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
label_130008:
    // 0x130008: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x130008u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_13000c:
    // 0x13000c: 0x14a60004  bne         $a1, $a2, . + 4 + (0x4 << 2)
label_130010:
    if (ctx->pc == 0x130010u) {
        ctx->pc = 0x130014u;
        goto label_130014;
    }
    ctx->pc = 0x13000Cu;
    {
        const bool branch_taken_0x13000c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x13000c) {
            ctx->pc = 0x130020u;
            goto label_130020;
        }
    }
    ctx->pc = 0x130014u;
label_130014:
    // 0x130014: 0x24100044  addiu       $s0, $zero, 0x44
    ctx->pc = 0x130014u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_130018:
    // 0x130018: 0x10000002  b           . + 4 + (0x2 << 2)
label_13001c:
    if (ctx->pc == 0x13001Cu) {
        ctx->pc = 0x130020u;
        goto label_130020;
    }
    ctx->pc = 0x130018u;
    {
        const bool branch_taken_0x130018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130018) {
            ctx->pc = 0x130024u;
            goto label_130024;
        }
    }
    ctx->pc = 0x130020u;
label_130020:
    // 0x130020: 0x24100043  addiu       $s0, $zero, 0x43
    ctx->pc = 0x130020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_130024:
    // 0x130024: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x130024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130028:
    // 0x130028: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x130028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_13002c:
    // 0x13002c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x13002cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_130030:
    // 0x130030: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x130030u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_130034:
    // 0x130034: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x130034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_130038:
    // 0x130038: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x130038u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_13003c:
    // 0x13003c: 0xc0965d0  jal         func_259740
label_130040:
    if (ctx->pc == 0x130040u) {
        ctx->pc = 0x130044u;
        goto label_130044;
    }
    ctx->pc = 0x13003Cu;
    SET_GPR_U32(ctx, 31, 0x130044u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x13003Cu, 0x130044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130044u;
label_130044:
    // 0x130044: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x130044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_130048:
    // 0x130048: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x130048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_13004c:
    // 0x13004c: 0xa4441278  sh          $a0, 0x1278($v0)
    ctx->pc = 0x13004cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 4));
label_130050:
    // 0x130050: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x130050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130054:
    // 0x130054: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x130054u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_130058:
    // 0x130058: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x130058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_13005c:
    // 0x13005c: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x13005cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
label_130060:
    // 0x130060: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x130060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
label_130064:
    // 0x130064: 0x34620fdb  ori         $v0, $v1, 0xFDB
    ctx->pc = 0x130064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_130068:
    // 0x130068: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x130068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_13006c:
    // 0x13006c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x13006cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130070:
    // 0x130070: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x130070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130074:
    // 0x130074: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x130074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130078:
    // 0x130078: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x130078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_13007c:
    // 0x13007c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x13007cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_130080:
    // 0x130080: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x130080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
label_130084:
    // 0x130084: 0xc05c848  jal         func_172120
label_130088:
    if (ctx->pc == 0x130088u) {
        ctx->pc = 0x13008Cu;
        goto label_13008c;
    }
    ctx->pc = 0x130084u;
    SET_GPR_U32(ctx, 31, 0x13008Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x130084u, 0x13008Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13008Cu;
label_13008c:
    // 0x13008c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x13008cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_130090:
    // 0x130090: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x130090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130094:
    // 0x130094: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x130094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_130098:
    // 0x130098: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x130098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13009c:
    // 0x13009c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x13009cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1300a0:
    // 0x1300a0: 0xc058fec  jal         func_163FB0
label_1300a4:
    if (ctx->pc == 0x1300A4u) {
        ctx->pc = 0x1300A8u;
        goto label_1300a8;
    }
    ctx->pc = 0x1300A0u;
    SET_GPR_U32(ctx, 31, 0x1300A8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1300A0u, 0x1300A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300A8u;
label_1300a8:
    // 0x1300a8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1300a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1300ac:
    // 0x1300ac: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x1300acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_1300b0:
    // 0x1300b0: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1300b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1300b4:
    // 0x1300b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1300b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1300b8:
    // 0x1300b8: 0xc096b40  jal         func_25AD00
label_1300bc:
    if (ctx->pc == 0x1300BCu) {
        ctx->pc = 0x1300C0u;
        goto label_1300c0;
    }
    ctx->pc = 0x1300B8u;
    SET_GPR_U32(ctx, 31, 0x1300C0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1300B8u, 0x1300C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300C0u;
label_1300c0:
    // 0x1300c0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1300c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1300c4:
    // 0x1300c4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1300c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1300c8:
    // 0x1300c8: 0xc4610180  lwc1        $f1, 0x180($v1)
    ctx->pc = 0x1300c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1300cc:
    // 0x1300cc: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x1300ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1300d0:
    // 0x1300d0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1300d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1300d4:
    // 0x1300d4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1300d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1300d8:
    // 0x1300d8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1300d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1300dc:
    // 0x1300dc: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x1300dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1300e0:
    // 0x1300e0: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x1300e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1300e4:
    // 0x1300e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1300e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1300e8:
    // 0x1300e8: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1300e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1300ec:
    // 0x1300ec: 0xc06757c  jal         func_19D5F0
label_1300f0:
    if (ctx->pc == 0x1300F0u) {
        ctx->pc = 0x1300F4u;
        goto label_1300f4;
    }
    ctx->pc = 0x1300ECu;
    SET_GPR_U32(ctx, 31, 0x1300F4u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1300ECu, 0x1300F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300F4u;
label_1300f4:
    // 0x1300f4: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1300f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1300f8:
    // 0x1300f8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1300f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1300fc:
    // 0x1300fc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1300fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_130100:
    // 0x130100: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x130100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_130104:
    // 0x130104: 0xc040c9e  jal         func_103278
label_130108:
    if (ctx->pc == 0x130108u) {
        ctx->pc = 0x13010Cu;
        goto label_13010c;
    }
    ctx->pc = 0x130104u;
    SET_GPR_U32(ctx, 31, 0x13010Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13010Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13010Cu) { return; }
    ctx->pc = 0x13010Cu;
label_13010c:
    // 0x13010c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x13010cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130110:
    // 0x130110: 0xc05cd10  jal         func_173440
label_130114:
    if (ctx->pc == 0x130114u) {
        ctx->pc = 0x130118u;
        goto label_130118;
    }
    ctx->pc = 0x130110u;
    SET_GPR_U32(ctx, 31, 0x130118u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x130110u, 0x130118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130118u;
label_130118:
    // 0x130118: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x130118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_13011c:
    // 0x13011c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x13011cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_130120:
    // 0x130120: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x130120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_130124:
    // 0x130124: 0xc040c9e  jal         func_103278
label_130128:
    if (ctx->pc == 0x130128u) {
        ctx->pc = 0x13012Cu;
        goto label_13012c;
    }
    ctx->pc = 0x130124u;
    SET_GPR_U32(ctx, 31, 0x13012Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13012Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13012Cu) { return; }
    ctx->pc = 0x13012Cu;
label_13012c:
    // 0x13012c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x13012cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130130:
    // 0x130130: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x130130u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_130134:
    // 0x130134: 0xc05cec4  jal         func_173B10
label_130138:
    if (ctx->pc == 0x130138u) {
        ctx->pc = 0x13013Cu;
        goto label_13013c;
    }
    ctx->pc = 0x130134u;
    SET_GPR_U32(ctx, 31, 0x13013Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x130134u, 0x13013Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13013Cu;
label_13013c:
    // 0x13013c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x13013cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130140:
    // 0x130140: 0xc0974dc  jal         func_25D370
label_130144:
    if (ctx->pc == 0x130144u) {
        ctx->pc = 0x130148u;
        goto label_130148;
    }
    ctx->pc = 0x130140u;
    SET_GPR_U32(ctx, 31, 0x130148u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x130140u, 0x130148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130148u;
label_130148:
    // 0x130148: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x130148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_13014c:
    // 0x13014c: 0xc0675a4  jal         func_19D690
label_130150:
    if (ctx->pc == 0x130150u) {
        ctx->pc = 0x130154u;
        goto label_130154;
    }
    ctx->pc = 0x13014Cu;
    SET_GPR_U32(ctx, 31, 0x130154u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x13014Cu, 0x130154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130154u;
label_130154:
    // 0x130154: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x130154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130158:
    // 0x130158: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x130158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_13015c:
    // 0x13015c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x13015cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130160:
    // 0x130160: 0x24450540  addiu       $a1, $v0, 0x540
    ctx->pc = 0x130160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_130164:
    // 0x130164: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x130164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_130168:
    // 0x130168: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x130168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_13016c:
    // 0x13016c: 0x24478d80  addiu       $a3, $v0, -0x7280
    ctx->pc = 0x13016cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937984));
label_130170:
    // 0x130170: 0xc06d02c  jal         func_1B40B0
label_130174:
    if (ctx->pc == 0x130174u) {
        ctx->pc = 0x130178u;
        goto label_130178;
    }
    ctx->pc = 0x130170u;
    SET_GPR_U32(ctx, 31, 0x130178u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x130170u, 0x130178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130178u;
label_130178:
    // 0x130178: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_13017c:
    if (ctx->pc == 0x13017Cu) {
        ctx->pc = 0x130180u;
        goto label_130180;
    }
    ctx->pc = 0x130178u;
    {
        const bool branch_taken_0x130178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130178) {
            ctx->pc = 0x130200u;
            goto label_130200;
        }
    }
    ctx->pc = 0x130180u;
label_130180:
    // 0x130180: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x130180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_130184:
    // 0x130184: 0xc0675a4  jal         func_19D690
label_130188:
    if (ctx->pc == 0x130188u) {
        ctx->pc = 0x13018Cu;
        goto label_13018c;
    }
    ctx->pc = 0x130184u;
    SET_GPR_U32(ctx, 31, 0x13018Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x130184u, 0x13018Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13018Cu;
label_13018c:
    // 0x13018c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13018cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130190:
    // 0x130190: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x130190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_130194:
    // 0x130194: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x130194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_130198:
    // 0x130198: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x130198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_13019c:
    // 0x13019c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x13019cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_1301a0:
    // 0x1301a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1301a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1301a4:
    // 0x1301a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1301a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1301a8:
    // 0x1301a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1301a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1301ac:
    // 0x1301ac: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x1301acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
label_1301b0:
    // 0x1301b0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1301b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1301b4:
    // 0x1301b4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1301b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_1301b8:
    // 0x1301b8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1301b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1301bc:
    // 0x1301bc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1301bcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1301c0:
    // 0x1301c0: 0x24470540  addiu       $a3, $v0, 0x540
    ctx->pc = 0x1301c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1301c4:
    // 0x1301c4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1301c4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1301c8:
    // 0x1301c8: 0xc06371c  jal         func_18DC70
label_1301cc:
    if (ctx->pc == 0x1301CCu) {
        ctx->pc = 0x1301D0u;
        goto label_1301d0;
    }
    ctx->pc = 0x1301C8u;
    SET_GPR_U32(ctx, 31, 0x1301D0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1301C8u, 0x1301D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1301D0u;
label_1301d0:
    // 0x1301d0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1301d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1301d4:
    // 0x1301d4: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x1301d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_1301d8:
    // 0x1301d8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1301d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1301dc:
    // 0x1301dc: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1301dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_1301e0:
    // 0x1301e0: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1301e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_1301e4:
    // 0x1301e4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1301e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1301e8:
    // 0x1301e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1301e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1301ec:
    // 0x1301ec: 0x24040515  addiu       $a0, $zero, 0x515
    ctx->pc = 0x1301ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1301));
label_1301f0:
    // 0x1301f0: 0x24650570  addiu       $a1, $v1, 0x570
    ctx->pc = 0x1301f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1392));
label_1301f4:
    // 0x1301f4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1301f4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1301f8:
    // 0x1301f8: 0xc067b18  jal         func_19EC60
label_1301fc:
    if (ctx->pc == 0x1301FCu) {
        ctx->pc = 0x130200u;
        goto label_130200;
    }
    ctx->pc = 0x1301F8u;
    SET_GPR_U32(ctx, 31, 0x130200u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1301F8u, 0x130200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130200u;
label_130200:
    // 0x130200: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x130200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130204:
    // 0x130204: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x130204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_130208:
    // 0x130208: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x130208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_13020c:
    // 0x13020c: 0x24450580  addiu       $a1, $v0, 0x580
    ctx->pc = 0x13020cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
label_130210:
    // 0x130210: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x130210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_130214:
    // 0x130214: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x130214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_130218:
    // 0x130218: 0x24478d8c  addiu       $a3, $v0, -0x7274
    ctx->pc = 0x130218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937996));
label_13021c:
    // 0x13021c: 0xc06d02c  jal         func_1B40B0
label_130220:
    if (ctx->pc == 0x130220u) {
        ctx->pc = 0x130224u;
        goto label_130224;
    }
    ctx->pc = 0x13021Cu;
    SET_GPR_U32(ctx, 31, 0x130224u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x13021Cu, 0x130224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130224u;
label_130224:
    // 0x130224: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_130228:
    if (ctx->pc == 0x130228u) {
        ctx->pc = 0x13022Cu;
        goto label_13022c;
    }
    ctx->pc = 0x130224u;
    {
        const bool branch_taken_0x130224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130224) {
            ctx->pc = 0x1302ACu;
            goto label_1302ac;
        }
    }
    ctx->pc = 0x13022Cu;
label_13022c:
    // 0x13022c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x13022cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_130230:
    // 0x130230: 0xc0675a4  jal         func_19D690
label_130234:
    if (ctx->pc == 0x130234u) {
        ctx->pc = 0x130238u;
        goto label_130238;
    }
    ctx->pc = 0x130230u;
    SET_GPR_U32(ctx, 31, 0x130238u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x130230u, 0x130238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130238u;
label_130238:
    // 0x130238: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x130238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_13023c:
    // 0x13023c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x13023cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_130240:
    // 0x130240: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x130240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_130244:
    // 0x130244: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x130244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_130248:
    // 0x130248: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x130248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_13024c:
    // 0x13024c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13024cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_130250:
    // 0x130250: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x130250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_130254:
    // 0x130254: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x130254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_130258:
    // 0x130258: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x130258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
label_13025c:
    // 0x13025c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13025cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130260:
    // 0x130260: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x130260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_130264:
    // 0x130264: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x130264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_130268:
    // 0x130268: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x130268u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_13026c:
    // 0x13026c: 0x24470580  addiu       $a3, $v0, 0x580
    ctx->pc = 0x13026cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
label_130270:
    // 0x130270: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x130270u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_130274:
    // 0x130274: 0xc06371c  jal         func_18DC70
label_130278:
    if (ctx->pc == 0x130278u) {
        ctx->pc = 0x13027Cu;
        goto label_13027c;
    }
    ctx->pc = 0x130274u;
    SET_GPR_U32(ctx, 31, 0x13027Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x130274u, 0x13027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13027Cu;
label_13027c:
    // 0x13027c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13027cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130280:
    // 0x130280: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x130280u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_130284:
    // 0x130284: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x130284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_130288:
    // 0x130288: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x130288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_13028c:
    // 0x13028c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13028cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_130290:
    // 0x130290: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x130290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130294:
    // 0x130294: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x130294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_130298:
    // 0x130298: 0x24040515  addiu       $a0, $zero, 0x515
    ctx->pc = 0x130298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1301));
label_13029c:
    // 0x13029c: 0x244505b0  addiu       $a1, $v0, 0x5B0
    ctx->pc = 0x13029cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1456));
label_1302a0:
    // 0x1302a0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1302a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1302a4:
    // 0x1302a4: 0xc067b18  jal         func_19EC60
label_1302a8:
    if (ctx->pc == 0x1302A8u) {
        ctx->pc = 0x1302ACu;
        goto label_1302ac;
    }
    ctx->pc = 0x1302A4u;
    SET_GPR_U32(ctx, 31, 0x1302ACu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1302A4u, 0x1302ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1302ACu;
label_1302ac:
    // 0x1302ac: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1302acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1302b0:
    // 0x1302b0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1302b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1302b4:
    // 0x1302b4: 0x106000f0  beqz        $v1, . + 4 + (0xF0 << 2)
label_1302b8:
    if (ctx->pc == 0x1302B8u) {
        ctx->pc = 0x1302BCu;
        goto label_1302bc;
    }
    ctx->pc = 0x1302B4u;
    {
        const bool branch_taken_0x1302b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1302b4) {
            ctx->pc = 0x130678u;
            goto label_130678;
        }
    }
    ctx->pc = 0x1302BCu;
label_1302bc:
    // 0x1302bc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1302bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1302c0:
    // 0x1302c0: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x1302c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_1302c4:
    // 0x1302c4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1302c8:
    if (ctx->pc == 0x1302C8u) {
        ctx->pc = 0x1302CCu;
        goto label_1302cc;
    }
    ctx->pc = 0x1302C4u;
    {
        const bool branch_taken_0x1302c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1302c4) {
            ctx->pc = 0x1302E4u;
            goto label_1302e4;
        }
    }
    ctx->pc = 0x1302CCu;
label_1302cc:
    // 0x1302cc: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1302ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1302d0:
    // 0x1302d0: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x1302d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_1302d4:
    // 0x1302d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1302d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1302d8:
    // 0x1302d8: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x1302d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_1302dc:
    // 0x1302dc: 0x100000e6  b           . + 4 + (0xE6 << 2)
label_1302e0:
    if (ctx->pc == 0x1302E0u) {
        ctx->pc = 0x1302E4u;
        goto label_1302e4;
    }
    ctx->pc = 0x1302DCu;
    {
        const bool branch_taken_0x1302dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1302dc) {
            ctx->pc = 0x130678u;
            goto label_130678;
        }
    }
    ctx->pc = 0x1302E4u;
label_1302e4:
    // 0x1302e4: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1302e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1302e8:
    // 0x1302e8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1302e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1302ec:
    // 0x1302ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1302ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1302f0:
    // 0x1302f0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1302f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1302f4:
    // 0x1302f4: 0x100000e0  b           . + 4 + (0xE0 << 2)
label_1302f8:
    if (ctx->pc == 0x1302F8u) {
        ctx->pc = 0x1302FCu;
        goto label_1302fc;
    }
    ctx->pc = 0x1302F4u;
    {
        const bool branch_taken_0x1302f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1302f4) {
            ctx->pc = 0x130678u;
            goto label_130678;
        }
    }
    ctx->pc = 0x1302FCu;
label_1302fc:
    // 0x1302fc: 0x24100047  addiu       $s0, $zero, 0x47
    ctx->pc = 0x1302fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_130300:
    // 0x130300: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x130300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130304:
    // 0x130304: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x130304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130308:
    // 0x130308: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x130308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_13030c:
    // 0x13030c: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x13030cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_130310:
    // 0x130310: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x130310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_130314:
    // 0x130314: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x130314u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_130318:
    // 0x130318: 0xc0965d0  jal         func_259740
label_13031c:
    if (ctx->pc == 0x13031Cu) {
        ctx->pc = 0x130320u;
        goto label_130320;
    }
    ctx->pc = 0x130318u;
    SET_GPR_U32(ctx, 31, 0x130320u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x130318u, 0x130320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130320u;
label_130320:
    // 0x130320: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x130320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_130324:
    // 0x130324: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x130324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130328:
    // 0x130328: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x130328u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_13032c:
    // 0x13032c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x13032cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130330:
    // 0x130330: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x130330u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_130334:
    // 0x130334: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x130334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_130338:
    // 0x130338: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x130338u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_13033c:
    // 0x13033c: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x13033cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
label_130340:
    // 0x130340: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_130344:
    // 0x130344: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x130344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_130348:
    // 0x130348: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x130348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_13034c:
    // 0x13034c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x13034cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130350:
    // 0x130350: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x130350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130354:
    // 0x130354: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x130354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_130358:
    // 0x130358: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x130358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13035c:
    // 0x13035c: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x13035cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
label_130360:
    // 0x130360: 0xc05c848  jal         func_172120
label_130364:
    if (ctx->pc == 0x130364u) {
        ctx->pc = 0x130368u;
        goto label_130368;
    }
    ctx->pc = 0x130360u;
    SET_GPR_U32(ctx, 31, 0x130368u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x130360u, 0x130368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130368u;
label_130368:
    // 0x130368: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x130368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_13036c:
    // 0x13036c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13036cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130370:
    // 0x130370: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x130370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_130374:
    // 0x130374: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x130374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_130378:
    // 0x130378: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x130378u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_13037c:
    // 0x13037c: 0xc058fec  jal         func_163FB0
label_130380:
    if (ctx->pc == 0x130380u) {
        ctx->pc = 0x130384u;
        goto label_130384;
    }
    ctx->pc = 0x13037Cu;
    SET_GPR_U32(ctx, 31, 0x130384u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x13037Cu, 0x130384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130384u;
label_130384:
    // 0x130384: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x130384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130388:
    // 0x130388: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x130388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_13038c:
    // 0x13038c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x13038cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130390:
    // 0x130390: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x130390u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_130394:
    // 0x130394: 0xc096b40  jal         func_25AD00
label_130398:
    if (ctx->pc == 0x130398u) {
        ctx->pc = 0x13039Cu;
        goto label_13039c;
    }
    ctx->pc = 0x130394u;
    SET_GPR_U32(ctx, 31, 0x13039Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x130394u, 0x13039Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13039Cu;
label_13039c:
    // 0x13039c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x13039cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1303a0:
    // 0x1303a0: 0xc05cd10  jal         func_173440
label_1303a4:
    if (ctx->pc == 0x1303A4u) {
        ctx->pc = 0x1303A8u;
        goto label_1303a8;
    }
    ctx->pc = 0x1303A0u;
    SET_GPR_U32(ctx, 31, 0x1303A8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1303A0u, 0x1303A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1303A8u;
label_1303a8:
    // 0x1303a8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1303a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1303ac:
    // 0x1303ac: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x1303acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1303b0:
    // 0x1303b0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1303b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1303b4:
    // 0x1303b4: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1303b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1303b8:
    // 0x1303b8: 0xc040c9e  jal         func_103278
label_1303bc:
    if (ctx->pc == 0x1303BCu) {
        ctx->pc = 0x1303C0u;
        goto label_1303c0;
    }
    ctx->pc = 0x1303B8u;
    SET_GPR_U32(ctx, 31, 0x1303C0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1303C0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1303C0u) { return; }
    ctx->pc = 0x1303C0u;
label_1303c0:
    // 0x1303c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1303c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1303c4:
    // 0x1303c4: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1303c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1303c8:
    // 0x1303c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1303c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1303cc:
    // 0x1303cc: 0xc05cec4  jal         func_173B10
label_1303d0:
    if (ctx->pc == 0x1303D0u) {
        ctx->pc = 0x1303D4u;
        goto label_1303d4;
    }
    ctx->pc = 0x1303CCu;
    SET_GPR_U32(ctx, 31, 0x1303D4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1303CCu, 0x1303D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1303D4u;
label_1303d4:
    // 0x1303d4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1303d4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1303d8:
    // 0x1303d8: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x1303d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1303dc:
    // 0x1303dc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1303dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1303e0:
    // 0x1303e0: 0xc0974dc  jal         func_25D370
label_1303e4:
    if (ctx->pc == 0x1303E4u) {
        ctx->pc = 0x1303E8u;
        goto label_1303e8;
    }
    ctx->pc = 0x1303E0u;
    SET_GPR_U32(ctx, 31, 0x1303E8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1303E0u, 0x1303E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1303E8u;
label_1303e8:
    // 0x1303e8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1303e8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1303ec:
    // 0x1303ec: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1303ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1303f0:
    // 0x1303f0: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x1303f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_1303f4:
    // 0x1303f4: 0x10600065  beqz        $v1, . + 4 + (0x65 << 2)
label_1303f8:
    if (ctx->pc == 0x1303F8u) {
        ctx->pc = 0x1303FCu;
        goto label_1303fc;
    }
    ctx->pc = 0x1303F4u;
    {
        const bool branch_taken_0x1303f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1303f4) {
            ctx->pc = 0x13058Cu;
            goto label_13058c;
        }
    }
    ctx->pc = 0x1303FCu;
label_1303fc:
    // 0x1303fc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1303fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130400:
    // 0x130400: 0x84431278  lh          $v1, 0x1278($v0)
    ctx->pc = 0x130400u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
label_130404:
    // 0x130404: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x130404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_130408:
    // 0x130408: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x130408u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_13040c:
    // 0x13040c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x13040cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_130410:
    // 0x130410: 0xc0675a4  jal         func_19D690
label_130414:
    if (ctx->pc == 0x130414u) {
        ctx->pc = 0x130418u;
        goto label_130418;
    }
    ctx->pc = 0x130410u;
    SET_GPR_U32(ctx, 31, 0x130418u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x130410u, 0x130418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130418u;
label_130418:
    // 0x130418: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x130418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_13041c:
    // 0x13041c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x13041cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_130420:
    // 0x130420: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x130420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130424:
    // 0x130424: 0x24450540  addiu       $a1, $v0, 0x540
    ctx->pc = 0x130424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_130428:
    // 0x130428: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x130428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_13042c:
    // 0x13042c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x13042cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_130430:
    // 0x130430: 0x24428d80  addiu       $v0, $v0, -0x7280
    ctx->pc = 0x130430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937984));
label_130434:
    // 0x130434: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x130434u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_130438:
    // 0x130438: 0xc06d02c  jal         func_1B40B0
label_13043c:
    if (ctx->pc == 0x13043Cu) {
        ctx->pc = 0x130440u;
        goto label_130440;
    }
    ctx->pc = 0x130438u;
    SET_GPR_U32(ctx, 31, 0x130440u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x130438u, 0x130440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130440u;
label_130440:
    // 0x130440: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_130444:
    if (ctx->pc == 0x130444u) {
        ctx->pc = 0x130448u;
        goto label_130448;
    }
    ctx->pc = 0x130440u;
    {
        const bool branch_taken_0x130440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130440) {
            ctx->pc = 0x1304D0u;
            goto label_1304d0;
        }
    }
    ctx->pc = 0x130448u;
label_130448:
    // 0x130448: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x130448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_13044c:
    // 0x13044c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x13044cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_130450:
    // 0x130450: 0xc0675a4  jal         func_19D690
label_130454:
    if (ctx->pc == 0x130454u) {
        ctx->pc = 0x130458u;
        goto label_130458;
    }
    ctx->pc = 0x130450u;
    SET_GPR_U32(ctx, 31, 0x130458u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x130450u, 0x130458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130458u;
label_130458:
    // 0x130458: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x130458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_13045c:
    // 0x13045c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x13045cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_130460:
    // 0x130460: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x130460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_130464:
    // 0x130464: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x130464u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_130468:
    // 0x130468: 0x51438  dsll        $v0, $a1, 16
    ctx->pc = 0x130468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 16);
label_13046c:
    // 0x13046c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13046cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_130470:
    // 0x130470: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x130470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_130474:
    // 0x130474: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x130474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_130478:
    // 0x130478: 0x34420106  ori         $v0, $v0, 0x106
    ctx->pc = 0x130478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
label_13047c:
    // 0x13047c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x13047cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130480:
    // 0x130480: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x130480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_130484:
    // 0x130484: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x130484u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_130488:
    // 0x130488: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x130488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_13048c:
    // 0x13048c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x13048cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_130490:
    // 0x130490: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x130490u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_130494:
    // 0x130494: 0x24670540  addiu       $a3, $v1, 0x540
    ctx->pc = 0x130494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1344));
label_130498:
    // 0x130498: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x130498u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_13049c:
    // 0x13049c: 0xc06371c  jal         func_18DC70
label_1304a0:
    if (ctx->pc == 0x1304A0u) {
        ctx->pc = 0x1304A4u;
        goto label_1304a4;
    }
    ctx->pc = 0x13049Cu;
    SET_GPR_U32(ctx, 31, 0x1304A4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x13049Cu, 0x1304A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1304A4u;
label_1304a4:
    // 0x1304a4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1304a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1304a8:
    // 0x1304a8: 0x8c500130  lw          $s0, 0x130($v0)
    ctx->pc = 0x1304a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_1304ac:
    // 0x1304ac: 0x3c06469c  lui         $a2, 0x469C
    ctx->pc = 0x1304acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18076 << 16));
label_1304b0:
    // 0x1304b0: 0x34c24000  ori         $v0, $a2, 0x4000
    ctx->pc = 0x1304b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
label_1304b4:
    // 0x1304b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1304b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1304b8:
    // 0x1304b8: 0x24040515  addiu       $a0, $zero, 0x515
    ctx->pc = 0x1304b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1301));
label_1304bc:
    // 0x1304bc: 0x26050570  addiu       $a1, $s0, 0x570
    ctx->pc = 0x1304bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1392));
label_1304c0:
    // 0x1304c0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1304c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1304c4:
    // 0x1304c4: 0xc067b18  jal         func_19EC60
label_1304c8:
    if (ctx->pc == 0x1304C8u) {
        ctx->pc = 0x1304CCu;
        goto label_1304cc;
    }
    ctx->pc = 0x1304C4u;
    SET_GPR_U32(ctx, 31, 0x1304CCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1304C4u, 0x1304CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1304CCu;
label_1304cc:
    // 0x1304cc: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1304ccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1304d0:
    // 0x1304d0: 0x8fa800b8  lw          $t0, 0xB8($sp)
    ctx->pc = 0x1304d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1304d4:
    // 0x1304d4: 0x8d020130  lw          $v0, 0x130($t0)
    ctx->pc = 0x1304d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 304)));
label_1304d8:
    // 0x1304d8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1304d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1304dc:
    // 0x1304dc: 0x24450580  addiu       $a1, $v0, 0x580
    ctx->pc = 0x1304dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
label_1304e0:
    // 0x1304e0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1304e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1304e4:
    // 0x1304e4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1304e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1304e8:
    // 0x1304e8: 0x24478d8c  addiu       $a3, $v0, -0x7274
    ctx->pc = 0x1304e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937996));
label_1304ec:
    // 0x1304ec: 0xc06d02c  jal         func_1B40B0
label_1304f0:
    if (ctx->pc == 0x1304F0u) {
        ctx->pc = 0x1304F4u;
        goto label_1304f4;
    }
    ctx->pc = 0x1304ECu;
    SET_GPR_U32(ctx, 31, 0x1304F4u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x1304ECu, 0x1304F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1304F4u;
label_1304f4:
    // 0x1304f4: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_1304f8:
    if (ctx->pc == 0x1304F8u) {
        ctx->pc = 0x1304FCu;
        goto label_1304fc;
    }
    ctx->pc = 0x1304F4u;
    {
        const bool branch_taken_0x1304f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1304f4) {
            ctx->pc = 0x13058Cu;
            goto label_13058c;
        }
    }
    ctx->pc = 0x1304FCu;
label_1304fc:
    // 0x1304fc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1304fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_130500:
    // 0x130500: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x130500u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_130504:
    // 0x130504: 0xc0675a4  jal         func_19D690
label_130508:
    if (ctx->pc == 0x130508u) {
        ctx->pc = 0x13050Cu;
        goto label_13050c;
    }
    ctx->pc = 0x130504u;
    SET_GPR_U32(ctx, 31, 0x13050Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x130504u, 0x13050Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13050Cu;
label_13050c:
    // 0x13050c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x13050cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_130510:
    // 0x130510: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x130510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130514:
    // 0x130514: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x130514u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_130518:
    // 0x130518: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x130518u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_13051c:
    // 0x13051c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x13051cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_130520:
    // 0x130520: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x130520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_130524:
    // 0x130524: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x130524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_130528:
    // 0x130528: 0xa41024  and         $v0, $a1, $a0
    ctx->pc = 0x130528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_13052c:
    // 0x13052c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13052cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_130530:
    // 0x130530: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x130530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
label_130534:
    // 0x130534: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x130534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130538:
    // 0x130538: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x130538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_13053c:
    // 0x13053c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x13053cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_130540:
    // 0x130540: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x130540u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_130544:
    // 0x130544: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x130544u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_130548:
    // 0x130548: 0x24670580  addiu       $a3, $v1, 0x580
    ctx->pc = 0x130548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1408));
label_13054c:
    // 0x13054c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x13054cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_130550:
    // 0x130550: 0xc06371c  jal         func_18DC70
label_130554:
    if (ctx->pc == 0x130554u) {
        ctx->pc = 0x130558u;
        goto label_130558;
    }
    ctx->pc = 0x130550u;
    SET_GPR_U32(ctx, 31, 0x130558u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x130550u, 0x130558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130558u;
label_130558:
    // 0x130558: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x130558u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_13055c:
    // 0x13055c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x13055cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_130560:
    // 0x130560: 0x34454000  ori         $a1, $v0, 0x4000
    ctx->pc = 0x130560u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_130564:
    // 0x130564: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x130564u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_130568:
    // 0x130568: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x130568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_13056c:
    // 0x13056c: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x13056cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_130570:
    // 0x130570: 0x24040515  addiu       $a0, $zero, 0x515
    ctx->pc = 0x130570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1301));
label_130574:
    // 0x130574: 0x244205b0  addiu       $v0, $v0, 0x5B0
    ctx->pc = 0x130574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1456));
label_130578:
    // 0x130578: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x130578u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_13057c:
    // 0x13057c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x13057cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_130580:
    // 0x130580: 0xc067b18  jal         func_19EC60
label_130584:
    if (ctx->pc == 0x130584u) {
        ctx->pc = 0x130588u;
        goto label_130588;
    }
    ctx->pc = 0x130580u;
    SET_GPR_U32(ctx, 31, 0x130588u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x130580u, 0x130588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130588u;
label_130588:
    // 0x130588: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x130588u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_13058c:
    // 0x13058c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x13058cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130590:
    // 0x130590: 0x906509e7  lbu         $a1, 0x9E7($v1)
    ctx->pc = 0x130590u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_130594:
    // 0x130594: 0x10a00038  beqz        $a1, . + 4 + (0x38 << 2)
label_130598:
    if (ctx->pc == 0x130598u) {
        ctx->pc = 0x13059Cu;
        goto label_13059c;
    }
    ctx->pc = 0x130594u;
    {
        const bool branch_taken_0x130594 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x130594) {
            ctx->pc = 0x130678u;
            goto label_130678;
        }
    }
    ctx->pc = 0x13059Cu;
label_13059c:
    // 0x13059c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x13059cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1305a0:
    // 0x1305a0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1305a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1305a4:
    // 0x1305a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1305a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1305a8:
    // 0x1305a8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1305a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1305ac:
    // 0x1305ac: 0x10000032  b           . + 4 + (0x32 << 2)
label_1305b0:
    if (ctx->pc == 0x1305B0u) {
        ctx->pc = 0x1305B4u;
        goto label_1305b4;
    }
    ctx->pc = 0x1305ACu;
    {
        const bool branch_taken_0x1305ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1305ac) {
            ctx->pc = 0x130678u;
            goto label_130678;
        }
    }
    ctx->pc = 0x1305B4u;
label_1305b4:
    // 0x1305b4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1305b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1305b8:
    // 0x1305b8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1305b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1305bc:
    // 0x1305bc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1305bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1305c0:
    // 0x1305c0: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1305c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1305c4:
    // 0x1305c4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1305c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1305c8:
    // 0x1305c8: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x1305c8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1305cc:
    // 0x1305cc: 0x24100100  addiu       $s0, $zero, 0x100
    ctx->pc = 0x1305ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1305d0:
    // 0x1305d0: 0x72004628  paddub      $t0, $s0, $zero
    ctx->pc = 0x1305d0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1305d4:
    // 0x1305d4: 0xc0965d0  jal         func_259740
label_1305d8:
    if (ctx->pc == 0x1305D8u) {
        ctx->pc = 0x1305DCu;
        goto label_1305dc;
    }
    ctx->pc = 0x1305D4u;
    SET_GPR_U32(ctx, 31, 0x1305DCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1305D4u, 0x1305DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1305DCu;
label_1305dc:
    // 0x1305dc: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1305dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1305e0:
    // 0x1305e0: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x1305e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1305e4:
    // 0x1305e4: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x1305e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1305e8:
    // 0x1305e8: 0xa0870002  sb          $a3, 0x2($a0)
    ctx->pc = 0x1305e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 7));
label_1305ec:
    // 0x1305ec: 0x8fa800b8  lw          $t0, 0xB8($sp)
    ctx->pc = 0x1305ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1305f0:
    // 0x1305f0: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x1305f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_1305f4:
    // 0x1305f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1305f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1305f8:
    // 0x1305f8: 0xc096b40  jal         func_25AD00
label_1305fc:
    if (ctx->pc == 0x1305FCu) {
        ctx->pc = 0x130600u;
        goto label_130600;
    }
    ctx->pc = 0x1305F8u;
    SET_GPR_U32(ctx, 31, 0x130600u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1305F8u, 0x130600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130600u;
label_130600:
    // 0x130600: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x130600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130604:
    // 0x130604: 0xc05cd10  jal         func_173440
label_130608:
    if (ctx->pc == 0x130608u) {
        ctx->pc = 0x13060Cu;
        goto label_13060c;
    }
    ctx->pc = 0x130604u;
    SET_GPR_U32(ctx, 31, 0x13060Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x130604u, 0x13060Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13060Cu;
label_13060c:
    // 0x13060c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x13060cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130610:
    // 0x130610: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x130610u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_130614:
    // 0x130614: 0xc05cec4  jal         func_173B10
label_130618:
    if (ctx->pc == 0x130618u) {
        ctx->pc = 0x13061Cu;
        goto label_13061c;
    }
    ctx->pc = 0x130614u;
    SET_GPR_U32(ctx, 31, 0x13061Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x130614u, 0x13061Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13061Cu;
label_13061c:
    // 0x13061c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13061cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130620:
    // 0x130620: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x130620u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_130624:
    // 0x130624: 0xc0974dc  jal         func_25D370
label_130628:
    if (ctx->pc == 0x130628u) {
        ctx->pc = 0x13062Cu;
        goto label_13062c;
    }
    ctx->pc = 0x130624u;
    SET_GPR_U32(ctx, 31, 0x13062Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x130624u, 0x13062Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13062Cu;
label_13062c:
    // 0x13062c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x13062cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130630:
    // 0x130630: 0x906409e7  lbu         $a0, 0x9E7($v1)
    ctx->pc = 0x130630u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_130634:
    // 0x130634: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_130638:
    if (ctx->pc == 0x130638u) {
        ctx->pc = 0x13063Cu;
        goto label_13063c;
    }
    ctx->pc = 0x130634u;
    {
        const bool branch_taken_0x130634 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x130634) {
            ctx->pc = 0x130678u;
            goto label_130678;
        }
    }
    ctx->pc = 0x13063Cu;
label_13063c:
    // 0x13063c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13063cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_130640:
    // 0x130640: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x130640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130644:
    // 0x130644: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x130644u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_130648:
    // 0x130648: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x130648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_13064c:
    // 0x13064c: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x13064cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130650:
    // 0x130650: 0xa0a40001  sb          $a0, 0x1($a1)
    ctx->pc = 0x130650u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
label_130654:
    // 0x130654: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x130654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130658:
    // 0x130658: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x130658u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_13065c:
    // 0x13065c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x13065cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130660:
    // 0x130660: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x130660u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_130664:
    // 0x130664: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x130664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_130668:
    // 0x130668: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x130668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_13066c:
    // 0x13066c: 0xa620007c  sh          $zero, 0x7C($s1)
    ctx->pc = 0x13066cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 124), (uint16_t)GPR_U32(ctx, 0));
label_130670:
    // 0x130670: 0x10000001  b           . + 4 + (0x1 << 2)
label_130674:
    if (ctx->pc == 0x130674u) {
        ctx->pc = 0x130678u;
        goto label_130678;
    }
    ctx->pc = 0x130670u;
    {
        const bool branch_taken_0x130670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130670) {
            ctx->pc = 0x130678u;
            goto label_130678;
        }
    }
    ctx->pc = 0x130678u;
label_130678:
    // 0x130678: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x130678u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13067c:
    // 0x13067c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13067cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_130680:
    // 0x130680: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x130680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_130684:
    // 0x130684: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x130684u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_130688:
    // 0x130688: 0x3e00008  jr          $ra
label_13068c:
    if (ctx->pc == 0x13068Cu) {
        ctx->pc = 0x130690u;
        goto label_fallthrough_0x130688;
    }
    ctx->pc = 0x130688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x130688:
    ctx->pc = 0x130690u;
}
