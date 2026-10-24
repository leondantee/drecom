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

// Function: entry_00143b1c
// Address: 0x143b1c - 0x143b3c
void entry_00143b1c_0x143b1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143b1c_0x143b1c");
#endif

    switch (ctx->pc) {
        case 0x143b30u: goto label_143b30;
        default: break;
    }

    ctx->pc = 0x143b1cu;

    // 0x143b1c: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x143b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x143b20: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x143b20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x143b24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x143b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143b28: 0xc0765a4  jal         func_1D9690
    ctx->pc = 0x143B28u;
    SET_GPR_U32(ctx, 31, 0x143B30u);
    ctx->pc = 0x1D9690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9690u, 0x143B28u, 0x143B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143B30u;
label_143b30:
    // 0x143b30: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x143b30u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x143b34: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x143B34u;
    {
        const bool branch_taken_0x143b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143b34) {
            ctx->pc = 0x143B74u;
            return;
        }
    }
    ctx->pc = 0x143B3Cu;
}
