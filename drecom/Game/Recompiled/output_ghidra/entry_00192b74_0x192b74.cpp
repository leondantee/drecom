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

// Function: entry_00192b74
// Address: 0x192b74 - 0x192ba8
void entry_00192b74_0x192b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192b74_0x192b74");
#endif

    switch (ctx->pc) {
        case 0x192b94u: goto label_192b94;
        default: break;
    }

    ctx->pc = 0x192b74u;

    // 0x192b74: 0x72a0be28  paddub      $s7, $s5, $zero
    ctx->pc = 0x192b74u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x192b78: 0x72a01628  paddub      $v0, $s5, $zero
    ctx->pc = 0x192b78u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x192b7c: 0x24550008  addiu       $s5, $v0, 0x8
    ctx->pc = 0x192b7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x192b80: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x192b80u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x192b84: 0x72c02628  paddub      $a0, $s6, $zero
    ctx->pc = 0x192b84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x192b88: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x192b88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x192b8c: 0xc0d889c  jal         func_362270
    ctx->pc = 0x192B8Cu;
    SET_GPR_U32(ctx, 31, 0x192B94u);
    ctx->pc = 0x362270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362270u, 0x192B8Cu, 0x192B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192B94u;
label_192b94:
    // 0x192b94: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x192b94u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x192b98: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x192b98u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x192b9c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x192b9cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x192ba0: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x192BA0u;
    {
        const bool branch_taken_0x192ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192ba0) {
            ctx->pc = 0x192D40u;
            return;
        }
    }
    ctx->pc = 0x192BA8u;
}
