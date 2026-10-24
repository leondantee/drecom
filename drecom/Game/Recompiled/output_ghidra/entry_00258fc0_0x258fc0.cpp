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

// Function: entry_00258fc0
// Address: 0x258fc0 - 0x258fd8
void entry_00258fc0_0x258fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00258fc0_0x258fc0");
#endif

    switch (ctx->pc) {
        case 0x258fd4u: goto label_258fd4;
        default: break;
    }

    ctx->pc = 0x258fc0u;

    // 0x258fc0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x258fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258fc4: 0xdfa50028  ld          $a1, 0x28($sp)
    ctx->pc = 0x258fc4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x258fc8: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x258fc8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x258fcc: 0xc096400  jal         func_259000
    ctx->pc = 0x258FCCu;
    SET_GPR_U32(ctx, 31, 0x258FD4u);
    ctx->pc = 0x259000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259000u, 0x258FCCu, 0x258FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258FD4u;
label_258fd4:
    // 0x258fd4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x258fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x258fd8u;
}
