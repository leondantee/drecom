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

// Function: Em10_R1_dm_upper
// Address: 0x131e10 - 0x132484
void Em10_R1_dm_upper_0x131e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_dm_upper_0x131e10");
#endif

    switch (ctx->pc) {
        case 0x131e10u: goto label_131e10;
        case 0x131e14u: goto label_131e14;
        case 0x131e18u: goto label_131e18;
        case 0x131e1cu: goto label_131e1c;
        case 0x131e20u: goto label_131e20;
        case 0x131e24u: goto label_131e24;
        case 0x131e28u: goto label_131e28;
        case 0x131e2cu: goto label_131e2c;
        case 0x131e30u: goto label_131e30;
        case 0x131e34u: goto label_131e34;
        case 0x131e38u: goto label_131e38;
        case 0x131e3cu: goto label_131e3c;
        case 0x131e40u: goto label_131e40;
        case 0x131e44u: goto label_131e44;
        case 0x131e48u: goto label_131e48;
        case 0x131e4cu: goto label_131e4c;
        case 0x131e50u: goto label_131e50;
        case 0x131e54u: goto label_131e54;
        case 0x131e58u: goto label_131e58;
        case 0x131e5cu: goto label_131e5c;
        case 0x131e60u: goto label_131e60;
        case 0x131e64u: goto label_131e64;
        case 0x131e68u: goto label_131e68;
        case 0x131e6cu: goto label_131e6c;
        case 0x131e70u: goto label_131e70;
        case 0x131e74u: goto label_131e74;
        case 0x131e78u: goto label_131e78;
        case 0x131e7cu: goto label_131e7c;
        case 0x131e80u: goto label_131e80;
        case 0x131e84u: goto label_131e84;
        case 0x131e88u: goto label_131e88;
        case 0x131e8cu: goto label_131e8c;
        case 0x131e90u: goto label_131e90;
        case 0x131e94u: goto label_131e94;
        case 0x131e98u: goto label_131e98;
        case 0x131e9cu: goto label_131e9c;
        case 0x131ea0u: goto label_131ea0;
        case 0x131ea4u: goto label_131ea4;
        case 0x131ea8u: goto label_131ea8;
        case 0x131eacu: goto label_131eac;
        case 0x131eb0u: goto label_131eb0;
        case 0x131eb4u: goto label_131eb4;
        case 0x131eb8u: goto label_131eb8;
        case 0x131ebcu: goto label_131ebc;
        case 0x131ec0u: goto label_131ec0;
        case 0x131ec4u: goto label_131ec4;
        case 0x131ec8u: goto label_131ec8;
        case 0x131eccu: goto label_131ecc;
        case 0x131ed0u: goto label_131ed0;
        case 0x131ed4u: goto label_131ed4;
        case 0x131ed8u: goto label_131ed8;
        case 0x131edcu: goto label_131edc;
        case 0x131ee0u: goto label_131ee0;
        case 0x131ee4u: goto label_131ee4;
        case 0x131ee8u: goto label_131ee8;
        case 0x131eecu: goto label_131eec;
        case 0x131ef0u: goto label_131ef0;
        case 0x131ef4u: goto label_131ef4;
        case 0x131ef8u: goto label_131ef8;
        case 0x131efcu: goto label_131efc;
        case 0x131f00u: goto label_131f00;
        case 0x131f04u: goto label_131f04;
        case 0x131f08u: goto label_131f08;
        case 0x131f0cu: goto label_131f0c;
        case 0x131f10u: goto label_131f10;
        case 0x131f14u: goto label_131f14;
        case 0x131f18u: goto label_131f18;
        case 0x131f1cu: goto label_131f1c;
        case 0x131f20u: goto label_131f20;
        case 0x131f24u: goto label_131f24;
        case 0x131f28u: goto label_131f28;
        case 0x131f2cu: goto label_131f2c;
        case 0x131f30u: goto label_131f30;
        case 0x131f34u: goto label_131f34;
        case 0x131f38u: goto label_131f38;
        case 0x131f3cu: goto label_131f3c;
        case 0x131f40u: goto label_131f40;
        case 0x131f44u: goto label_131f44;
        case 0x131f48u: goto label_131f48;
        case 0x131f4cu: goto label_131f4c;
        case 0x131f50u: goto label_131f50;
        case 0x131f54u: goto label_131f54;
        case 0x131f58u: goto label_131f58;
        case 0x131f5cu: goto label_131f5c;
        case 0x131f60u: goto label_131f60;
        case 0x131f64u: goto label_131f64;
        case 0x131f68u: goto label_131f68;
        case 0x131f6cu: goto label_131f6c;
        case 0x131f70u: goto label_131f70;
        case 0x131f74u: goto label_131f74;
        case 0x131f78u: goto label_131f78;
        case 0x131f7cu: goto label_131f7c;
        case 0x131f80u: goto label_131f80;
        case 0x131f84u: goto label_131f84;
        case 0x131f88u: goto label_131f88;
        case 0x131f8cu: goto label_131f8c;
        case 0x131f90u: goto label_131f90;
        case 0x131f94u: goto label_131f94;
        case 0x131f98u: goto label_131f98;
        case 0x131f9cu: goto label_131f9c;
        case 0x131fa0u: goto label_131fa0;
        case 0x131fa4u: goto label_131fa4;
        case 0x131fa8u: goto label_131fa8;
        case 0x131facu: goto label_131fac;
        case 0x131fb0u: goto label_131fb0;
        case 0x131fb4u: goto label_131fb4;
        case 0x131fb8u: goto label_131fb8;
        case 0x131fbcu: goto label_131fbc;
        case 0x131fc0u: goto label_131fc0;
        case 0x131fc4u: goto label_131fc4;
        case 0x131fc8u: goto label_131fc8;
        case 0x131fccu: goto label_131fcc;
        case 0x131fd0u: goto label_131fd0;
        case 0x131fd4u: goto label_131fd4;
        case 0x131fd8u: goto label_131fd8;
        case 0x131fdcu: goto label_131fdc;
        case 0x131fe0u: goto label_131fe0;
        case 0x131fe4u: goto label_131fe4;
        case 0x131fe8u: goto label_131fe8;
        case 0x131fecu: goto label_131fec;
        case 0x131ff0u: goto label_131ff0;
        case 0x131ff4u: goto label_131ff4;
        case 0x131ff8u: goto label_131ff8;
        case 0x131ffcu: goto label_131ffc;
        case 0x132000u: goto label_132000;
        case 0x132004u: goto label_132004;
        case 0x132008u: goto label_132008;
        case 0x13200cu: goto label_13200c;
        case 0x132010u: goto label_132010;
        case 0x132014u: goto label_132014;
        case 0x132018u: goto label_132018;
        case 0x13201cu: goto label_13201c;
        case 0x132020u: goto label_132020;
        case 0x132024u: goto label_132024;
        case 0x132028u: goto label_132028;
        case 0x13202cu: goto label_13202c;
        case 0x132030u: goto label_132030;
        case 0x132034u: goto label_132034;
        case 0x132038u: goto label_132038;
        case 0x13203cu: goto label_13203c;
        case 0x132040u: goto label_132040;
        case 0x132044u: goto label_132044;
        case 0x132048u: goto label_132048;
        case 0x13204cu: goto label_13204c;
        case 0x132050u: goto label_132050;
        case 0x132054u: goto label_132054;
        case 0x132058u: goto label_132058;
        case 0x13205cu: goto label_13205c;
        case 0x132060u: goto label_132060;
        case 0x132064u: goto label_132064;
        case 0x132068u: goto label_132068;
        case 0x13206cu: goto label_13206c;
        case 0x132070u: goto label_132070;
        case 0x132074u: goto label_132074;
        case 0x132078u: goto label_132078;
        case 0x13207cu: goto label_13207c;
        case 0x132080u: goto label_132080;
        case 0x132084u: goto label_132084;
        case 0x132088u: goto label_132088;
        case 0x13208cu: goto label_13208c;
        case 0x132090u: goto label_132090;
        case 0x132094u: goto label_132094;
        case 0x132098u: goto label_132098;
        case 0x13209cu: goto label_13209c;
        case 0x1320a0u: goto label_1320a0;
        case 0x1320a4u: goto label_1320a4;
        case 0x1320a8u: goto label_1320a8;
        case 0x1320acu: goto label_1320ac;
        case 0x1320b0u: goto label_1320b0;
        case 0x1320b4u: goto label_1320b4;
        case 0x1320b8u: goto label_1320b8;
        case 0x1320bcu: goto label_1320bc;
        case 0x1320c0u: goto label_1320c0;
        case 0x1320c4u: goto label_1320c4;
        case 0x1320c8u: goto label_1320c8;
        case 0x1320ccu: goto label_1320cc;
        case 0x1320d0u: goto label_1320d0;
        case 0x1320d4u: goto label_1320d4;
        case 0x1320d8u: goto label_1320d8;
        case 0x1320dcu: goto label_1320dc;
        case 0x1320e0u: goto label_1320e0;
        case 0x1320e4u: goto label_1320e4;
        case 0x1320e8u: goto label_1320e8;
        case 0x1320ecu: goto label_1320ec;
        case 0x1320f0u: goto label_1320f0;
        case 0x1320f4u: goto label_1320f4;
        case 0x1320f8u: goto label_1320f8;
        case 0x1320fcu: goto label_1320fc;
        case 0x132100u: goto label_132100;
        case 0x132104u: goto label_132104;
        case 0x132108u: goto label_132108;
        case 0x13210cu: goto label_13210c;
        case 0x132110u: goto label_132110;
        case 0x132114u: goto label_132114;
        case 0x132118u: goto label_132118;
        case 0x13211cu: goto label_13211c;
        case 0x132120u: goto label_132120;
        case 0x132124u: goto label_132124;
        case 0x132128u: goto label_132128;
        case 0x13212cu: goto label_13212c;
        case 0x132130u: goto label_132130;
        case 0x132134u: goto label_132134;
        case 0x132138u: goto label_132138;
        case 0x13213cu: goto label_13213c;
        case 0x132140u: goto label_132140;
        case 0x132144u: goto label_132144;
        case 0x132148u: goto label_132148;
        case 0x13214cu: goto label_13214c;
        case 0x132150u: goto label_132150;
        case 0x132154u: goto label_132154;
        case 0x132158u: goto label_132158;
        case 0x13215cu: goto label_13215c;
        case 0x132160u: goto label_132160;
        case 0x132164u: goto label_132164;
        case 0x132168u: goto label_132168;
        case 0x13216cu: goto label_13216c;
        case 0x132170u: goto label_132170;
        case 0x132174u: goto label_132174;
        case 0x132178u: goto label_132178;
        case 0x13217cu: goto label_13217c;
        case 0x132180u: goto label_132180;
        case 0x132184u: goto label_132184;
        case 0x132188u: goto label_132188;
        case 0x13218cu: goto label_13218c;
        case 0x132190u: goto label_132190;
        case 0x132194u: goto label_132194;
        case 0x132198u: goto label_132198;
        case 0x13219cu: goto label_13219c;
        case 0x1321a0u: goto label_1321a0;
        case 0x1321a4u: goto label_1321a4;
        case 0x1321a8u: goto label_1321a8;
        case 0x1321acu: goto label_1321ac;
        case 0x1321b0u: goto label_1321b0;
        case 0x1321b4u: goto label_1321b4;
        case 0x1321b8u: goto label_1321b8;
        case 0x1321bcu: goto label_1321bc;
        case 0x1321c0u: goto label_1321c0;
        case 0x1321c4u: goto label_1321c4;
        case 0x1321c8u: goto label_1321c8;
        case 0x1321ccu: goto label_1321cc;
        case 0x1321d0u: goto label_1321d0;
        case 0x1321d4u: goto label_1321d4;
        case 0x1321d8u: goto label_1321d8;
        case 0x1321dcu: goto label_1321dc;
        case 0x1321e0u: goto label_1321e0;
        case 0x1321e4u: goto label_1321e4;
        case 0x1321e8u: goto label_1321e8;
        case 0x1321ecu: goto label_1321ec;
        case 0x1321f0u: goto label_1321f0;
        case 0x1321f4u: goto label_1321f4;
        case 0x1321f8u: goto label_1321f8;
        case 0x1321fcu: goto label_1321fc;
        case 0x132200u: goto label_132200;
        case 0x132204u: goto label_132204;
        case 0x132208u: goto label_132208;
        case 0x13220cu: goto label_13220c;
        case 0x132210u: goto label_132210;
        case 0x132214u: goto label_132214;
        case 0x132218u: goto label_132218;
        case 0x13221cu: goto label_13221c;
        case 0x132220u: goto label_132220;
        case 0x132224u: goto label_132224;
        case 0x132228u: goto label_132228;
        case 0x13222cu: goto label_13222c;
        case 0x132230u: goto label_132230;
        case 0x132234u: goto label_132234;
        case 0x132238u: goto label_132238;
        case 0x13223cu: goto label_13223c;
        case 0x132240u: goto label_132240;
        case 0x132244u: goto label_132244;
        case 0x132248u: goto label_132248;
        case 0x13224cu: goto label_13224c;
        case 0x132250u: goto label_132250;
        case 0x132254u: goto label_132254;
        case 0x132258u: goto label_132258;
        case 0x13225cu: goto label_13225c;
        case 0x132260u: goto label_132260;
        case 0x132264u: goto label_132264;
        case 0x132268u: goto label_132268;
        case 0x13226cu: goto label_13226c;
        case 0x132270u: goto label_132270;
        case 0x132274u: goto label_132274;
        case 0x132278u: goto label_132278;
        case 0x13227cu: goto label_13227c;
        case 0x132280u: goto label_132280;
        case 0x132284u: goto label_132284;
        case 0x132288u: goto label_132288;
        case 0x13228cu: goto label_13228c;
        case 0x132290u: goto label_132290;
        case 0x132294u: goto label_132294;
        case 0x132298u: goto label_132298;
        case 0x13229cu: goto label_13229c;
        case 0x1322a0u: goto label_1322a0;
        case 0x1322a4u: goto label_1322a4;
        case 0x1322a8u: goto label_1322a8;
        case 0x1322acu: goto label_1322ac;
        case 0x1322b0u: goto label_1322b0;
        case 0x1322b4u: goto label_1322b4;
        case 0x1322b8u: goto label_1322b8;
        case 0x1322bcu: goto label_1322bc;
        case 0x1322c0u: goto label_1322c0;
        case 0x1322c4u: goto label_1322c4;
        case 0x1322c8u: goto label_1322c8;
        case 0x1322ccu: goto label_1322cc;
        case 0x1322d0u: goto label_1322d0;
        case 0x1322d4u: goto label_1322d4;
        case 0x1322d8u: goto label_1322d8;
        case 0x1322dcu: goto label_1322dc;
        case 0x1322e0u: goto label_1322e0;
        case 0x1322e4u: goto label_1322e4;
        case 0x1322e8u: goto label_1322e8;
        case 0x1322ecu: goto label_1322ec;
        case 0x1322f0u: goto label_1322f0;
        case 0x1322f4u: goto label_1322f4;
        case 0x1322f8u: goto label_1322f8;
        case 0x1322fcu: goto label_1322fc;
        case 0x132300u: goto label_132300;
        case 0x132304u: goto label_132304;
        case 0x132308u: goto label_132308;
        case 0x13230cu: goto label_13230c;
        case 0x132310u: goto label_132310;
        case 0x132314u: goto label_132314;
        case 0x132318u: goto label_132318;
        case 0x13231cu: goto label_13231c;
        case 0x132320u: goto label_132320;
        case 0x132324u: goto label_132324;
        case 0x132328u: goto label_132328;
        case 0x13232cu: goto label_13232c;
        case 0x132330u: goto label_132330;
        case 0x132334u: goto label_132334;
        case 0x132338u: goto label_132338;
        case 0x13233cu: goto label_13233c;
        case 0x132340u: goto label_132340;
        case 0x132344u: goto label_132344;
        case 0x132348u: goto label_132348;
        case 0x13234cu: goto label_13234c;
        case 0x132350u: goto label_132350;
        case 0x132354u: goto label_132354;
        case 0x132358u: goto label_132358;
        case 0x13235cu: goto label_13235c;
        case 0x132360u: goto label_132360;
        case 0x132364u: goto label_132364;
        case 0x132368u: goto label_132368;
        case 0x13236cu: goto label_13236c;
        case 0x132370u: goto label_132370;
        case 0x132374u: goto label_132374;
        case 0x132378u: goto label_132378;
        case 0x13237cu: goto label_13237c;
        case 0x132380u: goto label_132380;
        case 0x132384u: goto label_132384;
        case 0x132388u: goto label_132388;
        case 0x13238cu: goto label_13238c;
        case 0x132390u: goto label_132390;
        case 0x132394u: goto label_132394;
        case 0x132398u: goto label_132398;
        case 0x13239cu: goto label_13239c;
        case 0x1323a0u: goto label_1323a0;
        case 0x1323a4u: goto label_1323a4;
        case 0x1323a8u: goto label_1323a8;
        case 0x1323acu: goto label_1323ac;
        case 0x1323b0u: goto label_1323b0;
        case 0x1323b4u: goto label_1323b4;
        case 0x1323b8u: goto label_1323b8;
        case 0x1323bcu: goto label_1323bc;
        case 0x1323c0u: goto label_1323c0;
        case 0x1323c4u: goto label_1323c4;
        case 0x1323c8u: goto label_1323c8;
        case 0x1323ccu: goto label_1323cc;
        case 0x1323d0u: goto label_1323d0;
        case 0x1323d4u: goto label_1323d4;
        case 0x1323d8u: goto label_1323d8;
        case 0x1323dcu: goto label_1323dc;
        case 0x1323e0u: goto label_1323e0;
        case 0x1323e4u: goto label_1323e4;
        case 0x1323e8u: goto label_1323e8;
        case 0x1323ecu: goto label_1323ec;
        case 0x1323f0u: goto label_1323f0;
        case 0x1323f4u: goto label_1323f4;
        case 0x1323f8u: goto label_1323f8;
        case 0x1323fcu: goto label_1323fc;
        case 0x132400u: goto label_132400;
        case 0x132404u: goto label_132404;
        case 0x132408u: goto label_132408;
        case 0x13240cu: goto label_13240c;
        case 0x132410u: goto label_132410;
        case 0x132414u: goto label_132414;
        case 0x132418u: goto label_132418;
        case 0x13241cu: goto label_13241c;
        case 0x132420u: goto label_132420;
        case 0x132424u: goto label_132424;
        case 0x132428u: goto label_132428;
        case 0x13242cu: goto label_13242c;
        case 0x132430u: goto label_132430;
        case 0x132434u: goto label_132434;
        case 0x132438u: goto label_132438;
        case 0x13243cu: goto label_13243c;
        case 0x132440u: goto label_132440;
        case 0x132444u: goto label_132444;
        case 0x132448u: goto label_132448;
        case 0x13244cu: goto label_13244c;
        case 0x132450u: goto label_132450;
        case 0x132454u: goto label_132454;
        case 0x132458u: goto label_132458;
        case 0x13245cu: goto label_13245c;
        case 0x132460u: goto label_132460;
        case 0x132464u: goto label_132464;
        case 0x132468u: goto label_132468;
        case 0x13246cu: goto label_13246c;
        case 0x132470u: goto label_132470;
        case 0x132474u: goto label_132474;
        case 0x132478u: goto label_132478;
        case 0x13247cu: goto label_13247c;
        case 0x132480u: goto label_132480;
        default: break;
    }

    ctx->pc = 0x131e10u;

label_131e10:
    // 0x131e10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x131e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_131e14:
    // 0x131e14: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x131e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_131e18:
    // 0x131e18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x131e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_131e1c:
    // 0x131e1c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x131e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_131e20:
    // 0x131e20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_131e24:
    // 0x131e24: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x131e24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_131e28:
    // 0x131e28: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_131e2c:
    // 0x131e2c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x131e2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_131e30:
    // 0x131e30: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x131e30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_131e34:
    // 0x131e34: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x131e34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_131e38:
    // 0x131e38: 0x1020018d  beqz        $at, . + 4 + (0x18D << 2)
label_131e3c:
    if (ctx->pc == 0x131E3Cu) {
        ctx->pc = 0x131E40u;
        goto label_131e40;
    }
    ctx->pc = 0x131E38u;
    {
        const bool branch_taken_0x131e38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x131e38) {
            ctx->pc = 0x132470u;
            goto label_132470;
        }
    }
    ctx->pc = 0x131E40u;
label_131e40:
    // 0x131e40: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x131e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_131e44:
    // 0x131e44: 0x2464e540  addiu       $a0, $v1, -0x1AC0
    ctx->pc = 0x131e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960448));
label_131e48:
    // 0x131e48: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x131e48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_131e4c:
    // 0x131e4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x131e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_131e50:
    // 0x131e50: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x131e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_131e54:
    // 0x131e54: 0x600008  jr          $v1
label_131e58:
    if (ctx->pc == 0x131E58u) {
        ctx->pc = 0x131E5Cu;
        goto label_131e5c;
    }
    ctx->pc = 0x131E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131E54u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x131E5Cu;
label_131e5c:
    // 0x131e5c: 0xc067694  jal         func_19DA50
label_131e60:
    if (ctx->pc == 0x131E60u) {
        ctx->pc = 0x131E64u;
        goto label_131e64;
    }
    ctx->pc = 0x131E5Cu;
    SET_GPR_U32(ctx, 31, 0x131E64u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x131E5Cu, 0x131E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131E64u;
label_131e64:
    // 0x131e64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x131e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_131e68:
    // 0x131e68: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x131e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_131e6c:
    // 0x131e6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x131e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_131e70:
    // 0x131e70: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
label_131e74:
    if (ctx->pc == 0x131E74u) {
        ctx->pc = 0x131E78u;
        goto label_131e78;
    }
    ctx->pc = 0x131E70u;
    {
        const bool branch_taken_0x131e70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x131e70) {
            ctx->pc = 0x131EF4u;
            goto label_131ef4;
        }
    }
    ctx->pc = 0x131E78u;
label_131e78:
    // 0x131e78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_131e7c:
    // 0x131e7c: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_131e80:
    if (ctx->pc == 0x131E80u) {
        ctx->pc = 0x131E84u;
        goto label_131e84;
    }
    ctx->pc = 0x131E7Cu;
    {
        const bool branch_taken_0x131e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x131e7c) {
            ctx->pc = 0x131EC4u;
            goto label_131ec4;
        }
    }
    ctx->pc = 0x131E84u;
label_131e84:
    // 0x131e84: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_131e88:
    if (ctx->pc == 0x131E88u) {
        ctx->pc = 0x131E8Cu;
        goto label_131e8c;
    }
    ctx->pc = 0x131E84u;
    {
        const bool branch_taken_0x131e84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131e84) {
            ctx->pc = 0x131E94u;
            goto label_131e94;
        }
    }
    ctx->pc = 0x131E8Cu;
label_131e8c:
    // 0x131e8c: 0x10000001  b           . + 4 + (0x1 << 2)
label_131e90:
    if (ctx->pc == 0x131E90u) {
        ctx->pc = 0x131E94u;
        goto label_131e94;
    }
    ctx->pc = 0x131E8Cu;
    {
        const bool branch_taken_0x131e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131e8c) {
            ctx->pc = 0x131E94u;
            goto label_131e94;
        }
    }
    ctx->pc = 0x131E94u;
label_131e94:
    // 0x131e94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_131e98:
    // 0x131e98: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x131e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_131e9c:
    // 0x131e9c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x131e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_131ea0:
    // 0x131ea0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x131ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_131ea4:
    // 0x131ea4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x131ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_131ea8:
    // 0x131ea8: 0x24040507  addiu       $a0, $zero, 0x507
    ctx->pc = 0x131ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
label_131eac:
    // 0x131eac: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x131eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_131eb0:
    // 0x131eb0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x131eb0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_131eb4:
    // 0x131eb4: 0xc067b18  jal         func_19EC60
label_131eb8:
    if (ctx->pc == 0x131EB8u) {
        ctx->pc = 0x131EBCu;
        goto label_131ebc;
    }
    ctx->pc = 0x131EB4u;
    SET_GPR_U32(ctx, 31, 0x131EBCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x131EB4u, 0x131EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131EBCu;
label_131ebc:
    // 0x131ebc: 0x10000017  b           . + 4 + (0x17 << 2)
label_131ec0:
    if (ctx->pc == 0x131EC0u) {
        ctx->pc = 0x131EC4u;
        goto label_131ec4;
    }
    ctx->pc = 0x131EBCu;
    {
        const bool branch_taken_0x131ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131ebc) {
            ctx->pc = 0x131F1Cu;
            goto label_131f1c;
        }
    }
    ctx->pc = 0x131EC4u;
label_131ec4:
    // 0x131ec4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_131ec8:
    // 0x131ec8: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x131ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_131ecc:
    // 0x131ecc: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x131eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_131ed0:
    // 0x131ed0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x131ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_131ed4:
    // 0x131ed4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x131ed4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_131ed8:
    // 0x131ed8: 0x24040508  addiu       $a0, $zero, 0x508
    ctx->pc = 0x131ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1288));
label_131edc:
    // 0x131edc: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x131edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_131ee0:
    // 0x131ee0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x131ee0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_131ee4:
    // 0x131ee4: 0xc067b18  jal         func_19EC60
label_131ee8:
    if (ctx->pc == 0x131EE8u) {
        ctx->pc = 0x131EECu;
        goto label_131eec;
    }
    ctx->pc = 0x131EE4u;
    SET_GPR_U32(ctx, 31, 0x131EECu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x131EE4u, 0x131EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131EECu;
label_131eec:
    // 0x131eec: 0x1000000b  b           . + 4 + (0xB << 2)
label_131ef0:
    if (ctx->pc == 0x131EF0u) {
        ctx->pc = 0x131EF4u;
        goto label_131ef4;
    }
    ctx->pc = 0x131EECu;
    {
        const bool branch_taken_0x131eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131eec) {
            ctx->pc = 0x131F1Cu;
            goto label_131f1c;
        }
    }
    ctx->pc = 0x131EF4u;
label_131ef4:
    // 0x131ef4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_131ef8:
    // 0x131ef8: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x131ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_131efc:
    // 0x131efc: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x131efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_131f00:
    // 0x131f00: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x131f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_131f04:
    // 0x131f04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x131f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_131f08:
    // 0x131f08: 0x24040509  addiu       $a0, $zero, 0x509
    ctx->pc = 0x131f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
label_131f0c:
    // 0x131f0c: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x131f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_131f10:
    // 0x131f10: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x131f10u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_131f14:
    // 0x131f14: 0xc067b18  jal         func_19EC60
label_131f18:
    if (ctx->pc == 0x131F18u) {
        ctx->pc = 0x131F1Cu;
        goto label_131f1c;
    }
    ctx->pc = 0x131F14u;
    SET_GPR_U32(ctx, 31, 0x131F1Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x131F14u, 0x131F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131F1Cu;
label_131f1c:
    // 0x131f1c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_131f20:
    // 0x131f20: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_131f24:
    // 0x131f24: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x131f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_131f28:
    // 0x131f28: 0x24060051  addiu       $a2, $zero, 0x51
    ctx->pc = 0x131f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_131f2c:
    // 0x131f2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x131f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_131f30:
    // 0x131f30: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x131f30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_131f34:
    // 0x131f34: 0xc0965d0  jal         func_259740
label_131f38:
    if (ctx->pc == 0x131F38u) {
        ctx->pc = 0x131F3Cu;
        goto label_131f3c;
    }
    ctx->pc = 0x131F34u;
    SET_GPR_U32(ctx, 31, 0x131F3Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x131F34u, 0x131F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131F3Cu;
label_131f3c:
    // 0x131f3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_131f40:
    // 0x131f40: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x131f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_131f44:
    // 0x131f44: 0xc0675a4  jal         func_19D690
label_131f48:
    if (ctx->pc == 0x131F48u) {
        ctx->pc = 0x131F4Cu;
        goto label_131f4c;
    }
    ctx->pc = 0x131F44u;
    SET_GPR_U32(ctx, 31, 0x131F4Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x131F44u, 0x131F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131F4Cu;
label_131f4c:
    // 0x131f4c: 0x3c024297  lui         $v0, 0x4297
    ctx->pc = 0x131f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17047 << 16));
label_131f50:
    // 0x131f50: 0x34423332  ori         $v0, $v0, 0x3332
    ctx->pc = 0x131f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13106);
label_131f54:
    // 0x131f54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x131f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_131f58:
    // 0x131f58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_131f5c:
    // 0x131f5c: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x131f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_131f60:
    // 0x131f60: 0x3c02402c  lui         $v0, 0x402C
    ctx->pc = 0x131f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16428 << 16));
label_131f64:
    // 0x131f64: 0x3442cccc  ori         $v0, $v0, 0xCCCC
    ctx->pc = 0x131f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52428);
label_131f68:
    // 0x131f68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x131f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_131f6c:
    // 0x131f6c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_131f70:
    // 0x131f70: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x131f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_131f74:
    // 0x131f74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_131f78:
    // 0x131f78: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x131f78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_131f7c:
    // 0x131f7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x131f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_131f80:
    // 0x131f80: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x131f80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_131f84:
    // 0x131f84: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_131f88:
    // 0x131f88: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x131f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_131f8c:
    // 0x131f8c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x131f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_131f90:
    // 0x131f90: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x131f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_131f94:
    // 0x131f94: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x131f94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_131f98:
    // 0x131f98: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_131f9c:
    // 0x131f9c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x131f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_131fa0:
    // 0x131fa0: 0xc096b40  jal         func_25AD00
label_131fa4:
    if (ctx->pc == 0x131FA4u) {
        ctx->pc = 0x131FA8u;
        goto label_131fa8;
    }
    ctx->pc = 0x131FA0u;
    SET_GPR_U32(ctx, 31, 0x131FA8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x131FA0u, 0x131FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131FA8u;
label_131fa8:
    // 0x131fa8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_131fac:
    // 0x131fac: 0xc05cd10  jal         func_173440
label_131fb0:
    if (ctx->pc == 0x131FB0u) {
        ctx->pc = 0x131FB4u;
        goto label_131fb4;
    }
    ctx->pc = 0x131FACu;
    SET_GPR_U32(ctx, 31, 0x131FB4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x131FACu, 0x131FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131FB4u;
label_131fb4:
    // 0x131fb4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_131fb8:
    // 0x131fb8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x131fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_131fbc:
    // 0x131fbc: 0xc05cec4  jal         func_173B10
label_131fc0:
    if (ctx->pc == 0x131FC0u) {
        ctx->pc = 0x131FC4u;
        goto label_131fc4;
    }
    ctx->pc = 0x131FBCu;
    SET_GPR_U32(ctx, 31, 0x131FC4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x131FBCu, 0x131FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131FC4u;
label_131fc4:
    // 0x131fc4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_131fc8:
    // 0x131fc8: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x131fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_131fcc:
    // 0x131fcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x131fccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_131fd0:
    // 0x131fd0: 0x0  nop
    ctx->pc = 0x131fd0u;
    // NOP
label_131fd4:
    // 0x131fd4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x131fd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_131fd8:
    // 0x131fd8: 0x0  nop
    ctx->pc = 0x131fd8u;
    // NOP
label_131fdc:
    // 0x131fdc: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
label_131fe0:
    if (ctx->pc == 0x131FE0u) {
        ctx->pc = 0x131FE4u;
        goto label_131fe4;
    }
    ctx->pc = 0x131FDCu;
    {
        const bool branch_taken_0x131fdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x131fdc) {
            ctx->pc = 0x132054u;
            goto label_132054;
        }
    }
    ctx->pc = 0x131FE4u;
label_131fe4:
    // 0x131fe4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_131fe8:
    // 0x131fe8: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x131fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_131fec:
    // 0x131fec: 0xc057a80  jal         func_15EA00
label_131ff0:
    if (ctx->pc == 0x131FF0u) {
        ctx->pc = 0x131FF4u;
        goto label_131ff4;
    }
    ctx->pc = 0x131FECu;
    SET_GPR_U32(ctx, 31, 0x131FF4u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x131FECu, 0x131FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131FF4u;
label_131ff4:
    // 0x131ff4: 0x3c024489  lui         $v0, 0x4489
    ctx->pc = 0x131ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17545 << 16));
label_131ff8:
    // 0x131ff8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x131ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_131ffc:
    // 0x131ffc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x131ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_132000:
    // 0x132000: 0x0  nop
    ctx->pc = 0x132000u;
    // NOP
label_132004:
    // 0x132004: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x132004u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_132008:
    // 0x132008: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x132008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_13200c:
    // 0x13200c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13200cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132010:
    // 0x132010: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x132010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_132014:
    // 0x132014: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132018:
    // 0x132018: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x132018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13201c:
    // 0x13201c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13201cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_132020:
    // 0x132020: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x132020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_132024:
    // 0x132024: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132028:
    // 0x132028: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x132028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13202c:
    // 0x13202c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x13202cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_132030:
    // 0x132030: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x132030u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_132034:
    // 0x132034: 0x0  nop
    ctx->pc = 0x132034u;
    // NOP
label_132038:
    // 0x132038: 0x4501002e  bc1t        . + 4 + (0x2E << 2)
label_13203c:
    if (ctx->pc == 0x13203Cu) {
        ctx->pc = 0x132040u;
        goto label_132040;
    }
    ctx->pc = 0x132038u;
    {
        const bool branch_taken_0x132038 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x132038) {
            ctx->pc = 0x1320F4u;
            goto label_1320f4;
        }
    }
    ctx->pc = 0x132040u;
label_132040:
    // 0x132040: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x132040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_132044:
    // 0x132044: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132048:
    // 0x132048: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x132048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_13204c:
    // 0x13204c: 0x10000029  b           . + 4 + (0x29 << 2)
label_132050:
    if (ctx->pc == 0x132050u) {
        ctx->pc = 0x132054u;
        goto label_132054;
    }
    ctx->pc = 0x13204Cu;
    {
        const bool branch_taken_0x13204c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13204c) {
            ctx->pc = 0x1320F4u;
            goto label_1320f4;
        }
    }
    ctx->pc = 0x132054u;
label_132054:
    // 0x132054: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132058:
    // 0x132058: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_13205c:
    // 0x13205c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x13205cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_132060:
    // 0x132060: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x132060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_132064:
    // 0x132064: 0xc05cf7c  jal         func_173DF0
label_132068:
    if (ctx->pc == 0x132068u) {
        ctx->pc = 0x13206Cu;
        goto label_13206c;
    }
    ctx->pc = 0x132064u;
    SET_GPR_U32(ctx, 31, 0x13206Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x132064u, 0x13206Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13206Cu;
label_13206c:
    // 0x13206c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x13206cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_132070:
    // 0x132070: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132074:
    // 0x132074: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x132074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_132078:
    // 0x132078: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_13207c:
    // 0x13207c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x13207cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_132080:
    // 0x132080: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x132080u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_132084:
    // 0x132084: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x132084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_132088:
    // 0x132088: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_13208c:
    // 0x13208c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x13208cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_132090:
    // 0x132090: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132094:
    // 0x132094: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x132094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_132098:
    // 0x132098: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x132098u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_13209c:
    // 0x13209c: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x13209cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_1320a0:
    // 0x1320a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1320a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1320a4:
    // 0x1320a4: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1320a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1320a8:
    // 0x1320a8: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1320a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1320ac:
    // 0x1320ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1320acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1320b0:
    // 0x1320b0: 0x0  nop
    ctx->pc = 0x1320b0u;
    // NOP
label_1320b4:
    // 0x1320b4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_1320b8:
    if (ctx->pc == 0x1320B8u) {
        ctx->pc = 0x1320BCu;
        goto label_1320bc;
    }
    ctx->pc = 0x1320B4u;
    {
        const bool branch_taken_0x1320b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1320b4) {
            ctx->pc = 0x1320F4u;
            goto label_1320f4;
        }
    }
    ctx->pc = 0x1320BCu;
label_1320bc:
    // 0x1320bc: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1320bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1320c0:
    // 0x1320c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1320c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1320c4:
    // 0x1320c4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1320c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1320c8:
    // 0x1320c8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1320c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1320cc:
    // 0x1320cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1320ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1320d0:
    // 0x1320d0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1320d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_1320d4:
    // 0x1320d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1320d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1320d8:
    // 0x1320d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1320d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1320dc:
    // 0x1320dc: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1320dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_1320e0:
    // 0x1320e0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1320e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1320e4:
    // 0x1320e4: 0xc0974dc  jal         func_25D370
label_1320e8:
    if (ctx->pc == 0x1320E8u) {
        ctx->pc = 0x1320ECu;
        goto label_1320ec;
    }
    ctx->pc = 0x1320E4u;
    SET_GPR_U32(ctx, 31, 0x1320ECu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1320E4u, 0x1320ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1320ECu;
label_1320ec:
    // 0x1320ec: 0x100000e0  b           . + 4 + (0xE0 << 2)
label_1320f0:
    if (ctx->pc == 0x1320F0u) {
        ctx->pc = 0x1320F4u;
        goto label_1320f4;
    }
    ctx->pc = 0x1320ECu;
    {
        const bool branch_taken_0x1320ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1320ec) {
            ctx->pc = 0x132470u;
            goto label_132470;
        }
    }
    ctx->pc = 0x1320F4u;
label_1320f4:
    // 0x1320f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1320f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1320f8:
    // 0x1320f8: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1320f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1320fc:
    // 0x1320fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1320fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132100:
    // 0x132100: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x132100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_132104:
    // 0x132104: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x132104u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_132108:
    // 0x132108: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x132108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_13210c:
    // 0x13210c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13210cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132110:
    // 0x132110: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x132110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_132114:
    // 0x132114: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x132114u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_132118:
    // 0x132118: 0x0  nop
    ctx->pc = 0x132118u;
    // NOP
label_13211c:
    // 0x13211c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13211cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_132120:
    // 0x132120: 0x0  nop
    ctx->pc = 0x132120u;
    // NOP
label_132124:
    // 0x132124: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_132128:
    if (ctx->pc == 0x132128u) {
        ctx->pc = 0x13212Cu;
        goto label_13212c;
    }
    ctx->pc = 0x132124u;
    {
        const bool branch_taken_0x132124 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x132124) {
            ctx->pc = 0x13213Cu;
            goto label_13213c;
        }
    }
    ctx->pc = 0x13212Cu;
label_13212c:
    // 0x13212c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x13212cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_132130:
    // 0x132130: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x132130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_132134:
    // 0x132134: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132138:
    // 0x132138: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x132138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_13213c:
    // 0x13213c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x13213cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132140:
    // 0x132140: 0xc0974dc  jal         func_25D370
label_132144:
    if (ctx->pc == 0x132144u) {
        ctx->pc = 0x132148u;
        goto label_132148;
    }
    ctx->pc = 0x132140u;
    SET_GPR_U32(ctx, 31, 0x132148u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x132140u, 0x132148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132148u;
label_132148:
    // 0x132148: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_13214c:
    // 0x13214c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x13214cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_132150:
    // 0x132150: 0x106000c7  beqz        $v1, . + 4 + (0xC7 << 2)
label_132154:
    if (ctx->pc == 0x132154u) {
        ctx->pc = 0x132158u;
        goto label_132158;
    }
    ctx->pc = 0x132150u;
    {
        const bool branch_taken_0x132150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x132150) {
            ctx->pc = 0x132470u;
            goto label_132470;
        }
    }
    ctx->pc = 0x132158u;
label_132158:
    // 0x132158: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_13215c:
    // 0x13215c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x13215cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_132160:
    // 0x132160: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x132160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_132164:
    // 0x132164: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x132164u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_132168:
    // 0x132168: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_13216c:
    if (ctx->pc == 0x13216Cu) {
        ctx->pc = 0x132170u;
        goto label_132170;
    }
    ctx->pc = 0x132168u;
    {
        const bool branch_taken_0x132168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132168) {
            ctx->pc = 0x132470u;
            goto label_132470;
        }
    }
    ctx->pc = 0x132170u;
label_132170:
    // 0x132170: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132174:
    // 0x132174: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132178:
    // 0x132178: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x132178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_13217c:
    // 0x13217c: 0x24060055  addiu       $a2, $zero, 0x55
    ctx->pc = 0x13217cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_132180:
    // 0x132180: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x132180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_132184:
    // 0x132184: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x132184u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_132188:
    // 0x132188: 0xc0965d0  jal         func_259740
label_13218c:
    if (ctx->pc == 0x13218Cu) {
        ctx->pc = 0x132190u;
        goto label_132190;
    }
    ctx->pc = 0x132188u;
    SET_GPR_U32(ctx, 31, 0x132190u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x132188u, 0x132190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132190u;
label_132190:
    // 0x132190: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132194:
    // 0x132194: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x132194u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_132198:
    // 0x132198: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x132198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_13219c:
    // 0x13219c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x13219cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1321a0:
    // 0x1321a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1321a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1321a4:
    // 0x1321a4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1321a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1321a8:
    // 0x1321a8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1321a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_1321ac:
    // 0x1321ac: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1321acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1321b0:
    // 0x1321b0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1321b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1321b4:
    // 0x1321b4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1321b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1321b8:
    // 0x1321b8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1321b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1321bc:
    // 0x1321bc: 0xc096b40  jal         func_25AD00
label_1321c0:
    if (ctx->pc == 0x1321C0u) {
        ctx->pc = 0x1321C4u;
        goto label_1321c4;
    }
    ctx->pc = 0x1321BCu;
    SET_GPR_U32(ctx, 31, 0x1321C4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1321BCu, 0x1321C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1321C4u;
label_1321c4:
    // 0x1321c4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1321c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1321c8:
    // 0x1321c8: 0xc05cd10  jal         func_173440
label_1321cc:
    if (ctx->pc == 0x1321CCu) {
        ctx->pc = 0x1321D0u;
        goto label_1321d0;
    }
    ctx->pc = 0x1321C8u;
    SET_GPR_U32(ctx, 31, 0x1321D0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1321C8u, 0x1321D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1321D0u;
label_1321d0:
    // 0x1321d0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1321d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1321d4:
    // 0x1321d4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1321d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1321d8:
    // 0x1321d8: 0xc05cec4  jal         func_173B10
label_1321dc:
    if (ctx->pc == 0x1321DCu) {
        ctx->pc = 0x1321E0u;
        goto label_1321e0;
    }
    ctx->pc = 0x1321D8u;
    SET_GPR_U32(ctx, 31, 0x1321E0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1321D8u, 0x1321E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1321E0u;
label_1321e0:
    // 0x1321e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1321e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1321e4:
    // 0x1321e4: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1321e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1321e8:
    // 0x1321e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1321e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1321ec:
    // 0x1321ec: 0x0  nop
    ctx->pc = 0x1321ecu;
    // NOP
label_1321f0:
    // 0x1321f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1321f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1321f4:
    // 0x1321f4: 0x0  nop
    ctx->pc = 0x1321f4u;
    // NOP
label_1321f8:
    // 0x1321f8: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
label_1321fc:
    if (ctx->pc == 0x1321FCu) {
        ctx->pc = 0x132200u;
        goto label_132200;
    }
    ctx->pc = 0x1321F8u;
    {
        const bool branch_taken_0x1321f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1321f8) {
            ctx->pc = 0x132270u;
            goto label_132270;
        }
    }
    ctx->pc = 0x132200u;
label_132200:
    // 0x132200: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132204:
    // 0x132204: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x132204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_132208:
    // 0x132208: 0xc057a80  jal         func_15EA00
label_13220c:
    if (ctx->pc == 0x13220Cu) {
        ctx->pc = 0x132210u;
        goto label_132210;
    }
    ctx->pc = 0x132208u;
    SET_GPR_U32(ctx, 31, 0x132210u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x132208u, 0x132210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132210u;
label_132210:
    // 0x132210: 0x3c024489  lui         $v0, 0x4489
    ctx->pc = 0x132210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17545 << 16));
label_132214:
    // 0x132214: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x132214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_132218:
    // 0x132218: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x132218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13221c:
    // 0x13221c: 0x0  nop
    ctx->pc = 0x13221cu;
    // NOP
label_132220:
    // 0x132220: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x132220u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_132224:
    // 0x132224: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x132224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_132228:
    // 0x132228: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_13222c:
    // 0x13222c: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x13222cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_132230:
    // 0x132230: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132234:
    // 0x132234: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x132234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_132238:
    // 0x132238: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x132238u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_13223c:
    // 0x13223c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x13223cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_132240:
    // 0x132240: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132244:
    // 0x132244: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x132244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_132248:
    // 0x132248: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x132248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13224c:
    // 0x13224c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13224cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_132250:
    // 0x132250: 0x0  nop
    ctx->pc = 0x132250u;
    // NOP
label_132254:
    // 0x132254: 0x4501002a  bc1t        . + 4 + (0x2A << 2)
label_132258:
    if (ctx->pc == 0x132258u) {
        ctx->pc = 0x13225Cu;
        goto label_13225c;
    }
    ctx->pc = 0x132254u;
    {
        const bool branch_taken_0x132254 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x132254) {
            ctx->pc = 0x132300u;
            goto label_132300;
        }
    }
    ctx->pc = 0x13225Cu;
label_13225c:
    // 0x13225c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x13225cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_132260:
    // 0x132260: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132264:
    // 0x132264: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x132264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_132268:
    // 0x132268: 0x10000025  b           . + 4 + (0x25 << 2)
label_13226c:
    if (ctx->pc == 0x13226Cu) {
        ctx->pc = 0x132270u;
        goto label_132270;
    }
    ctx->pc = 0x132268u;
    {
        const bool branch_taken_0x132268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132268) {
            ctx->pc = 0x132300u;
            goto label_132300;
        }
    }
    ctx->pc = 0x132270u;
label_132270:
    // 0x132270: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132274:
    // 0x132274: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132278:
    // 0x132278: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x132278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_13227c:
    // 0x13227c: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x13227cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_132280:
    // 0x132280: 0xc05cf7c  jal         func_173DF0
label_132284:
    if (ctx->pc == 0x132284u) {
        ctx->pc = 0x132288u;
        goto label_132288;
    }
    ctx->pc = 0x132280u;
    SET_GPR_U32(ctx, 31, 0x132288u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x132280u, 0x132288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132288u;
label_132288:
    // 0x132288: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x132288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_13228c:
    // 0x13228c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13228cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132290:
    // 0x132290: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x132290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_132294:
    // 0x132294: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132298:
    // 0x132298: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x132298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13229c:
    // 0x13229c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13229cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1322a0:
    // 0x1322a0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1322a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1322a4:
    // 0x1322a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1322a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1322a8:
    // 0x1322a8: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1322a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1322ac:
    // 0x1322ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1322acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1322b0:
    // 0x1322b0: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x1322b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1322b4:
    // 0x1322b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1322b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1322b8:
    // 0x1322b8: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1322b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_1322bc:
    // 0x1322bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1322bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1322c0:
    // 0x1322c0: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1322c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1322c4:
    // 0x1322c4: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1322c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1322c8:
    // 0x1322c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1322c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1322cc:
    // 0x1322cc: 0x0  nop
    ctx->pc = 0x1322ccu;
    // NOP
label_1322d0:
    // 0x1322d0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_1322d4:
    if (ctx->pc == 0x1322D4u) {
        ctx->pc = 0x1322D8u;
        goto label_1322d8;
    }
    ctx->pc = 0x1322D0u;
    {
        const bool branch_taken_0x1322d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1322d0) {
            ctx->pc = 0x132300u;
            goto label_132300;
        }
    }
    ctx->pc = 0x1322D8u;
label_1322d8:
    // 0x1322d8: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1322d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1322dc:
    // 0x1322dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1322dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1322e0:
    // 0x1322e0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1322e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1322e4:
    // 0x1322e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1322e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1322e8:
    // 0x1322e8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1322e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_1322ec:
    // 0x1322ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1322ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1322f0:
    // 0x1322f0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1322f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1322f4:
    // 0x1322f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1322f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1322f8:
    // 0x1322f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1322f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1322fc:
    // 0x1322fc: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1322fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_132300:
    // 0x132300: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132304:
    // 0x132304: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x132304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_132308:
    // 0x132308: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_13230c:
    // 0x13230c: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x13230cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_132310:
    // 0x132310: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x132310u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_132314:
    // 0x132314: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x132314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_132318:
    // 0x132318: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_13231c:
    // 0x13231c: 0xc0974dc  jal         func_25D370
label_132320:
    if (ctx->pc == 0x132320u) {
        ctx->pc = 0x132324u;
        goto label_132324;
    }
    ctx->pc = 0x13231Cu;
    SET_GPR_U32(ctx, 31, 0x132324u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x13231Cu, 0x132324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132324u;
label_132324:
    // 0x132324: 0x10000052  b           . + 4 + (0x52 << 2)
label_132328:
    if (ctx->pc == 0x132328u) {
        ctx->pc = 0x13232Cu;
        goto label_13232c;
    }
    ctx->pc = 0x132324u;
    {
        const bool branch_taken_0x132324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132324) {
            ctx->pc = 0x132470u;
            goto label_132470;
        }
    }
    ctx->pc = 0x13232Cu;
label_13232c:
    // 0x13232c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13232cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132330:
    // 0x132330: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132334:
    // 0x132334: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x132334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_132338:
    // 0x132338: 0x24060053  addiu       $a2, $zero, 0x53
    ctx->pc = 0x132338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_13233c:
    // 0x13233c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13233cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_132340:
    // 0x132340: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x132340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_132344:
    // 0x132344: 0xc0965d0  jal         func_259740
label_132348:
    if (ctx->pc == 0x132348u) {
        ctx->pc = 0x13234Cu;
        goto label_13234c;
    }
    ctx->pc = 0x132344u;
    SET_GPR_U32(ctx, 31, 0x13234Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x132344u, 0x13234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13234Cu;
label_13234c:
    // 0x13234c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x13234cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132350:
    // 0x132350: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x132350u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_132354:
    // 0x132354: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x132354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_132358:
    // 0x132358: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x132358u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_13235c:
    // 0x13235c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x13235cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132360:
    // 0x132360: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x132360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_132364:
    // 0x132364: 0xc096b40  jal         func_25AD00
label_132368:
    if (ctx->pc == 0x132368u) {
        ctx->pc = 0x13236Cu;
        goto label_13236c;
    }
    ctx->pc = 0x132364u;
    SET_GPR_U32(ctx, 31, 0x13236Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x132364u, 0x13236Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13236Cu;
label_13236c:
    // 0x13236c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x13236cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132370:
    // 0x132370: 0xc05cd10  jal         func_173440
label_132374:
    if (ctx->pc == 0x132374u) {
        ctx->pc = 0x132378u;
        goto label_132378;
    }
    ctx->pc = 0x132370u;
    SET_GPR_U32(ctx, 31, 0x132378u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x132370u, 0x132378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132378u;
label_132378:
    // 0x132378: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_13237c:
    // 0x13237c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13237cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_132380:
    // 0x132380: 0xc05cec4  jal         func_173B10
label_132384:
    if (ctx->pc == 0x132384u) {
        ctx->pc = 0x132388u;
        goto label_132388;
    }
    ctx->pc = 0x132380u;
    SET_GPR_U32(ctx, 31, 0x132388u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x132380u, 0x132388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132388u;
label_132388:
    // 0x132388: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_13238c:
    // 0x13238c: 0xc0974dc  jal         func_25D370
label_132390:
    if (ctx->pc == 0x132390u) {
        ctx->pc = 0x132394u;
        goto label_132394;
    }
    ctx->pc = 0x13238Cu;
    SET_GPR_U32(ctx, 31, 0x132394u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x13238Cu, 0x132394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132394u;
label_132394:
    // 0x132394: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132398:
    // 0x132398: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x132398u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_13239c:
    // 0x13239c: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
label_1323a0:
    if (ctx->pc == 0x1323A0u) {
        ctx->pc = 0x1323A4u;
        goto label_1323a4;
    }
    ctx->pc = 0x13239Cu;
    {
        const bool branch_taken_0x13239c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13239c) {
            ctx->pc = 0x132470u;
            goto label_132470;
        }
    }
    ctx->pc = 0x1323A4u;
label_1323a4:
    // 0x1323a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1323a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1323a8:
    // 0x1323a8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1323a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1323ac:
    // 0x1323ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1323acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1323b0:
    // 0x1323b0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1323b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1323b4:
    // 0x1323b4: 0x1000002e  b           . + 4 + (0x2E << 2)
label_1323b8:
    if (ctx->pc == 0x1323B8u) {
        ctx->pc = 0x1323BCu;
        goto label_1323bc;
    }
    ctx->pc = 0x1323B4u;
    {
        const bool branch_taken_0x1323b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1323b4) {
            ctx->pc = 0x132470u;
            goto label_132470;
        }
    }
    ctx->pc = 0x1323BCu;
label_1323bc:
    // 0x1323bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1323bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1323c0:
    // 0x1323c0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1323c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1323c4:
    // 0x1323c4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1323c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1323c8:
    // 0x1323c8: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1323c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1323cc:
    // 0x1323cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1323ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1323d0:
    // 0x1323d0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1323d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1323d4:
    // 0x1323d4: 0xc0965d0  jal         func_259740
label_1323d8:
    if (ctx->pc == 0x1323D8u) {
        ctx->pc = 0x1323DCu;
        goto label_1323dc;
    }
    ctx->pc = 0x1323D4u;
    SET_GPR_U32(ctx, 31, 0x1323DCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1323D4u, 0x1323DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1323DCu;
label_1323dc:
    // 0x1323dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1323dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1323e0:
    // 0x1323e0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1323e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_1323e4:
    // 0x1323e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1323e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1323e8:
    // 0x1323e8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1323e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1323ec:
    // 0x1323ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1323ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1323f0:
    // 0x1323f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1323f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1323f4:
    // 0x1323f4: 0xc096b40  jal         func_25AD00
label_1323f8:
    if (ctx->pc == 0x1323F8u) {
        ctx->pc = 0x1323FCu;
        goto label_1323fc;
    }
    ctx->pc = 0x1323F4u;
    SET_GPR_U32(ctx, 31, 0x1323FCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1323F4u, 0x1323FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1323FCu;
label_1323fc:
    // 0x1323fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1323fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132400:
    // 0x132400: 0xc05cd10  jal         func_173440
label_132404:
    if (ctx->pc == 0x132404u) {
        ctx->pc = 0x132408u;
        goto label_132408;
    }
    ctx->pc = 0x132400u;
    SET_GPR_U32(ctx, 31, 0x132408u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x132400u, 0x132408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132408u;
label_132408:
    // 0x132408: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_13240c:
    // 0x13240c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13240cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_132410:
    // 0x132410: 0xc05cec4  jal         func_173B10
label_132414:
    if (ctx->pc == 0x132414u) {
        ctx->pc = 0x132418u;
        goto label_132418;
    }
    ctx->pc = 0x132410u;
    SET_GPR_U32(ctx, 31, 0x132418u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x132410u, 0x132418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132418u;
label_132418:
    // 0x132418: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_13241c:
    // 0x13241c: 0xc0974dc  jal         func_25D370
label_132420:
    if (ctx->pc == 0x132420u) {
        ctx->pc = 0x132424u;
        goto label_132424;
    }
    ctx->pc = 0x13241Cu;
    SET_GPR_U32(ctx, 31, 0x132424u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x13241Cu, 0x132424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132424u;
label_132424:
    // 0x132424: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132428:
    // 0x132428: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x132428u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_13242c:
    // 0x13242c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_132430:
    if (ctx->pc == 0x132430u) {
        ctx->pc = 0x132434u;
        goto label_132434;
    }
    ctx->pc = 0x13242Cu;
    {
        const bool branch_taken_0x13242c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13242c) {
            ctx->pc = 0x132470u;
            goto label_132470;
        }
    }
    ctx->pc = 0x132434u;
label_132434:
    // 0x132434: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x132434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_132438:
    // 0x132438: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_13243c:
    // 0x13243c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x13243cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_132440:
    // 0x132440: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x132440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_132444:
    // 0x132444: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132448:
    // 0x132448: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x132448u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_13244c:
    // 0x13244c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x13244cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132450:
    // 0x132450: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x132450u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_132454:
    // 0x132454: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132458:
    // 0x132458: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x132458u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_13245c:
    // 0x13245c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x13245cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132460:
    // 0x132460: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x132460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_132464:
    // 0x132464: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x132464u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
label_132468:
    // 0x132468: 0x10000001  b           . + 4 + (0x1 << 2)
label_13246c:
    if (ctx->pc == 0x13246Cu) {
        ctx->pc = 0x132470u;
        goto label_132470;
    }
    ctx->pc = 0x132468u;
    {
        const bool branch_taken_0x132468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132468) {
            ctx->pc = 0x132470u;
            goto label_132470;
        }
    }
    ctx->pc = 0x132470u;
label_132470:
    // 0x132470: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x132470u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_132474:
    // 0x132474: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x132474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_132478:
    // 0x132478: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x132478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_13247c:
    // 0x13247c: 0x3e00008  jr          $ra
label_132480:
    if (ctx->pc == 0x132480u) {
        ctx->pc = 0x132484u;
        goto label_fallthrough_0x13247c;
    }
    ctx->pc = 0x13247Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13247Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13247c:
    ctx->pc = 0x132484u;
}
