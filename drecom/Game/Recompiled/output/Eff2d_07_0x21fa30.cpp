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

// Function: Eff2d_07
// Address: 0x21fa30 - 0x21fa74
void Eff2d_07_0x21fa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff2d_07_0x21fa30");
#endif

    switch (ctx->pc) {
        case 0x21fa30u: goto label_21fa30;
        case 0x21fa34u: goto label_21fa34;
        case 0x21fa38u: goto label_21fa38;
        case 0x21fa3cu: goto label_21fa3c;
        case 0x21fa40u: goto label_21fa40;
        case 0x21fa44u: goto label_21fa44;
        case 0x21fa48u: goto label_21fa48;
        case 0x21fa4cu: goto label_21fa4c;
        case 0x21fa50u: goto label_21fa50;
        case 0x21fa54u: goto label_21fa54;
        case 0x21fa58u: goto label_21fa58;
        case 0x21fa5cu: goto label_21fa5c;
        case 0x21fa60u: goto label_21fa60;
        case 0x21fa64u: goto label_21fa64;
        case 0x21fa68u: goto label_21fa68;
        case 0x21fa6cu: goto label_21fa6c;
        case 0x21fa70u: goto label_21fa70;
        default: break;
    }

    ctx->pc = 0x21fa30u;

label_21fa30:
    // 0x21fa30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21fa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_21fa34:
    // 0x21fa34: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x21fa34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_21fa38:
    // 0x21fa38: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x21fa38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_21fa3c:
    // 0x21fa3c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x21fa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_21fa40:
    // 0x21fa40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x21fa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_21fa44:
    // 0x21fa44: 0x8c420128  lw          $v0, 0x128($v0)
    ctx->pc = 0x21fa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
label_21fa48:
    // 0x21fa48: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x21fa48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21fa4c:
    // 0x21fa4c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x21fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_21fa50:
    // 0x21fa50: 0x2442ac10  addiu       $v0, $v0, -0x53F0
    ctx->pc = 0x21fa50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945808));
label_21fa54:
    // 0x21fa54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21fa54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21fa58:
    // 0x21fa58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21fa5c:
    // 0x21fa5c: 0x40f809  jalr        $v0
label_21fa60:
    if (ctx->pc == 0x21FA60u) {
        ctx->pc = 0x21FA64u;
        goto label_21fa64;
    }
    ctx->pc = 0x21FA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21FA64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FA5Cu, 0x21FA64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21FA64u;
label_21fa64:
    // 0x21fa64: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x21fa64u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21fa68:
    // 0x21fa68: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x21fa68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_21fa6c:
    // 0x21fa6c: 0x3e00008  jr          $ra
label_21fa70:
    if (ctx->pc == 0x21FA70u) {
        ctx->pc = 0x21FA74u;
        goto label_fallthrough_0x21fa6c;
    }
    ctx->pc = 0x21FA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21fa6c:
    ctx->pc = 0x21FA74u;
}
