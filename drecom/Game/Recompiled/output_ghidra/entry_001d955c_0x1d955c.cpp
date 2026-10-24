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

// Function: entry_001d955c
// Address: 0x1d955c - 0x1d9580
void entry_001d955c_0x1d955c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d955c_0x1d955c");
#endif

    switch (ctx->pc) {
        case 0x1d9564u: goto label_1d9564;
        default: break;
    }

    ctx->pc = 0x1d955cu;

    // 0x1d955c: 0xc0762e8  jal         func_1D8BA0
    ctx->pc = 0x1D955Cu;
    SET_GPR_U32(ctx, 31, 0x1D9564u);
    ctx->pc = 0x1D8BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BA0u, 0x1D955Cu, 0x1D9564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9564u;
label_1d9564:
    // 0x1d9564: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1d9564u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d9568: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d9568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d956c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1d956cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9570: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d9570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9574: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1d9574u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d9578: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9580u;
}
