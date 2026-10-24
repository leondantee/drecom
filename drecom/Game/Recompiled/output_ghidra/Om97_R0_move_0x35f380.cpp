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

// Function: Om97_R0_move
// Address: 0x35f380 - 0x35f3c8
void Om97_R0_move_0x35f380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om97_R0_move_0x35f380");
#endif

    switch (ctx->pc) {
        case 0x35f380u: goto label_35f380;
        case 0x35f384u: goto label_35f384;
        case 0x35f388u: goto label_35f388;
        case 0x35f38cu: goto label_35f38c;
        case 0x35f390u: goto label_35f390;
        case 0x35f394u: goto label_35f394;
        case 0x35f398u: goto label_35f398;
        case 0x35f39cu: goto label_35f39c;
        case 0x35f3a0u: goto label_35f3a0;
        case 0x35f3a4u: goto label_35f3a4;
        case 0x35f3a8u: goto label_35f3a8;
        case 0x35f3acu: goto label_35f3ac;
        case 0x35f3b0u: goto label_35f3b0;
        case 0x35f3b4u: goto label_35f3b4;
        case 0x35f3b8u: goto label_35f3b8;
        case 0x35f3bcu: goto label_35f3bc;
        case 0x35f3c0u: goto label_35f3c0;
        case 0x35f3c4u: goto label_35f3c4;
        default: break;
    }

    ctx->pc = 0x35f380u;

label_35f380:
    // 0x35f380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35f380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35f384:
    // 0x35f384: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x35f384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_35f388:
    // 0x35f388: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x35f388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_35f38c:
    // 0x35f38c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35f38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35f390:
    // 0x35f390: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35f390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35f394:
    // 0x35f394: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x35f394u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_35f398:
    // 0x35f398: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35f398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35f39c:
    // 0x35f39c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x35f39cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35f3a0:
    // 0x35f3a0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_35f3a4:
    // 0x35f3a4: 0x2442ab00  addiu       $v0, $v0, -0x5500
    ctx->pc = 0x35f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945536));
label_35f3a8:
    // 0x35f3a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35f3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35f3ac:
    // 0x35f3ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35f3b0:
    // 0x35f3b0: 0x40f809  jalr        $v0
label_35f3b4:
    if (ctx->pc == 0x35F3B4u) {
        ctx->pc = 0x35F3B8u;
        goto label_35f3b8;
    }
    ctx->pc = 0x35F3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35F3B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F3B0u, 0x35F3B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35F3B8u;
label_35f3b8:
    // 0x35f3b8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35f3b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35f3bc:
    // 0x35f3bc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35f3bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35f3c0:
    // 0x35f3c0: 0x3e00008  jr          $ra
label_35f3c4:
    if (ctx->pc == 0x35F3C4u) {
        ctx->pc = 0x35F3C8u;
        goto label_fallthrough_0x35f3c0;
    }
    ctx->pc = 0x35F3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35f3c0:
    ctx->pc = 0x35F3C8u;
}
