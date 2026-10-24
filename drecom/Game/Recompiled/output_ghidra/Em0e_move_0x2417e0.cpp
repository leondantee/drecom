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

// Function: Em0e_move
// Address: 0x2417e0 - 0x24237c
void Em0e_move_0x2417e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0e_move_0x2417e0");
#endif

    switch (ctx->pc) {
        case 0x2417e0u: goto label_2417e0;
        case 0x2417e4u: goto label_2417e4;
        case 0x2417e8u: goto label_2417e8;
        case 0x2417ecu: goto label_2417ec;
        case 0x2417f0u: goto label_2417f0;
        case 0x2417f4u: goto label_2417f4;
        case 0x2417f8u: goto label_2417f8;
        case 0x2417fcu: goto label_2417fc;
        case 0x241800u: goto label_241800;
        case 0x241804u: goto label_241804;
        case 0x241808u: goto label_241808;
        case 0x24180cu: goto label_24180c;
        case 0x241810u: goto label_241810;
        case 0x241814u: goto label_241814;
        case 0x241818u: goto label_241818;
        case 0x24181cu: goto label_24181c;
        case 0x241820u: goto label_241820;
        case 0x241824u: goto label_241824;
        case 0x241828u: goto label_241828;
        case 0x24182cu: goto label_24182c;
        case 0x241830u: goto label_241830;
        case 0x241834u: goto label_241834;
        case 0x241838u: goto label_241838;
        case 0x24183cu: goto label_24183c;
        case 0x241840u: goto label_241840;
        case 0x241844u: goto label_241844;
        case 0x241848u: goto label_241848;
        case 0x24184cu: goto label_24184c;
        case 0x241850u: goto label_241850;
        case 0x241854u: goto label_241854;
        case 0x241858u: goto label_241858;
        case 0x24185cu: goto label_24185c;
        case 0x241860u: goto label_241860;
        case 0x241864u: goto label_241864;
        case 0x241868u: goto label_241868;
        case 0x24186cu: goto label_24186c;
        case 0x241870u: goto label_241870;
        case 0x241874u: goto label_241874;
        case 0x241878u: goto label_241878;
        case 0x24187cu: goto label_24187c;
        case 0x241880u: goto label_241880;
        case 0x241884u: goto label_241884;
        case 0x241888u: goto label_241888;
        case 0x24188cu: goto label_24188c;
        case 0x241890u: goto label_241890;
        case 0x241894u: goto label_241894;
        case 0x241898u: goto label_241898;
        case 0x24189cu: goto label_24189c;
        case 0x2418a0u: goto label_2418a0;
        case 0x2418a4u: goto label_2418a4;
        case 0x2418a8u: goto label_2418a8;
        case 0x2418acu: goto label_2418ac;
        case 0x2418b0u: goto label_2418b0;
        case 0x2418b4u: goto label_2418b4;
        case 0x2418b8u: goto label_2418b8;
        case 0x2418bcu: goto label_2418bc;
        case 0x2418c0u: goto label_2418c0;
        case 0x2418c4u: goto label_2418c4;
        case 0x2418c8u: goto label_2418c8;
        case 0x2418ccu: goto label_2418cc;
        case 0x2418d0u: goto label_2418d0;
        case 0x2418d4u: goto label_2418d4;
        case 0x2418d8u: goto label_2418d8;
        case 0x2418dcu: goto label_2418dc;
        case 0x2418e0u: goto label_2418e0;
        case 0x2418e4u: goto label_2418e4;
        case 0x2418e8u: goto label_2418e8;
        case 0x2418ecu: goto label_2418ec;
        case 0x2418f0u: goto label_2418f0;
        case 0x2418f4u: goto label_2418f4;
        case 0x2418f8u: goto label_2418f8;
        case 0x2418fcu: goto label_2418fc;
        case 0x241900u: goto label_241900;
        case 0x241904u: goto label_241904;
        case 0x241908u: goto label_241908;
        case 0x24190cu: goto label_24190c;
        case 0x241910u: goto label_241910;
        case 0x241914u: goto label_241914;
        case 0x241918u: goto label_241918;
        case 0x24191cu: goto label_24191c;
        case 0x241920u: goto label_241920;
        case 0x241924u: goto label_241924;
        case 0x241928u: goto label_241928;
        case 0x24192cu: goto label_24192c;
        case 0x241930u: goto label_241930;
        case 0x241934u: goto label_241934;
        case 0x241938u: goto label_241938;
        case 0x24193cu: goto label_24193c;
        case 0x241940u: goto label_241940;
        case 0x241944u: goto label_241944;
        case 0x241948u: goto label_241948;
        case 0x24194cu: goto label_24194c;
        case 0x241950u: goto label_241950;
        case 0x241954u: goto label_241954;
        case 0x241958u: goto label_241958;
        case 0x24195cu: goto label_24195c;
        case 0x241960u: goto label_241960;
        case 0x241964u: goto label_241964;
        case 0x241968u: goto label_241968;
        case 0x24196cu: goto label_24196c;
        case 0x241970u: goto label_241970;
        case 0x241974u: goto label_241974;
        case 0x241978u: goto label_241978;
        case 0x24197cu: goto label_24197c;
        case 0x241980u: goto label_241980;
        case 0x241984u: goto label_241984;
        case 0x241988u: goto label_241988;
        case 0x24198cu: goto label_24198c;
        case 0x241990u: goto label_241990;
        case 0x241994u: goto label_241994;
        case 0x241998u: goto label_241998;
        case 0x24199cu: goto label_24199c;
        case 0x2419a0u: goto label_2419a0;
        case 0x2419a4u: goto label_2419a4;
        case 0x2419a8u: goto label_2419a8;
        case 0x2419acu: goto label_2419ac;
        case 0x2419b0u: goto label_2419b0;
        case 0x2419b4u: goto label_2419b4;
        case 0x2419b8u: goto label_2419b8;
        case 0x2419bcu: goto label_2419bc;
        case 0x2419c0u: goto label_2419c0;
        case 0x2419c4u: goto label_2419c4;
        case 0x2419c8u: goto label_2419c8;
        case 0x2419ccu: goto label_2419cc;
        case 0x2419d0u: goto label_2419d0;
        case 0x2419d4u: goto label_2419d4;
        case 0x2419d8u: goto label_2419d8;
        case 0x2419dcu: goto label_2419dc;
        case 0x2419e0u: goto label_2419e0;
        case 0x2419e4u: goto label_2419e4;
        case 0x2419e8u: goto label_2419e8;
        case 0x2419ecu: goto label_2419ec;
        case 0x2419f0u: goto label_2419f0;
        case 0x2419f4u: goto label_2419f4;
        case 0x2419f8u: goto label_2419f8;
        case 0x2419fcu: goto label_2419fc;
        case 0x241a00u: goto label_241a00;
        case 0x241a04u: goto label_241a04;
        case 0x241a08u: goto label_241a08;
        case 0x241a0cu: goto label_241a0c;
        case 0x241a10u: goto label_241a10;
        case 0x241a14u: goto label_241a14;
        case 0x241a18u: goto label_241a18;
        case 0x241a1cu: goto label_241a1c;
        case 0x241a20u: goto label_241a20;
        case 0x241a24u: goto label_241a24;
        case 0x241a28u: goto label_241a28;
        case 0x241a2cu: goto label_241a2c;
        case 0x241a30u: goto label_241a30;
        case 0x241a34u: goto label_241a34;
        case 0x241a38u: goto label_241a38;
        case 0x241a3cu: goto label_241a3c;
        case 0x241a40u: goto label_241a40;
        case 0x241a44u: goto label_241a44;
        case 0x241a48u: goto label_241a48;
        case 0x241a4cu: goto label_241a4c;
        case 0x241a50u: goto label_241a50;
        case 0x241a54u: goto label_241a54;
        case 0x241a58u: goto label_241a58;
        case 0x241a5cu: goto label_241a5c;
        case 0x241a60u: goto label_241a60;
        case 0x241a64u: goto label_241a64;
        case 0x241a68u: goto label_241a68;
        case 0x241a6cu: goto label_241a6c;
        case 0x241a70u: goto label_241a70;
        case 0x241a74u: goto label_241a74;
        case 0x241a78u: goto label_241a78;
        case 0x241a7cu: goto label_241a7c;
        case 0x241a80u: goto label_241a80;
        case 0x241a84u: goto label_241a84;
        case 0x241a88u: goto label_241a88;
        case 0x241a8cu: goto label_241a8c;
        case 0x241a90u: goto label_241a90;
        case 0x241a94u: goto label_241a94;
        case 0x241a98u: goto label_241a98;
        case 0x241a9cu: goto label_241a9c;
        case 0x241aa0u: goto label_241aa0;
        case 0x241aa4u: goto label_241aa4;
        case 0x241aa8u: goto label_241aa8;
        case 0x241aacu: goto label_241aac;
        case 0x241ab0u: goto label_241ab0;
        case 0x241ab4u: goto label_241ab4;
        case 0x241ab8u: goto label_241ab8;
        case 0x241abcu: goto label_241abc;
        case 0x241ac0u: goto label_241ac0;
        case 0x241ac4u: goto label_241ac4;
        case 0x241ac8u: goto label_241ac8;
        case 0x241accu: goto label_241acc;
        case 0x241ad0u: goto label_241ad0;
        case 0x241ad4u: goto label_241ad4;
        case 0x241ad8u: goto label_241ad8;
        case 0x241adcu: goto label_241adc;
        case 0x241ae0u: goto label_241ae0;
        case 0x241ae4u: goto label_241ae4;
        case 0x241ae8u: goto label_241ae8;
        case 0x241aecu: goto label_241aec;
        case 0x241af0u: goto label_241af0;
        case 0x241af4u: goto label_241af4;
        case 0x241af8u: goto label_241af8;
        case 0x241afcu: goto label_241afc;
        case 0x241b00u: goto label_241b00;
        case 0x241b04u: goto label_241b04;
        case 0x241b08u: goto label_241b08;
        case 0x241b0cu: goto label_241b0c;
        case 0x241b10u: goto label_241b10;
        case 0x241b14u: goto label_241b14;
        case 0x241b18u: goto label_241b18;
        case 0x241b1cu: goto label_241b1c;
        case 0x241b20u: goto label_241b20;
        case 0x241b24u: goto label_241b24;
        case 0x241b28u: goto label_241b28;
        case 0x241b2cu: goto label_241b2c;
        case 0x241b30u: goto label_241b30;
        case 0x241b34u: goto label_241b34;
        case 0x241b38u: goto label_241b38;
        case 0x241b3cu: goto label_241b3c;
        case 0x241b40u: goto label_241b40;
        case 0x241b44u: goto label_241b44;
        case 0x241b48u: goto label_241b48;
        case 0x241b4cu: goto label_241b4c;
        case 0x241b50u: goto label_241b50;
        case 0x241b54u: goto label_241b54;
        case 0x241b58u: goto label_241b58;
        case 0x241b5cu: goto label_241b5c;
        case 0x241b60u: goto label_241b60;
        case 0x241b64u: goto label_241b64;
        case 0x241b68u: goto label_241b68;
        case 0x241b6cu: goto label_241b6c;
        case 0x241b70u: goto label_241b70;
        case 0x241b74u: goto label_241b74;
        case 0x241b78u: goto label_241b78;
        case 0x241b7cu: goto label_241b7c;
        case 0x241b80u: goto label_241b80;
        case 0x241b84u: goto label_241b84;
        case 0x241b88u: goto label_241b88;
        case 0x241b8cu: goto label_241b8c;
        case 0x241b90u: goto label_241b90;
        case 0x241b94u: goto label_241b94;
        case 0x241b98u: goto label_241b98;
        case 0x241b9cu: goto label_241b9c;
        case 0x241ba0u: goto label_241ba0;
        case 0x241ba4u: goto label_241ba4;
        case 0x241ba8u: goto label_241ba8;
        case 0x241bacu: goto label_241bac;
        case 0x241bb0u: goto label_241bb0;
        case 0x241bb4u: goto label_241bb4;
        case 0x241bb8u: goto label_241bb8;
        case 0x241bbcu: goto label_241bbc;
        case 0x241bc0u: goto label_241bc0;
        case 0x241bc4u: goto label_241bc4;
        case 0x241bc8u: goto label_241bc8;
        case 0x241bccu: goto label_241bcc;
        case 0x241bd0u: goto label_241bd0;
        case 0x241bd4u: goto label_241bd4;
        case 0x241bd8u: goto label_241bd8;
        case 0x241bdcu: goto label_241bdc;
        case 0x241be0u: goto label_241be0;
        case 0x241be4u: goto label_241be4;
        case 0x241be8u: goto label_241be8;
        case 0x241becu: goto label_241bec;
        case 0x241bf0u: goto label_241bf0;
        case 0x241bf4u: goto label_241bf4;
        case 0x241bf8u: goto label_241bf8;
        case 0x241bfcu: goto label_241bfc;
        case 0x241c00u: goto label_241c00;
        case 0x241c04u: goto label_241c04;
        case 0x241c08u: goto label_241c08;
        case 0x241c0cu: goto label_241c0c;
        case 0x241c10u: goto label_241c10;
        case 0x241c14u: goto label_241c14;
        case 0x241c18u: goto label_241c18;
        case 0x241c1cu: goto label_241c1c;
        case 0x241c20u: goto label_241c20;
        case 0x241c24u: goto label_241c24;
        case 0x241c28u: goto label_241c28;
        case 0x241c2cu: goto label_241c2c;
        case 0x241c30u: goto label_241c30;
        case 0x241c34u: goto label_241c34;
        case 0x241c38u: goto label_241c38;
        case 0x241c3cu: goto label_241c3c;
        case 0x241c40u: goto label_241c40;
        case 0x241c44u: goto label_241c44;
        case 0x241c48u: goto label_241c48;
        case 0x241c4cu: goto label_241c4c;
        case 0x241c50u: goto label_241c50;
        case 0x241c54u: goto label_241c54;
        case 0x241c58u: goto label_241c58;
        case 0x241c5cu: goto label_241c5c;
        case 0x241c60u: goto label_241c60;
        case 0x241c64u: goto label_241c64;
        case 0x241c68u: goto label_241c68;
        case 0x241c6cu: goto label_241c6c;
        case 0x241c70u: goto label_241c70;
        case 0x241c74u: goto label_241c74;
        case 0x241c78u: goto label_241c78;
        case 0x241c7cu: goto label_241c7c;
        case 0x241c80u: goto label_241c80;
        case 0x241c84u: goto label_241c84;
        case 0x241c88u: goto label_241c88;
        case 0x241c8cu: goto label_241c8c;
        case 0x241c90u: goto label_241c90;
        case 0x241c94u: goto label_241c94;
        case 0x241c98u: goto label_241c98;
        case 0x241c9cu: goto label_241c9c;
        case 0x241ca0u: goto label_241ca0;
        case 0x241ca4u: goto label_241ca4;
        case 0x241ca8u: goto label_241ca8;
        case 0x241cacu: goto label_241cac;
        case 0x241cb0u: goto label_241cb0;
        case 0x241cb4u: goto label_241cb4;
        case 0x241cb8u: goto label_241cb8;
        case 0x241cbcu: goto label_241cbc;
        case 0x241cc0u: goto label_241cc0;
        case 0x241cc4u: goto label_241cc4;
        case 0x241cc8u: goto label_241cc8;
        case 0x241cccu: goto label_241ccc;
        case 0x241cd0u: goto label_241cd0;
        case 0x241cd4u: goto label_241cd4;
        case 0x241cd8u: goto label_241cd8;
        case 0x241cdcu: goto label_241cdc;
        case 0x241ce0u: goto label_241ce0;
        case 0x241ce4u: goto label_241ce4;
        case 0x241ce8u: goto label_241ce8;
        case 0x241cecu: goto label_241cec;
        case 0x241cf0u: goto label_241cf0;
        case 0x241cf4u: goto label_241cf4;
        case 0x241cf8u: goto label_241cf8;
        case 0x241cfcu: goto label_241cfc;
        case 0x241d00u: goto label_241d00;
        case 0x241d04u: goto label_241d04;
        case 0x241d08u: goto label_241d08;
        case 0x241d0cu: goto label_241d0c;
        case 0x241d10u: goto label_241d10;
        case 0x241d14u: goto label_241d14;
        case 0x241d18u: goto label_241d18;
        case 0x241d1cu: goto label_241d1c;
        case 0x241d20u: goto label_241d20;
        case 0x241d24u: goto label_241d24;
        case 0x241d28u: goto label_241d28;
        case 0x241d2cu: goto label_241d2c;
        case 0x241d30u: goto label_241d30;
        case 0x241d34u: goto label_241d34;
        case 0x241d38u: goto label_241d38;
        case 0x241d3cu: goto label_241d3c;
        case 0x241d40u: goto label_241d40;
        case 0x241d44u: goto label_241d44;
        case 0x241d48u: goto label_241d48;
        case 0x241d4cu: goto label_241d4c;
        case 0x241d50u: goto label_241d50;
        case 0x241d54u: goto label_241d54;
        case 0x241d58u: goto label_241d58;
        case 0x241d5cu: goto label_241d5c;
        case 0x241d60u: goto label_241d60;
        case 0x241d64u: goto label_241d64;
        case 0x241d68u: goto label_241d68;
        case 0x241d6cu: goto label_241d6c;
        case 0x241d70u: goto label_241d70;
        case 0x241d74u: goto label_241d74;
        case 0x241d78u: goto label_241d78;
        case 0x241d7cu: goto label_241d7c;
        case 0x241d80u: goto label_241d80;
        case 0x241d84u: goto label_241d84;
        case 0x241d88u: goto label_241d88;
        case 0x241d8cu: goto label_241d8c;
        case 0x241d90u: goto label_241d90;
        case 0x241d94u: goto label_241d94;
        case 0x241d98u: goto label_241d98;
        case 0x241d9cu: goto label_241d9c;
        case 0x241da0u: goto label_241da0;
        case 0x241da4u: goto label_241da4;
        case 0x241da8u: goto label_241da8;
        case 0x241dacu: goto label_241dac;
        case 0x241db0u: goto label_241db0;
        case 0x241db4u: goto label_241db4;
        case 0x241db8u: goto label_241db8;
        case 0x241dbcu: goto label_241dbc;
        case 0x241dc0u: goto label_241dc0;
        case 0x241dc4u: goto label_241dc4;
        case 0x241dc8u: goto label_241dc8;
        case 0x241dccu: goto label_241dcc;
        case 0x241dd0u: goto label_241dd0;
        case 0x241dd4u: goto label_241dd4;
        case 0x241dd8u: goto label_241dd8;
        case 0x241ddcu: goto label_241ddc;
        case 0x241de0u: goto label_241de0;
        case 0x241de4u: goto label_241de4;
        case 0x241de8u: goto label_241de8;
        case 0x241decu: goto label_241dec;
        case 0x241df0u: goto label_241df0;
        case 0x241df4u: goto label_241df4;
        case 0x241df8u: goto label_241df8;
        case 0x241dfcu: goto label_241dfc;
        case 0x241e00u: goto label_241e00;
        case 0x241e04u: goto label_241e04;
        case 0x241e08u: goto label_241e08;
        case 0x241e0cu: goto label_241e0c;
        case 0x241e10u: goto label_241e10;
        case 0x241e14u: goto label_241e14;
        case 0x241e18u: goto label_241e18;
        case 0x241e1cu: goto label_241e1c;
        case 0x241e20u: goto label_241e20;
        case 0x241e24u: goto label_241e24;
        case 0x241e28u: goto label_241e28;
        case 0x241e2cu: goto label_241e2c;
        case 0x241e30u: goto label_241e30;
        case 0x241e34u: goto label_241e34;
        case 0x241e38u: goto label_241e38;
        case 0x241e3cu: goto label_241e3c;
        case 0x241e40u: goto label_241e40;
        case 0x241e44u: goto label_241e44;
        case 0x241e48u: goto label_241e48;
        case 0x241e4cu: goto label_241e4c;
        case 0x241e50u: goto label_241e50;
        case 0x241e54u: goto label_241e54;
        case 0x241e58u: goto label_241e58;
        case 0x241e5cu: goto label_241e5c;
        case 0x241e60u: goto label_241e60;
        case 0x241e64u: goto label_241e64;
        case 0x241e68u: goto label_241e68;
        case 0x241e6cu: goto label_241e6c;
        case 0x241e70u: goto label_241e70;
        case 0x241e74u: goto label_241e74;
        case 0x241e78u: goto label_241e78;
        case 0x241e7cu: goto label_241e7c;
        case 0x241e80u: goto label_241e80;
        case 0x241e84u: goto label_241e84;
        case 0x241e88u: goto label_241e88;
        case 0x241e8cu: goto label_241e8c;
        case 0x241e90u: goto label_241e90;
        case 0x241e94u: goto label_241e94;
        case 0x241e98u: goto label_241e98;
        case 0x241e9cu: goto label_241e9c;
        case 0x241ea0u: goto label_241ea0;
        case 0x241ea4u: goto label_241ea4;
        case 0x241ea8u: goto label_241ea8;
        case 0x241eacu: goto label_241eac;
        case 0x241eb0u: goto label_241eb0;
        case 0x241eb4u: goto label_241eb4;
        case 0x241eb8u: goto label_241eb8;
        case 0x241ebcu: goto label_241ebc;
        case 0x241ec0u: goto label_241ec0;
        case 0x241ec4u: goto label_241ec4;
        case 0x241ec8u: goto label_241ec8;
        case 0x241eccu: goto label_241ecc;
        case 0x241ed0u: goto label_241ed0;
        case 0x241ed4u: goto label_241ed4;
        case 0x241ed8u: goto label_241ed8;
        case 0x241edcu: goto label_241edc;
        case 0x241ee0u: goto label_241ee0;
        case 0x241ee4u: goto label_241ee4;
        case 0x241ee8u: goto label_241ee8;
        case 0x241eecu: goto label_241eec;
        case 0x241ef0u: goto label_241ef0;
        case 0x241ef4u: goto label_241ef4;
        case 0x241ef8u: goto label_241ef8;
        case 0x241efcu: goto label_241efc;
        case 0x241f00u: goto label_241f00;
        case 0x241f04u: goto label_241f04;
        case 0x241f08u: goto label_241f08;
        case 0x241f0cu: goto label_241f0c;
        case 0x241f10u: goto label_241f10;
        case 0x241f14u: goto label_241f14;
        case 0x241f18u: goto label_241f18;
        case 0x241f1cu: goto label_241f1c;
        case 0x241f20u: goto label_241f20;
        case 0x241f24u: goto label_241f24;
        case 0x241f28u: goto label_241f28;
        case 0x241f2cu: goto label_241f2c;
        case 0x241f30u: goto label_241f30;
        case 0x241f34u: goto label_241f34;
        case 0x241f38u: goto label_241f38;
        case 0x241f3cu: goto label_241f3c;
        case 0x241f40u: goto label_241f40;
        case 0x241f44u: goto label_241f44;
        case 0x241f48u: goto label_241f48;
        case 0x241f4cu: goto label_241f4c;
        case 0x241f50u: goto label_241f50;
        case 0x241f54u: goto label_241f54;
        case 0x241f58u: goto label_241f58;
        case 0x241f5cu: goto label_241f5c;
        case 0x241f60u: goto label_241f60;
        case 0x241f64u: goto label_241f64;
        case 0x241f68u: goto label_241f68;
        case 0x241f6cu: goto label_241f6c;
        case 0x241f70u: goto label_241f70;
        case 0x241f74u: goto label_241f74;
        case 0x241f78u: goto label_241f78;
        case 0x241f7cu: goto label_241f7c;
        case 0x241f80u: goto label_241f80;
        case 0x241f84u: goto label_241f84;
        case 0x241f88u: goto label_241f88;
        case 0x241f8cu: goto label_241f8c;
        case 0x241f90u: goto label_241f90;
        case 0x241f94u: goto label_241f94;
        case 0x241f98u: goto label_241f98;
        case 0x241f9cu: goto label_241f9c;
        case 0x241fa0u: goto label_241fa0;
        case 0x241fa4u: goto label_241fa4;
        case 0x241fa8u: goto label_241fa8;
        case 0x241facu: goto label_241fac;
        case 0x241fb0u: goto label_241fb0;
        case 0x241fb4u: goto label_241fb4;
        case 0x241fb8u: goto label_241fb8;
        case 0x241fbcu: goto label_241fbc;
        case 0x241fc0u: goto label_241fc0;
        case 0x241fc4u: goto label_241fc4;
        case 0x241fc8u: goto label_241fc8;
        case 0x241fccu: goto label_241fcc;
        case 0x241fd0u: goto label_241fd0;
        case 0x241fd4u: goto label_241fd4;
        case 0x241fd8u: goto label_241fd8;
        case 0x241fdcu: goto label_241fdc;
        case 0x241fe0u: goto label_241fe0;
        case 0x241fe4u: goto label_241fe4;
        case 0x241fe8u: goto label_241fe8;
        case 0x241fecu: goto label_241fec;
        case 0x241ff0u: goto label_241ff0;
        case 0x241ff4u: goto label_241ff4;
        case 0x241ff8u: goto label_241ff8;
        case 0x241ffcu: goto label_241ffc;
        case 0x242000u: goto label_242000;
        case 0x242004u: goto label_242004;
        case 0x242008u: goto label_242008;
        case 0x24200cu: goto label_24200c;
        case 0x242010u: goto label_242010;
        case 0x242014u: goto label_242014;
        case 0x242018u: goto label_242018;
        case 0x24201cu: goto label_24201c;
        case 0x242020u: goto label_242020;
        case 0x242024u: goto label_242024;
        case 0x242028u: goto label_242028;
        case 0x24202cu: goto label_24202c;
        case 0x242030u: goto label_242030;
        case 0x242034u: goto label_242034;
        case 0x242038u: goto label_242038;
        case 0x24203cu: goto label_24203c;
        case 0x242040u: goto label_242040;
        case 0x242044u: goto label_242044;
        case 0x242048u: goto label_242048;
        case 0x24204cu: goto label_24204c;
        case 0x242050u: goto label_242050;
        case 0x242054u: goto label_242054;
        case 0x242058u: goto label_242058;
        case 0x24205cu: goto label_24205c;
        case 0x242060u: goto label_242060;
        case 0x242064u: goto label_242064;
        case 0x242068u: goto label_242068;
        case 0x24206cu: goto label_24206c;
        case 0x242070u: goto label_242070;
        case 0x242074u: goto label_242074;
        case 0x242078u: goto label_242078;
        case 0x24207cu: goto label_24207c;
        case 0x242080u: goto label_242080;
        case 0x242084u: goto label_242084;
        case 0x242088u: goto label_242088;
        case 0x24208cu: goto label_24208c;
        case 0x242090u: goto label_242090;
        case 0x242094u: goto label_242094;
        case 0x242098u: goto label_242098;
        case 0x24209cu: goto label_24209c;
        case 0x2420a0u: goto label_2420a0;
        case 0x2420a4u: goto label_2420a4;
        case 0x2420a8u: goto label_2420a8;
        case 0x2420acu: goto label_2420ac;
        case 0x2420b0u: goto label_2420b0;
        case 0x2420b4u: goto label_2420b4;
        case 0x2420b8u: goto label_2420b8;
        case 0x2420bcu: goto label_2420bc;
        case 0x2420c0u: goto label_2420c0;
        case 0x2420c4u: goto label_2420c4;
        case 0x2420c8u: goto label_2420c8;
        case 0x2420ccu: goto label_2420cc;
        case 0x2420d0u: goto label_2420d0;
        case 0x2420d4u: goto label_2420d4;
        case 0x2420d8u: goto label_2420d8;
        case 0x2420dcu: goto label_2420dc;
        case 0x2420e0u: goto label_2420e0;
        case 0x2420e4u: goto label_2420e4;
        case 0x2420e8u: goto label_2420e8;
        case 0x2420ecu: goto label_2420ec;
        case 0x2420f0u: goto label_2420f0;
        case 0x2420f4u: goto label_2420f4;
        case 0x2420f8u: goto label_2420f8;
        case 0x2420fcu: goto label_2420fc;
        case 0x242100u: goto label_242100;
        case 0x242104u: goto label_242104;
        case 0x242108u: goto label_242108;
        case 0x24210cu: goto label_24210c;
        case 0x242110u: goto label_242110;
        case 0x242114u: goto label_242114;
        case 0x242118u: goto label_242118;
        case 0x24211cu: goto label_24211c;
        case 0x242120u: goto label_242120;
        case 0x242124u: goto label_242124;
        case 0x242128u: goto label_242128;
        case 0x24212cu: goto label_24212c;
        case 0x242130u: goto label_242130;
        case 0x242134u: goto label_242134;
        case 0x242138u: goto label_242138;
        case 0x24213cu: goto label_24213c;
        case 0x242140u: goto label_242140;
        case 0x242144u: goto label_242144;
        case 0x242148u: goto label_242148;
        case 0x24214cu: goto label_24214c;
        case 0x242150u: goto label_242150;
        case 0x242154u: goto label_242154;
        case 0x242158u: goto label_242158;
        case 0x24215cu: goto label_24215c;
        case 0x242160u: goto label_242160;
        case 0x242164u: goto label_242164;
        case 0x242168u: goto label_242168;
        case 0x24216cu: goto label_24216c;
        case 0x242170u: goto label_242170;
        case 0x242174u: goto label_242174;
        case 0x242178u: goto label_242178;
        case 0x24217cu: goto label_24217c;
        case 0x242180u: goto label_242180;
        case 0x242184u: goto label_242184;
        case 0x242188u: goto label_242188;
        case 0x24218cu: goto label_24218c;
        case 0x242190u: goto label_242190;
        case 0x242194u: goto label_242194;
        case 0x242198u: goto label_242198;
        case 0x24219cu: goto label_24219c;
        case 0x2421a0u: goto label_2421a0;
        case 0x2421a4u: goto label_2421a4;
        case 0x2421a8u: goto label_2421a8;
        case 0x2421acu: goto label_2421ac;
        case 0x2421b0u: goto label_2421b0;
        case 0x2421b4u: goto label_2421b4;
        case 0x2421b8u: goto label_2421b8;
        case 0x2421bcu: goto label_2421bc;
        case 0x2421c0u: goto label_2421c0;
        case 0x2421c4u: goto label_2421c4;
        case 0x2421c8u: goto label_2421c8;
        case 0x2421ccu: goto label_2421cc;
        case 0x2421d0u: goto label_2421d0;
        case 0x2421d4u: goto label_2421d4;
        case 0x2421d8u: goto label_2421d8;
        case 0x2421dcu: goto label_2421dc;
        case 0x2421e0u: goto label_2421e0;
        case 0x2421e4u: goto label_2421e4;
        case 0x2421e8u: goto label_2421e8;
        case 0x2421ecu: goto label_2421ec;
        case 0x2421f0u: goto label_2421f0;
        case 0x2421f4u: goto label_2421f4;
        case 0x2421f8u: goto label_2421f8;
        case 0x2421fcu: goto label_2421fc;
        case 0x242200u: goto label_242200;
        case 0x242204u: goto label_242204;
        case 0x242208u: goto label_242208;
        case 0x24220cu: goto label_24220c;
        case 0x242210u: goto label_242210;
        case 0x242214u: goto label_242214;
        case 0x242218u: goto label_242218;
        case 0x24221cu: goto label_24221c;
        case 0x242220u: goto label_242220;
        case 0x242224u: goto label_242224;
        case 0x242228u: goto label_242228;
        case 0x24222cu: goto label_24222c;
        case 0x242230u: goto label_242230;
        case 0x242234u: goto label_242234;
        case 0x242238u: goto label_242238;
        case 0x24223cu: goto label_24223c;
        case 0x242240u: goto label_242240;
        case 0x242244u: goto label_242244;
        case 0x242248u: goto label_242248;
        case 0x24224cu: goto label_24224c;
        case 0x242250u: goto label_242250;
        case 0x242254u: goto label_242254;
        case 0x242258u: goto label_242258;
        case 0x24225cu: goto label_24225c;
        case 0x242260u: goto label_242260;
        case 0x242264u: goto label_242264;
        case 0x242268u: goto label_242268;
        case 0x24226cu: goto label_24226c;
        case 0x242270u: goto label_242270;
        case 0x242274u: goto label_242274;
        case 0x242278u: goto label_242278;
        case 0x24227cu: goto label_24227c;
        case 0x242280u: goto label_242280;
        case 0x242284u: goto label_242284;
        case 0x242288u: goto label_242288;
        case 0x24228cu: goto label_24228c;
        case 0x242290u: goto label_242290;
        case 0x242294u: goto label_242294;
        case 0x242298u: goto label_242298;
        case 0x24229cu: goto label_24229c;
        case 0x2422a0u: goto label_2422a0;
        case 0x2422a4u: goto label_2422a4;
        case 0x2422a8u: goto label_2422a8;
        case 0x2422acu: goto label_2422ac;
        case 0x2422b0u: goto label_2422b0;
        case 0x2422b4u: goto label_2422b4;
        case 0x2422b8u: goto label_2422b8;
        case 0x2422bcu: goto label_2422bc;
        case 0x2422c0u: goto label_2422c0;
        case 0x2422c4u: goto label_2422c4;
        case 0x2422c8u: goto label_2422c8;
        case 0x2422ccu: goto label_2422cc;
        case 0x2422d0u: goto label_2422d0;
        case 0x2422d4u: goto label_2422d4;
        case 0x2422d8u: goto label_2422d8;
        case 0x2422dcu: goto label_2422dc;
        case 0x2422e0u: goto label_2422e0;
        case 0x2422e4u: goto label_2422e4;
        case 0x2422e8u: goto label_2422e8;
        case 0x2422ecu: goto label_2422ec;
        case 0x2422f0u: goto label_2422f0;
        case 0x2422f4u: goto label_2422f4;
        case 0x2422f8u: goto label_2422f8;
        case 0x2422fcu: goto label_2422fc;
        case 0x242300u: goto label_242300;
        case 0x242304u: goto label_242304;
        case 0x242308u: goto label_242308;
        case 0x24230cu: goto label_24230c;
        case 0x242310u: goto label_242310;
        case 0x242314u: goto label_242314;
        case 0x242318u: goto label_242318;
        case 0x24231cu: goto label_24231c;
        case 0x242320u: goto label_242320;
        case 0x242324u: goto label_242324;
        case 0x242328u: goto label_242328;
        case 0x24232cu: goto label_24232c;
        case 0x242330u: goto label_242330;
        case 0x242334u: goto label_242334;
        case 0x242338u: goto label_242338;
        case 0x24233cu: goto label_24233c;
        case 0x242340u: goto label_242340;
        case 0x242344u: goto label_242344;
        case 0x242348u: goto label_242348;
        case 0x24234cu: goto label_24234c;
        case 0x242350u: goto label_242350;
        case 0x242354u: goto label_242354;
        case 0x242358u: goto label_242358;
        case 0x24235cu: goto label_24235c;
        case 0x242360u: goto label_242360;
        case 0x242364u: goto label_242364;
        case 0x242368u: goto label_242368;
        case 0x24236cu: goto label_24236c;
        case 0x242370u: goto label_242370;
        case 0x242374u: goto label_242374;
        case 0x242378u: goto label_242378;
        default: break;
    }

    ctx->pc = 0x2417e0u;

label_2417e0:
    // 0x2417e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2417e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2417e4:
    // 0x2417e4: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x2417e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
label_2417e8:
    // 0x2417e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2417e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2417ec:
    // 0x2417ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2417ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2417f0:
    // 0x2417f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2417f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2417f4:
    // 0x2417f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2417f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2417f8:
    // 0x2417f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2417f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2417fc:
    // 0x2417fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2417fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_241800:
    // 0x241800: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x241800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
label_241804:
    // 0x241804: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x241804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_241808:
    // 0x241808: 0x24550080  addiu       $s5, $v0, 0x80
    ctx->pc = 0x241808u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_24180c:
    // 0x24180c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x24180cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241810:
    // 0x241810: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x241810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_241814:
    // 0x241814: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x241814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_241818:
    // 0x241818: 0x3123c  dsll32      $v0, $v1, 8
    ctx->pc = 0x241818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 8));
label_24181c:
    // 0x24181c: 0x2123e  dsrl32      $v0, $v0, 8
    ctx->pc = 0x24181cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 8));
label_241820:
    // 0x241820: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x241820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
label_241824:
    // 0x241824: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x241824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241828:
    // 0x241828: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x241828u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_24182c:
    // 0x24182c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x24182cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241830:
    // 0x241830: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x241830u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_241834:
    // 0x241834: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x241834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_241838:
    // 0x241838: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x241838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24183c:
    // 0x24183c: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x24183cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
label_241840:
    // 0x241840: 0x24c2b310  addiu       $v0, $a2, -0x4CF0
    ctx->pc = 0x241840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947600));
label_241844:
    // 0x241844: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x241844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_241848:
    // 0x241848: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x241848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24184c:
    // 0x24184c: 0x40f809  jalr        $v0
label_241850:
    if (ctx->pc == 0x241850u) {
        ctx->pc = 0x241854u;
        goto label_241854;
    }
    ctx->pc = 0x24184Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x241854u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24184Cu, 0x241854u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x241854u;
label_241854:
    // 0x241854: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x241854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241858:
    // 0x241858: 0xc0924c4  jal         func_249310
label_24185c:
    if (ctx->pc == 0x24185Cu) {
        ctx->pc = 0x241860u;
        goto label_241860;
    }
    ctx->pc = 0x241858u;
    SET_GPR_U32(ctx, 31, 0x241860u);
    ctx->pc = 0x249310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249310u, 0x241858u, 0x241860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241860u;
label_241860:
    // 0x241860: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x241860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241864:
    // 0x241864: 0xc092b10  jal         func_24AC40
label_241868:
    if (ctx->pc == 0x241868u) {
        ctx->pc = 0x24186Cu;
        goto label_24186c;
    }
    ctx->pc = 0x241864u;
    SET_GPR_U32(ctx, 31, 0x24186Cu);
    ctx->pc = 0x24AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AC40u, 0x241864u, 0x24186Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24186Cu;
label_24186c:
    // 0x24186c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x24186cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241870:
    // 0x241870: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x241870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_241874:
    // 0x241874: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x241874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_241878:
    // 0x241878: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x241878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_24187c:
    // 0x24187c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_241880:
    if (ctx->pc == 0x241880u) {
        ctx->pc = 0x241884u;
        goto label_241884;
    }
    ctx->pc = 0x24187Cu;
    {
        const bool branch_taken_0x24187c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24187c) {
            ctx->pc = 0x2418B4u;
            goto label_2418b4;
        }
    }
    ctx->pc = 0x241884u;
label_241884:
    // 0x241884: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241888:
    // 0x241888: 0x24541330  addiu       $s4, $v0, 0x1330
    ctx->pc = 0x241888u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_24188c:
    // 0x24188c: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x24188cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_241890:
    // 0x241890: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241894:
    // 0x241894: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x241894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_241898:
    // 0x241898: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x241898u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_24189c:
    // 0x24189c: 0xc058fec  jal         func_163FB0
label_2418a0:
    if (ctx->pc == 0x2418A0u) {
        ctx->pc = 0x2418A4u;
        goto label_2418a4;
    }
    ctx->pc = 0x24189Cu;
    SET_GPR_U32(ctx, 31, 0x2418A4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x24189Cu, 0x2418A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2418A4u;
label_2418a4:
    // 0x2418a4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2418a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2418a8:
    // 0x2418a8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2418a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2418ac:
    // 0x2418ac: 0xc05cd78  jal         func_1735E0
label_2418b0:
    if (ctx->pc == 0x2418B0u) {
        ctx->pc = 0x2418B4u;
        goto label_2418b4;
    }
    ctx->pc = 0x2418ACu;
    SET_GPR_U32(ctx, 31, 0x2418B4u);
    ctx->pc = 0x1735E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1735E0u, 0x2418ACu, 0x2418B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2418B4u;
label_2418b4:
    // 0x2418b4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2418b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2418b8:
    // 0x2418b8: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x2418b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2418bc:
    // 0x2418bc: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x2418bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_2418c0:
    // 0x2418c0: 0x30440040  andi        $a0, $v0, 0x40
    ctx->pc = 0x2418c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_2418c4:
    // 0x2418c4: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_2418c8:
    if (ctx->pc == 0x2418C8u) {
        ctx->pc = 0x2418CCu;
        goto label_2418cc;
    }
    ctx->pc = 0x2418C4u;
    {
        const bool branch_taken_0x2418c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2418c4) {
            ctx->pc = 0x2418DCu;
            goto label_2418dc;
        }
    }
    ctx->pc = 0x2418CCu;
label_2418cc:
    // 0x2418cc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2418ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2418d0:
    // 0x2418d0: 0x244410b0  addiu       $a0, $v0, 0x10B0
    ctx->pc = 0x2418d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
label_2418d4:
    // 0x2418d4: 0xc0624b4  jal         func_1892D0
label_2418d8:
    if (ctx->pc == 0x2418D8u) {
        ctx->pc = 0x2418DCu;
        goto label_2418dc;
    }
    ctx->pc = 0x2418D4u;
    SET_GPR_U32(ctx, 31, 0x2418DCu);
    ctx->pc = 0x1892D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892D0u, 0x2418D4u, 0x2418DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2418DCu;
label_2418dc:
    // 0x2418dc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2418dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2418e0:
    // 0x2418e0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2418e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2418e4:
    // 0x2418e4: 0x90620073  lbu         $v0, 0x73($v1)
    ctx->pc = 0x2418e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 115)));
label_2418e8:
    // 0x2418e8: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x2418e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2418ec:
    // 0x2418ec: 0xa0640073  sb          $a0, 0x73($v1)
    ctx->pc = 0x2418ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 115), (uint8_t)GPR_U32(ctx, 4));
label_2418f0:
    // 0x2418f0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2418f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2418f4:
    // 0x2418f4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2418f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2418f8:
    // 0x2418f8: 0x90620073  lbu         $v0, 0x73($v1)
    ctx->pc = 0x2418f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 115)));
label_2418fc:
    // 0x2418fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2418fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_241900:
    // 0x241900: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x241900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_241904:
    // 0x241904: 0x10a0005c  beqz        $a1, . + 4 + (0x5C << 2)
label_241908:
    if (ctx->pc == 0x241908u) {
        ctx->pc = 0x24190Cu;
        goto label_24190c;
    }
    ctx->pc = 0x241904u;
    {
        const bool branch_taken_0x241904 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x241904) {
            ctx->pc = 0x241A78u;
            goto label_241a78;
        }
    }
    ctx->pc = 0x24190Cu;
label_24190c:
    // 0x24190c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x24190cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241910:
    // 0x241910: 0x848610a6  lh          $a2, 0x10A6($a0)
    ctx->pc = 0x241910u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
label_241914:
    // 0x241914: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x241914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
label_241918:
    // 0x241918: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x241918u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_24191c:
    // 0x24191c: 0x4400056  bltz        $v0, . + 4 + (0x56 << 2)
label_241920:
    if (ctx->pc == 0x241920u) {
        ctx->pc = 0x241924u;
        goto label_241924;
    }
    ctx->pc = 0x24191Cu;
    {
        const bool branch_taken_0x24191c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x24191c) {
            ctx->pc = 0x241A78u;
            goto label_241a78;
        }
    }
    ctx->pc = 0x241924u;
label_241924:
    // 0x241924: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x241924u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_241928:
    // 0x241928: 0x0  nop
    ctx->pc = 0x241928u;
    // NOP
label_24192c:
    // 0x24192c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x24192cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_241930:
    // 0x241930: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x241930u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_241934:
    // 0x241934: 0x0  nop
    ctx->pc = 0x241934u;
    // NOP
label_241938:
    // 0x241938: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x241938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_24193c:
    // 0x24193c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24193cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_241940:
    // 0x241940: 0x0  nop
    ctx->pc = 0x241940u;
    // NOP
label_241944:
    // 0x241944: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x241944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_241948:
    // 0x241948: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x241948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_24194c:
    // 0x24194c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24194cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_241950:
    // 0x241950: 0x0  nop
    ctx->pc = 0x241950u;
    // NOP
label_241954:
    // 0x241954: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x241954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_241958:
    // 0x241958: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x241958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_24195c:
    // 0x24195c: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x24195cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_241960:
    // 0x241960: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x241960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_241964:
    // 0x241964: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x241964u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
label_241968:
    // 0x241968: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x241968u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
label_24196c:
    // 0x24196c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24196cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_241970:
    // 0x241970: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x241970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_241974:
    // 0x241974: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x241974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_241978:
    // 0x241978: 0x2223824  and         $a3, $s1, $v0
    ctx->pc = 0x241978u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_24197c:
    // 0x24197c: 0x24040e13  addiu       $a0, $zero, 0xE13
    ctx->pc = 0x24197cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3603));
label_241980:
    // 0x241980: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x241980u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_241984:
    // 0x241984: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x241984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_241988:
    // 0x241988: 0xc062f5c  jal         func_18BD70
label_24198c:
    if (ctx->pc == 0x24198Cu) {
        ctx->pc = 0x241990u;
        goto label_241990;
    }
    ctx->pc = 0x241988u;
    SET_GPR_U32(ctx, 31, 0x241990u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x241988u, 0x241990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241990u;
label_241990:
    // 0x241990: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x241990u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_241994:
    // 0x241994: 0xc0630a8  jal         func_18C2A0
label_241998:
    if (ctx->pc == 0x241998u) {
        ctx->pc = 0x24199Cu;
        goto label_24199c;
    }
    ctx->pc = 0x241994u;
    SET_GPR_U32(ctx, 31, 0x24199Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x241994u, 0x24199Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24199Cu;
label_24199c:
    // 0x24199c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24199cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2419a0:
    // 0x2419a0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2419a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2419a4:
    // 0x2419a4: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x2419a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_2419a8:
    // 0x2419a8: 0x24620280  addiu       $v0, $v1, 0x280
    ctx->pc = 0x2419a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 640));
label_2419ac:
    // 0x2419ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2419acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2419b0:
    // 0x2419b0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2419b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2419b4:
    // 0x2419b4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2419b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2419b8:
    // 0x2419b8: 0x52438  dsll        $a0, $a1, 16
    ctx->pc = 0x2419b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << 16);
label_2419bc:
    // 0x2419bc: 0x3486ffff  ori         $a2, $a0, 0xFFFF
    ctx->pc = 0x2419bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2419c0:
    // 0x2419c0: 0x463824  and         $a3, $v0, $a2
    ctx->pc = 0x2419c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_2419c4:
    // 0x2419c4: 0x24040e13  addiu       $a0, $zero, 0xE13
    ctx->pc = 0x2419c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3603));
label_2419c8:
    // 0x2419c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2419c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2419cc:
    // 0x2419cc: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2419ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2419d0:
    // 0x2419d0: 0xc062f5c  jal         func_18BD70
label_2419d4:
    if (ctx->pc == 0x2419D4u) {
        ctx->pc = 0x2419D8u;
        goto label_2419d8;
    }
    ctx->pc = 0x2419D0u;
    SET_GPR_U32(ctx, 31, 0x2419D8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2419D0u, 0x2419D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2419D8u;
label_2419d8:
    // 0x2419d8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2419d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2419dc:
    // 0x2419dc: 0xc0630a8  jal         func_18C2A0
label_2419e0:
    if (ctx->pc == 0x2419E0u) {
        ctx->pc = 0x2419E4u;
        goto label_2419e4;
    }
    ctx->pc = 0x2419DCu;
    SET_GPR_U32(ctx, 31, 0x2419E4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2419DCu, 0x2419E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2419E4u;
label_2419e4:
    // 0x2419e4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2419e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2419e8:
    // 0x2419e8: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x2419e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_2419ec:
    // 0x2419ec: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x2419ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_2419f0:
    // 0x2419f0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2419f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_2419f4:
    // 0x2419f4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2419f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_2419f8:
    // 0x2419f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2419f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2419fc:
    // 0x2419fc: 0x22c38  dsll        $a1, $v0, 16
    ctx->pc = 0x2419fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 16);
label_241a00:
    // 0x241a00: 0x34a6ffff  ori         $a2, $a1, 0xFFFF
    ctx->pc = 0x241a00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_241a04:
    // 0x241a04: 0x863824  and         $a3, $a0, $a2
    ctx->pc = 0x241a04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_241a08:
    // 0x241a08: 0x24080e15  addiu       $t0, $zero, 0xE15
    ctx->pc = 0x241a08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3605));
label_241a0c:
    // 0x241a0c: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x241a0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_241a10:
    // 0x241a10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x241a10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_241a14:
    // 0x241a14: 0x27a90090  addiu       $t1, $sp, 0x90
    ctx->pc = 0x241a14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_241a18:
    // 0x241a18: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x241a18u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_241a1c:
    // 0x241a1c: 0xc062f5c  jal         func_18BD70
label_241a20:
    if (ctx->pc == 0x241A20u) {
        ctx->pc = 0x241A24u;
        goto label_241a24;
    }
    ctx->pc = 0x241A1Cu;
    SET_GPR_U32(ctx, 31, 0x241A24u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x241A1Cu, 0x241A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241A24u;
label_241a24:
    // 0x241a24: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x241a24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_241a28:
    // 0x241a28: 0xc0630a8  jal         func_18C2A0
label_241a2c:
    if (ctx->pc == 0x241A2Cu) {
        ctx->pc = 0x241A30u;
        goto label_241a30;
    }
    ctx->pc = 0x241A28u;
    SET_GPR_U32(ctx, 31, 0x241A30u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x241A28u, 0x241A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241A30u;
label_241a30:
    // 0x241a30: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x241a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241a34:
    // 0x241a34: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x241a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_241a38:
    // 0x241a38: 0x24420280  addiu       $v0, $v0, 0x280
    ctx->pc = 0x241a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
label_241a3c:
    // 0x241a3c: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x241a3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
label_241a40:
    // 0x241a40: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x241a40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
label_241a44:
    // 0x241a44: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x241a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_241a48:
    // 0x241a48: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x241a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
label_241a4c:
    // 0x241a4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x241a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_241a50:
    // 0x241a50: 0x2023824  and         $a3, $s0, $v0
    ctx->pc = 0x241a50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_241a54:
    // 0x241a54: 0x24040e15  addiu       $a0, $zero, 0xE15
    ctx->pc = 0x241a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3605));
label_241a58:
    // 0x241a58: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x241a58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_241a5c:
    // 0x241a5c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x241a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_241a60:
    // 0x241a60: 0xc062f5c  jal         func_18BD70
label_241a64:
    if (ctx->pc == 0x241A64u) {
        ctx->pc = 0x241A68u;
        goto label_241a68;
    }
    ctx->pc = 0x241A60u;
    SET_GPR_U32(ctx, 31, 0x241A68u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x241A60u, 0x241A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241A68u;
label_241a68:
    // 0x241a68: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x241a68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_241a6c:
    // 0x241a6c: 0xc0630a8  jal         func_18C2A0
label_241a70:
    if (ctx->pc == 0x241A70u) {
        ctx->pc = 0x241A74u;
        goto label_241a74;
    }
    ctx->pc = 0x241A6Cu;
    SET_GPR_U32(ctx, 31, 0x241A74u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x241A6Cu, 0x241A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241A74u;
label_241a74:
    // 0x241a74: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x241a74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_241a78:
    // 0x241a78: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x241a78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241a7c:
    // 0x241a7c: 0x8cc20058  lw          $v0, 0x58($a2)
    ctx->pc = 0x241a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
label_241a80:
    // 0x241a80: 0x24520120  addiu       $s2, $v0, 0x120
    ctx->pc = 0x241a80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_241a84:
    // 0x241a84: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x241a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241a88:
    // 0x241a88: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x241a88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_241a8c:
    // 0x241a8c: 0xc079140  jal         func_1E4500
label_241a90:
    if (ctx->pc == 0x241A90u) {
        ctx->pc = 0x241A94u;
        goto label_241a94;
    }
    ctx->pc = 0x241A8Cu;
    SET_GPR_U32(ctx, 31, 0x241A94u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x241A8Cu, 0x241A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241A94u;
label_241a94:
    // 0x241a94: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241a98:
    // 0x241a98: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x241a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_241a9c:
    // 0x241a9c: 0x245201b0  addiu       $s2, $v0, 0x1B0
    ctx->pc = 0x241a9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
label_241aa0:
    // 0x241aa0: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x241aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241aa4:
    // 0x241aa4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x241aa4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_241aa8:
    // 0x241aa8: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x241aa8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_241aac:
    // 0x241aac: 0xc079140  jal         func_1E4500
label_241ab0:
    if (ctx->pc == 0x241AB0u) {
        ctx->pc = 0x241AB4u;
        goto label_241ab4;
    }
    ctx->pc = 0x241AACu;
    SET_GPR_U32(ctx, 31, 0x241AB4u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x241AACu, 0x241AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241AB4u;
label_241ab4:
    // 0x241ab4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241ab8:
    // 0x241ab8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x241ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_241abc:
    // 0x241abc: 0x245203f0  addiu       $s2, $v0, 0x3F0
    ctx->pc = 0x241abcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
label_241ac0:
    // 0x241ac0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x241ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241ac4:
    // 0x241ac4: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x241ac4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_241ac8:
    // 0x241ac8: 0xc079140  jal         func_1E4500
label_241acc:
    if (ctx->pc == 0x241ACCu) {
        ctx->pc = 0x241AD0u;
        goto label_241ad0;
    }
    ctx->pc = 0x241AC8u;
    SET_GPR_U32(ctx, 31, 0x241AD0u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x241AC8u, 0x241AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241AD0u;
label_241ad0:
    // 0x241ad0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x241ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241ad4:
    // 0x241ad4: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x241ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_241ad8:
    // 0x241ad8: 0x24b205a0  addiu       $s2, $a1, 0x5A0
    ctx->pc = 0x241ad8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1440));
label_241adc:
    // 0x241adc: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x241adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241ae0:
    // 0x241ae0: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x241ae0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_241ae4:
    // 0x241ae4: 0xc079140  jal         func_1E4500
label_241ae8:
    if (ctx->pc == 0x241AE8u) {
        ctx->pc = 0x241AECu;
        goto label_241aec;
    }
    ctx->pc = 0x241AE4u;
    SET_GPR_U32(ctx, 31, 0x241AECu);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x241AE4u, 0x241AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241AECu;
label_241aec:
    // 0x241aec: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241af0:
    // 0x241af0: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x241af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_241af4:
    // 0x241af4: 0x24920480  addiu       $s2, $a0, 0x480
    ctx->pc = 0x241af4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_241af8:
    // 0x241af8: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x241af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241afc:
    // 0x241afc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x241afcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_241b00:
    // 0x241b00: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x241b00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_241b04:
    // 0x241b04: 0xc079140  jal         func_1E4500
label_241b08:
    if (ctx->pc == 0x241B08u) {
        ctx->pc = 0x241B0Cu;
        goto label_241b0c;
    }
    ctx->pc = 0x241B04u;
    SET_GPR_U32(ctx, 31, 0x241B0Cu);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x241B04u, 0x241B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241B0Cu;
label_241b0c:
    // 0x241b0c: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x241b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241b10:
    // 0x241b10: 0x8ce80058  lw          $t0, 0x58($a3)
    ctx->pc = 0x241b10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
label_241b14:
    // 0x241b14: 0x25120510  addiu       $s2, $t0, 0x510
    ctx->pc = 0x241b14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), 1296));
label_241b18:
    // 0x241b18: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x241b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241b1c:
    // 0x241b1c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x241b1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_241b20:
    // 0x241b20: 0xc079140  jal         func_1E4500
label_241b24:
    if (ctx->pc == 0x241B24u) {
        ctx->pc = 0x241B28u;
        goto label_241b28;
    }
    ctx->pc = 0x241B20u;
    SET_GPR_U32(ctx, 31, 0x241B28u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x241B20u, 0x241B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241B28u;
label_241b28:
    // 0x241b28: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_241b2c:
    // 0x241b2c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x241b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_241b30:
    // 0x241b30: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x241b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_241b34:
    // 0x241b34: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241b38:
    // 0x241b38: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x241b38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_241b3c:
    // 0x241b3c: 0x8e140234  lw          $s4, 0x234($s0)
    ctx->pc = 0x241b3cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
label_241b40:
    // 0x241b40: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241b44:
    // 0x241b44: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x241b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_241b48:
    // 0x241b48: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x241b48u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_241b4c:
    // 0x241b4c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_241b50:
    // 0x241b50: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x241b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_241b54:
    // 0x241b54: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x241b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_241b58:
    // 0x241b58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x241b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_241b5c:
    // 0x241b5c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x241b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_241b60:
    // 0x241b60: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x241b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241b64:
    // 0x241b64: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x241b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_241b68:
    // 0x241b68: 0x24c40204  addiu       $a0, $a2, 0x204
    ctx->pc = 0x241b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 516));
label_241b6c:
    // 0x241b6c: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x241b6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_241b70:
    // 0x241b70: 0xc06b06c  jal         func_1AC1B0
label_241b74:
    if (ctx->pc == 0x241B74u) {
        ctx->pc = 0x241B78u;
        goto label_241b78;
    }
    ctx->pc = 0x241B70u;
    SET_GPR_U32(ctx, 31, 0x241B78u);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x241B70u, 0x241B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241B78u;
label_241b78:
    // 0x241b78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_241b7c:
    // 0x241b7c: 0x8c300140  lw          $s0, 0x140($at)
    ctx->pc = 0x241b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_241b80:
    // 0x241b80: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x241b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_241b84:
    // 0x241b84: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x241b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_241b88:
    // 0x241b88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x241b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_241b8c:
    // 0x241b8c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x241b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241b90:
    // 0x241b90: 0x823821  addu        $a3, $a0, $v0
    ctx->pc = 0x241b90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_241b94:
    // 0x241b94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_241b98:
    // 0x241b98: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x241b98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_241b9c:
    // 0x241b9c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x241b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_241ba0:
    // 0x241ba0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x241ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241ba4:
    // 0x241ba4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x241ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_241ba8:
    // 0x241ba8: 0x8c450244  lw          $a1, 0x244($v0)
    ctx->pc = 0x241ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
label_241bac:
    // 0x241bac: 0x24e40204  addiu       $a0, $a3, 0x204
    ctx->pc = 0x241bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 516));
label_241bb0:
    // 0x241bb0: 0x24060150  addiu       $a2, $zero, 0x150
    ctx->pc = 0x241bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_241bb4:
    // 0x241bb4: 0xc06b07c  jal         func_1AC1F0
label_241bb8:
    if (ctx->pc == 0x241BB8u) {
        ctx->pc = 0x241BBCu;
        goto label_241bbc;
    }
    ctx->pc = 0x241BB4u;
    SET_GPR_U32(ctx, 31, 0x241BBCu);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x241BB4u, 0x241BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241BBCu;
label_241bbc:
    // 0x241bbc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_241bc0:
    // 0x241bc0: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x241bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_241bc4:
    // 0x241bc4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x241bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_241bc8:
    // 0x241bc8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x241bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241bcc:
    // 0x241bcc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x241bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_241bd0:
    // 0x241bd0: 0x8c510244  lw          $s1, 0x244($v0)
    ctx->pc = 0x241bd0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
label_241bd4:
    // 0x241bd4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x241bd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_241bd8:
    // 0x241bd8: 0xc074974  jal         func_1D25D0
label_241bdc:
    if (ctx->pc == 0x241BDCu) {
        ctx->pc = 0x241BE0u;
        goto label_241be0;
    }
    ctx->pc = 0x241BD8u;
    SET_GPR_U32(ctx, 31, 0x241BE0u);
    ctx->pc = 0x1D25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D25D0u, 0x241BD8u, 0x241BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241BE0u;
label_241be0:
    // 0x241be0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_241be4:
    // 0x241be4: 0x8c250140  lw          $a1, 0x140($at)
    ctx->pc = 0x241be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_241be8:
    // 0x241be8: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x241be8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_241bec:
    // 0x241bec: 0xc53821  addu        $a3, $a2, $a1
    ctx->pc = 0x241becu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_241bf0:
    // 0x241bf0: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x241bf0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_241bf4:
    // 0x241bf4: 0x8fa900a8  lw          $t1, 0xA8($sp)
    ctx->pc = 0x241bf4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241bf8:
    // 0x241bf8: 0x1281021  addu        $v0, $t1, $t0
    ctx->pc = 0x241bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_241bfc:
    // 0x241bfc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_241c00:
    // 0x241c00: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x241c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_241c04:
    // 0x241c04: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x241c04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_241c08:
    // 0x241c08: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x241c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241c0c:
    // 0x241c0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x241c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_241c10:
    // 0x241c10: 0x8c65024c  lw          $a1, 0x24C($v1)
    ctx->pc = 0x241c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 588)));
label_241c14:
    // 0x241c14: 0x24440204  addiu       $a0, $v0, 0x204
    ctx->pc = 0x241c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 516));
label_241c18:
    // 0x241c18: 0x24060150  addiu       $a2, $zero, 0x150
    ctx->pc = 0x241c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_241c1c:
    // 0x241c1c: 0xc06b07c  jal         func_1AC1F0
label_241c20:
    if (ctx->pc == 0x241C20u) {
        ctx->pc = 0x241C24u;
        goto label_241c24;
    }
    ctx->pc = 0x241C1Cu;
    SET_GPR_U32(ctx, 31, 0x241C24u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x241C1Cu, 0x241C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241C24u;
label_241c24:
    // 0x241c24: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_241c28:
    // 0x241c28: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x241c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_241c2c:
    // 0x241c2c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x241c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_241c30:
    // 0x241c30: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241c34:
    // 0x241c34: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x241c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_241c38:
    // 0x241c38: 0x8cb1024c  lw          $s1, 0x24C($a1)
    ctx->pc = 0x241c38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 588)));
label_241c3c:
    // 0x241c3c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x241c3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_241c40:
    // 0x241c40: 0xc074974  jal         func_1D25D0
label_241c44:
    if (ctx->pc == 0x241C44u) {
        ctx->pc = 0x241C48u;
        goto label_241c48;
    }
    ctx->pc = 0x241C40u;
    SET_GPR_U32(ctx, 31, 0x241C48u);
    ctx->pc = 0x1D25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D25D0u, 0x241C40u, 0x241C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241C48u;
label_241c48:
    // 0x241c48: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241c4c:
    // 0x241c4c: 0x8c51024c  lw          $s1, 0x24C($v0)
    ctx->pc = 0x241c4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
label_241c50:
    // 0x241c50: 0x8fb000a8  lw          $s0, 0xA8($sp)
    ctx->pc = 0x241c50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241c54:
    // 0x241c54: 0x26021330  addiu       $v0, $s0, 0x1330
    ctx->pc = 0x241c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
label_241c58:
    // 0x241c58: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x241c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_241c5c:
    // 0x241c5c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241c60:
    // 0x241c60: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x241c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_241c64:
    // 0x241c64: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x241c64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_241c68:
    // 0x241c68: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x241c68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_241c6c:
    // 0x241c6c: 0xc0749a4  jal         func_1D2690
label_241c70:
    if (ctx->pc == 0x241C70u) {
        ctx->pc = 0x241C74u;
        goto label_241c74;
    }
    ctx->pc = 0x241C6Cu;
    SET_GPR_U32(ctx, 31, 0x241C74u);
    ctx->pc = 0x1D2690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2690u, 0x241C6Cu, 0x241C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241C74u;
label_241c74:
    // 0x241c74: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x241c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241c78:
    // 0x241c78: 0x8cb10250  lw          $s1, 0x250($a1)
    ctx->pc = 0x241c78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
label_241c7c:
    // 0x241c7c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241c80:
    // 0x241c80: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x241c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_241c84:
    // 0x241c84: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x241c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_241c88:
    // 0x241c88: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241c8c:
    // 0x241c8c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x241c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_241c90:
    // 0x241c90: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x241c90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_241c94:
    // 0x241c94: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x241c94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_241c98:
    // 0x241c98: 0xc0749a4  jal         func_1D2690
label_241c9c:
    if (ctx->pc == 0x241C9Cu) {
        ctx->pc = 0x241CA0u;
        goto label_241ca0;
    }
    ctx->pc = 0x241C98u;
    SET_GPR_U32(ctx, 31, 0x241CA0u);
    ctx->pc = 0x1D2690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2690u, 0x241C98u, 0x241CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241CA0u;
label_241ca0:
    // 0x241ca0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_241ca4:
    // 0x241ca4: 0x8c250140  lw          $a1, 0x140($at)
    ctx->pc = 0x241ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_241ca8:
    // 0x241ca8: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x241ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_241cac:
    // 0x241cac: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x241cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_241cb0:
    // 0x241cb0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x241cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_241cb4:
    // 0x241cb4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241cb8:
    // 0x241cb8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x241cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_241cbc:
    // 0x241cbc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_241cc0:
    // 0x241cc0: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x241cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_241cc4:
    // 0x241cc4: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x241cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_241cc8:
    // 0x241cc8: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x241cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241ccc:
    // 0x241ccc: 0xc53821  addu        $a3, $a2, $a1
    ctx->pc = 0x241cccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_241cd0:
    // 0x241cd0: 0x8ce80254  lw          $t0, 0x254($a3)
    ctx->pc = 0x241cd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 596)));
label_241cd4:
    // 0x241cd4: 0x24890204  addiu       $t1, $a0, 0x204
    ctx->pc = 0x241cd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 516));
label_241cd8:
    // 0x241cd8: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x241cd8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_241cdc:
    // 0x241cdc: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x241cdcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_241ce0:
    // 0x241ce0: 0x24060150  addiu       $a2, $zero, 0x150
    ctx->pc = 0x241ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_241ce4:
    // 0x241ce4: 0xc06b07c  jal         func_1AC1F0
label_241ce8:
    if (ctx->pc == 0x241CE8u) {
        ctx->pc = 0x241CECu;
        goto label_241cec;
    }
    ctx->pc = 0x241CE4u;
    SET_GPR_U32(ctx, 31, 0x241CECu);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x241CE4u, 0x241CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241CECu;
label_241cec:
    // 0x241cec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_241cf0:
    // 0x241cf0: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x241cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_241cf4:
    // 0x241cf4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x241cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_241cf8:
    // 0x241cf8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x241cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241cfc:
    // 0x241cfc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x241cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_241d00:
    // 0x241d00: 0x8c510254  lw          $s1, 0x254($v0)
    ctx->pc = 0x241d00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 596)));
label_241d04:
    // 0x241d04: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x241d04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_241d08:
    // 0x241d08: 0xc074974  jal         func_1D25D0
label_241d0c:
    if (ctx->pc == 0x241D0Cu) {
        ctx->pc = 0x241D10u;
        goto label_241d10;
    }
    ctx->pc = 0x241D08u;
    SET_GPR_U32(ctx, 31, 0x241D10u);
    ctx->pc = 0x1D25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D25D0u, 0x241D08u, 0x241D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241D10u;
label_241d10:
    // 0x241d10: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241d14:
    // 0x241d14: 0x8c510254  lw          $s1, 0x254($v0)
    ctx->pc = 0x241d14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 596)));
label_241d18:
    // 0x241d18: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241d1c:
    // 0x241d1c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x241d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_241d20:
    // 0x241d20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x241d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_241d24:
    // 0x241d24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x241d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_241d28:
    // 0x241d28: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x241d28u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_241d2c:
    // 0x241d2c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241d30:
    // 0x241d30: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x241d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_241d34:
    // 0x241d34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x241d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_241d38:
    // 0x241d38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x241d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_241d3c:
    // 0x241d3c: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x241d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_241d40:
    // 0x241d40: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x241d40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_241d44:
    // 0x241d44: 0xc0749a4  jal         func_1D2690
label_241d48:
    if (ctx->pc == 0x241D48u) {
        ctx->pc = 0x241D4Cu;
        goto label_241d4c;
    }
    ctx->pc = 0x241D44u;
    SET_GPR_U32(ctx, 31, 0x241D4Cu);
    ctx->pc = 0x1D2690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2690u, 0x241D44u, 0x241D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241D4Cu;
label_241d4c:
    // 0x241d4c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241d50:
    // 0x241d50: 0x8c550258  lw          $s5, 0x258($v0)
    ctx->pc = 0x241d50u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
label_241d54:
    // 0x241d54: 0x72a08e28  paddub      $s1, $s5, $zero
    ctx->pc = 0x241d54u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_241d58:
    // 0x241d58: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241d5c:
    // 0x241d5c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x241d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_241d60:
    // 0x241d60: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x241d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_241d64:
    // 0x241d64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x241d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_241d68:
    // 0x241d68: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x241d68u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_241d6c:
    // 0x241d6c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241d70:
    // 0x241d70: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x241d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_241d74:
    // 0x241d74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x241d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_241d78:
    // 0x241d78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x241d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_241d7c:
    // 0x241d7c: 0x23042  srl         $a2, $v0, 1
    ctx->pc = 0x241d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_241d80:
    // 0x241d80: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x241d80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_241d84:
    // 0x241d84: 0xc0749a4  jal         func_1D2690
label_241d88:
    if (ctx->pc == 0x241D88u) {
        ctx->pc = 0x241D8Cu;
        goto label_241d8c;
    }
    ctx->pc = 0x241D84u;
    SET_GPR_U32(ctx, 31, 0x241D8Cu);
    ctx->pc = 0x1D2690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2690u, 0x241D84u, 0x241D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241D8Cu;
label_241d8c:
    // 0x241d8c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_241d90:
    // 0x241d90: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x241d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_241d94:
    // 0x241d94: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x241d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_241d98:
    // 0x241d98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x241d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_241d9c:
    // 0x241d9c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x241d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_241da0:
    // 0x241da0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241da4:
    // 0x241da4: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x241da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_241da8:
    // 0x241da8: 0x24820204  addiu       $v0, $a0, 0x204
    ctx->pc = 0x241da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 516));
label_241dac:
    // 0x241dac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x241dacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_241db0:
    // 0x241db0: 0xc06b0d4  jal         func_1AC350
label_241db4:
    if (ctx->pc == 0x241DB4u) {
        ctx->pc = 0x241DB8u;
        goto label_241db8;
    }
    ctx->pc = 0x241DB0u;
    SET_GPR_U32(ctx, 31, 0x241DB8u);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x241DB0u, 0x241DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241DB8u;
label_241db8:
    // 0x241db8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_241dbc:
    // 0x241dbc: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x241dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_241dc0:
    // 0x241dc0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x241dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_241dc4:
    // 0x241dc4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241dc8:
    // 0x241dc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x241dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_241dcc:
    // 0x241dcc: 0x8c54023c  lw          $s4, 0x23C($v0)
    ctx->pc = 0x241dccu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
label_241dd0:
    // 0x241dd0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_241dd4:
    // 0x241dd4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x241dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_241dd8:
    // 0x241dd8: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x241dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_241ddc:
    // 0x241ddc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x241ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_241de0:
    // 0x241de0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x241de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_241de4:
    // 0x241de4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241de8:
    // 0x241de8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x241de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_241dec:
    // 0x241dec: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x241decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
label_241df0:
    // 0x241df0: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x241df0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_241df4:
    // 0x241df4: 0xc06b06c  jal         func_1AC1B0
label_241df8:
    if (ctx->pc == 0x241DF8u) {
        ctx->pc = 0x241DFCu;
        goto label_241dfc;
    }
    ctx->pc = 0x241DF4u;
    SET_GPR_U32(ctx, 31, 0x241DFCu);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x241DF4u, 0x241DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241DFCu;
label_241dfc:
    // 0x241dfc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_241e00:
    // 0x241e00: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x241e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_241e04:
    // 0x241e04: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x241e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_241e08:
    // 0x241e08: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x241e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_241e0c:
    // 0x241e0c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x241e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_241e10:
    // 0x241e10: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241e14:
    // 0x241e14: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x241e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_241e18:
    // 0x241e18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_241e1c:
    // 0x241e1c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x241e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_241e20:
    // 0x241e20: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x241e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_241e24:
    // 0x241e24: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241e28:
    // 0x241e28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x241e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_241e2c:
    // 0x241e2c: 0x8c45025c  lw          $a1, 0x25C($v0)
    ctx->pc = 0x241e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
label_241e30:
    // 0x241e30: 0x2484021c  addiu       $a0, $a0, 0x21C
    ctx->pc = 0x241e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 540));
label_241e34:
    // 0x241e34: 0x24060150  addiu       $a2, $zero, 0x150
    ctx->pc = 0x241e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_241e38:
    // 0x241e38: 0xc06b07c  jal         func_1AC1F0
label_241e3c:
    if (ctx->pc == 0x241E3Cu) {
        ctx->pc = 0x241E40u;
        goto label_241e40;
    }
    ctx->pc = 0x241E38u;
    SET_GPR_U32(ctx, 31, 0x241E40u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x241E38u, 0x241E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241E40u;
label_241e40:
    // 0x241e40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_241e44:
    // 0x241e44: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x241e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_241e48:
    // 0x241e48: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x241e48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_241e4c:
    // 0x241e4c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241e50:
    // 0x241e50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x241e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_241e54:
    // 0x241e54: 0x8c51025c  lw          $s1, 0x25C($v0)
    ctx->pc = 0x241e54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
label_241e58:
    // 0x241e58: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x241e58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_241e5c:
    // 0x241e5c: 0xc07498c  jal         func_1D2630
label_241e60:
    if (ctx->pc == 0x241E60u) {
        ctx->pc = 0x241E64u;
        goto label_241e64;
    }
    ctx->pc = 0x241E5Cu;
    SET_GPR_U32(ctx, 31, 0x241E64u);
    ctx->pc = 0x1D2630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2630u, 0x241E5Cu, 0x241E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241E64u;
label_241e64:
    // 0x241e64: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_241e68:
    // 0x241e68: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x241e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_241e6c:
    // 0x241e6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x241e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_241e70:
    // 0x241e70: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x241e70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241e74:
    // 0x241e74: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x241e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_241e78:
    // 0x241e78: 0x8c860264  lw          $a2, 0x264($a0)
    ctx->pc = 0x241e78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 612)));
label_241e7c:
    // 0x241e7c: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x241e7cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_241e80:
    // 0x241e80: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_241e84:
    // 0x241e84: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x241e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_241e88:
    // 0x241e88: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x241e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_241e8c:
    // 0x241e8c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x241e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_241e90:
    // 0x241e90: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x241e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_241e94:
    // 0x241e94: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241e98:
    // 0x241e98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x241e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_241e9c:
    // 0x241e9c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x241e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_241ea0:
    // 0x241ea0: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x241ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
label_241ea4:
    // 0x241ea4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x241ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_241ea8:
    // 0x241ea8: 0xc06b07c  jal         func_1AC1F0
label_241eac:
    if (ctx->pc == 0x241EACu) {
        ctx->pc = 0x241EB0u;
        goto label_241eb0;
    }
    ctx->pc = 0x241EA8u;
    SET_GPR_U32(ctx, 31, 0x241EB0u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x241EA8u, 0x241EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241EB0u;
label_241eb0:
    // 0x241eb0: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x241eb0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_241eb4:
    // 0x241eb4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x241eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241eb8:
    // 0x241eb8: 0x8c860264  lw          $a2, 0x264($a0)
    ctx->pc = 0x241eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 612)));
label_241ebc:
    // 0x241ebc: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x241ebcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_241ec0:
    // 0x241ec0: 0x26620030  addiu       $v0, $s3, 0x30
    ctx->pc = 0x241ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_241ec4:
    // 0x241ec4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x241ec4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_241ec8:
    // 0x241ec8: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x241ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_241ecc:
    // 0x241ecc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x241eccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_241ed0:
    // 0x241ed0: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x241ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_241ed4:
    // 0x241ed4: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x241ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
label_241ed8:
    // 0x241ed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x241ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_241edc:
    // 0x241edc: 0x0  nop
    ctx->pc = 0x241edcu;
    // NOP
label_241ee0:
    // 0x241ee0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x241ee0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_241ee4:
    // 0x241ee4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x241ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_241ee8:
    // 0x241ee8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241eec:
    // 0x241eec: 0x8c440264  lw          $a0, 0x264($v0)
    ctx->pc = 0x241eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 612)));
label_241ef0:
    // 0x241ef0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241ef4:
    // 0x241ef4: 0x8c450268  lw          $a1, 0x268($v0)
    ctx->pc = 0x241ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 616)));
label_241ef8:
    // 0x241ef8: 0x26660030  addiu       $a2, $s3, 0x30
    ctx->pc = 0x241ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_241efc:
    // 0x241efc: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x241efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_241f00:
    // 0x241f00: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x241f00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_241f04:
    // 0x241f04: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_241f08:
    // 0x241f08: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x241f08u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_241f0c:
    // 0x241f0c: 0xc074efc  jal         func_1D3BF0
label_241f10:
    if (ctx->pc == 0x241F10u) {
        ctx->pc = 0x241F14u;
        goto label_241f14;
    }
    ctx->pc = 0x241F0Cu;
    SET_GPR_U32(ctx, 31, 0x241F14u);
    ctx->pc = 0x1D3BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BF0u, 0x241F0Cu, 0x241F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241F14u;
label_241f14:
    // 0x241f14: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_241f18:
    // 0x241f18: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x241f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_241f1c:
    // 0x241f1c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x241f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_241f20:
    // 0x241f20: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x241f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241f24:
    // 0x241f24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x241f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_241f28:
    // 0x241f28: 0x8c50027c  lw          $s0, 0x27C($v0)
    ctx->pc = 0x241f28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 636)));
label_241f2c:
    // 0x241f2c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x241f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_241f30:
    // 0x241f30: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x241f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_241f34:
    // 0x241f34: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x241f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_241f38:
    // 0x241f38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x241f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_241f3c:
    // 0x241f3c: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x241f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_241f40:
    // 0x241f40: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x241f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241f44:
    // 0x241f44: 0x873021  addu        $a2, $a0, $a3
    ctx->pc = 0x241f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_241f48:
    // 0x241f48: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x241f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_241f4c:
    // 0x241f4c: 0x24c4021c  addiu       $a0, $a2, 0x21C
    ctx->pc = 0x241f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 540));
label_241f50:
    // 0x241f50: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x241f50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_241f54:
    // 0x241f54: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x241f54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_241f58:
    // 0x241f58: 0xc06b07c  jal         func_1AC1F0
label_241f5c:
    if (ctx->pc == 0x241F5Cu) {
        ctx->pc = 0x241F60u;
        goto label_241f60;
    }
    ctx->pc = 0x241F58u;
    SET_GPR_U32(ctx, 31, 0x241F60u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x241F58u, 0x241F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241F60u;
label_241f60:
    // 0x241f60: 0x8fb200a8  lw          $s2, 0xA8($sp)
    ctx->pc = 0x241f60u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241f64:
    // 0x241f64: 0x8e44027c  lw          $a0, 0x27C($s2)
    ctx->pc = 0x241f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 636)));
label_241f68:
    // 0x241f68: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x241f68u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_241f6c:
    // 0x241f6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x241f6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_241f70:
    // 0x241f70: 0x0  nop
    ctx->pc = 0x241f70u;
    // NOP
label_241f74:
    // 0x241f74: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x241f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_241f78:
    // 0x241f78: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x241f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_241f7c:
    // 0x241f7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x241f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_241f80:
    // 0x241f80: 0x0  nop
    ctx->pc = 0x241f80u;
    // NOP
label_241f84:
    // 0x241f84: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x241f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_241f88:
    // 0x241f88: 0x3c024307  lui         $v0, 0x4307
    ctx->pc = 0x241f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17159 << 16));
label_241f8c:
    // 0x241f8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x241f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_241f90:
    // 0x241f90: 0x0  nop
    ctx->pc = 0x241f90u;
    // NOP
label_241f94:
    // 0x241f94: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x241f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_241f98:
    // 0x241f98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x241f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_241f9c:
    // 0x241f9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x241f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_241fa0:
    // 0x241fa0: 0x0  nop
    ctx->pc = 0x241fa0u;
    // NOP
label_241fa4:
    // 0x241fa4: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x241fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_241fa8:
    // 0x241fa8: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x241fa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_241fac:
    // 0x241fac: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x241facu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_241fb0:
    // 0x241fb0: 0x26650940  addiu       $a1, $s3, 0x940
    ctx->pc = 0x241fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2368));
label_241fb4:
    // 0x241fb4: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x241fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_241fb8:
    // 0x241fb8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x241fb8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_241fbc:
    // 0x241fbc: 0xc040bf4  jal         func_102FD0
label_241fc0:
    if (ctx->pc == 0x241FC0u) {
        ctx->pc = 0x241FC4u;
        goto label_241fc4;
    }
    ctx->pc = 0x241FBCu;
    SET_GPR_U32(ctx, 31, 0x241FC4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x241FC4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x241FC4u) { return; }
    ctx->pc = 0x241FC4u;
label_241fc4:
    // 0x241fc4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x241fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_241fc8:
    // 0x241fc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x241fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_241fcc:
    // 0x241fcc: 0x0  nop
    ctx->pc = 0x241fccu;
    // NOP
label_241fd0:
    // 0x241fd0: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x241fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_241fd4:
    // 0x241fd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x241fd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_241fd8:
    // 0x241fd8: 0x0  nop
    ctx->pc = 0x241fd8u;
    // NOP
label_241fdc:
    // 0x241fdc: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x241fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_241fe0:
    // 0x241fe0: 0x3c12c120  lui         $s2, 0xC120
    ctx->pc = 0x241fe0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)49440 << 16));
label_241fe4:
    // 0x241fe4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x241fe4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_241fe8:
    // 0x241fe8: 0x0  nop
    ctx->pc = 0x241fe8u;
    // NOP
label_241fec:
    // 0x241fec: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x241fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_241ff0:
    // 0x241ff0: 0x3c044307  lui         $a0, 0x4307
    ctx->pc = 0x241ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17159 << 16));
label_241ff4:
    // 0x241ff4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x241ff4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_241ff8:
    // 0x241ff8: 0x0  nop
    ctx->pc = 0x241ff8u;
    // NOP
label_241ffc:
    // 0x241ffc: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x241ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_242000:
    // 0x242000: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x242000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_242004:
    // 0x242004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x242004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_242008:
    // 0x242008: 0x0  nop
    ctx->pc = 0x242008u;
    // NOP
label_24200c:
    // 0x24200c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x24200cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_242010:
    // 0x242010: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x242010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_242014:
    // 0x242014: 0x26650940  addiu       $a1, $s3, 0x940
    ctx->pc = 0x242014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2368));
label_242018:
    // 0x242018: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x242018u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_24201c:
    // 0x24201c: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x24201cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_242020:
    // 0x242020: 0xc040bf4  jal         func_102FD0
label_242024:
    if (ctx->pc == 0x242024u) {
        ctx->pc = 0x242028u;
        goto label_242028;
    }
    ctx->pc = 0x242020u;
    SET_GPR_U32(ctx, 31, 0x242028u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x242028u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x242028u) { return; }
    ctx->pc = 0x242028u;
label_242028:
    // 0x242028: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x242028u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24202c:
    // 0x24202c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24202cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_242030:
    // 0x242030: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x242030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_242034:
    // 0x242034: 0x0  nop
    ctx->pc = 0x242034u;
    // NOP
label_242038:
    // 0x242038: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x242038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_24203c:
    // 0x24203c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x24203cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_242040:
    // 0x242040: 0x8c44027c  lw          $a0, 0x27C($v0)
    ctx->pc = 0x242040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 636)));
label_242044:
    // 0x242044: 0x8fb200a8  lw          $s2, 0xA8($sp)
    ctx->pc = 0x242044u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_242048:
    // 0x242048: 0x8e450280  lw          $a1, 0x280($s2)
    ctx->pc = 0x242048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 640)));
label_24204c:
    // 0x24204c: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x24204cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_242050:
    // 0x242050: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x242050u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_242054:
    // 0x242054: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x242054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_242058:
    // 0x242058: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x242058u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_24205c:
    // 0x24205c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x24205cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_242060:
    // 0x242060: 0x8c320140  lw          $s2, 0x140($at)
    ctx->pc = 0x242060u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_242064:
    // 0x242064: 0x72404e28  paddub      $t1, $s2, $zero
    ctx->pc = 0x242064u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_242068:
    // 0x242068: 0xc075378  jal         func_1D4DE0
label_24206c:
    if (ctx->pc == 0x24206Cu) {
        ctx->pc = 0x242070u;
        goto label_242070;
    }
    ctx->pc = 0x242068u;
    SET_GPR_U32(ctx, 31, 0x242070u);
    ctx->pc = 0x1D4DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4DE0u, 0x242068u, 0x242070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242070u;
label_242070:
    // 0x242070: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x242070u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_242074:
    // 0x242074: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x242074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_242078:
    // 0x242078: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x242078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_24207c:
    // 0x24207c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24207cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_242080:
    // 0x242080: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x242080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_242084:
    // 0x242084: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x242084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_242088:
    // 0x242088: 0x8c500284  lw          $s0, 0x284($v0)
    ctx->pc = 0x242088u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 644)));
label_24208c:
    // 0x24208c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x24208cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_242090:
    // 0x242090: 0x8c340140  lw          $s4, 0x140($at)
    ctx->pc = 0x242090u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_242094:
    // 0x242094: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x242094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_242098:
    // 0x242098: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x242098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_24209c:
    // 0x24209c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x24209cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2420a0:
    // 0x2420a0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2420a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2420a4:
    // 0x2420a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2420a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2420a8:
    // 0x2420a8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2420a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2420ac:
    // 0x2420ac: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x2420acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
label_2420b0:
    // 0x2420b0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2420b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2420b4:
    // 0x2420b4: 0xc06b07c  jal         func_1AC1F0
label_2420b8:
    if (ctx->pc == 0x2420B8u) {
        ctx->pc = 0x2420BCu;
        goto label_2420bc;
    }
    ctx->pc = 0x2420B4u;
    SET_GPR_U32(ctx, 31, 0x2420BCu);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x2420B4u, 0x2420BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2420BCu;
label_2420bc:
    // 0x2420bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2420bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2420c0:
    // 0x2420c0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2420c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2420c4:
    // 0x2420c4: 0x8c500284  lw          $s0, 0x284($v0)
    ctx->pc = 0x2420c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 644)));
label_2420c8:
    // 0x2420c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2420c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2420cc:
    // 0x2420cc: 0x0  nop
    ctx->pc = 0x2420ccu;
    // NOP
label_2420d0:
    // 0x2420d0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2420d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2420d4:
    // 0x2420d4: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x2420d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_2420d8:
    // 0x2420d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2420d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2420dc:
    // 0x2420dc: 0x0  nop
    ctx->pc = 0x2420dcu;
    // NOP
label_2420e0:
    // 0x2420e0: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2420e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_2420e4:
    // 0x2420e4: 0x3c024307  lui         $v0, 0x4307
    ctx->pc = 0x2420e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17159 << 16));
label_2420e8:
    // 0x2420e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2420e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2420ec:
    // 0x2420ec: 0x0  nop
    ctx->pc = 0x2420ecu;
    // NOP
label_2420f0:
    // 0x2420f0: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2420f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_2420f4:
    // 0x2420f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2420f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2420f8:
    // 0x2420f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2420f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2420fc:
    // 0x2420fc: 0x0  nop
    ctx->pc = 0x2420fcu;
    // NOP
label_242100:
    // 0x242100: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x242100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_242104:
    // 0x242104: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x242104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_242108:
    // 0x242108: 0x26670940  addiu       $a3, $s3, 0x940
    ctx->pc = 0x242108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 2368));
label_24210c:
    // 0x24210c: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x24210cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_242110:
    // 0x242110: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x242110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_242114:
    // 0x242114: 0xc040bf4  jal         func_102FD0
label_242118:
    if (ctx->pc == 0x242118u) {
        ctx->pc = 0x24211Cu;
        goto label_24211c;
    }
    ctx->pc = 0x242114u;
    SET_GPR_U32(ctx, 31, 0x24211Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x24211Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24211Cu) { return; }
    ctx->pc = 0x24211Cu;
label_24211c:
    // 0x24211c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x24211cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_242120:
    // 0x242120: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x242120u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_242124:
    // 0x242124: 0x0  nop
    ctx->pc = 0x242124u;
    // NOP
label_242128:
    // 0x242128: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x242128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_24212c:
    // 0x24212c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24212cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_242130:
    // 0x242130: 0x0  nop
    ctx->pc = 0x242130u;
    // NOP
label_242134:
    // 0x242134: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x242134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_242138:
    // 0x242138: 0x3c02c190  lui         $v0, 0xC190
    ctx->pc = 0x242138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49552 << 16));
label_24213c:
    // 0x24213c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24213cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_242140:
    // 0x242140: 0x0  nop
    ctx->pc = 0x242140u;
    // NOP
label_242144:
    // 0x242144: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x242144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_242148:
    // 0x242148: 0x3c054307  lui         $a1, 0x4307
    ctx->pc = 0x242148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17159 << 16));
label_24214c:
    // 0x24214c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x24214cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_242150:
    // 0x242150: 0x0  nop
    ctx->pc = 0x242150u;
    // NOP
label_242154:
    // 0x242154: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x242154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_242158:
    // 0x242158: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x242158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_24215c:
    // 0x24215c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x24215cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_242160:
    // 0x242160: 0x0  nop
    ctx->pc = 0x242160u;
    // NOP
label_242164:
    // 0x242164: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x242164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_242168:
    // 0x242168: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x242168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_24216c:
    // 0x24216c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x24216cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_242170:
    // 0x242170: 0x26620940  addiu       $v0, $s3, 0x940
    ctx->pc = 0x242170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2368));
label_242174:
    // 0x242174: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x242174u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_242178:
    // 0x242178: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x242178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_24217c:
    // 0x24217c: 0xc040bf4  jal         func_102FD0
label_242180:
    if (ctx->pc == 0x242180u) {
        ctx->pc = 0x242184u;
        goto label_242184;
    }
    ctx->pc = 0x24217Cu;
    SET_GPR_U32(ctx, 31, 0x242184u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x242184u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x242184u) { return; }
    ctx->pc = 0x242184u;
label_242184:
    // 0x242184: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x242184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_242188:
    // 0x242188: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x242188u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24218c:
    // 0x24218c: 0x0  nop
    ctx->pc = 0x24218cu;
    // NOP
label_242190:
    // 0x242190: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x242190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_242194:
    // 0x242194: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x242194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_242198:
    // 0x242198: 0x8c510284  lw          $s1, 0x284($v0)
    ctx->pc = 0x242198u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 644)));
label_24219c:
    // 0x24219c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x24219cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2421a0:
    // 0x2421a0: 0x8c450288  lw          $a1, 0x288($v0)
    ctx->pc = 0x2421a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 648)));
label_2421a4:
    // 0x2421a4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2421a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_2421a8:
    // 0x2421a8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2421a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2421ac:
    // 0x2421ac: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x2421acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2421b0:
    // 0x2421b0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2421b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2421b4:
    // 0x2421b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2421b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2421b8:
    // 0x2421b8: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x2421b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2421bc:
    // 0x2421bc: 0xc075378  jal         func_1D4DE0
label_2421c0:
    if (ctx->pc == 0x2421C0u) {
        ctx->pc = 0x2421C4u;
        goto label_2421c4;
    }
    ctx->pc = 0x2421BCu;
    SET_GPR_U32(ctx, 31, 0x2421C4u);
    ctx->pc = 0x1D4DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4DE0u, 0x2421BCu, 0x2421C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2421C4u;
label_2421c4:
    // 0x2421c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2421c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2421c8:
    // 0x2421c8: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2421c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2421cc:
    // 0x2421cc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2421ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2421d0:
    // 0x2421d0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2421d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2421d4:
    // 0x2421d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2421d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2421d8:
    // 0x2421d8: 0x8c65028c  lw          $a1, 0x28C($v1)
    ctx->pc = 0x2421d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 652)));
label_2421dc:
    // 0x2421dc: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x2421dcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_2421e0:
    // 0x2421e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2421e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2421e4:
    // 0x2421e4: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x2421e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2421e8:
    // 0x2421e8: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x2421e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2421ec:
    // 0x2421ec: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x2421ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_2421f0:
    // 0x2421f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2421f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2421f4:
    // 0x2421f4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2421f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2421f8:
    // 0x2421f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2421f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2421fc:
    // 0x2421fc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2421fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_242200:
    // 0x242200: 0x2451021c  addiu       $s1, $v0, 0x21C
    ctx->pc = 0x242200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
label_242204:
    // 0x242204: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x242204u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_242208:
    // 0x242208: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x242208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_24220c:
    // 0x24220c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x24220cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_242210:
    // 0x242210: 0xc06b07c  jal         func_1AC1F0
label_242214:
    if (ctx->pc == 0x242214u) {
        ctx->pc = 0x242218u;
        goto label_242218;
    }
    ctx->pc = 0x242210u;
    SET_GPR_U32(ctx, 31, 0x242218u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x242210u, 0x242218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242218u;
label_242218:
    // 0x242218: 0x8fb100a8  lw          $s1, 0xA8($sp)
    ctx->pc = 0x242218u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_24221c:
    // 0x24221c: 0x8e30028c  lw          $s0, 0x28C($s1)
    ctx->pc = 0x24221cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 652)));
label_242220:
    // 0x242220: 0x3c05c440  lui         $a1, 0xC440
    ctx->pc = 0x242220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50240 << 16));
label_242224:
    // 0x242224: 0x34a28000  ori         $v0, $a1, 0x8000
    ctx->pc = 0x242224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_242228:
    // 0x242228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x242228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24222c:
    // 0x24222c: 0x0  nop
    ctx->pc = 0x24222cu;
    // NOP
label_242230:
    // 0x242230: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x242230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_242234:
    // 0x242234: 0x3c024388  lui         $v0, 0x4388
    ctx->pc = 0x242234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17288 << 16));
label_242238:
    // 0x242238: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x242238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_24223c:
    // 0x24223c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24223cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_242240:
    // 0x242240: 0x0  nop
    ctx->pc = 0x242240u;
    // NOP
label_242244:
    // 0x242244: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x242244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_242248:
    // 0x242248: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x242248u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24224c:
    // 0x24224c: 0x0  nop
    ctx->pc = 0x24224cu;
    // NOP
label_242250:
    // 0x242250: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x242250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_242254:
    // 0x242254: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x242254u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_242258:
    // 0x242258: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x242258u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24225c:
    // 0x24225c: 0x0  nop
    ctx->pc = 0x24225cu;
    // NOP
label_242260:
    // 0x242260: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x242260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_242264:
    // 0x242264: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x242264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_242268:
    // 0x242268: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x242268u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24226c:
    // 0x24226c: 0x26650880  addiu       $a1, $s3, 0x880
    ctx->pc = 0x24226cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2176));
label_242270:
    // 0x242270: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x242270u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_242274:
    // 0x242274: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x242274u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_242278:
    // 0x242278: 0xc040bf4  jal         func_102FD0
label_24227c:
    if (ctx->pc == 0x24227Cu) {
        ctx->pc = 0x242280u;
        goto label_242280;
    }
    ctx->pc = 0x242278u;
    SET_GPR_U32(ctx, 31, 0x242280u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x242280u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x242280u) { return; }
    ctx->pc = 0x242280u;
label_242280:
    // 0x242280: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x242280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_242284:
    // 0x242284: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x242284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_242288:
    // 0x242288: 0x0  nop
    ctx->pc = 0x242288u;
    // NOP
label_24228c:
    // 0x24228c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x24228cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_242290:
    // 0x242290: 0x3c05c25c  lui         $a1, 0xC25C
    ctx->pc = 0x242290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49756 << 16));
label_242294:
    // 0x242294: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x242294u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_242298:
    // 0x242298: 0x0  nop
    ctx->pc = 0x242298u;
    // NOP
label_24229c:
    // 0x24229c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x24229cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_2422a0:
    // 0x2422a0: 0x3c024409  lui         $v0, 0x4409
    ctx->pc = 0x2422a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17417 << 16));
label_2422a4:
    // 0x2422a4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2422a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_2422a8:
    // 0x2422a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2422a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2422ac:
    // 0x2422ac: 0x0  nop
    ctx->pc = 0x2422acu;
    // NOP
label_2422b0:
    // 0x2422b0: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2422b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_2422b4:
    // 0x2422b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2422b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2422b8:
    // 0x2422b8: 0x0  nop
    ctx->pc = 0x2422b8u;
    // NOP
label_2422bc:
    // 0x2422bc: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2422bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_2422c0:
    // 0x2422c0: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2422c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_2422c4:
    // 0x2422c4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2422c4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2422c8:
    // 0x2422c8: 0x0  nop
    ctx->pc = 0x2422c8u;
    // NOP
label_2422cc:
    // 0x2422cc: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x2422ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_2422d0:
    // 0x2422d0: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2422d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2422d4:
    // 0x2422d4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2422d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2422d8:
    // 0x2422d8: 0x26650880  addiu       $a1, $s3, 0x880
    ctx->pc = 0x2422d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2176));
label_2422dc:
    // 0x2422dc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2422dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2422e0:
    // 0x2422e0: 0xc040bf4  jal         func_102FD0
label_2422e4:
    if (ctx->pc == 0x2422E4u) {
        ctx->pc = 0x2422E8u;
        goto label_2422e8;
    }
    ctx->pc = 0x2422E0u;
    SET_GPR_U32(ctx, 31, 0x2422E8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2422E8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2422E8u) { return; }
    ctx->pc = 0x2422E8u;
label_2422e8:
    // 0x2422e8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2422e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2422ec:
    // 0x2422ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2422ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2422f0:
    // 0x2422f0: 0x0  nop
    ctx->pc = 0x2422f0u;
    // NOP
label_2422f4:
    // 0x2422f4: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x2422f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_2422f8:
    // 0x2422f8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2422f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2422fc:
    // 0x2422fc: 0x8c44028c  lw          $a0, 0x28C($v0)
    ctx->pc = 0x2422fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 652)));
label_242300:
    // 0x242300: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x242300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_242304:
    // 0x242304: 0x8c450290  lw          $a1, 0x290($v0)
    ctx->pc = 0x242304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 656)));
label_242308:
    // 0x242308: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x242308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_24230c:
    // 0x24230c: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x24230cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_242310:
    // 0x242310: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x242310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_242314:
    // 0x242314: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x242314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_242318:
    // 0x242318: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x242318u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_24231c:
    // 0x24231c: 0xc074efc  jal         func_1D3BF0
label_242320:
    if (ctx->pc == 0x242320u) {
        ctx->pc = 0x242324u;
        goto label_242324;
    }
    ctx->pc = 0x24231Cu;
    SET_GPR_U32(ctx, 31, 0x242324u);
    ctx->pc = 0x1D3BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BF0u, 0x24231Cu, 0x242324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242324u;
label_242324:
    // 0x242324: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x242324u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_242328:
    // 0x242328: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x242328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_24232c:
    // 0x24232c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x24232cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_242330:
    // 0x242330: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x242330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_242334:
    // 0x242334: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x242334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_242338:
    // 0x242338: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x242338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24233c:
    // 0x24233c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x24233cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_242340:
    // 0x242340: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x242340u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_242344:
    // 0x242344: 0x2622021c  addiu       $v0, $s1, 0x21C
    ctx->pc = 0x242344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 540));
label_242348:
    // 0x242348: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x242348u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24234c:
    // 0x24234c: 0xc06b0d4  jal         func_1AC350
label_242350:
    if (ctx->pc == 0x242350u) {
        ctx->pc = 0x242354u;
        goto label_242354;
    }
    ctx->pc = 0x24234Cu;
    SET_GPR_U32(ctx, 31, 0x242354u);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x24234Cu, 0x242354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242354u;
label_242354:
    // 0x242354: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x242354u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_242358:
    // 0x242358: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x242358u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_24235c:
    // 0x24235c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24235cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_242360:
    // 0x242360: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x242360u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_242364:
    // 0x242364: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x242364u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_242368:
    // 0x242368: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x242368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24236c:
    // 0x24236c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24236cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_242370:
    // 0x242370: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x242370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_242374:
    // 0x242374: 0x3e00008  jr          $ra
label_242378:
    if (ctx->pc == 0x242378u) {
        ctx->pc = 0x24237Cu;
        goto label_fallthrough_0x242374;
    }
    ctx->pc = 0x242374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x242374:
    ctx->pc = 0x24237Cu;
}
