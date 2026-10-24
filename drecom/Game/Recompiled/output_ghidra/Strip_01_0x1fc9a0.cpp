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

// Function: Strip_01
// Address: 0x1fc9a0 - 0x1fc9e4
void Strip_01_0x1fc9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Strip_01_0x1fc9a0");
#endif

    switch (ctx->pc) {
        case 0x1fc9a0u: goto label_1fc9a0;
        case 0x1fc9a4u: goto label_1fc9a4;
        case 0x1fc9a8u: goto label_1fc9a8;
        case 0x1fc9acu: goto label_1fc9ac;
        case 0x1fc9b0u: goto label_1fc9b0;
        case 0x1fc9b4u: goto label_1fc9b4;
        case 0x1fc9b8u: goto label_1fc9b8;
        case 0x1fc9bcu: goto label_1fc9bc;
        case 0x1fc9c0u: goto label_1fc9c0;
        case 0x1fc9c4u: goto label_1fc9c4;
        case 0x1fc9c8u: goto label_1fc9c8;
        case 0x1fc9ccu: goto label_1fc9cc;
        case 0x1fc9d0u: goto label_1fc9d0;
        case 0x1fc9d4u: goto label_1fc9d4;
        case 0x1fc9d8u: goto label_1fc9d8;
        case 0x1fc9dcu: goto label_1fc9dc;
        case 0x1fc9e0u: goto label_1fc9e0;
        default: break;
    }

    ctx->pc = 0x1fc9a0u;

label_1fc9a0:
    // 0x1fc9a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fc9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fc9a4:
    // 0x1fc9a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1fc9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_1fc9a8:
    // 0x1fc9a8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1fc9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_1fc9ac:
    // 0x1fc9ac: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1fc9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1fc9b0:
    // 0x1fc9b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1fc9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1fc9b4:
    // 0x1fc9b4: 0x8c420358  lw          $v0, 0x358($v0)
    ctx->pc = 0x1fc9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 856)));
label_1fc9b8:
    // 0x1fc9b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fc9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fc9bc:
    // 0x1fc9bc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1fc9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1fc9c0:
    // 0x1fc9c0: 0x24429f40  addiu       $v0, $v0, -0x60C0
    ctx->pc = 0x1fc9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942528));
label_1fc9c4:
    // 0x1fc9c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc9c8:
    // 0x1fc9c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fc9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fc9cc:
    // 0x1fc9cc: 0x40f809  jalr        $v0
label_1fc9d0:
    if (ctx->pc == 0x1FC9D0u) {
        ctx->pc = 0x1FC9D4u;
        goto label_1fc9d4;
    }
    ctx->pc = 0x1FC9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FC9D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC9CCu, 0x1FC9D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FC9D4u;
label_1fc9d4:
    // 0x1fc9d4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1fc9d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc9d8:
    // 0x1fc9d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1fc9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1fc9dc:
    // 0x1fc9dc: 0x3e00008  jr          $ra
label_1fc9e0:
    if (ctx->pc == 0x1FC9E0u) {
        ctx->pc = 0x1FC9E4u;
        goto label_fallthrough_0x1fc9dc;
    }
    ctx->pc = 0x1FC9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC9DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fc9dc:
    ctx->pc = 0x1FC9E4u;
}
