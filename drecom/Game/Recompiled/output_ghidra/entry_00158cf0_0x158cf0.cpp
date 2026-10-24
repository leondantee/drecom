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

// Function: entry_00158cf0
// Address: 0x158cf0 - 0x158d18
void entry_00158cf0_0x158cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158cf0_0x158cf0");
#endif

    ctx->pc = 0x158cf0u;

    // 0x158cf0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x158cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x158cf4: 0x8c23fde0  lw          $v1, -0x220($at)
    ctx->pc = 0x158cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CFDE0u));
    // 0x158cf8: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x158cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x158cfc: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x158cfcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x158d00: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x158d00u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158d04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x158d04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158d08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x158d08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158d0c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x158d0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x158d10: 0x3e00008  jr          $ra
    ctx->pc = 0x158D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158D18u;
}
