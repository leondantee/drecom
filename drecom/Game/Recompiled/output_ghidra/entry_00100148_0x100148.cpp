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

// Function: entry_00100148
// Address: 0x100148 - 0x100160
void entry_00100148_0x100148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100148_0x100148");
#endif

    switch (ctx->pc) {
        case 0x100150u: goto label_100150;
        default: break;
    }

    ctx->pc = 0x100148u;

    // 0x100148: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x100148u;
    SET_GPR_U32(ctx, 31, 0x100150u);
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x100148u, 0x100150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100150u;
label_100150:
    // 0x100150: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x100150u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100154: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x100154u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x100158: 0x3e00008  jr          $ra
    ctx->pc = 0x100158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100158u;
        // 0x10015c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100160u;
}
