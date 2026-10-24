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

// Function: Om2e_R0_damage
// Address: 0x378d20 - 0x378d68
void Om2e_R0_damage_0x378d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om2e_R0_damage_0x378d20");
#endif

    switch (ctx->pc) {
        case 0x378d20u: goto label_378d20;
        case 0x378d24u: goto label_378d24;
        case 0x378d28u: goto label_378d28;
        case 0x378d2cu: goto label_378d2c;
        case 0x378d30u: goto label_378d30;
        case 0x378d34u: goto label_378d34;
        case 0x378d38u: goto label_378d38;
        case 0x378d3cu: goto label_378d3c;
        case 0x378d40u: goto label_378d40;
        case 0x378d44u: goto label_378d44;
        case 0x378d48u: goto label_378d48;
        case 0x378d4cu: goto label_378d4c;
        case 0x378d50u: goto label_378d50;
        case 0x378d54u: goto label_378d54;
        case 0x378d58u: goto label_378d58;
        case 0x378d5cu: goto label_378d5c;
        case 0x378d60u: goto label_378d60;
        case 0x378d64u: goto label_378d64;
        default: break;
    }

    ctx->pc = 0x378d20u;

label_378d20:
    // 0x378d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x378d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_378d24:
    // 0x378d24: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x378d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_378d28:
    // 0x378d28: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x378d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_378d2c:
    // 0x378d2c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x378d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_378d30:
    // 0x378d30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x378d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_378d34:
    // 0x378d34: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x378d34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_378d38:
    // 0x378d38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x378d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_378d3c:
    // 0x378d3c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x378d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_378d40:
    // 0x378d40: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x378d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_378d44:
    // 0x378d44: 0x2442b710  addiu       $v0, $v0, -0x48F0
    ctx->pc = 0x378d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948624));
label_378d48:
    // 0x378d48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x378d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_378d4c:
    // 0x378d4c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x378d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_378d50:
    // 0x378d50: 0x40f809  jalr        $v0
label_378d54:
    if (ctx->pc == 0x378D54u) {
        ctx->pc = 0x378D58u;
        goto label_378d58;
    }
    ctx->pc = 0x378D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x378D58u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378D50u, 0x378D58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x378D58u;
label_378d58:
    // 0x378d58: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x378d58u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_378d5c:
    // 0x378d5c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x378d5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_378d60:
    // 0x378d60: 0x3e00008  jr          $ra
label_378d64:
    if (ctx->pc == 0x378D64u) {
        ctx->pc = 0x378D68u;
        goto label_fallthrough_0x378d60;
    }
    ctx->pc = 0x378D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x378d60:
    ctx->pc = 0x378D68u;
}
