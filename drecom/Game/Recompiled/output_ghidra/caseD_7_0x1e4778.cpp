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

// Function: caseD_7
// Address: 0x1e4778 - 0x1e47a0
void caseD_7_0x1e4778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1e4778");
#endif

    ctx->pc = 0x1e4778u;

    // 0x1e4778: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1e4778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1e477c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e477cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1e4780: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e4780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e4784: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x1e4784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e4788: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1e4788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1e478c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1e478cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e4790: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e4790u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e4794: 0x24470060  addiu       $a3, $v0, 0x60
    ctx->pc = 0x1e4794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1e4798: 0xc078fec  jal         func_1E3FB0
    ctx->pc = 0x1E4798u;
    SET_GPR_U32(ctx, 31, 0x1E47A0u);
    ctx->pc = 0x1E3FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3FB0u, 0x1E4798u, 0x1E47A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E47A0u;
}
