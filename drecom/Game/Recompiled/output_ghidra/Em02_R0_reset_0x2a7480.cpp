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

// Function: Em02_R0_reset
// Address: 0x2a7480 - 0x2a74d0
void Em02_R0_reset_0x2a7480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_R0_reset_0x2a7480");
#endif

    switch (ctx->pc) {
        case 0x2a7480u: goto label_2a7480;
        case 0x2a7484u: goto label_2a7484;
        case 0x2a7488u: goto label_2a7488;
        case 0x2a748cu: goto label_2a748c;
        case 0x2a7490u: goto label_2a7490;
        case 0x2a7494u: goto label_2a7494;
        case 0x2a7498u: goto label_2a7498;
        case 0x2a749cu: goto label_2a749c;
        case 0x2a74a0u: goto label_2a74a0;
        case 0x2a74a4u: goto label_2a74a4;
        case 0x2a74a8u: goto label_2a74a8;
        case 0x2a74acu: goto label_2a74ac;
        case 0x2a74b0u: goto label_2a74b0;
        case 0x2a74b4u: goto label_2a74b4;
        case 0x2a74b8u: goto label_2a74b8;
        case 0x2a74bcu: goto label_2a74bc;
        case 0x2a74c0u: goto label_2a74c0;
        case 0x2a74c4u: goto label_2a74c4;
        case 0x2a74c8u: goto label_2a74c8;
        case 0x2a74ccu: goto label_2a74cc;
        default: break;
    }

    ctx->pc = 0x2a7480u;

label_2a7480:
    // 0x2a7480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a7480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a7484:
    // 0x2a7484: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2a7484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2a7488:
    // 0x2a7488: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2a7488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2a748c:
    // 0x2a748c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2a748cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2a7490:
    // 0x2a7490: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a7490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2a7494:
    // 0x2a7494: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x2a7494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
label_2a7498:
    // 0x2a7498: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a7498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2a749c:
    // 0x2a749c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2a749cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_2a74a0:
    // 0x2a74a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a74a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2a74a4:
    // 0x2a74a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2a74a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2a74a8:
    // 0x2a74a8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2a74a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2a74ac:
    // 0x2a74ac: 0x24426bd0  addiu       $v0, $v0, 0x6BD0
    ctx->pc = 0x2a74acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27600));
label_2a74b0:
    // 0x2a74b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a74b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a74b4:
    // 0x2a74b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a74b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a74b8:
    // 0x2a74b8: 0x40f809  jalr        $v0
label_2a74bc:
    if (ctx->pc == 0x2A74BCu) {
        ctx->pc = 0x2A74C0u;
        goto label_2a74c0;
    }
    ctx->pc = 0x2A74B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A74C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A74B8u, 0x2A74C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A74C0u;
label_2a74c0:
    // 0x2a74c0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2a74c0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a74c4:
    // 0x2a74c4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2a74c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2a74c8:
    // 0x2a74c8: 0x3e00008  jr          $ra
label_2a74cc:
    if (ctx->pc == 0x2A74CCu) {
        ctx->pc = 0x2A74D0u;
        goto label_fallthrough_0x2a74c8;
    }
    ctx->pc = 0x2A74C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A74C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a74c8:
    ctx->pc = 0x2A74D0u;
}
