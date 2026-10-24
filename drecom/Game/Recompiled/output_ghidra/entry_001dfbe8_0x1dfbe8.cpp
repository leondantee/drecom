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

// Function: entry_001dfbe8
// Address: 0x1dfbe8 - 0x1dfc14
void entry_001dfbe8_0x1dfbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfbe8_0x1dfbe8");
#endif

    ctx->pc = 0x1dfbe8u;

    // 0x1dfbe8: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1dfbe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1dfbec: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x1dfbecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1dfbf0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1DFBF0u;
    {
        const bool branch_taken_0x1dfbf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dfbf0) {
            ctx->pc = 0x1DFBCCu;
            return;
        }
    }
    ctx->pc = 0x1DFBF8u;
    // 0x1dfbf8: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1dfbf8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dfbfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dfbfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dfc00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dfc00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfc04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dfc04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfc08: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1dfc08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1dfc0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFC14u;
}
