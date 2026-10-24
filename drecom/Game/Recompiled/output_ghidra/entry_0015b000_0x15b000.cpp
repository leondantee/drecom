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

// Function: entry_0015b000
// Address: 0x15b000 - 0x15b014
void entry_0015b000_0x15b000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b000_0x15b000");
#endif

    switch (ctx->pc) {
        case 0x15b00cu: goto label_15b00c;
        default: break;
    }

    ctx->pc = 0x15b000u;

    // 0x15b000: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15b000u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15b004: 0xc095df0  jal         func_2577C0
    ctx->pc = 0x15B004u;
    SET_GPR_U32(ctx, 31, 0x15B00Cu);
    ctx->pc = 0x2577C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2577C0u, 0x15B004u, 0x15B00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B00Cu;
label_15b00c:
    // 0x15b00c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15B00Cu;
    {
        const bool branch_taken_0x15b00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b00c) {
            ctx->pc = 0x15B050u;
            return;
        }
    }
    ctx->pc = 0x15B014u;
}
