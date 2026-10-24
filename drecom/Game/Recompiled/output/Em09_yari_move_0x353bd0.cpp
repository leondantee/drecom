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

// Function: Em09_yari_move
// Address: 0x353bd0 - 0x355044
void Em09_yari_move_0x353bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_yari_move_0x353bd0");
#endif

    switch (ctx->pc) {
        case 0x353bd0u: goto label_353bd0;
        case 0x353bd4u: goto label_353bd4;
        case 0x353bd8u: goto label_353bd8;
        case 0x353bdcu: goto label_353bdc;
        case 0x353be0u: goto label_353be0;
        case 0x353be4u: goto label_353be4;
        case 0x353be8u: goto label_353be8;
        case 0x353becu: goto label_353bec;
        case 0x353bf0u: goto label_353bf0;
        case 0x353bf4u: goto label_353bf4;
        case 0x353bf8u: goto label_353bf8;
        case 0x353bfcu: goto label_353bfc;
        case 0x353c00u: goto label_353c00;
        case 0x353c04u: goto label_353c04;
        case 0x353c08u: goto label_353c08;
        case 0x353c0cu: goto label_353c0c;
        case 0x353c10u: goto label_353c10;
        case 0x353c14u: goto label_353c14;
        case 0x353c18u: goto label_353c18;
        case 0x353c1cu: goto label_353c1c;
        case 0x353c20u: goto label_353c20;
        case 0x353c24u: goto label_353c24;
        case 0x353c28u: goto label_353c28;
        case 0x353c2cu: goto label_353c2c;
        case 0x353c30u: goto label_353c30;
        case 0x353c34u: goto label_353c34;
        case 0x353c38u: goto label_353c38;
        case 0x353c3cu: goto label_353c3c;
        case 0x353c40u: goto label_353c40;
        case 0x353c44u: goto label_353c44;
        case 0x353c48u: goto label_353c48;
        case 0x353c4cu: goto label_353c4c;
        case 0x353c50u: goto label_353c50;
        case 0x353c54u: goto label_353c54;
        case 0x353c58u: goto label_353c58;
        case 0x353c5cu: goto label_353c5c;
        case 0x353c60u: goto label_353c60;
        case 0x353c64u: goto label_353c64;
        case 0x353c68u: goto label_353c68;
        case 0x353c6cu: goto label_353c6c;
        case 0x353c70u: goto label_353c70;
        case 0x353c74u: goto label_353c74;
        case 0x353c78u: goto label_353c78;
        case 0x353c7cu: goto label_353c7c;
        case 0x353c80u: goto label_353c80;
        case 0x353c84u: goto label_353c84;
        case 0x353c88u: goto label_353c88;
        case 0x353c8cu: goto label_353c8c;
        case 0x353c90u: goto label_353c90;
        case 0x353c94u: goto label_353c94;
        case 0x353c98u: goto label_353c98;
        case 0x353c9cu: goto label_353c9c;
        case 0x353ca0u: goto label_353ca0;
        case 0x353ca4u: goto label_353ca4;
        case 0x353ca8u: goto label_353ca8;
        case 0x353cacu: goto label_353cac;
        case 0x353cb0u: goto label_353cb0;
        case 0x353cb4u: goto label_353cb4;
        case 0x353cb8u: goto label_353cb8;
        case 0x353cbcu: goto label_353cbc;
        case 0x353cc0u: goto label_353cc0;
        case 0x353cc4u: goto label_353cc4;
        case 0x353cc8u: goto label_353cc8;
        case 0x353cccu: goto label_353ccc;
        case 0x353cd0u: goto label_353cd0;
        case 0x353cd4u: goto label_353cd4;
        case 0x353cd8u: goto label_353cd8;
        case 0x353cdcu: goto label_353cdc;
        case 0x353ce0u: goto label_353ce0;
        case 0x353ce4u: goto label_353ce4;
        case 0x353ce8u: goto label_353ce8;
        case 0x353cecu: goto label_353cec;
        case 0x353cf0u: goto label_353cf0;
        case 0x353cf4u: goto label_353cf4;
        case 0x353cf8u: goto label_353cf8;
        case 0x353cfcu: goto label_353cfc;
        case 0x353d00u: goto label_353d00;
        case 0x353d04u: goto label_353d04;
        case 0x353d08u: goto label_353d08;
        case 0x353d0cu: goto label_353d0c;
        case 0x353d10u: goto label_353d10;
        case 0x353d14u: goto label_353d14;
        case 0x353d18u: goto label_353d18;
        case 0x353d1cu: goto label_353d1c;
        case 0x353d20u: goto label_353d20;
        case 0x353d24u: goto label_353d24;
        case 0x353d28u: goto label_353d28;
        case 0x353d2cu: goto label_353d2c;
        case 0x353d30u: goto label_353d30;
        case 0x353d34u: goto label_353d34;
        case 0x353d38u: goto label_353d38;
        case 0x353d3cu: goto label_353d3c;
        case 0x353d40u: goto label_353d40;
        case 0x353d44u: goto label_353d44;
        case 0x353d48u: goto label_353d48;
        case 0x353d4cu: goto label_353d4c;
        case 0x353d50u: goto label_353d50;
        case 0x353d54u: goto label_353d54;
        case 0x353d58u: goto label_353d58;
        case 0x353d5cu: goto label_353d5c;
        case 0x353d60u: goto label_353d60;
        case 0x353d64u: goto label_353d64;
        case 0x353d68u: goto label_353d68;
        case 0x353d6cu: goto label_353d6c;
        case 0x353d70u: goto label_353d70;
        case 0x353d74u: goto label_353d74;
        case 0x353d78u: goto label_353d78;
        case 0x353d7cu: goto label_353d7c;
        case 0x353d80u: goto label_353d80;
        case 0x353d84u: goto label_353d84;
        case 0x353d88u: goto label_353d88;
        case 0x353d8cu: goto label_353d8c;
        case 0x353d90u: goto label_353d90;
        case 0x353d94u: goto label_353d94;
        case 0x353d98u: goto label_353d98;
        case 0x353d9cu: goto label_353d9c;
        case 0x353da0u: goto label_353da0;
        case 0x353da4u: goto label_353da4;
        case 0x353da8u: goto label_353da8;
        case 0x353dacu: goto label_353dac;
        case 0x353db0u: goto label_353db0;
        case 0x353db4u: goto label_353db4;
        case 0x353db8u: goto label_353db8;
        case 0x353dbcu: goto label_353dbc;
        case 0x353dc0u: goto label_353dc0;
        case 0x353dc4u: goto label_353dc4;
        case 0x353dc8u: goto label_353dc8;
        case 0x353dccu: goto label_353dcc;
        case 0x353dd0u: goto label_353dd0;
        case 0x353dd4u: goto label_353dd4;
        case 0x353dd8u: goto label_353dd8;
        case 0x353ddcu: goto label_353ddc;
        case 0x353de0u: goto label_353de0;
        case 0x353de4u: goto label_353de4;
        case 0x353de8u: goto label_353de8;
        case 0x353decu: goto label_353dec;
        case 0x353df0u: goto label_353df0;
        case 0x353df4u: goto label_353df4;
        case 0x353df8u: goto label_353df8;
        case 0x353dfcu: goto label_353dfc;
        case 0x353e00u: goto label_353e00;
        case 0x353e04u: goto label_353e04;
        case 0x353e08u: goto label_353e08;
        case 0x353e0cu: goto label_353e0c;
        case 0x353e10u: goto label_353e10;
        case 0x353e14u: goto label_353e14;
        case 0x353e18u: goto label_353e18;
        case 0x353e1cu: goto label_353e1c;
        case 0x353e20u: goto label_353e20;
        case 0x353e24u: goto label_353e24;
        case 0x353e28u: goto label_353e28;
        case 0x353e2cu: goto label_353e2c;
        case 0x353e30u: goto label_353e30;
        case 0x353e34u: goto label_353e34;
        case 0x353e38u: goto label_353e38;
        case 0x353e3cu: goto label_353e3c;
        case 0x353e40u: goto label_353e40;
        case 0x353e44u: goto label_353e44;
        case 0x353e48u: goto label_353e48;
        case 0x353e4cu: goto label_353e4c;
        case 0x353e50u: goto label_353e50;
        case 0x353e54u: goto label_353e54;
        case 0x353e58u: goto label_353e58;
        case 0x353e5cu: goto label_353e5c;
        case 0x353e60u: goto label_353e60;
        case 0x353e64u: goto label_353e64;
        case 0x353e68u: goto label_353e68;
        case 0x353e6cu: goto label_353e6c;
        case 0x353e70u: goto label_353e70;
        case 0x353e74u: goto label_353e74;
        case 0x353e78u: goto label_353e78;
        case 0x353e7cu: goto label_353e7c;
        case 0x353e80u: goto label_353e80;
        case 0x353e84u: goto label_353e84;
        case 0x353e88u: goto label_353e88;
        case 0x353e8cu: goto label_353e8c;
        case 0x353e90u: goto label_353e90;
        case 0x353e94u: goto label_353e94;
        case 0x353e98u: goto label_353e98;
        case 0x353e9cu: goto label_353e9c;
        case 0x353ea0u: goto label_353ea0;
        case 0x353ea4u: goto label_353ea4;
        case 0x353ea8u: goto label_353ea8;
        case 0x353eacu: goto label_353eac;
        case 0x353eb0u: goto label_353eb0;
        case 0x353eb4u: goto label_353eb4;
        case 0x353eb8u: goto label_353eb8;
        case 0x353ebcu: goto label_353ebc;
        case 0x353ec0u: goto label_353ec0;
        case 0x353ec4u: goto label_353ec4;
        case 0x353ec8u: goto label_353ec8;
        case 0x353eccu: goto label_353ecc;
        case 0x353ed0u: goto label_353ed0;
        case 0x353ed4u: goto label_353ed4;
        case 0x353ed8u: goto label_353ed8;
        case 0x353edcu: goto label_353edc;
        case 0x353ee0u: goto label_353ee0;
        case 0x353ee4u: goto label_353ee4;
        case 0x353ee8u: goto label_353ee8;
        case 0x353eecu: goto label_353eec;
        case 0x353ef0u: goto label_353ef0;
        case 0x353ef4u: goto label_353ef4;
        case 0x353ef8u: goto label_353ef8;
        case 0x353efcu: goto label_353efc;
        case 0x353f00u: goto label_353f00;
        case 0x353f04u: goto label_353f04;
        case 0x353f08u: goto label_353f08;
        case 0x353f0cu: goto label_353f0c;
        case 0x353f10u: goto label_353f10;
        case 0x353f14u: goto label_353f14;
        case 0x353f18u: goto label_353f18;
        case 0x353f1cu: goto label_353f1c;
        case 0x353f20u: goto label_353f20;
        case 0x353f24u: goto label_353f24;
        case 0x353f28u: goto label_353f28;
        case 0x353f2cu: goto label_353f2c;
        case 0x353f30u: goto label_353f30;
        case 0x353f34u: goto label_353f34;
        case 0x353f38u: goto label_353f38;
        case 0x353f3cu: goto label_353f3c;
        case 0x353f40u: goto label_353f40;
        case 0x353f44u: goto label_353f44;
        case 0x353f48u: goto label_353f48;
        case 0x353f4cu: goto label_353f4c;
        case 0x353f50u: goto label_353f50;
        case 0x353f54u: goto label_353f54;
        case 0x353f58u: goto label_353f58;
        case 0x353f5cu: goto label_353f5c;
        case 0x353f60u: goto label_353f60;
        case 0x353f64u: goto label_353f64;
        case 0x353f68u: goto label_353f68;
        case 0x353f6cu: goto label_353f6c;
        case 0x353f70u: goto label_353f70;
        case 0x353f74u: goto label_353f74;
        case 0x353f78u: goto label_353f78;
        case 0x353f7cu: goto label_353f7c;
        case 0x353f80u: goto label_353f80;
        case 0x353f84u: goto label_353f84;
        case 0x353f88u: goto label_353f88;
        case 0x353f8cu: goto label_353f8c;
        case 0x353f90u: goto label_353f90;
        case 0x353f94u: goto label_353f94;
        case 0x353f98u: goto label_353f98;
        case 0x353f9cu: goto label_353f9c;
        case 0x353fa0u: goto label_353fa0;
        case 0x353fa4u: goto label_353fa4;
        case 0x353fa8u: goto label_353fa8;
        case 0x353facu: goto label_353fac;
        case 0x353fb0u: goto label_353fb0;
        case 0x353fb4u: goto label_353fb4;
        case 0x353fb8u: goto label_353fb8;
        case 0x353fbcu: goto label_353fbc;
        case 0x353fc0u: goto label_353fc0;
        case 0x353fc4u: goto label_353fc4;
        case 0x353fc8u: goto label_353fc8;
        case 0x353fccu: goto label_353fcc;
        case 0x353fd0u: goto label_353fd0;
        case 0x353fd4u: goto label_353fd4;
        case 0x353fd8u: goto label_353fd8;
        case 0x353fdcu: goto label_353fdc;
        case 0x353fe0u: goto label_353fe0;
        case 0x353fe4u: goto label_353fe4;
        case 0x353fe8u: goto label_353fe8;
        case 0x353fecu: goto label_353fec;
        case 0x353ff0u: goto label_353ff0;
        case 0x353ff4u: goto label_353ff4;
        case 0x353ff8u: goto label_353ff8;
        case 0x353ffcu: goto label_353ffc;
        case 0x354000u: goto label_354000;
        case 0x354004u: goto label_354004;
        case 0x354008u: goto label_354008;
        case 0x35400cu: goto label_35400c;
        case 0x354010u: goto label_354010;
        case 0x354014u: goto label_354014;
        case 0x354018u: goto label_354018;
        case 0x35401cu: goto label_35401c;
        case 0x354020u: goto label_354020;
        case 0x354024u: goto label_354024;
        case 0x354028u: goto label_354028;
        case 0x35402cu: goto label_35402c;
        case 0x354030u: goto label_354030;
        case 0x354034u: goto label_354034;
        case 0x354038u: goto label_354038;
        case 0x35403cu: goto label_35403c;
        case 0x354040u: goto label_354040;
        case 0x354044u: goto label_354044;
        case 0x354048u: goto label_354048;
        case 0x35404cu: goto label_35404c;
        case 0x354050u: goto label_354050;
        case 0x354054u: goto label_354054;
        case 0x354058u: goto label_354058;
        case 0x35405cu: goto label_35405c;
        case 0x354060u: goto label_354060;
        case 0x354064u: goto label_354064;
        case 0x354068u: goto label_354068;
        case 0x35406cu: goto label_35406c;
        case 0x354070u: goto label_354070;
        case 0x354074u: goto label_354074;
        case 0x354078u: goto label_354078;
        case 0x35407cu: goto label_35407c;
        case 0x354080u: goto label_354080;
        case 0x354084u: goto label_354084;
        case 0x354088u: goto label_354088;
        case 0x35408cu: goto label_35408c;
        case 0x354090u: goto label_354090;
        case 0x354094u: goto label_354094;
        case 0x354098u: goto label_354098;
        case 0x35409cu: goto label_35409c;
        case 0x3540a0u: goto label_3540a0;
        case 0x3540a4u: goto label_3540a4;
        case 0x3540a8u: goto label_3540a8;
        case 0x3540acu: goto label_3540ac;
        case 0x3540b0u: goto label_3540b0;
        case 0x3540b4u: goto label_3540b4;
        case 0x3540b8u: goto label_3540b8;
        case 0x3540bcu: goto label_3540bc;
        case 0x3540c0u: goto label_3540c0;
        case 0x3540c4u: goto label_3540c4;
        case 0x3540c8u: goto label_3540c8;
        case 0x3540ccu: goto label_3540cc;
        case 0x3540d0u: goto label_3540d0;
        case 0x3540d4u: goto label_3540d4;
        case 0x3540d8u: goto label_3540d8;
        case 0x3540dcu: goto label_3540dc;
        case 0x3540e0u: goto label_3540e0;
        case 0x3540e4u: goto label_3540e4;
        case 0x3540e8u: goto label_3540e8;
        case 0x3540ecu: goto label_3540ec;
        case 0x3540f0u: goto label_3540f0;
        case 0x3540f4u: goto label_3540f4;
        case 0x3540f8u: goto label_3540f8;
        case 0x3540fcu: goto label_3540fc;
        case 0x354100u: goto label_354100;
        case 0x354104u: goto label_354104;
        case 0x354108u: goto label_354108;
        case 0x35410cu: goto label_35410c;
        case 0x354110u: goto label_354110;
        case 0x354114u: goto label_354114;
        case 0x354118u: goto label_354118;
        case 0x35411cu: goto label_35411c;
        case 0x354120u: goto label_354120;
        case 0x354124u: goto label_354124;
        case 0x354128u: goto label_354128;
        case 0x35412cu: goto label_35412c;
        case 0x354130u: goto label_354130;
        case 0x354134u: goto label_354134;
        case 0x354138u: goto label_354138;
        case 0x35413cu: goto label_35413c;
        case 0x354140u: goto label_354140;
        case 0x354144u: goto label_354144;
        case 0x354148u: goto label_354148;
        case 0x35414cu: goto label_35414c;
        case 0x354150u: goto label_354150;
        case 0x354154u: goto label_354154;
        case 0x354158u: goto label_354158;
        case 0x35415cu: goto label_35415c;
        case 0x354160u: goto label_354160;
        case 0x354164u: goto label_354164;
        case 0x354168u: goto label_354168;
        case 0x35416cu: goto label_35416c;
        case 0x354170u: goto label_354170;
        case 0x354174u: goto label_354174;
        case 0x354178u: goto label_354178;
        case 0x35417cu: goto label_35417c;
        case 0x354180u: goto label_354180;
        case 0x354184u: goto label_354184;
        case 0x354188u: goto label_354188;
        case 0x35418cu: goto label_35418c;
        case 0x354190u: goto label_354190;
        case 0x354194u: goto label_354194;
        case 0x354198u: goto label_354198;
        case 0x35419cu: goto label_35419c;
        case 0x3541a0u: goto label_3541a0;
        case 0x3541a4u: goto label_3541a4;
        case 0x3541a8u: goto label_3541a8;
        case 0x3541acu: goto label_3541ac;
        case 0x3541b0u: goto label_3541b0;
        case 0x3541b4u: goto label_3541b4;
        case 0x3541b8u: goto label_3541b8;
        case 0x3541bcu: goto label_3541bc;
        case 0x3541c0u: goto label_3541c0;
        case 0x3541c4u: goto label_3541c4;
        case 0x3541c8u: goto label_3541c8;
        case 0x3541ccu: goto label_3541cc;
        case 0x3541d0u: goto label_3541d0;
        case 0x3541d4u: goto label_3541d4;
        case 0x3541d8u: goto label_3541d8;
        case 0x3541dcu: goto label_3541dc;
        case 0x3541e0u: goto label_3541e0;
        case 0x3541e4u: goto label_3541e4;
        case 0x3541e8u: goto label_3541e8;
        case 0x3541ecu: goto label_3541ec;
        case 0x3541f0u: goto label_3541f0;
        case 0x3541f4u: goto label_3541f4;
        case 0x3541f8u: goto label_3541f8;
        case 0x3541fcu: goto label_3541fc;
        case 0x354200u: goto label_354200;
        case 0x354204u: goto label_354204;
        case 0x354208u: goto label_354208;
        case 0x35420cu: goto label_35420c;
        case 0x354210u: goto label_354210;
        case 0x354214u: goto label_354214;
        case 0x354218u: goto label_354218;
        case 0x35421cu: goto label_35421c;
        case 0x354220u: goto label_354220;
        case 0x354224u: goto label_354224;
        case 0x354228u: goto label_354228;
        case 0x35422cu: goto label_35422c;
        case 0x354230u: goto label_354230;
        case 0x354234u: goto label_354234;
        case 0x354238u: goto label_354238;
        case 0x35423cu: goto label_35423c;
        case 0x354240u: goto label_354240;
        case 0x354244u: goto label_354244;
        case 0x354248u: goto label_354248;
        case 0x35424cu: goto label_35424c;
        case 0x354250u: goto label_354250;
        case 0x354254u: goto label_354254;
        case 0x354258u: goto label_354258;
        case 0x35425cu: goto label_35425c;
        case 0x354260u: goto label_354260;
        case 0x354264u: goto label_354264;
        case 0x354268u: goto label_354268;
        case 0x35426cu: goto label_35426c;
        case 0x354270u: goto label_354270;
        case 0x354274u: goto label_354274;
        case 0x354278u: goto label_354278;
        case 0x35427cu: goto label_35427c;
        case 0x354280u: goto label_354280;
        case 0x354284u: goto label_354284;
        case 0x354288u: goto label_354288;
        case 0x35428cu: goto label_35428c;
        case 0x354290u: goto label_354290;
        case 0x354294u: goto label_354294;
        case 0x354298u: goto label_354298;
        case 0x35429cu: goto label_35429c;
        case 0x3542a0u: goto label_3542a0;
        case 0x3542a4u: goto label_3542a4;
        case 0x3542a8u: goto label_3542a8;
        case 0x3542acu: goto label_3542ac;
        case 0x3542b0u: goto label_3542b0;
        case 0x3542b4u: goto label_3542b4;
        case 0x3542b8u: goto label_3542b8;
        case 0x3542bcu: goto label_3542bc;
        case 0x3542c0u: goto label_3542c0;
        case 0x3542c4u: goto label_3542c4;
        case 0x3542c8u: goto label_3542c8;
        case 0x3542ccu: goto label_3542cc;
        case 0x3542d0u: goto label_3542d0;
        case 0x3542d4u: goto label_3542d4;
        case 0x3542d8u: goto label_3542d8;
        case 0x3542dcu: goto label_3542dc;
        case 0x3542e0u: goto label_3542e0;
        case 0x3542e4u: goto label_3542e4;
        case 0x3542e8u: goto label_3542e8;
        case 0x3542ecu: goto label_3542ec;
        case 0x3542f0u: goto label_3542f0;
        case 0x3542f4u: goto label_3542f4;
        case 0x3542f8u: goto label_3542f8;
        case 0x3542fcu: goto label_3542fc;
        case 0x354300u: goto label_354300;
        case 0x354304u: goto label_354304;
        case 0x354308u: goto label_354308;
        case 0x35430cu: goto label_35430c;
        case 0x354310u: goto label_354310;
        case 0x354314u: goto label_354314;
        case 0x354318u: goto label_354318;
        case 0x35431cu: goto label_35431c;
        case 0x354320u: goto label_354320;
        case 0x354324u: goto label_354324;
        case 0x354328u: goto label_354328;
        case 0x35432cu: goto label_35432c;
        case 0x354330u: goto label_354330;
        case 0x354334u: goto label_354334;
        case 0x354338u: goto label_354338;
        case 0x35433cu: goto label_35433c;
        case 0x354340u: goto label_354340;
        case 0x354344u: goto label_354344;
        case 0x354348u: goto label_354348;
        case 0x35434cu: goto label_35434c;
        case 0x354350u: goto label_354350;
        case 0x354354u: goto label_354354;
        case 0x354358u: goto label_354358;
        case 0x35435cu: goto label_35435c;
        case 0x354360u: goto label_354360;
        case 0x354364u: goto label_354364;
        case 0x354368u: goto label_354368;
        case 0x35436cu: goto label_35436c;
        case 0x354370u: goto label_354370;
        case 0x354374u: goto label_354374;
        case 0x354378u: goto label_354378;
        case 0x35437cu: goto label_35437c;
        case 0x354380u: goto label_354380;
        case 0x354384u: goto label_354384;
        case 0x354388u: goto label_354388;
        case 0x35438cu: goto label_35438c;
        case 0x354390u: goto label_354390;
        case 0x354394u: goto label_354394;
        case 0x354398u: goto label_354398;
        case 0x35439cu: goto label_35439c;
        case 0x3543a0u: goto label_3543a0;
        case 0x3543a4u: goto label_3543a4;
        case 0x3543a8u: goto label_3543a8;
        case 0x3543acu: goto label_3543ac;
        case 0x3543b0u: goto label_3543b0;
        case 0x3543b4u: goto label_3543b4;
        case 0x3543b8u: goto label_3543b8;
        case 0x3543bcu: goto label_3543bc;
        case 0x3543c0u: goto label_3543c0;
        case 0x3543c4u: goto label_3543c4;
        case 0x3543c8u: goto label_3543c8;
        case 0x3543ccu: goto label_3543cc;
        case 0x3543d0u: goto label_3543d0;
        case 0x3543d4u: goto label_3543d4;
        case 0x3543d8u: goto label_3543d8;
        case 0x3543dcu: goto label_3543dc;
        case 0x3543e0u: goto label_3543e0;
        case 0x3543e4u: goto label_3543e4;
        case 0x3543e8u: goto label_3543e8;
        case 0x3543ecu: goto label_3543ec;
        case 0x3543f0u: goto label_3543f0;
        case 0x3543f4u: goto label_3543f4;
        case 0x3543f8u: goto label_3543f8;
        case 0x3543fcu: goto label_3543fc;
        case 0x354400u: goto label_354400;
        case 0x354404u: goto label_354404;
        case 0x354408u: goto label_354408;
        case 0x35440cu: goto label_35440c;
        case 0x354410u: goto label_354410;
        case 0x354414u: goto label_354414;
        case 0x354418u: goto label_354418;
        case 0x35441cu: goto label_35441c;
        case 0x354420u: goto label_354420;
        case 0x354424u: goto label_354424;
        case 0x354428u: goto label_354428;
        case 0x35442cu: goto label_35442c;
        case 0x354430u: goto label_354430;
        case 0x354434u: goto label_354434;
        case 0x354438u: goto label_354438;
        case 0x35443cu: goto label_35443c;
        case 0x354440u: goto label_354440;
        case 0x354444u: goto label_354444;
        case 0x354448u: goto label_354448;
        case 0x35444cu: goto label_35444c;
        case 0x354450u: goto label_354450;
        case 0x354454u: goto label_354454;
        case 0x354458u: goto label_354458;
        case 0x35445cu: goto label_35445c;
        case 0x354460u: goto label_354460;
        case 0x354464u: goto label_354464;
        case 0x354468u: goto label_354468;
        case 0x35446cu: goto label_35446c;
        case 0x354470u: goto label_354470;
        case 0x354474u: goto label_354474;
        case 0x354478u: goto label_354478;
        case 0x35447cu: goto label_35447c;
        case 0x354480u: goto label_354480;
        case 0x354484u: goto label_354484;
        case 0x354488u: goto label_354488;
        case 0x35448cu: goto label_35448c;
        case 0x354490u: goto label_354490;
        case 0x354494u: goto label_354494;
        case 0x354498u: goto label_354498;
        case 0x35449cu: goto label_35449c;
        case 0x3544a0u: goto label_3544a0;
        case 0x3544a4u: goto label_3544a4;
        case 0x3544a8u: goto label_3544a8;
        case 0x3544acu: goto label_3544ac;
        case 0x3544b0u: goto label_3544b0;
        case 0x3544b4u: goto label_3544b4;
        case 0x3544b8u: goto label_3544b8;
        case 0x3544bcu: goto label_3544bc;
        case 0x3544c0u: goto label_3544c0;
        case 0x3544c4u: goto label_3544c4;
        case 0x3544c8u: goto label_3544c8;
        case 0x3544ccu: goto label_3544cc;
        case 0x3544d0u: goto label_3544d0;
        case 0x3544d4u: goto label_3544d4;
        case 0x3544d8u: goto label_3544d8;
        case 0x3544dcu: goto label_3544dc;
        case 0x3544e0u: goto label_3544e0;
        case 0x3544e4u: goto label_3544e4;
        case 0x3544e8u: goto label_3544e8;
        case 0x3544ecu: goto label_3544ec;
        case 0x3544f0u: goto label_3544f0;
        case 0x3544f4u: goto label_3544f4;
        case 0x3544f8u: goto label_3544f8;
        case 0x3544fcu: goto label_3544fc;
        case 0x354500u: goto label_354500;
        case 0x354504u: goto label_354504;
        case 0x354508u: goto label_354508;
        case 0x35450cu: goto label_35450c;
        case 0x354510u: goto label_354510;
        case 0x354514u: goto label_354514;
        case 0x354518u: goto label_354518;
        case 0x35451cu: goto label_35451c;
        case 0x354520u: goto label_354520;
        case 0x354524u: goto label_354524;
        case 0x354528u: goto label_354528;
        case 0x35452cu: goto label_35452c;
        case 0x354530u: goto label_354530;
        case 0x354534u: goto label_354534;
        case 0x354538u: goto label_354538;
        case 0x35453cu: goto label_35453c;
        case 0x354540u: goto label_354540;
        case 0x354544u: goto label_354544;
        case 0x354548u: goto label_354548;
        case 0x35454cu: goto label_35454c;
        case 0x354550u: goto label_354550;
        case 0x354554u: goto label_354554;
        case 0x354558u: goto label_354558;
        case 0x35455cu: goto label_35455c;
        case 0x354560u: goto label_354560;
        case 0x354564u: goto label_354564;
        case 0x354568u: goto label_354568;
        case 0x35456cu: goto label_35456c;
        case 0x354570u: goto label_354570;
        case 0x354574u: goto label_354574;
        case 0x354578u: goto label_354578;
        case 0x35457cu: goto label_35457c;
        case 0x354580u: goto label_354580;
        case 0x354584u: goto label_354584;
        case 0x354588u: goto label_354588;
        case 0x35458cu: goto label_35458c;
        case 0x354590u: goto label_354590;
        case 0x354594u: goto label_354594;
        case 0x354598u: goto label_354598;
        case 0x35459cu: goto label_35459c;
        case 0x3545a0u: goto label_3545a0;
        case 0x3545a4u: goto label_3545a4;
        case 0x3545a8u: goto label_3545a8;
        case 0x3545acu: goto label_3545ac;
        case 0x3545b0u: goto label_3545b0;
        case 0x3545b4u: goto label_3545b4;
        case 0x3545b8u: goto label_3545b8;
        case 0x3545bcu: goto label_3545bc;
        case 0x3545c0u: goto label_3545c0;
        case 0x3545c4u: goto label_3545c4;
        case 0x3545c8u: goto label_3545c8;
        case 0x3545ccu: goto label_3545cc;
        case 0x3545d0u: goto label_3545d0;
        case 0x3545d4u: goto label_3545d4;
        case 0x3545d8u: goto label_3545d8;
        case 0x3545dcu: goto label_3545dc;
        case 0x3545e0u: goto label_3545e0;
        case 0x3545e4u: goto label_3545e4;
        case 0x3545e8u: goto label_3545e8;
        case 0x3545ecu: goto label_3545ec;
        case 0x3545f0u: goto label_3545f0;
        case 0x3545f4u: goto label_3545f4;
        case 0x3545f8u: goto label_3545f8;
        case 0x3545fcu: goto label_3545fc;
        case 0x354600u: goto label_354600;
        case 0x354604u: goto label_354604;
        case 0x354608u: goto label_354608;
        case 0x35460cu: goto label_35460c;
        case 0x354610u: goto label_354610;
        case 0x354614u: goto label_354614;
        case 0x354618u: goto label_354618;
        case 0x35461cu: goto label_35461c;
        case 0x354620u: goto label_354620;
        case 0x354624u: goto label_354624;
        case 0x354628u: goto label_354628;
        case 0x35462cu: goto label_35462c;
        case 0x354630u: goto label_354630;
        case 0x354634u: goto label_354634;
        case 0x354638u: goto label_354638;
        case 0x35463cu: goto label_35463c;
        case 0x354640u: goto label_354640;
        case 0x354644u: goto label_354644;
        case 0x354648u: goto label_354648;
        case 0x35464cu: goto label_35464c;
        case 0x354650u: goto label_354650;
        case 0x354654u: goto label_354654;
        case 0x354658u: goto label_354658;
        case 0x35465cu: goto label_35465c;
        case 0x354660u: goto label_354660;
        case 0x354664u: goto label_354664;
        case 0x354668u: goto label_354668;
        case 0x35466cu: goto label_35466c;
        case 0x354670u: goto label_354670;
        case 0x354674u: goto label_354674;
        case 0x354678u: goto label_354678;
        case 0x35467cu: goto label_35467c;
        case 0x354680u: goto label_354680;
        case 0x354684u: goto label_354684;
        case 0x354688u: goto label_354688;
        case 0x35468cu: goto label_35468c;
        case 0x354690u: goto label_354690;
        case 0x354694u: goto label_354694;
        case 0x354698u: goto label_354698;
        case 0x35469cu: goto label_35469c;
        case 0x3546a0u: goto label_3546a0;
        case 0x3546a4u: goto label_3546a4;
        case 0x3546a8u: goto label_3546a8;
        case 0x3546acu: goto label_3546ac;
        case 0x3546b0u: goto label_3546b0;
        case 0x3546b4u: goto label_3546b4;
        case 0x3546b8u: goto label_3546b8;
        case 0x3546bcu: goto label_3546bc;
        case 0x3546c0u: goto label_3546c0;
        case 0x3546c4u: goto label_3546c4;
        case 0x3546c8u: goto label_3546c8;
        case 0x3546ccu: goto label_3546cc;
        case 0x3546d0u: goto label_3546d0;
        case 0x3546d4u: goto label_3546d4;
        case 0x3546d8u: goto label_3546d8;
        case 0x3546dcu: goto label_3546dc;
        case 0x3546e0u: goto label_3546e0;
        case 0x3546e4u: goto label_3546e4;
        case 0x3546e8u: goto label_3546e8;
        case 0x3546ecu: goto label_3546ec;
        case 0x3546f0u: goto label_3546f0;
        case 0x3546f4u: goto label_3546f4;
        case 0x3546f8u: goto label_3546f8;
        case 0x3546fcu: goto label_3546fc;
        case 0x354700u: goto label_354700;
        case 0x354704u: goto label_354704;
        case 0x354708u: goto label_354708;
        case 0x35470cu: goto label_35470c;
        case 0x354710u: goto label_354710;
        case 0x354714u: goto label_354714;
        case 0x354718u: goto label_354718;
        case 0x35471cu: goto label_35471c;
        case 0x354720u: goto label_354720;
        case 0x354724u: goto label_354724;
        case 0x354728u: goto label_354728;
        case 0x35472cu: goto label_35472c;
        case 0x354730u: goto label_354730;
        case 0x354734u: goto label_354734;
        case 0x354738u: goto label_354738;
        case 0x35473cu: goto label_35473c;
        case 0x354740u: goto label_354740;
        case 0x354744u: goto label_354744;
        case 0x354748u: goto label_354748;
        case 0x35474cu: goto label_35474c;
        case 0x354750u: goto label_354750;
        case 0x354754u: goto label_354754;
        case 0x354758u: goto label_354758;
        case 0x35475cu: goto label_35475c;
        case 0x354760u: goto label_354760;
        case 0x354764u: goto label_354764;
        case 0x354768u: goto label_354768;
        case 0x35476cu: goto label_35476c;
        case 0x354770u: goto label_354770;
        case 0x354774u: goto label_354774;
        case 0x354778u: goto label_354778;
        case 0x35477cu: goto label_35477c;
        case 0x354780u: goto label_354780;
        case 0x354784u: goto label_354784;
        case 0x354788u: goto label_354788;
        case 0x35478cu: goto label_35478c;
        case 0x354790u: goto label_354790;
        case 0x354794u: goto label_354794;
        case 0x354798u: goto label_354798;
        case 0x35479cu: goto label_35479c;
        case 0x3547a0u: goto label_3547a0;
        case 0x3547a4u: goto label_3547a4;
        case 0x3547a8u: goto label_3547a8;
        case 0x3547acu: goto label_3547ac;
        case 0x3547b0u: goto label_3547b0;
        case 0x3547b4u: goto label_3547b4;
        case 0x3547b8u: goto label_3547b8;
        case 0x3547bcu: goto label_3547bc;
        case 0x3547c0u: goto label_3547c0;
        case 0x3547c4u: goto label_3547c4;
        case 0x3547c8u: goto label_3547c8;
        case 0x3547ccu: goto label_3547cc;
        case 0x3547d0u: goto label_3547d0;
        case 0x3547d4u: goto label_3547d4;
        case 0x3547d8u: goto label_3547d8;
        case 0x3547dcu: goto label_3547dc;
        case 0x3547e0u: goto label_3547e0;
        case 0x3547e4u: goto label_3547e4;
        case 0x3547e8u: goto label_3547e8;
        case 0x3547ecu: goto label_3547ec;
        case 0x3547f0u: goto label_3547f0;
        case 0x3547f4u: goto label_3547f4;
        case 0x3547f8u: goto label_3547f8;
        case 0x3547fcu: goto label_3547fc;
        case 0x354800u: goto label_354800;
        case 0x354804u: goto label_354804;
        case 0x354808u: goto label_354808;
        case 0x35480cu: goto label_35480c;
        case 0x354810u: goto label_354810;
        case 0x354814u: goto label_354814;
        case 0x354818u: goto label_354818;
        case 0x35481cu: goto label_35481c;
        case 0x354820u: goto label_354820;
        case 0x354824u: goto label_354824;
        case 0x354828u: goto label_354828;
        case 0x35482cu: goto label_35482c;
        case 0x354830u: goto label_354830;
        case 0x354834u: goto label_354834;
        case 0x354838u: goto label_354838;
        case 0x35483cu: goto label_35483c;
        case 0x354840u: goto label_354840;
        case 0x354844u: goto label_354844;
        case 0x354848u: goto label_354848;
        case 0x35484cu: goto label_35484c;
        case 0x354850u: goto label_354850;
        case 0x354854u: goto label_354854;
        case 0x354858u: goto label_354858;
        case 0x35485cu: goto label_35485c;
        case 0x354860u: goto label_354860;
        case 0x354864u: goto label_354864;
        case 0x354868u: goto label_354868;
        case 0x35486cu: goto label_35486c;
        case 0x354870u: goto label_354870;
        case 0x354874u: goto label_354874;
        case 0x354878u: goto label_354878;
        case 0x35487cu: goto label_35487c;
        case 0x354880u: goto label_354880;
        case 0x354884u: goto label_354884;
        case 0x354888u: goto label_354888;
        case 0x35488cu: goto label_35488c;
        case 0x354890u: goto label_354890;
        case 0x354894u: goto label_354894;
        case 0x354898u: goto label_354898;
        case 0x35489cu: goto label_35489c;
        case 0x3548a0u: goto label_3548a0;
        case 0x3548a4u: goto label_3548a4;
        case 0x3548a8u: goto label_3548a8;
        case 0x3548acu: goto label_3548ac;
        case 0x3548b0u: goto label_3548b0;
        case 0x3548b4u: goto label_3548b4;
        case 0x3548b8u: goto label_3548b8;
        case 0x3548bcu: goto label_3548bc;
        case 0x3548c0u: goto label_3548c0;
        case 0x3548c4u: goto label_3548c4;
        case 0x3548c8u: goto label_3548c8;
        case 0x3548ccu: goto label_3548cc;
        case 0x3548d0u: goto label_3548d0;
        case 0x3548d4u: goto label_3548d4;
        case 0x3548d8u: goto label_3548d8;
        case 0x3548dcu: goto label_3548dc;
        case 0x3548e0u: goto label_3548e0;
        case 0x3548e4u: goto label_3548e4;
        case 0x3548e8u: goto label_3548e8;
        case 0x3548ecu: goto label_3548ec;
        case 0x3548f0u: goto label_3548f0;
        case 0x3548f4u: goto label_3548f4;
        case 0x3548f8u: goto label_3548f8;
        case 0x3548fcu: goto label_3548fc;
        case 0x354900u: goto label_354900;
        case 0x354904u: goto label_354904;
        case 0x354908u: goto label_354908;
        case 0x35490cu: goto label_35490c;
        case 0x354910u: goto label_354910;
        case 0x354914u: goto label_354914;
        case 0x354918u: goto label_354918;
        case 0x35491cu: goto label_35491c;
        case 0x354920u: goto label_354920;
        case 0x354924u: goto label_354924;
        case 0x354928u: goto label_354928;
        case 0x35492cu: goto label_35492c;
        case 0x354930u: goto label_354930;
        case 0x354934u: goto label_354934;
        case 0x354938u: goto label_354938;
        case 0x35493cu: goto label_35493c;
        case 0x354940u: goto label_354940;
        case 0x354944u: goto label_354944;
        case 0x354948u: goto label_354948;
        case 0x35494cu: goto label_35494c;
        case 0x354950u: goto label_354950;
        case 0x354954u: goto label_354954;
        case 0x354958u: goto label_354958;
        case 0x35495cu: goto label_35495c;
        case 0x354960u: goto label_354960;
        case 0x354964u: goto label_354964;
        case 0x354968u: goto label_354968;
        case 0x35496cu: goto label_35496c;
        case 0x354970u: goto label_354970;
        case 0x354974u: goto label_354974;
        case 0x354978u: goto label_354978;
        case 0x35497cu: goto label_35497c;
        case 0x354980u: goto label_354980;
        case 0x354984u: goto label_354984;
        case 0x354988u: goto label_354988;
        case 0x35498cu: goto label_35498c;
        case 0x354990u: goto label_354990;
        case 0x354994u: goto label_354994;
        case 0x354998u: goto label_354998;
        case 0x35499cu: goto label_35499c;
        case 0x3549a0u: goto label_3549a0;
        case 0x3549a4u: goto label_3549a4;
        case 0x3549a8u: goto label_3549a8;
        case 0x3549acu: goto label_3549ac;
        case 0x3549b0u: goto label_3549b0;
        case 0x3549b4u: goto label_3549b4;
        case 0x3549b8u: goto label_3549b8;
        case 0x3549bcu: goto label_3549bc;
        case 0x3549c0u: goto label_3549c0;
        case 0x3549c4u: goto label_3549c4;
        case 0x3549c8u: goto label_3549c8;
        case 0x3549ccu: goto label_3549cc;
        case 0x3549d0u: goto label_3549d0;
        case 0x3549d4u: goto label_3549d4;
        case 0x3549d8u: goto label_3549d8;
        case 0x3549dcu: goto label_3549dc;
        case 0x3549e0u: goto label_3549e0;
        case 0x3549e4u: goto label_3549e4;
        case 0x3549e8u: goto label_3549e8;
        case 0x3549ecu: goto label_3549ec;
        case 0x3549f0u: goto label_3549f0;
        case 0x3549f4u: goto label_3549f4;
        case 0x3549f8u: goto label_3549f8;
        case 0x3549fcu: goto label_3549fc;
        case 0x354a00u: goto label_354a00;
        case 0x354a04u: goto label_354a04;
        case 0x354a08u: goto label_354a08;
        case 0x354a0cu: goto label_354a0c;
        case 0x354a10u: goto label_354a10;
        case 0x354a14u: goto label_354a14;
        case 0x354a18u: goto label_354a18;
        case 0x354a1cu: goto label_354a1c;
        case 0x354a20u: goto label_354a20;
        case 0x354a24u: goto label_354a24;
        case 0x354a28u: goto label_354a28;
        case 0x354a2cu: goto label_354a2c;
        case 0x354a30u: goto label_354a30;
        case 0x354a34u: goto label_354a34;
        case 0x354a38u: goto label_354a38;
        case 0x354a3cu: goto label_354a3c;
        case 0x354a40u: goto label_354a40;
        case 0x354a44u: goto label_354a44;
        case 0x354a48u: goto label_354a48;
        case 0x354a4cu: goto label_354a4c;
        case 0x354a50u: goto label_354a50;
        case 0x354a54u: goto label_354a54;
        case 0x354a58u: goto label_354a58;
        case 0x354a5cu: goto label_354a5c;
        case 0x354a60u: goto label_354a60;
        case 0x354a64u: goto label_354a64;
        case 0x354a68u: goto label_354a68;
        case 0x354a6cu: goto label_354a6c;
        case 0x354a70u: goto label_354a70;
        case 0x354a74u: goto label_354a74;
        case 0x354a78u: goto label_354a78;
        case 0x354a7cu: goto label_354a7c;
        case 0x354a80u: goto label_354a80;
        case 0x354a84u: goto label_354a84;
        case 0x354a88u: goto label_354a88;
        case 0x354a8cu: goto label_354a8c;
        case 0x354a90u: goto label_354a90;
        case 0x354a94u: goto label_354a94;
        case 0x354a98u: goto label_354a98;
        case 0x354a9cu: goto label_354a9c;
        case 0x354aa0u: goto label_354aa0;
        case 0x354aa4u: goto label_354aa4;
        case 0x354aa8u: goto label_354aa8;
        case 0x354aacu: goto label_354aac;
        case 0x354ab0u: goto label_354ab0;
        case 0x354ab4u: goto label_354ab4;
        case 0x354ab8u: goto label_354ab8;
        case 0x354abcu: goto label_354abc;
        case 0x354ac0u: goto label_354ac0;
        case 0x354ac4u: goto label_354ac4;
        case 0x354ac8u: goto label_354ac8;
        case 0x354accu: goto label_354acc;
        case 0x354ad0u: goto label_354ad0;
        case 0x354ad4u: goto label_354ad4;
        case 0x354ad8u: goto label_354ad8;
        case 0x354adcu: goto label_354adc;
        case 0x354ae0u: goto label_354ae0;
        case 0x354ae4u: goto label_354ae4;
        case 0x354ae8u: goto label_354ae8;
        case 0x354aecu: goto label_354aec;
        case 0x354af0u: goto label_354af0;
        case 0x354af4u: goto label_354af4;
        case 0x354af8u: goto label_354af8;
        case 0x354afcu: goto label_354afc;
        case 0x354b00u: goto label_354b00;
        case 0x354b04u: goto label_354b04;
        case 0x354b08u: goto label_354b08;
        case 0x354b0cu: goto label_354b0c;
        case 0x354b10u: goto label_354b10;
        case 0x354b14u: goto label_354b14;
        case 0x354b18u: goto label_354b18;
        case 0x354b1cu: goto label_354b1c;
        case 0x354b20u: goto label_354b20;
        case 0x354b24u: goto label_354b24;
        case 0x354b28u: goto label_354b28;
        case 0x354b2cu: goto label_354b2c;
        case 0x354b30u: goto label_354b30;
        case 0x354b34u: goto label_354b34;
        case 0x354b38u: goto label_354b38;
        case 0x354b3cu: goto label_354b3c;
        case 0x354b40u: goto label_354b40;
        case 0x354b44u: goto label_354b44;
        case 0x354b48u: goto label_354b48;
        case 0x354b4cu: goto label_354b4c;
        case 0x354b50u: goto label_354b50;
        case 0x354b54u: goto label_354b54;
        case 0x354b58u: goto label_354b58;
        case 0x354b5cu: goto label_354b5c;
        case 0x354b60u: goto label_354b60;
        case 0x354b64u: goto label_354b64;
        case 0x354b68u: goto label_354b68;
        case 0x354b6cu: goto label_354b6c;
        case 0x354b70u: goto label_354b70;
        case 0x354b74u: goto label_354b74;
        case 0x354b78u: goto label_354b78;
        case 0x354b7cu: goto label_354b7c;
        case 0x354b80u: goto label_354b80;
        case 0x354b84u: goto label_354b84;
        case 0x354b88u: goto label_354b88;
        case 0x354b8cu: goto label_354b8c;
        case 0x354b90u: goto label_354b90;
        case 0x354b94u: goto label_354b94;
        case 0x354b98u: goto label_354b98;
        case 0x354b9cu: goto label_354b9c;
        case 0x354ba0u: goto label_354ba0;
        case 0x354ba4u: goto label_354ba4;
        case 0x354ba8u: goto label_354ba8;
        case 0x354bacu: goto label_354bac;
        case 0x354bb0u: goto label_354bb0;
        case 0x354bb4u: goto label_354bb4;
        case 0x354bb8u: goto label_354bb8;
        case 0x354bbcu: goto label_354bbc;
        case 0x354bc0u: goto label_354bc0;
        case 0x354bc4u: goto label_354bc4;
        case 0x354bc8u: goto label_354bc8;
        case 0x354bccu: goto label_354bcc;
        case 0x354bd0u: goto label_354bd0;
        case 0x354bd4u: goto label_354bd4;
        case 0x354bd8u: goto label_354bd8;
        case 0x354bdcu: goto label_354bdc;
        case 0x354be0u: goto label_354be0;
        case 0x354be4u: goto label_354be4;
        case 0x354be8u: goto label_354be8;
        case 0x354becu: goto label_354bec;
        case 0x354bf0u: goto label_354bf0;
        case 0x354bf4u: goto label_354bf4;
        case 0x354bf8u: goto label_354bf8;
        case 0x354bfcu: goto label_354bfc;
        case 0x354c00u: goto label_354c00;
        case 0x354c04u: goto label_354c04;
        case 0x354c08u: goto label_354c08;
        case 0x354c0cu: goto label_354c0c;
        case 0x354c10u: goto label_354c10;
        case 0x354c14u: goto label_354c14;
        case 0x354c18u: goto label_354c18;
        case 0x354c1cu: goto label_354c1c;
        case 0x354c20u: goto label_354c20;
        case 0x354c24u: goto label_354c24;
        case 0x354c28u: goto label_354c28;
        case 0x354c2cu: goto label_354c2c;
        case 0x354c30u: goto label_354c30;
        case 0x354c34u: goto label_354c34;
        case 0x354c38u: goto label_354c38;
        case 0x354c3cu: goto label_354c3c;
        case 0x354c40u: goto label_354c40;
        case 0x354c44u: goto label_354c44;
        case 0x354c48u: goto label_354c48;
        case 0x354c4cu: goto label_354c4c;
        case 0x354c50u: goto label_354c50;
        case 0x354c54u: goto label_354c54;
        case 0x354c58u: goto label_354c58;
        case 0x354c5cu: goto label_354c5c;
        case 0x354c60u: goto label_354c60;
        case 0x354c64u: goto label_354c64;
        case 0x354c68u: goto label_354c68;
        case 0x354c6cu: goto label_354c6c;
        case 0x354c70u: goto label_354c70;
        case 0x354c74u: goto label_354c74;
        case 0x354c78u: goto label_354c78;
        case 0x354c7cu: goto label_354c7c;
        case 0x354c80u: goto label_354c80;
        case 0x354c84u: goto label_354c84;
        case 0x354c88u: goto label_354c88;
        case 0x354c8cu: goto label_354c8c;
        case 0x354c90u: goto label_354c90;
        case 0x354c94u: goto label_354c94;
        case 0x354c98u: goto label_354c98;
        case 0x354c9cu: goto label_354c9c;
        case 0x354ca0u: goto label_354ca0;
        case 0x354ca4u: goto label_354ca4;
        case 0x354ca8u: goto label_354ca8;
        case 0x354cacu: goto label_354cac;
        case 0x354cb0u: goto label_354cb0;
        case 0x354cb4u: goto label_354cb4;
        case 0x354cb8u: goto label_354cb8;
        case 0x354cbcu: goto label_354cbc;
        case 0x354cc0u: goto label_354cc0;
        case 0x354cc4u: goto label_354cc4;
        case 0x354cc8u: goto label_354cc8;
        case 0x354cccu: goto label_354ccc;
        case 0x354cd0u: goto label_354cd0;
        case 0x354cd4u: goto label_354cd4;
        case 0x354cd8u: goto label_354cd8;
        case 0x354cdcu: goto label_354cdc;
        case 0x354ce0u: goto label_354ce0;
        case 0x354ce4u: goto label_354ce4;
        case 0x354ce8u: goto label_354ce8;
        case 0x354cecu: goto label_354cec;
        case 0x354cf0u: goto label_354cf0;
        case 0x354cf4u: goto label_354cf4;
        case 0x354cf8u: goto label_354cf8;
        case 0x354cfcu: goto label_354cfc;
        case 0x354d00u: goto label_354d00;
        case 0x354d04u: goto label_354d04;
        case 0x354d08u: goto label_354d08;
        case 0x354d0cu: goto label_354d0c;
        case 0x354d10u: goto label_354d10;
        case 0x354d14u: goto label_354d14;
        case 0x354d18u: goto label_354d18;
        case 0x354d1cu: goto label_354d1c;
        case 0x354d20u: goto label_354d20;
        case 0x354d24u: goto label_354d24;
        case 0x354d28u: goto label_354d28;
        case 0x354d2cu: goto label_354d2c;
        case 0x354d30u: goto label_354d30;
        case 0x354d34u: goto label_354d34;
        case 0x354d38u: goto label_354d38;
        case 0x354d3cu: goto label_354d3c;
        case 0x354d40u: goto label_354d40;
        case 0x354d44u: goto label_354d44;
        case 0x354d48u: goto label_354d48;
        case 0x354d4cu: goto label_354d4c;
        case 0x354d50u: goto label_354d50;
        case 0x354d54u: goto label_354d54;
        case 0x354d58u: goto label_354d58;
        case 0x354d5cu: goto label_354d5c;
        case 0x354d60u: goto label_354d60;
        case 0x354d64u: goto label_354d64;
        case 0x354d68u: goto label_354d68;
        case 0x354d6cu: goto label_354d6c;
        case 0x354d70u: goto label_354d70;
        case 0x354d74u: goto label_354d74;
        case 0x354d78u: goto label_354d78;
        case 0x354d7cu: goto label_354d7c;
        case 0x354d80u: goto label_354d80;
        case 0x354d84u: goto label_354d84;
        case 0x354d88u: goto label_354d88;
        case 0x354d8cu: goto label_354d8c;
        case 0x354d90u: goto label_354d90;
        case 0x354d94u: goto label_354d94;
        case 0x354d98u: goto label_354d98;
        case 0x354d9cu: goto label_354d9c;
        case 0x354da0u: goto label_354da0;
        case 0x354da4u: goto label_354da4;
        case 0x354da8u: goto label_354da8;
        case 0x354dacu: goto label_354dac;
        case 0x354db0u: goto label_354db0;
        case 0x354db4u: goto label_354db4;
        case 0x354db8u: goto label_354db8;
        case 0x354dbcu: goto label_354dbc;
        case 0x354dc0u: goto label_354dc0;
        case 0x354dc4u: goto label_354dc4;
        case 0x354dc8u: goto label_354dc8;
        case 0x354dccu: goto label_354dcc;
        case 0x354dd0u: goto label_354dd0;
        case 0x354dd4u: goto label_354dd4;
        case 0x354dd8u: goto label_354dd8;
        case 0x354ddcu: goto label_354ddc;
        case 0x354de0u: goto label_354de0;
        case 0x354de4u: goto label_354de4;
        case 0x354de8u: goto label_354de8;
        case 0x354decu: goto label_354dec;
        case 0x354df0u: goto label_354df0;
        case 0x354df4u: goto label_354df4;
        case 0x354df8u: goto label_354df8;
        case 0x354dfcu: goto label_354dfc;
        case 0x354e00u: goto label_354e00;
        case 0x354e04u: goto label_354e04;
        case 0x354e08u: goto label_354e08;
        case 0x354e0cu: goto label_354e0c;
        case 0x354e10u: goto label_354e10;
        case 0x354e14u: goto label_354e14;
        case 0x354e18u: goto label_354e18;
        case 0x354e1cu: goto label_354e1c;
        case 0x354e20u: goto label_354e20;
        case 0x354e24u: goto label_354e24;
        case 0x354e28u: goto label_354e28;
        case 0x354e2cu: goto label_354e2c;
        case 0x354e30u: goto label_354e30;
        case 0x354e34u: goto label_354e34;
        case 0x354e38u: goto label_354e38;
        case 0x354e3cu: goto label_354e3c;
        case 0x354e40u: goto label_354e40;
        case 0x354e44u: goto label_354e44;
        case 0x354e48u: goto label_354e48;
        case 0x354e4cu: goto label_354e4c;
        case 0x354e50u: goto label_354e50;
        case 0x354e54u: goto label_354e54;
        case 0x354e58u: goto label_354e58;
        case 0x354e5cu: goto label_354e5c;
        case 0x354e60u: goto label_354e60;
        case 0x354e64u: goto label_354e64;
        case 0x354e68u: goto label_354e68;
        case 0x354e6cu: goto label_354e6c;
        case 0x354e70u: goto label_354e70;
        case 0x354e74u: goto label_354e74;
        case 0x354e78u: goto label_354e78;
        case 0x354e7cu: goto label_354e7c;
        case 0x354e80u: goto label_354e80;
        case 0x354e84u: goto label_354e84;
        case 0x354e88u: goto label_354e88;
        case 0x354e8cu: goto label_354e8c;
        case 0x354e90u: goto label_354e90;
        case 0x354e94u: goto label_354e94;
        case 0x354e98u: goto label_354e98;
        case 0x354e9cu: goto label_354e9c;
        case 0x354ea0u: goto label_354ea0;
        case 0x354ea4u: goto label_354ea4;
        case 0x354ea8u: goto label_354ea8;
        case 0x354eacu: goto label_354eac;
        case 0x354eb0u: goto label_354eb0;
        case 0x354eb4u: goto label_354eb4;
        case 0x354eb8u: goto label_354eb8;
        case 0x354ebcu: goto label_354ebc;
        case 0x354ec0u: goto label_354ec0;
        case 0x354ec4u: goto label_354ec4;
        case 0x354ec8u: goto label_354ec8;
        case 0x354eccu: goto label_354ecc;
        case 0x354ed0u: goto label_354ed0;
        case 0x354ed4u: goto label_354ed4;
        case 0x354ed8u: goto label_354ed8;
        case 0x354edcu: goto label_354edc;
        case 0x354ee0u: goto label_354ee0;
        case 0x354ee4u: goto label_354ee4;
        case 0x354ee8u: goto label_354ee8;
        case 0x354eecu: goto label_354eec;
        case 0x354ef0u: goto label_354ef0;
        case 0x354ef4u: goto label_354ef4;
        case 0x354ef8u: goto label_354ef8;
        case 0x354efcu: goto label_354efc;
        case 0x354f00u: goto label_354f00;
        case 0x354f04u: goto label_354f04;
        case 0x354f08u: goto label_354f08;
        case 0x354f0cu: goto label_354f0c;
        case 0x354f10u: goto label_354f10;
        case 0x354f14u: goto label_354f14;
        case 0x354f18u: goto label_354f18;
        case 0x354f1cu: goto label_354f1c;
        case 0x354f20u: goto label_354f20;
        case 0x354f24u: goto label_354f24;
        case 0x354f28u: goto label_354f28;
        case 0x354f2cu: goto label_354f2c;
        case 0x354f30u: goto label_354f30;
        case 0x354f34u: goto label_354f34;
        case 0x354f38u: goto label_354f38;
        case 0x354f3cu: goto label_354f3c;
        case 0x354f40u: goto label_354f40;
        case 0x354f44u: goto label_354f44;
        case 0x354f48u: goto label_354f48;
        case 0x354f4cu: goto label_354f4c;
        case 0x354f50u: goto label_354f50;
        case 0x354f54u: goto label_354f54;
        case 0x354f58u: goto label_354f58;
        case 0x354f5cu: goto label_354f5c;
        case 0x354f60u: goto label_354f60;
        case 0x354f64u: goto label_354f64;
        case 0x354f68u: goto label_354f68;
        case 0x354f6cu: goto label_354f6c;
        case 0x354f70u: goto label_354f70;
        case 0x354f74u: goto label_354f74;
        case 0x354f78u: goto label_354f78;
        case 0x354f7cu: goto label_354f7c;
        case 0x354f80u: goto label_354f80;
        case 0x354f84u: goto label_354f84;
        case 0x354f88u: goto label_354f88;
        case 0x354f8cu: goto label_354f8c;
        case 0x354f90u: goto label_354f90;
        case 0x354f94u: goto label_354f94;
        case 0x354f98u: goto label_354f98;
        case 0x354f9cu: goto label_354f9c;
        case 0x354fa0u: goto label_354fa0;
        case 0x354fa4u: goto label_354fa4;
        case 0x354fa8u: goto label_354fa8;
        case 0x354facu: goto label_354fac;
        case 0x354fb0u: goto label_354fb0;
        case 0x354fb4u: goto label_354fb4;
        case 0x354fb8u: goto label_354fb8;
        case 0x354fbcu: goto label_354fbc;
        case 0x354fc0u: goto label_354fc0;
        case 0x354fc4u: goto label_354fc4;
        case 0x354fc8u: goto label_354fc8;
        case 0x354fccu: goto label_354fcc;
        case 0x354fd0u: goto label_354fd0;
        case 0x354fd4u: goto label_354fd4;
        case 0x354fd8u: goto label_354fd8;
        case 0x354fdcu: goto label_354fdc;
        case 0x354fe0u: goto label_354fe0;
        case 0x354fe4u: goto label_354fe4;
        case 0x354fe8u: goto label_354fe8;
        case 0x354fecu: goto label_354fec;
        case 0x354ff0u: goto label_354ff0;
        case 0x354ff4u: goto label_354ff4;
        case 0x354ff8u: goto label_354ff8;
        case 0x354ffcu: goto label_354ffc;
        case 0x355000u: goto label_355000;
        case 0x355004u: goto label_355004;
        case 0x355008u: goto label_355008;
        case 0x35500cu: goto label_35500c;
        case 0x355010u: goto label_355010;
        case 0x355014u: goto label_355014;
        case 0x355018u: goto label_355018;
        case 0x35501cu: goto label_35501c;
        case 0x355020u: goto label_355020;
        case 0x355024u: goto label_355024;
        case 0x355028u: goto label_355028;
        case 0x35502cu: goto label_35502c;
        case 0x355030u: goto label_355030;
        case 0x355034u: goto label_355034;
        case 0x355038u: goto label_355038;
        case 0x35503cu: goto label_35503c;
        case 0x355040u: goto label_355040;
        default: break;
    }

    ctx->pc = 0x353bd0u;

label_353bd0:
    // 0x353bd0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x353bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_353bd4:
    // 0x353bd4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x353bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_353bd8:
    // 0x353bd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x353bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_353bdc:
    // 0x353bdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x353bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_353be0:
    // 0x353be0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x353be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_353be4:
    // 0x353be4: 0xafa40118  sw          $a0, 0x118($sp)
    ctx->pc = 0x353be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 4));
label_353be8:
    // 0x353be8: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x353be8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
label_353bec:
    // 0x353bec: 0x24a3a5d8  addiu       $v1, $a1, -0x5A28
    ctx->pc = 0x353becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944216));
label_353bf0:
    // 0x353bf0: 0x27a4010c  addiu       $a0, $sp, 0x10C
    ctx->pc = 0x353bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_353bf4:
    // 0x353bf4: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x353bf4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_353bf8:
    // 0x353bf8: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x353bf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_353bfc:
    // 0x353bfc: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x353bfcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
label_353c00:
    // 0x353c00: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x353c00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_353c04:
    // 0x353c04: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x353c04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_353c08:
    // 0x353c08: 0x2483dbc0  addiu       $v1, $a0, -0x2440
    ctx->pc = 0x353c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958016));
label_353c0c:
    // 0x353c0c: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x353c0cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_353c10:
    // 0x353c10: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x353c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_353c14:
    // 0x353c14: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x353c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_353c18:
    // 0x353c18: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x353c18u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_353c1c:
    // 0x353c1c: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x353c1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_353c20:
    // 0x353c20: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x353c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_353c24:
    // 0x353c24: 0xbd3821  addu        $a3, $a1, $sp
    ctx->pc = 0x353c24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_353c28:
    // 0x353c28: 0x90e3010c  lbu         $v1, 0x10C($a3)
    ctx->pc = 0x353c28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 268)));
label_353c2c:
    // 0x353c2c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x353c2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_353c30:
    // 0x353c30: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x353c30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_353c34:
    // 0x353c34: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x353c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_353c38:
    // 0x353c38: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x353c38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_353c3c:
    // 0x353c3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x353c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_353c40:
    // 0x353c40: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x353c40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_353c44:
    // 0x353c44: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x353c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_353c48:
    // 0x353c48: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x353c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
label_353c4c:
    // 0x353c4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x353c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_353c50:
    // 0x353c50: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x353c50u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_353c54:
    // 0x353c54: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x353c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_353c58:
    // 0x353c58: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x353c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_353c5c:
    // 0x353c5c: 0x30650001  andi        $a1, $v1, 0x1
    ctx->pc = 0x353c5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_353c60:
    // 0x353c60: 0x10a004eb  beqz        $a1, . + 4 + (0x4EB << 2)
label_353c64:
    if (ctx->pc == 0x353C64u) {
        ctx->pc = 0x353C68u;
        goto label_353c68;
    }
    ctx->pc = 0x353C60u;
    {
        const bool branch_taken_0x353c60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x353c60) {
            ctx->pc = 0x355010u;
            goto label_355010;
        }
    }
    ctx->pc = 0x353C68u;
label_353c68:
    // 0x353c68: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x353c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_353c6c:
    // 0x353c6c: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x353c6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_353c70:
    // 0x353c70: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x353c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_353c74:
    // 0x353c74: 0x2c61000a  sltiu       $at, $v1, 0xA
    ctx->pc = 0x353c74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_353c78:
    // 0x353c78: 0x102004e5  beqz        $at, . + 4 + (0x4E5 << 2)
label_353c7c:
    if (ctx->pc == 0x353C7Cu) {
        ctx->pc = 0x353C80u;
        goto label_353c80;
    }
    ctx->pc = 0x353C78u;
    {
        const bool branch_taken_0x353c78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x353c78) {
            ctx->pc = 0x355010u;
            goto label_355010;
        }
    }
    ctx->pc = 0x353C80u;
label_353c80:
    // 0x353c80: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x353c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_353c84:
    // 0x353c84: 0x24852a30  addiu       $a1, $a0, 0x2A30
    ctx->pc = 0x353c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 10800));
label_353c88:
    // 0x353c88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x353c88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_353c8c:
    // 0x353c8c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x353c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_353c90:
    // 0x353c90: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x353c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_353c94:
    // 0x353c94: 0x600008  jr          $v1
label_353c98:
    if (ctx->pc == 0x353C98u) {
        ctx->pc = 0x353C9Cu;
        goto label_353c9c;
    }
    ctx->pc = 0x353C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353C94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x353C9Cu;
label_353c9c:
    // 0x353c9c: 0x0  nop
    ctx->pc = 0x353c9cu;
    // NOP
label_353ca0:
    // 0x353ca0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x353ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_353ca4:
    // 0x353ca4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x353ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_353ca8:
    // 0x353ca8: 0xa0450003  sb          $a1, 0x3($v0)
    ctx->pc = 0x353ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 5));
label_353cac:
    // 0x353cac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x353cacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_353cb0:
    // 0x353cb0: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x353cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_353cb4:
    // 0x353cb4: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x353cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
label_353cb8:
    // 0x353cb8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x353cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_353cbc:
    // 0x353cbc: 0xc0675a4  jal         func_19D690
label_353cc0:
    if (ctx->pc == 0x353CC0u) {
        ctx->pc = 0x353CC4u;
        goto label_353cc4;
    }
    ctx->pc = 0x353CBCu;
    SET_GPR_U32(ctx, 31, 0x353CC4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x353CBCu, 0x353CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353CC4u;
label_353cc4:
    // 0x353cc4: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x353cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_353cc8:
    // 0x353cc8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x353cc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_353ccc:
    // 0x353ccc: 0xc0675a4  jal         func_19D690
label_353cd0:
    if (ctx->pc == 0x353CD0u) {
        ctx->pc = 0x353CD4u;
        goto label_353cd4;
    }
    ctx->pc = 0x353CCCu;
    SET_GPR_U32(ctx, 31, 0x353CD4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x353CCCu, 0x353CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353CD4u;
label_353cd4:
    // 0x353cd4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x353cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_353cd8:
    // 0x353cd8: 0xc0675a4  jal         func_19D690
label_353cdc:
    if (ctx->pc == 0x353CDCu) {
        ctx->pc = 0x353CE0u;
        goto label_353ce0;
    }
    ctx->pc = 0x353CD8u;
    SET_GPR_U32(ctx, 31, 0x353CE0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x353CD8u, 0x353CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353CE0u;
label_353ce0:
    // 0x353ce0: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x353ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_353ce4:
    // 0x353ce4: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x353ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
label_353ce8:
    // 0x353ce8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x353ce8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_353cec:
    // 0x353cec: 0x0  nop
    ctx->pc = 0x353cecu;
    // NOP
label_353cf0:
    // 0x353cf0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x353cf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_353cf4:
    // 0x353cf4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x353cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_353cf8:
    // 0x353cf8: 0x3c0543c8  lui         $a1, 0x43C8
    ctx->pc = 0x353cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17352 << 16));
label_353cfc:
    // 0x353cfc: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x353cfcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_353d00:
    // 0x353d00: 0x322700ff  andi        $a3, $s1, 0xFF
    ctx->pc = 0x353d00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_353d04:
    // 0x353d04: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x353d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_353d08:
    // 0x353d08: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x353d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_353d0c:
    // 0x353d0c: 0x9083010c  lbu         $v1, 0x10C($a0)
    ctx->pc = 0x353d0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 268)));
label_353d10:
    // 0x353d10: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x353d10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_353d14:
    // 0x353d14: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x353d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_353d18:
    // 0x353d18: 0x3467d70a  ori         $a3, $v1, 0xD70A
    ctx->pc = 0x353d18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_353d1c:
    // 0x353d1c: 0x44876800  mtc1        $a3, $f13
    ctx->pc = 0x353d1cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_353d20:
    // 0x353d20: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x353d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_353d24:
    // 0x353d24: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x353d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_353d28:
    // 0x353d28: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x353d28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_353d2c:
    // 0x353d2c: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x353d2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_353d30:
    // 0x353d30: 0xc086a38  jal         func_21A8E0
label_353d34:
    if (ctx->pc == 0x353D34u) {
        ctx->pc = 0x353D38u;
        goto label_353d38;
    }
    ctx->pc = 0x353D30u;
    SET_GPR_U32(ctx, 31, 0x353D38u);
    ctx->pc = 0x21A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A8E0u, 0x353D30u, 0x353D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353D38u;
label_353d38:
    // 0x353d38: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x353d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_353d3c:
    // 0x353d3c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x353d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_353d40:
    // 0x353d40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x353d40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_353d44:
    // 0x353d44: 0x0  nop
    ctx->pc = 0x353d44u;
    // NOP
label_353d48:
    // 0x353d48: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x353d48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_353d4c:
    // 0x353d4c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x353d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_353d50:
    // 0x353d50: 0x3c074396  lui         $a3, 0x4396
    ctx->pc = 0x353d50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17302 << 16));
label_353d54:
    // 0x353d54: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x353d54u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_353d58:
    // 0x353d58: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x353d58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
label_353d5c:
    // 0x353d5c: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x353d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
label_353d60:
    // 0x353d60: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x353d60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_353d64:
    // 0x353d64: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x353d64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_353d68:
    // 0x353d68: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x353d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_353d6c:
    // 0x353d6c: 0x7d2021  addu        $a0, $v1, $sp
    ctx->pc = 0x353d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_353d70:
    // 0x353d70: 0x9085010c  lbu         $a1, 0x10C($a0)
    ctx->pc = 0x353d70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 268)));
label_353d74:
    // 0x353d74: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x353d74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_353d78:
    // 0x353d78: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x353d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_353d7c:
    // 0x353d7c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x353d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_353d80:
    // 0x353d80: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x353d80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_353d84:
    // 0x353d84: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x353d84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_353d88:
    // 0x353d88: 0xc086a38  jal         func_21A8E0
label_353d8c:
    if (ctx->pc == 0x353D8Cu) {
        ctx->pc = 0x353D90u;
        goto label_353d90;
    }
    ctx->pc = 0x353D88u;
    SET_GPR_U32(ctx, 31, 0x353D90u);
    ctx->pc = 0x21A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A8E0u, 0x353D88u, 0x353D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353D90u;
label_353d90:
    // 0x353d90: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x353d90u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_353d94:
    // 0x353d94: 0x0  nop
    ctx->pc = 0x353d94u;
    // NOP
label_353d98:
    // 0x353d98: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x353d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_353d9c:
    // 0x353d9c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x353d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_353da0:
    // 0x353da0: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x353da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_353da4:
    // 0x353da4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x353da4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_353da8:
    // 0x353da8: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x353da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
label_353dac:
    // 0x353dac: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x353dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_353db0:
    // 0x353db0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x353db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_353db4:
    // 0x353db4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x353db4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_353db8:
    // 0x353db8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x353db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_353dbc:
    // 0x353dbc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x353dbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_353dc0:
    // 0x353dc0: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x353dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_353dc4:
    // 0x353dc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x353dc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_353dc8:
    // 0x353dc8: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x353dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_353dcc:
    // 0x353dcc: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x353dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_353dd0:
    // 0x353dd0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x353dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_353dd4:
    // 0x353dd4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x353dd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_353dd8:
    // 0x353dd8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x353dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_353ddc:
    // 0x353ddc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x353ddcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_353de0:
    // 0x353de0: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x353de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_353de4:
    // 0x353de4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x353de4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_353de8:
    // 0x353de8: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x353de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
label_353dec:
    // 0x353dec: 0xc601012c  lwc1        $f1, 0x12C($s0)
    ctx->pc = 0x353decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_353df0:
    // 0x353df0: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x353df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_353df4:
    // 0x353df4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x353df4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_353df8:
    // 0x353df8: 0x0  nop
    ctx->pc = 0x353df8u;
    // NOP
label_353dfc:
    // 0x353dfc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x353dfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_353e00:
    // 0x353e00: 0x0  nop
    ctx->pc = 0x353e00u;
    // NOP
label_353e04:
    // 0x353e04: 0x4501006e  bc1t        . + 4 + (0x6E << 2)
label_353e08:
    if (ctx->pc == 0x353E08u) {
        ctx->pc = 0x353E0Cu;
        goto label_353e0c;
    }
    ctx->pc = 0x353E04u;
    {
        const bool branch_taken_0x353e04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x353e04) {
            ctx->pc = 0x353FC0u;
            goto label_353fc0;
        }
    }
    ctx->pc = 0x353E0Cu;
label_353e0c:
    // 0x353e0c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x353e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_353e10:
    // 0x353e10: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x353e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_353e14:
    // 0x353e14: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x353e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_353e18:
    // 0x353e18: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x353e18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_353e1c:
    // 0x353e1c: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x353e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
label_353e20:
    // 0x353e20: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x353e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_353e24:
    // 0x353e24: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x353e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_353e28:
    // 0x353e28: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x353e28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_353e2c:
    // 0x353e2c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x353e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_353e30:
    // 0x353e30: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x353e30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_353e34:
    // 0x353e34: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x353e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_353e38:
    // 0x353e38: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x353e38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_353e3c:
    // 0x353e3c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x353e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_353e40:
    // 0x353e40: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x353e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_353e44:
    // 0x353e44: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x353e44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_353e48:
    // 0x353e48: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x353e48u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_353e4c:
    // 0x353e4c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x353e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_353e50:
    // 0x353e50: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x353e50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_353e54:
    // 0x353e54: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x353e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_353e58:
    // 0x353e58: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x353e58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_353e5c:
    // 0x353e5c: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x353e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
label_353e60:
    // 0x353e60: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x353e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_353e64:
    // 0x353e64: 0x84630014  lh          $v1, 0x14($v1)
    ctx->pc = 0x353e64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
label_353e68:
    // 0x353e68: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x353e68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
label_353e6c:
    // 0x353e6c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x353e6cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_353e70:
    // 0x353e70: 0x30a4000f  andi        $a0, $a1, 0xF
    ctx->pc = 0x353e70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_353e74:
    // 0x353e74: 0x14800052  bnez        $a0, . + 4 + (0x52 << 2)
label_353e78:
    if (ctx->pc == 0x353E78u) {
        ctx->pc = 0x353E7Cu;
        goto label_353e7c;
    }
    ctx->pc = 0x353E74u;
    {
        const bool branch_taken_0x353e74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x353e74) {
            ctx->pc = 0x353FC0u;
            goto label_353fc0;
        }
    }
    ctx->pc = 0x353E7Cu;
label_353e7c:
    // 0x353e7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x353e7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_353e80:
    // 0x353e80: 0x0  nop
    ctx->pc = 0x353e80u;
    // NOP
label_353e84:
    // 0x353e84: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x353e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_353e88:
    // 0x353e88: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x353e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
label_353e8c:
    // 0x353e8c: 0x34468000  ori         $a2, $v0, 0x8000
    ctx->pc = 0x353e8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_353e90:
    // 0x353e90: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x353e90u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_353e94:
    // 0x353e94: 0x0  nop
    ctx->pc = 0x353e94u;
    // NOP
label_353e98:
    // 0x353e98: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x353e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_353e9c:
    // 0x353e9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x353e9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_353ea0:
    // 0x353ea0: 0x0  nop
    ctx->pc = 0x353ea0u;
    // NOP
label_353ea4:
    // 0x353ea4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x353ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_353ea8:
    // 0x353ea8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x353ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_353eac:
    // 0x353eac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x353eacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_353eb0:
    // 0x353eb0: 0x0  nop
    ctx->pc = 0x353eb0u;
    // NOP
label_353eb4:
    // 0x353eb4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x353eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_353eb8:
    // 0x353eb8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x353eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_353ebc:
    // 0x353ebc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x353ebcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_353ec0:
    // 0x353ec0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x353ec0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_353ec4:
    // 0x353ec4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x353ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_353ec8:
    // 0x353ec8: 0xc0675ec  jal         func_19D7B0
label_353ecc:
    if (ctx->pc == 0x353ECCu) {
        ctx->pc = 0x353ED0u;
        goto label_353ed0;
    }
    ctx->pc = 0x353EC8u;
    SET_GPR_U32(ctx, 31, 0x353ED0u);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x353EC8u, 0x353ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353ED0u;
label_353ed0:
    // 0x353ed0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x353ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_353ed4:
    // 0x353ed4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x353ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_353ed8:
    // 0x353ed8: 0xc040c24  jal         func_103090
label_353edc:
    if (ctx->pc == 0x353EDCu) {
        ctx->pc = 0x353EE0u;
        goto label_353ee0;
    }
    ctx->pc = 0x353ED8u;
    SET_GPR_U32(ctx, 31, 0x353EE0u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x353EE0u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x353EE0u) { return; }
    ctx->pc = 0x353EE0u;
label_353ee0:
    // 0x353ee0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x353ee0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_353ee4:
    // 0x353ee4: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x353ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
label_353ee8:
    // 0x353ee8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x353ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_353eec:
    // 0x353eec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x353eecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_353ef0:
    // 0x353ef0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x353ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_353ef4:
    // 0x353ef4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x353ef4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_353ef8:
    // 0x353ef8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x353ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_353efc:
    // 0x353efc: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x353efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
label_353f00:
    // 0x353f00: 0x34648000  ori         $a0, $v1, 0x8000
    ctx->pc = 0x353f00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_353f04:
    // 0x353f04: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x353f04u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_353f08:
    // 0x353f08: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x353f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_353f0c:
    // 0x353f0c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x353f0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_353f10:
    // 0x353f10: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x353f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_353f14:
    // 0x353f14: 0x3c05453b  lui         $a1, 0x453B
    ctx->pc = 0x353f14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17723 << 16));
label_353f18:
    // 0x353f18: 0x34a38000  ori         $v1, $a1, 0x8000
    ctx->pc = 0x353f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_353f1c:
    // 0x353f1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x353f1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_353f20:
    // 0x353f20: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x353f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_353f24:
    // 0x353f24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x353f24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_353f28:
    // 0x353f28: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x353f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_353f2c:
    // 0x353f2c: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x353f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_353f30:
    // 0x353f30: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x353f30u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_353f34:
    // 0x353f34: 0x0  nop
    ctx->pc = 0x353f34u;
    // NOP
label_353f38:
    // 0x353f38: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x353f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_353f3c:
    // 0x353f3c: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x353f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_353f40:
    // 0x353f40: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x353f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_353f44:
    // 0x353f44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x353f44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_353f48:
    // 0x353f48: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x353f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_353f4c:
    // 0x353f4c: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x353f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_353f50:
    // 0x353f50: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x353f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_353f54:
    // 0x353f54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x353f54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_353f58:
    // 0x353f58: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x353f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_353f5c:
    // 0x353f5c: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x353f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_353f60:
    // 0x353f60: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x353f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_353f64:
    // 0x353f64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x353f64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_353f68:
    // 0x353f68: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x353f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_353f6c:
    // 0x353f6c: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x353f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
label_353f70:
    // 0x353f70: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x353f70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_353f74:
    // 0x353f74: 0x3c054300  lui         $a1, 0x4300
    ctx->pc = 0x353f74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17152 << 16));
label_353f78:
    // 0x353f78: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x353f78u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_353f7c:
    // 0x353f7c: 0x3c044200  lui         $a0, 0x4200
    ctx->pc = 0x353f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16896 << 16));
label_353f80:
    // 0x353f80: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x353f80u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_353f84:
    // 0x353f84: 0x3c043f4c  lui         $a0, 0x3F4C
    ctx->pc = 0x353f84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16204 << 16));
label_353f88:
    // 0x353f88: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x353f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_353f8c:
    // 0x353f8c: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x353f8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_353f90:
    // 0x353f90: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x353f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
label_353f94:
    // 0x353f94: 0x44838000  mtc1        $v1, $f16
    ctx->pc = 0x353f94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_353f98:
    // 0x353f98: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x353f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_353f9c:
    // 0x353f9c: 0x44828800  mtc1        $v0, $f17
    ctx->pc = 0x353f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
label_353fa0:
    // 0x353fa0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x353fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_353fa4:
    // 0x353fa4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x353fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_353fa8:
    // 0x353fa8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x353fa8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_353fac:
    // 0x353fac: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x353facu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_353fb0:
    // 0x353fb0: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x353fb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_353fb4:
    // 0x353fb4: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x353fb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_353fb8:
    // 0x353fb8: 0xc087200  jal         func_21C800
label_353fbc:
    if (ctx->pc == 0x353FBCu) {
        ctx->pc = 0x353FC0u;
        goto label_353fc0;
    }
    ctx->pc = 0x353FB8u;
    SET_GPR_U32(ctx, 31, 0x353FC0u);
    ctx->pc = 0x21C800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C800u, 0x353FB8u, 0x353FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353FC0u;
label_353fc0:
    // 0x353fc0: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x353fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_353fc4:
    // 0x353fc4: 0x84a40014  lh          $a0, 0x14($a1)
    ctx->pc = 0x353fc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
label_353fc8:
    // 0x353fc8: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x353fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_353fcc:
    // 0x353fcc: 0xa4a30014  sh          $v1, 0x14($a1)
    ctx->pc = 0x353fccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 3));
label_353fd0:
    // 0x353fd0: 0x1480040f  bnez        $a0, . + 4 + (0x40F << 2)
label_353fd4:
    if (ctx->pc == 0x353FD4u) {
        ctx->pc = 0x353FD8u;
        goto label_353fd8;
    }
    ctx->pc = 0x353FD0u;
    {
        const bool branch_taken_0x353fd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x353fd0) {
            ctx->pc = 0x355010u;
            goto label_355010;
        }
    }
    ctx->pc = 0x353FD8u;
label_353fd8:
    // 0x353fd8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x353fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_353fdc:
    // 0x353fdc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x353fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_353fe0:
    // 0x353fe0: 0xa0650003  sb          $a1, 0x3($v1)
    ctx->pc = 0x353fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 5));
label_353fe4:
    // 0x353fe4: 0x1000040a  b           . + 4 + (0x40A << 2)
label_353fe8:
    if (ctx->pc == 0x353FE8u) {
        ctx->pc = 0x353FECu;
        goto label_353fec;
    }
    ctx->pc = 0x353FE4u;
    {
        const bool branch_taken_0x353fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353fe4) {
            ctx->pc = 0x355010u;
            goto label_355010;
        }
    }
    ctx->pc = 0x353FECu;
label_353fec:
    // 0x353fec: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x353fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_353ff0:
    // 0x353ff0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x353ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_353ff4:
    // 0x353ff4: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x353ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_353ff8:
    // 0x353ff8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x353ff8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_353ffc:
    // 0x353ffc: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x353ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
label_354000:
    // 0x354000: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x354000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_354004:
    // 0x354004: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x354004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_354008:
    // 0x354008: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x354008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35400c:
    // 0x35400c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x35400cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_354010:
    // 0x354010: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x354010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_354014:
    // 0x354014: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x354014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_354018:
    // 0x354018: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x354018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35401c:
    // 0x35401c: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x35401cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_354020:
    // 0x354020: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x354020u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_354024:
    // 0x354024: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x354024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
label_354028:
    // 0x354028: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x354028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_35402c:
    // 0x35402c: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x35402cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_354030:
    // 0x354030: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x354030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_354034:
    // 0x354034: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x354034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_354038:
    // 0x354038: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x354038u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_35403c:
    // 0x35403c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x35403cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_354040:
    // 0x354040: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x354040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_354044:
    // 0x354044: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x354044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_354048:
    // 0x354048: 0x3c033cf5  lui         $v1, 0x3CF5
    ctx->pc = 0x354048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15605 << 16));
label_35404c:
    // 0x35404c: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x35404cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
label_354050:
    // 0x354050: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x354050u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354054:
    // 0x354054: 0x0  nop
    ctx->pc = 0x354054u;
    // NOP
label_354058:
    // 0x354058: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x354058u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_35405c:
    // 0x35405c: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x35405cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_354060:
    // 0x354060: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x354060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_354064:
    // 0x354064: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x354064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_354068:
    // 0x354068: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x354068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35406c:
    // 0x35406c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x35406cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_354070:
    // 0x354070: 0x0  nop
    ctx->pc = 0x354070u;
    // NOP
label_354074:
    // 0x354074: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_354078:
    if (ctx->pc == 0x354078u) {
        ctx->pc = 0x35407Cu;
        goto label_35407c;
    }
    ctx->pc = 0x354074u;
    {
        const bool branch_taken_0x354074 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x354074) {
            ctx->pc = 0x354098u;
            goto label_354098;
        }
    }
    ctx->pc = 0x35407Cu;
label_35407c:
    // 0x35407c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x35407cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_354080:
    // 0x354080: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x354080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_354084:
    // 0x354084: 0xa4a30014  sh          $v1, 0x14($a1)
    ctx->pc = 0x354084u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 3));
label_354088:
    // 0x354088: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x354088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_35408c:
    // 0x35408c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x35408cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_354090:
    // 0x354090: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x354090u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_354094:
    // 0x354094: 0x0  nop
    ctx->pc = 0x354094u;
    // NOP
label_354098:
    // 0x354098: 0xc601012c  lwc1        $f1, 0x12C($s0)
    ctx->pc = 0x354098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35409c:
    // 0x35409c: 0x3c0640a0  lui         $a2, 0x40A0
    ctx->pc = 0x35409cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16544 << 16));
label_3540a0:
    // 0x3540a0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3540a0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3540a4:
    // 0x3540a4: 0x0  nop
    ctx->pc = 0x3540a4u;
    // NOP
label_3540a8:
    // 0x3540a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3540a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3540ac:
    // 0x3540ac: 0x0  nop
    ctx->pc = 0x3540acu;
    // NOP
label_3540b0:
    // 0x3540b0: 0x450103d7  bc1t        . + 4 + (0x3D7 << 2)
label_3540b4:
    if (ctx->pc == 0x3540B4u) {
        ctx->pc = 0x3540B8u;
        goto label_3540b8;
    }
    ctx->pc = 0x3540B0u;
    {
        const bool branch_taken_0x3540b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3540b0) {
            ctx->pc = 0x355010u;
            goto label_355010;
        }
    }
    ctx->pc = 0x3540B8u;
label_3540b8:
    // 0x3540b8: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x3540b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_3540bc:
    // 0x3540bc: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x3540bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3540c0:
    // 0x3540c0: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x3540c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_3540c4:
    // 0x3540c4: 0x9042010c  lbu         $v0, 0x10C($v0)
    ctx->pc = 0x3540c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 268)));
label_3540c8:
    // 0x3540c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3540c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3540cc:
    // 0x3540cc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x3540ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_3540d0:
    // 0x3540d0: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x3540d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3540d4:
    // 0x3540d4: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x3540d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_3540d8:
    // 0x3540d8: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x3540d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3540dc:
    // 0x3540dc: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x3540dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
label_3540e0:
    // 0x3540e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3540e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3540e4:
    // 0x3540e4: 0x0  nop
    ctx->pc = 0x3540e4u;
    // NOP
label_3540e8:
    // 0x3540e8: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x3540e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3540ec:
    // 0x3540ec: 0x3c074248  lui         $a3, 0x4248
    ctx->pc = 0x3540ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16968 << 16));
label_3540f0:
    // 0x3540f0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3540f0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3540f4:
    // 0x3540f4: 0x0  nop
    ctx->pc = 0x3540f4u;
    // NOP
label_3540f8:
    // 0x3540f8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x3540f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3540fc:
    // 0x3540fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3540fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354100:
    // 0x354100: 0x0  nop
    ctx->pc = 0x354100u;
    // NOP
label_354104:
    // 0x354104: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x354104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_354108:
    // 0x354108: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x354108u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
label_35410c:
    // 0x35410c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x35410cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354110:
    // 0x354110: 0x0  nop
    ctx->pc = 0x354110u;
    // NOP
label_354114:
    // 0x354114: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x354114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_354118:
    // 0x354118: 0x3c0942c8  lui         $t1, 0x42C8
    ctx->pc = 0x354118u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17096 << 16));
label_35411c:
    // 0x35411c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x35411cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354120:
    // 0x354120: 0x0  nop
    ctx->pc = 0x354120u;
    // NOP
label_354124:
    // 0x354124: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x354124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_354128:
    // 0x354128: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x354128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_35412c:
    // 0x35412c: 0xa7a300a4  sh          $v1, 0xA4($sp)
    ctx->pc = 0x35412cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 164), (uint16_t)GPR_U32(ctx, 3));
label_354130:
    // 0x354130: 0xa3a000a6  sb          $zero, 0xA6($sp)
    ctx->pc = 0x354130u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 166), (uint8_t)GPR_U32(ctx, 0));
label_354134:
    // 0x354134: 0xa3a000a7  sb          $zero, 0xA7($sp)
    ctx->pc = 0x354134u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 167), (uint8_t)GPR_U32(ctx, 0));
label_354138:
    // 0x354138: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x354138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_35413c:
    // 0x35413c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x35413cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_354140:
    // 0x354140: 0xc06ce90  jal         func_1B3A40
label_354144:
    if (ctx->pc == 0x354144u) {
        ctx->pc = 0x354148u;
        goto label_354148;
    }
    ctx->pc = 0x354140u;
    SET_GPR_U32(ctx, 31, 0x354148u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x354140u, 0x354148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354148u;
label_354148:
    // 0x354148: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x354148u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_35414c:
    // 0x35414c: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
label_354150:
    if (ctx->pc == 0x354150u) {
        ctx->pc = 0x354154u;
        goto label_354154;
    }
    ctx->pc = 0x35414Cu;
    {
        const bool branch_taken_0x35414c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35414c) {
            ctx->pc = 0x354268u;
            goto label_354268;
        }
    }
    ctx->pc = 0x354154u;
label_354154:
    // 0x354154: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x354154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354158:
    // 0x354158: 0x0  nop
    ctx->pc = 0x354158u;
    // NOP
label_35415c:
    // 0x35415c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x35415cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_354160:
    // 0x354160: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x354160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354164:
    // 0x354164: 0x0  nop
    ctx->pc = 0x354164u;
    // NOP
label_354168:
    // 0x354168: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x354168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_35416c:
    // 0x35416c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35416cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354170:
    // 0x354170: 0x0  nop
    ctx->pc = 0x354170u;
    // NOP
label_354174:
    // 0x354174: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x354174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_354178:
    // 0x354178: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x354178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_35417c:
    // 0x35417c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35417cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354180:
    // 0x354180: 0x0  nop
    ctx->pc = 0x354180u;
    // NOP
label_354184:
    // 0x354184: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x354184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_354188:
    // 0x354188: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x354188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
label_35418c:
    // 0x35418c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x35418cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_354190:
    // 0x354190: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x354190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_354194:
    // 0x354194: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x354194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_354198:
    // 0x354198: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x354198u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_35419c:
    // 0x35419c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x35419cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_3541a0:
    // 0x3541a0: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3541a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_3541a4:
    // 0x3541a4: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x3541a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
label_3541a8:
    // 0x3541a8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x3541a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3541ac:
    // 0x3541ac: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3541acu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3541b0:
    // 0x3541b0: 0x8e470130  lw          $a3, 0x130($s2)
    ctx->pc = 0x3541b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
label_3541b4:
    // 0x3541b4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3541b4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3541b8:
    // 0x3541b8: 0xc06371c  jal         func_18DC70
label_3541bc:
    if (ctx->pc == 0x3541BCu) {
        ctx->pc = 0x3541C0u;
        goto label_3541c0;
    }
    ctx->pc = 0x3541B8u;
    SET_GPR_U32(ctx, 31, 0x3541C0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3541B8u, 0x3541C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3541C0u;
label_3541c0:
    // 0x3541c0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3541c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3541c4:
    // 0x3541c4: 0xc067694  jal         func_19DA50
label_3541c8:
    if (ctx->pc == 0x3541C8u) {
        ctx->pc = 0x3541CCu;
        goto label_3541cc;
    }
    ctx->pc = 0x3541C4u;
    SET_GPR_U32(ctx, 31, 0x3541CCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3541C4u, 0x3541CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3541CCu;
label_3541cc:
    // 0x3541cc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_3541d0:
    if (ctx->pc == 0x3541D0u) {
        ctx->pc = 0x3541D4u;
        goto label_3541d4;
    }
    ctx->pc = 0x3541CCu;
    {
        const bool branch_taken_0x3541cc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3541cc) {
            ctx->pc = 0x3541E8u;
            goto label_3541e8;
        }
    }
    ctx->pc = 0x3541D4u;
label_3541d4:
    // 0x3541d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3541d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3541d8:
    // 0x3541d8: 0x0  nop
    ctx->pc = 0x3541d8u;
    // NOP
label_3541dc:
    // 0x3541dc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3541dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3541e0:
    // 0x3541e0: 0x10000008  b           . + 4 + (0x8 << 2)
label_3541e4:
    if (ctx->pc == 0x3541E4u) {
        ctx->pc = 0x3541E8u;
        goto label_3541e8;
    }
    ctx->pc = 0x3541E0u;
    {
        const bool branch_taken_0x3541e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3541e0) {
            ctx->pc = 0x354204u;
            goto label_354204;
        }
    }
    ctx->pc = 0x3541E8u;
label_3541e8:
    // 0x3541e8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3541e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3541ec:
    // 0x3541ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3541ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3541f0:
    // 0x3541f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3541f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3541f4:
    // 0x3541f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3541f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3541f8:
    // 0x3541f8: 0x0  nop
    ctx->pc = 0x3541f8u;
    // NOP
label_3541fc:
    // 0x3541fc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3541fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_354200:
    // 0x354200: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x354200u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_354204:
    // 0x354204: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x354204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_354208:
    // 0x354208: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x354208u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_35420c:
    // 0x35420c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x35420cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_354210:
    // 0x354210: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x354210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
label_354214:
    // 0x354214: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x354214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_354218:
    // 0x354218: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x354218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_35421c:
    // 0x35421c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x35421cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_354220:
    // 0x354220: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x354220u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_354224:
    // 0x354224: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x354224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_354228:
    // 0x354228: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x354228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_35422c:
    // 0x35422c: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x35422cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
label_354230:
    // 0x354230: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x354230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_354234:
    // 0x354234: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x354234u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_354238:
    // 0x354238: 0x8e470130  lw          $a3, 0x130($s2)
    ctx->pc = 0x354238u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
label_35423c:
    // 0x35423c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x35423cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_354240:
    // 0x354240: 0xc06371c  jal         func_18DC70
label_354244:
    if (ctx->pc == 0x354244u) {
        ctx->pc = 0x354248u;
        goto label_354248;
    }
    ctx->pc = 0x354240u;
    SET_GPR_U32(ctx, 31, 0x354248u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x354240u, 0x354248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354248u;
label_354248:
    // 0x354248: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x354248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_35424c:
    // 0x35424c: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x35424cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_354250:
    // 0x354250: 0xc0684d8  jal         func_1A1360
label_354254:
    if (ctx->pc == 0x354254u) {
        ctx->pc = 0x354258u;
        goto label_354258;
    }
    ctx->pc = 0x354250u;
    SET_GPR_U32(ctx, 31, 0x354258u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x354250u, 0x354258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354258u;
label_354258:
    // 0x354258: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x354258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
label_35425c:
    // 0x35425c: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x35425cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
label_354260:
    // 0x354260: 0xc0684d8  jal         func_1A1360
label_354264:
    if (ctx->pc == 0x354264u) {
        ctx->pc = 0x354268u;
        goto label_354268;
    }
    ctx->pc = 0x354260u;
    SET_GPR_U32(ctx, 31, 0x354268u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x354260u, 0x354268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354268u;
label_354268:
    // 0x354268: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x354268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_35426c:
    // 0x35426c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35426cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_354270:
    // 0x354270: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x354270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_354274:
    // 0x354274: 0x9043010c  lbu         $v1, 0x10C($v0)
    ctx->pc = 0x354274u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 268)));
label_354278:
    // 0x354278: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x354278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_35427c:
    // 0x35427c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x35427cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_354280:
    // 0x354280: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x354280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_354284:
    // 0x354284: 0x8ca60130  lw          $a2, 0x130($a1)
    ctx->pc = 0x354284u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_354288:
    // 0x354288: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x354288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_35428c:
    // 0x35428c: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x35428cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_354290:
    // 0x354290: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x354290u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354294:
    // 0x354294: 0x0  nop
    ctx->pc = 0x354294u;
    // NOP
label_354298:
    // 0x354298: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x354298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_35429c:
    // 0x35429c: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x35429cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
label_3542a0:
    // 0x3542a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3542a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3542a4:
    // 0x3542a4: 0x0  nop
    ctx->pc = 0x3542a4u;
    // NOP
label_3542a8:
    // 0x3542a8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x3542a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3542ac:
    // 0x3542ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3542acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3542b0:
    // 0x3542b0: 0x0  nop
    ctx->pc = 0x3542b0u;
    // NOP
label_3542b4:
    // 0x3542b4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x3542b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3542b8:
    // 0x3542b8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3542b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3542bc:
    // 0x3542bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3542bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3542c0:
    // 0x3542c0: 0x0  nop
    ctx->pc = 0x3542c0u;
    // NOP
label_3542c4:
    // 0x3542c4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x3542c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_3542c8:
    // 0x3542c8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x3542c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_3542cc:
    // 0x3542cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3542ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3542d0:
    // 0x3542d0: 0x0  nop
    ctx->pc = 0x3542d0u;
    // NOP
label_3542d4:
    // 0x3542d4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x3542d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3542d8:
    // 0x3542d8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3542d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3542dc:
    // 0x3542dc: 0xa7a300a4  sh          $v1, 0xA4($sp)
    ctx->pc = 0x3542dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 164), (uint16_t)GPR_U32(ctx, 3));
label_3542e0:
    // 0x3542e0: 0xa3a000a6  sb          $zero, 0xA6($sp)
    ctx->pc = 0x3542e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 166), (uint8_t)GPR_U32(ctx, 0));
label_3542e4:
    // 0x3542e4: 0xa3a000a7  sb          $zero, 0xA7($sp)
    ctx->pc = 0x3542e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 167), (uint8_t)GPR_U32(ctx, 0));
label_3542e8:
    // 0x3542e8: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x3542e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3542ec:
    // 0x3542ec: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3542ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3542f0:
    // 0x3542f0: 0xc06ce90  jal         func_1B3A40
label_3542f4:
    if (ctx->pc == 0x3542F4u) {
        ctx->pc = 0x3542F8u;
        goto label_3542f8;
    }
    ctx->pc = 0x3542F0u;
    SET_GPR_U32(ctx, 31, 0x3542F8u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x3542F0u, 0x3542F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3542F8u;
label_3542f8:
    // 0x3542f8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3542f8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3542fc:
    // 0x3542fc: 0x10600344  beqz        $v1, . + 4 + (0x344 << 2)
label_354300:
    if (ctx->pc == 0x354300u) {
        ctx->pc = 0x354304u;
        goto label_354304;
    }
    ctx->pc = 0x3542FCu;
    {
        const bool branch_taken_0x3542fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3542fc) {
            ctx->pc = 0x355010u;
            goto label_355010;
        }
    }
    ctx->pc = 0x354304u;
label_354304:
    // 0x354304: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x354304u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354308:
    // 0x354308: 0x0  nop
    ctx->pc = 0x354308u;
    // NOP
label_35430c:
    // 0x35430c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x35430cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_354310:
    // 0x354310: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x354310u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354314:
    // 0x354314: 0x0  nop
    ctx->pc = 0x354314u;
    // NOP
label_354318:
    // 0x354318: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x354318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_35431c:
    // 0x35431c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35431cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354320:
    // 0x354320: 0x0  nop
    ctx->pc = 0x354320u;
    // NOP
label_354324:
    // 0x354324: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x354324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_354328:
    // 0x354328: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x354328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_35432c:
    // 0x35432c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35432cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354330:
    // 0x354330: 0x0  nop
    ctx->pc = 0x354330u;
    // NOP
label_354334:
    // 0x354334: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x354334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_354338:
    // 0x354338: 0x12283c  dsll32      $a1, $s2, 0
    ctx->pc = 0x354338u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 0));
label_35433c:
    // 0x35433c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x35433cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_354340:
    // 0x354340: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x354340u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_354344:
    // 0x354344: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x354344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
label_354348:
    // 0x354348: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x354348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_35434c:
    // 0x35434c: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x35434cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_354350:
    // 0x354350: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x354350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_354354:
    // 0x354354: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x354354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
label_354358:
    // 0x354358: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x354358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_35435c:
    // 0x35435c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35435cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_354360:
    // 0x354360: 0x8e470130  lw          $a3, 0x130($s2)
    ctx->pc = 0x354360u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
label_354364:
    // 0x354364: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x354364u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_354368:
    // 0x354368: 0xc06371c  jal         func_18DC70
label_35436c:
    if (ctx->pc == 0x35436Cu) {
        ctx->pc = 0x354370u;
        goto label_354370;
    }
    ctx->pc = 0x354368u;
    SET_GPR_U32(ctx, 31, 0x354370u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x354368u, 0x354370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354370u;
label_354370:
    // 0x354370: 0xc067694  jal         func_19DA50
label_354374:
    if (ctx->pc == 0x354374u) {
        ctx->pc = 0x354378u;
        goto label_354378;
    }
    ctx->pc = 0x354370u;
    SET_GPR_U32(ctx, 31, 0x354378u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x354370u, 0x354378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354378u;
label_354378:
    // 0x354378: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_35437c:
    if (ctx->pc == 0x35437Cu) {
        ctx->pc = 0x354380u;
        goto label_354380;
    }
    ctx->pc = 0x354378u;
    {
        const bool branch_taken_0x354378 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x354378) {
            ctx->pc = 0x354394u;
            goto label_354394;
        }
    }
    ctx->pc = 0x354380u;
label_354380:
    // 0x354380: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x354380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354384:
    // 0x354384: 0x0  nop
    ctx->pc = 0x354384u;
    // NOP
label_354388:
    // 0x354388: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x354388u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_35438c:
    // 0x35438c: 0x10000008  b           . + 4 + (0x8 << 2)
label_354390:
    if (ctx->pc == 0x354390u) {
        ctx->pc = 0x354394u;
        goto label_354394;
    }
    ctx->pc = 0x35438Cu;
    {
        const bool branch_taken_0x35438c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35438c) {
            ctx->pc = 0x3543B0u;
            goto label_3543b0;
        }
    }
    ctx->pc = 0x354394u;
label_354394:
    // 0x354394: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x354394u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_354398:
    // 0x354398: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x354398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_35439c:
    // 0x35439c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x35439cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_3543a0:
    // 0x3543a0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3543a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3543a4:
    // 0x3543a4: 0x0  nop
    ctx->pc = 0x3543a4u;
    // NOP
label_3543a8:
    // 0x3543a8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3543a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3543ac:
    // 0x3543ac: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3543acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3543b0:
    // 0x3543b0: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x3543b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3543b4:
    // 0x3543b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3543b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3543b8:
    // 0x3543b8: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x3543b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_3543bc:
    // 0x3543bc: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x3543bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
label_3543c0:
    // 0x3543c0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3543c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_3543c4:
    // 0x3543c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3543c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3543c8:
    // 0x3543c8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3543c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_3543cc:
    // 0x3543cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3543ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3543d0:
    // 0x3543d0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3543d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3543d4:
    // 0x3543d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3543d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3543d8:
    // 0x3543d8: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x3543d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
label_3543dc:
    // 0x3543dc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x3543dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3543e0:
    // 0x3543e0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3543e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3543e4:
    // 0x3543e4: 0x8e470130  lw          $a3, 0x130($s2)
    ctx->pc = 0x3543e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
label_3543e8:
    // 0x3543e8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3543e8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3543ec:
    // 0x3543ec: 0xc06371c  jal         func_18DC70
label_3543f0:
    if (ctx->pc == 0x3543F0u) {
        ctx->pc = 0x3543F4u;
        goto label_3543f4;
    }
    ctx->pc = 0x3543ECu;
    SET_GPR_U32(ctx, 31, 0x3543F4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3543ECu, 0x3543F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3543F4u;
label_3543f4:
    // 0x3543f4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x3543f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_3543f8:
    // 0x3543f8: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x3543f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_3543fc:
    // 0x3543fc: 0xc0684d8  jal         func_1A1360
label_354400:
    if (ctx->pc == 0x354400u) {
        ctx->pc = 0x354404u;
        goto label_354404;
    }
    ctx->pc = 0x3543FCu;
    SET_GPR_U32(ctx, 31, 0x354404u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x3543FCu, 0x354404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354404u;
label_354404:
    // 0x354404: 0x3c0202fa  lui         $v0, 0x2FA
    ctx->pc = 0x354404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)762 << 16));
label_354408:
    // 0x354408: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x354408u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_35440c:
    // 0x35440c: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x35440cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
label_354410:
    // 0x354410: 0xc0684d8  jal         func_1A1360
label_354414:
    if (ctx->pc == 0x354414u) {
        ctx->pc = 0x354418u;
        goto label_354418;
    }
    ctx->pc = 0x354410u;
    SET_GPR_U32(ctx, 31, 0x354418u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x354410u, 0x354418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354418u;
label_354418:
    // 0x354418: 0x100002fd  b           . + 4 + (0x2FD << 2)
label_35441c:
    if (ctx->pc == 0x35441Cu) {
        ctx->pc = 0x354420u;
        goto label_354420;
    }
    ctx->pc = 0x354418u;
    {
        const bool branch_taken_0x354418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354418) {
            ctx->pc = 0x355010u;
            goto label_355010;
        }
    }
    ctx->pc = 0x354420u;
label_354420:
    // 0x354420: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x354420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_354424:
    // 0x354424: 0x84a30014  lh          $v1, 0x14($a1)
    ctx->pc = 0x354424u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
label_354428:
    // 0x354428: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x354428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_35442c:
    // 0x35442c: 0xa4a40014  sh          $a0, 0x14($a1)
    ctx->pc = 0x35442cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 4));
label_354430:
    // 0x354430: 0x146002f7  bnez        $v1, . + 4 + (0x2F7 << 2)
label_354434:
    if (ctx->pc == 0x354434u) {
        ctx->pc = 0x354438u;
        goto label_354438;
    }
    ctx->pc = 0x354430u;
    {
        const bool branch_taken_0x354430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x354430) {
            ctx->pc = 0x355010u;
            goto label_355010;
        }
    }
    ctx->pc = 0x354438u;
label_354438:
    // 0x354438: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x354438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_35443c:
    // 0x35443c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x35443cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_354440:
    // 0x354440: 0xa0650003  sb          $a1, 0x3($v1)
    ctx->pc = 0x354440u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 5));
label_354444:
    // 0x354444: 0x100002f2  b           . + 4 + (0x2F2 << 2)
label_354448:
    if (ctx->pc == 0x354448u) {
        ctx->pc = 0x35444Cu;
        goto label_35444c;
    }
    ctx->pc = 0x354444u;
    {
        const bool branch_taken_0x354444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354444) {
            ctx->pc = 0x355010u;
            goto label_355010;
        }
    }
    ctx->pc = 0x35444Cu;
label_35444c:
    // 0x35444c: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x35444cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_354450:
    // 0x354450: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x354450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
label_354454:
    // 0x354454: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x354454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_354458:
    // 0x354458: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x354458u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_35445c:
    // 0x35445c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x35445cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_354460:
    // 0x354460: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x354460u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_354464:
    // 0x354464: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x354464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_354468:
    // 0x354468: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x354468u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_35446c:
    // 0x35446c: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x35446cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
label_354470:
    // 0x354470: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x354470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_354474:
    // 0x354474: 0x3c053f4c  lui         $a1, 0x3F4C
    ctx->pc = 0x354474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16204 << 16));
label_354478:
    // 0x354478: 0x34a4cccd  ori         $a0, $a1, 0xCCCD
    ctx->pc = 0x354478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
label_35447c:
    // 0x35447c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x35447cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_354480:
    // 0x354480: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x354480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_354484:
    // 0x354484: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x354484u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_354488:
    // 0x354488: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x354488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35448c:
    // 0x35448c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x35448cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_354490:
    // 0x354490: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x354490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_354494:
    // 0x354494: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x354494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_354498:
    // 0x354498: 0x3c043f4c  lui         $a0, 0x3F4C
    ctx->pc = 0x354498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16204 << 16));
label_35449c:
    // 0x35449c: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x35449cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_3544a0:
    // 0x3544a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3544a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3544a4:
    // 0x3544a4: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x3544a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3544a8:
    // 0x3544a8: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x3544a8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_3544ac:
    // 0x3544ac: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x3544acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3544b0:
    // 0x3544b0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3544b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3544b4:
    // 0x3544b4: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x3544b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
label_3544b8:
    // 0x3544b8: 0xc601012c  lwc1        $f1, 0x12C($s0)
    ctx->pc = 0x3544b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3544bc:
    // 0x3544bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3544bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3544c0:
    // 0x3544c0: 0x0  nop
    ctx->pc = 0x3544c0u;
    // NOP
label_3544c4:
    // 0x3544c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3544c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3544c8:
    // 0x3544c8: 0x0  nop
    ctx->pc = 0x3544c8u;
    // NOP
label_3544cc:
    // 0x3544cc: 0x450002d0  bc1f        . + 4 + (0x2D0 << 2)
label_3544d0:
    if (ctx->pc == 0x3544D0u) {
        ctx->pc = 0x3544D4u;
        goto label_3544d4;
    }
    ctx->pc = 0x3544CCu;
    {
        const bool branch_taken_0x3544cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3544cc) {
            ctx->pc = 0x355010u;
            goto label_355010;
        }
    }
    ctx->pc = 0x3544D4u;
label_3544d4:
    // 0x3544d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3544d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3544d8:
    // 0x3544d8: 0x0  nop
    ctx->pc = 0x3544d8u;
    // NOP
label_3544dc:
    // 0x3544dc: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x3544dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_3544e0:
    // 0x3544e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3544e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3544e4:
    // 0x3544e4: 0x0  nop
    ctx->pc = 0x3544e4u;
    // NOP
label_3544e8:
    // 0x3544e8: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x3544e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
label_3544ec:
    // 0x3544ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3544ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3544f0:
    // 0x3544f0: 0x0  nop
    ctx->pc = 0x3544f0u;
    // NOP
label_3544f4:
    // 0x3544f4: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x3544f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
label_3544f8:
    // 0x3544f8: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x3544f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_3544fc:
    // 0x3544fc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3544fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_354500:
    // 0x354500: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x354500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_354504:
    // 0x354504: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x354504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_354508:
    // 0x354508: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x354508u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_35450c:
    // 0x35450c: 0x100002c0  b           . + 4 + (0x2C0 << 2)
label_354510:
    if (ctx->pc == 0x354510u) {
        ctx->pc = 0x354514u;
        goto label_354514;
    }
    ctx->pc = 0x35450Cu;
    {
        const bool branch_taken_0x35450c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35450c) {
            ctx->pc = 0x355010u;
            goto label_355010;
        }
    }
    ctx->pc = 0x354514u;
label_354514:
    // 0x354514: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x354514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_354518:
    // 0x354518: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x354518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_35451c:
    // 0x35451c: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x35451cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_354520:
    // 0x354520: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x354520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_354524:
    // 0x354524: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x354524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_354528:
    // 0x354528: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x354528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_35452c:
    // 0x35452c: 0x9063010c  lbu         $v1, 0x10C($v1)
    ctx->pc = 0x35452cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 268)));
label_354530:
    // 0x354530: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x354530u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_354534:
    // 0x354534: 0x52180  sll         $a0, $a1, 6
    ctx->pc = 0x354534u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_354538:
    // 0x354538: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x354538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_35453c:
    // 0x35453c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x35453cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_354540:
    // 0x354540: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x354540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_354544:
    // 0x354544: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x354544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_354548:
    // 0x354548: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x354548u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_35454c:
    // 0x35454c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x35454cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_354550:
    // 0x354550: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x354550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_354554:
    // 0x354554: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x354554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_354558:
    // 0x354558: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x354558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_35455c:
    // 0x35455c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x35455cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_354560:
    // 0x354560: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x354560u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_354564:
    // 0x354564: 0xc0675f8  jal         func_19D7E0
label_354568:
    if (ctx->pc == 0x354568u) {
        ctx->pc = 0x35456Cu;
        goto label_35456c;
    }
    ctx->pc = 0x354564u;
    SET_GPR_U32(ctx, 31, 0x35456Cu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x354564u, 0x35456Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35456Cu;
label_35456c:
    // 0x35456c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x35456cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_354570:
    // 0x354570: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x354570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_354574:
    // 0x354574: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x354574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_354578:
    // 0x354578: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x354578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_35457c:
    // 0x35457c: 0x9044010c  lbu         $a0, 0x10C($v0)
    ctx->pc = 0x35457cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 268)));
label_354580:
    // 0x354580: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x354580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_354584:
    // 0x354584: 0x22180  sll         $a0, $v0, 6
    ctx->pc = 0x354584u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_354588:
    // 0x354588: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x354588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_35458c:
    // 0x35458c: 0x8ca70134  lw          $a3, 0x134($a1)
    ctx->pc = 0x35458cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 308)));
label_354590:
    // 0x354590: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x354590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_354594:
    // 0x354594: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x354594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_354598:
    // 0x354598: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x354598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_35459c:
    // 0x35459c: 0x7d2821  addu        $a1, $v1, $sp
    ctx->pc = 0x35459cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_3545a0:
    // 0x3545a0: 0x90a7010c  lbu         $a3, 0x10C($a1)
    ctx->pc = 0x3545a0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 268)));
label_3545a4:
    // 0x3545a4: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x3545a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_3545a8:
    // 0x3545a8: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x3545a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_3545ac:
    // 0x3545ac: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x3545acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3545b0:
    // 0x3545b0: 0x8cc70130  lw          $a3, 0x130($a2)
    ctx->pc = 0x3545b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_3545b4:
    // 0x3545b4: 0xe44021  addu        $t0, $a3, $a0
    ctx->pc = 0x3545b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_3545b8:
    // 0x3545b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3545b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3545bc:
    // 0x3545bc: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x3545bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_3545c0:
    // 0x3545c0: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x3545c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_3545c4:
    // 0x3545c4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x3545c4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3545c8:
    // 0x3545c8: 0xc0675f8  jal         func_19D7E0
label_3545cc:
    if (ctx->pc == 0x3545CCu) {
        ctx->pc = 0x3545D0u;
        goto label_3545d0;
    }
    ctx->pc = 0x3545C8u;
    SET_GPR_U32(ctx, 31, 0x3545D0u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x3545C8u, 0x3545D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3545D0u;
label_3545d0:
    // 0x3545d0: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x3545d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_3545d4:
    // 0x3545d4: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x3545d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3545d8:
    // 0x3545d8: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x3545d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3545dc:
    // 0x3545dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3545dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3545e0:
    // 0x3545e0: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x3545e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
label_3545e4:
    // 0x3545e4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3545e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_3545e8:
    // 0x3545e8: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x3545e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_3545ec:
    // 0x3545ec: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3545ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3545f0:
    // 0x3545f0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3545f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3545f4:
    // 0x3545f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3545f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3545f8:
    // 0x3545f8: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x3545f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3545fc:
    // 0x3545fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3545fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_354600:
    // 0x354600: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x354600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_354604:
    // 0x354604: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x354604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_354608:
    // 0x354608: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x354608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_35460c:
    // 0x35460c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x35460cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_354610:
    // 0x354610: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x354610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_354614:
    // 0x354614: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x354614u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_354618:
    // 0x354618: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x354618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35461c:
    // 0x35461c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x35461cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_354620:
    // 0x354620: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x354620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
label_354624:
    // 0x354624: 0xc601012c  lwc1        $f1, 0x12C($s0)
    ctx->pc = 0x354624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_354628:
    // 0x354628: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x354628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
label_35462c:
    // 0x35462c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x35462cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354630:
    // 0x354630: 0x0  nop
    ctx->pc = 0x354630u;
    // NOP
label_354634:
    // 0x354634: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x354634u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_354638:
    // 0x354638: 0x0  nop
    ctx->pc = 0x354638u;
    // NOP
label_35463c:
    // 0x35463c: 0x4501009a  bc1t        . + 4 + (0x9A << 2)
label_354640:
    if (ctx->pc == 0x354640u) {
        ctx->pc = 0x354644u;
        goto label_354644;
    }
    ctx->pc = 0x35463Cu;
    {
        const bool branch_taken_0x35463c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35463c) {
            ctx->pc = 0x3548A8u;
            goto label_3548a8;
        }
    }
    ctx->pc = 0x354644u;
label_354644:
    // 0x354644: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x354644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_354648:
    // 0x354648: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x354648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35464c:
    // 0x35464c: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x35464cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_354650:
    // 0x354650: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x354650u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_354654:
    // 0x354654: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x354654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
label_354658:
    // 0x354658: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x354658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_35465c:
    // 0x35465c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x35465cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_354660:
    // 0x354660: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x354660u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_354664:
    // 0x354664: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x354664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_354668:
    // 0x354668: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x354668u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_35466c:
    // 0x35466c: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x35466cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_354670:
    // 0x354670: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x354670u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_354674:
    // 0x354674: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x354674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_354678:
    // 0x354678: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x354678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_35467c:
    // 0x35467c: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x35467cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
label_354680:
    // 0x354680: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x354680u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_354684:
    // 0x354684: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x354684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_354688:
    // 0x354688: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x354688u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_35468c:
    // 0x35468c: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x35468cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_354690:
    // 0x354690: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x354690u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_354694:
    // 0x354694: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x354694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
label_354698:
    // 0x354698: 0x26080150  addiu       $t0, $s0, 0x150
    ctx->pc = 0x354698u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_35469c:
    // 0x35469c: 0x85030014  lh          $v1, 0x14($t0)
    ctx->pc = 0x35469cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 20)));
label_3546a0:
    // 0x3546a0: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x3546a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
label_3546a4:
    // 0x3546a4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3546a4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_3546a8:
    // 0x3546a8: 0x30a4000f  andi        $a0, $a1, 0xF
    ctx->pc = 0x3546a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_3546ac:
    // 0x3546ac: 0x1480007e  bnez        $a0, . + 4 + (0x7E << 2)
label_3546b0:
    if (ctx->pc == 0x3546B0u) {
        ctx->pc = 0x3546B4u;
        goto label_3546b4;
    }
    ctx->pc = 0x3546ACu;
    {
        const bool branch_taken_0x3546ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3546ac) {
            ctx->pc = 0x3548A8u;
            goto label_3548a8;
        }
    }
    ctx->pc = 0x3546B4u;
label_3546b4:
    // 0x3546b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3546b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3546b8:
    // 0x3546b8: 0x0  nop
    ctx->pc = 0x3546b8u;
    // NOP
label_3546bc:
    // 0x3546bc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3546bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3546c0:
    // 0x3546c0: 0x3c04453b  lui         $a0, 0x453B
    ctx->pc = 0x3546c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17723 << 16));
label_3546c4:
    // 0x3546c4: 0x34838000  ori         $v1, $a0, 0x8000
    ctx->pc = 0x3546c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
label_3546c8:
    // 0x3546c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3546c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3546cc:
    // 0x3546cc: 0x0  nop
    ctx->pc = 0x3546ccu;
    // NOP
label_3546d0:
    // 0x3546d0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3546d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3546d4:
    // 0x3546d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3546d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3546d8:
    // 0x3546d8: 0x0  nop
    ctx->pc = 0x3546d8u;
    // NOP
label_3546dc:
    // 0x3546dc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3546dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3546e0:
    // 0x3546e0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3546e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3546e4:
    // 0x3546e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3546e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3546e8:
    // 0x3546e8: 0x0  nop
    ctx->pc = 0x3546e8u;
    // NOP
label_3546ec:
    // 0x3546ec: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x3546ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_3546f0:
    // 0x3546f0: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x3546f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_3546f4:
    // 0x3546f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3546f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3546f8:
    // 0x3546f8: 0x7d2821  addu        $a1, $v1, $sp
    ctx->pc = 0x3546f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_3546fc:
    // 0x3546fc: 0x90a3010c  lbu         $v1, 0x10C($a1)
    ctx->pc = 0x3546fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 268)));
label_354700:
    // 0x354700: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x354700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_354704:
    // 0x354704: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x354704u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_354708:
    // 0x354708: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x354708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_35470c:
    // 0x35470c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x35470cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_354710:
    // 0x354710: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x354710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_354714:
    // 0x354714: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x354714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_354718:
    // 0x354718: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x354718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_35471c:
    // 0x35471c: 0xc0675ec  jal         func_19D7B0
label_354720:
    if (ctx->pc == 0x354720u) {
        ctx->pc = 0x354724u;
        goto label_354724;
    }
    ctx->pc = 0x35471Cu;
    SET_GPR_U32(ctx, 31, 0x354724u);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x35471Cu, 0x354724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354724u;
label_354724:
    // 0x354724: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x354724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_354728:
    // 0x354728: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x354728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_35472c:
    // 0x35472c: 0xc040c24  jal         func_103090
label_354730:
    if (ctx->pc == 0x354730u) {
        ctx->pc = 0x354734u;
        goto label_354734;
    }
    ctx->pc = 0x35472Cu;
    SET_GPR_U32(ctx, 31, 0x354734u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x354734u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x354734u) { return; }
    ctx->pc = 0x354734u;
label_354734:
    // 0x354734: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x354734u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_354738:
    // 0x354738: 0x3c04453b  lui         $a0, 0x453B
    ctx->pc = 0x354738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17723 << 16));
label_35473c:
    // 0x35473c: 0x34828000  ori         $v0, $a0, 0x8000
    ctx->pc = 0x35473cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
label_354740:
    // 0x354740: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x354740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_354744:
    // 0x354744: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x354744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_354748:
    // 0x354748: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x354748u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_35474c:
    // 0x35474c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x35474cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_354750:
    // 0x354750: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x354750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
label_354754:
    // 0x354754: 0x34658000  ori         $a1, $v1, 0x8000
    ctx->pc = 0x354754u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_354758:
    // 0x354758: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x354758u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_35475c:
    // 0x35475c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x35475cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_354760:
    // 0x354760: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x354760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_354764:
    // 0x354764: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x354764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_354768:
    // 0x354768: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x354768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
label_35476c:
    // 0x35476c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x35476cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_354770:
    // 0x354770: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x354770u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_354774:
    // 0x354774: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x354774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_354778:
    // 0x354778: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x354778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_35477c:
    // 0x35477c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x35477cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_354780:
    // 0x354780: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x354780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_354784:
    // 0x354784: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x354784u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354788:
    // 0x354788: 0x0  nop
    ctx->pc = 0x354788u;
    // NOP
label_35478c:
    // 0x35478c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x35478cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_354790:
    // 0x354790: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x354790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_354794:
    // 0x354794: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x354794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_354798:
    // 0x354798: 0x7d2821  addu        $a1, $v1, $sp
    ctx->pc = 0x354798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_35479c:
    // 0x35479c: 0x90a6010c  lbu         $a2, 0x10C($a1)
    ctx->pc = 0x35479cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 268)));
label_3547a0:
    // 0x3547a0: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x3547a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_3547a4:
    // 0x3547a4: 0x22980  sll         $a1, $v0, 6
    ctx->pc = 0x3547a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_3547a8:
    // 0x3547a8: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x3547a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3547ac:
    // 0x3547ac: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x3547acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_3547b0:
    // 0x3547b0: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x3547b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3547b4:
    // 0x3547b4: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x3547b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3547b8:
    // 0x3547b8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x3547b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3547bc:
    // 0x3547bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3547bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3547c0:
    // 0x3547c0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3547c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3547c4:
    // 0x3547c4: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x3547c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_3547c8:
    // 0x3547c8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x3547c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3547cc:
    // 0x3547cc: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x3547ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_3547d0:
    // 0x3547d0: 0x9085010c  lbu         $a1, 0x10C($a0)
    ctx->pc = 0x3547d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 268)));
label_3547d4:
    // 0x3547d4: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x3547d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3547d8:
    // 0x3547d8: 0x74180  sll         $t0, $a3, 6
    ctx->pc = 0x3547d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_3547dc:
    // 0x3547dc: 0x8fa90118  lw          $t1, 0x118($sp)
    ctx->pc = 0x3547dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3547e0:
    // 0x3547e0: 0x8d220130  lw          $v0, 0x130($t1)
    ctx->pc = 0x3547e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 304)));
label_3547e4:
    // 0x3547e4: 0x482821  addu        $a1, $v0, $t0
    ctx->pc = 0x3547e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_3547e8:
    // 0x3547e8: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x3547e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3547ec:
    // 0x3547ec: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x3547ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3547f0:
    // 0x3547f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3547f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3547f4:
    // 0x3547f4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3547f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3547f8:
    // 0x3547f8: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x3547f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_3547fc:
    // 0x3547fc: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x3547fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_354800:
    // 0x354800: 0x7d2821  addu        $a1, $v1, $sp
    ctx->pc = 0x354800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_354804:
    // 0x354804: 0x90a3010c  lbu         $v1, 0x10C($a1)
    ctx->pc = 0x354804u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 268)));
label_354808:
    // 0x354808: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x354808u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_35480c:
    // 0x35480c: 0x53180  sll         $a2, $a1, 6
    ctx->pc = 0x35480cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_354810:
    // 0x354810: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x354810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_354814:
    // 0x354814: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x354814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_354818:
    // 0x354818: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x354818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_35481c:
    // 0x35481c: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x35481cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_354820:
    // 0x354820: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x354820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_354824:
    // 0x354824: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x354824u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_354828:
    // 0x354828: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x354828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_35482c:
    // 0x35482c: 0x3c0441c8  lui         $a0, 0x41C8
    ctx->pc = 0x35482cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16840 << 16));
label_354830:
    // 0x354830: 0x44848000  mtc1        $a0, $f16
    ctx->pc = 0x354830u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_354834:
    // 0x354834: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x354834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_354838:
    // 0x354838: 0x44838800  mtc1        $v1, $f17
    ctx->pc = 0x354838u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
label_35483c:
    // 0x35483c: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x35483cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_354840:
    // 0x354840: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x354840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_354844:
    // 0x354844: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x354844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_354848:
    // 0x354848: 0x9065010c  lbu         $a1, 0x10C($v1)
    ctx->pc = 0x354848u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 268)));
label_35484c:
    // 0x35484c: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x35484cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_354850:
    // 0x354850: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x354850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_354854:
    // 0x354854: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x354854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_354858:
    // 0x354858: 0x8cc20130  lw          $v0, 0x130($a2)
    ctx->pc = 0x354858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_35485c:
    // 0x35485c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x35485cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_354860:
    // 0x354860: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x354860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
label_354864:
    // 0x354864: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x354864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_354868:
    // 0x354868: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x354868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_35486c:
    // 0x35486c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x35486cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_354870:
    // 0x354870: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x354870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_354874:
    // 0x354874: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x354874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_354878:
    // 0x354878: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x354878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_35487c:
    // 0x35487c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x35487cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_354880:
    // 0x354880: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x354880u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_354884:
    // 0x354884: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x354884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_354888:
    // 0x354888: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x354888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_35488c:
    // 0x35488c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35488cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_354890:
    // 0x354890: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x354890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_354894:
    // 0x354894: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x354894u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_354898:
    // 0x354898: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x354898u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_35489c:
    // 0x35489c: 0xc087200  jal         func_21C800
label_3548a0:
    if (ctx->pc == 0x3548A0u) {
        ctx->pc = 0x3548A4u;
        goto label_3548a4;
    }
    ctx->pc = 0x35489Cu;
    SET_GPR_U32(ctx, 31, 0x3548A4u);
    ctx->pc = 0x21C800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C800u, 0x35489Cu, 0x3548A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3548A4u;
label_3548a4:
    // 0x3548a4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3548a4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3548a8:
    // 0x3548a8: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x3548a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_3548ac:
    // 0x3548ac: 0x84850014  lh          $a1, 0x14($a0)
    ctx->pc = 0x3548acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
label_3548b0:
    // 0x3548b0: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x3548b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_3548b4:
    // 0x3548b4: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x3548b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
label_3548b8:
    // 0x3548b8: 0x14a001d5  bnez        $a1, . + 4 + (0x1D5 << 2)
label_3548bc:
    if (ctx->pc == 0x3548BCu) {
        ctx->pc = 0x3548C0u;
        goto label_3548c0;
    }
    ctx->pc = 0x3548B8u;
    {
        const bool branch_taken_0x3548b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3548b8) {
            ctx->pc = 0x355010u;
            goto label_355010;
        }
    }
    ctx->pc = 0x3548C0u;
label_3548c0:
    // 0x3548c0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3548c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3548c4:
    // 0x3548c4: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x3548c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_3548c8:
    // 0x3548c8: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x3548c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
label_3548cc:
    // 0x3548cc: 0x100001d0  b           . + 4 + (0x1D0 << 2)
label_3548d0:
    if (ctx->pc == 0x3548D0u) {
        ctx->pc = 0x3548D4u;
        goto label_3548d4;
    }
    ctx->pc = 0x3548CCu;
    {
        const bool branch_taken_0x3548cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3548cc) {
            ctx->pc = 0x355010u;
            goto label_355010;
        }
    }
    ctx->pc = 0x3548D4u;
label_3548d4:
    // 0x3548d4: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x3548d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_3548d8:
    // 0x3548d8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3548d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3548dc:
    // 0x3548dc: 0x7d2821  addu        $a1, $v1, $sp
    ctx->pc = 0x3548dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_3548e0:
    // 0x3548e0: 0x90a4010c  lbu         $a0, 0x10C($a1)
    ctx->pc = 0x3548e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 268)));
label_3548e4:
    // 0x3548e4: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3548e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3548e8:
    // 0x3548e8: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x3548e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_3548ec:
    // 0x3548ec: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x3548ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3548f0:
    // 0x3548f0: 0x8ca70130  lw          $a3, 0x130($a1)
    ctx->pc = 0x3548f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_3548f4:
    // 0x3548f4: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x3548f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_3548f8:
    // 0x3548f8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x3548f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_3548fc:
    // 0x3548fc: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x3548fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_354900:
    // 0x354900: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x354900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_354904:
    // 0x354904: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x354904u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_354908:
    // 0x354908: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x354908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_35490c:
    // 0x35490c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x35490cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_354910:
    // 0x354910: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x354910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_354914:
    // 0x354914: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x354914u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_354918:
    // 0x354918: 0xc0675f8  jal         func_19D7E0
label_35491c:
    if (ctx->pc == 0x35491Cu) {
        ctx->pc = 0x354920u;
        goto label_354920;
    }
    ctx->pc = 0x354918u;
    SET_GPR_U32(ctx, 31, 0x354920u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x354918u, 0x354920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354920u;
label_354920:
    // 0x354920: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x354920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_354924:
    // 0x354924: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x354924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_354928:
    // 0x354928: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x354928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_35492c:
    // 0x35492c: 0x90a7010c  lbu         $a3, 0x10C($a1)
    ctx->pc = 0x35492cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 268)));
label_354930:
    // 0x354930: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x354930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_354934:
    // 0x354934: 0x22180  sll         $a0, $v0, 6
    ctx->pc = 0x354934u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_354938:
    // 0x354938: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x354938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_35493c:
    // 0x35493c: 0x8ca20134  lw          $v0, 0x134($a1)
    ctx->pc = 0x35493cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 308)));
label_354940:
    // 0x354940: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x354940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_354944:
    // 0x354944: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x354944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_354948:
    // 0x354948: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x354948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_35494c:
    // 0x35494c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x35494cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_354950:
    // 0x354950: 0x9042010c  lbu         $v0, 0x10C($v0)
    ctx->pc = 0x354950u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 268)));
label_354954:
    // 0x354954: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x354954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_354958:
    // 0x354958: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x354958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_35495c:
    // 0x35495c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x35495cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_354960:
    // 0x354960: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x354960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_354964:
    // 0x354964: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x354964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_354968:
    // 0x354968: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x354968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_35496c:
    // 0x35496c: 0xc0675f8  jal         func_19D7E0
label_354970:
    if (ctx->pc == 0x354970u) {
        ctx->pc = 0x354974u;
        goto label_354974;
    }
    ctx->pc = 0x35496Cu;
    SET_GPR_U32(ctx, 31, 0x354974u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x35496Cu, 0x354974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354974u;
label_354974:
    // 0x354974: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x354974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_354978:
    // 0x354978: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x354978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35497c:
    // 0x35497c: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x35497cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_354980:
    // 0x354980: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x354980u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_354984:
    // 0x354984: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x354984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
label_354988:
    // 0x354988: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x354988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_35498c:
    // 0x35498c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x35498cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_354990:
    // 0x354990: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x354990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_354994:
    // 0x354994: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x354994u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_354998:
    // 0x354998: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x354998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_35499c:
    // 0x35499c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x35499cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_3549a0:
    // 0x3549a0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3549a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3549a4:
    // 0x3549a4: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x3549a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3549a8:
    // 0x3549a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3549a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3549ac:
    // 0x3549ac: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x3549acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
label_3549b0:
    // 0x3549b0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3549b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_3549b4:
    // 0x3549b4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x3549b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3549b8:
    // 0x3549b8: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x3549b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_3549bc:
    // 0x3549bc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x3549bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3549c0:
    // 0x3549c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3549c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3549c4:
    // 0x3549c4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x3549c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_3549c8:
    // 0x3549c8: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x3549c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_3549cc:
    // 0x3549cc: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x3549ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3549d0:
    // 0x3549d0: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x3549d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
label_3549d4:
    // 0x3549d4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x3549d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_3549d8:
    // 0x3549d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3549d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3549dc:
    // 0x3549dc: 0x0  nop
    ctx->pc = 0x3549dcu;
    // NOP
label_3549e0:
    // 0x3549e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3549e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3549e4:
    // 0x3549e4: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x3549e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
label_3549e8:
    // 0x3549e8: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x3549e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_3549ec:
    // 0x3549ec: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x3549ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3549f0:
    // 0x3549f0: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x3549f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3549f4:
    // 0x3549f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3549f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3549f8:
    // 0x3549f8: 0x0  nop
    ctx->pc = 0x3549f8u;
    // NOP
label_3549fc:
    // 0x3549fc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_354a00:
    if (ctx->pc == 0x354A00u) {
        ctx->pc = 0x354A04u;
        goto label_354a04;
    }
    ctx->pc = 0x3549FCu;
    {
        const bool branch_taken_0x3549fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3549fc) {
            ctx->pc = 0x354A20u;
            goto label_354a20;
        }
    }
    ctx->pc = 0x354A04u;
label_354a04:
    // 0x354a04: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x354a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_354a08:
    // 0x354a08: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x354a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_354a0c:
    // 0x354a0c: 0xa4640014  sh          $a0, 0x14($v1)
    ctx->pc = 0x354a0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 4));
label_354a10:
    // 0x354a10: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x354a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_354a14:
    // 0x354a14: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x354a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_354a18:
    // 0x354a18: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x354a18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_354a1c:
    // 0x354a1c: 0x0  nop
    ctx->pc = 0x354a1cu;
    // NOP
label_354a20:
    // 0x354a20: 0xc601012c  lwc1        $f1, 0x12C($s0)
    ctx->pc = 0x354a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_354a24:
    // 0x354a24: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x354a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_354a28:
    // 0x354a28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x354a28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354a2c:
    // 0x354a2c: 0x0  nop
    ctx->pc = 0x354a2cu;
    // NOP
label_354a30:
    // 0x354a30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x354a30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_354a34:
    // 0x354a34: 0x0  nop
    ctx->pc = 0x354a34u;
    // NOP
label_354a38:
    // 0x354a38: 0x45010175  bc1t        . + 4 + (0x175 << 2)
label_354a3c:
    if (ctx->pc == 0x354A3Cu) {
        ctx->pc = 0x354A40u;
        goto label_354a40;
    }
    ctx->pc = 0x354A38u;
    {
        const bool branch_taken_0x354a38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x354a38) {
            ctx->pc = 0x355010u;
            goto label_355010;
        }
    }
    ctx->pc = 0x354A40u;
label_354a40:
    // 0x354a40: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x354a40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_354a44:
    // 0x354a44: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x354a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_354a48:
    // 0x354a48: 0xbd3821  addu        $a3, $a1, $sp
    ctx->pc = 0x354a48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_354a4c:
    // 0x354a4c: 0x90e2010c  lbu         $v0, 0x10C($a3)
    ctx->pc = 0x354a4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 268)));
label_354a50:
    // 0x354a50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x354a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_354a54:
    // 0x354a54: 0x22180  sll         $a0, $v0, 6
    ctx->pc = 0x354a54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_354a58:
    // 0x354a58: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x354a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_354a5c:
    // 0x354a5c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x354a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_354a60:
    // 0x354a60: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x354a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_354a64:
    // 0x354a64: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x354a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_354a68:
    // 0x354a68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x354a68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354a6c:
    // 0x354a6c: 0x0  nop
    ctx->pc = 0x354a6cu;
    // NOP
label_354a70:
    // 0x354a70: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x354a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_354a74:
    // 0x354a74: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x354a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_354a78:
    // 0x354a78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x354a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354a7c:
    // 0x354a7c: 0x0  nop
    ctx->pc = 0x354a7cu;
    // NOP
label_354a80:
    // 0x354a80: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x354a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_354a84:
    // 0x354a84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x354a84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354a88:
    // 0x354a88: 0x0  nop
    ctx->pc = 0x354a88u;
    // NOP
label_354a8c:
    // 0x354a8c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x354a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_354a90:
    // 0x354a90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x354a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_354a94:
    // 0x354a94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x354a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354a98:
    // 0x354a98: 0x0  nop
    ctx->pc = 0x354a98u;
    // NOP
label_354a9c:
    // 0x354a9c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x354a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_354aa0:
    // 0x354aa0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x354aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_354aa4:
    // 0x354aa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x354aa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354aa8:
    // 0x354aa8: 0x0  nop
    ctx->pc = 0x354aa8u;
    // NOP
label_354aac:
    // 0x354aac: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x354aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_354ab0:
    // 0x354ab0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x354ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_354ab4:
    // 0x354ab4: 0xa7a200e4  sh          $v0, 0xE4($sp)
    ctx->pc = 0x354ab4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 228), (uint16_t)GPR_U32(ctx, 2));
label_354ab8:
    // 0x354ab8: 0xa3a000e6  sb          $zero, 0xE6($sp)
    ctx->pc = 0x354ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 230), (uint8_t)GPR_U32(ctx, 0));
label_354abc:
    // 0x354abc: 0xa3a000e7  sb          $zero, 0xE7($sp)
    ctx->pc = 0x354abcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 231), (uint8_t)GPR_U32(ctx, 0));
label_354ac0:
    // 0x354ac0: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x354ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_354ac4:
    // 0x354ac4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x354ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_354ac8:
    // 0x354ac8: 0xc06ce90  jal         func_1B3A40
label_354acc:
    if (ctx->pc == 0x354ACCu) {
        ctx->pc = 0x354AD0u;
        goto label_354ad0;
    }
    ctx->pc = 0x354AC8u;
    SET_GPR_U32(ctx, 31, 0x354AD0u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x354AC8u, 0x354AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354AD0u;
label_354ad0:
    // 0x354ad0: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x354ad0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_354ad4:
    // 0x354ad4: 0x10e0004a  beqz        $a3, . + 4 + (0x4A << 2)
label_354ad8:
    if (ctx->pc == 0x354AD8u) {
        ctx->pc = 0x354ADCu;
        goto label_354adc;
    }
    ctx->pc = 0x354AD4u;
    {
        const bool branch_taken_0x354ad4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x354ad4) {
            ctx->pc = 0x354C00u;
            goto label_354c00;
        }
    }
    ctx->pc = 0x354ADCu;
label_354adc:
    // 0x354adc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x354adcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354ae0:
    // 0x354ae0: 0x0  nop
    ctx->pc = 0x354ae0u;
    // NOP
label_354ae4:
    // 0x354ae4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x354ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_354ae8:
    // 0x354ae8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x354ae8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354aec:
    // 0x354aec: 0x0  nop
    ctx->pc = 0x354aecu;
    // NOP
label_354af0:
    // 0x354af0: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x354af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_354af4:
    // 0x354af4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x354af4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354af8:
    // 0x354af8: 0x0  nop
    ctx->pc = 0x354af8u;
    // NOP
label_354afc:
    // 0x354afc: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x354afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_354b00:
    // 0x354b00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x354b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_354b04:
    // 0x354b04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x354b04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354b08:
    // 0x354b08: 0x0  nop
    ctx->pc = 0x354b08u;
    // NOP
label_354b0c:
    // 0x354b0c: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x354b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_354b10:
    // 0x354b10: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x354b10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
label_354b14:
    // 0x354b14: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x354b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_354b18:
    // 0x354b18: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x354b18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_354b1c:
    // 0x354b1c: 0x51438  dsll        $v0, $a1, 16
    ctx->pc = 0x354b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 16);
label_354b20:
    // 0x354b20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x354b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_354b24:
    // 0x354b24: 0x822824  and         $a1, $a0, $v0
    ctx->pc = 0x354b24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_354b28:
    // 0x354b28: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x354b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_354b2c:
    // 0x354b2c: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x354b2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
label_354b30:
    // 0x354b30: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x354b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_354b34:
    // 0x354b34: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x354b34u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_354b38:
    // 0x354b38: 0x8e470130  lw          $a3, 0x130($s2)
    ctx->pc = 0x354b38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
label_354b3c:
    // 0x354b3c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x354b3cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_354b40:
    // 0x354b40: 0xc06371c  jal         func_18DC70
label_354b44:
    if (ctx->pc == 0x354B44u) {
        ctx->pc = 0x354B48u;
        goto label_354b48;
    }
    ctx->pc = 0x354B40u;
    SET_GPR_U32(ctx, 31, 0x354B48u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x354B40u, 0x354B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354B48u;
label_354b48:
    // 0x354b48: 0xc067694  jal         func_19DA50
label_354b4c:
    if (ctx->pc == 0x354B4Cu) {
        ctx->pc = 0x354B50u;
        goto label_354b50;
    }
    ctx->pc = 0x354B48u;
    SET_GPR_U32(ctx, 31, 0x354B50u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x354B48u, 0x354B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354B50u;
label_354b50:
    // 0x354b50: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x354b50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_354b54:
    // 0x354b54: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_354b58:
    if (ctx->pc == 0x354B58u) {
        ctx->pc = 0x354B5Cu;
        goto label_354b5c;
    }
    ctx->pc = 0x354B54u;
    {
        const bool branch_taken_0x354b54 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x354b54) {
            ctx->pc = 0x354B70u;
            goto label_354b70;
        }
    }
    ctx->pc = 0x354B5Cu;
label_354b5c:
    // 0x354b5c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x354b5cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354b60:
    // 0x354b60: 0x0  nop
    ctx->pc = 0x354b60u;
    // NOP
label_354b64:
    // 0x354b64: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x354b64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_354b68:
    // 0x354b68: 0x10000008  b           . + 4 + (0x8 << 2)
label_354b6c:
    if (ctx->pc == 0x354B6Cu) {
        ctx->pc = 0x354B70u;
        goto label_354b70;
    }
    ctx->pc = 0x354B68u;
    {
        const bool branch_taken_0x354b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354b68) {
            ctx->pc = 0x354B8Cu;
            goto label_354b8c;
        }
    }
    ctx->pc = 0x354B70u;
label_354b70:
    // 0x354b70: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x354b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_354b74:
    // 0x354b74: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x354b74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_354b78:
    // 0x354b78: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x354b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_354b7c:
    // 0x354b7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x354b7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354b80:
    // 0x354b80: 0x0  nop
    ctx->pc = 0x354b80u;
    // NOP
label_354b84:
    // 0x354b84: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x354b84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_354b88:
    // 0x354b88: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x354b88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_354b8c:
    // 0x354b8c: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x354b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_354b90:
    // 0x354b90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x354b90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_354b94:
    // 0x354b94: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x354b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_354b98:
    // 0x354b98: 0x12283c  dsll32      $a1, $s2, 0
    ctx->pc = 0x354b98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 0));
label_354b9c:
    // 0x354b9c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x354b9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_354ba0:
    // 0x354ba0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x354ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_354ba4:
    // 0x354ba4: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x354ba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
label_354ba8:
    // 0x354ba8: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x354ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_354bac:
    // 0x354bac: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x354bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_354bb0:
    // 0x354bb0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x354bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_354bb4:
    // 0x354bb4: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x354bb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
label_354bb8:
    // 0x354bb8: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x354bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_354bbc:
    // 0x354bbc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x354bbcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_354bc0:
    // 0x354bc0: 0x8e470130  lw          $a3, 0x130($s2)
    ctx->pc = 0x354bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
label_354bc4:
    // 0x354bc4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x354bc4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_354bc8:
    // 0x354bc8: 0xc06371c  jal         func_18DC70
label_354bcc:
    if (ctx->pc == 0x354BCCu) {
        ctx->pc = 0x354BD0u;
        goto label_354bd0;
    }
    ctx->pc = 0x354BC8u;
    SET_GPR_U32(ctx, 31, 0x354BD0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x354BC8u, 0x354BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354BD0u;
label_354bd0:
    // 0x354bd0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x354bd0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_354bd4:
    // 0x354bd4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x354bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_354bd8:
    // 0x354bd8: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x354bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_354bdc:
    // 0x354bdc: 0xc0684d8  jal         func_1A1360
label_354be0:
    if (ctx->pc == 0x354BE0u) {
        ctx->pc = 0x354BE4u;
        goto label_354be4;
    }
    ctx->pc = 0x354BDCu;
    SET_GPR_U32(ctx, 31, 0x354BE4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x354BDCu, 0x354BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354BE4u;
label_354be4:
    // 0x354be4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x354be4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_354be8:
    // 0x354be8: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x354be8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
label_354bec:
    // 0x354bec: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x354becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
label_354bf0:
    // 0x354bf0: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x354bf0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_354bf4:
    // 0x354bf4: 0xc0684d8  jal         func_1A1360
label_354bf8:
    if (ctx->pc == 0x354BF8u) {
        ctx->pc = 0x354BFCu;
        goto label_354bfc;
    }
    ctx->pc = 0x354BF4u;
    SET_GPR_U32(ctx, 31, 0x354BFCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x354BF4u, 0x354BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354BFCu;
label_354bfc:
    // 0x354bfc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x354bfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_354c00:
    // 0x354c00: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x354c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_354c04:
    // 0x354c04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x354c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_354c08:
    // 0x354c08: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x354c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_354c0c:
    // 0x354c0c: 0x9063010c  lbu         $v1, 0x10C($v1)
    ctx->pc = 0x354c0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 268)));
label_354c10:
    // 0x354c10: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x354c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_354c14:
    // 0x354c14: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x354c14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_354c18:
    // 0x354c18: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x354c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_354c1c:
    // 0x354c1c: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x354c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_354c20:
    // 0x354c20: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x354c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_354c24:
    // 0x354c24: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x354c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_354c28:
    // 0x354c28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x354c28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354c2c:
    // 0x354c2c: 0x0  nop
    ctx->pc = 0x354c2cu;
    // NOP
label_354c30:
    // 0x354c30: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x354c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_354c34:
    // 0x354c34: 0x3c0441c8  lui         $a0, 0x41C8
    ctx->pc = 0x354c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16840 << 16));
label_354c38:
    // 0x354c38: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x354c38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_354c3c:
    // 0x354c3c: 0x0  nop
    ctx->pc = 0x354c3cu;
    // NOP
label_354c40:
    // 0x354c40: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x354c40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_354c44:
    // 0x354c44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x354c44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354c48:
    // 0x354c48: 0x0  nop
    ctx->pc = 0x354c48u;
    // NOP
label_354c4c:
    // 0x354c4c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x354c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_354c50:
    // 0x354c50: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x354c50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_354c54:
    // 0x354c54: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x354c54u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354c58:
    // 0x354c58: 0x0  nop
    ctx->pc = 0x354c58u;
    // NOP
label_354c5c:
    // 0x354c5c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x354c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_354c60:
    // 0x354c60: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x354c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_354c64:
    // 0x354c64: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x354c64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_354c68:
    // 0x354c68: 0x0  nop
    ctx->pc = 0x354c68u;
    // NOP
label_354c6c:
    // 0x354c6c: 0xe7ac00e0  swc1        $f12, 0xE0($sp)
    ctx->pc = 0x354c6cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_354c70:
    // 0x354c70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x354c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_354c74:
    // 0x354c74: 0xa7a300e4  sh          $v1, 0xE4($sp)
    ctx->pc = 0x354c74u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 228), (uint16_t)GPR_U32(ctx, 3));
label_354c78:
    // 0x354c78: 0xa3a000e6  sb          $zero, 0xE6($sp)
    ctx->pc = 0x354c78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 230), (uint8_t)GPR_U32(ctx, 0));
label_354c7c:
    // 0x354c7c: 0xa3a000e7  sb          $zero, 0xE7($sp)
    ctx->pc = 0x354c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 231), (uint8_t)GPR_U32(ctx, 0));
label_354c80:
    // 0x354c80: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x354c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_354c84:
    // 0x354c84: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x354c84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_354c88:
    // 0x354c88: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x354c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_354c8c:
    // 0x354c8c: 0xc06ce90  jal         func_1B3A40
label_354c90:
    if (ctx->pc == 0x354C90u) {
        ctx->pc = 0x354C94u;
        goto label_354c94;
    }
    ctx->pc = 0x354C8Cu;
    SET_GPR_U32(ctx, 31, 0x354C94u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x354C8Cu, 0x354C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354C94u;
label_354c94:
    // 0x354c94: 0x104000de  beqz        $v0, . + 4 + (0xDE << 2)
label_354c98:
    if (ctx->pc == 0x354C98u) {
        ctx->pc = 0x354C9Cu;
        goto label_354c9c;
    }
    ctx->pc = 0x354C94u;
    {
        const bool branch_taken_0x354c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354c94) {
            ctx->pc = 0x355010u;
            goto label_355010;
        }
    }
    ctx->pc = 0x354C9Cu;
label_354c9c:
    // 0x354c9c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x354c9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_354ca0:
    // 0x354ca0: 0x0  nop
    ctx->pc = 0x354ca0u;
    // NOP
label_354ca4:
    // 0x354ca4: 0xe7ad00f0  swc1        $f13, 0xF0($sp)
    ctx->pc = 0x354ca4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_354ca8:
    // 0x354ca8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x354ca8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_354cac:
    // 0x354cac: 0x0  nop
    ctx->pc = 0x354cacu;
    // NOP
label_354cb0:
    // 0x354cb0: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x354cb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_354cb4:
    // 0x354cb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x354cb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354cb8:
    // 0x354cb8: 0x0  nop
    ctx->pc = 0x354cb8u;
    // NOP
label_354cbc:
    // 0x354cbc: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x354cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_354cc0:
    // 0x354cc0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x354cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_354cc4:
    // 0x354cc4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x354cc4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354cc8:
    // 0x354cc8: 0x0  nop
    ctx->pc = 0x354cc8u;
    // NOP
label_354ccc:
    // 0x354ccc: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x354cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_354cd0:
    // 0x354cd0: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x354cd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
label_354cd4:
    // 0x354cd4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x354cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_354cd8:
    // 0x354cd8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x354cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_354cdc:
    // 0x354cdc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x354cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_354ce0:
    // 0x354ce0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x354ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_354ce4:
    // 0x354ce4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x354ce4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_354ce8:
    // 0x354ce8: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x354ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
label_354cec:
    // 0x354cec: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x354cecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
label_354cf0:
    // 0x354cf0: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x354cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_354cf4:
    // 0x354cf4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x354cf4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_354cf8:
    // 0x354cf8: 0x8e470130  lw          $a3, 0x130($s2)
    ctx->pc = 0x354cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
label_354cfc:
    // 0x354cfc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x354cfcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_354d00:
    // 0x354d00: 0xc06371c  jal         func_18DC70
label_354d04:
    if (ctx->pc == 0x354D04u) {
        ctx->pc = 0x354D08u;
        goto label_354d08;
    }
    ctx->pc = 0x354D00u;
    SET_GPR_U32(ctx, 31, 0x354D08u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x354D00u, 0x354D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354D08u;
label_354d08:
    // 0x354d08: 0xc067694  jal         func_19DA50
label_354d0c:
    if (ctx->pc == 0x354D0Cu) {
        ctx->pc = 0x354D10u;
        goto label_354d10;
    }
    ctx->pc = 0x354D08u;
    SET_GPR_U32(ctx, 31, 0x354D10u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x354D08u, 0x354D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354D10u;
label_354d10:
    // 0x354d10: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x354d10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_354d14:
    // 0x354d14: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_354d18:
    if (ctx->pc == 0x354D18u) {
        ctx->pc = 0x354D1Cu;
        goto label_354d1c;
    }
    ctx->pc = 0x354D14u;
    {
        const bool branch_taken_0x354d14 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x354d14) {
            ctx->pc = 0x354D30u;
            goto label_354d30;
        }
    }
    ctx->pc = 0x354D1Cu;
label_354d1c:
    // 0x354d1c: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x354d1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_354d20:
    // 0x354d20: 0x0  nop
    ctx->pc = 0x354d20u;
    // NOP
label_354d24:
    // 0x354d24: 0x46806b20  cvt.s.w     $f12, $f13
    ctx->pc = 0x354d24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_354d28:
    // 0x354d28: 0x10000008  b           . + 4 + (0x8 << 2)
label_354d2c:
    if (ctx->pc == 0x354D2Cu) {
        ctx->pc = 0x354D30u;
        goto label_354d30;
    }
    ctx->pc = 0x354D28u;
    {
        const bool branch_taken_0x354d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354d28) {
            ctx->pc = 0x354D4Cu;
            goto label_354d4c;
        }
    }
    ctx->pc = 0x354D30u;
label_354d30:
    // 0x354d30: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x354d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_354d34:
    // 0x354d34: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x354d34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_354d38:
    // 0x354d38: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x354d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_354d3c:
    // 0x354d3c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x354d3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_354d40:
    // 0x354d40: 0x0  nop
    ctx->pc = 0x354d40u;
    // NOP
label_354d44:
    // 0x354d44: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x354d44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_354d48:
    // 0x354d48: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x354d48u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_354d4c:
    // 0x354d4c: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x354d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_354d50:
    // 0x354d50: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x354d50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_354d54:
    // 0x354d54: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x354d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_354d58:
    // 0x354d58: 0x12383c  dsll32      $a3, $s2, 0
    ctx->pc = 0x354d58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) << (32 + 0));
label_354d5c:
    // 0x354d5c: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x354d5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
label_354d60:
    // 0x354d60: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x354d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_354d64:
    // 0x354d64: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x354d64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
label_354d68:
    // 0x354d68: 0x3486ffff  ori         $a2, $a0, 0xFFFF
    ctx->pc = 0x354d68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_354d6c:
    // 0x354d6c: 0xe63824  and         $a3, $a3, $a2
    ctx->pc = 0x354d6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
label_354d70:
    // 0x354d70: 0x7403c  dsll32      $t0, $a3, 0
    ctx->pc = 0x354d70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 0));
label_354d74:
    // 0x354d74: 0x35020006  ori         $v0, $t0, 0x6
    ctx->pc = 0x354d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)6);
label_354d78:
    // 0x354d78: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x354d78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_354d7c:
    // 0x354d7c: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x354d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_354d80:
    // 0x354d80: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x354d80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_354d84:
    // 0x354d84: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x354d84u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_354d88:
    // 0x354d88: 0x8e470130  lw          $a3, 0x130($s2)
    ctx->pc = 0x354d88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
label_354d8c:
    // 0x354d8c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x354d8cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_354d90:
    // 0x354d90: 0xc06371c  jal         func_18DC70
label_354d94:
    if (ctx->pc == 0x354D94u) {
        ctx->pc = 0x354D98u;
        goto label_354d98;
    }
    ctx->pc = 0x354D90u;
    SET_GPR_U32(ctx, 31, 0x354D98u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x354D90u, 0x354D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354D98u;
label_354d98:
    // 0x354d98: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x354d98u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_354d9c:
    // 0x354d9c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x354d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_354da0:
    // 0x354da0: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x354da0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_354da4:
    // 0x354da4: 0xc0684d8  jal         func_1A1360
label_354da8:
    if (ctx->pc == 0x354DA8u) {
        ctx->pc = 0x354DACu;
        goto label_354dac;
    }
    ctx->pc = 0x354DA4u;
    SET_GPR_U32(ctx, 31, 0x354DACu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x354DA4u, 0x354DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354DACu;
label_354dac:
    // 0x354dac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x354dacu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_354db0:
    // 0x354db0: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x354db0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
label_354db4:
    // 0x354db4: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x354db4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_354db8:
    // 0x354db8: 0xc0684d8  jal         func_1A1360
label_354dbc:
    if (ctx->pc == 0x354DBCu) {
        ctx->pc = 0x354DC0u;
        goto label_354dc0;
    }
    ctx->pc = 0x354DB8u;
    SET_GPR_U32(ctx, 31, 0x354DC0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x354DB8u, 0x354DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354DC0u;
label_354dc0:
    // 0x354dc0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x354dc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_354dc4:
    // 0x354dc4: 0x10000092  b           . + 4 + (0x92 << 2)
label_354dc8:
    if (ctx->pc == 0x354DC8u) {
        ctx->pc = 0x354DCCu;
        goto label_354dcc;
    }
    ctx->pc = 0x354DC4u;
    {
        const bool branch_taken_0x354dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354dc4) {
            ctx->pc = 0x355010u;
            goto label_355010;
        }
    }
    ctx->pc = 0x354DCCu;
label_354dcc:
    // 0x354dcc: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x354dccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_354dd0:
    // 0x354dd0: 0x2486ffff  addiu       $a2, $a0, -0x1
    ctx->pc = 0x354dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_354dd4:
    // 0x354dd4: 0xdd3821  addu        $a3, $a2, $sp
    ctx->pc = 0x354dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
label_354dd8:
    // 0x354dd8: 0x90e8010c  lbu         $t0, 0x10C($a3)
    ctx->pc = 0x354dd8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 268)));
label_354ddc:
    // 0x354ddc: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x354ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_354de0:
    // 0x354de0: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x354de0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_354de4:
    // 0x354de4: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x354de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_354de8:
    // 0x354de8: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x354de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_354dec:
    // 0x354dec: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x354decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_354df0:
    // 0x354df0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x354df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_354df4:
    // 0x354df4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x354df4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_354df8:
    // 0x354df8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x354df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_354dfc:
    // 0x354dfc: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x354dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_354e00:
    // 0x354e00: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x354e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_354e04:
    // 0x354e04: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x354e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_354e08:
    // 0x354e08: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x354e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_354e0c:
    // 0x354e0c: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x354e0cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_354e10:
    // 0x354e10: 0xc0675f8  jal         func_19D7E0
label_354e14:
    if (ctx->pc == 0x354E14u) {
        ctx->pc = 0x354E18u;
        goto label_354e18;
    }
    ctx->pc = 0x354E10u;
    SET_GPR_U32(ctx, 31, 0x354E18u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x354E10u, 0x354E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354E18u;
label_354e18:
    // 0x354e18: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x354e18u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_354e1c:
    // 0x354e1c: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x354e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_354e20:
    // 0x354e20: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x354e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_354e24:
    // 0x354e24: 0xbd2021  addu        $a0, $a1, $sp
    ctx->pc = 0x354e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_354e28:
    // 0x354e28: 0x9086010c  lbu         $a2, 0x10C($a0)
    ctx->pc = 0x354e28u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 268)));
label_354e2c:
    // 0x354e2c: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x354e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_354e30:
    // 0x354e30: 0x22180  sll         $a0, $v0, 6
    ctx->pc = 0x354e30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_354e34:
    // 0x354e34: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x354e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_354e38:
    // 0x354e38: 0x8ca60134  lw          $a2, 0x134($a1)
    ctx->pc = 0x354e38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 308)));
label_354e3c:
    // 0x354e3c: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x354e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_354e40:
    // 0x354e40: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x354e40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_354e44:
    // 0x354e44: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x354e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_354e48:
    // 0x354e48: 0xbd1821  addu        $v1, $a1, $sp
    ctx->pc = 0x354e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_354e4c:
    // 0x354e4c: 0x9063010c  lbu         $v1, 0x10C($v1)
    ctx->pc = 0x354e4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 268)));
label_354e50:
    // 0x354e50: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x354e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_354e54:
    // 0x354e54: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x354e54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_354e58:
    // 0x354e58: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x354e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_354e5c:
    // 0x354e5c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x354e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_354e60:
    // 0x354e60: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x354e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_354e64:
    // 0x354e64: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x354e64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_354e68:
    // 0x354e68: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x354e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_354e6c:
    // 0x354e6c: 0xc0675f8  jal         func_19D7E0
label_354e70:
    if (ctx->pc == 0x354E70u) {
        ctx->pc = 0x354E74u;
        goto label_354e74;
    }
    ctx->pc = 0x354E6Cu;
    SET_GPR_U32(ctx, 31, 0x354E74u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x354E6Cu, 0x354E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354E74u;
label_354e74:
    // 0x354e74: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x354e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_354e78:
    // 0x354e78: 0x84a40014  lh          $a0, 0x14($a1)
    ctx->pc = 0x354e78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
label_354e7c:
    // 0x354e7c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x354e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_354e80:
    // 0x354e80: 0xa4a30014  sh          $v1, 0x14($a1)
    ctx->pc = 0x354e80u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 3));
label_354e84:
    // 0x354e84: 0x14800062  bnez        $a0, . + 4 + (0x62 << 2)
label_354e88:
    if (ctx->pc == 0x354E88u) {
        ctx->pc = 0x354E8Cu;
        goto label_354e8c;
    }
    ctx->pc = 0x354E84u;
    {
        const bool branch_taken_0x354e84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x354e84) {
            ctx->pc = 0x355010u;
            goto label_355010;
        }
    }
    ctx->pc = 0x354E8Cu;
label_354e8c:
    // 0x354e8c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x354e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_354e90:
    // 0x354e90: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x354e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_354e94:
    // 0x354e94: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x354e94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_354e98:
    // 0x354e98: 0x1000005d  b           . + 4 + (0x5D << 2)
label_354e9c:
    if (ctx->pc == 0x354E9Cu) {
        ctx->pc = 0x354EA0u;
        goto label_354ea0;
    }
    ctx->pc = 0x354E98u;
    {
        const bool branch_taken_0x354e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354e98) {
            ctx->pc = 0x355010u;
            goto label_355010;
        }
    }
    ctx->pc = 0x354EA0u;
label_354ea0:
    // 0x354ea0: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x354ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_354ea4:
    // 0x354ea4: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x354ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_354ea8:
    // 0x354ea8: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x354ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_354eac:
    // 0x354eac: 0x90a7010c  lbu         $a3, 0x10C($a1)
    ctx->pc = 0x354eacu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 268)));
label_354eb0:
    // 0x354eb0: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x354eb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_354eb4:
    // 0x354eb4: 0x84980  sll         $t1, $t0, 6
    ctx->pc = 0x354eb4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
label_354eb8:
    // 0x354eb8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x354eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_354ebc:
    // 0x354ebc: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x354ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_354ec0:
    // 0x354ec0: 0xa92021  addu        $a0, $a1, $t1
    ctx->pc = 0x354ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_354ec4:
    // 0x354ec4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x354ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_354ec8:
    // 0x354ec8: 0x90650002  lbu         $a1, 0x2($v1)
    ctx->pc = 0x354ec8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_354ecc:
    // 0x354ecc: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x354eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_354ed0:
    // 0x354ed0: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x354ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_354ed4:
    // 0x354ed4: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x354ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_354ed8:
    // 0x354ed8: 0x8cc30130  lw          $v1, 0x130($a2)
    ctx->pc = 0x354ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_354edc:
    // 0x354edc: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x354edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_354ee0:
    // 0x354ee0: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x354ee0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_354ee4:
    // 0x354ee4: 0xc0675f8  jal         func_19D7E0
label_354ee8:
    if (ctx->pc == 0x354EE8u) {
        ctx->pc = 0x354EECu;
        goto label_354eec;
    }
    ctx->pc = 0x354EE4u;
    SET_GPR_U32(ctx, 31, 0x354EECu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x354EE4u, 0x354EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354EECu;
label_354eec:
    // 0x354eec: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x354eecu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_354ef0:
    // 0x354ef0: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x354ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_354ef4:
    // 0x354ef4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x354ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_354ef8:
    // 0x354ef8: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x354ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_354efc:
    // 0x354efc: 0x9063010c  lbu         $v1, 0x10C($v1)
    ctx->pc = 0x354efcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 268)));
label_354f00:
    // 0x354f00: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x354f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_354f04:
    // 0x354f04: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x354f04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_354f08:
    // 0x354f08: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x354f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_354f0c:
    // 0x354f0c: 0x8c830134  lw          $v1, 0x134($a0)
    ctx->pc = 0x354f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 308)));
label_354f10:
    // 0x354f10: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x354f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_354f14:
    // 0x354f14: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x354f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_354f18:
    // 0x354f18: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x354f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_354f1c:
    // 0x354f1c: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x354f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_354f20:
    // 0x354f20: 0x9042010c  lbu         $v0, 0x10C($v0)
    ctx->pc = 0x354f20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 268)));
label_354f24:
    // 0x354f24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x354f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_354f28:
    // 0x354f28: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x354f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_354f2c:
    // 0x354f2c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x354f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_354f30:
    // 0x354f30: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x354f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_354f34:
    // 0x354f34: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x354f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_354f38:
    // 0x354f38: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x354f38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_354f3c:
    // 0x354f3c: 0x26070040  addiu       $a3, $s0, 0x40
    ctx->pc = 0x354f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_354f40:
    // 0x354f40: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x354f40u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_354f44:
    // 0x354f44: 0xc0675f8  jal         func_19D7E0
label_354f48:
    if (ctx->pc == 0x354F48u) {
        ctx->pc = 0x354F4Cu;
        goto label_354f4c;
    }
    ctx->pc = 0x354F44u;
    SET_GPR_U32(ctx, 31, 0x354F4Cu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x354F44u, 0x354F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354F4Cu;
label_354f4c:
    // 0x354f4c: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x354f4cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_354f50:
    // 0x354f50: 0x26090150  addiu       $t1, $s0, 0x150
    ctx->pc = 0x354f50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_354f54:
    // 0x354f54: 0x3c043f4c  lui         $a0, 0x3F4C
    ctx->pc = 0x354f54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16204 << 16));
label_354f58:
    // 0x354f58: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x354f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_354f5c:
    // 0x354f5c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x354f5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_354f60:
    // 0x354f60: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x354f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_354f64:
    // 0x354f64: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x354f64u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_354f68:
    // 0x354f68: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x354f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_354f6c:
    // 0x354f6c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x354f6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_354f70:
    // 0x354f70: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x354f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
label_354f74:
    // 0x354f74: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x354f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_354f78:
    // 0x354f78: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x354f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
label_354f7c:
    // 0x354f7c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x354f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_354f80:
    // 0x354f80: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x354f80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_354f84:
    // 0x354f84: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x354f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_354f88:
    // 0x354f88: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x354f88u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_354f8c:
    // 0x354f8c: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x354f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_354f90:
    // 0x354f90: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x354f90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_354f94:
    // 0x354f94: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x354f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_354f98:
    // 0x354f98: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x354f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_354f9c:
    // 0x354f9c: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x354f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
label_354fa0:
    // 0x354fa0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x354fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_354fa4:
    // 0x354fa4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x354fa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_354fa8:
    // 0x354fa8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x354fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_354fac:
    // 0x354fac: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x354facu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_354fb0:
    // 0x354fb0: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x354fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_354fb4:
    // 0x354fb4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x354fb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_354fb8:
    // 0x354fb8: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x354fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
label_354fbc:
    // 0x354fbc: 0xc601012c  lwc1        $f1, 0x12C($s0)
    ctx->pc = 0x354fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_354fc0:
    // 0x354fc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x354fc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354fc4:
    // 0x354fc4: 0x0  nop
    ctx->pc = 0x354fc4u;
    // NOP
label_354fc8:
    // 0x354fc8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x354fc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_354fcc:
    // 0x354fcc: 0x0  nop
    ctx->pc = 0x354fccu;
    // NOP
label_354fd0:
    // 0x354fd0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_354fd4:
    if (ctx->pc == 0x354FD4u) {
        ctx->pc = 0x354FD8u;
        goto label_354fd8;
    }
    ctx->pc = 0x354FD0u;
    {
        const bool branch_taken_0x354fd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x354fd0) {
            ctx->pc = 0x355010u;
            goto label_355010;
        }
    }
    ctx->pc = 0x354FD8u;
label_354fd8:
    // 0x354fd8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x354fd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_354fdc:
    // 0x354fdc: 0x0  nop
    ctx->pc = 0x354fdcu;
    // NOP
label_354fe0:
    // 0x354fe0: 0xe6010128  swc1        $f1, 0x128($s0)
    ctx->pc = 0x354fe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_354fe4:
    // 0x354fe4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x354fe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354fe8:
    // 0x354fe8: 0x0  nop
    ctx->pc = 0x354fe8u;
    // NOP
label_354fec:
    // 0x354fec: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x354fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
label_354ff0:
    // 0x354ff0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x354ff0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_354ff4:
    // 0x354ff4: 0x0  nop
    ctx->pc = 0x354ff4u;
    // NOP
label_354ff8:
    // 0x354ff8: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x354ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
label_354ffc:
    // 0x354ffc: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x354ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_355000:
    // 0x355000: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x355000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_355004:
    // 0x355004: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x355004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_355008:
    // 0x355008: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x355008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_35500c:
    // 0x35500c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x35500cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_355010:
    // 0x355010: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x355010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_355014:
    // 0x355014: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x355014u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_355018:
    // 0x355018: 0x70e08e28  paddub      $s1, $a3, $zero
    ctx->pc = 0x355018u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_35501c:
    // 0x35501c: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x35501cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_355020:
    // 0x355020: 0x1480fafe  bnez        $a0, . + 4 + (-0x502 << 2)
label_355024:
    if (ctx->pc == 0x355024u) {
        ctx->pc = 0x355028u;
        goto label_355028;
    }
    ctx->pc = 0x355020u;
    {
        const bool branch_taken_0x355020 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x355020) {
            ctx->pc = 0x353C1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353c1c;
        }
    }
    ctx->pc = 0x355028u;
label_355028:
    // 0x355028: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x355028u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_35502c:
    // 0x35502c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35502cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_355030:
    // 0x355030: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x355030u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_355034:
    // 0x355034: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x355034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_355038:
    // 0x355038: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x355038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_35503c:
    // 0x35503c: 0x3e00008  jr          $ra
label_355040:
    if (ctx->pc == 0x355040u) {
        ctx->pc = 0x355044u;
        goto label_fallthrough_0x35503c;
    }
    ctx->pc = 0x35503Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35503Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35503c:
    ctx->pc = 0x355044u;
}
