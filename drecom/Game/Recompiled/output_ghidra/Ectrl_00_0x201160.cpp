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

// Function: Ectrl_00
// Address: 0x201160 - 0x2011a4
void Ectrl_00_0x201160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ectrl_00_0x201160");
#endif

    switch (ctx->pc) {
        case 0x201160u: goto label_201160;
        case 0x201164u: goto label_201164;
        case 0x201168u: goto label_201168;
        case 0x20116cu: goto label_20116c;
        case 0x201170u: goto label_201170;
        case 0x201174u: goto label_201174;
        case 0x201178u: goto label_201178;
        case 0x20117cu: goto label_20117c;
        case 0x201180u: goto label_201180;
        case 0x201184u: goto label_201184;
        case 0x201188u: goto label_201188;
        case 0x20118cu: goto label_20118c;
        case 0x201190u: goto label_201190;
        case 0x201194u: goto label_201194;
        case 0x201198u: goto label_201198;
        case 0x20119cu: goto label_20119c;
        case 0x2011a0u: goto label_2011a0;
        default: break;
    }

    ctx->pc = 0x201160u;

label_201160:
    // 0x201160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_201164:
    // 0x201164: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x201164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_201168:
    // 0x201168: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x201168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_20116c:
    // 0x20116c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20116cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_201170:
    // 0x201170: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x201170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_201174:
    // 0x201174: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x201174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_201178:
    // 0x201178: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x201178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20117c:
    // 0x20117c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20117cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_201180:
    // 0x201180: 0x24429f98  addiu       $v0, $v0, -0x6068
    ctx->pc = 0x201180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942616));
label_201184:
    // 0x201184: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x201184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_201188:
    // 0x201188: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x201188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20118c:
    // 0x20118c: 0x40f809  jalr        $v0
label_201190:
    if (ctx->pc == 0x201190u) {
        ctx->pc = 0x201194u;
        goto label_201194;
    }
    ctx->pc = 0x20118Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201194u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20118Cu, 0x201194u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201194u;
label_201194:
    // 0x201194: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x201194u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_201198:
    // 0x201198: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x201198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_20119c:
    // 0x20119c: 0x3e00008  jr          $ra
label_2011a0:
    if (ctx->pc == 0x2011A0u) {
        ctx->pc = 0x2011A4u;
        goto label_fallthrough_0x20119c;
    }
    ctx->pc = 0x20119Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20119Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20119c:
    ctx->pc = 0x2011A4u;
}
