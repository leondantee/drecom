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

// Function: entry_00290054
// Address: 0x290054 - 0x290064
void entry_00290054_0x290054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00290054_0x290054");
#endif

    switch (ctx->pc) {
        case 0x290060u: goto label_290060;
        default: break;
    }

    ctx->pc = 0x290054u;

    // 0x290054: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x290054u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x290058: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x290058u;
    SET_GPR_U32(ctx, 31, 0x290060u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x290058u, 0x290060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290060u;
label_290060:
    // 0x290060: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x290060u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x290064u;
}
