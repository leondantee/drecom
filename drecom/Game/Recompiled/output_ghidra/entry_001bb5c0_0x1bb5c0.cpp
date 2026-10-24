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

// Function: entry_001bb5c0
// Address: 0x1bb5c0 - 0x1bb5d4
void entry_001bb5c0_0x1bb5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb5c0_0x1bb5c0");
#endif

    switch (ctx->pc) {
        case 0x1bb5c8u: goto label_1bb5c8;
        default: break;
    }

    ctx->pc = 0x1bb5c0u;

    // 0x1bb5c0: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1BB5C0u;
    SET_GPR_U32(ctx, 31, 0x1BB5C8u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BB5C0u, 0x1BB5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB5C8u;
label_1bb5c8:
    // 0x1bb5c8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bb5c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bb5cc: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x1BB5CCu;
    {
        const bool branch_taken_0x1bb5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb5cc) {
            ctx->pc = 0x1BBB10u;
            return;
        }
    }
    ctx->pc = 0x1BB5D4u;
}
