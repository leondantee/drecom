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

// Function: Em0d_R0_damage
// Address: 0x23f3f0 - 0x23f438
void Em0d_R0_damage_0x23f3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0d_R0_damage_0x23f3f0");
#endif

    switch (ctx->pc) {
        case 0x23f3f0u: goto label_23f3f0;
        case 0x23f3f4u: goto label_23f3f4;
        case 0x23f3f8u: goto label_23f3f8;
        case 0x23f3fcu: goto label_23f3fc;
        case 0x23f400u: goto label_23f400;
        case 0x23f404u: goto label_23f404;
        case 0x23f408u: goto label_23f408;
        case 0x23f40cu: goto label_23f40c;
        case 0x23f410u: goto label_23f410;
        case 0x23f414u: goto label_23f414;
        case 0x23f418u: goto label_23f418;
        case 0x23f41cu: goto label_23f41c;
        case 0x23f420u: goto label_23f420;
        case 0x23f424u: goto label_23f424;
        case 0x23f428u: goto label_23f428;
        case 0x23f42cu: goto label_23f42c;
        case 0x23f430u: goto label_23f430;
        case 0x23f434u: goto label_23f434;
        default: break;
    }

    ctx->pc = 0x23f3f0u;

label_23f3f0:
    // 0x23f3f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23f3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23f3f4:
    // 0x23f3f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x23f3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_23f3f8:
    // 0x23f3f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x23f3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_23f3fc:
    // 0x23f3fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x23f3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23f400:
    // 0x23f400: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23f400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23f404:
    // 0x23f404: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x23f404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_23f408:
    // 0x23f408: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23f408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23f40c:
    // 0x23f40c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x23f40cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23f410:
    // 0x23f410: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x23f410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_23f414:
    // 0x23f414: 0x2442b280  addiu       $v0, $v0, -0x4D80
    ctx->pc = 0x23f414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947456));
label_23f418:
    // 0x23f418: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23f418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23f41c:
    // 0x23f41c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23f41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23f420:
    // 0x23f420: 0x40f809  jalr        $v0
label_23f424:
    if (ctx->pc == 0x23F424u) {
        ctx->pc = 0x23F428u;
        goto label_23f428;
    }
    ctx->pc = 0x23F420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23F428u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F420u, 0x23F428u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23F428u;
label_23f428:
    // 0x23f428: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x23f428u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23f42c:
    // 0x23f42c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x23f42cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23f430:
    // 0x23f430: 0x3e00008  jr          $ra
label_23f434:
    if (ctx->pc == 0x23F434u) {
        ctx->pc = 0x23F438u;
        goto label_fallthrough_0x23f430;
    }
    ctx->pc = 0x23F430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23f430:
    ctx->pc = 0x23F438u;
}
