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

// Function: Em0c_dm_ck
// Address: 0x220890 - 0x221dec
void Em0c_dm_ck_0x220890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_dm_ck_0x220890");
#endif

    switch (ctx->pc) {
        case 0x220890u: goto label_220890;
        case 0x220894u: goto label_220894;
        case 0x220898u: goto label_220898;
        case 0x22089cu: goto label_22089c;
        case 0x2208a0u: goto label_2208a0;
        case 0x2208a4u: goto label_2208a4;
        case 0x2208a8u: goto label_2208a8;
        case 0x2208acu: goto label_2208ac;
        case 0x2208b0u: goto label_2208b0;
        case 0x2208b4u: goto label_2208b4;
        case 0x2208b8u: goto label_2208b8;
        case 0x2208bcu: goto label_2208bc;
        case 0x2208c0u: goto label_2208c0;
        case 0x2208c4u: goto label_2208c4;
        case 0x2208c8u: goto label_2208c8;
        case 0x2208ccu: goto label_2208cc;
        case 0x2208d0u: goto label_2208d0;
        case 0x2208d4u: goto label_2208d4;
        case 0x2208d8u: goto label_2208d8;
        case 0x2208dcu: goto label_2208dc;
        case 0x2208e0u: goto label_2208e0;
        case 0x2208e4u: goto label_2208e4;
        case 0x2208e8u: goto label_2208e8;
        case 0x2208ecu: goto label_2208ec;
        case 0x2208f0u: goto label_2208f0;
        case 0x2208f4u: goto label_2208f4;
        case 0x2208f8u: goto label_2208f8;
        case 0x2208fcu: goto label_2208fc;
        case 0x220900u: goto label_220900;
        case 0x220904u: goto label_220904;
        case 0x220908u: goto label_220908;
        case 0x22090cu: goto label_22090c;
        case 0x220910u: goto label_220910;
        case 0x220914u: goto label_220914;
        case 0x220918u: goto label_220918;
        case 0x22091cu: goto label_22091c;
        case 0x220920u: goto label_220920;
        case 0x220924u: goto label_220924;
        case 0x220928u: goto label_220928;
        case 0x22092cu: goto label_22092c;
        case 0x220930u: goto label_220930;
        case 0x220934u: goto label_220934;
        case 0x220938u: goto label_220938;
        case 0x22093cu: goto label_22093c;
        case 0x220940u: goto label_220940;
        case 0x220944u: goto label_220944;
        case 0x220948u: goto label_220948;
        case 0x22094cu: goto label_22094c;
        case 0x220950u: goto label_220950;
        case 0x220954u: goto label_220954;
        case 0x220958u: goto label_220958;
        case 0x22095cu: goto label_22095c;
        case 0x220960u: goto label_220960;
        case 0x220964u: goto label_220964;
        case 0x220968u: goto label_220968;
        case 0x22096cu: goto label_22096c;
        case 0x220970u: goto label_220970;
        case 0x220974u: goto label_220974;
        case 0x220978u: goto label_220978;
        case 0x22097cu: goto label_22097c;
        case 0x220980u: goto label_220980;
        case 0x220984u: goto label_220984;
        case 0x220988u: goto label_220988;
        case 0x22098cu: goto label_22098c;
        case 0x220990u: goto label_220990;
        case 0x220994u: goto label_220994;
        case 0x220998u: goto label_220998;
        case 0x22099cu: goto label_22099c;
        case 0x2209a0u: goto label_2209a0;
        case 0x2209a4u: goto label_2209a4;
        case 0x2209a8u: goto label_2209a8;
        case 0x2209acu: goto label_2209ac;
        case 0x2209b0u: goto label_2209b0;
        case 0x2209b4u: goto label_2209b4;
        case 0x2209b8u: goto label_2209b8;
        case 0x2209bcu: goto label_2209bc;
        case 0x2209c0u: goto label_2209c0;
        case 0x2209c4u: goto label_2209c4;
        case 0x2209c8u: goto label_2209c8;
        case 0x2209ccu: goto label_2209cc;
        case 0x2209d0u: goto label_2209d0;
        case 0x2209d4u: goto label_2209d4;
        case 0x2209d8u: goto label_2209d8;
        case 0x2209dcu: goto label_2209dc;
        case 0x2209e0u: goto label_2209e0;
        case 0x2209e4u: goto label_2209e4;
        case 0x2209e8u: goto label_2209e8;
        case 0x2209ecu: goto label_2209ec;
        case 0x2209f0u: goto label_2209f0;
        case 0x2209f4u: goto label_2209f4;
        case 0x2209f8u: goto label_2209f8;
        case 0x2209fcu: goto label_2209fc;
        case 0x220a00u: goto label_220a00;
        case 0x220a04u: goto label_220a04;
        case 0x220a08u: goto label_220a08;
        case 0x220a0cu: goto label_220a0c;
        case 0x220a10u: goto label_220a10;
        case 0x220a14u: goto label_220a14;
        case 0x220a18u: goto label_220a18;
        case 0x220a1cu: goto label_220a1c;
        case 0x220a20u: goto label_220a20;
        case 0x220a24u: goto label_220a24;
        case 0x220a28u: goto label_220a28;
        case 0x220a2cu: goto label_220a2c;
        case 0x220a30u: goto label_220a30;
        case 0x220a34u: goto label_220a34;
        case 0x220a38u: goto label_220a38;
        case 0x220a3cu: goto label_220a3c;
        case 0x220a40u: goto label_220a40;
        case 0x220a44u: goto label_220a44;
        case 0x220a48u: goto label_220a48;
        case 0x220a4cu: goto label_220a4c;
        case 0x220a50u: goto label_220a50;
        case 0x220a54u: goto label_220a54;
        case 0x220a58u: goto label_220a58;
        case 0x220a5cu: goto label_220a5c;
        case 0x220a60u: goto label_220a60;
        case 0x220a64u: goto label_220a64;
        case 0x220a68u: goto label_220a68;
        case 0x220a6cu: goto label_220a6c;
        case 0x220a70u: goto label_220a70;
        case 0x220a74u: goto label_220a74;
        case 0x220a78u: goto label_220a78;
        case 0x220a7cu: goto label_220a7c;
        case 0x220a80u: goto label_220a80;
        case 0x220a84u: goto label_220a84;
        case 0x220a88u: goto label_220a88;
        case 0x220a8cu: goto label_220a8c;
        case 0x220a90u: goto label_220a90;
        case 0x220a94u: goto label_220a94;
        case 0x220a98u: goto label_220a98;
        case 0x220a9cu: goto label_220a9c;
        case 0x220aa0u: goto label_220aa0;
        case 0x220aa4u: goto label_220aa4;
        case 0x220aa8u: goto label_220aa8;
        case 0x220aacu: goto label_220aac;
        case 0x220ab0u: goto label_220ab0;
        case 0x220ab4u: goto label_220ab4;
        case 0x220ab8u: goto label_220ab8;
        case 0x220abcu: goto label_220abc;
        case 0x220ac0u: goto label_220ac0;
        case 0x220ac4u: goto label_220ac4;
        case 0x220ac8u: goto label_220ac8;
        case 0x220accu: goto label_220acc;
        case 0x220ad0u: goto label_220ad0;
        case 0x220ad4u: goto label_220ad4;
        case 0x220ad8u: goto label_220ad8;
        case 0x220adcu: goto label_220adc;
        case 0x220ae0u: goto label_220ae0;
        case 0x220ae4u: goto label_220ae4;
        case 0x220ae8u: goto label_220ae8;
        case 0x220aecu: goto label_220aec;
        case 0x220af0u: goto label_220af0;
        case 0x220af4u: goto label_220af4;
        case 0x220af8u: goto label_220af8;
        case 0x220afcu: goto label_220afc;
        case 0x220b00u: goto label_220b00;
        case 0x220b04u: goto label_220b04;
        case 0x220b08u: goto label_220b08;
        case 0x220b0cu: goto label_220b0c;
        case 0x220b10u: goto label_220b10;
        case 0x220b14u: goto label_220b14;
        case 0x220b18u: goto label_220b18;
        case 0x220b1cu: goto label_220b1c;
        case 0x220b20u: goto label_220b20;
        case 0x220b24u: goto label_220b24;
        case 0x220b28u: goto label_220b28;
        case 0x220b2cu: goto label_220b2c;
        case 0x220b30u: goto label_220b30;
        case 0x220b34u: goto label_220b34;
        case 0x220b38u: goto label_220b38;
        case 0x220b3cu: goto label_220b3c;
        case 0x220b40u: goto label_220b40;
        case 0x220b44u: goto label_220b44;
        case 0x220b48u: goto label_220b48;
        case 0x220b4cu: goto label_220b4c;
        case 0x220b50u: goto label_220b50;
        case 0x220b54u: goto label_220b54;
        case 0x220b58u: goto label_220b58;
        case 0x220b5cu: goto label_220b5c;
        case 0x220b60u: goto label_220b60;
        case 0x220b64u: goto label_220b64;
        case 0x220b68u: goto label_220b68;
        case 0x220b6cu: goto label_220b6c;
        case 0x220b70u: goto label_220b70;
        case 0x220b74u: goto label_220b74;
        case 0x220b78u: goto label_220b78;
        case 0x220b7cu: goto label_220b7c;
        case 0x220b80u: goto label_220b80;
        case 0x220b84u: goto label_220b84;
        case 0x220b88u: goto label_220b88;
        case 0x220b8cu: goto label_220b8c;
        case 0x220b90u: goto label_220b90;
        case 0x220b94u: goto label_220b94;
        case 0x220b98u: goto label_220b98;
        case 0x220b9cu: goto label_220b9c;
        case 0x220ba0u: goto label_220ba0;
        case 0x220ba4u: goto label_220ba4;
        case 0x220ba8u: goto label_220ba8;
        case 0x220bacu: goto label_220bac;
        case 0x220bb0u: goto label_220bb0;
        case 0x220bb4u: goto label_220bb4;
        case 0x220bb8u: goto label_220bb8;
        case 0x220bbcu: goto label_220bbc;
        case 0x220bc0u: goto label_220bc0;
        case 0x220bc4u: goto label_220bc4;
        case 0x220bc8u: goto label_220bc8;
        case 0x220bccu: goto label_220bcc;
        case 0x220bd0u: goto label_220bd0;
        case 0x220bd4u: goto label_220bd4;
        case 0x220bd8u: goto label_220bd8;
        case 0x220bdcu: goto label_220bdc;
        case 0x220be0u: goto label_220be0;
        case 0x220be4u: goto label_220be4;
        case 0x220be8u: goto label_220be8;
        case 0x220becu: goto label_220bec;
        case 0x220bf0u: goto label_220bf0;
        case 0x220bf4u: goto label_220bf4;
        case 0x220bf8u: goto label_220bf8;
        case 0x220bfcu: goto label_220bfc;
        case 0x220c00u: goto label_220c00;
        case 0x220c04u: goto label_220c04;
        case 0x220c08u: goto label_220c08;
        case 0x220c0cu: goto label_220c0c;
        case 0x220c10u: goto label_220c10;
        case 0x220c14u: goto label_220c14;
        case 0x220c18u: goto label_220c18;
        case 0x220c1cu: goto label_220c1c;
        case 0x220c20u: goto label_220c20;
        case 0x220c24u: goto label_220c24;
        case 0x220c28u: goto label_220c28;
        case 0x220c2cu: goto label_220c2c;
        case 0x220c30u: goto label_220c30;
        case 0x220c34u: goto label_220c34;
        case 0x220c38u: goto label_220c38;
        case 0x220c3cu: goto label_220c3c;
        case 0x220c40u: goto label_220c40;
        case 0x220c44u: goto label_220c44;
        case 0x220c48u: goto label_220c48;
        case 0x220c4cu: goto label_220c4c;
        case 0x220c50u: goto label_220c50;
        case 0x220c54u: goto label_220c54;
        case 0x220c58u: goto label_220c58;
        case 0x220c5cu: goto label_220c5c;
        case 0x220c60u: goto label_220c60;
        case 0x220c64u: goto label_220c64;
        case 0x220c68u: goto label_220c68;
        case 0x220c6cu: goto label_220c6c;
        case 0x220c70u: goto label_220c70;
        case 0x220c74u: goto label_220c74;
        case 0x220c78u: goto label_220c78;
        case 0x220c7cu: goto label_220c7c;
        case 0x220c80u: goto label_220c80;
        case 0x220c84u: goto label_220c84;
        case 0x220c88u: goto label_220c88;
        case 0x220c8cu: goto label_220c8c;
        case 0x220c90u: goto label_220c90;
        case 0x220c94u: goto label_220c94;
        case 0x220c98u: goto label_220c98;
        case 0x220c9cu: goto label_220c9c;
        case 0x220ca0u: goto label_220ca0;
        case 0x220ca4u: goto label_220ca4;
        case 0x220ca8u: goto label_220ca8;
        case 0x220cacu: goto label_220cac;
        case 0x220cb0u: goto label_220cb0;
        case 0x220cb4u: goto label_220cb4;
        case 0x220cb8u: goto label_220cb8;
        case 0x220cbcu: goto label_220cbc;
        case 0x220cc0u: goto label_220cc0;
        case 0x220cc4u: goto label_220cc4;
        case 0x220cc8u: goto label_220cc8;
        case 0x220cccu: goto label_220ccc;
        case 0x220cd0u: goto label_220cd0;
        case 0x220cd4u: goto label_220cd4;
        case 0x220cd8u: goto label_220cd8;
        case 0x220cdcu: goto label_220cdc;
        case 0x220ce0u: goto label_220ce0;
        case 0x220ce4u: goto label_220ce4;
        case 0x220ce8u: goto label_220ce8;
        case 0x220cecu: goto label_220cec;
        case 0x220cf0u: goto label_220cf0;
        case 0x220cf4u: goto label_220cf4;
        case 0x220cf8u: goto label_220cf8;
        case 0x220cfcu: goto label_220cfc;
        case 0x220d00u: goto label_220d00;
        case 0x220d04u: goto label_220d04;
        case 0x220d08u: goto label_220d08;
        case 0x220d0cu: goto label_220d0c;
        case 0x220d10u: goto label_220d10;
        case 0x220d14u: goto label_220d14;
        case 0x220d18u: goto label_220d18;
        case 0x220d1cu: goto label_220d1c;
        case 0x220d20u: goto label_220d20;
        case 0x220d24u: goto label_220d24;
        case 0x220d28u: goto label_220d28;
        case 0x220d2cu: goto label_220d2c;
        case 0x220d30u: goto label_220d30;
        case 0x220d34u: goto label_220d34;
        case 0x220d38u: goto label_220d38;
        case 0x220d3cu: goto label_220d3c;
        case 0x220d40u: goto label_220d40;
        case 0x220d44u: goto label_220d44;
        case 0x220d48u: goto label_220d48;
        case 0x220d4cu: goto label_220d4c;
        case 0x220d50u: goto label_220d50;
        case 0x220d54u: goto label_220d54;
        case 0x220d58u: goto label_220d58;
        case 0x220d5cu: goto label_220d5c;
        case 0x220d60u: goto label_220d60;
        case 0x220d64u: goto label_220d64;
        case 0x220d68u: goto label_220d68;
        case 0x220d6cu: goto label_220d6c;
        case 0x220d70u: goto label_220d70;
        case 0x220d74u: goto label_220d74;
        case 0x220d78u: goto label_220d78;
        case 0x220d7cu: goto label_220d7c;
        case 0x220d80u: goto label_220d80;
        case 0x220d84u: goto label_220d84;
        case 0x220d88u: goto label_220d88;
        case 0x220d8cu: goto label_220d8c;
        case 0x220d90u: goto label_220d90;
        case 0x220d94u: goto label_220d94;
        case 0x220d98u: goto label_220d98;
        case 0x220d9cu: goto label_220d9c;
        case 0x220da0u: goto label_220da0;
        case 0x220da4u: goto label_220da4;
        case 0x220da8u: goto label_220da8;
        case 0x220dacu: goto label_220dac;
        case 0x220db0u: goto label_220db0;
        case 0x220db4u: goto label_220db4;
        case 0x220db8u: goto label_220db8;
        case 0x220dbcu: goto label_220dbc;
        case 0x220dc0u: goto label_220dc0;
        case 0x220dc4u: goto label_220dc4;
        case 0x220dc8u: goto label_220dc8;
        case 0x220dccu: goto label_220dcc;
        case 0x220dd0u: goto label_220dd0;
        case 0x220dd4u: goto label_220dd4;
        case 0x220dd8u: goto label_220dd8;
        case 0x220ddcu: goto label_220ddc;
        case 0x220de0u: goto label_220de0;
        case 0x220de4u: goto label_220de4;
        case 0x220de8u: goto label_220de8;
        case 0x220decu: goto label_220dec;
        case 0x220df0u: goto label_220df0;
        case 0x220df4u: goto label_220df4;
        case 0x220df8u: goto label_220df8;
        case 0x220dfcu: goto label_220dfc;
        case 0x220e00u: goto label_220e00;
        case 0x220e04u: goto label_220e04;
        case 0x220e08u: goto label_220e08;
        case 0x220e0cu: goto label_220e0c;
        case 0x220e10u: goto label_220e10;
        case 0x220e14u: goto label_220e14;
        case 0x220e18u: goto label_220e18;
        case 0x220e1cu: goto label_220e1c;
        case 0x220e20u: goto label_220e20;
        case 0x220e24u: goto label_220e24;
        case 0x220e28u: goto label_220e28;
        case 0x220e2cu: goto label_220e2c;
        case 0x220e30u: goto label_220e30;
        case 0x220e34u: goto label_220e34;
        case 0x220e38u: goto label_220e38;
        case 0x220e3cu: goto label_220e3c;
        case 0x220e40u: goto label_220e40;
        case 0x220e44u: goto label_220e44;
        case 0x220e48u: goto label_220e48;
        case 0x220e4cu: goto label_220e4c;
        case 0x220e50u: goto label_220e50;
        case 0x220e54u: goto label_220e54;
        case 0x220e58u: goto label_220e58;
        case 0x220e5cu: goto label_220e5c;
        case 0x220e60u: goto label_220e60;
        case 0x220e64u: goto label_220e64;
        case 0x220e68u: goto label_220e68;
        case 0x220e6cu: goto label_220e6c;
        case 0x220e70u: goto label_220e70;
        case 0x220e74u: goto label_220e74;
        case 0x220e78u: goto label_220e78;
        case 0x220e7cu: goto label_220e7c;
        case 0x220e80u: goto label_220e80;
        case 0x220e84u: goto label_220e84;
        case 0x220e88u: goto label_220e88;
        case 0x220e8cu: goto label_220e8c;
        case 0x220e90u: goto label_220e90;
        case 0x220e94u: goto label_220e94;
        case 0x220e98u: goto label_220e98;
        case 0x220e9cu: goto label_220e9c;
        case 0x220ea0u: goto label_220ea0;
        case 0x220ea4u: goto label_220ea4;
        case 0x220ea8u: goto label_220ea8;
        case 0x220eacu: goto label_220eac;
        case 0x220eb0u: goto label_220eb0;
        case 0x220eb4u: goto label_220eb4;
        case 0x220eb8u: goto label_220eb8;
        case 0x220ebcu: goto label_220ebc;
        case 0x220ec0u: goto label_220ec0;
        case 0x220ec4u: goto label_220ec4;
        case 0x220ec8u: goto label_220ec8;
        case 0x220eccu: goto label_220ecc;
        case 0x220ed0u: goto label_220ed0;
        case 0x220ed4u: goto label_220ed4;
        case 0x220ed8u: goto label_220ed8;
        case 0x220edcu: goto label_220edc;
        case 0x220ee0u: goto label_220ee0;
        case 0x220ee4u: goto label_220ee4;
        case 0x220ee8u: goto label_220ee8;
        case 0x220eecu: goto label_220eec;
        case 0x220ef0u: goto label_220ef0;
        case 0x220ef4u: goto label_220ef4;
        case 0x220ef8u: goto label_220ef8;
        case 0x220efcu: goto label_220efc;
        case 0x220f00u: goto label_220f00;
        case 0x220f04u: goto label_220f04;
        case 0x220f08u: goto label_220f08;
        case 0x220f0cu: goto label_220f0c;
        case 0x220f10u: goto label_220f10;
        case 0x220f14u: goto label_220f14;
        case 0x220f18u: goto label_220f18;
        case 0x220f1cu: goto label_220f1c;
        case 0x220f20u: goto label_220f20;
        case 0x220f24u: goto label_220f24;
        case 0x220f28u: goto label_220f28;
        case 0x220f2cu: goto label_220f2c;
        case 0x220f30u: goto label_220f30;
        case 0x220f34u: goto label_220f34;
        case 0x220f38u: goto label_220f38;
        case 0x220f3cu: goto label_220f3c;
        case 0x220f40u: goto label_220f40;
        case 0x220f44u: goto label_220f44;
        case 0x220f48u: goto label_220f48;
        case 0x220f4cu: goto label_220f4c;
        case 0x220f50u: goto label_220f50;
        case 0x220f54u: goto label_220f54;
        case 0x220f58u: goto label_220f58;
        case 0x220f5cu: goto label_220f5c;
        case 0x220f60u: goto label_220f60;
        case 0x220f64u: goto label_220f64;
        case 0x220f68u: goto label_220f68;
        case 0x220f6cu: goto label_220f6c;
        case 0x220f70u: goto label_220f70;
        case 0x220f74u: goto label_220f74;
        case 0x220f78u: goto label_220f78;
        case 0x220f7cu: goto label_220f7c;
        case 0x220f80u: goto label_220f80;
        case 0x220f84u: goto label_220f84;
        case 0x220f88u: goto label_220f88;
        case 0x220f8cu: goto label_220f8c;
        case 0x220f90u: goto label_220f90;
        case 0x220f94u: goto label_220f94;
        case 0x220f98u: goto label_220f98;
        case 0x220f9cu: goto label_220f9c;
        case 0x220fa0u: goto label_220fa0;
        case 0x220fa4u: goto label_220fa4;
        case 0x220fa8u: goto label_220fa8;
        case 0x220facu: goto label_220fac;
        case 0x220fb0u: goto label_220fb0;
        case 0x220fb4u: goto label_220fb4;
        case 0x220fb8u: goto label_220fb8;
        case 0x220fbcu: goto label_220fbc;
        case 0x220fc0u: goto label_220fc0;
        case 0x220fc4u: goto label_220fc4;
        case 0x220fc8u: goto label_220fc8;
        case 0x220fccu: goto label_220fcc;
        case 0x220fd0u: goto label_220fd0;
        case 0x220fd4u: goto label_220fd4;
        case 0x220fd8u: goto label_220fd8;
        case 0x220fdcu: goto label_220fdc;
        case 0x220fe0u: goto label_220fe0;
        case 0x220fe4u: goto label_220fe4;
        case 0x220fe8u: goto label_220fe8;
        case 0x220fecu: goto label_220fec;
        case 0x220ff0u: goto label_220ff0;
        case 0x220ff4u: goto label_220ff4;
        case 0x220ff8u: goto label_220ff8;
        case 0x220ffcu: goto label_220ffc;
        case 0x221000u: goto label_221000;
        case 0x221004u: goto label_221004;
        case 0x221008u: goto label_221008;
        case 0x22100cu: goto label_22100c;
        case 0x221010u: goto label_221010;
        case 0x221014u: goto label_221014;
        case 0x221018u: goto label_221018;
        case 0x22101cu: goto label_22101c;
        case 0x221020u: goto label_221020;
        case 0x221024u: goto label_221024;
        case 0x221028u: goto label_221028;
        case 0x22102cu: goto label_22102c;
        case 0x221030u: goto label_221030;
        case 0x221034u: goto label_221034;
        case 0x221038u: goto label_221038;
        case 0x22103cu: goto label_22103c;
        case 0x221040u: goto label_221040;
        case 0x221044u: goto label_221044;
        case 0x221048u: goto label_221048;
        case 0x22104cu: goto label_22104c;
        case 0x221050u: goto label_221050;
        case 0x221054u: goto label_221054;
        case 0x221058u: goto label_221058;
        case 0x22105cu: goto label_22105c;
        case 0x221060u: goto label_221060;
        case 0x221064u: goto label_221064;
        case 0x221068u: goto label_221068;
        case 0x22106cu: goto label_22106c;
        case 0x221070u: goto label_221070;
        case 0x221074u: goto label_221074;
        case 0x221078u: goto label_221078;
        case 0x22107cu: goto label_22107c;
        case 0x221080u: goto label_221080;
        case 0x221084u: goto label_221084;
        case 0x221088u: goto label_221088;
        case 0x22108cu: goto label_22108c;
        case 0x221090u: goto label_221090;
        case 0x221094u: goto label_221094;
        case 0x221098u: goto label_221098;
        case 0x22109cu: goto label_22109c;
        case 0x2210a0u: goto label_2210a0;
        case 0x2210a4u: goto label_2210a4;
        case 0x2210a8u: goto label_2210a8;
        case 0x2210acu: goto label_2210ac;
        case 0x2210b0u: goto label_2210b0;
        case 0x2210b4u: goto label_2210b4;
        case 0x2210b8u: goto label_2210b8;
        case 0x2210bcu: goto label_2210bc;
        case 0x2210c0u: goto label_2210c0;
        case 0x2210c4u: goto label_2210c4;
        case 0x2210c8u: goto label_2210c8;
        case 0x2210ccu: goto label_2210cc;
        case 0x2210d0u: goto label_2210d0;
        case 0x2210d4u: goto label_2210d4;
        case 0x2210d8u: goto label_2210d8;
        case 0x2210dcu: goto label_2210dc;
        case 0x2210e0u: goto label_2210e0;
        case 0x2210e4u: goto label_2210e4;
        case 0x2210e8u: goto label_2210e8;
        case 0x2210ecu: goto label_2210ec;
        case 0x2210f0u: goto label_2210f0;
        case 0x2210f4u: goto label_2210f4;
        case 0x2210f8u: goto label_2210f8;
        case 0x2210fcu: goto label_2210fc;
        case 0x221100u: goto label_221100;
        case 0x221104u: goto label_221104;
        case 0x221108u: goto label_221108;
        case 0x22110cu: goto label_22110c;
        case 0x221110u: goto label_221110;
        case 0x221114u: goto label_221114;
        case 0x221118u: goto label_221118;
        case 0x22111cu: goto label_22111c;
        case 0x221120u: goto label_221120;
        case 0x221124u: goto label_221124;
        case 0x221128u: goto label_221128;
        case 0x22112cu: goto label_22112c;
        case 0x221130u: goto label_221130;
        case 0x221134u: goto label_221134;
        case 0x221138u: goto label_221138;
        case 0x22113cu: goto label_22113c;
        case 0x221140u: goto label_221140;
        case 0x221144u: goto label_221144;
        case 0x221148u: goto label_221148;
        case 0x22114cu: goto label_22114c;
        case 0x221150u: goto label_221150;
        case 0x221154u: goto label_221154;
        case 0x221158u: goto label_221158;
        case 0x22115cu: goto label_22115c;
        case 0x221160u: goto label_221160;
        case 0x221164u: goto label_221164;
        case 0x221168u: goto label_221168;
        case 0x22116cu: goto label_22116c;
        case 0x221170u: goto label_221170;
        case 0x221174u: goto label_221174;
        case 0x221178u: goto label_221178;
        case 0x22117cu: goto label_22117c;
        case 0x221180u: goto label_221180;
        case 0x221184u: goto label_221184;
        case 0x221188u: goto label_221188;
        case 0x22118cu: goto label_22118c;
        case 0x221190u: goto label_221190;
        case 0x221194u: goto label_221194;
        case 0x221198u: goto label_221198;
        case 0x22119cu: goto label_22119c;
        case 0x2211a0u: goto label_2211a0;
        case 0x2211a4u: goto label_2211a4;
        case 0x2211a8u: goto label_2211a8;
        case 0x2211acu: goto label_2211ac;
        case 0x2211b0u: goto label_2211b0;
        case 0x2211b4u: goto label_2211b4;
        case 0x2211b8u: goto label_2211b8;
        case 0x2211bcu: goto label_2211bc;
        case 0x2211c0u: goto label_2211c0;
        case 0x2211c4u: goto label_2211c4;
        case 0x2211c8u: goto label_2211c8;
        case 0x2211ccu: goto label_2211cc;
        case 0x2211d0u: goto label_2211d0;
        case 0x2211d4u: goto label_2211d4;
        case 0x2211d8u: goto label_2211d8;
        case 0x2211dcu: goto label_2211dc;
        case 0x2211e0u: goto label_2211e0;
        case 0x2211e4u: goto label_2211e4;
        case 0x2211e8u: goto label_2211e8;
        case 0x2211ecu: goto label_2211ec;
        case 0x2211f0u: goto label_2211f0;
        case 0x2211f4u: goto label_2211f4;
        case 0x2211f8u: goto label_2211f8;
        case 0x2211fcu: goto label_2211fc;
        case 0x221200u: goto label_221200;
        case 0x221204u: goto label_221204;
        case 0x221208u: goto label_221208;
        case 0x22120cu: goto label_22120c;
        case 0x221210u: goto label_221210;
        case 0x221214u: goto label_221214;
        case 0x221218u: goto label_221218;
        case 0x22121cu: goto label_22121c;
        case 0x221220u: goto label_221220;
        case 0x221224u: goto label_221224;
        case 0x221228u: goto label_221228;
        case 0x22122cu: goto label_22122c;
        case 0x221230u: goto label_221230;
        case 0x221234u: goto label_221234;
        case 0x221238u: goto label_221238;
        case 0x22123cu: goto label_22123c;
        case 0x221240u: goto label_221240;
        case 0x221244u: goto label_221244;
        case 0x221248u: goto label_221248;
        case 0x22124cu: goto label_22124c;
        case 0x221250u: goto label_221250;
        case 0x221254u: goto label_221254;
        case 0x221258u: goto label_221258;
        case 0x22125cu: goto label_22125c;
        case 0x221260u: goto label_221260;
        case 0x221264u: goto label_221264;
        case 0x221268u: goto label_221268;
        case 0x22126cu: goto label_22126c;
        case 0x221270u: goto label_221270;
        case 0x221274u: goto label_221274;
        case 0x221278u: goto label_221278;
        case 0x22127cu: goto label_22127c;
        case 0x221280u: goto label_221280;
        case 0x221284u: goto label_221284;
        case 0x221288u: goto label_221288;
        case 0x22128cu: goto label_22128c;
        case 0x221290u: goto label_221290;
        case 0x221294u: goto label_221294;
        case 0x221298u: goto label_221298;
        case 0x22129cu: goto label_22129c;
        case 0x2212a0u: goto label_2212a0;
        case 0x2212a4u: goto label_2212a4;
        case 0x2212a8u: goto label_2212a8;
        case 0x2212acu: goto label_2212ac;
        case 0x2212b0u: goto label_2212b0;
        case 0x2212b4u: goto label_2212b4;
        case 0x2212b8u: goto label_2212b8;
        case 0x2212bcu: goto label_2212bc;
        case 0x2212c0u: goto label_2212c0;
        case 0x2212c4u: goto label_2212c4;
        case 0x2212c8u: goto label_2212c8;
        case 0x2212ccu: goto label_2212cc;
        case 0x2212d0u: goto label_2212d0;
        case 0x2212d4u: goto label_2212d4;
        case 0x2212d8u: goto label_2212d8;
        case 0x2212dcu: goto label_2212dc;
        case 0x2212e0u: goto label_2212e0;
        case 0x2212e4u: goto label_2212e4;
        case 0x2212e8u: goto label_2212e8;
        case 0x2212ecu: goto label_2212ec;
        case 0x2212f0u: goto label_2212f0;
        case 0x2212f4u: goto label_2212f4;
        case 0x2212f8u: goto label_2212f8;
        case 0x2212fcu: goto label_2212fc;
        case 0x221300u: goto label_221300;
        case 0x221304u: goto label_221304;
        case 0x221308u: goto label_221308;
        case 0x22130cu: goto label_22130c;
        case 0x221310u: goto label_221310;
        case 0x221314u: goto label_221314;
        case 0x221318u: goto label_221318;
        case 0x22131cu: goto label_22131c;
        case 0x221320u: goto label_221320;
        case 0x221324u: goto label_221324;
        case 0x221328u: goto label_221328;
        case 0x22132cu: goto label_22132c;
        case 0x221330u: goto label_221330;
        case 0x221334u: goto label_221334;
        case 0x221338u: goto label_221338;
        case 0x22133cu: goto label_22133c;
        case 0x221340u: goto label_221340;
        case 0x221344u: goto label_221344;
        case 0x221348u: goto label_221348;
        case 0x22134cu: goto label_22134c;
        case 0x221350u: goto label_221350;
        case 0x221354u: goto label_221354;
        case 0x221358u: goto label_221358;
        case 0x22135cu: goto label_22135c;
        case 0x221360u: goto label_221360;
        case 0x221364u: goto label_221364;
        case 0x221368u: goto label_221368;
        case 0x22136cu: goto label_22136c;
        case 0x221370u: goto label_221370;
        case 0x221374u: goto label_221374;
        case 0x221378u: goto label_221378;
        case 0x22137cu: goto label_22137c;
        case 0x221380u: goto label_221380;
        case 0x221384u: goto label_221384;
        case 0x221388u: goto label_221388;
        case 0x22138cu: goto label_22138c;
        case 0x221390u: goto label_221390;
        case 0x221394u: goto label_221394;
        case 0x221398u: goto label_221398;
        case 0x22139cu: goto label_22139c;
        case 0x2213a0u: goto label_2213a0;
        case 0x2213a4u: goto label_2213a4;
        case 0x2213a8u: goto label_2213a8;
        case 0x2213acu: goto label_2213ac;
        case 0x2213b0u: goto label_2213b0;
        case 0x2213b4u: goto label_2213b4;
        case 0x2213b8u: goto label_2213b8;
        case 0x2213bcu: goto label_2213bc;
        case 0x2213c0u: goto label_2213c0;
        case 0x2213c4u: goto label_2213c4;
        case 0x2213c8u: goto label_2213c8;
        case 0x2213ccu: goto label_2213cc;
        case 0x2213d0u: goto label_2213d0;
        case 0x2213d4u: goto label_2213d4;
        case 0x2213d8u: goto label_2213d8;
        case 0x2213dcu: goto label_2213dc;
        case 0x2213e0u: goto label_2213e0;
        case 0x2213e4u: goto label_2213e4;
        case 0x2213e8u: goto label_2213e8;
        case 0x2213ecu: goto label_2213ec;
        case 0x2213f0u: goto label_2213f0;
        case 0x2213f4u: goto label_2213f4;
        case 0x2213f8u: goto label_2213f8;
        case 0x2213fcu: goto label_2213fc;
        case 0x221400u: goto label_221400;
        case 0x221404u: goto label_221404;
        case 0x221408u: goto label_221408;
        case 0x22140cu: goto label_22140c;
        case 0x221410u: goto label_221410;
        case 0x221414u: goto label_221414;
        case 0x221418u: goto label_221418;
        case 0x22141cu: goto label_22141c;
        case 0x221420u: goto label_221420;
        case 0x221424u: goto label_221424;
        case 0x221428u: goto label_221428;
        case 0x22142cu: goto label_22142c;
        case 0x221430u: goto label_221430;
        case 0x221434u: goto label_221434;
        case 0x221438u: goto label_221438;
        case 0x22143cu: goto label_22143c;
        case 0x221440u: goto label_221440;
        case 0x221444u: goto label_221444;
        case 0x221448u: goto label_221448;
        case 0x22144cu: goto label_22144c;
        case 0x221450u: goto label_221450;
        case 0x221454u: goto label_221454;
        case 0x221458u: goto label_221458;
        case 0x22145cu: goto label_22145c;
        case 0x221460u: goto label_221460;
        case 0x221464u: goto label_221464;
        case 0x221468u: goto label_221468;
        case 0x22146cu: goto label_22146c;
        case 0x221470u: goto label_221470;
        case 0x221474u: goto label_221474;
        case 0x221478u: goto label_221478;
        case 0x22147cu: goto label_22147c;
        case 0x221480u: goto label_221480;
        case 0x221484u: goto label_221484;
        case 0x221488u: goto label_221488;
        case 0x22148cu: goto label_22148c;
        case 0x221490u: goto label_221490;
        case 0x221494u: goto label_221494;
        case 0x221498u: goto label_221498;
        case 0x22149cu: goto label_22149c;
        case 0x2214a0u: goto label_2214a0;
        case 0x2214a4u: goto label_2214a4;
        case 0x2214a8u: goto label_2214a8;
        case 0x2214acu: goto label_2214ac;
        case 0x2214b0u: goto label_2214b0;
        case 0x2214b4u: goto label_2214b4;
        case 0x2214b8u: goto label_2214b8;
        case 0x2214bcu: goto label_2214bc;
        case 0x2214c0u: goto label_2214c0;
        case 0x2214c4u: goto label_2214c4;
        case 0x2214c8u: goto label_2214c8;
        case 0x2214ccu: goto label_2214cc;
        case 0x2214d0u: goto label_2214d0;
        case 0x2214d4u: goto label_2214d4;
        case 0x2214d8u: goto label_2214d8;
        case 0x2214dcu: goto label_2214dc;
        case 0x2214e0u: goto label_2214e0;
        case 0x2214e4u: goto label_2214e4;
        case 0x2214e8u: goto label_2214e8;
        case 0x2214ecu: goto label_2214ec;
        case 0x2214f0u: goto label_2214f0;
        case 0x2214f4u: goto label_2214f4;
        case 0x2214f8u: goto label_2214f8;
        case 0x2214fcu: goto label_2214fc;
        case 0x221500u: goto label_221500;
        case 0x221504u: goto label_221504;
        case 0x221508u: goto label_221508;
        case 0x22150cu: goto label_22150c;
        case 0x221510u: goto label_221510;
        case 0x221514u: goto label_221514;
        case 0x221518u: goto label_221518;
        case 0x22151cu: goto label_22151c;
        case 0x221520u: goto label_221520;
        case 0x221524u: goto label_221524;
        case 0x221528u: goto label_221528;
        case 0x22152cu: goto label_22152c;
        case 0x221530u: goto label_221530;
        case 0x221534u: goto label_221534;
        case 0x221538u: goto label_221538;
        case 0x22153cu: goto label_22153c;
        case 0x221540u: goto label_221540;
        case 0x221544u: goto label_221544;
        case 0x221548u: goto label_221548;
        case 0x22154cu: goto label_22154c;
        case 0x221550u: goto label_221550;
        case 0x221554u: goto label_221554;
        case 0x221558u: goto label_221558;
        case 0x22155cu: goto label_22155c;
        case 0x221560u: goto label_221560;
        case 0x221564u: goto label_221564;
        case 0x221568u: goto label_221568;
        case 0x22156cu: goto label_22156c;
        case 0x221570u: goto label_221570;
        case 0x221574u: goto label_221574;
        case 0x221578u: goto label_221578;
        case 0x22157cu: goto label_22157c;
        case 0x221580u: goto label_221580;
        case 0x221584u: goto label_221584;
        case 0x221588u: goto label_221588;
        case 0x22158cu: goto label_22158c;
        case 0x221590u: goto label_221590;
        case 0x221594u: goto label_221594;
        case 0x221598u: goto label_221598;
        case 0x22159cu: goto label_22159c;
        case 0x2215a0u: goto label_2215a0;
        case 0x2215a4u: goto label_2215a4;
        case 0x2215a8u: goto label_2215a8;
        case 0x2215acu: goto label_2215ac;
        case 0x2215b0u: goto label_2215b0;
        case 0x2215b4u: goto label_2215b4;
        case 0x2215b8u: goto label_2215b8;
        case 0x2215bcu: goto label_2215bc;
        case 0x2215c0u: goto label_2215c0;
        case 0x2215c4u: goto label_2215c4;
        case 0x2215c8u: goto label_2215c8;
        case 0x2215ccu: goto label_2215cc;
        case 0x2215d0u: goto label_2215d0;
        case 0x2215d4u: goto label_2215d4;
        case 0x2215d8u: goto label_2215d8;
        case 0x2215dcu: goto label_2215dc;
        case 0x2215e0u: goto label_2215e0;
        case 0x2215e4u: goto label_2215e4;
        case 0x2215e8u: goto label_2215e8;
        case 0x2215ecu: goto label_2215ec;
        case 0x2215f0u: goto label_2215f0;
        case 0x2215f4u: goto label_2215f4;
        case 0x2215f8u: goto label_2215f8;
        case 0x2215fcu: goto label_2215fc;
        case 0x221600u: goto label_221600;
        case 0x221604u: goto label_221604;
        case 0x221608u: goto label_221608;
        case 0x22160cu: goto label_22160c;
        case 0x221610u: goto label_221610;
        case 0x221614u: goto label_221614;
        case 0x221618u: goto label_221618;
        case 0x22161cu: goto label_22161c;
        case 0x221620u: goto label_221620;
        case 0x221624u: goto label_221624;
        case 0x221628u: goto label_221628;
        case 0x22162cu: goto label_22162c;
        case 0x221630u: goto label_221630;
        case 0x221634u: goto label_221634;
        case 0x221638u: goto label_221638;
        case 0x22163cu: goto label_22163c;
        case 0x221640u: goto label_221640;
        case 0x221644u: goto label_221644;
        case 0x221648u: goto label_221648;
        case 0x22164cu: goto label_22164c;
        case 0x221650u: goto label_221650;
        case 0x221654u: goto label_221654;
        case 0x221658u: goto label_221658;
        case 0x22165cu: goto label_22165c;
        case 0x221660u: goto label_221660;
        case 0x221664u: goto label_221664;
        case 0x221668u: goto label_221668;
        case 0x22166cu: goto label_22166c;
        case 0x221670u: goto label_221670;
        case 0x221674u: goto label_221674;
        case 0x221678u: goto label_221678;
        case 0x22167cu: goto label_22167c;
        case 0x221680u: goto label_221680;
        case 0x221684u: goto label_221684;
        case 0x221688u: goto label_221688;
        case 0x22168cu: goto label_22168c;
        case 0x221690u: goto label_221690;
        case 0x221694u: goto label_221694;
        case 0x221698u: goto label_221698;
        case 0x22169cu: goto label_22169c;
        case 0x2216a0u: goto label_2216a0;
        case 0x2216a4u: goto label_2216a4;
        case 0x2216a8u: goto label_2216a8;
        case 0x2216acu: goto label_2216ac;
        case 0x2216b0u: goto label_2216b0;
        case 0x2216b4u: goto label_2216b4;
        case 0x2216b8u: goto label_2216b8;
        case 0x2216bcu: goto label_2216bc;
        case 0x2216c0u: goto label_2216c0;
        case 0x2216c4u: goto label_2216c4;
        case 0x2216c8u: goto label_2216c8;
        case 0x2216ccu: goto label_2216cc;
        case 0x2216d0u: goto label_2216d0;
        case 0x2216d4u: goto label_2216d4;
        case 0x2216d8u: goto label_2216d8;
        case 0x2216dcu: goto label_2216dc;
        case 0x2216e0u: goto label_2216e0;
        case 0x2216e4u: goto label_2216e4;
        case 0x2216e8u: goto label_2216e8;
        case 0x2216ecu: goto label_2216ec;
        case 0x2216f0u: goto label_2216f0;
        case 0x2216f4u: goto label_2216f4;
        case 0x2216f8u: goto label_2216f8;
        case 0x2216fcu: goto label_2216fc;
        case 0x221700u: goto label_221700;
        case 0x221704u: goto label_221704;
        case 0x221708u: goto label_221708;
        case 0x22170cu: goto label_22170c;
        case 0x221710u: goto label_221710;
        case 0x221714u: goto label_221714;
        case 0x221718u: goto label_221718;
        case 0x22171cu: goto label_22171c;
        case 0x221720u: goto label_221720;
        case 0x221724u: goto label_221724;
        case 0x221728u: goto label_221728;
        case 0x22172cu: goto label_22172c;
        case 0x221730u: goto label_221730;
        case 0x221734u: goto label_221734;
        case 0x221738u: goto label_221738;
        case 0x22173cu: goto label_22173c;
        case 0x221740u: goto label_221740;
        case 0x221744u: goto label_221744;
        case 0x221748u: goto label_221748;
        case 0x22174cu: goto label_22174c;
        case 0x221750u: goto label_221750;
        case 0x221754u: goto label_221754;
        case 0x221758u: goto label_221758;
        case 0x22175cu: goto label_22175c;
        case 0x221760u: goto label_221760;
        case 0x221764u: goto label_221764;
        case 0x221768u: goto label_221768;
        case 0x22176cu: goto label_22176c;
        case 0x221770u: goto label_221770;
        case 0x221774u: goto label_221774;
        case 0x221778u: goto label_221778;
        case 0x22177cu: goto label_22177c;
        case 0x221780u: goto label_221780;
        case 0x221784u: goto label_221784;
        case 0x221788u: goto label_221788;
        case 0x22178cu: goto label_22178c;
        case 0x221790u: goto label_221790;
        case 0x221794u: goto label_221794;
        case 0x221798u: goto label_221798;
        case 0x22179cu: goto label_22179c;
        case 0x2217a0u: goto label_2217a0;
        case 0x2217a4u: goto label_2217a4;
        case 0x2217a8u: goto label_2217a8;
        case 0x2217acu: goto label_2217ac;
        case 0x2217b0u: goto label_2217b0;
        case 0x2217b4u: goto label_2217b4;
        case 0x2217b8u: goto label_2217b8;
        case 0x2217bcu: goto label_2217bc;
        case 0x2217c0u: goto label_2217c0;
        case 0x2217c4u: goto label_2217c4;
        case 0x2217c8u: goto label_2217c8;
        case 0x2217ccu: goto label_2217cc;
        case 0x2217d0u: goto label_2217d0;
        case 0x2217d4u: goto label_2217d4;
        case 0x2217d8u: goto label_2217d8;
        case 0x2217dcu: goto label_2217dc;
        case 0x2217e0u: goto label_2217e0;
        case 0x2217e4u: goto label_2217e4;
        case 0x2217e8u: goto label_2217e8;
        case 0x2217ecu: goto label_2217ec;
        case 0x2217f0u: goto label_2217f0;
        case 0x2217f4u: goto label_2217f4;
        case 0x2217f8u: goto label_2217f8;
        case 0x2217fcu: goto label_2217fc;
        case 0x221800u: goto label_221800;
        case 0x221804u: goto label_221804;
        case 0x221808u: goto label_221808;
        case 0x22180cu: goto label_22180c;
        case 0x221810u: goto label_221810;
        case 0x221814u: goto label_221814;
        case 0x221818u: goto label_221818;
        case 0x22181cu: goto label_22181c;
        case 0x221820u: goto label_221820;
        case 0x221824u: goto label_221824;
        case 0x221828u: goto label_221828;
        case 0x22182cu: goto label_22182c;
        case 0x221830u: goto label_221830;
        case 0x221834u: goto label_221834;
        case 0x221838u: goto label_221838;
        case 0x22183cu: goto label_22183c;
        case 0x221840u: goto label_221840;
        case 0x221844u: goto label_221844;
        case 0x221848u: goto label_221848;
        case 0x22184cu: goto label_22184c;
        case 0x221850u: goto label_221850;
        case 0x221854u: goto label_221854;
        case 0x221858u: goto label_221858;
        case 0x22185cu: goto label_22185c;
        case 0x221860u: goto label_221860;
        case 0x221864u: goto label_221864;
        case 0x221868u: goto label_221868;
        case 0x22186cu: goto label_22186c;
        case 0x221870u: goto label_221870;
        case 0x221874u: goto label_221874;
        case 0x221878u: goto label_221878;
        case 0x22187cu: goto label_22187c;
        case 0x221880u: goto label_221880;
        case 0x221884u: goto label_221884;
        case 0x221888u: goto label_221888;
        case 0x22188cu: goto label_22188c;
        case 0x221890u: goto label_221890;
        case 0x221894u: goto label_221894;
        case 0x221898u: goto label_221898;
        case 0x22189cu: goto label_22189c;
        case 0x2218a0u: goto label_2218a0;
        case 0x2218a4u: goto label_2218a4;
        case 0x2218a8u: goto label_2218a8;
        case 0x2218acu: goto label_2218ac;
        case 0x2218b0u: goto label_2218b0;
        case 0x2218b4u: goto label_2218b4;
        case 0x2218b8u: goto label_2218b8;
        case 0x2218bcu: goto label_2218bc;
        case 0x2218c0u: goto label_2218c0;
        case 0x2218c4u: goto label_2218c4;
        case 0x2218c8u: goto label_2218c8;
        case 0x2218ccu: goto label_2218cc;
        case 0x2218d0u: goto label_2218d0;
        case 0x2218d4u: goto label_2218d4;
        case 0x2218d8u: goto label_2218d8;
        case 0x2218dcu: goto label_2218dc;
        case 0x2218e0u: goto label_2218e0;
        case 0x2218e4u: goto label_2218e4;
        case 0x2218e8u: goto label_2218e8;
        case 0x2218ecu: goto label_2218ec;
        case 0x2218f0u: goto label_2218f0;
        case 0x2218f4u: goto label_2218f4;
        case 0x2218f8u: goto label_2218f8;
        case 0x2218fcu: goto label_2218fc;
        case 0x221900u: goto label_221900;
        case 0x221904u: goto label_221904;
        case 0x221908u: goto label_221908;
        case 0x22190cu: goto label_22190c;
        case 0x221910u: goto label_221910;
        case 0x221914u: goto label_221914;
        case 0x221918u: goto label_221918;
        case 0x22191cu: goto label_22191c;
        case 0x221920u: goto label_221920;
        case 0x221924u: goto label_221924;
        case 0x221928u: goto label_221928;
        case 0x22192cu: goto label_22192c;
        case 0x221930u: goto label_221930;
        case 0x221934u: goto label_221934;
        case 0x221938u: goto label_221938;
        case 0x22193cu: goto label_22193c;
        case 0x221940u: goto label_221940;
        case 0x221944u: goto label_221944;
        case 0x221948u: goto label_221948;
        case 0x22194cu: goto label_22194c;
        case 0x221950u: goto label_221950;
        case 0x221954u: goto label_221954;
        case 0x221958u: goto label_221958;
        case 0x22195cu: goto label_22195c;
        case 0x221960u: goto label_221960;
        case 0x221964u: goto label_221964;
        case 0x221968u: goto label_221968;
        case 0x22196cu: goto label_22196c;
        case 0x221970u: goto label_221970;
        case 0x221974u: goto label_221974;
        case 0x221978u: goto label_221978;
        case 0x22197cu: goto label_22197c;
        case 0x221980u: goto label_221980;
        case 0x221984u: goto label_221984;
        case 0x221988u: goto label_221988;
        case 0x22198cu: goto label_22198c;
        case 0x221990u: goto label_221990;
        case 0x221994u: goto label_221994;
        case 0x221998u: goto label_221998;
        case 0x22199cu: goto label_22199c;
        case 0x2219a0u: goto label_2219a0;
        case 0x2219a4u: goto label_2219a4;
        case 0x2219a8u: goto label_2219a8;
        case 0x2219acu: goto label_2219ac;
        case 0x2219b0u: goto label_2219b0;
        case 0x2219b4u: goto label_2219b4;
        case 0x2219b8u: goto label_2219b8;
        case 0x2219bcu: goto label_2219bc;
        case 0x2219c0u: goto label_2219c0;
        case 0x2219c4u: goto label_2219c4;
        case 0x2219c8u: goto label_2219c8;
        case 0x2219ccu: goto label_2219cc;
        case 0x2219d0u: goto label_2219d0;
        case 0x2219d4u: goto label_2219d4;
        case 0x2219d8u: goto label_2219d8;
        case 0x2219dcu: goto label_2219dc;
        case 0x2219e0u: goto label_2219e0;
        case 0x2219e4u: goto label_2219e4;
        case 0x2219e8u: goto label_2219e8;
        case 0x2219ecu: goto label_2219ec;
        case 0x2219f0u: goto label_2219f0;
        case 0x2219f4u: goto label_2219f4;
        case 0x2219f8u: goto label_2219f8;
        case 0x2219fcu: goto label_2219fc;
        case 0x221a00u: goto label_221a00;
        case 0x221a04u: goto label_221a04;
        case 0x221a08u: goto label_221a08;
        case 0x221a0cu: goto label_221a0c;
        case 0x221a10u: goto label_221a10;
        case 0x221a14u: goto label_221a14;
        case 0x221a18u: goto label_221a18;
        case 0x221a1cu: goto label_221a1c;
        case 0x221a20u: goto label_221a20;
        case 0x221a24u: goto label_221a24;
        case 0x221a28u: goto label_221a28;
        case 0x221a2cu: goto label_221a2c;
        case 0x221a30u: goto label_221a30;
        case 0x221a34u: goto label_221a34;
        case 0x221a38u: goto label_221a38;
        case 0x221a3cu: goto label_221a3c;
        case 0x221a40u: goto label_221a40;
        case 0x221a44u: goto label_221a44;
        case 0x221a48u: goto label_221a48;
        case 0x221a4cu: goto label_221a4c;
        case 0x221a50u: goto label_221a50;
        case 0x221a54u: goto label_221a54;
        case 0x221a58u: goto label_221a58;
        case 0x221a5cu: goto label_221a5c;
        case 0x221a60u: goto label_221a60;
        case 0x221a64u: goto label_221a64;
        case 0x221a68u: goto label_221a68;
        case 0x221a6cu: goto label_221a6c;
        case 0x221a70u: goto label_221a70;
        case 0x221a74u: goto label_221a74;
        case 0x221a78u: goto label_221a78;
        case 0x221a7cu: goto label_221a7c;
        case 0x221a80u: goto label_221a80;
        case 0x221a84u: goto label_221a84;
        case 0x221a88u: goto label_221a88;
        case 0x221a8cu: goto label_221a8c;
        case 0x221a90u: goto label_221a90;
        case 0x221a94u: goto label_221a94;
        case 0x221a98u: goto label_221a98;
        case 0x221a9cu: goto label_221a9c;
        case 0x221aa0u: goto label_221aa0;
        case 0x221aa4u: goto label_221aa4;
        case 0x221aa8u: goto label_221aa8;
        case 0x221aacu: goto label_221aac;
        case 0x221ab0u: goto label_221ab0;
        case 0x221ab4u: goto label_221ab4;
        case 0x221ab8u: goto label_221ab8;
        case 0x221abcu: goto label_221abc;
        case 0x221ac0u: goto label_221ac0;
        case 0x221ac4u: goto label_221ac4;
        case 0x221ac8u: goto label_221ac8;
        case 0x221accu: goto label_221acc;
        case 0x221ad0u: goto label_221ad0;
        case 0x221ad4u: goto label_221ad4;
        case 0x221ad8u: goto label_221ad8;
        case 0x221adcu: goto label_221adc;
        case 0x221ae0u: goto label_221ae0;
        case 0x221ae4u: goto label_221ae4;
        case 0x221ae8u: goto label_221ae8;
        case 0x221aecu: goto label_221aec;
        case 0x221af0u: goto label_221af0;
        case 0x221af4u: goto label_221af4;
        case 0x221af8u: goto label_221af8;
        case 0x221afcu: goto label_221afc;
        case 0x221b00u: goto label_221b00;
        case 0x221b04u: goto label_221b04;
        case 0x221b08u: goto label_221b08;
        case 0x221b0cu: goto label_221b0c;
        case 0x221b10u: goto label_221b10;
        case 0x221b14u: goto label_221b14;
        case 0x221b18u: goto label_221b18;
        case 0x221b1cu: goto label_221b1c;
        case 0x221b20u: goto label_221b20;
        case 0x221b24u: goto label_221b24;
        case 0x221b28u: goto label_221b28;
        case 0x221b2cu: goto label_221b2c;
        case 0x221b30u: goto label_221b30;
        case 0x221b34u: goto label_221b34;
        case 0x221b38u: goto label_221b38;
        case 0x221b3cu: goto label_221b3c;
        case 0x221b40u: goto label_221b40;
        case 0x221b44u: goto label_221b44;
        case 0x221b48u: goto label_221b48;
        case 0x221b4cu: goto label_221b4c;
        case 0x221b50u: goto label_221b50;
        case 0x221b54u: goto label_221b54;
        case 0x221b58u: goto label_221b58;
        case 0x221b5cu: goto label_221b5c;
        case 0x221b60u: goto label_221b60;
        case 0x221b64u: goto label_221b64;
        case 0x221b68u: goto label_221b68;
        case 0x221b6cu: goto label_221b6c;
        case 0x221b70u: goto label_221b70;
        case 0x221b74u: goto label_221b74;
        case 0x221b78u: goto label_221b78;
        case 0x221b7cu: goto label_221b7c;
        case 0x221b80u: goto label_221b80;
        case 0x221b84u: goto label_221b84;
        case 0x221b88u: goto label_221b88;
        case 0x221b8cu: goto label_221b8c;
        case 0x221b90u: goto label_221b90;
        case 0x221b94u: goto label_221b94;
        case 0x221b98u: goto label_221b98;
        case 0x221b9cu: goto label_221b9c;
        case 0x221ba0u: goto label_221ba0;
        case 0x221ba4u: goto label_221ba4;
        case 0x221ba8u: goto label_221ba8;
        case 0x221bacu: goto label_221bac;
        case 0x221bb0u: goto label_221bb0;
        case 0x221bb4u: goto label_221bb4;
        case 0x221bb8u: goto label_221bb8;
        case 0x221bbcu: goto label_221bbc;
        case 0x221bc0u: goto label_221bc0;
        case 0x221bc4u: goto label_221bc4;
        case 0x221bc8u: goto label_221bc8;
        case 0x221bccu: goto label_221bcc;
        case 0x221bd0u: goto label_221bd0;
        case 0x221bd4u: goto label_221bd4;
        case 0x221bd8u: goto label_221bd8;
        case 0x221bdcu: goto label_221bdc;
        case 0x221be0u: goto label_221be0;
        case 0x221be4u: goto label_221be4;
        case 0x221be8u: goto label_221be8;
        case 0x221becu: goto label_221bec;
        case 0x221bf0u: goto label_221bf0;
        case 0x221bf4u: goto label_221bf4;
        case 0x221bf8u: goto label_221bf8;
        case 0x221bfcu: goto label_221bfc;
        case 0x221c00u: goto label_221c00;
        case 0x221c04u: goto label_221c04;
        case 0x221c08u: goto label_221c08;
        case 0x221c0cu: goto label_221c0c;
        case 0x221c10u: goto label_221c10;
        case 0x221c14u: goto label_221c14;
        case 0x221c18u: goto label_221c18;
        case 0x221c1cu: goto label_221c1c;
        case 0x221c20u: goto label_221c20;
        case 0x221c24u: goto label_221c24;
        case 0x221c28u: goto label_221c28;
        case 0x221c2cu: goto label_221c2c;
        case 0x221c30u: goto label_221c30;
        case 0x221c34u: goto label_221c34;
        case 0x221c38u: goto label_221c38;
        case 0x221c3cu: goto label_221c3c;
        case 0x221c40u: goto label_221c40;
        case 0x221c44u: goto label_221c44;
        case 0x221c48u: goto label_221c48;
        case 0x221c4cu: goto label_221c4c;
        case 0x221c50u: goto label_221c50;
        case 0x221c54u: goto label_221c54;
        case 0x221c58u: goto label_221c58;
        case 0x221c5cu: goto label_221c5c;
        case 0x221c60u: goto label_221c60;
        case 0x221c64u: goto label_221c64;
        case 0x221c68u: goto label_221c68;
        case 0x221c6cu: goto label_221c6c;
        case 0x221c70u: goto label_221c70;
        case 0x221c74u: goto label_221c74;
        case 0x221c78u: goto label_221c78;
        case 0x221c7cu: goto label_221c7c;
        case 0x221c80u: goto label_221c80;
        case 0x221c84u: goto label_221c84;
        case 0x221c88u: goto label_221c88;
        case 0x221c8cu: goto label_221c8c;
        case 0x221c90u: goto label_221c90;
        case 0x221c94u: goto label_221c94;
        case 0x221c98u: goto label_221c98;
        case 0x221c9cu: goto label_221c9c;
        case 0x221ca0u: goto label_221ca0;
        case 0x221ca4u: goto label_221ca4;
        case 0x221ca8u: goto label_221ca8;
        case 0x221cacu: goto label_221cac;
        case 0x221cb0u: goto label_221cb0;
        case 0x221cb4u: goto label_221cb4;
        case 0x221cb8u: goto label_221cb8;
        case 0x221cbcu: goto label_221cbc;
        case 0x221cc0u: goto label_221cc0;
        case 0x221cc4u: goto label_221cc4;
        case 0x221cc8u: goto label_221cc8;
        case 0x221cccu: goto label_221ccc;
        case 0x221cd0u: goto label_221cd0;
        case 0x221cd4u: goto label_221cd4;
        case 0x221cd8u: goto label_221cd8;
        case 0x221cdcu: goto label_221cdc;
        case 0x221ce0u: goto label_221ce0;
        case 0x221ce4u: goto label_221ce4;
        case 0x221ce8u: goto label_221ce8;
        case 0x221cecu: goto label_221cec;
        case 0x221cf0u: goto label_221cf0;
        case 0x221cf4u: goto label_221cf4;
        case 0x221cf8u: goto label_221cf8;
        case 0x221cfcu: goto label_221cfc;
        case 0x221d00u: goto label_221d00;
        case 0x221d04u: goto label_221d04;
        case 0x221d08u: goto label_221d08;
        case 0x221d0cu: goto label_221d0c;
        case 0x221d10u: goto label_221d10;
        case 0x221d14u: goto label_221d14;
        case 0x221d18u: goto label_221d18;
        case 0x221d1cu: goto label_221d1c;
        case 0x221d20u: goto label_221d20;
        case 0x221d24u: goto label_221d24;
        case 0x221d28u: goto label_221d28;
        case 0x221d2cu: goto label_221d2c;
        case 0x221d30u: goto label_221d30;
        case 0x221d34u: goto label_221d34;
        case 0x221d38u: goto label_221d38;
        case 0x221d3cu: goto label_221d3c;
        case 0x221d40u: goto label_221d40;
        case 0x221d44u: goto label_221d44;
        case 0x221d48u: goto label_221d48;
        case 0x221d4cu: goto label_221d4c;
        case 0x221d50u: goto label_221d50;
        case 0x221d54u: goto label_221d54;
        case 0x221d58u: goto label_221d58;
        case 0x221d5cu: goto label_221d5c;
        case 0x221d60u: goto label_221d60;
        case 0x221d64u: goto label_221d64;
        case 0x221d68u: goto label_221d68;
        case 0x221d6cu: goto label_221d6c;
        case 0x221d70u: goto label_221d70;
        case 0x221d74u: goto label_221d74;
        case 0x221d78u: goto label_221d78;
        case 0x221d7cu: goto label_221d7c;
        case 0x221d80u: goto label_221d80;
        case 0x221d84u: goto label_221d84;
        case 0x221d88u: goto label_221d88;
        case 0x221d8cu: goto label_221d8c;
        case 0x221d90u: goto label_221d90;
        case 0x221d94u: goto label_221d94;
        case 0x221d98u: goto label_221d98;
        case 0x221d9cu: goto label_221d9c;
        case 0x221da0u: goto label_221da0;
        case 0x221da4u: goto label_221da4;
        case 0x221da8u: goto label_221da8;
        case 0x221dacu: goto label_221dac;
        case 0x221db0u: goto label_221db0;
        case 0x221db4u: goto label_221db4;
        case 0x221db8u: goto label_221db8;
        case 0x221dbcu: goto label_221dbc;
        case 0x221dc0u: goto label_221dc0;
        case 0x221dc4u: goto label_221dc4;
        case 0x221dc8u: goto label_221dc8;
        case 0x221dccu: goto label_221dcc;
        case 0x221dd0u: goto label_221dd0;
        case 0x221dd4u: goto label_221dd4;
        case 0x221dd8u: goto label_221dd8;
        case 0x221ddcu: goto label_221ddc;
        case 0x221de0u: goto label_221de0;
        case 0x221de4u: goto label_221de4;
        case 0x221de8u: goto label_221de8;
        default: break;
    }

    ctx->pc = 0x220890u;

label_220890:
    // 0x220890: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x220890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_220894:
    // 0x220894: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x220894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
label_220898:
    // 0x220898: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x220898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22089c:
    // 0x22089c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22089cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2208a0:
    // 0x2208a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2208a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2208a4:
    // 0x2208a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2208a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2208a8:
    // 0x2208a8: 0xafa401a8  sw          $a0, 0x1A8($sp)
    ctx->pc = 0x2208a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 4));
label_2208ac:
    // 0x2208ac: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2208acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_2208b0:
    // 0x2208b0: 0x2463dbc0  addiu       $v1, $v1, -0x2440
    ctx->pc = 0x2208b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
label_2208b4:
    // 0x2208b4: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x2208b4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2208b8:
    // 0x2208b8: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x2208b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2208bc:
    // 0x2208bc: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2208bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2208c0:
    // 0x2208c0: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x2208c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_2208c4:
    // 0x2208c4: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_2208c8:
    if (ctx->pc == 0x2208C8u) {
        ctx->pc = 0x2208CCu;
        goto label_2208cc;
    }
    ctx->pc = 0x2208C4u;
    {
        const bool branch_taken_0x2208c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2208c4) {
            ctx->pc = 0x220934u;
            goto label_220934;
        }
    }
    ctx->pc = 0x2208CCu;
label_2208cc:
    // 0x2208cc: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x2208ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2208d0:
    // 0x2208d0: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x2208d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_2208d4:
    // 0x2208d4: 0x3c06469c  lui         $a2, 0x469C
    ctx->pc = 0x2208d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18076 << 16));
label_2208d8:
    // 0x2208d8: 0x34c44000  ori         $a0, $a2, 0x4000
    ctx->pc = 0x2208d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
label_2208dc:
    // 0x2208dc: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2208dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2208e0:
    // 0x2208e0: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x2208e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_2208e4:
    // 0x2208e4: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x2208e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_2208e8:
    // 0x2208e8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2208e8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2208ec:
    // 0x2208ec: 0xc067b18  jal         func_19EC60
label_2208f0:
    if (ctx->pc == 0x2208F0u) {
        ctx->pc = 0x2208F4u;
        goto label_2208f4;
    }
    ctx->pc = 0x2208ECu;
    SET_GPR_U32(ctx, 31, 0x2208F4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x2208ECu, 0x2208F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2208F4u;
label_2208f4:
    // 0x2208f4: 0x8fa701a8  lw          $a3, 0x1A8($sp)
    ctx->pc = 0x2208f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2208f8:
    // 0x2208f8: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x2208f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_2208fc:
    // 0x2208fc: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x2208fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
label_220900:
    // 0x220900: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x220900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_220904:
    // 0x220904: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x220904u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
label_220908:
    // 0x220908: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_22090c:
    // 0x22090c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22090cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_220910:
    // 0x220910: 0x8c720030  lw          $s2, 0x30($v1)
    ctx->pc = 0x220910u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_220914:
    // 0x220914: 0x3650c000  ori         $s0, $s2, 0xC000
    ctx->pc = 0x220914u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)49152);
label_220918:
    // 0x220918: 0xac700030  sw          $s0, 0x30($v1)
    ctx->pc = 0x220918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 16));
label_22091c:
    // 0x22091c: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x22091cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220920:
    // 0x220920: 0x24861330  addiu       $a2, $a0, 0x1330
    ctx->pc = 0x220920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_220924:
    // 0x220924: 0x8cc40030  lw          $a0, 0x30($a2)
    ctx->pc = 0x220924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_220928:
    // 0x220928: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x220928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_22092c:
    // 0x22092c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x22092cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_220930:
    // 0x220930: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x220930u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
label_220934:
    // 0x220934: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x220934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220938:
    // 0x220938: 0x908611ee  lbu         $a2, 0x11EE($a0)
    ctx->pc = 0x220938u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4590)));
label_22093c:
    // 0x22093c: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
label_220940:
    if (ctx->pc == 0x220940u) {
        ctx->pc = 0x220944u;
        goto label_220944;
    }
    ctx->pc = 0x22093Cu;
    {
        const bool branch_taken_0x22093c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x22093c) {
            ctx->pc = 0x220954u;
            goto label_220954;
        }
    }
    ctx->pc = 0x220944u;
label_220944:
    // 0x220944: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220948:
    // 0x220948: 0xa46011f4  sh          $zero, 0x11F4($v1)
    ctx->pc = 0x220948u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4596), (uint16_t)GPR_U32(ctx, 0));
label_22094c:
    // 0x22094c: 0x1000051f  b           . + 4 + (0x51F << 2)
label_220950:
    if (ctx->pc == 0x220950u) {
        ctx->pc = 0x220954u;
        goto label_220954;
    }
    ctx->pc = 0x22094Cu;
    {
        const bool branch_taken_0x22094c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22094c) {
            ctx->pc = 0x221DCCu;
            goto label_221dcc;
        }
    }
    ctx->pc = 0x220954u;
label_220954:
    // 0x220954: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x220954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_220958:
    // 0x220958: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x220958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_22095c:
    // 0x22095c: 0x30830200  andi        $v1, $a0, 0x200
    ctx->pc = 0x22095cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
label_220960:
    // 0x220960: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
label_220964:
    if (ctx->pc == 0x220964u) {
        ctx->pc = 0x220968u;
        goto label_220968;
    }
    ctx->pc = 0x220960u;
    {
        const bool branch_taken_0x220960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x220960) {
            ctx->pc = 0x220A2Cu;
            goto label_220a2c;
        }
    }
    ctx->pc = 0x220968u;
label_220968:
    // 0x220968: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x220968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_22096c:
    // 0x22096c: 0x944211f4  lhu         $v0, 0x11F4($v0)
    ctx->pc = 0x22096cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4596)));
label_220970:
    // 0x220970: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x220970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_220974:
    // 0x220974: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
label_220978:
    if (ctx->pc == 0x220978u) {
        ctx->pc = 0x22097Cu;
        goto label_22097c;
    }
    ctx->pc = 0x220974u;
    {
        const bool branch_taken_0x220974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x220974) {
            ctx->pc = 0x2209D8u;
            goto label_2209d8;
        }
    }
    ctx->pc = 0x22097Cu;
label_22097c:
    // 0x22097c: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x22097cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220980:
    // 0x220980: 0x844411f2  lh          $a0, 0x11F2($v0)
    ctx->pc = 0x220980u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
label_220984:
    // 0x220984: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x220984u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
label_220988:
    // 0x220988: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x220988u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_22098c:
    // 0x22098c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x22098cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_220990:
    // 0x220990: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x220990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
label_220994:
    // 0x220994: 0x34626667  ori         $v0, $v1, 0x6667
    ctx->pc = 0x220994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
label_220998:
    // 0x220998: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x220998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_22099c:
    // 0x22099c: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x22099cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_2209a0:
    // 0x2209a0: 0x0  nop
    ctx->pc = 0x2209a0u;
    // NOP
label_2209a4:
    // 0x2209a4: 0x2010  mfhi        $a0
    ctx->pc = 0x2209a4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2209a8:
    // 0x2209a8: 0x43083  sra         $a2, $a0, 2
    ctx->pc = 0x2209a8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 2));
label_2209ac:
    // 0x2209ac: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x2209acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2209b0:
    // 0x2209b0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2209b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2209b4:
    // 0x2209b4: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x2209b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_2209b8:
    // 0x2209b8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2209b8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_2209bc:
    // 0x2209bc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2209bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_2209c0:
    // 0x2209c0: 0x8423ef68  lh          $v1, -0x1098($at)
    ctx->pc = 0x2209c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963048)));
label_2209c4:
    // 0x2209c4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2209c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2209c8:
    // 0x2209c8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2209c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_2209cc:
    // 0x2209cc: 0xa424ef68  sh          $a0, -0x1098($at)
    ctx->pc = 0x2209ccu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294963048), (uint16_t)GPR_U32(ctx, 4));
label_2209d0:
    // 0x2209d0: 0x10000016  b           . + 4 + (0x16 << 2)
label_2209d4:
    if (ctx->pc == 0x2209D4u) {
        ctx->pc = 0x2209D8u;
        goto label_2209d8;
    }
    ctx->pc = 0x2209D0u;
    {
        const bool branch_taken_0x2209d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2209d0) {
            ctx->pc = 0x220A2Cu;
            goto label_220a2c;
        }
    }
    ctx->pc = 0x2209D8u;
label_2209d8:
    // 0x2209d8: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x2209d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2209dc:
    // 0x2209dc: 0x84c411f2  lh          $a0, 0x11F2($a2)
    ctx->pc = 0x2209dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4594)));
label_2209e0:
    // 0x2209e0: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x2209e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_2209e4:
    // 0x2209e4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2209e4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_2209e8:
    // 0x2209e8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2209e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2209ec:
    // 0x2209ec: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x2209ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
label_2209f0:
    // 0x2209f0: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x2209f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
label_2209f4:
    // 0x2209f4: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x2209f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2209f8:
    // 0x2209f8: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x2209f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_2209fc:
    // 0x2209fc: 0x0  nop
    ctx->pc = 0x2209fcu;
    // NOP
label_220a00:
    // 0x220a00: 0x2810  mfhi        $a1
    ctx->pc = 0x220a00u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_220a04:
    // 0x220a04: 0x530c3  sra         $a2, $a1, 3
    ctx->pc = 0x220a04u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 3));
label_220a08:
    // 0x220a08: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x220a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_220a0c:
    // 0x220a0c: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x220a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_220a10:
    // 0x220a10: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x220a10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
label_220a14:
    // 0x220a14: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x220a14u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_220a18:
    // 0x220a18: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x220a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_220a1c:
    // 0x220a1c: 0x8423ef68  lh          $v1, -0x1098($at)
    ctx->pc = 0x220a1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963048)));
label_220a20:
    // 0x220a20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x220a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_220a24:
    // 0x220a24: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x220a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_220a28:
    // 0x220a28: 0xa423ef68  sh          $v1, -0x1098($at)
    ctx->pc = 0x220a28u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294963048), (uint16_t)GPR_U32(ctx, 3));
label_220a2c:
    // 0x220a2c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x220a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_220a30:
    // 0x220a30: 0x8423ef68  lh          $v1, -0x1098($at)
    ctx->pc = 0x220a30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963048)));
label_220a34:
    // 0x220a34: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x220a34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
label_220a38:
    // 0x220a38: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x220a38u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_220a3c:
    // 0x220a3c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x220a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_220a40:
    // 0x220a40: 0x8423ef6a  lh          $v1, -0x1096($at)
    ctx->pc = 0x220a40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963050)));
label_220a44:
    // 0x220a44: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x220a44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_220a48:
    // 0x220a48: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x220a48u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_220a4c:
    // 0x220a4c: 0x85082a  slt         $at, $a0, $a1
    ctx->pc = 0x220a4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_220a50:
    // 0x220a50: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_220a54:
    if (ctx->pc == 0x220A54u) {
        ctx->pc = 0x220A58u;
        goto label_220a58;
    }
    ctx->pc = 0x220A50u;
    {
        const bool branch_taken_0x220a50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x220a50) {
            ctx->pc = 0x220A68u;
            goto label_220a68;
        }
    }
    ctx->pc = 0x220A58u;
label_220a58:
    // 0x220a58: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x220a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_220a5c:
    // 0x220a5c: 0x8423ef6a  lh          $v1, -0x1096($at)
    ctx->pc = 0x220a5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963050)));
label_220a60:
    // 0x220a60: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x220a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_220a64:
    // 0x220a64: 0xa423ef68  sh          $v1, -0x1098($at)
    ctx->pc = 0x220a64u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294963048), (uint16_t)GPR_U32(ctx, 3));
label_220a68:
    // 0x220a68: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220a6c:
    // 0x220a6c: 0x8c711210  lw          $s1, 0x1210($v1)
    ctx->pc = 0x220a6cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
label_220a70:
    // 0x220a70: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220a74:
    // 0x220a74: 0x906411f0  lbu         $a0, 0x11F0($v1)
    ctx->pc = 0x220a74u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4592)));
label_220a78:
    // 0x220a78: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x220a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_220a7c:
    // 0x220a7c: 0x30640008  andi        $a0, $v1, 0x8
    ctx->pc = 0x220a7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_220a80:
    // 0x220a80: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_220a84:
    if (ctx->pc == 0x220A84u) {
        ctx->pc = 0x220A88u;
        goto label_220a88;
    }
    ctx->pc = 0x220A80u;
    {
        const bool branch_taken_0x220a80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x220a80) {
            ctx->pc = 0x220AB4u;
            goto label_220ab4;
        }
    }
    ctx->pc = 0x220A88u;
label_220a88:
    // 0x220a88: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220a8c:
    // 0x220a8c: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x220a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_220a90:
    // 0x220a90: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x220a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_220a94:
    // 0x220a94: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x220a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_220a98:
    // 0x220a98: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x220a98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_220a9c:
    // 0x220a9c: 0x2404030a  addiu       $a0, $zero, 0x30A
    ctx->pc = 0x220a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 778));
label_220aa0:
    // 0x220aa0: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x220aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_220aa4:
    // 0x220aa4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x220aa4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_220aa8:
    // 0x220aa8: 0xc067b18  jal         func_19EC60
label_220aac:
    if (ctx->pc == 0x220AACu) {
        ctx->pc = 0x220AB0u;
        goto label_220ab0;
    }
    ctx->pc = 0x220AA8u;
    SET_GPR_U32(ctx, 31, 0x220AB0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x220AA8u, 0x220AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220AB0u;
label_220ab0:
    // 0x220ab0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x220ab0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_220ab4:
    // 0x220ab4: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220ab8:
    // 0x220ab8: 0x24661330  addiu       $a2, $v1, 0x1330
    ctx->pc = 0x220ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_220abc:
    // 0x220abc: 0x8cc40030  lw          $a0, 0x30($a2)
    ctx->pc = 0x220abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_220ac0:
    // 0x220ac0: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x220ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
label_220ac4:
    // 0x220ac4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x220ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_220ac8:
    // 0x220ac8: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x220ac8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_220acc:
    // 0x220acc: 0xacc50030  sw          $a1, 0x30($a2)
    ctx->pc = 0x220accu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 5));
label_220ad0:
    // 0x220ad0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x220ad0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_220ad4:
    // 0x220ad4: 0x0  nop
    ctx->pc = 0x220ad4u;
    // NOP
label_220ad8:
    // 0x220ad8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x220ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_220adc:
    // 0x220adc: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220ae0:
    // 0x220ae0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x220ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_220ae4:
    // 0x220ae4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x220ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_220ae8:
    // 0x220ae8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x220ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_220aec:
    // 0x220aec: 0xc05ccfc  jal         func_1733F0
label_220af0:
    if (ctx->pc == 0x220AF0u) {
        ctx->pc = 0x220AF4u;
        goto label_220af4;
    }
    ctx->pc = 0x220AECu;
    SET_GPR_U32(ctx, 31, 0x220AF4u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x220AECu, 0x220AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220AF4u;
label_220af4:
    // 0x220af4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x220af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_220af8:
    // 0x220af8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x220af8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_220afc:
    // 0x220afc: 0x0  nop
    ctx->pc = 0x220afcu;
    // NOP
label_220b00:
    // 0x220b00: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x220b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_220b04:
    // 0x220b04: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x220b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_220b08:
    // 0x220b08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x220b08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_220b0c:
    // 0x220b0c: 0x0  nop
    ctx->pc = 0x220b0cu;
    // NOP
label_220b10:
    // 0x220b10: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x220b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_220b14:
    // 0x220b14: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x220b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220b18:
    // 0x220b18: 0x948511f4  lhu         $a1, 0x11F4($a0)
    ctx->pc = 0x220b18u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4596)));
label_220b1c:
    // 0x220b1c: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x220b1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_220b20:
    // 0x220b20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x220b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_220b24:
    // 0x220b24: 0x14830127  bne         $a0, $v1, . + 4 + (0x127 << 2)
label_220b28:
    if (ctx->pc == 0x220B28u) {
        ctx->pc = 0x220B2Cu;
        goto label_220b2c;
    }
    ctx->pc = 0x220B24u;
    {
        const bool branch_taken_0x220b24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x220b24) {
            ctx->pc = 0x220FC4u;
            goto label_220fc4;
        }
    }
    ctx->pc = 0x220B2Cu;
label_220b2c:
    // 0x220b2c: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x220b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220b30:
    // 0x220b30: 0xa0a011ee  sb          $zero, 0x11EE($a1)
    ctx->pc = 0x220b30u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4590), (uint8_t)GPR_U32(ctx, 0));
label_220b34:
    // 0x220b34: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x220b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_220b38:
    // 0x220b38: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220b3c:
    // 0x220b3c: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x220b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_220b40:
    // 0x220b40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x220b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_220b44:
    // 0x220b44: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x220b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_220b48:
    // 0x220b48: 0x30648000  andi        $a0, $v1, 0x8000
    ctx->pc = 0x220b48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_220b4c:
    // 0x220b4c: 0x14800104  bnez        $a0, . + 4 + (0x104 << 2)
label_220b50:
    if (ctx->pc == 0x220B50u) {
        ctx->pc = 0x220B54u;
        goto label_220b54;
    }
    ctx->pc = 0x220B4Cu;
    {
        const bool branch_taken_0x220b4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x220b4c) {
            ctx->pc = 0x220F60u;
            goto label_220f60;
        }
    }
    ctx->pc = 0x220B54u;
label_220b54:
    // 0x220b54: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220b58:
    // 0x220b58: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x220b58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
label_220b5c:
    // 0x220b5c: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x220b5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_220b60:
    // 0x220b60: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x220b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_220b64:
    // 0x220b64: 0x10a300da  beq         $a1, $v1, . + 4 + (0xDA << 2)
label_220b68:
    if (ctx->pc == 0x220B68u) {
        ctx->pc = 0x220B6Cu;
        goto label_220b6c;
    }
    ctx->pc = 0x220B64u;
    {
        const bool branch_taken_0x220b64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x220b64) {
            ctx->pc = 0x220ED0u;
            goto label_220ed0;
        }
    }
    ctx->pc = 0x220B6Cu;
label_220b6c:
    // 0x220b6c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x220b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_220b70:
    // 0x220b70: 0x10a400d7  beq         $a1, $a0, . + 4 + (0xD7 << 2)
label_220b74:
    if (ctx->pc == 0x220B74u) {
        ctx->pc = 0x220B78u;
        goto label_220b78;
    }
    ctx->pc = 0x220B70u;
    {
        const bool branch_taken_0x220b70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x220b70) {
            ctx->pc = 0x220ED0u;
            goto label_220ed0;
        }
    }
    ctx->pc = 0x220B78u;
label_220b78:
    // 0x220b78: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x220b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_220b7c:
    // 0x220b7c: 0x10a3007d  beq         $a1, $v1, . + 4 + (0x7D << 2)
label_220b80:
    if (ctx->pc == 0x220B80u) {
        ctx->pc = 0x220B84u;
        goto label_220b84;
    }
    ctx->pc = 0x220B7Cu;
    {
        const bool branch_taken_0x220b7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x220b7c) {
            ctx->pc = 0x220D74u;
            goto label_220d74;
        }
    }
    ctx->pc = 0x220B84u;
label_220b84:
    // 0x220b84: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x220b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_220b88:
    // 0x220b88: 0x10a3002a  beq         $a1, $v1, . + 4 + (0x2A << 2)
label_220b8c:
    if (ctx->pc == 0x220B8Cu) {
        ctx->pc = 0x220B90u;
        goto label_220b90;
    }
    ctx->pc = 0x220B88u;
    {
        const bool branch_taken_0x220b88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x220b88) {
            ctx->pc = 0x220C34u;
            goto label_220c34;
        }
    }
    ctx->pc = 0x220B90u;
label_220b90:
    // 0x220b90: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x220b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_220b94:
    // 0x220b94: 0x10a20027  beq         $a1, $v0, . + 4 + (0x27 << 2)
label_220b98:
    if (ctx->pc == 0x220B98u) {
        ctx->pc = 0x220B9Cu;
        goto label_220b9c;
    }
    ctx->pc = 0x220B94u;
    {
        const bool branch_taken_0x220b94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x220b94) {
            ctx->pc = 0x220C34u;
            goto label_220c34;
        }
    }
    ctx->pc = 0x220B9Cu;
label_220b9c:
    // 0x220b9c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x220b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_220ba0:
    // 0x220ba0: 0x10a20024  beq         $a1, $v0, . + 4 + (0x24 << 2)
label_220ba4:
    if (ctx->pc == 0x220BA4u) {
        ctx->pc = 0x220BA8u;
        goto label_220ba8;
    }
    ctx->pc = 0x220BA0u;
    {
        const bool branch_taken_0x220ba0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x220ba0) {
            ctx->pc = 0x220C34u;
            goto label_220c34;
        }
    }
    ctx->pc = 0x220BA8u;
label_220ba8:
    // 0x220ba8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x220ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_220bac:
    // 0x220bac: 0x10a20021  beq         $a1, $v0, . + 4 + (0x21 << 2)
label_220bb0:
    if (ctx->pc == 0x220BB0u) {
        ctx->pc = 0x220BB4u;
        goto label_220bb4;
    }
    ctx->pc = 0x220BACu;
    {
        const bool branch_taken_0x220bac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x220bac) {
            ctx->pc = 0x220C34u;
            goto label_220c34;
        }
    }
    ctx->pc = 0x220BB4u;
label_220bb4:
    // 0x220bb4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x220bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_220bb8:
    // 0x220bb8: 0x10a2001e  beq         $a1, $v0, . + 4 + (0x1E << 2)
label_220bbc:
    if (ctx->pc == 0x220BBCu) {
        ctx->pc = 0x220BC0u;
        goto label_220bc0;
    }
    ctx->pc = 0x220BB8u;
    {
        const bool branch_taken_0x220bb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x220bb8) {
            ctx->pc = 0x220C34u;
            goto label_220c34;
        }
    }
    ctx->pc = 0x220BC0u;
label_220bc0:
    // 0x220bc0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x220bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_220bc4:
    // 0x220bc4: 0x10a2001b  beq         $a1, $v0, . + 4 + (0x1B << 2)
label_220bc8:
    if (ctx->pc == 0x220BC8u) {
        ctx->pc = 0x220BCCu;
        goto label_220bcc;
    }
    ctx->pc = 0x220BC4u;
    {
        const bool branch_taken_0x220bc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x220bc4) {
            ctx->pc = 0x220C34u;
            goto label_220c34;
        }
    }
    ctx->pc = 0x220BCCu;
label_220bcc:
    // 0x220bcc: 0x10000001  b           . + 4 + (0x1 << 2)
label_220bd0:
    if (ctx->pc == 0x220BD0u) {
        ctx->pc = 0x220BD4u;
        goto label_220bd4;
    }
    ctx->pc = 0x220BCCu;
    {
        const bool branch_taken_0x220bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220bcc) {
            ctx->pc = 0x220BD4u;
            goto label_220bd4;
        }
    }
    ctx->pc = 0x220BD4u;
label_220bd4:
    // 0x220bd4: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x220bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220bd8:
    // 0x220bd8: 0xc4801200  lwc1        $f0, 0x1200($a0)
    ctx->pc = 0x220bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220bdc:
    // 0x220bdc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x220bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_220be0:
    // 0x220be0: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x220be0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220be4:
    // 0x220be4: 0xc4c01204  lwc1        $f0, 0x1204($a2)
    ctx->pc = 0x220be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220be8:
    // 0x220be8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x220be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_220bec:
    // 0x220bec: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x220becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220bf0:
    // 0x220bf0: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x220bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220bf4:
    // 0x220bf4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x220bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_220bf8:
    // 0x220bf8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x220bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_220bfc:
    // 0x220bfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x220bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_220c00:
    // 0x220c00: 0x0  nop
    ctx->pc = 0x220c00u;
    // NOP
label_220c04:
    // 0x220c04: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x220c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_220c08:
    // 0x220c08: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x220c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
label_220c0c:
    // 0x220c0c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x220c0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_220c10:
    // 0x220c10: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x220c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_220c14:
    // 0x220c14: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x220c14u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_220c18:
    // 0x220c18: 0xc062f5c  jal         func_18BD70
label_220c1c:
    if (ctx->pc == 0x220C1Cu) {
        ctx->pc = 0x220C20u;
        goto label_220c20;
    }
    ctx->pc = 0x220C18u;
    SET_GPR_U32(ctx, 31, 0x220C20u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x220C18u, 0x220C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220C20u;
label_220c20:
    // 0x220c20: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x220c20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_220c24:
    // 0x220c24: 0xc0630a8  jal         func_18C2A0
label_220c28:
    if (ctx->pc == 0x220C28u) {
        ctx->pc = 0x220C2Cu;
        goto label_220c2c;
    }
    ctx->pc = 0x220C24u;
    SET_GPR_U32(ctx, 31, 0x220C2Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x220C24u, 0x220C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220C2Cu;
label_220c2c:
    // 0x220c2c: 0x100000e3  b           . + 4 + (0xE3 << 2)
label_220c30:
    if (ctx->pc == 0x220C30u) {
        ctx->pc = 0x220C34u;
        goto label_220c34;
    }
    ctx->pc = 0x220C2Cu;
    {
        const bool branch_taken_0x220c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220c2c) {
            ctx->pc = 0x220FBCu;
            goto label_220fbc;
        }
    }
    ctx->pc = 0x220C34u;
label_220c34:
    // 0x220c34: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x220c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220c38:
    // 0x220c38: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x220c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220c3c:
    // 0x220c3c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x220c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_220c40:
    // 0x220c40: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220c44:
    // 0x220c44: 0xc4601204  lwc1        $f0, 0x1204($v1)
    ctx->pc = 0x220c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220c48:
    // 0x220c48: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x220c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_220c4c:
    // 0x220c4c: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x220c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220c50:
    // 0x220c50: 0xc4a01208  lwc1        $f0, 0x1208($a1)
    ctx->pc = 0x220c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220c54:
    // 0x220c54: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x220c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_220c58:
    // 0x220c58: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x220c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_220c5c:
    // 0x220c5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x220c5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_220c60:
    // 0x220c60: 0x0  nop
    ctx->pc = 0x220c60u;
    // NOP
label_220c64:
    // 0x220c64: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x220c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_220c68:
    // 0x220c68: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x220c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
label_220c6c:
    // 0x220c6c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x220c6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_220c70:
    // 0x220c70: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x220c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_220c74:
    // 0x220c74: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x220c74u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_220c78:
    // 0x220c78: 0xc062f5c  jal         func_18BD70
label_220c7c:
    if (ctx->pc == 0x220C7Cu) {
        ctx->pc = 0x220C80u;
        goto label_220c80;
    }
    ctx->pc = 0x220C78u;
    SET_GPR_U32(ctx, 31, 0x220C80u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x220C78u, 0x220C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220C80u;
label_220c80:
    // 0x220c80: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x220c80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_220c84:
    // 0x220c84: 0xc0630a8  jal         func_18C2A0
label_220c88:
    if (ctx->pc == 0x220C88u) {
        ctx->pc = 0x220C8Cu;
        goto label_220c8c;
    }
    ctx->pc = 0x220C84u;
    SET_GPR_U32(ctx, 31, 0x220C8Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x220C84u, 0x220C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220C8Cu;
label_220c8c:
    // 0x220c8c: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x220c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220c90:
    // 0x220c90: 0xc4c01200  lwc1        $f0, 0x1200($a2)
    ctx->pc = 0x220c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220c94:
    // 0x220c94: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x220c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_220c98:
    // 0x220c98: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x220c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220c9c:
    // 0x220c9c: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x220c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220ca0:
    // 0x220ca0: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x220ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_220ca4:
    // 0x220ca4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x220ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_220ca8:
    // 0x220ca8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x220ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_220cac:
    // 0x220cac: 0x0  nop
    ctx->pc = 0x220cacu;
    // NOP
label_220cb0:
    // 0x220cb0: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x220cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_220cb4:
    // 0x220cb4: 0x8fb101a8  lw          $s1, 0x1A8($sp)
    ctx->pc = 0x220cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220cb8:
    // 0x220cb8: 0xc6211204  lwc1        $f1, 0x1204($s1)
    ctx->pc = 0x220cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_220cbc:
    // 0x220cbc: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x220cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_220cc0:
    // 0x220cc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x220cc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_220cc4:
    // 0x220cc4: 0x0  nop
    ctx->pc = 0x220cc4u;
    // NOP
label_220cc8:
    // 0x220cc8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x220cc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_220ccc:
    // 0x220ccc: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x220cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_220cd0:
    // 0x220cd0: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x220cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
label_220cd4:
    // 0x220cd4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x220cd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_220cd8:
    // 0x220cd8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x220cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_220cdc:
    // 0x220cdc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x220cdcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_220ce0:
    // 0x220ce0: 0xc062f5c  jal         func_18BD70
label_220ce4:
    if (ctx->pc == 0x220CE4u) {
        ctx->pc = 0x220CE8u;
        goto label_220ce8;
    }
    ctx->pc = 0x220CE0u;
    SET_GPR_U32(ctx, 31, 0x220CE8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x220CE0u, 0x220CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220CE8u;
label_220ce8:
    // 0x220ce8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x220ce8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_220cec:
    // 0x220cec: 0xc0630a8  jal         func_18C2A0
label_220cf0:
    if (ctx->pc == 0x220CF0u) {
        ctx->pc = 0x220CF4u;
        goto label_220cf4;
    }
    ctx->pc = 0x220CECu;
    SET_GPR_U32(ctx, 31, 0x220CF4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x220CECu, 0x220CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220CF4u;
label_220cf4:
    // 0x220cf4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x220cf4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_220cf8:
    // 0x220cf8: 0x8fa701a8  lw          $a3, 0x1A8($sp)
    ctx->pc = 0x220cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220cfc:
    // 0x220cfc: 0xc4e11204  lwc1        $f1, 0x1204($a3)
    ctx->pc = 0x220cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_220d00:
    // 0x220d00: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x220d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_220d04:
    // 0x220d04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x220d04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_220d08:
    // 0x220d08: 0x0  nop
    ctx->pc = 0x220d08u;
    // NOP
label_220d0c:
    // 0x220d0c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x220d0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_220d10:
    // 0x220d10: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x220d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_220d14:
    // 0x220d14: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x220d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
label_220d18:
    // 0x220d18: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x220d18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_220d1c:
    // 0x220d1c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x220d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_220d20:
    // 0x220d20: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x220d20u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_220d24:
    // 0x220d24: 0xc062f5c  jal         func_18BD70
label_220d28:
    if (ctx->pc == 0x220D28u) {
        ctx->pc = 0x220D2Cu;
        goto label_220d2c;
    }
    ctx->pc = 0x220D24u;
    SET_GPR_U32(ctx, 31, 0x220D2Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x220D24u, 0x220D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220D2Cu;
label_220d2c:
    // 0x220d2c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x220d2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_220d30:
    // 0x220d30: 0xc0630a8  jal         func_18C2A0
label_220d34:
    if (ctx->pc == 0x220D34u) {
        ctx->pc = 0x220D38u;
        goto label_220d38;
    }
    ctx->pc = 0x220D30u;
    SET_GPR_U32(ctx, 31, 0x220D38u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x220D30u, 0x220D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220D38u;
label_220d38:
    // 0x220d38: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x220d38u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_220d3c:
    // 0x220d3c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x220d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_220d40:
    // 0x220d40: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220d44:
    // 0x220d44: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x220d44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_220d48:
    // 0x220d48: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x220d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_220d4c:
    // 0x220d4c: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220d50:
    // 0x220d50: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x220d50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_220d54:
    // 0x220d54: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220d58:
    // 0x220d58: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x220d58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_220d5c:
    // 0x220d5c: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220d60:
    // 0x220d60: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x220d60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_220d64:
    // 0x220d64: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x220d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220d68:
    // 0x220d68: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x220d68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_220d6c:
    // 0x220d6c: 0x10000093  b           . + 4 + (0x93 << 2)
label_220d70:
    if (ctx->pc == 0x220D70u) {
        ctx->pc = 0x220D74u;
        goto label_220d74;
    }
    ctx->pc = 0x220D6Cu;
    {
        const bool branch_taken_0x220d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220d6c) {
            ctx->pc = 0x220FBCu;
            goto label_220fbc;
        }
    }
    ctx->pc = 0x220D74u;
label_220d74:
    // 0x220d74: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x220d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_220d78:
    // 0x220d78: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x220d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_220d7c:
    // 0x220d7c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x220d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_220d80:
    // 0x220d80: 0x1460008e  bnez        $v1, . + 4 + (0x8E << 2)
label_220d84:
    if (ctx->pc == 0x220D84u) {
        ctx->pc = 0x220D88u;
        goto label_220d88;
    }
    ctx->pc = 0x220D80u;
    {
        const bool branch_taken_0x220d80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x220d80) {
            ctx->pc = 0x220FBCu;
            goto label_220fbc;
        }
    }
    ctx->pc = 0x220D88u;
label_220d88:
    // 0x220d88: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220d8c:
    // 0x220d8c: 0xc4601200  lwc1        $f0, 0x1200($v1)
    ctx->pc = 0x220d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220d90:
    // 0x220d90: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x220d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_220d94:
    // 0x220d94: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220d98:
    // 0x220d98: 0xc4601204  lwc1        $f0, 0x1204($v1)
    ctx->pc = 0x220d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220d9c:
    // 0x220d9c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x220d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_220da0:
    // 0x220da0: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220da4:
    // 0x220da4: 0xc4601208  lwc1        $f0, 0x1208($v1)
    ctx->pc = 0x220da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220da8:
    // 0x220da8: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x220da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_220dac:
    // 0x220dac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x220dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_220db0:
    // 0x220db0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x220db0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_220db4:
    // 0x220db4: 0x0  nop
    ctx->pc = 0x220db4u;
    // NOP
label_220db8:
    // 0x220db8: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x220db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_220dbc:
    // 0x220dbc: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x220dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
label_220dc0:
    // 0x220dc0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x220dc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_220dc4:
    // 0x220dc4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x220dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_220dc8:
    // 0x220dc8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x220dc8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_220dcc:
    // 0x220dcc: 0xc062f5c  jal         func_18BD70
label_220dd0:
    if (ctx->pc == 0x220DD0u) {
        ctx->pc = 0x220DD4u;
        goto label_220dd4;
    }
    ctx->pc = 0x220DCCu;
    SET_GPR_U32(ctx, 31, 0x220DD4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x220DCCu, 0x220DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220DD4u;
label_220dd4:
    // 0x220dd4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x220dd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_220dd8:
    // 0x220dd8: 0xc0630a8  jal         func_18C2A0
label_220ddc:
    if (ctx->pc == 0x220DDCu) {
        ctx->pc = 0x220DE0u;
        goto label_220de0;
    }
    ctx->pc = 0x220DD8u;
    SET_GPR_U32(ctx, 31, 0x220DE0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x220DD8u, 0x220DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220DE0u;
label_220de0:
    // 0x220de0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x220de0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_220de4:
    // 0x220de4: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220de8:
    // 0x220de8: 0xc4601200  lwc1        $f0, 0x1200($v1)
    ctx->pc = 0x220de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220dec:
    // 0x220dec: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x220decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_220df0:
    // 0x220df0: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x220df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220df4:
    // 0x220df4: 0xc4801208  lwc1        $f0, 0x1208($a0)
    ctx->pc = 0x220df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220df8:
    // 0x220df8: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x220df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_220dfc:
    // 0x220dfc: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x220dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_220e00:
    // 0x220e00: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x220e00u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_220e04:
    // 0x220e04: 0x0  nop
    ctx->pc = 0x220e04u;
    // NOP
label_220e08:
    // 0x220e08: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x220e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_220e0c:
    // 0x220e0c: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x220e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220e10:
    // 0x220e10: 0xc4a11204  lwc1        $f1, 0x1204($a1)
    ctx->pc = 0x220e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_220e14:
    // 0x220e14: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x220e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_220e18:
    // 0x220e18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x220e18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_220e1c:
    // 0x220e1c: 0x0  nop
    ctx->pc = 0x220e1cu;
    // NOP
label_220e20:
    // 0x220e20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x220e20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_220e24:
    // 0x220e24: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x220e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_220e28:
    // 0x220e28: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x220e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
label_220e2c:
    // 0x220e2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x220e2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_220e30:
    // 0x220e30: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x220e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_220e34:
    // 0x220e34: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x220e34u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_220e38:
    // 0x220e38: 0xc062f5c  jal         func_18BD70
label_220e3c:
    if (ctx->pc == 0x220E3Cu) {
        ctx->pc = 0x220E40u;
        goto label_220e40;
    }
    ctx->pc = 0x220E38u;
    SET_GPR_U32(ctx, 31, 0x220E40u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x220E38u, 0x220E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220E40u;
label_220e40:
    // 0x220e40: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x220e40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_220e44:
    // 0x220e44: 0xc0630a8  jal         func_18C2A0
label_220e48:
    if (ctx->pc == 0x220E48u) {
        ctx->pc = 0x220E4Cu;
        goto label_220e4c;
    }
    ctx->pc = 0x220E44u;
    SET_GPR_U32(ctx, 31, 0x220E4Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x220E44u, 0x220E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220E4Cu;
label_220e4c:
    // 0x220e4c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x220e4cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_220e50:
    // 0x220e50: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220e54:
    // 0x220e54: 0xc4611204  lwc1        $f1, 0x1204($v1)
    ctx->pc = 0x220e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_220e58:
    // 0x220e58: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x220e58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
label_220e5c:
    // 0x220e5c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x220e5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_220e60:
    // 0x220e60: 0x0  nop
    ctx->pc = 0x220e60u;
    // NOP
label_220e64:
    // 0x220e64: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x220e64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_220e68:
    // 0x220e68: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x220e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_220e6c:
    // 0x220e6c: 0x2406170e  addiu       $a2, $zero, 0x170E
    ctx->pc = 0x220e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
label_220e70:
    // 0x220e70: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x220e70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_220e74:
    // 0x220e74: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x220e74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_220e78:
    // 0x220e78: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x220e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_220e7c:
    // 0x220e7c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x220e7cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_220e80:
    // 0x220e80: 0xc062f5c  jal         func_18BD70
label_220e84:
    if (ctx->pc == 0x220E84u) {
        ctx->pc = 0x220E88u;
        goto label_220e88;
    }
    ctx->pc = 0x220E80u;
    SET_GPR_U32(ctx, 31, 0x220E88u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x220E80u, 0x220E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220E88u;
label_220e88:
    // 0x220e88: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x220e88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_220e8c:
    // 0x220e8c: 0xc0630a8  jal         func_18C2A0
label_220e90:
    if (ctx->pc == 0x220E90u) {
        ctx->pc = 0x220E94u;
        goto label_220e94;
    }
    ctx->pc = 0x220E8Cu;
    SET_GPR_U32(ctx, 31, 0x220E94u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x220E8Cu, 0x220E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220E94u;
label_220e94:
    // 0x220e94: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x220e94u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_220e98:
    // 0x220e98: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x220e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_220e9c:
    // 0x220e9c: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220ea0:
    // 0x220ea0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x220ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_220ea4:
    // 0x220ea4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x220ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_220ea8:
    // 0x220ea8: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220eac:
    // 0x220eac: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x220eacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_220eb0:
    // 0x220eb0: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x220eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220eb4:
    // 0x220eb4: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x220eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_220eb8:
    // 0x220eb8: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x220eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220ebc:
    // 0x220ebc: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x220ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
label_220ec0:
    // 0x220ec0: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220ec4:
    // 0x220ec4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x220ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_220ec8:
    // 0x220ec8: 0x1000003c  b           . + 4 + (0x3C << 2)
label_220ecc:
    if (ctx->pc == 0x220ECCu) {
        ctx->pc = 0x220ED0u;
        goto label_220ed0;
    }
    ctx->pc = 0x220EC8u;
    {
        const bool branch_taken_0x220ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220ec8) {
            ctx->pc = 0x220FBCu;
            goto label_220fbc;
        }
    }
    ctx->pc = 0x220ED0u;
label_220ed0:
    // 0x220ed0: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x220ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220ed4:
    // 0x220ed4: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x220ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220ed8:
    // 0x220ed8: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x220ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_220edc:
    // 0x220edc: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x220edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220ee0:
    // 0x220ee0: 0xc4801204  lwc1        $f0, 0x1204($a0)
    ctx->pc = 0x220ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220ee4:
    // 0x220ee4: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x220ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_220ee8:
    // 0x220ee8: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x220ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220eec:
    // 0x220eec: 0xc4a01208  lwc1        $f0, 0x1208($a1)
    ctx->pc = 0x220eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220ef0:
    // 0x220ef0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x220ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_220ef4:
    // 0x220ef4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x220ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_220ef8:
    // 0x220ef8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x220ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_220efc:
    // 0x220efc: 0x0  nop
    ctx->pc = 0x220efcu;
    // NOP
label_220f00:
    // 0x220f00: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x220f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_220f04:
    // 0x220f04: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x220f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
label_220f08:
    // 0x220f08: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x220f08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_220f0c:
    // 0x220f0c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x220f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_220f10:
    // 0x220f10: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x220f10u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_220f14:
    // 0x220f14: 0xc062f5c  jal         func_18BD70
label_220f18:
    if (ctx->pc == 0x220F18u) {
        ctx->pc = 0x220F1Cu;
        goto label_220f1c;
    }
    ctx->pc = 0x220F14u;
    SET_GPR_U32(ctx, 31, 0x220F1Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x220F14u, 0x220F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220F1Cu;
label_220f1c:
    // 0x220f1c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x220f1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_220f20:
    // 0x220f20: 0xc0630a8  jal         func_18C2A0
label_220f24:
    if (ctx->pc == 0x220F24u) {
        ctx->pc = 0x220F28u;
        goto label_220f28;
    }
    ctx->pc = 0x220F20u;
    SET_GPR_U32(ctx, 31, 0x220F28u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x220F20u, 0x220F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220F28u;
label_220f28:
    // 0x220f28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x220f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_220f2c:
    // 0x220f2c: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x220f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220f30:
    // 0x220f30: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x220f30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_220f34:
    // 0x220f34: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x220f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_220f38:
    // 0x220f38: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220f3c:
    // 0x220f3c: 0xa0650001  sb          $a1, 0x1($v1)
    ctx->pc = 0x220f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 5));
label_220f40:
    // 0x220f40: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x220f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220f44:
    // 0x220f44: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x220f44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_220f48:
    // 0x220f48: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x220f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220f4c:
    // 0x220f4c: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x220f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
label_220f50:
    // 0x220f50: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220f54:
    // 0x220f54: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x220f54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_220f58:
    // 0x220f58: 0x10000018  b           . + 4 + (0x18 << 2)
label_220f5c:
    if (ctx->pc == 0x220F5Cu) {
        ctx->pc = 0x220F60u;
        goto label_220f60;
    }
    ctx->pc = 0x220F58u;
    {
        const bool branch_taken_0x220f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220f58) {
            ctx->pc = 0x220FBCu;
            goto label_220fbc;
        }
    }
    ctx->pc = 0x220F60u;
label_220f60:
    // 0x220f60: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x220f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220f64:
    // 0x220f64: 0xc4801200  lwc1        $f0, 0x1200($a0)
    ctx->pc = 0x220f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220f68:
    // 0x220f68: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x220f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_220f6c:
    // 0x220f6c: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x220f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220f70:
    // 0x220f70: 0xc4a01204  lwc1        $f0, 0x1204($a1)
    ctx->pc = 0x220f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220f74:
    // 0x220f74: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x220f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_220f78:
    // 0x220f78: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x220f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220f7c:
    // 0x220f7c: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x220f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220f80:
    // 0x220f80: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x220f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_220f84:
    // 0x220f84: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x220f84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_220f88:
    // 0x220f88: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x220f88u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_220f8c:
    // 0x220f8c: 0x0  nop
    ctx->pc = 0x220f8cu;
    // NOP
label_220f90:
    // 0x220f90: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x220f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_220f94:
    // 0x220f94: 0x2405170e  addiu       $a1, $zero, 0x170E
    ctx->pc = 0x220f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
label_220f98:
    // 0x220f98: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x220f98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_220f9c:
    // 0x220f9c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x220f9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_220fa0:
    // 0x220fa0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x220fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_220fa4:
    // 0x220fa4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x220fa4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_220fa8:
    // 0x220fa8: 0xc062f5c  jal         func_18BD70
label_220fac:
    if (ctx->pc == 0x220FACu) {
        ctx->pc = 0x220FB0u;
        goto label_220fb0;
    }
    ctx->pc = 0x220FA8u;
    SET_GPR_U32(ctx, 31, 0x220FB0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x220FA8u, 0x220FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220FB0u;
label_220fb0:
    // 0x220fb0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x220fb0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_220fb4:
    // 0x220fb4: 0xc0630a8  jal         func_18C2A0
label_220fb8:
    if (ctx->pc == 0x220FB8u) {
        ctx->pc = 0x220FBCu;
        goto label_220fbc;
    }
    ctx->pc = 0x220FB4u;
    SET_GPR_U32(ctx, 31, 0x220FBCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x220FB4u, 0x220FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220FBCu;
label_220fbc:
    // 0x220fbc: 0x10000383  b           . + 4 + (0x383 << 2)
label_220fc0:
    if (ctx->pc == 0x220FC0u) {
        ctx->pc = 0x220FC4u;
        goto label_220fc4;
    }
    ctx->pc = 0x220FBCu;
    {
        const bool branch_taken_0x220fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220fbc) {
            ctx->pc = 0x221DCCu;
            goto label_221dcc;
        }
    }
    ctx->pc = 0x220FC4u;
label_220fc4:
    // 0x220fc4: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220fc8:
    // 0x220fc8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x220fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_220fcc:
    // 0x220fcc: 0x946300aa  lhu         $v1, 0xAA($v1)
    ctx->pc = 0x220fccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 170)));
label_220fd0:
    // 0x220fd0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x220fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_220fd4:
    // 0x220fd4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x220fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_220fd8:
    // 0x220fd8: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
label_220fdc:
    if (ctx->pc == 0x220FDCu) {
        ctx->pc = 0x220FE0u;
        goto label_220fe0;
    }
    ctx->pc = 0x220FD8u;
    {
        const bool branch_taken_0x220fd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x220fd8) {
            ctx->pc = 0x221168u;
            goto label_221168;
        }
    }
    ctx->pc = 0x220FE0u;
label_220fe0:
    // 0x220fe0: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220fe4:
    // 0x220fe4: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x220fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
label_220fe8:
    // 0x220fe8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x220fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_220fec:
    // 0x220fec: 0x8fb201a8  lw          $s2, 0x1A8($sp)
    ctx->pc = 0x220fecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_220ff0:
    // 0x220ff0: 0xa24310a8  sb          $v1, 0x10A8($s2)
    ctx->pc = 0x220ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4264), (uint8_t)GPR_U32(ctx, 3));
label_220ff4:
    // 0x220ff4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x220ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_220ff8:
    // 0x220ff8: 0x8c301a98  lw          $s0, 0x1A98($at)
    ctx->pc = 0x220ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_220ffc:
    // 0x220ffc: 0x32038000  andi        $v1, $s0, 0x8000
    ctx->pc = 0x220ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32768);
label_221000:
    // 0x221000: 0x14600059  bnez        $v1, . + 4 + (0x59 << 2)
label_221004:
    if (ctx->pc == 0x221004u) {
        ctx->pc = 0x221008u;
        goto label_221008;
    }
    ctx->pc = 0x221000u;
    {
        const bool branch_taken_0x221000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x221000) {
            ctx->pc = 0x221168u;
            goto label_221168;
        }
    }
    ctx->pc = 0x221008u;
label_221008:
    // 0x221008: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_22100c:
    // 0x22100c: 0x946411f4  lhu         $a0, 0x11F4($v1)
    ctx->pc = 0x22100cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4596)));
label_221010:
    // 0x221010: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x221010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_221014:
    // 0x221014: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_221018:
    if (ctx->pc == 0x221018u) {
        ctx->pc = 0x22101Cu;
        goto label_22101c;
    }
    ctx->pc = 0x221014u;
    {
        const bool branch_taken_0x221014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x221014) {
            ctx->pc = 0x22105Cu;
            goto label_22105c;
        }
    }
    ctx->pc = 0x22101Cu;
label_22101c:
    // 0x22101c: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x22101cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221020:
    // 0x221020: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221024:
    // 0x221024: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x221024u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_221028:
    // 0x221028: 0x844611f2  lh          $a2, 0x11F2($v0)
    ctx->pc = 0x221028u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
label_22102c:
    // 0x22102c: 0xc06d1d8  jal         func_1B4760
label_221030:
    if (ctx->pc == 0x221030u) {
        ctx->pc = 0x221034u;
        goto label_221034;
    }
    ctx->pc = 0x22102Cu;
    SET_GPR_U32(ctx, 31, 0x221034u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x22102Cu, 0x221034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221034u;
label_221034:
    // 0x221034: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x221034u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221038:
    // 0x221038: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x221038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
label_22103c:
    // 0x22103c: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x22103cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
label_221040:
    // 0x221040: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x221040u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_221044:
    // 0x221044: 0x2405051f  addiu       $a1, $zero, 0x51F
    ctx->pc = 0x221044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1311));
label_221048:
    // 0x221048: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x221048u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_22104c:
    // 0x22104c: 0x24c50120  addiu       $a1, $a2, 0x120
    ctx->pc = 0x22104cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
label_221050:
    // 0x221050: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x221050u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_221054:
    // 0x221054: 0xc067b18  jal         func_19EC60
label_221058:
    if (ctx->pc == 0x221058u) {
        ctx->pc = 0x22105Cu;
        goto label_22105c;
    }
    ctx->pc = 0x221054u;
    SET_GPR_U32(ctx, 31, 0x22105Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x221054u, 0x22105Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22105Cu;
label_22105c:
    // 0x22105c: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x22105cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221060:
    // 0x221060: 0x946311f4  lhu         $v1, 0x11F4($v1)
    ctx->pc = 0x221060u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4596)));
label_221064:
    // 0x221064: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x221064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_221068:
    // 0x221068: 0x14600039  bnez        $v1, . + 4 + (0x39 << 2)
label_22106c:
    if (ctx->pc == 0x22106Cu) {
        ctx->pc = 0x221070u;
        goto label_221070;
    }
    ctx->pc = 0x221068u;
    {
        const bool branch_taken_0x221068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x221068) {
            ctx->pc = 0x221150u;
            goto label_221150;
        }
    }
    ctx->pc = 0x221070u;
label_221070:
    // 0x221070: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221074:
    // 0x221074: 0xc4601200  lwc1        $f0, 0x1200($v1)
    ctx->pc = 0x221074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_221078:
    // 0x221078: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x221078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_22107c:
    // 0x22107c: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x22107cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221080:
    // 0x221080: 0xc4601204  lwc1        $f0, 0x1204($v1)
    ctx->pc = 0x221080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_221084:
    // 0x221084: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x221084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_221088:
    // 0x221088: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_22108c:
    // 0x22108c: 0xc4601208  lwc1        $f0, 0x1208($v1)
    ctx->pc = 0x22108cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_221090:
    // 0x221090: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x221090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_221094:
    // 0x221094: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x221094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_221098:
    // 0x221098: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x221098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22109c:
    // 0x22109c: 0x0  nop
    ctx->pc = 0x22109cu;
    // NOP
label_2210a0:
    // 0x2210a0: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2210a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_2210a4:
    // 0x2210a4: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x2210a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
label_2210a8:
    // 0x2210a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2210a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2210ac:
    // 0x2210ac: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2210acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2210b0:
    // 0x2210b0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2210b0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2210b4:
    // 0x2210b4: 0xc062f5c  jal         func_18BD70
label_2210b8:
    if (ctx->pc == 0x2210B8u) {
        ctx->pc = 0x2210BCu;
        goto label_2210bc;
    }
    ctx->pc = 0x2210B4u;
    SET_GPR_U32(ctx, 31, 0x2210BCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2210B4u, 0x2210BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2210BCu;
label_2210bc:
    // 0x2210bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2210bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2210c0:
    // 0x2210c0: 0xc0630a8  jal         func_18C2A0
label_2210c4:
    if (ctx->pc == 0x2210C4u) {
        ctx->pc = 0x2210C8u;
        goto label_2210c8;
    }
    ctx->pc = 0x2210C0u;
    SET_GPR_U32(ctx, 31, 0x2210C8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2210C0u, 0x2210C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2210C8u;
label_2210c8:
    // 0x2210c8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2210c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2210cc:
    // 0x2210cc: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x2210ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2210d0:
    // 0x2210d0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2210d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_2210d4:
    // 0x2210d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2210d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2210d8:
    // 0x2210d8: 0x0  nop
    ctx->pc = 0x2210d8u;
    // NOP
label_2210dc:
    // 0x2210dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2210dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2210e0:
    // 0x2210e0: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x2210e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_2210e4:
    // 0x2210e4: 0x2407170e  addiu       $a3, $zero, 0x170E
    ctx->pc = 0x2210e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
label_2210e8:
    // 0x2210e8: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2210e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_2210ec:
    // 0x2210ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2210ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2210f0:
    // 0x2210f0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2210f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2210f4:
    // 0x2210f4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2210f4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2210f8:
    // 0x2210f8: 0xc062f5c  jal         func_18BD70
label_2210fc:
    if (ctx->pc == 0x2210FCu) {
        ctx->pc = 0x221100u;
        goto label_221100;
    }
    ctx->pc = 0x2210F8u;
    SET_GPR_U32(ctx, 31, 0x221100u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2210F8u, 0x221100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221100u;
label_221100:
    // 0x221100: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x221100u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_221104:
    // 0x221104: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x221104u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_221108:
    // 0x221108: 0xc0630a8  jal         func_18C2A0
label_22110c:
    if (ctx->pc == 0x22110Cu) {
        ctx->pc = 0x221110u;
        goto label_221110;
    }
    ctx->pc = 0x221108u;
    SET_GPR_U32(ctx, 31, 0x221110u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x221108u, 0x221110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221110u;
label_221110:
    // 0x221110: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x221110u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_221114:
    // 0x221114: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221118:
    // 0x221118: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x221118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_22111c:
    // 0x22111c: 0x24720120  addiu       $s2, $v1, 0x120
    ctx->pc = 0x22111cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_221120:
    // 0x221120: 0x8e500034  lw          $s0, 0x34($s2)
    ctx->pc = 0x221120u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_221124:
    // 0x221124: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x221124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_221128:
    // 0x221128: 0x4313c  dsll32      $a2, $a0, 4
    ctx->pc = 0x221128u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 4));
label_22112c:
    // 0x22112c: 0x6313e  dsrl32      $a2, $a2, 4
    ctx->pc = 0x22112cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 4));
label_221130:
    // 0x221130: 0xae060024  sw          $a2, 0x24($s0)
    ctx->pc = 0x221130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 6));
label_221134:
    // 0x221134: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x221134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_221138:
    // 0x221138: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x221138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_22113c:
    // 0x22113c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x22113cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_221140:
    // 0x221140: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x221140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_221144:
    // 0x221144: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x221144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_221148:
    // 0x221148: 0x34860002  ori         $a2, $a0, 0x2
    ctx->pc = 0x221148u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
label_22114c:
    // 0x22114c: 0xae060024  sw          $a2, 0x24($s0)
    ctx->pc = 0x22114cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 6));
label_221150:
    // 0x221150: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221154:
    // 0x221154: 0x846410a6  lh          $a0, 0x10A6($v1)
    ctx->pc = 0x221154u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
label_221158:
    // 0x221158: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x221158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
label_22115c:
    // 0x22115c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22115cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_221160:
    // 0x221160: 0x461031a  bgez        $v1, . + 4 + (0x31A << 2)
label_221164:
    if (ctx->pc == 0x221164u) {
        ctx->pc = 0x221168u;
        goto label_221168;
    }
    ctx->pc = 0x221160u;
    {
        const bool branch_taken_0x221160 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x221160) {
            ctx->pc = 0x221DCCu;
            goto label_221dcc;
        }
    }
    ctx->pc = 0x221168u;
label_221168:
    // 0x221168: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x221168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_22116c:
    // 0x22116c: 0x944211f4  lhu         $v0, 0x11F4($v0)
    ctx->pc = 0x22116cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4596)));
label_221170:
    // 0x221170: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x221170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_221174:
    // 0x221174: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x221174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_221178:
    // 0x221178: 0x1462007f  bne         $v1, $v0, . + 4 + (0x7F << 2)
label_22117c:
    if (ctx->pc == 0x22117Cu) {
        ctx->pc = 0x221180u;
        goto label_221180;
    }
    ctx->pc = 0x221178u;
    {
        const bool branch_taken_0x221178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x221178) {
            ctx->pc = 0x221378u;
            goto label_221378;
        }
    }
    ctx->pc = 0x221180u;
label_221180:
    // 0x221180: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x221180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_221184:
    // 0x221184: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x221184u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221188:
    // 0x221188: 0xa0c410a8  sb          $a0, 0x10A8($a2)
    ctx->pc = 0x221188u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4264), (uint8_t)GPR_U32(ctx, 4));
label_22118c:
    // 0x22118c: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x22118cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221190:
    // 0x221190: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x221190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_221194:
    // 0x221194: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x221194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_221198:
    // 0x221198: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x221198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_22119c:
    // 0x22119c: 0xc4401204  lwc1        $f0, 0x1204($v0)
    ctx->pc = 0x22119cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2211a0:
    // 0x2211a0: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2211a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_2211a4:
    // 0x2211a4: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x2211a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2211a8:
    // 0x2211a8: 0xc4601208  lwc1        $f0, 0x1208($v1)
    ctx->pc = 0x2211a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2211ac:
    // 0x2211ac: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2211acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2211b0:
    // 0x2211b0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2211b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2211b4:
    // 0x2211b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2211b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2211b8:
    // 0x2211b8: 0x0  nop
    ctx->pc = 0x2211b8u;
    // NOP
label_2211bc:
    // 0x2211bc: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2211bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_2211c0:
    // 0x2211c0: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x2211c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
label_2211c4:
    // 0x2211c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2211c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2211c8:
    // 0x2211c8: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2211c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2211cc:
    // 0x2211cc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2211ccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2211d0:
    // 0x2211d0: 0xc062f5c  jal         func_18BD70
label_2211d4:
    if (ctx->pc == 0x2211D4u) {
        ctx->pc = 0x2211D8u;
        goto label_2211d8;
    }
    ctx->pc = 0x2211D0u;
    SET_GPR_U32(ctx, 31, 0x2211D8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2211D0u, 0x2211D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2211D8u;
label_2211d8:
    // 0x2211d8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2211d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2211dc:
    // 0x2211dc: 0xc0630a8  jal         func_18C2A0
label_2211e0:
    if (ctx->pc == 0x2211E0u) {
        ctx->pc = 0x2211E4u;
        goto label_2211e4;
    }
    ctx->pc = 0x2211DCu;
    SET_GPR_U32(ctx, 31, 0x2211E4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2211DCu, 0x2211E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2211E4u;
label_2211e4:
    // 0x2211e4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2211e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2211e8:
    // 0x2211e8: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x2211e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2211ec:
    // 0x2211ec: 0xc4811204  lwc1        $f1, 0x1204($a0)
    ctx->pc = 0x2211ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2211f0:
    // 0x2211f0: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2211f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_2211f4:
    // 0x2211f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2211f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2211f8:
    // 0x2211f8: 0x0  nop
    ctx->pc = 0x2211f8u;
    // NOP
label_2211fc:
    // 0x2211fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2211fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_221200:
    // 0x221200: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x221200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_221204:
    // 0x221204: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x221204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
label_221208:
    // 0x221208: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x221208u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_22120c:
    // 0x22120c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x22120cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_221210:
    // 0x221210: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x221210u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_221214:
    // 0x221214: 0xc062f5c  jal         func_18BD70
label_221218:
    if (ctx->pc == 0x221218u) {
        ctx->pc = 0x22121Cu;
        goto label_22121c;
    }
    ctx->pc = 0x221214u;
    SET_GPR_U32(ctx, 31, 0x22121Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x221214u, 0x22121Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22121Cu;
label_22121c:
    // 0x22121c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x22121cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_221220:
    // 0x221220: 0xc0630a8  jal         func_18C2A0
label_221224:
    if (ctx->pc == 0x221224u) {
        ctx->pc = 0x221228u;
        goto label_221228;
    }
    ctx->pc = 0x221220u;
    SET_GPR_U32(ctx, 31, 0x221228u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x221220u, 0x221228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221228u;
label_221228:
    // 0x221228: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x221228u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_22122c:
    // 0x22122c: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x22122cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221230:
    // 0x221230: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x221230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_221234:
    // 0x221234: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x221234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_221238:
    // 0x221238: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x221238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22123c:
    // 0x22123c: 0x2404051f  addiu       $a0, $zero, 0x51F
    ctx->pc = 0x22123cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1311));
label_221240:
    // 0x221240: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x221240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_221244:
    // 0x221244: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x221244u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_221248:
    // 0x221248: 0xc067b18  jal         func_19EC60
label_22124c:
    if (ctx->pc == 0x22124Cu) {
        ctx->pc = 0x221250u;
        goto label_221250;
    }
    ctx->pc = 0x221248u;
    SET_GPR_U32(ctx, 31, 0x221250u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x221248u, 0x221250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221250u;
label_221250:
    // 0x221250: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x221250u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_221254:
    // 0x221254: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221258:
    // 0x221258: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x221258u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
label_22125c:
    // 0x22125c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x22125cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_221260:
    // 0x221260: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221264:
    // 0x221264: 0xa48511f4  sh          $a1, 0x11F4($a0)
    ctx->pc = 0x221264u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4596), (uint16_t)GPR_U32(ctx, 5));
label_221268:
    // 0x221268: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_22126c:
    // 0x22126c: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x22126cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
label_221270:
    // 0x221270: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x221270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_221274:
    // 0x221274: 0x2065fff6  addi        $a1, $v1, -0xA
    ctx->pc = 0x221274u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4294967286, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_221278:
    // 0x221278: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x221278u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_22127c:
    // 0x22127c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_221280:
    if (ctx->pc == 0x221280u) {
        ctx->pc = 0x221284u;
        goto label_221284;
    }
    ctx->pc = 0x22127Cu;
    {
        const bool branch_taken_0x22127c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22127c) {
            ctx->pc = 0x2212ACu;
            goto label_2212ac;
        }
    }
    ctx->pc = 0x221284u;
label_221284:
    // 0x221284: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x221284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_221288:
    // 0x221288: 0x24641130  addiu       $a0, $v1, 0x1130
    ctx->pc = 0x221288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4400));
label_22128c:
    // 0x22128c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x22128cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_221290:
    // 0x221290: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x221290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_221294:
    // 0x221294: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x221294u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_221298:
    // 0x221298: 0x2200008  jr          $s1
label_22129c:
    if (ctx->pc == 0x22129Cu) {
        ctx->pc = 0x2212A0u;
        goto label_2212a0;
    }
    ctx->pc = 0x221298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221298u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2212A0u;
label_2212a0:
    // 0x2212a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2212a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2212a4:
    // 0x2212a4: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x2212a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2212a8:
    // 0x2212a8: 0xa48311f4  sh          $v1, 0x11F4($a0)
    ctx->pc = 0x2212a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4596), (uint16_t)GPR_U32(ctx, 3));
label_2212ac:
    // 0x2212ac: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x2212acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2212b0:
    // 0x2212b0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2212b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2212b4:
    // 0x2212b4: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x2212b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2212b8:
    // 0x2212b8: 0x30650400  andi        $a1, $v1, 0x400
    ctx->pc = 0x2212b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_2212bc:
    // 0x2212bc: 0x14a0002c  bnez        $a1, . + 4 + (0x2C << 2)
label_2212c0:
    if (ctx->pc == 0x2212C0u) {
        ctx->pc = 0x2212C4u;
        goto label_2212c4;
    }
    ctx->pc = 0x2212BCu;
    {
        const bool branch_taken_0x2212bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2212bc) {
            ctx->pc = 0x221370u;
            goto label_221370;
        }
    }
    ctx->pc = 0x2212C4u;
label_2212c4:
    // 0x2212c4: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x2212c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2212c8:
    // 0x2212c8: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x2212c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
label_2212cc:
    // 0x2212cc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2212ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2212d0:
    // 0x2212d0: 0x2085fff6  addi        $a1, $a0, -0xA
    ctx->pc = 0x2212d0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)4294967286, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2212d4:
    // 0x2212d4: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x2212d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_2212d8:
    // 0x2212d8: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
label_2212dc:
    if (ctx->pc == 0x2212DCu) {
        ctx->pc = 0x2212E0u;
        goto label_2212e0;
    }
    ctx->pc = 0x2212D8u;
    {
        const bool branch_taken_0x2212d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2212d8) {
            ctx->pc = 0x221370u;
            goto label_221370;
        }
    }
    ctx->pc = 0x2212E0u;
label_2212e0:
    // 0x2212e0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2212e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2212e4:
    // 0x2212e4: 0x24631110  addiu       $v1, $v1, 0x1110
    ctx->pc = 0x2212e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4368));
label_2212e8:
    // 0x2212e8: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x2212e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2212ec:
    // 0x2212ec: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x2212ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2212f0:
    // 0x2212f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2212f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2212f4:
    // 0x2212f4: 0x600008  jr          $v1
label_2212f8:
    if (ctx->pc == 0x2212F8u) {
        ctx->pc = 0x2212FCu;
        goto label_2212fc;
    }
    ctx->pc = 0x2212F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2212FCu: goto label_2212fc;
            case 0x221370u: goto label_221370;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2212F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2212FCu;
label_2212fc:
    // 0x2212fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2212fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_221300:
    // 0x221300: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x221300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221304:
    // 0x221304: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x221304u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_221308:
    // 0x221308: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x221308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22130c:
    // 0x22130c: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x22130cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221310:
    // 0x221310: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x221310u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_221314:
    // 0x221314: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x221314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221318:
    // 0x221318: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x221318u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_22131c:
    // 0x22131c: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x22131cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221320:
    // 0x221320: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x221320u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
label_221324:
    // 0x221324: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221328:
    // 0x221328: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x221328u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_22132c:
    // 0x22132c: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x22132cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221330:
    // 0x221330: 0xa08011ee  sb          $zero, 0x11EE($a0)
    ctx->pc = 0x221330u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4590), (uint8_t)GPR_U32(ctx, 0));
label_221334:
    // 0x221334: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x221334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221338:
    // 0x221338: 0x90a411ef  lbu         $a0, 0x11EF($a1)
    ctx->pc = 0x221338u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4591)));
label_22133c:
    // 0x22133c: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x22133cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221340:
    // 0x221340: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x221340u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_221344:
    // 0x221344: 0xc067694  jal         func_19DA50
label_221348:
    if (ctx->pc == 0x221348u) {
        ctx->pc = 0x22134Cu;
        goto label_22134c;
    }
    ctx->pc = 0x221344u;
    SET_GPR_U32(ctx, 31, 0x22134Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x221344u, 0x22134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22134Cu;
label_22134c:
    // 0x22134c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x22134cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_221350:
    // 0x221350: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x221350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_221354:
    // 0x221354: 0x30830007  andi        $v1, $a0, 0x7
    ctx->pc = 0x221354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
label_221358:
    // 0x221358: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x221358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_22135c:
    // 0x22135c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x22135cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_221360:
    // 0x221360: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x221360u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_221364:
    // 0x221364: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221368:
    // 0x221368: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x221368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_22136c:
    // 0x22136c: 0xa464005e  sh          $a0, 0x5E($v1)
    ctx->pc = 0x22136cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 94), (uint16_t)GPR_U32(ctx, 4));
label_221370:
    // 0x221370: 0x10000296  b           . + 4 + (0x296 << 2)
label_221374:
    if (ctx->pc == 0x221374u) {
        ctx->pc = 0x221378u;
        goto label_221378;
    }
    ctx->pc = 0x221370u;
    {
        const bool branch_taken_0x221370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221370) {
            ctx->pc = 0x221DCCu;
            goto label_221dcc;
        }
    }
    ctx->pc = 0x221378u;
label_221378:
    // 0x221378: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x221378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_22137c:
    // 0x22137c: 0x94a311f4  lhu         $v1, 0x11F4($a1)
    ctx->pc = 0x22137cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4596)));
label_221380:
    // 0x221380: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x221380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_221384:
    // 0x221384: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x221384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_221388:
    // 0x221388: 0x1483003c  bne         $a0, $v1, . + 4 + (0x3C << 2)
label_22138c:
    if (ctx->pc == 0x22138Cu) {
        ctx->pc = 0x221390u;
        goto label_221390;
    }
    ctx->pc = 0x221388u;
    {
        const bool branch_taken_0x221388 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x221388) {
            ctx->pc = 0x22147Cu;
            goto label_22147c;
        }
    }
    ctx->pc = 0x221390u;
label_221390:
    // 0x221390: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x221390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_221394:
    // 0x221394: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x221394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221398:
    // 0x221398: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x221398u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_22139c:
    // 0x22139c: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x22139cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2213a0:
    // 0x2213a0: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x2213a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2213a4:
    // 0x2213a4: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2213a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2213a8:
    // 0x2213a8: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x2213a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2213ac:
    // 0x2213ac: 0xc4401204  lwc1        $f0, 0x1204($v0)
    ctx->pc = 0x2213acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2213b0:
    // 0x2213b0: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2213b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_2213b4:
    // 0x2213b4: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x2213b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2213b8:
    // 0x2213b8: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x2213b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2213bc:
    // 0x2213bc: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2213bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_2213c0:
    // 0x2213c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2213c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2213c4:
    // 0x2213c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2213c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2213c8:
    // 0x2213c8: 0x0  nop
    ctx->pc = 0x2213c8u;
    // NOP
label_2213cc:
    // 0x2213cc: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2213ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_2213d0:
    // 0x2213d0: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x2213d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
label_2213d4:
    // 0x2213d4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2213d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2213d8:
    // 0x2213d8: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x2213d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2213dc:
    // 0x2213dc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2213dcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2213e0:
    // 0x2213e0: 0xc062f5c  jal         func_18BD70
label_2213e4:
    if (ctx->pc == 0x2213E4u) {
        ctx->pc = 0x2213E8u;
        goto label_2213e8;
    }
    ctx->pc = 0x2213E0u;
    SET_GPR_U32(ctx, 31, 0x2213E8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2213E0u, 0x2213E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2213E8u;
label_2213e8:
    // 0x2213e8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2213e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2213ec:
    // 0x2213ec: 0xc0630a8  jal         func_18C2A0
label_2213f0:
    if (ctx->pc == 0x2213F0u) {
        ctx->pc = 0x2213F4u;
        goto label_2213f4;
    }
    ctx->pc = 0x2213ECu;
    SET_GPR_U32(ctx, 31, 0x2213F4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2213ECu, 0x2213F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2213F4u;
label_2213f4:
    // 0x2213f4: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x2213f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2213f8:
    // 0x2213f8: 0xc4811204  lwc1        $f1, 0x1204($a0)
    ctx->pc = 0x2213f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2213fc:
    // 0x2213fc: 0x3c0641a0  lui         $a2, 0x41A0
    ctx->pc = 0x2213fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16800 << 16));
label_221400:
    // 0x221400: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x221400u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_221404:
    // 0x221404: 0x0  nop
    ctx->pc = 0x221404u;
    // NOP
label_221408:
    // 0x221408: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x221408u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_22140c:
    // 0x22140c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x22140cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_221410:
    // 0x221410: 0x2402050c  addiu       $v0, $zero, 0x50C
    ctx->pc = 0x221410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
label_221414:
    // 0x221414: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x221414u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_221418:
    // 0x221418: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x221418u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_22141c:
    // 0x22141c: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x22141cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_221420:
    // 0x221420: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x221420u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_221424:
    // 0x221424: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x221424u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_221428:
    // 0x221428: 0xc062f5c  jal         func_18BD70
label_22142c:
    if (ctx->pc == 0x22142Cu) {
        ctx->pc = 0x221430u;
        goto label_221430;
    }
    ctx->pc = 0x221428u;
    SET_GPR_U32(ctx, 31, 0x221430u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x221428u, 0x221430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221430u;
label_221430:
    // 0x221430: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x221430u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_221434:
    // 0x221434: 0xc0630a8  jal         func_18C2A0
label_221438:
    if (ctx->pc == 0x221438u) {
        ctx->pc = 0x22143Cu;
        goto label_22143c;
    }
    ctx->pc = 0x221434u;
    SET_GPR_U32(ctx, 31, 0x22143Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x221434u, 0x22143Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22143Cu;
label_22143c:
    // 0x22143c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22143cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_221440:
    // 0x221440: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x221440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221444:
    // 0x221444: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x221444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
label_221448:
    // 0x221448: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x221448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
label_22144c:
    // 0x22144c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x22144cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_221450:
    // 0x221450: 0x2406051f  addiu       $a2, $zero, 0x51F
    ctx->pc = 0x221450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1311));
label_221454:
    // 0x221454: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x221454u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_221458:
    // 0x221458: 0x24a20120  addiu       $v0, $a1, 0x120
    ctx->pc = 0x221458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_22145c:
    // 0x22145c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x22145cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_221460:
    // 0x221460: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x221460u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_221464:
    // 0x221464: 0xc067b18  jal         func_19EC60
label_221468:
    if (ctx->pc == 0x221468u) {
        ctx->pc = 0x22146Cu;
        goto label_22146c;
    }
    ctx->pc = 0x221464u;
    SET_GPR_U32(ctx, 31, 0x22146Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x221464u, 0x22146Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22146Cu;
label_22146c:
    // 0x22146c: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x22146cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221470:
    // 0x221470: 0xa0c011ee  sb          $zero, 0x11EE($a2)
    ctx->pc = 0x221470u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4590), (uint8_t)GPR_U32(ctx, 0));
label_221474:
    // 0x221474: 0x10000255  b           . + 4 + (0x255 << 2)
label_221478:
    if (ctx->pc == 0x221478u) {
        ctx->pc = 0x22147Cu;
        goto label_22147c;
    }
    ctx->pc = 0x221474u;
    {
        const bool branch_taken_0x221474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221474) {
            ctx->pc = 0x221DCCu;
            goto label_221dcc;
        }
    }
    ctx->pc = 0x22147Cu;
label_22147c:
    // 0x22147c: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x22147cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221480:
    // 0x221480: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x221480u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
label_221484:
    // 0x221484: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x221484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221488:
    // 0x221488: 0x8c511210  lw          $s1, 0x1210($v0)
    ctx->pc = 0x221488u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4624)));
label_22148c:
    // 0x22148c: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x22148cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221490:
    // 0x221490: 0x906411ef  lbu         $a0, 0x11EF($v1)
    ctx->pc = 0x221490u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4591)));
label_221494:
    // 0x221494: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x221494u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221498:
    // 0x221498: 0xa0c410a8  sb          $a0, 0x10A8($a2)
    ctx->pc = 0x221498u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4264), (uint8_t)GPR_U32(ctx, 4));
label_22149c:
    // 0x22149c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22149cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2214a0:
    // 0x2214a0: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x2214a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6744)));
label_2214a4:
    // 0x2214a4: 0x30830fff  andi        $v1, $a0, 0xFFF
    ctx->pc = 0x2214a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
label_2214a8:
    // 0x2214a8: 0x2c610015  sltiu       $at, $v1, 0x15
    ctx->pc = 0x2214a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
label_2214ac:
    // 0x2214ac: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_2214b0:
    if (ctx->pc == 0x2214B0u) {
        ctx->pc = 0x2214B4u;
        goto label_2214b4;
    }
    ctx->pc = 0x2214ACu;
    {
        const bool branch_taken_0x2214ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2214ac) {
            ctx->pc = 0x2214D0u;
            goto label_2214d0;
        }
    }
    ctx->pc = 0x2214B4u;
label_2214b4:
    // 0x2214b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2214b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2214b8:
    // 0x2214b8: 0x8c271a58  lw          $a3, 0x1A58($at)
    ctx->pc = 0x2214b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6744)));
label_2214bc:
    // 0x2214bc: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x2214bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2214c0:
    // 0x2214c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2214c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2214c4:
    // 0x2214c4: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x2214c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6744), GPR_U32(ctx, 3));
label_2214c8:
    // 0x2214c8: 0x10000012  b           . + 4 + (0x12 << 2)
label_2214cc:
    if (ctx->pc == 0x2214CCu) {
        ctx->pc = 0x2214D0u;
        goto label_2214d0;
    }
    ctx->pc = 0x2214C8u;
    {
        const bool branch_taken_0x2214c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2214c8) {
            ctx->pc = 0x221514u;
            goto label_221514;
        }
    }
    ctx->pc = 0x2214D0u;
label_2214d0:
    // 0x2214d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2214d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2214d4:
    // 0x2214d4: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x2214d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6744)));
label_2214d8:
    // 0x2214d8: 0x30868000  andi        $a2, $a0, 0x8000
    ctx->pc = 0x2214d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
label_2214dc:
    // 0x2214dc: 0x14c0000d  bnez        $a2, . + 4 + (0xD << 2)
label_2214e0:
    if (ctx->pc == 0x2214E0u) {
        ctx->pc = 0x2214E4u;
        goto label_2214e4;
    }
    ctx->pc = 0x2214DCu;
    {
        const bool branch_taken_0x2214dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2214dc) {
            ctx->pc = 0x221514u;
            goto label_221514;
        }
    }
    ctx->pc = 0x2214E4u;
label_2214e4:
    // 0x2214e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2214e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2214e8:
    // 0x2214e8: 0x8c241a50  lw          $a0, 0x1A50($at)
    ctx->pc = 0x2214e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6736)));
label_2214ec:
    // 0x2214ec: 0x34830001  ori         $v1, $a0, 0x1
    ctx->pc = 0x2214ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_2214f0:
    // 0x2214f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2214f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2214f4:
    // 0x2214f4: 0xac231a50  sw          $v1, 0x1A50($at)
    ctx->pc = 0x2214f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6736), GPR_U32(ctx, 3));
label_2214f8:
    // 0x2214f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2214f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2214fc:
    // 0x2214fc: 0x8c251a50  lw          $a1, 0x1A50($at)
    ctx->pc = 0x2214fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6736)));
label_221500:
    // 0x221500: 0x3c04fffd  lui         $a0, 0xFFFD
    ctx->pc = 0x221500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65533 << 16));
label_221504:
    // 0x221504: 0x3483fffd  ori         $v1, $a0, 0xFFFD
    ctx->pc = 0x221504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65533);
label_221508:
    // 0x221508: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x221508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_22150c:
    // 0x22150c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22150cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_221510:
    // 0x221510: 0xac231a50  sw          $v1, 0x1A50($at)
    ctx->pc = 0x221510u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6736), GPR_U32(ctx, 3));
label_221514:
    // 0x221514: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221518:
    // 0x221518: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x221518u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
label_22151c:
    // 0x22151c: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x22151cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_221520:
    // 0x221520: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x221520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_221524:
    // 0x221524: 0x10a400e6  beq         $a1, $a0, . + 4 + (0xE6 << 2)
label_221528:
    if (ctx->pc == 0x221528u) {
        ctx->pc = 0x22152Cu;
        goto label_22152c;
    }
    ctx->pc = 0x221524u;
    {
        const bool branch_taken_0x221524 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x221524) {
            ctx->pc = 0x2218C0u;
            goto label_2218c0;
        }
    }
    ctx->pc = 0x22152Cu;
label_22152c:
    // 0x22152c: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x22152cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_221530:
    // 0x221530: 0x10a300e3  beq         $a1, $v1, . + 4 + (0xE3 << 2)
label_221534:
    if (ctx->pc == 0x221534u) {
        ctx->pc = 0x221538u;
        goto label_221538;
    }
    ctx->pc = 0x221530u;
    {
        const bool branch_taken_0x221530 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x221530) {
            ctx->pc = 0x2218C0u;
            goto label_2218c0;
        }
    }
    ctx->pc = 0x221538u;
label_221538:
    // 0x221538: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x221538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_22153c:
    // 0x22153c: 0x10a300e0  beq         $a1, $v1, . + 4 + (0xE0 << 2)
label_221540:
    if (ctx->pc == 0x221540u) {
        ctx->pc = 0x221544u;
        goto label_221544;
    }
    ctx->pc = 0x22153Cu;
    {
        const bool branch_taken_0x22153c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x22153c) {
            ctx->pc = 0x2218C0u;
            goto label_2218c0;
        }
    }
    ctx->pc = 0x221544u;
label_221544:
    // 0x221544: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x221544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_221548:
    // 0x221548: 0x10a300dd  beq         $a1, $v1, . + 4 + (0xDD << 2)
label_22154c:
    if (ctx->pc == 0x22154Cu) {
        ctx->pc = 0x221550u;
        goto label_221550;
    }
    ctx->pc = 0x221548u;
    {
        const bool branch_taken_0x221548 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x221548) {
            ctx->pc = 0x2218C0u;
            goto label_2218c0;
        }
    }
    ctx->pc = 0x221550u;
label_221550:
    // 0x221550: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x221550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_221554:
    // 0x221554: 0x10a300da  beq         $a1, $v1, . + 4 + (0xDA << 2)
label_221558:
    if (ctx->pc == 0x221558u) {
        ctx->pc = 0x22155Cu;
        goto label_22155c;
    }
    ctx->pc = 0x221554u;
    {
        const bool branch_taken_0x221554 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x221554) {
            ctx->pc = 0x2218C0u;
            goto label_2218c0;
        }
    }
    ctx->pc = 0x22155Cu;
label_22155c:
    // 0x22155c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x22155cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_221560:
    // 0x221560: 0x10a300d7  beq         $a1, $v1, . + 4 + (0xD7 << 2)
label_221564:
    if (ctx->pc == 0x221564u) {
        ctx->pc = 0x221568u;
        goto label_221568;
    }
    ctx->pc = 0x221560u;
    {
        const bool branch_taken_0x221560 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x221560) {
            ctx->pc = 0x2218C0u;
            goto label_2218c0;
        }
    }
    ctx->pc = 0x221568u;
label_221568:
    // 0x221568: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x221568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_22156c:
    // 0x22156c: 0x10a300d4  beq         $a1, $v1, . + 4 + (0xD4 << 2)
label_221570:
    if (ctx->pc == 0x221570u) {
        ctx->pc = 0x221574u;
        goto label_221574;
    }
    ctx->pc = 0x22156Cu;
    {
        const bool branch_taken_0x22156c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x22156c) {
            ctx->pc = 0x2218C0u;
            goto label_2218c0;
        }
    }
    ctx->pc = 0x221574u;
label_221574:
    // 0x221574: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x221574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_221578:
    // 0x221578: 0x10a400d1  beq         $a1, $a0, . + 4 + (0xD1 << 2)
label_22157c:
    if (ctx->pc == 0x22157Cu) {
        ctx->pc = 0x221580u;
        goto label_221580;
    }
    ctx->pc = 0x221578u;
    {
        const bool branch_taken_0x221578 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x221578) {
            ctx->pc = 0x2218C0u;
            goto label_2218c0;
        }
    }
    ctx->pc = 0x221580u;
label_221580:
    // 0x221580: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x221580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_221584:
    // 0x221584: 0x10a600ce  beq         $a1, $a2, . + 4 + (0xCE << 2)
label_221588:
    if (ctx->pc == 0x221588u) {
        ctx->pc = 0x22158Cu;
        goto label_22158c;
    }
    ctx->pc = 0x221584u;
    {
        const bool branch_taken_0x221584 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x221584) {
            ctx->pc = 0x2218C0u;
            goto label_2218c0;
        }
    }
    ctx->pc = 0x22158Cu;
label_22158c:
    // 0x22158c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x22158cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_221590:
    // 0x221590: 0x10a400cb  beq         $a1, $a0, . + 4 + (0xCB << 2)
label_221594:
    if (ctx->pc == 0x221594u) {
        ctx->pc = 0x221598u;
        goto label_221598;
    }
    ctx->pc = 0x221590u;
    {
        const bool branch_taken_0x221590 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x221590) {
            ctx->pc = 0x2218C0u;
            goto label_2218c0;
        }
    }
    ctx->pc = 0x221598u;
label_221598:
    // 0x221598: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x221598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22159c:
    // 0x22159c: 0x10a300c8  beq         $a1, $v1, . + 4 + (0xC8 << 2)
label_2215a0:
    if (ctx->pc == 0x2215A0u) {
        ctx->pc = 0x2215A4u;
        goto label_2215a4;
    }
    ctx->pc = 0x22159Cu;
    {
        const bool branch_taken_0x22159c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x22159c) {
            ctx->pc = 0x2218C0u;
            goto label_2218c0;
        }
    }
    ctx->pc = 0x2215A4u;
label_2215a4:
    // 0x2215a4: 0x10000001  b           . + 4 + (0x1 << 2)
label_2215a8:
    if (ctx->pc == 0x2215A8u) {
        ctx->pc = 0x2215ACu;
        goto label_2215ac;
    }
    ctx->pc = 0x2215A4u;
    {
        const bool branch_taken_0x2215a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2215a4) {
            ctx->pc = 0x2215ACu;
            goto label_2215ac;
        }
    }
    ctx->pc = 0x2215ACu;
label_2215ac:
    // 0x2215ac: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x2215acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2215b0:
    // 0x2215b0: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x2215b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2215b4:
    // 0x2215b4: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x2215b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_2215b8:
    // 0x2215b8: 0x846611f2  lh          $a2, 0x11F2($v1)
    ctx->pc = 0x2215b8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4594)));
label_2215bc:
    // 0x2215bc: 0xc06d1d8  jal         func_1B4760
label_2215c0:
    if (ctx->pc == 0x2215C0u) {
        ctx->pc = 0x2215C4u;
        goto label_2215c4;
    }
    ctx->pc = 0x2215BCu;
    SET_GPR_U32(ctx, 31, 0x2215C4u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x2215BCu, 0x2215C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2215C4u;
label_2215c4:
    // 0x2215c4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2215c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2215c8:
    // 0x2215c8: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x2215c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2215cc:
    // 0x2215cc: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2215ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2215d0:
    // 0x2215d0: 0x8c860030  lw          $a2, 0x30($a0)
    ctx->pc = 0x2215d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2215d4:
    // 0x2215d4: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x2215d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
label_2215d8:
    // 0x2215d8: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x2215d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_2215dc:
    // 0x2215dc: 0x1060009f  beqz        $v1, . + 4 + (0x9F << 2)
label_2215e0:
    if (ctx->pc == 0x2215E0u) {
        ctx->pc = 0x2215E4u;
        goto label_2215e4;
    }
    ctx->pc = 0x2215DCu;
    {
        const bool branch_taken_0x2215dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2215dc) {
            ctx->pc = 0x22185Cu;
            goto label_22185c;
        }
    }
    ctx->pc = 0x2215E4u;
label_2215e4:
    // 0x2215e4: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x2215e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2215e8:
    // 0x2215e8: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x2215e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2215ec:
    // 0x2215ec: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x2215ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_2215f0:
    // 0x2215f0: 0x846611f2  lh          $a2, 0x11F2($v1)
    ctx->pc = 0x2215f0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4594)));
label_2215f4:
    // 0x2215f4: 0xc06d1d8  jal         func_1B4760
label_2215f8:
    if (ctx->pc == 0x2215F8u) {
        ctx->pc = 0x2215FCu;
        goto label_2215fc;
    }
    ctx->pc = 0x2215F4u;
    SET_GPR_U32(ctx, 31, 0x2215FCu);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x2215F4u, 0x2215FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2215FCu;
label_2215fc:
    // 0x2215fc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2215fcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_221600:
    // 0x221600: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221604:
    // 0x221604: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x221604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_221608:
    // 0x221608: 0x3c043f86  lui         $a0, 0x3F86
    ctx->pc = 0x221608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16262 << 16));
label_22160c:
    // 0x22160c: 0x34830a92  ori         $v1, $a0, 0xA92
    ctx->pc = 0x22160cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2706);
label_221610:
    // 0x221610: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x221610u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_221614:
    // 0x221614: 0x0  nop
    ctx->pc = 0x221614u;
    // NOP
label_221618:
    // 0x221618: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x221618u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_22161c:
    // 0x22161c: 0xc058fec  jal         func_163FB0
label_221620:
    if (ctx->pc == 0x221620u) {
        ctx->pc = 0x221624u;
        goto label_221624;
    }
    ctx->pc = 0x22161Cu;
    SET_GPR_U32(ctx, 31, 0x221624u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22161Cu, 0x221624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221624u;
label_221624:
    // 0x221624: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221628:
    // 0x221628: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x221628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_22162c:
    // 0x22162c: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x22162cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221630:
    // 0x221630: 0xc4811288  lwc1        $f1, 0x1288($a0)
    ctx->pc = 0x221630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_221634:
    // 0x221634: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x221634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
label_221638:
    // 0x221638: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x221638u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22163c:
    // 0x22163c: 0x0  nop
    ctx->pc = 0x22163cu;
    // NOP
label_221640:
    // 0x221640: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x221640u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_221644:
    // 0x221644: 0x0  nop
    ctx->pc = 0x221644u;
    // NOP
label_221648:
    // 0x221648: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
label_22164c:
    if (ctx->pc == 0x22164Cu) {
        ctx->pc = 0x221650u;
        goto label_221650;
    }
    ctx->pc = 0x221648u;
    {
        const bool branch_taken_0x221648 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x221648) {
            ctx->pc = 0x221740u;
            goto label_221740;
        }
    }
    ctx->pc = 0x221650u;
label_221650:
    // 0x221650: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221654:
    // 0x221654: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x221654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221658:
    // 0x221658: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x221658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
label_22165c:
    // 0x22165c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x22165cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_221660:
    // 0x221660: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x221660u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_221664:
    // 0x221664: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x221664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_221668:
    // 0x221668: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x221668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22166c:
    // 0x22166c: 0x26650120  addiu       $a1, $s3, 0x120
    ctx->pc = 0x22166cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
label_221670:
    // 0x221670: 0xc05caf8  jal         func_172BE0
label_221674:
    if (ctx->pc == 0x221674u) {
        ctx->pc = 0x221678u;
        goto label_221678;
    }
    ctx->pc = 0x221670u;
    SET_GPR_U32(ctx, 31, 0x221678u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x221670u, 0x221678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221678u;
label_221678:
    // 0x221678: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_22167c:
    if (ctx->pc == 0x22167Cu) {
        ctx->pc = 0x221680u;
        goto label_221680;
    }
    ctx->pc = 0x221678u;
    {
        const bool branch_taken_0x221678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221678) {
            ctx->pc = 0x221740u;
            goto label_221740;
        }
    }
    ctx->pc = 0x221680u;
label_221680:
    // 0x221680: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x221680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_221684:
    // 0x221684: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x221684u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221688:
    // 0x221688: 0xa4c410a6  sh          $a0, 0x10A6($a2)
    ctx->pc = 0x221688u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4262), (uint16_t)GPR_U32(ctx, 4));
label_22168c:
    // 0x22168c: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x22168cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221690:
    // 0x221690: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x221690u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_221694:
    // 0x221694: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x221694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_221698:
    // 0x221698: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x221698u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_22169c:
    // 0x22169c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22169cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2216a0:
    // 0x2216a0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2216a0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2216a4:
    // 0x2216a4: 0xc0c7a24  jal         func_31E890
label_2216a8:
    if (ctx->pc == 0x2216A8u) {
        ctx->pc = 0x2216ACu;
        goto label_2216ac;
    }
    ctx->pc = 0x2216A4u;
    SET_GPR_U32(ctx, 31, 0x2216ACu);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x2216A4u, 0x2216ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2216ACu;
label_2216ac:
    // 0x2216ac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2216acu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2216b0:
    // 0x2216b0: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x2216b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2216b4:
    // 0x2216b4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2216b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2216b8:
    // 0x2216b8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2216b8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2216bc:
    // 0x2216bc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2216bcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2216c0:
    // 0x2216c0: 0xc0c7a24  jal         func_31E890
label_2216c4:
    if (ctx->pc == 0x2216C4u) {
        ctx->pc = 0x2216C8u;
        goto label_2216c8;
    }
    ctx->pc = 0x2216C0u;
    SET_GPR_U32(ctx, 31, 0x2216C8u);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x2216C0u, 0x2216C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2216C8u;
label_2216c8:
    // 0x2216c8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2216c8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2216cc:
    // 0x2216cc: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x2216ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2216d0:
    // 0x2216d0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2216d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2216d4:
    // 0x2216d4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2216d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2216d8:
    // 0x2216d8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2216d8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2216dc:
    // 0x2216dc: 0xc0c7a24  jal         func_31E890
label_2216e0:
    if (ctx->pc == 0x2216E0u) {
        ctx->pc = 0x2216E4u;
        goto label_2216e4;
    }
    ctx->pc = 0x2216DCu;
    SET_GPR_U32(ctx, 31, 0x2216E4u);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x2216DCu, 0x2216E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2216E4u;
label_2216e4:
    // 0x2216e4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2216e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2216e8:
    // 0x2216e8: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x2216e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2216ec:
    // 0x2216ec: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2216ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2216f0:
    // 0x2216f0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2216f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2216f4:
    // 0x2216f4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2216f4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2216f8:
    // 0x2216f8: 0xc0c7a24  jal         func_31E890
label_2216fc:
    if (ctx->pc == 0x2216FCu) {
        ctx->pc = 0x221700u;
        goto label_221700;
    }
    ctx->pc = 0x2216F8u;
    SET_GPR_U32(ctx, 31, 0x221700u);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x2216F8u, 0x221700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221700u;
label_221700:
    // 0x221700: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221704:
    // 0x221704: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x221704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_221708:
    // 0x221708: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x221708u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_22170c:
    // 0x22170c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x22170cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_221710:
    // 0x221710: 0xc0c7a24  jal         func_31E890
label_221714:
    if (ctx->pc == 0x221714u) {
        ctx->pc = 0x221718u;
        goto label_221718;
    }
    ctx->pc = 0x221710u;
    SET_GPR_U32(ctx, 31, 0x221718u);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x221710u, 0x221718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221718u;
label_221718:
    // 0x221718: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x221718u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_22171c:
    // 0x22171c: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x22171cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221720:
    // 0x221720: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x221720u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_221724:
    // 0x221724: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x221724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_221728:
    // 0x221728: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x221728u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_22172c:
    // 0x22172c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22172cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_221730:
    // 0x221730: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x221730u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_221734:
    // 0x221734: 0xc0c7a24  jal         func_31E890
label_221738:
    if (ctx->pc == 0x221738u) {
        ctx->pc = 0x22173Cu;
        goto label_22173c;
    }
    ctx->pc = 0x221734u;
    SET_GPR_U32(ctx, 31, 0x22173Cu);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x221734u, 0x22173Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22173Cu;
label_22173c:
    // 0x22173c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22173cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_221740:
    // 0x221740: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221744:
    // 0x221744: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x221744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_221748:
    // 0x221748: 0x3c033f86  lui         $v1, 0x3F86
    ctx->pc = 0x221748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16262 << 16));
label_22174c:
    // 0x22174c: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x22174cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
label_221750:
    // 0x221750: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x221750u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_221754:
    // 0x221754: 0x0  nop
    ctx->pc = 0x221754u;
    // NOP
label_221758:
    // 0x221758: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x221758u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22175c:
    // 0x22175c: 0xc058fec  jal         func_163FB0
label_221760:
    if (ctx->pc == 0x221760u) {
        ctx->pc = 0x221764u;
        goto label_221764;
    }
    ctx->pc = 0x22175Cu;
    SET_GPR_U32(ctx, 31, 0x221764u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22175Cu, 0x221764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221764u;
label_221764:
    // 0x221764: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221768:
    // 0x221768: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x221768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_22176c:
    // 0x22176c: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x22176cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221770:
    // 0x221770: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x221770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_221774:
    // 0x221774: 0x24720120  addiu       $s2, $v1, 0x120
    ctx->pc = 0x221774u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_221778:
    // 0x221778: 0x8e500034  lw          $s0, 0x34($s2)
    ctx->pc = 0x221778u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_22177c:
    // 0x22177c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x22177cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_221780:
    // 0x221780: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x221780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
label_221784:
    // 0x221784: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x221784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
label_221788:
    // 0x221788: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x221788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_22178c:
    // 0x22178c: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x22178cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_221790:
    // 0x221790: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x221790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_221794:
    // 0x221794: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x221794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_221798:
    // 0x221798: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x221798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_22179c:
    // 0x22179c: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x22179cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2217a0:
    // 0x2217a0: 0x34860002  ori         $a2, $a0, 0x2
    ctx->pc = 0x2217a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
label_2217a4:
    // 0x2217a4: 0xae060024  sw          $a2, 0x24($s0)
    ctx->pc = 0x2217a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 6));
label_2217a8:
    // 0x2217a8: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x2217a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2217ac:
    // 0x2217ac: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x2217acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_2217b0:
    // 0x2217b0: 0x34664000  ori         $a2, $v1, 0x4000
    ctx->pc = 0x2217b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_2217b4:
    // 0x2217b4: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x2217b4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2217b8:
    // 0x2217b8: 0x2404051f  addiu       $a0, $zero, 0x51F
    ctx->pc = 0x2217b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1311));
label_2217bc:
    // 0x2217bc: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x2217bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_2217c0:
    // 0x2217c0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2217c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2217c4:
    // 0x2217c4: 0xc067b18  jal         func_19EC60
label_2217c8:
    if (ctx->pc == 0x2217C8u) {
        ctx->pc = 0x2217CCu;
        goto label_2217cc;
    }
    ctx->pc = 0x2217C4u;
    SET_GPR_U32(ctx, 31, 0x2217CCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x2217C4u, 0x2217CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2217CCu;
label_2217cc:
    // 0x2217cc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2217ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2217d0:
    // 0x2217d0: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x2217d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2217d4:
    // 0x2217d4: 0xc4601200  lwc1        $f0, 0x1200($v1)
    ctx->pc = 0x2217d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2217d8:
    // 0x2217d8: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2217d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_2217dc:
    // 0x2217dc: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x2217dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2217e0:
    // 0x2217e0: 0xc4601204  lwc1        $f0, 0x1204($v1)
    ctx->pc = 0x2217e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2217e4:
    // 0x2217e4: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2217e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_2217e8:
    // 0x2217e8: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x2217e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2217ec:
    // 0x2217ec: 0xc4601208  lwc1        $f0, 0x1208($v1)
    ctx->pc = 0x2217ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2217f0:
    // 0x2217f0: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x2217f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_2217f4:
    // 0x2217f4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2217f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2217f8:
    // 0x2217f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2217f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2217fc:
    // 0x2217fc: 0x0  nop
    ctx->pc = 0x2217fcu;
    // NOP
label_221800:
    // 0x221800: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x221800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_221804:
    // 0x221804: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221808:
    // 0x221808: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x221808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_22180c:
    // 0x22180c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x22180cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_221810:
    // 0x221810: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x221810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_221814:
    // 0x221814: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x221814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
label_221818:
    // 0x221818: 0x3486ffff  ori         $a2, $a0, 0xFFFF
    ctx->pc = 0x221818u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_22181c:
    // 0x22181c: 0x662024  and         $a0, $v1, $a2
    ctx->pc = 0x22181cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_221820:
    // 0x221820: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x221820u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_221824:
    // 0x221824: 0x34a20001  ori         $v0, $a1, 0x1
    ctx->pc = 0x221824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
label_221828:
    // 0x221828: 0x8fa701a8  lw          $a3, 0x1A8($sp)
    ctx->pc = 0x221828u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_22182c:
    // 0x22182c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x22182cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_221830:
    // 0x221830: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x221830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_221834:
    // 0x221834: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x221834u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_221838:
    // 0x221838: 0x24e300d0  addiu       $v1, $a3, 0xD0
    ctx->pc = 0x221838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 208));
label_22183c:
    // 0x22183c: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x22183cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_221840:
    // 0x221840: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x221840u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_221844:
    // 0x221844: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x221844u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_221848:
    // 0x221848: 0xc06371c  jal         func_18DC70
label_22184c:
    if (ctx->pc == 0x22184Cu) {
        ctx->pc = 0x221850u;
        goto label_221850;
    }
    ctx->pc = 0x221848u;
    SET_GPR_U32(ctx, 31, 0x221850u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x221848u, 0x221850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221850u;
label_221850:
    // 0x221850: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x221850u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_221854:
    // 0x221854: 0x1000003b  b           . + 4 + (0x3B << 2)
label_221858:
    if (ctx->pc == 0x221858u) {
        ctx->pc = 0x22185Cu;
        goto label_22185c;
    }
    ctx->pc = 0x221854u;
    {
        const bool branch_taken_0x221854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221854) {
            ctx->pc = 0x221944u;
            goto label_221944;
        }
    }
    ctx->pc = 0x22185Cu;
label_22185c:
    // 0x22185c: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x22185cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221860:
    // 0x221860: 0xc4601200  lwc1        $f0, 0x1200($v1)
    ctx->pc = 0x221860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_221864:
    // 0x221864: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x221864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_221868:
    // 0x221868: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_22186c:
    // 0x22186c: 0xc4601208  lwc1        $f0, 0x1208($v1)
    ctx->pc = 0x22186cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_221870:
    // 0x221870: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x221870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_221874:
    // 0x221874: 0x3c123f80  lui         $s2, 0x3F80
    ctx->pc = 0x221874u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16256 << 16));
label_221878:
    // 0x221878: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x221878u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22187c:
    // 0x22187c: 0x0  nop
    ctx->pc = 0x22187cu;
    // NOP
label_221880:
    // 0x221880: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x221880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_221884:
    // 0x221884: 0x8fb001a8  lw          $s0, 0x1A8($sp)
    ctx->pc = 0x221884u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221888:
    // 0x221888: 0xc6001204  lwc1        $f0, 0x1204($s0)
    ctx->pc = 0x221888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22188c:
    // 0x22188c: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x22188cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_221890:
    // 0x221890: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x221890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
label_221894:
    // 0x221894: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x221894u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_221898:
    // 0x221898: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x221898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_22189c:
    // 0x22189c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x22189cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2218a0:
    // 0x2218a0: 0xc062f5c  jal         func_18BD70
label_2218a4:
    if (ctx->pc == 0x2218A4u) {
        ctx->pc = 0x2218A8u;
        goto label_2218a8;
    }
    ctx->pc = 0x2218A0u;
    SET_GPR_U32(ctx, 31, 0x2218A8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2218A0u, 0x2218A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2218A8u;
label_2218a8:
    // 0x2218a8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2218a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2218ac:
    // 0x2218ac: 0xc0630a8  jal         func_18C2A0
label_2218b0:
    if (ctx->pc == 0x2218B0u) {
        ctx->pc = 0x2218B4u;
        goto label_2218b4;
    }
    ctx->pc = 0x2218ACu;
    SET_GPR_U32(ctx, 31, 0x2218B4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2218ACu, 0x2218B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2218B4u;
label_2218b4:
    // 0x2218b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2218b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2218b8:
    // 0x2218b8: 0x10000022  b           . + 4 + (0x22 << 2)
label_2218bc:
    if (ctx->pc == 0x2218BCu) {
        ctx->pc = 0x2218C0u;
        goto label_2218c0;
    }
    ctx->pc = 0x2218B8u;
    {
        const bool branch_taken_0x2218b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2218b8) {
            ctx->pc = 0x221944u;
            goto label_221944;
        }
    }
    ctx->pc = 0x2218C0u;
label_2218c0:
    // 0x2218c0: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x2218c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2218c4:
    // 0x2218c4: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x2218c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2218c8:
    // 0x2218c8: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x2218c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_2218cc:
    // 0x2218cc: 0x846611f2  lh          $a2, 0x11F2($v1)
    ctx->pc = 0x2218ccu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4594)));
label_2218d0:
    // 0x2218d0: 0xc06d1d8  jal         func_1B4760
label_2218d4:
    if (ctx->pc == 0x2218D4u) {
        ctx->pc = 0x2218D8u;
        goto label_2218d8;
    }
    ctx->pc = 0x2218D0u;
    SET_GPR_U32(ctx, 31, 0x2218D8u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x2218D0u, 0x2218D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2218D8u;
label_2218d8:
    // 0x2218d8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2218d8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2218dc:
    // 0x2218dc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2218dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2218e0:
    // 0x2218e0: 0xc040cbc  jal         func_1032F0
label_2218e4:
    if (ctx->pc == 0x2218E4u) {
        ctx->pc = 0x2218E8u;
        goto label_2218e8;
    }
    ctx->pc = 0x2218E0u;
    SET_GPR_U32(ctx, 31, 0x2218E8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x2218E8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2218E8u) { return; }
    ctx->pc = 0x2218E8u;
label_2218e8:
    // 0x2218e8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2218e8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2218ec:
    // 0x2218ec: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x2218ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2218f0:
    // 0x2218f0: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x2218f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2218f4:
    // 0x2218f4: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x2218f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_2218f8:
    // 0x2218f8: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x2218f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2218fc:
    // 0x2218fc: 0xc4401204  lwc1        $f0, 0x1204($v0)
    ctx->pc = 0x2218fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_221900:
    // 0x221900: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x221900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_221904:
    // 0x221904: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221908:
    // 0x221908: 0xc4601208  lwc1        $f0, 0x1208($v1)
    ctx->pc = 0x221908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22190c:
    // 0x22190c: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x22190cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_221910:
    // 0x221910: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x221910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_221914:
    // 0x221914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x221914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_221918:
    // 0x221918: 0x0  nop
    ctx->pc = 0x221918u;
    // NOP
label_22191c:
    // 0x22191c: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x22191cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_221920:
    // 0x221920: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x221920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
label_221924:
    // 0x221924: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x221924u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_221928:
    // 0x221928: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x221928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_22192c:
    // 0x22192c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x22192cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_221930:
    // 0x221930: 0xc062f5c  jal         func_18BD70
label_221934:
    if (ctx->pc == 0x221934u) {
        ctx->pc = 0x221938u;
        goto label_221938;
    }
    ctx->pc = 0x221930u;
    SET_GPR_U32(ctx, 31, 0x221938u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x221930u, 0x221938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221938u;
label_221938:
    // 0x221938: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x221938u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_22193c:
    // 0x22193c: 0xc0630a8  jal         func_18C2A0
label_221940:
    if (ctx->pc == 0x221940u) {
        ctx->pc = 0x221944u;
        goto label_221944;
    }
    ctx->pc = 0x22193Cu;
    SET_GPR_U32(ctx, 31, 0x221944u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x22193Cu, 0x221944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221944u;
label_221944:
    // 0x221944: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221948:
    // 0x221948: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x221948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_22194c:
    // 0x22194c: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x22194cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_221950:
    // 0x221950: 0x3486c000  ori         $a2, $a0, 0xC000
    ctx->pc = 0x221950u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
label_221954:
    // 0x221954: 0xac660030  sw          $a2, 0x30($v1)
    ctx->pc = 0x221954u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 6));
label_221958:
    // 0x221958: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_22195c:
    // 0x22195c: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x22195cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
label_221960:
    // 0x221960: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x221960u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_221964:
    // 0x221964: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x221964u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_221968:
    // 0x221968: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
label_22196c:
    if (ctx->pc == 0x22196Cu) {
        ctx->pc = 0x221970u;
        goto label_221970;
    }
    ctx->pc = 0x221968u;
    {
        const bool branch_taken_0x221968 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x221968) {
            ctx->pc = 0x221980u;
            goto label_221980;
        }
    }
    ctx->pc = 0x221970u;
label_221970:
    // 0x221970: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x221970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_221974:
    // 0x221974: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221978:
    // 0x221978: 0x24861330  addiu       $a2, $a0, 0x1330
    ctx->pc = 0x221978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_22197c:
    // 0x22197c: 0xa4c3005e  sh          $v1, 0x5E($a2)
    ctx->pc = 0x22197cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 94), (uint16_t)GPR_U32(ctx, 3));
label_221980:
    // 0x221980: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221984:
    // 0x221984: 0x948411f6  lhu         $a0, 0x11F6($a0)
    ctx->pc = 0x221984u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4598)));
label_221988:
    // 0x221988: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x221988u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_22198c:
    // 0x22198c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x22198cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_221990:
    // 0x221990: 0x2463ad70  addiu       $v1, $v1, -0x5290
    ctx->pc = 0x221990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946160));
label_221994:
    // 0x221994: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x221994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_221998:
    // 0x221998: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x221998u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_22199c:
    // 0x22199c: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x22199cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2219a0:
    // 0x2219a0: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x2219a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2219a4:
    // 0x2219a4: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2219a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2219a8:
    // 0x2219a8: 0x84a4005e  lh          $a0, 0x5E($a1)
    ctx->pc = 0x2219a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 94)));
label_2219ac:
    // 0x2219ac: 0x861823  subu        $v1, $a0, $a2
    ctx->pc = 0x2219acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2219b0:
    // 0x2219b0: 0xa4a3005e  sh          $v1, 0x5E($a1)
    ctx->pc = 0x2219b0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 94), (uint16_t)GPR_U32(ctx, 3));
label_2219b4:
    // 0x2219b4: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x2219b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2219b8:
    // 0x2219b8: 0x846311f2  lh          $v1, 0x11F2($v1)
    ctx->pc = 0x2219b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4594)));
label_2219bc:
    // 0x2219bc: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x2219bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
label_2219c0:
    // 0x2219c0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2219c0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_2219c4:
    // 0x2219c4: 0x28a1012d  slti        $at, $a1, 0x12D
    ctx->pc = 0x2219c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)301) ? 1 : 0);
label_2219c8:
    // 0x2219c8: 0x1420001b  bnez        $at, . + 4 + (0x1B << 2)
label_2219cc:
    if (ctx->pc == 0x2219CCu) {
        ctx->pc = 0x2219D0u;
        goto label_2219d0;
    }
    ctx->pc = 0x2219C8u;
    {
        const bool branch_taken_0x2219c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2219c8) {
            ctx->pc = 0x221A38u;
            goto label_221a38;
        }
    }
    ctx->pc = 0x2219D0u;
label_2219d0:
    // 0x2219d0: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x2219d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2219d4:
    // 0x2219d4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2219d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2219d8:
    // 0x2219d8: 0x8483005e  lh          $v1, 0x5E($a0)
    ctx->pc = 0x2219d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 94)));
label_2219dc:
    // 0x2219dc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2219dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_2219e0:
    // 0x2219e0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2219e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_2219e4:
    // 0x2219e4: 0x4600014  bltz        $v1, . + 4 + (0x14 << 2)
label_2219e8:
    if (ctx->pc == 0x2219E8u) {
        ctx->pc = 0x2219ECu;
        goto label_2219ec;
    }
    ctx->pc = 0x2219E4u;
    {
        const bool branch_taken_0x2219e4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2219e4) {
            ctx->pc = 0x221A38u;
            goto label_221a38;
        }
    }
    ctx->pc = 0x2219ECu;
label_2219ec:
    // 0x2219ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2219ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2219f0:
    // 0x2219f0: 0x8c311a98  lw          $s1, 0x1A98($at)
    ctx->pc = 0x2219f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_2219f4:
    // 0x2219f4: 0x32238000  andi        $v1, $s1, 0x8000
    ctx->pc = 0x2219f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32768);
label_2219f8:
    // 0x2219f8: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_2219fc:
    if (ctx->pc == 0x2219FCu) {
        ctx->pc = 0x221A00u;
        goto label_221a00;
    }
    ctx->pc = 0x2219F8u;
    {
        const bool branch_taken_0x2219f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2219f8) {
            ctx->pc = 0x221A38u;
            goto label_221a38;
        }
    }
    ctx->pc = 0x221A00u;
label_221a00:
    // 0x221a00: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x221a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_221a04:
    // 0x221a04: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221a08:
    // 0x221a08: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x221a08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_221a0c:
    // 0x221a0c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x221a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_221a10:
    // 0x221a10: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221a14:
    // 0x221a14: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x221a14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_221a18:
    // 0x221a18: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x221a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221a1c:
    // 0x221a1c: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x221a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
label_221a20:
    // 0x221a20: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221a24:
    // 0x221a24: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x221a24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_221a28:
    // 0x221a28: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221a2c:
    // 0x221a2c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x221a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_221a30:
    // 0x221a30: 0x100000e6  b           . + 4 + (0xE6 << 2)
label_221a34:
    if (ctx->pc == 0x221A34u) {
        ctx->pc = 0x221A38u;
        goto label_221a38;
    }
    ctx->pc = 0x221A30u;
    {
        const bool branch_taken_0x221a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221a30) {
            ctx->pc = 0x221DCCu;
            goto label_221dcc;
        }
    }
    ctx->pc = 0x221A38u;
label_221a38:
    // 0x221a38: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221a3c:
    // 0x221a3c: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x221a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_221a40:
    // 0x221a40: 0x84a3005e  lh          $v1, 0x5E($a1)
    ctx->pc = 0x221a40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 94)));
label_221a44:
    // 0x221a44: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x221a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_221a48:
    // 0x221a48: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x221a48u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_221a4c:
    // 0x221a4c: 0x461000e  bgez        $v1, . + 4 + (0xE << 2)
label_221a50:
    if (ctx->pc == 0x221A50u) {
        ctx->pc = 0x221A54u;
        goto label_221a54;
    }
    ctx->pc = 0x221A4Cu;
    {
        const bool branch_taken_0x221a4c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x221a4c) {
            ctx->pc = 0x221A88u;
            goto label_221a88;
        }
    }
    ctx->pc = 0x221A54u;
label_221a54:
    // 0x221a54: 0xc067694  jal         func_19DA50
label_221a58:
    if (ctx->pc == 0x221A58u) {
        ctx->pc = 0x221A5Cu;
        goto label_221a5c;
    }
    ctx->pc = 0x221A54u;
    SET_GPR_U32(ctx, 31, 0x221A5Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x221A54u, 0x221A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221A5Cu;
label_221a5c:
    // 0x221a5c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x221a5cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_221a60:
    // 0x221a60: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x221a60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_221a64:
    // 0x221a64: 0x30830007  andi        $v1, $a0, 0x7
    ctx->pc = 0x221a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
label_221a68:
    // 0x221a68: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x221a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_221a6c:
    // 0x221a6c: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x221a6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
label_221a70:
    // 0x221a70: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x221a70u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_221a74:
    // 0x221a74: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221a78:
    // 0x221a78: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x221a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_221a7c:
    // 0x221a7c: 0xa485005e  sh          $a1, 0x5E($a0)
    ctx->pc = 0x221a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 94), (uint16_t)GPR_U32(ctx, 5));
label_221a80:
    // 0x221a80: 0x10000066  b           . + 4 + (0x66 << 2)
label_221a84:
    if (ctx->pc == 0x221A84u) {
        ctx->pc = 0x221A88u;
        goto label_221a88;
    }
    ctx->pc = 0x221A80u;
    {
        const bool branch_taken_0x221a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221a80) {
            ctx->pc = 0x221C1Cu;
            goto label_221c1c;
        }
    }
    ctx->pc = 0x221A88u;
label_221a88:
    // 0x221a88: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x221a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221a8c:
    // 0x221a8c: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x221a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_221a90:
    // 0x221a90: 0x34654000  ori         $a1, $v1, 0x4000
    ctx->pc = 0x221a90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_221a94:
    // 0x221a94: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x221a94u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_221a98:
    // 0x221a98: 0x24040102  addiu       $a0, $zero, 0x102
    ctx->pc = 0x221a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_221a9c:
    // 0x221a9c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x221a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_221aa0:
    // 0x221aa0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x221aa0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_221aa4:
    // 0x221aa4: 0xc067b18  jal         func_19EC60
label_221aa8:
    if (ctx->pc == 0x221AA8u) {
        ctx->pc = 0x221AACu;
        goto label_221aac;
    }
    ctx->pc = 0x221AA4u;
    SET_GPR_U32(ctx, 31, 0x221AACu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x221AA4u, 0x221AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221AACu;
label_221aac:
    // 0x221aac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x221aacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_221ab0:
    // 0x221ab0: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221ab4:
    // 0x221ab4: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x221ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_221ab8:
    // 0x221ab8: 0x84a4005c  lh          $a0, 0x5C($a1)
    ctx->pc = 0x221ab8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 92)));
label_221abc:
    // 0x221abc: 0x2483fffb  addiu       $v1, $a0, -0x5
    ctx->pc = 0x221abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967291));
label_221ac0:
    // 0x221ac0: 0xa4a3005c  sh          $v1, 0x5C($a1)
    ctx->pc = 0x221ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 92), (uint16_t)GPR_U32(ctx, 3));
label_221ac4:
    // 0x221ac4: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221ac8:
    // 0x221ac8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x221ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_221acc:
    // 0x221acc: 0x8483005c  lh          $v1, 0x5C($a0)
    ctx->pc = 0x221accu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 92)));
label_221ad0:
    // 0x221ad0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x221ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_221ad4:
    // 0x221ad4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x221ad4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_221ad8:
    // 0x221ad8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_221adc:
    if (ctx->pc == 0x221ADCu) {
        ctx->pc = 0x221AE0u;
        goto label_221ae0;
    }
    ctx->pc = 0x221AD8u;
    {
        const bool branch_taken_0x221ad8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x221ad8) {
            ctx->pc = 0x221AECu;
            goto label_221aec;
        }
    }
    ctx->pc = 0x221AE0u;
label_221ae0:
    // 0x221ae0: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x221ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221ae4:
    // 0x221ae4: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x221ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
label_221ae8:
    // 0x221ae8: 0xa460005c  sh          $zero, 0x5C($v1)
    ctx->pc = 0x221ae8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 0));
label_221aec:
    // 0x221aec: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x221aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_221af0:
    // 0x221af0: 0xc040cbc  jal         func_1032F0
label_221af4:
    if (ctx->pc == 0x221AF4u) {
        ctx->pc = 0x221AF8u;
        goto label_221af8;
    }
    ctx->pc = 0x221AF0u;
    SET_GPR_U32(ctx, 31, 0x221AF8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x221AF8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x221AF8u) { return; }
    ctx->pc = 0x221AF8u;
label_221af8:
    // 0x221af8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x221af8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_221afc:
    // 0x221afc: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221b00:
    // 0x221b00: 0xc4611200  lwc1        $f1, 0x1200($v1)
    ctx->pc = 0x221b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_221b04:
    // 0x221b04: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x221b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221b08:
    // 0x221b08: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x221b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_221b0c:
    // 0x221b0c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x221b0cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_221b10:
    // 0x221b10: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x221b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_221b14:
    // 0x221b14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x221b14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_221b18:
    // 0x221b18: 0x0  nop
    ctx->pc = 0x221b18u;
    // NOP
label_221b1c:
    // 0x221b1c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x221b1cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_221b20:
    // 0x221b20: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x221b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221b24:
    // 0x221b24: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x221b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_221b28:
    // 0x221b28: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x221b28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_221b2c:
    // 0x221b2c: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x221b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_221b30:
    // 0x221b30: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x221b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221b34:
    // 0x221b34: 0xc4411204  lwc1        $f1, 0x1204($v0)
    ctx->pc = 0x221b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_221b38:
    // 0x221b38: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x221b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_221b3c:
    // 0x221b3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x221b3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_221b40:
    // 0x221b40: 0x0  nop
    ctx->pc = 0x221b40u;
    // NOP
label_221b44:
    // 0x221b44: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x221b44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_221b48:
    // 0x221b48: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x221b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_221b4c:
    // 0x221b4c: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221b50:
    // 0x221b50: 0xc4811208  lwc1        $f1, 0x1208($a0)
    ctx->pc = 0x221b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_221b54:
    // 0x221b54: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x221b54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221b58:
    // 0x221b58: 0xc4c00128  lwc1        $f0, 0x128($a2)
    ctx->pc = 0x221b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_221b5c:
    // 0x221b5c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x221b5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_221b60:
    // 0x221b60: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x221b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_221b64:
    // 0x221b64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x221b64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_221b68:
    // 0x221b68: 0x0  nop
    ctx->pc = 0x221b68u;
    // NOP
label_221b6c:
    // 0x221b6c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x221b6cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_221b70:
    // 0x221b70: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x221b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221b74:
    // 0x221b74: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x221b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_221b78:
    // 0x221b78: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x221b78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_221b7c:
    // 0x221b7c: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x221b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_221b80:
    // 0x221b80: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x221b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_221b84:
    // 0x221b84: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x221b84u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_221b88:
    // 0x221b88: 0x0  nop
    ctx->pc = 0x221b88u;
    // NOP
label_221b8c:
    // 0x221b8c: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x221b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_221b90:
    // 0x221b90: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x221b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_221b94:
    // 0x221b94: 0x34460fdb  ori         $a2, $v0, 0xFDB
    ctx->pc = 0x221b94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_221b98:
    // 0x221b98: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x221b98u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_221b9c:
    // 0x221b9c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x221b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_221ba0:
    // 0x221ba0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x221ba0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_221ba4:
    // 0x221ba4: 0xc058fec  jal         func_163FB0
label_221ba8:
    if (ctx->pc == 0x221BA8u) {
        ctx->pc = 0x221BACu;
        goto label_221bac;
    }
    ctx->pc = 0x221BA4u;
    SET_GPR_U32(ctx, 31, 0x221BACu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x221BA4u, 0x221BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221BACu;
label_221bac:
    // 0x221bac: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x221bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_221bb0:
    // 0x221bb0: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x221bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221bb4:
    // 0x221bb4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x221bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_221bb8:
    // 0x221bb8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x221bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_221bbc:
    // 0x221bbc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x221bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_221bc0:
    // 0x221bc0: 0x32c38  dsll        $a1, $v1, 16
    ctx->pc = 0x221bc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 16);
label_221bc4:
    // 0x221bc4: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x221bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_221bc8:
    // 0x221bc8: 0x432024  and         $a0, $v0, $v1
    ctx->pc = 0x221bc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_221bcc:
    // 0x221bcc: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x221bccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
label_221bd0:
    // 0x221bd0: 0x34c20206  ori         $v0, $a2, 0x206
    ctx->pc = 0x221bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)518);
label_221bd4:
    // 0x221bd4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x221bd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_221bd8:
    // 0x221bd8: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x221bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_221bdc:
    // 0x221bdc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x221bdcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_221be0:
    // 0x221be0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x221be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_221be4:
    // 0x221be4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x221be4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_221be8:
    // 0x221be8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x221be8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_221bec:
    // 0x221bec: 0xc06371c  jal         func_18DC70
label_221bf0:
    if (ctx->pc == 0x221BF0u) {
        ctx->pc = 0x221BF4u;
        goto label_221bf4;
    }
    ctx->pc = 0x221BECu;
    SET_GPR_U32(ctx, 31, 0x221BF4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x221BECu, 0x221BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221BF4u;
label_221bf4:
    // 0x221bf4: 0x3c114049  lui         $s1, 0x4049
    ctx->pc = 0x221bf4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16457 << 16));
label_221bf8:
    // 0x221bf8: 0x36220fdb  ori         $v0, $s1, 0xFDB
    ctx->pc = 0x221bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)4059);
label_221bfc:
    // 0x221bfc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x221bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_221c00:
    // 0x221c00: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x221c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_221c04:
    // 0x221c04: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x221c04u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_221c08:
    // 0x221c08: 0xc058fec  jal         func_163FB0
label_221c0c:
    if (ctx->pc == 0x221C0Cu) {
        ctx->pc = 0x221C10u;
        goto label_221c10;
    }
    ctx->pc = 0x221C08u;
    SET_GPR_U32(ctx, 31, 0x221C10u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x221C08u, 0x221C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221C10u;
label_221c10:
    // 0x221c10: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x221c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_221c14:
    // 0x221c14: 0x1000006d  b           . + 4 + (0x6D << 2)
label_221c18:
    if (ctx->pc == 0x221C18u) {
        ctx->pc = 0x221C1Cu;
        goto label_221c1c;
    }
    ctx->pc = 0x221C14u;
    {
        const bool branch_taken_0x221c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221c14) {
            ctx->pc = 0x221DCCu;
            goto label_221dcc;
        }
    }
    ctx->pc = 0x221C1Cu;
label_221c1c:
    // 0x221c1c: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221c20:
    // 0x221c20: 0x846410a6  lh          $a0, 0x10A6($v1)
    ctx->pc = 0x221c20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
label_221c24:
    // 0x221c24: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x221c24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
label_221c28:
    // 0x221c28: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x221c28u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_221c2c:
    // 0x221c2c: 0x4c00044  bltz        $a2, . + 4 + (0x44 << 2)
label_221c30:
    if (ctx->pc == 0x221C30u) {
        ctx->pc = 0x221C34u;
        goto label_221c34;
    }
    ctx->pc = 0x221C2Cu;
    {
        const bool branch_taken_0x221c2c = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x221c2c) {
            ctx->pc = 0x221D40u;
            goto label_221d40;
        }
    }
    ctx->pc = 0x221C34u;
label_221c34:
    // 0x221c34: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221c38:
    // 0x221c38: 0x948311f6  lhu         $v1, 0x11F6($a0)
    ctx->pc = 0x221c38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4598)));
label_221c3c:
    // 0x221c3c: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x221c3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_221c40:
    // 0x221c40: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x221c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_221c44:
    // 0x221c44: 0x10e30031  beq         $a3, $v1, . + 4 + (0x31 << 2)
label_221c48:
    if (ctx->pc == 0x221C48u) {
        ctx->pc = 0x221C4Cu;
        goto label_221c4c;
    }
    ctx->pc = 0x221C44u;
    {
        const bool branch_taken_0x221c44 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x221c44) {
            ctx->pc = 0x221D0Cu;
            goto label_221d0c;
        }
    }
    ctx->pc = 0x221C4Cu;
label_221c4c:
    // 0x221c4c: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x221c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_221c50:
    // 0x221c50: 0x10e4002e  beq         $a3, $a0, . + 4 + (0x2E << 2)
label_221c54:
    if (ctx->pc == 0x221C54u) {
        ctx->pc = 0x221C58u;
        goto label_221c58;
    }
    ctx->pc = 0x221C50u;
    {
        const bool branch_taken_0x221c50 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x221c50) {
            ctx->pc = 0x221D0Cu;
            goto label_221d0c;
        }
    }
    ctx->pc = 0x221C58u;
label_221c58:
    // 0x221c58: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x221c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_221c5c:
    // 0x221c5c: 0x10e6002b  beq         $a3, $a2, . + 4 + (0x2B << 2)
label_221c60:
    if (ctx->pc == 0x221C60u) {
        ctx->pc = 0x221C64u;
        goto label_221c64;
    }
    ctx->pc = 0x221C5Cu;
    {
        const bool branch_taken_0x221c5c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x221c5c) {
            ctx->pc = 0x221D0Cu;
            goto label_221d0c;
        }
    }
    ctx->pc = 0x221C64u;
label_221c64:
    // 0x221c64: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x221c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_221c68:
    // 0x221c68: 0x10e40028  beq         $a3, $a0, . + 4 + (0x28 << 2)
label_221c6c:
    if (ctx->pc == 0x221C6Cu) {
        ctx->pc = 0x221C70u;
        goto label_221c70;
    }
    ctx->pc = 0x221C68u;
    {
        const bool branch_taken_0x221c68 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x221c68) {
            ctx->pc = 0x221D0Cu;
            goto label_221d0c;
        }
    }
    ctx->pc = 0x221C70u;
label_221c70:
    // 0x221c70: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x221c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_221c74:
    // 0x221c74: 0x10e30025  beq         $a3, $v1, . + 4 + (0x25 << 2)
label_221c78:
    if (ctx->pc == 0x221C78u) {
        ctx->pc = 0x221C7Cu;
        goto label_221c7c;
    }
    ctx->pc = 0x221C74u;
    {
        const bool branch_taken_0x221c74 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x221c74) {
            ctx->pc = 0x221D0Cu;
            goto label_221d0c;
        }
    }
    ctx->pc = 0x221C7Cu;
label_221c7c:
    // 0x221c7c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x221c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_221c80:
    // 0x221c80: 0x10e50022  beq         $a3, $a1, . + 4 + (0x22 << 2)
label_221c84:
    if (ctx->pc == 0x221C84u) {
        ctx->pc = 0x221C88u;
        goto label_221c88;
    }
    ctx->pc = 0x221C80u;
    {
        const bool branch_taken_0x221c80 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x221c80) {
            ctx->pc = 0x221D0Cu;
            goto label_221d0c;
        }
    }
    ctx->pc = 0x221C88u;
label_221c88:
    // 0x221c88: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x221c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_221c8c:
    // 0x221c8c: 0x10e3001f  beq         $a3, $v1, . + 4 + (0x1F << 2)
label_221c90:
    if (ctx->pc == 0x221C90u) {
        ctx->pc = 0x221C94u;
        goto label_221c94;
    }
    ctx->pc = 0x221C8Cu;
    {
        const bool branch_taken_0x221c8c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x221c8c) {
            ctx->pc = 0x221D0Cu;
            goto label_221d0c;
        }
    }
    ctx->pc = 0x221C94u;
label_221c94:
    // 0x221c94: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x221c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_221c98:
    // 0x221c98: 0x10e4001c  beq         $a3, $a0, . + 4 + (0x1C << 2)
label_221c9c:
    if (ctx->pc == 0x221C9Cu) {
        ctx->pc = 0x221CA0u;
        goto label_221ca0;
    }
    ctx->pc = 0x221C98u;
    {
        const bool branch_taken_0x221c98 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x221c98) {
            ctx->pc = 0x221D0Cu;
            goto label_221d0c;
        }
    }
    ctx->pc = 0x221CA0u;
label_221ca0:
    // 0x221ca0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x221ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_221ca4:
    // 0x221ca4: 0x10e30019  beq         $a3, $v1, . + 4 + (0x19 << 2)
label_221ca8:
    if (ctx->pc == 0x221CA8u) {
        ctx->pc = 0x221CACu;
        goto label_221cac;
    }
    ctx->pc = 0x221CA4u;
    {
        const bool branch_taken_0x221ca4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x221ca4) {
            ctx->pc = 0x221D0Cu;
            goto label_221d0c;
        }
    }
    ctx->pc = 0x221CACu;
label_221cac:
    // 0x221cac: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x221cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_221cb0:
    // 0x221cb0: 0x10e30016  beq         $a3, $v1, . + 4 + (0x16 << 2)
label_221cb4:
    if (ctx->pc == 0x221CB4u) {
        ctx->pc = 0x221CB8u;
        goto label_221cb8;
    }
    ctx->pc = 0x221CB0u;
    {
        const bool branch_taken_0x221cb0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x221cb0) {
            ctx->pc = 0x221D0Cu;
            goto label_221d0c;
        }
    }
    ctx->pc = 0x221CB8u;
label_221cb8:
    // 0x221cb8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x221cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_221cbc:
    // 0x221cbc: 0x10e30013  beq         $a3, $v1, . + 4 + (0x13 << 2)
label_221cc0:
    if (ctx->pc == 0x221CC0u) {
        ctx->pc = 0x221CC4u;
        goto label_221cc4;
    }
    ctx->pc = 0x221CBCu;
    {
        const bool branch_taken_0x221cbc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x221cbc) {
            ctx->pc = 0x221D0Cu;
            goto label_221d0c;
        }
    }
    ctx->pc = 0x221CC4u;
label_221cc4:
    // 0x221cc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x221cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_221cc8:
    // 0x221cc8: 0x10e50003  beq         $a3, $a1, . + 4 + (0x3 << 2)
label_221ccc:
    if (ctx->pc == 0x221CCCu) {
        ctx->pc = 0x221CD0u;
        goto label_221cd0;
    }
    ctx->pc = 0x221CC8u;
    {
        const bool branch_taken_0x221cc8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x221cc8) {
            ctx->pc = 0x221CD8u;
            goto label_221cd8;
        }
    }
    ctx->pc = 0x221CD0u;
label_221cd0:
    // 0x221cd0: 0x10000001  b           . + 4 + (0x1 << 2)
label_221cd4:
    if (ctx->pc == 0x221CD4u) {
        ctx->pc = 0x221CD8u;
        goto label_221cd8;
    }
    ctx->pc = 0x221CD0u;
    {
        const bool branch_taken_0x221cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221cd0) {
            ctx->pc = 0x221CD8u;
            goto label_221cd8;
        }
    }
    ctx->pc = 0x221CD8u;
label_221cd8:
    // 0x221cd8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x221cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_221cdc:
    // 0x221cdc: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221ce0:
    // 0x221ce0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x221ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_221ce4:
    // 0x221ce4: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221ce8:
    // 0x221ce8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x221ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_221cec:
    // 0x221cec: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221cf0:
    // 0x221cf0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x221cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_221cf4:
    // 0x221cf4: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221cf8:
    // 0x221cf8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x221cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_221cfc:
    // 0x221cfc: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221d00:
    // 0x221d00: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x221d00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_221d04:
    // 0x221d04: 0x10000031  b           . + 4 + (0x31 << 2)
label_221d08:
    if (ctx->pc == 0x221D08u) {
        ctx->pc = 0x221D0Cu;
        goto label_221d0c;
    }
    ctx->pc = 0x221D04u;
    {
        const bool branch_taken_0x221d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221d04) {
            ctx->pc = 0x221DCCu;
            goto label_221dcc;
        }
    }
    ctx->pc = 0x221D0Cu;
label_221d0c:
    // 0x221d0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x221d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_221d10:
    // 0x221d10: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221d14:
    // 0x221d14: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x221d14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_221d18:
    // 0x221d18: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x221d18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221d1c:
    // 0x221d1c: 0xa0c00001  sb          $zero, 0x1($a2)
    ctx->pc = 0x221d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 0));
label_221d20:
    // 0x221d20: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221d24:
    // 0x221d24: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x221d24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_221d28:
    // 0x221d28: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221d2c:
    // 0x221d2c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x221d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_221d30:
    // 0x221d30: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221d34:
    // 0x221d34: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x221d34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_221d38:
    // 0x221d38: 0x10000024  b           . + 4 + (0x24 << 2)
label_221d3c:
    if (ctx->pc == 0x221D3Cu) {
        ctx->pc = 0x221D40u;
        goto label_221d40;
    }
    ctx->pc = 0x221D38u;
    {
        const bool branch_taken_0x221d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221d38) {
            ctx->pc = 0x221DCCu;
            goto label_221dcc;
        }
    }
    ctx->pc = 0x221D40u;
label_221d40:
    // 0x221d40: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221d44:
    // 0x221d44: 0x948611f6  lhu         $a2, 0x11F6($a0)
    ctx->pc = 0x221d44u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4598)));
label_221d48:
    // 0x221d48: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x221d48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_221d4c:
    // 0x221d4c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x221d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_221d50:
    // 0x221d50: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_221d54:
    if (ctx->pc == 0x221D54u) {
        ctx->pc = 0x221D58u;
        goto label_221d58;
    }
    ctx->pc = 0x221D50u;
    {
        const bool branch_taken_0x221d50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x221d50) {
            ctx->pc = 0x221DA0u;
            goto label_221da0;
        }
    }
    ctx->pc = 0x221D58u;
label_221d58:
    // 0x221d58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x221d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_221d5c:
    // 0x221d5c: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
label_221d60:
    if (ctx->pc == 0x221D60u) {
        ctx->pc = 0x221D64u;
        goto label_221d64;
    }
    ctx->pc = 0x221D5Cu;
    {
        const bool branch_taken_0x221d5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x221d5c) {
            ctx->pc = 0x221D6Cu;
            goto label_221d6c;
        }
    }
    ctx->pc = 0x221D64u;
label_221d64:
    // 0x221d64: 0x10000001  b           . + 4 + (0x1 << 2)
label_221d68:
    if (ctx->pc == 0x221D68u) {
        ctx->pc = 0x221D6Cu;
        goto label_221d6c;
    }
    ctx->pc = 0x221D64u;
    {
        const bool branch_taken_0x221d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221d64) {
            ctx->pc = 0x221D6Cu;
            goto label_221d6c;
        }
    }
    ctx->pc = 0x221D6Cu;
label_221d6c:
    // 0x221d6c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x221d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_221d70:
    // 0x221d70: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221d74:
    // 0x221d74: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x221d74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
label_221d78:
    // 0x221d78: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221d7c:
    // 0x221d7c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x221d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_221d80:
    // 0x221d80: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221d84:
    // 0x221d84: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x221d84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_221d88:
    // 0x221d88: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221d8c:
    // 0x221d8c: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x221d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_221d90:
    // 0x221d90: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x221d90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221d94:
    // 0x221d94: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x221d94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_221d98:
    // 0x221d98: 0x1000000c  b           . + 4 + (0xC << 2)
label_221d9c:
    if (ctx->pc == 0x221D9Cu) {
        ctx->pc = 0x221DA0u;
        goto label_221da0;
    }
    ctx->pc = 0x221D98u;
    {
        const bool branch_taken_0x221d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221d98) {
            ctx->pc = 0x221DCCu;
            goto label_221dcc;
        }
    }
    ctx->pc = 0x221DA0u;
label_221da0:
    // 0x221da0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x221da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_221da4:
    // 0x221da4: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221da8:
    // 0x221da8: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x221da8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
label_221dac:
    // 0x221dac: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221db0:
    // 0x221db0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x221db0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_221db4:
    // 0x221db4: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221db8:
    // 0x221db8: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x221db8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_221dbc:
    // 0x221dbc: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221dc0:
    // 0x221dc0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x221dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_221dc4:
    // 0x221dc4: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221dc8:
    // 0x221dc8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x221dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_221dcc:
    // 0x221dcc: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x221dccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_221dd0:
    // 0x221dd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x221dd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_221dd4:
    // 0x221dd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x221dd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_221dd8:
    // 0x221dd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x221dd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_221ddc:
    // 0x221ddc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x221ddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_221de0:
    // 0x221de0: 0x27bd01b0  addiu       $sp, $sp, 0x1B0
    ctx->pc = 0x221de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_221de4:
    // 0x221de4: 0x3e00008  jr          $ra
label_221de8:
    if (ctx->pc == 0x221DE8u) {
        ctx->pc = 0x221DECu;
        goto label_fallthrough_0x221de4;
    }
    ctx->pc = 0x221DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x221de4:
    ctx->pc = 0x221DECu;
}
