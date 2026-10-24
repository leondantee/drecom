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

// Function: Ectrl_1d
// Address: 0x254190 - 0x2541d4
void Ectrl_1d_0x254190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ectrl_1d_0x254190");
#endif

    switch (ctx->pc) {
        case 0x254190u: goto label_254190;
        case 0x254194u: goto label_254194;
        case 0x254198u: goto label_254198;
        case 0x25419cu: goto label_25419c;
        case 0x2541a0u: goto label_2541a0;
        case 0x2541a4u: goto label_2541a4;
        case 0x2541a8u: goto label_2541a8;
        case 0x2541acu: goto label_2541ac;
        case 0x2541b0u: goto label_2541b0;
        case 0x2541b4u: goto label_2541b4;
        case 0x2541b8u: goto label_2541b8;
        case 0x2541bcu: goto label_2541bc;
        case 0x2541c0u: goto label_2541c0;
        case 0x2541c4u: goto label_2541c4;
        case 0x2541c8u: goto label_2541c8;
        case 0x2541ccu: goto label_2541cc;
        case 0x2541d0u: goto label_2541d0;
        default: break;
    }

    ctx->pc = 0x254190u;

label_254190:
    // 0x254190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x254190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_254194:
    // 0x254194: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x254194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_254198:
    // 0x254198: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x254198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_25419c:
    // 0x25419c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x25419cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2541a0:
    // 0x2541a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2541a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2541a4:
    // 0x2541a4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2541a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2541a8:
    // 0x2541a8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2541a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2541ac:
    // 0x2541ac: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2541acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2541b0:
    // 0x2541b0: 0x2442b760  addiu       $v0, $v0, -0x48A0
    ctx->pc = 0x2541b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948704));
label_2541b4:
    // 0x2541b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2541b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2541b8:
    // 0x2541b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2541b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2541bc:
    // 0x2541bc: 0x40f809  jalr        $v0
label_2541c0:
    if (ctx->pc == 0x2541C0u) {
        ctx->pc = 0x2541C4u;
        goto label_2541c4;
    }
    ctx->pc = 0x2541BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2541C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2541BCu, 0x2541C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2541C4u;
label_2541c4:
    // 0x2541c4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2541c4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2541c8:
    // 0x2541c8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2541c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2541cc:
    // 0x2541cc: 0x3e00008  jr          $ra
label_2541d0:
    if (ctx->pc == 0x2541D0u) {
        ctx->pc = 0x2541D4u;
        goto label_fallthrough_0x2541cc;
    }
    ctx->pc = 0x2541CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2541CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2541cc:
    ctx->pc = 0x2541D4u;
}
