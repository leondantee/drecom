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

// Function: entry_00143b3c
// Address: 0x143b3c - 0x143b5c
void entry_00143b3c_0x143b3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143b3c_0x143b3c");
#endif

    switch (ctx->pc) {
        case 0x143b50u: goto label_143b50;
        default: break;
    }

    ctx->pc = 0x143b3cu;

    // 0x143b3c: 0x24040081  addiu       $a0, $zero, 0x81
    ctx->pc = 0x143b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x143b40: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x143b40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x143b44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x143b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143b48: 0xc0765a4  jal         func_1D9690
    ctx->pc = 0x143B48u;
    SET_GPR_U32(ctx, 31, 0x143B50u);
    ctx->pc = 0x1D9690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9690u, 0x143B48u, 0x143B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143B50u;
label_143b50:
    // 0x143b50: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x143b50u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x143b54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x143B54u;
    {
        const bool branch_taken_0x143b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143b54) {
            ctx->pc = 0x143B74u;
            return;
        }
    }
    ctx->pc = 0x143B5Cu;
}
