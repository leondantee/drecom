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

// Function: entry_00258f00
// Address: 0x258f00 - 0x258f18
void entry_00258f00_0x258f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00258f00_0x258f00");
#endif

    switch (ctx->pc) {
        case 0x258f14u: goto label_258f14;
        default: break;
    }

    ctx->pc = 0x258f00u;

    // 0x258f00: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x258f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258f04: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x258f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x258f08: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x258f08u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x258f0c: 0xc0963d0  jal         func_258F40
    ctx->pc = 0x258F0Cu;
    SET_GPR_U32(ctx, 31, 0x258F14u);
    ctx->pc = 0x258F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258F40u, 0x258F0Cu, 0x258F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258F14u;
label_258f14:
    // 0x258f14: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x258f14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x258f18u;
}
