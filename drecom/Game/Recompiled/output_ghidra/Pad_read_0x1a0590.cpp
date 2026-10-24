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

// Function: Pad_read
// Address: 0x1a0590 - 0x1a0acc
void Pad_read_0x1a0590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pad_read_0x1a0590");
#endif

    switch (ctx->pc) {
        case 0x1a0590u: goto label_1a0590;
        case 0x1a0594u: goto label_1a0594;
        case 0x1a0598u: goto label_1a0598;
        case 0x1a059cu: goto label_1a059c;
        case 0x1a05a0u: goto label_1a05a0;
        case 0x1a05a4u: goto label_1a05a4;
        case 0x1a05a8u: goto label_1a05a8;
        case 0x1a05acu: goto label_1a05ac;
        case 0x1a05b0u: goto label_1a05b0;
        case 0x1a05b4u: goto label_1a05b4;
        case 0x1a05b8u: goto label_1a05b8;
        case 0x1a05bcu: goto label_1a05bc;
        case 0x1a05c0u: goto label_1a05c0;
        case 0x1a05c4u: goto label_1a05c4;
        case 0x1a05c8u: goto label_1a05c8;
        case 0x1a05ccu: goto label_1a05cc;
        case 0x1a05d0u: goto label_1a05d0;
        case 0x1a05d4u: goto label_1a05d4;
        case 0x1a05d8u: goto label_1a05d8;
        case 0x1a05dcu: goto label_1a05dc;
        case 0x1a05e0u: goto label_1a05e0;
        case 0x1a05e4u: goto label_1a05e4;
        case 0x1a05e8u: goto label_1a05e8;
        case 0x1a05ecu: goto label_1a05ec;
        case 0x1a05f0u: goto label_1a05f0;
        case 0x1a05f4u: goto label_1a05f4;
        case 0x1a05f8u: goto label_1a05f8;
        case 0x1a05fcu: goto label_1a05fc;
        case 0x1a0600u: goto label_1a0600;
        case 0x1a0604u: goto label_1a0604;
        case 0x1a0608u: goto label_1a0608;
        case 0x1a060cu: goto label_1a060c;
        case 0x1a0610u: goto label_1a0610;
        case 0x1a0614u: goto label_1a0614;
        case 0x1a0618u: goto label_1a0618;
        case 0x1a061cu: goto label_1a061c;
        case 0x1a0620u: goto label_1a0620;
        case 0x1a0624u: goto label_1a0624;
        case 0x1a0628u: goto label_1a0628;
        case 0x1a062cu: goto label_1a062c;
        case 0x1a0630u: goto label_1a0630;
        case 0x1a0634u: goto label_1a0634;
        case 0x1a0638u: goto label_1a0638;
        case 0x1a063cu: goto label_1a063c;
        case 0x1a0640u: goto label_1a0640;
        case 0x1a0644u: goto label_1a0644;
        case 0x1a0648u: goto label_1a0648;
        case 0x1a064cu: goto label_1a064c;
        case 0x1a0650u: goto label_1a0650;
        case 0x1a0654u: goto label_1a0654;
        case 0x1a0658u: goto label_1a0658;
        case 0x1a065cu: goto label_1a065c;
        case 0x1a0660u: goto label_1a0660;
        case 0x1a0664u: goto label_1a0664;
        case 0x1a0668u: goto label_1a0668;
        case 0x1a066cu: goto label_1a066c;
        case 0x1a0670u: goto label_1a0670;
        case 0x1a0674u: goto label_1a0674;
        case 0x1a0678u: goto label_1a0678;
        case 0x1a067cu: goto label_1a067c;
        case 0x1a0680u: goto label_1a0680;
        case 0x1a0684u: goto label_1a0684;
        case 0x1a0688u: goto label_1a0688;
        case 0x1a068cu: goto label_1a068c;
        case 0x1a0690u: goto label_1a0690;
        case 0x1a0694u: goto label_1a0694;
        case 0x1a0698u: goto label_1a0698;
        case 0x1a069cu: goto label_1a069c;
        case 0x1a06a0u: goto label_1a06a0;
        case 0x1a06a4u: goto label_1a06a4;
        case 0x1a06a8u: goto label_1a06a8;
        case 0x1a06acu: goto label_1a06ac;
        case 0x1a06b0u: goto label_1a06b0;
        case 0x1a06b4u: goto label_1a06b4;
        case 0x1a06b8u: goto label_1a06b8;
        case 0x1a06bcu: goto label_1a06bc;
        case 0x1a06c0u: goto label_1a06c0;
        case 0x1a06c4u: goto label_1a06c4;
        case 0x1a06c8u: goto label_1a06c8;
        case 0x1a06ccu: goto label_1a06cc;
        case 0x1a06d0u: goto label_1a06d0;
        case 0x1a06d4u: goto label_1a06d4;
        case 0x1a06d8u: goto label_1a06d8;
        case 0x1a06dcu: goto label_1a06dc;
        case 0x1a06e0u: goto label_1a06e0;
        case 0x1a06e4u: goto label_1a06e4;
        case 0x1a06e8u: goto label_1a06e8;
        case 0x1a06ecu: goto label_1a06ec;
        case 0x1a06f0u: goto label_1a06f0;
        case 0x1a06f4u: goto label_1a06f4;
        case 0x1a06f8u: goto label_1a06f8;
        case 0x1a06fcu: goto label_1a06fc;
        case 0x1a0700u: goto label_1a0700;
        case 0x1a0704u: goto label_1a0704;
        case 0x1a0708u: goto label_1a0708;
        case 0x1a070cu: goto label_1a070c;
        case 0x1a0710u: goto label_1a0710;
        case 0x1a0714u: goto label_1a0714;
        case 0x1a0718u: goto label_1a0718;
        case 0x1a071cu: goto label_1a071c;
        case 0x1a0720u: goto label_1a0720;
        case 0x1a0724u: goto label_1a0724;
        case 0x1a0728u: goto label_1a0728;
        case 0x1a072cu: goto label_1a072c;
        case 0x1a0730u: goto label_1a0730;
        case 0x1a0734u: goto label_1a0734;
        case 0x1a0738u: goto label_1a0738;
        case 0x1a073cu: goto label_1a073c;
        case 0x1a0740u: goto label_1a0740;
        case 0x1a0744u: goto label_1a0744;
        case 0x1a0748u: goto label_1a0748;
        case 0x1a074cu: goto label_1a074c;
        case 0x1a0750u: goto label_1a0750;
        case 0x1a0754u: goto label_1a0754;
        case 0x1a0758u: goto label_1a0758;
        case 0x1a075cu: goto label_1a075c;
        case 0x1a0760u: goto label_1a0760;
        case 0x1a0764u: goto label_1a0764;
        case 0x1a0768u: goto label_1a0768;
        case 0x1a076cu: goto label_1a076c;
        case 0x1a0770u: goto label_1a0770;
        case 0x1a0774u: goto label_1a0774;
        case 0x1a0778u: goto label_1a0778;
        case 0x1a077cu: goto label_1a077c;
        case 0x1a0780u: goto label_1a0780;
        case 0x1a0784u: goto label_1a0784;
        case 0x1a0788u: goto label_1a0788;
        case 0x1a078cu: goto label_1a078c;
        case 0x1a0790u: goto label_1a0790;
        case 0x1a0794u: goto label_1a0794;
        case 0x1a0798u: goto label_1a0798;
        case 0x1a079cu: goto label_1a079c;
        case 0x1a07a0u: goto label_1a07a0;
        case 0x1a07a4u: goto label_1a07a4;
        case 0x1a07a8u: goto label_1a07a8;
        case 0x1a07acu: goto label_1a07ac;
        case 0x1a07b0u: goto label_1a07b0;
        case 0x1a07b4u: goto label_1a07b4;
        case 0x1a07b8u: goto label_1a07b8;
        case 0x1a07bcu: goto label_1a07bc;
        case 0x1a07c0u: goto label_1a07c0;
        case 0x1a07c4u: goto label_1a07c4;
        case 0x1a07c8u: goto label_1a07c8;
        case 0x1a07ccu: goto label_1a07cc;
        case 0x1a07d0u: goto label_1a07d0;
        case 0x1a07d4u: goto label_1a07d4;
        case 0x1a07d8u: goto label_1a07d8;
        case 0x1a07dcu: goto label_1a07dc;
        case 0x1a07e0u: goto label_1a07e0;
        case 0x1a07e4u: goto label_1a07e4;
        case 0x1a07e8u: goto label_1a07e8;
        case 0x1a07ecu: goto label_1a07ec;
        case 0x1a07f0u: goto label_1a07f0;
        case 0x1a07f4u: goto label_1a07f4;
        case 0x1a07f8u: goto label_1a07f8;
        case 0x1a07fcu: goto label_1a07fc;
        case 0x1a0800u: goto label_1a0800;
        case 0x1a0804u: goto label_1a0804;
        case 0x1a0808u: goto label_1a0808;
        case 0x1a080cu: goto label_1a080c;
        case 0x1a0810u: goto label_1a0810;
        case 0x1a0814u: goto label_1a0814;
        case 0x1a0818u: goto label_1a0818;
        case 0x1a081cu: goto label_1a081c;
        case 0x1a0820u: goto label_1a0820;
        case 0x1a0824u: goto label_1a0824;
        case 0x1a0828u: goto label_1a0828;
        case 0x1a082cu: goto label_1a082c;
        case 0x1a0830u: goto label_1a0830;
        case 0x1a0834u: goto label_1a0834;
        case 0x1a0838u: goto label_1a0838;
        case 0x1a083cu: goto label_1a083c;
        case 0x1a0840u: goto label_1a0840;
        case 0x1a0844u: goto label_1a0844;
        case 0x1a0848u: goto label_1a0848;
        case 0x1a084cu: goto label_1a084c;
        case 0x1a0850u: goto label_1a0850;
        case 0x1a0854u: goto label_1a0854;
        case 0x1a0858u: goto label_1a0858;
        case 0x1a085cu: goto label_1a085c;
        case 0x1a0860u: goto label_1a0860;
        case 0x1a0864u: goto label_1a0864;
        case 0x1a0868u: goto label_1a0868;
        case 0x1a086cu: goto label_1a086c;
        case 0x1a0870u: goto label_1a0870;
        case 0x1a0874u: goto label_1a0874;
        case 0x1a0878u: goto label_1a0878;
        case 0x1a087cu: goto label_1a087c;
        case 0x1a0880u: goto label_1a0880;
        case 0x1a0884u: goto label_1a0884;
        case 0x1a0888u: goto label_1a0888;
        case 0x1a088cu: goto label_1a088c;
        case 0x1a0890u: goto label_1a0890;
        case 0x1a0894u: goto label_1a0894;
        case 0x1a0898u: goto label_1a0898;
        case 0x1a089cu: goto label_1a089c;
        case 0x1a08a0u: goto label_1a08a0;
        case 0x1a08a4u: goto label_1a08a4;
        case 0x1a08a8u: goto label_1a08a8;
        case 0x1a08acu: goto label_1a08ac;
        case 0x1a08b0u: goto label_1a08b0;
        case 0x1a08b4u: goto label_1a08b4;
        case 0x1a08b8u: goto label_1a08b8;
        case 0x1a08bcu: goto label_1a08bc;
        case 0x1a08c0u: goto label_1a08c0;
        case 0x1a08c4u: goto label_1a08c4;
        case 0x1a08c8u: goto label_1a08c8;
        case 0x1a08ccu: goto label_1a08cc;
        case 0x1a08d0u: goto label_1a08d0;
        case 0x1a08d4u: goto label_1a08d4;
        case 0x1a08d8u: goto label_1a08d8;
        case 0x1a08dcu: goto label_1a08dc;
        case 0x1a08e0u: goto label_1a08e0;
        case 0x1a08e4u: goto label_1a08e4;
        case 0x1a08e8u: goto label_1a08e8;
        case 0x1a08ecu: goto label_1a08ec;
        case 0x1a08f0u: goto label_1a08f0;
        case 0x1a08f4u: goto label_1a08f4;
        case 0x1a08f8u: goto label_1a08f8;
        case 0x1a08fcu: goto label_1a08fc;
        case 0x1a0900u: goto label_1a0900;
        case 0x1a0904u: goto label_1a0904;
        case 0x1a0908u: goto label_1a0908;
        case 0x1a090cu: goto label_1a090c;
        case 0x1a0910u: goto label_1a0910;
        case 0x1a0914u: goto label_1a0914;
        case 0x1a0918u: goto label_1a0918;
        case 0x1a091cu: goto label_1a091c;
        case 0x1a0920u: goto label_1a0920;
        case 0x1a0924u: goto label_1a0924;
        case 0x1a0928u: goto label_1a0928;
        case 0x1a092cu: goto label_1a092c;
        case 0x1a0930u: goto label_1a0930;
        case 0x1a0934u: goto label_1a0934;
        case 0x1a0938u: goto label_1a0938;
        case 0x1a093cu: goto label_1a093c;
        case 0x1a0940u: goto label_1a0940;
        case 0x1a0944u: goto label_1a0944;
        case 0x1a0948u: goto label_1a0948;
        case 0x1a094cu: goto label_1a094c;
        case 0x1a0950u: goto label_1a0950;
        case 0x1a0954u: goto label_1a0954;
        case 0x1a0958u: goto label_1a0958;
        case 0x1a095cu: goto label_1a095c;
        case 0x1a0960u: goto label_1a0960;
        case 0x1a0964u: goto label_1a0964;
        case 0x1a0968u: goto label_1a0968;
        case 0x1a096cu: goto label_1a096c;
        case 0x1a0970u: goto label_1a0970;
        case 0x1a0974u: goto label_1a0974;
        case 0x1a0978u: goto label_1a0978;
        case 0x1a097cu: goto label_1a097c;
        case 0x1a0980u: goto label_1a0980;
        case 0x1a0984u: goto label_1a0984;
        case 0x1a0988u: goto label_1a0988;
        case 0x1a098cu: goto label_1a098c;
        case 0x1a0990u: goto label_1a0990;
        case 0x1a0994u: goto label_1a0994;
        case 0x1a0998u: goto label_1a0998;
        case 0x1a099cu: goto label_1a099c;
        case 0x1a09a0u: goto label_1a09a0;
        case 0x1a09a4u: goto label_1a09a4;
        case 0x1a09a8u: goto label_1a09a8;
        case 0x1a09acu: goto label_1a09ac;
        case 0x1a09b0u: goto label_1a09b0;
        case 0x1a09b4u: goto label_1a09b4;
        case 0x1a09b8u: goto label_1a09b8;
        case 0x1a09bcu: goto label_1a09bc;
        case 0x1a09c0u: goto label_1a09c0;
        case 0x1a09c4u: goto label_1a09c4;
        case 0x1a09c8u: goto label_1a09c8;
        case 0x1a09ccu: goto label_1a09cc;
        case 0x1a09d0u: goto label_1a09d0;
        case 0x1a09d4u: goto label_1a09d4;
        case 0x1a09d8u: goto label_1a09d8;
        case 0x1a09dcu: goto label_1a09dc;
        case 0x1a09e0u: goto label_1a09e0;
        case 0x1a09e4u: goto label_1a09e4;
        case 0x1a09e8u: goto label_1a09e8;
        case 0x1a09ecu: goto label_1a09ec;
        case 0x1a09f0u: goto label_1a09f0;
        case 0x1a09f4u: goto label_1a09f4;
        case 0x1a09f8u: goto label_1a09f8;
        case 0x1a09fcu: goto label_1a09fc;
        case 0x1a0a00u: goto label_1a0a00;
        case 0x1a0a04u: goto label_1a0a04;
        case 0x1a0a08u: goto label_1a0a08;
        case 0x1a0a0cu: goto label_1a0a0c;
        case 0x1a0a10u: goto label_1a0a10;
        case 0x1a0a14u: goto label_1a0a14;
        case 0x1a0a18u: goto label_1a0a18;
        case 0x1a0a1cu: goto label_1a0a1c;
        case 0x1a0a20u: goto label_1a0a20;
        case 0x1a0a24u: goto label_1a0a24;
        case 0x1a0a28u: goto label_1a0a28;
        case 0x1a0a2cu: goto label_1a0a2c;
        case 0x1a0a30u: goto label_1a0a30;
        case 0x1a0a34u: goto label_1a0a34;
        case 0x1a0a38u: goto label_1a0a38;
        case 0x1a0a3cu: goto label_1a0a3c;
        case 0x1a0a40u: goto label_1a0a40;
        case 0x1a0a44u: goto label_1a0a44;
        case 0x1a0a48u: goto label_1a0a48;
        case 0x1a0a4cu: goto label_1a0a4c;
        case 0x1a0a50u: goto label_1a0a50;
        case 0x1a0a54u: goto label_1a0a54;
        case 0x1a0a58u: goto label_1a0a58;
        case 0x1a0a5cu: goto label_1a0a5c;
        case 0x1a0a60u: goto label_1a0a60;
        case 0x1a0a64u: goto label_1a0a64;
        case 0x1a0a68u: goto label_1a0a68;
        case 0x1a0a6cu: goto label_1a0a6c;
        case 0x1a0a70u: goto label_1a0a70;
        case 0x1a0a74u: goto label_1a0a74;
        case 0x1a0a78u: goto label_1a0a78;
        case 0x1a0a7cu: goto label_1a0a7c;
        case 0x1a0a80u: goto label_1a0a80;
        case 0x1a0a84u: goto label_1a0a84;
        case 0x1a0a88u: goto label_1a0a88;
        case 0x1a0a8cu: goto label_1a0a8c;
        case 0x1a0a90u: goto label_1a0a90;
        case 0x1a0a94u: goto label_1a0a94;
        case 0x1a0a98u: goto label_1a0a98;
        case 0x1a0a9cu: goto label_1a0a9c;
        case 0x1a0aa0u: goto label_1a0aa0;
        case 0x1a0aa4u: goto label_1a0aa4;
        case 0x1a0aa8u: goto label_1a0aa8;
        case 0x1a0aacu: goto label_1a0aac;
        case 0x1a0ab0u: goto label_1a0ab0;
        case 0x1a0ab4u: goto label_1a0ab4;
        case 0x1a0ab8u: goto label_1a0ab8;
        case 0x1a0abcu: goto label_1a0abc;
        case 0x1a0ac0u: goto label_1a0ac0;
        case 0x1a0ac4u: goto label_1a0ac4;
        case 0x1a0ac8u: goto label_1a0ac8;
        default: break;
    }

    ctx->pc = 0x1a0590u;

label_1a0590:
    // 0x1a0590: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a0590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a0594:
    // 0x1a0594: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1a0594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_1a0598:
    // 0x1a0598: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a0598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a059c:
    // 0x1a059c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a059cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a05a0:
    // 0x1a05a0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1a05a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_1a05a4:
    // 0x1a05a4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a05a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a05a8:
    // 0x1a05a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a05a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a05ac:
    // 0x1a05ac: 0xc043122  jal         func_10C488
label_1a05b0:
    if (ctx->pc == 0x1A05B0u) {
        ctx->pc = 0x1A05B4u;
        goto label_1a05b4;
    }
    ctx->pc = 0x1A05ACu;
    SET_GPR_U32(ctx, 31, 0x1A05B4u);
    ctx->pc = 0x10C488u;
    {
        ctx->pc = 0x1A05B4u;
        ps2_stubs::scePadGetState(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A05B4u) { return; }
    ctx->pc = 0x1A05B4u;
label_1a05b4:
    // 0x1a05b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a05b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a05b8:
    // 0x1a05b8: 0xac222758  sw          $v0, 0x2758($at)
    ctx->pc = 0x1a05b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10072), GPR_U32(ctx, 2));
label_1a05bc:
    // 0x1a05bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a05bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a05c0:
    // 0x1a05c0: 0x8c232758  lw          $v1, 0x2758($at)
    ctx->pc = 0x1a05c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10072)));
label_1a05c4:
    // 0x1a05c4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a05c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a05c8:
    // 0x1a05c8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_1a05cc:
    if (ctx->pc == 0x1A05CCu) {
        ctx->pc = 0x1A05D0u;
        goto label_1a05d0;
    }
    ctx->pc = 0x1A05C8u;
    {
        const bool branch_taken_0x1a05c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a05c8) {
            ctx->pc = 0x1A05E4u;
            goto label_1a05e4;
        }
    }
    ctx->pc = 0x1A05D0u;
label_1a05d0:
    // 0x1a05d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a05d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a05d4:
    // 0x1a05d4: 0x8c232758  lw          $v1, 0x2758($at)
    ctx->pc = 0x1a05d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10072)));
label_1a05d8:
    // 0x1a05d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a05d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a05dc:
    // 0x1a05dc: 0x14620105  bne         $v1, $v0, . + 4 + (0x105 << 2)
label_1a05e0:
    if (ctx->pc == 0x1A05E0u) {
        ctx->pc = 0x1A05E4u;
        goto label_1a05e4;
    }
    ctx->pc = 0x1A05DCu;
    {
        const bool branch_taken_0x1a05dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a05dc) {
            ctx->pc = 0x1A09F4u;
            goto label_1a09f4;
        }
    }
    ctx->pc = 0x1A05E4u;
label_1a05e4:
    // 0x1a05e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a05e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a05e8:
    // 0x1a05e8: 0x8c222748  lw          $v0, 0x2748($at)
    ctx->pc = 0x1a05e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10056)));
label_1a05ec:
    // 0x1a05ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a05ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a05f0:
    // 0x1a05f0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1a05f4:
    if (ctx->pc == 0x1A05F4u) {
        ctx->pc = 0x1A05F8u;
        goto label_1a05f8;
    }
    ctx->pc = 0x1A05F0u;
    {
        const bool branch_taken_0x1a05f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a05f0) {
            ctx->pc = 0x1A0654u;
            goto label_1a0654;
        }
    }
    ctx->pc = 0x1A05F8u;
label_1a05f8:
    // 0x1a05f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a05f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a05fc:
    // 0x1a05fc: 0x94222742  lhu         $v0, 0x2742($at)
    ctx->pc = 0x1a05fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 10050)));
label_1a0600:
    // 0x1a0600: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1a0600u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1a0604:
    // 0x1a0604: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a0604u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a0608:
    // 0x1a0608: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a0608u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a060c:
    // 0x1a060c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a060cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0610:
    // 0x1a0610: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a0610u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a0614:
    // 0x1a0614: 0xc04321a  jal         func_10C868
label_1a0618:
    if (ctx->pc == 0x1A0618u) {
        ctx->pc = 0x1A061Cu;
        goto label_1a061c;
    }
    ctx->pc = 0x1A0614u;
    SET_GPR_U32(ctx, 31, 0x1A061Cu);
    ctx->pc = 0x10C868u;
    {
        ctx->pc = 0x1A061Cu;
        ps2_stubs::scePadInfoMode(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A061Cu) { return; }
    ctx->pc = 0x1A061Cu;
label_1a061c:
    // 0x1a061c: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
label_1a0620:
    if (ctx->pc == 0x1A0620u) {
        ctx->pc = 0x1A0624u;
        goto label_1a0624;
    }
    ctx->pc = 0x1A061Cu;
    {
        const bool branch_taken_0x1a061c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a061c) {
            ctx->pc = 0x1A0634u;
            goto label_1a0634;
        }
    }
    ctx->pc = 0x1A0624u;
label_1a0624:
    // 0x1a0624: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a0628:
    // 0x1a0628: 0xac202748  sw          $zero, 0x2748($at)
    ctx->pc = 0x1a0628u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10056), GPR_U32(ctx, 0));
label_1a062c:
    // 0x1a062c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a062cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a0630:
    // 0x1a0630: 0xa4202740  sh          $zero, 0x2740($at)
    ctx->pc = 0x1a0630u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10048), (uint16_t)GPR_U32(ctx, 0));
label_1a0634:
    // 0x1a0634: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a0634u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a0638:
    // 0x1a0638: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a0638u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a063c:
    // 0x1a063c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a063cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1a0640:
    // 0x1a0640: 0x24462760  addiu       $a2, $v0, 0x2760
    ctx->pc = 0x1a0640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 10080));
label_1a0644:
    // 0x1a0644: 0xc043102  jal         func_10C408
label_1a0648:
    if (ctx->pc == 0x1A0648u) {
        ctx->pc = 0x1A064Cu;
        goto label_1a064c;
    }
    ctx->pc = 0x1A0644u;
    SET_GPR_U32(ctx, 31, 0x1A064Cu);
    ctx->pc = 0x10C408u;
    {
        ctx->pc = 0x1A064Cu;
        ps2_stubs::scePadRead(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A064Cu) { return; }
    ctx->pc = 0x1A064Cu;
label_1a064c:
    // 0x1a064c: 0x100000fa  b           . + 4 + (0xFA << 2)
label_1a0650:
    if (ctx->pc == 0x1A0650u) {
        ctx->pc = 0x1A0654u;
        goto label_1a0654;
    }
    ctx->pc = 0x1A064Cu;
    {
        const bool branch_taken_0x1a064c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a064c) {
            ctx->pc = 0x1A0A38u;
            goto label_1a0a38;
        }
    }
    ctx->pc = 0x1A0654u;
label_1a0654:
    // 0x1a0654: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a0658:
    // 0x1a0658: 0x94222740  lhu         $v0, 0x2740($at)
    ctx->pc = 0x1a0658u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 10048)));
label_1a065c:
    // 0x1a065c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1a065cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1a0660:
    // 0x1a0660: 0x2c81000a  sltiu       $at, $a0, 0xA
    ctx->pc = 0x1a0660u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1a0664:
    // 0x1a0664: 0x102000dd  beqz        $at, . + 4 + (0xDD << 2)
label_1a0668:
    if (ctx->pc == 0x1A0668u) {
        ctx->pc = 0x1A066Cu;
        goto label_1a066c;
    }
    ctx->pc = 0x1A0664u;
    {
        const bool branch_taken_0x1a0664 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0664) {
            ctx->pc = 0x1A09DCu;
            goto label_1a09dc;
        }
    }
    ctx->pc = 0x1A066Cu;
label_1a066c:
    // 0x1a066c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a066cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_1a0670:
    // 0x1a0670: 0x2443ef90  addiu       $v1, $v0, -0x1070
    ctx->pc = 0x1a0670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963088));
label_1a0674:
    // 0x1a0674: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1a0674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a0678:
    // 0x1a0678: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a0678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a067c:
    // 0x1a067c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a067cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a0680:
    // 0x1a0680: 0x400008  jr          $v0
label_1a0684:
    if (ctx->pc == 0x1A0684u) {
        ctx->pc = 0x1A0688u;
        goto label_1a0688;
    }
    ctx->pc = 0x1A0680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0680u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A0688u;
label_1a0688:
    // 0x1a0688: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a0688u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a068c:
    // 0x1a068c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a068cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a0690:
    // 0x1a0690: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a0690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0694:
    // 0x1a0694: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a0694u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a0698:
    // 0x1a0698: 0xc04321a  jal         func_10C868
label_1a069c:
    if (ctx->pc == 0x1A069Cu) {
        ctx->pc = 0x1A06A0u;
        goto label_1a06a0;
    }
    ctx->pc = 0x1A0698u;
    SET_GPR_U32(ctx, 31, 0x1A06A0u);
    ctx->pc = 0x10C868u;
    {
        ctx->pc = 0x1A06A0u;
        ps2_stubs::scePadInfoMode(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A06A0u) { return; }
    ctx->pc = 0x1A06A0u;
label_1a06a0:
    // 0x1a06a0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1a06a0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1a06a4:
    // 0x1a06a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a06a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a06a8:
    // 0x1a06a8: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
label_1a06ac:
    if (ctx->pc == 0x1A06ACu) {
        ctx->pc = 0x1A06B0u;
        goto label_1a06b0;
    }
    ctx->pc = 0x1A06A8u;
    {
        const bool branch_taken_0x1a06a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a06a8) {
            ctx->pc = 0x1A06BCu;
            goto label_1a06bc;
        }
    }
    ctx->pc = 0x1A06B0u;
label_1a06b0:
    // 0x1a06b0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1a06b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1a06b4:
    // 0x1a06b4: 0x160200c9  bne         $s0, $v0, . + 4 + (0xC9 << 2)
label_1a06b8:
    if (ctx->pc == 0x1A06B8u) {
        ctx->pc = 0x1A06BCu;
        goto label_1a06bc;
    }
    ctx->pc = 0x1A06B4u;
    {
        const bool branch_taken_0x1a06b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a06b4) {
            ctx->pc = 0x1A09DCu;
            goto label_1a09dc;
        }
    }
    ctx->pc = 0x1A06BCu;
label_1a06bc:
    // 0x1a06bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a06bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a06c0:
    // 0x1a06c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a06c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a06c4:
    // 0x1a06c4: 0xa4222740  sh          $v0, 0x2740($at)
    ctx->pc = 0x1a06c4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10048), (uint16_t)GPR_U32(ctx, 2));
label_1a06c8:
    // 0x1a06c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a06c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a06cc:
    // 0x1a06cc: 0x8c222748  lw          $v0, 0x2748($at)
    ctx->pc = 0x1a06ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10056)));
label_1a06d0:
    // 0x1a06d0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1a06d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_1a06d4:
    // 0x1a06d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a06d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a06d8:
    // 0x1a06d8: 0xac222748  sw          $v0, 0x2748($at)
    ctx->pc = 0x1a06d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10056), GPR_U32(ctx, 2));
label_1a06dc:
    // 0x1a06dc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1a06dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1a06e0:
    // 0x1a06e0: 0x160200be  bne         $s0, $v0, . + 4 + (0xBE << 2)
label_1a06e4:
    if (ctx->pc == 0x1A06E4u) {
        ctx->pc = 0x1A06E8u;
        goto label_1a06e8;
    }
    ctx->pc = 0x1A06E0u;
    {
        const bool branch_taken_0x1a06e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a06e0) {
            ctx->pc = 0x1A09DCu;
            goto label_1a09dc;
        }
    }
    ctx->pc = 0x1A06E8u;
label_1a06e8:
    // 0x1a06e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a06e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a06ec:
    // 0x1a06ec: 0x8c222748  lw          $v0, 0x2748($at)
    ctx->pc = 0x1a06ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10056)));
label_1a06f0:
    // 0x1a06f0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1a06f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_1a06f4:
    // 0x1a06f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a06f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a06f8:
    // 0x1a06f8: 0xac222748  sw          $v0, 0x2748($at)
    ctx->pc = 0x1a06f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10056), GPR_U32(ctx, 2));
label_1a06fc:
    // 0x1a06fc: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_1a0700:
    if (ctx->pc == 0x1A0700u) {
        ctx->pc = 0x1A0704u;
        goto label_1a0704;
    }
    ctx->pc = 0x1A06FCu;
    {
        const bool branch_taken_0x1a06fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a06fc) {
            ctx->pc = 0x1A09DCu;
            goto label_1a09dc;
        }
    }
    ctx->pc = 0x1A0704u;
label_1a0704:
    // 0x1a0704: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a0704u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a0708:
    // 0x1a0708: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a0708u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a070c:
    // 0x1a070c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a070cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a0710:
    // 0x1a0710: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a0710u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a0714:
    // 0x1a0714: 0xc04321a  jal         func_10C868
label_1a0718:
    if (ctx->pc == 0x1A0718u) {
        ctx->pc = 0x1A071Cu;
        goto label_1a071c;
    }
    ctx->pc = 0x1A0714u;
    SET_GPR_U32(ctx, 31, 0x1A071Cu);
    ctx->pc = 0x10C868u;
    {
        ctx->pc = 0x1A071Cu;
        ps2_stubs::scePadInfoMode(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A071Cu) { return; }
    ctx->pc = 0x1A071Cu;
label_1a071c:
    // 0x1a071c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1a071cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1a0720:
    // 0x1a0720: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a0720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a0724:
    // 0x1a0724: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
label_1a0728:
    if (ctx->pc == 0x1A0728u) {
        ctx->pc = 0x1A072Cu;
        goto label_1a072c;
    }
    ctx->pc = 0x1A0724u;
    {
        const bool branch_taken_0x1a0724 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a0724) {
            ctx->pc = 0x1A0740u;
            goto label_1a0740;
        }
    }
    ctx->pc = 0x1A072Cu;
label_1a072c:
    // 0x1a072c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a072cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a0730:
    // 0x1a0730: 0x8c222748  lw          $v0, 0x2748($at)
    ctx->pc = 0x1a0730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10056)));
label_1a0734:
    // 0x1a0734: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1a0734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_1a0738:
    // 0x1a0738: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a073c:
    // 0x1a073c: 0xac222748  sw          $v0, 0x2748($at)
    ctx->pc = 0x1a073cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10056), GPR_U32(ctx, 2));
label_1a0740:
    // 0x1a0740: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a0740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a0744:
    // 0x1a0744: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a0748:
    // 0x1a0748: 0xa4222740  sh          $v0, 0x2740($at)
    ctx->pc = 0x1a0748u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10048), (uint16_t)GPR_U32(ctx, 2));
label_1a074c:
    // 0x1a074c: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_1a0750:
    if (ctx->pc == 0x1A0750u) {
        ctx->pc = 0x1A0754u;
        goto label_1a0754;
    }
    ctx->pc = 0x1A074Cu;
    {
        const bool branch_taken_0x1a074c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a074c) {
            ctx->pc = 0x1A09DCu;
            goto label_1a09dc;
        }
    }
    ctx->pc = 0x1A0754u;
label_1a0754:
    // 0x1a0754: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a0754u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a0758:
    // 0x1a0758: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a0758u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a075c:
    // 0x1a075c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a075cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0760:
    // 0x1a0760: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1a0760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a0764:
    // 0x1a0764: 0xc043268  jal         func_10C9A0
label_1a0768:
    if (ctx->pc == 0x1A0768u) {
        ctx->pc = 0x1A076Cu;
        goto label_1a076c;
    }
    ctx->pc = 0x1A0764u;
    SET_GPR_U32(ctx, 31, 0x1A076Cu);
    ctx->pc = 0x10C9A0u;
    {
        ctx->pc = 0x1A076Cu;
        ps2_stubs::scePadSetMainMode(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A076Cu) { return; }
    ctx->pc = 0x1A076Cu;
label_1a076c:
    // 0x1a076c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a076cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0770:
    // 0x1a0770: 0x1443009a  bne         $v0, $v1, . + 4 + (0x9A << 2)
label_1a0774:
    if (ctx->pc == 0x1A0774u) {
        ctx->pc = 0x1A0778u;
        goto label_1a0778;
    }
    ctx->pc = 0x1A0770u;
    {
        const bool branch_taken_0x1a0770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a0770) {
            ctx->pc = 0x1A09DCu;
            goto label_1a09dc;
        }
    }
    ctx->pc = 0x1A0778u;
label_1a0778:
    // 0x1a0778: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a0778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a077c:
    // 0x1a077c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a077cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a0780:
    // 0x1a0780: 0xa4222740  sh          $v0, 0x2740($at)
    ctx->pc = 0x1a0780u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10048), (uint16_t)GPR_U32(ctx, 2));
label_1a0784:
    // 0x1a0784: 0x10000095  b           . + 4 + (0x95 << 2)
label_1a0788:
    if (ctx->pc == 0x1A0788u) {
        ctx->pc = 0x1A078Cu;
        goto label_1a078c;
    }
    ctx->pc = 0x1A0784u;
    {
        const bool branch_taken_0x1a0784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0784) {
            ctx->pc = 0x1A09DCu;
            goto label_1a09dc;
        }
    }
    ctx->pc = 0x1A078Cu;
label_1a078c:
    // 0x1a078c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a078cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a0790:
    // 0x1a0790: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a0790u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a0794:
    // 0x1a0794: 0xc043168  jal         func_10C5A0
label_1a0798:
    if (ctx->pc == 0x1A0798u) {
        ctx->pc = 0x1A079Cu;
        goto label_1a079c;
    }
    ctx->pc = 0x1A0794u;
    SET_GPR_U32(ctx, 31, 0x1A079Cu);
    ctx->pc = 0x10C5A0u;
    {
        ctx->pc = 0x1A079Cu;
        ps2_stubs::scePadGetReqState(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A079Cu) { return; }
    ctx->pc = 0x1A079Cu;
label_1a079c:
    // 0x1a079c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1a07a0:
    if (ctx->pc == 0x1A07A0u) {
        ctx->pc = 0x1A07A4u;
        goto label_1a07a4;
    }
    ctx->pc = 0x1A079Cu;
    {
        const bool branch_taken_0x1a079c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a079c) {
            ctx->pc = 0x1A07CCu;
            goto label_1a07cc;
        }
    }
    ctx->pc = 0x1A07A4u;
label_1a07a4:
    // 0x1a07a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a07a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a07a8:
    // 0x1a07a8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_1a07ac:
    if (ctx->pc == 0x1A07ACu) {
        ctx->pc = 0x1A07B0u;
        goto label_1a07b0;
    }
    ctx->pc = 0x1A07A8u;
    {
        const bool branch_taken_0x1a07a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a07a8) {
            ctx->pc = 0x1A07B8u;
            goto label_1a07b8;
        }
    }
    ctx->pc = 0x1A07B0u;
label_1a07b0:
    // 0x1a07b0: 0x1000008a  b           . + 4 + (0x8A << 2)
label_1a07b4:
    if (ctx->pc == 0x1A07B4u) {
        ctx->pc = 0x1A07B8u;
        goto label_1a07b8;
    }
    ctx->pc = 0x1A07B0u;
    {
        const bool branch_taken_0x1a07b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a07b0) {
            ctx->pc = 0x1A09DCu;
            goto label_1a09dc;
        }
    }
    ctx->pc = 0x1A07B8u;
label_1a07b8:
    // 0x1a07b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a07b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a07bc:
    // 0x1a07bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a07bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a07c0:
    // 0x1a07c0: 0xa4222740  sh          $v0, 0x2740($at)
    ctx->pc = 0x1a07c0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10048), (uint16_t)GPR_U32(ctx, 2));
label_1a07c4:
    // 0x1a07c4: 0x10000085  b           . + 4 + (0x85 << 2)
label_1a07c8:
    if (ctx->pc == 0x1A07C8u) {
        ctx->pc = 0x1A07CCu;
        goto label_1a07cc;
    }
    ctx->pc = 0x1A07C4u;
    {
        const bool branch_taken_0x1a07c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a07c4) {
            ctx->pc = 0x1A09DCu;
            goto label_1a09dc;
        }
    }
    ctx->pc = 0x1A07CCu;
label_1a07cc:
    // 0x1a07cc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a07ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a07d0:
    // 0x1a07d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a07d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a07d4:
    // 0x1a07d4: 0xa4222740  sh          $v0, 0x2740($at)
    ctx->pc = 0x1a07d4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10048), (uint16_t)GPR_U32(ctx, 2));
label_1a07d8:
    // 0x1a07d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a07d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a07dc:
    // 0x1a07dc: 0x8c222748  lw          $v0, 0x2748($at)
    ctx->pc = 0x1a07dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10056)));
label_1a07e0:
    // 0x1a07e0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1a07e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_1a07e4:
    // 0x1a07e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a07e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a07e8:
    // 0x1a07e8: 0xac222748  sw          $v0, 0x2748($at)
    ctx->pc = 0x1a07e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10056), GPR_U32(ctx, 2));
label_1a07ec:
    // 0x1a07ec: 0x1000007b  b           . + 4 + (0x7B << 2)
label_1a07f0:
    if (ctx->pc == 0x1A07F0u) {
        ctx->pc = 0x1A07F4u;
        goto label_1a07f4;
    }
    ctx->pc = 0x1A07ECu;
    {
        const bool branch_taken_0x1a07ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a07ec) {
            ctx->pc = 0x1A09DCu;
            goto label_1a09dc;
        }
    }
    ctx->pc = 0x1A07F4u;
label_1a07f4:
    // 0x1a07f4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a07f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a07f8:
    // 0x1a07f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a07f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a07fc:
    // 0x1a07fc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a07fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1a0800:
    // 0x1a0800: 0x2446274c  addiu       $a2, $v0, 0x274C
    ctx->pc = 0x1a0800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 10060));
label_1a0804:
    // 0x1a0804: 0xc0432ae  jal         func_10CAB8
label_1a0808:
    if (ctx->pc == 0x1A0808u) {
        ctx->pc = 0x1A080Cu;
        goto label_1a080c;
    }
    ctx->pc = 0x1A0804u;
    SET_GPR_U32(ctx, 31, 0x1A080Cu);
    ctx->pc = 0x10CAB8u;
    {
        ctx->pc = 0x1A080Cu;
        ps2_stubs::scePadSetActAlign(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A080Cu) { return; }
    ctx->pc = 0x1A080Cu;
label_1a080c:
    // 0x1a080c: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
label_1a0810:
    if (ctx->pc == 0x1A0810u) {
        ctx->pc = 0x1A0814u;
        goto label_1a0814;
    }
    ctx->pc = 0x1A080Cu;
    {
        const bool branch_taken_0x1a080c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a080c) {
            ctx->pc = 0x1A09DCu;
            goto label_1a09dc;
        }
    }
    ctx->pc = 0x1A0814u;
label_1a0814:
    // 0x1a0814: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1a0814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1a0818:
    // 0x1a0818: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a081c:
    // 0x1a081c: 0xa4222740  sh          $v0, 0x2740($at)
    ctx->pc = 0x1a081cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10048), (uint16_t)GPR_U32(ctx, 2));
label_1a0820:
    // 0x1a0820: 0x1000006e  b           . + 4 + (0x6E << 2)
label_1a0824:
    if (ctx->pc == 0x1A0824u) {
        ctx->pc = 0x1A0828u;
        goto label_1a0828;
    }
    ctx->pc = 0x1A0820u;
    {
        const bool branch_taken_0x1a0820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0820) {
            ctx->pc = 0x1A09DCu;
            goto label_1a09dc;
        }
    }
    ctx->pc = 0x1A0828u;
label_1a0828:
    // 0x1a0828: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a0828u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a082c:
    // 0x1a082c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a082cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a0830:
    // 0x1a0830: 0xc043168  jal         func_10C5A0
label_1a0834:
    if (ctx->pc == 0x1A0834u) {
        ctx->pc = 0x1A0838u;
        goto label_1a0838;
    }
    ctx->pc = 0x1A0830u;
    SET_GPR_U32(ctx, 31, 0x1A0838u);
    ctx->pc = 0x10C5A0u;
    {
        ctx->pc = 0x1A0838u;
        ps2_stubs::scePadGetReqState(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A0838u) { return; }
    ctx->pc = 0x1A0838u;
label_1a0838:
    // 0x1a0838: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1a083c:
    if (ctx->pc == 0x1A083Cu) {
        ctx->pc = 0x1A0840u;
        goto label_1a0840;
    }
    ctx->pc = 0x1A0838u;
    {
        const bool branch_taken_0x1a0838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0838) {
            ctx->pc = 0x1A0868u;
            goto label_1a0868;
        }
    }
    ctx->pc = 0x1A0840u;
label_1a0840:
    // 0x1a0840: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a0840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0844:
    // 0x1a0844: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_1a0848:
    if (ctx->pc == 0x1A0848u) {
        ctx->pc = 0x1A084Cu;
        goto label_1a084c;
    }
    ctx->pc = 0x1A0844u;
    {
        const bool branch_taken_0x1a0844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a0844) {
            ctx->pc = 0x1A0854u;
            goto label_1a0854;
        }
    }
    ctx->pc = 0x1A084Cu;
label_1a084c:
    // 0x1a084c: 0x10000063  b           . + 4 + (0x63 << 2)
label_1a0850:
    if (ctx->pc == 0x1A0850u) {
        ctx->pc = 0x1A0854u;
        goto label_1a0854;
    }
    ctx->pc = 0x1A084Cu;
    {
        const bool branch_taken_0x1a084c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a084c) {
            ctx->pc = 0x1A09DCu;
            goto label_1a09dc;
        }
    }
    ctx->pc = 0x1A0854u;
label_1a0854:
    // 0x1a0854: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a0854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a0858:
    // 0x1a0858: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a085c:
    // 0x1a085c: 0xa4222740  sh          $v0, 0x2740($at)
    ctx->pc = 0x1a085cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10048), (uint16_t)GPR_U32(ctx, 2));
label_1a0860:
    // 0x1a0860: 0x1000005e  b           . + 4 + (0x5E << 2)
label_1a0864:
    if (ctx->pc == 0x1A0864u) {
        ctx->pc = 0x1A0868u;
        goto label_1a0868;
    }
    ctx->pc = 0x1A0860u;
    {
        const bool branch_taken_0x1a0860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0860) {
            ctx->pc = 0x1A09DCu;
            goto label_1a09dc;
        }
    }
    ctx->pc = 0x1A0868u;
label_1a0868:
    // 0x1a0868: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a0868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a086c:
    // 0x1a086c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a086cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a0870:
    // 0x1a0870: 0xa4222740  sh          $v0, 0x2740($at)
    ctx->pc = 0x1a0870u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10048), (uint16_t)GPR_U32(ctx, 2));
label_1a0874:
    // 0x1a0874: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a0878:
    // 0x1a0878: 0x8c222748  lw          $v0, 0x2748($at)
    ctx->pc = 0x1a0878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10056)));
label_1a087c:
    // 0x1a087c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1a087cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_1a0880:
    // 0x1a0880: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a0884:
    // 0x1a0884: 0xac222748  sw          $v0, 0x2748($at)
    ctx->pc = 0x1a0884u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10056), GPR_U32(ctx, 2));
label_1a0888:
    // 0x1a0888: 0x10000054  b           . + 4 + (0x54 << 2)
label_1a088c:
    if (ctx->pc == 0x1A088Cu) {
        ctx->pc = 0x1A0890u;
        goto label_1a0890;
    }
    ctx->pc = 0x1A0888u;
    {
        const bool branch_taken_0x1a0888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0888) {
            ctx->pc = 0x1A09DCu;
            goto label_1a09dc;
        }
    }
    ctx->pc = 0x1A0890u;
label_1a0890:
    // 0x1a0890: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a0890u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a0894:
    // 0x1a0894: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a0894u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a0898:
    // 0x1a0898: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a0898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a089c:
    // 0x1a089c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a089cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a08a0:
    // 0x1a08a0: 0xc04321a  jal         func_10C868
label_1a08a4:
    if (ctx->pc == 0x1A08A4u) {
        ctx->pc = 0x1A08A8u;
        goto label_1a08a8;
    }
    ctx->pc = 0x1A08A0u;
    SET_GPR_U32(ctx, 31, 0x1A08A8u);
    ctx->pc = 0x10C868u;
    {
        ctx->pc = 0x1A08A8u;
        ps2_stubs::scePadInfoMode(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A08A8u) { return; }
    ctx->pc = 0x1A08A8u;
label_1a08a8:
    // 0x1a08a8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1a08a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1a08ac:
    // 0x1a08ac: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_1a08b0:
    if (ctx->pc == 0x1A08B0u) {
        ctx->pc = 0x1A08B4u;
        goto label_1a08b4;
    }
    ctx->pc = 0x1A08ACu;
    {
        const bool branch_taken_0x1a08ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a08ac) {
            ctx->pc = 0x1A08C8u;
            goto label_1a08c8;
        }
    }
    ctx->pc = 0x1A08B4u;
label_1a08b4:
    // 0x1a08b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a08b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a08b8:
    // 0x1a08b8: 0x8c222748  lw          $v0, 0x2748($at)
    ctx->pc = 0x1a08b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10056)));
label_1a08bc:
    // 0x1a08bc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1a08bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_1a08c0:
    // 0x1a08c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a08c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a08c4:
    // 0x1a08c4: 0xac222748  sw          $v0, 0x2748($at)
    ctx->pc = 0x1a08c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10056), GPR_U32(ctx, 2));
label_1a08c8:
    // 0x1a08c8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1a08c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1a08cc:
    // 0x1a08cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a08ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a08d0:
    // 0x1a08d0: 0xa4222740  sh          $v0, 0x2740($at)
    ctx->pc = 0x1a08d0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10048), (uint16_t)GPR_U32(ctx, 2));
label_1a08d4:
    // 0x1a08d4: 0x10000041  b           . + 4 + (0x41 << 2)
label_1a08d8:
    if (ctx->pc == 0x1A08D8u) {
        ctx->pc = 0x1A08DCu;
        goto label_1a08dc;
    }
    ctx->pc = 0x1A08D4u;
    {
        const bool branch_taken_0x1a08d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a08d4) {
            ctx->pc = 0x1A09DCu;
            goto label_1a09dc;
        }
    }
    ctx->pc = 0x1A08DCu;
label_1a08dc:
    // 0x1a08dc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a08dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a08e0:
    // 0x1a08e0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a08e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a08e4:
    // 0x1a08e4: 0xc04333e  jal         func_10CCF8
label_1a08e8:
    if (ctx->pc == 0x1A08E8u) {
        ctx->pc = 0x1A08ECu;
        goto label_1a08ec;
    }
    ctx->pc = 0x1A08E4u;
    SET_GPR_U32(ctx, 31, 0x1A08ECu);
    ctx->pc = 0x10CCF8u;
    {
        ctx->pc = 0x1A08ECu;
        ps2_stubs::scePadInfoPressMode(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A08ECu) { return; }
    ctx->pc = 0x1A08ECu;
label_1a08ec:
    // 0x1a08ec: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1a08f0:
    if (ctx->pc == 0x1A08F0u) {
        ctx->pc = 0x1A08F4u;
        goto label_1a08f4;
    }
    ctx->pc = 0x1A08ECu;
    {
        const bool branch_taken_0x1a08ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a08ec) {
            ctx->pc = 0x1A0934u;
            goto label_1a0934;
        }
    }
    ctx->pc = 0x1A08F4u;
label_1a08f4:
    // 0x1a08f4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a08f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a08f8:
    // 0x1a08f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a08f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a08fc:
    // 0x1a08fc: 0xc043356  jal         func_10CD58
label_1a0900:
    if (ctx->pc == 0x1A0900u) {
        ctx->pc = 0x1A0904u;
        goto label_1a0904;
    }
    ctx->pc = 0x1A08FCu;
    SET_GPR_U32(ctx, 31, 0x1A0904u);
    ctx->pc = 0x10CD58u;
    {
        ctx->pc = 0x1A0904u;
        ps2_stubs::scePadEnterPressMode(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A0904u) { return; }
    ctx->pc = 0x1A0904u;
label_1a0904:
    // 0x1a0904: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_1a0908:
    if (ctx->pc == 0x1A0908u) {
        ctx->pc = 0x1A090Cu;
        goto label_1a090c;
    }
    ctx->pc = 0x1A0904u;
    {
        const bool branch_taken_0x1a0904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0904) {
            ctx->pc = 0x1A09DCu;
            goto label_1a09dc;
        }
    }
    ctx->pc = 0x1A090Cu;
label_1a090c:
    // 0x1a090c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a090cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a0910:
    // 0x1a0910: 0x8c222748  lw          $v0, 0x2748($at)
    ctx->pc = 0x1a0910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10056)));
label_1a0914:
    // 0x1a0914: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1a0914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_1a0918:
    // 0x1a0918: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a091c:
    // 0x1a091c: 0xac222748  sw          $v0, 0x2748($at)
    ctx->pc = 0x1a091cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10056), GPR_U32(ctx, 2));
label_1a0920:
    // 0x1a0920: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1a0920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1a0924:
    // 0x1a0924: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a0928:
    // 0x1a0928: 0xa4222740  sh          $v0, 0x2740($at)
    ctx->pc = 0x1a0928u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10048), (uint16_t)GPR_U32(ctx, 2));
label_1a092c:
    // 0x1a092c: 0x1000002b  b           . + 4 + (0x2B << 2)
label_1a0930:
    if (ctx->pc == 0x1A0930u) {
        ctx->pc = 0x1A0934u;
        goto label_1a0934;
    }
    ctx->pc = 0x1A092Cu;
    {
        const bool branch_taken_0x1a092c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a092c) {
            ctx->pc = 0x1A09DCu;
            goto label_1a09dc;
        }
    }
    ctx->pc = 0x1A0934u;
label_1a0934:
    // 0x1a0934: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1a0934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1a0938:
    // 0x1a0938: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a093c:
    // 0x1a093c: 0xa4222740  sh          $v0, 0x2740($at)
    ctx->pc = 0x1a093cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10048), (uint16_t)GPR_U32(ctx, 2));
label_1a0940:
    // 0x1a0940: 0x10000026  b           . + 4 + (0x26 << 2)
label_1a0944:
    if (ctx->pc == 0x1A0944u) {
        ctx->pc = 0x1A0948u;
        goto label_1a0948;
    }
    ctx->pc = 0x1A0940u;
    {
        const bool branch_taken_0x1a0940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0940) {
            ctx->pc = 0x1A09DCu;
            goto label_1a09dc;
        }
    }
    ctx->pc = 0x1A0948u;
label_1a0948:
    // 0x1a0948: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a0948u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a094c:
    // 0x1a094c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a094cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a0950:
    // 0x1a0950: 0xc043168  jal         func_10C5A0
label_1a0954:
    if (ctx->pc == 0x1A0954u) {
        ctx->pc = 0x1A0958u;
        goto label_1a0958;
    }
    ctx->pc = 0x1A0950u;
    SET_GPR_U32(ctx, 31, 0x1A0958u);
    ctx->pc = 0x10C5A0u;
    {
        ctx->pc = 0x1A0958u;
        ps2_stubs::scePadGetReqState(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A0958u) { return; }
    ctx->pc = 0x1A0958u;
label_1a0958:
    // 0x1a0958: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1a095c:
    if (ctx->pc == 0x1A095Cu) {
        ctx->pc = 0x1A0960u;
        goto label_1a0960;
    }
    ctx->pc = 0x1A0958u;
    {
        const bool branch_taken_0x1a0958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0958) {
            ctx->pc = 0x1A0988u;
            goto label_1a0988;
        }
    }
    ctx->pc = 0x1A0960u;
label_1a0960:
    // 0x1a0960: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a0960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0964:
    // 0x1a0964: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_1a0968:
    if (ctx->pc == 0x1A0968u) {
        ctx->pc = 0x1A096Cu;
        goto label_1a096c;
    }
    ctx->pc = 0x1A0964u;
    {
        const bool branch_taken_0x1a0964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a0964) {
            ctx->pc = 0x1A0974u;
            goto label_1a0974;
        }
    }
    ctx->pc = 0x1A096Cu;
label_1a096c:
    // 0x1a096c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1a0970:
    if (ctx->pc == 0x1A0970u) {
        ctx->pc = 0x1A0974u;
        goto label_1a0974;
    }
    ctx->pc = 0x1A096Cu;
    {
        const bool branch_taken_0x1a096c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a096c) {
            ctx->pc = 0x1A09DCu;
            goto label_1a09dc;
        }
    }
    ctx->pc = 0x1A0974u;
label_1a0974:
    // 0x1a0974: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1a0974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1a0978:
    // 0x1a0978: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a097c:
    // 0x1a097c: 0xa4222740  sh          $v0, 0x2740($at)
    ctx->pc = 0x1a097cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10048), (uint16_t)GPR_U32(ctx, 2));
label_1a0980:
    // 0x1a0980: 0x10000016  b           . + 4 + (0x16 << 2)
label_1a0984:
    if (ctx->pc == 0x1A0984u) {
        ctx->pc = 0x1A0988u;
        goto label_1a0988;
    }
    ctx->pc = 0x1A0980u;
    {
        const bool branch_taken_0x1a0980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0980) {
            ctx->pc = 0x1A09DCu;
            goto label_1a09dc;
        }
    }
    ctx->pc = 0x1A0988u;
label_1a0988:
    // 0x1a0988: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1a0988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1a098c:
    // 0x1a098c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a098cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a0990:
    // 0x1a0990: 0xa4222740  sh          $v0, 0x2740($at)
    ctx->pc = 0x1a0990u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10048), (uint16_t)GPR_U32(ctx, 2));
label_1a0994:
    // 0x1a0994: 0x10000011  b           . + 4 + (0x11 << 2)
label_1a0998:
    if (ctx->pc == 0x1A0998u) {
        ctx->pc = 0x1A099Cu;
        goto label_1a099c;
    }
    ctx->pc = 0x1A0994u;
    {
        const bool branch_taken_0x1a0994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0994) {
            ctx->pc = 0x1A09DCu;
            goto label_1a09dc;
        }
    }
    ctx->pc = 0x1A099Cu;
label_1a099c:
    // 0x1a099c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a099cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a09a0:
    // 0x1a09a0: 0x8c222748  lw          $v0, 0x2748($at)
    ctx->pc = 0x1a09a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10056)));
label_1a09a4:
    // 0x1a09a4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a09a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1a09a8:
    // 0x1a09a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a09a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a09ac:
    // 0x1a09ac: 0xac222748  sw          $v0, 0x2748($at)
    ctx->pc = 0x1a09acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10056), GPR_U32(ctx, 2));
label_1a09b0:
    // 0x1a09b0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a09b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a09b4:
    // 0x1a09b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a09b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a09b8:
    // 0x1a09b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a09b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a09bc:
    // 0x1a09bc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a09bcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a09c0:
    // 0x1a09c0: 0xc04321a  jal         func_10C868
label_1a09c4:
    if (ctx->pc == 0x1A09C4u) {
        ctx->pc = 0x1A09C8u;
        goto label_1a09c8;
    }
    ctx->pc = 0x1A09C0u;
    SET_GPR_U32(ctx, 31, 0x1A09C8u);
    ctx->pc = 0x10C868u;
    {
        ctx->pc = 0x1A09C8u;
        ps2_stubs::scePadInfoMode(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A09C8u) { return; }
    ctx->pc = 0x1A09C8u;
label_1a09c8:
    // 0x1a09c8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1a09c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1a09cc:
    // 0x1a09cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a09ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a09d0:
    // 0x1a09d0: 0xa4222742  sh          $v0, 0x2742($at)
    ctx->pc = 0x1a09d0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10050), (uint16_t)GPR_U32(ctx, 2));
label_1a09d4:
    // 0x1a09d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a09d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a09d8:
    // 0x1a09d8: 0xa4202740  sh          $zero, 0x2740($at)
    ctx->pc = 0x1a09d8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10048), (uint16_t)GPR_U32(ctx, 0));
label_1a09dc:
    // 0x1a09dc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1a09dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1a09e0:
    // 0x1a09e0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a09e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1a09e4:
    // 0x1a09e4: 0x24422762  addiu       $v0, $v0, 0x2762
    ctx->pc = 0x1a09e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10082));
label_1a09e8:
    // 0x1a09e8: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x1a09e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_1a09ec:
    // 0x1a09ec: 0x10000012  b           . + 4 + (0x12 << 2)
label_1a09f0:
    if (ctx->pc == 0x1A09F0u) {
        ctx->pc = 0x1A09F4u;
        goto label_1a09f4;
    }
    ctx->pc = 0x1A09ECu;
    {
        const bool branch_taken_0x1a09ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a09ec) {
            ctx->pc = 0x1A0A38u;
            goto label_1a0a38;
        }
    }
    ctx->pc = 0x1A09F4u;
label_1a09f4:
    // 0x1a09f4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1a09f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1a09f8:
    // 0x1a09f8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a09f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1a09fc:
    // 0x1a09fc: 0x24422762  addiu       $v0, $v0, 0x2762
    ctx->pc = 0x1a09fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10082));
label_1a0a00:
    // 0x1a0a00: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x1a0a00u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_1a0a04:
    // 0x1a0a04: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x1a0a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
label_1a0a08:
    // 0x1a0a08: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x1a0a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
label_1a0a0c:
    // 0x1a0a0c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a0a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1a0a10:
    // 0x1a0a10: 0x24422764  addiu       $v0, $v0, 0x2764
    ctx->pc = 0x1a0a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10084));
label_1a0a14:
    // 0x1a0a14: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a0a14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1a0a18:
    // 0x1a0a18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a0a1c:
    // 0x1a0a1c: 0x8c222758  lw          $v0, 0x2758($at)
    ctx->pc = 0x1a0a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10072)));
label_1a0a20:
    // 0x1a0a20: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1a0a24:
    if (ctx->pc == 0x1A0A24u) {
        ctx->pc = 0x1A0A28u;
        goto label_1a0a28;
    }
    ctx->pc = 0x1A0A20u;
    {
        const bool branch_taken_0x1a0a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0a20) {
            ctx->pc = 0x1A0A38u;
            goto label_1a0a38;
        }
    }
    ctx->pc = 0x1A0A28u;
label_1a0a28:
    // 0x1a0a28: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a0a2c:
    // 0x1a0a2c: 0xac202748  sw          $zero, 0x2748($at)
    ctx->pc = 0x1a0a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10056), GPR_U32(ctx, 0));
label_1a0a30:
    // 0x1a0a30: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a0a34:
    // 0x1a0a34: 0xa4202740  sh          $zero, 0x2740($at)
    ctx->pc = 0x1a0a34u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10048), (uint16_t)GPR_U32(ctx, 0));
label_1a0a38:
    // 0x1a0a38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a0a3c:
    // 0x1a0a3c: 0x8c222748  lw          $v0, 0x2748($at)
    ctx->pc = 0x1a0a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10056)));
label_1a0a40:
    // 0x1a0a40: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1a0a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1a0a44:
    // 0x1a0a44: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1a0a48:
    if (ctx->pc == 0x1A0A48u) {
        ctx->pc = 0x1A0A4Cu;
        goto label_1a0a4c;
    }
    ctx->pc = 0x1A0A44u;
    {
        const bool branch_taken_0x1a0a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0a44) {
            ctx->pc = 0x1A0A60u;
            goto label_1a0a60;
        }
    }
    ctx->pc = 0x1A0A4Cu;
label_1a0a4c:
    // 0x1a0a4c: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x1a0a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
label_1a0a50:
    // 0x1a0a50: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x1a0a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
label_1a0a54:
    // 0x1a0a54: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a0a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1a0a58:
    // 0x1a0a58: 0x24422764  addiu       $v0, $v0, 0x2764
    ctx->pc = 0x1a0a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10084));
label_1a0a5c:
    // 0x1a0a5c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a0a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1a0a60:
    // 0x1a0a60: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a0a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1a0a64:
    // 0x1a0a64: 0x24432762  addiu       $v1, $v0, 0x2762
    ctx->pc = 0x1a0a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10082));
label_1a0a68:
    // 0x1a0a68: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x1a0a68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1a0a6c:
    // 0x1a0a6c: 0x3842ffff  xori        $v0, $v0, 0xFFFF
    ctx->pc = 0x1a0a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)65535);
label_1a0a70:
    // 0x1a0a70: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x1a0a70u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_1a0a74:
    // 0x1a0a74: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a0a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1a0a78:
    // 0x1a0a78: 0x24432764  addiu       $v1, $v0, 0x2764
    ctx->pc = 0x1a0a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10084));
label_1a0a7c:
    // 0x1a0a7c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a0a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a0a80:
    // 0x1a0a80: 0x401027  not         $v0, $v0
    ctx->pc = 0x1a0a80u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_1a0a84:
    // 0x1a0a84: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a0a84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1a0a88:
    // 0x1a0a88: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1a0a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a0a8c:
    // 0x1a0a8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a0a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0a90:
    // 0x1a0a90: 0xc0683a0  jal         func_1A0E80
label_1a0a94:
    if (ctx->pc == 0x1A0A94u) {
        ctx->pc = 0x1A0A98u;
        goto label_1a0a98;
    }
    ctx->pc = 0x1A0A90u;
    SET_GPR_U32(ctx, 31, 0x1A0A98u);
    ctx->pc = 0x1A0E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E80u, 0x1A0A90u, 0x1A0A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0A98u;
label_1a0a98:
    // 0x1a0a98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a0a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a0a9c:
    // 0x1a0a9c: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x1a0a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_1a0aa0:
    // 0x1a0aa0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a0aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a0aa4:
    // 0x1a0aa4: 0xc0682b4  jal         func_1A0AD0
label_1a0aa8:
    if (ctx->pc == 0x1A0AA8u) {
        ctx->pc = 0x1A0AACu;
        goto label_1a0aac;
    }
    ctx->pc = 0x1A0AA4u;
    SET_GPR_U32(ctx, 31, 0x1A0AACu);
    ctx->pc = 0x1A0AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD0u, 0x1A0AA4u, 0x1A0AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0AACu;
label_1a0aac:
    // 0x1a0aac: 0xc068510  jal         func_1A1440
label_1a0ab0:
    if (ctx->pc == 0x1A0AB0u) {
        ctx->pc = 0x1A0AB4u;
        goto label_1a0ab4;
    }
    ctx->pc = 0x1A0AACu;
    SET_GPR_U32(ctx, 31, 0x1A0AB4u);
    ctx->pc = 0x1A1440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1440u, 0x1A0AACu, 0x1A0AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0AB4u;
label_1a0ab4:
    // 0x1a0ab4: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1a0ab4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a0ab8:
    // 0x1a0ab8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a0ab8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a0abc:
    // 0x1a0abc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a0abcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a0ac0:
    // 0x1a0ac0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1a0ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1a0ac4:
    // 0x1a0ac4: 0x3e00008  jr          $ra
label_1a0ac8:
    if (ctx->pc == 0x1A0AC8u) {
        ctx->pc = 0x1A0ACCu;
        goto label_fallthrough_0x1a0ac4;
    }
    ctx->pc = 0x1A0AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a0ac4:
    ctx->pc = 0x1A0ACCu;
}
