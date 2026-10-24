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

// Function: entry_001b1930
// Address: 0x1b1930 - 0x1b1954
void entry_001b1930_0x1b1930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1930_0x1b1930");
#endif

    switch (ctx->pc) {
        case 0x1b1944u: goto label_1b1944;
        default: break;
    }

    ctx->pc = 0x1b1930u;

label_1b1930:
    // 0x1b1930: 0x24428230  addiu       $v0, $v0, -0x7DD0
    ctx->pc = 0x1b1930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935088));
label_1b1934:
    // 0x1b1934: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b1934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b1938:
    // 0x1b1938: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b1938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b193c:
    // 0x1b193c: 0x40f809  jalr        $v0
label_1b1940:
    if (ctx->pc == 0x1B1940u) {
        ctx->pc = 0x1B1944u;
        goto label_1b1944;
    }
    ctx->pc = 0x1B193Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B1944u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B193Cu, 0x1B1944u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1944u;
label_1b1944:
    // 0x1b1944: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1b1944u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b1948:
    // 0x1b1948: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1b1948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1b194c:
    // 0x1b194c: 0x3e00008  jr          $ra
label_1b1950:
    if (ctx->pc == 0x1B1950u) {
        ctx->pc = 0x1B1954u;
        goto label_fallthrough_0x1b194c;
    }
    ctx->pc = 0x1B194Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B194Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b194c:
    ctx->pc = 0x1B1954u;
}
