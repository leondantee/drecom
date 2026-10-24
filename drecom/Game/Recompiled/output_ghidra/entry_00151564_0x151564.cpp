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

// Function: entry_00151564
// Address: 0x151564 - 0x151594
void entry_00151564_0x151564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151564_0x151564");
#endif

    ctx->pc = 0x151564u;

    // 0x151564: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x151564u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x151568: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x151568u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15156c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15156cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x151570: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x151570u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x151574: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x151574u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x151578: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x151578u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15157c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15157cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151580: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151584: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151588: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x151588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x15158c: 0x3e00008  jr          $ra
    ctx->pc = 0x15158Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15158Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151594u;
}
