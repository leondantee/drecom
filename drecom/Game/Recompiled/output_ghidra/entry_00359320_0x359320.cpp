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

// Function: entry_00359320
// Address: 0x359320 - 0x359344
void entry_00359320_0x359320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00359320_0x359320");
#endif

    switch (ctx->pc) {
        case 0x359334u: goto label_359334;
        default: break;
    }

    ctx->pc = 0x359320u;

label_359320:
    // 0x359320: 0x2442a770  addiu       $v0, $v0, -0x5890
    ctx->pc = 0x359320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944624));
label_359324:
    // 0x359324: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x359324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_359328:
    // 0x359328: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x359328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35932c:
    // 0x35932c: 0x40f809  jalr        $v0
label_359330:
    if (ctx->pc == 0x359330u) {
        ctx->pc = 0x359334u;
        goto label_359334;
    }
    ctx->pc = 0x35932Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x359334u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35932Cu, 0x359334u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x359334u;
label_359334:
    // 0x359334: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x359334u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_359338:
    // 0x359338: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x359338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35933c:
    // 0x35933c: 0x3e00008  jr          $ra
label_359340:
    if (ctx->pc == 0x359340u) {
        ctx->pc = 0x359344u;
        goto label_fallthrough_0x35933c;
    }
    ctx->pc = 0x35933Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35933Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35933c:
    ctx->pc = 0x359344u;
}
