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

// Function: entry_00251e80
// Address: 0x251e80 - 0x251ea0
void entry_00251e80_0x251e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00251e80_0x251e80");
#endif

    ctx->pc = 0x251e80u;

    // 0x251e80: 0x2e030005  sltiu       $v1, $s0, 0x5
    ctx->pc = 0x251e80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x251e84: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x251E84u;
    {
        const bool branch_taken_0x251e84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x251e84) {
            ctx->pc = 0x251E30u;
            return;
        }
    }
    ctx->pc = 0x251E8Cu;
    // 0x251e8c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x251e8cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251e90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x251e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251e94: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x251e94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x251e98: 0x3e00008  jr          $ra
    ctx->pc = 0x251E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251EA0u;
}
