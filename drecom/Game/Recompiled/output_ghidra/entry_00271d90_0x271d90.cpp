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

// Function: entry_00271d90
// Address: 0x271d90 - 0x271db8
void entry_00271d90_0x271d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00271d90_0x271d90");
#endif

    switch (ctx->pc) {
        case 0x271da4u: goto label_271da4;
        default: break;
    }

    ctx->pc = 0x271d90u;

    // 0x271d90: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x271d90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x271d94: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x271D94u;
    {
        const bool branch_taken_0x271d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271d94) {
            ctx->pc = 0x271D60u;
            return;
        }
    }
    ctx->pc = 0x271D9Cu;
    // 0x271d9c: 0xc084934  jal         func_2124D0
    ctx->pc = 0x271D9Cu;
    SET_GPR_U32(ctx, 31, 0x271DA4u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x271D9Cu, 0x271DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271DA4u;
label_271da4:
    // 0x271da4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x271da4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271da8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x271da8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271dac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x271dacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x271db0: 0x3e00008  jr          $ra
    ctx->pc = 0x271DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271DB8u;
}
