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

// Function: Em05_R0_die
// Address: 0x20e680 - 0x20e6d4
void Em05_R0_die_0x20e680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_R0_die_0x20e680");
#endif

    switch (ctx->pc) {
        case 0x20e680u: goto label_20e680;
        case 0x20e684u: goto label_20e684;
        case 0x20e688u: goto label_20e688;
        case 0x20e68cu: goto label_20e68c;
        case 0x20e690u: goto label_20e690;
        case 0x20e694u: goto label_20e694;
        case 0x20e698u: goto label_20e698;
        case 0x20e69cu: goto label_20e69c;
        case 0x20e6a0u: goto label_20e6a0;
        case 0x20e6a4u: goto label_20e6a4;
        case 0x20e6a8u: goto label_20e6a8;
        case 0x20e6acu: goto label_20e6ac;
        case 0x20e6b0u: goto label_20e6b0;
        case 0x20e6b4u: goto label_20e6b4;
        case 0x20e6b8u: goto label_20e6b8;
        case 0x20e6bcu: goto label_20e6bc;
        case 0x20e6c0u: goto label_20e6c0;
        case 0x20e6c4u: goto label_20e6c4;
        case 0x20e6c8u: goto label_20e6c8;
        case 0x20e6ccu: goto label_20e6cc;
        case 0x20e6d0u: goto label_20e6d0;
        default: break;
    }

    ctx->pc = 0x20e680u;

label_20e680:
    // 0x20e680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20e680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20e684:
    // 0x20e684: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x20e684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_20e688:
    // 0x20e688: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x20e688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_20e68c:
    // 0x20e68c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_20e690:
    // 0x20e690: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x20e690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_20e694:
    // 0x20e694: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x20e694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_20e698:
    // 0x20e698: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20e698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_20e69c:
    // 0x20e69c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x20e69cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20e6a0:
    // 0x20e6a0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20e6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_20e6a4:
    // 0x20e6a4: 0x2442a090  addiu       $v0, $v0, -0x5F70
    ctx->pc = 0x20e6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942864));
label_20e6a8:
    // 0x20e6a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20e6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20e6ac:
    // 0x20e6ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20e6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20e6b0:
    // 0x20e6b0: 0x40f809  jalr        $v0
label_20e6b4:
    if (ctx->pc == 0x20E6B4u) {
        ctx->pc = 0x20E6B8u;
        goto label_20e6b8;
    }
    ctx->pc = 0x20E6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20E6B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E6B0u, 0x20E6B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20E6B8u;
label_20e6b8:
    // 0x20e6b8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_20e6bc:
    // 0x20e6bc: 0xc05d1b8  jal         func_1746E0
label_20e6c0:
    if (ctx->pc == 0x20E6C0u) {
        ctx->pc = 0x20E6C4u;
        goto label_20e6c4;
    }
    ctx->pc = 0x20E6BCu;
    SET_GPR_U32(ctx, 31, 0x20E6C4u);
    ctx->pc = 0x1746E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1746E0u, 0x20E6BCu, 0x20E6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E6C4u;
label_20e6c4:
    // 0x20e6c4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x20e6c4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20e6c8:
    // 0x20e6c8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x20e6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_20e6cc:
    // 0x20e6cc: 0x3e00008  jr          $ra
label_20e6d0:
    if (ctx->pc == 0x20E6D0u) {
        ctx->pc = 0x20E6D4u;
        goto label_fallthrough_0x20e6cc;
    }
    ctx->pc = 0x20E6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E6CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20e6cc:
    ctx->pc = 0x20E6D4u;
}
