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

// Function: Em03_R0_die
// Address: 0x2cbc40 - 0x2cbc88
void Em03_R0_die_0x2cbc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em03_R0_die_0x2cbc40");
#endif

    switch (ctx->pc) {
        case 0x2cbc40u: goto label_2cbc40;
        case 0x2cbc44u: goto label_2cbc44;
        case 0x2cbc48u: goto label_2cbc48;
        case 0x2cbc4cu: goto label_2cbc4c;
        case 0x2cbc50u: goto label_2cbc50;
        case 0x2cbc54u: goto label_2cbc54;
        case 0x2cbc58u: goto label_2cbc58;
        case 0x2cbc5cu: goto label_2cbc5c;
        case 0x2cbc60u: goto label_2cbc60;
        case 0x2cbc64u: goto label_2cbc64;
        case 0x2cbc68u: goto label_2cbc68;
        case 0x2cbc6cu: goto label_2cbc6c;
        case 0x2cbc70u: goto label_2cbc70;
        case 0x2cbc74u: goto label_2cbc74;
        case 0x2cbc78u: goto label_2cbc78;
        case 0x2cbc7cu: goto label_2cbc7c;
        case 0x2cbc80u: goto label_2cbc80;
        case 0x2cbc84u: goto label_2cbc84;
        default: break;
    }

    ctx->pc = 0x2cbc40u;

label_2cbc40:
    // 0x2cbc40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cbc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2cbc44:
    // 0x2cbc44: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2cbc44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2cbc48:
    // 0x2cbc48: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2cbc48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2cbc4c:
    // 0x2cbc4c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2cbc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2cbc50:
    // 0x2cbc50: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2cbc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2cbc54:
    // 0x2cbc54: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2cbc54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2cbc58:
    // 0x2cbc58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cbc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2cbc5c:
    // 0x2cbc5c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2cbc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2cbc60:
    // 0x2cbc60: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2cbc60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2cbc64:
    // 0x2cbc64: 0x244281a0  addiu       $v0, $v0, -0x7E60
    ctx->pc = 0x2cbc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934944));
label_2cbc68:
    // 0x2cbc68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cbc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2cbc6c:
    // 0x2cbc6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cbc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cbc70:
    // 0x2cbc70: 0x40f809  jalr        $v0
label_2cbc74:
    if (ctx->pc == 0x2CBC74u) {
        ctx->pc = 0x2CBC78u;
        goto label_2cbc78;
    }
    ctx->pc = 0x2CBC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CBC78u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBC70u, 0x2CBC78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CBC78u;
label_2cbc78:
    // 0x2cbc78: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2cbc78u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cbc7c:
    // 0x2cbc7c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2cbc7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2cbc80:
    // 0x2cbc80: 0x3e00008  jr          $ra
label_2cbc84:
    if (ctx->pc == 0x2CBC84u) {
        ctx->pc = 0x2CBC88u;
        goto label_fallthrough_0x2cbc80;
    }
    ctx->pc = 0x2CBC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2cbc80:
    ctx->pc = 0x2CBC88u;
}
