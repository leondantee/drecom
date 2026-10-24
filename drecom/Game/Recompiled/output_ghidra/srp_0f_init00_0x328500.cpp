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

// Function: srp_0f_init00
// Address: 0x328500 - 0x328568
void srp_0f_init00_0x328500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_0f_init00_0x328500");
#endif

    switch (ctx->pc) {
        case 0x32854cu: goto label_32854c;
        case 0x328558u: goto label_328558;
        default: break;
    }

    ctx->pc = 0x328500u;

    // 0x328500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x328500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x328504: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x328504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x328508: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x328508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x32850c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32850cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328510: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x328510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x328514: 0xac430358  sw          $v1, 0x358($v0)
    ctx->pc = 0x328514u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 856), GPR_U32(ctx, 3));
    // 0x328518: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x328518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32851c: 0x8c420278  lw          $v0, 0x278($v0)
    ctx->pc = 0x32851cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 632)));
    // 0x328520: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x328520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x328524: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x328524u;
    {
        const bool branch_taken_0x328524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328524) {
            ctx->pc = 0x328540u;
            goto label_328540;
        }
    }
    ctx->pc = 0x32852Cu;
    // 0x32852c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x32852cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x328530: 0x8c830b18  lw          $v1, 0xB18($a0)
    ctx->pc = 0x328530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2840)));
    // 0x328534: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x328534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x328538: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x328538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32853c: 0xac820b18  sw          $v0, 0xB18($a0)
    ctx->pc = 0x32853cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2840), GPR_U32(ctx, 2));
label_328540:
    // 0x328540: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x328540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x328544: 0xc0c9930  jal         func_3264C0
    ctx->pc = 0x328544u;
    SET_GPR_U32(ctx, 31, 0x32854Cu);
    ctx->pc = 0x3264C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3264C0u, 0x328544u, 0x32854Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32854Cu;
label_32854c:
    // 0x32854c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x32854cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x328550: 0xc0ca1e0  jal         func_328780
    ctx->pc = 0x328550u;
    SET_GPR_U32(ctx, 31, 0x328558u);
    ctx->pc = 0x328780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328780u, 0x328550u, 0x328558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328558u;
label_328558:
    // 0x328558: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x328558u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32855c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x32855cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x328560: 0x3e00008  jr          $ra
    ctx->pc = 0x328560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328568u;
}
