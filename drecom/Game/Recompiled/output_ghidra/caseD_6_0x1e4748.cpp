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

// Function: caseD_6
// Address: 0x1e4748 - 0x1e4778
void caseD_6_0x1e4748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1e4748");
#endif

    switch (ctx->pc) {
        case 0x1e4770u: goto label_1e4770;
        default: break;
    }

    ctx->pc = 0x1e4748u;

    // 0x1e4748: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1e4748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1e474c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e474cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1e4750: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e4750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e4754: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x1e4754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e4758: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1e4758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1e475c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1e475cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e4760: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e4760u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e4764: 0x24470060  addiu       $a3, $v0, 0x60
    ctx->pc = 0x1e4764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1e4768: 0xc078e1c  jal         func_1E3870
    ctx->pc = 0x1E4768u;
    SET_GPR_U32(ctx, 31, 0x1E4770u);
    ctx->pc = 0x1E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3870u, 0x1E4768u, 0x1E4770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4770u;
label_1e4770:
    // 0x1e4770: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E4770u;
    {
        const bool branch_taken_0x1e4770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4770) {
            ctx->pc = 0x1E47A0u;
            return;
        }
    }
    ctx->pc = 0x1E4778u;
}
