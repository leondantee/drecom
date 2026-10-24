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

// Function: entry_0012409c
// Address: 0x12409c - 0x1240cc
void entry_0012409c_0x12409c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012409c_0x12409c");
#endif

    switch (ctx->pc) {
        case 0x1240b0u: goto label_1240b0;
        default: break;
    }

    ctx->pc = 0x12409cu;

    // 0x12409c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12409cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1240a0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1240a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1240a4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1240a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1240a8: 0xc048148  jal         func_120520
    ctx->pc = 0x1240A8u;
    SET_GPR_U32(ctx, 31, 0x1240B0u);
    ctx->pc = 0x120520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120520u, 0x1240A8u, 0x1240B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1240B0u;
label_1240b0:
    // 0x1240b0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1240b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1240b4: 0x84a310a6  lh          $v1, 0x10A6($a1)
    ctx->pc = 0x1240b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4262)));
    // 0x1240b8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1240b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1240bc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1240bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1240c0: 0xa4a410a6  sh          $a0, 0x10A6($a1)
    ctx->pc = 0x1240c0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x1240c4: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x1240C4u;
    {
        const bool branch_taken_0x1240c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1240c4) {
            ctx->pc = 0x124260u;
            return;
        }
    }
    ctx->pc = 0x1240CCu;
}
