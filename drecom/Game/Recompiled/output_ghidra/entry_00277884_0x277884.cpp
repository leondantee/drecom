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

// Function: entry_00277884
// Address: 0x277884 - 0x2778a0
void entry_00277884_0x277884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00277884_0x277884");
#endif

    ctx->pc = 0x277884u;

    // 0x277884: 0xa420d4be  sh          $zero, -0x2B42($at)
    ctx->pc = 0x277884u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294956222), (uint16_t)GPR_U32(ctx, 0));
    // 0x277888: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x277888u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27788c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27788cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277890: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x277890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277894: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x277894u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x277898: 0x3e00008  jr          $ra
    ctx->pc = 0x277898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2778A0u;
}
