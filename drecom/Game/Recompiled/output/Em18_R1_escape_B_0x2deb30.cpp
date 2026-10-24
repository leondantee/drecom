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

// Function: Em18_R1_escape_B
// Address: 0x2deb30 - 0x2df200
void Em18_R1_escape_B_0x2deb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_R1_escape_B_0x2deb30");
#endif

    switch (ctx->pc) {
        case 0x2deb30u: goto label_2deb30;
        case 0x2deb34u: goto label_2deb34;
        case 0x2deb38u: goto label_2deb38;
        case 0x2deb3cu: goto label_2deb3c;
        case 0x2deb40u: goto label_2deb40;
        case 0x2deb44u: goto label_2deb44;
        case 0x2deb48u: goto label_2deb48;
        case 0x2deb4cu: goto label_2deb4c;
        case 0x2deb50u: goto label_2deb50;
        case 0x2deb54u: goto label_2deb54;
        case 0x2deb58u: goto label_2deb58;
        case 0x2deb5cu: goto label_2deb5c;
        case 0x2deb60u: goto label_2deb60;
        case 0x2deb64u: goto label_2deb64;
        case 0x2deb68u: goto label_2deb68;
        case 0x2deb6cu: goto label_2deb6c;
        case 0x2deb70u: goto label_2deb70;
        case 0x2deb74u: goto label_2deb74;
        case 0x2deb78u: goto label_2deb78;
        case 0x2deb7cu: goto label_2deb7c;
        case 0x2deb80u: goto label_2deb80;
        case 0x2deb84u: goto label_2deb84;
        case 0x2deb88u: goto label_2deb88;
        case 0x2deb8cu: goto label_2deb8c;
        case 0x2deb90u: goto label_2deb90;
        case 0x2deb94u: goto label_2deb94;
        case 0x2deb98u: goto label_2deb98;
        case 0x2deb9cu: goto label_2deb9c;
        case 0x2deba0u: goto label_2deba0;
        case 0x2deba4u: goto label_2deba4;
        case 0x2deba8u: goto label_2deba8;
        case 0x2debacu: goto label_2debac;
        case 0x2debb0u: goto label_2debb0;
        case 0x2debb4u: goto label_2debb4;
        case 0x2debb8u: goto label_2debb8;
        case 0x2debbcu: goto label_2debbc;
        case 0x2debc0u: goto label_2debc0;
        case 0x2debc4u: goto label_2debc4;
        case 0x2debc8u: goto label_2debc8;
        case 0x2debccu: goto label_2debcc;
        case 0x2debd0u: goto label_2debd0;
        case 0x2debd4u: goto label_2debd4;
        case 0x2debd8u: goto label_2debd8;
        case 0x2debdcu: goto label_2debdc;
        case 0x2debe0u: goto label_2debe0;
        case 0x2debe4u: goto label_2debe4;
        case 0x2debe8u: goto label_2debe8;
        case 0x2debecu: goto label_2debec;
        case 0x2debf0u: goto label_2debf0;
        case 0x2debf4u: goto label_2debf4;
        case 0x2debf8u: goto label_2debf8;
        case 0x2debfcu: goto label_2debfc;
        case 0x2dec00u: goto label_2dec00;
        case 0x2dec04u: goto label_2dec04;
        case 0x2dec08u: goto label_2dec08;
        case 0x2dec0cu: goto label_2dec0c;
        case 0x2dec10u: goto label_2dec10;
        case 0x2dec14u: goto label_2dec14;
        case 0x2dec18u: goto label_2dec18;
        case 0x2dec1cu: goto label_2dec1c;
        case 0x2dec20u: goto label_2dec20;
        case 0x2dec24u: goto label_2dec24;
        case 0x2dec28u: goto label_2dec28;
        case 0x2dec2cu: goto label_2dec2c;
        case 0x2dec30u: goto label_2dec30;
        case 0x2dec34u: goto label_2dec34;
        case 0x2dec38u: goto label_2dec38;
        case 0x2dec3cu: goto label_2dec3c;
        case 0x2dec40u: goto label_2dec40;
        case 0x2dec44u: goto label_2dec44;
        case 0x2dec48u: goto label_2dec48;
        case 0x2dec4cu: goto label_2dec4c;
        case 0x2dec50u: goto label_2dec50;
        case 0x2dec54u: goto label_2dec54;
        case 0x2dec58u: goto label_2dec58;
        case 0x2dec5cu: goto label_2dec5c;
        case 0x2dec60u: goto label_2dec60;
        case 0x2dec64u: goto label_2dec64;
        case 0x2dec68u: goto label_2dec68;
        case 0x2dec6cu: goto label_2dec6c;
        case 0x2dec70u: goto label_2dec70;
        case 0x2dec74u: goto label_2dec74;
        case 0x2dec78u: goto label_2dec78;
        case 0x2dec7cu: goto label_2dec7c;
        case 0x2dec80u: goto label_2dec80;
        case 0x2dec84u: goto label_2dec84;
        case 0x2dec88u: goto label_2dec88;
        case 0x2dec8cu: goto label_2dec8c;
        case 0x2dec90u: goto label_2dec90;
        case 0x2dec94u: goto label_2dec94;
        case 0x2dec98u: goto label_2dec98;
        case 0x2dec9cu: goto label_2dec9c;
        case 0x2deca0u: goto label_2deca0;
        case 0x2deca4u: goto label_2deca4;
        case 0x2deca8u: goto label_2deca8;
        case 0x2decacu: goto label_2decac;
        case 0x2decb0u: goto label_2decb0;
        case 0x2decb4u: goto label_2decb4;
        case 0x2decb8u: goto label_2decb8;
        case 0x2decbcu: goto label_2decbc;
        case 0x2decc0u: goto label_2decc0;
        case 0x2decc4u: goto label_2decc4;
        case 0x2decc8u: goto label_2decc8;
        case 0x2decccu: goto label_2deccc;
        case 0x2decd0u: goto label_2decd0;
        case 0x2decd4u: goto label_2decd4;
        case 0x2decd8u: goto label_2decd8;
        case 0x2decdcu: goto label_2decdc;
        case 0x2dece0u: goto label_2dece0;
        case 0x2dece4u: goto label_2dece4;
        case 0x2dece8u: goto label_2dece8;
        case 0x2dececu: goto label_2decec;
        case 0x2decf0u: goto label_2decf0;
        case 0x2decf4u: goto label_2decf4;
        case 0x2decf8u: goto label_2decf8;
        case 0x2decfcu: goto label_2decfc;
        case 0x2ded00u: goto label_2ded00;
        case 0x2ded04u: goto label_2ded04;
        case 0x2ded08u: goto label_2ded08;
        case 0x2ded0cu: goto label_2ded0c;
        case 0x2ded10u: goto label_2ded10;
        case 0x2ded14u: goto label_2ded14;
        case 0x2ded18u: goto label_2ded18;
        case 0x2ded1cu: goto label_2ded1c;
        case 0x2ded20u: goto label_2ded20;
        case 0x2ded24u: goto label_2ded24;
        case 0x2ded28u: goto label_2ded28;
        case 0x2ded2cu: goto label_2ded2c;
        case 0x2ded30u: goto label_2ded30;
        case 0x2ded34u: goto label_2ded34;
        case 0x2ded38u: goto label_2ded38;
        case 0x2ded3cu: goto label_2ded3c;
        case 0x2ded40u: goto label_2ded40;
        case 0x2ded44u: goto label_2ded44;
        case 0x2ded48u: goto label_2ded48;
        case 0x2ded4cu: goto label_2ded4c;
        case 0x2ded50u: goto label_2ded50;
        case 0x2ded54u: goto label_2ded54;
        case 0x2ded58u: goto label_2ded58;
        case 0x2ded5cu: goto label_2ded5c;
        case 0x2ded60u: goto label_2ded60;
        case 0x2ded64u: goto label_2ded64;
        case 0x2ded68u: goto label_2ded68;
        case 0x2ded6cu: goto label_2ded6c;
        case 0x2ded70u: goto label_2ded70;
        case 0x2ded74u: goto label_2ded74;
        case 0x2ded78u: goto label_2ded78;
        case 0x2ded7cu: goto label_2ded7c;
        case 0x2ded80u: goto label_2ded80;
        case 0x2ded84u: goto label_2ded84;
        case 0x2ded88u: goto label_2ded88;
        case 0x2ded8cu: goto label_2ded8c;
        case 0x2ded90u: goto label_2ded90;
        case 0x2ded94u: goto label_2ded94;
        case 0x2ded98u: goto label_2ded98;
        case 0x2ded9cu: goto label_2ded9c;
        case 0x2deda0u: goto label_2deda0;
        case 0x2deda4u: goto label_2deda4;
        case 0x2deda8u: goto label_2deda8;
        case 0x2dedacu: goto label_2dedac;
        case 0x2dedb0u: goto label_2dedb0;
        case 0x2dedb4u: goto label_2dedb4;
        case 0x2dedb8u: goto label_2dedb8;
        case 0x2dedbcu: goto label_2dedbc;
        case 0x2dedc0u: goto label_2dedc0;
        case 0x2dedc4u: goto label_2dedc4;
        case 0x2dedc8u: goto label_2dedc8;
        case 0x2dedccu: goto label_2dedcc;
        case 0x2dedd0u: goto label_2dedd0;
        case 0x2dedd4u: goto label_2dedd4;
        case 0x2dedd8u: goto label_2dedd8;
        case 0x2deddcu: goto label_2deddc;
        case 0x2dede0u: goto label_2dede0;
        case 0x2dede4u: goto label_2dede4;
        case 0x2dede8u: goto label_2dede8;
        case 0x2dedecu: goto label_2dedec;
        case 0x2dedf0u: goto label_2dedf0;
        case 0x2dedf4u: goto label_2dedf4;
        case 0x2dedf8u: goto label_2dedf8;
        case 0x2dedfcu: goto label_2dedfc;
        case 0x2dee00u: goto label_2dee00;
        case 0x2dee04u: goto label_2dee04;
        case 0x2dee08u: goto label_2dee08;
        case 0x2dee0cu: goto label_2dee0c;
        case 0x2dee10u: goto label_2dee10;
        case 0x2dee14u: goto label_2dee14;
        case 0x2dee18u: goto label_2dee18;
        case 0x2dee1cu: goto label_2dee1c;
        case 0x2dee20u: goto label_2dee20;
        case 0x2dee24u: goto label_2dee24;
        case 0x2dee28u: goto label_2dee28;
        case 0x2dee2cu: goto label_2dee2c;
        case 0x2dee30u: goto label_2dee30;
        case 0x2dee34u: goto label_2dee34;
        case 0x2dee38u: goto label_2dee38;
        case 0x2dee3cu: goto label_2dee3c;
        case 0x2dee40u: goto label_2dee40;
        case 0x2dee44u: goto label_2dee44;
        case 0x2dee48u: goto label_2dee48;
        case 0x2dee4cu: goto label_2dee4c;
        case 0x2dee50u: goto label_2dee50;
        case 0x2dee54u: goto label_2dee54;
        case 0x2dee58u: goto label_2dee58;
        case 0x2dee5cu: goto label_2dee5c;
        case 0x2dee60u: goto label_2dee60;
        case 0x2dee64u: goto label_2dee64;
        case 0x2dee68u: goto label_2dee68;
        case 0x2dee6cu: goto label_2dee6c;
        case 0x2dee70u: goto label_2dee70;
        case 0x2dee74u: goto label_2dee74;
        case 0x2dee78u: goto label_2dee78;
        case 0x2dee7cu: goto label_2dee7c;
        case 0x2dee80u: goto label_2dee80;
        case 0x2dee84u: goto label_2dee84;
        case 0x2dee88u: goto label_2dee88;
        case 0x2dee8cu: goto label_2dee8c;
        case 0x2dee90u: goto label_2dee90;
        case 0x2dee94u: goto label_2dee94;
        case 0x2dee98u: goto label_2dee98;
        case 0x2dee9cu: goto label_2dee9c;
        case 0x2deea0u: goto label_2deea0;
        case 0x2deea4u: goto label_2deea4;
        case 0x2deea8u: goto label_2deea8;
        case 0x2deeacu: goto label_2deeac;
        case 0x2deeb0u: goto label_2deeb0;
        case 0x2deeb4u: goto label_2deeb4;
        case 0x2deeb8u: goto label_2deeb8;
        case 0x2deebcu: goto label_2deebc;
        case 0x2deec0u: goto label_2deec0;
        case 0x2deec4u: goto label_2deec4;
        case 0x2deec8u: goto label_2deec8;
        case 0x2deeccu: goto label_2deecc;
        case 0x2deed0u: goto label_2deed0;
        case 0x2deed4u: goto label_2deed4;
        case 0x2deed8u: goto label_2deed8;
        case 0x2deedcu: goto label_2deedc;
        case 0x2deee0u: goto label_2deee0;
        case 0x2deee4u: goto label_2deee4;
        case 0x2deee8u: goto label_2deee8;
        case 0x2deeecu: goto label_2deeec;
        case 0x2deef0u: goto label_2deef0;
        case 0x2deef4u: goto label_2deef4;
        case 0x2deef8u: goto label_2deef8;
        case 0x2deefcu: goto label_2deefc;
        case 0x2def00u: goto label_2def00;
        case 0x2def04u: goto label_2def04;
        case 0x2def08u: goto label_2def08;
        case 0x2def0cu: goto label_2def0c;
        case 0x2def10u: goto label_2def10;
        case 0x2def14u: goto label_2def14;
        case 0x2def18u: goto label_2def18;
        case 0x2def1cu: goto label_2def1c;
        case 0x2def20u: goto label_2def20;
        case 0x2def24u: goto label_2def24;
        case 0x2def28u: goto label_2def28;
        case 0x2def2cu: goto label_2def2c;
        case 0x2def30u: goto label_2def30;
        case 0x2def34u: goto label_2def34;
        case 0x2def38u: goto label_2def38;
        case 0x2def3cu: goto label_2def3c;
        case 0x2def40u: goto label_2def40;
        case 0x2def44u: goto label_2def44;
        case 0x2def48u: goto label_2def48;
        case 0x2def4cu: goto label_2def4c;
        case 0x2def50u: goto label_2def50;
        case 0x2def54u: goto label_2def54;
        case 0x2def58u: goto label_2def58;
        case 0x2def5cu: goto label_2def5c;
        case 0x2def60u: goto label_2def60;
        case 0x2def64u: goto label_2def64;
        case 0x2def68u: goto label_2def68;
        case 0x2def6cu: goto label_2def6c;
        case 0x2def70u: goto label_2def70;
        case 0x2def74u: goto label_2def74;
        case 0x2def78u: goto label_2def78;
        case 0x2def7cu: goto label_2def7c;
        case 0x2def80u: goto label_2def80;
        case 0x2def84u: goto label_2def84;
        case 0x2def88u: goto label_2def88;
        case 0x2def8cu: goto label_2def8c;
        case 0x2def90u: goto label_2def90;
        case 0x2def94u: goto label_2def94;
        case 0x2def98u: goto label_2def98;
        case 0x2def9cu: goto label_2def9c;
        case 0x2defa0u: goto label_2defa0;
        case 0x2defa4u: goto label_2defa4;
        case 0x2defa8u: goto label_2defa8;
        case 0x2defacu: goto label_2defac;
        case 0x2defb0u: goto label_2defb0;
        case 0x2defb4u: goto label_2defb4;
        case 0x2defb8u: goto label_2defb8;
        case 0x2defbcu: goto label_2defbc;
        case 0x2defc0u: goto label_2defc0;
        case 0x2defc4u: goto label_2defc4;
        case 0x2defc8u: goto label_2defc8;
        case 0x2defccu: goto label_2defcc;
        case 0x2defd0u: goto label_2defd0;
        case 0x2defd4u: goto label_2defd4;
        case 0x2defd8u: goto label_2defd8;
        case 0x2defdcu: goto label_2defdc;
        case 0x2defe0u: goto label_2defe0;
        case 0x2defe4u: goto label_2defe4;
        case 0x2defe8u: goto label_2defe8;
        case 0x2defecu: goto label_2defec;
        case 0x2deff0u: goto label_2deff0;
        case 0x2deff4u: goto label_2deff4;
        case 0x2deff8u: goto label_2deff8;
        case 0x2deffcu: goto label_2deffc;
        case 0x2df000u: goto label_2df000;
        case 0x2df004u: goto label_2df004;
        case 0x2df008u: goto label_2df008;
        case 0x2df00cu: goto label_2df00c;
        case 0x2df010u: goto label_2df010;
        case 0x2df014u: goto label_2df014;
        case 0x2df018u: goto label_2df018;
        case 0x2df01cu: goto label_2df01c;
        case 0x2df020u: goto label_2df020;
        case 0x2df024u: goto label_2df024;
        case 0x2df028u: goto label_2df028;
        case 0x2df02cu: goto label_2df02c;
        case 0x2df030u: goto label_2df030;
        case 0x2df034u: goto label_2df034;
        case 0x2df038u: goto label_2df038;
        case 0x2df03cu: goto label_2df03c;
        case 0x2df040u: goto label_2df040;
        case 0x2df044u: goto label_2df044;
        case 0x2df048u: goto label_2df048;
        case 0x2df04cu: goto label_2df04c;
        case 0x2df050u: goto label_2df050;
        case 0x2df054u: goto label_2df054;
        case 0x2df058u: goto label_2df058;
        case 0x2df05cu: goto label_2df05c;
        case 0x2df060u: goto label_2df060;
        case 0x2df064u: goto label_2df064;
        case 0x2df068u: goto label_2df068;
        case 0x2df06cu: goto label_2df06c;
        case 0x2df070u: goto label_2df070;
        case 0x2df074u: goto label_2df074;
        case 0x2df078u: goto label_2df078;
        case 0x2df07cu: goto label_2df07c;
        case 0x2df080u: goto label_2df080;
        case 0x2df084u: goto label_2df084;
        case 0x2df088u: goto label_2df088;
        case 0x2df08cu: goto label_2df08c;
        case 0x2df090u: goto label_2df090;
        case 0x2df094u: goto label_2df094;
        case 0x2df098u: goto label_2df098;
        case 0x2df09cu: goto label_2df09c;
        case 0x2df0a0u: goto label_2df0a0;
        case 0x2df0a4u: goto label_2df0a4;
        case 0x2df0a8u: goto label_2df0a8;
        case 0x2df0acu: goto label_2df0ac;
        case 0x2df0b0u: goto label_2df0b0;
        case 0x2df0b4u: goto label_2df0b4;
        case 0x2df0b8u: goto label_2df0b8;
        case 0x2df0bcu: goto label_2df0bc;
        case 0x2df0c0u: goto label_2df0c0;
        case 0x2df0c4u: goto label_2df0c4;
        case 0x2df0c8u: goto label_2df0c8;
        case 0x2df0ccu: goto label_2df0cc;
        case 0x2df0d0u: goto label_2df0d0;
        case 0x2df0d4u: goto label_2df0d4;
        case 0x2df0d8u: goto label_2df0d8;
        case 0x2df0dcu: goto label_2df0dc;
        case 0x2df0e0u: goto label_2df0e0;
        case 0x2df0e4u: goto label_2df0e4;
        case 0x2df0e8u: goto label_2df0e8;
        case 0x2df0ecu: goto label_2df0ec;
        case 0x2df0f0u: goto label_2df0f0;
        case 0x2df0f4u: goto label_2df0f4;
        case 0x2df0f8u: goto label_2df0f8;
        case 0x2df0fcu: goto label_2df0fc;
        case 0x2df100u: goto label_2df100;
        case 0x2df104u: goto label_2df104;
        case 0x2df108u: goto label_2df108;
        case 0x2df10cu: goto label_2df10c;
        case 0x2df110u: goto label_2df110;
        case 0x2df114u: goto label_2df114;
        case 0x2df118u: goto label_2df118;
        case 0x2df11cu: goto label_2df11c;
        case 0x2df120u: goto label_2df120;
        case 0x2df124u: goto label_2df124;
        case 0x2df128u: goto label_2df128;
        case 0x2df12cu: goto label_2df12c;
        case 0x2df130u: goto label_2df130;
        case 0x2df134u: goto label_2df134;
        case 0x2df138u: goto label_2df138;
        case 0x2df13cu: goto label_2df13c;
        case 0x2df140u: goto label_2df140;
        case 0x2df144u: goto label_2df144;
        case 0x2df148u: goto label_2df148;
        case 0x2df14cu: goto label_2df14c;
        case 0x2df150u: goto label_2df150;
        case 0x2df154u: goto label_2df154;
        case 0x2df158u: goto label_2df158;
        case 0x2df15cu: goto label_2df15c;
        case 0x2df160u: goto label_2df160;
        case 0x2df164u: goto label_2df164;
        case 0x2df168u: goto label_2df168;
        case 0x2df16cu: goto label_2df16c;
        case 0x2df170u: goto label_2df170;
        case 0x2df174u: goto label_2df174;
        case 0x2df178u: goto label_2df178;
        case 0x2df17cu: goto label_2df17c;
        case 0x2df180u: goto label_2df180;
        case 0x2df184u: goto label_2df184;
        case 0x2df188u: goto label_2df188;
        case 0x2df18cu: goto label_2df18c;
        case 0x2df190u: goto label_2df190;
        case 0x2df194u: goto label_2df194;
        case 0x2df198u: goto label_2df198;
        case 0x2df19cu: goto label_2df19c;
        case 0x2df1a0u: goto label_2df1a0;
        case 0x2df1a4u: goto label_2df1a4;
        case 0x2df1a8u: goto label_2df1a8;
        case 0x2df1acu: goto label_2df1ac;
        case 0x2df1b0u: goto label_2df1b0;
        case 0x2df1b4u: goto label_2df1b4;
        case 0x2df1b8u: goto label_2df1b8;
        case 0x2df1bcu: goto label_2df1bc;
        case 0x2df1c0u: goto label_2df1c0;
        case 0x2df1c4u: goto label_2df1c4;
        case 0x2df1c8u: goto label_2df1c8;
        case 0x2df1ccu: goto label_2df1cc;
        case 0x2df1d0u: goto label_2df1d0;
        case 0x2df1d4u: goto label_2df1d4;
        case 0x2df1d8u: goto label_2df1d8;
        case 0x2df1dcu: goto label_2df1dc;
        case 0x2df1e0u: goto label_2df1e0;
        case 0x2df1e4u: goto label_2df1e4;
        case 0x2df1e8u: goto label_2df1e8;
        case 0x2df1ecu: goto label_2df1ec;
        case 0x2df1f0u: goto label_2df1f0;
        case 0x2df1f4u: goto label_2df1f4;
        case 0x2df1f8u: goto label_2df1f8;
        case 0x2df1fcu: goto label_2df1fc;
        default: break;
    }

    ctx->pc = 0x2deb30u;

label_2deb30:
    // 0x2deb30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2deb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2deb34:
    // 0x2deb34: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2deb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2deb38:
    // 0x2deb38: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2deb38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_2deb3c:
    // 0x2deb3c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2deb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2deb40:
    // 0x2deb40: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2deb40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_2deb44:
    // 0x2deb44: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2deb44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2deb48:
    // 0x2deb48: 0x2ca1000a  sltiu       $at, $a1, 0xA
    ctx->pc = 0x2deb48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_2deb4c:
    // 0x2deb4c: 0x102001a8  beqz        $at, . + 4 + (0x1A8 << 2)
label_2deb50:
    if (ctx->pc == 0x2DEB50u) {
        ctx->pc = 0x2DEB54u;
        goto label_2deb54;
    }
    ctx->pc = 0x2DEB4Cu;
    {
        const bool branch_taken_0x2deb4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2deb4c) {
            ctx->pc = 0x2DF1F0u;
            goto label_2df1f0;
        }
    }
    ctx->pc = 0x2DEB54u;
label_2deb54:
    // 0x2deb54: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2deb54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2deb58:
    // 0x2deb58: 0x24641a00  addiu       $a0, $v1, 0x1A00
    ctx->pc = 0x2deb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6656));
label_2deb5c:
    // 0x2deb5c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2deb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2deb60:
    // 0x2deb60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2deb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2deb64:
    // 0x2deb64: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2deb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2deb68:
    // 0x2deb68: 0x600008  jr          $v1
label_2deb6c:
    if (ctx->pc == 0x2DEB6Cu) {
        ctx->pc = 0x2DEB70u;
        goto label_2deb70;
    }
    ctx->pc = 0x2DEB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEB68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2DEB70u;
label_2deb70:
    // 0x2deb70: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2deb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2deb74:
    // 0x2deb74: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2deb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2deb78:
    // 0x2deb78: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2deb78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_2deb7c:
    // 0x2deb7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2deb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2deb80:
    // 0x2deb80: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2deb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2deb84:
    // 0x2deb84: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2deb84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2deb88:
    // 0x2deb88: 0x24060a2b  addiu       $a2, $zero, 0xA2B
    ctx->pc = 0x2deb88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2603));
label_2deb8c:
    // 0x2deb8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2deb8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2deb90:
    // 0x2deb90: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2deb90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2deb94:
    // 0x2deb94: 0xc0965d0  jal         func_259740
label_2deb98:
    if (ctx->pc == 0x2DEB98u) {
        ctx->pc = 0x2DEB9Cu;
        goto label_2deb9c;
    }
    ctx->pc = 0x2DEB94u;
    SET_GPR_U32(ctx, 31, 0x2DEB9Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DEB94u, 0x2DEB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEB9Cu;
label_2deb9c:
    // 0x2deb9c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2deb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2deba0:
    // 0x2deba0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2deba0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2deba4:
    // 0x2deba4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2deba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2deba8:
    // 0x2deba8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2deba8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2debac:
    // 0x2debac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2debacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2debb0:
    // 0x2debb0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2debb0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2debb4:
    // 0x2debb4: 0xc096b40  jal         func_25AD00
label_2debb8:
    if (ctx->pc == 0x2DEBB8u) {
        ctx->pc = 0x2DEBBCu;
        goto label_2debbc;
    }
    ctx->pc = 0x2DEBB4u;
    SET_GPR_U32(ctx, 31, 0x2DEBBCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DEBB4u, 0x2DEBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEBBCu;
label_2debbc:
    // 0x2debbc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2debbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2debc0:
    // 0x2debc0: 0xc05cd10  jal         func_173440
label_2debc4:
    if (ctx->pc == 0x2DEBC4u) {
        ctx->pc = 0x2DEBC8u;
        goto label_2debc8;
    }
    ctx->pc = 0x2DEBC0u;
    SET_GPR_U32(ctx, 31, 0x2DEBC8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DEBC0u, 0x2DEBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEBC8u;
label_2debc8:
    // 0x2debc8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2debc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2debcc:
    // 0x2debcc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2debccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2debd0:
    // 0x2debd0: 0xc05cec4  jal         func_173B10
label_2debd4:
    if (ctx->pc == 0x2DEBD4u) {
        ctx->pc = 0x2DEBD8u;
        goto label_2debd8;
    }
    ctx->pc = 0x2DEBD0u;
    SET_GPR_U32(ctx, 31, 0x2DEBD8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DEBD0u, 0x2DEBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEBD8u;
label_2debd8:
    // 0x2debd8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2debd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2debdc:
    // 0x2debdc: 0xc0974dc  jal         func_25D370
label_2debe0:
    if (ctx->pc == 0x2DEBE0u) {
        ctx->pc = 0x2DEBE4u;
        goto label_2debe4;
    }
    ctx->pc = 0x2DEBDCu;
    SET_GPR_U32(ctx, 31, 0x2DEBE4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DEBDCu, 0x2DEBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEBE4u;
label_2debe4:
    // 0x2debe4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2debe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2debe8:
    // 0x2debe8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2debe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_2debec:
    // 0x2debec: 0x10600180  beqz        $v1, . + 4 + (0x180 << 2)
label_2debf0:
    if (ctx->pc == 0x2DEBF0u) {
        ctx->pc = 0x2DEBF4u;
        goto label_2debf4;
    }
    ctx->pc = 0x2DEBECu;
    {
        const bool branch_taken_0x2debec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2debec) {
            ctx->pc = 0x2DF1F0u;
            goto label_2df1f0;
        }
    }
    ctx->pc = 0x2DEBF4u;
label_2debf4:
    // 0x2debf4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2debf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2debf8:
    // 0x2debf8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2debf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_2debfc:
    // 0x2debfc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2debfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2dec00:
    // 0x2dec00: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2dec00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_2dec04:
    // 0x2dec04: 0x1000017a  b           . + 4 + (0x17A << 2)
label_2dec08:
    if (ctx->pc == 0x2DEC08u) {
        ctx->pc = 0x2DEC0Cu;
        goto label_2dec0c;
    }
    ctx->pc = 0x2DEC04u;
    {
        const bool branch_taken_0x2dec04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dec04) {
            ctx->pc = 0x2DF1F0u;
            goto label_2df1f0;
        }
    }
    ctx->pc = 0x2DEC0Cu;
label_2dec0c:
    // 0x2dec0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dec10:
    // 0x2dec10: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2dec10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dec14:
    // 0x2dec14: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2dec14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2dec18:
    // 0x2dec18: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x2dec18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_2dec1c:
    // 0x2dec1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2dec1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dec20:
    // 0x2dec20: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2dec20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2dec24:
    // 0x2dec24: 0xc0965d0  jal         func_259740
label_2dec28:
    if (ctx->pc == 0x2DEC28u) {
        ctx->pc = 0x2DEC2Cu;
        goto label_2dec2c;
    }
    ctx->pc = 0x2DEC24u;
    SET_GPR_U32(ctx, 31, 0x2DEC2Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DEC24u, 0x2DEC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEC2Cu;
label_2dec2c:
    // 0x2dec2c: 0x3c024306  lui         $v0, 0x4306
    ctx->pc = 0x2dec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17158 << 16));
label_2dec30:
    // 0x2dec30: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2dec30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_2dec34:
    // 0x2dec34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dec34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dec38:
    // 0x2dec38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dec38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dec3c:
    // 0x2dec3c: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x2dec3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_2dec40:
    // 0x2dec40: 0x3c024106  lui         $v0, 0x4106
    ctx->pc = 0x2dec40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16646 << 16));
label_2dec44:
    // 0x2dec44: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2dec44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_2dec48:
    // 0x2dec48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dec48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dec4c:
    // 0x2dec4c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dec50:
    // 0x2dec50: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x2dec50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_2dec54:
    // 0x2dec54: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2dec54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2dec58:
    // 0x2dec58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dec58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dec5c:
    // 0x2dec5c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2dec5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_2dec60:
    // 0x2dec60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dec60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dec64:
    // 0x2dec64: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2dec64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2dec68:
    // 0x2dec68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2dec68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2dec6c:
    // 0x2dec6c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2dec6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2dec70:
    // 0x2dec70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dec70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dec74:
    // 0x2dec74: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2dec74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_2dec78:
    // 0x2dec78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2dec78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2dec7c:
    // 0x2dec7c: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2dec7cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_2dec80:
    // 0x2dec80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dec80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dec84:
    // 0x2dec84: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2dec84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
label_2dec88:
    // 0x2dec88: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2dec88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_2dec8c:
    // 0x2dec8c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dec8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2dec90:
    // 0x2dec90: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2dec94:
    if (ctx->pc == 0x2DEC94u) {
        ctx->pc = 0x2DEC98u;
        goto label_2dec98;
    }
    ctx->pc = 0x2DEC90u;
    {
        const bool branch_taken_0x2dec90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dec90) {
            ctx->pc = 0x2DECB0u;
            goto label_2decb0;
        }
    }
    ctx->pc = 0x2DEC98u;
label_2dec98:
    // 0x2dec98: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2dec98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dec9c:
    // 0x2dec9c: 0x8c8311a0  lw          $v1, 0x11A0($a0)
    ctx->pc = 0x2dec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4512)));
label_2deca0:
    // 0x2deca0: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x2deca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
label_2deca4:
    // 0x2deca4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2deca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2deca8:
    // 0x2deca8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2deca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2decac:
    // 0x2decac: 0xac8211a0  sw          $v0, 0x11A0($a0)
    ctx->pc = 0x2decacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4512), GPR_U32(ctx, 2));
label_2decb0:
    // 0x2decb0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2decb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2decb4:
    // 0x2decb4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2decb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2decb8:
    // 0x2decb8: 0xc096b40  jal         func_25AD00
label_2decbc:
    if (ctx->pc == 0x2DECBCu) {
        ctx->pc = 0x2DECC0u;
        goto label_2decc0;
    }
    ctx->pc = 0x2DECB8u;
    SET_GPR_U32(ctx, 31, 0x2DECC0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DECB8u, 0x2DECC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DECC0u;
label_2decc0:
    // 0x2decc0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2decc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2decc4:
    // 0x2decc4: 0xc05cd10  jal         func_173440
label_2decc8:
    if (ctx->pc == 0x2DECC8u) {
        ctx->pc = 0x2DECCCu;
        goto label_2deccc;
    }
    ctx->pc = 0x2DECC4u;
    SET_GPR_U32(ctx, 31, 0x2DECCCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DECC4u, 0x2DECCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DECCCu;
label_2deccc:
    // 0x2deccc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2decccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2decd0:
    // 0x2decd0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2decd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2decd4:
    // 0x2decd4: 0xc05cec4  jal         func_173B10
label_2decd8:
    if (ctx->pc == 0x2DECD8u) {
        ctx->pc = 0x2DECDCu;
        goto label_2decdc;
    }
    ctx->pc = 0x2DECD4u;
    SET_GPR_U32(ctx, 31, 0x2DECDCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DECD4u, 0x2DECDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DECDCu;
label_2decdc:
    // 0x2decdc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2decdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dece0:
    // 0x2dece0: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2dece0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_2dece4:
    // 0x2dece4: 0xc057a80  jal         func_15EA00
label_2dece8:
    if (ctx->pc == 0x2DECE8u) {
        ctx->pc = 0x2DECECu;
        goto label_2decec;
    }
    ctx->pc = 0x2DECE4u;
    SET_GPR_U32(ctx, 31, 0x2DECECu);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x2DECE4u, 0x2DECECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DECECu;
label_2decec:
    // 0x2decec: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x2dececu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
label_2decf0:
    // 0x2decf0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2decf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_2decf4:
    // 0x2decf4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2decf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2decf8:
    // 0x2decf8: 0x0  nop
    ctx->pc = 0x2decf8u;
    // NOP
label_2decfc:
    // 0x2decfc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2decfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2ded00:
    // 0x2ded00: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2ded00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_2ded04:
    // 0x2ded04: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2ded04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2ded08:
    // 0x2ded08: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x2ded08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ded0c:
    // 0x2ded0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2ded0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2ded10:
    // 0x2ded10: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2ded10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ded14:
    // 0x2ded14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ded14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2ded18:
    // 0x2ded18: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2ded18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2ded1c:
    // 0x2ded1c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2ded1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2ded20:
    // 0x2ded20: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2ded20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ded24:
    // 0x2ded24: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2ded24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ded28:
    // 0x2ded28: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ded28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ded2c:
    // 0x2ded2c: 0x0  nop
    ctx->pc = 0x2ded2cu;
    // NOP
label_2ded30:
    // 0x2ded30: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_2ded34:
    if (ctx->pc == 0x2DED34u) {
        ctx->pc = 0x2DED38u;
        goto label_2ded38;
    }
    ctx->pc = 0x2DED30u;
    {
        const bool branch_taken_0x2ded30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ded30) {
            ctx->pc = 0x2DED44u;
            goto label_2ded44;
        }
    }
    ctx->pc = 0x2DED38u;
label_2ded38:
    // 0x2ded38: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2ded38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ded3c:
    // 0x2ded3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2ded3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2ded40:
    // 0x2ded40: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2ded40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2ded44:
    // 0x2ded44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2ded44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2ded48:
    // 0x2ded48: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x2ded48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ded4c:
    // 0x2ded4c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2ded4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2ded50:
    // 0x2ded50: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x2ded50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ded54:
    // 0x2ded54: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2ded54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2ded58:
    // 0x2ded58: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x2ded58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_2ded5c:
    // 0x2ded5c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2ded5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2ded60:
    // 0x2ded60: 0xc0974dc  jal         func_25D370
label_2ded64:
    if (ctx->pc == 0x2DED64u) {
        ctx->pc = 0x2DED68u;
        goto label_2ded68;
    }
    ctx->pc = 0x2DED60u;
    SET_GPR_U32(ctx, 31, 0x2DED68u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DED60u, 0x2DED68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DED68u;
label_2ded68:
    // 0x2ded68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2ded68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2ded6c:
    // 0x2ded6c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2ded6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_2ded70:
    // 0x2ded70: 0x1060011f  beqz        $v1, . + 4 + (0x11F << 2)
label_2ded74:
    if (ctx->pc == 0x2DED74u) {
        ctx->pc = 0x2DED78u;
        goto label_2ded78;
    }
    ctx->pc = 0x2DED70u;
    {
        const bool branch_taken_0x2ded70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ded70) {
            ctx->pc = 0x2DF1F0u;
            goto label_2df1f0;
        }
    }
    ctx->pc = 0x2DED78u;
label_2ded78:
    // 0x2ded78: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2ded78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2ded7c:
    // 0x2ded7c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2ded7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_2ded80:
    // 0x2ded80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ded80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2ded84:
    // 0x2ded84: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2ded84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_2ded88:
    // 0x2ded88: 0x10000119  b           . + 4 + (0x119 << 2)
label_2ded8c:
    if (ctx->pc == 0x2DED8Cu) {
        ctx->pc = 0x2DED90u;
        goto label_2ded90;
    }
    ctx->pc = 0x2DED88u;
    {
        const bool branch_taken_0x2ded88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ded88) {
            ctx->pc = 0x2DF1F0u;
            goto label_2df1f0;
        }
    }
    ctx->pc = 0x2DED90u;
label_2ded90:
    // 0x2ded90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2ded90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2ded94:
    // 0x2ded94: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2ded94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2ded98:
    // 0x2ded98: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2ded98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2ded9c:
    // 0x2ded9c: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x2ded9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_2deda0:
    // 0x2deda0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2deda0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2deda4:
    // 0x2deda4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2deda4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2deda8:
    // 0x2deda8: 0xc0965d0  jal         func_259740
label_2dedac:
    if (ctx->pc == 0x2DEDACu) {
        ctx->pc = 0x2DEDB0u;
        goto label_2dedb0;
    }
    ctx->pc = 0x2DEDA8u;
    SET_GPR_U32(ctx, 31, 0x2DEDB0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DEDA8u, 0x2DEDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEDB0u;
label_2dedb0:
    // 0x2dedb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dedb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dedb4:
    // 0x2dedb4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dedb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dedb8:
    // 0x2dedb8: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x2dedb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_2dedbc:
    // 0x2dedbc: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x2dedbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
label_2dedc0:
    // 0x2dedc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dedc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dedc4:
    // 0x2dedc4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dedc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dedc8:
    // 0x2dedc8: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x2dedc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_2dedcc:
    // 0x2dedcc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dedccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dedd0:
    // 0x2dedd0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2dedd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2dedd4:
    // 0x2dedd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2dedd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2dedd8:
    // 0x2dedd8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2dedd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2deddc:
    // 0x2deddc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2deddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dede0:
    // 0x2dede0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dede0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2dede4:
    // 0x2dede4: 0xc096b40  jal         func_25AD00
label_2dede8:
    if (ctx->pc == 0x2DEDE8u) {
        ctx->pc = 0x2DEDECu;
        goto label_2dedec;
    }
    ctx->pc = 0x2DEDE4u;
    SET_GPR_U32(ctx, 31, 0x2DEDECu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DEDE4u, 0x2DEDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEDECu;
label_2dedec:
    // 0x2dedec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2dedecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dedf0:
    // 0x2dedf0: 0xc05cd10  jal         func_173440
label_2dedf4:
    if (ctx->pc == 0x2DEDF4u) {
        ctx->pc = 0x2DEDF8u;
        goto label_2dedf8;
    }
    ctx->pc = 0x2DEDF0u;
    SET_GPR_U32(ctx, 31, 0x2DEDF8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DEDF0u, 0x2DEDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEDF8u;
label_2dedf8:
    // 0x2dedf8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2dedf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dedfc:
    // 0x2dedfc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2dedfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2dee00:
    // 0x2dee00: 0xc05cec4  jal         func_173B10
label_2dee04:
    if (ctx->pc == 0x2DEE04u) {
        ctx->pc = 0x2DEE08u;
        goto label_2dee08;
    }
    ctx->pc = 0x2DEE00u;
    SET_GPR_U32(ctx, 31, 0x2DEE08u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DEE00u, 0x2DEE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEE08u;
label_2dee08:
    // 0x2dee08: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dee08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dee0c:
    // 0x2dee0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dee10:
    // 0x2dee10: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2dee10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_2dee14:
    // 0x2dee14: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x2dee14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_2dee18:
    // 0x2dee18: 0xc05cf7c  jal         func_173DF0
label_2dee1c:
    if (ctx->pc == 0x2DEE1Cu) {
        ctx->pc = 0x2DEE20u;
        goto label_2dee20;
    }
    ctx->pc = 0x2DEE18u;
    SET_GPR_U32(ctx, 31, 0x2DEE20u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2DEE18u, 0x2DEE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEE20u;
label_2dee20:
    // 0x2dee20: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2dee20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2dee24:
    // 0x2dee24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dee24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dee28:
    // 0x2dee28: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x2dee28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dee2c:
    // 0x2dee2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dee30:
    // 0x2dee30: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2dee30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dee34:
    // 0x2dee34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dee34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2dee38:
    // 0x2dee38: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2dee38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2dee3c:
    // 0x2dee3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dee40:
    // 0x2dee40: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x2dee40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dee44:
    // 0x2dee44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dee44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dee48:
    // 0x2dee48: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x2dee48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dee4c:
    // 0x2dee4c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2dee4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2dee50:
    // 0x2dee50: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x2dee50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_2dee54:
    // 0x2dee54: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dee54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dee58:
    // 0x2dee58: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2dee58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dee5c:
    // 0x2dee5c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2dee5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dee60:
    // 0x2dee60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dee60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dee64:
    // 0x2dee64: 0x0  nop
    ctx->pc = 0x2dee64u;
    // NOP
label_2dee68:
    // 0x2dee68: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_2dee6c:
    if (ctx->pc == 0x2DEE6Cu) {
        ctx->pc = 0x2DEE70u;
        goto label_2dee70;
    }
    ctx->pc = 0x2DEE68u;
    {
        const bool branch_taken_0x2dee68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dee68) {
            ctx->pc = 0x2DEEA4u;
            goto label_2deea4;
        }
    }
    ctx->pc = 0x2DEE70u;
label_2dee70:
    // 0x2dee70: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2dee70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dee74:
    // 0x2dee74: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dee74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dee78:
    // 0x2dee78: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2dee78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2dee7c:
    // 0x2dee7c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2dee7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2dee80:
    // 0x2dee80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dee80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dee84:
    // 0x2dee84: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2dee84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_2dee88:
    // 0x2dee88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dee88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dee8c:
    // 0x2dee8c: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x2dee8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
label_2dee90:
    // 0x2dee90: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2dee90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dee94:
    // 0x2dee94: 0xc0974dc  jal         func_25D370
label_2dee98:
    if (ctx->pc == 0x2DEE98u) {
        ctx->pc = 0x2DEE9Cu;
        goto label_2dee9c;
    }
    ctx->pc = 0x2DEE94u;
    SET_GPR_U32(ctx, 31, 0x2DEE9Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DEE94u, 0x2DEE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEE9Cu;
label_2dee9c:
    // 0x2dee9c: 0x100000d4  b           . + 4 + (0xD4 << 2)
label_2deea0:
    if (ctx->pc == 0x2DEEA0u) {
        ctx->pc = 0x2DEEA4u;
        goto label_2deea4;
    }
    ctx->pc = 0x2DEE9Cu;
    {
        const bool branch_taken_0x2dee9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dee9c) {
            ctx->pc = 0x2DF1F0u;
            goto label_2df1f0;
        }
    }
    ctx->pc = 0x2DEEA4u;
label_2deea4:
    // 0x2deea4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2deea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2deea8:
    // 0x2deea8: 0xc0974dc  jal         func_25D370
label_2deeac:
    if (ctx->pc == 0x2DEEACu) {
        ctx->pc = 0x2DEEB0u;
        goto label_2deeb0;
    }
    ctx->pc = 0x2DEEA8u;
    SET_GPR_U32(ctx, 31, 0x2DEEB0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DEEA8u, 0x2DEEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEEB0u;
label_2deeb0:
    // 0x2deeb0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2deeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2deeb4:
    // 0x2deeb4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2deeb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_2deeb8:
    // 0x2deeb8: 0x106000cd  beqz        $v1, . + 4 + (0xCD << 2)
label_2deebc:
    if (ctx->pc == 0x2DEEBCu) {
        ctx->pc = 0x2DEEC0u;
        goto label_2deec0;
    }
    ctx->pc = 0x2DEEB8u;
    {
        const bool branch_taken_0x2deeb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2deeb8) {
            ctx->pc = 0x2DF1F0u;
            goto label_2df1f0;
        }
    }
    ctx->pc = 0x2DEEC0u;
label_2deec0:
    // 0x2deec0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2deec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2deec4:
    // 0x2deec4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2deec4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_2deec8:
    // 0x2deec8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2deec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2deecc:
    // 0x2deecc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2deeccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_2deed0:
    // 0x2deed0: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_2deed4:
    if (ctx->pc == 0x2DEED4u) {
        ctx->pc = 0x2DEED8u;
        goto label_2deed8;
    }
    ctx->pc = 0x2DEED0u;
    {
        const bool branch_taken_0x2deed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2deed0) {
            ctx->pc = 0x2DF1F0u;
            goto label_2df1f0;
        }
    }
    ctx->pc = 0x2DEED8u;
label_2deed8:
    // 0x2deed8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2deed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2deedc:
    // 0x2deedc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2deedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2deee0:
    // 0x2deee0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2deee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2deee4:
    // 0x2deee4: 0x2406002e  addiu       $a2, $zero, 0x2E
    ctx->pc = 0x2deee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_2deee8:
    // 0x2deee8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2deee8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2deeec:
    // 0x2deeec: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2deeecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2deef0:
    // 0x2deef0: 0xc0965d0  jal         func_259740
label_2deef4:
    if (ctx->pc == 0x2DEEF4u) {
        ctx->pc = 0x2DEEF8u;
        goto label_2deef8;
    }
    ctx->pc = 0x2DEEF0u;
    SET_GPR_U32(ctx, 31, 0x2DEEF8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DEEF0u, 0x2DEEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEEF8u;
label_2deef8:
    // 0x2deef8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2deef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2deefc:
    // 0x2deefc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2deefcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2def00:
    // 0x2def00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2def00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2def04:
    // 0x2def04: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2def04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2def08:
    // 0x2def08: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2def08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2def0c:
    // 0x2def0c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2def0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2def10:
    // 0x2def10: 0xc096b40  jal         func_25AD00
label_2def14:
    if (ctx->pc == 0x2DEF14u) {
        ctx->pc = 0x2DEF18u;
        goto label_2def18;
    }
    ctx->pc = 0x2DEF10u;
    SET_GPR_U32(ctx, 31, 0x2DEF18u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DEF10u, 0x2DEF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEF18u;
label_2def18:
    // 0x2def18: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2def18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2def1c:
    // 0x2def1c: 0xc05cd10  jal         func_173440
label_2def20:
    if (ctx->pc == 0x2DEF20u) {
        ctx->pc = 0x2DEF24u;
        goto label_2def24;
    }
    ctx->pc = 0x2DEF1Cu;
    SET_GPR_U32(ctx, 31, 0x2DEF24u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DEF1Cu, 0x2DEF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEF24u;
label_2def24:
    // 0x2def24: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2def24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2def28:
    // 0x2def28: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2def28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2def2c:
    // 0x2def2c: 0xc05cec4  jal         func_173B10
label_2def30:
    if (ctx->pc == 0x2DEF30u) {
        ctx->pc = 0x2DEF34u;
        goto label_2def34;
    }
    ctx->pc = 0x2DEF2Cu;
    SET_GPR_U32(ctx, 31, 0x2DEF34u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DEF2Cu, 0x2DEF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEF34u;
label_2def34:
    // 0x2def34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2def34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2def38:
    // 0x2def38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2def38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2def3c:
    // 0x2def3c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2def3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_2def40:
    // 0x2def40: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x2def40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_2def44:
    // 0x2def44: 0xc05cf7c  jal         func_173DF0
label_2def48:
    if (ctx->pc == 0x2DEF48u) {
        ctx->pc = 0x2DEF4Cu;
        goto label_2def4c;
    }
    ctx->pc = 0x2DEF44u;
    SET_GPR_U32(ctx, 31, 0x2DEF4Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2DEF44u, 0x2DEF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEF4Cu;
label_2def4c:
    // 0x2def4c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2def4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2def50:
    // 0x2def50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2def50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2def54:
    // 0x2def54: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x2def54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2def58:
    // 0x2def58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2def58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2def5c:
    // 0x2def5c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2def5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2def60:
    // 0x2def60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2def60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2def64:
    // 0x2def64: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2def64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2def68:
    // 0x2def68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2def68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2def6c:
    // 0x2def6c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x2def6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2def70:
    // 0x2def70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2def70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2def74:
    // 0x2def74: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x2def74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2def78:
    // 0x2def78: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2def78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2def7c:
    // 0x2def7c: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x2def7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_2def80:
    // 0x2def80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2def80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2def84:
    // 0x2def84: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2def84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2def88:
    // 0x2def88: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2def88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2def8c:
    // 0x2def8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2def8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2def90:
    // 0x2def90: 0x0  nop
    ctx->pc = 0x2def90u;
    // NOP
label_2def94:
    // 0x2def94: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_2def98:
    if (ctx->pc == 0x2DEF98u) {
        ctx->pc = 0x2DEF9Cu;
        goto label_2def9c;
    }
    ctx->pc = 0x2DEF94u;
    {
        const bool branch_taken_0x2def94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2def94) {
            ctx->pc = 0x2DEFBCu;
            goto label_2defbc;
        }
    }
    ctx->pc = 0x2DEF9Cu;
label_2def9c:
    // 0x2def9c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2def9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2defa0:
    // 0x2defa0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2defa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2defa4:
    // 0x2defa4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2defa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2defa8:
    // 0x2defa8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2defa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2defac:
    // 0x2defac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2defacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2defb0:
    // 0x2defb0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2defb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_2defb4:
    // 0x2defb4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2defb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2defb8:
    // 0x2defb8: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x2defb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
label_2defbc:
    // 0x2defbc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2defbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2defc0:
    // 0x2defc0: 0xc0974dc  jal         func_25D370
label_2defc4:
    if (ctx->pc == 0x2DEFC4u) {
        ctx->pc = 0x2DEFC8u;
        goto label_2defc8;
    }
    ctx->pc = 0x2DEFC0u;
    SET_GPR_U32(ctx, 31, 0x2DEFC8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DEFC0u, 0x2DEFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEFC8u;
label_2defc8:
    // 0x2defc8: 0x10000089  b           . + 4 + (0x89 << 2)
label_2defcc:
    if (ctx->pc == 0x2DEFCCu) {
        ctx->pc = 0x2DEFD0u;
        goto label_2defd0;
    }
    ctx->pc = 0x2DEFC8u;
    {
        const bool branch_taken_0x2defc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2defc8) {
            ctx->pc = 0x2DF1F0u;
            goto label_2df1f0;
        }
    }
    ctx->pc = 0x2DEFD0u;
label_2defd0:
    // 0x2defd0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2defd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2defd4:
    // 0x2defd4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2defd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2defd8:
    // 0x2defd8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2defd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2defdc:
    // 0x2defdc: 0x2406002f  addiu       $a2, $zero, 0x2F
    ctx->pc = 0x2defdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_2defe0:
    // 0x2defe0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2defe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2defe4:
    // 0x2defe4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2defe4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2defe8:
    // 0x2defe8: 0xc0965d0  jal         func_259740
label_2defec:
    if (ctx->pc == 0x2DEFECu) {
        ctx->pc = 0x2DEFF0u;
        goto label_2deff0;
    }
    ctx->pc = 0x2DEFE8u;
    SET_GPR_U32(ctx, 31, 0x2DEFF0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DEFE8u, 0x2DEFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEFF0u;
label_2deff0:
    // 0x2deff0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2deff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2deff4:
    // 0x2deff4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2deff4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2deff8:
    // 0x2deff8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2deff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2deffc:
    // 0x2deffc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2deffcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2df000:
    // 0x2df000: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2df000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df004:
    // 0x2df004: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2df004u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2df008:
    // 0x2df008: 0xc096b40  jal         func_25AD00
label_2df00c:
    if (ctx->pc == 0x2DF00Cu) {
        ctx->pc = 0x2DF010u;
        goto label_2df010;
    }
    ctx->pc = 0x2DF008u;
    SET_GPR_U32(ctx, 31, 0x2DF010u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DF008u, 0x2DF010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF010u;
label_2df010:
    // 0x2df010: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2df010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df014:
    // 0x2df014: 0xc05cd10  jal         func_173440
label_2df018:
    if (ctx->pc == 0x2DF018u) {
        ctx->pc = 0x2DF01Cu;
        goto label_2df01c;
    }
    ctx->pc = 0x2DF014u;
    SET_GPR_U32(ctx, 31, 0x2DF01Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DF014u, 0x2DF01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF01Cu;
label_2df01c:
    // 0x2df01c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2df01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df020:
    // 0x2df020: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2df020u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2df024:
    // 0x2df024: 0xc05cec4  jal         func_173B10
label_2df028:
    if (ctx->pc == 0x2DF028u) {
        ctx->pc = 0x2DF02Cu;
        goto label_2df02c;
    }
    ctx->pc = 0x2DF024u;
    SET_GPR_U32(ctx, 31, 0x2DF02Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DF024u, 0x2DF02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF02Cu;
label_2df02c:
    // 0x2df02c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2df02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df030:
    // 0x2df030: 0xc0974dc  jal         func_25D370
label_2df034:
    if (ctx->pc == 0x2DF034u) {
        ctx->pc = 0x2DF038u;
        goto label_2df038;
    }
    ctx->pc = 0x2DF030u;
    SET_GPR_U32(ctx, 31, 0x2DF038u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DF030u, 0x2DF038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF038u;
label_2df038:
    // 0x2df038: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df03c:
    // 0x2df03c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2df03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df040:
    // 0x2df040: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2df040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_2df044:
    // 0x2df044: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x2df044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_2df048:
    // 0x2df048: 0xc05cf7c  jal         func_173DF0
label_2df04c:
    if (ctx->pc == 0x2DF04Cu) {
        ctx->pc = 0x2DF050u;
        goto label_2df050;
    }
    ctx->pc = 0x2DF048u;
    SET_GPR_U32(ctx, 31, 0x2DF050u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2DF048u, 0x2DF050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF050u;
label_2df050:
    // 0x2df050: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2df050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2df054:
    // 0x2df054: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df058:
    // 0x2df058: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x2df058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2df05c:
    // 0x2df05c: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2df05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
label_2df060:
    // 0x2df060: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2df060u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2df064:
    // 0x2df064: 0x0  nop
    ctx->pc = 0x2df064u;
    // NOP
label_2df068:
    // 0x2df068: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2df068u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2df06c:
    // 0x2df06c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2df06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2df070:
    // 0x2df070: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2df070u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2df074:
    // 0x2df074: 0x0  nop
    ctx->pc = 0x2df074u;
    // NOP
label_2df078:
    // 0x2df078: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_2df07c:
    if (ctx->pc == 0x2DF07Cu) {
        ctx->pc = 0x2DF080u;
        goto label_2df080;
    }
    ctx->pc = 0x2DF078u;
    {
        const bool branch_taken_0x2df078 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2df078) {
            ctx->pc = 0x2DF0ECu;
            goto label_2df0ec;
        }
    }
    ctx->pc = 0x2DF080u;
label_2df080:
    // 0x2df080: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df084:
    // 0x2df084: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2df084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df088:
    // 0x2df088: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2df088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2df08c:
    // 0x2df08c: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2df08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_2df090:
    // 0x2df090: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x2df090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
label_2df094:
    // 0x2df094: 0xc0675b0  jal         func_19D6C0
label_2df098:
    if (ctx->pc == 0x2DF098u) {
        ctx->pc = 0x2DF09Cu;
        goto label_2df09c;
    }
    ctx->pc = 0x2DF094u;
    SET_GPR_U32(ctx, 31, 0x2DF09Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2DF094u, 0x2DF09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF09Cu;
label_2df09c:
    // 0x2df09c: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x2df09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2df0a0:
    // 0x2df0a0: 0xc7ad0018  lwc1        $f13, 0x18($sp)
    ctx->pc = 0x2df0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2df0a4:
    // 0x2df0a4: 0xc0455e6  jal         func_115798
label_2df0a8:
    if (ctx->pc == 0x2DF0A8u) {
        ctx->pc = 0x2DF0ACu;
        goto label_2df0ac;
    }
    ctx->pc = 0x2DF0A4u;
    SET_GPR_U32(ctx, 31, 0x2DF0ACu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2DF0A4u, 0x2DF0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF0ACu;
label_2df0ac:
    // 0x2df0ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df0b0:
    // 0x2df0b0: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x2df0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
label_2df0b4:
    // 0x2df0b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2df0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2df0b8:
    // 0x2df0b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df0bc:
    // 0x2df0bc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2df0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2df0c0:
    // 0x2df0c0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2df0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2df0c4:
    // 0x2df0c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df0c8:
    // 0x2df0c8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2df0c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_2df0cc:
    // 0x2df0cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df0d0:
    // 0x2df0d0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2df0d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_2df0d4:
    // 0x2df0d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df0d8:
    // 0x2df0d8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2df0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_2df0dc:
    // 0x2df0dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df0e0:
    // 0x2df0e0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2df0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2df0e4:
    // 0x2df0e4: 0x10000042  b           . + 4 + (0x42 << 2)
label_2df0e8:
    if (ctx->pc == 0x2DF0E8u) {
        ctx->pc = 0x2DF0ECu;
        goto label_2df0ec;
    }
    ctx->pc = 0x2DF0E4u;
    {
        const bool branch_taken_0x2df0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df0e4) {
            ctx->pc = 0x2DF1F0u;
            goto label_2df1f0;
        }
    }
    ctx->pc = 0x2DF0ECu;
label_2df0ec:
    // 0x2df0ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df0f0:
    // 0x2df0f0: 0x8c6312c4  lw          $v1, 0x12C4($v1)
    ctx->pc = 0x2df0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4804)));
label_2df0f4:
    // 0x2df0f4: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2df0f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_2df0f8:
    // 0x2df0f8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_2df0fc:
    if (ctx->pc == 0x2DF0FCu) {
        ctx->pc = 0x2DF100u;
        goto label_2df100;
    }
    ctx->pc = 0x2DF0F8u;
    {
        const bool branch_taken_0x2df0f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df0f8) {
            ctx->pc = 0x2DF158u;
            goto label_2df158;
        }
    }
    ctx->pc = 0x2DF100u;
label_2df100:
    // 0x2df100: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df104:
    // 0x2df104: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2df104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df108:
    // 0x2df108: 0xc46c12d0  lwc1        $f12, 0x12D0($v1)
    ctx->pc = 0x2df108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2df10c:
    // 0x2df10c: 0xc44d12d8  lwc1        $f13, 0x12D8($v0)
    ctx->pc = 0x2df10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2df110:
    // 0x2df110: 0xc0455e6  jal         func_115798
label_2df114:
    if (ctx->pc == 0x2DF114u) {
        ctx->pc = 0x2DF118u;
        goto label_2df118;
    }
    ctx->pc = 0x2DF110u;
    SET_GPR_U32(ctx, 31, 0x2DF118u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2DF110u, 0x2DF118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF118u;
label_2df118:
    // 0x2df118: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df11c:
    // 0x2df11c: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x2df11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
label_2df120:
    // 0x2df120: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2df120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2df124:
    // 0x2df124: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df128:
    // 0x2df128: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2df128u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2df12c:
    // 0x2df12c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2df12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2df130:
    // 0x2df130: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df134:
    // 0x2df134: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2df134u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_2df138:
    // 0x2df138: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df13c:
    // 0x2df13c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2df13cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_2df140:
    // 0x2df140: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df144:
    // 0x2df144: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2df144u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_2df148:
    // 0x2df148: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df14c:
    // 0x2df14c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2df14cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2df150:
    // 0x2df150: 0x10000027  b           . + 4 + (0x27 << 2)
label_2df154:
    if (ctx->pc == 0x2DF154u) {
        ctx->pc = 0x2DF158u;
        goto label_2df158;
    }
    ctx->pc = 0x2DF150u;
    {
        const bool branch_taken_0x2df150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df150) {
            ctx->pc = 0x2DF1F0u;
            goto label_2df1f0;
        }
    }
    ctx->pc = 0x2DF158u;
label_2df158:
    // 0x2df158: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df15c:
    // 0x2df15c: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x2df15cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
label_2df160:
    // 0x2df160: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2df160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2df164:
    // 0x2df164: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x2df164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_2df168:
    // 0x2df168: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_2df16c:
    if (ctx->pc == 0x2DF16Cu) {
        ctx->pc = 0x2DF170u;
        goto label_2df170;
    }
    ctx->pc = 0x2DF168u;
    {
        const bool branch_taken_0x2df168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df168) {
            ctx->pc = 0x2DF1A8u;
            goto label_2df1a8;
        }
    }
    ctx->pc = 0x2DF170u;
label_2df170:
    // 0x2df170: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2df170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2df174:
    // 0x2df174: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df178:
    // 0x2df178: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2df178u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2df17c:
    // 0x2df17c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2df17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2df180:
    // 0x2df180: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df184:
    // 0x2df184: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2df184u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_2df188:
    // 0x2df188: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df18c:
    // 0x2df18c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2df18cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_2df190:
    // 0x2df190: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df194:
    // 0x2df194: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2df194u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_2df198:
    // 0x2df198: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df19c:
    // 0x2df19c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2df19cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2df1a0:
    // 0x2df1a0: 0x10000013  b           . + 4 + (0x13 << 2)
label_2df1a4:
    if (ctx->pc == 0x2DF1A4u) {
        ctx->pc = 0x2DF1A8u;
        goto label_2df1a8;
    }
    ctx->pc = 0x2DF1A0u;
    {
        const bool branch_taken_0x2df1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df1a0) {
            ctx->pc = 0x2DF1F0u;
            goto label_2df1f0;
        }
    }
    ctx->pc = 0x2DF1A8u;
label_2df1a8:
    // 0x2df1a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df1ac:
    // 0x2df1ac: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2df1acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_2df1b0:
    // 0x2df1b0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_2df1b4:
    if (ctx->pc == 0x2DF1B4u) {
        ctx->pc = 0x2DF1B8u;
        goto label_2df1b8;
    }
    ctx->pc = 0x2DF1B0u;
    {
        const bool branch_taken_0x2df1b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df1b0) {
            ctx->pc = 0x2DF1F0u;
            goto label_2df1f0;
        }
    }
    ctx->pc = 0x2DF1B8u;
label_2df1b8:
    // 0x2df1b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2df1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2df1bc:
    // 0x2df1bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df1c0:
    // 0x2df1c0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2df1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2df1c4:
    // 0x2df1c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2df1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2df1c8:
    // 0x2df1c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df1cc:
    // 0x2df1cc: 0xa0650001  sb          $a1, 0x1($v1)
    ctx->pc = 0x2df1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 5));
label_2df1d0:
    // 0x2df1d0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2df1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df1d4:
    // 0x2df1d4: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2df1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_2df1d8:
    // 0x2df1d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df1dc:
    // 0x2df1dc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2df1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_2df1e0:
    // 0x2df1e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2df1e4:
    // 0x2df1e4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2df1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2df1e8:
    // 0x2df1e8: 0x10000001  b           . + 4 + (0x1 << 2)
label_2df1ec:
    if (ctx->pc == 0x2DF1ECu) {
        ctx->pc = 0x2DF1F0u;
        goto label_2df1f0;
    }
    ctx->pc = 0x2DF1E8u;
    {
        const bool branch_taken_0x2df1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df1e8) {
            ctx->pc = 0x2DF1F0u;
            goto label_2df1f0;
        }
    }
    ctx->pc = 0x2DF1F0u;
label_2df1f0:
    // 0x2df1f0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2df1f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2df1f4:
    // 0x2df1f4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2df1f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2df1f8:
    // 0x2df1f8: 0x3e00008  jr          $ra
label_2df1fc:
    if (ctx->pc == 0x2DF1FCu) {
        ctx->pc = 0x2DF200u;
        goto label_fallthrough_0x2df1f8;
    }
    ctx->pc = 0x2DF1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2df1f8:
    ctx->pc = 0x2DF200u;
}
