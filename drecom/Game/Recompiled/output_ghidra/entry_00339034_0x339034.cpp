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

// Function: entry_00339034
// Address: 0x339034 - 0x339058
void entry_00339034_0x339034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00339034_0x339034");
#endif

    ctx->pc = 0x339034u;

    // 0x339034: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x339034u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x339038: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x339038u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33903c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33903cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x339040: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x339040u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x339044: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x339044u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x339048: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x339048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33904c: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x33904cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x339050: 0x3e00008  jr          $ra
    ctx->pc = 0x339050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339058u;
}
