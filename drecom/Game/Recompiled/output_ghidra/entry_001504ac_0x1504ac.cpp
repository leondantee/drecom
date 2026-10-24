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

// Function: entry_001504ac
// Address: 0x1504ac - 0x1504c8
void entry_001504ac_0x1504ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001504ac_0x1504ac");
#endif

    switch (ctx->pc) {
        case 0x1504bcu: goto label_1504bc;
        default: break;
    }

    ctx->pc = 0x1504acu;

    // 0x1504ac: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1504acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1504b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1504b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1504b4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1504B4u;
    SET_GPR_U32(ctx, 31, 0x1504BCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1504B4u, 0x1504BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1504BCu;
label_1504bc:
    // 0x1504bc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1504bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1504c0: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x1504C0u;
    SET_GPR_U32(ctx, 31, 0x1504C8u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x1504C0u, 0x1504C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1504C8u;
}
