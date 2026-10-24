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

// Function: Em1f_R0_move
// Address: 0x297d30 - 0x298328
void Em1f_R0_move_0x297d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1f_R0_move_0x297d30");
#endif

    switch (ctx->pc) {
        case 0x297d30u: goto label_297d30;
        case 0x297d34u: goto label_297d34;
        case 0x297d38u: goto label_297d38;
        case 0x297d3cu: goto label_297d3c;
        case 0x297d40u: goto label_297d40;
        case 0x297d44u: goto label_297d44;
        case 0x297d48u: goto label_297d48;
        case 0x297d4cu: goto label_297d4c;
        case 0x297d50u: goto label_297d50;
        case 0x297d54u: goto label_297d54;
        case 0x297d58u: goto label_297d58;
        case 0x297d5cu: goto label_297d5c;
        case 0x297d60u: goto label_297d60;
        case 0x297d64u: goto label_297d64;
        case 0x297d68u: goto label_297d68;
        case 0x297d6cu: goto label_297d6c;
        case 0x297d70u: goto label_297d70;
        case 0x297d74u: goto label_297d74;
        case 0x297d78u: goto label_297d78;
        case 0x297d7cu: goto label_297d7c;
        case 0x297d80u: goto label_297d80;
        case 0x297d84u: goto label_297d84;
        case 0x297d88u: goto label_297d88;
        case 0x297d8cu: goto label_297d8c;
        case 0x297d90u: goto label_297d90;
        case 0x297d94u: goto label_297d94;
        case 0x297d98u: goto label_297d98;
        case 0x297d9cu: goto label_297d9c;
        case 0x297da0u: goto label_297da0;
        case 0x297da4u: goto label_297da4;
        case 0x297da8u: goto label_297da8;
        case 0x297dacu: goto label_297dac;
        case 0x297db0u: goto label_297db0;
        case 0x297db4u: goto label_297db4;
        case 0x297db8u: goto label_297db8;
        case 0x297dbcu: goto label_297dbc;
        case 0x297dc0u: goto label_297dc0;
        case 0x297dc4u: goto label_297dc4;
        case 0x297dc8u: goto label_297dc8;
        case 0x297dccu: goto label_297dcc;
        case 0x297dd0u: goto label_297dd0;
        case 0x297dd4u: goto label_297dd4;
        case 0x297dd8u: goto label_297dd8;
        case 0x297ddcu: goto label_297ddc;
        case 0x297de0u: goto label_297de0;
        case 0x297de4u: goto label_297de4;
        case 0x297de8u: goto label_297de8;
        case 0x297decu: goto label_297dec;
        case 0x297df0u: goto label_297df0;
        case 0x297df4u: goto label_297df4;
        case 0x297df8u: goto label_297df8;
        case 0x297dfcu: goto label_297dfc;
        case 0x297e00u: goto label_297e00;
        case 0x297e04u: goto label_297e04;
        case 0x297e08u: goto label_297e08;
        case 0x297e0cu: goto label_297e0c;
        case 0x297e10u: goto label_297e10;
        case 0x297e14u: goto label_297e14;
        case 0x297e18u: goto label_297e18;
        case 0x297e1cu: goto label_297e1c;
        case 0x297e20u: goto label_297e20;
        case 0x297e24u: goto label_297e24;
        case 0x297e28u: goto label_297e28;
        case 0x297e2cu: goto label_297e2c;
        case 0x297e30u: goto label_297e30;
        case 0x297e34u: goto label_297e34;
        case 0x297e38u: goto label_297e38;
        case 0x297e3cu: goto label_297e3c;
        case 0x297e40u: goto label_297e40;
        case 0x297e44u: goto label_297e44;
        case 0x297e48u: goto label_297e48;
        case 0x297e4cu: goto label_297e4c;
        case 0x297e50u: goto label_297e50;
        case 0x297e54u: goto label_297e54;
        case 0x297e58u: goto label_297e58;
        case 0x297e5cu: goto label_297e5c;
        case 0x297e60u: goto label_297e60;
        case 0x297e64u: goto label_297e64;
        case 0x297e68u: goto label_297e68;
        case 0x297e6cu: goto label_297e6c;
        case 0x297e70u: goto label_297e70;
        case 0x297e74u: goto label_297e74;
        case 0x297e78u: goto label_297e78;
        case 0x297e7cu: goto label_297e7c;
        case 0x297e80u: goto label_297e80;
        case 0x297e84u: goto label_297e84;
        case 0x297e88u: goto label_297e88;
        case 0x297e8cu: goto label_297e8c;
        case 0x297e90u: goto label_297e90;
        case 0x297e94u: goto label_297e94;
        case 0x297e98u: goto label_297e98;
        case 0x297e9cu: goto label_297e9c;
        case 0x297ea0u: goto label_297ea0;
        case 0x297ea4u: goto label_297ea4;
        case 0x297ea8u: goto label_297ea8;
        case 0x297eacu: goto label_297eac;
        case 0x297eb0u: goto label_297eb0;
        case 0x297eb4u: goto label_297eb4;
        case 0x297eb8u: goto label_297eb8;
        case 0x297ebcu: goto label_297ebc;
        case 0x297ec0u: goto label_297ec0;
        case 0x297ec4u: goto label_297ec4;
        case 0x297ec8u: goto label_297ec8;
        case 0x297eccu: goto label_297ecc;
        case 0x297ed0u: goto label_297ed0;
        case 0x297ed4u: goto label_297ed4;
        case 0x297ed8u: goto label_297ed8;
        case 0x297edcu: goto label_297edc;
        case 0x297ee0u: goto label_297ee0;
        case 0x297ee4u: goto label_297ee4;
        case 0x297ee8u: goto label_297ee8;
        case 0x297eecu: goto label_297eec;
        case 0x297ef0u: goto label_297ef0;
        case 0x297ef4u: goto label_297ef4;
        case 0x297ef8u: goto label_297ef8;
        case 0x297efcu: goto label_297efc;
        case 0x297f00u: goto label_297f00;
        case 0x297f04u: goto label_297f04;
        case 0x297f08u: goto label_297f08;
        case 0x297f0cu: goto label_297f0c;
        case 0x297f10u: goto label_297f10;
        case 0x297f14u: goto label_297f14;
        case 0x297f18u: goto label_297f18;
        case 0x297f1cu: goto label_297f1c;
        case 0x297f20u: goto label_297f20;
        case 0x297f24u: goto label_297f24;
        case 0x297f28u: goto label_297f28;
        case 0x297f2cu: goto label_297f2c;
        case 0x297f30u: goto label_297f30;
        case 0x297f34u: goto label_297f34;
        case 0x297f38u: goto label_297f38;
        case 0x297f3cu: goto label_297f3c;
        case 0x297f40u: goto label_297f40;
        case 0x297f44u: goto label_297f44;
        case 0x297f48u: goto label_297f48;
        case 0x297f4cu: goto label_297f4c;
        case 0x297f50u: goto label_297f50;
        case 0x297f54u: goto label_297f54;
        case 0x297f58u: goto label_297f58;
        case 0x297f5cu: goto label_297f5c;
        case 0x297f60u: goto label_297f60;
        case 0x297f64u: goto label_297f64;
        case 0x297f68u: goto label_297f68;
        case 0x297f6cu: goto label_297f6c;
        case 0x297f70u: goto label_297f70;
        case 0x297f74u: goto label_297f74;
        case 0x297f78u: goto label_297f78;
        case 0x297f7cu: goto label_297f7c;
        case 0x297f80u: goto label_297f80;
        case 0x297f84u: goto label_297f84;
        case 0x297f88u: goto label_297f88;
        case 0x297f8cu: goto label_297f8c;
        case 0x297f90u: goto label_297f90;
        case 0x297f94u: goto label_297f94;
        case 0x297f98u: goto label_297f98;
        case 0x297f9cu: goto label_297f9c;
        case 0x297fa0u: goto label_297fa0;
        case 0x297fa4u: goto label_297fa4;
        case 0x297fa8u: goto label_297fa8;
        case 0x297facu: goto label_297fac;
        case 0x297fb0u: goto label_297fb0;
        case 0x297fb4u: goto label_297fb4;
        case 0x297fb8u: goto label_297fb8;
        case 0x297fbcu: goto label_297fbc;
        case 0x297fc0u: goto label_297fc0;
        case 0x297fc4u: goto label_297fc4;
        case 0x297fc8u: goto label_297fc8;
        case 0x297fccu: goto label_297fcc;
        case 0x297fd0u: goto label_297fd0;
        case 0x297fd4u: goto label_297fd4;
        case 0x297fd8u: goto label_297fd8;
        case 0x297fdcu: goto label_297fdc;
        case 0x297fe0u: goto label_297fe0;
        case 0x297fe4u: goto label_297fe4;
        case 0x297fe8u: goto label_297fe8;
        case 0x297fecu: goto label_297fec;
        case 0x297ff0u: goto label_297ff0;
        case 0x297ff4u: goto label_297ff4;
        case 0x297ff8u: goto label_297ff8;
        case 0x297ffcu: goto label_297ffc;
        case 0x298000u: goto label_298000;
        case 0x298004u: goto label_298004;
        case 0x298008u: goto label_298008;
        case 0x29800cu: goto label_29800c;
        case 0x298010u: goto label_298010;
        case 0x298014u: goto label_298014;
        case 0x298018u: goto label_298018;
        case 0x29801cu: goto label_29801c;
        case 0x298020u: goto label_298020;
        case 0x298024u: goto label_298024;
        case 0x298028u: goto label_298028;
        case 0x29802cu: goto label_29802c;
        case 0x298030u: goto label_298030;
        case 0x298034u: goto label_298034;
        case 0x298038u: goto label_298038;
        case 0x29803cu: goto label_29803c;
        case 0x298040u: goto label_298040;
        case 0x298044u: goto label_298044;
        case 0x298048u: goto label_298048;
        case 0x29804cu: goto label_29804c;
        case 0x298050u: goto label_298050;
        case 0x298054u: goto label_298054;
        case 0x298058u: goto label_298058;
        case 0x29805cu: goto label_29805c;
        case 0x298060u: goto label_298060;
        case 0x298064u: goto label_298064;
        case 0x298068u: goto label_298068;
        case 0x29806cu: goto label_29806c;
        case 0x298070u: goto label_298070;
        case 0x298074u: goto label_298074;
        case 0x298078u: goto label_298078;
        case 0x29807cu: goto label_29807c;
        case 0x298080u: goto label_298080;
        case 0x298084u: goto label_298084;
        case 0x298088u: goto label_298088;
        case 0x29808cu: goto label_29808c;
        case 0x298090u: goto label_298090;
        case 0x298094u: goto label_298094;
        case 0x298098u: goto label_298098;
        case 0x29809cu: goto label_29809c;
        case 0x2980a0u: goto label_2980a0;
        case 0x2980a4u: goto label_2980a4;
        case 0x2980a8u: goto label_2980a8;
        case 0x2980acu: goto label_2980ac;
        case 0x2980b0u: goto label_2980b0;
        case 0x2980b4u: goto label_2980b4;
        case 0x2980b8u: goto label_2980b8;
        case 0x2980bcu: goto label_2980bc;
        case 0x2980c0u: goto label_2980c0;
        case 0x2980c4u: goto label_2980c4;
        case 0x2980c8u: goto label_2980c8;
        case 0x2980ccu: goto label_2980cc;
        case 0x2980d0u: goto label_2980d0;
        case 0x2980d4u: goto label_2980d4;
        case 0x2980d8u: goto label_2980d8;
        case 0x2980dcu: goto label_2980dc;
        case 0x2980e0u: goto label_2980e0;
        case 0x2980e4u: goto label_2980e4;
        case 0x2980e8u: goto label_2980e8;
        case 0x2980ecu: goto label_2980ec;
        case 0x2980f0u: goto label_2980f0;
        case 0x2980f4u: goto label_2980f4;
        case 0x2980f8u: goto label_2980f8;
        case 0x2980fcu: goto label_2980fc;
        case 0x298100u: goto label_298100;
        case 0x298104u: goto label_298104;
        case 0x298108u: goto label_298108;
        case 0x29810cu: goto label_29810c;
        case 0x298110u: goto label_298110;
        case 0x298114u: goto label_298114;
        case 0x298118u: goto label_298118;
        case 0x29811cu: goto label_29811c;
        case 0x298120u: goto label_298120;
        case 0x298124u: goto label_298124;
        case 0x298128u: goto label_298128;
        case 0x29812cu: goto label_29812c;
        case 0x298130u: goto label_298130;
        case 0x298134u: goto label_298134;
        case 0x298138u: goto label_298138;
        case 0x29813cu: goto label_29813c;
        case 0x298140u: goto label_298140;
        case 0x298144u: goto label_298144;
        case 0x298148u: goto label_298148;
        case 0x29814cu: goto label_29814c;
        case 0x298150u: goto label_298150;
        case 0x298154u: goto label_298154;
        case 0x298158u: goto label_298158;
        case 0x29815cu: goto label_29815c;
        case 0x298160u: goto label_298160;
        case 0x298164u: goto label_298164;
        case 0x298168u: goto label_298168;
        case 0x29816cu: goto label_29816c;
        case 0x298170u: goto label_298170;
        case 0x298174u: goto label_298174;
        case 0x298178u: goto label_298178;
        case 0x29817cu: goto label_29817c;
        case 0x298180u: goto label_298180;
        case 0x298184u: goto label_298184;
        case 0x298188u: goto label_298188;
        case 0x29818cu: goto label_29818c;
        case 0x298190u: goto label_298190;
        case 0x298194u: goto label_298194;
        case 0x298198u: goto label_298198;
        case 0x29819cu: goto label_29819c;
        case 0x2981a0u: goto label_2981a0;
        case 0x2981a4u: goto label_2981a4;
        case 0x2981a8u: goto label_2981a8;
        case 0x2981acu: goto label_2981ac;
        case 0x2981b0u: goto label_2981b0;
        case 0x2981b4u: goto label_2981b4;
        case 0x2981b8u: goto label_2981b8;
        case 0x2981bcu: goto label_2981bc;
        case 0x2981c0u: goto label_2981c0;
        case 0x2981c4u: goto label_2981c4;
        case 0x2981c8u: goto label_2981c8;
        case 0x2981ccu: goto label_2981cc;
        case 0x2981d0u: goto label_2981d0;
        case 0x2981d4u: goto label_2981d4;
        case 0x2981d8u: goto label_2981d8;
        case 0x2981dcu: goto label_2981dc;
        case 0x2981e0u: goto label_2981e0;
        case 0x2981e4u: goto label_2981e4;
        case 0x2981e8u: goto label_2981e8;
        case 0x2981ecu: goto label_2981ec;
        case 0x2981f0u: goto label_2981f0;
        case 0x2981f4u: goto label_2981f4;
        case 0x2981f8u: goto label_2981f8;
        case 0x2981fcu: goto label_2981fc;
        case 0x298200u: goto label_298200;
        case 0x298204u: goto label_298204;
        case 0x298208u: goto label_298208;
        case 0x29820cu: goto label_29820c;
        case 0x298210u: goto label_298210;
        case 0x298214u: goto label_298214;
        case 0x298218u: goto label_298218;
        case 0x29821cu: goto label_29821c;
        case 0x298220u: goto label_298220;
        case 0x298224u: goto label_298224;
        case 0x298228u: goto label_298228;
        case 0x29822cu: goto label_29822c;
        case 0x298230u: goto label_298230;
        case 0x298234u: goto label_298234;
        case 0x298238u: goto label_298238;
        case 0x29823cu: goto label_29823c;
        case 0x298240u: goto label_298240;
        case 0x298244u: goto label_298244;
        case 0x298248u: goto label_298248;
        case 0x29824cu: goto label_29824c;
        case 0x298250u: goto label_298250;
        case 0x298254u: goto label_298254;
        case 0x298258u: goto label_298258;
        case 0x29825cu: goto label_29825c;
        case 0x298260u: goto label_298260;
        case 0x298264u: goto label_298264;
        case 0x298268u: goto label_298268;
        case 0x29826cu: goto label_29826c;
        case 0x298270u: goto label_298270;
        case 0x298274u: goto label_298274;
        case 0x298278u: goto label_298278;
        case 0x29827cu: goto label_29827c;
        case 0x298280u: goto label_298280;
        case 0x298284u: goto label_298284;
        case 0x298288u: goto label_298288;
        case 0x29828cu: goto label_29828c;
        case 0x298290u: goto label_298290;
        case 0x298294u: goto label_298294;
        case 0x298298u: goto label_298298;
        case 0x29829cu: goto label_29829c;
        case 0x2982a0u: goto label_2982a0;
        case 0x2982a4u: goto label_2982a4;
        case 0x2982a8u: goto label_2982a8;
        case 0x2982acu: goto label_2982ac;
        case 0x2982b0u: goto label_2982b0;
        case 0x2982b4u: goto label_2982b4;
        case 0x2982b8u: goto label_2982b8;
        case 0x2982bcu: goto label_2982bc;
        case 0x2982c0u: goto label_2982c0;
        case 0x2982c4u: goto label_2982c4;
        case 0x2982c8u: goto label_2982c8;
        case 0x2982ccu: goto label_2982cc;
        case 0x2982d0u: goto label_2982d0;
        case 0x2982d4u: goto label_2982d4;
        case 0x2982d8u: goto label_2982d8;
        case 0x2982dcu: goto label_2982dc;
        case 0x2982e0u: goto label_2982e0;
        case 0x2982e4u: goto label_2982e4;
        case 0x2982e8u: goto label_2982e8;
        case 0x2982ecu: goto label_2982ec;
        case 0x2982f0u: goto label_2982f0;
        case 0x2982f4u: goto label_2982f4;
        case 0x2982f8u: goto label_2982f8;
        case 0x2982fcu: goto label_2982fc;
        case 0x298300u: goto label_298300;
        case 0x298304u: goto label_298304;
        case 0x298308u: goto label_298308;
        case 0x29830cu: goto label_29830c;
        case 0x298310u: goto label_298310;
        case 0x298314u: goto label_298314;
        case 0x298318u: goto label_298318;
        case 0x29831cu: goto label_29831c;
        case 0x298320u: goto label_298320;
        case 0x298324u: goto label_298324;
        default: break;
    }

    ctx->pc = 0x297d30u;

label_297d30:
    // 0x297d30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x297d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_297d34:
    // 0x297d34: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x297d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
label_297d38:
    // 0x297d38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x297d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_297d3c:
    // 0x297d3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x297d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_297d40:
    // 0x297d40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x297d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_297d44:
    // 0x297d44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x297d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_297d48:
    // 0x297d48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x297d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_297d4c:
    // 0x297d4c: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x297d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
label_297d50:
    // 0x297d50: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x297d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_297d54:
    // 0x297d54: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x297d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_297d58:
    // 0x297d58: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x297d58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_297d5c:
    // 0x297d5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x297d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_297d60:
    // 0x297d60: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x297d60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_297d64:
    // 0x297d64: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x297d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_297d68:
    // 0x297d68: 0x246368f0  addiu       $v1, $v1, 0x68F0
    ctx->pc = 0x297d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26864));
label_297d6c:
    // 0x297d6c: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x297d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_297d70:
    // 0x297d70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x297d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_297d74:
    // 0x297d74: 0x40f809  jalr        $v0
label_297d78:
    if (ctx->pc == 0x297D78u) {
        ctx->pc = 0x297D7Cu;
        goto label_297d7c;
    }
    ctx->pc = 0x297D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x297D7Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297D74u, 0x297D7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x297D7Cu;
label_297d7c:
    // 0x297d7c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x297d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_297d80:
    // 0x297d80: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x297d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_297d84:
    // 0x297d84: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x297d84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_297d88:
    // 0x297d88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x297d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_297d8c:
    // 0x297d8c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x297d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_297d90:
    // 0x297d90: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x297d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_297d94:
    // 0x297d94: 0x24426900  addiu       $v0, $v0, 0x6900
    ctx->pc = 0x297d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26880));
label_297d98:
    // 0x297d98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x297d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_297d9c:
    // 0x297d9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x297d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_297da0:
    // 0x297da0: 0x40f809  jalr        $v0
label_297da4:
    if (ctx->pc == 0x297DA4u) {
        ctx->pc = 0x297DA8u;
        goto label_297da8;
    }
    ctx->pc = 0x297DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x297DA8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297DA0u, 0x297DA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x297DA8u;
label_297da8:
    // 0x297da8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x297da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_297dac:
    // 0x297dac: 0x8c5102d0  lw          $s1, 0x2D0($v0)
    ctx->pc = 0x297dacu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_297db0:
    // 0x297db0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x297db0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_297db4:
    // 0x297db4: 0x10000130  b           . + 4 + (0x130 << 2)
label_297db8:
    if (ctx->pc == 0x297DB8u) {
        ctx->pc = 0x297DBCu;
        goto label_297dbc;
    }
    ctx->pc = 0x297DB4u;
    {
        const bool branch_taken_0x297db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297db4) {
            ctx->pc = 0x298278u;
            goto label_298278;
        }
    }
    ctx->pc = 0x297DBCu;
label_297dbc:
    // 0x297dbc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x297dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_297dc0:
    // 0x297dc0: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x297dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_297dc4:
    // 0x297dc4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x297dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_297dc8:
    // 0x297dc8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x297dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_297dcc:
    // 0x297dcc: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x297dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_297dd0:
    // 0x297dd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x297dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_297dd4:
    // 0x297dd4: 0x8c540830  lw          $s4, 0x830($v0)
    ctx->pc = 0x297dd4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2096)));
label_297dd8:
    // 0x297dd8: 0x2602000e  addiu       $v0, $s0, 0xE
    ctx->pc = 0x297dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
label_297ddc:
    // 0x297ddc: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x297ddcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_297de0:
    // 0x297de0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x297de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_297de4:
    // 0x297de4: 0xc06c168  jal         func_1B05A0
label_297de8:
    if (ctx->pc == 0x297DE8u) {
        ctx->pc = 0x297DECu;
        goto label_297dec;
    }
    ctx->pc = 0x297DE4u;
    SET_GPR_U32(ctx, 31, 0x297DECu);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x297DE4u, 0x297DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297DECu;
label_297dec:
    // 0x297dec: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
label_297df0:
    if (ctx->pc == 0x297DF0u) {
        ctx->pc = 0x297DF4u;
        goto label_297df4;
    }
    ctx->pc = 0x297DECu;
    {
        const bool branch_taken_0x297dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x297dec) {
            ctx->pc = 0x297FA0u;
            goto label_297fa0;
        }
    }
    ctx->pc = 0x297DF4u;
label_297df4:
    // 0x297df4: 0x92820018  lbu         $v0, 0x18($s4)
    ctx->pc = 0x297df4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 24)));
label_297df8:
    // 0x297df8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x297df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_297dfc:
    // 0x297dfc: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x297dfcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_297e00:
    // 0x297e00: 0x92820019  lbu         $v0, 0x19($s4)
    ctx->pc = 0x297e00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 25)));
label_297e04:
    // 0x297e04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x297e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_297e08:
    // 0x297e08: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x297e08u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_297e0c:
    // 0x297e0c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x297e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_297e10:
    // 0x297e10: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x297e10u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_297e14:
    // 0x297e14: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x297e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_297e18:
    // 0x297e18: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x297e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_297e1c:
    // 0x297e1c: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x297e1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_297e20:
    // 0x297e20: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_297e24:
    if (ctx->pc == 0x297E24u) {
        ctx->pc = 0x297E28u;
        goto label_297e28;
    }
    ctx->pc = 0x297E20u;
    {
        const bool branch_taken_0x297e20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x297e20) {
            ctx->pc = 0x297E30u;
            goto label_297e30;
        }
    }
    ctx->pc = 0x297E28u;
label_297e28:
    // 0x297e28: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x297e28u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_297e2c:
    // 0x297e2c: 0x0  nop
    ctx->pc = 0x297e2cu;
    // NOP
label_297e30:
    // 0x297e30: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x297e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_297e34:
    // 0x297e34: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x297e34u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_297e38:
    // 0x297e38: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x297e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_297e3c:
    // 0x297e3c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x297e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_297e40:
    // 0x297e40: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x297e40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_297e44:
    // 0x297e44: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_297e48:
    if (ctx->pc == 0x297E48u) {
        ctx->pc = 0x297E4Cu;
        goto label_297e4c;
    }
    ctx->pc = 0x297E44u;
    {
        const bool branch_taken_0x297e44 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x297e44) {
            ctx->pc = 0x297E50u;
            goto label_297e50;
        }
    }
    ctx->pc = 0x297E4Cu;
label_297e4c:
    // 0x297e4c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x297e4cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_297e50:
    // 0x297e50: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x297e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_297e54:
    // 0x297e54: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x297e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
label_297e58:
    // 0x297e58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x297e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_297e5c:
    // 0x297e5c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x297e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_297e60:
    // 0x297e60: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x297e60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_297e64:
    // 0x297e64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x297e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_297e68:
    // 0x297e68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x297e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_297e6c:
    // 0x297e6c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x297e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_297e70:
    // 0x297e70: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x297e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_297e74:
    // 0x297e74: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x297e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
label_297e78:
    // 0x297e78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x297e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_297e7c:
    // 0x297e7c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x297e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_297e80:
    // 0x297e80: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x297e80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_297e84:
    // 0x297e84: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x297e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_297e88:
    // 0x297e88: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x297e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
label_297e8c:
    // 0x297e8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x297e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_297e90:
    // 0x297e90: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x297e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_297e94:
    // 0x297e94: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x297e94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_297e98:
    // 0x297e98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x297e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_297e9c:
    // 0x297e9c: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x297e9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_297ea0:
    // 0x297ea0: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
label_297ea4:
    if (ctx->pc == 0x297EA4u) {
        ctx->pc = 0x297EA8u;
        goto label_297ea8;
    }
    ctx->pc = 0x297EA0u;
    {
        const bool branch_taken_0x297ea0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x297ea0) {
            ctx->pc = 0x297EC0u;
            goto label_297ec0;
        }
    }
    ctx->pc = 0x297EA8u;
label_297ea8:
    // 0x297ea8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x297ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_297eac:
    // 0x297eac: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x297eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
label_297eb0:
    // 0x297eb0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x297eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_297eb4:
    // 0x297eb4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x297eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_297eb8:
    // 0x297eb8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x297eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_297ebc:
    // 0x297ebc: 0x0  nop
    ctx->pc = 0x297ebcu;
    // NOP
label_297ec0:
    // 0x297ec0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x297ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_297ec4:
    // 0x297ec4: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x297ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
label_297ec8:
    // 0x297ec8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x297ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_297ecc:
    // 0x297ecc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x297eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_297ed0:
    // 0x297ed0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x297ed0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_297ed4:
    // 0x297ed4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x297ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_297ed8:
    // 0x297ed8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x297ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_297edc:
    // 0x297edc: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
label_297ee0:
    if (ctx->pc == 0x297EE0u) {
        ctx->pc = 0x297EE4u;
        goto label_297ee4;
    }
    ctx->pc = 0x297EDCu;
    {
        const bool branch_taken_0x297edc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x297edc) {
            ctx->pc = 0x297F54u;
            goto label_297f54;
        }
    }
    ctx->pc = 0x297EE4u;
label_297ee4:
    // 0x297ee4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x297ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_297ee8:
    // 0x297ee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x297ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_297eec:
    // 0x297eec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x297eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_297ef0:
    // 0x297ef0: 0x2442133c  addiu       $v0, $v0, 0x133C
    ctx->pc = 0x297ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
label_297ef4:
    // 0x297ef4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x297ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_297ef8:
    // 0x297ef8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x297ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_297efc:
    // 0x297efc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x297efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_297f00:
    // 0x297f00: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x297f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_297f04:
    // 0x297f04: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x297f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_297f08:
    // 0x297f08: 0x24421340  addiu       $v0, $v0, 0x1340
    ctx->pc = 0x297f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4928));
label_297f0c:
    // 0x297f0c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x297f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_297f10:
    // 0x297f10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x297f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_297f14:
    // 0x297f14: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x297f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_297f18:
    // 0x297f18: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x297f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_297f1c:
    // 0x297f1c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x297f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_297f20:
    // 0x297f20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x297f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_297f24:
    // 0x297f24: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x297f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_297f28:
    // 0x297f28: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x297f28u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_297f2c:
    // 0x297f2c: 0x2602000e  addiu       $v0, $s0, 0xE
    ctx->pc = 0x297f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
label_297f30:
    // 0x297f30: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x297f30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_297f34:
    // 0x297f34: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x297f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_297f38:
    // 0x297f38: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x297f38u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_297f3c:
    // 0x297f3c: 0x72603e28  paddub      $a3, $s3, $zero
    ctx->pc = 0x297f3cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_297f40:
    // 0x297f40: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x297f40u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_297f44:
    // 0x297f44: 0xc06c0ec  jal         func_1B03B0
label_297f48:
    if (ctx->pc == 0x297F48u) {
        ctx->pc = 0x297F4Cu;
        goto label_297f4c;
    }
    ctx->pc = 0x297F44u;
    SET_GPR_U32(ctx, 31, 0x297F4Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x297F44u, 0x297F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297F4Cu;
label_297f4c:
    // 0x297f4c: 0x10000014  b           . + 4 + (0x14 << 2)
label_297f50:
    if (ctx->pc == 0x297F50u) {
        ctx->pc = 0x297F54u;
        goto label_297f54;
    }
    ctx->pc = 0x297F4Cu;
    {
        const bool branch_taken_0x297f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297f4c) {
            ctx->pc = 0x297FA0u;
            goto label_297fa0;
        }
    }
    ctx->pc = 0x297F54u;
label_297f54:
    // 0x297f54: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x297f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_297f58:
    // 0x297f58: 0x24421340  addiu       $v0, $v0, 0x1340
    ctx->pc = 0x297f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4928));
label_297f5c:
    // 0x297f5c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x297f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_297f60:
    // 0x297f60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x297f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_297f64:
    // 0x297f64: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x297f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_297f68:
    // 0x297f68: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x297f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_297f6c:
    // 0x297f6c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x297f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_297f70:
    // 0x297f70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x297f70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_297f74:
    // 0x297f74: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x297f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_297f78:
    // 0x297f78: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x297f78u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_297f7c:
    // 0x297f7c: 0x2602000e  addiu       $v0, $s0, 0xE
    ctx->pc = 0x297f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
label_297f80:
    // 0x297f80: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x297f80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_297f84:
    // 0x297f84: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x297f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_297f88:
    // 0x297f88: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x297f88u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_297f8c:
    // 0x297f8c: 0x72603e28  paddub      $a3, $s3, $zero
    ctx->pc = 0x297f8cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_297f90:
    // 0x297f90: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x297f90u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_297f94:
    // 0x297f94: 0xc06c0ec  jal         func_1B03B0
label_297f98:
    if (ctx->pc == 0x297F98u) {
        ctx->pc = 0x297F9Cu;
        goto label_297f9c;
    }
    ctx->pc = 0x297F94u;
    SET_GPR_U32(ctx, 31, 0x297F9Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x297F94u, 0x297F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297F9Cu;
label_297f9c:
    // 0x297f9c: 0x0  nop
    ctx->pc = 0x297f9cu;
    // NOP
label_297fa0:
    // 0x297fa0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x297fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_297fa4:
    // 0x297fa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x297fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_297fa8:
    // 0x297fa8: 0x2021804  sllv        $v1, $v0, $s0
    ctx->pc = 0x297fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
label_297fac:
    // 0x297fac: 0x8c821348  lw          $v0, 0x1348($a0)
    ctx->pc = 0x297facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4936)));
label_297fb0:
    // 0x297fb0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x297fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_297fb4:
    // 0x297fb4: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
label_297fb8:
    if (ctx->pc == 0x297FB8u) {
        ctx->pc = 0x297FBCu;
        goto label_297fbc;
    }
    ctx->pc = 0x297FB4u;
    {
        const bool branch_taken_0x297fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x297fb4) {
            ctx->pc = 0x298160u;
            goto label_298160;
        }
    }
    ctx->pc = 0x297FBCu;
label_297fbc:
    // 0x297fbc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x297fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_297fc0:
    // 0x297fc0: 0x2442133c  addiu       $v0, $v0, 0x133C
    ctx->pc = 0x297fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
label_297fc4:
    // 0x297fc4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x297fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_297fc8:
    // 0x297fc8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x297fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_297fcc:
    // 0x297fcc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x297fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_297fd0:
    // 0x297fd0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x297fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_297fd4:
    // 0x297fd4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x297fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_297fd8:
    // 0x297fd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x297fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_297fdc:
    // 0x297fdc: 0x0  nop
    ctx->pc = 0x297fdcu;
    // NOP
label_297fe0:
    // 0x297fe0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x297fe0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_297fe4:
    // 0x297fe4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x297fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_297fe8:
    // 0x297fe8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x297fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_297fec:
    // 0x297fec: 0x2442133c  addiu       $v0, $v0, 0x133C
    ctx->pc = 0x297fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
label_297ff0:
    // 0x297ff0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x297ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_297ff4:
    // 0x297ff4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x297ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_297ff8:
    // 0x297ff8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x297ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_297ffc:
    // 0x297ffc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x297ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_298000:
    // 0x298000: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x298000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_298004:
    // 0x298004: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x298004u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_298008:
    // 0x298008: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x298008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_29800c:
    // 0x29800c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x29800cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_298010:
    // 0x298010: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x298010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_298014:
    // 0x298014: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x298014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_298018:
    // 0x298018: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x298018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_29801c:
    // 0x29801c: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x29801cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_298020:
    // 0x298020: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x298020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_298024:
    // 0x298024: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x298024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_298028:
    // 0x298028: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x298028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_29802c:
    // 0x29802c: 0xc46d011c  lwc1        $f13, 0x11C($v1)
    ctx->pc = 0x29802cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_298030:
    // 0x298030: 0xc058f50  jal         func_163D40
label_298034:
    if (ctx->pc == 0x298034u) {
        ctx->pc = 0x298038u;
        goto label_298038;
    }
    ctx->pc = 0x298030u;
    SET_GPR_U32(ctx, 31, 0x298038u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x298030u, 0x298038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298038u;
label_298038:
    // 0x298038: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x298038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_29803c:
    // 0x29803c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x29803cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_298040:
    // 0x298040: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x298040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_298044:
    // 0x298044: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x298044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_298048:
    // 0x298048: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x298048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29804c:
    // 0x29804c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x29804cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_298050:
    // 0x298050: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x298050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
label_298054:
    // 0x298054: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x298054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_298058:
    // 0x298058: 0xe440011c  swc1        $f0, 0x11C($v0)
    ctx->pc = 0x298058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 284), bits); }
label_29805c:
    // 0x29805c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29805cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_298060:
    // 0x298060: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x298060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_298064:
    // 0x298064: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x298064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_298068:
    // 0x298068: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x298068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_29806c:
    // 0x29806c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x29806cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_298070:
    // 0x298070: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x298070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_298074:
    // 0x298074: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x298074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_298078:
    // 0x298078: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x298078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
label_29807c:
    // 0x29807c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29807cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_298080:
    // 0x298080: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x298080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
label_298084:
    // 0x298084: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x298084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_298088:
    // 0x298088: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x298088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_29808c:
    // 0x29808c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x29808cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_298090:
    // 0x298090: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x298090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_298094:
    // 0x298094: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x298094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_298098:
    // 0x298098: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x298098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29809c:
    // 0x29809c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x29809cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2980a0:
    // 0x2980a0: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x2980a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
label_2980a4:
    // 0x2980a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2980a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2980a8:
    // 0x2980a8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2980a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2980ac:
    // 0x2980ac: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2980acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2980b0:
    // 0x2980b0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2980b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2980b4:
    // 0x2980b4: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x2980b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2980b8:
    // 0x2980b8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2980b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2980bc:
    // 0x2980bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2980bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2980c0:
    // 0x2980c0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2980c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2980c4:
    // 0x2980c4: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x2980c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
label_2980c8:
    // 0x2980c8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2980c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2980cc:
    // 0x2980cc: 0x94620140  lhu         $v0, 0x140($v1)
    ctx->pc = 0x2980ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
label_2980d0:
    // 0x2980d0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2980d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_2980d4:
    // 0x2980d4: 0xa4620140  sh          $v0, 0x140($v1)
    ctx->pc = 0x2980d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 320), (uint16_t)GPR_U32(ctx, 2));
label_2980d8:
    // 0x2980d8: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x2980d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2980dc:
    // 0x2980dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2980dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2980e0:
    // 0x2980e0: 0x0  nop
    ctx->pc = 0x2980e0u;
    // NOP
label_2980e4:
    // 0x2980e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2980e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2980e8:
    // 0x2980e8: 0x0  nop
    ctx->pc = 0x2980e8u;
    // NOP
label_2980ec:
    // 0x2980ec: 0x45000060  bc1f        . + 4 + (0x60 << 2)
label_2980f0:
    if (ctx->pc == 0x2980F0u) {
        ctx->pc = 0x2980F4u;
        goto label_2980f4;
    }
    ctx->pc = 0x2980ECu;
    {
        const bool branch_taken_0x2980ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2980ec) {
            ctx->pc = 0x298270u;
            goto label_298270;
        }
    }
    ctx->pc = 0x2980F4u;
label_2980f4:
    // 0x2980f4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2980f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2980f8:
    // 0x2980f8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2980f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2980fc:
    // 0x2980fc: 0x244268b0  addiu       $v0, $v0, 0x68B0
    ctx->pc = 0x2980fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26800));
label_298100:
    // 0x298100: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x298100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_298104:
    // 0x298104: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x298104u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_298108:
    // 0x298108: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x298108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29810c:
    // 0x29810c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x29810cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_298110:
    // 0x298110: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x298110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_298114:
    // 0x298114: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x298114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_298118:
    // 0x298118: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x298118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_29811c:
    // 0x29811c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29811cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_298120:
    // 0x298120: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x298120u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_298124:
    // 0x298124: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x298124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_298128:
    // 0x298128: 0x244268b0  addiu       $v0, $v0, 0x68B0
    ctx->pc = 0x298128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26800));
label_29812c:
    // 0x29812c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x29812cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_298130:
    // 0x298130: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x298130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_298134:
    // 0x298134: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x298134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_298138:
    // 0x298138: 0x2443000e  addiu       $v1, $v0, 0xE
    ctx->pc = 0x298138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
label_29813c:
    // 0x29813c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x29813cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_298140:
    // 0x298140: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x298140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_298144:
    // 0x298144: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x298144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_298148:
    // 0x298148: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x298148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_29814c:
    // 0x29814c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x29814cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_298150:
    // 0x298150: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x298150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_298154:
    // 0x298154: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x298154u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_298158:
    // 0x298158: 0x10000045  b           . + 4 + (0x45 << 2)
label_29815c:
    if (ctx->pc == 0x29815Cu) {
        ctx->pc = 0x298160u;
        goto label_298160;
    }
    ctx->pc = 0x298158u;
    {
        const bool branch_taken_0x298158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298158) {
            ctx->pc = 0x298270u;
            goto label_298270;
        }
    }
    ctx->pc = 0x298160u;
label_298160:
    // 0x298160: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x298160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_298164:
    // 0x298164: 0x24421340  addiu       $v0, $v0, 0x1340
    ctx->pc = 0x298164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4928));
label_298168:
    // 0x298168: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x298168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_29816c:
    // 0x29816c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29816cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_298170:
    // 0x298170: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x298170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_298174:
    // 0x298174: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x298174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_298178:
    // 0x298178: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x298178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_29817c:
    // 0x29817c: 0x2442133c  addiu       $v0, $v0, 0x133C
    ctx->pc = 0x29817cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
label_298180:
    // 0x298180: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x298180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_298184:
    // 0x298184: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x298184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_298188:
    // 0x298188: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x298188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29818c:
    // 0x29818c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x29818cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_298190:
    // 0x298190: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x298190u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_298194:
    // 0x298194: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x298194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_298198:
    // 0x298198: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x298198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_29819c:
    // 0x29819c: 0x2442133c  addiu       $v0, $v0, 0x133C
    ctx->pc = 0x29819cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
label_2981a0:
    // 0x2981a0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2981a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2981a4:
    // 0x2981a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2981a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2981a8:
    // 0x2981a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2981a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2981ac:
    // 0x2981ac: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2981acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2981b0:
    // 0x2981b0: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x2981b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2981b4:
    // 0x2981b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2981b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2981b8:
    // 0x2981b8: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x2981b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_2981bc:
    // 0x2981bc: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x2981bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2981c0:
    // 0x2981c0: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2981c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_2981c4:
    // 0x2981c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2981c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2981c8:
    // 0x2981c8: 0x0  nop
    ctx->pc = 0x2981c8u;
    // NOP
label_2981cc:
    // 0x2981cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2981ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2981d0:
    // 0x2981d0: 0x0  nop
    ctx->pc = 0x2981d0u;
    // NOP
label_2981d4:
    // 0x2981d4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_2981d8:
    if (ctx->pc == 0x2981D8u) {
        ctx->pc = 0x2981DCu;
        goto label_2981dc;
    }
    ctx->pc = 0x2981D4u;
    {
        const bool branch_taken_0x2981d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2981d4) {
            ctx->pc = 0x2981F0u;
            goto label_2981f0;
        }
    }
    ctx->pc = 0x2981DCu;
label_2981dc:
    // 0x2981dc: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2981dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_2981e0:
    // 0x2981e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2981e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2981e4:
    // 0x2981e4: 0x0  nop
    ctx->pc = 0x2981e4u;
    // NOP
label_2981e8:
    // 0x2981e8: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x2981e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_2981ec:
    // 0x2981ec: 0x0  nop
    ctx->pc = 0x2981ecu;
    // NOP
label_2981f0:
    // 0x2981f0: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x2981f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2981f4:
    // 0x2981f4: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x2981f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
label_2981f8:
    // 0x2981f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2981f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2981fc:
    // 0x2981fc: 0x0  nop
    ctx->pc = 0x2981fcu;
    // NOP
label_298200:
    // 0x298200: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x298200u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_298204:
    // 0x298204: 0x0  nop
    ctx->pc = 0x298204u;
    // NOP
label_298208:
    // 0x298208: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_29820c:
    if (ctx->pc == 0x29820Cu) {
        ctx->pc = 0x298210u;
        goto label_298210;
    }
    ctx->pc = 0x298208u;
    {
        const bool branch_taken_0x298208 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x298208) {
            ctx->pc = 0x298220u;
            goto label_298220;
        }
    }
    ctx->pc = 0x298210u;
label_298210:
    // 0x298210: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x298210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
label_298214:
    // 0x298214: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_298218:
    // 0x298218: 0x0  nop
    ctx->pc = 0x298218u;
    // NOP
label_29821c:
    // 0x29821c: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x29821cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_298220:
    // 0x298220: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x298220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_298224:
    // 0x298224: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x298224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_298228:
    // 0x298228: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x298228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
label_29822c:
    // 0x29822c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x29822cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_298230:
    // 0x298230: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x298230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_298234:
    // 0x298234: 0x24421334  addiu       $v0, $v0, 0x1334
    ctx->pc = 0x298234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4916));
label_298238:
    // 0x298238: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x298238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29823c:
    // 0x29823c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x29823cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_298240:
    // 0x298240: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x298240u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_298244:
    // 0x298244: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x298244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
label_298248:
    // 0x298248: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x298248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_29824c:
    // 0x29824c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x29824cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_298250:
    // 0x298250: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x298250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
label_298254:
    // 0x298254: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x298254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_298258:
    // 0x298258: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x298258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_29825c:
    // 0x29825c: 0x24421334  addiu       $v0, $v0, 0x1334
    ctx->pc = 0x29825cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4916));
label_298260:
    // 0x298260: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x298260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_298264:
    // 0x298264: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x298264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_298268:
    // 0x298268: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x298268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_29826c:
    // 0x29826c: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x29826cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
label_298270:
    // 0x298270: 0x26310190  addiu       $s1, $s1, 0x190
    ctx->pc = 0x298270u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
label_298274:
    // 0x298274: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x298274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_298278:
    // 0x298278: 0x2e02000e  sltiu       $v0, $s0, 0xE
    ctx->pc = 0x298278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_29827c:
    // 0x29827c: 0x1440fecf  bnez        $v0, . + 4 + (-0x131 << 2)
label_298280:
    if (ctx->pc == 0x298280u) {
        ctx->pc = 0x298284u;
        goto label_298284;
    }
    ctx->pc = 0x29827Cu;
    {
        const bool branch_taken_0x29827c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29827c) {
            ctx->pc = 0x297DBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_297dbc;
        }
    }
    ctx->pc = 0x298284u;
label_298284:
    // 0x298284: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x298284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_298288:
    // 0x298288: 0xc097a68  jal         func_25E9A0
label_29828c:
    if (ctx->pc == 0x29828Cu) {
        ctx->pc = 0x298290u;
        goto label_298290;
    }
    ctx->pc = 0x298288u;
    SET_GPR_U32(ctx, 31, 0x298290u);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x298288u, 0x298290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298290u;
label_298290:
    // 0x298290: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x298290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_298294:
    // 0x298294: 0x8c631330  lw          $v1, 0x1330($v1)
    ctx->pc = 0x298294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4912)));
label_298298:
    // 0x298298: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_29829c:
    if (ctx->pc == 0x29829Cu) {
        ctx->pc = 0x2982A0u;
        goto label_2982a0;
    }
    ctx->pc = 0x298298u;
    {
        const bool branch_taken_0x298298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x298298) {
            ctx->pc = 0x2982B0u;
            goto label_2982b0;
        }
    }
    ctx->pc = 0x2982A0u;
label_2982a0:
    // 0x2982a0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2982a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2982a4:
    // 0x2982a4: 0x8c831330  lw          $v1, 0x1330($a0)
    ctx->pc = 0x2982a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4912)));
label_2982a8:
    // 0x2982a8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2982a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2982ac:
    // 0x2982ac: 0xac831330  sw          $v1, 0x1330($a0)
    ctx->pc = 0x2982acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4912), GPR_U32(ctx, 3));
label_2982b0:
    // 0x2982b0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2982b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2982b4:
    // 0x2982b4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2982b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2982b8:
    // 0x2982b8: 0x3c03455a  lui         $v1, 0x455A
    ctx->pc = 0x2982b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17754 << 16));
label_2982bc:
    // 0x2982bc: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x2982bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
label_2982c0:
    // 0x2982c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2982c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2982c4:
    // 0x2982c4: 0x0  nop
    ctx->pc = 0x2982c4u;
    // NOP
label_2982c8:
    // 0x2982c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2982c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2982cc:
    // 0x2982cc: 0x0  nop
    ctx->pc = 0x2982ccu;
    // NOP
label_2982d0:
    // 0x2982d0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_2982d4:
    if (ctx->pc == 0x2982D4u) {
        ctx->pc = 0x2982D8u;
        goto label_2982d8;
    }
    ctx->pc = 0x2982D0u;
    {
        const bool branch_taken_0x2982d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2982d0) {
            ctx->pc = 0x2982F4u;
            goto label_2982f4;
        }
    }
    ctx->pc = 0x2982D8u;
label_2982d8:
    // 0x2982d8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2982d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2982dc:
    // 0x2982dc: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x2982dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2982e0:
    // 0x2982e0: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x2982e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_2982e4:
    // 0x2982e4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2982e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_2982e8:
    // 0x2982e8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2982e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_2982ec:
    // 0x2982ec: 0x10000005  b           . + 4 + (0x5 << 2)
label_2982f0:
    if (ctx->pc == 0x2982F0u) {
        ctx->pc = 0x2982F4u;
        goto label_2982f4;
    }
    ctx->pc = 0x2982ECu;
    {
        const bool branch_taken_0x2982ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2982ec) {
            ctx->pc = 0x298304u;
            goto label_298304;
        }
    }
    ctx->pc = 0x2982F4u;
label_2982f4:
    // 0x2982f4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x2982f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2982f8:
    // 0x2982f8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2982f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2982fc:
    // 0x2982fc: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2982fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_298300:
    // 0x298300: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x298300u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_298304:
    // 0x298304: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x298304u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_298308:
    // 0x298308: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x298308u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_29830c:
    // 0x29830c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29830cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_298310:
    // 0x298310: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x298310u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_298314:
    // 0x298314: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x298314u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_298318:
    // 0x298318: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x298318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29831c:
    // 0x29831c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x29831cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_298320:
    // 0x298320: 0x3e00008  jr          $ra
label_298324:
    if (ctx->pc == 0x298324u) {
        ctx->pc = 0x298328u;
        goto label_fallthrough_0x298320;
    }
    ctx->pc = 0x298320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x298320:
    ctx->pc = 0x298328u;
}
