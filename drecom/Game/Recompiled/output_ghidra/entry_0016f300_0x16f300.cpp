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

// Function: entry_0016f300
// Address: 0x16f300 - 0x16f318
void entry_0016f300_0x16f300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f300_0x16f300");
#endif

    switch (ctx->pc) {
        case 0x16f310u: goto label_16f310;
        default: break;
    }

    ctx->pc = 0x16f300u;

    // 0x16f300: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16f300u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16f304: 0x8ee50a68  lw          $a1, 0xA68($s7)
    ctx->pc = 0x16f304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x16f308: 0xc0951c0  jal         func_254700
    ctx->pc = 0x16F308u;
    SET_GPR_U32(ctx, 31, 0x16F310u);
    ctx->pc = 0x254700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254700u, 0x16F308u, 0x16F310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F310u;
label_16f310:
    // 0x16f310: 0xaee20a68  sw          $v0, 0xA68($s7)
    ctx->pc = 0x16f310u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 2));
    // 0x16f314: 0x0  nop
    ctx->pc = 0x16f314u;
    // NOP
    ctx->pc = 0x16f318u;
}
