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

// Function: entry_0014ab44
// Address: 0x14ab44 - 0x14ab58
void entry_0014ab44_0x14ab44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ab44_0x14ab44");
#endif

    switch (ctx->pc) {
        case 0x14ab50u: goto label_14ab50;
        default: break;
    }

    ctx->pc = 0x14ab44u;

    // 0x14ab44: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14ab44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14ab48: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14AB48u;
    SET_GPR_U32(ctx, 31, 0x14AB50u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14AB48u, 0x14AB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB50u;
label_14ab50:
    // 0x14ab50: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x14AB50u;
    {
        const bool branch_taken_0x14ab50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ab50) {
            ctx->pc = 0x14AF40u;
            return;
        }
    }
    ctx->pc = 0x14AB58u;
}
