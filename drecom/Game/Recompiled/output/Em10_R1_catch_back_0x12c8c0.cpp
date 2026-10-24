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

// Function: Em10_R1_catch_back
// Address: 0x12c8c0 - 0x12d2e4
void Em10_R1_catch_back_0x12c8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_catch_back_0x12c8c0");
#endif

    switch (ctx->pc) {
        case 0x12c8c0u: goto label_12c8c0;
        case 0x12c8c4u: goto label_12c8c4;
        case 0x12c8c8u: goto label_12c8c8;
        case 0x12c8ccu: goto label_12c8cc;
        case 0x12c8d0u: goto label_12c8d0;
        case 0x12c8d4u: goto label_12c8d4;
        case 0x12c8d8u: goto label_12c8d8;
        case 0x12c8dcu: goto label_12c8dc;
        case 0x12c8e0u: goto label_12c8e0;
        case 0x12c8e4u: goto label_12c8e4;
        case 0x12c8e8u: goto label_12c8e8;
        case 0x12c8ecu: goto label_12c8ec;
        case 0x12c8f0u: goto label_12c8f0;
        case 0x12c8f4u: goto label_12c8f4;
        case 0x12c8f8u: goto label_12c8f8;
        case 0x12c8fcu: goto label_12c8fc;
        case 0x12c900u: goto label_12c900;
        case 0x12c904u: goto label_12c904;
        case 0x12c908u: goto label_12c908;
        case 0x12c90cu: goto label_12c90c;
        case 0x12c910u: goto label_12c910;
        case 0x12c914u: goto label_12c914;
        case 0x12c918u: goto label_12c918;
        case 0x12c91cu: goto label_12c91c;
        case 0x12c920u: goto label_12c920;
        case 0x12c924u: goto label_12c924;
        case 0x12c928u: goto label_12c928;
        case 0x12c92cu: goto label_12c92c;
        case 0x12c930u: goto label_12c930;
        case 0x12c934u: goto label_12c934;
        case 0x12c938u: goto label_12c938;
        case 0x12c93cu: goto label_12c93c;
        case 0x12c940u: goto label_12c940;
        case 0x12c944u: goto label_12c944;
        case 0x12c948u: goto label_12c948;
        case 0x12c94cu: goto label_12c94c;
        case 0x12c950u: goto label_12c950;
        case 0x12c954u: goto label_12c954;
        case 0x12c958u: goto label_12c958;
        case 0x12c95cu: goto label_12c95c;
        case 0x12c960u: goto label_12c960;
        case 0x12c964u: goto label_12c964;
        case 0x12c968u: goto label_12c968;
        case 0x12c96cu: goto label_12c96c;
        case 0x12c970u: goto label_12c970;
        case 0x12c974u: goto label_12c974;
        case 0x12c978u: goto label_12c978;
        case 0x12c97cu: goto label_12c97c;
        case 0x12c980u: goto label_12c980;
        case 0x12c984u: goto label_12c984;
        case 0x12c988u: goto label_12c988;
        case 0x12c98cu: goto label_12c98c;
        case 0x12c990u: goto label_12c990;
        case 0x12c994u: goto label_12c994;
        case 0x12c998u: goto label_12c998;
        case 0x12c99cu: goto label_12c99c;
        case 0x12c9a0u: goto label_12c9a0;
        case 0x12c9a4u: goto label_12c9a4;
        case 0x12c9a8u: goto label_12c9a8;
        case 0x12c9acu: goto label_12c9ac;
        case 0x12c9b0u: goto label_12c9b0;
        case 0x12c9b4u: goto label_12c9b4;
        case 0x12c9b8u: goto label_12c9b8;
        case 0x12c9bcu: goto label_12c9bc;
        case 0x12c9c0u: goto label_12c9c0;
        case 0x12c9c4u: goto label_12c9c4;
        case 0x12c9c8u: goto label_12c9c8;
        case 0x12c9ccu: goto label_12c9cc;
        case 0x12c9d0u: goto label_12c9d0;
        case 0x12c9d4u: goto label_12c9d4;
        case 0x12c9d8u: goto label_12c9d8;
        case 0x12c9dcu: goto label_12c9dc;
        case 0x12c9e0u: goto label_12c9e0;
        case 0x12c9e4u: goto label_12c9e4;
        case 0x12c9e8u: goto label_12c9e8;
        case 0x12c9ecu: goto label_12c9ec;
        case 0x12c9f0u: goto label_12c9f0;
        case 0x12c9f4u: goto label_12c9f4;
        case 0x12c9f8u: goto label_12c9f8;
        case 0x12c9fcu: goto label_12c9fc;
        case 0x12ca00u: goto label_12ca00;
        case 0x12ca04u: goto label_12ca04;
        case 0x12ca08u: goto label_12ca08;
        case 0x12ca0cu: goto label_12ca0c;
        case 0x12ca10u: goto label_12ca10;
        case 0x12ca14u: goto label_12ca14;
        case 0x12ca18u: goto label_12ca18;
        case 0x12ca1cu: goto label_12ca1c;
        case 0x12ca20u: goto label_12ca20;
        case 0x12ca24u: goto label_12ca24;
        case 0x12ca28u: goto label_12ca28;
        case 0x12ca2cu: goto label_12ca2c;
        case 0x12ca30u: goto label_12ca30;
        case 0x12ca34u: goto label_12ca34;
        case 0x12ca38u: goto label_12ca38;
        case 0x12ca3cu: goto label_12ca3c;
        case 0x12ca40u: goto label_12ca40;
        case 0x12ca44u: goto label_12ca44;
        case 0x12ca48u: goto label_12ca48;
        case 0x12ca4cu: goto label_12ca4c;
        case 0x12ca50u: goto label_12ca50;
        case 0x12ca54u: goto label_12ca54;
        case 0x12ca58u: goto label_12ca58;
        case 0x12ca5cu: goto label_12ca5c;
        case 0x12ca60u: goto label_12ca60;
        case 0x12ca64u: goto label_12ca64;
        case 0x12ca68u: goto label_12ca68;
        case 0x12ca6cu: goto label_12ca6c;
        case 0x12ca70u: goto label_12ca70;
        case 0x12ca74u: goto label_12ca74;
        case 0x12ca78u: goto label_12ca78;
        case 0x12ca7cu: goto label_12ca7c;
        case 0x12ca80u: goto label_12ca80;
        case 0x12ca84u: goto label_12ca84;
        case 0x12ca88u: goto label_12ca88;
        case 0x12ca8cu: goto label_12ca8c;
        case 0x12ca90u: goto label_12ca90;
        case 0x12ca94u: goto label_12ca94;
        case 0x12ca98u: goto label_12ca98;
        case 0x12ca9cu: goto label_12ca9c;
        case 0x12caa0u: goto label_12caa0;
        case 0x12caa4u: goto label_12caa4;
        case 0x12caa8u: goto label_12caa8;
        case 0x12caacu: goto label_12caac;
        case 0x12cab0u: goto label_12cab0;
        case 0x12cab4u: goto label_12cab4;
        case 0x12cab8u: goto label_12cab8;
        case 0x12cabcu: goto label_12cabc;
        case 0x12cac0u: goto label_12cac0;
        case 0x12cac4u: goto label_12cac4;
        case 0x12cac8u: goto label_12cac8;
        case 0x12caccu: goto label_12cacc;
        case 0x12cad0u: goto label_12cad0;
        case 0x12cad4u: goto label_12cad4;
        case 0x12cad8u: goto label_12cad8;
        case 0x12cadcu: goto label_12cadc;
        case 0x12cae0u: goto label_12cae0;
        case 0x12cae4u: goto label_12cae4;
        case 0x12cae8u: goto label_12cae8;
        case 0x12caecu: goto label_12caec;
        case 0x12caf0u: goto label_12caf0;
        case 0x12caf4u: goto label_12caf4;
        case 0x12caf8u: goto label_12caf8;
        case 0x12cafcu: goto label_12cafc;
        case 0x12cb00u: goto label_12cb00;
        case 0x12cb04u: goto label_12cb04;
        case 0x12cb08u: goto label_12cb08;
        case 0x12cb0cu: goto label_12cb0c;
        case 0x12cb10u: goto label_12cb10;
        case 0x12cb14u: goto label_12cb14;
        case 0x12cb18u: goto label_12cb18;
        case 0x12cb1cu: goto label_12cb1c;
        case 0x12cb20u: goto label_12cb20;
        case 0x12cb24u: goto label_12cb24;
        case 0x12cb28u: goto label_12cb28;
        case 0x12cb2cu: goto label_12cb2c;
        case 0x12cb30u: goto label_12cb30;
        case 0x12cb34u: goto label_12cb34;
        case 0x12cb38u: goto label_12cb38;
        case 0x12cb3cu: goto label_12cb3c;
        case 0x12cb40u: goto label_12cb40;
        case 0x12cb44u: goto label_12cb44;
        case 0x12cb48u: goto label_12cb48;
        case 0x12cb4cu: goto label_12cb4c;
        case 0x12cb50u: goto label_12cb50;
        case 0x12cb54u: goto label_12cb54;
        case 0x12cb58u: goto label_12cb58;
        case 0x12cb5cu: goto label_12cb5c;
        case 0x12cb60u: goto label_12cb60;
        case 0x12cb64u: goto label_12cb64;
        case 0x12cb68u: goto label_12cb68;
        case 0x12cb6cu: goto label_12cb6c;
        case 0x12cb70u: goto label_12cb70;
        case 0x12cb74u: goto label_12cb74;
        case 0x12cb78u: goto label_12cb78;
        case 0x12cb7cu: goto label_12cb7c;
        case 0x12cb80u: goto label_12cb80;
        case 0x12cb84u: goto label_12cb84;
        case 0x12cb88u: goto label_12cb88;
        case 0x12cb8cu: goto label_12cb8c;
        case 0x12cb90u: goto label_12cb90;
        case 0x12cb94u: goto label_12cb94;
        case 0x12cb98u: goto label_12cb98;
        case 0x12cb9cu: goto label_12cb9c;
        case 0x12cba0u: goto label_12cba0;
        case 0x12cba4u: goto label_12cba4;
        case 0x12cba8u: goto label_12cba8;
        case 0x12cbacu: goto label_12cbac;
        case 0x12cbb0u: goto label_12cbb0;
        case 0x12cbb4u: goto label_12cbb4;
        case 0x12cbb8u: goto label_12cbb8;
        case 0x12cbbcu: goto label_12cbbc;
        case 0x12cbc0u: goto label_12cbc0;
        case 0x12cbc4u: goto label_12cbc4;
        case 0x12cbc8u: goto label_12cbc8;
        case 0x12cbccu: goto label_12cbcc;
        case 0x12cbd0u: goto label_12cbd0;
        case 0x12cbd4u: goto label_12cbd4;
        case 0x12cbd8u: goto label_12cbd8;
        case 0x12cbdcu: goto label_12cbdc;
        case 0x12cbe0u: goto label_12cbe0;
        case 0x12cbe4u: goto label_12cbe4;
        case 0x12cbe8u: goto label_12cbe8;
        case 0x12cbecu: goto label_12cbec;
        case 0x12cbf0u: goto label_12cbf0;
        case 0x12cbf4u: goto label_12cbf4;
        case 0x12cbf8u: goto label_12cbf8;
        case 0x12cbfcu: goto label_12cbfc;
        case 0x12cc00u: goto label_12cc00;
        case 0x12cc04u: goto label_12cc04;
        case 0x12cc08u: goto label_12cc08;
        case 0x12cc0cu: goto label_12cc0c;
        case 0x12cc10u: goto label_12cc10;
        case 0x12cc14u: goto label_12cc14;
        case 0x12cc18u: goto label_12cc18;
        case 0x12cc1cu: goto label_12cc1c;
        case 0x12cc20u: goto label_12cc20;
        case 0x12cc24u: goto label_12cc24;
        case 0x12cc28u: goto label_12cc28;
        case 0x12cc2cu: goto label_12cc2c;
        case 0x12cc30u: goto label_12cc30;
        case 0x12cc34u: goto label_12cc34;
        case 0x12cc38u: goto label_12cc38;
        case 0x12cc3cu: goto label_12cc3c;
        case 0x12cc40u: goto label_12cc40;
        case 0x12cc44u: goto label_12cc44;
        case 0x12cc48u: goto label_12cc48;
        case 0x12cc4cu: goto label_12cc4c;
        case 0x12cc50u: goto label_12cc50;
        case 0x12cc54u: goto label_12cc54;
        case 0x12cc58u: goto label_12cc58;
        case 0x12cc5cu: goto label_12cc5c;
        case 0x12cc60u: goto label_12cc60;
        case 0x12cc64u: goto label_12cc64;
        case 0x12cc68u: goto label_12cc68;
        case 0x12cc6cu: goto label_12cc6c;
        case 0x12cc70u: goto label_12cc70;
        case 0x12cc74u: goto label_12cc74;
        case 0x12cc78u: goto label_12cc78;
        case 0x12cc7cu: goto label_12cc7c;
        case 0x12cc80u: goto label_12cc80;
        case 0x12cc84u: goto label_12cc84;
        case 0x12cc88u: goto label_12cc88;
        case 0x12cc8cu: goto label_12cc8c;
        case 0x12cc90u: goto label_12cc90;
        case 0x12cc94u: goto label_12cc94;
        case 0x12cc98u: goto label_12cc98;
        case 0x12cc9cu: goto label_12cc9c;
        case 0x12cca0u: goto label_12cca0;
        case 0x12cca4u: goto label_12cca4;
        case 0x12cca8u: goto label_12cca8;
        case 0x12ccacu: goto label_12ccac;
        case 0x12ccb0u: goto label_12ccb0;
        case 0x12ccb4u: goto label_12ccb4;
        case 0x12ccb8u: goto label_12ccb8;
        case 0x12ccbcu: goto label_12ccbc;
        case 0x12ccc0u: goto label_12ccc0;
        case 0x12ccc4u: goto label_12ccc4;
        case 0x12ccc8u: goto label_12ccc8;
        case 0x12ccccu: goto label_12cccc;
        case 0x12ccd0u: goto label_12ccd0;
        case 0x12ccd4u: goto label_12ccd4;
        case 0x12ccd8u: goto label_12ccd8;
        case 0x12ccdcu: goto label_12ccdc;
        case 0x12cce0u: goto label_12cce0;
        case 0x12cce4u: goto label_12cce4;
        case 0x12cce8u: goto label_12cce8;
        case 0x12ccecu: goto label_12ccec;
        case 0x12ccf0u: goto label_12ccf0;
        case 0x12ccf4u: goto label_12ccf4;
        case 0x12ccf8u: goto label_12ccf8;
        case 0x12ccfcu: goto label_12ccfc;
        case 0x12cd00u: goto label_12cd00;
        case 0x12cd04u: goto label_12cd04;
        case 0x12cd08u: goto label_12cd08;
        case 0x12cd0cu: goto label_12cd0c;
        case 0x12cd10u: goto label_12cd10;
        case 0x12cd14u: goto label_12cd14;
        case 0x12cd18u: goto label_12cd18;
        case 0x12cd1cu: goto label_12cd1c;
        case 0x12cd20u: goto label_12cd20;
        case 0x12cd24u: goto label_12cd24;
        case 0x12cd28u: goto label_12cd28;
        case 0x12cd2cu: goto label_12cd2c;
        case 0x12cd30u: goto label_12cd30;
        case 0x12cd34u: goto label_12cd34;
        case 0x12cd38u: goto label_12cd38;
        case 0x12cd3cu: goto label_12cd3c;
        case 0x12cd40u: goto label_12cd40;
        case 0x12cd44u: goto label_12cd44;
        case 0x12cd48u: goto label_12cd48;
        case 0x12cd4cu: goto label_12cd4c;
        case 0x12cd50u: goto label_12cd50;
        case 0x12cd54u: goto label_12cd54;
        case 0x12cd58u: goto label_12cd58;
        case 0x12cd5cu: goto label_12cd5c;
        case 0x12cd60u: goto label_12cd60;
        case 0x12cd64u: goto label_12cd64;
        case 0x12cd68u: goto label_12cd68;
        case 0x12cd6cu: goto label_12cd6c;
        case 0x12cd70u: goto label_12cd70;
        case 0x12cd74u: goto label_12cd74;
        case 0x12cd78u: goto label_12cd78;
        case 0x12cd7cu: goto label_12cd7c;
        case 0x12cd80u: goto label_12cd80;
        case 0x12cd84u: goto label_12cd84;
        case 0x12cd88u: goto label_12cd88;
        case 0x12cd8cu: goto label_12cd8c;
        case 0x12cd90u: goto label_12cd90;
        case 0x12cd94u: goto label_12cd94;
        case 0x12cd98u: goto label_12cd98;
        case 0x12cd9cu: goto label_12cd9c;
        case 0x12cda0u: goto label_12cda0;
        case 0x12cda4u: goto label_12cda4;
        case 0x12cda8u: goto label_12cda8;
        case 0x12cdacu: goto label_12cdac;
        case 0x12cdb0u: goto label_12cdb0;
        case 0x12cdb4u: goto label_12cdb4;
        case 0x12cdb8u: goto label_12cdb8;
        case 0x12cdbcu: goto label_12cdbc;
        case 0x12cdc0u: goto label_12cdc0;
        case 0x12cdc4u: goto label_12cdc4;
        case 0x12cdc8u: goto label_12cdc8;
        case 0x12cdccu: goto label_12cdcc;
        case 0x12cdd0u: goto label_12cdd0;
        case 0x12cdd4u: goto label_12cdd4;
        case 0x12cdd8u: goto label_12cdd8;
        case 0x12cddcu: goto label_12cddc;
        case 0x12cde0u: goto label_12cde0;
        case 0x12cde4u: goto label_12cde4;
        case 0x12cde8u: goto label_12cde8;
        case 0x12cdecu: goto label_12cdec;
        case 0x12cdf0u: goto label_12cdf0;
        case 0x12cdf4u: goto label_12cdf4;
        case 0x12cdf8u: goto label_12cdf8;
        case 0x12cdfcu: goto label_12cdfc;
        case 0x12ce00u: goto label_12ce00;
        case 0x12ce04u: goto label_12ce04;
        case 0x12ce08u: goto label_12ce08;
        case 0x12ce0cu: goto label_12ce0c;
        case 0x12ce10u: goto label_12ce10;
        case 0x12ce14u: goto label_12ce14;
        case 0x12ce18u: goto label_12ce18;
        case 0x12ce1cu: goto label_12ce1c;
        case 0x12ce20u: goto label_12ce20;
        case 0x12ce24u: goto label_12ce24;
        case 0x12ce28u: goto label_12ce28;
        case 0x12ce2cu: goto label_12ce2c;
        case 0x12ce30u: goto label_12ce30;
        case 0x12ce34u: goto label_12ce34;
        case 0x12ce38u: goto label_12ce38;
        case 0x12ce3cu: goto label_12ce3c;
        case 0x12ce40u: goto label_12ce40;
        case 0x12ce44u: goto label_12ce44;
        case 0x12ce48u: goto label_12ce48;
        case 0x12ce4cu: goto label_12ce4c;
        case 0x12ce50u: goto label_12ce50;
        case 0x12ce54u: goto label_12ce54;
        case 0x12ce58u: goto label_12ce58;
        case 0x12ce5cu: goto label_12ce5c;
        case 0x12ce60u: goto label_12ce60;
        case 0x12ce64u: goto label_12ce64;
        case 0x12ce68u: goto label_12ce68;
        case 0x12ce6cu: goto label_12ce6c;
        case 0x12ce70u: goto label_12ce70;
        case 0x12ce74u: goto label_12ce74;
        case 0x12ce78u: goto label_12ce78;
        case 0x12ce7cu: goto label_12ce7c;
        case 0x12ce80u: goto label_12ce80;
        case 0x12ce84u: goto label_12ce84;
        case 0x12ce88u: goto label_12ce88;
        case 0x12ce8cu: goto label_12ce8c;
        case 0x12ce90u: goto label_12ce90;
        case 0x12ce94u: goto label_12ce94;
        case 0x12ce98u: goto label_12ce98;
        case 0x12ce9cu: goto label_12ce9c;
        case 0x12cea0u: goto label_12cea0;
        case 0x12cea4u: goto label_12cea4;
        case 0x12cea8u: goto label_12cea8;
        case 0x12ceacu: goto label_12ceac;
        case 0x12ceb0u: goto label_12ceb0;
        case 0x12ceb4u: goto label_12ceb4;
        case 0x12ceb8u: goto label_12ceb8;
        case 0x12cebcu: goto label_12cebc;
        case 0x12cec0u: goto label_12cec0;
        case 0x12cec4u: goto label_12cec4;
        case 0x12cec8u: goto label_12cec8;
        case 0x12ceccu: goto label_12cecc;
        case 0x12ced0u: goto label_12ced0;
        case 0x12ced4u: goto label_12ced4;
        case 0x12ced8u: goto label_12ced8;
        case 0x12cedcu: goto label_12cedc;
        case 0x12cee0u: goto label_12cee0;
        case 0x12cee4u: goto label_12cee4;
        case 0x12cee8u: goto label_12cee8;
        case 0x12ceecu: goto label_12ceec;
        case 0x12cef0u: goto label_12cef0;
        case 0x12cef4u: goto label_12cef4;
        case 0x12cef8u: goto label_12cef8;
        case 0x12cefcu: goto label_12cefc;
        case 0x12cf00u: goto label_12cf00;
        case 0x12cf04u: goto label_12cf04;
        case 0x12cf08u: goto label_12cf08;
        case 0x12cf0cu: goto label_12cf0c;
        case 0x12cf10u: goto label_12cf10;
        case 0x12cf14u: goto label_12cf14;
        case 0x12cf18u: goto label_12cf18;
        case 0x12cf1cu: goto label_12cf1c;
        case 0x12cf20u: goto label_12cf20;
        case 0x12cf24u: goto label_12cf24;
        case 0x12cf28u: goto label_12cf28;
        case 0x12cf2cu: goto label_12cf2c;
        case 0x12cf30u: goto label_12cf30;
        case 0x12cf34u: goto label_12cf34;
        case 0x12cf38u: goto label_12cf38;
        case 0x12cf3cu: goto label_12cf3c;
        case 0x12cf40u: goto label_12cf40;
        case 0x12cf44u: goto label_12cf44;
        case 0x12cf48u: goto label_12cf48;
        case 0x12cf4cu: goto label_12cf4c;
        case 0x12cf50u: goto label_12cf50;
        case 0x12cf54u: goto label_12cf54;
        case 0x12cf58u: goto label_12cf58;
        case 0x12cf5cu: goto label_12cf5c;
        case 0x12cf60u: goto label_12cf60;
        case 0x12cf64u: goto label_12cf64;
        case 0x12cf68u: goto label_12cf68;
        case 0x12cf6cu: goto label_12cf6c;
        case 0x12cf70u: goto label_12cf70;
        case 0x12cf74u: goto label_12cf74;
        case 0x12cf78u: goto label_12cf78;
        case 0x12cf7cu: goto label_12cf7c;
        case 0x12cf80u: goto label_12cf80;
        case 0x12cf84u: goto label_12cf84;
        case 0x12cf88u: goto label_12cf88;
        case 0x12cf8cu: goto label_12cf8c;
        case 0x12cf90u: goto label_12cf90;
        case 0x12cf94u: goto label_12cf94;
        case 0x12cf98u: goto label_12cf98;
        case 0x12cf9cu: goto label_12cf9c;
        case 0x12cfa0u: goto label_12cfa0;
        case 0x12cfa4u: goto label_12cfa4;
        case 0x12cfa8u: goto label_12cfa8;
        case 0x12cfacu: goto label_12cfac;
        case 0x12cfb0u: goto label_12cfb0;
        case 0x12cfb4u: goto label_12cfb4;
        case 0x12cfb8u: goto label_12cfb8;
        case 0x12cfbcu: goto label_12cfbc;
        case 0x12cfc0u: goto label_12cfc0;
        case 0x12cfc4u: goto label_12cfc4;
        case 0x12cfc8u: goto label_12cfc8;
        case 0x12cfccu: goto label_12cfcc;
        case 0x12cfd0u: goto label_12cfd0;
        case 0x12cfd4u: goto label_12cfd4;
        case 0x12cfd8u: goto label_12cfd8;
        case 0x12cfdcu: goto label_12cfdc;
        case 0x12cfe0u: goto label_12cfe0;
        case 0x12cfe4u: goto label_12cfe4;
        case 0x12cfe8u: goto label_12cfe8;
        case 0x12cfecu: goto label_12cfec;
        case 0x12cff0u: goto label_12cff0;
        case 0x12cff4u: goto label_12cff4;
        case 0x12cff8u: goto label_12cff8;
        case 0x12cffcu: goto label_12cffc;
        case 0x12d000u: goto label_12d000;
        case 0x12d004u: goto label_12d004;
        case 0x12d008u: goto label_12d008;
        case 0x12d00cu: goto label_12d00c;
        case 0x12d010u: goto label_12d010;
        case 0x12d014u: goto label_12d014;
        case 0x12d018u: goto label_12d018;
        case 0x12d01cu: goto label_12d01c;
        case 0x12d020u: goto label_12d020;
        case 0x12d024u: goto label_12d024;
        case 0x12d028u: goto label_12d028;
        case 0x12d02cu: goto label_12d02c;
        case 0x12d030u: goto label_12d030;
        case 0x12d034u: goto label_12d034;
        case 0x12d038u: goto label_12d038;
        case 0x12d03cu: goto label_12d03c;
        case 0x12d040u: goto label_12d040;
        case 0x12d044u: goto label_12d044;
        case 0x12d048u: goto label_12d048;
        case 0x12d04cu: goto label_12d04c;
        case 0x12d050u: goto label_12d050;
        case 0x12d054u: goto label_12d054;
        case 0x12d058u: goto label_12d058;
        case 0x12d05cu: goto label_12d05c;
        case 0x12d060u: goto label_12d060;
        case 0x12d064u: goto label_12d064;
        case 0x12d068u: goto label_12d068;
        case 0x12d06cu: goto label_12d06c;
        case 0x12d070u: goto label_12d070;
        case 0x12d074u: goto label_12d074;
        case 0x12d078u: goto label_12d078;
        case 0x12d07cu: goto label_12d07c;
        case 0x12d080u: goto label_12d080;
        case 0x12d084u: goto label_12d084;
        case 0x12d088u: goto label_12d088;
        case 0x12d08cu: goto label_12d08c;
        case 0x12d090u: goto label_12d090;
        case 0x12d094u: goto label_12d094;
        case 0x12d098u: goto label_12d098;
        case 0x12d09cu: goto label_12d09c;
        case 0x12d0a0u: goto label_12d0a0;
        case 0x12d0a4u: goto label_12d0a4;
        case 0x12d0a8u: goto label_12d0a8;
        case 0x12d0acu: goto label_12d0ac;
        case 0x12d0b0u: goto label_12d0b0;
        case 0x12d0b4u: goto label_12d0b4;
        case 0x12d0b8u: goto label_12d0b8;
        case 0x12d0bcu: goto label_12d0bc;
        case 0x12d0c0u: goto label_12d0c0;
        case 0x12d0c4u: goto label_12d0c4;
        case 0x12d0c8u: goto label_12d0c8;
        case 0x12d0ccu: goto label_12d0cc;
        case 0x12d0d0u: goto label_12d0d0;
        case 0x12d0d4u: goto label_12d0d4;
        case 0x12d0d8u: goto label_12d0d8;
        case 0x12d0dcu: goto label_12d0dc;
        case 0x12d0e0u: goto label_12d0e0;
        case 0x12d0e4u: goto label_12d0e4;
        case 0x12d0e8u: goto label_12d0e8;
        case 0x12d0ecu: goto label_12d0ec;
        case 0x12d0f0u: goto label_12d0f0;
        case 0x12d0f4u: goto label_12d0f4;
        case 0x12d0f8u: goto label_12d0f8;
        case 0x12d0fcu: goto label_12d0fc;
        case 0x12d100u: goto label_12d100;
        case 0x12d104u: goto label_12d104;
        case 0x12d108u: goto label_12d108;
        case 0x12d10cu: goto label_12d10c;
        case 0x12d110u: goto label_12d110;
        case 0x12d114u: goto label_12d114;
        case 0x12d118u: goto label_12d118;
        case 0x12d11cu: goto label_12d11c;
        case 0x12d120u: goto label_12d120;
        case 0x12d124u: goto label_12d124;
        case 0x12d128u: goto label_12d128;
        case 0x12d12cu: goto label_12d12c;
        case 0x12d130u: goto label_12d130;
        case 0x12d134u: goto label_12d134;
        case 0x12d138u: goto label_12d138;
        case 0x12d13cu: goto label_12d13c;
        case 0x12d140u: goto label_12d140;
        case 0x12d144u: goto label_12d144;
        case 0x12d148u: goto label_12d148;
        case 0x12d14cu: goto label_12d14c;
        case 0x12d150u: goto label_12d150;
        case 0x12d154u: goto label_12d154;
        case 0x12d158u: goto label_12d158;
        case 0x12d15cu: goto label_12d15c;
        case 0x12d160u: goto label_12d160;
        case 0x12d164u: goto label_12d164;
        case 0x12d168u: goto label_12d168;
        case 0x12d16cu: goto label_12d16c;
        case 0x12d170u: goto label_12d170;
        case 0x12d174u: goto label_12d174;
        case 0x12d178u: goto label_12d178;
        case 0x12d17cu: goto label_12d17c;
        case 0x12d180u: goto label_12d180;
        case 0x12d184u: goto label_12d184;
        case 0x12d188u: goto label_12d188;
        case 0x12d18cu: goto label_12d18c;
        case 0x12d190u: goto label_12d190;
        case 0x12d194u: goto label_12d194;
        case 0x12d198u: goto label_12d198;
        case 0x12d19cu: goto label_12d19c;
        case 0x12d1a0u: goto label_12d1a0;
        case 0x12d1a4u: goto label_12d1a4;
        case 0x12d1a8u: goto label_12d1a8;
        case 0x12d1acu: goto label_12d1ac;
        case 0x12d1b0u: goto label_12d1b0;
        case 0x12d1b4u: goto label_12d1b4;
        case 0x12d1b8u: goto label_12d1b8;
        case 0x12d1bcu: goto label_12d1bc;
        case 0x12d1c0u: goto label_12d1c0;
        case 0x12d1c4u: goto label_12d1c4;
        case 0x12d1c8u: goto label_12d1c8;
        case 0x12d1ccu: goto label_12d1cc;
        case 0x12d1d0u: goto label_12d1d0;
        case 0x12d1d4u: goto label_12d1d4;
        case 0x12d1d8u: goto label_12d1d8;
        case 0x12d1dcu: goto label_12d1dc;
        case 0x12d1e0u: goto label_12d1e0;
        case 0x12d1e4u: goto label_12d1e4;
        case 0x12d1e8u: goto label_12d1e8;
        case 0x12d1ecu: goto label_12d1ec;
        case 0x12d1f0u: goto label_12d1f0;
        case 0x12d1f4u: goto label_12d1f4;
        case 0x12d1f8u: goto label_12d1f8;
        case 0x12d1fcu: goto label_12d1fc;
        case 0x12d200u: goto label_12d200;
        case 0x12d204u: goto label_12d204;
        case 0x12d208u: goto label_12d208;
        case 0x12d20cu: goto label_12d20c;
        case 0x12d210u: goto label_12d210;
        case 0x12d214u: goto label_12d214;
        case 0x12d218u: goto label_12d218;
        case 0x12d21cu: goto label_12d21c;
        case 0x12d220u: goto label_12d220;
        case 0x12d224u: goto label_12d224;
        case 0x12d228u: goto label_12d228;
        case 0x12d22cu: goto label_12d22c;
        case 0x12d230u: goto label_12d230;
        case 0x12d234u: goto label_12d234;
        case 0x12d238u: goto label_12d238;
        case 0x12d23cu: goto label_12d23c;
        case 0x12d240u: goto label_12d240;
        case 0x12d244u: goto label_12d244;
        case 0x12d248u: goto label_12d248;
        case 0x12d24cu: goto label_12d24c;
        case 0x12d250u: goto label_12d250;
        case 0x12d254u: goto label_12d254;
        case 0x12d258u: goto label_12d258;
        case 0x12d25cu: goto label_12d25c;
        case 0x12d260u: goto label_12d260;
        case 0x12d264u: goto label_12d264;
        case 0x12d268u: goto label_12d268;
        case 0x12d26cu: goto label_12d26c;
        case 0x12d270u: goto label_12d270;
        case 0x12d274u: goto label_12d274;
        case 0x12d278u: goto label_12d278;
        case 0x12d27cu: goto label_12d27c;
        case 0x12d280u: goto label_12d280;
        case 0x12d284u: goto label_12d284;
        case 0x12d288u: goto label_12d288;
        case 0x12d28cu: goto label_12d28c;
        case 0x12d290u: goto label_12d290;
        case 0x12d294u: goto label_12d294;
        case 0x12d298u: goto label_12d298;
        case 0x12d29cu: goto label_12d29c;
        case 0x12d2a0u: goto label_12d2a0;
        case 0x12d2a4u: goto label_12d2a4;
        case 0x12d2a8u: goto label_12d2a8;
        case 0x12d2acu: goto label_12d2ac;
        case 0x12d2b0u: goto label_12d2b0;
        case 0x12d2b4u: goto label_12d2b4;
        case 0x12d2b8u: goto label_12d2b8;
        case 0x12d2bcu: goto label_12d2bc;
        case 0x12d2c0u: goto label_12d2c0;
        case 0x12d2c4u: goto label_12d2c4;
        case 0x12d2c8u: goto label_12d2c8;
        case 0x12d2ccu: goto label_12d2cc;
        case 0x12d2d0u: goto label_12d2d0;
        case 0x12d2d4u: goto label_12d2d4;
        case 0x12d2d8u: goto label_12d2d8;
        case 0x12d2dcu: goto label_12d2dc;
        case 0x12d2e0u: goto label_12d2e0;
        default: break;
    }

    ctx->pc = 0x12c8c0u;

label_12c8c0:
    // 0x12c8c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x12c8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_12c8c4:
    // 0x12c8c4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x12c8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_12c8c8:
    // 0x12c8c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12c8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_12c8cc:
    // 0x12c8cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12c8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_12c8d0:
    // 0x12c8d0: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x12c8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
label_12c8d4:
    // 0x12c8d4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c8d8:
    // 0x12c8d8: 0x24711330  addiu       $s1, $v1, 0x1330
    ctx->pc = 0x12c8d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_12c8dc:
    // 0x12c8dc: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x12c8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_12c8e0:
    // 0x12c8e0: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x12c8e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
label_12c8e4:
    // 0x12c8e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x12c8e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_12c8e8:
    // 0x12c8e8: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x12c8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_12c8ec:
    // 0x12c8ec: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x12c8ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_12c8f0:
    // 0x12c8f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x12c8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_12c8f4:
    // 0x12c8f4: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x12c8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 3));
label_12c8f8:
    // 0x12c8f8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c8fc:
    // 0x12c8fc: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x12c8fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_12c900:
    // 0x12c900: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x12c900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_12c904:
    // 0x12c904: 0x2ca1000a  sltiu       $at, $a1, 0xA
    ctx->pc = 0x12c904u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_12c908:
    // 0x12c908: 0x1020021e  beqz        $at, . + 4 + (0x21E << 2)
label_12c90c:
    if (ctx->pc == 0x12C90Cu) {
        ctx->pc = 0x12C910u;
        goto label_12c910;
    }
    ctx->pc = 0x12C908u;
    {
        const bool branch_taken_0x12c908 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c908) {
            ctx->pc = 0x12D184u;
            goto label_12d184;
        }
    }
    ctx->pc = 0x12C910u;
label_12c910:
    // 0x12c910: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x12c910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_12c914:
    // 0x12c914: 0x2464e4d0  addiu       $a0, $v1, -0x1B30
    ctx->pc = 0x12c914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960336));
label_12c918:
    // 0x12c918: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x12c918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_12c91c:
    // 0x12c91c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x12c91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_12c920:
    // 0x12c920: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x12c920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12c924:
    // 0x12c924: 0xa00008  jr          $a1
label_12c928:
    if (ctx->pc == 0x12C928u) {
        ctx->pc = 0x12C92Cu;
        goto label_12c92c;
    }
    ctx->pc = 0x12C924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C924u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12C92Cu;
label_12c92c:
    // 0x12c92c: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x12c92cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c930:
    // 0x12c930: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x12c930u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c934:
    // 0x12c934: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x12c934u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_12c938:
    // 0x12c938: 0x8cc80368  lw          $t0, 0x368($a2)
    ctx->pc = 0x12c938u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 872)));
label_12c93c:
    // 0x12c93c: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x12c93cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_12c940:
    // 0x12c940: 0x2406052f  addiu       $a2, $zero, 0x52F
    ctx->pc = 0x12c940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1327));
label_12c944:
    // 0x12c944: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x12c944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_12c948:
    // 0x12c948: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12c948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_12c94c:
    // 0x12c94c: 0xc0965d0  jal         func_259740
label_12c950:
    if (ctx->pc == 0x12C950u) {
        ctx->pc = 0x12C954u;
        goto label_12c954;
    }
    ctx->pc = 0x12C94Cu;
    SET_GPR_U32(ctx, 31, 0x12C954u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12C94Cu, 0x12C954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C954u;
label_12c954:
    // 0x12c954: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c958:
    // 0x12c958: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c95c:
    // 0x12c95c: 0x246512b0  addiu       $a1, $v1, 0x12B0
    ctx->pc = 0x12c95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4784));
label_12c960:
    // 0x12c960: 0xc096c60  jal         func_25B180
label_12c964:
    if (ctx->pc == 0x12C964u) {
        ctx->pc = 0x12C968u;
        goto label_12c968;
    }
    ctx->pc = 0x12C960u;
    SET_GPR_U32(ctx, 31, 0x12C968u);
    ctx->pc = 0x25B180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B180u, 0x12C960u, 0x12C968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C968u;
label_12c968:
    // 0x12c968: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c96c:
    // 0x12c96c: 0xc05ce54  jal         func_173950
label_12c970:
    if (ctx->pc == 0x12C970u) {
        ctx->pc = 0x12C974u;
        goto label_12c974;
    }
    ctx->pc = 0x12C96Cu;
    SET_GPR_U32(ctx, 31, 0x12C974u);
    ctx->pc = 0x173950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173950u, 0x12C96Cu, 0x12C974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C974u;
label_12c974:
    // 0x12c974: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x12c974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_12c978:
    // 0x12c978: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c97c:
    // 0x12c97c: 0xa4821278  sh          $v0, 0x1278($a0)
    ctx->pc = 0x12c97cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 2));
label_12c980:
    // 0x12c980: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x12c980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_12c984:
    // 0x12c984: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c988:
    // 0x12c988: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x12c988u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
label_12c98c:
    // 0x12c98c: 0xae0013fc  sw          $zero, 0x13FC($s0)
    ctx->pc = 0x12c98cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5116), GPR_U32(ctx, 0));
label_12c990:
    // 0x12c990: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c994:
    // 0x12c994: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x12c994u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
label_12c998:
    // 0x12c998: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c99c:
    // 0x12c99c: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x12c99cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_12c9a0:
    // 0x12c9a0: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x12c9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_12c9a4:
    // 0x12c9a4: 0xa0450002  sb          $a1, 0x2($v0)
    ctx->pc = 0x12c9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 5));
label_12c9a8:
    // 0x12c9a8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c9ac:
    // 0x12c9ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12c9acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12c9b0:
    // 0x12c9b0: 0xc096b40  jal         func_25AD00
label_12c9b4:
    if (ctx->pc == 0x12C9B4u) {
        ctx->pc = 0x12C9B8u;
        goto label_12c9b8;
    }
    ctx->pc = 0x12C9B0u;
    SET_GPR_U32(ctx, 31, 0x12C9B8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12C9B0u, 0x12C9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C9B8u;
label_12c9b8:
    // 0x12c9b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c9bc:
    // 0x12c9bc: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12c9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c9c0:
    // 0x12c9c0: 0x3c043e32  lui         $a0, 0x3E32
    ctx->pc = 0x12c9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15922 << 16));
label_12c9c4:
    // 0x12c9c4: 0x3483b8c2  ori         $v1, $a0, 0xB8C2
    ctx->pc = 0x12c9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)47298);
label_12c9c8:
    // 0x12c9c8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x12c9c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_12c9cc:
    // 0x12c9cc: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x12c9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12c9d0:
    // 0x12c9d0: 0xc4ad00d4  lwc1        $f13, 0xD4($a1)
    ctx->pc = 0x12c9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_12c9d4:
    // 0x12c9d4: 0xc058f50  jal         func_163D40
label_12c9d8:
    if (ctx->pc == 0x12C9D8u) {
        ctx->pc = 0x12C9DCu;
        goto label_12c9dc;
    }
    ctx->pc = 0x12C9D4u;
    SET_GPR_U32(ctx, 31, 0x12C9DCu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x12C9D4u, 0x12C9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C9DCu;
label_12c9dc:
    // 0x12c9dc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c9e0:
    // 0x12c9e0: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x12c9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_12c9e4:
    // 0x12c9e4: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x12c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_12c9e8:
    // 0x12c9e8: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x12c9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_12c9ec:
    // 0x12c9ec: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x12c9ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12c9f0:
    // 0x12c9f0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c9f4:
    // 0x12c9f4: 0xc05ce88  jal         func_173A20
label_12c9f8:
    if (ctx->pc == 0x12C9F8u) {
        ctx->pc = 0x12C9FCu;
        goto label_12c9fc;
    }
    ctx->pc = 0x12C9F4u;
    SET_GPR_U32(ctx, 31, 0x12C9FCu);
    ctx->pc = 0x173A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A20u, 0x12C9F4u, 0x12C9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C9FCu;
label_12c9fc:
    // 0x12c9fc: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x12c9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12ca00:
    // 0x12ca00: 0x84c7127e  lh          $a3, 0x127E($a2)
    ctx->pc = 0x12ca00u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4734)));
label_12ca04:
    // 0x12ca04: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
label_12ca08:
    if (ctx->pc == 0x12CA08u) {
        ctx->pc = 0x12CA0Cu;
        goto label_12ca0c;
    }
    ctx->pc = 0x12CA04u;
    {
        const bool branch_taken_0x12ca04 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ca04) {
            ctx->pc = 0x12CA20u;
            goto label_12ca20;
        }
    }
    ctx->pc = 0x12CA0Cu;
label_12ca0c:
    // 0x12ca0c: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x12ca0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12ca10:
    // 0x12ca10: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12ca10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12ca14:
    // 0x12ca14: 0xc50c1290  lwc1        $f12, 0x1290($t0)
    ctx->pc = 0x12ca14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12ca18:
    // 0x12ca18: 0xc05cd58  jal         func_173560
label_12ca1c:
    if (ctx->pc == 0x12CA1Cu) {
        ctx->pc = 0x12CA20u;
        goto label_12ca20;
    }
    ctx->pc = 0x12CA18u;
    SET_GPR_U32(ctx, 31, 0x12CA20u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x12CA18u, 0x12CA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CA20u;
label_12ca20:
    // 0x12ca20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12ca20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12ca24:
    // 0x12ca24: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12ca28:
    // 0x12ca28: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x12ca28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
label_12ca2c:
    // 0x12ca2c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12ca30:
    // 0x12ca30: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12ca30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12ca34:
    // 0x12ca34: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12ca34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_12ca38:
    // 0x12ca38: 0xc040c9e  jal         func_103278
label_12ca3c:
    if (ctx->pc == 0x12CA3Cu) {
        ctx->pc = 0x12CA40u;
        goto label_12ca40;
    }
    ctx->pc = 0x12CA38u;
    SET_GPR_U32(ctx, 31, 0x12CA40u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x12CA40u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12CA40u) { return; }
    ctx->pc = 0x12CA40u;
label_12ca40:
    // 0x12ca40: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12ca40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12ca44:
    // 0x12ca44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12ca44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12ca48:
    // 0x12ca48: 0xc05cec4  jal         func_173B10
label_12ca4c:
    if (ctx->pc == 0x12CA4Cu) {
        ctx->pc = 0x12CA50u;
        goto label_12ca50;
    }
    ctx->pc = 0x12CA48u;
    SET_GPR_U32(ctx, 31, 0x12CA50u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12CA48u, 0x12CA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CA50u;
label_12ca50:
    // 0x12ca50: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12ca54:
    // 0x12ca54: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12ca54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12ca58:
    // 0x12ca58: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12ca58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_12ca5c:
    // 0x12ca5c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x12ca5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12ca60:
    // 0x12ca60: 0xc0675b0  jal         func_19D6C0
label_12ca64:
    if (ctx->pc == 0x12CA64u) {
        ctx->pc = 0x12CA68u;
        goto label_12ca68;
    }
    ctx->pc = 0x12CA60u;
    SET_GPR_U32(ctx, 31, 0x12CA68u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x12CA60u, 0x12CA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CA68u;
label_12ca68:
    // 0x12ca68: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12ca68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12ca6c:
    // 0x12ca6c: 0xc44112a0  lwc1        $f1, 0x12A0($v0)
    ctx->pc = 0x12ca6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12ca70:
    // 0x12ca70: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x12ca70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ca74:
    // 0x12ca74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12ca74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_12ca78:
    // 0x12ca78: 0xe44012a0  swc1        $f0, 0x12A0($v0)
    ctx->pc = 0x12ca78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4768), bits); }
label_12ca7c:
    // 0x12ca7c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12ca7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12ca80:
    // 0x12ca80: 0xc48112a8  lwc1        $f1, 0x12A8($a0)
    ctx->pc = 0x12ca80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12ca84:
    // 0x12ca84: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x12ca84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ca88:
    // 0x12ca88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12ca88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_12ca8c:
    // 0x12ca8c: 0xe48012a8  swc1        $f0, 0x12A8($a0)
    ctx->pc = 0x12ca8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4776), bits); }
label_12ca90:
    // 0x12ca90: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12ca90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12ca94:
    // 0x12ca94: 0xc0974dc  jal         func_25D370
label_12ca98:
    if (ctx->pc == 0x12CA98u) {
        ctx->pc = 0x12CA9Cu;
        goto label_12ca9c;
    }
    ctx->pc = 0x12CA94u;
    SET_GPR_U32(ctx, 31, 0x12CA9Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12CA94u, 0x12CA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CA9Cu;
label_12ca9c:
    // 0x12ca9c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12ca9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12caa0:
    // 0x12caa0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12caa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_12caa4:
    // 0x12caa4: 0x106001b7  beqz        $v1, . + 4 + (0x1B7 << 2)
label_12caa8:
    if (ctx->pc == 0x12CAA8u) {
        ctx->pc = 0x12CAACu;
        goto label_12caac;
    }
    ctx->pc = 0x12CAA4u;
    {
        const bool branch_taken_0x12caa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12caa4) {
            ctx->pc = 0x12D184u;
            goto label_12d184;
        }
    }
    ctx->pc = 0x12CAACu;
label_12caac:
    // 0x12caac: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12caacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cab0:
    // 0x12cab0: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x12cab0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_12cab4:
    // 0x12cab4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x12cab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_12cab8:
    // 0x12cab8: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x12cab8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_12cabc:
    // 0x12cabc: 0x10000203  b           . + 4 + (0x203 << 2)
label_12cac0:
    if (ctx->pc == 0x12CAC0u) {
        ctx->pc = 0x12CAC4u;
        goto label_12cac4;
    }
    ctx->pc = 0x12CABCu;
    {
        const bool branch_taken_0x12cabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cabc) {
            ctx->pc = 0x12D2CCu;
            goto label_12d2cc;
        }
    }
    ctx->pc = 0x12CAC4u;
label_12cac4:
    // 0x12cac4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cac8:
    // 0x12cac8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cacc:
    // 0x12cacc: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x12caccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_12cad0:
    // 0x12cad0: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x12cad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_12cad4:
    // 0x12cad4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12cad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12cad8:
    // 0x12cad8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12cad8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_12cadc:
    // 0x12cadc: 0xc0965d0  jal         func_259740
label_12cae0:
    if (ctx->pc == 0x12CAE0u) {
        ctx->pc = 0x12CAE4u;
        goto label_12cae4;
    }
    ctx->pc = 0x12CADCu;
    SET_GPR_U32(ctx, 31, 0x12CAE4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12CADCu, 0x12CAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CAE4u;
label_12cae4:
    // 0x12cae4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x12cae4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12cae8:
    // 0x12cae8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12cae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12caec:
    // 0x12caec: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x12caecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_12caf0:
    // 0x12caf0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x12caf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_12caf4:
    // 0x12caf4: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x12caf4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
label_12caf8:
    // 0x12caf8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x12caf8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_12cafc:
    // 0x12cafc: 0xc057634  jal         func_15D8D0
label_12cb00:
    if (ctx->pc == 0x12CB00u) {
        ctx->pc = 0x12CB04u;
        goto label_12cb04;
    }
    ctx->pc = 0x12CAFCu;
    SET_GPR_U32(ctx, 31, 0x12CB04u);
    ctx->pc = 0x15D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D8D0u, 0x12CAFCu, 0x12CB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB04u;
label_12cb04:
    // 0x12cb04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_12cb08:
    if (ctx->pc == 0x12CB08u) {
        ctx->pc = 0x12CB0Cu;
        goto label_12cb0c;
    }
    ctx->pc = 0x12CB04u;
    {
        const bool branch_taken_0x12cb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cb04) {
            ctx->pc = 0x12CB1Cu;
            goto label_12cb1c;
        }
    }
    ctx->pc = 0x12CB0Cu;
label_12cb0c:
    // 0x12cb0c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cb10:
    // 0x12cb10: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x12cb10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_12cb14:
    // 0x12cb14: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x12cb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_12cb18:
    // 0x12cb18: 0xa4821278  sh          $v0, 0x1278($a0)
    ctx->pc = 0x12cb18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 2));
label_12cb1c:
    // 0x12cb1c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cb20:
    // 0x12cb20: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12cb20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12cb24:
    // 0x12cb24: 0xc096b40  jal         func_25AD00
label_12cb28:
    if (ctx->pc == 0x12CB28u) {
        ctx->pc = 0x12CB2Cu;
        goto label_12cb2c;
    }
    ctx->pc = 0x12CB24u;
    SET_GPR_U32(ctx, 31, 0x12CB2Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12CB24u, 0x12CB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB2Cu;
label_12cb2c:
    // 0x12cb2c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12cb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cb30:
    // 0x12cb30: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cb34:
    // 0x12cb34: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x12cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
label_12cb38:
    // 0x12cb38: 0x3444b8c2  ori         $a0, $v0, 0xB8C2
    ctx->pc = 0x12cb38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_12cb3c:
    // 0x12cb3c: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x12cb3cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_12cb40:
    // 0x12cb40: 0xc4ac1290  lwc1        $f12, 0x1290($a1)
    ctx->pc = 0x12cb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12cb44:
    // 0x12cb44: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x12cb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_12cb48:
    // 0x12cb48: 0xc058f50  jal         func_163D40
label_12cb4c:
    if (ctx->pc == 0x12CB4Cu) {
        ctx->pc = 0x12CB50u;
        goto label_12cb50;
    }
    ctx->pc = 0x12CB48u;
    SET_GPR_U32(ctx, 31, 0x12CB50u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x12CB48u, 0x12CB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB50u;
label_12cb50:
    // 0x12cb50: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12cb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cb54:
    // 0x12cb54: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12cb54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_12cb58:
    // 0x12cb58: 0x3c073e99  lui         $a3, 0x3E99
    ctx->pc = 0x12cb58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16025 << 16));
label_12cb5c:
    // 0x12cb5c: 0x34e5999a  ori         $a1, $a3, 0x999A
    ctx->pc = 0x12cb5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)39322);
label_12cb60:
    // 0x12cb60: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x12cb60u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12cb64:
    // 0x12cb64: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cb68:
    // 0x12cb68: 0xc05ce88  jal         func_173A20
label_12cb6c:
    if (ctx->pc == 0x12CB6Cu) {
        ctx->pc = 0x12CB70u;
        goto label_12cb70;
    }
    ctx->pc = 0x12CB68u;
    SET_GPR_U32(ctx, 31, 0x12CB70u);
    ctx->pc = 0x173A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A20u, 0x12CB68u, 0x12CB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB70u;
label_12cb70:
    // 0x12cb70: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12cb70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cb74:
    // 0x12cb74: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cb78:
    // 0x12cb78: 0xc4ac1290  lwc1        $f12, 0x1290($a1)
    ctx->pc = 0x12cb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12cb7c:
    // 0x12cb7c: 0xc05cd58  jal         func_173560
label_12cb80:
    if (ctx->pc == 0x12CB80u) {
        ctx->pc = 0x12CB84u;
        goto label_12cb84;
    }
    ctx->pc = 0x12CB7Cu;
    SET_GPR_U32(ctx, 31, 0x12CB84u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x12CB7Cu, 0x12CB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB84u;
label_12cb84:
    // 0x12cb84: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12cb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cb88:
    // 0x12cb88: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x12cb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12cb8c:
    // 0x12cb8c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x12cb8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_12cb90:
    // 0x12cb90: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12cb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_12cb94:
    // 0x12cb94: 0xc040c9e  jal         func_103278
label_12cb98:
    if (ctx->pc == 0x12CB98u) {
        ctx->pc = 0x12CB9Cu;
        goto label_12cb9c;
    }
    ctx->pc = 0x12CB94u;
    SET_GPR_U32(ctx, 31, 0x12CB9Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x12CB9Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12CB9Cu) { return; }
    ctx->pc = 0x12CB9Cu;
label_12cb9c:
    // 0x12cb9c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x12cb9cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12cba0:
    // 0x12cba0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cba4:
    // 0x12cba4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12cba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12cba8:
    // 0x12cba8: 0xc05cec4  jal         func_173B10
label_12cbac:
    if (ctx->pc == 0x12CBACu) {
        ctx->pc = 0x12CBB0u;
        goto label_12cbb0;
    }
    ctx->pc = 0x12CBA8u;
    SET_GPR_U32(ctx, 31, 0x12CBB0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12CBA8u, 0x12CBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CBB0u;
label_12cbb0:
    // 0x12cbb0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x12cbb0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12cbb4:
    // 0x12cbb4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cbb8:
    // 0x12cbb8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12cbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12cbbc:
    // 0x12cbbc: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12cbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_12cbc0:
    // 0x12cbc0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x12cbc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12cbc4:
    // 0x12cbc4: 0xc0675b0  jal         func_19D6C0
label_12cbc8:
    if (ctx->pc == 0x12CBC8u) {
        ctx->pc = 0x12CBCCu;
        goto label_12cbcc;
    }
    ctx->pc = 0x12CBC4u;
    SET_GPR_U32(ctx, 31, 0x12CBCCu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x12CBC4u, 0x12CBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CBCCu;
label_12cbcc:
    // 0x12cbcc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cbd0:
    // 0x12cbd0: 0xc44112a0  lwc1        $f1, 0x12A0($v0)
    ctx->pc = 0x12cbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12cbd4:
    // 0x12cbd4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x12cbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12cbd8:
    // 0x12cbd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12cbd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_12cbdc:
    // 0x12cbdc: 0xe44012a0  swc1        $f0, 0x12A0($v0)
    ctx->pc = 0x12cbdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4768), bits); }
label_12cbe0:
    // 0x12cbe0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cbe4:
    // 0x12cbe4: 0xc44112a8  lwc1        $f1, 0x12A8($v0)
    ctx->pc = 0x12cbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12cbe8:
    // 0x12cbe8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x12cbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12cbec:
    // 0x12cbec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12cbecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_12cbf0:
    // 0x12cbf0: 0xe44012a8  swc1        $f0, 0x12A8($v0)
    ctx->pc = 0x12cbf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4776), bits); }
label_12cbf4:
    // 0x12cbf4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cbf8:
    // 0x12cbf8: 0xc0974dc  jal         func_25D370
label_12cbfc:
    if (ctx->pc == 0x12CBFCu) {
        ctx->pc = 0x12CC00u;
        goto label_12cc00;
    }
    ctx->pc = 0x12CBF8u;
    SET_GPR_U32(ctx, 31, 0x12CC00u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12CBF8u, 0x12CC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CC00u;
label_12cc00:
    // 0x12cc00: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cc04:
    // 0x12cc04: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x12cc04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
label_12cc08:
    // 0x12cc08: 0x1060015e  beqz        $v1, . + 4 + (0x15E << 2)
label_12cc0c:
    if (ctx->pc == 0x12CC0Cu) {
        ctx->pc = 0x12CC10u;
        goto label_12cc10;
    }
    ctx->pc = 0x12CC08u;
    {
        const bool branch_taken_0x12cc08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cc08) {
            ctx->pc = 0x12D184u;
            goto label_12d184;
        }
    }
    ctx->pc = 0x12CC10u;
label_12cc10:
    // 0x12cc10: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x12cc10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_12cc14:
    // 0x12cc14: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cc18:
    // 0x12cc18: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x12cc18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12cc1c:
    // 0x12cc1c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x12cc1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_12cc20:
    // 0x12cc20: 0x84268db8  lh          $a2, -0x7248($at)
    ctx->pc = 0x12cc20u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938040)));
label_12cc24:
    // 0x12cc24: 0xc06d1d8  jal         func_1B4760
label_12cc28:
    if (ctx->pc == 0x12CC28u) {
        ctx->pc = 0x12CC2Cu;
        goto label_12cc2c;
    }
    ctx->pc = 0x12CC24u;
    SET_GPR_U32(ctx, 31, 0x12CC2Cu);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x12CC24u, 0x12CC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CC2Cu;
label_12cc2c:
    // 0x12cc2c: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x12cc2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
label_12cc30:
    // 0x12cc30: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x12cc30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_12cc34:
    // 0x12cc34: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x12cc34u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_12cc38:
    // 0x12cc38: 0x481000f  bgez        $a0, . + 4 + (0xF << 2)
label_12cc3c:
    if (ctx->pc == 0x12CC3Cu) {
        ctx->pc = 0x12CC40u;
        goto label_12cc40;
    }
    ctx->pc = 0x12CC38u;
    {
        const bool branch_taken_0x12cc38 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x12cc38) {
            ctx->pc = 0x12CC78u;
            goto label_12cc78;
        }
    }
    ctx->pc = 0x12CC40u;
label_12cc40:
    // 0x12cc40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12cc40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12cc44:
    // 0x12cc44: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cc48:
    // 0x12cc48: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x12cc48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_12cc4c:
    // 0x12cc4c: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x12cc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_12cc50:
    // 0x12cc50: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cc54:
    // 0x12cc54: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12cc54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_12cc58:
    // 0x12cc58: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12cc58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cc5c:
    // 0x12cc5c: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x12cc5cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
label_12cc60:
    // 0x12cc60: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cc64:
    // 0x12cc64: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12cc64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12cc68:
    // 0x12cc68: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cc6c:
    // 0x12cc6c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12cc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_12cc70:
    // 0x12cc70: 0x10000196  b           . + 4 + (0x196 << 2)
label_12cc74:
    if (ctx->pc == 0x12CC74u) {
        ctx->pc = 0x12CC78u;
        goto label_12cc78;
    }
    ctx->pc = 0x12CC70u;
    {
        const bool branch_taken_0x12cc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cc70) {
            ctx->pc = 0x12D2CCu;
            goto label_12d2cc;
        }
    }
    ctx->pc = 0x12CC78u;
label_12cc78:
    // 0x12cc78: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cc7c:
    // 0x12cc7c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x12cc7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_12cc80:
    // 0x12cc80: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x12cc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
label_12cc84:
    // 0x12cc84: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x12cc84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_12cc88:
    // 0x12cc88: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cc8c:
    // 0x12cc8c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x12cc8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_12cc90:
    // 0x12cc90: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x12cc90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_12cc94:
    // 0x12cc94: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x12cc94u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_12cc98:
    // 0x12cc98: 0x1c600021  bgtz        $v1, . + 4 + (0x21 << 2)
label_12cc9c:
    if (ctx->pc == 0x12CC9Cu) {
        ctx->pc = 0x12CCA0u;
        goto label_12cca0;
    }
    ctx->pc = 0x12CC98u;
    {
        const bool branch_taken_0x12cc98 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x12cc98) {
            ctx->pc = 0x12CD20u;
            goto label_12cd20;
        }
    }
    ctx->pc = 0x12CCA0u;
label_12cca0:
    // 0x12cca0: 0xa6001278  sh          $zero, 0x1278($s0)
    ctx->pc = 0x12cca0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4728), (uint16_t)GPR_U32(ctx, 0));
label_12cca4:
    // 0x12cca4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cca8:
    // 0x12cca8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x12cca8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_12ccac:
    // 0x12ccac: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x12ccacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_12ccb0:
    // 0x12ccb0: 0x84268dc0  lh          $a2, -0x7240($at)
    ctx->pc = 0x12ccb0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938048)));
label_12ccb4:
    // 0x12ccb4: 0xc06d1d8  jal         func_1B4760
label_12ccb8:
    if (ctx->pc == 0x12CCB8u) {
        ctx->pc = 0x12CCBCu;
        goto label_12ccbc;
    }
    ctx->pc = 0x12CCB4u;
    SET_GPR_U32(ctx, 31, 0x12CCBCu);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x12CCB4u, 0x12CCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CCBCu;
label_12ccbc:
    // 0x12ccbc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12ccbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12ccc0:
    // 0x12ccc0: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x12ccc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
label_12ccc4:
    // 0x12ccc4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x12ccc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_12ccc8:
    // 0x12ccc8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x12ccc8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_12cccc:
    // 0x12cccc: 0x461000f  bgez        $v1, . + 4 + (0xF << 2)
label_12ccd0:
    if (ctx->pc == 0x12CCD0u) {
        ctx->pc = 0x12CCD4u;
        goto label_12ccd4;
    }
    ctx->pc = 0x12CCCCu;
    {
        const bool branch_taken_0x12cccc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x12cccc) {
            ctx->pc = 0x12CD0Cu;
            goto label_12cd0c;
        }
    }
    ctx->pc = 0x12CCD4u;
label_12ccd4:
    // 0x12ccd4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x12ccd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12ccd8:
    // 0x12ccd8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12ccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12ccdc:
    // 0x12ccdc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12ccdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12cce0:
    // 0x12cce0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12cce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12cce4:
    // 0x12cce4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cce8:
    // 0x12cce8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12cce8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_12ccec:
    // 0x12ccec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12ccecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12ccf0:
    // 0x12ccf0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12ccf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_12ccf4:
    // 0x12ccf4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12ccf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12ccf8:
    // 0x12ccf8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12ccf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12ccfc:
    // 0x12ccfc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12ccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cd00:
    // 0x12cd00: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12cd00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_12cd04:
    // 0x12cd04: 0x10000171  b           . + 4 + (0x171 << 2)
label_12cd08:
    if (ctx->pc == 0x12CD08u) {
        ctx->pc = 0x12CD0Cu;
        goto label_12cd0c;
    }
    ctx->pc = 0x12CD04u;
    {
        const bool branch_taken_0x12cd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cd04) {
            ctx->pc = 0x12D2CCu;
            goto label_12d2cc;
        }
    }
    ctx->pc = 0x12CD0Cu;
label_12cd0c:
    // 0x12cd0c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x12cd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_12cd10:
    // 0x12cd10: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cd14:
    // 0x12cd14: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x12cd14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_12cd18:
    // 0x12cd18: 0x1000016c  b           . + 4 + (0x16C << 2)
label_12cd1c:
    if (ctx->pc == 0x12CD1Cu) {
        ctx->pc = 0x12CD20u;
        goto label_12cd20;
    }
    ctx->pc = 0x12CD18u;
    {
        const bool branch_taken_0x12cd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cd18) {
            ctx->pc = 0x12D2CCu;
            goto label_12d2cc;
        }
    }
    ctx->pc = 0x12CD20u;
label_12cd20:
    // 0x12cd20: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12cd20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_12cd24:
    // 0x12cd24: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cd28:
    // 0x12cd28: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x12cd28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_12cd2c:
    // 0x12cd2c: 0x10000167  b           . + 4 + (0x167 << 2)
label_12cd30:
    if (ctx->pc == 0x12CD30u) {
        ctx->pc = 0x12CD34u;
        goto label_12cd34;
    }
    ctx->pc = 0x12CD2Cu;
    {
        const bool branch_taken_0x12cd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cd2c) {
            ctx->pc = 0x12D2CCu;
            goto label_12d2cc;
        }
    }
    ctx->pc = 0x12CD34u;
label_12cd34:
    // 0x12cd34: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cd38:
    // 0x12cd38: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cd3c:
    // 0x12cd3c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12cd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_12cd40:
    // 0x12cd40: 0x24060031  addiu       $a2, $zero, 0x31
    ctx->pc = 0x12cd40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_12cd44:
    // 0x12cd44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12cd44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12cd48:
    // 0x12cd48: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12cd48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_12cd4c:
    // 0x12cd4c: 0xc0965d0  jal         func_259740
label_12cd50:
    if (ctx->pc == 0x12CD50u) {
        ctx->pc = 0x12CD54u;
        goto label_12cd54;
    }
    ctx->pc = 0x12CD4Cu;
    SET_GPR_U32(ctx, 31, 0x12CD54u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12CD4Cu, 0x12CD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CD54u;
label_12cd54:
    // 0x12cd54: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cd58:
    // 0x12cd58: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12cd58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_12cd5c:
    // 0x12cd5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_12cd60:
    // 0x12cd60: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12cd60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_12cd64:
    // 0x12cd64: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x12cd64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_12cd68:
    // 0x12cd68: 0xc057634  jal         func_15D8D0
label_12cd6c:
    if (ctx->pc == 0x12CD6Cu) {
        ctx->pc = 0x12CD70u;
        goto label_12cd70;
    }
    ctx->pc = 0x12CD68u;
    SET_GPR_U32(ctx, 31, 0x12CD70u);
    ctx->pc = 0x15D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D8D0u, 0x12CD68u, 0x12CD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CD70u;
label_12cd70:
    // 0x12cd70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_12cd74:
    if (ctx->pc == 0x12CD74u) {
        ctx->pc = 0x12CD78u;
        goto label_12cd78;
    }
    ctx->pc = 0x12CD70u;
    {
        const bool branch_taken_0x12cd70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cd70) {
            ctx->pc = 0x12CD88u;
            goto label_12cd88;
        }
    }
    ctx->pc = 0x12CD78u;
label_12cd78:
    // 0x12cd78: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cd7c:
    // 0x12cd7c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x12cd7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_12cd80:
    // 0x12cd80: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12cd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_12cd84:
    // 0x12cd84: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x12cd84u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_12cd88:
    // 0x12cd88: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cd8c:
    // 0x12cd8c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12cd8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12cd90:
    // 0x12cd90: 0xc096b40  jal         func_25AD00
label_12cd94:
    if (ctx->pc == 0x12CD94u) {
        ctx->pc = 0x12CD98u;
        goto label_12cd98;
    }
    ctx->pc = 0x12CD90u;
    SET_GPR_U32(ctx, 31, 0x12CD98u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12CD90u, 0x12CD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CD98u;
label_12cd98:
    // 0x12cd98: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x12cd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
label_12cd9c:
    // 0x12cd9c: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x12cd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_12cda0:
    // 0x12cda0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x12cda0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_12cda4:
    // 0x12cda4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cda8:
    // 0x12cda8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12cda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cdac:
    // 0x12cdac: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x12cdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12cdb0:
    // 0x12cdb0: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x12cdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_12cdb4:
    // 0x12cdb4: 0xc058f50  jal         func_163D40
label_12cdb8:
    if (ctx->pc == 0x12CDB8u) {
        ctx->pc = 0x12CDBCu;
        goto label_12cdbc;
    }
    ctx->pc = 0x12CDB4u;
    SET_GPR_U32(ctx, 31, 0x12CDBCu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x12CDB4u, 0x12CDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CDBCu;
label_12cdbc:
    // 0x12cdbc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12cdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cdc0:
    // 0x12cdc0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12cdc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_12cdc4:
    // 0x12cdc4: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x12cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_12cdc8:
    // 0x12cdc8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x12cdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_12cdcc:
    // 0x12cdcc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12cdccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12cdd0:
    // 0x12cdd0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cdd4:
    // 0x12cdd4: 0xc05ce88  jal         func_173A20
label_12cdd8:
    if (ctx->pc == 0x12CDD8u) {
        ctx->pc = 0x12CDDCu;
        goto label_12cddc;
    }
    ctx->pc = 0x12CDD4u;
    SET_GPR_U32(ctx, 31, 0x12CDDCu);
    ctx->pc = 0x173A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A20u, 0x12CDD4u, 0x12CDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CDDCu;
label_12cddc:
    // 0x12cddc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12cddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cde0:
    // 0x12cde0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cde4:
    // 0x12cde4: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x12cde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12cde8:
    // 0x12cde8: 0xc05cd58  jal         func_173560
label_12cdec:
    if (ctx->pc == 0x12CDECu) {
        ctx->pc = 0x12CDF0u;
        goto label_12cdf0;
    }
    ctx->pc = 0x12CDE8u;
    SET_GPR_U32(ctx, 31, 0x12CDF0u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x12CDE8u, 0x12CDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CDF0u;
label_12cdf0:
    // 0x12cdf0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cdf4:
    // 0x12cdf4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12cdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12cdf8:
    // 0x12cdf8: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12cdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_12cdfc:
    // 0x12cdfc: 0xc040c9e  jal         func_103278
label_12ce00:
    if (ctx->pc == 0x12CE00u) {
        ctx->pc = 0x12CE04u;
        goto label_12ce04;
    }
    ctx->pc = 0x12CDFCu;
    SET_GPR_U32(ctx, 31, 0x12CE04u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x12CE04u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12CE04u) { return; }
    ctx->pc = 0x12CE04u;
label_12ce04:
    // 0x12ce04: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12ce04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12ce08:
    // 0x12ce08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12ce08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12ce0c:
    // 0x12ce0c: 0xc05cec4  jal         func_173B10
label_12ce10:
    if (ctx->pc == 0x12CE10u) {
        ctx->pc = 0x12CE14u;
        goto label_12ce14;
    }
    ctx->pc = 0x12CE0Cu;
    SET_GPR_U32(ctx, 31, 0x12CE14u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12CE0Cu, 0x12CE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CE14u;
label_12ce14:
    // 0x12ce14: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12ce18:
    // 0x12ce18: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12ce18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12ce1c:
    // 0x12ce1c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12ce1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_12ce20:
    // 0x12ce20: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x12ce20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12ce24:
    // 0x12ce24: 0xc0675b0  jal         func_19D6C0
label_12ce28:
    if (ctx->pc == 0x12CE28u) {
        ctx->pc = 0x12CE2Cu;
        goto label_12ce2c;
    }
    ctx->pc = 0x12CE24u;
    SET_GPR_U32(ctx, 31, 0x12CE2Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x12CE24u, 0x12CE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CE2Cu;
label_12ce2c:
    // 0x12ce2c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12ce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12ce30:
    // 0x12ce30: 0xc44112a0  lwc1        $f1, 0x12A0($v0)
    ctx->pc = 0x12ce30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12ce34:
    // 0x12ce34: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x12ce34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ce38:
    // 0x12ce38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12ce38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_12ce3c:
    // 0x12ce3c: 0xe44012a0  swc1        $f0, 0x12A0($v0)
    ctx->pc = 0x12ce3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4768), bits); }
label_12ce40:
    // 0x12ce40: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12ce40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12ce44:
    // 0x12ce44: 0xc44112a8  lwc1        $f1, 0x12A8($v0)
    ctx->pc = 0x12ce44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12ce48:
    // 0x12ce48: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x12ce48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ce4c:
    // 0x12ce4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12ce4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_12ce50:
    // 0x12ce50: 0xe44012a8  swc1        $f0, 0x12A8($v0)
    ctx->pc = 0x12ce50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4776), bits); }
label_12ce54:
    // 0x12ce54: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12ce54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12ce58:
    // 0x12ce58: 0xc0974dc  jal         func_25D370
label_12ce5c:
    if (ctx->pc == 0x12CE5Cu) {
        ctx->pc = 0x12CE60u;
        goto label_12ce60;
    }
    ctx->pc = 0x12CE58u;
    SET_GPR_U32(ctx, 31, 0x12CE60u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12CE58u, 0x12CE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CE60u;
label_12ce60:
    // 0x12ce60: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12ce60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12ce64:
    // 0x12ce64: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12ce64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_12ce68:
    // 0x12ce68: 0x106000c6  beqz        $v1, . + 4 + (0xC6 << 2)
label_12ce6c:
    if (ctx->pc == 0x12CE6Cu) {
        ctx->pc = 0x12CE70u;
        goto label_12ce70;
    }
    ctx->pc = 0x12CE68u;
    {
        const bool branch_taken_0x12ce68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ce68) {
            ctx->pc = 0x12D184u;
            goto label_12d184;
        }
    }
    ctx->pc = 0x12CE70u;
label_12ce70:
    // 0x12ce70: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x12ce70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_12ce74:
    // 0x12ce74: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12ce74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12ce78:
    // 0x12ce78: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x12ce78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_12ce7c:
    // 0x12ce7c: 0x84268db8  lh          $a2, -0x7248($at)
    ctx->pc = 0x12ce7cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938040)));
label_12ce80:
    // 0x12ce80: 0xc06d1d8  jal         func_1B4760
label_12ce84:
    if (ctx->pc == 0x12CE84u) {
        ctx->pc = 0x12CE88u;
        goto label_12ce88;
    }
    ctx->pc = 0x12CE80u;
    SET_GPR_U32(ctx, 31, 0x12CE88u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x12CE80u, 0x12CE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CE88u;
label_12ce88:
    // 0x12ce88: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x12ce88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
label_12ce8c:
    // 0x12ce8c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x12ce8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_12ce90:
    // 0x12ce90: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x12ce90u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_12ce94:
    // 0x12ce94: 0x461000f  bgez        $v1, . + 4 + (0xF << 2)
label_12ce98:
    if (ctx->pc == 0x12CE98u) {
        ctx->pc = 0x12CE9Cu;
        goto label_12ce9c;
    }
    ctx->pc = 0x12CE94u;
    {
        const bool branch_taken_0x12ce94 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x12ce94) {
            ctx->pc = 0x12CED4u;
            goto label_12ced4;
        }
    }
    ctx->pc = 0x12CE9Cu;
label_12ce9c:
    // 0x12ce9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12ce9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12cea0:
    // 0x12cea0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cea4:
    // 0x12cea4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12cea4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12cea8:
    // 0x12cea8: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x12cea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_12ceac:
    // 0x12ceac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12ceacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12ceb0:
    // 0x12ceb0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12ceb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_12ceb4:
    // 0x12ceb4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12ceb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12ceb8:
    // 0x12ceb8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12ceb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_12cebc:
    // 0x12cebc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cec0:
    // 0x12cec0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12cec0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12cec4:
    // 0x12cec4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cec8:
    // 0x12cec8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12cec8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_12cecc:
    // 0x12cecc: 0x100000ff  b           . + 4 + (0xFF << 2)
label_12ced0:
    if (ctx->pc == 0x12CED0u) {
        ctx->pc = 0x12CED4u;
        goto label_12ced4;
    }
    ctx->pc = 0x12CECCu;
    {
        const bool branch_taken_0x12cecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cecc) {
            ctx->pc = 0x12D2CCu;
            goto label_12d2cc;
        }
    }
    ctx->pc = 0x12CED4u;
label_12ced4:
    // 0x12ced4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12ced4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12ced8:
    // 0x12ced8: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x12ced8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_12cedc:
    // 0x12cedc: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x12cedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
label_12cee0:
    // 0x12cee0: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x12cee0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_12cee4:
    // 0x12cee4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cee8:
    // 0x12cee8: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x12cee8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_12ceec:
    // 0x12ceec: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x12ceecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_12cef0:
    // 0x12cef0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x12cef0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_12cef4:
    // 0x12cef4: 0x1c600021  bgtz        $v1, . + 4 + (0x21 << 2)
label_12cef8:
    if (ctx->pc == 0x12CEF8u) {
        ctx->pc = 0x12CEFCu;
        goto label_12cefc;
    }
    ctx->pc = 0x12CEF4u;
    {
        const bool branch_taken_0x12cef4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x12cef4) {
            ctx->pc = 0x12CF7Cu;
            goto label_12cf7c;
        }
    }
    ctx->pc = 0x12CEFCu;
label_12cefc:
    // 0x12cefc: 0xa6001278  sh          $zero, 0x1278($s0)
    ctx->pc = 0x12cefcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4728), (uint16_t)GPR_U32(ctx, 0));
label_12cf00:
    // 0x12cf00: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cf00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cf04:
    // 0x12cf04: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x12cf04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_12cf08:
    // 0x12cf08: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x12cf08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_12cf0c:
    // 0x12cf0c: 0x84268dc0  lh          $a2, -0x7240($at)
    ctx->pc = 0x12cf0cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938048)));
label_12cf10:
    // 0x12cf10: 0xc06d1d8  jal         func_1B4760
label_12cf14:
    if (ctx->pc == 0x12CF14u) {
        ctx->pc = 0x12CF18u;
        goto label_12cf18;
    }
    ctx->pc = 0x12CF10u;
    SET_GPR_U32(ctx, 31, 0x12CF18u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x12CF10u, 0x12CF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CF18u;
label_12cf18:
    // 0x12cf18: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cf18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cf1c:
    // 0x12cf1c: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x12cf1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
label_12cf20:
    // 0x12cf20: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x12cf20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_12cf24:
    // 0x12cf24: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x12cf24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_12cf28:
    // 0x12cf28: 0x461000f  bgez        $v1, . + 4 + (0xF << 2)
label_12cf2c:
    if (ctx->pc == 0x12CF2Cu) {
        ctx->pc = 0x12CF30u;
        goto label_12cf30;
    }
    ctx->pc = 0x12CF28u;
    {
        const bool branch_taken_0x12cf28 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x12cf28) {
            ctx->pc = 0x12CF68u;
            goto label_12cf68;
        }
    }
    ctx->pc = 0x12CF30u;
label_12cf30:
    // 0x12cf30: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12cf30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12cf34:
    // 0x12cf34: 0x8fb10068  lw          $s1, 0x68($sp)
    ctx->pc = 0x12cf34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cf38:
    // 0x12cf38: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x12cf38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_12cf3c:
    // 0x12cf3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12cf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12cf40:
    // 0x12cf40: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x12cf40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cf44:
    // 0x12cf44: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x12cf44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_12cf48:
    // 0x12cf48: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cf48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cf4c:
    // 0x12cf4c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12cf4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_12cf50:
    // 0x12cf50: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cf54:
    // 0x12cf54: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12cf54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12cf58:
    // 0x12cf58: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cf5c:
    // 0x12cf5c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12cf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_12cf60:
    // 0x12cf60: 0x100000da  b           . + 4 + (0xDA << 2)
label_12cf64:
    if (ctx->pc == 0x12CF64u) {
        ctx->pc = 0x12CF68u;
        goto label_12cf68;
    }
    ctx->pc = 0x12CF60u;
    {
        const bool branch_taken_0x12cf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cf60) {
            ctx->pc = 0x12D2CCu;
            goto label_12d2cc;
        }
    }
    ctx->pc = 0x12CF68u;
label_12cf68:
    // 0x12cf68: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x12cf68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_12cf6c:
    // 0x12cf6c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12cf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cf70:
    // 0x12cf70: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x12cf70u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_12cf74:
    // 0x12cf74: 0x100000d5  b           . + 4 + (0xD5 << 2)
label_12cf78:
    if (ctx->pc == 0x12CF78u) {
        ctx->pc = 0x12CF7Cu;
        goto label_12cf7c;
    }
    ctx->pc = 0x12CF74u;
    {
        const bool branch_taken_0x12cf74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cf74) {
            ctx->pc = 0x12D2CCu;
            goto label_12d2cc;
        }
    }
    ctx->pc = 0x12CF7Cu;
label_12cf7c:
    // 0x12cf7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12cf80:
    // 0x12cf80: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cf80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cf84:
    // 0x12cf84: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x12cf84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_12cf88:
    // 0x12cf88: 0x100000d0  b           . + 4 + (0xD0 << 2)
label_12cf8c:
    if (ctx->pc == 0x12CF8Cu) {
        ctx->pc = 0x12CF90u;
        goto label_12cf90;
    }
    ctx->pc = 0x12CF88u;
    {
        const bool branch_taken_0x12cf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cf88) {
            ctx->pc = 0x12D2CCu;
            goto label_12d2cc;
        }
    }
    ctx->pc = 0x12CF90u;
label_12cf90:
    // 0x12cf90: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cf94:
    // 0x12cf94: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cf94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cf98:
    // 0x12cf98: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x12cf98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_12cf9c:
    // 0x12cf9c: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x12cf9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_12cfa0:
    // 0x12cfa0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12cfa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12cfa4:
    // 0x12cfa4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12cfa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_12cfa8:
    // 0x12cfa8: 0xc0965d0  jal         func_259740
label_12cfac:
    if (ctx->pc == 0x12CFACu) {
        ctx->pc = 0x12CFB0u;
        goto label_12cfb0;
    }
    ctx->pc = 0x12CFA8u;
    SET_GPR_U32(ctx, 31, 0x12CFB0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12CFA8u, 0x12CFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CFB0u;
label_12cfb0:
    // 0x12cfb0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x12cfb0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12cfb4:
    // 0x12cfb4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12cfb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12cfb8:
    // 0x12cfb8: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x12cfb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cfbc:
    // 0x12cfbc: 0xa5071278  sh          $a3, 0x1278($t0)
    ctx->pc = 0x12cfbcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4728), (uint16_t)GPR_U32(ctx, 7));
label_12cfc0:
    // 0x12cfc0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cfc4:
    // 0x12cfc4: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x12cfc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_12cfc8:
    // 0x12cfc8: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x12cfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_12cfcc:
    // 0x12cfcc: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x12cfccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
label_12cfd0:
    // 0x12cfd0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12cfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cfd4:
    // 0x12cfd4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x12cfd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_12cfd8:
    // 0x12cfd8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12cfd8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12cfdc:
    // 0x12cfdc: 0xc096b40  jal         func_25AD00
label_12cfe0:
    if (ctx->pc == 0x12CFE0u) {
        ctx->pc = 0x12CFE4u;
        goto label_12cfe4;
    }
    ctx->pc = 0x12CFDCu;
    SET_GPR_U32(ctx, 31, 0x12CFE4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12CFDCu, 0x12CFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CFE4u;
label_12cfe4:
    // 0x12cfe4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cfe8:
    // 0x12cfe8: 0x84821278  lh          $v0, 0x1278($a0)
    ctx->pc = 0x12cfe8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_12cfec:
    // 0x12cfec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_12cff0:
    if (ctx->pc == 0x12CFF0u) {
        ctx->pc = 0x12CFF4u;
        goto label_12cff4;
    }
    ctx->pc = 0x12CFECu;
    {
        const bool branch_taken_0x12cfec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12cfec) {
            ctx->pc = 0x12D010u;
            goto label_12d010;
        }
    }
    ctx->pc = 0x12CFF4u;
label_12cff4:
    // 0x12cff4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cff8:
    // 0x12cff8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12cffc:
    // 0x12cffc: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x12cffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12d000:
    // 0x12d000: 0xc05cd58  jal         func_173560
label_12d004:
    if (ctx->pc == 0x12D004u) {
        ctx->pc = 0x12D008u;
        goto label_12d008;
    }
    ctx->pc = 0x12D000u;
    SET_GPR_U32(ctx, 31, 0x12D008u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x12D000u, 0x12D008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D008u;
label_12d008:
    // 0x12d008: 0x10000005  b           . + 4 + (0x5 << 2)
label_12d00c:
    if (ctx->pc == 0x12D00Cu) {
        ctx->pc = 0x12D010u;
        goto label_12d010;
    }
    ctx->pc = 0x12D008u;
    {
        const bool branch_taken_0x12d008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d008) {
            ctx->pc = 0x12D020u;
            goto label_12d020;
        }
    }
    ctx->pc = 0x12D010u;
label_12d010:
    // 0x12d010: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12d010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12d014:
    // 0x12d014: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x12d014u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_12d018:
    // 0x12d018: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12d018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_12d01c:
    // 0x12d01c: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x12d01cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_12d020:
    // 0x12d020: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12d024:
    // 0x12d024: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12d024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12d028:
    // 0x12d028: 0xc05cec4  jal         func_173B10
label_12d02c:
    if (ctx->pc == 0x12D02Cu) {
        ctx->pc = 0x12D030u;
        goto label_12d030;
    }
    ctx->pc = 0x12D028u;
    SET_GPR_U32(ctx, 31, 0x12D030u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12D028u, 0x12D030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D030u;
label_12d030:
    // 0x12d030: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12d030u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12d034:
    // 0x12d034: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12d034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12d038:
    // 0x12d038: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12d038u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12d03c:
    // 0x12d03c: 0xc0974dc  jal         func_25D370
label_12d040:
    if (ctx->pc == 0x12D040u) {
        ctx->pc = 0x12D044u;
        goto label_12d044;
    }
    ctx->pc = 0x12D03Cu;
    SET_GPR_U32(ctx, 31, 0x12D044u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12D03Cu, 0x12D044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D044u;
label_12d044:
    // 0x12d044: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12d044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12d048:
    // 0x12d048: 0x90a309e7  lbu         $v1, 0x9E7($a1)
    ctx->pc = 0x12d048u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
label_12d04c:
    // 0x12d04c: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
label_12d050:
    if (ctx->pc == 0x12D050u) {
        ctx->pc = 0x12D054u;
        goto label_12d054;
    }
    ctx->pc = 0x12D04Cu;
    {
        const bool branch_taken_0x12d04c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d04c) {
            ctx->pc = 0x12D184u;
            goto label_12d184;
        }
    }
    ctx->pc = 0x12D054u;
label_12d054:
    // 0x12d054: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12d058:
    // 0x12d058: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x12d058u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_12d05c:
    // 0x12d05c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12d05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_12d060:
    // 0x12d060: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x12d060u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_12d064:
    // 0x12d064: 0x10000047  b           . + 4 + (0x47 << 2)
label_12d068:
    if (ctx->pc == 0x12D068u) {
        ctx->pc = 0x12D06Cu;
        goto label_12d06c;
    }
    ctx->pc = 0x12D064u;
    {
        const bool branch_taken_0x12d064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d064) {
            ctx->pc = 0x12D184u;
            goto label_12d184;
        }
    }
    ctx->pc = 0x12D06Cu;
label_12d06c:
    // 0x12d06c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12d06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12d070:
    // 0x12d070: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12d074:
    // 0x12d074: 0x8c420368  lw          $v0, 0x368($v0)
    ctx->pc = 0x12d074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_12d078:
    // 0x12d078: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x12d078u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12d07c:
    // 0x12d07c: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x12d07cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_12d080:
    // 0x12d080: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12d080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12d084:
    // 0x12d084: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12d084u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_12d088:
    // 0x12d088: 0xc0965d0  jal         func_259740
label_12d08c:
    if (ctx->pc == 0x12D08Cu) {
        ctx->pc = 0x12D090u;
        goto label_12d090;
    }
    ctx->pc = 0x12D088u;
    SET_GPR_U32(ctx, 31, 0x12D090u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12D088u, 0x12D090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D090u;
label_12d090:
    // 0x12d090: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12d090u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12d094:
    // 0x12d094: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12d094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12d098:
    // 0x12d098: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x12d098u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
label_12d09c:
    // 0x12d09c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12d09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12d0a0:
    // 0x12d0a0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12d0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12d0a4:
    // 0x12d0a4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x12d0a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_12d0a8:
    // 0x12d0a8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12d0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12d0ac:
    // 0x12d0ac: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x12d0acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_12d0b0:
    // 0x12d0b0: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x12d0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_12d0b4:
    // 0x12d0b4: 0xa0450002  sb          $a1, 0x2($v0)
    ctx->pc = 0x12d0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 5));
label_12d0b8:
    // 0x12d0b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12d0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12d0bc:
    // 0x12d0bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12d0bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12d0c0:
    // 0x12d0c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12d0c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12d0c4:
    // 0x12d0c4: 0xc096b40  jal         func_25AD00
label_12d0c8:
    if (ctx->pc == 0x12D0C8u) {
        ctx->pc = 0x12D0CCu;
        goto label_12d0cc;
    }
    ctx->pc = 0x12D0C4u;
    SET_GPR_U32(ctx, 31, 0x12D0CCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12D0C4u, 0x12D0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D0CCu;
label_12d0cc:
    // 0x12d0cc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12d0ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12d0d0:
    // 0x12d0d0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12d0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12d0d4:
    // 0x12d0d4: 0x84a21278  lh          $v0, 0x1278($a1)
    ctx->pc = 0x12d0d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
label_12d0d8:
    // 0x12d0d8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_12d0dc:
    if (ctx->pc == 0x12D0DCu) {
        ctx->pc = 0x12D0E0u;
        goto label_12d0e0;
    }
    ctx->pc = 0x12D0D8u;
    {
        const bool branch_taken_0x12d0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d0d8) {
            ctx->pc = 0x12D100u;
            goto label_12d100;
        }
    }
    ctx->pc = 0x12D0E0u;
label_12d0e0:
    // 0x12d0e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12d0e4:
    // 0x12d0e4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12d0e8:
    // 0x12d0e8: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x12d0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12d0ec:
    // 0x12d0ec: 0xc05cd58  jal         func_173560
label_12d0f0:
    if (ctx->pc == 0x12D0F0u) {
        ctx->pc = 0x12D0F4u;
        goto label_12d0f4;
    }
    ctx->pc = 0x12D0ECu;
    SET_GPR_U32(ctx, 31, 0x12D0F4u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x12D0ECu, 0x12D0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D0F4u;
label_12d0f4:
    // 0x12d0f4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x12d0f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12d0f8:
    // 0x12d0f8: 0x10000005  b           . + 4 + (0x5 << 2)
label_12d0fc:
    if (ctx->pc == 0x12D0FCu) {
        ctx->pc = 0x12D100u;
        goto label_12d100;
    }
    ctx->pc = 0x12D0F8u;
    {
        const bool branch_taken_0x12d0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d0f8) {
            ctx->pc = 0x12D110u;
            goto label_12d110;
        }
    }
    ctx->pc = 0x12D100u;
label_12d100:
    // 0x12d100: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x12d100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12d104:
    // 0x12d104: 0x84c21278  lh          $v0, 0x1278($a2)
    ctx->pc = 0x12d104u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4728)));
label_12d108:
    // 0x12d108: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12d108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_12d10c:
    // 0x12d10c: 0xa4c21278  sh          $v0, 0x1278($a2)
    ctx->pc = 0x12d10cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4728), (uint16_t)GPR_U32(ctx, 2));
label_12d110:
    // 0x12d110: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12d114:
    // 0x12d114: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12d114u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12d118:
    // 0x12d118: 0xc05cec4  jal         func_173B10
label_12d11c:
    if (ctx->pc == 0x12D11Cu) {
        ctx->pc = 0x12D120u;
        goto label_12d120;
    }
    ctx->pc = 0x12D118u;
    SET_GPR_U32(ctx, 31, 0x12D120u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12D118u, 0x12D120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D120u;
label_12d120:
    // 0x12d120: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12d120u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12d124:
    // 0x12d124: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12d124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12d128:
    // 0x12d128: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12d128u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12d12c:
    // 0x12d12c: 0xc0974dc  jal         func_25D370
label_12d130:
    if (ctx->pc == 0x12D130u) {
        ctx->pc = 0x12D134u;
        goto label_12d134;
    }
    ctx->pc = 0x12D12Cu;
    SET_GPR_U32(ctx, 31, 0x12D134u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12D12Cu, 0x12D134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D134u;
label_12d134:
    // 0x12d134: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x12d134u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12d138:
    // 0x12d138: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12d138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12d13c:
    // 0x12d13c: 0x906509e7  lbu         $a1, 0x9E7($v1)
    ctx->pc = 0x12d13cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_12d140:
    // 0x12d140: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_12d144:
    if (ctx->pc == 0x12D144u) {
        ctx->pc = 0x12D148u;
        goto label_12d148;
    }
    ctx->pc = 0x12D140u;
    {
        const bool branch_taken_0x12d140 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d140) {
            ctx->pc = 0x12D184u;
            goto label_12d184;
        }
    }
    ctx->pc = 0x12D148u;
label_12d148:
    // 0x12d148: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12d148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12d14c:
    // 0x12d14c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12d14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12d150:
    // 0x12d150: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12d150u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12d154:
    // 0x12d154: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x12d154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_12d158:
    // 0x12d158: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12d15c:
    // 0x12d15c: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x12d15cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_12d160:
    // 0x12d160: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12d160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12d164:
    // 0x12d164: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x12d164u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
label_12d168:
    // 0x12d168: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x12d168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12d16c:
    // 0x12d16c: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x12d16cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
label_12d170:
    // 0x12d170: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x12d170u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12d174:
    // 0x12d174: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x12d174u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_12d178:
    // 0x12d178: 0xa620007c  sh          $zero, 0x7C($s1)
    ctx->pc = 0x12d178u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 124), (uint16_t)GPR_U32(ctx, 0));
label_12d17c:
    // 0x12d17c: 0x10000053  b           . + 4 + (0x53 << 2)
label_12d180:
    if (ctx->pc == 0x12D180u) {
        ctx->pc = 0x12D184u;
        goto label_12d184;
    }
    ctx->pc = 0x12D17Cu;
    {
        const bool branch_taken_0x12d17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d17c) {
            ctx->pc = 0x12D2CCu;
            goto label_12d2cc;
        }
    }
    ctx->pc = 0x12D184u;
label_12d184:
    // 0x12d184: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x12d184u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12d188:
    // 0x12d188: 0x910309df  lbu         $v1, 0x9DF($t0)
    ctx->pc = 0x12d188u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2527)));
label_12d18c:
    // 0x12d18c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x12d18cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_12d190:
    // 0x12d190: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x12d190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
label_12d194:
    // 0x12d194: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_12d198:
    if (ctx->pc == 0x12D198u) {
        ctx->pc = 0x12D19Cu;
        goto label_12d19c;
    }
    ctx->pc = 0x12D194u;
    {
        const bool branch_taken_0x12d194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d194) {
            ctx->pc = 0x12D224u;
            goto label_12d224;
        }
    }
    ctx->pc = 0x12D19Cu;
label_12d19c:
    // 0x12d19c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12d19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_12d1a0:
    // 0x12d1a0: 0xc0675a4  jal         func_19D690
label_12d1a4:
    if (ctx->pc == 0x12D1A4u) {
        ctx->pc = 0x12D1A8u;
        goto label_12d1a8;
    }
    ctx->pc = 0x12D1A0u;
    SET_GPR_U32(ctx, 31, 0x12D1A8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12D1A0u, 0x12D1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D1A8u;
label_12d1a8:
    // 0x12d1a8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12d1ac:
    // 0x12d1ac: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x12d1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_12d1b0:
    // 0x12d1b0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x12d1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_12d1b4:
    // 0x12d1b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x12d1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_12d1b8:
    // 0x12d1b8: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x12d1b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
label_12d1bc:
    // 0x12d1bc: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x12d1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_12d1c0:
    // 0x12d1c0: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x12d1c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_12d1c4:
    // 0x12d1c4: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x12d1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
label_12d1c8:
    // 0x12d1c8: 0x34640106  ori         $a0, $v1, 0x106
    ctx->pc = 0x12d1c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)262);
label_12d1cc:
    // 0x12d1cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12d1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12d1d0:
    // 0x12d1d0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12d1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_12d1d4:
    // 0x12d1d4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x12d1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_12d1d8:
    // 0x12d1d8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12d1d8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12d1dc:
    // 0x12d1dc: 0x24470580  addiu       $a3, $v0, 0x580
    ctx->pc = 0x12d1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
label_12d1e0:
    // 0x12d1e0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x12d1e0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12d1e4:
    // 0x12d1e4: 0xc06371c  jal         func_18DC70
label_12d1e8:
    if (ctx->pc == 0x12D1E8u) {
        ctx->pc = 0x12D1ECu;
        goto label_12d1ec;
    }
    ctx->pc = 0x12D1E4u;
    SET_GPR_U32(ctx, 31, 0x12D1ECu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x12D1E4u, 0x12D1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D1ECu;
label_12d1ec:
    // 0x12d1ec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12d1ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12d1f0:
    // 0x12d1f0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x12d1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_12d1f4:
    // 0x12d1f4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12d1f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12d1f8:
    // 0x12d1f8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x12d1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_12d1fc:
    // 0x12d1fc: 0xc0684d8  jal         func_1A1360
label_12d200:
    if (ctx->pc == 0x12D200u) {
        ctx->pc = 0x12D204u;
        goto label_12d204;
    }
    ctx->pc = 0x12D1FCu;
    SET_GPR_U32(ctx, 31, 0x12D204u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x12D1FCu, 0x12D204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D204u;
label_12d204:
    // 0x12d204: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12d204u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12d208:
    // 0x12d208: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x12d208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
label_12d20c:
    // 0x12d20c: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x12d20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
label_12d210:
    // 0x12d210: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12d210u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12d214:
    // 0x12d214: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x12d214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_12d218:
    // 0x12d218: 0xc0684d8  jal         func_1A1360
label_12d21c:
    if (ctx->pc == 0x12D21Cu) {
        ctx->pc = 0x12D220u;
        goto label_12d220;
    }
    ctx->pc = 0x12D218u;
    SET_GPR_U32(ctx, 31, 0x12D220u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x12D218u, 0x12D220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D220u;
label_12d220:
    // 0x12d220: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x12d220u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12d224:
    // 0x12d224: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12d224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12d228:
    // 0x12d228: 0x906409df  lbu         $a0, 0x9DF($v1)
    ctx->pc = 0x12d228u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
label_12d22c:
    // 0x12d22c: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x12d22cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_12d230:
    // 0x12d230: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x12d230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_12d234:
    // 0x12d234: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
label_12d238:
    if (ctx->pc == 0x12D238u) {
        ctx->pc = 0x12D23Cu;
        goto label_12d23c;
    }
    ctx->pc = 0x12D234u;
    {
        const bool branch_taken_0x12d234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d234) {
            ctx->pc = 0x12D2CCu;
            goto label_12d2cc;
        }
    }
    ctx->pc = 0x12D23Cu;
label_12d23c:
    // 0x12d23c: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x12d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_12d240:
    // 0x12d240: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12d240u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12d244:
    // 0x12d244: 0xc0675a4  jal         func_19D690
label_12d248:
    if (ctx->pc == 0x12D248u) {
        ctx->pc = 0x12D24Cu;
        goto label_12d24c;
    }
    ctx->pc = 0x12D244u;
    SET_GPR_U32(ctx, 31, 0x12D24Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12D244u, 0x12D24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D24Cu;
label_12d24c:
    // 0x12d24c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12d24cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12d250:
    // 0x12d250: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12d250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12d254:
    // 0x12d254: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x12d254u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
label_12d258:
    // 0x12d258: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x12d258u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_12d25c:
    // 0x12d25c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x12d25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_12d260:
    // 0x12d260: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x12d260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_12d264:
    // 0x12d264: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12d264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_12d268:
    // 0x12d268: 0xc22024  and         $a0, $a2, $v0
    ctx->pc = 0x12d268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_12d26c:
    // 0x12d26c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x12d26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
label_12d270:
    // 0x12d270: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x12d270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
label_12d274:
    // 0x12d274: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12d274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12d278:
    // 0x12d278: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x12d278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_12d27c:
    // 0x12d27c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x12d27cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_12d280:
    // 0x12d280: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x12d280u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_12d284:
    // 0x12d284: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12d284u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12d288:
    // 0x12d288: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x12d288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_12d28c:
    // 0x12d28c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x12d28cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12d290:
    // 0x12d290: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x12d290u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12d294:
    // 0x12d294: 0xc06371c  jal         func_18DC70
label_12d298:
    if (ctx->pc == 0x12D298u) {
        ctx->pc = 0x12D29Cu;
        goto label_12d29c;
    }
    ctx->pc = 0x12D294u;
    SET_GPR_U32(ctx, 31, 0x12D29Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x12D294u, 0x12D29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D29Cu;
label_12d29c:
    // 0x12d29c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x12d29cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12d2a0:
    // 0x12d2a0: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x12d2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_12d2a4:
    // 0x12d2a4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x12d2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_12d2a8:
    // 0x12d2a8: 0xc0684d8  jal         func_1A1360
label_12d2ac:
    if (ctx->pc == 0x12D2ACu) {
        ctx->pc = 0x12D2B0u;
        goto label_12d2b0;
    }
    ctx->pc = 0x12D2A8u;
    SET_GPR_U32(ctx, 31, 0x12D2B0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x12D2A8u, 0x12D2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D2B0u;
label_12d2b0:
    // 0x12d2b0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x12d2b0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12d2b4:
    // 0x12d2b4: 0x3c030600  lui         $v1, 0x600
    ctx->pc = 0x12d2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1536 << 16));
label_12d2b8:
    // 0x12d2b8: 0x3464ff80  ori         $a0, $v1, 0xFF80
    ctx->pc = 0x12d2b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65408);
label_12d2bc:
    // 0x12d2bc: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x12d2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_12d2c0:
    // 0x12d2c0: 0xc0684d8  jal         func_1A1360
label_12d2c4:
    if (ctx->pc == 0x12D2C4u) {
        ctx->pc = 0x12D2C8u;
        goto label_12d2c8;
    }
    ctx->pc = 0x12D2C0u;
    SET_GPR_U32(ctx, 31, 0x12D2C8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x12D2C0u, 0x12D2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D2C8u;
label_12d2c8:
    // 0x12d2c8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x12d2c8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12d2cc:
    // 0x12d2cc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x12d2ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12d2d0:
    // 0x12d2d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12d2d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12d2d4:
    // 0x12d2d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12d2d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_12d2d8:
    // 0x12d2d8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x12d2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_12d2dc:
    // 0x12d2dc: 0x3e00008  jr          $ra
label_12d2e0:
    if (ctx->pc == 0x12D2E0u) {
        ctx->pc = 0x12D2E4u;
        goto label_fallthrough_0x12d2dc;
    }
    ctx->pc = 0x12D2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D2DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12d2dc:
    ctx->pc = 0x12D2E4u;
}
