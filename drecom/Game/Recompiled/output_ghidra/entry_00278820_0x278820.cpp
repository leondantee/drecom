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

// Function: entry_00278820
// Address: 0x278820 - 0x278840
void entry_00278820_0x278820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00278820_0x278820");
#endif

    ctx->pc = 0x278820u;

    // 0x278820: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x278820u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x278824: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x278824u;
    {
        const bool branch_taken_0x278824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x278824) {
            ctx->pc = 0x2787E8u;
            return;
        }
    }
    ctx->pc = 0x27882Cu;
    // 0x27882c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x27882cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278830: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x278830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278834: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x278834u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x278838: 0x3e00008  jr          $ra
    ctx->pc = 0x278838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278840u;
}
