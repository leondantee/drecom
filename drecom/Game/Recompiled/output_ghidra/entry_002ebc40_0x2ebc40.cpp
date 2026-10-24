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

// Function: entry_002ebc40
// Address: 0x2ebc40 - 0x2ebc64
void entry_002ebc40_0x2ebc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ebc40_0x2ebc40");
#endif

    ctx->pc = 0x2ebc40u;

    // 0x2ebc40: 0x2a23001e  slti        $v1, $s1, 0x1E
    ctx->pc = 0x2ebc40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x2ebc44: 0x1460ff53  bnez        $v1, . + 4 + (-0xAD << 2)
    ctx->pc = 0x2EBC44u;
    {
        const bool branch_taken_0x2ebc44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebc44) {
            ctx->pc = 0x2EB994u;
            return;
        }
    }
    ctx->pc = 0x2EBC4Cu;
    // 0x2ebc4c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2ebc4cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ebc50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ebc50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebc54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ebc54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebc58: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2ebc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ebc5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBC64u;
}
