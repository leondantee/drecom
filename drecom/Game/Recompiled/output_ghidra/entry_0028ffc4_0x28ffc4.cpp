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

// Function: entry_0028ffc4
// Address: 0x28ffc4 - 0x28ffdc
void entry_0028ffc4_0x28ffc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028ffc4_0x28ffc4");
#endif

    switch (ctx->pc) {
        case 0x28ffd0u: goto label_28ffd0;
        default: break;
    }

    ctx->pc = 0x28ffc4u;

    // 0x28ffc4: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x28ffc4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28ffc8: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x28FFC8u;
    SET_GPR_U32(ctx, 31, 0x28FFD0u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x28FFC8u, 0x28FFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FFD0u;
label_28ffd0:
    // 0x28ffd0: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x28ffd0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28ffd4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x28FFD4u;
    {
        const bool branch_taken_0x28ffd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ffd4) {
            ctx->pc = 0x290064u;
            return;
        }
    }
    ctx->pc = 0x28FFDCu;
}
