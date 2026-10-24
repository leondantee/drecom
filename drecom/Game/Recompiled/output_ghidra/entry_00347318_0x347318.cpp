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

// Function: entry_00347318
// Address: 0x347318 - 0x347338
void entry_00347318_0x347318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00347318_0x347318");
#endif

    ctx->pc = 0x347318u;

    // 0x347318: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x347318u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34731c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34731cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x347320: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x347320u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x347324: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x347324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347328: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x347328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34732c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x34732cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x347330: 0x3e00008  jr          $ra
    ctx->pc = 0x347330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347338u;
}
