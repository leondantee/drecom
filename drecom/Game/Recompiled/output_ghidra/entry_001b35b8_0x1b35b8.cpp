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

// Function: entry_001b35b8
// Address: 0x1b35b8 - 0x1b35dc
void entry_001b35b8_0x1b35b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b35b8_0x1b35b8");
#endif

    switch (ctx->pc) {
        case 0x1b35c8u: goto label_1b35c8;
        default: break;
    }

    ctx->pc = 0x1b35b8u;

    // 0x1b35b8: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1b35b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b35bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b35bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b35c0: 0xc05d2a0  jal         func_174A80
    ctx->pc = 0x1B35C0u;
    SET_GPR_U32(ctx, 31, 0x1B35C8u);
    ctx->pc = 0x174A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174A80u, 0x1B35C0u, 0x1B35C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B35C8u;
label_1b35c8:
    // 0x1b35c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B35C8u;
    {
        const bool branch_taken_0x1b35c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b35c8) {
            ctx->pc = 0x1B35DCu;
            return;
        }
    }
    ctx->pc = 0x1B35D0u;
    // 0x1b35d0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1b35d0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b35d4: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x1B35D4u;
    {
        const bool branch_taken_0x1b35d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b35d4) {
            ctx->pc = 0x1B38CCu;
            return;
        }
    }
    ctx->pc = 0x1B35DCu;
}
