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

// Function: Ectrl_01
// Address: 0x24b6c0 - 0x24b704
void Ectrl_01_0x24b6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ectrl_01_0x24b6c0");
#endif

    switch (ctx->pc) {
        case 0x24b6c0u: goto label_24b6c0;
        case 0x24b6c4u: goto label_24b6c4;
        case 0x24b6c8u: goto label_24b6c8;
        case 0x24b6ccu: goto label_24b6cc;
        case 0x24b6d0u: goto label_24b6d0;
        case 0x24b6d4u: goto label_24b6d4;
        case 0x24b6d8u: goto label_24b6d8;
        case 0x24b6dcu: goto label_24b6dc;
        case 0x24b6e0u: goto label_24b6e0;
        case 0x24b6e4u: goto label_24b6e4;
        case 0x24b6e8u: goto label_24b6e8;
        case 0x24b6ecu: goto label_24b6ec;
        case 0x24b6f0u: goto label_24b6f0;
        case 0x24b6f4u: goto label_24b6f4;
        case 0x24b6f8u: goto label_24b6f8;
        case 0x24b6fcu: goto label_24b6fc;
        case 0x24b700u: goto label_24b700;
        default: break;
    }

    ctx->pc = 0x24b6c0u;

label_24b6c0:
    // 0x24b6c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24b6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_24b6c4:
    // 0x24b6c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x24b6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_24b6c8:
    // 0x24b6c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x24b6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_24b6cc:
    // 0x24b6cc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x24b6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24b6d0:
    // 0x24b6d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24b6d4:
    // 0x24b6d4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x24b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_24b6d8:
    // 0x24b6d8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x24b6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24b6dc:
    // 0x24b6dc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x24b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_24b6e0:
    // 0x24b6e0: 0x2442b5c0  addiu       $v0, $v0, -0x4A40
    ctx->pc = 0x24b6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948288));
label_24b6e4:
    // 0x24b6e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24b6e8:
    // 0x24b6e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24b6ec:
    // 0x24b6ec: 0x40f809  jalr        $v0
label_24b6f0:
    if (ctx->pc == 0x24B6F0u) {
        ctx->pc = 0x24B6F4u;
        goto label_24b6f4;
    }
    ctx->pc = 0x24B6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24B6F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B6ECu, 0x24B6F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24B6F4u;
label_24b6f4:
    // 0x24b6f4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x24b6f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24b6f8:
    // 0x24b6f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x24b6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_24b6fc:
    // 0x24b6fc: 0x3e00008  jr          $ra
label_24b700:
    if (ctx->pc == 0x24B700u) {
        ctx->pc = 0x24B704u;
        goto label_fallthrough_0x24b6fc;
    }
    ctx->pc = 0x24B6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24b6fc:
    ctx->pc = 0x24B704u;
}
