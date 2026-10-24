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

// Function: Weapon_menu
// Address: 0x284ba0 - 0x284ca0
void Weapon_menu_0x284ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Weapon_menu_0x284ba0");
#endif

    switch (ctx->pc) {
        case 0x284ba0u: goto label_284ba0;
        case 0x284ba4u: goto label_284ba4;
        case 0x284ba8u: goto label_284ba8;
        case 0x284bacu: goto label_284bac;
        case 0x284bb0u: goto label_284bb0;
        case 0x284bb4u: goto label_284bb4;
        case 0x284bb8u: goto label_284bb8;
        case 0x284bbcu: goto label_284bbc;
        case 0x284bc0u: goto label_284bc0;
        case 0x284bc4u: goto label_284bc4;
        case 0x284bc8u: goto label_284bc8;
        case 0x284bccu: goto label_284bcc;
        case 0x284bd0u: goto label_284bd0;
        case 0x284bd4u: goto label_284bd4;
        case 0x284bd8u: goto label_284bd8;
        case 0x284bdcu: goto label_284bdc;
        case 0x284be0u: goto label_284be0;
        case 0x284be4u: goto label_284be4;
        case 0x284be8u: goto label_284be8;
        case 0x284becu: goto label_284bec;
        case 0x284bf0u: goto label_284bf0;
        case 0x284bf4u: goto label_284bf4;
        case 0x284bf8u: goto label_284bf8;
        case 0x284bfcu: goto label_284bfc;
        case 0x284c00u: goto label_284c00;
        case 0x284c04u: goto label_284c04;
        case 0x284c08u: goto label_284c08;
        case 0x284c0cu: goto label_284c0c;
        case 0x284c10u: goto label_284c10;
        case 0x284c14u: goto label_284c14;
        case 0x284c18u: goto label_284c18;
        case 0x284c1cu: goto label_284c1c;
        case 0x284c20u: goto label_284c20;
        case 0x284c24u: goto label_284c24;
        case 0x284c28u: goto label_284c28;
        case 0x284c2cu: goto label_284c2c;
        case 0x284c30u: goto label_284c30;
        case 0x284c34u: goto label_284c34;
        case 0x284c38u: goto label_284c38;
        case 0x284c3cu: goto label_284c3c;
        case 0x284c40u: goto label_284c40;
        case 0x284c44u: goto label_284c44;
        case 0x284c48u: goto label_284c48;
        case 0x284c4cu: goto label_284c4c;
        case 0x284c50u: goto label_284c50;
        case 0x284c54u: goto label_284c54;
        case 0x284c58u: goto label_284c58;
        case 0x284c5cu: goto label_284c5c;
        case 0x284c60u: goto label_284c60;
        case 0x284c64u: goto label_284c64;
        case 0x284c68u: goto label_284c68;
        case 0x284c6cu: goto label_284c6c;
        case 0x284c70u: goto label_284c70;
        case 0x284c74u: goto label_284c74;
        case 0x284c78u: goto label_284c78;
        case 0x284c7cu: goto label_284c7c;
        case 0x284c80u: goto label_284c80;
        case 0x284c84u: goto label_284c84;
        case 0x284c88u: goto label_284c88;
        case 0x284c8cu: goto label_284c8c;
        case 0x284c90u: goto label_284c90;
        case 0x284c94u: goto label_284c94;
        case 0x284c98u: goto label_284c98;
        case 0x284c9cu: goto label_284c9c;
        default: break;
    }

    ctx->pc = 0x284ba0u;

label_284ba0:
    // 0x284ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x284ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_284ba4:
    // 0x284ba4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x284ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_284ba8:
    // 0x284ba8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x284ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_284bac:
    // 0x284bac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x284bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_284bb0:
    // 0x284bb0: 0x24506150  addiu       $s0, $v0, 0x6150
    ctx->pc = 0x284bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
label_284bb4:
    // 0x284bb4: 0x920265ad  lbu         $v0, 0x65AD($s0)
    ctx->pc = 0x284bb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26029)));
label_284bb8:
    // 0x284bb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x284bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_284bbc:
    // 0x284bbc: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_284bc0:
    if (ctx->pc == 0x284BC0u) {
        ctx->pc = 0x284BC4u;
        goto label_284bc4;
    }
    ctx->pc = 0x284BBCu;
    {
        const bool branch_taken_0x284bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284bbc) {
            ctx->pc = 0x284C68u;
            goto label_284c68;
        }
    }
    ctx->pc = 0x284BC4u;
label_284bc4:
    // 0x284bc4: 0x8e035dc8  lw          $v1, 0x5DC8($s0)
    ctx->pc = 0x284bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
label_284bc8:
    // 0x284bc8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x284bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_284bcc:
    // 0x284bcc: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
label_284bd0:
    if (ctx->pc == 0x284BD0u) {
        ctx->pc = 0x284BD4u;
        goto label_284bd4;
    }
    ctx->pc = 0x284BCCu;
    {
        const bool branch_taken_0x284bcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x284bcc) {
            ctx->pc = 0x284C40u;
            goto label_284c40;
        }
    }
    ctx->pc = 0x284BD4u;
label_284bd4:
    // 0x284bd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x284bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_284bd8:
    // 0x284bd8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_284bdc:
    if (ctx->pc == 0x284BDCu) {
        ctx->pc = 0x284BE0u;
        goto label_284be0;
    }
    ctx->pc = 0x284BD8u;
    {
        const bool branch_taken_0x284bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x284bd8) {
            ctx->pc = 0x284C00u;
            goto label_284c00;
        }
    }
    ctx->pc = 0x284BE0u;
label_284be0:
    // 0x284be0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_284be4:
    if (ctx->pc == 0x284BE4u) {
        ctx->pc = 0x284BE8u;
        goto label_284be8;
    }
    ctx->pc = 0x284BE0u;
    {
        const bool branch_taken_0x284be0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x284be0) {
            ctx->pc = 0x284BF0u;
            goto label_284bf0;
        }
    }
    ctx->pc = 0x284BE8u;
label_284be8:
    // 0x284be8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_284bec:
    if (ctx->pc == 0x284BECu) {
        ctx->pc = 0x284BF0u;
        goto label_284bf0;
    }
    ctx->pc = 0x284BE8u;
    {
        const bool branch_taken_0x284be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284be8) {
            ctx->pc = 0x284C68u;
            goto label_284c68;
        }
    }
    ctx->pc = 0x284BF0u;
label_284bf0:
    // 0x284bf0: 0xc0a1328  jal         func_284CA0
label_284bf4:
    if (ctx->pc == 0x284BF4u) {
        ctx->pc = 0x284BF8u;
        goto label_284bf8;
    }
    ctx->pc = 0x284BF0u;
    SET_GPR_U32(ctx, 31, 0x284BF8u);
    ctx->pc = 0x284CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284CA0u, 0x284BF0u, 0x284BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284BF8u;
label_284bf8:
    // 0x284bf8: 0x1000001b  b           . + 4 + (0x1B << 2)
label_284bfc:
    if (ctx->pc == 0x284BFCu) {
        ctx->pc = 0x284C00u;
        goto label_284c00;
    }
    ctx->pc = 0x284BF8u;
    {
        const bool branch_taken_0x284bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284bf8) {
            ctx->pc = 0x284C68u;
            goto label_284c68;
        }
    }
    ctx->pc = 0x284C00u;
label_284c00:
    // 0x284c00: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x284c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
label_284c04:
    // 0x284c04: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x284c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_284c08:
    // 0x284c08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_284c0c:
    if (ctx->pc == 0x284C0Cu) {
        ctx->pc = 0x284C10u;
        goto label_284c10;
    }
    ctx->pc = 0x284C08u;
    {
        const bool branch_taken_0x284c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284c08) {
            ctx->pc = 0x284C20u;
            goto label_284c20;
        }
    }
    ctx->pc = 0x284C10u;
label_284c10:
    // 0x284c10: 0xc0a15a8  jal         func_2856A0
label_284c14:
    if (ctx->pc == 0x284C14u) {
        ctx->pc = 0x284C18u;
        goto label_284c18;
    }
    ctx->pc = 0x284C10u;
    SET_GPR_U32(ctx, 31, 0x284C18u);
    ctx->pc = 0x2856A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2856A0u, 0x284C10u, 0x284C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C18u;
label_284c18:
    // 0x284c18: 0x10000013  b           . + 4 + (0x13 << 2)
label_284c1c:
    if (ctx->pc == 0x284C1Cu) {
        ctx->pc = 0x284C20u;
        goto label_284c20;
    }
    ctx->pc = 0x284C18u;
    {
        const bool branch_taken_0x284c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284c18) {
            ctx->pc = 0x284C68u;
            goto label_284c68;
        }
    }
    ctx->pc = 0x284C20u;
label_284c20:
    // 0x284c20: 0x8e035dc0  lw          $v1, 0x5DC0($s0)
    ctx->pc = 0x284c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24000)));
label_284c24:
    // 0x284c24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x284c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_284c28:
    // 0x284c28: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_284c2c:
    if (ctx->pc == 0x284C2Cu) {
        ctx->pc = 0x284C30u;
        goto label_284c30;
    }
    ctx->pc = 0x284C28u;
    {
        const bool branch_taken_0x284c28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x284c28) {
            ctx->pc = 0x284C68u;
            goto label_284c68;
        }
    }
    ctx->pc = 0x284C30u;
label_284c30:
    // 0x284c30: 0xc0a1630  jal         func_2858C0
label_284c34:
    if (ctx->pc == 0x284C34u) {
        ctx->pc = 0x284C38u;
        goto label_284c38;
    }
    ctx->pc = 0x284C30u;
    SET_GPR_U32(ctx, 31, 0x284C38u);
    ctx->pc = 0x2858C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2858C0u, 0x284C30u, 0x284C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C38u;
label_284c38:
    // 0x284c38: 0x1000000b  b           . + 4 + (0xB << 2)
label_284c3c:
    if (ctx->pc == 0x284C3Cu) {
        ctx->pc = 0x284C40u;
        goto label_284c40;
    }
    ctx->pc = 0x284C38u;
    {
        const bool branch_taken_0x284c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284c38) {
            ctx->pc = 0x284C68u;
            goto label_284c68;
        }
    }
    ctx->pc = 0x284C40u;
label_284c40:
    // 0x284c40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x284c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_284c44:
    // 0x284c44: 0xa2026608  sb          $v0, 0x6608($s0)
    ctx->pc = 0x284c44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26120), (uint8_t)GPR_U32(ctx, 2));
label_284c48:
    // 0x284c48: 0x8e025dcc  lw          $v0, 0x5DCC($s0)
    ctx->pc = 0x284c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24012)));
label_284c4c:
    // 0x284c4c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x284c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_284c50:
    // 0x284c50: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x284c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_284c54:
    // 0x284c54: 0x24426150  addiu       $v0, $v0, 0x6150
    ctx->pc = 0x284c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
label_284c58:
    // 0x284c58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x284c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_284c5c:
    // 0x284c5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x284c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_284c60:
    // 0x284c60: 0x40f809  jalr        $v0
label_284c64:
    if (ctx->pc == 0x284C64u) {
        ctx->pc = 0x284C68u;
        goto label_284c68;
    }
    ctx->pc = 0x284C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x284C68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284C60u, 0x284C68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x284C68u;
label_284c68:
    // 0x284c68: 0x8e025dc8  lw          $v0, 0x5DC8($s0)
    ctx->pc = 0x284c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
label_284c6c:
    // 0x284c6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_284c70:
    if (ctx->pc == 0x284C70u) {
        ctx->pc = 0x284C74u;
        goto label_284c74;
    }
    ctx->pc = 0x284C6Cu;
    {
        const bool branch_taken_0x284c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284c6c) {
            ctx->pc = 0x284C7Cu;
            goto label_284c7c;
        }
    }
    ctx->pc = 0x284C74u;
label_284c74:
    // 0x284c74: 0xc0a19f0  jal         func_2867C0
label_284c78:
    if (ctx->pc == 0x284C78u) {
        ctx->pc = 0x284C7Cu;
        goto label_284c7c;
    }
    ctx->pc = 0x284C74u;
    SET_GPR_U32(ctx, 31, 0x284C7Cu);
    ctx->pc = 0x2867C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2867C0u, 0x284C74u, 0x284C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C7Cu;
label_284c7c:
    // 0x284c7c: 0xc0ca9c0  jal         func_32A700
label_284c80:
    if (ctx->pc == 0x284C80u) {
        ctx->pc = 0x284C84u;
        goto label_284c84;
    }
    ctx->pc = 0x284C7Cu;
    SET_GPR_U32(ctx, 31, 0x284C84u);
    ctx->pc = 0x32A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A700u, 0x284C7Cu, 0x284C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C84u;
label_284c84:
    // 0x284c84: 0xc0cb80c  jal         func_32E030
label_284c88:
    if (ctx->pc == 0x284C88u) {
        ctx->pc = 0x284C8Cu;
        goto label_284c8c;
    }
    ctx->pc = 0x284C84u;
    SET_GPR_U32(ctx, 31, 0x284C8Cu);
    ctx->pc = 0x32E030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E030u, 0x284C84u, 0x284C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C8Cu;
label_284c8c:
    // 0x284c8c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x284c8cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_284c90:
    // 0x284c90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x284c90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_284c94:
    // 0x284c94: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x284c94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_284c98:
    // 0x284c98: 0x3e00008  jr          $ra
label_284c9c:
    if (ctx->pc == 0x284C9Cu) {
        ctx->pc = 0x284CA0u;
        goto label_fallthrough_0x284c98;
    }
    ctx->pc = 0x284C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x284c98:
    ctx->pc = 0x284CA0u;
}
