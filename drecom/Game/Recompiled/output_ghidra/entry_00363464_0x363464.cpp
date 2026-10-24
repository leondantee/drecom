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

// Function: entry_00363464
// Address: 0x363464 - 0x36347c
void entry_00363464_0x363464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00363464_0x363464");
#endif

    switch (ctx->pc) {
        case 0x363474u: goto label_363474;
        default: break;
    }

    ctx->pc = 0x363464u;

    // 0x363464: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x363464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363468: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x363468u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x36346c: 0xc0da08c  jal         func_368230
    ctx->pc = 0x36346Cu;
    SET_GPR_U32(ctx, 31, 0x363474u);
    ctx->pc = 0x368230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368230u, 0x36346Cu, 0x363474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363474u;
label_363474:
    // 0x363474: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x363474u;
    {
        const bool branch_taken_0x363474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x363474) {
            ctx->pc = 0x363518u;
            return;
        }
    }
    ctx->pc = 0x36347Cu;
}
