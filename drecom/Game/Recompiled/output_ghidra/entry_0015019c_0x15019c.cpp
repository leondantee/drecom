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

// Function: entry_0015019c
// Address: 0x15019c - 0x1501c0
void entry_0015019c_0x15019c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015019c_0x15019c");
#endif

    switch (ctx->pc) {
        case 0x1501acu: goto label_1501ac;
        case 0x1501b8u: goto label_1501b8;
        default: break;
    }

    ctx->pc = 0x15019cu;

    // 0x15019c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15019cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1501a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1501a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1501a4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1501A4u;
    SET_GPR_U32(ctx, 31, 0x1501ACu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1501A4u, 0x1501ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1501ACu;
label_1501ac:
    // 0x1501ac: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1501acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1501b0: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x1501B0u;
    SET_GPR_U32(ctx, 31, 0x1501B8u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x1501B0u, 0x1501B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1501B8u;
label_1501b8:
    // 0x1501b8: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x1501B8u;
    {
        const bool branch_taken_0x1501b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1501b8) {
            ctx->pc = 0x1504C8u;
            return;
        }
    }
    ctx->pc = 0x1501C0u;
}
