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

// Function: Em06_R0_move
// Address: 0x197e60 - 0x197f44
void Em06_R0_move_0x197e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em06_R0_move_0x197e60");
#endif

    switch (ctx->pc) {
        case 0x197e60u: goto label_197e60;
        case 0x197e64u: goto label_197e64;
        case 0x197e68u: goto label_197e68;
        case 0x197e6cu: goto label_197e6c;
        case 0x197e70u: goto label_197e70;
        case 0x197e74u: goto label_197e74;
        case 0x197e78u: goto label_197e78;
        case 0x197e7cu: goto label_197e7c;
        case 0x197e80u: goto label_197e80;
        case 0x197e84u: goto label_197e84;
        case 0x197e88u: goto label_197e88;
        case 0x197e8cu: goto label_197e8c;
        case 0x197e90u: goto label_197e90;
        case 0x197e94u: goto label_197e94;
        case 0x197e98u: goto label_197e98;
        case 0x197e9cu: goto label_197e9c;
        case 0x197ea0u: goto label_197ea0;
        case 0x197ea4u: goto label_197ea4;
        case 0x197ea8u: goto label_197ea8;
        case 0x197eacu: goto label_197eac;
        case 0x197eb0u: goto label_197eb0;
        case 0x197eb4u: goto label_197eb4;
        case 0x197eb8u: goto label_197eb8;
        case 0x197ebcu: goto label_197ebc;
        case 0x197ec0u: goto label_197ec0;
        case 0x197ec4u: goto label_197ec4;
        case 0x197ec8u: goto label_197ec8;
        case 0x197eccu: goto label_197ecc;
        case 0x197ed0u: goto label_197ed0;
        case 0x197ed4u: goto label_197ed4;
        case 0x197ed8u: goto label_197ed8;
        case 0x197edcu: goto label_197edc;
        case 0x197ee0u: goto label_197ee0;
        case 0x197ee4u: goto label_197ee4;
        case 0x197ee8u: goto label_197ee8;
        case 0x197eecu: goto label_197eec;
        case 0x197ef0u: goto label_197ef0;
        case 0x197ef4u: goto label_197ef4;
        case 0x197ef8u: goto label_197ef8;
        case 0x197efcu: goto label_197efc;
        case 0x197f00u: goto label_197f00;
        case 0x197f04u: goto label_197f04;
        case 0x197f08u: goto label_197f08;
        case 0x197f0cu: goto label_197f0c;
        case 0x197f10u: goto label_197f10;
        case 0x197f14u: goto label_197f14;
        case 0x197f18u: goto label_197f18;
        case 0x197f1cu: goto label_197f1c;
        case 0x197f20u: goto label_197f20;
        case 0x197f24u: goto label_197f24;
        case 0x197f28u: goto label_197f28;
        case 0x197f2cu: goto label_197f2c;
        case 0x197f30u: goto label_197f30;
        case 0x197f34u: goto label_197f34;
        case 0x197f38u: goto label_197f38;
        case 0x197f3cu: goto label_197f3c;
        case 0x197f40u: goto label_197f40;
        default: break;
    }

    ctx->pc = 0x197e60u;

label_197e60:
    // 0x197e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x197e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_197e64:
    // 0x197e64: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x197e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_197e68:
    // 0x197e68: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x197e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_197e6c:
    // 0x197e6c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_197e70:
    // 0x197e70: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x197e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_197e74:
    // 0x197e74: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x197e74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_197e78:
    // 0x197e78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x197e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_197e7c:
    // 0x197e7c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x197e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_197e80:
    // 0x197e80: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x197e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_197e84:
    // 0x197e84: 0x24427350  addiu       $v0, $v0, 0x7350
    ctx->pc = 0x197e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29520));
label_197e88:
    // 0x197e88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_197e8c:
    // 0x197e8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x197e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_197e90:
    // 0x197e90: 0x40f809  jalr        $v0
label_197e94:
    if (ctx->pc == 0x197E94u) {
        ctx->pc = 0x197E98u;
        goto label_197e98;
    }
    ctx->pc = 0x197E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x197E98u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197E90u, 0x197E98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197E98u;
label_197e98:
    // 0x197e98: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_197e9c:
    // 0x197e9c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x197e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_197ea0:
    // 0x197ea0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x197ea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_197ea4:
    // 0x197ea4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x197ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_197ea8:
    // 0x197ea8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x197ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_197eac:
    // 0x197eac: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x197eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_197eb0:
    // 0x197eb0: 0x24427390  addiu       $v0, $v0, 0x7390
    ctx->pc = 0x197eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29584));
label_197eb4:
    // 0x197eb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_197eb8:
    // 0x197eb8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x197eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_197ebc:
    // 0x197ebc: 0x40f809  jalr        $v0
label_197ec0:
    if (ctx->pc == 0x197EC0u) {
        ctx->pc = 0x197EC4u;
        goto label_197ec4;
    }
    ctx->pc = 0x197EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x197EC4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197EBCu, 0x197EC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197EC4u;
label_197ec4:
    // 0x197ec4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_197ec8:
    // 0x197ec8: 0xc065a18  jal         func_196860
label_197ecc:
    if (ctx->pc == 0x197ECCu) {
        ctx->pc = 0x197ED0u;
        goto label_197ed0;
    }
    ctx->pc = 0x197EC8u;
    SET_GPR_U32(ctx, 31, 0x197ED0u);
    ctx->pc = 0x196860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196860u, 0x197EC8u, 0x197ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197ED0u;
label_197ed0:
    // 0x197ed0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x197ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_197ed4:
    // 0x197ed4: 0x8c631330  lw          $v1, 0x1330($v1)
    ctx->pc = 0x197ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4912)));
label_197ed8:
    // 0x197ed8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_197edc:
    if (ctx->pc == 0x197EDCu) {
        ctx->pc = 0x197EE0u;
        goto label_197ee0;
    }
    ctx->pc = 0x197ED8u;
    {
        const bool branch_taken_0x197ed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x197ed8) {
            ctx->pc = 0x197EF0u;
            goto label_197ef0;
        }
    }
    ctx->pc = 0x197EE0u;
label_197ee0:
    // 0x197ee0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_197ee4:
    // 0x197ee4: 0x8c831330  lw          $v1, 0x1330($a0)
    ctx->pc = 0x197ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4912)));
label_197ee8:
    // 0x197ee8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x197ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_197eec:
    // 0x197eec: 0xac831330  sw          $v1, 0x1330($a0)
    ctx->pc = 0x197eecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4912), GPR_U32(ctx, 3));
label_197ef0:
    // 0x197ef0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x197ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_197ef4:
    // 0x197ef4: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x197ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
label_197ef8:
    // 0x197ef8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_197efc:
    if (ctx->pc == 0x197EFCu) {
        ctx->pc = 0x197F00u;
        goto label_197f00;
    }
    ctx->pc = 0x197EF8u;
    {
        const bool branch_taken_0x197ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x197ef8) {
            ctx->pc = 0x197F10u;
            goto label_197f10;
        }
    }
    ctx->pc = 0x197F00u;
label_197f00:
    // 0x197f00: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_197f04:
    // 0x197f04: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x197f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
label_197f08:
    // 0x197f08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x197f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_197f0c:
    // 0x197f0c: 0xac831334  sw          $v1, 0x1334($a0)
    ctx->pc = 0x197f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 3));
label_197f10:
    // 0x197f10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x197f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_197f14:
    // 0x197f14: 0x8c631344  lw          $v1, 0x1344($v1)
    ctx->pc = 0x197f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4932)));
label_197f18:
    // 0x197f18: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x197f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_197f1c:
    // 0x197f1c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_197f20:
    if (ctx->pc == 0x197F20u) {
        ctx->pc = 0x197F24u;
        goto label_197f24;
    }
    ctx->pc = 0x197F1Cu;
    {
        const bool branch_taken_0x197f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x197f1c) {
            ctx->pc = 0x197F34u;
            goto label_197f34;
        }
    }
    ctx->pc = 0x197F24u;
label_197f24:
    // 0x197f24: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_197f28:
    // 0x197f28: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x197f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
label_197f2c:
    // 0x197f2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x197f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_197f30:
    // 0x197f30: 0xac831338  sw          $v1, 0x1338($a0)
    ctx->pc = 0x197f30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 3));
label_197f34:
    // 0x197f34: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x197f34u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_197f38:
    // 0x197f38: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x197f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_197f3c:
    // 0x197f3c: 0x3e00008  jr          $ra
label_197f40:
    if (ctx->pc == 0x197F40u) {
        ctx->pc = 0x197F44u;
        goto label_fallthrough_0x197f3c;
    }
    ctx->pc = 0x197F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x197f3c:
    ctx->pc = 0x197F44u;
}
