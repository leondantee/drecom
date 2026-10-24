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

// Function: entry_001e18a8
// Address: 0x1e18a8 - 0x1e18cc
void entry_001e18a8_0x1e18a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e18a8_0x1e18a8");
#endif

    switch (ctx->pc) {
        case 0x1e18bcu: goto label_1e18bc;
        default: break;
    }

    ctx->pc = 0x1e18a8u;

    // 0x1e18a8: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x1e18a8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e18ac: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x1e18acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e18b0: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1e18b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e18b4: 0xc077fc8  jal         func_1DFF20
    ctx->pc = 0x1E18B4u;
    SET_GPR_U32(ctx, 31, 0x1E18BCu);
    ctx->pc = 0x1DFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF20u, 0x1E18B4u, 0x1E18BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E18BCu;
label_1e18bc:
    // 0x1e18bc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1e18bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1e18c0: 0x26100110  addiu       $s0, $s0, 0x110
    ctx->pc = 0x1e18c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e18c4: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1E18C4u;
    {
        const bool branch_taken_0x1e18c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e18c4) {
            ctx->pc = 0x1E1A00u;
            return;
        }
    }
    ctx->pc = 0x1E18CCu;
}
