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

// Function: Om18_R1_mv01
// Address: 0x316b30 - 0x318378
void Om18_R1_mv01_0x316b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om18_R1_mv01_0x316b30");
#endif

    switch (ctx->pc) {
        case 0x316b30u: goto label_316b30;
        case 0x316b34u: goto label_316b34;
        case 0x316b38u: goto label_316b38;
        case 0x316b3cu: goto label_316b3c;
        case 0x316b40u: goto label_316b40;
        case 0x316b44u: goto label_316b44;
        case 0x316b48u: goto label_316b48;
        case 0x316b4cu: goto label_316b4c;
        case 0x316b50u: goto label_316b50;
        case 0x316b54u: goto label_316b54;
        case 0x316b58u: goto label_316b58;
        case 0x316b5cu: goto label_316b5c;
        case 0x316b60u: goto label_316b60;
        case 0x316b64u: goto label_316b64;
        case 0x316b68u: goto label_316b68;
        case 0x316b6cu: goto label_316b6c;
        case 0x316b70u: goto label_316b70;
        case 0x316b74u: goto label_316b74;
        case 0x316b78u: goto label_316b78;
        case 0x316b7cu: goto label_316b7c;
        case 0x316b80u: goto label_316b80;
        case 0x316b84u: goto label_316b84;
        case 0x316b88u: goto label_316b88;
        case 0x316b8cu: goto label_316b8c;
        case 0x316b90u: goto label_316b90;
        case 0x316b94u: goto label_316b94;
        case 0x316b98u: goto label_316b98;
        case 0x316b9cu: goto label_316b9c;
        case 0x316ba0u: goto label_316ba0;
        case 0x316ba4u: goto label_316ba4;
        case 0x316ba8u: goto label_316ba8;
        case 0x316bacu: goto label_316bac;
        case 0x316bb0u: goto label_316bb0;
        case 0x316bb4u: goto label_316bb4;
        case 0x316bb8u: goto label_316bb8;
        case 0x316bbcu: goto label_316bbc;
        case 0x316bc0u: goto label_316bc0;
        case 0x316bc4u: goto label_316bc4;
        case 0x316bc8u: goto label_316bc8;
        case 0x316bccu: goto label_316bcc;
        case 0x316bd0u: goto label_316bd0;
        case 0x316bd4u: goto label_316bd4;
        case 0x316bd8u: goto label_316bd8;
        case 0x316bdcu: goto label_316bdc;
        case 0x316be0u: goto label_316be0;
        case 0x316be4u: goto label_316be4;
        case 0x316be8u: goto label_316be8;
        case 0x316becu: goto label_316bec;
        case 0x316bf0u: goto label_316bf0;
        case 0x316bf4u: goto label_316bf4;
        case 0x316bf8u: goto label_316bf8;
        case 0x316bfcu: goto label_316bfc;
        case 0x316c00u: goto label_316c00;
        case 0x316c04u: goto label_316c04;
        case 0x316c08u: goto label_316c08;
        case 0x316c0cu: goto label_316c0c;
        case 0x316c10u: goto label_316c10;
        case 0x316c14u: goto label_316c14;
        case 0x316c18u: goto label_316c18;
        case 0x316c1cu: goto label_316c1c;
        case 0x316c20u: goto label_316c20;
        case 0x316c24u: goto label_316c24;
        case 0x316c28u: goto label_316c28;
        case 0x316c2cu: goto label_316c2c;
        case 0x316c30u: goto label_316c30;
        case 0x316c34u: goto label_316c34;
        case 0x316c38u: goto label_316c38;
        case 0x316c3cu: goto label_316c3c;
        case 0x316c40u: goto label_316c40;
        case 0x316c44u: goto label_316c44;
        case 0x316c48u: goto label_316c48;
        case 0x316c4cu: goto label_316c4c;
        case 0x316c50u: goto label_316c50;
        case 0x316c54u: goto label_316c54;
        case 0x316c58u: goto label_316c58;
        case 0x316c5cu: goto label_316c5c;
        case 0x316c60u: goto label_316c60;
        case 0x316c64u: goto label_316c64;
        case 0x316c68u: goto label_316c68;
        case 0x316c6cu: goto label_316c6c;
        case 0x316c70u: goto label_316c70;
        case 0x316c74u: goto label_316c74;
        case 0x316c78u: goto label_316c78;
        case 0x316c7cu: goto label_316c7c;
        case 0x316c80u: goto label_316c80;
        case 0x316c84u: goto label_316c84;
        case 0x316c88u: goto label_316c88;
        case 0x316c8cu: goto label_316c8c;
        case 0x316c90u: goto label_316c90;
        case 0x316c94u: goto label_316c94;
        case 0x316c98u: goto label_316c98;
        case 0x316c9cu: goto label_316c9c;
        case 0x316ca0u: goto label_316ca0;
        case 0x316ca4u: goto label_316ca4;
        case 0x316ca8u: goto label_316ca8;
        case 0x316cacu: goto label_316cac;
        case 0x316cb0u: goto label_316cb0;
        case 0x316cb4u: goto label_316cb4;
        case 0x316cb8u: goto label_316cb8;
        case 0x316cbcu: goto label_316cbc;
        case 0x316cc0u: goto label_316cc0;
        case 0x316cc4u: goto label_316cc4;
        case 0x316cc8u: goto label_316cc8;
        case 0x316cccu: goto label_316ccc;
        case 0x316cd0u: goto label_316cd0;
        case 0x316cd4u: goto label_316cd4;
        case 0x316cd8u: goto label_316cd8;
        case 0x316cdcu: goto label_316cdc;
        case 0x316ce0u: goto label_316ce0;
        case 0x316ce4u: goto label_316ce4;
        case 0x316ce8u: goto label_316ce8;
        case 0x316cecu: goto label_316cec;
        case 0x316cf0u: goto label_316cf0;
        case 0x316cf4u: goto label_316cf4;
        case 0x316cf8u: goto label_316cf8;
        case 0x316cfcu: goto label_316cfc;
        case 0x316d00u: goto label_316d00;
        case 0x316d04u: goto label_316d04;
        case 0x316d08u: goto label_316d08;
        case 0x316d0cu: goto label_316d0c;
        case 0x316d10u: goto label_316d10;
        case 0x316d14u: goto label_316d14;
        case 0x316d18u: goto label_316d18;
        case 0x316d1cu: goto label_316d1c;
        case 0x316d20u: goto label_316d20;
        case 0x316d24u: goto label_316d24;
        case 0x316d28u: goto label_316d28;
        case 0x316d2cu: goto label_316d2c;
        case 0x316d30u: goto label_316d30;
        case 0x316d34u: goto label_316d34;
        case 0x316d38u: goto label_316d38;
        case 0x316d3cu: goto label_316d3c;
        case 0x316d40u: goto label_316d40;
        case 0x316d44u: goto label_316d44;
        case 0x316d48u: goto label_316d48;
        case 0x316d4cu: goto label_316d4c;
        case 0x316d50u: goto label_316d50;
        case 0x316d54u: goto label_316d54;
        case 0x316d58u: goto label_316d58;
        case 0x316d5cu: goto label_316d5c;
        case 0x316d60u: goto label_316d60;
        case 0x316d64u: goto label_316d64;
        case 0x316d68u: goto label_316d68;
        case 0x316d6cu: goto label_316d6c;
        case 0x316d70u: goto label_316d70;
        case 0x316d74u: goto label_316d74;
        case 0x316d78u: goto label_316d78;
        case 0x316d7cu: goto label_316d7c;
        case 0x316d80u: goto label_316d80;
        case 0x316d84u: goto label_316d84;
        case 0x316d88u: goto label_316d88;
        case 0x316d8cu: goto label_316d8c;
        case 0x316d90u: goto label_316d90;
        case 0x316d94u: goto label_316d94;
        case 0x316d98u: goto label_316d98;
        case 0x316d9cu: goto label_316d9c;
        case 0x316da0u: goto label_316da0;
        case 0x316da4u: goto label_316da4;
        case 0x316da8u: goto label_316da8;
        case 0x316dacu: goto label_316dac;
        case 0x316db0u: goto label_316db0;
        case 0x316db4u: goto label_316db4;
        case 0x316db8u: goto label_316db8;
        case 0x316dbcu: goto label_316dbc;
        case 0x316dc0u: goto label_316dc0;
        case 0x316dc4u: goto label_316dc4;
        case 0x316dc8u: goto label_316dc8;
        case 0x316dccu: goto label_316dcc;
        case 0x316dd0u: goto label_316dd0;
        case 0x316dd4u: goto label_316dd4;
        case 0x316dd8u: goto label_316dd8;
        case 0x316ddcu: goto label_316ddc;
        case 0x316de0u: goto label_316de0;
        case 0x316de4u: goto label_316de4;
        case 0x316de8u: goto label_316de8;
        case 0x316decu: goto label_316dec;
        case 0x316df0u: goto label_316df0;
        case 0x316df4u: goto label_316df4;
        case 0x316df8u: goto label_316df8;
        case 0x316dfcu: goto label_316dfc;
        case 0x316e00u: goto label_316e00;
        case 0x316e04u: goto label_316e04;
        case 0x316e08u: goto label_316e08;
        case 0x316e0cu: goto label_316e0c;
        case 0x316e10u: goto label_316e10;
        case 0x316e14u: goto label_316e14;
        case 0x316e18u: goto label_316e18;
        case 0x316e1cu: goto label_316e1c;
        case 0x316e20u: goto label_316e20;
        case 0x316e24u: goto label_316e24;
        case 0x316e28u: goto label_316e28;
        case 0x316e2cu: goto label_316e2c;
        case 0x316e30u: goto label_316e30;
        case 0x316e34u: goto label_316e34;
        case 0x316e38u: goto label_316e38;
        case 0x316e3cu: goto label_316e3c;
        case 0x316e40u: goto label_316e40;
        case 0x316e44u: goto label_316e44;
        case 0x316e48u: goto label_316e48;
        case 0x316e4cu: goto label_316e4c;
        case 0x316e50u: goto label_316e50;
        case 0x316e54u: goto label_316e54;
        case 0x316e58u: goto label_316e58;
        case 0x316e5cu: goto label_316e5c;
        case 0x316e60u: goto label_316e60;
        case 0x316e64u: goto label_316e64;
        case 0x316e68u: goto label_316e68;
        case 0x316e6cu: goto label_316e6c;
        case 0x316e70u: goto label_316e70;
        case 0x316e74u: goto label_316e74;
        case 0x316e78u: goto label_316e78;
        case 0x316e7cu: goto label_316e7c;
        case 0x316e80u: goto label_316e80;
        case 0x316e84u: goto label_316e84;
        case 0x316e88u: goto label_316e88;
        case 0x316e8cu: goto label_316e8c;
        case 0x316e90u: goto label_316e90;
        case 0x316e94u: goto label_316e94;
        case 0x316e98u: goto label_316e98;
        case 0x316e9cu: goto label_316e9c;
        case 0x316ea0u: goto label_316ea0;
        case 0x316ea4u: goto label_316ea4;
        case 0x316ea8u: goto label_316ea8;
        case 0x316eacu: goto label_316eac;
        case 0x316eb0u: goto label_316eb0;
        case 0x316eb4u: goto label_316eb4;
        case 0x316eb8u: goto label_316eb8;
        case 0x316ebcu: goto label_316ebc;
        case 0x316ec0u: goto label_316ec0;
        case 0x316ec4u: goto label_316ec4;
        case 0x316ec8u: goto label_316ec8;
        case 0x316eccu: goto label_316ecc;
        case 0x316ed0u: goto label_316ed0;
        case 0x316ed4u: goto label_316ed4;
        case 0x316ed8u: goto label_316ed8;
        case 0x316edcu: goto label_316edc;
        case 0x316ee0u: goto label_316ee0;
        case 0x316ee4u: goto label_316ee4;
        case 0x316ee8u: goto label_316ee8;
        case 0x316eecu: goto label_316eec;
        case 0x316ef0u: goto label_316ef0;
        case 0x316ef4u: goto label_316ef4;
        case 0x316ef8u: goto label_316ef8;
        case 0x316efcu: goto label_316efc;
        case 0x316f00u: goto label_316f00;
        case 0x316f04u: goto label_316f04;
        case 0x316f08u: goto label_316f08;
        case 0x316f0cu: goto label_316f0c;
        case 0x316f10u: goto label_316f10;
        case 0x316f14u: goto label_316f14;
        case 0x316f18u: goto label_316f18;
        case 0x316f1cu: goto label_316f1c;
        case 0x316f20u: goto label_316f20;
        case 0x316f24u: goto label_316f24;
        case 0x316f28u: goto label_316f28;
        case 0x316f2cu: goto label_316f2c;
        case 0x316f30u: goto label_316f30;
        case 0x316f34u: goto label_316f34;
        case 0x316f38u: goto label_316f38;
        case 0x316f3cu: goto label_316f3c;
        case 0x316f40u: goto label_316f40;
        case 0x316f44u: goto label_316f44;
        case 0x316f48u: goto label_316f48;
        case 0x316f4cu: goto label_316f4c;
        case 0x316f50u: goto label_316f50;
        case 0x316f54u: goto label_316f54;
        case 0x316f58u: goto label_316f58;
        case 0x316f5cu: goto label_316f5c;
        case 0x316f60u: goto label_316f60;
        case 0x316f64u: goto label_316f64;
        case 0x316f68u: goto label_316f68;
        case 0x316f6cu: goto label_316f6c;
        case 0x316f70u: goto label_316f70;
        case 0x316f74u: goto label_316f74;
        case 0x316f78u: goto label_316f78;
        case 0x316f7cu: goto label_316f7c;
        case 0x316f80u: goto label_316f80;
        case 0x316f84u: goto label_316f84;
        case 0x316f88u: goto label_316f88;
        case 0x316f8cu: goto label_316f8c;
        case 0x316f90u: goto label_316f90;
        case 0x316f94u: goto label_316f94;
        case 0x316f98u: goto label_316f98;
        case 0x316f9cu: goto label_316f9c;
        case 0x316fa0u: goto label_316fa0;
        case 0x316fa4u: goto label_316fa4;
        case 0x316fa8u: goto label_316fa8;
        case 0x316facu: goto label_316fac;
        case 0x316fb0u: goto label_316fb0;
        case 0x316fb4u: goto label_316fb4;
        case 0x316fb8u: goto label_316fb8;
        case 0x316fbcu: goto label_316fbc;
        case 0x316fc0u: goto label_316fc0;
        case 0x316fc4u: goto label_316fc4;
        case 0x316fc8u: goto label_316fc8;
        case 0x316fccu: goto label_316fcc;
        case 0x316fd0u: goto label_316fd0;
        case 0x316fd4u: goto label_316fd4;
        case 0x316fd8u: goto label_316fd8;
        case 0x316fdcu: goto label_316fdc;
        case 0x316fe0u: goto label_316fe0;
        case 0x316fe4u: goto label_316fe4;
        case 0x316fe8u: goto label_316fe8;
        case 0x316fecu: goto label_316fec;
        case 0x316ff0u: goto label_316ff0;
        case 0x316ff4u: goto label_316ff4;
        case 0x316ff8u: goto label_316ff8;
        case 0x316ffcu: goto label_316ffc;
        case 0x317000u: goto label_317000;
        case 0x317004u: goto label_317004;
        case 0x317008u: goto label_317008;
        case 0x31700cu: goto label_31700c;
        case 0x317010u: goto label_317010;
        case 0x317014u: goto label_317014;
        case 0x317018u: goto label_317018;
        case 0x31701cu: goto label_31701c;
        case 0x317020u: goto label_317020;
        case 0x317024u: goto label_317024;
        case 0x317028u: goto label_317028;
        case 0x31702cu: goto label_31702c;
        case 0x317030u: goto label_317030;
        case 0x317034u: goto label_317034;
        case 0x317038u: goto label_317038;
        case 0x31703cu: goto label_31703c;
        case 0x317040u: goto label_317040;
        case 0x317044u: goto label_317044;
        case 0x317048u: goto label_317048;
        case 0x31704cu: goto label_31704c;
        case 0x317050u: goto label_317050;
        case 0x317054u: goto label_317054;
        case 0x317058u: goto label_317058;
        case 0x31705cu: goto label_31705c;
        case 0x317060u: goto label_317060;
        case 0x317064u: goto label_317064;
        case 0x317068u: goto label_317068;
        case 0x31706cu: goto label_31706c;
        case 0x317070u: goto label_317070;
        case 0x317074u: goto label_317074;
        case 0x317078u: goto label_317078;
        case 0x31707cu: goto label_31707c;
        case 0x317080u: goto label_317080;
        case 0x317084u: goto label_317084;
        case 0x317088u: goto label_317088;
        case 0x31708cu: goto label_31708c;
        case 0x317090u: goto label_317090;
        case 0x317094u: goto label_317094;
        case 0x317098u: goto label_317098;
        case 0x31709cu: goto label_31709c;
        case 0x3170a0u: goto label_3170a0;
        case 0x3170a4u: goto label_3170a4;
        case 0x3170a8u: goto label_3170a8;
        case 0x3170acu: goto label_3170ac;
        case 0x3170b0u: goto label_3170b0;
        case 0x3170b4u: goto label_3170b4;
        case 0x3170b8u: goto label_3170b8;
        case 0x3170bcu: goto label_3170bc;
        case 0x3170c0u: goto label_3170c0;
        case 0x3170c4u: goto label_3170c4;
        case 0x3170c8u: goto label_3170c8;
        case 0x3170ccu: goto label_3170cc;
        case 0x3170d0u: goto label_3170d0;
        case 0x3170d4u: goto label_3170d4;
        case 0x3170d8u: goto label_3170d8;
        case 0x3170dcu: goto label_3170dc;
        case 0x3170e0u: goto label_3170e0;
        case 0x3170e4u: goto label_3170e4;
        case 0x3170e8u: goto label_3170e8;
        case 0x3170ecu: goto label_3170ec;
        case 0x3170f0u: goto label_3170f0;
        case 0x3170f4u: goto label_3170f4;
        case 0x3170f8u: goto label_3170f8;
        case 0x3170fcu: goto label_3170fc;
        case 0x317100u: goto label_317100;
        case 0x317104u: goto label_317104;
        case 0x317108u: goto label_317108;
        case 0x31710cu: goto label_31710c;
        case 0x317110u: goto label_317110;
        case 0x317114u: goto label_317114;
        case 0x317118u: goto label_317118;
        case 0x31711cu: goto label_31711c;
        case 0x317120u: goto label_317120;
        case 0x317124u: goto label_317124;
        case 0x317128u: goto label_317128;
        case 0x31712cu: goto label_31712c;
        case 0x317130u: goto label_317130;
        case 0x317134u: goto label_317134;
        case 0x317138u: goto label_317138;
        case 0x31713cu: goto label_31713c;
        case 0x317140u: goto label_317140;
        case 0x317144u: goto label_317144;
        case 0x317148u: goto label_317148;
        case 0x31714cu: goto label_31714c;
        case 0x317150u: goto label_317150;
        case 0x317154u: goto label_317154;
        case 0x317158u: goto label_317158;
        case 0x31715cu: goto label_31715c;
        case 0x317160u: goto label_317160;
        case 0x317164u: goto label_317164;
        case 0x317168u: goto label_317168;
        case 0x31716cu: goto label_31716c;
        case 0x317170u: goto label_317170;
        case 0x317174u: goto label_317174;
        case 0x317178u: goto label_317178;
        case 0x31717cu: goto label_31717c;
        case 0x317180u: goto label_317180;
        case 0x317184u: goto label_317184;
        case 0x317188u: goto label_317188;
        case 0x31718cu: goto label_31718c;
        case 0x317190u: goto label_317190;
        case 0x317194u: goto label_317194;
        case 0x317198u: goto label_317198;
        case 0x31719cu: goto label_31719c;
        case 0x3171a0u: goto label_3171a0;
        case 0x3171a4u: goto label_3171a4;
        case 0x3171a8u: goto label_3171a8;
        case 0x3171acu: goto label_3171ac;
        case 0x3171b0u: goto label_3171b0;
        case 0x3171b4u: goto label_3171b4;
        case 0x3171b8u: goto label_3171b8;
        case 0x3171bcu: goto label_3171bc;
        case 0x3171c0u: goto label_3171c0;
        case 0x3171c4u: goto label_3171c4;
        case 0x3171c8u: goto label_3171c8;
        case 0x3171ccu: goto label_3171cc;
        case 0x3171d0u: goto label_3171d0;
        case 0x3171d4u: goto label_3171d4;
        case 0x3171d8u: goto label_3171d8;
        case 0x3171dcu: goto label_3171dc;
        case 0x3171e0u: goto label_3171e0;
        case 0x3171e4u: goto label_3171e4;
        case 0x3171e8u: goto label_3171e8;
        case 0x3171ecu: goto label_3171ec;
        case 0x3171f0u: goto label_3171f0;
        case 0x3171f4u: goto label_3171f4;
        case 0x3171f8u: goto label_3171f8;
        case 0x3171fcu: goto label_3171fc;
        case 0x317200u: goto label_317200;
        case 0x317204u: goto label_317204;
        case 0x317208u: goto label_317208;
        case 0x31720cu: goto label_31720c;
        case 0x317210u: goto label_317210;
        case 0x317214u: goto label_317214;
        case 0x317218u: goto label_317218;
        case 0x31721cu: goto label_31721c;
        case 0x317220u: goto label_317220;
        case 0x317224u: goto label_317224;
        case 0x317228u: goto label_317228;
        case 0x31722cu: goto label_31722c;
        case 0x317230u: goto label_317230;
        case 0x317234u: goto label_317234;
        case 0x317238u: goto label_317238;
        case 0x31723cu: goto label_31723c;
        case 0x317240u: goto label_317240;
        case 0x317244u: goto label_317244;
        case 0x317248u: goto label_317248;
        case 0x31724cu: goto label_31724c;
        case 0x317250u: goto label_317250;
        case 0x317254u: goto label_317254;
        case 0x317258u: goto label_317258;
        case 0x31725cu: goto label_31725c;
        case 0x317260u: goto label_317260;
        case 0x317264u: goto label_317264;
        case 0x317268u: goto label_317268;
        case 0x31726cu: goto label_31726c;
        case 0x317270u: goto label_317270;
        case 0x317274u: goto label_317274;
        case 0x317278u: goto label_317278;
        case 0x31727cu: goto label_31727c;
        case 0x317280u: goto label_317280;
        case 0x317284u: goto label_317284;
        case 0x317288u: goto label_317288;
        case 0x31728cu: goto label_31728c;
        case 0x317290u: goto label_317290;
        case 0x317294u: goto label_317294;
        case 0x317298u: goto label_317298;
        case 0x31729cu: goto label_31729c;
        case 0x3172a0u: goto label_3172a0;
        case 0x3172a4u: goto label_3172a4;
        case 0x3172a8u: goto label_3172a8;
        case 0x3172acu: goto label_3172ac;
        case 0x3172b0u: goto label_3172b0;
        case 0x3172b4u: goto label_3172b4;
        case 0x3172b8u: goto label_3172b8;
        case 0x3172bcu: goto label_3172bc;
        case 0x3172c0u: goto label_3172c0;
        case 0x3172c4u: goto label_3172c4;
        case 0x3172c8u: goto label_3172c8;
        case 0x3172ccu: goto label_3172cc;
        case 0x3172d0u: goto label_3172d0;
        case 0x3172d4u: goto label_3172d4;
        case 0x3172d8u: goto label_3172d8;
        case 0x3172dcu: goto label_3172dc;
        case 0x3172e0u: goto label_3172e0;
        case 0x3172e4u: goto label_3172e4;
        case 0x3172e8u: goto label_3172e8;
        case 0x3172ecu: goto label_3172ec;
        case 0x3172f0u: goto label_3172f0;
        case 0x3172f4u: goto label_3172f4;
        case 0x3172f8u: goto label_3172f8;
        case 0x3172fcu: goto label_3172fc;
        case 0x317300u: goto label_317300;
        case 0x317304u: goto label_317304;
        case 0x317308u: goto label_317308;
        case 0x31730cu: goto label_31730c;
        case 0x317310u: goto label_317310;
        case 0x317314u: goto label_317314;
        case 0x317318u: goto label_317318;
        case 0x31731cu: goto label_31731c;
        case 0x317320u: goto label_317320;
        case 0x317324u: goto label_317324;
        case 0x317328u: goto label_317328;
        case 0x31732cu: goto label_31732c;
        case 0x317330u: goto label_317330;
        case 0x317334u: goto label_317334;
        case 0x317338u: goto label_317338;
        case 0x31733cu: goto label_31733c;
        case 0x317340u: goto label_317340;
        case 0x317344u: goto label_317344;
        case 0x317348u: goto label_317348;
        case 0x31734cu: goto label_31734c;
        case 0x317350u: goto label_317350;
        case 0x317354u: goto label_317354;
        case 0x317358u: goto label_317358;
        case 0x31735cu: goto label_31735c;
        case 0x317360u: goto label_317360;
        case 0x317364u: goto label_317364;
        case 0x317368u: goto label_317368;
        case 0x31736cu: goto label_31736c;
        case 0x317370u: goto label_317370;
        case 0x317374u: goto label_317374;
        case 0x317378u: goto label_317378;
        case 0x31737cu: goto label_31737c;
        case 0x317380u: goto label_317380;
        case 0x317384u: goto label_317384;
        case 0x317388u: goto label_317388;
        case 0x31738cu: goto label_31738c;
        case 0x317390u: goto label_317390;
        case 0x317394u: goto label_317394;
        case 0x317398u: goto label_317398;
        case 0x31739cu: goto label_31739c;
        case 0x3173a0u: goto label_3173a0;
        case 0x3173a4u: goto label_3173a4;
        case 0x3173a8u: goto label_3173a8;
        case 0x3173acu: goto label_3173ac;
        case 0x3173b0u: goto label_3173b0;
        case 0x3173b4u: goto label_3173b4;
        case 0x3173b8u: goto label_3173b8;
        case 0x3173bcu: goto label_3173bc;
        case 0x3173c0u: goto label_3173c0;
        case 0x3173c4u: goto label_3173c4;
        case 0x3173c8u: goto label_3173c8;
        case 0x3173ccu: goto label_3173cc;
        case 0x3173d0u: goto label_3173d0;
        case 0x3173d4u: goto label_3173d4;
        case 0x3173d8u: goto label_3173d8;
        case 0x3173dcu: goto label_3173dc;
        case 0x3173e0u: goto label_3173e0;
        case 0x3173e4u: goto label_3173e4;
        case 0x3173e8u: goto label_3173e8;
        case 0x3173ecu: goto label_3173ec;
        case 0x3173f0u: goto label_3173f0;
        case 0x3173f4u: goto label_3173f4;
        case 0x3173f8u: goto label_3173f8;
        case 0x3173fcu: goto label_3173fc;
        case 0x317400u: goto label_317400;
        case 0x317404u: goto label_317404;
        case 0x317408u: goto label_317408;
        case 0x31740cu: goto label_31740c;
        case 0x317410u: goto label_317410;
        case 0x317414u: goto label_317414;
        case 0x317418u: goto label_317418;
        case 0x31741cu: goto label_31741c;
        case 0x317420u: goto label_317420;
        case 0x317424u: goto label_317424;
        case 0x317428u: goto label_317428;
        case 0x31742cu: goto label_31742c;
        case 0x317430u: goto label_317430;
        case 0x317434u: goto label_317434;
        case 0x317438u: goto label_317438;
        case 0x31743cu: goto label_31743c;
        case 0x317440u: goto label_317440;
        case 0x317444u: goto label_317444;
        case 0x317448u: goto label_317448;
        case 0x31744cu: goto label_31744c;
        case 0x317450u: goto label_317450;
        case 0x317454u: goto label_317454;
        case 0x317458u: goto label_317458;
        case 0x31745cu: goto label_31745c;
        case 0x317460u: goto label_317460;
        case 0x317464u: goto label_317464;
        case 0x317468u: goto label_317468;
        case 0x31746cu: goto label_31746c;
        case 0x317470u: goto label_317470;
        case 0x317474u: goto label_317474;
        case 0x317478u: goto label_317478;
        case 0x31747cu: goto label_31747c;
        case 0x317480u: goto label_317480;
        case 0x317484u: goto label_317484;
        case 0x317488u: goto label_317488;
        case 0x31748cu: goto label_31748c;
        case 0x317490u: goto label_317490;
        case 0x317494u: goto label_317494;
        case 0x317498u: goto label_317498;
        case 0x31749cu: goto label_31749c;
        case 0x3174a0u: goto label_3174a0;
        case 0x3174a4u: goto label_3174a4;
        case 0x3174a8u: goto label_3174a8;
        case 0x3174acu: goto label_3174ac;
        case 0x3174b0u: goto label_3174b0;
        case 0x3174b4u: goto label_3174b4;
        case 0x3174b8u: goto label_3174b8;
        case 0x3174bcu: goto label_3174bc;
        case 0x3174c0u: goto label_3174c0;
        case 0x3174c4u: goto label_3174c4;
        case 0x3174c8u: goto label_3174c8;
        case 0x3174ccu: goto label_3174cc;
        case 0x3174d0u: goto label_3174d0;
        case 0x3174d4u: goto label_3174d4;
        case 0x3174d8u: goto label_3174d8;
        case 0x3174dcu: goto label_3174dc;
        case 0x3174e0u: goto label_3174e0;
        case 0x3174e4u: goto label_3174e4;
        case 0x3174e8u: goto label_3174e8;
        case 0x3174ecu: goto label_3174ec;
        case 0x3174f0u: goto label_3174f0;
        case 0x3174f4u: goto label_3174f4;
        case 0x3174f8u: goto label_3174f8;
        case 0x3174fcu: goto label_3174fc;
        case 0x317500u: goto label_317500;
        case 0x317504u: goto label_317504;
        case 0x317508u: goto label_317508;
        case 0x31750cu: goto label_31750c;
        case 0x317510u: goto label_317510;
        case 0x317514u: goto label_317514;
        case 0x317518u: goto label_317518;
        case 0x31751cu: goto label_31751c;
        case 0x317520u: goto label_317520;
        case 0x317524u: goto label_317524;
        case 0x317528u: goto label_317528;
        case 0x31752cu: goto label_31752c;
        case 0x317530u: goto label_317530;
        case 0x317534u: goto label_317534;
        case 0x317538u: goto label_317538;
        case 0x31753cu: goto label_31753c;
        case 0x317540u: goto label_317540;
        case 0x317544u: goto label_317544;
        case 0x317548u: goto label_317548;
        case 0x31754cu: goto label_31754c;
        case 0x317550u: goto label_317550;
        case 0x317554u: goto label_317554;
        case 0x317558u: goto label_317558;
        case 0x31755cu: goto label_31755c;
        case 0x317560u: goto label_317560;
        case 0x317564u: goto label_317564;
        case 0x317568u: goto label_317568;
        case 0x31756cu: goto label_31756c;
        case 0x317570u: goto label_317570;
        case 0x317574u: goto label_317574;
        case 0x317578u: goto label_317578;
        case 0x31757cu: goto label_31757c;
        case 0x317580u: goto label_317580;
        case 0x317584u: goto label_317584;
        case 0x317588u: goto label_317588;
        case 0x31758cu: goto label_31758c;
        case 0x317590u: goto label_317590;
        case 0x317594u: goto label_317594;
        case 0x317598u: goto label_317598;
        case 0x31759cu: goto label_31759c;
        case 0x3175a0u: goto label_3175a0;
        case 0x3175a4u: goto label_3175a4;
        case 0x3175a8u: goto label_3175a8;
        case 0x3175acu: goto label_3175ac;
        case 0x3175b0u: goto label_3175b0;
        case 0x3175b4u: goto label_3175b4;
        case 0x3175b8u: goto label_3175b8;
        case 0x3175bcu: goto label_3175bc;
        case 0x3175c0u: goto label_3175c0;
        case 0x3175c4u: goto label_3175c4;
        case 0x3175c8u: goto label_3175c8;
        case 0x3175ccu: goto label_3175cc;
        case 0x3175d0u: goto label_3175d0;
        case 0x3175d4u: goto label_3175d4;
        case 0x3175d8u: goto label_3175d8;
        case 0x3175dcu: goto label_3175dc;
        case 0x3175e0u: goto label_3175e0;
        case 0x3175e4u: goto label_3175e4;
        case 0x3175e8u: goto label_3175e8;
        case 0x3175ecu: goto label_3175ec;
        case 0x3175f0u: goto label_3175f0;
        case 0x3175f4u: goto label_3175f4;
        case 0x3175f8u: goto label_3175f8;
        case 0x3175fcu: goto label_3175fc;
        case 0x317600u: goto label_317600;
        case 0x317604u: goto label_317604;
        case 0x317608u: goto label_317608;
        case 0x31760cu: goto label_31760c;
        case 0x317610u: goto label_317610;
        case 0x317614u: goto label_317614;
        case 0x317618u: goto label_317618;
        case 0x31761cu: goto label_31761c;
        case 0x317620u: goto label_317620;
        case 0x317624u: goto label_317624;
        case 0x317628u: goto label_317628;
        case 0x31762cu: goto label_31762c;
        case 0x317630u: goto label_317630;
        case 0x317634u: goto label_317634;
        case 0x317638u: goto label_317638;
        case 0x31763cu: goto label_31763c;
        case 0x317640u: goto label_317640;
        case 0x317644u: goto label_317644;
        case 0x317648u: goto label_317648;
        case 0x31764cu: goto label_31764c;
        case 0x317650u: goto label_317650;
        case 0x317654u: goto label_317654;
        case 0x317658u: goto label_317658;
        case 0x31765cu: goto label_31765c;
        case 0x317660u: goto label_317660;
        case 0x317664u: goto label_317664;
        case 0x317668u: goto label_317668;
        case 0x31766cu: goto label_31766c;
        case 0x317670u: goto label_317670;
        case 0x317674u: goto label_317674;
        case 0x317678u: goto label_317678;
        case 0x31767cu: goto label_31767c;
        case 0x317680u: goto label_317680;
        case 0x317684u: goto label_317684;
        case 0x317688u: goto label_317688;
        case 0x31768cu: goto label_31768c;
        case 0x317690u: goto label_317690;
        case 0x317694u: goto label_317694;
        case 0x317698u: goto label_317698;
        case 0x31769cu: goto label_31769c;
        case 0x3176a0u: goto label_3176a0;
        case 0x3176a4u: goto label_3176a4;
        case 0x3176a8u: goto label_3176a8;
        case 0x3176acu: goto label_3176ac;
        case 0x3176b0u: goto label_3176b0;
        case 0x3176b4u: goto label_3176b4;
        case 0x3176b8u: goto label_3176b8;
        case 0x3176bcu: goto label_3176bc;
        case 0x3176c0u: goto label_3176c0;
        case 0x3176c4u: goto label_3176c4;
        case 0x3176c8u: goto label_3176c8;
        case 0x3176ccu: goto label_3176cc;
        case 0x3176d0u: goto label_3176d0;
        case 0x3176d4u: goto label_3176d4;
        case 0x3176d8u: goto label_3176d8;
        case 0x3176dcu: goto label_3176dc;
        case 0x3176e0u: goto label_3176e0;
        case 0x3176e4u: goto label_3176e4;
        case 0x3176e8u: goto label_3176e8;
        case 0x3176ecu: goto label_3176ec;
        case 0x3176f0u: goto label_3176f0;
        case 0x3176f4u: goto label_3176f4;
        case 0x3176f8u: goto label_3176f8;
        case 0x3176fcu: goto label_3176fc;
        case 0x317700u: goto label_317700;
        case 0x317704u: goto label_317704;
        case 0x317708u: goto label_317708;
        case 0x31770cu: goto label_31770c;
        case 0x317710u: goto label_317710;
        case 0x317714u: goto label_317714;
        case 0x317718u: goto label_317718;
        case 0x31771cu: goto label_31771c;
        case 0x317720u: goto label_317720;
        case 0x317724u: goto label_317724;
        case 0x317728u: goto label_317728;
        case 0x31772cu: goto label_31772c;
        case 0x317730u: goto label_317730;
        case 0x317734u: goto label_317734;
        case 0x317738u: goto label_317738;
        case 0x31773cu: goto label_31773c;
        case 0x317740u: goto label_317740;
        case 0x317744u: goto label_317744;
        case 0x317748u: goto label_317748;
        case 0x31774cu: goto label_31774c;
        case 0x317750u: goto label_317750;
        case 0x317754u: goto label_317754;
        case 0x317758u: goto label_317758;
        case 0x31775cu: goto label_31775c;
        case 0x317760u: goto label_317760;
        case 0x317764u: goto label_317764;
        case 0x317768u: goto label_317768;
        case 0x31776cu: goto label_31776c;
        case 0x317770u: goto label_317770;
        case 0x317774u: goto label_317774;
        case 0x317778u: goto label_317778;
        case 0x31777cu: goto label_31777c;
        case 0x317780u: goto label_317780;
        case 0x317784u: goto label_317784;
        case 0x317788u: goto label_317788;
        case 0x31778cu: goto label_31778c;
        case 0x317790u: goto label_317790;
        case 0x317794u: goto label_317794;
        case 0x317798u: goto label_317798;
        case 0x31779cu: goto label_31779c;
        case 0x3177a0u: goto label_3177a0;
        case 0x3177a4u: goto label_3177a4;
        case 0x3177a8u: goto label_3177a8;
        case 0x3177acu: goto label_3177ac;
        case 0x3177b0u: goto label_3177b0;
        case 0x3177b4u: goto label_3177b4;
        case 0x3177b8u: goto label_3177b8;
        case 0x3177bcu: goto label_3177bc;
        case 0x3177c0u: goto label_3177c0;
        case 0x3177c4u: goto label_3177c4;
        case 0x3177c8u: goto label_3177c8;
        case 0x3177ccu: goto label_3177cc;
        case 0x3177d0u: goto label_3177d0;
        case 0x3177d4u: goto label_3177d4;
        case 0x3177d8u: goto label_3177d8;
        case 0x3177dcu: goto label_3177dc;
        case 0x3177e0u: goto label_3177e0;
        case 0x3177e4u: goto label_3177e4;
        case 0x3177e8u: goto label_3177e8;
        case 0x3177ecu: goto label_3177ec;
        case 0x3177f0u: goto label_3177f0;
        case 0x3177f4u: goto label_3177f4;
        case 0x3177f8u: goto label_3177f8;
        case 0x3177fcu: goto label_3177fc;
        case 0x317800u: goto label_317800;
        case 0x317804u: goto label_317804;
        case 0x317808u: goto label_317808;
        case 0x31780cu: goto label_31780c;
        case 0x317810u: goto label_317810;
        case 0x317814u: goto label_317814;
        case 0x317818u: goto label_317818;
        case 0x31781cu: goto label_31781c;
        case 0x317820u: goto label_317820;
        case 0x317824u: goto label_317824;
        case 0x317828u: goto label_317828;
        case 0x31782cu: goto label_31782c;
        case 0x317830u: goto label_317830;
        case 0x317834u: goto label_317834;
        case 0x317838u: goto label_317838;
        case 0x31783cu: goto label_31783c;
        case 0x317840u: goto label_317840;
        case 0x317844u: goto label_317844;
        case 0x317848u: goto label_317848;
        case 0x31784cu: goto label_31784c;
        case 0x317850u: goto label_317850;
        case 0x317854u: goto label_317854;
        case 0x317858u: goto label_317858;
        case 0x31785cu: goto label_31785c;
        case 0x317860u: goto label_317860;
        case 0x317864u: goto label_317864;
        case 0x317868u: goto label_317868;
        case 0x31786cu: goto label_31786c;
        case 0x317870u: goto label_317870;
        case 0x317874u: goto label_317874;
        case 0x317878u: goto label_317878;
        case 0x31787cu: goto label_31787c;
        case 0x317880u: goto label_317880;
        case 0x317884u: goto label_317884;
        case 0x317888u: goto label_317888;
        case 0x31788cu: goto label_31788c;
        case 0x317890u: goto label_317890;
        case 0x317894u: goto label_317894;
        case 0x317898u: goto label_317898;
        case 0x31789cu: goto label_31789c;
        case 0x3178a0u: goto label_3178a0;
        case 0x3178a4u: goto label_3178a4;
        case 0x3178a8u: goto label_3178a8;
        case 0x3178acu: goto label_3178ac;
        case 0x3178b0u: goto label_3178b0;
        case 0x3178b4u: goto label_3178b4;
        case 0x3178b8u: goto label_3178b8;
        case 0x3178bcu: goto label_3178bc;
        case 0x3178c0u: goto label_3178c0;
        case 0x3178c4u: goto label_3178c4;
        case 0x3178c8u: goto label_3178c8;
        case 0x3178ccu: goto label_3178cc;
        case 0x3178d0u: goto label_3178d0;
        case 0x3178d4u: goto label_3178d4;
        case 0x3178d8u: goto label_3178d8;
        case 0x3178dcu: goto label_3178dc;
        case 0x3178e0u: goto label_3178e0;
        case 0x3178e4u: goto label_3178e4;
        case 0x3178e8u: goto label_3178e8;
        case 0x3178ecu: goto label_3178ec;
        case 0x3178f0u: goto label_3178f0;
        case 0x3178f4u: goto label_3178f4;
        case 0x3178f8u: goto label_3178f8;
        case 0x3178fcu: goto label_3178fc;
        case 0x317900u: goto label_317900;
        case 0x317904u: goto label_317904;
        case 0x317908u: goto label_317908;
        case 0x31790cu: goto label_31790c;
        case 0x317910u: goto label_317910;
        case 0x317914u: goto label_317914;
        case 0x317918u: goto label_317918;
        case 0x31791cu: goto label_31791c;
        case 0x317920u: goto label_317920;
        case 0x317924u: goto label_317924;
        case 0x317928u: goto label_317928;
        case 0x31792cu: goto label_31792c;
        case 0x317930u: goto label_317930;
        case 0x317934u: goto label_317934;
        case 0x317938u: goto label_317938;
        case 0x31793cu: goto label_31793c;
        case 0x317940u: goto label_317940;
        case 0x317944u: goto label_317944;
        case 0x317948u: goto label_317948;
        case 0x31794cu: goto label_31794c;
        case 0x317950u: goto label_317950;
        case 0x317954u: goto label_317954;
        case 0x317958u: goto label_317958;
        case 0x31795cu: goto label_31795c;
        case 0x317960u: goto label_317960;
        case 0x317964u: goto label_317964;
        case 0x317968u: goto label_317968;
        case 0x31796cu: goto label_31796c;
        case 0x317970u: goto label_317970;
        case 0x317974u: goto label_317974;
        case 0x317978u: goto label_317978;
        case 0x31797cu: goto label_31797c;
        case 0x317980u: goto label_317980;
        case 0x317984u: goto label_317984;
        case 0x317988u: goto label_317988;
        case 0x31798cu: goto label_31798c;
        case 0x317990u: goto label_317990;
        case 0x317994u: goto label_317994;
        case 0x317998u: goto label_317998;
        case 0x31799cu: goto label_31799c;
        case 0x3179a0u: goto label_3179a0;
        case 0x3179a4u: goto label_3179a4;
        case 0x3179a8u: goto label_3179a8;
        case 0x3179acu: goto label_3179ac;
        case 0x3179b0u: goto label_3179b0;
        case 0x3179b4u: goto label_3179b4;
        case 0x3179b8u: goto label_3179b8;
        case 0x3179bcu: goto label_3179bc;
        case 0x3179c0u: goto label_3179c0;
        case 0x3179c4u: goto label_3179c4;
        case 0x3179c8u: goto label_3179c8;
        case 0x3179ccu: goto label_3179cc;
        case 0x3179d0u: goto label_3179d0;
        case 0x3179d4u: goto label_3179d4;
        case 0x3179d8u: goto label_3179d8;
        case 0x3179dcu: goto label_3179dc;
        case 0x3179e0u: goto label_3179e0;
        case 0x3179e4u: goto label_3179e4;
        case 0x3179e8u: goto label_3179e8;
        case 0x3179ecu: goto label_3179ec;
        case 0x3179f0u: goto label_3179f0;
        case 0x3179f4u: goto label_3179f4;
        case 0x3179f8u: goto label_3179f8;
        case 0x3179fcu: goto label_3179fc;
        case 0x317a00u: goto label_317a00;
        case 0x317a04u: goto label_317a04;
        case 0x317a08u: goto label_317a08;
        case 0x317a0cu: goto label_317a0c;
        case 0x317a10u: goto label_317a10;
        case 0x317a14u: goto label_317a14;
        case 0x317a18u: goto label_317a18;
        case 0x317a1cu: goto label_317a1c;
        case 0x317a20u: goto label_317a20;
        case 0x317a24u: goto label_317a24;
        case 0x317a28u: goto label_317a28;
        case 0x317a2cu: goto label_317a2c;
        case 0x317a30u: goto label_317a30;
        case 0x317a34u: goto label_317a34;
        case 0x317a38u: goto label_317a38;
        case 0x317a3cu: goto label_317a3c;
        case 0x317a40u: goto label_317a40;
        case 0x317a44u: goto label_317a44;
        case 0x317a48u: goto label_317a48;
        case 0x317a4cu: goto label_317a4c;
        case 0x317a50u: goto label_317a50;
        case 0x317a54u: goto label_317a54;
        case 0x317a58u: goto label_317a58;
        case 0x317a5cu: goto label_317a5c;
        case 0x317a60u: goto label_317a60;
        case 0x317a64u: goto label_317a64;
        case 0x317a68u: goto label_317a68;
        case 0x317a6cu: goto label_317a6c;
        case 0x317a70u: goto label_317a70;
        case 0x317a74u: goto label_317a74;
        case 0x317a78u: goto label_317a78;
        case 0x317a7cu: goto label_317a7c;
        case 0x317a80u: goto label_317a80;
        case 0x317a84u: goto label_317a84;
        case 0x317a88u: goto label_317a88;
        case 0x317a8cu: goto label_317a8c;
        case 0x317a90u: goto label_317a90;
        case 0x317a94u: goto label_317a94;
        case 0x317a98u: goto label_317a98;
        case 0x317a9cu: goto label_317a9c;
        case 0x317aa0u: goto label_317aa0;
        case 0x317aa4u: goto label_317aa4;
        case 0x317aa8u: goto label_317aa8;
        case 0x317aacu: goto label_317aac;
        case 0x317ab0u: goto label_317ab0;
        case 0x317ab4u: goto label_317ab4;
        case 0x317ab8u: goto label_317ab8;
        case 0x317abcu: goto label_317abc;
        case 0x317ac0u: goto label_317ac0;
        case 0x317ac4u: goto label_317ac4;
        case 0x317ac8u: goto label_317ac8;
        case 0x317accu: goto label_317acc;
        case 0x317ad0u: goto label_317ad0;
        case 0x317ad4u: goto label_317ad4;
        case 0x317ad8u: goto label_317ad8;
        case 0x317adcu: goto label_317adc;
        case 0x317ae0u: goto label_317ae0;
        case 0x317ae4u: goto label_317ae4;
        case 0x317ae8u: goto label_317ae8;
        case 0x317aecu: goto label_317aec;
        case 0x317af0u: goto label_317af0;
        case 0x317af4u: goto label_317af4;
        case 0x317af8u: goto label_317af8;
        case 0x317afcu: goto label_317afc;
        case 0x317b00u: goto label_317b00;
        case 0x317b04u: goto label_317b04;
        case 0x317b08u: goto label_317b08;
        case 0x317b0cu: goto label_317b0c;
        case 0x317b10u: goto label_317b10;
        case 0x317b14u: goto label_317b14;
        case 0x317b18u: goto label_317b18;
        case 0x317b1cu: goto label_317b1c;
        case 0x317b20u: goto label_317b20;
        case 0x317b24u: goto label_317b24;
        case 0x317b28u: goto label_317b28;
        case 0x317b2cu: goto label_317b2c;
        case 0x317b30u: goto label_317b30;
        case 0x317b34u: goto label_317b34;
        case 0x317b38u: goto label_317b38;
        case 0x317b3cu: goto label_317b3c;
        case 0x317b40u: goto label_317b40;
        case 0x317b44u: goto label_317b44;
        case 0x317b48u: goto label_317b48;
        case 0x317b4cu: goto label_317b4c;
        case 0x317b50u: goto label_317b50;
        case 0x317b54u: goto label_317b54;
        case 0x317b58u: goto label_317b58;
        case 0x317b5cu: goto label_317b5c;
        case 0x317b60u: goto label_317b60;
        case 0x317b64u: goto label_317b64;
        case 0x317b68u: goto label_317b68;
        case 0x317b6cu: goto label_317b6c;
        case 0x317b70u: goto label_317b70;
        case 0x317b74u: goto label_317b74;
        case 0x317b78u: goto label_317b78;
        case 0x317b7cu: goto label_317b7c;
        case 0x317b80u: goto label_317b80;
        case 0x317b84u: goto label_317b84;
        case 0x317b88u: goto label_317b88;
        case 0x317b8cu: goto label_317b8c;
        case 0x317b90u: goto label_317b90;
        case 0x317b94u: goto label_317b94;
        case 0x317b98u: goto label_317b98;
        case 0x317b9cu: goto label_317b9c;
        case 0x317ba0u: goto label_317ba0;
        case 0x317ba4u: goto label_317ba4;
        case 0x317ba8u: goto label_317ba8;
        case 0x317bacu: goto label_317bac;
        case 0x317bb0u: goto label_317bb0;
        case 0x317bb4u: goto label_317bb4;
        case 0x317bb8u: goto label_317bb8;
        case 0x317bbcu: goto label_317bbc;
        case 0x317bc0u: goto label_317bc0;
        case 0x317bc4u: goto label_317bc4;
        case 0x317bc8u: goto label_317bc8;
        case 0x317bccu: goto label_317bcc;
        case 0x317bd0u: goto label_317bd0;
        case 0x317bd4u: goto label_317bd4;
        case 0x317bd8u: goto label_317bd8;
        case 0x317bdcu: goto label_317bdc;
        case 0x317be0u: goto label_317be0;
        case 0x317be4u: goto label_317be4;
        case 0x317be8u: goto label_317be8;
        case 0x317becu: goto label_317bec;
        case 0x317bf0u: goto label_317bf0;
        case 0x317bf4u: goto label_317bf4;
        case 0x317bf8u: goto label_317bf8;
        case 0x317bfcu: goto label_317bfc;
        case 0x317c00u: goto label_317c00;
        case 0x317c04u: goto label_317c04;
        case 0x317c08u: goto label_317c08;
        case 0x317c0cu: goto label_317c0c;
        case 0x317c10u: goto label_317c10;
        case 0x317c14u: goto label_317c14;
        case 0x317c18u: goto label_317c18;
        case 0x317c1cu: goto label_317c1c;
        case 0x317c20u: goto label_317c20;
        case 0x317c24u: goto label_317c24;
        case 0x317c28u: goto label_317c28;
        case 0x317c2cu: goto label_317c2c;
        case 0x317c30u: goto label_317c30;
        case 0x317c34u: goto label_317c34;
        case 0x317c38u: goto label_317c38;
        case 0x317c3cu: goto label_317c3c;
        case 0x317c40u: goto label_317c40;
        case 0x317c44u: goto label_317c44;
        case 0x317c48u: goto label_317c48;
        case 0x317c4cu: goto label_317c4c;
        case 0x317c50u: goto label_317c50;
        case 0x317c54u: goto label_317c54;
        case 0x317c58u: goto label_317c58;
        case 0x317c5cu: goto label_317c5c;
        case 0x317c60u: goto label_317c60;
        case 0x317c64u: goto label_317c64;
        case 0x317c68u: goto label_317c68;
        case 0x317c6cu: goto label_317c6c;
        case 0x317c70u: goto label_317c70;
        case 0x317c74u: goto label_317c74;
        case 0x317c78u: goto label_317c78;
        case 0x317c7cu: goto label_317c7c;
        case 0x317c80u: goto label_317c80;
        case 0x317c84u: goto label_317c84;
        case 0x317c88u: goto label_317c88;
        case 0x317c8cu: goto label_317c8c;
        case 0x317c90u: goto label_317c90;
        case 0x317c94u: goto label_317c94;
        case 0x317c98u: goto label_317c98;
        case 0x317c9cu: goto label_317c9c;
        case 0x317ca0u: goto label_317ca0;
        case 0x317ca4u: goto label_317ca4;
        case 0x317ca8u: goto label_317ca8;
        case 0x317cacu: goto label_317cac;
        case 0x317cb0u: goto label_317cb0;
        case 0x317cb4u: goto label_317cb4;
        case 0x317cb8u: goto label_317cb8;
        case 0x317cbcu: goto label_317cbc;
        case 0x317cc0u: goto label_317cc0;
        case 0x317cc4u: goto label_317cc4;
        case 0x317cc8u: goto label_317cc8;
        case 0x317cccu: goto label_317ccc;
        case 0x317cd0u: goto label_317cd0;
        case 0x317cd4u: goto label_317cd4;
        case 0x317cd8u: goto label_317cd8;
        case 0x317cdcu: goto label_317cdc;
        case 0x317ce0u: goto label_317ce0;
        case 0x317ce4u: goto label_317ce4;
        case 0x317ce8u: goto label_317ce8;
        case 0x317cecu: goto label_317cec;
        case 0x317cf0u: goto label_317cf0;
        case 0x317cf4u: goto label_317cf4;
        case 0x317cf8u: goto label_317cf8;
        case 0x317cfcu: goto label_317cfc;
        case 0x317d00u: goto label_317d00;
        case 0x317d04u: goto label_317d04;
        case 0x317d08u: goto label_317d08;
        case 0x317d0cu: goto label_317d0c;
        case 0x317d10u: goto label_317d10;
        case 0x317d14u: goto label_317d14;
        case 0x317d18u: goto label_317d18;
        case 0x317d1cu: goto label_317d1c;
        case 0x317d20u: goto label_317d20;
        case 0x317d24u: goto label_317d24;
        case 0x317d28u: goto label_317d28;
        case 0x317d2cu: goto label_317d2c;
        case 0x317d30u: goto label_317d30;
        case 0x317d34u: goto label_317d34;
        case 0x317d38u: goto label_317d38;
        case 0x317d3cu: goto label_317d3c;
        case 0x317d40u: goto label_317d40;
        case 0x317d44u: goto label_317d44;
        case 0x317d48u: goto label_317d48;
        case 0x317d4cu: goto label_317d4c;
        case 0x317d50u: goto label_317d50;
        case 0x317d54u: goto label_317d54;
        case 0x317d58u: goto label_317d58;
        case 0x317d5cu: goto label_317d5c;
        case 0x317d60u: goto label_317d60;
        case 0x317d64u: goto label_317d64;
        case 0x317d68u: goto label_317d68;
        case 0x317d6cu: goto label_317d6c;
        case 0x317d70u: goto label_317d70;
        case 0x317d74u: goto label_317d74;
        case 0x317d78u: goto label_317d78;
        case 0x317d7cu: goto label_317d7c;
        case 0x317d80u: goto label_317d80;
        case 0x317d84u: goto label_317d84;
        case 0x317d88u: goto label_317d88;
        case 0x317d8cu: goto label_317d8c;
        case 0x317d90u: goto label_317d90;
        case 0x317d94u: goto label_317d94;
        case 0x317d98u: goto label_317d98;
        case 0x317d9cu: goto label_317d9c;
        case 0x317da0u: goto label_317da0;
        case 0x317da4u: goto label_317da4;
        case 0x317da8u: goto label_317da8;
        case 0x317dacu: goto label_317dac;
        case 0x317db0u: goto label_317db0;
        case 0x317db4u: goto label_317db4;
        case 0x317db8u: goto label_317db8;
        case 0x317dbcu: goto label_317dbc;
        case 0x317dc0u: goto label_317dc0;
        case 0x317dc4u: goto label_317dc4;
        case 0x317dc8u: goto label_317dc8;
        case 0x317dccu: goto label_317dcc;
        case 0x317dd0u: goto label_317dd0;
        case 0x317dd4u: goto label_317dd4;
        case 0x317dd8u: goto label_317dd8;
        case 0x317ddcu: goto label_317ddc;
        case 0x317de0u: goto label_317de0;
        case 0x317de4u: goto label_317de4;
        case 0x317de8u: goto label_317de8;
        case 0x317decu: goto label_317dec;
        case 0x317df0u: goto label_317df0;
        case 0x317df4u: goto label_317df4;
        case 0x317df8u: goto label_317df8;
        case 0x317dfcu: goto label_317dfc;
        case 0x317e00u: goto label_317e00;
        case 0x317e04u: goto label_317e04;
        case 0x317e08u: goto label_317e08;
        case 0x317e0cu: goto label_317e0c;
        case 0x317e10u: goto label_317e10;
        case 0x317e14u: goto label_317e14;
        case 0x317e18u: goto label_317e18;
        case 0x317e1cu: goto label_317e1c;
        case 0x317e20u: goto label_317e20;
        case 0x317e24u: goto label_317e24;
        case 0x317e28u: goto label_317e28;
        case 0x317e2cu: goto label_317e2c;
        case 0x317e30u: goto label_317e30;
        case 0x317e34u: goto label_317e34;
        case 0x317e38u: goto label_317e38;
        case 0x317e3cu: goto label_317e3c;
        case 0x317e40u: goto label_317e40;
        case 0x317e44u: goto label_317e44;
        case 0x317e48u: goto label_317e48;
        case 0x317e4cu: goto label_317e4c;
        case 0x317e50u: goto label_317e50;
        case 0x317e54u: goto label_317e54;
        case 0x317e58u: goto label_317e58;
        case 0x317e5cu: goto label_317e5c;
        case 0x317e60u: goto label_317e60;
        case 0x317e64u: goto label_317e64;
        case 0x317e68u: goto label_317e68;
        case 0x317e6cu: goto label_317e6c;
        case 0x317e70u: goto label_317e70;
        case 0x317e74u: goto label_317e74;
        case 0x317e78u: goto label_317e78;
        case 0x317e7cu: goto label_317e7c;
        case 0x317e80u: goto label_317e80;
        case 0x317e84u: goto label_317e84;
        case 0x317e88u: goto label_317e88;
        case 0x317e8cu: goto label_317e8c;
        case 0x317e90u: goto label_317e90;
        case 0x317e94u: goto label_317e94;
        case 0x317e98u: goto label_317e98;
        case 0x317e9cu: goto label_317e9c;
        case 0x317ea0u: goto label_317ea0;
        case 0x317ea4u: goto label_317ea4;
        case 0x317ea8u: goto label_317ea8;
        case 0x317eacu: goto label_317eac;
        case 0x317eb0u: goto label_317eb0;
        case 0x317eb4u: goto label_317eb4;
        case 0x317eb8u: goto label_317eb8;
        case 0x317ebcu: goto label_317ebc;
        case 0x317ec0u: goto label_317ec0;
        case 0x317ec4u: goto label_317ec4;
        case 0x317ec8u: goto label_317ec8;
        case 0x317eccu: goto label_317ecc;
        case 0x317ed0u: goto label_317ed0;
        case 0x317ed4u: goto label_317ed4;
        case 0x317ed8u: goto label_317ed8;
        case 0x317edcu: goto label_317edc;
        case 0x317ee0u: goto label_317ee0;
        case 0x317ee4u: goto label_317ee4;
        case 0x317ee8u: goto label_317ee8;
        case 0x317eecu: goto label_317eec;
        case 0x317ef0u: goto label_317ef0;
        case 0x317ef4u: goto label_317ef4;
        case 0x317ef8u: goto label_317ef8;
        case 0x317efcu: goto label_317efc;
        case 0x317f00u: goto label_317f00;
        case 0x317f04u: goto label_317f04;
        case 0x317f08u: goto label_317f08;
        case 0x317f0cu: goto label_317f0c;
        case 0x317f10u: goto label_317f10;
        case 0x317f14u: goto label_317f14;
        case 0x317f18u: goto label_317f18;
        case 0x317f1cu: goto label_317f1c;
        case 0x317f20u: goto label_317f20;
        case 0x317f24u: goto label_317f24;
        case 0x317f28u: goto label_317f28;
        case 0x317f2cu: goto label_317f2c;
        case 0x317f30u: goto label_317f30;
        case 0x317f34u: goto label_317f34;
        case 0x317f38u: goto label_317f38;
        case 0x317f3cu: goto label_317f3c;
        case 0x317f40u: goto label_317f40;
        case 0x317f44u: goto label_317f44;
        case 0x317f48u: goto label_317f48;
        case 0x317f4cu: goto label_317f4c;
        case 0x317f50u: goto label_317f50;
        case 0x317f54u: goto label_317f54;
        case 0x317f58u: goto label_317f58;
        case 0x317f5cu: goto label_317f5c;
        case 0x317f60u: goto label_317f60;
        case 0x317f64u: goto label_317f64;
        case 0x317f68u: goto label_317f68;
        case 0x317f6cu: goto label_317f6c;
        case 0x317f70u: goto label_317f70;
        case 0x317f74u: goto label_317f74;
        case 0x317f78u: goto label_317f78;
        case 0x317f7cu: goto label_317f7c;
        case 0x317f80u: goto label_317f80;
        case 0x317f84u: goto label_317f84;
        case 0x317f88u: goto label_317f88;
        case 0x317f8cu: goto label_317f8c;
        case 0x317f90u: goto label_317f90;
        case 0x317f94u: goto label_317f94;
        case 0x317f98u: goto label_317f98;
        case 0x317f9cu: goto label_317f9c;
        case 0x317fa0u: goto label_317fa0;
        case 0x317fa4u: goto label_317fa4;
        case 0x317fa8u: goto label_317fa8;
        case 0x317facu: goto label_317fac;
        case 0x317fb0u: goto label_317fb0;
        case 0x317fb4u: goto label_317fb4;
        case 0x317fb8u: goto label_317fb8;
        case 0x317fbcu: goto label_317fbc;
        case 0x317fc0u: goto label_317fc0;
        case 0x317fc4u: goto label_317fc4;
        case 0x317fc8u: goto label_317fc8;
        case 0x317fccu: goto label_317fcc;
        case 0x317fd0u: goto label_317fd0;
        case 0x317fd4u: goto label_317fd4;
        case 0x317fd8u: goto label_317fd8;
        case 0x317fdcu: goto label_317fdc;
        case 0x317fe0u: goto label_317fe0;
        case 0x317fe4u: goto label_317fe4;
        case 0x317fe8u: goto label_317fe8;
        case 0x317fecu: goto label_317fec;
        case 0x317ff0u: goto label_317ff0;
        case 0x317ff4u: goto label_317ff4;
        case 0x317ff8u: goto label_317ff8;
        case 0x317ffcu: goto label_317ffc;
        case 0x318000u: goto label_318000;
        case 0x318004u: goto label_318004;
        case 0x318008u: goto label_318008;
        case 0x31800cu: goto label_31800c;
        case 0x318010u: goto label_318010;
        case 0x318014u: goto label_318014;
        case 0x318018u: goto label_318018;
        case 0x31801cu: goto label_31801c;
        case 0x318020u: goto label_318020;
        case 0x318024u: goto label_318024;
        case 0x318028u: goto label_318028;
        case 0x31802cu: goto label_31802c;
        case 0x318030u: goto label_318030;
        case 0x318034u: goto label_318034;
        case 0x318038u: goto label_318038;
        case 0x31803cu: goto label_31803c;
        case 0x318040u: goto label_318040;
        case 0x318044u: goto label_318044;
        case 0x318048u: goto label_318048;
        case 0x31804cu: goto label_31804c;
        case 0x318050u: goto label_318050;
        case 0x318054u: goto label_318054;
        case 0x318058u: goto label_318058;
        case 0x31805cu: goto label_31805c;
        case 0x318060u: goto label_318060;
        case 0x318064u: goto label_318064;
        case 0x318068u: goto label_318068;
        case 0x31806cu: goto label_31806c;
        case 0x318070u: goto label_318070;
        case 0x318074u: goto label_318074;
        case 0x318078u: goto label_318078;
        case 0x31807cu: goto label_31807c;
        case 0x318080u: goto label_318080;
        case 0x318084u: goto label_318084;
        case 0x318088u: goto label_318088;
        case 0x31808cu: goto label_31808c;
        case 0x318090u: goto label_318090;
        case 0x318094u: goto label_318094;
        case 0x318098u: goto label_318098;
        case 0x31809cu: goto label_31809c;
        case 0x3180a0u: goto label_3180a0;
        case 0x3180a4u: goto label_3180a4;
        case 0x3180a8u: goto label_3180a8;
        case 0x3180acu: goto label_3180ac;
        case 0x3180b0u: goto label_3180b0;
        case 0x3180b4u: goto label_3180b4;
        case 0x3180b8u: goto label_3180b8;
        case 0x3180bcu: goto label_3180bc;
        case 0x3180c0u: goto label_3180c0;
        case 0x3180c4u: goto label_3180c4;
        case 0x3180c8u: goto label_3180c8;
        case 0x3180ccu: goto label_3180cc;
        case 0x3180d0u: goto label_3180d0;
        case 0x3180d4u: goto label_3180d4;
        case 0x3180d8u: goto label_3180d8;
        case 0x3180dcu: goto label_3180dc;
        case 0x3180e0u: goto label_3180e0;
        case 0x3180e4u: goto label_3180e4;
        case 0x3180e8u: goto label_3180e8;
        case 0x3180ecu: goto label_3180ec;
        case 0x3180f0u: goto label_3180f0;
        case 0x3180f4u: goto label_3180f4;
        case 0x3180f8u: goto label_3180f8;
        case 0x3180fcu: goto label_3180fc;
        case 0x318100u: goto label_318100;
        case 0x318104u: goto label_318104;
        case 0x318108u: goto label_318108;
        case 0x31810cu: goto label_31810c;
        case 0x318110u: goto label_318110;
        case 0x318114u: goto label_318114;
        case 0x318118u: goto label_318118;
        case 0x31811cu: goto label_31811c;
        case 0x318120u: goto label_318120;
        case 0x318124u: goto label_318124;
        case 0x318128u: goto label_318128;
        case 0x31812cu: goto label_31812c;
        case 0x318130u: goto label_318130;
        case 0x318134u: goto label_318134;
        case 0x318138u: goto label_318138;
        case 0x31813cu: goto label_31813c;
        case 0x318140u: goto label_318140;
        case 0x318144u: goto label_318144;
        case 0x318148u: goto label_318148;
        case 0x31814cu: goto label_31814c;
        case 0x318150u: goto label_318150;
        case 0x318154u: goto label_318154;
        case 0x318158u: goto label_318158;
        case 0x31815cu: goto label_31815c;
        case 0x318160u: goto label_318160;
        case 0x318164u: goto label_318164;
        case 0x318168u: goto label_318168;
        case 0x31816cu: goto label_31816c;
        case 0x318170u: goto label_318170;
        case 0x318174u: goto label_318174;
        case 0x318178u: goto label_318178;
        case 0x31817cu: goto label_31817c;
        case 0x318180u: goto label_318180;
        case 0x318184u: goto label_318184;
        case 0x318188u: goto label_318188;
        case 0x31818cu: goto label_31818c;
        case 0x318190u: goto label_318190;
        case 0x318194u: goto label_318194;
        case 0x318198u: goto label_318198;
        case 0x31819cu: goto label_31819c;
        case 0x3181a0u: goto label_3181a0;
        case 0x3181a4u: goto label_3181a4;
        case 0x3181a8u: goto label_3181a8;
        case 0x3181acu: goto label_3181ac;
        case 0x3181b0u: goto label_3181b0;
        case 0x3181b4u: goto label_3181b4;
        case 0x3181b8u: goto label_3181b8;
        case 0x3181bcu: goto label_3181bc;
        case 0x3181c0u: goto label_3181c0;
        case 0x3181c4u: goto label_3181c4;
        case 0x3181c8u: goto label_3181c8;
        case 0x3181ccu: goto label_3181cc;
        case 0x3181d0u: goto label_3181d0;
        case 0x3181d4u: goto label_3181d4;
        case 0x3181d8u: goto label_3181d8;
        case 0x3181dcu: goto label_3181dc;
        case 0x3181e0u: goto label_3181e0;
        case 0x3181e4u: goto label_3181e4;
        case 0x3181e8u: goto label_3181e8;
        case 0x3181ecu: goto label_3181ec;
        case 0x3181f0u: goto label_3181f0;
        case 0x3181f4u: goto label_3181f4;
        case 0x3181f8u: goto label_3181f8;
        case 0x3181fcu: goto label_3181fc;
        case 0x318200u: goto label_318200;
        case 0x318204u: goto label_318204;
        case 0x318208u: goto label_318208;
        case 0x31820cu: goto label_31820c;
        case 0x318210u: goto label_318210;
        case 0x318214u: goto label_318214;
        case 0x318218u: goto label_318218;
        case 0x31821cu: goto label_31821c;
        case 0x318220u: goto label_318220;
        case 0x318224u: goto label_318224;
        case 0x318228u: goto label_318228;
        case 0x31822cu: goto label_31822c;
        case 0x318230u: goto label_318230;
        case 0x318234u: goto label_318234;
        case 0x318238u: goto label_318238;
        case 0x31823cu: goto label_31823c;
        case 0x318240u: goto label_318240;
        case 0x318244u: goto label_318244;
        case 0x318248u: goto label_318248;
        case 0x31824cu: goto label_31824c;
        case 0x318250u: goto label_318250;
        case 0x318254u: goto label_318254;
        case 0x318258u: goto label_318258;
        case 0x31825cu: goto label_31825c;
        case 0x318260u: goto label_318260;
        case 0x318264u: goto label_318264;
        case 0x318268u: goto label_318268;
        case 0x31826cu: goto label_31826c;
        case 0x318270u: goto label_318270;
        case 0x318274u: goto label_318274;
        case 0x318278u: goto label_318278;
        case 0x31827cu: goto label_31827c;
        case 0x318280u: goto label_318280;
        case 0x318284u: goto label_318284;
        case 0x318288u: goto label_318288;
        case 0x31828cu: goto label_31828c;
        case 0x318290u: goto label_318290;
        case 0x318294u: goto label_318294;
        case 0x318298u: goto label_318298;
        case 0x31829cu: goto label_31829c;
        case 0x3182a0u: goto label_3182a0;
        case 0x3182a4u: goto label_3182a4;
        case 0x3182a8u: goto label_3182a8;
        case 0x3182acu: goto label_3182ac;
        case 0x3182b0u: goto label_3182b0;
        case 0x3182b4u: goto label_3182b4;
        case 0x3182b8u: goto label_3182b8;
        case 0x3182bcu: goto label_3182bc;
        case 0x3182c0u: goto label_3182c0;
        case 0x3182c4u: goto label_3182c4;
        case 0x3182c8u: goto label_3182c8;
        case 0x3182ccu: goto label_3182cc;
        case 0x3182d0u: goto label_3182d0;
        case 0x3182d4u: goto label_3182d4;
        case 0x3182d8u: goto label_3182d8;
        case 0x3182dcu: goto label_3182dc;
        case 0x3182e0u: goto label_3182e0;
        case 0x3182e4u: goto label_3182e4;
        case 0x3182e8u: goto label_3182e8;
        case 0x3182ecu: goto label_3182ec;
        case 0x3182f0u: goto label_3182f0;
        case 0x3182f4u: goto label_3182f4;
        case 0x3182f8u: goto label_3182f8;
        case 0x3182fcu: goto label_3182fc;
        case 0x318300u: goto label_318300;
        case 0x318304u: goto label_318304;
        case 0x318308u: goto label_318308;
        case 0x31830cu: goto label_31830c;
        case 0x318310u: goto label_318310;
        case 0x318314u: goto label_318314;
        case 0x318318u: goto label_318318;
        case 0x31831cu: goto label_31831c;
        case 0x318320u: goto label_318320;
        case 0x318324u: goto label_318324;
        case 0x318328u: goto label_318328;
        case 0x31832cu: goto label_31832c;
        case 0x318330u: goto label_318330;
        case 0x318334u: goto label_318334;
        case 0x318338u: goto label_318338;
        case 0x31833cu: goto label_31833c;
        case 0x318340u: goto label_318340;
        case 0x318344u: goto label_318344;
        case 0x318348u: goto label_318348;
        case 0x31834cu: goto label_31834c;
        case 0x318350u: goto label_318350;
        case 0x318354u: goto label_318354;
        case 0x318358u: goto label_318358;
        case 0x31835cu: goto label_31835c;
        case 0x318360u: goto label_318360;
        case 0x318364u: goto label_318364;
        case 0x318368u: goto label_318368;
        case 0x31836cu: goto label_31836c;
        case 0x318370u: goto label_318370;
        case 0x318374u: goto label_318374;
        default: break;
    }

    ctx->pc = 0x316b30u;

label_316b30:
    // 0x316b30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x316b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_316b34:
    // 0x316b34: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x316b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_316b38:
    // 0x316b38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x316b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_316b3c:
    // 0x316b3c: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x316b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_316b40:
    // 0x316b40: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x316b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_316b44:
    // 0x316b44: 0x24439bf0  addiu       $v1, $v0, -0x6410
    ctx->pc = 0x316b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941680));
label_316b48:
    // 0x316b48: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x316b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_316b4c:
    // 0x316b4c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x316b4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_316b50:
    // 0x316b50: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x316b50u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_316b54:
    // 0x316b54: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x316b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316b58:
    // 0x316b58: 0x8c4412a4  lw          $a0, 0x12A4($v0)
    ctx->pc = 0x316b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4772)));
label_316b5c:
    // 0x316b5c: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x316b5cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_316b60:
    // 0x316b60: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x316b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316b64:
    // 0x316b64: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x316b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_316b68:
    // 0x316b68: 0xc461010c  lwc1        $f1, 0x10C($v1)
    ctx->pc = 0x316b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_316b6c:
    // 0x316b6c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x316b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_316b70:
    // 0x316b70: 0x3445cccd  ori         $a1, $v0, 0xCCCD
    ctx->pc = 0x316b70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_316b74:
    // 0x316b74: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x316b74u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316b78:
    // 0x316b78: 0x0  nop
    ctx->pc = 0x316b78u;
    // NOP
label_316b7c:
    // 0x316b7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x316b7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_316b80:
    // 0x316b80: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x316b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
label_316b84:
    // 0x316b84: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x316b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316b88:
    // 0x316b88: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x316b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
label_316b8c:
    // 0x316b8c: 0xc441010c  lwc1        $f1, 0x10C($v0)
    ctx->pc = 0x316b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_316b90:
    // 0x316b90: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x316b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_316b94:
    // 0x316b94: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x316b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_316b98:
    // 0x316b98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x316b98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316b9c:
    // 0x316b9c: 0x0  nop
    ctx->pc = 0x316b9cu;
    // NOP
label_316ba0:
    // 0x316ba0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x316ba0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_316ba4:
    // 0x316ba4: 0x0  nop
    ctx->pc = 0x316ba4u;
    // NOP
label_316ba8:
    // 0x316ba8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_316bac:
    if (ctx->pc == 0x316BACu) {
        ctx->pc = 0x316BB0u;
        goto label_316bb0;
    }
    ctx->pc = 0x316BA8u;
    {
        const bool branch_taken_0x316ba8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x316ba8) {
            ctx->pc = 0x316BC8u;
            goto label_316bc8;
        }
    }
    ctx->pc = 0x316BB0u;
label_316bb0:
    // 0x316bb0: 0x3c08c049  lui         $t0, 0xC049
    ctx->pc = 0x316bb0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49225 << 16));
label_316bb4:
    // 0x316bb4: 0x35020fdb  ori         $v0, $t0, 0xFDB
    ctx->pc = 0x316bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)4059);
label_316bb8:
    // 0x316bb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x316bb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316bbc:
    // 0x316bbc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x316bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316bc0:
    // 0x316bc0: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x316bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
label_316bc4:
    // 0x316bc4: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x316bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
label_316bc8:
    // 0x316bc8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x316bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316bcc:
    // 0x316bcc: 0x8c4402d0  lw          $a0, 0x2D0($v0)
    ctx->pc = 0x316bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_316bd0:
    // 0x316bd0: 0xc040cbc  jal         func_1032F0
label_316bd4:
    if (ctx->pc == 0x316BD4u) {
        ctx->pc = 0x316BD8u;
        goto label_316bd8;
    }
    ctx->pc = 0x316BD0u;
    SET_GPR_U32(ctx, 31, 0x316BD8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x316BD8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x316BD8u) { return; }
    ctx->pc = 0x316BD8u;
label_316bd8:
    // 0x316bd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x316bd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316bdc:
    // 0x316bdc: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x316bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316be0:
    // 0x316be0: 0x8ce602d0  lw          $a2, 0x2D0($a3)
    ctx->pc = 0x316be0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 720)));
label_316be4:
    // 0x316be4: 0xe4c00038  swc1        $f0, 0x38($a2)
    ctx->pc = 0x316be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
label_316be8:
    // 0x316be8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x316be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316bec:
    // 0x316bec: 0x8c8502d0  lw          $a1, 0x2D0($a0)
    ctx->pc = 0x316becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
label_316bf0:
    // 0x316bf0: 0xe4a00034  swc1        $f0, 0x34($a1)
    ctx->pc = 0x316bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
label_316bf4:
    // 0x316bf4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x316bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316bf8:
    // 0x316bf8: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x316bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_316bfc:
    // 0x316bfc: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x316bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_316c00:
    // 0x316c00: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x316c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316c04:
    // 0x316c04: 0x8fac0048  lw          $t4, 0x48($sp)
    ctx->pc = 0x316c04u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316c08:
    // 0x316c08: 0x8fab0048  lw          $t3, 0x48($sp)
    ctx->pc = 0x316c08u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316c0c:
    // 0x316c0c: 0x8d6202d0  lw          $v0, 0x2D0($t3)
    ctx->pc = 0x316c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 720)));
label_316c10:
    // 0x316c10: 0x8c8a02d0  lw          $t2, 0x2D0($a0)
    ctx->pc = 0x316c10u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
label_316c14:
    // 0x316c14: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x316c14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_316c18:
    // 0x316c18: 0x8d8502d0  lw          $a1, 0x2D0($t4)
    ctx->pc = 0x316c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 720)));
label_316c1c:
    // 0x316c1c: 0x24460104  addiu       $a2, $v0, 0x104
    ctx->pc = 0x316c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 260));
label_316c20:
    // 0x316c20: 0xc040d62  jal         func_103588
label_316c24:
    if (ctx->pc == 0x316C24u) {
        ctx->pc = 0x316C28u;
        goto label_316c28;
    }
    ctx->pc = 0x316C20u;
    SET_GPR_U32(ctx, 31, 0x316C28u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x316C28u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x316C28u) { return; }
    ctx->pc = 0x316C28u;
label_316c28:
    // 0x316c28: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x316c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316c2c:
    // 0x316c2c: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x316c2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_316c30:
    // 0x316c30: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x316c30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_316c34:
    // 0x316c34: 0x2ce10006  sltiu       $at, $a3, 0x6
    ctx->pc = 0x316c34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_316c38:
    // 0x316c38: 0x102005ca  beqz        $at, . + 4 + (0x5CA << 2)
label_316c3c:
    if (ctx->pc == 0x316C3Cu) {
        ctx->pc = 0x316C40u;
        goto label_316c40;
    }
    ctx->pc = 0x316C38u;
    {
        const bool branch_taken_0x316c38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x316c38) {
            ctx->pc = 0x318364u;
            goto label_318364;
        }
    }
    ctx->pc = 0x316C40u;
label_316c40:
    // 0x316c40: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x316c40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_316c44:
    // 0x316c44: 0x24891d30  addiu       $t1, $a0, 0x1D30
    ctx->pc = 0x316c44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 7472));
label_316c48:
    // 0x316c48: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x316c48u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_316c4c:
    // 0x316c4c: 0xc92021  addu        $a0, $a2, $t1
    ctx->pc = 0x316c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_316c50:
    // 0x316c50: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x316c50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_316c54:
    // 0x316c54: 0xa00008  jr          $a1
label_316c58:
    if (ctx->pc == 0x316C58u) {
        ctx->pc = 0x316C5Cu;
        goto label_316c5c;
    }
    ctx->pc = 0x316C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316C54u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x316C5Cu;
label_316c5c:
    // 0x316c5c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x316c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316c60:
    // 0x316c60: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x316c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_316c64:
    // 0x316c64: 0x34470002  ori         $a3, $v0, 0x2
    ctx->pc = 0x316c64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_316c68:
    // 0x316c68: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x316c68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
label_316c6c:
    // 0x316c6c: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x316c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
label_316c70:
    // 0x316c70: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x316c70u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316c74:
    // 0x316c74: 0x0  nop
    ctx->pc = 0x316c74u;
    // NOP
label_316c78:
    // 0x316c78: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x316c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_316c7c:
    // 0x316c7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x316c7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316c80:
    // 0x316c80: 0x0  nop
    ctx->pc = 0x316c80u;
    // NOP
label_316c84:
    // 0x316c84: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x316c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_316c88:
    // 0x316c88: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x316c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_316c8c:
    // 0x316c8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x316c8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316c90:
    // 0x316c90: 0x0  nop
    ctx->pc = 0x316c90u;
    // NOP
label_316c94:
    // 0x316c94: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x316c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_316c98:
    // 0x316c98: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x316c98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
label_316c9c:
    // 0x316c9c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x316c9cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316ca0:
    // 0x316ca0: 0x0  nop
    ctx->pc = 0x316ca0u;
    // NOP
label_316ca4:
    // 0x316ca4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x316ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_316ca8:
    // 0x316ca8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x316ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316cac:
    // 0x316cac: 0x8c421298  lw          $v0, 0x1298($v0)
    ctx->pc = 0x316cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
label_316cb0:
    // 0x316cb0: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x316cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_316cb4:
    // 0x316cb4: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x316cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_316cb8:
    // 0x316cb8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x316cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_316cbc:
    // 0x316cbc: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x316cbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
label_316cc0:
    // 0x316cc0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x316cc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_316cc4:
    // 0x316cc4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x316cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_316cc8:
    // 0x316cc8: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x316cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
label_316ccc:
    // 0x316ccc: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x316cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_316cd0:
    // 0x316cd0: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x316cd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_316cd4:
    // 0x316cd4: 0x24044800  addiu       $a0, $zero, 0x4800
    ctx->pc = 0x316cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18432));
label_316cd8:
    // 0x316cd8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x316cd8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_316cdc:
    // 0x316cdc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x316cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_316ce0:
    // 0x316ce0: 0xc062f5c  jal         func_18BD70
label_316ce4:
    if (ctx->pc == 0x316CE4u) {
        ctx->pc = 0x316CE8u;
        goto label_316ce8;
    }
    ctx->pc = 0x316CE0u;
    SET_GPR_U32(ctx, 31, 0x316CE8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x316CE0u, 0x316CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316CE8u;
label_316ce8:
    // 0x316ce8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x316ce8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_316cec:
    // 0x316cec: 0xc0630a8  jal         func_18C2A0
label_316cf0:
    if (ctx->pc == 0x316CF0u) {
        ctx->pc = 0x316CF4u;
        goto label_316cf4;
    }
    ctx->pc = 0x316CECu;
    SET_GPR_U32(ctx, 31, 0x316CF4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x316CECu, 0x316CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316CF4u;
label_316cf4:
    // 0x316cf4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x316cf4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_316cf8:
    // 0x316cf8: 0x3c04c396  lui         $a0, 0xC396
    ctx->pc = 0x316cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50070 << 16));
label_316cfc:
    // 0x316cfc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x316cfcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316d00:
    // 0x316d00: 0x0  nop
    ctx->pc = 0x316d00u;
    // NOP
label_316d04:
    // 0x316d04: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x316d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_316d08:
    // 0x316d08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x316d08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316d0c:
    // 0x316d0c: 0x0  nop
    ctx->pc = 0x316d0cu;
    // NOP
label_316d10:
    // 0x316d10: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x316d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_316d14:
    // 0x316d14: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x316d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_316d18:
    // 0x316d18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x316d18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316d1c:
    // 0x316d1c: 0x0  nop
    ctx->pc = 0x316d1cu;
    // NOP
label_316d20:
    // 0x316d20: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x316d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_316d24:
    // 0x316d24: 0x3c0540a0  lui         $a1, 0x40A0
    ctx->pc = 0x316d24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16544 << 16));
label_316d28:
    // 0x316d28: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x316d28u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316d2c:
    // 0x316d2c: 0x0  nop
    ctx->pc = 0x316d2cu;
    // NOP
label_316d30:
    // 0x316d30: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x316d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_316d34:
    // 0x316d34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x316d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316d38:
    // 0x316d38: 0x8c641298  lw          $a0, 0x1298($v1)
    ctx->pc = 0x316d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4760)));
label_316d3c:
    // 0x316d3c: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x316d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_316d40:
    // 0x316d40: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x316d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_316d44:
    // 0x316d44: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x316d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_316d48:
    // 0x316d48: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x316d48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
label_316d4c:
    // 0x316d4c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x316d4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_316d50:
    // 0x316d50: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x316d50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_316d54:
    // 0x316d54: 0x81438  dsll        $v0, $t0, 16
    ctx->pc = 0x316d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << 16);
label_316d58:
    // 0x316d58: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x316d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_316d5c:
    // 0x316d5c: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x316d5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_316d60:
    // 0x316d60: 0x24044800  addiu       $a0, $zero, 0x4800
    ctx->pc = 0x316d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18432));
label_316d64:
    // 0x316d64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x316d64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_316d68:
    // 0x316d68: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x316d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_316d6c:
    // 0x316d6c: 0xc062f5c  jal         func_18BD70
label_316d70:
    if (ctx->pc == 0x316D70u) {
        ctx->pc = 0x316D74u;
        goto label_316d74;
    }
    ctx->pc = 0x316D6Cu;
    SET_GPR_U32(ctx, 31, 0x316D74u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x316D6Cu, 0x316D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316D74u;
label_316d74:
    // 0x316d74: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x316d74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_316d78:
    // 0x316d78: 0xc0630a8  jal         func_18C2A0
label_316d7c:
    if (ctx->pc == 0x316D7Cu) {
        ctx->pc = 0x316D80u;
        goto label_316d80;
    }
    ctx->pc = 0x316D78u;
    SET_GPR_U32(ctx, 31, 0x316D80u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x316D78u, 0x316D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316D80u;
label_316d80:
    // 0x316d80: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x316d80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316d84:
    // 0x316d84: 0x91040002  lbu         $a0, 0x2($t0)
    ctx->pc = 0x316d84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
label_316d88:
    // 0x316d88: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x316d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_316d8c:
    // 0x316d8c: 0xa1060002  sb          $a2, 0x2($t0)
    ctx->pc = 0x316d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 6));
label_316d90:
    // 0x316d90: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x316d90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316d94:
    // 0x316d94: 0x90e40002  lbu         $a0, 0x2($a3)
    ctx->pc = 0x316d94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_316d98:
    // 0x316d98: 0x24880001  addiu       $t0, $a0, 0x1
    ctx->pc = 0x316d98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_316d9c:
    // 0x316d9c: 0xa0e80002  sb          $t0, 0x2($a3)
    ctx->pc = 0x316d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 8));
label_316da0:
    // 0x316da0: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x316da0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316da4:
    // 0x316da4: 0xace01290  sw          $zero, 0x1290($a3)
    ctx->pc = 0x316da4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4752), GPR_U32(ctx, 0));
label_316da8:
    // 0x316da8: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x316da8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316dac:
    // 0x316dac: 0x8ce41298  lw          $a0, 0x1298($a3)
    ctx->pc = 0x316dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4760)));
label_316db0:
    // 0x316db0: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x316db0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_316db4:
    // 0x316db4: 0x8e090130  lw          $t1, 0x130($s0)
    ctx->pc = 0x316db4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_316db8:
    // 0x316db8: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x316db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_316dbc:
    // 0x316dbc: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x316dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_316dc0:
    // 0x316dc0: 0x78880000  lq          $t0, 0x0($a0)
    ctx->pc = 0x316dc0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_316dc4:
    // 0x316dc4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x316dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316dc8:
    // 0x316dc8: 0x24870120  addiu       $a3, $a0, 0x120
    ctx->pc = 0x316dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_316dcc:
    // 0x316dcc: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x316dccu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
label_316dd0:
    // 0x316dd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x316dd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316dd4:
    // 0x316dd4: 0x0  nop
    ctx->pc = 0x316dd4u;
    // NOP
label_316dd8:
    // 0x316dd8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x316dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_316ddc:
    // 0x316ddc: 0x3c04c348  lui         $a0, 0xC348
    ctx->pc = 0x316ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49992 << 16));
label_316de0:
    // 0x316de0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x316de0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316de4:
    // 0x316de4: 0x0  nop
    ctx->pc = 0x316de4u;
    // NOP
label_316de8:
    // 0x316de8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x316de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_316dec:
    // 0x316dec: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x316decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_316df0:
    // 0x316df0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x316df0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316df4:
    // 0x316df4: 0x0  nop
    ctx->pc = 0x316df4u;
    // NOP
label_316df8:
    // 0x316df8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x316df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_316dfc:
    // 0x316dfc: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x316dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_316e00:
    // 0x316e00: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x316e00u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316e04:
    // 0x316e04: 0x0  nop
    ctx->pc = 0x316e04u;
    // NOP
label_316e08:
    // 0x316e08: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x316e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_316e0c:
    // 0x316e0c: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x316e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316e10:
    // 0x316e10: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x316e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316e14:
    // 0x316e14: 0x8c421298  lw          $v0, 0x1298($v0)
    ctx->pc = 0x316e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
label_316e18:
    // 0x316e18: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x316e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_316e1c:
    // 0x316e1c: 0x8e070130  lw          $a3, 0x130($s0)
    ctx->pc = 0x316e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_316e20:
    // 0x316e20: 0xe22821  addu        $a1, $a3, $v0
    ctx->pc = 0x316e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_316e24:
    // 0x316e24: 0x25040120  addiu       $a0, $t0, 0x120
    ctx->pc = 0x316e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 288));
label_316e28:
    // 0x316e28: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x316e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_316e2c:
    // 0x316e2c: 0xc040bf4  jal         func_102FD0
label_316e30:
    if (ctx->pc == 0x316E30u) {
        ctx->pc = 0x316E34u;
        goto label_316e34;
    }
    ctx->pc = 0x316E2Cu;
    SET_GPR_U32(ctx, 31, 0x316E34u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x316E34u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x316E34u) { return; }
    ctx->pc = 0x316E34u;
label_316e34:
    // 0x316e34: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x316e34u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_316e38:
    // 0x316e38: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x316e38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316e3c:
    // 0x316e3c: 0x24e30120  addiu       $v1, $a3, 0x120
    ctx->pc = 0x316e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
label_316e40:
    // 0x316e40: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x316e40u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_316e44:
    // 0x316e44: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x316e44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316e48:
    // 0x316e48: 0x24a30170  addiu       $v1, $a1, 0x170
    ctx->pc = 0x316e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 368));
label_316e4c:
    // 0x316e4c: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x316e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
label_316e50:
    // 0x316e50: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x316e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316e54:
    // 0x316e54: 0x8c831298  lw          $v1, 0x1298($a0)
    ctx->pc = 0x316e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4760)));
label_316e58:
    // 0x316e58: 0x34180  sll         $t0, $v1, 6
    ctx->pc = 0x316e58u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_316e5c:
    // 0x316e5c: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x316e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_316e60:
    // 0x316e60: 0x683021  addu        $a2, $v1, $t0
    ctx->pc = 0x316e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_316e64:
    // 0x316e64: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x316e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
label_316e68:
    // 0x316e68: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x316e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_316e6c:
    // 0x316e6c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x316e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_316e70:
    // 0x316e70: 0x42c38  dsll        $a1, $a0, 16
    ctx->pc = 0x316e70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 16);
label_316e74:
    // 0x316e74: 0x34a4ffff  ori         $a0, $a1, 0xFFFF
    ctx->pc = 0x316e74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_316e78:
    // 0x316e78: 0x643824  and         $a3, $v1, $a0
    ctx->pc = 0x316e78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_316e7c:
    // 0x316e7c: 0x24044600  addiu       $a0, $zero, 0x4600
    ctx->pc = 0x316e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17920));
label_316e80:
    // 0x316e80: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x316e80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_316e84:
    // 0x316e84: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x316e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_316e88:
    // 0x316e88: 0xc062f5c  jal         func_18BD70
label_316e8c:
    if (ctx->pc == 0x316E8Cu) {
        ctx->pc = 0x316E90u;
        goto label_316e90;
    }
    ctx->pc = 0x316E88u;
    SET_GPR_U32(ctx, 31, 0x316E90u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x316E88u, 0x316E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316E90u;
label_316e90:
    // 0x316e90: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x316e90u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_316e94:
    // 0x316e94: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x316e94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_316e98:
    // 0x316e98: 0xc0630a8  jal         func_18C2A0
label_316e9c:
    if (ctx->pc == 0x316E9Cu) {
        ctx->pc = 0x316EA0u;
        goto label_316ea0;
    }
    ctx->pc = 0x316E98u;
    SET_GPR_U32(ctx, 31, 0x316EA0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x316E98u, 0x316EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316EA0u;
label_316ea0:
    // 0x316ea0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x316ea0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_316ea4:
    // 0x316ea4: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x316ea4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316ea8:
    // 0x316ea8: 0x91240002  lbu         $a0, 0x2($t1)
    ctx->pc = 0x316ea8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
label_316eac:
    // 0x316eac: 0x248b0001  addiu       $t3, $a0, 0x1
    ctx->pc = 0x316eacu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_316eb0:
    // 0x316eb0: 0xa12b0002  sb          $t3, 0x2($t1)
    ctx->pc = 0x316eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 11));
label_316eb4:
    // 0x316eb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x316eb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316eb8:
    // 0x316eb8: 0x0  nop
    ctx->pc = 0x316eb8u;
    // NOP
label_316ebc:
    // 0x316ebc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x316ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_316ec0:
    // 0x316ec0: 0x3c05c348  lui         $a1, 0xC348
    ctx->pc = 0x316ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49992 << 16));
label_316ec4:
    // 0x316ec4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x316ec4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316ec8:
    // 0x316ec8: 0x0  nop
    ctx->pc = 0x316ec8u;
    // NOP
label_316ecc:
    // 0x316ecc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x316eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_316ed0:
    // 0x316ed0: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x316ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
label_316ed4:
    // 0x316ed4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x316ed4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316ed8:
    // 0x316ed8: 0x0  nop
    ctx->pc = 0x316ed8u;
    // NOP
label_316edc:
    // 0x316edc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x316edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_316ee0:
    // 0x316ee0: 0x3c0a3f80  lui         $t2, 0x3F80
    ctx->pc = 0x316ee0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
label_316ee4:
    // 0x316ee4: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x316ee4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316ee8:
    // 0x316ee8: 0x0  nop
    ctx->pc = 0x316ee8u;
    // NOP
label_316eec:
    // 0x316eec: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x316eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_316ef0:
    // 0x316ef0: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x316ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316ef4:
    // 0x316ef4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x316ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316ef8:
    // 0x316ef8: 0x8ca61298  lw          $a2, 0x1298($a1)
    ctx->pc = 0x316ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4760)));
label_316efc:
    // 0x316efc: 0x62180  sll         $a0, $a2, 6
    ctx->pc = 0x316efcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_316f00:
    // 0x316f00: 0x8e090130  lw          $t1, 0x130($s0)
    ctx->pc = 0x316f00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_316f04:
    // 0x316f04: 0x1242821  addu        $a1, $t1, $a0
    ctx->pc = 0x316f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_316f08:
    // 0x316f08: 0x24e40120  addiu       $a0, $a3, 0x120
    ctx->pc = 0x316f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
label_316f0c:
    // 0x316f0c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x316f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_316f10:
    // 0x316f10: 0xc040bf4  jal         func_102FD0
label_316f14:
    if (ctx->pc == 0x316F14u) {
        ctx->pc = 0x316F18u;
        goto label_316f18;
    }
    ctx->pc = 0x316F10u;
    SET_GPR_U32(ctx, 31, 0x316F18u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x316F18u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x316F18u) { return; }
    ctx->pc = 0x316F18u;
label_316f18:
    // 0x316f18: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x316f18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_316f1c:
    // 0x316f1c: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x316f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316f20:
    // 0x316f20: 0xc4e101a0  lwc1        $f1, 0x1A0($a3)
    ctx->pc = 0x316f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_316f24:
    // 0x316f24: 0x3c043ba3  lui         $a0, 0x3BA3
    ctx->pc = 0x316f24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15267 << 16));
label_316f28:
    // 0x316f28: 0x3485d70a  ori         $a1, $a0, 0xD70A
    ctx->pc = 0x316f28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
label_316f2c:
    // 0x316f2c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x316f2cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316f30:
    // 0x316f30: 0x0  nop
    ctx->pc = 0x316f30u;
    // NOP
label_316f34:
    // 0x316f34: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x316f34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_316f38:
    // 0x316f38: 0xe4e001a0  swc1        $f0, 0x1A0($a3)
    ctx->pc = 0x316f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 416), bits); }
label_316f3c:
    // 0x316f3c: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x316f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316f40:
    // 0x316f40: 0xc4e101a4  lwc1        $f1, 0x1A4($a3)
    ctx->pc = 0x316f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_316f44:
    // 0x316f44: 0x3c043ba3  lui         $a0, 0x3BA3
    ctx->pc = 0x316f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15267 << 16));
label_316f48:
    // 0x316f48: 0x3484d70a  ori         $a0, $a0, 0xD70A
    ctx->pc = 0x316f48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
label_316f4c:
    // 0x316f4c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x316f4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316f50:
    // 0x316f50: 0x0  nop
    ctx->pc = 0x316f50u;
    // NOP
label_316f54:
    // 0x316f54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x316f54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_316f58:
    // 0x316f58: 0xe4e001a4  swc1        $f0, 0x1A4($a3)
    ctx->pc = 0x316f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 420), bits); }
label_316f5c:
    // 0x316f5c: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x316f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316f60:
    // 0x316f60: 0xc4e101a8  lwc1        $f1, 0x1A8($a3)
    ctx->pc = 0x316f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_316f64:
    // 0x316f64: 0x3c043ba3  lui         $a0, 0x3BA3
    ctx->pc = 0x316f64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15267 << 16));
label_316f68:
    // 0x316f68: 0x3484d70a  ori         $a0, $a0, 0xD70A
    ctx->pc = 0x316f68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
label_316f6c:
    // 0x316f6c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x316f6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316f70:
    // 0x316f70: 0x0  nop
    ctx->pc = 0x316f70u;
    // NOP
label_316f74:
    // 0x316f74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x316f74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_316f78:
    // 0x316f78: 0xe4e001a8  swc1        $f0, 0x1A8($a3)
    ctx->pc = 0x316f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 424), bits); }
label_316f7c:
    // 0x316f7c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x316f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316f80:
    // 0x316f80: 0x8c831290  lw          $v1, 0x1290($a0)
    ctx->pc = 0x316f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4752)));
label_316f84:
    // 0x316f84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x316f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_316f88:
    // 0x316f88: 0xac831290  sw          $v1, 0x1290($a0)
    ctx->pc = 0x316f88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4752), GPR_U32(ctx, 3));
label_316f8c:
    // 0x316f8c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x316f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316f90:
    // 0x316f90: 0x8ca31290  lw          $v1, 0x1290($a1)
    ctx->pc = 0x316f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4752)));
label_316f94:
    // 0x316f94: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x316f94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_316f98:
    // 0x316f98: 0x142004f2  bnez        $at, . + 4 + (0x4F2 << 2)
label_316f9c:
    if (ctx->pc == 0x316F9Cu) {
        ctx->pc = 0x316FA0u;
        goto label_316fa0;
    }
    ctx->pc = 0x316F98u;
    {
        const bool branch_taken_0x316f98 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x316f98) {
            ctx->pc = 0x318364u;
            goto label_318364;
        }
    }
    ctx->pc = 0x316FA0u;
label_316fa0:
    // 0x316fa0: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x316fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316fa4:
    // 0x316fa4: 0xacc01290  sw          $zero, 0x1290($a2)
    ctx->pc = 0x316fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4752), GPR_U32(ctx, 0));
label_316fa8:
    // 0x316fa8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x316fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316fac:
    // 0x316fac: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x316facu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_316fb0:
    // 0x316fb0: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x316fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_316fb4:
    // 0x316fb4: 0xa0850002  sb          $a1, 0x2($a0)
    ctx->pc = 0x316fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
label_316fb8:
    // 0x316fb8: 0x100004ea  b           . + 4 + (0x4EA << 2)
label_316fbc:
    if (ctx->pc == 0x316FBCu) {
        ctx->pc = 0x316FC0u;
        goto label_316fc0;
    }
    ctx->pc = 0x316FB8u;
    {
        const bool branch_taken_0x316fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x316fb8) {
            ctx->pc = 0x318364u;
            goto label_318364;
        }
    }
    ctx->pc = 0x316FC0u;
label_316fc0:
    // 0x316fc0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x316fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_316fc4:
    // 0x316fc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x316fc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316fc8:
    // 0x316fc8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x316fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316fcc:
    // 0x316fcc: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x316fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
label_316fd0:
    // 0x316fd0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x316fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_316fd4:
    // 0x316fd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x316fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316fd8:
    // 0x316fd8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x316fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316fdc:
    // 0x316fdc: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x316fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
label_316fe0:
    // 0x316fe0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x316fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_316fe4:
    // 0x316fe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x316fe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316fe8:
    // 0x316fe8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x316fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316fec:
    // 0x316fec: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x316fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
label_316ff0:
    // 0x316ff0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x316ff0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316ff4:
    // 0x316ff4: 0x0  nop
    ctx->pc = 0x316ff4u;
    // NOP
label_316ff8:
    // 0x316ff8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x316ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_316ffc:
    // 0x316ffc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x316ffcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317000:
    // 0x317000: 0x0  nop
    ctx->pc = 0x317000u;
    // NOP
label_317004:
    // 0x317004: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x317004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_317008:
    // 0x317008: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317008u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31700c:
    // 0x31700c: 0x0  nop
    ctx->pc = 0x31700cu;
    // NOP
label_317010:
    // 0x317010: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x317010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_317014:
    // 0x317014: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x317014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_317018:
    // 0x317018: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x317018u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31701c:
    // 0x31701c: 0x0  nop
    ctx->pc = 0x31701cu;
    // NOP
label_317020:
    // 0x317020: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x317020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_317024:
    // 0x317024: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x317024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_317028:
    // 0x317028: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x317028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_31702c:
    // 0x31702c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x31702cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
label_317030:
    // 0x317030: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x317030u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_317034:
    // 0x317034: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x317034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317038:
    // 0x317038: 0x41438  dsll        $v0, $a0, 16
    ctx->pc = 0x317038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 16);
label_31703c:
    // 0x31703c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31703cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_317040:
    // 0x317040: 0xc23824  and         $a3, $a2, $v0
    ctx->pc = 0x317040u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_317044:
    // 0x317044: 0x24044500  addiu       $a0, $zero, 0x4500
    ctx->pc = 0x317044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17664));
label_317048:
    // 0x317048: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x317048u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31704c:
    // 0x31704c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x31704cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_317050:
    // 0x317050: 0xc062f5c  jal         func_18BD70
label_317054:
    if (ctx->pc == 0x317054u) {
        ctx->pc = 0x317058u;
        goto label_317058;
    }
    ctx->pc = 0x317050u;
    SET_GPR_U32(ctx, 31, 0x317058u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x317050u, 0x317058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317058u;
label_317058:
    // 0x317058: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x317058u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31705c:
    // 0x31705c: 0xc0630a8  jal         func_18C2A0
label_317060:
    if (ctx->pc == 0x317060u) {
        ctx->pc = 0x317064u;
        goto label_317064;
    }
    ctx->pc = 0x31705Cu;
    SET_GPR_U32(ctx, 31, 0x317064u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31705Cu, 0x317064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317064u;
label_317064:
    // 0x317064: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x317064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
label_317068:
    // 0x317068: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x317068u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31706c:
    // 0x31706c: 0x0  nop
    ctx->pc = 0x31706cu;
    // NOP
label_317070:
    // 0x317070: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x317070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_317074:
    // 0x317074: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x317074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_317078:
    // 0x317078: 0x8c8b1298  lw          $t3, 0x1298($a0)
    ctx->pc = 0x317078u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4760)));
label_31707c:
    // 0x31707c: 0xb1180  sll         $v0, $t3, 6
    ctx->pc = 0x31707cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 6));
label_317080:
    // 0x317080: 0x8e0a0130  lw          $t2, 0x130($s0)
    ctx->pc = 0x317080u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_317084:
    // 0x317084: 0x1423821  addu        $a3, $t2, $v0
    ctx->pc = 0x317084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_317088:
    // 0x317088: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x317088u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
label_31708c:
    // 0x31708c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x31708cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_317090:
    // 0x317090: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x317090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317094:
    // 0x317094: 0x41438  dsll        $v0, $a0, 16
    ctx->pc = 0x317094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 16);
label_317098:
    // 0x317098: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x317098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_31709c:
    // 0x31709c: 0xc23824  and         $a3, $a2, $v0
    ctx->pc = 0x31709cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_3170a0:
    // 0x3170a0: 0x24045703  addiu       $a0, $zero, 0x5703
    ctx->pc = 0x3170a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22275));
label_3170a4:
    // 0x3170a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3170a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3170a8:
    // 0x3170a8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3170a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3170ac:
    // 0x3170ac: 0xc062f5c  jal         func_18BD70
label_3170b0:
    if (ctx->pc == 0x3170B0u) {
        ctx->pc = 0x3170B4u;
        goto label_3170b4;
    }
    ctx->pc = 0x3170ACu;
    SET_GPR_U32(ctx, 31, 0x3170B4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3170ACu, 0x3170B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3170B4u;
label_3170b4:
    // 0x3170b4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3170b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3170b8:
    // 0x3170b8: 0xc0630a8  jal         func_18C2A0
label_3170bc:
    if (ctx->pc == 0x3170BCu) {
        ctx->pc = 0x3170C0u;
        goto label_3170c0;
    }
    ctx->pc = 0x3170B8u;
    SET_GPR_U32(ctx, 31, 0x3170C0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3170B8u, 0x3170C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3170C0u;
label_3170c0:
    // 0x3170c0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3170c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3170c4:
    // 0x3170c4: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x3170c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3170c8:
    // 0x3170c8: 0x8d240130  lw          $a0, 0x130($t1)
    ctx->pc = 0x3170c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 304)));
label_3170cc:
    // 0x3170cc: 0x4403c  dsll32      $t0, $a0, 0
    ctx->pc = 0x3170ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << (32 + 0));
label_3170d0:
    // 0x3170d0: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x3170d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
label_3170d4:
    // 0x3170d4: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x3170d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3170d8:
    // 0x3170d8: 0x72438  dsll        $a0, $a3, 16
    ctx->pc = 0x3170d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 16);
label_3170dc:
    // 0x3170dc: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x3170dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_3170e0:
    // 0x3170e0: 0x1023824  and         $a3, $t0, $v0
    ctx->pc = 0x3170e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_3170e4:
    // 0x3170e4: 0x24045703  addiu       $a0, $zero, 0x5703
    ctx->pc = 0x3170e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22275));
label_3170e8:
    // 0x3170e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3170e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3170ec:
    // 0x3170ec: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3170ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3170f0:
    // 0x3170f0: 0xc062f5c  jal         func_18BD70
label_3170f4:
    if (ctx->pc == 0x3170F4u) {
        ctx->pc = 0x3170F8u;
        goto label_3170f8;
    }
    ctx->pc = 0x3170F0u;
    SET_GPR_U32(ctx, 31, 0x3170F8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3170F0u, 0x3170F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3170F8u;
label_3170f8:
    // 0x3170f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3170f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3170fc:
    // 0x3170fc: 0xc0630a8  jal         func_18C2A0
label_317100:
    if (ctx->pc == 0x317100u) {
        ctx->pc = 0x317104u;
        goto label_317104;
    }
    ctx->pc = 0x3170FCu;
    SET_GPR_U32(ctx, 31, 0x317104u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3170FCu, 0x317104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317104u;
label_317104:
    // 0x317104: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317104u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317108:
    // 0x317108: 0x0  nop
    ctx->pc = 0x317108u;
    // NOP
label_31710c:
    // 0x31710c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x31710cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_317110:
    // 0x317110: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317110u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317114:
    // 0x317114: 0x0  nop
    ctx->pc = 0x317114u;
    // NOP
label_317118:
    // 0x317118: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x317118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_31711c:
    // 0x31711c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x31711cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_317120:
    // 0x317120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x317120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317124:
    // 0x317124: 0x0  nop
    ctx->pc = 0x317124u;
    // NOP
label_317128:
    // 0x317128: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x317128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_31712c:
    // 0x31712c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x31712cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_317130:
    // 0x317130: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x317130u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317134:
    // 0x317134: 0x0  nop
    ctx->pc = 0x317134u;
    // NOP
label_317138:
    // 0x317138: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x317138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_31713c:
    // 0x31713c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31713cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317140:
    // 0x317140: 0x0  nop
    ctx->pc = 0x317140u;
    // NOP
label_317144:
    // 0x317144: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x317144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_317148:
    // 0x317148: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317148u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31714c:
    // 0x31714c: 0x0  nop
    ctx->pc = 0x31714cu;
    // NOP
label_317150:
    // 0x317150: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x317150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_317154:
    // 0x317154: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317158:
    // 0x317158: 0x0  nop
    ctx->pc = 0x317158u;
    // NOP
label_31715c:
    // 0x31715c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x31715cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_317160:
    // 0x317160: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x317160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_317164:
    // 0x317164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x317164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317168:
    // 0x317168: 0x0  nop
    ctx->pc = 0x317168u;
    // NOP
label_31716c:
    // 0x31716c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x31716cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_317170:
    // 0x317170: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x317170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_317174:
    // 0x317174: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x317174u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_317178:
    // 0x317178: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x317178u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_31717c:
    // 0x31717c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31717cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317180:
    // 0x317180: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x317180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
label_317184:
    // 0x317184: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x317184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_317188:
    // 0x317188: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x317188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_31718c:
    // 0x31718c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x31718cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_317190:
    // 0x317190: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x317190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_317194:
    // 0x317194: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x317194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
label_317198:
    // 0x317198: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x317198u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_31719c:
    // 0x31719c: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x31719cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3171a0:
    // 0x3171a0: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x3171a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
label_3171a4:
    // 0x3171a4: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x3171a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3171a8:
    // 0x3171a8: 0x833024  and         $a2, $a0, $v1
    ctx->pc = 0x3171a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3171ac:
    // 0x3171ac: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x3171acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_3171b0:
    // 0x3171b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3171b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3171b4:
    // 0x3171b4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3171b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_3171b8:
    // 0x3171b8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3171b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_3171bc:
    // 0x3171bc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3171bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3171c0:
    // 0x3171c0: 0x34438  dsll        $t0, $v1, 16
    ctx->pc = 0x3171c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << 16);
label_3171c4:
    // 0x3171c4: 0x3503ffff  ori         $v1, $t0, 0xFFFF
    ctx->pc = 0x3171c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_3171c8:
    // 0x3171c8: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x3171c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3171cc:
    // 0x3171cc: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x3171ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
label_3171d0:
    // 0x3171d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3171d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3171d4:
    // 0x3171d4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3171d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_3171d8:
    // 0x3171d8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3171d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_3171dc:
    // 0x3171dc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3171dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3171e0:
    // 0x3171e0: 0x35438  dsll        $t2, $v1, 16
    ctx->pc = 0x3171e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << 16);
label_3171e4:
    // 0x3171e4: 0x3543ffff  ori         $v1, $t2, 0xFFFF
    ctx->pc = 0x3171e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_3171e8:
    // 0x3171e8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3171e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3171ec:
    // 0x3171ec: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3171ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_3171f0:
    // 0x3171f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3171f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3171f4:
    // 0x3171f4: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x3171f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_3171f8:
    // 0x3171f8: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x3171f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
label_3171fc:
    // 0x3171fc: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x3171fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
label_317200:
    // 0x317200: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x317200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317204:
    // 0x317204: 0x34438  dsll        $t0, $v1, 16
    ctx->pc = 0x317204u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << 16);
label_317208:
    // 0x317208: 0x3504ffff  ori         $a0, $t0, 0xFFFF
    ctx->pc = 0x317208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_31720c:
    // 0x31720c: 0xe41824  and         $v1, $a3, $a0
    ctx->pc = 0x31720cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
label_317210:
    // 0x317210: 0x3483c  dsll32      $t1, $v1, 0
    ctx->pc = 0x317210u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 0));
label_317214:
    // 0x317214: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x317214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_317218:
    // 0x317218: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x317218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_31721c:
    // 0x31721c: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x31721cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
label_317220:
    // 0x317220: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x317220u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
label_317224:
    // 0x317224: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x317224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317228:
    // 0x317228: 0x34438  dsll        $t0, $v1, 16
    ctx->pc = 0x317228u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << 16);
label_31722c:
    // 0x31722c: 0x3504ffff  ori         $a0, $t0, 0xFFFF
    ctx->pc = 0x31722cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_317230:
    // 0x317230: 0xe41024  and         $v0, $a3, $a0
    ctx->pc = 0x317230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
label_317234:
    // 0x317234: 0x1223825  or          $a3, $t1, $v0
    ctx->pc = 0x317234u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_317238:
    // 0x317238: 0x24041100  addiu       $a0, $zero, 0x1100
    ctx->pc = 0x317238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4352));
label_31723c:
    // 0x31723c: 0xc0631f0  jal         func_18C7C0
label_317240:
    if (ctx->pc == 0x317240u) {
        ctx->pc = 0x317244u;
        goto label_317244;
    }
    ctx->pc = 0x31723Cu;
    SET_GPR_U32(ctx, 31, 0x317244u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x31723Cu, 0x317244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317244u;
label_317244:
    // 0x317244: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x317244u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_317248:
    // 0x317248: 0xc06332c  jal         func_18CCB0
label_31724c:
    if (ctx->pc == 0x31724Cu) {
        ctx->pc = 0x317250u;
        goto label_317250;
    }
    ctx->pc = 0x317248u;
    SET_GPR_U32(ctx, 31, 0x317250u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x317248u, 0x317250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317250u;
label_317250:
    // 0x317250: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317250u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317254:
    // 0x317254: 0x0  nop
    ctx->pc = 0x317254u;
    // NOP
label_317258:
    // 0x317258: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x317258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_31725c:
    // 0x31725c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31725cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317260:
    // 0x317260: 0x0  nop
    ctx->pc = 0x317260u;
    // NOP
label_317264:
    // 0x317264: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x317264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_317268:
    // 0x317268: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x317268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_31726c:
    // 0x31726c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31726cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317270:
    // 0x317270: 0x0  nop
    ctx->pc = 0x317270u;
    // NOP
label_317274:
    // 0x317274: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x317274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_317278:
    // 0x317278: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x317278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_31727c:
    // 0x31727c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31727cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317280:
    // 0x317280: 0x0  nop
    ctx->pc = 0x317280u;
    // NOP
label_317284:
    // 0x317284: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x317284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_317288:
    // 0x317288: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x317288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_31728c:
    // 0x31728c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31728cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_317290:
    // 0x317290: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x317290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_317294:
    // 0x317294: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x317294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317298:
    // 0x317298: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x317298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
label_31729c:
    // 0x31729c: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x31729cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_3172a0:
    // 0x3172a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3172a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3172a4:
    // 0x3172a4: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x3172a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_3172a8:
    // 0x3172a8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x3172a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3172ac:
    // 0x3172ac: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x3172acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_3172b0:
    // 0x3172b0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3172b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_3172b4:
    // 0x3172b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3172b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3172b8:
    // 0x3172b8: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x3172b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
label_3172bc:
    // 0x3172bc: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x3172bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3172c0:
    // 0x3172c0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3172c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_3172c4:
    // 0x3172c4: 0xa24025  or          $t0, $a1, $v0
    ctx->pc = 0x3172c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3172c8:
    // 0x3172c8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x3172c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3172cc:
    // 0x3172cc: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x3172ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
label_3172d0:
    // 0x3172d0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3172d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_3172d4:
    // 0x3172d4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3172d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3172d8:
    // 0x3172d8: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x3172d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
label_3172dc:
    // 0x3172dc: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x3172dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_3172e0:
    // 0x3172e0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x3172e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3172e4:
    // 0x3172e4: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x3172e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
label_3172e8:
    // 0x3172e8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3172e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3172ec:
    // 0x3172ec: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x3172ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_3172f0:
    // 0x3172f0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3172f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_3172f4:
    // 0x3172f4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3172f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3172f8:
    // 0x3172f8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3172f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_3172fc:
    // 0x3172fc: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x3172fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_317300:
    // 0x317300: 0xa46024  and         $t4, $a1, $a0
    ctx->pc = 0x317300u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_317304:
    // 0x317304: 0xcc5825  or          $t3, $a2, $t4
    ctx->pc = 0x317304u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) | GPR_U64(ctx, 12));
label_317308:
    // 0x317308: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x317308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_31730c:
    // 0x31730c: 0x8c4a0130  lw          $t2, 0x130($v0)
    ctx->pc = 0x31730cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_317310:
    // 0x317310: 0xa283c  dsll32      $a1, $t2, 0
    ctx->pc = 0x317310u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) << (32 + 0));
label_317314:
    // 0x317314: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x317314u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_317318:
    // 0x317318: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x317318u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_31731c:
    // 0x31731c: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x31731cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
label_317320:
    // 0x317320: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x317320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_317324:
    // 0x317324: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x317324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_317328:
    // 0x317328: 0x4383c  dsll32      $a3, $a0, 0
    ctx->pc = 0x317328u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 0));
label_31732c:
    // 0x31732c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31732cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_317330:
    // 0x317330: 0x8c890130  lw          $t1, 0x130($a0)
    ctx->pc = 0x317330u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_317334:
    // 0x317334: 0x9303c  dsll32      $a2, $t1, 0
    ctx->pc = 0x317334u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) << (32 + 0));
label_317338:
    // 0x317338: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x317338u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_31733c:
    // 0x31733c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x31733cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317340:
    // 0x317340: 0x42c38  dsll        $a1, $a0, 16
    ctx->pc = 0x317340u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 16);
label_317344:
    // 0x317344: 0x34a4ffff  ori         $a0, $a1, 0xFFFF
    ctx->pc = 0x317344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_317348:
    // 0x317348: 0xc41024  and         $v0, $a2, $a0
    ctx->pc = 0x317348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_31734c:
    // 0x31734c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x31734cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_317350:
    // 0x317350: 0x24041100  addiu       $a0, $zero, 0x1100
    ctx->pc = 0x317350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4352));
label_317354:
    // 0x317354: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x317354u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_317358:
    // 0x317358: 0x71603628  paddub      $a2, $t3, $zero
    ctx->pc = 0x317358u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
label_31735c:
    // 0x31735c: 0xc0631f0  jal         func_18C7C0
label_317360:
    if (ctx->pc == 0x317360u) {
        ctx->pc = 0x317364u;
        goto label_317364;
    }
    ctx->pc = 0x31735Cu;
    SET_GPR_U32(ctx, 31, 0x317364u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x31735Cu, 0x317364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317364u;
label_317364:
    // 0x317364: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x317364u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_317368:
    // 0x317368: 0xc06332c  jal         func_18CCB0
label_31736c:
    if (ctx->pc == 0x31736Cu) {
        ctx->pc = 0x317370u;
        goto label_317370;
    }
    ctx->pc = 0x317368u;
    SET_GPR_U32(ctx, 31, 0x317370u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x317368u, 0x317370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317370u;
label_317370:
    // 0x317370: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x317370u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_317374:
    // 0x317374: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317378:
    // 0x317378: 0x0  nop
    ctx->pc = 0x317378u;
    // NOP
label_31737c:
    // 0x31737c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x31737cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_317380:
    // 0x317380: 0x3c02c416  lui         $v0, 0xC416
    ctx->pc = 0x317380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50198 << 16));
label_317384:
    // 0x317384: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x317384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317388:
    // 0x317388: 0x0  nop
    ctx->pc = 0x317388u;
    // NOP
label_31738c:
    // 0x31738c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x31738cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_317390:
    // 0x317390: 0x3c02c4fa  lui         $v0, 0xC4FA
    ctx->pc = 0x317390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50426 << 16));
label_317394:
    // 0x317394: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x317394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317398:
    // 0x317398: 0x0  nop
    ctx->pc = 0x317398u;
    // NOP
label_31739c:
    // 0x31739c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x31739cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_3173a0:
    // 0x3173a0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3173a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3173a4:
    // 0x3173a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3173a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3173a8:
    // 0x3173a8: 0x0  nop
    ctx->pc = 0x3173a8u;
    // NOP
label_3173ac:
    // 0x3173ac: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x3173acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_3173b0:
    // 0x3173b0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x3173b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3173b4:
    // 0x3173b4: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x3173b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_3173b8:
    // 0x3173b8: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3173b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_3173bc:
    // 0x3173bc: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x3173bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3173c0:
    // 0x3173c0: 0x41438  dsll        $v0, $a0, 16
    ctx->pc = 0x3173c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 16);
label_3173c4:
    // 0x3173c4: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x3173c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3173c8:
    // 0x3173c8: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x3173c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_3173cc:
    // 0x3173cc: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x3173ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_3173d0:
    // 0x3173d0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3173d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3173d4:
    // 0x3173d4: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x3173d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
label_3173d8:
    // 0x3173d8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x3173d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_3173dc:
    // 0x3173dc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3173dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3173e0:
    // 0x3173e0: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x3173e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
label_3173e4:
    // 0x3173e4: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x3173e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3173e8:
    // 0x3173e8: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x3173e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_3173ec:
    // 0x3173ec: 0xe32825  or          $a1, $a3, $v1
    ctx->pc = 0x3173ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_3173f0:
    // 0x3173f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3173f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3173f4:
    // 0x3173f4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3173f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_3173f8:
    // 0x3173f8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3173f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_3173fc:
    // 0x3173fc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3173fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317400:
    // 0x317400: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x317400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
label_317404:
    // 0x317404: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x317404u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_317408:
    // 0x317408: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x317408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_31740c:
    // 0x31740c: 0x4403c  dsll32      $t0, $a0, 0
    ctx->pc = 0x31740cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << (32 + 0));
label_317410:
    // 0x317410: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x317410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_317414:
    // 0x317414: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x317414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_317418:
    // 0x317418: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x317418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_31741c:
    // 0x31741c: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x31741cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317420:
    // 0x317420: 0x72438  dsll        $a0, $a3, 16
    ctx->pc = 0x317420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 16);
label_317424:
    // 0x317424: 0x3486ffff  ori         $a2, $a0, 0xFFFF
    ctx->pc = 0x317424u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_317428:
    // 0x317428: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x317428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_31742c:
    // 0x31742c: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x31742cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_317430:
    // 0x317430: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x317430u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_317434:
    // 0x317434: 0x8d040130  lw          $a0, 0x130($t0)
    ctx->pc = 0x317434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 304)));
label_317438:
    // 0x317438: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x317438u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
label_31743c:
    // 0x31743c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x31743cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_317440:
    // 0x317440: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x317440u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317444:
    // 0x317444: 0x72438  dsll        $a0, $a3, 16
    ctx->pc = 0x317444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 16);
label_317448:
    // 0x317448: 0x3488ffff  ori         $t0, $a0, 0xFFFF
    ctx->pc = 0x317448u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_31744c:
    // 0x31744c: 0xc83824  and         $a3, $a2, $t0
    ctx->pc = 0x31744cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
label_317450:
    // 0x317450: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x317450u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
label_317454:
    // 0x317454: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x317454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_317458:
    // 0x317458: 0x8c840130  lw          $a0, 0x130($a0)
    ctx->pc = 0x317458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_31745c:
    // 0x31745c: 0x4483c  dsll32      $t1, $a0, 0
    ctx->pc = 0x31745cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 0));
label_317460:
    // 0x317460: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x317460u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
label_317464:
    // 0x317464: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x317464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317468:
    // 0x317468: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x317468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_31746c:
    // 0x31746c: 0x3488ffff  ori         $t0, $a0, 0xFFFF
    ctx->pc = 0x31746cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_317470:
    // 0x317470: 0x1282024  and         $a0, $t1, $t0
    ctx->pc = 0x317470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
label_317474:
    // 0x317474: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x317474u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_317478:
    // 0x317478: 0x24041102  addiu       $a0, $zero, 0x1102
    ctx->pc = 0x317478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4354));
label_31747c:
    // 0x31747c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x31747cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_317480:
    // 0x317480: 0xc0631f0  jal         func_18C7C0
label_317484:
    if (ctx->pc == 0x317484u) {
        ctx->pc = 0x317488u;
        goto label_317488;
    }
    ctx->pc = 0x317480u;
    SET_GPR_U32(ctx, 31, 0x317488u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x317480u, 0x317488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317488u;
label_317488:
    // 0x317488: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x317488u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31748c:
    // 0x31748c: 0xc06332c  jal         func_18CCB0
label_317490:
    if (ctx->pc == 0x317490u) {
        ctx->pc = 0x317494u;
        goto label_317494;
    }
    ctx->pc = 0x31748Cu;
    SET_GPR_U32(ctx, 31, 0x317494u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x31748Cu, 0x317494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317494u;
label_317494:
    // 0x317494: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x317494u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_317498:
    // 0x317498: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317498u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31749c:
    // 0x31749c: 0x0  nop
    ctx->pc = 0x31749cu;
    // NOP
label_3174a0:
    // 0x3174a0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3174a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3174a4:
    // 0x3174a4: 0x3c084416  lui         $t0, 0x4416
    ctx->pc = 0x3174a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17430 << 16));
label_3174a8:
    // 0x3174a8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3174a8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3174ac:
    // 0x3174ac: 0x0  nop
    ctx->pc = 0x3174acu;
    // NOP
label_3174b0:
    // 0x3174b0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3174b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3174b4:
    // 0x3174b4: 0x3c02c4fa  lui         $v0, 0xC4FA
    ctx->pc = 0x3174b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50426 << 16));
label_3174b8:
    // 0x3174b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3174b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3174bc:
    // 0x3174bc: 0x0  nop
    ctx->pc = 0x3174bcu;
    // NOP
label_3174c0:
    // 0x3174c0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3174c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_3174c4:
    // 0x3174c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3174c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3174c8:
    // 0x3174c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3174c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3174cc:
    // 0x3174cc: 0x0  nop
    ctx->pc = 0x3174ccu;
    // NOP
label_3174d0:
    // 0x3174d0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x3174d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_3174d4:
    // 0x3174d4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x3174d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3174d8:
    // 0x3174d8: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x3174d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_3174dc:
    // 0x3174dc: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x3174dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
label_3174e0:
    // 0x3174e0: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x3174e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3174e4:
    // 0x3174e4: 0x52438  dsll        $a0, $a1, 16
    ctx->pc = 0x3174e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << 16);
label_3174e8:
    // 0x3174e8: 0x3486ffff  ori         $a2, $a0, 0xFFFF
    ctx->pc = 0x3174e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_3174ec:
    // 0x3174ec: 0xe61824  and         $v1, $a3, $a2
    ctx->pc = 0x3174ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
label_3174f0:
    // 0x3174f0: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x3174f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
label_3174f4:
    // 0x3174f4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3174f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3174f8:
    // 0x3174f8: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x3174f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
label_3174fc:
    // 0x3174fc: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x3174fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_317500:
    // 0x317500: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x317500u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317504:
    // 0x317504: 0x51c38  dsll        $v1, $a1, 16
    ctx->pc = 0x317504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 16);
label_317508:
    // 0x317508: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x317508u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_31750c:
    // 0x31750c: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x31750cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_317510:
    // 0x317510: 0xe34025  or          $t0, $a3, $v1
    ctx->pc = 0x317510u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_317514:
    // 0x317514: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x317514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_317518:
    // 0x317518: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x317518u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
label_31751c:
    // 0x31751c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x31751cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_317520:
    // 0x317520: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x317520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317524:
    // 0x317524: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x317524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
label_317528:
    // 0x317528: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x317528u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_31752c:
    // 0x31752c: 0xc52024  and         $a0, $a2, $a1
    ctx->pc = 0x31752cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_317530:
    // 0x317530: 0x4383c  dsll32      $a3, $a0, 0
    ctx->pc = 0x317530u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 0));
label_317534:
    // 0x317534: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x317534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_317538:
    // 0x317538: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x317538u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
label_31753c:
    // 0x31753c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x31753cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_317540:
    // 0x317540: 0x340affff  ori         $t2, $zero, 0xFFFF
    ctx->pc = 0x317540u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317544:
    // 0x317544: 0xa2438  dsll        $a0, $t2, 16
    ctx->pc = 0x317544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) << 16);
label_317548:
    // 0x317548: 0x3489ffff  ori         $t1, $a0, 0xFFFF
    ctx->pc = 0x317548u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_31754c:
    // 0x31754c: 0xc92024  and         $a0, $a2, $t1
    ctx->pc = 0x31754cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
label_317550:
    // 0x317550: 0xe45825  or          $t3, $a3, $a0
    ctx->pc = 0x317550u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_317554:
    // 0x317554: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x317554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_317558:
    // 0x317558: 0x8ca40130  lw          $a0, 0x130($a1)
    ctx->pc = 0x317558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_31755c:
    // 0x31755c: 0x4503c  dsll32      $t2, $a0, 0
    ctx->pc = 0x31755cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) << (32 + 0));
label_317560:
    // 0x317560: 0xa503e  dsrl32      $t2, $t2, 0
    ctx->pc = 0x317560u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> (32 + 0));
label_317564:
    // 0x317564: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x317564u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317568:
    // 0x317568: 0x72c38  dsll        $a1, $a3, 16
    ctx->pc = 0x317568u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << 16);
label_31756c:
    // 0x31756c: 0x34a6ffff  ori         $a2, $a1, 0xFFFF
    ctx->pc = 0x31756cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_317570:
    // 0x317570: 0x1462024  and         $a0, $t2, $a2
    ctx->pc = 0x317570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & GPR_U64(ctx, 6));
label_317574:
    // 0x317574: 0x4483c  dsll32      $t1, $a0, 0
    ctx->pc = 0x317574u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 0));
label_317578:
    // 0x317578: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x317578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_31757c:
    // 0x31757c: 0x8ca40130  lw          $a0, 0x130($a1)
    ctx->pc = 0x31757cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_317580:
    // 0x317580: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x317580u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
label_317584:
    // 0x317584: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x317584u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_317588:
    // 0x317588: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x317588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_31758c:
    // 0x31758c: 0x43c38  dsll        $a3, $a0, 16
    ctx->pc = 0x31758cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << 16);
label_317590:
    // 0x317590: 0x34e5ffff  ori         $a1, $a3, 0xFFFF
    ctx->pc = 0x317590u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_317594:
    // 0x317594: 0xc52024  and         $a0, $a2, $a1
    ctx->pc = 0x317594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_317598:
    // 0x317598: 0x1243825  or          $a3, $t1, $a0
    ctx->pc = 0x317598u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
label_31759c:
    // 0x31759c: 0x24041102  addiu       $a0, $zero, 0x1102
    ctx->pc = 0x31759cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4354));
label_3175a0:
    // 0x3175a0: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x3175a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_3175a4:
    // 0x3175a4: 0x71603628  paddub      $a2, $t3, $zero
    ctx->pc = 0x3175a4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
label_3175a8:
    // 0x3175a8: 0xc0631f0  jal         func_18C7C0
label_3175ac:
    if (ctx->pc == 0x3175ACu) {
        ctx->pc = 0x3175B0u;
        goto label_3175b0;
    }
    ctx->pc = 0x3175A8u;
    SET_GPR_U32(ctx, 31, 0x3175B0u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x3175A8u, 0x3175B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3175B0u;
label_3175b0:
    // 0x3175b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3175b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3175b4:
    // 0x3175b4: 0xc06332c  jal         func_18CCB0
label_3175b8:
    if (ctx->pc == 0x3175B8u) {
        ctx->pc = 0x3175BCu;
        goto label_3175bc;
    }
    ctx->pc = 0x3175B4u;
    SET_GPR_U32(ctx, 31, 0x3175BCu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x3175B4u, 0x3175BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3175BCu;
label_3175bc:
    // 0x3175bc: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x3175bcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3175c0:
    // 0x3175c0: 0x3c0443c8  lui         $a0, 0x43C8
    ctx->pc = 0x3175c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17352 << 16));
label_3175c4:
    // 0x3175c4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3175c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3175c8:
    // 0x3175c8: 0x0  nop
    ctx->pc = 0x3175c8u;
    // NOP
label_3175cc:
    // 0x3175cc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3175ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3175d0:
    // 0x3175d0: 0x3c0443c8  lui         $a0, 0x43C8
    ctx->pc = 0x3175d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17352 << 16));
label_3175d4:
    // 0x3175d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3175d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3175d8:
    // 0x3175d8: 0x0  nop
    ctx->pc = 0x3175d8u;
    // NOP
label_3175dc:
    // 0x3175dc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3175dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3175e0:
    // 0x3175e0: 0x3c04c47a  lui         $a0, 0xC47A
    ctx->pc = 0x3175e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50298 << 16));
label_3175e4:
    // 0x3175e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3175e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3175e8:
    // 0x3175e8: 0x0  nop
    ctx->pc = 0x3175e8u;
    // NOP
label_3175ec:
    // 0x3175ec: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3175ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_3175f0:
    // 0x3175f0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3175f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3175f4:
    // 0x3175f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3175f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3175f8:
    // 0x3175f8: 0x0  nop
    ctx->pc = 0x3175f8u;
    // NOP
label_3175fc:
    // 0x3175fc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x3175fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_317600:
    // 0x317600: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x317600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_317604:
    // 0x317604: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x317604u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_317608:
    // 0x317608: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x317608u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_31760c:
    // 0x31760c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x31760cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317610:
    // 0x317610: 0x33438  dsll        $a2, $v1, 16
    ctx->pc = 0x317610u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << 16);
label_317614:
    // 0x317614: 0x34c4ffff  ori         $a0, $a2, 0xFFFF
    ctx->pc = 0x317614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_317618:
    // 0x317618: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x317618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_31761c:
    // 0x31761c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x31761cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_317620:
    // 0x317620: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x317620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_317624:
    // 0x317624: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x317624u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_317628:
    // 0x317628: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x317628u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_31762c:
    // 0x31762c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31762cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317630:
    // 0x317630: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x317630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
label_317634:
    // 0x317634: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x317634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_317638:
    // 0x317638: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x317638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_31763c:
    // 0x31763c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x31763cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_317640:
    // 0x317640: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x317640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_317644:
    // 0x317644: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x317644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_317648:
    // 0x317648: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x317648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_31764c:
    // 0x31764c: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x31764cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317650:
    // 0x317650: 0x62438  dsll        $a0, $a2, 16
    ctx->pc = 0x317650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << 16);
label_317654:
    // 0x317654: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x317654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_317658:
    // 0x317658: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x317658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_31765c:
    // 0x31765c: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x31765cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_317660:
    // 0x317660: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x317660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_317664:
    // 0x317664: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x317664u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
label_317668:
    // 0x317668: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x317668u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_31766c:
    // 0x31766c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31766cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317670:
    // 0x317670: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x317670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_317674:
    // 0x317674: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x317674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_317678:
    // 0x317678: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x317678u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_31767c:
    // 0x31767c: 0xe45825  or          $t3, $a3, $a0
    ctx->pc = 0x31767cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_317680:
    // 0x317680: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x317680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_317684:
    // 0x317684: 0x8c4a0130  lw          $t2, 0x130($v0)
    ctx->pc = 0x317684u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_317688:
    // 0x317688: 0xa383c  dsll32      $a3, $t2, 0
    ctx->pc = 0x317688u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) << (32 + 0));
label_31768c:
    // 0x31768c: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x31768cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
label_317690:
    // 0x317690: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x317690u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317694:
    // 0x317694: 0x62438  dsll        $a0, $a2, 16
    ctx->pc = 0x317694u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << 16);
label_317698:
    // 0x317698: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x317698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_31769c:
    // 0x31769c: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x31769cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_3176a0:
    // 0x3176a0: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x3176a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_3176a4:
    // 0x3176a4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3176a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3176a8:
    // 0x3176a8: 0x8c860130  lw          $a2, 0x130($a0)
    ctx->pc = 0x3176a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_3176ac:
    // 0x3176ac: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x3176acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_3176b0:
    // 0x3176b0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3176b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_3176b4:
    // 0x3176b4: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x3176b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3176b8:
    // 0x3176b8: 0x44c38  dsll        $t1, $a0, 16
    ctx->pc = 0x3176b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << 16);
label_3176bc:
    // 0x3176bc: 0x3524ffff  ori         $a0, $t1, 0xFFFF
    ctx->pc = 0x3176bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_3176c0:
    // 0x3176c0: 0x444024  and         $t0, $v0, $a0
    ctx->pc = 0x3176c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_3176c4:
    // 0x3176c4: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x3176c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_3176c8:
    // 0x3176c8: 0x24041102  addiu       $a0, $zero, 0x1102
    ctx->pc = 0x3176c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4354));
label_3176cc:
    // 0x3176cc: 0x71603628  paddub      $a2, $t3, $zero
    ctx->pc = 0x3176ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
label_3176d0:
    // 0x3176d0: 0xc0631f0  jal         func_18C7C0
label_3176d4:
    if (ctx->pc == 0x3176D4u) {
        ctx->pc = 0x3176D8u;
        goto label_3176d8;
    }
    ctx->pc = 0x3176D0u;
    SET_GPR_U32(ctx, 31, 0x3176D8u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x3176D0u, 0x3176D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3176D8u;
label_3176d8:
    // 0x3176d8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3176d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3176dc:
    // 0x3176dc: 0xc06332c  jal         func_18CCB0
label_3176e0:
    if (ctx->pc == 0x3176E0u) {
        ctx->pc = 0x3176E4u;
        goto label_3176e4;
    }
    ctx->pc = 0x3176DCu;
    SET_GPR_U32(ctx, 31, 0x3176E4u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x3176DCu, 0x3176E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3176E4u;
label_3176e4:
    // 0x3176e4: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x3176e4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3176e8:
    // 0x3176e8: 0x3c04c3c8  lui         $a0, 0xC3C8
    ctx->pc = 0x3176e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50120 << 16));
label_3176ec:
    // 0x3176ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3176ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3176f0:
    // 0x3176f0: 0x0  nop
    ctx->pc = 0x3176f0u;
    // NOP
label_3176f4:
    // 0x3176f4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3176f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3176f8:
    // 0x3176f8: 0x3c0643c8  lui         $a2, 0x43C8
    ctx->pc = 0x3176f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17352 << 16));
label_3176fc:
    // 0x3176fc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3176fcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317700:
    // 0x317700: 0x0  nop
    ctx->pc = 0x317700u;
    // NOP
label_317704:
    // 0x317704: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x317704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_317708:
    // 0x317708: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x317708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
label_31770c:
    // 0x31770c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31770cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317710:
    // 0x317710: 0x0  nop
    ctx->pc = 0x317710u;
    // NOP
label_317714:
    // 0x317714: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x317714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_317718:
    // 0x317718: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x317718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_31771c:
    // 0x31771c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31771cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317720:
    // 0x317720: 0x0  nop
    ctx->pc = 0x317720u;
    // NOP
label_317724:
    // 0x317724: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x317724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_317728:
    // 0x317728: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x317728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_31772c:
    // 0x31772c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31772cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_317730:
    // 0x317730: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x317730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_317734:
    // 0x317734: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x317734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317738:
    // 0x317738: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x317738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_31773c:
    // 0x31773c: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x31773cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_317740:
    // 0x317740: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x317740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_317744:
    // 0x317744: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x317744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_317748:
    // 0x317748: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x317748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_31774c:
    // 0x31774c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31774cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_317750:
    // 0x317750: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x317750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_317754:
    // 0x317754: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x317754u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317758:
    // 0x317758: 0x53c38  dsll        $a3, $a1, 16
    ctx->pc = 0x317758u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << 16);
label_31775c:
    // 0x31775c: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x31775cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_317760:
    // 0x317760: 0x443024  and         $a2, $v0, $a0
    ctx->pc = 0x317760u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_317764:
    // 0x317764: 0x661025  or          $v0, $v1, $a2
    ctx->pc = 0x317764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_317768:
    // 0x317768: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x317768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_31776c:
    // 0x31776c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x31776cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
label_317770:
    // 0x317770: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x317770u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_317774:
    // 0x317774: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x317774u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317778:
    // 0x317778: 0x51c38  dsll        $v1, $a1, 16
    ctx->pc = 0x317778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 16);
label_31777c:
    // 0x31777c: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x31777cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_317780:
    // 0x317780: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x317780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_317784:
    // 0x317784: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x317784u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
label_317788:
    // 0x317788: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x317788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_31778c:
    // 0x31778c: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x31778cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
label_317790:
    // 0x317790: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x317790u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
label_317794:
    // 0x317794: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x317794u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317798:
    // 0x317798: 0x61c38  dsll        $v1, $a2, 16
    ctx->pc = 0x317798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << 16);
label_31779c:
    // 0x31779c: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x31779cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3177a0:
    // 0x3177a0: 0xe41824  and         $v1, $a3, $a0
    ctx->pc = 0x3177a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
label_3177a4:
    // 0x3177a4: 0x1035025  or          $t2, $t0, $v1
    ctx->pc = 0x3177a4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
label_3177a8:
    // 0x3177a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3177a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3177ac:
    // 0x3177ac: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x3177acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_3177b0:
    // 0x3177b0: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x3177b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
label_3177b4:
    // 0x3177b4: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x3177b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_3177b8:
    // 0x3177b8: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x3177b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3177bc:
    // 0x3177bc: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x3177bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
label_3177c0:
    // 0x3177c0: 0x3467ffff  ori         $a3, $v1, 0xFFFF
    ctx->pc = 0x3177c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3177c4:
    // 0x3177c4: 0xc71824  and         $v1, $a2, $a3
    ctx->pc = 0x3177c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
label_3177c8:
    // 0x3177c8: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x3177c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
label_3177cc:
    // 0x3177cc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3177ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3177d0:
    // 0x3177d0: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x3177d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_3177d4:
    // 0x3177d4: 0x3483c  dsll32      $t1, $v1, 0
    ctx->pc = 0x3177d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 0));
label_3177d8:
    // 0x3177d8: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x3177d8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
label_3177dc:
    // 0x3177dc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3177dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3177e0:
    // 0x3177e0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3177e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_3177e4:
    // 0x3177e4: 0x3467ffff  ori         $a3, $v1, 0xFFFF
    ctx->pc = 0x3177e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3177e8:
    // 0x3177e8: 0x1271824  and         $v1, $t1, $a3
    ctx->pc = 0x3177e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
label_3177ec:
    // 0x3177ec: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x3177ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
label_3177f0:
    // 0x3177f0: 0x24041102  addiu       $a0, $zero, 0x1102
    ctx->pc = 0x3177f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4354));
label_3177f4:
    // 0x3177f4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x3177f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3177f8:
    // 0x3177f8: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x3177f8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_3177fc:
    // 0x3177fc: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x3177fcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_317800:
    // 0x317800: 0xc0631f0  jal         func_18C7C0
label_317804:
    if (ctx->pc == 0x317804u) {
        ctx->pc = 0x317808u;
        goto label_317808;
    }
    ctx->pc = 0x317800u;
    SET_GPR_U32(ctx, 31, 0x317808u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x317800u, 0x317808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317808u;
label_317808:
    // 0x317808: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x317808u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31780c:
    // 0x31780c: 0xc06332c  jal         func_18CCB0
label_317810:
    if (ctx->pc == 0x317810u) {
        ctx->pc = 0x317814u;
        goto label_317814;
    }
    ctx->pc = 0x31780Cu;
    SET_GPR_U32(ctx, 31, 0x317814u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x31780Cu, 0x317814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317814u;
label_317814:
    // 0x317814: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x317814u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_317818:
    // 0x317818: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x317818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
label_31781c:
    // 0x31781c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31781cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317820:
    // 0x317820: 0x0  nop
    ctx->pc = 0x317820u;
    // NOP
label_317824:
    // 0x317824: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x317824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_317828:
    // 0x317828: 0x3c03c3c8  lui         $v1, 0xC3C8
    ctx->pc = 0x317828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50120 << 16));
label_31782c:
    // 0x31782c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31782cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317830:
    // 0x317830: 0x0  nop
    ctx->pc = 0x317830u;
    // NOP
label_317834:
    // 0x317834: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x317834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_317838:
    // 0x317838: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x317838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
label_31783c:
    // 0x31783c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31783cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317840:
    // 0x317840: 0x0  nop
    ctx->pc = 0x317840u;
    // NOP
label_317844:
    // 0x317844: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x317844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_317848:
    // 0x317848: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x317848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_31784c:
    // 0x31784c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31784cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317850:
    // 0x317850: 0x0  nop
    ctx->pc = 0x317850u;
    // NOP
label_317854:
    // 0x317854: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x317854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_317858:
    // 0x317858: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x317858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_31785c:
    // 0x31785c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x31785cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_317860:
    // 0x317860: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x317860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_317864:
    // 0x317864: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x317864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317868:
    // 0x317868: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x317868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
label_31786c:
    // 0x31786c: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x31786cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_317870:
    // 0x317870: 0x851024  and         $v0, $a0, $a1
    ctx->pc = 0x317870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_317874:
    // 0x317874: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x317874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_317878:
    // 0x317878: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x317878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_31787c:
    // 0x31787c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31787cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_317880:
    // 0x317880: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x317880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_317884:
    // 0x317884: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x317884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317888:
    // 0x317888: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x317888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_31788c:
    // 0x31788c: 0x3448ffff  ori         $t0, $v0, 0xFFFF
    ctx->pc = 0x31788cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_317890:
    // 0x317890: 0x682824  and         $a1, $v1, $t0
    ctx->pc = 0x317890u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
label_317894:
    // 0x317894: 0x851825  or          $v1, $a0, $a1
    ctx->pc = 0x317894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_317898:
    // 0x317898: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x317898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_31789c:
    // 0x31789c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x31789cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_3178a0:
    // 0x3178a0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3178a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_3178a4:
    // 0x3178a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3178a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3178a8:
    // 0x3178a8: 0x23c38  dsll        $a3, $v0, 16
    ctx->pc = 0x3178a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 16);
label_3178ac:
    // 0x3178ac: 0x34e6ffff  ori         $a2, $a3, 0xFFFF
    ctx->pc = 0x3178acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_3178b0:
    // 0x3178b0: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x3178b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_3178b4:
    // 0x3178b4: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x3178b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_3178b8:
    // 0x3178b8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3178b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3178bc:
    // 0x3178bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3178bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3178c0:
    // 0x3178c0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3178c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_3178c4:
    // 0x3178c4: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x3178c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3178c8:
    // 0x3178c8: 0x46438  dsll        $t4, $a0, 16
    ctx->pc = 0x3178c8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) << 16);
label_3178cc:
    // 0x3178cc: 0x358bffff  ori         $t3, $t4, 0xFFFF
    ctx->pc = 0x3178ccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
label_3178d0:
    // 0x3178d0: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x3178d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
label_3178d4:
    // 0x3178d4: 0xa25025  or          $t2, $a1, $v0
    ctx->pc = 0x3178d4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3178d8:
    // 0x3178d8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x3178d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3178dc:
    // 0x3178dc: 0x8ca60130  lw          $a2, 0x130($a1)
    ctx->pc = 0x3178dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_3178e0:
    // 0x3178e0: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x3178e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_3178e4:
    // 0x3178e4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3178e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_3178e8:
    // 0x3178e8: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x3178e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3178ec:
    // 0x3178ec: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3178ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_3178f0:
    // 0x3178f0: 0x3487ffff  ori         $a3, $a0, 0xFFFF
    ctx->pc = 0x3178f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_3178f4:
    // 0x3178f4: 0x472024  and         $a0, $v0, $a3
    ctx->pc = 0x3178f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_3178f8:
    // 0x3178f8: 0x4483c  dsll32      $t1, $a0, 0
    ctx->pc = 0x3178f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 0));
label_3178fc:
    // 0x3178fc: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x3178fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_317900:
    // 0x317900: 0x8cc40130  lw          $a0, 0x130($a2)
    ctx->pc = 0x317900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_317904:
    // 0x317904: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x317904u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_317908:
    // 0x317908: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x317908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_31790c:
    // 0x31790c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x31790cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317910:
    // 0x317910: 0x41438  dsll        $v0, $a0, 16
    ctx->pc = 0x317910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 16);
label_317914:
    // 0x317914: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x317914u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_317918:
    // 0x317918: 0xa72024  and         $a0, $a1, $a3
    ctx->pc = 0x317918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
label_31791c:
    // 0x31791c: 0x1241025  or          $v0, $t1, $a0
    ctx->pc = 0x31791cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
label_317920:
    // 0x317920: 0x24041102  addiu       $a0, $zero, 0x1102
    ctx->pc = 0x317920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4354));
label_317924:
    // 0x317924: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x317924u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_317928:
    // 0x317928: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x317928u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_31792c:
    // 0x31792c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x31792cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_317930:
    // 0x317930: 0xc0631f0  jal         func_18C7C0
label_317934:
    if (ctx->pc == 0x317934u) {
        ctx->pc = 0x317938u;
        goto label_317938;
    }
    ctx->pc = 0x317930u;
    SET_GPR_U32(ctx, 31, 0x317938u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x317930u, 0x317938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317938u;
label_317938:
    // 0x317938: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x317938u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31793c:
    // 0x31793c: 0xc06332c  jal         func_18CCB0
label_317940:
    if (ctx->pc == 0x317940u) {
        ctx->pc = 0x317944u;
        goto label_317944;
    }
    ctx->pc = 0x31793Cu;
    SET_GPR_U32(ctx, 31, 0x317944u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x31793Cu, 0x317944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317944u;
label_317944:
    // 0x317944: 0x3c03c3c8  lui         $v1, 0xC3C8
    ctx->pc = 0x317944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50120 << 16));
label_317948:
    // 0x317948: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x317948u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31794c:
    // 0x31794c: 0x0  nop
    ctx->pc = 0x31794cu;
    // NOP
label_317950:
    // 0x317950: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x317950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_317954:
    // 0x317954: 0x3c02c3c8  lui         $v0, 0xC3C8
    ctx->pc = 0x317954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50120 << 16));
label_317958:
    // 0x317958: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x317958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31795c:
    // 0x31795c: 0x0  nop
    ctx->pc = 0x31795cu;
    // NOP
label_317960:
    // 0x317960: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x317960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_317964:
    // 0x317964: 0x3c05c47a  lui         $a1, 0xC47A
    ctx->pc = 0x317964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50298 << 16));
label_317968:
    // 0x317968: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x317968u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31796c:
    // 0x31796c: 0x0  nop
    ctx->pc = 0x31796cu;
    // NOP
label_317970:
    // 0x317970: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x317970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_317974:
    // 0x317974: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x317974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_317978:
    // 0x317978: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x317978u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31797c:
    // 0x31797c: 0x0  nop
    ctx->pc = 0x31797cu;
    // NOP
label_317980:
    // 0x317980: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x317980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_317984:
    // 0x317984: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x317984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_317988:
    // 0x317988: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x317988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_31798c:
    // 0x31798c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31798cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_317990:
    // 0x317990: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x317990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317994:
    // 0x317994: 0x23c38  dsll        $a3, $v0, 16
    ctx->pc = 0x317994u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 16);
label_317998:
    // 0x317998: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x317998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_31799c:
    // 0x31799c: 0x643024  and         $a2, $v1, $a0
    ctx->pc = 0x31799cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3179a0:
    // 0x3179a0: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x3179a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_3179a4:
    // 0x3179a4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3179a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3179a8:
    // 0x3179a8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3179a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_3179ac:
    // 0x3179ac: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3179acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_3179b0:
    // 0x3179b0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3179b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3179b4:
    // 0x3179b4: 0x32c38  dsll        $a1, $v1, 16
    ctx->pc = 0x3179b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 16);
label_3179b8:
    // 0x3179b8: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x3179b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_3179bc:
    // 0x3179bc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x3179bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3179c0:
    // 0x3179c0: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x3179c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_3179c4:
    // 0x3179c4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3179c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3179c8:
    // 0x3179c8: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x3179c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
label_3179cc:
    // 0x3179cc: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x3179ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_3179d0:
    // 0x3179d0: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x3179d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3179d4:
    // 0x3179d4: 0x44438  dsll        $t0, $a0, 16
    ctx->pc = 0x3179d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << 16);
label_3179d8:
    // 0x3179d8: 0x3502ffff  ori         $v0, $t0, 0xFFFF
    ctx->pc = 0x3179d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_3179dc:
    // 0x3179dc: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x3179dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_3179e0:
    // 0x3179e0: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x3179e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_3179e4:
    // 0x3179e4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3179e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3179e8:
    // 0x3179e8: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x3179e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
label_3179ec:
    // 0x3179ec: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x3179ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_3179f0:
    // 0x3179f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3179f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3179f4:
    // 0x3179f4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3179f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_3179f8:
    // 0x3179f8: 0x3448ffff  ori         $t0, $v0, 0xFFFF
    ctx->pc = 0x3179f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3179fc:
    // 0x3179fc: 0xc82024  and         $a0, $a2, $t0
    ctx->pc = 0x3179fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
label_317a00:
    // 0x317a00: 0xe43025  or          $a2, $a3, $a0
    ctx->pc = 0x317a00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_317a04:
    // 0x317a04: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x317a04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_317a08:
    // 0x317a08: 0x8ce40130  lw          $a0, 0x130($a3)
    ctx->pc = 0x317a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
label_317a0c:
    // 0x317a0c: 0x4403c  dsll32      $t0, $a0, 0
    ctx->pc = 0x317a0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << (32 + 0));
label_317a10:
    // 0x317a10: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x317a10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
label_317a14:
    // 0x317a14: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x317a14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317a18:
    // 0x317a18: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x317a18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_317a1c:
    // 0x317a1c: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x317a1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_317a20:
    // 0x317a20: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x317a20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
label_317a24:
    // 0x317a24: 0x4483c  dsll32      $t1, $a0, 0
    ctx->pc = 0x317a24u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 0));
label_317a28:
    // 0x317a28: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x317a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_317a2c:
    // 0x317a2c: 0x8c840130  lw          $a0, 0x130($a0)
    ctx->pc = 0x317a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_317a30:
    // 0x317a30: 0x4403c  dsll32      $t0, $a0, 0
    ctx->pc = 0x317a30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << (32 + 0));
label_317a34:
    // 0x317a34: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x317a34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
label_317a38:
    // 0x317a38: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x317a38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317a3c:
    // 0x317a3c: 0x43c38  dsll        $a3, $a0, 16
    ctx->pc = 0x317a3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << 16);
label_317a40:
    // 0x317a40: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x317a40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_317a44:
    // 0x317a44: 0x1041024  and         $v0, $t0, $a0
    ctx->pc = 0x317a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
label_317a48:
    // 0x317a48: 0x1223825  or          $a3, $t1, $v0
    ctx->pc = 0x317a48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_317a4c:
    // 0x317a4c: 0x24081102  addiu       $t0, $zero, 0x1102
    ctx->pc = 0x317a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4354));
label_317a50:
    // 0x317a50: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x317a50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_317a54:
    // 0x317a54: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x317a54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_317a58:
    // 0x317a58: 0xc0631f0  jal         func_18C7C0
label_317a5c:
    if (ctx->pc == 0x317A5Cu) {
        ctx->pc = 0x317A60u;
        goto label_317a60;
    }
    ctx->pc = 0x317A58u;
    SET_GPR_U32(ctx, 31, 0x317A60u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x317A58u, 0x317A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317A60u;
label_317a60:
    // 0x317a60: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x317a60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_317a64:
    // 0x317a64: 0xc06332c  jal         func_18CCB0
label_317a68:
    if (ctx->pc == 0x317A68u) {
        ctx->pc = 0x317A6Cu;
        goto label_317a6c;
    }
    ctx->pc = 0x317A64u;
    SET_GPR_U32(ctx, 31, 0x317A6Cu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x317A64u, 0x317A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317A6Cu;
label_317a6c:
    // 0x317a6c: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x317a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
label_317a70:
    // 0x317a70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x317a70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317a74:
    // 0x317a74: 0x0  nop
    ctx->pc = 0x317a74u;
    // NOP
label_317a78:
    // 0x317a78: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x317a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_317a7c:
    // 0x317a7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317a7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317a80:
    // 0x317a80: 0x0  nop
    ctx->pc = 0x317a80u;
    // NOP
label_317a84:
    // 0x317a84: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x317a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_317a88:
    // 0x317a88: 0x3c07c4fa  lui         $a3, 0xC4FA
    ctx->pc = 0x317a88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50426 << 16));
label_317a8c:
    // 0x317a8c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x317a8cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317a90:
    // 0x317a90: 0x0  nop
    ctx->pc = 0x317a90u;
    // NOP
label_317a94:
    // 0x317a94: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x317a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_317a98:
    // 0x317a98: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x317a98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_317a9c:
    // 0x317a9c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x317a9cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317aa0:
    // 0x317aa0: 0x0  nop
    ctx->pc = 0x317aa0u;
    // NOP
label_317aa4:
    // 0x317aa4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x317aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_317aa8:
    // 0x317aa8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x317aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_317aac:
    // 0x317aac: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x317aacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
label_317ab0:
    // 0x317ab0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x317ab0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_317ab4:
    // 0x317ab4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x317ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317ab8:
    // 0x317ab8: 0x33c38  dsll        $a3, $v1, 16
    ctx->pc = 0x317ab8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 16);
label_317abc:
    // 0x317abc: 0x34e3ffff  ori         $v1, $a3, 0xFFFF
    ctx->pc = 0x317abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_317ac0:
    // 0x317ac0: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x317ac0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_317ac4:
    // 0x317ac4: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x317ac4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
label_317ac8:
    // 0x317ac8: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x317ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_317acc:
    // 0x317acc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x317accu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_317ad0:
    // 0x317ad0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x317ad0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_317ad4:
    // 0x317ad4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x317ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317ad8:
    // 0x317ad8: 0x34438  dsll        $t0, $v1, 16
    ctx->pc = 0x317ad8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << 16);
label_317adc:
    // 0x317adc: 0x3503ffff  ori         $v1, $t0, 0xFFFF
    ctx->pc = 0x317adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_317ae0:
    // 0x317ae0: 0x833024  and         $a2, $a0, $v1
    ctx->pc = 0x317ae0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_317ae4:
    // 0x317ae4: 0xa61825  or          $v1, $a1, $a2
    ctx->pc = 0x317ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_317ae8:
    // 0x317ae8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x317ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_317aec:
    // 0x317aec: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x317aecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_317af0:
    // 0x317af0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x317af0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_317af4:
    // 0x317af4: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x317af4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317af8:
    // 0x317af8: 0x43c38  dsll        $a3, $a0, 16
    ctx->pc = 0x317af8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << 16);
label_317afc:
    // 0x317afc: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x317afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_317b00:
    // 0x317b00: 0xa43024  and         $a2, $a1, $a0
    ctx->pc = 0x317b00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_317b04:
    // 0x317b04: 0x6503c  dsll32      $t2, $a2, 0
    ctx->pc = 0x317b04u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) << (32 + 0));
label_317b08:
    // 0x317b08: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x317b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_317b0c:
    // 0x317b0c: 0x4483c  dsll32      $t1, $a0, 0
    ctx->pc = 0x317b0cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 0));
label_317b10:
    // 0x317b10: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x317b10u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
label_317b14:
    // 0x317b14: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x317b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317b18:
    // 0x317b18: 0x45c38  dsll        $t3, $a0, 16
    ctx->pc = 0x317b18u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) << 16);
label_317b1c:
    // 0x317b1c: 0x3565ffff  ori         $a1, $t3, 0xFFFF
    ctx->pc = 0x317b1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
label_317b20:
    // 0x317b20: 0x1252024  and         $a0, $t1, $a1
    ctx->pc = 0x317b20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
label_317b24:
    // 0x317b24: 0x1445025  or          $t2, $t2, $a0
    ctx->pc = 0x317b24u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 4));
label_317b28:
    // 0x317b28: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x317b28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_317b2c:
    // 0x317b2c: 0x8ce50130  lw          $a1, 0x130($a3)
    ctx->pc = 0x317b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
label_317b30:
    // 0x317b30: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x317b30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
label_317b34:
    // 0x317b34: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x317b34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_317b38:
    // 0x317b38: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x317b38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317b3c:
    // 0x317b3c: 0x44c38  dsll        $t1, $a0, 16
    ctx->pc = 0x317b3cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << 16);
label_317b40:
    // 0x317b40: 0x3525ffff  ori         $a1, $t1, 0xFFFF
    ctx->pc = 0x317b40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_317b44:
    // 0x317b44: 0xc52024  and         $a0, $a2, $a1
    ctx->pc = 0x317b44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_317b48:
    // 0x317b48: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x317b48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
label_317b4c:
    // 0x317b4c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x317b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_317b50:
    // 0x317b50: 0x8c870130  lw          $a3, 0x130($a0)
    ctx->pc = 0x317b50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_317b54:
    // 0x317b54: 0x7283c  dsll32      $a1, $a3, 0
    ctx->pc = 0x317b54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 0));
label_317b58:
    // 0x317b58: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x317b58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_317b5c:
    // 0x317b5c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x317b5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317b60:
    // 0x317b60: 0x43c38  dsll        $a3, $a0, 16
    ctx->pc = 0x317b60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << 16);
label_317b64:
    // 0x317b64: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x317b64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_317b68:
    // 0x317b68: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x317b68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_317b6c:
    // 0x317b6c: 0xc43825  or          $a3, $a2, $a0
    ctx->pc = 0x317b6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_317b70:
    // 0x317b70: 0x24041102  addiu       $a0, $zero, 0x1102
    ctx->pc = 0x317b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4354));
label_317b74:
    // 0x317b74: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x317b74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_317b78:
    // 0x317b78: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x317b78u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_317b7c:
    // 0x317b7c: 0xc0631f0  jal         func_18C7C0
label_317b80:
    if (ctx->pc == 0x317B80u) {
        ctx->pc = 0x317B84u;
        goto label_317b84;
    }
    ctx->pc = 0x317B7Cu;
    SET_GPR_U32(ctx, 31, 0x317B84u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x317B7Cu, 0x317B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317B84u;
label_317b84:
    // 0x317b84: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x317b84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_317b88:
    // 0x317b88: 0xc06332c  jal         func_18CCB0
label_317b8c:
    if (ctx->pc == 0x317B8Cu) {
        ctx->pc = 0x317B90u;
        goto label_317b90;
    }
    ctx->pc = 0x317B88u;
    SET_GPR_U32(ctx, 31, 0x317B90u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x317B88u, 0x317B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317B90u;
label_317b90:
    // 0x317b90: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x317b90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_317b94:
    // 0x317b94: 0x3c03c416  lui         $v1, 0xC416
    ctx->pc = 0x317b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50198 << 16));
label_317b98:
    // 0x317b98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x317b98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317b9c:
    // 0x317b9c: 0x0  nop
    ctx->pc = 0x317b9cu;
    // NOP
label_317ba0:
    // 0x317ba0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x317ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_317ba4:
    // 0x317ba4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317ba4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317ba8:
    // 0x317ba8: 0x0  nop
    ctx->pc = 0x317ba8u;
    // NOP
label_317bac:
    // 0x317bac: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x317bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_317bb0:
    // 0x317bb0: 0x3c03c4fa  lui         $v1, 0xC4FA
    ctx->pc = 0x317bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50426 << 16));
label_317bb4:
    // 0x317bb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x317bb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317bb8:
    // 0x317bb8: 0x0  nop
    ctx->pc = 0x317bb8u;
    // NOP
label_317bbc:
    // 0x317bbc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x317bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_317bc0:
    // 0x317bc0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x317bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_317bc4:
    // 0x317bc4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x317bc4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317bc8:
    // 0x317bc8: 0x0  nop
    ctx->pc = 0x317bc8u;
    // NOP
label_317bcc:
    // 0x317bcc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x317bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_317bd0:
    // 0x317bd0: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x317bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_317bd4:
    // 0x317bd4: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x317bd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
label_317bd8:
    // 0x317bd8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x317bd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_317bdc:
    // 0x317bdc: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x317bdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317be0:
    // 0x317be0: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x317be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
label_317be4:
    // 0x317be4: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x317be4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_317be8:
    // 0x317be8: 0xc51024  and         $v0, $a2, $a1
    ctx->pc = 0x317be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_317bec:
    // 0x317bec: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x317becu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_317bf0:
    // 0x317bf0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x317bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_317bf4:
    // 0x317bf4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x317bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_317bf8:
    // 0x317bf8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x317bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_317bfc:
    // 0x317bfc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x317bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317c00:
    // 0x317c00: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x317c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_317c04:
    // 0x317c04: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x317c04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_317c08:
    // 0x317c08: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x317c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_317c0c:
    // 0x317c0c: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x317c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_317c10:
    // 0x317c10: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x317c10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_317c14:
    // 0x317c14: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x317c14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
label_317c18:
    // 0x317c18: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x317c18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_317c1c:
    // 0x317c1c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x317c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317c20:
    // 0x317c20: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x317c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_317c24:
    // 0x317c24: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x317c24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_317c28:
    // 0x317c28: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x317c28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
label_317c2c:
    // 0x317c2c: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x317c2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
label_317c30:
    // 0x317c30: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x317c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_317c34:
    // 0x317c34: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x317c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_317c38:
    // 0x317c38: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x317c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_317c3c:
    // 0x317c3c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x317c3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317c40:
    // 0x317c40: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x317c40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_317c44:
    // 0x317c44: 0x348bffff  ori         $t3, $a0, 0xFFFF
    ctx->pc = 0x317c44u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_317c48:
    // 0x317c48: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x317c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
label_317c4c:
    // 0x317c4c: 0xc25025  or          $t2, $a2, $v0
    ctx->pc = 0x317c4cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_317c50:
    // 0x317c50: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x317c50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_317c54:
    // 0x317c54: 0x8ce60130  lw          $a2, 0x130($a3)
    ctx->pc = 0x317c54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
label_317c58:
    // 0x317c58: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x317c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
label_317c5c:
    // 0x317c5c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x317c5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_317c60:
    // 0x317c60: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x317c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317c64:
    // 0x317c64: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x317c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_317c68:
    // 0x317c68: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x317c68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_317c6c:
    // 0x317c6c: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x317c6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
label_317c70:
    // 0x317c70: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x317c70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
label_317c74:
    // 0x317c74: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x317c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_317c78:
    // 0x317c78: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x317c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_317c7c:
    // 0x317c7c: 0x4483c  dsll32      $t1, $a0, 0
    ctx->pc = 0x317c7cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 0));
label_317c80:
    // 0x317c80: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x317c80u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
label_317c84:
    // 0x317c84: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x317c84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317c88:
    // 0x317c88: 0x44438  dsll        $t0, $a0, 16
    ctx->pc = 0x317c88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << 16);
label_317c8c:
    // 0x317c8c: 0x3507ffff  ori         $a3, $t0, 0xFFFF
    ctx->pc = 0x317c8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_317c90:
    // 0x317c90: 0x1272024  and         $a0, $t1, $a3
    ctx->pc = 0x317c90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
label_317c94:
    // 0x317c94: 0xc41025  or          $v0, $a2, $a0
    ctx->pc = 0x317c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_317c98:
    // 0x317c98: 0x24071102  addiu       $a3, $zero, 0x1102
    ctx->pc = 0x317c98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4354));
label_317c9c:
    // 0x317c9c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x317c9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_317ca0:
    // 0x317ca0: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x317ca0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_317ca4:
    // 0x317ca4: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x317ca4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_317ca8:
    // 0x317ca8: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x317ca8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_317cac:
    // 0x317cac: 0xc0631f0  jal         func_18C7C0
label_317cb0:
    if (ctx->pc == 0x317CB0u) {
        ctx->pc = 0x317CB4u;
        goto label_317cb4;
    }
    ctx->pc = 0x317CACu;
    SET_GPR_U32(ctx, 31, 0x317CB4u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x317CACu, 0x317CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317CB4u;
label_317cb4:
    // 0x317cb4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x317cb4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_317cb8:
    // 0x317cb8: 0xc06332c  jal         func_18CCB0
label_317cbc:
    if (ctx->pc == 0x317CBCu) {
        ctx->pc = 0x317CC0u;
        goto label_317cc0;
    }
    ctx->pc = 0x317CB8u;
    SET_GPR_U32(ctx, 31, 0x317CC0u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x317CB8u, 0x317CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317CC0u;
label_317cc0:
    // 0x317cc0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x317cc0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_317cc4:
    // 0x317cc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317cc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317cc8:
    // 0x317cc8: 0x0  nop
    ctx->pc = 0x317cc8u;
    // NOP
label_317ccc:
    // 0x317ccc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x317cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_317cd0:
    // 0x317cd0: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x317cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
label_317cd4:
    // 0x317cd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x317cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317cd8:
    // 0x317cd8: 0x0  nop
    ctx->pc = 0x317cd8u;
    // NOP
label_317cdc:
    // 0x317cdc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x317cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_317ce0:
    // 0x317ce0: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x317ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
label_317ce4:
    // 0x317ce4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x317ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317ce8:
    // 0x317ce8: 0x0  nop
    ctx->pc = 0x317ce8u;
    // NOP
label_317cec:
    // 0x317cec: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x317cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_317cf0:
    // 0x317cf0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x317cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_317cf4:
    // 0x317cf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x317cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317cf8:
    // 0x317cf8: 0x0  nop
    ctx->pc = 0x317cf8u;
    // NOP
label_317cfc:
    // 0x317cfc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x317cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_317d00:
    // 0x317d00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x317d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_317d04:
    // 0x317d04: 0x8c621298  lw          $v0, 0x1298($v1)
    ctx->pc = 0x317d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4760)));
label_317d08:
    // 0x317d08: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x317d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_317d0c:
    // 0x317d0c: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x317d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_317d10:
    // 0x317d10: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x317d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_317d14:
    // 0x317d14: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x317d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_317d18:
    // 0x317d18: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x317d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_317d1c:
    // 0x317d1c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x317d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317d20:
    // 0x317d20: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x317d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_317d24:
    // 0x317d24: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x317d24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_317d28:
    // 0x317d28: 0x653824  and         $a3, $v1, $a1
    ctx->pc = 0x317d28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_317d2c:
    // 0x317d2c: 0x24044800  addiu       $a0, $zero, 0x4800
    ctx->pc = 0x317d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18432));
label_317d30:
    // 0x317d30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x317d30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_317d34:
    // 0x317d34: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x317d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_317d38:
    // 0x317d38: 0xc062f5c  jal         func_18BD70
label_317d3c:
    if (ctx->pc == 0x317D3Cu) {
        ctx->pc = 0x317D40u;
        goto label_317d40;
    }
    ctx->pc = 0x317D38u;
    SET_GPR_U32(ctx, 31, 0x317D40u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x317D38u, 0x317D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317D40u;
label_317d40:
    // 0x317d40: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x317d40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_317d44:
    // 0x317d44: 0xc0630a8  jal         func_18C2A0
label_317d48:
    if (ctx->pc == 0x317D48u) {
        ctx->pc = 0x317D4Cu;
        goto label_317d4c;
    }
    ctx->pc = 0x317D44u;
    SET_GPR_U32(ctx, 31, 0x317D4Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x317D44u, 0x317D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317D4Cu;
label_317d4c:
    // 0x317d4c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x317d4cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_317d50:
    // 0x317d50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317d50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317d54:
    // 0x317d54: 0x0  nop
    ctx->pc = 0x317d54u;
    // NOP
label_317d58:
    // 0x317d58: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x317d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_317d5c:
    // 0x317d5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317d5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317d60:
    // 0x317d60: 0x0  nop
    ctx->pc = 0x317d60u;
    // NOP
label_317d64:
    // 0x317d64: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x317d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_317d68:
    // 0x317d68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317d6c:
    // 0x317d6c: 0x0  nop
    ctx->pc = 0x317d6cu;
    // NOP
label_317d70:
    // 0x317d70: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x317d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_317d74:
    // 0x317d74: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x317d74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_317d78:
    // 0x317d78: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x317d78u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317d7c:
    // 0x317d7c: 0x0  nop
    ctx->pc = 0x317d7cu;
    // NOP
label_317d80:
    // 0x317d80: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x317d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_317d84:
    // 0x317d84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317d84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317d88:
    // 0x317d88: 0x0  nop
    ctx->pc = 0x317d88u;
    // NOP
label_317d8c:
    // 0x317d8c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x317d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_317d90:
    // 0x317d90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317d90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317d94:
    // 0x317d94: 0x0  nop
    ctx->pc = 0x317d94u;
    // NOP
label_317d98:
    // 0x317d98: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x317d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_317d9c:
    // 0x317d9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317d9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317da0:
    // 0x317da0: 0x0  nop
    ctx->pc = 0x317da0u;
    // NOP
label_317da4:
    // 0x317da4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x317da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_317da8:
    // 0x317da8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x317da8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_317dac:
    // 0x317dac: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x317dacu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317db0:
    // 0x317db0: 0x0  nop
    ctx->pc = 0x317db0u;
    // NOP
label_317db4:
    // 0x317db4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x317db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_317db8:
    // 0x317db8: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x317db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_317dbc:
    // 0x317dbc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x317dbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_317dc0:
    // 0x317dc0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x317dc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_317dc4:
    // 0x317dc4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x317dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317dc8:
    // 0x317dc8: 0x34438  dsll        $t0, $v1, 16
    ctx->pc = 0x317dc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << 16);
label_317dcc:
    // 0x317dcc: 0x3503ffff  ori         $v1, $t0, 0xFFFF
    ctx->pc = 0x317dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_317dd0:
    // 0x317dd0: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x317dd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_317dd4:
    // 0x317dd4: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x317dd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
label_317dd8:
    // 0x317dd8: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x317dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_317ddc:
    // 0x317ddc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x317ddcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_317de0:
    // 0x317de0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x317de0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_317de4:
    // 0x317de4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x317de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317de8:
    // 0x317de8: 0x35438  dsll        $t2, $v1, 16
    ctx->pc = 0x317de8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << 16);
label_317dec:
    // 0x317dec: 0x3543ffff  ori         $v1, $t2, 0xFFFF
    ctx->pc = 0x317decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_317df0:
    // 0x317df0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x317df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_317df4:
    // 0x317df4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x317df4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_317df8:
    // 0x317df8: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x317df8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
label_317dfc:
    // 0x317dfc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x317dfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_317e00:
    // 0x317e00: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x317e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317e04:
    // 0x317e04: 0x33c38  dsll        $a3, $v1, 16
    ctx->pc = 0x317e04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 16);
label_317e08:
    // 0x317e08: 0x34e3ffff  ori         $v1, $a3, 0xFFFF
    ctx->pc = 0x317e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_317e0c:
    // 0x317e0c: 0x834024  and         $t0, $a0, $v1
    ctx->pc = 0x317e0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_317e10:
    // 0x317e10: 0x8203c  dsll32      $a0, $t0, 0
    ctx->pc = 0x317e10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << (32 + 0));
label_317e14:
    // 0x317e14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x317e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_317e18:
    // 0x317e18: 0x3483c  dsll32      $t1, $v1, 0
    ctx->pc = 0x317e18u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 0));
label_317e1c:
    // 0x317e1c: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x317e1cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
label_317e20:
    // 0x317e20: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x317e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317e24:
    // 0x317e24: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x317e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_317e28:
    // 0x317e28: 0x3467ffff  ori         $a3, $v1, 0xFFFF
    ctx->pc = 0x317e28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_317e2c:
    // 0x317e2c: 0x1271824  and         $v1, $t1, $a3
    ctx->pc = 0x317e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
label_317e30:
    // 0x317e30: 0x834025  or          $t0, $a0, $v1
    ctx->pc = 0x317e30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_317e34:
    // 0x317e34: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x317e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_317e38:
    // 0x317e38: 0x8c821298  lw          $v0, 0x1298($a0)
    ctx->pc = 0x317e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4760)));
label_317e3c:
    // 0x317e3c: 0x23980  sll         $a3, $v0, 6
    ctx->pc = 0x317e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_317e40:
    // 0x317e40: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x317e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_317e44:
    // 0x317e44: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x317e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_317e48:
    // 0x317e48: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x317e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_317e4c:
    // 0x317e4c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x317e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_317e50:
    // 0x317e50: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x317e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317e54:
    // 0x317e54: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x317e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_317e58:
    // 0x317e58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x317e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_317e5c:
    // 0x317e5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x317e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_317e60:
    // 0x317e60: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x317e60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_317e64:
    // 0x317e64: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x317e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_317e68:
    // 0x317e68: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x317e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_317e6c:
    // 0x317e6c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x317e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_317e70:
    // 0x317e70: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x317e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_317e74:
    // 0x317e74: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x317e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317e78:
    // 0x317e78: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x317e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_317e7c:
    // 0x317e7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x317e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_317e80:
    // 0x317e80: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x317e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_317e84:
    // 0x317e84: 0x443825  or          $a3, $v0, $a0
    ctx->pc = 0x317e84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_317e88:
    // 0x317e88: 0x24041700  addiu       $a0, $zero, 0x1700
    ctx->pc = 0x317e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5888));
label_317e8c:
    // 0x317e8c: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x317e8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_317e90:
    // 0x317e90: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x317e90u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_317e94:
    // 0x317e94: 0xc0631f0  jal         func_18C7C0
label_317e98:
    if (ctx->pc == 0x317E98u) {
        ctx->pc = 0x317E9Cu;
        goto label_317e9c;
    }
    ctx->pc = 0x317E94u;
    SET_GPR_U32(ctx, 31, 0x317E9Cu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x317E94u, 0x317E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317E9Cu;
label_317e9c:
    // 0x317e9c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x317e9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_317ea0:
    // 0x317ea0: 0xc06332c  jal         func_18CCB0
label_317ea4:
    if (ctx->pc == 0x317EA4u) {
        ctx->pc = 0x317EA8u;
        goto label_317ea8;
    }
    ctx->pc = 0x317EA0u;
    SET_GPR_U32(ctx, 31, 0x317EA8u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x317EA0u, 0x317EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317EA8u;
label_317ea8:
    // 0x317ea8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317ea8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317eac:
    // 0x317eac: 0x0  nop
    ctx->pc = 0x317eacu;
    // NOP
label_317eb0:
    // 0x317eb0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x317eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_317eb4:
    // 0x317eb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317eb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317eb8:
    // 0x317eb8: 0x0  nop
    ctx->pc = 0x317eb8u;
    // NOP
label_317ebc:
    // 0x317ebc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x317ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_317ec0:
    // 0x317ec0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x317ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_317ec4:
    // 0x317ec4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x317ec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317ec8:
    // 0x317ec8: 0x0  nop
    ctx->pc = 0x317ec8u;
    // NOP
label_317ecc:
    // 0x317ecc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x317eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_317ed0:
    // 0x317ed0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x317ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_317ed4:
    // 0x317ed4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x317ed4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317ed8:
    // 0x317ed8: 0x0  nop
    ctx->pc = 0x317ed8u;
    // NOP
label_317edc:
    // 0x317edc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x317edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_317ee0:
    // 0x317ee0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x317ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_317ee4:
    // 0x317ee4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x317ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_317ee8:
    // 0x317ee8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x317ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_317eec:
    // 0x317eec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x317eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317ef0:
    // 0x317ef0: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x317ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
label_317ef4:
    // 0x317ef4: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x317ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_317ef8:
    // 0x317ef8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x317ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_317efc:
    // 0x317efc: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x317efcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_317f00:
    // 0x317f00: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x317f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_317f04:
    // 0x317f04: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x317f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_317f08:
    // 0x317f08: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x317f08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_317f0c:
    // 0x317f0c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x317f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317f10:
    // 0x317f10: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x317f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
label_317f14:
    // 0x317f14: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x317f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_317f18:
    // 0x317f18: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x317f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_317f1c:
    // 0x317f1c: 0xa24025  or          $t0, $a1, $v0
    ctx->pc = 0x317f1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_317f20:
    // 0x317f20: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x317f20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
label_317f24:
    // 0x317f24: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x317f24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_317f28:
    // 0x317f28: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x317f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317f2c:
    // 0x317f2c: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x317f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
label_317f30:
    // 0x317f30: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x317f30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_317f34:
    // 0x317f34: 0xa41024  and         $v0, $a1, $a0
    ctx->pc = 0x317f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_317f38:
    // 0x317f38: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x317f38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_317f3c:
    // 0x317f3c: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x317f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_317f40:
    // 0x317f40: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x317f40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
label_317f44:
    // 0x317f44: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x317f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_317f48:
    // 0x317f48: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x317f48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317f4c:
    // 0x317f4c: 0x51438  dsll        $v0, $a1, 16
    ctx->pc = 0x317f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 16);
label_317f50:
    // 0x317f50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x317f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_317f54:
    // 0x317f54: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x317f54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_317f58:
    // 0x317f58: 0xe46025  or          $t4, $a3, $a0
    ctx->pc = 0x317f58u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_317f5c:
    // 0x317f5c: 0x8fab0048  lw          $t3, 0x48($sp)
    ctx->pc = 0x317f5cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_317f60:
    // 0x317f60: 0x8d621298  lw          $v0, 0x1298($t3)
    ctx->pc = 0x317f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4760)));
label_317f64:
    // 0x317f64: 0x25180  sll         $t2, $v0, 6
    ctx->pc = 0x317f64u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_317f68:
    // 0x317f68: 0x8e050130  lw          $a1, 0x130($s0)
    ctx->pc = 0x317f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_317f6c:
    // 0x317f6c: 0xaa3021  addu        $a2, $a1, $t2
    ctx->pc = 0x317f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_317f70:
    // 0x317f70: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x317f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_317f74:
    // 0x317f74: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x317f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_317f78:
    // 0x317f78: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x317f78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317f7c:
    // 0x317f7c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x317f7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_317f80:
    // 0x317f80: 0x3487ffff  ori         $a3, $a0, 0xFFFF
    ctx->pc = 0x317f80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_317f84:
    // 0x317f84: 0x472024  and         $a0, $v0, $a3
    ctx->pc = 0x317f84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_317f88:
    // 0x317f88: 0x4483c  dsll32      $t1, $a0, 0
    ctx->pc = 0x317f88u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 0));
label_317f8c:
    // 0x317f8c: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x317f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_317f90:
    // 0x317f90: 0x8cc40130  lw          $a0, 0x130($a2)
    ctx->pc = 0x317f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_317f94:
    // 0x317f94: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x317f94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_317f98:
    // 0x317f98: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x317f98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_317f9c:
    // 0x317f9c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x317f9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_317fa0:
    // 0x317fa0: 0x41438  dsll        $v0, $a0, 16
    ctx->pc = 0x317fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 16);
label_317fa4:
    // 0x317fa4: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x317fa4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_317fa8:
    // 0x317fa8: 0xa72024  and         $a0, $a1, $a3
    ctx->pc = 0x317fa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
label_317fac:
    // 0x317fac: 0x891025  or          $v0, $a0, $t1
    ctx->pc = 0x317facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
label_317fb0:
    // 0x317fb0: 0x24041700  addiu       $a0, $zero, 0x1700
    ctx->pc = 0x317fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5888));
label_317fb4:
    // 0x317fb4: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x317fb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_317fb8:
    // 0x317fb8: 0x71803628  paddub      $a2, $t4, $zero
    ctx->pc = 0x317fb8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 12), GPR_VEC(ctx, 0)));
label_317fbc:
    // 0x317fbc: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x317fbcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_317fc0:
    // 0x317fc0: 0xc0631f0  jal         func_18C7C0
label_317fc4:
    if (ctx->pc == 0x317FC4u) {
        ctx->pc = 0x317FC8u;
        goto label_317fc8;
    }
    ctx->pc = 0x317FC0u;
    SET_GPR_U32(ctx, 31, 0x317FC8u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x317FC0u, 0x317FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317FC8u;
label_317fc8:
    // 0x317fc8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x317fc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_317fcc:
    // 0x317fcc: 0xc06332c  jal         func_18CCB0
label_317fd0:
    if (ctx->pc == 0x317FD0u) {
        ctx->pc = 0x317FD4u;
        goto label_317fd4;
    }
    ctx->pc = 0x317FCCu;
    SET_GPR_U32(ctx, 31, 0x317FD4u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x317FCCu, 0x317FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317FD4u;
label_317fd4:
    // 0x317fd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317fd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317fd8:
    // 0x317fd8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x317fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_317fdc:
    // 0x317fdc: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x317fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
label_317fe0:
    // 0x317fe0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317fe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317fe4:
    // 0x317fe4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x317fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_317fe8:
    // 0x317fe8: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x317fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_317fec:
    // 0x317fec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317fecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317ff0:
    // 0x317ff0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x317ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_317ff4:
    // 0x317ff4: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x317ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
label_317ff8:
    // 0x317ff8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317ff8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317ffc:
    // 0x317ffc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x317ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_318000:
    // 0x318000: 0xe48012d0  swc1        $f0, 0x12D0($a0)
    ctx->pc = 0x318000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4816), bits); }
label_318004:
    // 0x318004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_318008:
    // 0x318008: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x318008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_31800c:
    // 0x31800c: 0xac6212b0  sw          $v0, 0x12B0($v1)
    ctx->pc = 0x31800cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4784), GPR_U32(ctx, 2));
label_318010:
    // 0x318010: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x318010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_318014:
    // 0x318014: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x318014u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_318018:
    // 0x318018: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x318018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_31801c:
    // 0x31801c: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x31801cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
label_318020:
    // 0x318020: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x318020u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_318024:
    // 0x318024: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x318024u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_318028:
    // 0x318028: 0xc0c6af0  jal         func_31ABC0
label_31802c:
    if (ctx->pc == 0x31802Cu) {
        ctx->pc = 0x318030u;
        goto label_318030;
    }
    ctx->pc = 0x318028u;
    SET_GPR_U32(ctx, 31, 0x318030u);
    ctx->pc = 0x31ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ABC0u, 0x318028u, 0x318030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318030u;
label_318030:
    // 0x318030: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x318030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_318034:
    // 0x318034: 0xc46012d0  lwc1        $f0, 0x12D0($v1)
    ctx->pc = 0x318034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318038:
    // 0x318038: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x318038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_31803c:
    // 0x31803c: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x31803cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
label_318040:
    // 0x318040: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x318040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_318044:
    // 0x318044: 0xc46112d0  lwc1        $f1, 0x12D0($v1)
    ctx->pc = 0x318044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318048:
    // 0x318048: 0x3c0543fa  lui         $a1, 0x43FA
    ctx->pc = 0x318048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17402 << 16));
label_31804c:
    // 0x31804c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x31804cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318050:
    // 0x318050: 0x0  nop
    ctx->pc = 0x318050u;
    // NOP
label_318054:
    // 0x318054: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x318054u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318058:
    // 0x318058: 0x0  nop
    ctx->pc = 0x318058u;
    // NOP
label_31805c:
    // 0x31805c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_318060:
    if (ctx->pc == 0x318060u) {
        ctx->pc = 0x318064u;
        goto label_318064;
    }
    ctx->pc = 0x31805Cu;
    {
        const bool branch_taken_0x31805c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31805c) {
            ctx->pc = 0x318080u;
            goto label_318080;
        }
    }
    ctx->pc = 0x318064u;
label_318064:
    // 0x318064: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x318064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_318068:
    // 0x318068: 0xc46112d0  lwc1        $f1, 0x12D0($v1)
    ctx->pc = 0x318068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31806c:
    // 0x31806c: 0x3c044220  lui         $a0, 0x4220
    ctx->pc = 0x31806cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16928 << 16));
label_318070:
    // 0x318070: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x318070u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318074:
    // 0x318074: 0x0  nop
    ctx->pc = 0x318074u;
    // NOP
label_318078:
    // 0x318078: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318078u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31807c:
    // 0x31807c: 0xe46012d0  swc1        $f0, 0x12D0($v1)
    ctx->pc = 0x31807cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4816), bits); }
label_318080:
    // 0x318080: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x318080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_318084:
    // 0x318084: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x318084u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_318088:
    // 0x318088: 0xc05cd34  jal         func_1734D0
label_31808c:
    if (ctx->pc == 0x31808Cu) {
        ctx->pc = 0x318090u;
        goto label_318090;
    }
    ctx->pc = 0x318088u;
    SET_GPR_U32(ctx, 31, 0x318090u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x318088u, 0x318090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318090u;
label_318090:
    // 0x318090: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x318090u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_318094:
    // 0x318094: 0x24c40120  addiu       $a0, $a2, 0x120
    ctx->pc = 0x318094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
label_318098:
    // 0x318098: 0x78880000  lq          $t0, 0x0($a0)
    ctx->pc = 0x318098u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_31809c:
    // 0x31809c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31809cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3180a0:
    // 0x3180a0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3180a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_3180a4:
    // 0x3180a4: 0x24470030  addiu       $a3, $v0, 0x30
    ctx->pc = 0x3180a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_3180a8:
    // 0x3180a8: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x3180a8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
label_3180ac:
    // 0x3180ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3180acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3180b0:
    // 0x3180b0: 0x0  nop
    ctx->pc = 0x3180b0u;
    // NOP
label_3180b4:
    // 0x3180b4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3180b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3180b8:
    // 0x3180b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3180b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3180bc:
    // 0x3180bc: 0x0  nop
    ctx->pc = 0x3180bcu;
    // NOP
label_3180c0:
    // 0x3180c0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3180c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3180c4:
    // 0x3180c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3180c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3180c8:
    // 0x3180c8: 0x0  nop
    ctx->pc = 0x3180c8u;
    // NOP
label_3180cc:
    // 0x3180cc: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3180ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3180d0:
    // 0x3180d0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x3180d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_3180d4:
    // 0x3180d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3180d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3180d8:
    // 0x3180d8: 0x0  nop
    ctx->pc = 0x3180d8u;
    // NOP
label_3180dc:
    // 0x3180dc: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3180dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_3180e0:
    // 0x3180e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3180e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_3180e4:
    // 0x3180e4: 0x8c26013c  lw          $a2, 0x13C($at)
    ctx->pc = 0x3180e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 316)));
label_3180e8:
    // 0x3180e8: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x3180e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_3180ec:
    // 0x3180ec: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_3180f0:
    if (ctx->pc == 0x3180F0u) {
        ctx->pc = 0x3180F4u;
        goto label_3180f4;
    }
    ctx->pc = 0x3180ECu;
    {
        const bool branch_taken_0x3180ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3180ec) {
            ctx->pc = 0x318138u;
            goto label_318138;
        }
    }
    ctx->pc = 0x3180F4u;
label_3180f4:
    // 0x3180f4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3180f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3180f8:
    // 0x3180f8: 0x3c084300  lui         $t0, 0x4300
    ctx->pc = 0x3180f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17152 << 16));
label_3180fc:
    // 0x3180fc: 0x44886000  mtc1        $t0, $f12
    ctx->pc = 0x3180fcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_318100:
    // 0x318100: 0x3c063f7d  lui         $a2, 0x3F7D
    ctx->pc = 0x318100u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16253 << 16));
label_318104:
    // 0x318104: 0x34c470a4  ori         $a0, $a2, 0x70A4
    ctx->pc = 0x318104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)28836);
label_318108:
    // 0x318108: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x318108u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_31810c:
    // 0x31810c: 0x3c0444bb  lui         $a0, 0x44BB
    ctx->pc = 0x31810cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17595 << 16));
label_318110:
    // 0x318110: 0x34878000  ori         $a3, $a0, 0x8000
    ctx->pc = 0x318110u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
label_318114:
    // 0x318114: 0x44877000  mtc1        $a3, $f14
    ctx->pc = 0x318114u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_318118:
    // 0x318118: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x318118u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31811c:
    // 0x31811c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31811cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_318120:
    // 0x318120: 0x24480120  addiu       $t0, $v0, 0x120
    ctx->pc = 0x318120u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_318124:
    // 0x318124: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x318124u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_318128:
    // 0x318128: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x318128u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_31812c:
    // 0x31812c: 0xc086488  jal         func_219220
label_318130:
    if (ctx->pc == 0x318130u) {
        ctx->pc = 0x318134u;
        goto label_318134;
    }
    ctx->pc = 0x31812Cu;
    SET_GPR_U32(ctx, 31, 0x318134u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x31812Cu, 0x318134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318134u;
label_318134:
    // 0x318134: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x318134u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_318138:
    // 0x318138: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x318138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_31813c:
    // 0x31813c: 0xc0c6aac  jal         func_31AAB0
label_318140:
    if (ctx->pc == 0x318140u) {
        ctx->pc = 0x318144u;
        goto label_318144;
    }
    ctx->pc = 0x31813Cu;
    SET_GPR_U32(ctx, 31, 0x318144u);
    ctx->pc = 0x31AAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AAB0u, 0x31813Cu, 0x318144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318144u;
label_318144:
    // 0x318144: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x318144u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_318148:
    // 0x318148: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_31814c:
    if (ctx->pc == 0x31814Cu) {
        ctx->pc = 0x318150u;
        goto label_318150;
    }
    ctx->pc = 0x318148u;
    {
        const bool branch_taken_0x318148 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x318148) {
            ctx->pc = 0x318184u;
            goto label_318184;
        }
    }
    ctx->pc = 0x318150u;
label_318150:
    // 0x318150: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x318150u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_318154:
    // 0x318154: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x318154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_318158:
    // 0x318158: 0xa0890000  sb          $t1, 0x0($a0)
    ctx->pc = 0x318158u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 9));
label_31815c:
    // 0x31815c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31815cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_318160:
    // 0x318160: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x318160u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
label_318164:
    // 0x318164: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x318164u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_318168:
    // 0x318168: 0xa1000002  sb          $zero, 0x2($t0)
    ctx->pc = 0x318168u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 0));
label_31816c:
    // 0x31816c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31816cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_318170:
    // 0x318170: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x318170u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_318174:
    // 0x318174: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x318174u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_318178:
    // 0x318178: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x318178u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_31817c:
    // 0x31817c: 0x10000079  b           . + 4 + (0x79 << 2)
label_318180:
    if (ctx->pc == 0x318180u) {
        ctx->pc = 0x318184u;
        goto label_318184;
    }
    ctx->pc = 0x31817Cu;
    {
        const bool branch_taken_0x31817c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31817c) {
            ctx->pc = 0x318364u;
            goto label_318364;
        }
    }
    ctx->pc = 0x318184u;
label_318184:
    // 0x318184: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x318184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_318188:
    // 0x318188: 0x9024edae  lbu         $a0, -0x1252($at)
    ctx->pc = 0x318188u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294962606)));
label_31818c:
    // 0x31818c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_318190:
    if (ctx->pc == 0x318190u) {
        ctx->pc = 0x318194u;
        goto label_318194;
    }
    ctx->pc = 0x31818Cu;
    {
        const bool branch_taken_0x31818c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31818c) {
            ctx->pc = 0x3181A0u;
            goto label_3181a0;
        }
    }
    ctx->pc = 0x318194u;
label_318194:
    // 0x318194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_318198:
    // 0x318198: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x318198u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_31819c:
    // 0x31819c: 0xace21294  sw          $v0, 0x1294($a3)
    ctx->pc = 0x31819cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4756), GPR_U32(ctx, 2));
label_3181a0:
    // 0x3181a0: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x3181a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3181a4:
    // 0x3181a4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x3181a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_3181a8:
    // 0x3181a8: 0x250200e0  addiu       $v0, $t0, 0xE0
    ctx->pc = 0x3181a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 224));
label_3181ac:
    // 0x3181ac: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x3181acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3181b0:
    // 0x3181b0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x3181b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3181b4:
    // 0x3181b4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x3181b4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3181b8:
    // 0x3181b8: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x3181b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
label_3181bc:
    // 0x3181bc: 0x2447ae80  addiu       $a3, $v0, -0x5180
    ctx->pc = 0x3181bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946432));
label_3181c0:
    // 0x3181c0: 0xc06d02c  jal         func_1B40B0
label_3181c4:
    if (ctx->pc == 0x3181C4u) {
        ctx->pc = 0x3181C8u;
        goto label_3181c8;
    }
    ctx->pc = 0x3181C0u;
    SET_GPR_U32(ctx, 31, 0x3181C8u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x3181C0u, 0x3181C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3181C8u;
label_3181c8:
    // 0x3181c8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x3181c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3181cc:
    // 0x3181cc: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
label_3181d0:
    if (ctx->pc == 0x3181D0u) {
        ctx->pc = 0x3181D4u;
        goto label_3181d4;
    }
    ctx->pc = 0x3181CCu;
    {
        const bool branch_taken_0x3181cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3181cc) {
            ctx->pc = 0x31823Cu;
            goto label_31823c;
        }
    }
    ctx->pc = 0x3181D4u;
label_3181d4:
    // 0x3181d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3181d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3181d8:
    // 0x3181d8: 0x8c861294  lw          $a2, 0x1294($a0)
    ctx->pc = 0x3181d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4756)));
label_3181dc:
    // 0x3181dc: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
label_3181e0:
    if (ctx->pc == 0x3181E0u) {
        ctx->pc = 0x3181E4u;
        goto label_3181e4;
    }
    ctx->pc = 0x3181DCu;
    {
        const bool branch_taken_0x3181dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3181dc) {
            ctx->pc = 0x318200u;
            goto label_318200;
        }
    }
    ctx->pc = 0x3181E4u;
label_3181e4:
    // 0x3181e4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3181e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_3181e8:
    // 0x3181e8: 0x9023edae  lbu         $v1, -0x1252($at)
    ctx->pc = 0x3181e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294962606)));
label_3181ec:
    // 0x3181ec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3181f0:
    if (ctx->pc == 0x3181F0u) {
        ctx->pc = 0x3181F4u;
        goto label_3181f4;
    }
    ctx->pc = 0x3181ECu;
    {
        const bool branch_taken_0x3181ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3181ec) {
            ctx->pc = 0x318200u;
            goto label_318200;
        }
    }
    ctx->pc = 0x3181F4u;
label_3181f4:
    // 0x3181f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3181f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3181f8:
    // 0x3181f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3181f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3181fc:
    // 0x3181fc: 0xac6712a0  sw          $a3, 0x12A0($v1)
    ctx->pc = 0x3181fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4768), GPR_U32(ctx, 7));
label_318200:
    // 0x318200: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x318200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_318204:
    // 0x318204: 0xacc01294  sw          $zero, 0x1294($a2)
    ctx->pc = 0x318204u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4756), GPR_U32(ctx, 0));
label_318208:
    // 0x318208: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x318208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31820c:
    // 0x31820c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31820cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_318210:
    // 0x318210: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x318210u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_318214:
    // 0x318214: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x318214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_318218:
    // 0x318218: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x318218u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
label_31821c:
    // 0x31821c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31821cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_318220:
    // 0x318220: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x318220u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_318224:
    // 0x318224: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x318224u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_318228:
    // 0x318228: 0xa1000003  sb          $zero, 0x3($t0)
    ctx->pc = 0x318228u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 0));
label_31822c:
    // 0x31822c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31822cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_318230:
    // 0x318230: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x318230u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_318234:
    // 0x318234: 0x1000004b  b           . + 4 + (0x4B << 2)
label_318238:
    if (ctx->pc == 0x318238u) {
        ctx->pc = 0x31823Cu;
        goto label_31823c;
    }
    ctx->pc = 0x318234u;
    {
        const bool branch_taken_0x318234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318234) {
            ctx->pc = 0x318364u;
            goto label_318364;
        }
    }
    ctx->pc = 0x31823Cu;
label_31823c:
    // 0x31823c: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x31823cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_318240:
    // 0x318240: 0xc4c101a8  lwc1        $f1, 0x1A8($a2)
    ctx->pc = 0x318240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318244:
    // 0x318244: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x318244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
label_318248:
    // 0x318248: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x318248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
label_31824c:
    // 0x31824c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31824cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318250:
    // 0x318250: 0x0  nop
    ctx->pc = 0x318250u;
    // NOP
label_318254:
    // 0x318254: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318254u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_318258:
    // 0x318258: 0xe4c001a8  swc1        $f0, 0x1A8($a2)
    ctx->pc = 0x318258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 424), bits); }
label_31825c:
    // 0x31825c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x31825cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_318260:
    // 0x318260: 0xc4a101a4  lwc1        $f1, 0x1A4($a1)
    ctx->pc = 0x318260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318264:
    // 0x318264: 0x3c073c23  lui         $a3, 0x3C23
    ctx->pc = 0x318264u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15395 << 16));
label_318268:
    // 0x318268: 0x34e4d70a  ori         $a0, $a3, 0xD70A
    ctx->pc = 0x318268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
label_31826c:
    // 0x31826c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31826cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318270:
    // 0x318270: 0x0  nop
    ctx->pc = 0x318270u;
    // NOP
label_318274:
    // 0x318274: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318274u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_318278:
    // 0x318278: 0xe4a001a4  swc1        $f0, 0x1A4($a1)
    ctx->pc = 0x318278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 420), bits); }
label_31827c:
    // 0x31827c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31827cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_318280:
    // 0x318280: 0xc48101a0  lwc1        $f1, 0x1A0($a0)
    ctx->pc = 0x318280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318284:
    // 0x318284: 0x3c0a3c23  lui         $t2, 0x3C23
    ctx->pc = 0x318284u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15395 << 16));
label_318288:
    // 0x318288: 0x3546d70a  ori         $a2, $t2, 0xD70A
    ctx->pc = 0x318288u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)55050);
label_31828c:
    // 0x31828c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x31828cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318290:
    // 0x318290: 0x0  nop
    ctx->pc = 0x318290u;
    // NOP
label_318294:
    // 0x318294: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318294u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_318298:
    // 0x318298: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x318298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
label_31829c:
    // 0x31829c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31829cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3182a0:
    // 0x3182a0: 0xc48101a8  lwc1        $f1, 0x1A8($a0)
    ctx->pc = 0x3182a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3182a4:
    // 0x3182a4: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x3182a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
label_3182a8:
    // 0x3182a8: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3182a8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3182ac:
    // 0x3182ac: 0x0  nop
    ctx->pc = 0x3182acu;
    // NOP
label_3182b0:
    // 0x3182b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3182b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3182b4:
    // 0x3182b4: 0x0  nop
    ctx->pc = 0x3182b4u;
    // NOP
label_3182b8:
    // 0x3182b8: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_3182bc:
    if (ctx->pc == 0x3182BCu) {
        ctx->pc = 0x3182C0u;
        goto label_3182c0;
    }
    ctx->pc = 0x3182B8u;
    {
        const bool branch_taken_0x3182b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3182b8) {
            ctx->pc = 0x318314u;
            goto label_318314;
        }
    }
    ctx->pc = 0x3182C0u;
label_3182c0:
    // 0x3182c0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3182c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3182c4:
    // 0x3182c4: 0xc48101a8  lwc1        $f1, 0x1A8($a0)
    ctx->pc = 0x3182c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3182c8:
    // 0x3182c8: 0x3c0b3f80  lui         $t3, 0x3F80
    ctx->pc = 0x3182c8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16256 << 16));
label_3182cc:
    // 0x3182cc: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x3182ccu;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3182d0:
    // 0x3182d0: 0x0  nop
    ctx->pc = 0x3182d0u;
    // NOP
label_3182d4:
    // 0x3182d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3182d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3182d8:
    // 0x3182d8: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x3182d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
label_3182dc:
    // 0x3182dc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x3182dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3182e0:
    // 0x3182e0: 0xc4a101a4  lwc1        $f1, 0x1A4($a1)
    ctx->pc = 0x3182e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3182e4:
    // 0x3182e4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x3182e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_3182e8:
    // 0x3182e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3182e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3182ec:
    // 0x3182ec: 0x0  nop
    ctx->pc = 0x3182ecu;
    // NOP
label_3182f0:
    // 0x3182f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3182f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3182f4:
    // 0x3182f4: 0xe4a001a4  swc1        $f0, 0x1A4($a1)
    ctx->pc = 0x3182f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 420), bits); }
label_3182f8:
    // 0x3182f8: 0x8faa0048  lw          $t2, 0x48($sp)
    ctx->pc = 0x3182f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3182fc:
    // 0x3182fc: 0xc54101a0  lwc1        $f1, 0x1A0($t2)
    ctx->pc = 0x3182fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318300:
    // 0x318300: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x318300u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_318304:
    // 0x318304: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x318304u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318308:
    // 0x318308: 0x0  nop
    ctx->pc = 0x318308u;
    // NOP
label_31830c:
    // 0x31830c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31830cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_318310:
    // 0x318310: 0xe54001a0  swc1        $f0, 0x1A0($t2)
    ctx->pc = 0x318310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 416), bits); }
label_318314:
    // 0x318314: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x318314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_318318:
    // 0x318318: 0x8ca6128c  lw          $a2, 0x128C($a1)
    ctx->pc = 0x318318u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4748)));
label_31831c:
    // 0x31831c: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x31831cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_318320:
    // 0x318320: 0xaca4128c  sw          $a0, 0x128C($a1)
    ctx->pc = 0x318320u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4748), GPR_U32(ctx, 4));
label_318324:
    // 0x318324: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x318324u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_318328:
    // 0x318328: 0x8d25128c  lw          $a1, 0x128C($t1)
    ctx->pc = 0x318328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4748)));
label_31832c:
    // 0x31832c: 0x2ca10033  sltiu       $at, $a1, 0x33
    ctx->pc = 0x31832cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
label_318330:
    // 0x318330: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
label_318334:
    if (ctx->pc == 0x318334u) {
        ctx->pc = 0x318338u;
        goto label_318338;
    }
    ctx->pc = 0x318330u;
    {
        const bool branch_taken_0x318330 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x318330) {
            ctx->pc = 0x318364u;
            goto label_318364;
        }
    }
    ctx->pc = 0x318338u;
label_318338:
    // 0x318338: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x318338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31833c:
    // 0x31833c: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x31833cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_318340:
    // 0x318340: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x318340u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
label_318344:
    // 0x318344: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x318344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_318348:
    // 0x318348: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x318348u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
label_31834c:
    // 0x31834c: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x31834cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_318350:
    // 0x318350: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x318350u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
label_318354:
    // 0x318354: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x318354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_318358:
    // 0x318358: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x318358u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
label_31835c:
    // 0x31835c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31835cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_318360:
    // 0x318360: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x318360u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_318364:
    // 0x318364: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x318364u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_318368:
    // 0x318368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x318368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_31836c:
    // 0x31836c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x31836cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_318370:
    // 0x318370: 0x3e00008  jr          $ra
label_318374:
    if (ctx->pc == 0x318374u) {
        ctx->pc = 0x318378u;
        goto label_fallthrough_0x318370;
    }
    ctx->pc = 0x318370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x318370:
    ctx->pc = 0x318378u;
}
