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

// Function: caseD_4
// Address: 0x1e46e8 - 0x1e4718
void caseD_4_0x1e46e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1e46e8");
#endif

    switch (ctx->pc) {
        case 0x1e4710u: goto label_1e4710;
        default: break;
    }

    ctx->pc = 0x1e46e8u;

    // 0x1e46e8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1e46e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1e46ec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e46ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1e46f0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e46f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e46f4: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x1e46f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e46f8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1e46f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1e46fc: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1e46fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e4700: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e4700u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e4704: 0x24470060  addiu       $a3, $v0, 0x60
    ctx->pc = 0x1e4704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1e4708: 0xc078a8c  jal         func_1E2A30
    ctx->pc = 0x1E4708u;
    SET_GPR_U32(ctx, 31, 0x1E4710u);
    ctx->pc = 0x1E2A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2A30u, 0x1E4708u, 0x1E4710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4710u;
label_1e4710:
    // 0x1e4710: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1E4710u;
    {
        const bool branch_taken_0x1e4710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4710) {
            ctx->pc = 0x1E47A0u;
            return;
        }
    }
    ctx->pc = 0x1E4718u;
}
