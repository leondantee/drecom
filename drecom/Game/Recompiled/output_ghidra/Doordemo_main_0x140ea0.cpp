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

// Function: Doordemo_main
// Address: 0x140ea0 - 0x1414d4
void Doordemo_main_0x140ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Doordemo_main_0x140ea0");
#endif

    switch (ctx->pc) {
        case 0x140ea0u: goto label_140ea0;
        case 0x140ea4u: goto label_140ea4;
        case 0x140ea8u: goto label_140ea8;
        case 0x140eacu: goto label_140eac;
        case 0x140eb0u: goto label_140eb0;
        case 0x140eb4u: goto label_140eb4;
        case 0x140eb8u: goto label_140eb8;
        case 0x140ebcu: goto label_140ebc;
        case 0x140ec0u: goto label_140ec0;
        case 0x140ec4u: goto label_140ec4;
        case 0x140ec8u: goto label_140ec8;
        case 0x140eccu: goto label_140ecc;
        case 0x140ed0u: goto label_140ed0;
        case 0x140ed4u: goto label_140ed4;
        case 0x140ed8u: goto label_140ed8;
        case 0x140edcu: goto label_140edc;
        case 0x140ee0u: goto label_140ee0;
        case 0x140ee4u: goto label_140ee4;
        case 0x140ee8u: goto label_140ee8;
        case 0x140eecu: goto label_140eec;
        case 0x140ef0u: goto label_140ef0;
        case 0x140ef4u: goto label_140ef4;
        case 0x140ef8u: goto label_140ef8;
        case 0x140efcu: goto label_140efc;
        case 0x140f00u: goto label_140f00;
        case 0x140f04u: goto label_140f04;
        case 0x140f08u: goto label_140f08;
        case 0x140f0cu: goto label_140f0c;
        case 0x140f10u: goto label_140f10;
        case 0x140f14u: goto label_140f14;
        case 0x140f18u: goto label_140f18;
        case 0x140f1cu: goto label_140f1c;
        case 0x140f20u: goto label_140f20;
        case 0x140f24u: goto label_140f24;
        case 0x140f28u: goto label_140f28;
        case 0x140f2cu: goto label_140f2c;
        case 0x140f30u: goto label_140f30;
        case 0x140f34u: goto label_140f34;
        case 0x140f38u: goto label_140f38;
        case 0x140f3cu: goto label_140f3c;
        case 0x140f40u: goto label_140f40;
        case 0x140f44u: goto label_140f44;
        case 0x140f48u: goto label_140f48;
        case 0x140f4cu: goto label_140f4c;
        case 0x140f50u: goto label_140f50;
        case 0x140f54u: goto label_140f54;
        case 0x140f58u: goto label_140f58;
        case 0x140f5cu: goto label_140f5c;
        case 0x140f60u: goto label_140f60;
        case 0x140f64u: goto label_140f64;
        case 0x140f68u: goto label_140f68;
        case 0x140f6cu: goto label_140f6c;
        case 0x140f70u: goto label_140f70;
        case 0x140f74u: goto label_140f74;
        case 0x140f78u: goto label_140f78;
        case 0x140f7cu: goto label_140f7c;
        case 0x140f80u: goto label_140f80;
        case 0x140f84u: goto label_140f84;
        case 0x140f88u: goto label_140f88;
        case 0x140f8cu: goto label_140f8c;
        case 0x140f90u: goto label_140f90;
        case 0x140f94u: goto label_140f94;
        case 0x140f98u: goto label_140f98;
        case 0x140f9cu: goto label_140f9c;
        case 0x140fa0u: goto label_140fa0;
        case 0x140fa4u: goto label_140fa4;
        case 0x140fa8u: goto label_140fa8;
        case 0x140facu: goto label_140fac;
        case 0x140fb0u: goto label_140fb0;
        case 0x140fb4u: goto label_140fb4;
        case 0x140fb8u: goto label_140fb8;
        case 0x140fbcu: goto label_140fbc;
        case 0x140fc0u: goto label_140fc0;
        case 0x140fc4u: goto label_140fc4;
        case 0x140fc8u: goto label_140fc8;
        case 0x140fccu: goto label_140fcc;
        case 0x140fd0u: goto label_140fd0;
        case 0x140fd4u: goto label_140fd4;
        case 0x140fd8u: goto label_140fd8;
        case 0x140fdcu: goto label_140fdc;
        case 0x140fe0u: goto label_140fe0;
        case 0x140fe4u: goto label_140fe4;
        case 0x140fe8u: goto label_140fe8;
        case 0x140fecu: goto label_140fec;
        case 0x140ff0u: goto label_140ff0;
        case 0x140ff4u: goto label_140ff4;
        case 0x140ff8u: goto label_140ff8;
        case 0x140ffcu: goto label_140ffc;
        case 0x141000u: goto label_141000;
        case 0x141004u: goto label_141004;
        case 0x141008u: goto label_141008;
        case 0x14100cu: goto label_14100c;
        case 0x141010u: goto label_141010;
        case 0x141014u: goto label_141014;
        case 0x141018u: goto label_141018;
        case 0x14101cu: goto label_14101c;
        case 0x141020u: goto label_141020;
        case 0x141024u: goto label_141024;
        case 0x141028u: goto label_141028;
        case 0x14102cu: goto label_14102c;
        case 0x141030u: goto label_141030;
        case 0x141034u: goto label_141034;
        case 0x141038u: goto label_141038;
        case 0x14103cu: goto label_14103c;
        case 0x141040u: goto label_141040;
        case 0x141044u: goto label_141044;
        case 0x141048u: goto label_141048;
        case 0x14104cu: goto label_14104c;
        case 0x141050u: goto label_141050;
        case 0x141054u: goto label_141054;
        case 0x141058u: goto label_141058;
        case 0x14105cu: goto label_14105c;
        case 0x141060u: goto label_141060;
        case 0x141064u: goto label_141064;
        case 0x141068u: goto label_141068;
        case 0x14106cu: goto label_14106c;
        case 0x141070u: goto label_141070;
        case 0x141074u: goto label_141074;
        case 0x141078u: goto label_141078;
        case 0x14107cu: goto label_14107c;
        case 0x141080u: goto label_141080;
        case 0x141084u: goto label_141084;
        case 0x141088u: goto label_141088;
        case 0x14108cu: goto label_14108c;
        case 0x141090u: goto label_141090;
        case 0x141094u: goto label_141094;
        case 0x141098u: goto label_141098;
        case 0x14109cu: goto label_14109c;
        case 0x1410a0u: goto label_1410a0;
        case 0x1410a4u: goto label_1410a4;
        case 0x1410a8u: goto label_1410a8;
        case 0x1410acu: goto label_1410ac;
        case 0x1410b0u: goto label_1410b0;
        case 0x1410b4u: goto label_1410b4;
        case 0x1410b8u: goto label_1410b8;
        case 0x1410bcu: goto label_1410bc;
        case 0x1410c0u: goto label_1410c0;
        case 0x1410c4u: goto label_1410c4;
        case 0x1410c8u: goto label_1410c8;
        case 0x1410ccu: goto label_1410cc;
        case 0x1410d0u: goto label_1410d0;
        case 0x1410d4u: goto label_1410d4;
        case 0x1410d8u: goto label_1410d8;
        case 0x1410dcu: goto label_1410dc;
        case 0x1410e0u: goto label_1410e0;
        case 0x1410e4u: goto label_1410e4;
        case 0x1410e8u: goto label_1410e8;
        case 0x1410ecu: goto label_1410ec;
        case 0x1410f0u: goto label_1410f0;
        case 0x1410f4u: goto label_1410f4;
        case 0x1410f8u: goto label_1410f8;
        case 0x1410fcu: goto label_1410fc;
        case 0x141100u: goto label_141100;
        case 0x141104u: goto label_141104;
        case 0x141108u: goto label_141108;
        case 0x14110cu: goto label_14110c;
        case 0x141110u: goto label_141110;
        case 0x141114u: goto label_141114;
        case 0x141118u: goto label_141118;
        case 0x14111cu: goto label_14111c;
        case 0x141120u: goto label_141120;
        case 0x141124u: goto label_141124;
        case 0x141128u: goto label_141128;
        case 0x14112cu: goto label_14112c;
        case 0x141130u: goto label_141130;
        case 0x141134u: goto label_141134;
        case 0x141138u: goto label_141138;
        case 0x14113cu: goto label_14113c;
        case 0x141140u: goto label_141140;
        case 0x141144u: goto label_141144;
        case 0x141148u: goto label_141148;
        case 0x14114cu: goto label_14114c;
        case 0x141150u: goto label_141150;
        case 0x141154u: goto label_141154;
        case 0x141158u: goto label_141158;
        case 0x14115cu: goto label_14115c;
        case 0x141160u: goto label_141160;
        case 0x141164u: goto label_141164;
        case 0x141168u: goto label_141168;
        case 0x14116cu: goto label_14116c;
        case 0x141170u: goto label_141170;
        case 0x141174u: goto label_141174;
        case 0x141178u: goto label_141178;
        case 0x14117cu: goto label_14117c;
        case 0x141180u: goto label_141180;
        case 0x141184u: goto label_141184;
        case 0x141188u: goto label_141188;
        case 0x14118cu: goto label_14118c;
        case 0x141190u: goto label_141190;
        case 0x141194u: goto label_141194;
        case 0x141198u: goto label_141198;
        case 0x14119cu: goto label_14119c;
        case 0x1411a0u: goto label_1411a0;
        case 0x1411a4u: goto label_1411a4;
        case 0x1411a8u: goto label_1411a8;
        case 0x1411acu: goto label_1411ac;
        case 0x1411b0u: goto label_1411b0;
        case 0x1411b4u: goto label_1411b4;
        case 0x1411b8u: goto label_1411b8;
        case 0x1411bcu: goto label_1411bc;
        case 0x1411c0u: goto label_1411c0;
        case 0x1411c4u: goto label_1411c4;
        case 0x1411c8u: goto label_1411c8;
        case 0x1411ccu: goto label_1411cc;
        case 0x1411d0u: goto label_1411d0;
        case 0x1411d4u: goto label_1411d4;
        case 0x1411d8u: goto label_1411d8;
        case 0x1411dcu: goto label_1411dc;
        case 0x1411e0u: goto label_1411e0;
        case 0x1411e4u: goto label_1411e4;
        case 0x1411e8u: goto label_1411e8;
        case 0x1411ecu: goto label_1411ec;
        case 0x1411f0u: goto label_1411f0;
        case 0x1411f4u: goto label_1411f4;
        case 0x1411f8u: goto label_1411f8;
        case 0x1411fcu: goto label_1411fc;
        case 0x141200u: goto label_141200;
        case 0x141204u: goto label_141204;
        case 0x141208u: goto label_141208;
        case 0x14120cu: goto label_14120c;
        case 0x141210u: goto label_141210;
        case 0x141214u: goto label_141214;
        case 0x141218u: goto label_141218;
        case 0x14121cu: goto label_14121c;
        case 0x141220u: goto label_141220;
        case 0x141224u: goto label_141224;
        case 0x141228u: goto label_141228;
        case 0x14122cu: goto label_14122c;
        case 0x141230u: goto label_141230;
        case 0x141234u: goto label_141234;
        case 0x141238u: goto label_141238;
        case 0x14123cu: goto label_14123c;
        case 0x141240u: goto label_141240;
        case 0x141244u: goto label_141244;
        case 0x141248u: goto label_141248;
        case 0x14124cu: goto label_14124c;
        case 0x141250u: goto label_141250;
        case 0x141254u: goto label_141254;
        case 0x141258u: goto label_141258;
        case 0x14125cu: goto label_14125c;
        case 0x141260u: goto label_141260;
        case 0x141264u: goto label_141264;
        case 0x141268u: goto label_141268;
        case 0x14126cu: goto label_14126c;
        case 0x141270u: goto label_141270;
        case 0x141274u: goto label_141274;
        case 0x141278u: goto label_141278;
        case 0x14127cu: goto label_14127c;
        case 0x141280u: goto label_141280;
        case 0x141284u: goto label_141284;
        case 0x141288u: goto label_141288;
        case 0x14128cu: goto label_14128c;
        case 0x141290u: goto label_141290;
        case 0x141294u: goto label_141294;
        case 0x141298u: goto label_141298;
        case 0x14129cu: goto label_14129c;
        case 0x1412a0u: goto label_1412a0;
        case 0x1412a4u: goto label_1412a4;
        case 0x1412a8u: goto label_1412a8;
        case 0x1412acu: goto label_1412ac;
        case 0x1412b0u: goto label_1412b0;
        case 0x1412b4u: goto label_1412b4;
        case 0x1412b8u: goto label_1412b8;
        case 0x1412bcu: goto label_1412bc;
        case 0x1412c0u: goto label_1412c0;
        case 0x1412c4u: goto label_1412c4;
        case 0x1412c8u: goto label_1412c8;
        case 0x1412ccu: goto label_1412cc;
        case 0x1412d0u: goto label_1412d0;
        case 0x1412d4u: goto label_1412d4;
        case 0x1412d8u: goto label_1412d8;
        case 0x1412dcu: goto label_1412dc;
        case 0x1412e0u: goto label_1412e0;
        case 0x1412e4u: goto label_1412e4;
        case 0x1412e8u: goto label_1412e8;
        case 0x1412ecu: goto label_1412ec;
        case 0x1412f0u: goto label_1412f0;
        case 0x1412f4u: goto label_1412f4;
        case 0x1412f8u: goto label_1412f8;
        case 0x1412fcu: goto label_1412fc;
        case 0x141300u: goto label_141300;
        case 0x141304u: goto label_141304;
        case 0x141308u: goto label_141308;
        case 0x14130cu: goto label_14130c;
        case 0x141310u: goto label_141310;
        case 0x141314u: goto label_141314;
        case 0x141318u: goto label_141318;
        case 0x14131cu: goto label_14131c;
        case 0x141320u: goto label_141320;
        case 0x141324u: goto label_141324;
        case 0x141328u: goto label_141328;
        case 0x14132cu: goto label_14132c;
        case 0x141330u: goto label_141330;
        case 0x141334u: goto label_141334;
        case 0x141338u: goto label_141338;
        case 0x14133cu: goto label_14133c;
        case 0x141340u: goto label_141340;
        case 0x141344u: goto label_141344;
        case 0x141348u: goto label_141348;
        case 0x14134cu: goto label_14134c;
        case 0x141350u: goto label_141350;
        case 0x141354u: goto label_141354;
        case 0x141358u: goto label_141358;
        case 0x14135cu: goto label_14135c;
        case 0x141360u: goto label_141360;
        case 0x141364u: goto label_141364;
        case 0x141368u: goto label_141368;
        case 0x14136cu: goto label_14136c;
        case 0x141370u: goto label_141370;
        case 0x141374u: goto label_141374;
        case 0x141378u: goto label_141378;
        case 0x14137cu: goto label_14137c;
        case 0x141380u: goto label_141380;
        case 0x141384u: goto label_141384;
        case 0x141388u: goto label_141388;
        case 0x14138cu: goto label_14138c;
        case 0x141390u: goto label_141390;
        case 0x141394u: goto label_141394;
        case 0x141398u: goto label_141398;
        case 0x14139cu: goto label_14139c;
        case 0x1413a0u: goto label_1413a0;
        case 0x1413a4u: goto label_1413a4;
        case 0x1413a8u: goto label_1413a8;
        case 0x1413acu: goto label_1413ac;
        case 0x1413b0u: goto label_1413b0;
        case 0x1413b4u: goto label_1413b4;
        case 0x1413b8u: goto label_1413b8;
        case 0x1413bcu: goto label_1413bc;
        case 0x1413c0u: goto label_1413c0;
        case 0x1413c4u: goto label_1413c4;
        case 0x1413c8u: goto label_1413c8;
        case 0x1413ccu: goto label_1413cc;
        case 0x1413d0u: goto label_1413d0;
        case 0x1413d4u: goto label_1413d4;
        case 0x1413d8u: goto label_1413d8;
        case 0x1413dcu: goto label_1413dc;
        case 0x1413e0u: goto label_1413e0;
        case 0x1413e4u: goto label_1413e4;
        case 0x1413e8u: goto label_1413e8;
        case 0x1413ecu: goto label_1413ec;
        case 0x1413f0u: goto label_1413f0;
        case 0x1413f4u: goto label_1413f4;
        case 0x1413f8u: goto label_1413f8;
        case 0x1413fcu: goto label_1413fc;
        case 0x141400u: goto label_141400;
        case 0x141404u: goto label_141404;
        case 0x141408u: goto label_141408;
        case 0x14140cu: goto label_14140c;
        case 0x141410u: goto label_141410;
        case 0x141414u: goto label_141414;
        case 0x141418u: goto label_141418;
        case 0x14141cu: goto label_14141c;
        case 0x141420u: goto label_141420;
        case 0x141424u: goto label_141424;
        case 0x141428u: goto label_141428;
        case 0x14142cu: goto label_14142c;
        case 0x141430u: goto label_141430;
        case 0x141434u: goto label_141434;
        case 0x141438u: goto label_141438;
        case 0x14143cu: goto label_14143c;
        case 0x141440u: goto label_141440;
        case 0x141444u: goto label_141444;
        case 0x141448u: goto label_141448;
        case 0x14144cu: goto label_14144c;
        case 0x141450u: goto label_141450;
        case 0x141454u: goto label_141454;
        case 0x141458u: goto label_141458;
        case 0x14145cu: goto label_14145c;
        case 0x141460u: goto label_141460;
        case 0x141464u: goto label_141464;
        case 0x141468u: goto label_141468;
        case 0x14146cu: goto label_14146c;
        case 0x141470u: goto label_141470;
        case 0x141474u: goto label_141474;
        case 0x141478u: goto label_141478;
        case 0x14147cu: goto label_14147c;
        case 0x141480u: goto label_141480;
        case 0x141484u: goto label_141484;
        case 0x141488u: goto label_141488;
        case 0x14148cu: goto label_14148c;
        case 0x141490u: goto label_141490;
        case 0x141494u: goto label_141494;
        case 0x141498u: goto label_141498;
        case 0x14149cu: goto label_14149c;
        case 0x1414a0u: goto label_1414a0;
        case 0x1414a4u: goto label_1414a4;
        case 0x1414a8u: goto label_1414a8;
        case 0x1414acu: goto label_1414ac;
        case 0x1414b0u: goto label_1414b0;
        case 0x1414b4u: goto label_1414b4;
        case 0x1414b8u: goto label_1414b8;
        case 0x1414bcu: goto label_1414bc;
        case 0x1414c0u: goto label_1414c0;
        case 0x1414c4u: goto label_1414c4;
        case 0x1414c8u: goto label_1414c8;
        case 0x1414ccu: goto label_1414cc;
        case 0x1414d0u: goto label_1414d0;
        default: break;
    }

    ctx->pc = 0x140ea0u;

label_140ea0:
    // 0x140ea0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x140ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_140ea4:
    // 0x140ea4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x140ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
label_140ea8:
    // 0x140ea8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x140ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_140eac:
    // 0x140eac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x140eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_140eb0:
    // 0x140eb0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x140eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_140eb4:
    // 0x140eb4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x140eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_140eb8:
    // 0x140eb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x140eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_140ebc:
    // 0x140ebc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x140ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_140ec0:
    // 0x140ec0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x140ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_140ec4:
    // 0x140ec4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x140ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_140ec8:
    // 0x140ec8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x140ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_140ecc:
    // 0x140ecc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x140eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_140ed0:
    // 0x140ed0: 0x2442fe10  addiu       $v0, $v0, -0x1F0
    ctx->pc = 0x140ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966800));
label_140ed4:
    // 0x140ed4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x140ed4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_140ed8:
    // 0x140ed8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x140ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_140edc:
    // 0x140edc: 0x2482dce0  addiu       $v0, $a0, -0x2320
    ctx->pc = 0x140edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958304));
label_140ee0:
    // 0x140ee0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x140ee0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_140ee4:
    // 0x140ee4: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x140ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_140ee8:
    // 0x140ee8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x140ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_140eec:
    // 0x140eec: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x140eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_140ef0:
    // 0x140ef0: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x140ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
label_140ef4:
    // 0x140ef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x140ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_140ef8:
    // 0x140ef8: 0x0  nop
    ctx->pc = 0x140ef8u;
    // NOP
label_140efc:
    // 0x140efc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x140efcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_140f00:
    // 0x140f00: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x140f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_140f04:
    // 0x140f04: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x140f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_140f08:
    // 0x140f08: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x140f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_140f0c:
    // 0x140f0c: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x140f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
label_140f10:
    // 0x140f10: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x140f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_140f14:
    // 0x140f14: 0xc040bf4  jal         func_102FD0
label_140f18:
    if (ctx->pc == 0x140F18u) {
        ctx->pc = 0x140F1Cu;
        goto label_140f1c;
    }
    ctx->pc = 0x140F14u;
    SET_GPR_U32(ctx, 31, 0x140F1Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x140F1Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x140F1Cu) { return; }
    ctx->pc = 0x140F1Cu;
label_140f1c:
    // 0x140f1c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x140f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_140f20:
    // 0x140f20: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x140f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_140f24:
    // 0x140f24: 0xc7ac00ac  lwc1        $f12, 0xAC($sp)
    ctx->pc = 0x140f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_140f28:
    // 0x140f28: 0xc040c60  jal         func_103180
label_140f2c:
    if (ctx->pc == 0x140F2Cu) {
        ctx->pc = 0x140F30u;
        goto label_140f30;
    }
    ctx->pc = 0x140F28u;
    SET_GPR_U32(ctx, 31, 0x140F30u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x140F30u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x140F30u) { return; }
    ctx->pc = 0x140F30u;
label_140f30:
    // 0x140f30: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x140f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_140f34:
    // 0x140f34: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x140f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_140f38:
    // 0x140f38: 0xc040cac  jal         func_1032B0
label_140f3c:
    if (ctx->pc == 0x140F3Cu) {
        ctx->pc = 0x140F40u;
        goto label_140f40;
    }
    ctx->pc = 0x140F38u;
    SET_GPR_U32(ctx, 31, 0x140F40u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x140F40u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x140F40u) { return; }
    ctx->pc = 0x140F40u;
label_140f40:
    // 0x140f40: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x140f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_140f44:
    // 0x140f44: 0x24429000  addiu       $v0, $v0, -0x7000
    ctx->pc = 0x140f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938624));
label_140f48:
    // 0x140f48: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x140f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_140f4c:
    // 0x140f4c: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x140f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_140f50:
    // 0x140f50: 0x24428700  addiu       $v0, $v0, -0x7900
    ctx->pc = 0x140f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936320));
label_140f54:
    // 0x140f54: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x140f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_140f58:
    // 0x140f58: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_140f5c:
    // 0x140f5c: 0xac2091a8  sw          $zero, -0x6E58($at)
    ctx->pc = 0x140f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939048), GPR_U32(ctx, 0));
label_140f60:
    // 0x140f60: 0xc0685c8  jal         func_1A1720
label_140f64:
    if (ctx->pc == 0x140F64u) {
        ctx->pc = 0x140F68u;
        goto label_140f68;
    }
    ctx->pc = 0x140F60u;
    SET_GPR_U32(ctx, 31, 0x140F68u);
    ctx->pc = 0x1A1720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1720u, 0x140F60u, 0x140F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140F68u;
label_140f68:
    // 0x140f68: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x140f68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_140f6c:
    // 0x140f6c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x140f6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_140f70:
    // 0x140f70: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x140f70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_140f74:
    // 0x140f74: 0x10200150  beqz        $at, . + 4 + (0x150 << 2)
label_140f78:
    if (ctx->pc == 0x140F78u) {
        ctx->pc = 0x140F7Cu;
        goto label_140f7c;
    }
    ctx->pc = 0x140F74u;
    {
        const bool branch_taken_0x140f74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x140f74) {
            ctx->pc = 0x1414B8u;
            goto label_1414b8;
        }
    }
    ctx->pc = 0x140F7Cu;
label_140f7c:
    // 0x140f7c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x140f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_140f80:
    // 0x140f80: 0x2443e670  addiu       $v1, $v0, -0x1990
    ctx->pc = 0x140f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960752));
label_140f84:
    // 0x140f84: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x140f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_140f88:
    // 0x140f88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x140f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_140f8c:
    // 0x140f8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x140f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_140f90:
    // 0x140f90: 0x400008  jr          $v0
label_140f94:
    if (ctx->pc == 0x140F94u) {
        ctx->pc = 0x140F98u;
        goto label_140f98;
    }
    ctx->pc = 0x140F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140F90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x140F98u;
label_140f98:
    // 0x140f98: 0xa2000006  sb          $zero, 0x6($s0)
    ctx->pc = 0x140f98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 0));
label_140f9c:
    // 0x140f9c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x140f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_140fa0:
    // 0x140fa0: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x140fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
label_140fa4:
    // 0x140fa4: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x140fa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_140fa8:
    // 0x140fa8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x140fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_140fac:
    // 0x140fac: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x140facu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
label_140fb0:
    // 0x140fb0: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x140fb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_140fb4:
    // 0x140fb4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x140fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_140fb8:
    // 0x140fb8: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x140fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
label_140fbc:
    // 0x140fbc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_140fc0:
    // 0x140fc0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_140fc4:
    // 0x140fc4: 0x1440013c  bnez        $v0, . + 4 + (0x13C << 2)
label_140fc8:
    if (ctx->pc == 0x140FC8u) {
        ctx->pc = 0x140FCCu;
        goto label_140fcc;
    }
    ctx->pc = 0x140FC4u;
    {
        const bool branch_taken_0x140fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140fc4) {
            ctx->pc = 0x1414B8u;
            goto label_1414b8;
        }
    }
    ctx->pc = 0x140FCCu;
label_140fcc:
    // 0x140fcc: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x140fccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
label_140fd0:
    // 0x140fd0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x140fd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_140fd4:
    // 0x140fd4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x140fd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_140fd8:
    // 0x140fd8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x140fd8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_140fdc:
    // 0x140fdc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x140fdcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_140fe0:
    // 0x140fe0: 0xc0590ec  jal         func_1643B0
label_140fe4:
    if (ctx->pc == 0x140FE4u) {
        ctx->pc = 0x140FE8u;
        goto label_140fe8;
    }
    ctx->pc = 0x140FE0u;
    SET_GPR_U32(ctx, 31, 0x140FE8u);
    ctx->pc = 0x1643B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1643B0u, 0x140FE0u, 0x140FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140FE8u;
label_140fe8:
    // 0x140fe8: 0xc050538  jal         func_1414E0
label_140fec:
    if (ctx->pc == 0x140FECu) {
        ctx->pc = 0x140FF0u;
        goto label_140ff0;
    }
    ctx->pc = 0x140FE8u;
    SET_GPR_U32(ctx, 31, 0x140FF0u);
    ctx->pc = 0x1414E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1414E0u, 0x140FE8u, 0x140FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140FF0u;
label_140ff0:
    // 0x140ff0: 0xc067c40  jal         func_19F100
label_140ff4:
    if (ctx->pc == 0x140FF4u) {
        ctx->pc = 0x140FF8u;
        goto label_140ff8;
    }
    ctx->pc = 0x140FF0u;
    SET_GPR_U32(ctx, 31, 0x140FF8u);
    ctx->pc = 0x19F100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F100u, 0x140FF0u, 0x140FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140FF8u;
label_140ff8:
    // 0x140ff8: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x140ff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_140ffc:
    // 0x140ffc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x140ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_141000:
    // 0x141000: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x141000u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
label_141004:
    // 0x141004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x141004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141008:
    // 0x141008: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x141008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_14100c:
    // 0x14100c: 0x1000012a  b           . + 4 + (0x12A << 2)
label_141010:
    if (ctx->pc == 0x141010u) {
        ctx->pc = 0x141014u;
        goto label_141014;
    }
    ctx->pc = 0x14100Cu;
    {
        const bool branch_taken_0x14100c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14100c) {
            ctx->pc = 0x1414B8u;
            goto label_1414b8;
        }
    }
    ctx->pc = 0x141014u;
label_141014:
    // 0x141014: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x141014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_141018:
    // 0x141018: 0x245191f0  addiu       $s1, $v0, -0x6E10
    ctx->pc = 0x141018u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939120));
label_14101c:
    // 0x14101c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14101cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_141020:
    // 0x141020: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x141020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_141024:
    // 0x141024: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x141024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
label_141028:
    // 0x141028: 0x34422b16  ori         $v0, $v0, 0x2B16
    ctx->pc = 0x141028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
label_14102c:
    // 0x14102c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x14102cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_141030:
    // 0x141030: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x141030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_141034:
    // 0x141034: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x141034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
label_141038:
    // 0x141038: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x141038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
label_14103c:
    // 0x14103c: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x14103cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_141040:
    // 0x141040: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x141040u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_141044:
    // 0x141044: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_141048:
    // 0x141048: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x141048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_14104c:
    // 0x14104c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_141050:
    if (ctx->pc == 0x141050u) {
        ctx->pc = 0x141054u;
        goto label_141054;
    }
    ctx->pc = 0x14104Cu;
    {
        const bool branch_taken_0x14104c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14104c) {
            ctx->pc = 0x141068u;
            goto label_141068;
        }
    }
    ctx->pc = 0x141054u;
label_141054:
    // 0x141054: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x141054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_141058:
    // 0x141058: 0x2442ec58  addiu       $v0, $v0, -0x13A8
    ctx->pc = 0x141058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
label_14105c:
    // 0x14105c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x14105cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_141060:
    // 0x141060: 0x10000005  b           . + 4 + (0x5 << 2)
label_141064:
    if (ctx->pc == 0x141064u) {
        ctx->pc = 0x141068u;
        goto label_141068;
    }
    ctx->pc = 0x141060u;
    {
        const bool branch_taken_0x141060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141060) {
            ctx->pc = 0x141078u;
            goto label_141078;
        }
    }
    ctx->pc = 0x141068u;
label_141068:
    // 0x141068: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x141068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_14106c:
    // 0x14106c: 0x2442ec80  addiu       $v0, $v0, -0x1380
    ctx->pc = 0x14106cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
label_141070:
    // 0x141070: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x141070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_141074:
    // 0x141074: 0x0  nop
    ctx->pc = 0x141074u;
    // NOP
label_141078:
    // 0x141078: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x141078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_14107c:
    // 0x14107c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x14107cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_141080:
    // 0x141080: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x141080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_141084:
    // 0x141084: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x141084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
label_141088:
    // 0x141088: 0x34437000  ori         $v1, $v0, 0x7000
    ctx->pc = 0x141088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
label_14108c:
    // 0x14108c: 0x26220018  addiu       $v0, $s1, 0x18
    ctx->pc = 0x14108cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_141090:
    // 0x141090: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x141090u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_141094:
    // 0x141094: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x141094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_141098:
    // 0x141098: 0x2622001c  addiu       $v0, $s1, 0x1C
    ctx->pc = 0x141098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_14109c:
    // 0x14109c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x14109cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1410a0:
    // 0x1410a0: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1410a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
label_1410a4:
    // 0x1410a4: 0x34439000  ori         $v1, $v0, 0x9000
    ctx->pc = 0x1410a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
label_1410a8:
    // 0x1410a8: 0x26220024  addiu       $v0, $s1, 0x24
    ctx->pc = 0x1410a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
label_1410ac:
    // 0x1410ac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1410acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1410b0:
    // 0x1410b0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1410b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1410b4:
    // 0x1410b4: 0x26220028  addiu       $v0, $s1, 0x28
    ctx->pc = 0x1410b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_1410b8:
    // 0x1410b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1410b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1410bc:
    // 0x1410bc: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x1410bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_1410c0:
    // 0x1410c0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1410c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1410c4:
    // 0x1410c4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1410c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1410c8:
    // 0x1410c8: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x1410c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1410cc:
    // 0x1410cc: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1410ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1410d0:
    // 0x1410d0: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x1410d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_1410d4:
    // 0x1410d4: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x1410d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_1410d8:
    // 0x1410d8: 0x430019  multu       $v0, $v1
    ctx->pc = 0x1410d8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1410dc:
    // 0x1410dc: 0x0  nop
    ctx->pc = 0x1410dcu;
    // NOP
label_1410e0:
    // 0x1410e0: 0x0  nop
    ctx->pc = 0x1410e0u;
    // NOP
label_1410e4:
    // 0x1410e4: 0x1010  mfhi        $v0
    ctx->pc = 0x1410e4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1410e8:
    // 0x1410e8: 0x2a942  srl         $s5, $v0, 5
    ctx->pc = 0x1410e8u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_1410ec:
    // 0x1410ec: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x1410ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_1410f0:
    // 0x1410f0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1410f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1410f4:
    // 0x1410f4: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x1410f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_1410f8:
    // 0x1410f8: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x1410f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1410fc:
    // 0x1410fc: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1410fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_141100:
    // 0x141100: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x141100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_141104:
    // 0x141104: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x141104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_141108:
    // 0x141108: 0x430019  multu       $v0, $v1
    ctx->pc = 0x141108u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_14110c:
    // 0x14110c: 0x0  nop
    ctx->pc = 0x14110cu;
    // NOP
label_141110:
    // 0x141110: 0x0  nop
    ctx->pc = 0x141110u;
    // NOP
label_141114:
    // 0x141114: 0x1010  mfhi        $v0
    ctx->pc = 0x141114u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_141118:
    // 0x141118: 0x2b142  srl         $s6, $v0, 5
    ctx->pc = 0x141118u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_14111c:
    // 0x14111c: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x14111cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_141120:
    // 0x141120: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x141120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_141124:
    // 0x141124: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x141124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_141128:
    // 0x141128: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x141128u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14112c:
    // 0x14112c: 0x22340  sll         $a0, $v0, 13
    ctx->pc = 0x14112cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
label_141130:
    // 0x141130: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x141130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_141134:
    // 0x141134: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x141134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_141138:
    // 0x141138: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x141138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_14113c:
    // 0x14113c: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x14113cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_141140:
    // 0x141140: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x141140u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_141144:
    // 0x141144: 0x0  nop
    ctx->pc = 0x141144u;
    // NOP
label_141148:
    // 0x141148: 0x1010  mfhi        $v0
    ctx->pc = 0x141148u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_14114c:
    // 0x14114c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14114cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_141150:
    // 0x141150: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x141150u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_141154:
    // 0x141154: 0x43b821  addu        $s7, $v0, $v1
    ctx->pc = 0x141154u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_141158:
    // 0x141158: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x141158u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_14115c:
    // 0x14115c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14115cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_141160:
    // 0x141160: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x141160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_141164:
    // 0x141164: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x141164u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_141168:
    // 0x141168: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x141168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_14116c:
    // 0x14116c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x14116cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_141170:
    // 0x141170: 0x22240  sll         $a0, $v0, 9
    ctx->pc = 0x141170u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
label_141174:
    // 0x141174: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x141174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_141178:
    // 0x141178: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x141178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_14117c:
    // 0x14117c: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x14117cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_141180:
    // 0x141180: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x141180u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_141184:
    // 0x141184: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x141184u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_141188:
    // 0x141188: 0x0  nop
    ctx->pc = 0x141188u;
    // NOP
label_14118c:
    // 0x14118c: 0x1010  mfhi        $v0
    ctx->pc = 0x14118cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_141190:
    // 0x141190: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x141190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_141194:
    // 0x141194: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x141194u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_141198:
    // 0x141198: 0x43f021  addu        $fp, $v0, $v1
    ctx->pc = 0x141198u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14119c:
    // 0x14119c: 0x161400  sll         $v0, $s6, 16
    ctx->pc = 0x14119cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
label_1411a0:
    // 0x1411a0: 0x2a21825  or          $v1, $s5, $v0
    ctx->pc = 0x1411a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
label_1411a4:
    // 0x1411a4: 0x26220014  addiu       $v0, $s1, 0x14
    ctx->pc = 0x1411a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_1411a8:
    // 0x1411a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1411a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1411ac:
    // 0x1411ac: 0x2b71821  addu        $v1, $s5, $s7
    ctx->pc = 0x1411acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
label_1411b0:
    // 0x1411b0: 0x2de1021  addu        $v0, $s6, $fp
    ctx->pc = 0x1411b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
label_1411b4:
    // 0x1411b4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1411b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1411b8:
    // 0x1411b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1411b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1411bc:
    // 0x1411bc: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x1411bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1411c0:
    // 0x1411c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1411c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1411c4:
    // 0x1411c4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1411c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1411c8:
    // 0x1411c8: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1411c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
label_1411cc:
    // 0x1411cc: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1411ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1411d0:
    // 0x1411d0: 0xc05dbd8  jal         func_176F60
label_1411d4:
    if (ctx->pc == 0x1411D4u) {
        ctx->pc = 0x1411D8u;
        goto label_1411d8;
    }
    ctx->pc = 0x1411D0u;
    SET_GPR_U32(ctx, 31, 0x1411D8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1411D0u, 0x1411D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1411D8u;
label_1411d8:
    // 0x1411d8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1411d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_1411dc:
    // 0x1411dc: 0x245291c0  addiu       $s2, $v0, -0x6E40
    ctx->pc = 0x1411dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939072));
label_1411e0:
    // 0x1411e0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1411e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1411e4:
    // 0x1411e4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1411e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1411e8:
    // 0x1411e8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1411e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_1411ec:
    // 0x1411ec: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x1411ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
label_1411f0:
    // 0x1411f0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1411f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1411f4:
    // 0x1411f4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1411f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1411f8:
    // 0x1411f8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1411f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1411fc:
    // 0x1411fc: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1411fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_141200:
    // 0x141200: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x141200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_141204:
    // 0x141204: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x141204u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
label_141208:
    // 0x141208: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x141208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_14120c:
    // 0x14120c: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x14120cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
label_141210:
    // 0x141210: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x141210u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_141214:
    // 0x141214: 0xc05dbd8  jal         func_176F60
label_141218:
    if (ctx->pc == 0x141218u) {
        ctx->pc = 0x14121Cu;
        goto label_14121c;
    }
    ctx->pc = 0x141214u;
    SET_GPR_U32(ctx, 31, 0x14121Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x141214u, 0x14121Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14121Cu;
label_14121c:
    // 0x14121c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x14121cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_141220:
    // 0x141220: 0x245291b0  addiu       $s2, $v0, -0x6E50
    ctx->pc = 0x141220u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939056));
label_141224:
    // 0x141224: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x141224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_141228:
    // 0x141228: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x141228u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_14122c:
    // 0x14122c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x14122cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_141230:
    // 0x141230: 0x34421015  ori         $v0, $v0, 0x1015
    ctx->pc = 0x141230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
label_141234:
    // 0x141234: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x141234u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_141238:
    // 0x141238: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x141238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_14123c:
    // 0x14123c: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x14123cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
label_141240:
    // 0x141240: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x141240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_141244:
    // 0x141244: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x141244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
label_141248:
    // 0x141248: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x141248u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_14124c:
    // 0x14124c: 0xc05dbd8  jal         func_176F60
label_141250:
    if (ctx->pc == 0x141250u) {
        ctx->pc = 0x141254u;
        goto label_141254;
    }
    ctx->pc = 0x14124Cu;
    SET_GPR_U32(ctx, 31, 0x141254u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x14124Cu, 0x141254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141254u;
label_141254:
    // 0x141254: 0x92030005  lbu         $v1, 0x5($s0)
    ctx->pc = 0x141254u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_141258:
    // 0x141258: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x141258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_14125c:
    // 0x14125c: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x14125cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
label_141260:
    // 0x141260: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x141260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_141264:
    // 0x141264: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x141264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_141268:
    // 0x141268: 0x14620093  bne         $v1, $v0, . + 4 + (0x93 << 2)
label_14126c:
    if (ctx->pc == 0x14126Cu) {
        ctx->pc = 0x141270u;
        goto label_141270;
    }
    ctx->pc = 0x141268u;
    {
        const bool branch_taken_0x141268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x141268) {
            ctx->pc = 0x1414B8u;
            goto label_1414b8;
        }
    }
    ctx->pc = 0x141270u;
label_141270:
    // 0x141270: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x141270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_141274:
    // 0x141274: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x141274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_141278:
    // 0x141278: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x141278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14127c:
    // 0x14127c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x14127cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_141280:
    // 0x141280: 0xc067c24  jal         func_19F090
label_141284:
    if (ctx->pc == 0x141284u) {
        ctx->pc = 0x141288u;
        goto label_141288;
    }
    ctx->pc = 0x141280u;
    SET_GPR_U32(ctx, 31, 0x141288u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x141280u, 0x141288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141288u;
label_141288:
    // 0x141288: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x141288u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
label_14128c:
    // 0x14128c: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x14128cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_141290:
    // 0x141290: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x141290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_141294:
    // 0x141294: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x141294u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
label_141298:
    // 0x141298: 0x10000087  b           . + 4 + (0x87 << 2)
label_14129c:
    if (ctx->pc == 0x14129Cu) {
        ctx->pc = 0x1412A0u;
        goto label_1412a0;
    }
    ctx->pc = 0x141298u;
    {
        const bool branch_taken_0x141298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141298) {
            ctx->pc = 0x1414B8u;
            goto label_1414b8;
        }
    }
    ctx->pc = 0x1412A0u;
label_1412a0:
    // 0x1412a0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1412a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_1412a4:
    // 0x1412a4: 0x245491d0  addiu       $s4, $v0, -0x6E30
    ctx->pc = 0x1412a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939088));
label_1412a8:
    // 0x1412a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1412a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1412ac:
    // 0x1412ac: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1412acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1412b0:
    // 0x1412b0: 0x3c025c00  lui         $v0, 0x5C00
    ctx->pc = 0x1412b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23552 << 16));
label_1412b4:
    // 0x1412b4: 0x34421a06  ori         $v0, $v0, 0x1A06
    ctx->pc = 0x1412b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6662);
label_1412b8:
    // 0x1412b8: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x1412b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_1412bc:
    // 0x1412bc: 0x3c028005  lui         $v0, 0x8005
    ctx->pc = 0x1412bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32773 << 16));
label_1412c0:
    // 0x1412c0: 0x34430505  ori         $v1, $v0, 0x505
    ctx->pc = 0x1412c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1285);
label_1412c4:
    // 0x1412c4: 0x26820008  addiu       $v0, $s4, 0x8
    ctx->pc = 0x1412c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_1412c8:
    // 0x1412c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1412c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1412cc:
    // 0x1412cc: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1412ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1412d0:
    // 0x1412d0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1412d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_1412d4:
    // 0x1412d4: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x1412d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_1412d8:
    // 0x1412d8: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1412d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
label_1412dc:
    // 0x1412dc: 0x34437000  ori         $v1, $v0, 0x7000
    ctx->pc = 0x1412dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
label_1412e0:
    // 0x1412e0: 0x2682000c  addiu       $v0, $s4, 0xC
    ctx->pc = 0x1412e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_1412e4:
    // 0x1412e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1412e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1412e8:
    // 0x1412e8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1412e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1412ec:
    // 0x1412ec: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x1412ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1412f0:
    // 0x1412f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1412f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1412f4:
    // 0x1412f4: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1412f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
label_1412f8:
    // 0x1412f8: 0x34439000  ori         $v1, $v0, 0x9000
    ctx->pc = 0x1412f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
label_1412fc:
    // 0x1412fc: 0x26820014  addiu       $v0, $s4, 0x14
    ctx->pc = 0x1412fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_141300:
    // 0x141300: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x141300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_141304:
    // 0x141304: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x141304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_141308:
    // 0x141308: 0x26820018  addiu       $v0, $s4, 0x18
    ctx->pc = 0x141308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
label_14130c:
    // 0x14130c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x14130cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_141310:
    // 0x141310: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x141310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_141314:
    // 0x141314: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x141314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
label_141318:
    // 0x141318: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x141318u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_14131c:
    // 0x14131c: 0xc05dbd8  jal         func_176F60
label_141320:
    if (ctx->pc == 0x141320u) {
        ctx->pc = 0x141324u;
        goto label_141324;
    }
    ctx->pc = 0x14131Cu;
    SET_GPR_U32(ctx, 31, 0x141324u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x14131Cu, 0x141324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141324u;
label_141324:
    // 0x141324: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x141324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_141328:
    // 0x141328: 0x245391c0  addiu       $s3, $v0, -0x6E40
    ctx->pc = 0x141328u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939072));
label_14132c:
    // 0x14132c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14132cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_141330:
    // 0x141330: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x141330u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_141334:
    // 0x141334: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x141334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_141338:
    // 0x141338: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x141338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
label_14133c:
    // 0x14133c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x14133cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_141340:
    // 0x141340: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x141340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_141344:
    // 0x141344: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x141344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_141348:
    // 0x141348: 0x24020062  addiu       $v0, $zero, 0x62
    ctx->pc = 0x141348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_14134c:
    // 0x14134c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14134cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_141350:
    // 0x141350: 0xfe620008  sd          $v0, 0x8($s3)
    ctx->pc = 0x141350u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 2));
label_141354:
    // 0x141354: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x141354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_141358:
    // 0x141358: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x141358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
label_14135c:
    // 0x14135c: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x14135cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_141360:
    // 0x141360: 0xc05dbd8  jal         func_176F60
label_141364:
    if (ctx->pc == 0x141364u) {
        ctx->pc = 0x141368u;
        goto label_141368;
    }
    ctx->pc = 0x141360u;
    SET_GPR_U32(ctx, 31, 0x141368u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x141360u, 0x141368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141368u;
label_141368:
    // 0x141368: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x141368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_14136c:
    // 0x14136c: 0x245391b0  addiu       $s3, $v0, -0x6E50
    ctx->pc = 0x14136cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939056));
label_141370:
    // 0x141370: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x141370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_141374:
    // 0x141374: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x141374u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_141378:
    // 0x141378: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x141378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_14137c:
    // 0x14137c: 0x34421015  ori         $v0, $v0, 0x1015
    ctx->pc = 0x14137cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
label_141380:
    // 0x141380: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x141380u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_141384:
    // 0x141384: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x141384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_141388:
    // 0x141388: 0xfe620008  sd          $v0, 0x8($s3)
    ctx->pc = 0x141388u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 2));
label_14138c:
    // 0x14138c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x14138cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_141390:
    // 0x141390: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x141390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
label_141394:
    // 0x141394: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x141394u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_141398:
    // 0x141398: 0xc05dbd8  jal         func_176F60
label_14139c:
    if (ctx->pc == 0x14139Cu) {
        ctx->pc = 0x1413A0u;
        goto label_1413a0;
    }
    ctx->pc = 0x141398u;
    SET_GPR_U32(ctx, 31, 0x1413A0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x141398u, 0x1413A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1413A0u;
label_1413a0:
    // 0x1413a0: 0x92030005  lbu         $v1, 0x5($s0)
    ctx->pc = 0x1413a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_1413a4:
    // 0x1413a4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1413a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1413a8:
    // 0x1413a8: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x1413a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
label_1413ac:
    // 0x1413ac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1413acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1413b0:
    // 0x1413b0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1413b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1413b4:
    // 0x1413b4: 0x14620040  bne         $v1, $v0, . + 4 + (0x40 << 2)
label_1413b8:
    if (ctx->pc == 0x1413B8u) {
        ctx->pc = 0x1413BCu;
        goto label_1413bc;
    }
    ctx->pc = 0x1413B4u;
    {
        const bool branch_taken_0x1413b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1413b4) {
            ctx->pc = 0x1414B8u;
            goto label_1414b8;
        }
    }
    ctx->pc = 0x1413BCu;
label_1413bc:
    // 0x1413bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1413bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1413c0:
    // 0x1413c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1413c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1413c4:
    // 0x1413c4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1413c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1413c8:
    // 0x1413c8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1413c8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1413cc:
    // 0x1413cc: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x1413ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
label_1413d0:
    // 0x1413d0: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x1413d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
label_1413d4:
    // 0x1413d4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1413d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1413d8:
    // 0x1413d8: 0xc059190  jal         func_164640
label_1413dc:
    if (ctx->pc == 0x1413DCu) {
        ctx->pc = 0x1413E0u;
        goto label_1413e0;
    }
    ctx->pc = 0x1413D8u;
    SET_GPR_U32(ctx, 31, 0x1413E0u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x1413D8u, 0x1413E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1413E0u;
label_1413e0:
    // 0x1413e0: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x1413e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_1413e4:
    // 0x1413e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1413e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1413e8:
    // 0x1413e8: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x1413e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
label_1413ec:
    // 0x1413ec: 0x10000032  b           . + 4 + (0x32 << 2)
label_1413f0:
    if (ctx->pc == 0x1413F0u) {
        ctx->pc = 0x1413F4u;
        goto label_1413f4;
    }
    ctx->pc = 0x1413ECu;
    {
        const bool branch_taken_0x1413ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1413ec) {
            ctx->pc = 0x1414B8u;
            goto label_1414b8;
        }
    }
    ctx->pc = 0x1413F4u;
label_1413f4:
    // 0x1413f4: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x1413f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
label_1413f8:
    // 0x1413f8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1413f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1413fc:
    // 0x1413fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1413fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141400:
    // 0x141400: 0x1462002d  bne         $v1, $v0, . + 4 + (0x2D << 2)
label_141404:
    if (ctx->pc == 0x141404u) {
        ctx->pc = 0x141408u;
        goto label_141408;
    }
    ctx->pc = 0x141400u;
    {
        const bool branch_taken_0x141400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x141400) {
            ctx->pc = 0x1414B8u;
            goto label_1414b8;
        }
    }
    ctx->pc = 0x141408u;
label_141408:
    // 0x141408: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x141408u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
label_14140c:
    // 0x14140c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14140cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_141410:
    // 0x141410: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x141410u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
label_141414:
    // 0x141414: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_141418:
    // 0x141418: 0xac201a48  sw          $zero, 0x1A48($at)
    ctx->pc = 0x141418u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6728), GPR_U32(ctx, 0));
label_14141c:
    // 0x14141c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14141cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_141420:
    // 0x141420: 0xc062010  jal         func_188040
label_141424:
    if (ctx->pc == 0x141424u) {
        ctx->pc = 0x141428u;
        goto label_141428;
    }
    ctx->pc = 0x141420u;
    SET_GPR_U32(ctx, 31, 0x141428u);
    ctx->pc = 0x188040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188040u, 0x141420u, 0x141428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141428u;
label_141428:
    // 0x141428: 0x24040201  addiu       $a0, $zero, 0x201
    ctx->pc = 0x141428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
label_14142c:
    // 0x14142c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14142cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_141430:
    // 0x141430: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x141430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_141434:
    // 0x141434: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x141434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_141438:
    // 0x141438: 0xc067c24  jal         func_19F090
label_14143c:
    if (ctx->pc == 0x14143Cu) {
        ctx->pc = 0x141440u;
        goto label_141440;
    }
    ctx->pc = 0x141438u;
    SET_GPR_U32(ctx, 31, 0x141440u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x141438u, 0x141440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141440u;
label_141440:
    // 0x141440: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x141440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141444:
    // 0x141444: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x141444u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_141448:
    // 0x141448: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x141448u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14144c:
    // 0x14144c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x14144cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_141450:
    // 0x141450: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x141450u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
label_141454:
    // 0x141454: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x141454u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_141458:
    // 0x141458: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x141458u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_14145c:
    // 0x14145c: 0xc059190  jal         func_164640
label_141460:
    if (ctx->pc == 0x141460u) {
        ctx->pc = 0x141464u;
        goto label_141464;
    }
    ctx->pc = 0x14145Cu;
    SET_GPR_U32(ctx, 31, 0x141464u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x14145Cu, 0x141464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141464u;
label_141464:
    // 0x141464: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x141464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_141468:
    // 0x141468: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x141468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14146c:
    // 0x14146c: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x14146cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
label_141470:
    // 0x141470: 0x10000011  b           . + 4 + (0x11 << 2)
label_141474:
    if (ctx->pc == 0x141474u) {
        ctx->pc = 0x141478u;
        goto label_141478;
    }
    ctx->pc = 0x141470u;
    {
        const bool branch_taken_0x141470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141470) {
            ctx->pc = 0x1414B8u;
            goto label_1414b8;
        }
    }
    ctx->pc = 0x141478u;
label_141478:
    // 0x141478: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x141478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14147c:
    // 0x14147c: 0xc0592ec  jal         func_164BB0
label_141480:
    if (ctx->pc == 0x141480u) {
        ctx->pc = 0x141484u;
        goto label_141484;
    }
    ctx->pc = 0x14147Cu;
    SET_GPR_U32(ctx, 31, 0x141484u);
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x14147Cu, 0x141484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141484u;
label_141484:
    // 0x141484: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_141488:
    if (ctx->pc == 0x141488u) {
        ctx->pc = 0x14148Cu;
        goto label_14148c;
    }
    ctx->pc = 0x141484u;
    {
        const bool branch_taken_0x141484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141484) {
            ctx->pc = 0x1414B8u;
            goto label_1414b8;
        }
    }
    ctx->pc = 0x14148Cu;
label_14148c:
    // 0x14148c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14148cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_141490:
    // 0x141490: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x141490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6716)));
label_141494:
    // 0x141494: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x141494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
label_141498:
    // 0x141498: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x141498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_14149c:
    // 0x14149c: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x14149cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1414a0:
    // 0x1414a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1414a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1414a4:
    // 0x1414a4: 0xac241a3c  sw          $a0, 0x1A3C($at)
    ctx->pc = 0x1414a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6716), GPR_U32(ctx, 4));
label_1414a8:
    // 0x1414a8: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x1414a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_1414ac:
    // 0x1414ac: 0xc0674dc  jal         func_19D370
label_1414b0:
    if (ctx->pc == 0x1414B0u) {
        ctx->pc = 0x1414B4u;
        goto label_1414b4;
    }
    ctx->pc = 0x1414ACu;
    SET_GPR_U32(ctx, 31, 0x1414B4u);
    ctx->pc = 0x19D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D370u, 0x1414ACu, 0x1414B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1414B4u;
label_1414b4:
    // 0x1414b4: 0x0  nop
    ctx->pc = 0x1414b4u;
    // NOP
label_1414b8:
    // 0x1414b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1414b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1414bc:
    // 0x1414bc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1414bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1414c0:
    // 0x1414c0: 0xc06750c  jal         func_19D430
label_1414c4:
    if (ctx->pc == 0x1414C4u) {
        ctx->pc = 0x1414C8u;
        goto label_1414c8;
    }
    ctx->pc = 0x1414C0u;
    SET_GPR_U32(ctx, 31, 0x1414C8u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x1414C0u, 0x1414C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1414C8u;
label_1414c8:
    // 0x1414c8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1414c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1414cc:
    // 0x1414cc: 0x1000fea6  b           . + 4 + (-0x15A << 2)
label_1414d0:
    if (ctx->pc == 0x1414D0u) {
        ctx->pc = 0x1414D4u;
        goto label_fallthrough_0x1414cc;
    }
    ctx->pc = 0x1414CCu;
    {
        const bool branch_taken_0x1414cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1414cc) {
            ctx->pc = 0x140F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140f68;
        }
    }
label_fallthrough_0x1414cc:
    ctx->pc = 0x1414D4u;
}
