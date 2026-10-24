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

// Function: entry_00174e84
// Address: 0x174e84 - 0x174ea4
void entry_00174e84_0x174e84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174e84_0x174e84");
#endif

    ctx->pc = 0x174e84u;

    // 0x174e84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x174e84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174e88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x174e88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174e8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x174e8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174e90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174e90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174e94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174e98: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x174e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x174e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x174E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174EA4u;
}
