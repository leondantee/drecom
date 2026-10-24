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

// Function: entry_0016a128
// Address: 0x16a128 - 0x16a148
void entry_0016a128_0x16a128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a128_0x16a128");
#endif

    switch (ctx->pc) {
        case 0x16a138u: goto label_16a138;
        default: break;
    }

    ctx->pc = 0x16a128u;

    // 0x16a128: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x16a128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16a12c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x16a12cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16a130: 0xc05a8f0  jal         func_16A3C0
    ctx->pc = 0x16A130u;
    SET_GPR_U32(ctx, 31, 0x16A138u);
    ctx->pc = 0x16A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A3C0u, 0x16A130u, 0x16A138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A138u;
label_16a138:
    // 0x16a138: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16a138u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x16a13c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x16a13cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x16a140: 0x7200ae28  paddub      $s5, $s0, $zero
    ctx->pc = 0x16a140u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16a144: 0x0  nop
    ctx->pc = 0x16a144u;
    // NOP
    ctx->pc = 0x16a148u;
}
