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

// Function: Eff2d_03
// Address: 0x21dd40 - 0x21dd84
void Eff2d_03_0x21dd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff2d_03_0x21dd40");
#endif

    switch (ctx->pc) {
        case 0x21dd40u: goto label_21dd40;
        case 0x21dd44u: goto label_21dd44;
        case 0x21dd48u: goto label_21dd48;
        case 0x21dd4cu: goto label_21dd4c;
        case 0x21dd50u: goto label_21dd50;
        case 0x21dd54u: goto label_21dd54;
        case 0x21dd58u: goto label_21dd58;
        case 0x21dd5cu: goto label_21dd5c;
        case 0x21dd60u: goto label_21dd60;
        case 0x21dd64u: goto label_21dd64;
        case 0x21dd68u: goto label_21dd68;
        case 0x21dd6cu: goto label_21dd6c;
        case 0x21dd70u: goto label_21dd70;
        case 0x21dd74u: goto label_21dd74;
        case 0x21dd78u: goto label_21dd78;
        case 0x21dd7cu: goto label_21dd7c;
        case 0x21dd80u: goto label_21dd80;
        default: break;
    }

    ctx->pc = 0x21dd40u;

label_21dd40:
    // 0x21dd40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21dd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_21dd44:
    // 0x21dd44: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x21dd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_21dd48:
    // 0x21dd48: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x21dd48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_21dd4c:
    // 0x21dd4c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x21dd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_21dd50:
    // 0x21dd50: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x21dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_21dd54:
    // 0x21dd54: 0x8c420128  lw          $v0, 0x128($v0)
    ctx->pc = 0x21dd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
label_21dd58:
    // 0x21dd58: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x21dd58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21dd5c:
    // 0x21dd5c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x21dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_21dd60:
    // 0x21dd60: 0x2442ab30  addiu       $v0, $v0, -0x54D0
    ctx->pc = 0x21dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945584));
label_21dd64:
    // 0x21dd64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21dd68:
    // 0x21dd68: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21dd6c:
    // 0x21dd6c: 0x40f809  jalr        $v0
label_21dd70:
    if (ctx->pc == 0x21DD70u) {
        ctx->pc = 0x21DD74u;
        goto label_21dd74;
    }
    ctx->pc = 0x21DD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21DD74u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DD6Cu, 0x21DD74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21DD74u;
label_21dd74:
    // 0x21dd74: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x21dd74u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21dd78:
    // 0x21dd78: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x21dd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_21dd7c:
    // 0x21dd7c: 0x3e00008  jr          $ra
label_21dd80:
    if (ctx->pc == 0x21DD80u) {
        ctx->pc = 0x21DD84u;
        goto label_fallthrough_0x21dd7c;
    }
    ctx->pc = 0x21DD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DD7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21dd7c:
    ctx->pc = 0x21DD84u;
}
