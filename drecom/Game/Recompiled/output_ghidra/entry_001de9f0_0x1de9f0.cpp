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

// Function: entry_001de9f0
// Address: 0x1de9f0 - 0x1dea14
void entry_001de9f0_0x1de9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de9f0_0x1de9f0");
#endif

    ctx->pc = 0x1de9f0u;

    // 0x1de9f0: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1de9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1de9f4: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x1de9f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1de9f8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1DE9F8u;
    {
        const bool branch_taken_0x1de9f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de9f8) {
            ctx->pc = 0x1DE9D0u;
            return;
        }
    }
    ctx->pc = 0x1DEA00u;
    // 0x1dea00: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1dea00u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dea04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dea04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dea08: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1dea08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dea0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEA14u;
}
