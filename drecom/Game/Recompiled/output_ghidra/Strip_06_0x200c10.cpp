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

// Function: Strip_06
// Address: 0x200c10 - 0x200c54
void Strip_06_0x200c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Strip_06_0x200c10");
#endif

    switch (ctx->pc) {
        case 0x200c10u: goto label_200c10;
        case 0x200c14u: goto label_200c14;
        case 0x200c18u: goto label_200c18;
        case 0x200c1cu: goto label_200c1c;
        case 0x200c20u: goto label_200c20;
        case 0x200c24u: goto label_200c24;
        case 0x200c28u: goto label_200c28;
        case 0x200c2cu: goto label_200c2c;
        case 0x200c30u: goto label_200c30;
        case 0x200c34u: goto label_200c34;
        case 0x200c38u: goto label_200c38;
        case 0x200c3cu: goto label_200c3c;
        case 0x200c40u: goto label_200c40;
        case 0x200c44u: goto label_200c44;
        case 0x200c48u: goto label_200c48;
        case 0x200c4cu: goto label_200c4c;
        case 0x200c50u: goto label_200c50;
        default: break;
    }

    ctx->pc = 0x200c10u;

label_200c10:
    // 0x200c10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x200c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_200c14:
    // 0x200c14: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x200c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_200c18:
    // 0x200c18: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x200c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_200c1c:
    // 0x200c1c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x200c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_200c20:
    // 0x200c20: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x200c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_200c24:
    // 0x200c24: 0x8c420358  lw          $v0, 0x358($v0)
    ctx->pc = 0x200c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 856)));
label_200c28:
    // 0x200c28: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x200c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_200c2c:
    // 0x200c2c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x200c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_200c30:
    // 0x200c30: 0x24429f80  addiu       $v0, $v0, -0x6080
    ctx->pc = 0x200c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942592));
label_200c34:
    // 0x200c34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x200c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_200c38:
    // 0x200c38: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x200c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_200c3c:
    // 0x200c3c: 0x40f809  jalr        $v0
label_200c40:
    if (ctx->pc == 0x200C40u) {
        ctx->pc = 0x200C44u;
        goto label_200c44;
    }
    ctx->pc = 0x200C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200C44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200C3Cu, 0x200C44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200C44u;
label_200c44:
    // 0x200c44: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x200c44u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_200c48:
    // 0x200c48: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x200c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_200c4c:
    // 0x200c4c: 0x3e00008  jr          $ra
label_200c50:
    if (ctx->pc == 0x200C50u) {
        ctx->pc = 0x200C54u;
        goto label_fallthrough_0x200c4c;
    }
    ctx->pc = 0x200C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x200c4c:
    ctx->pc = 0x200C54u;
}
