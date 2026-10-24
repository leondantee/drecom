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

// Function: entry_00278794
// Address: 0x278794 - 0x2787c8
void entry_00278794_0x278794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00278794_0x278794");
#endif

    switch (ctx->pc) {
        case 0x2787b8u: goto label_2787b8;
        case 0x2787c4u: goto label_2787c4;
        default: break;
    }

    ctx->pc = 0x278794u;

    // 0x278794: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x278794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x278798: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x278798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27879c: 0x2442e140  addiu       $v0, $v0, -0x1EC0
    ctx->pc = 0x27879cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959424));
    // 0x2787a0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2787a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2787a4: 0x24047405  addiu       $a0, $zero, 0x7405
    ctx->pc = 0x2787a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29701));
    // 0x2787a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2787a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2787ac: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2787acu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2787b0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2787B0u;
    SET_GPR_U32(ctx, 31, 0x2787B8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2787B0u, 0x2787B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2787B8u;
label_2787b8:
    // 0x2787b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2787b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2787bc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2787BCu;
    SET_GPR_U32(ctx, 31, 0x2787C4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2787BCu, 0x2787C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2787C4u;
label_2787c4:
    // 0x2787c4: 0x0  nop
    ctx->pc = 0x2787c4u;
    // NOP
    ctx->pc = 0x2787c8u;
}
