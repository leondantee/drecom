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

// Function: entry_00328140
// Address: 0x328140 - 0x328164
void entry_00328140_0x328140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00328140_0x328140");
#endif

    switch (ctx->pc) {
        case 0x328154u: goto label_328154;
        default: break;
    }

    ctx->pc = 0x328140u;

label_328140:
    // 0x328140: 0x2442a1f0  addiu       $v0, $v0, -0x5E10
    ctx->pc = 0x328140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943216));
label_328144:
    // 0x328144: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x328144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_328148:
    // 0x328148: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x328148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32814c:
    // 0x32814c: 0x40f809  jalr        $v0
label_328150:
    if (ctx->pc == 0x328150u) {
        ctx->pc = 0x328154u;
        goto label_328154;
    }
    ctx->pc = 0x32814Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x328154u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32814Cu, 0x328154u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x328154u;
label_328154:
    // 0x328154: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x328154u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_328158:
    // 0x328158: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x328158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_32815c:
    // 0x32815c: 0x3e00008  jr          $ra
label_328160:
    if (ctx->pc == 0x328160u) {
        ctx->pc = 0x328164u;
        goto label_fallthrough_0x32815c;
    }
    ctx->pc = 0x32815Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32815Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x32815c:
    ctx->pc = 0x328164u;
}
