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

// Function: entry_00359370
// Address: 0x359370 - 0x359394
void entry_00359370_0x359370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00359370_0x359370");
#endif

    switch (ctx->pc) {
        case 0x359384u: goto label_359384;
        default: break;
    }

    ctx->pc = 0x359370u;

label_359370:
    // 0x359370: 0x2442a780  addiu       $v0, $v0, -0x5880
    ctx->pc = 0x359370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944640));
label_359374:
    // 0x359374: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x359374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_359378:
    // 0x359378: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x359378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35937c:
    // 0x35937c: 0x40f809  jalr        $v0
label_359380:
    if (ctx->pc == 0x359380u) {
        ctx->pc = 0x359384u;
        goto label_359384;
    }
    ctx->pc = 0x35937Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x359384u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35937Cu, 0x359384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x359384u;
label_359384:
    // 0x359384: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x359384u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_359388:
    // 0x359388: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x359388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35938c:
    // 0x35938c: 0x3e00008  jr          $ra
label_359390:
    if (ctx->pc == 0x359390u) {
        ctx->pc = 0x359394u;
        goto label_fallthrough_0x35938c;
    }
    ctx->pc = 0x35938Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35938Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35938c:
    ctx->pc = 0x359394u;
}
