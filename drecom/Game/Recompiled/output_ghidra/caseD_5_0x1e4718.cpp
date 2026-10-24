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

// Function: caseD_5
// Address: 0x1e4718 - 0x1e4748
void caseD_5_0x1e4718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1e4718");
#endif

    switch (ctx->pc) {
        case 0x1e4740u: goto label_1e4740;
        default: break;
    }

    ctx->pc = 0x1e4718u;

    // 0x1e4718: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1e4718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1e471c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e471cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1e4720: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e4720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e4724: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x1e4724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e4728: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1e4728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1e472c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1e472cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e4730: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e4730u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e4734: 0x24470060  addiu       $a3, $v0, 0x60
    ctx->pc = 0x1e4734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1e4738: 0xc078cbc  jal         func_1E32F0
    ctx->pc = 0x1E4738u;
    SET_GPR_U32(ctx, 31, 0x1E4740u);
    ctx->pc = 0x1E32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E32F0u, 0x1E4738u, 0x1E4740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4740u;
label_1e4740:
    // 0x1e4740: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1E4740u;
    {
        const bool branch_taken_0x1e4740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4740) {
            ctx->pc = 0x1E47A0u;
            return;
        }
    }
    ctx->pc = 0x1E4748u;
}
