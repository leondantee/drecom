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

// Function: Ectrl_12
// Address: 0x251c50 - 0x251d9c
void Ectrl_12_0x251c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ectrl_12_0x251c50");
#endif

    switch (ctx->pc) {
        case 0x251c50u: goto label_251c50;
        case 0x251c54u: goto label_251c54;
        case 0x251c58u: goto label_251c58;
        case 0x251c5cu: goto label_251c5c;
        case 0x251c60u: goto label_251c60;
        case 0x251c64u: goto label_251c64;
        case 0x251c68u: goto label_251c68;
        case 0x251c6cu: goto label_251c6c;
        case 0x251c70u: goto label_251c70;
        case 0x251c74u: goto label_251c74;
        case 0x251c78u: goto label_251c78;
        case 0x251c7cu: goto label_251c7c;
        case 0x251c80u: goto label_251c80;
        case 0x251c84u: goto label_251c84;
        case 0x251c88u: goto label_251c88;
        case 0x251c8cu: goto label_251c8c;
        case 0x251c90u: goto label_251c90;
        case 0x251c94u: goto label_251c94;
        case 0x251c98u: goto label_251c98;
        case 0x251c9cu: goto label_251c9c;
        case 0x251ca0u: goto label_251ca0;
        case 0x251ca4u: goto label_251ca4;
        case 0x251ca8u: goto label_251ca8;
        case 0x251cacu: goto label_251cac;
        case 0x251cb0u: goto label_251cb0;
        case 0x251cb4u: goto label_251cb4;
        case 0x251cb8u: goto label_251cb8;
        case 0x251cbcu: goto label_251cbc;
        case 0x251cc0u: goto label_251cc0;
        case 0x251cc4u: goto label_251cc4;
        case 0x251cc8u: goto label_251cc8;
        case 0x251cccu: goto label_251ccc;
        case 0x251cd0u: goto label_251cd0;
        case 0x251cd4u: goto label_251cd4;
        case 0x251cd8u: goto label_251cd8;
        case 0x251cdcu: goto label_251cdc;
        case 0x251ce0u: goto label_251ce0;
        case 0x251ce4u: goto label_251ce4;
        case 0x251ce8u: goto label_251ce8;
        case 0x251cecu: goto label_251cec;
        case 0x251cf0u: goto label_251cf0;
        case 0x251cf4u: goto label_251cf4;
        case 0x251cf8u: goto label_251cf8;
        case 0x251cfcu: goto label_251cfc;
        case 0x251d00u: goto label_251d00;
        case 0x251d04u: goto label_251d04;
        case 0x251d08u: goto label_251d08;
        case 0x251d0cu: goto label_251d0c;
        case 0x251d10u: goto label_251d10;
        case 0x251d14u: goto label_251d14;
        case 0x251d18u: goto label_251d18;
        case 0x251d1cu: goto label_251d1c;
        case 0x251d20u: goto label_251d20;
        case 0x251d24u: goto label_251d24;
        case 0x251d28u: goto label_251d28;
        case 0x251d2cu: goto label_251d2c;
        case 0x251d30u: goto label_251d30;
        case 0x251d34u: goto label_251d34;
        case 0x251d38u: goto label_251d38;
        case 0x251d3cu: goto label_251d3c;
        case 0x251d40u: goto label_251d40;
        case 0x251d44u: goto label_251d44;
        case 0x251d48u: goto label_251d48;
        case 0x251d4cu: goto label_251d4c;
        case 0x251d50u: goto label_251d50;
        case 0x251d54u: goto label_251d54;
        case 0x251d58u: goto label_251d58;
        case 0x251d5cu: goto label_251d5c;
        case 0x251d60u: goto label_251d60;
        case 0x251d64u: goto label_251d64;
        case 0x251d68u: goto label_251d68;
        case 0x251d6cu: goto label_251d6c;
        case 0x251d70u: goto label_251d70;
        case 0x251d74u: goto label_251d74;
        case 0x251d78u: goto label_251d78;
        case 0x251d7cu: goto label_251d7c;
        case 0x251d80u: goto label_251d80;
        case 0x251d84u: goto label_251d84;
        case 0x251d88u: goto label_251d88;
        case 0x251d8cu: goto label_251d8c;
        case 0x251d90u: goto label_251d90;
        case 0x251d94u: goto label_251d94;
        case 0x251d98u: goto label_251d98;
        default: break;
    }

    ctx->pc = 0x251c50u;

label_251c50:
    // 0x251c50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x251c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_251c54:
    // 0x251c54: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x251c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_251c58:
    // 0x251c58: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x251c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_251c5c:
    // 0x251c5c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x251c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_251c60:
    // 0x251c60: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x251c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_251c64:
    // 0x251c64: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x251c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_251c68:
    // 0x251c68: 0x1062003e  beq         $v1, $v0, . + 4 + (0x3E << 2)
label_251c6c:
    if (ctx->pc == 0x251C6Cu) {
        ctx->pc = 0x251C70u;
        goto label_251c70;
    }
    ctx->pc = 0x251C68u;
    {
        const bool branch_taken_0x251c68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x251c68) {
            ctx->pc = 0x251D64u;
            goto label_251d64;
        }
    }
    ctx->pc = 0x251C70u;
label_251c70:
    // 0x251c70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x251c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_251c74:
    // 0x251c74: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
label_251c78:
    if (ctx->pc == 0x251C78u) {
        ctx->pc = 0x251C7Cu;
        goto label_251c7c;
    }
    ctx->pc = 0x251C74u;
    {
        const bool branch_taken_0x251c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x251c74) {
            ctx->pc = 0x251D34u;
            goto label_251d34;
        }
    }
    ctx->pc = 0x251C7Cu;
label_251c7c:
    // 0x251c7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x251c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_251c80:
    // 0x251c80: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
label_251c84:
    if (ctx->pc == 0x251C84u) {
        ctx->pc = 0x251C88u;
        goto label_251c88;
    }
    ctx->pc = 0x251C80u;
    {
        const bool branch_taken_0x251c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x251c80) {
            ctx->pc = 0x251D04u;
            goto label_251d04;
        }
    }
    ctx->pc = 0x251C88u;
label_251c88:
    // 0x251c88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x251c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_251c8c:
    // 0x251c8c: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_251c90:
    if (ctx->pc == 0x251C90u) {
        ctx->pc = 0x251C94u;
        goto label_251c94;
    }
    ctx->pc = 0x251C8Cu;
    {
        const bool branch_taken_0x251c8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x251c8c) {
            ctx->pc = 0x251CD4u;
            goto label_251cd4;
        }
    }
    ctx->pc = 0x251C94u;
label_251c94:
    // 0x251c94: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_251c98:
    if (ctx->pc == 0x251C98u) {
        ctx->pc = 0x251C9Cu;
        goto label_251c9c;
    }
    ctx->pc = 0x251C94u;
    {
        const bool branch_taken_0x251c94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x251c94) {
            ctx->pc = 0x251CA4u;
            goto label_251ca4;
        }
    }
    ctx->pc = 0x251C9Cu;
label_251c9c:
    // 0x251c9c: 0x10000031  b           . + 4 + (0x31 << 2)
label_251ca0:
    if (ctx->pc == 0x251CA0u) {
        ctx->pc = 0x251CA4u;
        goto label_251ca4;
    }
    ctx->pc = 0x251C9Cu;
    {
        const bool branch_taken_0x251c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251c9c) {
            ctx->pc = 0x251D64u;
            goto label_251d64;
        }
    }
    ctx->pc = 0x251CA4u;
label_251ca4:
    // 0x251ca4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x251ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_251ca8:
    // 0x251ca8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x251ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_251cac:
    // 0x251cac: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x251cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_251cb0:
    // 0x251cb0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x251cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_251cb4:
    // 0x251cb4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x251cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_251cb8:
    // 0x251cb8: 0x2442b708  addiu       $v0, $v0, -0x48F8
    ctx->pc = 0x251cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948616));
label_251cbc:
    // 0x251cbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x251cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_251cc0:
    // 0x251cc0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x251cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_251cc4:
    // 0x251cc4: 0x40f809  jalr        $v0
label_251cc8:
    if (ctx->pc == 0x251CC8u) {
        ctx->pc = 0x251CCCu;
        goto label_251ccc;
    }
    ctx->pc = 0x251CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x251CCCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251CC4u, 0x251CCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x251CCCu;
label_251ccc:
    // 0x251ccc: 0x1000002f  b           . + 4 + (0x2F << 2)
label_251cd0:
    if (ctx->pc == 0x251CD0u) {
        ctx->pc = 0x251CD4u;
        goto label_251cd4;
    }
    ctx->pc = 0x251CCCu;
    {
        const bool branch_taken_0x251ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251ccc) {
            ctx->pc = 0x251D8Cu;
            goto label_251d8c;
        }
    }
    ctx->pc = 0x251CD4u;
label_251cd4:
    // 0x251cd4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x251cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_251cd8:
    // 0x251cd8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x251cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_251cdc:
    // 0x251cdc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x251cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_251ce0:
    // 0x251ce0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x251ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_251ce4:
    // 0x251ce4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x251ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_251ce8:
    // 0x251ce8: 0x2442b710  addiu       $v0, $v0, -0x48F0
    ctx->pc = 0x251ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948624));
label_251cec:
    // 0x251cec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x251cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_251cf0:
    // 0x251cf0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x251cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_251cf4:
    // 0x251cf4: 0x40f809  jalr        $v0
label_251cf8:
    if (ctx->pc == 0x251CF8u) {
        ctx->pc = 0x251CFCu;
        goto label_251cfc;
    }
    ctx->pc = 0x251CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x251CFCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251CF4u, 0x251CFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x251CFCu;
label_251cfc:
    // 0x251cfc: 0x10000023  b           . + 4 + (0x23 << 2)
label_251d00:
    if (ctx->pc == 0x251D00u) {
        ctx->pc = 0x251D04u;
        goto label_251d04;
    }
    ctx->pc = 0x251CFCu;
    {
        const bool branch_taken_0x251cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251cfc) {
            ctx->pc = 0x251D8Cu;
            goto label_251d8c;
        }
    }
    ctx->pc = 0x251D04u;
label_251d04:
    // 0x251d04: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x251d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_251d08:
    // 0x251d08: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x251d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_251d0c:
    // 0x251d0c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x251d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_251d10:
    // 0x251d10: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x251d10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_251d14:
    // 0x251d14: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x251d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_251d18:
    // 0x251d18: 0x2442b720  addiu       $v0, $v0, -0x48E0
    ctx->pc = 0x251d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948640));
label_251d1c:
    // 0x251d1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x251d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_251d20:
    // 0x251d20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x251d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_251d24:
    // 0x251d24: 0x40f809  jalr        $v0
label_251d28:
    if (ctx->pc == 0x251D28u) {
        ctx->pc = 0x251D2Cu;
        goto label_251d2c;
    }
    ctx->pc = 0x251D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x251D2Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251D24u, 0x251D2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x251D2Cu;
label_251d2c:
    // 0x251d2c: 0x10000017  b           . + 4 + (0x17 << 2)
label_251d30:
    if (ctx->pc == 0x251D30u) {
        ctx->pc = 0x251D34u;
        goto label_251d34;
    }
    ctx->pc = 0x251D2Cu;
    {
        const bool branch_taken_0x251d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251d2c) {
            ctx->pc = 0x251D8Cu;
            goto label_251d8c;
        }
    }
    ctx->pc = 0x251D34u;
label_251d34:
    // 0x251d34: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x251d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_251d38:
    // 0x251d38: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x251d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_251d3c:
    // 0x251d3c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x251d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_251d40:
    // 0x251d40: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x251d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_251d44:
    // 0x251d44: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x251d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_251d48:
    // 0x251d48: 0x2442b728  addiu       $v0, $v0, -0x48D8
    ctx->pc = 0x251d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948648));
label_251d4c:
    // 0x251d4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x251d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_251d50:
    // 0x251d50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x251d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_251d54:
    // 0x251d54: 0x40f809  jalr        $v0
label_251d58:
    if (ctx->pc == 0x251D58u) {
        ctx->pc = 0x251D5Cu;
        goto label_251d5c;
    }
    ctx->pc = 0x251D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x251D5Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251D54u, 0x251D5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x251D5Cu;
label_251d5c:
    // 0x251d5c: 0x1000000b  b           . + 4 + (0xB << 2)
label_251d60:
    if (ctx->pc == 0x251D60u) {
        ctx->pc = 0x251D64u;
        goto label_251d64;
    }
    ctx->pc = 0x251D5Cu;
    {
        const bool branch_taken_0x251d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251d5c) {
            ctx->pc = 0x251D8Cu;
            goto label_251d8c;
        }
    }
    ctx->pc = 0x251D64u;
label_251d64:
    // 0x251d64: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x251d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_251d68:
    // 0x251d68: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x251d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_251d6c:
    // 0x251d6c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x251d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_251d70:
    // 0x251d70: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x251d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_251d74:
    // 0x251d74: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x251d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_251d78:
    // 0x251d78: 0x2442b730  addiu       $v0, $v0, -0x48D0
    ctx->pc = 0x251d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948656));
label_251d7c:
    // 0x251d7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x251d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_251d80:
    // 0x251d80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x251d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_251d84:
    // 0x251d84: 0x40f809  jalr        $v0
label_251d88:
    if (ctx->pc == 0x251D88u) {
        ctx->pc = 0x251D8Cu;
        goto label_251d8c;
    }
    ctx->pc = 0x251D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x251D8Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251D84u, 0x251D8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x251D8Cu;
label_251d8c:
    // 0x251d8c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x251d8cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_251d90:
    // 0x251d90: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x251d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_251d94:
    // 0x251d94: 0x3e00008  jr          $ra
label_251d98:
    if (ctx->pc == 0x251D98u) {
        ctx->pc = 0x251D9Cu;
        goto label_fallthrough_0x251d94;
    }
    ctx->pc = 0x251D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x251d94:
    ctx->pc = 0x251D9Cu;
}
