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

// Function: Eff2d_02
// Address: 0x1a9e90 - 0x1a9ed4
void Eff2d_02_0x1a9e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff2d_02_0x1a9e90");
#endif

    switch (ctx->pc) {
        case 0x1a9e90u: goto label_1a9e90;
        case 0x1a9e94u: goto label_1a9e94;
        case 0x1a9e98u: goto label_1a9e98;
        case 0x1a9e9cu: goto label_1a9e9c;
        case 0x1a9ea0u: goto label_1a9ea0;
        case 0x1a9ea4u: goto label_1a9ea4;
        case 0x1a9ea8u: goto label_1a9ea8;
        case 0x1a9eacu: goto label_1a9eac;
        case 0x1a9eb0u: goto label_1a9eb0;
        case 0x1a9eb4u: goto label_1a9eb4;
        case 0x1a9eb8u: goto label_1a9eb8;
        case 0x1a9ebcu: goto label_1a9ebc;
        case 0x1a9ec0u: goto label_1a9ec0;
        case 0x1a9ec4u: goto label_1a9ec4;
        case 0x1a9ec8u: goto label_1a9ec8;
        case 0x1a9eccu: goto label_1a9ecc;
        case 0x1a9ed0u: goto label_1a9ed0;
        default: break;
    }

    ctx->pc = 0x1a9e90u;

label_1a9e90:
    // 0x1a9e90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a9e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a9e94:
    // 0x1a9e94: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1a9e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_1a9e98:
    // 0x1a9e98: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1a9e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_1a9e9c:
    // 0x1a9e9c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1a9e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1a9ea0:
    // 0x1a9ea0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1a9ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1a9ea4:
    // 0x1a9ea4: 0x8c420128  lw          $v0, 0x128($v0)
    ctx->pc = 0x1a9ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
label_1a9ea8:
    // 0x1a9ea8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a9ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a9eac:
    // 0x1a9eac: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1a9eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1a9eb0:
    // 0x1a9eb0: 0x24428168  addiu       $v0, $v0, -0x7E98
    ctx->pc = 0x1a9eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934888));
label_1a9eb4:
    // 0x1a9eb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a9eb8:
    // 0x1a9eb8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a9eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a9ebc:
    // 0x1a9ebc: 0x40f809  jalr        $v0
label_1a9ec0:
    if (ctx->pc == 0x1A9EC0u) {
        ctx->pc = 0x1A9EC4u;
        goto label_1a9ec4;
    }
    ctx->pc = 0x1A9EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A9EC4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9EBCu, 0x1A9EC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9EC4u;
label_1a9ec4:
    // 0x1a9ec4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1a9ec4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a9ec8:
    // 0x1a9ec8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a9ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a9ecc:
    // 0x1a9ecc: 0x3e00008  jr          $ra
label_1a9ed0:
    if (ctx->pc == 0x1A9ED0u) {
        ctx->pc = 0x1A9ED4u;
        goto label_fallthrough_0x1a9ecc;
    }
    ctx->pc = 0x1A9ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a9ecc:
    ctx->pc = 0x1A9ED4u;
}
