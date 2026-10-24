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

// Function: Pl_r1_devil_sky_dash
// Address: 0x26ca10 - 0x26d6cc
void Pl_r1_devil_sky_dash_0x26ca10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_devil_sky_dash_0x26ca10");
#endif

    switch (ctx->pc) {
        case 0x26ca10u: goto label_26ca10;
        case 0x26ca14u: goto label_26ca14;
        case 0x26ca18u: goto label_26ca18;
        case 0x26ca1cu: goto label_26ca1c;
        case 0x26ca20u: goto label_26ca20;
        case 0x26ca24u: goto label_26ca24;
        case 0x26ca28u: goto label_26ca28;
        case 0x26ca2cu: goto label_26ca2c;
        case 0x26ca30u: goto label_26ca30;
        case 0x26ca34u: goto label_26ca34;
        case 0x26ca38u: goto label_26ca38;
        case 0x26ca3cu: goto label_26ca3c;
        case 0x26ca40u: goto label_26ca40;
        case 0x26ca44u: goto label_26ca44;
        case 0x26ca48u: goto label_26ca48;
        case 0x26ca4cu: goto label_26ca4c;
        case 0x26ca50u: goto label_26ca50;
        case 0x26ca54u: goto label_26ca54;
        case 0x26ca58u: goto label_26ca58;
        case 0x26ca5cu: goto label_26ca5c;
        case 0x26ca60u: goto label_26ca60;
        case 0x26ca64u: goto label_26ca64;
        case 0x26ca68u: goto label_26ca68;
        case 0x26ca6cu: goto label_26ca6c;
        case 0x26ca70u: goto label_26ca70;
        case 0x26ca74u: goto label_26ca74;
        case 0x26ca78u: goto label_26ca78;
        case 0x26ca7cu: goto label_26ca7c;
        case 0x26ca80u: goto label_26ca80;
        case 0x26ca84u: goto label_26ca84;
        case 0x26ca88u: goto label_26ca88;
        case 0x26ca8cu: goto label_26ca8c;
        case 0x26ca90u: goto label_26ca90;
        case 0x26ca94u: goto label_26ca94;
        case 0x26ca98u: goto label_26ca98;
        case 0x26ca9cu: goto label_26ca9c;
        case 0x26caa0u: goto label_26caa0;
        case 0x26caa4u: goto label_26caa4;
        case 0x26caa8u: goto label_26caa8;
        case 0x26caacu: goto label_26caac;
        case 0x26cab0u: goto label_26cab0;
        case 0x26cab4u: goto label_26cab4;
        case 0x26cab8u: goto label_26cab8;
        case 0x26cabcu: goto label_26cabc;
        case 0x26cac0u: goto label_26cac0;
        case 0x26cac4u: goto label_26cac4;
        case 0x26cac8u: goto label_26cac8;
        case 0x26caccu: goto label_26cacc;
        case 0x26cad0u: goto label_26cad0;
        case 0x26cad4u: goto label_26cad4;
        case 0x26cad8u: goto label_26cad8;
        case 0x26cadcu: goto label_26cadc;
        case 0x26cae0u: goto label_26cae0;
        case 0x26cae4u: goto label_26cae4;
        case 0x26cae8u: goto label_26cae8;
        case 0x26caecu: goto label_26caec;
        case 0x26caf0u: goto label_26caf0;
        case 0x26caf4u: goto label_26caf4;
        case 0x26caf8u: goto label_26caf8;
        case 0x26cafcu: goto label_26cafc;
        case 0x26cb00u: goto label_26cb00;
        case 0x26cb04u: goto label_26cb04;
        case 0x26cb08u: goto label_26cb08;
        case 0x26cb0cu: goto label_26cb0c;
        case 0x26cb10u: goto label_26cb10;
        case 0x26cb14u: goto label_26cb14;
        case 0x26cb18u: goto label_26cb18;
        case 0x26cb1cu: goto label_26cb1c;
        case 0x26cb20u: goto label_26cb20;
        case 0x26cb24u: goto label_26cb24;
        case 0x26cb28u: goto label_26cb28;
        case 0x26cb2cu: goto label_26cb2c;
        case 0x26cb30u: goto label_26cb30;
        case 0x26cb34u: goto label_26cb34;
        case 0x26cb38u: goto label_26cb38;
        case 0x26cb3cu: goto label_26cb3c;
        case 0x26cb40u: goto label_26cb40;
        case 0x26cb44u: goto label_26cb44;
        case 0x26cb48u: goto label_26cb48;
        case 0x26cb4cu: goto label_26cb4c;
        case 0x26cb50u: goto label_26cb50;
        case 0x26cb54u: goto label_26cb54;
        case 0x26cb58u: goto label_26cb58;
        case 0x26cb5cu: goto label_26cb5c;
        case 0x26cb60u: goto label_26cb60;
        case 0x26cb64u: goto label_26cb64;
        case 0x26cb68u: goto label_26cb68;
        case 0x26cb6cu: goto label_26cb6c;
        case 0x26cb70u: goto label_26cb70;
        case 0x26cb74u: goto label_26cb74;
        case 0x26cb78u: goto label_26cb78;
        case 0x26cb7cu: goto label_26cb7c;
        case 0x26cb80u: goto label_26cb80;
        case 0x26cb84u: goto label_26cb84;
        case 0x26cb88u: goto label_26cb88;
        case 0x26cb8cu: goto label_26cb8c;
        case 0x26cb90u: goto label_26cb90;
        case 0x26cb94u: goto label_26cb94;
        case 0x26cb98u: goto label_26cb98;
        case 0x26cb9cu: goto label_26cb9c;
        case 0x26cba0u: goto label_26cba0;
        case 0x26cba4u: goto label_26cba4;
        case 0x26cba8u: goto label_26cba8;
        case 0x26cbacu: goto label_26cbac;
        case 0x26cbb0u: goto label_26cbb0;
        case 0x26cbb4u: goto label_26cbb4;
        case 0x26cbb8u: goto label_26cbb8;
        case 0x26cbbcu: goto label_26cbbc;
        case 0x26cbc0u: goto label_26cbc0;
        case 0x26cbc4u: goto label_26cbc4;
        case 0x26cbc8u: goto label_26cbc8;
        case 0x26cbccu: goto label_26cbcc;
        case 0x26cbd0u: goto label_26cbd0;
        case 0x26cbd4u: goto label_26cbd4;
        case 0x26cbd8u: goto label_26cbd8;
        case 0x26cbdcu: goto label_26cbdc;
        case 0x26cbe0u: goto label_26cbe0;
        case 0x26cbe4u: goto label_26cbe4;
        case 0x26cbe8u: goto label_26cbe8;
        case 0x26cbecu: goto label_26cbec;
        case 0x26cbf0u: goto label_26cbf0;
        case 0x26cbf4u: goto label_26cbf4;
        case 0x26cbf8u: goto label_26cbf8;
        case 0x26cbfcu: goto label_26cbfc;
        case 0x26cc00u: goto label_26cc00;
        case 0x26cc04u: goto label_26cc04;
        case 0x26cc08u: goto label_26cc08;
        case 0x26cc0cu: goto label_26cc0c;
        case 0x26cc10u: goto label_26cc10;
        case 0x26cc14u: goto label_26cc14;
        case 0x26cc18u: goto label_26cc18;
        case 0x26cc1cu: goto label_26cc1c;
        case 0x26cc20u: goto label_26cc20;
        case 0x26cc24u: goto label_26cc24;
        case 0x26cc28u: goto label_26cc28;
        case 0x26cc2cu: goto label_26cc2c;
        case 0x26cc30u: goto label_26cc30;
        case 0x26cc34u: goto label_26cc34;
        case 0x26cc38u: goto label_26cc38;
        case 0x26cc3cu: goto label_26cc3c;
        case 0x26cc40u: goto label_26cc40;
        case 0x26cc44u: goto label_26cc44;
        case 0x26cc48u: goto label_26cc48;
        case 0x26cc4cu: goto label_26cc4c;
        case 0x26cc50u: goto label_26cc50;
        case 0x26cc54u: goto label_26cc54;
        case 0x26cc58u: goto label_26cc58;
        case 0x26cc5cu: goto label_26cc5c;
        case 0x26cc60u: goto label_26cc60;
        case 0x26cc64u: goto label_26cc64;
        case 0x26cc68u: goto label_26cc68;
        case 0x26cc6cu: goto label_26cc6c;
        case 0x26cc70u: goto label_26cc70;
        case 0x26cc74u: goto label_26cc74;
        case 0x26cc78u: goto label_26cc78;
        case 0x26cc7cu: goto label_26cc7c;
        case 0x26cc80u: goto label_26cc80;
        case 0x26cc84u: goto label_26cc84;
        case 0x26cc88u: goto label_26cc88;
        case 0x26cc8cu: goto label_26cc8c;
        case 0x26cc90u: goto label_26cc90;
        case 0x26cc94u: goto label_26cc94;
        case 0x26cc98u: goto label_26cc98;
        case 0x26cc9cu: goto label_26cc9c;
        case 0x26cca0u: goto label_26cca0;
        case 0x26cca4u: goto label_26cca4;
        case 0x26cca8u: goto label_26cca8;
        case 0x26ccacu: goto label_26ccac;
        case 0x26ccb0u: goto label_26ccb0;
        case 0x26ccb4u: goto label_26ccb4;
        case 0x26ccb8u: goto label_26ccb8;
        case 0x26ccbcu: goto label_26ccbc;
        case 0x26ccc0u: goto label_26ccc0;
        case 0x26ccc4u: goto label_26ccc4;
        case 0x26ccc8u: goto label_26ccc8;
        case 0x26ccccu: goto label_26cccc;
        case 0x26ccd0u: goto label_26ccd0;
        case 0x26ccd4u: goto label_26ccd4;
        case 0x26ccd8u: goto label_26ccd8;
        case 0x26ccdcu: goto label_26ccdc;
        case 0x26cce0u: goto label_26cce0;
        case 0x26cce4u: goto label_26cce4;
        case 0x26cce8u: goto label_26cce8;
        case 0x26ccecu: goto label_26ccec;
        case 0x26ccf0u: goto label_26ccf0;
        case 0x26ccf4u: goto label_26ccf4;
        case 0x26ccf8u: goto label_26ccf8;
        case 0x26ccfcu: goto label_26ccfc;
        case 0x26cd00u: goto label_26cd00;
        case 0x26cd04u: goto label_26cd04;
        case 0x26cd08u: goto label_26cd08;
        case 0x26cd0cu: goto label_26cd0c;
        case 0x26cd10u: goto label_26cd10;
        case 0x26cd14u: goto label_26cd14;
        case 0x26cd18u: goto label_26cd18;
        case 0x26cd1cu: goto label_26cd1c;
        case 0x26cd20u: goto label_26cd20;
        case 0x26cd24u: goto label_26cd24;
        case 0x26cd28u: goto label_26cd28;
        case 0x26cd2cu: goto label_26cd2c;
        case 0x26cd30u: goto label_26cd30;
        case 0x26cd34u: goto label_26cd34;
        case 0x26cd38u: goto label_26cd38;
        case 0x26cd3cu: goto label_26cd3c;
        case 0x26cd40u: goto label_26cd40;
        case 0x26cd44u: goto label_26cd44;
        case 0x26cd48u: goto label_26cd48;
        case 0x26cd4cu: goto label_26cd4c;
        case 0x26cd50u: goto label_26cd50;
        case 0x26cd54u: goto label_26cd54;
        case 0x26cd58u: goto label_26cd58;
        case 0x26cd5cu: goto label_26cd5c;
        case 0x26cd60u: goto label_26cd60;
        case 0x26cd64u: goto label_26cd64;
        case 0x26cd68u: goto label_26cd68;
        case 0x26cd6cu: goto label_26cd6c;
        case 0x26cd70u: goto label_26cd70;
        case 0x26cd74u: goto label_26cd74;
        case 0x26cd78u: goto label_26cd78;
        case 0x26cd7cu: goto label_26cd7c;
        case 0x26cd80u: goto label_26cd80;
        case 0x26cd84u: goto label_26cd84;
        case 0x26cd88u: goto label_26cd88;
        case 0x26cd8cu: goto label_26cd8c;
        case 0x26cd90u: goto label_26cd90;
        case 0x26cd94u: goto label_26cd94;
        case 0x26cd98u: goto label_26cd98;
        case 0x26cd9cu: goto label_26cd9c;
        case 0x26cda0u: goto label_26cda0;
        case 0x26cda4u: goto label_26cda4;
        case 0x26cda8u: goto label_26cda8;
        case 0x26cdacu: goto label_26cdac;
        case 0x26cdb0u: goto label_26cdb0;
        case 0x26cdb4u: goto label_26cdb4;
        case 0x26cdb8u: goto label_26cdb8;
        case 0x26cdbcu: goto label_26cdbc;
        case 0x26cdc0u: goto label_26cdc0;
        case 0x26cdc4u: goto label_26cdc4;
        case 0x26cdc8u: goto label_26cdc8;
        case 0x26cdccu: goto label_26cdcc;
        case 0x26cdd0u: goto label_26cdd0;
        case 0x26cdd4u: goto label_26cdd4;
        case 0x26cdd8u: goto label_26cdd8;
        case 0x26cddcu: goto label_26cddc;
        case 0x26cde0u: goto label_26cde0;
        case 0x26cde4u: goto label_26cde4;
        case 0x26cde8u: goto label_26cde8;
        case 0x26cdecu: goto label_26cdec;
        case 0x26cdf0u: goto label_26cdf0;
        case 0x26cdf4u: goto label_26cdf4;
        case 0x26cdf8u: goto label_26cdf8;
        case 0x26cdfcu: goto label_26cdfc;
        case 0x26ce00u: goto label_26ce00;
        case 0x26ce04u: goto label_26ce04;
        case 0x26ce08u: goto label_26ce08;
        case 0x26ce0cu: goto label_26ce0c;
        case 0x26ce10u: goto label_26ce10;
        case 0x26ce14u: goto label_26ce14;
        case 0x26ce18u: goto label_26ce18;
        case 0x26ce1cu: goto label_26ce1c;
        case 0x26ce20u: goto label_26ce20;
        case 0x26ce24u: goto label_26ce24;
        case 0x26ce28u: goto label_26ce28;
        case 0x26ce2cu: goto label_26ce2c;
        case 0x26ce30u: goto label_26ce30;
        case 0x26ce34u: goto label_26ce34;
        case 0x26ce38u: goto label_26ce38;
        case 0x26ce3cu: goto label_26ce3c;
        case 0x26ce40u: goto label_26ce40;
        case 0x26ce44u: goto label_26ce44;
        case 0x26ce48u: goto label_26ce48;
        case 0x26ce4cu: goto label_26ce4c;
        case 0x26ce50u: goto label_26ce50;
        case 0x26ce54u: goto label_26ce54;
        case 0x26ce58u: goto label_26ce58;
        case 0x26ce5cu: goto label_26ce5c;
        case 0x26ce60u: goto label_26ce60;
        case 0x26ce64u: goto label_26ce64;
        case 0x26ce68u: goto label_26ce68;
        case 0x26ce6cu: goto label_26ce6c;
        case 0x26ce70u: goto label_26ce70;
        case 0x26ce74u: goto label_26ce74;
        case 0x26ce78u: goto label_26ce78;
        case 0x26ce7cu: goto label_26ce7c;
        case 0x26ce80u: goto label_26ce80;
        case 0x26ce84u: goto label_26ce84;
        case 0x26ce88u: goto label_26ce88;
        case 0x26ce8cu: goto label_26ce8c;
        case 0x26ce90u: goto label_26ce90;
        case 0x26ce94u: goto label_26ce94;
        case 0x26ce98u: goto label_26ce98;
        case 0x26ce9cu: goto label_26ce9c;
        case 0x26cea0u: goto label_26cea0;
        case 0x26cea4u: goto label_26cea4;
        case 0x26cea8u: goto label_26cea8;
        case 0x26ceacu: goto label_26ceac;
        case 0x26ceb0u: goto label_26ceb0;
        case 0x26ceb4u: goto label_26ceb4;
        case 0x26ceb8u: goto label_26ceb8;
        case 0x26cebcu: goto label_26cebc;
        case 0x26cec0u: goto label_26cec0;
        case 0x26cec4u: goto label_26cec4;
        case 0x26cec8u: goto label_26cec8;
        case 0x26ceccu: goto label_26cecc;
        case 0x26ced0u: goto label_26ced0;
        case 0x26ced4u: goto label_26ced4;
        case 0x26ced8u: goto label_26ced8;
        case 0x26cedcu: goto label_26cedc;
        case 0x26cee0u: goto label_26cee0;
        case 0x26cee4u: goto label_26cee4;
        case 0x26cee8u: goto label_26cee8;
        case 0x26ceecu: goto label_26ceec;
        case 0x26cef0u: goto label_26cef0;
        case 0x26cef4u: goto label_26cef4;
        case 0x26cef8u: goto label_26cef8;
        case 0x26cefcu: goto label_26cefc;
        case 0x26cf00u: goto label_26cf00;
        case 0x26cf04u: goto label_26cf04;
        case 0x26cf08u: goto label_26cf08;
        case 0x26cf0cu: goto label_26cf0c;
        case 0x26cf10u: goto label_26cf10;
        case 0x26cf14u: goto label_26cf14;
        case 0x26cf18u: goto label_26cf18;
        case 0x26cf1cu: goto label_26cf1c;
        case 0x26cf20u: goto label_26cf20;
        case 0x26cf24u: goto label_26cf24;
        case 0x26cf28u: goto label_26cf28;
        case 0x26cf2cu: goto label_26cf2c;
        case 0x26cf30u: goto label_26cf30;
        case 0x26cf34u: goto label_26cf34;
        case 0x26cf38u: goto label_26cf38;
        case 0x26cf3cu: goto label_26cf3c;
        case 0x26cf40u: goto label_26cf40;
        case 0x26cf44u: goto label_26cf44;
        case 0x26cf48u: goto label_26cf48;
        case 0x26cf4cu: goto label_26cf4c;
        case 0x26cf50u: goto label_26cf50;
        case 0x26cf54u: goto label_26cf54;
        case 0x26cf58u: goto label_26cf58;
        case 0x26cf5cu: goto label_26cf5c;
        case 0x26cf60u: goto label_26cf60;
        case 0x26cf64u: goto label_26cf64;
        case 0x26cf68u: goto label_26cf68;
        case 0x26cf6cu: goto label_26cf6c;
        case 0x26cf70u: goto label_26cf70;
        case 0x26cf74u: goto label_26cf74;
        case 0x26cf78u: goto label_26cf78;
        case 0x26cf7cu: goto label_26cf7c;
        case 0x26cf80u: goto label_26cf80;
        case 0x26cf84u: goto label_26cf84;
        case 0x26cf88u: goto label_26cf88;
        case 0x26cf8cu: goto label_26cf8c;
        case 0x26cf90u: goto label_26cf90;
        case 0x26cf94u: goto label_26cf94;
        case 0x26cf98u: goto label_26cf98;
        case 0x26cf9cu: goto label_26cf9c;
        case 0x26cfa0u: goto label_26cfa0;
        case 0x26cfa4u: goto label_26cfa4;
        case 0x26cfa8u: goto label_26cfa8;
        case 0x26cfacu: goto label_26cfac;
        case 0x26cfb0u: goto label_26cfb0;
        case 0x26cfb4u: goto label_26cfb4;
        case 0x26cfb8u: goto label_26cfb8;
        case 0x26cfbcu: goto label_26cfbc;
        case 0x26cfc0u: goto label_26cfc0;
        case 0x26cfc4u: goto label_26cfc4;
        case 0x26cfc8u: goto label_26cfc8;
        case 0x26cfccu: goto label_26cfcc;
        case 0x26cfd0u: goto label_26cfd0;
        case 0x26cfd4u: goto label_26cfd4;
        case 0x26cfd8u: goto label_26cfd8;
        case 0x26cfdcu: goto label_26cfdc;
        case 0x26cfe0u: goto label_26cfe0;
        case 0x26cfe4u: goto label_26cfe4;
        case 0x26cfe8u: goto label_26cfe8;
        case 0x26cfecu: goto label_26cfec;
        case 0x26cff0u: goto label_26cff0;
        case 0x26cff4u: goto label_26cff4;
        case 0x26cff8u: goto label_26cff8;
        case 0x26cffcu: goto label_26cffc;
        case 0x26d000u: goto label_26d000;
        case 0x26d004u: goto label_26d004;
        case 0x26d008u: goto label_26d008;
        case 0x26d00cu: goto label_26d00c;
        case 0x26d010u: goto label_26d010;
        case 0x26d014u: goto label_26d014;
        case 0x26d018u: goto label_26d018;
        case 0x26d01cu: goto label_26d01c;
        case 0x26d020u: goto label_26d020;
        case 0x26d024u: goto label_26d024;
        case 0x26d028u: goto label_26d028;
        case 0x26d02cu: goto label_26d02c;
        case 0x26d030u: goto label_26d030;
        case 0x26d034u: goto label_26d034;
        case 0x26d038u: goto label_26d038;
        case 0x26d03cu: goto label_26d03c;
        case 0x26d040u: goto label_26d040;
        case 0x26d044u: goto label_26d044;
        case 0x26d048u: goto label_26d048;
        case 0x26d04cu: goto label_26d04c;
        case 0x26d050u: goto label_26d050;
        case 0x26d054u: goto label_26d054;
        case 0x26d058u: goto label_26d058;
        case 0x26d05cu: goto label_26d05c;
        case 0x26d060u: goto label_26d060;
        case 0x26d064u: goto label_26d064;
        case 0x26d068u: goto label_26d068;
        case 0x26d06cu: goto label_26d06c;
        case 0x26d070u: goto label_26d070;
        case 0x26d074u: goto label_26d074;
        case 0x26d078u: goto label_26d078;
        case 0x26d07cu: goto label_26d07c;
        case 0x26d080u: goto label_26d080;
        case 0x26d084u: goto label_26d084;
        case 0x26d088u: goto label_26d088;
        case 0x26d08cu: goto label_26d08c;
        case 0x26d090u: goto label_26d090;
        case 0x26d094u: goto label_26d094;
        case 0x26d098u: goto label_26d098;
        case 0x26d09cu: goto label_26d09c;
        case 0x26d0a0u: goto label_26d0a0;
        case 0x26d0a4u: goto label_26d0a4;
        case 0x26d0a8u: goto label_26d0a8;
        case 0x26d0acu: goto label_26d0ac;
        case 0x26d0b0u: goto label_26d0b0;
        case 0x26d0b4u: goto label_26d0b4;
        case 0x26d0b8u: goto label_26d0b8;
        case 0x26d0bcu: goto label_26d0bc;
        case 0x26d0c0u: goto label_26d0c0;
        case 0x26d0c4u: goto label_26d0c4;
        case 0x26d0c8u: goto label_26d0c8;
        case 0x26d0ccu: goto label_26d0cc;
        case 0x26d0d0u: goto label_26d0d0;
        case 0x26d0d4u: goto label_26d0d4;
        case 0x26d0d8u: goto label_26d0d8;
        case 0x26d0dcu: goto label_26d0dc;
        case 0x26d0e0u: goto label_26d0e0;
        case 0x26d0e4u: goto label_26d0e4;
        case 0x26d0e8u: goto label_26d0e8;
        case 0x26d0ecu: goto label_26d0ec;
        case 0x26d0f0u: goto label_26d0f0;
        case 0x26d0f4u: goto label_26d0f4;
        case 0x26d0f8u: goto label_26d0f8;
        case 0x26d0fcu: goto label_26d0fc;
        case 0x26d100u: goto label_26d100;
        case 0x26d104u: goto label_26d104;
        case 0x26d108u: goto label_26d108;
        case 0x26d10cu: goto label_26d10c;
        case 0x26d110u: goto label_26d110;
        case 0x26d114u: goto label_26d114;
        case 0x26d118u: goto label_26d118;
        case 0x26d11cu: goto label_26d11c;
        case 0x26d120u: goto label_26d120;
        case 0x26d124u: goto label_26d124;
        case 0x26d128u: goto label_26d128;
        case 0x26d12cu: goto label_26d12c;
        case 0x26d130u: goto label_26d130;
        case 0x26d134u: goto label_26d134;
        case 0x26d138u: goto label_26d138;
        case 0x26d13cu: goto label_26d13c;
        case 0x26d140u: goto label_26d140;
        case 0x26d144u: goto label_26d144;
        case 0x26d148u: goto label_26d148;
        case 0x26d14cu: goto label_26d14c;
        case 0x26d150u: goto label_26d150;
        case 0x26d154u: goto label_26d154;
        case 0x26d158u: goto label_26d158;
        case 0x26d15cu: goto label_26d15c;
        case 0x26d160u: goto label_26d160;
        case 0x26d164u: goto label_26d164;
        case 0x26d168u: goto label_26d168;
        case 0x26d16cu: goto label_26d16c;
        case 0x26d170u: goto label_26d170;
        case 0x26d174u: goto label_26d174;
        case 0x26d178u: goto label_26d178;
        case 0x26d17cu: goto label_26d17c;
        case 0x26d180u: goto label_26d180;
        case 0x26d184u: goto label_26d184;
        case 0x26d188u: goto label_26d188;
        case 0x26d18cu: goto label_26d18c;
        case 0x26d190u: goto label_26d190;
        case 0x26d194u: goto label_26d194;
        case 0x26d198u: goto label_26d198;
        case 0x26d19cu: goto label_26d19c;
        case 0x26d1a0u: goto label_26d1a0;
        case 0x26d1a4u: goto label_26d1a4;
        case 0x26d1a8u: goto label_26d1a8;
        case 0x26d1acu: goto label_26d1ac;
        case 0x26d1b0u: goto label_26d1b0;
        case 0x26d1b4u: goto label_26d1b4;
        case 0x26d1b8u: goto label_26d1b8;
        case 0x26d1bcu: goto label_26d1bc;
        case 0x26d1c0u: goto label_26d1c0;
        case 0x26d1c4u: goto label_26d1c4;
        case 0x26d1c8u: goto label_26d1c8;
        case 0x26d1ccu: goto label_26d1cc;
        case 0x26d1d0u: goto label_26d1d0;
        case 0x26d1d4u: goto label_26d1d4;
        case 0x26d1d8u: goto label_26d1d8;
        case 0x26d1dcu: goto label_26d1dc;
        case 0x26d1e0u: goto label_26d1e0;
        case 0x26d1e4u: goto label_26d1e4;
        case 0x26d1e8u: goto label_26d1e8;
        case 0x26d1ecu: goto label_26d1ec;
        case 0x26d1f0u: goto label_26d1f0;
        case 0x26d1f4u: goto label_26d1f4;
        case 0x26d1f8u: goto label_26d1f8;
        case 0x26d1fcu: goto label_26d1fc;
        case 0x26d200u: goto label_26d200;
        case 0x26d204u: goto label_26d204;
        case 0x26d208u: goto label_26d208;
        case 0x26d20cu: goto label_26d20c;
        case 0x26d210u: goto label_26d210;
        case 0x26d214u: goto label_26d214;
        case 0x26d218u: goto label_26d218;
        case 0x26d21cu: goto label_26d21c;
        case 0x26d220u: goto label_26d220;
        case 0x26d224u: goto label_26d224;
        case 0x26d228u: goto label_26d228;
        case 0x26d22cu: goto label_26d22c;
        case 0x26d230u: goto label_26d230;
        case 0x26d234u: goto label_26d234;
        case 0x26d238u: goto label_26d238;
        case 0x26d23cu: goto label_26d23c;
        case 0x26d240u: goto label_26d240;
        case 0x26d244u: goto label_26d244;
        case 0x26d248u: goto label_26d248;
        case 0x26d24cu: goto label_26d24c;
        case 0x26d250u: goto label_26d250;
        case 0x26d254u: goto label_26d254;
        case 0x26d258u: goto label_26d258;
        case 0x26d25cu: goto label_26d25c;
        case 0x26d260u: goto label_26d260;
        case 0x26d264u: goto label_26d264;
        case 0x26d268u: goto label_26d268;
        case 0x26d26cu: goto label_26d26c;
        case 0x26d270u: goto label_26d270;
        case 0x26d274u: goto label_26d274;
        case 0x26d278u: goto label_26d278;
        case 0x26d27cu: goto label_26d27c;
        case 0x26d280u: goto label_26d280;
        case 0x26d284u: goto label_26d284;
        case 0x26d288u: goto label_26d288;
        case 0x26d28cu: goto label_26d28c;
        case 0x26d290u: goto label_26d290;
        case 0x26d294u: goto label_26d294;
        case 0x26d298u: goto label_26d298;
        case 0x26d29cu: goto label_26d29c;
        case 0x26d2a0u: goto label_26d2a0;
        case 0x26d2a4u: goto label_26d2a4;
        case 0x26d2a8u: goto label_26d2a8;
        case 0x26d2acu: goto label_26d2ac;
        case 0x26d2b0u: goto label_26d2b0;
        case 0x26d2b4u: goto label_26d2b4;
        case 0x26d2b8u: goto label_26d2b8;
        case 0x26d2bcu: goto label_26d2bc;
        case 0x26d2c0u: goto label_26d2c0;
        case 0x26d2c4u: goto label_26d2c4;
        case 0x26d2c8u: goto label_26d2c8;
        case 0x26d2ccu: goto label_26d2cc;
        case 0x26d2d0u: goto label_26d2d0;
        case 0x26d2d4u: goto label_26d2d4;
        case 0x26d2d8u: goto label_26d2d8;
        case 0x26d2dcu: goto label_26d2dc;
        case 0x26d2e0u: goto label_26d2e0;
        case 0x26d2e4u: goto label_26d2e4;
        case 0x26d2e8u: goto label_26d2e8;
        case 0x26d2ecu: goto label_26d2ec;
        case 0x26d2f0u: goto label_26d2f0;
        case 0x26d2f4u: goto label_26d2f4;
        case 0x26d2f8u: goto label_26d2f8;
        case 0x26d2fcu: goto label_26d2fc;
        case 0x26d300u: goto label_26d300;
        case 0x26d304u: goto label_26d304;
        case 0x26d308u: goto label_26d308;
        case 0x26d30cu: goto label_26d30c;
        case 0x26d310u: goto label_26d310;
        case 0x26d314u: goto label_26d314;
        case 0x26d318u: goto label_26d318;
        case 0x26d31cu: goto label_26d31c;
        case 0x26d320u: goto label_26d320;
        case 0x26d324u: goto label_26d324;
        case 0x26d328u: goto label_26d328;
        case 0x26d32cu: goto label_26d32c;
        case 0x26d330u: goto label_26d330;
        case 0x26d334u: goto label_26d334;
        case 0x26d338u: goto label_26d338;
        case 0x26d33cu: goto label_26d33c;
        case 0x26d340u: goto label_26d340;
        case 0x26d344u: goto label_26d344;
        case 0x26d348u: goto label_26d348;
        case 0x26d34cu: goto label_26d34c;
        case 0x26d350u: goto label_26d350;
        case 0x26d354u: goto label_26d354;
        case 0x26d358u: goto label_26d358;
        case 0x26d35cu: goto label_26d35c;
        case 0x26d360u: goto label_26d360;
        case 0x26d364u: goto label_26d364;
        case 0x26d368u: goto label_26d368;
        case 0x26d36cu: goto label_26d36c;
        case 0x26d370u: goto label_26d370;
        case 0x26d374u: goto label_26d374;
        case 0x26d378u: goto label_26d378;
        case 0x26d37cu: goto label_26d37c;
        case 0x26d380u: goto label_26d380;
        case 0x26d384u: goto label_26d384;
        case 0x26d388u: goto label_26d388;
        case 0x26d38cu: goto label_26d38c;
        case 0x26d390u: goto label_26d390;
        case 0x26d394u: goto label_26d394;
        case 0x26d398u: goto label_26d398;
        case 0x26d39cu: goto label_26d39c;
        case 0x26d3a0u: goto label_26d3a0;
        case 0x26d3a4u: goto label_26d3a4;
        case 0x26d3a8u: goto label_26d3a8;
        case 0x26d3acu: goto label_26d3ac;
        case 0x26d3b0u: goto label_26d3b0;
        case 0x26d3b4u: goto label_26d3b4;
        case 0x26d3b8u: goto label_26d3b8;
        case 0x26d3bcu: goto label_26d3bc;
        case 0x26d3c0u: goto label_26d3c0;
        case 0x26d3c4u: goto label_26d3c4;
        case 0x26d3c8u: goto label_26d3c8;
        case 0x26d3ccu: goto label_26d3cc;
        case 0x26d3d0u: goto label_26d3d0;
        case 0x26d3d4u: goto label_26d3d4;
        case 0x26d3d8u: goto label_26d3d8;
        case 0x26d3dcu: goto label_26d3dc;
        case 0x26d3e0u: goto label_26d3e0;
        case 0x26d3e4u: goto label_26d3e4;
        case 0x26d3e8u: goto label_26d3e8;
        case 0x26d3ecu: goto label_26d3ec;
        case 0x26d3f0u: goto label_26d3f0;
        case 0x26d3f4u: goto label_26d3f4;
        case 0x26d3f8u: goto label_26d3f8;
        case 0x26d3fcu: goto label_26d3fc;
        case 0x26d400u: goto label_26d400;
        case 0x26d404u: goto label_26d404;
        case 0x26d408u: goto label_26d408;
        case 0x26d40cu: goto label_26d40c;
        case 0x26d410u: goto label_26d410;
        case 0x26d414u: goto label_26d414;
        case 0x26d418u: goto label_26d418;
        case 0x26d41cu: goto label_26d41c;
        case 0x26d420u: goto label_26d420;
        case 0x26d424u: goto label_26d424;
        case 0x26d428u: goto label_26d428;
        case 0x26d42cu: goto label_26d42c;
        case 0x26d430u: goto label_26d430;
        case 0x26d434u: goto label_26d434;
        case 0x26d438u: goto label_26d438;
        case 0x26d43cu: goto label_26d43c;
        case 0x26d440u: goto label_26d440;
        case 0x26d444u: goto label_26d444;
        case 0x26d448u: goto label_26d448;
        case 0x26d44cu: goto label_26d44c;
        case 0x26d450u: goto label_26d450;
        case 0x26d454u: goto label_26d454;
        case 0x26d458u: goto label_26d458;
        case 0x26d45cu: goto label_26d45c;
        case 0x26d460u: goto label_26d460;
        case 0x26d464u: goto label_26d464;
        case 0x26d468u: goto label_26d468;
        case 0x26d46cu: goto label_26d46c;
        case 0x26d470u: goto label_26d470;
        case 0x26d474u: goto label_26d474;
        case 0x26d478u: goto label_26d478;
        case 0x26d47cu: goto label_26d47c;
        case 0x26d480u: goto label_26d480;
        case 0x26d484u: goto label_26d484;
        case 0x26d488u: goto label_26d488;
        case 0x26d48cu: goto label_26d48c;
        case 0x26d490u: goto label_26d490;
        case 0x26d494u: goto label_26d494;
        case 0x26d498u: goto label_26d498;
        case 0x26d49cu: goto label_26d49c;
        case 0x26d4a0u: goto label_26d4a0;
        case 0x26d4a4u: goto label_26d4a4;
        case 0x26d4a8u: goto label_26d4a8;
        case 0x26d4acu: goto label_26d4ac;
        case 0x26d4b0u: goto label_26d4b0;
        case 0x26d4b4u: goto label_26d4b4;
        case 0x26d4b8u: goto label_26d4b8;
        case 0x26d4bcu: goto label_26d4bc;
        case 0x26d4c0u: goto label_26d4c0;
        case 0x26d4c4u: goto label_26d4c4;
        case 0x26d4c8u: goto label_26d4c8;
        case 0x26d4ccu: goto label_26d4cc;
        case 0x26d4d0u: goto label_26d4d0;
        case 0x26d4d4u: goto label_26d4d4;
        case 0x26d4d8u: goto label_26d4d8;
        case 0x26d4dcu: goto label_26d4dc;
        case 0x26d4e0u: goto label_26d4e0;
        case 0x26d4e4u: goto label_26d4e4;
        case 0x26d4e8u: goto label_26d4e8;
        case 0x26d4ecu: goto label_26d4ec;
        case 0x26d4f0u: goto label_26d4f0;
        case 0x26d4f4u: goto label_26d4f4;
        case 0x26d4f8u: goto label_26d4f8;
        case 0x26d4fcu: goto label_26d4fc;
        case 0x26d500u: goto label_26d500;
        case 0x26d504u: goto label_26d504;
        case 0x26d508u: goto label_26d508;
        case 0x26d50cu: goto label_26d50c;
        case 0x26d510u: goto label_26d510;
        case 0x26d514u: goto label_26d514;
        case 0x26d518u: goto label_26d518;
        case 0x26d51cu: goto label_26d51c;
        case 0x26d520u: goto label_26d520;
        case 0x26d524u: goto label_26d524;
        case 0x26d528u: goto label_26d528;
        case 0x26d52cu: goto label_26d52c;
        case 0x26d530u: goto label_26d530;
        case 0x26d534u: goto label_26d534;
        case 0x26d538u: goto label_26d538;
        case 0x26d53cu: goto label_26d53c;
        case 0x26d540u: goto label_26d540;
        case 0x26d544u: goto label_26d544;
        case 0x26d548u: goto label_26d548;
        case 0x26d54cu: goto label_26d54c;
        case 0x26d550u: goto label_26d550;
        case 0x26d554u: goto label_26d554;
        case 0x26d558u: goto label_26d558;
        case 0x26d55cu: goto label_26d55c;
        case 0x26d560u: goto label_26d560;
        case 0x26d564u: goto label_26d564;
        case 0x26d568u: goto label_26d568;
        case 0x26d56cu: goto label_26d56c;
        case 0x26d570u: goto label_26d570;
        case 0x26d574u: goto label_26d574;
        case 0x26d578u: goto label_26d578;
        case 0x26d57cu: goto label_26d57c;
        case 0x26d580u: goto label_26d580;
        case 0x26d584u: goto label_26d584;
        case 0x26d588u: goto label_26d588;
        case 0x26d58cu: goto label_26d58c;
        case 0x26d590u: goto label_26d590;
        case 0x26d594u: goto label_26d594;
        case 0x26d598u: goto label_26d598;
        case 0x26d59cu: goto label_26d59c;
        case 0x26d5a0u: goto label_26d5a0;
        case 0x26d5a4u: goto label_26d5a4;
        case 0x26d5a8u: goto label_26d5a8;
        case 0x26d5acu: goto label_26d5ac;
        case 0x26d5b0u: goto label_26d5b0;
        case 0x26d5b4u: goto label_26d5b4;
        case 0x26d5b8u: goto label_26d5b8;
        case 0x26d5bcu: goto label_26d5bc;
        case 0x26d5c0u: goto label_26d5c0;
        case 0x26d5c4u: goto label_26d5c4;
        case 0x26d5c8u: goto label_26d5c8;
        case 0x26d5ccu: goto label_26d5cc;
        case 0x26d5d0u: goto label_26d5d0;
        case 0x26d5d4u: goto label_26d5d4;
        case 0x26d5d8u: goto label_26d5d8;
        case 0x26d5dcu: goto label_26d5dc;
        case 0x26d5e0u: goto label_26d5e0;
        case 0x26d5e4u: goto label_26d5e4;
        case 0x26d5e8u: goto label_26d5e8;
        case 0x26d5ecu: goto label_26d5ec;
        case 0x26d5f0u: goto label_26d5f0;
        case 0x26d5f4u: goto label_26d5f4;
        case 0x26d5f8u: goto label_26d5f8;
        case 0x26d5fcu: goto label_26d5fc;
        case 0x26d600u: goto label_26d600;
        case 0x26d604u: goto label_26d604;
        case 0x26d608u: goto label_26d608;
        case 0x26d60cu: goto label_26d60c;
        case 0x26d610u: goto label_26d610;
        case 0x26d614u: goto label_26d614;
        case 0x26d618u: goto label_26d618;
        case 0x26d61cu: goto label_26d61c;
        case 0x26d620u: goto label_26d620;
        case 0x26d624u: goto label_26d624;
        case 0x26d628u: goto label_26d628;
        case 0x26d62cu: goto label_26d62c;
        case 0x26d630u: goto label_26d630;
        case 0x26d634u: goto label_26d634;
        case 0x26d638u: goto label_26d638;
        case 0x26d63cu: goto label_26d63c;
        case 0x26d640u: goto label_26d640;
        case 0x26d644u: goto label_26d644;
        case 0x26d648u: goto label_26d648;
        case 0x26d64cu: goto label_26d64c;
        case 0x26d650u: goto label_26d650;
        case 0x26d654u: goto label_26d654;
        case 0x26d658u: goto label_26d658;
        case 0x26d65cu: goto label_26d65c;
        case 0x26d660u: goto label_26d660;
        case 0x26d664u: goto label_26d664;
        case 0x26d668u: goto label_26d668;
        case 0x26d66cu: goto label_26d66c;
        case 0x26d670u: goto label_26d670;
        case 0x26d674u: goto label_26d674;
        case 0x26d678u: goto label_26d678;
        case 0x26d67cu: goto label_26d67c;
        case 0x26d680u: goto label_26d680;
        case 0x26d684u: goto label_26d684;
        case 0x26d688u: goto label_26d688;
        case 0x26d68cu: goto label_26d68c;
        case 0x26d690u: goto label_26d690;
        case 0x26d694u: goto label_26d694;
        case 0x26d698u: goto label_26d698;
        case 0x26d69cu: goto label_26d69c;
        case 0x26d6a0u: goto label_26d6a0;
        case 0x26d6a4u: goto label_26d6a4;
        case 0x26d6a8u: goto label_26d6a8;
        case 0x26d6acu: goto label_26d6ac;
        case 0x26d6b0u: goto label_26d6b0;
        case 0x26d6b4u: goto label_26d6b4;
        case 0x26d6b8u: goto label_26d6b8;
        case 0x26d6bcu: goto label_26d6bc;
        case 0x26d6c0u: goto label_26d6c0;
        case 0x26d6c4u: goto label_26d6c4;
        case 0x26d6c8u: goto label_26d6c8;
        default: break;
    }

    ctx->pc = 0x26ca10u;

label_26ca10:
    // 0x26ca10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x26ca10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_26ca14:
    // 0x26ca14: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x26ca14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_26ca18:
    // 0x26ca18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26ca18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_26ca1c:
    // 0x26ca1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26ca1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_26ca20:
    // 0x26ca20: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x26ca20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_26ca24:
    // 0x26ca24: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x26ca24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_26ca28:
    // 0x26ca28: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x26ca28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_26ca2c:
    // 0x26ca2c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x26ca2cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_26ca30:
    // 0x26ca30: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26ca30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26ca34:
    // 0x26ca34: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x26ca34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_26ca38:
    // 0x26ca38: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x26ca38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_26ca3c:
    // 0x26ca3c: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x26ca3cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_26ca40:
    // 0x26ca40: 0x10200306  beqz        $at, . + 4 + (0x306 << 2)
label_26ca44:
    if (ctx->pc == 0x26CA44u) {
        ctx->pc = 0x26CA48u;
        goto label_26ca48;
    }
    ctx->pc = 0x26CA40u;
    {
        const bool branch_taken_0x26ca40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ca40) {
            ctx->pc = 0x26D65Cu;
            goto label_26d65c;
        }
    }
    ctx->pc = 0x26CA48u;
label_26ca48:
    // 0x26ca48: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x26ca48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_26ca4c:
    // 0x26ca4c: 0x24831500  addiu       $v1, $a0, 0x1500
    ctx->pc = 0x26ca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 5376));
label_26ca50:
    // 0x26ca50: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x26ca50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_26ca54:
    // 0x26ca54: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x26ca54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_26ca58:
    // 0x26ca58: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x26ca58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_26ca5c:
    // 0x26ca5c: 0x600008  jr          $v1
label_26ca60:
    if (ctx->pc == 0x26CA60u) {
        ctx->pc = 0x26CA64u;
        goto label_26ca64;
    }
    ctx->pc = 0x26CA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26CA5Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26CA64u;
label_26ca64:
    // 0x26ca64: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x26ca64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_26ca68:
    // 0x26ca68: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26ca68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26ca6c:
    // 0x26ca6c: 0xa04710a8  sb          $a3, 0x10A8($v0)
    ctx->pc = 0x26ca6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 7));
label_26ca70:
    // 0x26ca70: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26ca70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26ca74:
    // 0x26ca74: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26ca74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26ca78:
    // 0x26ca78: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26ca78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_26ca7c:
    // 0x26ca7c: 0x24060a64  addiu       $a2, $zero, 0xA64
    ctx->pc = 0x26ca7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2660));
label_26ca80:
    // 0x26ca80: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26ca80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26ca84:
    // 0x26ca84: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26ca84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_26ca88:
    // 0x26ca88: 0xc0965d0  jal         func_259740
label_26ca8c:
    if (ctx->pc == 0x26CA8Cu) {
        ctx->pc = 0x26CA90u;
        goto label_26ca90;
    }
    ctx->pc = 0x26CA88u;
    SET_GPR_U32(ctx, 31, 0x26CA90u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26CA88u, 0x26CA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CA90u;
label_26ca90:
    // 0x26ca90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26ca90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26ca94:
    // 0x26ca94: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26ca98:
    // 0x26ca98: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x26ca98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_26ca9c:
    // 0x26ca9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26ca9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26caa0:
    // 0x26caa0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26caa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26caa4:
    // 0x26caa4: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x26caa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
label_26caa8:
    // 0x26caa8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26caa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26caac:
    // 0x26caac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26caacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cab0:
    // 0x26cab0: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x26cab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_26cab4:
    // 0x26cab4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26cab4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26cab8:
    // 0x26cab8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cabc:
    // 0x26cabc: 0xe4401b58  swc1        $f0, 0x1B58($v0)
    ctx->pc = 0x26cabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7000), bits); }
label_26cac0:
    // 0x26cac0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26cac0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26cac4:
    // 0x26cac4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cac8:
    // 0x26cac8: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x26cac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
label_26cacc:
    // 0x26cacc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26caccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cad0:
    // 0x26cad0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x26cad0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_26cad4:
    // 0x26cad4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26cad8:
    // 0x26cad8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x26cad8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_26cadc:
    // 0x26cadc: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x26cadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
label_26cae0:
    // 0x26cae0: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x26cae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_26cae4:
    // 0x26cae4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x26cae4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_26cae8:
    // 0x26cae8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26caec:
    // 0x26caec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26caecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26caf0:
    // 0x26caf0: 0xc44c1b50  lwc1        $f12, 0x1B50($v0)
    ctx->pc = 0x26caf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26caf4:
    // 0x26caf4: 0xc46d1b58  lwc1        $f13, 0x1B58($v1)
    ctx->pc = 0x26caf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_26caf8:
    // 0x26caf8: 0xc058f50  jal         func_163D40
label_26cafc:
    if (ctx->pc == 0x26CAFCu) {
        ctx->pc = 0x26CB00u;
        goto label_26cb00;
    }
    ctx->pc = 0x26CAF8u;
    SET_GPR_U32(ctx, 31, 0x26CB00u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x26CAF8u, 0x26CB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CB00u;
label_26cb00:
    // 0x26cb00: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cb04:
    // 0x26cb04: 0xe4401b58  swc1        $f0, 0x1B58($v0)
    ctx->pc = 0x26cb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7000), bits); }
label_26cb08:
    // 0x26cb08: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26cb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cb0c:
    // 0x26cb0c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x26cb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26cb10:
    // 0x26cb10: 0xc096b40  jal         func_25AD00
label_26cb14:
    if (ctx->pc == 0x26CB14u) {
        ctx->pc = 0x26CB18u;
        goto label_26cb18;
    }
    ctx->pc = 0x26CB10u;
    SET_GPR_U32(ctx, 31, 0x26CB18u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26CB10u, 0x26CB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CB18u;
label_26cb18:
    // 0x26cb18: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26cb18u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26cb1c:
    // 0x26cb1c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26cb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cb20:
    // 0x26cb20: 0xc05cd34  jal         func_1734D0
label_26cb24:
    if (ctx->pc == 0x26CB24u) {
        ctx->pc = 0x26CB28u;
        goto label_26cb28;
    }
    ctx->pc = 0x26CB20u;
    SET_GPR_U32(ctx, 31, 0x26CB28u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x26CB20u, 0x26CB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CB28u;
label_26cb28:
    // 0x26cb28: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26cb28u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26cb2c:
    // 0x26cb2c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26cb2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26cb30:
    // 0x26cb30: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26cb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cb34:
    // 0x26cb34: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26cb34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26cb38:
    // 0x26cb38: 0xc0574f4  jal         func_15D3D0
label_26cb3c:
    if (ctx->pc == 0x26CB3Cu) {
        ctx->pc = 0x26CB40u;
        goto label_26cb40;
    }
    ctx->pc = 0x26CB38u;
    SET_GPR_U32(ctx, 31, 0x26CB40u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x26CB38u, 0x26CB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CB40u;
label_26cb40:
    // 0x26cb40: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26cb40u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26cb44:
    // 0x26cb44: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26cb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cb48:
    // 0x26cb48: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26cb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cb4c:
    // 0x26cb4c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x26cb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_26cb50:
    // 0x26cb50: 0x246512c0  addiu       $a1, $v1, 0x12C0
    ctx->pc = 0x26cb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
label_26cb54:
    // 0x26cb54: 0xc05cf7c  jal         func_173DF0
label_26cb58:
    if (ctx->pc == 0x26CB58u) {
        ctx->pc = 0x26CB5Cu;
        goto label_26cb5c;
    }
    ctx->pc = 0x26CB54u;
    SET_GPR_U32(ctx, 31, 0x26CB5Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x26CB54u, 0x26CB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CB5Cu;
label_26cb5c:
    // 0x26cb5c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x26cb5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_26cb60:
    // 0x26cb60: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x26cb60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
label_26cb64:
    // 0x26cb64: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x26cb64u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26cb68:
    // 0x26cb68: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x26cb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26cb6c:
    // 0x26cb6c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26cb6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26cb70:
    // 0x26cb70: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26cb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cb74:
    // 0x26cb74: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x26cb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26cb78:
    // 0x26cb78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26cb78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26cb7c:
    // 0x26cb7c: 0x0  nop
    ctx->pc = 0x26cb7cu;
    // NOP
label_26cb80:
    // 0x26cb80: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_26cb84:
    if (ctx->pc == 0x26CB84u) {
        ctx->pc = 0x26CB88u;
        goto label_26cb88;
    }
    ctx->pc = 0x26CB80u;
    {
        const bool branch_taken_0x26cb80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26cb80) {
            ctx->pc = 0x26CBA0u;
            goto label_26cba0;
        }
    }
    ctx->pc = 0x26CB88u;
label_26cb88:
    // 0x26cb88: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x26cb88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
label_26cb8c:
    // 0x26cb8c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x26cb8cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26cb90:
    // 0x26cb90: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x26cb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26cb94:
    // 0x26cb94: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26cb94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26cb98:
    // 0x26cb98: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26cb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cb9c:
    // 0x26cb9c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x26cb9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_26cba0:
    // 0x26cba0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26cba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cba4:
    // 0x26cba4: 0xc46c1b58  lwc1        $f12, 0x1B58($v1)
    ctx->pc = 0x26cba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26cba8:
    // 0x26cba8: 0xc057324  jal         func_15CC90
label_26cbac:
    if (ctx->pc == 0x26CBACu) {
        ctx->pc = 0x26CBB0u;
        goto label_26cbb0;
    }
    ctx->pc = 0x26CBA8u;
    SET_GPR_U32(ctx, 31, 0x26CBB0u);
    ctx->pc = 0x15CC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CC90u, 0x26CBA8u, 0x26CBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CBB0u;
label_26cbb0:
    // 0x26cbb0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26cbb0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26cbb4:
    // 0x26cbb4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26cbb4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26cbb8:
    // 0x26cbb8: 0xc097530  jal         func_25D4C0
label_26cbbc:
    if (ctx->pc == 0x26CBBCu) {
        ctx->pc = 0x26CBC0u;
        goto label_26cbc0;
    }
    ctx->pc = 0x26CBB8u;
    SET_GPR_U32(ctx, 31, 0x26CBC0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26CBB8u, 0x26CBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CBC0u;
label_26cbc0:
    // 0x26cbc0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26cbc0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26cbc4:
    // 0x26cbc4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26cbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cbc8:
    // 0x26cbc8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x26cbc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_26cbcc:
    // 0x26cbcc: 0x106002a3  beqz        $v1, . + 4 + (0x2A3 << 2)
label_26cbd0:
    if (ctx->pc == 0x26CBD0u) {
        ctx->pc = 0x26CBD4u;
        goto label_26cbd4;
    }
    ctx->pc = 0x26CBCCu;
    {
        const bool branch_taken_0x26cbcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cbcc) {
            ctx->pc = 0x26D65Cu;
            goto label_26d65c;
        }
    }
    ctx->pc = 0x26CBD4u;
label_26cbd4:
    // 0x26cbd4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x26cbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cbd8:
    // 0x26cbd8: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x26cbd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_26cbdc:
    // 0x26cbdc: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x26cbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_26cbe0:
    // 0x26cbe0: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x26cbe0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
label_26cbe4:
    // 0x26cbe4: 0x1000029d  b           . + 4 + (0x29D << 2)
label_26cbe8:
    if (ctx->pc == 0x26CBE8u) {
        ctx->pc = 0x26CBECu;
        goto label_26cbec;
    }
    ctx->pc = 0x26CBE4u;
    {
        const bool branch_taken_0x26cbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cbe4) {
            ctx->pc = 0x26D65Cu;
            goto label_26d65c;
        }
    }
    ctx->pc = 0x26CBECu;
label_26cbec:
    // 0x26cbec: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26cbecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cbf0:
    // 0x26cbf0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cbf4:
    // 0x26cbf4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26cbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_26cbf8:
    // 0x26cbf8: 0x24060065  addiu       $a2, $zero, 0x65
    ctx->pc = 0x26cbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_26cbfc:
    // 0x26cbfc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26cbfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26cc00:
    // 0x26cc00: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26cc00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_26cc04:
    // 0x26cc04: 0xc0965d0  jal         func_259740
label_26cc08:
    if (ctx->pc == 0x26CC08u) {
        ctx->pc = 0x26CC0Cu;
        goto label_26cc0c;
    }
    ctx->pc = 0x26CC04u;
    SET_GPR_U32(ctx, 31, 0x26CC0Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26CC04u, 0x26CC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CC0Cu;
label_26cc0c:
    // 0x26cc0c: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x26cc0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cc10:
    // 0x26cc10: 0x90e80002  lbu         $t0, 0x2($a3)
    ctx->pc = 0x26cc10u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_26cc14:
    // 0x26cc14: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x26cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_26cc18:
    // 0x26cc18: 0xa0e20002  sb          $v0, 0x2($a3)
    ctx->pc = 0x26cc18u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 2));
label_26cc1c:
    // 0x26cc1c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26cc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cc20:
    // 0x26cc20: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x26cc20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26cc24:
    // 0x26cc24: 0xc096b40  jal         func_25AD00
label_26cc28:
    if (ctx->pc == 0x26CC28u) {
        ctx->pc = 0x26CC2Cu;
        goto label_26cc2c;
    }
    ctx->pc = 0x26CC24u;
    SET_GPR_U32(ctx, 31, 0x26CC2Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26CC24u, 0x26CC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CC2Cu;
label_26cc2c:
    // 0x26cc2c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26cc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cc30:
    // 0x26cc30: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x26cc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26cc34:
    // 0x26cc34: 0x3c0240f0  lui         $v0, 0x40F0
    ctx->pc = 0x26cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16624 << 16));
label_26cc38:
    // 0x26cc38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26cc38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26cc3c:
    // 0x26cc3c: 0x0  nop
    ctx->pc = 0x26cc3cu;
    // NOP
label_26cc40:
    // 0x26cc40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26cc40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26cc44:
    // 0x26cc44: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x26cc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
label_26cc48:
    // 0x26cc48: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cc4c:
    // 0x26cc4c: 0xc4401b50  lwc1        $f0, 0x1B50($v0)
    ctx->pc = 0x26cc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26cc50:
    // 0x26cc50: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x26cc50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cc54:
    // 0x26cc54: 0xe4a000d0  swc1        $f0, 0xD0($a1)
    ctx->pc = 0x26cc54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 208), bits); }
label_26cc58:
    // 0x26cc58: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x26cc58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cc5c:
    // 0x26cc5c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x26cc5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_26cc60:
    // 0x26cc60: 0xc05cd34  jal         func_1734D0
label_26cc64:
    if (ctx->pc == 0x26CC64u) {
        ctx->pc = 0x26CC68u;
        goto label_26cc68;
    }
    ctx->pc = 0x26CC60u;
    SET_GPR_U32(ctx, 31, 0x26CC68u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x26CC60u, 0x26CC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CC68u;
label_26cc68:
    // 0x26cc68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26cc68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26cc6c:
    // 0x26cc6c: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x26cc6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cc70:
    // 0x26cc70: 0xe50000d0  swc1        $f0, 0xD0($t0)
    ctx->pc = 0x26cc70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 208), bits); }
label_26cc74:
    // 0x26cc74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26cc74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26cc78:
    // 0x26cc78: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26cc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cc7c:
    // 0x26cc7c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26cc7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26cc80:
    // 0x26cc80: 0xc0574f4  jal         func_15D3D0
label_26cc84:
    if (ctx->pc == 0x26CC84u) {
        ctx->pc = 0x26CC88u;
        goto label_26cc88;
    }
    ctx->pc = 0x26CC80u;
    SET_GPR_U32(ctx, 31, 0x26CC88u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x26CC80u, 0x26CC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CC88u;
label_26cc88:
    // 0x26cc88: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cc8c:
    // 0x26cc8c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26cc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cc90:
    // 0x26cc90: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x26cc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_26cc94:
    // 0x26cc94: 0x246512c0  addiu       $a1, $v1, 0x12C0
    ctx->pc = 0x26cc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
label_26cc98:
    // 0x26cc98: 0xc05cf7c  jal         func_173DF0
label_26cc9c:
    if (ctx->pc == 0x26CC9Cu) {
        ctx->pc = 0x26CCA0u;
        goto label_26cca0;
    }
    ctx->pc = 0x26CC98u;
    SET_GPR_U32(ctx, 31, 0x26CCA0u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x26CC98u, 0x26CCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CCA0u;
label_26cca0:
    // 0x26cca0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x26cca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_26cca4:
    // 0x26cca4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26cca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_26cca8:
    // 0x26cca8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26cca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26ccac:
    // 0x26ccac: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x26ccacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26ccb0:
    // 0x26ccb0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26ccb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26ccb4:
    // 0x26ccb4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x26ccb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26ccb8:
    // 0x26ccb8: 0xc4a00124  lwc1        $f0, 0x124($a1)
    ctx->pc = 0x26ccb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26ccbc:
    // 0x26ccbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26ccbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26ccc0:
    // 0x26ccc0: 0x0  nop
    ctx->pc = 0x26ccc0u;
    // NOP
label_26ccc4:
    // 0x26ccc4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_26ccc8:
    if (ctx->pc == 0x26CCC8u) {
        ctx->pc = 0x26CCCCu;
        goto label_26cccc;
    }
    ctx->pc = 0x26CCC4u;
    {
        const bool branch_taken_0x26ccc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ccc4) {
            ctx->pc = 0x26CCE4u;
            goto label_26cce4;
        }
    }
    ctx->pc = 0x26CCCCu;
label_26cccc:
    // 0x26cccc: 0x3c0642c8  lui         $a2, 0x42C8
    ctx->pc = 0x26ccccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17096 << 16));
label_26ccd0:
    // 0x26ccd0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x26ccd0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26ccd4:
    // 0x26ccd4: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x26ccd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26ccd8:
    // 0x26ccd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26ccd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26ccdc:
    // 0x26ccdc: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x26ccdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cce0:
    // 0x26cce0: 0xe4e00124  swc1        $f0, 0x124($a3)
    ctx->pc = 0x26cce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 292), bits); }
label_26cce4:
    // 0x26cce4: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x26cce4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cce8:
    // 0x26cce8: 0xc50c1b50  lwc1        $f12, 0x1B50($t0)
    ctx->pc = 0x26cce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26ccec:
    // 0x26ccec: 0xc057324  jal         func_15CC90
label_26ccf0:
    if (ctx->pc == 0x26CCF0u) {
        ctx->pc = 0x26CCF4u;
        goto label_26ccf4;
    }
    ctx->pc = 0x26CCECu;
    SET_GPR_U32(ctx, 31, 0x26CCF4u);
    ctx->pc = 0x15CC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CC90u, 0x26CCECu, 0x26CCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CCF4u;
label_26ccf4:
    // 0x26ccf4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26ccf4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26ccf8:
    // 0x26ccf8: 0xc097530  jal         func_25D4C0
label_26ccfc:
    if (ctx->pc == 0x26CCFCu) {
        ctx->pc = 0x26CD00u;
        goto label_26cd00;
    }
    ctx->pc = 0x26CCF8u;
    SET_GPR_U32(ctx, 31, 0x26CD00u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26CCF8u, 0x26CD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CD00u;
label_26cd00:
    // 0x26cd00: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cd04:
    // 0x26cd04: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x26cd04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
label_26cd08:
    // 0x26cd08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_26cd0c:
    if (ctx->pc == 0x26CD0Cu) {
        ctx->pc = 0x26CD10u;
        goto label_26cd10;
    }
    ctx->pc = 0x26CD08u;
    {
        const bool branch_taken_0x26cd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cd08) {
            ctx->pc = 0x26CD20u;
            goto label_26cd20;
        }
    }
    ctx->pc = 0x26CD10u;
label_26cd10:
    // 0x26cd10: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26cd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cd14:
    // 0x26cd14: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x26cd14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_26cd18:
    // 0x26cd18: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x26cd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26cd1c:
    // 0x26cd1c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x26cd1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_26cd20:
    // 0x26cd20: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x26cd20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cd24:
    // 0x26cd24: 0x8ca60130  lw          $a2, 0x130($a1)
    ctx->pc = 0x26cd24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_26cd28:
    // 0x26cd28: 0x3c074300  lui         $a3, 0x4300
    ctx->pc = 0x26cd28u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17152 << 16));
label_26cd2c:
    // 0x26cd2c: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x26cd2cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26cd30:
    // 0x26cd30: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x26cd30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
label_26cd34:
    // 0x26cd34: 0x44886800  mtc1        $t0, $f13
    ctx->pc = 0x26cd34u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26cd38:
    // 0x26cd38: 0x3c0444bb  lui         $a0, 0x44BB
    ctx->pc = 0x26cd38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17595 << 16));
label_26cd3c:
    // 0x26cd3c: 0x34828000  ori         $v0, $a0, 0x8000
    ctx->pc = 0x26cd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
label_26cd40:
    // 0x26cd40: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x26cd40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_26cd44:
    // 0x26cd44: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26cd44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26cd48:
    // 0x26cd48: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26cd48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26cd4c:
    // 0x26cd4c: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x26cd4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_26cd50:
    // 0x26cd50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26cd50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26cd54:
    // 0x26cd54: 0xc086488  jal         func_219220
label_26cd58:
    if (ctx->pc == 0x26CD58u) {
        ctx->pc = 0x26CD5Cu;
        goto label_26cd5c;
    }
    ctx->pc = 0x26CD54u;
    SET_GPR_U32(ctx, 31, 0x26CD5Cu);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x26CD54u, 0x26CD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CD5Cu;
label_26cd5c:
    // 0x26cd5c: 0x1000023f  b           . + 4 + (0x23F << 2)
label_26cd60:
    if (ctx->pc == 0x26CD60u) {
        ctx->pc = 0x26CD64u;
        goto label_26cd64;
    }
    ctx->pc = 0x26CD5Cu;
    {
        const bool branch_taken_0x26cd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cd5c) {
            ctx->pc = 0x26D65Cu;
            goto label_26d65c;
        }
    }
    ctx->pc = 0x26CD64u;
label_26cd64:
    // 0x26cd64: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26cd64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cd68:
    // 0x26cd68: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cd6c:
    // 0x26cd6c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26cd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_26cd70:
    // 0x26cd70: 0x24060067  addiu       $a2, $zero, 0x67
    ctx->pc = 0x26cd70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
label_26cd74:
    // 0x26cd74: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26cd74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26cd78:
    // 0x26cd78: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26cd78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_26cd7c:
    // 0x26cd7c: 0xc0965d0  jal         func_259740
label_26cd80:
    if (ctx->pc == 0x26CD80u) {
        ctx->pc = 0x26CD84u;
        goto label_26cd84;
    }
    ctx->pc = 0x26CD7Cu;
    SET_GPR_U32(ctx, 31, 0x26CD84u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26CD7Cu, 0x26CD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CD84u;
label_26cd84:
    // 0x26cd84: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x26cd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
label_26cd88:
    // 0x26cd88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26cd88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26cd8c:
    // 0x26cd8c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cd90:
    // 0x26cd90: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x26cd90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_26cd94:
    // 0x26cd94: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x26cd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_26cd98:
    // 0x26cd98: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cd9c:
    // 0x26cd9c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x26cd9cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_26cda0:
    // 0x26cda0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cda4:
    // 0x26cda4: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x26cda4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_26cda8:
    // 0x26cda8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26cda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cdac:
    // 0x26cdac: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x26cdacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_26cdb0:
    // 0x26cdb0: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x26cdb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26cdb4:
    // 0x26cdb4: 0xa0660002  sb          $a2, 0x2($v1)
    ctx->pc = 0x26cdb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 6));
label_26cdb8:
    // 0x26cdb8: 0xc057a4c  jal         func_15E930
label_26cdbc:
    if (ctx->pc == 0x26CDBCu) {
        ctx->pc = 0x26CDC0u;
        goto label_26cdc0;
    }
    ctx->pc = 0x26CDB8u;
    SET_GPR_U32(ctx, 31, 0x26CDC0u);
    ctx->pc = 0x15E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E930u, 0x26CDB8u, 0x26CDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CDC0u;
label_26cdc0:
    // 0x26cdc0: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x26cdc0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26cdc4:
    // 0x26cdc4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cdc8:
    // 0x26cdc8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26cdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cdcc:
    // 0x26cdcc: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x26cdccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_26cdd0:
    // 0x26cdd0: 0x246512c0  addiu       $a1, $v1, 0x12C0
    ctx->pc = 0x26cdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
label_26cdd4:
    // 0x26cdd4: 0xc05cf7c  jal         func_173DF0
label_26cdd8:
    if (ctx->pc == 0x26CDD8u) {
        ctx->pc = 0x26CDDCu;
        goto label_26cddc;
    }
    ctx->pc = 0x26CDD4u;
    SET_GPR_U32(ctx, 31, 0x26CDDCu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x26CDD4u, 0x26CDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CDDCu;
label_26cddc:
    // 0x26cddc: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x26cddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_26cde0:
    // 0x26cde0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26cde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cde4:
    // 0x26cde4: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x26cde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26cde8:
    // 0x26cde8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x26cde8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_26cdec:
    // 0x26cdec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26cdecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26cdf0:
    // 0x26cdf0: 0x0  nop
    ctx->pc = 0x26cdf0u;
    // NOP
label_26cdf4:
    // 0x26cdf4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x26cdf4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_26cdf8:
    // 0x26cdf8: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x26cdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26cdfc:
    // 0x26cdfc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x26cdfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26ce00:
    // 0x26ce00: 0x0  nop
    ctx->pc = 0x26ce00u;
    // NOP
label_26ce04:
    // 0x26ce04: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_26ce08:
    if (ctx->pc == 0x26CE08u) {
        ctx->pc = 0x26CE0Cu;
        goto label_26ce0c;
    }
    ctx->pc = 0x26CE04u;
    {
        const bool branch_taken_0x26ce04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ce04) {
            ctx->pc = 0x26CE20u;
            goto label_26ce20;
        }
    }
    ctx->pc = 0x26CE0Cu;
label_26ce0c:
    // 0x26ce0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26ce0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26ce10:
    // 0x26ce10: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26ce10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26ce14:
    // 0x26ce14: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x26ce14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
label_26ce18:
    // 0x26ce18: 0x10000003  b           . + 4 + (0x3 << 2)
label_26ce1c:
    if (ctx->pc == 0x26CE1Cu) {
        ctx->pc = 0x26CE20u;
        goto label_26ce20;
    }
    ctx->pc = 0x26CE18u;
    {
        const bool branch_taken_0x26ce18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ce18) {
            ctx->pc = 0x26CE28u;
            goto label_26ce28;
        }
    }
    ctx->pc = 0x26CE20u;
label_26ce20:
    // 0x26ce20: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26ce20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26ce24:
    // 0x26ce24: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x26ce24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
label_26ce28:
    // 0x26ce28: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26ce28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26ce2c:
    // 0x26ce2c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x26ce2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_26ce30:
    // 0x26ce30: 0xc057a80  jal         func_15EA00
label_26ce34:
    if (ctx->pc == 0x26CE34u) {
        ctx->pc = 0x26CE38u;
        goto label_26ce38;
    }
    ctx->pc = 0x26CE30u;
    SET_GPR_U32(ctx, 31, 0x26CE38u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x26CE30u, 0x26CE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CE38u;
label_26ce38:
    // 0x26ce38: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x26ce38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_26ce3c:
    // 0x26ce3c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26ce3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26ce40:
    // 0x26ce40: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x26ce40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26ce44:
    // 0x26ce44: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x26ce44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
label_26ce48:
    // 0x26ce48: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x26ce48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_26ce4c:
    // 0x26ce4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26ce4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26ce50:
    // 0x26ce50: 0x0  nop
    ctx->pc = 0x26ce50u;
    // NOP
label_26ce54:
    // 0x26ce54: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x26ce54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_26ce58:
    // 0x26ce58: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x26ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_26ce5c:
    // 0x26ce5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26ce5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26ce60:
    // 0x26ce60: 0x0  nop
    ctx->pc = 0x26ce60u;
    // NOP
label_26ce64:
    // 0x26ce64: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x26ce64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_26ce68:
    // 0x26ce68: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x26ce68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26ce6c:
    // 0x26ce6c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x26ce6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26ce70:
    // 0x26ce70: 0x0  nop
    ctx->pc = 0x26ce70u;
    // NOP
label_26ce74:
    // 0x26ce74: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_26ce78:
    if (ctx->pc == 0x26CE78u) {
        ctx->pc = 0x26CE7Cu;
        goto label_26ce7c;
    }
    ctx->pc = 0x26CE74u;
    {
        const bool branch_taken_0x26ce74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ce74) {
            ctx->pc = 0x26CE90u;
            goto label_26ce90;
        }
    }
    ctx->pc = 0x26CE7Cu;
label_26ce7c:
    // 0x26ce7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26ce7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26ce80:
    // 0x26ce80: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26ce80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26ce84:
    // 0x26ce84: 0xac431b64  sw          $v1, 0x1B64($v0)
    ctx->pc = 0x26ce84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 3));
label_26ce88:
    // 0x26ce88: 0x10000003  b           . + 4 + (0x3 << 2)
label_26ce8c:
    if (ctx->pc == 0x26CE8Cu) {
        ctx->pc = 0x26CE90u;
        goto label_26ce90;
    }
    ctx->pc = 0x26CE88u;
    {
        const bool branch_taken_0x26ce88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ce88) {
            ctx->pc = 0x26CE98u;
            goto label_26ce98;
        }
    }
    ctx->pc = 0x26CE90u;
label_26ce90:
    // 0x26ce90: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26ce90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26ce94:
    // 0x26ce94: 0xac401b64  sw          $zero, 0x1B64($v0)
    ctx->pc = 0x26ce94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 0));
label_26ce98:
    // 0x26ce98: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x26ce98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_26ce9c:
    // 0x26ce9c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26ce9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_26cea0:
    // 0x26cea0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x26cea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_26cea4:
    // 0x26cea4: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_26cea8:
    if (ctx->pc == 0x26CEA8u) {
        ctx->pc = 0x26CEACu;
        goto label_26ceac;
    }
    ctx->pc = 0x26CEA4u;
    {
        const bool branch_taken_0x26cea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cea4) {
            ctx->pc = 0x26CF9Cu;
            goto label_26cf9c;
        }
    }
    ctx->pc = 0x26CEACu;
label_26ceac:
    // 0x26ceac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26ceb0:
    // 0x26ceb0: 0x8c421b64  lw          $v0, 0x1B64($v0)
    ctx->pc = 0x26ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7012)));
label_26ceb4:
    // 0x26ceb4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_26ceb8:
    if (ctx->pc == 0x26CEB8u) {
        ctx->pc = 0x26CEBCu;
        goto label_26cebc;
    }
    ctx->pc = 0x26CEB4u;
    {
        const bool branch_taken_0x26ceb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ceb4) {
            ctx->pc = 0x26CF40u;
            goto label_26cf40;
        }
    }
    ctx->pc = 0x26CEBCu;
label_26cebc:
    // 0x26cebc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cec0:
    // 0x26cec0: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x26cec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26cec4:
    // 0x26cec4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26cec4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26cec8:
    // 0x26cec8: 0x0  nop
    ctx->pc = 0x26cec8u;
    // NOP
label_26cecc:
    // 0x26cecc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26ceccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26ced0:
    // 0x26ced0: 0x0  nop
    ctx->pc = 0x26ced0u;
    // NOP
label_26ced4:
    // 0x26ced4: 0x45000031  bc1f        . + 4 + (0x31 << 2)
label_26ced8:
    if (ctx->pc == 0x26CED8u) {
        ctx->pc = 0x26CEDCu;
        goto label_26cedc;
    }
    ctx->pc = 0x26CED4u;
    {
        const bool branch_taken_0x26ced4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ced4) {
            ctx->pc = 0x26CF9Cu;
            goto label_26cf9c;
        }
    }
    ctx->pc = 0x26CEDCu;
label_26cedc:
    // 0x26cedc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cee0:
    // 0x26cee0: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x26cee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26cee4:
    // 0x26cee4: 0x3c02bd23  lui         $v0, 0xBD23
    ctx->pc = 0x26cee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48419 << 16));
label_26cee8:
    // 0x26cee8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x26cee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_26ceec:
    // 0x26ceec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26ceecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26cef0:
    // 0x26cef0: 0x0  nop
    ctx->pc = 0x26cef0u;
    // NOP
label_26cef4:
    // 0x26cef4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26cef4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26cef8:
    // 0x26cef8: 0x0  nop
    ctx->pc = 0x26cef8u;
    // NOP
label_26cefc:
    // 0x26cefc: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_26cf00:
    if (ctx->pc == 0x26CF00u) {
        ctx->pc = 0x26CF04u;
        goto label_26cf04;
    }
    ctx->pc = 0x26CEFCu;
    {
        const bool branch_taken_0x26cefc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26cefc) {
            ctx->pc = 0x26CF2Cu;
            goto label_26cf2c;
        }
    }
    ctx->pc = 0x26CF04u;
label_26cf04:
    // 0x26cf04: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26cf04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cf08:
    // 0x26cf08: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x26cf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26cf0c:
    // 0x26cf0c: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x26cf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
label_26cf10:
    // 0x26cf10: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x26cf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_26cf14:
    // 0x26cf14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26cf14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26cf18:
    // 0x26cf18: 0x0  nop
    ctx->pc = 0x26cf18u;
    // NOP
label_26cf1c:
    // 0x26cf1c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26cf1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26cf20:
    // 0x26cf20: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x26cf20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_26cf24:
    // 0x26cf24: 0x1000001d  b           . + 4 + (0x1D << 2)
label_26cf28:
    if (ctx->pc == 0x26CF28u) {
        ctx->pc = 0x26CF2Cu;
        goto label_26cf2c;
    }
    ctx->pc = 0x26CF24u;
    {
        const bool branch_taken_0x26cf24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cf24) {
            ctx->pc = 0x26CF9Cu;
            goto label_26cf9c;
        }
    }
    ctx->pc = 0x26CF2Cu;
label_26cf2c:
    // 0x26cf2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26cf2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26cf30:
    // 0x26cf30: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cf34:
    // 0x26cf34: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x26cf34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_26cf38:
    // 0x26cf38: 0x10000018  b           . + 4 + (0x18 << 2)
label_26cf3c:
    if (ctx->pc == 0x26CF3Cu) {
        ctx->pc = 0x26CF40u;
        goto label_26cf40;
    }
    ctx->pc = 0x26CF38u;
    {
        const bool branch_taken_0x26cf38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cf38) {
            ctx->pc = 0x26CF9Cu;
            goto label_26cf9c;
        }
    }
    ctx->pc = 0x26CF40u;
label_26cf40:
    // 0x26cf40: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26cf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cf44:
    // 0x26cf44: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x26cf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26cf48:
    // 0x26cf48: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x26cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
label_26cf4c:
    // 0x26cf4c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x26cf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_26cf50:
    // 0x26cf50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26cf50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26cf54:
    // 0x26cf54: 0x0  nop
    ctx->pc = 0x26cf54u;
    // NOP
label_26cf58:
    // 0x26cf58: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26cf58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_26cf5c:
    // 0x26cf5c: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x26cf5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_26cf60:
    // 0x26cf60: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cf64:
    // 0x26cf64: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x26cf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26cf68:
    // 0x26cf68: 0x3c02bf86  lui         $v0, 0xBF86
    ctx->pc = 0x26cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49030 << 16));
label_26cf6c:
    // 0x26cf6c: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x26cf6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
label_26cf70:
    // 0x26cf70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26cf70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26cf74:
    // 0x26cf74: 0x0  nop
    ctx->pc = 0x26cf74u;
    // NOP
label_26cf78:
    // 0x26cf78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26cf78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26cf7c:
    // 0x26cf7c: 0x0  nop
    ctx->pc = 0x26cf7cu;
    // NOP
label_26cf80:
    // 0x26cf80: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_26cf84:
    if (ctx->pc == 0x26CF84u) {
        ctx->pc = 0x26CF88u;
        goto label_26cf88;
    }
    ctx->pc = 0x26CF80u;
    {
        const bool branch_taken_0x26cf80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26cf80) {
            ctx->pc = 0x26CF9Cu;
            goto label_26cf9c;
        }
    }
    ctx->pc = 0x26CF88u;
label_26cf88:
    // 0x26cf88: 0x3c02bf86  lui         $v0, 0xBF86
    ctx->pc = 0x26cf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49030 << 16));
label_26cf8c:
    // 0x26cf8c: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x26cf8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
label_26cf90:
    // 0x26cf90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26cf90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26cf94:
    // 0x26cf94: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cf98:
    // 0x26cf98: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x26cf98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_26cf9c:
    // 0x26cf9c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x26cf9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_26cfa0:
    // 0x26cfa0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26cfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_26cfa4:
    // 0x26cfa4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x26cfa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_26cfa8:
    // 0x26cfa8: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_26cfac:
    if (ctx->pc == 0x26CFACu) {
        ctx->pc = 0x26CFB0u;
        goto label_26cfb0;
    }
    ctx->pc = 0x26CFA8u;
    {
        const bool branch_taken_0x26cfa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cfa8) {
            ctx->pc = 0x26D0A0u;
            goto label_26d0a0;
        }
    }
    ctx->pc = 0x26CFB0u;
label_26cfb0:
    // 0x26cfb0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cfb4:
    // 0x26cfb4: 0x8c421b60  lw          $v0, 0x1B60($v0)
    ctx->pc = 0x26cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
label_26cfb8:
    // 0x26cfb8: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_26cfbc:
    if (ctx->pc == 0x26CFBCu) {
        ctx->pc = 0x26CFC0u;
        goto label_26cfc0;
    }
    ctx->pc = 0x26CFB8u;
    {
        const bool branch_taken_0x26cfb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cfb8) {
            ctx->pc = 0x26D044u;
            goto label_26d044;
        }
    }
    ctx->pc = 0x26CFC0u;
label_26cfc0:
    // 0x26cfc0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cfc4:
    // 0x26cfc4: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x26cfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26cfc8:
    // 0x26cfc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26cfc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26cfcc:
    // 0x26cfcc: 0x0  nop
    ctx->pc = 0x26cfccu;
    // NOP
label_26cfd0:
    // 0x26cfd0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26cfd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26cfd4:
    // 0x26cfd4: 0x0  nop
    ctx->pc = 0x26cfd4u;
    // NOP
label_26cfd8:
    // 0x26cfd8: 0x45010031  bc1t        . + 4 + (0x31 << 2)
label_26cfdc:
    if (ctx->pc == 0x26CFDCu) {
        ctx->pc = 0x26CFE0u;
        goto label_26cfe0;
    }
    ctx->pc = 0x26CFD8u;
    {
        const bool branch_taken_0x26cfd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26cfd8) {
            ctx->pc = 0x26D0A0u;
            goto label_26d0a0;
        }
    }
    ctx->pc = 0x26CFE0u;
label_26cfe0:
    // 0x26cfe0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26cfe4:
    // 0x26cfe4: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x26cfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26cfe8:
    // 0x26cfe8: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x26cfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
label_26cfec:
    // 0x26cfec: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x26cfecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_26cff0:
    // 0x26cff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26cff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26cff4:
    // 0x26cff4: 0x0  nop
    ctx->pc = 0x26cff4u;
    // NOP
label_26cff8:
    // 0x26cff8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26cff8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26cffc:
    // 0x26cffc: 0x0  nop
    ctx->pc = 0x26cffcu;
    // NOP
label_26d000:
    // 0x26d000: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_26d004:
    if (ctx->pc == 0x26D004u) {
        ctx->pc = 0x26D008u;
        goto label_26d008;
    }
    ctx->pc = 0x26D000u;
    {
        const bool branch_taken_0x26d000 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d000) {
            ctx->pc = 0x26D030u;
            goto label_26d030;
        }
    }
    ctx->pc = 0x26D008u;
label_26d008:
    // 0x26d008: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d00c:
    // 0x26d00c: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x26d00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26d010:
    // 0x26d010: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x26d010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
label_26d014:
    // 0x26d014: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x26d014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_26d018:
    // 0x26d018: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26d018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d01c:
    // 0x26d01c: 0x0  nop
    ctx->pc = 0x26d01cu;
    // NOP
label_26d020:
    // 0x26d020: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26d020u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_26d024:
    // 0x26d024: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x26d024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_26d028:
    // 0x26d028: 0x1000001d  b           . + 4 + (0x1D << 2)
label_26d02c:
    if (ctx->pc == 0x26D02Cu) {
        ctx->pc = 0x26D030u;
        goto label_26d030;
    }
    ctx->pc = 0x26D028u;
    {
        const bool branch_taken_0x26d028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d028) {
            ctx->pc = 0x26D0A0u;
            goto label_26d0a0;
        }
    }
    ctx->pc = 0x26D030u;
label_26d030:
    // 0x26d030: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26d030u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d034:
    // 0x26d034: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d038:
    // 0x26d038: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x26d038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_26d03c:
    // 0x26d03c: 0x10000018  b           . + 4 + (0x18 << 2)
label_26d040:
    if (ctx->pc == 0x26D040u) {
        ctx->pc = 0x26D044u;
        goto label_26d044;
    }
    ctx->pc = 0x26D03Cu;
    {
        const bool branch_taken_0x26d03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d03c) {
            ctx->pc = 0x26D0A0u;
            goto label_26d0a0;
        }
    }
    ctx->pc = 0x26D044u;
label_26d044:
    // 0x26d044: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d048:
    // 0x26d048: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x26d048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26d04c:
    // 0x26d04c: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x26d04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
label_26d050:
    // 0x26d050: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x26d050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_26d054:
    // 0x26d054: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26d054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d058:
    // 0x26d058: 0x0  nop
    ctx->pc = 0x26d058u;
    // NOP
label_26d05c:
    // 0x26d05c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26d05cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26d060:
    // 0x26d060: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x26d060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_26d064:
    // 0x26d064: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d068:
    // 0x26d068: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x26d068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26d06c:
    // 0x26d06c: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x26d06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
label_26d070:
    // 0x26d070: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x26d070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
label_26d074:
    // 0x26d074: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26d074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d078:
    // 0x26d078: 0x0  nop
    ctx->pc = 0x26d078u;
    // NOP
label_26d07c:
    // 0x26d07c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26d07cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26d080:
    // 0x26d080: 0x0  nop
    ctx->pc = 0x26d080u;
    // NOP
label_26d084:
    // 0x26d084: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_26d088:
    if (ctx->pc == 0x26D088u) {
        ctx->pc = 0x26D08Cu;
        goto label_26d08c;
    }
    ctx->pc = 0x26D084u;
    {
        const bool branch_taken_0x26d084 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d084) {
            ctx->pc = 0x26D0A0u;
            goto label_26d0a0;
        }
    }
    ctx->pc = 0x26D08Cu;
label_26d08c:
    // 0x26d08c: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x26d08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
label_26d090:
    // 0x26d090: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x26d090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
label_26d094:
    // 0x26d094: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26d094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d098:
    // 0x26d098: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d09c:
    // 0x26d09c: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x26d09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_26d0a0:
    // 0x26d0a0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x26d0a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_26d0a4:
    // 0x26d0a4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26d0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_26d0a8:
    // 0x26d0a8: 0x3042000a  andi        $v0, $v0, 0xA
    ctx->pc = 0x26d0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)10);
label_26d0ac:
    // 0x26d0ac: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
label_26d0b0:
    if (ctx->pc == 0x26D0B0u) {
        ctx->pc = 0x26D0B4u;
        goto label_26d0b4;
    }
    ctx->pc = 0x26D0ACu;
    {
        const bool branch_taken_0x26d0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d0ac) {
            ctx->pc = 0x26D194u;
            goto label_26d194;
        }
    }
    ctx->pc = 0x26D0B4u;
label_26d0b4:
    // 0x26d0b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d0b8:
    // 0x26d0b8: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x26d0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26d0bc:
    // 0x26d0bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26d0bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d0c0:
    // 0x26d0c0: 0x0  nop
    ctx->pc = 0x26d0c0u;
    // NOP
label_26d0c4:
    // 0x26d0c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26d0c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26d0c8:
    // 0x26d0c8: 0x0  nop
    ctx->pc = 0x26d0c8u;
    // NOP
label_26d0cc:
    // 0x26d0cc: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
label_26d0d0:
    if (ctx->pc == 0x26D0D0u) {
        ctx->pc = 0x26D0D4u;
        goto label_26d0d4;
    }
    ctx->pc = 0x26D0CCu;
    {
        const bool branch_taken_0x26d0cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d0cc) {
            ctx->pc = 0x26D138u;
            goto label_26d138;
        }
    }
    ctx->pc = 0x26D0D4u;
label_26d0d4:
    // 0x26d0d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d0d8:
    // 0x26d0d8: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x26d0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26d0dc:
    // 0x26d0dc: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x26d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
label_26d0e0:
    // 0x26d0e0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x26d0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_26d0e4:
    // 0x26d0e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26d0e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d0e8:
    // 0x26d0e8: 0x0  nop
    ctx->pc = 0x26d0e8u;
    // NOP
label_26d0ec:
    // 0x26d0ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26d0ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26d0f0:
    // 0x26d0f0: 0x0  nop
    ctx->pc = 0x26d0f0u;
    // NOP
label_26d0f4:
    // 0x26d0f4: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_26d0f8:
    if (ctx->pc == 0x26D0F8u) {
        ctx->pc = 0x26D0FCu;
        goto label_26d0fc;
    }
    ctx->pc = 0x26D0F4u;
    {
        const bool branch_taken_0x26d0f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d0f4) {
            ctx->pc = 0x26D124u;
            goto label_26d124;
        }
    }
    ctx->pc = 0x26D0FCu;
label_26d0fc:
    // 0x26d0fc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d100:
    // 0x26d100: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x26d100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26d104:
    // 0x26d104: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x26d104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
label_26d108:
    // 0x26d108: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x26d108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_26d10c:
    // 0x26d10c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26d10cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d110:
    // 0x26d110: 0x0  nop
    ctx->pc = 0x26d110u;
    // NOP
label_26d114:
    // 0x26d114: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26d114u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_26d118:
    // 0x26d118: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x26d118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_26d11c:
    // 0x26d11c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_26d120:
    if (ctx->pc == 0x26D120u) {
        ctx->pc = 0x26D124u;
        goto label_26d124;
    }
    ctx->pc = 0x26D11Cu;
    {
        const bool branch_taken_0x26d11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d11c) {
            ctx->pc = 0x26D194u;
            goto label_26d194;
        }
    }
    ctx->pc = 0x26D124u;
label_26d124:
    // 0x26d124: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26d124u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d128:
    // 0x26d128: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d12c:
    // 0x26d12c: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x26d12cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_26d130:
    // 0x26d130: 0x10000018  b           . + 4 + (0x18 << 2)
label_26d134:
    if (ctx->pc == 0x26D134u) {
        ctx->pc = 0x26D138u;
        goto label_26d138;
    }
    ctx->pc = 0x26D130u;
    {
        const bool branch_taken_0x26d130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d130) {
            ctx->pc = 0x26D194u;
            goto label_26d194;
        }
    }
    ctx->pc = 0x26D138u;
label_26d138:
    // 0x26d138: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d13c:
    // 0x26d13c: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x26d13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26d140:
    // 0x26d140: 0x3c02bd23  lui         $v0, 0xBD23
    ctx->pc = 0x26d140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48419 << 16));
label_26d144:
    // 0x26d144: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x26d144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_26d148:
    // 0x26d148: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26d148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d14c:
    // 0x26d14c: 0x0  nop
    ctx->pc = 0x26d14cu;
    // NOP
label_26d150:
    // 0x26d150: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26d150u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26d154:
    // 0x26d154: 0x0  nop
    ctx->pc = 0x26d154u;
    // NOP
label_26d158:
    // 0x26d158: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_26d15c:
    if (ctx->pc == 0x26D15Cu) {
        ctx->pc = 0x26D160u;
        goto label_26d160;
    }
    ctx->pc = 0x26D158u;
    {
        const bool branch_taken_0x26d158 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d158) {
            ctx->pc = 0x26D188u;
            goto label_26d188;
        }
    }
    ctx->pc = 0x26D160u;
label_26d160:
    // 0x26d160: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d164:
    // 0x26d164: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x26d164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26d168:
    // 0x26d168: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x26d168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
label_26d16c:
    // 0x26d16c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x26d16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_26d170:
    // 0x26d170: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26d170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d174:
    // 0x26d174: 0x0  nop
    ctx->pc = 0x26d174u;
    // NOP
label_26d178:
    // 0x26d178: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26d178u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26d17c:
    // 0x26d17c: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x26d17cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_26d180:
    // 0x26d180: 0x10000004  b           . + 4 + (0x4 << 2)
label_26d184:
    if (ctx->pc == 0x26D184u) {
        ctx->pc = 0x26D188u;
        goto label_26d188;
    }
    ctx->pc = 0x26D180u;
    {
        const bool branch_taken_0x26d180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d180) {
            ctx->pc = 0x26D194u;
            goto label_26d194;
        }
    }
    ctx->pc = 0x26D188u;
label_26d188:
    // 0x26d188: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26d188u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d18c:
    // 0x26d18c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d190:
    // 0x26d190: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x26d190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_26d194:
    // 0x26d194: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d198:
    // 0x26d198: 0xc4411388  lwc1        $f1, 0x1388($v0)
    ctx->pc = 0x26d198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26d19c:
    // 0x26d19c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x26d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_26d1a0:
    // 0x26d1a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26d1a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d1a4:
    // 0x26d1a4: 0x0  nop
    ctx->pc = 0x26d1a4u;
    // NOP
label_26d1a8:
    // 0x26d1a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26d1a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26d1ac:
    // 0x26d1ac: 0x0  nop
    ctx->pc = 0x26d1acu;
    // NOP
label_26d1b0:
    // 0x26d1b0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_26d1b4:
    if (ctx->pc == 0x26D1B4u) {
        ctx->pc = 0x26D1B8u;
        goto label_26d1b8;
    }
    ctx->pc = 0x26D1B0u;
    {
        const bool branch_taken_0x26d1b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d1b0) {
            ctx->pc = 0x26D1C8u;
            goto label_26d1c8;
        }
    }
    ctx->pc = 0x26D1B8u;
label_26d1b8:
    // 0x26d1b8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d1bc:
    // 0x26d1bc: 0xc4401380  lwc1        $f0, 0x1380($v0)
    ctx->pc = 0x26d1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d1c0:
    // 0x26d1c0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d1c4:
    // 0x26d1c4: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x26d1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_26d1c8:
    // 0x26d1c8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26d1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d1cc:
    // 0x26d1cc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d1d0:
    // 0x26d1d0: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x26d1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
label_26d1d4:
    // 0x26d1d4: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x26d1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
label_26d1d8:
    // 0x26d1d8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x26d1d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_26d1dc:
    // 0x26d1dc: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x26d1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26d1e0:
    // 0x26d1e0: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x26d1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_26d1e4:
    // 0x26d1e4: 0xc058f50  jal         func_163D40
label_26d1e8:
    if (ctx->pc == 0x26D1E8u) {
        ctx->pc = 0x26D1ECu;
        goto label_26d1ec;
    }
    ctx->pc = 0x26D1E4u;
    SET_GPR_U32(ctx, 31, 0x26D1ECu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x26D1E4u, 0x26D1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D1ECu;
label_26d1ec:
    // 0x26d1ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d1f0:
    // 0x26d1f0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x26d1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_26d1f4:
    // 0x26d1f4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26d1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d1f8:
    // 0x26d1f8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x26d1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26d1fc:
    // 0x26d1fc: 0xc096b40  jal         func_25AD00
label_26d200:
    if (ctx->pc == 0x26D200u) {
        ctx->pc = 0x26D204u;
        goto label_26d204;
    }
    ctx->pc = 0x26D1FCu;
    SET_GPR_U32(ctx, 31, 0x26D204u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26D1FCu, 0x26D204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D204u;
label_26d204:
    // 0x26d204: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d208:
    // 0x26d208: 0xc4401b50  lwc1        $f0, 0x1B50($v0)
    ctx->pc = 0x26d208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d20c:
    // 0x26d20c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d210:
    // 0x26d210: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x26d210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
label_26d214:
    // 0x26d214: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26d214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d218:
    // 0x26d218: 0xc05cd34  jal         func_1734D0
label_26d21c:
    if (ctx->pc == 0x26D21Cu) {
        ctx->pc = 0x26D220u;
        goto label_26d220;
    }
    ctx->pc = 0x26D218u;
    SET_GPR_U32(ctx, 31, 0x26D220u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x26D218u, 0x26D220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D220u;
label_26d220:
    // 0x26d220: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26d220u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d224:
    // 0x26d224: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d228:
    // 0x26d228: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x26d228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
label_26d22c:
    // 0x26d22c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26d22cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26d230:
    // 0x26d230: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26d230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d234:
    // 0x26d234: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26d234u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26d238:
    // 0x26d238: 0xc0574f4  jal         func_15D3D0
label_26d23c:
    if (ctx->pc == 0x26D23Cu) {
        ctx->pc = 0x26D240u;
        goto label_26d240;
    }
    ctx->pc = 0x26D238u;
    SET_GPR_U32(ctx, 31, 0x26D240u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x26D238u, 0x26D240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D240u;
label_26d240:
    // 0x26d240: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d244:
    // 0x26d244: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d248:
    // 0x26d248: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x26d248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_26d24c:
    // 0x26d24c: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x26d24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_26d250:
    // 0x26d250: 0xc05cf7c  jal         func_173DF0
label_26d254:
    if (ctx->pc == 0x26D254u) {
        ctx->pc = 0x26D258u;
        goto label_26d258;
    }
    ctx->pc = 0x26D250u;
    SET_GPR_U32(ctx, 31, 0x26D258u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x26D250u, 0x26D258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D258u;
label_26d258:
    // 0x26d258: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x26d258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_26d25c:
    // 0x26d25c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26d25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_26d260:
    // 0x26d260: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26d260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26d264:
    // 0x26d264: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x26d264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d268:
    // 0x26d268: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26d268u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26d26c:
    // 0x26d26c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d270:
    // 0x26d270: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x26d270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d274:
    // 0x26d274: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26d274u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26d278:
    // 0x26d278: 0x0  nop
    ctx->pc = 0x26d278u;
    // NOP
label_26d27c:
    // 0x26d27c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_26d280:
    if (ctx->pc == 0x26D280u) {
        ctx->pc = 0x26D284u;
        goto label_26d284;
    }
    ctx->pc = 0x26D27Cu;
    {
        const bool branch_taken_0x26d27c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d27c) {
            ctx->pc = 0x26D29Cu;
            goto label_26d29c;
        }
    }
    ctx->pc = 0x26D284u;
label_26d284:
    // 0x26d284: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26d284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_26d288:
    // 0x26d288: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26d288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26d28c:
    // 0x26d28c: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x26d28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d290:
    // 0x26d290: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26d290u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26d294:
    // 0x26d294: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d298:
    // 0x26d298: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x26d298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_26d29c:
    // 0x26d29c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d2a0:
    // 0x26d2a0: 0xc46c1b50  lwc1        $f12, 0x1B50($v1)
    ctx->pc = 0x26d2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26d2a4:
    // 0x26d2a4: 0xc057324  jal         func_15CC90
label_26d2a8:
    if (ctx->pc == 0x26D2A8u) {
        ctx->pc = 0x26D2ACu;
        goto label_26d2ac;
    }
    ctx->pc = 0x26D2A4u;
    SET_GPR_U32(ctx, 31, 0x26D2ACu);
    ctx->pc = 0x15CC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CC90u, 0x26D2A4u, 0x26D2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D2ACu;
label_26d2ac:
    // 0x26d2ac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26d2acu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26d2b0:
    // 0x26d2b0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26d2b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26d2b4:
    // 0x26d2b4: 0xc097530  jal         func_25D4C0
label_26d2b8:
    if (ctx->pc == 0x26D2B8u) {
        ctx->pc = 0x26D2BCu;
        goto label_26d2bc;
    }
    ctx->pc = 0x26D2B4u;
    SET_GPR_U32(ctx, 31, 0x26D2BCu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26D2B4u, 0x26D2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D2BCu;
label_26d2bc:
    // 0x26d2bc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26d2bcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26d2c0:
    // 0x26d2c0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26d2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26d2c4:
    // 0x26d2c4: 0xc0675a4  jal         func_19D690
label_26d2c8:
    if (ctx->pc == 0x26D2C8u) {
        ctx->pc = 0x26D2CCu;
        goto label_26d2cc;
    }
    ctx->pc = 0x26D2C4u;
    SET_GPR_U32(ctx, 31, 0x26D2CCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26D2C4u, 0x26D2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D2CCu;
label_26d2cc:
    // 0x26d2cc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x26d2ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26d2d0:
    // 0x26d2d0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26d2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d2d4:
    // 0x26d2d4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d2d8:
    // 0x26d2d8: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x26d2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_26d2dc:
    // 0x26d2dc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x26d2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26d2e0:
    // 0x26d2e0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x26d2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_26d2e4:
    // 0x26d2e4: 0x24678b60  addiu       $a3, $v1, -0x74A0
    ctx->pc = 0x26d2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937440));
label_26d2e8:
    // 0x26d2e8: 0xc06d02c  jal         func_1B40B0
label_26d2ec:
    if (ctx->pc == 0x26D2ECu) {
        ctx->pc = 0x26D2F0u;
        goto label_26d2f0;
    }
    ctx->pc = 0x26D2E8u;
    SET_GPR_U32(ctx, 31, 0x26D2F0u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x26D2E8u, 0x26D2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D2F0u;
label_26d2f0:
    // 0x26d2f0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x26d2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26d2f4:
    // 0x26d2f4: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x26d2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
label_26d2f8:
    // 0x26d2f8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x26d2f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d2fc:
    // 0x26d2fc: 0x0  nop
    ctx->pc = 0x26d2fcu;
    // NOP
label_26d300:
    // 0x26d300: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26d300u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_26d304:
    // 0x26d304: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x26d304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_26d308:
    // 0x26d308: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d30c:
    // 0x26d30c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x26d30cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d310:
    // 0x26d310: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26d310u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26d314:
    // 0x26d314: 0x8ca60130  lw          $a2, 0x130($a1)
    ctx->pc = 0x26d314u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_26d318:
    // 0x26d318: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x26d318u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_26d31c:
    // 0x26d31c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x26d31cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26d320:
    // 0x26d320: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x26d320u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_26d324:
    // 0x26d324: 0x3c080039  lui         $t0, 0x39
    ctx->pc = 0x26d324u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57 << 16));
label_26d328:
    // 0x26d328: 0x25028b60  addiu       $v0, $t0, -0x74A0
    ctx->pc = 0x26d328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294937440));
label_26d32c:
    // 0x26d32c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x26d32cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26d330:
    // 0x26d330: 0xc06d02c  jal         func_1B40B0
label_26d334:
    if (ctx->pc == 0x26D334u) {
        ctx->pc = 0x26D338u;
        goto label_26d338;
    }
    ctx->pc = 0x26D330u;
    SET_GPR_U32(ctx, 31, 0x26D338u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x26D330u, 0x26D338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D338u;
label_26d338:
    // 0x26d338: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d33c:
    // 0x26d33c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x26d33cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_26d340:
    // 0x26d340: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_26d344:
    if (ctx->pc == 0x26D344u) {
        ctx->pc = 0x26D348u;
        goto label_26d348;
    }
    ctx->pc = 0x26D340u;
    {
        const bool branch_taken_0x26d340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d340) {
            ctx->pc = 0x26D39Cu;
            goto label_26d39c;
        }
    }
    ctx->pc = 0x26D348u;
label_26d348:
    // 0x26d348: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d34c:
    // 0x26d34c: 0x844213ac  lh          $v0, 0x13AC($v0)
    ctx->pc = 0x26d34cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5036)));
label_26d350:
    // 0x26d350: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_26d354:
    if (ctx->pc == 0x26D354u) {
        ctx->pc = 0x26D358u;
        goto label_26d358;
    }
    ctx->pc = 0x26D350u;
    {
        const bool branch_taken_0x26d350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d350) {
            ctx->pc = 0x26D384u;
            goto label_26d384;
        }
    }
    ctx->pc = 0x26D358u;
label_26d358:
    // 0x26d358: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x26d358u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_26d35c:
    // 0x26d35c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x26d35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_26d360:
    // 0x26d360: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x26d360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_26d364:
    // 0x26d364: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
label_26d368:
    if (ctx->pc == 0x26D368u) {
        ctx->pc = 0x26D36Cu;
        goto label_26d36c;
    }
    ctx->pc = 0x26D364u;
    {
        const bool branch_taken_0x26d364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d364) {
            ctx->pc = 0x26D450u;
            goto label_26d450;
        }
    }
    ctx->pc = 0x26D36Cu;
label_26d36c:
    // 0x26d36c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d370:
    // 0x26d370: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x26d370u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_26d374:
    // 0x26d374: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26d374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_26d378:
    // 0x26d378: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x26d378u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_26d37c:
    // 0x26d37c: 0x10000034  b           . + 4 + (0x34 << 2)
label_26d380:
    if (ctx->pc == 0x26D380u) {
        ctx->pc = 0x26D384u;
        goto label_26d384;
    }
    ctx->pc = 0x26D37Cu;
    {
        const bool branch_taken_0x26d37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d37c) {
            ctx->pc = 0x26D450u;
            goto label_26d450;
        }
    }
    ctx->pc = 0x26D384u;
label_26d384:
    // 0x26d384: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d388:
    // 0x26d388: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x26d388u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_26d38c:
    // 0x26d38c: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x26d38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_26d390:
    // 0x26d390: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x26d390u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_26d394:
    // 0x26d394: 0x1000002e  b           . + 4 + (0x2E << 2)
label_26d398:
    if (ctx->pc == 0x26D398u) {
        ctx->pc = 0x26D39Cu;
        goto label_26d39c;
    }
    ctx->pc = 0x26D394u;
    {
        const bool branch_taken_0x26d394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d394) {
            ctx->pc = 0x26D450u;
            goto label_26d450;
        }
    }
    ctx->pc = 0x26D39Cu;
label_26d39c:
    // 0x26d39c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x26d39cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d3a0:
    // 0x26d3a0: 0xc4a10188  lwc1        $f1, 0x188($a1)
    ctx->pc = 0x26d3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26d3a4:
    // 0x26d3a4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x26d3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_26d3a8:
    // 0x26d3a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26d3a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d3ac:
    // 0x26d3ac: 0x0  nop
    ctx->pc = 0x26d3acu;
    // NOP
label_26d3b0:
    // 0x26d3b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26d3b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_26d3b4:
    // 0x26d3b4: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x26d3b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
label_26d3b8:
    // 0x26d3b8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26d3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d3bc:
    // 0x26d3bc: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x26d3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26d3c0:
    // 0x26d3c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26d3c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d3c4:
    // 0x26d3c4: 0x0  nop
    ctx->pc = 0x26d3c4u;
    // NOP
label_26d3c8:
    // 0x26d3c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26d3c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26d3cc:
    // 0x26d3cc: 0x0  nop
    ctx->pc = 0x26d3ccu;
    // NOP
label_26d3d0:
    // 0x26d3d0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_26d3d4:
    if (ctx->pc == 0x26D3D4u) {
        ctx->pc = 0x26D3D8u;
        goto label_26d3d8;
    }
    ctx->pc = 0x26D3D0u;
    {
        const bool branch_taken_0x26d3d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d3d0) {
            ctx->pc = 0x26D3E4u;
            goto label_26d3e4;
        }
    }
    ctx->pc = 0x26D3D8u;
label_26d3d8:
    // 0x26d3d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26d3d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d3dc:
    // 0x26d3dc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d3e0:
    // 0x26d3e0: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x26d3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_26d3e4:
    // 0x26d3e4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26d3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d3e8:
    // 0x26d3e8: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x26d3e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
label_26d3ec:
    // 0x26d3ec: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_26d3f0:
    if (ctx->pc == 0x26D3F0u) {
        ctx->pc = 0x26D3F4u;
        goto label_26d3f4;
    }
    ctx->pc = 0x26D3ECu;
    {
        const bool branch_taken_0x26d3ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d3ec) {
            ctx->pc = 0x26D450u;
            goto label_26d450;
        }
    }
    ctx->pc = 0x26D3F4u;
label_26d3f4:
    // 0x26d3f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26d3f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d3f8:
    // 0x26d3f8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26d3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d3fc:
    // 0x26d3fc: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x26d3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
label_26d400:
    // 0x26d400: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d404:
    // 0x26d404: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x26d404u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_26d408:
    // 0x26d408: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26d408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d40c:
    // 0x26d40c: 0xc48000d4  lwc1        $f0, 0xD4($a0)
    ctx->pc = 0x26d40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d410:
    // 0x26d410: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x26d410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d414:
    // 0x26d414: 0xe4a01290  swc1        $f0, 0x1290($a1)
    ctx->pc = 0x26d414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4752), bits); }
label_26d418:
    // 0x26d418: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x26d418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_26d41c:
    // 0x26d41c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d420:
    // 0x26d420: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x26d420u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_26d424:
    // 0x26d424: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26d424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26d428:
    // 0x26d428: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d42c:
    // 0x26d42c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x26d42cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_26d430:
    // 0x26d430: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d434:
    // 0x26d434: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x26d434u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_26d438:
    // 0x26d438: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d43c:
    // 0x26d43c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x26d43cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_26d440:
    // 0x26d440: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d444:
    // 0x26d444: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x26d444u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_26d448:
    // 0x26d448: 0x1000009a  b           . + 4 + (0x9A << 2)
label_26d44c:
    if (ctx->pc == 0x26D44Cu) {
        ctx->pc = 0x26D450u;
        goto label_26d450;
    }
    ctx->pc = 0x26D448u;
    {
        const bool branch_taken_0x26d448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d448) {
            ctx->pc = 0x26D6B4u;
            goto label_26d6b4;
        }
    }
    ctx->pc = 0x26D450u;
label_26d450:
    // 0x26d450: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d454:
    // 0x26d454: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x26d454u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
label_26d458:
    // 0x26d458: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x26d458u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
label_26d45c:
    // 0x26d45c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x26d45cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_26d460:
    // 0x26d460: 0x30a30003  andi        $v1, $a1, 0x3
    ctx->pc = 0x26d460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
label_26d464:
    // 0x26d464: 0x1460006d  bnez        $v1, . + 4 + (0x6D << 2)
label_26d468:
    if (ctx->pc == 0x26D468u) {
        ctx->pc = 0x26D46Cu;
        goto label_26d46c;
    }
    ctx->pc = 0x26D464u;
    {
        const bool branch_taken_0x26d464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d464) {
            ctx->pc = 0x26D61Cu;
            goto label_26d61c;
        }
    }
    ctx->pc = 0x26D46Cu;
label_26d46c:
    // 0x26d46c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26d46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26d470:
    // 0x26d470: 0xc0675a4  jal         func_19D690
label_26d474:
    if (ctx->pc == 0x26D474u) {
        ctx->pc = 0x26D478u;
        goto label_26d478;
    }
    ctx->pc = 0x26D470u;
    SET_GPR_U32(ctx, 31, 0x26D478u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26D470u, 0x26D478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D478u;
label_26d478:
    // 0x26d478: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26d478u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26d47c:
    // 0x26d47c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x26d47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_26d480:
    // 0x26d480: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26d480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d484:
    // 0x26d484: 0x0  nop
    ctx->pc = 0x26d484u;
    // NOP
label_26d488:
    // 0x26d488: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x26d488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_26d48c:
    // 0x26d48c: 0x3c054248  lui         $a1, 0x4248
    ctx->pc = 0x26d48cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16968 << 16));
label_26d490:
    // 0x26d490: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x26d490u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26d494:
    // 0x26d494: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x26d494u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d498:
    // 0x26d498: 0x3c0742c8  lui         $a3, 0x42C8
    ctx->pc = 0x26d498u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17096 << 16));
label_26d49c:
    // 0x26d49c: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x26d49cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26d4a0:
    // 0x26d4a0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x26d4a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_26d4a4:
    // 0x26d4a4: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x26d4a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_26d4a8:
    // 0x26d4a8: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x26d4a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_26d4ac:
    // 0x26d4ac: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x26d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26d4b0:
    // 0x26d4b0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x26d4b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26d4b4:
    // 0x26d4b4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x26d4b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26d4b8:
    // 0x26d4b8: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x26d4b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26d4bc:
    // 0x26d4bc: 0xc0bbfe4  jal         func_2EFF90
label_26d4c0:
    if (ctx->pc == 0x26D4C0u) {
        ctx->pc = 0x26D4C4u;
        goto label_26d4c4;
    }
    ctx->pc = 0x26D4BCu;
    SET_GPR_U32(ctx, 31, 0x26D4C4u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26D4BCu, 0x26D4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D4C4u;
label_26d4c4:
    // 0x26d4c4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26d4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26d4c8:
    // 0x26d4c8: 0xc0675a4  jal         func_19D690
label_26d4cc:
    if (ctx->pc == 0x26D4CCu) {
        ctx->pc = 0x26D4D0u;
        goto label_26d4d0;
    }
    ctx->pc = 0x26D4C8u;
    SET_GPR_U32(ctx, 31, 0x26D4D0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26D4C8u, 0x26D4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D4D0u;
label_26d4d0:
    // 0x26d4d0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x26d4d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26d4d4:
    // 0x26d4d4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x26d4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_26d4d8:
    // 0x26d4d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26d4d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d4dc:
    // 0x26d4dc: 0x0  nop
    ctx->pc = 0x26d4dcu;
    // NOP
label_26d4e0:
    // 0x26d4e0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x26d4e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_26d4e4:
    // 0x26d4e4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26d4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d4e8:
    // 0x26d4e8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_26d4ec:
    // 0x26d4ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26d4ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26d4f0:
    // 0x26d4f0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_26d4f4:
    // 0x26d4f4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26d4f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26d4f8:
    // 0x26d4f8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x26d4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_26d4fc:
    // 0x26d4fc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x26d4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26d500:
    // 0x26d500: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26d500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26d504:
    // 0x26d504: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x26d504u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26d508:
    // 0x26d508: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x26d508u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26d50c:
    // 0x26d50c: 0xc0bbfe4  jal         func_2EFF90
label_26d510:
    if (ctx->pc == 0x26D510u) {
        ctx->pc = 0x26D514u;
        goto label_26d514;
    }
    ctx->pc = 0x26D50Cu;
    SET_GPR_U32(ctx, 31, 0x26D514u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26D50Cu, 0x26D514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D514u;
label_26d514:
    // 0x26d514: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26d514u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26d518:
    // 0x26d518: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x26d518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26d51c:
    // 0x26d51c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26d51cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26d520:
    // 0x26d520: 0xc0675a4  jal         func_19D690
label_26d524:
    if (ctx->pc == 0x26D524u) {
        ctx->pc = 0x26D528u;
        goto label_26d528;
    }
    ctx->pc = 0x26D520u;
    SET_GPR_U32(ctx, 31, 0x26D528u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26D520u, 0x26D528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D528u;
label_26d528:
    // 0x26d528: 0x3c03c348  lui         $v1, 0xC348
    ctx->pc = 0x26d528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49992 << 16));
label_26d52c:
    // 0x26d52c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26d52cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d530:
    // 0x26d530: 0x0  nop
    ctx->pc = 0x26d530u;
    // NOP
label_26d534:
    // 0x26d534: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x26d534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_26d538:
    // 0x26d538: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26d538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d53c:
    // 0x26d53c: 0x3c0542c8  lui         $a1, 0x42C8
    ctx->pc = 0x26d53cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17096 << 16));
label_26d540:
    // 0x26d540: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x26d540u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26d544:
    // 0x26d544: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26d544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_26d548:
    // 0x26d548: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26d548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26d54c:
    // 0x26d54c: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x26d54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_26d550:
    // 0x26d550: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x26d550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26d554:
    // 0x26d554: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x26d554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26d558:
    // 0x26d558: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x26d558u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26d55c:
    // 0x26d55c: 0xc0bbfe4  jal         func_2EFF90
label_26d560:
    if (ctx->pc == 0x26D560u) {
        ctx->pc = 0x26D564u;
        goto label_26d564;
    }
    ctx->pc = 0x26D55Cu;
    SET_GPR_U32(ctx, 31, 0x26D564u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26D55Cu, 0x26D564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D564u;
label_26d564:
    // 0x26d564: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x26d564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26d568:
    // 0x26d568: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26d568u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26d56c:
    // 0x26d56c: 0xc0675a4  jal         func_19D690
label_26d570:
    if (ctx->pc == 0x26D570u) {
        ctx->pc = 0x26D574u;
        goto label_26d574;
    }
    ctx->pc = 0x26D56Cu;
    SET_GPR_U32(ctx, 31, 0x26D574u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26D56Cu, 0x26D574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D574u;
label_26d574:
    // 0x26d574: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x26d574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_26d578:
    // 0x26d578: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26d578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d57c:
    // 0x26d57c: 0x0  nop
    ctx->pc = 0x26d57cu;
    // NOP
label_26d580:
    // 0x26d580: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x26d580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_26d584:
    // 0x26d584: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x26d584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_26d588:
    // 0x26d588: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x26d588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26d58c:
    // 0x26d58c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26d58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_26d590:
    // 0x26d590: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26d590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26d594:
    // 0x26d594: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26d594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d598:
    // 0x26d598: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x26d598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_26d59c:
    // 0x26d59c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x26d59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26d5a0:
    // 0x26d5a0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x26d5a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26d5a4:
    // 0x26d5a4: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x26d5a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26d5a8:
    // 0x26d5a8: 0xc0bbfe4  jal         func_2EFF90
label_26d5ac:
    if (ctx->pc == 0x26D5ACu) {
        ctx->pc = 0x26D5B0u;
        goto label_26d5b0;
    }
    ctx->pc = 0x26D5A8u;
    SET_GPR_U32(ctx, 31, 0x26D5B0u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26D5A8u, 0x26D5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D5B0u;
label_26d5b0:
    // 0x26d5b0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26d5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26d5b4:
    // 0x26d5b4: 0xc0675a4  jal         func_19D690
label_26d5b8:
    if (ctx->pc == 0x26D5B8u) {
        ctx->pc = 0x26D5BCu;
        goto label_26d5bc;
    }
    ctx->pc = 0x26D5B4u;
    SET_GPR_U32(ctx, 31, 0x26D5BCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26D5B4u, 0x26D5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D5BCu;
label_26d5bc:
    // 0x26d5bc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x26d5bcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26d5c0:
    // 0x26d5c0: 0x3c074248  lui         $a3, 0x4248
    ctx->pc = 0x26d5c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16968 << 16));
label_26d5c4:
    // 0x26d5c4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x26d5c4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d5c8:
    // 0x26d5c8: 0x0  nop
    ctx->pc = 0x26d5c8u;
    // NOP
label_26d5cc:
    // 0x26d5cc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x26d5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_26d5d0:
    // 0x26d5d0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_26d5d4:
    // 0x26d5d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26d5d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d5d8:
    // 0x26d5d8: 0x0  nop
    ctx->pc = 0x26d5d8u;
    // NOP
label_26d5dc:
    // 0x26d5dc: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x26d5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_26d5e0:
    // 0x26d5e0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26d5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d5e4:
    // 0x26d5e4: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x26d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_26d5e8:
    // 0x26d5e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26d5e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26d5ec:
    // 0x26d5ec: 0x3c054248  lui         $a1, 0x4248
    ctx->pc = 0x26d5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16968 << 16));
label_26d5f0:
    // 0x26d5f0: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x26d5f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26d5f4:
    // 0x26d5f4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x26d5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26d5f8:
    // 0x26d5f8: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x26d5f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_26d5fc:
    // 0x26d5fc: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x26d5fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26d600:
    // 0x26d600: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x26d600u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_26d604:
    // 0x26d604: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x26d604u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26d608:
    // 0x26d608: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x26d608u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_26d60c:
    // 0x26d60c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26d610:
    // 0x26d610: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x26d610u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26d614:
    // 0x26d614: 0xc0bbfe4  jal         func_2EFF90
label_26d618:
    if (ctx->pc == 0x26D618u) {
        ctx->pc = 0x26D61Cu;
        goto label_26d61c;
    }
    ctx->pc = 0x26D614u;
    SET_GPR_U32(ctx, 31, 0x26D61Cu);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26D614u, 0x26D61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D61Cu;
label_26d61c:
    // 0x26d61c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x26d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_26d620:
    // 0x26d620: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26d620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26d624:
    // 0x26d624: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x26d624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_26d628:
    // 0x26d628: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x26d628u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26d62c:
    // 0x26d62c: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x26d62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_26d630:
    // 0x26d630: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x26d630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_26d634:
    // 0x26d634: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x26d634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_26d638:
    // 0x26d638: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d63c:
    // 0x26d63c: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x26d63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_26d640:
    // 0x26d640: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26d640u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26d644:
    // 0x26d644: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26d644u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26d648:
    // 0x26d648: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x26d648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_26d64c:
    // 0x26d64c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26d650:
    // 0x26d650: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x26d650u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26d654:
    // 0x26d654: 0xc086488  jal         func_219220
label_26d658:
    if (ctx->pc == 0x26D658u) {
        ctx->pc = 0x26D65Cu;
        goto label_26d65c;
    }
    ctx->pc = 0x26D654u;
    SET_GPR_U32(ctx, 31, 0x26D65Cu);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x26D654u, 0x26D65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D65Cu;
label_26d65c:
    // 0x26d65c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d660:
    // 0x26d660: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x26d660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d664:
    // 0x26d664: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26d664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d668:
    // 0x26d668: 0xe4801290  swc1        $f0, 0x1290($a0)
    ctx->pc = 0x26d668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4752), bits); }
label_26d66c:
    // 0x26d66c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x26d66cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d670:
    // 0x26d670: 0x84a3127c  lh          $v1, 0x127C($a1)
    ctx->pc = 0x26d670u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4732)));
label_26d674:
    // 0x26d674: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x26d674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_26d678:
    // 0x26d678: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x26d678u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_26d67c:
    // 0x26d67c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x26d67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_26d680:
    // 0x26d680: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_26d684:
    if (ctx->pc == 0x26D684u) {
        ctx->pc = 0x26D688u;
        goto label_26d688;
    }
    ctx->pc = 0x26D680u;
    {
        const bool branch_taken_0x26d680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d680) {
            ctx->pc = 0x26D690u;
            goto label_26d690;
        }
    }
    ctx->pc = 0x26D688u;
label_26d688:
    // 0x26d688: 0xc0bc094  jal         func_2F0250
label_26d68c:
    if (ctx->pc == 0x26D68Cu) {
        ctx->pc = 0x26D690u;
        goto label_26d690;
    }
    ctx->pc = 0x26D688u;
    SET_GPR_U32(ctx, 31, 0x26D690u);
    ctx->pc = 0x2F0250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0250u, 0x26D688u, 0x26D690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D690u;
label_26d690:
    // 0x26d690: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26d694:
    // 0x26d694: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x26d694u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
label_26d698:
    // 0x26d698: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x26d698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_26d69c:
    // 0x26d69c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x26d69cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_26d6a0:
    // 0x26d6a0: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x26d6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_26d6a4:
    // 0x26d6a4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_26d6a8:
    if (ctx->pc == 0x26D6A8u) {
        ctx->pc = 0x26D6ACu;
        goto label_26d6ac;
    }
    ctx->pc = 0x26D6A4u;
    {
        const bool branch_taken_0x26d6a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d6a4) {
            ctx->pc = 0x26D6B4u;
            goto label_26d6b4;
        }
    }
    ctx->pc = 0x26D6ACu;
label_26d6ac:
    // 0x26d6ac: 0xc0bc094  jal         func_2F0250
label_26d6b0:
    if (ctx->pc == 0x26D6B0u) {
        ctx->pc = 0x26D6B4u;
        goto label_26d6b4;
    }
    ctx->pc = 0x26D6ACu;
    SET_GPR_U32(ctx, 31, 0x26D6B4u);
    ctx->pc = 0x2F0250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0250u, 0x26D6ACu, 0x26D6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D6B4u;
label_26d6b4:
    // 0x26d6b4: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x26d6b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26d6b8:
    // 0x26d6b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26d6b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26d6bc:
    // 0x26d6bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26d6bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_26d6c0:
    // 0x26d6c0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x26d6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_26d6c4:
    // 0x26d6c4: 0x3e00008  jr          $ra
label_26d6c8:
    if (ctx->pc == 0x26D6C8u) {
        ctx->pc = 0x26D6CCu;
        goto label_fallthrough_0x26d6c4;
    }
    ctx->pc = 0x26D6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D6C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26d6c4:
    ctx->pc = 0x26D6CCu;
}
