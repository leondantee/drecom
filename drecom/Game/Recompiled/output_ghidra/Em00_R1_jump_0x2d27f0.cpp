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

// Function: Em00_R1_jump
// Address: 0x2d27f0 - 0x2d2db4
void Em00_R1_jump_0x2d27f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_R1_jump_0x2d27f0");
#endif

    switch (ctx->pc) {
        case 0x2d27f0u: goto label_2d27f0;
        case 0x2d27f4u: goto label_2d27f4;
        case 0x2d27f8u: goto label_2d27f8;
        case 0x2d27fcu: goto label_2d27fc;
        case 0x2d2800u: goto label_2d2800;
        case 0x2d2804u: goto label_2d2804;
        case 0x2d2808u: goto label_2d2808;
        case 0x2d280cu: goto label_2d280c;
        case 0x2d2810u: goto label_2d2810;
        case 0x2d2814u: goto label_2d2814;
        case 0x2d2818u: goto label_2d2818;
        case 0x2d281cu: goto label_2d281c;
        case 0x2d2820u: goto label_2d2820;
        case 0x2d2824u: goto label_2d2824;
        case 0x2d2828u: goto label_2d2828;
        case 0x2d282cu: goto label_2d282c;
        case 0x2d2830u: goto label_2d2830;
        case 0x2d2834u: goto label_2d2834;
        case 0x2d2838u: goto label_2d2838;
        case 0x2d283cu: goto label_2d283c;
        case 0x2d2840u: goto label_2d2840;
        case 0x2d2844u: goto label_2d2844;
        case 0x2d2848u: goto label_2d2848;
        case 0x2d284cu: goto label_2d284c;
        case 0x2d2850u: goto label_2d2850;
        case 0x2d2854u: goto label_2d2854;
        case 0x2d2858u: goto label_2d2858;
        case 0x2d285cu: goto label_2d285c;
        case 0x2d2860u: goto label_2d2860;
        case 0x2d2864u: goto label_2d2864;
        case 0x2d2868u: goto label_2d2868;
        case 0x2d286cu: goto label_2d286c;
        case 0x2d2870u: goto label_2d2870;
        case 0x2d2874u: goto label_2d2874;
        case 0x2d2878u: goto label_2d2878;
        case 0x2d287cu: goto label_2d287c;
        case 0x2d2880u: goto label_2d2880;
        case 0x2d2884u: goto label_2d2884;
        case 0x2d2888u: goto label_2d2888;
        case 0x2d288cu: goto label_2d288c;
        case 0x2d2890u: goto label_2d2890;
        case 0x2d2894u: goto label_2d2894;
        case 0x2d2898u: goto label_2d2898;
        case 0x2d289cu: goto label_2d289c;
        case 0x2d28a0u: goto label_2d28a0;
        case 0x2d28a4u: goto label_2d28a4;
        case 0x2d28a8u: goto label_2d28a8;
        case 0x2d28acu: goto label_2d28ac;
        case 0x2d28b0u: goto label_2d28b0;
        case 0x2d28b4u: goto label_2d28b4;
        case 0x2d28b8u: goto label_2d28b8;
        case 0x2d28bcu: goto label_2d28bc;
        case 0x2d28c0u: goto label_2d28c0;
        case 0x2d28c4u: goto label_2d28c4;
        case 0x2d28c8u: goto label_2d28c8;
        case 0x2d28ccu: goto label_2d28cc;
        case 0x2d28d0u: goto label_2d28d0;
        case 0x2d28d4u: goto label_2d28d4;
        case 0x2d28d8u: goto label_2d28d8;
        case 0x2d28dcu: goto label_2d28dc;
        case 0x2d28e0u: goto label_2d28e0;
        case 0x2d28e4u: goto label_2d28e4;
        case 0x2d28e8u: goto label_2d28e8;
        case 0x2d28ecu: goto label_2d28ec;
        case 0x2d28f0u: goto label_2d28f0;
        case 0x2d28f4u: goto label_2d28f4;
        case 0x2d28f8u: goto label_2d28f8;
        case 0x2d28fcu: goto label_2d28fc;
        case 0x2d2900u: goto label_2d2900;
        case 0x2d2904u: goto label_2d2904;
        case 0x2d2908u: goto label_2d2908;
        case 0x2d290cu: goto label_2d290c;
        case 0x2d2910u: goto label_2d2910;
        case 0x2d2914u: goto label_2d2914;
        case 0x2d2918u: goto label_2d2918;
        case 0x2d291cu: goto label_2d291c;
        case 0x2d2920u: goto label_2d2920;
        case 0x2d2924u: goto label_2d2924;
        case 0x2d2928u: goto label_2d2928;
        case 0x2d292cu: goto label_2d292c;
        case 0x2d2930u: goto label_2d2930;
        case 0x2d2934u: goto label_2d2934;
        case 0x2d2938u: goto label_2d2938;
        case 0x2d293cu: goto label_2d293c;
        case 0x2d2940u: goto label_2d2940;
        case 0x2d2944u: goto label_2d2944;
        case 0x2d2948u: goto label_2d2948;
        case 0x2d294cu: goto label_2d294c;
        case 0x2d2950u: goto label_2d2950;
        case 0x2d2954u: goto label_2d2954;
        case 0x2d2958u: goto label_2d2958;
        case 0x2d295cu: goto label_2d295c;
        case 0x2d2960u: goto label_2d2960;
        case 0x2d2964u: goto label_2d2964;
        case 0x2d2968u: goto label_2d2968;
        case 0x2d296cu: goto label_2d296c;
        case 0x2d2970u: goto label_2d2970;
        case 0x2d2974u: goto label_2d2974;
        case 0x2d2978u: goto label_2d2978;
        case 0x2d297cu: goto label_2d297c;
        case 0x2d2980u: goto label_2d2980;
        case 0x2d2984u: goto label_2d2984;
        case 0x2d2988u: goto label_2d2988;
        case 0x2d298cu: goto label_2d298c;
        case 0x2d2990u: goto label_2d2990;
        case 0x2d2994u: goto label_2d2994;
        case 0x2d2998u: goto label_2d2998;
        case 0x2d299cu: goto label_2d299c;
        case 0x2d29a0u: goto label_2d29a0;
        case 0x2d29a4u: goto label_2d29a4;
        case 0x2d29a8u: goto label_2d29a8;
        case 0x2d29acu: goto label_2d29ac;
        case 0x2d29b0u: goto label_2d29b0;
        case 0x2d29b4u: goto label_2d29b4;
        case 0x2d29b8u: goto label_2d29b8;
        case 0x2d29bcu: goto label_2d29bc;
        case 0x2d29c0u: goto label_2d29c0;
        case 0x2d29c4u: goto label_2d29c4;
        case 0x2d29c8u: goto label_2d29c8;
        case 0x2d29ccu: goto label_2d29cc;
        case 0x2d29d0u: goto label_2d29d0;
        case 0x2d29d4u: goto label_2d29d4;
        case 0x2d29d8u: goto label_2d29d8;
        case 0x2d29dcu: goto label_2d29dc;
        case 0x2d29e0u: goto label_2d29e0;
        case 0x2d29e4u: goto label_2d29e4;
        case 0x2d29e8u: goto label_2d29e8;
        case 0x2d29ecu: goto label_2d29ec;
        case 0x2d29f0u: goto label_2d29f0;
        case 0x2d29f4u: goto label_2d29f4;
        case 0x2d29f8u: goto label_2d29f8;
        case 0x2d29fcu: goto label_2d29fc;
        case 0x2d2a00u: goto label_2d2a00;
        case 0x2d2a04u: goto label_2d2a04;
        case 0x2d2a08u: goto label_2d2a08;
        case 0x2d2a0cu: goto label_2d2a0c;
        case 0x2d2a10u: goto label_2d2a10;
        case 0x2d2a14u: goto label_2d2a14;
        case 0x2d2a18u: goto label_2d2a18;
        case 0x2d2a1cu: goto label_2d2a1c;
        case 0x2d2a20u: goto label_2d2a20;
        case 0x2d2a24u: goto label_2d2a24;
        case 0x2d2a28u: goto label_2d2a28;
        case 0x2d2a2cu: goto label_2d2a2c;
        case 0x2d2a30u: goto label_2d2a30;
        case 0x2d2a34u: goto label_2d2a34;
        case 0x2d2a38u: goto label_2d2a38;
        case 0x2d2a3cu: goto label_2d2a3c;
        case 0x2d2a40u: goto label_2d2a40;
        case 0x2d2a44u: goto label_2d2a44;
        case 0x2d2a48u: goto label_2d2a48;
        case 0x2d2a4cu: goto label_2d2a4c;
        case 0x2d2a50u: goto label_2d2a50;
        case 0x2d2a54u: goto label_2d2a54;
        case 0x2d2a58u: goto label_2d2a58;
        case 0x2d2a5cu: goto label_2d2a5c;
        case 0x2d2a60u: goto label_2d2a60;
        case 0x2d2a64u: goto label_2d2a64;
        case 0x2d2a68u: goto label_2d2a68;
        case 0x2d2a6cu: goto label_2d2a6c;
        case 0x2d2a70u: goto label_2d2a70;
        case 0x2d2a74u: goto label_2d2a74;
        case 0x2d2a78u: goto label_2d2a78;
        case 0x2d2a7cu: goto label_2d2a7c;
        case 0x2d2a80u: goto label_2d2a80;
        case 0x2d2a84u: goto label_2d2a84;
        case 0x2d2a88u: goto label_2d2a88;
        case 0x2d2a8cu: goto label_2d2a8c;
        case 0x2d2a90u: goto label_2d2a90;
        case 0x2d2a94u: goto label_2d2a94;
        case 0x2d2a98u: goto label_2d2a98;
        case 0x2d2a9cu: goto label_2d2a9c;
        case 0x2d2aa0u: goto label_2d2aa0;
        case 0x2d2aa4u: goto label_2d2aa4;
        case 0x2d2aa8u: goto label_2d2aa8;
        case 0x2d2aacu: goto label_2d2aac;
        case 0x2d2ab0u: goto label_2d2ab0;
        case 0x2d2ab4u: goto label_2d2ab4;
        case 0x2d2ab8u: goto label_2d2ab8;
        case 0x2d2abcu: goto label_2d2abc;
        case 0x2d2ac0u: goto label_2d2ac0;
        case 0x2d2ac4u: goto label_2d2ac4;
        case 0x2d2ac8u: goto label_2d2ac8;
        case 0x2d2accu: goto label_2d2acc;
        case 0x2d2ad0u: goto label_2d2ad0;
        case 0x2d2ad4u: goto label_2d2ad4;
        case 0x2d2ad8u: goto label_2d2ad8;
        case 0x2d2adcu: goto label_2d2adc;
        case 0x2d2ae0u: goto label_2d2ae0;
        case 0x2d2ae4u: goto label_2d2ae4;
        case 0x2d2ae8u: goto label_2d2ae8;
        case 0x2d2aecu: goto label_2d2aec;
        case 0x2d2af0u: goto label_2d2af0;
        case 0x2d2af4u: goto label_2d2af4;
        case 0x2d2af8u: goto label_2d2af8;
        case 0x2d2afcu: goto label_2d2afc;
        case 0x2d2b00u: goto label_2d2b00;
        case 0x2d2b04u: goto label_2d2b04;
        case 0x2d2b08u: goto label_2d2b08;
        case 0x2d2b0cu: goto label_2d2b0c;
        case 0x2d2b10u: goto label_2d2b10;
        case 0x2d2b14u: goto label_2d2b14;
        case 0x2d2b18u: goto label_2d2b18;
        case 0x2d2b1cu: goto label_2d2b1c;
        case 0x2d2b20u: goto label_2d2b20;
        case 0x2d2b24u: goto label_2d2b24;
        case 0x2d2b28u: goto label_2d2b28;
        case 0x2d2b2cu: goto label_2d2b2c;
        case 0x2d2b30u: goto label_2d2b30;
        case 0x2d2b34u: goto label_2d2b34;
        case 0x2d2b38u: goto label_2d2b38;
        case 0x2d2b3cu: goto label_2d2b3c;
        case 0x2d2b40u: goto label_2d2b40;
        case 0x2d2b44u: goto label_2d2b44;
        case 0x2d2b48u: goto label_2d2b48;
        case 0x2d2b4cu: goto label_2d2b4c;
        case 0x2d2b50u: goto label_2d2b50;
        case 0x2d2b54u: goto label_2d2b54;
        case 0x2d2b58u: goto label_2d2b58;
        case 0x2d2b5cu: goto label_2d2b5c;
        case 0x2d2b60u: goto label_2d2b60;
        case 0x2d2b64u: goto label_2d2b64;
        case 0x2d2b68u: goto label_2d2b68;
        case 0x2d2b6cu: goto label_2d2b6c;
        case 0x2d2b70u: goto label_2d2b70;
        case 0x2d2b74u: goto label_2d2b74;
        case 0x2d2b78u: goto label_2d2b78;
        case 0x2d2b7cu: goto label_2d2b7c;
        case 0x2d2b80u: goto label_2d2b80;
        case 0x2d2b84u: goto label_2d2b84;
        case 0x2d2b88u: goto label_2d2b88;
        case 0x2d2b8cu: goto label_2d2b8c;
        case 0x2d2b90u: goto label_2d2b90;
        case 0x2d2b94u: goto label_2d2b94;
        case 0x2d2b98u: goto label_2d2b98;
        case 0x2d2b9cu: goto label_2d2b9c;
        case 0x2d2ba0u: goto label_2d2ba0;
        case 0x2d2ba4u: goto label_2d2ba4;
        case 0x2d2ba8u: goto label_2d2ba8;
        case 0x2d2bacu: goto label_2d2bac;
        case 0x2d2bb0u: goto label_2d2bb0;
        case 0x2d2bb4u: goto label_2d2bb4;
        case 0x2d2bb8u: goto label_2d2bb8;
        case 0x2d2bbcu: goto label_2d2bbc;
        case 0x2d2bc0u: goto label_2d2bc0;
        case 0x2d2bc4u: goto label_2d2bc4;
        case 0x2d2bc8u: goto label_2d2bc8;
        case 0x2d2bccu: goto label_2d2bcc;
        case 0x2d2bd0u: goto label_2d2bd0;
        case 0x2d2bd4u: goto label_2d2bd4;
        case 0x2d2bd8u: goto label_2d2bd8;
        case 0x2d2bdcu: goto label_2d2bdc;
        case 0x2d2be0u: goto label_2d2be0;
        case 0x2d2be4u: goto label_2d2be4;
        case 0x2d2be8u: goto label_2d2be8;
        case 0x2d2becu: goto label_2d2bec;
        case 0x2d2bf0u: goto label_2d2bf0;
        case 0x2d2bf4u: goto label_2d2bf4;
        case 0x2d2bf8u: goto label_2d2bf8;
        case 0x2d2bfcu: goto label_2d2bfc;
        case 0x2d2c00u: goto label_2d2c00;
        case 0x2d2c04u: goto label_2d2c04;
        case 0x2d2c08u: goto label_2d2c08;
        case 0x2d2c0cu: goto label_2d2c0c;
        case 0x2d2c10u: goto label_2d2c10;
        case 0x2d2c14u: goto label_2d2c14;
        case 0x2d2c18u: goto label_2d2c18;
        case 0x2d2c1cu: goto label_2d2c1c;
        case 0x2d2c20u: goto label_2d2c20;
        case 0x2d2c24u: goto label_2d2c24;
        case 0x2d2c28u: goto label_2d2c28;
        case 0x2d2c2cu: goto label_2d2c2c;
        case 0x2d2c30u: goto label_2d2c30;
        case 0x2d2c34u: goto label_2d2c34;
        case 0x2d2c38u: goto label_2d2c38;
        case 0x2d2c3cu: goto label_2d2c3c;
        case 0x2d2c40u: goto label_2d2c40;
        case 0x2d2c44u: goto label_2d2c44;
        case 0x2d2c48u: goto label_2d2c48;
        case 0x2d2c4cu: goto label_2d2c4c;
        case 0x2d2c50u: goto label_2d2c50;
        case 0x2d2c54u: goto label_2d2c54;
        case 0x2d2c58u: goto label_2d2c58;
        case 0x2d2c5cu: goto label_2d2c5c;
        case 0x2d2c60u: goto label_2d2c60;
        case 0x2d2c64u: goto label_2d2c64;
        case 0x2d2c68u: goto label_2d2c68;
        case 0x2d2c6cu: goto label_2d2c6c;
        case 0x2d2c70u: goto label_2d2c70;
        case 0x2d2c74u: goto label_2d2c74;
        case 0x2d2c78u: goto label_2d2c78;
        case 0x2d2c7cu: goto label_2d2c7c;
        case 0x2d2c80u: goto label_2d2c80;
        case 0x2d2c84u: goto label_2d2c84;
        case 0x2d2c88u: goto label_2d2c88;
        case 0x2d2c8cu: goto label_2d2c8c;
        case 0x2d2c90u: goto label_2d2c90;
        case 0x2d2c94u: goto label_2d2c94;
        case 0x2d2c98u: goto label_2d2c98;
        case 0x2d2c9cu: goto label_2d2c9c;
        case 0x2d2ca0u: goto label_2d2ca0;
        case 0x2d2ca4u: goto label_2d2ca4;
        case 0x2d2ca8u: goto label_2d2ca8;
        case 0x2d2cacu: goto label_2d2cac;
        case 0x2d2cb0u: goto label_2d2cb0;
        case 0x2d2cb4u: goto label_2d2cb4;
        case 0x2d2cb8u: goto label_2d2cb8;
        case 0x2d2cbcu: goto label_2d2cbc;
        case 0x2d2cc0u: goto label_2d2cc0;
        case 0x2d2cc4u: goto label_2d2cc4;
        case 0x2d2cc8u: goto label_2d2cc8;
        case 0x2d2cccu: goto label_2d2ccc;
        case 0x2d2cd0u: goto label_2d2cd0;
        case 0x2d2cd4u: goto label_2d2cd4;
        case 0x2d2cd8u: goto label_2d2cd8;
        case 0x2d2cdcu: goto label_2d2cdc;
        case 0x2d2ce0u: goto label_2d2ce0;
        case 0x2d2ce4u: goto label_2d2ce4;
        case 0x2d2ce8u: goto label_2d2ce8;
        case 0x2d2cecu: goto label_2d2cec;
        case 0x2d2cf0u: goto label_2d2cf0;
        case 0x2d2cf4u: goto label_2d2cf4;
        case 0x2d2cf8u: goto label_2d2cf8;
        case 0x2d2cfcu: goto label_2d2cfc;
        case 0x2d2d00u: goto label_2d2d00;
        case 0x2d2d04u: goto label_2d2d04;
        case 0x2d2d08u: goto label_2d2d08;
        case 0x2d2d0cu: goto label_2d2d0c;
        case 0x2d2d10u: goto label_2d2d10;
        case 0x2d2d14u: goto label_2d2d14;
        case 0x2d2d18u: goto label_2d2d18;
        case 0x2d2d1cu: goto label_2d2d1c;
        case 0x2d2d20u: goto label_2d2d20;
        case 0x2d2d24u: goto label_2d2d24;
        case 0x2d2d28u: goto label_2d2d28;
        case 0x2d2d2cu: goto label_2d2d2c;
        case 0x2d2d30u: goto label_2d2d30;
        case 0x2d2d34u: goto label_2d2d34;
        case 0x2d2d38u: goto label_2d2d38;
        case 0x2d2d3cu: goto label_2d2d3c;
        case 0x2d2d40u: goto label_2d2d40;
        case 0x2d2d44u: goto label_2d2d44;
        case 0x2d2d48u: goto label_2d2d48;
        case 0x2d2d4cu: goto label_2d2d4c;
        case 0x2d2d50u: goto label_2d2d50;
        case 0x2d2d54u: goto label_2d2d54;
        case 0x2d2d58u: goto label_2d2d58;
        case 0x2d2d5cu: goto label_2d2d5c;
        case 0x2d2d60u: goto label_2d2d60;
        case 0x2d2d64u: goto label_2d2d64;
        case 0x2d2d68u: goto label_2d2d68;
        case 0x2d2d6cu: goto label_2d2d6c;
        case 0x2d2d70u: goto label_2d2d70;
        case 0x2d2d74u: goto label_2d2d74;
        case 0x2d2d78u: goto label_2d2d78;
        case 0x2d2d7cu: goto label_2d2d7c;
        case 0x2d2d80u: goto label_2d2d80;
        case 0x2d2d84u: goto label_2d2d84;
        case 0x2d2d88u: goto label_2d2d88;
        case 0x2d2d8cu: goto label_2d2d8c;
        case 0x2d2d90u: goto label_2d2d90;
        case 0x2d2d94u: goto label_2d2d94;
        case 0x2d2d98u: goto label_2d2d98;
        case 0x2d2d9cu: goto label_2d2d9c;
        case 0x2d2da0u: goto label_2d2da0;
        case 0x2d2da4u: goto label_2d2da4;
        case 0x2d2da8u: goto label_2d2da8;
        case 0x2d2dacu: goto label_2d2dac;
        case 0x2d2db0u: goto label_2d2db0;
        default: break;
    }

    ctx->pc = 0x2d27f0u;

label_2d27f0:
    // 0x2d27f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d27f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2d27f4:
    // 0x2d27f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d27f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2d27f8:
    // 0x2d27f8: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x2d27f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_2d27fc:
    // 0x2d27fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d27fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2800:
    // 0x2d2800: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d2800u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2d2804:
    // 0x2d2804: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2d2804u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2d2808:
    // 0x2d2808: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x2d2808u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2d280c:
    // 0x2d280c: 0x10200165  beqz        $at, . + 4 + (0x165 << 2)
label_2d2810:
    if (ctx->pc == 0x2D2810u) {
        ctx->pc = 0x2D2814u;
        goto label_2d2814;
    }
    ctx->pc = 0x2D280Cu;
    {
        const bool branch_taken_0x2d280c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d280c) {
            ctx->pc = 0x2D2DA4u;
            goto label_2d2da4;
        }
    }
    ctx->pc = 0x2D2814u;
label_2d2814:
    // 0x2d2814: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2d2814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2d2818:
    // 0x2d2818: 0x24641920  addiu       $a0, $v1, 0x1920
    ctx->pc = 0x2d2818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6432));
label_2d281c:
    // 0x2d281c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2d281cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2d2820:
    // 0x2d2820: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d2820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2d2824:
    // 0x2d2824: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2d2824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d2828:
    // 0x2d2828: 0x600008  jr          $v1
label_2d282c:
    if (ctx->pc == 0x2D282Cu) {
        ctx->pc = 0x2D2830u;
        goto label_2d2830;
    }
    ctx->pc = 0x2D2828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2828u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D2830u;
label_2d2830:
    // 0x2d2830: 0x3c0240ac  lui         $v0, 0x40AC
    ctx->pc = 0x2d2830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16556 << 16));
label_2d2834:
    // 0x2d2834: 0x3442cccc  ori         $v0, $v0, 0xCCCC
    ctx->pc = 0x2d2834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52428);
label_2d2838:
    // 0x2d2838: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d283c:
    // 0x2d283c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d283cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2840:
    // 0x2d2840: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x2d2840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_2d2844:
    // 0x2d2844: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2848:
    // 0x2d2848: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d284c:
    // 0x2d284c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d284cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2d2850:
    // 0x2d2850: 0x24061e05  addiu       $a2, $zero, 0x1E05
    ctx->pc = 0x2d2850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7685));
label_2d2854:
    // 0x2d2854: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d2854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d2858:
    // 0x2d2858: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d2858u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2d285c:
    // 0x2d285c: 0xc0965d0  jal         func_259740
label_2d2860:
    if (ctx->pc == 0x2D2860u) {
        ctx->pc = 0x2D2864u;
        goto label_2d2864;
    }
    ctx->pc = 0x2D285Cu;
    SET_GPR_U32(ctx, 31, 0x2D2864u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D285Cu, 0x2D2864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2864u;
label_2d2864:
    // 0x2d2864: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d2864u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d2868:
    // 0x2d2868: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d286c:
    // 0x2d286c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2d286cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_2d2870:
    // 0x2d2870: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2d2870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_2d2874:
    // 0x2d2874: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d2878:
    // 0x2d2878: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d287c:
    // 0x2d287c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2d287cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_2d2880:
    // 0x2d2880: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d2880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2884:
    // 0x2d2884: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d2884u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2d2888:
    // 0x2d2888: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d2888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2d288c:
    // 0x2d288c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d288cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d2890:
    // 0x2d2890: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2894:
    // 0x2d2894: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d2894u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
label_2d2898:
    // 0x2d2898: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d2898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2d289c:
    // 0x2d289c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2d289cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2d28a0:
    // 0x2d28a0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2d28a4:
    if (ctx->pc == 0x2D28A4u) {
        ctx->pc = 0x2D28A8u;
        goto label_2d28a8;
    }
    ctx->pc = 0x2D28A0u;
    {
        const bool branch_taken_0x2d28a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d28a0) {
            ctx->pc = 0x2D28DCu;
            goto label_2d28dc;
        }
    }
    ctx->pc = 0x2D28A8u;
label_2d28a8:
    // 0x2d28a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d28a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d28ac:
    // 0x2d28ac: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x2d28acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d28b0:
    // 0x2d28b0: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x2d28b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
label_2d28b4:
    // 0x2d28b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d28b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d28b8:
    // 0x2d28b8: 0x0  nop
    ctx->pc = 0x2d28b8u;
    // NOP
label_2d28bc:
    // 0x2d28bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d28bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2d28c0:
    // 0x2d28c0: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2d28c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
label_2d28c4:
    // 0x2d28c4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d28c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d28c8:
    // 0x2d28c8: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x2d28c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d28cc:
    // 0x2d28cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d28ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d28d0:
    // 0x2d28d0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2d28d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d28d4:
    // 0x2d28d4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d28d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2d28d8:
    // 0x2d28d8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2d28d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2d28dc:
    // 0x2d28dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d28dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d28e0:
    // 0x2d28e0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d28e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
label_2d28e4:
    // 0x2d28e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d28e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2d28e8:
    // 0x2d28e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d28e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2d28ec:
    // 0x2d28ec: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2d28f0:
    if (ctx->pc == 0x2D28F0u) {
        ctx->pc = 0x2D28F4u;
        goto label_2d28f4;
    }
    ctx->pc = 0x2D28ECu;
    {
        const bool branch_taken_0x2d28ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d28ec) {
            ctx->pc = 0x2D2930u;
            goto label_2d2930;
        }
    }
    ctx->pc = 0x2D28F4u;
label_2d28f4:
    // 0x2d28f4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d28f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d28f8:
    // 0x2d28f8: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x2d28f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d28fc:
    // 0x2d28fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d28fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2900:
    // 0x2d2900: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2d2900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d2904:
    // 0x2d2904: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d2904u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2d2908:
    // 0x2d2908: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2d2908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2d290c:
    // 0x2d290c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d290cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2910:
    // 0x2d2910: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x2d2910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d2914:
    // 0x2d2914: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2918:
    // 0x2d2918: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x2d2918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d291c:
    // 0x2d291c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d291cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2d2920:
    // 0x2d2920: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2d2920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_2d2924:
    // 0x2d2924: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2928:
    // 0x2d2928: 0xc05cd10  jal         func_173440
label_2d292c:
    if (ctx->pc == 0x2D292Cu) {
        ctx->pc = 0x2D2930u;
        goto label_2d2930;
    }
    ctx->pc = 0x2D2928u;
    SET_GPR_U32(ctx, 31, 0x2D2930u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D2928u, 0x2D2930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2930u;
label_2d2930:
    // 0x2d2930: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2934:
    // 0x2d2934: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2d2934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2d2938:
    // 0x2d2938: 0xc05cec4  jal         func_173B10
label_2d293c:
    if (ctx->pc == 0x2D293Cu) {
        ctx->pc = 0x2D2940u;
        goto label_2d2940;
    }
    ctx->pc = 0x2D2938u;
    SET_GPR_U32(ctx, 31, 0x2D2940u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D2938u, 0x2D2940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2940u;
label_2d2940:
    // 0x2d2940: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2944:
    // 0x2d2944: 0xc0974c8  jal         func_25D320
label_2d2948:
    if (ctx->pc == 0x2D2948u) {
        ctx->pc = 0x2D294Cu;
        goto label_2d294c;
    }
    ctx->pc = 0x2D2944u;
    SET_GPR_U32(ctx, 31, 0x2D294Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D2944u, 0x2D294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D294Cu;
label_2d294c:
    // 0x2d294c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d294cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2950:
    // 0x2d2950: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d2950u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_2d2954:
    // 0x2d2954: 0x10600113  beqz        $v1, . + 4 + (0x113 << 2)
label_2d2958:
    if (ctx->pc == 0x2D2958u) {
        ctx->pc = 0x2D295Cu;
        goto label_2d295c;
    }
    ctx->pc = 0x2D2954u;
    {
        const bool branch_taken_0x2d2954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2954) {
            ctx->pc = 0x2D2DA4u;
            goto label_2d2da4;
        }
    }
    ctx->pc = 0x2D295Cu;
label_2d295c:
    // 0x2d295c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d295cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2960:
    // 0x2d2960: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2d2960u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_2d2964:
    // 0x2d2964: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d2964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2d2968:
    // 0x2d2968: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2d2968u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_2d296c:
    // 0x2d296c: 0x1000010d  b           . + 4 + (0x10D << 2)
label_2d2970:
    if (ctx->pc == 0x2D2970u) {
        ctx->pc = 0x2D2974u;
        goto label_2d2974;
    }
    ctx->pc = 0x2D296Cu;
    {
        const bool branch_taken_0x2d296c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d296c) {
            ctx->pc = 0x2D2DA4u;
            goto label_2d2da4;
        }
    }
    ctx->pc = 0x2D2974u;
label_2d2974:
    // 0x2d2974: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2978:
    // 0x2d2978: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d297c:
    // 0x2d297c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d297cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2d2980:
    // 0x2d2980: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2d2980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2d2984:
    // 0x2d2984: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d2984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d2988:
    // 0x2d2988: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d2988u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2d298c:
    // 0x2d298c: 0xc0965d0  jal         func_259740
label_2d2990:
    if (ctx->pc == 0x2D2990u) {
        ctx->pc = 0x2D2994u;
        goto label_2d2994;
    }
    ctx->pc = 0x2D298Cu;
    SET_GPR_U32(ctx, 31, 0x2D2994u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D298Cu, 0x2D2994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2994u;
label_2d2994:
    // 0x2d2994: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d2994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2998:
    // 0x2d2998: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d2998u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2d299c:
    // 0x2d299c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d299cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2d29a0:
    // 0x2d29a0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d29a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d29a4:
    // 0x2d29a4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d29a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d29a8:
    // 0x2d29a8: 0xc05cd10  jal         func_173440
label_2d29ac:
    if (ctx->pc == 0x2D29ACu) {
        ctx->pc = 0x2D29B0u;
        goto label_2d29b0;
    }
    ctx->pc = 0x2D29A8u;
    SET_GPR_U32(ctx, 31, 0x2D29B0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D29A8u, 0x2D29B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D29B0u;
label_2d29b0:
    // 0x2d29b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d29b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d29b4:
    // 0x2d29b4: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x2d29b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d29b8:
    // 0x2d29b8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d29b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d29bc:
    // 0x2d29bc: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2d29bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d29c0:
    // 0x2d29c0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d29c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2d29c4:
    // 0x2d29c4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2d29c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2d29c8:
    // 0x2d29c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d29c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d29cc:
    // 0x2d29cc: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x2d29ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d29d0:
    // 0x2d29d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d29d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d29d4:
    // 0x2d29d4: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x2d29d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d29d8:
    // 0x2d29d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d29d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2d29dc:
    // 0x2d29dc: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2d29dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_2d29e0:
    // 0x2d29e0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d29e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d29e4:
    // 0x2d29e4: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x2d29e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d29e8:
    // 0x2d29e8: 0x3c024289  lui         $v0, 0x4289
    ctx->pc = 0x2d29e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17033 << 16));
label_2d29ec:
    // 0x2d29ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d29ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d29f0:
    // 0x2d29f0: 0x0  nop
    ctx->pc = 0x2d29f0u;
    // NOP
label_2d29f4:
    // 0x2d29f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2d29f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d29f8:
    // 0x2d29f8: 0x0  nop
    ctx->pc = 0x2d29f8u;
    // NOP
label_2d29fc:
    // 0x2d29fc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2d2a00:
    if (ctx->pc == 0x2D2A00u) {
        ctx->pc = 0x2D2A04u;
        goto label_2d2a04;
    }
    ctx->pc = 0x2D29FCu;
    {
        const bool branch_taken_0x2d29fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d29fc) {
            ctx->pc = 0x2D2A14u;
            goto label_2d2a14;
        }
    }
    ctx->pc = 0x2D2A04u;
label_2d2a04:
    // 0x2d2a04: 0x3c024289  lui         $v0, 0x4289
    ctx->pc = 0x2d2a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17033 << 16));
label_2d2a08:
    // 0x2d2a08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2a08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d2a0c:
    // 0x2d2a0c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2a10:
    // 0x2d2a10: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2d2a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_2d2a14:
    // 0x2d2a14: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2a18:
    // 0x2d2a18: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x2d2a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d2a1c:
    // 0x2d2a1c: 0x3c024289  lui         $v0, 0x4289
    ctx->pc = 0x2d2a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17033 << 16));
label_2d2a20:
    // 0x2d2a20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2a20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d2a24:
    // 0x2d2a24: 0x0  nop
    ctx->pc = 0x2d2a24u;
    // NOP
label_2d2a28:
    // 0x2d2a28: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2d2a28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d2a2c:
    // 0x2d2a2c: 0x0  nop
    ctx->pc = 0x2d2a2cu;
    // NOP
label_2d2a30:
    // 0x2d2a30: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
label_2d2a34:
    if (ctx->pc == 0x2D2A34u) {
        ctx->pc = 0x2D2A38u;
        goto label_2d2a38;
    }
    ctx->pc = 0x2D2A30u;
    {
        const bool branch_taken_0x2d2a30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d2a30) {
            ctx->pc = 0x2D2AE0u;
            goto label_2d2ae0;
        }
    }
    ctx->pc = 0x2D2A38u;
label_2d2a38:
    // 0x2d2a38: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2a3c:
    // 0x2d2a3c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d2a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_2d2a40:
    // 0x2d2a40: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x2d2a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_2d2a44:
    // 0x2d2a44: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2d2a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2d2a48:
    // 0x2d2a48: 0xc05cf7c  jal         func_173DF0
label_2d2a4c:
    if (ctx->pc == 0x2D2A4Cu) {
        ctx->pc = 0x2D2A50u;
        goto label_2d2a50;
    }
    ctx->pc = 0x2D2A48u;
    SET_GPR_U32(ctx, 31, 0x2D2A50u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2D2A48u, 0x2D2A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2A50u;
label_2d2a50:
    // 0x2d2a50: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2a54:
    // 0x2d2a54: 0xc4420124  lwc1        $f2, 0x124($v0)
    ctx->pc = 0x2d2a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2d2a58:
    // 0x2d2a58: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x2d2a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
label_2d2a5c:
    // 0x2d2a5c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2d2a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_2d2a60:
    // 0x2d2a60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d2a60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2d2a64:
    // 0x2d2a64: 0x0  nop
    ctx->pc = 0x2d2a64u;
    // NOP
label_2d2a68:
    // 0x2d2a68: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2d2a68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_2d2a6c:
    // 0x2d2a6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d2a6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d2a70:
    // 0x2d2a70: 0x0  nop
    ctx->pc = 0x2d2a70u;
    // NOP
label_2d2a74:
    // 0x2d2a74: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_2d2a78:
    if (ctx->pc == 0x2D2A78u) {
        ctx->pc = 0x2D2A7Cu;
        goto label_2d2a7c;
    }
    ctx->pc = 0x2D2A74u;
    {
        const bool branch_taken_0x2d2a74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d2a74) {
            ctx->pc = 0x2D2AE0u;
            goto label_2d2ae0;
        }
    }
    ctx->pc = 0x2D2A7Cu;
label_2d2a7c:
    // 0x2d2a7c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2a80:
    // 0x2d2a80: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d2a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_2d2a84:
    // 0x2d2a84: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x2d2a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_2d2a88:
    // 0x2d2a88: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2d2a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2d2a8c:
    // 0x2d2a8c: 0xc05cf7c  jal         func_173DF0
label_2d2a90:
    if (ctx->pc == 0x2D2A90u) {
        ctx->pc = 0x2D2A94u;
        goto label_2d2a94;
    }
    ctx->pc = 0x2D2A8Cu;
    SET_GPR_U32(ctx, 31, 0x2D2A94u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2D2A8Cu, 0x2D2A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2A94u;
label_2d2a94:
    // 0x2d2a94: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x2d2a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
label_2d2a98:
    // 0x2d2a98: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2d2a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_2d2a9c:
    // 0x2d2a9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d2a9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2d2aa0:
    // 0x2d2aa0: 0x0  nop
    ctx->pc = 0x2d2aa0u;
    // NOP
label_2d2aa4:
    // 0x2d2aa4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d2aa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2d2aa8:
    // 0x2d2aa8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2aac:
    // 0x2d2aac: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2d2aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2d2ab0:
    // 0x2d2ab0: 0x3c024289  lui         $v0, 0x4289
    ctx->pc = 0x2d2ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17033 << 16));
label_2d2ab4:
    // 0x2d2ab4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2ab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d2ab8:
    // 0x2d2ab8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2abc:
    // 0x2d2abc: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2d2abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_2d2ac0:
    // 0x2d2ac0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2d2ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_2d2ac4:
    // 0x2d2ac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d2ac8:
    // 0x2d2ac8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2acc:
    // 0x2d2acc: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x2d2accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_2d2ad0:
    // 0x2d2ad0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d2ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2ad4:
    // 0x2d2ad4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d2ad4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2d2ad8:
    // 0x2d2ad8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d2ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2d2adc:
    // 0x2d2adc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d2adcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d2ae0:
    // 0x2d2ae0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2ae4:
    // 0x2d2ae4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2d2ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2d2ae8:
    // 0x2d2ae8: 0xc05cec4  jal         func_173B10
label_2d2aec:
    if (ctx->pc == 0x2D2AECu) {
        ctx->pc = 0x2D2AF0u;
        goto label_2d2af0;
    }
    ctx->pc = 0x2D2AE8u;
    SET_GPR_U32(ctx, 31, 0x2D2AF0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D2AE8u, 0x2D2AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2AF0u;
label_2d2af0:
    // 0x2d2af0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2af4:
    // 0x2d2af4: 0xc0974c8  jal         func_25D320
label_2d2af8:
    if (ctx->pc == 0x2D2AF8u) {
        ctx->pc = 0x2D2AFCu;
        goto label_2d2afc;
    }
    ctx->pc = 0x2D2AF4u;
    SET_GPR_U32(ctx, 31, 0x2D2AFCu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D2AF4u, 0x2D2AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2AFCu;
label_2d2afc:
    // 0x2d2afc: 0x100000a9  b           . + 4 + (0xA9 << 2)
label_2d2b00:
    if (ctx->pc == 0x2D2B00u) {
        ctx->pc = 0x2D2B04u;
        goto label_2d2b04;
    }
    ctx->pc = 0x2D2AFCu;
    {
        const bool branch_taken_0x2d2afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2afc) {
            ctx->pc = 0x2D2DA4u;
            goto label_2d2da4;
        }
    }
    ctx->pc = 0x2D2B04u;
label_2d2b04:
    // 0x2d2b04: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2b08:
    // 0x2d2b08: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2b0c:
    // 0x2d2b0c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d2b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2d2b10:
    // 0x2d2b10: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2d2b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2d2b14:
    // 0x2d2b14: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d2b14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d2b18:
    // 0x2d2b18: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d2b18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2d2b1c:
    // 0x2d2b1c: 0xc0965d0  jal         func_259740
label_2d2b20:
    if (ctx->pc == 0x2D2B20u) {
        ctx->pc = 0x2D2B24u;
        goto label_2d2b24;
    }
    ctx->pc = 0x2D2B1Cu;
    SET_GPR_U32(ctx, 31, 0x2D2B24u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D2B1Cu, 0x2D2B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2B24u;
label_2d2b24:
    // 0x2d2b24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d2b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2b28:
    // 0x2d2b28: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d2b28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2d2b2c:
    // 0x2d2b2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d2b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2d2b30:
    // 0x2d2b30: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d2b30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d2b34:
    // 0x2d2b34: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2b38:
    // 0x2d2b38: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d2b38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
label_2d2b3c:
    // 0x2d2b3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d2b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2d2b40:
    // 0x2d2b40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d2b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2d2b44:
    // 0x2d2b44: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_2d2b48:
    if (ctx->pc == 0x2D2B48u) {
        ctx->pc = 0x2D2B4Cu;
        goto label_2d2b4c;
    }
    ctx->pc = 0x2D2B44u;
    {
        const bool branch_taken_0x2d2b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2b44) {
            ctx->pc = 0x2D2BC0u;
            goto label_2d2bc0;
        }
    }
    ctx->pc = 0x2D2B4Cu;
label_2d2b4c:
    // 0x2d2b4c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2b50:
    // 0x2d2b50: 0xc4410180  lwc1        $f1, 0x180($v0)
    ctx->pc = 0x2d2b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d2b54:
    // 0x2d2b54: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2b58:
    // 0x2d2b58: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x2d2b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d2b5c:
    // 0x2d2b5c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d2b5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2d2b60:
    // 0x2d2b60: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x2d2b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
label_2d2b64:
    // 0x2d2b64: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2b68:
    // 0x2d2b68: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2d2b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d2b6c:
    // 0x2d2b6c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2b70:
    // 0x2d2b70: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x2d2b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d2b74:
    // 0x2d2b74: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d2b74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2d2b78:
    // 0x2d2b78: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x2d2b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
label_2d2b7c:
    // 0x2d2b7c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2b80:
    // 0x2d2b80: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x2d2b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d2b84:
    // 0x2d2b84: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2b88:
    // 0x2d2b88: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2d2b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d2b8c:
    // 0x2d2b8c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d2b8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2d2b90:
    // 0x2d2b90: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2d2b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2d2b94:
    // 0x2d2b94: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2b98:
    // 0x2d2b98: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x2d2b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d2b9c:
    // 0x2d2b9c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2ba0:
    // 0x2d2ba0: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x2d2ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d2ba4:
    // 0x2d2ba4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d2ba4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2d2ba8:
    // 0x2d2ba8: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2d2ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_2d2bac:
    // 0x2d2bac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2bb0:
    // 0x2d2bb0: 0xc05cd10  jal         func_173440
label_2d2bb4:
    if (ctx->pc == 0x2D2BB4u) {
        ctx->pc = 0x2D2BB8u;
        goto label_2d2bb8;
    }
    ctx->pc = 0x2D2BB0u;
    SET_GPR_U32(ctx, 31, 0x2D2BB8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D2BB0u, 0x2D2BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2BB8u;
label_2d2bb8:
    // 0x2d2bb8: 0x10000009  b           . + 4 + (0x9 << 2)
label_2d2bbc:
    if (ctx->pc == 0x2D2BBCu) {
        ctx->pc = 0x2D2BC0u;
        goto label_2d2bc0;
    }
    ctx->pc = 0x2D2BB8u;
    {
        const bool branch_taken_0x2d2bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2bb8) {
            ctx->pc = 0x2D2BE0u;
            goto label_2d2be0;
        }
    }
    ctx->pc = 0x2D2BC0u;
label_2d2bc0:
    // 0x2d2bc0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2bc4:
    // 0x2d2bc4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d2bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_2d2bc8:
    // 0x2d2bc8: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x2d2bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_2d2bcc:
    // 0x2d2bcc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2d2bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2d2bd0:
    // 0x2d2bd0: 0xc05cf7c  jal         func_173DF0
label_2d2bd4:
    if (ctx->pc == 0x2D2BD4u) {
        ctx->pc = 0x2D2BD8u;
        goto label_2d2bd8;
    }
    ctx->pc = 0x2D2BD0u;
    SET_GPR_U32(ctx, 31, 0x2D2BD8u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2D2BD0u, 0x2D2BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2BD8u;
label_2d2bd8:
    // 0x2d2bd8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2bdc:
    // 0x2d2bdc: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2d2bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2d2be0:
    // 0x2d2be0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2be4:
    // 0x2d2be4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d2be4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
label_2d2be8:
    // 0x2d2be8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d2be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2d2bec:
    // 0x2d2bec: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d2becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2d2bf0:
    // 0x2d2bf0: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
label_2d2bf4:
    if (ctx->pc == 0x2D2BF4u) {
        ctx->pc = 0x2D2BF8u;
        goto label_2d2bf8;
    }
    ctx->pc = 0x2D2BF0u;
    {
        const bool branch_taken_0x2d2bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2bf0) {
            ctx->pc = 0x2D2D48u;
            goto label_2d2d48;
        }
    }
    ctx->pc = 0x2D2BF8u;
label_2d2bf8:
    // 0x2d2bf8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2bfc:
    // 0x2d2bfc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d2bfcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2d2c00:
    // 0x2d2c00: 0xc0b9ff4  jal         func_2E7FD0
label_2d2c04:
    if (ctx->pc == 0x2D2C04u) {
        ctx->pc = 0x2D2C08u;
        goto label_2d2c08;
    }
    ctx->pc = 0x2D2C00u;
    SET_GPR_U32(ctx, 31, 0x2D2C08u);
    ctx->pc = 0x2E7FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7FD0u, 0x2D2C00u, 0x2D2C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2C08u;
label_2d2c08:
    // 0x2d2c08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d2c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d2c0c:
    // 0x2d2c0c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2c10:
    // 0x2d2c10: 0xac431354  sw          $v1, 0x1354($v0)
    ctx->pc = 0x2d2c10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4948), GPR_U32(ctx, 3));
label_2d2c14:
    // 0x2d2c14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d2c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d2c18:
    // 0x2d2c18: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2c1c:
    // 0x2d2c1c: 0xac431350  sw          $v1, 0x1350($v0)
    ctx->pc = 0x2d2c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4944), GPR_U32(ctx, 3));
label_2d2c20:
    // 0x2d2c20: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2d2c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_2d2c24:
    // 0x2d2c24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d2c24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d2c28:
    // 0x2d2c28: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2d2c28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2d2c2c:
    // 0x2d2c2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d2c2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2d2c30:
    // 0x2d2c30: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x2d2c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2d2c34:
    // 0x2d2c34: 0xc0561d4  jal         func_158750
label_2d2c38:
    if (ctx->pc == 0x2D2C38u) {
        ctx->pc = 0x2D2C3Cu;
        goto label_2d2c3c;
    }
    ctx->pc = 0x2D2C34u;
    SET_GPR_U32(ctx, 31, 0x2D2C3Cu);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x2D2C34u, 0x2D2C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2C3Cu;
label_2d2c3c:
    // 0x2d2c3c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d2c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2d2c40:
    // 0x2d2c40: 0x24428760  addiu       $v0, $v0, -0x78A0
    ctx->pc = 0x2d2c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936416));
label_2d2c44:
    // 0x2d2c44: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2d2c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2d2c48:
    // 0x2d2c48: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2d2c48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2d2c4c:
    // 0x2d2c4c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2d2c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_2d2c50:
    // 0x2d2c50: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2c54:
    // 0x2d2c54: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2c58:
    // 0x2d2c58: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x2d2c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_2d2c5c:
    // 0x2d2c5c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2d2c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2d2c60:
    // 0x2d2c60: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d2c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2d2c64:
    // 0x2d2c64: 0x24478bf8  addiu       $a3, $v0, -0x7408
    ctx->pc = 0x2d2c64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937592));
label_2d2c68:
    // 0x2d2c68: 0xc06d02c  jal         func_1B40B0
label_2d2c6c:
    if (ctx->pc == 0x2D2C6Cu) {
        ctx->pc = 0x2D2C70u;
        goto label_2d2c70;
    }
    ctx->pc = 0x2D2C68u;
    SET_GPR_U32(ctx, 31, 0x2D2C70u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D2C68u, 0x2D2C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2C70u;
label_2d2c70:
    // 0x2d2c70: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2c74:
    // 0x2d2c74: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d2c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_2d2c78:
    // 0x2d2c78: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2c7c:
    // 0x2d2c7c: 0x244503c0  addiu       $a1, $v0, 0x3C0
    ctx->pc = 0x2d2c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
label_2d2c80:
    // 0x2d2c80: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2d2c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2d2c84:
    // 0x2d2c84: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d2c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2d2c88:
    // 0x2d2c88: 0x24478bf8  addiu       $a3, $v0, -0x7408
    ctx->pc = 0x2d2c88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937592));
label_2d2c8c:
    // 0x2d2c8c: 0xc06d02c  jal         func_1B40B0
label_2d2c90:
    if (ctx->pc == 0x2D2C90u) {
        ctx->pc = 0x2D2C94u;
        goto label_2d2c94;
    }
    ctx->pc = 0x2D2C8Cu;
    SET_GPR_U32(ctx, 31, 0x2D2C94u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D2C8Cu, 0x2D2C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2C94u;
label_2d2c94:
    // 0x2d2c94: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2c98:
    // 0x2d2c98: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d2c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_2d2c9c:
    // 0x2d2c9c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2ca0:
    // 0x2d2ca0: 0x24450480  addiu       $a1, $v0, 0x480
    ctx->pc = 0x2d2ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
label_2d2ca4:
    // 0x2d2ca4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2d2ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2d2ca8:
    // 0x2d2ca8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d2ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2d2cac:
    // 0x2d2cac: 0x24478bf8  addiu       $a3, $v0, -0x7408
    ctx->pc = 0x2d2cacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937592));
label_2d2cb0:
    // 0x2d2cb0: 0xc06d02c  jal         func_1B40B0
label_2d2cb4:
    if (ctx->pc == 0x2D2CB4u) {
        ctx->pc = 0x2D2CB8u;
        goto label_2d2cb8;
    }
    ctx->pc = 0x2D2CB0u;
    SET_GPR_U32(ctx, 31, 0x2D2CB8u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D2CB0u, 0x2D2CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2CB8u;
label_2d2cb8:
    // 0x2d2cb8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2cbc:
    // 0x2d2cbc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d2cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_2d2cc0:
    // 0x2d2cc0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2cc4:
    // 0x2d2cc4: 0x24450540  addiu       $a1, $v0, 0x540
    ctx->pc = 0x2d2cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_2d2cc8:
    // 0x2d2cc8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2d2cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2d2ccc:
    // 0x2d2ccc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d2cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2d2cd0:
    // 0x2d2cd0: 0x24478bf8  addiu       $a3, $v0, -0x7408
    ctx->pc = 0x2d2cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937592));
label_2d2cd4:
    // 0x2d2cd4: 0xc06d02c  jal         func_1B40B0
label_2d2cd8:
    if (ctx->pc == 0x2D2CD8u) {
        ctx->pc = 0x2D2CDCu;
        goto label_2d2cdc;
    }
    ctx->pc = 0x2D2CD4u;
    SET_GPR_U32(ctx, 31, 0x2D2CDCu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D2CD4u, 0x2D2CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2CDCu;
label_2d2cdc:
    // 0x2d2cdc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2ce0:
    // 0x2d2ce0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d2ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_2d2ce4:
    // 0x2d2ce4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2ce8:
    // 0x2d2ce8: 0x24450640  addiu       $a1, $v0, 0x640
    ctx->pc = 0x2d2ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1600));
label_2d2cec:
    // 0x2d2cec: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2d2cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2d2cf0:
    // 0x2d2cf0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d2cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2d2cf4:
    // 0x2d2cf4: 0x24478bf8  addiu       $a3, $v0, -0x7408
    ctx->pc = 0x2d2cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937592));
label_2d2cf8:
    // 0x2d2cf8: 0xc06d02c  jal         func_1B40B0
label_2d2cfc:
    if (ctx->pc == 0x2D2CFCu) {
        ctx->pc = 0x2D2D00u;
        goto label_2d2d00;
    }
    ctx->pc = 0x2D2CF8u;
    SET_GPR_U32(ctx, 31, 0x2D2D00u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D2CF8u, 0x2D2D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2D00u;
label_2d2d00:
    // 0x2d2d00: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2d04:
    // 0x2d2d04: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d2d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_2d2d08:
    // 0x2d2d08: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2d0c:
    // 0x2d2d0c: 0x24450700  addiu       $a1, $v0, 0x700
    ctx->pc = 0x2d2d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
label_2d2d10:
    // 0x2d2d10: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2d2d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2d2d14:
    // 0x2d2d14: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d2d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2d2d18:
    // 0x2d2d18: 0x24478bf8  addiu       $a3, $v0, -0x7408
    ctx->pc = 0x2d2d18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937592));
label_2d2d1c:
    // 0x2d2d1c: 0xc06d02c  jal         func_1B40B0
label_2d2d20:
    if (ctx->pc == 0x2D2D20u) {
        ctx->pc = 0x2D2D24u;
        goto label_2d2d24;
    }
    ctx->pc = 0x2D2D1Cu;
    SET_GPR_U32(ctx, 31, 0x2D2D24u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D2D1Cu, 0x2D2D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2D24u;
label_2d2d24:
    // 0x2d2d24: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2d28:
    // 0x2d2d28: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d2d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_2d2d2c:
    // 0x2d2d2c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2d30:
    // 0x2d2d30: 0x244507c0  addiu       $a1, $v0, 0x7C0
    ctx->pc = 0x2d2d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1984));
label_2d2d34:
    // 0x2d2d34: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2d2d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2d2d38:
    // 0x2d2d38: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d2d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2d2d3c:
    // 0x2d2d3c: 0x24478bf8  addiu       $a3, $v0, -0x7408
    ctx->pc = 0x2d2d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937592));
label_2d2d40:
    // 0x2d2d40: 0xc06d02c  jal         func_1B40B0
label_2d2d44:
    if (ctx->pc == 0x2D2D44u) {
        ctx->pc = 0x2D2D48u;
        goto label_2d2d48;
    }
    ctx->pc = 0x2D2D40u;
    SET_GPR_U32(ctx, 31, 0x2D2D48u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D2D40u, 0x2D2D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2D48u;
label_2d2d48:
    // 0x2d2d48: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2d4c:
    // 0x2d2d4c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2d2d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2d2d50:
    // 0x2d2d50: 0xc05cec4  jal         func_173B10
label_2d2d54:
    if (ctx->pc == 0x2D2D54u) {
        ctx->pc = 0x2D2D58u;
        goto label_2d2d58;
    }
    ctx->pc = 0x2D2D50u;
    SET_GPR_U32(ctx, 31, 0x2D2D58u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D2D50u, 0x2D2D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2D58u;
label_2d2d58:
    // 0x2d2d58: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2d5c:
    // 0x2d2d5c: 0xc0974c8  jal         func_25D320
label_2d2d60:
    if (ctx->pc == 0x2D2D60u) {
        ctx->pc = 0x2D2D64u;
        goto label_2d2d64;
    }
    ctx->pc = 0x2D2D5Cu;
    SET_GPR_U32(ctx, 31, 0x2D2D64u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D2D5Cu, 0x2D2D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2D64u;
label_2d2d64:
    // 0x2d2d64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d2d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2d68:
    // 0x2d2d68: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d2d68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_2d2d6c:
    // 0x2d2d6c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_2d2d70:
    if (ctx->pc == 0x2D2D70u) {
        ctx->pc = 0x2D2D74u;
        goto label_2d2d74;
    }
    ctx->pc = 0x2D2D6Cu;
    {
        const bool branch_taken_0x2d2d6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2d6c) {
            ctx->pc = 0x2D2DA4u;
            goto label_2d2da4;
        }
    }
    ctx->pc = 0x2D2D74u;
label_2d2d74:
    // 0x2d2d74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d2d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d2d78:
    // 0x2d2d78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d2d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2d7c:
    // 0x2d2d7c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d2d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2d2d80:
    // 0x2d2d80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d2d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d2d84:
    // 0x2d2d84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d2d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2d88:
    // 0x2d2d88: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d2d88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_2d2d8c:
    // 0x2d2d8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d2d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2d90:
    // 0x2d2d90: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d2d90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_2d2d94:
    // 0x2d2d94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d2d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2d98:
    // 0x2d2d98: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d2d98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_2d2d9c:
    // 0x2d2d9c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d2d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d2da0:
    // 0x2d2da0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d2da0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d2da4:
    // 0x2d2da4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d2da4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d2da8:
    // 0x2d2da8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2d2da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2d2dac:
    // 0x2d2dac: 0x3e00008  jr          $ra
label_2d2db0:
    if (ctx->pc == 0x2D2DB0u) {
        ctx->pc = 0x2D2DB4u;
        goto label_fallthrough_0x2d2dac;
    }
    ctx->pc = 0x2D2DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d2dac:
    ctx->pc = 0x2D2DB4u;
}
