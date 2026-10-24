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

// Function: entry_00272ed8
// Address: 0x272ed8 - 0x272f08
void entry_00272ed8_0x272ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00272ed8_0x272ed8");
#endif

    switch (ctx->pc) {
        case 0x272ef0u: goto label_272ef0;
        default: break;
    }

    ctx->pc = 0x272ed8u;

    // 0x272ed8: 0x8e021bf0  lw          $v0, 0x1BF0($s0)
    ctx->pc = 0x272ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7152)));
    // 0x272edc: 0x2c420184  sltiu       $v0, $v0, 0x184
    ctx->pc = 0x272edcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)388) ? 1 : 0);
    // 0x272ee0: 0x1440ff09  bnez        $v0, . + 4 + (-0xF7 << 2)
    ctx->pc = 0x272EE0u;
    {
        const bool branch_taken_0x272ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272ee0) {
            ctx->pc = 0x272B08u;
            return;
        }
    }
    ctx->pc = 0x272EE8u;
    // 0x272ee8: 0xc084934  jal         func_2124D0
    ctx->pc = 0x272EE8u;
    SET_GPR_U32(ctx, 31, 0x272EF0u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x272EE8u, 0x272EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272EF0u;
label_272ef0:
    // 0x272ef0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x272ef0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x272ef4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x272ef4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x272ef8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x272ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272efc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x272efcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x272f00: 0x3e00008  jr          $ra
    ctx->pc = 0x272F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272F08u;
}
