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

// Function: entry_001500bc
// Address: 0x1500bc - 0x1500e0
void entry_001500bc_0x1500bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001500bc_0x1500bc");
#endif

    switch (ctx->pc) {
        case 0x1500ccu: goto label_1500cc;
        case 0x1500d8u: goto label_1500d8;
        default: break;
    }

    ctx->pc = 0x1500bcu;

    // 0x1500bc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1500bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1500c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1500c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1500c4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1500C4u;
    SET_GPR_U32(ctx, 31, 0x1500CCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1500C4u, 0x1500CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1500CCu;
label_1500cc:
    // 0x1500cc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1500ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1500d0: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x1500D0u;
    SET_GPR_U32(ctx, 31, 0x1500D8u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x1500D0u, 0x1500D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1500D8u;
label_1500d8:
    // 0x1500d8: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x1500D8u;
    {
        const bool branch_taken_0x1500d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1500d8) {
            ctx->pc = 0x1504C8u;
            return;
        }
    }
    ctx->pc = 0x1500E0u;
}
