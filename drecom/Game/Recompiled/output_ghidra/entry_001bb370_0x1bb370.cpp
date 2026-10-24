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

// Function: entry_001bb370
// Address: 0x1bb370 - 0x1bb384
void entry_001bb370_0x1bb370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb370_0x1bb370");
#endif

    switch (ctx->pc) {
        case 0x1bb378u: goto label_1bb378;
        default: break;
    }

    ctx->pc = 0x1bb370u;

    // 0x1bb370: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1BB370u;
    SET_GPR_U32(ctx, 31, 0x1BB378u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BB370u, 0x1BB378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB378u;
label_1bb378:
    // 0x1bb378: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bb378u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bb37c: 0x100001e4  b           . + 4 + (0x1E4 << 2)
    ctx->pc = 0x1BB37Cu;
    {
        const bool branch_taken_0x1bb37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb37c) {
            ctx->pc = 0x1BBB10u;
            return;
        }
    }
    ctx->pc = 0x1BB384u;
}
