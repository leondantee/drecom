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

// Function: entry_0025ed50
// Address: 0x25ed50 - 0x25ed68
void entry_0025ed50_0x25ed50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025ed50_0x25ed50");
#endif

    switch (ctx->pc) {
        case 0x25ed64u: goto label_25ed64;
        default: break;
    }

    ctx->pc = 0x25ed50u;

    // 0x25ed50: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x25ed50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x25ed54: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x25ed54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x25ed58: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x25ed58u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25ed5c: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x25ED5Cu;
    SET_GPR_U32(ctx, 31, 0x25ED64u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25ED5Cu, 0x25ED64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ED64u;
label_25ed64:
    // 0x25ed64: 0x0  nop
    ctx->pc = 0x25ed64u;
    // NOP
    ctx->pc = 0x25ed68u;
}
