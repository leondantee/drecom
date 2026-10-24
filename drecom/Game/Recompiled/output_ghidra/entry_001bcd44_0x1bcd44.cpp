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

// Function: entry_001bcd44
// Address: 0x1bcd44 - 0x1bcd58
void entry_001bcd44_0x1bcd44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcd44_0x1bcd44");
#endif

    switch (ctx->pc) {
        case 0x1bcd4cu: goto label_1bcd4c;
        default: break;
    }

    ctx->pc = 0x1bcd44u;

    // 0x1bcd44: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1BCD44u;
    SET_GPR_U32(ctx, 31, 0x1BCD4Cu);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BCD44u, 0x1BCD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD4Cu;
label_1bcd4c:
    // 0x1bcd4c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bcd4cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bcd50: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x1BCD50u;
    {
        const bool branch_taken_0x1bcd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcd50) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BCD58u;
}
