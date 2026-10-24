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

// Function: Pl_r1_s_slope_run
// Address: 0x14b680 - 0x14bdb0
void Pl_r1_s_slope_run_0x14b680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_s_slope_run_0x14b680");
#endif

    switch (ctx->pc) {
        case 0x14b680u: goto label_14b680;
        case 0x14b684u: goto label_14b684;
        case 0x14b688u: goto label_14b688;
        case 0x14b68cu: goto label_14b68c;
        case 0x14b690u: goto label_14b690;
        case 0x14b694u: goto label_14b694;
        case 0x14b698u: goto label_14b698;
        case 0x14b69cu: goto label_14b69c;
        case 0x14b6a0u: goto label_14b6a0;
        case 0x14b6a4u: goto label_14b6a4;
        case 0x14b6a8u: goto label_14b6a8;
        case 0x14b6acu: goto label_14b6ac;
        case 0x14b6b0u: goto label_14b6b0;
        case 0x14b6b4u: goto label_14b6b4;
        case 0x14b6b8u: goto label_14b6b8;
        case 0x14b6bcu: goto label_14b6bc;
        case 0x14b6c0u: goto label_14b6c0;
        case 0x14b6c4u: goto label_14b6c4;
        case 0x14b6c8u: goto label_14b6c8;
        case 0x14b6ccu: goto label_14b6cc;
        case 0x14b6d0u: goto label_14b6d0;
        case 0x14b6d4u: goto label_14b6d4;
        case 0x14b6d8u: goto label_14b6d8;
        case 0x14b6dcu: goto label_14b6dc;
        case 0x14b6e0u: goto label_14b6e0;
        case 0x14b6e4u: goto label_14b6e4;
        case 0x14b6e8u: goto label_14b6e8;
        case 0x14b6ecu: goto label_14b6ec;
        case 0x14b6f0u: goto label_14b6f0;
        case 0x14b6f4u: goto label_14b6f4;
        case 0x14b6f8u: goto label_14b6f8;
        case 0x14b6fcu: goto label_14b6fc;
        case 0x14b700u: goto label_14b700;
        case 0x14b704u: goto label_14b704;
        case 0x14b708u: goto label_14b708;
        case 0x14b70cu: goto label_14b70c;
        case 0x14b710u: goto label_14b710;
        case 0x14b714u: goto label_14b714;
        case 0x14b718u: goto label_14b718;
        case 0x14b71cu: goto label_14b71c;
        case 0x14b720u: goto label_14b720;
        case 0x14b724u: goto label_14b724;
        case 0x14b728u: goto label_14b728;
        case 0x14b72cu: goto label_14b72c;
        case 0x14b730u: goto label_14b730;
        case 0x14b734u: goto label_14b734;
        case 0x14b738u: goto label_14b738;
        case 0x14b73cu: goto label_14b73c;
        case 0x14b740u: goto label_14b740;
        case 0x14b744u: goto label_14b744;
        case 0x14b748u: goto label_14b748;
        case 0x14b74cu: goto label_14b74c;
        case 0x14b750u: goto label_14b750;
        case 0x14b754u: goto label_14b754;
        case 0x14b758u: goto label_14b758;
        case 0x14b75cu: goto label_14b75c;
        case 0x14b760u: goto label_14b760;
        case 0x14b764u: goto label_14b764;
        case 0x14b768u: goto label_14b768;
        case 0x14b76cu: goto label_14b76c;
        case 0x14b770u: goto label_14b770;
        case 0x14b774u: goto label_14b774;
        case 0x14b778u: goto label_14b778;
        case 0x14b77cu: goto label_14b77c;
        case 0x14b780u: goto label_14b780;
        case 0x14b784u: goto label_14b784;
        case 0x14b788u: goto label_14b788;
        case 0x14b78cu: goto label_14b78c;
        case 0x14b790u: goto label_14b790;
        case 0x14b794u: goto label_14b794;
        case 0x14b798u: goto label_14b798;
        case 0x14b79cu: goto label_14b79c;
        case 0x14b7a0u: goto label_14b7a0;
        case 0x14b7a4u: goto label_14b7a4;
        case 0x14b7a8u: goto label_14b7a8;
        case 0x14b7acu: goto label_14b7ac;
        case 0x14b7b0u: goto label_14b7b0;
        case 0x14b7b4u: goto label_14b7b4;
        case 0x14b7b8u: goto label_14b7b8;
        case 0x14b7bcu: goto label_14b7bc;
        case 0x14b7c0u: goto label_14b7c0;
        case 0x14b7c4u: goto label_14b7c4;
        case 0x14b7c8u: goto label_14b7c8;
        case 0x14b7ccu: goto label_14b7cc;
        case 0x14b7d0u: goto label_14b7d0;
        case 0x14b7d4u: goto label_14b7d4;
        case 0x14b7d8u: goto label_14b7d8;
        case 0x14b7dcu: goto label_14b7dc;
        case 0x14b7e0u: goto label_14b7e0;
        case 0x14b7e4u: goto label_14b7e4;
        case 0x14b7e8u: goto label_14b7e8;
        case 0x14b7ecu: goto label_14b7ec;
        case 0x14b7f0u: goto label_14b7f0;
        case 0x14b7f4u: goto label_14b7f4;
        case 0x14b7f8u: goto label_14b7f8;
        case 0x14b7fcu: goto label_14b7fc;
        case 0x14b800u: goto label_14b800;
        case 0x14b804u: goto label_14b804;
        case 0x14b808u: goto label_14b808;
        case 0x14b80cu: goto label_14b80c;
        case 0x14b810u: goto label_14b810;
        case 0x14b814u: goto label_14b814;
        case 0x14b818u: goto label_14b818;
        case 0x14b81cu: goto label_14b81c;
        case 0x14b820u: goto label_14b820;
        case 0x14b824u: goto label_14b824;
        case 0x14b828u: goto label_14b828;
        case 0x14b82cu: goto label_14b82c;
        case 0x14b830u: goto label_14b830;
        case 0x14b834u: goto label_14b834;
        case 0x14b838u: goto label_14b838;
        case 0x14b83cu: goto label_14b83c;
        case 0x14b840u: goto label_14b840;
        case 0x14b844u: goto label_14b844;
        case 0x14b848u: goto label_14b848;
        case 0x14b84cu: goto label_14b84c;
        case 0x14b850u: goto label_14b850;
        case 0x14b854u: goto label_14b854;
        case 0x14b858u: goto label_14b858;
        case 0x14b85cu: goto label_14b85c;
        case 0x14b860u: goto label_14b860;
        case 0x14b864u: goto label_14b864;
        case 0x14b868u: goto label_14b868;
        case 0x14b86cu: goto label_14b86c;
        case 0x14b870u: goto label_14b870;
        case 0x14b874u: goto label_14b874;
        case 0x14b878u: goto label_14b878;
        case 0x14b87cu: goto label_14b87c;
        case 0x14b880u: goto label_14b880;
        case 0x14b884u: goto label_14b884;
        case 0x14b888u: goto label_14b888;
        case 0x14b88cu: goto label_14b88c;
        case 0x14b890u: goto label_14b890;
        case 0x14b894u: goto label_14b894;
        case 0x14b898u: goto label_14b898;
        case 0x14b89cu: goto label_14b89c;
        case 0x14b8a0u: goto label_14b8a0;
        case 0x14b8a4u: goto label_14b8a4;
        case 0x14b8a8u: goto label_14b8a8;
        case 0x14b8acu: goto label_14b8ac;
        case 0x14b8b0u: goto label_14b8b0;
        case 0x14b8b4u: goto label_14b8b4;
        case 0x14b8b8u: goto label_14b8b8;
        case 0x14b8bcu: goto label_14b8bc;
        case 0x14b8c0u: goto label_14b8c0;
        case 0x14b8c4u: goto label_14b8c4;
        case 0x14b8c8u: goto label_14b8c8;
        case 0x14b8ccu: goto label_14b8cc;
        case 0x14b8d0u: goto label_14b8d0;
        case 0x14b8d4u: goto label_14b8d4;
        case 0x14b8d8u: goto label_14b8d8;
        case 0x14b8dcu: goto label_14b8dc;
        case 0x14b8e0u: goto label_14b8e0;
        case 0x14b8e4u: goto label_14b8e4;
        case 0x14b8e8u: goto label_14b8e8;
        case 0x14b8ecu: goto label_14b8ec;
        case 0x14b8f0u: goto label_14b8f0;
        case 0x14b8f4u: goto label_14b8f4;
        case 0x14b8f8u: goto label_14b8f8;
        case 0x14b8fcu: goto label_14b8fc;
        case 0x14b900u: goto label_14b900;
        case 0x14b904u: goto label_14b904;
        case 0x14b908u: goto label_14b908;
        case 0x14b90cu: goto label_14b90c;
        case 0x14b910u: goto label_14b910;
        case 0x14b914u: goto label_14b914;
        case 0x14b918u: goto label_14b918;
        case 0x14b91cu: goto label_14b91c;
        case 0x14b920u: goto label_14b920;
        case 0x14b924u: goto label_14b924;
        case 0x14b928u: goto label_14b928;
        case 0x14b92cu: goto label_14b92c;
        case 0x14b930u: goto label_14b930;
        case 0x14b934u: goto label_14b934;
        case 0x14b938u: goto label_14b938;
        case 0x14b93cu: goto label_14b93c;
        case 0x14b940u: goto label_14b940;
        case 0x14b944u: goto label_14b944;
        case 0x14b948u: goto label_14b948;
        case 0x14b94cu: goto label_14b94c;
        case 0x14b950u: goto label_14b950;
        case 0x14b954u: goto label_14b954;
        case 0x14b958u: goto label_14b958;
        case 0x14b95cu: goto label_14b95c;
        case 0x14b960u: goto label_14b960;
        case 0x14b964u: goto label_14b964;
        case 0x14b968u: goto label_14b968;
        case 0x14b96cu: goto label_14b96c;
        case 0x14b970u: goto label_14b970;
        case 0x14b974u: goto label_14b974;
        case 0x14b978u: goto label_14b978;
        case 0x14b97cu: goto label_14b97c;
        case 0x14b980u: goto label_14b980;
        case 0x14b984u: goto label_14b984;
        case 0x14b988u: goto label_14b988;
        case 0x14b98cu: goto label_14b98c;
        case 0x14b990u: goto label_14b990;
        case 0x14b994u: goto label_14b994;
        case 0x14b998u: goto label_14b998;
        case 0x14b99cu: goto label_14b99c;
        case 0x14b9a0u: goto label_14b9a0;
        case 0x14b9a4u: goto label_14b9a4;
        case 0x14b9a8u: goto label_14b9a8;
        case 0x14b9acu: goto label_14b9ac;
        case 0x14b9b0u: goto label_14b9b0;
        case 0x14b9b4u: goto label_14b9b4;
        case 0x14b9b8u: goto label_14b9b8;
        case 0x14b9bcu: goto label_14b9bc;
        case 0x14b9c0u: goto label_14b9c0;
        case 0x14b9c4u: goto label_14b9c4;
        case 0x14b9c8u: goto label_14b9c8;
        case 0x14b9ccu: goto label_14b9cc;
        case 0x14b9d0u: goto label_14b9d0;
        case 0x14b9d4u: goto label_14b9d4;
        case 0x14b9d8u: goto label_14b9d8;
        case 0x14b9dcu: goto label_14b9dc;
        case 0x14b9e0u: goto label_14b9e0;
        case 0x14b9e4u: goto label_14b9e4;
        case 0x14b9e8u: goto label_14b9e8;
        case 0x14b9ecu: goto label_14b9ec;
        case 0x14b9f0u: goto label_14b9f0;
        case 0x14b9f4u: goto label_14b9f4;
        case 0x14b9f8u: goto label_14b9f8;
        case 0x14b9fcu: goto label_14b9fc;
        case 0x14ba00u: goto label_14ba00;
        case 0x14ba04u: goto label_14ba04;
        case 0x14ba08u: goto label_14ba08;
        case 0x14ba0cu: goto label_14ba0c;
        case 0x14ba10u: goto label_14ba10;
        case 0x14ba14u: goto label_14ba14;
        case 0x14ba18u: goto label_14ba18;
        case 0x14ba1cu: goto label_14ba1c;
        case 0x14ba20u: goto label_14ba20;
        case 0x14ba24u: goto label_14ba24;
        case 0x14ba28u: goto label_14ba28;
        case 0x14ba2cu: goto label_14ba2c;
        case 0x14ba30u: goto label_14ba30;
        case 0x14ba34u: goto label_14ba34;
        case 0x14ba38u: goto label_14ba38;
        case 0x14ba3cu: goto label_14ba3c;
        case 0x14ba40u: goto label_14ba40;
        case 0x14ba44u: goto label_14ba44;
        case 0x14ba48u: goto label_14ba48;
        case 0x14ba4cu: goto label_14ba4c;
        case 0x14ba50u: goto label_14ba50;
        case 0x14ba54u: goto label_14ba54;
        case 0x14ba58u: goto label_14ba58;
        case 0x14ba5cu: goto label_14ba5c;
        case 0x14ba60u: goto label_14ba60;
        case 0x14ba64u: goto label_14ba64;
        case 0x14ba68u: goto label_14ba68;
        case 0x14ba6cu: goto label_14ba6c;
        case 0x14ba70u: goto label_14ba70;
        case 0x14ba74u: goto label_14ba74;
        case 0x14ba78u: goto label_14ba78;
        case 0x14ba7cu: goto label_14ba7c;
        case 0x14ba80u: goto label_14ba80;
        case 0x14ba84u: goto label_14ba84;
        case 0x14ba88u: goto label_14ba88;
        case 0x14ba8cu: goto label_14ba8c;
        case 0x14ba90u: goto label_14ba90;
        case 0x14ba94u: goto label_14ba94;
        case 0x14ba98u: goto label_14ba98;
        case 0x14ba9cu: goto label_14ba9c;
        case 0x14baa0u: goto label_14baa0;
        case 0x14baa4u: goto label_14baa4;
        case 0x14baa8u: goto label_14baa8;
        case 0x14baacu: goto label_14baac;
        case 0x14bab0u: goto label_14bab0;
        case 0x14bab4u: goto label_14bab4;
        case 0x14bab8u: goto label_14bab8;
        case 0x14babcu: goto label_14babc;
        case 0x14bac0u: goto label_14bac0;
        case 0x14bac4u: goto label_14bac4;
        case 0x14bac8u: goto label_14bac8;
        case 0x14baccu: goto label_14bacc;
        case 0x14bad0u: goto label_14bad0;
        case 0x14bad4u: goto label_14bad4;
        case 0x14bad8u: goto label_14bad8;
        case 0x14badcu: goto label_14badc;
        case 0x14bae0u: goto label_14bae0;
        case 0x14bae4u: goto label_14bae4;
        case 0x14bae8u: goto label_14bae8;
        case 0x14baecu: goto label_14baec;
        case 0x14baf0u: goto label_14baf0;
        case 0x14baf4u: goto label_14baf4;
        case 0x14baf8u: goto label_14baf8;
        case 0x14bafcu: goto label_14bafc;
        case 0x14bb00u: goto label_14bb00;
        case 0x14bb04u: goto label_14bb04;
        case 0x14bb08u: goto label_14bb08;
        case 0x14bb0cu: goto label_14bb0c;
        case 0x14bb10u: goto label_14bb10;
        case 0x14bb14u: goto label_14bb14;
        case 0x14bb18u: goto label_14bb18;
        case 0x14bb1cu: goto label_14bb1c;
        case 0x14bb20u: goto label_14bb20;
        case 0x14bb24u: goto label_14bb24;
        case 0x14bb28u: goto label_14bb28;
        case 0x14bb2cu: goto label_14bb2c;
        case 0x14bb30u: goto label_14bb30;
        case 0x14bb34u: goto label_14bb34;
        case 0x14bb38u: goto label_14bb38;
        case 0x14bb3cu: goto label_14bb3c;
        case 0x14bb40u: goto label_14bb40;
        case 0x14bb44u: goto label_14bb44;
        case 0x14bb48u: goto label_14bb48;
        case 0x14bb4cu: goto label_14bb4c;
        case 0x14bb50u: goto label_14bb50;
        case 0x14bb54u: goto label_14bb54;
        case 0x14bb58u: goto label_14bb58;
        case 0x14bb5cu: goto label_14bb5c;
        case 0x14bb60u: goto label_14bb60;
        case 0x14bb64u: goto label_14bb64;
        case 0x14bb68u: goto label_14bb68;
        case 0x14bb6cu: goto label_14bb6c;
        case 0x14bb70u: goto label_14bb70;
        case 0x14bb74u: goto label_14bb74;
        case 0x14bb78u: goto label_14bb78;
        case 0x14bb7cu: goto label_14bb7c;
        case 0x14bb80u: goto label_14bb80;
        case 0x14bb84u: goto label_14bb84;
        case 0x14bb88u: goto label_14bb88;
        case 0x14bb8cu: goto label_14bb8c;
        case 0x14bb90u: goto label_14bb90;
        case 0x14bb94u: goto label_14bb94;
        case 0x14bb98u: goto label_14bb98;
        case 0x14bb9cu: goto label_14bb9c;
        case 0x14bba0u: goto label_14bba0;
        case 0x14bba4u: goto label_14bba4;
        case 0x14bba8u: goto label_14bba8;
        case 0x14bbacu: goto label_14bbac;
        case 0x14bbb0u: goto label_14bbb0;
        case 0x14bbb4u: goto label_14bbb4;
        case 0x14bbb8u: goto label_14bbb8;
        case 0x14bbbcu: goto label_14bbbc;
        case 0x14bbc0u: goto label_14bbc0;
        case 0x14bbc4u: goto label_14bbc4;
        case 0x14bbc8u: goto label_14bbc8;
        case 0x14bbccu: goto label_14bbcc;
        case 0x14bbd0u: goto label_14bbd0;
        case 0x14bbd4u: goto label_14bbd4;
        case 0x14bbd8u: goto label_14bbd8;
        case 0x14bbdcu: goto label_14bbdc;
        case 0x14bbe0u: goto label_14bbe0;
        case 0x14bbe4u: goto label_14bbe4;
        case 0x14bbe8u: goto label_14bbe8;
        case 0x14bbecu: goto label_14bbec;
        case 0x14bbf0u: goto label_14bbf0;
        case 0x14bbf4u: goto label_14bbf4;
        case 0x14bbf8u: goto label_14bbf8;
        case 0x14bbfcu: goto label_14bbfc;
        case 0x14bc00u: goto label_14bc00;
        case 0x14bc04u: goto label_14bc04;
        case 0x14bc08u: goto label_14bc08;
        case 0x14bc0cu: goto label_14bc0c;
        case 0x14bc10u: goto label_14bc10;
        case 0x14bc14u: goto label_14bc14;
        case 0x14bc18u: goto label_14bc18;
        case 0x14bc1cu: goto label_14bc1c;
        case 0x14bc20u: goto label_14bc20;
        case 0x14bc24u: goto label_14bc24;
        case 0x14bc28u: goto label_14bc28;
        case 0x14bc2cu: goto label_14bc2c;
        case 0x14bc30u: goto label_14bc30;
        case 0x14bc34u: goto label_14bc34;
        case 0x14bc38u: goto label_14bc38;
        case 0x14bc3cu: goto label_14bc3c;
        case 0x14bc40u: goto label_14bc40;
        case 0x14bc44u: goto label_14bc44;
        case 0x14bc48u: goto label_14bc48;
        case 0x14bc4cu: goto label_14bc4c;
        case 0x14bc50u: goto label_14bc50;
        case 0x14bc54u: goto label_14bc54;
        case 0x14bc58u: goto label_14bc58;
        case 0x14bc5cu: goto label_14bc5c;
        case 0x14bc60u: goto label_14bc60;
        case 0x14bc64u: goto label_14bc64;
        case 0x14bc68u: goto label_14bc68;
        case 0x14bc6cu: goto label_14bc6c;
        case 0x14bc70u: goto label_14bc70;
        case 0x14bc74u: goto label_14bc74;
        case 0x14bc78u: goto label_14bc78;
        case 0x14bc7cu: goto label_14bc7c;
        case 0x14bc80u: goto label_14bc80;
        case 0x14bc84u: goto label_14bc84;
        case 0x14bc88u: goto label_14bc88;
        case 0x14bc8cu: goto label_14bc8c;
        case 0x14bc90u: goto label_14bc90;
        case 0x14bc94u: goto label_14bc94;
        case 0x14bc98u: goto label_14bc98;
        case 0x14bc9cu: goto label_14bc9c;
        case 0x14bca0u: goto label_14bca0;
        case 0x14bca4u: goto label_14bca4;
        case 0x14bca8u: goto label_14bca8;
        case 0x14bcacu: goto label_14bcac;
        case 0x14bcb0u: goto label_14bcb0;
        case 0x14bcb4u: goto label_14bcb4;
        case 0x14bcb8u: goto label_14bcb8;
        case 0x14bcbcu: goto label_14bcbc;
        case 0x14bcc0u: goto label_14bcc0;
        case 0x14bcc4u: goto label_14bcc4;
        case 0x14bcc8u: goto label_14bcc8;
        case 0x14bcccu: goto label_14bccc;
        case 0x14bcd0u: goto label_14bcd0;
        case 0x14bcd4u: goto label_14bcd4;
        case 0x14bcd8u: goto label_14bcd8;
        case 0x14bcdcu: goto label_14bcdc;
        case 0x14bce0u: goto label_14bce0;
        case 0x14bce4u: goto label_14bce4;
        case 0x14bce8u: goto label_14bce8;
        case 0x14bcecu: goto label_14bcec;
        case 0x14bcf0u: goto label_14bcf0;
        case 0x14bcf4u: goto label_14bcf4;
        case 0x14bcf8u: goto label_14bcf8;
        case 0x14bcfcu: goto label_14bcfc;
        case 0x14bd00u: goto label_14bd00;
        case 0x14bd04u: goto label_14bd04;
        case 0x14bd08u: goto label_14bd08;
        case 0x14bd0cu: goto label_14bd0c;
        case 0x14bd10u: goto label_14bd10;
        case 0x14bd14u: goto label_14bd14;
        case 0x14bd18u: goto label_14bd18;
        case 0x14bd1cu: goto label_14bd1c;
        case 0x14bd20u: goto label_14bd20;
        case 0x14bd24u: goto label_14bd24;
        case 0x14bd28u: goto label_14bd28;
        case 0x14bd2cu: goto label_14bd2c;
        case 0x14bd30u: goto label_14bd30;
        case 0x14bd34u: goto label_14bd34;
        case 0x14bd38u: goto label_14bd38;
        case 0x14bd3cu: goto label_14bd3c;
        case 0x14bd40u: goto label_14bd40;
        case 0x14bd44u: goto label_14bd44;
        case 0x14bd48u: goto label_14bd48;
        case 0x14bd4cu: goto label_14bd4c;
        case 0x14bd50u: goto label_14bd50;
        case 0x14bd54u: goto label_14bd54;
        case 0x14bd58u: goto label_14bd58;
        case 0x14bd5cu: goto label_14bd5c;
        case 0x14bd60u: goto label_14bd60;
        case 0x14bd64u: goto label_14bd64;
        case 0x14bd68u: goto label_14bd68;
        case 0x14bd6cu: goto label_14bd6c;
        case 0x14bd70u: goto label_14bd70;
        case 0x14bd74u: goto label_14bd74;
        case 0x14bd78u: goto label_14bd78;
        case 0x14bd7cu: goto label_14bd7c;
        case 0x14bd80u: goto label_14bd80;
        case 0x14bd84u: goto label_14bd84;
        case 0x14bd88u: goto label_14bd88;
        case 0x14bd8cu: goto label_14bd8c;
        case 0x14bd90u: goto label_14bd90;
        case 0x14bd94u: goto label_14bd94;
        case 0x14bd98u: goto label_14bd98;
        case 0x14bd9cu: goto label_14bd9c;
        case 0x14bda0u: goto label_14bda0;
        case 0x14bda4u: goto label_14bda4;
        case 0x14bda8u: goto label_14bda8;
        case 0x14bdacu: goto label_14bdac;
        default: break;
    }

    ctx->pc = 0x14b680u;

label_14b680:
    // 0x14b680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14b680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_14b684:
    // 0x14b684: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x14b684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_14b688:
    // 0x14b688: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x14b688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_14b68c:
    // 0x14b68c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b690:
    // 0x14b690: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x14b690u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14b694:
    // 0x14b694: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x14b694u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14b698:
    // 0x14b698: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x14b698u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_14b69c:
    // 0x14b69c: 0x102001c0  beqz        $at, . + 4 + (0x1C0 << 2)
label_14b6a0:
    if (ctx->pc == 0x14B6A0u) {
        ctx->pc = 0x14B6A4u;
        goto label_14b6a4;
    }
    ctx->pc = 0x14B69Cu;
    {
        const bool branch_taken_0x14b69c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b69c) {
            ctx->pc = 0x14BDA0u;
            goto label_14bda0;
        }
    }
    ctx->pc = 0x14B6A4u;
label_14b6a4:
    // 0x14b6a4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x14b6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_14b6a8:
    // 0x14b6a8: 0x2464e8a0  addiu       $a0, $v1, -0x1760
    ctx->pc = 0x14b6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961312));
label_14b6ac:
    // 0x14b6ac: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x14b6acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_14b6b0:
    // 0x14b6b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14b6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_14b6b4:
    // 0x14b6b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14b6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14b6b8:
    // 0x14b6b8: 0x600008  jr          $v1
label_14b6bc:
    if (ctx->pc == 0x14B6BCu) {
        ctx->pc = 0x14B6C0u;
        goto label_14b6c0;
    }
    ctx->pc = 0x14B6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B6B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14B6C0u;
label_14b6c0:
    // 0x14b6c0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x14b6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_14b6c4:
    // 0x14b6c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b6c8:
    // 0x14b6c8: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x14b6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_14b6cc:
    // 0x14b6cc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b6d0:
    // 0x14b6d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b6d4:
    // 0x14b6d4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14b6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_14b6d8:
    // 0x14b6d8: 0x24060a28  addiu       $a2, $zero, 0xA28
    ctx->pc = 0x14b6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2600));
label_14b6dc:
    // 0x14b6dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14b6dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14b6e0:
    // 0x14b6e0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14b6e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14b6e4:
    // 0x14b6e4: 0xc0965d0  jal         func_259740
label_14b6e8:
    if (ctx->pc == 0x14B6E8u) {
        ctx->pc = 0x14B6ECu;
        goto label_14b6ec;
    }
    ctx->pc = 0x14B6E4u;
    SET_GPR_U32(ctx, 31, 0x14B6ECu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14B6E4u, 0x14B6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B6ECu;
label_14b6ec:
    // 0x14b6ec: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x14b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_14b6f0:
    // 0x14b6f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b6f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14b6f4:
    // 0x14b6f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b6f8:
    // 0x14b6f8: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x14b6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_14b6fc:
    // 0x14b6fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14b6fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14b700:
    // 0x14b700: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b704:
    // 0x14b704: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x14b704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
label_14b708:
    // 0x14b708: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x14b708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_14b70c:
    // 0x14b70c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b710:
    // 0x14b710: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x14b710u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_14b714:
    // 0x14b714: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b718:
    // 0x14b718: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b71c:
    // 0x14b71c: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x14b71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14b720:
    // 0x14b720: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x14b720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_14b724:
    // 0x14b724: 0xc058f20  jal         func_163C80
label_14b728:
    if (ctx->pc == 0x14B728u) {
        ctx->pc = 0x14B72Cu;
        goto label_14b72c;
    }
    ctx->pc = 0x14B724u;
    SET_GPR_U32(ctx, 31, 0x14B72Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x14B724u, 0x14B72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B72Cu;
label_14b72c:
    // 0x14b72c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b730:
    // 0x14b730: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x14b730u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
label_14b734:
    // 0x14b734: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14b734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14b738:
    // 0x14b738: 0x0  nop
    ctx->pc = 0x14b738u;
    // NOP
label_14b73c:
    // 0x14b73c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14b73cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_14b740:
    // 0x14b740: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x14b740u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_14b744:
    // 0x14b744: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b748:
    // 0x14b748: 0xe4401578  swc1        $f0, 0x1578($v0)
    ctx->pc = 0x14b748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5496), bits); }
label_14b74c:
    // 0x14b74c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b750:
    // 0x14b750: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14b750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14b754:
    // 0x14b754: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14b754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14b758:
    // 0x14b758: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14b758u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14b75c:
    // 0x14b75c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b760:
    // 0x14b760: 0x944209ee  lhu         $v0, 0x9EE($v0)
    ctx->pc = 0x14b760u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2542)));
label_14b764:
    // 0x14b764: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x14b764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_14b768:
    // 0x14b768: 0x28420034  slti        $v0, $v0, 0x34
    ctx->pc = 0x14b768u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)52) ? 1 : 0);
label_14b76c:
    // 0x14b76c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_14b770:
    if (ctx->pc == 0x14B770u) {
        ctx->pc = 0x14B774u;
        goto label_14b774;
    }
    ctx->pc = 0x14B76Cu;
    {
        const bool branch_taken_0x14b76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b76c) {
            ctx->pc = 0x14B798u;
            goto label_14b798;
        }
    }
    ctx->pc = 0x14B774u;
label_14b774:
    // 0x14b774: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b778:
    // 0x14b778: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b77c:
    // 0x14b77c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14b77cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_14b780:
    // 0x14b780: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x14b780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
label_14b784:
    // 0x14b784: 0x34460028  ori         $a2, $v0, 0x28
    ctx->pc = 0x14b784u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40);
label_14b788:
    // 0x14b788: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14b788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14b78c:
    // 0x14b78c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14b78cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14b790:
    // 0x14b790: 0xc0965d0  jal         func_259740
label_14b794:
    if (ctx->pc == 0x14B794u) {
        ctx->pc = 0x14B798u;
        goto label_14b798;
    }
    ctx->pc = 0x14B790u;
    SET_GPR_U32(ctx, 31, 0x14B798u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14B790u, 0x14B798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B798u;
label_14b798:
    // 0x14b798: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b79c:
    // 0x14b79c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14b79cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14b7a0:
    // 0x14b7a0: 0xc096b40  jal         func_25AD00
label_14b7a4:
    if (ctx->pc == 0x14B7A4u) {
        ctx->pc = 0x14B7A8u;
        goto label_14b7a8;
    }
    ctx->pc = 0x14B7A0u;
    SET_GPR_U32(ctx, 31, 0x14B7A8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14B7A0u, 0x14B7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B7A8u;
label_14b7a8:
    // 0x14b7a8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b7ac:
    // 0x14b7ac: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x14b7acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
label_14b7b0:
    // 0x14b7b0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_14b7b4:
    if (ctx->pc == 0x14B7B4u) {
        ctx->pc = 0x14B7B8u;
        goto label_14b7b8;
    }
    ctx->pc = 0x14B7B0u;
    {
        const bool branch_taken_0x14b7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b7b0) {
            ctx->pc = 0x14B7F4u;
            goto label_14b7f4;
        }
    }
    ctx->pc = 0x14B7B8u;
label_14b7b8:
    // 0x14b7b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b7bc:
    // 0x14b7bc: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x14b7bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_14b7c0:
    // 0x14b7c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_14b7c4:
    // 0x14b7c4: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x14b7c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_14b7c8:
    // 0x14b7c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b7cc:
    // 0x14b7cc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x14b7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14b7d0:
    // 0x14b7d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b7d4:
    // 0x14b7d4: 0xc4401578  lwc1        $f0, 0x1578($v0)
    ctx->pc = 0x14b7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14b7d8:
    // 0x14b7d8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x14b7d8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_14b7dc:
    // 0x14b7dc: 0xc058fec  jal         func_163FB0
label_14b7e0:
    if (ctx->pc == 0x14B7E0u) {
        ctx->pc = 0x14B7E4u;
        goto label_14b7e4;
    }
    ctx->pc = 0x14B7DCu;
    SET_GPR_U32(ctx, 31, 0x14B7E4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x14B7DCu, 0x14B7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B7E4u;
label_14b7e4:
    // 0x14b7e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b7e8:
    // 0x14b7e8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14b7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_14b7ec:
    // 0x14b7ec: 0x10000005  b           . + 4 + (0x5 << 2)
label_14b7f0:
    if (ctx->pc == 0x14B7F0u) {
        ctx->pc = 0x14B7F4u;
        goto label_14b7f4;
    }
    ctx->pc = 0x14B7ECu;
    {
        const bool branch_taken_0x14b7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b7ec) {
            ctx->pc = 0x14B804u;
            goto label_14b804;
        }
    }
    ctx->pc = 0x14B7F4u;
label_14b7f4:
    // 0x14b7f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b7f8:
    // 0x14b7f8: 0xc4401290  lwc1        $f0, 0x1290($v0)
    ctx->pc = 0x14b7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14b7fc:
    // 0x14b7fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b800:
    // 0x14b800: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14b800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_14b804:
    // 0x14b804: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14b804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14b808:
    // 0x14b808: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b80c:
    // 0x14b80c: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x14b80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_14b810:
    // 0x14b810: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b814:
    // 0x14b814: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x14b814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14b818:
    // 0x14b818: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b81c:
    // 0x14b81c: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x14b81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14b820:
    // 0x14b820: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14b820u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14b824:
    // 0x14b824: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x14b824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_14b828:
    // 0x14b828: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b82c:
    // 0x14b82c: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x14b82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14b830:
    // 0x14b830: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x14b830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_14b834:
    // 0x14b834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14b838:
    // 0x14b838: 0x0  nop
    ctx->pc = 0x14b838u;
    // NOP
label_14b83c:
    // 0x14b83c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14b83cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_14b840:
    // 0x14b840: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x14b840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_14b844:
    // 0x14b844: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b848:
    // 0x14b848: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b84c:
    // 0x14b84c: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x14b84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14b850:
    // 0x14b850: 0xc05cd58  jal         func_173560
label_14b854:
    if (ctx->pc == 0x14B854u) {
        ctx->pc = 0x14B858u;
        goto label_14b858;
    }
    ctx->pc = 0x14B850u;
    SET_GPR_U32(ctx, 31, 0x14B858u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x14B850u, 0x14B858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B858u;
label_14b858:
    // 0x14b858: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14b858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14b85c:
    // 0x14b85c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b860:
    // 0x14b860: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14b860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_14b864:
    // 0x14b864: 0xc0573d8  jal         func_15CF60
label_14b868:
    if (ctx->pc == 0x14B868u) {
        ctx->pc = 0x14B86Cu;
        goto label_14b86c;
    }
    ctx->pc = 0x14B864u;
    SET_GPR_U32(ctx, 31, 0x14B86Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14B864u, 0x14B86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B86Cu;
label_14b86c:
    // 0x14b86c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b870:
    // 0x14b870: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b874:
    // 0x14b874: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x14b874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_14b878:
    // 0x14b878: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x14b878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_14b87c:
    // 0x14b87c: 0xc05cf7c  jal         func_173DF0
label_14b880:
    if (ctx->pc == 0x14B880u) {
        ctx->pc = 0x14B884u;
        goto label_14b884;
    }
    ctx->pc = 0x14B87Cu;
    SET_GPR_U32(ctx, 31, 0x14B884u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x14B87Cu, 0x14B884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B884u;
label_14b884:
    // 0x14b884: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x14b884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_14b888:
    // 0x14b888: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b88c:
    // 0x14b88c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x14b88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14b890:
    // 0x14b890: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x14b890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14b894:
    // 0x14b894: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14b894u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_14b898:
    // 0x14b898: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x14b898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_14b89c:
    // 0x14b89c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b8a0:
    // 0x14b8a0: 0x8c4312c4  lw          $v1, 0x12C4($v0)
    ctx->pc = 0x14b8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4804)));
label_14b8a4:
    // 0x14b8a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x14b8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14b8a8:
    // 0x14b8a8: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
label_14b8ac:
    if (ctx->pc == 0x14B8ACu) {
        ctx->pc = 0x14B8B0u;
        goto label_14b8b0;
    }
    ctx->pc = 0x14B8A8u;
    {
        const bool branch_taken_0x14b8a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14b8a8) {
            ctx->pc = 0x14B980u;
            goto label_14b980;
        }
    }
    ctx->pc = 0x14B8B0u;
label_14b8b0:
    // 0x14b8b0: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x14b8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14b8b4:
    // 0x14b8b4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x14b8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_14b8b8:
    // 0x14b8b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b8b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14b8bc:
    // 0x14b8bc: 0x0  nop
    ctx->pc = 0x14b8bcu;
    // NOP
label_14b8c0:
    // 0x14b8c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14b8c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14b8c4:
    // 0x14b8c4: 0x0  nop
    ctx->pc = 0x14b8c4u;
    // NOP
label_14b8c8:
    // 0x14b8c8: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
label_14b8cc:
    if (ctx->pc == 0x14B8CCu) {
        ctx->pc = 0x14B8D0u;
        goto label_14b8d0;
    }
    ctx->pc = 0x14B8C8u;
    {
        const bool branch_taken_0x14b8c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14b8c8) {
            ctx->pc = 0x14B934u;
            goto label_14b934;
        }
    }
    ctx->pc = 0x14B8D0u;
label_14b8d0:
    // 0x14b8d0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x14b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_14b8d4:
    // 0x14b8d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b8d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14b8d8:
    // 0x14b8d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b8dc:
    // 0x14b8dc: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x14b8dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_14b8e0:
    // 0x14b8e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b8e4:
    // 0x14b8e4: 0xc4411b54  lwc1        $f1, 0x1B54($v0)
    ctx->pc = 0x14b8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14b8e8:
    // 0x14b8e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b8ec:
    // 0x14b8ec: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x14b8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14b8f0:
    // 0x14b8f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14b8f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14b8f4:
    // 0x14b8f4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x14b8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_14b8f8:
    // 0x14b8f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b8fc:
    // 0x14b8fc: 0xc4411b54  lwc1        $f1, 0x1B54($v0)
    ctx->pc = 0x14b8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14b900:
    // 0x14b900: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b904:
    // 0x14b904: 0xc4401280  lwc1        $f0, 0x1280($v0)
    ctx->pc = 0x14b904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14b908:
    // 0x14b908: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14b908u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_14b90c:
    // 0x14b90c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b910:
    // 0x14b910: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x14b910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_14b914:
    // 0x14b914: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14b914u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14b918:
    // 0x14b918: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b91c:
    // 0x14b91c: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x14b91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
label_14b920:
    // 0x14b920: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x14b920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14b924:
    // 0x14b924: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b928:
    // 0x14b928: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x14b928u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_14b92c:
    // 0x14b92c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_14b930:
    if (ctx->pc == 0x14B930u) {
        ctx->pc = 0x14B934u;
        goto label_14b934;
    }
    ctx->pc = 0x14B92Cu;
    {
        const bool branch_taken_0x14b92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b92c) {
            ctx->pc = 0x14B9A4u;
            goto label_14b9a4;
        }
    }
    ctx->pc = 0x14B934u;
label_14b934:
    // 0x14b934: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x14b934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14b938:
    // 0x14b938: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b93c:
    // 0x14b93c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x14b93cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_14b940:
    // 0x14b940: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b944:
    // 0x14b944: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x14b944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_14b948:
    // 0x14b948: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14b948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14b94c:
    // 0x14b94c: 0xc4601b50  lwc1        $f0, 0x1B50($v1)
    ctx->pc = 0x14b94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14b950:
    // 0x14b950: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x14b950u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_14b954:
    // 0x14b954: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b958:
    // 0x14b958: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x14b958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
label_14b95c:
    // 0x14b95c: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x14b95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_14b960:
    // 0x14b960: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b964:
    // 0x14b964: 0xa44309ee  sh          $v1, 0x9EE($v0)
    ctx->pc = 0x14b964u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2542), (uint16_t)GPR_U32(ctx, 3));
label_14b968:
    // 0x14b968: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b96c:
    // 0x14b96c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14b96cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14b970:
    // 0x14b970: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14b970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14b974:
    // 0x14b974: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14b974u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14b978:
    // 0x14b978: 0x1000000a  b           . + 4 + (0xA << 2)
label_14b97c:
    if (ctx->pc == 0x14B97Cu) {
        ctx->pc = 0x14B980u;
        goto label_14b980;
    }
    ctx->pc = 0x14B978u;
    {
        const bool branch_taken_0x14b978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b978) {
            ctx->pc = 0x14B9A4u;
            goto label_14b9a4;
        }
    }
    ctx->pc = 0x14B980u;
label_14b980:
    // 0x14b980: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b984:
    // 0x14b984: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x14b984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14b988:
    // 0x14b988: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x14b988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14b98c:
    // 0x14b98c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14b98cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_14b990:
    // 0x14b990: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b994:
    // 0x14b994: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x14b994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
label_14b998:
    // 0x14b998: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x14b998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14b99c:
    // 0x14b99c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b9a0:
    // 0x14b9a0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x14b9a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_14b9a4:
    // 0x14b9a4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14b9a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14b9a8:
    // 0x14b9a8: 0xc097530  jal         func_25D4C0
label_14b9ac:
    if (ctx->pc == 0x14B9ACu) {
        ctx->pc = 0x14B9B0u;
        goto label_14b9b0;
    }
    ctx->pc = 0x14B9A8u;
    SET_GPR_U32(ctx, 31, 0x14B9B0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14B9A8u, 0x14B9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B9B0u;
label_14b9b0:
    // 0x14b9b0: 0x100000fb  b           . + 4 + (0xFB << 2)
label_14b9b4:
    if (ctx->pc == 0x14B9B4u) {
        ctx->pc = 0x14B9B8u;
        goto label_14b9b8;
    }
    ctx->pc = 0x14B9B0u;
    {
        const bool branch_taken_0x14b9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b9b0) {
            ctx->pc = 0x14BDA0u;
            goto label_14bda0;
        }
    }
    ctx->pc = 0x14B9B8u;
label_14b9b8:
    // 0x14b9b8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b9bc:
    // 0x14b9bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b9c0:
    // 0x14b9c0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14b9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_14b9c4:
    // 0x14b9c4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x14b9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_14b9c8:
    // 0x14b9c8: 0x34460028  ori         $a2, $v0, 0x28
    ctx->pc = 0x14b9c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40);
label_14b9cc:
    // 0x14b9cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14b9ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14b9d0:
    // 0x14b9d0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14b9d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14b9d4:
    // 0x14b9d4: 0xc0965d0  jal         func_259740
label_14b9d8:
    if (ctx->pc == 0x14B9D8u) {
        ctx->pc = 0x14B9DCu;
        goto label_14b9dc;
    }
    ctx->pc = 0x14B9D4u;
    SET_GPR_U32(ctx, 31, 0x14B9DCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14B9D4u, 0x14B9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B9DCu;
label_14b9dc:
    // 0x14b9dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b9e0:
    // 0x14b9e0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14b9e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14b9e4:
    // 0x14b9e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14b9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14b9e8:
    // 0x14b9e8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14b9e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14b9ec:
    // 0x14b9ec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14b9f0:
    // 0x14b9f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14b9f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14b9f4:
    // 0x14b9f4: 0xc096b40  jal         func_25AD00
label_14b9f8:
    if (ctx->pc == 0x14B9F8u) {
        ctx->pc = 0x14B9FCu;
        goto label_14b9fc;
    }
    ctx->pc = 0x14B9F4u;
    SET_GPR_U32(ctx, 31, 0x14B9FCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14B9F4u, 0x14B9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B9FCu;
label_14b9fc:
    // 0x14b9fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ba00:
    // 0x14ba00: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x14ba00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14ba04:
    // 0x14ba04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ba08:
    // 0x14ba08: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x14ba08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14ba0c:
    // 0x14ba0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14ba0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14ba10:
    // 0x14ba10: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x14ba10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_14ba14:
    // 0x14ba14: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ba14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ba18:
    // 0x14ba18: 0xc4411b54  lwc1        $f1, 0x1B54($v0)
    ctx->pc = 0x14ba18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14ba1c:
    // 0x14ba1c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ba20:
    // 0x14ba20: 0xc4401b50  lwc1        $f0, 0x1B50($v0)
    ctx->pc = 0x14ba20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14ba24:
    // 0x14ba24: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14ba24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_14ba28:
    // 0x14ba28: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x14ba28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_14ba2c:
    // 0x14ba2c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ba30:
    // 0x14ba30: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x14ba30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14ba34:
    // 0x14ba34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14ba34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14ba38:
    // 0x14ba38: 0x0  nop
    ctx->pc = 0x14ba38u;
    // NOP
label_14ba3c:
    // 0x14ba3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14ba3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14ba40:
    // 0x14ba40: 0x0  nop
    ctx->pc = 0x14ba40u;
    // NOP
label_14ba44:
    // 0x14ba44: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_14ba48:
    if (ctx->pc == 0x14BA48u) {
        ctx->pc = 0x14BA4Cu;
        goto label_14ba4c;
    }
    ctx->pc = 0x14BA44u;
    {
        const bool branch_taken_0x14ba44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14ba44) {
            ctx->pc = 0x14BA58u;
            goto label_14ba58;
        }
    }
    ctx->pc = 0x14BA4Cu;
label_14ba4c:
    // 0x14ba4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14ba4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14ba50:
    // 0x14ba50: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ba54:
    // 0x14ba54: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x14ba54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_14ba58:
    // 0x14ba58: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14ba58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ba5c:
    // 0x14ba5c: 0xc05cd10  jal         func_173440
label_14ba60:
    if (ctx->pc == 0x14BA60u) {
        ctx->pc = 0x14BA64u;
        goto label_14ba64;
    }
    ctx->pc = 0x14BA5Cu;
    SET_GPR_U32(ctx, 31, 0x14BA64u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14BA5Cu, 0x14BA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BA64u;
label_14ba64:
    // 0x14ba64: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14ba64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14ba68:
    // 0x14ba68: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14ba68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ba6c:
    // 0x14ba6c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14ba6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_14ba70:
    // 0x14ba70: 0xc0573d8  jal         func_15CF60
label_14ba74:
    if (ctx->pc == 0x14BA74u) {
        ctx->pc = 0x14BA78u;
        goto label_14ba78;
    }
    ctx->pc = 0x14BA70u;
    SET_GPR_U32(ctx, 31, 0x14BA78u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14BA70u, 0x14BA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BA78u;
label_14ba78:
    // 0x14ba78: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ba78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ba7c:
    // 0x14ba7c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ba80:
    // 0x14ba80: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x14ba80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_14ba84:
    // 0x14ba84: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x14ba84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_14ba88:
    // 0x14ba88: 0xc05cf7c  jal         func_173DF0
label_14ba8c:
    if (ctx->pc == 0x14BA8Cu) {
        ctx->pc = 0x14BA90u;
        goto label_14ba90;
    }
    ctx->pc = 0x14BA88u;
    SET_GPR_U32(ctx, 31, 0x14BA90u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x14BA88u, 0x14BA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BA90u;
label_14ba90:
    // 0x14ba90: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14ba94:
    // 0x14ba94: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x14ba94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_14ba98:
    // 0x14ba98: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14ba98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14ba9c:
    // 0x14ba9c: 0xc097530  jal         func_25D4C0
label_14baa0:
    if (ctx->pc == 0x14BAA0u) {
        ctx->pc = 0x14BAA4u;
        goto label_14baa4;
    }
    ctx->pc = 0x14BA9Cu;
    SET_GPR_U32(ctx, 31, 0x14BAA4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14BA9Cu, 0x14BAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BAA4u;
label_14baa4:
    // 0x14baa4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14baa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14baa8:
    // 0x14baa8: 0x946309ee  lhu         $v1, 0x9EE($v1)
    ctx->pc = 0x14baa8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2542)));
label_14baac:
    // 0x14baac: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x14baacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_14bab0:
    // 0x14bab0: 0x2861004a  slti        $at, $v1, 0x4A
    ctx->pc = 0x14bab0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)74) ? 1 : 0);
label_14bab4:
    // 0x14bab4: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
label_14bab8:
    if (ctx->pc == 0x14BAB8u) {
        ctx->pc = 0x14BABCu;
        goto label_14babc;
    }
    ctx->pc = 0x14BAB4u;
    {
        const bool branch_taken_0x14bab4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bab4) {
            ctx->pc = 0x14BAECu;
            goto label_14baec;
        }
    }
    ctx->pc = 0x14BABCu;
label_14babc:
    // 0x14babc: 0xc057acc  jal         func_15EB30
label_14bac0:
    if (ctx->pc == 0x14BAC0u) {
        ctx->pc = 0x14BAC4u;
        goto label_14bac4;
    }
    ctx->pc = 0x14BABCu;
    SET_GPR_U32(ctx, 31, 0x14BAC4u);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x14BABCu, 0x14BAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BAC4u;
label_14bac4:
    // 0x14bac4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_14bac8:
    if (ctx->pc == 0x14BAC8u) {
        ctx->pc = 0x14BACCu;
        goto label_14bacc;
    }
    ctx->pc = 0x14BAC4u;
    {
        const bool branch_taken_0x14bac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bac4) {
            ctx->pc = 0x14BAECu;
            goto label_14baec;
        }
    }
    ctx->pc = 0x14BACCu;
label_14bacc:
    // 0x14bacc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x14baccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_14bad0:
    // 0x14bad0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bad4:
    // 0x14bad4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14bad4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_14bad8:
    // 0x14bad8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14bad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14badc:
    // 0x14badc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14badcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bae0:
    // 0x14bae0: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x14bae0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_14bae4:
    // 0x14bae4: 0x100000ae  b           . + 4 + (0xAE << 2)
label_14bae8:
    if (ctx->pc == 0x14BAE8u) {
        ctx->pc = 0x14BAECu;
        goto label_14baec;
    }
    ctx->pc = 0x14BAE4u;
    {
        const bool branch_taken_0x14bae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bae4) {
            ctx->pc = 0x14BDA0u;
            goto label_14bda0;
        }
    }
    ctx->pc = 0x14BAECu;
label_14baec:
    // 0x14baec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14baecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14baf0:
    // 0x14baf0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14baf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_14baf4:
    // 0x14baf4: 0x106000aa  beqz        $v1, . + 4 + (0xAA << 2)
label_14baf8:
    if (ctx->pc == 0x14BAF8u) {
        ctx->pc = 0x14BAFCu;
        goto label_14bafc;
    }
    ctx->pc = 0x14BAF4u;
    {
        const bool branch_taken_0x14baf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14baf4) {
            ctx->pc = 0x14BDA0u;
            goto label_14bda0;
        }
    }
    ctx->pc = 0x14BAFCu;
label_14bafc:
    // 0x14bafc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14bafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14bb00:
    // 0x14bb00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bb04:
    // 0x14bb04: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x14bb04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_14bb08:
    // 0x14bb08: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bb0c:
    // 0x14bb0c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x14bb0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_14bb10:
    // 0x14bb10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bb14:
    // 0x14bb14: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x14bb14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_14bb18:
    // 0x14bb18: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bb1c:
    // 0x14bb1c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x14bb1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_14bb20:
    // 0x14bb20: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x14bb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_14bb24:
    // 0x14bb24: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bb28:
    // 0x14bb28: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14bb28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_14bb2c:
    // 0x14bb2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14bb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14bb30:
    // 0x14bb30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bb34:
    // 0x14bb34: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x14bb34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_14bb38:
    // 0x14bb38: 0x10000099  b           . + 4 + (0x99 << 2)
label_14bb3c:
    if (ctx->pc == 0x14BB3Cu) {
        ctx->pc = 0x14BB40u;
        goto label_14bb40;
    }
    ctx->pc = 0x14BB38u;
    {
        const bool branch_taken_0x14bb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bb38) {
            ctx->pc = 0x14BDA0u;
            goto label_14bda0;
        }
    }
    ctx->pc = 0x14BB40u;
label_14bb40:
    // 0x14bb40: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14bb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bb44:
    // 0x14bb44: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bb48:
    // 0x14bb48: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14bb48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_14bb4c:
    // 0x14bb4c: 0x24060a1b  addiu       $a2, $zero, 0xA1B
    ctx->pc = 0x14bb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2587));
label_14bb50:
    // 0x14bb50: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x14bb50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_14bb54:
    // 0x14bb54: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14bb54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14bb58:
    // 0x14bb58: 0xc0965d0  jal         func_259740
label_14bb5c:
    if (ctx->pc == 0x14BB5Cu) {
        ctx->pc = 0x14BB60u;
        goto label_14bb60;
    }
    ctx->pc = 0x14BB58u;
    SET_GPR_U32(ctx, 31, 0x14BB60u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14BB58u, 0x14BB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BB60u;
label_14bb60:
    // 0x14bb60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bb64:
    // 0x14bb64: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14bb64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14bb68:
    // 0x14bb68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14bb6c:
    // 0x14bb6c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14bb6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14bb70:
    // 0x14bb70: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14bb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bb74:
    // 0x14bb74: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14bb74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14bb78:
    // 0x14bb78: 0xc096b40  jal         func_25AD00
label_14bb7c:
    if (ctx->pc == 0x14BB7Cu) {
        ctx->pc = 0x14BB80u;
        goto label_14bb80;
    }
    ctx->pc = 0x14BB78u;
    SET_GPR_U32(ctx, 31, 0x14BB80u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14BB78u, 0x14BB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BB80u;
label_14bb80:
    // 0x14bb80: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14bb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bb84:
    // 0x14bb84: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x14bb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14bb88:
    // 0x14bb88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14bb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bb8c:
    // 0x14bb8c: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x14bb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14bb90:
    // 0x14bb90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14bb90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14bb94:
    // 0x14bb94: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x14bb94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_14bb98:
    // 0x14bb98: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14bb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bb9c:
    // 0x14bb9c: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x14bb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14bba0:
    // 0x14bba0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14bba0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14bba4:
    // 0x14bba4: 0x0  nop
    ctx->pc = 0x14bba4u;
    // NOP
label_14bba8:
    // 0x14bba8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14bba8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14bbac:
    // 0x14bbac: 0x0  nop
    ctx->pc = 0x14bbacu;
    // NOP
label_14bbb0:
    // 0x14bbb0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_14bbb4:
    if (ctx->pc == 0x14BBB4u) {
        ctx->pc = 0x14BBB8u;
        goto label_14bbb8;
    }
    ctx->pc = 0x14BBB0u;
    {
        const bool branch_taken_0x14bbb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14bbb0) {
            ctx->pc = 0x14BBC4u;
            goto label_14bbc4;
        }
    }
    ctx->pc = 0x14BBB8u;
label_14bbb8:
    // 0x14bbb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14bbb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14bbbc:
    // 0x14bbbc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14bbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bbc0:
    // 0x14bbc0: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x14bbc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_14bbc4:
    // 0x14bbc4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14bbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bbc8:
    // 0x14bbc8: 0xc05cd10  jal         func_173440
label_14bbcc:
    if (ctx->pc == 0x14BBCCu) {
        ctx->pc = 0x14BBD0u;
        goto label_14bbd0;
    }
    ctx->pc = 0x14BBC8u;
    SET_GPR_U32(ctx, 31, 0x14BBD0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14BBC8u, 0x14BBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BBD0u;
label_14bbd0:
    // 0x14bbd0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14bbd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14bbd4:
    // 0x14bbd4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14bbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bbd8:
    // 0x14bbd8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14bbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_14bbdc:
    // 0x14bbdc: 0xc0573d8  jal         func_15CF60
label_14bbe0:
    if (ctx->pc == 0x14BBE0u) {
        ctx->pc = 0x14BBE4u;
        goto label_14bbe4;
    }
    ctx->pc = 0x14BBDCu;
    SET_GPR_U32(ctx, 31, 0x14BBE4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14BBDCu, 0x14BBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BBE4u;
label_14bbe4:
    // 0x14bbe4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bbe8:
    // 0x14bbe8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bbec:
    // 0x14bbec: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x14bbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_14bbf0:
    // 0x14bbf0: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x14bbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_14bbf4:
    // 0x14bbf4: 0xc05cf7c  jal         func_173DF0
label_14bbf8:
    if (ctx->pc == 0x14BBF8u) {
        ctx->pc = 0x14BBFCu;
        goto label_14bbfc;
    }
    ctx->pc = 0x14BBF4u;
    SET_GPR_U32(ctx, 31, 0x14BBFCu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x14BBF4u, 0x14BBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BBFCu;
label_14bbfc:
    // 0x14bbfc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x14bbfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_14bc00:
    // 0x14bc00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bc04:
    // 0x14bc04: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x14bc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14bc08:
    // 0x14bc08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14bc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bc0c:
    // 0x14bc0c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x14bc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14bc10:
    // 0x14bc10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14bc10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14bc14:
    // 0x14bc14: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x14bc14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_14bc18:
    // 0x14bc18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bc1c:
    // 0x14bc1c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x14bc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14bc20:
    // 0x14bc20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bc24:
    // 0x14bc24: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x14bc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14bc28:
    // 0x14bc28: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14bc28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_14bc2c:
    // 0x14bc2c: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x14bc2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_14bc30:
    // 0x14bc30: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bc34:
    // 0x14bc34: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x14bc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14bc38:
    // 0x14bc38: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x14bc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14bc3c:
    // 0x14bc3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14bc3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14bc40:
    // 0x14bc40: 0x0  nop
    ctx->pc = 0x14bc40u;
    // NOP
label_14bc44:
    // 0x14bc44: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_14bc48:
    if (ctx->pc == 0x14BC48u) {
        ctx->pc = 0x14BC4Cu;
        goto label_14bc4c;
    }
    ctx->pc = 0x14BC44u;
    {
        const bool branch_taken_0x14bc44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14bc44) {
            ctx->pc = 0x14BC5Cu;
            goto label_14bc5c;
        }
    }
    ctx->pc = 0x14BC4Cu;
label_14bc4c:
    // 0x14bc4c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bc50:
    // 0x14bc50: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14bc50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14bc54:
    // 0x14bc54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14bc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14bc58:
    // 0x14bc58: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14bc58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14bc5c:
    // 0x14bc5c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14bc5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14bc60:
    // 0x14bc60: 0xc097530  jal         func_25D4C0
label_14bc64:
    if (ctx->pc == 0x14BC64u) {
        ctx->pc = 0x14BC68u;
        goto label_14bc68;
    }
    ctx->pc = 0x14BC60u;
    SET_GPR_U32(ctx, 31, 0x14BC68u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14BC60u, 0x14BC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BC68u;
label_14bc68:
    // 0x14bc68: 0x1000004d  b           . + 4 + (0x4D << 2)
label_14bc6c:
    if (ctx->pc == 0x14BC6Cu) {
        ctx->pc = 0x14BC70u;
        goto label_14bc70;
    }
    ctx->pc = 0x14BC68u;
    {
        const bool branch_taken_0x14bc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bc68) {
            ctx->pc = 0x14BDA0u;
            goto label_14bda0;
        }
    }
    ctx->pc = 0x14BC70u;
label_14bc70:
    // 0x14bc70: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14bc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bc74:
    // 0x14bc74: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14bc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bc78:
    // 0x14bc78: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14bc78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_14bc7c:
    // 0x14bc7c: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x14bc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_14bc80:
    // 0x14bc80: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14bc80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14bc84:
    // 0x14bc84: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14bc84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14bc88:
    // 0x14bc88: 0xc0965d0  jal         func_259740
label_14bc8c:
    if (ctx->pc == 0x14BC8Cu) {
        ctx->pc = 0x14BC90u;
        goto label_14bc90;
    }
    ctx->pc = 0x14BC88u;
    SET_GPR_U32(ctx, 31, 0x14BC90u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14BC88u, 0x14BC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BC90u;
label_14bc90:
    // 0x14bc90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bc94:
    // 0x14bc94: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14bc94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14bc98:
    // 0x14bc98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14bc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14bc9c:
    // 0x14bc9c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14bc9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14bca0:
    // 0x14bca0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14bca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bca4:
    // 0x14bca4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14bca4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14bca8:
    // 0x14bca8: 0xc096b40  jal         func_25AD00
label_14bcac:
    if (ctx->pc == 0x14BCACu) {
        ctx->pc = 0x14BCB0u;
        goto label_14bcb0;
    }
    ctx->pc = 0x14BCA8u;
    SET_GPR_U32(ctx, 31, 0x14BCB0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14BCA8u, 0x14BCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BCB0u;
label_14bcb0:
    // 0x14bcb0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14bcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bcb4:
    // 0x14bcb4: 0xc05cd10  jal         func_173440
label_14bcb8:
    if (ctx->pc == 0x14BCB8u) {
        ctx->pc = 0x14BCBCu;
        goto label_14bcbc;
    }
    ctx->pc = 0x14BCB4u;
    SET_GPR_U32(ctx, 31, 0x14BCBCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14BCB4u, 0x14BCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BCBCu;
label_14bcbc:
    // 0x14bcbc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14bcbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14bcc0:
    // 0x14bcc0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14bcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bcc4:
    // 0x14bcc4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14bcc4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14bcc8:
    // 0x14bcc8: 0xc0573d8  jal         func_15CF60
label_14bccc:
    if (ctx->pc == 0x14BCCCu) {
        ctx->pc = 0x14BCD0u;
        goto label_14bcd0;
    }
    ctx->pc = 0x14BCC8u;
    SET_GPR_U32(ctx, 31, 0x14BCD0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14BCC8u, 0x14BCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BCD0u;
label_14bcd0:
    // 0x14bcd0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14bcd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14bcd4:
    // 0x14bcd4: 0xc097530  jal         func_25D4C0
label_14bcd8:
    if (ctx->pc == 0x14BCD8u) {
        ctx->pc = 0x14BCDCu;
        goto label_14bcdc;
    }
    ctx->pc = 0x14BCD4u;
    SET_GPR_U32(ctx, 31, 0x14BCDCu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14BCD4u, 0x14BCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BCDCu;
label_14bcdc:
    // 0x14bcdc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14bcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bce0:
    // 0x14bce0: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x14bce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_14bce4:
    // 0x14bce4: 0xc057b54  jal         func_15ED50
label_14bce8:
    if (ctx->pc == 0x14BCE8u) {
        ctx->pc = 0x14BCECu;
        goto label_14bcec;
    }
    ctx->pc = 0x14BCE4u;
    SET_GPR_U32(ctx, 31, 0x14BCECu);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x14BCE4u, 0x14BCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BCECu;
label_14bcec:
    // 0x14bcec: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_14bcf0:
    if (ctx->pc == 0x14BCF0u) {
        ctx->pc = 0x14BCF4u;
        goto label_14bcf4;
    }
    ctx->pc = 0x14BCECu;
    {
        const bool branch_taken_0x14bcec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bcec) {
            ctx->pc = 0x14BDA0u;
            goto label_14bda0;
        }
    }
    ctx->pc = 0x14BCF4u;
label_14bcf4:
    // 0x14bcf4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bcf8:
    // 0x14bcf8: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x14bcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_14bcfc:
    // 0x14bcfc: 0xc057b04  jal         func_15EC10
label_14bd00:
    if (ctx->pc == 0x14BD00u) {
        ctx->pc = 0x14BD04u;
        goto label_14bd04;
    }
    ctx->pc = 0x14BCFCu;
    SET_GPR_U32(ctx, 31, 0x14BD04u);
    ctx->pc = 0x15EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EC10u, 0x14BCFCu, 0x14BD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BD04u;
label_14bd04:
    // 0x14bd04: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_14bd08:
    if (ctx->pc == 0x14BD08u) {
        ctx->pc = 0x14BD0Cu;
        goto label_14bd0c;
    }
    ctx->pc = 0x14BD04u;
    {
        const bool branch_taken_0x14bd04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bd04) {
            ctx->pc = 0x14BDA0u;
            goto label_14bda0;
        }
    }
    ctx->pc = 0x14BD0Cu;
label_14bd0c:
    // 0x14bd0c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bd10:
    // 0x14bd10: 0x946309ee  lhu         $v1, 0x9EE($v1)
    ctx->pc = 0x14bd10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2542)));
label_14bd14:
    // 0x14bd14: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x14bd14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_14bd18:
    // 0x14bd18: 0x28610030  slti        $at, $v1, 0x30
    ctx->pc = 0x14bd18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)48) ? 1 : 0);
label_14bd1c:
    // 0x14bd1c: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
label_14bd20:
    if (ctx->pc == 0x14BD20u) {
        ctx->pc = 0x14BD24u;
        goto label_14bd24;
    }
    ctx->pc = 0x14BD1Cu;
    {
        const bool branch_taken_0x14bd1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bd1c) {
            ctx->pc = 0x14BD54u;
            goto label_14bd54;
        }
    }
    ctx->pc = 0x14BD24u;
label_14bd24:
    // 0x14bd24: 0xc057acc  jal         func_15EB30
label_14bd28:
    if (ctx->pc == 0x14BD28u) {
        ctx->pc = 0x14BD2Cu;
        goto label_14bd2c;
    }
    ctx->pc = 0x14BD24u;
    SET_GPR_U32(ctx, 31, 0x14BD2Cu);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x14BD24u, 0x14BD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BD2Cu;
label_14bd2c:
    // 0x14bd2c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_14bd30:
    if (ctx->pc == 0x14BD30u) {
        ctx->pc = 0x14BD34u;
        goto label_14bd34;
    }
    ctx->pc = 0x14BD2Cu;
    {
        const bool branch_taken_0x14bd2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bd2c) {
            ctx->pc = 0x14BD54u;
            goto label_14bd54;
        }
    }
    ctx->pc = 0x14BD34u;
label_14bd34:
    // 0x14bd34: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x14bd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_14bd38:
    // 0x14bd38: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bd3c:
    // 0x14bd3c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14bd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_14bd40:
    // 0x14bd40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14bd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14bd44:
    // 0x14bd44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bd48:
    // 0x14bd48: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x14bd48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_14bd4c:
    // 0x14bd4c: 0x10000014  b           . + 4 + (0x14 << 2)
label_14bd50:
    if (ctx->pc == 0x14BD50u) {
        ctx->pc = 0x14BD54u;
        goto label_14bd54;
    }
    ctx->pc = 0x14BD4Cu;
    {
        const bool branch_taken_0x14bd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bd4c) {
            ctx->pc = 0x14BDA0u;
            goto label_14bda0;
        }
    }
    ctx->pc = 0x14BD54u;
label_14bd54:
    // 0x14bd54: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bd58:
    // 0x14bd58: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14bd58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_14bd5c:
    // 0x14bd5c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_14bd60:
    if (ctx->pc == 0x14BD60u) {
        ctx->pc = 0x14BD64u;
        goto label_14bd64;
    }
    ctx->pc = 0x14BD5Cu;
    {
        const bool branch_taken_0x14bd5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bd5c) {
            ctx->pc = 0x14BDA0u;
            goto label_14bda0;
        }
    }
    ctx->pc = 0x14BD64u;
label_14bd64:
    // 0x14bd64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14bd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14bd68:
    // 0x14bd68: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bd6c:
    // 0x14bd6c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x14bd6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_14bd70:
    // 0x14bd70: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bd74:
    // 0x14bd74: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x14bd74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_14bd78:
    // 0x14bd78: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bd7c:
    // 0x14bd7c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x14bd7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_14bd80:
    // 0x14bd80: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bd84:
    // 0x14bd84: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x14bd84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_14bd88:
    // 0x14bd88: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x14bd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_14bd8c:
    // 0x14bd8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bd90:
    // 0x14bd90: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14bd90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_14bd94:
    // 0x14bd94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14bd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14bd98:
    // 0x14bd98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14bd9c:
    // 0x14bd9c: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x14bd9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_14bda0:
    // 0x14bda0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x14bda0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14bda4:
    // 0x14bda4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14bda4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_14bda8:
    // 0x14bda8: 0x3e00008  jr          $ra
label_14bdac:
    if (ctx->pc == 0x14BDACu) {
        ctx->pc = 0x14BDB0u;
        goto label_fallthrough_0x14bda8;
    }
    ctx->pc = 0x14BDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BDA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14bda8:
    ctx->pc = 0x14BDB0u;
}
