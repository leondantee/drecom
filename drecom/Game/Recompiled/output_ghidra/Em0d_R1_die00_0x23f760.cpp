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

// Function: Em0d_R1_die00
// Address: 0x23f760 - 0x23fdb8
void Em0d_R1_die00_0x23f760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0d_R1_die00_0x23f760");
#endif

    switch (ctx->pc) {
        case 0x23f760u: goto label_23f760;
        case 0x23f764u: goto label_23f764;
        case 0x23f768u: goto label_23f768;
        case 0x23f76cu: goto label_23f76c;
        case 0x23f770u: goto label_23f770;
        case 0x23f774u: goto label_23f774;
        case 0x23f778u: goto label_23f778;
        case 0x23f77cu: goto label_23f77c;
        case 0x23f780u: goto label_23f780;
        case 0x23f784u: goto label_23f784;
        case 0x23f788u: goto label_23f788;
        case 0x23f78cu: goto label_23f78c;
        case 0x23f790u: goto label_23f790;
        case 0x23f794u: goto label_23f794;
        case 0x23f798u: goto label_23f798;
        case 0x23f79cu: goto label_23f79c;
        case 0x23f7a0u: goto label_23f7a0;
        case 0x23f7a4u: goto label_23f7a4;
        case 0x23f7a8u: goto label_23f7a8;
        case 0x23f7acu: goto label_23f7ac;
        case 0x23f7b0u: goto label_23f7b0;
        case 0x23f7b4u: goto label_23f7b4;
        case 0x23f7b8u: goto label_23f7b8;
        case 0x23f7bcu: goto label_23f7bc;
        case 0x23f7c0u: goto label_23f7c0;
        case 0x23f7c4u: goto label_23f7c4;
        case 0x23f7c8u: goto label_23f7c8;
        case 0x23f7ccu: goto label_23f7cc;
        case 0x23f7d0u: goto label_23f7d0;
        case 0x23f7d4u: goto label_23f7d4;
        case 0x23f7d8u: goto label_23f7d8;
        case 0x23f7dcu: goto label_23f7dc;
        case 0x23f7e0u: goto label_23f7e0;
        case 0x23f7e4u: goto label_23f7e4;
        case 0x23f7e8u: goto label_23f7e8;
        case 0x23f7ecu: goto label_23f7ec;
        case 0x23f7f0u: goto label_23f7f0;
        case 0x23f7f4u: goto label_23f7f4;
        case 0x23f7f8u: goto label_23f7f8;
        case 0x23f7fcu: goto label_23f7fc;
        case 0x23f800u: goto label_23f800;
        case 0x23f804u: goto label_23f804;
        case 0x23f808u: goto label_23f808;
        case 0x23f80cu: goto label_23f80c;
        case 0x23f810u: goto label_23f810;
        case 0x23f814u: goto label_23f814;
        case 0x23f818u: goto label_23f818;
        case 0x23f81cu: goto label_23f81c;
        case 0x23f820u: goto label_23f820;
        case 0x23f824u: goto label_23f824;
        case 0x23f828u: goto label_23f828;
        case 0x23f82cu: goto label_23f82c;
        case 0x23f830u: goto label_23f830;
        case 0x23f834u: goto label_23f834;
        case 0x23f838u: goto label_23f838;
        case 0x23f83cu: goto label_23f83c;
        case 0x23f840u: goto label_23f840;
        case 0x23f844u: goto label_23f844;
        case 0x23f848u: goto label_23f848;
        case 0x23f84cu: goto label_23f84c;
        case 0x23f850u: goto label_23f850;
        case 0x23f854u: goto label_23f854;
        case 0x23f858u: goto label_23f858;
        case 0x23f85cu: goto label_23f85c;
        case 0x23f860u: goto label_23f860;
        case 0x23f864u: goto label_23f864;
        case 0x23f868u: goto label_23f868;
        case 0x23f86cu: goto label_23f86c;
        case 0x23f870u: goto label_23f870;
        case 0x23f874u: goto label_23f874;
        case 0x23f878u: goto label_23f878;
        case 0x23f87cu: goto label_23f87c;
        case 0x23f880u: goto label_23f880;
        case 0x23f884u: goto label_23f884;
        case 0x23f888u: goto label_23f888;
        case 0x23f88cu: goto label_23f88c;
        case 0x23f890u: goto label_23f890;
        case 0x23f894u: goto label_23f894;
        case 0x23f898u: goto label_23f898;
        case 0x23f89cu: goto label_23f89c;
        case 0x23f8a0u: goto label_23f8a0;
        case 0x23f8a4u: goto label_23f8a4;
        case 0x23f8a8u: goto label_23f8a8;
        case 0x23f8acu: goto label_23f8ac;
        case 0x23f8b0u: goto label_23f8b0;
        case 0x23f8b4u: goto label_23f8b4;
        case 0x23f8b8u: goto label_23f8b8;
        case 0x23f8bcu: goto label_23f8bc;
        case 0x23f8c0u: goto label_23f8c0;
        case 0x23f8c4u: goto label_23f8c4;
        case 0x23f8c8u: goto label_23f8c8;
        case 0x23f8ccu: goto label_23f8cc;
        case 0x23f8d0u: goto label_23f8d0;
        case 0x23f8d4u: goto label_23f8d4;
        case 0x23f8d8u: goto label_23f8d8;
        case 0x23f8dcu: goto label_23f8dc;
        case 0x23f8e0u: goto label_23f8e0;
        case 0x23f8e4u: goto label_23f8e4;
        case 0x23f8e8u: goto label_23f8e8;
        case 0x23f8ecu: goto label_23f8ec;
        case 0x23f8f0u: goto label_23f8f0;
        case 0x23f8f4u: goto label_23f8f4;
        case 0x23f8f8u: goto label_23f8f8;
        case 0x23f8fcu: goto label_23f8fc;
        case 0x23f900u: goto label_23f900;
        case 0x23f904u: goto label_23f904;
        case 0x23f908u: goto label_23f908;
        case 0x23f90cu: goto label_23f90c;
        case 0x23f910u: goto label_23f910;
        case 0x23f914u: goto label_23f914;
        case 0x23f918u: goto label_23f918;
        case 0x23f91cu: goto label_23f91c;
        case 0x23f920u: goto label_23f920;
        case 0x23f924u: goto label_23f924;
        case 0x23f928u: goto label_23f928;
        case 0x23f92cu: goto label_23f92c;
        case 0x23f930u: goto label_23f930;
        case 0x23f934u: goto label_23f934;
        case 0x23f938u: goto label_23f938;
        case 0x23f93cu: goto label_23f93c;
        case 0x23f940u: goto label_23f940;
        case 0x23f944u: goto label_23f944;
        case 0x23f948u: goto label_23f948;
        case 0x23f94cu: goto label_23f94c;
        case 0x23f950u: goto label_23f950;
        case 0x23f954u: goto label_23f954;
        case 0x23f958u: goto label_23f958;
        case 0x23f95cu: goto label_23f95c;
        case 0x23f960u: goto label_23f960;
        case 0x23f964u: goto label_23f964;
        case 0x23f968u: goto label_23f968;
        case 0x23f96cu: goto label_23f96c;
        case 0x23f970u: goto label_23f970;
        case 0x23f974u: goto label_23f974;
        case 0x23f978u: goto label_23f978;
        case 0x23f97cu: goto label_23f97c;
        case 0x23f980u: goto label_23f980;
        case 0x23f984u: goto label_23f984;
        case 0x23f988u: goto label_23f988;
        case 0x23f98cu: goto label_23f98c;
        case 0x23f990u: goto label_23f990;
        case 0x23f994u: goto label_23f994;
        case 0x23f998u: goto label_23f998;
        case 0x23f99cu: goto label_23f99c;
        case 0x23f9a0u: goto label_23f9a0;
        case 0x23f9a4u: goto label_23f9a4;
        case 0x23f9a8u: goto label_23f9a8;
        case 0x23f9acu: goto label_23f9ac;
        case 0x23f9b0u: goto label_23f9b0;
        case 0x23f9b4u: goto label_23f9b4;
        case 0x23f9b8u: goto label_23f9b8;
        case 0x23f9bcu: goto label_23f9bc;
        case 0x23f9c0u: goto label_23f9c0;
        case 0x23f9c4u: goto label_23f9c4;
        case 0x23f9c8u: goto label_23f9c8;
        case 0x23f9ccu: goto label_23f9cc;
        case 0x23f9d0u: goto label_23f9d0;
        case 0x23f9d4u: goto label_23f9d4;
        case 0x23f9d8u: goto label_23f9d8;
        case 0x23f9dcu: goto label_23f9dc;
        case 0x23f9e0u: goto label_23f9e0;
        case 0x23f9e4u: goto label_23f9e4;
        case 0x23f9e8u: goto label_23f9e8;
        case 0x23f9ecu: goto label_23f9ec;
        case 0x23f9f0u: goto label_23f9f0;
        case 0x23f9f4u: goto label_23f9f4;
        case 0x23f9f8u: goto label_23f9f8;
        case 0x23f9fcu: goto label_23f9fc;
        case 0x23fa00u: goto label_23fa00;
        case 0x23fa04u: goto label_23fa04;
        case 0x23fa08u: goto label_23fa08;
        case 0x23fa0cu: goto label_23fa0c;
        case 0x23fa10u: goto label_23fa10;
        case 0x23fa14u: goto label_23fa14;
        case 0x23fa18u: goto label_23fa18;
        case 0x23fa1cu: goto label_23fa1c;
        case 0x23fa20u: goto label_23fa20;
        case 0x23fa24u: goto label_23fa24;
        case 0x23fa28u: goto label_23fa28;
        case 0x23fa2cu: goto label_23fa2c;
        case 0x23fa30u: goto label_23fa30;
        case 0x23fa34u: goto label_23fa34;
        case 0x23fa38u: goto label_23fa38;
        case 0x23fa3cu: goto label_23fa3c;
        case 0x23fa40u: goto label_23fa40;
        case 0x23fa44u: goto label_23fa44;
        case 0x23fa48u: goto label_23fa48;
        case 0x23fa4cu: goto label_23fa4c;
        case 0x23fa50u: goto label_23fa50;
        case 0x23fa54u: goto label_23fa54;
        case 0x23fa58u: goto label_23fa58;
        case 0x23fa5cu: goto label_23fa5c;
        case 0x23fa60u: goto label_23fa60;
        case 0x23fa64u: goto label_23fa64;
        case 0x23fa68u: goto label_23fa68;
        case 0x23fa6cu: goto label_23fa6c;
        case 0x23fa70u: goto label_23fa70;
        case 0x23fa74u: goto label_23fa74;
        case 0x23fa78u: goto label_23fa78;
        case 0x23fa7cu: goto label_23fa7c;
        case 0x23fa80u: goto label_23fa80;
        case 0x23fa84u: goto label_23fa84;
        case 0x23fa88u: goto label_23fa88;
        case 0x23fa8cu: goto label_23fa8c;
        case 0x23fa90u: goto label_23fa90;
        case 0x23fa94u: goto label_23fa94;
        case 0x23fa98u: goto label_23fa98;
        case 0x23fa9cu: goto label_23fa9c;
        case 0x23faa0u: goto label_23faa0;
        case 0x23faa4u: goto label_23faa4;
        case 0x23faa8u: goto label_23faa8;
        case 0x23faacu: goto label_23faac;
        case 0x23fab0u: goto label_23fab0;
        case 0x23fab4u: goto label_23fab4;
        case 0x23fab8u: goto label_23fab8;
        case 0x23fabcu: goto label_23fabc;
        case 0x23fac0u: goto label_23fac0;
        case 0x23fac4u: goto label_23fac4;
        case 0x23fac8u: goto label_23fac8;
        case 0x23faccu: goto label_23facc;
        case 0x23fad0u: goto label_23fad0;
        case 0x23fad4u: goto label_23fad4;
        case 0x23fad8u: goto label_23fad8;
        case 0x23fadcu: goto label_23fadc;
        case 0x23fae0u: goto label_23fae0;
        case 0x23fae4u: goto label_23fae4;
        case 0x23fae8u: goto label_23fae8;
        case 0x23faecu: goto label_23faec;
        case 0x23faf0u: goto label_23faf0;
        case 0x23faf4u: goto label_23faf4;
        case 0x23faf8u: goto label_23faf8;
        case 0x23fafcu: goto label_23fafc;
        case 0x23fb00u: goto label_23fb00;
        case 0x23fb04u: goto label_23fb04;
        case 0x23fb08u: goto label_23fb08;
        case 0x23fb0cu: goto label_23fb0c;
        case 0x23fb10u: goto label_23fb10;
        case 0x23fb14u: goto label_23fb14;
        case 0x23fb18u: goto label_23fb18;
        case 0x23fb1cu: goto label_23fb1c;
        case 0x23fb20u: goto label_23fb20;
        case 0x23fb24u: goto label_23fb24;
        case 0x23fb28u: goto label_23fb28;
        case 0x23fb2cu: goto label_23fb2c;
        case 0x23fb30u: goto label_23fb30;
        case 0x23fb34u: goto label_23fb34;
        case 0x23fb38u: goto label_23fb38;
        case 0x23fb3cu: goto label_23fb3c;
        case 0x23fb40u: goto label_23fb40;
        case 0x23fb44u: goto label_23fb44;
        case 0x23fb48u: goto label_23fb48;
        case 0x23fb4cu: goto label_23fb4c;
        case 0x23fb50u: goto label_23fb50;
        case 0x23fb54u: goto label_23fb54;
        case 0x23fb58u: goto label_23fb58;
        case 0x23fb5cu: goto label_23fb5c;
        case 0x23fb60u: goto label_23fb60;
        case 0x23fb64u: goto label_23fb64;
        case 0x23fb68u: goto label_23fb68;
        case 0x23fb6cu: goto label_23fb6c;
        case 0x23fb70u: goto label_23fb70;
        case 0x23fb74u: goto label_23fb74;
        case 0x23fb78u: goto label_23fb78;
        case 0x23fb7cu: goto label_23fb7c;
        case 0x23fb80u: goto label_23fb80;
        case 0x23fb84u: goto label_23fb84;
        case 0x23fb88u: goto label_23fb88;
        case 0x23fb8cu: goto label_23fb8c;
        case 0x23fb90u: goto label_23fb90;
        case 0x23fb94u: goto label_23fb94;
        case 0x23fb98u: goto label_23fb98;
        case 0x23fb9cu: goto label_23fb9c;
        case 0x23fba0u: goto label_23fba0;
        case 0x23fba4u: goto label_23fba4;
        case 0x23fba8u: goto label_23fba8;
        case 0x23fbacu: goto label_23fbac;
        case 0x23fbb0u: goto label_23fbb0;
        case 0x23fbb4u: goto label_23fbb4;
        case 0x23fbb8u: goto label_23fbb8;
        case 0x23fbbcu: goto label_23fbbc;
        case 0x23fbc0u: goto label_23fbc0;
        case 0x23fbc4u: goto label_23fbc4;
        case 0x23fbc8u: goto label_23fbc8;
        case 0x23fbccu: goto label_23fbcc;
        case 0x23fbd0u: goto label_23fbd0;
        case 0x23fbd4u: goto label_23fbd4;
        case 0x23fbd8u: goto label_23fbd8;
        case 0x23fbdcu: goto label_23fbdc;
        case 0x23fbe0u: goto label_23fbe0;
        case 0x23fbe4u: goto label_23fbe4;
        case 0x23fbe8u: goto label_23fbe8;
        case 0x23fbecu: goto label_23fbec;
        case 0x23fbf0u: goto label_23fbf0;
        case 0x23fbf4u: goto label_23fbf4;
        case 0x23fbf8u: goto label_23fbf8;
        case 0x23fbfcu: goto label_23fbfc;
        case 0x23fc00u: goto label_23fc00;
        case 0x23fc04u: goto label_23fc04;
        case 0x23fc08u: goto label_23fc08;
        case 0x23fc0cu: goto label_23fc0c;
        case 0x23fc10u: goto label_23fc10;
        case 0x23fc14u: goto label_23fc14;
        case 0x23fc18u: goto label_23fc18;
        case 0x23fc1cu: goto label_23fc1c;
        case 0x23fc20u: goto label_23fc20;
        case 0x23fc24u: goto label_23fc24;
        case 0x23fc28u: goto label_23fc28;
        case 0x23fc2cu: goto label_23fc2c;
        case 0x23fc30u: goto label_23fc30;
        case 0x23fc34u: goto label_23fc34;
        case 0x23fc38u: goto label_23fc38;
        case 0x23fc3cu: goto label_23fc3c;
        case 0x23fc40u: goto label_23fc40;
        case 0x23fc44u: goto label_23fc44;
        case 0x23fc48u: goto label_23fc48;
        case 0x23fc4cu: goto label_23fc4c;
        case 0x23fc50u: goto label_23fc50;
        case 0x23fc54u: goto label_23fc54;
        case 0x23fc58u: goto label_23fc58;
        case 0x23fc5cu: goto label_23fc5c;
        case 0x23fc60u: goto label_23fc60;
        case 0x23fc64u: goto label_23fc64;
        case 0x23fc68u: goto label_23fc68;
        case 0x23fc6cu: goto label_23fc6c;
        case 0x23fc70u: goto label_23fc70;
        case 0x23fc74u: goto label_23fc74;
        case 0x23fc78u: goto label_23fc78;
        case 0x23fc7cu: goto label_23fc7c;
        case 0x23fc80u: goto label_23fc80;
        case 0x23fc84u: goto label_23fc84;
        case 0x23fc88u: goto label_23fc88;
        case 0x23fc8cu: goto label_23fc8c;
        case 0x23fc90u: goto label_23fc90;
        case 0x23fc94u: goto label_23fc94;
        case 0x23fc98u: goto label_23fc98;
        case 0x23fc9cu: goto label_23fc9c;
        case 0x23fca0u: goto label_23fca0;
        case 0x23fca4u: goto label_23fca4;
        case 0x23fca8u: goto label_23fca8;
        case 0x23fcacu: goto label_23fcac;
        case 0x23fcb0u: goto label_23fcb0;
        case 0x23fcb4u: goto label_23fcb4;
        case 0x23fcb8u: goto label_23fcb8;
        case 0x23fcbcu: goto label_23fcbc;
        case 0x23fcc0u: goto label_23fcc0;
        case 0x23fcc4u: goto label_23fcc4;
        case 0x23fcc8u: goto label_23fcc8;
        case 0x23fcccu: goto label_23fccc;
        case 0x23fcd0u: goto label_23fcd0;
        case 0x23fcd4u: goto label_23fcd4;
        case 0x23fcd8u: goto label_23fcd8;
        case 0x23fcdcu: goto label_23fcdc;
        case 0x23fce0u: goto label_23fce0;
        case 0x23fce4u: goto label_23fce4;
        case 0x23fce8u: goto label_23fce8;
        case 0x23fcecu: goto label_23fcec;
        case 0x23fcf0u: goto label_23fcf0;
        case 0x23fcf4u: goto label_23fcf4;
        case 0x23fcf8u: goto label_23fcf8;
        case 0x23fcfcu: goto label_23fcfc;
        case 0x23fd00u: goto label_23fd00;
        case 0x23fd04u: goto label_23fd04;
        case 0x23fd08u: goto label_23fd08;
        case 0x23fd0cu: goto label_23fd0c;
        case 0x23fd10u: goto label_23fd10;
        case 0x23fd14u: goto label_23fd14;
        case 0x23fd18u: goto label_23fd18;
        case 0x23fd1cu: goto label_23fd1c;
        case 0x23fd20u: goto label_23fd20;
        case 0x23fd24u: goto label_23fd24;
        case 0x23fd28u: goto label_23fd28;
        case 0x23fd2cu: goto label_23fd2c;
        case 0x23fd30u: goto label_23fd30;
        case 0x23fd34u: goto label_23fd34;
        case 0x23fd38u: goto label_23fd38;
        case 0x23fd3cu: goto label_23fd3c;
        case 0x23fd40u: goto label_23fd40;
        case 0x23fd44u: goto label_23fd44;
        case 0x23fd48u: goto label_23fd48;
        case 0x23fd4cu: goto label_23fd4c;
        case 0x23fd50u: goto label_23fd50;
        case 0x23fd54u: goto label_23fd54;
        case 0x23fd58u: goto label_23fd58;
        case 0x23fd5cu: goto label_23fd5c;
        case 0x23fd60u: goto label_23fd60;
        case 0x23fd64u: goto label_23fd64;
        case 0x23fd68u: goto label_23fd68;
        case 0x23fd6cu: goto label_23fd6c;
        case 0x23fd70u: goto label_23fd70;
        case 0x23fd74u: goto label_23fd74;
        case 0x23fd78u: goto label_23fd78;
        case 0x23fd7cu: goto label_23fd7c;
        case 0x23fd80u: goto label_23fd80;
        case 0x23fd84u: goto label_23fd84;
        case 0x23fd88u: goto label_23fd88;
        case 0x23fd8cu: goto label_23fd8c;
        case 0x23fd90u: goto label_23fd90;
        case 0x23fd94u: goto label_23fd94;
        case 0x23fd98u: goto label_23fd98;
        case 0x23fd9cu: goto label_23fd9c;
        case 0x23fda0u: goto label_23fda0;
        case 0x23fda4u: goto label_23fda4;
        case 0x23fda8u: goto label_23fda8;
        case 0x23fdacu: goto label_23fdac;
        case 0x23fdb0u: goto label_23fdb0;
        case 0x23fdb4u: goto label_23fdb4;
        default: break;
    }

    ctx->pc = 0x23f760u;

label_23f760:
    // 0x23f760: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x23f760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_23f764:
    // 0x23f764: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x23f764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
label_23f768:
    // 0x23f768: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23f768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_23f76c:
    // 0x23f76c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23f76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_23f770:
    // 0x23f770: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23f770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_23f774:
    // 0x23f774: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23f774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23f778:
    // 0x23f778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23f778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23f77c:
    // 0x23f77c: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x23f77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
label_23f780:
    // 0x23f780: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23f780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23f784:
    // 0x23f784: 0x8c8302d0  lw          $v1, 0x2D0($a0)
    ctx->pc = 0x23f784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
label_23f788:
    // 0x23f788: 0x24723520  addiu       $s2, $v1, 0x3520
    ctx->pc = 0x23f788u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 13600));
label_23f78c:
    // 0x23f78c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23f78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23f790:
    // 0x23f790: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x23f790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_23f794:
    // 0x23f794: 0x24740880  addiu       $s4, $v1, 0x880
    ctx->pc = 0x23f794u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
label_23f798:
    // 0x23f798: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23f798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23f79c:
    // 0x23f79c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x23f79cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_23f7a0:
    // 0x23f7a0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x23f7a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_23f7a4:
    // 0x23f7a4: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x23f7a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_23f7a8:
    // 0x23f7a8: 0x1020017a  beqz        $at, . + 4 + (0x17A << 2)
label_23f7ac:
    if (ctx->pc == 0x23F7ACu) {
        ctx->pc = 0x23F7B0u;
        goto label_23f7b0;
    }
    ctx->pc = 0x23F7A8u;
    {
        const bool branch_taken_0x23f7a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f7a8) {
            ctx->pc = 0x23FD94u;
            goto label_23fd94;
        }
    }
    ctx->pc = 0x23F7B0u;
label_23f7b0:
    // 0x23f7b0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x23f7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_23f7b4:
    // 0x23f7b4: 0x24641230  addiu       $a0, $v1, 0x1230
    ctx->pc = 0x23f7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4656));
label_23f7b8:
    // 0x23f7b8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x23f7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_23f7bc:
    // 0x23f7bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23f7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23f7c0:
    // 0x23f7c0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23f7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23f7c4:
    // 0x23f7c4: 0x600008  jr          $v1
label_23f7c8:
    if (ctx->pc == 0x23F7C8u) {
        ctx->pc = 0x23F7CCu;
        goto label_23f7cc;
    }
    ctx->pc = 0x23F7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F7C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23F7CCu;
label_23f7cc:
    // 0x23f7cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23f7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23f7d0:
    // 0x23f7d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23f7d4:
    // 0x23f7d4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x23f7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_23f7d8:
    // 0x23f7d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23f7d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23f7dc:
    // 0x23f7dc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23f7e0:
    // 0x23f7e0: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x23f7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_23f7e4:
    // 0x23f7e4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23f7e8:
    // 0x23f7e8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23f7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23f7ec:
    // 0x23f7ec: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23f7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_23f7f0:
    // 0x23f7f0: 0x24060417  addiu       $a2, $zero, 0x417
    ctx->pc = 0x23f7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1047));
label_23f7f4:
    // 0x23f7f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23f7f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23f7f8:
    // 0x23f7f8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23f7f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_23f7fc:
    // 0x23f7fc: 0xc0965d0  jal         func_259740
label_23f800:
    if (ctx->pc == 0x23F800u) {
        ctx->pc = 0x23F804u;
        goto label_23f804;
    }
    ctx->pc = 0x23F7FCu;
    SET_GPR_U32(ctx, 31, 0x23F804u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23F7FCu, 0x23F804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F804u;
label_23f804:
    // 0x23f804: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23f804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23f808:
    // 0x23f808: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23f80c:
    // 0x23f80c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_23f810:
    // 0x23f810: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x23f810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_23f814:
    // 0x23f814: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23f814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23f818:
    // 0x23f818: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23f81c:
    // 0x23f81c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23f81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_23f820:
    // 0x23f820: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23f820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_23f824:
    // 0x23f824: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23f824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_23f828:
    // 0x23f828: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23f828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23f82c:
    // 0x23f82c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23f830:
    // 0x23f830: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23f830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_23f834:
    // 0x23f834: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x23f834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_23f838:
    // 0x23f838: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23f838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_23f83c:
    // 0x23f83c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23f83cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23f840:
    // 0x23f840: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23f844:
    // 0x23f844: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23f844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_23f848:
    // 0x23f848: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23f848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_23f84c:
    // 0x23f84c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23f850:
    // 0x23f850: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23f850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_23f854:
    // 0x23f854: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x23f854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_23f858:
    // 0x23f858: 0x34420018  ori         $v0, $v0, 0x18
    ctx->pc = 0x23f858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
label_23f85c:
    // 0x23f85c: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x23f85cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
label_23f860:
    // 0x23f860: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23f864:
    // 0x23f864: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x23f864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_23f868:
    // 0x23f868: 0x24500120  addiu       $s0, $v0, 0x120
    ctx->pc = 0x23f868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_23f86c:
    // 0x23f86c: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x23f86cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_23f870:
    // 0x23f870: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x23f870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_23f874:
    // 0x23f874: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x23f874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_23f878:
    // 0x23f878: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x23f878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_23f87c:
    // 0x23f87c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23f87cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_23f880:
    // 0x23f880: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23f884:
    // 0x23f884: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x23f884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_23f888:
    // 0x23f888: 0x245001b0  addiu       $s0, $v0, 0x1B0
    ctx->pc = 0x23f888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
label_23f88c:
    // 0x23f88c: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x23f88cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_23f890:
    // 0x23f890: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x23f890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_23f894:
    // 0x23f894: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x23f894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_23f898:
    // 0x23f898: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x23f898u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_23f89c:
    // 0x23f89c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23f89cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_23f8a0:
    // 0x23f8a0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23f8a4:
    // 0x23f8a4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x23f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_23f8a8:
    // 0x23f8a8: 0x245005a0  addiu       $s0, $v0, 0x5A0
    ctx->pc = 0x23f8a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
label_23f8ac:
    // 0x23f8ac: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23f8acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_23f8b0:
    // 0x23f8b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23f8b4:
    // 0x23f8b4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x23f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_23f8b8:
    // 0x23f8b8: 0x24500630  addiu       $s0, $v0, 0x630
    ctx->pc = 0x23f8b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1584));
label_23f8bc:
    // 0x23f8bc: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23f8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_23f8c0:
    // 0x23f8c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23f8c4:
    // 0x23f8c4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x23f8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_23f8c8:
    // 0x23f8c8: 0x245002d0  addiu       $s0, $v0, 0x2D0
    ctx->pc = 0x23f8c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
label_23f8cc:
    // 0x23f8cc: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x23f8ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_23f8d0:
    // 0x23f8d0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x23f8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_23f8d4:
    // 0x23f8d4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x23f8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_23f8d8:
    // 0x23f8d8: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x23f8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_23f8dc:
    // 0x23f8dc: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23f8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_23f8e0:
    // 0x23f8e0: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x23f8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_23f8e4:
    // 0x23f8e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23f8e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23f8e8:
    // 0x23f8e8: 0x0  nop
    ctx->pc = 0x23f8e8u;
    // NOP
label_23f8ec:
    // 0x23f8ec: 0xe62000a0  swc1        $f0, 0xA0($s1)
    ctx->pc = 0x23f8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
label_23f8f0:
    // 0x23f8f0: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x23f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
label_23f8f4:
    // 0x23f8f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23f8f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23f8f8:
    // 0x23f8f8: 0x0  nop
    ctx->pc = 0x23f8f8u;
    // NOP
label_23f8fc:
    // 0x23f8fc: 0xe62000a4  swc1        $f0, 0xA4($s1)
    ctx->pc = 0x23f8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 164), bits); }
label_23f900:
    // 0x23f900: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23f904:
    // 0x23f904: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x23f904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_23f908:
    // 0x23f908: 0x24500090  addiu       $s0, $v0, 0x90
    ctx->pc = 0x23f908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_23f90c:
    // 0x23f90c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23f90cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_23f910:
    // 0x23f910: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23f914:
    // 0x23f914: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x23f914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_23f918:
    // 0x23f918: 0x24500240  addiu       $s0, $v0, 0x240
    ctx->pc = 0x23f918u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
label_23f91c:
    // 0x23f91c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23f91cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_23f920:
    // 0x23f920: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23f924:
    // 0x23f924: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x23f924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_23f928:
    // 0x23f928: 0x245006c0  addiu       $s0, $v0, 0x6C0
    ctx->pc = 0x23f928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
label_23f92c:
    // 0x23f92c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23f92cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_23f930:
    // 0x23f930: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23f930u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23f934:
    // 0x23f934: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23f938:
    // 0x23f938: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x23f938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_23f93c:
    // 0x23f93c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23f93cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23f940:
    // 0x23f940: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23f944:
    // 0x23f944: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x23f944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_23f948:
    // 0x23f948: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23f948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23f94c:
    // 0x23f94c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23f950:
    // 0x23f950: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x23f950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_23f954:
    // 0x23f954: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x23f954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
label_23f958:
    // 0x23f958: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23f958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23f95c:
    // 0x23f95c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23f960:
    // 0x23f960: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23f960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_23f964:
    // 0x23f964: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x23f964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_23f968:
    // 0x23f968: 0x26430150  addiu       $v1, $s2, 0x150
    ctx->pc = 0x23f968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_23f96c:
    // 0x23f96c: 0x9462002e  lhu         $v0, 0x2E($v1)
    ctx->pc = 0x23f96cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 46)));
label_23f970:
    // 0x23f970: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x23f970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_23f974:
    // 0x23f974: 0xa462002e  sh          $v0, 0x2E($v1)
    ctx->pc = 0x23f974u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 46), (uint16_t)GPR_U32(ctx, 2));
label_23f978:
    // 0x23f978: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23f97c:
    // 0x23f97c: 0x245310b0  addiu       $s3, $v0, 0x10B0
    ctx->pc = 0x23f97cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
label_23f980:
    // 0x23f980: 0x8e6300f0  lw          $v1, 0xF0($s3)
    ctx->pc = 0x23f980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_23f984:
    // 0x23f984: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x23f984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_23f988:
    // 0x23f988: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x23f988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_23f98c:
    // 0x23f98c: 0xae6200f0  sw          $v0, 0xF0($s3)
    ctx->pc = 0x23f98cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 240), GPR_U32(ctx, 2));
label_23f990:
    // 0x23f990: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23f990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23f994:
    // 0x23f994: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23f998:
    // 0x23f998: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x23f998u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
label_23f99c:
    // 0x23f99c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23f99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23f9a0:
    // 0x23f9a0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x23f9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_23f9a4:
    // 0x23f9a4: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x23f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_23f9a8:
    // 0x23f9a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23f9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23f9ac:
    // 0x23f9ac: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x23f9acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_23f9b0:
    // 0x23f9b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23f9b4:
    // 0x23f9b4: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x23f9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_23f9b8:
    // 0x23f9b8: 0x24523b60  addiu       $s2, $v0, 0x3B60
    ctx->pc = 0x23f9b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 15200));
label_23f9bc:
    // 0x23f9bc: 0x26430150  addiu       $v1, $s2, 0x150
    ctx->pc = 0x23f9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_23f9c0:
    // 0x23f9c0: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x23f9c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_23f9c4:
    // 0x23f9c4: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x23f9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
label_23f9c8:
    // 0x23f9c8: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x23f9c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
label_23f9cc:
    // 0x23f9cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23f9d0:
    // 0x23f9d0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23f9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_23f9d4:
    // 0x23f9d4: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x23f9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_23f9d8:
    // 0x23f9d8: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x23f9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_23f9dc:
    // 0x23f9dc: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x23f9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
label_23f9e0:
    // 0x23f9e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23f9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23f9e4:
    // 0x23f9e4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_23f9e8:
    // 0x23f9e8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23f9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_23f9ec:
    // 0x23f9ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23f9ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_23f9f0:
    // 0x23f9f0: 0x2404051e  addiu       $a0, $zero, 0x51E
    ctx->pc = 0x23f9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1310));
label_23f9f4:
    // 0x23f9f4: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x23f9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_23f9f8:
    // 0x23f9f8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23f9f8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_23f9fc:
    // 0x23f9fc: 0xc067b18  jal         func_19EC60
label_23fa00:
    if (ctx->pc == 0x23FA00u) {
        ctx->pc = 0x23FA04u;
        goto label_23fa04;
    }
    ctx->pc = 0x23F9FCu;
    SET_GPR_U32(ctx, 31, 0x23FA04u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23F9FCu, 0x23FA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FA04u;
label_23fa04:
    // 0x23fa04: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_23fa08:
    // 0x23fa08: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23fa08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_23fa0c:
    // 0x23fa0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23fa0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_23fa10:
    // 0x23fa10: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fa14:
    // 0x23fa14: 0x24040517  addiu       $a0, $zero, 0x517
    ctx->pc = 0x23fa14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1303));
label_23fa18:
    // 0x23fa18: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x23fa18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_23fa1c:
    // 0x23fa1c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23fa1cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_23fa20:
    // 0x23fa20: 0xc067b18  jal         func_19EC60
label_23fa24:
    if (ctx->pc == 0x23FA24u) {
        ctx->pc = 0x23FA28u;
        goto label_23fa28;
    }
    ctx->pc = 0x23FA20u;
    SET_GPR_U32(ctx, 31, 0x23FA28u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23FA20u, 0x23FA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FA28u;
label_23fa28:
    // 0x23fa28: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23fa28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fa2c:
    // 0x23fa2c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23fa2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23fa30:
    // 0x23fa30: 0xc096b40  jal         func_25AD00
label_23fa34:
    if (ctx->pc == 0x23FA34u) {
        ctx->pc = 0x23FA38u;
        goto label_23fa38;
    }
    ctx->pc = 0x23FA30u;
    SET_GPR_U32(ctx, 31, 0x23FA38u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23FA30u, 0x23FA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FA38u;
label_23fa38:
    // 0x23fa38: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23fa38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fa3c:
    // 0x23fa3c: 0xc0974dc  jal         func_25D370
label_23fa40:
    if (ctx->pc == 0x23FA40u) {
        ctx->pc = 0x23FA44u;
        goto label_23fa44;
    }
    ctx->pc = 0x23FA3Cu;
    SET_GPR_U32(ctx, 31, 0x23FA44u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23FA3Cu, 0x23FA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FA44u;
label_23fa44:
    // 0x23fa44: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fa44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fa48:
    // 0x23fa48: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x23fa48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_23fa4c:
    // 0x23fa4c: 0x106000d1  beqz        $v1, . + 4 + (0xD1 << 2)
label_23fa50:
    if (ctx->pc == 0x23FA50u) {
        ctx->pc = 0x23FA54u;
        goto label_23fa54;
    }
    ctx->pc = 0x23FA4Cu;
    {
        const bool branch_taken_0x23fa4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fa4c) {
            ctx->pc = 0x23FD94u;
            goto label_23fd94;
        }
    }
    ctx->pc = 0x23FA54u;
label_23fa54:
    // 0x23fa54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23fa54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23fa58:
    // 0x23fa58: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fa5c:
    // 0x23fa5c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x23fa5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_23fa60:
    // 0x23fa60: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23fa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fa64:
    // 0x23fa64: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23fa64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fa68:
    // 0x23fa68: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23fa68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_23fa6c:
    // 0x23fa6c: 0x24063c17  addiu       $a2, $zero, 0x3C17
    ctx->pc = 0x23fa6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15383));
label_23fa70:
    // 0x23fa70: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23fa70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23fa74:
    // 0x23fa74: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23fa74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_23fa78:
    // 0x23fa78: 0xc0965d0  jal         func_259740
label_23fa7c:
    if (ctx->pc == 0x23FA7Cu) {
        ctx->pc = 0x23FA80u;
        goto label_23fa80;
    }
    ctx->pc = 0x23FA78u;
    SET_GPR_U32(ctx, 31, 0x23FA80u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23FA78u, 0x23FA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FA80u;
label_23fa80:
    // 0x23fa80: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23fa80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_23fa84:
    // 0x23fa84: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23fa84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_23fa88:
    // 0x23fa88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23fa88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_23fa8c:
    // 0x23fa8c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fa90:
    // 0x23fa90: 0x24040526  addiu       $a0, $zero, 0x526
    ctx->pc = 0x23fa90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1318));
label_23fa94:
    // 0x23fa94: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x23fa94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_23fa98:
    // 0x23fa98: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23fa98u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_23fa9c:
    // 0x23fa9c: 0xc067b18  jal         func_19EC60
label_23faa0:
    if (ctx->pc == 0x23FAA0u) {
        ctx->pc = 0x23FAA4u;
        goto label_23faa4;
    }
    ctx->pc = 0x23FA9Cu;
    SET_GPR_U32(ctx, 31, 0x23FAA4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23FA9Cu, 0x23FAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FAA4u;
label_23faa4:
    // 0x23faa4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23faa8:
    // 0x23faa8: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x23faa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_23faac:
    // 0x23faac: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x23faacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fab0:
    // 0x23fab0: 0xc0c7a0c  jal         func_31E830
label_23fab4:
    if (ctx->pc == 0x23FAB4u) {
        ctx->pc = 0x23FAB8u;
        goto label_23fab8;
    }
    ctx->pc = 0x23FAB0u;
    SET_GPR_U32(ctx, 31, 0x23FAB8u);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x23FAB0u, 0x23FAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FAB8u;
label_23fab8:
    // 0x23fab8: 0x100000b6  b           . + 4 + (0xB6 << 2)
label_23fabc:
    if (ctx->pc == 0x23FABCu) {
        ctx->pc = 0x23FAC0u;
        goto label_23fac0;
    }
    ctx->pc = 0x23FAB8u;
    {
        const bool branch_taken_0x23fab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fab8) {
            ctx->pc = 0x23FD94u;
            goto label_23fd94;
        }
    }
    ctx->pc = 0x23FAC0u;
label_23fac0:
    // 0x23fac0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23fac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fac4:
    // 0x23fac4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23fac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23fac8:
    // 0x23fac8: 0xc096b40  jal         func_25AD00
label_23facc:
    if (ctx->pc == 0x23FACCu) {
        ctx->pc = 0x23FAD0u;
        goto label_23fad0;
    }
    ctx->pc = 0x23FAC8u;
    SET_GPR_U32(ctx, 31, 0x23FAD0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23FAC8u, 0x23FAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FAD0u;
label_23fad0:
    // 0x23fad0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23fad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fad4:
    // 0x23fad4: 0xc0974dc  jal         func_25D370
label_23fad8:
    if (ctx->pc == 0x23FAD8u) {
        ctx->pc = 0x23FADCu;
        goto label_23fadc;
    }
    ctx->pc = 0x23FAD4u;
    SET_GPR_U32(ctx, 31, 0x23FADCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23FAD4u, 0x23FADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FADCu;
label_23fadc:
    // 0x23fadc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fae0:
    // 0x23fae0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x23fae0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_23fae4:
    // 0x23fae4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_23fae8:
    if (ctx->pc == 0x23FAE8u) {
        ctx->pc = 0x23FAECu;
        goto label_23faec;
    }
    ctx->pc = 0x23FAE4u;
    {
        const bool branch_taken_0x23fae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fae4) {
            ctx->pc = 0x23FB28u;
            goto label_23fb28;
        }
    }
    ctx->pc = 0x23FAECu;
label_23faec:
    // 0x23faec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23faecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23faf0:
    // 0x23faf0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23faf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23faf4:
    // 0x23faf4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23faf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_23faf8:
    // 0x23faf8: 0x24063c17  addiu       $a2, $zero, 0x3C17
    ctx->pc = 0x23faf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15383));
label_23fafc:
    // 0x23fafc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23fafcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23fb00:
    // 0x23fb00: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23fb00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_23fb04:
    // 0x23fb04: 0xc0965d0  jal         func_259740
label_23fb08:
    if (ctx->pc == 0x23FB08u) {
        ctx->pc = 0x23FB0Cu;
        goto label_23fb0c;
    }
    ctx->pc = 0x23FB04u;
    SET_GPR_U32(ctx, 31, 0x23FB0Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23FB04u, 0x23FB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FB0Cu;
label_23fb0c:
    // 0x23fb0c: 0xc067694  jal         func_19DA50
label_23fb10:
    if (ctx->pc == 0x23FB10u) {
        ctx->pc = 0x23FB14u;
        goto label_23fb14;
    }
    ctx->pc = 0x23FB0Cu;
    SET_GPR_U32(ctx, 31, 0x23FB14u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23FB0Cu, 0x23FB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FB14u;
label_23fb14:
    // 0x23fb14: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23fb14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23fb18:
    // 0x23fb18: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x23fb18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_23fb1c:
    // 0x23fb1c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x23fb1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_23fb20:
    // 0x23fb20: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fb24:
    // 0x23fb24: 0xa46409ee  sh          $a0, 0x9EE($v1)
    ctx->pc = 0x23fb24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2542), (uint16_t)GPR_U32(ctx, 4));
label_23fb28:
    // 0x23fb28: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fb2c:
    // 0x23fb2c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23fb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_23fb30:
    // 0x23fb30: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x23fb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23fb34:
    // 0x23fb34: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fb38:
    // 0x23fb38: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x23fb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23fb3c:
    // 0x23fb3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23fb3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_23fb40:
    // 0x23fb40: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x23fb40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_23fb44:
    // 0x23fb44: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fb48:
    // 0x23fb48: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x23fb48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
label_23fb4c:
    // 0x23fb4c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x23fb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_23fb50:
    // 0x23fb50: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23fb50u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_23fb54:
    // 0x23fb54: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x23fb54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_23fb58:
    // 0x23fb58: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
label_23fb5c:
    if (ctx->pc == 0x23FB5Cu) {
        ctx->pc = 0x23FB60u;
        goto label_23fb60;
    }
    ctx->pc = 0x23FB58u;
    {
        const bool branch_taken_0x23fb58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23fb58) {
            ctx->pc = 0x23FC30u;
            goto label_23fc30;
        }
    }
    ctx->pc = 0x23FB60u;
label_23fb60:
    // 0x23fb60: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fb64:
    // 0x23fb64: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x23fb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_23fb68:
    // 0x23fb68: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x23fb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23fb6c:
    // 0x23fb6c: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x23fb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
label_23fb70:
    // 0x23fb70: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x23fb70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_23fb74:
    // 0x23fb74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23fb74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23fb78:
    // 0x23fb78: 0x0  nop
    ctx->pc = 0x23fb78u;
    // NOP
label_23fb7c:
    // 0x23fb7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23fb7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_23fb80:
    // 0x23fb80: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x23fb80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_23fb84:
    // 0x23fb84: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fb88:
    // 0x23fb88: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23fb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_23fb8c:
    // 0x23fb8c: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x23fb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23fb90:
    // 0x23fb90: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x23fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_23fb94:
    // 0x23fb94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23fb94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23fb98:
    // 0x23fb98: 0x0  nop
    ctx->pc = 0x23fb98u;
    // NOP
label_23fb9c:
    // 0x23fb9c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23fb9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23fba0:
    // 0x23fba0: 0x0  nop
    ctx->pc = 0x23fba0u;
    // NOP
label_23fba4:
    // 0x23fba4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_23fba8:
    if (ctx->pc == 0x23FBA8u) {
        ctx->pc = 0x23FBACu;
        goto label_23fbac;
    }
    ctx->pc = 0x23FBA4u;
    {
        const bool branch_taken_0x23fba4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23fba4) {
            ctx->pc = 0x23FBBCu;
            goto label_23fbbc;
        }
    }
    ctx->pc = 0x23FBACu;
label_23fbac:
    // 0x23fbac: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23fbacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fbb0:
    // 0x23fbb0: 0x8483127e  lh          $v1, 0x127E($a0)
    ctx->pc = 0x23fbb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
label_23fbb4:
    // 0x23fbb4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x23fbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_23fbb8:
    // 0x23fbb8: 0xa483127e  sh          $v1, 0x127E($a0)
    ctx->pc = 0x23fbb8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 3));
label_23fbbc:
    // 0x23fbbc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23fbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fbc0:
    // 0x23fbc0: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x23fbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23fbc4:
    // 0x23fbc4: 0x3c033c0e  lui         $v1, 0x3C0E
    ctx->pc = 0x23fbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15374 << 16));
label_23fbc8:
    // 0x23fbc8: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x23fbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
label_23fbcc:
    // 0x23fbcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23fbccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23fbd0:
    // 0x23fbd0: 0x0  nop
    ctx->pc = 0x23fbd0u;
    // NOP
label_23fbd4:
    // 0x23fbd4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23fbd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_23fbd8:
    // 0x23fbd8: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x23fbd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
label_23fbdc:
    // 0x23fbdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23fbdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23fbe0:
    // 0x23fbe0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fbe4:
    // 0x23fbe4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23fbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_23fbe8:
    // 0x23fbe8: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x23fbe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_23fbec:
    // 0x23fbec: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x23fbecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_23fbf0:
    // 0x23fbf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23fbf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23fbf4:
    // 0x23fbf4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fbf8:
    // 0x23fbf8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_23fbfc:
    // 0x23fbfc: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x23fbfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_23fc00:
    // 0x23fc00: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x23fc00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
label_23fc04:
    // 0x23fc04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23fc04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23fc08:
    // 0x23fc08: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fc0c:
    // 0x23fc0c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23fc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_23fc10:
    // 0x23fc10: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x23fc10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_23fc14:
    // 0x23fc14: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x23fc14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
label_23fc18:
    // 0x23fc18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23fc18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23fc1c:
    // 0x23fc1c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fc20:
    // 0x23fc20: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23fc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_23fc24:
    // 0x23fc24: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x23fc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_23fc28:
    // 0x23fc28: 0x10000034  b           . + 4 + (0x34 << 2)
label_23fc2c:
    if (ctx->pc == 0x23FC2Cu) {
        ctx->pc = 0x23FC30u;
        goto label_23fc30;
    }
    ctx->pc = 0x23FC28u;
    {
        const bool branch_taken_0x23fc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fc28) {
            ctx->pc = 0x23FCFCu;
            goto label_23fcfc;
        }
    }
    ctx->pc = 0x23FC30u;
label_23fc30:
    // 0x23fc30: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fc34:
    // 0x23fc34: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x23fc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_23fc38:
    // 0x23fc38: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x23fc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23fc3c:
    // 0x23fc3c: 0x3c033da3  lui         $v1, 0x3DA3
    ctx->pc = 0x23fc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15779 << 16));
label_23fc40:
    // 0x23fc40: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x23fc40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_23fc44:
    // 0x23fc44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23fc44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23fc48:
    // 0x23fc48: 0x0  nop
    ctx->pc = 0x23fc48u;
    // NOP
label_23fc4c:
    // 0x23fc4c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23fc4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_23fc50:
    // 0x23fc50: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x23fc50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_23fc54:
    // 0x23fc54: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fc58:
    // 0x23fc58: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23fc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_23fc5c:
    // 0x23fc5c: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x23fc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23fc60:
    // 0x23fc60: 0x3c03c080  lui         $v1, 0xC080
    ctx->pc = 0x23fc60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49280 << 16));
label_23fc64:
    // 0x23fc64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23fc64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23fc68:
    // 0x23fc68: 0x0  nop
    ctx->pc = 0x23fc68u;
    // NOP
label_23fc6c:
    // 0x23fc6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23fc6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23fc70:
    // 0x23fc70: 0x0  nop
    ctx->pc = 0x23fc70u;
    // NOP
label_23fc74:
    // 0x23fc74: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_23fc78:
    if (ctx->pc == 0x23FC78u) {
        ctx->pc = 0x23FC7Cu;
        goto label_23fc7c;
    }
    ctx->pc = 0x23FC74u;
    {
        const bool branch_taken_0x23fc74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23fc74) {
            ctx->pc = 0x23FC90u;
            goto label_23fc90;
        }
    }
    ctx->pc = 0x23FC7Cu;
label_23fc7c:
    // 0x23fc7c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x23fc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fc80:
    // 0x23fc80: 0x84a4127e  lh          $a0, 0x127E($a1)
    ctx->pc = 0x23fc80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
label_23fc84:
    // 0x23fc84: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x23fc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_23fc88:
    // 0x23fc88: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x23fc88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_23fc8c:
    // 0x23fc8c: 0xa4a3127e  sh          $v1, 0x127E($a1)
    ctx->pc = 0x23fc8cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 3));
label_23fc90:
    // 0x23fc90: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23fc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fc94:
    // 0x23fc94: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x23fc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23fc98:
    // 0x23fc98: 0x3c033c8e  lui         $v1, 0x3C8E
    ctx->pc = 0x23fc98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15502 << 16));
label_23fc9c:
    // 0x23fc9c: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x23fc9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
label_23fca0:
    // 0x23fca0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23fca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23fca4:
    // 0x23fca4: 0x0  nop
    ctx->pc = 0x23fca4u;
    // NOP
label_23fca8:
    // 0x23fca8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23fca8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_23fcac:
    // 0x23fcac: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x23fcacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
label_23fcb0:
    // 0x23fcb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23fcb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23fcb4:
    // 0x23fcb4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fcb8:
    // 0x23fcb8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23fcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_23fcbc:
    // 0x23fcbc: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x23fcbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_23fcc0:
    // 0x23fcc0: 0x3c03c1a4  lui         $v1, 0xC1A4
    ctx->pc = 0x23fcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49572 << 16));
label_23fcc4:
    // 0x23fcc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23fcc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23fcc8:
    // 0x23fcc8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fccc:
    // 0x23fccc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23fcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_23fcd0:
    // 0x23fcd0: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x23fcd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_23fcd4:
    // 0x23fcd4: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x23fcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
label_23fcd8:
    // 0x23fcd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23fcd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23fcdc:
    // 0x23fcdc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fce0:
    // 0x23fce0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23fce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_23fce4:
    // 0x23fce4: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x23fce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_23fce8:
    // 0x23fce8: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x23fce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
label_23fcec:
    // 0x23fcec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23fcecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23fcf0:
    // 0x23fcf0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fcf4:
    // 0x23fcf4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23fcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_23fcf8:
    // 0x23fcf8: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x23fcf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_23fcfc:
    // 0x23fcfc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fd00:
    // 0x23fd00: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x23fd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23fd04:
    // 0x23fd04: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x23fd04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_23fd08:
    // 0x23fd08: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x23fd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23fd0c:
    // 0x23fd0c: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x23fd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
label_23fd10:
    // 0x23fd10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23fd10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23fd14:
    // 0x23fd14: 0x0  nop
    ctx->pc = 0x23fd14u;
    // NOP
label_23fd18:
    // 0x23fd18: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23fd18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_23fd1c:
    // 0x23fd1c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x23fd1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23fd20:
    // 0x23fd20: 0x0  nop
    ctx->pc = 0x23fd20u;
    // NOP
label_23fd24:
    // 0x23fd24: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_23fd28:
    if (ctx->pc == 0x23FD28u) {
        ctx->pc = 0x23FD2Cu;
        goto label_23fd2c;
    }
    ctx->pc = 0x23FD24u;
    {
        const bool branch_taken_0x23fd24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23fd24) {
            ctx->pc = 0x23FD94u;
            goto label_23fd94;
        }
    }
    ctx->pc = 0x23FD2Cu;
label_23fd2c:
    // 0x23fd2c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x23fd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23fd30:
    // 0x23fd30: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fd34:
    // 0x23fd34: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x23fd34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_23fd38:
    // 0x23fd38: 0x2404012c  addiu       $a0, $zero, 0x12C
    ctx->pc = 0x23fd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_23fd3c:
    // 0x23fd3c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fd40:
    // 0x23fd40: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x23fd40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_23fd44:
    // 0x23fd44: 0x10000013  b           . + 4 + (0x13 << 2)
label_23fd48:
    if (ctx->pc == 0x23FD48u) {
        ctx->pc = 0x23FD4Cu;
        goto label_23fd4c;
    }
    ctx->pc = 0x23FD44u;
    {
        const bool branch_taken_0x23fd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fd44) {
            ctx->pc = 0x23FD94u;
            goto label_23fd94;
        }
    }
    ctx->pc = 0x23FD4Cu;
label_23fd4c:
    // 0x23fd4c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x23fd4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_23fd50:
    // 0x23fd50: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x23fd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23fd54:
    // 0x23fd54: 0x3c0346ea  lui         $v1, 0x46EA
    ctx->pc = 0x23fd54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18154 << 16));
label_23fd58:
    // 0x23fd58: 0x34636000  ori         $v1, $v1, 0x6000
    ctx->pc = 0x23fd58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
label_23fd5c:
    // 0x23fd5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23fd5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23fd60:
    // 0x23fd60: 0x0  nop
    ctx->pc = 0x23fd60u;
    // NOP
label_23fd64:
    // 0x23fd64: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23fd64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_23fd68:
    // 0x23fd68: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fd6c:
    // 0x23fd6c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x23fd6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_23fd70:
    // 0x23fd70: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23fd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fd74:
    // 0x23fd74: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x23fd74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_23fd78:
    // 0x23fd78: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x23fd78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23fd7c:
    // 0x23fd7c: 0xa4921278  sh          $s2, 0x1278($a0)
    ctx->pc = 0x23fd7cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 18));
label_23fd80:
    // 0x23fd80: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_23fd84:
    if (ctx->pc == 0x23FD84u) {
        ctx->pc = 0x23FD88u;
        goto label_23fd88;
    }
    ctx->pc = 0x23FD80u;
    {
        const bool branch_taken_0x23fd80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23fd80) {
            ctx->pc = 0x23FD94u;
            goto label_23fd94;
        }
    }
    ctx->pc = 0x23FD88u;
label_23fd88:
    // 0x23fd88: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x23fd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_23fd8c:
    // 0x23fd8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23fd90:
    // 0x23fd90: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x23fd90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_23fd94:
    // 0x23fd94: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x23fd94u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_23fd98:
    // 0x23fd98: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23fd98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23fd9c:
    // 0x23fd9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23fd9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23fda0:
    // 0x23fda0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23fda0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23fda4:
    // 0x23fda4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23fda4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23fda8:
    // 0x23fda8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23fda8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23fdac:
    // 0x23fdac: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x23fdacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_23fdb0:
    // 0x23fdb0: 0x3e00008  jr          $ra
label_23fdb4:
    if (ctx->pc == 0x23FDB4u) {
        ctx->pc = 0x23FDB8u;
        goto label_fallthrough_0x23fdb0;
    }
    ctx->pc = 0x23FDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FDB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23fdb0:
    ctx->pc = 0x23FDB8u;
}
