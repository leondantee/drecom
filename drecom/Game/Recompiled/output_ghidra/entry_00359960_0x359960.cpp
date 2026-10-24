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

// Function: entry_00359960
// Address: 0x359960 - 0x359984
void entry_00359960_0x359960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00359960_0x359960");
#endif

    switch (ctx->pc) {
        case 0x359974u: goto label_359974;
        default: break;
    }

    ctx->pc = 0x359960u;

label_359960:
    // 0x359960: 0x2442a840  addiu       $v0, $v0, -0x57C0
    ctx->pc = 0x359960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944832));
label_359964:
    // 0x359964: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x359964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_359968:
    // 0x359968: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x359968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35996c:
    // 0x35996c: 0x40f809  jalr        $v0
label_359970:
    if (ctx->pc == 0x359970u) {
        ctx->pc = 0x359974u;
        goto label_359974;
    }
    ctx->pc = 0x35996Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x359974u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35996Cu, 0x359974u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x359974u;
label_359974:
    // 0x359974: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x359974u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_359978:
    // 0x359978: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x359978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35997c:
    // 0x35997c: 0x3e00008  jr          $ra
label_359980:
    if (ctx->pc == 0x359980u) {
        ctx->pc = 0x359984u;
        goto label_fallthrough_0x35997c;
    }
    ctx->pc = 0x35997Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35997Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35997c:
    ctx->pc = 0x359984u;
}
