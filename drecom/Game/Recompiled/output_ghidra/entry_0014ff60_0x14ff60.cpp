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

// Function: entry_0014ff60
// Address: 0x14ff60 - 0x14ff84
void entry_0014ff60_0x14ff60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ff60_0x14ff60");
#endif

    switch (ctx->pc) {
        case 0x14ff70u: goto label_14ff70;
        case 0x14ff7cu: goto label_14ff7c;
        default: break;
    }

    ctx->pc = 0x14ff60u;

    // 0x14ff60: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14ff60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x14ff64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14ff64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14ff68: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14FF68u;
    SET_GPR_U32(ctx, 31, 0x14FF70u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14FF68u, 0x14FF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FF70u;
label_14ff70:
    // 0x14ff70: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14ff70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x14ff74: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x14FF74u;
    SET_GPR_U32(ctx, 31, 0x14FF7Cu);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x14FF74u, 0x14FF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FF7Cu;
label_14ff7c:
    // 0x14ff7c: 0x10000152  b           . + 4 + (0x152 << 2)
    ctx->pc = 0x14FF7Cu;
    {
        const bool branch_taken_0x14ff7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ff7c) {
            ctx->pc = 0x1504C8u;
            return;
        }
    }
    ctx->pc = 0x14FF84u;
}
