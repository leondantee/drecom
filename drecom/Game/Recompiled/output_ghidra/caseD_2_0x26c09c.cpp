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

// Function: caseD_2
// Address: 0x26c09c - 0x26c0c8
void caseD_2_0x26c09c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x26c09c");
#endif

    switch (ctx->pc) {
        case 0x26c0bcu: goto label_26c0bc;
        default: break;
    }

    ctx->pc = 0x26c09cu;

    // 0x26c09c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c0a0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c0a4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26c0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26c0a8: 0x24063c63  addiu       $a2, $zero, 0x3C63
    ctx->pc = 0x26c0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15459));
    // 0x26c0ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26c0acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c0b0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26c0b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26c0b4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26C0B4u;
    SET_GPR_U32(ctx, 31, 0x26C0BCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26C0B4u, 0x26C0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C0BCu;
label_26c0bc:
    // 0x26c0bc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26c0bcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26c0c0: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x26C0C0u;
    {
        const bool branch_taken_0x26c0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c0c0) {
            ctx->pc = 0x26C21Cu;
            return;
        }
    }
    ctx->pc = 0x26C0C8u;
}
