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

// Function: eff2d_07_move
// Address: 0x21f9e0 - 0x21fa24
void eff2d_07_move_0x21f9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_07_move_0x21f9e0");
#endif

    switch (ctx->pc) {
        case 0x21f9e0u: goto label_21f9e0;
        case 0x21f9e4u: goto label_21f9e4;
        case 0x21f9e8u: goto label_21f9e8;
        case 0x21f9ecu: goto label_21f9ec;
        case 0x21f9f0u: goto label_21f9f0;
        case 0x21f9f4u: goto label_21f9f4;
        case 0x21f9f8u: goto label_21f9f8;
        case 0x21f9fcu: goto label_21f9fc;
        case 0x21fa00u: goto label_21fa00;
        case 0x21fa04u: goto label_21fa04;
        case 0x21fa08u: goto label_21fa08;
        case 0x21fa0cu: goto label_21fa0c;
        case 0x21fa10u: goto label_21fa10;
        case 0x21fa14u: goto label_21fa14;
        case 0x21fa18u: goto label_21fa18;
        case 0x21fa1cu: goto label_21fa1c;
        case 0x21fa20u: goto label_21fa20;
        default: break;
    }

    ctx->pc = 0x21f9e0u;

label_21f9e0:
    // 0x21f9e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21f9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_21f9e4:
    // 0x21f9e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x21f9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_21f9e8:
    // 0x21f9e8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x21f9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_21f9ec:
    // 0x21f9ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x21f9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_21f9f0:
    // 0x21f9f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x21f9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_21f9f4:
    // 0x21f9f4: 0x8c420124  lw          $v0, 0x124($v0)
    ctx->pc = 0x21f9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
label_21f9f8:
    // 0x21f9f8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x21f9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21f9fc:
    // 0x21f9fc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x21f9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_21fa00:
    // 0x21fa00: 0x2442ab50  addiu       $v0, $v0, -0x54B0
    ctx->pc = 0x21fa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945616));
label_21fa04:
    // 0x21fa04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21fa08:
    // 0x21fa08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21fa0c:
    // 0x21fa0c: 0x40f809  jalr        $v0
label_21fa10:
    if (ctx->pc == 0x21FA10u) {
        ctx->pc = 0x21FA14u;
        goto label_21fa14;
    }
    ctx->pc = 0x21FA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21FA14u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FA0Cu, 0x21FA14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21FA14u;
label_21fa14:
    // 0x21fa14: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x21fa14u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21fa18:
    // 0x21fa18: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x21fa18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_21fa1c:
    // 0x21fa1c: 0x3e00008  jr          $ra
label_21fa20:
    if (ctx->pc == 0x21FA20u) {
        ctx->pc = 0x21FA24u;
        goto label_fallthrough_0x21fa1c;
    }
    ctx->pc = 0x21FA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21fa1c:
    ctx->pc = 0x21FA24u;
}
