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

// Function: entry_0021b91c
// Address: 0x21b91c - 0x21b964
void entry_0021b91c_0x21b91c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b91c_0x21b91c");
#endif

    switch (ctx->pc) {
        case 0x21b948u: goto label_21b948;
        case 0x21b954u: goto label_21b954;
        default: break;
    }

    ctx->pc = 0x21b91cu;

    // 0x21b91c: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x21b91cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21b920: 0x14c00010  bnez        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x21B920u;
    {
        const bool branch_taken_0x21b920 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b920) {
            ctx->pc = 0x21B964u;
            return;
        }
    }
    ctx->pc = 0x21B928u;
    // 0x21b928: 0x24021409  addiu       $v0, $zero, 0x1409
    ctx->pc = 0x21b928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5129));
    // 0x21b92c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21b92cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21b930: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21b930u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b934: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x21b934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21b938: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x21b938u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21b93c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21b93cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b940: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21B940u;
    SET_GPR_U32(ctx, 31, 0x21B948u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21B940u, 0x21B948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B948u;
label_21b948:
    // 0x21b948: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21b948u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21b94c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21B94Cu;
    SET_GPR_U32(ctx, 31, 0x21B954u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21B94Cu, 0x21B954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B954u;
label_21b954:
    // 0x21b954: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x21b954u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21b958: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x21b958u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x21b95c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x21B95Cu;
    {
        const bool branch_taken_0x21b95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b95c) {
            ctx->pc = 0x21B9B8u;
            return;
        }
    }
    ctx->pc = 0x21B964u;
}
