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

// Function: entry_001d14b8
// Address: 0x1d14b8 - 0x1d14d4
void entry_001d14b8_0x1d14b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d14b8_0x1d14b8");
#endif

    switch (ctx->pc) {
        case 0x1d14ccu: goto label_1d14cc;
        default: break;
    }

    ctx->pc = 0x1d14b8u;

    // 0x1d14b8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1d14b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d14bc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1d14bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d14c0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d14c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d14c4: 0xc0bd488  jal         func_2F5220
    ctx->pc = 0x1D14C4u;
    SET_GPR_U32(ctx, 31, 0x1D14CCu);
    ctx->pc = 0x2F5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5220u, 0x1D14C4u, 0x1D14CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D14CCu;
label_1d14cc:
    // 0x1d14cc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1D14CCu;
    {
        const bool branch_taken_0x1d14cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d14cc) {
            ctx->pc = 0x1D1518u;
            return;
        }
    }
    ctx->pc = 0x1D14D4u;
}
