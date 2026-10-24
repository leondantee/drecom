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

// Function: Eff2d_0c
// Address: 0x1aa9f0 - 0x1aaa74
void Eff2d_0c_0x1aa9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff2d_0c_0x1aa9f0");
#endif

    switch (ctx->pc) {
        case 0x1aa9f0u: goto label_1aa9f0;
        case 0x1aa9f4u: goto label_1aa9f4;
        case 0x1aa9f8u: goto label_1aa9f8;
        case 0x1aa9fcu: goto label_1aa9fc;
        case 0x1aaa00u: goto label_1aaa00;
        case 0x1aaa04u: goto label_1aaa04;
        case 0x1aaa08u: goto label_1aaa08;
        case 0x1aaa0cu: goto label_1aaa0c;
        case 0x1aaa10u: goto label_1aaa10;
        case 0x1aaa14u: goto label_1aaa14;
        case 0x1aaa18u: goto label_1aaa18;
        case 0x1aaa1cu: goto label_1aaa1c;
        case 0x1aaa20u: goto label_1aaa20;
        case 0x1aaa24u: goto label_1aaa24;
        case 0x1aaa28u: goto label_1aaa28;
        case 0x1aaa2cu: goto label_1aaa2c;
        case 0x1aaa30u: goto label_1aaa30;
        case 0x1aaa34u: goto label_1aaa34;
        case 0x1aaa38u: goto label_1aaa38;
        case 0x1aaa3cu: goto label_1aaa3c;
        case 0x1aaa40u: goto label_1aaa40;
        case 0x1aaa44u: goto label_1aaa44;
        case 0x1aaa48u: goto label_1aaa48;
        case 0x1aaa4cu: goto label_1aaa4c;
        case 0x1aaa50u: goto label_1aaa50;
        case 0x1aaa54u: goto label_1aaa54;
        case 0x1aaa58u: goto label_1aaa58;
        case 0x1aaa5cu: goto label_1aaa5c;
        case 0x1aaa60u: goto label_1aaa60;
        case 0x1aaa64u: goto label_1aaa64;
        case 0x1aaa68u: goto label_1aaa68;
        case 0x1aaa6cu: goto label_1aaa6c;
        case 0x1aaa70u: goto label_1aaa70;
        default: break;
    }

    ctx->pc = 0x1aa9f0u;

label_1aa9f0:
    // 0x1aa9f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aa9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1aa9f4:
    // 0x1aa9f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1aa9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_1aa9f8:
    // 0x1aa9f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1aa9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_1aa9fc:
    // 0x1aa9fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1aa9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1aaa00:
    // 0x1aaa00: 0x8c42012c  lw          $v0, 0x12C($v0)
    ctx->pc = 0x1aaa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_1aaa04:
    // 0x1aaa04: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1aaa08:
    if (ctx->pc == 0x1AAA08u) {
        ctx->pc = 0x1AAA0Cu;
        goto label_1aaa0c;
    }
    ctx->pc = 0x1AAA04u;
    {
        const bool branch_taken_0x1aaa04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aaa04) {
            ctx->pc = 0x1AAA3Cu;
            goto label_1aaa3c;
        }
    }
    ctx->pc = 0x1AAA0Cu;
label_1aaa0c:
    // 0x1aaa0c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1aaa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1aaa10:
    // 0x1aaa10: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1aaa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1aaa14:
    // 0x1aaa14: 0x8c420128  lw          $v0, 0x128($v0)
    ctx->pc = 0x1aaa14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
label_1aaa18:
    // 0x1aaa18: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1aaa18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1aaa1c:
    // 0x1aaa1c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1aaa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1aaa20:
    // 0x1aaa20: 0x24428198  addiu       $v0, $v0, -0x7E68
    ctx->pc = 0x1aaa20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934936));
label_1aaa24:
    // 0x1aaa24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aaa24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1aaa28:
    // 0x1aaa28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1aaa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1aaa2c:
    // 0x1aaa2c: 0x40f809  jalr        $v0
label_1aaa30:
    if (ctx->pc == 0x1AAA30u) {
        ctx->pc = 0x1AAA34u;
        goto label_1aaa34;
    }
    ctx->pc = 0x1AAA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AAA34u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAA2Cu, 0x1AAA34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AAA34u;
label_1aaa34:
    // 0x1aaa34: 0x1000000b  b           . + 4 + (0xB << 2)
label_1aaa38:
    if (ctx->pc == 0x1AAA38u) {
        ctx->pc = 0x1AAA3Cu;
        goto label_1aaa3c;
    }
    ctx->pc = 0x1AAA34u;
    {
        const bool branch_taken_0x1aaa34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aaa34) {
            ctx->pc = 0x1AAA64u;
            goto label_1aaa64;
        }
    }
    ctx->pc = 0x1AAA3Cu;
label_1aaa3c:
    // 0x1aaa3c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1aaa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1aaa40:
    // 0x1aaa40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1aaa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1aaa44:
    // 0x1aaa44: 0x8c420128  lw          $v0, 0x128($v0)
    ctx->pc = 0x1aaa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
label_1aaa48:
    // 0x1aaa48: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1aaa48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1aaa4c:
    // 0x1aaa4c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1aaa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1aaa50:
    // 0x1aaa50: 0x244281a0  addiu       $v0, $v0, -0x7E60
    ctx->pc = 0x1aaa50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934944));
label_1aaa54:
    // 0x1aaa54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aaa54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1aaa58:
    // 0x1aaa58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1aaa58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1aaa5c:
    // 0x1aaa5c: 0x40f809  jalr        $v0
label_1aaa60:
    if (ctx->pc == 0x1AAA60u) {
        ctx->pc = 0x1AAA64u;
        goto label_1aaa64;
    }
    ctx->pc = 0x1AAA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AAA64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAA5Cu, 0x1AAA64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AAA64u;
label_1aaa64:
    // 0x1aaa64: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1aaa64u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1aaa68:
    // 0x1aaa68: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1aaa68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1aaa6c:
    // 0x1aaa6c: 0x3e00008  jr          $ra
label_1aaa70:
    if (ctx->pc == 0x1AAA70u) {
        ctx->pc = 0x1AAA74u;
        goto label_fallthrough_0x1aaa6c;
    }
    ctx->pc = 0x1AAA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1aaa6c:
    ctx->pc = 0x1AAA74u;
}
