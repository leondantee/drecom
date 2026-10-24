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

// Function: entry_00359cd4
// Address: 0x359cd4 - 0x359ce8
void entry_00359cd4_0x359cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00359cd4_0x359cd4");
#endif

    ctx->pc = 0x359cd4u;

label_359cd4:
    // 0x359cd4: 0x2442a880  addiu       $v0, $v0, -0x5780
    ctx->pc = 0x359cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944896));
label_359cd8:
    // 0x359cd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x359cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_359cdc:
    // 0x359cdc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x359cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_359ce0:
    // 0x359ce0: 0x40f809  jalr        $v0
label_359ce4:
    if (ctx->pc == 0x359CE4u) {
        ctx->pc = 0x359CE8u;
        goto label_fallthrough_0x359ce0;
    }
    ctx->pc = 0x359CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x359CE8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359CE0u, 0x359CE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x359ce0:
    ctx->pc = 0x359CE8u;
}
