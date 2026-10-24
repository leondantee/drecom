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

// Function: entry_00357158
// Address: 0x357158 - 0x357194
void entry_00357158_0x357158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00357158_0x357158");
#endif

    switch (ctx->pc) {
        case 0x35717cu: goto label_35717c;
        case 0x357188u: goto label_357188;
        default: break;
    }

    ctx->pc = 0x357158u;

    // 0x357158: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x357158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35715c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x35715Cu;
    {
        const bool branch_taken_0x35715c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35715c) {
            ctx->pc = 0x357194u;
            return;
        }
    }
    ctx->pc = 0x357164u;
    // 0x357164: 0x2404171f  addiu       $a0, $zero, 0x171F
    ctx->pc = 0x357164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5919));
    // 0x357168: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x357168u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35716c: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x35716cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x357170: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x357170u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x357174: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x357174u;
    SET_GPR_U32(ctx, 31, 0x35717Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x357174u, 0x35717Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35717Cu;
label_35717c:
    // 0x35717c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x35717cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x357180: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x357180u;
    SET_GPR_U32(ctx, 31, 0x357188u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x357180u, 0x357188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357188u;
label_357188:
    // 0x357188: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x357188u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35718c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x35718Cu;
    {
        const bool branch_taken_0x35718c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35718c) {
            ctx->pc = 0x3571E4u;
            return;
        }
    }
    ctx->pc = 0x357194u;
}
