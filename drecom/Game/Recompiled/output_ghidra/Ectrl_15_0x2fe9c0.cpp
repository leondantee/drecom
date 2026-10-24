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

// Function: Ectrl_15
// Address: 0x2fe9c0 - 0x2fea04
void Ectrl_15_0x2fe9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ectrl_15_0x2fe9c0");
#endif

    switch (ctx->pc) {
        case 0x2fe9c0u: goto label_2fe9c0;
        case 0x2fe9c4u: goto label_2fe9c4;
        case 0x2fe9c8u: goto label_2fe9c8;
        case 0x2fe9ccu: goto label_2fe9cc;
        case 0x2fe9d0u: goto label_2fe9d0;
        case 0x2fe9d4u: goto label_2fe9d4;
        case 0x2fe9d8u: goto label_2fe9d8;
        case 0x2fe9dcu: goto label_2fe9dc;
        case 0x2fe9e0u: goto label_2fe9e0;
        case 0x2fe9e4u: goto label_2fe9e4;
        case 0x2fe9e8u: goto label_2fe9e8;
        case 0x2fe9ecu: goto label_2fe9ec;
        case 0x2fe9f0u: goto label_2fe9f0;
        case 0x2fe9f4u: goto label_2fe9f4;
        case 0x2fe9f8u: goto label_2fe9f8;
        case 0x2fe9fcu: goto label_2fe9fc;
        case 0x2fea00u: goto label_2fea00;
        default: break;
    }

    ctx->pc = 0x2fe9c0u;

label_2fe9c0:
    // 0x2fe9c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fe9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2fe9c4:
    // 0x2fe9c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2fe9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2fe9c8:
    // 0x2fe9c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2fe9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2fe9cc:
    // 0x2fe9cc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2fe9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2fe9d0:
    // 0x2fe9d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2fe9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2fe9d4:
    // 0x2fe9d4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2fe9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2fe9d8:
    // 0x2fe9d8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2fe9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2fe9dc:
    // 0x2fe9dc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2fe9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2fe9e0:
    // 0x2fe9e0: 0x24429160  addiu       $v0, $v0, -0x6EA0
    ctx->pc = 0x2fe9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938976));
label_2fe9e4:
    // 0x2fe9e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fe9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2fe9e8:
    // 0x2fe9e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2fe9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fe9ec:
    // 0x2fe9ec: 0x40f809  jalr        $v0
label_2fe9f0:
    if (ctx->pc == 0x2FE9F0u) {
        ctx->pc = 0x2FE9F4u;
        goto label_2fe9f4;
    }
    ctx->pc = 0x2FE9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FE9F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE9ECu, 0x2FE9F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FE9F4u;
label_2fe9f4:
    // 0x2fe9f4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2fe9f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fe9f8:
    // 0x2fe9f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2fe9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2fe9fc:
    // 0x2fe9fc: 0x3e00008  jr          $ra
label_2fea00:
    if (ctx->pc == 0x2FEA00u) {
        ctx->pc = 0x2FEA04u;
        goto label_fallthrough_0x2fe9fc;
    }
    ctx->pc = 0x2FE9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE9FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2fe9fc:
    ctx->pc = 0x2FEA04u;
}
