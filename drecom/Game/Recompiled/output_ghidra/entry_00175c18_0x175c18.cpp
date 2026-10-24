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

// Function: entry_00175c18
// Address: 0x175c18 - 0x175c3c
void entry_00175c18_0x175c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175c18_0x175c18");
#endif

    ctx->pc = 0x175c18u;

    // 0x175c18: 0x2e230050  sltiu       $v1, $s1, 0x50
    ctx->pc = 0x175c18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x175c1c: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x175C1Cu;
    {
        const bool branch_taken_0x175c1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x175c1c) {
            ctx->pc = 0x175B98u;
            return;
        }
    }
    ctx->pc = 0x175C24u;
    // 0x175c24: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x175c24u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175c28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x175c28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175c2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x175c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175c30: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x175c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x175c34: 0x3e00008  jr          $ra
    ctx->pc = 0x175C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175C3Cu;
}
