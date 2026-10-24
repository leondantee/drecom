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

// Function: entry_001503cc
// Address: 0x1503cc - 0x1503f0
void entry_001503cc_0x1503cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001503cc_0x1503cc");
#endif

    switch (ctx->pc) {
        case 0x1503dcu: goto label_1503dc;
        case 0x1503e8u: goto label_1503e8;
        default: break;
    }

    ctx->pc = 0x1503ccu;

    // 0x1503cc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1503ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1503d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1503d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1503d4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1503D4u;
    SET_GPR_U32(ctx, 31, 0x1503DCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1503D4u, 0x1503DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1503DCu;
label_1503dc:
    // 0x1503dc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1503dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1503e0: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x1503E0u;
    SET_GPR_U32(ctx, 31, 0x1503E8u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x1503E0u, 0x1503E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1503E8u;
label_1503e8:
    // 0x1503e8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1503E8u;
    {
        const bool branch_taken_0x1503e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1503e8) {
            ctx->pc = 0x1504C8u;
            return;
        }
    }
    ctx->pc = 0x1503F0u;
}
