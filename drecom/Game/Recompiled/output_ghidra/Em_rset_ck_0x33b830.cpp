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

// Function: Em_rset_ck
// Address: 0x33b830 - 0x33c290
void Em_rset_ck_0x33b830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_rset_ck_0x33b830");
#endif

    switch (ctx->pc) {
        case 0x33b830u: goto label_33b830;
        case 0x33b834u: goto label_33b834;
        case 0x33b838u: goto label_33b838;
        case 0x33b83cu: goto label_33b83c;
        case 0x33b840u: goto label_33b840;
        case 0x33b844u: goto label_33b844;
        case 0x33b848u: goto label_33b848;
        case 0x33b84cu: goto label_33b84c;
        case 0x33b850u: goto label_33b850;
        case 0x33b854u: goto label_33b854;
        case 0x33b858u: goto label_33b858;
        case 0x33b85cu: goto label_33b85c;
        case 0x33b860u: goto label_33b860;
        case 0x33b864u: goto label_33b864;
        case 0x33b868u: goto label_33b868;
        case 0x33b86cu: goto label_33b86c;
        case 0x33b870u: goto label_33b870;
        case 0x33b874u: goto label_33b874;
        case 0x33b878u: goto label_33b878;
        case 0x33b87cu: goto label_33b87c;
        case 0x33b880u: goto label_33b880;
        case 0x33b884u: goto label_33b884;
        case 0x33b888u: goto label_33b888;
        case 0x33b88cu: goto label_33b88c;
        case 0x33b890u: goto label_33b890;
        case 0x33b894u: goto label_33b894;
        case 0x33b898u: goto label_33b898;
        case 0x33b89cu: goto label_33b89c;
        case 0x33b8a0u: goto label_33b8a0;
        case 0x33b8a4u: goto label_33b8a4;
        case 0x33b8a8u: goto label_33b8a8;
        case 0x33b8acu: goto label_33b8ac;
        case 0x33b8b0u: goto label_33b8b0;
        case 0x33b8b4u: goto label_33b8b4;
        case 0x33b8b8u: goto label_33b8b8;
        case 0x33b8bcu: goto label_33b8bc;
        case 0x33b8c0u: goto label_33b8c0;
        case 0x33b8c4u: goto label_33b8c4;
        case 0x33b8c8u: goto label_33b8c8;
        case 0x33b8ccu: goto label_33b8cc;
        case 0x33b8d0u: goto label_33b8d0;
        case 0x33b8d4u: goto label_33b8d4;
        case 0x33b8d8u: goto label_33b8d8;
        case 0x33b8dcu: goto label_33b8dc;
        case 0x33b8e0u: goto label_33b8e0;
        case 0x33b8e4u: goto label_33b8e4;
        case 0x33b8e8u: goto label_33b8e8;
        case 0x33b8ecu: goto label_33b8ec;
        case 0x33b8f0u: goto label_33b8f0;
        case 0x33b8f4u: goto label_33b8f4;
        case 0x33b8f8u: goto label_33b8f8;
        case 0x33b8fcu: goto label_33b8fc;
        case 0x33b900u: goto label_33b900;
        case 0x33b904u: goto label_33b904;
        case 0x33b908u: goto label_33b908;
        case 0x33b90cu: goto label_33b90c;
        case 0x33b910u: goto label_33b910;
        case 0x33b914u: goto label_33b914;
        case 0x33b918u: goto label_33b918;
        case 0x33b91cu: goto label_33b91c;
        case 0x33b920u: goto label_33b920;
        case 0x33b924u: goto label_33b924;
        case 0x33b928u: goto label_33b928;
        case 0x33b92cu: goto label_33b92c;
        case 0x33b930u: goto label_33b930;
        case 0x33b934u: goto label_33b934;
        case 0x33b938u: goto label_33b938;
        case 0x33b93cu: goto label_33b93c;
        case 0x33b940u: goto label_33b940;
        case 0x33b944u: goto label_33b944;
        case 0x33b948u: goto label_33b948;
        case 0x33b94cu: goto label_33b94c;
        case 0x33b950u: goto label_33b950;
        case 0x33b954u: goto label_33b954;
        case 0x33b958u: goto label_33b958;
        case 0x33b95cu: goto label_33b95c;
        case 0x33b960u: goto label_33b960;
        case 0x33b964u: goto label_33b964;
        case 0x33b968u: goto label_33b968;
        case 0x33b96cu: goto label_33b96c;
        case 0x33b970u: goto label_33b970;
        case 0x33b974u: goto label_33b974;
        case 0x33b978u: goto label_33b978;
        case 0x33b97cu: goto label_33b97c;
        case 0x33b980u: goto label_33b980;
        case 0x33b984u: goto label_33b984;
        case 0x33b988u: goto label_33b988;
        case 0x33b98cu: goto label_33b98c;
        case 0x33b990u: goto label_33b990;
        case 0x33b994u: goto label_33b994;
        case 0x33b998u: goto label_33b998;
        case 0x33b99cu: goto label_33b99c;
        case 0x33b9a0u: goto label_33b9a0;
        case 0x33b9a4u: goto label_33b9a4;
        case 0x33b9a8u: goto label_33b9a8;
        case 0x33b9acu: goto label_33b9ac;
        case 0x33b9b0u: goto label_33b9b0;
        case 0x33b9b4u: goto label_33b9b4;
        case 0x33b9b8u: goto label_33b9b8;
        case 0x33b9bcu: goto label_33b9bc;
        case 0x33b9c0u: goto label_33b9c0;
        case 0x33b9c4u: goto label_33b9c4;
        case 0x33b9c8u: goto label_33b9c8;
        case 0x33b9ccu: goto label_33b9cc;
        case 0x33b9d0u: goto label_33b9d0;
        case 0x33b9d4u: goto label_33b9d4;
        case 0x33b9d8u: goto label_33b9d8;
        case 0x33b9dcu: goto label_33b9dc;
        case 0x33b9e0u: goto label_33b9e0;
        case 0x33b9e4u: goto label_33b9e4;
        case 0x33b9e8u: goto label_33b9e8;
        case 0x33b9ecu: goto label_33b9ec;
        case 0x33b9f0u: goto label_33b9f0;
        case 0x33b9f4u: goto label_33b9f4;
        case 0x33b9f8u: goto label_33b9f8;
        case 0x33b9fcu: goto label_33b9fc;
        case 0x33ba00u: goto label_33ba00;
        case 0x33ba04u: goto label_33ba04;
        case 0x33ba08u: goto label_33ba08;
        case 0x33ba0cu: goto label_33ba0c;
        case 0x33ba10u: goto label_33ba10;
        case 0x33ba14u: goto label_33ba14;
        case 0x33ba18u: goto label_33ba18;
        case 0x33ba1cu: goto label_33ba1c;
        case 0x33ba20u: goto label_33ba20;
        case 0x33ba24u: goto label_33ba24;
        case 0x33ba28u: goto label_33ba28;
        case 0x33ba2cu: goto label_33ba2c;
        case 0x33ba30u: goto label_33ba30;
        case 0x33ba34u: goto label_33ba34;
        case 0x33ba38u: goto label_33ba38;
        case 0x33ba3cu: goto label_33ba3c;
        case 0x33ba40u: goto label_33ba40;
        case 0x33ba44u: goto label_33ba44;
        case 0x33ba48u: goto label_33ba48;
        case 0x33ba4cu: goto label_33ba4c;
        case 0x33ba50u: goto label_33ba50;
        case 0x33ba54u: goto label_33ba54;
        case 0x33ba58u: goto label_33ba58;
        case 0x33ba5cu: goto label_33ba5c;
        case 0x33ba60u: goto label_33ba60;
        case 0x33ba64u: goto label_33ba64;
        case 0x33ba68u: goto label_33ba68;
        case 0x33ba6cu: goto label_33ba6c;
        case 0x33ba70u: goto label_33ba70;
        case 0x33ba74u: goto label_33ba74;
        case 0x33ba78u: goto label_33ba78;
        case 0x33ba7cu: goto label_33ba7c;
        case 0x33ba80u: goto label_33ba80;
        case 0x33ba84u: goto label_33ba84;
        case 0x33ba88u: goto label_33ba88;
        case 0x33ba8cu: goto label_33ba8c;
        case 0x33ba90u: goto label_33ba90;
        case 0x33ba94u: goto label_33ba94;
        case 0x33ba98u: goto label_33ba98;
        case 0x33ba9cu: goto label_33ba9c;
        case 0x33baa0u: goto label_33baa0;
        case 0x33baa4u: goto label_33baa4;
        case 0x33baa8u: goto label_33baa8;
        case 0x33baacu: goto label_33baac;
        case 0x33bab0u: goto label_33bab0;
        case 0x33bab4u: goto label_33bab4;
        case 0x33bab8u: goto label_33bab8;
        case 0x33babcu: goto label_33babc;
        case 0x33bac0u: goto label_33bac0;
        case 0x33bac4u: goto label_33bac4;
        case 0x33bac8u: goto label_33bac8;
        case 0x33baccu: goto label_33bacc;
        case 0x33bad0u: goto label_33bad0;
        case 0x33bad4u: goto label_33bad4;
        case 0x33bad8u: goto label_33bad8;
        case 0x33badcu: goto label_33badc;
        case 0x33bae0u: goto label_33bae0;
        case 0x33bae4u: goto label_33bae4;
        case 0x33bae8u: goto label_33bae8;
        case 0x33baecu: goto label_33baec;
        case 0x33baf0u: goto label_33baf0;
        case 0x33baf4u: goto label_33baf4;
        case 0x33baf8u: goto label_33baf8;
        case 0x33bafcu: goto label_33bafc;
        case 0x33bb00u: goto label_33bb00;
        case 0x33bb04u: goto label_33bb04;
        case 0x33bb08u: goto label_33bb08;
        case 0x33bb0cu: goto label_33bb0c;
        case 0x33bb10u: goto label_33bb10;
        case 0x33bb14u: goto label_33bb14;
        case 0x33bb18u: goto label_33bb18;
        case 0x33bb1cu: goto label_33bb1c;
        case 0x33bb20u: goto label_33bb20;
        case 0x33bb24u: goto label_33bb24;
        case 0x33bb28u: goto label_33bb28;
        case 0x33bb2cu: goto label_33bb2c;
        case 0x33bb30u: goto label_33bb30;
        case 0x33bb34u: goto label_33bb34;
        case 0x33bb38u: goto label_33bb38;
        case 0x33bb3cu: goto label_33bb3c;
        case 0x33bb40u: goto label_33bb40;
        case 0x33bb44u: goto label_33bb44;
        case 0x33bb48u: goto label_33bb48;
        case 0x33bb4cu: goto label_33bb4c;
        case 0x33bb50u: goto label_33bb50;
        case 0x33bb54u: goto label_33bb54;
        case 0x33bb58u: goto label_33bb58;
        case 0x33bb5cu: goto label_33bb5c;
        case 0x33bb60u: goto label_33bb60;
        case 0x33bb64u: goto label_33bb64;
        case 0x33bb68u: goto label_33bb68;
        case 0x33bb6cu: goto label_33bb6c;
        case 0x33bb70u: goto label_33bb70;
        case 0x33bb74u: goto label_33bb74;
        case 0x33bb78u: goto label_33bb78;
        case 0x33bb7cu: goto label_33bb7c;
        case 0x33bb80u: goto label_33bb80;
        case 0x33bb84u: goto label_33bb84;
        case 0x33bb88u: goto label_33bb88;
        case 0x33bb8cu: goto label_33bb8c;
        case 0x33bb90u: goto label_33bb90;
        case 0x33bb94u: goto label_33bb94;
        case 0x33bb98u: goto label_33bb98;
        case 0x33bb9cu: goto label_33bb9c;
        case 0x33bba0u: goto label_33bba0;
        case 0x33bba4u: goto label_33bba4;
        case 0x33bba8u: goto label_33bba8;
        case 0x33bbacu: goto label_33bbac;
        case 0x33bbb0u: goto label_33bbb0;
        case 0x33bbb4u: goto label_33bbb4;
        case 0x33bbb8u: goto label_33bbb8;
        case 0x33bbbcu: goto label_33bbbc;
        case 0x33bbc0u: goto label_33bbc0;
        case 0x33bbc4u: goto label_33bbc4;
        case 0x33bbc8u: goto label_33bbc8;
        case 0x33bbccu: goto label_33bbcc;
        case 0x33bbd0u: goto label_33bbd0;
        case 0x33bbd4u: goto label_33bbd4;
        case 0x33bbd8u: goto label_33bbd8;
        case 0x33bbdcu: goto label_33bbdc;
        case 0x33bbe0u: goto label_33bbe0;
        case 0x33bbe4u: goto label_33bbe4;
        case 0x33bbe8u: goto label_33bbe8;
        case 0x33bbecu: goto label_33bbec;
        case 0x33bbf0u: goto label_33bbf0;
        case 0x33bbf4u: goto label_33bbf4;
        case 0x33bbf8u: goto label_33bbf8;
        case 0x33bbfcu: goto label_33bbfc;
        case 0x33bc00u: goto label_33bc00;
        case 0x33bc04u: goto label_33bc04;
        case 0x33bc08u: goto label_33bc08;
        case 0x33bc0cu: goto label_33bc0c;
        case 0x33bc10u: goto label_33bc10;
        case 0x33bc14u: goto label_33bc14;
        case 0x33bc18u: goto label_33bc18;
        case 0x33bc1cu: goto label_33bc1c;
        case 0x33bc20u: goto label_33bc20;
        case 0x33bc24u: goto label_33bc24;
        case 0x33bc28u: goto label_33bc28;
        case 0x33bc2cu: goto label_33bc2c;
        case 0x33bc30u: goto label_33bc30;
        case 0x33bc34u: goto label_33bc34;
        case 0x33bc38u: goto label_33bc38;
        case 0x33bc3cu: goto label_33bc3c;
        case 0x33bc40u: goto label_33bc40;
        case 0x33bc44u: goto label_33bc44;
        case 0x33bc48u: goto label_33bc48;
        case 0x33bc4cu: goto label_33bc4c;
        case 0x33bc50u: goto label_33bc50;
        case 0x33bc54u: goto label_33bc54;
        case 0x33bc58u: goto label_33bc58;
        case 0x33bc5cu: goto label_33bc5c;
        case 0x33bc60u: goto label_33bc60;
        case 0x33bc64u: goto label_33bc64;
        case 0x33bc68u: goto label_33bc68;
        case 0x33bc6cu: goto label_33bc6c;
        case 0x33bc70u: goto label_33bc70;
        case 0x33bc74u: goto label_33bc74;
        case 0x33bc78u: goto label_33bc78;
        case 0x33bc7cu: goto label_33bc7c;
        case 0x33bc80u: goto label_33bc80;
        case 0x33bc84u: goto label_33bc84;
        case 0x33bc88u: goto label_33bc88;
        case 0x33bc8cu: goto label_33bc8c;
        case 0x33bc90u: goto label_33bc90;
        case 0x33bc94u: goto label_33bc94;
        case 0x33bc98u: goto label_33bc98;
        case 0x33bc9cu: goto label_33bc9c;
        case 0x33bca0u: goto label_33bca0;
        case 0x33bca4u: goto label_33bca4;
        case 0x33bca8u: goto label_33bca8;
        case 0x33bcacu: goto label_33bcac;
        case 0x33bcb0u: goto label_33bcb0;
        case 0x33bcb4u: goto label_33bcb4;
        case 0x33bcb8u: goto label_33bcb8;
        case 0x33bcbcu: goto label_33bcbc;
        case 0x33bcc0u: goto label_33bcc0;
        case 0x33bcc4u: goto label_33bcc4;
        case 0x33bcc8u: goto label_33bcc8;
        case 0x33bcccu: goto label_33bccc;
        case 0x33bcd0u: goto label_33bcd0;
        case 0x33bcd4u: goto label_33bcd4;
        case 0x33bcd8u: goto label_33bcd8;
        case 0x33bcdcu: goto label_33bcdc;
        case 0x33bce0u: goto label_33bce0;
        case 0x33bce4u: goto label_33bce4;
        case 0x33bce8u: goto label_33bce8;
        case 0x33bcecu: goto label_33bcec;
        case 0x33bcf0u: goto label_33bcf0;
        case 0x33bcf4u: goto label_33bcf4;
        case 0x33bcf8u: goto label_33bcf8;
        case 0x33bcfcu: goto label_33bcfc;
        case 0x33bd00u: goto label_33bd00;
        case 0x33bd04u: goto label_33bd04;
        case 0x33bd08u: goto label_33bd08;
        case 0x33bd0cu: goto label_33bd0c;
        case 0x33bd10u: goto label_33bd10;
        case 0x33bd14u: goto label_33bd14;
        case 0x33bd18u: goto label_33bd18;
        case 0x33bd1cu: goto label_33bd1c;
        case 0x33bd20u: goto label_33bd20;
        case 0x33bd24u: goto label_33bd24;
        case 0x33bd28u: goto label_33bd28;
        case 0x33bd2cu: goto label_33bd2c;
        case 0x33bd30u: goto label_33bd30;
        case 0x33bd34u: goto label_33bd34;
        case 0x33bd38u: goto label_33bd38;
        case 0x33bd3cu: goto label_33bd3c;
        case 0x33bd40u: goto label_33bd40;
        case 0x33bd44u: goto label_33bd44;
        case 0x33bd48u: goto label_33bd48;
        case 0x33bd4cu: goto label_33bd4c;
        case 0x33bd50u: goto label_33bd50;
        case 0x33bd54u: goto label_33bd54;
        case 0x33bd58u: goto label_33bd58;
        case 0x33bd5cu: goto label_33bd5c;
        case 0x33bd60u: goto label_33bd60;
        case 0x33bd64u: goto label_33bd64;
        case 0x33bd68u: goto label_33bd68;
        case 0x33bd6cu: goto label_33bd6c;
        case 0x33bd70u: goto label_33bd70;
        case 0x33bd74u: goto label_33bd74;
        case 0x33bd78u: goto label_33bd78;
        case 0x33bd7cu: goto label_33bd7c;
        case 0x33bd80u: goto label_33bd80;
        case 0x33bd84u: goto label_33bd84;
        case 0x33bd88u: goto label_33bd88;
        case 0x33bd8cu: goto label_33bd8c;
        case 0x33bd90u: goto label_33bd90;
        case 0x33bd94u: goto label_33bd94;
        case 0x33bd98u: goto label_33bd98;
        case 0x33bd9cu: goto label_33bd9c;
        case 0x33bda0u: goto label_33bda0;
        case 0x33bda4u: goto label_33bda4;
        case 0x33bda8u: goto label_33bda8;
        case 0x33bdacu: goto label_33bdac;
        case 0x33bdb0u: goto label_33bdb0;
        case 0x33bdb4u: goto label_33bdb4;
        case 0x33bdb8u: goto label_33bdb8;
        case 0x33bdbcu: goto label_33bdbc;
        case 0x33bdc0u: goto label_33bdc0;
        case 0x33bdc4u: goto label_33bdc4;
        case 0x33bdc8u: goto label_33bdc8;
        case 0x33bdccu: goto label_33bdcc;
        case 0x33bdd0u: goto label_33bdd0;
        case 0x33bdd4u: goto label_33bdd4;
        case 0x33bdd8u: goto label_33bdd8;
        case 0x33bddcu: goto label_33bddc;
        case 0x33bde0u: goto label_33bde0;
        case 0x33bde4u: goto label_33bde4;
        case 0x33bde8u: goto label_33bde8;
        case 0x33bdecu: goto label_33bdec;
        case 0x33bdf0u: goto label_33bdf0;
        case 0x33bdf4u: goto label_33bdf4;
        case 0x33bdf8u: goto label_33bdf8;
        case 0x33bdfcu: goto label_33bdfc;
        case 0x33be00u: goto label_33be00;
        case 0x33be04u: goto label_33be04;
        case 0x33be08u: goto label_33be08;
        case 0x33be0cu: goto label_33be0c;
        case 0x33be10u: goto label_33be10;
        case 0x33be14u: goto label_33be14;
        case 0x33be18u: goto label_33be18;
        case 0x33be1cu: goto label_33be1c;
        case 0x33be20u: goto label_33be20;
        case 0x33be24u: goto label_33be24;
        case 0x33be28u: goto label_33be28;
        case 0x33be2cu: goto label_33be2c;
        case 0x33be30u: goto label_33be30;
        case 0x33be34u: goto label_33be34;
        case 0x33be38u: goto label_33be38;
        case 0x33be3cu: goto label_33be3c;
        case 0x33be40u: goto label_33be40;
        case 0x33be44u: goto label_33be44;
        case 0x33be48u: goto label_33be48;
        case 0x33be4cu: goto label_33be4c;
        case 0x33be50u: goto label_33be50;
        case 0x33be54u: goto label_33be54;
        case 0x33be58u: goto label_33be58;
        case 0x33be5cu: goto label_33be5c;
        case 0x33be60u: goto label_33be60;
        case 0x33be64u: goto label_33be64;
        case 0x33be68u: goto label_33be68;
        case 0x33be6cu: goto label_33be6c;
        case 0x33be70u: goto label_33be70;
        case 0x33be74u: goto label_33be74;
        case 0x33be78u: goto label_33be78;
        case 0x33be7cu: goto label_33be7c;
        case 0x33be80u: goto label_33be80;
        case 0x33be84u: goto label_33be84;
        case 0x33be88u: goto label_33be88;
        case 0x33be8cu: goto label_33be8c;
        case 0x33be90u: goto label_33be90;
        case 0x33be94u: goto label_33be94;
        case 0x33be98u: goto label_33be98;
        case 0x33be9cu: goto label_33be9c;
        case 0x33bea0u: goto label_33bea0;
        case 0x33bea4u: goto label_33bea4;
        case 0x33bea8u: goto label_33bea8;
        case 0x33beacu: goto label_33beac;
        case 0x33beb0u: goto label_33beb0;
        case 0x33beb4u: goto label_33beb4;
        case 0x33beb8u: goto label_33beb8;
        case 0x33bebcu: goto label_33bebc;
        case 0x33bec0u: goto label_33bec0;
        case 0x33bec4u: goto label_33bec4;
        case 0x33bec8u: goto label_33bec8;
        case 0x33beccu: goto label_33becc;
        case 0x33bed0u: goto label_33bed0;
        case 0x33bed4u: goto label_33bed4;
        case 0x33bed8u: goto label_33bed8;
        case 0x33bedcu: goto label_33bedc;
        case 0x33bee0u: goto label_33bee0;
        case 0x33bee4u: goto label_33bee4;
        case 0x33bee8u: goto label_33bee8;
        case 0x33beecu: goto label_33beec;
        case 0x33bef0u: goto label_33bef0;
        case 0x33bef4u: goto label_33bef4;
        case 0x33bef8u: goto label_33bef8;
        case 0x33befcu: goto label_33befc;
        case 0x33bf00u: goto label_33bf00;
        case 0x33bf04u: goto label_33bf04;
        case 0x33bf08u: goto label_33bf08;
        case 0x33bf0cu: goto label_33bf0c;
        case 0x33bf10u: goto label_33bf10;
        case 0x33bf14u: goto label_33bf14;
        case 0x33bf18u: goto label_33bf18;
        case 0x33bf1cu: goto label_33bf1c;
        case 0x33bf20u: goto label_33bf20;
        case 0x33bf24u: goto label_33bf24;
        case 0x33bf28u: goto label_33bf28;
        case 0x33bf2cu: goto label_33bf2c;
        case 0x33bf30u: goto label_33bf30;
        case 0x33bf34u: goto label_33bf34;
        case 0x33bf38u: goto label_33bf38;
        case 0x33bf3cu: goto label_33bf3c;
        case 0x33bf40u: goto label_33bf40;
        case 0x33bf44u: goto label_33bf44;
        case 0x33bf48u: goto label_33bf48;
        case 0x33bf4cu: goto label_33bf4c;
        case 0x33bf50u: goto label_33bf50;
        case 0x33bf54u: goto label_33bf54;
        case 0x33bf58u: goto label_33bf58;
        case 0x33bf5cu: goto label_33bf5c;
        case 0x33bf60u: goto label_33bf60;
        case 0x33bf64u: goto label_33bf64;
        case 0x33bf68u: goto label_33bf68;
        case 0x33bf6cu: goto label_33bf6c;
        case 0x33bf70u: goto label_33bf70;
        case 0x33bf74u: goto label_33bf74;
        case 0x33bf78u: goto label_33bf78;
        case 0x33bf7cu: goto label_33bf7c;
        case 0x33bf80u: goto label_33bf80;
        case 0x33bf84u: goto label_33bf84;
        case 0x33bf88u: goto label_33bf88;
        case 0x33bf8cu: goto label_33bf8c;
        case 0x33bf90u: goto label_33bf90;
        case 0x33bf94u: goto label_33bf94;
        case 0x33bf98u: goto label_33bf98;
        case 0x33bf9cu: goto label_33bf9c;
        case 0x33bfa0u: goto label_33bfa0;
        case 0x33bfa4u: goto label_33bfa4;
        case 0x33bfa8u: goto label_33bfa8;
        case 0x33bfacu: goto label_33bfac;
        case 0x33bfb0u: goto label_33bfb0;
        case 0x33bfb4u: goto label_33bfb4;
        case 0x33bfb8u: goto label_33bfb8;
        case 0x33bfbcu: goto label_33bfbc;
        case 0x33bfc0u: goto label_33bfc0;
        case 0x33bfc4u: goto label_33bfc4;
        case 0x33bfc8u: goto label_33bfc8;
        case 0x33bfccu: goto label_33bfcc;
        case 0x33bfd0u: goto label_33bfd0;
        case 0x33bfd4u: goto label_33bfd4;
        case 0x33bfd8u: goto label_33bfd8;
        case 0x33bfdcu: goto label_33bfdc;
        case 0x33bfe0u: goto label_33bfe0;
        case 0x33bfe4u: goto label_33bfe4;
        case 0x33bfe8u: goto label_33bfe8;
        case 0x33bfecu: goto label_33bfec;
        case 0x33bff0u: goto label_33bff0;
        case 0x33bff4u: goto label_33bff4;
        case 0x33bff8u: goto label_33bff8;
        case 0x33bffcu: goto label_33bffc;
        case 0x33c000u: goto label_33c000;
        case 0x33c004u: goto label_33c004;
        case 0x33c008u: goto label_33c008;
        case 0x33c00cu: goto label_33c00c;
        case 0x33c010u: goto label_33c010;
        case 0x33c014u: goto label_33c014;
        case 0x33c018u: goto label_33c018;
        case 0x33c01cu: goto label_33c01c;
        case 0x33c020u: goto label_33c020;
        case 0x33c024u: goto label_33c024;
        case 0x33c028u: goto label_33c028;
        case 0x33c02cu: goto label_33c02c;
        case 0x33c030u: goto label_33c030;
        case 0x33c034u: goto label_33c034;
        case 0x33c038u: goto label_33c038;
        case 0x33c03cu: goto label_33c03c;
        case 0x33c040u: goto label_33c040;
        case 0x33c044u: goto label_33c044;
        case 0x33c048u: goto label_33c048;
        case 0x33c04cu: goto label_33c04c;
        case 0x33c050u: goto label_33c050;
        case 0x33c054u: goto label_33c054;
        case 0x33c058u: goto label_33c058;
        case 0x33c05cu: goto label_33c05c;
        case 0x33c060u: goto label_33c060;
        case 0x33c064u: goto label_33c064;
        case 0x33c068u: goto label_33c068;
        case 0x33c06cu: goto label_33c06c;
        case 0x33c070u: goto label_33c070;
        case 0x33c074u: goto label_33c074;
        case 0x33c078u: goto label_33c078;
        case 0x33c07cu: goto label_33c07c;
        case 0x33c080u: goto label_33c080;
        case 0x33c084u: goto label_33c084;
        case 0x33c088u: goto label_33c088;
        case 0x33c08cu: goto label_33c08c;
        case 0x33c090u: goto label_33c090;
        case 0x33c094u: goto label_33c094;
        case 0x33c098u: goto label_33c098;
        case 0x33c09cu: goto label_33c09c;
        case 0x33c0a0u: goto label_33c0a0;
        case 0x33c0a4u: goto label_33c0a4;
        case 0x33c0a8u: goto label_33c0a8;
        case 0x33c0acu: goto label_33c0ac;
        case 0x33c0b0u: goto label_33c0b0;
        case 0x33c0b4u: goto label_33c0b4;
        case 0x33c0b8u: goto label_33c0b8;
        case 0x33c0bcu: goto label_33c0bc;
        case 0x33c0c0u: goto label_33c0c0;
        case 0x33c0c4u: goto label_33c0c4;
        case 0x33c0c8u: goto label_33c0c8;
        case 0x33c0ccu: goto label_33c0cc;
        case 0x33c0d0u: goto label_33c0d0;
        case 0x33c0d4u: goto label_33c0d4;
        case 0x33c0d8u: goto label_33c0d8;
        case 0x33c0dcu: goto label_33c0dc;
        case 0x33c0e0u: goto label_33c0e0;
        case 0x33c0e4u: goto label_33c0e4;
        case 0x33c0e8u: goto label_33c0e8;
        case 0x33c0ecu: goto label_33c0ec;
        case 0x33c0f0u: goto label_33c0f0;
        case 0x33c0f4u: goto label_33c0f4;
        case 0x33c0f8u: goto label_33c0f8;
        case 0x33c0fcu: goto label_33c0fc;
        case 0x33c100u: goto label_33c100;
        case 0x33c104u: goto label_33c104;
        case 0x33c108u: goto label_33c108;
        case 0x33c10cu: goto label_33c10c;
        case 0x33c110u: goto label_33c110;
        case 0x33c114u: goto label_33c114;
        case 0x33c118u: goto label_33c118;
        case 0x33c11cu: goto label_33c11c;
        case 0x33c120u: goto label_33c120;
        case 0x33c124u: goto label_33c124;
        case 0x33c128u: goto label_33c128;
        case 0x33c12cu: goto label_33c12c;
        case 0x33c130u: goto label_33c130;
        case 0x33c134u: goto label_33c134;
        case 0x33c138u: goto label_33c138;
        case 0x33c13cu: goto label_33c13c;
        case 0x33c140u: goto label_33c140;
        case 0x33c144u: goto label_33c144;
        case 0x33c148u: goto label_33c148;
        case 0x33c14cu: goto label_33c14c;
        case 0x33c150u: goto label_33c150;
        case 0x33c154u: goto label_33c154;
        case 0x33c158u: goto label_33c158;
        case 0x33c15cu: goto label_33c15c;
        case 0x33c160u: goto label_33c160;
        case 0x33c164u: goto label_33c164;
        case 0x33c168u: goto label_33c168;
        case 0x33c16cu: goto label_33c16c;
        case 0x33c170u: goto label_33c170;
        case 0x33c174u: goto label_33c174;
        case 0x33c178u: goto label_33c178;
        case 0x33c17cu: goto label_33c17c;
        case 0x33c180u: goto label_33c180;
        case 0x33c184u: goto label_33c184;
        case 0x33c188u: goto label_33c188;
        case 0x33c18cu: goto label_33c18c;
        case 0x33c190u: goto label_33c190;
        case 0x33c194u: goto label_33c194;
        case 0x33c198u: goto label_33c198;
        case 0x33c19cu: goto label_33c19c;
        case 0x33c1a0u: goto label_33c1a0;
        case 0x33c1a4u: goto label_33c1a4;
        case 0x33c1a8u: goto label_33c1a8;
        case 0x33c1acu: goto label_33c1ac;
        case 0x33c1b0u: goto label_33c1b0;
        case 0x33c1b4u: goto label_33c1b4;
        case 0x33c1b8u: goto label_33c1b8;
        case 0x33c1bcu: goto label_33c1bc;
        case 0x33c1c0u: goto label_33c1c0;
        case 0x33c1c4u: goto label_33c1c4;
        case 0x33c1c8u: goto label_33c1c8;
        case 0x33c1ccu: goto label_33c1cc;
        case 0x33c1d0u: goto label_33c1d0;
        case 0x33c1d4u: goto label_33c1d4;
        case 0x33c1d8u: goto label_33c1d8;
        case 0x33c1dcu: goto label_33c1dc;
        case 0x33c1e0u: goto label_33c1e0;
        case 0x33c1e4u: goto label_33c1e4;
        case 0x33c1e8u: goto label_33c1e8;
        case 0x33c1ecu: goto label_33c1ec;
        case 0x33c1f0u: goto label_33c1f0;
        case 0x33c1f4u: goto label_33c1f4;
        case 0x33c1f8u: goto label_33c1f8;
        case 0x33c1fcu: goto label_33c1fc;
        case 0x33c200u: goto label_33c200;
        case 0x33c204u: goto label_33c204;
        case 0x33c208u: goto label_33c208;
        case 0x33c20cu: goto label_33c20c;
        case 0x33c210u: goto label_33c210;
        case 0x33c214u: goto label_33c214;
        case 0x33c218u: goto label_33c218;
        case 0x33c21cu: goto label_33c21c;
        case 0x33c220u: goto label_33c220;
        case 0x33c224u: goto label_33c224;
        case 0x33c228u: goto label_33c228;
        case 0x33c22cu: goto label_33c22c;
        case 0x33c230u: goto label_33c230;
        case 0x33c234u: goto label_33c234;
        case 0x33c238u: goto label_33c238;
        case 0x33c23cu: goto label_33c23c;
        case 0x33c240u: goto label_33c240;
        case 0x33c244u: goto label_33c244;
        case 0x33c248u: goto label_33c248;
        case 0x33c24cu: goto label_33c24c;
        case 0x33c250u: goto label_33c250;
        case 0x33c254u: goto label_33c254;
        case 0x33c258u: goto label_33c258;
        case 0x33c25cu: goto label_33c25c;
        case 0x33c260u: goto label_33c260;
        case 0x33c264u: goto label_33c264;
        case 0x33c268u: goto label_33c268;
        case 0x33c26cu: goto label_33c26c;
        case 0x33c270u: goto label_33c270;
        case 0x33c274u: goto label_33c274;
        case 0x33c278u: goto label_33c278;
        case 0x33c27cu: goto label_33c27c;
        case 0x33c280u: goto label_33c280;
        case 0x33c284u: goto label_33c284;
        case 0x33c288u: goto label_33c288;
        case 0x33c28cu: goto label_33c28c;
        default: break;
    }

    ctx->pc = 0x33b830u;

label_33b830:
    // 0x33b830: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x33b830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_33b834:
    // 0x33b834: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x33b834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
label_33b838:
    // 0x33b838: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x33b838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_33b83c:
    // 0x33b83c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33b83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_33b840:
    // 0x33b840: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33b840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_33b844:
    // 0x33b844: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33b844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33b848:
    // 0x33b848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33b848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33b84c:
    // 0x33b84c: 0x3c030089  lui         $v1, 0x89
    ctx->pc = 0x33b84cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)137 << 16));
label_33b850:
    // 0x33b850: 0x24635450  addiu       $v1, $v1, 0x5450
    ctx->pc = 0x33b850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21584));
label_33b854:
    // 0x33b854: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x33b854u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_33b858:
    // 0x33b858: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x33b858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_33b85c:
    // 0x33b85c: 0x24730080  addiu       $s3, $v1, 0x80
    ctx->pc = 0x33b85cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_33b860:
    // 0x33b860: 0x8e030138  lw          $v1, 0x138($s0)
    ctx->pc = 0x33b860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_33b864:
    // 0x33b864: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x33b864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33b868:
    // 0x33b868: 0x10640280  beq         $v1, $a0, . + 4 + (0x280 << 2)
label_33b86c:
    if (ctx->pc == 0x33B86Cu) {
        ctx->pc = 0x33B870u;
        goto label_33b870;
    }
    ctx->pc = 0x33B868u;
    {
        const bool branch_taken_0x33b868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x33b868) {
            ctx->pc = 0x33C26Cu;
            goto label_33c26c;
        }
    }
    ctx->pc = 0x33B870u;
label_33b870:
    // 0x33b870: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x33b870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_33b874:
    // 0x33b874: 0x8c23bb40  lw          $v1, -0x44C0($at)
    ctx->pc = 0x33b874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949696)));
label_33b878:
    // 0x33b878: 0x1060027c  beqz        $v1, . + 4 + (0x27C << 2)
label_33b87c:
    if (ctx->pc == 0x33B87Cu) {
        ctx->pc = 0x33B880u;
        goto label_33b880;
    }
    ctx->pc = 0x33B878u;
    {
        const bool branch_taken_0x33b878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b878) {
            ctx->pc = 0x33C26Cu;
            goto label_33c26c;
        }
    }
    ctx->pc = 0x33B880u;
label_33b880:
    // 0x33b880: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x33b880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_33b884:
    // 0x33b884: 0x8c241a48  lw          $a0, 0x1A48($at)
    ctx->pc = 0x33b884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6728)));
label_33b888:
    // 0x33b888: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x33b888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_33b88c:
    // 0x33b88c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x33b88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_33b890:
    // 0x33b890: 0x14600276  bnez        $v1, . + 4 + (0x276 << 2)
label_33b894:
    if (ctx->pc == 0x33B894u) {
        ctx->pc = 0x33B898u;
        goto label_33b898;
    }
    ctx->pc = 0x33B890u;
    {
        const bool branch_taken_0x33b890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b890) {
            ctx->pc = 0x33C26Cu;
            goto label_33c26c;
        }
    }
    ctx->pc = 0x33B898u;
label_33b898:
    // 0x33b898: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x33b898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_33b89c:
    // 0x33b89c: 0x8c241a48  lw          $a0, 0x1A48($at)
    ctx->pc = 0x33b89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6728)));
label_33b8a0:
    // 0x33b8a0: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x33b8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_33b8a4:
    // 0x33b8a4: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x33b8a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_33b8a8:
    // 0x33b8a8: 0x14a00270  bnez        $a1, . + 4 + (0x270 << 2)
label_33b8ac:
    if (ctx->pc == 0x33B8ACu) {
        ctx->pc = 0x33B8B0u;
        goto label_33b8b0;
    }
    ctx->pc = 0x33B8A8u;
    {
        const bool branch_taken_0x33b8a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b8a8) {
            ctx->pc = 0x33C26Cu;
            goto label_33c26c;
        }
    }
    ctx->pc = 0x33B8B0u;
label_33b8b0:
    // 0x33b8b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x33b8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_33b8b4:
    // 0x33b8b4: 0x8c241a48  lw          $a0, 0x1A48($at)
    ctx->pc = 0x33b8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6728)));
label_33b8b8:
    // 0x33b8b8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x33b8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_33b8bc:
    // 0x33b8bc: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x33b8bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_33b8c0:
    // 0x33b8c0: 0x14a0026a  bnez        $a1, . + 4 + (0x26A << 2)
label_33b8c4:
    if (ctx->pc == 0x33B8C4u) {
        ctx->pc = 0x33B8C8u;
        goto label_33b8c8;
    }
    ctx->pc = 0x33B8C0u;
    {
        const bool branch_taken_0x33b8c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b8c0) {
            ctx->pc = 0x33C26Cu;
            goto label_33c26c;
        }
    }
    ctx->pc = 0x33B8C8u;
label_33b8c8:
    // 0x33b8c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x33b8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_33b8cc:
    // 0x33b8cc: 0x8c241a40  lw          $a0, 0x1A40($at)
    ctx->pc = 0x33b8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6720)));
label_33b8d0:
    // 0x33b8d0: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x33b8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_33b8d4:
    // 0x33b8d4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x33b8d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_33b8d8:
    // 0x33b8d8: 0x14600264  bnez        $v1, . + 4 + (0x264 << 2)
label_33b8dc:
    if (ctx->pc == 0x33B8DCu) {
        ctx->pc = 0x33B8E0u;
        goto label_33b8e0;
    }
    ctx->pc = 0x33B8D8u;
    {
        const bool branch_taken_0x33b8d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b8d8) {
            ctx->pc = 0x33C26Cu;
            goto label_33c26c;
        }
    }
    ctx->pc = 0x33B8E0u;
label_33b8e0:
    // 0x33b8e0: 0xc0cf324  jal         func_33CC90
label_33b8e4:
    if (ctx->pc == 0x33B8E4u) {
        ctx->pc = 0x33B8E8u;
        goto label_33b8e8;
    }
    ctx->pc = 0x33B8E0u;
    SET_GPR_U32(ctx, 31, 0x33B8E8u);
    ctx->pc = 0x33CC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CC90u, 0x33B8E0u, 0x33B8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B8E8u;
label_33b8e8:
    // 0x33b8e8: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x33b8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_33b8ec:
    // 0x33b8ec: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x33b8ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_33b8f0:
    // 0x33b8f0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33b8f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_33b8f4:
    // 0x33b8f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33b8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33b8f8:
    // 0x33b8f8: 0x10830221  beq         $a0, $v1, . + 4 + (0x221 << 2)
label_33b8fc:
    if (ctx->pc == 0x33B8FCu) {
        ctx->pc = 0x33B900u;
        goto label_33b900;
    }
    ctx->pc = 0x33B8F8u;
    {
        const bool branch_taken_0x33b8f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33b8f8) {
            ctx->pc = 0x33C180u;
            goto label_33c180;
        }
    }
    ctx->pc = 0x33B900u;
label_33b900:
    // 0x33b900: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33b900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33b904:
    // 0x33b904: 0x108300a2  beq         $a0, $v1, . + 4 + (0xA2 << 2)
label_33b908:
    if (ctx->pc == 0x33B908u) {
        ctx->pc = 0x33B90Cu;
        goto label_33b90c;
    }
    ctx->pc = 0x33B904u;
    {
        const bool branch_taken_0x33b904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33b904) {
            ctx->pc = 0x33BB90u;
            goto label_33bb90;
        }
    }
    ctx->pc = 0x33B90Cu;
label_33b90c:
    // 0x33b90c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_33b910:
    if (ctx->pc == 0x33B910u) {
        ctx->pc = 0x33B914u;
        goto label_33b914;
    }
    ctx->pc = 0x33B90Cu;
    {
        const bool branch_taken_0x33b90c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b90c) {
            ctx->pc = 0x33B91Cu;
            goto label_33b91c;
        }
    }
    ctx->pc = 0x33B914u;
label_33b914:
    // 0x33b914: 0x10000255  b           . + 4 + (0x255 << 2)
label_33b918:
    if (ctx->pc == 0x33B918u) {
        ctx->pc = 0x33B91Cu;
        goto label_33b91c;
    }
    ctx->pc = 0x33B914u;
    {
        const bool branch_taken_0x33b914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b914) {
            ctx->pc = 0x33C26Cu;
            goto label_33c26c;
        }
    }
    ctx->pc = 0x33B91Cu;
label_33b91c:
    // 0x33b91c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x33b91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_33b920:
    // 0x33b920: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x33b920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_33b924:
    // 0x33b924: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x33b924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_33b928:
    // 0x33b928: 0x14600250  bnez        $v1, . + 4 + (0x250 << 2)
label_33b92c:
    if (ctx->pc == 0x33B92Cu) {
        ctx->pc = 0x33B930u;
        goto label_33b930;
    }
    ctx->pc = 0x33B928u;
    {
        const bool branch_taken_0x33b928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b928) {
            ctx->pc = 0x33C26Cu;
            goto label_33c26c;
        }
    }
    ctx->pc = 0x33B930u;
label_33b930:
    // 0x33b930: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x33b930u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_33b934:
    // 0x33b934: 0x1000008e  b           . + 4 + (0x8E << 2)
label_33b938:
    if (ctx->pc == 0x33B938u) {
        ctx->pc = 0x33B93Cu;
        goto label_33b93c;
    }
    ctx->pc = 0x33B934u;
    {
        const bool branch_taken_0x33b934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b934) {
            ctx->pc = 0x33BB70u;
            goto label_33bb70;
        }
    }
    ctx->pc = 0x33B93Cu;
label_33b93c:
    // 0x33b93c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x33b93cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_33b940:
    // 0x33b940: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x33b940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_33b944:
    // 0x33b944: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x33b944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_33b948:
    // 0x33b948: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x33b948u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_33b94c:
    // 0x33b94c: 0xc0cf414  jal         func_33D050
label_33b950:
    if (ctx->pc == 0x33B950u) {
        ctx->pc = 0x33B954u;
        goto label_33b954;
    }
    ctx->pc = 0x33B94Cu;
    SET_GPR_U32(ctx, 31, 0x33B954u);
    ctx->pc = 0x33D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D050u, 0x33B94Cu, 0x33B954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B954u;
label_33b954:
    // 0x33b954: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x33b954u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_33b958:
    // 0x33b958: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x33b958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_33b95c:
    // 0x33b95c: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x33b95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_33b960:
    // 0x33b960: 0x8ca40028  lw          $a0, 0x28($a1)
    ctx->pc = 0x33b960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_33b964:
    // 0x33b964: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x33b964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_33b968:
    // 0x33b968: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33b968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_33b96c:
    // 0x33b96c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x33b96cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33b970:
    // 0x33b970: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x33b970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_33b974:
    // 0x33b974: 0x24639a40  addiu       $v1, $v1, -0x65C0
    ctx->pc = 0x33b974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941248));
label_33b978:
    // 0x33b978: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x33b978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_33b97c:
    // 0x33b97c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x33b97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_33b980:
    // 0x33b980: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x33b980u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_33b984:
    // 0x33b984: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x33b984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_33b988:
    // 0x33b988: 0x94640018  lhu         $a0, 0x18($v1)
    ctx->pc = 0x33b988u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_33b98c:
    // 0x33b98c: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x33b98cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_33b990:
    // 0x33b990: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x33b990u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_33b994:
    // 0x33b994: 0x10200071  beqz        $at, . + 4 + (0x71 << 2)
label_33b998:
    if (ctx->pc == 0x33B998u) {
        ctx->pc = 0x33B99Cu;
        goto label_33b99c;
    }
    ctx->pc = 0x33B994u;
    {
        const bool branch_taken_0x33b994 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b994) {
            ctx->pc = 0x33BB5Cu;
            goto label_33bb5c;
        }
    }
    ctx->pc = 0x33B99Cu;
label_33b99c:
    // 0x33b99c: 0x8e03013c  lw          $v1, 0x13C($s0)
    ctx->pc = 0x33b99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
label_33b9a0:
    // 0x33b9a0: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x33b9a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_33b9a4:
    // 0x33b9a4: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x33b9a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_33b9a8:
    // 0x33b9a8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x33b9a8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_33b9ac:
    // 0x33b9ac: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x33b9acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_33b9b0:
    // 0x33b9b0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x33b9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_33b9b4:
    // 0x33b9b4: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x33b9b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_33b9b8:
    // 0x33b9b8: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
label_33b9bc:
    if (ctx->pc == 0x33B9BCu) {
        ctx->pc = 0x33B9C0u;
        goto label_33b9c0;
    }
    ctx->pc = 0x33B9B8u;
    {
        const bool branch_taken_0x33b9b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b9b8) {
            ctx->pc = 0x33BA78u;
            goto label_33ba78;
        }
    }
    ctx->pc = 0x33B9C0u;
label_33b9c0:
    // 0x33b9c0: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
label_33b9c4:
    if (ctx->pc == 0x33B9C4u) {
        ctx->pc = 0x33B9C8u;
        goto label_33b9c8;
    }
    ctx->pc = 0x33B9C0u;
    {
        const bool branch_taken_0x33b9c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b9c0) {
            ctx->pc = 0x33B9D8u;
            goto label_33b9d8;
        }
    }
    ctx->pc = 0x33B9C8u;
label_33b9c8:
    // 0x33b9c8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x33b9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_33b9cc:
    // 0x33b9cc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x33b9ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_33b9d0:
    // 0x33b9d0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x33b9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_33b9d4:
    // 0x33b9d4: 0x0  nop
    ctx->pc = 0x33b9d4u;
    // NOP
label_33b9d8:
    // 0x33b9d8: 0x8e05013c  lw          $a1, 0x13C($s0)
    ctx->pc = 0x33b9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
label_33b9dc:
    // 0x33b9dc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x33b9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_33b9e0:
    // 0x33b9e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33b9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33b9e4:
    // 0x33b9e4: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_33b9e8:
    if (ctx->pc == 0x33B9E8u) {
        ctx->pc = 0x33B9ECu;
        goto label_33b9ec;
    }
    ctx->pc = 0x33B9E4u;
    {
        const bool branch_taken_0x33b9e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33b9e4) {
            ctx->pc = 0x33B9F8u;
            goto label_33b9f8;
        }
    }
    ctx->pc = 0x33B9ECu;
label_33b9ec:
    // 0x33b9ec: 0x8e6400bc  lw          $a0, 0xBC($s3)
    ctx->pc = 0x33b9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_33b9f0:
    // 0x33b9f0: 0x8e03013c  lw          $v1, 0x13C($s0)
    ctx->pc = 0x33b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
label_33b9f4:
    // 0x33b9f4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x33b9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_33b9f8:
    // 0x33b9f8: 0x24052710  addiu       $a1, $zero, 0x2710
    ctx->pc = 0x33b9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_33b9fc:
    // 0x33b9fc: 0x8e04013c  lw          $a0, 0x13C($s0)
    ctx->pc = 0x33b9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
label_33ba00:
    // 0x33ba00: 0xa4850004  sh          $a1, 0x4($a0)
    ctx->pc = 0x33ba00u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 5));
label_33ba04:
    // 0x33ba04: 0x8e0400a8  lw          $a0, 0xA8($s0)
    ctx->pc = 0x33ba04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_33ba08:
    // 0x33ba08: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x33ba08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_33ba0c:
    // 0x33ba0c: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x33ba0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_33ba10:
    // 0x33ba10: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x33ba10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_33ba14:
    // 0x33ba14: 0x642823  subu        $a1, $v1, $a0
    ctx->pc = 0x33ba14u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_33ba18:
    // 0x33ba18: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x33ba18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_33ba1c:
    // 0x33ba1c: 0x8603000c  lh          $v1, 0xC($s0)
    ctx->pc = 0x33ba1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_33ba20:
    // 0x33ba20: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x33ba20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_33ba24:
    // 0x33ba24: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x33ba24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_33ba28:
    // 0x33ba28: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x33ba28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_33ba2c:
    // 0x33ba2c: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
label_33ba30:
    if (ctx->pc == 0x33BA30u) {
        ctx->pc = 0x33BA34u;
        goto label_33ba34;
    }
    ctx->pc = 0x33BA2Cu;
    {
        const bool branch_taken_0x33ba2c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ba2c) {
            ctx->pc = 0x33BA64u;
            goto label_33ba64;
        }
    }
    ctx->pc = 0x33BA34u;
label_33ba34:
    // 0x33ba34: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x33ba34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_33ba38:
    // 0x33ba38: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x33ba38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_33ba3c:
    // 0x33ba3c: 0xae0400a8  sw          $a0, 0xA8($s0)
    ctx->pc = 0x33ba3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 4));
label_33ba40:
    // 0x33ba40: 0xa600000c  sh          $zero, 0xC($s0)
    ctx->pc = 0x33ba40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
label_33ba44:
    // 0x33ba44: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x33ba44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_33ba48:
    // 0x33ba48: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x33ba48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_33ba4c:
    // 0x33ba4c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x33ba4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_33ba50:
    // 0x33ba50: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x33ba50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_33ba54:
    // 0x33ba54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33ba54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33ba58:
    // 0x33ba58: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x33ba58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_33ba5c:
    // 0x33ba5c: 0x10000203  b           . + 4 + (0x203 << 2)
label_33ba60:
    if (ctx->pc == 0x33BA60u) {
        ctx->pc = 0x33BA64u;
        goto label_33ba64;
    }
    ctx->pc = 0x33BA5Cu;
    {
        const bool branch_taken_0x33ba5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ba5c) {
            ctx->pc = 0x33C26Cu;
            goto label_33c26c;
        }
    }
    ctx->pc = 0x33BA64u;
label_33ba64:
    // 0x33ba64: 0x8603000c  lh          $v1, 0xC($s0)
    ctx->pc = 0x33ba64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_33ba68:
    // 0x33ba68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33ba68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_33ba6c:
    // 0x33ba6c: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x33ba6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
label_33ba70:
    // 0x33ba70: 0x1000003a  b           . + 4 + (0x3A << 2)
label_33ba74:
    if (ctx->pc == 0x33BA74u) {
        ctx->pc = 0x33BA78u;
        goto label_33ba78;
    }
    ctx->pc = 0x33BA70u;
    {
        const bool branch_taken_0x33ba70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ba70) {
            ctx->pc = 0x33BB5Cu;
            goto label_33bb5c;
        }
    }
    ctx->pc = 0x33BA78u;
label_33ba78:
    // 0x33ba78: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x33ba78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_33ba7c:
    // 0x33ba7c: 0x8c26bb40  lw          $a2, -0x44C0($at)
    ctx->pc = 0x33ba7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949696)));
label_33ba80:
    // 0x33ba80: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x33ba80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_33ba84:
    // 0x33ba84: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x33ba84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_33ba88:
    // 0x33ba88: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x33ba88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_33ba8c:
    // 0x33ba8c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x33ba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_33ba90:
    // 0x33ba90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33ba90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_33ba94:
    // 0x33ba94: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x33ba94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33ba98:
    // 0x33ba98: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x33ba98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_33ba9c:
    // 0x33ba9c: 0x24839a40  addiu       $v1, $a0, -0x65C0
    ctx->pc = 0x33ba9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941248));
label_33baa0:
    // 0x33baa0: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x33baa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_33baa4:
    // 0x33baa4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x33baa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_33baa8:
    // 0x33baa8: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x33baa8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_33baac:
    // 0x33baac: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x33baacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_33bab0:
    // 0x33bab0: 0x94830012  lhu         $v1, 0x12($a0)
    ctx->pc = 0x33bab0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
label_33bab4:
    // 0x33bab4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x33bab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_33bab8:
    // 0x33bab8: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x33bab8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_33babc:
    // 0x33babc: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_33bac0:
    if (ctx->pc == 0x33BAC0u) {
        ctx->pc = 0x33BAC4u;
        goto label_33bac4;
    }
    ctx->pc = 0x33BABCu;
    {
        const bool branch_taken_0x33babc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33babc) {
            ctx->pc = 0x33BAF8u;
            goto label_33baf8;
        }
    }
    ctx->pc = 0x33BAC4u;
label_33bac4:
    // 0x33bac4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x33bac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_33bac8:
    // 0x33bac8: 0x8c23bb40  lw          $v1, -0x44C0($at)
    ctx->pc = 0x33bac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949696)));
label_33bacc:
    // 0x33bacc: 0x72082b  sltu        $at, $v1, $s2
    ctx->pc = 0x33baccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_33bad0:
    // 0x33bad0: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
label_33bad4:
    if (ctx->pc == 0x33BAD4u) {
        ctx->pc = 0x33BAD8u;
        goto label_33bad8;
    }
    ctx->pc = 0x33BAD0u;
    {
        const bool branch_taken_0x33bad0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33bad0) {
            ctx->pc = 0x33BB5Cu;
            goto label_33bb5c;
        }
    }
    ctx->pc = 0x33BAD8u;
label_33bad8:
    // 0x33bad8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x33bad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_33badc:
    // 0x33badc: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x33badcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_33bae0:
    // 0x33bae0: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x33bae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_33bae4:
    // 0x33bae4: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x33bae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_33bae8:
    // 0x33bae8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33bae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33baec:
    // 0x33baec: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x33baecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_33baf0:
    // 0x33baf0: 0x100001de  b           . + 4 + (0x1DE << 2)
label_33baf4:
    if (ctx->pc == 0x33BAF4u) {
        ctx->pc = 0x33BAF8u;
        goto label_33baf8;
    }
    ctx->pc = 0x33BAF0u;
    {
        const bool branch_taken_0x33baf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33baf0) {
            ctx->pc = 0x33C26Cu;
            goto label_33c26c;
        }
    }
    ctx->pc = 0x33BAF8u;
label_33baf8:
    // 0x33baf8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x33baf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_33bafc:
    // 0x33bafc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x33bafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_33bb00:
    // 0x33bb00: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x33bb00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_33bb04:
    // 0x33bb04: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x33bb04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_33bb08:
    // 0x33bb08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33bb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_33bb0c:
    // 0x33bb0c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x33bb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33bb10:
    // 0x33bb10: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x33bb10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_33bb14:
    // 0x33bb14: 0x24639a40  addiu       $v1, $v1, -0x65C0
    ctx->pc = 0x33bb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941248));
label_33bb18:
    // 0x33bb18: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x33bb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_33bb1c:
    // 0x33bb1c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x33bb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_33bb20:
    // 0x33bb20: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x33bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_33bb24:
    // 0x33bb24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33bb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_33bb28:
    // 0x33bb28: 0x94630012  lhu         $v1, 0x12($v1)
    ctx->pc = 0x33bb28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
label_33bb2c:
    // 0x33bb2c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x33bb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_33bb30:
    // 0x33bb30: 0x72082b  sltu        $at, $v1, $s2
    ctx->pc = 0x33bb30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_33bb34:
    // 0x33bb34: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
label_33bb38:
    if (ctx->pc == 0x33BB38u) {
        ctx->pc = 0x33BB3Cu;
        goto label_33bb3c;
    }
    ctx->pc = 0x33BB34u;
    {
        const bool branch_taken_0x33bb34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33bb34) {
            ctx->pc = 0x33BB5Cu;
            goto label_33bb5c;
        }
    }
    ctx->pc = 0x33BB3Cu;
label_33bb3c:
    // 0x33bb3c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x33bb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_33bb40:
    // 0x33bb40: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x33bb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_33bb44:
    // 0x33bb44: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x33bb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_33bb48:
    // 0x33bb48: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x33bb48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_33bb4c:
    // 0x33bb4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33bb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33bb50:
    // 0x33bb50: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x33bb50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_33bb54:
    // 0x33bb54: 0x100001c5  b           . + 4 + (0x1C5 << 2)
label_33bb58:
    if (ctx->pc == 0x33BB58u) {
        ctx->pc = 0x33BB5Cu;
        goto label_33bb5c;
    }
    ctx->pc = 0x33BB54u;
    {
        const bool branch_taken_0x33bb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bb54) {
            ctx->pc = 0x33C26Cu;
            goto label_33c26c;
        }
    }
    ctx->pc = 0x33BB5Cu;
label_33bb5c:
    // 0x33bb5c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x33bb5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_33bb60:
    // 0x33bb60: 0x2e210020  sltiu       $at, $s1, 0x20
    ctx->pc = 0x33bb60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_33bb64:
    // 0x33bb64: 0x102001c1  beqz        $at, . + 4 + (0x1C1 << 2)
label_33bb68:
    if (ctx->pc == 0x33BB68u) {
        ctx->pc = 0x33BB6Cu;
        goto label_33bb6c;
    }
    ctx->pc = 0x33BB64u;
    {
        const bool branch_taken_0x33bb64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bb64) {
            ctx->pc = 0x33C26Cu;
            goto label_33c26c;
        }
    }
    ctx->pc = 0x33BB6Cu;
label_33bb6c:
    // 0x33bb6c: 0x0  nop
    ctx->pc = 0x33bb6cu;
    // NOP
label_33bb70:
    // 0x33bb70: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x33bb70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_33bb74:
    // 0x33bb74: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x33bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_33bb78:
    // 0x33bb78: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x33bb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_33bb7c:
    // 0x33bb7c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33bb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33bb80:
    // 0x33bb80: 0x1483ff6e  bne         $a0, $v1, . + 4 + (-0x92 << 2)
label_33bb84:
    if (ctx->pc == 0x33BB84u) {
        ctx->pc = 0x33BB88u;
        goto label_33bb88;
    }
    ctx->pc = 0x33BB80u;
    {
        const bool branch_taken_0x33bb80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33bb80) {
            ctx->pc = 0x33B93Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b93c;
        }
    }
    ctx->pc = 0x33BB88u;
label_33bb88:
    // 0x33bb88: 0x100001b8  b           . + 4 + (0x1B8 << 2)
label_33bb8c:
    if (ctx->pc == 0x33BB8Cu) {
        ctx->pc = 0x33BB90u;
        goto label_33bb90;
    }
    ctx->pc = 0x33BB88u;
    {
        const bool branch_taken_0x33bb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bb88) {
            ctx->pc = 0x33C26Cu;
            goto label_33c26c;
        }
    }
    ctx->pc = 0x33BB90u;
label_33bb90:
    // 0x33bb90: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x33bb90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_33bb94:
    // 0x33bb94: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x33bb94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_33bb98:
    // 0x33bb98: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x33bb98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_33bb9c:
    // 0x33bb9c: 0x102001b3  beqz        $at, . + 4 + (0x1B3 << 2)
label_33bba0:
    if (ctx->pc == 0x33BBA0u) {
        ctx->pc = 0x33BBA4u;
        goto label_33bba4;
    }
    ctx->pc = 0x33BB9Cu;
    {
        const bool branch_taken_0x33bb9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bb9c) {
            ctx->pc = 0x33C26Cu;
            goto label_33c26c;
        }
    }
    ctx->pc = 0x33BBA4u;
label_33bba4:
    // 0x33bba4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x33bba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_33bba8:
    // 0x33bba8: 0x24642930  addiu       $a0, $v1, 0x2930
    ctx->pc = 0x33bba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10544));
label_33bbac:
    // 0x33bbac: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x33bbacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_33bbb0:
    // 0x33bbb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33bbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_33bbb4:
    // 0x33bbb4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x33bbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_33bbb8:
    // 0x33bbb8: 0x600008  jr          $v1
label_33bbbc:
    if (ctx->pc == 0x33BBBCu) {
        ctx->pc = 0x33BBC0u;
        goto label_33bbc0;
    }
    ctx->pc = 0x33BBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BBB8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x33BBC0u;
label_33bbc0:
    // 0x33bbc0: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x33bbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_33bbc4:
    // 0x33bbc4: 0xc0cf198  jal         func_33C660
label_33bbc8:
    if (ctx->pc == 0x33BBC8u) {
        ctx->pc = 0x33BBCCu;
        goto label_33bbcc;
    }
    ctx->pc = 0x33BBC4u;
    SET_GPR_U32(ctx, 31, 0x33BBCCu);
    ctx->pc = 0x33C660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C660u, 0x33BBC4u, 0x33BBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BBCCu;
label_33bbcc:
    // 0x33bbcc: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x33bbccu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_33bbd0:
    // 0x33bbd0: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
label_33bbd4:
    if (ctx->pc == 0x33BBD4u) {
        ctx->pc = 0x33BBD8u;
        goto label_33bbd8;
    }
    ctx->pc = 0x33BBD0u;
    {
        const bool branch_taken_0x33bbd0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x33bbd0) {
            ctx->pc = 0x33BBE4u;
            goto label_33bbe4;
        }
    }
    ctx->pc = 0x33BBD8u;
label_33bbd8:
    // 0x33bbd8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x33bbd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_33bbdc:
    // 0x33bbdc: 0x100001a3  b           . + 4 + (0x1A3 << 2)
label_33bbe0:
    if (ctx->pc == 0x33BBE0u) {
        ctx->pc = 0x33BBE4u;
        goto label_33bbe4;
    }
    ctx->pc = 0x33BBDCu;
    {
        const bool branch_taken_0x33bbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bbdc) {
            ctx->pc = 0x33C26Cu;
            goto label_33c26c;
        }
    }
    ctx->pc = 0x33BBE4u;
label_33bbe4:
    // 0x33bbe4: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x33bbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_33bbe8:
    // 0x33bbe8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x33bbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_33bbec:
    // 0x33bbec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33bbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_33bbf0:
    // 0x33bbf0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x33bbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33bbf4:
    // 0x33bbf4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x33bbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_33bbf8:
    // 0x33bbf8: 0x24639a40  addiu       $v1, $v1, -0x65C0
    ctx->pc = 0x33bbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941248));
label_33bbfc:
    // 0x33bbfc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33bbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_33bc00:
    // 0x33bc00: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x33bc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33bc04:
    // 0x33bc04: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x33bc04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_33bc08:
    // 0x33bc08: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x33bc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_33bc0c:
    // 0x33bc0c: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x33bc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_33bc10:
    // 0x33bc10: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x33bc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_33bc14:
    // 0x33bc14: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x33bc14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33bc18:
    // 0x33bc18: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x33bc18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_33bc1c:
    // 0x33bc1c: 0x24629a40  addiu       $v0, $v1, -0x65C0
    ctx->pc = 0x33bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941248));
label_33bc20:
    // 0x33bc20: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_33bc24:
    // 0x33bc24: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x33bc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33bc28:
    // 0x33bc28: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x33bc28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_33bc2c:
    // 0x33bc2c: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x33bc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
label_33bc30:
    // 0x33bc30: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x33bc30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_33bc34:
    // 0x33bc34: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x33bc34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_33bc38:
    // 0x33bc38: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x33bc38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_33bc3c:
    // 0x33bc3c: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x33bc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_33bc40:
    // 0x33bc40: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_33bc44:
    if (ctx->pc == 0x33BC44u) {
        ctx->pc = 0x33BC48u;
        goto label_33bc48;
    }
    ctx->pc = 0x33BC40u;
    {
        const bool branch_taken_0x33bc40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33bc40) {
            ctx->pc = 0x33BC58u;
            goto label_33bc58;
        }
    }
    ctx->pc = 0x33BC48u;
label_33bc48:
    // 0x33bc48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33bc4c:
    // 0x33bc4c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x33bc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_33bc50:
    // 0x33bc50: 0x1000000e  b           . + 4 + (0xE << 2)
label_33bc54:
    if (ctx->pc == 0x33BC54u) {
        ctx->pc = 0x33BC58u;
        goto label_33bc58;
    }
    ctx->pc = 0x33BC50u;
    {
        const bool branch_taken_0x33bc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bc50) {
            ctx->pc = 0x33BC8Cu;
            goto label_33bc8c;
        }
    }
    ctx->pc = 0x33BC58u;
label_33bc58:
    // 0x33bc58: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x33bc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_33bc5c:
    // 0x33bc5c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x33bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_33bc60:
    // 0x33bc60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33bc64:
    // 0x33bc64: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x33bc64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_33bc68:
    // 0x33bc68: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33bc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_33bc6c:
    // 0x33bc6c: 0x24429a40  addiu       $v0, $v0, -0x65C0
    ctx->pc = 0x33bc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941248));
label_33bc70:
    // 0x33bc70: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x33bc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33bc74:
    // 0x33bc74: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x33bc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_33bc78:
    // 0x33bc78: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x33bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_33bc7c:
    // 0x33bc7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33bc80:
    // 0x33bc80: 0x9442000c  lhu         $v0, 0xC($v0)
    ctx->pc = 0x33bc80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_33bc84:
    // 0x33bc84: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33bc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_33bc88:
    // 0x33bc88: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x33bc88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_33bc8c:
    // 0x33bc8c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x33bc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_33bc90:
    // 0x33bc90: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x33bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_33bc94:
    // 0x33bc94: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x33bc94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
label_33bc98:
    // 0x33bc98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33bc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33bc9c:
    // 0x33bc9c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x33bc9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_33bca0:
    // 0x33bca0: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x33bca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_33bca4:
    // 0x33bca4: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x33bca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_33bca8:
    // 0x33bca8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x33bca8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_33bcac:
    // 0x33bcac: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x33bcacu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_33bcb0:
    // 0x33bcb0: 0xc0cf480  jal         func_33D200
label_33bcb4:
    if (ctx->pc == 0x33BCB4u) {
        ctx->pc = 0x33BCB8u;
        goto label_33bcb8;
    }
    ctx->pc = 0x33BCB0u;
    SET_GPR_U32(ctx, 31, 0x33BCB8u);
    ctx->pc = 0x33D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D200u, 0x33BCB0u, 0x33BCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BCB8u;
label_33bcb8:
    // 0x33bcb8: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x33bcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
label_33bcbc:
    // 0x33bcbc: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x33bcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_33bcc0:
    // 0x33bcc0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_33bcc4:
    if (ctx->pc == 0x33BCC4u) {
        ctx->pc = 0x33BCC8u;
        goto label_33bcc8;
    }
    ctx->pc = 0x33BCC0u;
    {
        const bool branch_taken_0x33bcc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33bcc0) {
            ctx->pc = 0x33BCDCu;
            goto label_33bcdc;
        }
    }
    ctx->pc = 0x33BCC8u;
label_33bcc8:
    // 0x33bcc8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33bcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33bccc:
    // 0x33bccc: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x33bcccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_33bcd0:
    // 0x33bcd0: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x33bcd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_33bcd4:
    // 0x33bcd4: 0x10000165  b           . + 4 + (0x165 << 2)
label_33bcd8:
    if (ctx->pc == 0x33BCD8u) {
        ctx->pc = 0x33BCDCu;
        goto label_33bcdc;
    }
    ctx->pc = 0x33BCD4u;
    {
        const bool branch_taken_0x33bcd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bcd4) {
            ctx->pc = 0x33C26Cu;
            goto label_33c26c;
        }
    }
    ctx->pc = 0x33BCDCu;
label_33bcdc:
    // 0x33bcdc: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x33bcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_33bce0:
    // 0x33bce0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x33bce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_33bce4:
    // 0x33bce4: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x33bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_33bce8:
    // 0x33bce8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x33bce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_33bcec:
    // 0x33bcec: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x33bcecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_33bcf0:
    // 0x33bcf0: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x33bcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_33bcf4:
    // 0x33bcf4: 0xc0cf1b0  jal         func_33C6C0
label_33bcf8:
    if (ctx->pc == 0x33BCF8u) {
        ctx->pc = 0x33BCFCu;
        goto label_33bcfc;
    }
    ctx->pc = 0x33BCF4u;
    SET_GPR_U32(ctx, 31, 0x33BCFCu);
    ctx->pc = 0x33C6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C6C0u, 0x33BCF4u, 0x33BCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BCFCu;
label_33bcfc:
    // 0x33bcfc: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x33bcfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
label_33bd00:
    // 0x33bd00: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x33bd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_33bd04:
    // 0x33bd04: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x33bd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_33bd08:
    // 0x33bd08: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x33bd08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_33bd0c:
    // 0x33bd0c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33bd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_33bd10:
    // 0x33bd10: 0x24429ec0  addiu       $v0, $v0, -0x6140
    ctx->pc = 0x33bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942400));
label_33bd14:
    // 0x33bd14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33bd18:
    // 0x33bd18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33bd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33bd1c:
    // 0x33bd1c: 0x40f809  jalr        $v0
label_33bd20:
    if (ctx->pc == 0x33BD20u) {
        ctx->pc = 0x33BD24u;
        goto label_33bd24;
    }
    ctx->pc = 0x33BD1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33BD24u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BD1Cu, 0x33BD24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33BD24u;
label_33bd24:
    // 0x33bd24: 0x14400151  bnez        $v0, . + 4 + (0x151 << 2)
label_33bd28:
    if (ctx->pc == 0x33BD28u) {
        ctx->pc = 0x33BD2Cu;
        goto label_33bd2c;
    }
    ctx->pc = 0x33BD24u;
    {
        const bool branch_taken_0x33bd24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33bd24) {
            ctx->pc = 0x33C26Cu;
            goto label_33c26c;
        }
    }
    ctx->pc = 0x33BD2Cu;
label_33bd2c:
    // 0x33bd2c: 0x8602000e  lh          $v0, 0xE($s0)
    ctx->pc = 0x33bd2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_33bd30:
    // 0x33bd30: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x33bd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_33bd34:
    // 0x33bd34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33bd34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_33bd38:
    // 0x33bd38: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33bd38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_33bd3c:
    // 0x33bd3c: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33bd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_33bd40:
    // 0x33bd40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33bd44:
    // 0x33bd44: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x33bd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_33bd48:
    // 0x33bd48: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x33bd48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_33bd4c:
    // 0x33bd4c: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x33bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_33bd50:
    // 0x33bd50: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x33bd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_33bd54:
    // 0x33bd54: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x33bd54u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_33bd58:
    // 0x33bd58: 0x8602000e  lh          $v0, 0xE($s0)
    ctx->pc = 0x33bd58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_33bd5c:
    // 0x33bd5c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x33bd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_33bd60:
    // 0x33bd60: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33bd60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_33bd64:
    // 0x33bd64: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33bd64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_33bd68:
    // 0x33bd68: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_33bd6c:
    // 0x33bd6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33bd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33bd70:
    // 0x33bd70: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x33bd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_33bd74:
    // 0x33bd74: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x33bd74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_33bd78:
    // 0x33bd78: 0x8e020134  lw          $v0, 0x134($s0)
    ctx->pc = 0x33bd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_33bd7c:
    // 0x33bd7c: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x33bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_33bd80:
    // 0x33bd80: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x33bd80u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_33bd84:
    // 0x33bd84: 0x8602000e  lh          $v0, 0xE($s0)
    ctx->pc = 0x33bd84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_33bd88:
    // 0x33bd88: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x33bd88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_33bd8c:
    // 0x33bd8c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x33bd8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_33bd90:
    // 0x33bd90: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x33bd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_33bd94:
    // 0x33bd94: 0x621806  srlv        $v1, $v0, $v1
    ctx->pc = 0x33bd94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_33bd98:
    // 0x33bd98: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x33bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
label_33bd9c:
    // 0x33bd9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33bd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_33bda0:
    // 0x33bda0: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x33bda0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
label_33bda4:
    // 0x33bda4: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33bda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_33bda8:
    // 0x33bda8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x33bda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_33bdac:
    // 0x33bdac: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x33bdacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_33bdb0:
    // 0x33bdb0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x33bdb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_33bdb4:
    // 0x33bdb4: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x33bdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_33bdb8:
    // 0x33bdb8: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x33bdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_33bdbc:
    // 0x33bdbc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x33bdbcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_33bdc0:
    // 0x33bdc0: 0xc067b18  jal         func_19EC60
label_33bdc4:
    if (ctx->pc == 0x33BDC4u) {
        ctx->pc = 0x33BDC8u;
        goto label_33bdc8;
    }
    ctx->pc = 0x33BDC0u;
    SET_GPR_U32(ctx, 31, 0x33BDC8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x33BDC0u, 0x33BDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BDC8u;
label_33bdc8:
    // 0x33bdc8: 0x8603000e  lh          $v1, 0xE($s0)
    ctx->pc = 0x33bdc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_33bdcc:
    // 0x33bdcc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x33bdccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_33bdd0:
    // 0x33bdd0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x33bdd0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_33bdd4:
    // 0x33bdd4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x33bdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33bdd8:
    // 0x33bdd8: 0x8e030138  lw          $v1, 0x138($s0)
    ctx->pc = 0x33bdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_33bddc:
    // 0x33bddc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33bddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_33bde0:
    // 0x33bde0: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x33bde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_33bde4:
    // 0x33bde4: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x33bde4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_33bde8:
    // 0x33bde8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33bde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33bdec:
    // 0x33bdec: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
label_33bdf0:
    if (ctx->pc == 0x33BDF0u) {
        ctx->pc = 0x33BDF4u;
        goto label_33bdf4;
    }
    ctx->pc = 0x33BDECu;
    {
        const bool branch_taken_0x33bdec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33bdec) {
            ctx->pc = 0x33BE68u;
            goto label_33be68;
        }
    }
    ctx->pc = 0x33BDF4u;
label_33bdf4:
    // 0x33bdf4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x33bdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_33bdf8:
    // 0x33bdf8: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
label_33bdfc:
    if (ctx->pc == 0x33BDFCu) {
        ctx->pc = 0x33BE00u;
        goto label_33be00;
    }
    ctx->pc = 0x33BDF8u;
    {
        const bool branch_taken_0x33bdf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33bdf8) {
            ctx->pc = 0x33BE68u;
            goto label_33be68;
        }
    }
    ctx->pc = 0x33BE00u;
label_33be00:
    // 0x33be00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33be00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33be04:
    // 0x33be04: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
label_33be08:
    if (ctx->pc == 0x33BE08u) {
        ctx->pc = 0x33BE0Cu;
        goto label_33be0c;
    }
    ctx->pc = 0x33BE04u;
    {
        const bool branch_taken_0x33be04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33be04) {
            ctx->pc = 0x33BE50u;
            goto label_33be50;
        }
    }
    ctx->pc = 0x33BE0Cu;
label_33be0c:
    // 0x33be0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33be0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33be10:
    // 0x33be10: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_33be14:
    if (ctx->pc == 0x33BE14u) {
        ctx->pc = 0x33BE18u;
        goto label_33be18;
    }
    ctx->pc = 0x33BE10u;
    {
        const bool branch_taken_0x33be10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33be10) {
            ctx->pc = 0x33BE20u;
            goto label_33be20;
        }
    }
    ctx->pc = 0x33BE18u;
label_33be18:
    // 0x33be18: 0x10000013  b           . + 4 + (0x13 << 2)
label_33be1c:
    if (ctx->pc == 0x33BE1Cu) {
        ctx->pc = 0x33BE20u;
        goto label_33be20;
    }
    ctx->pc = 0x33BE18u;
    {
        const bool branch_taken_0x33be18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33be18) {
            ctx->pc = 0x33BE68u;
            goto label_33be68;
        }
    }
    ctx->pc = 0x33BE20u;
label_33be20:
    // 0x33be20: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x33be20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_33be24:
    // 0x33be24: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x33be24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_33be28:
    // 0x33be28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33be28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33be2c:
    // 0x33be2c: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33be2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_33be30:
    // 0x33be30: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x33be30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
label_33be34:
    // 0x33be34: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x33be34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_33be38:
    // 0x33be38: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x33be38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_33be3c:
    // 0x33be3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33be3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33be40:
    // 0x33be40: 0x8e030134  lw          $v1, 0x134($s0)
    ctx->pc = 0x33be40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_33be44:
    // 0x33be44: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x33be44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
label_33be48:
    // 0x33be48: 0x10000007  b           . + 4 + (0x7 << 2)
label_33be4c:
    if (ctx->pc == 0x33BE4Cu) {
        ctx->pc = 0x33BE50u;
        goto label_33be50;
    }
    ctx->pc = 0x33BE48u;
    {
        const bool branch_taken_0x33be48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33be48) {
            ctx->pc = 0x33BE68u;
            goto label_33be68;
        }
    }
    ctx->pc = 0x33BE50u;
label_33be50:
    // 0x33be50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33be50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33be54:
    // 0x33be54: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33be54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_33be58:
    // 0x33be58: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x33be58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
label_33be5c:
    // 0x33be5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33be5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33be60:
    // 0x33be60: 0x8e030134  lw          $v1, 0x134($s0)
    ctx->pc = 0x33be60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_33be64:
    // 0x33be64: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x33be64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
label_33be68:
    // 0x33be68: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33be68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33be6c:
    // 0x33be6c: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x33be6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_33be70:
    // 0x33be70: 0x8613000e  lh          $s3, 0xE($s0)
    ctx->pc = 0x33be70u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_33be74:
    // 0x33be74: 0x131c3c  dsll32      $v1, $s3, 16
    ctx->pc = 0x33be74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 16));
label_33be78:
    // 0x33be78: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x33be78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_33be7c:
    // 0x33be7c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x33be7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33be80:
    // 0x33be80: 0x8e030138  lw          $v1, 0x138($s0)
    ctx->pc = 0x33be80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_33be84:
    // 0x33be84: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x33be84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_33be88:
    // 0x33be88: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x33be88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_33be8c:
    // 0x33be8c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x33be8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_33be90:
    // 0x33be90: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_33be94:
    if (ctx->pc == 0x33BE94u) {
        ctx->pc = 0x33BE98u;
        goto label_33be98;
    }
    ctx->pc = 0x33BE90u;
    {
        const bool branch_taken_0x33be90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33be90) {
            ctx->pc = 0x33BEB0u;
            goto label_33beb0;
        }
    }
    ctx->pc = 0x33BE98u;
label_33be98:
    // 0x33be98: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x33be98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33be9c:
    // 0x33be9c: 0xa6040006  sh          $a0, 0x6($s0)
    ctx->pc = 0x33be9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 4));
label_33bea0:
    // 0x33bea0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33bea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33bea4:
    // 0x33bea4: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x33bea4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_33bea8:
    // 0x33bea8: 0x100000f0  b           . + 4 + (0xF0 << 2)
label_33beac:
    if (ctx->pc == 0x33BEACu) {
        ctx->pc = 0x33BEB0u;
        goto label_33beb0;
    }
    ctx->pc = 0x33BEA8u;
    {
        const bool branch_taken_0x33bea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bea8) {
            ctx->pc = 0x33C26Cu;
            goto label_33c26c;
        }
    }
    ctx->pc = 0x33BEB0u;
label_33beb0:
    // 0x33beb0: 0x8e050130  lw          $a1, 0x130($s0)
    ctx->pc = 0x33beb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_33beb4:
    // 0x33beb4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x33beb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_33beb8:
    // 0x33beb8: 0x34830002  ori         $v1, $a0, 0x2
    ctx->pc = 0x33beb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
label_33bebc:
    // 0x33bebc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x33bebcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_33bec0:
    // 0x33bec0: 0x8e050134  lw          $a1, 0x134($s0)
    ctx->pc = 0x33bec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_33bec4:
    // 0x33bec4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x33bec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_33bec8:
    // 0x33bec8: 0x34830002  ori         $v1, $a0, 0x2
    ctx->pc = 0x33bec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
label_33becc:
    // 0x33becc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x33beccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_33bed0:
    // 0x33bed0: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x33bed0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
label_33bed4:
    // 0x33bed4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33bed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33bed8:
    // 0x33bed8: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x33bed8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_33bedc:
    // 0x33bedc: 0x100000e3  b           . + 4 + (0xE3 << 2)
label_33bee0:
    if (ctx->pc == 0x33BEE0u) {
        ctx->pc = 0x33BEE4u;
        goto label_33bee4;
    }
    ctx->pc = 0x33BEDCu;
    {
        const bool branch_taken_0x33bedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bedc) {
            ctx->pc = 0x33C26Cu;
            goto label_33c26c;
        }
    }
    ctx->pc = 0x33BEE4u;
label_33bee4:
    // 0x33bee4: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x33bee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_33bee8:
    // 0x33bee8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x33bee8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_33beec:
    // 0x33beec: 0xc0cf4cc  jal         func_33D330
label_33bef0:
    if (ctx->pc == 0x33BEF0u) {
        ctx->pc = 0x33BEF4u;
        goto label_33bef4;
    }
    ctx->pc = 0x33BEECu;
    SET_GPR_U32(ctx, 31, 0x33BEF4u);
    ctx->pc = 0x33D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D330u, 0x33BEECu, 0x33BEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BEF4u;
label_33bef4:
    // 0x33bef4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x33bef4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_33bef8:
    // 0x33bef8: 0x106000dc  beqz        $v1, . + 4 + (0xDC << 2)
label_33befc:
    if (ctx->pc == 0x33BEFCu) {
        ctx->pc = 0x33BF00u;
        goto label_33bf00;
    }
    ctx->pc = 0x33BEF8u;
    {
        const bool branch_taken_0x33bef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bef8) {
            ctx->pc = 0x33C26Cu;
            goto label_33c26c;
        }
    }
    ctx->pc = 0x33BF00u;
label_33bf00:
    // 0x33bf00: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x33bf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33bf04:
    // 0x33bf04: 0xa2040001  sb          $a0, 0x1($s0)
    ctx->pc = 0x33bf04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 4));
label_33bf08:
    // 0x33bf08: 0x100000d8  b           . + 4 + (0xD8 << 2)
label_33bf0c:
    if (ctx->pc == 0x33BF0Cu) {
        ctx->pc = 0x33BF10u;
        goto label_33bf10;
    }
    ctx->pc = 0x33BF08u;
    {
        const bool branch_taken_0x33bf08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bf08) {
            ctx->pc = 0x33C26Cu;
            goto label_33c26c;
        }
    }
    ctx->pc = 0x33BF10u;
label_33bf10:
    // 0x33bf10: 0xc0cf63c  jal         func_33D8F0
label_33bf14:
    if (ctx->pc == 0x33BF14u) {
        ctx->pc = 0x33BF18u;
        goto label_33bf18;
    }
    ctx->pc = 0x33BF10u;
    SET_GPR_U32(ctx, 31, 0x33BF18u);
    ctx->pc = 0x33D8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D8F0u, 0x33BF10u, 0x33BF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BF18u;
label_33bf18:
    // 0x33bf18: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x33bf18u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_33bf1c:
    // 0x33bf1c: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x33bf1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_33bf20:
    // 0x33bf20: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x33bf20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_33bf24:
    // 0x33bf24: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x33bf24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_33bf28:
    // 0x33bf28: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x33bf28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_33bf2c:
    // 0x33bf2c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x33bf2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_33bf30:
    // 0x33bf30: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x33bf30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_33bf34:
    // 0x33bf34: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x33bf34u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_33bf38:
    // 0x33bf38: 0x1c6000cc  bgtz        $v1, . + 4 + (0xCC << 2)
label_33bf3c:
    if (ctx->pc == 0x33BF3Cu) {
        ctx->pc = 0x33BF40u;
        goto label_33bf40;
    }
    ctx->pc = 0x33BF38u;
    {
        const bool branch_taken_0x33bf38 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x33bf38) {
            ctx->pc = 0x33C26Cu;
            goto label_33c26c;
        }
    }
    ctx->pc = 0x33BF40u;
label_33bf40:
    // 0x33bf40: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x33bf40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_33bf44:
    // 0x33bf44: 0xc0cf6fc  jal         func_33DBF0
label_33bf48:
    if (ctx->pc == 0x33BF48u) {
        ctx->pc = 0x33BF4Cu;
        goto label_33bf4c;
    }
    ctx->pc = 0x33BF44u;
    SET_GPR_U32(ctx, 31, 0x33BF4Cu);
    ctx->pc = 0x33DBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33DBF0u, 0x33BF44u, 0x33BF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BF4Cu;
label_33bf4c:
    // 0x33bf4c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x33bf4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_33bf50:
    // 0x33bf50: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x33bf50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_33bf54:
    // 0x33bf54: 0x590c0  sll         $s2, $a1, 3
    ctx->pc = 0x33bf54u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_33bf58:
    // 0x33bf58: 0x2451821  addu        $v1, $s2, $a1
    ctx->pc = 0x33bf58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_33bf5c:
    // 0x33bf5c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x33bf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33bf60:
    // 0x33bf60: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x33bf60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_33bf64:
    // 0x33bf64: 0x24839a40  addiu       $v1, $a0, -0x65C0
    ctx->pc = 0x33bf64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941248));
label_33bf68:
    // 0x33bf68: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x33bf68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_33bf6c:
    // 0x33bf6c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33bf6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33bf70:
    // 0x33bf70: 0xa6040006  sh          $a0, 0x6($s0)
    ctx->pc = 0x33bf70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 4));
label_33bf74:
    // 0x33bf74: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x33bf74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_33bf78:
    // 0x33bf78: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x33bf78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_33bf7c:
    // 0x33bf7c: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x33bf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_33bf80:
    // 0x33bf80: 0x8e05013c  lw          $a1, 0x13C($s0)
    ctx->pc = 0x33bf80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
label_33bf84:
    // 0x33bf84: 0x84a30004  lh          $v1, 0x4($a1)
    ctx->pc = 0x33bf84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_33bf88:
    // 0x33bf88: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x33bf88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_33bf8c:
    // 0x33bf8c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x33bf8cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_33bf90:
    // 0x33bf90: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x33bf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_33bf94:
    // 0x33bf94: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_33bf98:
    if (ctx->pc == 0x33BF98u) {
        ctx->pc = 0x33BF9Cu;
        goto label_33bf9c;
    }
    ctx->pc = 0x33BF94u;
    {
        const bool branch_taken_0x33bf94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33bf94) {
            ctx->pc = 0x33BFACu;
            goto label_33bfac;
        }
    }
    ctx->pc = 0x33BF9Cu;
label_33bf9c:
    // 0x33bf9c: 0x8e04013c  lw          $a0, 0x13C($s0)
    ctx->pc = 0x33bf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
label_33bfa0:
    // 0x33bfa0: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x33bfa0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_33bfa4:
    // 0x33bfa4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_33bfa8:
    // 0x33bfa8: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x33bfa8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
label_33bfac:
    // 0x33bfac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x33bfacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_33bfb0:
    // 0x33bfb0: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x33bfb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_33bfb4:
    // 0x33bfb4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x33bfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_33bfb8:
    // 0x33bfb8: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33bfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_33bfbc:
    // 0x33bfbc: 0xa06411ec  sb          $a0, 0x11EC($v1)
    ctx->pc = 0x33bfbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4588), (uint8_t)GPR_U32(ctx, 4));
label_33bfc0:
    // 0x33bfc0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x33bfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_33bfc4:
    // 0x33bfc4: 0xa20300b8  sb          $v1, 0xB8($s0)
    ctx->pc = 0x33bfc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 184), (uint8_t)GPR_U32(ctx, 3));
label_33bfc8:
    // 0x33bfc8: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_33bfcc:
    if (ctx->pc == 0x33BFCCu) {
        ctx->pc = 0x33BFD0u;
        goto label_33bfd0;
    }
    ctx->pc = 0x33BFC8u;
    {
        const bool branch_taken_0x33bfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bfc8) {
            ctx->pc = 0x33C26Cu;
            goto label_33c26c;
        }
    }
    ctx->pc = 0x33BFD0u;
label_33bfd0:
    // 0x33bfd0: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33bfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_33bfd4:
    // 0x33bfd4: 0x906311ec  lbu         $v1, 0x11EC($v1)
    ctx->pc = 0x33bfd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4588)));
label_33bfd8:
    // 0x33bfd8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x33bfd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_33bfdc:
    // 0x33bfdc: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x33bfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_33bfe0:
    // 0x33bfe0: 0xc096348  jal         func_258D20
label_33bfe4:
    if (ctx->pc == 0x33BFE4u) {
        ctx->pc = 0x33BFE8u;
        goto label_33bfe8;
    }
    ctx->pc = 0x33BFE0u;
    SET_GPR_U32(ctx, 31, 0x33BFE8u);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x33BFE0u, 0x33BFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BFE8u;
label_33bfe8:
    // 0x33bfe8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x33bfe8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_33bfec:
    // 0x33bfec: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x33bfecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_33bff0:
    // 0x33bff0: 0x908311ec  lbu         $v1, 0x11EC($a0)
    ctx->pc = 0x33bff0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4588)));
label_33bff4:
    // 0x33bff4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x33bff4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_33bff8:
    // 0x33bff8: 0x8e040134  lw          $a0, 0x134($s0)
    ctx->pc = 0x33bff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_33bffc:
    // 0x33bffc: 0xc096348  jal         func_258D20
label_33c000:
    if (ctx->pc == 0x33C000u) {
        ctx->pc = 0x33C004u;
        goto label_33c004;
    }
    ctx->pc = 0x33BFFCu;
    SET_GPR_U32(ctx, 31, 0x33C004u);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x33BFFCu, 0x33C004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C004u;
label_33c004:
    // 0x33c004: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x33c004u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_33c008:
    // 0x33c008: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33c008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_33c00c:
    // 0x33c00c: 0x906411ec  lbu         $a0, 0x11EC($v1)
    ctx->pc = 0x33c00cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4588)));
label_33c010:
    // 0x33c010: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x33c010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_33c014:
    // 0x33c014: 0x18600014  blez        $v1, . + 4 + (0x14 << 2)
label_33c018:
    if (ctx->pc == 0x33C018u) {
        ctx->pc = 0x33C01Cu;
        goto label_33c01c;
    }
    ctx->pc = 0x33C014u;
    {
        const bool branch_taken_0x33c014 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x33c014) {
            ctx->pc = 0x33C068u;
            goto label_33c068;
        }
    }
    ctx->pc = 0x33C01Cu;
label_33c01c:
    // 0x33c01c: 0x8e050130  lw          $a1, 0x130($s0)
    ctx->pc = 0x33c01cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_33c020:
    // 0x33c020: 0x90a411ec  lbu         $a0, 0x11EC($a1)
    ctx->pc = 0x33c020u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4588)));
label_33c024:
    // 0x33c024: 0x2483fffe  addiu       $v1, $a0, -0x2
    ctx->pc = 0x33c024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_33c028:
    // 0x33c028: 0xa0a311ec  sb          $v1, 0x11EC($a1)
    ctx->pc = 0x33c028u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4588), (uint8_t)GPR_U32(ctx, 3));
label_33c02c:
    // 0x33c02c: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33c02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_33c030:
    // 0x33c030: 0x906311ec  lbu         $v1, 0x11EC($v1)
    ctx->pc = 0x33c030u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4588)));
label_33c034:
    // 0x33c034: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33c034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_33c038:
    // 0x33c038: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x33c038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_33c03c:
    // 0x33c03c: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x33c03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_33c040:
    // 0x33c040: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
label_33c044:
    if (ctx->pc == 0x33C044u) {
        ctx->pc = 0x33C048u;
        goto label_33c048;
    }
    ctx->pc = 0x33C040u;
    {
        const bool branch_taken_0x33c040 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x33c040) {
            ctx->pc = 0x33C054u;
            goto label_33c054;
        }
    }
    ctx->pc = 0x33C048u;
label_33c048:
    // 0x33c048: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_33c04c:
    if (ctx->pc == 0x33C04Cu) {
        ctx->pc = 0x33C050u;
        goto label_33c050;
    }
    ctx->pc = 0x33C048u;
    {
        const bool branch_taken_0x33c048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c048) {
            ctx->pc = 0x33C054u;
            goto label_33c054;
        }
    }
    ctx->pc = 0x33C050u;
label_33c050:
    // 0x33c050: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x33c050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_33c054:
    // 0x33c054: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_33c058:
    if (ctx->pc == 0x33C058u) {
        ctx->pc = 0x33C05Cu;
        goto label_33c05c;
    }
    ctx->pc = 0x33C054u;
    {
        const bool branch_taken_0x33c054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33c054) {
            ctx->pc = 0x33C068u;
            goto label_33c068;
        }
    }
    ctx->pc = 0x33C05Cu;
label_33c05c:
    // 0x33c05c: 0xc0cf69c  jal         func_33DA70
label_33c060:
    if (ctx->pc == 0x33C060u) {
        ctx->pc = 0x33C064u;
        goto label_33c064;
    }
    ctx->pc = 0x33C05Cu;
    SET_GPR_U32(ctx, 31, 0x33C064u);
    ctx->pc = 0x33DA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33DA70u, 0x33C05Cu, 0x33C064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C064u;
label_33c064:
    // 0x33c064: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x33c064u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_33c068:
    // 0x33c068: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x33c068u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_33c06c:
    // 0x33c06c: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x33c06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_33c070:
    // 0x33c070: 0xa6060006  sh          $a2, 0x6($s0)
    ctx->pc = 0x33c070u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 6));
label_33c074:
    // 0x33c074: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x33c074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
label_33c078:
    // 0x33c078: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x33c078u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_33c07c:
    // 0x33c07c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x33c07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_33c080:
    // 0x33c080: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x33c080u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_33c084:
    // 0x33c084: 0x1c600079  bgtz        $v1, . + 4 + (0x79 << 2)
label_33c088:
    if (ctx->pc == 0x33C088u) {
        ctx->pc = 0x33C08Cu;
        goto label_33c08c;
    }
    ctx->pc = 0x33C084u;
    {
        const bool branch_taken_0x33c084 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x33c084) {
            ctx->pc = 0x33C26Cu;
            goto label_33c26c;
        }
    }
    ctx->pc = 0x33C08Cu;
label_33c08c:
    // 0x33c08c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x33c08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_33c090:
    // 0x33c090: 0xa2040001  sb          $a0, 0x1($s0)
    ctx->pc = 0x33c090u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 4));
label_33c094:
    // 0x33c094: 0x10000075  b           . + 4 + (0x75 << 2)
label_33c098:
    if (ctx->pc == 0x33C098u) {
        ctx->pc = 0x33C09Cu;
        goto label_33c09c;
    }
    ctx->pc = 0x33C094u;
    {
        const bool branch_taken_0x33c094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c094) {
            ctx->pc = 0x33C26Cu;
            goto label_33c26c;
        }
    }
    ctx->pc = 0x33C09Cu;
label_33c09c:
    // 0x33c09c: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33c09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_33c0a0:
    // 0x33c0a0: 0x906311ec  lbu         $v1, 0x11EC($v1)
    ctx->pc = 0x33c0a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4588)));
label_33c0a4:
    // 0x33c0a4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x33c0a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_33c0a8:
    // 0x33c0a8: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x33c0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_33c0ac:
    // 0x33c0ac: 0xc096348  jal         func_258D20
label_33c0b0:
    if (ctx->pc == 0x33C0B0u) {
        ctx->pc = 0x33C0B4u;
        goto label_33c0b4;
    }
    ctx->pc = 0x33C0ACu;
    SET_GPR_U32(ctx, 31, 0x33C0B4u);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x33C0ACu, 0x33C0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C0B4u;
label_33c0b4:
    // 0x33c0b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x33c0b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_33c0b8:
    // 0x33c0b8: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x33c0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_33c0bc:
    // 0x33c0bc: 0x908311ec  lbu         $v1, 0x11EC($a0)
    ctx->pc = 0x33c0bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4588)));
label_33c0c0:
    // 0x33c0c0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x33c0c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_33c0c4:
    // 0x33c0c4: 0x8e040134  lw          $a0, 0x134($s0)
    ctx->pc = 0x33c0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_33c0c8:
    // 0x33c0c8: 0xc096348  jal         func_258D20
label_33c0cc:
    if (ctx->pc == 0x33C0CCu) {
        ctx->pc = 0x33C0D0u;
        goto label_33c0d0;
    }
    ctx->pc = 0x33C0C8u;
    SET_GPR_U32(ctx, 31, 0x33C0D0u);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x33C0C8u, 0x33C0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C0D0u;
label_33c0d0:
    // 0x33c0d0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x33c0d0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_33c0d4:
    // 0x33c0d4: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33c0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_33c0d8:
    // 0x33c0d8: 0x906311ec  lbu         $v1, 0x11EC($v1)
    ctx->pc = 0x33c0d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4588)));
label_33c0dc:
    // 0x33c0dc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33c0dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_33c0e0:
    // 0x33c0e0: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
label_33c0e4:
    if (ctx->pc == 0x33C0E4u) {
        ctx->pc = 0x33C0E8u;
        goto label_33c0e8;
    }
    ctx->pc = 0x33C0E0u;
    {
        const bool branch_taken_0x33c0e0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x33c0e0) {
            ctx->pc = 0x33C0F8u;
            goto label_33c0f8;
        }
    }
    ctx->pc = 0x33C0E8u;
label_33c0e8:
    // 0x33c0e8: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x33c0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_33c0ec:
    // 0x33c0ec: 0x908311ec  lbu         $v1, 0x11EC($a0)
    ctx->pc = 0x33c0ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4588)));
label_33c0f0:
    // 0x33c0f0: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x33c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_33c0f4:
    // 0x33c0f4: 0xa08311ec  sb          $v1, 0x11EC($a0)
    ctx->pc = 0x33c0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4588), (uint8_t)GPR_U32(ctx, 3));
label_33c0f8:
    // 0x33c0f8: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33c0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_33c0fc:
    // 0x33c0fc: 0x906311ec  lbu         $v1, 0x11EC($v1)
    ctx->pc = 0x33c0fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4588)));
label_33c100:
    // 0x33c100: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33c100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_33c104:
    // 0x33c104: 0x14800059  bnez        $a0, . + 4 + (0x59 << 2)
label_33c108:
    if (ctx->pc == 0x33C108u) {
        ctx->pc = 0x33C10Cu;
        goto label_33c10c;
    }
    ctx->pc = 0x33C104u;
    {
        const bool branch_taken_0x33c104 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x33c104) {
            ctx->pc = 0x33C26Cu;
            goto label_33c26c;
        }
    }
    ctx->pc = 0x33C10Cu;
label_33c10c:
    // 0x33c10c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33c10cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33c110:
    // 0x33c110: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33c110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_33c114:
    // 0x33c114: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x33c114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
label_33c118:
    // 0x33c118: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33c118u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33c11c:
    // 0x33c11c: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33c11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_33c120:
    // 0x33c120: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x33c120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
label_33c124:
    // 0x33c124: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33c124u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33c128:
    // 0x33c128: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x33c128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_33c12c:
    // 0x33c12c: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x33c12cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
label_33c130:
    // 0x33c130: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33c130u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33c134:
    // 0x33c134: 0x8e030134  lw          $v1, 0x134($s0)
    ctx->pc = 0x33c134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_33c138:
    // 0x33c138: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x33c138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
label_33c13c:
    // 0x33c13c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33c13cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33c140:
    // 0x33c140: 0x8e030134  lw          $v1, 0x134($s0)
    ctx->pc = 0x33c140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_33c144:
    // 0x33c144: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x33c144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
label_33c148:
    // 0x33c148: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33c148u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33c14c:
    // 0x33c14c: 0x8e040134  lw          $a0, 0x134($s0)
    ctx->pc = 0x33c14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_33c150:
    // 0x33c150: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x33c150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
label_33c154:
    // 0x33c154: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33c154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33c158:
    // 0x33c158: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x33c158u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_33c15c:
    // 0x33c15c: 0xa20000b8  sb          $zero, 0xB8($s0)
    ctx->pc = 0x33c15cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 184), (uint8_t)GPR_U32(ctx, 0));
label_33c160:
    // 0x33c160: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x33c160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_33c164:
    // 0x33c164: 0x14600041  bnez        $v1, . + 4 + (0x41 << 2)
label_33c168:
    if (ctx->pc == 0x33C168u) {
        ctx->pc = 0x33C16Cu;
        goto label_33c16c;
    }
    ctx->pc = 0x33C164u;
    {
        const bool branch_taken_0x33c164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33c164) {
            ctx->pc = 0x33C26Cu;
            goto label_33c26c;
        }
    }
    ctx->pc = 0x33C16Cu;
label_33c16c:
    // 0x33c16c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33c16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33c170:
    // 0x33c170: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x33c170u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_33c174:
    // 0x33c174: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x33c174u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_33c178:
    // 0x33c178: 0x1000003c  b           . + 4 + (0x3C << 2)
label_33c17c:
    if (ctx->pc == 0x33C17Cu) {
        ctx->pc = 0x33C180u;
        goto label_33c180;
    }
    ctx->pc = 0x33C178u;
    {
        const bool branch_taken_0x33c178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c178) {
            ctx->pc = 0x33C26Cu;
            goto label_33c26c;
        }
    }
    ctx->pc = 0x33C180u;
label_33c180:
    // 0x33c180: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33c180u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33c184:
    // 0x33c184: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33c184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_33c188:
    // 0x33c188: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x33c188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
label_33c18c:
    // 0x33c18c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33c18cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33c190:
    // 0x33c190: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33c190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_33c194:
    // 0x33c194: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x33c194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
label_33c198:
    // 0x33c198: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33c198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33c19c:
    // 0x33c19c: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33c19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_33c1a0:
    // 0x33c1a0: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x33c1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
label_33c1a4:
    // 0x33c1a4: 0x3c03c7c3  lui         $v1, 0xC7C3
    ctx->pc = 0x33c1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51139 << 16));
label_33c1a8:
    // 0x33c1a8: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x33c1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
label_33c1ac:
    // 0x33c1ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33c1acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33c1b0:
    // 0x33c1b0: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33c1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_33c1b4:
    // 0x33c1b4: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x33c1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_33c1b8:
    // 0x33c1b8: 0x3c03c7c3  lui         $v1, 0xC7C3
    ctx->pc = 0x33c1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51139 << 16));
label_33c1bc:
    // 0x33c1bc: 0x34715000  ori         $s1, $v1, 0x5000
    ctx->pc = 0x33c1bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
label_33c1c0:
    // 0x33c1c0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x33c1c0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33c1c4:
    // 0x33c1c4: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33c1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_33c1c8:
    // 0x33c1c8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x33c1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_33c1cc:
    // 0x33c1cc: 0x3c03c7c3  lui         $v1, 0xC7C3
    ctx->pc = 0x33c1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51139 << 16));
label_33c1d0:
    // 0x33c1d0: 0x34645000  ori         $a0, $v1, 0x5000
    ctx->pc = 0x33c1d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
label_33c1d4:
    // 0x33c1d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x33c1d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33c1d8:
    // 0x33c1d8: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33c1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_33c1dc:
    // 0x33c1dc: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x33c1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
label_33c1e0:
    // 0x33c1e0: 0x8e050130  lw          $a1, 0x130($s0)
    ctx->pc = 0x33c1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_33c1e4:
    // 0x33c1e4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x33c1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_33c1e8:
    // 0x33c1e8: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x33c1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_33c1ec:
    // 0x33c1ec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x33c1ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_33c1f0:
    // 0x33c1f0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x33c1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_33c1f4:
    // 0x33c1f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33c1f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33c1f8:
    // 0x33c1f8: 0x8e030134  lw          $v1, 0x134($s0)
    ctx->pc = 0x33c1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_33c1fc:
    // 0x33c1fc: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x33c1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
label_33c200:
    // 0x33c200: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33c200u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33c204:
    // 0x33c204: 0x8e030134  lw          $v1, 0x134($s0)
    ctx->pc = 0x33c204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_33c208:
    // 0x33c208: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x33c208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
label_33c20c:
    // 0x33c20c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33c20cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33c210:
    // 0x33c210: 0x8e040134  lw          $a0, 0x134($s0)
    ctx->pc = 0x33c210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_33c214:
    // 0x33c214: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x33c214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
label_33c218:
    // 0x33c218: 0x3c04c7c3  lui         $a0, 0xC7C3
    ctx->pc = 0x33c218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51139 << 16));
label_33c21c:
    // 0x33c21c: 0x34945000  ori         $s4, $a0, 0x5000
    ctx->pc = 0x33c21cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20480);
label_33c220:
    // 0x33c220: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x33c220u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33c224:
    // 0x33c224: 0x8e030134  lw          $v1, 0x134($s0)
    ctx->pc = 0x33c224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_33c228:
    // 0x33c228: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x33c228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_33c22c:
    // 0x33c22c: 0x3c04c7c3  lui         $a0, 0xC7C3
    ctx->pc = 0x33c22cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51139 << 16));
label_33c230:
    // 0x33c230: 0x34835000  ori         $v1, $a0, 0x5000
    ctx->pc = 0x33c230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20480);
label_33c234:
    // 0x33c234: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33c234u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33c238:
    // 0x33c238: 0x8e030134  lw          $v1, 0x134($s0)
    ctx->pc = 0x33c238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_33c23c:
    // 0x33c23c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x33c23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_33c240:
    // 0x33c240: 0x3c03c7c3  lui         $v1, 0xC7C3
    ctx->pc = 0x33c240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51139 << 16));
label_33c244:
    // 0x33c244: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x33c244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
label_33c248:
    // 0x33c248: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33c248u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33c24c:
    // 0x33c24c: 0x8e030134  lw          $v1, 0x134($s0)
    ctx->pc = 0x33c24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_33c250:
    // 0x33c250: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x33c250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
label_33c254:
    // 0x33c254: 0x8e050134  lw          $a1, 0x134($s0)
    ctx->pc = 0x33c254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_33c258:
    // 0x33c258: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x33c258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_33c25c:
    // 0x33c25c: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x33c25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_33c260:
    // 0x33c260: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x33c260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_33c264:
    // 0x33c264: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x33c264u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_33c268:
    // 0x33c268: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x33c268u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_33c26c:
    // 0x33c26c: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x33c26cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_33c270:
    // 0x33c270: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x33c270u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_33c274:
    // 0x33c274: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33c274u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33c278:
    // 0x33c278: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33c278u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33c27c:
    // 0x33c27c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33c27cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33c280:
    // 0x33c280: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33c280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33c284:
    // 0x33c284: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x33c284u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_33c288:
    // 0x33c288: 0x3e00008  jr          $ra
label_33c28c:
    if (ctx->pc == 0x33C28Cu) {
        ctx->pc = 0x33C290u;
        goto label_fallthrough_0x33c288;
    }
    ctx->pc = 0x33C288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33c288:
    ctx->pc = 0x33C290u;
}
