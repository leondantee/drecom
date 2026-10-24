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

// Function: Em04_R0_move
// Address: 0x33e590 - 0x33ea4c
void Em04_R0_move_0x33e590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em04_R0_move_0x33e590");
#endif

    switch (ctx->pc) {
        case 0x33e590u: goto label_33e590;
        case 0x33e594u: goto label_33e594;
        case 0x33e598u: goto label_33e598;
        case 0x33e59cu: goto label_33e59c;
        case 0x33e5a0u: goto label_33e5a0;
        case 0x33e5a4u: goto label_33e5a4;
        case 0x33e5a8u: goto label_33e5a8;
        case 0x33e5acu: goto label_33e5ac;
        case 0x33e5b0u: goto label_33e5b0;
        case 0x33e5b4u: goto label_33e5b4;
        case 0x33e5b8u: goto label_33e5b8;
        case 0x33e5bcu: goto label_33e5bc;
        case 0x33e5c0u: goto label_33e5c0;
        case 0x33e5c4u: goto label_33e5c4;
        case 0x33e5c8u: goto label_33e5c8;
        case 0x33e5ccu: goto label_33e5cc;
        case 0x33e5d0u: goto label_33e5d0;
        case 0x33e5d4u: goto label_33e5d4;
        case 0x33e5d8u: goto label_33e5d8;
        case 0x33e5dcu: goto label_33e5dc;
        case 0x33e5e0u: goto label_33e5e0;
        case 0x33e5e4u: goto label_33e5e4;
        case 0x33e5e8u: goto label_33e5e8;
        case 0x33e5ecu: goto label_33e5ec;
        case 0x33e5f0u: goto label_33e5f0;
        case 0x33e5f4u: goto label_33e5f4;
        case 0x33e5f8u: goto label_33e5f8;
        case 0x33e5fcu: goto label_33e5fc;
        case 0x33e600u: goto label_33e600;
        case 0x33e604u: goto label_33e604;
        case 0x33e608u: goto label_33e608;
        case 0x33e60cu: goto label_33e60c;
        case 0x33e610u: goto label_33e610;
        case 0x33e614u: goto label_33e614;
        case 0x33e618u: goto label_33e618;
        case 0x33e61cu: goto label_33e61c;
        case 0x33e620u: goto label_33e620;
        case 0x33e624u: goto label_33e624;
        case 0x33e628u: goto label_33e628;
        case 0x33e62cu: goto label_33e62c;
        case 0x33e630u: goto label_33e630;
        case 0x33e634u: goto label_33e634;
        case 0x33e638u: goto label_33e638;
        case 0x33e63cu: goto label_33e63c;
        case 0x33e640u: goto label_33e640;
        case 0x33e644u: goto label_33e644;
        case 0x33e648u: goto label_33e648;
        case 0x33e64cu: goto label_33e64c;
        case 0x33e650u: goto label_33e650;
        case 0x33e654u: goto label_33e654;
        case 0x33e658u: goto label_33e658;
        case 0x33e65cu: goto label_33e65c;
        case 0x33e660u: goto label_33e660;
        case 0x33e664u: goto label_33e664;
        case 0x33e668u: goto label_33e668;
        case 0x33e66cu: goto label_33e66c;
        case 0x33e670u: goto label_33e670;
        case 0x33e674u: goto label_33e674;
        case 0x33e678u: goto label_33e678;
        case 0x33e67cu: goto label_33e67c;
        case 0x33e680u: goto label_33e680;
        case 0x33e684u: goto label_33e684;
        case 0x33e688u: goto label_33e688;
        case 0x33e68cu: goto label_33e68c;
        case 0x33e690u: goto label_33e690;
        case 0x33e694u: goto label_33e694;
        case 0x33e698u: goto label_33e698;
        case 0x33e69cu: goto label_33e69c;
        case 0x33e6a0u: goto label_33e6a0;
        case 0x33e6a4u: goto label_33e6a4;
        case 0x33e6a8u: goto label_33e6a8;
        case 0x33e6acu: goto label_33e6ac;
        case 0x33e6b0u: goto label_33e6b0;
        case 0x33e6b4u: goto label_33e6b4;
        case 0x33e6b8u: goto label_33e6b8;
        case 0x33e6bcu: goto label_33e6bc;
        case 0x33e6c0u: goto label_33e6c0;
        case 0x33e6c4u: goto label_33e6c4;
        case 0x33e6c8u: goto label_33e6c8;
        case 0x33e6ccu: goto label_33e6cc;
        case 0x33e6d0u: goto label_33e6d0;
        case 0x33e6d4u: goto label_33e6d4;
        case 0x33e6d8u: goto label_33e6d8;
        case 0x33e6dcu: goto label_33e6dc;
        case 0x33e6e0u: goto label_33e6e0;
        case 0x33e6e4u: goto label_33e6e4;
        case 0x33e6e8u: goto label_33e6e8;
        case 0x33e6ecu: goto label_33e6ec;
        case 0x33e6f0u: goto label_33e6f0;
        case 0x33e6f4u: goto label_33e6f4;
        case 0x33e6f8u: goto label_33e6f8;
        case 0x33e6fcu: goto label_33e6fc;
        case 0x33e700u: goto label_33e700;
        case 0x33e704u: goto label_33e704;
        case 0x33e708u: goto label_33e708;
        case 0x33e70cu: goto label_33e70c;
        case 0x33e710u: goto label_33e710;
        case 0x33e714u: goto label_33e714;
        case 0x33e718u: goto label_33e718;
        case 0x33e71cu: goto label_33e71c;
        case 0x33e720u: goto label_33e720;
        case 0x33e724u: goto label_33e724;
        case 0x33e728u: goto label_33e728;
        case 0x33e72cu: goto label_33e72c;
        case 0x33e730u: goto label_33e730;
        case 0x33e734u: goto label_33e734;
        case 0x33e738u: goto label_33e738;
        case 0x33e73cu: goto label_33e73c;
        case 0x33e740u: goto label_33e740;
        case 0x33e744u: goto label_33e744;
        case 0x33e748u: goto label_33e748;
        case 0x33e74cu: goto label_33e74c;
        case 0x33e750u: goto label_33e750;
        case 0x33e754u: goto label_33e754;
        case 0x33e758u: goto label_33e758;
        case 0x33e75cu: goto label_33e75c;
        case 0x33e760u: goto label_33e760;
        case 0x33e764u: goto label_33e764;
        case 0x33e768u: goto label_33e768;
        case 0x33e76cu: goto label_33e76c;
        case 0x33e770u: goto label_33e770;
        case 0x33e774u: goto label_33e774;
        case 0x33e778u: goto label_33e778;
        case 0x33e77cu: goto label_33e77c;
        case 0x33e780u: goto label_33e780;
        case 0x33e784u: goto label_33e784;
        case 0x33e788u: goto label_33e788;
        case 0x33e78cu: goto label_33e78c;
        case 0x33e790u: goto label_33e790;
        case 0x33e794u: goto label_33e794;
        case 0x33e798u: goto label_33e798;
        case 0x33e79cu: goto label_33e79c;
        case 0x33e7a0u: goto label_33e7a0;
        case 0x33e7a4u: goto label_33e7a4;
        case 0x33e7a8u: goto label_33e7a8;
        case 0x33e7acu: goto label_33e7ac;
        case 0x33e7b0u: goto label_33e7b0;
        case 0x33e7b4u: goto label_33e7b4;
        case 0x33e7b8u: goto label_33e7b8;
        case 0x33e7bcu: goto label_33e7bc;
        case 0x33e7c0u: goto label_33e7c0;
        case 0x33e7c4u: goto label_33e7c4;
        case 0x33e7c8u: goto label_33e7c8;
        case 0x33e7ccu: goto label_33e7cc;
        case 0x33e7d0u: goto label_33e7d0;
        case 0x33e7d4u: goto label_33e7d4;
        case 0x33e7d8u: goto label_33e7d8;
        case 0x33e7dcu: goto label_33e7dc;
        case 0x33e7e0u: goto label_33e7e0;
        case 0x33e7e4u: goto label_33e7e4;
        case 0x33e7e8u: goto label_33e7e8;
        case 0x33e7ecu: goto label_33e7ec;
        case 0x33e7f0u: goto label_33e7f0;
        case 0x33e7f4u: goto label_33e7f4;
        case 0x33e7f8u: goto label_33e7f8;
        case 0x33e7fcu: goto label_33e7fc;
        case 0x33e800u: goto label_33e800;
        case 0x33e804u: goto label_33e804;
        case 0x33e808u: goto label_33e808;
        case 0x33e80cu: goto label_33e80c;
        case 0x33e810u: goto label_33e810;
        case 0x33e814u: goto label_33e814;
        case 0x33e818u: goto label_33e818;
        case 0x33e81cu: goto label_33e81c;
        case 0x33e820u: goto label_33e820;
        case 0x33e824u: goto label_33e824;
        case 0x33e828u: goto label_33e828;
        case 0x33e82cu: goto label_33e82c;
        case 0x33e830u: goto label_33e830;
        case 0x33e834u: goto label_33e834;
        case 0x33e838u: goto label_33e838;
        case 0x33e83cu: goto label_33e83c;
        case 0x33e840u: goto label_33e840;
        case 0x33e844u: goto label_33e844;
        case 0x33e848u: goto label_33e848;
        case 0x33e84cu: goto label_33e84c;
        case 0x33e850u: goto label_33e850;
        case 0x33e854u: goto label_33e854;
        case 0x33e858u: goto label_33e858;
        case 0x33e85cu: goto label_33e85c;
        case 0x33e860u: goto label_33e860;
        case 0x33e864u: goto label_33e864;
        case 0x33e868u: goto label_33e868;
        case 0x33e86cu: goto label_33e86c;
        case 0x33e870u: goto label_33e870;
        case 0x33e874u: goto label_33e874;
        case 0x33e878u: goto label_33e878;
        case 0x33e87cu: goto label_33e87c;
        case 0x33e880u: goto label_33e880;
        case 0x33e884u: goto label_33e884;
        case 0x33e888u: goto label_33e888;
        case 0x33e88cu: goto label_33e88c;
        case 0x33e890u: goto label_33e890;
        case 0x33e894u: goto label_33e894;
        case 0x33e898u: goto label_33e898;
        case 0x33e89cu: goto label_33e89c;
        case 0x33e8a0u: goto label_33e8a0;
        case 0x33e8a4u: goto label_33e8a4;
        case 0x33e8a8u: goto label_33e8a8;
        case 0x33e8acu: goto label_33e8ac;
        case 0x33e8b0u: goto label_33e8b0;
        case 0x33e8b4u: goto label_33e8b4;
        case 0x33e8b8u: goto label_33e8b8;
        case 0x33e8bcu: goto label_33e8bc;
        case 0x33e8c0u: goto label_33e8c0;
        case 0x33e8c4u: goto label_33e8c4;
        case 0x33e8c8u: goto label_33e8c8;
        case 0x33e8ccu: goto label_33e8cc;
        case 0x33e8d0u: goto label_33e8d0;
        case 0x33e8d4u: goto label_33e8d4;
        case 0x33e8d8u: goto label_33e8d8;
        case 0x33e8dcu: goto label_33e8dc;
        case 0x33e8e0u: goto label_33e8e0;
        case 0x33e8e4u: goto label_33e8e4;
        case 0x33e8e8u: goto label_33e8e8;
        case 0x33e8ecu: goto label_33e8ec;
        case 0x33e8f0u: goto label_33e8f0;
        case 0x33e8f4u: goto label_33e8f4;
        case 0x33e8f8u: goto label_33e8f8;
        case 0x33e8fcu: goto label_33e8fc;
        case 0x33e900u: goto label_33e900;
        case 0x33e904u: goto label_33e904;
        case 0x33e908u: goto label_33e908;
        case 0x33e90cu: goto label_33e90c;
        case 0x33e910u: goto label_33e910;
        case 0x33e914u: goto label_33e914;
        case 0x33e918u: goto label_33e918;
        case 0x33e91cu: goto label_33e91c;
        case 0x33e920u: goto label_33e920;
        case 0x33e924u: goto label_33e924;
        case 0x33e928u: goto label_33e928;
        case 0x33e92cu: goto label_33e92c;
        case 0x33e930u: goto label_33e930;
        case 0x33e934u: goto label_33e934;
        case 0x33e938u: goto label_33e938;
        case 0x33e93cu: goto label_33e93c;
        case 0x33e940u: goto label_33e940;
        case 0x33e944u: goto label_33e944;
        case 0x33e948u: goto label_33e948;
        case 0x33e94cu: goto label_33e94c;
        case 0x33e950u: goto label_33e950;
        case 0x33e954u: goto label_33e954;
        case 0x33e958u: goto label_33e958;
        case 0x33e95cu: goto label_33e95c;
        case 0x33e960u: goto label_33e960;
        case 0x33e964u: goto label_33e964;
        case 0x33e968u: goto label_33e968;
        case 0x33e96cu: goto label_33e96c;
        case 0x33e970u: goto label_33e970;
        case 0x33e974u: goto label_33e974;
        case 0x33e978u: goto label_33e978;
        case 0x33e97cu: goto label_33e97c;
        case 0x33e980u: goto label_33e980;
        case 0x33e984u: goto label_33e984;
        case 0x33e988u: goto label_33e988;
        case 0x33e98cu: goto label_33e98c;
        case 0x33e990u: goto label_33e990;
        case 0x33e994u: goto label_33e994;
        case 0x33e998u: goto label_33e998;
        case 0x33e99cu: goto label_33e99c;
        case 0x33e9a0u: goto label_33e9a0;
        case 0x33e9a4u: goto label_33e9a4;
        case 0x33e9a8u: goto label_33e9a8;
        case 0x33e9acu: goto label_33e9ac;
        case 0x33e9b0u: goto label_33e9b0;
        case 0x33e9b4u: goto label_33e9b4;
        case 0x33e9b8u: goto label_33e9b8;
        case 0x33e9bcu: goto label_33e9bc;
        case 0x33e9c0u: goto label_33e9c0;
        case 0x33e9c4u: goto label_33e9c4;
        case 0x33e9c8u: goto label_33e9c8;
        case 0x33e9ccu: goto label_33e9cc;
        case 0x33e9d0u: goto label_33e9d0;
        case 0x33e9d4u: goto label_33e9d4;
        case 0x33e9d8u: goto label_33e9d8;
        case 0x33e9dcu: goto label_33e9dc;
        case 0x33e9e0u: goto label_33e9e0;
        case 0x33e9e4u: goto label_33e9e4;
        case 0x33e9e8u: goto label_33e9e8;
        case 0x33e9ecu: goto label_33e9ec;
        case 0x33e9f0u: goto label_33e9f0;
        case 0x33e9f4u: goto label_33e9f4;
        case 0x33e9f8u: goto label_33e9f8;
        case 0x33e9fcu: goto label_33e9fc;
        case 0x33ea00u: goto label_33ea00;
        case 0x33ea04u: goto label_33ea04;
        case 0x33ea08u: goto label_33ea08;
        case 0x33ea0cu: goto label_33ea0c;
        case 0x33ea10u: goto label_33ea10;
        case 0x33ea14u: goto label_33ea14;
        case 0x33ea18u: goto label_33ea18;
        case 0x33ea1cu: goto label_33ea1c;
        case 0x33ea20u: goto label_33ea20;
        case 0x33ea24u: goto label_33ea24;
        case 0x33ea28u: goto label_33ea28;
        case 0x33ea2cu: goto label_33ea2c;
        case 0x33ea30u: goto label_33ea30;
        case 0x33ea34u: goto label_33ea34;
        case 0x33ea38u: goto label_33ea38;
        case 0x33ea3cu: goto label_33ea3c;
        case 0x33ea40u: goto label_33ea40;
        case 0x33ea44u: goto label_33ea44;
        case 0x33ea48u: goto label_33ea48;
        default: break;
    }

    ctx->pc = 0x33e590u;

label_33e590:
    // 0x33e590: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x33e590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_33e594:
    // 0x33e594: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x33e594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_33e598:
    // 0x33e598: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33e598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_33e59c:
    // 0x33e59c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33e59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33e5a0:
    // 0x33e5a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33e5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33e5a4:
    // 0x33e5a4: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x33e5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
label_33e5a8:
    // 0x33e5a8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x33e5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_33e5ac:
    // 0x33e5ac: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_33e5b0:
    // 0x33e5b0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x33e5b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_33e5b4:
    // 0x33e5b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33e5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_33e5b8:
    // 0x33e5b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x33e5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_33e5bc:
    // 0x33e5bc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33e5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_33e5c0:
    // 0x33e5c0: 0x2442a170  addiu       $v0, $v0, -0x5E90
    ctx->pc = 0x33e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943088));
label_33e5c4:
    // 0x33e5c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33e5c8:
    // 0x33e5c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33e5cc:
    // 0x33e5cc: 0x40f809  jalr        $v0
label_33e5d0:
    if (ctx->pc == 0x33E5D0u) {
        ctx->pc = 0x33E5D4u;
        goto label_33e5d4;
    }
    ctx->pc = 0x33E5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33E5D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E5CCu, 0x33E5D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E5D4u;
label_33e5d4:
    // 0x33e5d4: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x33e5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_33e5d8:
    // 0x33e5d8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_33e5dc:
    // 0x33e5dc: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x33e5dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_33e5e0:
    // 0x33e5e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33e5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_33e5e4:
    // 0x33e5e4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x33e5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_33e5e8:
    // 0x33e5e8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33e5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_33e5ec:
    // 0x33e5ec: 0x2442a180  addiu       $v0, $v0, -0x5E80
    ctx->pc = 0x33e5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943104));
label_33e5f0:
    // 0x33e5f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33e5f4:
    // 0x33e5f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33e5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33e5f8:
    // 0x33e5f8: 0x40f809  jalr        $v0
label_33e5fc:
    if (ctx->pc == 0x33E5FCu) {
        ctx->pc = 0x33E600u;
        goto label_33e600;
    }
    ctx->pc = 0x33E5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33E600u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E5F8u, 0x33E600u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E600u;
label_33e600:
    // 0x33e600: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_33e604:
    // 0x33e604: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x33e604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_33e608:
    // 0x33e608: 0x24510190  addiu       $s1, $v0, 0x190
    ctx->pc = 0x33e608u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
label_33e60c:
    // 0x33e60c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x33e60cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33e610:
    // 0x33e610: 0x100000f9  b           . + 4 + (0xF9 << 2)
label_33e614:
    if (ctx->pc == 0x33E614u) {
        ctx->pc = 0x33E618u;
        goto label_33e618;
    }
    ctx->pc = 0x33E610u;
    {
        const bool branch_taken_0x33e610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e610) {
            ctx->pc = 0x33E9F8u;
            goto label_33e9f8;
        }
    }
    ctx->pc = 0x33E618u;
label_33e618:
    // 0x33e618: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x33e618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_33e61c:
    // 0x33e61c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33e620:
    // 0x33e620: 0x2421804  sllv        $v1, $v0, $s2
    ctx->pc = 0x33e620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
label_33e624:
    // 0x33e624: 0x8c821348  lw          $v0, 0x1348($a0)
    ctx->pc = 0x33e624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4936)));
label_33e628:
    // 0x33e628: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33e628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_33e62c:
    // 0x33e62c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_33e630:
    if (ctx->pc == 0x33E630u) {
        ctx->pc = 0x33E634u;
        goto label_33e634;
    }
    ctx->pc = 0x33E62Cu;
    {
        const bool branch_taken_0x33e62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e62c) {
            ctx->pc = 0x33E680u;
            goto label_33e680;
        }
    }
    ctx->pc = 0x33E634u;
label_33e634:
    // 0x33e634: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x33e634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_33e638:
    // 0x33e638: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x33e638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_33e63c:
    // 0x33e63c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x33e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_33e640:
    // 0x33e640: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33e644:
    // 0x33e644: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33e644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_33e648:
    // 0x33e648: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_33e64c:
    // 0x33e64c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x33e64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_33e650:
    // 0x33e650: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33e654:
    // 0x33e654: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x33e654u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_33e658:
    // 0x33e658: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x33e658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_33e65c:
    // 0x33e65c: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x33e65cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_33e660:
    // 0x33e660: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x33e660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_33e664:
    // 0x33e664: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33e668:
    // 0x33e668: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33e668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_33e66c:
    // 0x33e66c: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x33e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_33e670:
    // 0x33e670: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33e674:
    // 0x33e674: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x33e674u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_33e678:
    // 0x33e678: 0x100000dd  b           . + 4 + (0xDD << 2)
label_33e67c:
    if (ctx->pc == 0x33E67Cu) {
        ctx->pc = 0x33E680u;
        goto label_33e680;
    }
    ctx->pc = 0x33E678u;
    {
        const bool branch_taken_0x33e678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e678) {
            ctx->pc = 0x33E9F0u;
            goto label_33e9f0;
        }
    }
    ctx->pc = 0x33E680u;
label_33e680:
    // 0x33e680: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_33e684:
    // 0x33e684: 0x2444134c  addiu       $a0, $v0, 0x134C
    ctx->pc = 0x33e684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
label_33e688:
    // 0x33e688: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x33e688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_33e68c:
    // 0x33e68c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x33e68cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_33e690:
    // 0x33e690: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33e694:
    // 0x33e694: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x33e694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_33e698:
    // 0x33e698: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x33e698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33e69c:
    // 0x33e69c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x33e69cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33e6a0:
    // 0x33e6a0: 0x96020050  lhu         $v0, 0x50($s0)
    ctx->pc = 0x33e6a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
label_33e6a4:
    // 0x33e6a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_33e6a8:
    if (ctx->pc == 0x33E6A8u) {
        ctx->pc = 0x33E6ACu;
        goto label_33e6ac;
    }
    ctx->pc = 0x33E6A4u;
    {
        const bool branch_taken_0x33e6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e6a4) {
            ctx->pc = 0x33E6C0u;
            goto label_33e6c0;
        }
    }
    ctx->pc = 0x33E6ACu;
label_33e6ac:
    // 0x33e6ac: 0x96020050  lhu         $v0, 0x50($s0)
    ctx->pc = 0x33e6acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
label_33e6b0:
    // 0x33e6b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_33e6b4:
    // 0x33e6b4: 0xa6020050  sh          $v0, 0x50($s0)
    ctx->pc = 0x33e6b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 2));
label_33e6b8:
    // 0x33e6b8: 0x10000025  b           . + 4 + (0x25 << 2)
label_33e6bc:
    if (ctx->pc == 0x33E6BCu) {
        ctx->pc = 0x33E6C0u;
        goto label_33e6c0;
    }
    ctx->pc = 0x33E6B8u;
    {
        const bool branch_taken_0x33e6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e6b8) {
            ctx->pc = 0x33E750u;
            goto label_33e750;
        }
    }
    ctx->pc = 0x33E6C0u;
label_33e6c0:
    // 0x33e6c0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_33e6c4:
    // 0x33e6c4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x33e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_33e6c8:
    // 0x33e6c8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33e6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_33e6cc:
    // 0x33e6cc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33e6d0:
    // 0x33e6d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33e6d4:
    // 0x33e6d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33e6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_33e6d8:
    // 0x33e6d8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x33e6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_33e6dc:
    // 0x33e6dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e6dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_33e6e0:
    // 0x33e6e0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x33e6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_33e6e4:
    // 0x33e6e4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33e6e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_33e6e8:
    // 0x33e6e8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33e6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33e6ec:
    // 0x33e6ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33e6f0:
    // 0x33e6f0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x33e6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
label_33e6f4:
    // 0x33e6f4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x33e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_33e6f8:
    // 0x33e6f8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33e6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_33e6fc:
    // 0x33e6fc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_33e700:
    // 0x33e700: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x33e700u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 2));
label_33e704:
    // 0x33e704: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33e704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_33e708:
    // 0x33e708: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x33e708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_33e70c:
    // 0x33e70c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x33e70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_33e710:
    // 0x33e710: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33e710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_33e714:
    // 0x33e714: 0xa6020050  sh          $v0, 0x50($s0)
    ctx->pc = 0x33e714u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 2));
label_33e718:
    // 0x33e718: 0xc06765c  jal         func_19D970
label_33e71c:
    if (ctx->pc == 0x33E71Cu) {
        ctx->pc = 0x33E720u;
        goto label_33e720;
    }
    ctx->pc = 0x33E718u;
    SET_GPR_U32(ctx, 31, 0x33E720u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x33E718u, 0x33E720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E720u;
label_33e720:
    // 0x33e720: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x33e720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
label_33e724:
    // 0x33e724: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33e724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_33e728:
    // 0x33e728: 0x0  nop
    ctx->pc = 0x33e728u;
    // NOP
label_33e72c:
    // 0x33e72c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33e72cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_33e730:
    // 0x33e730: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x33e730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_33e734:
    // 0x33e734: 0xc06765c  jal         func_19D970
label_33e738:
    if (ctx->pc == 0x33E738u) {
        ctx->pc = 0x33E73Cu;
        goto label_33e73c;
    }
    ctx->pc = 0x33E734u;
    SET_GPR_U32(ctx, 31, 0x33E73Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x33E734u, 0x33E73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E73Cu;
label_33e73c:
    // 0x33e73c: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x33e73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
label_33e740:
    // 0x33e740: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33e740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_33e744:
    // 0x33e744: 0x0  nop
    ctx->pc = 0x33e744u;
    // NOP
label_33e748:
    // 0x33e748: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33e748u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_33e74c:
    // 0x33e74c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x33e74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_33e750:
    // 0x33e750: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_33e754:
    // 0x33e754: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x33e754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_33e758:
    // 0x33e758: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x33e758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_33e75c:
    // 0x33e75c: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x33e75cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_33e760:
    // 0x33e760: 0xc040c7a  jal         func_1031E8
label_33e764:
    if (ctx->pc == 0x33E764u) {
        ctx->pc = 0x33E768u;
        goto label_33e768;
    }
    ctx->pc = 0x33E760u;
    SET_GPR_U32(ctx, 31, 0x33E768u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x33E768u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33E768u) { return; }
    ctx->pc = 0x33E768u;
label_33e768:
    // 0x33e768: 0xc06765c  jal         func_19D970
label_33e76c:
    if (ctx->pc == 0x33E76Cu) {
        ctx->pc = 0x33E770u;
        goto label_33e770;
    }
    ctx->pc = 0x33E768u;
    SET_GPR_U32(ctx, 31, 0x33E770u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x33E768u, 0x33E770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E770u;
label_33e770:
    // 0x33e770: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x33e770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_33e774:
    // 0x33e774: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33e774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_33e778:
    // 0x33e778: 0x0  nop
    ctx->pc = 0x33e778u;
    // NOP
label_33e77c:
    // 0x33e77c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x33e77cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_33e780:
    // 0x33e780: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x33e780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_33e784:
    // 0x33e784: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33e784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33e788:
    // 0x33e788: 0x0  nop
    ctx->pc = 0x33e788u;
    // NOP
label_33e78c:
    // 0x33e78c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33e78cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_33e790:
    // 0x33e790: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x33e790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_33e794:
    // 0x33e794: 0xc06766c  jal         func_19D9B0
label_33e798:
    if (ctx->pc == 0x33E798u) {
        ctx->pc = 0x33E79Cu;
        goto label_33e79c;
    }
    ctx->pc = 0x33E794u;
    SET_GPR_U32(ctx, 31, 0x33E79Cu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x33E794u, 0x33E79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E79Cu;
label_33e79c:
    // 0x33e79c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x33e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_33e7a0:
    // 0x33e7a0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x33e7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_33e7a4:
    // 0x33e7a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33e7a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_33e7a8:
    // 0x33e7a8: 0x0  nop
    ctx->pc = 0x33e7a8u;
    // NOP
label_33e7ac:
    // 0x33e7ac: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x33e7acu;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_33e7b0:
    // 0x33e7b0: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x33e7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_33e7b4:
    // 0x33e7b4: 0xc60c0034  lwc1        $f12, 0x34($s0)
    ctx->pc = 0x33e7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_33e7b8:
    // 0x33e7b8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x33e7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_33e7bc:
    // 0x33e7bc: 0xc05c848  jal         func_172120
label_33e7c0:
    if (ctx->pc == 0x33E7C0u) {
        ctx->pc = 0x33E7C4u;
        goto label_33e7c4;
    }
    ctx->pc = 0x33E7BCu;
    SET_GPR_U32(ctx, 31, 0x33E7C4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x33E7BCu, 0x33E7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E7C4u;
label_33e7c4:
    // 0x33e7c4: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x33e7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33e7c8:
    // 0x33e7c8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x33e7c8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_33e7cc:
    // 0x33e7cc: 0xc058fec  jal         func_163FB0
label_33e7d0:
    if (ctx->pc == 0x33E7D0u) {
        ctx->pc = 0x33E7D4u;
        goto label_33e7d4;
    }
    ctx->pc = 0x33E7CCu;
    SET_GPR_U32(ctx, 31, 0x33E7D4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x33E7CCu, 0x33E7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E7D4u;
label_33e7d4:
    // 0x33e7d4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x33e7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_33e7d8:
    // 0x33e7d8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_33e7dc:
    // 0x33e7dc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x33e7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33e7e0:
    // 0x33e7e0: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x33e7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33e7e4:
    // 0x33e7e4: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x33e7e4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_33e7e8:
    // 0x33e7e8: 0xc058fec  jal         func_163FB0
label_33e7ec:
    if (ctx->pc == 0x33E7ECu) {
        ctx->pc = 0x33E7F0u;
        goto label_33e7f0;
    }
    ctx->pc = 0x33E7E8u;
    SET_GPR_U32(ctx, 31, 0x33E7F0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x33E7E8u, 0x33E7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E7F0u;
label_33e7f0:
    // 0x33e7f0: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x33e7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
label_33e7f4:
    // 0x33e7f4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x33e7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_33e7f8:
    // 0x33e7f8: 0xc60c0034  lwc1        $f12, 0x34($s0)
    ctx->pc = 0x33e7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_33e7fc:
    // 0x33e7fc: 0xc067844  jal         func_19E110
label_33e800:
    if (ctx->pc == 0x33E800u) {
        ctx->pc = 0x33E804u;
        goto label_33e804;
    }
    ctx->pc = 0x33E7FCu;
    SET_GPR_U32(ctx, 31, 0x33E804u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x33E7FCu, 0x33E804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E804u;
label_33e804:
    // 0x33e804: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x33e804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_33e808:
    // 0x33e808: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x33e808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_33e80c:
    // 0x33e80c: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x33e80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_33e810:
    // 0x33e810: 0xc040bf4  jal         func_102FD0
label_33e814:
    if (ctx->pc == 0x33E814u) {
        ctx->pc = 0x33E818u;
        goto label_33e818;
    }
    ctx->pc = 0x33E810u;
    SET_GPR_U32(ctx, 31, 0x33E818u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x33E818u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33E818u) { return; }
    ctx->pc = 0x33E818u;
label_33e818:
    // 0x33e818: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x33e818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_33e81c:
    // 0x33e81c: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x33e81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_33e820:
    // 0x33e820: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x33e820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_33e824:
    // 0x33e824: 0xc0675a8  jal         func_19D6A0
label_33e828:
    if (ctx->pc == 0x33E828u) {
        ctx->pc = 0x33E82Cu;
        goto label_33e82c;
    }
    ctx->pc = 0x33E824u;
    SET_GPR_U32(ctx, 31, 0x33E82Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x33E824u, 0x33E82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E82Cu;
label_33e82c:
    // 0x33e82c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_33e830:
    // 0x33e830: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x33e830u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_33e834:
    // 0x33e834: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33e834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_33e838:
    // 0x33e838: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33e838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_33e83c:
    // 0x33e83c: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
label_33e840:
    if (ctx->pc == 0x33E840u) {
        ctx->pc = 0x33E844u;
        goto label_33e844;
    }
    ctx->pc = 0x33E83Cu;
    {
        const bool branch_taken_0x33e83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e83c) {
            ctx->pc = 0x33E9B8u;
            goto label_33e9b8;
        }
    }
    ctx->pc = 0x33E844u;
label_33e844:
    // 0x33e844: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_33e848:
    // 0x33e848: 0x8c431360  lw          $v1, 0x1360($v0)
    ctx->pc = 0x33e848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4960)));
label_33e84c:
    // 0x33e84c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33e84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33e850:
    // 0x33e850: 0x14620059  bne         $v1, $v0, . + 4 + (0x59 << 2)
label_33e854:
    if (ctx->pc == 0x33E854u) {
        ctx->pc = 0x33E858u;
        goto label_33e858;
    }
    ctx->pc = 0x33E850u;
    {
        const bool branch_taken_0x33e850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33e850) {
            ctx->pc = 0x33E9B8u;
            goto label_33e9b8;
        }
    }
    ctx->pc = 0x33E858u;
label_33e858:
    // 0x33e858: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_33e85c:
    // 0x33e85c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x33e85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_33e860:
    // 0x33e860: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x33e860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_33e864:
    // 0x33e864: 0x8c461250  lw          $a2, 0x1250($v0)
    ctx->pc = 0x33e864u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4688)));
label_33e868:
    // 0x33e868: 0xc040c80  jal         func_103200
label_33e86c:
    if (ctx->pc == 0x33E86Cu) {
        ctx->pc = 0x33E870u;
        goto label_33e870;
    }
    ctx->pc = 0x33E868u;
    SET_GPR_U32(ctx, 31, 0x33E870u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x33E870u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33E870u) { return; }
    ctx->pc = 0x33E870u;
label_33e870:
    // 0x33e870: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x33e870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33e874:
    // 0x33e874: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x33e874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33e878:
    // 0x33e878: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x33e878u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_33e87c:
    // 0x33e87c: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x33e87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33e880:
    // 0x33e880: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x33e880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33e884:
    // 0x33e884: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33e884u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_33e888:
    // 0x33e888: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x33e888u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_33e88c:
    // 0x33e88c: 0xc06757c  jal         func_19D5F0
label_33e890:
    if (ctx->pc == 0x33E890u) {
        ctx->pc = 0x33E894u;
        goto label_33e894;
    }
    ctx->pc = 0x33E88Cu;
    SET_GPR_U32(ctx, 31, 0x33E894u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x33E88Cu, 0x33E894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E894u;
label_33e894:
    // 0x33e894: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x33e894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_33e898:
    // 0x33e898: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x33e898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_33e89c:
    // 0x33e89c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33e89cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_33e8a0:
    // 0x33e8a0: 0x0  nop
    ctx->pc = 0x33e8a0u;
    // NOP
label_33e8a4:
    // 0x33e8a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x33e8a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33e8a8:
    // 0x33e8a8: 0x0  nop
    ctx->pc = 0x33e8a8u;
    // NOP
label_33e8ac:
    // 0x33e8ac: 0x45000042  bc1f        . + 4 + (0x42 << 2)
label_33e8b0:
    if (ctx->pc == 0x33E8B0u) {
        ctx->pc = 0x33E8B4u;
        goto label_33e8b4;
    }
    ctx->pc = 0x33E8ACu;
    {
        const bool branch_taken_0x33e8ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33e8ac) {
            ctx->pc = 0x33E9B8u;
            goto label_33e9b8;
        }
    }
    ctx->pc = 0x33E8B4u;
label_33e8b4:
    // 0x33e8b4: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x33e8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_33e8b8:
    // 0x33e8b8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x33e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_33e8bc:
    // 0x33e8bc: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x33e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_33e8c0:
    // 0x33e8c0: 0x402027  not         $a0, $v0
    ctx->pc = 0x33e8c0u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_33e8c4:
    // 0x33e8c4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x33e8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_33e8c8:
    // 0x33e8c8: 0x8c62121c  lw          $v0, 0x121C($v1)
    ctx->pc = 0x33e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4636)));
label_33e8cc:
    // 0x33e8cc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x33e8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_33e8d0:
    // 0x33e8d0: 0xac62121c  sw          $v0, 0x121C($v1)
    ctx->pc = 0x33e8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 2));
label_33e8d4:
    // 0x33e8d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33e8d8:
    // 0x33e8d8: 0x2422004  sllv        $a0, $v0, $s2
    ctx->pc = 0x33e8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
label_33e8dc:
    // 0x33e8dc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x33e8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_33e8e0:
    // 0x33e8e0: 0x8c621348  lw          $v0, 0x1348($v1)
    ctx->pc = 0x33e8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4936)));
label_33e8e4:
    // 0x33e8e4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x33e8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_33e8e8:
    // 0x33e8e8: 0xac621348  sw          $v0, 0x1348($v1)
    ctx->pc = 0x33e8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4936), GPR_U32(ctx, 2));
label_33e8ec:
    // 0x33e8ec: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_33e8f0:
    // 0x33e8f0: 0x8c42121c  lw          $v0, 0x121C($v0)
    ctx->pc = 0x33e8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4636)));
label_33e8f4:
    // 0x33e8f4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_33e8f8:
    if (ctx->pc == 0x33E8F8u) {
        ctx->pc = 0x33E8FCu;
        goto label_33e8fc;
    }
    ctx->pc = 0x33E8F4u;
    {
        const bool branch_taken_0x33e8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e8f4) {
            ctx->pc = 0x33E958u;
            goto label_33e958;
        }
    }
    ctx->pc = 0x33E8FCu;
label_33e8fc:
    // 0x33e8fc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_33e900:
    // 0x33e900: 0x904210a9  lbu         $v0, 0x10A9($v0)
    ctx->pc = 0x33e900u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4265)));
label_33e904:
    // 0x33e904: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33e904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_33e908:
    // 0x33e908: 0x14520013  bne         $v0, $s2, . + 4 + (0x13 << 2)
label_33e90c:
    if (ctx->pc == 0x33E90Cu) {
        ctx->pc = 0x33E910u;
        goto label_33e910;
    }
    ctx->pc = 0x33E908u;
    {
        const bool branch_taken_0x33e908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x33e908) {
            ctx->pc = 0x33E958u;
            goto label_33e958;
        }
    }
    ctx->pc = 0x33E910u;
label_33e910:
    // 0x33e910: 0x10000005  b           . + 4 + (0x5 << 2)
label_33e914:
    if (ctx->pc == 0x33E914u) {
        ctx->pc = 0x33E918u;
        goto label_33e918;
    }
    ctx->pc = 0x33E910u;
    {
        const bool branch_taken_0x33e910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e910) {
            ctx->pc = 0x33E928u;
            goto label_33e928;
        }
    }
    ctx->pc = 0x33E918u;
label_33e918:
    // 0x33e918: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x33e918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_33e91c:
    // 0x33e91c: 0x906210a9  lbu         $v0, 0x10A9($v1)
    ctx->pc = 0x33e91cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4265)));
label_33e920:
    // 0x33e920: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33e920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_33e924:
    // 0x33e924: 0xa06210a9  sb          $v0, 0x10A9($v1)
    ctx->pc = 0x33e924u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4265), (uint8_t)GPR_U32(ctx, 2));
label_33e928:
    // 0x33e928: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_33e92c:
    // 0x33e92c: 0x904210a9  lbu         $v0, 0x10A9($v0)
    ctx->pc = 0x33e92cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4265)));
label_33e930:
    // 0x33e930: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33e930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_33e934:
    // 0x33e934: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x33e934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_33e938:
    // 0x33e938: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x33e938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_33e93c:
    // 0x33e93c: 0x621806  srlv        $v1, $v0, $v1
    ctx->pc = 0x33e93cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_33e940:
    // 0x33e940: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_33e944:
    // 0x33e944: 0x8c42121c  lw          $v0, 0x121C($v0)
    ctx->pc = 0x33e944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4636)));
label_33e948:
    // 0x33e948: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33e948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_33e94c:
    // 0x33e94c: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
label_33e950:
    if (ctx->pc == 0x33E950u) {
        ctx->pc = 0x33E954u;
        goto label_33e954;
    }
    ctx->pc = 0x33E94Cu;
    {
        const bool branch_taken_0x33e94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e94c) {
            ctx->pc = 0x33E918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33e918;
        }
    }
    ctx->pc = 0x33E954u;
label_33e954:
    // 0x33e954: 0x0  nop
    ctx->pc = 0x33e954u;
    // NOP
label_33e958:
    // 0x33e958: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_33e95c:
    // 0x33e95c: 0x8c42121c  lw          $v0, 0x121C($v0)
    ctx->pc = 0x33e95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4636)));
label_33e960:
    // 0x33e960: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_33e964:
    if (ctx->pc == 0x33E964u) {
        ctx->pc = 0x33E968u;
        goto label_33e968;
    }
    ctx->pc = 0x33E960u;
    {
        const bool branch_taken_0x33e960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33e960) {
            ctx->pc = 0x33E9B8u;
            goto label_33e9b8;
        }
    }
    ctx->pc = 0x33E968u;
label_33e968:
    // 0x33e968: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33e968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33e96c:
    // 0x33e96c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_33e970:
    // 0x33e970: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x33e970u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_33e974:
    // 0x33e974: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_33e978:
    // 0x33e978: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x33e978u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_33e97c:
    // 0x33e97c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_33e980:
    // 0x33e980: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x33e980u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_33e984:
    // 0x33e984: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_33e988:
    // 0x33e988: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x33e988u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
label_33e98c:
    // 0x33e98c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_33e990:
    // 0x33e990: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x33e990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_33e994:
    // 0x33e994: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x33e994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_33e998:
    // 0x33e998: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x33e998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_33e99c:
    // 0x33e99c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x33e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_33e9a0:
    // 0x33e9a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x33e9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_33e9a4:
    // 0x33e9a4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x33e9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_33e9a8:
    // 0x33e9a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33e9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33e9ac:
    // 0x33e9ac: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_33e9b0:
    // 0x33e9b0: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x33e9b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
label_33e9b4:
    // 0x33e9b4: 0x0  nop
    ctx->pc = 0x33e9b4u;
    // NOP
label_33e9b8:
    // 0x33e9b8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x33e9b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_33e9bc:
    // 0x33e9bc: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x33e9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_33e9c0:
    // 0x33e9c0: 0xc0677d8  jal         func_19DF60
label_33e9c4:
    if (ctx->pc == 0x33E9C4u) {
        ctx->pc = 0x33E9C8u;
        goto label_33e9c8;
    }
    ctx->pc = 0x33E9C0u;
    SET_GPR_U32(ctx, 31, 0x33E9C8u);
    ctx->pc = 0x19DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF60u, 0x33E9C0u, 0x33E9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E9C8u;
label_33e9c8:
    // 0x33e9c8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x33e9c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_33e9cc:
    // 0x33e9cc: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x33e9ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_33e9d0:
    // 0x33e9d0: 0xc62c0108  lwc1        $f12, 0x108($s1)
    ctx->pc = 0x33e9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_33e9d4:
    // 0x33e9d4: 0xc067808  jal         func_19E020
label_33e9d8:
    if (ctx->pc == 0x33E9D8u) {
        ctx->pc = 0x33E9DCu;
        goto label_33e9dc;
    }
    ctx->pc = 0x33E9D4u;
    SET_GPR_U32(ctx, 31, 0x33E9DCu);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x33E9D4u, 0x33E9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E9DCu;
label_33e9dc:
    // 0x33e9dc: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x33e9dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_33e9e0:
    // 0x33e9e0: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x33e9e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_33e9e4:
    // 0x33e9e4: 0xc62c010c  lwc1        $f12, 0x10C($s1)
    ctx->pc = 0x33e9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_33e9e8:
    // 0x33e9e8: 0xc0676d0  jal         func_19DB40
label_33e9ec:
    if (ctx->pc == 0x33E9ECu) {
        ctx->pc = 0x33E9F0u;
        goto label_33e9f0;
    }
    ctx->pc = 0x33E9E8u;
    SET_GPR_U32(ctx, 31, 0x33E9F0u);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x33E9E8u, 0x33E9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E9F0u;
label_33e9f0:
    // 0x33e9f0: 0x26310190  addiu       $s1, $s1, 0x190
    ctx->pc = 0x33e9f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
label_33e9f4:
    // 0x33e9f4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x33e9f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_33e9f8:
    // 0x33e9f8: 0x2e410010  sltiu       $at, $s2, 0x10
    ctx->pc = 0x33e9f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_33e9fc:
    // 0x33e9fc: 0x1420ff06  bnez        $at, . + 4 + (-0xFA << 2)
label_33ea00:
    if (ctx->pc == 0x33EA00u) {
        ctx->pc = 0x33EA04u;
        goto label_33ea04;
    }
    ctx->pc = 0x33E9FCu;
    {
        const bool branch_taken_0x33e9fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33e9fc) {
            ctx->pc = 0x33E618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33e618;
        }
    }
    ctx->pc = 0x33EA04u;
label_33ea04:
    // 0x33ea04: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x33ea04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_33ea08:
    // 0x33ea08: 0xc097a68  jal         func_25E9A0
label_33ea0c:
    if (ctx->pc == 0x33EA0Cu) {
        ctx->pc = 0x33EA10u;
        goto label_33ea10;
    }
    ctx->pc = 0x33EA08u;
    SET_GPR_U32(ctx, 31, 0x33EA10u);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x33EA08u, 0x33EA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EA10u;
label_33ea10:
    // 0x33ea10: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x33ea10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_33ea14:
    // 0x33ea14: 0x8c631330  lw          $v1, 0x1330($v1)
    ctx->pc = 0x33ea14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4912)));
label_33ea18:
    // 0x33ea18: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_33ea1c:
    if (ctx->pc == 0x33EA1Cu) {
        ctx->pc = 0x33EA20u;
        goto label_33ea20;
    }
    ctx->pc = 0x33EA18u;
    {
        const bool branch_taken_0x33ea18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ea18) {
            ctx->pc = 0x33EA30u;
            goto label_33ea30;
        }
    }
    ctx->pc = 0x33EA20u;
label_33ea20:
    // 0x33ea20: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x33ea20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_33ea24:
    // 0x33ea24: 0x8c831330  lw          $v1, 0x1330($a0)
    ctx->pc = 0x33ea24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4912)));
label_33ea28:
    // 0x33ea28: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x33ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_33ea2c:
    // 0x33ea2c: 0xac831330  sw          $v1, 0x1330($a0)
    ctx->pc = 0x33ea2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4912), GPR_U32(ctx, 3));
label_33ea30:
    // 0x33ea30: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x33ea30u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33ea34:
    // 0x33ea34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33ea34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33ea38:
    // 0x33ea38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33ea38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33ea3c:
    // 0x33ea3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33ea3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33ea40:
    // 0x33ea40: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x33ea40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_33ea44:
    // 0x33ea44: 0x3e00008  jr          $ra
label_33ea48:
    if (ctx->pc == 0x33EA48u) {
        ctx->pc = 0x33EA4Cu;
        goto label_fallthrough_0x33ea44;
    }
    ctx->pc = 0x33EA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33ea44:
    ctx->pc = 0x33EA4Cu;
}
