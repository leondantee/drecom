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

// Function: entry_00283620
// Address: 0x283620 - 0x283648
void entry_00283620_0x283620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00283620_0x283620");
#endif

    switch (ctx->pc) {
        case 0x283634u: goto label_283634;
        default: break;
    }

    ctx->pc = 0x283620u;

    // 0x283620: 0x2e02000e  sltiu       $v0, $s0, 0xE
    ctx->pc = 0x283620u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x283624: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x283624u;
    {
        const bool branch_taken_0x283624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283624) {
            ctx->pc = 0x2835F0u;
            return;
        }
    }
    ctx->pc = 0x28362Cu;
    // 0x28362c: 0xc084934  jal         func_2124D0
    ctx->pc = 0x28362Cu;
    SET_GPR_U32(ctx, 31, 0x283634u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x28362Cu, 0x283634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283634u;
label_283634:
    // 0x283634: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x283634u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283638: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x283638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28363c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x28363cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x283640: 0x3e00008  jr          $ra
    ctx->pc = 0x283640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283648u;
}
