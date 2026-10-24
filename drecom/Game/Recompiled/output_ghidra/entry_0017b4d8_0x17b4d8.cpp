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

// Function: entry_0017b4d8
// Address: 0x17b4d8 - 0x17b4f4
void entry_0017b4d8_0x17b4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b4d8_0x17b4d8");
#endif

    ctx->pc = 0x17b4d8u;

    // 0x17b4d8: 0xac2358f0  sw          $v1, 0x58F0($at)
    ctx->pc = 0x17b4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 22768), GPR_U32(ctx, 3));
    // 0x17b4dc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x17b4dcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b4e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17b4e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b4e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b4e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b4e8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x17b4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17b4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x17B4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B4F4u;
}
