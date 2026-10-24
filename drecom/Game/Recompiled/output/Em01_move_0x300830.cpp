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

// Function: Em01_move
// Address: 0x300830 - 0x300b6c
void Em01_move_0x300830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_move_0x300830");
#endif

    switch (ctx->pc) {
        case 0x300830u: goto label_300830;
        case 0x300834u: goto label_300834;
        case 0x300838u: goto label_300838;
        case 0x30083cu: goto label_30083c;
        case 0x300840u: goto label_300840;
        case 0x300844u: goto label_300844;
        case 0x300848u: goto label_300848;
        case 0x30084cu: goto label_30084c;
        case 0x300850u: goto label_300850;
        case 0x300854u: goto label_300854;
        case 0x300858u: goto label_300858;
        case 0x30085cu: goto label_30085c;
        case 0x300860u: goto label_300860;
        case 0x300864u: goto label_300864;
        case 0x300868u: goto label_300868;
        case 0x30086cu: goto label_30086c;
        case 0x300870u: goto label_300870;
        case 0x300874u: goto label_300874;
        case 0x300878u: goto label_300878;
        case 0x30087cu: goto label_30087c;
        case 0x300880u: goto label_300880;
        case 0x300884u: goto label_300884;
        case 0x300888u: goto label_300888;
        case 0x30088cu: goto label_30088c;
        case 0x300890u: goto label_300890;
        case 0x300894u: goto label_300894;
        case 0x300898u: goto label_300898;
        case 0x30089cu: goto label_30089c;
        case 0x3008a0u: goto label_3008a0;
        case 0x3008a4u: goto label_3008a4;
        case 0x3008a8u: goto label_3008a8;
        case 0x3008acu: goto label_3008ac;
        case 0x3008b0u: goto label_3008b0;
        case 0x3008b4u: goto label_3008b4;
        case 0x3008b8u: goto label_3008b8;
        case 0x3008bcu: goto label_3008bc;
        case 0x3008c0u: goto label_3008c0;
        case 0x3008c4u: goto label_3008c4;
        case 0x3008c8u: goto label_3008c8;
        case 0x3008ccu: goto label_3008cc;
        case 0x3008d0u: goto label_3008d0;
        case 0x3008d4u: goto label_3008d4;
        case 0x3008d8u: goto label_3008d8;
        case 0x3008dcu: goto label_3008dc;
        case 0x3008e0u: goto label_3008e0;
        case 0x3008e4u: goto label_3008e4;
        case 0x3008e8u: goto label_3008e8;
        case 0x3008ecu: goto label_3008ec;
        case 0x3008f0u: goto label_3008f0;
        case 0x3008f4u: goto label_3008f4;
        case 0x3008f8u: goto label_3008f8;
        case 0x3008fcu: goto label_3008fc;
        case 0x300900u: goto label_300900;
        case 0x300904u: goto label_300904;
        case 0x300908u: goto label_300908;
        case 0x30090cu: goto label_30090c;
        case 0x300910u: goto label_300910;
        case 0x300914u: goto label_300914;
        case 0x300918u: goto label_300918;
        case 0x30091cu: goto label_30091c;
        case 0x300920u: goto label_300920;
        case 0x300924u: goto label_300924;
        case 0x300928u: goto label_300928;
        case 0x30092cu: goto label_30092c;
        case 0x300930u: goto label_300930;
        case 0x300934u: goto label_300934;
        case 0x300938u: goto label_300938;
        case 0x30093cu: goto label_30093c;
        case 0x300940u: goto label_300940;
        case 0x300944u: goto label_300944;
        case 0x300948u: goto label_300948;
        case 0x30094cu: goto label_30094c;
        case 0x300950u: goto label_300950;
        case 0x300954u: goto label_300954;
        case 0x300958u: goto label_300958;
        case 0x30095cu: goto label_30095c;
        case 0x300960u: goto label_300960;
        case 0x300964u: goto label_300964;
        case 0x300968u: goto label_300968;
        case 0x30096cu: goto label_30096c;
        case 0x300970u: goto label_300970;
        case 0x300974u: goto label_300974;
        case 0x300978u: goto label_300978;
        case 0x30097cu: goto label_30097c;
        case 0x300980u: goto label_300980;
        case 0x300984u: goto label_300984;
        case 0x300988u: goto label_300988;
        case 0x30098cu: goto label_30098c;
        case 0x300990u: goto label_300990;
        case 0x300994u: goto label_300994;
        case 0x300998u: goto label_300998;
        case 0x30099cu: goto label_30099c;
        case 0x3009a0u: goto label_3009a0;
        case 0x3009a4u: goto label_3009a4;
        case 0x3009a8u: goto label_3009a8;
        case 0x3009acu: goto label_3009ac;
        case 0x3009b0u: goto label_3009b0;
        case 0x3009b4u: goto label_3009b4;
        case 0x3009b8u: goto label_3009b8;
        case 0x3009bcu: goto label_3009bc;
        case 0x3009c0u: goto label_3009c0;
        case 0x3009c4u: goto label_3009c4;
        case 0x3009c8u: goto label_3009c8;
        case 0x3009ccu: goto label_3009cc;
        case 0x3009d0u: goto label_3009d0;
        case 0x3009d4u: goto label_3009d4;
        case 0x3009d8u: goto label_3009d8;
        case 0x3009dcu: goto label_3009dc;
        case 0x3009e0u: goto label_3009e0;
        case 0x3009e4u: goto label_3009e4;
        case 0x3009e8u: goto label_3009e8;
        case 0x3009ecu: goto label_3009ec;
        case 0x3009f0u: goto label_3009f0;
        case 0x3009f4u: goto label_3009f4;
        case 0x3009f8u: goto label_3009f8;
        case 0x3009fcu: goto label_3009fc;
        case 0x300a00u: goto label_300a00;
        case 0x300a04u: goto label_300a04;
        case 0x300a08u: goto label_300a08;
        case 0x300a0cu: goto label_300a0c;
        case 0x300a10u: goto label_300a10;
        case 0x300a14u: goto label_300a14;
        case 0x300a18u: goto label_300a18;
        case 0x300a1cu: goto label_300a1c;
        case 0x300a20u: goto label_300a20;
        case 0x300a24u: goto label_300a24;
        case 0x300a28u: goto label_300a28;
        case 0x300a2cu: goto label_300a2c;
        case 0x300a30u: goto label_300a30;
        case 0x300a34u: goto label_300a34;
        case 0x300a38u: goto label_300a38;
        case 0x300a3cu: goto label_300a3c;
        case 0x300a40u: goto label_300a40;
        case 0x300a44u: goto label_300a44;
        case 0x300a48u: goto label_300a48;
        case 0x300a4cu: goto label_300a4c;
        case 0x300a50u: goto label_300a50;
        case 0x300a54u: goto label_300a54;
        case 0x300a58u: goto label_300a58;
        case 0x300a5cu: goto label_300a5c;
        case 0x300a60u: goto label_300a60;
        case 0x300a64u: goto label_300a64;
        case 0x300a68u: goto label_300a68;
        case 0x300a6cu: goto label_300a6c;
        case 0x300a70u: goto label_300a70;
        case 0x300a74u: goto label_300a74;
        case 0x300a78u: goto label_300a78;
        case 0x300a7cu: goto label_300a7c;
        case 0x300a80u: goto label_300a80;
        case 0x300a84u: goto label_300a84;
        case 0x300a88u: goto label_300a88;
        case 0x300a8cu: goto label_300a8c;
        case 0x300a90u: goto label_300a90;
        case 0x300a94u: goto label_300a94;
        case 0x300a98u: goto label_300a98;
        case 0x300a9cu: goto label_300a9c;
        case 0x300aa0u: goto label_300aa0;
        case 0x300aa4u: goto label_300aa4;
        case 0x300aa8u: goto label_300aa8;
        case 0x300aacu: goto label_300aac;
        case 0x300ab0u: goto label_300ab0;
        case 0x300ab4u: goto label_300ab4;
        case 0x300ab8u: goto label_300ab8;
        case 0x300abcu: goto label_300abc;
        case 0x300ac0u: goto label_300ac0;
        case 0x300ac4u: goto label_300ac4;
        case 0x300ac8u: goto label_300ac8;
        case 0x300accu: goto label_300acc;
        case 0x300ad0u: goto label_300ad0;
        case 0x300ad4u: goto label_300ad4;
        case 0x300ad8u: goto label_300ad8;
        case 0x300adcu: goto label_300adc;
        case 0x300ae0u: goto label_300ae0;
        case 0x300ae4u: goto label_300ae4;
        case 0x300ae8u: goto label_300ae8;
        case 0x300aecu: goto label_300aec;
        case 0x300af0u: goto label_300af0;
        case 0x300af4u: goto label_300af4;
        case 0x300af8u: goto label_300af8;
        case 0x300afcu: goto label_300afc;
        case 0x300b00u: goto label_300b00;
        case 0x300b04u: goto label_300b04;
        case 0x300b08u: goto label_300b08;
        case 0x300b0cu: goto label_300b0c;
        case 0x300b10u: goto label_300b10;
        case 0x300b14u: goto label_300b14;
        case 0x300b18u: goto label_300b18;
        case 0x300b1cu: goto label_300b1c;
        case 0x300b20u: goto label_300b20;
        case 0x300b24u: goto label_300b24;
        case 0x300b28u: goto label_300b28;
        case 0x300b2cu: goto label_300b2c;
        case 0x300b30u: goto label_300b30;
        case 0x300b34u: goto label_300b34;
        case 0x300b38u: goto label_300b38;
        case 0x300b3cu: goto label_300b3c;
        case 0x300b40u: goto label_300b40;
        case 0x300b44u: goto label_300b44;
        case 0x300b48u: goto label_300b48;
        case 0x300b4cu: goto label_300b4c;
        case 0x300b50u: goto label_300b50;
        case 0x300b54u: goto label_300b54;
        case 0x300b58u: goto label_300b58;
        case 0x300b5cu: goto label_300b5c;
        case 0x300b60u: goto label_300b60;
        case 0x300b64u: goto label_300b64;
        case 0x300b68u: goto label_300b68;
        default: break;
    }

    ctx->pc = 0x300830u;

label_300830:
    // 0x300830: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x300830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_300834:
    // 0x300834: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x300834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_300838:
    // 0x300838: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x300838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_30083c:
    // 0x30083c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30083cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_300840:
    // 0x300840: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x300840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_300844:
    // 0x300844: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x300844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_300848:
    // 0x300848: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x300848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_30084c:
    // 0x30084c: 0x244294a0  addiu       $v0, $v0, -0x6B60
    ctx->pc = 0x30084cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939808));
label_300850:
    // 0x300850: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x300850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_300854:
    // 0x300854: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x300854u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_300858:
    // 0x300858: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x300858u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_30085c:
    // 0x30085c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x30085cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_300860:
    // 0x300860: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x300860u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_300864:
    // 0x300864: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x300864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_300868:
    // 0x300868: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x300868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30086c:
    // 0x30086c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_300870:
    if (ctx->pc == 0x300870u) {
        ctx->pc = 0x300874u;
        goto label_300874;
    }
    ctx->pc = 0x30086Cu;
    {
        const bool branch_taken_0x30086c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30086c) {
            ctx->pc = 0x3008B8u;
            goto label_3008b8;
        }
    }
    ctx->pc = 0x300874u;
label_300874:
    // 0x300874: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_300878:
    if (ctx->pc == 0x300878u) {
        ctx->pc = 0x30087Cu;
        goto label_30087c;
    }
    ctx->pc = 0x300874u;
    {
        const bool branch_taken_0x300874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x300874) {
            ctx->pc = 0x300884u;
            goto label_300884;
        }
    }
    ctx->pc = 0x30087Cu;
label_30087c:
    // 0x30087c: 0x10000059  b           . + 4 + (0x59 << 2)
label_300880:
    if (ctx->pc == 0x300880u) {
        ctx->pc = 0x300884u;
        goto label_300884;
    }
    ctx->pc = 0x30087Cu;
    {
        const bool branch_taken_0x30087c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30087c) {
            ctx->pc = 0x3009E4u;
            goto label_3009e4;
        }
    }
    ctx->pc = 0x300884u;
label_300884:
    // 0x300884: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x300884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_300888:
    // 0x300888: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x300888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_30088c:
    // 0x30088c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x30088cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_300890:
    // 0x300890: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x300890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_300894:
    // 0x300894: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x300894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_300898:
    // 0x300898: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x300898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_30089c:
    // 0x30089c: 0x24429300  addiu       $v0, $v0, -0x6D00
    ctx->pc = 0x30089cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939392));
label_3008a0:
    // 0x3008a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3008a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3008a4:
    // 0x3008a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3008a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3008a8:
    // 0x3008a8: 0x40f809  jalr        $v0
label_3008ac:
    if (ctx->pc == 0x3008ACu) {
        ctx->pc = 0x3008B0u;
        goto label_3008b0;
    }
    ctx->pc = 0x3008A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3008B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3008A8u, 0x3008B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3008B0u;
label_3008b0:
    // 0x3008b0: 0x1000004c  b           . + 4 + (0x4C << 2)
label_3008b4:
    if (ctx->pc == 0x3008B4u) {
        ctx->pc = 0x3008B8u;
        goto label_3008b8;
    }
    ctx->pc = 0x3008B0u;
    {
        const bool branch_taken_0x3008b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3008b0) {
            ctx->pc = 0x3009E4u;
            goto label_3009e4;
        }
    }
    ctx->pc = 0x3008B8u;
label_3008b8:
    // 0x3008b8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3008b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3008bc:
    // 0x3008bc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3008bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3008c0:
    // 0x3008c0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3008c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3008c4:
    // 0x3008c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3008c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3008c8:
    // 0x3008c8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3008c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3008cc:
    // 0x3008cc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3008ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_3008d0:
    // 0x3008d0: 0x24429410  addiu       $v0, $v0, -0x6BF0
    ctx->pc = 0x3008d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939664));
label_3008d4:
    // 0x3008d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3008d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3008d8:
    // 0x3008d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3008d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3008dc:
    // 0x3008dc: 0x40f809  jalr        $v0
label_3008e0:
    if (ctx->pc == 0x3008E0u) {
        ctx->pc = 0x3008E4u;
        goto label_3008e4;
    }
    ctx->pc = 0x3008DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3008E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3008DCu, 0x3008E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3008E4u;
label_3008e4:
    // 0x3008e4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3008e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3008e8:
    // 0x3008e8: 0x8c621344  lw          $v0, 0x1344($v1)
    ctx->pc = 0x3008e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4932)));
label_3008ec:
    // 0x3008ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3008ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3008f0:
    // 0x3008f0: 0xac621344  sw          $v0, 0x1344($v1)
    ctx->pc = 0x3008f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4932), GPR_U32(ctx, 2));
label_3008f4:
    // 0x3008f4: 0x2c41000b  sltiu       $at, $v0, 0xB
    ctx->pc = 0x3008f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_3008f8:
    // 0x3008f8: 0x1420003a  bnez        $at, . + 4 + (0x3A << 2)
label_3008fc:
    if (ctx->pc == 0x3008FCu) {
        ctx->pc = 0x300900u;
        goto label_300900;
    }
    ctx->pc = 0x3008F8u;
    {
        const bool branch_taken_0x3008f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3008f8) {
            ctx->pc = 0x3009E4u;
            goto label_3009e4;
        }
    }
    ctx->pc = 0x300900u;
label_300900:
    // 0x300900: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x300900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_300904:
    // 0x300904: 0xac401344  sw          $zero, 0x1344($v0)
    ctx->pc = 0x300904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4932), GPR_U32(ctx, 0));
label_300908:
    // 0x300908: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x300908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_30090c:
    // 0x30090c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30090cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_300910:
    // 0x300910: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x300910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
label_300914:
    // 0x300914: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x300914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_300918:
    // 0x300918: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x300918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_30091c:
    // 0x30091c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30091cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_300920:
    // 0x300920: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x300920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_300924:
    // 0x300924: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x300924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_300928:
    // 0x300928: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x300928u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_30092c:
    // 0x30092c: 0x24042501  addiu       $a0, $zero, 0x2501
    ctx->pc = 0x30092cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9473));
label_300930:
    // 0x300930: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x300930u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_300934:
    // 0x300934: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x300934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_300938:
    // 0x300938: 0xc062f5c  jal         func_18BD70
label_30093c:
    if (ctx->pc == 0x30093Cu) {
        ctx->pc = 0x300940u;
        goto label_300940;
    }
    ctx->pc = 0x300938u;
    SET_GPR_U32(ctx, 31, 0x300940u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x300938u, 0x300940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300940u;
label_300940:
    // 0x300940: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x300940u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_300944:
    // 0x300944: 0xc0630a8  jal         func_18C2A0
label_300948:
    if (ctx->pc == 0x300948u) {
        ctx->pc = 0x30094Cu;
        goto label_30094c;
    }
    ctx->pc = 0x300944u;
    SET_GPR_U32(ctx, 31, 0x30094Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x300944u, 0x30094Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30094Cu;
label_30094c:
    // 0x30094c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30094cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_300950:
    // 0x300950: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x300950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_300954:
    // 0x300954: 0x0  nop
    ctx->pc = 0x300954u;
    // NOP
label_300958:
    // 0x300958: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x300958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_30095c:
    // 0x30095c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x30095cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_300960:
    // 0x300960: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x300960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_300964:
    // 0x300964: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x300964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
label_300968:
    // 0x300968: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x300968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_30096c:
    // 0x30096c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30096cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_300970:
    // 0x300970: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x300970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_300974:
    // 0x300974: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x300974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_300978:
    // 0x300978: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x300978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_30097c:
    // 0x30097c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x30097cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_300980:
    // 0x300980: 0x24042500  addiu       $a0, $zero, 0x2500
    ctx->pc = 0x300980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9472));
label_300984:
    // 0x300984: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x300984u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_300988:
    // 0x300988: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x300988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_30098c:
    // 0x30098c: 0xc062f5c  jal         func_18BD70
label_300990:
    if (ctx->pc == 0x300990u) {
        ctx->pc = 0x300994u;
        goto label_300994;
    }
    ctx->pc = 0x30098Cu;
    SET_GPR_U32(ctx, 31, 0x300994u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30098Cu, 0x300994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300994u;
label_300994:
    // 0x300994: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x300994u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_300998:
    // 0x300998: 0xc0630a8  jal         func_18C2A0
label_30099c:
    if (ctx->pc == 0x30099Cu) {
        ctx->pc = 0x3009A0u;
        goto label_3009a0;
    }
    ctx->pc = 0x300998u;
    SET_GPR_U32(ctx, 31, 0x3009A0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x300998u, 0x3009A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3009A0u;
label_3009a0:
    // 0x3009a0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3009a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3009a4:
    // 0x3009a4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3009a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_3009a8:
    // 0x3009a8: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x3009a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
label_3009ac:
    // 0x3009ac: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3009acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_3009b0:
    // 0x3009b0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3009b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_3009b4:
    // 0x3009b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3009b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3009b8:
    // 0x3009b8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3009b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_3009bc:
    // 0x3009bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3009bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3009c0:
    // 0x3009c0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x3009c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3009c4:
    // 0x3009c4: 0x24042500  addiu       $a0, $zero, 0x2500
    ctx->pc = 0x3009c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9472));
label_3009c8:
    // 0x3009c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3009c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3009cc:
    // 0x3009cc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3009ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3009d0:
    // 0x3009d0: 0xc062f5c  jal         func_18BD70
label_3009d4:
    if (ctx->pc == 0x3009D4u) {
        ctx->pc = 0x3009D8u;
        goto label_3009d8;
    }
    ctx->pc = 0x3009D0u;
    SET_GPR_U32(ctx, 31, 0x3009D8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3009D0u, 0x3009D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3009D8u;
label_3009d8:
    // 0x3009d8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3009d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3009dc:
    // 0x3009dc: 0xc0630a8  jal         func_18C2A0
label_3009e0:
    if (ctx->pc == 0x3009E0u) {
        ctx->pc = 0x3009E4u;
        goto label_3009e4;
    }
    ctx->pc = 0x3009DCu;
    SET_GPR_U32(ctx, 31, 0x3009E4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3009DCu, 0x3009E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3009E4u;
label_3009e4:
    // 0x3009e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3009e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3009e8:
    // 0x3009e8: 0x8c421338  lw          $v0, 0x1338($v0)
    ctx->pc = 0x3009e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
label_3009ec:
    // 0x3009ec: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3009ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_3009f0:
    // 0x3009f0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3009f4:
    if (ctx->pc == 0x3009F4u) {
        ctx->pc = 0x3009F8u;
        goto label_3009f8;
    }
    ctx->pc = 0x3009F0u;
    {
        const bool branch_taken_0x3009f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3009f0) {
            ctx->pc = 0x300A14u;
            goto label_300a14;
        }
    }
    ctx->pc = 0x3009F8u;
label_3009f8:
    // 0x3009f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3009f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3009fc:
    // 0x3009fc: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x3009fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_300a00:
    // 0x300a00: 0x245107e0  addiu       $s1, $v0, 0x7E0
    ctx->pc = 0x300a00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2016));
label_300a04:
    // 0x300a04: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x300a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_300a08:
    // 0x300a08: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x300a08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_300a0c:
    // 0x300a0c: 0xc079140  jal         func_1E4500
label_300a10:
    if (ctx->pc == 0x300A10u) {
        ctx->pc = 0x300A14u;
        goto label_300a14;
    }
    ctx->pc = 0x300A0Cu;
    SET_GPR_U32(ctx, 31, 0x300A14u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x300A0Cu, 0x300A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300A14u;
label_300a14:
    // 0x300a14: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x300a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_300a18:
    // 0x300a18: 0x8c421338  lw          $v0, 0x1338($v0)
    ctx->pc = 0x300a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
label_300a1c:
    // 0x300a1c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x300a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_300a20:
    // 0x300a20: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_300a24:
    if (ctx->pc == 0x300A24u) {
        ctx->pc = 0x300A28u;
        goto label_300a28;
    }
    ctx->pc = 0x300A20u;
    {
        const bool branch_taken_0x300a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300a20) {
            ctx->pc = 0x300AB4u;
            goto label_300ab4;
        }
    }
    ctx->pc = 0x300A28u;
label_300a28:
    // 0x300a28: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x300a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_300a2c:
    // 0x300a2c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x300a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_300a30:
    // 0x300a30: 0x24500510  addiu       $s0, $v0, 0x510
    ctx->pc = 0x300a30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
label_300a34:
    // 0x300a34: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x300a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_300a38:
    // 0x300a38: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x300a38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_300a3c:
    // 0x300a3c: 0xc079140  jal         func_1E4500
label_300a40:
    if (ctx->pc == 0x300A40u) {
        ctx->pc = 0x300A44u;
        goto label_300a44;
    }
    ctx->pc = 0x300A3Cu;
    SET_GPR_U32(ctx, 31, 0x300A44u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x300A3Cu, 0x300A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300A44u;
label_300a44:
    // 0x300a44: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x300a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_300a48:
    // 0x300a48: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x300a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_300a4c:
    // 0x300a4c: 0x245005a0  addiu       $s0, $v0, 0x5A0
    ctx->pc = 0x300a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
label_300a50:
    // 0x300a50: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x300a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_300a54:
    // 0x300a54: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x300a54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_300a58:
    // 0x300a58: 0xc079140  jal         func_1E4500
label_300a5c:
    if (ctx->pc == 0x300A5Cu) {
        ctx->pc = 0x300A60u;
        goto label_300a60;
    }
    ctx->pc = 0x300A58u;
    SET_GPR_U32(ctx, 31, 0x300A60u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x300A58u, 0x300A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300A60u;
label_300a60:
    // 0x300a60: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x300a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_300a64:
    // 0x300a64: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x300a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_300a68:
    // 0x300a68: 0x24500630  addiu       $s0, $v0, 0x630
    ctx->pc = 0x300a68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1584));
label_300a6c:
    // 0x300a6c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x300a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_300a70:
    // 0x300a70: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x300a70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_300a74:
    // 0x300a74: 0xc079140  jal         func_1E4500
label_300a78:
    if (ctx->pc == 0x300A78u) {
        ctx->pc = 0x300A7Cu;
        goto label_300a7c;
    }
    ctx->pc = 0x300A74u;
    SET_GPR_U32(ctx, 31, 0x300A7Cu);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x300A74u, 0x300A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300A7Cu;
label_300a7c:
    // 0x300a7c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x300a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_300a80:
    // 0x300a80: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x300a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_300a84:
    // 0x300a84: 0x245006c0  addiu       $s0, $v0, 0x6C0
    ctx->pc = 0x300a84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
label_300a88:
    // 0x300a88: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x300a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_300a8c:
    // 0x300a8c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x300a8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_300a90:
    // 0x300a90: 0xc079140  jal         func_1E4500
label_300a94:
    if (ctx->pc == 0x300A94u) {
        ctx->pc = 0x300A98u;
        goto label_300a98;
    }
    ctx->pc = 0x300A90u;
    SET_GPR_U32(ctx, 31, 0x300A98u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x300A90u, 0x300A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300A98u;
label_300a98:
    // 0x300a98: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x300a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_300a9c:
    // 0x300a9c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x300a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_300aa0:
    // 0x300aa0: 0x24500750  addiu       $s0, $v0, 0x750
    ctx->pc = 0x300aa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1872));
label_300aa4:
    // 0x300aa4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x300aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_300aa8:
    // 0x300aa8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x300aa8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_300aac:
    // 0x300aac: 0xc079140  jal         func_1E4500
label_300ab0:
    if (ctx->pc == 0x300AB0u) {
        ctx->pc = 0x300AB4u;
        goto label_300ab4;
    }
    ctx->pc = 0x300AACu;
    SET_GPR_U32(ctx, 31, 0x300AB4u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x300AACu, 0x300AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300AB4u;
label_300ab4:
    // 0x300ab4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x300ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_300ab8:
    // 0x300ab8: 0x8c421338  lw          $v0, 0x1338($v0)
    ctx->pc = 0x300ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
label_300abc:
    // 0x300abc: 0x3042001e  andi        $v0, $v0, 0x1E
    ctx->pc = 0x300abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)30);
label_300ac0:
    // 0x300ac0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_300ac4:
    if (ctx->pc == 0x300AC4u) {
        ctx->pc = 0x300AC8u;
        goto label_300ac8;
    }
    ctx->pc = 0x300AC0u;
    {
        const bool branch_taken_0x300ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300ac0) {
            ctx->pc = 0x300AD4u;
            goto label_300ad4;
        }
    }
    ctx->pc = 0x300AC8u;
label_300ac8:
    // 0x300ac8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x300ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_300acc:
    // 0x300acc: 0xc0c04b4  jal         func_3012D0
label_300ad0:
    if (ctx->pc == 0x300AD0u) {
        ctx->pc = 0x300AD4u;
        goto label_300ad4;
    }
    ctx->pc = 0x300ACCu;
    SET_GPR_U32(ctx, 31, 0x300AD4u);
    ctx->pc = 0x3012D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3012D0u, 0x300ACCu, 0x300AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300AD4u;
label_300ad4:
    // 0x300ad4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x300ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_300ad8:
    // 0x300ad8: 0x8c421338  lw          $v0, 0x1338($v0)
    ctx->pc = 0x300ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
label_300adc:
    // 0x300adc: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x300adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_300ae0:
    // 0x300ae0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_300ae4:
    if (ctx->pc == 0x300AE4u) {
        ctx->pc = 0x300AE8u;
        goto label_300ae8;
    }
    ctx->pc = 0x300AE0u;
    {
        const bool branch_taken_0x300ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300ae0) {
            ctx->pc = 0x300AF4u;
            goto label_300af4;
        }
    }
    ctx->pc = 0x300AE8u;
label_300ae8:
    // 0x300ae8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x300ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_300aec:
    // 0x300aec: 0xc0c0448  jal         func_301120
label_300af0:
    if (ctx->pc == 0x300AF0u) {
        ctx->pc = 0x300AF4u;
        goto label_300af4;
    }
    ctx->pc = 0x300AECu;
    SET_GPR_U32(ctx, 31, 0x300AF4u);
    ctx->pc = 0x301120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301120u, 0x300AECu, 0x300AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300AF4u;
label_300af4:
    // 0x300af4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x300af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_300af8:
    // 0x300af8: 0x8c421338  lw          $v0, 0x1338($v0)
    ctx->pc = 0x300af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
label_300afc:
    // 0x300afc: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x300afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_300b00:
    // 0x300b00: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_300b04:
    if (ctx->pc == 0x300B04u) {
        ctx->pc = 0x300B08u;
        goto label_300b08;
    }
    ctx->pc = 0x300B00u;
    {
        const bool branch_taken_0x300b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300b00) {
            ctx->pc = 0x300B24u;
            goto label_300b24;
        }
    }
    ctx->pc = 0x300B08u;
label_300b08:
    // 0x300b08: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x300b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_300b0c:
    // 0x300b0c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x300b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_300b10:
    // 0x300b10: 0x24520480  addiu       $s2, $v0, 0x480
    ctx->pc = 0x300b10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
label_300b14:
    // 0x300b14: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x300b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_300b18:
    // 0x300b18: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x300b18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_300b1c:
    // 0x300b1c: 0xc079140  jal         func_1E4500
label_300b20:
    if (ctx->pc == 0x300B20u) {
        ctx->pc = 0x300B24u;
        goto label_300b24;
    }
    ctx->pc = 0x300B1Cu;
    SET_GPR_U32(ctx, 31, 0x300B24u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x300B1Cu, 0x300B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300B24u;
label_300b24:
    // 0x300b24: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x300b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_300b28:
    // 0x300b28: 0xc0c2a54  jal         func_30A950
label_300b2c:
    if (ctx->pc == 0x300B2Cu) {
        ctx->pc = 0x300B30u;
        goto label_300b30;
    }
    ctx->pc = 0x300B28u;
    SET_GPR_U32(ctx, 31, 0x300B30u);
    ctx->pc = 0x30A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A950u, 0x300B28u, 0x300B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300B30u;
label_300b30:
    // 0x300b30: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x300b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_300b34:
    // 0x300b34: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x300b34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_300b38:
    // 0x300b38: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x300b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_300b3c:
    // 0x300b3c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_300b40:
    if (ctx->pc == 0x300B40u) {
        ctx->pc = 0x300B44u;
        goto label_300b44;
    }
    ctx->pc = 0x300B3Cu;
    {
        const bool branch_taken_0x300b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x300b3c) {
            ctx->pc = 0x300B50u;
            goto label_300b50;
        }
    }
    ctx->pc = 0x300B44u;
label_300b44:
    // 0x300b44: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x300b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_300b48:
    // 0x300b48: 0xc0c0400  jal         func_301000
label_300b4c:
    if (ctx->pc == 0x300B4Cu) {
        ctx->pc = 0x300B50u;
        goto label_300b50;
    }
    ctx->pc = 0x300B48u;
    SET_GPR_U32(ctx, 31, 0x300B50u);
    ctx->pc = 0x301000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301000u, 0x300B48u, 0x300B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300B50u;
label_300b50:
    // 0x300b50: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x300b50u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_300b54:
    // 0x300b54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x300b54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_300b58:
    // 0x300b58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x300b58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_300b5c:
    // 0x300b5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x300b5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_300b60:
    // 0x300b60: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x300b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_300b64:
    // 0x300b64: 0x3e00008  jr          $ra
label_300b68:
    if (ctx->pc == 0x300B68u) {
        ctx->pc = 0x300B6Cu;
        goto label_fallthrough_0x300b64;
    }
    ctx->pc = 0x300B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x300b64:
    ctx->pc = 0x300B6Cu;
}
