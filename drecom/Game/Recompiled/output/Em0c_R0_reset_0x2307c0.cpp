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

// Function: Em0c_R0_reset
// Address: 0x2307c0 - 0x230810
void Em0c_R0_reset_0x2307c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R0_reset_0x2307c0");
#endif

    switch (ctx->pc) {
        case 0x2307c0u: goto label_2307c0;
        case 0x2307c4u: goto label_2307c4;
        case 0x2307c8u: goto label_2307c8;
        case 0x2307ccu: goto label_2307cc;
        case 0x2307d0u: goto label_2307d0;
        case 0x2307d4u: goto label_2307d4;
        case 0x2307d8u: goto label_2307d8;
        case 0x2307dcu: goto label_2307dc;
        case 0x2307e0u: goto label_2307e0;
        case 0x2307e4u: goto label_2307e4;
        case 0x2307e8u: goto label_2307e8;
        case 0x2307ecu: goto label_2307ec;
        case 0x2307f0u: goto label_2307f0;
        case 0x2307f4u: goto label_2307f4;
        case 0x2307f8u: goto label_2307f8;
        case 0x2307fcu: goto label_2307fc;
        case 0x230800u: goto label_230800;
        case 0x230804u: goto label_230804;
        case 0x230808u: goto label_230808;
        case 0x23080cu: goto label_23080c;
        default: break;
    }

    ctx->pc = 0x2307c0u;

label_2307c0:
    // 0x2307c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2307c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2307c4:
    // 0x2307c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2307c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2307c8:
    // 0x2307c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2307c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2307cc:
    // 0x2307cc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2307ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2307d0:
    // 0x2307d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2307d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2307d4:
    // 0x2307d4: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x2307d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
label_2307d8:
    // 0x2307d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2307d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2307dc:
    // 0x2307dc: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2307dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_2307e0:
    // 0x2307e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2307e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2307e4:
    // 0x2307e4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2307e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2307e8:
    // 0x2307e8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2307e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2307ec:
    // 0x2307ec: 0x2442aec0  addiu       $v0, $v0, -0x5140
    ctx->pc = 0x2307ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946496));
label_2307f0:
    // 0x2307f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2307f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2307f4:
    // 0x2307f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2307f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2307f8:
    // 0x2307f8: 0x40f809  jalr        $v0
label_2307fc:
    if (ctx->pc == 0x2307FCu) {
        ctx->pc = 0x230800u;
        goto label_230800;
    }
    ctx->pc = 0x2307F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230800u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2307F8u, 0x230800u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x230800u;
label_230800:
    // 0x230800: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x230800u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_230804:
    // 0x230804: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x230804u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_230808:
    // 0x230808: 0x3e00008  jr          $ra
label_23080c:
    if (ctx->pc == 0x23080Cu) {
        ctx->pc = 0x230810u;
        goto label_fallthrough_0x230808;
    }
    ctx->pc = 0x230808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x230808:
    ctx->pc = 0x230810u;
}
