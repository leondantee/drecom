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

// Function: entry_00379924
// Address: 0x379924 - 0x379948
void entry_00379924_0x379924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00379924_0x379924");
#endif

    switch (ctx->pc) {
        case 0x379938u: goto label_379938;
        default: break;
    }

    ctx->pc = 0x379924u;

label_379924:
    // 0x379924: 0x2442b7b8  addiu       $v0, $v0, -0x4848
    ctx->pc = 0x379924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948792));
label_379928:
    // 0x379928: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x379928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37992c:
    // 0x37992c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x37992cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_379930:
    // 0x379930: 0x40f809  jalr        $v0
label_379934:
    if (ctx->pc == 0x379934u) {
        ctx->pc = 0x379938u;
        goto label_379938;
    }
    ctx->pc = 0x379930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x379938u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379930u, 0x379938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x379938u;
label_379938:
    // 0x379938: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x379938u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37993c:
    // 0x37993c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x37993cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_379940:
    // 0x379940: 0x3e00008  jr          $ra
label_379944:
    if (ctx->pc == 0x379944u) {
        ctx->pc = 0x379948u;
        goto label_fallthrough_0x379940;
    }
    ctx->pc = 0x379940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x379940:
    ctx->pc = 0x379948u;
}
