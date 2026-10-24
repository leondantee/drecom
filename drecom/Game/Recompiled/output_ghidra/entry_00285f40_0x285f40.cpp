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

// Function: entry_00285f40
// Address: 0x285f40 - 0x285f5c
void entry_00285f40_0x285f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00285f40_0x285f40");
#endif

    switch (ctx->pc) {
        case 0x285f54u: goto label_285f54;
        default: break;
    }

    ctx->pc = 0x285f40u;

    // 0x285f40: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x285f40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285f44: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x285f44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x285f48: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x285f48u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285f4c: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x285F4Cu;
    SET_GPR_U32(ctx, 31, 0x285F54u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x285F4Cu, 0x285F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285F54u;
label_285f54:
    // 0x285f54: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x285F54u;
    {
        const bool branch_taken_0x285f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285f54) {
            ctx->pc = 0x285FDCu;
            return;
        }
    }
    ctx->pc = 0x285F5Cu;
}
