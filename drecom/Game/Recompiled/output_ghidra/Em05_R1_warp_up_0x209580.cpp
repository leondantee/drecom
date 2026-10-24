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

// Function: Em05_R1_warp_up
// Address: 0x209580 - 0x209cb4
void Em05_R1_warp_up_0x209580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_R1_warp_up_0x209580");
#endif

    switch (ctx->pc) {
        case 0x209580u: goto label_209580;
        case 0x209584u: goto label_209584;
        case 0x209588u: goto label_209588;
        case 0x20958cu: goto label_20958c;
        case 0x209590u: goto label_209590;
        case 0x209594u: goto label_209594;
        case 0x209598u: goto label_209598;
        case 0x20959cu: goto label_20959c;
        case 0x2095a0u: goto label_2095a0;
        case 0x2095a4u: goto label_2095a4;
        case 0x2095a8u: goto label_2095a8;
        case 0x2095acu: goto label_2095ac;
        case 0x2095b0u: goto label_2095b0;
        case 0x2095b4u: goto label_2095b4;
        case 0x2095b8u: goto label_2095b8;
        case 0x2095bcu: goto label_2095bc;
        case 0x2095c0u: goto label_2095c0;
        case 0x2095c4u: goto label_2095c4;
        case 0x2095c8u: goto label_2095c8;
        case 0x2095ccu: goto label_2095cc;
        case 0x2095d0u: goto label_2095d0;
        case 0x2095d4u: goto label_2095d4;
        case 0x2095d8u: goto label_2095d8;
        case 0x2095dcu: goto label_2095dc;
        case 0x2095e0u: goto label_2095e0;
        case 0x2095e4u: goto label_2095e4;
        case 0x2095e8u: goto label_2095e8;
        case 0x2095ecu: goto label_2095ec;
        case 0x2095f0u: goto label_2095f0;
        case 0x2095f4u: goto label_2095f4;
        case 0x2095f8u: goto label_2095f8;
        case 0x2095fcu: goto label_2095fc;
        case 0x209600u: goto label_209600;
        case 0x209604u: goto label_209604;
        case 0x209608u: goto label_209608;
        case 0x20960cu: goto label_20960c;
        case 0x209610u: goto label_209610;
        case 0x209614u: goto label_209614;
        case 0x209618u: goto label_209618;
        case 0x20961cu: goto label_20961c;
        case 0x209620u: goto label_209620;
        case 0x209624u: goto label_209624;
        case 0x209628u: goto label_209628;
        case 0x20962cu: goto label_20962c;
        case 0x209630u: goto label_209630;
        case 0x209634u: goto label_209634;
        case 0x209638u: goto label_209638;
        case 0x20963cu: goto label_20963c;
        case 0x209640u: goto label_209640;
        case 0x209644u: goto label_209644;
        case 0x209648u: goto label_209648;
        case 0x20964cu: goto label_20964c;
        case 0x209650u: goto label_209650;
        case 0x209654u: goto label_209654;
        case 0x209658u: goto label_209658;
        case 0x20965cu: goto label_20965c;
        case 0x209660u: goto label_209660;
        case 0x209664u: goto label_209664;
        case 0x209668u: goto label_209668;
        case 0x20966cu: goto label_20966c;
        case 0x209670u: goto label_209670;
        case 0x209674u: goto label_209674;
        case 0x209678u: goto label_209678;
        case 0x20967cu: goto label_20967c;
        case 0x209680u: goto label_209680;
        case 0x209684u: goto label_209684;
        case 0x209688u: goto label_209688;
        case 0x20968cu: goto label_20968c;
        case 0x209690u: goto label_209690;
        case 0x209694u: goto label_209694;
        case 0x209698u: goto label_209698;
        case 0x20969cu: goto label_20969c;
        case 0x2096a0u: goto label_2096a0;
        case 0x2096a4u: goto label_2096a4;
        case 0x2096a8u: goto label_2096a8;
        case 0x2096acu: goto label_2096ac;
        case 0x2096b0u: goto label_2096b0;
        case 0x2096b4u: goto label_2096b4;
        case 0x2096b8u: goto label_2096b8;
        case 0x2096bcu: goto label_2096bc;
        case 0x2096c0u: goto label_2096c0;
        case 0x2096c4u: goto label_2096c4;
        case 0x2096c8u: goto label_2096c8;
        case 0x2096ccu: goto label_2096cc;
        case 0x2096d0u: goto label_2096d0;
        case 0x2096d4u: goto label_2096d4;
        case 0x2096d8u: goto label_2096d8;
        case 0x2096dcu: goto label_2096dc;
        case 0x2096e0u: goto label_2096e0;
        case 0x2096e4u: goto label_2096e4;
        case 0x2096e8u: goto label_2096e8;
        case 0x2096ecu: goto label_2096ec;
        case 0x2096f0u: goto label_2096f0;
        case 0x2096f4u: goto label_2096f4;
        case 0x2096f8u: goto label_2096f8;
        case 0x2096fcu: goto label_2096fc;
        case 0x209700u: goto label_209700;
        case 0x209704u: goto label_209704;
        case 0x209708u: goto label_209708;
        case 0x20970cu: goto label_20970c;
        case 0x209710u: goto label_209710;
        case 0x209714u: goto label_209714;
        case 0x209718u: goto label_209718;
        case 0x20971cu: goto label_20971c;
        case 0x209720u: goto label_209720;
        case 0x209724u: goto label_209724;
        case 0x209728u: goto label_209728;
        case 0x20972cu: goto label_20972c;
        case 0x209730u: goto label_209730;
        case 0x209734u: goto label_209734;
        case 0x209738u: goto label_209738;
        case 0x20973cu: goto label_20973c;
        case 0x209740u: goto label_209740;
        case 0x209744u: goto label_209744;
        case 0x209748u: goto label_209748;
        case 0x20974cu: goto label_20974c;
        case 0x209750u: goto label_209750;
        case 0x209754u: goto label_209754;
        case 0x209758u: goto label_209758;
        case 0x20975cu: goto label_20975c;
        case 0x209760u: goto label_209760;
        case 0x209764u: goto label_209764;
        case 0x209768u: goto label_209768;
        case 0x20976cu: goto label_20976c;
        case 0x209770u: goto label_209770;
        case 0x209774u: goto label_209774;
        case 0x209778u: goto label_209778;
        case 0x20977cu: goto label_20977c;
        case 0x209780u: goto label_209780;
        case 0x209784u: goto label_209784;
        case 0x209788u: goto label_209788;
        case 0x20978cu: goto label_20978c;
        case 0x209790u: goto label_209790;
        case 0x209794u: goto label_209794;
        case 0x209798u: goto label_209798;
        case 0x20979cu: goto label_20979c;
        case 0x2097a0u: goto label_2097a0;
        case 0x2097a4u: goto label_2097a4;
        case 0x2097a8u: goto label_2097a8;
        case 0x2097acu: goto label_2097ac;
        case 0x2097b0u: goto label_2097b0;
        case 0x2097b4u: goto label_2097b4;
        case 0x2097b8u: goto label_2097b8;
        case 0x2097bcu: goto label_2097bc;
        case 0x2097c0u: goto label_2097c0;
        case 0x2097c4u: goto label_2097c4;
        case 0x2097c8u: goto label_2097c8;
        case 0x2097ccu: goto label_2097cc;
        case 0x2097d0u: goto label_2097d0;
        case 0x2097d4u: goto label_2097d4;
        case 0x2097d8u: goto label_2097d8;
        case 0x2097dcu: goto label_2097dc;
        case 0x2097e0u: goto label_2097e0;
        case 0x2097e4u: goto label_2097e4;
        case 0x2097e8u: goto label_2097e8;
        case 0x2097ecu: goto label_2097ec;
        case 0x2097f0u: goto label_2097f0;
        case 0x2097f4u: goto label_2097f4;
        case 0x2097f8u: goto label_2097f8;
        case 0x2097fcu: goto label_2097fc;
        case 0x209800u: goto label_209800;
        case 0x209804u: goto label_209804;
        case 0x209808u: goto label_209808;
        case 0x20980cu: goto label_20980c;
        case 0x209810u: goto label_209810;
        case 0x209814u: goto label_209814;
        case 0x209818u: goto label_209818;
        case 0x20981cu: goto label_20981c;
        case 0x209820u: goto label_209820;
        case 0x209824u: goto label_209824;
        case 0x209828u: goto label_209828;
        case 0x20982cu: goto label_20982c;
        case 0x209830u: goto label_209830;
        case 0x209834u: goto label_209834;
        case 0x209838u: goto label_209838;
        case 0x20983cu: goto label_20983c;
        case 0x209840u: goto label_209840;
        case 0x209844u: goto label_209844;
        case 0x209848u: goto label_209848;
        case 0x20984cu: goto label_20984c;
        case 0x209850u: goto label_209850;
        case 0x209854u: goto label_209854;
        case 0x209858u: goto label_209858;
        case 0x20985cu: goto label_20985c;
        case 0x209860u: goto label_209860;
        case 0x209864u: goto label_209864;
        case 0x209868u: goto label_209868;
        case 0x20986cu: goto label_20986c;
        case 0x209870u: goto label_209870;
        case 0x209874u: goto label_209874;
        case 0x209878u: goto label_209878;
        case 0x20987cu: goto label_20987c;
        case 0x209880u: goto label_209880;
        case 0x209884u: goto label_209884;
        case 0x209888u: goto label_209888;
        case 0x20988cu: goto label_20988c;
        case 0x209890u: goto label_209890;
        case 0x209894u: goto label_209894;
        case 0x209898u: goto label_209898;
        case 0x20989cu: goto label_20989c;
        case 0x2098a0u: goto label_2098a0;
        case 0x2098a4u: goto label_2098a4;
        case 0x2098a8u: goto label_2098a8;
        case 0x2098acu: goto label_2098ac;
        case 0x2098b0u: goto label_2098b0;
        case 0x2098b4u: goto label_2098b4;
        case 0x2098b8u: goto label_2098b8;
        case 0x2098bcu: goto label_2098bc;
        case 0x2098c0u: goto label_2098c0;
        case 0x2098c4u: goto label_2098c4;
        case 0x2098c8u: goto label_2098c8;
        case 0x2098ccu: goto label_2098cc;
        case 0x2098d0u: goto label_2098d0;
        case 0x2098d4u: goto label_2098d4;
        case 0x2098d8u: goto label_2098d8;
        case 0x2098dcu: goto label_2098dc;
        case 0x2098e0u: goto label_2098e0;
        case 0x2098e4u: goto label_2098e4;
        case 0x2098e8u: goto label_2098e8;
        case 0x2098ecu: goto label_2098ec;
        case 0x2098f0u: goto label_2098f0;
        case 0x2098f4u: goto label_2098f4;
        case 0x2098f8u: goto label_2098f8;
        case 0x2098fcu: goto label_2098fc;
        case 0x209900u: goto label_209900;
        case 0x209904u: goto label_209904;
        case 0x209908u: goto label_209908;
        case 0x20990cu: goto label_20990c;
        case 0x209910u: goto label_209910;
        case 0x209914u: goto label_209914;
        case 0x209918u: goto label_209918;
        case 0x20991cu: goto label_20991c;
        case 0x209920u: goto label_209920;
        case 0x209924u: goto label_209924;
        case 0x209928u: goto label_209928;
        case 0x20992cu: goto label_20992c;
        case 0x209930u: goto label_209930;
        case 0x209934u: goto label_209934;
        case 0x209938u: goto label_209938;
        case 0x20993cu: goto label_20993c;
        case 0x209940u: goto label_209940;
        case 0x209944u: goto label_209944;
        case 0x209948u: goto label_209948;
        case 0x20994cu: goto label_20994c;
        case 0x209950u: goto label_209950;
        case 0x209954u: goto label_209954;
        case 0x209958u: goto label_209958;
        case 0x20995cu: goto label_20995c;
        case 0x209960u: goto label_209960;
        case 0x209964u: goto label_209964;
        case 0x209968u: goto label_209968;
        case 0x20996cu: goto label_20996c;
        case 0x209970u: goto label_209970;
        case 0x209974u: goto label_209974;
        case 0x209978u: goto label_209978;
        case 0x20997cu: goto label_20997c;
        case 0x209980u: goto label_209980;
        case 0x209984u: goto label_209984;
        case 0x209988u: goto label_209988;
        case 0x20998cu: goto label_20998c;
        case 0x209990u: goto label_209990;
        case 0x209994u: goto label_209994;
        case 0x209998u: goto label_209998;
        case 0x20999cu: goto label_20999c;
        case 0x2099a0u: goto label_2099a0;
        case 0x2099a4u: goto label_2099a4;
        case 0x2099a8u: goto label_2099a8;
        case 0x2099acu: goto label_2099ac;
        case 0x2099b0u: goto label_2099b0;
        case 0x2099b4u: goto label_2099b4;
        case 0x2099b8u: goto label_2099b8;
        case 0x2099bcu: goto label_2099bc;
        case 0x2099c0u: goto label_2099c0;
        case 0x2099c4u: goto label_2099c4;
        case 0x2099c8u: goto label_2099c8;
        case 0x2099ccu: goto label_2099cc;
        case 0x2099d0u: goto label_2099d0;
        case 0x2099d4u: goto label_2099d4;
        case 0x2099d8u: goto label_2099d8;
        case 0x2099dcu: goto label_2099dc;
        case 0x2099e0u: goto label_2099e0;
        case 0x2099e4u: goto label_2099e4;
        case 0x2099e8u: goto label_2099e8;
        case 0x2099ecu: goto label_2099ec;
        case 0x2099f0u: goto label_2099f0;
        case 0x2099f4u: goto label_2099f4;
        case 0x2099f8u: goto label_2099f8;
        case 0x2099fcu: goto label_2099fc;
        case 0x209a00u: goto label_209a00;
        case 0x209a04u: goto label_209a04;
        case 0x209a08u: goto label_209a08;
        case 0x209a0cu: goto label_209a0c;
        case 0x209a10u: goto label_209a10;
        case 0x209a14u: goto label_209a14;
        case 0x209a18u: goto label_209a18;
        case 0x209a1cu: goto label_209a1c;
        case 0x209a20u: goto label_209a20;
        case 0x209a24u: goto label_209a24;
        case 0x209a28u: goto label_209a28;
        case 0x209a2cu: goto label_209a2c;
        case 0x209a30u: goto label_209a30;
        case 0x209a34u: goto label_209a34;
        case 0x209a38u: goto label_209a38;
        case 0x209a3cu: goto label_209a3c;
        case 0x209a40u: goto label_209a40;
        case 0x209a44u: goto label_209a44;
        case 0x209a48u: goto label_209a48;
        case 0x209a4cu: goto label_209a4c;
        case 0x209a50u: goto label_209a50;
        case 0x209a54u: goto label_209a54;
        case 0x209a58u: goto label_209a58;
        case 0x209a5cu: goto label_209a5c;
        case 0x209a60u: goto label_209a60;
        case 0x209a64u: goto label_209a64;
        case 0x209a68u: goto label_209a68;
        case 0x209a6cu: goto label_209a6c;
        case 0x209a70u: goto label_209a70;
        case 0x209a74u: goto label_209a74;
        case 0x209a78u: goto label_209a78;
        case 0x209a7cu: goto label_209a7c;
        case 0x209a80u: goto label_209a80;
        case 0x209a84u: goto label_209a84;
        case 0x209a88u: goto label_209a88;
        case 0x209a8cu: goto label_209a8c;
        case 0x209a90u: goto label_209a90;
        case 0x209a94u: goto label_209a94;
        case 0x209a98u: goto label_209a98;
        case 0x209a9cu: goto label_209a9c;
        case 0x209aa0u: goto label_209aa0;
        case 0x209aa4u: goto label_209aa4;
        case 0x209aa8u: goto label_209aa8;
        case 0x209aacu: goto label_209aac;
        case 0x209ab0u: goto label_209ab0;
        case 0x209ab4u: goto label_209ab4;
        case 0x209ab8u: goto label_209ab8;
        case 0x209abcu: goto label_209abc;
        case 0x209ac0u: goto label_209ac0;
        case 0x209ac4u: goto label_209ac4;
        case 0x209ac8u: goto label_209ac8;
        case 0x209accu: goto label_209acc;
        case 0x209ad0u: goto label_209ad0;
        case 0x209ad4u: goto label_209ad4;
        case 0x209ad8u: goto label_209ad8;
        case 0x209adcu: goto label_209adc;
        case 0x209ae0u: goto label_209ae0;
        case 0x209ae4u: goto label_209ae4;
        case 0x209ae8u: goto label_209ae8;
        case 0x209aecu: goto label_209aec;
        case 0x209af0u: goto label_209af0;
        case 0x209af4u: goto label_209af4;
        case 0x209af8u: goto label_209af8;
        case 0x209afcu: goto label_209afc;
        case 0x209b00u: goto label_209b00;
        case 0x209b04u: goto label_209b04;
        case 0x209b08u: goto label_209b08;
        case 0x209b0cu: goto label_209b0c;
        case 0x209b10u: goto label_209b10;
        case 0x209b14u: goto label_209b14;
        case 0x209b18u: goto label_209b18;
        case 0x209b1cu: goto label_209b1c;
        case 0x209b20u: goto label_209b20;
        case 0x209b24u: goto label_209b24;
        case 0x209b28u: goto label_209b28;
        case 0x209b2cu: goto label_209b2c;
        case 0x209b30u: goto label_209b30;
        case 0x209b34u: goto label_209b34;
        case 0x209b38u: goto label_209b38;
        case 0x209b3cu: goto label_209b3c;
        case 0x209b40u: goto label_209b40;
        case 0x209b44u: goto label_209b44;
        case 0x209b48u: goto label_209b48;
        case 0x209b4cu: goto label_209b4c;
        case 0x209b50u: goto label_209b50;
        case 0x209b54u: goto label_209b54;
        case 0x209b58u: goto label_209b58;
        case 0x209b5cu: goto label_209b5c;
        case 0x209b60u: goto label_209b60;
        case 0x209b64u: goto label_209b64;
        case 0x209b68u: goto label_209b68;
        case 0x209b6cu: goto label_209b6c;
        case 0x209b70u: goto label_209b70;
        case 0x209b74u: goto label_209b74;
        case 0x209b78u: goto label_209b78;
        case 0x209b7cu: goto label_209b7c;
        case 0x209b80u: goto label_209b80;
        case 0x209b84u: goto label_209b84;
        case 0x209b88u: goto label_209b88;
        case 0x209b8cu: goto label_209b8c;
        case 0x209b90u: goto label_209b90;
        case 0x209b94u: goto label_209b94;
        case 0x209b98u: goto label_209b98;
        case 0x209b9cu: goto label_209b9c;
        case 0x209ba0u: goto label_209ba0;
        case 0x209ba4u: goto label_209ba4;
        case 0x209ba8u: goto label_209ba8;
        case 0x209bacu: goto label_209bac;
        case 0x209bb0u: goto label_209bb0;
        case 0x209bb4u: goto label_209bb4;
        case 0x209bb8u: goto label_209bb8;
        case 0x209bbcu: goto label_209bbc;
        case 0x209bc0u: goto label_209bc0;
        case 0x209bc4u: goto label_209bc4;
        case 0x209bc8u: goto label_209bc8;
        case 0x209bccu: goto label_209bcc;
        case 0x209bd0u: goto label_209bd0;
        case 0x209bd4u: goto label_209bd4;
        case 0x209bd8u: goto label_209bd8;
        case 0x209bdcu: goto label_209bdc;
        case 0x209be0u: goto label_209be0;
        case 0x209be4u: goto label_209be4;
        case 0x209be8u: goto label_209be8;
        case 0x209becu: goto label_209bec;
        case 0x209bf0u: goto label_209bf0;
        case 0x209bf4u: goto label_209bf4;
        case 0x209bf8u: goto label_209bf8;
        case 0x209bfcu: goto label_209bfc;
        case 0x209c00u: goto label_209c00;
        case 0x209c04u: goto label_209c04;
        case 0x209c08u: goto label_209c08;
        case 0x209c0cu: goto label_209c0c;
        case 0x209c10u: goto label_209c10;
        case 0x209c14u: goto label_209c14;
        case 0x209c18u: goto label_209c18;
        case 0x209c1cu: goto label_209c1c;
        case 0x209c20u: goto label_209c20;
        case 0x209c24u: goto label_209c24;
        case 0x209c28u: goto label_209c28;
        case 0x209c2cu: goto label_209c2c;
        case 0x209c30u: goto label_209c30;
        case 0x209c34u: goto label_209c34;
        case 0x209c38u: goto label_209c38;
        case 0x209c3cu: goto label_209c3c;
        case 0x209c40u: goto label_209c40;
        case 0x209c44u: goto label_209c44;
        case 0x209c48u: goto label_209c48;
        case 0x209c4cu: goto label_209c4c;
        case 0x209c50u: goto label_209c50;
        case 0x209c54u: goto label_209c54;
        case 0x209c58u: goto label_209c58;
        case 0x209c5cu: goto label_209c5c;
        case 0x209c60u: goto label_209c60;
        case 0x209c64u: goto label_209c64;
        case 0x209c68u: goto label_209c68;
        case 0x209c6cu: goto label_209c6c;
        case 0x209c70u: goto label_209c70;
        case 0x209c74u: goto label_209c74;
        case 0x209c78u: goto label_209c78;
        case 0x209c7cu: goto label_209c7c;
        case 0x209c80u: goto label_209c80;
        case 0x209c84u: goto label_209c84;
        case 0x209c88u: goto label_209c88;
        case 0x209c8cu: goto label_209c8c;
        case 0x209c90u: goto label_209c90;
        case 0x209c94u: goto label_209c94;
        case 0x209c98u: goto label_209c98;
        case 0x209c9cu: goto label_209c9c;
        case 0x209ca0u: goto label_209ca0;
        case 0x209ca4u: goto label_209ca4;
        case 0x209ca8u: goto label_209ca8;
        case 0x209cacu: goto label_209cac;
        case 0x209cb0u: goto label_209cb0;
        default: break;
    }

    ctx->pc = 0x209580u;

label_209580:
    // 0x209580: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x209580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_209584:
    // 0x209584: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x209584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_209588:
    // 0x209588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x209588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20958c:
    // 0x20958c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x20958cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_209590:
    // 0x209590: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x209590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_209594:
    // 0x209594: 0x2463136c  addiu       $v1, $v1, 0x136C
    ctx->pc = 0x209594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4972));
label_209598:
    // 0x209598: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x209598u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20959c:
    // 0x20959c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20959cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2095a0:
    // 0x2095a0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2095a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2095a4:
    // 0x2095a4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2095a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2095a8:
    // 0x2095a8: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x2095a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2095ac:
    // 0x2095ac: 0x102001bc  beqz        $at, . + 4 + (0x1BC << 2)
label_2095b0:
    if (ctx->pc == 0x2095B0u) {
        ctx->pc = 0x2095B4u;
        goto label_2095b4;
    }
    ctx->pc = 0x2095ACu;
    {
        const bool branch_taken_0x2095ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2095ac) {
            ctx->pc = 0x209CA0u;
            goto label_209ca0;
        }
    }
    ctx->pc = 0x2095B4u;
label_2095b4:
    // 0x2095b4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2095b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2095b8:
    // 0x2095b8: 0x24640e40  addiu       $a0, $v1, 0xE40
    ctx->pc = 0x2095b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3648));
label_2095bc:
    // 0x2095bc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2095bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2095c0:
    // 0x2095c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2095c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2095c4:
    // 0x2095c4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2095c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2095c8:
    // 0x2095c8: 0x600008  jr          $v1
label_2095cc:
    if (ctx->pc == 0x2095CCu) {
        ctx->pc = 0x2095D0u;
        goto label_2095d0;
    }
    ctx->pc = 0x2095C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2095C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2095D0u;
label_2095d0:
    // 0x2095d0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2095d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2095d4:
    // 0x2095d4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2095d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2095d8:
    // 0x2095d8: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x2095d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_2095dc:
    // 0x2095dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2095dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2095e0:
    // 0x2095e0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2095e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_2095e4:
    // 0x2095e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2095e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2095e8:
    // 0x2095e8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2095e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2095ec:
    // 0x2095ec: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2095ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2095f0:
    // 0x2095f0: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x2095f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_2095f4:
    // 0x2095f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2095f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2095f8:
    // 0x2095f8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2095f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2095fc:
    // 0x2095fc: 0xc0965d0  jal         func_259740
label_209600:
    if (ctx->pc == 0x209600u) {
        ctx->pc = 0x209604u;
        goto label_209604;
    }
    ctx->pc = 0x2095FCu;
    SET_GPR_U32(ctx, 31, 0x209604u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2095FCu, 0x209604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209604u;
label_209604:
    // 0x209604: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x209604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_209608:
    // 0x209608: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x209608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_20960c:
    // 0x20960c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x20960cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_209610:
    // 0x209610: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209610u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209614:
    // 0x209614: 0x0  nop
    ctx->pc = 0x209614u;
    // NOP
label_209618:
    // 0x209618: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x209618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
label_20961c:
    // 0x20961c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20961cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209620:
    // 0x209620: 0x0  nop
    ctx->pc = 0x209620u;
    // NOP
label_209624:
    // 0x209624: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x209624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
label_209628:
    // 0x209628: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209628u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20962c:
    // 0x20962c: 0x0  nop
    ctx->pc = 0x20962cu;
    // NOP
label_209630:
    // 0x209630: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x209630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
label_209634:
    // 0x209634: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209634u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209638:
    // 0x209638: 0x0  nop
    ctx->pc = 0x209638u;
    // NOP
label_20963c:
    // 0x20963c: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x20963cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
label_209640:
    // 0x209640: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209644:
    // 0x209644: 0x0  nop
    ctx->pc = 0x209644u;
    // NOP
label_209648:
    // 0x209648: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x209648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
label_20964c:
    // 0x20964c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20964cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209650:
    // 0x209650: 0x0  nop
    ctx->pc = 0x209650u;
    // NOP
label_209654:
    // 0x209654: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x209654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_209658:
    // 0x209658: 0xc06766c  jal         func_19D9B0
label_20965c:
    if (ctx->pc == 0x20965Cu) {
        ctx->pc = 0x209660u;
        goto label_209660;
    }
    ctx->pc = 0x209658u;
    SET_GPR_U32(ctx, 31, 0x209660u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x209658u, 0x209660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209660u;
label_209660:
    // 0x209660: 0x3c024006  lui         $v0, 0x4006
    ctx->pc = 0x209660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16390 << 16));
label_209664:
    // 0x209664: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x209664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
label_209668:
    // 0x209668: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x209668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20966c:
    // 0x20966c: 0x0  nop
    ctx->pc = 0x20966cu;
    // NOP
label_209670:
    // 0x209670: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x209670u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_209674:
    // 0x209674: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x209674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_209678:
    // 0x209678: 0xe4209480  swc1        $f0, -0x6B80($at)
    ctx->pc = 0x209678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939776), bits); }
label_20967c:
    // 0x20967c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20967cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_209680:
    // 0x209680: 0xc4219480  lwc1        $f1, -0x6B80($at)
    ctx->pc = 0x209680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209684:
    // 0x209684: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x209684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
label_209688:
    // 0x209688: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x209688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
label_20968c:
    // 0x20968c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20968cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209690:
    // 0x209690: 0x0  nop
    ctx->pc = 0x209690u;
    // NOP
label_209694:
    // 0x209694: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x209694u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_209698:
    // 0x209698: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x209698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_20969c:
    // 0x20969c: 0xe4209480  swc1        $f0, -0x6B80($at)
    ctx->pc = 0x20969cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939776), bits); }
label_2096a0:
    // 0x2096a0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2096a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2096a4:
    // 0x2096a4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2096a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_2096a8:
    // 0x2096a8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2096a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2096ac:
    // 0x2096ac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2096acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2096b0:
    // 0x2096b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2096b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2096b4:
    // 0x2096b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2096b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2096b8:
    // 0x2096b8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2096b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_2096bc:
    // 0x2096bc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2096bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2096c0:
    // 0x2096c0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2096c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_2096c4:
    // 0x2096c4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2096c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2096c8:
    // 0x2096c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2096c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2096cc:
    // 0x2096cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2096ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2096d0:
    // 0x2096d0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2096d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
label_2096d4:
    // 0x2096d4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2096d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_2096d8:
    // 0x2096d8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2096d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2096dc:
    // 0x2096dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2096dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2096e0:
    // 0x2096e0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2096e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 2));
label_2096e4:
    // 0x2096e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2096e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2096e8:
    // 0x2096e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2096e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2096ec:
    // 0x2096ec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2096f0:
    if (ctx->pc == 0x2096F0u) {
        ctx->pc = 0x2096F4u;
        goto label_2096f4;
    }
    ctx->pc = 0x2096ECu;
    {
        const bool branch_taken_0x2096ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2096ec) {
            ctx->pc = 0x20970Cu;
            goto label_20970c;
        }
    }
    ctx->pc = 0x2096F4u;
label_2096f4:
    // 0x2096f4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2096f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2096f8:
    // 0x2096f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2096f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2096fc:
    // 0x2096fc: 0x0  nop
    ctx->pc = 0x2096fcu;
    // NOP
label_209700:
    // 0x209700: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x209700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_209704:
    // 0x209704: 0x10000005  b           . + 4 + (0x5 << 2)
label_209708:
    if (ctx->pc == 0x209708u) {
        ctx->pc = 0x20970Cu;
        goto label_20970c;
    }
    ctx->pc = 0x209704u;
    {
        const bool branch_taken_0x209704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209704) {
            ctx->pc = 0x20971Cu;
            goto label_20971c;
        }
    }
    ctx->pc = 0x20970Cu;
label_20970c:
    // 0x20970c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20970cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_209710:
    // 0x209710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209714:
    // 0x209714: 0x0  nop
    ctx->pc = 0x209714u;
    // NOP
label_209718:
    // 0x209718: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x209718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_20971c:
    // 0x20971c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20971cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_209720:
    // 0x209720: 0xc4219480  lwc1        $f1, -0x6B80($at)
    ctx->pc = 0x209720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209724:
    // 0x209724: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x209724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_209728:
    // 0x209728: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x209728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20972c:
    // 0x20972c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20972cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_209730:
    // 0x209730: 0xe4209480  swc1        $f0, -0x6B80($at)
    ctx->pc = 0x209730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939776), bits); }
label_209734:
    // 0x209734: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x209734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_209738:
    // 0x209738: 0x24449440  addiu       $a0, $v0, -0x6BC0
    ctx->pc = 0x209738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939712));
label_20973c:
    // 0x20973c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20973cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_209740:
    // 0x209740: 0xc42c9480  lwc1        $f12, -0x6B80($at)
    ctx->pc = 0x209740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_209744:
    // 0x209744: 0xc067844  jal         func_19E110
label_209748:
    if (ctx->pc == 0x209748u) {
        ctx->pc = 0x20974Cu;
        goto label_20974c;
    }
    ctx->pc = 0x209744u;
    SET_GPR_U32(ctx, 31, 0x20974Cu);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x209744u, 0x20974Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20974Cu;
label_20974c:
    // 0x20974c: 0x3c0245ea  lui         $v0, 0x45EA
    ctx->pc = 0x20974cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17898 << 16));
label_209750:
    // 0x209750: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x209750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
label_209754:
    // 0x209754: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209758:
    // 0x209758: 0x0  nop
    ctx->pc = 0x209758u;
    // NOP
label_20975c:
    // 0x20975c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x20975cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_209760:
    // 0x209760: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x209760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_209764:
    // 0x209764: 0x24449420  addiu       $a0, $v0, -0x6BE0
    ctx->pc = 0x209764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939680));
label_209768:
    // 0x209768: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x209768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_20976c:
    // 0x20976c: 0x24459440  addiu       $a1, $v0, -0x6BC0
    ctx->pc = 0x20976cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939712));
label_209770:
    // 0x209770: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x209770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_209774:
    // 0x209774: 0xc040bf4  jal         func_102FD0
label_209778:
    if (ctx->pc == 0x209778u) {
        ctx->pc = 0x20977Cu;
        goto label_20977c;
    }
    ctx->pc = 0x209774u;
    SET_GPR_U32(ctx, 31, 0x20977Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x20977Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20977Cu) { return; }
    ctx->pc = 0x20977Cu;
label_20977c:
    // 0x20977c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20977cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_209780:
    // 0x209780: 0x24429420  addiu       $v0, $v0, -0x6BE0
    ctx->pc = 0x209780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939680));
label_209784:
    // 0x209784: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x209784u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_209788:
    // 0x209788: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x209788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_20978c:
    // 0x20978c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x20978cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_209790:
    // 0x209790: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x209790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_209794:
    // 0x209794: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x209794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_209798:
    // 0x209798: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x209798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_20979c:
    // 0x20979c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x20979cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2097a0:
    // 0x2097a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2097a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2097a4:
    // 0x2097a4: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x2097a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_2097a8:
    // 0x2097a8: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x2097a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_2097ac:
    // 0x2097ac: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2097acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_2097b0:
    // 0x2097b0: 0xc0684d8  jal         func_1A1360
label_2097b4:
    if (ctx->pc == 0x2097B4u) {
        ctx->pc = 0x2097B8u;
        goto label_2097b8;
    }
    ctx->pc = 0x2097B0u;
    SET_GPR_U32(ctx, 31, 0x2097B8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2097B0u, 0x2097B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2097B8u;
label_2097b8:
    // 0x2097b8: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x2097b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
label_2097bc:
    // 0x2097bc: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2097bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_2097c0:
    // 0x2097c0: 0xc0684d8  jal         func_1A1360
label_2097c4:
    if (ctx->pc == 0x2097C4u) {
        ctx->pc = 0x2097C8u;
        goto label_2097c8;
    }
    ctx->pc = 0x2097C0u;
    SET_GPR_U32(ctx, 31, 0x2097C8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2097C0u, 0x2097C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2097C8u;
label_2097c8:
    // 0x2097c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2097c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2097cc:
    // 0x2097cc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2097ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2097d0:
    // 0x2097d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2097d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2097d4:
    // 0x2097d4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2097d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2097d8:
    // 0x2097d8: 0xc60101a0  lwc1        $f1, 0x1A0($s0)
    ctx->pc = 0x2097d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2097dc:
    // 0x2097dc: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2097dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_2097e0:
    // 0x2097e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2097e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2097e4:
    // 0x2097e4: 0x0  nop
    ctx->pc = 0x2097e4u;
    // NOP
label_2097e8:
    // 0x2097e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2097e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2097ec:
    // 0x2097ec: 0x0  nop
    ctx->pc = 0x2097ecu;
    // NOP
label_2097f0:
    // 0x2097f0: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_2097f4:
    if (ctx->pc == 0x2097F4u) {
        ctx->pc = 0x2097F8u;
        goto label_2097f8;
    }
    ctx->pc = 0x2097F0u;
    {
        const bool branch_taken_0x2097f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2097f0) {
            ctx->pc = 0x20984Cu;
            goto label_20984c;
        }
    }
    ctx->pc = 0x2097F8u;
label_2097f8:
    // 0x2097f8: 0xc60101a0  lwc1        $f1, 0x1A0($s0)
    ctx->pc = 0x2097f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2097fc:
    // 0x2097fc: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x2097fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_209800:
    // 0x209800: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209804:
    // 0x209804: 0x0  nop
    ctx->pc = 0x209804u;
    // NOP
label_209808:
    // 0x209808: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x209808u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20980c:
    // 0x20980c: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x20980cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
label_209810:
    // 0x209810: 0xc60101a4  lwc1        $f1, 0x1A4($s0)
    ctx->pc = 0x209810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209814:
    // 0x209814: 0x3c023c4c  lui         $v0, 0x3C4C
    ctx->pc = 0x209814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15436 << 16));
label_209818:
    // 0x209818: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x209818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_20981c:
    // 0x20981c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20981cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209820:
    // 0x209820: 0x0  nop
    ctx->pc = 0x209820u;
    // NOP
label_209824:
    // 0x209824: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x209824u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_209828:
    // 0x209828: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x209828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
label_20982c:
    // 0x20982c: 0xc60101a8  lwc1        $f1, 0x1A8($s0)
    ctx->pc = 0x20982cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209830:
    // 0x209830: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x209830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_209834:
    // 0x209834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209838:
    // 0x209838: 0x0  nop
    ctx->pc = 0x209838u;
    // NOP
label_20983c:
    // 0x20983c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20983cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_209840:
    // 0x209840: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x209840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
label_209844:
    // 0x209844: 0x1000000e  b           . + 4 + (0xE << 2)
label_209848:
    if (ctx->pc == 0x209848u) {
        ctx->pc = 0x20984Cu;
        goto label_20984c;
    }
    ctx->pc = 0x209844u;
    {
        const bool branch_taken_0x209844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209844) {
            ctx->pc = 0x209880u;
            goto label_209880;
        }
    }
    ctx->pc = 0x20984Cu;
label_20984c:
    // 0x20984c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20984cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_209850:
    // 0x209850: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x209850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_209854:
    // 0x209854: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x209854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
label_209858:
    // 0x209858: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x209858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_20985c:
    // 0x20985c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x20985cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_209860:
    // 0x209860: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x209860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_209864:
    // 0x209864: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x209864u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_209868:
    // 0x209868: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x209868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_20986c:
    // 0x20986c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20986cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_209870:
    // 0x209870: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x209870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_209874:
    // 0x209874: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x209874u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_209878:
    // 0x209878: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x209878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20987c:
    // 0x20987c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20987cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_209880:
    // 0x209880: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x209880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_209884:
    // 0x209884: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x209884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_209888:
    // 0x209888: 0xc080f60  jal         func_203D80
label_20988c:
    if (ctx->pc == 0x20988Cu) {
        ctx->pc = 0x209890u;
        goto label_209890;
    }
    ctx->pc = 0x209888u;
    SET_GPR_U32(ctx, 31, 0x209890u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x209888u, 0x209890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209890u;
label_209890:
    // 0x209890: 0x10000103  b           . + 4 + (0x103 << 2)
label_209894:
    if (ctx->pc == 0x209894u) {
        ctx->pc = 0x209898u;
        goto label_209898;
    }
    ctx->pc = 0x209890u;
    {
        const bool branch_taken_0x209890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209890) {
            ctx->pc = 0x209CA0u;
            goto label_209ca0;
        }
    }
    ctx->pc = 0x209898u;
label_209898:
    // 0x209898: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x209898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_20989c:
    // 0x20989c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x20989cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_2098a0:
    // 0x2098a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2098a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2098a4:
    // 0x2098a4: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2098a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_2098a8:
    // 0x2098a8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2098a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_2098ac:
    // 0x2098ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2098acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_2098b0:
    // 0x2098b0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2098b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_2098b4:
    // 0x2098b4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2098b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_2098b8:
    // 0x2098b8: 0x2861003d  slti        $at, $v1, 0x3D
    ctx->pc = 0x2098b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
label_2098bc:
    // 0x2098bc: 0x142000f8  bnez        $at, . + 4 + (0xF8 << 2)
label_2098c0:
    if (ctx->pc == 0x2098C0u) {
        ctx->pc = 0x2098C4u;
        goto label_2098c4;
    }
    ctx->pc = 0x2098BCu;
    {
        const bool branch_taken_0x2098bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2098bc) {
            ctx->pc = 0x209CA0u;
            goto label_209ca0;
        }
    }
    ctx->pc = 0x2098C4u;
label_2098c4:
    // 0x2098c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2098c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2098c8:
    // 0x2098c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2098c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2098cc:
    // 0x2098cc: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x2098ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
label_2098d0:
    // 0x2098d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2098d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2098d4:
    // 0x2098d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2098d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2098d8:
    // 0x2098d8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2098d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2098dc:
    // 0x2098dc: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x2098dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
label_2098e0:
    // 0x2098e0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2098e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_2098e4:
    // 0x2098e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2098e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2098e8:
    // 0x2098e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2098e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2098ec:
    // 0x2098ec: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x2098ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
label_2098f0:
    // 0x2098f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2098f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2098f4:
    // 0x2098f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2098f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2098f8:
    // 0x2098f8: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2098f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_2098fc:
    // 0x2098fc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2098fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_209900:
    // 0x209900: 0x24459440  addiu       $a1, $v0, -0x6BC0
    ctx->pc = 0x209900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939712));
label_209904:
    // 0x209904: 0x24660120  addiu       $a2, $v1, 0x120
    ctx->pc = 0x209904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_209908:
    // 0x209908: 0xc040bf4  jal         func_102FD0
label_20990c:
    if (ctx->pc == 0x20990Cu) {
        ctx->pc = 0x209910u;
        goto label_209910;
    }
    ctx->pc = 0x209908u;
    SET_GPR_U32(ctx, 31, 0x209910u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x209910u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x209910u) { return; }
    ctx->pc = 0x209910u;
label_209910:
    // 0x209910: 0x3c02c53b  lui         $v0, 0xC53B
    ctx->pc = 0x209910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50491 << 16));
label_209914:
    // 0x209914: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x209914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_209918:
    // 0x209918: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20991c:
    // 0x20991c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20991cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_209920:
    // 0x209920: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x209920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_209924:
    // 0x209924: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x209924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
label_209928:
    // 0x209928: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x209928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_20992c:
    // 0x20992c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20992cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209930:
    // 0x209930: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x209930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_209934:
    // 0x209934: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x209934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
label_209938:
    // 0x209938: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x209938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_20993c:
    // 0x20993c: 0xc4219480  lwc1        $f1, -0x6B80($at)
    ctx->pc = 0x20993cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209940:
    // 0x209940: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x209940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_209944:
    // 0x209944: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x209944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_209948:
    // 0x209948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20994c:
    // 0x20994c: 0x0  nop
    ctx->pc = 0x20994cu;
    // NOP
label_209950:
    // 0x209950: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x209950u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_209954:
    // 0x209954: 0xc058fec  jal         func_163FB0
label_209958:
    if (ctx->pc == 0x209958u) {
        ctx->pc = 0x20995Cu;
        goto label_20995c;
    }
    ctx->pc = 0x209954u;
    SET_GPR_U32(ctx, 31, 0x20995Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x209954u, 0x20995Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20995Cu;
label_20995c:
    // 0x20995c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20995cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_209960:
    // 0x209960: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x209960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_209964:
    // 0x209964: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209964u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209968:
    // 0x209968: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x209968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_20996c:
    // 0x20996c: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x20996cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
label_209970:
    // 0x209970: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209970u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209974:
    // 0x209974: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x209974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_209978:
    // 0x209978: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x209978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
label_20997c:
    // 0x20997c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20997cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209980:
    // 0x209980: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x209980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_209984:
    // 0x209984: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x209984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_209988:
    // 0x209988: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x209988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_20998c:
    // 0x20998c: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x20998cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
label_209990:
    // 0x209990: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x209990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_209994:
    // 0x209994: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x209994u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_209998:
    // 0x209998: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x209998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_20999c:
    // 0x20999c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x20999cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_2099a0:
    // 0x2099a0: 0x100000bf  b           . + 4 + (0xBF << 2)
label_2099a4:
    if (ctx->pc == 0x2099A4u) {
        ctx->pc = 0x2099A8u;
        goto label_2099a8;
    }
    ctx->pc = 0x2099A0u;
    {
        const bool branch_taken_0x2099a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2099a0) {
            ctx->pc = 0x209CA0u;
            goto label_209ca0;
        }
    }
    ctx->pc = 0x2099A8u;
label_2099a8:
    // 0x2099a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2099a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2099ac:
    // 0x2099ac: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2099acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_2099b0:
    // 0x2099b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2099b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2099b4:
    // 0x2099b4: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x2099b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_2099b8:
    // 0x2099b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2099b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2099bc:
    // 0x2099bc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2099bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2099c0:
    // 0x2099c0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2099c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_2099c4:
    // 0x2099c4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2099c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_2099c8:
    // 0x2099c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2099c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2099cc:
    // 0x2099cc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2099ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2099d0:
    // 0x2099d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2099d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2099d4:
    // 0x2099d4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2099d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2099d8:
    // 0x2099d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2099d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2099dc:
    // 0x2099dc: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2099dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_2099e0:
    // 0x2099e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2099e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2099e4:
    // 0x2099e4: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2099e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_2099e8:
    // 0x2099e8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2099e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_2099ec:
    // 0x2099ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2099ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2099f0:
    // 0x2099f0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2099f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_2099f4:
    // 0x2099f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2099f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2099f8:
    // 0x2099f8: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x2099f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
label_2099fc:
    // 0x2099fc: 0x14200045  bnez        $at, . + 4 + (0x45 << 2)
label_209a00:
    if (ctx->pc == 0x209A00u) {
        ctx->pc = 0x209A04u;
        goto label_209a04;
    }
    ctx->pc = 0x2099FCu;
    {
        const bool branch_taken_0x2099fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2099fc) {
            ctx->pc = 0x209B14u;
            goto label_209b14;
        }
    }
    ctx->pc = 0x209A04u;
label_209a04:
    // 0x209a04: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x209a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_209a08:
    // 0x209a08: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x209a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_209a0c:
    // 0x209a0c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x209a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_209a10:
    // 0x209a10: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x209a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_209a14:
    // 0x209a14: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x209a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_209a18:
    // 0x209a18: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x209a18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_209a1c:
    // 0x209a1c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x209a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_209a20:
    // 0x209a20: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x209a20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_209a24:
    // 0x209a24: 0xc0684d8  jal         func_1A1360
label_209a28:
    if (ctx->pc == 0x209A28u) {
        ctx->pc = 0x209A2Cu;
        goto label_209a2c;
    }
    ctx->pc = 0x209A24u;
    SET_GPR_U32(ctx, 31, 0x209A2Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x209A24u, 0x209A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209A2Cu;
label_209a2c:
    // 0x209a2c: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x209a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
label_209a30:
    // 0x209a30: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x209a30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_209a34:
    // 0x209a34: 0xc0684d8  jal         func_1A1360
label_209a38:
    if (ctx->pc == 0x209A38u) {
        ctx->pc = 0x209A3Cu;
        goto label_209a3c;
    }
    ctx->pc = 0x209A34u;
    SET_GPR_U32(ctx, 31, 0x209A3Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x209A34u, 0x209A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209A3Cu;
label_209a3c:
    // 0x209a3c: 0xc60101a0  lwc1        $f1, 0x1A0($s0)
    ctx->pc = 0x209a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209a40:
    // 0x209a40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209a40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209a44:
    // 0x209a44: 0x0  nop
    ctx->pc = 0x209a44u;
    // NOP
label_209a48:
    // 0x209a48: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x209a48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_209a4c:
    // 0x209a4c: 0x0  nop
    ctx->pc = 0x209a4cu;
    // NOP
label_209a50:
    // 0x209a50: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_209a54:
    if (ctx->pc == 0x209A54u) {
        ctx->pc = 0x209A58u;
        goto label_209a58;
    }
    ctx->pc = 0x209A50u;
    {
        const bool branch_taken_0x209a50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x209a50) {
            ctx->pc = 0x209AACu;
            goto label_209aac;
        }
    }
    ctx->pc = 0x209A58u;
label_209a58:
    // 0x209a58: 0xc60101a0  lwc1        $f1, 0x1A0($s0)
    ctx->pc = 0x209a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209a5c:
    // 0x209a5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x209a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_209a60:
    // 0x209a60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209a60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209a64:
    // 0x209a64: 0x0  nop
    ctx->pc = 0x209a64u;
    // NOP
label_209a68:
    // 0x209a68: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x209a68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_209a6c:
    // 0x209a6c: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x209a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
label_209a70:
    // 0x209a70: 0xc60101a4  lwc1        $f1, 0x1A4($s0)
    ctx->pc = 0x209a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209a74:
    // 0x209a74: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x209a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_209a78:
    // 0x209a78: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x209a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_209a7c:
    // 0x209a7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209a7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209a80:
    // 0x209a80: 0x0  nop
    ctx->pc = 0x209a80u;
    // NOP
label_209a84:
    // 0x209a84: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x209a84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_209a88:
    // 0x209a88: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x209a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
label_209a8c:
    // 0x209a8c: 0xc60101a8  lwc1        $f1, 0x1A8($s0)
    ctx->pc = 0x209a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209a90:
    // 0x209a90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x209a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_209a94:
    // 0x209a94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209a98:
    // 0x209a98: 0x0  nop
    ctx->pc = 0x209a98u;
    // NOP
label_209a9c:
    // 0x209a9c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x209a9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_209aa0:
    // 0x209aa0: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x209aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
label_209aa4:
    // 0x209aa4: 0x1000001b  b           . + 4 + (0x1B << 2)
label_209aa8:
    if (ctx->pc == 0x209AA8u) {
        ctx->pc = 0x209AACu;
        goto label_209aac;
    }
    ctx->pc = 0x209AA4u;
    {
        const bool branch_taken_0x209aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209aa4) {
            ctx->pc = 0x209B14u;
            goto label_209b14;
        }
    }
    ctx->pc = 0x209AACu;
label_209aac:
    // 0x209aac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209aacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209ab0:
    // 0x209ab0: 0x0  nop
    ctx->pc = 0x209ab0u;
    // NOP
label_209ab4:
    // 0x209ab4: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x209ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
label_209ab8:
    // 0x209ab8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209ab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209abc:
    // 0x209abc: 0x0  nop
    ctx->pc = 0x209abcu;
    // NOP
label_209ac0:
    // 0x209ac0: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x209ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
label_209ac4:
    // 0x209ac4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209ac4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209ac8:
    // 0x209ac8: 0x0  nop
    ctx->pc = 0x209ac8u;
    // NOP
label_209acc:
    // 0x209acc: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x209accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
label_209ad0:
    // 0x209ad0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x209ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_209ad4:
    // 0x209ad4: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x209ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_209ad8:
    // 0x209ad8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x209ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_209adc:
    // 0x209adc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x209adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_209ae0:
    // 0x209ae0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x209ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_209ae4:
    // 0x209ae4: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x209ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_209ae8:
    // 0x209ae8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x209ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_209aec:
    // 0x209aec: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x209aecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_209af0:
    // 0x209af0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x209af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_209af4:
    // 0x209af4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x209af4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_209af8:
    // 0x209af8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x209af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_209afc:
    // 0x209afc: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x209afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_209b00:
    // 0x209b00: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x209b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
label_209b04:
    // 0x209b04: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x209b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_209b08:
    // 0x209b08: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x209b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_209b0c:
    // 0x209b0c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x209b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_209b10:
    // 0x209b10: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x209b10u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_209b14:
    // 0x209b14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x209b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_209b18:
    // 0x209b18: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x209b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209b1c:
    // 0x209b1c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x209b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_209b20:
    // 0x209b20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209b24:
    // 0x209b24: 0x0  nop
    ctx->pc = 0x209b24u;
    // NOP
label_209b28:
    // 0x209b28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x209b28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_209b2c:
    // 0x209b2c: 0x0  nop
    ctx->pc = 0x209b2cu;
    // NOP
label_209b30:
    // 0x209b30: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_209b34:
    if (ctx->pc == 0x209B34u) {
        ctx->pc = 0x209B38u;
        goto label_209b38;
    }
    ctx->pc = 0x209B30u;
    {
        const bool branch_taken_0x209b30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x209b30) {
            ctx->pc = 0x209B54u;
            goto label_209b54;
        }
    }
    ctx->pc = 0x209B38u;
label_209b38:
    // 0x209b38: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x209b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_209b3c:
    // 0x209b3c: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x209b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209b40:
    // 0x209b40: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x209b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_209b44:
    // 0x209b44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209b44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209b48:
    // 0x209b48: 0x0  nop
    ctx->pc = 0x209b48u;
    // NOP
label_209b4c:
    // 0x209b4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x209b4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_209b50:
    // 0x209b50: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x209b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
label_209b54:
    // 0x209b54: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x209b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_209b58:
    // 0x209b58: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x209b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209b5c:
    // 0x209b5c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x209b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_209b60:
    // 0x209b60: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x209b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_209b64:
    // 0x209b64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x209b64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_209b68:
    // 0x209b68: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x209b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_209b6c:
    // 0x209b6c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x209b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_209b70:
    // 0x209b70: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x209b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_209b74:
    // 0x209b74: 0xc080f60  jal         func_203D80
label_209b78:
    if (ctx->pc == 0x209B78u) {
        ctx->pc = 0x209B7Cu;
        goto label_209b7c;
    }
    ctx->pc = 0x209B74u;
    SET_GPR_U32(ctx, 31, 0x209B7Cu);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x209B74u, 0x209B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B7Cu;
label_209b7c:
    // 0x209b7c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x209b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_209b80:
    // 0x209b80: 0xc0974c8  jal         func_25D320
label_209b84:
    if (ctx->pc == 0x209B84u) {
        ctx->pc = 0x209B88u;
        goto label_209b88;
    }
    ctx->pc = 0x209B80u;
    SET_GPR_U32(ctx, 31, 0x209B88u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x209B80u, 0x209B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B88u;
label_209b88:
    // 0x209b88: 0x10000045  b           . + 4 + (0x45 << 2)
label_209b8c:
    if (ctx->pc == 0x209B8Cu) {
        ctx->pc = 0x209B90u;
        goto label_209b90;
    }
    ctx->pc = 0x209B88u;
    {
        const bool branch_taken_0x209b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209b88) {
            ctx->pc = 0x209CA0u;
            goto label_209ca0;
        }
    }
    ctx->pc = 0x209B90u;
label_209b90:
    // 0x209b90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x209b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_209b94:
    // 0x209b94: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x209b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209b98:
    // 0x209b98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209b98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209b9c:
    // 0x209b9c: 0x0  nop
    ctx->pc = 0x209b9cu;
    // NOP
label_209ba0:
    // 0x209ba0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x209ba0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_209ba4:
    // 0x209ba4: 0x0  nop
    ctx->pc = 0x209ba4u;
    // NOP
label_209ba8:
    // 0x209ba8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_209bac:
    if (ctx->pc == 0x209BACu) {
        ctx->pc = 0x209BB0u;
        goto label_209bb0;
    }
    ctx->pc = 0x209BA8u;
    {
        const bool branch_taken_0x209ba8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x209ba8) {
            ctx->pc = 0x209BCCu;
            goto label_209bcc;
        }
    }
    ctx->pc = 0x209BB0u;
label_209bb0:
    // 0x209bb0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x209bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_209bb4:
    // 0x209bb4: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x209bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209bb8:
    // 0x209bb8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x209bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_209bbc:
    // 0x209bbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209bc0:
    // 0x209bc0: 0x0  nop
    ctx->pc = 0x209bc0u;
    // NOP
label_209bc4:
    // 0x209bc4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x209bc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_209bc8:
    // 0x209bc8: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x209bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
label_209bcc:
    // 0x209bcc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x209bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_209bd0:
    // 0x209bd0: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x209bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209bd4:
    // 0x209bd4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x209bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_209bd8:
    // 0x209bd8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x209bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_209bdc:
    // 0x209bdc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x209bdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_209be0:
    // 0x209be0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x209be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_209be4:
    // 0x209be4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209be4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209be8:
    // 0x209be8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x209be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_209bec:
    // 0x209bec: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x209becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_209bf0:
    // 0x209bf0: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x209bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
label_209bf4:
    // 0x209bf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209bf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209bf8:
    // 0x209bf8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x209bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_209bfc:
    // 0x209bfc: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x209bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_209c00:
    // 0x209c00: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x209c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_209c04:
    // 0x209c04: 0xc05cd10  jal         func_173440
label_209c08:
    if (ctx->pc == 0x209C08u) {
        ctx->pc = 0x209C0Cu;
        goto label_209c0c;
    }
    ctx->pc = 0x209C04u;
    SET_GPR_U32(ctx, 31, 0x209C0Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x209C04u, 0x209C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209C0Cu;
label_209c0c:
    // 0x209c0c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x209c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_209c10:
    // 0x209c10: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x209c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_209c14:
    // 0x209c14: 0xc080f60  jal         func_203D80
label_209c18:
    if (ctx->pc == 0x209C18u) {
        ctx->pc = 0x209C1Cu;
        goto label_209c1c;
    }
    ctx->pc = 0x209C14u;
    SET_GPR_U32(ctx, 31, 0x209C1Cu);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x209C14u, 0x209C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209C1Cu;
label_209c1c:
    // 0x209c1c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x209c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_209c20:
    // 0x209c20: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x209c20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_209c24:
    // 0x209c24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x209c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_209c28:
    // 0x209c28: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x209c28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_209c2c:
    // 0x209c2c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x209c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_209c30:
    // 0x209c30: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x209c30u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_209c34:
    // 0x209c34: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x209c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_209c38:
    // 0x209c38: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x209c38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_209c3c:
    // 0x209c3c: 0x2861001e  slti        $at, $v1, 0x1E
    ctx->pc = 0x209c3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
label_209c40:
    // 0x209c40: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_209c44:
    if (ctx->pc == 0x209C44u) {
        ctx->pc = 0x209C48u;
        goto label_209c48;
    }
    ctx->pc = 0x209C40u;
    {
        const bool branch_taken_0x209c40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x209c40) {
            ctx->pc = 0x209C70u;
            goto label_209c70;
        }
    }
    ctx->pc = 0x209C48u;
label_209c48:
    // 0x209c48: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x209c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_209c4c:
    // 0x209c4c: 0xc48100d0  lwc1        $f1, 0xD0($a0)
    ctx->pc = 0x209c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209c50:
    // 0x209c50: 0x3c033d56  lui         $v1, 0x3D56
    ctx->pc = 0x209c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15702 << 16));
label_209c54:
    // 0x209c54: 0x34637750  ori         $v1, $v1, 0x7750
    ctx->pc = 0x209c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30544);
label_209c58:
    // 0x209c58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x209c58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209c5c:
    // 0x209c5c: 0x0  nop
    ctx->pc = 0x209c5cu;
    // NOP
label_209c60:
    // 0x209c60: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x209c60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_209c64:
    // 0x209c64: 0xe48000d0  swc1        $f0, 0xD0($a0)
    ctx->pc = 0x209c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
label_209c68:
    // 0x209c68: 0x1000000d  b           . + 4 + (0xD << 2)
label_209c6c:
    if (ctx->pc == 0x209C6Cu) {
        ctx->pc = 0x209C70u;
        goto label_209c70;
    }
    ctx->pc = 0x209C68u;
    {
        const bool branch_taken_0x209c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209c68) {
            ctx->pc = 0x209CA0u;
            goto label_209ca0;
        }
    }
    ctx->pc = 0x209C70u;
label_209c70:
    // 0x209c70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x209c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209c74:
    // 0x209c74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x209c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_209c78:
    // 0x209c78: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x209c78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_209c7c:
    // 0x209c7c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x209c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_209c80:
    // 0x209c80: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x209c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_209c84:
    // 0x209c84: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x209c84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_209c88:
    // 0x209c88: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x209c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_209c8c:
    // 0x209c8c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x209c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_209c90:
    // 0x209c90: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x209c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_209c94:
    // 0x209c94: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x209c94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_209c98:
    // 0x209c98: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x209c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_209c9c:
    // 0x209c9c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x209c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_209ca0:
    // 0x209ca0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x209ca0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_209ca4:
    // 0x209ca4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x209ca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_209ca8:
    // 0x209ca8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x209ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_209cac:
    // 0x209cac: 0x3e00008  jr          $ra
label_209cb0:
    if (ctx->pc == 0x209CB0u) {
        ctx->pc = 0x209CB4u;
        goto label_fallthrough_0x209cac;
    }
    ctx->pc = 0x209CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x209cac:
    ctx->pc = 0x209CB4u;
}
