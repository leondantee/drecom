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

// Function: Em07_move
// Address: 0x2d5880 - 0x2d5bc4
void Em07_move_0x2d5880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em07_move_0x2d5880");
#endif

    switch (ctx->pc) {
        case 0x2d5880u: goto label_2d5880;
        case 0x2d5884u: goto label_2d5884;
        case 0x2d5888u: goto label_2d5888;
        case 0x2d588cu: goto label_2d588c;
        case 0x2d5890u: goto label_2d5890;
        case 0x2d5894u: goto label_2d5894;
        case 0x2d5898u: goto label_2d5898;
        case 0x2d589cu: goto label_2d589c;
        case 0x2d58a0u: goto label_2d58a0;
        case 0x2d58a4u: goto label_2d58a4;
        case 0x2d58a8u: goto label_2d58a8;
        case 0x2d58acu: goto label_2d58ac;
        case 0x2d58b0u: goto label_2d58b0;
        case 0x2d58b4u: goto label_2d58b4;
        case 0x2d58b8u: goto label_2d58b8;
        case 0x2d58bcu: goto label_2d58bc;
        case 0x2d58c0u: goto label_2d58c0;
        case 0x2d58c4u: goto label_2d58c4;
        case 0x2d58c8u: goto label_2d58c8;
        case 0x2d58ccu: goto label_2d58cc;
        case 0x2d58d0u: goto label_2d58d0;
        case 0x2d58d4u: goto label_2d58d4;
        case 0x2d58d8u: goto label_2d58d8;
        case 0x2d58dcu: goto label_2d58dc;
        case 0x2d58e0u: goto label_2d58e0;
        case 0x2d58e4u: goto label_2d58e4;
        case 0x2d58e8u: goto label_2d58e8;
        case 0x2d58ecu: goto label_2d58ec;
        case 0x2d58f0u: goto label_2d58f0;
        case 0x2d58f4u: goto label_2d58f4;
        case 0x2d58f8u: goto label_2d58f8;
        case 0x2d58fcu: goto label_2d58fc;
        case 0x2d5900u: goto label_2d5900;
        case 0x2d5904u: goto label_2d5904;
        case 0x2d5908u: goto label_2d5908;
        case 0x2d590cu: goto label_2d590c;
        case 0x2d5910u: goto label_2d5910;
        case 0x2d5914u: goto label_2d5914;
        case 0x2d5918u: goto label_2d5918;
        case 0x2d591cu: goto label_2d591c;
        case 0x2d5920u: goto label_2d5920;
        case 0x2d5924u: goto label_2d5924;
        case 0x2d5928u: goto label_2d5928;
        case 0x2d592cu: goto label_2d592c;
        case 0x2d5930u: goto label_2d5930;
        case 0x2d5934u: goto label_2d5934;
        case 0x2d5938u: goto label_2d5938;
        case 0x2d593cu: goto label_2d593c;
        case 0x2d5940u: goto label_2d5940;
        case 0x2d5944u: goto label_2d5944;
        case 0x2d5948u: goto label_2d5948;
        case 0x2d594cu: goto label_2d594c;
        case 0x2d5950u: goto label_2d5950;
        case 0x2d5954u: goto label_2d5954;
        case 0x2d5958u: goto label_2d5958;
        case 0x2d595cu: goto label_2d595c;
        case 0x2d5960u: goto label_2d5960;
        case 0x2d5964u: goto label_2d5964;
        case 0x2d5968u: goto label_2d5968;
        case 0x2d596cu: goto label_2d596c;
        case 0x2d5970u: goto label_2d5970;
        case 0x2d5974u: goto label_2d5974;
        case 0x2d5978u: goto label_2d5978;
        case 0x2d597cu: goto label_2d597c;
        case 0x2d5980u: goto label_2d5980;
        case 0x2d5984u: goto label_2d5984;
        case 0x2d5988u: goto label_2d5988;
        case 0x2d598cu: goto label_2d598c;
        case 0x2d5990u: goto label_2d5990;
        case 0x2d5994u: goto label_2d5994;
        case 0x2d5998u: goto label_2d5998;
        case 0x2d599cu: goto label_2d599c;
        case 0x2d59a0u: goto label_2d59a0;
        case 0x2d59a4u: goto label_2d59a4;
        case 0x2d59a8u: goto label_2d59a8;
        case 0x2d59acu: goto label_2d59ac;
        case 0x2d59b0u: goto label_2d59b0;
        case 0x2d59b4u: goto label_2d59b4;
        case 0x2d59b8u: goto label_2d59b8;
        case 0x2d59bcu: goto label_2d59bc;
        case 0x2d59c0u: goto label_2d59c0;
        case 0x2d59c4u: goto label_2d59c4;
        case 0x2d59c8u: goto label_2d59c8;
        case 0x2d59ccu: goto label_2d59cc;
        case 0x2d59d0u: goto label_2d59d0;
        case 0x2d59d4u: goto label_2d59d4;
        case 0x2d59d8u: goto label_2d59d8;
        case 0x2d59dcu: goto label_2d59dc;
        case 0x2d59e0u: goto label_2d59e0;
        case 0x2d59e4u: goto label_2d59e4;
        case 0x2d59e8u: goto label_2d59e8;
        case 0x2d59ecu: goto label_2d59ec;
        case 0x2d59f0u: goto label_2d59f0;
        case 0x2d59f4u: goto label_2d59f4;
        case 0x2d59f8u: goto label_2d59f8;
        case 0x2d59fcu: goto label_2d59fc;
        case 0x2d5a00u: goto label_2d5a00;
        case 0x2d5a04u: goto label_2d5a04;
        case 0x2d5a08u: goto label_2d5a08;
        case 0x2d5a0cu: goto label_2d5a0c;
        case 0x2d5a10u: goto label_2d5a10;
        case 0x2d5a14u: goto label_2d5a14;
        case 0x2d5a18u: goto label_2d5a18;
        case 0x2d5a1cu: goto label_2d5a1c;
        case 0x2d5a20u: goto label_2d5a20;
        case 0x2d5a24u: goto label_2d5a24;
        case 0x2d5a28u: goto label_2d5a28;
        case 0x2d5a2cu: goto label_2d5a2c;
        case 0x2d5a30u: goto label_2d5a30;
        case 0x2d5a34u: goto label_2d5a34;
        case 0x2d5a38u: goto label_2d5a38;
        case 0x2d5a3cu: goto label_2d5a3c;
        case 0x2d5a40u: goto label_2d5a40;
        case 0x2d5a44u: goto label_2d5a44;
        case 0x2d5a48u: goto label_2d5a48;
        case 0x2d5a4cu: goto label_2d5a4c;
        case 0x2d5a50u: goto label_2d5a50;
        case 0x2d5a54u: goto label_2d5a54;
        case 0x2d5a58u: goto label_2d5a58;
        case 0x2d5a5cu: goto label_2d5a5c;
        case 0x2d5a60u: goto label_2d5a60;
        case 0x2d5a64u: goto label_2d5a64;
        case 0x2d5a68u: goto label_2d5a68;
        case 0x2d5a6cu: goto label_2d5a6c;
        case 0x2d5a70u: goto label_2d5a70;
        case 0x2d5a74u: goto label_2d5a74;
        case 0x2d5a78u: goto label_2d5a78;
        case 0x2d5a7cu: goto label_2d5a7c;
        case 0x2d5a80u: goto label_2d5a80;
        case 0x2d5a84u: goto label_2d5a84;
        case 0x2d5a88u: goto label_2d5a88;
        case 0x2d5a8cu: goto label_2d5a8c;
        case 0x2d5a90u: goto label_2d5a90;
        case 0x2d5a94u: goto label_2d5a94;
        case 0x2d5a98u: goto label_2d5a98;
        case 0x2d5a9cu: goto label_2d5a9c;
        case 0x2d5aa0u: goto label_2d5aa0;
        case 0x2d5aa4u: goto label_2d5aa4;
        case 0x2d5aa8u: goto label_2d5aa8;
        case 0x2d5aacu: goto label_2d5aac;
        case 0x2d5ab0u: goto label_2d5ab0;
        case 0x2d5ab4u: goto label_2d5ab4;
        case 0x2d5ab8u: goto label_2d5ab8;
        case 0x2d5abcu: goto label_2d5abc;
        case 0x2d5ac0u: goto label_2d5ac0;
        case 0x2d5ac4u: goto label_2d5ac4;
        case 0x2d5ac8u: goto label_2d5ac8;
        case 0x2d5accu: goto label_2d5acc;
        case 0x2d5ad0u: goto label_2d5ad0;
        case 0x2d5ad4u: goto label_2d5ad4;
        case 0x2d5ad8u: goto label_2d5ad8;
        case 0x2d5adcu: goto label_2d5adc;
        case 0x2d5ae0u: goto label_2d5ae0;
        case 0x2d5ae4u: goto label_2d5ae4;
        case 0x2d5ae8u: goto label_2d5ae8;
        case 0x2d5aecu: goto label_2d5aec;
        case 0x2d5af0u: goto label_2d5af0;
        case 0x2d5af4u: goto label_2d5af4;
        case 0x2d5af8u: goto label_2d5af8;
        case 0x2d5afcu: goto label_2d5afc;
        case 0x2d5b00u: goto label_2d5b00;
        case 0x2d5b04u: goto label_2d5b04;
        case 0x2d5b08u: goto label_2d5b08;
        case 0x2d5b0cu: goto label_2d5b0c;
        case 0x2d5b10u: goto label_2d5b10;
        case 0x2d5b14u: goto label_2d5b14;
        case 0x2d5b18u: goto label_2d5b18;
        case 0x2d5b1cu: goto label_2d5b1c;
        case 0x2d5b20u: goto label_2d5b20;
        case 0x2d5b24u: goto label_2d5b24;
        case 0x2d5b28u: goto label_2d5b28;
        case 0x2d5b2cu: goto label_2d5b2c;
        case 0x2d5b30u: goto label_2d5b30;
        case 0x2d5b34u: goto label_2d5b34;
        case 0x2d5b38u: goto label_2d5b38;
        case 0x2d5b3cu: goto label_2d5b3c;
        case 0x2d5b40u: goto label_2d5b40;
        case 0x2d5b44u: goto label_2d5b44;
        case 0x2d5b48u: goto label_2d5b48;
        case 0x2d5b4cu: goto label_2d5b4c;
        case 0x2d5b50u: goto label_2d5b50;
        case 0x2d5b54u: goto label_2d5b54;
        case 0x2d5b58u: goto label_2d5b58;
        case 0x2d5b5cu: goto label_2d5b5c;
        case 0x2d5b60u: goto label_2d5b60;
        case 0x2d5b64u: goto label_2d5b64;
        case 0x2d5b68u: goto label_2d5b68;
        case 0x2d5b6cu: goto label_2d5b6c;
        case 0x2d5b70u: goto label_2d5b70;
        case 0x2d5b74u: goto label_2d5b74;
        case 0x2d5b78u: goto label_2d5b78;
        case 0x2d5b7cu: goto label_2d5b7c;
        case 0x2d5b80u: goto label_2d5b80;
        case 0x2d5b84u: goto label_2d5b84;
        case 0x2d5b88u: goto label_2d5b88;
        case 0x2d5b8cu: goto label_2d5b8c;
        case 0x2d5b90u: goto label_2d5b90;
        case 0x2d5b94u: goto label_2d5b94;
        case 0x2d5b98u: goto label_2d5b98;
        case 0x2d5b9cu: goto label_2d5b9c;
        case 0x2d5ba0u: goto label_2d5ba0;
        case 0x2d5ba4u: goto label_2d5ba4;
        case 0x2d5ba8u: goto label_2d5ba8;
        case 0x2d5bacu: goto label_2d5bac;
        case 0x2d5bb0u: goto label_2d5bb0;
        case 0x2d5bb4u: goto label_2d5bb4;
        case 0x2d5bb8u: goto label_2d5bb8;
        case 0x2d5bbcu: goto label_2d5bbc;
        case 0x2d5bc0u: goto label_2d5bc0;
        default: break;
    }

    ctx->pc = 0x2d5880u;

label_2d5880:
    // 0x2d5880: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d5880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2d5884:
    // 0x2d5884: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x2d5884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_2d5888:
    // 0x2d5888: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d5888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2d588c:
    // 0x2d588c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d588cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d5890:
    // 0x2d5890: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d5890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d5894:
    // 0x2d5894: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x2d5894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_2d5898:
    // 0x2d5898: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d5898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d589c:
    // 0x2d589c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d589cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d58a0:
    // 0x2d58a0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2d58a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2d58a4:
    // 0x2d58a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d58a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2d58a8:
    // 0x2d58a8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2d58a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2d58ac:
    // 0x2d58ac: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d58acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2d58b0:
    // 0x2d58b0: 0x244288c0  addiu       $v0, $v0, -0x7740
    ctx->pc = 0x2d58b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936768));
label_2d58b4:
    // 0x2d58b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d58b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d58b8:
    // 0x2d58b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d58b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d58bc:
    // 0x2d58bc: 0x40f809  jalr        $v0
label_2d58c0:
    if (ctx->pc == 0x2D58C0u) {
        ctx->pc = 0x2D58C4u;
        goto label_2d58c4;
    }
    ctx->pc = 0x2D58BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D58C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D58BCu, 0x2D58C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D58C4u;
label_2d58c4:
    // 0x2d58c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d58c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d58c8:
    // 0x2d58c8: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d58c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
label_2d58cc:
    // 0x2d58cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2d58ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d58d0:
    // 0x2d58d0: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x2d58d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_2d58d4:
    // 0x2d58d4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2d58d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2d58d8:
    // 0x2d58d8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2d58d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2d58dc:
    // 0x2d58dc: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_2d58e0:
    if (ctx->pc == 0x2D58E0u) {
        ctx->pc = 0x2D58E4u;
        goto label_2d58e4;
    }
    ctx->pc = 0x2D58DCu;
    {
        const bool branch_taken_0x2d58dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d58dc) {
            ctx->pc = 0x2D58F8u;
            goto label_2d58f8;
        }
    }
    ctx->pc = 0x2D58E4u;
label_2d58e4:
    // 0x2d58e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d58e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d58e8:
    // 0x2d58e8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2d58e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2d58ec:
    // 0x2d58ec: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2d58ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_2d58f0:
    // 0x2d58f0: 0x106000ad  beqz        $v1, . + 4 + (0xAD << 2)
label_2d58f4:
    if (ctx->pc == 0x2D58F4u) {
        ctx->pc = 0x2D58F8u;
        goto label_2d58f8;
    }
    ctx->pc = 0x2D58F0u;
    {
        const bool branch_taken_0x2d58f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d58f0) {
            ctx->pc = 0x2D5BA8u;
            goto label_2d5ba8;
        }
    }
    ctx->pc = 0x2D58F8u;
label_2d58f8:
    // 0x2d58f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d58f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d58fc:
    // 0x2d58fc: 0x8c700058  lw          $s0, 0x58($v1)
    ctx->pc = 0x2d58fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2d5900:
    // 0x2d5900: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d5900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d5904:
    // 0x2d5904: 0x8c631348  lw          $v1, 0x1348($v1)
    ctx->pc = 0x2d5904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4936)));
label_2d5908:
    // 0x2d5908: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x2d5908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_2d590c:
    // 0x2d590c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_2d5910:
    if (ctx->pc == 0x2D5910u) {
        ctx->pc = 0x2D5914u;
        goto label_2d5914;
    }
    ctx->pc = 0x2D590Cu;
    {
        const bool branch_taken_0x2d590c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d590c) {
            ctx->pc = 0x2D5940u;
            goto label_2d5940;
        }
    }
    ctx->pc = 0x2D5914u;
label_2d5914:
    // 0x2d5914: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x2d5914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_2d5918:
    // 0x2d5918: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x2d5918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_2d591c:
    // 0x2d591c: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x2d591cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
label_2d5920:
    // 0x2d5920: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2d5920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_2d5924:
    // 0x2d5924: 0x2463ffe8  addiu       $v1, $v1, -0x18
    ctx->pc = 0x2d5924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
label_2d5928:
    // 0x2d5928: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2d5928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
label_2d592c:
    // 0x2d592c: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x2d592cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_2d5930:
    // 0x2d5930: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x2d5930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_2d5934:
    // 0x2d5934: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x2d5934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
label_2d5938:
    // 0x2d5938: 0x1000000a  b           . + 4 + (0xA << 2)
label_2d593c:
    if (ctx->pc == 0x2D593Cu) {
        ctx->pc = 0x2D5940u;
        goto label_2d5940;
    }
    ctx->pc = 0x2D5938u;
    {
        const bool branch_taken_0x2d5938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5938) {
            ctx->pc = 0x2D5964u;
            goto label_2d5964;
        }
    }
    ctx->pc = 0x2D5940u;
label_2d5940:
    // 0x2d5940: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x2d5940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_2d5944:
    // 0x2d5944: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2d5944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_2d5948:
    // 0x2d5948: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x2d5948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
label_2d594c:
    // 0x2d594c: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2d594cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_2d5950:
    // 0x2d5950: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x2d5950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_2d5954:
    // 0x2d5954: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2d5954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
label_2d5958:
    // 0x2d5958: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x2d5958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_2d595c:
    // 0x2d595c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2d595cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_2d5960:
    // 0x2d5960: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x2d5960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
label_2d5964:
    // 0x2d5964: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d5964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d5968:
    // 0x2d5968: 0x8c831348  lw          $v1, 0x1348($a0)
    ctx->pc = 0x2d5968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4936)));
label_2d596c:
    // 0x2d596c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d596cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2d5970:
    // 0x2d5970: 0xac831348  sw          $v1, 0x1348($a0)
    ctx->pc = 0x2d5970u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4936), GPR_U32(ctx, 3));
label_2d5974:
    // 0x2d5974: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d5974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d5978:
    // 0x2d5978: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d5978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
label_2d597c:
    // 0x2d597c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2d597cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d5980:
    // 0x2d5980: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x2d5980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
label_2d5984:
    // 0x2d5984: 0x3063007a  andi        $v1, $v1, 0x7A
    ctx->pc = 0x2d5984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)122);
label_2d5988:
    // 0x2d5988: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2d598c:
    if (ctx->pc == 0x2D598Cu) {
        ctx->pc = 0x2D5990u;
        goto label_2d5990;
    }
    ctx->pc = 0x2D5988u;
    {
        const bool branch_taken_0x2d5988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5988) {
            ctx->pc = 0x2D59A8u;
            goto label_2d59a8;
        }
    }
    ctx->pc = 0x2D5990u;
label_2d5990:
    // 0x2d5990: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d5990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d5994:
    // 0x2d5994: 0x8c831348  lw          $v1, 0x1348($a0)
    ctx->pc = 0x2d5994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4936)));
label_2d5998:
    // 0x2d5998: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x2d5998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_2d599c:
    // 0x2d599c: 0xac831348  sw          $v1, 0x1348($a0)
    ctx->pc = 0x2d599cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4936), GPR_U32(ctx, 3));
label_2d59a0:
    // 0x2d59a0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2d59a4:
    if (ctx->pc == 0x2D59A4u) {
        ctx->pc = 0x2D59A8u;
        goto label_2d59a8;
    }
    ctx->pc = 0x2D59A0u;
    {
        const bool branch_taken_0x2d59a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d59a0) {
            ctx->pc = 0x2D59B8u;
            goto label_2d59b8;
        }
    }
    ctx->pc = 0x2D59A8u;
label_2d59a8:
    // 0x2d59a8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d59a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d59ac:
    // 0x2d59ac: 0x8c831348  lw          $v1, 0x1348($a0)
    ctx->pc = 0x2d59acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4936)));
label_2d59b0:
    // 0x2d59b0: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x2d59b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_2d59b4:
    // 0x2d59b4: 0xac831348  sw          $v1, 0x1348($a0)
    ctx->pc = 0x2d59b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4936), GPR_U32(ctx, 3));
label_2d59b8:
    // 0x2d59b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d59b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d59bc:
    // 0x2d59bc: 0x8c631340  lw          $v1, 0x1340($v1)
    ctx->pc = 0x2d59bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4928)));
label_2d59c0:
    // 0x2d59c0: 0x30710003  andi        $s1, $v1, 0x3
    ctx->pc = 0x2d59c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_2d59c4:
    // 0x2d59c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d59c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d59c8:
    // 0x2d59c8: 0x8c631340  lw          $v1, 0x1340($v1)
    ctx->pc = 0x2d59c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4928)));
label_2d59cc:
    // 0x2d59cc: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2d59ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_2d59d0:
    // 0x2d59d0: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_2d59d4:
    if (ctx->pc == 0x2D59D4u) {
        ctx->pc = 0x2D59D8u;
        goto label_2d59d8;
    }
    ctx->pc = 0x2D59D0u;
    {
        const bool branch_taken_0x2d59d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d59d0) {
            ctx->pc = 0x2D5A1Cu;
            goto label_2d5a1c;
        }
    }
    ctx->pc = 0x2D59D8u;
label_2d59d8:
    // 0x2d59d8: 0x16200033  bnez        $s1, . + 4 + (0x33 << 2)
label_2d59dc:
    if (ctx->pc == 0x2D59DCu) {
        ctx->pc = 0x2D59E0u;
        goto label_2d59e0;
    }
    ctx->pc = 0x2D59D8u;
    {
        const bool branch_taken_0x2d59d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d59d8) {
            ctx->pc = 0x2D5AA8u;
            goto label_2d5aa8;
        }
    }
    ctx->pc = 0x2D59E0u;
label_2d59e0:
    // 0x2d59e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d59e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d59e4:
    // 0x2d59e4: 0x2464133c  addiu       $a0, $v1, 0x133C
    ctx->pc = 0x2d59e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4924));
label_2d59e8:
    // 0x2d59e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d59e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d59ec:
    // 0x2d59ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d59ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2d59f0:
    // 0x2d59f0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2d59f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2d59f4:
    // 0x2d59f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d59f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d59f8:
    // 0x2d59f8: 0x2463133c  addiu       $v1, $v1, 0x133C
    ctx->pc = 0x2d59f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4924));
label_2d59fc:
    // 0x2d59fc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2d59fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d5a00:
    // 0x2d5a00: 0x2861fffe  slti        $at, $v1, -0x2
    ctx->pc = 0x2d5a00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967294) ? 1 : 0);
label_2d5a04:
    // 0x2d5a04: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
label_2d5a08:
    if (ctx->pc == 0x2D5A08u) {
        ctx->pc = 0x2D5A0Cu;
        goto label_2d5a0c;
    }
    ctx->pc = 0x2D5A04u;
    {
        const bool branch_taken_0x2d5a04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5a04) {
            ctx->pc = 0x2D5AA8u;
            goto label_2d5aa8;
        }
    }
    ctx->pc = 0x2D5A0Cu;
label_2d5a0c:
    // 0x2d5a0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d5a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d5a10:
    // 0x2d5a10: 0xac601340  sw          $zero, 0x1340($v1)
    ctx->pc = 0x2d5a10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4928), GPR_U32(ctx, 0));
label_2d5a14:
    // 0x2d5a14: 0x10000024  b           . + 4 + (0x24 << 2)
label_2d5a18:
    if (ctx->pc == 0x2D5A18u) {
        ctx->pc = 0x2D5A1Cu;
        goto label_2d5a1c;
    }
    ctx->pc = 0x2D5A14u;
    {
        const bool branch_taken_0x2d5a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5a14) {
            ctx->pc = 0x2D5AA8u;
            goto label_2d5aa8;
        }
    }
    ctx->pc = 0x2D5A1Cu;
label_2d5a1c:
    // 0x2d5a1c: 0x16200022  bnez        $s1, . + 4 + (0x22 << 2)
label_2d5a20:
    if (ctx->pc == 0x2D5A20u) {
        ctx->pc = 0x2D5A24u;
        goto label_2d5a24;
    }
    ctx->pc = 0x2D5A1Cu;
    {
        const bool branch_taken_0x2d5a1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5a1c) {
            ctx->pc = 0x2D5AA8u;
            goto label_2d5aa8;
        }
    }
    ctx->pc = 0x2D5A24u;
label_2d5a24:
    // 0x2d5a24: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d5a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2d5a28:
    // 0x2d5a28: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2d5a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_2d5a2c:
    // 0x2d5a2c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2d5a2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2d5a30:
    // 0x2d5a30: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d5a30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2d5a34:
    // 0x2d5a34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d5a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2d5a38:
    // 0x2d5a38: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d5a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2d5a3c:
    // 0x2d5a3c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2d5a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_2d5a40:
    // 0x2d5a40: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d5a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2d5a44:
    // 0x2d5a44: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2d5a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_2d5a48:
    // 0x2d5a48: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2d5a48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2d5a4c:
    // 0x2d5a4c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d5a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2d5a50:
    // 0x2d5a50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d5a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2d5a54:
    // 0x2d5a54: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2d5a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
label_2d5a58:
    // 0x2d5a58: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2d5a58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_2d5a5c:
    // 0x2d5a5c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2d5a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2d5a60:
    // 0x2d5a60: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d5a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2d5a64:
    // 0x2d5a64: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2d5a64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 3));
label_2d5a68:
    // 0x2d5a68: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d5a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2d5a6c:
    // 0x2d5a6c: 0x30650001  andi        $a1, $v1, 0x1
    ctx->pc = 0x2d5a6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2d5a70:
    // 0x2d5a70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d5a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d5a74:
    // 0x2d5a74: 0x2464133c  addiu       $a0, $v1, 0x133C
    ctx->pc = 0x2d5a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4924));
label_2d5a78:
    // 0x2d5a78: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d5a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d5a7c:
    // 0x2d5a7c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d5a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2d5a80:
    // 0x2d5a80: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2d5a80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2d5a84:
    // 0x2d5a84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d5a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d5a88:
    // 0x2d5a88: 0x2463133c  addiu       $v1, $v1, 0x133C
    ctx->pc = 0x2d5a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4924));
label_2d5a8c:
    // 0x2d5a8c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2d5a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d5a90:
    // 0x2d5a90: 0x2861000b  slti        $at, $v1, 0xB
    ctx->pc = 0x2d5a90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
label_2d5a94:
    // 0x2d5a94: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_2d5a98:
    if (ctx->pc == 0x2D5A98u) {
        ctx->pc = 0x2D5A9Cu;
        goto label_2d5a9c;
    }
    ctx->pc = 0x2D5A94u;
    {
        const bool branch_taken_0x2d5a94 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5a94) {
            ctx->pc = 0x2D5AA8u;
            goto label_2d5aa8;
        }
    }
    ctx->pc = 0x2D5A9Cu;
label_2d5a9c:
    // 0x2d5a9c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2d5a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2d5aa0:
    // 0x2d5aa0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d5aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d5aa4:
    // 0x2d5aa4: 0xac641340  sw          $a0, 0x1340($v1)
    ctx->pc = 0x2d5aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4928), GPR_U32(ctx, 4));
label_2d5aa8:
    // 0x2d5aa8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d5aa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2d5aac:
    // 0x2d5aac: 0x32310003  andi        $s1, $s1, 0x3
    ctx->pc = 0x2d5aacu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_2d5ab0:
    // 0x2d5ab0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d5ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d5ab4:
    // 0x2d5ab4: 0x8c831340  lw          $v1, 0x1340($a0)
    ctx->pc = 0x2d5ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4928)));
label_2d5ab8:
    // 0x2d5ab8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2d5ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_2d5abc:
    // 0x2d5abc: 0xac831340  sw          $v1, 0x1340($a0)
    ctx->pc = 0x2d5abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4928), GPR_U32(ctx, 3));
label_2d5ac0:
    // 0x2d5ac0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d5ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d5ac4:
    // 0x2d5ac4: 0x8c831340  lw          $v1, 0x1340($a0)
    ctx->pc = 0x2d5ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4928)));
label_2d5ac8:
    // 0x2d5ac8: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x2d5ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
label_2d5acc:
    // 0x2d5acc: 0xac831340  sw          $v1, 0x1340($a0)
    ctx->pc = 0x2d5accu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4928), GPR_U32(ctx, 3));
label_2d5ad0:
    // 0x2d5ad0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d5ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d5ad4:
    // 0x2d5ad4: 0x2463133c  addiu       $v1, $v1, 0x133C
    ctx->pc = 0x2d5ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4924));
label_2d5ad8:
    // 0x2d5ad8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d5ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d5adc:
    // 0x2d5adc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d5adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d5ae0:
    // 0x2d5ae0: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x2d5ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
label_2d5ae4:
    // 0x2d5ae4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d5ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2d5ae8:
    // 0x2d5ae8: 0xac831338  sw          $v1, 0x1338($a0)
    ctx->pc = 0x2d5ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 3));
label_2d5aec:
    // 0x2d5aec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d5aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d5af0:
    // 0x2d5af0: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x2d5af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
label_2d5af4:
    // 0x2d5af4: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x2d5af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
label_2d5af8:
    // 0x2d5af8: 0xac831338  sw          $v1, 0x1338($a0)
    ctx->pc = 0x2d5af8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 3));
label_2d5afc:
    // 0x2d5afc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d5afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d5b00:
    // 0x2d5b00: 0x8c700058  lw          $s0, 0x58($v1)
    ctx->pc = 0x2d5b00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2d5b04:
    // 0x2d5b04: 0x8e120034  lw          $s2, 0x34($s0)
    ctx->pc = 0x2d5b04u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2d5b08:
    // 0x2d5b08: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2d5b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2d5b0c:
    // 0x2d5b0c: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2d5b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2d5b10:
    // 0x2d5b10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d5b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2d5b14:
    // 0x2d5b14: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2d5b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_2d5b18:
    // 0x2d5b18: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2d5b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2d5b1c:
    // 0x2d5b1c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2d5b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2d5b20:
    // 0x2d5b20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d5b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d5b24:
    // 0x2d5b24: 0x8c641338  lw          $a0, 0x1338($v1)
    ctx->pc = 0x2d5b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
label_2d5b28:
    // 0x2d5b28: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2d5b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2d5b2c:
    // 0x2d5b2c: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2d5b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2d5b30:
    // 0x2d5b30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d5b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2d5b34:
    // 0x2d5b34: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2d5b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_2d5b38:
    // 0x2d5b38: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2d5b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2d5b3c:
    // 0x2d5b3c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2d5b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_2d5b40:
    // 0x2d5b40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d5b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d5b44:
    // 0x2d5b44: 0x8c631348  lw          $v1, 0x1348($v1)
    ctx->pc = 0x2d5b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4936)));
label_2d5b48:
    // 0x2d5b48: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
label_2d5b4c:
    if (ctx->pc == 0x2D5B4Cu) {
        ctx->pc = 0x2D5B50u;
        goto label_2d5b50;
    }
    ctx->pc = 0x2D5B48u;
    {
        const bool branch_taken_0x2d5b48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5b48) {
            ctx->pc = 0x2D5BA8u;
            goto label_2d5ba8;
        }
    }
    ctx->pc = 0x2D5B50u;
label_2d5b50:
    // 0x2d5b50: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d5b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2d5b54:
    // 0x2d5b54: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2d5b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_2d5b58:
    // 0x2d5b58: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d5b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2d5b5c:
    // 0x2d5b5c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d5b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2d5b60:
    // 0x2d5b60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d5b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d5b64:
    // 0x2d5b64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d5b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2d5b68:
    // 0x2d5b68: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2d5b68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_2d5b6c:
    // 0x2d5b6c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d5b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2d5b70:
    // 0x2d5b70: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2d5b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_2d5b74:
    // 0x2d5b74: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d5b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2d5b78:
    // 0x2d5b78: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d5b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2d5b7c:
    // 0x2d5b7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d5b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d5b80:
    // 0x2d5b80: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2d5b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
label_2d5b84:
    // 0x2d5b84: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2d5b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_2d5b88:
    // 0x2d5b88: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2d5b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2d5b8c:
    // 0x2d5b8c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d5b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2d5b90:
    // 0x2d5b90: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2d5b90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 2));
label_2d5b94:
    // 0x2d5b94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d5b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2d5b98:
    // 0x2d5b98: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x2d5b98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2d5b9c:
    // 0x2d5b9c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d5b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2d5ba0:
    // 0x2d5ba0: 0xc0b55ec  jal         func_2D57B0
label_2d5ba4:
    if (ctx->pc == 0x2D5BA4u) {
        ctx->pc = 0x2D5BA8u;
        goto label_2d5ba8;
    }
    ctx->pc = 0x2D5BA0u;
    SET_GPR_U32(ctx, 31, 0x2D5BA8u);
    ctx->pc = 0x2D57B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D57B0u, 0x2D5BA0u, 0x2D5BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5BA8u;
label_2d5ba8:
    // 0x2d5ba8: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x2d5ba8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d5bac:
    // 0x2d5bac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d5bacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d5bb0:
    // 0x2d5bb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d5bb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d5bb4:
    // 0x2d5bb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d5bb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d5bb8:
    // 0x2d5bb8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2d5bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2d5bbc:
    // 0x2d5bbc: 0x3e00008  jr          $ra
label_2d5bc0:
    if (ctx->pc == 0x2D5BC0u) {
        ctx->pc = 0x2D5BC4u;
        goto label_fallthrough_0x2d5bbc;
    }
    ctx->pc = 0x2D5BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d5bbc:
    ctx->pc = 0x2D5BC4u;
}
