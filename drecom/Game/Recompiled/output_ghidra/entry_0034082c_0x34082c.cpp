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

// Function: entry_0034082c
// Address: 0x34082c - 0x340868
void entry_0034082c_0x34082c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034082c_0x34082c");
#endif

    switch (ctx->pc) {
        case 0x340850u: goto label_340850;
        case 0x340860u: goto label_340860;
        default: break;
    }

    ctx->pc = 0x34082cu;

    // 0x34082c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34082cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340830: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x340830u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x340834: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x340834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x340838: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x340838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34083c: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x34083cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x340840: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x340840u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x340844: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x340844u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x340848: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x340848u;
    SET_GPR_U32(ctx, 31, 0x340850u);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x340848u, 0x340850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340850u;
label_340850:
    // 0x340850: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x340850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340854: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x340854u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x340858: 0xc0cfcbc  jal         func_33F2F0
    ctx->pc = 0x340858u;
    SET_GPR_U32(ctx, 31, 0x340860u);
    ctx->pc = 0x33F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F2F0u, 0x340858u, 0x340860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340860u;
label_340860:
    // 0x340860: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x340860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x340864: 0x0  nop
    ctx->pc = 0x340864u;
    // NOP
    ctx->pc = 0x340868u;
}
