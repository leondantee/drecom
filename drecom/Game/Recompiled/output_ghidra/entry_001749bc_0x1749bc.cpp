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

// Function: entry_001749bc
// Address: 0x1749bc - 0x1749ec
void entry_001749bc_0x1749bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001749bc_0x1749bc");
#endif

    switch (ctx->pc) {
        case 0x1749e0u: goto label_1749e0;
        default: break;
    }

    ctx->pc = 0x1749bcu;

    // 0x1749bc: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x1749bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1749c0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1749c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1749c4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1749c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1749c8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1749c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1749cc: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1749ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1749d0: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x1749d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1749d4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1749d4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1749d8: 0xc059e1c  jal         func_167870
    ctx->pc = 0x1749D8u;
    SET_GPR_U32(ctx, 31, 0x1749E0u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x1749D8u, 0x1749E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1749E0u;
label_1749e0:
    // 0x1749e0: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1749e0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1749e4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1749E4u;
    {
        const bool branch_taken_0x1749e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1749e4) {
            ctx->pc = 0x174A48u;
            return;
        }
    }
    ctx->pc = 0x1749ECu;
}
