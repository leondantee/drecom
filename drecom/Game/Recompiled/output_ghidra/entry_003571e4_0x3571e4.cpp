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

// Function: entry_003571e4
// Address: 0x3571e4 - 0x357220
void entry_003571e4_0x3571e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003571e4_0x3571e4");
#endif

    switch (ctx->pc) {
        case 0x357208u: goto label_357208;
        case 0x357214u: goto label_357214;
        default: break;
    }

    ctx->pc = 0x3571e4u;

    // 0x3571e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3571e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3571e8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3571E8u;
    {
        const bool branch_taken_0x3571e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3571e8) {
            ctx->pc = 0x357220u;
            return;
        }
    }
    ctx->pc = 0x3571F0u;
    // 0x3571f0: 0x2404171f  addiu       $a0, $zero, 0x171F
    ctx->pc = 0x3571f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5919));
    // 0x3571f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3571f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3571f8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x3571f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3571fc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3571fcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x357200: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x357200u;
    SET_GPR_U32(ctx, 31, 0x357208u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x357200u, 0x357208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357208u;
label_357208:
    // 0x357208: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x357208u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35720c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x35720Cu;
    SET_GPR_U32(ctx, 31, 0x357214u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x35720Cu, 0x357214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357214u;
label_357214:
    // 0x357214: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x357214u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x357218: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x357218u;
    {
        const bool branch_taken_0x357218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357218) {
            ctx->pc = 0x357270u;
            return;
        }
    }
    ctx->pc = 0x357220u;
}
