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

// Function: entry_0037c964
// Address: 0x37c964 - 0x37c988
void entry_0037c964_0x37c964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037c964_0x37c964");
#endif

    switch (ctx->pc) {
        case 0x37c978u: goto label_37c978;
        default: break;
    }

    ctx->pc = 0x37c964u;

label_37c964:
    // 0x37c964: 0x2442ba78  addiu       $v0, $v0, -0x4588
    ctx->pc = 0x37c964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949496));
label_37c968:
    // 0x37c968: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37c968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37c96c:
    // 0x37c96c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x37c96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37c970:
    // 0x37c970: 0x40f809  jalr        $v0
label_37c974:
    if (ctx->pc == 0x37C974u) {
        ctx->pc = 0x37C978u;
        goto label_37c978;
    }
    ctx->pc = 0x37C970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37C978u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C970u, 0x37C978u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37C978u;
label_37c978:
    // 0x37c978: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x37c978u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37c97c:
    // 0x37c97c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x37c97cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_37c980:
    // 0x37c980: 0x3e00008  jr          $ra
label_37c984:
    if (ctx->pc == 0x37C984u) {
        ctx->pc = 0x37C988u;
        goto label_fallthrough_0x37c980;
    }
    ctx->pc = 0x37C980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x37c980:
    ctx->pc = 0x37C988u;
}
