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

// Function: entry_002816d8
// Address: 0x2816d8 - 0x281700
void entry_002816d8_0x2816d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002816d8_0x2816d8");
#endif

    switch (ctx->pc) {
        case 0x2816ecu: goto label_2816ec;
        default: break;
    }

    ctx->pc = 0x2816d8u;

    // 0x2816d8: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x2816d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2816dc: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x2816DCu;
    {
        const bool branch_taken_0x2816dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2816dc) {
            ctx->pc = 0x2815B4u;
            return;
        }
    }
    ctx->pc = 0x2816E4u;
    // 0x2816e4: 0xc0a0640  jal         func_281900
    ctx->pc = 0x2816E4u;
    SET_GPR_U32(ctx, 31, 0x2816ECu);
    ctx->pc = 0x281900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281900u, 0x2816E4u, 0x2816ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2816ECu;
label_2816ec:
    // 0x2816ec: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2816ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2816f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2816f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2816f4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2816f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2816f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2816F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2816F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281700u;
}
