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

// Function: entry_00291120
// Address: 0x291120 - 0x291140
void entry_00291120_0x291120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00291120_0x291120");
#endif

    switch (ctx->pc) {
        case 0x291128u: goto label_291128;
        default: break;
    }

    ctx->pc = 0x291120u;

    // 0x291120: 0xc0a4268  jal         func_2909A0
    ctx->pc = 0x291120u;
    SET_GPR_U32(ctx, 31, 0x291128u);
    ctx->pc = 0x2909A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2909A0u, 0x291120u, 0x291128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291128u;
label_291128:
    // 0x291128: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x291128u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29112c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29112cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291130: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x291130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291134: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x291134u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x291138: 0x3e00008  jr          $ra
    ctx->pc = 0x291138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291140u;
}
