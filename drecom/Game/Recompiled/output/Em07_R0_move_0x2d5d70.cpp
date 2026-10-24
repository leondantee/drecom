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

// Function: Em07_R0_move
// Address: 0x2d5d70 - 0x2d5e4c
void Em07_R0_move_0x2d5d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em07_R0_move_0x2d5d70");
#endif

    switch (ctx->pc) {
        case 0x2d5d70u: goto label_2d5d70;
        case 0x2d5d74u: goto label_2d5d74;
        case 0x2d5d78u: goto label_2d5d78;
        case 0x2d5d7cu: goto label_2d5d7c;
        case 0x2d5d80u: goto label_2d5d80;
        case 0x2d5d84u: goto label_2d5d84;
        case 0x2d5d88u: goto label_2d5d88;
        case 0x2d5d8cu: goto label_2d5d8c;
        case 0x2d5d90u: goto label_2d5d90;
        case 0x2d5d94u: goto label_2d5d94;
        case 0x2d5d98u: goto label_2d5d98;
        case 0x2d5d9cu: goto label_2d5d9c;
        case 0x2d5da0u: goto label_2d5da0;
        case 0x2d5da4u: goto label_2d5da4;
        case 0x2d5da8u: goto label_2d5da8;
        case 0x2d5dacu: goto label_2d5dac;
        case 0x2d5db0u: goto label_2d5db0;
        case 0x2d5db4u: goto label_2d5db4;
        case 0x2d5db8u: goto label_2d5db8;
        case 0x2d5dbcu: goto label_2d5dbc;
        case 0x2d5dc0u: goto label_2d5dc0;
        case 0x2d5dc4u: goto label_2d5dc4;
        case 0x2d5dc8u: goto label_2d5dc8;
        case 0x2d5dccu: goto label_2d5dcc;
        case 0x2d5dd0u: goto label_2d5dd0;
        case 0x2d5dd4u: goto label_2d5dd4;
        case 0x2d5dd8u: goto label_2d5dd8;
        case 0x2d5ddcu: goto label_2d5ddc;
        case 0x2d5de0u: goto label_2d5de0;
        case 0x2d5de4u: goto label_2d5de4;
        case 0x2d5de8u: goto label_2d5de8;
        case 0x2d5decu: goto label_2d5dec;
        case 0x2d5df0u: goto label_2d5df0;
        case 0x2d5df4u: goto label_2d5df4;
        case 0x2d5df8u: goto label_2d5df8;
        case 0x2d5dfcu: goto label_2d5dfc;
        case 0x2d5e00u: goto label_2d5e00;
        case 0x2d5e04u: goto label_2d5e04;
        case 0x2d5e08u: goto label_2d5e08;
        case 0x2d5e0cu: goto label_2d5e0c;
        case 0x2d5e10u: goto label_2d5e10;
        case 0x2d5e14u: goto label_2d5e14;
        case 0x2d5e18u: goto label_2d5e18;
        case 0x2d5e1cu: goto label_2d5e1c;
        case 0x2d5e20u: goto label_2d5e20;
        case 0x2d5e24u: goto label_2d5e24;
        case 0x2d5e28u: goto label_2d5e28;
        case 0x2d5e2cu: goto label_2d5e2c;
        case 0x2d5e30u: goto label_2d5e30;
        case 0x2d5e34u: goto label_2d5e34;
        case 0x2d5e38u: goto label_2d5e38;
        case 0x2d5e3cu: goto label_2d5e3c;
        case 0x2d5e40u: goto label_2d5e40;
        case 0x2d5e44u: goto label_2d5e44;
        case 0x2d5e48u: goto label_2d5e48;
        default: break;
    }

    ctx->pc = 0x2d5d70u;

label_2d5d70:
    // 0x2d5d70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d5d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d5d74:
    // 0x2d5d74: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2d5d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_2d5d78:
    // 0x2d5d78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d5d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d5d7c:
    // 0x2d5d7c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2d5d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_2d5d80:
    // 0x2d5d80: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d5d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d5d84:
    // 0x2d5d84: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d5d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
label_2d5d88:
    // 0x2d5d88: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2d5d88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d5d8c:
    // 0x2d5d8c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2d5d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2d5d90:
    // 0x2d5d90: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d5d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d5d94:
    // 0x2d5d94: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2d5d94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_2d5d98:
    // 0x2d5d98: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x2d5d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_2d5d9c:
    // 0x2d5d9c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2d5d9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2d5da0:
    // 0x2d5da0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d5da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d5da4:
    // 0x2d5da4: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x2d5da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_2d5da8:
    // 0x2d5da8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2d5da8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_2d5dac:
    // 0x2d5dac: 0x260200d0  addiu       $v0, $s0, 0xD0
    ctx->pc = 0x2d5dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_2d5db0:
    // 0x2d5db0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2d5db0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2d5db4:
    // 0x2d5db4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d5db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d5db8:
    // 0x2d5db8: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2d5db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_2d5dbc:
    // 0x2d5dbc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2d5dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_2d5dc0:
    // 0x2d5dc0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d5dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d5dc4:
    // 0x2d5dc4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d5dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d5dc8:
    // 0x2d5dc8: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2d5dc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2d5dcc:
    // 0x2d5dcc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d5dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2d5dd0:
    // 0x2d5dd0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2d5dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2d5dd4:
    // 0x2d5dd4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d5dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2d5dd8:
    // 0x2d5dd8: 0x244288d0  addiu       $v0, $v0, -0x7730
    ctx->pc = 0x2d5dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
label_2d5ddc:
    // 0x2d5ddc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d5ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d5de0:
    // 0x2d5de0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d5de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d5de4:
    // 0x2d5de4: 0x40f809  jalr        $v0
label_2d5de8:
    if (ctx->pc == 0x2D5DE8u) {
        ctx->pc = 0x2D5DECu;
        goto label_2d5dec;
    }
    ctx->pc = 0x2D5DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D5DECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5DE4u, 0x2D5DECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D5DECu;
label_2d5dec:
    // 0x2d5dec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d5decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d5df0:
    // 0x2d5df0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d5df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d5df4:
    // 0x2d5df4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2d5df4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2d5df8:
    // 0x2d5df8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d5df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2d5dfc:
    // 0x2d5dfc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2d5dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2d5e00:
    // 0x2d5e00: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d5e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2d5e04:
    // 0x2d5e04: 0x24428900  addiu       $v0, $v0, -0x7700
    ctx->pc = 0x2d5e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936832));
label_2d5e08:
    // 0x2d5e08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d5e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d5e0c:
    // 0x2d5e0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d5e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d5e10:
    // 0x2d5e10: 0x40f809  jalr        $v0
label_2d5e14:
    if (ctx->pc == 0x2D5E14u) {
        ctx->pc = 0x2D5E18u;
        goto label_2d5e18;
    }
    ctx->pc = 0x2D5E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D5E18u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5E10u, 0x2D5E18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D5E18u;
label_2d5e18:
    // 0x2d5e18: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d5e1c:
    // 0x2d5e1c: 0x8c631330  lw          $v1, 0x1330($v1)
    ctx->pc = 0x2d5e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4912)));
label_2d5e20:
    // 0x2d5e20: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2d5e24:
    if (ctx->pc == 0x2D5E24u) {
        ctx->pc = 0x2D5E28u;
        goto label_2d5e28;
    }
    ctx->pc = 0x2D5E20u;
    {
        const bool branch_taken_0x2d5e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5e20) {
            ctx->pc = 0x2D5E38u;
            goto label_2d5e38;
        }
    }
    ctx->pc = 0x2D5E28u;
label_2d5e28:
    // 0x2d5e28: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d5e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d5e2c:
    // 0x2d5e2c: 0x8c831330  lw          $v1, 0x1330($a0)
    ctx->pc = 0x2d5e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4912)));
label_2d5e30:
    // 0x2d5e30: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d5e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2d5e34:
    // 0x2d5e34: 0xac831330  sw          $v1, 0x1330($a0)
    ctx->pc = 0x2d5e34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4912), GPR_U32(ctx, 3));
label_2d5e38:
    // 0x2d5e38: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2d5e38u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d5e3c:
    // 0x2d5e3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d5e3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d5e40:
    // 0x2d5e40: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d5e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2d5e44:
    // 0x2d5e44: 0x3e00008  jr          $ra
label_2d5e48:
    if (ctx->pc == 0x2D5E48u) {
        ctx->pc = 0x2D5E4Cu;
        goto label_fallthrough_0x2d5e44;
    }
    ctx->pc = 0x2D5E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d5e44:
    ctx->pc = 0x2D5E4Cu;
}
