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

// Function: entry_0027d480
// Address: 0x27d480 - 0x27d4b0
void entry_0027d480_0x27d480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027d480_0x27d480");
#endif

    switch (ctx->pc) {
        case 0x27d494u: goto label_27d494;
        default: break;
    }

    ctx->pc = 0x27d480u;

    // 0x27d480: 0x2e420097  sltiu       $v0, $s2, 0x97
    ctx->pc = 0x27d480u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)151) ? 1 : 0);
    // 0x27d484: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x27D484u;
    {
        const bool branch_taken_0x27d484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d484) {
            ctx->pc = 0x27D460u;
            return;
        }
    }
    ctx->pc = 0x27D48Cu;
    // 0x27d48c: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27D48Cu;
    SET_GPR_U32(ctx, 31, 0x27D494u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27D48Cu, 0x27D494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D494u;
label_27d494:
    // 0x27d494: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x27d494u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27d498: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27d498u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27d49c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27d49cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d4a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27d4a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d4a4: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x27d4a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x27d4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x27D4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D4B0u;
}
