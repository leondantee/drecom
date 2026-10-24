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

// Function: entry_002657c0
// Address: 0x2657c0 - 0x2657d4
void entry_002657c0_0x2657c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002657c0_0x2657c0");
#endif

    switch (ctx->pc) {
        case 0x2657ccu: goto label_2657cc;
        default: break;
    }

    ctx->pc = 0x2657c0u;

    // 0x2657c0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2657c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2657c4: 0xc077058  jal         func_1DC160
    ctx->pc = 0x2657C4u;
    SET_GPR_U32(ctx, 31, 0x2657CCu);
    ctx->pc = 0x1DC160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC160u, 0x2657C4u, 0x2657CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2657CCu;
label_2657cc:
    // 0x2657cc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2657CCu;
    {
        const bool branch_taken_0x2657cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2657cc) {
            ctx->pc = 0x265810u;
            return;
        }
    }
    ctx->pc = 0x2657D4u;
}
