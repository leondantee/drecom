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

// Function: entry_0028f9dc
// Address: 0x28f9dc - 0x28f9ec
void entry_0028f9dc_0x28f9dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028f9dc_0x28f9dc");
#endif

    switch (ctx->pc) {
        case 0x28f9e8u: goto label_28f9e8;
        default: break;
    }

    ctx->pc = 0x28f9dcu;

    // 0x28f9dc: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x28f9dcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28f9e0: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x28F9E0u;
    SET_GPR_U32(ctx, 31, 0x28F9E8u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x28F9E0u, 0x28F9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F9E8u;
label_28f9e8:
    // 0x28f9e8: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x28f9e8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x28f9ecu;
}
