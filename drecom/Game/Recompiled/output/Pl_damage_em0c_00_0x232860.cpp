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

// Function: Pl_damage_em0c_00
// Address: 0x232860 - 0x232eb8
void Pl_damage_em0c_00_0x232860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_damage_em0c_00_0x232860");
#endif

    switch (ctx->pc) {
        case 0x232860u: goto label_232860;
        case 0x232864u: goto label_232864;
        case 0x232868u: goto label_232868;
        case 0x23286cu: goto label_23286c;
        case 0x232870u: goto label_232870;
        case 0x232874u: goto label_232874;
        case 0x232878u: goto label_232878;
        case 0x23287cu: goto label_23287c;
        case 0x232880u: goto label_232880;
        case 0x232884u: goto label_232884;
        case 0x232888u: goto label_232888;
        case 0x23288cu: goto label_23288c;
        case 0x232890u: goto label_232890;
        case 0x232894u: goto label_232894;
        case 0x232898u: goto label_232898;
        case 0x23289cu: goto label_23289c;
        case 0x2328a0u: goto label_2328a0;
        case 0x2328a4u: goto label_2328a4;
        case 0x2328a8u: goto label_2328a8;
        case 0x2328acu: goto label_2328ac;
        case 0x2328b0u: goto label_2328b0;
        case 0x2328b4u: goto label_2328b4;
        case 0x2328b8u: goto label_2328b8;
        case 0x2328bcu: goto label_2328bc;
        case 0x2328c0u: goto label_2328c0;
        case 0x2328c4u: goto label_2328c4;
        case 0x2328c8u: goto label_2328c8;
        case 0x2328ccu: goto label_2328cc;
        case 0x2328d0u: goto label_2328d0;
        case 0x2328d4u: goto label_2328d4;
        case 0x2328d8u: goto label_2328d8;
        case 0x2328dcu: goto label_2328dc;
        case 0x2328e0u: goto label_2328e0;
        case 0x2328e4u: goto label_2328e4;
        case 0x2328e8u: goto label_2328e8;
        case 0x2328ecu: goto label_2328ec;
        case 0x2328f0u: goto label_2328f0;
        case 0x2328f4u: goto label_2328f4;
        case 0x2328f8u: goto label_2328f8;
        case 0x2328fcu: goto label_2328fc;
        case 0x232900u: goto label_232900;
        case 0x232904u: goto label_232904;
        case 0x232908u: goto label_232908;
        case 0x23290cu: goto label_23290c;
        case 0x232910u: goto label_232910;
        case 0x232914u: goto label_232914;
        case 0x232918u: goto label_232918;
        case 0x23291cu: goto label_23291c;
        case 0x232920u: goto label_232920;
        case 0x232924u: goto label_232924;
        case 0x232928u: goto label_232928;
        case 0x23292cu: goto label_23292c;
        case 0x232930u: goto label_232930;
        case 0x232934u: goto label_232934;
        case 0x232938u: goto label_232938;
        case 0x23293cu: goto label_23293c;
        case 0x232940u: goto label_232940;
        case 0x232944u: goto label_232944;
        case 0x232948u: goto label_232948;
        case 0x23294cu: goto label_23294c;
        case 0x232950u: goto label_232950;
        case 0x232954u: goto label_232954;
        case 0x232958u: goto label_232958;
        case 0x23295cu: goto label_23295c;
        case 0x232960u: goto label_232960;
        case 0x232964u: goto label_232964;
        case 0x232968u: goto label_232968;
        case 0x23296cu: goto label_23296c;
        case 0x232970u: goto label_232970;
        case 0x232974u: goto label_232974;
        case 0x232978u: goto label_232978;
        case 0x23297cu: goto label_23297c;
        case 0x232980u: goto label_232980;
        case 0x232984u: goto label_232984;
        case 0x232988u: goto label_232988;
        case 0x23298cu: goto label_23298c;
        case 0x232990u: goto label_232990;
        case 0x232994u: goto label_232994;
        case 0x232998u: goto label_232998;
        case 0x23299cu: goto label_23299c;
        case 0x2329a0u: goto label_2329a0;
        case 0x2329a4u: goto label_2329a4;
        case 0x2329a8u: goto label_2329a8;
        case 0x2329acu: goto label_2329ac;
        case 0x2329b0u: goto label_2329b0;
        case 0x2329b4u: goto label_2329b4;
        case 0x2329b8u: goto label_2329b8;
        case 0x2329bcu: goto label_2329bc;
        case 0x2329c0u: goto label_2329c0;
        case 0x2329c4u: goto label_2329c4;
        case 0x2329c8u: goto label_2329c8;
        case 0x2329ccu: goto label_2329cc;
        case 0x2329d0u: goto label_2329d0;
        case 0x2329d4u: goto label_2329d4;
        case 0x2329d8u: goto label_2329d8;
        case 0x2329dcu: goto label_2329dc;
        case 0x2329e0u: goto label_2329e0;
        case 0x2329e4u: goto label_2329e4;
        case 0x2329e8u: goto label_2329e8;
        case 0x2329ecu: goto label_2329ec;
        case 0x2329f0u: goto label_2329f0;
        case 0x2329f4u: goto label_2329f4;
        case 0x2329f8u: goto label_2329f8;
        case 0x2329fcu: goto label_2329fc;
        case 0x232a00u: goto label_232a00;
        case 0x232a04u: goto label_232a04;
        case 0x232a08u: goto label_232a08;
        case 0x232a0cu: goto label_232a0c;
        case 0x232a10u: goto label_232a10;
        case 0x232a14u: goto label_232a14;
        case 0x232a18u: goto label_232a18;
        case 0x232a1cu: goto label_232a1c;
        case 0x232a20u: goto label_232a20;
        case 0x232a24u: goto label_232a24;
        case 0x232a28u: goto label_232a28;
        case 0x232a2cu: goto label_232a2c;
        case 0x232a30u: goto label_232a30;
        case 0x232a34u: goto label_232a34;
        case 0x232a38u: goto label_232a38;
        case 0x232a3cu: goto label_232a3c;
        case 0x232a40u: goto label_232a40;
        case 0x232a44u: goto label_232a44;
        case 0x232a48u: goto label_232a48;
        case 0x232a4cu: goto label_232a4c;
        case 0x232a50u: goto label_232a50;
        case 0x232a54u: goto label_232a54;
        case 0x232a58u: goto label_232a58;
        case 0x232a5cu: goto label_232a5c;
        case 0x232a60u: goto label_232a60;
        case 0x232a64u: goto label_232a64;
        case 0x232a68u: goto label_232a68;
        case 0x232a6cu: goto label_232a6c;
        case 0x232a70u: goto label_232a70;
        case 0x232a74u: goto label_232a74;
        case 0x232a78u: goto label_232a78;
        case 0x232a7cu: goto label_232a7c;
        case 0x232a80u: goto label_232a80;
        case 0x232a84u: goto label_232a84;
        case 0x232a88u: goto label_232a88;
        case 0x232a8cu: goto label_232a8c;
        case 0x232a90u: goto label_232a90;
        case 0x232a94u: goto label_232a94;
        case 0x232a98u: goto label_232a98;
        case 0x232a9cu: goto label_232a9c;
        case 0x232aa0u: goto label_232aa0;
        case 0x232aa4u: goto label_232aa4;
        case 0x232aa8u: goto label_232aa8;
        case 0x232aacu: goto label_232aac;
        case 0x232ab0u: goto label_232ab0;
        case 0x232ab4u: goto label_232ab4;
        case 0x232ab8u: goto label_232ab8;
        case 0x232abcu: goto label_232abc;
        case 0x232ac0u: goto label_232ac0;
        case 0x232ac4u: goto label_232ac4;
        case 0x232ac8u: goto label_232ac8;
        case 0x232accu: goto label_232acc;
        case 0x232ad0u: goto label_232ad0;
        case 0x232ad4u: goto label_232ad4;
        case 0x232ad8u: goto label_232ad8;
        case 0x232adcu: goto label_232adc;
        case 0x232ae0u: goto label_232ae0;
        case 0x232ae4u: goto label_232ae4;
        case 0x232ae8u: goto label_232ae8;
        case 0x232aecu: goto label_232aec;
        case 0x232af0u: goto label_232af0;
        case 0x232af4u: goto label_232af4;
        case 0x232af8u: goto label_232af8;
        case 0x232afcu: goto label_232afc;
        case 0x232b00u: goto label_232b00;
        case 0x232b04u: goto label_232b04;
        case 0x232b08u: goto label_232b08;
        case 0x232b0cu: goto label_232b0c;
        case 0x232b10u: goto label_232b10;
        case 0x232b14u: goto label_232b14;
        case 0x232b18u: goto label_232b18;
        case 0x232b1cu: goto label_232b1c;
        case 0x232b20u: goto label_232b20;
        case 0x232b24u: goto label_232b24;
        case 0x232b28u: goto label_232b28;
        case 0x232b2cu: goto label_232b2c;
        case 0x232b30u: goto label_232b30;
        case 0x232b34u: goto label_232b34;
        case 0x232b38u: goto label_232b38;
        case 0x232b3cu: goto label_232b3c;
        case 0x232b40u: goto label_232b40;
        case 0x232b44u: goto label_232b44;
        case 0x232b48u: goto label_232b48;
        case 0x232b4cu: goto label_232b4c;
        case 0x232b50u: goto label_232b50;
        case 0x232b54u: goto label_232b54;
        case 0x232b58u: goto label_232b58;
        case 0x232b5cu: goto label_232b5c;
        case 0x232b60u: goto label_232b60;
        case 0x232b64u: goto label_232b64;
        case 0x232b68u: goto label_232b68;
        case 0x232b6cu: goto label_232b6c;
        case 0x232b70u: goto label_232b70;
        case 0x232b74u: goto label_232b74;
        case 0x232b78u: goto label_232b78;
        case 0x232b7cu: goto label_232b7c;
        case 0x232b80u: goto label_232b80;
        case 0x232b84u: goto label_232b84;
        case 0x232b88u: goto label_232b88;
        case 0x232b8cu: goto label_232b8c;
        case 0x232b90u: goto label_232b90;
        case 0x232b94u: goto label_232b94;
        case 0x232b98u: goto label_232b98;
        case 0x232b9cu: goto label_232b9c;
        case 0x232ba0u: goto label_232ba0;
        case 0x232ba4u: goto label_232ba4;
        case 0x232ba8u: goto label_232ba8;
        case 0x232bacu: goto label_232bac;
        case 0x232bb0u: goto label_232bb0;
        case 0x232bb4u: goto label_232bb4;
        case 0x232bb8u: goto label_232bb8;
        case 0x232bbcu: goto label_232bbc;
        case 0x232bc0u: goto label_232bc0;
        case 0x232bc4u: goto label_232bc4;
        case 0x232bc8u: goto label_232bc8;
        case 0x232bccu: goto label_232bcc;
        case 0x232bd0u: goto label_232bd0;
        case 0x232bd4u: goto label_232bd4;
        case 0x232bd8u: goto label_232bd8;
        case 0x232bdcu: goto label_232bdc;
        case 0x232be0u: goto label_232be0;
        case 0x232be4u: goto label_232be4;
        case 0x232be8u: goto label_232be8;
        case 0x232becu: goto label_232bec;
        case 0x232bf0u: goto label_232bf0;
        case 0x232bf4u: goto label_232bf4;
        case 0x232bf8u: goto label_232bf8;
        case 0x232bfcu: goto label_232bfc;
        case 0x232c00u: goto label_232c00;
        case 0x232c04u: goto label_232c04;
        case 0x232c08u: goto label_232c08;
        case 0x232c0cu: goto label_232c0c;
        case 0x232c10u: goto label_232c10;
        case 0x232c14u: goto label_232c14;
        case 0x232c18u: goto label_232c18;
        case 0x232c1cu: goto label_232c1c;
        case 0x232c20u: goto label_232c20;
        case 0x232c24u: goto label_232c24;
        case 0x232c28u: goto label_232c28;
        case 0x232c2cu: goto label_232c2c;
        case 0x232c30u: goto label_232c30;
        case 0x232c34u: goto label_232c34;
        case 0x232c38u: goto label_232c38;
        case 0x232c3cu: goto label_232c3c;
        case 0x232c40u: goto label_232c40;
        case 0x232c44u: goto label_232c44;
        case 0x232c48u: goto label_232c48;
        case 0x232c4cu: goto label_232c4c;
        case 0x232c50u: goto label_232c50;
        case 0x232c54u: goto label_232c54;
        case 0x232c58u: goto label_232c58;
        case 0x232c5cu: goto label_232c5c;
        case 0x232c60u: goto label_232c60;
        case 0x232c64u: goto label_232c64;
        case 0x232c68u: goto label_232c68;
        case 0x232c6cu: goto label_232c6c;
        case 0x232c70u: goto label_232c70;
        case 0x232c74u: goto label_232c74;
        case 0x232c78u: goto label_232c78;
        case 0x232c7cu: goto label_232c7c;
        case 0x232c80u: goto label_232c80;
        case 0x232c84u: goto label_232c84;
        case 0x232c88u: goto label_232c88;
        case 0x232c8cu: goto label_232c8c;
        case 0x232c90u: goto label_232c90;
        case 0x232c94u: goto label_232c94;
        case 0x232c98u: goto label_232c98;
        case 0x232c9cu: goto label_232c9c;
        case 0x232ca0u: goto label_232ca0;
        case 0x232ca4u: goto label_232ca4;
        case 0x232ca8u: goto label_232ca8;
        case 0x232cacu: goto label_232cac;
        case 0x232cb0u: goto label_232cb0;
        case 0x232cb4u: goto label_232cb4;
        case 0x232cb8u: goto label_232cb8;
        case 0x232cbcu: goto label_232cbc;
        case 0x232cc0u: goto label_232cc0;
        case 0x232cc4u: goto label_232cc4;
        case 0x232cc8u: goto label_232cc8;
        case 0x232cccu: goto label_232ccc;
        case 0x232cd0u: goto label_232cd0;
        case 0x232cd4u: goto label_232cd4;
        case 0x232cd8u: goto label_232cd8;
        case 0x232cdcu: goto label_232cdc;
        case 0x232ce0u: goto label_232ce0;
        case 0x232ce4u: goto label_232ce4;
        case 0x232ce8u: goto label_232ce8;
        case 0x232cecu: goto label_232cec;
        case 0x232cf0u: goto label_232cf0;
        case 0x232cf4u: goto label_232cf4;
        case 0x232cf8u: goto label_232cf8;
        case 0x232cfcu: goto label_232cfc;
        case 0x232d00u: goto label_232d00;
        case 0x232d04u: goto label_232d04;
        case 0x232d08u: goto label_232d08;
        case 0x232d0cu: goto label_232d0c;
        case 0x232d10u: goto label_232d10;
        case 0x232d14u: goto label_232d14;
        case 0x232d18u: goto label_232d18;
        case 0x232d1cu: goto label_232d1c;
        case 0x232d20u: goto label_232d20;
        case 0x232d24u: goto label_232d24;
        case 0x232d28u: goto label_232d28;
        case 0x232d2cu: goto label_232d2c;
        case 0x232d30u: goto label_232d30;
        case 0x232d34u: goto label_232d34;
        case 0x232d38u: goto label_232d38;
        case 0x232d3cu: goto label_232d3c;
        case 0x232d40u: goto label_232d40;
        case 0x232d44u: goto label_232d44;
        case 0x232d48u: goto label_232d48;
        case 0x232d4cu: goto label_232d4c;
        case 0x232d50u: goto label_232d50;
        case 0x232d54u: goto label_232d54;
        case 0x232d58u: goto label_232d58;
        case 0x232d5cu: goto label_232d5c;
        case 0x232d60u: goto label_232d60;
        case 0x232d64u: goto label_232d64;
        case 0x232d68u: goto label_232d68;
        case 0x232d6cu: goto label_232d6c;
        case 0x232d70u: goto label_232d70;
        case 0x232d74u: goto label_232d74;
        case 0x232d78u: goto label_232d78;
        case 0x232d7cu: goto label_232d7c;
        case 0x232d80u: goto label_232d80;
        case 0x232d84u: goto label_232d84;
        case 0x232d88u: goto label_232d88;
        case 0x232d8cu: goto label_232d8c;
        case 0x232d90u: goto label_232d90;
        case 0x232d94u: goto label_232d94;
        case 0x232d98u: goto label_232d98;
        case 0x232d9cu: goto label_232d9c;
        case 0x232da0u: goto label_232da0;
        case 0x232da4u: goto label_232da4;
        case 0x232da8u: goto label_232da8;
        case 0x232dacu: goto label_232dac;
        case 0x232db0u: goto label_232db0;
        case 0x232db4u: goto label_232db4;
        case 0x232db8u: goto label_232db8;
        case 0x232dbcu: goto label_232dbc;
        case 0x232dc0u: goto label_232dc0;
        case 0x232dc4u: goto label_232dc4;
        case 0x232dc8u: goto label_232dc8;
        case 0x232dccu: goto label_232dcc;
        case 0x232dd0u: goto label_232dd0;
        case 0x232dd4u: goto label_232dd4;
        case 0x232dd8u: goto label_232dd8;
        case 0x232ddcu: goto label_232ddc;
        case 0x232de0u: goto label_232de0;
        case 0x232de4u: goto label_232de4;
        case 0x232de8u: goto label_232de8;
        case 0x232decu: goto label_232dec;
        case 0x232df0u: goto label_232df0;
        case 0x232df4u: goto label_232df4;
        case 0x232df8u: goto label_232df8;
        case 0x232dfcu: goto label_232dfc;
        case 0x232e00u: goto label_232e00;
        case 0x232e04u: goto label_232e04;
        case 0x232e08u: goto label_232e08;
        case 0x232e0cu: goto label_232e0c;
        case 0x232e10u: goto label_232e10;
        case 0x232e14u: goto label_232e14;
        case 0x232e18u: goto label_232e18;
        case 0x232e1cu: goto label_232e1c;
        case 0x232e20u: goto label_232e20;
        case 0x232e24u: goto label_232e24;
        case 0x232e28u: goto label_232e28;
        case 0x232e2cu: goto label_232e2c;
        case 0x232e30u: goto label_232e30;
        case 0x232e34u: goto label_232e34;
        case 0x232e38u: goto label_232e38;
        case 0x232e3cu: goto label_232e3c;
        case 0x232e40u: goto label_232e40;
        case 0x232e44u: goto label_232e44;
        case 0x232e48u: goto label_232e48;
        case 0x232e4cu: goto label_232e4c;
        case 0x232e50u: goto label_232e50;
        case 0x232e54u: goto label_232e54;
        case 0x232e58u: goto label_232e58;
        case 0x232e5cu: goto label_232e5c;
        case 0x232e60u: goto label_232e60;
        case 0x232e64u: goto label_232e64;
        case 0x232e68u: goto label_232e68;
        case 0x232e6cu: goto label_232e6c;
        case 0x232e70u: goto label_232e70;
        case 0x232e74u: goto label_232e74;
        case 0x232e78u: goto label_232e78;
        case 0x232e7cu: goto label_232e7c;
        case 0x232e80u: goto label_232e80;
        case 0x232e84u: goto label_232e84;
        case 0x232e88u: goto label_232e88;
        case 0x232e8cu: goto label_232e8c;
        case 0x232e90u: goto label_232e90;
        case 0x232e94u: goto label_232e94;
        case 0x232e98u: goto label_232e98;
        case 0x232e9cu: goto label_232e9c;
        case 0x232ea0u: goto label_232ea0;
        case 0x232ea4u: goto label_232ea4;
        case 0x232ea8u: goto label_232ea8;
        case 0x232eacu: goto label_232eac;
        case 0x232eb0u: goto label_232eb0;
        case 0x232eb4u: goto label_232eb4;
        default: break;
    }

    ctx->pc = 0x232860u;

label_232860:
    // 0x232860: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x232860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_232864:
    // 0x232864: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x232864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
label_232868:
    // 0x232868: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x232868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_23286c:
    // 0x23286c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23286cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_232870:
    // 0x232870: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x232870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_232874:
    // 0x232874: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x232874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_232878:
    // 0x232878: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x232878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
label_23287c:
    // 0x23287c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x23287cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_232880:
    // 0x232880: 0x24730080  addiu       $s3, $v1, 0x80
    ctx->pc = 0x232880u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_232884:
    // 0x232884: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232888:
    // 0x232888: 0x8c711210  lw          $s1, 0x1210($v1)
    ctx->pc = 0x232888u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
label_23288c:
    // 0x23288c: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x23288cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
label_232890:
    // 0x232890: 0x24720fa0  addiu       $s2, $v1, 0xFA0
    ctx->pc = 0x232890u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4000));
label_232894:
    // 0x232894: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232898:
    // 0x232898: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x232898u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_23289c:
    // 0x23289c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x23289cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2328a0:
    // 0x2328a0: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x2328a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2328a4:
    // 0x2328a4: 0x1020017c  beqz        $at, . + 4 + (0x17C << 2)
label_2328a8:
    if (ctx->pc == 0x2328A8u) {
        ctx->pc = 0x2328ACu;
        goto label_2328ac;
    }
    ctx->pc = 0x2328A4u;
    {
        const bool branch_taken_0x2328a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2328a4) {
            ctx->pc = 0x232E98u;
            goto label_232e98;
        }
    }
    ctx->pc = 0x2328ACu;
label_2328ac:
    // 0x2328ac: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2328acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2328b0:
    // 0x2328b0: 0x246411d0  addiu       $a0, $v1, 0x11D0
    ctx->pc = 0x2328b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4560));
label_2328b4:
    // 0x2328b4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2328b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2328b8:
    // 0x2328b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2328b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2328bc:
    // 0x2328bc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2328bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2328c0:
    // 0x2328c0: 0x600008  jr          $v1
label_2328c4:
    if (ctx->pc == 0x2328C4u) {
        ctx->pc = 0x2328C8u;
        goto label_2328c8;
    }
    ctx->pc = 0x2328C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2328C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2328C8u;
label_2328c8:
    // 0x2328c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2328c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2328cc:
    // 0x2328cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2328ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2328d0:
    // 0x2328d0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2328d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_2328d4:
    // 0x2328d4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2328d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2328d8:
    // 0x2328d8: 0x906210a8  lbu         $v0, 0x10A8($v1)
    ctx->pc = 0x2328d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
label_2328dc:
    // 0x2328dc: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2328dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_2328e0:
    // 0x2328e0: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x2328e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
label_2328e4:
    // 0x2328e4: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x2328e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_2328e8:
    // 0x2328e8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2328e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2328ec:
    // 0x2328ec: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2328ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_2328f0:
    // 0x2328f0: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x2328f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_2328f4:
    // 0x2328f4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2328f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2328f8:
    // 0x2328f8: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x2328f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_2328fc:
    // 0x2328fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2328fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_232900:
    // 0x232900: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232904:
    // 0x232904: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x232904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_232908:
    // 0x232908: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x232908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_23290c:
    // 0x23290c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23290cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_232910:
    // 0x232910: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232914:
    // 0x232914: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x232914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_232918:
    // 0x232918: 0x3c02c270  lui         $v0, 0xC270
    ctx->pc = 0x232918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49776 << 16));
label_23291c:
    // 0x23291c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23291cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_232920:
    // 0x232920: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232924:
    // 0x232924: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x232924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_232928:
    // 0x232928: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x232928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
label_23292c:
    // 0x23292c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23292cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_232930:
    // 0x232930: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232934:
    // 0x232934: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x232934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_232938:
    // 0x232938: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23293c:
    // 0x23293c: 0xac4013fc  sw          $zero, 0x13FC($v0)
    ctx->pc = 0x23293cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5116), GPR_U32(ctx, 0));
label_232940:
    // 0x232940: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232944:
    // 0x232944: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x232944u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_232948:
    // 0x232948: 0xc096b40  jal         func_25AD00
label_23294c:
    if (ctx->pc == 0x23294Cu) {
        ctx->pc = 0x232950u;
        goto label_232950;
    }
    ctx->pc = 0x232948u;
    SET_GPR_U32(ctx, 31, 0x232950u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x232948u, 0x232950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232950u;
label_232950:
    // 0x232950: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x232950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_232954:
    // 0x232954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x232954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_232958:
    // 0x232958: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23295c:
    // 0x23295c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x23295cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_232960:
    // 0x232960: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232964:
    // 0x232964: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x232964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_232968:
    // 0x232968: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23296c:
    // 0x23296c: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x23296cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232970:
    // 0x232970: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x232970u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_232974:
    // 0x232974: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x232974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_232978:
    // 0x232978: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23297c:
    // 0x23297c: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x23297cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_232980:
    // 0x232980: 0x3c02c32a  lui         $v0, 0xC32A
    ctx->pc = 0x232980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49962 << 16));
label_232984:
    // 0x232984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x232984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_232988:
    // 0x232988: 0x0  nop
    ctx->pc = 0x232988u;
    // NOP
label_23298c:
    // 0x23298c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23298cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_232990:
    // 0x232990: 0x0  nop
    ctx->pc = 0x232990u;
    // NOP
label_232994:
    // 0x232994: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_232998:
    if (ctx->pc == 0x232998u) {
        ctx->pc = 0x23299Cu;
        goto label_23299c;
    }
    ctx->pc = 0x232994u;
    {
        const bool branch_taken_0x232994 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x232994) {
            ctx->pc = 0x2329B8u;
            goto label_2329b8;
        }
    }
    ctx->pc = 0x23299Cu;
label_23299c:
    // 0x23299c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23299cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2329a0:
    // 0x2329a0: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x2329a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2329a4:
    // 0x2329a4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2329a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_2329a8:
    // 0x2329a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2329a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2329ac:
    // 0x2329ac: 0x0  nop
    ctx->pc = 0x2329acu;
    // NOP
label_2329b0:
    // 0x2329b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2329b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2329b4:
    // 0x2329b4: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x2329b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_2329b8:
    // 0x2329b8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2329b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2329bc:
    // 0x2329bc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2329bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2329c0:
    // 0x2329c0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2329c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_2329c4:
    // 0x2329c4: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x2329c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_2329c8:
    // 0x2329c8: 0xc05cf7c  jal         func_173DF0
label_2329cc:
    if (ctx->pc == 0x2329CCu) {
        ctx->pc = 0x2329D0u;
        goto label_2329d0;
    }
    ctx->pc = 0x2329C8u;
    SET_GPR_U32(ctx, 31, 0x2329D0u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2329C8u, 0x2329D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2329D0u;
label_2329d0:
    // 0x2329d0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2329d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_2329d4:
    // 0x2329d4: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2329d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
label_2329d8:
    // 0x2329d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2329d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2329dc:
    // 0x2329dc: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2329dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2329e0:
    // 0x2329e0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2329e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2329e4:
    // 0x2329e4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2329e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2329e8:
    // 0x2329e8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2329e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2329ec:
    // 0x2329ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2329ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2329f0:
    // 0x2329f0: 0x0  nop
    ctx->pc = 0x2329f0u;
    // NOP
label_2329f4:
    // 0x2329f4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2329f8:
    if (ctx->pc == 0x2329F8u) {
        ctx->pc = 0x2329FCu;
        goto label_2329fc;
    }
    ctx->pc = 0x2329F4u;
    {
        const bool branch_taken_0x2329f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2329f4) {
            ctx->pc = 0x232A08u;
            goto label_232a08;
        }
    }
    ctx->pc = 0x2329FCu;
label_2329fc:
    // 0x2329fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2329fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_232a00:
    // 0x232a00: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232a04:
    // 0x232a04: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x232a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_232a08:
    // 0x232a08: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232a0c:
    // 0x232a0c: 0xc05cd34  jal         func_1734D0
label_232a10:
    if (ctx->pc == 0x232A10u) {
        ctx->pc = 0x232A14u;
        goto label_232a14;
    }
    ctx->pc = 0x232A0Cu;
    SET_GPR_U32(ctx, 31, 0x232A14u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x232A0Cu, 0x232A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232A14u;
label_232a14:
    // 0x232a14: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x232a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_232a18:
    // 0x232a18: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x232a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_232a1c:
    // 0x232a1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x232a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_232a20:
    // 0x232a20: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232a24:
    // 0x232a24: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x232a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_232a28:
    // 0x232a28: 0xc0573d8  jal         func_15CF60
label_232a2c:
    if (ctx->pc == 0x232A2Cu) {
        ctx->pc = 0x232A30u;
        goto label_232a30;
    }
    ctx->pc = 0x232A28u;
    SET_GPR_U32(ctx, 31, 0x232A30u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x232A28u, 0x232A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232A30u;
label_232a30:
    // 0x232a30: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232a34:
    // 0x232a34: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x232a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_232a38:
    // 0x232a38: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x232a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232a3c:
    // 0x232a3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x232a3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_232a40:
    // 0x232a40: 0x0  nop
    ctx->pc = 0x232a40u;
    // NOP
label_232a44:
    // 0x232a44: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_232a48:
    if (ctx->pc == 0x232A48u) {
        ctx->pc = 0x232A4Cu;
        goto label_232a4c;
    }
    ctx->pc = 0x232A44u;
    {
        const bool branch_taken_0x232a44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x232a44) {
            ctx->pc = 0x232A58u;
            goto label_232a58;
        }
    }
    ctx->pc = 0x232A4Cu;
label_232a4c:
    // 0x232a4c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x232a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232a50:
    // 0x232a50: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232a54:
    // 0x232a54: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x232a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_232a58:
    // 0x232a58: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232a5c:
    // 0x232a5c: 0xc0974dc  jal         func_25D370
label_232a60:
    if (ctx->pc == 0x232A60u) {
        ctx->pc = 0x232A64u;
        goto label_232a64;
    }
    ctx->pc = 0x232A5Cu;
    SET_GPR_U32(ctx, 31, 0x232A64u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x232A5Cu, 0x232A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232A64u;
label_232a64:
    // 0x232a64: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232a68:
    // 0x232a68: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x232a68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_232a6c:
    // 0x232a6c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_232a70:
    if (ctx->pc == 0x232A70u) {
        ctx->pc = 0x232A74u;
        goto label_232a74;
    }
    ctx->pc = 0x232A6Cu;
    {
        const bool branch_taken_0x232a6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x232a6c) {
            ctx->pc = 0x232A80u;
            goto label_232a80;
        }
    }
    ctx->pc = 0x232A74u;
label_232a74:
    // 0x232a74: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x232a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_232a78:
    // 0x232a78: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232a7c:
    // 0x232a7c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x232a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_232a80:
    // 0x232a80: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232a84:
    // 0x232a84: 0x8c6312f4  lw          $v1, 0x12F4($v1)
    ctx->pc = 0x232a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4852)));
label_232a88:
    // 0x232a88: 0x30630018  andi        $v1, $v1, 0x18
    ctx->pc = 0x232a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)24);
label_232a8c:
    // 0x232a8c: 0x10600102  beqz        $v1, . + 4 + (0x102 << 2)
label_232a90:
    if (ctx->pc == 0x232A90u) {
        ctx->pc = 0x232A94u;
        goto label_232a94;
    }
    ctx->pc = 0x232A8Cu;
    {
        const bool branch_taken_0x232a8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x232a8c) {
            ctx->pc = 0x232E98u;
            goto label_232e98;
        }
    }
    ctx->pc = 0x232A94u;
label_232a94:
    // 0x232a94: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x232a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_232a98:
    // 0x232a98: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232a9c:
    // 0x232a9c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x232a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_232aa0:
    // 0x232aa0: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x232aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_232aa4:
    // 0x232aa4: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x232aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_232aa8:
    // 0x232aa8: 0xc0684d8  jal         func_1A1360
label_232aac:
    if (ctx->pc == 0x232AACu) {
        ctx->pc = 0x232AB0u;
        goto label_232ab0;
    }
    ctx->pc = 0x232AA8u;
    SET_GPR_U32(ctx, 31, 0x232AB0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x232AA8u, 0x232AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232AB0u;
label_232ab0:
    // 0x232ab0: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x232ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
label_232ab4:
    // 0x232ab4: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x232ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
label_232ab8:
    // 0x232ab8: 0xc0684d8  jal         func_1A1360
label_232abc:
    if (ctx->pc == 0x232ABCu) {
        ctx->pc = 0x232AC0u;
        goto label_232ac0;
    }
    ctx->pc = 0x232AB8u;
    SET_GPR_U32(ctx, 31, 0x232AC0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x232AB8u, 0x232AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232AC0u;
label_232ac0:
    // 0x232ac0: 0x100000f5  b           . + 4 + (0xF5 << 2)
label_232ac4:
    if (ctx->pc == 0x232AC4u) {
        ctx->pc = 0x232AC8u;
        goto label_232ac8;
    }
    ctx->pc = 0x232AC0u;
    {
        const bool branch_taken_0x232ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232ac0) {
            ctx->pc = 0x232E98u;
            goto label_232e98;
        }
    }
    ctx->pc = 0x232AC8u;
label_232ac8:
    // 0x232ac8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232acc:
    // 0x232acc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x232accu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_232ad0:
    // 0x232ad0: 0xc096b40  jal         func_25AD00
label_232ad4:
    if (ctx->pc == 0x232AD4u) {
        ctx->pc = 0x232AD8u;
        goto label_232ad8;
    }
    ctx->pc = 0x232AD0u;
    SET_GPR_U32(ctx, 31, 0x232AD8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x232AD0u, 0x232AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232AD8u;
label_232ad8:
    // 0x232ad8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x232ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_232adc:
    // 0x232adc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x232adcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_232ae0:
    // 0x232ae0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232ae4:
    // 0x232ae4: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x232ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_232ae8:
    // 0x232ae8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232aec:
    // 0x232aec: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x232aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_232af0:
    // 0x232af0: 0x3c02c32a  lui         $v0, 0xC32A
    ctx->pc = 0x232af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49962 << 16));
label_232af4:
    // 0x232af4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x232af4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_232af8:
    // 0x232af8: 0x0  nop
    ctx->pc = 0x232af8u;
    // NOP
label_232afc:
    // 0x232afc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x232afcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_232b00:
    // 0x232b00: 0x0  nop
    ctx->pc = 0x232b00u;
    // NOP
label_232b04:
    // 0x232b04: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_232b08:
    if (ctx->pc == 0x232B08u) {
        ctx->pc = 0x232B0Cu;
        goto label_232b0c;
    }
    ctx->pc = 0x232B04u;
    {
        const bool branch_taken_0x232b04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x232b04) {
            ctx->pc = 0x232B28u;
            goto label_232b28;
        }
    }
    ctx->pc = 0x232B0Cu;
label_232b0c:
    // 0x232b0c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232b10:
    // 0x232b10: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x232b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_232b14:
    // 0x232b14: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x232b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_232b18:
    // 0x232b18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x232b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_232b1c:
    // 0x232b1c: 0x0  nop
    ctx->pc = 0x232b1cu;
    // NOP
label_232b20:
    // 0x232b20: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x232b20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_232b24:
    // 0x232b24: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x232b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_232b28:
    // 0x232b28: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232b2c:
    // 0x232b2c: 0xc4401b50  lwc1        $f0, 0x1B50($v0)
    ctx->pc = 0x232b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232b30:
    // 0x232b30: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232b34:
    // 0x232b34: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x232b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_232b38:
    // 0x232b38: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232b3c:
    // 0x232b3c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232b40:
    // 0x232b40: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x232b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_232b44:
    // 0x232b44: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x232b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_232b48:
    // 0x232b48: 0xc05cf7c  jal         func_173DF0
label_232b4c:
    if (ctx->pc == 0x232B4Cu) {
        ctx->pc = 0x232B50u;
        goto label_232b50;
    }
    ctx->pc = 0x232B48u;
    SET_GPR_U32(ctx, 31, 0x232B50u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x232B48u, 0x232B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232B50u;
label_232b50:
    // 0x232b50: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x232b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_232b54:
    // 0x232b54: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x232b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
label_232b58:
    // 0x232b58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x232b58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_232b5c:
    // 0x232b5c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x232b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232b60:
    // 0x232b60: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x232b60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_232b64:
    // 0x232b64: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232b68:
    // 0x232b68: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x232b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232b6c:
    // 0x232b6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x232b6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_232b70:
    // 0x232b70: 0x0  nop
    ctx->pc = 0x232b70u;
    // NOP
label_232b74:
    // 0x232b74: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_232b78:
    if (ctx->pc == 0x232B78u) {
        ctx->pc = 0x232B7Cu;
        goto label_232b7c;
    }
    ctx->pc = 0x232B74u;
    {
        const bool branch_taken_0x232b74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x232b74) {
            ctx->pc = 0x232B88u;
            goto label_232b88;
        }
    }
    ctx->pc = 0x232B7Cu;
label_232b7c:
    // 0x232b7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x232b7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_232b80:
    // 0x232b80: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232b84:
    // 0x232b84: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x232b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_232b88:
    // 0x232b88: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232b8c:
    // 0x232b8c: 0xc05cd34  jal         func_1734D0
label_232b90:
    if (ctx->pc == 0x232B90u) {
        ctx->pc = 0x232B94u;
        goto label_232b94;
    }
    ctx->pc = 0x232B8Cu;
    SET_GPR_U32(ctx, 31, 0x232B94u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x232B8Cu, 0x232B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232B94u;
label_232b94:
    // 0x232b94: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x232b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_232b98:
    // 0x232b98: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x232b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_232b9c:
    // 0x232b9c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x232b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_232ba0:
    // 0x232ba0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232ba4:
    // 0x232ba4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x232ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_232ba8:
    // 0x232ba8: 0xc0573d8  jal         func_15CF60
label_232bac:
    if (ctx->pc == 0x232BACu) {
        ctx->pc = 0x232BB0u;
        goto label_232bb0;
    }
    ctx->pc = 0x232BA8u;
    SET_GPR_U32(ctx, 31, 0x232BB0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x232BA8u, 0x232BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232BB0u;
label_232bb0:
    // 0x232bb0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232bb4:
    // 0x232bb4: 0x8c4212f4  lw          $v0, 0x12F4($v0)
    ctx->pc = 0x232bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4852)));
label_232bb8:
    // 0x232bb8: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x232bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
label_232bbc:
    // 0x232bbc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_232bc0:
    if (ctx->pc == 0x232BC0u) {
        ctx->pc = 0x232BC4u;
        goto label_232bc4;
    }
    ctx->pc = 0x232BBCu;
    {
        const bool branch_taken_0x232bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232bbc) {
            ctx->pc = 0x232BF0u;
            goto label_232bf0;
        }
    }
    ctx->pc = 0x232BC4u;
label_232bc4:
    // 0x232bc4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x232bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_232bc8:
    // 0x232bc8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232bcc:
    // 0x232bcc: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x232bccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_232bd0:
    // 0x232bd0: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x232bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_232bd4:
    // 0x232bd4: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x232bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_232bd8:
    // 0x232bd8: 0xc0684d8  jal         func_1A1360
label_232bdc:
    if (ctx->pc == 0x232BDCu) {
        ctx->pc = 0x232BE0u;
        goto label_232be0;
    }
    ctx->pc = 0x232BD8u;
    SET_GPR_U32(ctx, 31, 0x232BE0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x232BD8u, 0x232BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232BE0u;
label_232be0:
    // 0x232be0: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x232be0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
label_232be4:
    // 0x232be4: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x232be4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
label_232be8:
    // 0x232be8: 0xc0684d8  jal         func_1A1360
label_232bec:
    if (ctx->pc == 0x232BECu) {
        ctx->pc = 0x232BF0u;
        goto label_232bf0;
    }
    ctx->pc = 0x232BE8u;
    SET_GPR_U32(ctx, 31, 0x232BF0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x232BE8u, 0x232BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232BF0u;
label_232bf0:
    // 0x232bf0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232bf4:
    // 0x232bf4: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x232bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_232bf8:
    // 0x232bf8: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x232bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232bfc:
    // 0x232bfc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x232bfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_232c00:
    // 0x232c00: 0x0  nop
    ctx->pc = 0x232c00u;
    // NOP
label_232c04:
    // 0x232c04: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_232c08:
    if (ctx->pc == 0x232C08u) {
        ctx->pc = 0x232C0Cu;
        goto label_232c0c;
    }
    ctx->pc = 0x232C04u;
    {
        const bool branch_taken_0x232c04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x232c04) {
            ctx->pc = 0x232C18u;
            goto label_232c18;
        }
    }
    ctx->pc = 0x232C0Cu;
label_232c0c:
    // 0x232c0c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x232c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232c10:
    // 0x232c10: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232c14:
    // 0x232c14: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x232c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_232c18:
    // 0x232c18: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232c1c:
    // 0x232c1c: 0xc0974dc  jal         func_25D370
label_232c20:
    if (ctx->pc == 0x232C20u) {
        ctx->pc = 0x232C24u;
        goto label_232c24;
    }
    ctx->pc = 0x232C1Cu;
    SET_GPR_U32(ctx, 31, 0x232C24u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x232C1Cu, 0x232C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C24u;
label_232c24:
    // 0x232c24: 0x1000009c  b           . + 4 + (0x9C << 2)
label_232c28:
    if (ctx->pc == 0x232C28u) {
        ctx->pc = 0x232C2Cu;
        goto label_232c2c;
    }
    ctx->pc = 0x232C24u;
    {
        const bool branch_taken_0x232c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232c24) {
            ctx->pc = 0x232E98u;
            goto label_232e98;
        }
    }
    ctx->pc = 0x232C2Cu;
label_232c2c:
    // 0x232c2c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x232c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_232c30:
    // 0x232c30: 0x2450ec70  addiu       $s0, $v0, -0x1390
    ctx->pc = 0x232c30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962288));
label_232c34:
    // 0x232c34: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x232c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_232c38:
    // 0x232c38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x232c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_232c3c:
    // 0x232c3c: 0x0  nop
    ctx->pc = 0x232c3cu;
    // NOP
label_232c40:
    // 0x232c40: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x232c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_232c44:
    // 0x232c44: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x232c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_232c48:
    // 0x232c48: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232c4c:
    // 0x232c4c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x232c4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_232c50:
    // 0x232c50: 0xc096b40  jal         func_25AD00
label_232c54:
    if (ctx->pc == 0x232C54u) {
        ctx->pc = 0x232C58u;
        goto label_232c58;
    }
    ctx->pc = 0x232C50u;
    SET_GPR_U32(ctx, 31, 0x232C58u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x232C50u, 0x232C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C58u;
label_232c58:
    // 0x232c58: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232c5c:
    // 0x232c5c: 0xc05cd10  jal         func_173440
label_232c60:
    if (ctx->pc == 0x232C60u) {
        ctx->pc = 0x232C64u;
        goto label_232c64;
    }
    ctx->pc = 0x232C5Cu;
    SET_GPR_U32(ctx, 31, 0x232C64u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x232C5Cu, 0x232C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C64u;
label_232c64:
    // 0x232c64: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x232c64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_232c68:
    // 0x232c68: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232c6c:
    // 0x232c6c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x232c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_232c70:
    // 0x232c70: 0xc0573d8  jal         func_15CF60
label_232c74:
    if (ctx->pc == 0x232C74u) {
        ctx->pc = 0x232C78u;
        goto label_232c78;
    }
    ctx->pc = 0x232C70u;
    SET_GPR_U32(ctx, 31, 0x232C78u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x232C70u, 0x232C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C78u;
label_232c78:
    // 0x232c78: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232c7c:
    // 0x232c7c: 0xc0974dc  jal         func_25D370
label_232c80:
    if (ctx->pc == 0x232C80u) {
        ctx->pc = 0x232C84u;
        goto label_232c84;
    }
    ctx->pc = 0x232C7Cu;
    SET_GPR_U32(ctx, 31, 0x232C84u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x232C7Cu, 0x232C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C84u;
label_232c84:
    // 0x232c84: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232c88:
    // 0x232c88: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x232c88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
label_232c8c:
    // 0x232c8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_232c90:
    if (ctx->pc == 0x232C90u) {
        ctx->pc = 0x232C94u;
        goto label_232c94;
    }
    ctx->pc = 0x232C8Cu;
    {
        const bool branch_taken_0x232c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232c8c) {
            ctx->pc = 0x232CA0u;
            goto label_232ca0;
        }
    }
    ctx->pc = 0x232C94u;
label_232c94:
    // 0x232c94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x232c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_232c98:
    // 0x232c98: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232c9c:
    // 0x232c9c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x232c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_232ca0:
    // 0x232ca0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232ca4:
    // 0x232ca4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232ca8:
    // 0x232ca8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x232ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_232cac:
    // 0x232cac: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x232cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_232cb0:
    // 0x232cb0: 0xc05cf7c  jal         func_173DF0
label_232cb4:
    if (ctx->pc == 0x232CB4u) {
        ctx->pc = 0x232CB8u;
        goto label_232cb8;
    }
    ctx->pc = 0x232CB0u;
    SET_GPR_U32(ctx, 31, 0x232CB8u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x232CB0u, 0x232CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232CB8u;
label_232cb8:
    // 0x232cb8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x232cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_232cbc:
    // 0x232cbc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232cc0:
    // 0x232cc0: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x232cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_232cc4:
    // 0x232cc4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x232cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232cc8:
    // 0x232cc8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x232cc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_232ccc:
    // 0x232ccc: 0x0  nop
    ctx->pc = 0x232cccu;
    // NOP
label_232cd0:
    // 0x232cd0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_232cd4:
    if (ctx->pc == 0x232CD4u) {
        ctx->pc = 0x232CD8u;
        goto label_232cd8;
    }
    ctx->pc = 0x232CD0u;
    {
        const bool branch_taken_0x232cd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x232cd0) {
            ctx->pc = 0x232CE4u;
            goto label_232ce4;
        }
    }
    ctx->pc = 0x232CD8u;
label_232cd8:
    // 0x232cd8: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x232cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232cdc:
    // 0x232cdc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232ce0:
    // 0x232ce0: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x232ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_232ce4:
    // 0x232ce4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232ce8:
    // 0x232ce8: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x232ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_232cec:
    // 0x232cec: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x232cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
label_232cf0:
    // 0x232cf0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x232cf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_232cf4:
    // 0x232cf4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x232cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232cf8:
    // 0x232cf8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x232cf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_232cfc:
    // 0x232cfc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x232cfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_232d00:
    // 0x232d00: 0x0  nop
    ctx->pc = 0x232d00u;
    // NOP
label_232d04:
    // 0x232d04: 0x45000064  bc1f        . + 4 + (0x64 << 2)
label_232d08:
    if (ctx->pc == 0x232D08u) {
        ctx->pc = 0x232D0Cu;
        goto label_232d0c;
    }
    ctx->pc = 0x232D04u;
    {
        const bool branch_taken_0x232d04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x232d04) {
            ctx->pc = 0x232E98u;
            goto label_232e98;
        }
    }
    ctx->pc = 0x232D0Cu;
label_232d0c:
    // 0x232d0c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232d10:
    // 0x232d10: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x232d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_232d14:
    // 0x232d14: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x232d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_232d18:
    // 0x232d18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x232d18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_232d1c:
    // 0x232d1c: 0x0  nop
    ctx->pc = 0x232d1cu;
    // NOP
label_232d20:
    // 0x232d20: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x232d20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_232d24:
    // 0x232d24: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x232d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_232d28:
    // 0x232d28: 0x1000005b  b           . + 4 + (0x5B << 2)
label_232d2c:
    if (ctx->pc == 0x232D2Cu) {
        ctx->pc = 0x232D30u;
        goto label_232d30;
    }
    ctx->pc = 0x232D28u;
    {
        const bool branch_taken_0x232d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232d28) {
            ctx->pc = 0x232E98u;
            goto label_232e98;
        }
    }
    ctx->pc = 0x232D30u;
label_232d30:
    // 0x232d30: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232d34:
    // 0x232d34: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x232d34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_232d38:
    // 0x232d38: 0xc096b40  jal         func_25AD00
label_232d3c:
    if (ctx->pc == 0x232D3Cu) {
        ctx->pc = 0x232D40u;
        goto label_232d40;
    }
    ctx->pc = 0x232D38u;
    SET_GPR_U32(ctx, 31, 0x232D40u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x232D38u, 0x232D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232D40u;
label_232d40:
    // 0x232d40: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232d44:
    // 0x232d44: 0xc05cd10  jal         func_173440
label_232d48:
    if (ctx->pc == 0x232D48u) {
        ctx->pc = 0x232D4Cu;
        goto label_232d4c;
    }
    ctx->pc = 0x232D44u;
    SET_GPR_U32(ctx, 31, 0x232D4Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x232D44u, 0x232D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232D4Cu;
label_232d4c:
    // 0x232d4c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x232d4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_232d50:
    // 0x232d50: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232d54:
    // 0x232d54: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x232d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_232d58:
    // 0x232d58: 0xc0573d8  jal         func_15CF60
label_232d5c:
    if (ctx->pc == 0x232D5Cu) {
        ctx->pc = 0x232D60u;
        goto label_232d60;
    }
    ctx->pc = 0x232D58u;
    SET_GPR_U32(ctx, 31, 0x232D60u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x232D58u, 0x232D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232D60u;
label_232d60:
    // 0x232d60: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232d64:
    // 0x232d64: 0xc0974dc  jal         func_25D370
label_232d68:
    if (ctx->pc == 0x232D68u) {
        ctx->pc = 0x232D6Cu;
        goto label_232d6c;
    }
    ctx->pc = 0x232D64u;
    SET_GPR_U32(ctx, 31, 0x232D6Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x232D64u, 0x232D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232D6Cu;
label_232d6c:
    // 0x232d6c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232d70:
    // 0x232d70: 0xc057634  jal         func_15D8D0
label_232d74:
    if (ctx->pc == 0x232D74u) {
        ctx->pc = 0x232D78u;
        goto label_232d78;
    }
    ctx->pc = 0x232D70u;
    SET_GPR_U32(ctx, 31, 0x232D78u);
    ctx->pc = 0x15D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D8D0u, 0x232D70u, 0x232D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232D78u;
label_232d78:
    // 0x232d78: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_232d7c:
    if (ctx->pc == 0x232D7Cu) {
        ctx->pc = 0x232D80u;
        goto label_232d80;
    }
    ctx->pc = 0x232D78u;
    {
        const bool branch_taken_0x232d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232d78) {
            ctx->pc = 0x232DA0u;
            goto label_232da0;
        }
    }
    ctx->pc = 0x232D80u;
label_232d80:
    // 0x232d80: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232d84:
    // 0x232d84: 0x8462127a  lh          $v0, 0x127A($v1)
    ctx->pc = 0x232d84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
label_232d88:
    // 0x232d88: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x232d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
label_232d8c:
    // 0x232d8c: 0xa462127a  sh          $v0, 0x127A($v1)
    ctx->pc = 0x232d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 2));
label_232d90:
    // 0x232d90: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x232d90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
label_232d94:
    // 0x232d94: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x232d94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_232d98:
    // 0x232d98: 0xc0684d8  jal         func_1A1360
label_232d9c:
    if (ctx->pc == 0x232D9Cu) {
        ctx->pc = 0x232DA0u;
        goto label_232da0;
    }
    ctx->pc = 0x232D98u;
    SET_GPR_U32(ctx, 31, 0x232DA0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x232D98u, 0x232DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232DA0u;
label_232da0:
    // 0x232da0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232da4:
    // 0x232da4: 0x8462127a  lh          $v0, 0x127A($v1)
    ctx->pc = 0x232da4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
label_232da8:
    // 0x232da8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x232da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_232dac:
    // 0x232dac: 0xa462127a  sh          $v0, 0x127A($v1)
    ctx->pc = 0x232dacu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 2));
label_232db0:
    // 0x232db0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232db4:
    // 0x232db4: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x232db4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
label_232db8:
    // 0x232db8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_232dbc:
    if (ctx->pc == 0x232DBCu) {
        ctx->pc = 0x232DC0u;
        goto label_232dc0;
    }
    ctx->pc = 0x232DB8u;
    {
        const bool branch_taken_0x232db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232db8) {
            ctx->pc = 0x232DE0u;
            goto label_232de0;
        }
    }
    ctx->pc = 0x232DC0u;
label_232dc0:
    // 0x232dc0: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x232dc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_232dc4:
    // 0x232dc4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x232dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_232dc8:
    // 0x232dc8: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x232dc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_232dcc:
    // 0x232dcc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_232dd0:
    if (ctx->pc == 0x232DD0u) {
        ctx->pc = 0x232DD4u;
        goto label_232dd4;
    }
    ctx->pc = 0x232DCCu;
    {
        const bool branch_taken_0x232dcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x232dcc) {
            ctx->pc = 0x232DE0u;
            goto label_232de0;
        }
    }
    ctx->pc = 0x232DD4u;
label_232dd4:
    // 0x232dd4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x232dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_232dd8:
    // 0x232dd8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232ddc:
    // 0x232ddc: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x232ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_232de0:
    // 0x232de0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232de4:
    // 0x232de4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232de8:
    // 0x232de8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x232de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_232dec:
    // 0x232dec: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x232decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_232df0:
    // 0x232df0: 0xc05cf7c  jal         func_173DF0
label_232df4:
    if (ctx->pc == 0x232DF4u) {
        ctx->pc = 0x232DF8u;
        goto label_232df8;
    }
    ctx->pc = 0x232DF0u;
    SET_GPR_U32(ctx, 31, 0x232DF8u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x232DF0u, 0x232DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232DF8u;
label_232df8:
    // 0x232df8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x232df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_232dfc:
    // 0x232dfc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232e00:
    // 0x232e00: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x232e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_232e04:
    // 0x232e04: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x232e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232e08:
    // 0x232e08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x232e08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_232e0c:
    // 0x232e0c: 0x0  nop
    ctx->pc = 0x232e0cu;
    // NOP
label_232e10:
    // 0x232e10: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_232e14:
    if (ctx->pc == 0x232E14u) {
        ctx->pc = 0x232E18u;
        goto label_232e18;
    }
    ctx->pc = 0x232E10u;
    {
        const bool branch_taken_0x232e10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x232e10) {
            ctx->pc = 0x232E98u;
            goto label_232e98;
        }
    }
    ctx->pc = 0x232E18u;
label_232e18:
    // 0x232e18: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x232e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232e1c:
    // 0x232e1c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232e20:
    // 0x232e20: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x232e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_232e24:
    // 0x232e24: 0x1000001c  b           . + 4 + (0x1C << 2)
label_232e28:
    if (ctx->pc == 0x232E28u) {
        ctx->pc = 0x232E2Cu;
        goto label_232e2c;
    }
    ctx->pc = 0x232E24u;
    {
        const bool branch_taken_0x232e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232e24) {
            ctx->pc = 0x232E98u;
            goto label_232e98;
        }
    }
    ctx->pc = 0x232E2Cu;
label_232e2c:
    // 0x232e2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x232e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_232e30:
    // 0x232e30: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232e34:
    // 0x232e34: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x232e34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_232e38:
    // 0x232e38: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x232e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_232e3c:
    // 0x232e3c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232e40:
    // 0x232e40: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x232e40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_232e44:
    // 0x232e44: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232e48:
    // 0x232e48: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x232e48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_232e4c:
    // 0x232e4c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232e50:
    // 0x232e50: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x232e50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_232e54:
    // 0x232e54: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x232e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_232e58:
    // 0x232e58: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232e5c:
    // 0x232e5c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x232e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_232e60:
    // 0x232e60: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232e64:
    // 0x232e64: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x232e64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_232e68:
    // 0x232e68: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x232e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_232e6c:
    // 0x232e6c: 0x26430150  addiu       $v1, $s2, 0x150
    ctx->pc = 0x232e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_232e70:
    // 0x232e70: 0xa064001d  sb          $a0, 0x1D($v1)
    ctx->pc = 0x232e70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 29), (uint8_t)GPR_U32(ctx, 4));
label_232e74:
    // 0x232e74: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_232e78:
    // 0x232e78: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x232e78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_232e7c:
    // 0x232e7c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x232e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_232e80:
    // 0x232e80: 0x2470ec70  addiu       $s0, $v1, -0x1390
    ctx->pc = 0x232e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962288));
label_232e84:
    // 0x232e84: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x232e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
label_232e88:
    // 0x232e88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x232e88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_232e8c:
    // 0x232e8c: 0x0  nop
    ctx->pc = 0x232e8cu;
    // NOP
label_232e90:
    // 0x232e90: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x232e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_232e94:
    // 0x232e94: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x232e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_232e98:
    // 0x232e98: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x232e98u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_232e9c:
    // 0x232e9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x232e9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_232ea0:
    // 0x232ea0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x232ea0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_232ea4:
    // 0x232ea4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x232ea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_232ea8:
    // 0x232ea8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x232ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_232eac:
    // 0x232eac: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x232eacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_232eb0:
    // 0x232eb0: 0x3e00008  jr          $ra
label_232eb4:
    if (ctx->pc == 0x232EB4u) {
        ctx->pc = 0x232EB8u;
        goto label_fallthrough_0x232eb0;
    }
    ctx->pc = 0x232EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x232eb0:
    ctx->pc = 0x232EB8u;
}
