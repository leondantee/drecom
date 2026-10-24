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

// Function: Set_effect_em05_denki00
// Address: 0x2ed510 - 0x2edafc
void Set_effect_em05_denki00_0x2ed510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_em05_denki00_0x2ed510");
#endif

    switch (ctx->pc) {
        case 0x2ed510u: goto label_2ed510;
        case 0x2ed514u: goto label_2ed514;
        case 0x2ed518u: goto label_2ed518;
        case 0x2ed51cu: goto label_2ed51c;
        case 0x2ed520u: goto label_2ed520;
        case 0x2ed524u: goto label_2ed524;
        case 0x2ed528u: goto label_2ed528;
        case 0x2ed52cu: goto label_2ed52c;
        case 0x2ed530u: goto label_2ed530;
        case 0x2ed534u: goto label_2ed534;
        case 0x2ed538u: goto label_2ed538;
        case 0x2ed53cu: goto label_2ed53c;
        case 0x2ed540u: goto label_2ed540;
        case 0x2ed544u: goto label_2ed544;
        case 0x2ed548u: goto label_2ed548;
        case 0x2ed54cu: goto label_2ed54c;
        case 0x2ed550u: goto label_2ed550;
        case 0x2ed554u: goto label_2ed554;
        case 0x2ed558u: goto label_2ed558;
        case 0x2ed55cu: goto label_2ed55c;
        case 0x2ed560u: goto label_2ed560;
        case 0x2ed564u: goto label_2ed564;
        case 0x2ed568u: goto label_2ed568;
        case 0x2ed56cu: goto label_2ed56c;
        case 0x2ed570u: goto label_2ed570;
        case 0x2ed574u: goto label_2ed574;
        case 0x2ed578u: goto label_2ed578;
        case 0x2ed57cu: goto label_2ed57c;
        case 0x2ed580u: goto label_2ed580;
        case 0x2ed584u: goto label_2ed584;
        case 0x2ed588u: goto label_2ed588;
        case 0x2ed58cu: goto label_2ed58c;
        case 0x2ed590u: goto label_2ed590;
        case 0x2ed594u: goto label_2ed594;
        case 0x2ed598u: goto label_2ed598;
        case 0x2ed59cu: goto label_2ed59c;
        case 0x2ed5a0u: goto label_2ed5a0;
        case 0x2ed5a4u: goto label_2ed5a4;
        case 0x2ed5a8u: goto label_2ed5a8;
        case 0x2ed5acu: goto label_2ed5ac;
        case 0x2ed5b0u: goto label_2ed5b0;
        case 0x2ed5b4u: goto label_2ed5b4;
        case 0x2ed5b8u: goto label_2ed5b8;
        case 0x2ed5bcu: goto label_2ed5bc;
        case 0x2ed5c0u: goto label_2ed5c0;
        case 0x2ed5c4u: goto label_2ed5c4;
        case 0x2ed5c8u: goto label_2ed5c8;
        case 0x2ed5ccu: goto label_2ed5cc;
        case 0x2ed5d0u: goto label_2ed5d0;
        case 0x2ed5d4u: goto label_2ed5d4;
        case 0x2ed5d8u: goto label_2ed5d8;
        case 0x2ed5dcu: goto label_2ed5dc;
        case 0x2ed5e0u: goto label_2ed5e0;
        case 0x2ed5e4u: goto label_2ed5e4;
        case 0x2ed5e8u: goto label_2ed5e8;
        case 0x2ed5ecu: goto label_2ed5ec;
        case 0x2ed5f0u: goto label_2ed5f0;
        case 0x2ed5f4u: goto label_2ed5f4;
        case 0x2ed5f8u: goto label_2ed5f8;
        case 0x2ed5fcu: goto label_2ed5fc;
        case 0x2ed600u: goto label_2ed600;
        case 0x2ed604u: goto label_2ed604;
        case 0x2ed608u: goto label_2ed608;
        case 0x2ed60cu: goto label_2ed60c;
        case 0x2ed610u: goto label_2ed610;
        case 0x2ed614u: goto label_2ed614;
        case 0x2ed618u: goto label_2ed618;
        case 0x2ed61cu: goto label_2ed61c;
        case 0x2ed620u: goto label_2ed620;
        case 0x2ed624u: goto label_2ed624;
        case 0x2ed628u: goto label_2ed628;
        case 0x2ed62cu: goto label_2ed62c;
        case 0x2ed630u: goto label_2ed630;
        case 0x2ed634u: goto label_2ed634;
        case 0x2ed638u: goto label_2ed638;
        case 0x2ed63cu: goto label_2ed63c;
        case 0x2ed640u: goto label_2ed640;
        case 0x2ed644u: goto label_2ed644;
        case 0x2ed648u: goto label_2ed648;
        case 0x2ed64cu: goto label_2ed64c;
        case 0x2ed650u: goto label_2ed650;
        case 0x2ed654u: goto label_2ed654;
        case 0x2ed658u: goto label_2ed658;
        case 0x2ed65cu: goto label_2ed65c;
        case 0x2ed660u: goto label_2ed660;
        case 0x2ed664u: goto label_2ed664;
        case 0x2ed668u: goto label_2ed668;
        case 0x2ed66cu: goto label_2ed66c;
        case 0x2ed670u: goto label_2ed670;
        case 0x2ed674u: goto label_2ed674;
        case 0x2ed678u: goto label_2ed678;
        case 0x2ed67cu: goto label_2ed67c;
        case 0x2ed680u: goto label_2ed680;
        case 0x2ed684u: goto label_2ed684;
        case 0x2ed688u: goto label_2ed688;
        case 0x2ed68cu: goto label_2ed68c;
        case 0x2ed690u: goto label_2ed690;
        case 0x2ed694u: goto label_2ed694;
        case 0x2ed698u: goto label_2ed698;
        case 0x2ed69cu: goto label_2ed69c;
        case 0x2ed6a0u: goto label_2ed6a0;
        case 0x2ed6a4u: goto label_2ed6a4;
        case 0x2ed6a8u: goto label_2ed6a8;
        case 0x2ed6acu: goto label_2ed6ac;
        case 0x2ed6b0u: goto label_2ed6b0;
        case 0x2ed6b4u: goto label_2ed6b4;
        case 0x2ed6b8u: goto label_2ed6b8;
        case 0x2ed6bcu: goto label_2ed6bc;
        case 0x2ed6c0u: goto label_2ed6c0;
        case 0x2ed6c4u: goto label_2ed6c4;
        case 0x2ed6c8u: goto label_2ed6c8;
        case 0x2ed6ccu: goto label_2ed6cc;
        case 0x2ed6d0u: goto label_2ed6d0;
        case 0x2ed6d4u: goto label_2ed6d4;
        case 0x2ed6d8u: goto label_2ed6d8;
        case 0x2ed6dcu: goto label_2ed6dc;
        case 0x2ed6e0u: goto label_2ed6e0;
        case 0x2ed6e4u: goto label_2ed6e4;
        case 0x2ed6e8u: goto label_2ed6e8;
        case 0x2ed6ecu: goto label_2ed6ec;
        case 0x2ed6f0u: goto label_2ed6f0;
        case 0x2ed6f4u: goto label_2ed6f4;
        case 0x2ed6f8u: goto label_2ed6f8;
        case 0x2ed6fcu: goto label_2ed6fc;
        case 0x2ed700u: goto label_2ed700;
        case 0x2ed704u: goto label_2ed704;
        case 0x2ed708u: goto label_2ed708;
        case 0x2ed70cu: goto label_2ed70c;
        case 0x2ed710u: goto label_2ed710;
        case 0x2ed714u: goto label_2ed714;
        case 0x2ed718u: goto label_2ed718;
        case 0x2ed71cu: goto label_2ed71c;
        case 0x2ed720u: goto label_2ed720;
        case 0x2ed724u: goto label_2ed724;
        case 0x2ed728u: goto label_2ed728;
        case 0x2ed72cu: goto label_2ed72c;
        case 0x2ed730u: goto label_2ed730;
        case 0x2ed734u: goto label_2ed734;
        case 0x2ed738u: goto label_2ed738;
        case 0x2ed73cu: goto label_2ed73c;
        case 0x2ed740u: goto label_2ed740;
        case 0x2ed744u: goto label_2ed744;
        case 0x2ed748u: goto label_2ed748;
        case 0x2ed74cu: goto label_2ed74c;
        case 0x2ed750u: goto label_2ed750;
        case 0x2ed754u: goto label_2ed754;
        case 0x2ed758u: goto label_2ed758;
        case 0x2ed75cu: goto label_2ed75c;
        case 0x2ed760u: goto label_2ed760;
        case 0x2ed764u: goto label_2ed764;
        case 0x2ed768u: goto label_2ed768;
        case 0x2ed76cu: goto label_2ed76c;
        case 0x2ed770u: goto label_2ed770;
        case 0x2ed774u: goto label_2ed774;
        case 0x2ed778u: goto label_2ed778;
        case 0x2ed77cu: goto label_2ed77c;
        case 0x2ed780u: goto label_2ed780;
        case 0x2ed784u: goto label_2ed784;
        case 0x2ed788u: goto label_2ed788;
        case 0x2ed78cu: goto label_2ed78c;
        case 0x2ed790u: goto label_2ed790;
        case 0x2ed794u: goto label_2ed794;
        case 0x2ed798u: goto label_2ed798;
        case 0x2ed79cu: goto label_2ed79c;
        case 0x2ed7a0u: goto label_2ed7a0;
        case 0x2ed7a4u: goto label_2ed7a4;
        case 0x2ed7a8u: goto label_2ed7a8;
        case 0x2ed7acu: goto label_2ed7ac;
        case 0x2ed7b0u: goto label_2ed7b0;
        case 0x2ed7b4u: goto label_2ed7b4;
        case 0x2ed7b8u: goto label_2ed7b8;
        case 0x2ed7bcu: goto label_2ed7bc;
        case 0x2ed7c0u: goto label_2ed7c0;
        case 0x2ed7c4u: goto label_2ed7c4;
        case 0x2ed7c8u: goto label_2ed7c8;
        case 0x2ed7ccu: goto label_2ed7cc;
        case 0x2ed7d0u: goto label_2ed7d0;
        case 0x2ed7d4u: goto label_2ed7d4;
        case 0x2ed7d8u: goto label_2ed7d8;
        case 0x2ed7dcu: goto label_2ed7dc;
        case 0x2ed7e0u: goto label_2ed7e0;
        case 0x2ed7e4u: goto label_2ed7e4;
        case 0x2ed7e8u: goto label_2ed7e8;
        case 0x2ed7ecu: goto label_2ed7ec;
        case 0x2ed7f0u: goto label_2ed7f0;
        case 0x2ed7f4u: goto label_2ed7f4;
        case 0x2ed7f8u: goto label_2ed7f8;
        case 0x2ed7fcu: goto label_2ed7fc;
        case 0x2ed800u: goto label_2ed800;
        case 0x2ed804u: goto label_2ed804;
        case 0x2ed808u: goto label_2ed808;
        case 0x2ed80cu: goto label_2ed80c;
        case 0x2ed810u: goto label_2ed810;
        case 0x2ed814u: goto label_2ed814;
        case 0x2ed818u: goto label_2ed818;
        case 0x2ed81cu: goto label_2ed81c;
        case 0x2ed820u: goto label_2ed820;
        case 0x2ed824u: goto label_2ed824;
        case 0x2ed828u: goto label_2ed828;
        case 0x2ed82cu: goto label_2ed82c;
        case 0x2ed830u: goto label_2ed830;
        case 0x2ed834u: goto label_2ed834;
        case 0x2ed838u: goto label_2ed838;
        case 0x2ed83cu: goto label_2ed83c;
        case 0x2ed840u: goto label_2ed840;
        case 0x2ed844u: goto label_2ed844;
        case 0x2ed848u: goto label_2ed848;
        case 0x2ed84cu: goto label_2ed84c;
        case 0x2ed850u: goto label_2ed850;
        case 0x2ed854u: goto label_2ed854;
        case 0x2ed858u: goto label_2ed858;
        case 0x2ed85cu: goto label_2ed85c;
        case 0x2ed860u: goto label_2ed860;
        case 0x2ed864u: goto label_2ed864;
        case 0x2ed868u: goto label_2ed868;
        case 0x2ed86cu: goto label_2ed86c;
        case 0x2ed870u: goto label_2ed870;
        case 0x2ed874u: goto label_2ed874;
        case 0x2ed878u: goto label_2ed878;
        case 0x2ed87cu: goto label_2ed87c;
        case 0x2ed880u: goto label_2ed880;
        case 0x2ed884u: goto label_2ed884;
        case 0x2ed888u: goto label_2ed888;
        case 0x2ed88cu: goto label_2ed88c;
        case 0x2ed890u: goto label_2ed890;
        case 0x2ed894u: goto label_2ed894;
        case 0x2ed898u: goto label_2ed898;
        case 0x2ed89cu: goto label_2ed89c;
        case 0x2ed8a0u: goto label_2ed8a0;
        case 0x2ed8a4u: goto label_2ed8a4;
        case 0x2ed8a8u: goto label_2ed8a8;
        case 0x2ed8acu: goto label_2ed8ac;
        case 0x2ed8b0u: goto label_2ed8b0;
        case 0x2ed8b4u: goto label_2ed8b4;
        case 0x2ed8b8u: goto label_2ed8b8;
        case 0x2ed8bcu: goto label_2ed8bc;
        case 0x2ed8c0u: goto label_2ed8c0;
        case 0x2ed8c4u: goto label_2ed8c4;
        case 0x2ed8c8u: goto label_2ed8c8;
        case 0x2ed8ccu: goto label_2ed8cc;
        case 0x2ed8d0u: goto label_2ed8d0;
        case 0x2ed8d4u: goto label_2ed8d4;
        case 0x2ed8d8u: goto label_2ed8d8;
        case 0x2ed8dcu: goto label_2ed8dc;
        case 0x2ed8e0u: goto label_2ed8e0;
        case 0x2ed8e4u: goto label_2ed8e4;
        case 0x2ed8e8u: goto label_2ed8e8;
        case 0x2ed8ecu: goto label_2ed8ec;
        case 0x2ed8f0u: goto label_2ed8f0;
        case 0x2ed8f4u: goto label_2ed8f4;
        case 0x2ed8f8u: goto label_2ed8f8;
        case 0x2ed8fcu: goto label_2ed8fc;
        case 0x2ed900u: goto label_2ed900;
        case 0x2ed904u: goto label_2ed904;
        case 0x2ed908u: goto label_2ed908;
        case 0x2ed90cu: goto label_2ed90c;
        case 0x2ed910u: goto label_2ed910;
        case 0x2ed914u: goto label_2ed914;
        case 0x2ed918u: goto label_2ed918;
        case 0x2ed91cu: goto label_2ed91c;
        case 0x2ed920u: goto label_2ed920;
        case 0x2ed924u: goto label_2ed924;
        case 0x2ed928u: goto label_2ed928;
        case 0x2ed92cu: goto label_2ed92c;
        case 0x2ed930u: goto label_2ed930;
        case 0x2ed934u: goto label_2ed934;
        case 0x2ed938u: goto label_2ed938;
        case 0x2ed93cu: goto label_2ed93c;
        case 0x2ed940u: goto label_2ed940;
        case 0x2ed944u: goto label_2ed944;
        case 0x2ed948u: goto label_2ed948;
        case 0x2ed94cu: goto label_2ed94c;
        case 0x2ed950u: goto label_2ed950;
        case 0x2ed954u: goto label_2ed954;
        case 0x2ed958u: goto label_2ed958;
        case 0x2ed95cu: goto label_2ed95c;
        case 0x2ed960u: goto label_2ed960;
        case 0x2ed964u: goto label_2ed964;
        case 0x2ed968u: goto label_2ed968;
        case 0x2ed96cu: goto label_2ed96c;
        case 0x2ed970u: goto label_2ed970;
        case 0x2ed974u: goto label_2ed974;
        case 0x2ed978u: goto label_2ed978;
        case 0x2ed97cu: goto label_2ed97c;
        case 0x2ed980u: goto label_2ed980;
        case 0x2ed984u: goto label_2ed984;
        case 0x2ed988u: goto label_2ed988;
        case 0x2ed98cu: goto label_2ed98c;
        case 0x2ed990u: goto label_2ed990;
        case 0x2ed994u: goto label_2ed994;
        case 0x2ed998u: goto label_2ed998;
        case 0x2ed99cu: goto label_2ed99c;
        case 0x2ed9a0u: goto label_2ed9a0;
        case 0x2ed9a4u: goto label_2ed9a4;
        case 0x2ed9a8u: goto label_2ed9a8;
        case 0x2ed9acu: goto label_2ed9ac;
        case 0x2ed9b0u: goto label_2ed9b0;
        case 0x2ed9b4u: goto label_2ed9b4;
        case 0x2ed9b8u: goto label_2ed9b8;
        case 0x2ed9bcu: goto label_2ed9bc;
        case 0x2ed9c0u: goto label_2ed9c0;
        case 0x2ed9c4u: goto label_2ed9c4;
        case 0x2ed9c8u: goto label_2ed9c8;
        case 0x2ed9ccu: goto label_2ed9cc;
        case 0x2ed9d0u: goto label_2ed9d0;
        case 0x2ed9d4u: goto label_2ed9d4;
        case 0x2ed9d8u: goto label_2ed9d8;
        case 0x2ed9dcu: goto label_2ed9dc;
        case 0x2ed9e0u: goto label_2ed9e0;
        case 0x2ed9e4u: goto label_2ed9e4;
        case 0x2ed9e8u: goto label_2ed9e8;
        case 0x2ed9ecu: goto label_2ed9ec;
        case 0x2ed9f0u: goto label_2ed9f0;
        case 0x2ed9f4u: goto label_2ed9f4;
        case 0x2ed9f8u: goto label_2ed9f8;
        case 0x2ed9fcu: goto label_2ed9fc;
        case 0x2eda00u: goto label_2eda00;
        case 0x2eda04u: goto label_2eda04;
        case 0x2eda08u: goto label_2eda08;
        case 0x2eda0cu: goto label_2eda0c;
        case 0x2eda10u: goto label_2eda10;
        case 0x2eda14u: goto label_2eda14;
        case 0x2eda18u: goto label_2eda18;
        case 0x2eda1cu: goto label_2eda1c;
        case 0x2eda20u: goto label_2eda20;
        case 0x2eda24u: goto label_2eda24;
        case 0x2eda28u: goto label_2eda28;
        case 0x2eda2cu: goto label_2eda2c;
        case 0x2eda30u: goto label_2eda30;
        case 0x2eda34u: goto label_2eda34;
        case 0x2eda38u: goto label_2eda38;
        case 0x2eda3cu: goto label_2eda3c;
        case 0x2eda40u: goto label_2eda40;
        case 0x2eda44u: goto label_2eda44;
        case 0x2eda48u: goto label_2eda48;
        case 0x2eda4cu: goto label_2eda4c;
        case 0x2eda50u: goto label_2eda50;
        case 0x2eda54u: goto label_2eda54;
        case 0x2eda58u: goto label_2eda58;
        case 0x2eda5cu: goto label_2eda5c;
        case 0x2eda60u: goto label_2eda60;
        case 0x2eda64u: goto label_2eda64;
        case 0x2eda68u: goto label_2eda68;
        case 0x2eda6cu: goto label_2eda6c;
        case 0x2eda70u: goto label_2eda70;
        case 0x2eda74u: goto label_2eda74;
        case 0x2eda78u: goto label_2eda78;
        case 0x2eda7cu: goto label_2eda7c;
        case 0x2eda80u: goto label_2eda80;
        case 0x2eda84u: goto label_2eda84;
        case 0x2eda88u: goto label_2eda88;
        case 0x2eda8cu: goto label_2eda8c;
        case 0x2eda90u: goto label_2eda90;
        case 0x2eda94u: goto label_2eda94;
        case 0x2eda98u: goto label_2eda98;
        case 0x2eda9cu: goto label_2eda9c;
        case 0x2edaa0u: goto label_2edaa0;
        case 0x2edaa4u: goto label_2edaa4;
        case 0x2edaa8u: goto label_2edaa8;
        case 0x2edaacu: goto label_2edaac;
        case 0x2edab0u: goto label_2edab0;
        case 0x2edab4u: goto label_2edab4;
        case 0x2edab8u: goto label_2edab8;
        case 0x2edabcu: goto label_2edabc;
        case 0x2edac0u: goto label_2edac0;
        case 0x2edac4u: goto label_2edac4;
        case 0x2edac8u: goto label_2edac8;
        case 0x2edaccu: goto label_2edacc;
        case 0x2edad0u: goto label_2edad0;
        case 0x2edad4u: goto label_2edad4;
        case 0x2edad8u: goto label_2edad8;
        case 0x2edadcu: goto label_2edadc;
        case 0x2edae0u: goto label_2edae0;
        case 0x2edae4u: goto label_2edae4;
        case 0x2edae8u: goto label_2edae8;
        case 0x2edaecu: goto label_2edaec;
        case 0x2edaf0u: goto label_2edaf0;
        case 0x2edaf4u: goto label_2edaf4;
        case 0x2edaf8u: goto label_2edaf8;
        default: break;
    }

    ctx->pc = 0x2ed510u;

label_2ed510:
    // 0x2ed510: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2ed510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_2ed514:
    // 0x2ed514: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x2ed514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
label_2ed518:
    // 0x2ed518: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2ed518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2ed51c:
    // 0x2ed51c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ed51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2ed520:
    // 0x2ed520: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ed520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2ed524:
    // 0x2ed524: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ed524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2ed528:
    // 0x2ed528: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ed528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2ed52c:
    // 0x2ed52c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ed52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ed530:
    // 0x2ed530: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ed530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ed534:
    // 0x2ed534: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x2ed534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
label_2ed538:
    // 0x2ed538: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x2ed538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
label_2ed53c:
    // 0x2ed53c: 0xafa600a8  sw          $a2, 0xA8($sp)
    ctx->pc = 0x2ed53cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 6));
label_2ed540:
    // 0x2ed540: 0xafa700b0  sw          $a3, 0xB0($sp)
    ctx->pc = 0x2ed540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 7));
label_2ed544:
    // 0x2ed544: 0xafa800b8  sw          $t0, 0xB8($sp)
    ctx->pc = 0x2ed544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 8));
label_2ed548:
    // 0x2ed548: 0xafa900c0  sw          $t1, 0xC0($sp)
    ctx->pc = 0x2ed548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 9));
label_2ed54c:
    // 0x2ed54c: 0xe7ac00c8  swc1        $f12, 0xC8($sp)
    ctx->pc = 0x2ed54cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2ed550:
    // 0x2ed550: 0xe7ad00d0  swc1        $f13, 0xD0($sp)
    ctx->pc = 0x2ed550u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2ed554:
    // 0x2ed554: 0xe7ae00d8  swc1        $f14, 0xD8($sp)
    ctx->pc = 0x2ed554u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_2ed558:
    // 0x2ed558: 0xafaa00e0  sw          $t2, 0xE0($sp)
    ctx->pc = 0x2ed558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 10));
label_2ed55c:
    // 0x2ed55c: 0xa3ab00e8  sb          $t3, 0xE8($sp)
    ctx->pc = 0x2ed55cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 232), (uint8_t)GPR_U32(ctx, 11));
label_2ed560:
    // 0x2ed560: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x2ed560u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2ed564:
    // 0x2ed564: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2ed564u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2ed568:
    // 0x2ed568: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2ed568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2ed56c:
    // 0x2ed56c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2ed570:
    if (ctx->pc == 0x2ED570u) {
        ctx->pc = 0x2ED574u;
        goto label_2ed574;
    }
    ctx->pc = 0x2ED56Cu;
    {
        const bool branch_taken_0x2ed56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed56c) {
            ctx->pc = 0x2ED59Cu;
            goto label_2ed59c;
        }
    }
    ctx->pc = 0x2ED574u;
label_2ed574:
    // 0x2ed574: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2ed574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2ed578:
    // 0x2ed578: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2ed57c:
    if (ctx->pc == 0x2ED57Cu) {
        ctx->pc = 0x2ED580u;
        goto label_2ed580;
    }
    ctx->pc = 0x2ED578u;
    {
        const bool branch_taken_0x2ed578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed578) {
            ctx->pc = 0x2ED58Cu;
            goto label_2ed58c;
        }
    }
    ctx->pc = 0x2ED580u;
label_2ed580:
    // 0x2ed580: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2ed580u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2ed584:
    // 0x2ed584: 0x1000000e  b           . + 4 + (0xE << 2)
label_2ed588:
    if (ctx->pc == 0x2ED588u) {
        ctx->pc = 0x2ED58Cu;
        goto label_2ed58c;
    }
    ctx->pc = 0x2ED584u;
    {
        const bool branch_taken_0x2ed584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed584) {
            ctx->pc = 0x2ED5C0u;
            goto label_2ed5c0;
        }
    }
    ctx->pc = 0x2ED58Cu;
label_2ed58c:
    // 0x2ed58c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2ed58cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ed590:
    // 0x2ed590: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2ed590u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ed594:
    // 0x2ed594: 0x1000000a  b           . + 4 + (0xA << 2)
label_2ed598:
    if (ctx->pc == 0x2ED598u) {
        ctx->pc = 0x2ED59Cu;
        goto label_2ed59c;
    }
    ctx->pc = 0x2ED594u;
    {
        const bool branch_taken_0x2ed594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed594) {
            ctx->pc = 0x2ED5C0u;
            goto label_2ed5c0;
        }
    }
    ctx->pc = 0x2ED59Cu;
label_2ed59c:
    // 0x2ed59c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2ed59cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ed5a0:
    // 0x2ed5a0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2ed5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2ed5a4:
    // 0x2ed5a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2ed5a8:
    if (ctx->pc == 0x2ED5A8u) {
        ctx->pc = 0x2ED5ACu;
        goto label_2ed5ac;
    }
    ctx->pc = 0x2ED5A4u;
    {
        const bool branch_taken_0x2ed5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed5a4) {
            ctx->pc = 0x2ED5B8u;
            goto label_2ed5b8;
        }
    }
    ctx->pc = 0x2ED5ACu;
label_2ed5ac:
    // 0x2ed5ac: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x2ed5acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ed5b0:
    // 0x2ed5b0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ed5b4:
    if (ctx->pc == 0x2ED5B4u) {
        ctx->pc = 0x2ED5B8u;
        goto label_2ed5b8;
    }
    ctx->pc = 0x2ED5B0u;
    {
        const bool branch_taken_0x2ed5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed5b0) {
            ctx->pc = 0x2ED5C0u;
            goto label_2ed5c0;
        }
    }
    ctx->pc = 0x2ED5B8u;
label_2ed5b8:
    // 0x2ed5b8: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x2ed5b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ed5bc:
    // 0x2ed5bc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2ed5bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ed5c0:
    // 0x2ed5c0: 0x93a200e8  lbu         $v0, 0xE8($sp)
    ctx->pc = 0x2ed5c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 232)));
label_2ed5c4:
    // 0x2ed5c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ed5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ed5c8:
    // 0x2ed5c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2ed5cc:
    if (ctx->pc == 0x2ED5CCu) {
        ctx->pc = 0x2ED5D0u;
        goto label_2ed5d0;
    }
    ctx->pc = 0x2ED5C8u;
    {
        const bool branch_taken_0x2ed5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed5c8) {
            ctx->pc = 0x2ED5E4u;
            goto label_2ed5e4;
        }
    }
    ctx->pc = 0x2ED5D0u;
label_2ed5d0:
    // 0x2ed5d0: 0x93a200e8  lbu         $v0, 0xE8($sp)
    ctx->pc = 0x2ed5d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 232)));
label_2ed5d4:
    // 0x2ed5d4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2ed5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ed5d8:
    // 0x2ed5d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ed5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ed5dc:
    // 0x2ed5dc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2ed5e0:
    if (ctx->pc == 0x2ED5E0u) {
        ctx->pc = 0x2ED5E4u;
        goto label_2ed5e4;
    }
    ctx->pc = 0x2ED5DCu;
    {
        const bool branch_taken_0x2ed5dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ed5dc) {
            ctx->pc = 0x2ED5F0u;
            goto label_2ed5f0;
        }
    }
    ctx->pc = 0x2ED5E4u;
label_2ed5e4:
    // 0x2ed5e4: 0x24150009  addiu       $s5, $zero, 0x9
    ctx->pc = 0x2ed5e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2ed5e8:
    // 0x2ed5e8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ed5ec:
    if (ctx->pc == 0x2ED5ECu) {
        ctx->pc = 0x2ED5F0u;
        goto label_2ed5f0;
    }
    ctx->pc = 0x2ED5E8u;
    {
        const bool branch_taken_0x2ed5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed5e8) {
            ctx->pc = 0x2ED5F4u;
            goto label_2ed5f4;
        }
    }
    ctx->pc = 0x2ED5F0u;
label_2ed5f0:
    // 0x2ed5f0: 0x2415000f  addiu       $s5, $zero, 0xF
    ctx->pc = 0x2ed5f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2ed5f4:
    // 0x2ed5f4: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x2ed5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_2ed5f8:
    // 0x2ed5f8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ed5f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2ed5fc:
    // 0x2ed5fc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2ed5fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_2ed600:
    // 0x2ed600: 0x32420003  andi        $v0, $s2, 0x3
    ctx->pc = 0x2ed600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
label_2ed604:
    // 0x2ed604: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ed604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ed608:
    // 0x2ed608: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ed608u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2ed60c:
    // 0x2ed60c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2ed60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_2ed610:
    // 0x2ed610: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ed610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ed614:
    // 0x2ed614: 0x3c023c00  lui         $v0, 0x3C00
    ctx->pc = 0x2ed614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15360 << 16));
label_2ed618:
    // 0x2ed618: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ed618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ed61c:
    // 0x2ed61c: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x2ed61cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_2ed620:
    // 0x2ed620: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x2ed620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_2ed624:
    // 0x2ed624: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2ed624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2ed628:
    // 0x2ed628: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ed628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ed62c:
    // 0x2ed62c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2ed62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2ed630:
    // 0x2ed630: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ed630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ed634:
    // 0x2ed634: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x2ed634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ed638:
    // 0x2ed638: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2ed638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2ed63c:
    // 0x2ed63c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ed63cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2ed640:
    // 0x2ed640: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ed640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2ed644:
    // 0x2ed644: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ed644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2ed648:
    // 0x2ed648: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ed648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2ed64c:
    // 0x2ed64c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ed64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2ed650:
    // 0x2ed650: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ed650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2ed654:
    // 0x2ed654: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2ed654u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_2ed658:
    // 0x2ed658: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2ed658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2ed65c:
    // 0x2ed65c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ed65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2ed660:
    // 0x2ed660: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ed660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2ed664:
    // 0x2ed664: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ed664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2ed668:
    // 0x2ed668: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ed668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2ed66c:
    // 0x2ed66c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ed66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2ed670:
    // 0x2ed670: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ed670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2ed674:
    // 0x2ed674: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2ed674u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2ed678:
    // 0x2ed678: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2ed678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2ed67c:
    // 0x2ed67c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ed67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2ed680:
    // 0x2ed680: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ed680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2ed684:
    // 0x2ed684: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ed684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2ed688:
    // 0x2ed688: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ed688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2ed68c:
    // 0x2ed68c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ed68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2ed690:
    // 0x2ed690: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ed690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2ed694:
    // 0x2ed694: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2ed694u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
label_2ed698:
    // 0x2ed698: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2ed698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2ed69c:
    // 0x2ed69c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ed69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2ed6a0:
    // 0x2ed6a0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ed6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2ed6a4:
    // 0x2ed6a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ed6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2ed6a8:
    // 0x2ed6a8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ed6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2ed6ac:
    // 0x2ed6ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ed6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2ed6b0:
    // 0x2ed6b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ed6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2ed6b4:
    // 0x2ed6b4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2ed6b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_2ed6b8:
    // 0x2ed6b8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2ed6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2ed6bc:
    // 0x2ed6bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ed6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ed6c0:
    // 0x2ed6c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ed6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ed6c4:
    // 0x2ed6c4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ed6c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2ed6c8:
    // 0x2ed6c8: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x2ed6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
label_2ed6cc:
    // 0x2ed6cc: 0x3c02000e  lui         $v0, 0xE
    ctx->pc = 0x2ed6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14 << 16));
label_2ed6d0:
    // 0x2ed6d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ed6d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ed6d4:
    // 0x2ed6d4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2ed6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2ed6d8:
    // 0x2ed6d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ed6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ed6dc:
    // 0x2ed6dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ed6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ed6e0:
    // 0x2ed6e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ed6e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2ed6e4:
    // 0x2ed6e4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2ed6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ed6e8:
    // 0x2ed6e8: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2ed6e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_2ed6ec:
    // 0x2ed6ec: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2ed6ecu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_2ed6f0:
    // 0x2ed6f0: 0xc0634c8  jal         func_18D320
label_2ed6f4:
    if (ctx->pc == 0x2ED6F4u) {
        ctx->pc = 0x2ED6F8u;
        goto label_2ed6f8;
    }
    ctx->pc = 0x2ED6F0u;
    SET_GPR_U32(ctx, 31, 0x2ED6F8u);
    ctx->pc = 0x18D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D320u, 0x2ED6F0u, 0x2ED6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED6F8u;
label_2ed6f8:
    // 0x2ed6f8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2ed6f8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2ed6fc:
    // 0x2ed6fc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ed6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_2ed700:
    // 0x2ed700: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ed700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
label_2ed704:
    // 0x2ed704: 0x1203004e  beq         $s0, $v1, . + 4 + (0x4E << 2)
label_2ed708:
    if (ctx->pc == 0x2ED708u) {
        ctx->pc = 0x2ED70Cu;
        goto label_2ed70c;
    }
    ctx->pc = 0x2ED704u;
    {
        const bool branch_taken_0x2ed704 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ed704) {
            ctx->pc = 0x2ED840u;
            goto label_2ed840;
        }
    }
    ctx->pc = 0x2ED70Cu;
label_2ed70c:
    // 0x2ed70c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ed70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ed710:
    // 0x2ed710: 0xa20202a8  sb          $v0, 0x2A8($s0)
    ctx->pc = 0x2ed710u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 2));
label_2ed714:
    // 0x2ed714: 0x93a200e8  lbu         $v0, 0xE8($sp)
    ctx->pc = 0x2ed714u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 232)));
label_2ed718:
    // 0x2ed718: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ed718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ed71c:
    // 0x2ed71c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2ed720:
    if (ctx->pc == 0x2ED720u) {
        ctx->pc = 0x2ED724u;
        goto label_2ed724;
    }
    ctx->pc = 0x2ED71Cu;
    {
        const bool branch_taken_0x2ed71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed71c) {
            ctx->pc = 0x2ED728u;
            goto label_2ed728;
        }
    }
    ctx->pc = 0x2ED724u;
label_2ed724:
    // 0x2ed724: 0xa20002aa  sb          $zero, 0x2AA($s0)
    ctx->pc = 0x2ed724u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 682), (uint8_t)GPR_U32(ctx, 0));
label_2ed728:
    // 0x2ed728: 0x93a200e8  lbu         $v0, 0xE8($sp)
    ctx->pc = 0x2ed728u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 232)));
label_2ed72c:
    // 0x2ed72c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2ed72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ed730:
    // 0x2ed730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ed730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ed734:
    // 0x2ed734: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_2ed738:
    if (ctx->pc == 0x2ED738u) {
        ctx->pc = 0x2ED73Cu;
        goto label_2ed73c;
    }
    ctx->pc = 0x2ED734u;
    {
        const bool branch_taken_0x2ed734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ed734) {
            ctx->pc = 0x2ED744u;
            goto label_2ed744;
        }
    }
    ctx->pc = 0x2ED73Cu;
label_2ed73c:
    // 0x2ed73c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ed73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ed740:
    // 0x2ed740: 0xa20202aa  sb          $v0, 0x2AA($s0)
    ctx->pc = 0x2ed740u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 682), (uint8_t)GPR_U32(ctx, 2));
label_2ed744:
    // 0x2ed744: 0x93a200e8  lbu         $v0, 0xE8($sp)
    ctx->pc = 0x2ed744u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 232)));
label_2ed748:
    // 0x2ed748: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2ed748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ed74c:
    // 0x2ed74c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ed74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ed750:
    // 0x2ed750: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_2ed754:
    if (ctx->pc == 0x2ED754u) {
        ctx->pc = 0x2ED758u;
        goto label_2ed758;
    }
    ctx->pc = 0x2ED750u;
    {
        const bool branch_taken_0x2ed750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ed750) {
            ctx->pc = 0x2ED760u;
            goto label_2ed760;
        }
    }
    ctx->pc = 0x2ED758u;
label_2ed758:
    // 0x2ed758: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ed758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ed75c:
    // 0x2ed75c: 0xa20202aa  sb          $v0, 0x2AA($s0)
    ctx->pc = 0x2ed75cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 682), (uint8_t)GPR_U32(ctx, 2));
label_2ed760:
    // 0x2ed760: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ed760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2ed764:
    // 0x2ed764: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ed768:
    // 0x2ed768: 0x0  nop
    ctx->pc = 0x2ed768u;
    // NOP
label_2ed76c:
    // 0x2ed76c: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2ed76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
label_2ed770:
    // 0x2ed770: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ed770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2ed774:
    // 0x2ed774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ed778:
    // 0x2ed778: 0x0  nop
    ctx->pc = 0x2ed778u;
    // NOP
label_2ed77c:
    // 0x2ed77c: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2ed77cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
label_2ed780:
    // 0x2ed780: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ed780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2ed784:
    // 0x2ed784: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ed788:
    // 0x2ed788: 0x0  nop
    ctx->pc = 0x2ed788u;
    // NOP
label_2ed78c:
    // 0x2ed78c: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2ed78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
label_2ed790:
    // 0x2ed790: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2ed790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_2ed794:
    // 0x2ed794: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ed798:
    // 0x2ed798: 0x0  nop
    ctx->pc = 0x2ed798u;
    // NOP
label_2ed79c:
    // 0x2ed79c: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x2ed79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
label_2ed7a0:
    // 0x2ed7a0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ed7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2ed7a4:
    // 0x2ed7a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ed7a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ed7a8:
    // 0x2ed7a8: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x2ed7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ed7ac:
    // 0x2ed7ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ed7acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2ed7b0:
    // 0x2ed7b0: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x2ed7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
label_2ed7b4:
    // 0x2ed7b4: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2ed7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ed7b8:
    // 0x2ed7b8: 0xe6000270  swc1        $f0, 0x270($s0)
    ctx->pc = 0x2ed7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
label_2ed7bc:
    // 0x2ed7bc: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2ed7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ed7c0:
    // 0x2ed7c0: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x2ed7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
label_2ed7c4:
    // 0x2ed7c4: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2ed7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ed7c8:
    // 0x2ed7c8: 0xe6000278  swc1        $f0, 0x278($s0)
    ctx->pc = 0x2ed7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
label_2ed7cc:
    // 0x2ed7cc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2ed7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2ed7d0:
    // 0x2ed7d0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2ed7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ed7d4:
    // 0x2ed7d4: 0xe6000280  swc1        $f0, 0x280($s0)
    ctx->pc = 0x2ed7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
label_2ed7d8:
    // 0x2ed7d8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2ed7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2ed7dc:
    // 0x2ed7dc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2ed7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ed7e0:
    // 0x2ed7e0: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x2ed7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
label_2ed7e4:
    // 0x2ed7e4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2ed7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2ed7e8:
    // 0x2ed7e8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2ed7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ed7ec:
    // 0x2ed7ec: 0xe6000288  swc1        $f0, 0x288($s0)
    ctx->pc = 0x2ed7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
label_2ed7f0:
    // 0x2ed7f0: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x2ed7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ed7f4:
    // 0x2ed7f4: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x2ed7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
label_2ed7f8:
    // 0x2ed7f8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2ed7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2ed7fc:
    // 0x2ed7fc: 0xa202034f  sb          $v0, 0x34F($s0)
    ctx->pc = 0x2ed7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 2));
label_2ed800:
    // 0x2ed800: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2ed800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_2ed804:
    // 0x2ed804: 0xae020364  sw          $v0, 0x364($s0)
    ctx->pc = 0x2ed804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 2));
label_2ed808:
    // 0x2ed808: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2ed808u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2ed80c:
    // 0x2ed80c: 0x8e020350  lw          $v0, 0x350($s0)
    ctx->pc = 0x2ed80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
label_2ed810:
    // 0x2ed810: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2ed810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2ed814:
    // 0x2ed814: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2ed814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_2ed818:
    // 0x2ed818: 0x24426e10  addiu       $v0, $v0, 0x6E10
    ctx->pc = 0x2ed818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28176));
label_2ed81c:
    // 0x2ed81c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ed81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ed820:
    // 0x2ed820: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ed820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ed824:
    // 0x2ed824: 0x40f809  jalr        $v0
label_2ed828:
    if (ctx->pc == 0x2ED828u) {
        ctx->pc = 0x2ED82Cu;
        goto label_2ed82c;
    }
    ctx->pc = 0x2ED824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ED82Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED824u, 0x2ED82Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ED82Cu;
label_2ed82c:
    // 0x2ed82c: 0x8e030ab8  lw          $v1, 0xAB8($s0)
    ctx->pc = 0x2ed82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2744)));
label_2ed830:
    // 0x2ed830: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ed830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2ed834:
    // 0x2ed834: 0xae030ab8  sw          $v1, 0xAB8($s0)
    ctx->pc = 0x2ed834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2744), GPR_U32(ctx, 3));
label_2ed838:
    // 0x2ed838: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ed83c:
    if (ctx->pc == 0x2ED83Cu) {
        ctx->pc = 0x2ED840u;
        goto label_2ed840;
    }
    ctx->pc = 0x2ED838u;
    {
        const bool branch_taken_0x2ed838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed838) {
            ctx->pc = 0x2ED848u;
            goto label_2ed848;
        }
    }
    ctx->pc = 0x2ED840u;
label_2ed840:
    // 0x2ed840: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_2ed844:
    if (ctx->pc == 0x2ED844u) {
        ctx->pc = 0x2ED848u;
        goto label_2ed848;
    }
    ctx->pc = 0x2ED840u;
    {
        const bool branch_taken_0x2ed840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed840) {
            ctx->pc = 0x2EDAD0u;
            goto label_2edad0;
        }
    }
    ctx->pc = 0x2ED848u;
label_2ed848:
    // 0x2ed848: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2ed848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2ed84c:
    // 0x2ed84c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2ed84cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2ed850:
    // 0x2ed850: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x2ed850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2ed854:
    // 0x2ed854: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2ed854u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_2ed858:
    // 0x2ed858: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2ed858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2ed85c:
    // 0x2ed85c: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_2ed860:
    if (ctx->pc == 0x2ED860u) {
        ctx->pc = 0x2ED864u;
        goto label_2ed864;
    }
    ctx->pc = 0x2ED85Cu;
    {
        const bool branch_taken_0x2ed85c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed85c) {
            ctx->pc = 0x2ED898u;
            goto label_2ed898;
        }
    }
    ctx->pc = 0x2ED864u;
label_2ed864:
    // 0x2ed864: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ed864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2ed868:
    // 0x2ed868: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ed868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ed86c:
    // 0x2ed86c: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x2ed86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
label_2ed870:
    // 0x2ed870: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2ed870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2ed874:
    // 0x2ed874: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2ed874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
label_2ed878:
    // 0x2ed878: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2ed878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
label_2ed87c:
    // 0x2ed87c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ed87cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2ed880:
    // 0x2ed880: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2ed880u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2ed884:
    // 0x2ed884: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ed884u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2ed888:
    // 0x2ed888: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2ed888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2ed88c:
    // 0x2ed88c: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x2ed88cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_2ed890:
    // 0x2ed890: 0xc086488  jal         func_219220
label_2ed894:
    if (ctx->pc == 0x2ED894u) {
        ctx->pc = 0x2ED898u;
        goto label_2ed898;
    }
    ctx->pc = 0x2ED890u;
    SET_GPR_U32(ctx, 31, 0x2ED898u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x2ED890u, 0x2ED898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED898u;
label_2ed898:
    // 0x2ed898: 0x7200b628  paddub      $s6, $s0, $zero
    ctx->pc = 0x2ed898u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2ed89c:
    // 0x2ed89c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2ed89cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2ed8a0:
    // 0x2ed8a0: 0x10000087  b           . + 4 + (0x87 << 2)
label_2ed8a4:
    if (ctx->pc == 0x2ED8A4u) {
        ctx->pc = 0x2ED8A8u;
        goto label_2ed8a8;
    }
    ctx->pc = 0x2ED8A0u;
    {
        const bool branch_taken_0x2ed8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed8a0) {
            ctx->pc = 0x2EDAC0u;
            goto label_2edac0;
        }
    }
    ctx->pc = 0x2ED8A8u;
label_2ed8a8:
    // 0x2ed8a8: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x2ed8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_2ed8ac:
    // 0x2ed8ac: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ed8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2ed8b0:
    // 0x2ed8b0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2ed8b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_2ed8b4:
    // 0x2ed8b4: 0x32420003  andi        $v0, $s2, 0x3
    ctx->pc = 0x2ed8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
label_2ed8b8:
    // 0x2ed8b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ed8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ed8bc:
    // 0x2ed8bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ed8bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2ed8c0:
    // 0x2ed8c0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2ed8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_2ed8c4:
    // 0x2ed8c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ed8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ed8c8:
    // 0x2ed8c8: 0x3c023c00  lui         $v0, 0x3C00
    ctx->pc = 0x2ed8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15360 << 16));
label_2ed8cc:
    // 0x2ed8cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ed8ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ed8d0:
    // 0x2ed8d0: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x2ed8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_2ed8d4:
    // 0x2ed8d4: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x2ed8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_2ed8d8:
    // 0x2ed8d8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2ed8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2ed8dc:
    // 0x2ed8dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ed8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ed8e0:
    // 0x2ed8e0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2ed8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2ed8e4:
    // 0x2ed8e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ed8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ed8e8:
    // 0x2ed8e8: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x2ed8e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ed8ec:
    // 0x2ed8ec: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2ed8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2ed8f0:
    // 0x2ed8f0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ed8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2ed8f4:
    // 0x2ed8f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ed8f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2ed8f8:
    // 0x2ed8f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ed8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2ed8fc:
    // 0x2ed8fc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ed8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2ed900:
    // 0x2ed900: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ed900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2ed904:
    // 0x2ed904: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ed904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2ed908:
    // 0x2ed908: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2ed908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_2ed90c:
    // 0x2ed90c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2ed90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2ed910:
    // 0x2ed910: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ed910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2ed914:
    // 0x2ed914: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ed914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2ed918:
    // 0x2ed918: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ed918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2ed91c:
    // 0x2ed91c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ed91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2ed920:
    // 0x2ed920: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ed920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2ed924:
    // 0x2ed924: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ed924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2ed928:
    // 0x2ed928: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2ed928u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2ed92c:
    // 0x2ed92c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2ed92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2ed930:
    // 0x2ed930: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ed930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2ed934:
    // 0x2ed934: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ed934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2ed938:
    // 0x2ed938: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ed938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2ed93c:
    // 0x2ed93c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ed93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2ed940:
    // 0x2ed940: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ed940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2ed944:
    // 0x2ed944: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ed944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2ed948:
    // 0x2ed948: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2ed948u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
label_2ed94c:
    // 0x2ed94c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2ed94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2ed950:
    // 0x2ed950: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ed950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2ed954:
    // 0x2ed954: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ed954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2ed958:
    // 0x2ed958: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ed958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2ed95c:
    // 0x2ed95c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ed95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2ed960:
    // 0x2ed960: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ed960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2ed964:
    // 0x2ed964: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ed964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2ed968:
    // 0x2ed968: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2ed968u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_2ed96c:
    // 0x2ed96c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2ed96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2ed970:
    // 0x2ed970: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ed970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ed974:
    // 0x2ed974: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ed974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ed978:
    // 0x2ed978: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ed978u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2ed97c:
    // 0x2ed97c: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x2ed97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
label_2ed980:
    // 0x2ed980: 0x3c02000e  lui         $v0, 0xE
    ctx->pc = 0x2ed980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14 << 16));
label_2ed984:
    // 0x2ed984: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ed984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ed988:
    // 0x2ed988: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2ed988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2ed98c:
    // 0x2ed98c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ed98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ed990:
    // 0x2ed990: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ed990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ed994:
    // 0x2ed994: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ed994u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2ed998:
    // 0x2ed998: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2ed998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ed99c:
    // 0x2ed99c: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2ed99cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_2ed9a0:
    // 0x2ed9a0: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2ed9a0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_2ed9a4:
    // 0x2ed9a4: 0xc0634c8  jal         func_18D320
label_2ed9a8:
    if (ctx->pc == 0x2ED9A8u) {
        ctx->pc = 0x2ED9ACu;
        goto label_2ed9ac;
    }
    ctx->pc = 0x2ED9A4u;
    SET_GPR_U32(ctx, 31, 0x2ED9ACu);
    ctx->pc = 0x18D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D320u, 0x2ED9A4u, 0x2ED9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED9ACu;
label_2ed9ac:
    // 0x2ed9ac: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2ed9acu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2ed9b0:
    // 0x2ed9b0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ed9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_2ed9b4:
    // 0x2ed9b4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ed9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
label_2ed9b8:
    // 0x2ed9b8: 0x12030045  beq         $s0, $v1, . + 4 + (0x45 << 2)
label_2ed9bc:
    if (ctx->pc == 0x2ED9BCu) {
        ctx->pc = 0x2ED9C0u;
        goto label_2ed9c0;
    }
    ctx->pc = 0x2ED9B8u;
    {
        const bool branch_taken_0x2ed9b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ed9b8) {
            ctx->pc = 0x2EDAD0u;
            goto label_2edad0;
        }
    }
    ctx->pc = 0x2ED9C0u;
label_2ed9c0:
    // 0x2ed9c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ed9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ed9c4:
    // 0x2ed9c4: 0xa20202a8  sb          $v0, 0x2A8($s0)
    ctx->pc = 0x2ed9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 2));
label_2ed9c8:
    // 0x2ed9c8: 0x26040140  addiu       $a0, $s0, 0x140
    ctx->pc = 0x2ed9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
label_2ed9cc:
    // 0x2ed9cc: 0x26c50140  addiu       $a1, $s6, 0x140
    ctx->pc = 0x2ed9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 320));
label_2ed9d0:
    // 0x2ed9d0: 0x24060130  addiu       $a2, $zero, 0x130
    ctx->pc = 0x2ed9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
label_2ed9d4:
    // 0x2ed9d4: 0xc0462a6  jal         func_118A98
label_2ed9d8:
    if (ctx->pc == 0x2ED9D8u) {
        ctx->pc = 0x2ED9DCu;
        goto label_2ed9dc;
    }
    ctx->pc = 0x2ED9D4u;
    SET_GPR_U32(ctx, 31, 0x2ED9DCu);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x2ED9DCu;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2ED9DCu) { return; }
    ctx->pc = 0x2ED9DCu;
label_2ed9dc:
    // 0x2ed9dc: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ed9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
label_2ed9e0:
    // 0x2ed9e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ed9e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ed9e4:
    // 0x2ed9e4: 0x0  nop
    ctx->pc = 0x2ed9e4u;
    // NOP
label_2ed9e8:
    // 0x2ed9e8: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2ed9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
label_2ed9ec:
    // 0x2ed9ec: 0x3c0342d8  lui         $v1, 0x42D8
    ctx->pc = 0x2ed9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17112 << 16));
label_2ed9f0:
    // 0x2ed9f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ed9f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ed9f4:
    // 0x2ed9f4: 0x0  nop
    ctx->pc = 0x2ed9f4u;
    // NOP
label_2ed9f8:
    // 0x2ed9f8: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2ed9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
label_2ed9fc:
    // 0x2ed9fc: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ed9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
label_2eda00:
    // 0x2eda00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eda00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2eda04:
    // 0x2eda04: 0x0  nop
    ctx->pc = 0x2eda04u;
    // NOP
label_2eda08:
    // 0x2eda08: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2eda08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
label_2eda0c:
    // 0x2eda0c: 0x3c034268  lui         $v1, 0x4268
    ctx->pc = 0x2eda0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17000 << 16));
label_2eda10:
    // 0x2eda10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eda10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2eda14:
    // 0x2eda14: 0x0  nop
    ctx->pc = 0x2eda14u;
    // NOP
label_2eda18:
    // 0x2eda18: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x2eda18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
label_2eda1c:
    // 0x2eda1c: 0x3c033ff3  lui         $v1, 0x3FF3
    ctx->pc = 0x2eda1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16371 << 16));
label_2eda20:
    // 0x2eda20: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2eda20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
label_2eda24:
    // 0x2eda24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2eda24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2eda28:
    // 0x2eda28: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x2eda28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2eda2c:
    // 0x2eda2c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2eda2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2eda30:
    // 0x2eda30: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x2eda30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
label_2eda34:
    // 0x2eda34: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2eda34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_2eda38:
    // 0x2eda38: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2eda38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2eda3c:
    // 0x2eda3c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2eda3cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2eda40:
    // 0x2eda40: 0x0  nop
    ctx->pc = 0x2eda40u;
    // NOP
label_2eda44:
    // 0x2eda44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2eda44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2eda48:
    // 0x2eda48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eda48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2eda4c:
    // 0x2eda4c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2eda4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2eda50:
    // 0x2eda50: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x2eda50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
label_2eda54:
    // 0x2eda54: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2eda54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2eda58:
    // 0x2eda58: 0xe6000270  swc1        $f0, 0x270($s0)
    ctx->pc = 0x2eda58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
label_2eda5c:
    // 0x2eda5c: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2eda5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2eda60:
    // 0x2eda60: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x2eda60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
label_2eda64:
    // 0x2eda64: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2eda64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2eda68:
    // 0x2eda68: 0xe6000278  swc1        $f0, 0x278($s0)
    ctx->pc = 0x2eda68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
label_2eda6c:
    // 0x2eda6c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2eda6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2eda70:
    // 0x2eda70: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2eda70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2eda74:
    // 0x2eda74: 0xe6000280  swc1        $f0, 0x280($s0)
    ctx->pc = 0x2eda74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
label_2eda78:
    // 0x2eda78: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2eda78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2eda7c:
    // 0x2eda7c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2eda7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2eda80:
    // 0x2eda80: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x2eda80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
label_2eda84:
    // 0x2eda84: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2eda84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2eda88:
    // 0x2eda88: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2eda88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2eda8c:
    // 0x2eda8c: 0xe6000288  swc1        $f0, 0x288($s0)
    ctx->pc = 0x2eda8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
label_2eda90:
    // 0x2eda90: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2eda90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_2eda94:
    // 0x2eda94: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2eda94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2eda98:
    // 0x2eda98: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2eda98u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2eda9c:
    // 0x2eda9c: 0x0  nop
    ctx->pc = 0x2eda9cu;
    // NOP
label_2edaa0:
    // 0x2edaa0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2edaa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2edaa4:
    // 0x2edaa4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2edaa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2edaa8:
    // 0x2edaa8: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x2edaa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
label_2edaac:
    // 0x2edaac: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2edaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2edab0:
    // 0x2edab0: 0xa203034f  sb          $v1, 0x34F($s0)
    ctx->pc = 0x2edab0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 3));
label_2edab4:
    // 0x2edab4: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x2edab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_2edab8:
    // 0x2edab8: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x2edab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
label_2edabc:
    // 0x2edabc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2edabcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2edac0:
    // 0x2edac0: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x2edac0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_2edac4:
    // 0x2edac4: 0x1460ff78  bnez        $v1, . + 4 + (-0x88 << 2)
label_2edac8:
    if (ctx->pc == 0x2EDAC8u) {
        ctx->pc = 0x2EDACCu;
        goto label_2edacc;
    }
    ctx->pc = 0x2EDAC4u;
    {
        const bool branch_taken_0x2edac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2edac4) {
            ctx->pc = 0x2ED8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ed8a8;
        }
    }
    ctx->pc = 0x2EDACCu;
label_2edacc:
    // 0x2edacc: 0x0  nop
    ctx->pc = 0x2edaccu;
    // NOP
label_2edad0:
    // 0x2edad0: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x2edad0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2edad4:
    // 0x2edad4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2edad4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2edad8:
    // 0x2edad8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2edad8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2edadc:
    // 0x2edadc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2edadcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2edae0:
    // 0x2edae0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2edae0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2edae4:
    // 0x2edae4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2edae4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2edae8:
    // 0x2edae8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2edae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2edaec:
    // 0x2edaec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2edaecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2edaf0:
    // 0x2edaf0: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x2edaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2edaf4:
    // 0x2edaf4: 0x3e00008  jr          $ra
label_2edaf8:
    if (ctx->pc == 0x2EDAF8u) {
        ctx->pc = 0x2EDAFCu;
        goto label_fallthrough_0x2edaf4;
    }
    ctx->pc = 0x2EDAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDAF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2edaf4:
    ctx->pc = 0x2EDAFCu;
}
