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

// Function: Plw01_move02
// Address: 0x1b57b0 - 0x1b6d8c
void Plw01_move02_0x1b57b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw01_move02_0x1b57b0");
#endif

    switch (ctx->pc) {
        case 0x1b57b0u: goto label_1b57b0;
        case 0x1b57b4u: goto label_1b57b4;
        case 0x1b57b8u: goto label_1b57b8;
        case 0x1b57bcu: goto label_1b57bc;
        case 0x1b57c0u: goto label_1b57c0;
        case 0x1b57c4u: goto label_1b57c4;
        case 0x1b57c8u: goto label_1b57c8;
        case 0x1b57ccu: goto label_1b57cc;
        case 0x1b57d0u: goto label_1b57d0;
        case 0x1b57d4u: goto label_1b57d4;
        case 0x1b57d8u: goto label_1b57d8;
        case 0x1b57dcu: goto label_1b57dc;
        case 0x1b57e0u: goto label_1b57e0;
        case 0x1b57e4u: goto label_1b57e4;
        case 0x1b57e8u: goto label_1b57e8;
        case 0x1b57ecu: goto label_1b57ec;
        case 0x1b57f0u: goto label_1b57f0;
        case 0x1b57f4u: goto label_1b57f4;
        case 0x1b57f8u: goto label_1b57f8;
        case 0x1b57fcu: goto label_1b57fc;
        case 0x1b5800u: goto label_1b5800;
        case 0x1b5804u: goto label_1b5804;
        case 0x1b5808u: goto label_1b5808;
        case 0x1b580cu: goto label_1b580c;
        case 0x1b5810u: goto label_1b5810;
        case 0x1b5814u: goto label_1b5814;
        case 0x1b5818u: goto label_1b5818;
        case 0x1b581cu: goto label_1b581c;
        case 0x1b5820u: goto label_1b5820;
        case 0x1b5824u: goto label_1b5824;
        case 0x1b5828u: goto label_1b5828;
        case 0x1b582cu: goto label_1b582c;
        case 0x1b5830u: goto label_1b5830;
        case 0x1b5834u: goto label_1b5834;
        case 0x1b5838u: goto label_1b5838;
        case 0x1b583cu: goto label_1b583c;
        case 0x1b5840u: goto label_1b5840;
        case 0x1b5844u: goto label_1b5844;
        case 0x1b5848u: goto label_1b5848;
        case 0x1b584cu: goto label_1b584c;
        case 0x1b5850u: goto label_1b5850;
        case 0x1b5854u: goto label_1b5854;
        case 0x1b5858u: goto label_1b5858;
        case 0x1b585cu: goto label_1b585c;
        case 0x1b5860u: goto label_1b5860;
        case 0x1b5864u: goto label_1b5864;
        case 0x1b5868u: goto label_1b5868;
        case 0x1b586cu: goto label_1b586c;
        case 0x1b5870u: goto label_1b5870;
        case 0x1b5874u: goto label_1b5874;
        case 0x1b5878u: goto label_1b5878;
        case 0x1b587cu: goto label_1b587c;
        case 0x1b5880u: goto label_1b5880;
        case 0x1b5884u: goto label_1b5884;
        case 0x1b5888u: goto label_1b5888;
        case 0x1b588cu: goto label_1b588c;
        case 0x1b5890u: goto label_1b5890;
        case 0x1b5894u: goto label_1b5894;
        case 0x1b5898u: goto label_1b5898;
        case 0x1b589cu: goto label_1b589c;
        case 0x1b58a0u: goto label_1b58a0;
        case 0x1b58a4u: goto label_1b58a4;
        case 0x1b58a8u: goto label_1b58a8;
        case 0x1b58acu: goto label_1b58ac;
        case 0x1b58b0u: goto label_1b58b0;
        case 0x1b58b4u: goto label_1b58b4;
        case 0x1b58b8u: goto label_1b58b8;
        case 0x1b58bcu: goto label_1b58bc;
        case 0x1b58c0u: goto label_1b58c0;
        case 0x1b58c4u: goto label_1b58c4;
        case 0x1b58c8u: goto label_1b58c8;
        case 0x1b58ccu: goto label_1b58cc;
        case 0x1b58d0u: goto label_1b58d0;
        case 0x1b58d4u: goto label_1b58d4;
        case 0x1b58d8u: goto label_1b58d8;
        case 0x1b58dcu: goto label_1b58dc;
        case 0x1b58e0u: goto label_1b58e0;
        case 0x1b58e4u: goto label_1b58e4;
        case 0x1b58e8u: goto label_1b58e8;
        case 0x1b58ecu: goto label_1b58ec;
        case 0x1b58f0u: goto label_1b58f0;
        case 0x1b58f4u: goto label_1b58f4;
        case 0x1b58f8u: goto label_1b58f8;
        case 0x1b58fcu: goto label_1b58fc;
        case 0x1b5900u: goto label_1b5900;
        case 0x1b5904u: goto label_1b5904;
        case 0x1b5908u: goto label_1b5908;
        case 0x1b590cu: goto label_1b590c;
        case 0x1b5910u: goto label_1b5910;
        case 0x1b5914u: goto label_1b5914;
        case 0x1b5918u: goto label_1b5918;
        case 0x1b591cu: goto label_1b591c;
        case 0x1b5920u: goto label_1b5920;
        case 0x1b5924u: goto label_1b5924;
        case 0x1b5928u: goto label_1b5928;
        case 0x1b592cu: goto label_1b592c;
        case 0x1b5930u: goto label_1b5930;
        case 0x1b5934u: goto label_1b5934;
        case 0x1b5938u: goto label_1b5938;
        case 0x1b593cu: goto label_1b593c;
        case 0x1b5940u: goto label_1b5940;
        case 0x1b5944u: goto label_1b5944;
        case 0x1b5948u: goto label_1b5948;
        case 0x1b594cu: goto label_1b594c;
        case 0x1b5950u: goto label_1b5950;
        case 0x1b5954u: goto label_1b5954;
        case 0x1b5958u: goto label_1b5958;
        case 0x1b595cu: goto label_1b595c;
        case 0x1b5960u: goto label_1b5960;
        case 0x1b5964u: goto label_1b5964;
        case 0x1b5968u: goto label_1b5968;
        case 0x1b596cu: goto label_1b596c;
        case 0x1b5970u: goto label_1b5970;
        case 0x1b5974u: goto label_1b5974;
        case 0x1b5978u: goto label_1b5978;
        case 0x1b597cu: goto label_1b597c;
        case 0x1b5980u: goto label_1b5980;
        case 0x1b5984u: goto label_1b5984;
        case 0x1b5988u: goto label_1b5988;
        case 0x1b598cu: goto label_1b598c;
        case 0x1b5990u: goto label_1b5990;
        case 0x1b5994u: goto label_1b5994;
        case 0x1b5998u: goto label_1b5998;
        case 0x1b599cu: goto label_1b599c;
        case 0x1b59a0u: goto label_1b59a0;
        case 0x1b59a4u: goto label_1b59a4;
        case 0x1b59a8u: goto label_1b59a8;
        case 0x1b59acu: goto label_1b59ac;
        case 0x1b59b0u: goto label_1b59b0;
        case 0x1b59b4u: goto label_1b59b4;
        case 0x1b59b8u: goto label_1b59b8;
        case 0x1b59bcu: goto label_1b59bc;
        case 0x1b59c0u: goto label_1b59c0;
        case 0x1b59c4u: goto label_1b59c4;
        case 0x1b59c8u: goto label_1b59c8;
        case 0x1b59ccu: goto label_1b59cc;
        case 0x1b59d0u: goto label_1b59d0;
        case 0x1b59d4u: goto label_1b59d4;
        case 0x1b59d8u: goto label_1b59d8;
        case 0x1b59dcu: goto label_1b59dc;
        case 0x1b59e0u: goto label_1b59e0;
        case 0x1b59e4u: goto label_1b59e4;
        case 0x1b59e8u: goto label_1b59e8;
        case 0x1b59ecu: goto label_1b59ec;
        case 0x1b59f0u: goto label_1b59f0;
        case 0x1b59f4u: goto label_1b59f4;
        case 0x1b59f8u: goto label_1b59f8;
        case 0x1b59fcu: goto label_1b59fc;
        case 0x1b5a00u: goto label_1b5a00;
        case 0x1b5a04u: goto label_1b5a04;
        case 0x1b5a08u: goto label_1b5a08;
        case 0x1b5a0cu: goto label_1b5a0c;
        case 0x1b5a10u: goto label_1b5a10;
        case 0x1b5a14u: goto label_1b5a14;
        case 0x1b5a18u: goto label_1b5a18;
        case 0x1b5a1cu: goto label_1b5a1c;
        case 0x1b5a20u: goto label_1b5a20;
        case 0x1b5a24u: goto label_1b5a24;
        case 0x1b5a28u: goto label_1b5a28;
        case 0x1b5a2cu: goto label_1b5a2c;
        case 0x1b5a30u: goto label_1b5a30;
        case 0x1b5a34u: goto label_1b5a34;
        case 0x1b5a38u: goto label_1b5a38;
        case 0x1b5a3cu: goto label_1b5a3c;
        case 0x1b5a40u: goto label_1b5a40;
        case 0x1b5a44u: goto label_1b5a44;
        case 0x1b5a48u: goto label_1b5a48;
        case 0x1b5a4cu: goto label_1b5a4c;
        case 0x1b5a50u: goto label_1b5a50;
        case 0x1b5a54u: goto label_1b5a54;
        case 0x1b5a58u: goto label_1b5a58;
        case 0x1b5a5cu: goto label_1b5a5c;
        case 0x1b5a60u: goto label_1b5a60;
        case 0x1b5a64u: goto label_1b5a64;
        case 0x1b5a68u: goto label_1b5a68;
        case 0x1b5a6cu: goto label_1b5a6c;
        case 0x1b5a70u: goto label_1b5a70;
        case 0x1b5a74u: goto label_1b5a74;
        case 0x1b5a78u: goto label_1b5a78;
        case 0x1b5a7cu: goto label_1b5a7c;
        case 0x1b5a80u: goto label_1b5a80;
        case 0x1b5a84u: goto label_1b5a84;
        case 0x1b5a88u: goto label_1b5a88;
        case 0x1b5a8cu: goto label_1b5a8c;
        case 0x1b5a90u: goto label_1b5a90;
        case 0x1b5a94u: goto label_1b5a94;
        case 0x1b5a98u: goto label_1b5a98;
        case 0x1b5a9cu: goto label_1b5a9c;
        case 0x1b5aa0u: goto label_1b5aa0;
        case 0x1b5aa4u: goto label_1b5aa4;
        case 0x1b5aa8u: goto label_1b5aa8;
        case 0x1b5aacu: goto label_1b5aac;
        case 0x1b5ab0u: goto label_1b5ab0;
        case 0x1b5ab4u: goto label_1b5ab4;
        case 0x1b5ab8u: goto label_1b5ab8;
        case 0x1b5abcu: goto label_1b5abc;
        case 0x1b5ac0u: goto label_1b5ac0;
        case 0x1b5ac4u: goto label_1b5ac4;
        case 0x1b5ac8u: goto label_1b5ac8;
        case 0x1b5accu: goto label_1b5acc;
        case 0x1b5ad0u: goto label_1b5ad0;
        case 0x1b5ad4u: goto label_1b5ad4;
        case 0x1b5ad8u: goto label_1b5ad8;
        case 0x1b5adcu: goto label_1b5adc;
        case 0x1b5ae0u: goto label_1b5ae0;
        case 0x1b5ae4u: goto label_1b5ae4;
        case 0x1b5ae8u: goto label_1b5ae8;
        case 0x1b5aecu: goto label_1b5aec;
        case 0x1b5af0u: goto label_1b5af0;
        case 0x1b5af4u: goto label_1b5af4;
        case 0x1b5af8u: goto label_1b5af8;
        case 0x1b5afcu: goto label_1b5afc;
        case 0x1b5b00u: goto label_1b5b00;
        case 0x1b5b04u: goto label_1b5b04;
        case 0x1b5b08u: goto label_1b5b08;
        case 0x1b5b0cu: goto label_1b5b0c;
        case 0x1b5b10u: goto label_1b5b10;
        case 0x1b5b14u: goto label_1b5b14;
        case 0x1b5b18u: goto label_1b5b18;
        case 0x1b5b1cu: goto label_1b5b1c;
        case 0x1b5b20u: goto label_1b5b20;
        case 0x1b5b24u: goto label_1b5b24;
        case 0x1b5b28u: goto label_1b5b28;
        case 0x1b5b2cu: goto label_1b5b2c;
        case 0x1b5b30u: goto label_1b5b30;
        case 0x1b5b34u: goto label_1b5b34;
        case 0x1b5b38u: goto label_1b5b38;
        case 0x1b5b3cu: goto label_1b5b3c;
        case 0x1b5b40u: goto label_1b5b40;
        case 0x1b5b44u: goto label_1b5b44;
        case 0x1b5b48u: goto label_1b5b48;
        case 0x1b5b4cu: goto label_1b5b4c;
        case 0x1b5b50u: goto label_1b5b50;
        case 0x1b5b54u: goto label_1b5b54;
        case 0x1b5b58u: goto label_1b5b58;
        case 0x1b5b5cu: goto label_1b5b5c;
        case 0x1b5b60u: goto label_1b5b60;
        case 0x1b5b64u: goto label_1b5b64;
        case 0x1b5b68u: goto label_1b5b68;
        case 0x1b5b6cu: goto label_1b5b6c;
        case 0x1b5b70u: goto label_1b5b70;
        case 0x1b5b74u: goto label_1b5b74;
        case 0x1b5b78u: goto label_1b5b78;
        case 0x1b5b7cu: goto label_1b5b7c;
        case 0x1b5b80u: goto label_1b5b80;
        case 0x1b5b84u: goto label_1b5b84;
        case 0x1b5b88u: goto label_1b5b88;
        case 0x1b5b8cu: goto label_1b5b8c;
        case 0x1b5b90u: goto label_1b5b90;
        case 0x1b5b94u: goto label_1b5b94;
        case 0x1b5b98u: goto label_1b5b98;
        case 0x1b5b9cu: goto label_1b5b9c;
        case 0x1b5ba0u: goto label_1b5ba0;
        case 0x1b5ba4u: goto label_1b5ba4;
        case 0x1b5ba8u: goto label_1b5ba8;
        case 0x1b5bacu: goto label_1b5bac;
        case 0x1b5bb0u: goto label_1b5bb0;
        case 0x1b5bb4u: goto label_1b5bb4;
        case 0x1b5bb8u: goto label_1b5bb8;
        case 0x1b5bbcu: goto label_1b5bbc;
        case 0x1b5bc0u: goto label_1b5bc0;
        case 0x1b5bc4u: goto label_1b5bc4;
        case 0x1b5bc8u: goto label_1b5bc8;
        case 0x1b5bccu: goto label_1b5bcc;
        case 0x1b5bd0u: goto label_1b5bd0;
        case 0x1b5bd4u: goto label_1b5bd4;
        case 0x1b5bd8u: goto label_1b5bd8;
        case 0x1b5bdcu: goto label_1b5bdc;
        case 0x1b5be0u: goto label_1b5be0;
        case 0x1b5be4u: goto label_1b5be4;
        case 0x1b5be8u: goto label_1b5be8;
        case 0x1b5becu: goto label_1b5bec;
        case 0x1b5bf0u: goto label_1b5bf0;
        case 0x1b5bf4u: goto label_1b5bf4;
        case 0x1b5bf8u: goto label_1b5bf8;
        case 0x1b5bfcu: goto label_1b5bfc;
        case 0x1b5c00u: goto label_1b5c00;
        case 0x1b5c04u: goto label_1b5c04;
        case 0x1b5c08u: goto label_1b5c08;
        case 0x1b5c0cu: goto label_1b5c0c;
        case 0x1b5c10u: goto label_1b5c10;
        case 0x1b5c14u: goto label_1b5c14;
        case 0x1b5c18u: goto label_1b5c18;
        case 0x1b5c1cu: goto label_1b5c1c;
        case 0x1b5c20u: goto label_1b5c20;
        case 0x1b5c24u: goto label_1b5c24;
        case 0x1b5c28u: goto label_1b5c28;
        case 0x1b5c2cu: goto label_1b5c2c;
        case 0x1b5c30u: goto label_1b5c30;
        case 0x1b5c34u: goto label_1b5c34;
        case 0x1b5c38u: goto label_1b5c38;
        case 0x1b5c3cu: goto label_1b5c3c;
        case 0x1b5c40u: goto label_1b5c40;
        case 0x1b5c44u: goto label_1b5c44;
        case 0x1b5c48u: goto label_1b5c48;
        case 0x1b5c4cu: goto label_1b5c4c;
        case 0x1b5c50u: goto label_1b5c50;
        case 0x1b5c54u: goto label_1b5c54;
        case 0x1b5c58u: goto label_1b5c58;
        case 0x1b5c5cu: goto label_1b5c5c;
        case 0x1b5c60u: goto label_1b5c60;
        case 0x1b5c64u: goto label_1b5c64;
        case 0x1b5c68u: goto label_1b5c68;
        case 0x1b5c6cu: goto label_1b5c6c;
        case 0x1b5c70u: goto label_1b5c70;
        case 0x1b5c74u: goto label_1b5c74;
        case 0x1b5c78u: goto label_1b5c78;
        case 0x1b5c7cu: goto label_1b5c7c;
        case 0x1b5c80u: goto label_1b5c80;
        case 0x1b5c84u: goto label_1b5c84;
        case 0x1b5c88u: goto label_1b5c88;
        case 0x1b5c8cu: goto label_1b5c8c;
        case 0x1b5c90u: goto label_1b5c90;
        case 0x1b5c94u: goto label_1b5c94;
        case 0x1b5c98u: goto label_1b5c98;
        case 0x1b5c9cu: goto label_1b5c9c;
        case 0x1b5ca0u: goto label_1b5ca0;
        case 0x1b5ca4u: goto label_1b5ca4;
        case 0x1b5ca8u: goto label_1b5ca8;
        case 0x1b5cacu: goto label_1b5cac;
        case 0x1b5cb0u: goto label_1b5cb0;
        case 0x1b5cb4u: goto label_1b5cb4;
        case 0x1b5cb8u: goto label_1b5cb8;
        case 0x1b5cbcu: goto label_1b5cbc;
        case 0x1b5cc0u: goto label_1b5cc0;
        case 0x1b5cc4u: goto label_1b5cc4;
        case 0x1b5cc8u: goto label_1b5cc8;
        case 0x1b5cccu: goto label_1b5ccc;
        case 0x1b5cd0u: goto label_1b5cd0;
        case 0x1b5cd4u: goto label_1b5cd4;
        case 0x1b5cd8u: goto label_1b5cd8;
        case 0x1b5cdcu: goto label_1b5cdc;
        case 0x1b5ce0u: goto label_1b5ce0;
        case 0x1b5ce4u: goto label_1b5ce4;
        case 0x1b5ce8u: goto label_1b5ce8;
        case 0x1b5cecu: goto label_1b5cec;
        case 0x1b5cf0u: goto label_1b5cf0;
        case 0x1b5cf4u: goto label_1b5cf4;
        case 0x1b5cf8u: goto label_1b5cf8;
        case 0x1b5cfcu: goto label_1b5cfc;
        case 0x1b5d00u: goto label_1b5d00;
        case 0x1b5d04u: goto label_1b5d04;
        case 0x1b5d08u: goto label_1b5d08;
        case 0x1b5d0cu: goto label_1b5d0c;
        case 0x1b5d10u: goto label_1b5d10;
        case 0x1b5d14u: goto label_1b5d14;
        case 0x1b5d18u: goto label_1b5d18;
        case 0x1b5d1cu: goto label_1b5d1c;
        case 0x1b5d20u: goto label_1b5d20;
        case 0x1b5d24u: goto label_1b5d24;
        case 0x1b5d28u: goto label_1b5d28;
        case 0x1b5d2cu: goto label_1b5d2c;
        case 0x1b5d30u: goto label_1b5d30;
        case 0x1b5d34u: goto label_1b5d34;
        case 0x1b5d38u: goto label_1b5d38;
        case 0x1b5d3cu: goto label_1b5d3c;
        case 0x1b5d40u: goto label_1b5d40;
        case 0x1b5d44u: goto label_1b5d44;
        case 0x1b5d48u: goto label_1b5d48;
        case 0x1b5d4cu: goto label_1b5d4c;
        case 0x1b5d50u: goto label_1b5d50;
        case 0x1b5d54u: goto label_1b5d54;
        case 0x1b5d58u: goto label_1b5d58;
        case 0x1b5d5cu: goto label_1b5d5c;
        case 0x1b5d60u: goto label_1b5d60;
        case 0x1b5d64u: goto label_1b5d64;
        case 0x1b5d68u: goto label_1b5d68;
        case 0x1b5d6cu: goto label_1b5d6c;
        case 0x1b5d70u: goto label_1b5d70;
        case 0x1b5d74u: goto label_1b5d74;
        case 0x1b5d78u: goto label_1b5d78;
        case 0x1b5d7cu: goto label_1b5d7c;
        case 0x1b5d80u: goto label_1b5d80;
        case 0x1b5d84u: goto label_1b5d84;
        case 0x1b5d88u: goto label_1b5d88;
        case 0x1b5d8cu: goto label_1b5d8c;
        case 0x1b5d90u: goto label_1b5d90;
        case 0x1b5d94u: goto label_1b5d94;
        case 0x1b5d98u: goto label_1b5d98;
        case 0x1b5d9cu: goto label_1b5d9c;
        case 0x1b5da0u: goto label_1b5da0;
        case 0x1b5da4u: goto label_1b5da4;
        case 0x1b5da8u: goto label_1b5da8;
        case 0x1b5dacu: goto label_1b5dac;
        case 0x1b5db0u: goto label_1b5db0;
        case 0x1b5db4u: goto label_1b5db4;
        case 0x1b5db8u: goto label_1b5db8;
        case 0x1b5dbcu: goto label_1b5dbc;
        case 0x1b5dc0u: goto label_1b5dc0;
        case 0x1b5dc4u: goto label_1b5dc4;
        case 0x1b5dc8u: goto label_1b5dc8;
        case 0x1b5dccu: goto label_1b5dcc;
        case 0x1b5dd0u: goto label_1b5dd0;
        case 0x1b5dd4u: goto label_1b5dd4;
        case 0x1b5dd8u: goto label_1b5dd8;
        case 0x1b5ddcu: goto label_1b5ddc;
        case 0x1b5de0u: goto label_1b5de0;
        case 0x1b5de4u: goto label_1b5de4;
        case 0x1b5de8u: goto label_1b5de8;
        case 0x1b5decu: goto label_1b5dec;
        case 0x1b5df0u: goto label_1b5df0;
        case 0x1b5df4u: goto label_1b5df4;
        case 0x1b5df8u: goto label_1b5df8;
        case 0x1b5dfcu: goto label_1b5dfc;
        case 0x1b5e00u: goto label_1b5e00;
        case 0x1b5e04u: goto label_1b5e04;
        case 0x1b5e08u: goto label_1b5e08;
        case 0x1b5e0cu: goto label_1b5e0c;
        case 0x1b5e10u: goto label_1b5e10;
        case 0x1b5e14u: goto label_1b5e14;
        case 0x1b5e18u: goto label_1b5e18;
        case 0x1b5e1cu: goto label_1b5e1c;
        case 0x1b5e20u: goto label_1b5e20;
        case 0x1b5e24u: goto label_1b5e24;
        case 0x1b5e28u: goto label_1b5e28;
        case 0x1b5e2cu: goto label_1b5e2c;
        case 0x1b5e30u: goto label_1b5e30;
        case 0x1b5e34u: goto label_1b5e34;
        case 0x1b5e38u: goto label_1b5e38;
        case 0x1b5e3cu: goto label_1b5e3c;
        case 0x1b5e40u: goto label_1b5e40;
        case 0x1b5e44u: goto label_1b5e44;
        case 0x1b5e48u: goto label_1b5e48;
        case 0x1b5e4cu: goto label_1b5e4c;
        case 0x1b5e50u: goto label_1b5e50;
        case 0x1b5e54u: goto label_1b5e54;
        case 0x1b5e58u: goto label_1b5e58;
        case 0x1b5e5cu: goto label_1b5e5c;
        case 0x1b5e60u: goto label_1b5e60;
        case 0x1b5e64u: goto label_1b5e64;
        case 0x1b5e68u: goto label_1b5e68;
        case 0x1b5e6cu: goto label_1b5e6c;
        case 0x1b5e70u: goto label_1b5e70;
        case 0x1b5e74u: goto label_1b5e74;
        case 0x1b5e78u: goto label_1b5e78;
        case 0x1b5e7cu: goto label_1b5e7c;
        case 0x1b5e80u: goto label_1b5e80;
        case 0x1b5e84u: goto label_1b5e84;
        case 0x1b5e88u: goto label_1b5e88;
        case 0x1b5e8cu: goto label_1b5e8c;
        case 0x1b5e90u: goto label_1b5e90;
        case 0x1b5e94u: goto label_1b5e94;
        case 0x1b5e98u: goto label_1b5e98;
        case 0x1b5e9cu: goto label_1b5e9c;
        case 0x1b5ea0u: goto label_1b5ea0;
        case 0x1b5ea4u: goto label_1b5ea4;
        case 0x1b5ea8u: goto label_1b5ea8;
        case 0x1b5eacu: goto label_1b5eac;
        case 0x1b5eb0u: goto label_1b5eb0;
        case 0x1b5eb4u: goto label_1b5eb4;
        case 0x1b5eb8u: goto label_1b5eb8;
        case 0x1b5ebcu: goto label_1b5ebc;
        case 0x1b5ec0u: goto label_1b5ec0;
        case 0x1b5ec4u: goto label_1b5ec4;
        case 0x1b5ec8u: goto label_1b5ec8;
        case 0x1b5eccu: goto label_1b5ecc;
        case 0x1b5ed0u: goto label_1b5ed0;
        case 0x1b5ed4u: goto label_1b5ed4;
        case 0x1b5ed8u: goto label_1b5ed8;
        case 0x1b5edcu: goto label_1b5edc;
        case 0x1b5ee0u: goto label_1b5ee0;
        case 0x1b5ee4u: goto label_1b5ee4;
        case 0x1b5ee8u: goto label_1b5ee8;
        case 0x1b5eecu: goto label_1b5eec;
        case 0x1b5ef0u: goto label_1b5ef0;
        case 0x1b5ef4u: goto label_1b5ef4;
        case 0x1b5ef8u: goto label_1b5ef8;
        case 0x1b5efcu: goto label_1b5efc;
        case 0x1b5f00u: goto label_1b5f00;
        case 0x1b5f04u: goto label_1b5f04;
        case 0x1b5f08u: goto label_1b5f08;
        case 0x1b5f0cu: goto label_1b5f0c;
        case 0x1b5f10u: goto label_1b5f10;
        case 0x1b5f14u: goto label_1b5f14;
        case 0x1b5f18u: goto label_1b5f18;
        case 0x1b5f1cu: goto label_1b5f1c;
        case 0x1b5f20u: goto label_1b5f20;
        case 0x1b5f24u: goto label_1b5f24;
        case 0x1b5f28u: goto label_1b5f28;
        case 0x1b5f2cu: goto label_1b5f2c;
        case 0x1b5f30u: goto label_1b5f30;
        case 0x1b5f34u: goto label_1b5f34;
        case 0x1b5f38u: goto label_1b5f38;
        case 0x1b5f3cu: goto label_1b5f3c;
        case 0x1b5f40u: goto label_1b5f40;
        case 0x1b5f44u: goto label_1b5f44;
        case 0x1b5f48u: goto label_1b5f48;
        case 0x1b5f4cu: goto label_1b5f4c;
        case 0x1b5f50u: goto label_1b5f50;
        case 0x1b5f54u: goto label_1b5f54;
        case 0x1b5f58u: goto label_1b5f58;
        case 0x1b5f5cu: goto label_1b5f5c;
        case 0x1b5f60u: goto label_1b5f60;
        case 0x1b5f64u: goto label_1b5f64;
        case 0x1b5f68u: goto label_1b5f68;
        case 0x1b5f6cu: goto label_1b5f6c;
        case 0x1b5f70u: goto label_1b5f70;
        case 0x1b5f74u: goto label_1b5f74;
        case 0x1b5f78u: goto label_1b5f78;
        case 0x1b5f7cu: goto label_1b5f7c;
        case 0x1b5f80u: goto label_1b5f80;
        case 0x1b5f84u: goto label_1b5f84;
        case 0x1b5f88u: goto label_1b5f88;
        case 0x1b5f8cu: goto label_1b5f8c;
        case 0x1b5f90u: goto label_1b5f90;
        case 0x1b5f94u: goto label_1b5f94;
        case 0x1b5f98u: goto label_1b5f98;
        case 0x1b5f9cu: goto label_1b5f9c;
        case 0x1b5fa0u: goto label_1b5fa0;
        case 0x1b5fa4u: goto label_1b5fa4;
        case 0x1b5fa8u: goto label_1b5fa8;
        case 0x1b5facu: goto label_1b5fac;
        case 0x1b5fb0u: goto label_1b5fb0;
        case 0x1b5fb4u: goto label_1b5fb4;
        case 0x1b5fb8u: goto label_1b5fb8;
        case 0x1b5fbcu: goto label_1b5fbc;
        case 0x1b5fc0u: goto label_1b5fc0;
        case 0x1b5fc4u: goto label_1b5fc4;
        case 0x1b5fc8u: goto label_1b5fc8;
        case 0x1b5fccu: goto label_1b5fcc;
        case 0x1b5fd0u: goto label_1b5fd0;
        case 0x1b5fd4u: goto label_1b5fd4;
        case 0x1b5fd8u: goto label_1b5fd8;
        case 0x1b5fdcu: goto label_1b5fdc;
        case 0x1b5fe0u: goto label_1b5fe0;
        case 0x1b5fe4u: goto label_1b5fe4;
        case 0x1b5fe8u: goto label_1b5fe8;
        case 0x1b5fecu: goto label_1b5fec;
        case 0x1b5ff0u: goto label_1b5ff0;
        case 0x1b5ff4u: goto label_1b5ff4;
        case 0x1b5ff8u: goto label_1b5ff8;
        case 0x1b5ffcu: goto label_1b5ffc;
        case 0x1b6000u: goto label_1b6000;
        case 0x1b6004u: goto label_1b6004;
        case 0x1b6008u: goto label_1b6008;
        case 0x1b600cu: goto label_1b600c;
        case 0x1b6010u: goto label_1b6010;
        case 0x1b6014u: goto label_1b6014;
        case 0x1b6018u: goto label_1b6018;
        case 0x1b601cu: goto label_1b601c;
        case 0x1b6020u: goto label_1b6020;
        case 0x1b6024u: goto label_1b6024;
        case 0x1b6028u: goto label_1b6028;
        case 0x1b602cu: goto label_1b602c;
        case 0x1b6030u: goto label_1b6030;
        case 0x1b6034u: goto label_1b6034;
        case 0x1b6038u: goto label_1b6038;
        case 0x1b603cu: goto label_1b603c;
        case 0x1b6040u: goto label_1b6040;
        case 0x1b6044u: goto label_1b6044;
        case 0x1b6048u: goto label_1b6048;
        case 0x1b604cu: goto label_1b604c;
        case 0x1b6050u: goto label_1b6050;
        case 0x1b6054u: goto label_1b6054;
        case 0x1b6058u: goto label_1b6058;
        case 0x1b605cu: goto label_1b605c;
        case 0x1b6060u: goto label_1b6060;
        case 0x1b6064u: goto label_1b6064;
        case 0x1b6068u: goto label_1b6068;
        case 0x1b606cu: goto label_1b606c;
        case 0x1b6070u: goto label_1b6070;
        case 0x1b6074u: goto label_1b6074;
        case 0x1b6078u: goto label_1b6078;
        case 0x1b607cu: goto label_1b607c;
        case 0x1b6080u: goto label_1b6080;
        case 0x1b6084u: goto label_1b6084;
        case 0x1b6088u: goto label_1b6088;
        case 0x1b608cu: goto label_1b608c;
        case 0x1b6090u: goto label_1b6090;
        case 0x1b6094u: goto label_1b6094;
        case 0x1b6098u: goto label_1b6098;
        case 0x1b609cu: goto label_1b609c;
        case 0x1b60a0u: goto label_1b60a0;
        case 0x1b60a4u: goto label_1b60a4;
        case 0x1b60a8u: goto label_1b60a8;
        case 0x1b60acu: goto label_1b60ac;
        case 0x1b60b0u: goto label_1b60b0;
        case 0x1b60b4u: goto label_1b60b4;
        case 0x1b60b8u: goto label_1b60b8;
        case 0x1b60bcu: goto label_1b60bc;
        case 0x1b60c0u: goto label_1b60c0;
        case 0x1b60c4u: goto label_1b60c4;
        case 0x1b60c8u: goto label_1b60c8;
        case 0x1b60ccu: goto label_1b60cc;
        case 0x1b60d0u: goto label_1b60d0;
        case 0x1b60d4u: goto label_1b60d4;
        case 0x1b60d8u: goto label_1b60d8;
        case 0x1b60dcu: goto label_1b60dc;
        case 0x1b60e0u: goto label_1b60e0;
        case 0x1b60e4u: goto label_1b60e4;
        case 0x1b60e8u: goto label_1b60e8;
        case 0x1b60ecu: goto label_1b60ec;
        case 0x1b60f0u: goto label_1b60f0;
        case 0x1b60f4u: goto label_1b60f4;
        case 0x1b60f8u: goto label_1b60f8;
        case 0x1b60fcu: goto label_1b60fc;
        case 0x1b6100u: goto label_1b6100;
        case 0x1b6104u: goto label_1b6104;
        case 0x1b6108u: goto label_1b6108;
        case 0x1b610cu: goto label_1b610c;
        case 0x1b6110u: goto label_1b6110;
        case 0x1b6114u: goto label_1b6114;
        case 0x1b6118u: goto label_1b6118;
        case 0x1b611cu: goto label_1b611c;
        case 0x1b6120u: goto label_1b6120;
        case 0x1b6124u: goto label_1b6124;
        case 0x1b6128u: goto label_1b6128;
        case 0x1b612cu: goto label_1b612c;
        case 0x1b6130u: goto label_1b6130;
        case 0x1b6134u: goto label_1b6134;
        case 0x1b6138u: goto label_1b6138;
        case 0x1b613cu: goto label_1b613c;
        case 0x1b6140u: goto label_1b6140;
        case 0x1b6144u: goto label_1b6144;
        case 0x1b6148u: goto label_1b6148;
        case 0x1b614cu: goto label_1b614c;
        case 0x1b6150u: goto label_1b6150;
        case 0x1b6154u: goto label_1b6154;
        case 0x1b6158u: goto label_1b6158;
        case 0x1b615cu: goto label_1b615c;
        case 0x1b6160u: goto label_1b6160;
        case 0x1b6164u: goto label_1b6164;
        case 0x1b6168u: goto label_1b6168;
        case 0x1b616cu: goto label_1b616c;
        case 0x1b6170u: goto label_1b6170;
        case 0x1b6174u: goto label_1b6174;
        case 0x1b6178u: goto label_1b6178;
        case 0x1b617cu: goto label_1b617c;
        case 0x1b6180u: goto label_1b6180;
        case 0x1b6184u: goto label_1b6184;
        case 0x1b6188u: goto label_1b6188;
        case 0x1b618cu: goto label_1b618c;
        case 0x1b6190u: goto label_1b6190;
        case 0x1b6194u: goto label_1b6194;
        case 0x1b6198u: goto label_1b6198;
        case 0x1b619cu: goto label_1b619c;
        case 0x1b61a0u: goto label_1b61a0;
        case 0x1b61a4u: goto label_1b61a4;
        case 0x1b61a8u: goto label_1b61a8;
        case 0x1b61acu: goto label_1b61ac;
        case 0x1b61b0u: goto label_1b61b0;
        case 0x1b61b4u: goto label_1b61b4;
        case 0x1b61b8u: goto label_1b61b8;
        case 0x1b61bcu: goto label_1b61bc;
        case 0x1b61c0u: goto label_1b61c0;
        case 0x1b61c4u: goto label_1b61c4;
        case 0x1b61c8u: goto label_1b61c8;
        case 0x1b61ccu: goto label_1b61cc;
        case 0x1b61d0u: goto label_1b61d0;
        case 0x1b61d4u: goto label_1b61d4;
        case 0x1b61d8u: goto label_1b61d8;
        case 0x1b61dcu: goto label_1b61dc;
        case 0x1b61e0u: goto label_1b61e0;
        case 0x1b61e4u: goto label_1b61e4;
        case 0x1b61e8u: goto label_1b61e8;
        case 0x1b61ecu: goto label_1b61ec;
        case 0x1b61f0u: goto label_1b61f0;
        case 0x1b61f4u: goto label_1b61f4;
        case 0x1b61f8u: goto label_1b61f8;
        case 0x1b61fcu: goto label_1b61fc;
        case 0x1b6200u: goto label_1b6200;
        case 0x1b6204u: goto label_1b6204;
        case 0x1b6208u: goto label_1b6208;
        case 0x1b620cu: goto label_1b620c;
        case 0x1b6210u: goto label_1b6210;
        case 0x1b6214u: goto label_1b6214;
        case 0x1b6218u: goto label_1b6218;
        case 0x1b621cu: goto label_1b621c;
        case 0x1b6220u: goto label_1b6220;
        case 0x1b6224u: goto label_1b6224;
        case 0x1b6228u: goto label_1b6228;
        case 0x1b622cu: goto label_1b622c;
        case 0x1b6230u: goto label_1b6230;
        case 0x1b6234u: goto label_1b6234;
        case 0x1b6238u: goto label_1b6238;
        case 0x1b623cu: goto label_1b623c;
        case 0x1b6240u: goto label_1b6240;
        case 0x1b6244u: goto label_1b6244;
        case 0x1b6248u: goto label_1b6248;
        case 0x1b624cu: goto label_1b624c;
        case 0x1b6250u: goto label_1b6250;
        case 0x1b6254u: goto label_1b6254;
        case 0x1b6258u: goto label_1b6258;
        case 0x1b625cu: goto label_1b625c;
        case 0x1b6260u: goto label_1b6260;
        case 0x1b6264u: goto label_1b6264;
        case 0x1b6268u: goto label_1b6268;
        case 0x1b626cu: goto label_1b626c;
        case 0x1b6270u: goto label_1b6270;
        case 0x1b6274u: goto label_1b6274;
        case 0x1b6278u: goto label_1b6278;
        case 0x1b627cu: goto label_1b627c;
        case 0x1b6280u: goto label_1b6280;
        case 0x1b6284u: goto label_1b6284;
        case 0x1b6288u: goto label_1b6288;
        case 0x1b628cu: goto label_1b628c;
        case 0x1b6290u: goto label_1b6290;
        case 0x1b6294u: goto label_1b6294;
        case 0x1b6298u: goto label_1b6298;
        case 0x1b629cu: goto label_1b629c;
        case 0x1b62a0u: goto label_1b62a0;
        case 0x1b62a4u: goto label_1b62a4;
        case 0x1b62a8u: goto label_1b62a8;
        case 0x1b62acu: goto label_1b62ac;
        case 0x1b62b0u: goto label_1b62b0;
        case 0x1b62b4u: goto label_1b62b4;
        case 0x1b62b8u: goto label_1b62b8;
        case 0x1b62bcu: goto label_1b62bc;
        case 0x1b62c0u: goto label_1b62c0;
        case 0x1b62c4u: goto label_1b62c4;
        case 0x1b62c8u: goto label_1b62c8;
        case 0x1b62ccu: goto label_1b62cc;
        case 0x1b62d0u: goto label_1b62d0;
        case 0x1b62d4u: goto label_1b62d4;
        case 0x1b62d8u: goto label_1b62d8;
        case 0x1b62dcu: goto label_1b62dc;
        case 0x1b62e0u: goto label_1b62e0;
        case 0x1b62e4u: goto label_1b62e4;
        case 0x1b62e8u: goto label_1b62e8;
        case 0x1b62ecu: goto label_1b62ec;
        case 0x1b62f0u: goto label_1b62f0;
        case 0x1b62f4u: goto label_1b62f4;
        case 0x1b62f8u: goto label_1b62f8;
        case 0x1b62fcu: goto label_1b62fc;
        case 0x1b6300u: goto label_1b6300;
        case 0x1b6304u: goto label_1b6304;
        case 0x1b6308u: goto label_1b6308;
        case 0x1b630cu: goto label_1b630c;
        case 0x1b6310u: goto label_1b6310;
        case 0x1b6314u: goto label_1b6314;
        case 0x1b6318u: goto label_1b6318;
        case 0x1b631cu: goto label_1b631c;
        case 0x1b6320u: goto label_1b6320;
        case 0x1b6324u: goto label_1b6324;
        case 0x1b6328u: goto label_1b6328;
        case 0x1b632cu: goto label_1b632c;
        case 0x1b6330u: goto label_1b6330;
        case 0x1b6334u: goto label_1b6334;
        case 0x1b6338u: goto label_1b6338;
        case 0x1b633cu: goto label_1b633c;
        case 0x1b6340u: goto label_1b6340;
        case 0x1b6344u: goto label_1b6344;
        case 0x1b6348u: goto label_1b6348;
        case 0x1b634cu: goto label_1b634c;
        case 0x1b6350u: goto label_1b6350;
        case 0x1b6354u: goto label_1b6354;
        case 0x1b6358u: goto label_1b6358;
        case 0x1b635cu: goto label_1b635c;
        case 0x1b6360u: goto label_1b6360;
        case 0x1b6364u: goto label_1b6364;
        case 0x1b6368u: goto label_1b6368;
        case 0x1b636cu: goto label_1b636c;
        case 0x1b6370u: goto label_1b6370;
        case 0x1b6374u: goto label_1b6374;
        case 0x1b6378u: goto label_1b6378;
        case 0x1b637cu: goto label_1b637c;
        case 0x1b6380u: goto label_1b6380;
        case 0x1b6384u: goto label_1b6384;
        case 0x1b6388u: goto label_1b6388;
        case 0x1b638cu: goto label_1b638c;
        case 0x1b6390u: goto label_1b6390;
        case 0x1b6394u: goto label_1b6394;
        case 0x1b6398u: goto label_1b6398;
        case 0x1b639cu: goto label_1b639c;
        case 0x1b63a0u: goto label_1b63a0;
        case 0x1b63a4u: goto label_1b63a4;
        case 0x1b63a8u: goto label_1b63a8;
        case 0x1b63acu: goto label_1b63ac;
        case 0x1b63b0u: goto label_1b63b0;
        case 0x1b63b4u: goto label_1b63b4;
        case 0x1b63b8u: goto label_1b63b8;
        case 0x1b63bcu: goto label_1b63bc;
        case 0x1b63c0u: goto label_1b63c0;
        case 0x1b63c4u: goto label_1b63c4;
        case 0x1b63c8u: goto label_1b63c8;
        case 0x1b63ccu: goto label_1b63cc;
        case 0x1b63d0u: goto label_1b63d0;
        case 0x1b63d4u: goto label_1b63d4;
        case 0x1b63d8u: goto label_1b63d8;
        case 0x1b63dcu: goto label_1b63dc;
        case 0x1b63e0u: goto label_1b63e0;
        case 0x1b63e4u: goto label_1b63e4;
        case 0x1b63e8u: goto label_1b63e8;
        case 0x1b63ecu: goto label_1b63ec;
        case 0x1b63f0u: goto label_1b63f0;
        case 0x1b63f4u: goto label_1b63f4;
        case 0x1b63f8u: goto label_1b63f8;
        case 0x1b63fcu: goto label_1b63fc;
        case 0x1b6400u: goto label_1b6400;
        case 0x1b6404u: goto label_1b6404;
        case 0x1b6408u: goto label_1b6408;
        case 0x1b640cu: goto label_1b640c;
        case 0x1b6410u: goto label_1b6410;
        case 0x1b6414u: goto label_1b6414;
        case 0x1b6418u: goto label_1b6418;
        case 0x1b641cu: goto label_1b641c;
        case 0x1b6420u: goto label_1b6420;
        case 0x1b6424u: goto label_1b6424;
        case 0x1b6428u: goto label_1b6428;
        case 0x1b642cu: goto label_1b642c;
        case 0x1b6430u: goto label_1b6430;
        case 0x1b6434u: goto label_1b6434;
        case 0x1b6438u: goto label_1b6438;
        case 0x1b643cu: goto label_1b643c;
        case 0x1b6440u: goto label_1b6440;
        case 0x1b6444u: goto label_1b6444;
        case 0x1b6448u: goto label_1b6448;
        case 0x1b644cu: goto label_1b644c;
        case 0x1b6450u: goto label_1b6450;
        case 0x1b6454u: goto label_1b6454;
        case 0x1b6458u: goto label_1b6458;
        case 0x1b645cu: goto label_1b645c;
        case 0x1b6460u: goto label_1b6460;
        case 0x1b6464u: goto label_1b6464;
        case 0x1b6468u: goto label_1b6468;
        case 0x1b646cu: goto label_1b646c;
        case 0x1b6470u: goto label_1b6470;
        case 0x1b6474u: goto label_1b6474;
        case 0x1b6478u: goto label_1b6478;
        case 0x1b647cu: goto label_1b647c;
        case 0x1b6480u: goto label_1b6480;
        case 0x1b6484u: goto label_1b6484;
        case 0x1b6488u: goto label_1b6488;
        case 0x1b648cu: goto label_1b648c;
        case 0x1b6490u: goto label_1b6490;
        case 0x1b6494u: goto label_1b6494;
        case 0x1b6498u: goto label_1b6498;
        case 0x1b649cu: goto label_1b649c;
        case 0x1b64a0u: goto label_1b64a0;
        case 0x1b64a4u: goto label_1b64a4;
        case 0x1b64a8u: goto label_1b64a8;
        case 0x1b64acu: goto label_1b64ac;
        case 0x1b64b0u: goto label_1b64b0;
        case 0x1b64b4u: goto label_1b64b4;
        case 0x1b64b8u: goto label_1b64b8;
        case 0x1b64bcu: goto label_1b64bc;
        case 0x1b64c0u: goto label_1b64c0;
        case 0x1b64c4u: goto label_1b64c4;
        case 0x1b64c8u: goto label_1b64c8;
        case 0x1b64ccu: goto label_1b64cc;
        case 0x1b64d0u: goto label_1b64d0;
        case 0x1b64d4u: goto label_1b64d4;
        case 0x1b64d8u: goto label_1b64d8;
        case 0x1b64dcu: goto label_1b64dc;
        case 0x1b64e0u: goto label_1b64e0;
        case 0x1b64e4u: goto label_1b64e4;
        case 0x1b64e8u: goto label_1b64e8;
        case 0x1b64ecu: goto label_1b64ec;
        case 0x1b64f0u: goto label_1b64f0;
        case 0x1b64f4u: goto label_1b64f4;
        case 0x1b64f8u: goto label_1b64f8;
        case 0x1b64fcu: goto label_1b64fc;
        case 0x1b6500u: goto label_1b6500;
        case 0x1b6504u: goto label_1b6504;
        case 0x1b6508u: goto label_1b6508;
        case 0x1b650cu: goto label_1b650c;
        case 0x1b6510u: goto label_1b6510;
        case 0x1b6514u: goto label_1b6514;
        case 0x1b6518u: goto label_1b6518;
        case 0x1b651cu: goto label_1b651c;
        case 0x1b6520u: goto label_1b6520;
        case 0x1b6524u: goto label_1b6524;
        case 0x1b6528u: goto label_1b6528;
        case 0x1b652cu: goto label_1b652c;
        case 0x1b6530u: goto label_1b6530;
        case 0x1b6534u: goto label_1b6534;
        case 0x1b6538u: goto label_1b6538;
        case 0x1b653cu: goto label_1b653c;
        case 0x1b6540u: goto label_1b6540;
        case 0x1b6544u: goto label_1b6544;
        case 0x1b6548u: goto label_1b6548;
        case 0x1b654cu: goto label_1b654c;
        case 0x1b6550u: goto label_1b6550;
        case 0x1b6554u: goto label_1b6554;
        case 0x1b6558u: goto label_1b6558;
        case 0x1b655cu: goto label_1b655c;
        case 0x1b6560u: goto label_1b6560;
        case 0x1b6564u: goto label_1b6564;
        case 0x1b6568u: goto label_1b6568;
        case 0x1b656cu: goto label_1b656c;
        case 0x1b6570u: goto label_1b6570;
        case 0x1b6574u: goto label_1b6574;
        case 0x1b6578u: goto label_1b6578;
        case 0x1b657cu: goto label_1b657c;
        case 0x1b6580u: goto label_1b6580;
        case 0x1b6584u: goto label_1b6584;
        case 0x1b6588u: goto label_1b6588;
        case 0x1b658cu: goto label_1b658c;
        case 0x1b6590u: goto label_1b6590;
        case 0x1b6594u: goto label_1b6594;
        case 0x1b6598u: goto label_1b6598;
        case 0x1b659cu: goto label_1b659c;
        case 0x1b65a0u: goto label_1b65a0;
        case 0x1b65a4u: goto label_1b65a4;
        case 0x1b65a8u: goto label_1b65a8;
        case 0x1b65acu: goto label_1b65ac;
        case 0x1b65b0u: goto label_1b65b0;
        case 0x1b65b4u: goto label_1b65b4;
        case 0x1b65b8u: goto label_1b65b8;
        case 0x1b65bcu: goto label_1b65bc;
        case 0x1b65c0u: goto label_1b65c0;
        case 0x1b65c4u: goto label_1b65c4;
        case 0x1b65c8u: goto label_1b65c8;
        case 0x1b65ccu: goto label_1b65cc;
        case 0x1b65d0u: goto label_1b65d0;
        case 0x1b65d4u: goto label_1b65d4;
        case 0x1b65d8u: goto label_1b65d8;
        case 0x1b65dcu: goto label_1b65dc;
        case 0x1b65e0u: goto label_1b65e0;
        case 0x1b65e4u: goto label_1b65e4;
        case 0x1b65e8u: goto label_1b65e8;
        case 0x1b65ecu: goto label_1b65ec;
        case 0x1b65f0u: goto label_1b65f0;
        case 0x1b65f4u: goto label_1b65f4;
        case 0x1b65f8u: goto label_1b65f8;
        case 0x1b65fcu: goto label_1b65fc;
        case 0x1b6600u: goto label_1b6600;
        case 0x1b6604u: goto label_1b6604;
        case 0x1b6608u: goto label_1b6608;
        case 0x1b660cu: goto label_1b660c;
        case 0x1b6610u: goto label_1b6610;
        case 0x1b6614u: goto label_1b6614;
        case 0x1b6618u: goto label_1b6618;
        case 0x1b661cu: goto label_1b661c;
        case 0x1b6620u: goto label_1b6620;
        case 0x1b6624u: goto label_1b6624;
        case 0x1b6628u: goto label_1b6628;
        case 0x1b662cu: goto label_1b662c;
        case 0x1b6630u: goto label_1b6630;
        case 0x1b6634u: goto label_1b6634;
        case 0x1b6638u: goto label_1b6638;
        case 0x1b663cu: goto label_1b663c;
        case 0x1b6640u: goto label_1b6640;
        case 0x1b6644u: goto label_1b6644;
        case 0x1b6648u: goto label_1b6648;
        case 0x1b664cu: goto label_1b664c;
        case 0x1b6650u: goto label_1b6650;
        case 0x1b6654u: goto label_1b6654;
        case 0x1b6658u: goto label_1b6658;
        case 0x1b665cu: goto label_1b665c;
        case 0x1b6660u: goto label_1b6660;
        case 0x1b6664u: goto label_1b6664;
        case 0x1b6668u: goto label_1b6668;
        case 0x1b666cu: goto label_1b666c;
        case 0x1b6670u: goto label_1b6670;
        case 0x1b6674u: goto label_1b6674;
        case 0x1b6678u: goto label_1b6678;
        case 0x1b667cu: goto label_1b667c;
        case 0x1b6680u: goto label_1b6680;
        case 0x1b6684u: goto label_1b6684;
        case 0x1b6688u: goto label_1b6688;
        case 0x1b668cu: goto label_1b668c;
        case 0x1b6690u: goto label_1b6690;
        case 0x1b6694u: goto label_1b6694;
        case 0x1b6698u: goto label_1b6698;
        case 0x1b669cu: goto label_1b669c;
        case 0x1b66a0u: goto label_1b66a0;
        case 0x1b66a4u: goto label_1b66a4;
        case 0x1b66a8u: goto label_1b66a8;
        case 0x1b66acu: goto label_1b66ac;
        case 0x1b66b0u: goto label_1b66b0;
        case 0x1b66b4u: goto label_1b66b4;
        case 0x1b66b8u: goto label_1b66b8;
        case 0x1b66bcu: goto label_1b66bc;
        case 0x1b66c0u: goto label_1b66c0;
        case 0x1b66c4u: goto label_1b66c4;
        case 0x1b66c8u: goto label_1b66c8;
        case 0x1b66ccu: goto label_1b66cc;
        case 0x1b66d0u: goto label_1b66d0;
        case 0x1b66d4u: goto label_1b66d4;
        case 0x1b66d8u: goto label_1b66d8;
        case 0x1b66dcu: goto label_1b66dc;
        case 0x1b66e0u: goto label_1b66e0;
        case 0x1b66e4u: goto label_1b66e4;
        case 0x1b66e8u: goto label_1b66e8;
        case 0x1b66ecu: goto label_1b66ec;
        case 0x1b66f0u: goto label_1b66f0;
        case 0x1b66f4u: goto label_1b66f4;
        case 0x1b66f8u: goto label_1b66f8;
        case 0x1b66fcu: goto label_1b66fc;
        case 0x1b6700u: goto label_1b6700;
        case 0x1b6704u: goto label_1b6704;
        case 0x1b6708u: goto label_1b6708;
        case 0x1b670cu: goto label_1b670c;
        case 0x1b6710u: goto label_1b6710;
        case 0x1b6714u: goto label_1b6714;
        case 0x1b6718u: goto label_1b6718;
        case 0x1b671cu: goto label_1b671c;
        case 0x1b6720u: goto label_1b6720;
        case 0x1b6724u: goto label_1b6724;
        case 0x1b6728u: goto label_1b6728;
        case 0x1b672cu: goto label_1b672c;
        case 0x1b6730u: goto label_1b6730;
        case 0x1b6734u: goto label_1b6734;
        case 0x1b6738u: goto label_1b6738;
        case 0x1b673cu: goto label_1b673c;
        case 0x1b6740u: goto label_1b6740;
        case 0x1b6744u: goto label_1b6744;
        case 0x1b6748u: goto label_1b6748;
        case 0x1b674cu: goto label_1b674c;
        case 0x1b6750u: goto label_1b6750;
        case 0x1b6754u: goto label_1b6754;
        case 0x1b6758u: goto label_1b6758;
        case 0x1b675cu: goto label_1b675c;
        case 0x1b6760u: goto label_1b6760;
        case 0x1b6764u: goto label_1b6764;
        case 0x1b6768u: goto label_1b6768;
        case 0x1b676cu: goto label_1b676c;
        case 0x1b6770u: goto label_1b6770;
        case 0x1b6774u: goto label_1b6774;
        case 0x1b6778u: goto label_1b6778;
        case 0x1b677cu: goto label_1b677c;
        case 0x1b6780u: goto label_1b6780;
        case 0x1b6784u: goto label_1b6784;
        case 0x1b6788u: goto label_1b6788;
        case 0x1b678cu: goto label_1b678c;
        case 0x1b6790u: goto label_1b6790;
        case 0x1b6794u: goto label_1b6794;
        case 0x1b6798u: goto label_1b6798;
        case 0x1b679cu: goto label_1b679c;
        case 0x1b67a0u: goto label_1b67a0;
        case 0x1b67a4u: goto label_1b67a4;
        case 0x1b67a8u: goto label_1b67a8;
        case 0x1b67acu: goto label_1b67ac;
        case 0x1b67b0u: goto label_1b67b0;
        case 0x1b67b4u: goto label_1b67b4;
        case 0x1b67b8u: goto label_1b67b8;
        case 0x1b67bcu: goto label_1b67bc;
        case 0x1b67c0u: goto label_1b67c0;
        case 0x1b67c4u: goto label_1b67c4;
        case 0x1b67c8u: goto label_1b67c8;
        case 0x1b67ccu: goto label_1b67cc;
        case 0x1b67d0u: goto label_1b67d0;
        case 0x1b67d4u: goto label_1b67d4;
        case 0x1b67d8u: goto label_1b67d8;
        case 0x1b67dcu: goto label_1b67dc;
        case 0x1b67e0u: goto label_1b67e0;
        case 0x1b67e4u: goto label_1b67e4;
        case 0x1b67e8u: goto label_1b67e8;
        case 0x1b67ecu: goto label_1b67ec;
        case 0x1b67f0u: goto label_1b67f0;
        case 0x1b67f4u: goto label_1b67f4;
        case 0x1b67f8u: goto label_1b67f8;
        case 0x1b67fcu: goto label_1b67fc;
        case 0x1b6800u: goto label_1b6800;
        case 0x1b6804u: goto label_1b6804;
        case 0x1b6808u: goto label_1b6808;
        case 0x1b680cu: goto label_1b680c;
        case 0x1b6810u: goto label_1b6810;
        case 0x1b6814u: goto label_1b6814;
        case 0x1b6818u: goto label_1b6818;
        case 0x1b681cu: goto label_1b681c;
        case 0x1b6820u: goto label_1b6820;
        case 0x1b6824u: goto label_1b6824;
        case 0x1b6828u: goto label_1b6828;
        case 0x1b682cu: goto label_1b682c;
        case 0x1b6830u: goto label_1b6830;
        case 0x1b6834u: goto label_1b6834;
        case 0x1b6838u: goto label_1b6838;
        case 0x1b683cu: goto label_1b683c;
        case 0x1b6840u: goto label_1b6840;
        case 0x1b6844u: goto label_1b6844;
        case 0x1b6848u: goto label_1b6848;
        case 0x1b684cu: goto label_1b684c;
        case 0x1b6850u: goto label_1b6850;
        case 0x1b6854u: goto label_1b6854;
        case 0x1b6858u: goto label_1b6858;
        case 0x1b685cu: goto label_1b685c;
        case 0x1b6860u: goto label_1b6860;
        case 0x1b6864u: goto label_1b6864;
        case 0x1b6868u: goto label_1b6868;
        case 0x1b686cu: goto label_1b686c;
        case 0x1b6870u: goto label_1b6870;
        case 0x1b6874u: goto label_1b6874;
        case 0x1b6878u: goto label_1b6878;
        case 0x1b687cu: goto label_1b687c;
        case 0x1b6880u: goto label_1b6880;
        case 0x1b6884u: goto label_1b6884;
        case 0x1b6888u: goto label_1b6888;
        case 0x1b688cu: goto label_1b688c;
        case 0x1b6890u: goto label_1b6890;
        case 0x1b6894u: goto label_1b6894;
        case 0x1b6898u: goto label_1b6898;
        case 0x1b689cu: goto label_1b689c;
        case 0x1b68a0u: goto label_1b68a0;
        case 0x1b68a4u: goto label_1b68a4;
        case 0x1b68a8u: goto label_1b68a8;
        case 0x1b68acu: goto label_1b68ac;
        case 0x1b68b0u: goto label_1b68b0;
        case 0x1b68b4u: goto label_1b68b4;
        case 0x1b68b8u: goto label_1b68b8;
        case 0x1b68bcu: goto label_1b68bc;
        case 0x1b68c0u: goto label_1b68c0;
        case 0x1b68c4u: goto label_1b68c4;
        case 0x1b68c8u: goto label_1b68c8;
        case 0x1b68ccu: goto label_1b68cc;
        case 0x1b68d0u: goto label_1b68d0;
        case 0x1b68d4u: goto label_1b68d4;
        case 0x1b68d8u: goto label_1b68d8;
        case 0x1b68dcu: goto label_1b68dc;
        case 0x1b68e0u: goto label_1b68e0;
        case 0x1b68e4u: goto label_1b68e4;
        case 0x1b68e8u: goto label_1b68e8;
        case 0x1b68ecu: goto label_1b68ec;
        case 0x1b68f0u: goto label_1b68f0;
        case 0x1b68f4u: goto label_1b68f4;
        case 0x1b68f8u: goto label_1b68f8;
        case 0x1b68fcu: goto label_1b68fc;
        case 0x1b6900u: goto label_1b6900;
        case 0x1b6904u: goto label_1b6904;
        case 0x1b6908u: goto label_1b6908;
        case 0x1b690cu: goto label_1b690c;
        case 0x1b6910u: goto label_1b6910;
        case 0x1b6914u: goto label_1b6914;
        case 0x1b6918u: goto label_1b6918;
        case 0x1b691cu: goto label_1b691c;
        case 0x1b6920u: goto label_1b6920;
        case 0x1b6924u: goto label_1b6924;
        case 0x1b6928u: goto label_1b6928;
        case 0x1b692cu: goto label_1b692c;
        case 0x1b6930u: goto label_1b6930;
        case 0x1b6934u: goto label_1b6934;
        case 0x1b6938u: goto label_1b6938;
        case 0x1b693cu: goto label_1b693c;
        case 0x1b6940u: goto label_1b6940;
        case 0x1b6944u: goto label_1b6944;
        case 0x1b6948u: goto label_1b6948;
        case 0x1b694cu: goto label_1b694c;
        case 0x1b6950u: goto label_1b6950;
        case 0x1b6954u: goto label_1b6954;
        case 0x1b6958u: goto label_1b6958;
        case 0x1b695cu: goto label_1b695c;
        case 0x1b6960u: goto label_1b6960;
        case 0x1b6964u: goto label_1b6964;
        case 0x1b6968u: goto label_1b6968;
        case 0x1b696cu: goto label_1b696c;
        case 0x1b6970u: goto label_1b6970;
        case 0x1b6974u: goto label_1b6974;
        case 0x1b6978u: goto label_1b6978;
        case 0x1b697cu: goto label_1b697c;
        case 0x1b6980u: goto label_1b6980;
        case 0x1b6984u: goto label_1b6984;
        case 0x1b6988u: goto label_1b6988;
        case 0x1b698cu: goto label_1b698c;
        case 0x1b6990u: goto label_1b6990;
        case 0x1b6994u: goto label_1b6994;
        case 0x1b6998u: goto label_1b6998;
        case 0x1b699cu: goto label_1b699c;
        case 0x1b69a0u: goto label_1b69a0;
        case 0x1b69a4u: goto label_1b69a4;
        case 0x1b69a8u: goto label_1b69a8;
        case 0x1b69acu: goto label_1b69ac;
        case 0x1b69b0u: goto label_1b69b0;
        case 0x1b69b4u: goto label_1b69b4;
        case 0x1b69b8u: goto label_1b69b8;
        case 0x1b69bcu: goto label_1b69bc;
        case 0x1b69c0u: goto label_1b69c0;
        case 0x1b69c4u: goto label_1b69c4;
        case 0x1b69c8u: goto label_1b69c8;
        case 0x1b69ccu: goto label_1b69cc;
        case 0x1b69d0u: goto label_1b69d0;
        case 0x1b69d4u: goto label_1b69d4;
        case 0x1b69d8u: goto label_1b69d8;
        case 0x1b69dcu: goto label_1b69dc;
        case 0x1b69e0u: goto label_1b69e0;
        case 0x1b69e4u: goto label_1b69e4;
        case 0x1b69e8u: goto label_1b69e8;
        case 0x1b69ecu: goto label_1b69ec;
        case 0x1b69f0u: goto label_1b69f0;
        case 0x1b69f4u: goto label_1b69f4;
        case 0x1b69f8u: goto label_1b69f8;
        case 0x1b69fcu: goto label_1b69fc;
        case 0x1b6a00u: goto label_1b6a00;
        case 0x1b6a04u: goto label_1b6a04;
        case 0x1b6a08u: goto label_1b6a08;
        case 0x1b6a0cu: goto label_1b6a0c;
        case 0x1b6a10u: goto label_1b6a10;
        case 0x1b6a14u: goto label_1b6a14;
        case 0x1b6a18u: goto label_1b6a18;
        case 0x1b6a1cu: goto label_1b6a1c;
        case 0x1b6a20u: goto label_1b6a20;
        case 0x1b6a24u: goto label_1b6a24;
        case 0x1b6a28u: goto label_1b6a28;
        case 0x1b6a2cu: goto label_1b6a2c;
        case 0x1b6a30u: goto label_1b6a30;
        case 0x1b6a34u: goto label_1b6a34;
        case 0x1b6a38u: goto label_1b6a38;
        case 0x1b6a3cu: goto label_1b6a3c;
        case 0x1b6a40u: goto label_1b6a40;
        case 0x1b6a44u: goto label_1b6a44;
        case 0x1b6a48u: goto label_1b6a48;
        case 0x1b6a4cu: goto label_1b6a4c;
        case 0x1b6a50u: goto label_1b6a50;
        case 0x1b6a54u: goto label_1b6a54;
        case 0x1b6a58u: goto label_1b6a58;
        case 0x1b6a5cu: goto label_1b6a5c;
        case 0x1b6a60u: goto label_1b6a60;
        case 0x1b6a64u: goto label_1b6a64;
        case 0x1b6a68u: goto label_1b6a68;
        case 0x1b6a6cu: goto label_1b6a6c;
        case 0x1b6a70u: goto label_1b6a70;
        case 0x1b6a74u: goto label_1b6a74;
        case 0x1b6a78u: goto label_1b6a78;
        case 0x1b6a7cu: goto label_1b6a7c;
        case 0x1b6a80u: goto label_1b6a80;
        case 0x1b6a84u: goto label_1b6a84;
        case 0x1b6a88u: goto label_1b6a88;
        case 0x1b6a8cu: goto label_1b6a8c;
        case 0x1b6a90u: goto label_1b6a90;
        case 0x1b6a94u: goto label_1b6a94;
        case 0x1b6a98u: goto label_1b6a98;
        case 0x1b6a9cu: goto label_1b6a9c;
        case 0x1b6aa0u: goto label_1b6aa0;
        case 0x1b6aa4u: goto label_1b6aa4;
        case 0x1b6aa8u: goto label_1b6aa8;
        case 0x1b6aacu: goto label_1b6aac;
        case 0x1b6ab0u: goto label_1b6ab0;
        case 0x1b6ab4u: goto label_1b6ab4;
        case 0x1b6ab8u: goto label_1b6ab8;
        case 0x1b6abcu: goto label_1b6abc;
        case 0x1b6ac0u: goto label_1b6ac0;
        case 0x1b6ac4u: goto label_1b6ac4;
        case 0x1b6ac8u: goto label_1b6ac8;
        case 0x1b6accu: goto label_1b6acc;
        case 0x1b6ad0u: goto label_1b6ad0;
        case 0x1b6ad4u: goto label_1b6ad4;
        case 0x1b6ad8u: goto label_1b6ad8;
        case 0x1b6adcu: goto label_1b6adc;
        case 0x1b6ae0u: goto label_1b6ae0;
        case 0x1b6ae4u: goto label_1b6ae4;
        case 0x1b6ae8u: goto label_1b6ae8;
        case 0x1b6aecu: goto label_1b6aec;
        case 0x1b6af0u: goto label_1b6af0;
        case 0x1b6af4u: goto label_1b6af4;
        case 0x1b6af8u: goto label_1b6af8;
        case 0x1b6afcu: goto label_1b6afc;
        case 0x1b6b00u: goto label_1b6b00;
        case 0x1b6b04u: goto label_1b6b04;
        case 0x1b6b08u: goto label_1b6b08;
        case 0x1b6b0cu: goto label_1b6b0c;
        case 0x1b6b10u: goto label_1b6b10;
        case 0x1b6b14u: goto label_1b6b14;
        case 0x1b6b18u: goto label_1b6b18;
        case 0x1b6b1cu: goto label_1b6b1c;
        case 0x1b6b20u: goto label_1b6b20;
        case 0x1b6b24u: goto label_1b6b24;
        case 0x1b6b28u: goto label_1b6b28;
        case 0x1b6b2cu: goto label_1b6b2c;
        case 0x1b6b30u: goto label_1b6b30;
        case 0x1b6b34u: goto label_1b6b34;
        case 0x1b6b38u: goto label_1b6b38;
        case 0x1b6b3cu: goto label_1b6b3c;
        case 0x1b6b40u: goto label_1b6b40;
        case 0x1b6b44u: goto label_1b6b44;
        case 0x1b6b48u: goto label_1b6b48;
        case 0x1b6b4cu: goto label_1b6b4c;
        case 0x1b6b50u: goto label_1b6b50;
        case 0x1b6b54u: goto label_1b6b54;
        case 0x1b6b58u: goto label_1b6b58;
        case 0x1b6b5cu: goto label_1b6b5c;
        case 0x1b6b60u: goto label_1b6b60;
        case 0x1b6b64u: goto label_1b6b64;
        case 0x1b6b68u: goto label_1b6b68;
        case 0x1b6b6cu: goto label_1b6b6c;
        case 0x1b6b70u: goto label_1b6b70;
        case 0x1b6b74u: goto label_1b6b74;
        case 0x1b6b78u: goto label_1b6b78;
        case 0x1b6b7cu: goto label_1b6b7c;
        case 0x1b6b80u: goto label_1b6b80;
        case 0x1b6b84u: goto label_1b6b84;
        case 0x1b6b88u: goto label_1b6b88;
        case 0x1b6b8cu: goto label_1b6b8c;
        case 0x1b6b90u: goto label_1b6b90;
        case 0x1b6b94u: goto label_1b6b94;
        case 0x1b6b98u: goto label_1b6b98;
        case 0x1b6b9cu: goto label_1b6b9c;
        case 0x1b6ba0u: goto label_1b6ba0;
        case 0x1b6ba4u: goto label_1b6ba4;
        case 0x1b6ba8u: goto label_1b6ba8;
        case 0x1b6bacu: goto label_1b6bac;
        case 0x1b6bb0u: goto label_1b6bb0;
        case 0x1b6bb4u: goto label_1b6bb4;
        case 0x1b6bb8u: goto label_1b6bb8;
        case 0x1b6bbcu: goto label_1b6bbc;
        case 0x1b6bc0u: goto label_1b6bc0;
        case 0x1b6bc4u: goto label_1b6bc4;
        case 0x1b6bc8u: goto label_1b6bc8;
        case 0x1b6bccu: goto label_1b6bcc;
        case 0x1b6bd0u: goto label_1b6bd0;
        case 0x1b6bd4u: goto label_1b6bd4;
        case 0x1b6bd8u: goto label_1b6bd8;
        case 0x1b6bdcu: goto label_1b6bdc;
        case 0x1b6be0u: goto label_1b6be0;
        case 0x1b6be4u: goto label_1b6be4;
        case 0x1b6be8u: goto label_1b6be8;
        case 0x1b6becu: goto label_1b6bec;
        case 0x1b6bf0u: goto label_1b6bf0;
        case 0x1b6bf4u: goto label_1b6bf4;
        case 0x1b6bf8u: goto label_1b6bf8;
        case 0x1b6bfcu: goto label_1b6bfc;
        case 0x1b6c00u: goto label_1b6c00;
        case 0x1b6c04u: goto label_1b6c04;
        case 0x1b6c08u: goto label_1b6c08;
        case 0x1b6c0cu: goto label_1b6c0c;
        case 0x1b6c10u: goto label_1b6c10;
        case 0x1b6c14u: goto label_1b6c14;
        case 0x1b6c18u: goto label_1b6c18;
        case 0x1b6c1cu: goto label_1b6c1c;
        case 0x1b6c20u: goto label_1b6c20;
        case 0x1b6c24u: goto label_1b6c24;
        case 0x1b6c28u: goto label_1b6c28;
        case 0x1b6c2cu: goto label_1b6c2c;
        case 0x1b6c30u: goto label_1b6c30;
        case 0x1b6c34u: goto label_1b6c34;
        case 0x1b6c38u: goto label_1b6c38;
        case 0x1b6c3cu: goto label_1b6c3c;
        case 0x1b6c40u: goto label_1b6c40;
        case 0x1b6c44u: goto label_1b6c44;
        case 0x1b6c48u: goto label_1b6c48;
        case 0x1b6c4cu: goto label_1b6c4c;
        case 0x1b6c50u: goto label_1b6c50;
        case 0x1b6c54u: goto label_1b6c54;
        case 0x1b6c58u: goto label_1b6c58;
        case 0x1b6c5cu: goto label_1b6c5c;
        case 0x1b6c60u: goto label_1b6c60;
        case 0x1b6c64u: goto label_1b6c64;
        case 0x1b6c68u: goto label_1b6c68;
        case 0x1b6c6cu: goto label_1b6c6c;
        case 0x1b6c70u: goto label_1b6c70;
        case 0x1b6c74u: goto label_1b6c74;
        case 0x1b6c78u: goto label_1b6c78;
        case 0x1b6c7cu: goto label_1b6c7c;
        case 0x1b6c80u: goto label_1b6c80;
        case 0x1b6c84u: goto label_1b6c84;
        case 0x1b6c88u: goto label_1b6c88;
        case 0x1b6c8cu: goto label_1b6c8c;
        case 0x1b6c90u: goto label_1b6c90;
        case 0x1b6c94u: goto label_1b6c94;
        case 0x1b6c98u: goto label_1b6c98;
        case 0x1b6c9cu: goto label_1b6c9c;
        case 0x1b6ca0u: goto label_1b6ca0;
        case 0x1b6ca4u: goto label_1b6ca4;
        case 0x1b6ca8u: goto label_1b6ca8;
        case 0x1b6cacu: goto label_1b6cac;
        case 0x1b6cb0u: goto label_1b6cb0;
        case 0x1b6cb4u: goto label_1b6cb4;
        case 0x1b6cb8u: goto label_1b6cb8;
        case 0x1b6cbcu: goto label_1b6cbc;
        case 0x1b6cc0u: goto label_1b6cc0;
        case 0x1b6cc4u: goto label_1b6cc4;
        case 0x1b6cc8u: goto label_1b6cc8;
        case 0x1b6cccu: goto label_1b6ccc;
        case 0x1b6cd0u: goto label_1b6cd0;
        case 0x1b6cd4u: goto label_1b6cd4;
        case 0x1b6cd8u: goto label_1b6cd8;
        case 0x1b6cdcu: goto label_1b6cdc;
        case 0x1b6ce0u: goto label_1b6ce0;
        case 0x1b6ce4u: goto label_1b6ce4;
        case 0x1b6ce8u: goto label_1b6ce8;
        case 0x1b6cecu: goto label_1b6cec;
        case 0x1b6cf0u: goto label_1b6cf0;
        case 0x1b6cf4u: goto label_1b6cf4;
        case 0x1b6cf8u: goto label_1b6cf8;
        case 0x1b6cfcu: goto label_1b6cfc;
        case 0x1b6d00u: goto label_1b6d00;
        case 0x1b6d04u: goto label_1b6d04;
        case 0x1b6d08u: goto label_1b6d08;
        case 0x1b6d0cu: goto label_1b6d0c;
        case 0x1b6d10u: goto label_1b6d10;
        case 0x1b6d14u: goto label_1b6d14;
        case 0x1b6d18u: goto label_1b6d18;
        case 0x1b6d1cu: goto label_1b6d1c;
        case 0x1b6d20u: goto label_1b6d20;
        case 0x1b6d24u: goto label_1b6d24;
        case 0x1b6d28u: goto label_1b6d28;
        case 0x1b6d2cu: goto label_1b6d2c;
        case 0x1b6d30u: goto label_1b6d30;
        case 0x1b6d34u: goto label_1b6d34;
        case 0x1b6d38u: goto label_1b6d38;
        case 0x1b6d3cu: goto label_1b6d3c;
        case 0x1b6d40u: goto label_1b6d40;
        case 0x1b6d44u: goto label_1b6d44;
        case 0x1b6d48u: goto label_1b6d48;
        case 0x1b6d4cu: goto label_1b6d4c;
        case 0x1b6d50u: goto label_1b6d50;
        case 0x1b6d54u: goto label_1b6d54;
        case 0x1b6d58u: goto label_1b6d58;
        case 0x1b6d5cu: goto label_1b6d5c;
        case 0x1b6d60u: goto label_1b6d60;
        case 0x1b6d64u: goto label_1b6d64;
        case 0x1b6d68u: goto label_1b6d68;
        case 0x1b6d6cu: goto label_1b6d6c;
        case 0x1b6d70u: goto label_1b6d70;
        case 0x1b6d74u: goto label_1b6d74;
        case 0x1b6d78u: goto label_1b6d78;
        case 0x1b6d7cu: goto label_1b6d7c;
        case 0x1b6d80u: goto label_1b6d80;
        case 0x1b6d84u: goto label_1b6d84;
        case 0x1b6d88u: goto label_1b6d88;
        default: break;
    }

    ctx->pc = 0x1b57b0u;

label_1b57b0:
    // 0x1b57b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b57b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1b57b4:
    // 0x1b57b4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x1b57b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
label_1b57b8:
    // 0x1b57b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b57b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1b57bc:
    // 0x1b57bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b57bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b57c0:
    // 0x1b57c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b57c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b57c4:
    // 0x1b57c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b57c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b57c8:
    // 0x1b57c8: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x1b57c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
label_1b57cc:
    // 0x1b57cc: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1b57ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_1b57d0:
    // 0x1b57d0: 0x24710080  addiu       $s1, $v1, 0x80
    ctx->pc = 0x1b57d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_1b57d4:
    // 0x1b57d4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1b57d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_1b57d8:
    // 0x1b57d8: 0x2473ec70  addiu       $s3, $v1, -0x1390
    ctx->pc = 0x1b57d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962288));
label_1b57dc:
    // 0x1b57dc: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b57dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b57e0:
    // 0x1b57e0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1b57e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1b57e4:
    // 0x1b57e4: 0x3c1097ff  lui         $s0, 0x97FF
    ctx->pc = 0x1b57e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38911 << 16));
label_1b57e8:
    // 0x1b57e8: 0x3604ffff  ori         $a0, $s0, 0xFFFF
    ctx->pc = 0x1b57e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
label_1b57ec:
    // 0x1b57ec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1b57ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1b57f0:
    // 0x1b57f0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1b57f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1b57f4:
    // 0x1b57f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b57f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b57f8:
    // 0x1b57f8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b57f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b57fc:
    // 0x1b57fc: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1b57fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_1b5800:
    // 0x1b5800: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5804:
    // 0x1b5804: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1b5804u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_1b5808:
    // 0x1b5808: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1b5808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1b580c:
    // 0x1b580c: 0x2c81000a  sltiu       $at, $a0, 0xA
    ctx->pc = 0x1b580cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1b5810:
    // 0x1b5810: 0x10200533  beqz        $at, . + 4 + (0x533 << 2)
label_1b5814:
    if (ctx->pc == 0x1B5814u) {
        ctx->pc = 0x1B5818u;
        goto label_1b5818;
    }
    ctx->pc = 0x1B5810u;
    {
        const bool branch_taken_0x1b5810 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5810) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B5818u;
label_1b5818:
    // 0x1b5818: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1b5818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_1b581c:
    // 0x1b581c: 0x2465f2a0  addiu       $a1, $v1, -0xD60
    ctx->pc = 0x1b581cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963872));
label_1b5820:
    // 0x1b5820: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1b5820u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1b5824:
    // 0x1b5824: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1b5824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1b5828:
    // 0x1b5828: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1b5828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1b582c:
    // 0x1b582c: 0x600008  jr          $v1
label_1b5830:
    if (ctx->pc == 0x1B5830u) {
        ctx->pc = 0x1B5834u;
        goto label_1b5834;
    }
    ctx->pc = 0x1B582Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B582Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1B5834u;
label_1b5834:
    // 0x1b5834: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1b5834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1b5838:
    // 0x1b5838: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b583c:
    // 0x1b583c: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x1b583cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_1b5840:
    // 0x1b5840: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5844:
    // 0x1b5844: 0xac6013f0  sw          $zero, 0x13F0($v1)
    ctx->pc = 0x1b5844u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5104), GPR_U32(ctx, 0));
label_1b5848:
    // 0x1b5848: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b584c:
    // 0x1b584c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b584cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5850:
    // 0x1b5850: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1b5850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1b5854:
    // 0x1b5854: 0x24060a4a  addiu       $a2, $zero, 0xA4A
    ctx->pc = 0x1b5854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2634));
label_1b5858:
    // 0x1b5858: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b5858u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b585c:
    // 0x1b585c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b585cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1b5860:
    // 0x1b5860: 0xc0965d0  jal         func_259740
label_1b5864:
    if (ctx->pc == 0x1B5864u) {
        ctx->pc = 0x1B5868u;
        goto label_1b5868;
    }
    ctx->pc = 0x1B5860u;
    SET_GPR_U32(ctx, 31, 0x1B5868u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B5860u, 0x1B5868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5868u;
label_1b5868:
    // 0x1b5868: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b5868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b586c:
    // 0x1b586c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b586cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5870:
    // 0x1b5870: 0xac441b6c  sw          $a0, 0x1B6C($v0)
    ctx->pc = 0x1b5870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7020), GPR_U32(ctx, 4));
label_1b5874:
    // 0x1b5874: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5878:
    // 0x1b5878: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1b5878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1b587c:
    // 0x1b587c: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x1b587cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
label_1b5880:
    // 0x1b5880: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1b5880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_1b5884:
    // 0x1b5884: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b5888:
    if (ctx->pc == 0x1B5888u) {
        ctx->pc = 0x1B588Cu;
        goto label_1b588c;
    }
    ctx->pc = 0x1B5884u;
    {
        const bool branch_taken_0x1b5884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5884) {
            ctx->pc = 0x1B5894u;
            goto label_1b5894;
        }
    }
    ctx->pc = 0x1B588Cu;
label_1b588c:
    // 0x1b588c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b588cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5890:
    // 0x1b5890: 0xac801b6c  sw          $zero, 0x1B6C($a0)
    ctx->pc = 0x1b5890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7020), GPR_U32(ctx, 0));
label_1b5894:
    // 0x1b5894: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b5894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5898:
    // 0x1b5898: 0x90a313a6  lbu         $v1, 0x13A6($a1)
    ctx->pc = 0x1b5898u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5030)));
label_1b589c:
    // 0x1b589c: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x1b589cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1b58a0:
    // 0x1b58a0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b58a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b58a4:
    // 0x1b58a4: 0x10c50018  beq         $a2, $a1, . + 4 + (0x18 << 2)
label_1b58a8:
    if (ctx->pc == 0x1B58A8u) {
        ctx->pc = 0x1B58ACu;
        goto label_1b58ac;
    }
    ctx->pc = 0x1B58A4u;
    {
        const bool branch_taken_0x1b58a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x1b58a4) {
            ctx->pc = 0x1B5908u;
            goto label_1b5908;
        }
    }
    ctx->pc = 0x1B58ACu;
label_1b58ac:
    // 0x1b58ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b58acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b58b0:
    // 0x1b58b0: 0x10c40015  beq         $a2, $a0, . + 4 + (0x15 << 2)
label_1b58b4:
    if (ctx->pc == 0x1B58B4u) {
        ctx->pc = 0x1B58B8u;
        goto label_1b58b8;
    }
    ctx->pc = 0x1B58B0u;
    {
        const bool branch_taken_0x1b58b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b58b0) {
            ctx->pc = 0x1B5908u;
            goto label_1b5908;
        }
    }
    ctx->pc = 0x1B58B8u;
label_1b58b8:
    // 0x1b58b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b58b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b58bc:
    // 0x1b58bc: 0x10c30005  beq         $a2, $v1, . + 4 + (0x5 << 2)
label_1b58c0:
    if (ctx->pc == 0x1B58C0u) {
        ctx->pc = 0x1B58C4u;
        goto label_1b58c4;
    }
    ctx->pc = 0x1B58BCu;
    {
        const bool branch_taken_0x1b58bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b58bc) {
            ctx->pc = 0x1B58D4u;
            goto label_1b58d4;
        }
    }
    ctx->pc = 0x1B58C4u;
label_1b58c4:
    // 0x1b58c4: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_1b58c8:
    if (ctx->pc == 0x1B58C8u) {
        ctx->pc = 0x1B58CCu;
        goto label_1b58cc;
    }
    ctx->pc = 0x1B58C4u;
    {
        const bool branch_taken_0x1b58c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b58c4) {
            ctx->pc = 0x1B58D4u;
            goto label_1b58d4;
        }
    }
    ctx->pc = 0x1B58CCu;
label_1b58cc:
    // 0x1b58cc: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1b58d0:
    if (ctx->pc == 0x1B58D0u) {
        ctx->pc = 0x1B58D4u;
        goto label_1b58d4;
    }
    ctx->pc = 0x1B58CCu;
    {
        const bool branch_taken_0x1b58cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b58cc) {
            ctx->pc = 0x1B5940u;
            goto label_1b5940;
        }
    }
    ctx->pc = 0x1B58D4u;
label_1b58d4:
    // 0x1b58d4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b58d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b58d8:
    // 0x1b58d8: 0x906413a4  lbu         $a0, 0x13A4($v1)
    ctx->pc = 0x1b58d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5028)));
label_1b58dc:
    // 0x1b58dc: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1b58dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1b58e0:
    // 0x1b58e0: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x1b58e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_1b58e4:
    // 0x1b58e4: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_1b58e8:
    if (ctx->pc == 0x1B58E8u) {
        ctx->pc = 0x1B58ECu;
        goto label_1b58ec;
    }
    ctx->pc = 0x1B58E4u;
    {
        const bool branch_taken_0x1b58e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b58e4) {
            ctx->pc = 0x1B5940u;
            goto label_1b5940;
        }
    }
    ctx->pc = 0x1B58ECu;
label_1b58ec:
    // 0x1b58ec: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b58ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b58f0:
    // 0x1b58f0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1b58f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1b58f4:
    // 0x1b58f4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1b58f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_1b58f8:
    // 0x1b58f8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b58f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1b58fc:
    // 0x1b58fc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1b58fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1b5900:
    // 0x1b5900: 0x1000000f  b           . + 4 + (0xF << 2)
label_1b5904:
    if (ctx->pc == 0x1B5904u) {
        ctx->pc = 0x1B5908u;
        goto label_1b5908;
    }
    ctx->pc = 0x1B5900u;
    {
        const bool branch_taken_0x1b5900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5900) {
            ctx->pc = 0x1B5940u;
            goto label_1b5940;
        }
    }
    ctx->pc = 0x1B5908u;
label_1b5908:
    // 0x1b5908: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b5908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b590c:
    // 0x1b590c: 0x904413a5  lbu         $a0, 0x13A5($v0)
    ctx->pc = 0x1b590cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5029)));
label_1b5910:
    // 0x1b5910: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x1b5910u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1b5914:
    // 0x1b5914: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x1b5914u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_1b5918:
    // 0x1b5918: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_1b591c:
    if (ctx->pc == 0x1B591Cu) {
        ctx->pc = 0x1B5920u;
        goto label_1b5920;
    }
    ctx->pc = 0x1B5918u;
    {
        const bool branch_taken_0x1b5918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5918) {
            ctx->pc = 0x1B5940u;
            goto label_1b5940;
        }
    }
    ctx->pc = 0x1B5920u;
label_1b5920:
    // 0x1b5920: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b5920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5924:
    // 0x1b5924: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1b5924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1b5928:
    // 0x1b5928: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x1b5928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_1b592c:
    // 0x1b592c: 0x652025  or          $a0, $v1, $a1
    ctx->pc = 0x1b592cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_1b5930:
    // 0x1b5930: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x1b5930u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_1b5934:
    // 0x1b5934: 0xc0c51c4  jal         func_314710
label_1b5938:
    if (ctx->pc == 0x1B5938u) {
        ctx->pc = 0x1B593Cu;
        goto label_1b593c;
    }
    ctx->pc = 0x1B5934u;
    SET_GPR_U32(ctx, 31, 0x1B593Cu);
    ctx->pc = 0x314710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314710u, 0x1B5934u, 0x1B593Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B593Cu;
label_1b593c:
    // 0x1b593c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b593cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b5940:
    // 0x1b5940: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5944:
    // 0x1b5944: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b5944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5948:
    // 0x1b5948: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1b5948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b594c:
    // 0x1b594c: 0xc4cd00d4  lwc1        $f13, 0xD4($a2)
    ctx->pc = 0x1b594cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b5950:
    // 0x1b5950: 0xc058f20  jal         func_163C80
label_1b5954:
    if (ctx->pc == 0x1B5954u) {
        ctx->pc = 0x1B5958u;
        goto label_1b5958;
    }
    ctx->pc = 0x1B5950u;
    SET_GPR_U32(ctx, 31, 0x1B5958u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1B5950u, 0x1B5958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5958u;
label_1b5958:
    // 0x1b5958: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b5958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1b595c:
    // 0x1b595c: 0xc7ac0054  lwc1        $f12, 0x54($sp)
    ctx->pc = 0x1b595cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b5960:
    // 0x1b5960: 0xc05733c  jal         func_15CCF0
label_1b5964:
    if (ctx->pc == 0x1B5964u) {
        ctx->pc = 0x1B5968u;
        goto label_1b5968;
    }
    ctx->pc = 0x1B5960u;
    SET_GPR_U32(ctx, 31, 0x1B5968u);
    ctx->pc = 0x15CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CCF0u, 0x1B5960u, 0x1B5968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5968u;
label_1b5968:
    // 0x1b5968: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b5968u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b596c:
    // 0x1b596c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b596cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5970:
    // 0x1b5970: 0x90a40003  lbu         $a0, 0x3($a1)
    ctx->pc = 0x1b5970u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_1b5974:
    // 0x1b5974: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1b5974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1b5978:
    // 0x1b5978: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x1b5978u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
label_1b597c:
    // 0x1b597c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b597cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5980:
    // 0x1b5980: 0x8c631b6c  lw          $v1, 0x1B6C($v1)
    ctx->pc = 0x1b5980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
label_1b5984:
    // 0x1b5984: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1b5988:
    if (ctx->pc == 0x1B5988u) {
        ctx->pc = 0x1B598Cu;
        goto label_1b598c;
    }
    ctx->pc = 0x1B5984u;
    {
        const bool branch_taken_0x1b5984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5984) {
            ctx->pc = 0x1B59A8u;
            goto label_1b59a8;
        }
    }
    ctx->pc = 0x1B598Cu;
label_1b598c:
    // 0x1b598c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b598cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b5990:
    // 0x1b5990: 0x8c261a98  lw          $a2, 0x1A98($at)
    ctx->pc = 0x1b5990u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1b5994:
    // 0x1b5994: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x1b5994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
label_1b5998:
    // 0x1b5998: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1b5998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b599c:
    // 0x1b599c: 0xc42824  and         $a1, $a2, $a0
    ctx->pc = 0x1b599cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_1b59a0:
    // 0x1b59a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b59a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b59a4:
    // 0x1b59a4: 0xac251a98  sw          $a1, 0x1A98($at)
    ctx->pc = 0x1b59a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 5));
label_1b59a8:
    // 0x1b59a8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b59a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b59ac:
    // 0x1b59ac: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x1b59acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1b59b0:
    // 0x1b59b0: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
label_1b59b4:
    if (ctx->pc == 0x1B59B4u) {
        ctx->pc = 0x1B59B8u;
        goto label_1b59b8;
    }
    ctx->pc = 0x1B59B0u;
    {
        const bool branch_taken_0x1b59b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b59b0) {
            ctx->pc = 0x1B59CCu;
            goto label_1b59cc;
        }
    }
    ctx->pc = 0x1B59B8u;
label_1b59b8:
    // 0x1b59b8: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b59b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b59bc:
    // 0x1b59bc: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x1b59bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_1b59c0:
    // 0x1b59c0: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1b59c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_1b59c4:
    // 0x1b59c4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b59c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1b59c8:
    // 0x1b59c8: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x1b59c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
label_1b59cc:
    // 0x1b59cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b59ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b59d0:
    // 0x1b59d0: 0x8c241a64  lw          $a0, 0x1A64($at)
    ctx->pc = 0x1b59d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1b59d4:
    // 0x1b59d4: 0x34820100  ori         $v0, $a0, 0x100
    ctx->pc = 0x1b59d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_1b59d8:
    // 0x1b59d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b59d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b59dc:
    // 0x1b59dc: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1b59dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 2));
label_1b59e0:
    // 0x1b59e0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b59e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b59e4:
    // 0x1b59e4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1b59e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1b59e8:
    // 0x1b59e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b59e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b59ec:
    // 0x1b59ec: 0xc096b40  jal         func_25AD00
label_1b59f0:
    if (ctx->pc == 0x1B59F0u) {
        ctx->pc = 0x1B59F4u;
        goto label_1b59f4;
    }
    ctx->pc = 0x1B59ECu;
    SET_GPR_U32(ctx, 31, 0x1B59F4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B59ECu, 0x1B59F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B59F4u;
label_1b59f4:
    // 0x1b59f4: 0x3c083e49  lui         $t0, 0x3E49
    ctx->pc = 0x1b59f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15945 << 16));
label_1b59f8:
    // 0x1b59f8: 0x35070fdb  ori         $a3, $t0, 0xFDB
    ctx->pc = 0x1b59f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)4059);
label_1b59fc:
    // 0x1b59fc: 0x44877000  mtc1        $a3, $f14
    ctx->pc = 0x1b59fcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1b5a00:
    // 0x1b5a00: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b5a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5a04:
    // 0x1b5a04: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b5a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5a08:
    // 0x1b5a08: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1b5a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b5a0c:
    // 0x1b5a0c: 0xc4ad00d4  lwc1        $f13, 0xD4($a1)
    ctx->pc = 0x1b5a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b5a10:
    // 0x1b5a10: 0xc058f50  jal         func_163D40
label_1b5a14:
    if (ctx->pc == 0x1B5A14u) {
        ctx->pc = 0x1B5A18u;
        goto label_1b5a18;
    }
    ctx->pc = 0x1B5A10u;
    SET_GPR_U32(ctx, 31, 0x1B5A18u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1B5A10u, 0x1B5A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A18u;
label_1b5a18:
    // 0x1b5a18: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5a1c:
    // 0x1b5a1c: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x1b5a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_1b5a20:
    // 0x1b5a20: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5a24:
    // 0x1b5a24: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b5a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5a28:
    // 0x1b5a28: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1b5a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b5a2c:
    // 0x1b5a2c: 0xc05cd58  jal         func_173560
label_1b5a30:
    if (ctx->pc == 0x1B5A30u) {
        ctx->pc = 0x1B5A34u;
        goto label_1b5a34;
    }
    ctx->pc = 0x1B5A2Cu;
    SET_GPR_U32(ctx, 31, 0x1B5A34u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1B5A2Cu, 0x1B5A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A34u;
label_1b5a34:
    // 0x1b5a34: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b5a34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b5a38:
    // 0x1b5a38: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5a3c:
    // 0x1b5a3c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b5a3cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b5a40:
    // 0x1b5a40: 0xc057480  jal         func_15D200
label_1b5a44:
    if (ctx->pc == 0x1B5A44u) {
        ctx->pc = 0x1B5A48u;
        goto label_1b5a48;
    }
    ctx->pc = 0x1B5A40u;
    SET_GPR_U32(ctx, 31, 0x1B5A48u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1B5A40u, 0x1B5A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A48u;
label_1b5a48:
    // 0x1b5a48: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b5a48u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b5a4c:
    // 0x1b5a4c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b5a4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b5a50:
    // 0x1b5a50: 0xc097530  jal         func_25D4C0
label_1b5a54:
    if (ctx->pc == 0x1B5A54u) {
        ctx->pc = 0x1B5A58u;
        goto label_1b5a58;
    }
    ctx->pc = 0x1B5A50u;
    SET_GPR_U32(ctx, 31, 0x1B5A58u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B5A50u, 0x1B5A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A58u;
label_1b5a58:
    // 0x1b5a58: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5a5c:
    // 0x1b5a5c: 0x906409e7  lbu         $a0, 0x9E7($v1)
    ctx->pc = 0x1b5a5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1b5a60:
    // 0x1b5a60: 0x1080049f  beqz        $a0, . + 4 + (0x49F << 2)
label_1b5a64:
    if (ctx->pc == 0x1B5A64u) {
        ctx->pc = 0x1B5A68u;
        goto label_1b5a68;
    }
    ctx->pc = 0x1B5A60u;
    {
        const bool branch_taken_0x1b5a60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5a60) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B5A68u;
label_1b5a68:
    // 0x1b5a68: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b5a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5a6c:
    // 0x1b5a6c: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x1b5a6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_1b5a70:
    // 0x1b5a70: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1b5a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b5a74:
    // 0x1b5a74: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x1b5a74u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
label_1b5a78:
    // 0x1b5a78: 0x10000499  b           . + 4 + (0x499 << 2)
label_1b5a7c:
    if (ctx->pc == 0x1B5A7Cu) {
        ctx->pc = 0x1B5A80u;
        goto label_1b5a80;
    }
    ctx->pc = 0x1B5A78u;
    {
        const bool branch_taken_0x1b5a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5a78) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B5A80u;
label_1b5a80:
    // 0x1b5a80: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1b5a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b5a84:
    // 0x1b5a84: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b5a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5a88:
    // 0x1b5a88: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1b5a88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_1b5a8c:
    // 0x1b5a8c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5a90:
    // 0x1b5a90: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b5a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5a94:
    // 0x1b5a94: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1b5a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1b5a98:
    // 0x1b5a98: 0x2406004b  addiu       $a2, $zero, 0x4B
    ctx->pc = 0x1b5a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_1b5a9c:
    // 0x1b5a9c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b5a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5aa0:
    // 0x1b5aa0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b5aa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1b5aa4:
    // 0x1b5aa4: 0xc0965d0  jal         func_259740
label_1b5aa8:
    if (ctx->pc == 0x1B5AA8u) {
        ctx->pc = 0x1B5AACu;
        goto label_1b5aac;
    }
    ctx->pc = 0x1B5AA4u;
    SET_GPR_U32(ctx, 31, 0x1B5AACu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B5AA4u, 0x1B5AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5AACu;
label_1b5aac:
    // 0x1b5aac: 0x3c0442e0  lui         $a0, 0x42E0
    ctx->pc = 0x1b5aacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17120 << 16));
label_1b5ab0:
    // 0x1b5ab0: 0x34826667  ori         $v0, $a0, 0x6667
    ctx->pc = 0x1b5ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26215);
label_1b5ab4:
    // 0x1b5ab4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5ab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5ab8:
    // 0x1b5ab8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b5ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5abc:
    // 0x1b5abc: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1b5abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_1b5ac0:
    // 0x1b5ac0: 0x3c0340a3  lui         $v1, 0x40A3
    ctx->pc = 0x1b5ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16547 << 16));
label_1b5ac4:
    // 0x1b5ac4: 0x34633334  ori         $v1, $v1, 0x3334
    ctx->pc = 0x1b5ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13108);
label_1b5ac8:
    // 0x1b5ac8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b5ac8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5acc:
    // 0x1b5acc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5ad0:
    // 0x1b5ad0: 0xe4801280  swc1        $f0, 0x1280($a0)
    ctx->pc = 0x1b5ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4736), bits); }
label_1b5ad4:
    // 0x1b5ad4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b5ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5ad8:
    // 0x1b5ad8: 0xaca01b64  sw          $zero, 0x1B64($a1)
    ctx->pc = 0x1b5ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7012), GPR_U32(ctx, 0));
label_1b5adc:
    // 0x1b5adc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b5adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5ae0:
    // 0x1b5ae0: 0xac401b68  sw          $zero, 0x1B68($v0)
    ctx->pc = 0x1b5ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 0));
label_1b5ae4:
    // 0x1b5ae4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1b5ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b5ae8:
    // 0x1b5ae8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b5ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5aec:
    // 0x1b5aec: 0xa4a4127e  sh          $a0, 0x127E($a1)
    ctx->pc = 0x1b5aecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 4));
label_1b5af0:
    // 0x1b5af0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b5af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b5af4:
    // 0x1b5af4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5af4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5af8:
    // 0x1b5af8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b5af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5afc:
    // 0x1b5afc: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1b5afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_1b5b00:
    // 0x1b5b00: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5b04:
    // 0x1b5b04: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1b5b04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_1b5b08:
    // 0x1b5b08: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1b5b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b5b0c:
    // 0x1b5b0c: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x1b5b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_1b5b10:
    // 0x1b5b10: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5b14:
    // 0x1b5b14: 0x908509da  lbu         $a1, 0x9DA($a0)
    ctx->pc = 0x1b5b14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2522)));
label_1b5b18:
    // 0x1b5b18: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x1b5b18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1b5b1c:
    // 0x1b5b1c: 0x30c2003f  andi        $v0, $a2, 0x3F
    ctx->pc = 0x1b5b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
label_1b5b20:
    // 0x1b5b20: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1b5b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_1b5b24:
    // 0x1b5b24: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
label_1b5b28:
    if (ctx->pc == 0x1B5B28u) {
        ctx->pc = 0x1B5B2Cu;
        goto label_1b5b2c;
    }
    ctx->pc = 0x1B5B24u;
    {
        const bool branch_taken_0x1b5b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b5b24) {
            ctx->pc = 0x1B5B84u;
            goto label_1b5b84;
        }
    }
    ctx->pc = 0x1B5B2Cu;
label_1b5b2c:
    // 0x1b5b2c: 0xc067694  jal         func_19DA50
label_1b5b30:
    if (ctx->pc == 0x1B5B30u) {
        ctx->pc = 0x1B5B34u;
        goto label_1b5b34;
    }
    ctx->pc = 0x1B5B2Cu;
    SET_GPR_U32(ctx, 31, 0x1B5B34u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1B5B2Cu, 0x1B5B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5B34u;
label_1b5b34:
    // 0x1b5b34: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b5b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1b5b38:
    // 0x1b5b38: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1b5b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_1b5b3c:
    // 0x1b5b3c: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x1b5b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1b5b40:
    // 0x1b5b40: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1b5b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_1b5b44:
    // 0x1b5b44: 0x248352d8  addiu       $v1, $a0, 0x52D8
    ctx->pc = 0x1b5b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 21208));
label_1b5b48:
    // 0x1b5b48: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b5b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1b5b4c:
    // 0x1b5b4c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1b5b4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1b5b50:
    // 0x1b5b50: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x1b5b50u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1b5b54:
    // 0x1b5b54: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x1b5b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
label_1b5b58:
    // 0x1b5b58: 0x34824000  ori         $v0, $a0, 0x4000
    ctx->pc = 0x1b5b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
label_1b5b5c:
    // 0x1b5b5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b5b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b5b60:
    // 0x1b5b60: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b5b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5b64:
    // 0x1b5b64: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x1b5b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_1b5b68:
    // 0x1b5b68: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x1b5b68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1b5b6c:
    // 0x1b5b6c: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x1b5b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_1b5b70:
    // 0x1b5b70: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x1b5b70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1b5b74:
    // 0x1b5b74: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1b5b74u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b5b78:
    // 0x1b5b78: 0xc067b18  jal         func_19EC60
label_1b5b7c:
    if (ctx->pc == 0x1B5B7Cu) {
        ctx->pc = 0x1B5B80u;
        goto label_1b5b80;
    }
    ctx->pc = 0x1B5B78u;
    SET_GPR_U32(ctx, 31, 0x1B5B80u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1B5B78u, 0x1B5B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5B80u;
label_1b5b80:
    // 0x1b5b80: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b5b80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b5b84:
    // 0x1b5b84: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b5b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5b88:
    // 0x1b5b88: 0x8ca21b6c  lw          $v0, 0x1B6C($a1)
    ctx->pc = 0x1b5b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7020)));
label_1b5b8c:
    // 0x1b5b8c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1b5b90:
    if (ctx->pc == 0x1B5B90u) {
        ctx->pc = 0x1B5B94u;
        goto label_1b5b94;
    }
    ctx->pc = 0x1B5B8Cu;
    {
        const bool branch_taken_0x1b5b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5b8c) {
            ctx->pc = 0x1B5BB0u;
            goto label_1b5bb0;
        }
    }
    ctx->pc = 0x1B5B94u;
label_1b5b94:
    // 0x1b5b94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b5b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b5b98:
    // 0x1b5b98: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1b5b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1b5b9c:
    // 0x1b5b9c: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x1b5b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
label_1b5ba0:
    // 0x1b5ba0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b5ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b5ba4:
    // 0x1b5ba4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b5ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1b5ba8:
    // 0x1b5ba8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b5ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b5bac:
    // 0x1b5bac: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1b5bacu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 3));
label_1b5bb0:
    // 0x1b5bb0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5bb4:
    // 0x1b5bb4: 0x908309db  lbu         $v1, 0x9DB($a0)
    ctx->pc = 0x1b5bb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2523)));
label_1b5bb8:
    // 0x1b5bb8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1b5bb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1b5bbc:
    // 0x1b5bbc: 0x30850010  andi        $a1, $a0, 0x10
    ctx->pc = 0x1b5bbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_1b5bc0:
    // 0x1b5bc0: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_1b5bc4:
    if (ctx->pc == 0x1B5BC4u) {
        ctx->pc = 0x1B5BC8u;
        goto label_1b5bc8;
    }
    ctx->pc = 0x1B5BC0u;
    {
        const bool branch_taken_0x1b5bc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5bc0) {
            ctx->pc = 0x1B5C04u;
            goto label_1b5c04;
        }
    }
    ctx->pc = 0x1B5BC8u;
label_1b5bc8:
    // 0x1b5bc8: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x1b5bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_1b5bcc:
    // 0x1b5bcc: 0x30640020  andi        $a0, $v1, 0x20
    ctx->pc = 0x1b5bccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1b5bd0:
    // 0x1b5bd0: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
label_1b5bd4:
    if (ctx->pc == 0x1B5BD4u) {
        ctx->pc = 0x1B5BD8u;
        goto label_1b5bd8;
    }
    ctx->pc = 0x1B5BD0u;
    {
        const bool branch_taken_0x1b5bd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5bd0) {
            ctx->pc = 0x1B5C04u;
            goto label_1b5c04;
        }
    }
    ctx->pc = 0x1B5BD8u;
label_1b5bd8:
    // 0x1b5bd8: 0x3c03424c  lui         $v1, 0x424C
    ctx->pc = 0x1b5bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16972 << 16));
label_1b5bdc:
    // 0x1b5bdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b5bdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5be0:
    // 0x1b5be0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5be4:
    // 0x1b5be4: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1b5be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
label_1b5be8:
    // 0x1b5be8: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x1b5be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_1b5bec:
    // 0x1b5bec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b5becu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5bf0:
    // 0x1b5bf0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5bf4:
    // 0x1b5bf4: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x1b5bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
label_1b5bf8:
    // 0x1b5bf8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b5bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5bfc:
    // 0x1b5bfc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5c00:
    // 0x1b5c00: 0xac641b64  sw          $a0, 0x1B64($v1)
    ctx->pc = 0x1b5c00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7012), GPR_U32(ctx, 4));
label_1b5c04:
    // 0x1b5c04: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b5c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b5c08:
    // 0x1b5c08: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1b5c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1b5c0c:
    // 0x1b5c0c: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x1b5c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_1b5c10:
    // 0x1b5c10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b5c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b5c14:
    // 0x1b5c14: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x1b5c14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 3));
label_1b5c18:
    // 0x1b5c18: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b5c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5c1c:
    // 0x1b5c1c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1b5c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1b5c20:
    // 0x1b5c20: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1b5c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_1b5c24:
    // 0x1b5c24: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b5c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1b5c28:
    // 0x1b5c28: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1b5c28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1b5c2c:
    // 0x1b5c2c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5c30:
    // 0x1b5c30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b5c30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b5c34:
    // 0x1b5c34: 0xc096b40  jal         func_25AD00
label_1b5c38:
    if (ctx->pc == 0x1B5C38u) {
        ctx->pc = 0x1B5C3Cu;
        goto label_1b5c3c;
    }
    ctx->pc = 0x1B5C34u;
    SET_GPR_U32(ctx, 31, 0x1B5C3Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B5C34u, 0x1B5C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5C3Cu;
label_1b5c3c:
    // 0x1b5c3c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b5c3cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b5c40:
    // 0x1b5c40: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5c44:
    // 0x1b5c44: 0x8c831b64  lw          $v1, 0x1B64($a0)
    ctx->pc = 0x1b5c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7012)));
label_1b5c48:
    // 0x1b5c48: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1b5c4c:
    if (ctx->pc == 0x1B5C4Cu) {
        ctx->pc = 0x1B5C50u;
        goto label_1b5c50;
    }
    ctx->pc = 0x1B5C48u;
    {
        const bool branch_taken_0x1b5c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5c48) {
            ctx->pc = 0x1B5C78u;
            goto label_1b5c78;
        }
    }
    ctx->pc = 0x1B5C50u;
label_1b5c50:
    // 0x1b5c50: 0x3c063f19  lui         $a2, 0x3F19
    ctx->pc = 0x1b5c50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16153 << 16));
label_1b5c54:
    // 0x1b5c54: 0x34c3999a  ori         $v1, $a2, 0x999A
    ctx->pc = 0x1b5c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)39322);
label_1b5c58:
    // 0x1b5c58: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1b5c58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b5c5c:
    // 0x1b5c5c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b5c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5c60:
    // 0x1b5c60: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5c64:
    // 0x1b5c64: 0x24a40180  addiu       $a0, $a1, 0x180
    ctx->pc = 0x1b5c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
label_1b5c68:
    // 0x1b5c68: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x1b5c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
label_1b5c6c:
    // 0x1b5c6c: 0xc040ed8  jal         func_103B60
label_1b5c70:
    if (ctx->pc == 0x1B5C70u) {
        ctx->pc = 0x1B5C74u;
        goto label_1b5c74;
    }
    ctx->pc = 0x1B5C6Cu;
    SET_GPR_U32(ctx, 31, 0x1B5C74u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B5C74u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B5C74u) { return; }
    ctx->pc = 0x1B5C74u;
label_1b5c74:
    // 0x1b5c74: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b5c74u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b5c78:
    // 0x1b5c78: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b5c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5c7c:
    // 0x1b5c7c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5c80:
    // 0x1b5c80: 0x3c033e49  lui         $v1, 0x3E49
    ctx->pc = 0x1b5c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15945 << 16));
label_1b5c84:
    // 0x1b5c84: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1b5c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1b5c88:
    // 0x1b5c88: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1b5c88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1b5c8c:
    // 0x1b5c8c: 0xc4ac1290  lwc1        $f12, 0x1290($a1)
    ctx->pc = 0x1b5c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b5c90:
    // 0x1b5c90: 0xc48d00d4  lwc1        $f13, 0xD4($a0)
    ctx->pc = 0x1b5c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b5c94:
    // 0x1b5c94: 0xc058f50  jal         func_163D40
label_1b5c98:
    if (ctx->pc == 0x1B5C98u) {
        ctx->pc = 0x1B5C9Cu;
        goto label_1b5c9c;
    }
    ctx->pc = 0x1B5C94u;
    SET_GPR_U32(ctx, 31, 0x1B5C9Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1B5C94u, 0x1B5C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5C9Cu;
label_1b5c9c:
    // 0x1b5c9c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5ca0:
    // 0x1b5ca0: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x1b5ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_1b5ca4:
    // 0x1b5ca4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5ca8:
    // 0x1b5ca8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5cac:
    // 0x1b5cac: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x1b5cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b5cb0:
    // 0x1b5cb0: 0xc46d1380  lwc1        $f13, 0x1380($v1)
    ctx->pc = 0x1b5cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b5cb4:
    // 0x1b5cb4: 0xc058f20  jal         func_163C80
label_1b5cb8:
    if (ctx->pc == 0x1B5CB8u) {
        ctx->pc = 0x1B5CBCu;
        goto label_1b5cbc;
    }
    ctx->pc = 0x1B5CB4u;
    SET_GPR_U32(ctx, 31, 0x1B5CBCu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1B5CB4u, 0x1B5CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5CBCu;
label_1b5cbc:
    // 0x1b5cbc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b5cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1b5cc0:
    // 0x1b5cc0: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b5cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5cc4:
    // 0x1b5cc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b5cc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5cc8:
    // 0x1b5cc8: 0x0  nop
    ctx->pc = 0x1b5cc8u;
    // NOP
label_1b5ccc:
    // 0x1b5ccc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b5cccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b5cd0:
    // 0x1b5cd0: 0x0  nop
    ctx->pc = 0x1b5cd0u;
    // NOP
label_1b5cd4:
    // 0x1b5cd4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1b5cd8:
    if (ctx->pc == 0x1B5CD8u) {
        ctx->pc = 0x1B5CDCu;
        goto label_1b5cdc;
    }
    ctx->pc = 0x1B5CD4u;
    {
        const bool branch_taken_0x1b5cd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b5cd4) {
            ctx->pc = 0x1B5CF0u;
            goto label_1b5cf0;
        }
    }
    ctx->pc = 0x1B5CDCu;
label_1b5cdc:
    // 0x1b5cdc: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1b5cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_1b5ce0:
    // 0x1b5ce0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b5ce0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b5ce4:
    // 0x1b5ce4: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1b5ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b5ce8:
    // 0x1b5ce8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b5ce8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1b5cec:
    // 0x1b5cec: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b5cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1b5cf0:
    // 0x1b5cf0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5cf4:
    // 0x1b5cf4: 0xc4811b5c  lwc1        $f1, 0x1B5C($a0)
    ctx->pc = 0x1b5cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5cf8:
    // 0x1b5cf8: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x1b5cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
label_1b5cfc:
    // 0x1b5cfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b5cfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5d00:
    // 0x1b5d00: 0x0  nop
    ctx->pc = 0x1b5d00u;
    // NOP
label_1b5d04:
    // 0x1b5d04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b5d04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b5d08:
    // 0x1b5d08: 0x0  nop
    ctx->pc = 0x1b5d08u;
    // NOP
label_1b5d0c:
    // 0x1b5d0c: 0x45010038  bc1t        . + 4 + (0x38 << 2)
label_1b5d10:
    if (ctx->pc == 0x1B5D10u) {
        ctx->pc = 0x1B5D14u;
        goto label_1b5d14;
    }
    ctx->pc = 0x1B5D0Cu;
    {
        const bool branch_taken_0x1b5d0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b5d0c) {
            ctx->pc = 0x1B5DF0u;
            goto label_1b5df0;
        }
    }
    ctx->pc = 0x1B5D14u;
label_1b5d14:
    // 0x1b5d14: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b5d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5d18:
    // 0x1b5d18: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x1b5d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
label_1b5d1c:
    // 0x1b5d1c: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x1b5d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_1b5d20:
    // 0x1b5d20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b5d20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5d24:
    // 0x1b5d24: 0x0  nop
    ctx->pc = 0x1b5d24u;
    // NOP
label_1b5d28:
    // 0x1b5d28: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b5d28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b5d2c:
    // 0x1b5d2c: 0x0  nop
    ctx->pc = 0x1b5d2cu;
    // NOP
label_1b5d30:
    // 0x1b5d30: 0x45010018  bc1t        . + 4 + (0x18 << 2)
label_1b5d34:
    if (ctx->pc == 0x1B5D34u) {
        ctx->pc = 0x1B5D38u;
        goto label_1b5d38;
    }
    ctx->pc = 0x1B5D30u;
    {
        const bool branch_taken_0x1b5d30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b5d30) {
            ctx->pc = 0x1B5D94u;
            goto label_1b5d94;
        }
    }
    ctx->pc = 0x1B5D38u;
label_1b5d38:
    // 0x1b5d38: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b5d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5d3c:
    // 0x1b5d3c: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1b5d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5d40:
    // 0x1b5d40: 0x3c063dcc  lui         $a2, 0x3DCC
    ctx->pc = 0x1b5d40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15820 << 16));
label_1b5d44:
    // 0x1b5d44: 0x34c5cccd  ori         $a1, $a2, 0xCCCD
    ctx->pc = 0x1b5d44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
label_1b5d48:
    // 0x1b5d48: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b5d48u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5d4c:
    // 0x1b5d4c: 0x0  nop
    ctx->pc = 0x1b5d4cu;
    // NOP
label_1b5d50:
    // 0x1b5d50: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b5d50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b5d54:
    // 0x1b5d54: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1b5d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_1b5d58:
    // 0x1b5d58: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1b5d58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5d5c:
    // 0x1b5d5c: 0xc4e11b50  lwc1        $f1, 0x1B50($a3)
    ctx->pc = 0x1b5d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5d60:
    // 0x1b5d60: 0x3c083f00  lui         $t0, 0x3F00
    ctx->pc = 0x1b5d60u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16128 << 16));
label_1b5d64:
    // 0x1b5d64: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1b5d64u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5d68:
    // 0x1b5d68: 0x0  nop
    ctx->pc = 0x1b5d68u;
    // NOP
label_1b5d6c:
    // 0x1b5d6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b5d6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b5d70:
    // 0x1b5d70: 0x0  nop
    ctx->pc = 0x1b5d70u;
    // NOP
label_1b5d74:
    // 0x1b5d74: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_1b5d78:
    if (ctx->pc == 0x1B5D78u) {
        ctx->pc = 0x1B5D7Cu;
        goto label_1b5d7c;
    }
    ctx->pc = 0x1B5D74u;
    {
        const bool branch_taken_0x1b5d74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b5d74) {
            ctx->pc = 0x1B5DF0u;
            goto label_1b5df0;
        }
    }
    ctx->pc = 0x1B5D7Cu;
label_1b5d7c:
    // 0x1b5d7c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1b5d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_1b5d80:
    // 0x1b5d80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b5d80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5d84:
    // 0x1b5d84: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5d88:
    // 0x1b5d88: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1b5d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_1b5d8c:
    // 0x1b5d8c: 0x10000018  b           . + 4 + (0x18 << 2)
label_1b5d90:
    if (ctx->pc == 0x1B5D90u) {
        ctx->pc = 0x1B5D94u;
        goto label_1b5d94;
    }
    ctx->pc = 0x1B5D8Cu;
    {
        const bool branch_taken_0x1b5d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5d8c) {
            ctx->pc = 0x1B5DF0u;
            goto label_1b5df0;
        }
    }
    ctx->pc = 0x1B5D94u;
label_1b5d94:
    // 0x1b5d94: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b5d94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5d98:
    // 0x1b5d98: 0xc4a11b50  lwc1        $f1, 0x1B50($a1)
    ctx->pc = 0x1b5d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5d9c:
    // 0x1b5d9c: 0x3c043dcc  lui         $a0, 0x3DCC
    ctx->pc = 0x1b5d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15820 << 16));
label_1b5da0:
    // 0x1b5da0: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x1b5da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_1b5da4:
    // 0x1b5da4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b5da4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5da8:
    // 0x1b5da8: 0x0  nop
    ctx->pc = 0x1b5da8u;
    // NOP
label_1b5dac:
    // 0x1b5dac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b5dacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b5db0:
    // 0x1b5db0: 0xe4a01b50  swc1        $f0, 0x1B50($a1)
    ctx->pc = 0x1b5db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 6992), bits); }
label_1b5db4:
    // 0x1b5db4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5db8:
    // 0x1b5db8: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1b5db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5dbc:
    // 0x1b5dbc: 0x3c053fa6  lui         $a1, 0x3FA6
    ctx->pc = 0x1b5dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16294 << 16));
label_1b5dc0:
    // 0x1b5dc0: 0x34a46666  ori         $a0, $a1, 0x6666
    ctx->pc = 0x1b5dc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26214);
label_1b5dc4:
    // 0x1b5dc4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b5dc4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5dc8:
    // 0x1b5dc8: 0x0  nop
    ctx->pc = 0x1b5dc8u;
    // NOP
label_1b5dcc:
    // 0x1b5dcc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b5dccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b5dd0:
    // 0x1b5dd0: 0x0  nop
    ctx->pc = 0x1b5dd0u;
    // NOP
label_1b5dd4:
    // 0x1b5dd4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1b5dd8:
    if (ctx->pc == 0x1B5DD8u) {
        ctx->pc = 0x1B5DDCu;
        goto label_1b5ddc;
    }
    ctx->pc = 0x1B5DD4u;
    {
        const bool branch_taken_0x1b5dd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b5dd4) {
            ctx->pc = 0x1B5DF0u;
            goto label_1b5df0;
        }
    }
    ctx->pc = 0x1B5DDCu;
label_1b5ddc:
    // 0x1b5ddc: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x1b5ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
label_1b5de0:
    // 0x1b5de0: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1b5de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_1b5de4:
    // 0x1b5de4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b5de4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5de8:
    // 0x1b5de8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5dec:
    // 0x1b5dec: 0xe4801b50  swc1        $f0, 0x1B50($a0)
    ctx->pc = 0x1b5decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6992), bits); }
label_1b5df0:
    // 0x1b5df0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b5df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5df4:
    // 0x1b5df4: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b5df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5df8:
    // 0x1b5df8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b5df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5dfc:
    // 0x1b5dfc: 0x24a30180  addiu       $v1, $a1, 0x180
    ctx->pc = 0x1b5dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
label_1b5e00:
    // 0x1b5e00: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1b5e00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1b5e04:
    // 0x1b5e04: 0x24c50180  addiu       $a1, $a2, 0x180
    ctx->pc = 0x1b5e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
label_1b5e08:
    // 0x1b5e08: 0xc44c1b50  lwc1        $f12, 0x1B50($v0)
    ctx->pc = 0x1b5e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b5e0c:
    // 0x1b5e0c: 0xc040ed8  jal         func_103B60
label_1b5e10:
    if (ctx->pc == 0x1B5E10u) {
        ctx->pc = 0x1B5E14u;
        goto label_1b5e14;
    }
    ctx->pc = 0x1B5E0Cu;
    SET_GPR_U32(ctx, 31, 0x1B5E14u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B5E14u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B5E14u) { return; }
    ctx->pc = 0x1B5E14u;
label_1b5e14:
    // 0x1b5e14: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5e18:
    // 0x1b5e18: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5e1c:
    // 0x1b5e1c: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1b5e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b5e20:
    // 0x1b5e20: 0xc05cd58  jal         func_173560
label_1b5e24:
    if (ctx->pc == 0x1B5E24u) {
        ctx->pc = 0x1B5E28u;
        goto label_1b5e28;
    }
    ctx->pc = 0x1B5E20u;
    SET_GPR_U32(ctx, 31, 0x1B5E28u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1B5E20u, 0x1B5E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5E28u;
label_1b5e28:
    // 0x1b5e28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b5e28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b5e2c:
    // 0x1b5e2c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5e30:
    // 0x1b5e30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b5e30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b5e34:
    // 0x1b5e34: 0xc057480  jal         func_15D200
label_1b5e38:
    if (ctx->pc == 0x1B5E38u) {
        ctx->pc = 0x1B5E3Cu;
        goto label_1b5e3c;
    }
    ctx->pc = 0x1B5E34u;
    SET_GPR_U32(ctx, 31, 0x1B5E3Cu);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1B5E34u, 0x1B5E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5E3Cu;
label_1b5e3c:
    // 0x1b5e3c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b5e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5e40:
    // 0x1b5e40: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x1b5e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_1b5e44:
    // 0x1b5e44: 0xc057a80  jal         func_15EA00
label_1b5e48:
    if (ctx->pc == 0x1B5E48u) {
        ctx->pc = 0x1B5E4Cu;
        goto label_1b5e4c;
    }
    ctx->pc = 0x1B5E44u;
    SET_GPR_U32(ctx, 31, 0x1B5E4Cu);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1B5E44u, 0x1B5E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5E4Cu;
label_1b5e4c:
    // 0x1b5e4c: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x1b5e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
label_1b5e50:
    // 0x1b5e50: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1b5e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1b5e54:
    // 0x1b5e54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b5e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b5e58:
    // 0x1b5e58: 0x0  nop
    ctx->pc = 0x1b5e58u;
    // NOP
label_1b5e5c:
    // 0x1b5e5c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b5e5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b5e60:
    // 0x1b5e60: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b5e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_1b5e64:
    // 0x1b5e64: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b5e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5e68:
    // 0x1b5e68: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1b5e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5e6c:
    // 0x1b5e6c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5e70:
    // 0x1b5e70: 0xc4800124  lwc1        $f0, 0x124($a0)
    ctx->pc = 0x1b5e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b5e74:
    // 0x1b5e74: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b5e74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b5e78:
    // 0x1b5e78: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1b5e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_1b5e7c:
    // 0x1b5e7c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5e80:
    // 0x1b5e80: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1b5e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5e84:
    // 0x1b5e84: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b5e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b5e88:
    // 0x1b5e88: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b5e88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b5e8c:
    // 0x1b5e8c: 0x0  nop
    ctx->pc = 0x1b5e8cu;
    // NOP
label_1b5e90:
    // 0x1b5e90: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1b5e94:
    if (ctx->pc == 0x1B5E94u) {
        ctx->pc = 0x1B5E98u;
        goto label_1b5e98;
    }
    ctx->pc = 0x1B5E90u;
    {
        const bool branch_taken_0x1b5e90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b5e90) {
            ctx->pc = 0x1B5EA4u;
            goto label_1b5ea4;
        }
    }
    ctx->pc = 0x1B5E98u;
label_1b5e98:
    // 0x1b5e98: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b5e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b5e9c:
    // 0x1b5e9c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b5e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5ea0:
    // 0x1b5ea0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1b5ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1b5ea4:
    // 0x1b5ea4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b5ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5ea8:
    // 0x1b5ea8: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1b5ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5eac:
    // 0x1b5eac: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5eb0:
    // 0x1b5eb0: 0xc4801284  lwc1        $f0, 0x1284($a0)
    ctx->pc = 0x1b5eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b5eb4:
    // 0x1b5eb4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b5eb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b5eb8:
    // 0x1b5eb8: 0xe4801284  swc1        $f0, 0x1284($a0)
    ctx->pc = 0x1b5eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4740), bits); }
label_1b5ebc:
    // 0x1b5ebc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b5ebcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b5ec0:
    // 0x1b5ec0: 0xc097530  jal         func_25D4C0
label_1b5ec4:
    if (ctx->pc == 0x1B5EC4u) {
        ctx->pc = 0x1B5EC8u;
        goto label_1b5ec8;
    }
    ctx->pc = 0x1B5EC0u;
    SET_GPR_U32(ctx, 31, 0x1B5EC8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B5EC0u, 0x1B5EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5EC8u;
label_1b5ec8:
    // 0x1b5ec8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b5ec8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b5ecc:
    // 0x1b5ecc: 0x8fb10068  lw          $s1, 0x68($sp)
    ctx->pc = 0x1b5eccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5ed0:
    // 0x1b5ed0: 0x8623127e  lh          $v1, 0x127E($s1)
    ctx->pc = 0x1b5ed0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4734)));
label_1b5ed4:
    // 0x1b5ed4: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
label_1b5ed8:
    if (ctx->pc == 0x1B5ED8u) {
        ctx->pc = 0x1B5EDCu;
        goto label_1b5edc;
    }
    ctx->pc = 0x1B5ED4u;
    {
        const bool branch_taken_0x1b5ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5ed4) {
            ctx->pc = 0x1B5FA8u;
            goto label_1b5fa8;
        }
    }
    ctx->pc = 0x1B5EDCu;
label_1b5edc:
    // 0x1b5edc: 0x8fb30068  lw          $s3, 0x68($sp)
    ctx->pc = 0x1b5edcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5ee0:
    // 0x1b5ee0: 0x8665127e  lh          $a1, 0x127E($s3)
    ctx->pc = 0x1b5ee0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4734)));
label_1b5ee4:
    // 0x1b5ee4: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x1b5ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1b5ee8:
    // 0x1b5ee8: 0xa663127e  sh          $v1, 0x127E($s3)
    ctx->pc = 0x1b5ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4734), (uint16_t)GPR_U32(ctx, 3));
label_1b5eec:
    // 0x1b5eec: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1b5eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b5ef0:
    // 0x1b5ef0: 0xc0587a8  jal         func_161EA0
label_1b5ef4:
    if (ctx->pc == 0x1B5EF4u) {
        ctx->pc = 0x1B5EF8u;
        goto label_1b5ef8;
    }
    ctx->pc = 0x1B5EF0u;
    SET_GPR_U32(ctx, 31, 0x1B5EF8u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1B5EF0u, 0x1B5EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5EF8u;
label_1b5ef8:
    // 0x1b5ef8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1b5ef8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b5efc:
    // 0x1b5efc: 0x12000085  beqz        $s0, . + 4 + (0x85 << 2)
label_1b5f00:
    if (ctx->pc == 0x1B5F00u) {
        ctx->pc = 0x1B5F04u;
        goto label_1b5f04;
    }
    ctx->pc = 0x1B5EFCu;
    {
        const bool branch_taken_0x1b5efc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5efc) {
            ctx->pc = 0x1B6114u;
            goto label_1b6114;
        }
    }
    ctx->pc = 0x1B5F04u;
label_1b5f04:
    // 0x1b5f04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b5f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b5f08:
    // 0x1b5f08: 0x16030006  bne         $s0, $v1, . + 4 + (0x6 << 2)
label_1b5f0c:
    if (ctx->pc == 0x1B5F0Cu) {
        ctx->pc = 0x1B5F10u;
        goto label_1b5f10;
    }
    ctx->pc = 0x1B5F08u;
    {
        const bool branch_taken_0x1b5f08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b5f08) {
            ctx->pc = 0x1B5F24u;
            goto label_1b5f24;
        }
    }
    ctx->pc = 0x1B5F10u;
label_1b5f10:
    // 0x1b5f10: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1b5f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b5f14:
    // 0x1b5f14: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5f18:
    // 0x1b5f18: 0xac641b68  sw          $a0, 0x1B68($v1)
    ctx->pc = 0x1b5f18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7016), GPR_U32(ctx, 4));
label_1b5f1c:
    // 0x1b5f1c: 0x1000007d  b           . + 4 + (0x7D << 2)
label_1b5f20:
    if (ctx->pc == 0x1B5F20u) {
        ctx->pc = 0x1B5F24u;
        goto label_1b5f24;
    }
    ctx->pc = 0x1B5F1Cu;
    {
        const bool branch_taken_0x1b5f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5f1c) {
            ctx->pc = 0x1B6114u;
            goto label_1b6114;
        }
    }
    ctx->pc = 0x1B5F24u;
label_1b5f24:
    // 0x1b5f24: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5f28:
    // 0x1b5f28: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1b5f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1b5f2c:
    // 0x1b5f2c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1b5f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_1b5f30:
    // 0x1b5f30: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1b5f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1b5f34:
    // 0x1b5f34: 0x1060036a  beqz        $v1, . + 4 + (0x36A << 2)
label_1b5f38:
    if (ctx->pc == 0x1B5F38u) {
        ctx->pc = 0x1B5F3Cu;
        goto label_1b5f3c;
    }
    ctx->pc = 0x1B5F34u;
    {
        const bool branch_taken_0x1b5f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5f34) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B5F3Cu;
label_1b5f3c:
    // 0x1b5f3c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b5f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5f40:
    // 0x1b5f40: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1b5f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1b5f44:
    // 0x1b5f44: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1b5f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
label_1b5f48:
    // 0x1b5f48: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b5f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b5f4c:
    // 0x1b5f4c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1b5f4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1b5f50:
    // 0x1b5f50: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1b5f50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_1b5f54:
    // 0x1b5f54: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5f58:
    // 0x1b5f58: 0x906313a6  lbu         $v1, 0x13A6($v1)
    ctx->pc = 0x1b5f58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
label_1b5f5c:
    // 0x1b5f5c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1b5f5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1b5f60:
    // 0x1b5f60: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b5f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b5f64:
    // 0x1b5f64: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_1b5f68:
    if (ctx->pc == 0x1B5F68u) {
        ctx->pc = 0x1B5F6Cu;
        goto label_1b5f6c;
    }
    ctx->pc = 0x1B5F64u;
    {
        const bool branch_taken_0x1b5f64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b5f64) {
            ctx->pc = 0x1B5F94u;
            goto label_1b5f94;
        }
    }
    ctx->pc = 0x1B5F6Cu;
label_1b5f6c:
    // 0x1b5f6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b5f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5f70:
    // 0x1b5f70: 0x10850008  beq         $a0, $a1, . + 4 + (0x8 << 2)
label_1b5f74:
    if (ctx->pc == 0x1B5F74u) {
        ctx->pc = 0x1B5F78u;
        goto label_1b5f78;
    }
    ctx->pc = 0x1B5F70u;
    {
        const bool branch_taken_0x1b5f70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1b5f70) {
            ctx->pc = 0x1B5F94u;
            goto label_1b5f94;
        }
    }
    ctx->pc = 0x1B5F78u;
label_1b5f78:
    // 0x1b5f78: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1b5f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b5f7c:
    // 0x1b5f7c: 0x10860358  beq         $a0, $a2, . + 4 + (0x358 << 2)
label_1b5f80:
    if (ctx->pc == 0x1B5F80u) {
        ctx->pc = 0x1B5F84u;
        goto label_1b5f84;
    }
    ctx->pc = 0x1B5F7Cu;
    {
        const bool branch_taken_0x1b5f7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x1b5f7c) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B5F84u;
label_1b5f84:
    // 0x1b5f84: 0x10800356  beqz        $a0, . + 4 + (0x356 << 2)
label_1b5f88:
    if (ctx->pc == 0x1B5F88u) {
        ctx->pc = 0x1B5F8Cu;
        goto label_1b5f8c;
    }
    ctx->pc = 0x1B5F84u;
    {
        const bool branch_taken_0x1b5f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5f84) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B5F8Cu;
label_1b5f8c:
    // 0x1b5f8c: 0x10000354  b           . + 4 + (0x354 << 2)
label_1b5f90:
    if (ctx->pc == 0x1B5F90u) {
        ctx->pc = 0x1B5F94u;
        goto label_1b5f94;
    }
    ctx->pc = 0x1B5F8Cu;
    {
        const bool branch_taken_0x1b5f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5f8c) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B5F94u;
label_1b5f94:
    // 0x1b5f94: 0xc0c5238  jal         func_3148E0
label_1b5f98:
    if (ctx->pc == 0x1B5F98u) {
        ctx->pc = 0x1B5F9Cu;
        goto label_1b5f9c;
    }
    ctx->pc = 0x1B5F94u;
    SET_GPR_U32(ctx, 31, 0x1B5F9Cu);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1B5F94u, 0x1B5F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5F9Cu;
label_1b5f9c:
    // 0x1b5f9c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1b5f9cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b5fa0:
    // 0x1b5fa0: 0x1000034f  b           . + 4 + (0x34F << 2)
label_1b5fa4:
    if (ctx->pc == 0x1B5FA4u) {
        ctx->pc = 0x1B5FA8u;
        goto label_1b5fa8;
    }
    ctx->pc = 0x1B5FA0u;
    {
        const bool branch_taken_0x1b5fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5fa0) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B5FA8u;
label_1b5fa8:
    // 0x1b5fa8: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b5fa8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5fac:
    // 0x1b5fac: 0x910209df  lbu         $v0, 0x9DF($t0)
    ctx->pc = 0x1b5facu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2527)));
label_1b5fb0:
    // 0x1b5fb0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1b5fb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1b5fb4:
    // 0x1b5fb4: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x1b5fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
label_1b5fb8:
    // 0x1b5fb8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_1b5fbc:
    if (ctx->pc == 0x1B5FBCu) {
        ctx->pc = 0x1B5FC0u;
        goto label_1b5fc0;
    }
    ctx->pc = 0x1B5FB8u;
    {
        const bool branch_taken_0x1b5fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5fb8) {
            ctx->pc = 0x1B605Cu;
            goto label_1b605c;
        }
    }
    ctx->pc = 0x1B5FC0u;
label_1b5fc0:
    // 0x1b5fc0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5fc4:
    // 0x1b5fc4: 0x8c821b68  lw          $v0, 0x1B68($a0)
    ctx->pc = 0x1b5fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7016)));
label_1b5fc8:
    // 0x1b5fc8: 0x34440001  ori         $a0, $v0, 0x1
    ctx->pc = 0x1b5fc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1b5fcc:
    // 0x1b5fcc: 0xc0587a8  jal         func_161EA0
label_1b5fd0:
    if (ctx->pc == 0x1B5FD0u) {
        ctx->pc = 0x1B5FD4u;
        goto label_1b5fd4;
    }
    ctx->pc = 0x1B5FCCu;
    SET_GPR_U32(ctx, 31, 0x1B5FD4u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1B5FCCu, 0x1B5FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5FD4u;
label_1b5fd4:
    // 0x1b5fd4: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_1b5fd8:
    if (ctx->pc == 0x1B5FD8u) {
        ctx->pc = 0x1B5FDCu;
        goto label_1b5fdc;
    }
    ctx->pc = 0x1B5FD4u;
    {
        const bool branch_taken_0x1b5fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5fd4) {
            ctx->pc = 0x1B6114u;
            goto label_1b6114;
        }
    }
    ctx->pc = 0x1B5FDCu;
label_1b5fdc:
    // 0x1b5fdc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5fe0:
    // 0x1b5fe0: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1b5fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1b5fe4:
    // 0x1b5fe4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1b5fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_1b5fe8:
    // 0x1b5fe8: 0xa33024  and         $a2, $a1, $v1
    ctx->pc = 0x1b5fe8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1b5fec:
    // 0x1b5fec: 0x10c0033c  beqz        $a2, . + 4 + (0x33C << 2)
label_1b5ff0:
    if (ctx->pc == 0x1B5FF0u) {
        ctx->pc = 0x1B5FF4u;
        goto label_1b5ff4;
    }
    ctx->pc = 0x1B5FECu;
    {
        const bool branch_taken_0x1b5fec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5fec) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B5FF4u;
label_1b5ff4:
    // 0x1b5ff4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b5ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b5ff8:
    // 0x1b5ff8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1b5ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1b5ffc:
    // 0x1b5ffc: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1b5ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
label_1b6000:
    // 0x1b6000: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b6000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b6004:
    // 0x1b6004: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1b6004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1b6008:
    // 0x1b6008: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1b6008u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_1b600c:
    // 0x1b600c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b600cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6010:
    // 0x1b6010: 0x906313a6  lbu         $v1, 0x13A6($v1)
    ctx->pc = 0x1b6010u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
label_1b6014:
    // 0x1b6014: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1b6014u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1b6018:
    // 0x1b6018: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b6018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b601c:
    // 0x1b601c: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
label_1b6020:
    if (ctx->pc == 0x1B6020u) {
        ctx->pc = 0x1B6024u;
        goto label_1b6024;
    }
    ctx->pc = 0x1B601Cu;
    {
        const bool branch_taken_0x1b601c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b601c) {
            ctx->pc = 0x1B604Cu;
            goto label_1b604c;
        }
    }
    ctx->pc = 0x1B6024u;
label_1b6024:
    // 0x1b6024: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b6024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6028:
    // 0x1b6028: 0x10a40008  beq         $a1, $a0, . + 4 + (0x8 << 2)
label_1b602c:
    if (ctx->pc == 0x1B602Cu) {
        ctx->pc = 0x1B6030u;
        goto label_1b6030;
    }
    ctx->pc = 0x1B6028u;
    {
        const bool branch_taken_0x1b6028 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b6028) {
            ctx->pc = 0x1B604Cu;
            goto label_1b604c;
        }
    }
    ctx->pc = 0x1B6030u;
label_1b6030:
    // 0x1b6030: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b6030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b6034:
    // 0x1b6034: 0x10a3032a  beq         $a1, $v1, . + 4 + (0x32A << 2)
label_1b6038:
    if (ctx->pc == 0x1B6038u) {
        ctx->pc = 0x1B603Cu;
        goto label_1b603c;
    }
    ctx->pc = 0x1B6034u;
    {
        const bool branch_taken_0x1b6034 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b6034) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B603Cu;
label_1b603c:
    // 0x1b603c: 0x10a00328  beqz        $a1, . + 4 + (0x328 << 2)
label_1b6040:
    if (ctx->pc == 0x1B6040u) {
        ctx->pc = 0x1B6044u;
        goto label_1b6044;
    }
    ctx->pc = 0x1B603Cu;
    {
        const bool branch_taken_0x1b603c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b603c) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B6044u;
label_1b6044:
    // 0x1b6044: 0x10000326  b           . + 4 + (0x326 << 2)
label_1b6048:
    if (ctx->pc == 0x1B6048u) {
        ctx->pc = 0x1B604Cu;
        goto label_1b604c;
    }
    ctx->pc = 0x1B6044u;
    {
        const bool branch_taken_0x1b6044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6044) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B604Cu;
label_1b604c:
    // 0x1b604c: 0xc0c5238  jal         func_3148E0
label_1b6050:
    if (ctx->pc == 0x1B6050u) {
        ctx->pc = 0x1B6054u;
        goto label_1b6054;
    }
    ctx->pc = 0x1B604Cu;
    SET_GPR_U32(ctx, 31, 0x1B6054u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1B604Cu, 0x1B6054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6054u;
label_1b6054:
    // 0x1b6054: 0x10000322  b           . + 4 + (0x322 << 2)
label_1b6058:
    if (ctx->pc == 0x1B6058u) {
        ctx->pc = 0x1B605Cu;
        goto label_1b605c;
    }
    ctx->pc = 0x1B6054u;
    {
        const bool branch_taken_0x1b6054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6054) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B605Cu;
label_1b605c:
    // 0x1b605c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1b605cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1b6060:
    // 0x1b6060: 0xc0587a8  jal         func_161EA0
label_1b6064:
    if (ctx->pc == 0x1B6064u) {
        ctx->pc = 0x1B6068u;
        goto label_1b6068;
    }
    ctx->pc = 0x1B6060u;
    SET_GPR_U32(ctx, 31, 0x1B6068u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1B6060u, 0x1B6068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6068u;
label_1b6068:
    // 0x1b6068: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1b6068u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b606c:
    // 0x1b606c: 0x12000029  beqz        $s0, . + 4 + (0x29 << 2)
label_1b6070:
    if (ctx->pc == 0x1B6070u) {
        ctx->pc = 0x1B6074u;
        goto label_1b6074;
    }
    ctx->pc = 0x1B606Cu;
    {
        const bool branch_taken_0x1b606c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b606c) {
            ctx->pc = 0x1B6114u;
            goto label_1b6114;
        }
    }
    ctx->pc = 0x1B6074u;
label_1b6074:
    // 0x1b6074: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b6074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b6078:
    // 0x1b6078: 0x16030006  bne         $s0, $v1, . + 4 + (0x6 << 2)
label_1b607c:
    if (ctx->pc == 0x1B607Cu) {
        ctx->pc = 0x1B6080u;
        goto label_1b6080;
    }
    ctx->pc = 0x1B6078u;
    {
        const bool branch_taken_0x1b6078 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b6078) {
            ctx->pc = 0x1B6094u;
            goto label_1b6094;
        }
    }
    ctx->pc = 0x1B6080u;
label_1b6080:
    // 0x1b6080: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1b6080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b6084:
    // 0x1b6084: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6088:
    // 0x1b6088: 0xac661b68  sw          $a2, 0x1B68($v1)
    ctx->pc = 0x1b6088u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7016), GPR_U32(ctx, 6));
label_1b608c:
    // 0x1b608c: 0x10000021  b           . + 4 + (0x21 << 2)
label_1b6090:
    if (ctx->pc == 0x1B6090u) {
        ctx->pc = 0x1B6094u;
        goto label_1b6094;
    }
    ctx->pc = 0x1B608Cu;
    {
        const bool branch_taken_0x1b608c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b608c) {
            ctx->pc = 0x1B6114u;
            goto label_1b6114;
        }
    }
    ctx->pc = 0x1B6094u;
label_1b6094:
    // 0x1b6094: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6098:
    // 0x1b6098: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1b6098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1b609c:
    // 0x1b609c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1b609cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_1b60a0:
    // 0x1b60a0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b60a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1b60a4:
    // 0x1b60a4: 0x1060030e  beqz        $v1, . + 4 + (0x30E << 2)
label_1b60a8:
    if (ctx->pc == 0x1B60A8u) {
        ctx->pc = 0x1B60ACu;
        goto label_1b60ac;
    }
    ctx->pc = 0x1B60A4u;
    {
        const bool branch_taken_0x1b60a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b60a4) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B60ACu;
label_1b60ac:
    // 0x1b60ac: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b60acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b60b0:
    // 0x1b60b0: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1b60b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1b60b4:
    // 0x1b60b4: 0x3c04feff  lui         $a0, 0xFEFF
    ctx->pc = 0x1b60b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65279 << 16));
label_1b60b8:
    // 0x1b60b8: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x1b60b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_1b60bc:
    // 0x1b60bc: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1b60bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_1b60c0:
    // 0x1b60c0: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1b60c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1b60c4:
    // 0x1b60c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b60c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b60c8:
    // 0x1b60c8: 0x906313a6  lbu         $v1, 0x13A6($v1)
    ctx->pc = 0x1b60c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
label_1b60cc:
    // 0x1b60cc: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x1b60ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1b60d0:
    // 0x1b60d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b60d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b60d4:
    // 0x1b60d4: 0x10c4000b  beq         $a2, $a0, . + 4 + (0xB << 2)
label_1b60d8:
    if (ctx->pc == 0x1B60D8u) {
        ctx->pc = 0x1B60DCu;
        goto label_1b60dc;
    }
    ctx->pc = 0x1B60D4u;
    {
        const bool branch_taken_0x1b60d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b60d4) {
            ctx->pc = 0x1B6104u;
            goto label_1b6104;
        }
    }
    ctx->pc = 0x1B60DCu;
label_1b60dc:
    // 0x1b60dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b60dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b60e0:
    // 0x1b60e0: 0x10c30008  beq         $a2, $v1, . + 4 + (0x8 << 2)
label_1b60e4:
    if (ctx->pc == 0x1B60E4u) {
        ctx->pc = 0x1B60E8u;
        goto label_1b60e8;
    }
    ctx->pc = 0x1B60E0u;
    {
        const bool branch_taken_0x1b60e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b60e0) {
            ctx->pc = 0x1B6104u;
            goto label_1b6104;
        }
    }
    ctx->pc = 0x1B60E8u;
label_1b60e8:
    // 0x1b60e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b60e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b60ec:
    // 0x1b60ec: 0x10c502fc  beq         $a2, $a1, . + 4 + (0x2FC << 2)
label_1b60f0:
    if (ctx->pc == 0x1B60F0u) {
        ctx->pc = 0x1B60F4u;
        goto label_1b60f4;
    }
    ctx->pc = 0x1B60ECu;
    {
        const bool branch_taken_0x1b60ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x1b60ec) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B60F4u;
label_1b60f4:
    // 0x1b60f4: 0x10c002fa  beqz        $a2, . + 4 + (0x2FA << 2)
label_1b60f8:
    if (ctx->pc == 0x1B60F8u) {
        ctx->pc = 0x1B60FCu;
        goto label_1b60fc;
    }
    ctx->pc = 0x1B60F4u;
    {
        const bool branch_taken_0x1b60f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b60f4) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B60FCu;
label_1b60fc:
    // 0x1b60fc: 0x100002f8  b           . + 4 + (0x2F8 << 2)
label_1b6100:
    if (ctx->pc == 0x1B6100u) {
        ctx->pc = 0x1B6104u;
        goto label_1b6104;
    }
    ctx->pc = 0x1B60FCu;
    {
        const bool branch_taken_0x1b60fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b60fc) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B6104u;
label_1b6104:
    // 0x1b6104: 0xc0c5238  jal         func_3148E0
label_1b6108:
    if (ctx->pc == 0x1B6108u) {
        ctx->pc = 0x1B610Cu;
        goto label_1b610c;
    }
    ctx->pc = 0x1B6104u;
    SET_GPR_U32(ctx, 31, 0x1B610Cu);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1B6104u, 0x1B610Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B610Cu;
label_1b610c:
    // 0x1b610c: 0x100002f4  b           . + 4 + (0x2F4 << 2)
label_1b6110:
    if (ctx->pc == 0x1B6110u) {
        ctx->pc = 0x1B6114u;
        goto label_1b6114;
    }
    ctx->pc = 0x1B610Cu;
    {
        const bool branch_taken_0x1b610c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b610c) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B6114u;
label_1b6114:
    // 0x1b6114: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1b6114u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6118:
    // 0x1b6118: 0x90e809e7  lbu         $t0, 0x9E7($a3)
    ctx->pc = 0x1b6118u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2535)));
label_1b611c:
    // 0x1b611c: 0x110002f0  beqz        $t0, . + 4 + (0x2F0 << 2)
label_1b6120:
    if (ctx->pc == 0x1B6120u) {
        ctx->pc = 0x1B6124u;
        goto label_1b6124;
    }
    ctx->pc = 0x1B611Cu;
    {
        const bool branch_taken_0x1b611c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b611c) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B6124u;
label_1b6124:
    // 0x1b6124: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6128:
    // 0x1b6128: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1b6128u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_1b612c:
    // 0x1b612c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b612cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b6130:
    // 0x1b6130: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1b6130u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
label_1b6134:
    // 0x1b6134: 0x100002ea  b           . + 4 + (0x2EA << 2)
label_1b6138:
    if (ctx->pc == 0x1B6138u) {
        ctx->pc = 0x1B613Cu;
        goto label_1b613c;
    }
    ctx->pc = 0x1B6134u;
    {
        const bool branch_taken_0x1b6134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6134) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B613Cu;
label_1b613c:
    // 0x1b613c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b613cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6140:
    // 0x1b6140: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b6140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6144:
    // 0x1b6144: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1b6144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1b6148:
    // 0x1b6148: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x1b6148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_1b614c:
    // 0x1b614c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1b614cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b6150:
    // 0x1b6150: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b6150u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6154:
    // 0x1b6154: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b6154u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1b6158:
    // 0x1b6158: 0xc0965d0  jal         func_259740
label_1b615c:
    if (ctx->pc == 0x1B615Cu) {
        ctx->pc = 0x1B6160u;
        goto label_1b6160;
    }
    ctx->pc = 0x1B6158u;
    SET_GPR_U32(ctx, 31, 0x1B6160u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B6158u, 0x1B6160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6160u;
label_1b6160:
    // 0x1b6160: 0x3c0340a3  lui         $v1, 0x40A3
    ctx->pc = 0x1b6160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16547 << 16));
label_1b6164:
    // 0x1b6164: 0x34653334  ori         $a1, $v1, 0x3334
    ctx->pc = 0x1b6164u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13108);
label_1b6168:
    // 0x1b6168: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b6168u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b616c:
    // 0x1b616c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b616cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6170:
    // 0x1b6170: 0xe4801280  swc1        $f0, 0x1280($a0)
    ctx->pc = 0x1b6170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4736), bits); }
label_1b6174:
    // 0x1b6174: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b6174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6178:
    // 0x1b6178: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x1b6178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
label_1b617c:
    // 0x1b617c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b617cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6180:
    // 0x1b6180: 0x90440003  lbu         $a0, 0x3($v0)
    ctx->pc = 0x1b6180u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1b6184:
    // 0x1b6184: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1b6184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1b6188:
    // 0x1b6188: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x1b6188u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
label_1b618c:
    // 0x1b618c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b618cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6190:
    // 0x1b6190: 0x8c431b6c  lw          $v1, 0x1B6C($v0)
    ctx->pc = 0x1b6190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
label_1b6194:
    // 0x1b6194: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1b6198:
    if (ctx->pc == 0x1B6198u) {
        ctx->pc = 0x1B619Cu;
        goto label_1b619c;
    }
    ctx->pc = 0x1B6194u;
    {
        const bool branch_taken_0x1b6194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6194) {
            ctx->pc = 0x1B61B8u;
            goto label_1b61b8;
        }
    }
    ctx->pc = 0x1B619Cu;
label_1b619c:
    // 0x1b619c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b619cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b61a0:
    // 0x1b61a0: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1b61a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1b61a4:
    // 0x1b61a4: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x1b61a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
label_1b61a8:
    // 0x1b61a8: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x1b61a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b61ac:
    // 0x1b61ac: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1b61acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1b61b0:
    // 0x1b61b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b61b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b61b4:
    // 0x1b61b4: 0xac241a98  sw          $a0, 0x1A98($at)
    ctx->pc = 0x1b61b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 4));
label_1b61b8:
    // 0x1b61b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b61b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b61bc:
    // 0x1b61bc: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1b61bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1b61c0:
    // 0x1b61c0: 0x34620100  ori         $v0, $v1, 0x100
    ctx->pc = 0x1b61c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_1b61c4:
    // 0x1b61c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b61c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b61c8:
    // 0x1b61c8: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1b61c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 2));
label_1b61cc:
    // 0x1b61cc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b61ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b61d0:
    // 0x1b61d0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1b61d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1b61d4:
    // 0x1b61d4: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x1b61d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
label_1b61d8:
    // 0x1b61d8: 0x453025  or          $a2, $v0, $a1
    ctx->pc = 0x1b61d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_1b61dc:
    // 0x1b61dc: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1b61dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1b61e0:
    // 0x1b61e0: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1b61e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b61e4:
    // 0x1b61e4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1b61e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_1b61e8:
    // 0x1b61e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b61e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b61ec:
    // 0x1b61ec: 0xc096b40  jal         func_25AD00
label_1b61f0:
    if (ctx->pc == 0x1B61F0u) {
        ctx->pc = 0x1B61F4u;
        goto label_1b61f4;
    }
    ctx->pc = 0x1B61ECu;
    SET_GPR_U32(ctx, 31, 0x1B61F4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B61ECu, 0x1B61F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B61F4u;
label_1b61f4:
    // 0x1b61f4: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x1b61f4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b61f8:
    // 0x1b61f8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b61f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b61fc:
    // 0x1b61fc: 0x8c421b64  lw          $v0, 0x1B64($v0)
    ctx->pc = 0x1b61fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7012)));
label_1b6200:
    // 0x1b6200: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1b6204:
    if (ctx->pc == 0x1B6204u) {
        ctx->pc = 0x1B6208u;
        goto label_1b6208;
    }
    ctx->pc = 0x1B6200u;
    {
        const bool branch_taken_0x1b6200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6200) {
            ctx->pc = 0x1B622Cu;
            goto label_1b622c;
        }
    }
    ctx->pc = 0x1B6208u;
label_1b6208:
    // 0x1b6208: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b620c:
    // 0x1b620c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b620cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6210:
    // 0x1b6210: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x1b6210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
label_1b6214:
    // 0x1b6214: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1b6214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_1b6218:
    // 0x1b6218: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1b6218u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b621c:
    // 0x1b621c: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x1b621cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
label_1b6220:
    // 0x1b6220: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x1b6220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_1b6224:
    // 0x1b6224: 0xc040ed8  jal         func_103B60
label_1b6228:
    if (ctx->pc == 0x1B6228u) {
        ctx->pc = 0x1B622Cu;
        goto label_1b622c;
    }
    ctx->pc = 0x1B6224u;
    SET_GPR_U32(ctx, 31, 0x1B622Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B622Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B622Cu) { return; }
    ctx->pc = 0x1B622Cu;
label_1b622c:
    // 0x1b622c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b622cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6230:
    // 0x1b6230: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6234:
    // 0x1b6234: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x1b6234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b6238:
    // 0x1b6238: 0xc4ad1380  lwc1        $f13, 0x1380($a1)
    ctx->pc = 0x1b6238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b623c:
    // 0x1b623c: 0xc058f20  jal         func_163C80
label_1b6240:
    if (ctx->pc == 0x1B6240u) {
        ctx->pc = 0x1B6244u;
        goto label_1b6244;
    }
    ctx->pc = 0x1B623Cu;
    SET_GPR_U32(ctx, 31, 0x1B6244u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1B623Cu, 0x1B6244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6244u;
label_1b6244:
    // 0x1b6244: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b6244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1b6248:
    // 0x1b6248: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b6248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b624c:
    // 0x1b624c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b624cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b6250:
    // 0x1b6250: 0x0  nop
    ctx->pc = 0x1b6250u;
    // NOP
label_1b6254:
    // 0x1b6254: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b6254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b6258:
    // 0x1b6258: 0x0  nop
    ctx->pc = 0x1b6258u;
    // NOP
label_1b625c:
    // 0x1b625c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1b6260:
    if (ctx->pc == 0x1B6260u) {
        ctx->pc = 0x1B6264u;
        goto label_1b6264;
    }
    ctx->pc = 0x1B625Cu;
    {
        const bool branch_taken_0x1b625c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b625c) {
            ctx->pc = 0x1B6278u;
            goto label_1b6278;
        }
    }
    ctx->pc = 0x1B6264u;
label_1b6264:
    // 0x1b6264: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1b6264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1b6268:
    // 0x1b6268: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b6268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b626c:
    // 0x1b626c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1b626cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6270:
    // 0x1b6270: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b6270u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1b6274:
    // 0x1b6274: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b6274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1b6278:
    // 0x1b6278: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b6278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b627c:
    // 0x1b627c: 0xc4411b5c  lwc1        $f1, 0x1B5C($v0)
    ctx->pc = 0x1b627cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b6280:
    // 0x1b6280: 0x3c044240  lui         $a0, 0x4240
    ctx->pc = 0x1b6280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16960 << 16));
label_1b6284:
    // 0x1b6284: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b6284u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b6288:
    // 0x1b6288: 0x0  nop
    ctx->pc = 0x1b6288u;
    // NOP
label_1b628c:
    // 0x1b628c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b628cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b6290:
    // 0x1b6290: 0x0  nop
    ctx->pc = 0x1b6290u;
    // NOP
label_1b6294:
    // 0x1b6294: 0x45010038  bc1t        . + 4 + (0x38 << 2)
label_1b6298:
    if (ctx->pc == 0x1B6298u) {
        ctx->pc = 0x1B629Cu;
        goto label_1b629c;
    }
    ctx->pc = 0x1B6294u;
    {
        const bool branch_taken_0x1b6294 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6294) {
            ctx->pc = 0x1B6378u;
            goto label_1b6378;
        }
    }
    ctx->pc = 0x1B629Cu;
label_1b629c:
    // 0x1b629c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b629cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b62a0:
    // 0x1b62a0: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1b62a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_1b62a4:
    // 0x1b62a4: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1b62a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1b62a8:
    // 0x1b62a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b62a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b62ac:
    // 0x1b62ac: 0x0  nop
    ctx->pc = 0x1b62acu;
    // NOP
label_1b62b0:
    // 0x1b62b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b62b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b62b4:
    // 0x1b62b4: 0x0  nop
    ctx->pc = 0x1b62b4u;
    // NOP
label_1b62b8:
    // 0x1b62b8: 0x45010018  bc1t        . + 4 + (0x18 << 2)
label_1b62bc:
    if (ctx->pc == 0x1B62BCu) {
        ctx->pc = 0x1B62C0u;
        goto label_1b62c0;
    }
    ctx->pc = 0x1B62B8u;
    {
        const bool branch_taken_0x1b62b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b62b8) {
            ctx->pc = 0x1B631Cu;
            goto label_1b631c;
        }
    }
    ctx->pc = 0x1B62C0u;
label_1b62c0:
    // 0x1b62c0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b62c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b62c4:
    // 0x1b62c4: 0xc4811b50  lwc1        $f1, 0x1B50($a0)
    ctx->pc = 0x1b62c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b62c8:
    // 0x1b62c8: 0x3c063dcc  lui         $a2, 0x3DCC
    ctx->pc = 0x1b62c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15820 << 16));
label_1b62cc:
    // 0x1b62cc: 0x34c5cccd  ori         $a1, $a2, 0xCCCD
    ctx->pc = 0x1b62ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
label_1b62d0:
    // 0x1b62d0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b62d0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b62d4:
    // 0x1b62d4: 0x0  nop
    ctx->pc = 0x1b62d4u;
    // NOP
label_1b62d8:
    // 0x1b62d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b62d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b62dc:
    // 0x1b62dc: 0xe4801b50  swc1        $f0, 0x1B50($a0)
    ctx->pc = 0x1b62dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6992), bits); }
label_1b62e0:
    // 0x1b62e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b62e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b62e4:
    // 0x1b62e4: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1b62e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b62e8:
    // 0x1b62e8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1b62e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_1b62ec:
    // 0x1b62ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b62ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b62f0:
    // 0x1b62f0: 0x0  nop
    ctx->pc = 0x1b62f0u;
    // NOP
label_1b62f4:
    // 0x1b62f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b62f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b62f8:
    // 0x1b62f8: 0x0  nop
    ctx->pc = 0x1b62f8u;
    // NOP
label_1b62fc:
    // 0x1b62fc: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_1b6300:
    if (ctx->pc == 0x1B6300u) {
        ctx->pc = 0x1B6304u;
        goto label_1b6304;
    }
    ctx->pc = 0x1B62FCu;
    {
        const bool branch_taken_0x1b62fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b62fc) {
            ctx->pc = 0x1B6378u;
            goto label_1b6378;
        }
    }
    ctx->pc = 0x1B6304u;
label_1b6304:
    // 0x1b6304: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b6304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1b6308:
    // 0x1b6308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b6308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b630c:
    // 0x1b630c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b630cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6310:
    // 0x1b6310: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1b6310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_1b6314:
    // 0x1b6314: 0x10000018  b           . + 4 + (0x18 << 2)
label_1b6318:
    if (ctx->pc == 0x1B6318u) {
        ctx->pc = 0x1B631Cu;
        goto label_1b631c;
    }
    ctx->pc = 0x1B6314u;
    {
        const bool branch_taken_0x1b6314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6314) {
            ctx->pc = 0x1B6378u;
            goto label_1b6378;
        }
    }
    ctx->pc = 0x1B631Cu;
label_1b631c:
    // 0x1b631c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b631cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6320:
    // 0x1b6320: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1b6320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b6324:
    // 0x1b6324: 0x3c043dcc  lui         $a0, 0x3DCC
    ctx->pc = 0x1b6324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15820 << 16));
label_1b6328:
    // 0x1b6328: 0x3485cccd  ori         $a1, $a0, 0xCCCD
    ctx->pc = 0x1b6328u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_1b632c:
    // 0x1b632c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b632cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b6330:
    // 0x1b6330: 0x0  nop
    ctx->pc = 0x1b6330u;
    // NOP
label_1b6334:
    // 0x1b6334: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b6334u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b6338:
    // 0x1b6338: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1b6338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_1b633c:
    // 0x1b633c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b633cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6340:
    // 0x1b6340: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1b6340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b6344:
    // 0x1b6344: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x1b6344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
label_1b6348:
    // 0x1b6348: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1b6348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_1b634c:
    // 0x1b634c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b634cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b6350:
    // 0x1b6350: 0x0  nop
    ctx->pc = 0x1b6350u;
    // NOP
label_1b6354:
    // 0x1b6354: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b6354u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b6358:
    // 0x1b6358: 0x0  nop
    ctx->pc = 0x1b6358u;
    // NOP
label_1b635c:
    // 0x1b635c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1b6360:
    if (ctx->pc == 0x1B6360u) {
        ctx->pc = 0x1B6364u;
        goto label_1b6364;
    }
    ctx->pc = 0x1B635Cu;
    {
        const bool branch_taken_0x1b635c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b635c) {
            ctx->pc = 0x1B6378u;
            goto label_1b6378;
        }
    }
    ctx->pc = 0x1B6364u;
label_1b6364:
    // 0x1b6364: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1b6364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
label_1b6368:
    // 0x1b6368: 0x34526666  ori         $s2, $v0, 0x6666
    ctx->pc = 0x1b6368u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_1b636c:
    // 0x1b636c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1b636cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b6370:
    // 0x1b6370: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6374:
    // 0x1b6374: 0xe4801b50  swc1        $f0, 0x1B50($a0)
    ctx->pc = 0x1b6374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6992), bits); }
label_1b6378:
    // 0x1b6378: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b6378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b637c:
    // 0x1b637c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b637cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6380:
    // 0x1b6380: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6384:
    // 0x1b6384: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x1b6384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_1b6388:
    // 0x1b6388: 0x24a50180  addiu       $a1, $a1, 0x180
    ctx->pc = 0x1b6388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
label_1b638c:
    // 0x1b638c: 0xc46c1b50  lwc1        $f12, 0x1B50($v1)
    ctx->pc = 0x1b638cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b6390:
    // 0x1b6390: 0xc040ed8  jal         func_103B60
label_1b6394:
    if (ctx->pc == 0x1B6394u) {
        ctx->pc = 0x1B6398u;
        goto label_1b6398;
    }
    ctx->pc = 0x1B6390u;
    SET_GPR_U32(ctx, 31, 0x1B6398u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B6398u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B6398u) { return; }
    ctx->pc = 0x1B6398u;
label_1b6398:
    // 0x1b6398: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b639c:
    // 0x1b639c: 0xc05cd10  jal         func_173440
label_1b63a0:
    if (ctx->pc == 0x1B63A0u) {
        ctx->pc = 0x1B63A4u;
        goto label_1b63a4;
    }
    ctx->pc = 0x1B639Cu;
    SET_GPR_U32(ctx, 31, 0x1B63A4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1B639Cu, 0x1B63A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B63A4u;
label_1b63a4:
    // 0x1b63a4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b63a4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b63a8:
    // 0x1b63a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b63a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b63ac:
    // 0x1b63ac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b63acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b63b0:
    // 0x1b63b0: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1b63b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1b63b4:
    // 0x1b63b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b63b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b63b8:
    // 0x1b63b8: 0xc057480  jal         func_15D200
label_1b63bc:
    if (ctx->pc == 0x1B63BCu) {
        ctx->pc = 0x1B63C0u;
        goto label_1b63c0;
    }
    ctx->pc = 0x1B63B8u;
    SET_GPR_U32(ctx, 31, 0x1B63C0u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1B63B8u, 0x1B63C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B63C0u;
label_1b63c0:
    // 0x1b63c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b63c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b63c4:
    // 0x1b63c4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b63c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b63c8:
    // 0x1b63c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b63c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b63cc:
    // 0x1b63cc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1b63ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_1b63d0:
    // 0x1b63d0: 0x246512c0  addiu       $a1, $v1, 0x12C0
    ctx->pc = 0x1b63d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
label_1b63d4:
    // 0x1b63d4: 0xc05cf7c  jal         func_173DF0
label_1b63d8:
    if (ctx->pc == 0x1B63D8u) {
        ctx->pc = 0x1B63DCu;
        goto label_1b63dc;
    }
    ctx->pc = 0x1B63D4u;
    SET_GPR_U32(ctx, 31, 0x1B63DCu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1B63D4u, 0x1B63DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B63DCu;
label_1b63dc:
    // 0x1b63dc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1b63dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1b63e0:
    // 0x1b63e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b63e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b63e4:
    // 0x1b63e4: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x1b63e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b63e8:
    // 0x1b63e8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b63e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b63ec:
    // 0x1b63ec: 0xc4800124  lwc1        $f0, 0x124($a0)
    ctx->pc = 0x1b63ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b63f0:
    // 0x1b63f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b63f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b63f4:
    // 0x1b63f4: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1b63f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_1b63f8:
    // 0x1b63f8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b63f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b63fc:
    // 0x1b63fc: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x1b63fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b6400:
    // 0x1b6400: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6404:
    // 0x1b6404: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x1b6404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6408:
    // 0x1b6408: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b6408u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b640c:
    // 0x1b640c: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1b640cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
label_1b6410:
    // 0x1b6410: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6414:
    // 0x1b6414: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1b6414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b6418:
    // 0x1b6418: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1b6418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b641c:
    // 0x1b641c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b641cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b6420:
    // 0x1b6420: 0x0  nop
    ctx->pc = 0x1b6420u;
    // NOP
label_1b6424:
    // 0x1b6424: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1b6428:
    if (ctx->pc == 0x1B6428u) {
        ctx->pc = 0x1B642Cu;
        goto label_1b642c;
    }
    ctx->pc = 0x1B6424u;
    {
        const bool branch_taken_0x1b6424 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6424) {
            ctx->pc = 0x1B6444u;
            goto label_1b6444;
        }
    }
    ctx->pc = 0x1B642Cu;
label_1b642c:
    // 0x1b642c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1b642cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6430:
    // 0x1b6430: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6434:
    // 0x1b6434: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1b6434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_1b6438:
    // 0x1b6438: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b6438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b643c:
    // 0x1b643c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b643cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6440:
    // 0x1b6440: 0xac641b60  sw          $a0, 0x1B60($v1)
    ctx->pc = 0x1b6440u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 4));
label_1b6444:
    // 0x1b6444: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b6444u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b6448:
    // 0x1b6448: 0xc097530  jal         func_25D4C0
label_1b644c:
    if (ctx->pc == 0x1B644Cu) {
        ctx->pc = 0x1B6450u;
        goto label_1b6450;
    }
    ctx->pc = 0x1B6448u;
    SET_GPR_U32(ctx, 31, 0x1B6450u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B6448u, 0x1B6450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6450u;
label_1b6450:
    // 0x1b6450: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b6450u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b6454:
    // 0x1b6454: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6458:
    // 0x1b6458: 0x8c651b60  lw          $a1, 0x1B60($v1)
    ctx->pc = 0x1b6458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
label_1b645c:
    // 0x1b645c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1b6460:
    if (ctx->pc == 0x1B6460u) {
        ctx->pc = 0x1B6464u;
        goto label_1b6464;
    }
    ctx->pc = 0x1B645Cu;
    {
        const bool branch_taken_0x1b645c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b645c) {
            ctx->pc = 0x1B6478u;
            goto label_1b6478;
        }
    }
    ctx->pc = 0x1B6464u;
label_1b6464:
    // 0x1b6464: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1b6464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1b6468:
    // 0x1b6468: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b646c:
    // 0x1b646c: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1b646cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1b6470:
    // 0x1b6470: 0x1000021b  b           . + 4 + (0x21B << 2)
label_1b6474:
    if (ctx->pc == 0x1B6474u) {
        ctx->pc = 0x1B6478u;
        goto label_1b6478;
    }
    ctx->pc = 0x1B6470u;
    {
        const bool branch_taken_0x1b6470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6470) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B6478u;
label_1b6478:
    // 0x1b6478: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b6478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b647c:
    // 0x1b647c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1b647cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1b6480:
    // 0x1b6480: 0xc0587a8  jal         func_161EA0
label_1b6484:
    if (ctx->pc == 0x1B6484u) {
        ctx->pc = 0x1B6488u;
        goto label_1b6488;
    }
    ctx->pc = 0x1B6480u;
    SET_GPR_U32(ctx, 31, 0x1B6488u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1B6480u, 0x1B6488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6488u;
label_1b6488:
    // 0x1b6488: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b6488u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b648c:
    // 0x1b648c: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
label_1b6490:
    if (ctx->pc == 0x1B6490u) {
        ctx->pc = 0x1B6494u;
        goto label_1b6494;
    }
    ctx->pc = 0x1B648Cu;
    {
        const bool branch_taken_0x1b648c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b648c) {
            ctx->pc = 0x1B6518u;
            goto label_1b6518;
        }
    }
    ctx->pc = 0x1B6494u;
label_1b6494:
    // 0x1b6494: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6498:
    // 0x1b6498: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1b6498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1b649c:
    // 0x1b649c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1b649cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_1b64a0:
    // 0x1b64a0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b64a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1b64a4:
    // 0x1b64a4: 0x1060020e  beqz        $v1, . + 4 + (0x20E << 2)
label_1b64a8:
    if (ctx->pc == 0x1B64A8u) {
        ctx->pc = 0x1B64ACu;
        goto label_1b64ac;
    }
    ctx->pc = 0x1B64A4u;
    {
        const bool branch_taken_0x1b64a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b64a4) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B64ACu;
label_1b64ac:
    // 0x1b64ac: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b64acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b64b0:
    // 0x1b64b0: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1b64b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1b64b4:
    // 0x1b64b4: 0x3c04feff  lui         $a0, 0xFEFF
    ctx->pc = 0x1b64b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65279 << 16));
label_1b64b8:
    // 0x1b64b8: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x1b64b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_1b64bc:
    // 0x1b64bc: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1b64bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1b64c0:
    // 0x1b64c0: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x1b64c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
label_1b64c4:
    // 0x1b64c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b64c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b64c8:
    // 0x1b64c8: 0x906513a6  lbu         $a1, 0x13A6($v1)
    ctx->pc = 0x1b64c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
label_1b64cc:
    // 0x1b64cc: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1b64ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1b64d0:
    // 0x1b64d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b64d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b64d4:
    // 0x1b64d4: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_1b64d8:
    if (ctx->pc == 0x1B64D8u) {
        ctx->pc = 0x1B64DCu;
        goto label_1b64dc;
    }
    ctx->pc = 0x1B64D4u;
    {
        const bool branch_taken_0x1b64d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b64d4) {
            ctx->pc = 0x1B6504u;
            goto label_1b6504;
        }
    }
    ctx->pc = 0x1B64DCu;
label_1b64dc:
    // 0x1b64dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b64dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b64e0:
    // 0x1b64e0: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_1b64e4:
    if (ctx->pc == 0x1B64E4u) {
        ctx->pc = 0x1B64E8u;
        goto label_1b64e8;
    }
    ctx->pc = 0x1B64E0u;
    {
        const bool branch_taken_0x1b64e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b64e0) {
            ctx->pc = 0x1B6504u;
            goto label_1b6504;
        }
    }
    ctx->pc = 0x1B64E8u;
label_1b64e8:
    // 0x1b64e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b64e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b64ec:
    // 0x1b64ec: 0x108301fc  beq         $a0, $v1, . + 4 + (0x1FC << 2)
label_1b64f0:
    if (ctx->pc == 0x1B64F0u) {
        ctx->pc = 0x1B64F4u;
        goto label_1b64f4;
    }
    ctx->pc = 0x1B64ECu;
    {
        const bool branch_taken_0x1b64ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b64ec) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B64F4u;
label_1b64f4:
    // 0x1b64f4: 0x108001fa  beqz        $a0, . + 4 + (0x1FA << 2)
label_1b64f8:
    if (ctx->pc == 0x1B64F8u) {
        ctx->pc = 0x1B64FCu;
        goto label_1b64fc;
    }
    ctx->pc = 0x1B64F4u;
    {
        const bool branch_taken_0x1b64f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b64f4) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B64FCu;
label_1b64fc:
    // 0x1b64fc: 0x100001f8  b           . + 4 + (0x1F8 << 2)
label_1b6500:
    if (ctx->pc == 0x1B6500u) {
        ctx->pc = 0x1B6504u;
        goto label_1b6504;
    }
    ctx->pc = 0x1B64FCu;
    {
        const bool branch_taken_0x1b64fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b64fc) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B6504u;
label_1b6504:
    // 0x1b6504: 0xc0c5238  jal         func_3148E0
label_1b6508:
    if (ctx->pc == 0x1B6508u) {
        ctx->pc = 0x1B650Cu;
        goto label_1b650c;
    }
    ctx->pc = 0x1B6504u;
    SET_GPR_U32(ctx, 31, 0x1B650Cu);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1B6504u, 0x1B650Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B650Cu;
label_1b650c:
    // 0x1b650c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b650cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b6510:
    // 0x1b6510: 0x100001f3  b           . + 4 + (0x1F3 << 2)
label_1b6514:
    if (ctx->pc == 0x1B6514u) {
        ctx->pc = 0x1B6518u;
        goto label_1b6518;
    }
    ctx->pc = 0x1B6510u;
    {
        const bool branch_taken_0x1b6510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6510) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B6518u;
label_1b6518:
    // 0x1b6518: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b651c:
    // 0x1b651c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1b651cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1b6520:
    // 0x1b6520: 0x106001ef  beqz        $v1, . + 4 + (0x1EF << 2)
label_1b6524:
    if (ctx->pc == 0x1B6524u) {
        ctx->pc = 0x1B6528u;
        goto label_1b6528;
    }
    ctx->pc = 0x1B6520u;
    {
        const bool branch_taken_0x1b6520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6520) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B6528u;
label_1b6528:
    // 0x1b6528: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b652c:
    // 0x1b652c: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1b652cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_1b6530:
    // 0x1b6530: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b6530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b6534:
    // 0x1b6534: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1b6534u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
label_1b6538:
    // 0x1b6538: 0x100001e9  b           . + 4 + (0x1E9 << 2)
label_1b653c:
    if (ctx->pc == 0x1B653Cu) {
        ctx->pc = 0x1B6540u;
        goto label_1b6540;
    }
    ctx->pc = 0x1B6538u;
    {
        const bool branch_taken_0x1b6538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6538) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B6540u;
label_1b6540:
    // 0x1b6540: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6544:
    // 0x1b6544: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b6544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6548:
    // 0x1b6548: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1b6548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1b654c:
    // 0x1b654c: 0x2406004d  addiu       $a2, $zero, 0x4D
    ctx->pc = 0x1b654cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_1b6550:
    // 0x1b6550: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b6550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6554:
    // 0x1b6554: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b6554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1b6558:
    // 0x1b6558: 0xc0965d0  jal         func_259740
label_1b655c:
    if (ctx->pc == 0x1B655Cu) {
        ctx->pc = 0x1B6560u;
        goto label_1b6560;
    }
    ctx->pc = 0x1B6558u;
    SET_GPR_U32(ctx, 31, 0x1B6560u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B6558u, 0x1B6560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6560u;
label_1b6560:
    // 0x1b6560: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b6560u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b6564:
    // 0x1b6564: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x1b6564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_1b6568:
    // 0x1b6568: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b6568u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b656c:
    // 0x1b656c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b656cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6570:
    // 0x1b6570: 0xe4a01280  swc1        $f0, 0x1280($a1)
    ctx->pc = 0x1b6570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4736), bits); }
label_1b6574:
    // 0x1b6574: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6578:
    // 0x1b6578: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x1b6578u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
label_1b657c:
    // 0x1b657c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b657cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6580:
    // 0x1b6580: 0x8c831b64  lw          $v1, 0x1B64($a0)
    ctx->pc = 0x1b6580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7012)));
label_1b6584:
    // 0x1b6584: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1b6588:
    if (ctx->pc == 0x1B6588u) {
        ctx->pc = 0x1B658Cu;
        goto label_1b658c;
    }
    ctx->pc = 0x1B6584u;
    {
        const bool branch_taken_0x1b6584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6584) {
            ctx->pc = 0x1B65B4u;
            goto label_1b65b4;
        }
    }
    ctx->pc = 0x1B658Cu;
label_1b658c:
    // 0x1b658c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b658cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6590:
    // 0x1b6590: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6594:
    // 0x1b6594: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x1b6594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
label_1b6598:
    // 0x1b6598: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1b6598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_1b659c:
    // 0x1b659c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1b659cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b65a0:
    // 0x1b65a0: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x1b65a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
label_1b65a4:
    // 0x1b65a4: 0x24a50180  addiu       $a1, $a1, 0x180
    ctx->pc = 0x1b65a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
label_1b65a8:
    // 0x1b65a8: 0xc040ed8  jal         func_103B60
label_1b65ac:
    if (ctx->pc == 0x1B65ACu) {
        ctx->pc = 0x1B65B0u;
        goto label_1b65b0;
    }
    ctx->pc = 0x1B65A8u;
    SET_GPR_U32(ctx, 31, 0x1B65B0u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B65B0u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B65B0u) { return; }
    ctx->pc = 0x1B65B0u;
label_1b65b0:
    // 0x1b65b0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1b65b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b65b4:
    // 0x1b65b4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b65b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b65b8:
    // 0x1b65b8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b65b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b65bc:
    // 0x1b65bc: 0x24451b40  addiu       $a1, $v0, 0x1B40
    ctx->pc = 0x1b65bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
label_1b65c0:
    // 0x1b65c0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1b65c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1b65c4:
    // 0x1b65c4: 0x24620180  addiu       $v0, $v1, 0x180
    ctx->pc = 0x1b65c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
label_1b65c8:
    // 0x1b65c8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1b65c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b65cc:
    // 0x1b65cc: 0xc040c9e  jal         func_103278
label_1b65d0:
    if (ctx->pc == 0x1B65D0u) {
        ctx->pc = 0x1B65D4u;
        goto label_1b65d4;
    }
    ctx->pc = 0x1B65CCu;
    SET_GPR_U32(ctx, 31, 0x1B65D4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B65D4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B65D4u) { return; }
    ctx->pc = 0x1B65D4u;
label_1b65d4:
    // 0x1b65d4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b65d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b65d8:
    // 0x1b65d8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b65d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b65dc:
    // 0x1b65dc: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1b65dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_1b65e0:
    // 0x1b65e0: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1b65e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b65e4:
    // 0x1b65e4: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1b65e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1b65e8:
    // 0x1b65e8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b65e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b65ec:
    // 0x1b65ec: 0x8c421b6c  lw          $v0, 0x1B6C($v0)
    ctx->pc = 0x1b65ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
label_1b65f0:
    // 0x1b65f0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1b65f4:
    if (ctx->pc == 0x1B65F4u) {
        ctx->pc = 0x1B65F8u;
        goto label_1b65f8;
    }
    ctx->pc = 0x1B65F0u;
    {
        const bool branch_taken_0x1b65f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b65f0) {
            ctx->pc = 0x1B6614u;
            goto label_1b6614;
        }
    }
    ctx->pc = 0x1B65F8u;
label_1b65f8:
    // 0x1b65f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b65f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b65fc:
    // 0x1b65fc: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1b65fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1b6600:
    // 0x1b6600: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x1b6600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
label_1b6604:
    // 0x1b6604: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b6604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b6608:
    // 0x1b6608: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1b6608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1b660c:
    // 0x1b660c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b660cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b6610:
    // 0x1b6610: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1b6610u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_1b6614:
    // 0x1b6614: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6618:
    // 0x1b6618: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b6618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1b661c:
    // 0x1b661c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1b661cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_1b6620:
    // 0x1b6620: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b6620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1b6624:
    // 0x1b6624: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1b6624u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1b6628:
    // 0x1b6628: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b662c:
    // 0x1b662c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b662cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1b6630:
    // 0x1b6630: 0xc096b40  jal         func_25AD00
label_1b6634:
    if (ctx->pc == 0x1B6634u) {
        ctx->pc = 0x1B6638u;
        goto label_1b6638;
    }
    ctx->pc = 0x1B6630u;
    SET_GPR_U32(ctx, 31, 0x1B6638u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B6630u, 0x1B6638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6638u;
label_1b6638:
    // 0x1b6638: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b663c:
    // 0x1b663c: 0x8fb10068  lw          $s1, 0x68($sp)
    ctx->pc = 0x1b663cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6640:
    // 0x1b6640: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1b6640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b6644:
    // 0x1b6644: 0xc62d1380  lwc1        $f13, 0x1380($s1)
    ctx->pc = 0x1b6644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b6648:
    // 0x1b6648: 0xc058f20  jal         func_163C80
label_1b664c:
    if (ctx->pc == 0x1B664Cu) {
        ctx->pc = 0x1B6650u;
        goto label_1b6650;
    }
    ctx->pc = 0x1B6648u;
    SET_GPR_U32(ctx, 31, 0x1B6650u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1B6648u, 0x1B6650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6650u;
label_1b6650:
    // 0x1b6650: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b6650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1b6654:
    // 0x1b6654: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b6654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b6658:
    // 0x1b6658: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b6658u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b665c:
    // 0x1b665c: 0x0  nop
    ctx->pc = 0x1b665cu;
    // NOP
label_1b6660:
    // 0x1b6660: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b6660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b6664:
    // 0x1b6664: 0x0  nop
    ctx->pc = 0x1b6664u;
    // NOP
label_1b6668:
    // 0x1b6668: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1b666c:
    if (ctx->pc == 0x1B666Cu) {
        ctx->pc = 0x1B6670u;
        goto label_1b6670;
    }
    ctx->pc = 0x1B6668u;
    {
        const bool branch_taken_0x1b6668 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6668) {
            ctx->pc = 0x1B6684u;
            goto label_1b6684;
        }
    }
    ctx->pc = 0x1B6670u;
label_1b6670:
    // 0x1b6670: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1b6670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_1b6674:
    // 0x1b6674: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b6674u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b6678:
    // 0x1b6678: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1b6678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b667c:
    // 0x1b667c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b667cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1b6680:
    // 0x1b6680: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b6680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1b6684:
    // 0x1b6684: 0x8fb30068  lw          $s3, 0x68($sp)
    ctx->pc = 0x1b6684u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6688:
    // 0x1b6688: 0xc6611b5c  lwc1        $f1, 0x1B5C($s3)
    ctx->pc = 0x1b6688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b668c:
    // 0x1b668c: 0x3c054240  lui         $a1, 0x4240
    ctx->pc = 0x1b668cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16960 << 16));
label_1b6690:
    // 0x1b6690: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b6690u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b6694:
    // 0x1b6694: 0x0  nop
    ctx->pc = 0x1b6694u;
    // NOP
label_1b6698:
    // 0x1b6698: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b6698u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b669c:
    // 0x1b669c: 0x0  nop
    ctx->pc = 0x1b669cu;
    // NOP
label_1b66a0:
    // 0x1b66a0: 0x45010038  bc1t        . + 4 + (0x38 << 2)
label_1b66a4:
    if (ctx->pc == 0x1B66A4u) {
        ctx->pc = 0x1B66A8u;
        goto label_1b66a8;
    }
    ctx->pc = 0x1B66A0u;
    {
        const bool branch_taken_0x1b66a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b66a0) {
            ctx->pc = 0x1B6784u;
            goto label_1b6784;
        }
    }
    ctx->pc = 0x1B66A8u;
label_1b66a8:
    // 0x1b66a8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b66a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b66ac:
    // 0x1b66ac: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x1b66acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
label_1b66b0:
    // 0x1b66b0: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x1b66b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_1b66b4:
    // 0x1b66b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b66b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b66b8:
    // 0x1b66b8: 0x0  nop
    ctx->pc = 0x1b66b8u;
    // NOP
label_1b66bc:
    // 0x1b66bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b66bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b66c0:
    // 0x1b66c0: 0x0  nop
    ctx->pc = 0x1b66c0u;
    // NOP
label_1b66c4:
    // 0x1b66c4: 0x45010018  bc1t        . + 4 + (0x18 << 2)
label_1b66c8:
    if (ctx->pc == 0x1B66C8u) {
        ctx->pc = 0x1B66CCu;
        goto label_1b66cc;
    }
    ctx->pc = 0x1B66C4u;
    {
        const bool branch_taken_0x1b66c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b66c4) {
            ctx->pc = 0x1B6728u;
            goto label_1b6728;
        }
    }
    ctx->pc = 0x1B66CCu;
label_1b66cc:
    // 0x1b66cc: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x1b66ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b66d0:
    // 0x1b66d0: 0xc6011b50  lwc1        $f1, 0x1B50($s0)
    ctx->pc = 0x1b66d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b66d4:
    // 0x1b66d4: 0x3c043dcc  lui         $a0, 0x3DCC
    ctx->pc = 0x1b66d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15820 << 16));
label_1b66d8:
    // 0x1b66d8: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x1b66d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_1b66dc:
    // 0x1b66dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b66dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b66e0:
    // 0x1b66e0: 0x0  nop
    ctx->pc = 0x1b66e0u;
    // NOP
label_1b66e4:
    // 0x1b66e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b66e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b66e8:
    // 0x1b66e8: 0xe6001b50  swc1        $f0, 0x1B50($s0)
    ctx->pc = 0x1b66e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6992), bits); }
label_1b66ec:
    // 0x1b66ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b66ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b66f0:
    // 0x1b66f0: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1b66f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b66f4:
    // 0x1b66f4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1b66f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_1b66f8:
    // 0x1b66f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b66f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b66fc:
    // 0x1b66fc: 0x0  nop
    ctx->pc = 0x1b66fcu;
    // NOP
label_1b6700:
    // 0x1b6700: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b6700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b6704:
    // 0x1b6704: 0x0  nop
    ctx->pc = 0x1b6704u;
    // NOP
label_1b6708:
    // 0x1b6708: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_1b670c:
    if (ctx->pc == 0x1B670Cu) {
        ctx->pc = 0x1B6710u;
        goto label_1b6710;
    }
    ctx->pc = 0x1B6708u;
    {
        const bool branch_taken_0x1b6708 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6708) {
            ctx->pc = 0x1B6784u;
            goto label_1b6784;
        }
    }
    ctx->pc = 0x1B6710u;
label_1b6710:
    // 0x1b6710: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1b6710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_1b6714:
    // 0x1b6714: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b6714u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b6718:
    // 0x1b6718: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b671c:
    // 0x1b671c: 0xe4801b50  swc1        $f0, 0x1B50($a0)
    ctx->pc = 0x1b671cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6992), bits); }
label_1b6720:
    // 0x1b6720: 0x10000018  b           . + 4 + (0x18 << 2)
label_1b6724:
    if (ctx->pc == 0x1B6724u) {
        ctx->pc = 0x1B6728u;
        goto label_1b6728;
    }
    ctx->pc = 0x1B6720u;
    {
        const bool branch_taken_0x1b6720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6720) {
            ctx->pc = 0x1B6784u;
            goto label_1b6784;
        }
    }
    ctx->pc = 0x1B6728u;
label_1b6728:
    // 0x1b6728: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b672c:
    // 0x1b672c: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1b672cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b6730:
    // 0x1b6730: 0x3c043dcc  lui         $a0, 0x3DCC
    ctx->pc = 0x1b6730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15820 << 16));
label_1b6734:
    // 0x1b6734: 0x3485cccd  ori         $a1, $a0, 0xCCCD
    ctx->pc = 0x1b6734u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_1b6738:
    // 0x1b6738: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b6738u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b673c:
    // 0x1b673c: 0x0  nop
    ctx->pc = 0x1b673cu;
    // NOP
label_1b6740:
    // 0x1b6740: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b6740u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b6744:
    // 0x1b6744: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1b6744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_1b6748:
    // 0x1b6748: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b674c:
    // 0x1b674c: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1b674cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b6750:
    // 0x1b6750: 0x3c043fa6  lui         $a0, 0x3FA6
    ctx->pc = 0x1b6750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16294 << 16));
label_1b6754:
    // 0x1b6754: 0x34836666  ori         $v1, $a0, 0x6666
    ctx->pc = 0x1b6754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26214);
label_1b6758:
    // 0x1b6758: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b6758u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b675c:
    // 0x1b675c: 0x0  nop
    ctx->pc = 0x1b675cu;
    // NOP
label_1b6760:
    // 0x1b6760: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b6760u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b6764:
    // 0x1b6764: 0x0  nop
    ctx->pc = 0x1b6764u;
    // NOP
label_1b6768:
    // 0x1b6768: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1b676c:
    if (ctx->pc == 0x1B676Cu) {
        ctx->pc = 0x1B6770u;
        goto label_1b6770;
    }
    ctx->pc = 0x1B6768u;
    {
        const bool branch_taken_0x1b6768 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6768) {
            ctx->pc = 0x1B6784u;
            goto label_1b6784;
        }
    }
    ctx->pc = 0x1B6770u;
label_1b6770:
    // 0x1b6770: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x1b6770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
label_1b6774:
    // 0x1b6774: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1b6774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_1b6778:
    // 0x1b6778: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b6778u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b677c:
    // 0x1b677c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b677cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6780:
    // 0x1b6780: 0xe4801b50  swc1        $f0, 0x1B50($a0)
    ctx->pc = 0x1b6780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6992), bits); }
label_1b6784:
    // 0x1b6784: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6788:
    // 0x1b6788: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b678c:
    // 0x1b678c: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b678cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6790:
    // 0x1b6790: 0x24670180  addiu       $a3, $v1, 0x180
    ctx->pc = 0x1b6790u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
label_1b6794:
    // 0x1b6794: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1b6794u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_1b6798:
    // 0x1b6798: 0x24a81b40  addiu       $t0, $a1, 0x1B40
    ctx->pc = 0x1b6798u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 6976));
label_1b679c:
    // 0x1b679c: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x1b679cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_1b67a0:
    // 0x1b67a0: 0xc4cc1b50  lwc1        $f12, 0x1B50($a2)
    ctx->pc = 0x1b67a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b67a4:
    // 0x1b67a4: 0xc040ed8  jal         func_103B60
label_1b67a8:
    if (ctx->pc == 0x1B67A8u) {
        ctx->pc = 0x1B67ACu;
        goto label_1b67ac;
    }
    ctx->pc = 0x1B67A4u;
    SET_GPR_U32(ctx, 31, 0x1B67ACu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B67ACu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B67ACu) { return; }
    ctx->pc = 0x1B67ACu;
label_1b67ac:
    // 0x1b67ac: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b67acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b67b0:
    // 0x1b67b0: 0xc05cd10  jal         func_173440
label_1b67b4:
    if (ctx->pc == 0x1B67B4u) {
        ctx->pc = 0x1B67B8u;
        goto label_1b67b8;
    }
    ctx->pc = 0x1B67B0u;
    SET_GPR_U32(ctx, 31, 0x1B67B8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1B67B0u, 0x1B67B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B67B8u;
label_1b67b8:
    // 0x1b67b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b67b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b67bc:
    // 0x1b67bc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b67bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b67c0:
    // 0x1b67c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b67c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b67c4:
    // 0x1b67c4: 0xc057480  jal         func_15D200
label_1b67c8:
    if (ctx->pc == 0x1B67C8u) {
        ctx->pc = 0x1B67CCu;
        goto label_1b67cc;
    }
    ctx->pc = 0x1B67C4u;
    SET_GPR_U32(ctx, 31, 0x1B67CCu);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1B67C4u, 0x1B67CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B67CCu;
label_1b67cc:
    // 0x1b67cc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b67ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b67d0:
    // 0x1b67d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b67d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b67d4:
    // 0x1b67d4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1b67d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_1b67d8:
    // 0x1b67d8: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1b67d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_1b67dc:
    // 0x1b67dc: 0xc05cf7c  jal         func_173DF0
label_1b67e0:
    if (ctx->pc == 0x1B67E0u) {
        ctx->pc = 0x1B67E4u;
        goto label_1b67e4;
    }
    ctx->pc = 0x1B67DCu;
    SET_GPR_U32(ctx, 31, 0x1B67E4u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1B67DCu, 0x1B67E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B67E4u;
label_1b67e4:
    // 0x1b67e4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1b67e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1b67e8:
    // 0x1b67e8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b67e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b67ec:
    // 0x1b67ec: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x1b67ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b67f0:
    // 0x1b67f0: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b67f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b67f4:
    // 0x1b67f4: 0xc4c00124  lwc1        $f0, 0x124($a2)
    ctx->pc = 0x1b67f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b67f8:
    // 0x1b67f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b67f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b67fc:
    // 0x1b67fc: 0xe4c00124  swc1        $f0, 0x124($a2)
    ctx->pc = 0x1b67fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 292), bits); }
label_1b6800:
    // 0x1b6800: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6804:
    // 0x1b6804: 0xc4a11280  lwc1        $f1, 0x1280($a1)
    ctx->pc = 0x1b6804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b6808:
    // 0x1b6808: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b680c:
    // 0x1b680c: 0xc4801284  lwc1        $f0, 0x1284($a0)
    ctx->pc = 0x1b680cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6810:
    // 0x1b6810: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b6810u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b6814:
    // 0x1b6814: 0xe4801284  swc1        $f0, 0x1284($a0)
    ctx->pc = 0x1b6814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4740), bits); }
label_1b6818:
    // 0x1b6818: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b681c:
    // 0x1b681c: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1b681cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b6820:
    // 0x1b6820: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1b6820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6824:
    // 0x1b6824: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b6824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b6828:
    // 0x1b6828: 0x0  nop
    ctx->pc = 0x1b6828u;
    // NOP
label_1b682c:
    // 0x1b682c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1b6830:
    if (ctx->pc == 0x1B6830u) {
        ctx->pc = 0x1B6834u;
        goto label_1b6834;
    }
    ctx->pc = 0x1B682Cu;
    {
        const bool branch_taken_0x1b682c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b682c) {
            ctx->pc = 0x1B684Cu;
            goto label_1b684c;
        }
    }
    ctx->pc = 0x1B6834u;
label_1b6834:
    // 0x1b6834: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1b6834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6838:
    // 0x1b6838: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b683c:
    // 0x1b683c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1b683cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_1b6840:
    // 0x1b6840: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b6840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6844:
    // 0x1b6844: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6848:
    // 0x1b6848: 0xac641b60  sw          $a0, 0x1B60($v1)
    ctx->pc = 0x1b6848u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 4));
label_1b684c:
    // 0x1b684c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b684cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b6850:
    // 0x1b6850: 0xc097530  jal         func_25D4C0
label_1b6854:
    if (ctx->pc == 0x1B6854u) {
        ctx->pc = 0x1B6858u;
        goto label_1b6858;
    }
    ctx->pc = 0x1B6850u;
    SET_GPR_U32(ctx, 31, 0x1B6858u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B6850u, 0x1B6858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6858u;
label_1b6858:
    // 0x1b6858: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b6858u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b685c:
    // 0x1b685c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b685cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6860:
    // 0x1b6860: 0x8ca31b60  lw          $v1, 0x1B60($a1)
    ctx->pc = 0x1b6860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7008)));
label_1b6864:
    // 0x1b6864: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1b6868:
    if (ctx->pc == 0x1B6868u) {
        ctx->pc = 0x1B686Cu;
        goto label_1b686c;
    }
    ctx->pc = 0x1B6864u;
    {
        const bool branch_taken_0x1b6864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6864) {
            ctx->pc = 0x1B6880u;
            goto label_1b6880;
        }
    }
    ctx->pc = 0x1B686Cu;
label_1b686c:
    // 0x1b686c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1b686cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1b6870:
    // 0x1b6870: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6874:
    // 0x1b6874: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1b6874u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1b6878:
    // 0x1b6878: 0x10000119  b           . + 4 + (0x119 << 2)
label_1b687c:
    if (ctx->pc == 0x1B687Cu) {
        ctx->pc = 0x1B6880u;
        goto label_1b6880;
    }
    ctx->pc = 0x1B6878u;
    {
        const bool branch_taken_0x1b6878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6878) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B6880u;
label_1b6880:
    // 0x1b6880: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b6880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6884:
    // 0x1b6884: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b6884u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b6888:
    // 0x1b6888: 0xc0587a8  jal         func_161EA0
label_1b688c:
    if (ctx->pc == 0x1B688Cu) {
        ctx->pc = 0x1B6890u;
        goto label_1b6890;
    }
    ctx->pc = 0x1B6888u;
    SET_GPR_U32(ctx, 31, 0x1B6890u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1B6888u, 0x1B6890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6890u;
label_1b6890:
    // 0x1b6890: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b6890u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b6894:
    // 0x1b6894: 0x10800112  beqz        $a0, . + 4 + (0x112 << 2)
label_1b6898:
    if (ctx->pc == 0x1B6898u) {
        ctx->pc = 0x1B689Cu;
        goto label_1b689c;
    }
    ctx->pc = 0x1B6894u;
    {
        const bool branch_taken_0x1b6894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6894) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B689Cu;
label_1b689c:
    // 0x1b689c: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x1b689cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b68a0:
    // 0x1b68a0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1b68a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1b68a4:
    // 0x1b68a4: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x1b68a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
label_1b68a8:
    // 0x1b68a8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1b68a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_1b68ac:
    // 0x1b68ac: 0x1060010c  beqz        $v1, . + 4 + (0x10C << 2)
label_1b68b0:
    if (ctx->pc == 0x1B68B0u) {
        ctx->pc = 0x1B68B4u;
        goto label_1b68b4;
    }
    ctx->pc = 0x1B68ACu;
    {
        const bool branch_taken_0x1b68ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b68ac) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B68B4u;
label_1b68b4:
    // 0x1b68b4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b68b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b68b8:
    // 0x1b68b8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1b68b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1b68bc:
    // 0x1b68bc: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1b68bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
label_1b68c0:
    // 0x1b68c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b68c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b68c4:
    // 0x1b68c4: 0x833024  and         $a2, $a0, $v1
    ctx->pc = 0x1b68c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1b68c8:
    // 0x1b68c8: 0xaca60008  sw          $a2, 0x8($a1)
    ctx->pc = 0x1b68c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
label_1b68cc:
    // 0x1b68cc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b68ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b68d0:
    // 0x1b68d0: 0x906513a6  lbu         $a1, 0x13A6($v1)
    ctx->pc = 0x1b68d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
label_1b68d4:
    // 0x1b68d4: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1b68d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1b68d8:
    // 0x1b68d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b68d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b68dc:
    // 0x1b68dc: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_1b68e0:
    if (ctx->pc == 0x1B68E0u) {
        ctx->pc = 0x1B68E4u;
        goto label_1b68e4;
    }
    ctx->pc = 0x1B68DCu;
    {
        const bool branch_taken_0x1b68dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b68dc) {
            ctx->pc = 0x1B690Cu;
            goto label_1b690c;
        }
    }
    ctx->pc = 0x1B68E4u;
label_1b68e4:
    // 0x1b68e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b68e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b68e8:
    // 0x1b68e8: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_1b68ec:
    if (ctx->pc == 0x1B68ECu) {
        ctx->pc = 0x1B68F0u;
        goto label_1b68f0;
    }
    ctx->pc = 0x1B68E8u;
    {
        const bool branch_taken_0x1b68e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b68e8) {
            ctx->pc = 0x1B690Cu;
            goto label_1b690c;
        }
    }
    ctx->pc = 0x1B68F0u;
label_1b68f0:
    // 0x1b68f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b68f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b68f4:
    // 0x1b68f4: 0x108300fa  beq         $a0, $v1, . + 4 + (0xFA << 2)
label_1b68f8:
    if (ctx->pc == 0x1B68F8u) {
        ctx->pc = 0x1B68FCu;
        goto label_1b68fc;
    }
    ctx->pc = 0x1B68F4u;
    {
        const bool branch_taken_0x1b68f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b68f4) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B68FCu;
label_1b68fc:
    // 0x1b68fc: 0x108000f8  beqz        $a0, . + 4 + (0xF8 << 2)
label_1b6900:
    if (ctx->pc == 0x1B6900u) {
        ctx->pc = 0x1B6904u;
        goto label_1b6904;
    }
    ctx->pc = 0x1B68FCu;
    {
        const bool branch_taken_0x1b68fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b68fc) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B6904u;
label_1b6904:
    // 0x1b6904: 0x100000f6  b           . + 4 + (0xF6 << 2)
label_1b6908:
    if (ctx->pc == 0x1B6908u) {
        ctx->pc = 0x1B690Cu;
        goto label_1b690c;
    }
    ctx->pc = 0x1B6904u;
    {
        const bool branch_taken_0x1b6904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6904) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B690Cu;
label_1b690c:
    // 0x1b690c: 0xc0c5238  jal         func_3148E0
label_1b6910:
    if (ctx->pc == 0x1B6910u) {
        ctx->pc = 0x1B6914u;
        goto label_1b6914;
    }
    ctx->pc = 0x1B690Cu;
    SET_GPR_U32(ctx, 31, 0x1B6914u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1B690Cu, 0x1B6914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6914u;
label_1b6914:
    // 0x1b6914: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1b6914u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b6918:
    // 0x1b6918: 0x100000f1  b           . + 4 + (0xF1 << 2)
label_1b691c:
    if (ctx->pc == 0x1B691Cu) {
        ctx->pc = 0x1B6920u;
        goto label_1b6920;
    }
    ctx->pc = 0x1B6918u;
    {
        const bool branch_taken_0x1b6918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6918) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B6920u;
label_1b6920:
    // 0x1b6920: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6924:
    // 0x1b6924: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6928:
    // 0x1b6928: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1b6928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_1b692c:
    // 0x1b692c: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x1b692cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_1b6930:
    // 0x1b6930: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1b6930u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b6934:
    // 0x1b6934: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b6934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6938:
    // 0x1b6938: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b6938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1b693c:
    // 0x1b693c: 0xc0965d0  jal         func_259740
label_1b6940:
    if (ctx->pc == 0x1B6940u) {
        ctx->pc = 0x1B6944u;
        goto label_1b6944;
    }
    ctx->pc = 0x1B693Cu;
    SET_GPR_U32(ctx, 31, 0x1B6944u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B693Cu, 0x1B6944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6944u;
label_1b6944:
    // 0x1b6944: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b6944u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b6948:
    // 0x1b6948: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b694c:
    // 0x1b694c: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x1b694cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b6950:
    // 0x1b6950: 0x3c04c332  lui         $a0, 0xC332
    ctx->pc = 0x1b6950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49970 << 16));
label_1b6954:
    // 0x1b6954: 0x34838000  ori         $v1, $a0, 0x8000
    ctx->pc = 0x1b6954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
label_1b6958:
    // 0x1b6958: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b6958u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b695c:
    // 0x1b695c: 0x0  nop
    ctx->pc = 0x1b695cu;
    // NOP
label_1b6960:
    // 0x1b6960: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b6960u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b6964:
    // 0x1b6964: 0x0  nop
    ctx->pc = 0x1b6964u;
    // NOP
label_1b6968:
    // 0x1b6968: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1b696c:
    if (ctx->pc == 0x1B696Cu) {
        ctx->pc = 0x1B6970u;
        goto label_1b6970;
    }
    ctx->pc = 0x1B6968u;
    {
        const bool branch_taken_0x1b6968 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6968) {
            ctx->pc = 0x1B6978u;
            goto label_1b6978;
        }
    }
    ctx->pc = 0x1B6970u;
label_1b6970:
    // 0x1b6970: 0xc05772c  jal         func_15DCB0
label_1b6974:
    if (ctx->pc == 0x1B6974u) {
        ctx->pc = 0x1B6978u;
        goto label_1b6978;
    }
    ctx->pc = 0x1B6970u;
    SET_GPR_U32(ctx, 31, 0x1B6978u);
    ctx->pc = 0x15DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DCB0u, 0x1B6970u, 0x1B6978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6978u;
label_1b6978:
    // 0x1b6978: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b697c:
    // 0x1b697c: 0xaca01b60  sw          $zero, 0x1B60($a1)
    ctx->pc = 0x1b697cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7008), GPR_U32(ctx, 0));
label_1b6980:
    // 0x1b6980: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b6980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6984:
    // 0x1b6984: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x1b6984u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1b6988:
    // 0x1b6988: 0x3c080100  lui         $t0, 0x100
    ctx->pc = 0x1b6988u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)256 << 16));
label_1b698c:
    // 0x1b698c: 0xe81024  and         $v0, $a3, $t0
    ctx->pc = 0x1b698cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
label_1b6990:
    // 0x1b6990: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1b6994:
    if (ctx->pc == 0x1B6994u) {
        ctx->pc = 0x1B6998u;
        goto label_1b6998;
    }
    ctx->pc = 0x1B6990u;
    {
        const bool branch_taken_0x1b6990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6990) {
            ctx->pc = 0x1B69FCu;
            goto label_1b69fc;
        }
    }
    ctx->pc = 0x1B6998u;
label_1b6998:
    // 0x1b6998: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b699c:
    // 0x1b699c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1b699cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1b69a0:
    // 0x1b69a0: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x1b69a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_1b69a4:
    // 0x1b69a4: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x1b69a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b69a8:
    // 0x1b69a8: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x1b69a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1b69ac:
    // 0x1b69ac: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1b69acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_1b69b0:
    // 0x1b69b0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b69b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b69b4:
    // 0x1b69b4: 0x908313a6  lbu         $v1, 0x13A6($a0)
    ctx->pc = 0x1b69b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5030)));
label_1b69b8:
    // 0x1b69b8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1b69b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1b69bc:
    // 0x1b69bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b69bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b69c0:
    // 0x1b69c0: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
label_1b69c4:
    if (ctx->pc == 0x1B69C4u) {
        ctx->pc = 0x1B69C8u;
        goto label_1b69c8;
    }
    ctx->pc = 0x1B69C0u;
    {
        const bool branch_taken_0x1b69c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b69c0) {
            ctx->pc = 0x1B69F0u;
            goto label_1b69f0;
        }
    }
    ctx->pc = 0x1B69C8u;
label_1b69c8:
    // 0x1b69c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b69c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b69cc:
    // 0x1b69cc: 0x10440008  beq         $v0, $a0, . + 4 + (0x8 << 2)
label_1b69d0:
    if (ctx->pc == 0x1B69D0u) {
        ctx->pc = 0x1B69D4u;
        goto label_1b69d4;
    }
    ctx->pc = 0x1B69CCu;
    {
        const bool branch_taken_0x1b69cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b69cc) {
            ctx->pc = 0x1B69F0u;
            goto label_1b69f0;
        }
    }
    ctx->pc = 0x1B69D4u;
label_1b69d4:
    // 0x1b69d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b69d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b69d8:
    // 0x1b69d8: 0x10450008  beq         $v0, $a1, . + 4 + (0x8 << 2)
label_1b69dc:
    if (ctx->pc == 0x1B69DCu) {
        ctx->pc = 0x1B69E0u;
        goto label_1b69e0;
    }
    ctx->pc = 0x1B69D8u;
    {
        const bool branch_taken_0x1b69d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1b69d8) {
            ctx->pc = 0x1B69FCu;
            goto label_1b69fc;
        }
    }
    ctx->pc = 0x1B69E0u;
label_1b69e0:
    // 0x1b69e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1b69e4:
    if (ctx->pc == 0x1B69E4u) {
        ctx->pc = 0x1B69E8u;
        goto label_1b69e8;
    }
    ctx->pc = 0x1B69E0u;
    {
        const bool branch_taken_0x1b69e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b69e0) {
            ctx->pc = 0x1B69FCu;
            goto label_1b69fc;
        }
    }
    ctx->pc = 0x1B69E8u;
label_1b69e8:
    // 0x1b69e8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b69ec:
    if (ctx->pc == 0x1B69ECu) {
        ctx->pc = 0x1B69F0u;
        goto label_1b69f0;
    }
    ctx->pc = 0x1B69E8u;
    {
        const bool branch_taken_0x1b69e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b69e8) {
            ctx->pc = 0x1B69FCu;
            goto label_1b69fc;
        }
    }
    ctx->pc = 0x1B69F0u;
label_1b69f0:
    // 0x1b69f0: 0xc0c5238  jal         func_3148E0
label_1b69f4:
    if (ctx->pc == 0x1B69F4u) {
        ctx->pc = 0x1B69F8u;
        goto label_1b69f8;
    }
    ctx->pc = 0x1B69F0u;
    SET_GPR_U32(ctx, 31, 0x1B69F8u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1B69F0u, 0x1B69F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B69F8u;
label_1b69f8:
    // 0x1b69f8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b69f8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b69fc:
    // 0x1b69fc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b69fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6a00:
    // 0x1b6a00: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1b6a00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_1b6a04:
    // 0x1b6a04: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1b6a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b6a08:
    // 0x1b6a08: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x1b6a08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_1b6a0c:
    // 0x1b6a0c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6a10:
    // 0x1b6a10: 0x8c821b6c  lw          $v0, 0x1B6C($a0)
    ctx->pc = 0x1b6a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7020)));
label_1b6a14:
    // 0x1b6a14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1b6a18:
    if (ctx->pc == 0x1B6A18u) {
        ctx->pc = 0x1B6A1Cu;
        goto label_1b6a1c;
    }
    ctx->pc = 0x1B6A14u;
    {
        const bool branch_taken_0x1b6a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6a14) {
            ctx->pc = 0x1B6A38u;
            goto label_1b6a38;
        }
    }
    ctx->pc = 0x1B6A1Cu;
label_1b6a1c:
    // 0x1b6a1c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b6a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b6a20:
    // 0x1b6a20: 0x8c251a98  lw          $a1, 0x1A98($at)
    ctx->pc = 0x1b6a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1b6a24:
    // 0x1b6a24: 0x3c07ff7f  lui         $a3, 0xFF7F
    ctx->pc = 0x1b6a24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65407 << 16));
label_1b6a28:
    // 0x1b6a28: 0x34e6ffff  ori         $a2, $a3, 0xFFFF
    ctx->pc = 0x1b6a28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_1b6a2c:
    // 0x1b6a2c: 0xa64024  and         $t0, $a1, $a2
    ctx->pc = 0x1b6a2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_1b6a30:
    // 0x1b6a30: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b6a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b6a34:
    // 0x1b6a34: 0xac281a98  sw          $t0, 0x1A98($at)
    ctx->pc = 0x1b6a34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 8));
label_1b6a38:
    // 0x1b6a38: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b6a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6a3c:
    // 0x1b6a3c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b6a3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b6a40:
    // 0x1b6a40: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b6a40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b6a44:
    // 0x1b6a44: 0xc096b40  jal         func_25AD00
label_1b6a48:
    if (ctx->pc == 0x1B6A48u) {
        ctx->pc = 0x1B6A4Cu;
        goto label_1b6a4c;
    }
    ctx->pc = 0x1B6A44u;
    SET_GPR_U32(ctx, 31, 0x1B6A4Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B6A44u, 0x1B6A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6A4Cu;
label_1b6a4c:
    // 0x1b6a4c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6a50:
    // 0x1b6a50: 0xc05cd10  jal         func_173440
label_1b6a54:
    if (ctx->pc == 0x1B6A54u) {
        ctx->pc = 0x1B6A58u;
        goto label_1b6a58;
    }
    ctx->pc = 0x1B6A50u;
    SET_GPR_U32(ctx, 31, 0x1B6A58u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1B6A50u, 0x1B6A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6A58u;
label_1b6a58:
    // 0x1b6a58: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b6a58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b6a5c:
    // 0x1b6a5c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6a60:
    // 0x1b6a60: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1b6a60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1b6a64:
    // 0x1b6a64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b6a64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b6a68:
    // 0x1b6a68: 0xc0573d8  jal         func_15CF60
label_1b6a6c:
    if (ctx->pc == 0x1B6A6Cu) {
        ctx->pc = 0x1B6A70u;
        goto label_1b6a70;
    }
    ctx->pc = 0x1B6A68u;
    SET_GPR_U32(ctx, 31, 0x1B6A70u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1B6A68u, 0x1B6A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6A70u;
label_1b6a70:
    // 0x1b6a70: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b6a70u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b6a74:
    // 0x1b6a74: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b6a74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b6a78:
    // 0x1b6a78: 0xc097530  jal         func_25D4C0
label_1b6a7c:
    if (ctx->pc == 0x1B6A7Cu) {
        ctx->pc = 0x1B6A80u;
        goto label_1b6a80;
    }
    ctx->pc = 0x1B6A78u;
    SET_GPR_U32(ctx, 31, 0x1B6A80u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B6A78u, 0x1B6A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6A80u;
label_1b6a80:
    // 0x1b6a80: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b6a80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b6a84:
    // 0x1b6a84: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6a88:
    // 0x1b6a88: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b6a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6a8c:
    // 0x1b6a8c: 0x24a40120  addiu       $a0, $a1, 0x120
    ctx->pc = 0x1b6a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_1b6a90:
    // 0x1b6a90: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1b6a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_1b6a94:
    // 0x1b6a94: 0xc05cf7c  jal         func_173DF0
label_1b6a98:
    if (ctx->pc == 0x1B6A98u) {
        ctx->pc = 0x1B6A9Cu;
        goto label_1b6a9c;
    }
    ctx->pc = 0x1B6A94u;
    SET_GPR_U32(ctx, 31, 0x1B6A9Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1B6A94u, 0x1B6A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6A9Cu;
label_1b6a9c:
    // 0x1b6a9c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1b6a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1b6aa0:
    // 0x1b6aa0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b6aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6aa4:
    // 0x1b6aa4: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1b6aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b6aa8:
    // 0x1b6aa8: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x1b6aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
label_1b6aac:
    // 0x1b6aac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b6aacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b6ab0:
    // 0x1b6ab0: 0x0  nop
    ctx->pc = 0x1b6ab0u;
    // NOP
label_1b6ab4:
    // 0x1b6ab4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1b6ab4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b6ab8:
    // 0x1b6ab8: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1b6ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6abc:
    // 0x1b6abc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b6abcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b6ac0:
    // 0x1b6ac0: 0x0  nop
    ctx->pc = 0x1b6ac0u;
    // NOP
label_1b6ac4:
    // 0x1b6ac4: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
label_1b6ac8:
    if (ctx->pc == 0x1B6AC8u) {
        ctx->pc = 0x1B6ACCu;
        goto label_1b6acc;
    }
    ctx->pc = 0x1B6AC4u;
    {
        const bool branch_taken_0x1b6ac4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6ac4) {
            ctx->pc = 0x1B6B44u;
            goto label_1b6b44;
        }
    }
    ctx->pc = 0x1B6ACCu;
label_1b6acc:
    // 0x1b6acc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6ad0:
    // 0x1b6ad0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6ad4:
    // 0x1b6ad4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b6ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6ad8:
    // 0x1b6ad8: 0x24841b40  addiu       $a0, $a0, 0x1B40
    ctx->pc = 0x1b6ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6976));
label_1b6adc:
    // 0x1b6adc: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1b6adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1b6ae0:
    // 0x1b6ae0: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x1b6ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
label_1b6ae4:
    // 0x1b6ae4: 0xc0675b0  jal         func_19D6C0
label_1b6ae8:
    if (ctx->pc == 0x1B6AE8u) {
        ctx->pc = 0x1B6AECu;
        goto label_1b6aec;
    }
    ctx->pc = 0x1B6AE4u;
    SET_GPR_U32(ctx, 31, 0x1B6AECu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B6AE4u, 0x1B6AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6AECu;
label_1b6aec:
    // 0x1b6aec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6af0:
    // 0x1b6af0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b6af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6af4:
    // 0x1b6af4: 0xc46c1b40  lwc1        $f12, 0x1B40($v1)
    ctx->pc = 0x1b6af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b6af8:
    // 0x1b6af8: 0xc44d1b48  lwc1        $f13, 0x1B48($v0)
    ctx->pc = 0x1b6af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b6afc:
    // 0x1b6afc: 0xc0455e6  jal         func_115798
label_1b6b00:
    if (ctx->pc == 0x1B6B00u) {
        ctx->pc = 0x1B6B04u;
        goto label_1b6b04;
    }
    ctx->pc = 0x1B6AFCu;
    SET_GPR_U32(ctx, 31, 0x1B6B04u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1B6AFCu, 0x1B6B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B04u;
label_1b6b04:
    // 0x1b6b04: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6b08:
    // 0x1b6b08: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1b6b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
label_1b6b0c:
    // 0x1b6b0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b6b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6b10:
    // 0x1b6b10: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6b14:
    // 0x1b6b14: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1b6b14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_1b6b18:
    // 0x1b6b18: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x1b6b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1b6b1c:
    // 0x1b6b1c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6b20:
    // 0x1b6b20: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1b6b20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1b6b24:
    // 0x1b6b24: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6b28:
    // 0x1b6b28: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1b6b28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1b6b2c:
    // 0x1b6b2c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6b30:
    // 0x1b6b30: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1b6b30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1b6b34:
    // 0x1b6b34: 0x8fb20068  lw          $s2, 0x68($sp)
    ctx->pc = 0x1b6b34u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6b38:
    // 0x1b6b38: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1b6b38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_1b6b3c:
    // 0x1b6b3c: 0x10000068  b           . + 4 + (0x68 << 2)
label_1b6b40:
    if (ctx->pc == 0x1B6B40u) {
        ctx->pc = 0x1B6B44u;
        goto label_1b6b44;
    }
    ctx->pc = 0x1B6B3Cu;
    {
        const bool branch_taken_0x1b6b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6b3c) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B6B44u;
label_1b6b44:
    // 0x1b6b44: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b6b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6b48:
    // 0x1b6b48: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x1b6b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_1b6b4c:
    // 0x1b6b4c: 0xc057b54  jal         func_15ED50
label_1b6b50:
    if (ctx->pc == 0x1B6B50u) {
        ctx->pc = 0x1B6B54u;
        goto label_1b6b54;
    }
    ctx->pc = 0x1B6B4Cu;
    SET_GPR_U32(ctx, 31, 0x1B6B54u);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x1B6B4Cu, 0x1B6B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B54u;
label_1b6b54:
    // 0x1b6b54: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
label_1b6b58:
    if (ctx->pc == 0x1B6B58u) {
        ctx->pc = 0x1B6B5Cu;
        goto label_1b6b5c;
    }
    ctx->pc = 0x1B6B54u;
    {
        const bool branch_taken_0x1b6b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6b54) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B6B5Cu;
label_1b6b5c:
    // 0x1b6b5c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6b60:
    // 0x1b6b60: 0x90a309db  lbu         $v1, 0x9DB($a1)
    ctx->pc = 0x1b6b60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2523)));
label_1b6b64:
    // 0x1b6b64: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1b6b64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1b6b68:
    // 0x1b6b68: 0x30850010  andi        $a1, $a0, 0x10
    ctx->pc = 0x1b6b68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_1b6b6c:
    // 0x1b6b6c: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_1b6b70:
    if (ctx->pc == 0x1B6B70u) {
        ctx->pc = 0x1B6B74u;
        goto label_1b6b74;
    }
    ctx->pc = 0x1B6B6Cu;
    {
        const bool branch_taken_0x1b6b6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6b6c) {
            ctx->pc = 0x1B6B94u;
            goto label_1b6b94;
        }
    }
    ctx->pc = 0x1B6B74u;
label_1b6b74:
    // 0x1b6b74: 0xc0585dc  jal         func_161770
label_1b6b78:
    if (ctx->pc == 0x1B6B78u) {
        ctx->pc = 0x1B6B7Cu;
        goto label_1b6b7c;
    }
    ctx->pc = 0x1B6B74u;
    SET_GPR_U32(ctx, 31, 0x1B6B7Cu);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x1B6B74u, 0x1B6B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B7Cu;
label_1b6b7c:
    // 0x1b6b7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1b6b80:
    if (ctx->pc == 0x1B6B80u) {
        ctx->pc = 0x1B6B84u;
        goto label_1b6b84;
    }
    ctx->pc = 0x1B6B7Cu;
    {
        const bool branch_taken_0x1b6b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6b7c) {
            ctx->pc = 0x1B6B94u;
            goto label_1b6b94;
        }
    }
    ctx->pc = 0x1B6B84u;
label_1b6b84:
    // 0x1b6b84: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6b88:
    // 0x1b6b88: 0xa08010a8  sb          $zero, 0x10A8($a0)
    ctx->pc = 0x1b6b88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4264), (uint8_t)GPR_U32(ctx, 0));
label_1b6b8c:
    // 0x1b6b8c: 0x10000054  b           . + 4 + (0x54 << 2)
label_1b6b90:
    if (ctx->pc == 0x1B6B90u) {
        ctx->pc = 0x1B6B94u;
        goto label_1b6b94;
    }
    ctx->pc = 0x1B6B8Cu;
    {
        const bool branch_taken_0x1b6b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6b8c) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B6B94u;
label_1b6b94:
    // 0x1b6b94: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6b98:
    // 0x1b6b98: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1b6b98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1b6b9c:
    // 0x1b6b9c: 0x10600050  beqz        $v1, . + 4 + (0x50 << 2)
label_1b6ba0:
    if (ctx->pc == 0x1B6BA0u) {
        ctx->pc = 0x1B6BA4u;
        goto label_1b6ba4;
    }
    ctx->pc = 0x1B6B9Cu;
    {
        const bool branch_taken_0x1b6b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6b9c) {
            ctx->pc = 0x1B6CE0u;
            goto label_1b6ce0;
        }
    }
    ctx->pc = 0x1B6BA4u;
label_1b6ba4:
    // 0x1b6ba4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6ba8:
    // 0x1b6ba8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1b6ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1b6bac:
    // 0x1b6bac: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1b6bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_1b6bb0:
    // 0x1b6bb0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1b6bb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1b6bb4:
    // 0x1b6bb4: 0x10800024  beqz        $a0, . + 4 + (0x24 << 2)
label_1b6bb8:
    if (ctx->pc == 0x1B6BB8u) {
        ctx->pc = 0x1B6BBCu;
        goto label_1b6bbc;
    }
    ctx->pc = 0x1B6BB4u;
    {
        const bool branch_taken_0x1b6bb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6bb4) {
            ctx->pc = 0x1B6C48u;
            goto label_1b6c48;
        }
    }
    ctx->pc = 0x1B6BBCu;
label_1b6bbc:
    // 0x1b6bbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b6bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6bc0:
    // 0x1b6bc0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6bc4:
    // 0x1b6bc4: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1b6bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_1b6bc8:
    // 0x1b6bc8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b6bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b6bcc:
    // 0x1b6bcc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6bd0:
    // 0x1b6bd0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1b6bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1b6bd4:
    // 0x1b6bd4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6bd8:
    // 0x1b6bd8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1b6bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1b6bdc:
    // 0x1b6bdc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6be0:
    // 0x1b6be0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1b6be0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1b6be4:
    // 0x1b6be4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6be8:
    // 0x1b6be8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1b6be8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1b6bec:
    // 0x1b6bec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b6becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6bf0:
    // 0x1b6bf0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6bf4:
    // 0x1b6bf4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1b6bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_1b6bf8:
    // 0x1b6bf8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6bfc:
    // 0x1b6bfc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1b6bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1b6c00:
    // 0x1b6c00: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6c04:
    // 0x1b6c04: 0x9065156d  lbu         $a1, 0x156D($v1)
    ctx->pc = 0x1b6c04u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5485)));
label_1b6c08:
    // 0x1b6c08: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1b6c08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1b6c0c:
    // 0x1b6c0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b6c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b6c10:
    // 0x1b6c10: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_1b6c14:
    if (ctx->pc == 0x1B6C14u) {
        ctx->pc = 0x1B6C18u;
        goto label_1b6c18;
    }
    ctx->pc = 0x1B6C10u;
    {
        const bool branch_taken_0x1b6c10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b6c10) {
            ctx->pc = 0x1B6C24u;
            goto label_1b6c24;
        }
    }
    ctx->pc = 0x1B6C18u;
label_1b6c18:
    // 0x1b6c18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b6c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6c1c:
    // 0x1b6c1c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6c20:
    // 0x1b6c20: 0xa083156d  sb          $v1, 0x156D($a0)
    ctx->pc = 0x1b6c20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5485), (uint8_t)GPR_U32(ctx, 3));
label_1b6c24:
    // 0x1b6c24: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1b6c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1b6c28:
    // 0x1b6c28: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6c2c:
    // 0x1b6c2c: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x1b6c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
label_1b6c30:
    // 0x1b6c30: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6c34:
    // 0x1b6c34: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1b6c34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
label_1b6c38:
    // 0x1b6c38: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6c3c:
    // 0x1b6c3c: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1b6c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
label_1b6c40:
    // 0x1b6c40: 0x1000000d  b           . + 4 + (0xD << 2)
label_1b6c44:
    if (ctx->pc == 0x1B6C44u) {
        ctx->pc = 0x1B6C48u;
        goto label_1b6c48;
    }
    ctx->pc = 0x1B6C40u;
    {
        const bool branch_taken_0x1b6c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6c40) {
            ctx->pc = 0x1B6C78u;
            goto label_1b6c78;
        }
    }
    ctx->pc = 0x1B6C48u;
label_1b6c48:
    // 0x1b6c48: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b6c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6c4c:
    // 0x1b6c4c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6c50:
    // 0x1b6c50: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x1b6c50u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
label_1b6c54:
    // 0x1b6c54: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6c58:
    // 0x1b6c58: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1b6c58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_1b6c5c:
    // 0x1b6c5c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6c60:
    // 0x1b6c60: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1b6c60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_1b6c64:
    // 0x1b6c64: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6c68:
    // 0x1b6c68: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x1b6c68u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
label_1b6c6c:
    // 0x1b6c6c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1b6c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1b6c70:
    // 0x1b6c70: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6c74:
    // 0x1b6c74: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1b6c74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1b6c78:
    // 0x1b6c78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b6c78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b6c7c:
    // 0x1b6c7c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6c80:
    // 0x1b6c80: 0xe4801564  swc1        $f0, 0x1564($a0)
    ctx->pc = 0x1b6c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5476), bits); }
label_1b6c84:
    // 0x1b6c84: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6c88:
    // 0x1b6c88: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1b6c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6c8c:
    // 0x1b6c8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6c90:
    // 0x1b6c90: 0xe4601568  swc1        $f0, 0x1568($v1)
    ctx->pc = 0x1b6c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5480), bits); }
label_1b6c94:
    // 0x1b6c94: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6c98:
    // 0x1b6c98: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1b6c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6c9c:
    // 0x1b6c9c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6ca0:
    // 0x1b6ca0: 0xe4801570  swc1        $f0, 0x1570($a0)
    ctx->pc = 0x1b6ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5488), bits); }
label_1b6ca4:
    // 0x1b6ca4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6ca8:
    // 0x1b6ca8: 0x8c631b6c  lw          $v1, 0x1B6C($v1)
    ctx->pc = 0x1b6ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
label_1b6cac:
    // 0x1b6cac: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1b6cb0:
    if (ctx->pc == 0x1B6CB0u) {
        ctx->pc = 0x1B6CB4u;
        goto label_1b6cb4;
    }
    ctx->pc = 0x1B6CACu;
    {
        const bool branch_taken_0x1b6cac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6cac) {
            ctx->pc = 0x1B6CBCu;
            goto label_1b6cbc;
        }
    }
    ctx->pc = 0x1B6CB4u;
label_1b6cb4:
    // 0x1b6cb4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6cb8:
    // 0x1b6cb8: 0xa4801574  sh          $zero, 0x1574($a0)
    ctx->pc = 0x1b6cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5492), (uint16_t)GPR_U32(ctx, 0));
label_1b6cbc:
    // 0x1b6cbc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6cc0:
    // 0x1b6cc0: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1b6cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
label_1b6cc4:
    // 0x1b6cc4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1b6cc8:
    if (ctx->pc == 0x1B6CC8u) {
        ctx->pc = 0x1B6CCCu;
        goto label_1b6ccc;
    }
    ctx->pc = 0x1B6CC4u;
    {
        const bool branch_taken_0x1b6cc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6cc4) {
            ctx->pc = 0x1B6CD8u;
            goto label_1b6cd8;
        }
    }
    ctx->pc = 0x1B6CCCu;
label_1b6ccc:
    // 0x1b6ccc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6cd0:
    // 0x1b6cd0: 0xc0571d0  jal         func_15C740
label_1b6cd4:
    if (ctx->pc == 0x1B6CD4u) {
        ctx->pc = 0x1B6CD8u;
        goto label_1b6cd8;
    }
    ctx->pc = 0x1B6CD0u;
    SET_GPR_U32(ctx, 31, 0x1B6CD8u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1B6CD0u, 0x1B6CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6CD8u;
label_1b6cd8:
    // 0x1b6cd8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6cdc:
    // 0x1b6cdc: 0xa0a010a8  sb          $zero, 0x10A8($a1)
    ctx->pc = 0x1b6cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4264), (uint8_t)GPR_U32(ctx, 0));
label_1b6ce0:
    // 0x1b6ce0: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b6ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6ce4:
    // 0x1b6ce4: 0x8cc71b6c  lw          $a3, 0x1B6C($a2)
    ctx->pc = 0x1b6ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 7020)));
label_1b6ce8:
    // 0x1b6ce8: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
label_1b6cec:
    if (ctx->pc == 0x1B6CECu) {
        ctx->pc = 0x1B6CF0u;
        goto label_1b6cf0;
    }
    ctx->pc = 0x1B6CE8u;
    {
        const bool branch_taken_0x1b6ce8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6ce8) {
            ctx->pc = 0x1B6D0Cu;
            goto label_1b6d0c;
        }
    }
    ctx->pc = 0x1B6CF0u;
label_1b6cf0:
    // 0x1b6cf0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b6cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b6cf4:
    // 0x1b6cf4: 0x8c281a98  lw          $t0, 0x1A98($at)
    ctx->pc = 0x1b6cf4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1b6cf8:
    // 0x1b6cf8: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x1b6cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
label_1b6cfc:
    // 0x1b6cfc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b6cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b6d00:
    // 0x1b6d00: 0x1032824  and         $a1, $t0, $v1
    ctx->pc = 0x1b6d00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_1b6d04:
    // 0x1b6d04: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b6d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b6d08:
    // 0x1b6d08: 0xac251a98  sw          $a1, 0x1A98($at)
    ctx->pc = 0x1b6d08u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 5));
label_1b6d0c:
    // 0x1b6d0c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6d10:
    // 0x1b6d10: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1b6d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1b6d14:
    // 0x1b6d14: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1b6d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_1b6d18:
    // 0x1b6d18: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1b6d18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1b6d1c:
    // 0x1b6d1c: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_1b6d20:
    if (ctx->pc == 0x1B6D20u) {
        ctx->pc = 0x1B6D24u;
        goto label_1b6d24;
    }
    ctx->pc = 0x1B6D1Cu;
    {
        const bool branch_taken_0x1b6d1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6d1c) {
            ctx->pc = 0x1B6D6Cu;
            goto label_1b6d6c;
        }
    }
    ctx->pc = 0x1B6D24u;
label_1b6d24:
    // 0x1b6d24: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1b6d28:
    // 0x1b6d28: 0x90a313a6  lbu         $v1, 0x13A6($a1)
    ctx->pc = 0x1b6d28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5030)));
label_1b6d2c:
    // 0x1b6d2c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b6d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1b6d30:
    // 0x1b6d30: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b6d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b6d34:
    // 0x1b6d34: 0x1064000b  beq         $v1, $a0, . + 4 + (0xB << 2)
label_1b6d38:
    if (ctx->pc == 0x1B6D38u) {
        ctx->pc = 0x1B6D3Cu;
        goto label_1b6d3c;
    }
    ctx->pc = 0x1B6D34u;
    {
        const bool branch_taken_0x1b6d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b6d34) {
            ctx->pc = 0x1B6D64u;
            goto label_1b6d64;
        }
    }
    ctx->pc = 0x1B6D3Cu;
label_1b6d3c:
    // 0x1b6d3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b6d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6d40:
    // 0x1b6d40: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
label_1b6d44:
    if (ctx->pc == 0x1B6D44u) {
        ctx->pc = 0x1B6D48u;
        goto label_1b6d48;
    }
    ctx->pc = 0x1B6D40u;
    {
        const bool branch_taken_0x1b6d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1b6d40) {
            ctx->pc = 0x1B6D64u;
            goto label_1b6d64;
        }
    }
    ctx->pc = 0x1B6D48u;
label_1b6d48:
    // 0x1b6d48: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1b6d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b6d4c:
    // 0x1b6d4c: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
label_1b6d50:
    if (ctx->pc == 0x1B6D50u) {
        ctx->pc = 0x1B6D54u;
        goto label_1b6d54;
    }
    ctx->pc = 0x1B6D4Cu;
    {
        const bool branch_taken_0x1b6d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x1b6d4c) {
            ctx->pc = 0x1B6D6Cu;
            goto label_1b6d6c;
        }
    }
    ctx->pc = 0x1B6D54u;
label_1b6d54:
    // 0x1b6d54: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1b6d58:
    if (ctx->pc == 0x1B6D58u) {
        ctx->pc = 0x1B6D5Cu;
        goto label_1b6d5c;
    }
    ctx->pc = 0x1B6D54u;
    {
        const bool branch_taken_0x1b6d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6d54) {
            ctx->pc = 0x1B6D6Cu;
            goto label_1b6d6c;
        }
    }
    ctx->pc = 0x1B6D5Cu;
label_1b6d5c:
    // 0x1b6d5c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b6d60:
    if (ctx->pc == 0x1B6D60u) {
        ctx->pc = 0x1B6D64u;
        goto label_1b6d64;
    }
    ctx->pc = 0x1B6D5Cu;
    {
        const bool branch_taken_0x1b6d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6d5c) {
            ctx->pc = 0x1B6D6Cu;
            goto label_1b6d6c;
        }
    }
    ctx->pc = 0x1B6D64u;
label_1b6d64:
    // 0x1b6d64: 0xc0c5244  jal         func_314910
label_1b6d68:
    if (ctx->pc == 0x1B6D68u) {
        ctx->pc = 0x1B6D6Cu;
        goto label_1b6d6c;
    }
    ctx->pc = 0x1B6D64u;
    SET_GPR_U32(ctx, 31, 0x1B6D6Cu);
    ctx->pc = 0x314910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314910u, 0x1B6D64u, 0x1B6D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D6Cu;
label_1b6d6c:
    // 0x1b6d6c: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x1b6d6cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b6d70:
    // 0x1b6d70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b6d70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b6d74:
    // 0x1b6d74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b6d74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b6d78:
    // 0x1b6d78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b6d78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b6d7c:
    // 0x1b6d7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b6d7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b6d80:
    // 0x1b6d80: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1b6d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1b6d84:
    // 0x1b6d84: 0x3e00008  jr          $ra
label_1b6d88:
    if (ctx->pc == 0x1B6D88u) {
        ctx->pc = 0x1B6D8Cu;
        goto label_fallthrough_0x1b6d84;
    }
    ctx->pc = 0x1B6D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b6d84:
    ctx->pc = 0x1B6D8Cu;
}
