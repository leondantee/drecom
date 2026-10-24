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

// Function: entry_00371304
// Address: 0x371304 - 0x371328
void entry_00371304_0x371304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00371304_0x371304");
#endif

    switch (ctx->pc) {
        case 0x371318u: goto label_371318;
        default: break;
    }

    ctx->pc = 0x371304u;

label_371304:
    // 0x371304: 0x2442b528  addiu       $v0, $v0, -0x4AD8
    ctx->pc = 0x371304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948136));
label_371308:
    // 0x371308: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x371308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37130c:
    // 0x37130c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x37130cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_371310:
    // 0x371310: 0x40f809  jalr        $v0
label_371314:
    if (ctx->pc == 0x371314u) {
        ctx->pc = 0x371318u;
        goto label_371318;
    }
    ctx->pc = 0x371310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x371318u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371310u, 0x371318u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x371318u;
label_371318:
    // 0x371318: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x371318u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37131c:
    // 0x37131c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x37131cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_371320:
    // 0x371320: 0x3e00008  jr          $ra
label_371324:
    if (ctx->pc == 0x371324u) {
        ctx->pc = 0x371328u;
        goto label_fallthrough_0x371320;
    }
    ctx->pc = 0x371320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x371320:
    ctx->pc = 0x371328u;
}
