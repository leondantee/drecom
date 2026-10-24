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

// Function: entry_0027f400
// Address: 0x27f400 - 0x27f420
void entry_0027f400_0x27f400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027f400_0x27f400");
#endif

    ctx->pc = 0x27f400u;

    // 0x27f400: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x27f400u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x27f404: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x27F404u;
    {
        const bool branch_taken_0x27f404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f404) {
            ctx->pc = 0x27F398u;
            return;
        }
    }
    ctx->pc = 0x27F40Cu;
    // 0x27f40c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x27f40cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f410: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27f410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f414: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27f414u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27f418: 0x3e00008  jr          $ra
    ctx->pc = 0x27F418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F420u;
}
