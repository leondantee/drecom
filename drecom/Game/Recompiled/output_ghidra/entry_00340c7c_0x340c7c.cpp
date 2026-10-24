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

// Function: entry_00340c7c
// Address: 0x340c7c - 0x340c9c
void entry_00340c7c_0x340c7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340c7c_0x340c7c");
#endif

    switch (ctx->pc) {
        case 0x340c94u: goto label_340c94;
        default: break;
    }

    ctx->pc = 0x340c7cu;

    // 0x340c7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x340c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340c80: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x340c80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340c84: 0x24451200  addiu       $a1, $v0, 0x1200
    ctx->pc = 0x340c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x340c88: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x340c88u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340c8c: 0xc0bd488  jal         func_2F5220
    ctx->pc = 0x340C8Cu;
    SET_GPR_U32(ctx, 31, 0x340C94u);
    ctx->pc = 0x2F5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5220u, 0x340C8Cu, 0x340C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340C94u;
label_340c94:
    // 0x340c94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x340C94u;
    {
        const bool branch_taken_0x340c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340c94) {
            ctx->pc = 0x340CB8u;
            return;
        }
    }
    ctx->pc = 0x340C9Cu;
}
