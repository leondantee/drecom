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

// Function: Em04_move
// Address: 0x33dce0 - 0x33df98
void Em04_move_0x33dce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em04_move_0x33dce0");
#endif

    switch (ctx->pc) {
        case 0x33dce0u: goto label_33dce0;
        case 0x33dce4u: goto label_33dce4;
        case 0x33dce8u: goto label_33dce8;
        case 0x33dcecu: goto label_33dcec;
        case 0x33dcf0u: goto label_33dcf0;
        case 0x33dcf4u: goto label_33dcf4;
        case 0x33dcf8u: goto label_33dcf8;
        case 0x33dcfcu: goto label_33dcfc;
        case 0x33dd00u: goto label_33dd00;
        case 0x33dd04u: goto label_33dd04;
        case 0x33dd08u: goto label_33dd08;
        case 0x33dd0cu: goto label_33dd0c;
        case 0x33dd10u: goto label_33dd10;
        case 0x33dd14u: goto label_33dd14;
        case 0x33dd18u: goto label_33dd18;
        case 0x33dd1cu: goto label_33dd1c;
        case 0x33dd20u: goto label_33dd20;
        case 0x33dd24u: goto label_33dd24;
        case 0x33dd28u: goto label_33dd28;
        case 0x33dd2cu: goto label_33dd2c;
        case 0x33dd30u: goto label_33dd30;
        case 0x33dd34u: goto label_33dd34;
        case 0x33dd38u: goto label_33dd38;
        case 0x33dd3cu: goto label_33dd3c;
        case 0x33dd40u: goto label_33dd40;
        case 0x33dd44u: goto label_33dd44;
        case 0x33dd48u: goto label_33dd48;
        case 0x33dd4cu: goto label_33dd4c;
        case 0x33dd50u: goto label_33dd50;
        case 0x33dd54u: goto label_33dd54;
        case 0x33dd58u: goto label_33dd58;
        case 0x33dd5cu: goto label_33dd5c;
        case 0x33dd60u: goto label_33dd60;
        case 0x33dd64u: goto label_33dd64;
        case 0x33dd68u: goto label_33dd68;
        case 0x33dd6cu: goto label_33dd6c;
        case 0x33dd70u: goto label_33dd70;
        case 0x33dd74u: goto label_33dd74;
        case 0x33dd78u: goto label_33dd78;
        case 0x33dd7cu: goto label_33dd7c;
        case 0x33dd80u: goto label_33dd80;
        case 0x33dd84u: goto label_33dd84;
        case 0x33dd88u: goto label_33dd88;
        case 0x33dd8cu: goto label_33dd8c;
        case 0x33dd90u: goto label_33dd90;
        case 0x33dd94u: goto label_33dd94;
        case 0x33dd98u: goto label_33dd98;
        case 0x33dd9cu: goto label_33dd9c;
        case 0x33dda0u: goto label_33dda0;
        case 0x33dda4u: goto label_33dda4;
        case 0x33dda8u: goto label_33dda8;
        case 0x33ddacu: goto label_33ddac;
        case 0x33ddb0u: goto label_33ddb0;
        case 0x33ddb4u: goto label_33ddb4;
        case 0x33ddb8u: goto label_33ddb8;
        case 0x33ddbcu: goto label_33ddbc;
        case 0x33ddc0u: goto label_33ddc0;
        case 0x33ddc4u: goto label_33ddc4;
        case 0x33ddc8u: goto label_33ddc8;
        case 0x33ddccu: goto label_33ddcc;
        case 0x33ddd0u: goto label_33ddd0;
        case 0x33ddd4u: goto label_33ddd4;
        case 0x33ddd8u: goto label_33ddd8;
        case 0x33dddcu: goto label_33dddc;
        case 0x33dde0u: goto label_33dde0;
        case 0x33dde4u: goto label_33dde4;
        case 0x33dde8u: goto label_33dde8;
        case 0x33ddecu: goto label_33ddec;
        case 0x33ddf0u: goto label_33ddf0;
        case 0x33ddf4u: goto label_33ddf4;
        case 0x33ddf8u: goto label_33ddf8;
        case 0x33ddfcu: goto label_33ddfc;
        case 0x33de00u: goto label_33de00;
        case 0x33de04u: goto label_33de04;
        case 0x33de08u: goto label_33de08;
        case 0x33de0cu: goto label_33de0c;
        case 0x33de10u: goto label_33de10;
        case 0x33de14u: goto label_33de14;
        case 0x33de18u: goto label_33de18;
        case 0x33de1cu: goto label_33de1c;
        case 0x33de20u: goto label_33de20;
        case 0x33de24u: goto label_33de24;
        case 0x33de28u: goto label_33de28;
        case 0x33de2cu: goto label_33de2c;
        case 0x33de30u: goto label_33de30;
        case 0x33de34u: goto label_33de34;
        case 0x33de38u: goto label_33de38;
        case 0x33de3cu: goto label_33de3c;
        case 0x33de40u: goto label_33de40;
        case 0x33de44u: goto label_33de44;
        case 0x33de48u: goto label_33de48;
        case 0x33de4cu: goto label_33de4c;
        case 0x33de50u: goto label_33de50;
        case 0x33de54u: goto label_33de54;
        case 0x33de58u: goto label_33de58;
        case 0x33de5cu: goto label_33de5c;
        case 0x33de60u: goto label_33de60;
        case 0x33de64u: goto label_33de64;
        case 0x33de68u: goto label_33de68;
        case 0x33de6cu: goto label_33de6c;
        case 0x33de70u: goto label_33de70;
        case 0x33de74u: goto label_33de74;
        case 0x33de78u: goto label_33de78;
        case 0x33de7cu: goto label_33de7c;
        case 0x33de80u: goto label_33de80;
        case 0x33de84u: goto label_33de84;
        case 0x33de88u: goto label_33de88;
        case 0x33de8cu: goto label_33de8c;
        case 0x33de90u: goto label_33de90;
        case 0x33de94u: goto label_33de94;
        case 0x33de98u: goto label_33de98;
        case 0x33de9cu: goto label_33de9c;
        case 0x33dea0u: goto label_33dea0;
        case 0x33dea4u: goto label_33dea4;
        case 0x33dea8u: goto label_33dea8;
        case 0x33deacu: goto label_33deac;
        case 0x33deb0u: goto label_33deb0;
        case 0x33deb4u: goto label_33deb4;
        case 0x33deb8u: goto label_33deb8;
        case 0x33debcu: goto label_33debc;
        case 0x33dec0u: goto label_33dec0;
        case 0x33dec4u: goto label_33dec4;
        case 0x33dec8u: goto label_33dec8;
        case 0x33deccu: goto label_33decc;
        case 0x33ded0u: goto label_33ded0;
        case 0x33ded4u: goto label_33ded4;
        case 0x33ded8u: goto label_33ded8;
        case 0x33dedcu: goto label_33dedc;
        case 0x33dee0u: goto label_33dee0;
        case 0x33dee4u: goto label_33dee4;
        case 0x33dee8u: goto label_33dee8;
        case 0x33deecu: goto label_33deec;
        case 0x33def0u: goto label_33def0;
        case 0x33def4u: goto label_33def4;
        case 0x33def8u: goto label_33def8;
        case 0x33defcu: goto label_33defc;
        case 0x33df00u: goto label_33df00;
        case 0x33df04u: goto label_33df04;
        case 0x33df08u: goto label_33df08;
        case 0x33df0cu: goto label_33df0c;
        case 0x33df10u: goto label_33df10;
        case 0x33df14u: goto label_33df14;
        case 0x33df18u: goto label_33df18;
        case 0x33df1cu: goto label_33df1c;
        case 0x33df20u: goto label_33df20;
        case 0x33df24u: goto label_33df24;
        case 0x33df28u: goto label_33df28;
        case 0x33df2cu: goto label_33df2c;
        case 0x33df30u: goto label_33df30;
        case 0x33df34u: goto label_33df34;
        case 0x33df38u: goto label_33df38;
        case 0x33df3cu: goto label_33df3c;
        case 0x33df40u: goto label_33df40;
        case 0x33df44u: goto label_33df44;
        case 0x33df48u: goto label_33df48;
        case 0x33df4cu: goto label_33df4c;
        case 0x33df50u: goto label_33df50;
        case 0x33df54u: goto label_33df54;
        case 0x33df58u: goto label_33df58;
        case 0x33df5cu: goto label_33df5c;
        case 0x33df60u: goto label_33df60;
        case 0x33df64u: goto label_33df64;
        case 0x33df68u: goto label_33df68;
        case 0x33df6cu: goto label_33df6c;
        case 0x33df70u: goto label_33df70;
        case 0x33df74u: goto label_33df74;
        case 0x33df78u: goto label_33df78;
        case 0x33df7cu: goto label_33df7c;
        case 0x33df80u: goto label_33df80;
        case 0x33df84u: goto label_33df84;
        case 0x33df88u: goto label_33df88;
        case 0x33df8cu: goto label_33df8c;
        case 0x33df90u: goto label_33df90;
        case 0x33df94u: goto label_33df94;
        default: break;
    }

    ctx->pc = 0x33dce0u;

label_33dce0:
    // 0x33dce0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x33dce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_33dce4:
    // 0x33dce4: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x33dce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
label_33dce8:
    // 0x33dce8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x33dce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_33dcec:
    // 0x33dcec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x33dcecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_33dcf0:
    // 0x33dcf0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x33dcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_33dcf4:
    // 0x33dcf4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33dcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_33dcf8:
    // 0x33dcf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33dcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_33dcfc:
    // 0x33dcfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33dcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33dd00:
    // 0x33dd00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33dd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33dd04:
    // 0x33dd04: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x33dd04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
label_33dd08:
    // 0x33dd08: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x33dd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_33dd0c:
    // 0x33dd0c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x33dd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_33dd10:
    // 0x33dd10: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x33dd10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_33dd14:
    // 0x33dd14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33dd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_33dd18:
    // 0x33dd18: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x33dd18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_33dd1c:
    // 0x33dd1c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33dd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_33dd20:
    // 0x33dd20: 0x2442a160  addiu       $v0, $v0, -0x5EA0
    ctx->pc = 0x33dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943072));
label_33dd24:
    // 0x33dd24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33dd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33dd28:
    // 0x33dd28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33dd2c:
    // 0x33dd2c: 0x40f809  jalr        $v0
label_33dd30:
    if (ctx->pc == 0x33DD30u) {
        ctx->pc = 0x33DD34u;
        goto label_33dd34;
    }
    ctx->pc = 0x33DD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33DD34u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DD2Cu, 0x33DD34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33DD34u;
label_33dd34:
    // 0x33dd34: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x33dd34u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33dd38:
    // 0x33dd38: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x33dd38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33dd3c:
    // 0x33dd3c: 0x10000088  b           . + 4 + (0x88 << 2)
label_33dd40:
    if (ctx->pc == 0x33DD40u) {
        ctx->pc = 0x33DD44u;
        goto label_33dd44;
    }
    ctx->pc = 0x33DD3Cu;
    {
        const bool branch_taken_0x33dd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33dd3c) {
            ctx->pc = 0x33DF60u;
            goto label_33df60;
        }
    }
    ctx->pc = 0x33DD44u;
label_33dd44:
    // 0x33dd44: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x33dd44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_33dd48:
    // 0x33dd48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33dd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33dd4c:
    // 0x33dd4c: 0x2a32004  sllv        $a0, $v1, $s5
    ctx->pc = 0x33dd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 21) & 0x1F));
label_33dd50:
    // 0x33dd50: 0x8ca31348  lw          $v1, 0x1348($a1)
    ctx->pc = 0x33dd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4936)));
label_33dd54:
    // 0x33dd54: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x33dd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_33dd58:
    // 0x33dd58: 0x14600075  bnez        $v1, . + 4 + (0x75 << 2)
label_33dd5c:
    if (ctx->pc == 0x33DD5Cu) {
        ctx->pc = 0x33DD60u;
        goto label_33dd60;
    }
    ctx->pc = 0x33DD58u;
    {
        const bool branch_taken_0x33dd58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33dd58) {
            ctx->pc = 0x33DF30u;
            goto label_33df30;
        }
    }
    ctx->pc = 0x33DD60u;
label_33dd60:
    // 0x33dd60: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x33dd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_33dd64:
    // 0x33dd64: 0x2465134c  addiu       $a1, $v1, 0x134C
    ctx->pc = 0x33dd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
label_33dd68:
    // 0x33dd68: 0x142042  srl         $a0, $s4, 1
    ctx->pc = 0x33dd68u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
label_33dd6c:
    // 0x33dd6c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x33dd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_33dd70:
    // 0x33dd70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33dd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_33dd74:
    // 0x33dd74: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x33dd74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_33dd78:
    // 0x33dd78: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x33dd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_33dd7c:
    // 0x33dd7c: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x33dd7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_33dd80:
    // 0x33dd80: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x33dd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_33dd84:
    // 0x33dd84: 0x142100  sll         $a0, $s4, 4
    ctx->pc = 0x33dd84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_33dd88:
    // 0x33dd88: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x33dd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_33dd8c:
    // 0x33dd8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33dd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_33dd90:
    // 0x33dd90: 0x24760008  addiu       $s6, $v1, 0x8
    ctx->pc = 0x33dd90u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_33dd94:
    // 0x33dd94: 0x92c30000  lbu         $v1, 0x0($s6)
    ctx->pc = 0x33dd94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_33dd98:
    // 0x33dd98: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x33dd98u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_33dd9c:
    // 0x33dd9c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x33dd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_33dda0:
    // 0x33dda0: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x33dda0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_33dda4:
    // 0x33dda4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x33dda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_33dda8:
    // 0x33dda8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x33dda8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_33ddac:
    // 0x33ddac: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x33ddacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
label_33ddb0:
    // 0x33ddb0: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x33ddb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_33ddb4:
    // 0x33ddb4: 0x8e500034  lw          $s0, 0x34($s2)
    ctx->pc = 0x33ddb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_33ddb8:
    // 0x33ddb8: 0x0  nop
    ctx->pc = 0x33ddb8u;
    // NOP
label_33ddbc:
    // 0x33ddbc: 0x0  nop
    ctx->pc = 0x33ddbcu;
    // NOP
label_33ddc0:
    // 0x33ddc0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x33ddc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_33ddc4:
    // 0x33ddc4: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x33ddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_33ddc8:
    // 0x33ddc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33ddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33ddcc:
    // 0x33ddcc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x33ddccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_33ddd0:
    // 0x33ddd0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x33ddd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_33ddd4:
    // 0x33ddd4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x33ddd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_33ddd8:
    // 0x33ddd8: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x33ddd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_33dddc:
    // 0x33dddc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x33dddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_33dde0:
    // 0x33dde0: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x33dde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_33dde4:
    // 0x33dde4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33dde4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33dde8:
    // 0x33dde8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x33dde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_33ddec:
    // 0x33ddec: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x33ddecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_33ddf0:
    // 0x33ddf0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x33ddf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_33ddf4:
    // 0x33ddf4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x33ddf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_33ddf8:
    // 0x33ddf8: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x33ddf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_33ddfc:
    // 0x33ddfc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33ddfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33de00:
    // 0x33de00: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x33de00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_33de04:
    // 0x33de04: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x33de04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_33de08:
    // 0x33de08: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33de08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33de0c:
    // 0x33de0c: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x33de0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
label_33de10:
    // 0x33de10: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x33de10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_33de14:
    // 0x33de14: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x33de14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_33de18:
    // 0x33de18: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x33de18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_33de1c:
    // 0x33de1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33de1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33de20:
    // 0x33de20: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x33de20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_33de24:
    // 0x33de24: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x33de24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_33de28:
    // 0x33de28: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x33de28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_33de2c:
    // 0x33de2c: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x33de2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
label_33de30:
    // 0x33de30: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x33de30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_33de34:
    // 0x33de34: 0x261000c0  addiu       $s0, $s0, 0xC0
    ctx->pc = 0x33de34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_33de38:
    // 0x33de38: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x33de38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_33de3c:
    // 0x33de3c: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x33de3cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_33de40:
    // 0x33de40: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33de40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_33de44:
    // 0x33de44: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33de44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_33de48:
    // 0x33de48: 0x1c60ffdd  bgtz        $v1, . + 4 + (-0x23 << 2)
label_33de4c:
    if (ctx->pc == 0x33DE4Cu) {
        ctx->pc = 0x33DE50u;
        goto label_33de50;
    }
    ctx->pc = 0x33DE48u;
    {
        const bool branch_taken_0x33de48 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x33de48) {
            ctx->pc = 0x33DDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ddc0;
        }
    }
    ctx->pc = 0x33DE50u;
label_33de50:
    // 0x33de50: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x33de50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_33de54:
    // 0x33de54: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x33de54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_33de58:
    // 0x33de58: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x33de58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_33de5c:
    // 0x33de5c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_33de60:
    if (ctx->pc == 0x33DE60u) {
        ctx->pc = 0x33DE64u;
        goto label_33de64;
    }
    ctx->pc = 0x33DE5Cu;
    {
        const bool branch_taken_0x33de5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33de5c) {
            ctx->pc = 0x33DE88u;
            goto label_33de88;
        }
    }
    ctx->pc = 0x33DE64u;
label_33de64:
    // 0x33de64: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x33de64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_33de68:
    // 0x33de68: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x33de68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
label_33de6c:
    // 0x33de6c: 0xae230058  sw          $v1, 0x58($s1)
    ctx->pc = 0x33de6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 3));
label_33de70:
    // 0x33de70: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x33de70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_33de74:
    // 0x33de74: 0x24030c00  addiu       $v1, $zero, 0xC00
    ctx->pc = 0x33de74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
label_33de78:
    // 0x33de78: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_33de7c:
    if (ctx->pc == 0x33DE7Cu) {
        ctx->pc = 0x33DE80u;
        goto label_33de80;
    }
    ctx->pc = 0x33DE78u;
    {
        const bool branch_taken_0x33de78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33de78) {
            ctx->pc = 0x33DE88u;
            goto label_33de88;
        }
    }
    ctx->pc = 0x33DE80u;
label_33de80:
    // 0x33de80: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x33de80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_33de84:
    // 0x33de84: 0x0  nop
    ctx->pc = 0x33de84u;
    // NOP
label_33de88:
    // 0x33de88: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x33de88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_33de8c:
    // 0x33de8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33de8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_33de90:
    // 0x33de90: 0xae23005c  sw          $v1, 0x5C($s1)
    ctx->pc = 0x33de90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 3));
label_33de94:
    // 0x33de94: 0x96230052  lhu         $v1, 0x52($s1)
    ctx->pc = 0x33de94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
label_33de98:
    // 0x33de98: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_33de9c:
    if (ctx->pc == 0x33DE9Cu) {
        ctx->pc = 0x33DEA0u;
        goto label_33dea0;
    }
    ctx->pc = 0x33DE98u;
    {
        const bool branch_taken_0x33de98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33de98) {
            ctx->pc = 0x33DEC8u;
            goto label_33dec8;
        }
    }
    ctx->pc = 0x33DEA0u;
label_33dea0:
    // 0x33dea0: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x33dea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_33dea4:
    // 0x33dea4: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x33dea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_33dea8:
    // 0x33dea8: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x33dea8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_33deac:
    // 0x33deac: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x33deacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_33deb0:
    // 0x33deb0: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_33deb4:
    if (ctx->pc == 0x33DEB4u) {
        ctx->pc = 0x33DEB8u;
        goto label_33deb8;
    }
    ctx->pc = 0x33DEB0u;
    {
        const bool branch_taken_0x33deb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33deb0) {
            ctx->pc = 0x33DEF8u;
            goto label_33def8;
        }
    }
    ctx->pc = 0x33DEB8u;
label_33deb8:
    // 0x33deb8: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x33deb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_33debc:
    // 0x33debc: 0xa6200052  sh          $zero, 0x52($s1)
    ctx->pc = 0x33debcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 82), (uint16_t)GPR_U32(ctx, 0));
label_33dec0:
    // 0x33dec0: 0x1000000d  b           . + 4 + (0xD << 2)
label_33dec4:
    if (ctx->pc == 0x33DEC4u) {
        ctx->pc = 0x33DEC8u;
        goto label_33dec8;
    }
    ctx->pc = 0x33DEC0u;
    {
        const bool branch_taken_0x33dec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33dec0) {
            ctx->pc = 0x33DEF8u;
            goto label_33def8;
        }
    }
    ctx->pc = 0x33DEC8u;
label_33dec8:
    // 0x33dec8: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x33dec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_33decc:
    // 0x33decc: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x33deccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_33ded0:
    // 0x33ded0: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x33ded0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_33ded4:
    // 0x33ded4: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x33ded4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_33ded8:
    // 0x33ded8: 0x2c610801  sltiu       $at, $v1, 0x801
    ctx->pc = 0x33ded8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2049) ? 1 : 0);
label_33dedc:
    // 0x33dedc: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_33dee0:
    if (ctx->pc == 0x33DEE0u) {
        ctx->pc = 0x33DEE4u;
        goto label_33dee4;
    }
    ctx->pc = 0x33DEDCu;
    {
        const bool branch_taken_0x33dedc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33dedc) {
            ctx->pc = 0x33DEF8u;
            goto label_33def8;
        }
    }
    ctx->pc = 0x33DEE4u;
label_33dee4:
    // 0x33dee4: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x33dee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_33dee8:
    // 0x33dee8: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x33dee8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_33deec:
    // 0x33deec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33deecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33def0:
    // 0x33def0: 0xa6230052  sh          $v1, 0x52($s1)
    ctx->pc = 0x33def0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 82), (uint16_t)GPR_U32(ctx, 3));
label_33def4:
    // 0x33def4: 0x0  nop
    ctx->pc = 0x33def4u;
    // NOP
label_33def8:
    // 0x33def8: 0x26520090  addiu       $s2, $s2, 0x90
    ctx->pc = 0x33def8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_33defc:
    // 0x33defc: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x33defcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_33df00:
    // 0x33df00: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x33df00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_33df04:
    // 0x33df04: 0xae430060  sw          $v1, 0x60($s2)
    ctx->pc = 0x33df04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 3));
label_33df08:
    // 0x33df08: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x33df08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_33df0c:
    // 0x33df0c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x33df0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_33df10:
    // 0x33df10: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x33df10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_33df14:
    // 0x33df14: 0xae430064  sw          $v1, 0x64($s2)
    ctx->pc = 0x33df14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 3));
label_33df18:
    // 0x33df18: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x33df18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_33df1c:
    // 0x33df1c: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x33df1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
label_33df20:
    // 0x33df20: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x33df20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_33df24:
    // 0x33df24: 0xae430068  sw          $v1, 0x68($s2)
    ctx->pc = 0x33df24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 3));
label_33df28:
    // 0x33df28: 0x1000000b  b           . + 4 + (0xB << 2)
label_33df2c:
    if (ctx->pc == 0x33DF2Cu) {
        ctx->pc = 0x33DF30u;
        goto label_33df30;
    }
    ctx->pc = 0x33DF28u;
    {
        const bool branch_taken_0x33df28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33df28) {
            ctx->pc = 0x33DF58u;
            goto label_33df58;
        }
    }
    ctx->pc = 0x33DF30u;
label_33df30:
    // 0x33df30: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x33df30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_33df34:
    // 0x33df34: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x33df34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_33df38:
    // 0x33df38: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x33df38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_33df3c:
    // 0x33df3c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33df3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_33df40:
    // 0x33df40: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x33df40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_33df44:
    // 0x33df44: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x33df44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33df48:
    // 0x33df48: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x33df48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_33df4c:
    // 0x33df4c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x33df4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_33df50:
    // 0x33df50: 0xc079140  jal         func_1E4500
label_33df54:
    if (ctx->pc == 0x33DF54u) {
        ctx->pc = 0x33DF58u;
        goto label_33df58;
    }
    ctx->pc = 0x33DF50u;
    SET_GPR_U32(ctx, 31, 0x33DF58u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x33DF50u, 0x33DF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DF58u;
label_33df58:
    // 0x33df58: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x33df58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_33df5c:
    // 0x33df5c: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x33df5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
label_33df60:
    // 0x33df60: 0x2e83001f  sltiu       $v1, $s4, 0x1F
    ctx->pc = 0x33df60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
label_33df64:
    // 0x33df64: 0x1460ff77  bnez        $v1, . + 4 + (-0x89 << 2)
label_33df68:
    if (ctx->pc == 0x33DF68u) {
        ctx->pc = 0x33DF6Cu;
        goto label_33df6c;
    }
    ctx->pc = 0x33DF64u;
    {
        const bool branch_taken_0x33df64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33df64) {
            ctx->pc = 0x33DD44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33dd44;
        }
    }
    ctx->pc = 0x33DF6Cu;
label_33df6c:
    // 0x33df6c: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x33df6cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_33df70:
    // 0x33df70: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x33df70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_33df74:
    // 0x33df74: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x33df74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_33df78:
    // 0x33df78: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x33df78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_33df7c:
    // 0x33df7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33df7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33df80:
    // 0x33df80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33df80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33df84:
    // 0x33df84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33df84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33df88:
    // 0x33df88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33df88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33df8c:
    // 0x33df8c: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x33df8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_33df90:
    // 0x33df90: 0x3e00008  jr          $ra
label_33df94:
    if (ctx->pc == 0x33DF94u) {
        ctx->pc = 0x33DF98u;
        goto label_fallthrough_0x33df90;
    }
    ctx->pc = 0x33DF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33df90:
    ctx->pc = 0x33DF98u;
}
