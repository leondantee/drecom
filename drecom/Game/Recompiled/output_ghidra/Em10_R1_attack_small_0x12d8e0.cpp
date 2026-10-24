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

// Function: Em10_R1_attack_small
// Address: 0x12d8e0 - 0x12e1bc
void Em10_R1_attack_small_0x12d8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_attack_small_0x12d8e0");
#endif

    switch (ctx->pc) {
        case 0x12d8e0u: goto label_12d8e0;
        case 0x12d8e4u: goto label_12d8e4;
        case 0x12d8e8u: goto label_12d8e8;
        case 0x12d8ecu: goto label_12d8ec;
        case 0x12d8f0u: goto label_12d8f0;
        case 0x12d8f4u: goto label_12d8f4;
        case 0x12d8f8u: goto label_12d8f8;
        case 0x12d8fcu: goto label_12d8fc;
        case 0x12d900u: goto label_12d900;
        case 0x12d904u: goto label_12d904;
        case 0x12d908u: goto label_12d908;
        case 0x12d90cu: goto label_12d90c;
        case 0x12d910u: goto label_12d910;
        case 0x12d914u: goto label_12d914;
        case 0x12d918u: goto label_12d918;
        case 0x12d91cu: goto label_12d91c;
        case 0x12d920u: goto label_12d920;
        case 0x12d924u: goto label_12d924;
        case 0x12d928u: goto label_12d928;
        case 0x12d92cu: goto label_12d92c;
        case 0x12d930u: goto label_12d930;
        case 0x12d934u: goto label_12d934;
        case 0x12d938u: goto label_12d938;
        case 0x12d93cu: goto label_12d93c;
        case 0x12d940u: goto label_12d940;
        case 0x12d944u: goto label_12d944;
        case 0x12d948u: goto label_12d948;
        case 0x12d94cu: goto label_12d94c;
        case 0x12d950u: goto label_12d950;
        case 0x12d954u: goto label_12d954;
        case 0x12d958u: goto label_12d958;
        case 0x12d95cu: goto label_12d95c;
        case 0x12d960u: goto label_12d960;
        case 0x12d964u: goto label_12d964;
        case 0x12d968u: goto label_12d968;
        case 0x12d96cu: goto label_12d96c;
        case 0x12d970u: goto label_12d970;
        case 0x12d974u: goto label_12d974;
        case 0x12d978u: goto label_12d978;
        case 0x12d97cu: goto label_12d97c;
        case 0x12d980u: goto label_12d980;
        case 0x12d984u: goto label_12d984;
        case 0x12d988u: goto label_12d988;
        case 0x12d98cu: goto label_12d98c;
        case 0x12d990u: goto label_12d990;
        case 0x12d994u: goto label_12d994;
        case 0x12d998u: goto label_12d998;
        case 0x12d99cu: goto label_12d99c;
        case 0x12d9a0u: goto label_12d9a0;
        case 0x12d9a4u: goto label_12d9a4;
        case 0x12d9a8u: goto label_12d9a8;
        case 0x12d9acu: goto label_12d9ac;
        case 0x12d9b0u: goto label_12d9b0;
        case 0x12d9b4u: goto label_12d9b4;
        case 0x12d9b8u: goto label_12d9b8;
        case 0x12d9bcu: goto label_12d9bc;
        case 0x12d9c0u: goto label_12d9c0;
        case 0x12d9c4u: goto label_12d9c4;
        case 0x12d9c8u: goto label_12d9c8;
        case 0x12d9ccu: goto label_12d9cc;
        case 0x12d9d0u: goto label_12d9d0;
        case 0x12d9d4u: goto label_12d9d4;
        case 0x12d9d8u: goto label_12d9d8;
        case 0x12d9dcu: goto label_12d9dc;
        case 0x12d9e0u: goto label_12d9e0;
        case 0x12d9e4u: goto label_12d9e4;
        case 0x12d9e8u: goto label_12d9e8;
        case 0x12d9ecu: goto label_12d9ec;
        case 0x12d9f0u: goto label_12d9f0;
        case 0x12d9f4u: goto label_12d9f4;
        case 0x12d9f8u: goto label_12d9f8;
        case 0x12d9fcu: goto label_12d9fc;
        case 0x12da00u: goto label_12da00;
        case 0x12da04u: goto label_12da04;
        case 0x12da08u: goto label_12da08;
        case 0x12da0cu: goto label_12da0c;
        case 0x12da10u: goto label_12da10;
        case 0x12da14u: goto label_12da14;
        case 0x12da18u: goto label_12da18;
        case 0x12da1cu: goto label_12da1c;
        case 0x12da20u: goto label_12da20;
        case 0x12da24u: goto label_12da24;
        case 0x12da28u: goto label_12da28;
        case 0x12da2cu: goto label_12da2c;
        case 0x12da30u: goto label_12da30;
        case 0x12da34u: goto label_12da34;
        case 0x12da38u: goto label_12da38;
        case 0x12da3cu: goto label_12da3c;
        case 0x12da40u: goto label_12da40;
        case 0x12da44u: goto label_12da44;
        case 0x12da48u: goto label_12da48;
        case 0x12da4cu: goto label_12da4c;
        case 0x12da50u: goto label_12da50;
        case 0x12da54u: goto label_12da54;
        case 0x12da58u: goto label_12da58;
        case 0x12da5cu: goto label_12da5c;
        case 0x12da60u: goto label_12da60;
        case 0x12da64u: goto label_12da64;
        case 0x12da68u: goto label_12da68;
        case 0x12da6cu: goto label_12da6c;
        case 0x12da70u: goto label_12da70;
        case 0x12da74u: goto label_12da74;
        case 0x12da78u: goto label_12da78;
        case 0x12da7cu: goto label_12da7c;
        case 0x12da80u: goto label_12da80;
        case 0x12da84u: goto label_12da84;
        case 0x12da88u: goto label_12da88;
        case 0x12da8cu: goto label_12da8c;
        case 0x12da90u: goto label_12da90;
        case 0x12da94u: goto label_12da94;
        case 0x12da98u: goto label_12da98;
        case 0x12da9cu: goto label_12da9c;
        case 0x12daa0u: goto label_12daa0;
        case 0x12daa4u: goto label_12daa4;
        case 0x12daa8u: goto label_12daa8;
        case 0x12daacu: goto label_12daac;
        case 0x12dab0u: goto label_12dab0;
        case 0x12dab4u: goto label_12dab4;
        case 0x12dab8u: goto label_12dab8;
        case 0x12dabcu: goto label_12dabc;
        case 0x12dac0u: goto label_12dac0;
        case 0x12dac4u: goto label_12dac4;
        case 0x12dac8u: goto label_12dac8;
        case 0x12daccu: goto label_12dacc;
        case 0x12dad0u: goto label_12dad0;
        case 0x12dad4u: goto label_12dad4;
        case 0x12dad8u: goto label_12dad8;
        case 0x12dadcu: goto label_12dadc;
        case 0x12dae0u: goto label_12dae0;
        case 0x12dae4u: goto label_12dae4;
        case 0x12dae8u: goto label_12dae8;
        case 0x12daecu: goto label_12daec;
        case 0x12daf0u: goto label_12daf0;
        case 0x12daf4u: goto label_12daf4;
        case 0x12daf8u: goto label_12daf8;
        case 0x12dafcu: goto label_12dafc;
        case 0x12db00u: goto label_12db00;
        case 0x12db04u: goto label_12db04;
        case 0x12db08u: goto label_12db08;
        case 0x12db0cu: goto label_12db0c;
        case 0x12db10u: goto label_12db10;
        case 0x12db14u: goto label_12db14;
        case 0x12db18u: goto label_12db18;
        case 0x12db1cu: goto label_12db1c;
        case 0x12db20u: goto label_12db20;
        case 0x12db24u: goto label_12db24;
        case 0x12db28u: goto label_12db28;
        case 0x12db2cu: goto label_12db2c;
        case 0x12db30u: goto label_12db30;
        case 0x12db34u: goto label_12db34;
        case 0x12db38u: goto label_12db38;
        case 0x12db3cu: goto label_12db3c;
        case 0x12db40u: goto label_12db40;
        case 0x12db44u: goto label_12db44;
        case 0x12db48u: goto label_12db48;
        case 0x12db4cu: goto label_12db4c;
        case 0x12db50u: goto label_12db50;
        case 0x12db54u: goto label_12db54;
        case 0x12db58u: goto label_12db58;
        case 0x12db5cu: goto label_12db5c;
        case 0x12db60u: goto label_12db60;
        case 0x12db64u: goto label_12db64;
        case 0x12db68u: goto label_12db68;
        case 0x12db6cu: goto label_12db6c;
        case 0x12db70u: goto label_12db70;
        case 0x12db74u: goto label_12db74;
        case 0x12db78u: goto label_12db78;
        case 0x12db7cu: goto label_12db7c;
        case 0x12db80u: goto label_12db80;
        case 0x12db84u: goto label_12db84;
        case 0x12db88u: goto label_12db88;
        case 0x12db8cu: goto label_12db8c;
        case 0x12db90u: goto label_12db90;
        case 0x12db94u: goto label_12db94;
        case 0x12db98u: goto label_12db98;
        case 0x12db9cu: goto label_12db9c;
        case 0x12dba0u: goto label_12dba0;
        case 0x12dba4u: goto label_12dba4;
        case 0x12dba8u: goto label_12dba8;
        case 0x12dbacu: goto label_12dbac;
        case 0x12dbb0u: goto label_12dbb0;
        case 0x12dbb4u: goto label_12dbb4;
        case 0x12dbb8u: goto label_12dbb8;
        case 0x12dbbcu: goto label_12dbbc;
        case 0x12dbc0u: goto label_12dbc0;
        case 0x12dbc4u: goto label_12dbc4;
        case 0x12dbc8u: goto label_12dbc8;
        case 0x12dbccu: goto label_12dbcc;
        case 0x12dbd0u: goto label_12dbd0;
        case 0x12dbd4u: goto label_12dbd4;
        case 0x12dbd8u: goto label_12dbd8;
        case 0x12dbdcu: goto label_12dbdc;
        case 0x12dbe0u: goto label_12dbe0;
        case 0x12dbe4u: goto label_12dbe4;
        case 0x12dbe8u: goto label_12dbe8;
        case 0x12dbecu: goto label_12dbec;
        case 0x12dbf0u: goto label_12dbf0;
        case 0x12dbf4u: goto label_12dbf4;
        case 0x12dbf8u: goto label_12dbf8;
        case 0x12dbfcu: goto label_12dbfc;
        case 0x12dc00u: goto label_12dc00;
        case 0x12dc04u: goto label_12dc04;
        case 0x12dc08u: goto label_12dc08;
        case 0x12dc0cu: goto label_12dc0c;
        case 0x12dc10u: goto label_12dc10;
        case 0x12dc14u: goto label_12dc14;
        case 0x12dc18u: goto label_12dc18;
        case 0x12dc1cu: goto label_12dc1c;
        case 0x12dc20u: goto label_12dc20;
        case 0x12dc24u: goto label_12dc24;
        case 0x12dc28u: goto label_12dc28;
        case 0x12dc2cu: goto label_12dc2c;
        case 0x12dc30u: goto label_12dc30;
        case 0x12dc34u: goto label_12dc34;
        case 0x12dc38u: goto label_12dc38;
        case 0x12dc3cu: goto label_12dc3c;
        case 0x12dc40u: goto label_12dc40;
        case 0x12dc44u: goto label_12dc44;
        case 0x12dc48u: goto label_12dc48;
        case 0x12dc4cu: goto label_12dc4c;
        case 0x12dc50u: goto label_12dc50;
        case 0x12dc54u: goto label_12dc54;
        case 0x12dc58u: goto label_12dc58;
        case 0x12dc5cu: goto label_12dc5c;
        case 0x12dc60u: goto label_12dc60;
        case 0x12dc64u: goto label_12dc64;
        case 0x12dc68u: goto label_12dc68;
        case 0x12dc6cu: goto label_12dc6c;
        case 0x12dc70u: goto label_12dc70;
        case 0x12dc74u: goto label_12dc74;
        case 0x12dc78u: goto label_12dc78;
        case 0x12dc7cu: goto label_12dc7c;
        case 0x12dc80u: goto label_12dc80;
        case 0x12dc84u: goto label_12dc84;
        case 0x12dc88u: goto label_12dc88;
        case 0x12dc8cu: goto label_12dc8c;
        case 0x12dc90u: goto label_12dc90;
        case 0x12dc94u: goto label_12dc94;
        case 0x12dc98u: goto label_12dc98;
        case 0x12dc9cu: goto label_12dc9c;
        case 0x12dca0u: goto label_12dca0;
        case 0x12dca4u: goto label_12dca4;
        case 0x12dca8u: goto label_12dca8;
        case 0x12dcacu: goto label_12dcac;
        case 0x12dcb0u: goto label_12dcb0;
        case 0x12dcb4u: goto label_12dcb4;
        case 0x12dcb8u: goto label_12dcb8;
        case 0x12dcbcu: goto label_12dcbc;
        case 0x12dcc0u: goto label_12dcc0;
        case 0x12dcc4u: goto label_12dcc4;
        case 0x12dcc8u: goto label_12dcc8;
        case 0x12dcccu: goto label_12dccc;
        case 0x12dcd0u: goto label_12dcd0;
        case 0x12dcd4u: goto label_12dcd4;
        case 0x12dcd8u: goto label_12dcd8;
        case 0x12dcdcu: goto label_12dcdc;
        case 0x12dce0u: goto label_12dce0;
        case 0x12dce4u: goto label_12dce4;
        case 0x12dce8u: goto label_12dce8;
        case 0x12dcecu: goto label_12dcec;
        case 0x12dcf0u: goto label_12dcf0;
        case 0x12dcf4u: goto label_12dcf4;
        case 0x12dcf8u: goto label_12dcf8;
        case 0x12dcfcu: goto label_12dcfc;
        case 0x12dd00u: goto label_12dd00;
        case 0x12dd04u: goto label_12dd04;
        case 0x12dd08u: goto label_12dd08;
        case 0x12dd0cu: goto label_12dd0c;
        case 0x12dd10u: goto label_12dd10;
        case 0x12dd14u: goto label_12dd14;
        case 0x12dd18u: goto label_12dd18;
        case 0x12dd1cu: goto label_12dd1c;
        case 0x12dd20u: goto label_12dd20;
        case 0x12dd24u: goto label_12dd24;
        case 0x12dd28u: goto label_12dd28;
        case 0x12dd2cu: goto label_12dd2c;
        case 0x12dd30u: goto label_12dd30;
        case 0x12dd34u: goto label_12dd34;
        case 0x12dd38u: goto label_12dd38;
        case 0x12dd3cu: goto label_12dd3c;
        case 0x12dd40u: goto label_12dd40;
        case 0x12dd44u: goto label_12dd44;
        case 0x12dd48u: goto label_12dd48;
        case 0x12dd4cu: goto label_12dd4c;
        case 0x12dd50u: goto label_12dd50;
        case 0x12dd54u: goto label_12dd54;
        case 0x12dd58u: goto label_12dd58;
        case 0x12dd5cu: goto label_12dd5c;
        case 0x12dd60u: goto label_12dd60;
        case 0x12dd64u: goto label_12dd64;
        case 0x12dd68u: goto label_12dd68;
        case 0x12dd6cu: goto label_12dd6c;
        case 0x12dd70u: goto label_12dd70;
        case 0x12dd74u: goto label_12dd74;
        case 0x12dd78u: goto label_12dd78;
        case 0x12dd7cu: goto label_12dd7c;
        case 0x12dd80u: goto label_12dd80;
        case 0x12dd84u: goto label_12dd84;
        case 0x12dd88u: goto label_12dd88;
        case 0x12dd8cu: goto label_12dd8c;
        case 0x12dd90u: goto label_12dd90;
        case 0x12dd94u: goto label_12dd94;
        case 0x12dd98u: goto label_12dd98;
        case 0x12dd9cu: goto label_12dd9c;
        case 0x12dda0u: goto label_12dda0;
        case 0x12dda4u: goto label_12dda4;
        case 0x12dda8u: goto label_12dda8;
        case 0x12ddacu: goto label_12ddac;
        case 0x12ddb0u: goto label_12ddb0;
        case 0x12ddb4u: goto label_12ddb4;
        case 0x12ddb8u: goto label_12ddb8;
        case 0x12ddbcu: goto label_12ddbc;
        case 0x12ddc0u: goto label_12ddc0;
        case 0x12ddc4u: goto label_12ddc4;
        case 0x12ddc8u: goto label_12ddc8;
        case 0x12ddccu: goto label_12ddcc;
        case 0x12ddd0u: goto label_12ddd0;
        case 0x12ddd4u: goto label_12ddd4;
        case 0x12ddd8u: goto label_12ddd8;
        case 0x12dddcu: goto label_12dddc;
        case 0x12dde0u: goto label_12dde0;
        case 0x12dde4u: goto label_12dde4;
        case 0x12dde8u: goto label_12dde8;
        case 0x12ddecu: goto label_12ddec;
        case 0x12ddf0u: goto label_12ddf0;
        case 0x12ddf4u: goto label_12ddf4;
        case 0x12ddf8u: goto label_12ddf8;
        case 0x12ddfcu: goto label_12ddfc;
        case 0x12de00u: goto label_12de00;
        case 0x12de04u: goto label_12de04;
        case 0x12de08u: goto label_12de08;
        case 0x12de0cu: goto label_12de0c;
        case 0x12de10u: goto label_12de10;
        case 0x12de14u: goto label_12de14;
        case 0x12de18u: goto label_12de18;
        case 0x12de1cu: goto label_12de1c;
        case 0x12de20u: goto label_12de20;
        case 0x12de24u: goto label_12de24;
        case 0x12de28u: goto label_12de28;
        case 0x12de2cu: goto label_12de2c;
        case 0x12de30u: goto label_12de30;
        case 0x12de34u: goto label_12de34;
        case 0x12de38u: goto label_12de38;
        case 0x12de3cu: goto label_12de3c;
        case 0x12de40u: goto label_12de40;
        case 0x12de44u: goto label_12de44;
        case 0x12de48u: goto label_12de48;
        case 0x12de4cu: goto label_12de4c;
        case 0x12de50u: goto label_12de50;
        case 0x12de54u: goto label_12de54;
        case 0x12de58u: goto label_12de58;
        case 0x12de5cu: goto label_12de5c;
        case 0x12de60u: goto label_12de60;
        case 0x12de64u: goto label_12de64;
        case 0x12de68u: goto label_12de68;
        case 0x12de6cu: goto label_12de6c;
        case 0x12de70u: goto label_12de70;
        case 0x12de74u: goto label_12de74;
        case 0x12de78u: goto label_12de78;
        case 0x12de7cu: goto label_12de7c;
        case 0x12de80u: goto label_12de80;
        case 0x12de84u: goto label_12de84;
        case 0x12de88u: goto label_12de88;
        case 0x12de8cu: goto label_12de8c;
        case 0x12de90u: goto label_12de90;
        case 0x12de94u: goto label_12de94;
        case 0x12de98u: goto label_12de98;
        case 0x12de9cu: goto label_12de9c;
        case 0x12dea0u: goto label_12dea0;
        case 0x12dea4u: goto label_12dea4;
        case 0x12dea8u: goto label_12dea8;
        case 0x12deacu: goto label_12deac;
        case 0x12deb0u: goto label_12deb0;
        case 0x12deb4u: goto label_12deb4;
        case 0x12deb8u: goto label_12deb8;
        case 0x12debcu: goto label_12debc;
        case 0x12dec0u: goto label_12dec0;
        case 0x12dec4u: goto label_12dec4;
        case 0x12dec8u: goto label_12dec8;
        case 0x12deccu: goto label_12decc;
        case 0x12ded0u: goto label_12ded0;
        case 0x12ded4u: goto label_12ded4;
        case 0x12ded8u: goto label_12ded8;
        case 0x12dedcu: goto label_12dedc;
        case 0x12dee0u: goto label_12dee0;
        case 0x12dee4u: goto label_12dee4;
        case 0x12dee8u: goto label_12dee8;
        case 0x12deecu: goto label_12deec;
        case 0x12def0u: goto label_12def0;
        case 0x12def4u: goto label_12def4;
        case 0x12def8u: goto label_12def8;
        case 0x12defcu: goto label_12defc;
        case 0x12df00u: goto label_12df00;
        case 0x12df04u: goto label_12df04;
        case 0x12df08u: goto label_12df08;
        case 0x12df0cu: goto label_12df0c;
        case 0x12df10u: goto label_12df10;
        case 0x12df14u: goto label_12df14;
        case 0x12df18u: goto label_12df18;
        case 0x12df1cu: goto label_12df1c;
        case 0x12df20u: goto label_12df20;
        case 0x12df24u: goto label_12df24;
        case 0x12df28u: goto label_12df28;
        case 0x12df2cu: goto label_12df2c;
        case 0x12df30u: goto label_12df30;
        case 0x12df34u: goto label_12df34;
        case 0x12df38u: goto label_12df38;
        case 0x12df3cu: goto label_12df3c;
        case 0x12df40u: goto label_12df40;
        case 0x12df44u: goto label_12df44;
        case 0x12df48u: goto label_12df48;
        case 0x12df4cu: goto label_12df4c;
        case 0x12df50u: goto label_12df50;
        case 0x12df54u: goto label_12df54;
        case 0x12df58u: goto label_12df58;
        case 0x12df5cu: goto label_12df5c;
        case 0x12df60u: goto label_12df60;
        case 0x12df64u: goto label_12df64;
        case 0x12df68u: goto label_12df68;
        case 0x12df6cu: goto label_12df6c;
        case 0x12df70u: goto label_12df70;
        case 0x12df74u: goto label_12df74;
        case 0x12df78u: goto label_12df78;
        case 0x12df7cu: goto label_12df7c;
        case 0x12df80u: goto label_12df80;
        case 0x12df84u: goto label_12df84;
        case 0x12df88u: goto label_12df88;
        case 0x12df8cu: goto label_12df8c;
        case 0x12df90u: goto label_12df90;
        case 0x12df94u: goto label_12df94;
        case 0x12df98u: goto label_12df98;
        case 0x12df9cu: goto label_12df9c;
        case 0x12dfa0u: goto label_12dfa0;
        case 0x12dfa4u: goto label_12dfa4;
        case 0x12dfa8u: goto label_12dfa8;
        case 0x12dfacu: goto label_12dfac;
        case 0x12dfb0u: goto label_12dfb0;
        case 0x12dfb4u: goto label_12dfb4;
        case 0x12dfb8u: goto label_12dfb8;
        case 0x12dfbcu: goto label_12dfbc;
        case 0x12dfc0u: goto label_12dfc0;
        case 0x12dfc4u: goto label_12dfc4;
        case 0x12dfc8u: goto label_12dfc8;
        case 0x12dfccu: goto label_12dfcc;
        case 0x12dfd0u: goto label_12dfd0;
        case 0x12dfd4u: goto label_12dfd4;
        case 0x12dfd8u: goto label_12dfd8;
        case 0x12dfdcu: goto label_12dfdc;
        case 0x12dfe0u: goto label_12dfe0;
        case 0x12dfe4u: goto label_12dfe4;
        case 0x12dfe8u: goto label_12dfe8;
        case 0x12dfecu: goto label_12dfec;
        case 0x12dff0u: goto label_12dff0;
        case 0x12dff4u: goto label_12dff4;
        case 0x12dff8u: goto label_12dff8;
        case 0x12dffcu: goto label_12dffc;
        case 0x12e000u: goto label_12e000;
        case 0x12e004u: goto label_12e004;
        case 0x12e008u: goto label_12e008;
        case 0x12e00cu: goto label_12e00c;
        case 0x12e010u: goto label_12e010;
        case 0x12e014u: goto label_12e014;
        case 0x12e018u: goto label_12e018;
        case 0x12e01cu: goto label_12e01c;
        case 0x12e020u: goto label_12e020;
        case 0x12e024u: goto label_12e024;
        case 0x12e028u: goto label_12e028;
        case 0x12e02cu: goto label_12e02c;
        case 0x12e030u: goto label_12e030;
        case 0x12e034u: goto label_12e034;
        case 0x12e038u: goto label_12e038;
        case 0x12e03cu: goto label_12e03c;
        case 0x12e040u: goto label_12e040;
        case 0x12e044u: goto label_12e044;
        case 0x12e048u: goto label_12e048;
        case 0x12e04cu: goto label_12e04c;
        case 0x12e050u: goto label_12e050;
        case 0x12e054u: goto label_12e054;
        case 0x12e058u: goto label_12e058;
        case 0x12e05cu: goto label_12e05c;
        case 0x12e060u: goto label_12e060;
        case 0x12e064u: goto label_12e064;
        case 0x12e068u: goto label_12e068;
        case 0x12e06cu: goto label_12e06c;
        case 0x12e070u: goto label_12e070;
        case 0x12e074u: goto label_12e074;
        case 0x12e078u: goto label_12e078;
        case 0x12e07cu: goto label_12e07c;
        case 0x12e080u: goto label_12e080;
        case 0x12e084u: goto label_12e084;
        case 0x12e088u: goto label_12e088;
        case 0x12e08cu: goto label_12e08c;
        case 0x12e090u: goto label_12e090;
        case 0x12e094u: goto label_12e094;
        case 0x12e098u: goto label_12e098;
        case 0x12e09cu: goto label_12e09c;
        case 0x12e0a0u: goto label_12e0a0;
        case 0x12e0a4u: goto label_12e0a4;
        case 0x12e0a8u: goto label_12e0a8;
        case 0x12e0acu: goto label_12e0ac;
        case 0x12e0b0u: goto label_12e0b0;
        case 0x12e0b4u: goto label_12e0b4;
        case 0x12e0b8u: goto label_12e0b8;
        case 0x12e0bcu: goto label_12e0bc;
        case 0x12e0c0u: goto label_12e0c0;
        case 0x12e0c4u: goto label_12e0c4;
        case 0x12e0c8u: goto label_12e0c8;
        case 0x12e0ccu: goto label_12e0cc;
        case 0x12e0d0u: goto label_12e0d0;
        case 0x12e0d4u: goto label_12e0d4;
        case 0x12e0d8u: goto label_12e0d8;
        case 0x12e0dcu: goto label_12e0dc;
        case 0x12e0e0u: goto label_12e0e0;
        case 0x12e0e4u: goto label_12e0e4;
        case 0x12e0e8u: goto label_12e0e8;
        case 0x12e0ecu: goto label_12e0ec;
        case 0x12e0f0u: goto label_12e0f0;
        case 0x12e0f4u: goto label_12e0f4;
        case 0x12e0f8u: goto label_12e0f8;
        case 0x12e0fcu: goto label_12e0fc;
        case 0x12e100u: goto label_12e100;
        case 0x12e104u: goto label_12e104;
        case 0x12e108u: goto label_12e108;
        case 0x12e10cu: goto label_12e10c;
        case 0x12e110u: goto label_12e110;
        case 0x12e114u: goto label_12e114;
        case 0x12e118u: goto label_12e118;
        case 0x12e11cu: goto label_12e11c;
        case 0x12e120u: goto label_12e120;
        case 0x12e124u: goto label_12e124;
        case 0x12e128u: goto label_12e128;
        case 0x12e12cu: goto label_12e12c;
        case 0x12e130u: goto label_12e130;
        case 0x12e134u: goto label_12e134;
        case 0x12e138u: goto label_12e138;
        case 0x12e13cu: goto label_12e13c;
        case 0x12e140u: goto label_12e140;
        case 0x12e144u: goto label_12e144;
        case 0x12e148u: goto label_12e148;
        case 0x12e14cu: goto label_12e14c;
        case 0x12e150u: goto label_12e150;
        case 0x12e154u: goto label_12e154;
        case 0x12e158u: goto label_12e158;
        case 0x12e15cu: goto label_12e15c;
        case 0x12e160u: goto label_12e160;
        case 0x12e164u: goto label_12e164;
        case 0x12e168u: goto label_12e168;
        case 0x12e16cu: goto label_12e16c;
        case 0x12e170u: goto label_12e170;
        case 0x12e174u: goto label_12e174;
        case 0x12e178u: goto label_12e178;
        case 0x12e17cu: goto label_12e17c;
        case 0x12e180u: goto label_12e180;
        case 0x12e184u: goto label_12e184;
        case 0x12e188u: goto label_12e188;
        case 0x12e18cu: goto label_12e18c;
        case 0x12e190u: goto label_12e190;
        case 0x12e194u: goto label_12e194;
        case 0x12e198u: goto label_12e198;
        case 0x12e19cu: goto label_12e19c;
        case 0x12e1a0u: goto label_12e1a0;
        case 0x12e1a4u: goto label_12e1a4;
        case 0x12e1a8u: goto label_12e1a8;
        case 0x12e1acu: goto label_12e1ac;
        case 0x12e1b0u: goto label_12e1b0;
        case 0x12e1b4u: goto label_12e1b4;
        case 0x12e1b8u: goto label_12e1b8;
        default: break;
    }

    ctx->pc = 0x12d8e0u;

label_12d8e0:
    // 0x12d8e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x12d8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_12d8e4:
    // 0x12d8e4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x12d8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_12d8e8:
    // 0x12d8e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12d8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_12d8ec:
    // 0x12d8ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12d8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_12d8f0:
    // 0x12d8f0: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x12d8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
label_12d8f4:
    // 0x12d8f4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12d8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12d8f8:
    // 0x12d8f8: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x12d8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_12d8fc:
    // 0x12d8fc: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x12d8fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_12d900:
    // 0x12d900: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12d900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12d904:
    // 0x12d904: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x12d904u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_12d908:
    // 0x12d908: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x12d908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_12d90c:
    // 0x12d90c: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x12d90cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_12d910:
    // 0x12d910: 0x10200224  beqz        $at, . + 4 + (0x224 << 2)
label_12d914:
    if (ctx->pc == 0x12D914u) {
        ctx->pc = 0x12D918u;
        goto label_12d918;
    }
    ctx->pc = 0x12D910u;
    {
        const bool branch_taken_0x12d910 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d910) {
            ctx->pc = 0x12E1A4u;
            goto label_12e1a4;
        }
    }
    ctx->pc = 0x12D918u;
label_12d918:
    // 0x12d918: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x12d918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_12d91c:
    // 0x12d91c: 0x2464e500  addiu       $a0, $v1, -0x1B00
    ctx->pc = 0x12d91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960384));
label_12d920:
    // 0x12d920: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x12d920u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_12d924:
    // 0x12d924: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x12d924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_12d928:
    // 0x12d928: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x12d928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12d92c:
    // 0x12d92c: 0xa00008  jr          $a1
label_12d930:
    if (ctx->pc == 0x12D930u) {
        ctx->pc = 0x12D934u;
        goto label_12d934;
    }
    ctx->pc = 0x12D92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D92Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12D934u;
label_12d934:
    // 0x12d934: 0xc067694  jal         func_19DA50
label_12d938:
    if (ctx->pc == 0x12D938u) {
        ctx->pc = 0x12D93Cu;
        goto label_12d93c;
    }
    ctx->pc = 0x12D934u;
    SET_GPR_U32(ctx, 31, 0x12D93Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x12D934u, 0x12D93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D93Cu;
label_12d93c:
    // 0x12d93c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x12d93cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12d940:
    // 0x12d940: 0x30e80003  andi        $t0, $a3, 0x3
    ctx->pc = 0x12d940u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
label_12d944:
    // 0x12d944: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12d944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12d948:
    // 0x12d948: 0x11020021  beq         $t0, $v0, . + 4 + (0x21 << 2)
label_12d94c:
    if (ctx->pc == 0x12D94Cu) {
        ctx->pc = 0x12D950u;
        goto label_12d950;
    }
    ctx->pc = 0x12D948u;
    {
        const bool branch_taken_0x12d948 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x12d948) {
            ctx->pc = 0x12D9D0u;
            goto label_12d9d0;
        }
    }
    ctx->pc = 0x12D950u;
label_12d950:
    // 0x12d950: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12d950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12d954:
    // 0x12d954: 0x11040012  beq         $t0, $a0, . + 4 + (0x12 << 2)
label_12d958:
    if (ctx->pc == 0x12D958u) {
        ctx->pc = 0x12D95Cu;
        goto label_12d95c;
    }
    ctx->pc = 0x12D954u;
    {
        const bool branch_taken_0x12d954 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        if (branch_taken_0x12d954) {
            ctx->pc = 0x12D9A0u;
            goto label_12d9a0;
        }
    }
    ctx->pc = 0x12D95Cu;
label_12d95c:
    // 0x12d95c: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
label_12d960:
    if (ctx->pc == 0x12D960u) {
        ctx->pc = 0x12D964u;
        goto label_12d964;
    }
    ctx->pc = 0x12D95Cu;
    {
        const bool branch_taken_0x12d95c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d95c) {
            ctx->pc = 0x12D96Cu;
            goto label_12d96c;
        }
    }
    ctx->pc = 0x12D964u;
label_12d964:
    // 0x12d964: 0x10000001  b           . + 4 + (0x1 << 2)
label_12d968:
    if (ctx->pc == 0x12D968u) {
        ctx->pc = 0x12D96Cu;
        goto label_12d96c;
    }
    ctx->pc = 0x12D964u;
    {
        const bool branch_taken_0x12d964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d964) {
            ctx->pc = 0x12D96Cu;
            goto label_12d96c;
        }
    }
    ctx->pc = 0x12D96Cu;
label_12d96c:
    // 0x12d96c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12d970:
    // 0x12d970: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x12d970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_12d974:
    // 0x12d974: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x12d974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
label_12d978:
    // 0x12d978: 0x34824000  ori         $v0, $a0, 0x4000
    ctx->pc = 0x12d978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
label_12d97c:
    // 0x12d97c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12d97cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12d980:
    // 0x12d980: 0x24020504  addiu       $v0, $zero, 0x504
    ctx->pc = 0x12d980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
label_12d984:
    // 0x12d984: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12d984u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12d988:
    // 0x12d988: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x12d988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_12d98c:
    // 0x12d98c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12d98cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12d990:
    // 0x12d990: 0xc067b18  jal         func_19EC60
label_12d994:
    if (ctx->pc == 0x12D994u) {
        ctx->pc = 0x12D998u;
        goto label_12d998;
    }
    ctx->pc = 0x12D990u;
    SET_GPR_U32(ctx, 31, 0x12D998u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12D990u, 0x12D998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D998u;
label_12d998:
    // 0x12d998: 0x10000018  b           . + 4 + (0x18 << 2)
label_12d99c:
    if (ctx->pc == 0x12D99Cu) {
        ctx->pc = 0x12D9A0u;
        goto label_12d9a0;
    }
    ctx->pc = 0x12D998u;
    {
        const bool branch_taken_0x12d998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d998) {
            ctx->pc = 0x12D9FCu;
            goto label_12d9fc;
        }
    }
    ctx->pc = 0x12D9A0u;
label_12d9a0:
    // 0x12d9a0: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x12d9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_12d9a4:
    // 0x12d9a4: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x12d9a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_12d9a8:
    // 0x12d9a8: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x12d9a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12d9ac:
    // 0x12d9ac: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12d9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12d9b0:
    // 0x12d9b0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12d9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_12d9b4:
    // 0x12d9b4: 0x24040505  addiu       $a0, $zero, 0x505
    ctx->pc = 0x12d9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1285));
label_12d9b8:
    // 0x12d9b8: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x12d9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_12d9bc:
    // 0x12d9bc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12d9bcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12d9c0:
    // 0x12d9c0: 0xc067b18  jal         func_19EC60
label_12d9c4:
    if (ctx->pc == 0x12D9C4u) {
        ctx->pc = 0x12D9C8u;
        goto label_12d9c8;
    }
    ctx->pc = 0x12D9C0u;
    SET_GPR_U32(ctx, 31, 0x12D9C8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12D9C0u, 0x12D9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D9C8u;
label_12d9c8:
    // 0x12d9c8: 0x1000000c  b           . + 4 + (0xC << 2)
label_12d9cc:
    if (ctx->pc == 0x12D9CCu) {
        ctx->pc = 0x12D9D0u;
        goto label_12d9d0;
    }
    ctx->pc = 0x12D9C8u;
    {
        const bool branch_taken_0x12d9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d9c8) {
            ctx->pc = 0x12D9FCu;
            goto label_12d9fc;
        }
    }
    ctx->pc = 0x12D9D0u;
label_12d9d0:
    // 0x12d9d0: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x12d9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_12d9d4:
    // 0x12d9d4: 0x34444000  ori         $a0, $v0, 0x4000
    ctx->pc = 0x12d9d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_12d9d8:
    // 0x12d9d8: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x12d9d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12d9dc:
    // 0x12d9dc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12d9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12d9e0:
    // 0x12d9e0: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x12d9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_12d9e4:
    // 0x12d9e4: 0x24040506  addiu       $a0, $zero, 0x506
    ctx->pc = 0x12d9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1286));
label_12d9e8:
    // 0x12d9e8: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x12d9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_12d9ec:
    // 0x12d9ec: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12d9ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12d9f0:
    // 0x12d9f0: 0xc067b18  jal         func_19EC60
label_12d9f4:
    if (ctx->pc == 0x12D9F4u) {
        ctx->pc = 0x12D9F8u;
        goto label_12d9f8;
    }
    ctx->pc = 0x12D9F0u;
    SET_GPR_U32(ctx, 31, 0x12D9F8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12D9F0u, 0x12D9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D9F8u;
label_12d9f8:
    // 0x12d9f8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x12d9f8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12d9fc:
    // 0x12d9fc: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x12d9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_12da00:
    // 0x12da00: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x12da00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_12da04:
    // 0x12da04: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x12da04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_12da08:
    // 0x12da08: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x12da08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_12da0c:
    // 0x12da0c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12da0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12da10:
    // 0x12da10: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x12da10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_12da14:
    // 0x12da14: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x12da14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_12da18:
    // 0x12da18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12da18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_12da1c:
    // 0x12da1c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_12da20:
    if (ctx->pc == 0x12DA20u) {
        ctx->pc = 0x12DA24u;
        goto label_12da24;
    }
    ctx->pc = 0x12DA1Cu;
    {
        const bool branch_taken_0x12da1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12da1c) {
            ctx->pc = 0x12DA90u;
            goto label_12da90;
        }
    }
    ctx->pc = 0x12DA24u;
label_12da24:
    // 0x12da24: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12da24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12da28:
    // 0x12da28: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x12da28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_12da2c:
    // 0x12da2c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_12da30:
    if (ctx->pc == 0x12DA30u) {
        ctx->pc = 0x12DA34u;
        goto label_12da34;
    }
    ctx->pc = 0x12DA2Cu;
    {
        const bool branch_taken_0x12da2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12da2c) {
            ctx->pc = 0x12DA68u;
            goto label_12da68;
        }
    }
    ctx->pc = 0x12DA34u;
label_12da34:
    // 0x12da34: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x12da34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12da38:
    // 0x12da38: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x12da38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12da3c:
    // 0x12da3c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x12da3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_12da40:
    // 0x12da40: 0x8ca20368  lw          $v0, 0x368($a1)
    ctx->pc = 0x12da40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
label_12da44:
    // 0x12da44: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x12da44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12da48:
    // 0x12da48: 0x24073c14  addiu       $a3, $zero, 0x3C14
    ctx->pc = 0x12da48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15380));
label_12da4c:
    // 0x12da4c: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x12da4cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_12da50:
    // 0x12da50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12da50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12da54:
    // 0x12da54: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12da54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_12da58:
    // 0x12da58: 0xc0965d0  jal         func_259740
label_12da5c:
    if (ctx->pc == 0x12DA5Cu) {
        ctx->pc = 0x12DA60u;
        goto label_12da60;
    }
    ctx->pc = 0x12DA58u;
    SET_GPR_U32(ctx, 31, 0x12DA60u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12DA58u, 0x12DA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DA60u;
label_12da60:
    // 0x12da60: 0x10000044  b           . + 4 + (0x44 << 2)
label_12da64:
    if (ctx->pc == 0x12DA64u) {
        ctx->pc = 0x12DA68u;
        goto label_12da68;
    }
    ctx->pc = 0x12DA60u;
    {
        const bool branch_taken_0x12da60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12da60) {
            ctx->pc = 0x12DB74u;
            goto label_12db74;
        }
    }
    ctx->pc = 0x12DA68u;
label_12da68:
    // 0x12da68: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12da68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12da6c:
    // 0x12da6c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12da6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12da70:
    // 0x12da70: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12da70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_12da74:
    // 0x12da74: 0x24063c15  addiu       $a2, $zero, 0x3C15
    ctx->pc = 0x12da74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15381));
label_12da78:
    // 0x12da78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12da78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12da7c:
    // 0x12da7c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12da7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_12da80:
    // 0x12da80: 0xc0965d0  jal         func_259740
label_12da84:
    if (ctx->pc == 0x12DA84u) {
        ctx->pc = 0x12DA88u;
        goto label_12da88;
    }
    ctx->pc = 0x12DA80u;
    SET_GPR_U32(ctx, 31, 0x12DA88u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12DA80u, 0x12DA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DA88u;
label_12da88:
    // 0x12da88: 0x1000003a  b           . + 4 + (0x3A << 2)
label_12da8c:
    if (ctx->pc == 0x12DA8Cu) {
        ctx->pc = 0x12DA90u;
        goto label_12da90;
    }
    ctx->pc = 0x12DA88u;
    {
        const bool branch_taken_0x12da88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12da88) {
            ctx->pc = 0x12DB74u;
            goto label_12db74;
        }
    }
    ctx->pc = 0x12DA90u;
label_12da90:
    // 0x12da90: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12da90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12da94:
    // 0x12da94: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x12da94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_12da98:
    // 0x12da98: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_12da9c:
    if (ctx->pc == 0x12DA9Cu) {
        ctx->pc = 0x12DAA0u;
        goto label_12daa0;
    }
    ctx->pc = 0x12DA98u;
    {
        const bool branch_taken_0x12da98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12da98) {
            ctx->pc = 0x12DB08u;
            goto label_12db08;
        }
    }
    ctx->pc = 0x12DAA0u;
label_12daa0:
    // 0x12daa0: 0xc067694  jal         func_19DA50
label_12daa4:
    if (ctx->pc == 0x12DAA4u) {
        ctx->pc = 0x12DAA8u;
        goto label_12daa8;
    }
    ctx->pc = 0x12DAA0u;
    SET_GPR_U32(ctx, 31, 0x12DAA8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x12DAA0u, 0x12DAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DAA8u;
label_12daa8:
    // 0x12daa8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x12daa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12daac:
    // 0x12daac: 0x30a70003  andi        $a3, $a1, 0x3
    ctx->pc = 0x12daacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
label_12dab0:
    // 0x12dab0: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
label_12dab4:
    if (ctx->pc == 0x12DAB4u) {
        ctx->pc = 0x12DAB8u;
        goto label_12dab8;
    }
    ctx->pc = 0x12DAB0u;
    {
        const bool branch_taken_0x12dab0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dab0) {
            ctx->pc = 0x12DAE0u;
            goto label_12dae0;
        }
    }
    ctx->pc = 0x12DAB8u;
label_12dab8:
    // 0x12dab8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12dabc:
    // 0x12dabc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12dabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12dac0:
    // 0x12dac0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12dac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_12dac4:
    // 0x12dac4: 0x24063c15  addiu       $a2, $zero, 0x3C15
    ctx->pc = 0x12dac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15381));
label_12dac8:
    // 0x12dac8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12dac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12dacc:
    // 0x12dacc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12daccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_12dad0:
    // 0x12dad0: 0xc0965d0  jal         func_259740
label_12dad4:
    if (ctx->pc == 0x12DAD4u) {
        ctx->pc = 0x12DAD8u;
        goto label_12dad8;
    }
    ctx->pc = 0x12DAD0u;
    SET_GPR_U32(ctx, 31, 0x12DAD8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12DAD0u, 0x12DAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DAD8u;
label_12dad8:
    // 0x12dad8: 0x10000026  b           . + 4 + (0x26 << 2)
label_12dadc:
    if (ctx->pc == 0x12DADCu) {
        ctx->pc = 0x12DAE0u;
        goto label_12dae0;
    }
    ctx->pc = 0x12DAD8u;
    {
        const bool branch_taken_0x12dad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dad8) {
            ctx->pc = 0x12DB74u;
            goto label_12db74;
        }
    }
    ctx->pc = 0x12DAE0u;
label_12dae0:
    // 0x12dae0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12dae4:
    // 0x12dae4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12dae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12dae8:
    // 0x12dae8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12dae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_12daec:
    // 0x12daec: 0x24063c14  addiu       $a2, $zero, 0x3C14
    ctx->pc = 0x12daecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15380));
label_12daf0:
    // 0x12daf0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12daf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12daf4:
    // 0x12daf4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12daf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_12daf8:
    // 0x12daf8: 0xc0965d0  jal         func_259740
label_12dafc:
    if (ctx->pc == 0x12DAFCu) {
        ctx->pc = 0x12DB00u;
        goto label_12db00;
    }
    ctx->pc = 0x12DAF8u;
    SET_GPR_U32(ctx, 31, 0x12DB00u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12DAF8u, 0x12DB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DB00u;
label_12db00:
    // 0x12db00: 0x1000001c  b           . + 4 + (0x1C << 2)
label_12db04:
    if (ctx->pc == 0x12DB04u) {
        ctx->pc = 0x12DB08u;
        goto label_12db08;
    }
    ctx->pc = 0x12DB00u;
    {
        const bool branch_taken_0x12db00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12db00) {
            ctx->pc = 0x12DB74u;
            goto label_12db74;
        }
    }
    ctx->pc = 0x12DB08u;
label_12db08:
    // 0x12db08: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x12db08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12db0c:
    // 0x12db0c: 0x94e2000e  lhu         $v0, 0xE($a3)
    ctx->pc = 0x12db0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 14)));
label_12db10:
    // 0x12db10: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x12db10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_12db14:
    // 0x12db14: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x12db14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
label_12db18:
    // 0x12db18: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x12db18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_12db1c:
    // 0x12db1c: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
label_12db20:
    if (ctx->pc == 0x12DB20u) {
        ctx->pc = 0x12DB24u;
        goto label_12db24;
    }
    ctx->pc = 0x12DB1Cu;
    {
        const bool branch_taken_0x12db1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x12db1c) {
            ctx->pc = 0x12DB4Cu;
            goto label_12db4c;
        }
    }
    ctx->pc = 0x12DB24u;
label_12db24:
    // 0x12db24: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12db24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12db28:
    // 0x12db28: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12db28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12db2c:
    // 0x12db2c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12db2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_12db30:
    // 0x12db30: 0x24063c15  addiu       $a2, $zero, 0x3C15
    ctx->pc = 0x12db30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15381));
label_12db34:
    // 0x12db34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12db34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12db38:
    // 0x12db38: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12db38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_12db3c:
    // 0x12db3c: 0xc0965d0  jal         func_259740
label_12db40:
    if (ctx->pc == 0x12DB40u) {
        ctx->pc = 0x12DB44u;
        goto label_12db44;
    }
    ctx->pc = 0x12DB3Cu;
    SET_GPR_U32(ctx, 31, 0x12DB44u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12DB3Cu, 0x12DB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DB44u;
label_12db44:
    // 0x12db44: 0x1000000b  b           . + 4 + (0xB << 2)
label_12db48:
    if (ctx->pc == 0x12DB48u) {
        ctx->pc = 0x12DB4Cu;
        goto label_12db4c;
    }
    ctx->pc = 0x12DB44u;
    {
        const bool branch_taken_0x12db44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12db44) {
            ctx->pc = 0x12DB74u;
            goto label_12db74;
        }
    }
    ctx->pc = 0x12DB4Cu;
label_12db4c:
    // 0x12db4c: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x12db4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12db50:
    // 0x12db50: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12db50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12db54:
    // 0x12db54: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x12db54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_12db58:
    // 0x12db58: 0x8ca50368  lw          $a1, 0x368($a1)
    ctx->pc = 0x12db58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
label_12db5c:
    // 0x12db5c: 0x24073c12  addiu       $a3, $zero, 0x3C12
    ctx->pc = 0x12db5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15378));
label_12db60:
    // 0x12db60: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x12db60u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_12db64:
    // 0x12db64: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12db64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12db68:
    // 0x12db68: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12db68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_12db6c:
    // 0x12db6c: 0xc0965d0  jal         func_259740
label_12db70:
    if (ctx->pc == 0x12DB70u) {
        ctx->pc = 0x12DB74u;
        goto label_12db74;
    }
    ctx->pc = 0x12DB6Cu;
    SET_GPR_U32(ctx, 31, 0x12DB74u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12DB6Cu, 0x12DB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DB74u;
label_12db74:
    // 0x12db74: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x12db74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12db78:
    // 0x12db78: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x12db78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_12db7c:
    // 0x12db7c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x12db7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_12db80:
    // 0x12db80: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x12db80u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
label_12db84:
    // 0x12db84: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x12db84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12db88:
    // 0x12db88: 0x24a40120  addiu       $a0, $a1, 0x120
    ctx->pc = 0x12db88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_12db8c:
    // 0x12db8c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x12db8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_12db90:
    // 0x12db90: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x12db90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
label_12db94:
    // 0x12db94: 0xc05ccfc  jal         func_1733F0
label_12db98:
    if (ctx->pc == 0x12DB98u) {
        ctx->pc = 0x12DB9Cu;
        goto label_12db9c;
    }
    ctx->pc = 0x12DB94u;
    SET_GPR_U32(ctx, 31, 0x12DB9Cu);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x12DB94u, 0x12DB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DB9Cu;
label_12db9c:
    // 0x12db9c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12db9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12dba0:
    // 0x12dba0: 0xe4801290  swc1        $f0, 0x1290($a0)
    ctx->pc = 0x12dba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4752), bits); }
label_12dba4:
    // 0x12dba4: 0x3c033d49  lui         $v1, 0x3D49
    ctx->pc = 0x12dba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15689 << 16));
label_12dba8:
    // 0x12dba8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x12dba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_12dbac:
    // 0x12dbac: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x12dbacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_12dbb0:
    // 0x12dbb0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12dbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12dbb4:
    // 0x12dbb4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12dbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12dbb8:
    // 0x12dbb8: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x12dbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12dbbc:
    // 0x12dbbc: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x12dbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_12dbc0:
    // 0x12dbc0: 0xc058f50  jal         func_163D40
label_12dbc4:
    if (ctx->pc == 0x12DBC4u) {
        ctx->pc = 0x12DBC8u;
        goto label_12dbc8;
    }
    ctx->pc = 0x12DBC0u;
    SET_GPR_U32(ctx, 31, 0x12DBC8u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x12DBC0u, 0x12DBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DBC8u;
label_12dbc8:
    // 0x12dbc8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12dbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12dbcc:
    // 0x12dbcc: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x12dbccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_12dbd0:
    // 0x12dbd0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12dbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12dbd4:
    // 0x12dbd4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12dbd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12dbd8:
    // 0x12dbd8: 0xc096b40  jal         func_25AD00
label_12dbdc:
    if (ctx->pc == 0x12DBDCu) {
        ctx->pc = 0x12DBE0u;
        goto label_12dbe0;
    }
    ctx->pc = 0x12DBD8u;
    SET_GPR_U32(ctx, 31, 0x12DBE0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12DBD8u, 0x12DBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DBE0u;
label_12dbe0:
    // 0x12dbe0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12dbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12dbe4:
    // 0x12dbe4: 0xc05cd10  jal         func_173440
label_12dbe8:
    if (ctx->pc == 0x12DBE8u) {
        ctx->pc = 0x12DBECu;
        goto label_12dbec;
    }
    ctx->pc = 0x12DBE4u;
    SET_GPR_U32(ctx, 31, 0x12DBECu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12DBE4u, 0x12DBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DBECu;
label_12dbec:
    // 0x12dbec: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12dbecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12dbf0:
    // 0x12dbf0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12dbf0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12dbf4:
    // 0x12dbf4: 0xc05cec4  jal         func_173B10
label_12dbf8:
    if (ctx->pc == 0x12DBF8u) {
        ctx->pc = 0x12DBFCu;
        goto label_12dbfc;
    }
    ctx->pc = 0x12DBF4u;
    SET_GPR_U32(ctx, 31, 0x12DBFCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12DBF4u, 0x12DBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DBFCu;
label_12dbfc:
    // 0x12dbfc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12dbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12dc00:
    // 0x12dc00: 0xc0974dc  jal         func_25D370
label_12dc04:
    if (ctx->pc == 0x12DC04u) {
        ctx->pc = 0x12DC08u;
        goto label_12dc08;
    }
    ctx->pc = 0x12DC00u;
    SET_GPR_U32(ctx, 31, 0x12DC08u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12DC00u, 0x12DC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DC08u;
label_12dc08:
    // 0x12dc08: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12dc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12dc0c:
    // 0x12dc0c: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x12dc0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
label_12dc10:
    // 0x12dc10: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x12dc10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_12dc14:
    // 0x12dc14: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x12dc14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_12dc18:
    // 0x12dc18: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
label_12dc1c:
    if (ctx->pc == 0x12DC1Cu) {
        ctx->pc = 0x12DC20u;
        goto label_12dc20;
    }
    ctx->pc = 0x12DC18u;
    {
        const bool branch_taken_0x12dc18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dc18) {
            ctx->pc = 0x12DD84u;
            goto label_12dd84;
        }
    }
    ctx->pc = 0x12DC20u;
label_12dc20:
    // 0x12dc20: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12dc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12dc24:
    // 0x12dc24: 0xc0675a4  jal         func_19D690
label_12dc28:
    if (ctx->pc == 0x12DC28u) {
        ctx->pc = 0x12DC2Cu;
        goto label_12dc2c;
    }
    ctx->pc = 0x12DC24u;
    SET_GPR_U32(ctx, 31, 0x12DC2Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12DC24u, 0x12DC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DC2Cu;
label_12dc2c:
    // 0x12dc2c: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x12dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
label_12dc30:
    // 0x12dc30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12dc30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12dc34:
    // 0x12dc34: 0x0  nop
    ctx->pc = 0x12dc34u;
    // NOP
label_12dc38:
    // 0x12dc38: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x12dc38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_12dc3c:
    // 0x12dc3c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12dc40:
    // 0x12dc40: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_12dc44:
    // 0x12dc44: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12dc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12dc48:
    // 0x12dc48: 0x24450540  addiu       $a1, $v0, 0x540
    ctx->pc = 0x12dc48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_12dc4c:
    // 0x12dc4c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x12dc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12dc50:
    // 0x12dc50: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x12dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_12dc54:
    // 0x12dc54: 0x24478d80  addiu       $a3, $v0, -0x7280
    ctx->pc = 0x12dc54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937984));
label_12dc58:
    // 0x12dc58: 0xc06d02c  jal         func_1B40B0
label_12dc5c:
    if (ctx->pc == 0x12DC5Cu) {
        ctx->pc = 0x12DC60u;
        goto label_12dc60;
    }
    ctx->pc = 0x12DC58u;
    SET_GPR_U32(ctx, 31, 0x12DC60u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x12DC58u, 0x12DC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DC60u;
label_12dc60:
    // 0x12dc60: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_12dc64:
    if (ctx->pc == 0x12DC64u) {
        ctx->pc = 0x12DC68u;
        goto label_12dc68;
    }
    ctx->pc = 0x12DC60u;
    {
        const bool branch_taken_0x12dc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dc60) {
            ctx->pc = 0x12DCE0u;
            goto label_12dce0;
        }
    }
    ctx->pc = 0x12DC68u;
label_12dc68:
    // 0x12dc68: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12dc68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_12dc6c:
    // 0x12dc6c: 0xc0675a4  jal         func_19D690
label_12dc70:
    if (ctx->pc == 0x12DC70u) {
        ctx->pc = 0x12DC74u;
        goto label_12dc74;
    }
    ctx->pc = 0x12DC6Cu;
    SET_GPR_U32(ctx, 31, 0x12DC74u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12DC6Cu, 0x12DC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DC74u;
label_12dc74:
    // 0x12dc74: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12dc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12dc78:
    // 0x12dc78: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x12dc78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_12dc7c:
    // 0x12dc7c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x12dc7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_12dc80:
    // 0x12dc80: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x12dc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_12dc84:
    // 0x12dc84: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x12dc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_12dc88:
    // 0x12dc88: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12dc88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_12dc8c:
    // 0x12dc8c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x12dc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_12dc90:
    // 0x12dc90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12dc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_12dc94:
    // 0x12dc94: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x12dc94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
label_12dc98:
    // 0x12dc98: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12dc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12dc9c:
    // 0x12dc9c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12dc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_12dca0:
    // 0x12dca0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x12dca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_12dca4:
    // 0x12dca4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12dca4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12dca8:
    // 0x12dca8: 0x24470540  addiu       $a3, $v0, 0x540
    ctx->pc = 0x12dca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_12dcac:
    // 0x12dcac: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x12dcacu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12dcb0:
    // 0x12dcb0: 0xc06371c  jal         func_18DC70
label_12dcb4:
    if (ctx->pc == 0x12DCB4u) {
        ctx->pc = 0x12DCB8u;
        goto label_12dcb8;
    }
    ctx->pc = 0x12DCB0u;
    SET_GPR_U32(ctx, 31, 0x12DCB8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x12DCB0u, 0x12DCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DCB8u;
label_12dcb8:
    // 0x12dcb8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x12dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_12dcbc:
    // 0x12dcbc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x12dcbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_12dcc0:
    // 0x12dcc0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12dcc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12dcc4:
    // 0x12dcc4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12dcc8:
    // 0x12dcc8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_12dccc:
    // 0x12dccc: 0x24040515  addiu       $a0, $zero, 0x515
    ctx->pc = 0x12dcccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1301));
label_12dcd0:
    // 0x12dcd0: 0x24450570  addiu       $a1, $v0, 0x570
    ctx->pc = 0x12dcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1392));
label_12dcd4:
    // 0x12dcd4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12dcd4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12dcd8:
    // 0x12dcd8: 0xc067b18  jal         func_19EC60
label_12dcdc:
    if (ctx->pc == 0x12DCDCu) {
        ctx->pc = 0x12DCE0u;
        goto label_12dce0;
    }
    ctx->pc = 0x12DCD8u;
    SET_GPR_U32(ctx, 31, 0x12DCE0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12DCD8u, 0x12DCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DCE0u;
label_12dce0:
    // 0x12dce0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12dce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12dce4:
    // 0x12dce4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_12dce8:
    // 0x12dce8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12dce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12dcec:
    // 0x12dcec: 0x24450200  addiu       $a1, $v0, 0x200
    ctx->pc = 0x12dcecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
label_12dcf0:
    // 0x12dcf0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x12dcf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12dcf4:
    // 0x12dcf4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x12dcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_12dcf8:
    // 0x12dcf8: 0x24478d80  addiu       $a3, $v0, -0x7280
    ctx->pc = 0x12dcf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937984));
label_12dcfc:
    // 0x12dcfc: 0xc06d02c  jal         func_1B40B0
label_12dd00:
    if (ctx->pc == 0x12DD00u) {
        ctx->pc = 0x12DD04u;
        goto label_12dd04;
    }
    ctx->pc = 0x12DCFCu;
    SET_GPR_U32(ctx, 31, 0x12DD04u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x12DCFCu, 0x12DD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD04u;
label_12dd04:
    // 0x12dd04: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_12dd08:
    if (ctx->pc == 0x12DD08u) {
        ctx->pc = 0x12DD0Cu;
        goto label_12dd0c;
    }
    ctx->pc = 0x12DD04u;
    {
        const bool branch_taken_0x12dd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dd04) {
            ctx->pc = 0x12DD84u;
            goto label_12dd84;
        }
    }
    ctx->pc = 0x12DD0Cu;
label_12dd0c:
    // 0x12dd0c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12dd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_12dd10:
    // 0x12dd10: 0xc0675a4  jal         func_19D690
label_12dd14:
    if (ctx->pc == 0x12DD14u) {
        ctx->pc = 0x12DD18u;
        goto label_12dd18;
    }
    ctx->pc = 0x12DD10u;
    SET_GPR_U32(ctx, 31, 0x12DD18u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12DD10u, 0x12DD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD18u;
label_12dd18:
    // 0x12dd18: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12dd1c:
    // 0x12dd1c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x12dd1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_12dd20:
    // 0x12dd20: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x12dd20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_12dd24:
    // 0x12dd24: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x12dd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_12dd28:
    // 0x12dd28: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x12dd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_12dd2c:
    // 0x12dd2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12dd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_12dd30:
    // 0x12dd30: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x12dd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_12dd34:
    // 0x12dd34: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12dd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_12dd38:
    // 0x12dd38: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x12dd38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
label_12dd3c:
    // 0x12dd3c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12dd40:
    // 0x12dd40: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_12dd44:
    // 0x12dd44: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x12dd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_12dd48:
    // 0x12dd48: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12dd48u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12dd4c:
    // 0x12dd4c: 0x24470540  addiu       $a3, $v0, 0x540
    ctx->pc = 0x12dd4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_12dd50:
    // 0x12dd50: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x12dd50u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12dd54:
    // 0x12dd54: 0xc06371c  jal         func_18DC70
label_12dd58:
    if (ctx->pc == 0x12DD58u) {
        ctx->pc = 0x12DD5Cu;
        goto label_12dd5c;
    }
    ctx->pc = 0x12DD54u;
    SET_GPR_U32(ctx, 31, 0x12DD5Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x12DD54u, 0x12DD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD5Cu;
label_12dd5c:
    // 0x12dd5c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12dd60:
    // 0x12dd60: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x12dd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_12dd64:
    // 0x12dd64: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x12dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_12dd68:
    // 0x12dd68: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x12dd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_12dd6c:
    // 0x12dd6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12dd6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12dd70:
    // 0x12dd70: 0x24040515  addiu       $a0, $zero, 0x515
    ctx->pc = 0x12dd70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1301));
label_12dd74:
    // 0x12dd74: 0x24650570  addiu       $a1, $v1, 0x570
    ctx->pc = 0x12dd74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1392));
label_12dd78:
    // 0x12dd78: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12dd78u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12dd7c:
    // 0x12dd7c: 0xc067b18  jal         func_19EC60
label_12dd80:
    if (ctx->pc == 0x12DD80u) {
        ctx->pc = 0x12DD84u;
        goto label_12dd84;
    }
    ctx->pc = 0x12DD7Cu;
    SET_GPR_U32(ctx, 31, 0x12DD84u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12DD7Cu, 0x12DD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD84u;
label_12dd84:
    // 0x12dd84: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12dd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12dd88:
    // 0x12dd88: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12dd88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_12dd8c:
    // 0x12dd8c: 0x10600105  beqz        $v1, . + 4 + (0x105 << 2)
label_12dd90:
    if (ctx->pc == 0x12DD90u) {
        ctx->pc = 0x12DD94u;
        goto label_12dd94;
    }
    ctx->pc = 0x12DD8Cu;
    {
        const bool branch_taken_0x12dd8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dd8c) {
            ctx->pc = 0x12E1A4u;
            goto label_12e1a4;
        }
    }
    ctx->pc = 0x12DD94u;
label_12dd94:
    // 0x12dd94: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12dd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12dd98:
    // 0x12dd98: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12dd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12dd9c:
    // 0x12dd9c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x12dd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_12dda0:
    // 0x12dda0: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x12dda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12dda4:
    // 0x12dda4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x12dda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_12dda8:
    // 0x12dda8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x12dda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_12ddac:
    // 0x12ddac: 0xc05cc90  jal         func_173240
label_12ddb0:
    if (ctx->pc == 0x12DDB0u) {
        ctx->pc = 0x12DDB4u;
        goto label_12ddb4;
    }
    ctx->pc = 0x12DDACu;
    SET_GPR_U32(ctx, 31, 0x12DDB4u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x12DDACu, 0x12DDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DDB4u;
label_12ddb4:
    // 0x12ddb4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x12ddb4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12ddb8:
    // 0x12ddb8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12ddb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12ddbc:
    // 0x12ddbc: 0x12230005  beq         $s1, $v1, . + 4 + (0x5 << 2)
label_12ddc0:
    if (ctx->pc == 0x12DDC0u) {
        ctx->pc = 0x12DDC4u;
        goto label_12ddc4;
    }
    ctx->pc = 0x12DDBCu;
    {
        const bool branch_taken_0x12ddbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x12ddbc) {
            ctx->pc = 0x12DDD4u;
            goto label_12ddd4;
        }
    }
    ctx->pc = 0x12DDC4u;
label_12ddc4:
    // 0x12ddc4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_12ddc8:
    if (ctx->pc == 0x12DDC8u) {
        ctx->pc = 0x12DDCCu;
        goto label_12ddcc;
    }
    ctx->pc = 0x12DDC4u;
    {
        const bool branch_taken_0x12ddc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ddc4) {
            ctx->pc = 0x12DDD4u;
            goto label_12ddd4;
        }
    }
    ctx->pc = 0x12DDCCu;
label_12ddcc:
    // 0x12ddcc: 0x10000016  b           . + 4 + (0x16 << 2)
label_12ddd0:
    if (ctx->pc == 0x12DDD0u) {
        ctx->pc = 0x12DDD4u;
        goto label_12ddd4;
    }
    ctx->pc = 0x12DDCCu;
    {
        const bool branch_taken_0x12ddcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ddcc) {
            ctx->pc = 0x12DE28u;
            goto label_12de28;
        }
    }
    ctx->pc = 0x12DDD4u;
label_12ddd4:
    // 0x12ddd4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12ddd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12ddd8:
    // 0x12ddd8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x12ddd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12dddc:
    // 0x12dddc: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x12dddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
label_12dde0:
    // 0x12dde0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x12dde0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_12dde4:
    // 0x12dde4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12dde4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12dde8:
    // 0x12dde8: 0x0  nop
    ctx->pc = 0x12dde8u;
    // NOP
label_12ddec:
    // 0x12ddec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12ddecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12ddf0:
    // 0x12ddf0: 0x0  nop
    ctx->pc = 0x12ddf0u;
    // NOP
label_12ddf4:
    // 0x12ddf4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_12ddf8:
    if (ctx->pc == 0x12DDF8u) {
        ctx->pc = 0x12DDFCu;
        goto label_12ddfc;
    }
    ctx->pc = 0x12DDF4u;
    {
        const bool branch_taken_0x12ddf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12ddf4) {
            ctx->pc = 0x12DE28u;
            goto label_12de28;
        }
    }
    ctx->pc = 0x12DDFCu;
label_12ddfc:
    // 0x12ddfc: 0xc067694  jal         func_19DA50
label_12de00:
    if (ctx->pc == 0x12DE00u) {
        ctx->pc = 0x12DE04u;
        goto label_12de04;
    }
    ctx->pc = 0x12DDFCu;
    SET_GPR_U32(ctx, 31, 0x12DE04u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x12DDFCu, 0x12DE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE04u;
label_12de04:
    // 0x12de04: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x12de04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12de08:
    // 0x12de08: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x12de08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_12de0c:
    // 0x12de0c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_12de10:
    if (ctx->pc == 0x12DE10u) {
        ctx->pc = 0x12DE14u;
        goto label_12de14;
    }
    ctx->pc = 0x12DE0Cu;
    {
        const bool branch_taken_0x12de0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12de0c) {
            ctx->pc = 0x12DE28u;
            goto label_12de28;
        }
    }
    ctx->pc = 0x12DE14u;
label_12de14:
    // 0x12de14: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12de14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_12de18:
    // 0x12de18: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12de18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12de1c:
    // 0x12de1c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x12de1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_12de20:
    // 0x12de20: 0x100000e0  b           . + 4 + (0xE0 << 2)
label_12de24:
    if (ctx->pc == 0x12DE24u) {
        ctx->pc = 0x12DE28u;
        goto label_12de28;
    }
    ctx->pc = 0x12DE20u;
    {
        const bool branch_taken_0x12de20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12de20) {
            ctx->pc = 0x12E1A4u;
            goto label_12e1a4;
        }
    }
    ctx->pc = 0x12DE28u;
label_12de28:
    // 0x12de28: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12de28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12de2c:
    // 0x12de2c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x12de2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_12de30:
    // 0x12de30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12de30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_12de34:
    // 0x12de34: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x12de34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_12de38:
    // 0x12de38: 0x100000da  b           . + 4 + (0xDA << 2)
label_12de3c:
    if (ctx->pc == 0x12DE3Cu) {
        ctx->pc = 0x12DE40u;
        goto label_12de40;
    }
    ctx->pc = 0x12DE38u;
    {
        const bool branch_taken_0x12de38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12de38) {
            ctx->pc = 0x12E1A4u;
            goto label_12e1a4;
        }
    }
    ctx->pc = 0x12DE40u;
label_12de40:
    // 0x12de40: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12de40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12de44:
    // 0x12de44: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12de44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12de48:
    // 0x12de48: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12de48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_12de4c:
    // 0x12de4c: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x12de4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_12de50:
    // 0x12de50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12de50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12de54:
    // 0x12de54: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12de54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_12de58:
    // 0x12de58: 0xc0965d0  jal         func_259740
label_12de5c:
    if (ctx->pc == 0x12DE5Cu) {
        ctx->pc = 0x12DE60u;
        goto label_12de60;
    }
    ctx->pc = 0x12DE58u;
    SET_GPR_U32(ctx, 31, 0x12DE60u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12DE58u, 0x12DE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE60u;
label_12de60:
    // 0x12de60: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12de60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12de64:
    // 0x12de64: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12de64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_12de68:
    // 0x12de68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12de68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_12de6c:
    // 0x12de6c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12de6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_12de70:
    // 0x12de70: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12de70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12de74:
    // 0x12de74: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12de74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12de78:
    // 0x12de78: 0xc096b40  jal         func_25AD00
label_12de7c:
    if (ctx->pc == 0x12DE7Cu) {
        ctx->pc = 0x12DE80u;
        goto label_12de80;
    }
    ctx->pc = 0x12DE78u;
    SET_GPR_U32(ctx, 31, 0x12DE80u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12DE78u, 0x12DE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE80u;
label_12de80:
    // 0x12de80: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12de80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12de84:
    // 0x12de84: 0xc05cd10  jal         func_173440
label_12de88:
    if (ctx->pc == 0x12DE88u) {
        ctx->pc = 0x12DE8Cu;
        goto label_12de8c;
    }
    ctx->pc = 0x12DE84u;
    SET_GPR_U32(ctx, 31, 0x12DE8Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12DE84u, 0x12DE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE8Cu;
label_12de8c:
    // 0x12de8c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12de8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12de90:
    // 0x12de90: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12de90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12de94:
    // 0x12de94: 0xc05cec4  jal         func_173B10
label_12de98:
    if (ctx->pc == 0x12DE98u) {
        ctx->pc = 0x12DE9Cu;
        goto label_12de9c;
    }
    ctx->pc = 0x12DE94u;
    SET_GPR_U32(ctx, 31, 0x12DE9Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12DE94u, 0x12DE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE9Cu;
label_12de9c:
    // 0x12de9c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12de9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12dea0:
    // 0x12dea0: 0xc0974dc  jal         func_25D370
label_12dea4:
    if (ctx->pc == 0x12DEA4u) {
        ctx->pc = 0x12DEA8u;
        goto label_12dea8;
    }
    ctx->pc = 0x12DEA0u;
    SET_GPR_U32(ctx, 31, 0x12DEA8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12DEA0u, 0x12DEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DEA8u;
label_12dea8:
    // 0x12dea8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12dea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12deac:
    // 0x12deac: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12deacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_12deb0:
    // 0x12deb0: 0x106000bc  beqz        $v1, . + 4 + (0xBC << 2)
label_12deb4:
    if (ctx->pc == 0x12DEB4u) {
        ctx->pc = 0x12DEB8u;
        goto label_12deb8;
    }
    ctx->pc = 0x12DEB0u;
    {
        const bool branch_taken_0x12deb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12deb0) {
            ctx->pc = 0x12E1A4u;
            goto label_12e1a4;
        }
    }
    ctx->pc = 0x12DEB8u;
label_12deb8:
    // 0x12deb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12deb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12debc:
    // 0x12debc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12debcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12dec0:
    // 0x12dec0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12dec0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12dec4:
    // 0x12dec4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12dec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_12dec8:
    // 0x12dec8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12dec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12decc:
    // 0x12decc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12deccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_12ded0:
    // 0x12ded0: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x12ded0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12ded4:
    // 0x12ded4: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x12ded4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
label_12ded8:
    // 0x12ded8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12ded8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12dedc:
    // 0x12dedc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12dedcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12dee0:
    // 0x12dee0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12dee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12dee4:
    // 0x12dee4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x12dee4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_12dee8:
    // 0x12dee8: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x12dee8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
label_12deec:
    // 0x12deec: 0x100000ad  b           . + 4 + (0xAD << 2)
label_12def0:
    if (ctx->pc == 0x12DEF0u) {
        ctx->pc = 0x12DEF4u;
        goto label_12def4;
    }
    ctx->pc = 0x12DEECu;
    {
        const bool branch_taken_0x12deec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12deec) {
            ctx->pc = 0x12E1A4u;
            goto label_12e1a4;
        }
    }
    ctx->pc = 0x12DEF4u;
label_12def4:
    // 0x12def4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12def4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12def8:
    // 0x12def8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12def8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12defc:
    // 0x12defc: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x12defcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_12df00:
    // 0x12df00: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x12df00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_12df04:
    // 0x12df04: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x12df04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12df08:
    // 0x12df08: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12df08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12df0c:
    // 0x12df0c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12df0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_12df10:
    // 0x12df10: 0xc0965d0  jal         func_259740
label_12df14:
    if (ctx->pc == 0x12DF14u) {
        ctx->pc = 0x12DF18u;
        goto label_12df18;
    }
    ctx->pc = 0x12DF10u;
    SET_GPR_U32(ctx, 31, 0x12DF18u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12DF10u, 0x12DF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DF18u;
label_12df18:
    // 0x12df18: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12df18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12df1c:
    // 0x12df1c: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x12df1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_12df20:
    // 0x12df20: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x12df20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_12df24:
    // 0x12df24: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x12df24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_12df28:
    // 0x12df28: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12df28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12df2c:
    // 0x12df2c: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x12df2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_12df30:
    // 0x12df30: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x12df30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_12df34:
    // 0x12df34: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x12df34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_12df38:
    // 0x12df38: 0xc05ccfc  jal         func_1733F0
label_12df3c:
    if (ctx->pc == 0x12DF3Cu) {
        ctx->pc = 0x12DF40u;
        goto label_12df40;
    }
    ctx->pc = 0x12DF38u;
    SET_GPR_U32(ctx, 31, 0x12DF40u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x12DF38u, 0x12DF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DF40u;
label_12df40:
    // 0x12df40: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12df40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12df44:
    // 0x12df44: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x12df44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_12df48:
    // 0x12df48: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12df48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12df4c:
    // 0x12df4c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12df4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12df50:
    // 0x12df50: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x12df50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
label_12df54:
    // 0x12df54: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12df54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_12df58:
    // 0x12df58: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x12df58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_12df5c:
    // 0x12df5c: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x12df5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12df60:
    // 0x12df60: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x12df60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_12df64:
    // 0x12df64: 0xc058f50  jal         func_163D40
label_12df68:
    if (ctx->pc == 0x12DF68u) {
        ctx->pc = 0x12DF6Cu;
        goto label_12df6c;
    }
    ctx->pc = 0x12DF64u;
    SET_GPR_U32(ctx, 31, 0x12DF6Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x12DF64u, 0x12DF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DF6Cu;
label_12df6c:
    // 0x12df6c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12df6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12df70:
    // 0x12df70: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x12df70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
label_12df74:
    // 0x12df74: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x12df74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12df78:
    // 0x12df78: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x12df78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_12df7c:
    // 0x12df7c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12df7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12df80:
    // 0x12df80: 0xc096b40  jal         func_25AD00
label_12df84:
    if (ctx->pc == 0x12DF84u) {
        ctx->pc = 0x12DF88u;
        goto label_12df88;
    }
    ctx->pc = 0x12DF80u;
    SET_GPR_U32(ctx, 31, 0x12DF88u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12DF80u, 0x12DF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DF88u;
label_12df88:
    // 0x12df88: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12df88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12df8c:
    // 0x12df8c: 0xc05cd10  jal         func_173440
label_12df90:
    if (ctx->pc == 0x12DF90u) {
        ctx->pc = 0x12DF94u;
        goto label_12df94;
    }
    ctx->pc = 0x12DF8Cu;
    SET_GPR_U32(ctx, 31, 0x12DF94u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12DF8Cu, 0x12DF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DF94u;
label_12df94:
    // 0x12df94: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12df94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12df98:
    // 0x12df98: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12df98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12df9c:
    // 0x12df9c: 0xc05cec4  jal         func_173B10
label_12dfa0:
    if (ctx->pc == 0x12DFA0u) {
        ctx->pc = 0x12DFA4u;
        goto label_12dfa4;
    }
    ctx->pc = 0x12DF9Cu;
    SET_GPR_U32(ctx, 31, 0x12DFA4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12DF9Cu, 0x12DFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DFA4u;
label_12dfa4:
    // 0x12dfa4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12dfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12dfa8:
    // 0x12dfa8: 0xc0974dc  jal         func_25D370
label_12dfac:
    if (ctx->pc == 0x12DFACu) {
        ctx->pc = 0x12DFB0u;
        goto label_12dfb0;
    }
    ctx->pc = 0x12DFA8u;
    SET_GPR_U32(ctx, 31, 0x12DFB0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12DFA8u, 0x12DFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DFB0u;
label_12dfb0:
    // 0x12dfb0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x12dfb0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12dfb4:
    // 0x12dfb4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12dfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12dfb8:
    // 0x12dfb8: 0x906409db  lbu         $a0, 0x9DB($v1)
    ctx->pc = 0x12dfb8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
label_12dfbc:
    // 0x12dfbc: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x12dfbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_12dfc0:
    // 0x12dfc0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x12dfc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_12dfc4:
    // 0x12dfc4: 0x10600064  beqz        $v1, . + 4 + (0x64 << 2)
label_12dfc8:
    if (ctx->pc == 0x12DFC8u) {
        ctx->pc = 0x12DFCCu;
        goto label_12dfcc;
    }
    ctx->pc = 0x12DFC4u;
    {
        const bool branch_taken_0x12dfc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dfc4) {
            ctx->pc = 0x12E158u;
            goto label_12e158;
        }
    }
    ctx->pc = 0x12DFCCu;
label_12dfcc:
    // 0x12dfcc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x12dfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_12dfd0:
    // 0x12dfd0: 0xc0675a4  jal         func_19D690
label_12dfd4:
    if (ctx->pc == 0x12DFD4u) {
        ctx->pc = 0x12DFD8u;
        goto label_12dfd8;
    }
    ctx->pc = 0x12DFD0u;
    SET_GPR_U32(ctx, 31, 0x12DFD8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12DFD0u, 0x12DFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DFD8u;
label_12dfd8:
    // 0x12dfd8: 0x3c03c2c8  lui         $v1, 0xC2C8
    ctx->pc = 0x12dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49864 << 16));
label_12dfdc:
    // 0x12dfdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12dfdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12dfe0:
    // 0x12dfe0: 0x0  nop
    ctx->pc = 0x12dfe0u;
    // NOP
label_12dfe4:
    // 0x12dfe4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x12dfe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_12dfe8:
    // 0x12dfe8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12dfec:
    // 0x12dfec: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12dfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_12dff0:
    // 0x12dff0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12dff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12dff4:
    // 0x12dff4: 0x24450580  addiu       $a1, $v0, 0x580
    ctx->pc = 0x12dff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
label_12dff8:
    // 0x12dff8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x12dff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_12dffc:
    // 0x12dffc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x12dffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_12e000:
    // 0x12e000: 0x24478d8c  addiu       $a3, $v0, -0x7274
    ctx->pc = 0x12e000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937996));
label_12e004:
    // 0x12e004: 0xc06d02c  jal         func_1B40B0
label_12e008:
    if (ctx->pc == 0x12E008u) {
        ctx->pc = 0x12E00Cu;
        goto label_12e00c;
    }
    ctx->pc = 0x12E004u;
    SET_GPR_U32(ctx, 31, 0x12E00Cu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x12E004u, 0x12E00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E00Cu;
label_12e00c:
    // 0x12e00c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x12e00cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12e010:
    // 0x12e010: 0x10e00022  beqz        $a3, . + 4 + (0x22 << 2)
label_12e014:
    if (ctx->pc == 0x12E014u) {
        ctx->pc = 0x12E018u;
        goto label_12e018;
    }
    ctx->pc = 0x12E010u;
    {
        const bool branch_taken_0x12e010 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e010) {
            ctx->pc = 0x12E09Cu;
            goto label_12e09c;
        }
    }
    ctx->pc = 0x12E018u;
label_12e018:
    // 0x12e018: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x12e018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_12e01c:
    // 0x12e01c: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x12e01cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_12e020:
    // 0x12e020: 0xc0675a4  jal         func_19D690
label_12e024:
    if (ctx->pc == 0x12E024u) {
        ctx->pc = 0x12E028u;
        goto label_12e028;
    }
    ctx->pc = 0x12E020u;
    SET_GPR_U32(ctx, 31, 0x12E028u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12E020u, 0x12E028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E028u;
label_12e028:
    // 0x12e028: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12e028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12e02c:
    // 0x12e02c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x12e02cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_12e030:
    // 0x12e030: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x12e030u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_12e034:
    // 0x12e034: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x12e034u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_12e038:
    // 0x12e038: 0x53438  dsll        $a2, $a1, 16
    ctx->pc = 0x12e038u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << 16);
label_12e03c:
    // 0x12e03c: 0x34c7ffff  ori         $a3, $a2, 0xFFFF
    ctx->pc = 0x12e03cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_12e040:
    // 0x12e040: 0x874024  and         $t0, $a0, $a3
    ctx->pc = 0x12e040u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
label_12e044:
    // 0x12e044: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x12e044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
label_12e048:
    // 0x12e048: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x12e048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
label_12e04c:
    // 0x12e04c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12e050:
    // 0x12e050: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12e050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_12e054:
    // 0x12e054: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x12e054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_12e058:
    // 0x12e058: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12e058u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12e05c:
    // 0x12e05c: 0x24470580  addiu       $a3, $v0, 0x580
    ctx->pc = 0x12e05cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
label_12e060:
    // 0x12e060: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x12e060u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12e064:
    // 0x12e064: 0xc06371c  jal         func_18DC70
label_12e068:
    if (ctx->pc == 0x12E068u) {
        ctx->pc = 0x12E06Cu;
        goto label_12e06c;
    }
    ctx->pc = 0x12E064u;
    SET_GPR_U32(ctx, 31, 0x12E06Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x12E064u, 0x12E06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E06Cu;
label_12e06c:
    // 0x12e06c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12e06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12e070:
    // 0x12e070: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x12e070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_12e074:
    // 0x12e074: 0x3c07469c  lui         $a3, 0x469C
    ctx->pc = 0x12e074u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)18076 << 16));
label_12e078:
    // 0x12e078: 0x34e64000  ori         $a2, $a3, 0x4000
    ctx->pc = 0x12e078u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16384);
label_12e07c:
    // 0x12e07c: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x12e07cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12e080:
    // 0x12e080: 0x24080516  addiu       $t0, $zero, 0x516
    ctx->pc = 0x12e080u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1302));
label_12e084:
    // 0x12e084: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x12e084u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_12e088:
    // 0x12e088: 0x24a205b0  addiu       $v0, $a1, 0x5B0
    ctx->pc = 0x12e088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1456));
label_12e08c:
    // 0x12e08c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x12e08cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12e090:
    // 0x12e090: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12e090u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12e094:
    // 0x12e094: 0xc067b18  jal         func_19EC60
label_12e098:
    if (ctx->pc == 0x12E098u) {
        ctx->pc = 0x12E09Cu;
        goto label_12e09c;
    }
    ctx->pc = 0x12E094u;
    SET_GPR_U32(ctx, 31, 0x12E09Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12E094u, 0x12E09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E09Cu;
label_12e09c:
    // 0x12e09c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12e09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12e0a0:
    // 0x12e0a0: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x12e0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_12e0a4:
    // 0x12e0a4: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x12e0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12e0a8:
    // 0x12e0a8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x12e0a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_12e0ac:
    // 0x12e0ac: 0x24a70300  addiu       $a3, $a1, 0x300
    ctx->pc = 0x12e0acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 768));
label_12e0b0:
    // 0x12e0b0: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x12e0b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_12e0b4:
    // 0x12e0b4: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x12e0b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_12e0b8:
    // 0x12e0b8: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x12e0b8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_12e0bc:
    // 0x12e0bc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x12e0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_12e0c0:
    // 0x12e0c0: 0x24478d8c  addiu       $a3, $v0, -0x7274
    ctx->pc = 0x12e0c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937996));
label_12e0c4:
    // 0x12e0c4: 0xc06d02c  jal         func_1B40B0
label_12e0c8:
    if (ctx->pc == 0x12E0C8u) {
        ctx->pc = 0x12E0CCu;
        goto label_12e0cc;
    }
    ctx->pc = 0x12E0C4u;
    SET_GPR_U32(ctx, 31, 0x12E0CCu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x12E0C4u, 0x12E0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E0CCu;
label_12e0cc:
    // 0x12e0cc: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_12e0d0:
    if (ctx->pc == 0x12E0D0u) {
        ctx->pc = 0x12E0D4u;
        goto label_12e0d4;
    }
    ctx->pc = 0x12E0CCu;
    {
        const bool branch_taken_0x12e0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e0cc) {
            ctx->pc = 0x12E158u;
            goto label_12e158;
        }
    }
    ctx->pc = 0x12E0D4u;
label_12e0d4:
    // 0x12e0d4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x12e0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_12e0d8:
    // 0x12e0d8: 0xc0675a4  jal         func_19D690
label_12e0dc:
    if (ctx->pc == 0x12E0DCu) {
        ctx->pc = 0x12E0E0u;
        goto label_12e0e0;
    }
    ctx->pc = 0x12E0D8u;
    SET_GPR_U32(ctx, 31, 0x12E0E0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12E0D8u, 0x12E0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E0E0u;
label_12e0e0:
    // 0x12e0e0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12e0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12e0e4:
    // 0x12e0e4: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x12e0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_12e0e8:
    // 0x12e0e8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12e0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_12e0ec:
    // 0x12e0ec: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x12e0ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_12e0f0:
    // 0x12e0f0: 0x42c38  dsll        $a1, $a0, 16
    ctx->pc = 0x12e0f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 16);
label_12e0f4:
    // 0x12e0f4: 0x34a6ffff  ori         $a2, $a1, 0xFFFF
    ctx->pc = 0x12e0f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_12e0f8:
    // 0x12e0f8: 0x463824  and         $a3, $v0, $a2
    ctx->pc = 0x12e0f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_12e0fc:
    // 0x12e0fc: 0x7403c  dsll32      $t0, $a3, 0
    ctx->pc = 0x12e0fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 0));
label_12e100:
    // 0x12e100: 0x35020106  ori         $v0, $t0, 0x106
    ctx->pc = 0x12e100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)262);
label_12e104:
    // 0x12e104: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x12e104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12e108:
    // 0x12e108: 0x8ca30130  lw          $v1, 0x130($a1)
    ctx->pc = 0x12e108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_12e10c:
    // 0x12e10c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12e10cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12e110:
    // 0x12e110: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x12e110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_12e114:
    // 0x12e114: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12e114u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12e118:
    // 0x12e118: 0x24670300  addiu       $a3, $v1, 0x300
    ctx->pc = 0x12e118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 768));
label_12e11c:
    // 0x12e11c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x12e11cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12e120:
    // 0x12e120: 0xc06371c  jal         func_18DC70
label_12e124:
    if (ctx->pc == 0x12E124u) {
        ctx->pc = 0x12E128u;
        goto label_12e128;
    }
    ctx->pc = 0x12E120u;
    SET_GPR_U32(ctx, 31, 0x12E128u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x12E120u, 0x12E128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E128u;
label_12e128:
    // 0x12e128: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x12e128u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12e12c:
    // 0x12e12c: 0x8fa80098  lw          $t0, 0x98($sp)
    ctx->pc = 0x12e12cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12e130:
    // 0x12e130: 0x8d020130  lw          $v0, 0x130($t0)
    ctx->pc = 0x12e130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 304)));
label_12e134:
    // 0x12e134: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x12e134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_12e138:
    // 0x12e138: 0x34654000  ori         $a1, $v1, 0x4000
    ctx->pc = 0x12e138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_12e13c:
    // 0x12e13c: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x12e13cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12e140:
    // 0x12e140: 0x24040516  addiu       $a0, $zero, 0x516
    ctx->pc = 0x12e140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1302));
label_12e144:
    // 0x12e144: 0x244505b0  addiu       $a1, $v0, 0x5B0
    ctx->pc = 0x12e144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1456));
label_12e148:
    // 0x12e148: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12e148u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12e14c:
    // 0x12e14c: 0xc067b18  jal         func_19EC60
label_12e150:
    if (ctx->pc == 0x12E150u) {
        ctx->pc = 0x12E154u;
        goto label_12e154;
    }
    ctx->pc = 0x12E14Cu;
    SET_GPR_U32(ctx, 31, 0x12E154u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12E14Cu, 0x12E154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E154u;
label_12e154:
    // 0x12e154: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12e154u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12e158:
    // 0x12e158: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12e158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12e15c:
    // 0x12e15c: 0x906509e7  lbu         $a1, 0x9E7($v1)
    ctx->pc = 0x12e15cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_12e160:
    // 0x12e160: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_12e164:
    if (ctx->pc == 0x12E164u) {
        ctx->pc = 0x12E168u;
        goto label_12e168;
    }
    ctx->pc = 0x12E160u;
    {
        const bool branch_taken_0x12e160 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e160) {
            ctx->pc = 0x12E1A4u;
            goto label_12e1a4;
        }
    }
    ctx->pc = 0x12E168u;
label_12e168:
    // 0x12e168: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12e168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12e16c:
    // 0x12e16c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12e16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12e170:
    // 0x12e170: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12e170u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12e174:
    // 0x12e174: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x12e174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_12e178:
    // 0x12e178: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12e178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12e17c:
    // 0x12e17c: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x12e17cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_12e180:
    // 0x12e180: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12e180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12e184:
    // 0x12e184: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12e184u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_12e188:
    // 0x12e188: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12e188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12e18c:
    // 0x12e18c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12e18cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12e190:
    // 0x12e190: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12e190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_12e194:
    // 0x12e194: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x12e194u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_12e198:
    // 0x12e198: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x12e198u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
label_12e19c:
    // 0x12e19c: 0x10000001  b           . + 4 + (0x1 << 2)
label_12e1a0:
    if (ctx->pc == 0x12E1A0u) {
        ctx->pc = 0x12E1A4u;
        goto label_12e1a4;
    }
    ctx->pc = 0x12E19Cu;
    {
        const bool branch_taken_0x12e19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e19c) {
            ctx->pc = 0x12E1A4u;
            goto label_12e1a4;
        }
    }
    ctx->pc = 0x12E1A4u;
label_12e1a4:
    // 0x12e1a4: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x12e1a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12e1a8:
    // 0x12e1a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12e1a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12e1ac:
    // 0x12e1ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12e1acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_12e1b0:
    // 0x12e1b0: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x12e1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_12e1b4:
    // 0x12e1b4: 0x3e00008  jr          $ra
label_12e1b8:
    if (ctx->pc == 0x12E1B8u) {
        ctx->pc = 0x12E1BCu;
        goto label_fallthrough_0x12e1b4;
    }
    ctx->pc = 0x12E1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E1B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12e1b4:
    ctx->pc = 0x12E1BCu;
}
