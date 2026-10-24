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

// Function: Player_move
// Address: 0x14d880 - 0x14e408
void Player_move_0x14d880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Player_move_0x14d880");
#endif

    switch (ctx->pc) {
        case 0x14d880u: goto label_14d880;
        case 0x14d884u: goto label_14d884;
        case 0x14d888u: goto label_14d888;
        case 0x14d88cu: goto label_14d88c;
        case 0x14d890u: goto label_14d890;
        case 0x14d894u: goto label_14d894;
        case 0x14d898u: goto label_14d898;
        case 0x14d89cu: goto label_14d89c;
        case 0x14d8a0u: goto label_14d8a0;
        case 0x14d8a4u: goto label_14d8a4;
        case 0x14d8a8u: goto label_14d8a8;
        case 0x14d8acu: goto label_14d8ac;
        case 0x14d8b0u: goto label_14d8b0;
        case 0x14d8b4u: goto label_14d8b4;
        case 0x14d8b8u: goto label_14d8b8;
        case 0x14d8bcu: goto label_14d8bc;
        case 0x14d8c0u: goto label_14d8c0;
        case 0x14d8c4u: goto label_14d8c4;
        case 0x14d8c8u: goto label_14d8c8;
        case 0x14d8ccu: goto label_14d8cc;
        case 0x14d8d0u: goto label_14d8d0;
        case 0x14d8d4u: goto label_14d8d4;
        case 0x14d8d8u: goto label_14d8d8;
        case 0x14d8dcu: goto label_14d8dc;
        case 0x14d8e0u: goto label_14d8e0;
        case 0x14d8e4u: goto label_14d8e4;
        case 0x14d8e8u: goto label_14d8e8;
        case 0x14d8ecu: goto label_14d8ec;
        case 0x14d8f0u: goto label_14d8f0;
        case 0x14d8f4u: goto label_14d8f4;
        case 0x14d8f8u: goto label_14d8f8;
        case 0x14d8fcu: goto label_14d8fc;
        case 0x14d900u: goto label_14d900;
        case 0x14d904u: goto label_14d904;
        case 0x14d908u: goto label_14d908;
        case 0x14d90cu: goto label_14d90c;
        case 0x14d910u: goto label_14d910;
        case 0x14d914u: goto label_14d914;
        case 0x14d918u: goto label_14d918;
        case 0x14d91cu: goto label_14d91c;
        case 0x14d920u: goto label_14d920;
        case 0x14d924u: goto label_14d924;
        case 0x14d928u: goto label_14d928;
        case 0x14d92cu: goto label_14d92c;
        case 0x14d930u: goto label_14d930;
        case 0x14d934u: goto label_14d934;
        case 0x14d938u: goto label_14d938;
        case 0x14d93cu: goto label_14d93c;
        case 0x14d940u: goto label_14d940;
        case 0x14d944u: goto label_14d944;
        case 0x14d948u: goto label_14d948;
        case 0x14d94cu: goto label_14d94c;
        case 0x14d950u: goto label_14d950;
        case 0x14d954u: goto label_14d954;
        case 0x14d958u: goto label_14d958;
        case 0x14d95cu: goto label_14d95c;
        case 0x14d960u: goto label_14d960;
        case 0x14d964u: goto label_14d964;
        case 0x14d968u: goto label_14d968;
        case 0x14d96cu: goto label_14d96c;
        case 0x14d970u: goto label_14d970;
        case 0x14d974u: goto label_14d974;
        case 0x14d978u: goto label_14d978;
        case 0x14d97cu: goto label_14d97c;
        case 0x14d980u: goto label_14d980;
        case 0x14d984u: goto label_14d984;
        case 0x14d988u: goto label_14d988;
        case 0x14d98cu: goto label_14d98c;
        case 0x14d990u: goto label_14d990;
        case 0x14d994u: goto label_14d994;
        case 0x14d998u: goto label_14d998;
        case 0x14d99cu: goto label_14d99c;
        case 0x14d9a0u: goto label_14d9a0;
        case 0x14d9a4u: goto label_14d9a4;
        case 0x14d9a8u: goto label_14d9a8;
        case 0x14d9acu: goto label_14d9ac;
        case 0x14d9b0u: goto label_14d9b0;
        case 0x14d9b4u: goto label_14d9b4;
        case 0x14d9b8u: goto label_14d9b8;
        case 0x14d9bcu: goto label_14d9bc;
        case 0x14d9c0u: goto label_14d9c0;
        case 0x14d9c4u: goto label_14d9c4;
        case 0x14d9c8u: goto label_14d9c8;
        case 0x14d9ccu: goto label_14d9cc;
        case 0x14d9d0u: goto label_14d9d0;
        case 0x14d9d4u: goto label_14d9d4;
        case 0x14d9d8u: goto label_14d9d8;
        case 0x14d9dcu: goto label_14d9dc;
        case 0x14d9e0u: goto label_14d9e0;
        case 0x14d9e4u: goto label_14d9e4;
        case 0x14d9e8u: goto label_14d9e8;
        case 0x14d9ecu: goto label_14d9ec;
        case 0x14d9f0u: goto label_14d9f0;
        case 0x14d9f4u: goto label_14d9f4;
        case 0x14d9f8u: goto label_14d9f8;
        case 0x14d9fcu: goto label_14d9fc;
        case 0x14da00u: goto label_14da00;
        case 0x14da04u: goto label_14da04;
        case 0x14da08u: goto label_14da08;
        case 0x14da0cu: goto label_14da0c;
        case 0x14da10u: goto label_14da10;
        case 0x14da14u: goto label_14da14;
        case 0x14da18u: goto label_14da18;
        case 0x14da1cu: goto label_14da1c;
        case 0x14da20u: goto label_14da20;
        case 0x14da24u: goto label_14da24;
        case 0x14da28u: goto label_14da28;
        case 0x14da2cu: goto label_14da2c;
        case 0x14da30u: goto label_14da30;
        case 0x14da34u: goto label_14da34;
        case 0x14da38u: goto label_14da38;
        case 0x14da3cu: goto label_14da3c;
        case 0x14da40u: goto label_14da40;
        case 0x14da44u: goto label_14da44;
        case 0x14da48u: goto label_14da48;
        case 0x14da4cu: goto label_14da4c;
        case 0x14da50u: goto label_14da50;
        case 0x14da54u: goto label_14da54;
        case 0x14da58u: goto label_14da58;
        case 0x14da5cu: goto label_14da5c;
        case 0x14da60u: goto label_14da60;
        case 0x14da64u: goto label_14da64;
        case 0x14da68u: goto label_14da68;
        case 0x14da6cu: goto label_14da6c;
        case 0x14da70u: goto label_14da70;
        case 0x14da74u: goto label_14da74;
        case 0x14da78u: goto label_14da78;
        case 0x14da7cu: goto label_14da7c;
        case 0x14da80u: goto label_14da80;
        case 0x14da84u: goto label_14da84;
        case 0x14da88u: goto label_14da88;
        case 0x14da8cu: goto label_14da8c;
        case 0x14da90u: goto label_14da90;
        case 0x14da94u: goto label_14da94;
        case 0x14da98u: goto label_14da98;
        case 0x14da9cu: goto label_14da9c;
        case 0x14daa0u: goto label_14daa0;
        case 0x14daa4u: goto label_14daa4;
        case 0x14daa8u: goto label_14daa8;
        case 0x14daacu: goto label_14daac;
        case 0x14dab0u: goto label_14dab0;
        case 0x14dab4u: goto label_14dab4;
        case 0x14dab8u: goto label_14dab8;
        case 0x14dabcu: goto label_14dabc;
        case 0x14dac0u: goto label_14dac0;
        case 0x14dac4u: goto label_14dac4;
        case 0x14dac8u: goto label_14dac8;
        case 0x14daccu: goto label_14dacc;
        case 0x14dad0u: goto label_14dad0;
        case 0x14dad4u: goto label_14dad4;
        case 0x14dad8u: goto label_14dad8;
        case 0x14dadcu: goto label_14dadc;
        case 0x14dae0u: goto label_14dae0;
        case 0x14dae4u: goto label_14dae4;
        case 0x14dae8u: goto label_14dae8;
        case 0x14daecu: goto label_14daec;
        case 0x14daf0u: goto label_14daf0;
        case 0x14daf4u: goto label_14daf4;
        case 0x14daf8u: goto label_14daf8;
        case 0x14dafcu: goto label_14dafc;
        case 0x14db00u: goto label_14db00;
        case 0x14db04u: goto label_14db04;
        case 0x14db08u: goto label_14db08;
        case 0x14db0cu: goto label_14db0c;
        case 0x14db10u: goto label_14db10;
        case 0x14db14u: goto label_14db14;
        case 0x14db18u: goto label_14db18;
        case 0x14db1cu: goto label_14db1c;
        case 0x14db20u: goto label_14db20;
        case 0x14db24u: goto label_14db24;
        case 0x14db28u: goto label_14db28;
        case 0x14db2cu: goto label_14db2c;
        case 0x14db30u: goto label_14db30;
        case 0x14db34u: goto label_14db34;
        case 0x14db38u: goto label_14db38;
        case 0x14db3cu: goto label_14db3c;
        case 0x14db40u: goto label_14db40;
        case 0x14db44u: goto label_14db44;
        case 0x14db48u: goto label_14db48;
        case 0x14db4cu: goto label_14db4c;
        case 0x14db50u: goto label_14db50;
        case 0x14db54u: goto label_14db54;
        case 0x14db58u: goto label_14db58;
        case 0x14db5cu: goto label_14db5c;
        case 0x14db60u: goto label_14db60;
        case 0x14db64u: goto label_14db64;
        case 0x14db68u: goto label_14db68;
        case 0x14db6cu: goto label_14db6c;
        case 0x14db70u: goto label_14db70;
        case 0x14db74u: goto label_14db74;
        case 0x14db78u: goto label_14db78;
        case 0x14db7cu: goto label_14db7c;
        case 0x14db80u: goto label_14db80;
        case 0x14db84u: goto label_14db84;
        case 0x14db88u: goto label_14db88;
        case 0x14db8cu: goto label_14db8c;
        case 0x14db90u: goto label_14db90;
        case 0x14db94u: goto label_14db94;
        case 0x14db98u: goto label_14db98;
        case 0x14db9cu: goto label_14db9c;
        case 0x14dba0u: goto label_14dba0;
        case 0x14dba4u: goto label_14dba4;
        case 0x14dba8u: goto label_14dba8;
        case 0x14dbacu: goto label_14dbac;
        case 0x14dbb0u: goto label_14dbb0;
        case 0x14dbb4u: goto label_14dbb4;
        case 0x14dbb8u: goto label_14dbb8;
        case 0x14dbbcu: goto label_14dbbc;
        case 0x14dbc0u: goto label_14dbc0;
        case 0x14dbc4u: goto label_14dbc4;
        case 0x14dbc8u: goto label_14dbc8;
        case 0x14dbccu: goto label_14dbcc;
        case 0x14dbd0u: goto label_14dbd0;
        case 0x14dbd4u: goto label_14dbd4;
        case 0x14dbd8u: goto label_14dbd8;
        case 0x14dbdcu: goto label_14dbdc;
        case 0x14dbe0u: goto label_14dbe0;
        case 0x14dbe4u: goto label_14dbe4;
        case 0x14dbe8u: goto label_14dbe8;
        case 0x14dbecu: goto label_14dbec;
        case 0x14dbf0u: goto label_14dbf0;
        case 0x14dbf4u: goto label_14dbf4;
        case 0x14dbf8u: goto label_14dbf8;
        case 0x14dbfcu: goto label_14dbfc;
        case 0x14dc00u: goto label_14dc00;
        case 0x14dc04u: goto label_14dc04;
        case 0x14dc08u: goto label_14dc08;
        case 0x14dc0cu: goto label_14dc0c;
        case 0x14dc10u: goto label_14dc10;
        case 0x14dc14u: goto label_14dc14;
        case 0x14dc18u: goto label_14dc18;
        case 0x14dc1cu: goto label_14dc1c;
        case 0x14dc20u: goto label_14dc20;
        case 0x14dc24u: goto label_14dc24;
        case 0x14dc28u: goto label_14dc28;
        case 0x14dc2cu: goto label_14dc2c;
        case 0x14dc30u: goto label_14dc30;
        case 0x14dc34u: goto label_14dc34;
        case 0x14dc38u: goto label_14dc38;
        case 0x14dc3cu: goto label_14dc3c;
        case 0x14dc40u: goto label_14dc40;
        case 0x14dc44u: goto label_14dc44;
        case 0x14dc48u: goto label_14dc48;
        case 0x14dc4cu: goto label_14dc4c;
        case 0x14dc50u: goto label_14dc50;
        case 0x14dc54u: goto label_14dc54;
        case 0x14dc58u: goto label_14dc58;
        case 0x14dc5cu: goto label_14dc5c;
        case 0x14dc60u: goto label_14dc60;
        case 0x14dc64u: goto label_14dc64;
        case 0x14dc68u: goto label_14dc68;
        case 0x14dc6cu: goto label_14dc6c;
        case 0x14dc70u: goto label_14dc70;
        case 0x14dc74u: goto label_14dc74;
        case 0x14dc78u: goto label_14dc78;
        case 0x14dc7cu: goto label_14dc7c;
        case 0x14dc80u: goto label_14dc80;
        case 0x14dc84u: goto label_14dc84;
        case 0x14dc88u: goto label_14dc88;
        case 0x14dc8cu: goto label_14dc8c;
        case 0x14dc90u: goto label_14dc90;
        case 0x14dc94u: goto label_14dc94;
        case 0x14dc98u: goto label_14dc98;
        case 0x14dc9cu: goto label_14dc9c;
        case 0x14dca0u: goto label_14dca0;
        case 0x14dca4u: goto label_14dca4;
        case 0x14dca8u: goto label_14dca8;
        case 0x14dcacu: goto label_14dcac;
        case 0x14dcb0u: goto label_14dcb0;
        case 0x14dcb4u: goto label_14dcb4;
        case 0x14dcb8u: goto label_14dcb8;
        case 0x14dcbcu: goto label_14dcbc;
        case 0x14dcc0u: goto label_14dcc0;
        case 0x14dcc4u: goto label_14dcc4;
        case 0x14dcc8u: goto label_14dcc8;
        case 0x14dcccu: goto label_14dccc;
        case 0x14dcd0u: goto label_14dcd0;
        case 0x14dcd4u: goto label_14dcd4;
        case 0x14dcd8u: goto label_14dcd8;
        case 0x14dcdcu: goto label_14dcdc;
        case 0x14dce0u: goto label_14dce0;
        case 0x14dce4u: goto label_14dce4;
        case 0x14dce8u: goto label_14dce8;
        case 0x14dcecu: goto label_14dcec;
        case 0x14dcf0u: goto label_14dcf0;
        case 0x14dcf4u: goto label_14dcf4;
        case 0x14dcf8u: goto label_14dcf8;
        case 0x14dcfcu: goto label_14dcfc;
        case 0x14dd00u: goto label_14dd00;
        case 0x14dd04u: goto label_14dd04;
        case 0x14dd08u: goto label_14dd08;
        case 0x14dd0cu: goto label_14dd0c;
        case 0x14dd10u: goto label_14dd10;
        case 0x14dd14u: goto label_14dd14;
        case 0x14dd18u: goto label_14dd18;
        case 0x14dd1cu: goto label_14dd1c;
        case 0x14dd20u: goto label_14dd20;
        case 0x14dd24u: goto label_14dd24;
        case 0x14dd28u: goto label_14dd28;
        case 0x14dd2cu: goto label_14dd2c;
        case 0x14dd30u: goto label_14dd30;
        case 0x14dd34u: goto label_14dd34;
        case 0x14dd38u: goto label_14dd38;
        case 0x14dd3cu: goto label_14dd3c;
        case 0x14dd40u: goto label_14dd40;
        case 0x14dd44u: goto label_14dd44;
        case 0x14dd48u: goto label_14dd48;
        case 0x14dd4cu: goto label_14dd4c;
        case 0x14dd50u: goto label_14dd50;
        case 0x14dd54u: goto label_14dd54;
        case 0x14dd58u: goto label_14dd58;
        case 0x14dd5cu: goto label_14dd5c;
        case 0x14dd60u: goto label_14dd60;
        case 0x14dd64u: goto label_14dd64;
        case 0x14dd68u: goto label_14dd68;
        case 0x14dd6cu: goto label_14dd6c;
        case 0x14dd70u: goto label_14dd70;
        case 0x14dd74u: goto label_14dd74;
        case 0x14dd78u: goto label_14dd78;
        case 0x14dd7cu: goto label_14dd7c;
        case 0x14dd80u: goto label_14dd80;
        case 0x14dd84u: goto label_14dd84;
        case 0x14dd88u: goto label_14dd88;
        case 0x14dd8cu: goto label_14dd8c;
        case 0x14dd90u: goto label_14dd90;
        case 0x14dd94u: goto label_14dd94;
        case 0x14dd98u: goto label_14dd98;
        case 0x14dd9cu: goto label_14dd9c;
        case 0x14dda0u: goto label_14dda0;
        case 0x14dda4u: goto label_14dda4;
        case 0x14dda8u: goto label_14dda8;
        case 0x14ddacu: goto label_14ddac;
        case 0x14ddb0u: goto label_14ddb0;
        case 0x14ddb4u: goto label_14ddb4;
        case 0x14ddb8u: goto label_14ddb8;
        case 0x14ddbcu: goto label_14ddbc;
        case 0x14ddc0u: goto label_14ddc0;
        case 0x14ddc4u: goto label_14ddc4;
        case 0x14ddc8u: goto label_14ddc8;
        case 0x14ddccu: goto label_14ddcc;
        case 0x14ddd0u: goto label_14ddd0;
        case 0x14ddd4u: goto label_14ddd4;
        case 0x14ddd8u: goto label_14ddd8;
        case 0x14dddcu: goto label_14dddc;
        case 0x14dde0u: goto label_14dde0;
        case 0x14dde4u: goto label_14dde4;
        case 0x14dde8u: goto label_14dde8;
        case 0x14ddecu: goto label_14ddec;
        case 0x14ddf0u: goto label_14ddf0;
        case 0x14ddf4u: goto label_14ddf4;
        case 0x14ddf8u: goto label_14ddf8;
        case 0x14ddfcu: goto label_14ddfc;
        case 0x14de00u: goto label_14de00;
        case 0x14de04u: goto label_14de04;
        case 0x14de08u: goto label_14de08;
        case 0x14de0cu: goto label_14de0c;
        case 0x14de10u: goto label_14de10;
        case 0x14de14u: goto label_14de14;
        case 0x14de18u: goto label_14de18;
        case 0x14de1cu: goto label_14de1c;
        case 0x14de20u: goto label_14de20;
        case 0x14de24u: goto label_14de24;
        case 0x14de28u: goto label_14de28;
        case 0x14de2cu: goto label_14de2c;
        case 0x14de30u: goto label_14de30;
        case 0x14de34u: goto label_14de34;
        case 0x14de38u: goto label_14de38;
        case 0x14de3cu: goto label_14de3c;
        case 0x14de40u: goto label_14de40;
        case 0x14de44u: goto label_14de44;
        case 0x14de48u: goto label_14de48;
        case 0x14de4cu: goto label_14de4c;
        case 0x14de50u: goto label_14de50;
        case 0x14de54u: goto label_14de54;
        case 0x14de58u: goto label_14de58;
        case 0x14de5cu: goto label_14de5c;
        case 0x14de60u: goto label_14de60;
        case 0x14de64u: goto label_14de64;
        case 0x14de68u: goto label_14de68;
        case 0x14de6cu: goto label_14de6c;
        case 0x14de70u: goto label_14de70;
        case 0x14de74u: goto label_14de74;
        case 0x14de78u: goto label_14de78;
        case 0x14de7cu: goto label_14de7c;
        case 0x14de80u: goto label_14de80;
        case 0x14de84u: goto label_14de84;
        case 0x14de88u: goto label_14de88;
        case 0x14de8cu: goto label_14de8c;
        case 0x14de90u: goto label_14de90;
        case 0x14de94u: goto label_14de94;
        case 0x14de98u: goto label_14de98;
        case 0x14de9cu: goto label_14de9c;
        case 0x14dea0u: goto label_14dea0;
        case 0x14dea4u: goto label_14dea4;
        case 0x14dea8u: goto label_14dea8;
        case 0x14deacu: goto label_14deac;
        case 0x14deb0u: goto label_14deb0;
        case 0x14deb4u: goto label_14deb4;
        case 0x14deb8u: goto label_14deb8;
        case 0x14debcu: goto label_14debc;
        case 0x14dec0u: goto label_14dec0;
        case 0x14dec4u: goto label_14dec4;
        case 0x14dec8u: goto label_14dec8;
        case 0x14deccu: goto label_14decc;
        case 0x14ded0u: goto label_14ded0;
        case 0x14ded4u: goto label_14ded4;
        case 0x14ded8u: goto label_14ded8;
        case 0x14dedcu: goto label_14dedc;
        case 0x14dee0u: goto label_14dee0;
        case 0x14dee4u: goto label_14dee4;
        case 0x14dee8u: goto label_14dee8;
        case 0x14deecu: goto label_14deec;
        case 0x14def0u: goto label_14def0;
        case 0x14def4u: goto label_14def4;
        case 0x14def8u: goto label_14def8;
        case 0x14defcu: goto label_14defc;
        case 0x14df00u: goto label_14df00;
        case 0x14df04u: goto label_14df04;
        case 0x14df08u: goto label_14df08;
        case 0x14df0cu: goto label_14df0c;
        case 0x14df10u: goto label_14df10;
        case 0x14df14u: goto label_14df14;
        case 0x14df18u: goto label_14df18;
        case 0x14df1cu: goto label_14df1c;
        case 0x14df20u: goto label_14df20;
        case 0x14df24u: goto label_14df24;
        case 0x14df28u: goto label_14df28;
        case 0x14df2cu: goto label_14df2c;
        case 0x14df30u: goto label_14df30;
        case 0x14df34u: goto label_14df34;
        case 0x14df38u: goto label_14df38;
        case 0x14df3cu: goto label_14df3c;
        case 0x14df40u: goto label_14df40;
        case 0x14df44u: goto label_14df44;
        case 0x14df48u: goto label_14df48;
        case 0x14df4cu: goto label_14df4c;
        case 0x14df50u: goto label_14df50;
        case 0x14df54u: goto label_14df54;
        case 0x14df58u: goto label_14df58;
        case 0x14df5cu: goto label_14df5c;
        case 0x14df60u: goto label_14df60;
        case 0x14df64u: goto label_14df64;
        case 0x14df68u: goto label_14df68;
        case 0x14df6cu: goto label_14df6c;
        case 0x14df70u: goto label_14df70;
        case 0x14df74u: goto label_14df74;
        case 0x14df78u: goto label_14df78;
        case 0x14df7cu: goto label_14df7c;
        case 0x14df80u: goto label_14df80;
        case 0x14df84u: goto label_14df84;
        case 0x14df88u: goto label_14df88;
        case 0x14df8cu: goto label_14df8c;
        case 0x14df90u: goto label_14df90;
        case 0x14df94u: goto label_14df94;
        case 0x14df98u: goto label_14df98;
        case 0x14df9cu: goto label_14df9c;
        case 0x14dfa0u: goto label_14dfa0;
        case 0x14dfa4u: goto label_14dfa4;
        case 0x14dfa8u: goto label_14dfa8;
        case 0x14dfacu: goto label_14dfac;
        case 0x14dfb0u: goto label_14dfb0;
        case 0x14dfb4u: goto label_14dfb4;
        case 0x14dfb8u: goto label_14dfb8;
        case 0x14dfbcu: goto label_14dfbc;
        case 0x14dfc0u: goto label_14dfc0;
        case 0x14dfc4u: goto label_14dfc4;
        case 0x14dfc8u: goto label_14dfc8;
        case 0x14dfccu: goto label_14dfcc;
        case 0x14dfd0u: goto label_14dfd0;
        case 0x14dfd4u: goto label_14dfd4;
        case 0x14dfd8u: goto label_14dfd8;
        case 0x14dfdcu: goto label_14dfdc;
        case 0x14dfe0u: goto label_14dfe0;
        case 0x14dfe4u: goto label_14dfe4;
        case 0x14dfe8u: goto label_14dfe8;
        case 0x14dfecu: goto label_14dfec;
        case 0x14dff0u: goto label_14dff0;
        case 0x14dff4u: goto label_14dff4;
        case 0x14dff8u: goto label_14dff8;
        case 0x14dffcu: goto label_14dffc;
        case 0x14e000u: goto label_14e000;
        case 0x14e004u: goto label_14e004;
        case 0x14e008u: goto label_14e008;
        case 0x14e00cu: goto label_14e00c;
        case 0x14e010u: goto label_14e010;
        case 0x14e014u: goto label_14e014;
        case 0x14e018u: goto label_14e018;
        case 0x14e01cu: goto label_14e01c;
        case 0x14e020u: goto label_14e020;
        case 0x14e024u: goto label_14e024;
        case 0x14e028u: goto label_14e028;
        case 0x14e02cu: goto label_14e02c;
        case 0x14e030u: goto label_14e030;
        case 0x14e034u: goto label_14e034;
        case 0x14e038u: goto label_14e038;
        case 0x14e03cu: goto label_14e03c;
        case 0x14e040u: goto label_14e040;
        case 0x14e044u: goto label_14e044;
        case 0x14e048u: goto label_14e048;
        case 0x14e04cu: goto label_14e04c;
        case 0x14e050u: goto label_14e050;
        case 0x14e054u: goto label_14e054;
        case 0x14e058u: goto label_14e058;
        case 0x14e05cu: goto label_14e05c;
        case 0x14e060u: goto label_14e060;
        case 0x14e064u: goto label_14e064;
        case 0x14e068u: goto label_14e068;
        case 0x14e06cu: goto label_14e06c;
        case 0x14e070u: goto label_14e070;
        case 0x14e074u: goto label_14e074;
        case 0x14e078u: goto label_14e078;
        case 0x14e07cu: goto label_14e07c;
        case 0x14e080u: goto label_14e080;
        case 0x14e084u: goto label_14e084;
        case 0x14e088u: goto label_14e088;
        case 0x14e08cu: goto label_14e08c;
        case 0x14e090u: goto label_14e090;
        case 0x14e094u: goto label_14e094;
        case 0x14e098u: goto label_14e098;
        case 0x14e09cu: goto label_14e09c;
        case 0x14e0a0u: goto label_14e0a0;
        case 0x14e0a4u: goto label_14e0a4;
        case 0x14e0a8u: goto label_14e0a8;
        case 0x14e0acu: goto label_14e0ac;
        case 0x14e0b0u: goto label_14e0b0;
        case 0x14e0b4u: goto label_14e0b4;
        case 0x14e0b8u: goto label_14e0b8;
        case 0x14e0bcu: goto label_14e0bc;
        case 0x14e0c0u: goto label_14e0c0;
        case 0x14e0c4u: goto label_14e0c4;
        case 0x14e0c8u: goto label_14e0c8;
        case 0x14e0ccu: goto label_14e0cc;
        case 0x14e0d0u: goto label_14e0d0;
        case 0x14e0d4u: goto label_14e0d4;
        case 0x14e0d8u: goto label_14e0d8;
        case 0x14e0dcu: goto label_14e0dc;
        case 0x14e0e0u: goto label_14e0e0;
        case 0x14e0e4u: goto label_14e0e4;
        case 0x14e0e8u: goto label_14e0e8;
        case 0x14e0ecu: goto label_14e0ec;
        case 0x14e0f0u: goto label_14e0f0;
        case 0x14e0f4u: goto label_14e0f4;
        case 0x14e0f8u: goto label_14e0f8;
        case 0x14e0fcu: goto label_14e0fc;
        case 0x14e100u: goto label_14e100;
        case 0x14e104u: goto label_14e104;
        case 0x14e108u: goto label_14e108;
        case 0x14e10cu: goto label_14e10c;
        case 0x14e110u: goto label_14e110;
        case 0x14e114u: goto label_14e114;
        case 0x14e118u: goto label_14e118;
        case 0x14e11cu: goto label_14e11c;
        case 0x14e120u: goto label_14e120;
        case 0x14e124u: goto label_14e124;
        case 0x14e128u: goto label_14e128;
        case 0x14e12cu: goto label_14e12c;
        case 0x14e130u: goto label_14e130;
        case 0x14e134u: goto label_14e134;
        case 0x14e138u: goto label_14e138;
        case 0x14e13cu: goto label_14e13c;
        case 0x14e140u: goto label_14e140;
        case 0x14e144u: goto label_14e144;
        case 0x14e148u: goto label_14e148;
        case 0x14e14cu: goto label_14e14c;
        case 0x14e150u: goto label_14e150;
        case 0x14e154u: goto label_14e154;
        case 0x14e158u: goto label_14e158;
        case 0x14e15cu: goto label_14e15c;
        case 0x14e160u: goto label_14e160;
        case 0x14e164u: goto label_14e164;
        case 0x14e168u: goto label_14e168;
        case 0x14e16cu: goto label_14e16c;
        case 0x14e170u: goto label_14e170;
        case 0x14e174u: goto label_14e174;
        case 0x14e178u: goto label_14e178;
        case 0x14e17cu: goto label_14e17c;
        case 0x14e180u: goto label_14e180;
        case 0x14e184u: goto label_14e184;
        case 0x14e188u: goto label_14e188;
        case 0x14e18cu: goto label_14e18c;
        case 0x14e190u: goto label_14e190;
        case 0x14e194u: goto label_14e194;
        case 0x14e198u: goto label_14e198;
        case 0x14e19cu: goto label_14e19c;
        case 0x14e1a0u: goto label_14e1a0;
        case 0x14e1a4u: goto label_14e1a4;
        case 0x14e1a8u: goto label_14e1a8;
        case 0x14e1acu: goto label_14e1ac;
        case 0x14e1b0u: goto label_14e1b0;
        case 0x14e1b4u: goto label_14e1b4;
        case 0x14e1b8u: goto label_14e1b8;
        case 0x14e1bcu: goto label_14e1bc;
        case 0x14e1c0u: goto label_14e1c0;
        case 0x14e1c4u: goto label_14e1c4;
        case 0x14e1c8u: goto label_14e1c8;
        case 0x14e1ccu: goto label_14e1cc;
        case 0x14e1d0u: goto label_14e1d0;
        case 0x14e1d4u: goto label_14e1d4;
        case 0x14e1d8u: goto label_14e1d8;
        case 0x14e1dcu: goto label_14e1dc;
        case 0x14e1e0u: goto label_14e1e0;
        case 0x14e1e4u: goto label_14e1e4;
        case 0x14e1e8u: goto label_14e1e8;
        case 0x14e1ecu: goto label_14e1ec;
        case 0x14e1f0u: goto label_14e1f0;
        case 0x14e1f4u: goto label_14e1f4;
        case 0x14e1f8u: goto label_14e1f8;
        case 0x14e1fcu: goto label_14e1fc;
        case 0x14e200u: goto label_14e200;
        case 0x14e204u: goto label_14e204;
        case 0x14e208u: goto label_14e208;
        case 0x14e20cu: goto label_14e20c;
        case 0x14e210u: goto label_14e210;
        case 0x14e214u: goto label_14e214;
        case 0x14e218u: goto label_14e218;
        case 0x14e21cu: goto label_14e21c;
        case 0x14e220u: goto label_14e220;
        case 0x14e224u: goto label_14e224;
        case 0x14e228u: goto label_14e228;
        case 0x14e22cu: goto label_14e22c;
        case 0x14e230u: goto label_14e230;
        case 0x14e234u: goto label_14e234;
        case 0x14e238u: goto label_14e238;
        case 0x14e23cu: goto label_14e23c;
        case 0x14e240u: goto label_14e240;
        case 0x14e244u: goto label_14e244;
        case 0x14e248u: goto label_14e248;
        case 0x14e24cu: goto label_14e24c;
        case 0x14e250u: goto label_14e250;
        case 0x14e254u: goto label_14e254;
        case 0x14e258u: goto label_14e258;
        case 0x14e25cu: goto label_14e25c;
        case 0x14e260u: goto label_14e260;
        case 0x14e264u: goto label_14e264;
        case 0x14e268u: goto label_14e268;
        case 0x14e26cu: goto label_14e26c;
        case 0x14e270u: goto label_14e270;
        case 0x14e274u: goto label_14e274;
        case 0x14e278u: goto label_14e278;
        case 0x14e27cu: goto label_14e27c;
        case 0x14e280u: goto label_14e280;
        case 0x14e284u: goto label_14e284;
        case 0x14e288u: goto label_14e288;
        case 0x14e28cu: goto label_14e28c;
        case 0x14e290u: goto label_14e290;
        case 0x14e294u: goto label_14e294;
        case 0x14e298u: goto label_14e298;
        case 0x14e29cu: goto label_14e29c;
        case 0x14e2a0u: goto label_14e2a0;
        case 0x14e2a4u: goto label_14e2a4;
        case 0x14e2a8u: goto label_14e2a8;
        case 0x14e2acu: goto label_14e2ac;
        case 0x14e2b0u: goto label_14e2b0;
        case 0x14e2b4u: goto label_14e2b4;
        case 0x14e2b8u: goto label_14e2b8;
        case 0x14e2bcu: goto label_14e2bc;
        case 0x14e2c0u: goto label_14e2c0;
        case 0x14e2c4u: goto label_14e2c4;
        case 0x14e2c8u: goto label_14e2c8;
        case 0x14e2ccu: goto label_14e2cc;
        case 0x14e2d0u: goto label_14e2d0;
        case 0x14e2d4u: goto label_14e2d4;
        case 0x14e2d8u: goto label_14e2d8;
        case 0x14e2dcu: goto label_14e2dc;
        case 0x14e2e0u: goto label_14e2e0;
        case 0x14e2e4u: goto label_14e2e4;
        case 0x14e2e8u: goto label_14e2e8;
        case 0x14e2ecu: goto label_14e2ec;
        case 0x14e2f0u: goto label_14e2f0;
        case 0x14e2f4u: goto label_14e2f4;
        case 0x14e2f8u: goto label_14e2f8;
        case 0x14e2fcu: goto label_14e2fc;
        case 0x14e300u: goto label_14e300;
        case 0x14e304u: goto label_14e304;
        case 0x14e308u: goto label_14e308;
        case 0x14e30cu: goto label_14e30c;
        case 0x14e310u: goto label_14e310;
        case 0x14e314u: goto label_14e314;
        case 0x14e318u: goto label_14e318;
        case 0x14e31cu: goto label_14e31c;
        case 0x14e320u: goto label_14e320;
        case 0x14e324u: goto label_14e324;
        case 0x14e328u: goto label_14e328;
        case 0x14e32cu: goto label_14e32c;
        case 0x14e330u: goto label_14e330;
        case 0x14e334u: goto label_14e334;
        case 0x14e338u: goto label_14e338;
        case 0x14e33cu: goto label_14e33c;
        case 0x14e340u: goto label_14e340;
        case 0x14e344u: goto label_14e344;
        case 0x14e348u: goto label_14e348;
        case 0x14e34cu: goto label_14e34c;
        case 0x14e350u: goto label_14e350;
        case 0x14e354u: goto label_14e354;
        case 0x14e358u: goto label_14e358;
        case 0x14e35cu: goto label_14e35c;
        case 0x14e360u: goto label_14e360;
        case 0x14e364u: goto label_14e364;
        case 0x14e368u: goto label_14e368;
        case 0x14e36cu: goto label_14e36c;
        case 0x14e370u: goto label_14e370;
        case 0x14e374u: goto label_14e374;
        case 0x14e378u: goto label_14e378;
        case 0x14e37cu: goto label_14e37c;
        case 0x14e380u: goto label_14e380;
        case 0x14e384u: goto label_14e384;
        case 0x14e388u: goto label_14e388;
        case 0x14e38cu: goto label_14e38c;
        case 0x14e390u: goto label_14e390;
        case 0x14e394u: goto label_14e394;
        case 0x14e398u: goto label_14e398;
        case 0x14e39cu: goto label_14e39c;
        case 0x14e3a0u: goto label_14e3a0;
        case 0x14e3a4u: goto label_14e3a4;
        case 0x14e3a8u: goto label_14e3a8;
        case 0x14e3acu: goto label_14e3ac;
        case 0x14e3b0u: goto label_14e3b0;
        case 0x14e3b4u: goto label_14e3b4;
        case 0x14e3b8u: goto label_14e3b8;
        case 0x14e3bcu: goto label_14e3bc;
        case 0x14e3c0u: goto label_14e3c0;
        case 0x14e3c4u: goto label_14e3c4;
        case 0x14e3c8u: goto label_14e3c8;
        case 0x14e3ccu: goto label_14e3cc;
        case 0x14e3d0u: goto label_14e3d0;
        case 0x14e3d4u: goto label_14e3d4;
        case 0x14e3d8u: goto label_14e3d8;
        case 0x14e3dcu: goto label_14e3dc;
        case 0x14e3e0u: goto label_14e3e0;
        case 0x14e3e4u: goto label_14e3e4;
        case 0x14e3e8u: goto label_14e3e8;
        case 0x14e3ecu: goto label_14e3ec;
        case 0x14e3f0u: goto label_14e3f0;
        case 0x14e3f4u: goto label_14e3f4;
        case 0x14e3f8u: goto label_14e3f8;
        case 0x14e3fcu: goto label_14e3fc;
        case 0x14e400u: goto label_14e400;
        case 0x14e404u: goto label_14e404;
        default: break;
    }

    ctx->pc = 0x14d880u;

label_14d880:
    // 0x14d880: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x14d880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_14d884:
    // 0x14d884: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x14d884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
label_14d888:
    // 0x14d888: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14d888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_14d88c:
    // 0x14d88c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14d88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_14d890:
    // 0x14d890: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14d890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_14d894:
    // 0x14d894: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14d894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_14d898:
    // 0x14d898: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14d898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14d89c:
    // 0x14d89c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x14d89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_14d8a0:
    // 0x14d8a0: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x14d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
label_14d8a4:
    // 0x14d8a4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x14d8a4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_14d8a8:
    // 0x14d8a8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x14d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_14d8ac:
    // 0x14d8ac: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x14d8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_14d8b0:
    // 0x14d8b0: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x14d8b0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_14d8b4:
    // 0x14d8b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14d8b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14d8b8:
    // 0x14d8b8: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x14d8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_14d8bc:
    // 0x14d8bc: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x14d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
label_14d8c0:
    // 0x14d8c0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14d8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_14d8c4:
    // 0x14d8c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14d8c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14d8c8:
    // 0x14d8c8: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x14d8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_14d8cc:
    // 0x14d8cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14d8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14d8d0:
    // 0x14d8d0: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x14d8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6728)));
label_14d8d4:
    // 0x14d8d4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_14d8d8:
    // 0x14d8d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14d8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14d8dc:
    // 0x14d8dc: 0x144002b1  bnez        $v0, . + 4 + (0x2B1 << 2)
label_14d8e0:
    if (ctx->pc == 0x14D8E0u) {
        ctx->pc = 0x14D8E4u;
        goto label_14d8e4;
    }
    ctx->pc = 0x14D8DCu;
    {
        const bool branch_taken_0x14d8dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d8dc) {
            ctx->pc = 0x14E3A4u;
            goto label_14e3a4;
        }
    }
    ctx->pc = 0x14D8E4u;
label_14d8e4:
    // 0x14d8e4: 0x8e0213b0  lw          $v0, 0x13B0($s0)
    ctx->pc = 0x14d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5040)));
label_14d8e8:
    // 0x14d8e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14d8ec:
    // 0x14d8ec: 0xae0213b0  sw          $v0, 0x13B0($s0)
    ctx->pc = 0x14d8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5040), GPR_U32(ctx, 2));
label_14d8f0:
    // 0x14d8f0: 0x920210a8  lbu         $v0, 0x10A8($s0)
    ctx->pc = 0x14d8f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4264)));
label_14d8f4:
    // 0x14d8f4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x14d8f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14d8f8:
    // 0x14d8f8: 0x3087007f  andi        $a3, $a0, 0x7F
    ctx->pc = 0x14d8f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
label_14d8fc:
    // 0x14d8fc: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
label_14d900:
    if (ctx->pc == 0x14D900u) {
        ctx->pc = 0x14D904u;
        goto label_14d904;
    }
    ctx->pc = 0x14D8FCu;
    {
        const bool branch_taken_0x14d8fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d8fc) {
            ctx->pc = 0x14D92Cu;
            goto label_14d92c;
        }
    }
    ctx->pc = 0x14D904u;
label_14d904:
    // 0x14d904: 0x920210a8  lbu         $v0, 0x10A8($s0)
    ctx->pc = 0x14d904u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4264)));
label_14d908:
    // 0x14d908: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x14d908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14d90c:
    // 0x14d90c: 0x30a2007f  andi        $v0, $a1, 0x7F
    ctx->pc = 0x14d90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)127);
label_14d910:
    // 0x14d910: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x14d910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_14d914:
    // 0x14d914: 0x920410a8  lbu         $a0, 0x10A8($s0)
    ctx->pc = 0x14d914u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4264)));
label_14d918:
    // 0x14d918: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x14d918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_14d91c:
    // 0x14d91c: 0x30a20080  andi        $v0, $a1, 0x80
    ctx->pc = 0x14d91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
label_14d920:
    // 0x14d920: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14d920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_14d924:
    // 0x14d924: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14d924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14d928:
    // 0x14d928: 0xa20210a8  sb          $v0, 0x10A8($s0)
    ctx->pc = 0x14d928u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4264), (uint8_t)GPR_U32(ctx, 2));
label_14d92c:
    // 0x14d92c: 0x86021418  lh          $v0, 0x1418($s0)
    ctx->pc = 0x14d92cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5144)));
label_14d930:
    // 0x14d930: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_14d934:
    if (ctx->pc == 0x14D934u) {
        ctx->pc = 0x14D938u;
        goto label_14d938;
    }
    ctx->pc = 0x14D930u;
    {
        const bool branch_taken_0x14d930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d930) {
            ctx->pc = 0x14D944u;
            goto label_14d944;
        }
    }
    ctx->pc = 0x14D938u;
label_14d938:
    // 0x14d938: 0x86021418  lh          $v0, 0x1418($s0)
    ctx->pc = 0x14d938u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5144)));
label_14d93c:
    // 0x14d93c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14d93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_14d940:
    // 0x14d940: 0xa6021418  sh          $v0, 0x1418($s0)
    ctx->pc = 0x14d940u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5144), (uint16_t)GPR_U32(ctx, 2));
label_14d944:
    // 0x14d944: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x14d944u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_14d948:
    // 0x14d948: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14d948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14d94c:
    // 0x14d94c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_14d950:
    if (ctx->pc == 0x14D950u) {
        ctx->pc = 0x14D954u;
        goto label_14d954;
    }
    ctx->pc = 0x14D94Cu;
    {
        const bool branch_taken_0x14d94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d94c) {
            ctx->pc = 0x14D974u;
            goto label_14d974;
        }
    }
    ctx->pc = 0x14D954u;
label_14d954:
    // 0x14d954: 0xae0013e8  sw          $zero, 0x13E8($s0)
    ctx->pc = 0x14d954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5096), GPR_U32(ctx, 0));
label_14d958:
    // 0x14d958: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14d958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14d95c:
    // 0x14d95c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x14d95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_14d960:
    // 0x14d960: 0x3c04ff7f  lui         $a0, 0xFF7F
    ctx->pc = 0x14d960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65407 << 16));
label_14d964:
    // 0x14d964: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x14d964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_14d968:
    // 0x14d968: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14d968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14d96c:
    // 0x14d96c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14d96cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14d970:
    // 0x14d970: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x14d970u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_14d974:
    // 0x14d974: 0x860215ec  lh          $v0, 0x15EC($s0)
    ctx->pc = 0x14d974u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5612)));
label_14d978:
    // 0x14d978: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_14d97c:
    if (ctx->pc == 0x14D97Cu) {
        ctx->pc = 0x14D980u;
        goto label_14d980;
    }
    ctx->pc = 0x14D978u;
    {
        const bool branch_taken_0x14d978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d978) {
            ctx->pc = 0x14D9E8u;
            goto label_14d9e8;
        }
    }
    ctx->pc = 0x14D980u;
label_14d980:
    // 0x14d980: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x14d980u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_14d984:
    // 0x14d984: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x14d984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_14d988:
    // 0x14d988: 0x3044f000  andi        $a0, $v0, 0xF000
    ctx->pc = 0x14d988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
label_14d98c:
    // 0x14d98c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_14d990:
    if (ctx->pc == 0x14D990u) {
        ctx->pc = 0x14D994u;
        goto label_14d994;
    }
    ctx->pc = 0x14D98Cu;
    {
        const bool branch_taken_0x14d98c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d98c) {
            ctx->pc = 0x14D9A0u;
            goto label_14d9a0;
        }
    }
    ctx->pc = 0x14D994u;
label_14d994:
    // 0x14d994: 0x860515ec  lh          $a1, 0x15EC($s0)
    ctx->pc = 0x14d994u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5612)));
label_14d998:
    // 0x14d998: 0x24a2fffb  addiu       $v0, $a1, -0x5
    ctx->pc = 0x14d998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967291));
label_14d99c:
    // 0x14d99c: 0xa60215ec  sh          $v0, 0x15EC($s0)
    ctx->pc = 0x14d99cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5612), (uint16_t)GPR_U32(ctx, 2));
label_14d9a0:
    // 0x14d9a0: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x14d9a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_14d9a4:
    // 0x14d9a4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x14d9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_14d9a8:
    // 0x14d9a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14d9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14d9ac:
    // 0x14d9ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_14d9b0:
    if (ctx->pc == 0x14D9B0u) {
        ctx->pc = 0x14D9B4u;
        goto label_14d9b4;
    }
    ctx->pc = 0x14D9ACu;
    {
        const bool branch_taken_0x14d9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d9ac) {
            ctx->pc = 0x14D9C0u;
            goto label_14d9c0;
        }
    }
    ctx->pc = 0x14D9B4u;
label_14d9b4:
    // 0x14d9b4: 0x860215ec  lh          $v0, 0x15EC($s0)
    ctx->pc = 0x14d9b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5612)));
label_14d9b8:
    // 0x14d9b8: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x14d9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
label_14d9bc:
    // 0x14d9bc: 0xa60215ec  sh          $v0, 0x15EC($s0)
    ctx->pc = 0x14d9bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5612), (uint16_t)GPR_U32(ctx, 2));
label_14d9c0:
    // 0x14d9c0: 0x860215ec  lh          $v0, 0x15EC($s0)
    ctx->pc = 0x14d9c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5612)));
label_14d9c4:
    // 0x14d9c4: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x14d9c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_14d9c8:
    // 0x14d9c8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x14d9c8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_14d9cc:
    // 0x14d9cc: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
label_14d9d0:
    if (ctx->pc == 0x14D9D0u) {
        ctx->pc = 0x14D9D4u;
        goto label_14d9d4;
    }
    ctx->pc = 0x14D9CCu;
    {
        const bool branch_taken_0x14d9cc = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x14d9cc) {
            ctx->pc = 0x14D9D8u;
            goto label_14d9d8;
        }
    }
    ctx->pc = 0x14D9D4u;
label_14d9d4:
    // 0x14d9d4: 0xa60015ec  sh          $zero, 0x15EC($s0)
    ctx->pc = 0x14d9d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5612), (uint16_t)GPR_U32(ctx, 0));
label_14d9d8:
    // 0x14d9d8: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x14d9d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_14d9dc:
    // 0x14d9dc: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x14d9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_14d9e0:
    // 0x14d9e0: 0xe21825  or          $v1, $a3, $v0
    ctx->pc = 0x14d9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_14d9e4:
    // 0x14d9e4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x14d9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_14d9e8:
    // 0x14d9e8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x14d9e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_14d9ec:
    // 0x14d9ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14d9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14d9f0:
    // 0x14d9f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_14d9f4:
    if (ctx->pc == 0x14D9F4u) {
        ctx->pc = 0x14D9F8u;
        goto label_14d9f8;
    }
    ctx->pc = 0x14D9F0u;
    {
        const bool branch_taken_0x14d9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d9f0) {
            ctx->pc = 0x14DA00u;
            goto label_14da00;
        }
    }
    ctx->pc = 0x14D9F8u;
label_14d9f8:
    // 0x14d9f8: 0xc056d68  jal         func_15B5A0
label_14d9fc:
    if (ctx->pc == 0x14D9FCu) {
        ctx->pc = 0x14DA00u;
        goto label_14da00;
    }
    ctx->pc = 0x14D9F8u;
    SET_GPR_U32(ctx, 31, 0x14DA00u);
    ctx->pc = 0x15B5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B5A0u, 0x14D9F8u, 0x14DA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DA00u;
label_14da00:
    // 0x14da00: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14da00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14da04:
    // 0x14da04: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x14da04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_14da08:
    // 0x14da08: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x14da08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
label_14da0c:
    // 0x14da0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14da0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_14da10:
    // 0x14da10: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x14da10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14da14:
    // 0x14da14: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14da14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14da18:
    // 0x14da18: 0xac241a98  sw          $a0, 0x1A98($at)
    ctx->pc = 0x14da18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 4));
label_14da1c:
    // 0x14da1c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14da1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_14da20:
    // 0x14da20: 0xc057904  jal         func_15E410
label_14da24:
    if (ctx->pc == 0x14DA24u) {
        ctx->pc = 0x14DA28u;
        goto label_14da28;
    }
    ctx->pc = 0x14DA20u;
    SET_GPR_U32(ctx, 31, 0x14DA28u);
    ctx->pc = 0x15E410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E410u, 0x14DA20u, 0x14DA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DA28u;
label_14da28:
    // 0x14da28: 0xae2019e4  sw          $zero, 0x19E4($s1)
    ctx->pc = 0x14da28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6628), GPR_U32(ctx, 0));
label_14da2c:
    // 0x14da2c: 0xfe000a08  sd          $zero, 0xA08($s0)
    ctx->pc = 0x14da2cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2568), GPR_U64(ctx, 0));
label_14da30:
    // 0x14da30: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x14da30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_14da34:
    // 0x14da34: 0x3c027bbd  lui         $v0, 0x7BBD
    ctx->pc = 0x14da34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31677 << 16));
label_14da38:
    // 0x14da38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14da38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_14da3c:
    // 0x14da3c: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x14da3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14da40:
    // 0x14da40: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x14da40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_14da44:
    // 0x14da44: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14da44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14da48:
    // 0x14da48: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x14da48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_14da4c:
    // 0x14da4c: 0x3c03ffbf  lui         $v1, 0xFFBF
    ctx->pc = 0x14da4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65471 << 16));
label_14da50:
    // 0x14da50: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x14da50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_14da54:
    // 0x14da54: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x14da54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_14da58:
    // 0x14da58: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14da58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14da5c:
    // 0x14da5c: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x14da5cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_14da60:
    // 0x14da60: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14da60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14da64:
    // 0x14da64: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x14da64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_14da68:
    // 0x14da68: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x14da68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_14da6c:
    // 0x14da6c: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x14da6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_14da70:
    // 0x14da70: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x14da70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_14da74:
    // 0x14da74: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14da74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14da78:
    // 0x14da78: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x14da78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 3));
label_14da7c:
    // 0x14da7c: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x14da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_14da80:
    // 0x14da80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14da80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_14da84:
    // 0x14da84: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_14da88:
    if (ctx->pc == 0x14DA88u) {
        ctx->pc = 0x14DA8Cu;
        goto label_14da8c;
    }
    ctx->pc = 0x14DA84u;
    {
        const bool branch_taken_0x14da84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14da84) {
            ctx->pc = 0x14DAB4u;
            goto label_14dab4;
        }
    }
    ctx->pc = 0x14DA8Cu;
label_14da8c:
    // 0x14da8c: 0x920213f8  lbu         $v0, 0x13F8($s0)
    ctx->pc = 0x14da8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5112)));
label_14da90:
    // 0x14da90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14da90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14da94:
    // 0x14da94: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_14da98:
    if (ctx->pc == 0x14DA98u) {
        ctx->pc = 0x14DA9Cu;
        goto label_14da9c;
    }
    ctx->pc = 0x14DA94u;
    {
        const bool branch_taken_0x14da94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14da94) {
            ctx->pc = 0x14DAB4u;
            goto label_14dab4;
        }
    }
    ctx->pc = 0x14DA9Cu;
label_14da9c:
    // 0x14da9c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x14da9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_14daa0:
    // 0x14daa0: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x14daa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
label_14daa4:
    // 0x14daa4: 0x443825  or          $a3, $v0, $a0
    ctx->pc = 0x14daa4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_14daa8:
    // 0x14daa8: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x14daa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
label_14daac:
    // 0x14daac: 0x10000006  b           . + 4 + (0x6 << 2)
label_14dab0:
    if (ctx->pc == 0x14DAB0u) {
        ctx->pc = 0x14DAB4u;
        goto label_14dab4;
    }
    ctx->pc = 0x14DAACu;
    {
        const bool branch_taken_0x14daac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14daac) {
            ctx->pc = 0x14DAC8u;
            goto label_14dac8;
        }
    }
    ctx->pc = 0x14DAB4u;
label_14dab4:
    // 0x14dab4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x14dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_14dab8:
    // 0x14dab8: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x14dab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
label_14dabc:
    // 0x14dabc: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x14dabcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_14dac0:
    // 0x14dac0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x14dac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_14dac4:
    // 0x14dac4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x14dac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_14dac8:
    // 0x14dac8: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x14dac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_14dacc:
    // 0x14dacc: 0x94620140  lhu         $v0, 0x140($v1)
    ctx->pc = 0x14daccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
label_14dad0:
    // 0x14dad0: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x14dad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
label_14dad4:
    // 0x14dad4: 0xa4620140  sh          $v0, 0x140($v1)
    ctx->pc = 0x14dad4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 320), (uint16_t)GPR_U32(ctx, 2));
label_14dad8:
    // 0x14dad8: 0x8e0402d0  lw          $a0, 0x2D0($s0)
    ctx->pc = 0x14dad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_14dadc:
    // 0x14dadc: 0x948202d0  lhu         $v0, 0x2D0($a0)
    ctx->pc = 0x14dadcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 720)));
label_14dae0:
    // 0x14dae0: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x14dae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
label_14dae4:
    // 0x14dae4: 0xa48202d0  sh          $v0, 0x2D0($a0)
    ctx->pc = 0x14dae4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 720), (uint16_t)GPR_U32(ctx, 2));
label_14dae8:
    // 0x14dae8: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x14dae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_14daec:
    // 0x14daec: 0x94620460  lhu         $v0, 0x460($v1)
    ctx->pc = 0x14daecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1120)));
label_14daf0:
    // 0x14daf0: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x14daf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
label_14daf4:
    // 0x14daf4: 0xa4620460  sh          $v0, 0x460($v1)
    ctx->pc = 0x14daf4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1120), (uint16_t)GPR_U32(ctx, 2));
label_14daf8:
    // 0x14daf8: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x14daf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_14dafc:
    // 0x14dafc: 0x946205f0  lhu         $v0, 0x5F0($v1)
    ctx->pc = 0x14dafcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1520)));
label_14db00:
    // 0x14db00: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x14db00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
label_14db04:
    // 0x14db04: 0xa46205f0  sh          $v0, 0x5F0($v1)
    ctx->pc = 0x14db04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1520), (uint16_t)GPR_U32(ctx, 2));
label_14db08:
    // 0x14db08: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x14db08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_14db0c:
    // 0x14db0c: 0x94440780  lhu         $a0, 0x780($v0)
    ctx->pc = 0x14db0cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1920)));
label_14db10:
    // 0x14db10: 0x308300fd  andi        $v1, $a0, 0xFD
    ctx->pc = 0x14db10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)253);
label_14db14:
    // 0x14db14: 0xa4430780  sh          $v1, 0x780($v0)
    ctx->pc = 0x14db14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1920), (uint16_t)GPR_U32(ctx, 3));
label_14db18:
    // 0x14db18: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x14db18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_14db1c:
    // 0x14db1c: 0x94641400  lhu         $a0, 0x1400($v1)
    ctx->pc = 0x14db1cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 5120)));
label_14db20:
    // 0x14db20: 0x308200fd  andi        $v0, $a0, 0xFD
    ctx->pc = 0x14db20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)253);
label_14db24:
    // 0x14db24: 0xa4621400  sh          $v0, 0x1400($v1)
    ctx->pc = 0x14db24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5120), (uint16_t)GPR_U32(ctx, 2));
label_14db28:
    // 0x14db28: 0x8e0402d0  lw          $a0, 0x2D0($s0)
    ctx->pc = 0x14db28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_14db2c:
    // 0x14db2c: 0x94851590  lhu         $a1, 0x1590($a0)
    ctx->pc = 0x14db2cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 5520)));
label_14db30:
    // 0x14db30: 0x30a600fd  andi        $a2, $a1, 0xFD
    ctx->pc = 0x14db30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)253);
label_14db34:
    // 0x14db34: 0xa4861590  sh          $a2, 0x1590($a0)
    ctx->pc = 0x14db34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5520), (uint16_t)GPR_U32(ctx, 6));
label_14db38:
    // 0x14db38: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x14db38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_14db3c:
    // 0x14db3c: 0x94440aa0  lhu         $a0, 0xAA0($v0)
    ctx->pc = 0x14db3cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2720)));
label_14db40:
    // 0x14db40: 0x308500fd  andi        $a1, $a0, 0xFD
    ctx->pc = 0x14db40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)253);
label_14db44:
    // 0x14db44: 0xa4450aa0  sh          $a1, 0xAA0($v0)
    ctx->pc = 0x14db44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2720), (uint16_t)GPR_U32(ctx, 5));
label_14db48:
    // 0x14db48: 0x8e0602d0  lw          $a2, 0x2D0($s0)
    ctx->pc = 0x14db48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_14db4c:
    // 0x14db4c: 0x94c20aa0  lhu         $v0, 0xAA0($a2)
    ctx->pc = 0x14db4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2720)));
label_14db50:
    // 0x14db50: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x14db50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
label_14db54:
    // 0x14db54: 0xa4c20aa0  sh          $v0, 0xAA0($a2)
    ctx->pc = 0x14db54u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2720), (uint16_t)GPR_U32(ctx, 2));
label_14db58:
    // 0x14db58: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x14db58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_14db5c:
    // 0x14db5c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x14db5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_14db60:
    // 0x14db60: 0x26020170  addiu       $v0, $s0, 0x170
    ctx->pc = 0x14db60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
label_14db64:
    // 0x14db64: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x14db64u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_14db68:
    // 0x14db68: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x14db68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14db6c:
    // 0x14db6c: 0xe600137c  swc1        $f0, 0x137C($s0)
    ctx->pc = 0x14db6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4988), bits); }
label_14db70:
    // 0x14db70: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14db70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_14db74:
    // 0x14db74: 0xc057a2c  jal         func_15E8B0
label_14db78:
    if (ctx->pc == 0x14DB78u) {
        ctx->pc = 0x14DB7Cu;
        goto label_14db7c;
    }
    ctx->pc = 0x14DB74u;
    SET_GPR_U32(ctx, 31, 0x14DB7Cu);
    ctx->pc = 0x15E8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E8B0u, 0x14DB74u, 0x14DB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DB7Cu;
label_14db7c:
    // 0x14db7c: 0xe6001380  swc1        $f0, 0x1380($s0)
    ctx->pc = 0x14db7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4992), bits); }
label_14db80:
    // 0x14db80: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14db80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14db84:
    // 0x14db84: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x14db84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_14db88:
    // 0x14db88: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x14db88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_14db8c:
    // 0x14db8c: 0x104000c2  beqz        $v0, . + 4 + (0xC2 << 2)
label_14db90:
    if (ctx->pc == 0x14DB90u) {
        ctx->pc = 0x14DB94u;
        goto label_14db94;
    }
    ctx->pc = 0x14DB8Cu;
    {
        const bool branch_taken_0x14db8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14db8c) {
            ctx->pc = 0x14DE98u;
            goto label_14de98;
        }
    }
    ctx->pc = 0x14DB94u;
label_14db94:
    // 0x14db94: 0x920213a7  lbu         $v0, 0x13A7($s0)
    ctx->pc = 0x14db94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5031)));
label_14db98:
    // 0x14db98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14db98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14db9c:
    // 0x14db9c: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x14db9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_14dba0:
    // 0x14dba0: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_14dba4:
    if (ctx->pc == 0x14DBA4u) {
        ctx->pc = 0x14DBA8u;
        goto label_14dba8;
    }
    ctx->pc = 0x14DBA0u;
    {
        const bool branch_taken_0x14dba0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dba0) {
            ctx->pc = 0x14DBECu;
            goto label_14dbec;
        }
    }
    ctx->pc = 0x14DBA8u;
label_14dba8:
    // 0x14dba8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x14dba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_14dbac:
    // 0x14dbac: 0x2463e900  addiu       $v1, $v1, -0x1700
    ctx->pc = 0x14dbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961408));
label_14dbb0:
    // 0x14dbb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14dbb4:
    // 0x14dbb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14dbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14dbb8:
    // 0x14dbb8: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x14dbb8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14dbbc:
    // 0x14dbbc: 0x2400008  jr          $s2
label_14dbc0:
    if (ctx->pc == 0x14DBC0u) {
        ctx->pc = 0x14DBC4u;
        goto label_14dbc4;
    }
    ctx->pc = 0x14DBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14DBC4u: goto label_14dbc4;
            case 0x14DBD8u: goto label_14dbd8;
            case 0x14DBECu: goto label_14dbec;
            case 0x14DBF8u: goto label_14dbf8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DBBCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14DBC4u;
label_14dbc4:
    // 0x14dbc4: 0x860213ac  lh          $v0, 0x13AC($s0)
    ctx->pc = 0x14dbc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5036)));
label_14dbc8:
    // 0x14dbc8: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x14dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_14dbcc:
    // 0x14dbcc: 0xa60213ac  sh          $v0, 0x13AC($s0)
    ctx->pc = 0x14dbccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5036), (uint16_t)GPR_U32(ctx, 2));
label_14dbd0:
    // 0x14dbd0: 0x10000009  b           . + 4 + (0x9 << 2)
label_14dbd4:
    if (ctx->pc == 0x14DBD4u) {
        ctx->pc = 0x14DBD8u;
        goto label_14dbd8;
    }
    ctx->pc = 0x14DBD0u;
    {
        const bool branch_taken_0x14dbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dbd0) {
            ctx->pc = 0x14DBF8u;
            goto label_14dbf8;
        }
    }
    ctx->pc = 0x14DBD8u;
label_14dbd8:
    // 0x14dbd8: 0x860213ac  lh          $v0, 0x13AC($s0)
    ctx->pc = 0x14dbd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5036)));
label_14dbdc:
    // 0x14dbdc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_14dbe0:
    // 0x14dbe0: 0xa60213ac  sh          $v0, 0x13AC($s0)
    ctx->pc = 0x14dbe0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5036), (uint16_t)GPR_U32(ctx, 2));
label_14dbe4:
    // 0x14dbe4: 0x10000004  b           . + 4 + (0x4 << 2)
label_14dbe8:
    if (ctx->pc == 0x14DBE8u) {
        ctx->pc = 0x14DBECu;
        goto label_14dbec;
    }
    ctx->pc = 0x14DBE4u;
    {
        const bool branch_taken_0x14dbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dbe4) {
            ctx->pc = 0x14DBF8u;
            goto label_14dbf8;
        }
    }
    ctx->pc = 0x14DBECu;
label_14dbec:
    // 0x14dbec: 0x860313ac  lh          $v1, 0x13AC($s0)
    ctx->pc = 0x14dbecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5036)));
label_14dbf0:
    // 0x14dbf0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x14dbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_14dbf4:
    // 0x14dbf4: 0xa60213ac  sh          $v0, 0x13AC($s0)
    ctx->pc = 0x14dbf4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5036), (uint16_t)GPR_U32(ctx, 2));
label_14dbf8:
    // 0x14dbf8: 0x860213ac  lh          $v0, 0x13AC($s0)
    ctx->pc = 0x14dbf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5036)));
label_14dbfc:
    // 0x14dbfc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x14dbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_14dc00:
    // 0x14dc00: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14dc00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_14dc04:
    // 0x14dc04: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_14dc08:
    if (ctx->pc == 0x14DC08u) {
        ctx->pc = 0x14DC0Cu;
        goto label_14dc0c;
    }
    ctx->pc = 0x14DC04u;
    {
        const bool branch_taken_0x14dc04 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x14dc04) {
            ctx->pc = 0x14DC10u;
            goto label_14dc10;
        }
    }
    ctx->pc = 0x14DC0Cu;
label_14dc0c:
    // 0x14dc0c: 0xa60013ac  sh          $zero, 0x13AC($s0)
    ctx->pc = 0x14dc0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5036), (uint16_t)GPR_U32(ctx, 0));
label_14dc10:
    // 0x14dc10: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x14dc10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
label_14dc14:
    // 0x14dc14: 0x8c22af60  lw          $v0, -0x50A0($at)
    ctx->pc = 0x14dc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294946656)));
label_14dc18:
    // 0x14dc18: 0x2c5303e7  sltiu       $s3, $v0, 0x3E7
    ctx->pc = 0x14dc18u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)999) ? 1 : 0);
label_14dc1c:
    // 0x14dc1c: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_14dc20:
    if (ctx->pc == 0x14DC20u) {
        ctx->pc = 0x14DC24u;
        goto label_14dc24;
    }
    ctx->pc = 0x14DC1Cu;
    {
        const bool branch_taken_0x14dc1c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x14dc1c) {
            ctx->pc = 0x14DC2Cu;
            goto label_14dc2c;
        }
    }
    ctx->pc = 0x14DC24u;
label_14dc24:
    // 0x14dc24: 0x860313ae  lh          $v1, 0x13AE($s0)
    ctx->pc = 0x14dc24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5038)));
label_14dc28:
    // 0x14dc28: 0xa60313ac  sh          $v1, 0x13AC($s0)
    ctx->pc = 0x14dc28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5036), (uint16_t)GPR_U32(ctx, 3));
label_14dc2c:
    // 0x14dc2c: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x14dc2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
label_14dc30:
    // 0x14dc30: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x14dc30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_14dc34:
    // 0x14dc34: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x14dc34u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_14dc38:
    // 0x14dc38: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
label_14dc3c:
    if (ctx->pc == 0x14DC3Cu) {
        ctx->pc = 0x14DC40u;
        goto label_14dc40;
    }
    ctx->pc = 0x14DC38u;
    {
        const bool branch_taken_0x14dc38 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x14dc38) {
            ctx->pc = 0x14DC44u;
            goto label_14dc44;
        }
    }
    ctx->pc = 0x14DC40u;
label_14dc40:
    // 0x14dc40: 0xa60013ac  sh          $zero, 0x13AC($s0)
    ctx->pc = 0x14dc40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5036), (uint16_t)GPR_U32(ctx, 0));
label_14dc44:
    // 0x14dc44: 0x860213ac  lh          $v0, 0x13AC($s0)
    ctx->pc = 0x14dc44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5036)));
label_14dc48:
    // 0x14dc48: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x14dc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_14dc4c:
    // 0x14dc4c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14dc4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_14dc50:
    // 0x14dc50: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_14dc54:
    if (ctx->pc == 0x14DC54u) {
        ctx->pc = 0x14DC58u;
        goto label_14dc58;
    }
    ctx->pc = 0x14DC50u;
    {
        const bool branch_taken_0x14dc50 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x14dc50) {
            ctx->pc = 0x14DC68u;
            goto label_14dc68;
        }
    }
    ctx->pc = 0x14DC58u;
label_14dc58:
    // 0x14dc58: 0x8e25009c  lw          $a1, 0x9C($s1)
    ctx->pc = 0x14dc58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_14dc5c:
    // 0x14dc5c: 0x30a20080  andi        $v0, $a1, 0x80
    ctx->pc = 0x14dc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
label_14dc60:
    // 0x14dc60: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
label_14dc64:
    if (ctx->pc == 0x14DC64u) {
        ctx->pc = 0x14DC68u;
        goto label_14dc68;
    }
    ctx->pc = 0x14DC60u;
    {
        const bool branch_taken_0x14dc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dc60) {
            ctx->pc = 0x14DD80u;
            goto label_14dd80;
        }
    }
    ctx->pc = 0x14DC68u;
label_14dc68:
    // 0x14dc68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14dc68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14dc6c:
    // 0x14dc6c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x14dc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_14dc70:
    // 0x14dc70: 0x2402fdff  addiu       $v0, $zero, -0x201
    ctx->pc = 0x14dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
label_14dc74:
    // 0x14dc74: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14dc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14dc78:
    // 0x14dc78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14dc78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14dc7c:
    // 0x14dc7c: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x14dc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_14dc80:
    // 0x14dc80: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x14dc80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_14dc84:
    // 0x14dc84: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x14dc84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_14dc88:
    // 0x14dc88: 0x3412ffff  ori         $s2, $zero, 0xFFFF
    ctx->pc = 0x14dc88u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_14dc8c:
    // 0x14dc8c: 0x121438  dsll        $v0, $s2, 16
    ctx->pc = 0x14dc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 16);
label_14dc90:
    // 0x14dc90: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14dc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_14dc94:
    // 0x14dc94: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14dc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14dc98:
    // 0x14dc98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14dc98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_14dc9c:
    // 0x14dc9c: 0x34440112  ori         $a0, $v0, 0x112
    ctx->pc = 0x14dc9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)274);
label_14dca0:
    // 0x14dca0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14dca0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14dca4:
    // 0x14dca4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x14dca4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14dca8:
    // 0x14dca8: 0x8e070130  lw          $a3, 0x130($s0)
    ctx->pc = 0x14dca8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_14dcac:
    // 0x14dcac: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x14dcacu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14dcb0:
    // 0x14dcb0: 0xc06371c  jal         func_18DC70
label_14dcb4:
    if (ctx->pc == 0x14DCB4u) {
        ctx->pc = 0x14DCB8u;
        goto label_14dcb8;
    }
    ctx->pc = 0x14DCB0u;
    SET_GPR_U32(ctx, 31, 0x14DCB8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x14DCB0u, 0x14DCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DCB8u;
label_14dcb8:
    // 0x14dcb8: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x14dcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_14dcbc:
    // 0x14dcbc: 0x3c13469c  lui         $s3, 0x469C
    ctx->pc = 0x14dcbcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)18076 << 16));
label_14dcc0:
    // 0x14dcc0: 0x36624000  ori         $v0, $s3, 0x4000
    ctx->pc = 0x14dcc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)16384);
label_14dcc4:
    // 0x14dcc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14dcc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14dcc8:
    // 0x14dcc8: 0x24040306  addiu       $a0, $zero, 0x306
    ctx->pc = 0x14dcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
label_14dccc:
    // 0x14dccc: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x14dcccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_14dcd0:
    // 0x14dcd0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x14dcd0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14dcd4:
    // 0x14dcd4: 0xc067b18  jal         func_19EC60
label_14dcd8:
    if (ctx->pc == 0x14DCD8u) {
        ctx->pc = 0x14DCDCu;
        goto label_14dcdc;
    }
    ctx->pc = 0x14DCD4u;
    SET_GPR_U32(ctx, 31, 0x14DCDCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x14DCD4u, 0x14DCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DCDCu;
label_14dcdc:
    // 0x14dcdc: 0x860213ae  lh          $v0, 0x13AE($s0)
    ctx->pc = 0x14dcdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5038)));
label_14dce0:
    // 0x14dce0: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x14dce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_14dce4:
    // 0x14dce4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x14dce4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_14dce8:
    // 0x14dce8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x14dce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_14dcec:
    // 0x14dcec: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x14dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_14dcf0:
    // 0x14dcf0: 0x3443aaab  ori         $v1, $v0, 0xAAAB
    ctx->pc = 0x14dcf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_14dcf4:
    // 0x14dcf4: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x14dcf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_14dcf8:
    // 0x14dcf8: 0x417c2  srl         $v0, $a0, 31
    ctx->pc = 0x14dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_14dcfc:
    // 0x14dcfc: 0x0  nop
    ctx->pc = 0x14dcfcu;
    // NOP
label_14dd00:
    // 0x14dd00: 0x1810  mfhi        $v1
    ctx->pc = 0x14dd00u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_14dd04:
    // 0x14dd04: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_14dd08:
    // 0x14dd08: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x14dd08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_14dd0c:
    // 0x14dd0c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x14dd0cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_14dd10:
    // 0x14dd10: 0x860513ac  lh          $a1, 0x13AC($s0)
    ctx->pc = 0x14dd10u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5036)));
label_14dd14:
    // 0x14dd14: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x14dd14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_14dd18:
    // 0x14dd18: 0xa60213ac  sh          $v0, 0x13AC($s0)
    ctx->pc = 0x14dd18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5036), (uint16_t)GPR_U32(ctx, 2));
label_14dd1c:
    // 0x14dd1c: 0x860213ac  lh          $v0, 0x13AC($s0)
    ctx->pc = 0x14dd1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5036)));
label_14dd20:
    // 0x14dd20: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x14dd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_14dd24:
    // 0x14dd24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14dd24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_14dd28:
    // 0x14dd28: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
label_14dd2c:
    if (ctx->pc == 0x14DD2Cu) {
        ctx->pc = 0x14DD30u;
        goto label_14dd30;
    }
    ctx->pc = 0x14DD28u;
    {
        const bool branch_taken_0x14dd28 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x14dd28) {
            ctx->pc = 0x14DD7Cu;
            goto label_14dd7c;
        }
    }
    ctx->pc = 0x14DD30u;
label_14dd30:
    // 0x14dd30: 0x860213ac  lh          $v0, 0x13AC($s0)
    ctx->pc = 0x14dd30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5036)));
label_14dd34:
    // 0x14dd34: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x14dd34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_14dd38:
    // 0x14dd38: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x14dd38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_14dd3c:
    // 0x14dd3c: 0x860213aa  lh          $v0, 0x13AA($s0)
    ctx->pc = 0x14dd3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5034)));
label_14dd40:
    // 0x14dd40: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x14dd40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_14dd44:
    // 0x14dd44: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x14dd44u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_14dd48:
    // 0x14dd48: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x14dd48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_14dd4c:
    // 0x14dd4c: 0x860213ae  lh          $v0, 0x13AE($s0)
    ctx->pc = 0x14dd4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5038)));
label_14dd50:
    // 0x14dd50: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x14dd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_14dd54:
    // 0x14dd54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14dd54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_14dd58:
    // 0x14dd58: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x14dd58u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_14dd5c:
    // 0x14dd5c: 0x0  nop
    ctx->pc = 0x14dd5cu;
    // NOP
label_14dd60:
    // 0x14dd60: 0x0  nop
    ctx->pc = 0x14dd60u;
    // NOP
label_14dd64:
    // 0x14dd64: 0x1012  mflo        $v0
    ctx->pc = 0x14dd64u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_14dd68:
    // 0x14dd68: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x14dd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_14dd6c:
    // 0x14dd6c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14dd6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_14dd70:
    // 0x14dd70: 0xa60213a8  sh          $v0, 0x13A8($s0)
    ctx->pc = 0x14dd70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5032), (uint16_t)GPR_U32(ctx, 2));
label_14dd74:
    // 0x14dd74: 0x10000002  b           . + 4 + (0x2 << 2)
label_14dd78:
    if (ctx->pc == 0x14DD78u) {
        ctx->pc = 0x14DD7Cu;
        goto label_14dd7c;
    }
    ctx->pc = 0x14DD74u;
    {
        const bool branch_taken_0x14dd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dd74) {
            ctx->pc = 0x14DD80u;
            goto label_14dd80;
        }
    }
    ctx->pc = 0x14DD7Cu;
label_14dd7c:
    // 0x14dd7c: 0xa60013a8  sh          $zero, 0x13A8($s0)
    ctx->pc = 0x14dd7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5032), (uint16_t)GPR_U32(ctx, 0));
label_14dd80:
    // 0x14dd80: 0x8e0313b0  lw          $v1, 0x13B0($s0)
    ctx->pc = 0x14dd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5040)));
label_14dd84:
    // 0x14dd84: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x14dd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_14dd88:
    // 0x14dd88: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_14dd8c:
    if (ctx->pc == 0x14DD8Cu) {
        ctx->pc = 0x14DD90u;
        goto label_14dd90;
    }
    ctx->pc = 0x14DD88u;
    {
        const bool branch_taken_0x14dd88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14dd88) {
            ctx->pc = 0x14DDC8u;
            goto label_14ddc8;
        }
    }
    ctx->pc = 0x14DD90u;
label_14dd90:
    // 0x14dd90: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x14dd90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
label_14dd94:
    // 0x14dd94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14dd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14dd98:
    // 0x14dd98: 0xa60210a6  sh          $v0, 0x10A6($s0)
    ctx->pc = 0x14dd98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4262), (uint16_t)GPR_U32(ctx, 2));
label_14dd9c:
    // 0x14dd9c: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x14dd9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
label_14dda0:
    // 0x14dda0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x14dda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_14dda4:
    // 0x14dda4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14dda4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_14dda8:
    // 0x14dda8: 0x8603138c  lh          $v1, 0x138C($s0)
    ctx->pc = 0x14dda8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5004)));
label_14ddac:
    // 0x14ddac: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x14ddacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_14ddb0:
    // 0x14ddb0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x14ddb0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_14ddb4:
    // 0x14ddb4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x14ddb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_14ddb8:
    // 0x14ddb8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_14ddbc:
    if (ctx->pc == 0x14DDBCu) {
        ctx->pc = 0x14DDC0u;
        goto label_14ddc0;
    }
    ctx->pc = 0x14DDB8u;
    {
        const bool branch_taken_0x14ddb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ddb8) {
            ctx->pc = 0x14DDC8u;
            goto label_14ddc8;
        }
    }
    ctx->pc = 0x14DDC0u;
label_14ddc0:
    // 0x14ddc0: 0x8602138c  lh          $v0, 0x138C($s0)
    ctx->pc = 0x14ddc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5004)));
label_14ddc4:
    // 0x14ddc4: 0xa60210a6  sh          $v0, 0x10A6($s0)
    ctx->pc = 0x14ddc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4262), (uint16_t)GPR_U32(ctx, 2));
label_14ddc8:
    // 0x14ddc8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x14ddc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_14ddcc:
    // 0x14ddcc: 0x9022ef66  lbu         $v0, -0x109A($at)
    ctx->pc = 0x14ddccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294963046)));
label_14ddd0:
    // 0x14ddd0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14ddd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14ddd4:
    // 0x14ddd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14ddd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14ddd8:
    // 0x14ddd8: 0x10430017  beq         $v0, $v1, . + 4 + (0x17 << 2)
label_14dddc:
    if (ctx->pc == 0x14DDDCu) {
        ctx->pc = 0x14DDE0u;
        goto label_14dde0;
    }
    ctx->pc = 0x14DDD8u;
    {
        const bool branch_taken_0x14ddd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14ddd8) {
            ctx->pc = 0x14DE38u;
            goto label_14de38;
        }
    }
    ctx->pc = 0x14DDE0u;
label_14dde0:
    // 0x14dde0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_14dde4:
    if (ctx->pc == 0x14DDE4u) {
        ctx->pc = 0x14DDE8u;
        goto label_14dde8;
    }
    ctx->pc = 0x14DDE0u;
    {
        const bool branch_taken_0x14dde0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dde0) {
            ctx->pc = 0x14DDF0u;
            goto label_14ddf0;
        }
    }
    ctx->pc = 0x14DDE8u;
label_14dde8:
    // 0x14dde8: 0x10000025  b           . + 4 + (0x25 << 2)
label_14ddec:
    if (ctx->pc == 0x14DDECu) {
        ctx->pc = 0x14DDF0u;
        goto label_14ddf0;
    }
    ctx->pc = 0x14DDE8u;
    {
        const bool branch_taken_0x14dde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dde8) {
            ctx->pc = 0x14DE80u;
            goto label_14de80;
        }
    }
    ctx->pc = 0x14DDF0u;
label_14ddf0:
    // 0x14ddf0: 0x920213a4  lbu         $v0, 0x13A4($s0)
    ctx->pc = 0x14ddf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5028)));
label_14ddf4:
    // 0x14ddf4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14ddf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14ddf8:
    // 0x14ddf8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x14ddf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_14ddfc:
    // 0x14ddfc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x14ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_14de00:
    // 0x14de00: 0x24425300  addiu       $v0, $v0, 0x5300
    ctx->pc = 0x14de00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21248));
label_14de04:
    // 0x14de04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14de04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14de08:
    // 0x14de08: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x14de08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14de0c:
    // 0x14de0c: 0xa602122c  sh          $v0, 0x122C($s0)
    ctx->pc = 0x14de0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4652), (uint16_t)GPR_U32(ctx, 2));
label_14de10:
    // 0x14de10: 0x920213a4  lbu         $v0, 0x13A4($s0)
    ctx->pc = 0x14de10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5028)));
label_14de14:
    // 0x14de14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14de14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14de18:
    // 0x14de18: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x14de18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_14de1c:
    // 0x14de1c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x14de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_14de20:
    // 0x14de20: 0x24425308  addiu       $v0, $v0, 0x5308
    ctx->pc = 0x14de20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21256));
label_14de24:
    // 0x14de24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14de24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14de28:
    // 0x14de28: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x14de28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14de2c:
    // 0x14de2c: 0xa602122e  sh          $v0, 0x122E($s0)
    ctx->pc = 0x14de2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4654), (uint16_t)GPR_U32(ctx, 2));
label_14de30:
    // 0x14de30: 0x10000053  b           . + 4 + (0x53 << 2)
label_14de34:
    if (ctx->pc == 0x14DE34u) {
        ctx->pc = 0x14DE38u;
        goto label_14de38;
    }
    ctx->pc = 0x14DE30u;
    {
        const bool branch_taken_0x14de30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14de30) {
            ctx->pc = 0x14DF80u;
            goto label_14df80;
        }
    }
    ctx->pc = 0x14DE38u;
label_14de38:
    // 0x14de38: 0x920213a5  lbu         $v0, 0x13A5($s0)
    ctx->pc = 0x14de38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5029)));
label_14de3c:
    // 0x14de3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14de3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14de40:
    // 0x14de40: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x14de40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_14de44:
    // 0x14de44: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x14de44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_14de48:
    // 0x14de48: 0x24425300  addiu       $v0, $v0, 0x5300
    ctx->pc = 0x14de48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21248));
label_14de4c:
    // 0x14de4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14de4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14de50:
    // 0x14de50: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x14de50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14de54:
    // 0x14de54: 0xa602122c  sh          $v0, 0x122C($s0)
    ctx->pc = 0x14de54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4652), (uint16_t)GPR_U32(ctx, 2));
label_14de58:
    // 0x14de58: 0x920213a5  lbu         $v0, 0x13A5($s0)
    ctx->pc = 0x14de58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5029)));
label_14de5c:
    // 0x14de5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14de5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14de60:
    // 0x14de60: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x14de60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_14de64:
    // 0x14de64: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x14de64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_14de68:
    // 0x14de68: 0x24425308  addiu       $v0, $v0, 0x5308
    ctx->pc = 0x14de68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21256));
label_14de6c:
    // 0x14de6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14de6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14de70:
    // 0x14de70: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x14de70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14de74:
    // 0x14de74: 0xa602122e  sh          $v0, 0x122E($s0)
    ctx->pc = 0x14de74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4654), (uint16_t)GPR_U32(ctx, 2));
label_14de78:
    // 0x14de78: 0x10000041  b           . + 4 + (0x41 << 2)
label_14de7c:
    if (ctx->pc == 0x14DE7Cu) {
        ctx->pc = 0x14DE80u;
        goto label_14de80;
    }
    ctx->pc = 0x14DE78u;
    {
        const bool branch_taken_0x14de78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14de78) {
            ctx->pc = 0x14DF80u;
            goto label_14df80;
        }
    }
    ctx->pc = 0x14DE80u;
label_14de80:
    // 0x14de80: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x14de80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14de84:
    // 0x14de84: 0xa602122c  sh          $v0, 0x122C($s0)
    ctx->pc = 0x14de84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4652), (uint16_t)GPR_U32(ctx, 2));
label_14de88:
    // 0x14de88: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x14de88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14de8c:
    // 0x14de8c: 0xa602122e  sh          $v0, 0x122E($s0)
    ctx->pc = 0x14de8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4654), (uint16_t)GPR_U32(ctx, 2));
label_14de90:
    // 0x14de90: 0x1000003b  b           . + 4 + (0x3B << 2)
label_14de94:
    if (ctx->pc == 0x14DE94u) {
        ctx->pc = 0x14DE98u;
        goto label_14de98;
    }
    ctx->pc = 0x14DE90u;
    {
        const bool branch_taken_0x14de90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14de90) {
            ctx->pc = 0x14DF80u;
            goto label_14df80;
        }
    }
    ctx->pc = 0x14DE98u;
label_14de98:
    // 0x14de98: 0x860213a8  lh          $v0, 0x13A8($s0)
    ctx->pc = 0x14de98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5032)));
label_14de9c:
    // 0x14de9c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x14de9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_14dea0:
    // 0x14dea0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x14dea0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_14dea4:
    // 0x14dea4: 0x860213aa  lh          $v0, 0x13AA($s0)
    ctx->pc = 0x14dea4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5034)));
label_14dea8:
    // 0x14dea8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x14dea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_14deac:
    // 0x14deac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14deacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_14deb0:
    // 0x14deb0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x14deb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_14deb4:
    // 0x14deb4: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_14deb8:
    if (ctx->pc == 0x14DEB8u) {
        ctx->pc = 0x14DEBCu;
        goto label_14debc;
    }
    ctx->pc = 0x14DEB4u;
    {
        const bool branch_taken_0x14deb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14deb4) {
            ctx->pc = 0x14DF70u;
            goto label_14df70;
        }
    }
    ctx->pc = 0x14DEBCu;
label_14debc:
    // 0x14debc: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x14debcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_14dec0:
    // 0x14dec0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x14dec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_14dec4:
    // 0x14dec4: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_14dec8:
    if (ctx->pc == 0x14DEC8u) {
        ctx->pc = 0x14DECCu;
        goto label_14decc;
    }
    ctx->pc = 0x14DEC4u;
    {
        const bool branch_taken_0x14dec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dec4) {
            ctx->pc = 0x14DF70u;
            goto label_14df70;
        }
    }
    ctx->pc = 0x14DECCu;
label_14decc:
    // 0x14decc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14deccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14ded0:
    // 0x14ded0: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x14ded0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_14ded4:
    // 0x14ded4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x14ded4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_14ded8:
    // 0x14ded8: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_14dedc:
    if (ctx->pc == 0x14DEDCu) {
        ctx->pc = 0x14DEE0u;
        goto label_14dee0;
    }
    ctx->pc = 0x14DED8u;
    {
        const bool branch_taken_0x14ded8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ded8) {
            ctx->pc = 0x14DF70u;
            goto label_14df70;
        }
    }
    ctx->pc = 0x14DEE0u;
label_14dee0:
    // 0x14dee0: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x14dee0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
label_14dee4:
    // 0x14dee4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x14dee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_14dee8:
    // 0x14dee8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14dee8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_14deec:
    // 0x14deec: 0x4400020  bltz        $v0, . + 4 + (0x20 << 2)
label_14def0:
    if (ctx->pc == 0x14DEF0u) {
        ctx->pc = 0x14DEF4u;
        goto label_14def4;
    }
    ctx->pc = 0x14DEECu;
    {
        const bool branch_taken_0x14deec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x14deec) {
            ctx->pc = 0x14DF70u;
            goto label_14df70;
        }
    }
    ctx->pc = 0x14DEF4u;
label_14def4:
    // 0x14def4: 0xa60013a8  sh          $zero, 0x13A8($s0)
    ctx->pc = 0x14def4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5032), (uint16_t)GPR_U32(ctx, 0));
label_14def8:
    // 0x14def8: 0x860313ae  lh          $v1, 0x13AE($s0)
    ctx->pc = 0x14def8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5038)));
label_14defc:
    // 0x14defc: 0xa60313ac  sh          $v1, 0x13AC($s0)
    ctx->pc = 0x14defcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5036), (uint16_t)GPR_U32(ctx, 3));
label_14df00:
    // 0x14df00: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14df00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14df04:
    // 0x14df04: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x14df04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_14df08:
    // 0x14df08: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x14df08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_14df0c:
    // 0x14df0c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14df0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14df10:
    // 0x14df10: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x14df10u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_14df14:
    // 0x14df14: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x14df14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_14df18:
    // 0x14df18: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x14df18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_14df1c:
    // 0x14df1c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14df1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_14df20:
    // 0x14df20: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x14df20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_14df24:
    // 0x14df24: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14df24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_14df28:
    // 0x14df28: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14df28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14df2c:
    // 0x14df2c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14df2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_14df30:
    // 0x14df30: 0x34440012  ori         $a0, $v0, 0x12
    ctx->pc = 0x14df30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18);
label_14df34:
    // 0x14df34: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14df34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14df38:
    // 0x14df38: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x14df38u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14df3c:
    // 0x14df3c: 0x8e070130  lw          $a3, 0x130($s0)
    ctx->pc = 0x14df3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_14df40:
    // 0x14df40: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x14df40u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14df44:
    // 0x14df44: 0xc06371c  jal         func_18DC70
label_14df48:
    if (ctx->pc == 0x14DF48u) {
        ctx->pc = 0x14DF4Cu;
        goto label_14df4c;
    }
    ctx->pc = 0x14DF44u;
    SET_GPR_U32(ctx, 31, 0x14DF4Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x14DF44u, 0x14DF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DF4Cu;
label_14df4c:
    // 0x14df4c: 0x8e050130  lw          $a1, 0x130($s0)
    ctx->pc = 0x14df4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_14df50:
    // 0x14df50: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x14df50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_14df54:
    // 0x14df54: 0x34624000  ori         $v0, $v1, 0x4000
    ctx->pc = 0x14df54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_14df58:
    // 0x14df58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14df58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14df5c:
    // 0x14df5c: 0x24040306  addiu       $a0, $zero, 0x306
    ctx->pc = 0x14df5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
label_14df60:
    // 0x14df60: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x14df60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_14df64:
    // 0x14df64: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x14df64u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14df68:
    // 0x14df68: 0xc067b18  jal         func_19EC60
label_14df6c:
    if (ctx->pc == 0x14DF6Cu) {
        ctx->pc = 0x14DF70u;
        goto label_14df70;
    }
    ctx->pc = 0x14DF68u;
    SET_GPR_U32(ctx, 31, 0x14DF70u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x14DF68u, 0x14DF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DF70u;
label_14df70:
    // 0x14df70: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x14df70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14df74:
    // 0x14df74: 0xa602122c  sh          $v0, 0x122C($s0)
    ctx->pc = 0x14df74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4652), (uint16_t)GPR_U32(ctx, 2));
label_14df78:
    // 0x14df78: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x14df78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_14df7c:
    // 0x14df7c: 0xa602122e  sh          $v0, 0x122E($s0)
    ctx->pc = 0x14df7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4654), (uint16_t)GPR_U32(ctx, 2));
label_14df80:
    // 0x14df80: 0x920213a7  lbu         $v0, 0x13A7($s0)
    ctx->pc = 0x14df80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5031)));
label_14df84:
    // 0x14df84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14df84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14df88:
    // 0x14df88: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_14df8c:
    if (ctx->pc == 0x14DF8Cu) {
        ctx->pc = 0x14DF90u;
        goto label_14df90;
    }
    ctx->pc = 0x14DF88u;
    {
        const bool branch_taken_0x14df88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14df88) {
            ctx->pc = 0x14E04Cu;
            goto label_14e04c;
        }
    }
    ctx->pc = 0x14DF90u;
label_14df90:
    // 0x14df90: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14df90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14df94:
    // 0x14df94: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x14df94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_14df98:
    // 0x14df98: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x14df98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_14df9c:
    // 0x14df9c: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
label_14dfa0:
    if (ctx->pc == 0x14DFA0u) {
        ctx->pc = 0x14DFA4u;
        goto label_14dfa4;
    }
    ctx->pc = 0x14DF9Cu;
    {
        const bool branch_taken_0x14df9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14df9c) {
            ctx->pc = 0x14E108u;
            goto label_14e108;
        }
    }
    ctx->pc = 0x14DFA4u;
label_14dfa4:
    // 0x14dfa4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14dfa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14dfa8:
    // 0x14dfa8: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x14dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_14dfac:
    // 0x14dfac: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x14dfacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_14dfb0:
    // 0x14dfb0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14dfb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14dfb4:
    // 0x14dfb4: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x14dfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 3));
label_14dfb8:
    // 0x14dfb8: 0x920213a7  lbu         $v0, 0x13A7($s0)
    ctx->pc = 0x14dfb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5031)));
label_14dfbc:
    // 0x14dfbc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x14dfbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14dfc0:
    // 0x14dfc0: 0xc055600  jal         func_155800
label_14dfc4:
    if (ctx->pc == 0x14DFC4u) {
        ctx->pc = 0x14DFC8u;
        goto label_14dfc8;
    }
    ctx->pc = 0x14DFC0u;
    SET_GPR_U32(ctx, 31, 0x14DFC8u);
    ctx->pc = 0x155800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155800u, 0x14DFC0u, 0x14DFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DFC8u;
label_14dfc8:
    // 0x14dfc8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x14dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_14dfcc:
    // 0x14dfcc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x14dfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_14dfd0:
    // 0x14dfd0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14dfd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14dfd4:
    // 0x14dfd4: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x14dfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_14dfd8:
    // 0x14dfd8: 0x24040308  addiu       $a0, $zero, 0x308
    ctx->pc = 0x14dfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 776));
label_14dfdc:
    // 0x14dfdc: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x14dfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_14dfe0:
    // 0x14dfe0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x14dfe0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14dfe4:
    // 0x14dfe4: 0xc067b18  jal         func_19EC60
label_14dfe8:
    if (ctx->pc == 0x14DFE8u) {
        ctx->pc = 0x14DFECu;
        goto label_14dfec;
    }
    ctx->pc = 0x14DFE4u;
    SET_GPR_U32(ctx, 31, 0x14DFECu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x14DFE4u, 0x14DFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DFECu;
label_14dfec:
    // 0x14dfec: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x14dfecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_14dff0:
    // 0x14dff0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x14dff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_14dff4:
    // 0x14dff4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14dff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_14dff8:
    // 0x14dff8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x14dff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_14dffc:
    // 0x14dffc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14dffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_14e000:
    // 0x14e000: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14e000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14e004:
    // 0x14e004: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14e004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_14e008:
    // 0x14e008: 0x34440212  ori         $a0, $v0, 0x212
    ctx->pc = 0x14e008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)530);
label_14e00c:
    // 0x14e00c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14e00cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14e010:
    // 0x14e010: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x14e010u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14e014:
    // 0x14e014: 0x8e070130  lw          $a3, 0x130($s0)
    ctx->pc = 0x14e014u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_14e018:
    // 0x14e018: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x14e018u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14e01c:
    // 0x14e01c: 0xc06371c  jal         func_18DC70
label_14e020:
    if (ctx->pc == 0x14E020u) {
        ctx->pc = 0x14E024u;
        goto label_14e024;
    }
    ctx->pc = 0x14E01Cu;
    SET_GPR_U32(ctx, 31, 0x14E024u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x14E01Cu, 0x14E024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E024u;
label_14e024:
    // 0x14e024: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x14e024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_14e028:
    // 0x14e028: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x14e028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_14e02c:
    // 0x14e02c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14e02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_14e030:
    // 0x14e030: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x14e030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_14e034:
    // 0x14e034: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x14e034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_14e038:
    // 0x14e038: 0xa60213c0  sh          $v0, 0x13C0($s0)
    ctx->pc = 0x14e038u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5056), (uint16_t)GPR_U32(ctx, 2));
label_14e03c:
    // 0x14e03c: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x14e03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_14e040:
    // 0x14e040: 0xa60313c2  sh          $v1, 0x13C2($s0)
    ctx->pc = 0x14e040u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5058), (uint16_t)GPR_U32(ctx, 3));
label_14e044:
    // 0x14e044: 0x10000030  b           . + 4 + (0x30 << 2)
label_14e048:
    if (ctx->pc == 0x14E048u) {
        ctx->pc = 0x14E04Cu;
        goto label_14e04c;
    }
    ctx->pc = 0x14E044u;
    {
        const bool branch_taken_0x14e044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e044) {
            ctx->pc = 0x14E108u;
            goto label_14e108;
        }
    }
    ctx->pc = 0x14E04Cu;
label_14e04c:
    // 0x14e04c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e04cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14e050:
    // 0x14e050: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x14e050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_14e054:
    // 0x14e054: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x14e054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_14e058:
    // 0x14e058: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_14e05c:
    if (ctx->pc == 0x14E05Cu) {
        ctx->pc = 0x14E060u;
        goto label_14e060;
    }
    ctx->pc = 0x14E058u;
    {
        const bool branch_taken_0x14e058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e058) {
            ctx->pc = 0x14E108u;
            goto label_14e108;
        }
    }
    ctx->pc = 0x14E060u;
label_14e060:
    // 0x14e060: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14e064:
    // 0x14e064: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x14e064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_14e068:
    // 0x14e068: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x14e068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_14e06c:
    // 0x14e06c: 0x34627fff  ori         $v0, $v1, 0x7FFF
    ctx->pc = 0x14e06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
label_14e070:
    // 0x14e070: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x14e070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_14e074:
    // 0x14e074: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14e078:
    // 0x14e078: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x14e078u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_14e07c:
    // 0x14e07c: 0x920213a7  lbu         $v0, 0x13A7($s0)
    ctx->pc = 0x14e07cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5031)));
label_14e080:
    // 0x14e080: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x14e080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14e084:
    // 0x14e084: 0xc055600  jal         func_155800
label_14e088:
    if (ctx->pc == 0x14E088u) {
        ctx->pc = 0x14E08Cu;
        goto label_14e08c;
    }
    ctx->pc = 0x14E084u;
    SET_GPR_U32(ctx, 31, 0x14E08Cu);
    ctx->pc = 0x155800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155800u, 0x14E084u, 0x14E08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E08Cu;
label_14e08c:
    // 0x14e08c: 0x8e050130  lw          $a1, 0x130($s0)
    ctx->pc = 0x14e08cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_14e090:
    // 0x14e090: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x14e090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_14e094:
    // 0x14e094: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x14e094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_14e098:
    // 0x14e098: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x14e098u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14e09c:
    // 0x14e09c: 0x2404030c  addiu       $a0, $zero, 0x30C
    ctx->pc = 0x14e09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 780));
label_14e0a0:
    // 0x14e0a0: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x14e0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_14e0a4:
    // 0x14e0a4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x14e0a4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14e0a8:
    // 0x14e0a8: 0xc067b18  jal         func_19EC60
label_14e0ac:
    if (ctx->pc == 0x14E0ACu) {
        ctx->pc = 0x14E0B0u;
        goto label_14e0b0;
    }
    ctx->pc = 0x14E0A8u;
    SET_GPR_U32(ctx, 31, 0x14E0B0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x14E0A8u, 0x14E0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E0B0u;
label_14e0b0:
    // 0x14e0b0: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x14e0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_14e0b4:
    // 0x14e0b4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x14e0b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_14e0b8:
    // 0x14e0b8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14e0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_14e0bc:
    // 0x14e0bc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x14e0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_14e0c0:
    // 0x14e0c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14e0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_14e0c4:
    // 0x14e0c4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14e0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14e0c8:
    // 0x14e0c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14e0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_14e0cc:
    // 0x14e0cc: 0x34440312  ori         $a0, $v0, 0x312
    ctx->pc = 0x14e0ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)786);
label_14e0d0:
    // 0x14e0d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14e0d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14e0d4:
    // 0x14e0d4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x14e0d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14e0d8:
    // 0x14e0d8: 0x8e070130  lw          $a3, 0x130($s0)
    ctx->pc = 0x14e0d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_14e0dc:
    // 0x14e0dc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x14e0dcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14e0e0:
    // 0x14e0e0: 0xc06371c  jal         func_18DC70
label_14e0e4:
    if (ctx->pc == 0x14E0E4u) {
        ctx->pc = 0x14E0E8u;
        goto label_14e0e8;
    }
    ctx->pc = 0x14E0E0u;
    SET_GPR_U32(ctx, 31, 0x14E0E8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x14E0E0u, 0x14E0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E0E8u;
label_14e0e8:
    // 0x14e0e8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x14e0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_14e0ec:
    // 0x14e0ec: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x14e0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_14e0f0:
    // 0x14e0f0: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x14e0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_14e0f4:
    // 0x14e0f4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x14e0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_14e0f8:
    // 0x14e0f8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x14e0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_14e0fc:
    // 0x14e0fc: 0xa60313c0  sh          $v1, 0x13C0($s0)
    ctx->pc = 0x14e0fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5056), (uint16_t)GPR_U32(ctx, 3));
label_14e100:
    // 0x14e100: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x14e100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_14e104:
    // 0x14e104: 0xa60213c2  sh          $v0, 0x13C2($s0)
    ctx->pc = 0x14e104u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5058), (uint16_t)GPR_U32(ctx, 2));
label_14e108:
    // 0x14e108: 0x920213a6  lbu         $v0, 0x13A6($s0)
    ctx->pc = 0x14e108u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5030)));
label_14e10c:
    // 0x14e10c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x14e10cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14e110:
    // 0x14e110: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x14e110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14e114:
    // 0x14e114: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
label_14e118:
    if (ctx->pc == 0x14E118u) {
        ctx->pc = 0x14E11Cu;
        goto label_14e11c;
    }
    ctx->pc = 0x14E114u;
    {
        const bool branch_taken_0x14e114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e114) {
            ctx->pc = 0x14E160u;
            goto label_14e160;
        }
    }
    ctx->pc = 0x14E11Cu;
label_14e11c:
    // 0x14e11c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14e11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14e120:
    // 0x14e120: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
label_14e124:
    if (ctx->pc == 0x14E124u) {
        ctx->pc = 0x14E128u;
        goto label_14e128;
    }
    ctx->pc = 0x14E120u;
    {
        const bool branch_taken_0x14e120 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e120) {
            ctx->pc = 0x14E150u;
            goto label_14e150;
        }
    }
    ctx->pc = 0x14E128u;
label_14e128:
    // 0x14e128: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14e128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14e12c:
    // 0x14e12c: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_14e130:
    if (ctx->pc == 0x14E130u) {
        ctx->pc = 0x14E134u;
        goto label_14e134;
    }
    ctx->pc = 0x14E12Cu;
    {
        const bool branch_taken_0x14e12c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14e12c) {
            ctx->pc = 0x14E144u;
            goto label_14e144;
        }
    }
    ctx->pc = 0x14E134u;
label_14e134:
    // 0x14e134: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_14e138:
    if (ctx->pc == 0x14E138u) {
        ctx->pc = 0x14E13Cu;
        goto label_14e13c;
    }
    ctx->pc = 0x14E134u;
    {
        const bool branch_taken_0x14e134 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e134) {
            ctx->pc = 0x14E144u;
            goto label_14e144;
        }
    }
    ctx->pc = 0x14E13Cu;
label_14e13c:
    // 0x14e13c: 0x10000001  b           . + 4 + (0x1 << 2)
label_14e140:
    if (ctx->pc == 0x14E140u) {
        ctx->pc = 0x14E144u;
        goto label_14e144;
    }
    ctx->pc = 0x14E13Cu;
    {
        const bool branch_taken_0x14e13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e13c) {
            ctx->pc = 0x14E144u;
            goto label_14e144;
        }
    }
    ctx->pc = 0x14E144u;
label_14e144:
    // 0x14e144: 0xa20013a7  sb          $zero, 0x13A7($s0)
    ctx->pc = 0x14e144u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5031), (uint8_t)GPR_U32(ctx, 0));
label_14e148:
    // 0x14e148: 0x10000007  b           . + 4 + (0x7 << 2)
label_14e14c:
    if (ctx->pc == 0x14E14Cu) {
        ctx->pc = 0x14E150u;
        goto label_14e150;
    }
    ctx->pc = 0x14E148u;
    {
        const bool branch_taken_0x14e148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e148) {
            ctx->pc = 0x14E168u;
            goto label_14e168;
        }
    }
    ctx->pc = 0x14E150u;
label_14e150:
    // 0x14e150: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x14e150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_14e154:
    // 0x14e154: 0xa20213a7  sb          $v0, 0x13A7($s0)
    ctx->pc = 0x14e154u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5031), (uint8_t)GPR_U32(ctx, 2));
label_14e158:
    // 0x14e158: 0x10000003  b           . + 4 + (0x3 << 2)
label_14e15c:
    if (ctx->pc == 0x14E15Cu) {
        ctx->pc = 0x14E160u;
        goto label_14e160;
    }
    ctx->pc = 0x14E158u;
    {
        const bool branch_taken_0x14e158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e158) {
            ctx->pc = 0x14E168u;
            goto label_14e168;
        }
    }
    ctx->pc = 0x14E160u;
label_14e160:
    // 0x14e160: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x14e160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_14e164:
    // 0x14e164: 0xa20213a7  sb          $v0, 0x13A7($s0)
    ctx->pc = 0x14e164u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5031), (uint8_t)GPR_U32(ctx, 2));
label_14e168:
    // 0x14e168: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14e16c:
    // 0x14e16c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x14e16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_14e170:
    // 0x14e170: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x14e170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_14e174:
    // 0x14e174: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14e174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14e178:
    // 0x14e178: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14e17c:
    // 0x14e17c: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x14e17cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_14e180:
    // 0x14e180: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14e180u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_14e184:
    // 0x14e184: 0xc0d868c  jal         func_361A30
label_14e188:
    if (ctx->pc == 0x14E188u) {
        ctx->pc = 0x14E18Cu;
        goto label_14e18c;
    }
    ctx->pc = 0x14E184u;
    SET_GPR_U32(ctx, 31, 0x14E18Cu);
    ctx->pc = 0x361A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361A30u, 0x14E184u, 0x14E18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E18Cu;
label_14e18c:
    // 0x14e18c: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x14e18cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_14e190:
    // 0x14e190: 0x12800014  beqz        $s4, . + 4 + (0x14 << 2)
label_14e194:
    if (ctx->pc == 0x14E194u) {
        ctx->pc = 0x14E198u;
        goto label_14e198;
    }
    ctx->pc = 0x14E190u;
    {
        const bool branch_taken_0x14e190 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e190) {
            ctx->pc = 0x14E1E4u;
            goto label_14e1e4;
        }
    }
    ctx->pc = 0x14E198u;
label_14e198:
    // 0x14e198: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x14e198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_14e19c:
    // 0x14e19c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x14e19cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_14e1a0:
    // 0x14e1a0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14e1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_14e1a4:
    // 0x14e1a4: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_14e1a8:
    if (ctx->pc == 0x14E1A8u) {
        ctx->pc = 0x14E1ACu;
        goto label_14e1ac;
    }
    ctx->pc = 0x14E1A4u;
    {
        const bool branch_taken_0x14e1a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e1a4) {
            ctx->pc = 0x14E1E4u;
            goto label_14e1e4;
        }
    }
    ctx->pc = 0x14E1ACu;
label_14e1ac:
    // 0x14e1ac: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x14e1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_14e1b0:
    // 0x14e1b0: 0xc68c00d4  lwc1        $f12, 0xD4($s4)
    ctx->pc = 0x14e1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14e1b4:
    // 0x14e1b4: 0xc067844  jal         func_19E110
label_14e1b8:
    if (ctx->pc == 0x14E1B8u) {
        ctx->pc = 0x14E1BCu;
        goto label_14e1bc;
    }
    ctx->pc = 0x14E1B4u;
    SET_GPR_U32(ctx, 31, 0x14E1BCu);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x14E1B4u, 0x14E1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E1BCu;
label_14e1bc:
    // 0x14e1bc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x14e1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_14e1c0:
    // 0x14e1c0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x14e1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_14e1c4:
    // 0x14e1c4: 0x26860180  addiu       $a2, $s4, 0x180
    ctx->pc = 0x14e1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 384));
label_14e1c8:
    // 0x14e1c8: 0xc040bf4  jal         func_102FD0
label_14e1cc:
    if (ctx->pc == 0x14E1CCu) {
        ctx->pc = 0x14E1D0u;
        goto label_14e1d0;
    }
    ctx->pc = 0x14E1C8u;
    SET_GPR_U32(ctx, 31, 0x14E1D0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x14E1D0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x14E1D0u) { return; }
    ctx->pc = 0x14E1D0u;
label_14e1d0:
    // 0x14e1d0: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x14e1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_14e1d4:
    // 0x14e1d4: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x14e1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_14e1d8:
    // 0x14e1d8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x14e1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_14e1dc:
    // 0x14e1dc: 0xc0675a8  jal         func_19D6A0
label_14e1e0:
    if (ctx->pc == 0x14E1E0u) {
        ctx->pc = 0x14E1E4u;
        goto label_14e1e4;
    }
    ctx->pc = 0x14E1DCu;
    SET_GPR_U32(ctx, 31, 0x14E1E4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x14E1DCu, 0x14E1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E1E4u;
label_14e1e4:
    // 0x14e1e4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14e1e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_14e1e8:
    // 0x14e1e8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x14e1e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_14e1ec:
    // 0x14e1ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14e1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14e1f0:
    // 0x14e1f0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x14e1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14e1f4:
    // 0x14e1f4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x14e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_14e1f8:
    // 0x14e1f8: 0x24425310  addiu       $v0, $v0, 0x5310
    ctx->pc = 0x14e1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21264));
label_14e1fc:
    // 0x14e1fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14e200:
    // 0x14e200: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14e204:
    // 0x14e204: 0x40f809  jalr        $v0
label_14e208:
    if (ctx->pc == 0x14E208u) {
        ctx->pc = 0x14E20Cu;
        goto label_14e20c;
    }
    ctx->pc = 0x14E204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14E20Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E204u, 0x14E20Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14E20Cu;
label_14e20c:
    // 0x14e20c: 0x920309de  lbu         $v1, 0x9DE($s0)
    ctx->pc = 0x14e20cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2526)));
label_14e210:
    // 0x14e210: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14e210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14e214:
    // 0x14e214: 0x3062003f  andi        $v0, $v1, 0x3F
    ctx->pc = 0x14e214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_14e218:
    // 0x14e218: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14e218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14e21c:
    // 0x14e21c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x14e21cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14e220:
    // 0x14e220: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x14e220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_14e224:
    // 0x14e224: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_14e228:
    if (ctx->pc == 0x14E228u) {
        ctx->pc = 0x14E22Cu;
        goto label_14e22c;
    }
    ctx->pc = 0x14E224u;
    {
        const bool branch_taken_0x14e224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e224) {
            ctx->pc = 0x14E290u;
            goto label_14e290;
        }
    }
    ctx->pc = 0x14E22Cu;
label_14e22c:
    // 0x14e22c: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x14e22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_14e230:
    // 0x14e230: 0x2841002a  slti        $at, $v0, 0x2A
    ctx->pc = 0x14e230u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)42) ? 1 : 0);
label_14e234:
    // 0x14e234: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_14e238:
    if (ctx->pc == 0x14E238u) {
        ctx->pc = 0x14E23Cu;
        goto label_14e23c;
    }
    ctx->pc = 0x14E234u;
    {
        const bool branch_taken_0x14e234 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e234) {
            ctx->pc = 0x14E290u;
            goto label_14e290;
        }
    }
    ctx->pc = 0x14E23Cu;
label_14e23c:
    // 0x14e23c: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x14e23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_14e240:
    // 0x14e240: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14e240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_14e244:
    // 0x14e244: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x14e244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_14e248:
    // 0x14e248: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x14e248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_14e24c:
    // 0x14e24c: 0x24425220  addiu       $v0, $v0, 0x5220
    ctx->pc = 0x14e24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21024));
label_14e250:
    // 0x14e250: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14e250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14e254:
    // 0x14e254: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x14e254u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14e258:
    // 0x14e258: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x14e258u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_14e25c:
    // 0x14e25c: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x14e25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_14e260:
    // 0x14e260: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14e260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_14e264:
    // 0x14e264: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_14e268:
    if (ctx->pc == 0x14E268u) {
        ctx->pc = 0x14E26Cu;
        goto label_14e26c;
    }
    ctx->pc = 0x14E264u;
    {
        const bool branch_taken_0x14e264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e264) {
            ctx->pc = 0x14E290u;
            goto label_14e290;
        }
    }
    ctx->pc = 0x14E26Cu;
label_14e26c:
    // 0x14e26c: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x14e26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_14e270:
    // 0x14e270: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x14e270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_14e274:
    // 0x14e274: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x14e274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_14e278:
    // 0x14e278: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14e278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14e27c:
    // 0x14e27c: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x14e27cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_14e280:
    // 0x14e280: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x14e280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_14e284:
    // 0x14e284: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x14e284u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14e288:
    // 0x14e288: 0xc067b18  jal         func_19EC60
label_14e28c:
    if (ctx->pc == 0x14E28Cu) {
        ctx->pc = 0x14E290u;
        goto label_14e290;
    }
    ctx->pc = 0x14E288u;
    SET_GPR_U32(ctx, 31, 0x14E290u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x14E288u, 0x14E290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E290u;
label_14e290:
    // 0x14e290: 0x9203107e  lbu         $v1, 0x107E($s0)
    ctx->pc = 0x14e290u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4222)));
label_14e294:
    // 0x14e294: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x14e294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14e298:
    // 0x14e298: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x14e298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_14e29c:
    // 0x14e29c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14e29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14e2a0:
    // 0x14e2a0: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x14e2a0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14e2a4:
    // 0x14e2a4: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x14e2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_14e2a8:
    // 0x14e2a8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_14e2ac:
    if (ctx->pc == 0x14E2ACu) {
        ctx->pc = 0x14E2B0u;
        goto label_14e2b0;
    }
    ctx->pc = 0x14E2A8u;
    {
        const bool branch_taken_0x14e2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e2a8) {
            ctx->pc = 0x14E32Cu;
            goto label_14e32c;
        }
    }
    ctx->pc = 0x14E2B0u;
label_14e2b0:
    // 0x14e2b0: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x14e2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_14e2b4:
    // 0x14e2b4: 0x2841002a  slti        $at, $v0, 0x2A
    ctx->pc = 0x14e2b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)42) ? 1 : 0);
label_14e2b8:
    // 0x14e2b8: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
label_14e2bc:
    if (ctx->pc == 0x14E2BCu) {
        ctx->pc = 0x14E2C0u;
        goto label_14e2c0;
    }
    ctx->pc = 0x14E2B8u;
    {
        const bool branch_taken_0x14e2b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e2b8) {
            ctx->pc = 0x14E32Cu;
            goto label_14e32c;
        }
    }
    ctx->pc = 0x14E2C0u;
label_14e2c0:
    // 0x14e2c0: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x14e2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_14e2c4:
    // 0x14e2c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_14e2c8:
    // 0x14e2c8: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x14e2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_14e2cc:
    // 0x14e2cc: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x14e2ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
label_14e2d0:
    // 0x14e2d0: 0x24e25280  addiu       $v0, $a3, 0x5280
    ctx->pc = 0x14e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 21120));
label_14e2d4:
    // 0x14e2d4: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x14e2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_14e2d8:
    // 0x14e2d8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x14e2d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_14e2dc:
    // 0x14e2dc: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x14e2dcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_14e2e0:
    // 0x14e2e0: 0x3264ffff  andi        $a0, $s3, 0xFFFF
    ctx->pc = 0x14e2e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_14e2e4:
    // 0x14e2e4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x14e2e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_14e2e8:
    // 0x14e2e8: 0x10850010  beq         $a0, $a1, . + 4 + (0x10 << 2)
label_14e2ec:
    if (ctx->pc == 0x14E2ECu) {
        ctx->pc = 0x14E2F0u;
        goto label_14e2f0;
    }
    ctx->pc = 0x14E2E8u;
    {
        const bool branch_taken_0x14e2e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x14e2e8) {
            ctx->pc = 0x14E32Cu;
            goto label_14e32c;
        }
    }
    ctx->pc = 0x14E2F0u;
label_14e2f0:
    // 0x14e2f0: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x14e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_14e2f4:
    // 0x14e2f4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x14e2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_14e2f8:
    // 0x14e2f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14e2f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14e2fc:
    // 0x14e2fc: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x14e2fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_14e300:
    // 0x14e300: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x14e300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_14e304:
    // 0x14e304: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x14e304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_14e308:
    // 0x14e308: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x14e308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_14e30c:
    // 0x14e30c: 0x24425220  addiu       $v0, $v0, 0x5220
    ctx->pc = 0x14e30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21024));
label_14e310:
    // 0x14e310: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x14e310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14e314:
    // 0x14e314: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x14e314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_14e318:
    // 0x14e318: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x14e318u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_14e31c:
    // 0x14e31c: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x14e31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_14e320:
    // 0x14e320: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x14e320u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14e324:
    // 0x14e324: 0xc067b18  jal         func_19EC60
label_14e328:
    if (ctx->pc == 0x14E328u) {
        ctx->pc = 0x14E32Cu;
        goto label_14e32c;
    }
    ctx->pc = 0x14E324u;
    SET_GPR_U32(ctx, 31, 0x14E32Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x14E324u, 0x14E32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E32Cu;
label_14e32c:
    // 0x14e32c: 0x920209df  lbu         $v0, 0x9DF($s0)
    ctx->pc = 0x14e32cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2527)));
label_14e330:
    // 0x14e330: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14e330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14e334:
    // 0x14e334: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x14e334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_14e338:
    // 0x14e338: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_14e33c:
    if (ctx->pc == 0x14E33Cu) {
        ctx->pc = 0x14E340u;
        goto label_14e340;
    }
    ctx->pc = 0x14E338u;
    {
        const bool branch_taken_0x14e338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e338) {
            ctx->pc = 0x14E354u;
            goto label_14e354;
        }
    }
    ctx->pc = 0x14E340u;
label_14e340:
    // 0x14e340: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14e344:
    // 0x14e344: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x14e344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_14e348:
    // 0x14e348: 0x34620200  ori         $v0, $v1, 0x200
    ctx->pc = 0x14e348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
label_14e34c:
    // 0x14e34c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e34cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14e350:
    // 0x14e350: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x14e350u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 2));
label_14e354:
    // 0x14e354: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x14e354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_14e358:
    // 0x14e358: 0x3c02ffea  lui         $v0, 0xFFEA
    ctx->pc = 0x14e358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65514 << 16));
label_14e35c:
    // 0x14e35c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x14e35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_14e360:
    // 0x14e360: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x14e360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_14e364:
    // 0x14e364: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x14e364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_14e368:
    // 0x14e368: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x14e368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_14e36c:
    // 0x14e36c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x14e36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_14e370:
    // 0x14e370: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_14e374:
    if (ctx->pc == 0x14E374u) {
        ctx->pc = 0x14E378u;
        goto label_14e378;
    }
    ctx->pc = 0x14E370u;
    {
        const bool branch_taken_0x14e370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e370) {
            ctx->pc = 0x14E3A0u;
            goto label_14e3a0;
        }
    }
    ctx->pc = 0x14E378u;
label_14e378:
    // 0x14e378: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x14e378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_14e37c:
    // 0x14e37c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x14e37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_14e380:
    // 0x14e380: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14e380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14e384:
    // 0x14e384: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_14e388:
    if (ctx->pc == 0x14E388u) {
        ctx->pc = 0x14E38Cu;
        goto label_14e38c;
    }
    ctx->pc = 0x14E384u;
    {
        const bool branch_taken_0x14e384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e384) {
            ctx->pc = 0x14E3A0u;
            goto label_14e3a0;
        }
    }
    ctx->pc = 0x14E38Cu;
label_14e38c:
    // 0x14e38c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e38cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14e390:
    // 0x14e390: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x14e390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_14e394:
    // 0x14e394: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x14e394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_14e398:
    // 0x14e398: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_14e39c:
    if (ctx->pc == 0x14E39Cu) {
        ctx->pc = 0x14E3A0u;
        goto label_14e3a0;
    }
    ctx->pc = 0x14E398u;
    {
        const bool branch_taken_0x14e398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e398) {
            ctx->pc = 0x14E3A4u;
            goto label_14e3a4;
        }
    }
    ctx->pc = 0x14E3A0u;
label_14e3a0:
    // 0x14e3a0: 0xa6001416  sh          $zero, 0x1416($s0)
    ctx->pc = 0x14e3a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5142), (uint16_t)GPR_U32(ctx, 0));
label_14e3a4:
    // 0x14e3a4: 0xc053cf8  jal         func_14F3E0
label_14e3a8:
    if (ctx->pc == 0x14E3A8u) {
        ctx->pc = 0x14E3ACu;
        goto label_14e3ac;
    }
    ctx->pc = 0x14E3A4u;
    SET_GPR_U32(ctx, 31, 0x14E3ACu);
    ctx->pc = 0x14F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F3E0u, 0x14E3A4u, 0x14E3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E3ACu;
label_14e3ac:
    // 0x14e3ac: 0xc053f9c  jal         func_14FE70
label_14e3b0:
    if (ctx->pc == 0x14E3B0u) {
        ctx->pc = 0x14E3B4u;
        goto label_14e3b4;
    }
    ctx->pc = 0x14E3ACu;
    SET_GPR_U32(ctx, 31, 0x14E3B4u);
    ctx->pc = 0x14FE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FE70u, 0x14E3ACu, 0x14E3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E3B4u;
label_14e3b4:
    // 0x14e3b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x14e3b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_14e3b8:
    // 0x14e3b8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14e3b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_14e3bc:
    // 0x14e3bc: 0xc053b30  jal         func_14ECC0
label_14e3c0:
    if (ctx->pc == 0x14E3C0u) {
        ctx->pc = 0x14E3C4u;
        goto label_14e3c4;
    }
    ctx->pc = 0x14E3BCu;
    SET_GPR_U32(ctx, 31, 0x14E3C4u);
    ctx->pc = 0x14ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ECC0u, 0x14E3BCu, 0x14E3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E3C4u;
label_14e3c4:
    // 0x14e3c4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x14e3c4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_14e3c8:
    // 0x14e3c8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14e3c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_14e3cc:
    // 0x14e3cc: 0xc054590  jal         func_151640
label_14e3d0:
    if (ctx->pc == 0x14E3D0u) {
        ctx->pc = 0x14E3D4u;
        goto label_14e3d4;
    }
    ctx->pc = 0x14E3CCu;
    SET_GPR_U32(ctx, 31, 0x14E3D4u);
    ctx->pc = 0x151640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151640u, 0x14E3CCu, 0x14E3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E3D4u;
label_14e3d4:
    // 0x14e3d4: 0xc074444  jal         func_1D1110
label_14e3d8:
    if (ctx->pc == 0x14E3D8u) {
        ctx->pc = 0x14E3DCu;
        goto label_14e3dc;
    }
    ctx->pc = 0x14E3D4u;
    SET_GPR_U32(ctx, 31, 0x14E3DCu);
    ctx->pc = 0x1D1110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1110u, 0x14E3D4u, 0x14E3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E3DCu;
label_14e3dc:
    // 0x14e3dc: 0xc054b88  jal         func_152E20
label_14e3e0:
    if (ctx->pc == 0x14E3E0u) {
        ctx->pc = 0x14E3E4u;
        goto label_14e3e4;
    }
    ctx->pc = 0x14E3DCu;
    SET_GPR_U32(ctx, 31, 0x14E3E4u);
    ctx->pc = 0x152E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152E20u, 0x14E3DCu, 0x14E3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E3E4u;
label_14e3e4:
    // 0x14e3e4: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x14e3e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_14e3e8:
    // 0x14e3e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14e3e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_14e3ec:
    // 0x14e3ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14e3ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14e3f0:
    // 0x14e3f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14e3f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14e3f4:
    // 0x14e3f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14e3f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14e3f8:
    // 0x14e3f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14e3f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14e3fc:
    // 0x14e3fc: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x14e3fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_14e400:
    // 0x14e400: 0x3e00008  jr          $ra
label_14e404:
    if (ctx->pc == 0x14E404u) {
        ctx->pc = 0x14E408u;
        goto label_fallthrough_0x14e400;
    }
    ctx->pc = 0x14E400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14e400:
    ctx->pc = 0x14E408u;
}
