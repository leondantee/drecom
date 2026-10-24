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

// Function: sub_003B0D90
// Address: 0x3b0d90 - 0x3b2d00
void sub_003B0D90_0x3b0d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0D90_0x3b0d90");
#endif

    switch (ctx->pc) {
        case 0x3b0d90u: goto label_3b0d90;
        case 0x3b0d94u: goto label_3b0d94;
        case 0x3b0d98u: goto label_3b0d98;
        case 0x3b0d9cu: goto label_3b0d9c;
        case 0x3b0da0u: goto label_3b0da0;
        case 0x3b0da4u: goto label_3b0da4;
        case 0x3b0da8u: goto label_3b0da8;
        case 0x3b0dacu: goto label_3b0dac;
        case 0x3b0db0u: goto label_3b0db0;
        case 0x3b0db4u: goto label_3b0db4;
        case 0x3b0db8u: goto label_3b0db8;
        case 0x3b0dbcu: goto label_3b0dbc;
        case 0x3b0dc0u: goto label_3b0dc0;
        case 0x3b0dc4u: goto label_3b0dc4;
        case 0x3b0dc8u: goto label_3b0dc8;
        case 0x3b0dccu: goto label_3b0dcc;
        case 0x3b0dd0u: goto label_3b0dd0;
        case 0x3b0dd4u: goto label_3b0dd4;
        case 0x3b0dd8u: goto label_3b0dd8;
        case 0x3b0ddcu: goto label_3b0ddc;
        case 0x3b0de0u: goto label_3b0de0;
        case 0x3b0de4u: goto label_3b0de4;
        case 0x3b0de8u: goto label_3b0de8;
        case 0x3b0decu: goto label_3b0dec;
        case 0x3b0df0u: goto label_3b0df0;
        case 0x3b0df4u: goto label_3b0df4;
        case 0x3b0df8u: goto label_3b0df8;
        case 0x3b0dfcu: goto label_3b0dfc;
        case 0x3b0e00u: goto label_3b0e00;
        case 0x3b0e04u: goto label_3b0e04;
        case 0x3b0e08u: goto label_3b0e08;
        case 0x3b0e0cu: goto label_3b0e0c;
        case 0x3b0e10u: goto label_3b0e10;
        case 0x3b0e14u: goto label_3b0e14;
        case 0x3b0e18u: goto label_3b0e18;
        case 0x3b0e1cu: goto label_3b0e1c;
        case 0x3b0e20u: goto label_3b0e20;
        case 0x3b0e24u: goto label_3b0e24;
        case 0x3b0e28u: goto label_3b0e28;
        case 0x3b0e2cu: goto label_3b0e2c;
        case 0x3b0e30u: goto label_3b0e30;
        case 0x3b0e34u: goto label_3b0e34;
        case 0x3b0e38u: goto label_3b0e38;
        case 0x3b0e3cu: goto label_3b0e3c;
        case 0x3b0e40u: goto label_3b0e40;
        case 0x3b0e44u: goto label_3b0e44;
        case 0x3b0e48u: goto label_3b0e48;
        case 0x3b0e4cu: goto label_3b0e4c;
        case 0x3b0e50u: goto label_3b0e50;
        case 0x3b0e54u: goto label_3b0e54;
        case 0x3b0e58u: goto label_3b0e58;
        case 0x3b0e5cu: goto label_3b0e5c;
        case 0x3b0e60u: goto label_3b0e60;
        case 0x3b0e64u: goto label_3b0e64;
        case 0x3b0e68u: goto label_3b0e68;
        case 0x3b0e6cu: goto label_3b0e6c;
        case 0x3b0e70u: goto label_3b0e70;
        case 0x3b0e74u: goto label_3b0e74;
        case 0x3b0e78u: goto label_3b0e78;
        case 0x3b0e7cu: goto label_3b0e7c;
        case 0x3b0e80u: goto label_3b0e80;
        case 0x3b0e84u: goto label_3b0e84;
        case 0x3b0e88u: goto label_3b0e88;
        case 0x3b0e8cu: goto label_3b0e8c;
        case 0x3b0e90u: goto label_3b0e90;
        case 0x3b0e94u: goto label_3b0e94;
        case 0x3b0e98u: goto label_3b0e98;
        case 0x3b0e9cu: goto label_3b0e9c;
        case 0x3b0ea0u: goto label_3b0ea0;
        case 0x3b0ea4u: goto label_3b0ea4;
        case 0x3b0ea8u: goto label_3b0ea8;
        case 0x3b0eacu: goto label_3b0eac;
        case 0x3b0eb0u: goto label_3b0eb0;
        case 0x3b0eb4u: goto label_3b0eb4;
        case 0x3b0eb8u: goto label_3b0eb8;
        case 0x3b0ebcu: goto label_3b0ebc;
        case 0x3b0ec0u: goto label_3b0ec0;
        case 0x3b0ec4u: goto label_3b0ec4;
        case 0x3b0ec8u: goto label_3b0ec8;
        case 0x3b0eccu: goto label_3b0ecc;
        case 0x3b0ed0u: goto label_3b0ed0;
        case 0x3b0ed4u: goto label_3b0ed4;
        case 0x3b0ed8u: goto label_3b0ed8;
        case 0x3b0edcu: goto label_3b0edc;
        case 0x3b0ee0u: goto label_3b0ee0;
        case 0x3b0ee4u: goto label_3b0ee4;
        case 0x3b0ee8u: goto label_3b0ee8;
        case 0x3b0eecu: goto label_3b0eec;
        case 0x3b0ef0u: goto label_3b0ef0;
        case 0x3b0ef4u: goto label_3b0ef4;
        case 0x3b0ef8u: goto label_3b0ef8;
        case 0x3b0efcu: goto label_3b0efc;
        case 0x3b0f00u: goto label_3b0f00;
        case 0x3b0f04u: goto label_3b0f04;
        case 0x3b0f08u: goto label_3b0f08;
        case 0x3b0f0cu: goto label_3b0f0c;
        case 0x3b0f10u: goto label_3b0f10;
        case 0x3b0f14u: goto label_3b0f14;
        case 0x3b0f18u: goto label_3b0f18;
        case 0x3b0f1cu: goto label_3b0f1c;
        case 0x3b0f20u: goto label_3b0f20;
        case 0x3b0f24u: goto label_3b0f24;
        case 0x3b0f28u: goto label_3b0f28;
        case 0x3b0f2cu: goto label_3b0f2c;
        case 0x3b0f30u: goto label_3b0f30;
        case 0x3b0f34u: goto label_3b0f34;
        case 0x3b0f38u: goto label_3b0f38;
        case 0x3b0f3cu: goto label_3b0f3c;
        case 0x3b0f40u: goto label_3b0f40;
        case 0x3b0f44u: goto label_3b0f44;
        case 0x3b0f48u: goto label_3b0f48;
        case 0x3b0f4cu: goto label_3b0f4c;
        case 0x3b0f50u: goto label_3b0f50;
        case 0x3b0f54u: goto label_3b0f54;
        case 0x3b0f58u: goto label_3b0f58;
        case 0x3b0f5cu: goto label_3b0f5c;
        case 0x3b0f60u: goto label_3b0f60;
        case 0x3b0f64u: goto label_3b0f64;
        case 0x3b0f68u: goto label_3b0f68;
        case 0x3b0f6cu: goto label_3b0f6c;
        case 0x3b0f70u: goto label_3b0f70;
        case 0x3b0f74u: goto label_3b0f74;
        case 0x3b0f78u: goto label_3b0f78;
        case 0x3b0f7cu: goto label_3b0f7c;
        case 0x3b0f80u: goto label_3b0f80;
        case 0x3b0f84u: goto label_3b0f84;
        case 0x3b0f88u: goto label_3b0f88;
        case 0x3b0f8cu: goto label_3b0f8c;
        case 0x3b0f90u: goto label_3b0f90;
        case 0x3b0f94u: goto label_3b0f94;
        case 0x3b0f98u: goto label_3b0f98;
        case 0x3b0f9cu: goto label_3b0f9c;
        case 0x3b0fa0u: goto label_3b0fa0;
        case 0x3b0fa4u: goto label_3b0fa4;
        case 0x3b0fa8u: goto label_3b0fa8;
        case 0x3b0facu: goto label_3b0fac;
        case 0x3b0fb0u: goto label_3b0fb0;
        case 0x3b0fb4u: goto label_3b0fb4;
        case 0x3b0fb8u: goto label_3b0fb8;
        case 0x3b0fbcu: goto label_3b0fbc;
        case 0x3b0fc0u: goto label_3b0fc0;
        case 0x3b0fc4u: goto label_3b0fc4;
        case 0x3b0fc8u: goto label_3b0fc8;
        case 0x3b0fccu: goto label_3b0fcc;
        case 0x3b0fd0u: goto label_3b0fd0;
        case 0x3b0fd4u: goto label_3b0fd4;
        case 0x3b0fd8u: goto label_3b0fd8;
        case 0x3b0fdcu: goto label_3b0fdc;
        case 0x3b0fe0u: goto label_3b0fe0;
        case 0x3b0fe4u: goto label_3b0fe4;
        case 0x3b0fe8u: goto label_3b0fe8;
        case 0x3b0fecu: goto label_3b0fec;
        case 0x3b0ff0u: goto label_3b0ff0;
        case 0x3b0ff4u: goto label_3b0ff4;
        case 0x3b0ff8u: goto label_3b0ff8;
        case 0x3b0ffcu: goto label_3b0ffc;
        case 0x3b1000u: goto label_3b1000;
        case 0x3b1004u: goto label_3b1004;
        case 0x3b1008u: goto label_3b1008;
        case 0x3b100cu: goto label_3b100c;
        case 0x3b1010u: goto label_3b1010;
        case 0x3b1014u: goto label_3b1014;
        case 0x3b1018u: goto label_3b1018;
        case 0x3b101cu: goto label_3b101c;
        case 0x3b1020u: goto label_3b1020;
        case 0x3b1024u: goto label_3b1024;
        case 0x3b1028u: goto label_3b1028;
        case 0x3b102cu: goto label_3b102c;
        case 0x3b1030u: goto label_3b1030;
        case 0x3b1034u: goto label_3b1034;
        case 0x3b1038u: goto label_3b1038;
        case 0x3b103cu: goto label_3b103c;
        case 0x3b1040u: goto label_3b1040;
        case 0x3b1044u: goto label_3b1044;
        case 0x3b1048u: goto label_3b1048;
        case 0x3b104cu: goto label_3b104c;
        case 0x3b1050u: goto label_3b1050;
        case 0x3b1054u: goto label_3b1054;
        case 0x3b1058u: goto label_3b1058;
        case 0x3b105cu: goto label_3b105c;
        case 0x3b1060u: goto label_3b1060;
        case 0x3b1064u: goto label_3b1064;
        case 0x3b1068u: goto label_3b1068;
        case 0x3b106cu: goto label_3b106c;
        case 0x3b1070u: goto label_3b1070;
        case 0x3b1074u: goto label_3b1074;
        case 0x3b1078u: goto label_3b1078;
        case 0x3b107cu: goto label_3b107c;
        case 0x3b1080u: goto label_3b1080;
        case 0x3b1084u: goto label_3b1084;
        case 0x3b1088u: goto label_3b1088;
        case 0x3b108cu: goto label_3b108c;
        case 0x3b1090u: goto label_3b1090;
        case 0x3b1094u: goto label_3b1094;
        case 0x3b1098u: goto label_3b1098;
        case 0x3b109cu: goto label_3b109c;
        case 0x3b10a0u: goto label_3b10a0;
        case 0x3b10a4u: goto label_3b10a4;
        case 0x3b10a8u: goto label_3b10a8;
        case 0x3b10acu: goto label_3b10ac;
        case 0x3b10b0u: goto label_3b10b0;
        case 0x3b10b4u: goto label_3b10b4;
        case 0x3b10b8u: goto label_3b10b8;
        case 0x3b10bcu: goto label_3b10bc;
        case 0x3b10c0u: goto label_3b10c0;
        case 0x3b10c4u: goto label_3b10c4;
        case 0x3b10c8u: goto label_3b10c8;
        case 0x3b10ccu: goto label_3b10cc;
        case 0x3b10d0u: goto label_3b10d0;
        case 0x3b10d4u: goto label_3b10d4;
        case 0x3b10d8u: goto label_3b10d8;
        case 0x3b10dcu: goto label_3b10dc;
        case 0x3b10e0u: goto label_3b10e0;
        case 0x3b10e4u: goto label_3b10e4;
        case 0x3b10e8u: goto label_3b10e8;
        case 0x3b10ecu: goto label_3b10ec;
        case 0x3b10f0u: goto label_3b10f0;
        case 0x3b10f4u: goto label_3b10f4;
        case 0x3b10f8u: goto label_3b10f8;
        case 0x3b10fcu: goto label_3b10fc;
        case 0x3b1100u: goto label_3b1100;
        case 0x3b1104u: goto label_3b1104;
        case 0x3b1108u: goto label_3b1108;
        case 0x3b110cu: goto label_3b110c;
        case 0x3b1110u: goto label_3b1110;
        case 0x3b1114u: goto label_3b1114;
        case 0x3b1118u: goto label_3b1118;
        case 0x3b111cu: goto label_3b111c;
        case 0x3b1120u: goto label_3b1120;
        case 0x3b1124u: goto label_3b1124;
        case 0x3b1128u: goto label_3b1128;
        case 0x3b112cu: goto label_3b112c;
        case 0x3b1130u: goto label_3b1130;
        case 0x3b1134u: goto label_3b1134;
        case 0x3b1138u: goto label_3b1138;
        case 0x3b113cu: goto label_3b113c;
        case 0x3b1140u: goto label_3b1140;
        case 0x3b1144u: goto label_3b1144;
        case 0x3b1148u: goto label_3b1148;
        case 0x3b114cu: goto label_3b114c;
        case 0x3b1150u: goto label_3b1150;
        case 0x3b1154u: goto label_3b1154;
        case 0x3b1158u: goto label_3b1158;
        case 0x3b115cu: goto label_3b115c;
        case 0x3b1160u: goto label_3b1160;
        case 0x3b1164u: goto label_3b1164;
        case 0x3b1168u: goto label_3b1168;
        case 0x3b116cu: goto label_3b116c;
        case 0x3b1170u: goto label_3b1170;
        case 0x3b1174u: goto label_3b1174;
        case 0x3b1178u: goto label_3b1178;
        case 0x3b117cu: goto label_3b117c;
        case 0x3b1180u: goto label_3b1180;
        case 0x3b1184u: goto label_3b1184;
        case 0x3b1188u: goto label_3b1188;
        case 0x3b118cu: goto label_3b118c;
        case 0x3b1190u: goto label_3b1190;
        case 0x3b1194u: goto label_3b1194;
        case 0x3b1198u: goto label_3b1198;
        case 0x3b119cu: goto label_3b119c;
        case 0x3b11a0u: goto label_3b11a0;
        case 0x3b11a4u: goto label_3b11a4;
        case 0x3b11a8u: goto label_3b11a8;
        case 0x3b11acu: goto label_3b11ac;
        case 0x3b11b0u: goto label_3b11b0;
        case 0x3b11b4u: goto label_3b11b4;
        case 0x3b11b8u: goto label_3b11b8;
        case 0x3b11bcu: goto label_3b11bc;
        case 0x3b11c0u: goto label_3b11c0;
        case 0x3b11c4u: goto label_3b11c4;
        case 0x3b11c8u: goto label_3b11c8;
        case 0x3b11ccu: goto label_3b11cc;
        case 0x3b11d0u: goto label_3b11d0;
        case 0x3b11d4u: goto label_3b11d4;
        case 0x3b11d8u: goto label_3b11d8;
        case 0x3b11dcu: goto label_3b11dc;
        case 0x3b11e0u: goto label_3b11e0;
        case 0x3b11e4u: goto label_3b11e4;
        case 0x3b11e8u: goto label_3b11e8;
        case 0x3b11ecu: goto label_3b11ec;
        case 0x3b11f0u: goto label_3b11f0;
        case 0x3b11f4u: goto label_3b11f4;
        case 0x3b11f8u: goto label_3b11f8;
        case 0x3b11fcu: goto label_3b11fc;
        case 0x3b1200u: goto label_3b1200;
        case 0x3b1204u: goto label_3b1204;
        case 0x3b1208u: goto label_3b1208;
        case 0x3b120cu: goto label_3b120c;
        case 0x3b1210u: goto label_3b1210;
        case 0x3b1214u: goto label_3b1214;
        case 0x3b1218u: goto label_3b1218;
        case 0x3b121cu: goto label_3b121c;
        case 0x3b1220u: goto label_3b1220;
        case 0x3b1224u: goto label_3b1224;
        case 0x3b1228u: goto label_3b1228;
        case 0x3b122cu: goto label_3b122c;
        case 0x3b1230u: goto label_3b1230;
        case 0x3b1234u: goto label_3b1234;
        case 0x3b1238u: goto label_3b1238;
        case 0x3b123cu: goto label_3b123c;
        case 0x3b1240u: goto label_3b1240;
        case 0x3b1244u: goto label_3b1244;
        case 0x3b1248u: goto label_3b1248;
        case 0x3b124cu: goto label_3b124c;
        case 0x3b1250u: goto label_3b1250;
        case 0x3b1254u: goto label_3b1254;
        case 0x3b1258u: goto label_3b1258;
        case 0x3b125cu: goto label_3b125c;
        case 0x3b1260u: goto label_3b1260;
        case 0x3b1264u: goto label_3b1264;
        case 0x3b1268u: goto label_3b1268;
        case 0x3b126cu: goto label_3b126c;
        case 0x3b1270u: goto label_3b1270;
        case 0x3b1274u: goto label_3b1274;
        case 0x3b1278u: goto label_3b1278;
        case 0x3b127cu: goto label_3b127c;
        case 0x3b1280u: goto label_3b1280;
        case 0x3b1284u: goto label_3b1284;
        case 0x3b1288u: goto label_3b1288;
        case 0x3b128cu: goto label_3b128c;
        case 0x3b1290u: goto label_3b1290;
        case 0x3b1294u: goto label_3b1294;
        case 0x3b1298u: goto label_3b1298;
        case 0x3b129cu: goto label_3b129c;
        case 0x3b12a0u: goto label_3b12a0;
        case 0x3b12a4u: goto label_3b12a4;
        case 0x3b12a8u: goto label_3b12a8;
        case 0x3b12acu: goto label_3b12ac;
        case 0x3b12b0u: goto label_3b12b0;
        case 0x3b12b4u: goto label_3b12b4;
        case 0x3b12b8u: goto label_3b12b8;
        case 0x3b12bcu: goto label_3b12bc;
        case 0x3b12c0u: goto label_3b12c0;
        case 0x3b12c4u: goto label_3b12c4;
        case 0x3b12c8u: goto label_3b12c8;
        case 0x3b12ccu: goto label_3b12cc;
        case 0x3b12d0u: goto label_3b12d0;
        case 0x3b12d4u: goto label_3b12d4;
        case 0x3b12d8u: goto label_3b12d8;
        case 0x3b12dcu: goto label_3b12dc;
        case 0x3b12e0u: goto label_3b12e0;
        case 0x3b12e4u: goto label_3b12e4;
        case 0x3b12e8u: goto label_3b12e8;
        case 0x3b12ecu: goto label_3b12ec;
        case 0x3b12f0u: goto label_3b12f0;
        case 0x3b12f4u: goto label_3b12f4;
        case 0x3b12f8u: goto label_3b12f8;
        case 0x3b12fcu: goto label_3b12fc;
        case 0x3b1300u: goto label_3b1300;
        case 0x3b1304u: goto label_3b1304;
        case 0x3b1308u: goto label_3b1308;
        case 0x3b130cu: goto label_3b130c;
        case 0x3b1310u: goto label_3b1310;
        case 0x3b1314u: goto label_3b1314;
        case 0x3b1318u: goto label_3b1318;
        case 0x3b131cu: goto label_3b131c;
        case 0x3b1320u: goto label_3b1320;
        case 0x3b1324u: goto label_3b1324;
        case 0x3b1328u: goto label_3b1328;
        case 0x3b132cu: goto label_3b132c;
        case 0x3b1330u: goto label_3b1330;
        case 0x3b1334u: goto label_3b1334;
        case 0x3b1338u: goto label_3b1338;
        case 0x3b133cu: goto label_3b133c;
        case 0x3b1340u: goto label_3b1340;
        case 0x3b1344u: goto label_3b1344;
        case 0x3b1348u: goto label_3b1348;
        case 0x3b134cu: goto label_3b134c;
        case 0x3b1350u: goto label_3b1350;
        case 0x3b1354u: goto label_3b1354;
        case 0x3b1358u: goto label_3b1358;
        case 0x3b135cu: goto label_3b135c;
        case 0x3b1360u: goto label_3b1360;
        case 0x3b1364u: goto label_3b1364;
        case 0x3b1368u: goto label_3b1368;
        case 0x3b136cu: goto label_3b136c;
        case 0x3b1370u: goto label_3b1370;
        case 0x3b1374u: goto label_3b1374;
        case 0x3b1378u: goto label_3b1378;
        case 0x3b137cu: goto label_3b137c;
        case 0x3b1380u: goto label_3b1380;
        case 0x3b1384u: goto label_3b1384;
        case 0x3b1388u: goto label_3b1388;
        case 0x3b138cu: goto label_3b138c;
        case 0x3b1390u: goto label_3b1390;
        case 0x3b1394u: goto label_3b1394;
        case 0x3b1398u: goto label_3b1398;
        case 0x3b139cu: goto label_3b139c;
        case 0x3b13a0u: goto label_3b13a0;
        case 0x3b13a4u: goto label_3b13a4;
        case 0x3b13a8u: goto label_3b13a8;
        case 0x3b13acu: goto label_3b13ac;
        case 0x3b13b0u: goto label_3b13b0;
        case 0x3b13b4u: goto label_3b13b4;
        case 0x3b13b8u: goto label_3b13b8;
        case 0x3b13bcu: goto label_3b13bc;
        case 0x3b13c0u: goto label_3b13c0;
        case 0x3b13c4u: goto label_3b13c4;
        case 0x3b13c8u: goto label_3b13c8;
        case 0x3b13ccu: goto label_3b13cc;
        case 0x3b13d0u: goto label_3b13d0;
        case 0x3b13d4u: goto label_3b13d4;
        case 0x3b13d8u: goto label_3b13d8;
        case 0x3b13dcu: goto label_3b13dc;
        case 0x3b13e0u: goto label_3b13e0;
        case 0x3b13e4u: goto label_3b13e4;
        case 0x3b13e8u: goto label_3b13e8;
        case 0x3b13ecu: goto label_3b13ec;
        case 0x3b13f0u: goto label_3b13f0;
        case 0x3b13f4u: goto label_3b13f4;
        case 0x3b13f8u: goto label_3b13f8;
        case 0x3b13fcu: goto label_3b13fc;
        case 0x3b1400u: goto label_3b1400;
        case 0x3b1404u: goto label_3b1404;
        case 0x3b1408u: goto label_3b1408;
        case 0x3b140cu: goto label_3b140c;
        case 0x3b1410u: goto label_3b1410;
        case 0x3b1414u: goto label_3b1414;
        case 0x3b1418u: goto label_3b1418;
        case 0x3b141cu: goto label_3b141c;
        case 0x3b1420u: goto label_3b1420;
        case 0x3b1424u: goto label_3b1424;
        case 0x3b1428u: goto label_3b1428;
        case 0x3b142cu: goto label_3b142c;
        case 0x3b1430u: goto label_3b1430;
        case 0x3b1434u: goto label_3b1434;
        case 0x3b1438u: goto label_3b1438;
        case 0x3b143cu: goto label_3b143c;
        case 0x3b1440u: goto label_3b1440;
        case 0x3b1444u: goto label_3b1444;
        case 0x3b1448u: goto label_3b1448;
        case 0x3b144cu: goto label_3b144c;
        case 0x3b1450u: goto label_3b1450;
        case 0x3b1454u: goto label_3b1454;
        case 0x3b1458u: goto label_3b1458;
        case 0x3b145cu: goto label_3b145c;
        case 0x3b1460u: goto label_3b1460;
        case 0x3b1464u: goto label_3b1464;
        case 0x3b1468u: goto label_3b1468;
        case 0x3b146cu: goto label_3b146c;
        case 0x3b1470u: goto label_3b1470;
        case 0x3b1474u: goto label_3b1474;
        case 0x3b1478u: goto label_3b1478;
        case 0x3b147cu: goto label_3b147c;
        case 0x3b1480u: goto label_3b1480;
        case 0x3b1484u: goto label_3b1484;
        case 0x3b1488u: goto label_3b1488;
        case 0x3b148cu: goto label_3b148c;
        case 0x3b1490u: goto label_3b1490;
        case 0x3b1494u: goto label_3b1494;
        case 0x3b1498u: goto label_3b1498;
        case 0x3b149cu: goto label_3b149c;
        case 0x3b14a0u: goto label_3b14a0;
        case 0x3b14a4u: goto label_3b14a4;
        case 0x3b14a8u: goto label_3b14a8;
        case 0x3b14acu: goto label_3b14ac;
        case 0x3b14b0u: goto label_3b14b0;
        case 0x3b14b4u: goto label_3b14b4;
        case 0x3b14b8u: goto label_3b14b8;
        case 0x3b14bcu: goto label_3b14bc;
        case 0x3b14c0u: goto label_3b14c0;
        case 0x3b14c4u: goto label_3b14c4;
        case 0x3b14c8u: goto label_3b14c8;
        case 0x3b14ccu: goto label_3b14cc;
        case 0x3b14d0u: goto label_3b14d0;
        case 0x3b14d4u: goto label_3b14d4;
        case 0x3b14d8u: goto label_3b14d8;
        case 0x3b14dcu: goto label_3b14dc;
        case 0x3b14e0u: goto label_3b14e0;
        case 0x3b14e4u: goto label_3b14e4;
        case 0x3b14e8u: goto label_3b14e8;
        case 0x3b14ecu: goto label_3b14ec;
        case 0x3b14f0u: goto label_3b14f0;
        case 0x3b14f4u: goto label_3b14f4;
        case 0x3b14f8u: goto label_3b14f8;
        case 0x3b14fcu: goto label_3b14fc;
        case 0x3b1500u: goto label_3b1500;
        case 0x3b1504u: goto label_3b1504;
        case 0x3b1508u: goto label_3b1508;
        case 0x3b150cu: goto label_3b150c;
        case 0x3b1510u: goto label_3b1510;
        case 0x3b1514u: goto label_3b1514;
        case 0x3b1518u: goto label_3b1518;
        case 0x3b151cu: goto label_3b151c;
        case 0x3b1520u: goto label_3b1520;
        case 0x3b1524u: goto label_3b1524;
        case 0x3b1528u: goto label_3b1528;
        case 0x3b152cu: goto label_3b152c;
        case 0x3b1530u: goto label_3b1530;
        case 0x3b1534u: goto label_3b1534;
        case 0x3b1538u: goto label_3b1538;
        case 0x3b153cu: goto label_3b153c;
        case 0x3b1540u: goto label_3b1540;
        case 0x3b1544u: goto label_3b1544;
        case 0x3b1548u: goto label_3b1548;
        case 0x3b154cu: goto label_3b154c;
        case 0x3b1550u: goto label_3b1550;
        case 0x3b1554u: goto label_3b1554;
        case 0x3b1558u: goto label_3b1558;
        case 0x3b155cu: goto label_3b155c;
        case 0x3b1560u: goto label_3b1560;
        case 0x3b1564u: goto label_3b1564;
        case 0x3b1568u: goto label_3b1568;
        case 0x3b156cu: goto label_3b156c;
        case 0x3b1570u: goto label_3b1570;
        case 0x3b1574u: goto label_3b1574;
        case 0x3b1578u: goto label_3b1578;
        case 0x3b157cu: goto label_3b157c;
        case 0x3b1580u: goto label_3b1580;
        case 0x3b1584u: goto label_3b1584;
        case 0x3b1588u: goto label_3b1588;
        case 0x3b158cu: goto label_3b158c;
        case 0x3b1590u: goto label_3b1590;
        case 0x3b1594u: goto label_3b1594;
        case 0x3b1598u: goto label_3b1598;
        case 0x3b159cu: goto label_3b159c;
        case 0x3b15a0u: goto label_3b15a0;
        case 0x3b15a4u: goto label_3b15a4;
        case 0x3b15a8u: goto label_3b15a8;
        case 0x3b15acu: goto label_3b15ac;
        case 0x3b15b0u: goto label_3b15b0;
        case 0x3b15b4u: goto label_3b15b4;
        case 0x3b15b8u: goto label_3b15b8;
        case 0x3b15bcu: goto label_3b15bc;
        case 0x3b15c0u: goto label_3b15c0;
        case 0x3b15c4u: goto label_3b15c4;
        case 0x3b15c8u: goto label_3b15c8;
        case 0x3b15ccu: goto label_3b15cc;
        case 0x3b15d0u: goto label_3b15d0;
        case 0x3b15d4u: goto label_3b15d4;
        case 0x3b15d8u: goto label_3b15d8;
        case 0x3b15dcu: goto label_3b15dc;
        case 0x3b15e0u: goto label_3b15e0;
        case 0x3b15e4u: goto label_3b15e4;
        case 0x3b15e8u: goto label_3b15e8;
        case 0x3b15ecu: goto label_3b15ec;
        case 0x3b15f0u: goto label_3b15f0;
        case 0x3b15f4u: goto label_3b15f4;
        case 0x3b15f8u: goto label_3b15f8;
        case 0x3b15fcu: goto label_3b15fc;
        case 0x3b1600u: goto label_3b1600;
        case 0x3b1604u: goto label_3b1604;
        case 0x3b1608u: goto label_3b1608;
        case 0x3b160cu: goto label_3b160c;
        case 0x3b1610u: goto label_3b1610;
        case 0x3b1614u: goto label_3b1614;
        case 0x3b1618u: goto label_3b1618;
        case 0x3b161cu: goto label_3b161c;
        case 0x3b1620u: goto label_3b1620;
        case 0x3b1624u: goto label_3b1624;
        case 0x3b1628u: goto label_3b1628;
        case 0x3b162cu: goto label_3b162c;
        case 0x3b1630u: goto label_3b1630;
        case 0x3b1634u: goto label_3b1634;
        case 0x3b1638u: goto label_3b1638;
        case 0x3b163cu: goto label_3b163c;
        case 0x3b1640u: goto label_3b1640;
        case 0x3b1644u: goto label_3b1644;
        case 0x3b1648u: goto label_3b1648;
        case 0x3b164cu: goto label_3b164c;
        case 0x3b1650u: goto label_3b1650;
        case 0x3b1654u: goto label_3b1654;
        case 0x3b1658u: goto label_3b1658;
        case 0x3b165cu: goto label_3b165c;
        case 0x3b1660u: goto label_3b1660;
        case 0x3b1664u: goto label_3b1664;
        case 0x3b1668u: goto label_3b1668;
        case 0x3b166cu: goto label_3b166c;
        case 0x3b1670u: goto label_3b1670;
        case 0x3b1674u: goto label_3b1674;
        case 0x3b1678u: goto label_3b1678;
        case 0x3b167cu: goto label_3b167c;
        case 0x3b1680u: goto label_3b1680;
        case 0x3b1684u: goto label_3b1684;
        case 0x3b1688u: goto label_3b1688;
        case 0x3b168cu: goto label_3b168c;
        case 0x3b1690u: goto label_3b1690;
        case 0x3b1694u: goto label_3b1694;
        case 0x3b1698u: goto label_3b1698;
        case 0x3b169cu: goto label_3b169c;
        case 0x3b16a0u: goto label_3b16a0;
        case 0x3b16a4u: goto label_3b16a4;
        case 0x3b16a8u: goto label_3b16a8;
        case 0x3b16acu: goto label_3b16ac;
        case 0x3b16b0u: goto label_3b16b0;
        case 0x3b16b4u: goto label_3b16b4;
        case 0x3b16b8u: goto label_3b16b8;
        case 0x3b16bcu: goto label_3b16bc;
        case 0x3b16c0u: goto label_3b16c0;
        case 0x3b16c4u: goto label_3b16c4;
        case 0x3b16c8u: goto label_3b16c8;
        case 0x3b16ccu: goto label_3b16cc;
        case 0x3b16d0u: goto label_3b16d0;
        case 0x3b16d4u: goto label_3b16d4;
        case 0x3b16d8u: goto label_3b16d8;
        case 0x3b16dcu: goto label_3b16dc;
        case 0x3b16e0u: goto label_3b16e0;
        case 0x3b16e4u: goto label_3b16e4;
        case 0x3b16e8u: goto label_3b16e8;
        case 0x3b16ecu: goto label_3b16ec;
        case 0x3b16f0u: goto label_3b16f0;
        case 0x3b16f4u: goto label_3b16f4;
        case 0x3b16f8u: goto label_3b16f8;
        case 0x3b16fcu: goto label_3b16fc;
        case 0x3b1700u: goto label_3b1700;
        case 0x3b1704u: goto label_3b1704;
        case 0x3b1708u: goto label_3b1708;
        case 0x3b170cu: goto label_3b170c;
        case 0x3b1710u: goto label_3b1710;
        case 0x3b1714u: goto label_3b1714;
        case 0x3b1718u: goto label_3b1718;
        case 0x3b171cu: goto label_3b171c;
        case 0x3b1720u: goto label_3b1720;
        case 0x3b1724u: goto label_3b1724;
        case 0x3b1728u: goto label_3b1728;
        case 0x3b172cu: goto label_3b172c;
        case 0x3b1730u: goto label_3b1730;
        case 0x3b1734u: goto label_3b1734;
        case 0x3b1738u: goto label_3b1738;
        case 0x3b173cu: goto label_3b173c;
        case 0x3b1740u: goto label_3b1740;
        case 0x3b1744u: goto label_3b1744;
        case 0x3b1748u: goto label_3b1748;
        case 0x3b174cu: goto label_3b174c;
        case 0x3b1750u: goto label_3b1750;
        case 0x3b1754u: goto label_3b1754;
        case 0x3b1758u: goto label_3b1758;
        case 0x3b175cu: goto label_3b175c;
        case 0x3b1760u: goto label_3b1760;
        case 0x3b1764u: goto label_3b1764;
        case 0x3b1768u: goto label_3b1768;
        case 0x3b176cu: goto label_3b176c;
        case 0x3b1770u: goto label_3b1770;
        case 0x3b1774u: goto label_3b1774;
        case 0x3b1778u: goto label_3b1778;
        case 0x3b177cu: goto label_3b177c;
        case 0x3b1780u: goto label_3b1780;
        case 0x3b1784u: goto label_3b1784;
        case 0x3b1788u: goto label_3b1788;
        case 0x3b178cu: goto label_3b178c;
        case 0x3b1790u: goto label_3b1790;
        case 0x3b1794u: goto label_3b1794;
        case 0x3b1798u: goto label_3b1798;
        case 0x3b179cu: goto label_3b179c;
        case 0x3b17a0u: goto label_3b17a0;
        case 0x3b17a4u: goto label_3b17a4;
        case 0x3b17a8u: goto label_3b17a8;
        case 0x3b17acu: goto label_3b17ac;
        case 0x3b17b0u: goto label_3b17b0;
        case 0x3b17b4u: goto label_3b17b4;
        case 0x3b17b8u: goto label_3b17b8;
        case 0x3b17bcu: goto label_3b17bc;
        case 0x3b17c0u: goto label_3b17c0;
        case 0x3b17c4u: goto label_3b17c4;
        case 0x3b17c8u: goto label_3b17c8;
        case 0x3b17ccu: goto label_3b17cc;
        case 0x3b17d0u: goto label_3b17d0;
        case 0x3b17d4u: goto label_3b17d4;
        case 0x3b17d8u: goto label_3b17d8;
        case 0x3b17dcu: goto label_3b17dc;
        case 0x3b17e0u: goto label_3b17e0;
        case 0x3b17e4u: goto label_3b17e4;
        case 0x3b17e8u: goto label_3b17e8;
        case 0x3b17ecu: goto label_3b17ec;
        case 0x3b17f0u: goto label_3b17f0;
        case 0x3b17f4u: goto label_3b17f4;
        case 0x3b17f8u: goto label_3b17f8;
        case 0x3b17fcu: goto label_3b17fc;
        case 0x3b1800u: goto label_3b1800;
        case 0x3b1804u: goto label_3b1804;
        case 0x3b1808u: goto label_3b1808;
        case 0x3b180cu: goto label_3b180c;
        case 0x3b1810u: goto label_3b1810;
        case 0x3b1814u: goto label_3b1814;
        case 0x3b1818u: goto label_3b1818;
        case 0x3b181cu: goto label_3b181c;
        case 0x3b1820u: goto label_3b1820;
        case 0x3b1824u: goto label_3b1824;
        case 0x3b1828u: goto label_3b1828;
        case 0x3b182cu: goto label_3b182c;
        case 0x3b1830u: goto label_3b1830;
        case 0x3b1834u: goto label_3b1834;
        case 0x3b1838u: goto label_3b1838;
        case 0x3b183cu: goto label_3b183c;
        case 0x3b1840u: goto label_3b1840;
        case 0x3b1844u: goto label_3b1844;
        case 0x3b1848u: goto label_3b1848;
        case 0x3b184cu: goto label_3b184c;
        case 0x3b1850u: goto label_3b1850;
        case 0x3b1854u: goto label_3b1854;
        case 0x3b1858u: goto label_3b1858;
        case 0x3b185cu: goto label_3b185c;
        case 0x3b1860u: goto label_3b1860;
        case 0x3b1864u: goto label_3b1864;
        case 0x3b1868u: goto label_3b1868;
        case 0x3b186cu: goto label_3b186c;
        case 0x3b1870u: goto label_3b1870;
        case 0x3b1874u: goto label_3b1874;
        case 0x3b1878u: goto label_3b1878;
        case 0x3b187cu: goto label_3b187c;
        case 0x3b1880u: goto label_3b1880;
        case 0x3b1884u: goto label_3b1884;
        case 0x3b1888u: goto label_3b1888;
        case 0x3b188cu: goto label_3b188c;
        case 0x3b1890u: goto label_3b1890;
        case 0x3b1894u: goto label_3b1894;
        case 0x3b1898u: goto label_3b1898;
        case 0x3b189cu: goto label_3b189c;
        case 0x3b18a0u: goto label_3b18a0;
        case 0x3b18a4u: goto label_3b18a4;
        case 0x3b18a8u: goto label_3b18a8;
        case 0x3b18acu: goto label_3b18ac;
        case 0x3b18b0u: goto label_3b18b0;
        case 0x3b18b4u: goto label_3b18b4;
        case 0x3b18b8u: goto label_3b18b8;
        case 0x3b18bcu: goto label_3b18bc;
        case 0x3b18c0u: goto label_3b18c0;
        case 0x3b18c4u: goto label_3b18c4;
        case 0x3b18c8u: goto label_3b18c8;
        case 0x3b18ccu: goto label_3b18cc;
        case 0x3b18d0u: goto label_3b18d0;
        case 0x3b18d4u: goto label_3b18d4;
        case 0x3b18d8u: goto label_3b18d8;
        case 0x3b18dcu: goto label_3b18dc;
        case 0x3b18e0u: goto label_3b18e0;
        case 0x3b18e4u: goto label_3b18e4;
        case 0x3b18e8u: goto label_3b18e8;
        case 0x3b18ecu: goto label_3b18ec;
        case 0x3b18f0u: goto label_3b18f0;
        case 0x3b18f4u: goto label_3b18f4;
        case 0x3b18f8u: goto label_3b18f8;
        case 0x3b18fcu: goto label_3b18fc;
        case 0x3b1900u: goto label_3b1900;
        case 0x3b1904u: goto label_3b1904;
        case 0x3b1908u: goto label_3b1908;
        case 0x3b190cu: goto label_3b190c;
        case 0x3b1910u: goto label_3b1910;
        case 0x3b1914u: goto label_3b1914;
        case 0x3b1918u: goto label_3b1918;
        case 0x3b191cu: goto label_3b191c;
        case 0x3b1920u: goto label_3b1920;
        case 0x3b1924u: goto label_3b1924;
        case 0x3b1928u: goto label_3b1928;
        case 0x3b192cu: goto label_3b192c;
        case 0x3b1930u: goto label_3b1930;
        case 0x3b1934u: goto label_3b1934;
        case 0x3b1938u: goto label_3b1938;
        case 0x3b193cu: goto label_3b193c;
        case 0x3b1940u: goto label_3b1940;
        case 0x3b1944u: goto label_3b1944;
        case 0x3b1948u: goto label_3b1948;
        case 0x3b194cu: goto label_3b194c;
        case 0x3b1950u: goto label_3b1950;
        case 0x3b1954u: goto label_3b1954;
        case 0x3b1958u: goto label_3b1958;
        case 0x3b195cu: goto label_3b195c;
        case 0x3b1960u: goto label_3b1960;
        case 0x3b1964u: goto label_3b1964;
        case 0x3b1968u: goto label_3b1968;
        case 0x3b196cu: goto label_3b196c;
        case 0x3b1970u: goto label_3b1970;
        case 0x3b1974u: goto label_3b1974;
        case 0x3b1978u: goto label_3b1978;
        case 0x3b197cu: goto label_3b197c;
        case 0x3b1980u: goto label_3b1980;
        case 0x3b1984u: goto label_3b1984;
        case 0x3b1988u: goto label_3b1988;
        case 0x3b198cu: goto label_3b198c;
        case 0x3b1990u: goto label_3b1990;
        case 0x3b1994u: goto label_3b1994;
        case 0x3b1998u: goto label_3b1998;
        case 0x3b199cu: goto label_3b199c;
        case 0x3b19a0u: goto label_3b19a0;
        case 0x3b19a4u: goto label_3b19a4;
        case 0x3b19a8u: goto label_3b19a8;
        case 0x3b19acu: goto label_3b19ac;
        case 0x3b19b0u: goto label_3b19b0;
        case 0x3b19b4u: goto label_3b19b4;
        case 0x3b19b8u: goto label_3b19b8;
        case 0x3b19bcu: goto label_3b19bc;
        case 0x3b19c0u: goto label_3b19c0;
        case 0x3b19c4u: goto label_3b19c4;
        case 0x3b19c8u: goto label_3b19c8;
        case 0x3b19ccu: goto label_3b19cc;
        case 0x3b19d0u: goto label_3b19d0;
        case 0x3b19d4u: goto label_3b19d4;
        case 0x3b19d8u: goto label_3b19d8;
        case 0x3b19dcu: goto label_3b19dc;
        case 0x3b19e0u: goto label_3b19e0;
        case 0x3b19e4u: goto label_3b19e4;
        case 0x3b19e8u: goto label_3b19e8;
        case 0x3b19ecu: goto label_3b19ec;
        case 0x3b19f0u: goto label_3b19f0;
        case 0x3b19f4u: goto label_3b19f4;
        case 0x3b19f8u: goto label_3b19f8;
        case 0x3b19fcu: goto label_3b19fc;
        case 0x3b1a00u: goto label_3b1a00;
        case 0x3b1a04u: goto label_3b1a04;
        case 0x3b1a08u: goto label_3b1a08;
        case 0x3b1a0cu: goto label_3b1a0c;
        case 0x3b1a10u: goto label_3b1a10;
        case 0x3b1a14u: goto label_3b1a14;
        case 0x3b1a18u: goto label_3b1a18;
        case 0x3b1a1cu: goto label_3b1a1c;
        case 0x3b1a20u: goto label_3b1a20;
        case 0x3b1a24u: goto label_3b1a24;
        case 0x3b1a28u: goto label_3b1a28;
        case 0x3b1a2cu: goto label_3b1a2c;
        case 0x3b1a30u: goto label_3b1a30;
        case 0x3b1a34u: goto label_3b1a34;
        case 0x3b1a38u: goto label_3b1a38;
        case 0x3b1a3cu: goto label_3b1a3c;
        case 0x3b1a40u: goto label_3b1a40;
        case 0x3b1a44u: goto label_3b1a44;
        case 0x3b1a48u: goto label_3b1a48;
        case 0x3b1a4cu: goto label_3b1a4c;
        case 0x3b1a50u: goto label_3b1a50;
        case 0x3b1a54u: goto label_3b1a54;
        case 0x3b1a58u: goto label_3b1a58;
        case 0x3b1a5cu: goto label_3b1a5c;
        case 0x3b1a60u: goto label_3b1a60;
        case 0x3b1a64u: goto label_3b1a64;
        case 0x3b1a68u: goto label_3b1a68;
        case 0x3b1a6cu: goto label_3b1a6c;
        case 0x3b1a70u: goto label_3b1a70;
        case 0x3b1a74u: goto label_3b1a74;
        case 0x3b1a78u: goto label_3b1a78;
        case 0x3b1a7cu: goto label_3b1a7c;
        case 0x3b1a80u: goto label_3b1a80;
        case 0x3b1a84u: goto label_3b1a84;
        case 0x3b1a88u: goto label_3b1a88;
        case 0x3b1a8cu: goto label_3b1a8c;
        case 0x3b1a90u: goto label_3b1a90;
        case 0x3b1a94u: goto label_3b1a94;
        case 0x3b1a98u: goto label_3b1a98;
        case 0x3b1a9cu: goto label_3b1a9c;
        case 0x3b1aa0u: goto label_3b1aa0;
        case 0x3b1aa4u: goto label_3b1aa4;
        case 0x3b1aa8u: goto label_3b1aa8;
        case 0x3b1aacu: goto label_3b1aac;
        case 0x3b1ab0u: goto label_3b1ab0;
        case 0x3b1ab4u: goto label_3b1ab4;
        case 0x3b1ab8u: goto label_3b1ab8;
        case 0x3b1abcu: goto label_3b1abc;
        case 0x3b1ac0u: goto label_3b1ac0;
        case 0x3b1ac4u: goto label_3b1ac4;
        case 0x3b1ac8u: goto label_3b1ac8;
        case 0x3b1accu: goto label_3b1acc;
        case 0x3b1ad0u: goto label_3b1ad0;
        case 0x3b1ad4u: goto label_3b1ad4;
        case 0x3b1ad8u: goto label_3b1ad8;
        case 0x3b1adcu: goto label_3b1adc;
        case 0x3b1ae0u: goto label_3b1ae0;
        case 0x3b1ae4u: goto label_3b1ae4;
        case 0x3b1ae8u: goto label_3b1ae8;
        case 0x3b1aecu: goto label_3b1aec;
        case 0x3b1af0u: goto label_3b1af0;
        case 0x3b1af4u: goto label_3b1af4;
        case 0x3b1af8u: goto label_3b1af8;
        case 0x3b1afcu: goto label_3b1afc;
        case 0x3b1b00u: goto label_3b1b00;
        case 0x3b1b04u: goto label_3b1b04;
        case 0x3b1b08u: goto label_3b1b08;
        case 0x3b1b0cu: goto label_3b1b0c;
        case 0x3b1b10u: goto label_3b1b10;
        case 0x3b1b14u: goto label_3b1b14;
        case 0x3b1b18u: goto label_3b1b18;
        case 0x3b1b1cu: goto label_3b1b1c;
        case 0x3b1b20u: goto label_3b1b20;
        case 0x3b1b24u: goto label_3b1b24;
        case 0x3b1b28u: goto label_3b1b28;
        case 0x3b1b2cu: goto label_3b1b2c;
        case 0x3b1b30u: goto label_3b1b30;
        case 0x3b1b34u: goto label_3b1b34;
        case 0x3b1b38u: goto label_3b1b38;
        case 0x3b1b3cu: goto label_3b1b3c;
        case 0x3b1b40u: goto label_3b1b40;
        case 0x3b1b44u: goto label_3b1b44;
        case 0x3b1b48u: goto label_3b1b48;
        case 0x3b1b4cu: goto label_3b1b4c;
        case 0x3b1b50u: goto label_3b1b50;
        case 0x3b1b54u: goto label_3b1b54;
        case 0x3b1b58u: goto label_3b1b58;
        case 0x3b1b5cu: goto label_3b1b5c;
        case 0x3b1b60u: goto label_3b1b60;
        case 0x3b1b64u: goto label_3b1b64;
        case 0x3b1b68u: goto label_3b1b68;
        case 0x3b1b6cu: goto label_3b1b6c;
        case 0x3b1b70u: goto label_3b1b70;
        case 0x3b1b74u: goto label_3b1b74;
        case 0x3b1b78u: goto label_3b1b78;
        case 0x3b1b7cu: goto label_3b1b7c;
        case 0x3b1b80u: goto label_3b1b80;
        case 0x3b1b84u: goto label_3b1b84;
        case 0x3b1b88u: goto label_3b1b88;
        case 0x3b1b8cu: goto label_3b1b8c;
        case 0x3b1b90u: goto label_3b1b90;
        case 0x3b1b94u: goto label_3b1b94;
        case 0x3b1b98u: goto label_3b1b98;
        case 0x3b1b9cu: goto label_3b1b9c;
        case 0x3b1ba0u: goto label_3b1ba0;
        case 0x3b1ba4u: goto label_3b1ba4;
        case 0x3b1ba8u: goto label_3b1ba8;
        case 0x3b1bacu: goto label_3b1bac;
        case 0x3b1bb0u: goto label_3b1bb0;
        case 0x3b1bb4u: goto label_3b1bb4;
        case 0x3b1bb8u: goto label_3b1bb8;
        case 0x3b1bbcu: goto label_3b1bbc;
        case 0x3b1bc0u: goto label_3b1bc0;
        case 0x3b1bc4u: goto label_3b1bc4;
        case 0x3b1bc8u: goto label_3b1bc8;
        case 0x3b1bccu: goto label_3b1bcc;
        case 0x3b1bd0u: goto label_3b1bd0;
        case 0x3b1bd4u: goto label_3b1bd4;
        case 0x3b1bd8u: goto label_3b1bd8;
        case 0x3b1bdcu: goto label_3b1bdc;
        case 0x3b1be0u: goto label_3b1be0;
        case 0x3b1be4u: goto label_3b1be4;
        case 0x3b1be8u: goto label_3b1be8;
        case 0x3b1becu: goto label_3b1bec;
        case 0x3b1bf0u: goto label_3b1bf0;
        case 0x3b1bf4u: goto label_3b1bf4;
        case 0x3b1bf8u: goto label_3b1bf8;
        case 0x3b1bfcu: goto label_3b1bfc;
        case 0x3b1c00u: goto label_3b1c00;
        case 0x3b1c04u: goto label_3b1c04;
        case 0x3b1c08u: goto label_3b1c08;
        case 0x3b1c0cu: goto label_3b1c0c;
        case 0x3b1c10u: goto label_3b1c10;
        case 0x3b1c14u: goto label_3b1c14;
        case 0x3b1c18u: goto label_3b1c18;
        case 0x3b1c1cu: goto label_3b1c1c;
        case 0x3b1c20u: goto label_3b1c20;
        case 0x3b1c24u: goto label_3b1c24;
        case 0x3b1c28u: goto label_3b1c28;
        case 0x3b1c2cu: goto label_3b1c2c;
        case 0x3b1c30u: goto label_3b1c30;
        case 0x3b1c34u: goto label_3b1c34;
        case 0x3b1c38u: goto label_3b1c38;
        case 0x3b1c3cu: goto label_3b1c3c;
        case 0x3b1c40u: goto label_3b1c40;
        case 0x3b1c44u: goto label_3b1c44;
        case 0x3b1c48u: goto label_3b1c48;
        case 0x3b1c4cu: goto label_3b1c4c;
        case 0x3b1c50u: goto label_3b1c50;
        case 0x3b1c54u: goto label_3b1c54;
        case 0x3b1c58u: goto label_3b1c58;
        case 0x3b1c5cu: goto label_3b1c5c;
        case 0x3b1c60u: goto label_3b1c60;
        case 0x3b1c64u: goto label_3b1c64;
        case 0x3b1c68u: goto label_3b1c68;
        case 0x3b1c6cu: goto label_3b1c6c;
        case 0x3b1c70u: goto label_3b1c70;
        case 0x3b1c74u: goto label_3b1c74;
        case 0x3b1c78u: goto label_3b1c78;
        case 0x3b1c7cu: goto label_3b1c7c;
        case 0x3b1c80u: goto label_3b1c80;
        case 0x3b1c84u: goto label_3b1c84;
        case 0x3b1c88u: goto label_3b1c88;
        case 0x3b1c8cu: goto label_3b1c8c;
        case 0x3b1c90u: goto label_3b1c90;
        case 0x3b1c94u: goto label_3b1c94;
        case 0x3b1c98u: goto label_3b1c98;
        case 0x3b1c9cu: goto label_3b1c9c;
        case 0x3b1ca0u: goto label_3b1ca0;
        case 0x3b1ca4u: goto label_3b1ca4;
        case 0x3b1ca8u: goto label_3b1ca8;
        case 0x3b1cacu: goto label_3b1cac;
        case 0x3b1cb0u: goto label_3b1cb0;
        case 0x3b1cb4u: goto label_3b1cb4;
        case 0x3b1cb8u: goto label_3b1cb8;
        case 0x3b1cbcu: goto label_3b1cbc;
        case 0x3b1cc0u: goto label_3b1cc0;
        case 0x3b1cc4u: goto label_3b1cc4;
        case 0x3b1cc8u: goto label_3b1cc8;
        case 0x3b1cccu: goto label_3b1ccc;
        case 0x3b1cd0u: goto label_3b1cd0;
        case 0x3b1cd4u: goto label_3b1cd4;
        case 0x3b1cd8u: goto label_3b1cd8;
        case 0x3b1cdcu: goto label_3b1cdc;
        case 0x3b1ce0u: goto label_3b1ce0;
        case 0x3b1ce4u: goto label_3b1ce4;
        case 0x3b1ce8u: goto label_3b1ce8;
        case 0x3b1cecu: goto label_3b1cec;
        case 0x3b1cf0u: goto label_3b1cf0;
        case 0x3b1cf4u: goto label_3b1cf4;
        case 0x3b1cf8u: goto label_3b1cf8;
        case 0x3b1cfcu: goto label_3b1cfc;
        case 0x3b1d00u: goto label_3b1d00;
        case 0x3b1d04u: goto label_3b1d04;
        case 0x3b1d08u: goto label_3b1d08;
        case 0x3b1d0cu: goto label_3b1d0c;
        case 0x3b1d10u: goto label_3b1d10;
        case 0x3b1d14u: goto label_3b1d14;
        case 0x3b1d18u: goto label_3b1d18;
        case 0x3b1d1cu: goto label_3b1d1c;
        case 0x3b1d20u: goto label_3b1d20;
        case 0x3b1d24u: goto label_3b1d24;
        case 0x3b1d28u: goto label_3b1d28;
        case 0x3b1d2cu: goto label_3b1d2c;
        case 0x3b1d30u: goto label_3b1d30;
        case 0x3b1d34u: goto label_3b1d34;
        case 0x3b1d38u: goto label_3b1d38;
        case 0x3b1d3cu: goto label_3b1d3c;
        case 0x3b1d40u: goto label_3b1d40;
        case 0x3b1d44u: goto label_3b1d44;
        case 0x3b1d48u: goto label_3b1d48;
        case 0x3b1d4cu: goto label_3b1d4c;
        case 0x3b1d50u: goto label_3b1d50;
        case 0x3b1d54u: goto label_3b1d54;
        case 0x3b1d58u: goto label_3b1d58;
        case 0x3b1d5cu: goto label_3b1d5c;
        case 0x3b1d60u: goto label_3b1d60;
        case 0x3b1d64u: goto label_3b1d64;
        case 0x3b1d68u: goto label_3b1d68;
        case 0x3b1d6cu: goto label_3b1d6c;
        case 0x3b1d70u: goto label_3b1d70;
        case 0x3b1d74u: goto label_3b1d74;
        case 0x3b1d78u: goto label_3b1d78;
        case 0x3b1d7cu: goto label_3b1d7c;
        case 0x3b1d80u: goto label_3b1d80;
        case 0x3b1d84u: goto label_3b1d84;
        case 0x3b1d88u: goto label_3b1d88;
        case 0x3b1d8cu: goto label_3b1d8c;
        case 0x3b1d90u: goto label_3b1d90;
        case 0x3b1d94u: goto label_3b1d94;
        case 0x3b1d98u: goto label_3b1d98;
        case 0x3b1d9cu: goto label_3b1d9c;
        case 0x3b1da0u: goto label_3b1da0;
        case 0x3b1da4u: goto label_3b1da4;
        case 0x3b1da8u: goto label_3b1da8;
        case 0x3b1dacu: goto label_3b1dac;
        case 0x3b1db0u: goto label_3b1db0;
        case 0x3b1db4u: goto label_3b1db4;
        case 0x3b1db8u: goto label_3b1db8;
        case 0x3b1dbcu: goto label_3b1dbc;
        case 0x3b1dc0u: goto label_3b1dc0;
        case 0x3b1dc4u: goto label_3b1dc4;
        case 0x3b1dc8u: goto label_3b1dc8;
        case 0x3b1dccu: goto label_3b1dcc;
        case 0x3b1dd0u: goto label_3b1dd0;
        case 0x3b1dd4u: goto label_3b1dd4;
        case 0x3b1dd8u: goto label_3b1dd8;
        case 0x3b1ddcu: goto label_3b1ddc;
        case 0x3b1de0u: goto label_3b1de0;
        case 0x3b1de4u: goto label_3b1de4;
        case 0x3b1de8u: goto label_3b1de8;
        case 0x3b1decu: goto label_3b1dec;
        case 0x3b1df0u: goto label_3b1df0;
        case 0x3b1df4u: goto label_3b1df4;
        case 0x3b1df8u: goto label_3b1df8;
        case 0x3b1dfcu: goto label_3b1dfc;
        case 0x3b1e00u: goto label_3b1e00;
        case 0x3b1e04u: goto label_3b1e04;
        case 0x3b1e08u: goto label_3b1e08;
        case 0x3b1e0cu: goto label_3b1e0c;
        case 0x3b1e10u: goto label_3b1e10;
        case 0x3b1e14u: goto label_3b1e14;
        case 0x3b1e18u: goto label_3b1e18;
        case 0x3b1e1cu: goto label_3b1e1c;
        case 0x3b1e20u: goto label_3b1e20;
        case 0x3b1e24u: goto label_3b1e24;
        case 0x3b1e28u: goto label_3b1e28;
        case 0x3b1e2cu: goto label_3b1e2c;
        case 0x3b1e30u: goto label_3b1e30;
        case 0x3b1e34u: goto label_3b1e34;
        case 0x3b1e38u: goto label_3b1e38;
        case 0x3b1e3cu: goto label_3b1e3c;
        case 0x3b1e40u: goto label_3b1e40;
        case 0x3b1e44u: goto label_3b1e44;
        case 0x3b1e48u: goto label_3b1e48;
        case 0x3b1e4cu: goto label_3b1e4c;
        case 0x3b1e50u: goto label_3b1e50;
        case 0x3b1e54u: goto label_3b1e54;
        case 0x3b1e58u: goto label_3b1e58;
        case 0x3b1e5cu: goto label_3b1e5c;
        case 0x3b1e60u: goto label_3b1e60;
        case 0x3b1e64u: goto label_3b1e64;
        case 0x3b1e68u: goto label_3b1e68;
        case 0x3b1e6cu: goto label_3b1e6c;
        case 0x3b1e70u: goto label_3b1e70;
        case 0x3b1e74u: goto label_3b1e74;
        case 0x3b1e78u: goto label_3b1e78;
        case 0x3b1e7cu: goto label_3b1e7c;
        case 0x3b1e80u: goto label_3b1e80;
        case 0x3b1e84u: goto label_3b1e84;
        case 0x3b1e88u: goto label_3b1e88;
        case 0x3b1e8cu: goto label_3b1e8c;
        case 0x3b1e90u: goto label_3b1e90;
        case 0x3b1e94u: goto label_3b1e94;
        case 0x3b1e98u: goto label_3b1e98;
        case 0x3b1e9cu: goto label_3b1e9c;
        case 0x3b1ea0u: goto label_3b1ea0;
        case 0x3b1ea4u: goto label_3b1ea4;
        case 0x3b1ea8u: goto label_3b1ea8;
        case 0x3b1eacu: goto label_3b1eac;
        case 0x3b1eb0u: goto label_3b1eb0;
        case 0x3b1eb4u: goto label_3b1eb4;
        case 0x3b1eb8u: goto label_3b1eb8;
        case 0x3b1ebcu: goto label_3b1ebc;
        case 0x3b1ec0u: goto label_3b1ec0;
        case 0x3b1ec4u: goto label_3b1ec4;
        case 0x3b1ec8u: goto label_3b1ec8;
        case 0x3b1eccu: goto label_3b1ecc;
        case 0x3b1ed0u: goto label_3b1ed0;
        case 0x3b1ed4u: goto label_3b1ed4;
        case 0x3b1ed8u: goto label_3b1ed8;
        case 0x3b1edcu: goto label_3b1edc;
        case 0x3b1ee0u: goto label_3b1ee0;
        case 0x3b1ee4u: goto label_3b1ee4;
        case 0x3b1ee8u: goto label_3b1ee8;
        case 0x3b1eecu: goto label_3b1eec;
        case 0x3b1ef0u: goto label_3b1ef0;
        case 0x3b1ef4u: goto label_3b1ef4;
        case 0x3b1ef8u: goto label_3b1ef8;
        case 0x3b1efcu: goto label_3b1efc;
        case 0x3b1f00u: goto label_3b1f00;
        case 0x3b1f04u: goto label_3b1f04;
        case 0x3b1f08u: goto label_3b1f08;
        case 0x3b1f0cu: goto label_3b1f0c;
        case 0x3b1f10u: goto label_3b1f10;
        case 0x3b1f14u: goto label_3b1f14;
        case 0x3b1f18u: goto label_3b1f18;
        case 0x3b1f1cu: goto label_3b1f1c;
        case 0x3b1f20u: goto label_3b1f20;
        case 0x3b1f24u: goto label_3b1f24;
        case 0x3b1f28u: goto label_3b1f28;
        case 0x3b1f2cu: goto label_3b1f2c;
        case 0x3b1f30u: goto label_3b1f30;
        case 0x3b1f34u: goto label_3b1f34;
        case 0x3b1f38u: goto label_3b1f38;
        case 0x3b1f3cu: goto label_3b1f3c;
        case 0x3b1f40u: goto label_3b1f40;
        case 0x3b1f44u: goto label_3b1f44;
        case 0x3b1f48u: goto label_3b1f48;
        case 0x3b1f4cu: goto label_3b1f4c;
        case 0x3b1f50u: goto label_3b1f50;
        case 0x3b1f54u: goto label_3b1f54;
        case 0x3b1f58u: goto label_3b1f58;
        case 0x3b1f5cu: goto label_3b1f5c;
        case 0x3b1f60u: goto label_3b1f60;
        case 0x3b1f64u: goto label_3b1f64;
        case 0x3b1f68u: goto label_3b1f68;
        case 0x3b1f6cu: goto label_3b1f6c;
        case 0x3b1f70u: goto label_3b1f70;
        case 0x3b1f74u: goto label_3b1f74;
        case 0x3b1f78u: goto label_3b1f78;
        case 0x3b1f7cu: goto label_3b1f7c;
        case 0x3b1f80u: goto label_3b1f80;
        case 0x3b1f84u: goto label_3b1f84;
        case 0x3b1f88u: goto label_3b1f88;
        case 0x3b1f8cu: goto label_3b1f8c;
        case 0x3b1f90u: goto label_3b1f90;
        case 0x3b1f94u: goto label_3b1f94;
        case 0x3b1f98u: goto label_3b1f98;
        case 0x3b1f9cu: goto label_3b1f9c;
        case 0x3b1fa0u: goto label_3b1fa0;
        case 0x3b1fa4u: goto label_3b1fa4;
        case 0x3b1fa8u: goto label_3b1fa8;
        case 0x3b1facu: goto label_3b1fac;
        case 0x3b1fb0u: goto label_3b1fb0;
        case 0x3b1fb4u: goto label_3b1fb4;
        case 0x3b1fb8u: goto label_3b1fb8;
        case 0x3b1fbcu: goto label_3b1fbc;
        case 0x3b1fc0u: goto label_3b1fc0;
        case 0x3b1fc4u: goto label_3b1fc4;
        case 0x3b1fc8u: goto label_3b1fc8;
        case 0x3b1fccu: goto label_3b1fcc;
        case 0x3b1fd0u: goto label_3b1fd0;
        case 0x3b1fd4u: goto label_3b1fd4;
        case 0x3b1fd8u: goto label_3b1fd8;
        case 0x3b1fdcu: goto label_3b1fdc;
        case 0x3b1fe0u: goto label_3b1fe0;
        case 0x3b1fe4u: goto label_3b1fe4;
        case 0x3b1fe8u: goto label_3b1fe8;
        case 0x3b1fecu: goto label_3b1fec;
        case 0x3b1ff0u: goto label_3b1ff0;
        case 0x3b1ff4u: goto label_3b1ff4;
        case 0x3b1ff8u: goto label_3b1ff8;
        case 0x3b1ffcu: goto label_3b1ffc;
        case 0x3b2000u: goto label_3b2000;
        case 0x3b2004u: goto label_3b2004;
        case 0x3b2008u: goto label_3b2008;
        case 0x3b200cu: goto label_3b200c;
        case 0x3b2010u: goto label_3b2010;
        case 0x3b2014u: goto label_3b2014;
        case 0x3b2018u: goto label_3b2018;
        case 0x3b201cu: goto label_3b201c;
        case 0x3b2020u: goto label_3b2020;
        case 0x3b2024u: goto label_3b2024;
        case 0x3b2028u: goto label_3b2028;
        case 0x3b202cu: goto label_3b202c;
        case 0x3b2030u: goto label_3b2030;
        case 0x3b2034u: goto label_3b2034;
        case 0x3b2038u: goto label_3b2038;
        case 0x3b203cu: goto label_3b203c;
        case 0x3b2040u: goto label_3b2040;
        case 0x3b2044u: goto label_3b2044;
        case 0x3b2048u: goto label_3b2048;
        case 0x3b204cu: goto label_3b204c;
        case 0x3b2050u: goto label_3b2050;
        case 0x3b2054u: goto label_3b2054;
        case 0x3b2058u: goto label_3b2058;
        case 0x3b205cu: goto label_3b205c;
        case 0x3b2060u: goto label_3b2060;
        case 0x3b2064u: goto label_3b2064;
        case 0x3b2068u: goto label_3b2068;
        case 0x3b206cu: goto label_3b206c;
        case 0x3b2070u: goto label_3b2070;
        case 0x3b2074u: goto label_3b2074;
        case 0x3b2078u: goto label_3b2078;
        case 0x3b207cu: goto label_3b207c;
        case 0x3b2080u: goto label_3b2080;
        case 0x3b2084u: goto label_3b2084;
        case 0x3b2088u: goto label_3b2088;
        case 0x3b208cu: goto label_3b208c;
        case 0x3b2090u: goto label_3b2090;
        case 0x3b2094u: goto label_3b2094;
        case 0x3b2098u: goto label_3b2098;
        case 0x3b209cu: goto label_3b209c;
        case 0x3b20a0u: goto label_3b20a0;
        case 0x3b20a4u: goto label_3b20a4;
        case 0x3b20a8u: goto label_3b20a8;
        case 0x3b20acu: goto label_3b20ac;
        case 0x3b20b0u: goto label_3b20b0;
        case 0x3b20b4u: goto label_3b20b4;
        case 0x3b20b8u: goto label_3b20b8;
        case 0x3b20bcu: goto label_3b20bc;
        case 0x3b20c0u: goto label_3b20c0;
        case 0x3b20c4u: goto label_3b20c4;
        case 0x3b20c8u: goto label_3b20c8;
        case 0x3b20ccu: goto label_3b20cc;
        case 0x3b20d0u: goto label_3b20d0;
        case 0x3b20d4u: goto label_3b20d4;
        case 0x3b20d8u: goto label_3b20d8;
        case 0x3b20dcu: goto label_3b20dc;
        case 0x3b20e0u: goto label_3b20e0;
        case 0x3b20e4u: goto label_3b20e4;
        case 0x3b20e8u: goto label_3b20e8;
        case 0x3b20ecu: goto label_3b20ec;
        case 0x3b20f0u: goto label_3b20f0;
        case 0x3b20f4u: goto label_3b20f4;
        case 0x3b20f8u: goto label_3b20f8;
        case 0x3b20fcu: goto label_3b20fc;
        case 0x3b2100u: goto label_3b2100;
        case 0x3b2104u: goto label_3b2104;
        case 0x3b2108u: goto label_3b2108;
        case 0x3b210cu: goto label_3b210c;
        case 0x3b2110u: goto label_3b2110;
        case 0x3b2114u: goto label_3b2114;
        case 0x3b2118u: goto label_3b2118;
        case 0x3b211cu: goto label_3b211c;
        case 0x3b2120u: goto label_3b2120;
        case 0x3b2124u: goto label_3b2124;
        case 0x3b2128u: goto label_3b2128;
        case 0x3b212cu: goto label_3b212c;
        case 0x3b2130u: goto label_3b2130;
        case 0x3b2134u: goto label_3b2134;
        case 0x3b2138u: goto label_3b2138;
        case 0x3b213cu: goto label_3b213c;
        case 0x3b2140u: goto label_3b2140;
        case 0x3b2144u: goto label_3b2144;
        case 0x3b2148u: goto label_3b2148;
        case 0x3b214cu: goto label_3b214c;
        case 0x3b2150u: goto label_3b2150;
        case 0x3b2154u: goto label_3b2154;
        case 0x3b2158u: goto label_3b2158;
        case 0x3b215cu: goto label_3b215c;
        case 0x3b2160u: goto label_3b2160;
        case 0x3b2164u: goto label_3b2164;
        case 0x3b2168u: goto label_3b2168;
        case 0x3b216cu: goto label_3b216c;
        case 0x3b2170u: goto label_3b2170;
        case 0x3b2174u: goto label_3b2174;
        case 0x3b2178u: goto label_3b2178;
        case 0x3b217cu: goto label_3b217c;
        case 0x3b2180u: goto label_3b2180;
        case 0x3b2184u: goto label_3b2184;
        case 0x3b2188u: goto label_3b2188;
        case 0x3b218cu: goto label_3b218c;
        case 0x3b2190u: goto label_3b2190;
        case 0x3b2194u: goto label_3b2194;
        case 0x3b2198u: goto label_3b2198;
        case 0x3b219cu: goto label_3b219c;
        case 0x3b21a0u: goto label_3b21a0;
        case 0x3b21a4u: goto label_3b21a4;
        case 0x3b21a8u: goto label_3b21a8;
        case 0x3b21acu: goto label_3b21ac;
        case 0x3b21b0u: goto label_3b21b0;
        case 0x3b21b4u: goto label_3b21b4;
        case 0x3b21b8u: goto label_3b21b8;
        case 0x3b21bcu: goto label_3b21bc;
        case 0x3b21c0u: goto label_3b21c0;
        case 0x3b21c4u: goto label_3b21c4;
        case 0x3b21c8u: goto label_3b21c8;
        case 0x3b21ccu: goto label_3b21cc;
        case 0x3b21d0u: goto label_3b21d0;
        case 0x3b21d4u: goto label_3b21d4;
        case 0x3b21d8u: goto label_3b21d8;
        case 0x3b21dcu: goto label_3b21dc;
        case 0x3b21e0u: goto label_3b21e0;
        case 0x3b21e4u: goto label_3b21e4;
        case 0x3b21e8u: goto label_3b21e8;
        case 0x3b21ecu: goto label_3b21ec;
        case 0x3b21f0u: goto label_3b21f0;
        case 0x3b21f4u: goto label_3b21f4;
        case 0x3b21f8u: goto label_3b21f8;
        case 0x3b21fcu: goto label_3b21fc;
        case 0x3b2200u: goto label_3b2200;
        case 0x3b2204u: goto label_3b2204;
        case 0x3b2208u: goto label_3b2208;
        case 0x3b220cu: goto label_3b220c;
        case 0x3b2210u: goto label_3b2210;
        case 0x3b2214u: goto label_3b2214;
        case 0x3b2218u: goto label_3b2218;
        case 0x3b221cu: goto label_3b221c;
        case 0x3b2220u: goto label_3b2220;
        case 0x3b2224u: goto label_3b2224;
        case 0x3b2228u: goto label_3b2228;
        case 0x3b222cu: goto label_3b222c;
        case 0x3b2230u: goto label_3b2230;
        case 0x3b2234u: goto label_3b2234;
        case 0x3b2238u: goto label_3b2238;
        case 0x3b223cu: goto label_3b223c;
        case 0x3b2240u: goto label_3b2240;
        case 0x3b2244u: goto label_3b2244;
        case 0x3b2248u: goto label_3b2248;
        case 0x3b224cu: goto label_3b224c;
        case 0x3b2250u: goto label_3b2250;
        case 0x3b2254u: goto label_3b2254;
        case 0x3b2258u: goto label_3b2258;
        case 0x3b225cu: goto label_3b225c;
        case 0x3b2260u: goto label_3b2260;
        case 0x3b2264u: goto label_3b2264;
        case 0x3b2268u: goto label_3b2268;
        case 0x3b226cu: goto label_3b226c;
        case 0x3b2270u: goto label_3b2270;
        case 0x3b2274u: goto label_3b2274;
        case 0x3b2278u: goto label_3b2278;
        case 0x3b227cu: goto label_3b227c;
        case 0x3b2280u: goto label_3b2280;
        case 0x3b2284u: goto label_3b2284;
        case 0x3b2288u: goto label_3b2288;
        case 0x3b228cu: goto label_3b228c;
        case 0x3b2290u: goto label_3b2290;
        case 0x3b2294u: goto label_3b2294;
        case 0x3b2298u: goto label_3b2298;
        case 0x3b229cu: goto label_3b229c;
        case 0x3b22a0u: goto label_3b22a0;
        case 0x3b22a4u: goto label_3b22a4;
        case 0x3b22a8u: goto label_3b22a8;
        case 0x3b22acu: goto label_3b22ac;
        case 0x3b22b0u: goto label_3b22b0;
        case 0x3b22b4u: goto label_3b22b4;
        case 0x3b22b8u: goto label_3b22b8;
        case 0x3b22bcu: goto label_3b22bc;
        case 0x3b22c0u: goto label_3b22c0;
        case 0x3b22c4u: goto label_3b22c4;
        case 0x3b22c8u: goto label_3b22c8;
        case 0x3b22ccu: goto label_3b22cc;
        case 0x3b22d0u: goto label_3b22d0;
        case 0x3b22d4u: goto label_3b22d4;
        case 0x3b22d8u: goto label_3b22d8;
        case 0x3b22dcu: goto label_3b22dc;
        case 0x3b22e0u: goto label_3b22e0;
        case 0x3b22e4u: goto label_3b22e4;
        case 0x3b22e8u: goto label_3b22e8;
        case 0x3b22ecu: goto label_3b22ec;
        case 0x3b22f0u: goto label_3b22f0;
        case 0x3b22f4u: goto label_3b22f4;
        case 0x3b22f8u: goto label_3b22f8;
        case 0x3b22fcu: goto label_3b22fc;
        case 0x3b2300u: goto label_3b2300;
        case 0x3b2304u: goto label_3b2304;
        case 0x3b2308u: goto label_3b2308;
        case 0x3b230cu: goto label_3b230c;
        case 0x3b2310u: goto label_3b2310;
        case 0x3b2314u: goto label_3b2314;
        case 0x3b2318u: goto label_3b2318;
        case 0x3b231cu: goto label_3b231c;
        case 0x3b2320u: goto label_3b2320;
        case 0x3b2324u: goto label_3b2324;
        case 0x3b2328u: goto label_3b2328;
        case 0x3b232cu: goto label_3b232c;
        case 0x3b2330u: goto label_3b2330;
        case 0x3b2334u: goto label_3b2334;
        case 0x3b2338u: goto label_3b2338;
        case 0x3b233cu: goto label_3b233c;
        case 0x3b2340u: goto label_3b2340;
        case 0x3b2344u: goto label_3b2344;
        case 0x3b2348u: goto label_3b2348;
        case 0x3b234cu: goto label_3b234c;
        case 0x3b2350u: goto label_3b2350;
        case 0x3b2354u: goto label_3b2354;
        case 0x3b2358u: goto label_3b2358;
        case 0x3b235cu: goto label_3b235c;
        case 0x3b2360u: goto label_3b2360;
        case 0x3b2364u: goto label_3b2364;
        case 0x3b2368u: goto label_3b2368;
        case 0x3b236cu: goto label_3b236c;
        case 0x3b2370u: goto label_3b2370;
        case 0x3b2374u: goto label_3b2374;
        case 0x3b2378u: goto label_3b2378;
        case 0x3b237cu: goto label_3b237c;
        case 0x3b2380u: goto label_3b2380;
        case 0x3b2384u: goto label_3b2384;
        case 0x3b2388u: goto label_3b2388;
        case 0x3b238cu: goto label_3b238c;
        case 0x3b2390u: goto label_3b2390;
        case 0x3b2394u: goto label_3b2394;
        case 0x3b2398u: goto label_3b2398;
        case 0x3b239cu: goto label_3b239c;
        case 0x3b23a0u: goto label_3b23a0;
        case 0x3b23a4u: goto label_3b23a4;
        case 0x3b23a8u: goto label_3b23a8;
        case 0x3b23acu: goto label_3b23ac;
        case 0x3b23b0u: goto label_3b23b0;
        case 0x3b23b4u: goto label_3b23b4;
        case 0x3b23b8u: goto label_3b23b8;
        case 0x3b23bcu: goto label_3b23bc;
        case 0x3b23c0u: goto label_3b23c0;
        case 0x3b23c4u: goto label_3b23c4;
        case 0x3b23c8u: goto label_3b23c8;
        case 0x3b23ccu: goto label_3b23cc;
        case 0x3b23d0u: goto label_3b23d0;
        case 0x3b23d4u: goto label_3b23d4;
        case 0x3b23d8u: goto label_3b23d8;
        case 0x3b23dcu: goto label_3b23dc;
        case 0x3b23e0u: goto label_3b23e0;
        case 0x3b23e4u: goto label_3b23e4;
        case 0x3b23e8u: goto label_3b23e8;
        case 0x3b23ecu: goto label_3b23ec;
        case 0x3b23f0u: goto label_3b23f0;
        case 0x3b23f4u: goto label_3b23f4;
        case 0x3b23f8u: goto label_3b23f8;
        case 0x3b23fcu: goto label_3b23fc;
        case 0x3b2400u: goto label_3b2400;
        case 0x3b2404u: goto label_3b2404;
        case 0x3b2408u: goto label_3b2408;
        case 0x3b240cu: goto label_3b240c;
        case 0x3b2410u: goto label_3b2410;
        case 0x3b2414u: goto label_3b2414;
        case 0x3b2418u: goto label_3b2418;
        case 0x3b241cu: goto label_3b241c;
        case 0x3b2420u: goto label_3b2420;
        case 0x3b2424u: goto label_3b2424;
        case 0x3b2428u: goto label_3b2428;
        case 0x3b242cu: goto label_3b242c;
        case 0x3b2430u: goto label_3b2430;
        case 0x3b2434u: goto label_3b2434;
        case 0x3b2438u: goto label_3b2438;
        case 0x3b243cu: goto label_3b243c;
        case 0x3b2440u: goto label_3b2440;
        case 0x3b2444u: goto label_3b2444;
        case 0x3b2448u: goto label_3b2448;
        case 0x3b244cu: goto label_3b244c;
        case 0x3b2450u: goto label_3b2450;
        case 0x3b2454u: goto label_3b2454;
        case 0x3b2458u: goto label_3b2458;
        case 0x3b245cu: goto label_3b245c;
        case 0x3b2460u: goto label_3b2460;
        case 0x3b2464u: goto label_3b2464;
        case 0x3b2468u: goto label_3b2468;
        case 0x3b246cu: goto label_3b246c;
        case 0x3b2470u: goto label_3b2470;
        case 0x3b2474u: goto label_3b2474;
        case 0x3b2478u: goto label_3b2478;
        case 0x3b247cu: goto label_3b247c;
        case 0x3b2480u: goto label_3b2480;
        case 0x3b2484u: goto label_3b2484;
        case 0x3b2488u: goto label_3b2488;
        case 0x3b248cu: goto label_3b248c;
        case 0x3b2490u: goto label_3b2490;
        case 0x3b2494u: goto label_3b2494;
        case 0x3b2498u: goto label_3b2498;
        case 0x3b249cu: goto label_3b249c;
        case 0x3b24a0u: goto label_3b24a0;
        case 0x3b24a4u: goto label_3b24a4;
        case 0x3b24a8u: goto label_3b24a8;
        case 0x3b24acu: goto label_3b24ac;
        case 0x3b24b0u: goto label_3b24b0;
        case 0x3b24b4u: goto label_3b24b4;
        case 0x3b24b8u: goto label_3b24b8;
        case 0x3b24bcu: goto label_3b24bc;
        case 0x3b24c0u: goto label_3b24c0;
        case 0x3b24c4u: goto label_3b24c4;
        case 0x3b24c8u: goto label_3b24c8;
        case 0x3b24ccu: goto label_3b24cc;
        case 0x3b24d0u: goto label_3b24d0;
        case 0x3b24d4u: goto label_3b24d4;
        case 0x3b24d8u: goto label_3b24d8;
        case 0x3b24dcu: goto label_3b24dc;
        case 0x3b24e0u: goto label_3b24e0;
        case 0x3b24e4u: goto label_3b24e4;
        case 0x3b24e8u: goto label_3b24e8;
        case 0x3b24ecu: goto label_3b24ec;
        case 0x3b24f0u: goto label_3b24f0;
        case 0x3b24f4u: goto label_3b24f4;
        case 0x3b24f8u: goto label_3b24f8;
        case 0x3b24fcu: goto label_3b24fc;
        case 0x3b2500u: goto label_3b2500;
        case 0x3b2504u: goto label_3b2504;
        case 0x3b2508u: goto label_3b2508;
        case 0x3b250cu: goto label_3b250c;
        case 0x3b2510u: goto label_3b2510;
        case 0x3b2514u: goto label_3b2514;
        case 0x3b2518u: goto label_3b2518;
        case 0x3b251cu: goto label_3b251c;
        case 0x3b2520u: goto label_3b2520;
        case 0x3b2524u: goto label_3b2524;
        case 0x3b2528u: goto label_3b2528;
        case 0x3b252cu: goto label_3b252c;
        case 0x3b2530u: goto label_3b2530;
        case 0x3b2534u: goto label_3b2534;
        case 0x3b2538u: goto label_3b2538;
        case 0x3b253cu: goto label_3b253c;
        case 0x3b2540u: goto label_3b2540;
        case 0x3b2544u: goto label_3b2544;
        case 0x3b2548u: goto label_3b2548;
        case 0x3b254cu: goto label_3b254c;
        case 0x3b2550u: goto label_3b2550;
        case 0x3b2554u: goto label_3b2554;
        case 0x3b2558u: goto label_3b2558;
        case 0x3b255cu: goto label_3b255c;
        case 0x3b2560u: goto label_3b2560;
        case 0x3b2564u: goto label_3b2564;
        case 0x3b2568u: goto label_3b2568;
        case 0x3b256cu: goto label_3b256c;
        case 0x3b2570u: goto label_3b2570;
        case 0x3b2574u: goto label_3b2574;
        case 0x3b2578u: goto label_3b2578;
        case 0x3b257cu: goto label_3b257c;
        case 0x3b2580u: goto label_3b2580;
        case 0x3b2584u: goto label_3b2584;
        case 0x3b2588u: goto label_3b2588;
        case 0x3b258cu: goto label_3b258c;
        case 0x3b2590u: goto label_3b2590;
        case 0x3b2594u: goto label_3b2594;
        case 0x3b2598u: goto label_3b2598;
        case 0x3b259cu: goto label_3b259c;
        case 0x3b25a0u: goto label_3b25a0;
        case 0x3b25a4u: goto label_3b25a4;
        case 0x3b25a8u: goto label_3b25a8;
        case 0x3b25acu: goto label_3b25ac;
        case 0x3b25b0u: goto label_3b25b0;
        case 0x3b25b4u: goto label_3b25b4;
        case 0x3b25b8u: goto label_3b25b8;
        case 0x3b25bcu: goto label_3b25bc;
        case 0x3b25c0u: goto label_3b25c0;
        case 0x3b25c4u: goto label_3b25c4;
        case 0x3b25c8u: goto label_3b25c8;
        case 0x3b25ccu: goto label_3b25cc;
        case 0x3b25d0u: goto label_3b25d0;
        case 0x3b25d4u: goto label_3b25d4;
        case 0x3b25d8u: goto label_3b25d8;
        case 0x3b25dcu: goto label_3b25dc;
        case 0x3b25e0u: goto label_3b25e0;
        case 0x3b25e4u: goto label_3b25e4;
        case 0x3b25e8u: goto label_3b25e8;
        case 0x3b25ecu: goto label_3b25ec;
        case 0x3b25f0u: goto label_3b25f0;
        case 0x3b25f4u: goto label_3b25f4;
        case 0x3b25f8u: goto label_3b25f8;
        case 0x3b25fcu: goto label_3b25fc;
        case 0x3b2600u: goto label_3b2600;
        case 0x3b2604u: goto label_3b2604;
        case 0x3b2608u: goto label_3b2608;
        case 0x3b260cu: goto label_3b260c;
        case 0x3b2610u: goto label_3b2610;
        case 0x3b2614u: goto label_3b2614;
        case 0x3b2618u: goto label_3b2618;
        case 0x3b261cu: goto label_3b261c;
        case 0x3b2620u: goto label_3b2620;
        case 0x3b2624u: goto label_3b2624;
        case 0x3b2628u: goto label_3b2628;
        case 0x3b262cu: goto label_3b262c;
        case 0x3b2630u: goto label_3b2630;
        case 0x3b2634u: goto label_3b2634;
        case 0x3b2638u: goto label_3b2638;
        case 0x3b263cu: goto label_3b263c;
        case 0x3b2640u: goto label_3b2640;
        case 0x3b2644u: goto label_3b2644;
        case 0x3b2648u: goto label_3b2648;
        case 0x3b264cu: goto label_3b264c;
        case 0x3b2650u: goto label_3b2650;
        case 0x3b2654u: goto label_3b2654;
        case 0x3b2658u: goto label_3b2658;
        case 0x3b265cu: goto label_3b265c;
        case 0x3b2660u: goto label_3b2660;
        case 0x3b2664u: goto label_3b2664;
        case 0x3b2668u: goto label_3b2668;
        case 0x3b266cu: goto label_3b266c;
        case 0x3b2670u: goto label_3b2670;
        case 0x3b2674u: goto label_3b2674;
        case 0x3b2678u: goto label_3b2678;
        case 0x3b267cu: goto label_3b267c;
        case 0x3b2680u: goto label_3b2680;
        case 0x3b2684u: goto label_3b2684;
        case 0x3b2688u: goto label_3b2688;
        case 0x3b268cu: goto label_3b268c;
        case 0x3b2690u: goto label_3b2690;
        case 0x3b2694u: goto label_3b2694;
        case 0x3b2698u: goto label_3b2698;
        case 0x3b269cu: goto label_3b269c;
        case 0x3b26a0u: goto label_3b26a0;
        case 0x3b26a4u: goto label_3b26a4;
        case 0x3b26a8u: goto label_3b26a8;
        case 0x3b26acu: goto label_3b26ac;
        case 0x3b26b0u: goto label_3b26b0;
        case 0x3b26b4u: goto label_3b26b4;
        case 0x3b26b8u: goto label_3b26b8;
        case 0x3b26bcu: goto label_3b26bc;
        case 0x3b26c0u: goto label_3b26c0;
        case 0x3b26c4u: goto label_3b26c4;
        case 0x3b26c8u: goto label_3b26c8;
        case 0x3b26ccu: goto label_3b26cc;
        case 0x3b26d0u: goto label_3b26d0;
        case 0x3b26d4u: goto label_3b26d4;
        case 0x3b26d8u: goto label_3b26d8;
        case 0x3b26dcu: goto label_3b26dc;
        case 0x3b26e0u: goto label_3b26e0;
        case 0x3b26e4u: goto label_3b26e4;
        case 0x3b26e8u: goto label_3b26e8;
        case 0x3b26ecu: goto label_3b26ec;
        case 0x3b26f0u: goto label_3b26f0;
        case 0x3b26f4u: goto label_3b26f4;
        case 0x3b26f8u: goto label_3b26f8;
        case 0x3b26fcu: goto label_3b26fc;
        case 0x3b2700u: goto label_3b2700;
        case 0x3b2704u: goto label_3b2704;
        case 0x3b2708u: goto label_3b2708;
        case 0x3b270cu: goto label_3b270c;
        case 0x3b2710u: goto label_3b2710;
        case 0x3b2714u: goto label_3b2714;
        case 0x3b2718u: goto label_3b2718;
        case 0x3b271cu: goto label_3b271c;
        case 0x3b2720u: goto label_3b2720;
        case 0x3b2724u: goto label_3b2724;
        case 0x3b2728u: goto label_3b2728;
        case 0x3b272cu: goto label_3b272c;
        case 0x3b2730u: goto label_3b2730;
        case 0x3b2734u: goto label_3b2734;
        case 0x3b2738u: goto label_3b2738;
        case 0x3b273cu: goto label_3b273c;
        case 0x3b2740u: goto label_3b2740;
        case 0x3b2744u: goto label_3b2744;
        case 0x3b2748u: goto label_3b2748;
        case 0x3b274cu: goto label_3b274c;
        case 0x3b2750u: goto label_3b2750;
        case 0x3b2754u: goto label_3b2754;
        case 0x3b2758u: goto label_3b2758;
        case 0x3b275cu: goto label_3b275c;
        case 0x3b2760u: goto label_3b2760;
        case 0x3b2764u: goto label_3b2764;
        case 0x3b2768u: goto label_3b2768;
        case 0x3b276cu: goto label_3b276c;
        case 0x3b2770u: goto label_3b2770;
        case 0x3b2774u: goto label_3b2774;
        case 0x3b2778u: goto label_3b2778;
        case 0x3b277cu: goto label_3b277c;
        case 0x3b2780u: goto label_3b2780;
        case 0x3b2784u: goto label_3b2784;
        case 0x3b2788u: goto label_3b2788;
        case 0x3b278cu: goto label_3b278c;
        case 0x3b2790u: goto label_3b2790;
        case 0x3b2794u: goto label_3b2794;
        case 0x3b2798u: goto label_3b2798;
        case 0x3b279cu: goto label_3b279c;
        case 0x3b27a0u: goto label_3b27a0;
        case 0x3b27a4u: goto label_3b27a4;
        case 0x3b27a8u: goto label_3b27a8;
        case 0x3b27acu: goto label_3b27ac;
        case 0x3b27b0u: goto label_3b27b0;
        case 0x3b27b4u: goto label_3b27b4;
        case 0x3b27b8u: goto label_3b27b8;
        case 0x3b27bcu: goto label_3b27bc;
        case 0x3b27c0u: goto label_3b27c0;
        case 0x3b27c4u: goto label_3b27c4;
        case 0x3b27c8u: goto label_3b27c8;
        case 0x3b27ccu: goto label_3b27cc;
        case 0x3b27d0u: goto label_3b27d0;
        case 0x3b27d4u: goto label_3b27d4;
        case 0x3b27d8u: goto label_3b27d8;
        case 0x3b27dcu: goto label_3b27dc;
        case 0x3b27e0u: goto label_3b27e0;
        case 0x3b27e4u: goto label_3b27e4;
        case 0x3b27e8u: goto label_3b27e8;
        case 0x3b27ecu: goto label_3b27ec;
        case 0x3b27f0u: goto label_3b27f0;
        case 0x3b27f4u: goto label_3b27f4;
        case 0x3b27f8u: goto label_3b27f8;
        case 0x3b27fcu: goto label_3b27fc;
        case 0x3b2800u: goto label_3b2800;
        case 0x3b2804u: goto label_3b2804;
        case 0x3b2808u: goto label_3b2808;
        case 0x3b280cu: goto label_3b280c;
        case 0x3b2810u: goto label_3b2810;
        case 0x3b2814u: goto label_3b2814;
        case 0x3b2818u: goto label_3b2818;
        case 0x3b281cu: goto label_3b281c;
        case 0x3b2820u: goto label_3b2820;
        case 0x3b2824u: goto label_3b2824;
        case 0x3b2828u: goto label_3b2828;
        case 0x3b282cu: goto label_3b282c;
        case 0x3b2830u: goto label_3b2830;
        case 0x3b2834u: goto label_3b2834;
        case 0x3b2838u: goto label_3b2838;
        case 0x3b283cu: goto label_3b283c;
        case 0x3b2840u: goto label_3b2840;
        case 0x3b2844u: goto label_3b2844;
        case 0x3b2848u: goto label_3b2848;
        case 0x3b284cu: goto label_3b284c;
        case 0x3b2850u: goto label_3b2850;
        case 0x3b2854u: goto label_3b2854;
        case 0x3b2858u: goto label_3b2858;
        case 0x3b285cu: goto label_3b285c;
        case 0x3b2860u: goto label_3b2860;
        case 0x3b2864u: goto label_3b2864;
        case 0x3b2868u: goto label_3b2868;
        case 0x3b286cu: goto label_3b286c;
        case 0x3b2870u: goto label_3b2870;
        case 0x3b2874u: goto label_3b2874;
        case 0x3b2878u: goto label_3b2878;
        case 0x3b287cu: goto label_3b287c;
        case 0x3b2880u: goto label_3b2880;
        case 0x3b2884u: goto label_3b2884;
        case 0x3b2888u: goto label_3b2888;
        case 0x3b288cu: goto label_3b288c;
        case 0x3b2890u: goto label_3b2890;
        case 0x3b2894u: goto label_3b2894;
        case 0x3b2898u: goto label_3b2898;
        case 0x3b289cu: goto label_3b289c;
        case 0x3b28a0u: goto label_3b28a0;
        case 0x3b28a4u: goto label_3b28a4;
        case 0x3b28a8u: goto label_3b28a8;
        case 0x3b28acu: goto label_3b28ac;
        case 0x3b28b0u: goto label_3b28b0;
        case 0x3b28b4u: goto label_3b28b4;
        case 0x3b28b8u: goto label_3b28b8;
        case 0x3b28bcu: goto label_3b28bc;
        case 0x3b28c0u: goto label_3b28c0;
        case 0x3b28c4u: goto label_3b28c4;
        case 0x3b28c8u: goto label_3b28c8;
        case 0x3b28ccu: goto label_3b28cc;
        case 0x3b28d0u: goto label_3b28d0;
        case 0x3b28d4u: goto label_3b28d4;
        case 0x3b28d8u: goto label_3b28d8;
        case 0x3b28dcu: goto label_3b28dc;
        case 0x3b28e0u: goto label_3b28e0;
        case 0x3b28e4u: goto label_3b28e4;
        case 0x3b28e8u: goto label_3b28e8;
        case 0x3b28ecu: goto label_3b28ec;
        case 0x3b28f0u: goto label_3b28f0;
        case 0x3b28f4u: goto label_3b28f4;
        case 0x3b28f8u: goto label_3b28f8;
        case 0x3b28fcu: goto label_3b28fc;
        case 0x3b2900u: goto label_3b2900;
        case 0x3b2904u: goto label_3b2904;
        case 0x3b2908u: goto label_3b2908;
        case 0x3b290cu: goto label_3b290c;
        case 0x3b2910u: goto label_3b2910;
        case 0x3b2914u: goto label_3b2914;
        case 0x3b2918u: goto label_3b2918;
        case 0x3b291cu: goto label_3b291c;
        case 0x3b2920u: goto label_3b2920;
        case 0x3b2924u: goto label_3b2924;
        case 0x3b2928u: goto label_3b2928;
        case 0x3b292cu: goto label_3b292c;
        case 0x3b2930u: goto label_3b2930;
        case 0x3b2934u: goto label_3b2934;
        case 0x3b2938u: goto label_3b2938;
        case 0x3b293cu: goto label_3b293c;
        case 0x3b2940u: goto label_3b2940;
        case 0x3b2944u: goto label_3b2944;
        case 0x3b2948u: goto label_3b2948;
        case 0x3b294cu: goto label_3b294c;
        case 0x3b2950u: goto label_3b2950;
        case 0x3b2954u: goto label_3b2954;
        case 0x3b2958u: goto label_3b2958;
        case 0x3b295cu: goto label_3b295c;
        case 0x3b2960u: goto label_3b2960;
        case 0x3b2964u: goto label_3b2964;
        case 0x3b2968u: goto label_3b2968;
        case 0x3b296cu: goto label_3b296c;
        case 0x3b2970u: goto label_3b2970;
        case 0x3b2974u: goto label_3b2974;
        case 0x3b2978u: goto label_3b2978;
        case 0x3b297cu: goto label_3b297c;
        case 0x3b2980u: goto label_3b2980;
        case 0x3b2984u: goto label_3b2984;
        case 0x3b2988u: goto label_3b2988;
        case 0x3b298cu: goto label_3b298c;
        case 0x3b2990u: goto label_3b2990;
        case 0x3b2994u: goto label_3b2994;
        case 0x3b2998u: goto label_3b2998;
        case 0x3b299cu: goto label_3b299c;
        case 0x3b29a0u: goto label_3b29a0;
        case 0x3b29a4u: goto label_3b29a4;
        case 0x3b29a8u: goto label_3b29a8;
        case 0x3b29acu: goto label_3b29ac;
        case 0x3b29b0u: goto label_3b29b0;
        case 0x3b29b4u: goto label_3b29b4;
        case 0x3b29b8u: goto label_3b29b8;
        case 0x3b29bcu: goto label_3b29bc;
        case 0x3b29c0u: goto label_3b29c0;
        case 0x3b29c4u: goto label_3b29c4;
        case 0x3b29c8u: goto label_3b29c8;
        case 0x3b29ccu: goto label_3b29cc;
        case 0x3b29d0u: goto label_3b29d0;
        case 0x3b29d4u: goto label_3b29d4;
        case 0x3b29d8u: goto label_3b29d8;
        case 0x3b29dcu: goto label_3b29dc;
        case 0x3b29e0u: goto label_3b29e0;
        case 0x3b29e4u: goto label_3b29e4;
        case 0x3b29e8u: goto label_3b29e8;
        case 0x3b29ecu: goto label_3b29ec;
        case 0x3b29f0u: goto label_3b29f0;
        case 0x3b29f4u: goto label_3b29f4;
        case 0x3b29f8u: goto label_3b29f8;
        case 0x3b29fcu: goto label_3b29fc;
        case 0x3b2a00u: goto label_3b2a00;
        case 0x3b2a04u: goto label_3b2a04;
        case 0x3b2a08u: goto label_3b2a08;
        case 0x3b2a0cu: goto label_3b2a0c;
        case 0x3b2a10u: goto label_3b2a10;
        case 0x3b2a14u: goto label_3b2a14;
        case 0x3b2a18u: goto label_3b2a18;
        case 0x3b2a1cu: goto label_3b2a1c;
        case 0x3b2a20u: goto label_3b2a20;
        case 0x3b2a24u: goto label_3b2a24;
        case 0x3b2a28u: goto label_3b2a28;
        case 0x3b2a2cu: goto label_3b2a2c;
        case 0x3b2a30u: goto label_3b2a30;
        case 0x3b2a34u: goto label_3b2a34;
        case 0x3b2a38u: goto label_3b2a38;
        case 0x3b2a3cu: goto label_3b2a3c;
        case 0x3b2a40u: goto label_3b2a40;
        case 0x3b2a44u: goto label_3b2a44;
        case 0x3b2a48u: goto label_3b2a48;
        case 0x3b2a4cu: goto label_3b2a4c;
        case 0x3b2a50u: goto label_3b2a50;
        case 0x3b2a54u: goto label_3b2a54;
        case 0x3b2a58u: goto label_3b2a58;
        case 0x3b2a5cu: goto label_3b2a5c;
        case 0x3b2a60u: goto label_3b2a60;
        case 0x3b2a64u: goto label_3b2a64;
        case 0x3b2a68u: goto label_3b2a68;
        case 0x3b2a6cu: goto label_3b2a6c;
        case 0x3b2a70u: goto label_3b2a70;
        case 0x3b2a74u: goto label_3b2a74;
        case 0x3b2a78u: goto label_3b2a78;
        case 0x3b2a7cu: goto label_3b2a7c;
        case 0x3b2a80u: goto label_3b2a80;
        case 0x3b2a84u: goto label_3b2a84;
        case 0x3b2a88u: goto label_3b2a88;
        case 0x3b2a8cu: goto label_3b2a8c;
        case 0x3b2a90u: goto label_3b2a90;
        case 0x3b2a94u: goto label_3b2a94;
        case 0x3b2a98u: goto label_3b2a98;
        case 0x3b2a9cu: goto label_3b2a9c;
        case 0x3b2aa0u: goto label_3b2aa0;
        case 0x3b2aa4u: goto label_3b2aa4;
        case 0x3b2aa8u: goto label_3b2aa8;
        case 0x3b2aacu: goto label_3b2aac;
        case 0x3b2ab0u: goto label_3b2ab0;
        case 0x3b2ab4u: goto label_3b2ab4;
        case 0x3b2ab8u: goto label_3b2ab8;
        case 0x3b2abcu: goto label_3b2abc;
        case 0x3b2ac0u: goto label_3b2ac0;
        case 0x3b2ac4u: goto label_3b2ac4;
        case 0x3b2ac8u: goto label_3b2ac8;
        case 0x3b2accu: goto label_3b2acc;
        case 0x3b2ad0u: goto label_3b2ad0;
        case 0x3b2ad4u: goto label_3b2ad4;
        case 0x3b2ad8u: goto label_3b2ad8;
        case 0x3b2adcu: goto label_3b2adc;
        case 0x3b2ae0u: goto label_3b2ae0;
        case 0x3b2ae4u: goto label_3b2ae4;
        case 0x3b2ae8u: goto label_3b2ae8;
        case 0x3b2aecu: goto label_3b2aec;
        case 0x3b2af0u: goto label_3b2af0;
        case 0x3b2af4u: goto label_3b2af4;
        case 0x3b2af8u: goto label_3b2af8;
        case 0x3b2afcu: goto label_3b2afc;
        case 0x3b2b00u: goto label_3b2b00;
        case 0x3b2b04u: goto label_3b2b04;
        case 0x3b2b08u: goto label_3b2b08;
        case 0x3b2b0cu: goto label_3b2b0c;
        case 0x3b2b10u: goto label_3b2b10;
        case 0x3b2b14u: goto label_3b2b14;
        case 0x3b2b18u: goto label_3b2b18;
        case 0x3b2b1cu: goto label_3b2b1c;
        case 0x3b2b20u: goto label_3b2b20;
        case 0x3b2b24u: goto label_3b2b24;
        case 0x3b2b28u: goto label_3b2b28;
        case 0x3b2b2cu: goto label_3b2b2c;
        case 0x3b2b30u: goto label_3b2b30;
        case 0x3b2b34u: goto label_3b2b34;
        case 0x3b2b38u: goto label_3b2b38;
        case 0x3b2b3cu: goto label_3b2b3c;
        case 0x3b2b40u: goto label_3b2b40;
        case 0x3b2b44u: goto label_3b2b44;
        case 0x3b2b48u: goto label_3b2b48;
        case 0x3b2b4cu: goto label_3b2b4c;
        case 0x3b2b50u: goto label_3b2b50;
        case 0x3b2b54u: goto label_3b2b54;
        case 0x3b2b58u: goto label_3b2b58;
        case 0x3b2b5cu: goto label_3b2b5c;
        case 0x3b2b60u: goto label_3b2b60;
        case 0x3b2b64u: goto label_3b2b64;
        case 0x3b2b68u: goto label_3b2b68;
        case 0x3b2b6cu: goto label_3b2b6c;
        case 0x3b2b70u: goto label_3b2b70;
        case 0x3b2b74u: goto label_3b2b74;
        case 0x3b2b78u: goto label_3b2b78;
        case 0x3b2b7cu: goto label_3b2b7c;
        case 0x3b2b80u: goto label_3b2b80;
        case 0x3b2b84u: goto label_3b2b84;
        case 0x3b2b88u: goto label_3b2b88;
        case 0x3b2b8cu: goto label_3b2b8c;
        case 0x3b2b90u: goto label_3b2b90;
        case 0x3b2b94u: goto label_3b2b94;
        case 0x3b2b98u: goto label_3b2b98;
        case 0x3b2b9cu: goto label_3b2b9c;
        case 0x3b2ba0u: goto label_3b2ba0;
        case 0x3b2ba4u: goto label_3b2ba4;
        case 0x3b2ba8u: goto label_3b2ba8;
        case 0x3b2bacu: goto label_3b2bac;
        case 0x3b2bb0u: goto label_3b2bb0;
        case 0x3b2bb4u: goto label_3b2bb4;
        case 0x3b2bb8u: goto label_3b2bb8;
        case 0x3b2bbcu: goto label_3b2bbc;
        case 0x3b2bc0u: goto label_3b2bc0;
        case 0x3b2bc4u: goto label_3b2bc4;
        case 0x3b2bc8u: goto label_3b2bc8;
        case 0x3b2bccu: goto label_3b2bcc;
        case 0x3b2bd0u: goto label_3b2bd0;
        case 0x3b2bd4u: goto label_3b2bd4;
        case 0x3b2bd8u: goto label_3b2bd8;
        case 0x3b2bdcu: goto label_3b2bdc;
        case 0x3b2be0u: goto label_3b2be0;
        case 0x3b2be4u: goto label_3b2be4;
        case 0x3b2be8u: goto label_3b2be8;
        case 0x3b2becu: goto label_3b2bec;
        case 0x3b2bf0u: goto label_3b2bf0;
        case 0x3b2bf4u: goto label_3b2bf4;
        case 0x3b2bf8u: goto label_3b2bf8;
        case 0x3b2bfcu: goto label_3b2bfc;
        case 0x3b2c00u: goto label_3b2c00;
        case 0x3b2c04u: goto label_3b2c04;
        case 0x3b2c08u: goto label_3b2c08;
        case 0x3b2c0cu: goto label_3b2c0c;
        case 0x3b2c10u: goto label_3b2c10;
        case 0x3b2c14u: goto label_3b2c14;
        case 0x3b2c18u: goto label_3b2c18;
        case 0x3b2c1cu: goto label_3b2c1c;
        case 0x3b2c20u: goto label_3b2c20;
        case 0x3b2c24u: goto label_3b2c24;
        case 0x3b2c28u: goto label_3b2c28;
        case 0x3b2c2cu: goto label_3b2c2c;
        case 0x3b2c30u: goto label_3b2c30;
        case 0x3b2c34u: goto label_3b2c34;
        case 0x3b2c38u: goto label_3b2c38;
        case 0x3b2c3cu: goto label_3b2c3c;
        case 0x3b2c40u: goto label_3b2c40;
        case 0x3b2c44u: goto label_3b2c44;
        case 0x3b2c48u: goto label_3b2c48;
        case 0x3b2c4cu: goto label_3b2c4c;
        case 0x3b2c50u: goto label_3b2c50;
        case 0x3b2c54u: goto label_3b2c54;
        case 0x3b2c58u: goto label_3b2c58;
        case 0x3b2c5cu: goto label_3b2c5c;
        case 0x3b2c60u: goto label_3b2c60;
        case 0x3b2c64u: goto label_3b2c64;
        case 0x3b2c68u: goto label_3b2c68;
        case 0x3b2c6cu: goto label_3b2c6c;
        case 0x3b2c70u: goto label_3b2c70;
        case 0x3b2c74u: goto label_3b2c74;
        case 0x3b2c78u: goto label_3b2c78;
        case 0x3b2c7cu: goto label_3b2c7c;
        case 0x3b2c80u: goto label_3b2c80;
        case 0x3b2c84u: goto label_3b2c84;
        case 0x3b2c88u: goto label_3b2c88;
        case 0x3b2c8cu: goto label_3b2c8c;
        case 0x3b2c90u: goto label_3b2c90;
        case 0x3b2c94u: goto label_3b2c94;
        case 0x3b2c98u: goto label_3b2c98;
        case 0x3b2c9cu: goto label_3b2c9c;
        case 0x3b2ca0u: goto label_3b2ca0;
        case 0x3b2ca4u: goto label_3b2ca4;
        case 0x3b2ca8u: goto label_3b2ca8;
        case 0x3b2cacu: goto label_3b2cac;
        case 0x3b2cb0u: goto label_3b2cb0;
        case 0x3b2cb4u: goto label_3b2cb4;
        case 0x3b2cb8u: goto label_3b2cb8;
        case 0x3b2cbcu: goto label_3b2cbc;
        case 0x3b2cc0u: goto label_3b2cc0;
        case 0x3b2cc4u: goto label_3b2cc4;
        case 0x3b2cc8u: goto label_3b2cc8;
        case 0x3b2cccu: goto label_3b2ccc;
        case 0x3b2cd0u: goto label_3b2cd0;
        case 0x3b2cd4u: goto label_3b2cd4;
        case 0x3b2cd8u: goto label_3b2cd8;
        case 0x3b2cdcu: goto label_3b2cdc;
        case 0x3b2ce0u: goto label_3b2ce0;
        case 0x3b2ce4u: goto label_3b2ce4;
        case 0x3b2ce8u: goto label_3b2ce8;
        case 0x3b2cecu: goto label_3b2cec;
        case 0x3b2cf0u: goto label_3b2cf0;
        case 0x3b2cf4u: goto label_3b2cf4;
        case 0x3b2cf8u: goto label_3b2cf8;
        case 0x3b2cfcu: goto label_3b2cfc;
        default: break;
    }

    ctx->pc = 0x3b0d90u;

label_3b0d90:
    // 0x3b0d90: 0x745f6742  .word       0x745F6742                   # INVALID     $v0, $ra, 0x6742 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0d90u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0D90 raw=0x745F6742");
label_3b0d94:
    // 0x3b0d94: 0x736e6172  .word       0x736E6172                   # INVALID     $k1, $t6, 0x6172 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b0d94u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x3B0D94 raw=0x736E6172");
label_3b0d98:
    // 0x3b0d98: 0x93a2928  j           func_4E8A4A0
label_3b0d9c:
    if (ctx->pc == 0x3B0D9Cu) {
        ctx->pc = 0x3B0D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D98u;
        // 0x3b0d9c: 0xa6425  .word       0x000A6425                   # or          $t4, $zero, $t2 # 00000400 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0DA0u;
        goto label_3b0da0;
    }
    ctx->pc = 0x3B0D98u;
    ctx->pc = 0x3B0D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0D98u;
    // 0x3b0d9c: 0xa6425  .word       0x000A6425                   # or          $t4, $zero, $t2 # 00000400 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E8A4A0u, 0x3B0D98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B0DA0u;
label_3b0da0:
    // 0x3b0da0: 0x74414d44  .word       0x74414D44                   # INVALID     $v0, $at, 0x4D44 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0da0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0DA0 raw=0x74414D44");
label_3b0da4:
    // 0x3b0da4: 0x46286761  .word       0x46286761                   # INVALID     $s1, $t0, 0x6761 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3b0da4u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x21 at 0x3B0DA4 raw=0x46286761");
label_3b0da8:
    // 0x3b0da8: 0x3a092952  xori        $t1, $s0, 0x2952
    ctx->pc = 0x3b0da8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)10578);
label_3b0dac:
    // 0x3b0dac: 0x78257830  lq          $a1, 0x7830($at)
    ctx->pc = 0x3b0dacu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 1), 30768)));
label_3b0db0:
    // 0x3b0db0: 0x0  nop
    ctx->pc = 0x3b0db0u;
    // NOP
label_3b0db4:
    // 0x3b0db4: 0x0  nop
    ctx->pc = 0x3b0db4u;
    // NOP
label_3b0db8:
    // 0x3b0db8: 0x0  nop
    ctx->pc = 0x3b0db8u;
    // NOP
label_3b0dbc:
    // 0x3b0dbc: 0x0  nop
    ctx->pc = 0x3b0dbcu;
    // NOP
label_3b0dc0:
    // 0x3b0dc0: 0x74414d44  .word       0x74414D44                   # INVALID     $v0, $at, 0x4D44 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0dc0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0DC0 raw=0x74414D44");
label_3b0dc4:
    // 0x3b0dc4: 0x4c286761  .word       0x4C286761                   # INVALID     $at, $t0, 0x6761 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0dc4u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x3B0DC4 raw=0x4C286761");
label_3b0dc8:
    // 0x3b0dc8: 0x3a092952  xori        $t1, $s0, 0x2952
    ctx->pc = 0x3b0dc8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)10578);
label_3b0dcc:
    // 0x3b0dcc: 0x78257830  lq          $a1, 0x7830($at)
    ctx->pc = 0x3b0dccu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 1), 30768)));
label_3b0dd0:
    // 0x3b0dd0: 0x0  nop
    ctx->pc = 0x3b0dd0u;
    // NOP
label_3b0dd4:
    // 0x3b0dd4: 0x0  nop
    ctx->pc = 0x3b0dd4u;
    // NOP
label_3b0dd8:
    // 0x3b0dd8: 0x0  nop
    ctx->pc = 0x3b0dd8u;
    // NOP
label_3b0ddc:
    // 0x3b0ddc: 0x0  nop
    ctx->pc = 0x3b0ddcu;
    // NOP
label_3b0de0:
    // 0x3b0de0: 0x206d20  .word       0x00206D20                   # add         $t5, $at, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0de0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_3b0de4:
    // 0x3b0de4: 0x206d64  .word       0x00206D64                   # and         $t5, $at, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0de4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 1) & GPR_U64(ctx, 0));
label_3b0de8:
    // 0x3b0de8: 0x20702c  dadd        $t6, $at, $zero
    ctx->pc = 0x3b0de8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_3b0dec:
    // 0x3b0dec: 0x207080  .word       0x00207080                   # sll         $t6, $zero, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0decu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_3b0df0:
    // 0x3b0df0: 0x2071d4  .word       0x002071D4                   # dsllv       $t6, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0df0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) << (GPR_U32(ctx, 1) & 0x3F));
label_3b0df4:
    // 0x3b0df4: 0x207218  .word       0x00207218                   # mult        $t6, $at, $zero # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0df4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_3b0df8:
    // 0x3b0df8: 0x2075f8  .word       0x002075F8                   # dsll        $t6, $zero, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0df8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) << 23);
label_3b0dfc:
    // 0x3b0dfc: 0x207630  tge         $at, $zero, 472
    ctx->pc = 0x3b0dfcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3b0e00:
    // 0x3b0e00: 0x2078a8  .word       0x002078A8                   # mfsa        $t7 # 00200080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0e00u;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_3b0e04:
    // 0x3b0e04: 0x2078e0  .word       0x002078E0                   # add         $t7, $at, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0e04u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_3b0e08:
    // 0x3b0e08: 0x0  nop
    ctx->pc = 0x3b0e08u;
    // NOP
label_3b0e0c:
    // 0x3b0e0c: 0x0  nop
    ctx->pc = 0x3b0e0cu;
    // NOP
label_3b0e10:
    // 0x3b0e10: 0x208b04  .word       0x00208B04                   # sllv        $s1, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0e10u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 1) & 0x1F));
label_3b0e14:
    // 0x3b0e14: 0x208c88  .word       0x00208C88                   # jr          $at # 00008C80 <InstrIdType: CPU_SPECIAL>
label_3b0e18:
    if (ctx->pc == 0x3B0E18u) {
        ctx->pc = 0x3B0E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0E14u;
        // 0x3b0e18: 0x208d48  .word       0x00208D48                   # jr          $at # 00008D40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0E1Cu;
        goto label_3b0e1c;
    }
    ctx->pc = 0x3B0E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x3B0E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0E14u;
        // 0x3b0e18: 0x208d48  .word       0x00208D48                   # jr          $at # 00008D40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0E14u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B0E1Cu;
label_3b0e1c:
    // 0x3b0e1c: 0x208e38  .word       0x00208E38                   # dsll        $s1, $zero, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0e1cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) << 24);
label_3b0e20:
    // 0x3b0e20: 0x208e60  .word       0x00208E60                   # add         $s1, $at, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0e20u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_3b0e24:
    // 0x3b0e24: 0x209214  .word       0x00209214                   # dsllv       $s2, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0e24u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) << (GPR_U32(ctx, 1) & 0x3F));
label_3b0e28:
    // 0x3b0e28: 0x2092c0  .word       0x002092C0                   # sll         $s2, $zero, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0e28u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_3b0e2c:
    // 0x3b0e2c: 0x2092e0  .word       0x002092E0                   # add         $s2, $at, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0e2cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_3b0e30:
    // 0x3b0e30: 0x20944c  .word       0x0020944C                   # syscall     593 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0e30u;
    ctx->pc = 0x3B0E34u;
runtime->handleSyscall(rdram, ctx, 0x8251u);
label_3b0e34:
    // 0x3b0e34: 0x0  nop
    ctx->pc = 0x3b0e34u;
    // NOP
label_3b0e38:
    // 0x3b0e38: 0x0  nop
    ctx->pc = 0x3b0e38u;
    // NOP
label_3b0e3c:
    // 0x3b0e3c: 0x0  nop
    ctx->pc = 0x3b0e3cu;
    // NOP
label_3b0e40:
    // 0x3b0e40: 0x2095d0  .word       0x002095D0                   # mfhi        $s2 # 002005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0e40u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_3b0e44:
    // 0x3b0e44: 0x2097d8  .word       0x002097D8                   # mult        $s2, $at, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0e44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_3b0e48:
    // 0x3b0e48: 0x209898  .word       0x00209898                   # mult        $s3, $at, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0e48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_3b0e4c:
    // 0x3b0e4c: 0x2099a8  .word       0x002099A8                   # mfsa        $s3 # 00200180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0e4cu;
    SET_GPR_U32(ctx, 19, ctx->sa);
label_3b0e50:
    // 0x3b0e50: 0x2099d8  .word       0x002099D8                   # mult        $s3, $at, $zero # 000001C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0e50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_3b0e54:
    // 0x3b0e54: 0x209b90  .word       0x00209B90                   # mfhi        $s3 # 00200380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0e54u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_3b0e58:
    // 0x3b0e58: 0x0  nop
    ctx->pc = 0x3b0e58u;
    // NOP
label_3b0e5c:
    // 0x3b0e5c: 0x0  nop
    ctx->pc = 0x3b0e5cu;
    // NOP
label_3b0e60:
    // 0x3b0e60: 0x20ba74  teq         $at, $zero, 745
    ctx->pc = 0x3b0e60u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3b0e64:
    // 0x3b0e64: 0x20bab4  teq         $at, $zero, 746
    ctx->pc = 0x3b0e64u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3b0e68:
    // 0x3b0e68: 0x20bac4  .word       0x0020BAC4                   # sllv        $s7, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0e68u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 1) & 0x1F));
label_3b0e6c:
    // 0x3b0e6c: 0x20bb74  teq         $at, $zero, 749
    ctx->pc = 0x3b0e6cu;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3b0e70:
    // 0x3b0e70: 0x20bbb0  tge         $at, $zero, 750
    ctx->pc = 0x3b0e70u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3b0e74:
    // 0x3b0e74: 0x20bc04  .word       0x0020BC04                   # sllv        $s7, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0e74u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 1) & 0x1F));
label_3b0e78:
    // 0x3b0e78: 0x20c174  teq         $at, $zero, 773
    ctx->pc = 0x3b0e78u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3b0e7c:
    // 0x3b0e7c: 0x0  nop
    ctx->pc = 0x3b0e7cu;
    // NOP
label_3b0e80:
    // 0x3b0e80: 0x20eaec  .word       0x0020EAEC                   # dadd        $sp, $at, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0e80u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 29, r); }
label_3b0e84:
    // 0x3b0e84: 0x20edc4  .word       0x0020EDC4                   # sllv        $sp, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0e84u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 1) & 0x1F));
label_3b0e88:
    // 0x3b0e88: 0x20ee24  .word       0x0020EE24                   # and         $sp, $at, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0e88u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 1) & GPR_U64(ctx, 0));
label_3b0e8c:
    // 0x3b0e8c: 0x20ee7c  .word       0x0020EE7C                   # dsll32      $sp, $zero, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0e8cu;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) << (32 + 25));
label_3b0e90:
    // 0x3b0e90: 0x20ee8c  .word       0x0020EE8C                   # syscall     954 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0e90u;
    ctx->pc = 0x3B0E94u;
runtime->handleSyscall(rdram, ctx, 0x83BAu);
label_3b0e94:
    // 0x3b0e94: 0x20eed4  .word       0x0020EED4                   # dsllv       $sp, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0e94u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) << (GPR_U32(ctx, 1) & 0x3F));
label_3b0e98:
    // 0x3b0e98: 0x20eee4  .word       0x0020EEE4                   # and         $sp, $at, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0e98u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 1) & GPR_U64(ctx, 0));
label_3b0e9c:
    // 0x3b0e9c: 0x20ef30  tge         $at, $zero, 956
    ctx->pc = 0x3b0e9cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3b0ea0:
    // 0x3b0ea0: 0x20ef40  .word       0x0020EF40                   # sll         $sp, $zero, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_3b0ea4:
    // 0x3b0ea4: 0x0  nop
    ctx->pc = 0x3b0ea4u;
    // NOP
label_3b0ea8:
    // 0x3b0ea8: 0x69202323  ldl         $zero, 0x2323($t1)
    ctx->pc = 0x3b0ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8995); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_3b0eac:
    // 0x3b0eac: 0x7265746e  .word       0x7265746E                   # INVALID     $s3, $a1, 0x746E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b0eacu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x3B0EAC raw=0x7265746E");
label_3b0eb0:
    // 0x3b0eb0: 0x206c656e  addi        $t4, $v1, 0x656E
    ctx->pc = 0x3b0eb0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25966, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_3b0eb4:
    // 0x3b0eb4: 0x6f727265  ldr         $s2, 0x7265($k1)
    ctx->pc = 0x3b0eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_3b0eb8:
    // 0x3b0eb8: 0x6e692072  ldr         $t1, 0x2072($s3)
    ctx->pc = 0x3b0eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8306); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_3b0ebc:
    // 0x3b0ebc: 0x62696c20  daddi       $t1, $s3, 0x6C20
    ctx->pc = 0x3b0ebcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)27680; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_3b0ec0:
    // 0x3b0ec0: 0x6e72656b  ldr         $s2, 0x656B($s3)
    ctx->pc = 0x3b0ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25963); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_3b0ec4:
    // 0x3b0ec4: 0x21612e6c  addi        $at, $t3, 0x2E6C
    ctx->pc = 0x3b0ec4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)11884, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_3b0ec8:
    // 0x3b0ec8: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x3b0ec8u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3b0ecc:
    // 0x3b0ecc: 0x0  nop
    ctx->pc = 0x3b0eccu;
    // NOP
label_3b0ed0:
    // 0x3b0ed0: 0x3a595454  xori        $t9, $s2, 0x5454
    ctx->pc = 0x3b0ed0u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)21588);
label_3b0ed4:
    // 0x3b0ed4: 0x63617020  daddi       $at, $k1, 0x7020
    ctx->pc = 0x3b0ed4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)28704; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_3b0ed8:
    // 0x3b0ed8: 0x2074656b  addi        $s4, $v1, 0x656B
    ctx->pc = 0x3b0ed8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25963, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_3b0edc:
    // 0x3b0edc: 0x657a6973  daddiu      $k0, $t3, 0x6973
    ctx->pc = 0x3b0edcu;
    SET_GPR_S64(ctx, 26, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26995);
label_3b0ee0:
    // 0x3b0ee0: 0x72616c20  .word       0x72616C20                   # madd1       $t5, $s3, $at # 00000400 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b0ee0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_3b0ee4:
    // 0x3b0ee4: 0x20726567  addi        $s2, $v1, 0x6567
    ctx->pc = 0x3b0ee4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25959, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_3b0ee8:
    // 0x3b0ee8: 0x6e616874  ldr         $at, 0x6874($s3)
    ctx->pc = 0x3b0ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26740); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_3b0eec:
    // 0x3b0eec: 0x70786520  .word       0x70786520                   # madd1       $t4, $v1, $t8 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b0eecu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 24); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_3b0ef0:
    // 0x3b0ef0: 0xa746365  j           func_9D18D94
label_3b0ef4:
    if (ctx->pc == 0x3B0EF4u) {
        ctx->pc = 0x3B0EF8u;
        goto label_3b0ef8;
    }
    ctx->pc = 0x3B0EF0u;
    ctx->pc = 0x9D18D94u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9D18D94u, 0x3B0EF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B0EF8u;
label_3b0ef8:
    // 0x3b0ef8: 0x3a595454  xori        $t9, $s2, 0x5454
    ctx->pc = 0x3b0ef8u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)21588);
label_3b0efc:
    // 0x3b0efc: 0x63657220  daddi       $a1, $k1, 0x7220
    ctx->pc = 0x3b0efcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)29216; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_3b0f00:
    // 0x3b0f00: 0x65766965  daddiu      $s6, $t3, 0x6965
    ctx->pc = 0x3b0f00u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26981);
label_3b0f04:
    // 0x3b0f04: 0x72726520  .word       0x72726520                   # madd1       $t4, $s3, $s2 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b0f04u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_3b0f08:
    // 0x3b0f08: 0x726f  .word       0x0000726F                   # dsubu       $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0f08u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_3b0f0c:
    // 0x3b0f0c: 0x0  nop
    ctx->pc = 0x3b0f0cu;
    // NOP
label_3b0f10:
    // 0x3b0f10: 0x3a595454  xori        $t9, $s2, 0x5454
    ctx->pc = 0x3b0f10u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)21588);
label_3b0f14:
    // 0x3b0f14: 0x6e657320  ldr         $a1, 0x7320($s3)
    ctx->pc = 0x3b0f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29472); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_3b0f18:
    // 0x3b0f18: 0x72652064  .word       0x72652064                   # INVALID     $s3, $a1, 0x2064 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b0f18u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x3B0F18 raw=0x72652064");
label_3b0f1c:
    // 0x3b0f1c: 0x64252072  daddiu      $a1, $at, 0x2072
    ctx->pc = 0x3b0f1cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)8306);
label_3b0f20:
    // 0x3b0f20: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x3b0f20u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3b0f24:
    // 0x3b0f24: 0x0  nop
    ctx->pc = 0x3b0f24u;
    // NOP
label_3b0f28:
    // 0x3b0f28: 0x3a595454  xori        $t9, $s2, 0x5454
    ctx->pc = 0x3b0f28u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)21588);
label_3b0f2c:
    // 0x3b0f2c: 0x72726520  .word       0x72726520                   # madd1       $t4, $s3, $s2 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b0f2cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_3b0f30:
    // 0x3b0f30: 0x2d697420  sltiu       $t1, $t3, 0x7420
    ctx->pc = 0x3b0f30u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)29728) ? 1 : 0);
label_3b0f34:
    // 0x3b0f34: 0x656c773e  daddiu      $t4, $t3, 0x773E
    ctx->pc = 0x3b0f34u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30526);
label_3b0f38:
    // 0x3b0f38: 0x30253d6e  andi        $a1, $at, 0x3D6E
    ctx->pc = 0x3b0f38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)15726);
label_3b0f3c:
    // 0x3b0f3c: 0xa7838  dsll        $t7, $t2, 0
    ctx->pc = 0x3b0f3cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) << 0);
label_3b0f40:
    // 0x3b0f40: 0x64252e30  daddiu      $a1, $at, 0x2E30
    ctx->pc = 0x3b0f40u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11824);
label_3b0f44:
    // 0x3b0f44: 0x0  nop
    ctx->pc = 0x3b0f44u;
    // NOP
label_3b0f48:
    // 0x3b0f48: 0x64252b65  daddiu      $a1, $at, 0x2B65
    ctx->pc = 0x3b0f48u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11109);
label_3b0f4c:
    // 0x3b0f4c: 0x0  nop
    ctx->pc = 0x3b0f4cu;
    // NOP
label_3b0f50:
    // 0x3b0f50: 0x642565  .word       0x00642565                   # or          $a0, $v1, $a0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0f50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_3b0f54:
    // 0x3b0f54: 0x0  nop
    ctx->pc = 0x3b0f54u;
    // NOP
label_3b0f58:
    // 0x3b0f58: 0x9999999a  lwr         $t9, -0x6666($t4)
    ctx->pc = 0x3b0f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 4294941082); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 25) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 25) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 25, merged64); }
label_3b0f5c:
    // 0x3b0f5c: 0x3fb99999  .word       0x3FB99999                   # lui         $t9, 0x9999 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0f5cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39321 << 16));
label_3b0f60:
    // 0x3b0f60: 0x9999999a  lwr         $t9, -0x6666($t4)
    ctx->pc = 0x3b0f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 4294941082); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 25) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 25) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 25, merged64); }
label_3b0f64:
    // 0x3b0f64: 0x3fb99999  .word       0x3FB99999                   # lui         $t9, 0x9999 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0f64u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39321 << 16));
label_3b0f68:
    // 0x3b0f68: 0x0  nop
    ctx->pc = 0x3b0f68u;
    // NOP
label_3b0f6c:
    // 0x3b0f6c: 0x412e8480  .word       0x412E8480                   # INVALID     $t1, $t6, -0x7B80 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b0f6cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x3B0F6C raw=0x412E8480");
label_3b0f70:
    // 0x3b0f70: 0x21460c  .word       0x0021460C                   # syscall     280 # 00210000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b0f70u;
    ctx->pc = 0x3B0F74u;
runtime->handleSyscall(rdram, ctx, 0x8518u);
label_3b0f74:
    // 0x3b0f74: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0f74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b0f78:
    // 0x3b0f78: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0f78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b0f7c:
    // 0x3b0f7c: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0f7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b0f80:
    // 0x3b0f80: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0f80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b0f84:
    // 0x3b0f84: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0f84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b0f88:
    // 0x3b0f88: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0f88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b0f8c:
    // 0x3b0f8c: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0f8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b0f90:
    // 0x3b0f90: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0f90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b0f94:
    // 0x3b0f94: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0f94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b0f98:
    // 0x3b0f98: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0f98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b0f9c:
    // 0x3b0f9c: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0f9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b0fa0:
    // 0x3b0fa0: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0fa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b0fa4:
    // 0x3b0fa4: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0fa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b0fa8:
    // 0x3b0fa8: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0fa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b0fac:
    // 0x3b0fac: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0facu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b0fb0:
    // 0x3b0fb0: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0fb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b0fb4:
    // 0x3b0fb4: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0fb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b0fb8:
    // 0x3b0fb8: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0fb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b0fbc:
    // 0x3b0fbc: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0fbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b0fc0:
    // 0x3b0fc0: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0fc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b0fc4:
    // 0x3b0fc4: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0fc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b0fc8:
    // 0x3b0fc8: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0fc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b0fcc:
    // 0x3b0fcc: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0fccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b0fd0:
    // 0x3b0fd0: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0fd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b0fd4:
    // 0x3b0fd4: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0fd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b0fd8:
    // 0x3b0fd8: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0fd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b0fdc:
    // 0x3b0fdc: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0fdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b0fe0:
    // 0x3b0fe0: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0fe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b0fe4:
    // 0x3b0fe4: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0fe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b0fe8:
    // 0x3b0fe8: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0fe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b0fec:
    // 0x3b0fec: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0fecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b0ff0:
    // 0x3b0ff0: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0ff0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b0ff4:
    // 0x3b0ff4: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0ff4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b0ff8:
    // 0x3b0ff8: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0ff8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b0ffc:
    // 0x3b0ffc: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b0ffcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b1000:
    // 0x3b1000: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1000u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b1004:
    // 0x3b1004: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1004u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b1008:
    // 0x3b1008: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1008u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b100c:
    // 0x3b100c: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b100cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b1010:
    // 0x3b1010: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1010u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b1014:
    // 0x3b1014: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1014u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b1018:
    // 0x3b1018: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1018u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b101c:
    // 0x3b101c: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b101cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b1020:
    // 0x3b1020: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1020u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b1024:
    // 0x3b1024: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1024u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b1028:
    // 0x3b1028: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b102c:
    // 0x3b102c: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b102cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b1030:
    // 0x3b1030: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1030u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b1034:
    // 0x3b1034: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1034u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b1038:
    // 0x3b1038: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1038u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b103c:
    // 0x3b103c: 0x214ad0  .word       0x00214AD0                   # mfhi        $t1 # 002102C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b103cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_3b1040:
    // 0x3b1040: 0x214820  add         $t1, $at, $at
    ctx->pc = 0x3b1040u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_3b1044:
    // 0x3b1044: 0x2149e0  .word       0x002149E0                   # add         $t1, $at, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1044u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_3b1048:
    // 0x3b1048: 0x2149e0  .word       0x002149E0                   # add         $t1, $at, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1048u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_3b104c:
    // 0x3b104c: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b104cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b1050:
    // 0x3b1050: 0x21469c  .word       0x0021469C                   # dmult       $at, $at # 00004680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1050u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B1050 raw=0x0021469C");
label_3b1054:
    // 0x3b1054: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1054u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b1058:
    // 0x3b1058: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1058u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b105c:
    // 0x3b105c: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b105cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b1060:
    // 0x3b1060: 0x214690  .word       0x00214690                   # mfhi        $t0 # 00210680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1060u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_3b1064:
    // 0x3b1064: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1064u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b1068:
    // 0x3b1068: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1068u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b106c:
    // 0x3b106c: 0x2146a4  .word       0x002146A4                   # and         $t0, $at, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b106cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 1) & GPR_U64(ctx, 1));
label_3b1070:
    // 0x3b1070: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1070u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b1074:
    // 0x3b1074: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1074u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b1078:
    // 0x3b1078: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b107c:
    // 0x3b107c: 0x214a2c  .word       0x00214A2C                   # dadd        $t1, $at, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b107cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_3b1080:
    // 0x3b1080: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1080u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b1084:
    // 0x3b1084: 0x214910  .word       0x00214910                   # mfhi        $t1 # 00210100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1084u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_3b1088:
    // 0x3b1088: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1088u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b108c:
    // 0x3b108c: 0x214b18  .word       0x00214B18                   # mult        $t1, $at, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b108cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b1090:
    // 0x3b1090: 0x214760  .word       0x00214760                   # add         $t0, $at, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1090u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_3b1094:
    // 0x3b1094: 0x0  nop
    ctx->pc = 0x3b1094u;
    // NOP
label_3b1098:
    // 0x3b1098: 0x2e2e2e2e  sltiu       $t6, $s1, 0x2E2E
    ctx->pc = 0x3b1098u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)11822) ? 1 : 0);
label_3b109c:
    // 0x3b109c: 0x0  nop
    ctx->pc = 0x3b109cu;
    // NOP
label_3b10a0:
    // 0x3b10a0: 0x2e2e2e2e  sltiu       $t6, $s1, 0x2E2E
    ctx->pc = 0x3b10a0u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)11822) ? 1 : 0);
label_3b10a4:
    // 0x3b10a4: 0x0  nop
    ctx->pc = 0x3b10a4u;
    // NOP
label_3b10a8:
    // 0x3b10a8: 0x6c6c61  .word       0x006C6C61                   # addu        $t5, $v1, $t4 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b10a8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_3b10ac:
    // 0x3b10ac: 0x0  nop
    ctx->pc = 0x3b10acu;
    // NOP
label_3b10b0:
    // 0x3b10b0: 0x306d6f72  andi        $t5, $v1, 0x6F72
    ctx->pc = 0x3b10b0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)28530);
label_3b10b4:
    // 0x3b10b4: 0x4e44553a  .word       0x4E44553A                   # INVALID     $s2, $a0, 0x553A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b10b4u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x3B10B4 raw=0x4E44553A");
label_3b10b8:
    // 0x3b10b8: 0x204c  syscall     129
    ctx->pc = 0x3b10b8u;
    ctx->pc = 0x3B10BCu;
runtime->handleSyscall(rdram, ctx, 0x81u);
label_3b10bc:
    // 0x3b10bc: 0x0  nop
    ctx->pc = 0x3b10bcu;
    // NOP
label_3b10c0:
    // 0x3b10c0: 0x206f6f74  addi        $t7, $v1, 0x6F74
    ctx->pc = 0x3b10c0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28532, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_3b10c4:
    // 0x3b10c4: 0x676e6f6c  daddiu      $t6, $k1, 0x6F6C
    ctx->pc = 0x3b10c4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28524);
label_3b10c8:
    // 0x3b10c8: 0x72617020  madd1       $t6, $s3, $at
    ctx->pc = 0x3b10c8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_3b10cc:
    // 0x3b10cc: 0x74656d61  .word       0x74656D61                   # INVALID     $v1, $a1, 0x6D61 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b10ccu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B10CC raw=0x74656D61");
label_3b10d0:
    // 0x3b10d0: 0x27207265  addiu       $zero, $t9, 0x7265
    ctx->pc = 0x3b10d0u;
    // NOP (addiu $zero, ...)
label_3b10d4:
    // 0x3b10d4: 0xa277325  j           func_89DCC94
label_3b10d8:
    if (ctx->pc == 0x3B10D8u) {
        ctx->pc = 0x3B10DCu;
        goto label_3b10dc;
    }
    ctx->pc = 0x3B10D4u;
    ctx->pc = 0x89DCC94u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x89DCC94u, 0x3B10D4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B10DCu;
label_3b10dc:
    // 0x3b10dc: 0x0  nop
    ctx->pc = 0x3b10dcu;
    // NOP
label_3b10e0:
    // 0x3b10e0: 0x0  nop
    ctx->pc = 0x3b10e0u;
    // NOP
label_3b10e4:
    // 0x3b10e4: 0x0  nop
    ctx->pc = 0x3b10e4u;
    // NOP
label_3b10e8:
    // 0x3b10e8: 0x0  nop
    ctx->pc = 0x3b10e8u;
    // NOP
label_3b10ec:
    // 0x3b10ec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b10ecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b10f0:
    // 0x3b10f0: 0x5040302  .word       0x05040302                   # INVALID     $t0, $a0, 0x302 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3b10f0u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x3B10F0 raw=0x05040302");
label_3b10f4:
    // 0x3b10f4: 0x9080706  j           func_4201C18
label_3b10f8:
    if (ctx->pc == 0x3B10F8u) {
        ctx->pc = 0x3B10F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B10F4u;
        // 0x3b10f8: 0xd0c0b0a  jal         func_4302C28 (Delay Slot)
        // JAL 0x4302C28 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B10FCu;
        goto label_3b10fc;
    }
    ctx->pc = 0x3B10F4u;
    ctx->pc = 0x3B10F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B10F4u;
    // 0x3b10f8: 0xd0c0b0a  jal         func_4302C28 (Delay Slot)
    // JAL 0x4302C28 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x4201C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4201C18u, 0x3B10F4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B10FCu;
label_3b10fc:
    // 0x3b10fc: 0x11100f0e  beq         $t0, $s0, . + 4 + (0xF0E << 2)
label_3b1100:
    if (ctx->pc == 0x3B1100u) {
        ctx->pc = 0x3B1100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B10FCu;
        // 0x3b1100: 0x141312  .word       0x00141312                   # mflo        $v0 # 00140300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 2, ctx->lo);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1104u;
        goto label_3b1104;
    }
    ctx->pc = 0x3B10FCu;
    {
        const bool branch_taken_0x3b10fc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 16));
        ctx->pc = 0x3B1100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B10FCu;
        // 0x3b1100: 0x141312  .word       0x00141312                   # mflo        $v0 # 00140300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 2, ctx->lo);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b10fc) {
            ctx->pc = 0x3B4D38u;
            return;
        }
    }
    ctx->pc = 0x3B1104u;
label_3b1104:
    // 0x3b1104: 0x0  nop
    ctx->pc = 0x3b1104u;
    // NOP
label_3b1108:
    // 0x3b1108: 0x0  nop
    ctx->pc = 0x3b1108u;
    // NOP
label_3b110c:
    // 0x3b110c: 0x0  nop
    ctx->pc = 0x3b110cu;
    // NOP
label_3b1110:
    // 0x3b1110: 0x2212fc  .word       0x002212FC                   # dsll32      $v0, $v0, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 11));
label_3b1114:
    // 0x3b1114: 0x2212fc  .word       0x002212FC                   # dsll32      $v0, $v0, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 11));
label_3b1118:
    // 0x3b1118: 0x2212fc  .word       0x002212FC                   # dsll32      $v0, $v0, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 11));
label_3b111c:
    // 0x3b111c: 0x221370  tge         $at, $v0, 77
    ctx->pc = 0x3b111cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_3b1120:
    // 0x3b1120: 0x2212fc  .word       0x002212FC                   # dsll32      $v0, $v0, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 11));
label_3b1124:
    // 0x3b1124: 0x2212fc  .word       0x002212FC                   # dsll32      $v0, $v0, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 11));
label_3b1128:
    // 0x3b1128: 0x2212fc  .word       0x002212FC                   # dsll32      $v0, $v0, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 11));
label_3b112c:
    // 0x3b112c: 0x2212fc  .word       0x002212FC                   # dsll32      $v0, $v0, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b112cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 11));
label_3b1130:
    // 0x3b1130: 0x2212a0  .word       0x002212A0                   # add         $v0, $at, $v0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1130u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_3b1134:
    // 0x3b1134: 0x2212a0  .word       0x002212A0                   # add         $v0, $at, $v0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1134u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_3b1138:
    // 0x3b1138: 0x2212a0  .word       0x002212A0                   # add         $v0, $at, $v0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1138u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_3b113c:
    // 0x3b113c: 0x2212ac  .word       0x002212AC                   # dadd        $v0, $at, $v0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b113cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_3b1140:
    // 0x3b1140: 0x2212a0  .word       0x002212A0                   # add         $v0, $at, $v0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1140u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_3b1144:
    // 0x3b1144: 0x2212a0  .word       0x002212A0                   # add         $v0, $at, $v0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1144u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_3b1148:
    // 0x3b1148: 0x2212a0  .word       0x002212A0                   # add         $v0, $at, $v0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1148u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_3b114c:
    // 0x3b114c: 0x2212a0  .word       0x002212A0                   # add         $v0, $at, $v0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b114cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_3b1150:
    // 0x3b1150: 0x227b00  .word       0x00227B00                   # sll         $t7, $v0, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1150u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
label_3b1154:
    // 0x3b1154: 0x227c1c  .word       0x00227C1C                   # dmult       $at, $v0 # 00007C00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1154u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B1154 raw=0x00227C1C");
label_3b1158:
    // 0x3b1158: 0x227d4c  .word       0x00227D4C                   # syscall     501 # 00220000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1158u;
    ctx->pc = 0x3B115Cu;
runtime->handleSyscall(rdram, ctx, 0x89F5u);
label_3b115c:
    // 0x3b115c: 0x227f80  .word       0x00227F80                   # sll         $t7, $v0, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b115cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 2), 30));
label_3b1160:
    // 0x3b1160: 0x228184  .word       0x00228184                   # sllv        $s0, $v0, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1160u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 1) & 0x1F));
label_3b1164:
    // 0x3b1164: 0x2283ac  .word       0x002283AC                   # dadd        $s0, $at, $v0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1164u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_3b1168:
    // 0x3b1168: 0x22851c  .word       0x0022851C                   # dmult       $at, $v0 # 00008500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1168u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B1168 raw=0x0022851C");
label_3b116c:
    // 0x3b116c: 0x228558  .word       0x00228558                   # mult        $s0, $at, $v0 # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b116cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_3b1170:
    // 0x3b1170: 0x22a1ac  .word       0x0022A1AC                   # dadd        $s4, $at, $v0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1170u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, r); }
label_3b1174:
    // 0x3b1174: 0x22a2ec  .word       0x0022A2EC                   # dadd        $s4, $at, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1174u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, r); }
label_3b1178:
    // 0x3b1178: 0x22a538  .word       0x0022A538                   # dsll        $s4, $v0, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1178u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << 20);
label_3b117c:
    // 0x3b117c: 0x22a564  .word       0x0022A564                   # and         $s4, $at, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b117cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 1) & GPR_U64(ctx, 2));
label_3b1180:
    // 0x3b1180: 0x22a68c  .word       0x0022A68C                   # syscall     666 # 00220000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1180u;
    ctx->pc = 0x3B1184u;
runtime->handleSyscall(rdram, ctx, 0x8A9Au);
label_3b1184:
    // 0x3b1184: 0x22a6c0  .word       0x0022A6C0                   # sll         $s4, $v0, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1184u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 27));
label_3b1188:
    // 0x3b1188: 0x0  nop
    ctx->pc = 0x3b1188u;
    // NOP
label_3b118c:
    // 0x3b118c: 0x0  nop
    ctx->pc = 0x3b118cu;
    // NOP
label_3b1190:
    // 0x3b1190: 0x23007c  .word       0x0023007C                   # dsll32      $zero, $v1, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1190u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 3) << (32 + 1));
label_3b1194:
    // 0x3b1194: 0x2302f8  .word       0x002302F8                   # dsll        $zero, $v1, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1194u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 3) << 11);
label_3b1198:
    // 0x3b1198: 0x230418  .word       0x00230418                   # mult        $zero, $at, $v1 # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1198u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3b119c:
    // 0x3b119c: 0x230728  .word       0x00230728                   # mfsa        $zero # 00230700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b119cu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_3b11a0:
    // 0x3b11a0: 0x230728  .word       0x00230728                   # mfsa        $zero # 00230700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b11a0u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_3b11a4:
    // 0x3b11a4: 0x230784  .word       0x00230784                   # sllv        $zero, $v1, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b11a4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 1) & 0x1F));
label_3b11a8:
    // 0x3b11a8: 0x0  nop
    ctx->pc = 0x3b11a8u;
    // NOP
label_3b11ac:
    // 0x3b11ac: 0x0  nop
    ctx->pc = 0x3b11acu;
    // NOP
label_3b11b0:
    // 0x3b11b0: 0x231424  .word       0x00231424                   # and         $v0, $at, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b11b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) & GPR_U64(ctx, 3));
label_3b11b4:
    // 0x3b11b4: 0x23161c  .word       0x0023161C                   # dmult       $at, $v1 # 00001600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b11b4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B11B4 raw=0x0023161C");
label_3b11b8:
    // 0x3b11b8: 0x231d5c  .word       0x00231D5C                   # dmult       $at, $v1 # 00001D40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b11b8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B11B8 raw=0x00231D5C");
label_3b11bc:
    // 0x3b11bc: 0x23231c  .word       0x0023231C                   # dmult       $at, $v1 # 00002300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b11bcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B11BC raw=0x0023231C");
label_3b11c0:
    // 0x3b11c0: 0x2323b4  teq         $at, $v1, 142
    ctx->pc = 0x3b11c0u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_3b11c4:
    // 0x3b11c4: 0x2327d0  .word       0x002327D0                   # mfhi        $a0 # 002307C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b11c4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_3b11c8:
    // 0x3b11c8: 0x232830  tge         $at, $v1, 160
    ctx->pc = 0x3b11c8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_3b11cc:
    // 0x3b11cc: 0x0  nop
    ctx->pc = 0x3b11ccu;
    // NOP
label_3b11d0:
    // 0x3b11d0: 0x2328c8  .word       0x002328C8                   # jr          $at # 000328C0 <InstrIdType: CPU_SPECIAL>
label_3b11d4:
    if (ctx->pc == 0x3B11D4u) {
        ctx->pc = 0x3B11D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B11D0u;
        // 0x3b11d4: 0x232940  .word       0x00232940                   # sll         $a1, $v1, 5 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B11D8u;
        goto label_3b11d8;
    }
    ctx->pc = 0x3B11D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x3B11D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B11D0u;
        // 0x3b11d4: 0x232940  .word       0x00232940                   # sll         $a1, $v1, 5 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B11D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B11D8u;
label_3b11d8:
    // 0x3b11d8: 0x232ac8  .word       0x00232AC8                   # jr          $at # 00032AC0 <InstrIdType: CPU_SPECIAL>
label_3b11dc:
    if (ctx->pc == 0x3B11DCu) {
        ctx->pc = 0x3B11DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B11D8u;
        // 0x3b11dc: 0x232c2c  .word       0x00232C2C                   # dadd        $a1, $at, $v1 # 00000400 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B11E0u;
        goto label_3b11e0;
    }
    ctx->pc = 0x3B11D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x3B11DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B11D8u;
        // 0x3b11dc: 0x232c2c  .word       0x00232C2C                   # dadd        $a1, $at, $v1 # 00000400 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B11D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B11E0u;
label_3b11e0:
    // 0x3b11e0: 0x232d30  tge         $at, $v1, 180
    ctx->pc = 0x3b11e0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_3b11e4:
    // 0x3b11e4: 0x232e2c  .word       0x00232E2C                   # dadd        $a1, $at, $v1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b11e4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_3b11e8:
    // 0x3b11e8: 0x0  nop
    ctx->pc = 0x3b11e8u;
    // NOP
label_3b11ec:
    // 0x3b11ec: 0x0  nop
    ctx->pc = 0x3b11ecu;
    // NOP
label_3b11f0:
    // 0x3b11f0: 0x232f38  .word       0x00232F38                   # dsll        $a1, $v1, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b11f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 28);
label_3b11f4:
    // 0x3b11f4: 0x233078  .word       0x00233078                   # dsll        $a2, $v1, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b11f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << 1);
label_3b11f8:
    // 0x3b11f8: 0x2331bc  .word       0x002331BC                   # dsll32      $a2, $v1, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b11f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 6));
label_3b11fc:
    // 0x3b11fc: 0x2333a8  .word       0x002333A8                   # mfsa        $a2 # 00230380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b11fcu;
    SET_GPR_U32(ctx, 6, ctx->sa);
label_3b1200:
    // 0x3b1200: 0x2333d4  .word       0x002333D4                   # dsllv       $a2, $v1, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1200u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (GPR_U32(ctx, 1) & 0x3F));
label_3b1204:
    // 0x3b1204: 0x2337ec  .word       0x002337EC                   # dadd        $a2, $at, $v1 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1204u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, r); }
label_3b1208:
    // 0x3b1208: 0x23381c  .word       0x0023381C                   # dmult       $at, $v1 # 00003800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1208u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B1208 raw=0x0023381C");
label_3b120c:
    // 0x3b120c: 0x0  nop
    ctx->pc = 0x3b120cu;
    // NOP
label_3b1210:
    // 0x3b1210: 0x20736f70  addi        $s3, $v1, 0x6F70
    ctx->pc = 0x3b1210u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28528, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_3b1214:
    // 0x3b1214: 0x252c6625  addiu       $t4, $t1, 0x6625
    ctx->pc = 0x3b1214u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 26149));
label_3b1218:
    // 0x3b1218: 0x66252c66  daddiu      $a1, $s1, 0x2C66
    ctx->pc = 0x3b1218u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)11366);
label_3b121c:
    // 0x3b121c: 0x0  nop
    ctx->pc = 0x3b121cu;
    // NOP
label_3b1220:
    // 0x3b1220: 0x206e7472  addi        $t6, $v1, 0x7472
    ctx->pc = 0x3b1220u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29810, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_3b1224:
    // 0x3b1224: 0x252c6425  addiu       $t4, $t1, 0x6425
    ctx->pc = 0x3b1224u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 25637));
label_3b1228:
    // 0x3b1228: 0x64252c64  daddiu      $a1, $at, 0x2C64
    ctx->pc = 0x3b1228u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11364);
label_3b122c:
    // 0x3b122c: 0x0  nop
    ctx->pc = 0x3b122cu;
    // NOP
label_3b1230:
    // 0x3b1230: 0x23f7cc  .word       0x0023F7CC                   # syscall     991 # 00230000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1230u;
    ctx->pc = 0x3B1234u;
runtime->handleSyscall(rdram, ctx, 0x8FDFu);
label_3b1234:
    // 0x3b1234: 0x23fa28  .word       0x0023FA28                   # mfsa        $ra # 00230200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1234u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_3b1238:
    // 0x3b1238: 0x23fac0  .word       0x0023FAC0                   # sll         $ra, $v1, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1238u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
label_3b123c:
    // 0x3b123c: 0x23fd4c  .word       0x0023FD4C                   # syscall     1013 # 00230000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b123cu;
    ctx->pc = 0x3B1240u;
runtime->handleSyscall(rdram, ctx, 0x8FF5u);
label_3b1240:
    // 0x3b1240: 0x23fd4c  .word       0x0023FD4C                   # syscall     1013 # 00230000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1240u;
    ctx->pc = 0x3B1244u;
runtime->handleSyscall(rdram, ctx, 0x8FF5u);
label_3b1244:
    // 0x3b1244: 0x23fd94  .word       0x0023FD94                   # dsllv       $ra, $v1, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1244u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 3) << (GPR_U32(ctx, 1) & 0x3F));
label_3b1248:
    // 0x3b1248: 0x20736f70  addi        $s3, $v1, 0x6F70
    ctx->pc = 0x3b1248u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28528, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_3b124c:
    // 0x3b124c: 0x252c6625  addiu       $t4, $t1, 0x6625
    ctx->pc = 0x3b124cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 26149));
label_3b1250:
    // 0x3b1250: 0x66252c66  daddiu      $a1, $s1, 0x2C66
    ctx->pc = 0x3b1250u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)11366);
label_3b1254:
    // 0x3b1254: 0x0  nop
    ctx->pc = 0x3b1254u;
    // NOP
label_3b1258:
    // 0x3b1258: 0x206e7472  addi        $t6, $v1, 0x7472
    ctx->pc = 0x3b1258u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29810, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_3b125c:
    // 0x3b125c: 0x252c6425  addiu       $t4, $t1, 0x6425
    ctx->pc = 0x3b125cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 25637));
label_3b1260:
    // 0x3b1260: 0x64252c64  daddiu      $a1, $at, 0x2C64
    ctx->pc = 0x3b1260u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11364);
label_3b1264:
    // 0x3b1264: 0x0  nop
    ctx->pc = 0x3b1264u;
    // NOP
label_3b1268:
    // 0x3b1268: 0x0  nop
    ctx->pc = 0x3b1268u;
    // NOP
label_3b126c:
    // 0x3b126c: 0x0  nop
    ctx->pc = 0x3b126cu;
    // NOP
label_3b1270:
    // 0x3b1270: 0x245c18  .word       0x00245C18                   # mult        $t3, $at, $a0 # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1270u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_3b1274:
    // 0x3b1274: 0x245ca4  .word       0x00245CA4                   # and         $t3, $at, $a0 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1274u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 1) & GPR_U64(ctx, 4));
label_3b1278:
    // 0x3b1278: 0x245df4  teq         $at, $a0, 375
    ctx->pc = 0x3b1278u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_3b127c:
    // 0x3b127c: 0x245ff4  teq         $at, $a0, 383
    ctx->pc = 0x3b127cu;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_3b1280:
    // 0x3b1280: 0x2463c4  .word       0x002463C4                   # sllv        $t4, $a0, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1280u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 1) & 0x1F));
label_3b1284:
    // 0x3b1284: 0x2464c0  .word       0x002464C0                   # sll         $t4, $a0, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1284u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 4), 19));
label_3b1288:
    // 0x3b1288: 0x0  nop
    ctx->pc = 0x3b1288u;
    // NOP
label_3b128c:
    // 0x3b128c: 0x0  nop
    ctx->pc = 0x3b128cu;
    // NOP
label_3b1290:
    // 0x3b1290: 0x249578  .word       0x00249578                   # dsll        $s2, $a0, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1290u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) << 21);
label_3b1294:
    // 0x3b1294: 0x249638  .word       0x00249638                   # dsll        $s2, $a0, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1294u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) << 24);
label_3b1298:
    // 0x3b1298: 0x249d3c  .word       0x00249D3C                   # dsll32      $s3, $a0, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1298u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) << (32 + 20));
label_3b129c:
    // 0x3b129c: 0x24a12c  .word       0x0024A12C                   # dadd        $s4, $at, $a0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b129cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 4); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, r); }
label_3b12a0:
    // 0x3b12a0: 0x24a5dc  .word       0x0024A5DC                   # dmult       $at, $a0 # 0000A5C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b12a0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B12A0 raw=0x0024A5DC");
label_3b12a4:
    // 0x3b12a4: 0x24a660  .word       0x0024A660                   # add         $s4, $at, $a0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b12a4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_3b12a8:
    // 0x3b12a8: 0x24a7d0  .word       0x0024A7D0                   # mfhi        $s4 # 002407C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b12a8u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_3b12ac:
    // 0x3b12ac: 0x24ab68  .word       0x0024AB68                   # mfsa        $s5 # 00240340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b12acu;
    SET_GPR_U32(ctx, 21, ctx->sa);
label_3b12b0:
    // 0x3b12b0: 0x24a854  .word       0x0024A854                   # dsllv       $s5, $a0, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b12b0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) << (GPR_U32(ctx, 1) & 0x3F));
label_3b12b4:
    // 0x3b12b4: 0x0  nop
    ctx->pc = 0x3b12b4u;
    // NOP
label_3b12b8:
    // 0x3b12b8: 0x0  nop
    ctx->pc = 0x3b12b8u;
    // NOP
label_3b12bc:
    // 0x3b12bc: 0x0  nop
    ctx->pc = 0x3b12bcu;
    // NOP
label_3b12c0:
    // 0x3b12c0: 0x2507ac  .word       0x002507AC                   # dadd        $zero, $at, $a1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b12c0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 5); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_3b12c4:
    // 0x3b12c4: 0x2507dc  .word       0x002507DC                   # dmult       $at, $a1 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b12c4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B12C4 raw=0x002507DC");
label_3b12c8:
    // 0x3b12c8: 0x25080c  .word       0x0025080C                   # syscall     32 # 00250000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b12c8u;
    ctx->pc = 0x3B12CCu;
runtime->handleSyscall(rdram, ctx, 0x9420u);
label_3b12cc:
    // 0x3b12cc: 0x25083c  .word       0x0025083C                   # dsll32      $at, $a1, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b12ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 5) << (32 + 0));
label_3b12d0:
    // 0x3b12d0: 0x25086c  .word       0x0025086C                   # dadd        $at, $at, $a1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b12d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 5); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_3b12d4:
    // 0x3b12d4: 0x25089c  .word       0x0025089C                   # dmult       $at, $a1 # 00000880 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b12d4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B12D4 raw=0x0025089C");
label_3b12d8:
    // 0x3b12d8: 0x2508cc  .word       0x002508CC                   # syscall     35 # 00250000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b12d8u;
    ctx->pc = 0x3B12DCu;
runtime->handleSyscall(rdram, ctx, 0x9423u);
label_3b12dc:
    // 0x3b12dc: 0x2508fc  .word       0x002508FC                   # dsll32      $at, $a1, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b12dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 5) << (32 + 3));
label_3b12e0:
    // 0x3b12e0: 0x25092c  .word       0x0025092C                   # dadd        $at, $at, $a1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b12e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 5); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_3b12e4:
    // 0x3b12e4: 0x0  nop
    ctx->pc = 0x3b12e4u;
    // NOP
label_3b12e8:
    // 0x3b12e8: 0x0  nop
    ctx->pc = 0x3b12e8u;
    // NOP
label_3b12ec:
    // 0x3b12ec: 0x0  nop
    ctx->pc = 0x3b12ecu;
    // NOP
label_3b12f0:
    // 0x3b12f0: 0x25befc  .word       0x0025BEFC                   # dsll32      $s7, $a1, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b12f0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) << (32 + 27));
label_3b12f4:
    // 0x3b12f4: 0x25befc  .word       0x0025BEFC                   # dsll32      $s7, $a1, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b12f4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) << (32 + 27));
label_3b12f8:
    // 0x3b12f8: 0x25befc  .word       0x0025BEFC                   # dsll32      $s7, $a1, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b12f8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) << (32 + 27));
label_3b12fc:
    // 0x3b12fc: 0x25befc  .word       0x0025BEFC                   # dsll32      $s7, $a1, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b12fcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) << (32 + 27));
label_3b1300:
    // 0x3b1300: 0x25ba10  .word       0x0025BA10                   # mfhi        $s7 # 00250200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1300u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_3b1304:
    // 0x3b1304: 0x25bb64  .word       0x0025BB64                   # and         $s7, $at, $a1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1304u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 1) & GPR_U64(ctx, 5));
label_3b1308:
    // 0x3b1308: 0x25befc  .word       0x0025BEFC                   # dsll32      $s7, $a1, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1308u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) << (32 + 27));
label_3b130c:
    // 0x3b130c: 0x25befc  .word       0x0025BEFC                   # dsll32      $s7, $a1, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b130cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) << (32 + 27));
label_3b1310:
    // 0x3b1310: 0x25befc  .word       0x0025BEFC                   # dsll32      $s7, $a1, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1310u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) << (32 + 27));
label_3b1314:
    // 0x3b1314: 0x25befc  .word       0x0025BEFC                   # dsll32      $s7, $a1, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1314u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) << (32 + 27));
label_3b1318:
    // 0x3b1318: 0x25befc  .word       0x0025BEFC                   # dsll32      $s7, $a1, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1318u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) << (32 + 27));
label_3b131c:
    // 0x3b131c: 0x25befc  .word       0x0025BEFC                   # dsll32      $s7, $a1, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b131cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) << (32 + 27));
label_3b1320:
    // 0x3b1320: 0x25bce4  .word       0x0025BCE4                   # and         $s7, $at, $a1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1320u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 1) & GPR_U64(ctx, 5));
label_3b1324:
    // 0x3b1324: 0x25babc  .word       0x0025BABC                   # dsll32      $s7, $a1, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1324u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) << (32 + 10));
label_3b1328:
    // 0x3b1328: 0x25befc  .word       0x0025BEFC                   # dsll32      $s7, $a1, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1328u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) << (32 + 27));
label_3b132c:
    // 0x3b132c: 0x25befc  .word       0x0025BEFC                   # dsll32      $s7, $a1, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b132cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) << (32 + 27));
label_3b1330:
    // 0x3b1330: 0x25ce2c  .word       0x0025CE2C                   # dadd        $t9, $at, $a1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1330u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 5); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 25, r); }
label_3b1334:
    // 0x3b1334: 0x25ce2c  .word       0x0025CE2C                   # dadd        $t9, $at, $a1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1334u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 5); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 25, r); }
label_3b1338:
    // 0x3b1338: 0x25ce2c  .word       0x0025CE2C                   # dadd        $t9, $at, $a1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1338u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 5); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 25, r); }
label_3b133c:
    // 0x3b133c: 0x25ce2c  .word       0x0025CE2C                   # dadd        $t9, $at, $a1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b133cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 5); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 25, r); }
label_3b1340:
    // 0x3b1340: 0x25cb60  .word       0x0025CB60                   # add         $t9, $at, $a1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1340u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_3b1344:
    // 0x3b1344: 0x25cbb8  .word       0x0025CBB8                   # dsll        $t9, $a1, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1344u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 5) << 14);
label_3b1348:
    // 0x3b1348: 0x25ce2c  .word       0x0025CE2C                   # dadd        $t9, $at, $a1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1348u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 5); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 25, r); }
label_3b134c:
    // 0x3b134c: 0x25ce2c  .word       0x0025CE2C                   # dadd        $t9, $at, $a1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b134cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 5); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 25, r); }
label_3b1350:
    // 0x3b1350: 0x25ce2c  .word       0x0025CE2C                   # dadd        $t9, $at, $a1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1350u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 5); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 25, r); }
label_3b1354:
    // 0x3b1354: 0x25ce2c  .word       0x0025CE2C                   # dadd        $t9, $at, $a1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1354u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 5); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 25, r); }
label_3b1358:
    // 0x3b1358: 0x25ce2c  .word       0x0025CE2C                   # dadd        $t9, $at, $a1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1358u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 5); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 25, r); }
label_3b135c:
    // 0x3b135c: 0x25ce2c  .word       0x0025CE2C                   # dadd        $t9, $at, $a1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b135cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 5); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 25, r); }
label_3b1360:
    // 0x3b1360: 0x25ccb0  tge         $at, $a1, 818
    ctx->pc = 0x3b1360u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
label_3b1364:
    // 0x3b1364: 0x25cb8c  .word       0x0025CB8C                   # syscall     814 # 00250000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1364u;
    ctx->pc = 0x3B1368u;
runtime->handleSyscall(rdram, ctx, 0x972Eu);
label_3b1368:
    // 0x3b1368: 0x25ce2c  .word       0x0025CE2C                   # dadd        $t9, $at, $a1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1368u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 5); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 25, r); }
label_3b136c:
    // 0x3b136c: 0x25ce2c  .word       0x0025CE2C                   # dadd        $t9, $at, $a1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b136cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 5); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 25, r); }
label_3b1370:
    // 0x3b1370: 0x260640  .word       0x00260640                   # sll         $zero, $a2, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1370u;
    
label_3b1374:
    // 0x3b1374: 0x260700  .word       0x00260700                   # sll         $zero, $a2, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1374u;
    
label_3b1378:
    // 0x3b1378: 0x2607c0  .word       0x002607C0                   # sll         $zero, $a2, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1378u;
    
label_3b137c:
    // 0x3b137c: 0x260898  .word       0x00260898                   # mult        $at, $at, $a2 # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b137cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_3b1380:
    // 0x3b1380: 0x260f34  teq         $at, $a2, 60
    ctx->pc = 0x3b1380u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_3b1384:
    // 0x3b1384: 0x260f34  teq         $at, $a2, 60
    ctx->pc = 0x3b1384u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_3b1388:
    // 0x3b1388: 0x260998  .word       0x00260998                   # mult        $at, $at, $a2 # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1388u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_3b138c:
    // 0x3b138c: 0x260a90  .word       0x00260A90                   # mfhi        $at # 00260280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b138cu;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_3b1390:
    // 0x3b1390: 0x260b80  .word       0x00260B80                   # sll         $at, $a2, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1390u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 6), 14));
label_3b1394:
    // 0x3b1394: 0x260c5c  .word       0x00260C5C                   # dmult       $at, $a2 # 00000C40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1394u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B1394 raw=0x00260C5C");
label_3b1398:
    // 0x3b1398: 0x260640  .word       0x00260640                   # sll         $zero, $a2, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1398u;
    
label_3b139c:
    // 0x3b139c: 0x260700  .word       0x00260700                   # sll         $zero, $a2, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b139cu;
    
label_3b13a0:
    // 0x3b13a0: 0x260f34  teq         $at, $a2, 60
    ctx->pc = 0x3b13a0u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_3b13a4:
    // 0x3b13a4: 0x260f34  teq         $at, $a2, 60
    ctx->pc = 0x3b13a4u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_3b13a8:
    // 0x3b13a8: 0x260d3c  .word       0x00260D3C                   # dsll32      $at, $a2, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b13a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 6) << (32 + 20));
label_3b13ac:
    // 0x3b13ac: 0x260e38  .word       0x00260E38                   # dsll        $at, $a2, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b13acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 6) << 24);
label_3b13b0:
    // 0x3b13b0: 0x2605a4  .word       0x002605A4                   # and         $zero, $at, $a2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b13b0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & GPR_U64(ctx, 6));
label_3b13b4:
    // 0x3b13b4: 0x2605a4  .word       0x002605A4                   # and         $zero, $at, $a2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b13b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & GPR_U64(ctx, 6));
label_3b13b8:
    // 0x3b13b8: 0x2605a4  .word       0x002605A4                   # and         $zero, $at, $a2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b13b8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & GPR_U64(ctx, 6));
label_3b13bc:
    // 0x3b13bc: 0x2605d8  .word       0x002605D8                   # mult        $zero, $at, $a2 # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b13bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3b13c0:
    // 0x3b13c0: 0x2605fc  .word       0x002605FC                   # dsll32      $zero, $a2, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b13c0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 6) << (32 + 23));
label_3b13c4:
    // 0x3b13c4: 0x2605fc  .word       0x002605FC                   # dsll32      $zero, $a2, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b13c4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 6) << (32 + 23));
label_3b13c8:
    // 0x3b13c8: 0x2605a4  .word       0x002605A4                   # and         $zero, $at, $a2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b13c8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & GPR_U64(ctx, 6));
label_3b13cc:
    // 0x3b13cc: 0x2605a4  .word       0x002605A4                   # and         $zero, $at, $a2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b13ccu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & GPR_U64(ctx, 6));
label_3b13d0:
    // 0x3b13d0: 0x2605a4  .word       0x002605A4                   # and         $zero, $at, $a2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b13d0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & GPR_U64(ctx, 6));
label_3b13d4:
    // 0x3b13d4: 0x2605a4  .word       0x002605A4                   # and         $zero, $at, $a2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b13d4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & GPR_U64(ctx, 6));
label_3b13d8:
    // 0x3b13d8: 0x2605a4  .word       0x002605A4                   # and         $zero, $at, $a2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b13d8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & GPR_U64(ctx, 6));
label_3b13dc:
    // 0x3b13dc: 0x2605a4  .word       0x002605A4                   # and         $zero, $at, $a2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b13dcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & GPR_U64(ctx, 6));
label_3b13e0:
    // 0x3b13e0: 0x2605fc  .word       0x002605FC                   # dsll32      $zero, $a2, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b13e0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 6) << (32 + 23));
label_3b13e4:
    // 0x3b13e4: 0x2605fc  .word       0x002605FC                   # dsll32      $zero, $a2, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b13e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 6) << (32 + 23));
label_3b13e8:
    // 0x3b13e8: 0x2605a4  .word       0x002605A4                   # and         $zero, $at, $a2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b13e8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & GPR_U64(ctx, 6));
label_3b13ec:
    // 0x3b13ec: 0x2605d8  .word       0x002605D8                   # mult        $zero, $at, $a2 # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b13ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3b13f0:
    // 0x3b13f0: 0x260360  .word       0x00260360                   # add         $zero, $at, $a2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b13f0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_3b13f4:
    // 0x3b13f4: 0x260360  .word       0x00260360                   # add         $zero, $at, $a2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b13f4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_3b13f8:
    // 0x3b13f8: 0x260360  .word       0x00260360                   # add         $zero, $at, $a2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b13f8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_3b13fc:
    // 0x3b13fc: 0x2603a0  .word       0x002603A0                   # add         $zero, $at, $a2 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b13fcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_3b1400:
    // 0x3b1400: 0x260424  .word       0x00260424                   # and         $zero, $at, $a2 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1400u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & GPR_U64(ctx, 6));
label_3b1404:
    // 0x3b1404: 0x260424  .word       0x00260424                   # and         $zero, $at, $a2 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1404u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & GPR_U64(ctx, 6));
label_3b1408:
    // 0x3b1408: 0x260360  .word       0x00260360                   # add         $zero, $at, $a2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1408u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_3b140c:
    // 0x3b140c: 0x260360  .word       0x00260360                   # add         $zero, $at, $a2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b140cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_3b1410:
    // 0x3b1410: 0x260360  .word       0x00260360                   # add         $zero, $at, $a2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1410u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_3b1414:
    // 0x3b1414: 0x260360  .word       0x00260360                   # add         $zero, $at, $a2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1414u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_3b1418:
    // 0x3b1418: 0x260360  .word       0x00260360                   # add         $zero, $at, $a2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1418u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_3b141c:
    // 0x3b141c: 0x260360  .word       0x00260360                   # add         $zero, $at, $a2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b141cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_3b1420:
    // 0x3b1420: 0x260424  .word       0x00260424                   # and         $zero, $at, $a2 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1420u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & GPR_U64(ctx, 6));
label_3b1424:
    // 0x3b1424: 0x260424  .word       0x00260424                   # and         $zero, $at, $a2 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1424u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & GPR_U64(ctx, 6));
label_3b1428:
    // 0x3b1428: 0x260360  .word       0x00260360                   # add         $zero, $at, $a2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1428u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_3b142c:
    // 0x3b142c: 0x2603ec  .word       0x002603EC                   # dadd        $zero, $at, $a2 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b142cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 6); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_3b1430:
    // 0x3b1430: 0x2600f4  teq         $at, $a2, 3
    ctx->pc = 0x3b1430u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_3b1434:
    // 0x3b1434: 0x2600f4  teq         $at, $a2, 3
    ctx->pc = 0x3b1434u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_3b1438:
    // 0x3b1438: 0x260248  .word       0x00260248                   # jr          $at # 00060240 <InstrIdType: CPU_SPECIAL>
label_3b143c:
    if (ctx->pc == 0x3B143Cu) {
        ctx->pc = 0x3B143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1438u;
        // 0x3b143c: 0x260248  .word       0x00260248                   # jr          $at # 00060240 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1440u;
        goto label_3b1440;
    }
    ctx->pc = 0x3B1438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x3B143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1438u;
        // 0x3b143c: 0x260248  .word       0x00260248                   # jr          $at # 00060240 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1438u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B1440u;
label_3b1440:
    // 0x3b1440: 0x260324  .word       0x00260324                   # and         $zero, $at, $a2 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1440u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & GPR_U64(ctx, 6));
label_3b1444:
    // 0x3b1444: 0x260324  .word       0x00260324                   # and         $zero, $at, $a2 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1444u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & GPR_U64(ctx, 6));
label_3b1448:
    // 0x3b1448: 0x2600f4  teq         $at, $a2, 3
    ctx->pc = 0x3b1448u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_3b144c:
    // 0x3b144c: 0x2600f4  teq         $at, $a2, 3
    ctx->pc = 0x3b144cu;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_3b1450:
    // 0x3b1450: 0x2600f4  teq         $at, $a2, 3
    ctx->pc = 0x3b1450u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_3b1454:
    // 0x3b1454: 0x2600f4  teq         $at, $a2, 3
    ctx->pc = 0x3b1454u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_3b1458:
    // 0x3b1458: 0x260248  .word       0x00260248                   # jr          $at # 00060240 <InstrIdType: CPU_SPECIAL>
label_3b145c:
    if (ctx->pc == 0x3B145Cu) {
        ctx->pc = 0x3B145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1458u;
        // 0x3b145c: 0x260248  .word       0x00260248                   # jr          $at # 00060240 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1460u;
        goto label_3b1460;
    }
    ctx->pc = 0x3B1458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x3B145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1458u;
        // 0x3b145c: 0x260248  .word       0x00260248                   # jr          $at # 00060240 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1458u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B1460u;
label_3b1460:
    // 0x3b1460: 0x260324  .word       0x00260324                   # and         $zero, $at, $a2 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1460u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & GPR_U64(ctx, 6));
label_3b1464:
    // 0x3b1464: 0x260324  .word       0x00260324                   # and         $zero, $at, $a2 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1464u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & GPR_U64(ctx, 6));
label_3b1468:
    // 0x3b1468: 0x260248  .word       0x00260248                   # jr          $at # 00060240 <InstrIdType: CPU_SPECIAL>
label_3b146c:
    if (ctx->pc == 0x3B146Cu) {
        ctx->pc = 0x3B146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1468u;
        // 0x3b146c: 0x260248  .word       0x00260248                   # jr          $at # 00060240 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1470u;
        goto label_3b1470;
    }
    ctx->pc = 0x3B1468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x3B146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1468u;
        // 0x3b146c: 0x260248  .word       0x00260248                   # jr          $at # 00060240 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1468u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B1470u;
label_3b1470:
    // 0x3b1470: 0x66253d79  daddiu      $a1, $s1, 0x3D79
    ctx->pc = 0x3b1470u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)15737);
label_3b1474:
    // 0x3b1474: 0x253d7820  addiu       $sp, $t1, 0x7820
    ctx->pc = 0x3b1474u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 9), 30752));
label_3b1478:
    // 0x3b1478: 0x66  .word       0x00000066                   # xor         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1478u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_3b147c:
    // 0x3b147c: 0x0  nop
    ctx->pc = 0x3b147cu;
    // NOP
label_3b1480:
    // 0x3b1480: 0x26b33c  .word       0x0026B33C                   # dsll32      $s6, $a2, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1480u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) << (32 + 12));
label_3b1484:
    // 0x3b1484: 0x26b66c  .word       0x0026B66C                   # dadd        $s6, $at, $a2 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1484u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 6); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_3b1488:
    // 0x3b1488: 0x26b7ac  .word       0x0026B7AC                   # dadd        $s6, $at, $a2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1488u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 6); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_3b148c:
    // 0x3b148c: 0x26b804  sllv        $s7, $a2, $at
    ctx->pc = 0x3b148cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 1) & 0x1F));
label_3b1490:
    // 0x3b1490: 0x26b98c  .word       0x0026B98C                   # syscall     742 # 00260000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1490u;
    ctx->pc = 0x3B1494u;
runtime->handleSyscall(rdram, ctx, 0x9AE6u);
label_3b1494:
    // 0x3b1494: 0x26bb44  .word       0x0026BB44                   # sllv        $s7, $a2, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1494u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 1) & 0x1F));
label_3b1498:
    // 0x3b1498: 0x0  nop
    ctx->pc = 0x3b1498u;
    // NOP
label_3b149c:
    // 0x3b149c: 0x0  nop
    ctx->pc = 0x3b149cu;
    // NOP
label_3b14a0:
    // 0x3b14a0: 0x26c354  .word       0x0026C354                   # dsllv       $t8, $a2, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b14a0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 6) << (GPR_U32(ctx, 1) & 0x3F));
label_3b14a4:
    // 0x3b14a4: 0x26c354  .word       0x0026C354                   # dsllv       $t8, $a2, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b14a4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 6) << (GPR_U32(ctx, 1) & 0x3F));
label_3b14a8:
    // 0x3b14a8: 0x26c354  .word       0x0026C354                   # dsllv       $t8, $a2, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b14a8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 6) << (GPR_U32(ctx, 1) & 0x3F));
label_3b14ac:
    // 0x3b14ac: 0x26c498  .word       0x0026C498                   # mult        $t8, $at, $a2 # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b14acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
label_3b14b0:
    // 0x3b14b0: 0x26c590  .word       0x0026C590                   # mfhi        $t8 # 00260580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b14b0u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_3b14b4:
    // 0x3b14b4: 0x26c688  .word       0x0026C688                   # jr          $at # 0006C680 <InstrIdType: CPU_SPECIAL>
label_3b14b8:
    if (ctx->pc == 0x3B14B8u) {
        ctx->pc = 0x3B14B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B14B4u;
        // 0x3b14b8: 0x26c790  .word       0x0026C790                   # mfhi        $t8 # 00260780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 24, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B14BCu;
        goto label_3b14bc;
    }
    ctx->pc = 0x3B14B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x3B14B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B14B4u;
        // 0x3b14b8: 0x26c790  .word       0x0026C790                   # mfhi        $t8 # 00260780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 24, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B14B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B14BCu;
label_3b14bc:
    // 0x3b14bc: 0x26c878  .word       0x0026C878                   # dsll        $t9, $a2, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b14bcu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 6) << 1);
label_3b14c0:
    // 0x3b14c0: 0x26c898  .word       0x0026C898                   # mult        $t9, $at, $a2 # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b14c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_3b14c4:
    // 0x3b14c4: 0x26c8b8  .word       0x0026C8B8                   # dsll        $t9, $a2, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b14c4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 6) << 2);
label_3b14c8:
    // 0x3b14c8: 0x26c914  .word       0x0026C914                   # dsllv       $t9, $a2, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b14c8u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 6) << (GPR_U32(ctx, 1) & 0x3F));
label_3b14cc:
    // 0x3b14cc: 0x0  nop
    ctx->pc = 0x3b14ccu;
    // NOP
label_3b14d0:
    // 0x3b14d0: 0x26c04c  .word       0x0026C04C                   # syscall     769 # 00260000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b14d0u;
    ctx->pc = 0x3B14D4u;
runtime->handleSyscall(rdram, ctx, 0x9B01u);
label_3b14d4:
    // 0x3b14d4: 0x26c074  teq         $at, $a2, 769
    ctx->pc = 0x3b14d4u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_3b14d8:
    // 0x3b14d8: 0x26c09c  .word       0x0026C09C                   # dmult       $at, $a2 # 0000C080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b14d8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B14D8 raw=0x0026C09C");
label_3b14dc:
    // 0x3b14dc: 0x26c0c8  .word       0x0026C0C8                   # jr          $at # 0006C0C0 <InstrIdType: CPU_SPECIAL>
label_3b14e0:
    if (ctx->pc == 0x3B14E0u) {
        ctx->pc = 0x3B14E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B14DCu;
        // 0x3b14e0: 0x26c0f0  tge         $at, $a2, 771 (Delay Slot)
        if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B14E4u;
        goto label_3b14e4;
    }
    ctx->pc = 0x3B14DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x3B14E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B14DCu;
        // 0x3b14e0: 0x26c0f0  tge         $at, $a2, 771 (Delay Slot)
        if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B14DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B14E4u;
label_3b14e4:
    // 0x3b14e4: 0x26c118  .word       0x0026C118                   # mult        $t8, $at, $a2 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b14e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
label_3b14e8:
    // 0x3b14e8: 0x26c140  .word       0x0026C140                   # sll         $t8, $a2, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b14e8u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_3b14ec:
    // 0x3b14ec: 0x26c174  teq         $at, $a2, 773
    ctx->pc = 0x3b14ecu;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_3b14f0:
    // 0x3b14f0: 0x26c1a0  .word       0x0026C1A0                   # add         $t8, $at, $a2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b14f0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_3b14f4:
    // 0x3b14f4: 0x26c1cc  .word       0x0026C1CC                   # syscall     775 # 00260000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b14f4u;
    ctx->pc = 0x3B14F8u;
runtime->handleSyscall(rdram, ctx, 0x9B07u);
label_3b14f8:
    // 0x3b14f8: 0x26c1f8  .word       0x0026C1F8                   # dsll        $t8, $a2, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b14f8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 6) << 7);
label_3b14fc:
    // 0x3b14fc: 0x0  nop
    ctx->pc = 0x3b14fcu;
    // NOP
label_3b1500:
    // 0x3b1500: 0x26ca64  .word       0x0026CA64                   # and         $t9, $at, $a2 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1500u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 1) & GPR_U64(ctx, 6));
label_3b1504:
    // 0x3b1504: 0x26cadc  .word       0x0026CADC                   # dmult       $at, $a2 # 0000CAC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1504u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B1504 raw=0x0026CADC");
label_3b1508:
    // 0x3b1508: 0x26cbec  .word       0x0026CBEC                   # dadd        $t9, $at, $a2 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1508u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 6); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 25, r); }
label_3b150c:
    // 0x3b150c: 0x26cc1c  .word       0x0026CC1C                   # dmult       $at, $a2 # 0000CC00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b150cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B150C raw=0x0026CC1C");
label_3b1510:
    // 0x3b1510: 0x26cd64  .word       0x0026CD64                   # and         $t9, $at, $a2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1510u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 1) & GPR_U64(ctx, 6));
label_3b1514:
    // 0x3b1514: 0x26cdb8  .word       0x0026CDB8                   # dsll        $t9, $a2, 22 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1514u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 6) << 22);
label_3b1518:
    // 0x3b1518: 0x0  nop
    ctx->pc = 0x3b1518u;
    // NOP
label_3b151c:
    // 0x3b151c: 0x0  nop
    ctx->pc = 0x3b151cu;
    // NOP
label_3b1520:
    // 0x3b1520: 0x26f31c  .word       0x0026F31C                   # dmult       $at, $a2 # 0000F300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1520u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B1520 raw=0x0026F31C");
label_3b1524:
    // 0x3b1524: 0x26f3f0  tge         $at, $a2, 975
    ctx->pc = 0x3b1524u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_3b1528:
    // 0x3b1528: 0x26f55c  .word       0x0026F55C                   # dmult       $at, $a2 # 0000F540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1528u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B1528 raw=0x0026F55C");
label_3b152c:
    // 0x3b152c: 0x26f5c0  .word       0x0026F5C0                   # sll         $fp, $a2, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b152cu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 6), 23));
label_3b1530:
    // 0x3b1530: 0x26f628  .word       0x0026F628                   # mfsa        $fp # 00260600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1530u;
    SET_GPR_U32(ctx, 30, ctx->sa);
label_3b1534:
    // 0x3b1534: 0x26f6b8  .word       0x0026F6B8                   # dsll        $fp, $a2, 26 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1534u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 6) << 26);
label_3b1538:
    // 0x3b1538: 0x26f71c  .word       0x0026F71C                   # dmult       $at, $a2 # 0000F700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1538u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B1538 raw=0x0026F71C");
label_3b153c:
    // 0x3b153c: 0x26f76c  .word       0x0026F76C                   # dadd        $fp, $at, $a2 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b153cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 6); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 30, r); }
label_3b1540:
    // 0x3b1540: 0x26f880  .word       0x0026F880                   # sll         $ra, $a2, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1540u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3b1544:
    // 0x3b1544: 0x26fb04  .word       0x0026FB04                   # sllv        $ra, $a2, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1544u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 1) & 0x1F));
label_3b1548:
    // 0x3b1548: 0x26fc58  .word       0x0026FC58                   # mult        $ra, $at, $a2 # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1548u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_3b154c:
    // 0x3b154c: 0x26fcb0  tge         $at, $a2, 1010
    ctx->pc = 0x3b154cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_3b1550:
    // 0x3b1550: 0x26fdf0  tge         $at, $a2, 1015
    ctx->pc = 0x3b1550u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_3b1554:
    // 0x3b1554: 0x26ff1c  .word       0x0026FF1C                   # dmult       $at, $a2 # 0000FF00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1554u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B1554 raw=0x0026FF1C");
label_3b1558:
    // 0x3b1558: 0x270234  teq         $at, $a3, 8
    ctx->pc = 0x3b1558u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_3b155c:
    // 0x3b155c: 0x270274  teq         $at, $a3, 9
    ctx->pc = 0x3b155cu;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_3b1560:
    // 0x3b1560: 0x2704c0  .word       0x002704C0                   # sll         $zero, $a3, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1560u;
    
label_3b1564:
    // 0x3b1564: 0x2704f8  .word       0x002704F8                   # dsll        $zero, $a3, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1564u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 7) << 19);
label_3b1568:
    // 0x3b1568: 0x270588  .word       0x00270588                   # jr          $at # 00070580 <InstrIdType: CPU_SPECIAL>
label_3b156c:
    if (ctx->pc == 0x3B156Cu) {
        ctx->pc = 0x3B156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1568u;
        // 0x3b156c: 0x2705b8  .word       0x002705B8                   # dsll        $zero, $a3, 22 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 7) << 22);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1570u;
        goto label_3b1570;
    }
    ctx->pc = 0x3B1568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x3B156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1568u;
        // 0x3b156c: 0x2705b8  .word       0x002705B8                   # dsll        $zero, $a3, 22 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 7) << 22);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1568u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B1570u;
label_3b1570:
    // 0x3b1570: 0x270648  .word       0x00270648                   # jr          $at # 00070640 <InstrIdType: CPU_SPECIAL>
label_3b1574:
    if (ctx->pc == 0x3B1574u) {
        ctx->pc = 0x3B1574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1570u;
        // 0x3b1574: 0x270678  .word       0x00270678                   # dsll        $zero, $a3, 25 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 7) << 25);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1578u;
        goto label_3b1578;
    }
    ctx->pc = 0x3B1570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x3B1574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1570u;
        // 0x3b1574: 0x270678  .word       0x00270678                   # dsll        $zero, $a3, 25 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 7) << 25);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1570u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B1578u;
label_3b1578:
    // 0x3b1578: 0x270708  .word       0x00270708                   # jr          $at # 00070700 <InstrIdType: CPU_SPECIAL>
label_3b157c:
    if (ctx->pc == 0x3B157Cu) {
        ctx->pc = 0x3B157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1578u;
        // 0x3b157c: 0x270738  .word       0x00270738                   # dsll        $zero, $a3, 28 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 7) << 28);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1580u;
        goto label_3b1580;
    }
    ctx->pc = 0x3B1578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x3B157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1578u;
        // 0x3b157c: 0x270738  .word       0x00270738                   # dsll        $zero, $a3, 28 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 7) << 28);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1578u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B1580u;
label_3b1580:
    // 0x3b1580: 0x277cc8  .word       0x00277CC8                   # jr          $at # 00077CC0 <InstrIdType: CPU_SPECIAL>
label_3b1584:
    if (ctx->pc == 0x3B1584u) {
        ctx->pc = 0x3B1584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1580u;
        // 0x3b1584: 0x277d5c  .word       0x00277D5C                   # dmult       $at, $a3 # 00007D40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B1584 raw=0x00277D5C");
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1588u;
        goto label_3b1588;
    }
    ctx->pc = 0x3B1580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x3B1584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1580u;
        // 0x3b1584: 0x277d5c  .word       0x00277D5C                   # dmult       $at, $a3 # 00007D40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B1584 raw=0x00277D5C");
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1580u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B1588u;
label_3b1588:
    // 0x3b1588: 0x277e04  .word       0x00277E04                   # sllv        $t7, $a3, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1588u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 1) & 0x1F));
label_3b158c:
    // 0x3b158c: 0x277e9c  .word       0x00277E9C                   # dmult       $at, $a3 # 00007E80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b158cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B158C raw=0x00277E9C");
label_3b1590:
    // 0x3b1590: 0x277f40  .word       0x00277F40                   # sll         $t7, $a3, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1590u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 7), 29));
label_3b1594:
    // 0x3b1594: 0x277ff8  .word       0x00277FF8                   # dsll        $t7, $a3, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1594u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) << 31);
label_3b1598:
    // 0x3b1598: 0x0  nop
    ctx->pc = 0x3b1598u;
    // NOP
label_3b159c:
    // 0x3b159c: 0x0  nop
    ctx->pc = 0x3b159cu;
    // NOP
label_3b15a0:
    // 0x3b15a0: 0x27bc70  tge         $at, $a3, 753
    ctx->pc = 0x3b15a0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_3b15a4:
    // 0x3b15a4: 0x27bd60  .word       0x0027BD60                   # add         $s7, $at, $a3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b15a4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_3b15a8:
    // 0x3b15a8: 0x27bea0  .word       0x0027BEA0                   # add         $s7, $at, $a3 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b15a8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_3b15ac:
    // 0x3b15ac: 0x27bdd0  .word       0x0027BDD0                   # mfhi        $s7 # 002705C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b15acu;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_3b15b0:
    // 0x3b15b0: 0x27be40  .word       0x0027BE40                   # sll         $s7, $a3, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b15b0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 7), 25));
label_3b15b4:
    // 0x3b15b4: 0x27c10c  .word       0x0027C10C                   # syscall     772 # 00270000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b15b4u;
    ctx->pc = 0x3B15B8u;
runtime->handleSyscall(rdram, ctx, 0x9F04u);
label_3b15b8:
    // 0x3b15b8: 0x0  nop
    ctx->pc = 0x3b15b8u;
    // NOP
label_3b15bc:
    // 0x3b15bc: 0x0  nop
    ctx->pc = 0x3b15bcu;
    // NOP
label_3b15c0:
    // 0x3b15c0: 0x27c190  .word       0x0027C190                   # mfhi        $t8 # 00270180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b15c0u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_3b15c4:
    // 0x3b15c4: 0x27c1cc  .word       0x0027C1CC                   # syscall     775 # 00270000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b15c4u;
    ctx->pc = 0x3B15C8u;
runtime->handleSyscall(rdram, ctx, 0x9F07u);
label_3b15c8:
    // 0x3b15c8: 0x27c234  teq         $at, $a3, 776
    ctx->pc = 0x3b15c8u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_3b15cc:
    // 0x3b15cc: 0x27c26c  .word       0x0027C26C                   # dadd        $t8, $at, $a3 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b15ccu;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 7); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 24, r); }
label_3b15d0:
    // 0x3b15d0: 0x27c290  .word       0x0027C290                   # mfhi        $t8 # 00270280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b15d0u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_3b15d4:
    // 0x3b15d4: 0x27c380  .word       0x0027C380                   # sll         $t8, $a3, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b15d4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 7), 14));
label_3b15d8:
    // 0x3b15d8: 0x0  nop
    ctx->pc = 0x3b15d8u;
    // NOP
label_3b15dc:
    // 0x3b15dc: 0x0  nop
    ctx->pc = 0x3b15dcu;
    // NOP
label_3b15e0:
    // 0x3b15e0: 0x27ca80  .word       0x0027CA80                   # sll         $t9, $a3, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b15e0u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 7), 10));
label_3b15e4:
    // 0x3b15e4: 0x27caa0  .word       0x0027CAA0                   # add         $t9, $at, $a3 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b15e4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_3b15e8:
    // 0x3b15e8: 0x27cb08  .word       0x0027CB08                   # jr          $at # 0007CB00 <InstrIdType: CPU_SPECIAL>
label_3b15ec:
    if (ctx->pc == 0x3B15ECu) {
        ctx->pc = 0x3B15ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B15E8u;
        // 0x3b15ec: 0x27cb28  .word       0x0027CB28                   # mfsa        $t9 # 00270300 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 25, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B15F0u;
        goto label_3b15f0;
    }
    ctx->pc = 0x3B15E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x3B15ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B15E8u;
        // 0x3b15ec: 0x27cb28  .word       0x0027CB28                   # mfsa        $t9 # 00270300 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 25, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B15E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B15F0u;
label_3b15f0:
    // 0x3b15f0: 0x27cbf0  tge         $at, $a3, 815
    ctx->pc = 0x3b15f0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_3b15f4:
    // 0x3b15f4: 0x27cc08  .word       0x0027CC08                   # jr          $at # 0007CC00 <InstrIdType: CPU_SPECIAL>
label_3b15f8:
    if (ctx->pc == 0x3B15F8u) {
        ctx->pc = 0x3B15F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B15F4u;
        // 0x3b15f8: 0x27ce40  .word       0x0027CE40                   # sll         $t9, $a3, 25 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 7), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B15FCu;
        goto label_3b15fc;
    }
    ctx->pc = 0x3B15F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x3B15F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B15F4u;
        // 0x3b15f8: 0x27ce40  .word       0x0027CE40                   # sll         $t9, $a3, 25 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 7), 25));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B15F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B15FCu;
label_3b15fc:
    // 0x3b15fc: 0x27cc6c  .word       0x0027CC6C                   # dadd        $t9, $at, $a3 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b15fcu;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 7); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 25, r); }
label_3b1600:
    // 0x3b1600: 0x27cc88  .word       0x0027CC88                   # jr          $at # 0007CC80 <InstrIdType: CPU_SPECIAL>
label_3b1604:
    if (ctx->pc == 0x3B1604u) {
        ctx->pc = 0x3B1604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1600u;
        // 0x3b1604: 0x27ccf0  tge         $at, $a3, 819 (Delay Slot)
        if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1608u;
        goto label_3b1608;
    }
    ctx->pc = 0x3B1600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x3B1604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1600u;
        // 0x3b1604: 0x27ccf0  tge         $at, $a3, 819 (Delay Slot)
        if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1600u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B1608u;
label_3b1608:
    // 0x3b1608: 0x27cd10  .word       0x0027CD10                   # mfhi        $t9 # 00270500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1608u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_3b160c:
    // 0x3b160c: 0x27cdd8  .word       0x0027CDD8                   # mult        $t9, $at, $a3 # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b160cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_3b1610:
    // 0x3b1610: 0x27cdf0  tge         $at, $a3, 823
    ctx->pc = 0x3b1610u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_3b1614:
    // 0x3b1614: 0x0  nop
    ctx->pc = 0x3b1614u;
    // NOP
label_3b1618:
    // 0x3b1618: 0x0  nop
    ctx->pc = 0x3b1618u;
    // NOP
label_3b161c:
    // 0x3b161c: 0x0  nop
    ctx->pc = 0x3b161cu;
    // NOP
label_3b1620:
    // 0x3b1620: 0x280940  .word       0x00280940                   # sll         $at, $t0, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1620u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_3b1624:
    // 0x3b1624: 0x280444  .word       0x00280444                   # sllv        $zero, $t0, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1624u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 1) & 0x1F));
label_3b1628:
    // 0x3b1628: 0x2805f0  tge         $at, $t0, 23
    ctx->pc = 0x3b1628u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_3b162c:
    // 0x3b162c: 0x2805f0  tge         $at, $t0, 23
    ctx->pc = 0x3b162cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_3b1630:
    // 0x3b1630: 0x280940  .word       0x00280940                   # sll         $at, $t0, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1630u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_3b1634:
    // 0x3b1634: 0x280c90  .word       0x00280C90                   # mfhi        $at # 00280480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1634u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_3b1638:
    // 0x3b1638: 0x280f38  .word       0x00280F38                   # dsll        $at, $t0, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1638u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 8) << 28);
label_3b163c:
    // 0x3b163c: 0x280794  .word       0x00280794                   # dsllv       $zero, $t0, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b163cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) << (GPR_U32(ctx, 1) & 0x3F));
label_3b1640:
    // 0x3b1640: 0x280794  .word       0x00280794                   # dsllv       $zero, $t0, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1640u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) << (GPR_U32(ctx, 1) & 0x3F));
label_3b1644:
    // 0x3b1644: 0x0  nop
    ctx->pc = 0x3b1644u;
    // NOP
label_3b1648:
    // 0x3b1648: 0x0  nop
    ctx->pc = 0x3b1648u;
    // NOP
label_3b164c:
    // 0x3b164c: 0x0  nop
    ctx->pc = 0x3b164cu;
    // NOP
label_3b1650:
    // 0x3b1650: 0x2830f0  tge         $at, $t0, 195
    ctx->pc = 0x3b1650u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_3b1654:
    // 0x3b1654: 0x2830f0  tge         $at, $t0, 195
    ctx->pc = 0x3b1654u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_3b1658:
    // 0x3b1658: 0x2830f0  tge         $at, $t0, 195
    ctx->pc = 0x3b1658u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_3b165c:
    // 0x3b165c: 0x2830f0  tge         $at, $t0, 195
    ctx->pc = 0x3b165cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_3b1660:
    // 0x3b1660: 0x2830f0  tge         $at, $t0, 195
    ctx->pc = 0x3b1660u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_3b1664:
    // 0x3b1664: 0x2830f0  tge         $at, $t0, 195
    ctx->pc = 0x3b1664u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_3b1668:
    // 0x3b1668: 0x2830f0  tge         $at, $t0, 195
    ctx->pc = 0x3b1668u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_3b166c:
    // 0x3b166c: 0x2830f0  tge         $at, $t0, 195
    ctx->pc = 0x3b166cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_3b1670:
    // 0x3b1670: 0x65646166  daddiu      $a0, $t3, 0x6166
    ctx->pc = 0x3b1670u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24934);
label_3b1674:
    // 0x3b1674: 0x6625093a  daddiu      $a1, $s1, 0x93A
    ctx->pc = 0x3b1674u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)2362);
label_3b1678:
    // 0x3b1678: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x3b1678u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3b167c:
    // 0x3b167c: 0x0  nop
    ctx->pc = 0x3b167cu;
    // NOP
label_3b1680:
    // 0x3b1680: 0x68706c61  ldl         $s0, 0x6C61($v1)
    ctx->pc = 0x3b1680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27745); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
label_3b1684:
    // 0x3b1684: 0x65735f61  daddiu      $s3, $t3, 0x5F61
    ctx->pc = 0x3b1684u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24417);
label_3b1688:
    // 0x3b1688: 0x203a2074  addi        $k0, $at, 0x2074
    ctx->pc = 0x3b1688u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8308, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_3b168c:
    // 0x3b168c: 0x6425  .word       0x00006425                   # move        $t4, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b168cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_3b1690:
    // 0x3b1690: 0x6f6e5f72  ldr         $t6, 0x5F72($k1)
    ctx->pc = 0x3b1690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24434); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_3b1694:
    // 0x3b1694: 0x3a5d335b  xori        $sp, $s2, 0x335B
    ctx->pc = 0x3b1694u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)13147);
label_3b1698:
    // 0x3b1698: 0x64312509  daddiu      $s1, $at, 0x2509
    ctx->pc = 0x3b1698u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)9481);
label_3b169c:
    // 0x3b169c: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x3b169cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3b16a0:
    // 0x3b16a0: 0x206d756e  addi        $t5, $v1, 0x756E
    ctx->pc = 0x3b16a0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30062, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
label_3b16a4:
    // 0x3b16a4: 0x7420666f  .word       0x7420666F                   # INVALID     $at, $zero, 0x666F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b16a4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B16A4 raw=0x7420666F");
label_3b16a8:
    // 0x3b16a8: 0x3a6e7275  xori        $t6, $s3, 0x7275
    ctx->pc = 0x3b16a8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)29301);
label_3b16ac:
    // 0x3b16ac: 0x64332509  daddiu      $s3, $at, 0x2509
    ctx->pc = 0x3b16acu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)9481);
label_3b16b0:
    // 0x3b16b0: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x3b16b0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3b16b4:
    // 0x3b16b4: 0x0  nop
    ctx->pc = 0x3b16b4u;
    // NOP
label_3b16b8:
    // 0x3b16b8: 0x0  nop
    ctx->pc = 0x3b16b8u;
    // NOP
label_3b16bc:
    // 0x3b16bc: 0x0  nop
    ctx->pc = 0x3b16bcu;
    // NOP
label_3b16c0:
    // 0x3b16c0: 0x206d756e  addi        $t5, $v1, 0x756E
    ctx->pc = 0x3b16c0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30062, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
label_3b16c4:
    // 0x3b16c4: 0x6220666f  daddi       $zero, $s1, 0x666F
    ctx->pc = 0x3b16c4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 17); int64_t imm = (int64_t)(int32_t)26223; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_3b16c8:
    // 0x3b16c8: 0x3a72756c  xori        $s2, $s3, 0x756C
    ctx->pc = 0x3b16c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)30060);
label_3b16cc:
    // 0x3b16cc: 0x64332509  daddiu      $s3, $at, 0x2509
    ctx->pc = 0x3b16ccu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)9481);
label_3b16d0:
    // 0x3b16d0: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x3b16d0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3b16d4:
    // 0x3b16d4: 0x0  nop
    ctx->pc = 0x3b16d4u;
    // NOP
label_3b16d8:
    // 0x3b16d8: 0x0  nop
    ctx->pc = 0x3b16d8u;
    // NOP
label_3b16dc:
    // 0x3b16dc: 0x0  nop
    ctx->pc = 0x3b16dcu;
    // NOP
label_3b16e0:
    // 0x3b16e0: 0x65657073  daddiu      $a1, $t3, 0x7073
    ctx->pc = 0x3b16e0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28787);
label_3b16e4:
    // 0x3b16e4: 0x65735f64  daddiu      $s3, $t3, 0x5F64
    ctx->pc = 0x3b16e4u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24420);
label_3b16e8:
    // 0x3b16e8: 0x7463656c  .word       0x7463656C                   # INVALID     $v1, $v1, 0x656C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b16e8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B16E8 raw=0x7463656C");
label_3b16ec:
    // 0x3b16ec: 0x2509093a  addiu       $t1, $t0, 0x93A
    ctx->pc = 0x3b16ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 2362));
label_3b16f0:
    // 0x3b16f0: 0xa66332e  j           func_998CCB8
label_3b16f4:
    if (ctx->pc == 0x3B16F4u) {
        ctx->pc = 0x3B16F8u;
        goto label_3b16f8;
    }
    ctx->pc = 0x3B16F0u;
    ctx->pc = 0x998CCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x998CCB8u, 0x3B16F0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B16F8u;
label_3b16f8:
    // 0x3b16f8: 0x0  nop
    ctx->pc = 0x3b16f8u;
    // NOP
label_3b16fc:
    // 0x3b16fc: 0x0  nop
    ctx->pc = 0x3b16fcu;
    // NOP
label_3b1700:
    // 0x3b1700: 0x65657073  daddiu      $a1, $t3, 0x7073
    ctx->pc = 0x3b1700u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28787);
label_3b1704:
    // 0x3b1704: 0x61635f64  daddi       $v1, $t3, 0x5F64
    ctx->pc = 0x3b1704u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24420; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_3b1708:
    // 0x3b1708: 0x6c65636e  ldr         $a1, 0x636E($v1)
    ctx->pc = 0x3b1708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25454); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_3b170c:
    // 0x3b170c: 0x2509093a  addiu       $t1, $t0, 0x93A
    ctx->pc = 0x3b170cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 2362));
label_3b1710:
    // 0x3b1710: 0xa66332e  j           func_998CCB8
label_3b1714:
    if (ctx->pc == 0x3B1714u) {
        ctx->pc = 0x3B1718u;
        goto label_3b1718;
    }
    ctx->pc = 0x3B1710u;
    ctx->pc = 0x998CCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x998CCB8u, 0x3B1710u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B1718u;
label_3b1718:
    // 0x3b1718: 0x0  nop
    ctx->pc = 0x3b1718u;
    // NOP
label_3b171c:
    // 0x3b171c: 0x0  nop
    ctx->pc = 0x3b171cu;
    // NOP
label_3b1720:
    // 0x3b1720: 0x65657073  daddiu      $a1, $t3, 0x7073
    ctx->pc = 0x3b1720u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28787);
label_3b1724:
    // 0x3b1724: 0x65645f64  daddiu      $a0, $t3, 0x5F64
    ctx->pc = 0x3b1724u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24420);
label_3b1728:
    // 0x3b1728: 0x65646963  daddiu      $a0, $t3, 0x6963
    ctx->pc = 0x3b1728u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26979);
label_3b172c:
    // 0x3b172c: 0x2509093a  addiu       $t1, $t0, 0x93A
    ctx->pc = 0x3b172cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 2362));
label_3b1730:
    // 0x3b1730: 0xa66332e  j           func_998CCB8
label_3b1734:
    if (ctx->pc == 0x3B1734u) {
        ctx->pc = 0x3B1738u;
        goto label_3b1738;
    }
    ctx->pc = 0x3B1730u;
    ctx->pc = 0x998CCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x998CCB8u, 0x3B1730u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B1738u;
label_3b1738:
    // 0x3b1738: 0x0  nop
    ctx->pc = 0x3b1738u;
    // NOP
label_3b173c:
    // 0x3b173c: 0x0  nop
    ctx->pc = 0x3b173cu;
    // NOP
label_3b1740:
    // 0x3b1740: 0x72756c62  .word       0x72756C62                   # INVALID     $s3, $s5, 0x6C62 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b1740u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x22 at 0x3B1740 raw=0x72756C62");
label_3b1744:
    // 0x3b1744: 0x7061675f  .word       0x7061675F                   # INVALID     $v1, $at, 0x675F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b1744u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x1F at 0x3B1744 raw=0x7061675F");
label_3b1748:
    // 0x3b1748: 0x64617228  daddiu      $at, $v1, 0x7228
    ctx->pc = 0x3b1748u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29224);
label_3b174c:
    // 0x3b174c: 0x25093a29  addiu       $t1, $t0, 0x3A29
    ctx->pc = 0x3b174cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 14889));
label_3b1750:
    // 0x3b1750: 0xa66  .word       0x00000A66                   # xor         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1750u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_3b1754:
    // 0x3b1754: 0x0  nop
    ctx->pc = 0x3b1754u;
    // NOP
label_3b1758:
    // 0x3b1758: 0x0  nop
    ctx->pc = 0x3b1758u;
    // NOP
label_3b175c:
    // 0x3b175c: 0x0  nop
    ctx->pc = 0x3b175cu;
    // NOP
label_3b1760:
    // 0x3b1760: 0x2905a0  .word       0x002905A0                   # add         $zero, $at, $t1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1760u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_3b1764:
    // 0x3b1764: 0x29061c  .word       0x0029061C                   # dmult       $at, $t1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1764u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B1764 raw=0x0029061C");
label_3b1768:
    // 0x3b1768: 0x29069c  .word       0x0029069C                   # dmult       $at, $t1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1768u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B1768 raw=0x0029069C");
label_3b176c:
    // 0x3b176c: 0x29071c  .word       0x0029071C                   # dmult       $at, $t1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b176cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B176C raw=0x0029071C");
label_3b1770:
    // 0x3b1770: 0x2907a4  .word       0x002907A4                   # and         $zero, $at, $t1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1770u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & GPR_U64(ctx, 9));
label_3b1774:
    // 0x3b1774: 0x290820  add         $at, $at, $t1
    ctx->pc = 0x3b1774u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_3b1778:
    // 0x3b1778: 0x31257325  andi        $a1, $t1, 0x7325
    ctx->pc = 0x3b1778u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)29477);
label_3b177c:
    // 0x3b177c: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b177cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_3b1780:
    // 0x3b1780: 0x636f7270  daddi       $t7, $k1, 0x7270
    ctx->pc = 0x3b1780u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)29296; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_3b1784:
    // 0x3b1784: 0x0  nop
    ctx->pc = 0x3b1784u;
    // NOP
label_3b1788:
    // 0x3b1788: 0x0  nop
    ctx->pc = 0x3b1788u;
    // NOP
label_3b178c:
    // 0x3b178c: 0x0  nop
    ctx->pc = 0x3b178cu;
    // NOP
label_3b1790:
    // 0x3b1790: 0x5f706d74  .word       0x5F706D74                   # bgtzl       $k1, . + 4 + (0x6D74 << 2) # 00100000 <InstrIdType: CPU_NORMAL>
label_3b1794:
    if (ctx->pc == 0x3B1794u) {
        ctx->pc = 0x3B1794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1790u;
        // 0x3b1794: 0x64616873  daddiu      $at, $v1, 0x6873 (Delay Slot)
        SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26739);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1798u;
        goto label_3b1798;
    }
    ctx->pc = 0x3B1790u;
    {
        const bool branch_taken_0x3b1790 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x3b1790) {
            ctx->pc = 0x3B1794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1790u;
            // 0x3b1794: 0x64616873  daddiu      $at, $v1, 0x6873 (Delay Slot)
            SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26739);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CCD64u;
            return;
        }
    }
    ctx->pc = 0x3B1798u;
label_3b1798:
    // 0x3b1798: 0x20676e69  addi        $a3, $v1, 0x6E69
    ctx->pc = 0x3b1798u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28265, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_3b179c:
    // 0x3b179c: 0x7825203d  lq          $a1, 0x203D($at)
    ctx->pc = 0x3b179cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 1), 8253)));
label_3b17a0:
    // 0x3b17a0: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x3b17a0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3b17a4:
    // 0x3b17a4: 0x0  nop
    ctx->pc = 0x3b17a4u;
    // NOP
label_3b17a8:
    // 0x3b17a8: 0x0  nop
    ctx->pc = 0x3b17a8u;
    // NOP
label_3b17ac:
    // 0x3b17ac: 0x0  nop
    ctx->pc = 0x3b17acu;
    // NOP
label_3b17b0:
    // 0x3b17b0: 0x66754226  daddiu      $s5, $s3, 0x4226
    ctx->pc = 0x3b17b0u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)16934);
label_3b17b4:
    // 0x3b17b4: 0x5b726566  .word       0x5B726566                   # blezl       $k1, . + 4 + (0x6566 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
label_3b17b8:
    if (ctx->pc == 0x3B17B8u) {
        ctx->pc = 0x3B17B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B17B4u;
        // 0x3b17b8: 0x30257830  andi        $a1, $at, 0x7830 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)30768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B17BCu;
        goto label_3b17bc;
    }
    ctx->pc = 0x3B17B4u;
    {
        const bool branch_taken_0x3b17b4 = (GPR_S32(ctx, 27) <= 0);
        if (branch_taken_0x3b17b4) {
            ctx->pc = 0x3B17B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B17B4u;
            // 0x3b17b8: 0x30257830  andi        $a1, $at, 0x7830 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)30768);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CAD50u;
            return;
        }
    }
    ctx->pc = 0x3B17BCu;
label_3b17bc:
    // 0x3b17bc: 0x205d7838  addi        $sp, $v0, 0x7838
    ctx->pc = 0x3b17bcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)30776, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_3b17c0:
    // 0x3b17c0: 0x7830203d  lq          $s0, 0x203D($at)
    ctx->pc = 0x3b17c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 1), 8253)));
label_3b17c4:
    // 0x3b17c4: 0x78383025  lq          $t8, 0x3025($at)
    ctx->pc = 0x3b17c4u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 1), 12325)));
label_3b17c8:
    // 0x3b17c8: 0x0  nop
    ctx->pc = 0x3b17c8u;
    // NOP
label_3b17cc:
    // 0x3b17cc: 0x0  nop
    ctx->pc = 0x3b17ccu;
    // NOP
label_3b17d0:
    // 0x3b17d0: 0x4d415256  .word       0x4D415256                   # INVALID     $t2, $at, 0x5256 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b17d0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x3B17D0 raw=0x4D415256");
label_3b17d4:
    // 0x3b17d4: 0x42555328  .word       0x42555328                   # INVALID     $s2, $s5, 0x5328 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b17d4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x3B17D4 raw=0x42555328");
label_3b17d8:
    // 0x3b17d8: 0x203d2029  addi        $sp, $at, 0x2029
    ctx->pc = 0x3b17d8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8233, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_3b17dc:
    // 0x3b17dc: 0x30257830  andi        $a1, $at, 0x7830
    ctx->pc = 0x3b17dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)30768);
label_3b17e0:
    // 0x3b17e0: 0x7838  dsll        $t7, $zero, 0
    ctx->pc = 0x3b17e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) << 0);
label_3b17e4:
    // 0x3b17e4: 0x0  nop
    ctx->pc = 0x3b17e4u;
    // NOP
label_3b17e8:
    // 0x3b17e8: 0x5b6d654d  .word       0x5B6D654D                   # blezl       $k1, . + 4 + (0x654D << 2) # 000D0000 <InstrIdType: CPU_NORMAL>
label_3b17ec:
    if (ctx->pc == 0x3B17ECu) {
        ctx->pc = 0x3B17ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B17E8u;
        // 0x3b17ec: 0x5d643125  .word       0x5D643125                   # bgtzl       $t3, . + 4 + (0x3125 << 2) # 00040000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x3B17EC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B17F0u;
        goto label_3b17f0;
    }
    ctx->pc = 0x3B17E8u;
    {
        const bool branch_taken_0x3b17e8 = (GPR_S32(ctx, 27) <= 0);
        if (branch_taken_0x3b17e8) {
            ctx->pc = 0x3B17ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B17E8u;
            // 0x3b17ec: 0x5d643125  .word       0x5D643125                   # bgtzl       $t3, . + 4 + (0x3125 << 2) # 00040000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x3B17EC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CAD20u;
            return;
        }
    }
    ctx->pc = 0x3B17F0u;
label_3b17f0:
    // 0x3b17f0: 0x203d20  .word       0x00203D20                   # add         $a3, $at, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b17f0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_3b17f4:
    // 0x3b17f4: 0x0  nop
    ctx->pc = 0x3b17f4u;
    // NOP
label_3b17f8:
    // 0x3b17f8: 0x5b706254  .word       0x5B706254                   # blezl       $k1, . + 4 + (0x6254 << 2) # 00100000 <InstrIdType: CPU_NORMAL>
label_3b17fc:
    if (ctx->pc == 0x3B17FCu) {
        ctx->pc = 0x3B17FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B17F8u;
        // 0x3b17fc: 0x5d643125  .word       0x5D643125                   # bgtzl       $t3, . + 4 + (0x3125 << 2) # 00040000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x3B17FC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1800u;
        goto label_3b1800;
    }
    ctx->pc = 0x3B17F8u;
    {
        const bool branch_taken_0x3b17f8 = (GPR_S32(ctx, 27) <= 0);
        if (branch_taken_0x3b17f8) {
            ctx->pc = 0x3B17FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B17F8u;
            // 0x3b17fc: 0x5d643125  .word       0x5D643125                   # bgtzl       $t3, . + 4 + (0x3125 << 2) # 00040000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x3B17FC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CA14Cu;
            return;
        }
    }
    ctx->pc = 0x3B1800u;
label_3b1800:
    // 0x3b1800: 0x203d20  .word       0x00203D20                   # add         $a3, $at, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1800u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_3b1804:
    // 0x3b1804: 0x0  nop
    ctx->pc = 0x3b1804u;
    // NOP
label_3b1808:
    // 0x3b1808: 0x30257830  andi        $a1, $at, 0x7830
    ctx->pc = 0x3b1808u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)30768);
label_3b180c:
    // 0x3b180c: 0x2c7838  .word       0x002C7838                   # dsll        $t7, $t4, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b180cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) << 0);
label_3b1810:
    // 0x3b1810: 0x30257830  andi        $a1, $at, 0x7830
    ctx->pc = 0x3b1810u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)30768);
label_3b1814:
    // 0x3b1814: 0x7838  dsll        $t7, $zero, 0
    ctx->pc = 0x3b1814u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) << 0);
label_3b1818:
    // 0x3b1818: 0x0  nop
    ctx->pc = 0x3b1818u;
    // NOP
label_3b181c:
    // 0x3b181c: 0x0  nop
    ctx->pc = 0x3b181cu;
    // NOP
label_3b1820:
    // 0x3b1820: 0x2964c4  .word       0x002964C4                   # sllv        $t4, $t1, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1820u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 1) & 0x1F));
label_3b1824:
    // 0x3b1824: 0x2964d4  .word       0x002964D4                   # dsllv       $t4, $t1, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1824u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) << (GPR_U32(ctx, 1) & 0x3F));
label_3b1828:
    // 0x3b1828: 0x296478  .word       0x00296478                   # dsll        $t4, $t1, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1828u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) << 17);
label_3b182c:
    // 0x3b182c: 0x296450  .word       0x00296450                   # mfhi        $t4 # 00290440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b182cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_3b1830:
    // 0x3b1830: 0x296488  .word       0x00296488                   # jr          $at # 00096480 <InstrIdType: CPU_SPECIAL>
label_3b1834:
    if (ctx->pc == 0x3B1834u) {
        ctx->pc = 0x3B1834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1830u;
        // 0x3b1834: 0x296440  .word       0x00296440                   # sll         $t4, $t1, 17 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 9), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1838u;
        goto label_3b1838;
    }
    ctx->pc = 0x3B1830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x3B1834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1830u;
        // 0x3b1834: 0x296440  .word       0x00296440                   # sll         $t4, $t1, 17 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 9), 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1830u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B1838u;
label_3b1838:
    // 0x3b1838: 0x2964e4  .word       0x002964E4                   # and         $t4, $at, $t1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1838u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 1) & GPR_U64(ctx, 9));
label_3b183c:
    // 0x3b183c: 0x2964b0  tge         $at, $t1, 402
    ctx->pc = 0x3b183cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_3b1840:
    // 0x3b1840: 0x296498  .word       0x00296498                   # mult        $t4, $at, $t1 # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1840u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_3b1844:
    // 0x3b1844: 0x296498  .word       0x00296498                   # mult        $t4, $at, $t1 # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1844u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_3b1848:
    // 0x3b1848: 0x296508  .word       0x00296508                   # jr          $at # 00096500 <InstrIdType: CPU_SPECIAL>
label_3b184c:
    if (ctx->pc == 0x3B184Cu) {
        ctx->pc = 0x3B184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1848u;
        // 0x3b184c: 0x296524  .word       0x00296524                   # and         $t4, $at, $t1 # 00000500 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 1) & GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1850u;
        goto label_3b1850;
    }
    ctx->pc = 0x3B1848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x3B184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1848u;
        // 0x3b184c: 0x296524  .word       0x00296524                   # and         $t4, $at, $t1 # 00000500 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 1) & GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1848u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B1850u;
label_3b1850:
    // 0x3b1850: 0x2968a4  .word       0x002968A4                   # and         $t5, $at, $t1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1850u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 1) & GPR_U64(ctx, 9));
label_3b1854:
    // 0x3b1854: 0x2968ec  .word       0x002968EC                   # dadd        $t5, $at, $t1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1854u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 9); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_3b1858:
    // 0x3b1858: 0x2967d4  .word       0x002967D4                   # dsllv       $t4, $t1, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1858u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) << (GPR_U32(ctx, 1) & 0x3F));
label_3b185c:
    // 0x3b185c: 0x29677c  .word       0x0029677C                   # dsll32      $t4, $t1, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b185cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) << (32 + 29));
label_3b1860:
    // 0x3b1860: 0x2967ec  .word       0x002967EC                   # dadd        $t4, $at, $t1 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1860u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 9); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_3b1864:
    // 0x3b1864: 0x296730  tge         $at, $t1, 412
    ctx->pc = 0x3b1864u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_3b1868:
    // 0x3b1868: 0x296934  teq         $at, $t1, 420
    ctx->pc = 0x3b1868u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_3b186c:
    // 0x3b186c: 0x29685c  .word       0x0029685C                   # dmult       $at, $t1 # 00006840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b186cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B186C raw=0x0029685C");
label_3b1870:
    // 0x3b1870: 0x296768  .word       0x00296768                   # mfsa        $t4 # 00290740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1870u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_3b1874:
    // 0x3b1874: 0x296768  .word       0x00296768                   # mfsa        $t4 # 00290740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1874u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_3b1878:
    // 0x3b1878: 0x296978  .word       0x00296978                   # dsll        $t5, $t1, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1878u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 9) << 5);
label_3b187c:
    // 0x3b187c: 0x296968  .word       0x00296968                   # mfsa        $t5 # 00290140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b187cu;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_3b1880:
    // 0x3b1880: 0x2a55c0  .word       0x002A55C0                   # sll         $t2, $t2, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1880u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 23));
label_3b1884:
    // 0x3b1884: 0x2a5b34  teq         $at, $t2, 364
    ctx->pc = 0x3b1884u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 10)) { runtime->handleTrap(rdram, ctx); }
label_3b1888:
    // 0x3b1888: 0x2a5c70  tge         $at, $t2, 369
    ctx->pc = 0x3b1888u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 10)) { runtime->handleTrap(rdram, ctx); }
label_3b188c:
    // 0x3b188c: 0x2a5f60  .word       0x002A5F60                   # add         $t3, $at, $t2 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b188cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_3b1890:
    // 0x3b1890: 0x2a6038  .word       0x002A6038                   # dsll        $t4, $t2, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1890u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) << 0);
label_3b1894:
    // 0x3b1894: 0x2a613c  .word       0x002A613C                   # dsll32      $t4, $t2, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1894u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) << (32 + 4));
label_3b1898:
    // 0x3b1898: 0x2a62c4  .word       0x002A62C4                   # sllv        $t4, $t2, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1898u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 1) & 0x1F));
label_3b189c:
    // 0x3b189c: 0x2a6454  .word       0x002A6454                   # dsllv       $t4, $t2, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b189cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) << (GPR_U32(ctx, 1) & 0x3F));
label_3b18a0:
    // 0x3b18a0: 0x2a64c0  .word       0x002A64C0                   # sll         $t4, $t2, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b18a0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 10), 19));
label_3b18a4:
    // 0x3b18a4: 0x2a6a98  .word       0x002A6A98                   # mult        $t5, $at, $t2 # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b18a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_3b18a8:
    // 0x3b18a8: 0x2a6c28  .word       0x002A6C28                   # mfsa        $t5 # 002A0400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b18a8u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_3b18ac:
    // 0x3b18ac: 0x2a6f48  .word       0x002A6F48                   # jr          $at # 000A6F40 <InstrIdType: CPU_SPECIAL>
label_3b18b0:
    if (ctx->pc == 0x3B18B0u) {
        ctx->pc = 0x3B18B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B18ACu;
        // 0x3b18b0: 0x2a7038  .word       0x002A7038                   # dsll        $t6, $t2, 0 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 10) << 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B18B4u;
        goto label_3b18b4;
    }
    ctx->pc = 0x3B18ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x3B18B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B18ACu;
        // 0x3b18b0: 0x2a7038  .word       0x002A7038                   # dsll        $t6, $t2, 0 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 10) << 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B18ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B18B4u;
label_3b18b4:
    // 0x3b18b4: 0x2a7130  tge         $at, $t2, 452
    ctx->pc = 0x3b18b4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 10)) { runtime->handleTrap(rdram, ctx); }
label_3b18b8:
    // 0x3b18b8: 0x2a72c0  .word       0x002A72C0                   # sll         $t6, $t2, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b18b8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 10), 11));
label_3b18bc:
    // 0x3b18bc: 0x2a7468  .word       0x002A7468                   # mfsa        $t6 # 002A0440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b18bcu;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_3b18c0:
    // 0x3b18c0: 0x66252053  daddiu      $a1, $s1, 0x2053
    ctx->pc = 0x3b18c0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)8275);
label_3b18c4:
    // 0x3b18c4: 0x20662520  addi        $a2, $v1, 0x2520
    ctx->pc = 0x3b18c4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)9504, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_3b18c8:
    // 0x3b18c8: 0x6625  .word       0x00006625                   # move        $t4, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b18c8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_3b18cc:
    // 0x3b18cc: 0x0  nop
    ctx->pc = 0x3b18ccu;
    // NOP
label_3b18d0:
    // 0x3b18d0: 0x25207948  addiu       $zero, $t1, 0x7948
    ctx->pc = 0x3b18d0u;
    // NOP (addiu $zero, ...)
label_3b18d4:
    // 0x3b18d4: 0x66  .word       0x00000066                   # xor         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b18d4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_3b18d8:
    // 0x3b18d8: 0x20736f70  addi        $s3, $v1, 0x6F70
    ctx->pc = 0x3b18d8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28528, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_3b18dc:
    // 0x3b18dc: 0x252c6625  addiu       $t4, $t1, 0x6625
    ctx->pc = 0x3b18dcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 26149));
label_3b18e0:
    // 0x3b18e0: 0x66252c66  daddiu      $a1, $s1, 0x2C66
    ctx->pc = 0x3b18e0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)11366);
label_3b18e4:
    // 0x3b18e4: 0x0  nop
    ctx->pc = 0x3b18e4u;
    // NOP
label_3b18e8:
    // 0x3b18e8: 0x206e7472  addi        $t6, $v1, 0x7472
    ctx->pc = 0x3b18e8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29810, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_3b18ec:
    // 0x3b18ec: 0x252c6425  addiu       $t4, $t1, 0x6425
    ctx->pc = 0x3b18ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 25637));
label_3b18f0:
    // 0x3b18f0: 0x64252c64  daddiu      $a1, $at, 0x2C64
    ctx->pc = 0x3b18f0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11364);
label_3b18f4:
    // 0x3b18f4: 0x0  nop
    ctx->pc = 0x3b18f4u;
    // NOP
label_3b18f8:
    // 0x3b18f8: 0x0  nop
    ctx->pc = 0x3b18f8u;
    // NOP
label_3b18fc:
    // 0x3b18fc: 0x0  nop
    ctx->pc = 0x3b18fcu;
    // NOP
label_3b1900:
    // 0x3b1900: 0x61726148  daddi       $s2, $t3, 0x6148
    ctx->pc = 0x3b1900u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24904; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_3b1904:
    // 0x3b1904: 0x2066253a  addi        $a2, $v1, 0x253A
    ctx->pc = 0x3b1904u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)9530, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_3b1908:
    // 0x3b1908: 0x64253a74  daddiu      $a1, $at, 0x3A74
    ctx->pc = 0x3b1908u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)14964);
label_3b190c:
    // 0x3b190c: 0x253a6d20  addiu       $k0, $t1, 0x6D20
    ctx->pc = 0x3b190cu;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 9), 27936));
label_3b1910:
    // 0x3b1910: 0x66  .word       0x00000066                   # xor         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1910u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_3b1914:
    // 0x3b1914: 0x0  nop
    ctx->pc = 0x3b1914u;
    // NOP
label_3b1918:
    // 0x3b1918: 0x0  nop
    ctx->pc = 0x3b1918u;
    // NOP
label_3b191c:
    // 0x3b191c: 0x0  nop
    ctx->pc = 0x3b191cu;
    // NOP
label_3b1920:
    // 0x3b1920: 0x2d2830  tge         $at, $t5, 160
    ctx->pc = 0x3b1920u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_3b1924:
    // 0x3b1924: 0x2d2890  .word       0x002D2890                   # mfhi        $a1 # 002D0080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1924u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_3b1928:
    // 0x3b1928: 0x2d2974  teq         $at, $t5, 165
    ctx->pc = 0x3b1928u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_3b192c:
    // 0x3b192c: 0x2d29a4  .word       0x002D29A4                   # and         $a1, $at, $t5 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b192cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & GPR_U64(ctx, 13));
label_3b1930:
    // 0x3b1930: 0x2d2b04  .word       0x002D2B04                   # sllv        $a1, $t5, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1930u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 1) & 0x1F));
label_3b1934:
    // 0x3b1934: 0x2d2b34  teq         $at, $t5, 172
    ctx->pc = 0x3b1934u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_3b1938:
    // 0x3b1938: 0x0  nop
    ctx->pc = 0x3b1938u;
    // NOP
label_3b193c:
    // 0x3b193c: 0x0  nop
    ctx->pc = 0x3b193cu;
    // NOP
label_3b1940:
    // 0x3b1940: 0x2d4be4  .word       0x002D4BE4                   # and         $t1, $at, $t5 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1940u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 1) & GPR_U64(ctx, 13));
label_3b1944:
    // 0x3b1944: 0x2d4c1c  .word       0x002D4C1C                   # dmult       $at, $t5 # 00004C00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1944u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B1944 raw=0x002D4C1C");
label_3b1948:
    // 0x3b1948: 0x2d4d08  .word       0x002D4D08                   # jr          $at # 000D4D00 <InstrIdType: CPU_SPECIAL>
label_3b194c:
    if (ctx->pc == 0x3B194Cu) {
        ctx->pc = 0x3B194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1948u;
        // 0x3b194c: 0x2d4d40  .word       0x002D4D40                   # sll         $t1, $t5, 21 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 13), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1950u;
        goto label_3b1950;
    }
    ctx->pc = 0x3B1948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x3B194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1948u;
        // 0x3b194c: 0x2d4d40  .word       0x002D4D40                   # sll         $t1, $t5, 21 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 13), 21));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1948u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B1950u;
label_3b1950:
    // 0x3b1950: 0x2d4da0  .word       0x002D4DA0                   # add         $t1, $at, $t5 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1950u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_3b1954:
    // 0x3b1954: 0x2d4dd8  .word       0x002D4DD8                   # mult        $t1, $at, $t5 # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1954u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3b1958:
    // 0x3b1958: 0x0  nop
    ctx->pc = 0x3b1958u;
    // NOP
label_3b195c:
    // 0x3b195c: 0x0  nop
    ctx->pc = 0x3b195cu;
    // NOP
label_3b1960:
    // 0x3b1960: 0x2da5b4  teq         $at, $t5, 662
    ctx->pc = 0x3b1960u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_3b1964:
    // 0x3b1964: 0x2da5c8  .word       0x002DA5C8                   # jr          $at # 000DA5C0 <InstrIdType: CPU_SPECIAL>
label_3b1968:
    if (ctx->pc == 0x3B1968u) {
        ctx->pc = 0x3B1968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1964u;
        // 0x3b1968: 0x2da600  .word       0x002DA600                   # sll         $s4, $t5, 24 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 13), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B196Cu;
        goto label_3b196c;
    }
    ctx->pc = 0x3B1964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x3B1968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1964u;
        // 0x3b1968: 0x2da600  .word       0x002DA600                   # sll         $s4, $t5, 24 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 13), 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1964u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B196Cu;
label_3b196c:
    // 0x3b196c: 0x2da664  .word       0x002DA664                   # and         $s4, $at, $t5 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b196cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 1) & GPR_U64(ctx, 13));
label_3b1970:
    // 0x3b1970: 0x2da69c  .word       0x002DA69C                   # dmult       $at, $t5 # 0000A680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1970u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B1970 raw=0x002DA69C");
label_3b1974:
    // 0x3b1974: 0x2da6e8  .word       0x002DA6E8                   # mfsa        $s4 # 002D06C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1974u;
    SET_GPR_U32(ctx, 20, ctx->sa);
label_3b1978:
    // 0x3b1978: 0x0  nop
    ctx->pc = 0x3b1978u;
    // NOP
label_3b197c:
    // 0x3b197c: 0x0  nop
    ctx->pc = 0x3b197cu;
    // NOP
label_3b1980:
    // 0x3b1980: 0x2dd278  .word       0x002DD278                   # dsll        $k0, $t5, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1980u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 13) << 9);
label_3b1984:
    // 0x3b1984: 0x2dd2d4  .word       0x002DD2D4                   # dsllv       $k0, $t5, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1984u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 13) << (GPR_U32(ctx, 1) & 0x3F));
label_3b1988:
    // 0x3b1988: 0x2dd57c  .word       0x002DD57C                   # dsll32      $k0, $t5, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1988u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 13) << (32 + 21));
label_3b198c:
    // 0x3b198c: 0x2dd5d0  .word       0x002DD5D0                   # mfhi        $k0 # 002D05C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b198cu;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_3b1990:
    // 0x3b1990: 0x2dd8c8  .word       0x002DD8C8                   # jr          $at # 000DD8C0 <InstrIdType: CPU_SPECIAL>
label_3b1994:
    if (ctx->pc == 0x3B1994u) {
        ctx->pc = 0x3B1994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1990u;
        // 0x3b1994: 0x2dd91c  .word       0x002DD91C                   # dmult       $at, $t5 # 0000D900 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B1994 raw=0x002DD91C");
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1998u;
        goto label_3b1998;
    }
    ctx->pc = 0x3B1990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x3B1994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1990u;
        // 0x3b1994: 0x2dd91c  .word       0x002DD91C                   # dmult       $at, $t5 # 0000D900 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B1994 raw=0x002DD91C");
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1990u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B1998u;
label_3b1998:
    // 0x3b1998: 0x2ddb88  .word       0x002DDB88                   # jr          $at # 000DDB80 <InstrIdType: CPU_SPECIAL>
label_3b199c:
    if (ctx->pc == 0x3B199Cu) {
        ctx->pc = 0x3B199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1998u;
        // 0x3b199c: 0x2ddbc4  .word       0x002DDBC4                   # sllv        $k1, $t5, $at # 000003C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 1) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B19A0u;
        goto label_3b19a0;
    }
    ctx->pc = 0x3B1998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x3B199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1998u;
        // 0x3b199c: 0x2ddbc4  .word       0x002DDBC4                   # sllv        $k1, $t5, $at # 000003C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 1) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1998u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B19A0u;
label_3b19a0:
    // 0x3b19a0: 0x2ddc50  .word       0x002DDC50                   # mfhi        $k1 # 002D0440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b19a0u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_3b19a4:
    // 0x3b19a4: 0x2ddc84  .word       0x002DDC84                   # sllv        $k1, $t5, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b19a4u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 1) & 0x1F));
label_3b19a8:
    // 0x3b19a8: 0x2ddd08  .word       0x002DDD08                   # jr          $at # 000DDD00 <InstrIdType: CPU_SPECIAL>
label_3b19ac:
    if (ctx->pc == 0x3B19ACu) {
        ctx->pc = 0x3B19ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B19A8u;
        // 0x3b19ac: 0x2ddd40  .word       0x002DDD40                   # sll         $k1, $t5, 21 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 13), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B19B0u;
        goto label_3b19b0;
    }
    ctx->pc = 0x3B19A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x3B19ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B19A8u;
        // 0x3b19ac: 0x2ddd40  .word       0x002DDD40                   # sll         $k1, $t5, 21 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 13), 21));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B19A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B19B0u;
label_3b19b0:
    // 0x3b19b0: 0x2dde58  .word       0x002DDE58                   # mult        $k1, $at, $t5 # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b19b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_3b19b4:
    // 0x3b19b4: 0x2dded8  .word       0x002DDED8                   # mult        $k1, $at, $t5 # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b19b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_3b19b8:
    // 0x3b19b8: 0x2ddfa4  .word       0x002DDFA4                   # and         $k1, $at, $t5 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b19b8u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 1) & GPR_U64(ctx, 13));
label_3b19bc:
    // 0x3b19bc: 0x2de01c  .word       0x002DE01C                   # dmult       $at, $t5 # 0000E000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b19bcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B19BC raw=0x002DE01C");
label_3b19c0:
    // 0x3b19c0: 0x2de2d0  .word       0x002DE2D0                   # mfhi        $gp # 002D02C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b19c0u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_3b19c4:
    // 0x3b19c4: 0x2de30c  .word       0x002DE30C                   # syscall     908 # 002D0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b19c4u;
    ctx->pc = 0x3B19C8u;
runtime->handleSyscall(rdram, ctx, 0xB78Cu);
label_3b19c8:
    // 0x3b19c8: 0x0  nop
    ctx->pc = 0x3b19c8u;
    // NOP
label_3b19cc:
    // 0x3b19cc: 0x0  nop
    ctx->pc = 0x3b19ccu;
    // NOP
label_3b19d0:
    // 0x3b19d0: 0x2de4e0  .word       0x002DE4E0                   # add         $gp, $at, $t5 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b19d0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_3b19d4:
    // 0x3b19d4: 0x2de51c  .word       0x002DE51C                   # dmult       $at, $t5 # 0000E500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b19d4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B19D4 raw=0x002DE51C");
label_3b19d8:
    // 0x3b19d8: 0x2de57c  .word       0x002DE57C                   # dsll32      $gp, $t5, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b19d8u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 13) << (32 + 21));
label_3b19dc:
    // 0x3b19dc: 0x2de5d4  .word       0x002DE5D4                   # dsllv       $gp, $t5, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b19dcu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 13) << (GPR_U32(ctx, 1) & 0x3F));
label_3b19e0:
    // 0x3b19e0: 0x2de6b4  teq         $at, $t5, 922
    ctx->pc = 0x3b19e0u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_3b19e4:
    // 0x3b19e4: 0x2de6e4  .word       0x002DE6E4                   # and         $gp, $at, $t5 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b19e4u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 1) & GPR_U64(ctx, 13));
label_3b19e8:
    // 0x3b19e8: 0x2de7e0  .word       0x002DE7E0                   # add         $gp, $at, $t5 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b19e8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_3b19ec:
    // 0x3b19ec: 0x2de810  .word       0x002DE810                   # mfhi        $sp # 002D0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b19ecu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_3b19f0:
    // 0x3b19f0: 0x2de8d8  .word       0x002DE8D8                   # mult        $sp, $at, $t5 # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b19f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_3b19f4:
    // 0x3b19f4: 0x2de908  .word       0x002DE908                   # jr          $at # 000DE900 <InstrIdType: CPU_SPECIAL>
label_3b19f8:
    if (ctx->pc == 0x3B19F8u) {
        ctx->pc = 0x3B19FCu;
        goto label_3b19fc;
    }
    ctx->pc = 0x3B19F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B19F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B19FCu;
label_3b19fc:
    // 0x3b19fc: 0x0  nop
    ctx->pc = 0x3b19fcu;
    // NOP
label_3b1a00:
    // 0x3b1a00: 0x2deb70  tge         $at, $t5, 941
    ctx->pc = 0x3b1a00u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_3b1a04:
    // 0x3b1a04: 0x2debac  .word       0x002DEBAC                   # dadd        $sp, $at, $t5 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1a04u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 13); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 29, r); }
label_3b1a08:
    // 0x3b1a08: 0x2dec0c  .word       0x002DEC0C                   # syscall     944 # 002D0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1a08u;
    ctx->pc = 0x3B1A0Cu;
runtime->handleSyscall(rdram, ctx, 0xB7B0u);
label_3b1a0c:
    // 0x3b1a0c: 0x2dec70  tge         $at, $t5, 945
    ctx->pc = 0x3b1a0cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_3b1a10:
    // 0x3b1a10: 0x2ded90  .word       0x002DED90                   # mfhi        $sp # 002D0580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1a10u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_3b1a14:
    // 0x3b1a14: 0x2deddc  .word       0x002DEDDC                   # dmult       $at, $t5 # 0000EDC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1a14u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B1A14 raw=0x002DEDDC");
label_3b1a18:
    // 0x3b1a18: 0x2deed8  .word       0x002DEED8                   # mult        $sp, $at, $t5 # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1a18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_3b1a1c:
    // 0x3b1a1c: 0x2def08  .word       0x002DEF08                   # jr          $at # 000DEF00 <InstrIdType: CPU_SPECIAL>
label_3b1a20:
    if (ctx->pc == 0x3B1A20u) {
        ctx->pc = 0x3B1A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A1Cu;
        // 0x3b1a20: 0x2defd0  .word       0x002DEFD0                   # mfhi        $sp # 002D07C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 29, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1A24u;
        goto label_3b1a24;
    }
    ctx->pc = 0x3B1A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x3B1A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A1Cu;
        // 0x3b1a20: 0x2defd0  .word       0x002DEFD0                   # mfhi        $sp # 002D07C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 29, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1A1Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B1A24u;
label_3b1a24:
    // 0x3b1a24: 0x2df000  .word       0x002DF000                   # sll         $fp, $t5, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1a24u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 13), 0));
label_3b1a28:
    // 0x3b1a28: 0x0  nop
    ctx->pc = 0x3b1a28u;
    // NOP
label_3b1a2c:
    // 0x3b1a2c: 0x0  nop
    ctx->pc = 0x3b1a2cu;
    // NOP
label_3b1a30:
    // 0x3b1a30: 0x2dfa50  .word       0x002DFA50                   # mfhi        $ra # 002D0240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1a30u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_3b1a34:
    // 0x3b1a34: 0x2dfb34  teq         $at, $t5, 1004
    ctx->pc = 0x3b1a34u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_3b1a38:
    // 0x3b1a38: 0x2dfc40  .word       0x002DFC40                   # sll         $ra, $t5, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1a38u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 13), 17));
label_3b1a3c:
    // 0x3b1a3c: 0x2dfc80  .word       0x002DFC80                   # sll         $ra, $t5, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1a3cu;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 13), 18));
label_3b1a40:
    // 0x3b1a40: 0x2dfdc8  .word       0x002DFDC8                   # jr          $at # 000DFDC0 <InstrIdType: CPU_SPECIAL>
label_3b1a44:
    if (ctx->pc == 0x3B1A44u) {
        ctx->pc = 0x3B1A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A40u;
        // 0x3b1a44: 0x2dfdf8  .word       0x002DFDF8                   # dsll        $ra, $t5, 23 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 31, GPR_U64(ctx, 13) << 23);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1A48u;
        goto label_3b1a48;
    }
    ctx->pc = 0x3B1A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x3B1A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A40u;
        // 0x3b1a44: 0x2dfdf8  .word       0x002DFDF8                   # dsll        $ra, $t5, 23 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 31, GPR_U64(ctx, 13) << 23);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1A40u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B1A48u;
label_3b1a48:
    // 0x3b1a48: 0x0  nop
    ctx->pc = 0x3b1a48u;
    // NOP
label_3b1a4c:
    // 0x3b1a4c: 0x0  nop
    ctx->pc = 0x3b1a4cu;
    // NOP
label_3b1a50:
    // 0x3b1a50: 0x2e6c44  .word       0x002E6C44                   # sllv        $t5, $t6, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1a50u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 1) & 0x1F));
label_3b1a54:
    // 0x3b1a54: 0x2e6cc4  .word       0x002E6CC4                   # sllv        $t5, $t6, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1a54u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 1) & 0x1F));
label_3b1a58:
    // 0x3b1a58: 0x2e6e98  .word       0x002E6E98                   # mult        $t5, $at, $t6 # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1a58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_3b1a5c:
    // 0x3b1a5c: 0x2e6ec8  .word       0x002E6EC8                   # jr          $at # 000E6EC0 <InstrIdType: CPU_SPECIAL>
label_3b1a60:
    if (ctx->pc == 0x3B1A60u) {
        ctx->pc = 0x3B1A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A5Cu;
        // 0x3b1a60: 0x2e7084  .word       0x002E7084                   # sllv        $t6, $t6, $at # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 1) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1A64u;
        goto label_3b1a64;
    }
    ctx->pc = 0x3B1A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x3B1A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A5Cu;
        // 0x3b1a60: 0x2e7084  .word       0x002E7084                   # sllv        $t6, $t6, $at # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 1) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1A5Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B1A64u;
label_3b1a64:
    // 0x3b1a64: 0x2e70b4  teq         $at, $t6, 450
    ctx->pc = 0x3b1a64u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_3b1a68:
    // 0x3b1a68: 0x2e7108  .word       0x002E7108                   # jr          $at # 000E7100 <InstrIdType: CPU_SPECIAL>
label_3b1a6c:
    if (ctx->pc == 0x3B1A6Cu) {
        ctx->pc = 0x3B1A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A68u;
        // 0x3b1a6c: 0x2e714c  .word       0x002E714C                   # syscall     453 # 002E0000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->pc = 0x3B1A70u;
        runtime->handleSyscall(rdram, ctx, 0xB9C5u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1A70u;
        goto label_3b1a70;
    }
    ctx->pc = 0x3B1A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x3B1A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A68u;
        // 0x3b1a6c: 0x2e714c  .word       0x002E714C                   # syscall     453 # 002E0000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->pc = 0x3B1A70u;
        runtime->handleSyscall(rdram, ctx, 0xB9C5u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1A68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B1A70u;
label_3b1a70:
    // 0x3b1a70: 0x2e7718  .word       0x002E7718                   # mult        $t6, $at, $t6 # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1a70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_3b1a74:
    // 0x3b1a74: 0x0  nop
    ctx->pc = 0x3b1a74u;
    // NOP
label_3b1a78:
    // 0x3b1a78: 0x0  nop
    ctx->pc = 0x3b1a78u;
    // NOP
label_3b1a7c:
    // 0x3b1a7c: 0x0  nop
    ctx->pc = 0x3b1a7cu;
    // NOP
label_3b1a80:
    // 0x3b1a80: 0x0  nop
    ctx->pc = 0x3b1a80u;
    // NOP
label_3b1a84:
    // 0x3b1a84: 0x0  nop
    ctx->pc = 0x3b1a84u;
    // NOP
label_3b1a88:
    // 0x3b1a88: 0x0  nop
    ctx->pc = 0x3b1a88u;
    // NOP
label_3b1a8c:
    // 0x3b1a8c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1a8cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b1a90:
    // 0x3b1a90: 0x0  nop
    ctx->pc = 0x3b1a90u;
    // NOP
label_3b1a94:
    // 0x3b1a94: 0xc3960000  ll          $s6, 0x0($gp)
    ctx->pc = 0x3b1a94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 0); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3b1a98:
    // 0x3b1a98: 0x0  nop
    ctx->pc = 0x3b1a98u;
    // NOP
label_3b1a9c:
    // 0x3b1a9c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1a9cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b1aa0:
    // 0x3b1aa0: 0xc3fa0000  ll          $k0, 0x0($ra)
    ctx->pc = 0x3b1aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 0); SET_GPR_S32(ctx, 26, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3b1aa4:
    // 0x3b1aa4: 0x0  nop
    ctx->pc = 0x3b1aa4u;
    // NOP
label_3b1aa8:
    // 0x3b1aa8: 0x0  nop
    ctx->pc = 0x3b1aa8u;
    // NOP
label_3b1aac:
    // 0x3b1aac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1aacu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b1ab0:
    // 0x3b1ab0: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1ab0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x3B1AB0 raw=0x43FA0000");
label_3b1ab4:
    // 0x3b1ab4: 0x0  nop
    ctx->pc = 0x3b1ab4u;
    // NOP
label_3b1ab8:
    // 0x3b1ab8: 0x0  nop
    ctx->pc = 0x3b1ab8u;
    // NOP
label_3b1abc:
    // 0x3b1abc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1abcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b1ac0:
    // 0x3b1ac0: 0xc3960000  ll          $s6, 0x0($gp)
    ctx->pc = 0x3b1ac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 0); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3b1ac4:
    // 0x3b1ac4: 0xc3960000  ll          $s6, 0x0($gp)
    ctx->pc = 0x3b1ac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 0); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3b1ac8:
    // 0x3b1ac8: 0x0  nop
    ctx->pc = 0x3b1ac8u;
    // NOP
label_3b1acc:
    // 0x3b1acc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1accu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b1ad0:
    // 0x3b1ad0: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1ad0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x3B1AD0 raw=0x43960000");
label_3b1ad4:
    // 0x3b1ad4: 0xc3960000  ll          $s6, 0x0($gp)
    ctx->pc = 0x3b1ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 0); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3b1ad8:
    // 0x3b1ad8: 0x0  nop
    ctx->pc = 0x3b1ad8u;
    // NOP
label_3b1adc:
    // 0x3b1adc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1adcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b1ae0:
    // 0x3b1ae0: 0x0  nop
    ctx->pc = 0x3b1ae0u;
    // NOP
label_3b1ae4:
    // 0x3b1ae4: 0xc3480000  ll          $t0, 0x0($k0)
    ctx->pc = 0x3b1ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3b1ae8:
    // 0x3b1ae8: 0x0  nop
    ctx->pc = 0x3b1ae8u;
    // NOP
label_3b1aec:
    // 0x3b1aec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1aecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b1af0:
    // 0x3b1af0: 0x0  nop
    ctx->pc = 0x3b1af0u;
    // NOP
label_3b1af4:
    // 0x3b1af4: 0x0  nop
    ctx->pc = 0x3b1af4u;
    // NOP
label_3b1af8:
    // 0x3b1af8: 0x0  nop
    ctx->pc = 0x3b1af8u;
    // NOP
label_3b1afc:
    // 0x3b1afc: 0x0  nop
    ctx->pc = 0x3b1afcu;
    // NOP
label_3b1b00:
    // 0x3b1b00: 0x0  nop
    ctx->pc = 0x3b1b00u;
    // NOP
label_3b1b04:
    // 0x3b1b04: 0x0  nop
    ctx->pc = 0x3b1b04u;
    // NOP
label_3b1b08:
    // 0x3b1b08: 0x0  nop
    ctx->pc = 0x3b1b08u;
    // NOP
label_3b1b0c:
    // 0x3b1b0c: 0x0  nop
    ctx->pc = 0x3b1b0cu;
    // NOP
label_3b1b10:
    // 0x3b1b10: 0x2f7ed8  .word       0x002F7ED8                   # mult        $t7, $at, $t7 # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1b10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_3b1b14:
    // 0x3b1b14: 0x2f8074  teq         $at, $t7, 513
    ctx->pc = 0x3b1b14u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 15)) { runtime->handleTrap(rdram, ctx); }
label_3b1b18:
    // 0x3b1b18: 0x2f82cc  .word       0x002F82CC                   # syscall     523 # 002F0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1b18u;
    ctx->pc = 0x3B1B1Cu;
runtime->handleSyscall(rdram, ctx, 0xBE0Bu);
label_3b1b1c:
    // 0x3b1b1c: 0x2f8504  .word       0x002F8504                   # sllv        $s0, $t7, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 1) & 0x1F));
label_3b1b20:
    // 0x3b1b20: 0x2f8740  .word       0x002F8740                   # sll         $s0, $t7, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1b20u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 15), 29));
label_3b1b24:
    // 0x3b1b24: 0x2f893c  .word       0x002F893C                   # dsll32      $s1, $t7, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1b24u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 15) << (32 + 4));
label_3b1b28:
    // 0x3b1b28: 0x2f7ed8  .word       0x002F7ED8                   # mult        $t7, $at, $t7 # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1b28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_3b1b2c:
    // 0x3b1b2c: 0x2f8074  teq         $at, $t7, 513
    ctx->pc = 0x3b1b2cu;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 15)) { runtime->handleTrap(rdram, ctx); }
label_3b1b30:
    // 0x3b1b30: 0x2f82cc  .word       0x002F82CC                   # syscall     523 # 002F0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1b30u;
    ctx->pc = 0x3B1B34u;
runtime->handleSyscall(rdram, ctx, 0xBE0Bu);
label_3b1b34:
    // 0x3b1b34: 0x2f8504  .word       0x002F8504                   # sllv        $s0, $t7, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1b34u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 1) & 0x1F));
label_3b1b38:
    // 0x3b1b38: 0x2f8740  .word       0x002F8740                   # sll         $s0, $t7, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1b38u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 15), 29));
label_3b1b3c:
    // 0x3b1b3c: 0x2f893c  .word       0x002F893C                   # dsll32      $s1, $t7, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1b3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 15) << (32 + 4));
label_3b1b40:
    // 0x3b1b40: 0x0  nop
    ctx->pc = 0x3b1b40u;
    // NOP
label_3b1b44:
    // 0x3b1b44: 0x0  nop
    ctx->pc = 0x3b1b44u;
    // NOP
label_3b1b48:
    // 0x3b1b48: 0x0  nop
    ctx->pc = 0x3b1b48u;
    // NOP
label_3b1b4c:
    // 0x3b1b4c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1b4cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b1b50:
    // 0x3b1b50: 0x303df0  tge         $at, $s0, 247
    ctx->pc = 0x3b1b50u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
label_3b1b54:
    // 0x3b1b54: 0x303e28  .word       0x00303E28                   # mfsa        $a3 # 00300600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1b54u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_3b1b58:
    // 0x3b1b58: 0x303eec  .word       0x00303EEC                   # dadd        $a3, $at, $s0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1b58u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_3b1b5c:
    // 0x3b1b5c: 0x303f2c  .word       0x00303F2C                   # dadd        $a3, $at, $s0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1b5cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_3b1b60:
    // 0x3b1b60: 0x304020  add         $t0, $at, $s0
    ctx->pc = 0x3b1b60u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_3b1b64:
    // 0x3b1b64: 0x304060  .word       0x00304060                   # add         $t0, $at, $s0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1b64u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_3b1b68:
    // 0x3b1b68: 0x0  nop
    ctx->pc = 0x3b1b68u;
    // NOP
label_3b1b6c:
    // 0x3b1b6c: 0x0  nop
    ctx->pc = 0x3b1b6cu;
    // NOP
label_3b1b70:
    // 0x3b1b70: 0x306f00  .word       0x00306F00                   # sll         $t5, $s0, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1b70u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 16), 28));
label_3b1b74:
    // 0x3b1b74: 0x306f60  .word       0x00306F60                   # add         $t5, $at, $s0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1b74u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_3b1b78:
    // 0x3b1b78: 0x306fd0  .word       0x00306FD0                   # mfhi        $t5 # 003007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1b78u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_3b1b7c:
    // 0x3b1b7c: 0x30708c  .word       0x0030708C                   # syscall     450 # 00300000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1b7cu;
    ctx->pc = 0x3B1B80u;
runtime->handleSyscall(rdram, ctx, 0xC1C2u);
label_3b1b80:
    // 0x3b1b80: 0x3070c0  .word       0x003070C0                   # sll         $t6, $s0, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1b80u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_3b1b84:
    // 0x3b1b84: 0x307114  .word       0x00307114                   # dsllv       $t6, $s0, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1b84u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 16) << (GPR_U32(ctx, 1) & 0x3F));
label_3b1b88:
    // 0x3b1b88: 0x0  nop
    ctx->pc = 0x3b1b88u;
    // NOP
label_3b1b8c:
    // 0x3b1b8c: 0x0  nop
    ctx->pc = 0x3b1b8cu;
    // NOP
label_3b1b90:
    // 0x3b1b90: 0x307170  tge         $at, $s0, 453
    ctx->pc = 0x3b1b90u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
label_3b1b94:
    // 0x3b1b94: 0x3071d0  .word       0x003071D0                   # mfhi        $t6 # 003001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1b94u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_3b1b98:
    // 0x3b1b98: 0x307240  .word       0x00307240                   # sll         $t6, $s0, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1b98u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 16), 9));
label_3b1b9c:
    // 0x3b1b9c: 0x3072fc  .word       0x003072FC                   # dsll32      $t6, $s0, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1b9cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 16) << (32 + 11));
label_3b1ba0:
    // 0x3b1ba0: 0x307330  tge         $at, $s0, 460
    ctx->pc = 0x3b1ba0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
label_3b1ba4:
    // 0x3b1ba4: 0x307384  .word       0x00307384                   # sllv        $t6, $s0, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1ba4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 1) & 0x1F));
label_3b1ba8:
    // 0x3b1ba8: 0x0  nop
    ctx->pc = 0x3b1ba8u;
    // NOP
label_3b1bac:
    // 0x3b1bac: 0x0  nop
    ctx->pc = 0x3b1bacu;
    // NOP
label_3b1bb0:
    // 0x3b1bb0: 0x3073e0  .word       0x003073E0                   # add         $t6, $at, $s0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1bb0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_3b1bb4:
    // 0x3b1bb4: 0x307440  .word       0x00307440                   # sll         $t6, $s0, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1bb4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 16), 17));
label_3b1bb8:
    // 0x3b1bb8: 0x3074b0  tge         $at, $s0, 466
    ctx->pc = 0x3b1bb8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
label_3b1bbc:
    // 0x3b1bbc: 0x30756c  .word       0x0030756C                   # dadd        $t6, $at, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1bbcu;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_3b1bc0:
    // 0x3b1bc0: 0x3075a0  .word       0x003075A0                   # add         $t6, $at, $s0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1bc0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_3b1bc4:
    // 0x3b1bc4: 0x3075f4  teq         $at, $s0, 471
    ctx->pc = 0x3b1bc4u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
label_3b1bc8:
    // 0x3b1bc8: 0x0  nop
    ctx->pc = 0x3b1bc8u;
    // NOP
label_3b1bcc:
    // 0x3b1bcc: 0x0  nop
    ctx->pc = 0x3b1bccu;
    // NOP
label_3b1bd0:
    // 0x3b1bd0: 0x309b70  tge         $at, $s0, 621
    ctx->pc = 0x3b1bd0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
label_3b1bd4:
    // 0x3b1bd4: 0x309bac  .word       0x00309BAC                   # dadd        $s3, $at, $s0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1bd4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, r); }
label_3b1bd8:
    // 0x3b1bd8: 0x309c94  .word       0x00309C94                   # dsllv       $s3, $s0, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1bd8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (GPR_U32(ctx, 1) & 0x3F));
label_3b1bdc:
    // 0x3b1bdc: 0x309ce0  .word       0x00309CE0                   # add         $s3, $at, $s0 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1bdcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_3b1be0:
    // 0x3b1be0: 0x309e04  .word       0x00309E04                   # sllv        $s3, $s0, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1be0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 1) & 0x1F));
label_3b1be4:
    // 0x3b1be4: 0x309e54  .word       0x00309E54                   # dsllv       $s3, $s0, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1be4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (GPR_U32(ctx, 1) & 0x3F));
label_3b1be8:
    // 0x3b1be8: 0x0  nop
    ctx->pc = 0x3b1be8u;
    // NOP
label_3b1bec:
    // 0x3b1bec: 0x0  nop
    ctx->pc = 0x3b1becu;
    // NOP
label_3b1bf0:
    // 0x3b1bf0: 0x0  nop
    ctx->pc = 0x3b1bf0u;
    // NOP
label_3b1bf4:
    // 0x3b1bf4: 0x0  nop
    ctx->pc = 0x3b1bf4u;
    // NOP
label_3b1bf8:
    // 0x3b1bf8: 0x0  nop
    ctx->pc = 0x3b1bf8u;
    // NOP
label_3b1bfc:
    // 0x3b1bfc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1bfcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b1c00:
    // 0x3b1c00: 0xc2400000  ll          $zero, 0x0($s2)
    ctx->pc = 0x3b1c00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3b1c04:
    // 0x3b1c04: 0x425c0000  .word       0x425C0000                   # INVALID     $s2, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1c04u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x3B1C04 raw=0x425C0000");
label_3b1c08:
    // 0x3b1c08: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1c08u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x3B1C08 raw=0x42C80000");
label_3b1c0c:
    // 0x3b1c0c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1c0cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b1c10:
    // 0x3b1c10: 0xc2480000  ll          $t0, 0x0($s2)
    ctx->pc = 0x3b1c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3b1c14:
    // 0x3b1c14: 0x425c0000  .word       0x425C0000                   # INVALID     $s2, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1c14u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x3B1C14 raw=0x425C0000");
label_3b1c18:
    // 0x3b1c18: 0x431b0000  .word       0x431B0000                   # INVALID     $t8, $k1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1c18u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x3B1C18 raw=0x431B0000");
label_3b1c1c:
    // 0x3b1c1c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1c1cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b1c20:
    // 0x3b1c20: 0xc2580000  ll          $t8, 0x0($s2)
    ctx->pc = 0x3b1c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3b1c24:
    // 0x3b1c24: 0x425c0000  .word       0x425C0000                   # INVALID     $s2, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1c24u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x3B1C24 raw=0x425C0000");
label_3b1c28:
    // 0x3b1c28: 0x43520000  .word       0x43520000                   # INVALID     $k0, $s2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1c28u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x3B1C28 raw=0x43520000");
label_3b1c2c:
    // 0x3b1c2c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1c2cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b1c30:
    // 0x3b1c30: 0xc2600000  ll          $zero, 0x0($s3)
    ctx->pc = 0x3b1c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3b1c34:
    // 0x3b1c34: 0x425c0000  .word       0x425C0000                   # INVALID     $s2, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1c34u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x3B1C34 raw=0x425C0000");
label_3b1c38:
    // 0x3b1c38: 0x43848000  .word       0x43848000                   # INVALID     $gp, $a0, -0x8000 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1c38u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x3B1C38 raw=0x43848000");
label_3b1c3c:
    // 0x3b1c3c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1c3cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b1c40:
    // 0x3b1c40: 0xc2700000  ll          $s0, 0x0($s3)
    ctx->pc = 0x3b1c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3b1c44:
    // 0x3b1c44: 0x425c0000  .word       0x425C0000                   # INVALID     $s2, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1c44u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x3B1C44 raw=0x425C0000");
label_3b1c48:
    // 0x3b1c48: 0x43a00000  .word       0x43A00000                   # INVALID     $sp, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1c48u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1D at 0x3B1C48 raw=0x43A00000");
label_3b1c4c:
    // 0x3b1c4c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1c4cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b1c50:
    // 0x3b1c50: 0xc2800000  ll          $zero, 0x0($s4)
    ctx->pc = 0x3b1c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3b1c54:
    // 0x3b1c54: 0x425c0000  .word       0x425C0000                   # INVALID     $s2, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1c54u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x3B1C54 raw=0x425C0000");
label_3b1c58:
    // 0x3b1c58: 0x43bb8000  .word       0x43BB8000                   # INVALID     $sp, $k1, -0x8000 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1c58u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1D at 0x3B1C58 raw=0x43BB8000");
label_3b1c5c:
    // 0x3b1c5c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1c5cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b1c60:
    // 0x3b1c60: 0xc2700000  ll          $s0, 0x0($s3)
    ctx->pc = 0x3b1c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3b1c64:
    // 0x3b1c64: 0x425c0000  .word       0x425C0000                   # INVALID     $s2, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1c64u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x3B1C64 raw=0x425C0000");
label_3b1c68:
    // 0x3b1c68: 0x43d70000  .word       0x43D70000                   # INVALID     $fp, $s7, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1c68u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1E at 0x3B1C68 raw=0x43D70000");
label_3b1c6c:
    // 0x3b1c6c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1c6cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b1c70:
    // 0x3b1c70: 0xc2680000  ll          $t0, 0x0($s3)
    ctx->pc = 0x3b1c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3b1c74:
    // 0x3b1c74: 0x425c0000  .word       0x425C0000                   # INVALID     $s2, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1c74u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x3B1C74 raw=0x425C0000");
label_3b1c78:
    // 0x3b1c78: 0x43f28000  .word       0x43F28000                   # INVALID     $ra, $s2, -0x8000 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1c78u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x3B1C78 raw=0x43F28000");
label_3b1c7c:
    // 0x3b1c7c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1c7cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b1c80:
    // 0x3b1c80: 0xc2500000  ll          $s0, 0x0($s2)
    ctx->pc = 0x3b1c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3b1c84:
    // 0x3b1c84: 0x425c0000  .word       0x425C0000                   # INVALID     $s2, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1c84u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x3B1C84 raw=0x425C0000");
label_3b1c88:
    // 0x3b1c88: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x3b1c88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_3b1c8c:
    // 0x3b1c8c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1c8cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b1c90:
    // 0x3b1c90: 0xc2200000  ll          $zero, 0x0($s1)
    ctx->pc = 0x3b1c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3b1c94:
    // 0x3b1c94: 0x425c0000  .word       0x425C0000                   # INVALID     $s2, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1c94u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x3B1C94 raw=0x425C0000");
label_3b1c98:
    // 0x3b1c98: 0x4414c000  mfc1        $s4, $f24
    ctx->pc = 0x3b1c98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[24], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
label_3b1c9c:
    // 0x3b1c9c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1c9cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b1ca0:
    // 0x3b1ca0: 0xc1f00000  ll          $s0, 0x0($t7)
    ctx->pc = 0x3b1ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3b1ca4:
    // 0x3b1ca4: 0x425c0000  .word       0x425C0000                   # INVALID     $s2, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1ca4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x3B1CA4 raw=0x425C0000");
label_3b1ca8:
    // 0x3b1ca8: 0x44228000  dmfc1       $v0, $f16
    ctx->pc = 0x3b1ca8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x0 at 0x3B1CA8 raw=0x44228000");
label_3b1cac:
    // 0x3b1cac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1cacu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b1cb0:
    // 0x3b1cb0: 0xc1a00000  ll          $zero, 0x0($t5)
    ctx->pc = 0x3b1cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3b1cb4:
    // 0x3b1cb4: 0x425c0000  .word       0x425C0000                   # INVALID     $s2, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1cb4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x3B1CB4 raw=0x425C0000");
label_3b1cb8:
    // 0x3b1cb8: 0x44304000  dmfc1       $s0, $f8
    ctx->pc = 0x3b1cb8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x0 at 0x3B1CB8 raw=0x44304000");
label_3b1cbc:
    // 0x3b1cbc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1cbcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b1cc0:
    // 0x3b1cc0: 0x43070000  .word       0x43070000                   # INVALID     $t8, $a3, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1cc0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x3B1CC0 raw=0x43070000");
label_3b1cc4:
    // 0x3b1cc4: 0x430c0000  .word       0x430C0000                   # INVALID     $t8, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1cc4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x3B1CC4 raw=0x430C0000");
label_3b1cc8:
    // 0x3b1cc8: 0x431b0000  .word       0x431B0000                   # INVALID     $t8, $k1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1cc8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x3B1CC8 raw=0x431B0000");
label_3b1ccc:
    // 0x3b1ccc: 0x43200000  .word       0x43200000                   # INVALID     $t9, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1cccu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x3B1CCC raw=0x43200000");
label_3b1cd0:
    // 0x3b1cd0: 0x43340000  .word       0x43340000                   # INVALID     $t9, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1cd0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x3B1CD0 raw=0x43340000");
label_3b1cd4:
    // 0x3b1cd4: 0x43430000  .word       0x43430000                   # INVALID     $k0, $v1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1cd4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x3B1CD4 raw=0x43430000");
label_3b1cd8:
    // 0x3b1cd8: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1cd8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x3B1CD8 raw=0x43480000");
label_3b1cdc:
    // 0x3b1cdc: 0x435c0000  .word       0x435C0000                   # INVALID     $k0, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1cdcu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x3B1CDC raw=0x435C0000");
label_3b1ce0:
    // 0x3b1ce0: 0x433e0000  .word       0x433E0000                   # INVALID     $t9, $fp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1ce0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x3B1CE0 raw=0x433E0000");
label_3b1ce4:
    // 0x3b1ce4: 0x43160000  .word       0x43160000                   # INVALID     $t8, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1ce4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x3B1CE4 raw=0x43160000");
label_3b1ce8:
    // 0x3b1ce8: 0x43110000  .word       0x43110000                   # INVALID     $t8, $s1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1ce8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x3B1CE8 raw=0x43110000");
label_3b1cec:
    // 0x3b1cec: 0x42b40000  .word       0x42B40000                   # INVALID     $s5, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1cecu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x3B1CEC raw=0x42B40000");
label_3b1cf0:
    // 0x3b1cf0: 0x40e00000  .word       0x40E00000                   # INVALID     $a3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1cf0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x7 at 0x3B1CF0 raw=0x40E00000");
label_3b1cf4:
    // 0x3b1cf4: 0x42300000  .word       0x42300000                   # INVALID     $s1, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1cf4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x3B1CF4 raw=0x42300000");
label_3b1cf8:
    // 0x3b1cf8: 0x42a00000  .word       0x42A00000                   # INVALID     $s5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1cf8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x3B1CF8 raw=0x42A00000");
label_3b1cfc:
    // 0x3b1cfc: 0x43000000  .word       0x43000000                   # INVALID     $t8, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1cfcu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x3B1CFC raw=0x43000000");
label_3b1d00:
    // 0x3b1d00: 0x3e800000  .word       0x3E800000                   # lui         $zero, 0x0 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1d00u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b1d04:
    // 0x3b1d04: 0x3f000000  .word       0x3F000000                   # lui         $zero, 0x0 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1d04u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b1d08:
    // 0x3b1d08: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1d08u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b1d0c:
    // 0x3b1d0c: 0x3fc00000  .word       0x3FC00000                   # lui         $zero, 0x0 # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1d0cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b1d10:
    // 0x3b1d10: 0x0  nop
    ctx->pc = 0x3b1d10u;
    // NOP
label_3b1d14:
    // 0x3b1d14: 0x0  nop
    ctx->pc = 0x3b1d14u;
    // NOP
label_3b1d18:
    // 0x3b1d18: 0x43160000  .word       0x43160000                   # INVALID     $t8, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1d18u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x3B1D18 raw=0x43160000");
label_3b1d1c:
    // 0x3b1d1c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1d1cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b1d20:
    // 0x3b1d20: 0xe070402  jal         func_81C1008
label_3b1d24:
    if (ctx->pc == 0x3B1D24u) {
        ctx->pc = 0x3B1D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D20u;
        // 0x3b1d24: 0x1d1c1915  .word       0x1D1C1915                   # bgtz        $t0, . + 4 + (0x1915 << 2) # 001C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x3B1D24 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1D28u;
        goto label_3b1d28;
    }
    ctx->pc = 0x3B1D20u;
    SET_GPR_U32(ctx, 31, 0x3B1D28u);
    ctx->pc = 0x3B1D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1D20u;
    // 0x3b1d24: 0x1d1c1915  .word       0x1D1C1915                   # bgtz        $t0, . + 4 + (0x1915 << 2) # 001C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    // Likely branch instruction at 0x3B1D24 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x81C1008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x81C1008u, 0x3B1D20u, 0x3B1D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1D28u;
label_3b1d28:
    // 0x3b1d28: 0x0  nop
    ctx->pc = 0x3b1d28u;
    // NOP
label_3b1d2c:
    // 0x3b1d2c: 0x0  nop
    ctx->pc = 0x3b1d2cu;
    // NOP
label_3b1d30:
    // 0x3b1d30: 0x316c5c  .word       0x00316C5C                   # dmult       $at, $s1 # 00006C40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1d30u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B1D30 raw=0x00316C5C");
label_3b1d34:
    // 0x3b1d34: 0x316d90  .word       0x00316D90                   # mfhi        $t5 # 00310580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1d34u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_3b1d38:
    // 0x3b1d38: 0x316da0  .word       0x00316DA0                   # add         $t5, $at, $s1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1d38u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 17);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_3b1d3c:
    // 0x3b1d3c: 0x316eb4  teq         $at, $s1, 442
    ctx->pc = 0x3b1d3cu;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
label_3b1d40:
    // 0x3b1d40: 0x316fc0  .word       0x00316FC0                   # sll         $t5, $s1, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1d40u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 17), 31));
label_3b1d44:
    // 0x3b1d44: 0x318020  add         $s0, $at, $s1
    ctx->pc = 0x3b1d44u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 17);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_3b1d48:
    // 0x3b1d48: 0x0  nop
    ctx->pc = 0x3b1d48u;
    // NOP
label_3b1d4c:
    // 0x3b1d4c: 0x0  nop
    ctx->pc = 0x3b1d4cu;
    // NOP
label_3b1d50:
    // 0x3b1d50: 0x318d24  .word       0x00318D24                   # and         $s1, $at, $s1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1d50u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 1) & GPR_U64(ctx, 17));
label_3b1d54:
    // 0x3b1d54: 0x318d5c  .word       0x00318D5C                   # dmult       $at, $s1 # 00008D40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1d54u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B1D54 raw=0x00318D5C");
label_3b1d58:
    // 0x3b1d58: 0x318d6c  .word       0x00318D6C                   # dadd        $s1, $at, $s1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1d58u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 17); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_3b1d5c:
    // 0x3b1d5c: 0x318d9c  .word       0x00318D9C                   # dmult       $at, $s1 # 00008D80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1d5cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B1D5C raw=0x00318D9C");
label_3b1d60:
    // 0x3b1d60: 0x318e40  .word       0x00318E40                   # sll         $s1, $s1, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1d60u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 25));
label_3b1d64:
    // 0x3b1d64: 0x318e9c  .word       0x00318E9C                   # dmult       $at, $s1 # 00008E80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1d64u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B1D64 raw=0x00318E9C");
label_3b1d68:
    // 0x3b1d68: 0x0  nop
    ctx->pc = 0x3b1d68u;
    // NOP
label_3b1d6c:
    // 0x3b1d6c: 0x0  nop
    ctx->pc = 0x3b1d6cu;
    // NOP
label_3b1d70:
    // 0x3b1d70: 0x31a858  .word       0x0031A858                   # mult        $s5, $at, $s1 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1d70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_3b1d74:
    // 0x3b1d74: 0x31a19c  .word       0x0031A19C                   # dmult       $at, $s1 # 0000A180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1d74u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B1D74 raw=0x0031A19C");
label_3b1d78:
    // 0x3b1d78: 0x31a230  tge         $at, $s1, 648
    ctx->pc = 0x3b1d78u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
label_3b1d7c:
    // 0x3b1d7c: 0x31a858  .word       0x0031A858                   # mult        $s5, $at, $s1 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1d7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_3b1d80:
    // 0x3b1d80: 0x31a858  .word       0x0031A858                   # mult        $s5, $at, $s1 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1d80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_3b1d84:
    // 0x3b1d84: 0x31a858  .word       0x0031A858                   # mult        $s5, $at, $s1 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1d84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_3b1d88:
    // 0x3b1d88: 0x31a858  .word       0x0031A858                   # mult        $s5, $at, $s1 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1d88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_3b1d8c:
    // 0x3b1d8c: 0x31a858  .word       0x0031A858                   # mult        $s5, $at, $s1 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1d8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_3b1d90:
    // 0x3b1d90: 0x31a430  tge         $at, $s1, 656
    ctx->pc = 0x3b1d90u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
label_3b1d94:
    // 0x3b1d94: 0x0  nop
    ctx->pc = 0x3b1d94u;
    // NOP
label_3b1d98:
    // 0x3b1d98: 0x0  nop
    ctx->pc = 0x3b1d98u;
    // NOP
label_3b1d9c:
    // 0x3b1d9c: 0x0  nop
    ctx->pc = 0x3b1d9cu;
    // NOP
label_3b1da0:
    // 0x3b1da0: 0x319320  .word       0x00319320                   # add         $s2, $at, $s1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1da0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 17);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_3b1da4:
    // 0x3b1da4: 0x319d28  .word       0x00319D28                   # mfsa        $s3 # 00310500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1da4u;
    SET_GPR_U32(ctx, 19, ctx->sa);
label_3b1da8:
    // 0x3b1da8: 0x319db8  .word       0x00319DB8                   # dsll        $s3, $s1, 22 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1da8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) << 22);
label_3b1dac:
    // 0x3b1dac: 0x31a164  .word       0x0031A164                   # and         $s4, $at, $s1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1dacu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 1) & GPR_U64(ctx, 17));
label_3b1db0:
    // 0x3b1db0: 0x31a788  .word       0x0031A788                   # jr          $at # 0011A780 <InstrIdType: CPU_SPECIAL>
label_3b1db4:
    if (ctx->pc == 0x3B1DB4u) {
        ctx->pc = 0x3B1DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1DB0u;
        // 0x3b1db4: 0x31a7bc  .word       0x0031A7BC                   # dsll32      $s4, $s1, 30 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) << (32 + 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1DB8u;
        goto label_3b1db8;
    }
    ctx->pc = 0x3B1DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x3B1DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1DB0u;
        // 0x3b1db4: 0x31a7bc  .word       0x0031A7BC                   # dsll32      $s4, $s1, 30 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) << (32 + 30));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1DB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B1DB8u;
label_3b1db8:
    // 0x3b1db8: 0x0  nop
    ctx->pc = 0x3b1db8u;
    // NOP
label_3b1dbc:
    // 0x3b1dbc: 0x0  nop
    ctx->pc = 0x3b1dbcu;
    // NOP
label_3b1dc0:
    // 0x3b1dc0: 0x31a904  .word       0x0031A904                   # sllv        $s5, $s1, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1dc0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 1) & 0x1F));
label_3b1dc4:
    // 0x3b1dc4: 0x31a9d8  .word       0x0031A9D8                   # mult        $s5, $at, $s1 # 000001C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1dc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_3b1dc8:
    // 0x3b1dc8: 0x31a9d8  .word       0x0031A9D8                   # mult        $s5, $at, $s1 # 000001C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1dc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_3b1dcc:
    // 0x3b1dcc: 0x31a9d8  .word       0x0031A9D8                   # mult        $s5, $at, $s1 # 000001C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1dccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_3b1dd0:
    // 0x3b1dd0: 0x31a9d8  .word       0x0031A9D8                   # mult        $s5, $at, $s1 # 000001C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1dd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_3b1dd4:
    // 0x3b1dd4: 0x31a9d8  .word       0x0031A9D8                   # mult        $s5, $at, $s1 # 000001C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1dd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_3b1dd8:
    // 0x3b1dd8: 0x0  nop
    ctx->pc = 0x3b1dd8u;
    // NOP
label_3b1ddc:
    // 0x3b1ddc: 0x0  nop
    ctx->pc = 0x3b1ddcu;
    // NOP
label_3b1de0:
    // 0x3b1de0: 0x31bcbc  .word       0x0031BCBC                   # dsll32      $s7, $s1, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1de0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 17) << (32 + 18));
label_3b1de4:
    // 0x3b1de4: 0x31c134  teq         $at, $s1, 772
    ctx->pc = 0x3b1de4u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
label_3b1de8:
    // 0x3b1de8: 0x31c384  .word       0x0031C384                   # sllv        $t8, $s1, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1de8u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 1) & 0x1F));
label_3b1dec:
    // 0x3b1dec: 0x31c40c  .word       0x0031C40C                   # syscall     784 # 00310000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1decu;
    ctx->pc = 0x3B1DF0u;
runtime->handleSyscall(rdram, ctx, 0xC710u);
label_3b1df0:
    // 0x3b1df0: 0x31c724  .word       0x0031C724                   # and         $t8, $at, $s1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1df0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 1) & GPR_U64(ctx, 17));
label_3b1df4:
    // 0x3b1df4: 0x31c734  teq         $at, $s1, 796
    ctx->pc = 0x3b1df4u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
label_3b1df8:
    // 0x3b1df8: 0x31c828  .word       0x0031C828                   # mfsa        $t9 # 00310000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1df8u;
    SET_GPR_U32(ctx, 25, ctx->sa);
label_3b1dfc:
    // 0x3b1dfc: 0x31c880  .word       0x0031C880                   # sll         $t9, $s1, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1dfcu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_3b1e00:
    // 0x3b1e00: 0x31cdfc  .word       0x0031CDFC                   # dsll32      $t9, $s1, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1e00u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 17) << (32 + 23));
label_3b1e04:
    // 0x3b1e04: 0x31cebc  .word       0x0031CEBC                   # dsll32      $t9, $s1, 26 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1e04u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 17) << (32 + 26));
label_3b1e08:
    // 0x3b1e08: 0x31cf8c  .word       0x0031CF8C                   # syscall     830 # 00310000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1e08u;
    ctx->pc = 0x3B1E0Cu;
runtime->handleSyscall(rdram, ctx, 0xC73Eu);
label_3b1e0c:
    // 0x3b1e0c: 0x31cff8  .word       0x0031CFF8                   # dsll        $t9, $s1, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1e0cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 17) << 31);
label_3b1e10:
    // 0x3b1e10: 0x31d268  .word       0x0031D268                   # mfsa        $k0 # 00310240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b1e10u;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_3b1e14:
    // 0x3b1e14: 0x31d278  .word       0x0031D278                   # dsll        $k0, $s1, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1e14u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) << 9);
label_3b1e18:
    // 0x3b1e18: 0x0  nop
    ctx->pc = 0x3b1e18u;
    // NOP
label_3b1e1c:
    // 0x3b1e1c: 0x0  nop
    ctx->pc = 0x3b1e1cu;
    // NOP
label_3b1e20:
    // 0x3b1e20: 0x0  nop
    ctx->pc = 0x3b1e20u;
    // NOP
label_3b1e24:
    // 0x3b1e24: 0x0  nop
    ctx->pc = 0x3b1e24u;
    // NOP
label_3b1e28:
    // 0x3b1e28: 0x0  nop
    ctx->pc = 0x3b1e28u;
    // NOP
label_3b1e2c:
    // 0x3b1e2c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1e2cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b1e30:
    // 0x3b1e30: 0x0  nop
    ctx->pc = 0x3b1e30u;
    // NOP
label_3b1e34:
    // 0x3b1e34: 0xc3480000  ll          $t0, 0x0($k0)
    ctx->pc = 0x3b1e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3b1e38:
    // 0x3b1e38: 0x0  nop
    ctx->pc = 0x3b1e38u;
    // NOP
label_3b1e3c:
    // 0x3b1e3c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1e3cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b1e40:
    // 0x3b1e40: 0xc3480000  ll          $t0, 0x0($k0)
    ctx->pc = 0x3b1e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3b1e44:
    // 0x3b1e44: 0xc3160000  ll          $s6, 0x0($t8)
    ctx->pc = 0x3b1e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 0); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3b1e48:
    // 0x3b1e48: 0x0  nop
    ctx->pc = 0x3b1e48u;
    // NOP
label_3b1e4c:
    // 0x3b1e4c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1e4cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b1e50:
    // 0x3b1e50: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1e50u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x3B1E50 raw=0x43480000");
label_3b1e54:
    // 0x3b1e54: 0xc3160000  ll          $s6, 0x0($t8)
    ctx->pc = 0x3b1e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 0); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3b1e58:
    // 0x3b1e58: 0x0  nop
    ctx->pc = 0x3b1e58u;
    // NOP
label_3b1e5c:
    // 0x3b1e5c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1e5cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b1e60:
    // 0x3b1e60: 0xc3c80000  ll          $t0, 0x0($fp)
    ctx->pc = 0x3b1e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3b1e64:
    // 0x3b1e64: 0xc3160000  ll          $s6, 0x0($t8)
    ctx->pc = 0x3b1e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 0); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3b1e68:
    // 0x3b1e68: 0x0  nop
    ctx->pc = 0x3b1e68u;
    // NOP
label_3b1e6c:
    // 0x3b1e6c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1e6cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b1e70:
    // 0x3b1e70: 0x43c80000  .word       0x43C80000                   # INVALID     $fp, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b1e70u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1E at 0x3B1E70 raw=0x43C80000");
label_3b1e74:
    // 0x3b1e74: 0xc3160000  ll          $s6, 0x0($t8)
    ctx->pc = 0x3b1e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 0); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3b1e78:
    // 0x3b1e78: 0x0  nop
    ctx->pc = 0x3b1e78u;
    // NOP
label_3b1e7c:
    // 0x3b1e7c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1e7cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b1e80:
    // 0x3b1e80: 0x67756147  daddiu      $s5, $k1, 0x6147
    ctx->pc = 0x3b1e80u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24903);
label_3b1e84:
    // 0x3b1e84: 0x6f6d5f65  ldr         $t5, 0x5F65($k1)
    ctx->pc = 0x3b1e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24421); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_3b1e88:
    // 0x3b1e88: 0x29286576  slti        $t0, $t1, 0x6576
    ctx->pc = 0x3b1e88u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)25974) ? 1 : 0);
label_3b1e8c:
    // 0x3b1e8c: 0x6425093a  daddiu      $a1, $at, 0x93A
    ctx->pc = 0x3b1e8cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)2362);
label_3b1e90:
    // 0x3b1e90: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x3b1e90u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3b1e94:
    // 0x3b1e94: 0x0  nop
    ctx->pc = 0x3b1e94u;
    // NOP
label_3b1e98:
    // 0x3b1e98: 0x0  nop
    ctx->pc = 0x3b1e98u;
    // NOP
label_3b1e9c:
    // 0x3b1e9c: 0x0  nop
    ctx->pc = 0x3b1e9cu;
    // NOP
label_3b1ea0:
    // 0x3b1ea0: 0x5f727770  .word       0x5F727770                   # bgtzl       $k1, . + 4 + (0x7770 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
label_3b1ea4:
    if (ctx->pc == 0x3B1EA4u) {
        ctx->pc = 0x3B1EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1EA0u;
        // 0x3b1ea4: 0x65646166  daddiu      $a0, $t3, 0x6166 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24934);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1EA8u;
        goto label_3b1ea8;
    }
    ctx->pc = 0x3B1EA0u;
    {
        const bool branch_taken_0x3b1ea0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x3b1ea0) {
            ctx->pc = 0x3B1EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1EA0u;
            // 0x3b1ea4: 0x65646166  daddiu      $a0, $t3, 0x6166 (Delay Slot)
            SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24934);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CFC64u;
            return;
        }
    }
    ctx->pc = 0x3B1EA8u;
label_3b1ea8:
    // 0x3b1ea8: 0x746e635f  .word       0x746E635F                   # INVALID     $v1, $t6, 0x635F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1ea8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B1EA8 raw=0x746E635F");
label_3b1eac:
    // 0x3b1eac: 0x25203d20  addiu       $zero, $t1, 0x3D20
    ctx->pc = 0x3b1eacu;
    // NOP (addiu $zero, ...)
label_3b1eb0:
    // 0x3b1eb0: 0xa64  .word       0x00000A64                   # and         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1eb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_3b1eb4:
    // 0x3b1eb4: 0x0  nop
    ctx->pc = 0x3b1eb4u;
    // NOP
label_3b1eb8:
    // 0x3b1eb8: 0x0  nop
    ctx->pc = 0x3b1eb8u;
    // NOP
label_3b1ebc:
    // 0x3b1ebc: 0x0  nop
    ctx->pc = 0x3b1ebcu;
    // NOP
label_3b1ec0:
    // 0x3b1ec0: 0x5f6c6f63  .word       0x5F6C6F63                   # bgtzl       $k1, . + 4 + (0x6F63 << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_3b1ec4:
    if (ctx->pc == 0x3B1EC4u) {
        ctx->pc = 0x3B1EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1EC0u;
        // 0x3b1ec4: 0x5b6c6176  .word       0x5B6C6176                   # blezl       $k1, . + 4 + (0x6176 << 2) # 000C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x3B1EC4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1EC8u;
        goto label_3b1ec8;
    }
    ctx->pc = 0x3B1EC0u;
    {
        const bool branch_taken_0x3b1ec0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x3b1ec0) {
            ctx->pc = 0x3B1EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1EC0u;
            // 0x3b1ec4: 0x5b6c6176  .word       0x5B6C6176                   # blezl       $k1, . + 4 + (0x6176 << 2) # 000C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x3B1EC4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CDC50u;
            return;
        }
    }
    ctx->pc = 0x3B1EC8u;
label_3b1ec8:
    // 0x3b1ec8: 0x5d643125  .word       0x5D643125                   # bgtzl       $t3, . + 4 + (0x3125 << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_3b1ecc:
    if (ctx->pc == 0x3B1ECCu) {
        ctx->pc = 0x3B1ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1EC8u;
        // 0x3b1ecc: 0x5b203d20  blezl       $t9, . + 4 + (0x3D20 << 2) (Delay Slot)
        // Likely branch instruction at 0x3B1ECC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1ED0u;
        goto label_3b1ed0;
    }
    ctx->pc = 0x3B1EC8u;
    {
        const bool branch_taken_0x3b1ec8 = (GPR_S32(ctx, 11) > 0);
        if (branch_taken_0x3b1ec8) {
            ctx->pc = 0x3B1ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1EC8u;
            // 0x3b1ecc: 0x5b203d20  blezl       $t9, . + 4 + (0x3D20 << 2) (Delay Slot)
            // Likely branch instruction at 0x3B1ECC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BE360u;
            return;
        }
    }
    ctx->pc = 0x3B1ED0u;
label_3b1ed0:
    // 0x3b1ed0: 0x30257830  andi        $a1, $at, 0x7830
    ctx->pc = 0x3b1ed0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)30768);
label_3b1ed4:
    // 0x3b1ed4: 0x5d7832  tlt         $v0, $sp, 480
    ctx->pc = 0x3b1ed4u;
    if (GPR_S64(ctx, 2) < GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_3b1ed8:
    // 0x3b1ed8: 0x65746172  daddiu      $s4, $t3, 0x6172
    ctx->pc = 0x3b1ed8u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24946);
label_3b1edc:
    // 0x3b1edc: 0x662520  .word       0x00662520                   # add         $a0, $v1, $a2 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1edcu;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_3b1ee0:
    // 0x3b1ee0: 0x7474656c  .word       0x7474656C                   # INVALID     $v1, $s4, 0x656C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1ee0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B1EE0 raw=0x7474656C");
label_3b1ee4:
    // 0x3b1ee4: 0x25207265  addiu       $zero, $t1, 0x7265
    ctx->pc = 0x3b1ee4u;
    // NOP (addiu $zero, ...)
label_3b1ee8:
    // 0x3b1ee8: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1ee8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_3b1eec:
    // 0x3b1eec: 0x0  nop
    ctx->pc = 0x3b1eecu;
    // NOP
label_3b1ef0:
    // 0x3b1ef0: 0x44202020  .word       0x44202020                   # dmfc1       $zero, $f4 # 00000020 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3b1ef0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x20 at 0x3B1EF0 raw=0x44202020");
label_3b1ef4:
    // 0x3b1ef4: 0x6c697665  ldr         $t1, 0x7665($v1)
    ctx->pc = 0x3b1ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30309); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_3b1ef8:
    // 0x3b1ef8: 0x0  nop
    ctx->pc = 0x3b1ef8u;
    // NOP
label_3b1efc:
    // 0x3b1efc: 0x0  nop
    ctx->pc = 0x3b1efcu;
    // NOP
label_3b1f00:
    // 0x3b1f00: 0x643825  or          $a3, $v1, $a0
    ctx->pc = 0x3b1f00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_3b1f04:
    // 0x3b1f04: 0x0  nop
    ctx->pc = 0x3b1f04u;
    // NOP
label_3b1f08:
    // 0x3b1f08: 0x0  nop
    ctx->pc = 0x3b1f08u;
    // NOP
label_3b1f0c:
    // 0x3b1f0c: 0x0  nop
    ctx->pc = 0x3b1f0cu;
    // NOP
label_3b1f10:
    // 0x3b1f10: 0x6f6c6f63  ldr         $t4, 0x6F63($k1)
    ctx->pc = 0x3b1f10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_3b1f14:
    // 0x3b1f14: 0x305b2072  andi        $k1, $v0, 0x2072
    ctx->pc = 0x3b1f14u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8306);
label_3b1f18:
    // 0x3b1f18: 0x32302578  andi        $s0, $s1, 0x2578
    ctx->pc = 0x3b1f18u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9592);
label_3b1f1c:
    // 0x3b1f1c: 0x30202c78  andi        $zero, $at, 0x2C78
    ctx->pc = 0x3b1f1cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)11384);
label_3b1f20:
    // 0x3b1f20: 0x32302578  andi        $s0, $s1, 0x2578
    ctx->pc = 0x3b1f20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9592);
label_3b1f24:
    // 0x3b1f24: 0x30202c78  andi        $zero, $at, 0x2C78
    ctx->pc = 0x3b1f24u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)11384);
label_3b1f28:
    // 0x3b1f28: 0x32302578  andi        $s0, $s1, 0x2578
    ctx->pc = 0x3b1f28u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9592);
label_3b1f2c:
    // 0x3b1f2c: 0x30202c78  andi        $zero, $at, 0x2C78
    ctx->pc = 0x3b1f2cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)11384);
label_3b1f30:
    // 0x3b1f30: 0x32302578  andi        $s0, $s1, 0x2578
    ctx->pc = 0x3b1f30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9592);
label_3b1f34:
    // 0x3b1f34: 0x5d78  dsll        $t3, $zero, 21
    ctx->pc = 0x3b1f34u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) << 21);
label_3b1f38:
    // 0x3b1f38: 0x255b2074  addiu       $k1, $t2, 0x2074
    ctx->pc = 0x3b1f38u;
    SET_GPR_S32(ctx, 27, (int32_t)ADD32(GPR_U32(ctx, 10), 8308));
label_3b1f3c:
    // 0x3b1f3c: 0x5d66  .word       0x00005D66                   # xor         $t3, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1f3cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_3b1f40:
    // 0x3b1f40: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x3b1f40u;
    // NOP (addi to $zero)
label_3b1f44:
    // 0x3b1f44: 0x6566694c  daddiu      $a2, $t3, 0x694C
    ctx->pc = 0x3b1f44u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26956);
label_3b1f48:
    // 0x3b1f48: 0x0  nop
    ctx->pc = 0x3b1f48u;
    // NOP
label_3b1f4c:
    // 0x3b1f4c: 0x0  nop
    ctx->pc = 0x3b1f4cu;
    // NOP
label_3b1f50:
    // 0x3b1f50: 0x67756147  daddiu      $s5, $k1, 0x6147
    ctx->pc = 0x3b1f50u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24903);
label_3b1f54:
    // 0x3b1f54: 0x72745f65  .word       0x72745F65                   # INVALID     $s3, $s4, 0x5F65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b1f54u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x3B1F54 raw=0x72745F65");
label_3b1f58:
    // 0x3b1f58: 0x28736e61  slti        $s3, $v1, 0x6E61
    ctx->pc = 0x3b1f58u;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)28257) ? 1 : 0);
label_3b1f5c:
    // 0x3b1f5c: 0x25093a29  addiu       $t1, $t0, 0x3A29
    ctx->pc = 0x3b1f5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 14889));
label_3b1f60:
    // 0x3b1f60: 0xa64  .word       0x00000A64                   # and         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1f60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_3b1f64:
    // 0x3b1f64: 0x0  nop
    ctx->pc = 0x3b1f64u;
    // NOP
label_3b1f68:
    // 0x3b1f68: 0x0  nop
    ctx->pc = 0x3b1f68u;
    // NOP
label_3b1f6c:
    // 0x3b1f6c: 0x0  nop
    ctx->pc = 0x3b1f6cu;
    // NOP
label_3b1f70:
    // 0x3b1f70: 0x69766544  ldl         $s6, 0x6544($t3)
    ctx->pc = 0x3b1f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25924); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
label_3b1f74:
    // 0x3b1f74: 0x6843206c  ldl         $v1, 0x206C($v0)
    ctx->pc = 0x3b1f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8300); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3b1f78:
    // 0x3b1f78: 0x65677261  daddiu      $a3, $t3, 0x7261
    ctx->pc = 0x3b1f78u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29281);
label_3b1f7c:
    // 0x3b1f7c: 0x5b203d20  blezl       $t9, . + 4 + (0x3D20 << 2)
label_3b1f80:
    if (ctx->pc == 0x3B1F80u) {
        ctx->pc = 0x3B1F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1F7Cu;
        // 0x3b1f80: 0x252f6425  addiu       $t7, $t1, 0x6425 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), 25637));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1F84u;
        goto label_3b1f84;
    }
    ctx->pc = 0x3B1F7Cu;
    {
        const bool branch_taken_0x3b1f7c = (GPR_S32(ctx, 25) <= 0);
        if (branch_taken_0x3b1f7c) {
            ctx->pc = 0x3B1F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1F7Cu;
            // 0x3b1f80: 0x252f6425  addiu       $t7, $t1, 0x6425 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), 25637));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1400u;
            return;
        }
    }
    ctx->pc = 0x3B1F84u;
label_3b1f84:
    // 0x3b1f84: 0x5d64  .word       0x00005D64                   # and         $t3, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1f84u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_3b1f88:
    // 0x3b1f88: 0x0  nop
    ctx->pc = 0x3b1f88u;
    // NOP
label_3b1f8c:
    // 0x3b1f8c: 0x0  nop
    ctx->pc = 0x3b1f8cu;
    // NOP
label_3b1f90:
    // 0x3b1f90: 0x69766544  ldl         $s6, 0x6544($t3)
    ctx->pc = 0x3b1f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25924); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
label_3b1f94:
    // 0x3b1f94: 0x6954206c  ldl         $s4, 0x206C($t2)
    ctx->pc = 0x3b1f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8300); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_3b1f98:
    // 0x3b1f98: 0x2072656d  addi        $s2, $v1, 0x656D
    ctx->pc = 0x3b1f98u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25965, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_3b1f9c:
    // 0x3b1f9c: 0x5b203d20  blezl       $t9, . + 4 + (0x3D20 << 2)
label_3b1fa0:
    if (ctx->pc == 0x3B1FA0u) {
        ctx->pc = 0x3B1FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1F9Cu;
        // 0x3b1fa0: 0x252f6425  addiu       $t7, $t1, 0x6425 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), 25637));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1FA4u;
        goto label_3b1fa4;
    }
    ctx->pc = 0x3B1F9Cu;
    {
        const bool branch_taken_0x3b1f9c = (GPR_S32(ctx, 25) <= 0);
        if (branch_taken_0x3b1f9c) {
            ctx->pc = 0x3B1FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1F9Cu;
            // 0x3b1fa0: 0x252f6425  addiu       $t7, $t1, 0x6425 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), 25637));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1420u;
            return;
        }
    }
    ctx->pc = 0x3B1FA4u;
label_3b1fa4:
    // 0x3b1fa4: 0x5d64  .word       0x00005D64                   # and         $t3, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b1fa4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_3b1fa8:
    // 0x3b1fa8: 0x0  nop
    ctx->pc = 0x3b1fa8u;
    // NOP
label_3b1fac:
    // 0x3b1fac: 0x0  nop
    ctx->pc = 0x3b1facu;
    // NOP
label_3b1fb0:
    // 0x3b1fb0: 0x5f415453  .word       0x5F415453                   # bgtzl       $k0, . + 4 + (0x5453 << 2) # 00010000 <InstrIdType: CPU_NORMAL>
label_3b1fb4:
    if (ctx->pc == 0x3B1FB4u) {
        ctx->pc = 0x3B1FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1FB0u;
        // 0x3b1fb4: 0x445f4c50  .word       0x445F4C50                   # cfc1        $ra, $9 # 00000450 <InstrIdType: R5900_COP1> (Delay Slot)
        SET_GPR_U32(ctx, 31, 0); // Unimplemented FCR9
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1FB8u;
        goto label_3b1fb8;
    }
    ctx->pc = 0x3B1FB0u;
    {
        const bool branch_taken_0x3b1fb0 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x3b1fb0) {
            ctx->pc = 0x3B1FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1FB0u;
            // 0x3b1fb4: 0x445f4c50  .word       0x445F4C50                   # cfc1        $ra, $9 # 00000450 <InstrIdType: R5900_COP1> (Delay Slot)
            SET_GPR_U32(ctx, 31, 0); // Unimplemented FCR9
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7100u;
            return;
        }
    }
    ctx->pc = 0x3B1FB8u;
label_3b1fb8:
    // 0x3b1fb8: 0x4c495645  .word       0x4C495645                   # INVALID     $v0, $t1, 0x5645 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b1fb8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x3B1FB8 raw=0x4C495645");
label_3b1fbc:
    // 0x3b1fbc: 0x5b203d20  blezl       $t9, . + 4 + (0x3D20 << 2)
label_3b1fc0:
    if (ctx->pc == 0x3B1FC0u) {
        ctx->pc = 0x3B1FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1FBCu;
        // 0x3b1fc0: 0x5d643125  .word       0x5D643125                   # bgtzl       $t3, . + 4 + (0x3125 << 2) # 00040000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x3B1FC0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1FC4u;
        goto label_3b1fc4;
    }
    ctx->pc = 0x3B1FBCu;
    {
        const bool branch_taken_0x3b1fbc = (GPR_S32(ctx, 25) <= 0);
        if (branch_taken_0x3b1fbc) {
            ctx->pc = 0x3B1FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1FBCu;
            // 0x3b1fc0: 0x5d643125  .word       0x5D643125                   # bgtzl       $t3, . + 4 + (0x3125 << 2) # 00040000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x3B1FC0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1440u;
            return;
        }
    }
    ctx->pc = 0x3B1FC4u;
label_3b1fc4:
    // 0x3b1fc4: 0x5453202c  bnel        $v0, $s3, . + 4 + (0x202C << 2)
label_3b1fc8:
    if (ctx->pc == 0x3B1FC8u) {
        ctx->pc = 0x3B1FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1FC4u;
        // 0x3b1fc8: 0x4c505f41  .word       0x4C505F41                   # INVALID     $v0, $s0, 0x5F41 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x13 at 0x3B1FC8 raw=0x4C505F41");
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1FCCu;
        goto label_3b1fcc;
    }
    ctx->pc = 0x3B1FC4u;
    {
        const bool branch_taken_0x3b1fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x3b1fc4) {
            ctx->pc = 0x3B1FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1FC4u;
            // 0x3b1fc8: 0x4c505f41  .word       0x4C505F41                   # INVALID     $v0, $s0, 0x5F41 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x3B1FC8 raw=0x4C505F41");
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BA078u;
            return;
        }
    }
    ctx->pc = 0x3B1FCCu;
label_3b1fcc:
    // 0x3b1fcc: 0x5645445f  bnel        $s2, $a1, . + 4 + (0x445F << 2)
label_3b1fd0:
    if (ctx->pc == 0x3B1FD0u) {
        ctx->pc = 0x3B1FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1FCCu;
        // 0x3b1fd0: 0x535f4c49  beql        $k0, $ra, . + 4 + (0x4C49 << 2) (Delay Slot)
        // Likely branch instruction at 0x3B1FD0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1FD4u;
        goto label_3b1fd4;
    }
    ctx->pc = 0x3B1FCCu;
    {
        const bool branch_taken_0x3b1fcc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 5));
        if (branch_taken_0x3b1fcc) {
            ctx->pc = 0x3B1FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1FCCu;
            // 0x3b1fd0: 0x535f4c49  beql        $k0, $ra, . + 4 + (0x4C49 << 2) (Delay Slot)
            // Likely branch instruction at 0x3B1FD0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C314Cu;
            return;
        }
    }
    ctx->pc = 0x3B1FD4u;
label_3b1fd4:
    // 0x3b1fd4: 0x54524154  bnel        $v0, $s2, . + 4 + (0x4154 << 2)
label_3b1fd8:
    if (ctx->pc == 0x3B1FD8u) {
        ctx->pc = 0x3B1FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1FD4u;
        // 0x3b1fd8: 0x5b203d20  blezl       $t9, . + 4 + (0x3D20 << 2) (Delay Slot)
        // Likely branch instruction at 0x3B1FD8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1FDCu;
        goto label_3b1fdc;
    }
    ctx->pc = 0x3B1FD4u;
    {
        const bool branch_taken_0x3b1fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x3b1fd4) {
            ctx->pc = 0x3B1FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1FD4u;
            // 0x3b1fd8: 0x5b203d20  blezl       $t9, . + 4 + (0x3D20 << 2) (Delay Slot)
            // Likely branch instruction at 0x3B1FD8 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2528u;
            return;
        }
    }
    ctx->pc = 0x3B1FDCu;
label_3b1fdc:
    // 0x3b1fdc: 0x5d643125  .word       0x5D643125                   # bgtzl       $t3, . + 4 + (0x3125 << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_3b1fe0:
    if (ctx->pc == 0x3B1FE0u) {
        ctx->pc = 0x3B1FE4u;
        goto label_3b1fe4;
    }
    ctx->pc = 0x3B1FDCu;
    {
        const bool branch_taken_0x3b1fdc = (GPR_S32(ctx, 11) > 0);
        if (branch_taken_0x3b1fdc) {
            ctx->pc = 0x3BE474u;
            return;
        }
    }
    ctx->pc = 0x3B1FE4u;
label_3b1fe4:
    // 0x3b1fe4: 0x0  nop
    ctx->pc = 0x3b1fe4u;
    // NOP
label_3b1fe8:
    // 0x3b1fe8: 0x0  nop
    ctx->pc = 0x3b1fe8u;
    // NOP
label_3b1fec:
    // 0x3b1fec: 0x0  nop
    ctx->pc = 0x3b1fecu;
    // NOP
label_3b1ff0:
    // 0x3b1ff0: 0x6566694c  daddiu      $a2, $t3, 0x694C
    ctx->pc = 0x3b1ff0u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26956);
label_3b1ff4:
    // 0x3b1ff4: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x3b1ff4u;
    // NOP (addi to $zero)
label_3b1ff8:
    // 0x3b1ff8: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x3b1ff8u;
    // NOP (addi to $zero)
label_3b1ffc:
    // 0x3b1ffc: 0x5b203d20  blezl       $t9, . + 4 + (0x3D20 << 2)
label_3b2000:
    if (ctx->pc == 0x3B2000u) {
        ctx->pc = 0x3B2000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1FFCu;
        // 0x3b2000: 0x252f6425  addiu       $t7, $t1, 0x6425 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), 25637));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2004u;
        goto label_3b2004;
    }
    ctx->pc = 0x3B1FFCu;
    {
        const bool branch_taken_0x3b1ffc = (GPR_S32(ctx, 25) <= 0);
        if (branch_taken_0x3b1ffc) {
            ctx->pc = 0x3B2000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1FFCu;
            // 0x3b2000: 0x252f6425  addiu       $t7, $t1, 0x6425 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), 25637));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1480u;
            return;
        }
    }
    ctx->pc = 0x3B2004u;
label_3b2004:
    // 0x3b2004: 0x5d64  .word       0x00005D64                   # and         $t3, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2004u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_3b2008:
    // 0x3b2008: 0x0  nop
    ctx->pc = 0x3b2008u;
    // NOP
label_3b200c:
    // 0x3b200c: 0x0  nop
    ctx->pc = 0x3b200cu;
    // NOP
label_3b2010:
    // 0x3b2010: 0x6566694c  daddiu      $a2, $t3, 0x694C
    ctx->pc = 0x3b2010u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26956);
label_3b2014:
    // 0x3b2014: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x3b2014u;
    // NOP (addi to $zero)
label_3b2018:
    // 0x3b2018: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x3b2018u;
    // NOP (addi to $zero)
label_3b201c:
    // 0x3b201c: 0x5b203d20  blezl       $t9, . + 4 + (0x3D20 << 2)
label_3b2020:
    if (ctx->pc == 0x3B2020u) {
        ctx->pc = 0x3B2020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B201Cu;
        // 0x3b2020: 0x252f6425  addiu       $t7, $t1, 0x6425 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), 25637));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2024u;
        goto label_3b2024;
    }
    ctx->pc = 0x3B201Cu;
    {
        const bool branch_taken_0x3b201c = (GPR_S32(ctx, 25) <= 0);
        if (branch_taken_0x3b201c) {
            ctx->pc = 0x3B2020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B201Cu;
            // 0x3b2020: 0x252f6425  addiu       $t7, $t1, 0x6425 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), 25637));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C14A0u;
            return;
        }
    }
    ctx->pc = 0x3B2024u;
label_3b2024:
    // 0x3b2024: 0x202c5d64  addi        $t4, $at, 0x5D64
    ctx->pc = 0x3b2024u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)23908, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_3b2028:
    // 0x3b2028: 0x25282020  addiu       $t0, $t1, 0x2020
    ctx->pc = 0x3b2028u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 8224));
label_3b202c:
    // 0x3b202c: 0x296433  tltu        $at, $t1, 400
    ctx->pc = 0x3b202cu;
    if (GPR_U64(ctx, 1) < GPR_U64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_3b2030:
    // 0x3b2030: 0x796c6f50  lq          $t4, 0x6F50($t3)
    ctx->pc = 0x3b2030u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 11), 28496)));
label_3b2034:
    // 0x3b2034: 0x3474665f  ori         $s4, $v1, 0x665F
    ctx->pc = 0x3b2034u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26207);
label_3b2038:
    // 0x3b2038: 0x0  nop
    ctx->pc = 0x3b2038u;
    // NOP
label_3b203c:
    // 0x3b203c: 0x0  nop
    ctx->pc = 0x3b203cu;
    // NOP
label_3b2040:
    // 0x3b2040: 0x676552  .word       0x00676552                   # mflo        $t4 # 00670540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2040u;
    SET_GPR_U64(ctx, 12, ctx->lo);
label_3b2044:
    // 0x3b2044: 0x0  nop
    ctx->pc = 0x3b2044u;
    // NOP
label_3b2048:
    // 0x3b2048: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x3b2048u;
    // NOP (addi to $zero)
label_3b204c:
    // 0x3b204c: 0x766e4520  .word       0x766E4520                   # INVALID     $s3, $t6, 0x4520 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b204cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B204C raw=0x766E4520");
label_3b2050:
    // 0x3b2050: 0x0  nop
    ctx->pc = 0x3b2050u;
    // NOP
label_3b2054:
    // 0x3b2054: 0x0  nop
    ctx->pc = 0x3b2054u;
    // NOP
label_3b2058:
    // 0x3b2058: 0x6f6f6c66  ldr         $t7, 0x6C66($k1)
    ctx->pc = 0x3b2058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 27750); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_3b205c:
    // 0x3b205c: 0x64312572  daddiu      $s1, $at, 0x2572
    ctx->pc = 0x3b205cu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)9586);
label_3b2060:
    // 0x3b2060: 0x0  nop
    ctx->pc = 0x3b2060u;
    // NOP
label_3b2064:
    // 0x3b2064: 0x0  nop
    ctx->pc = 0x3b2064u;
    // NOP
label_3b2068:
    // 0x3b2068: 0x0  nop
    ctx->pc = 0x3b2068u;
    // NOP
label_3b206c:
    // 0x3b206c: 0x0  nop
    ctx->pc = 0x3b206cu;
    // NOP
label_3b2070:
    // 0x3b2070: 0x3312e0  .word       0x003312E0                   # add         $v0, $at, $s3 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2070u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_3b2074:
    // 0x3b2074: 0x331330  tge         $at, $s3, 76
    ctx->pc = 0x3b2074u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3b2078:
    // 0x3b2078: 0x3312e0  .word       0x003312E0                   # add         $v0, $at, $s3 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2078u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_3b207c:
    // 0x3b207c: 0x331330  tge         $at, $s3, 76
    ctx->pc = 0x3b207cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3b2080:
    // 0x3b2080: 0x3312e0  .word       0x003312E0                   # add         $v0, $at, $s3 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2080u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_3b2084:
    // 0x3b2084: 0x331330  tge         $at, $s3, 76
    ctx->pc = 0x3b2084u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3b2088:
    // 0x3b2088: 0x0  nop
    ctx->pc = 0x3b2088u;
    // NOP
label_3b208c:
    // 0x3b208c: 0x0  nop
    ctx->pc = 0x3b208cu;
    // NOP
label_3b2090:
    // 0x3b2090: 0x330df0  tge         $at, $s3, 55
    ctx->pc = 0x3b2090u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3b2094:
    // 0x3b2094: 0x331040  .word       0x00331040                   # sll         $v0, $s3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_3b2098:
    // 0x3b2098: 0x330eb4  teq         $at, $s3, 58
    ctx->pc = 0x3b2098u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3b209c:
    // 0x3b209c: 0x331100  .word       0x00331100                   # sll         $v0, $s3, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b209cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_3b20a0:
    // 0x3b20a0: 0x330f7c  .word       0x00330F7C                   # dsll32      $at, $s3, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b20a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 29));
label_3b20a4:
    // 0x3b20a4: 0x3311bc  .word       0x003311BC                   # dsll32      $v0, $s3, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b20a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 6));
label_3b20a8:
    // 0x3b20a8: 0x0  nop
    ctx->pc = 0x3b20a8u;
    // NOP
label_3b20ac:
    // 0x3b20ac: 0x0  nop
    ctx->pc = 0x3b20acu;
    // NOP
label_3b20b0:
    // 0x3b20b0: 0x330ab8  .word       0x00330AB8                   # dsll        $at, $s3, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b20b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << 10);
label_3b20b4:
    // 0x3b20b4: 0x330acc  .word       0x00330ACC                   # syscall     43 # 00330000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b20b4u;
    ctx->pc = 0x3B20B8u;
runtime->handleSyscall(rdram, ctx, 0xCC2Bu);
label_3b20b8:
    // 0x3b20b8: 0x330ab8  .word       0x00330AB8                   # dsll        $at, $s3, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b20b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << 10);
label_3b20bc:
    // 0x3b20bc: 0x330acc  .word       0x00330ACC                   # syscall     43 # 00330000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b20bcu;
    ctx->pc = 0x3B20C0u;
runtime->handleSyscall(rdram, ctx, 0xCC2Bu);
label_3b20c0:
    // 0x3b20c0: 0x330ab8  .word       0x00330AB8                   # dsll        $at, $s3, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b20c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << 10);
label_3b20c4:
    // 0x3b20c4: 0x330acc  .word       0x00330ACC                   # syscall     43 # 00330000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b20c4u;
    ctx->pc = 0x3B20C8u;
runtime->handleSyscall(rdram, ctx, 0xCC2Bu);
label_3b20c8:
    // 0x3b20c8: 0x65646166  daddiu      $a0, $t3, 0x6166
    ctx->pc = 0x3b20c8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24934);
label_3b20cc:
    // 0x3b20cc: 0x6625093a  daddiu      $a1, $s1, 0x93A
    ctx->pc = 0x3b20ccu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)2362);
label_3b20d0:
    // 0x3b20d0: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x3b20d0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3b20d4:
    // 0x3b20d4: 0x0  nop
    ctx->pc = 0x3b20d4u;
    // NOP
label_3b20d8:
    // 0x3b20d8: 0x0  nop
    ctx->pc = 0x3b20d8u;
    // NOP
label_3b20dc:
    // 0x3b20dc: 0x0  nop
    ctx->pc = 0x3b20dcu;
    // NOP
label_3b20e0:
    // 0x3b20e0: 0x6d657469  ldr         $a1, 0x7469($t3)
    ctx->pc = 0x3b20e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29801); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_3b20e4:
    // 0x3b20e4: 0x206f6e5f  addi        $t7, $v1, 0x6E5F
    ctx->pc = 0x3b20e4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28255, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_3b20e8:
    // 0x3b20e8: 0x3125203d  andi        $a1, $t1, 0x203D
    ctx->pc = 0x3b20e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)8253);
label_3b20ec:
    // 0x3b20ec: 0x70202c64  .word       0x70202C64                   # INVALID     $at, $zero, 0x2C64 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b20ecu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x3B20EC raw=0x70202C64");
label_3b20f0:
    // 0x3b20f0: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b20f0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B20F0 raw=0x74617453");
label_3b20f4:
    // 0x3b20f4: 0x74693e2d  .word       0x74693E2D                   # INVALID     $v1, $t1, 0x3E2D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b20f4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B20F4 raw=0x74693E2D");
label_3b20f8:
    // 0x3b20f8: 0x6d5f6d65  ldr         $ra, 0x6D65($t2)
    ctx->pc = 0x3b20f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 28005); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
label_3b20fc:
    // 0x3b20fc: 0x5f756e65  .word       0x5F756E65                   # bgtzl       $k1, . + 4 + (0x6E65 << 2) # 00150000 <InstrIdType: CPU_NORMAL>
label_3b2100:
    if (ctx->pc == 0x3B2100u) {
        ctx->pc = 0x3B2100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B20FCu;
        // 0x3b2100: 0x20706f74  addi        $s0, $v1, 0x6F74 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28532, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2104u;
        goto label_3b2104;
    }
    ctx->pc = 0x3B20FCu;
    {
        const bool branch_taken_0x3b20fc = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x3b20fc) {
            ctx->pc = 0x3B2100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B20FCu;
            // 0x3b2100: 0x20706f74  addi        $s0, $v1, 0x6F74 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28532, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CDA94u;
            return;
        }
    }
    ctx->pc = 0x3B2104u;
label_3b2104:
    // 0x3b2104: 0x3125203d  andi        $a1, $t1, 0x203D
    ctx->pc = 0x3b2104u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)8253);
label_3b2108:
    // 0x3b2108: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2108u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_3b210c:
    // 0x3b210c: 0x0  nop
    ctx->pc = 0x3b210cu;
    // NOP
label_3b2110:
    // 0x3b2110: 0x3f746547  .word       0x3F746547                   # lui         $s4, 0x6547 # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b2110u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)25927 << 16));
label_3b2114:
    // 0x3b2114: 0x6172542f  daddi       $s2, $t3, 0x542F
    ctx->pc = 0x3b2114u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)21551; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_3b2118:
    // 0x3b2118: 0x3f6873  tltu        $at, $ra, 417
    ctx->pc = 0x3b2118u;
    if (GPR_U64(ctx, 1) < GPR_U64(ctx, 31)) { runtime->handleTrap(rdram, ctx); }
label_3b211c:
    // 0x3b211c: 0x0  nop
    ctx->pc = 0x3b211cu;
    // NOP
label_3b2120:
    // 0x3b2120: 0x337c1c  .word       0x00337C1C                   # dmult       $at, $s3 # 00007C00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2120u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B2120 raw=0x00337C1C");
label_3b2124:
    // 0x3b2124: 0x337d34  teq         $at, $s3, 500
    ctx->pc = 0x3b2124u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3b2128:
    // 0x3b2128: 0x337d34  teq         $at, $s3, 500
    ctx->pc = 0x3b2128u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3b212c:
    // 0x3b212c: 0x337d34  teq         $at, $s3, 500
    ctx->pc = 0x3b212cu;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3b2130:
    // 0x3b2130: 0x337d34  teq         $at, $s3, 500
    ctx->pc = 0x3b2130u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3b2134:
    // 0x3b2134: 0x337d34  teq         $at, $s3, 500
    ctx->pc = 0x3b2134u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3b2138:
    // 0x3b2138: 0x337d34  teq         $at, $s3, 500
    ctx->pc = 0x3b2138u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3b213c:
    // 0x3b213c: 0x337d34  teq         $at, $s3, 500
    ctx->pc = 0x3b213cu;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3b2140:
    // 0x3b2140: 0x337d34  teq         $at, $s3, 500
    ctx->pc = 0x3b2140u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3b2144:
    // 0x3b2144: 0x0  nop
    ctx->pc = 0x3b2144u;
    // NOP
label_3b2148:
    // 0x3b2148: 0x0  nop
    ctx->pc = 0x3b2148u;
    // NOP
label_3b214c:
    // 0x3b214c: 0x0  nop
    ctx->pc = 0x3b214cu;
    // NOP
label_3b2150:
    // 0x3b2150: 0x338794  .word       0x00338794                   # dsllv       $s0, $s3, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2150u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) << (GPR_U32(ctx, 1) & 0x3F));
label_3b2154:
    // 0x3b2154: 0x33877c  .word       0x0033877C                   # dsll32      $s0, $s3, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2154u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) << (32 + 29));
label_3b2158:
    // 0x3b2158: 0x33877c  .word       0x0033877C                   # dsll32      $s0, $s3, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2158u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) << (32 + 29));
label_3b215c:
    // 0x3b215c: 0x338778  .word       0x00338778                   # dsll        $s0, $s3, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b215cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) << 29);
label_3b2160:
    // 0x3b2160: 0x338778  .word       0x00338778                   # dsll        $s0, $s3, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2160u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) << 29);
label_3b2164:
    // 0x3b2164: 0x338774  teq         $at, $s3, 541
    ctx->pc = 0x3b2164u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3b2168:
    // 0x3b2168: 0x338774  teq         $at, $s3, 541
    ctx->pc = 0x3b2168u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3b216c:
    // 0x3b216c: 0x338774  teq         $at, $s3, 541
    ctx->pc = 0x3b216cu;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3b2170:
    // 0x3b2170: 0x338774  teq         $at, $s3, 541
    ctx->pc = 0x3b2170u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3b2174:
    // 0x3b2174: 0x338774  teq         $at, $s3, 541
    ctx->pc = 0x3b2174u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3b2178:
    // 0x3b2178: 0x0  nop
    ctx->pc = 0x3b2178u;
    // NOP
label_3b217c:
    // 0x3b217c: 0x0  nop
    ctx->pc = 0x3b217cu;
    // NOP
label_3b2180:
    // 0x3b2180: 0x338810  .word       0x00338810                   # mfhi        $s1 # 00330000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2180u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_3b2184:
    // 0x3b2184: 0x3387fc  .word       0x003387FC                   # dsll32      $s0, $s3, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2184u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) << (32 + 31));
label_3b2188:
    // 0x3b2188: 0x3387fc  .word       0x003387FC                   # dsll32      $s0, $s3, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2188u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) << (32 + 31));
label_3b218c:
    // 0x3b218c: 0x3387f8  .word       0x003387F8                   # dsll        $s0, $s3, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b218cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) << 31);
label_3b2190:
    // 0x3b2190: 0x3387f8  .word       0x003387F8                   # dsll        $s0, $s3, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2190u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) << 31);
label_3b2194:
    // 0x3b2194: 0x3387f4  teq         $at, $s3, 543
    ctx->pc = 0x3b2194u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3b2198:
    // 0x3b2198: 0x3387f4  teq         $at, $s3, 543
    ctx->pc = 0x3b2198u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3b219c:
    // 0x3b219c: 0x3387f4  teq         $at, $s3, 543
    ctx->pc = 0x3b219cu;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3b21a0:
    // 0x3b21a0: 0x3387f4  teq         $at, $s3, 543
    ctx->pc = 0x3b21a0u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3b21a4:
    // 0x3b21a4: 0x3387f4  teq         $at, $s3, 543
    ctx->pc = 0x3b21a4u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3b21a8:
    // 0x3b21a8: 0x0  nop
    ctx->pc = 0x3b21a8u;
    // NOP
label_3b21ac:
    // 0x3b21ac: 0x0  nop
    ctx->pc = 0x3b21acu;
    // NOP
label_3b21b0:
    // 0x3b21b0: 0x338880  .word       0x00338880                   # sll         $s1, $s3, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b21b0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_3b21b4:
    // 0x3b21b4: 0x33887c  .word       0x0033887C                   # dsll32      $s1, $s3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b21b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) << (32 + 1));
label_3b21b8:
    // 0x3b21b8: 0x33887c  .word       0x0033887C                   # dsll32      $s1, $s3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b21b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) << (32 + 1));
label_3b21bc:
    // 0x3b21bc: 0x338878  .word       0x00338878                   # dsll        $s1, $s3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b21bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) << 1);
label_3b21c0:
    // 0x3b21c0: 0x338878  .word       0x00338878                   # dsll        $s1, $s3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b21c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) << 1);
label_3b21c4:
    // 0x3b21c4: 0x338874  teq         $at, $s3, 545
    ctx->pc = 0x3b21c4u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3b21c8:
    // 0x3b21c8: 0x338874  teq         $at, $s3, 545
    ctx->pc = 0x3b21c8u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3b21cc:
    // 0x3b21cc: 0x338874  teq         $at, $s3, 545
    ctx->pc = 0x3b21ccu;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3b21d0:
    // 0x3b21d0: 0x338874  teq         $at, $s3, 545
    ctx->pc = 0x3b21d0u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3b21d4:
    // 0x3b21d4: 0x338874  teq         $at, $s3, 545
    ctx->pc = 0x3b21d4u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3b21d8:
    // 0x3b21d8: 0x0  nop
    ctx->pc = 0x3b21d8u;
    // NOP
label_3b21dc:
    // 0x3b21dc: 0x0  nop
    ctx->pc = 0x3b21dcu;
    // NOP
label_3b21e0:
    // 0x3b21e0: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b21e0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b21e4:
    // 0x3b21e4: 0x72645320  .word       0x72645320                   # madd1       $t2, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b21e4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b21e8:
    // 0x3b21e8: 0x616c6544  daddi       $t4, $t3, 0x6544
    ctx->pc = 0x3b21e8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25924; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
label_3b21ec:
    // 0x3b21ec: 0x72685479  .word       0x72685479                   # INVALID     $s3, $t0, 0x5479 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b21ecu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x39 at 0x3B21EC raw=0x72685479");
label_3b21f0:
    // 0x3b21f0: 0x3a646165  xori        $a0, $s3, 0x6165
    ctx->pc = 0x3b21f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24933);
label_3b21f4:
    // 0x3b21f4: 0x72724520  .word       0x72724520                   # madd1       $t0, $s3, $s2 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b21f4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_3b21f8:
    // 0x3b21f8: 0x203a726f  addi        $k0, $at, 0x726F
    ctx->pc = 0x3b21f8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)29295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_3b21fc:
    // 0x3b21fc: 0x41746553  .word       0x41746553                   # INVALID     $t3, $s4, 0x6553 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b21fcu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x3B21FC raw=0x41746553");
label_3b2200:
    // 0x3b2200: 0x6d72616c  ldr         $s2, 0x616C($t3)
    ctx->pc = 0x3b2200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24940); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_3b2204:
    // 0x3b2204: 0x69616620  ldl         $at, 0x6620($t3)
    ctx->pc = 0x3b2204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_3b2208:
    // 0x3b2208: 0xa2e646c  j           func_8B991B0
label_3b220c:
    if (ctx->pc == 0x3B220Cu) {
        ctx->pc = 0x3B2210u;
        goto label_3b2210;
    }
    ctx->pc = 0x3B2208u;
    ctx->pc = 0x8B991B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8B991B0u, 0x3B2208u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B2210u;
label_3b2210:
    // 0x3b2210: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b2210u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b2214:
    // 0x3b2214: 0x69422020  ldl         $v0, 0x2020($t2)
    ctx->pc = 0x3b2214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3b2218:
    // 0x3b2218: 0x7052646e  .word       0x7052646E                   # INVALID     $v0, $s2, 0x646E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2218u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x3B2218 raw=0x7052646E");
label_3b221c:
    // 0x3b221c: 0x4a203a63  vmaddi.w    $vf9, $vf7, $I
    ctx->pc = 0x3b221cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_set1_ps(ctx->vu0_i)); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
label_3b2220:
    // 0x3b2220: 0x20747375  addi        $s4, $v1, 0x7375
    ctx->pc = 0x3b2220u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29557, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_3b2224:
    // 0x3b2224: 0x74696177  .word       0x74696177                   # INVALID     $v1, $t1, 0x6177 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b2224u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B2224 raw=0x74696177");
label_3b2228:
    // 0x3b2228: 0xa2e  .word       0x00000A2E                   # dsub        $at, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2228u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_3b222c:
    // 0x3b222c: 0x0  nop
    ctx->pc = 0x3b222cu;
    // NOP
label_3b2230:
    // 0x3b2230: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b2230u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b2234:
    // 0x3b2234: 0x72645320  .word       0x72645320                   # madd1       $t2, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2234u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b2238:
    // 0x3b2238: 0x74696e49  .word       0x74696E49                   # INVALID     $v1, $t1, 0x6E49 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b2238u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B2238 raw=0x74696E49");
label_3b223c:
    // 0x3b223c: 0x7245203a  .word       0x7245203A                   # INVALID     $s2, $a1, 0x203A # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b223cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x3A at 0x3B223C raw=0x7245203A");
label_3b2240:
    // 0x3b2240: 0x3a726f72  xori        $s2, $s3, 0x6F72
    ctx->pc = 0x3b2240u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28530);
label_3b2244:
    // 0x3b2244: 0x4e535420  .word       0x4E535420                   # INVALID     $s2, $s3, 0x5420 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b2244u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x3B2244 raw=0x4E535420");
label_3b2248:
    // 0x3b2248: 0x56524444  bnel        $s2, $s2, . + 4 + (0x4444 << 2)
label_3b224c:
    if (ctx->pc == 0x3B224Cu) {
        ctx->pc = 0x3B224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2248u;
        // 0x3b224c: 0x5645445f  bnel        $s2, $a1, . + 4 + (0x445F << 2) (Delay Slot)
        // Likely branch instruction at 0x3B224C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2250u;
        goto label_3b2250;
    }
    ctx->pc = 0x3B2248u;
    {
        const bool branch_taken_0x3b2248 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 18));
        if (branch_taken_0x3b2248) {
            ctx->pc = 0x3B224Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2248u;
            // 0x3b224c: 0x5645445f  bnel        $s2, $a1, . + 4 + (0x445F << 2) (Delay Slot)
            // Likely branch instruction at 0x3B224C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C335Cu;
            return;
        }
    }
    ctx->pc = 0x3B2250u;
label_3b2250:
    // 0x3b2250: 0x6373203a  daddi       $s3, $k1, 0x203A
    ctx->pc = 0x3b2250u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)8250; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_3b2254:
    // 0x3b2254: 0x66695365  daddiu      $t1, $s3, 0x5365
    ctx->pc = 0x3b2254u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)21349);
label_3b2258:
    // 0x3b2258: 0x646e6942  daddiu      $t6, $v1, 0x6942
    ctx->pc = 0x3b2258u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26946);
label_3b225c:
    // 0x3b225c: 0x20637052  addi        $v1, $v1, 0x7052
    ctx->pc = 0x3b225cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28754, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_3b2260:
    // 0x3b2260: 0x6c696166  ldr         $t1, 0x6166($v1)
    ctx->pc = 0x3b2260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24934); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_3b2264:
    // 0x3b2264: 0xa2e64  .word       0x000A2E64                   # and         $a1, $zero, $t2 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & GPR_U64(ctx, 10));
label_3b2268:
    // 0x3b2268: 0x0  nop
    ctx->pc = 0x3b2268u;
    // NOP
label_3b226c:
    // 0x3b226c: 0x0  nop
    ctx->pc = 0x3b226cu;
    // NOP
label_3b2270:
    // 0x3b2270: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b2270u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b2274:
    // 0x3b2274: 0x72645320  .word       0x72645320                   # madd1       $t2, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2274u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b2278:
    // 0x3b2278: 0x74696e49  .word       0x74696E49                   # INVALID     $v1, $t1, 0x6E49 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b2278u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B2278 raw=0x74696E49");
label_3b227c:
    // 0x3b227c: 0x7245203a  .word       0x7245203A                   # INVALID     $s2, $a1, 0x203A # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b227cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x3A at 0x3B227C raw=0x7245203A");
label_3b2280:
    // 0x3b2280: 0x3a726f72  xori        $s2, $s3, 0x6F72
    ctx->pc = 0x3b2280u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28530);
label_3b2284:
    // 0x3b2284: 0x4e535420  .word       0x4E535420                   # INVALID     $s2, $s3, 0x5420 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b2284u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x3B2284 raw=0x4E535420");
label_3b2288:
    // 0x3b2288: 0x54454744  bnel        $v0, $a1, . + 4 + (0x4744 << 2)
label_3b228c:
    if (ctx->pc == 0x3B228Cu) {
        ctx->pc = 0x3B228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2288u;
        // 0x3b228c: 0x5645445f  bnel        $s2, $a1, . + 4 + (0x445F << 2) (Delay Slot)
        // Likely branch instruction at 0x3B228C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2290u;
        goto label_3b2290;
    }
    ctx->pc = 0x3B2288u;
    {
        const bool branch_taken_0x3b2288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x3b2288) {
            ctx->pc = 0x3B228Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2288u;
            // 0x3b228c: 0x5645445f  bnel        $s2, $a1, . + 4 + (0x445F << 2) (Delay Slot)
            // Likely branch instruction at 0x3B228C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3F9Cu;
            return;
        }
    }
    ctx->pc = 0x3B2290u;
label_3b2290:
    // 0x3b2290: 0x6373203a  daddi       $s3, $k1, 0x203A
    ctx->pc = 0x3b2290u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)8250; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_3b2294:
    // 0x3b2294: 0x66695365  daddiu      $t1, $s3, 0x5365
    ctx->pc = 0x3b2294u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)21349);
label_3b2298:
    // 0x3b2298: 0x646e6942  daddiu      $t6, $v1, 0x6942
    ctx->pc = 0x3b2298u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26946);
label_3b229c:
    // 0x3b229c: 0x20637052  addi        $v1, $v1, 0x7052
    ctx->pc = 0x3b229cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28754, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_3b22a0:
    // 0x3b22a0: 0x6c696166  ldr         $t1, 0x6166($v1)
    ctx->pc = 0x3b22a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24934); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_3b22a4:
    // 0x3b22a4: 0xa2e64  .word       0x000A2E64                   # and         $a1, $zero, $t2 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b22a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & GPR_U64(ctx, 10));
label_3b22a8:
    // 0x3b22a8: 0x0  nop
    ctx->pc = 0x3b22a8u;
    // NOP
label_3b22ac:
    // 0x3b22ac: 0x0  nop
    ctx->pc = 0x3b22acu;
    // NOP
label_3b22b0:
    // 0x3b22b0: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b22b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b22b4:
    // 0x3b22b4: 0x72645320  .word       0x72645320                   # madd1       $t2, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b22b4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b22b8:
    // 0x3b22b8: 0x74696e49  .word       0x74696E49                   # INVALID     $v1, $t1, 0x6E49 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b22b8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B22B8 raw=0x74696E49");
label_3b22bc:
    // 0x3b22bc: 0x7245203a  .word       0x7245203A                   # INVALID     $s2, $a1, 0x203A # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b22bcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x3A at 0x3B22BC raw=0x7245203A");
label_3b22c0:
    // 0x3b22c0: 0x3a726f72  xori        $s2, $s3, 0x6F72
    ctx->pc = 0x3b22c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28530);
label_3b22c4:
    // 0x3b22c4: 0x496d5320  .word       0x496D5320                   # INVALID     $t3, $t5, 0x5320 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x3b22c4u;
    throw std::runtime_error("Unhandled COP2 format: 0xB at 0x3B22C4 raw=0x496D5320");
label_3b22c8:
    // 0x3b22c8: 0x65735f64  daddiu      $s3, $t3, 0x5F64
    ctx->pc = 0x3b22c8u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24420);
label_3b22cc:
    // 0x3b22cc: 0x6620646e  daddiu      $zero, $s1, 0x646E
    ctx->pc = 0x3b22ccu;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)25710);
label_3b22d0:
    // 0x3b22d0: 0x646c6961  daddiu      $t4, $v1, 0x6961
    ctx->pc = 0x3b22d0u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26977);
label_3b22d4:
    // 0x3b22d4: 0xa2e  .word       0x00000A2E                   # dsub        $at, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b22d4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_3b22d8:
    // 0x3b22d8: 0x0  nop
    ctx->pc = 0x3b22d8u;
    // NOP
label_3b22dc:
    // 0x3b22dc: 0x0  nop
    ctx->pc = 0x3b22dcu;
    // NOP
label_3b22e0:
    // 0x3b22e0: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b22e0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b22e4:
    // 0x3b22e4: 0x72645320  .word       0x72645320                   # madd1       $t2, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b22e4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b22e8:
    // 0x3b22e8: 0x74696e49  .word       0x74696E49                   # INVALID     $v1, $t1, 0x6E49 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b22e8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B22E8 raw=0x74696E49");
label_3b22ec:
    // 0x3b22ec: 0x7245203a  .word       0x7245203A                   # INVALID     $s2, $a1, 0x203A # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b22ecu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x3A at 0x3B22EC raw=0x7245203A");
label_3b22f0:
    // 0x3b22f0: 0x3a726f72  xori        $s2, $s3, 0x6F72
    ctx->pc = 0x3b22f0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28530);
label_3b22f4:
    // 0x3b22f4: 0x496d5320  .word       0x496D5320                   # INVALID     $t3, $t5, 0x5320 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x3b22f4u;
    throw std::runtime_error("Unhandled COP2 format: 0xB at 0x3B22F4 raw=0x496D5320");
label_3b22f8:
    // 0x3b22f8: 0x65675f64  daddiu      $a3, $t3, 0x5F64
    ctx->pc = 0x3b22f8u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24420);
label_3b22fc:
    // 0x3b22fc: 0x61662074  daddi       $a2, $t3, 0x2074
    ctx->pc = 0x3b22fcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8308; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
label_3b2300:
    // 0x3b2300: 0x2e646c69  sltiu       $a0, $s3, 0x6C69
    ctx->pc = 0x3b2300u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)27753) ? 1 : 0);
label_3b2304:
    // 0x3b2304: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x3b2304u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3b2308:
    // 0x3b2308: 0x0  nop
    ctx->pc = 0x3b2308u;
    // NOP
label_3b230c:
    // 0x3b230c: 0x0  nop
    ctx->pc = 0x3b230cu;
    // NOP
label_3b2310:
    // 0x3b2310: 0x6e6e6f43  ldr         $t6, 0x6F43($s3)
    ctx->pc = 0x3b2310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28483); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_3b2314:
    // 0x3b2314: 0x65746365  daddiu      $s4, $t3, 0x6365
    ctx->pc = 0x3b2314u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25445);
label_3b2318:
    // 0x3b2318: 0x6f742064  ldr         $s4, 0x2064($k1)
    ctx->pc = 0x3b2318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8292); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_3b231c:
    // 0x3b231c: 0x6d615420  ldr         $at, 0x5420($t3)
    ctx->pc = 0x3b231cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 21536); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_3b2320:
    // 0x3b2320: 0x74666f73  .word       0x74666F73                   # INVALID     $v1, $a2, 0x6F73 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b2320u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B2320 raw=0x74666F73");
label_3b2324:
    // 0x3b2324: 0x6e756f53  ldr         $s5, 0x6F53($s3)
    ctx->pc = 0x3b2324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28499); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_3b2328:
    // 0x3b2328: 0x69724464  ldl         $s2, 0x4464($t3)
    ctx->pc = 0x3b2328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 17508); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_3b232c:
    // 0x3b232c: 0x3a726576  xori        $s2, $s3, 0x6576
    ctx->pc = 0x3b232cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)25974);
label_3b2330:
    // 0x3b2330: 0x72655620  .word       0x72655620                   # madd1       $t2, $s3, $a1 # 00000600 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2330u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b2334:
    // 0x3b2334: 0x6e6f6973  ldr         $t7, 0x6973($s3)
    ctx->pc = 0x3b2334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26995); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_3b2338:
    // 0x3b2338: 0x2e642520  sltiu       $a0, $s3, 0x2520
    ctx->pc = 0x3b2338u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9504) ? 1 : 0);
label_3b233c:
    // 0x3b233c: 0x28206425  slti        $zero, $at, 0x6425
    ctx->pc = 0x3b233cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)25637) ? 1 : 0);
label_3b2340:
    // 0x3b2340: 0x61542943  daddi       $s4, $t2, 0x2943
    ctx->pc = 0x3b2340u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)10563; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_3b2344:
    // 0x3b2344: 0x666f736d  daddiu      $t7, $s3, 0x736D
    ctx->pc = 0x3b2344u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)29549);
label_3b2348:
    // 0x3b2348: 0xa74  teq         $zero, $zero, 41
    ctx->pc = 0x3b2348u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3b234c:
    // 0x3b234c: 0x0  nop
    ctx->pc = 0x3b234cu;
    // NOP
label_3b2350:
    // 0x3b2350: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b2350u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b2354:
    // 0x3b2354: 0x72645320  .word       0x72645320                   # madd1       $t2, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2354u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b2358:
    // 0x3b2358: 0x65526553  daddiu      $s2, $t2, 0x6553
    ctx->pc = 0x3b2358u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)25939);
label_3b235c:
    // 0x3b235c: 0x57203a71  bnel        $t9, $zero, . + 4 + (0x3A71 << 2)
label_3b2360:
    if (ctx->pc == 0x3B2360u) {
        ctx->pc = 0x3B2360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B235Cu;
        // 0x3b2360: 0x696e7261  ldl         $t6, 0x7261($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2364u;
        goto label_3b2364;
    }
    ctx->pc = 0x3B235Cu;
    {
        const bool branch_taken_0x3b235c = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b235c) {
            ctx->pc = 0x3B2360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B235Cu;
            // 0x3b2360: 0x696e7261  ldl         $t6, 0x7261($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C0D24u;
            return;
        }
    }
    ctx->pc = 0x3B2364u;
label_3b2364:
    // 0x3b2364: 0x203a676e  addi        $k0, $at, 0x676E
    ctx->pc = 0x3b2364u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)26478, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_3b2368:
    // 0x3b2368: 0x71646e73  .word       0x71646E73                   # INVALID     $t3, $a0, 0x6E73 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2368u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x3B2368 raw=0x71646E73");
label_3b236c:
    // 0x3b236c: 0x6f206575  ldr         $zero, 0x6575($t9)
    ctx->pc = 0x3b236cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 25973); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_3b2370:
    // 0x3b2370: 0x66726576  daddiu      $s2, $s3, 0x6576
    ctx->pc = 0x3b2370u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)25974);
label_3b2374:
    // 0x3b2374: 0x21776f6c  addi        $s7, $t3, 0x6F6C
    ctx->pc = 0x3b2374u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)28524, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_3b2378:
    // 0x3b2378: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x3b2378u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3b237c:
    // 0x3b237c: 0x0  nop
    ctx->pc = 0x3b237cu;
    // NOP
label_3b2380:
    // 0x3b2380: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b2380u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b2384:
    // 0x3b2384: 0x72645320  .word       0x72645320                   # madd1       $t2, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2384u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b2388:
    // 0x3b2388: 0x68436553  ldl         $v1, 0x6553($v0)
    ctx->pc = 0x3b2388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 25939); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3b238c:
    // 0x3b238c: 0x57203a67  bnel        $t9, $zero, . + 4 + (0x3A67 << 2)
label_3b2390:
    if (ctx->pc == 0x3B2390u) {
        ctx->pc = 0x3B2390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B238Cu;
        // 0x3b2390: 0x696e7261  ldl         $t6, 0x7261($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2394u;
        goto label_3b2394;
    }
    ctx->pc = 0x3B238Cu;
    {
        const bool branch_taken_0x3b238c = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b238c) {
            ctx->pc = 0x3B2390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B238Cu;
            // 0x3b2390: 0x696e7261  ldl         $t6, 0x7261($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C0D2Cu;
            return;
        }
    }
    ctx->pc = 0x3B2394u;
label_3b2394:
    // 0x3b2394: 0x203a676e  addi        $k0, $at, 0x676E
    ctx->pc = 0x3b2394u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)26478, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_3b2398:
    // 0x3b2398: 0x71646e73  .word       0x71646E73                   # INVALID     $t3, $a0, 0x6E73 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2398u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x3B2398 raw=0x71646E73");
label_3b239c:
    // 0x3b239c: 0x6f206575  ldr         $zero, 0x6575($t9)
    ctx->pc = 0x3b239cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 25973); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_3b23a0:
    // 0x3b23a0: 0x66726576  daddiu      $s2, $s3, 0x6576
    ctx->pc = 0x3b23a0u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)25974);
label_3b23a4:
    // 0x3b23a4: 0x21776f6c  addi        $s7, $t3, 0x6F6C
    ctx->pc = 0x3b23a4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)28524, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_3b23a8:
    // 0x3b23a8: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x3b23a8u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3b23ac:
    // 0x3b23ac: 0x0  nop
    ctx->pc = 0x3b23acu;
    // NOP
label_3b23b0:
    // 0x3b23b0: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b23b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b23b4:
    // 0x3b23b4: 0x72645320  .word       0x72645320                   # madd1       $t2, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b23b4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b23b8:
    // 0x3b23b8: 0x6c416553  ldr         $at, 0x6553($v0)
    ctx->pc = 0x3b23b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 25939); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_3b23bc:
    // 0x3b23bc: 0x6f74536c  ldr         $s4, 0x536C($k1)
    ctx->pc = 0x3b23bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 21356); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_3b23c0:
    // 0x3b23c0: 0x57203a70  bnel        $t9, $zero, . + 4 + (0x3A70 << 2)
label_3b23c4:
    if (ctx->pc == 0x3B23C4u) {
        ctx->pc = 0x3B23C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B23C0u;
        // 0x3b23c4: 0x696e7261  ldl         $t6, 0x7261($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B23C8u;
        goto label_3b23c8;
    }
    ctx->pc = 0x3B23C0u;
    {
        const bool branch_taken_0x3b23c0 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b23c0) {
            ctx->pc = 0x3B23C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B23C0u;
            // 0x3b23c4: 0x696e7261  ldl         $t6, 0x7261($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C0D84u;
            return;
        }
    }
    ctx->pc = 0x3B23C8u;
label_3b23c8:
    // 0x3b23c8: 0x203a676e  addi        $k0, $at, 0x676E
    ctx->pc = 0x3b23c8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)26478, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_3b23cc:
    // 0x3b23cc: 0x71646e73  .word       0x71646E73                   # INVALID     $t3, $a0, 0x6E73 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b23ccu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x3B23CC raw=0x71646E73");
label_3b23d0:
    // 0x3b23d0: 0x6f206575  ldr         $zero, 0x6575($t9)
    ctx->pc = 0x3b23d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 25973); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_3b23d4:
    // 0x3b23d4: 0x66726576  daddiu      $s2, $s3, 0x6576
    ctx->pc = 0x3b23d4u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)25974);
label_3b23d8:
    // 0x3b23d8: 0x21776f6c  addi        $s7, $t3, 0x6F6C
    ctx->pc = 0x3b23d8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)28524, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_3b23dc:
    // 0x3b23dc: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x3b23dcu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3b23e0:
    // 0x3b23e0: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b23e0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b23e4:
    // 0x3b23e4: 0x72645320  .word       0x72645320                   # madd1       $t2, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b23e4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b23e8:
    // 0x3b23e8: 0x614d6553  daddi       $t5, $t2, 0x6553
    ctx->pc = 0x3b23e8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)25939; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_3b23ec:
    // 0x3b23ec: 0x72657473  .word       0x72657473                   # INVALID     $s3, $a1, 0x7473 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b23ecu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x3B23EC raw=0x72657473");
label_3b23f0:
    // 0x3b23f0: 0x3a6c6f56  xori        $t4, $s3, 0x6F56
    ctx->pc = 0x3b23f0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28502);
label_3b23f4:
    // 0x3b23f4: 0x72615720  .word       0x72615720                   # madd1       $t2, $s3, $at # 00000700 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b23f4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b23f8:
    // 0x3b23f8: 0x676e696e  daddiu      $t6, $k1, 0x696E
    ctx->pc = 0x3b23f8u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26990);
label_3b23fc:
    // 0x3b23fc: 0x6e73203a  ldr         $s3, 0x203A($s3)
    ctx->pc = 0x3b23fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8250); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
label_3b2400:
    // 0x3b2400: 0x65757164  daddiu      $s5, $t3, 0x7164
    ctx->pc = 0x3b2400u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29028);
label_3b2404:
    // 0x3b2404: 0x65766f20  daddiu      $s6, $t3, 0x6F20
    ctx->pc = 0x3b2404u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28448);
label_3b2408:
    // 0x3b2408: 0x6f6c6672  ldr         $t4, 0x6672($k1)
    ctx->pc = 0x3b2408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26226); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_3b240c:
    // 0x3b240c: 0xa2177  .word       0x000A2177                   # INVALID     $zero, $t2, 0x2177 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b240cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x3B240C raw=0x000A2177");
label_3b2410:
    // 0x3b2410: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b2410u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b2414:
    // 0x3b2414: 0x72645320  .word       0x72645320                   # madd1       $t2, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2414u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b2418:
    // 0x3b2418: 0x4d6d6742  .word       0x4D6D6742                   # INVALID     $t3, $t5, 0x6742 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b2418u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x3B2418 raw=0x4D6D6742");
label_3b241c:
    // 0x3b241c: 0x65747361  daddiu      $s4, $t3, 0x7361
    ctx->pc = 0x3b241cu;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29537);
label_3b2420:
    // 0x3b2420: 0x6c6f5672  ldr         $t7, 0x5672($v1)
    ctx->pc = 0x3b2420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 22130); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_3b2424:
    // 0x3b2424: 0x6157203a  daddi       $s7, $t2, 0x203A
    ctx->pc = 0x3b2424u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8250; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, res); }
label_3b2428:
    // 0x3b2428: 0x6e696e72  ldr         $t1, 0x6E72($s3)
    ctx->pc = 0x3b2428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28274); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_3b242c:
    // 0x3b242c: 0x73203a67  .word       0x73203A67                   # INVALID     $t9, $zero, 0x3A67 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b242cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x27 at 0x3B242C raw=0x73203A67");
label_3b2430:
    // 0x3b2430: 0x7571646e  .word       0x7571646E                   # INVALID     $t3, $s1, 0x646E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b2430u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B2430 raw=0x7571646E");
label_3b2434:
    // 0x3b2434: 0x766f2065  .word       0x766F2065                   # INVALID     $s3, $t7, 0x2065 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b2434u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B2434 raw=0x766F2065");
label_3b2438:
    // 0x3b2438: 0x6c667265  ldr         $a2, 0x7265($v1)
    ctx->pc = 0x3b2438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3b243c:
    // 0x3b243c: 0xa21776f  j           func_885DDBC
label_3b2440:
    if (ctx->pc == 0x3B2440u) {
        ctx->pc = 0x3B2444u;
        goto label_3b2444;
    }
    ctx->pc = 0x3B243Cu;
    ctx->pc = 0x885DDBCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x885DDBCu, 0x3B243Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B2444u;
label_3b2444:
    // 0x3b2444: 0x0  nop
    ctx->pc = 0x3b2444u;
    // NOP
label_3b2448:
    // 0x3b2448: 0x0  nop
    ctx->pc = 0x3b2448u;
    // NOP
label_3b244c:
    // 0x3b244c: 0x0  nop
    ctx->pc = 0x3b244cu;
    // NOP
label_3b2450:
    // 0x3b2450: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b2450u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b2454:
    // 0x3b2454: 0x72645320  .word       0x72645320                   # madd1       $t2, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2454u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b2458:
    // 0x3b2458: 0x4d676158  .word       0x4D676158                   # INVALID     $t3, $a3, 0x6158 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b2458u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x3B2458 raw=0x4D676158");
label_3b245c:
    // 0x3b245c: 0x65747361  daddiu      $s4, $t3, 0x7361
    ctx->pc = 0x3b245cu;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29537);
label_3b2460:
    // 0x3b2460: 0x6c6f5672  ldr         $t7, 0x5672($v1)
    ctx->pc = 0x3b2460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 22130); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_3b2464:
    // 0x3b2464: 0x6157203a  daddi       $s7, $t2, 0x203A
    ctx->pc = 0x3b2464u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8250; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, res); }
label_3b2468:
    // 0x3b2468: 0x6e696e72  ldr         $t1, 0x6E72($s3)
    ctx->pc = 0x3b2468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28274); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_3b246c:
    // 0x3b246c: 0x73203a67  .word       0x73203A67                   # INVALID     $t9, $zero, 0x3A67 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b246cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x27 at 0x3B246C raw=0x73203A67");
label_3b2470:
    // 0x3b2470: 0x7571646e  .word       0x7571646E                   # INVALID     $t3, $s1, 0x646E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b2470u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B2470 raw=0x7571646E");
label_3b2474:
    // 0x3b2474: 0x766f2065  .word       0x766F2065                   # INVALID     $s3, $t7, 0x2065 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b2474u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B2474 raw=0x766F2065");
label_3b2478:
    // 0x3b2478: 0x6c667265  ldr         $a2, 0x7265($v1)
    ctx->pc = 0x3b2478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3b247c:
    // 0x3b247c: 0xa21776f  j           func_885DDBC
label_3b2480:
    if (ctx->pc == 0x3B2480u) {
        ctx->pc = 0x3B2484u;
        goto label_3b2484;
    }
    ctx->pc = 0x3B247Cu;
    ctx->pc = 0x885DDBCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x885DDBCu, 0x3B247Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B2484u;
label_3b2484:
    // 0x3b2484: 0x0  nop
    ctx->pc = 0x3b2484u;
    // NOP
label_3b2488:
    // 0x3b2488: 0x0  nop
    ctx->pc = 0x3b2488u;
    // NOP
label_3b248c:
    // 0x3b248c: 0x0  nop
    ctx->pc = 0x3b248cu;
    // NOP
label_3b2490:
    // 0x3b2490: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b2490u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b2494:
    // 0x3b2494: 0x72645320  .word       0x72645320                   # madd1       $t2, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2494u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b2498:
    // 0x3b2498: 0x526d6742  beql        $s3, $t5, . + 4 + (0x6742 << 2)
label_3b249c:
    if (ctx->pc == 0x3B249Cu) {
        ctx->pc = 0x3B249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2498u;
        // 0x3b249c: 0x203a7165  addi        $k0, $at, 0x7165 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)29029, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B24A0u;
        goto label_3b24a0;
    }
    ctx->pc = 0x3B2498u;
    {
        const bool branch_taken_0x3b2498 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 13));
        if (branch_taken_0x3b2498) {
            ctx->pc = 0x3B249Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2498u;
            // 0x3b249c: 0x203a7165  addi        $k0, $at, 0x7165 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)29029, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CC1A4u;
            return;
        }
    }
    ctx->pc = 0x3B24A0u;
label_3b24a0:
    // 0x3b24a0: 0x6e726157  ldr         $s2, 0x6157($s3)
    ctx->pc = 0x3b24a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24919); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_3b24a4:
    // 0x3b24a4: 0x3a676e69  xori        $a3, $s3, 0x6E69
    ctx->pc = 0x3b24a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28265);
label_3b24a8:
    // 0x3b24a8: 0x646e7320  daddiu      $t6, $v1, 0x7320
    ctx->pc = 0x3b24a8u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29472);
label_3b24ac:
    // 0x3b24ac: 0x20657571  addi        $a1, $v1, 0x7571
    ctx->pc = 0x3b24acu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30065, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_3b24b0:
    // 0x3b24b0: 0x7265766f  .word       0x7265766F                   # INVALID     $s3, $a1, 0x766F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b24b0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x3B24B0 raw=0x7265766F");
label_3b24b4:
    // 0x3b24b4: 0x776f6c66  .word       0x776F6C66                   # INVALID     $k1, $t7, 0x6C66 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b24b4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B24B4 raw=0x776F6C66");
label_3b24b8:
    // 0x3b24b8: 0xa21  .word       0x00000A21                   # addu        $at, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b24b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_3b24bc:
    // 0x3b24bc: 0x0  nop
    ctx->pc = 0x3b24bcu;
    // NOP
label_3b24c0:
    // 0x3b24c0: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b24c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b24c4:
    // 0x3b24c4: 0x72645320  .word       0x72645320                   # madd1       $t2, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b24c4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b24c8:
    // 0x3b24c8: 0x536d6742  beql        $k1, $t5, . + 4 + (0x6742 << 2)
label_3b24cc:
    if (ctx->pc == 0x3B24CCu) {
        ctx->pc = 0x3B24CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B24C8u;
        // 0x3b24cc: 0x3a706f74  xori        $s0, $s3, 0x6F74 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28532);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B24D0u;
        goto label_3b24d0;
    }
    ctx->pc = 0x3B24C8u;
    {
        const bool branch_taken_0x3b24c8 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 13));
        if (branch_taken_0x3b24c8) {
            ctx->pc = 0x3B24CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B24C8u;
            // 0x3b24cc: 0x3a706f74  xori        $s0, $s3, 0x6F74 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28532);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CC1D4u;
            return;
        }
    }
    ctx->pc = 0x3B24D0u;
label_3b24d0:
    // 0x3b24d0: 0x72615720  .word       0x72615720                   # madd1       $t2, $s3, $at # 00000700 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b24d0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b24d4:
    // 0x3b24d4: 0x676e696e  daddiu      $t6, $k1, 0x696E
    ctx->pc = 0x3b24d4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26990);
label_3b24d8:
    // 0x3b24d8: 0x6e73203a  ldr         $s3, 0x203A($s3)
    ctx->pc = 0x3b24d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8250); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
label_3b24dc:
    // 0x3b24dc: 0x65757164  daddiu      $s5, $t3, 0x7164
    ctx->pc = 0x3b24dcu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29028);
label_3b24e0:
    // 0x3b24e0: 0x65766f20  daddiu      $s6, $t3, 0x6F20
    ctx->pc = 0x3b24e0u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28448);
label_3b24e4:
    // 0x3b24e4: 0x6f6c6672  ldr         $t4, 0x6672($k1)
    ctx->pc = 0x3b24e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26226); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_3b24e8:
    // 0x3b24e8: 0xa2177  .word       0x000A2177                   # INVALID     $zero, $t2, 0x2177 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b24e8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x3B24E8 raw=0x000A2177");
label_3b24ec:
    // 0x3b24ec: 0x0  nop
    ctx->pc = 0x3b24ecu;
    // NOP
label_3b24f0:
    // 0x3b24f0: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b24f0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b24f4:
    // 0x3b24f4: 0x72645320  .word       0x72645320                   # madd1       $t2, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b24f4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b24f8:
    // 0x3b24f8: 0x566d6742  bnel        $s3, $t5, . + 4 + (0x6742 << 2)
label_3b24fc:
    if (ctx->pc == 0x3B24FCu) {
        ctx->pc = 0x3B24FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B24F8u;
        // 0x3b24fc: 0x203a6c6f  addi        $k0, $at, 0x6C6F (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)27759, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2500u;
        goto label_3b2500;
    }
    ctx->pc = 0x3B24F8u;
    {
        const bool branch_taken_0x3b24f8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 13));
        if (branch_taken_0x3b24f8) {
            ctx->pc = 0x3B24FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B24F8u;
            // 0x3b24fc: 0x203a6c6f  addi        $k0, $at, 0x6C6F (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)27759, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CC204u;
            return;
        }
    }
    ctx->pc = 0x3B2500u;
label_3b2500:
    // 0x3b2500: 0x6e726157  ldr         $s2, 0x6157($s3)
    ctx->pc = 0x3b2500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24919); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_3b2504:
    // 0x3b2504: 0x3a676e69  xori        $a3, $s3, 0x6E69
    ctx->pc = 0x3b2504u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28265);
label_3b2508:
    // 0x3b2508: 0x646e7320  daddiu      $t6, $v1, 0x7320
    ctx->pc = 0x3b2508u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29472);
label_3b250c:
    // 0x3b250c: 0x20657571  addi        $a1, $v1, 0x7571
    ctx->pc = 0x3b250cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30065, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_3b2510:
    // 0x3b2510: 0x7265766f  .word       0x7265766F                   # INVALID     $s3, $a1, 0x766F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2510u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x3B2510 raw=0x7265766F");
label_3b2514:
    // 0x3b2514: 0x776f6c66  .word       0x776F6C66                   # INVALID     $k1, $t7, 0x6C66 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b2514u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B2514 raw=0x776F6C66");
label_3b2518:
    // 0x3b2518: 0xa21  .word       0x00000A21                   # addu        $at, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2518u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_3b251c:
    // 0x3b251c: 0x0  nop
    ctx->pc = 0x3b251cu;
    // NOP
label_3b2520:
    // 0x3b2520: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b2520u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b2524:
    // 0x3b2524: 0x72645320  .word       0x72645320                   # madd1       $t2, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2524u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b2528:
    // 0x3b2528: 0x53676158  beql        $k1, $a3, . + 4 + (0x6158 << 2)
label_3b252c:
    if (ctx->pc == 0x3B252Cu) {
        ctx->pc = 0x3B252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2528u;
        // 0x3b252c: 0x646e6174  daddiu      $t6, $v1, 0x6174 (Delay Slot)
        SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)24948);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2530u;
        goto label_3b2530;
    }
    ctx->pc = 0x3B2528u;
    {
        const bool branch_taken_0x3b2528 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x3b2528) {
            ctx->pc = 0x3B252Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2528u;
            // 0x3b252c: 0x646e6174  daddiu      $t6, $v1, 0x6174 (Delay Slot)
            SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)24948);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CAA8Cu;
            return;
        }
    }
    ctx->pc = 0x3B2530u;
label_3b2530:
    // 0x3b2530: 0x3a327962  xori        $s2, $s1, 0x7962
    ctx->pc = 0x3b2530u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)31074);
label_3b2534:
    // 0x3b2534: 0x72724520  .word       0x72724520                   # madd1       $t0, $s3, $s2 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2534u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_3b2538:
    // 0x3b2538: 0x203a726f  addi        $k0, $at, 0x726F
    ctx->pc = 0x3b2538u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)29295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_3b253c:
    // 0x3b253c: 0x5f6c6274  .word       0x5F6C6274                   # bgtzl       $k1, . + 4 + (0x6274 << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_3b2540:
    if (ctx->pc == 0x3B2540u) {
        ctx->pc = 0x3B2540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B253Cu;
        // 0x3b2540: 0x20786469  addi        $t8, $v1, 0x6469 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25705, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2544u;
        goto label_3b2544;
    }
    ctx->pc = 0x3B253Cu;
    {
        const bool branch_taken_0x3b253c = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x3b253c) {
            ctx->pc = 0x3B2540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B253Cu;
            // 0x3b2540: 0x20786469  addi        $t8, $v1, 0x6469 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25705, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CAF10u;
            return;
        }
    }
    ctx->pc = 0x3B2544u;
label_3b2544:
    // 0x3b2544: 0x7265766f  .word       0x7265766F                   # INVALID     $s3, $a1, 0x766F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2544u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x3B2544 raw=0x7265766F");
label_3b2548:
    // 0x3b2548: 0xa2e  .word       0x00000A2E                   # dsub        $at, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2548u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_3b254c:
    // 0x3b254c: 0x0  nop
    ctx->pc = 0x3b254cu;
    // NOP
label_3b2550:
    // 0x3b2550: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b2550u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b2554:
    // 0x3b2554: 0x72645320  .word       0x72645320                   # madd1       $t2, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2554u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b2558:
    // 0x3b2558: 0x53676158  beql        $k1, $a3, . + 4 + (0x6158 << 2)
label_3b255c:
    if (ctx->pc == 0x3B255Cu) {
        ctx->pc = 0x3B255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2558u;
        // 0x3b255c: 0x646e6174  daddiu      $t6, $v1, 0x6174 (Delay Slot)
        SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)24948);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2560u;
        goto label_3b2560;
    }
    ctx->pc = 0x3B2558u;
    {
        const bool branch_taken_0x3b2558 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x3b2558) {
            ctx->pc = 0x3B255Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2558u;
            // 0x3b255c: 0x646e6174  daddiu      $t6, $v1, 0x6174 (Delay Slot)
            SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)24948);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CAABCu;
            return;
        }
    }
    ctx->pc = 0x3B2560u;
label_3b2560:
    // 0x3b2560: 0x3a327962  xori        $s2, $s1, 0x7962
    ctx->pc = 0x3b2560u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)31074);
label_3b2564:
    // 0x3b2564: 0x72615720  .word       0x72615720                   # madd1       $t2, $s3, $at # 00000700 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2564u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b2568:
    // 0x3b2568: 0x676e696e  daddiu      $t6, $k1, 0x696E
    ctx->pc = 0x3b2568u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26990);
label_3b256c:
    // 0x3b256c: 0x6e73203a  ldr         $s3, 0x203A($s3)
    ctx->pc = 0x3b256cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8250); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
label_3b2570:
    // 0x3b2570: 0x65757164  daddiu      $s5, $t3, 0x7164
    ctx->pc = 0x3b2570u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29028);
label_3b2574:
    // 0x3b2574: 0x65766f20  daddiu      $s6, $t3, 0x6F20
    ctx->pc = 0x3b2574u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28448);
label_3b2578:
    // 0x3b2578: 0x6f6c6672  ldr         $t4, 0x6672($k1)
    ctx->pc = 0x3b2578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26226); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_3b257c:
    // 0x3b257c: 0xa2177  .word       0x000A2177                   # INVALID     $zero, $t2, 0x2177 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b257cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x3B257C raw=0x000A2177");
label_3b2580:
    // 0x3b2580: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b2580u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b2584:
    // 0x3b2584: 0x72645320  .word       0x72645320                   # madd1       $t2, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2584u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b2588:
    // 0x3b2588: 0x44676158  .word       0x44676158                   # INVALID     $v1, $a3, 0x6158 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3b2588u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x18 at 0x3B2588 raw=0x44676158");
label_3b258c:
    // 0x3b258c: 0x75616665  .word       0x75616665                   # INVALID     $t3, $at, 0x6665 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b258cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B258C raw=0x75616665");
label_3b2590:
    // 0x3b2590: 0x203a746c  addi        $k0, $at, 0x746C
    ctx->pc = 0x3b2590u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)29804, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_3b2594:
    // 0x3b2594: 0x6e726157  ldr         $s2, 0x6157($s3)
    ctx->pc = 0x3b2594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24919); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_3b2598:
    // 0x3b2598: 0x3a676e69  xori        $a3, $s3, 0x6E69
    ctx->pc = 0x3b2598u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28265);
label_3b259c:
    // 0x3b259c: 0x646e7320  daddiu      $t6, $v1, 0x7320
    ctx->pc = 0x3b259cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29472);
label_3b25a0:
    // 0x3b25a0: 0x20657571  addi        $a1, $v1, 0x7571
    ctx->pc = 0x3b25a0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30065, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_3b25a4:
    // 0x3b25a4: 0x7265766f  .word       0x7265766F                   # INVALID     $s3, $a1, 0x766F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b25a4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x3B25A4 raw=0x7265766F");
label_3b25a8:
    // 0x3b25a8: 0x776f6c66  .word       0x776F6C66                   # INVALID     $k1, $t7, 0x6C66 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b25a8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B25A8 raw=0x776F6C66");
label_3b25ac:
    // 0x3b25ac: 0xa21  .word       0x00000A21                   # addu        $at, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b25acu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_3b25b0:
    // 0x3b25b0: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b25b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b25b4:
    // 0x3b25b4: 0x72645320  .word       0x72645320                   # madd1       $t2, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b25b4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b25b8:
    // 0x3b25b8: 0x53676158  beql        $k1, $a3, . + 4 + (0x6158 << 2)
label_3b25bc:
    if (ctx->pc == 0x3B25BCu) {
        ctx->pc = 0x3B25BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B25B8u;
        // 0x3b25bc: 0x6b537465  ldl         $s3, 0x7465($k0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 26), 29797); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B25C0u;
        goto label_3b25c0;
    }
    ctx->pc = 0x3B25B8u;
    {
        const bool branch_taken_0x3b25b8 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x3b25b8) {
            ctx->pc = 0x3B25BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B25B8u;
            // 0x3b25bc: 0x6b537465  ldl         $s3, 0x7465($k0) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 26), 29797); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CAB1Cu;
            return;
        }
    }
    ctx->pc = 0x3B25C0u;
label_3b25c0:
    // 0x3b25c0: 0x3a327069  xori        $s2, $s1, 0x7069
    ctx->pc = 0x3b25c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)28777);
label_3b25c4:
    // 0x3b25c4: 0x72615720  .word       0x72615720                   # madd1       $t2, $s3, $at # 00000700 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b25c4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b25c8:
    // 0x3b25c8: 0x676e696e  daddiu      $t6, $k1, 0x696E
    ctx->pc = 0x3b25c8u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26990);
label_3b25cc:
    // 0x3b25cc: 0x6e73203a  ldr         $s3, 0x203A($s3)
    ctx->pc = 0x3b25ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8250); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
label_3b25d0:
    // 0x3b25d0: 0x65757164  daddiu      $s5, $t3, 0x7164
    ctx->pc = 0x3b25d0u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29028);
label_3b25d4:
    // 0x3b25d4: 0x65766f20  daddiu      $s6, $t3, 0x6F20
    ctx->pc = 0x3b25d4u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28448);
label_3b25d8:
    // 0x3b25d8: 0x6f6c6672  ldr         $t4, 0x6672($k1)
    ctx->pc = 0x3b25d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26226); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_3b25dc:
    // 0x3b25dc: 0xa2177  .word       0x000A2177                   # INVALID     $zero, $t2, 0x2177 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b25dcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x3B25DC raw=0x000A2177");
label_3b25e0:
    // 0x3b25e0: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b25e0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b25e4:
    // 0x3b25e4: 0x72645320  .word       0x72645320                   # madd1       $t2, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b25e4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b25e8:
    // 0x3b25e8: 0x53676158  beql        $k1, $a3, . + 4 + (0x6158 << 2)
label_3b25ec:
    if (ctx->pc == 0x3B25ECu) {
        ctx->pc = 0x3B25ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B25E8u;
        // 0x3b25ec: 0x74726174  .word       0x74726174                   # INVALID     $v1, $s2, 0x6174 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B25EC raw=0x74726174");
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B25F0u;
        goto label_3b25f0;
    }
    ctx->pc = 0x3B25E8u;
    {
        const bool branch_taken_0x3b25e8 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x3b25e8) {
            ctx->pc = 0x3B25ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B25E8u;
            // 0x3b25ec: 0x74726174  .word       0x74726174                   # INVALID     $v1, $s2, 0x6174 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B25EC raw=0x74726174");
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CAB4Cu;
            return;
        }
    }
    ctx->pc = 0x3B25F0u;
label_3b25f0:
    // 0x3b25f0: 0x6157203a  daddi       $s7, $t2, 0x203A
    ctx->pc = 0x3b25f0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8250; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, res); }
label_3b25f4:
    // 0x3b25f4: 0x6e696e72  ldr         $t1, 0x6E72($s3)
    ctx->pc = 0x3b25f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28274); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_3b25f8:
    // 0x3b25f8: 0x73203a67  .word       0x73203A67                   # INVALID     $t9, $zero, 0x3A67 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b25f8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x27 at 0x3B25F8 raw=0x73203A67");
label_3b25fc:
    // 0x3b25fc: 0x7571646e  .word       0x7571646E                   # INVALID     $t3, $s1, 0x646E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b25fcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B25FC raw=0x7571646E");
label_3b2600:
    // 0x3b2600: 0x766f2065  .word       0x766F2065                   # INVALID     $s3, $t7, 0x2065 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b2600u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B2600 raw=0x766F2065");
label_3b2604:
    // 0x3b2604: 0x6c667265  ldr         $a2, 0x7265($v1)
    ctx->pc = 0x3b2604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3b2608:
    // 0x3b2608: 0xa21776f  j           func_885DDBC
label_3b260c:
    if (ctx->pc == 0x3B260Cu) {
        ctx->pc = 0x3B2610u;
        goto label_3b2610;
    }
    ctx->pc = 0x3B2608u;
    ctx->pc = 0x885DDBCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x885DDBCu, 0x3B2608u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B2610u;
label_3b2610:
    // 0x3b2610: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b2610u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b2614:
    // 0x3b2614: 0x72645320  .word       0x72645320                   # madd1       $t2, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2614u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b2618:
    // 0x3b2618: 0x46676158  .word       0x46676158                   # INVALID     $s3, $a3, 0x6158 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3b2618u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0x18 at 0x3B2618 raw=0x46676158");
label_3b261c:
    // 0x3b261c: 0x6f656461  ldr         $a1, 0x6461($k1)
    ctx->pc = 0x3b261cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25697); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_3b2620:
    // 0x3b2620: 0x203a7475  addi        $k0, $at, 0x7475
    ctx->pc = 0x3b2620u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)29813, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_3b2624:
    // 0x3b2624: 0x6e726157  ldr         $s2, 0x6157($s3)
    ctx->pc = 0x3b2624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24919); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_3b2628:
    // 0x3b2628: 0x3a676e69  xori        $a3, $s3, 0x6E69
    ctx->pc = 0x3b2628u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28265);
label_3b262c:
    // 0x3b262c: 0x646e7320  daddiu      $t6, $v1, 0x7320
    ctx->pc = 0x3b262cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29472);
label_3b2630:
    // 0x3b2630: 0x20657571  addi        $a1, $v1, 0x7571
    ctx->pc = 0x3b2630u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30065, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_3b2634:
    // 0x3b2634: 0x7265766f  .word       0x7265766F                   # INVALID     $s3, $a1, 0x766F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2634u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x3B2634 raw=0x7265766F");
label_3b2638:
    // 0x3b2638: 0x776f6c66  .word       0x776F6C66                   # INVALID     $k1, $t7, 0x6C66 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b2638u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B2638 raw=0x776F6C66");
label_3b263c:
    // 0x3b263c: 0xa21  .word       0x00000A21                   # addu        $at, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b263cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_3b2640:
    // 0x3b2640: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b2640u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b2644:
    // 0x3b2644: 0x72645320  .word       0x72645320                   # madd1       $t2, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2644u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b2648:
    // 0x3b2648: 0x53676158  beql        $k1, $a3, . + 4 + (0x6158 << 2)
label_3b264c:
    if (ctx->pc == 0x3B264Cu) {
        ctx->pc = 0x3B264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2648u;
        // 0x3b264c: 0x3a706f74  xori        $s0, $s3, 0x6F74 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28532);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2650u;
        goto label_3b2650;
    }
    ctx->pc = 0x3B2648u;
    {
        const bool branch_taken_0x3b2648 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x3b2648) {
            ctx->pc = 0x3B264Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2648u;
            // 0x3b264c: 0x3a706f74  xori        $s0, $s3, 0x6F74 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28532);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CABACu;
            return;
        }
    }
    ctx->pc = 0x3B2650u;
label_3b2650:
    // 0x3b2650: 0x72615720  .word       0x72615720                   # madd1       $t2, $s3, $at # 00000700 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2650u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b2654:
    // 0x3b2654: 0x676e696e  daddiu      $t6, $k1, 0x696E
    ctx->pc = 0x3b2654u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26990);
label_3b2658:
    // 0x3b2658: 0x6e73203a  ldr         $s3, 0x203A($s3)
    ctx->pc = 0x3b2658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8250); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
label_3b265c:
    // 0x3b265c: 0x65757164  daddiu      $s5, $t3, 0x7164
    ctx->pc = 0x3b265cu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29028);
label_3b2660:
    // 0x3b2660: 0x65766f20  daddiu      $s6, $t3, 0x6F20
    ctx->pc = 0x3b2660u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28448);
label_3b2664:
    // 0x3b2664: 0x6f6c6672  ldr         $t4, 0x6672($k1)
    ctx->pc = 0x3b2664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26226); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_3b2668:
    // 0x3b2668: 0xa2177  .word       0x000A2177                   # INVALID     $zero, $t2, 0x2177 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2668u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x3B2668 raw=0x000A2177");
label_3b266c:
    // 0x3b266c: 0x0  nop
    ctx->pc = 0x3b266cu;
    // NOP
label_3b2670:
    // 0x3b2670: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b2670u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b2674:
    // 0x3b2674: 0x72645320  .word       0x72645320                   # madd1       $t2, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2674u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b2678:
    // 0x3b2678: 0x56676158  bnel        $s3, $a3, . + 4 + (0x6158 << 2)
label_3b267c:
    if (ctx->pc == 0x3B267Cu) {
        ctx->pc = 0x3B267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2678u;
        // 0x3b267c: 0x203a6c6f  addi        $k0, $at, 0x6C6F (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)27759, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2680u;
        goto label_3b2680;
    }
    ctx->pc = 0x3B2678u;
    {
        const bool branch_taken_0x3b2678 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 7));
        if (branch_taken_0x3b2678) {
            ctx->pc = 0x3B267Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2678u;
            // 0x3b267c: 0x203a6c6f  addi        $k0, $at, 0x6C6F (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)27759, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CABDCu;
            return;
        }
    }
    ctx->pc = 0x3B2680u;
label_3b2680:
    // 0x3b2680: 0x6e726157  ldr         $s2, 0x6157($s3)
    ctx->pc = 0x3b2680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24919); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_3b2684:
    // 0x3b2684: 0x3a676e69  xori        $a3, $s3, 0x6E69
    ctx->pc = 0x3b2684u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28265);
label_3b2688:
    // 0x3b2688: 0x646e7320  daddiu      $t6, $v1, 0x7320
    ctx->pc = 0x3b2688u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29472);
label_3b268c:
    // 0x3b268c: 0x20657571  addi        $a1, $v1, 0x7571
    ctx->pc = 0x3b268cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30065, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_3b2690:
    // 0x3b2690: 0x7265766f  .word       0x7265766F                   # INVALID     $s3, $a1, 0x766F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2690u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x3B2690 raw=0x7265766F");
label_3b2694:
    // 0x3b2694: 0x776f6c66  .word       0x776F6C66                   # INVALID     $k1, $t7, 0x6C66 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b2694u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B2694 raw=0x776F6C66");
label_3b2698:
    // 0x3b2698: 0xa21  .word       0x00000A21                   # addu        $at, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2698u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_3b269c:
    // 0x3b269c: 0x0  nop
    ctx->pc = 0x3b269cu;
    // NOP
label_3b26a0:
    // 0x3b26a0: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b26a0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b26a4:
    // 0x3b26a4: 0x72645320  .word       0x72645320                   # madd1       $t2, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b26a4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b26a8:
    // 0x3b26a8: 0x53676158  beql        $k1, $a3, . + 4 + (0x6158 << 2)
label_3b26ac:
    if (ctx->pc == 0x3B26ACu) {
        ctx->pc = 0x3B26ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B26A8u;
        // 0x3b26ac: 0x6f437465  ldr         $v1, 0x7465($k0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 26), 29797); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B26B0u;
        goto label_3b26b0;
    }
    ctx->pc = 0x3B26A8u;
    {
        const bool branch_taken_0x3b26a8 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x3b26a8) {
            ctx->pc = 0x3B26ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B26A8u;
            // 0x3b26ac: 0x6f437465  ldr         $v1, 0x7465($k0) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 26), 29797); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CAC0Cu;
            return;
        }
    }
    ctx->pc = 0x3B26B0u;
label_3b26b0:
    // 0x3b26b0: 0x203a6572  addi        $k0, $at, 0x6572
    ctx->pc = 0x3b26b0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25970, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_3b26b4:
    // 0x3b26b4: 0x6e726157  ldr         $s2, 0x6157($s3)
    ctx->pc = 0x3b26b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24919); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_3b26b8:
    // 0x3b26b8: 0x3a676e69  xori        $a3, $s3, 0x6E69
    ctx->pc = 0x3b26b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28265);
label_3b26bc:
    // 0x3b26bc: 0x646e7320  daddiu      $t6, $v1, 0x7320
    ctx->pc = 0x3b26bcu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29472);
label_3b26c0:
    // 0x3b26c0: 0x20657571  addi        $a1, $v1, 0x7571
    ctx->pc = 0x3b26c0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30065, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_3b26c4:
    // 0x3b26c4: 0x7265766f  .word       0x7265766F                   # INVALID     $s3, $a1, 0x766F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b26c4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x3B26C4 raw=0x7265766F");
label_3b26c8:
    // 0x3b26c8: 0x776f6c66  .word       0x776F6C66                   # INVALID     $k1, $t7, 0x6C66 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b26c8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B26C8 raw=0x776F6C66");
label_3b26cc:
    // 0x3b26cc: 0xa21  .word       0x00000A21                   # addu        $at, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b26ccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_3b26d0:
    // 0x3b26d0: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b26d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b26d4:
    // 0x3b26d4: 0x72645320  .word       0x72645320                   # madd1       $t2, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b26d4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b26d8:
    // 0x3b26d8: 0x53676158  beql        $k1, $a3, . + 4 + (0x6158 << 2)
label_3b26dc:
    if (ctx->pc == 0x3B26DCu) {
        ctx->pc = 0x3B26DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B26D8u;
        // 0x3b26dc: 0x75427465  .word       0x75427465                   # INVALID     $t2, $v0, 0x7465 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B26DC raw=0x75427465");
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B26E0u;
        goto label_3b26e0;
    }
    ctx->pc = 0x3B26D8u;
    {
        const bool branch_taken_0x3b26d8 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x3b26d8) {
            ctx->pc = 0x3B26DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B26D8u;
            // 0x3b26dc: 0x75427465  .word       0x75427465                   # INVALID     $t2, $v0, 0x7465 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B26DC raw=0x75427465");
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CAC3Cu;
            return;
        }
    }
    ctx->pc = 0x3B26E0u;
label_3b26e0:
    // 0x3b26e0: 0x203a6666  addi        $k0, $at, 0x6666
    ctx->pc = 0x3b26e0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)26214, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_3b26e4:
    // 0x3b26e4: 0x6e726157  ldr         $s2, 0x6157($s3)
    ctx->pc = 0x3b26e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24919); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_3b26e8:
    // 0x3b26e8: 0x3a676e69  xori        $a3, $s3, 0x6E69
    ctx->pc = 0x3b26e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28265);
label_3b26ec:
    // 0x3b26ec: 0x646e7320  daddiu      $t6, $v1, 0x7320
    ctx->pc = 0x3b26ecu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29472);
label_3b26f0:
    // 0x3b26f0: 0x20657571  addi        $a1, $v1, 0x7571
    ctx->pc = 0x3b26f0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30065, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_3b26f4:
    // 0x3b26f4: 0x7265766f  .word       0x7265766F                   # INVALID     $s3, $a1, 0x766F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b26f4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x3B26F4 raw=0x7265766F");
label_3b26f8:
    // 0x3b26f8: 0x776f6c66  .word       0x776F6C66                   # INVALID     $k1, $t7, 0x6C66 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b26f8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B26F8 raw=0x776F6C66");
label_3b26fc:
    // 0x3b26fc: 0xa21  .word       0x00000A21                   # addu        $at, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b26fcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_3b2700:
    // 0x3b2700: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b2700u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b2704:
    // 0x3b2704: 0x72645320  .word       0x72645320                   # madd1       $t2, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2704u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b2708:
    // 0x3b2708: 0x49676158  .word       0x49676158                   # INVALID     $t3, $a3, 0x6158 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x3b2708u;
    throw std::runtime_error("Unhandled COP2 format: 0xB at 0x3B2708 raw=0x49676158");
label_3b270c:
    // 0x3b270c: 0x3a74696e  xori        $s4, $s3, 0x696E
    ctx->pc = 0x3b270cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)26990);
label_3b2710:
    // 0x3b2710: 0x72615720  .word       0x72615720                   # madd1       $t2, $s3, $at # 00000700 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2710u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b2714:
    // 0x3b2714: 0x676e696e  daddiu      $t6, $k1, 0x696E
    ctx->pc = 0x3b2714u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26990);
label_3b2718:
    // 0x3b2718: 0x6e73203a  ldr         $s3, 0x203A($s3)
    ctx->pc = 0x3b2718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8250); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
label_3b271c:
    // 0x3b271c: 0x65757164  daddiu      $s5, $t3, 0x7164
    ctx->pc = 0x3b271cu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29028);
label_3b2720:
    // 0x3b2720: 0x65766f20  daddiu      $s6, $t3, 0x6F20
    ctx->pc = 0x3b2720u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28448);
label_3b2724:
    // 0x3b2724: 0x6f6c6672  ldr         $t4, 0x6672($k1)
    ctx->pc = 0x3b2724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26226); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_3b2728:
    // 0x3b2728: 0xa2177  .word       0x000A2177                   # INVALID     $zero, $t2, 0x2177 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2728u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x3B2728 raw=0x000A2177");
label_3b272c:
    // 0x3b272c: 0x0  nop
    ctx->pc = 0x3b272cu;
    // NOP
label_3b2730:
    // 0x3b2730: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b2730u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b2734:
    // 0x3b2734: 0x72645320  .word       0x72645320                   # madd1       $t2, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2734u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b2738:
    // 0x3b2738: 0x49676158  .word       0x49676158                   # INVALID     $t3, $a3, 0x6158 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x3b2738u;
    throw std::runtime_error("Unhandled COP2 format: 0xB at 0x3B2738 raw=0x49676158");
label_3b273c:
    // 0x3b273c: 0x3a74696e  xori        $s4, $s3, 0x696E
    ctx->pc = 0x3b273cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)26990);
label_3b2740:
    // 0x3b2740: 0x72724520  .word       0x72724520                   # madd1       $t0, $s3, $s2 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2740u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_3b2744:
    // 0x3b2744: 0x203a726f  addi        $k0, $at, 0x726F
    ctx->pc = 0x3b2744u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)29295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_3b2748:
    // 0x3b2748: 0x2078614d  addi        $t8, $v1, 0x614D
    ctx->pc = 0x3b2748u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24909, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
label_3b274c:
    // 0x3b274c: 0x6e616863  ldr         $at, 0x6863($s3)
    ctx->pc = 0x3b274cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26723); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_3b2750:
    // 0x3b2750: 0x206c656e  addi        $t4, $v1, 0x656E
    ctx->pc = 0x3b2750u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25966, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_3b2754:
    // 0x3b2754: 0x61766e69  daddi       $s6, $t3, 0x6E69
    ctx->pc = 0x3b2754u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28265; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
label_3b2758:
    // 0x3b2758: 0x2e64696c  sltiu       $a0, $s3, 0x696C
    ctx->pc = 0x3b2758u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)26988) ? 1 : 0);
label_3b275c:
    // 0x3b275c: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x3b275cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3b2760:
    // 0x3b2760: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b2760u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b2764:
    // 0x3b2764: 0x72645320  .word       0x72645320                   # madd1       $t2, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2764u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b2768:
    // 0x3b2768: 0x536c6c41  beql        $k1, $t4, . + 4 + (0x6C41 << 2)
label_3b276c:
    if (ctx->pc == 0x3B276Cu) {
        ctx->pc = 0x3B276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2768u;
        // 0x3b276c: 0x56706f74  bnel        $s3, $s0, . + 4 + (0x6F74 << 2) (Delay Slot)
        // Likely branch instruction at 0x3B276C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2770u;
        goto label_3b2770;
    }
    ctx->pc = 0x3B2768u;
    {
        const bool branch_taken_0x3b2768 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 12));
        if (branch_taken_0x3b2768) {
            ctx->pc = 0x3B276Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2768u;
            // 0x3b276c: 0x56706f74  bnel        $s3, $s0, . + 4 + (0x6F74 << 2) (Delay Slot)
            // Likely branch instruction at 0x3B276C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CD870u;
            return;
        }
    }
    ctx->pc = 0x3B2770u;
label_3b2770:
    // 0x3b2770: 0x6157203a  daddi       $s7, $t2, 0x203A
    ctx->pc = 0x3b2770u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8250; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, res); }
label_3b2774:
    // 0x3b2774: 0x6e696e72  ldr         $t1, 0x6E72($s3)
    ctx->pc = 0x3b2774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28274); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_3b2778:
    // 0x3b2778: 0x73203a67  .word       0x73203A67                   # INVALID     $t9, $zero, 0x3A67 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2778u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x27 at 0x3B2778 raw=0x73203A67");
label_3b277c:
    // 0x3b277c: 0x7571646e  .word       0x7571646E                   # INVALID     $t3, $s1, 0x646E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b277cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B277C raw=0x7571646E");
label_3b2780:
    // 0x3b2780: 0x766f2065  .word       0x766F2065                   # INVALID     $s3, $t7, 0x2065 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b2780u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B2780 raw=0x766F2065");
label_3b2784:
    // 0x3b2784: 0x6c667265  ldr         $a2, 0x7265($v1)
    ctx->pc = 0x3b2784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3b2788:
    // 0x3b2788: 0xa21776f  j           func_885DDBC
label_3b278c:
    if (ctx->pc == 0x3B278Cu) {
        ctx->pc = 0x3B2790u;
        goto label_3b2790;
    }
    ctx->pc = 0x3B2788u;
    ctx->pc = 0x885DDBCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x885DDBCu, 0x3B2788u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B2790u;
label_3b2790:
    // 0x3b2790: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b2790u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b2794:
    // 0x3b2794: 0x72645320  .word       0x72645320                   # madd1       $t2, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2794u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b2798:
    // 0x3b2798: 0x646e6553  daddiu      $t6, $v1, 0x6553
    ctx->pc = 0x3b2798u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25939);
label_3b279c:
    // 0x3b279c: 0x3a716552  xori        $s1, $s3, 0x6552
    ctx->pc = 0x3b279cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)25938);
label_3b27a0:
    // 0x3b27a0: 0x75614320  .word       0x75614320                   # INVALID     $t3, $at, 0x4320 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b27a0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B27A0 raw=0x75614320");
label_3b27a4:
    // 0x3b27a4: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x3b27a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_3b27a8:
    // 0x3b27a8: 0x6273203a  daddi       $s3, $s3, 0x203A
    ctx->pc = 0x3b27a8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)8250; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_3b27ac:
    // 0x3b27ac: 0x20666675  addi        $a2, $v1, 0x6675
    ctx->pc = 0x3b27acu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26229, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_3b27b0:
    // 0x3b27b0: 0x7265766f  .word       0x7265766F                   # INVALID     $s3, $a1, 0x766F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b27b0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x3B27B0 raw=0x7265766F");
label_3b27b4:
    // 0x3b27b4: 0x776f6c66  .word       0x776F6C66                   # INVALID     $k1, $t7, 0x6C66 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b27b4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B27B4 raw=0x776F6C66");
label_3b27b8:
    // 0x3b27b8: 0x20200a2e  addi        $zero, $at, 0xA2E
    ctx->pc = 0x3b27b8u;
    // NOP (addi to $zero)
label_3b27bc:
    // 0x3b27bc: 0x49202020  .word       0x49202020                   # INVALID     $t1, $zero, 0x2020 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x3b27bcu;
    throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x3B27BC raw=0x49202020");
label_3b27c0:
    // 0x3b27c0: 0x72616320  .word       0x72616320                   # madd1       $t4, $s3, $at # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b27c0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_3b27c4:
    // 0x3b27c4: 0x66207972  daddiu      $zero, $s1, 0x7972
    ctx->pc = 0x3b27c4u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)31090);
label_3b27c8:
    // 0x3b27c8: 0x6177726f  daddi       $s7, $t3, 0x726F
    ctx->pc = 0x3b27c8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29295; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, res); }
label_3b27cc:
    // 0x3b27cc: 0x74206472  .word       0x74206472                   # INVALID     $at, $zero, 0x6472 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b27ccu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B27CC raw=0x74206472");
label_3b27d0:
    // 0x3b27d0: 0x72206568  psubuh      $t4, $s1, $zero
    ctx->pc = 0x3b27d0u;
    SET_GPR_VEC(ctx, 12, _mm_sub_epi16(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_3b27d4:
    // 0x3b27d4: 0x65757165  daddiu      $s5, $t3, 0x7165
    ctx->pc = 0x3b27d4u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29029);
label_3b27d8:
    // 0x3b27d8: 0x74207473  .word       0x74207473                   # INVALID     $at, $zero, 0x7473 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b27d8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B27D8 raw=0x74207473");
label_3b27dc:
    // 0x3b27dc: 0x656e206f  daddiu      $t6, $t3, 0x206F
    ctx->pc = 0x3b27dcu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8303);
label_3b27e0:
    // 0x3b27e0: 0x74207478  .word       0x74207478                   # INVALID     $at, $zero, 0x7478 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b27e0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B27E0 raw=0x74207478");
label_3b27e4:
    // 0x3b27e4: 0x2e656d69  sltiu       $a1, $s3, 0x6D69
    ctx->pc = 0x3b27e4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)28009) ? 1 : 0);
label_3b27e8:
    // 0x3b27e8: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x3b27e8u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3b27ec:
    // 0x3b27ec: 0x0  nop
    ctx->pc = 0x3b27ecu;
    // NOP
label_3b27f0:
    // 0x3b27f0: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b27f0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b27f4:
    // 0x3b27f4: 0x72645320  .word       0x72645320                   # madd1       $t2, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b27f4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b27f8:
    // 0x3b27f8: 0x646e6553  daddiu      $t6, $v1, 0x6553
    ctx->pc = 0x3b27f8u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25939);
label_3b27fc:
    // 0x3b27fc: 0x3a716552  xori        $s1, $s3, 0x6552
    ctx->pc = 0x3b27fcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)25938);
label_3b2800:
    // 0x3b2800: 0x72724520  .word       0x72724520                   # madd1       $t0, $s3, $s2 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2800u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_3b2804:
    // 0x3b2804: 0x203a726f  addi        $k0, $at, 0x726F
    ctx->pc = 0x3b2804u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)29295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_3b2808:
    // 0x3b2808: 0x20637052  addi        $v1, $v1, 0x7052
    ctx->pc = 0x3b2808u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28754, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_3b280c:
    // 0x3b280c: 0x6c696166  ldr         $t1, 0x6166($v1)
    ctx->pc = 0x3b280cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24934); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_3b2810:
    // 0x3b2810: 0xa2e64  .word       0x000A2E64                   # and         $a1, $zero, $t2 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2810u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & GPR_U64(ctx, 10));
label_3b2814:
    // 0x3b2814: 0x0  nop
    ctx->pc = 0x3b2814u;
    // NOP
label_3b2818:
    // 0x3b2818: 0x0  nop
    ctx->pc = 0x3b2818u;
    // NOP
label_3b281c:
    // 0x3b281c: 0x0  nop
    ctx->pc = 0x3b281cu;
    // NOP
label_3b2820:
    // 0x3b2820: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b2820u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b2824:
    // 0x3b2824: 0x72645320  .word       0x72645320                   # madd1       $t2, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2824u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3b2828:
    // 0x3b2828: 0x53746547  beql        $k1, $s4, . + 4 + (0x6547 << 2)
label_3b282c:
    if (ctx->pc == 0x3B282Cu) {
        ctx->pc = 0x3B282Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2828u;
        // 0x3b282c: 0x65746174  daddiu      $s4, $t3, 0x6174 (Delay Slot)
        SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24948);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2830u;
        goto label_3b2830;
    }
    ctx->pc = 0x3B2828u;
    {
        const bool branch_taken_0x3b2828 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 20));
        if (branch_taken_0x3b2828) {
            ctx->pc = 0x3B282Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2828u;
            // 0x3b282c: 0x65746174  daddiu      $s4, $t3, 0x6174 (Delay Slot)
            SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24948);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CBD48u;
            return;
        }
    }
    ctx->pc = 0x3B2830u;
label_3b2830:
    // 0x3b2830: 0x646e6553  daddiu      $t6, $v1, 0x6553
    ctx->pc = 0x3b2830u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25939);
label_3b2834:
    // 0x3b2834: 0x7245203a  .word       0x7245203A                   # INVALID     $s2, $a1, 0x203A # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2834u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x3A at 0x3B2834 raw=0x7245203A");
label_3b2838:
    // 0x3b2838: 0x3a726f72  xori        $s2, $s3, 0x6F72
    ctx->pc = 0x3b2838u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28530);
label_3b283c:
    // 0x3b283c: 0x63705220  daddi       $s0, $k1, 0x5220
    ctx->pc = 0x3b283cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)21024; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
label_3b2840:
    // 0x3b2840: 0x69616620  ldl         $at, 0x6620($t3)
    ctx->pc = 0x3b2840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_3b2844:
    // 0x3b2844: 0xa2e646c  j           func_8B991B0
label_3b2848:
    if (ctx->pc == 0x3B2848u) {
        ctx->pc = 0x3B284Cu;
        goto label_3b284c;
    }
    ctx->pc = 0x3B2844u;
    ctx->pc = 0x8B991B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8B991B0u, 0x3B2844u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B284Cu;
label_3b284c:
    // 0x3b284c: 0x0  nop
    ctx->pc = 0x3b284cu;
    // NOP
label_3b2850:
    // 0x3b2850: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b2850u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b2854:
    // 0x3b2854: 0x646e7320  daddiu      $t6, $v1, 0x7320
    ctx->pc = 0x3b2854u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29472);
label_3b2858:
    // 0x3b2858: 0x2e767264  sltiu       $s6, $s3, 0x7264
    ctx->pc = 0x3b2858u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)29284) ? 1 : 0);
label_3b285c:
    // 0x3b285c: 0x6d203a63  ldr         $zero, 0x3A63($t1)
    ctx->pc = 0x3b285cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 14947); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_3b2860:
    // 0x3b2860: 0x62656b61  daddi       $a1, $s3, 0x6B61
    ctx->pc = 0x3b2860u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)27489; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_3b2864:
    // 0x3b2864: 0x38666675  xori        $a2, $v1, 0x6675
    ctx->pc = 0x3b2864u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)26229);
label_3b2868:
    // 0x3b2868: 0x7245203a  .word       0x7245203A                   # INVALID     $s2, $a1, 0x203A # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2868u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x3A at 0x3B2868 raw=0x7245203A");
label_3b286c:
    // 0x3b286c: 0x3a726f72  xori        $s2, $s3, 0x6F72
    ctx->pc = 0x3b286cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28530);
label_3b2870:
    // 0x3b2870: 0x6e654c20  ldr         $a1, 0x4C20($s3)
    ctx->pc = 0x3b2870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 19488); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_3b2874:
    // 0x3b2874: 0x20687467  addi        $t0, $v1, 0x7467
    ctx->pc = 0x3b2874u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29799, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_3b2878:
    // 0x3b2878: 0x7265766f  .word       0x7265766F                   # INVALID     $s3, $a1, 0x766F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2878u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x3B2878 raw=0x7265766F");
label_3b287c:
    // 0x3b287c: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x3b287cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3b2880:
    // 0x3b2880: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b2880u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b2884:
    // 0x3b2884: 0x646e7320  daddiu      $t6, $v1, 0x7320
    ctx->pc = 0x3b2884u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29472);
label_3b2888:
    // 0x3b2888: 0x2e767264  sltiu       $s6, $s3, 0x7264
    ctx->pc = 0x3b2888u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)29284) ? 1 : 0);
label_3b288c:
    // 0x3b288c: 0x6d203a63  ldr         $zero, 0x3A63($t1)
    ctx->pc = 0x3b288cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 14947); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_3b2890:
    // 0x3b2890: 0x62656b61  daddi       $a1, $s3, 0x6B61
    ctx->pc = 0x3b2890u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)27489; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_3b2894:
    // 0x3b2894: 0x3a666675  xori        $a2, $s3, 0x6675
    ctx->pc = 0x3b2894u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)26229);
label_3b2898:
    // 0x3b2898: 0x72724520  .word       0x72724520                   # madd1       $t0, $s3, $s2 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2898u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_3b289c:
    // 0x3b289c: 0x203a726f  addi        $k0, $at, 0x726F
    ctx->pc = 0x3b289cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)29295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_3b28a0:
    // 0x3b28a0: 0x676e654c  daddiu      $t6, $k1, 0x654C
    ctx->pc = 0x3b28a0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25932);
label_3b28a4:
    // 0x3b28a4: 0x6f206874  ldr         $zero, 0x6874($t9)
    ctx->pc = 0x3b28a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 26740); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_3b28a8:
    // 0x3b28a8: 0xa726576  j           func_9C995D8
label_3b28ac:
    if (ctx->pc == 0x3B28ACu) {
        ctx->pc = 0x3B28B0u;
        goto label_3b28b0;
    }
    ctx->pc = 0x3B28A8u;
    ctx->pc = 0x9C995D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9C995D8u, 0x3B28A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B28B0u;
label_3b28b0:
    // 0x3b28b0: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b28b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b28b4:
    // 0x3b28b4: 0x646e7320  daddiu      $t6, $v1, 0x7320
    ctx->pc = 0x3b28b4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29472);
label_3b28b8:
    // 0x3b28b8: 0x2e767264  sltiu       $s6, $s3, 0x7264
    ctx->pc = 0x3b28b8u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)29284) ? 1 : 0);
label_3b28bc:
    // 0x3b28bc: 0x6d203a63  ldr         $zero, 0x3A63($t1)
    ctx->pc = 0x3b28bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 14947); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_3b28c0:
    // 0x3b28c0: 0x62656b61  daddi       $a1, $s3, 0x6B61
    ctx->pc = 0x3b28c0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)27489; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_3b28c4:
    // 0x3b28c4: 0x5f666675  .word       0x5F666675                   # bgtzl       $k1, . + 4 + (0x6675 << 2) # 00060000 <InstrIdType: CPU_NORMAL>
label_3b28c8:
    if (ctx->pc == 0x3B28C8u) {
        ctx->pc = 0x3B28C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B28C4u;
        // 0x3b28c8: 0x3a747865  xori        $s4, $s3, 0x7865 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)30821);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B28CCu;
        goto label_3b28cc;
    }
    ctx->pc = 0x3B28C4u;
    {
        const bool branch_taken_0x3b28c4 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x3b28c4) {
            ctx->pc = 0x3B28C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B28C4u;
            // 0x3b28c8: 0x3a747865  xori        $s4, $s3, 0x7865 (Delay Slot)
            SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)30821);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CC29Cu;
            return;
        }
    }
    ctx->pc = 0x3B28CCu;
label_3b28cc:
    // 0x3b28cc: 0x72724520  .word       0x72724520                   # madd1       $t0, $s3, $s2 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b28ccu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_3b28d0:
    // 0x3b28d0: 0x203a726f  addi        $k0, $at, 0x726F
    ctx->pc = 0x3b28d0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)29295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_3b28d4:
    // 0x3b28d4: 0x676e654c  daddiu      $t6, $k1, 0x654C
    ctx->pc = 0x3b28d4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25932);
label_3b28d8:
    // 0x3b28d8: 0x69206874  ldl         $zero, 0x6874($t1)
    ctx->pc = 0x3b28d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 26740); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_3b28dc:
    // 0x3b28dc: 0x6c61766e  ldr         $at, 0x766E($v1)
    ctx->pc = 0x3b28dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30318); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_3b28e0:
    // 0x3b28e0: 0xa6469  .word       0x000A6469                   # mtsa        $zero # 000A6440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b28e0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_3b28e4:
    // 0x3b28e4: 0x0  nop
    ctx->pc = 0x3b28e4u;
    // NOP
label_3b28e8:
    // 0x3b28e8: 0x0  nop
    ctx->pc = 0x3b28e8u;
    // NOP
label_3b28ec:
    // 0x3b28ec: 0x0  nop
    ctx->pc = 0x3b28ecu;
    // NOP
label_3b28f0:
    // 0x3b28f0: 0x3a524453  xori        $s2, $s2, 0x4453
    ctx->pc = 0x3b28f0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17491);
label_3b28f4:
    // 0x3b28f4: 0x646e7320  daddiu      $t6, $v1, 0x7320
    ctx->pc = 0x3b28f4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29472);
label_3b28f8:
    // 0x3b28f8: 0x2e767264  sltiu       $s6, $s3, 0x7264
    ctx->pc = 0x3b28f8u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)29284) ? 1 : 0);
label_3b28fc:
    // 0x3b28fc: 0x73203a63  .word       0x73203A63                   # INVALID     $t9, $zero, 0x3A63 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b28fcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x3B28FC raw=0x73203A63");
label_3b2900:
    // 0x3b2900: 0x69646e65  ldl         $a0, 0x6E65($t3)
    ctx->pc = 0x3b2900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28261); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_3b2904:
    // 0x3b2904: 0x725f676e  .word       0x725F676E                   # INVALID     $s2, $ra, 0x676E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2904u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x3B2904 raw=0x725F676E");
label_3b2908:
    // 0x3b2908: 0x203a7165  addi        $k0, $at, 0x7165
    ctx->pc = 0x3b2908u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)29029, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_3b290c:
    // 0x3b290c: 0x6f727245  ldr         $s2, 0x7245($k1)
    ctx->pc = 0x3b290cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29253); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_3b2910:
    // 0x3b2910: 0x75203a72  .word       0x75203A72                   # INVALID     $t1, $zero, 0x3A72 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b2910u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B2910 raw=0x75203A72");
label_3b2914:
    // 0x3b2914: 0x6f6e6b6e  ldr         $t6, 0x6B6E($k1)
    ctx->pc = 0x3b2914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 27502); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_3b2918:
    // 0x3b2918: 0x63206e77  daddi       $zero, $t9, 0x6E77
    ctx->pc = 0x3b2918u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)28279; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_3b291c:
    // 0x3b291c: 0x616d6d6f  daddi       $t5, $t3, 0x6D6F
    ctx->pc = 0x3b291cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28015; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_3b2920:
    // 0x3b2920: 0xa646e  .word       0x000A646E                   # dsub        $t4, $zero, $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2920u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 10); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_3b2924:
    // 0x3b2924: 0x0  nop
    ctx->pc = 0x3b2924u;
    // NOP
label_3b2928:
    // 0x3b2928: 0x0  nop
    ctx->pc = 0x3b2928u;
    // NOP
label_3b292c:
    // 0x3b292c: 0x0  nop
    ctx->pc = 0x3b292cu;
    // NOP
label_3b2930:
    // 0x3b2930: 0x33bbc0  .word       0x0033BBC0                   # sll         $s7, $s3, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2930u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 19), 15));
label_3b2934:
    // 0x3b2934: 0x33bca0  .word       0x0033BCA0                   # add         $s7, $at, $s3 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2934u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_3b2938:
    // 0x3b2938: 0x33bee4  .word       0x0033BEE4                   # and         $s7, $at, $s3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2938u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 1) & GPR_U64(ctx, 19));
label_3b293c:
    // 0x3b293c: 0x33bf10  .word       0x0033BF10                   # mfhi        $s7 # 00330700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b293cu;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_3b2940:
    // 0x3b2940: 0x33bfd0  .word       0x0033BFD0                   # mfhi        $s7 # 003307C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2940u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_3b2944:
    // 0x3b2944: 0x33c09c  .word       0x0033C09C                   # dmult       $at, $s3 # 0000C080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2944u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B2944 raw=0x0033C09C");
label_3b2948:
    // 0x3b2948: 0x0  nop
    ctx->pc = 0x3b2948u;
    // NOP
label_3b294c:
    // 0x3b294c: 0x0  nop
    ctx->pc = 0x3b294cu;
    // NOP
label_3b2950:
    // 0x3b2950: 0x0  nop
    ctx->pc = 0x3b2950u;
    // NOP
label_3b2954:
    // 0x3b2954: 0xc2480000  ll          $t0, 0x0($s2)
    ctx->pc = 0x3b2954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_3b2958:
    // 0x3b2958: 0x42b40000  .word       0x42B40000                   # INVALID     $s5, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b2958u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x3B2958 raw=0x42B40000");
label_3b295c:
    // 0x3b295c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b295cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b2960:
    // 0x3b2960: 0x0  nop
    ctx->pc = 0x3b2960u;
    // NOP
label_3b2964:
    // 0x3b2964: 0x0  nop
    ctx->pc = 0x3b2964u;
    // NOP
label_3b2968:
    // 0x3b2968: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b2968u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x3B2968 raw=0x43960000");
label_3b296c:
    // 0x3b296c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b296cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3b2970:
    // 0x3b2970: 0x6f6f6c46  ldr         $t7, 0x6C46($k1)
    ctx->pc = 0x3b2970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 27718); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_3b2974:
    // 0x3b2974: 0x66252072  daddiu      $a1, $s1, 0x2072
    ctx->pc = 0x3b2974u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)8306);
label_3b2978:
    // 0x3b2978: 0x0  nop
    ctx->pc = 0x3b2978u;
    // NOP
label_3b297c:
    // 0x3b297c: 0x0  nop
    ctx->pc = 0x3b297cu;
    // NOP
label_3b2980:
    // 0x3b2980: 0x3497bc  .word       0x003497BC                   # dsll32      $s2, $s4, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2980u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) << (32 + 30));
label_3b2984:
    // 0x3b2984: 0x349864  .word       0x00349864                   # and         $s3, $at, $s4 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2984u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 1) & GPR_U64(ctx, 20));
label_3b2988:
    // 0x3b2988: 0x349954  .word       0x00349954                   # dsllv       $s3, $s4, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2988u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) << (GPR_U32(ctx, 1) & 0x3F));
label_3b298c:
    // 0x3b298c: 0x349a8c  .word       0x00349A8C                   # syscall     618 # 00340000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b298cu;
    ctx->pc = 0x3B2990u;
runtime->handleSyscall(rdram, ctx, 0xD26Au);
label_3b2990:
    // 0x3b2990: 0x349c70  tge         $at, $s4, 625
    ctx->pc = 0x3b2990u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_3b2994:
    // 0x3b2994: 0x349e38  .word       0x00349E38                   # dsll        $s3, $s4, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2994u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) << 24);
label_3b2998:
    // 0x3b2998: 0x0  nop
    ctx->pc = 0x3b2998u;
    // NOP
label_3b299c:
    // 0x3b299c: 0x0  nop
    ctx->pc = 0x3b299cu;
    // NOP
label_3b29a0:
    // 0x3b29a0: 0x34ac00  .word       0x0034AC00                   # sll         $s5, $s4, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b29a0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
label_3b29a4:
    // 0x3b29a4: 0x34ace0  .word       0x0034ACE0                   # add         $s5, $at, $s4 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b29a4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_3b29a8:
    // 0x3b29a8: 0x34ae58  .word       0x0034AE58                   # mult        $s5, $at, $s4 # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b29a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_3b29ac:
    // 0x3b29ac: 0x34af14  .word       0x0034AF14                   # dsllv       $s5, $s4, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b29acu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 20) << (GPR_U32(ctx, 1) & 0x3F));
label_3b29b0:
    // 0x3b29b0: 0x34afd4  .word       0x0034AFD4                   # dsllv       $s5, $s4, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b29b0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 20) << (GPR_U32(ctx, 1) & 0x3F));
label_3b29b4:
    // 0x3b29b4: 0x34b094  .word       0x0034B094                   # dsllv       $s6, $s4, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b29b4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 20) << (GPR_U32(ctx, 1) & 0x3F));
label_3b29b8:
    // 0x3b29b8: 0x34b18c  .word       0x0034B18C                   # syscall     710 # 00340000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b29b8u;
    ctx->pc = 0x3B29BCu;
runtime->handleSyscall(rdram, ctx, 0xD2C6u);
label_3b29bc:
    // 0x3b29bc: 0x34b28c  .word       0x0034B28C                   # syscall     714 # 00340000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b29bcu;
    ctx->pc = 0x3B29C0u;
runtime->handleSyscall(rdram, ctx, 0xD2CAu);
label_3b29c0:
    // 0x3b29c0: 0x34bf28  .word       0x0034BF28                   # mfsa        $s7 # 00340700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b29c0u;
    SET_GPR_U32(ctx, 23, ctx->sa);
label_3b29c4:
    // 0x3b29c4: 0x34c01c  .word       0x0034C01C                   # dmult       $at, $s4 # 0000C000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b29c4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B29C4 raw=0x0034C01C");
label_3b29c8:
    // 0x3b29c8: 0x34c130  tge         $at, $s4, 772
    ctx->pc = 0x3b29c8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_3b29cc:
    // 0x3b29cc: 0x34c1f4  teq         $at, $s4, 775
    ctx->pc = 0x3b29ccu;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_3b29d0:
    // 0x3b29d0: 0x34c54c  .word       0x0034C54C                   # syscall     789 # 00340000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b29d0u;
    ctx->pc = 0x3B29D4u;
runtime->handleSyscall(rdram, ctx, 0xD315u);
label_3b29d4:
    // 0x3b29d4: 0x34ca38  .word       0x0034CA38                   # dsll        $t9, $s4, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b29d4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 20) << 8);
label_3b29d8:
    // 0x3b29d8: 0x34ccb4  teq         $at, $s4, 818
    ctx->pc = 0x3b29d8u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_3b29dc:
    // 0x3b29dc: 0x34cd9c  .word       0x0034CD9C                   # dmult       $at, $s4 # 0000CD80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b29dcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B29DC raw=0x0034CD9C");
label_3b29e0:
    // 0x3b29e0: 0x35110c  .word       0x0035110C                   # syscall     68 # 00350000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b29e0u;
    ctx->pc = 0x3B29E4u;
runtime->handleSyscall(rdram, ctx, 0xD444u);
label_3b29e4:
    // 0x3b29e4: 0x3511bc  .word       0x003511BC                   # dsll32      $v0, $s5, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b29e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 6));
label_3b29e8:
    // 0x3b29e8: 0x35124c  .word       0x0035124C                   # syscall     73 # 00350000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b29e8u;
    ctx->pc = 0x3B29ECu;
runtime->handleSyscall(rdram, ctx, 0xD449u);
label_3b29ec:
    // 0x3b29ec: 0x3515a0  .word       0x003515A0                   # add         $v0, $at, $s5 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b29ecu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_3b29f0:
    // 0x3b29f0: 0x351c48  .word       0x00351C48                   # jr          $at # 00151C40 <InstrIdType: CPU_SPECIAL>
label_3b29f4:
    if (ctx->pc == 0x3B29F4u) {
        ctx->pc = 0x3B29F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B29F0u;
        // 0x3b29f4: 0x351c9c  .word       0x00351C9C                   # dmult       $at, $s5 # 00001C80 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B29F4 raw=0x00351C9C");
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B29F8u;
        goto label_3b29f8;
    }
    ctx->pc = 0x3B29F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x3B29F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B29F0u;
        // 0x3b29f4: 0x351c9c  .word       0x00351C9C                   # dmult       $at, $s5 # 00001C80 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B29F4 raw=0x00351C9C");
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B29F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B29F8u;
label_3b29f8:
    // 0x3b29f8: 0x0  nop
    ctx->pc = 0x3b29f8u;
    // NOP
label_3b29fc:
    // 0x3b29fc: 0x0  nop
    ctx->pc = 0x3b29fcu;
    // NOP
label_3b2a00:
    // 0x3b2a00: 0x352f60  .word       0x00352F60                   # add         $a1, $at, $s5 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2a00u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_3b2a04:
    // 0x3b2a04: 0x352fe0  .word       0x00352FE0                   # add         $a1, $at, $s5 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2a04u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_3b2a08:
    // 0x3b2a08: 0x353010  .word       0x00353010                   # mfhi        $a2 # 00350000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2a08u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_3b2a0c:
    // 0x3b2a0c: 0x353050  .word       0x00353050                   # mfhi        $a2 # 00350040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2a0cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_3b2a10:
    // 0x3b2a10: 0x3530fc  .word       0x003530FC                   # dsll32      $a2, $s5, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2a10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) << (32 + 3));
label_3b2a14:
    // 0x3b2a14: 0x3531a4  .word       0x003531A4                   # and         $a2, $at, $s5 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2a14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) & GPR_U64(ctx, 21));
label_3b2a18:
    // 0x3b2a18: 0x3531d4  .word       0x003531D4                   # dsllv       $a2, $s5, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2a18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) << (GPR_U32(ctx, 1) & 0x3F));
label_3b2a1c:
    // 0x3b2a1c: 0x353214  .word       0x00353214                   # dsllv       $a2, $s5, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2a1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) << (GPR_U32(ctx, 1) & 0x3F));
label_3b2a20:
    // 0x3b2a20: 0x3532c0  .word       0x003532C0                   # sll         $a2, $s5, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2a20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 11));
label_3b2a24:
    // 0x3b2a24: 0x3532f0  tge         $at, $s5, 203
    ctx->pc = 0x3b2a24u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_3b2a28:
    // 0x3b2a28: 0x0  nop
    ctx->pc = 0x3b2a28u;
    // NOP
label_3b2a2c:
    // 0x3b2a2c: 0x0  nop
    ctx->pc = 0x3b2a2cu;
    // NOP
label_3b2a30:
    // 0x3b2a30: 0x353ca0  .word       0x00353CA0                   # add         $a3, $at, $s5 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2a30u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_3b2a34:
    // 0x3b2a34: 0x353d98  .word       0x00353D98                   # mult        $a3, $at, $s5 # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b2a34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_3b2a38:
    // 0x3b2a38: 0x353fec  .word       0x00353FEC                   # dadd        $a3, $at, $s5 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2a38u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 21); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_3b2a3c:
    // 0x3b2a3c: 0x354420  .word       0x00354420                   # add         $t0, $at, $s5 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2a3cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_3b2a40:
    // 0x3b2a40: 0x35444c  .word       0x0035444C                   # syscall     273 # 00350000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2a40u;
    ctx->pc = 0x3B2A44u;
runtime->handleSyscall(rdram, ctx, 0xD511u);
label_3b2a44:
    // 0x3b2a44: 0x354514  .word       0x00354514                   # dsllv       $t0, $s5, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2a44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 21) << (GPR_U32(ctx, 1) & 0x3F));
label_3b2a48:
    // 0x3b2a48: 0x354520  .word       0x00354520                   # add         $t0, $at, $s5 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2a48u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_3b2a4c:
    // 0x3b2a4c: 0x3548d4  .word       0x003548D4                   # dsllv       $t1, $s5, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2a4cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 21) << (GPR_U32(ctx, 1) & 0x3F));
label_3b2a50:
    // 0x3b2a50: 0x354dcc  .word       0x00354DCC                   # syscall     311 # 00350000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2a50u;
    ctx->pc = 0x3B2A54u;
runtime->handleSyscall(rdram, ctx, 0xD537u);
label_3b2a54:
    // 0x3b2a54: 0x354ea0  .word       0x00354EA0                   # add         $t1, $at, $s5 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2a54u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_3b2a58:
    // 0x3b2a58: 0x0  nop
    ctx->pc = 0x3b2a58u;
    // NOP
label_3b2a5c:
    // 0x3b2a5c: 0x0  nop
    ctx->pc = 0x3b2a5cu;
    // NOP
label_3b2a60:
    // 0x3b2a60: 0x3581a0  .word       0x003581A0                   # add         $s0, $at, $s5 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2a60u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_3b2a64:
    // 0x3b2a64: 0x358338  .word       0x00358338                   # dsll        $s0, $s5, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2a64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 21) << 12);
label_3b2a68:
    // 0x3b2a68: 0x3584d8  .word       0x003584D8                   # mult        $s0, $at, $s5 # 000004C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b2a68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_3b2a6c:
    // 0x3b2a6c: 0x358678  .word       0x00358678                   # dsll        $s0, $s5, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2a6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 21) << 25);
label_3b2a70:
    // 0x3b2a70: 0x358824  and         $s1, $at, $s5
    ctx->pc = 0x3b2a70u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 1) & GPR_U64(ctx, 21));
label_3b2a74:
    // 0x3b2a74: 0x358834  teq         $at, $s5, 544
    ctx->pc = 0x3b2a74u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_3b2a78:
    // 0x3b2a78: 0x358844  .word       0x00358844                   # sllv        $s1, $s5, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2a78u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 1) & 0x1F));
label_3b2a7c:
    // 0x3b2a7c: 0x0  nop
    ctx->pc = 0x3b2a7cu;
    // NOP
label_3b2a80:
    // 0x3b2a80: 0x6c826382  ldr         $v0, 0x6382($a0)
    ctx->pc = 0x3b2a80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 25474); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3b2a84:
    // 0x3b2a84: 0xcd826082  pref        0x02, 0x6082($t4)
    ctx->pc = 0x3b2a84u;
    // PREF instruction (ignored)
label_3b2a88:
    // 0x3b2a88: 0xdf827e8e  ld          $v0, 0x7E8E($gp)
    ctx->pc = 0x3b2a88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 32398)));
label_3b2a8c:
    // 0x3b2a8c: 0xa282c482  sb          $v0, -0x3B7E($s4)
    ctx->pc = 0x3b2a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4294952066), (uint8_t)GPR_U32(ctx, 2));
label_3b2a90:
    // 0x3b2a90: 0xa282c882  sb          $v0, -0x377E($s4)
    ctx->pc = 0x3b2a90u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4294953090), (uint8_t)GPR_U32(ctx, 2));
label_3b2a94:
    // 0x3b2a94: 0xa282c682  sb          $v0, -0x397E($s4)
    ctx->pc = 0x3b2a94u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4294952578), (uint8_t)GPR_U32(ctx, 2));
label_3b2a98:
    // 0x3b2a98: 0xdc82af82  ld          $v0, -0x507E($a0)
    ctx->pc = 0x3b2a98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4294946690)));
label_3b2a9c:
    // 0x3b2a9c: 0xf182b982  scd         $v0, -0x467E($t4)
    ctx->pc = 0x3b2a9cu;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x3B2A9C raw=0xF182B982");
label_3b2aa0:
    // 0x3b2aa0: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x3b2aa0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3b2aa4:
    // 0x3b2aa4: 0x0  nop
    ctx->pc = 0x3b2aa4u;
    // NOP
label_3b2aa8:
    // 0x3b2aa8: 0x0  nop
    ctx->pc = 0x3b2aa8u;
    // NOP
label_3b2aac:
    // 0x3b2aac: 0x0  nop
    ctx->pc = 0x3b2aacu;
    // NOP
label_3b2ab0:
    // 0x3b2ab0: 0x4d656373  .word       0x4D656373                   # INVALID     $t3, $a1, 0x6373 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b2ab0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x3B2AB0 raw=0x4D656373");
label_3b2ab4:
    // 0x3b2ab4: 0x47676570  .word       0x47676570                   # INVALID     $k1, $a3, 0x6570 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3b2ab4u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x30 at 0x3B2AB4 raw=0x47676570");
label_3b2ab8:
    // 0x3b2ab8: 0x69507465  ldl         $s0, 0x7465($t2)
    ctx->pc = 0x3b2ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 29797); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
label_3b2abc:
    // 0x3b2abc: 0x72757463  .word       0x72757463                   # INVALID     $s3, $s5, 0x7463 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3b2abcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x3B2ABC raw=0x72757463");
label_3b2ac0:
    // 0x3b2ac0: 0x61462065  daddi       $a2, $t2, 0x2065
    ctx->pc = 0x3b2ac0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8293; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
label_3b2ac4:
    // 0x3b2ac4: 0x64656c69  daddiu      $a1, $v1, 0x6C69
    ctx->pc = 0x3b2ac4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27753);
label_3b2ac8:
    // 0x3b2ac8: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x3b2ac8u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_3b2acc:
    // 0x3b2acc: 0x0  nop
    ctx->pc = 0x3b2accu;
    // NOP
label_3b2ad0:
    // 0x3b2ad0: 0x364d0c  .word       0x00364D0C                   # syscall     308 # 00360000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2ad0u;
    ctx->pc = 0x3B2AD4u;
runtime->handleSyscall(rdram, ctx, 0xD934u);
label_3b2ad4:
    // 0x3b2ad4: 0x364d3c  .word       0x00364D3C                   # dsll32      $t1, $s6, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2ad4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 22) << (32 + 20));
label_3b2ad8:
    // 0x3b2ad8: 0x364f54  .word       0x00364F54                   # dsllv       $t1, $s6, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2ad8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 22) << (GPR_U32(ctx, 1) & 0x3F));
label_3b2adc:
    // 0x3b2adc: 0x364f90  .word       0x00364F90                   # mfhi        $t1 # 00360780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2adcu;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_3b2ae0:
    // 0x3b2ae0: 0x36500c  .word       0x0036500C                   # syscall     320 # 00360000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2ae0u;
    ctx->pc = 0x3B2AE4u;
runtime->handleSyscall(rdram, ctx, 0xD940u);
label_3b2ae4:
    // 0x3b2ae4: 0x36503c  .word       0x0036503C                   # dsll32      $t2, $s6, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2ae4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 22) << (32 + 0));
label_3b2ae8:
    // 0x3b2ae8: 0x0  nop
    ctx->pc = 0x3b2ae8u;
    // NOP
label_3b2aec:
    // 0x3b2aec: 0x0  nop
    ctx->pc = 0x3b2aecu;
    // NOP
label_3b2af0:
    // 0x3b2af0: 0x366d4c  .word       0x00366D4C                   # syscall     437 # 00360000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2af0u;
    ctx->pc = 0x3B2AF4u;
runtime->handleSyscall(rdram, ctx, 0xD9B5u);
label_3b2af4:
    // 0x3b2af4: 0x366d7c  .word       0x00366D7C                   # dsll32      $t5, $s6, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2af4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 22) << (32 + 21));
label_3b2af8:
    // 0x3b2af8: 0x366ed4  .word       0x00366ED4                   # dsllv       $t5, $s6, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2af8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 22) << (GPR_U32(ctx, 1) & 0x3F));
label_3b2afc:
    // 0x3b2afc: 0x366f30  tge         $at, $s6, 444
    ctx->pc = 0x3b2afcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3b2b00:
    // 0x3b2b00: 0x366f9c  .word       0x00366F9C                   # dmult       $at, $s6 # 00006F80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2b00u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B2B00 raw=0x00366F9C");
label_3b2b04:
    // 0x3b2b04: 0x366fcc  .word       0x00366FCC                   # syscall     447 # 00360000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2b04u;
    ctx->pc = 0x3B2B08u;
runtime->handleSyscall(rdram, ctx, 0xD9BFu);
label_3b2b08:
    // 0x3b2b08: 0x0  nop
    ctx->pc = 0x3b2b08u;
    // NOP
label_3b2b0c:
    // 0x3b2b0c: 0x0  nop
    ctx->pc = 0x3b2b0cu;
    // NOP
label_3b2b10:
    // 0x3b2b10: 0x3677e0  .word       0x003677E0                   # add         $t6, $at, $s6 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2b10u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_3b2b14:
    // 0x3b2b14: 0x367834  teq         $at, $s6, 480
    ctx->pc = 0x3b2b14u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3b2b18:
    // 0x3b2b18: 0x3678c8  .word       0x003678C8                   # jr          $at # 001678C0 <InstrIdType: CPU_SPECIAL>
label_3b2b1c:
    if (ctx->pc == 0x3B2B1Cu) {
        ctx->pc = 0x3B2B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2B18u;
        // 0x3b2b1c: 0x3678f8  .word       0x003678F8                   # dsll        $t7, $s6, 3 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 22) << 3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2B20u;
        goto label_3b2b20;
    }
    ctx->pc = 0x3B2B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x3B2B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2B18u;
        // 0x3b2b1c: 0x3678f8  .word       0x003678F8                   # dsll        $t7, $s6, 3 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 22) << 3);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2B18u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B2B20u;
label_3b2b20:
    // 0x3b2b20: 0x367958  .word       0x00367958                   # mult        $t7, $at, $s6 # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b2b20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_3b2b24:
    // 0x3b2b24: 0x3679a8  .word       0x003679A8                   # mfsa        $t7 # 00360180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3b2b24u;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_3b2b28:
    // 0x3b2b28: 0x367a4c  .word       0x00367A4C                   # syscall     489 # 00360000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2b28u;
    ctx->pc = 0x3B2B2Cu;
runtime->handleSyscall(rdram, ctx, 0xD9E9u);
label_3b2b2c:
    // 0x3b2b2c: 0x367a7c  .word       0x00367A7C                   # dsll32      $t7, $s6, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2b2cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 22) << (32 + 9));
label_3b2b30:
    // 0x3b2b30: 0x367b40  .word       0x00367B40                   # sll         $t7, $s6, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2b30u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 22), 13));
label_3b2b34:
    // 0x3b2b34: 0x367bb0  tge         $at, $s6, 494
    ctx->pc = 0x3b2b34u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3b2b38:
    // 0x3b2b38: 0x367c44  .word       0x00367C44                   # sllv        $t7, $s6, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2b38u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 22), GPR_U32(ctx, 1) & 0x1F));
label_3b2b3c:
    // 0x3b2b3c: 0x367c74  teq         $at, $s6, 497
    ctx->pc = 0x3b2b3cu;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3b2b40:
    // 0x3b2b40: 0x367cd4  .word       0x00367CD4                   # dsllv       $t7, $s6, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2b40u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 22) << (GPR_U32(ctx, 1) & 0x3F));
label_3b2b44:
    // 0x3b2b44: 0x367d24  .word       0x00367D24                   # and         $t7, $at, $s6 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2b44u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 1) & GPR_U64(ctx, 22));
label_3b2b48:
    // 0x3b2b48: 0x367dc8  .word       0x00367DC8                   # jr          $at # 00167DC0 <InstrIdType: CPU_SPECIAL>
label_3b2b4c:
    if (ctx->pc == 0x3B2B4Cu) {
        ctx->pc = 0x3B2B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2B48u;
        // 0x3b2b4c: 0x367df8  .word       0x00367DF8                   # dsll        $t7, $s6, 23 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 22) << 23);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2B50u;
        goto label_3b2b50;
    }
    ctx->pc = 0x3B2B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x3B2B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2B48u;
        // 0x3b2b4c: 0x367df8  .word       0x00367DF8                   # dsll        $t7, $s6, 23 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 22) << 23);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2B48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B2B50u;
label_3b2b50:
    // 0x3b2b50: 0x36a308  .word       0x0036A308                   # jr          $at # 0016A300 <InstrIdType: CPU_SPECIAL>
label_3b2b54:
    if (ctx->pc == 0x3B2B54u) {
        ctx->pc = 0x3B2B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2B50u;
        // 0x3b2b54: 0x36a338  .word       0x0036A338                   # dsll        $s4, $s6, 12 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 22) << 12);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2B58u;
        goto label_3b2b58;
    }
    ctx->pc = 0x3B2B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x3B2B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2B50u;
        // 0x3b2b54: 0x36a338  .word       0x0036A338                   # dsll        $s4, $s6, 12 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 22) << 12);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2B50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B2B58u;
label_3b2b58:
    // 0x3b2b58: 0x36a3f4  teq         $at, $s6, 655
    ctx->pc = 0x3b2b58u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3b2b5c:
    // 0x3b2b5c: 0x36a474  teq         $at, $s6, 657
    ctx->pc = 0x3b2b5cu;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_3b2b60:
    // 0x3b2b60: 0x36a56c  .word       0x0036A56C                   # dadd        $s4, $at, $s6 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2b60u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 22); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, r); }
label_3b2b64:
    // 0x3b2b64: 0x36a59c  .word       0x0036A59C                   # dmult       $at, $s6 # 0000A580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2b64u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3B2B64 raw=0x0036A59C");
label_3b2b68:
    // 0x3b2b68: 0x36a660  .word       0x0036A660                   # add         $s4, $at, $s6 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2b68u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_3b2b6c:
    // 0x3b2b6c: 0x36a690  .word       0x0036A690                   # mfhi        $s4 # 00360680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2b6cu;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_3b2b70:
    // 0x3b2b70: 0x3c594b53  .word       0x3C594B53                   # lui         $t9, 0x4B53 # 00400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b2b70u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)19283 << 16));
label_3b2b74:
    // 0x3b2b74: 0x41453e2d  .word       0x41453E2D                   # INVALID     $t2, $a1, 0x3E2D # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3b2b74u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x3B2B74 raw=0x41453E2D");
label_3b2b78:
    // 0x3b2b78: 0x3a485452  xori        $t0, $s2, 0x5452
    ctx->pc = 0x3b2b78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)21586);
label_3b2b7c:
    // 0x3b2b7c: 0x44415020  .word       0x44415020                   # cfc1        $at, $10 # 00000020 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3b2b7cu;
    SET_GPR_U32(ctx, 1, 0); // Unimplemented FCR10
label_3b2b80:
    // 0x3b2b80: 0x132  tlt         $zero, $zero, 4
    ctx->pc = 0x3b2b80u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_3b2b84:
    // 0x3b2b84: 0x0  nop
    ctx->pc = 0x3b2b84u;
    // NOP
label_3b2b88:
    // 0x3b2b88: 0x20736f50  addi        $s3, $v1, 0x6F50
    ctx->pc = 0x3b2b88u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28496, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_3b2b8c:
    // 0x3b2b8c: 0x7625  .word       0x00007625                   # move        $t6, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2b8cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_3b2b90:
    // 0x3b2b90: 0x0  nop
    ctx->pc = 0x3b2b90u;
    // NOP
label_3b2b94:
    // 0x3b2b94: 0x0  nop
    ctx->pc = 0x3b2b94u;
    // NOP
label_3b2b98:
    // 0x3b2b98: 0x0  nop
    ctx->pc = 0x3b2b98u;
    // NOP
label_3b2b9c:
    // 0x3b2b9c: 0x0  nop
    ctx->pc = 0x3b2b9cu;
    // NOP
label_3b2ba0:
    // 0x3b2ba0: 0x0  nop
    ctx->pc = 0x3b2ba0u;
    // NOP
label_3b2ba4:
    // 0x3b2ba4: 0x0  nop
    ctx->pc = 0x3b2ba4u;
    // NOP
label_3b2ba8:
    // 0x3b2ba8: 0x0  nop
    ctx->pc = 0x3b2ba8u;
    // NOP
label_3b2bac:
    // 0x3b2bac: 0x0  nop
    ctx->pc = 0x3b2bacu;
    // NOP
label_3b2bb0:
    // 0x3b2bb0: 0x0  nop
    ctx->pc = 0x3b2bb0u;
    // NOP
label_3b2bb4:
    // 0x3b2bb4: 0x0  nop
    ctx->pc = 0x3b2bb4u;
    // NOP
label_3b2bb8:
    // 0x3b2bb8: 0x0  nop
    ctx->pc = 0x3b2bb8u;
    // NOP
label_3b2bbc:
    // 0x3b2bbc: 0x0  nop
    ctx->pc = 0x3b2bbcu;
    // NOP
label_3b2bc0:
    // 0x3b2bc0: 0x0  nop
    ctx->pc = 0x3b2bc0u;
    // NOP
label_3b2bc4:
    // 0x3b2bc4: 0x0  nop
    ctx->pc = 0x3b2bc4u;
    // NOP
label_3b2bc8:
    // 0x3b2bc8: 0x0  nop
    ctx->pc = 0x3b2bc8u;
    // NOP
label_3b2bcc:
    // 0x3b2bcc: 0x0  nop
    ctx->pc = 0x3b2bccu;
    // NOP
label_3b2bd0:
    // 0x3b2bd0: 0x0  nop
    ctx->pc = 0x3b2bd0u;
    // NOP
label_3b2bd4:
    // 0x3b2bd4: 0x0  nop
    ctx->pc = 0x3b2bd4u;
    // NOP
label_3b2bd8:
    // 0x3b2bd8: 0x0  nop
    ctx->pc = 0x3b2bd8u;
    // NOP
label_3b2bdc:
    // 0x3b2bdc: 0x0  nop
    ctx->pc = 0x3b2bdcu;
    // NOP
label_3b2be0:
    // 0x3b2be0: 0x0  nop
    ctx->pc = 0x3b2be0u;
    // NOP
label_3b2be4:
    // 0x3b2be4: 0x0  nop
    ctx->pc = 0x3b2be4u;
    // NOP
label_3b2be8:
    // 0x3b2be8: 0x0  nop
    ctx->pc = 0x3b2be8u;
    // NOP
label_3b2bec:
    // 0x3b2bec: 0x0  nop
    ctx->pc = 0x3b2becu;
    // NOP
label_3b2bf0:
    // 0x3b2bf0: 0x0  nop
    ctx->pc = 0x3b2bf0u;
    // NOP
label_3b2bf4:
    // 0x3b2bf4: 0x0  nop
    ctx->pc = 0x3b2bf4u;
    // NOP
label_3b2bf8:
    // 0x3b2bf8: 0x0  nop
    ctx->pc = 0x3b2bf8u;
    // NOP
label_3b2bfc:
    // 0x3b2bfc: 0x0  nop
    ctx->pc = 0x3b2bfcu;
    // NOP
label_3b2c00:
    // 0x3b2c00: 0x100000  sll         $zero, $s0, 0
    ctx->pc = 0x3b2c00u;
    
label_3b2c04:
    // 0x3b2c04: 0x1f00000  .word       0x01F00000                   # sll         $zero, $s0, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2c04u;
    
label_3b2c08:
    // 0x3b2c08: 0x0  nop
    ctx->pc = 0x3b2c08u;
    // NOP
label_3b2c0c:
    // 0x3b2c0c: 0x0  nop
    ctx->pc = 0x3b2c0cu;
    // NOP
label_3b2c10:
    // 0x3b2c10: 0x0  nop
    ctx->pc = 0x3b2c10u;
    // NOP
label_3b2c14:
    // 0x3b2c14: 0x0  nop
    ctx->pc = 0x3b2c14u;
    // NOP
label_3b2c18:
    // 0x3b2c18: 0x0  nop
    ctx->pc = 0x3b2c18u;
    // NOP
label_3b2c1c:
    // 0x3b2c1c: 0x0  nop
    ctx->pc = 0x3b2c1cu;
    // NOP
label_3b2c20:
    // 0x3b2c20: 0x0  nop
    ctx->pc = 0x3b2c20u;
    // NOP
label_3b2c24:
    // 0x3b2c24: 0x0  nop
    ctx->pc = 0x3b2c24u;
    // NOP
label_3b2c28:
    // 0x3b2c28: 0x0  nop
    ctx->pc = 0x3b2c28u;
    // NOP
label_3b2c2c:
    // 0x3b2c2c: 0x0  nop
    ctx->pc = 0x3b2c2cu;
    // NOP
label_3b2c30:
    // 0x3b2c30: 0x0  nop
    ctx->pc = 0x3b2c30u;
    // NOP
label_3b2c34:
    // 0x3b2c34: 0x0  nop
    ctx->pc = 0x3b2c34u;
    // NOP
label_3b2c38:
    // 0x3b2c38: 0x0  nop
    ctx->pc = 0x3b2c38u;
    // NOP
label_3b2c3c:
    // 0x3b2c3c: 0x0  nop
    ctx->pc = 0x3b2c3cu;
    // NOP
label_3b2c40:
    // 0x3b2c40: 0x0  nop
    ctx->pc = 0x3b2c40u;
    // NOP
label_3b2c44:
    // 0x3b2c44: 0x0  nop
    ctx->pc = 0x3b2c44u;
    // NOP
label_3b2c48:
    // 0x3b2c48: 0x0  nop
    ctx->pc = 0x3b2c48u;
    // NOP
label_3b2c4c:
    // 0x3b2c4c: 0x0  nop
    ctx->pc = 0x3b2c4cu;
    // NOP
label_3b2c50:
    // 0x3b2c50: 0x0  nop
    ctx->pc = 0x3b2c50u;
    // NOP
label_3b2c54:
    // 0x3b2c54: 0x0  nop
    ctx->pc = 0x3b2c54u;
    // NOP
label_3b2c58:
    // 0x3b2c58: 0x0  nop
    ctx->pc = 0x3b2c58u;
    // NOP
label_3b2c5c:
    // 0x3b2c5c: 0x0  nop
    ctx->pc = 0x3b2c5cu;
    // NOP
label_3b2c60:
    // 0x3b2c60: 0x0  nop
    ctx->pc = 0x3b2c60u;
    // NOP
label_3b2c64:
    // 0x3b2c64: 0x0  nop
    ctx->pc = 0x3b2c64u;
    // NOP
label_3b2c68:
    // 0x3b2c68: 0x0  nop
    ctx->pc = 0x3b2c68u;
    // NOP
label_3b2c6c:
    // 0x3b2c6c: 0x0  nop
    ctx->pc = 0x3b2c6cu;
    // NOP
label_3b2c70:
    // 0x3b2c70: 0x0  nop
    ctx->pc = 0x3b2c70u;
    // NOP
label_3b2c74:
    // 0x3b2c74: 0x0  nop
    ctx->pc = 0x3b2c74u;
    // NOP
label_3b2c78:
    // 0x3b2c78: 0x0  nop
    ctx->pc = 0x3b2c78u;
    // NOP
label_3b2c7c:
    // 0x3b2c7c: 0x0  nop
    ctx->pc = 0x3b2c7cu;
    // NOP
label_3b2c80:
    // 0x3b2c80: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3b2c80u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x3B2C80 raw=0x00000001");
label_3b2c84:
    // 0x3b2c84: 0x0  nop
    ctx->pc = 0x3b2c84u;
    // NOP
label_3b2c88:
    // 0x3b2c88: 0x0  nop
    ctx->pc = 0x3b2c88u;
    // NOP
label_3b2c8c:
    // 0x3b2c8c: 0x0  nop
    ctx->pc = 0x3b2c8cu;
    // NOP
label_3b2c90:
    // 0x3b2c90: 0x0  nop
    ctx->pc = 0x3b2c90u;
    // NOP
label_3b2c94:
    // 0x3b2c94: 0x0  nop
    ctx->pc = 0x3b2c94u;
    // NOP
label_3b2c98:
    // 0x3b2c98: 0x0  nop
    ctx->pc = 0x3b2c98u;
    // NOP
label_3b2c9c:
    // 0x3b2c9c: 0x0  nop
    ctx->pc = 0x3b2c9cu;
    // NOP
label_3b2ca0:
    // 0x3b2ca0: 0x0  nop
    ctx->pc = 0x3b2ca0u;
    // NOP
label_3b2ca4:
    // 0x3b2ca4: 0x0  nop
    ctx->pc = 0x3b2ca4u;
    // NOP
label_3b2ca8:
    // 0x3b2ca8: 0x0  nop
    ctx->pc = 0x3b2ca8u;
    // NOP
label_3b2cac:
    // 0x3b2cac: 0x0  nop
    ctx->pc = 0x3b2cacu;
    // NOP
label_3b2cb0:
    // 0x3b2cb0: 0x0  nop
    ctx->pc = 0x3b2cb0u;
    // NOP
label_3b2cb4:
    // 0x3b2cb4: 0x0  nop
    ctx->pc = 0x3b2cb4u;
    // NOP
label_3b2cb8:
    // 0x3b2cb8: 0x0  nop
    ctx->pc = 0x3b2cb8u;
    // NOP
label_3b2cbc:
    // 0x3b2cbc: 0x0  nop
    ctx->pc = 0x3b2cbcu;
    // NOP
label_3b2cc0:
    // 0x3b2cc0: 0x0  nop
    ctx->pc = 0x3b2cc0u;
    // NOP
label_3b2cc4:
    // 0x3b2cc4: 0x0  nop
    ctx->pc = 0x3b2cc4u;
    // NOP
label_3b2cc8:
    // 0x3b2cc8: 0x0  nop
    ctx->pc = 0x3b2cc8u;
    // NOP
label_3b2ccc:
    // 0x3b2ccc: 0x0  nop
    ctx->pc = 0x3b2cccu;
    // NOP
label_3b2cd0:
    // 0x3b2cd0: 0x0  nop
    ctx->pc = 0x3b2cd0u;
    // NOP
label_3b2cd4:
    // 0x3b2cd4: 0x0  nop
    ctx->pc = 0x3b2cd4u;
    // NOP
label_3b2cd8:
    // 0x3b2cd8: 0x0  nop
    ctx->pc = 0x3b2cd8u;
    // NOP
label_3b2cdc:
    // 0x3b2cdc: 0x0  nop
    ctx->pc = 0x3b2cdcu;
    // NOP
label_3b2ce0:
    // 0x3b2ce0: 0x0  nop
    ctx->pc = 0x3b2ce0u;
    // NOP
label_3b2ce4:
    // 0x3b2ce4: 0x0  nop
    ctx->pc = 0x3b2ce4u;
    // NOP
label_3b2ce8:
    // 0x3b2ce8: 0x0  nop
    ctx->pc = 0x3b2ce8u;
    // NOP
label_3b2cec:
    // 0x3b2cec: 0x0  nop
    ctx->pc = 0x3b2cecu;
    // NOP
label_3b2cf0:
    // 0x3b2cf0: 0x0  nop
    ctx->pc = 0x3b2cf0u;
    // NOP
label_3b2cf4:
    // 0x3b2cf4: 0x0  nop
    ctx->pc = 0x3b2cf4u;
    // NOP
label_3b2cf8:
    // 0x3b2cf8: 0x0  nop
    ctx->pc = 0x3b2cf8u;
    // NOP
label_3b2cfc:
    // 0x3b2cfc: 0x0  nop
    ctx->pc = 0x3b2cfcu;
    // NOP
    ctx->pc = 0x3b2d00u;
}
