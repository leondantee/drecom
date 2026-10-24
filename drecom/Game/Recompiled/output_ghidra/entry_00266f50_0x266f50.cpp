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

// Function: entry_00266f50
// Address: 0x266f50 - 0x266f80
void entry_00266f50_0x266f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00266f50_0x266f50");
#endif

    ctx->pc = 0x266f50u;

    // 0x266f50: 0xfe000a08  sd          $zero, 0xA08($s0)
    ctx->pc = 0x266f50u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2568), GPR_U64(ctx, 0));
    // 0x266f54: 0x8e030368  lw          $v1, 0x368($s0)
    ctx->pc = 0x266f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x266f58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x266f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x266f5c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x266F5Cu;
    {
        const bool branch_taken_0x266f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266f5c) {
            ctx->pc = 0x266F80u;
            return;
        }
    }
    ctx->pc = 0x266F64u;
    // 0x266f64: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x266f64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x266f68: 0x8e050368  lw          $a1, 0x368($s0)
    ctx->pc = 0x266f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x266f6c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x266f6cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x266f70: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x266f70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266f74: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x266f74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x266f78: 0xc0965d0  jal         func_259740
    ctx->pc = 0x266F78u;
    SET_GPR_U32(ctx, 31, 0x266F80u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x266F78u, 0x266F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266F80u;
}
