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

// Function: Eff2d_0a
// Address: 0x2204c0 - 0x220504
void Eff2d_0a_0x2204c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff2d_0a_0x2204c0");
#endif

    switch (ctx->pc) {
        case 0x2204c0u: goto label_2204c0;
        case 0x2204c4u: goto label_2204c4;
        case 0x2204c8u: goto label_2204c8;
        case 0x2204ccu: goto label_2204cc;
        case 0x2204d0u: goto label_2204d0;
        case 0x2204d4u: goto label_2204d4;
        case 0x2204d8u: goto label_2204d8;
        case 0x2204dcu: goto label_2204dc;
        case 0x2204e0u: goto label_2204e0;
        case 0x2204e4u: goto label_2204e4;
        case 0x2204e8u: goto label_2204e8;
        case 0x2204ecu: goto label_2204ec;
        case 0x2204f0u: goto label_2204f0;
        case 0x2204f4u: goto label_2204f4;
        case 0x2204f8u: goto label_2204f8;
        case 0x2204fcu: goto label_2204fc;
        case 0x220500u: goto label_220500;
        default: break;
    }

    ctx->pc = 0x2204c0u;

label_2204c0:
    // 0x2204c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2204c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2204c4:
    // 0x2204c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2204c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2204c8:
    // 0x2204c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2204c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2204cc:
    // 0x2204cc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2204ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2204d0:
    // 0x2204d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2204d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2204d4:
    // 0x2204d4: 0x8c420128  lw          $v0, 0x128($v0)
    ctx->pc = 0x2204d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
label_2204d8:
    // 0x2204d8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2204d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2204dc:
    // 0x2204dc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2204dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2204e0:
    // 0x2204e0: 0x2442ac40  addiu       $v0, $v0, -0x53C0
    ctx->pc = 0x2204e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945856));
label_2204e4:
    // 0x2204e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2204e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2204e8:
    // 0x2204e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2204e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2204ec:
    // 0x2204ec: 0x40f809  jalr        $v0
label_2204f0:
    if (ctx->pc == 0x2204F0u) {
        ctx->pc = 0x2204F4u;
        goto label_2204f4;
    }
    ctx->pc = 0x2204ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2204F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2204ECu, 0x2204F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2204F4u;
label_2204f4:
    // 0x2204f4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2204f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2204f8:
    // 0x2204f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2204f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2204fc:
    // 0x2204fc: 0x3e00008  jr          $ra
label_220500:
    if (ctx->pc == 0x220500u) {
        ctx->pc = 0x220504u;
        goto label_fallthrough_0x2204fc;
    }
    ctx->pc = 0x2204FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2204FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2204fc:
    ctx->pc = 0x220504u;
}
