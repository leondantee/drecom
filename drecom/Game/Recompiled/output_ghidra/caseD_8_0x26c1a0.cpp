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

// Function: caseD_8
// Address: 0x26c1a0 - 0x26c1cc
void caseD_8_0x26c1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x26c1a0");
#endif

    switch (ctx->pc) {
        case 0x26c1c0u: goto label_26c1c0;
        default: break;
    }

    ctx->pc = 0x26c1a0u;

    // 0x26c1a0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c1a4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c1a8: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x26c1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x26c1ac: 0x24060076  addiu       $a2, $zero, 0x76
    ctx->pc = 0x26c1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x26c1b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26c1b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c1b4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26c1b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26c1b8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26C1B8u;
    SET_GPR_U32(ctx, 31, 0x26C1C0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26C1B8u, 0x26C1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C1C0u;
label_26c1c0:
    // 0x26c1c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26c1c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26c1c4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x26C1C4u;
    {
        const bool branch_taken_0x26c1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c1c4) {
            ctx->pc = 0x26C21Cu;
            return;
        }
    }
    ctx->pc = 0x26C1CCu;
}
