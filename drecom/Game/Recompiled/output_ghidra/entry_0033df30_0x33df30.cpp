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

// Function: entry_0033df30
// Address: 0x33df30 - 0x33df58
void entry_0033df30_0x33df30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033df30_0x33df30");
#endif

    ctx->pc = 0x33df30u;

    // 0x33df30: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x33df30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x33df34: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x33df34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x33df38: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x33df38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x33df3c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33df3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33df40: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x33df40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x33df44: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x33df44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33df48: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x33df48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x33df4c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x33df4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x33df50: 0xc079140  jal         func_1E4500
    ctx->pc = 0x33DF50u;
    SET_GPR_U32(ctx, 31, 0x33DF58u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x33DF50u, 0x33DF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DF58u;
}
