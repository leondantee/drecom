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

// Function: Item_get_in_menu
// Address: 0x337650 - 0x338360
void Item_get_in_menu_0x337650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Item_get_in_menu_0x337650");
#endif

    switch (ctx->pc) {
        case 0x337650u: goto label_337650;
        case 0x337654u: goto label_337654;
        case 0x337658u: goto label_337658;
        case 0x33765cu: goto label_33765c;
        case 0x337660u: goto label_337660;
        case 0x337664u: goto label_337664;
        case 0x337668u: goto label_337668;
        case 0x33766cu: goto label_33766c;
        case 0x337670u: goto label_337670;
        case 0x337674u: goto label_337674;
        case 0x337678u: goto label_337678;
        case 0x33767cu: goto label_33767c;
        case 0x337680u: goto label_337680;
        case 0x337684u: goto label_337684;
        case 0x337688u: goto label_337688;
        case 0x33768cu: goto label_33768c;
        case 0x337690u: goto label_337690;
        case 0x337694u: goto label_337694;
        case 0x337698u: goto label_337698;
        case 0x33769cu: goto label_33769c;
        case 0x3376a0u: goto label_3376a0;
        case 0x3376a4u: goto label_3376a4;
        case 0x3376a8u: goto label_3376a8;
        case 0x3376acu: goto label_3376ac;
        case 0x3376b0u: goto label_3376b0;
        case 0x3376b4u: goto label_3376b4;
        case 0x3376b8u: goto label_3376b8;
        case 0x3376bcu: goto label_3376bc;
        case 0x3376c0u: goto label_3376c0;
        case 0x3376c4u: goto label_3376c4;
        case 0x3376c8u: goto label_3376c8;
        case 0x3376ccu: goto label_3376cc;
        case 0x3376d0u: goto label_3376d0;
        case 0x3376d4u: goto label_3376d4;
        case 0x3376d8u: goto label_3376d8;
        case 0x3376dcu: goto label_3376dc;
        case 0x3376e0u: goto label_3376e0;
        case 0x3376e4u: goto label_3376e4;
        case 0x3376e8u: goto label_3376e8;
        case 0x3376ecu: goto label_3376ec;
        case 0x3376f0u: goto label_3376f0;
        case 0x3376f4u: goto label_3376f4;
        case 0x3376f8u: goto label_3376f8;
        case 0x3376fcu: goto label_3376fc;
        case 0x337700u: goto label_337700;
        case 0x337704u: goto label_337704;
        case 0x337708u: goto label_337708;
        case 0x33770cu: goto label_33770c;
        case 0x337710u: goto label_337710;
        case 0x337714u: goto label_337714;
        case 0x337718u: goto label_337718;
        case 0x33771cu: goto label_33771c;
        case 0x337720u: goto label_337720;
        case 0x337724u: goto label_337724;
        case 0x337728u: goto label_337728;
        case 0x33772cu: goto label_33772c;
        case 0x337730u: goto label_337730;
        case 0x337734u: goto label_337734;
        case 0x337738u: goto label_337738;
        case 0x33773cu: goto label_33773c;
        case 0x337740u: goto label_337740;
        case 0x337744u: goto label_337744;
        case 0x337748u: goto label_337748;
        case 0x33774cu: goto label_33774c;
        case 0x337750u: goto label_337750;
        case 0x337754u: goto label_337754;
        case 0x337758u: goto label_337758;
        case 0x33775cu: goto label_33775c;
        case 0x337760u: goto label_337760;
        case 0x337764u: goto label_337764;
        case 0x337768u: goto label_337768;
        case 0x33776cu: goto label_33776c;
        case 0x337770u: goto label_337770;
        case 0x337774u: goto label_337774;
        case 0x337778u: goto label_337778;
        case 0x33777cu: goto label_33777c;
        case 0x337780u: goto label_337780;
        case 0x337784u: goto label_337784;
        case 0x337788u: goto label_337788;
        case 0x33778cu: goto label_33778c;
        case 0x337790u: goto label_337790;
        case 0x337794u: goto label_337794;
        case 0x337798u: goto label_337798;
        case 0x33779cu: goto label_33779c;
        case 0x3377a0u: goto label_3377a0;
        case 0x3377a4u: goto label_3377a4;
        case 0x3377a8u: goto label_3377a8;
        case 0x3377acu: goto label_3377ac;
        case 0x3377b0u: goto label_3377b0;
        case 0x3377b4u: goto label_3377b4;
        case 0x3377b8u: goto label_3377b8;
        case 0x3377bcu: goto label_3377bc;
        case 0x3377c0u: goto label_3377c0;
        case 0x3377c4u: goto label_3377c4;
        case 0x3377c8u: goto label_3377c8;
        case 0x3377ccu: goto label_3377cc;
        case 0x3377d0u: goto label_3377d0;
        case 0x3377d4u: goto label_3377d4;
        case 0x3377d8u: goto label_3377d8;
        case 0x3377dcu: goto label_3377dc;
        case 0x3377e0u: goto label_3377e0;
        case 0x3377e4u: goto label_3377e4;
        case 0x3377e8u: goto label_3377e8;
        case 0x3377ecu: goto label_3377ec;
        case 0x3377f0u: goto label_3377f0;
        case 0x3377f4u: goto label_3377f4;
        case 0x3377f8u: goto label_3377f8;
        case 0x3377fcu: goto label_3377fc;
        case 0x337800u: goto label_337800;
        case 0x337804u: goto label_337804;
        case 0x337808u: goto label_337808;
        case 0x33780cu: goto label_33780c;
        case 0x337810u: goto label_337810;
        case 0x337814u: goto label_337814;
        case 0x337818u: goto label_337818;
        case 0x33781cu: goto label_33781c;
        case 0x337820u: goto label_337820;
        case 0x337824u: goto label_337824;
        case 0x337828u: goto label_337828;
        case 0x33782cu: goto label_33782c;
        case 0x337830u: goto label_337830;
        case 0x337834u: goto label_337834;
        case 0x337838u: goto label_337838;
        case 0x33783cu: goto label_33783c;
        case 0x337840u: goto label_337840;
        case 0x337844u: goto label_337844;
        case 0x337848u: goto label_337848;
        case 0x33784cu: goto label_33784c;
        case 0x337850u: goto label_337850;
        case 0x337854u: goto label_337854;
        case 0x337858u: goto label_337858;
        case 0x33785cu: goto label_33785c;
        case 0x337860u: goto label_337860;
        case 0x337864u: goto label_337864;
        case 0x337868u: goto label_337868;
        case 0x33786cu: goto label_33786c;
        case 0x337870u: goto label_337870;
        case 0x337874u: goto label_337874;
        case 0x337878u: goto label_337878;
        case 0x33787cu: goto label_33787c;
        case 0x337880u: goto label_337880;
        case 0x337884u: goto label_337884;
        case 0x337888u: goto label_337888;
        case 0x33788cu: goto label_33788c;
        case 0x337890u: goto label_337890;
        case 0x337894u: goto label_337894;
        case 0x337898u: goto label_337898;
        case 0x33789cu: goto label_33789c;
        case 0x3378a0u: goto label_3378a0;
        case 0x3378a4u: goto label_3378a4;
        case 0x3378a8u: goto label_3378a8;
        case 0x3378acu: goto label_3378ac;
        case 0x3378b0u: goto label_3378b0;
        case 0x3378b4u: goto label_3378b4;
        case 0x3378b8u: goto label_3378b8;
        case 0x3378bcu: goto label_3378bc;
        case 0x3378c0u: goto label_3378c0;
        case 0x3378c4u: goto label_3378c4;
        case 0x3378c8u: goto label_3378c8;
        case 0x3378ccu: goto label_3378cc;
        case 0x3378d0u: goto label_3378d0;
        case 0x3378d4u: goto label_3378d4;
        case 0x3378d8u: goto label_3378d8;
        case 0x3378dcu: goto label_3378dc;
        case 0x3378e0u: goto label_3378e0;
        case 0x3378e4u: goto label_3378e4;
        case 0x3378e8u: goto label_3378e8;
        case 0x3378ecu: goto label_3378ec;
        case 0x3378f0u: goto label_3378f0;
        case 0x3378f4u: goto label_3378f4;
        case 0x3378f8u: goto label_3378f8;
        case 0x3378fcu: goto label_3378fc;
        case 0x337900u: goto label_337900;
        case 0x337904u: goto label_337904;
        case 0x337908u: goto label_337908;
        case 0x33790cu: goto label_33790c;
        case 0x337910u: goto label_337910;
        case 0x337914u: goto label_337914;
        case 0x337918u: goto label_337918;
        case 0x33791cu: goto label_33791c;
        case 0x337920u: goto label_337920;
        case 0x337924u: goto label_337924;
        case 0x337928u: goto label_337928;
        case 0x33792cu: goto label_33792c;
        case 0x337930u: goto label_337930;
        case 0x337934u: goto label_337934;
        case 0x337938u: goto label_337938;
        case 0x33793cu: goto label_33793c;
        case 0x337940u: goto label_337940;
        case 0x337944u: goto label_337944;
        case 0x337948u: goto label_337948;
        case 0x33794cu: goto label_33794c;
        case 0x337950u: goto label_337950;
        case 0x337954u: goto label_337954;
        case 0x337958u: goto label_337958;
        case 0x33795cu: goto label_33795c;
        case 0x337960u: goto label_337960;
        case 0x337964u: goto label_337964;
        case 0x337968u: goto label_337968;
        case 0x33796cu: goto label_33796c;
        case 0x337970u: goto label_337970;
        case 0x337974u: goto label_337974;
        case 0x337978u: goto label_337978;
        case 0x33797cu: goto label_33797c;
        case 0x337980u: goto label_337980;
        case 0x337984u: goto label_337984;
        case 0x337988u: goto label_337988;
        case 0x33798cu: goto label_33798c;
        case 0x337990u: goto label_337990;
        case 0x337994u: goto label_337994;
        case 0x337998u: goto label_337998;
        case 0x33799cu: goto label_33799c;
        case 0x3379a0u: goto label_3379a0;
        case 0x3379a4u: goto label_3379a4;
        case 0x3379a8u: goto label_3379a8;
        case 0x3379acu: goto label_3379ac;
        case 0x3379b0u: goto label_3379b0;
        case 0x3379b4u: goto label_3379b4;
        case 0x3379b8u: goto label_3379b8;
        case 0x3379bcu: goto label_3379bc;
        case 0x3379c0u: goto label_3379c0;
        case 0x3379c4u: goto label_3379c4;
        case 0x3379c8u: goto label_3379c8;
        case 0x3379ccu: goto label_3379cc;
        case 0x3379d0u: goto label_3379d0;
        case 0x3379d4u: goto label_3379d4;
        case 0x3379d8u: goto label_3379d8;
        case 0x3379dcu: goto label_3379dc;
        case 0x3379e0u: goto label_3379e0;
        case 0x3379e4u: goto label_3379e4;
        case 0x3379e8u: goto label_3379e8;
        case 0x3379ecu: goto label_3379ec;
        case 0x3379f0u: goto label_3379f0;
        case 0x3379f4u: goto label_3379f4;
        case 0x3379f8u: goto label_3379f8;
        case 0x3379fcu: goto label_3379fc;
        case 0x337a00u: goto label_337a00;
        case 0x337a04u: goto label_337a04;
        case 0x337a08u: goto label_337a08;
        case 0x337a0cu: goto label_337a0c;
        case 0x337a10u: goto label_337a10;
        case 0x337a14u: goto label_337a14;
        case 0x337a18u: goto label_337a18;
        case 0x337a1cu: goto label_337a1c;
        case 0x337a20u: goto label_337a20;
        case 0x337a24u: goto label_337a24;
        case 0x337a28u: goto label_337a28;
        case 0x337a2cu: goto label_337a2c;
        case 0x337a30u: goto label_337a30;
        case 0x337a34u: goto label_337a34;
        case 0x337a38u: goto label_337a38;
        case 0x337a3cu: goto label_337a3c;
        case 0x337a40u: goto label_337a40;
        case 0x337a44u: goto label_337a44;
        case 0x337a48u: goto label_337a48;
        case 0x337a4cu: goto label_337a4c;
        case 0x337a50u: goto label_337a50;
        case 0x337a54u: goto label_337a54;
        case 0x337a58u: goto label_337a58;
        case 0x337a5cu: goto label_337a5c;
        case 0x337a60u: goto label_337a60;
        case 0x337a64u: goto label_337a64;
        case 0x337a68u: goto label_337a68;
        case 0x337a6cu: goto label_337a6c;
        case 0x337a70u: goto label_337a70;
        case 0x337a74u: goto label_337a74;
        case 0x337a78u: goto label_337a78;
        case 0x337a7cu: goto label_337a7c;
        case 0x337a80u: goto label_337a80;
        case 0x337a84u: goto label_337a84;
        case 0x337a88u: goto label_337a88;
        case 0x337a8cu: goto label_337a8c;
        case 0x337a90u: goto label_337a90;
        case 0x337a94u: goto label_337a94;
        case 0x337a98u: goto label_337a98;
        case 0x337a9cu: goto label_337a9c;
        case 0x337aa0u: goto label_337aa0;
        case 0x337aa4u: goto label_337aa4;
        case 0x337aa8u: goto label_337aa8;
        case 0x337aacu: goto label_337aac;
        case 0x337ab0u: goto label_337ab0;
        case 0x337ab4u: goto label_337ab4;
        case 0x337ab8u: goto label_337ab8;
        case 0x337abcu: goto label_337abc;
        case 0x337ac0u: goto label_337ac0;
        case 0x337ac4u: goto label_337ac4;
        case 0x337ac8u: goto label_337ac8;
        case 0x337accu: goto label_337acc;
        case 0x337ad0u: goto label_337ad0;
        case 0x337ad4u: goto label_337ad4;
        case 0x337ad8u: goto label_337ad8;
        case 0x337adcu: goto label_337adc;
        case 0x337ae0u: goto label_337ae0;
        case 0x337ae4u: goto label_337ae4;
        case 0x337ae8u: goto label_337ae8;
        case 0x337aecu: goto label_337aec;
        case 0x337af0u: goto label_337af0;
        case 0x337af4u: goto label_337af4;
        case 0x337af8u: goto label_337af8;
        case 0x337afcu: goto label_337afc;
        case 0x337b00u: goto label_337b00;
        case 0x337b04u: goto label_337b04;
        case 0x337b08u: goto label_337b08;
        case 0x337b0cu: goto label_337b0c;
        case 0x337b10u: goto label_337b10;
        case 0x337b14u: goto label_337b14;
        case 0x337b18u: goto label_337b18;
        case 0x337b1cu: goto label_337b1c;
        case 0x337b20u: goto label_337b20;
        case 0x337b24u: goto label_337b24;
        case 0x337b28u: goto label_337b28;
        case 0x337b2cu: goto label_337b2c;
        case 0x337b30u: goto label_337b30;
        case 0x337b34u: goto label_337b34;
        case 0x337b38u: goto label_337b38;
        case 0x337b3cu: goto label_337b3c;
        case 0x337b40u: goto label_337b40;
        case 0x337b44u: goto label_337b44;
        case 0x337b48u: goto label_337b48;
        case 0x337b4cu: goto label_337b4c;
        case 0x337b50u: goto label_337b50;
        case 0x337b54u: goto label_337b54;
        case 0x337b58u: goto label_337b58;
        case 0x337b5cu: goto label_337b5c;
        case 0x337b60u: goto label_337b60;
        case 0x337b64u: goto label_337b64;
        case 0x337b68u: goto label_337b68;
        case 0x337b6cu: goto label_337b6c;
        case 0x337b70u: goto label_337b70;
        case 0x337b74u: goto label_337b74;
        case 0x337b78u: goto label_337b78;
        case 0x337b7cu: goto label_337b7c;
        case 0x337b80u: goto label_337b80;
        case 0x337b84u: goto label_337b84;
        case 0x337b88u: goto label_337b88;
        case 0x337b8cu: goto label_337b8c;
        case 0x337b90u: goto label_337b90;
        case 0x337b94u: goto label_337b94;
        case 0x337b98u: goto label_337b98;
        case 0x337b9cu: goto label_337b9c;
        case 0x337ba0u: goto label_337ba0;
        case 0x337ba4u: goto label_337ba4;
        case 0x337ba8u: goto label_337ba8;
        case 0x337bacu: goto label_337bac;
        case 0x337bb0u: goto label_337bb0;
        case 0x337bb4u: goto label_337bb4;
        case 0x337bb8u: goto label_337bb8;
        case 0x337bbcu: goto label_337bbc;
        case 0x337bc0u: goto label_337bc0;
        case 0x337bc4u: goto label_337bc4;
        case 0x337bc8u: goto label_337bc8;
        case 0x337bccu: goto label_337bcc;
        case 0x337bd0u: goto label_337bd0;
        case 0x337bd4u: goto label_337bd4;
        case 0x337bd8u: goto label_337bd8;
        case 0x337bdcu: goto label_337bdc;
        case 0x337be0u: goto label_337be0;
        case 0x337be4u: goto label_337be4;
        case 0x337be8u: goto label_337be8;
        case 0x337becu: goto label_337bec;
        case 0x337bf0u: goto label_337bf0;
        case 0x337bf4u: goto label_337bf4;
        case 0x337bf8u: goto label_337bf8;
        case 0x337bfcu: goto label_337bfc;
        case 0x337c00u: goto label_337c00;
        case 0x337c04u: goto label_337c04;
        case 0x337c08u: goto label_337c08;
        case 0x337c0cu: goto label_337c0c;
        case 0x337c10u: goto label_337c10;
        case 0x337c14u: goto label_337c14;
        case 0x337c18u: goto label_337c18;
        case 0x337c1cu: goto label_337c1c;
        case 0x337c20u: goto label_337c20;
        case 0x337c24u: goto label_337c24;
        case 0x337c28u: goto label_337c28;
        case 0x337c2cu: goto label_337c2c;
        case 0x337c30u: goto label_337c30;
        case 0x337c34u: goto label_337c34;
        case 0x337c38u: goto label_337c38;
        case 0x337c3cu: goto label_337c3c;
        case 0x337c40u: goto label_337c40;
        case 0x337c44u: goto label_337c44;
        case 0x337c48u: goto label_337c48;
        case 0x337c4cu: goto label_337c4c;
        case 0x337c50u: goto label_337c50;
        case 0x337c54u: goto label_337c54;
        case 0x337c58u: goto label_337c58;
        case 0x337c5cu: goto label_337c5c;
        case 0x337c60u: goto label_337c60;
        case 0x337c64u: goto label_337c64;
        case 0x337c68u: goto label_337c68;
        case 0x337c6cu: goto label_337c6c;
        case 0x337c70u: goto label_337c70;
        case 0x337c74u: goto label_337c74;
        case 0x337c78u: goto label_337c78;
        case 0x337c7cu: goto label_337c7c;
        case 0x337c80u: goto label_337c80;
        case 0x337c84u: goto label_337c84;
        case 0x337c88u: goto label_337c88;
        case 0x337c8cu: goto label_337c8c;
        case 0x337c90u: goto label_337c90;
        case 0x337c94u: goto label_337c94;
        case 0x337c98u: goto label_337c98;
        case 0x337c9cu: goto label_337c9c;
        case 0x337ca0u: goto label_337ca0;
        case 0x337ca4u: goto label_337ca4;
        case 0x337ca8u: goto label_337ca8;
        case 0x337cacu: goto label_337cac;
        case 0x337cb0u: goto label_337cb0;
        case 0x337cb4u: goto label_337cb4;
        case 0x337cb8u: goto label_337cb8;
        case 0x337cbcu: goto label_337cbc;
        case 0x337cc0u: goto label_337cc0;
        case 0x337cc4u: goto label_337cc4;
        case 0x337cc8u: goto label_337cc8;
        case 0x337cccu: goto label_337ccc;
        case 0x337cd0u: goto label_337cd0;
        case 0x337cd4u: goto label_337cd4;
        case 0x337cd8u: goto label_337cd8;
        case 0x337cdcu: goto label_337cdc;
        case 0x337ce0u: goto label_337ce0;
        case 0x337ce4u: goto label_337ce4;
        case 0x337ce8u: goto label_337ce8;
        case 0x337cecu: goto label_337cec;
        case 0x337cf0u: goto label_337cf0;
        case 0x337cf4u: goto label_337cf4;
        case 0x337cf8u: goto label_337cf8;
        case 0x337cfcu: goto label_337cfc;
        case 0x337d00u: goto label_337d00;
        case 0x337d04u: goto label_337d04;
        case 0x337d08u: goto label_337d08;
        case 0x337d0cu: goto label_337d0c;
        case 0x337d10u: goto label_337d10;
        case 0x337d14u: goto label_337d14;
        case 0x337d18u: goto label_337d18;
        case 0x337d1cu: goto label_337d1c;
        case 0x337d20u: goto label_337d20;
        case 0x337d24u: goto label_337d24;
        case 0x337d28u: goto label_337d28;
        case 0x337d2cu: goto label_337d2c;
        case 0x337d30u: goto label_337d30;
        case 0x337d34u: goto label_337d34;
        case 0x337d38u: goto label_337d38;
        case 0x337d3cu: goto label_337d3c;
        case 0x337d40u: goto label_337d40;
        case 0x337d44u: goto label_337d44;
        case 0x337d48u: goto label_337d48;
        case 0x337d4cu: goto label_337d4c;
        case 0x337d50u: goto label_337d50;
        case 0x337d54u: goto label_337d54;
        case 0x337d58u: goto label_337d58;
        case 0x337d5cu: goto label_337d5c;
        case 0x337d60u: goto label_337d60;
        case 0x337d64u: goto label_337d64;
        case 0x337d68u: goto label_337d68;
        case 0x337d6cu: goto label_337d6c;
        case 0x337d70u: goto label_337d70;
        case 0x337d74u: goto label_337d74;
        case 0x337d78u: goto label_337d78;
        case 0x337d7cu: goto label_337d7c;
        case 0x337d80u: goto label_337d80;
        case 0x337d84u: goto label_337d84;
        case 0x337d88u: goto label_337d88;
        case 0x337d8cu: goto label_337d8c;
        case 0x337d90u: goto label_337d90;
        case 0x337d94u: goto label_337d94;
        case 0x337d98u: goto label_337d98;
        case 0x337d9cu: goto label_337d9c;
        case 0x337da0u: goto label_337da0;
        case 0x337da4u: goto label_337da4;
        case 0x337da8u: goto label_337da8;
        case 0x337dacu: goto label_337dac;
        case 0x337db0u: goto label_337db0;
        case 0x337db4u: goto label_337db4;
        case 0x337db8u: goto label_337db8;
        case 0x337dbcu: goto label_337dbc;
        case 0x337dc0u: goto label_337dc0;
        case 0x337dc4u: goto label_337dc4;
        case 0x337dc8u: goto label_337dc8;
        case 0x337dccu: goto label_337dcc;
        case 0x337dd0u: goto label_337dd0;
        case 0x337dd4u: goto label_337dd4;
        case 0x337dd8u: goto label_337dd8;
        case 0x337ddcu: goto label_337ddc;
        case 0x337de0u: goto label_337de0;
        case 0x337de4u: goto label_337de4;
        case 0x337de8u: goto label_337de8;
        case 0x337decu: goto label_337dec;
        case 0x337df0u: goto label_337df0;
        case 0x337df4u: goto label_337df4;
        case 0x337df8u: goto label_337df8;
        case 0x337dfcu: goto label_337dfc;
        case 0x337e00u: goto label_337e00;
        case 0x337e04u: goto label_337e04;
        case 0x337e08u: goto label_337e08;
        case 0x337e0cu: goto label_337e0c;
        case 0x337e10u: goto label_337e10;
        case 0x337e14u: goto label_337e14;
        case 0x337e18u: goto label_337e18;
        case 0x337e1cu: goto label_337e1c;
        case 0x337e20u: goto label_337e20;
        case 0x337e24u: goto label_337e24;
        case 0x337e28u: goto label_337e28;
        case 0x337e2cu: goto label_337e2c;
        case 0x337e30u: goto label_337e30;
        case 0x337e34u: goto label_337e34;
        case 0x337e38u: goto label_337e38;
        case 0x337e3cu: goto label_337e3c;
        case 0x337e40u: goto label_337e40;
        case 0x337e44u: goto label_337e44;
        case 0x337e48u: goto label_337e48;
        case 0x337e4cu: goto label_337e4c;
        case 0x337e50u: goto label_337e50;
        case 0x337e54u: goto label_337e54;
        case 0x337e58u: goto label_337e58;
        case 0x337e5cu: goto label_337e5c;
        case 0x337e60u: goto label_337e60;
        case 0x337e64u: goto label_337e64;
        case 0x337e68u: goto label_337e68;
        case 0x337e6cu: goto label_337e6c;
        case 0x337e70u: goto label_337e70;
        case 0x337e74u: goto label_337e74;
        case 0x337e78u: goto label_337e78;
        case 0x337e7cu: goto label_337e7c;
        case 0x337e80u: goto label_337e80;
        case 0x337e84u: goto label_337e84;
        case 0x337e88u: goto label_337e88;
        case 0x337e8cu: goto label_337e8c;
        case 0x337e90u: goto label_337e90;
        case 0x337e94u: goto label_337e94;
        case 0x337e98u: goto label_337e98;
        case 0x337e9cu: goto label_337e9c;
        case 0x337ea0u: goto label_337ea0;
        case 0x337ea4u: goto label_337ea4;
        case 0x337ea8u: goto label_337ea8;
        case 0x337eacu: goto label_337eac;
        case 0x337eb0u: goto label_337eb0;
        case 0x337eb4u: goto label_337eb4;
        case 0x337eb8u: goto label_337eb8;
        case 0x337ebcu: goto label_337ebc;
        case 0x337ec0u: goto label_337ec0;
        case 0x337ec4u: goto label_337ec4;
        case 0x337ec8u: goto label_337ec8;
        case 0x337eccu: goto label_337ecc;
        case 0x337ed0u: goto label_337ed0;
        case 0x337ed4u: goto label_337ed4;
        case 0x337ed8u: goto label_337ed8;
        case 0x337edcu: goto label_337edc;
        case 0x337ee0u: goto label_337ee0;
        case 0x337ee4u: goto label_337ee4;
        case 0x337ee8u: goto label_337ee8;
        case 0x337eecu: goto label_337eec;
        case 0x337ef0u: goto label_337ef0;
        case 0x337ef4u: goto label_337ef4;
        case 0x337ef8u: goto label_337ef8;
        case 0x337efcu: goto label_337efc;
        case 0x337f00u: goto label_337f00;
        case 0x337f04u: goto label_337f04;
        case 0x337f08u: goto label_337f08;
        case 0x337f0cu: goto label_337f0c;
        case 0x337f10u: goto label_337f10;
        case 0x337f14u: goto label_337f14;
        case 0x337f18u: goto label_337f18;
        case 0x337f1cu: goto label_337f1c;
        case 0x337f20u: goto label_337f20;
        case 0x337f24u: goto label_337f24;
        case 0x337f28u: goto label_337f28;
        case 0x337f2cu: goto label_337f2c;
        case 0x337f30u: goto label_337f30;
        case 0x337f34u: goto label_337f34;
        case 0x337f38u: goto label_337f38;
        case 0x337f3cu: goto label_337f3c;
        case 0x337f40u: goto label_337f40;
        case 0x337f44u: goto label_337f44;
        case 0x337f48u: goto label_337f48;
        case 0x337f4cu: goto label_337f4c;
        case 0x337f50u: goto label_337f50;
        case 0x337f54u: goto label_337f54;
        case 0x337f58u: goto label_337f58;
        case 0x337f5cu: goto label_337f5c;
        case 0x337f60u: goto label_337f60;
        case 0x337f64u: goto label_337f64;
        case 0x337f68u: goto label_337f68;
        case 0x337f6cu: goto label_337f6c;
        case 0x337f70u: goto label_337f70;
        case 0x337f74u: goto label_337f74;
        case 0x337f78u: goto label_337f78;
        case 0x337f7cu: goto label_337f7c;
        case 0x337f80u: goto label_337f80;
        case 0x337f84u: goto label_337f84;
        case 0x337f88u: goto label_337f88;
        case 0x337f8cu: goto label_337f8c;
        case 0x337f90u: goto label_337f90;
        case 0x337f94u: goto label_337f94;
        case 0x337f98u: goto label_337f98;
        case 0x337f9cu: goto label_337f9c;
        case 0x337fa0u: goto label_337fa0;
        case 0x337fa4u: goto label_337fa4;
        case 0x337fa8u: goto label_337fa8;
        case 0x337facu: goto label_337fac;
        case 0x337fb0u: goto label_337fb0;
        case 0x337fb4u: goto label_337fb4;
        case 0x337fb8u: goto label_337fb8;
        case 0x337fbcu: goto label_337fbc;
        case 0x337fc0u: goto label_337fc0;
        case 0x337fc4u: goto label_337fc4;
        case 0x337fc8u: goto label_337fc8;
        case 0x337fccu: goto label_337fcc;
        case 0x337fd0u: goto label_337fd0;
        case 0x337fd4u: goto label_337fd4;
        case 0x337fd8u: goto label_337fd8;
        case 0x337fdcu: goto label_337fdc;
        case 0x337fe0u: goto label_337fe0;
        case 0x337fe4u: goto label_337fe4;
        case 0x337fe8u: goto label_337fe8;
        case 0x337fecu: goto label_337fec;
        case 0x337ff0u: goto label_337ff0;
        case 0x337ff4u: goto label_337ff4;
        case 0x337ff8u: goto label_337ff8;
        case 0x337ffcu: goto label_337ffc;
        case 0x338000u: goto label_338000;
        case 0x338004u: goto label_338004;
        case 0x338008u: goto label_338008;
        case 0x33800cu: goto label_33800c;
        case 0x338010u: goto label_338010;
        case 0x338014u: goto label_338014;
        case 0x338018u: goto label_338018;
        case 0x33801cu: goto label_33801c;
        case 0x338020u: goto label_338020;
        case 0x338024u: goto label_338024;
        case 0x338028u: goto label_338028;
        case 0x33802cu: goto label_33802c;
        case 0x338030u: goto label_338030;
        case 0x338034u: goto label_338034;
        case 0x338038u: goto label_338038;
        case 0x33803cu: goto label_33803c;
        case 0x338040u: goto label_338040;
        case 0x338044u: goto label_338044;
        case 0x338048u: goto label_338048;
        case 0x33804cu: goto label_33804c;
        case 0x338050u: goto label_338050;
        case 0x338054u: goto label_338054;
        case 0x338058u: goto label_338058;
        case 0x33805cu: goto label_33805c;
        case 0x338060u: goto label_338060;
        case 0x338064u: goto label_338064;
        case 0x338068u: goto label_338068;
        case 0x33806cu: goto label_33806c;
        case 0x338070u: goto label_338070;
        case 0x338074u: goto label_338074;
        case 0x338078u: goto label_338078;
        case 0x33807cu: goto label_33807c;
        case 0x338080u: goto label_338080;
        case 0x338084u: goto label_338084;
        case 0x338088u: goto label_338088;
        case 0x33808cu: goto label_33808c;
        case 0x338090u: goto label_338090;
        case 0x338094u: goto label_338094;
        case 0x338098u: goto label_338098;
        case 0x33809cu: goto label_33809c;
        case 0x3380a0u: goto label_3380a0;
        case 0x3380a4u: goto label_3380a4;
        case 0x3380a8u: goto label_3380a8;
        case 0x3380acu: goto label_3380ac;
        case 0x3380b0u: goto label_3380b0;
        case 0x3380b4u: goto label_3380b4;
        case 0x3380b8u: goto label_3380b8;
        case 0x3380bcu: goto label_3380bc;
        case 0x3380c0u: goto label_3380c0;
        case 0x3380c4u: goto label_3380c4;
        case 0x3380c8u: goto label_3380c8;
        case 0x3380ccu: goto label_3380cc;
        case 0x3380d0u: goto label_3380d0;
        case 0x3380d4u: goto label_3380d4;
        case 0x3380d8u: goto label_3380d8;
        case 0x3380dcu: goto label_3380dc;
        case 0x3380e0u: goto label_3380e0;
        case 0x3380e4u: goto label_3380e4;
        case 0x3380e8u: goto label_3380e8;
        case 0x3380ecu: goto label_3380ec;
        case 0x3380f0u: goto label_3380f0;
        case 0x3380f4u: goto label_3380f4;
        case 0x3380f8u: goto label_3380f8;
        case 0x3380fcu: goto label_3380fc;
        case 0x338100u: goto label_338100;
        case 0x338104u: goto label_338104;
        case 0x338108u: goto label_338108;
        case 0x33810cu: goto label_33810c;
        case 0x338110u: goto label_338110;
        case 0x338114u: goto label_338114;
        case 0x338118u: goto label_338118;
        case 0x33811cu: goto label_33811c;
        case 0x338120u: goto label_338120;
        case 0x338124u: goto label_338124;
        case 0x338128u: goto label_338128;
        case 0x33812cu: goto label_33812c;
        case 0x338130u: goto label_338130;
        case 0x338134u: goto label_338134;
        case 0x338138u: goto label_338138;
        case 0x33813cu: goto label_33813c;
        case 0x338140u: goto label_338140;
        case 0x338144u: goto label_338144;
        case 0x338148u: goto label_338148;
        case 0x33814cu: goto label_33814c;
        case 0x338150u: goto label_338150;
        case 0x338154u: goto label_338154;
        case 0x338158u: goto label_338158;
        case 0x33815cu: goto label_33815c;
        case 0x338160u: goto label_338160;
        case 0x338164u: goto label_338164;
        case 0x338168u: goto label_338168;
        case 0x33816cu: goto label_33816c;
        case 0x338170u: goto label_338170;
        case 0x338174u: goto label_338174;
        case 0x338178u: goto label_338178;
        case 0x33817cu: goto label_33817c;
        case 0x338180u: goto label_338180;
        case 0x338184u: goto label_338184;
        case 0x338188u: goto label_338188;
        case 0x33818cu: goto label_33818c;
        case 0x338190u: goto label_338190;
        case 0x338194u: goto label_338194;
        case 0x338198u: goto label_338198;
        case 0x33819cu: goto label_33819c;
        case 0x3381a0u: goto label_3381a0;
        case 0x3381a4u: goto label_3381a4;
        case 0x3381a8u: goto label_3381a8;
        case 0x3381acu: goto label_3381ac;
        case 0x3381b0u: goto label_3381b0;
        case 0x3381b4u: goto label_3381b4;
        case 0x3381b8u: goto label_3381b8;
        case 0x3381bcu: goto label_3381bc;
        case 0x3381c0u: goto label_3381c0;
        case 0x3381c4u: goto label_3381c4;
        case 0x3381c8u: goto label_3381c8;
        case 0x3381ccu: goto label_3381cc;
        case 0x3381d0u: goto label_3381d0;
        case 0x3381d4u: goto label_3381d4;
        case 0x3381d8u: goto label_3381d8;
        case 0x3381dcu: goto label_3381dc;
        case 0x3381e0u: goto label_3381e0;
        case 0x3381e4u: goto label_3381e4;
        case 0x3381e8u: goto label_3381e8;
        case 0x3381ecu: goto label_3381ec;
        case 0x3381f0u: goto label_3381f0;
        case 0x3381f4u: goto label_3381f4;
        case 0x3381f8u: goto label_3381f8;
        case 0x3381fcu: goto label_3381fc;
        case 0x338200u: goto label_338200;
        case 0x338204u: goto label_338204;
        case 0x338208u: goto label_338208;
        case 0x33820cu: goto label_33820c;
        case 0x338210u: goto label_338210;
        case 0x338214u: goto label_338214;
        case 0x338218u: goto label_338218;
        case 0x33821cu: goto label_33821c;
        case 0x338220u: goto label_338220;
        case 0x338224u: goto label_338224;
        case 0x338228u: goto label_338228;
        case 0x33822cu: goto label_33822c;
        case 0x338230u: goto label_338230;
        case 0x338234u: goto label_338234;
        case 0x338238u: goto label_338238;
        case 0x33823cu: goto label_33823c;
        case 0x338240u: goto label_338240;
        case 0x338244u: goto label_338244;
        case 0x338248u: goto label_338248;
        case 0x33824cu: goto label_33824c;
        case 0x338250u: goto label_338250;
        case 0x338254u: goto label_338254;
        case 0x338258u: goto label_338258;
        case 0x33825cu: goto label_33825c;
        case 0x338260u: goto label_338260;
        case 0x338264u: goto label_338264;
        case 0x338268u: goto label_338268;
        case 0x33826cu: goto label_33826c;
        case 0x338270u: goto label_338270;
        case 0x338274u: goto label_338274;
        case 0x338278u: goto label_338278;
        case 0x33827cu: goto label_33827c;
        case 0x338280u: goto label_338280;
        case 0x338284u: goto label_338284;
        case 0x338288u: goto label_338288;
        case 0x33828cu: goto label_33828c;
        case 0x338290u: goto label_338290;
        case 0x338294u: goto label_338294;
        case 0x338298u: goto label_338298;
        case 0x33829cu: goto label_33829c;
        case 0x3382a0u: goto label_3382a0;
        case 0x3382a4u: goto label_3382a4;
        case 0x3382a8u: goto label_3382a8;
        case 0x3382acu: goto label_3382ac;
        case 0x3382b0u: goto label_3382b0;
        case 0x3382b4u: goto label_3382b4;
        case 0x3382b8u: goto label_3382b8;
        case 0x3382bcu: goto label_3382bc;
        case 0x3382c0u: goto label_3382c0;
        case 0x3382c4u: goto label_3382c4;
        case 0x3382c8u: goto label_3382c8;
        case 0x3382ccu: goto label_3382cc;
        case 0x3382d0u: goto label_3382d0;
        case 0x3382d4u: goto label_3382d4;
        case 0x3382d8u: goto label_3382d8;
        case 0x3382dcu: goto label_3382dc;
        case 0x3382e0u: goto label_3382e0;
        case 0x3382e4u: goto label_3382e4;
        case 0x3382e8u: goto label_3382e8;
        case 0x3382ecu: goto label_3382ec;
        case 0x3382f0u: goto label_3382f0;
        case 0x3382f4u: goto label_3382f4;
        case 0x3382f8u: goto label_3382f8;
        case 0x3382fcu: goto label_3382fc;
        case 0x338300u: goto label_338300;
        case 0x338304u: goto label_338304;
        case 0x338308u: goto label_338308;
        case 0x33830cu: goto label_33830c;
        case 0x338310u: goto label_338310;
        case 0x338314u: goto label_338314;
        case 0x338318u: goto label_338318;
        case 0x33831cu: goto label_33831c;
        case 0x338320u: goto label_338320;
        case 0x338324u: goto label_338324;
        case 0x338328u: goto label_338328;
        case 0x33832cu: goto label_33832c;
        case 0x338330u: goto label_338330;
        case 0x338334u: goto label_338334;
        case 0x338338u: goto label_338338;
        case 0x33833cu: goto label_33833c;
        case 0x338340u: goto label_338340;
        case 0x338344u: goto label_338344;
        case 0x338348u: goto label_338348;
        case 0x33834cu: goto label_33834c;
        case 0x338350u: goto label_338350;
        case 0x338354u: goto label_338354;
        case 0x338358u: goto label_338358;
        case 0x33835cu: goto label_33835c;
        default: break;
    }

    ctx->pc = 0x337650u;

label_337650:
    // 0x337650: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x337650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_337654:
    // 0x337654: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x337654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
label_337658:
    // 0x337658: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x337658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_33765c:
    // 0x33765c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x33765cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_337660:
    // 0x337660: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x337660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_337664:
    // 0x337664: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x337664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_337668:
    // 0x337668: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x337668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_33766c:
    // 0x33766c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33766cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_337670:
    // 0x337670: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x337670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_337674:
    // 0x337674: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x337674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_337678:
    // 0x337678: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x337678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33767c:
    // 0x33767c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x33767cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_337680:
    // 0x337680: 0x24626150  addiu       $v0, $v1, 0x6150
    ctx->pc = 0x337680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 24912));
label_337684:
    // 0x337684: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x337684u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_337688:
    // 0x337688: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x337688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
label_33768c:
    // 0x33768c: 0x24514fa0  addiu       $s1, $v0, 0x4FA0
    ctx->pc = 0x33768cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 20384));
label_337690:
    // 0x337690: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x337690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
label_337694:
    // 0x337694: 0x24524ed0  addiu       $s2, $v0, 0x4ED0
    ctx->pc = 0x337694u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 20176));
label_337698:
    // 0x337698: 0x8e026628  lw          $v0, 0x6628($s0)
    ctx->pc = 0x337698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26152)));
label_33769c:
    // 0x33769c: 0x90570088  lbu         $s7, 0x88($v0)
    ctx->pc = 0x33769cu;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 136)));
label_3376a0:
    // 0x3376a0: 0x32e200ff  andi        $v0, $s7, 0xFF
    ctx->pc = 0x3376a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_3376a4:
    // 0x3376a4: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x3376a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_3376a8:
    // 0x3376a8: 0x8e036628  lw          $v1, 0x6628($s0)
    ctx->pc = 0x3376a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26152)));
label_3376ac:
    // 0x3376ac: 0x90620089  lbu         $v0, 0x89($v1)
    ctx->pc = 0x3376acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 137)));
label_3376b0:
    // 0x3376b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3376b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3376b4:
    // 0x3376b4: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x3376b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_3376b8:
    // 0x3376b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3376b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3376bc:
    // 0x3376bc: 0xa2025e04  sb          $v0, 0x5E04($s0)
    ctx->pc = 0x3376bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24068), (uint8_t)GPR_U32(ctx, 2));
label_3376c0:
    // 0x3376c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3376c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3376c4:
    // 0x3376c4: 0x0  nop
    ctx->pc = 0x3376c4u;
    // NOP
label_3376c8:
    // 0x3376c8: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x3376c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
label_3376cc:
    // 0x3376cc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3376ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_3376d0:
    // 0x3376d0: 0x8c234e40  lw          $v1, 0x4E40($at)
    ctx->pc = 0x3376d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20032)));
label_3376d4:
    // 0x3376d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3376d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3376d8:
    // 0x3376d8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_3376dc:
    if (ctx->pc == 0x3376DCu) {
        ctx->pc = 0x3376E0u;
        goto label_3376e0;
    }
    ctx->pc = 0x3376D8u;
    {
        const bool branch_taken_0x3376d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3376d8) {
            ctx->pc = 0x3376F4u;
            goto label_3376f4;
        }
    }
    ctx->pc = 0x3376E0u;
label_3376e0:
    // 0x3376e0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3376e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_3376e4:
    // 0x3376e4: 0x8c234e48  lw          $v1, 0x4E48($at)
    ctx->pc = 0x3376e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20040)));
label_3376e8:
    // 0x3376e8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3376e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3376ec:
    // 0x3376ec: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_3376f0:
    if (ctx->pc == 0x3376F0u) {
        ctx->pc = 0x3376F4u;
        goto label_3376f4;
    }
    ctx->pc = 0x3376ECu;
    {
        const bool branch_taken_0x3376ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3376ec) {
            ctx->pc = 0x337740u;
            goto label_337740;
        }
    }
    ctx->pc = 0x3376F4u;
label_3376f4:
    // 0x3376f4: 0x8e026628  lw          $v0, 0x6628($s0)
    ctx->pc = 0x3376f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26152)));
label_3376f8:
    // 0x3376f8: 0xa0400080  sb          $zero, 0x80($v0)
    ctx->pc = 0x3376f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 128), (uint8_t)GPR_U32(ctx, 0));
label_3376fc:
    // 0x3376fc: 0x8e026628  lw          $v0, 0x6628($s0)
    ctx->pc = 0x3376fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26152)));
label_337700:
    // 0x337700: 0x9042008b  lbu         $v0, 0x8B($v0)
    ctx->pc = 0x337700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 139)));
label_337704:
    // 0x337704: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x337704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_337708:
    // 0x337708: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x337708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_33770c:
    // 0x33770c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x33770cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_337710:
    // 0x337710: 0x623006  srlv        $a2, $v0, $v1
    ctx->pc = 0x337710u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_337714:
    // 0x337714: 0x8e026628  lw          $v0, 0x6628($s0)
    ctx->pc = 0x337714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26152)));
label_337718:
    // 0x337718: 0x9042008b  lbu         $v0, 0x8B($v0)
    ctx->pc = 0x337718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 139)));
label_33771c:
    // 0x33771c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33771cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_337720:
    // 0x337720: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x337720u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_337724:
    // 0x337724: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x337724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_337728:
    // 0x337728: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x337728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_33772c:
    // 0x33772c: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x33772cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_337730:
    // 0x337730: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x337730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_337734:
    // 0x337734: 0x8c451a64  lw          $a1, 0x1A64($v0)
    ctx->pc = 0x337734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6756)));
label_337738:
    // 0x337738: 0xa63025  or          $a2, $a1, $a2
    ctx->pc = 0x337738u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_33773c:
    // 0x33773c: 0xac461a64  sw          $a2, 0x1A64($v0)
    ctx->pc = 0x33773cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6756), GPR_U32(ctx, 6));
label_337740:
    // 0x337740: 0x8e026628  lw          $v0, 0x6628($s0)
    ctx->pc = 0x337740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26152)));
label_337744:
    // 0x337744: 0x9042008c  lbu         $v0, 0x8C($v0)
    ctx->pc = 0x337744u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
label_337748:
    // 0x337748: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x337748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_33774c:
    // 0x33774c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x33774cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_337750:
    // 0x337750: 0x8fb200ac  lw          $s2, 0xAC($sp)
    ctx->pc = 0x337750u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_337754:
    // 0x337754: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x337754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_337758:
    // 0x337758: 0x12420010  beq         $s2, $v0, . + 4 + (0x10 << 2)
label_33775c:
    if (ctx->pc == 0x33775Cu) {
        ctx->pc = 0x337760u;
        goto label_337760;
    }
    ctx->pc = 0x337758u;
    {
        const bool branch_taken_0x337758 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x337758) {
            ctx->pc = 0x33779Cu;
            goto label_33779c;
        }
    }
    ctx->pc = 0x337760u;
label_337760:
    // 0x337760: 0x8fb100ac  lw          $s1, 0xAC($sp)
    ctx->pc = 0x337760u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_337764:
    // 0x337764: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x337764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_337768:
    // 0x337768: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x337768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_33776c:
    // 0x33776c: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x33776cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
label_337770:
    // 0x337770: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x337770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_337774:
    // 0x337774: 0x8c5e1390  lw          $fp, 0x1390($v0)
    ctx->pc = 0x337774u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
label_337778:
    // 0x337778: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x337778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_33777c:
    // 0x33777c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x33777cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_337780:
    // 0x337780: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x337780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_337784:
    // 0x337784: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x337784u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_337788:
    // 0x337788: 0x73c02628  paddub      $a0, $fp, $zero
    ctx->pc = 0x337788u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
label_33778c:
    // 0x33778c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x33778cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_337790:
    // 0x337790: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x337790u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_337794:
    // 0x337794: 0xc0d85c4  jal         func_361710
label_337798:
    if (ctx->pc == 0x337798u) {
        ctx->pc = 0x33779Cu;
        goto label_33779c;
    }
    ctx->pc = 0x337794u;
    SET_GPR_U32(ctx, 31, 0x33779Cu);
    ctx->pc = 0x361710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361710u, 0x337794u, 0x33779Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33779Cu;
label_33779c:
    // 0x33779c: 0x8e036628  lw          $v1, 0x6628($s0)
    ctx->pc = 0x33779cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26152)));
label_3377a0:
    // 0x3377a0: 0x9063008d  lbu         $v1, 0x8D($v1)
    ctx->pc = 0x3377a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 141)));
label_3377a4:
    // 0x3377a4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3377a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3377a8:
    // 0x3377a8: 0x30550001  andi        $s5, $v0, 0x1
    ctx->pc = 0x3377a8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3377ac:
    // 0x3377ac: 0x12a0001b  beqz        $s5, . + 4 + (0x1B << 2)
label_3377b0:
    if (ctx->pc == 0x3377B0u) {
        ctx->pc = 0x3377B4u;
        goto label_3377b4;
    }
    ctx->pc = 0x3377ACu;
    {
        const bool branch_taken_0x3377ac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x3377ac) {
            ctx->pc = 0x33781Cu;
            goto label_33781c;
        }
    }
    ctx->pc = 0x3377B4u;
label_3377b4:
    // 0x3377b4: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x3377b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3377b8:
    // 0x3377b8: 0x8e026628  lw          $v0, 0x6628($s0)
    ctx->pc = 0x3377b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26152)));
label_3377bc:
    // 0x3377bc: 0x8c42009c  lw          $v0, 0x9C($v0)
    ctx->pc = 0x3377bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_3377c0:
    // 0x3377c0: 0xac56000c  sw          $s6, 0xC($v0)
    ctx->pc = 0x3377c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 22));
label_3377c4:
    // 0x3377c4: 0x8e026628  lw          $v0, 0x6628($s0)
    ctx->pc = 0x3377c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26152)));
label_3377c8:
    // 0x3377c8: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x3377c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_3377cc:
    // 0x3377cc: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x3377ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_3377d0:
    // 0x3377d0: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x3377d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_3377d4:
    // 0x3377d4: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x3377d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_3377d8:
    // 0x3377d8: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x3377d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_3377dc:
    // 0x3377dc: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x3377dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
label_3377e0:
    // 0x3377e0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_3377e4:
    if (ctx->pc == 0x3377E4u) {
        ctx->pc = 0x3377E8u;
        goto label_3377e8;
    }
    ctx->pc = 0x3377E0u;
    {
        const bool branch_taken_0x3377e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3377e0) {
            ctx->pc = 0x3377FCu;
            goto label_3377fc;
        }
    }
    ctx->pc = 0x3377E8u;
label_3377e8:
    // 0x3377e8: 0x8fa600cc  lw          $a2, 0xCC($sp)
    ctx->pc = 0x3377e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_3377ec:
    // 0x3377ec: 0x8cc3020c  lw          $v1, 0x20C($a2)
    ctx->pc = 0x3377ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 524)));
label_3377f0:
    // 0x3377f0: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x3377f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3377f4:
    // 0x3377f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3377f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3377f8:
    // 0x3377f8: 0xacc2020c  sw          $v0, 0x20C($a2)
    ctx->pc = 0x3377f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 524), GPR_U32(ctx, 2));
label_3377fc:
    // 0x3377fc: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x3377fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_337800:
    // 0x337800: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x337800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_337804:
    // 0x337804: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x337804u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_337808:
    // 0x337808: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x337808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33780c:
    // 0x33780c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x33780cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_337810:
    // 0x337810: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x337810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_337814:
    // 0x337814: 0xc0654fc  jal         func_1953F0
label_337818:
    if (ctx->pc == 0x337818u) {
        ctx->pc = 0x33781Cu;
        goto label_33781c;
    }
    ctx->pc = 0x337814u;
    SET_GPR_U32(ctx, 31, 0x33781Cu);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x337814u, 0x33781Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33781Cu;
label_33781c:
    // 0x33781c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33781cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_337820:
    // 0x337820: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337824:
    // 0x337824: 0xa0224e68  sb          $v0, 0x4E68($at)
    ctx->pc = 0x337824u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20072), (uint8_t)GPR_U32(ctx, 2));
label_337828:
    // 0x337828: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x337828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_33782c:
    // 0x33782c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x33782cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_337830:
    // 0x337830: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x337830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_337834:
    // 0x337834: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337838:
    // 0x337838: 0xe4204e64  swc1        $f0, 0x4E64($at)
    ctx->pc = 0x337838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20068), bits); }
label_33783c:
    // 0x33783c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x33783cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_337840:
    // 0x337840: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337844:
    // 0x337844: 0xa0224e69  sb          $v0, 0x4E69($at)
    ctx->pc = 0x337844u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20073), (uint8_t)GPR_U32(ctx, 2));
label_337848:
    // 0x337848: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x337848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
label_33784c:
    // 0x33784c: 0x3442adfd  ori         $v0, $v0, 0xADFD
    ctx->pc = 0x33784cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44541);
label_337850:
    // 0x337850: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x337850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_337854:
    // 0x337854: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337858:
    // 0x337858: 0xe4204e60  swc1        $f0, 0x4E60($at)
    ctx->pc = 0x337858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20064), bits); }
label_33785c:
    // 0x33785c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x33785cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_337860:
    // 0x337860: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x337860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_337864:
    // 0x337864: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x337864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_337868:
    // 0x337868: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_33786c:
    // 0x33786c: 0xe4204e6c  swc1        $f0, 0x4E6C($at)
    ctx->pc = 0x33786cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20076), bits); }
label_337870:
    // 0x337870: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x337870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_337874:
    // 0x337874: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x337874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_337878:
    // 0x337878: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_33787c:
    // 0x33787c: 0xe4204e70  swc1        $f0, 0x4E70($at)
    ctx->pc = 0x33787cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20080), bits); }
label_337880:
    // 0x337880: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x337880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_337884:
    // 0x337884: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337888:
    // 0x337888: 0xa0224e75  sb          $v0, 0x4E75($at)
    ctx->pc = 0x337888u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20085), (uint8_t)GPR_U32(ctx, 2));
label_33788c:
    // 0x33788c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x33788cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_337890:
    // 0x337890: 0x24436158  addiu       $v1, $v0, 0x6158
    ctx->pc = 0x337890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 24920));
label_337894:
    // 0x337894: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337898:
    // 0x337898: 0xac234e80  sw          $v1, 0x4E80($at)
    ctx->pc = 0x337898u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20096), GPR_U32(ctx, 3));
label_33789c:
    // 0x33789c: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33789cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
label_3378a0:
    // 0x3378a0: 0x24444e88  addiu       $a0, $v0, 0x4E88
    ctx->pc = 0x3378a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20104));
label_3378a4:
    // 0x3378a4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3378a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_3378a8:
    // 0x3378a8: 0x2445e7d0  addiu       $a1, $v0, -0x1830
    ctx->pc = 0x3378a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961104));
label_3378ac:
    // 0x3378ac: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x3378acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_3378b0:
    // 0x3378b0: 0xc0462a6  jal         func_118A98
label_3378b4:
    if (ctx->pc == 0x3378B4u) {
        ctx->pc = 0x3378B8u;
        goto label_3378b8;
    }
    ctx->pc = 0x3378B0u;
    SET_GPR_U32(ctx, 31, 0x3378B8u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x3378B8u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3378B8u) { return; }
    ctx->pc = 0x3378B8u;
label_3378b8:
    // 0x3378b8: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x3378b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_3378bc:
    // 0x3378bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3378bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3378c0:
    // 0x3378c0: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_3378c4:
    if (ctx->pc == 0x3378C4u) {
        ctx->pc = 0x3378C8u;
        goto label_3378c8;
    }
    ctx->pc = 0x3378C0u;
    {
        const bool branch_taken_0x3378c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3378c0) {
            ctx->pc = 0x33790Cu;
            goto label_33790c;
        }
    }
    ctx->pc = 0x3378C8u;
label_3378c8:
    // 0x3378c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3378cc:
    if (ctx->pc == 0x3378CCu) {
        ctx->pc = 0x3378D0u;
        goto label_3378d0;
    }
    ctx->pc = 0x3378C8u;
    {
        const bool branch_taken_0x3378c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3378c8) {
            ctx->pc = 0x3378D8u;
            goto label_3378d8;
        }
    }
    ctx->pc = 0x3378D0u;
label_3378d0:
    // 0x3378d0: 0x1000002c  b           . + 4 + (0x2C << 2)
label_3378d4:
    if (ctx->pc == 0x3378D4u) {
        ctx->pc = 0x3378D8u;
        goto label_3378d8;
    }
    ctx->pc = 0x3378D0u;
    {
        const bool branch_taken_0x3378d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3378d0) {
            ctx->pc = 0x337984u;
            goto label_337984;
        }
    }
    ctx->pc = 0x3378D8u;
label_3378d8:
    // 0x3378d8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3378d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_3378dc:
    // 0x3378dc: 0xa4204eb2  sh          $zero, 0x4EB2($at)
    ctx->pc = 0x3378dcu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20146), (uint16_t)GPR_U32(ctx, 0));
label_3378e0:
    // 0x3378e0: 0x3002ffff  andi        $v0, $zero, 0xFFFF
    ctx->pc = 0x3378e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
label_3378e4:
    // 0x3378e4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3378e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_3378e8:
    // 0x3378e8: 0xa4224eb0  sh          $v0, 0x4EB0($at)
    ctx->pc = 0x3378e8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20144), (uint16_t)GPR_U32(ctx, 2));
label_3378ec:
    // 0x3378ec: 0x240201cc  addiu       $v0, $zero, 0x1CC
    ctx->pc = 0x3378ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
label_3378f0:
    // 0x3378f0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3378f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_3378f4:
    // 0x3378f4: 0xa4224eb6  sh          $v0, 0x4EB6($at)
    ctx->pc = 0x3378f4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20150), (uint16_t)GPR_U32(ctx, 2));
label_3378f8:
    // 0x3378f8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3378f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3378fc:
    // 0x3378fc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3378fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337900:
    // 0x337900: 0xa4234eb4  sh          $v1, 0x4EB4($at)
    ctx->pc = 0x337900u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20148), (uint16_t)GPR_U32(ctx, 3));
label_337904:
    // 0x337904: 0x1000001f  b           . + 4 + (0x1F << 2)
label_337908:
    if (ctx->pc == 0x337908u) {
        ctx->pc = 0x33790Cu;
        goto label_33790c;
    }
    ctx->pc = 0x337904u;
    {
        const bool branch_taken_0x337904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337904) {
            ctx->pc = 0x337984u;
            goto label_337984;
        }
    }
    ctx->pc = 0x33790Cu;
label_33790c:
    // 0x33790c: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x33790cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_337910:
    // 0x337910: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x337910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_337914:
    // 0x337914: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x337914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_337918:
    // 0x337918: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x337918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_33791c:
    // 0x33791c: 0xc0ce1ec  jal         func_3387B0
label_337920:
    if (ctx->pc == 0x337920u) {
        ctx->pc = 0x337924u;
        goto label_337924;
    }
    ctx->pc = 0x33791Cu;
    SET_GPR_U32(ctx, 31, 0x337924u);
    ctx->pc = 0x3387B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3387B0u, 0x33791Cu, 0x337924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337924u;
label_337924:
    // 0x337924: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x337924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_337928:
    // 0x337928: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x337928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_33792c:
    // 0x33792c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x33792cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_337930:
    // 0x337930: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x337930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_337934:
    // 0x337934: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x337934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_337938:
    // 0x337938: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x337938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_33793c:
    // 0x33793c: 0x24429740  addiu       $v0, $v0, -0x68C0
    ctx->pc = 0x33793cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940480));
label_337940:
    // 0x337940: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x337940u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_337944:
    // 0x337944: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x337944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_337948:
    // 0x337948: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x337948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_33794c:
    // 0x33794c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33794cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337950:
    // 0x337950: 0xa4224eb0  sh          $v0, 0x4EB0($at)
    ctx->pc = 0x337950u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20144), (uint16_t)GPR_U32(ctx, 2));
label_337954:
    // 0x337954: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x337954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_337958:
    // 0x337958: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x337958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_33795c:
    // 0x33795c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33795cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337960:
    // 0x337960: 0xa4224eb4  sh          $v0, 0x4EB4($at)
    ctx->pc = 0x337960u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20148), (uint16_t)GPR_U32(ctx, 2));
label_337964:
    // 0x337964: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x337964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_337968:
    // 0x337968: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x337968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_33796c:
    // 0x33796c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33796cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337970:
    // 0x337970: 0xa4234eb2  sh          $v1, 0x4EB2($at)
    ctx->pc = 0x337970u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20146), (uint16_t)GPR_U32(ctx, 3));
label_337974:
    // 0x337974: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x337974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_337978:
    // 0x337978: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x337978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_33797c:
    // 0x33797c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33797cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337980:
    // 0x337980: 0xa4224eb6  sh          $v0, 0x4EB6($at)
    ctx->pc = 0x337980u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20150), (uint16_t)GPR_U32(ctx, 2));
label_337984:
    // 0x337984: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x337984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
label_337988:
    // 0x337988: 0x24424eb8  addiu       $v0, $v0, 0x4EB8
    ctx->pc = 0x337988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20152));
label_33798c:
    // 0x33798c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33798cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337990:
    // 0x337990: 0xac224ec0  sw          $v0, 0x4EC0($at)
    ctx->pc = 0x337990u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20160), GPR_U32(ctx, 2));
label_337994:
    // 0x337994: 0x8e036628  lw          $v1, 0x6628($s0)
    ctx->pc = 0x337994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26152)));
label_337998:
    // 0x337998: 0x90620088  lbu         $v0, 0x88($v1)
    ctx->pc = 0x337998u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 136)));
label_33799c:
    // 0x33799c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33799cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_3379a0:
    // 0x3379a0: 0x8c234ec0  lw          $v1, 0x4EC0($at)
    ctx->pc = 0x3379a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20160)));
label_3379a4:
    // 0x3379a4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3379a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_3379a8:
    // 0x3379a8: 0x8e026628  lw          $v0, 0x6628($s0)
    ctx->pc = 0x3379a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26152)));
label_3379ac:
    // 0x3379ac: 0x90430089  lbu         $v1, 0x89($v0)
    ctx->pc = 0x3379acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 137)));
label_3379b0:
    // 0x3379b0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3379b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_3379b4:
    // 0x3379b4: 0x8c224ec0  lw          $v0, 0x4EC0($at)
    ctx->pc = 0x3379b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20160)));
label_3379b8:
    // 0x3379b8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x3379b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_3379bc:
    // 0x3379bc: 0x8e045dd4  lw          $a0, 0x5DD4($s0)
    ctx->pc = 0x3379bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24020)));
label_3379c0:
    // 0x3379c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3379c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3379c4:
    // 0x3379c4: 0x1082011a  beq         $a0, $v0, . + 4 + (0x11A << 2)
label_3379c8:
    if (ctx->pc == 0x3379C8u) {
        ctx->pc = 0x3379CCu;
        goto label_3379cc;
    }
    ctx->pc = 0x3379C4u;
    {
        const bool branch_taken_0x3379c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3379c4) {
            ctx->pc = 0x337E30u;
            goto label_337e30;
        }
    }
    ctx->pc = 0x3379CCu;
label_3379cc:
    // 0x3379cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3379ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3379d0:
    // 0x3379d0: 0x10820086  beq         $a0, $v0, . + 4 + (0x86 << 2)
label_3379d4:
    if (ctx->pc == 0x3379D4u) {
        ctx->pc = 0x3379D8u;
        goto label_3379d8;
    }
    ctx->pc = 0x3379D0u;
    {
        const bool branch_taken_0x3379d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3379d0) {
            ctx->pc = 0x337BECu;
            goto label_337bec;
        }
    }
    ctx->pc = 0x3379D8u;
label_3379d8:
    // 0x3379d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3379d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3379dc:
    // 0x3379dc: 0x10830070  beq         $a0, $v1, . + 4 + (0x70 << 2)
label_3379e0:
    if (ctx->pc == 0x3379E0u) {
        ctx->pc = 0x3379E4u;
        goto label_3379e4;
    }
    ctx->pc = 0x3379DCu;
    {
        const bool branch_taken_0x3379dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3379dc) {
            ctx->pc = 0x337BA0u;
            goto label_337ba0;
        }
    }
    ctx->pc = 0x3379E4u;
label_3379e4:
    // 0x3379e4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3379e8:
    if (ctx->pc == 0x3379E8u) {
        ctx->pc = 0x3379ECu;
        goto label_3379ec;
    }
    ctx->pc = 0x3379E4u;
    {
        const bool branch_taken_0x3379e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3379e4) {
            ctx->pc = 0x3379F4u;
            goto label_3379f4;
        }
    }
    ctx->pc = 0x3379ECu;
label_3379ec:
    // 0x3379ec: 0x10000110  b           . + 4 + (0x110 << 2)
label_3379f0:
    if (ctx->pc == 0x3379F0u) {
        ctx->pc = 0x3379F4u;
        goto label_3379f4;
    }
    ctx->pc = 0x3379ECu;
    {
        const bool branch_taken_0x3379ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3379ec) {
            ctx->pc = 0x337E30u;
            goto label_337e30;
        }
    }
    ctx->pc = 0x3379F4u;
label_3379f4:
    // 0x3379f4: 0x8e026628  lw          $v0, 0x6628($s0)
    ctx->pc = 0x3379f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26152)));
label_3379f8:
    // 0x3379f8: 0x90420088  lbu         $v0, 0x88($v0)
    ctx->pc = 0x3379f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 136)));
label_3379fc:
    // 0x3379fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3379fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_337a00:
    // 0x337a00: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337a04:
    // 0x337a04: 0xac224e40  sw          $v0, 0x4E40($at)
    ctx->pc = 0x337a04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20032), GPR_U32(ctx, 2));
label_337a08:
    // 0x337a08: 0x8e026628  lw          $v0, 0x6628($s0)
    ctx->pc = 0x337a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26152)));
label_337a0c:
    // 0x337a0c: 0x90430089  lbu         $v1, 0x89($v0)
    ctx->pc = 0x337a0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 137)));
label_337a10:
    // 0x337a10: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x337a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_337a14:
    // 0x337a14: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337a18:
    // 0x337a18: 0xac224e48  sw          $v0, 0x4E48($at)
    ctx->pc = 0x337a18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20040), GPR_U32(ctx, 2));
label_337a1c:
    // 0x337a1c: 0x8e026628  lw          $v0, 0x6628($s0)
    ctx->pc = 0x337a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26152)));
label_337a20:
    // 0x337a20: 0x9042008a  lbu         $v0, 0x8A($v0)
    ctx->pc = 0x337a20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 138)));
label_337a24:
    // 0x337a24: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x337a24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_337a28:
    // 0x337a28: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337a2c:
    // 0x337a2c: 0xac244e50  sw          $a0, 0x4E50($at)
    ctx->pc = 0x337a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20048), GPR_U32(ctx, 4));
label_337a30:
    // 0x337a30: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337a34:
    // 0x337a34: 0x8c234e40  lw          $v1, 0x4E40($at)
    ctx->pc = 0x337a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20032)));
label_337a38:
    // 0x337a38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x337a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_337a3c:
    // 0x337a3c: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_337a40:
    if (ctx->pc == 0x337A40u) {
        ctx->pc = 0x337A44u;
        goto label_337a44;
    }
    ctx->pc = 0x337A3Cu;
    {
        const bool branch_taken_0x337a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x337a3c) {
            ctx->pc = 0x337A6Cu;
            goto label_337a6c;
        }
    }
    ctx->pc = 0x337A44u;
label_337a44:
    // 0x337a44: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337a48:
    // 0x337a48: 0x8c234e48  lw          $v1, 0x4E48($at)
    ctx->pc = 0x337a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20040)));
label_337a4c:
    // 0x337a4c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x337a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_337a50:
    // 0x337a50: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_337a54:
    if (ctx->pc == 0x337A54u) {
        ctx->pc = 0x337A58u;
        goto label_337a58;
    }
    ctx->pc = 0x337A50u;
    {
        const bool branch_taken_0x337a50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x337a50) {
            ctx->pc = 0x337A6Cu;
            goto label_337a6c;
        }
    }
    ctx->pc = 0x337A58u;
label_337a58:
    // 0x337a58: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x337a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
label_337a5c:
    // 0x337a5c: 0x34620010  ori         $v0, $v1, 0x10
    ctx->pc = 0x337a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_337a60:
    // 0x337a60: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x337a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
label_337a64:
    // 0x337a64: 0x1000004b  b           . + 4 + (0x4B << 2)
label_337a68:
    if (ctx->pc == 0x337A68u) {
        ctx->pc = 0x337A6Cu;
        goto label_337a6c;
    }
    ctx->pc = 0x337A64u;
    {
        const bool branch_taken_0x337a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337a64) {
            ctx->pc = 0x337B94u;
            goto label_337b94;
        }
    }
    ctx->pc = 0x337A6Cu;
label_337a6c:
    // 0x337a6c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337a70:
    // 0x337a70: 0x8c224e40  lw          $v0, 0x4E40($at)
    ctx->pc = 0x337a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20032)));
label_337a74:
    // 0x337a74: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x337a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_337a78:
    // 0x337a78: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337a7c:
    // 0x337a7c: 0x8c234e48  lw          $v1, 0x4E48($at)
    ctx->pc = 0x337a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20040)));
label_337a80:
    // 0x337a80: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x337a80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_337a84:
    // 0x337a84: 0xc0ce14c  jal         func_338530
label_337a88:
    if (ctx->pc == 0x337A88u) {
        ctx->pc = 0x337A8Cu;
        goto label_337a8c;
    }
    ctx->pc = 0x337A84u;
    SET_GPR_U32(ctx, 31, 0x337A8Cu);
    ctx->pc = 0x338530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338530u, 0x337A84u, 0x337A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337A8Cu;
label_337a8c:
    // 0x337a8c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337a90:
    // 0x337a90: 0xac224e38  sw          $v0, 0x4E38($at)
    ctx->pc = 0x337a90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20024), GPR_U32(ctx, 2));
label_337a94:
    // 0x337a94: 0x441002b  bgez        $v0, . + 4 + (0x2B << 2)
label_337a98:
    if (ctx->pc == 0x337A98u) {
        ctx->pc = 0x337A9Cu;
        goto label_337a9c;
    }
    ctx->pc = 0x337A94u;
    {
        const bool branch_taken_0x337a94 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x337a94) {
            ctx->pc = 0x337B44u;
            goto label_337b44;
        }
    }
    ctx->pc = 0x337A9Cu;
label_337a9c:
    // 0x337a9c: 0x2602663e  addiu       $v0, $s0, 0x663E
    ctx->pc = 0x337a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 26174));
label_337aa0:
    // 0x337aa0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337aa4:
    // 0x337aa4: 0xac224ec0  sw          $v0, 0x4EC0($at)
    ctx->pc = 0x337aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20160), GPR_U32(ctx, 2));
label_337aa8:
    // 0x337aa8: 0x9202683e  lbu         $v0, 0x683E($s0)
    ctx->pc = 0x337aa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26686)));
label_337aac:
    // 0x337aac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x337aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_337ab0:
    // 0x337ab0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x337ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_337ab4:
    // 0x337ab4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337ab8:
    // 0x337ab8: 0x8c224ec0  lw          $v0, 0x4EC0($at)
    ctx->pc = 0x337ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20160)));
label_337abc:
    // 0x337abc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x337abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_337ac0:
    // 0x337ac0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337ac4:
    // 0x337ac4: 0xac224ec0  sw          $v0, 0x4EC0($at)
    ctx->pc = 0x337ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20160), GPR_U32(ctx, 2));
label_337ac8:
    // 0x337ac8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337acc:
    // 0x337acc: 0x8c244e40  lw          $a0, 0x4E40($at)
    ctx->pc = 0x337accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20032)));
label_337ad0:
    // 0x337ad0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x337ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_337ad4:
    // 0x337ad4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337ad8:
    // 0x337ad8: 0x8c224ec0  lw          $v0, 0x4EC0($at)
    ctx->pc = 0x337ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20160)));
label_337adc:
    // 0x337adc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x337adcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_337ae0:
    // 0x337ae0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337ae4:
    // 0x337ae4: 0x8c224e48  lw          $v0, 0x4E48($at)
    ctx->pc = 0x337ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20040)));
label_337ae8:
    // 0x337ae8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x337ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_337aec:
    // 0x337aec: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337af0:
    // 0x337af0: 0x8c234ec0  lw          $v1, 0x4EC0($at)
    ctx->pc = 0x337af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20160)));
label_337af4:
    // 0x337af4: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x337af4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_337af8:
    // 0x337af8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337afc:
    // 0x337afc: 0x8c224e50  lw          $v0, 0x4E50($at)
    ctx->pc = 0x337afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20048)));
label_337b00:
    // 0x337b00: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_337b04:
    if (ctx->pc == 0x337B04u) {
        ctx->pc = 0x337B08u;
        goto label_337b08;
    }
    ctx->pc = 0x337B00u;
    {
        const bool branch_taken_0x337b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x337b00) {
            ctx->pc = 0x337B14u;
            goto label_337b14;
        }
    }
    ctx->pc = 0x337B08u;
label_337b08:
    // 0x337b08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x337b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_337b0c:
    // 0x337b0c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337b10:
    // 0x337b10: 0xac224e50  sw          $v0, 0x4E50($at)
    ctx->pc = 0x337b10u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20048), GPR_U32(ctx, 2));
label_337b14:
    // 0x337b14: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337b18:
    // 0x337b18: 0x8c224e50  lw          $v0, 0x4E50($at)
    ctx->pc = 0x337b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20048)));
label_337b1c:
    // 0x337b1c: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x337b1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_337b20:
    // 0x337b20: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x337b20u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_337b24:
    // 0x337b24: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337b28:
    // 0x337b28: 0x8c224ec0  lw          $v0, 0x4EC0($at)
    ctx->pc = 0x337b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20160)));
label_337b2c:
    // 0x337b2c: 0xa4440002  sh          $a0, 0x2($v0)
    ctx->pc = 0x337b2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 4));
label_337b30:
    // 0x337b30: 0x9212683e  lbu         $s2, 0x683E($s0)
    ctx->pc = 0x337b30u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26686)));
label_337b34:
    // 0x337b34: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x337b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_337b38:
    // 0x337b38: 0xa202683e  sb          $v0, 0x683E($s0)
    ctx->pc = 0x337b38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26686), (uint8_t)GPR_U32(ctx, 2));
label_337b3c:
    // 0x337b3c: 0x10000015  b           . + 4 + (0x15 << 2)
label_337b40:
    if (ctx->pc == 0x337B40u) {
        ctx->pc = 0x337B44u;
        goto label_337b44;
    }
    ctx->pc = 0x337B3Cu;
    {
        const bool branch_taken_0x337b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337b3c) {
            ctx->pc = 0x337B94u;
            goto label_337b94;
        }
    }
    ctx->pc = 0x337B44u;
label_337b44:
    // 0x337b44: 0x2602663e  addiu       $v0, $s0, 0x663E
    ctx->pc = 0x337b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 26174));
label_337b48:
    // 0x337b48: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337b4c:
    // 0x337b4c: 0xac224ec0  sw          $v0, 0x4EC0($at)
    ctx->pc = 0x337b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20160), GPR_U32(ctx, 2));
label_337b50:
    // 0x337b50: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337b54:
    // 0x337b54: 0x8c224e38  lw          $v0, 0x4E38($at)
    ctx->pc = 0x337b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20024)));
label_337b58:
    // 0x337b58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x337b58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_337b5c:
    // 0x337b5c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337b60:
    // 0x337b60: 0x8c244ec0  lw          $a0, 0x4EC0($at)
    ctx->pc = 0x337b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20160)));
label_337b64:
    // 0x337b64: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x337b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_337b68:
    // 0x337b68: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337b6c:
    // 0x337b6c: 0xac224ec0  sw          $v0, 0x4EC0($at)
    ctx->pc = 0x337b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20160), GPR_U32(ctx, 2));
label_337b70:
    // 0x337b70: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337b74:
    // 0x337b74: 0x8c314ec0  lw          $s1, 0x4EC0($at)
    ctx->pc = 0x337b74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20160)));
label_337b78:
    // 0x337b78: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337b7c:
    // 0x337b7c: 0x8c224e50  lw          $v0, 0x4E50($at)
    ctx->pc = 0x337b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20048)));
label_337b80:
    // 0x337b80: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x337b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_337b84:
    // 0x337b84: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x337b84u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_337b88:
    // 0x337b88: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x337b88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_337b8c:
    // 0x337b8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x337b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_337b90:
    // 0x337b90: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x337b90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
label_337b94:
    // 0x337b94: 0x8e025dd4  lw          $v0, 0x5DD4($s0)
    ctx->pc = 0x337b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24020)));
label_337b98:
    // 0x337b98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x337b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_337b9c:
    // 0x337b9c: 0xae025dd4  sw          $v0, 0x5DD4($s0)
    ctx->pc = 0x337b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24020), GPR_U32(ctx, 2));
label_337ba0:
    // 0x337ba0: 0xc0ce0d8  jal         func_338360
label_337ba4:
    if (ctx->pc == 0x337BA4u) {
        ctx->pc = 0x337BA8u;
        goto label_337ba8;
    }
    ctx->pc = 0x337BA0u;
    SET_GPR_U32(ctx, 31, 0x337BA8u);
    ctx->pc = 0x338360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338360u, 0x337BA0u, 0x337BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337BA8u;
label_337ba8:
    // 0x337ba8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337bac:
    // 0x337bac: 0x8c234e40  lw          $v1, 0x4E40($at)
    ctx->pc = 0x337bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20032)));
label_337bb0:
    // 0x337bb0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x337bb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_337bb4:
    // 0x337bb4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337bb8:
    // 0x337bb8: 0x8c234e48  lw          $v1, 0x4E48($at)
    ctx->pc = 0x337bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20040)));
label_337bbc:
    // 0x337bbc: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x337bbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_337bc0:
    // 0x337bc0: 0xc0ce14c  jal         func_338530
label_337bc4:
    if (ctx->pc == 0x337BC4u) {
        ctx->pc = 0x337BC8u;
        goto label_337bc8;
    }
    ctx->pc = 0x337BC0u;
    SET_GPR_U32(ctx, 31, 0x337BC8u);
    ctx->pc = 0x338530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338530u, 0x337BC0u, 0x337BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337BC8u;
label_337bc8:
    // 0x337bc8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337bcc:
    // 0x337bcc: 0xac224e38  sw          $v0, 0x4E38($at)
    ctx->pc = 0x337bccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20024), GPR_U32(ctx, 2));
label_337bd0:
    // 0x337bd0: 0x8e0265a4  lw          $v0, 0x65A4($s0)
    ctx->pc = 0x337bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26020)));
label_337bd4:
    // 0x337bd4: 0xae0265a0  sw          $v0, 0x65A0($s0)
    ctx->pc = 0x337bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26016), GPR_U32(ctx, 2));
label_337bd8:
    // 0x337bd8: 0x8e025dd4  lw          $v0, 0x5DD4($s0)
    ctx->pc = 0x337bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24020)));
label_337bdc:
    // 0x337bdc: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x337bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_337be0:
    // 0x337be0: 0xae055dd4  sw          $a1, 0x5DD4($s0)
    ctx->pc = 0x337be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24020), GPR_U32(ctx, 5));
label_337be4:
    // 0x337be4: 0x10000092  b           . + 4 + (0x92 << 2)
label_337be8:
    if (ctx->pc == 0x337BE8u) {
        ctx->pc = 0x337BECu;
        goto label_337bec;
    }
    ctx->pc = 0x337BE4u;
    {
        const bool branch_taken_0x337be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337be4) {
            ctx->pc = 0x337E30u;
            goto label_337e30;
        }
    }
    ctx->pc = 0x337BECu;
label_337bec:
    // 0x337bec: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337bf0:
    // 0x337bf0: 0x8c244e40  lw          $a0, 0x4E40($at)
    ctx->pc = 0x337bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20032)));
label_337bf4:
    // 0x337bf4: 0x2c810009  sltiu       $at, $a0, 0x9
    ctx->pc = 0x337bf4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_337bf8:
    // 0x337bf8: 0x1020008d  beqz        $at, . + 4 + (0x8D << 2)
label_337bfc:
    if (ctx->pc == 0x337BFCu) {
        ctx->pc = 0x337C00u;
        goto label_337c00;
    }
    ctx->pc = 0x337BF8u;
    {
        const bool branch_taken_0x337bf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x337bf8) {
            ctx->pc = 0x337E30u;
            goto label_337e30;
        }
    }
    ctx->pc = 0x337C00u;
label_337c00:
    // 0x337c00: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x337c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_337c04:
    // 0x337c04: 0x24432120  addiu       $v1, $v0, 0x2120
    ctx->pc = 0x337c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8480));
label_337c08:
    // 0x337c08: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x337c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_337c0c:
    // 0x337c0c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x337c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_337c10:
    // 0x337c10: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x337c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_337c14:
    // 0x337c14: 0x400008  jr          $v0
label_337c18:
    if (ctx->pc == 0x337C18u) {
        ctx->pc = 0x337C1Cu;
        goto label_337c1c;
    }
    ctx->pc = 0x337C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337C14u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x337C1Cu;
label_337c1c:
    // 0x337c1c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337c20:
    // 0x337c20: 0x8c314e38  lw          $s1, 0x4E38($at)
    ctx->pc = 0x337c20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20024)));
label_337c24:
    // 0x337c24: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x337c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_337c28:
    // 0x337c28: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x337c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_337c2c:
    // 0x337c2c: 0x9042663f  lbu         $v0, 0x663F($v0)
    ctx->pc = 0x337c2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 26175)));
label_337c30:
    // 0x337c30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x337c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_337c34:
    // 0x337c34: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x337c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_337c38:
    // 0x337c38: 0x4163c  dsll32      $v0, $a0, 24
    ctx->pc = 0x337c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 24));
label_337c3c:
    // 0x337c3c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x337c3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_337c40:
    // 0x337c40: 0xa2025dea  sb          $v0, 0x5DEA($s0)
    ctx->pc = 0x337c40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24042), (uint8_t)GPR_U32(ctx, 2));
label_337c44:
    // 0x337c44: 0x26135f4c  addiu       $s3, $s0, 0x5F4C
    ctx->pc = 0x337c44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 24396));
label_337c48:
    // 0x337c48: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x337c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_337c4c:
    // 0x337c4c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x337c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_337c50:
    // 0x337c50: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x337c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
label_337c54:
    // 0x337c54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x337c54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_337c58:
    // 0x337c58: 0x0  nop
    ctx->pc = 0x337c58u;
    // NOP
label_337c5c:
    // 0x337c5c: 0xe6600044  swc1        $f0, 0x44($s3)
    ctx->pc = 0x337c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
label_337c60:
    // 0x337c60: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x337c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
label_337c64:
    // 0x337c64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x337c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_337c68:
    // 0x337c68: 0x0  nop
    ctx->pc = 0x337c68u;
    // NOP
label_337c6c:
    // 0x337c6c: 0xe6600084  swc1        $f0, 0x84($s3)
    ctx->pc = 0x337c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
label_337c70:
    // 0x337c70: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x337c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
label_337c74:
    // 0x337c74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x337c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_337c78:
    // 0x337c78: 0x0  nop
    ctx->pc = 0x337c78u;
    // NOP
label_337c7c:
    // 0x337c7c: 0xe6600048  swc1        $f0, 0x48($s3)
    ctx->pc = 0x337c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
label_337c80:
    // 0x337c80: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x337c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_337c84:
    // 0x337c84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x337c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_337c88:
    // 0x337c88: 0x0  nop
    ctx->pc = 0x337c88u;
    // NOP
label_337c8c:
    // 0x337c8c: 0xe6600088  swc1        $f0, 0x88($s3)
    ctx->pc = 0x337c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 136), bits); }
label_337c90:
    // 0x337c90: 0x3c024299  lui         $v0, 0x4299
    ctx->pc = 0x337c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17049 << 16));
label_337c94:
    // 0x337c94: 0x3444999a  ori         $a0, $v0, 0x999A
    ctx->pc = 0x337c94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_337c98:
    // 0x337c98: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x337c98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_337c9c:
    // 0x337c9c: 0x0  nop
    ctx->pc = 0x337c9cu;
    // NOP
label_337ca0:
    // 0x337ca0: 0xe660004c  swc1        $f0, 0x4C($s3)
    ctx->pc = 0x337ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 76), bits); }
label_337ca4:
    // 0x337ca4: 0x82115dea  lb          $s1, 0x5DEA($s0)
    ctx->pc = 0x337ca4u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24042)));
label_337ca8:
    // 0x337ca8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x337ca8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_337cac:
    // 0x337cac: 0x0  nop
    ctx->pc = 0x337cacu;
    // NOP
label_337cb0:
    // 0x337cb0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x337cb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_337cb4:
    // 0x337cb4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x337cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_337cb8:
    // 0x337cb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x337cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_337cbc:
    // 0x337cbc: 0x0  nop
    ctx->pc = 0x337cbcu;
    // NOP
label_337cc0:
    // 0x337cc0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x337cc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_337cc4:
    // 0x337cc4: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x337cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_337cc8:
    // 0x337cc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x337cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_337ccc:
    // 0x337ccc: 0x0  nop
    ctx->pc = 0x337cccu;
    // NOP
label_337cd0:
    // 0x337cd0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x337cd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_337cd4:
    // 0x337cd4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x337cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_337cd8:
    // 0x337cd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x337cd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_337cdc:
    // 0x337cdc: 0x0  nop
    ctx->pc = 0x337cdcu;
    // NOP
label_337ce0:
    // 0x337ce0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x337ce0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_337ce4:
    // 0x337ce4: 0xe660008c  swc1        $f0, 0x8C($s3)
    ctx->pc = 0x337ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 140), bits); }
label_337ce8:
    // 0x337ce8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x337ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_337cec:
    // 0x337cec: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x337cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_337cf0:
    // 0x337cf0: 0x26660044  addiu       $a2, $s3, 0x44
    ctx->pc = 0x337cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 68));
label_337cf4:
    // 0x337cf4: 0x26670084  addiu       $a3, $s3, 0x84
    ctx->pc = 0x337cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
label_337cf8:
    // 0x337cf8: 0x266800c4  addiu       $t0, $s3, 0xC4
    ctx->pc = 0x337cf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 196));
label_337cfc:
    // 0x337cfc: 0x26690104  addiu       $t1, $s3, 0x104
    ctx->pc = 0x337cfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 260));
label_337d00:
    // 0x337d00: 0xc0a43e0  jal         func_290F80
label_337d04:
    if (ctx->pc == 0x337D04u) {
        ctx->pc = 0x337D08u;
        goto label_337d08;
    }
    ctx->pc = 0x337D00u;
    SET_GPR_U32(ctx, 31, 0x337D08u);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x337D00u, 0x337D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337D08u;
label_337d08:
    // 0x337d08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x337d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_337d0c:
    // 0x337d0c: 0xae025dc0  sw          $v0, 0x5DC0($s0)
    ctx->pc = 0x337d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24000), GPR_U32(ctx, 2));
label_337d10:
    // 0x337d10: 0xae005dc4  sw          $zero, 0x5DC4($s0)
    ctx->pc = 0x337d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24004), GPR_U32(ctx, 0));
label_337d14:
    // 0x337d14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x337d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_337d18:
    // 0x337d18: 0xae025dc8  sw          $v0, 0x5DC8($s0)
    ctx->pc = 0x337d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 2));
label_337d1c:
    // 0x337d1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x337d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_337d20:
    // 0x337d20: 0xae025dcc  sw          $v0, 0x5DCC($s0)
    ctx->pc = 0x337d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24012), GPR_U32(ctx, 2));
label_337d24:
    // 0x337d24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x337d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_337d28:
    // 0x337d28: 0xae025dd4  sw          $v0, 0x5DD4($s0)
    ctx->pc = 0x337d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24020), GPR_U32(ctx, 2));
label_337d2c:
    // 0x337d2c: 0x10000040  b           . + 4 + (0x40 << 2)
label_337d30:
    if (ctx->pc == 0x337D30u) {
        ctx->pc = 0x337D34u;
        goto label_337d34;
    }
    ctx->pc = 0x337D2Cu;
    {
        const bool branch_taken_0x337d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337d2c) {
            ctx->pc = 0x337E30u;
            goto label_337e30;
        }
    }
    ctx->pc = 0x337D34u;
label_337d34:
    // 0x337d34: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337d38:
    // 0x337d38: 0x8c234e40  lw          $v1, 0x4E40($at)
    ctx->pc = 0x337d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20032)));
label_337d3c:
    // 0x337d3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x337d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_337d40:
    // 0x337d40: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_337d44:
    if (ctx->pc == 0x337D44u) {
        ctx->pc = 0x337D48u;
        goto label_337d48;
    }
    ctx->pc = 0x337D40u;
    {
        const bool branch_taken_0x337d40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x337d40) {
            ctx->pc = 0x337D5Cu;
            goto label_337d5c;
        }
    }
    ctx->pc = 0x337D48u;
label_337d48:
    // 0x337d48: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337d4c:
    // 0x337d4c: 0x8c234e48  lw          $v1, 0x4E48($at)
    ctx->pc = 0x337d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20040)));
label_337d50:
    // 0x337d50: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x337d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_337d54:
    // 0x337d54: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
label_337d58:
    if (ctx->pc == 0x337D58u) {
        ctx->pc = 0x337D5Cu;
        goto label_337d5c;
    }
    ctx->pc = 0x337D54u;
    {
        const bool branch_taken_0x337d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x337d54) {
            ctx->pc = 0x337DF0u;
            goto label_337df0;
        }
    }
    ctx->pc = 0x337D5Cu;
label_337d5c:
    // 0x337d5c: 0x9202683f  lbu         $v0, 0x683F($s0)
    ctx->pc = 0x337d5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26687)));
label_337d60:
    // 0x337d60: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x337d60u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_337d64:
    // 0x337d64: 0xafb100a8  sw          $s1, 0xA8($sp)
    ctx->pc = 0x337d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 17));
label_337d68:
    // 0x337d68: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x337d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
label_337d6c:
    // 0x337d6c: 0x9022c98e  lbu         $v0, -0x3672($at)
    ctx->pc = 0x337d6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294953358)));
label_337d70:
    // 0x337d70: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x337d70u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_337d74:
    // 0x337d74: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x337d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_337d78:
    // 0x337d78: 0x242b823  subu        $s7, $s2, $v0
    ctx->pc = 0x337d78u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_337d7c:
    // 0x337d7c: 0x9202683f  lbu         $v0, 0x683F($s0)
    ctx->pc = 0x337d7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26687)));
label_337d80:
    // 0x337d80: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x337d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_337d84:
    // 0x337d84: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337d88:
    // 0x337d88: 0x8c224e38  lw          $v0, 0x4E38($at)
    ctx->pc = 0x337d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20024)));
label_337d8c:
    // 0x337d8c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x337d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_337d90:
    // 0x337d90: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x337d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_337d94:
    // 0x337d94: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x337d94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_337d98:
    // 0x337d98: 0xa2025deb  sb          $v0, 0x5DEB($s0)
    ctx->pc = 0x337d98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24043), (uint8_t)GPR_U32(ctx, 2));
label_337d9c:
    // 0x337d9c: 0x82035deb  lb          $v1, 0x5DEB($s0)
    ctx->pc = 0x337d9cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
label_337da0:
    // 0x337da0: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x337da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
label_337da4:
    // 0x337da4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x337da4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_337da8:
    // 0x337da8: 0x24430002  addiu       $v1, $v0, 0x2
    ctx->pc = 0x337da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_337dac:
    // 0x337dac: 0x2e3082b  sltu        $at, $s7, $v1
    ctx->pc = 0x337dacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_337db0:
    // 0x337db0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_337db4:
    if (ctx->pc == 0x337DB4u) {
        ctx->pc = 0x337DB8u;
        goto label_337db8;
    }
    ctx->pc = 0x337DB0u;
    {
        const bool branch_taken_0x337db0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x337db0) {
            ctx->pc = 0x337DE0u;
            goto label_337de0;
        }
    }
    ctx->pc = 0x337DB8u;
label_337db8:
    // 0x337db8: 0x2ee10003  sltiu       $at, $s7, 0x3
    ctx->pc = 0x337db8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_337dbc:
    // 0x337dbc: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_337dc0:
    if (ctx->pc == 0x337DC0u) {
        ctx->pc = 0x337DC4u;
        goto label_337dc4;
    }
    ctx->pc = 0x337DBCu;
    {
        const bool branch_taken_0x337dbc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x337dbc) {
            ctx->pc = 0x337DD4u;
            goto label_337dd4;
        }
    }
    ctx->pc = 0x337DC4u;
label_337dc4:
    // 0x337dc4: 0x26e2fffe  addiu       $v0, $s7, -0x2
    ctx->pc = 0x337dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967294));
label_337dc8:
    // 0x337dc8: 0xae026850  sw          $v0, 0x6850($s0)
    ctx->pc = 0x337dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26704), GPR_U32(ctx, 2));
label_337dcc:
    // 0x337dcc: 0x10000008  b           . + 4 + (0x8 << 2)
label_337dd0:
    if (ctx->pc == 0x337DD0u) {
        ctx->pc = 0x337DD4u;
        goto label_337dd4;
    }
    ctx->pc = 0x337DCCu;
    {
        const bool branch_taken_0x337dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337dcc) {
            ctx->pc = 0x337DF0u;
            goto label_337df0;
        }
    }
    ctx->pc = 0x337DD4u;
label_337dd4:
    // 0x337dd4: 0xae006850  sw          $zero, 0x6850($s0)
    ctx->pc = 0x337dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26704), GPR_U32(ctx, 0));
label_337dd8:
    // 0x337dd8: 0x10000005  b           . + 4 + (0x5 << 2)
label_337ddc:
    if (ctx->pc == 0x337DDCu) {
        ctx->pc = 0x337DE0u;
        goto label_337de0;
    }
    ctx->pc = 0x337DD8u;
    {
        const bool branch_taken_0x337dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337dd8) {
            ctx->pc = 0x337DF0u;
            goto label_337df0;
        }
    }
    ctx->pc = 0x337DE0u;
label_337de0:
    // 0x337de0: 0x82025deb  lb          $v0, 0x5DEB($s0)
    ctx->pc = 0x337de0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
label_337de4:
    // 0x337de4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x337de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_337de8:
    // 0x337de8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x337de8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_337dec:
    // 0x337dec: 0xae026850  sw          $v0, 0x6850($s0)
    ctx->pc = 0x337decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26704), GPR_U32(ctx, 2));
label_337df0:
    // 0x337df0: 0xc0cc9a0  jal         func_332680
label_337df4:
    if (ctx->pc == 0x337DF4u) {
        ctx->pc = 0x337DF8u;
        goto label_337df8;
    }
    ctx->pc = 0x337DF0u;
    SET_GPR_U32(ctx, 31, 0x337DF8u);
    ctx->pc = 0x332680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332680u, 0x337DF0u, 0x337DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337DF8u;
label_337df8:
    // 0x337df8: 0x8e025dd4  lw          $v0, 0x5DD4($s0)
    ctx->pc = 0x337df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24020)));
label_337dfc:
    // 0x337dfc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x337dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_337e00:
    // 0x337e00: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
label_337e04:
    if (ctx->pc == 0x337E04u) {
        ctx->pc = 0x337E08u;
        goto label_337e08;
    }
    ctx->pc = 0x337E00u;
    {
        const bool branch_taken_0x337e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x337e00) {
            ctx->pc = 0x337E30u;
            goto label_337e30;
        }
    }
    ctx->pc = 0x337E08u;
label_337e08:
    // 0x337e08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x337e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_337e0c:
    // 0x337e0c: 0xae025dc0  sw          $v0, 0x5DC0($s0)
    ctx->pc = 0x337e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24000), GPR_U32(ctx, 2));
label_337e10:
    // 0x337e10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x337e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_337e14:
    // 0x337e14: 0xae065dc4  sw          $a2, 0x5DC4($s0)
    ctx->pc = 0x337e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24004), GPR_U32(ctx, 6));
label_337e18:
    // 0x337e18: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x337e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_337e1c:
    // 0x337e1c: 0xae025dc8  sw          $v0, 0x5DC8($s0)
    ctx->pc = 0x337e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 2));
label_337e20:
    // 0x337e20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x337e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_337e24:
    // 0x337e24: 0xae025dcc  sw          $v0, 0x5DCC($s0)
    ctx->pc = 0x337e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24012), GPR_U32(ctx, 2));
label_337e28:
    // 0x337e28: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x337e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_337e2c:
    // 0x337e2c: 0xae025dd4  sw          $v0, 0x5DD4($s0)
    ctx->pc = 0x337e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24020), GPR_U32(ctx, 2));
label_337e30:
    // 0x337e30: 0x8e026870  lw          $v0, 0x6870($s0)
    ctx->pc = 0x337e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26736)));
label_337e34:
    // 0x337e34: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x337e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_337e38:
    // 0x337e38: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x337e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_337e3c:
    // 0x337e3c: 0xae026870  sw          $v0, 0x6870($s0)
    ctx->pc = 0x337e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26736), GPR_U32(ctx, 2));
label_337e40:
    // 0x337e40: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x337e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_337e44:
    // 0x337e44: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x337e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
label_337e48:
    // 0x337e48: 0x24452728  addiu       $a1, $v0, 0x2728
    ctx->pc = 0x337e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10024));
label_337e4c:
    // 0x337e4c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x337e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_337e50:
    // 0x337e50: 0xc0462a6  jal         func_118A98
label_337e54:
    if (ctx->pc == 0x337E54u) {
        ctx->pc = 0x337E58u;
        goto label_337e58;
    }
    ctx->pc = 0x337E50u;
    SET_GPR_U32(ctx, 31, 0x337E58u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x337E58u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x337E58u) { return; }
    ctx->pc = 0x337E58u;
label_337e58:
    // 0x337e58: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x337e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_337e5c:
    // 0x337e5c: 0xae020128  sw          $v0, 0x128($s0)
    ctx->pc = 0x337e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
label_337e60:
    // 0x337e60: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x337e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
label_337e64:
    // 0x337e64: 0x24524ed0  addiu       $s2, $v0, 0x4ED0
    ctx->pc = 0x337e64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 20176));
label_337e68:
    // 0x337e68: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x337e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
label_337e6c:
    // 0x337e6c: 0x24514fa0  addiu       $s1, $v0, 0x4FA0
    ctx->pc = 0x337e6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 20384));
label_337e70:
    // 0x337e70: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x337e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_337e74:
    // 0x337e74: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x337e74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_337e78:
    // 0x337e78: 0x3c028800  lui         $v0, 0x8800
    ctx->pc = 0x337e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34816 << 16));
label_337e7c:
    // 0x337e7c: 0x34423b14  ori         $v0, $v0, 0x3B14
    ctx->pc = 0x337e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15124);
label_337e80:
    // 0x337e80: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x337e80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_337e84:
    // 0x337e84: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337e88:
    // 0x337e88: 0x94224eb4  lhu         $v0, 0x4EB4($at)
    ctx->pc = 0x337e88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 20148)));
label_337e8c:
    // 0x337e8c: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x337e8cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_337e90:
    // 0x337e90: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337e94:
    // 0x337e94: 0x94234eb0  lhu         $v1, 0x4EB0($at)
    ctx->pc = 0x337e94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 20144)));
label_337e98:
    // 0x337e98: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x337e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_337e9c:
    // 0x337e9c: 0x3c21023  subu        $v0, $fp, $v0
    ctx->pc = 0x337e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_337ea0:
    // 0x337ea0: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x337ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_337ea4:
    // 0x337ea4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337ea8:
    // 0x337ea8: 0x94224eb6  lhu         $v0, 0x4EB6($at)
    ctx->pc = 0x337ea8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 20150)));
label_337eac:
    // 0x337eac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x337eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_337eb0:
    // 0x337eb0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337eb4:
    // 0x337eb4: 0x94234eb2  lhu         $v1, 0x4EB2($at)
    ctx->pc = 0x337eb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 20146)));
label_337eb8:
    // 0x337eb8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x337eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_337ebc:
    // 0x337ebc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x337ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_337ec0:
    // 0x337ec0: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x337ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_337ec4:
    // 0x337ec4: 0x24150100  addiu       $s5, $zero, 0x100
    ctx->pc = 0x337ec4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_337ec8:
    // 0x337ec8: 0x241600e0  addiu       $s6, $zero, 0xE0
    ctx->pc = 0x337ec8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_337ecc:
    // 0x337ecc: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x337eccu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_337ed0:
    // 0x337ed0: 0x0  nop
    ctx->pc = 0x337ed0u;
    // NOP
label_337ed4:
    // 0x337ed4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x337ed4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_337ed8:
    // 0x337ed8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x337ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_337edc:
    // 0x337edc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x337edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_337ee0:
    // 0x337ee0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x337ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_337ee4:
    // 0x337ee4: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x337ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_337ee8:
    // 0x337ee8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_337eec:
    if (ctx->pc == 0x337EECu) {
        ctx->pc = 0x337EF0u;
        goto label_337ef0;
    }
    ctx->pc = 0x337EE8u;
    {
        const bool branch_taken_0x337ee8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x337ee8) {
            ctx->pc = 0x337F04u;
            goto label_337f04;
        }
    }
    ctx->pc = 0x337EF0u;
label_337ef0:
    // 0x337ef0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x337ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_337ef4:
    // 0x337ef4: 0x0  nop
    ctx->pc = 0x337ef4u;
    // NOP
label_337ef8:
    // 0x337ef8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x337ef8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_337efc:
    // 0x337efc: 0x10000008  b           . + 4 + (0x8 << 2)
label_337f00:
    if (ctx->pc == 0x337F00u) {
        ctx->pc = 0x337F04u;
        goto label_337f04;
    }
    ctx->pc = 0x337EFCu;
    {
        const bool branch_taken_0x337efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337efc) {
            ctx->pc = 0x337F20u;
            goto label_337f20;
        }
    }
    ctx->pc = 0x337F04u;
label_337f04:
    // 0x337f04: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x337f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_337f08:
    // 0x337f08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x337f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_337f0c:
    // 0x337f0c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x337f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_337f10:
    // 0x337f10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x337f10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_337f14:
    // 0x337f14: 0x0  nop
    ctx->pc = 0x337f14u;
    // NOP
label_337f18:
    // 0x337f18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x337f18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_337f1c:
    // 0x337f1c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x337f1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_337f20:
    // 0x337f20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x337f20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_337f24:
    // 0x337f24: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x337f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_337f28:
    // 0x337f28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x337f28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_337f2c:
    // 0x337f2c: 0x0  nop
    ctx->pc = 0x337f2cu;
    // NOP
label_337f30:
    // 0x337f30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x337f30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_337f34:
    // 0x337f34: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x337f34u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_337f38:
    // 0x337f38: 0xc047f7e  jal         func_11FDF8
label_337f3c:
    if (ctx->pc == 0x337F3Cu) {
        ctx->pc = 0x337F40u;
        goto label_337f40;
    }
    ctx->pc = 0x337F38u;
    SET_GPR_U32(ctx, 31, 0x337F40u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x337F38u, 0x337F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337F40u;
label_337f40:
    // 0x337f40: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x337f40u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_337f44:
    // 0x337f44: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x337f44u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_337f48:
    // 0x337f48: 0x0  nop
    ctx->pc = 0x337f48u;
    // NOP
label_337f4c:
    // 0x337f4c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x337f4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_337f50:
    // 0x337f50: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x337f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_337f54:
    // 0x337f54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x337f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_337f58:
    // 0x337f58: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x337f58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_337f5c:
    // 0x337f5c: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
label_337f60:
    if (ctx->pc == 0x337F60u) {
        ctx->pc = 0x337F64u;
        goto label_337f64;
    }
    ctx->pc = 0x337F5Cu;
    {
        const bool branch_taken_0x337f5c = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x337f5c) {
            ctx->pc = 0x337F78u;
            goto label_337f78;
        }
    }
    ctx->pc = 0x337F64u;
label_337f64:
    // 0x337f64: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x337f64u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_337f68:
    // 0x337f68: 0x0  nop
    ctx->pc = 0x337f68u;
    // NOP
label_337f6c:
    // 0x337f6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x337f6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_337f70:
    // 0x337f70: 0x10000008  b           . + 4 + (0x8 << 2)
label_337f74:
    if (ctx->pc == 0x337F74u) {
        ctx->pc = 0x337F78u;
        goto label_337f78;
    }
    ctx->pc = 0x337F70u;
    {
        const bool branch_taken_0x337f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337f70) {
            ctx->pc = 0x337F94u;
            goto label_337f94;
        }
    }
    ctx->pc = 0x337F78u;
label_337f78:
    // 0x337f78: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x337f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_337f7c:
    // 0x337f7c: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x337f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_337f80:
    // 0x337f80: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x337f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_337f84:
    // 0x337f84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x337f84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_337f88:
    // 0x337f88: 0x0  nop
    ctx->pc = 0x337f88u;
    // NOP
label_337f8c:
    // 0x337f8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x337f8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_337f90:
    // 0x337f90: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x337f90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_337f94:
    // 0x337f94: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x337f94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_337f98:
    // 0x337f98: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x337f98u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_337f9c:
    // 0x337f9c: 0xc047f7e  jal         func_11FDF8
label_337fa0:
    if (ctx->pc == 0x337FA0u) {
        ctx->pc = 0x337FA4u;
        goto label_337fa4;
    }
    ctx->pc = 0x337F9Cu;
    SET_GPR_U32(ctx, 31, 0x337FA4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x337F9Cu, 0x337FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337FA4u;
label_337fa4:
    // 0x337fa4: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x337fa4u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_337fa8:
    // 0x337fa8: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x337fa8u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_337fac:
    // 0x337fac: 0x0  nop
    ctx->pc = 0x337facu;
    // NOP
label_337fb0:
    // 0x337fb0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x337fb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_337fb4:
    // 0x337fb4: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x337fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_337fb8:
    // 0x337fb8: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x337fb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_337fbc:
    // 0x337fbc: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x337fbcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_337fc0:
    // 0x337fc0: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x337fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_337fc4:
    // 0x337fc4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_337fc8:
    if (ctx->pc == 0x337FC8u) {
        ctx->pc = 0x337FCCu;
        goto label_337fcc;
    }
    ctx->pc = 0x337FC4u;
    {
        const bool branch_taken_0x337fc4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x337fc4) {
            ctx->pc = 0x337FE0u;
            goto label_337fe0;
        }
    }
    ctx->pc = 0x337FCCu;
label_337fcc:
    // 0x337fcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x337fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_337fd0:
    // 0x337fd0: 0x0  nop
    ctx->pc = 0x337fd0u;
    // NOP
label_337fd4:
    // 0x337fd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x337fd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_337fd8:
    // 0x337fd8: 0x10000008  b           . + 4 + (0x8 << 2)
label_337fdc:
    if (ctx->pc == 0x337FDCu) {
        ctx->pc = 0x337FE0u;
        goto label_337fe0;
    }
    ctx->pc = 0x337FD8u;
    {
        const bool branch_taken_0x337fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337fd8) {
            ctx->pc = 0x337FFCu;
            goto label_337ffc;
        }
    }
    ctx->pc = 0x337FE0u;
label_337fe0:
    // 0x337fe0: 0x23042  srl         $a2, $v0, 1
    ctx->pc = 0x337fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_337fe4:
    // 0x337fe4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x337fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_337fe8:
    // 0x337fe8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x337fe8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_337fec:
    // 0x337fec: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x337fecu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_337ff0:
    // 0x337ff0: 0x0  nop
    ctx->pc = 0x337ff0u;
    // NOP
label_337ff4:
    // 0x337ff4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x337ff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_337ff8:
    // 0x337ff8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x337ff8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_337ffc:
    // 0x337ffc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x337ffcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_338000:
    // 0x338000: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x338000u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_338004:
    // 0x338004: 0xc047f7e  jal         func_11FDF8
label_338008:
    if (ctx->pc == 0x338008u) {
        ctx->pc = 0x33800Cu;
        goto label_33800c;
    }
    ctx->pc = 0x338004u;
    SET_GPR_U32(ctx, 31, 0x33800Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x338004u, 0x33800Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33800Cu;
label_33800c:
    // 0x33800c: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x33800cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_338010:
    // 0x338010: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x338010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_338014:
    // 0x338014: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x338014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_338018:
    // 0x338018: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x338018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_33801c:
    // 0x33801c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x33801cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_338020:
    // 0x338020: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x338020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_338024:
    // 0x338024: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x338024u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_338028:
    // 0x338028: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x338028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
label_33802c:
    // 0x33802c: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x33802cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
label_338030:
    // 0x338030: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x338030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_338034:
    // 0x338034: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x338034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
label_338038:
    // 0x338038: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x338038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_33803c:
    // 0x33803c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x33803cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_338040:
    // 0x338040: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x338040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_338044:
    // 0x338044: 0x26420018  addiu       $v0, $s2, 0x18
    ctx->pc = 0x338044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_338048:
    // 0x338048: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x338048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_33804c:
    // 0x33804c: 0x3404fffb  ori         $a0, $zero, 0xFFFB
    ctx->pc = 0x33804cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
label_338050:
    // 0x338050: 0x2642001c  addiu       $v0, $s2, 0x1C
    ctx->pc = 0x338050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_338054:
    // 0x338054: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x338054u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_338058:
    // 0x338058: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x338058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_33805c:
    // 0x33805c: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x33805cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_338060:
    // 0x338060: 0x24c27000  addiu       $v0, $a2, 0x7000
    ctx->pc = 0x338060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 28672));
label_338064:
    // 0x338064: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x338064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_338068:
    // 0x338068: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x338068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
label_33806c:
    // 0x33806c: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x33806cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_338070:
    // 0x338070: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x338070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_338074:
    // 0x338074: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x338074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_338078:
    // 0x338078: 0x26420024  addiu       $v0, $s2, 0x24
    ctx->pc = 0x338078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
label_33807c:
    // 0x33807c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x33807cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_338080:
    // 0x338080: 0x3404fffb  ori         $a0, $zero, 0xFFFB
    ctx->pc = 0x338080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
label_338084:
    // 0x338084: 0x26420028  addiu       $v0, $s2, 0x28
    ctx->pc = 0x338084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
label_338088:
    // 0x338088: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x338088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_33808c:
    // 0x33808c: 0x152900  sll         $a1, $s5, 4
    ctx->pc = 0x33808cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
label_338090:
    // 0x338090: 0x24a27000  addiu       $v0, $a1, 0x7000
    ctx->pc = 0x338090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 28672));
label_338094:
    // 0x338094: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x338094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_338098:
    // 0x338098: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x338098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_33809c:
    // 0x33809c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x33809cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3380a0:
    // 0x3380a0: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x3380a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_3380a4:
    // 0x3380a4: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x3380a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_3380a8:
    // 0x3380a8: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x3380a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_3380ac:
    // 0x3380ac: 0x26540030  addiu       $s4, $s2, 0x30
    ctx->pc = 0x3380acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_3380b0:
    // 0x3380b0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x3380b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_3380b4:
    // 0x3380b4: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x3380b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
label_3380b8:
    // 0x3380b8: 0x26420034  addiu       $v0, $s2, 0x34
    ctx->pc = 0x3380b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
label_3380bc:
    // 0x3380bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3380bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3380c0:
    // 0x3380c0: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x3380c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_3380c4:
    // 0x3380c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3380c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3380c8:
    // 0x3380c8: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x3380c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
label_3380cc:
    // 0x3380cc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3380ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3380d0:
    // 0x3380d0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x3380d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3380d4:
    // 0x3380d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3380d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3380d8:
    // 0x3380d8: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x3380d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_3380dc:
    // 0x3380dc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3380dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_3380e0:
    // 0x3380e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3380e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3380e4:
    // 0x3380e4: 0x2642003c  addiu       $v0, $s2, 0x3C
    ctx->pc = 0x3380e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
label_3380e8:
    // 0x3380e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3380e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3380ec:
    // 0x3380ec: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x3380ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
label_3380f0:
    // 0x3380f0: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x3380f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_3380f4:
    // 0x3380f4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3380f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3380f8:
    // 0x3380f8: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3380f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
label_3380fc:
    // 0x3380fc: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x3380fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
label_338100:
    // 0x338100: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x338100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_338104:
    // 0x338104: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x338104u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_338108:
    // 0x338108: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_33810c:
    // 0x33810c: 0x94224eb0  lhu         $v0, 0x4EB0($at)
    ctx->pc = 0x33810cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 20144)));
label_338110:
    // 0x338110: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x338110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_338114:
    // 0x338114: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x338114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_338118:
    // 0x338118: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_33811c:
    // 0x33811c: 0x94224eb2  lhu         $v0, 0x4EB2($at)
    ctx->pc = 0x33811cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 20146)));
label_338120:
    // 0x338120: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x338120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_338124:
    // 0x338124: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x338124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_338128:
    // 0x338128: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x338128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_33812c:
    // 0x33812c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33812cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_338130:
    // 0x338130: 0x26420014  addiu       $v0, $s2, 0x14
    ctx->pc = 0x338130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_338134:
    // 0x338134: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x338134u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_338138:
    // 0x338138: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_33813c:
    // 0x33813c: 0x94224eb4  lhu         $v0, 0x4EB4($at)
    ctx->pc = 0x33813cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 20148)));
label_338140:
    // 0x338140: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x338140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_338144:
    // 0x338144: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x338144u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_338148:
    // 0x338148: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_33814c:
    // 0x33814c: 0x94234eb2  lhu         $v1, 0x4EB2($at)
    ctx->pc = 0x33814cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 20146)));
label_338150:
    // 0x338150: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x338150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_338154:
    // 0x338154: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x338154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_338158:
    // 0x338158: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x338158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_33815c:
    // 0x33815c: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x33815cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_338160:
    // 0x338160: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x338160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_338164:
    // 0x338164: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x338164u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_338168:
    // 0x338168: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_33816c:
    // 0x33816c: 0x94224eb0  lhu         $v0, 0x4EB0($at)
    ctx->pc = 0x33816cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 20144)));
label_338170:
    // 0x338170: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x338170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_338174:
    // 0x338174: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x338174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_338178:
    // 0x338178: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_33817c:
    // 0x33817c: 0x94254eb6  lhu         $a1, 0x4EB6($at)
    ctx->pc = 0x33817cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 20150)));
label_338180:
    // 0x338180: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x338180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_338184:
    // 0x338184: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x338184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_338188:
    // 0x338188: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x338188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_33818c:
    // 0x33818c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x33818cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_338190:
    // 0x338190: 0x2643002c  addiu       $v1, $s2, 0x2C
    ctx->pc = 0x338190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
label_338194:
    // 0x338194: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x338194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_338198:
    // 0x338198: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_33819c:
    // 0x33819c: 0x94224eb4  lhu         $v0, 0x4EB4($at)
    ctx->pc = 0x33819cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 20148)));
label_3381a0:
    // 0x3381a0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3381a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3381a4:
    // 0x3381a4: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x3381a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3381a8:
    // 0x3381a8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3381a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_3381ac:
    // 0x3381ac: 0x94234eb6  lhu         $v1, 0x4EB6($at)
    ctx->pc = 0x3381acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 20150)));
label_3381b0:
    // 0x3381b0: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x3381b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_3381b4:
    // 0x3381b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3381b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3381b8:
    // 0x3381b8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3381b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_3381bc:
    // 0x3381bc: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x3381bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_3381c0:
    // 0x3381c0: 0x26420038  addiu       $v0, $s2, 0x38
    ctx->pc = 0x3381c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
label_3381c4:
    // 0x3381c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3381c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3381c8:
    // 0x3381c8: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x3381c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
label_3381cc:
    // 0x3381cc: 0x24424e88  addiu       $v0, $v0, 0x4E88
    ctx->pc = 0x3381ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20104));
label_3381d0:
    // 0x3381d0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3381d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_3381d4:
    // 0x3381d4: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3381d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3381d8:
    // 0x3381d8: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x3381d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_3381dc:
    // 0x3381dc: 0xc05dbd8  jal         func_176F60
label_3381e0:
    if (ctx->pc == 0x3381E0u) {
        ctx->pc = 0x3381E4u;
        goto label_3381e4;
    }
    ctx->pc = 0x3381DCu;
    SET_GPR_U32(ctx, 31, 0x3381E4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3381DCu, 0x3381E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3381E4u;
label_3381e4:
    // 0x3381e4: 0x26520044  addiu       $s2, $s2, 0x44
    ctx->pc = 0x3381e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
label_3381e8:
    // 0x3381e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3381e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3381ec:
    // 0x3381ec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3381ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3381f0:
    // 0x3381f0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3381f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_3381f4:
    // 0x3381f4: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x3381f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
label_3381f8:
    // 0x3381f8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3381f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3381fc:
    // 0x3381fc: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x3381fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_338200:
    // 0x338200: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x338200u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
label_338204:
    // 0x338204: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x338204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_338208:
    // 0x338208: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x338208u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_33820c:
    // 0x33820c: 0xc05dbd8  jal         func_176F60
label_338210:
    if (ctx->pc == 0x338210u) {
        ctx->pc = 0x338214u;
        goto label_338214;
    }
    ctx->pc = 0x33820Cu;
    SET_GPR_U32(ctx, 31, 0x338214u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x33820Cu, 0x338214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338214u;
label_338214:
    // 0x338214: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x338214u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_338218:
    // 0x338218: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x338218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_33821c:
    // 0x33821c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x33821cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_338220:
    // 0x338220: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x338220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_338224:
    // 0x338224: 0x34431009  ori         $v1, $v0, 0x1009
    ctx->pc = 0x338224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
label_338228:
    // 0x338228: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x338228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_33822c:
    // 0x33822c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33822cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_338230:
    // 0x338230: 0x94224eb0  lhu         $v0, 0x4EB0($at)
    ctx->pc = 0x338230u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 20144)));
label_338234:
    // 0x338234: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x338234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_338238:
    // 0x338238: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x338238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
label_33823c:
    // 0x33823c: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x33823cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_338240:
    // 0x338240: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_338244:
    // 0x338244: 0x94234eb4  lhu         $v1, 0x4EB4($at)
    ctx->pc = 0x338244u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 20148)));
label_338248:
    // 0x338248: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x338248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_33824c:
    // 0x33824c: 0x41bb8  dsll        $v1, $a0, 14
    ctx->pc = 0x33824cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 14);
label_338250:
    // 0x338250: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x338250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_338254:
    // 0x338254: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_338258:
    // 0x338258: 0x94224eb2  lhu         $v0, 0x4EB2($at)
    ctx->pc = 0x338258u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 20146)));
label_33825c:
    // 0x33825c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33825cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_338260:
    // 0x338260: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x338260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_338264:
    // 0x338264: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x338264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_338268:
    // 0x338268: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_33826c:
    // 0x33826c: 0x94244eb6  lhu         $a0, 0x4EB6($at)
    ctx->pc = 0x33826cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 20150)));
label_338270:
    // 0x338270: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x338270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_338274:
    // 0x338274: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x338274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
label_338278:
    // 0x338278: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x338278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_33827c:
    // 0x33827c: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x33827cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
label_338280:
    // 0x338280: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x338280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_338284:
    // 0x338284: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x338284u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_338288:
    // 0x338288: 0xc05dbd8  jal         func_176F60
label_33828c:
    if (ctx->pc == 0x33828Cu) {
        ctx->pc = 0x338290u;
        goto label_338290;
    }
    ctx->pc = 0x338288u;
    SET_GPR_U32(ctx, 31, 0x338290u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x338288u, 0x338290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338290u;
label_338290:
    // 0x338290: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x338290u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_338294:
    // 0x338294: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x338294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_338298:
    // 0x338298: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x338298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_33829c:
    // 0x33829c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x33829cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_3382a0:
    // 0x3382a0: 0x34421015  ori         $v0, $v0, 0x1015
    ctx->pc = 0x3382a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
label_3382a4:
    // 0x3382a4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3382a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3382a8:
    // 0x3382a8: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x3382a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_3382ac:
    // 0x3382ac: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x3382acu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
label_3382b0:
    // 0x3382b0: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3382b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3382b4:
    // 0x3382b4: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x3382b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_3382b8:
    // 0x3382b8: 0xc05dbd8  jal         func_176F60
label_3382bc:
    if (ctx->pc == 0x3382BCu) {
        ctx->pc = 0x3382C0u;
        goto label_3382c0;
    }
    ctx->pc = 0x3382B8u;
    SET_GPR_U32(ctx, 31, 0x3382C0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3382B8u, 0x3382C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3382C0u;
label_3382c0:
    // 0x3382c0: 0x26330010  addiu       $s3, $s1, 0x10
    ctx->pc = 0x3382c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3382c4:
    // 0x3382c4: 0x72608e28  paddub      $s1, $s3, $zero
    ctx->pc = 0x3382c4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_3382c8:
    // 0x3382c8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3382c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3382cc:
    // 0x3382cc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3382ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3382d0:
    // 0x3382d0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3382d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_3382d4:
    // 0x3382d4: 0x3442103b  ori         $v0, $v0, 0x103B
    ctx->pc = 0x3382d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4155);
label_3382d8:
    // 0x3382d8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3382d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3382dc:
    // 0x3382dc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x3382dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3382e0:
    // 0x3382e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3382e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3382e4:
    // 0x3382e4: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x3382e4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
label_3382e8:
    // 0x3382e8: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3382e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3382ec:
    // 0x3382ec: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x3382ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_3382f0:
    // 0x3382f0: 0xc05dbd8  jal         func_176F60
label_3382f4:
    if (ctx->pc == 0x3382F4u) {
        ctx->pc = 0x3382F8u;
        goto label_3382f8;
    }
    ctx->pc = 0x3382F0u;
    SET_GPR_U32(ctx, 31, 0x3382F8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3382F0u, 0x3382F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3382F8u;
label_3382f8:
    // 0x3382f8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x3382f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3382fc:
    // 0x3382fc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3382fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_338300:
    // 0x338300: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x338300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_338304:
    // 0x338304: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x338304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_338308:
    // 0x338308: 0x3442103f  ori         $v0, $v0, 0x103F
    ctx->pc = 0x338308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4159);
label_33830c:
    // 0x33830c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x33830cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_338310:
    // 0x338310: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x338310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_338314:
    // 0x338314: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x338314u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_338318:
    // 0x338318: 0xc05dbd8  jal         func_176F60
label_33831c:
    if (ctx->pc == 0x33831Cu) {
        ctx->pc = 0x338320u;
        goto label_338320;
    }
    ctx->pc = 0x338318u;
    SET_GPR_U32(ctx, 31, 0x338320u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x338318u, 0x338320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338320u;
label_338320:
    // 0x338320: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x338320u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_338324:
    // 0x338324: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x338324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_338328:
    // 0x338328: 0x70c08e28  paddub      $s1, $a2, $zero
    ctx->pc = 0x338328u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_33832c:
    // 0x33832c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x33832cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_338330:
    // 0x338330: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x338330u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_338334:
    // 0x338334: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x338334u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_338338:
    // 0x338338: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x338338u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_33833c:
    // 0x33833c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x33833cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_338340:
    // 0x338340: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x338340u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_338344:
    // 0x338344: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x338344u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_338348:
    // 0x338348: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x338348u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33834c:
    // 0x33834c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33834cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_338350:
    // 0x338350: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x338350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_338354:
    // 0x338354: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x338354u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_338358:
    // 0x338358: 0x3e00008  jr          $ra
label_33835c:
    if (ctx->pc == 0x33835Cu) {
        ctx->pc = 0x338360u;
        goto label_fallthrough_0x338358;
    }
    ctx->pc = 0x338358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x338358:
    ctx->pc = 0x338360u;
}
