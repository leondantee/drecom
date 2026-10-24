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

// Function: Ectrl_13
// Address: 0x2fda80 - 0x2fdac4
void Ectrl_13_0x2fda80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ectrl_13_0x2fda80");
#endif

    switch (ctx->pc) {
        case 0x2fda80u: goto label_2fda80;
        case 0x2fda84u: goto label_2fda84;
        case 0x2fda88u: goto label_2fda88;
        case 0x2fda8cu: goto label_2fda8c;
        case 0x2fda90u: goto label_2fda90;
        case 0x2fda94u: goto label_2fda94;
        case 0x2fda98u: goto label_2fda98;
        case 0x2fda9cu: goto label_2fda9c;
        case 0x2fdaa0u: goto label_2fdaa0;
        case 0x2fdaa4u: goto label_2fdaa4;
        case 0x2fdaa8u: goto label_2fdaa8;
        case 0x2fdaacu: goto label_2fdaac;
        case 0x2fdab0u: goto label_2fdab0;
        case 0x2fdab4u: goto label_2fdab4;
        case 0x2fdab8u: goto label_2fdab8;
        case 0x2fdabcu: goto label_2fdabc;
        case 0x2fdac0u: goto label_2fdac0;
        default: break;
    }

    ctx->pc = 0x2fda80u;

label_2fda80:
    // 0x2fda80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fda80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2fda84:
    // 0x2fda84: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2fda84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2fda88:
    // 0x2fda88: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2fda88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2fda8c:
    // 0x2fda8c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2fda8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2fda90:
    // 0x2fda90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2fda90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2fda94:
    // 0x2fda94: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2fda94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2fda98:
    // 0x2fda98: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2fda98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2fda9c:
    // 0x2fda9c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2fda9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2fdaa0:
    // 0x2fdaa0: 0x24429100  addiu       $v0, $v0, -0x6F00
    ctx->pc = 0x2fdaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938880));
label_2fdaa4:
    // 0x2fdaa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fdaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2fdaa8:
    // 0x2fdaa8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2fdaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fdaac:
    // 0x2fdaac: 0x40f809  jalr        $v0
label_2fdab0:
    if (ctx->pc == 0x2FDAB0u) {
        ctx->pc = 0x2FDAB4u;
        goto label_2fdab4;
    }
    ctx->pc = 0x2FDAACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FDAB4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDAACu, 0x2FDAB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FDAB4u;
label_2fdab4:
    // 0x2fdab4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2fdab4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fdab8:
    // 0x2fdab8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2fdab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2fdabc:
    // 0x2fdabc: 0x3e00008  jr          $ra
label_2fdac0:
    if (ctx->pc == 0x2FDAC0u) {
        ctx->pc = 0x2FDAC4u;
        goto label_fallthrough_0x2fdabc;
    }
    ctx->pc = 0x2FDABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2fdabc:
    ctx->pc = 0x2FDAC4u;
}
