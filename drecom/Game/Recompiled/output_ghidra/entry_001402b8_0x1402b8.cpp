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

// Function: entry_001402b8
// Address: 0x1402b8 - 0x1402ec
void entry_001402b8_0x1402b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001402b8_0x1402b8");
#endif

    switch (ctx->pc) {
        case 0x1402d8u: goto label_1402d8;
        default: break;
    }

    ctx->pc = 0x1402b8u;

    // 0x1402b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1402b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1402bc: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x1402bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x1402c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1402c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1402c4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1402c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1402c8: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
    ctx->pc = 0x1402C8u;
    {
        const bool branch_taken_0x1402c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1402c8) {
            ctx->pc = 0x140198u;
            return;
        }
    }
    ctx->pc = 0x1402D0u;
    // 0x1402d0: 0xc0674dc  jal         func_19D370
    ctx->pc = 0x1402D0u;
    SET_GPR_U32(ctx, 31, 0x1402D8u);
    ctx->pc = 0x19D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D370u, 0x1402D0u, 0x1402D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1402D8u;
label_1402d8:
    // 0x1402d8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1402d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1402dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1402dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1402e0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1402e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1402e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1402E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1402E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1402ECu;
}
