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

// Function: Em24_move
// Address: 0x3593a0 - 0x3593e8
void Em24_move_0x3593a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em24_move_0x3593a0");
#endif

    switch (ctx->pc) {
        case 0x3593a0u: goto label_3593a0;
        case 0x3593a4u: goto label_3593a4;
        case 0x3593a8u: goto label_3593a8;
        case 0x3593acu: goto label_3593ac;
        case 0x3593b0u: goto label_3593b0;
        case 0x3593b4u: goto label_3593b4;
        case 0x3593b8u: goto label_3593b8;
        case 0x3593bcu: goto label_3593bc;
        case 0x3593c0u: goto label_3593c0;
        case 0x3593c4u: goto label_3593c4;
        case 0x3593c8u: goto label_3593c8;
        case 0x3593ccu: goto label_3593cc;
        case 0x3593d0u: goto label_3593d0;
        case 0x3593d4u: goto label_3593d4;
        case 0x3593d8u: goto label_3593d8;
        case 0x3593dcu: goto label_3593dc;
        case 0x3593e0u: goto label_3593e0;
        case 0x3593e4u: goto label_3593e4;
        default: break;
    }

    ctx->pc = 0x3593a0u;

label_3593a0:
    // 0x3593a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3593a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3593a4:
    // 0x3593a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3593a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_3593a8:
    // 0x3593a8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x3593a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_3593ac:
    // 0x3593ac: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3593acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3593b0:
    // 0x3593b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3593b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3593b4:
    // 0x3593b4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3593b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3593b8:
    // 0x3593b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3593b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3593bc:
    // 0x3593bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3593bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3593c0:
    // 0x3593c0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3593c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_3593c4:
    // 0x3593c4: 0x2442a7b0  addiu       $v0, $v0, -0x5850
    ctx->pc = 0x3593c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944688));
label_3593c8:
    // 0x3593c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3593c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3593cc:
    // 0x3593cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3593ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3593d0:
    // 0x3593d0: 0x40f809  jalr        $v0
label_3593d4:
    if (ctx->pc == 0x3593D4u) {
        ctx->pc = 0x3593D8u;
        goto label_3593d8;
    }
    ctx->pc = 0x3593D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3593D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3593D0u, 0x3593D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3593D8u;
label_3593d8:
    // 0x3593d8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3593d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3593dc:
    // 0x3593dc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3593dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3593e0:
    // 0x3593e0: 0x3e00008  jr          $ra
label_3593e4:
    if (ctx->pc == 0x3593E4u) {
        ctx->pc = 0x3593E8u;
        goto label_fallthrough_0x3593e0;
    }
    ctx->pc = 0x3593E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3593E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3593e0:
    ctx->pc = 0x3593E8u;
}
