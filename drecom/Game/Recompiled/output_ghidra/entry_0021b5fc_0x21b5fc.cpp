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

// Function: entry_0021b5fc
// Address: 0x21b5fc - 0x21b638
void entry_0021b5fc_0x21b5fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b5fc_0x21b5fc");
#endif

    switch (ctx->pc) {
        case 0x21b620u: goto label_21b620;
        case 0x21b62cu: goto label_21b62c;
        default: break;
    }

    ctx->pc = 0x21b5fcu;

    // 0x21b5fc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x21b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21b600: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21B600u;
    {
        const bool branch_taken_0x21b600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b600) {
            ctx->pc = 0x21B638u;
            return;
        }
    }
    ctx->pc = 0x21B608u;
    // 0x21b608: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x21b608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x21b60c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21b60cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b610: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x21b610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21b614: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21b614u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b618: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21B618u;
    SET_GPR_U32(ctx, 31, 0x21B620u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21B618u, 0x21B620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B620u;
label_21b620:
    // 0x21b620: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21b620u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21b624: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21B624u;
    SET_GPR_U32(ctx, 31, 0x21B62Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21B624u, 0x21B62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B62Cu;
label_21b62c:
    // 0x21b62c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x21b62cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21b630: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x21B630u;
    {
        const bool branch_taken_0x21b630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b630) {
            ctx->pc = 0x21B688u;
            return;
        }
    }
    ctx->pc = 0x21B638u;
}
