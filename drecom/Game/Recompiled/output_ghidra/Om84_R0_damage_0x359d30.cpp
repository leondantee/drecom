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

// Function: Om84_R0_damage
// Address: 0x359d30 - 0x359d78
void Om84_R0_damage_0x359d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om84_R0_damage_0x359d30");
#endif

    switch (ctx->pc) {
        case 0x359d30u: goto label_359d30;
        case 0x359d34u: goto label_359d34;
        case 0x359d38u: goto label_359d38;
        case 0x359d3cu: goto label_359d3c;
        case 0x359d40u: goto label_359d40;
        case 0x359d44u: goto label_359d44;
        case 0x359d48u: goto label_359d48;
        case 0x359d4cu: goto label_359d4c;
        case 0x359d50u: goto label_359d50;
        case 0x359d54u: goto label_359d54;
        case 0x359d58u: goto label_359d58;
        case 0x359d5cu: goto label_359d5c;
        case 0x359d60u: goto label_359d60;
        case 0x359d64u: goto label_359d64;
        case 0x359d68u: goto label_359d68;
        case 0x359d6cu: goto label_359d6c;
        case 0x359d70u: goto label_359d70;
        case 0x359d74u: goto label_359d74;
        default: break;
    }

    ctx->pc = 0x359d30u;

label_359d30:
    // 0x359d30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x359d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_359d34:
    // 0x359d34: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x359d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_359d38:
    // 0x359d38: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x359d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_359d3c:
    // 0x359d3c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x359d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_359d40:
    // 0x359d40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x359d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_359d44:
    // 0x359d44: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x359d44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_359d48:
    // 0x359d48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x359d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_359d4c:
    // 0x359d4c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x359d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_359d50:
    // 0x359d50: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x359d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_359d54:
    // 0x359d54: 0x2442a888  addiu       $v0, $v0, -0x5778
    ctx->pc = 0x359d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944904));
label_359d58:
    // 0x359d58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x359d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_359d5c:
    // 0x359d5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x359d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_359d60:
    // 0x359d60: 0x40f809  jalr        $v0
label_359d64:
    if (ctx->pc == 0x359D64u) {
        ctx->pc = 0x359D68u;
        goto label_359d68;
    }
    ctx->pc = 0x359D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x359D68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359D60u, 0x359D68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x359D68u;
label_359d68:
    // 0x359d68: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x359d68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_359d6c:
    // 0x359d6c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x359d6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_359d70:
    // 0x359d70: 0x3e00008  jr          $ra
label_359d74:
    if (ctx->pc == 0x359D74u) {
        ctx->pc = 0x359D78u;
        goto label_fallthrough_0x359d70;
    }
    ctx->pc = 0x359D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x359d70:
    ctx->pc = 0x359D78u;
}
