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

// Function: entry_002ce838
// Address: 0x2ce838 - 0x2ce860
void entry_002ce838_0x2ce838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ce838_0x2ce838");
#endif

    ctx->pc = 0x2ce838u;

    // 0x2ce838: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2ce838u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2ce83c: 0x1620ff47  bnez        $s1, . + 4 + (-0xB9 << 2)
    ctx->pc = 0x2CE83Cu;
    {
        const bool branch_taken_0x2ce83c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce83c) {
            ctx->pc = 0x2CE55Cu;
            return;
        }
    }
    ctx->pc = 0x2CE844u;
    // 0x2ce844: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x2ce844u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ce848: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ce848u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ce84c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ce84cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce850: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ce850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce854: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2ce854u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2ce858: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE860u;
}
