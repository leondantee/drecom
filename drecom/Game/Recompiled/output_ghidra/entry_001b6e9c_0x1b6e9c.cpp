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

// Function: entry_001b6e9c
// Address: 0x1b6e9c - 0x1b6ecc
void entry_001b6e9c_0x1b6e9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6e9c_0x1b6e9c");
#endif

    switch (ctx->pc) {
        case 0x1b6ec0u: goto label_1b6ec0;
        default: break;
    }

    ctx->pc = 0x1b6e9cu;

    // 0x1b6e9c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6ea0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6ea4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1b6ea4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1b6ea8: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1b6ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1b6eac: 0x2406009a  addiu       $a2, $zero, 0x9A
    ctx->pc = 0x1b6eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
    // 0x1b6eb0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b6eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6eb4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b6eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b6eb8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1B6EB8u;
    SET_GPR_U32(ctx, 31, 0x1B6EC0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B6EB8u, 0x1B6EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6EC0u;
label_1b6ec0:
    // 0x1b6ec0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b6ec0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b6ec4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6ec8: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x1b6ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
    ctx->pc = 0x1b6eccu;
}
