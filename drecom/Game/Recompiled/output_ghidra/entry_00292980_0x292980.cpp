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

// Function: entry_00292980
// Address: 0x292980 - 0x2929ac
void entry_00292980_0x292980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00292980_0x292980");
#endif

    ctx->pc = 0x292980u;

    // 0x292980: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x292980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x292984: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x292984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x292988: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x292988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x29298c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x29298cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x292990: 0x1060ffe7  beqz        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x292990u;
    {
        const bool branch_taken_0x292990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x292990) {
            ctx->pc = 0x292930u;
            return;
        }
    }
    ctx->pc = 0x292998u;
    // 0x292998: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x292998u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29299c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29299cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2929a0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2929a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2929a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2929A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2929A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2929ACu;
}
