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

// Function: Technique_menu
// Address: 0x379cb0 - 0x379d8c
void Technique_menu_0x379cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Technique_menu_0x379cb0");
#endif

    switch (ctx->pc) {
        case 0x379cb0u: goto label_379cb0;
        case 0x379cb4u: goto label_379cb4;
        case 0x379cb8u: goto label_379cb8;
        case 0x379cbcu: goto label_379cbc;
        case 0x379cc0u: goto label_379cc0;
        case 0x379cc4u: goto label_379cc4;
        case 0x379cc8u: goto label_379cc8;
        case 0x379cccu: goto label_379ccc;
        case 0x379cd0u: goto label_379cd0;
        case 0x379cd4u: goto label_379cd4;
        case 0x379cd8u: goto label_379cd8;
        case 0x379cdcu: goto label_379cdc;
        case 0x379ce0u: goto label_379ce0;
        case 0x379ce4u: goto label_379ce4;
        case 0x379ce8u: goto label_379ce8;
        case 0x379cecu: goto label_379cec;
        case 0x379cf0u: goto label_379cf0;
        case 0x379cf4u: goto label_379cf4;
        case 0x379cf8u: goto label_379cf8;
        case 0x379cfcu: goto label_379cfc;
        case 0x379d00u: goto label_379d00;
        case 0x379d04u: goto label_379d04;
        case 0x379d08u: goto label_379d08;
        case 0x379d0cu: goto label_379d0c;
        case 0x379d10u: goto label_379d10;
        case 0x379d14u: goto label_379d14;
        case 0x379d18u: goto label_379d18;
        case 0x379d1cu: goto label_379d1c;
        case 0x379d20u: goto label_379d20;
        case 0x379d24u: goto label_379d24;
        case 0x379d28u: goto label_379d28;
        case 0x379d2cu: goto label_379d2c;
        case 0x379d30u: goto label_379d30;
        case 0x379d34u: goto label_379d34;
        case 0x379d38u: goto label_379d38;
        case 0x379d3cu: goto label_379d3c;
        case 0x379d40u: goto label_379d40;
        case 0x379d44u: goto label_379d44;
        case 0x379d48u: goto label_379d48;
        case 0x379d4cu: goto label_379d4c;
        case 0x379d50u: goto label_379d50;
        case 0x379d54u: goto label_379d54;
        case 0x379d58u: goto label_379d58;
        case 0x379d5cu: goto label_379d5c;
        case 0x379d60u: goto label_379d60;
        case 0x379d64u: goto label_379d64;
        case 0x379d68u: goto label_379d68;
        case 0x379d6cu: goto label_379d6c;
        case 0x379d70u: goto label_379d70;
        case 0x379d74u: goto label_379d74;
        case 0x379d78u: goto label_379d78;
        case 0x379d7cu: goto label_379d7c;
        case 0x379d80u: goto label_379d80;
        case 0x379d84u: goto label_379d84;
        case 0x379d88u: goto label_379d88;
        default: break;
    }

    ctx->pc = 0x379cb0u;

label_379cb0:
    // 0x379cb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x379cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_379cb4:
    // 0x379cb4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x379cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_379cb8:
    // 0x379cb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x379cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_379cbc:
    // 0x379cbc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x379cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_379cc0:
    // 0x379cc0: 0x24706150  addiu       $s0, $v1, 0x6150
    ctx->pc = 0x379cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24912));
label_379cc4:
    // 0x379cc4: 0x920365ad  lbu         $v1, 0x65AD($s0)
    ctx->pc = 0x379cc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26029)));
label_379cc8:
    // 0x379cc8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x379cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_379ccc:
    // 0x379ccc: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
label_379cd0:
    if (ctx->pc == 0x379CD0u) {
        ctx->pc = 0x379CD4u;
        goto label_379cd4;
    }
    ctx->pc = 0x379CCCu;
    {
        const bool branch_taken_0x379ccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x379ccc) {
            ctx->pc = 0x379D58u;
            goto label_379d58;
        }
    }
    ctx->pc = 0x379CD4u;
label_379cd4:
    // 0x379cd4: 0x8e045dc8  lw          $a0, 0x5DC8($s0)
    ctx->pc = 0x379cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
label_379cd8:
    // 0x379cd8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x379cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_379cdc:
    // 0x379cdc: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
label_379ce0:
    if (ctx->pc == 0x379CE0u) {
        ctx->pc = 0x379CE4u;
        goto label_379ce4;
    }
    ctx->pc = 0x379CDCu;
    {
        const bool branch_taken_0x379cdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x379cdc) {
            ctx->pc = 0x379D30u;
            goto label_379d30;
        }
    }
    ctx->pc = 0x379CE4u;
label_379ce4:
    // 0x379ce4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x379ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_379ce8:
    // 0x379ce8: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_379cec:
    if (ctx->pc == 0x379CECu) {
        ctx->pc = 0x379CF0u;
        goto label_379cf0;
    }
    ctx->pc = 0x379CE8u;
    {
        const bool branch_taken_0x379ce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x379ce8) {
            ctx->pc = 0x379D10u;
            goto label_379d10;
        }
    }
    ctx->pc = 0x379CF0u;
label_379cf0:
    // 0x379cf0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_379cf4:
    if (ctx->pc == 0x379CF4u) {
        ctx->pc = 0x379CF8u;
        goto label_379cf8;
    }
    ctx->pc = 0x379CF0u;
    {
        const bool branch_taken_0x379cf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x379cf0) {
            ctx->pc = 0x379D00u;
            goto label_379d00;
        }
    }
    ctx->pc = 0x379CF8u;
label_379cf8:
    // 0x379cf8: 0x10000017  b           . + 4 + (0x17 << 2)
label_379cfc:
    if (ctx->pc == 0x379CFCu) {
        ctx->pc = 0x379D00u;
        goto label_379d00;
    }
    ctx->pc = 0x379CF8u;
    {
        const bool branch_taken_0x379cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x379cf8) {
            ctx->pc = 0x379D58u;
            goto label_379d58;
        }
    }
    ctx->pc = 0x379D00u;
label_379d00:
    // 0x379d00: 0xc0de764  jal         func_379D90
label_379d04:
    if (ctx->pc == 0x379D04u) {
        ctx->pc = 0x379D08u;
        goto label_379d08;
    }
    ctx->pc = 0x379D00u;
    SET_GPR_U32(ctx, 31, 0x379D08u);
    ctx->pc = 0x379D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379D90u, 0x379D00u, 0x379D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379D08u;
label_379d08:
    // 0x379d08: 0x10000013  b           . + 4 + (0x13 << 2)
label_379d0c:
    if (ctx->pc == 0x379D0Cu) {
        ctx->pc = 0x379D10u;
        goto label_379d10;
    }
    ctx->pc = 0x379D08u;
    {
        const bool branch_taken_0x379d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x379d08) {
            ctx->pc = 0x379D58u;
            goto label_379d58;
        }
    }
    ctx->pc = 0x379D10u;
label_379d10:
    // 0x379d10: 0x8e045dc0  lw          $a0, 0x5DC0($s0)
    ctx->pc = 0x379d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24000)));
label_379d14:
    // 0x379d14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x379d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_379d18:
    // 0x379d18: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
label_379d1c:
    if (ctx->pc == 0x379D1Cu) {
        ctx->pc = 0x379D20u;
        goto label_379d20;
    }
    ctx->pc = 0x379D18u;
    {
        const bool branch_taken_0x379d18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x379d18) {
            ctx->pc = 0x379D58u;
            goto label_379d58;
        }
    }
    ctx->pc = 0x379D20u;
label_379d20:
    // 0x379d20: 0xc0de7f4  jal         func_379FD0
label_379d24:
    if (ctx->pc == 0x379D24u) {
        ctx->pc = 0x379D28u;
        goto label_379d28;
    }
    ctx->pc = 0x379D20u;
    SET_GPR_U32(ctx, 31, 0x379D28u);
    ctx->pc = 0x379FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379FD0u, 0x379D20u, 0x379D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379D28u;
label_379d28:
    // 0x379d28: 0x1000000b  b           . + 4 + (0xB << 2)
label_379d2c:
    if (ctx->pc == 0x379D2Cu) {
        ctx->pc = 0x379D30u;
        goto label_379d30;
    }
    ctx->pc = 0x379D28u;
    {
        const bool branch_taken_0x379d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x379d28) {
            ctx->pc = 0x379D58u;
            goto label_379d58;
        }
    }
    ctx->pc = 0x379D30u;
label_379d30:
    // 0x379d30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x379d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_379d34:
    // 0x379d34: 0xa2026608  sb          $v0, 0x6608($s0)
    ctx->pc = 0x379d34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26120), (uint8_t)GPR_U32(ctx, 2));
label_379d38:
    // 0x379d38: 0x8e025dcc  lw          $v0, 0x5DCC($s0)
    ctx->pc = 0x379d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24012)));
label_379d3c:
    // 0x379d3c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x379d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_379d40:
    // 0x379d40: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x379d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_379d44:
    // 0x379d44: 0x2442b9b0  addiu       $v0, $v0, -0x4650
    ctx->pc = 0x379d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949296));
label_379d48:
    // 0x379d48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x379d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_379d4c:
    // 0x379d4c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x379d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_379d50:
    // 0x379d50: 0x40f809  jalr        $v0
label_379d54:
    if (ctx->pc == 0x379D54u) {
        ctx->pc = 0x379D58u;
        goto label_379d58;
    }
    ctx->pc = 0x379D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x379D58u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379D50u, 0x379D58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x379D58u;
label_379d58:
    // 0x379d58: 0x8e035dc0  lw          $v1, 0x5DC0($s0)
    ctx->pc = 0x379d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24000)));
label_379d5c:
    // 0x379d5c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_379d60:
    if (ctx->pc == 0x379D60u) {
        ctx->pc = 0x379D64u;
        goto label_379d64;
    }
    ctx->pc = 0x379D5Cu;
    {
        const bool branch_taken_0x379d5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x379d5c) {
            ctx->pc = 0x379D78u;
            goto label_379d78;
        }
    }
    ctx->pc = 0x379D64u;
label_379d64:
    // 0x379d64: 0x8e035dc8  lw          $v1, 0x5DC8($s0)
    ctx->pc = 0x379d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
label_379d68:
    // 0x379d68: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_379d6c:
    if (ctx->pc == 0x379D6Cu) {
        ctx->pc = 0x379D70u;
        goto label_379d70;
    }
    ctx->pc = 0x379D68u;
    {
        const bool branch_taken_0x379d68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x379d68) {
            ctx->pc = 0x379D78u;
            goto label_379d78;
        }
    }
    ctx->pc = 0x379D70u;
label_379d70:
    // 0x379d70: 0xc0de854  jal         func_37A150
label_379d74:
    if (ctx->pc == 0x379D74u) {
        ctx->pc = 0x379D78u;
        goto label_379d78;
    }
    ctx->pc = 0x379D70u;
    SET_GPR_U32(ctx, 31, 0x379D78u);
    ctx->pc = 0x37A150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A150u, 0x379D70u, 0x379D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379D78u;
label_379d78:
    // 0x379d78: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x379d78u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_379d7c:
    // 0x379d7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x379d7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_379d80:
    // 0x379d80: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x379d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_379d84:
    // 0x379d84: 0x3e00008  jr          $ra
label_379d88:
    if (ctx->pc == 0x379D88u) {
        ctx->pc = 0x379D8Cu;
        goto label_fallthrough_0x379d84;
    }
    ctx->pc = 0x379D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x379d84:
    ctx->pc = 0x379D8Cu;
}
