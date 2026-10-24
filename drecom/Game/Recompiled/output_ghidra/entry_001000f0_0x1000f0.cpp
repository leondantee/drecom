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

// Function: entry_001000f0
// Address: 0x1000f0 - 0x1000fc
void entry_001000f0_0x1000f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001000f0_0x1000f0");
#endif

    switch (ctx->pc) {
        case 0x1000f8u: goto label_1000f8;
        default: break;
    }

    ctx->pc = 0x1000f0u;

    // 0x1000f0: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x1000F0u;
    SET_GPR_U32(ctx, 31, 0x1000F8u);
    ctx->pc = 0x1000F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1000F0u;
    // 0x1000f4: 0x70402e28  paddub      $a1, $v0, $zero (Delay Slot)
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x1000F0u, 0x1000F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1000F8u;
label_1000f8:
    // 0x1000f8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1000f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1000fcu;
}
