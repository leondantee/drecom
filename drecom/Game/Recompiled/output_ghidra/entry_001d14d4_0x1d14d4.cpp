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

// Function: entry_001d14d4
// Address: 0x1d14d4 - 0x1d14f4
void entry_001d14d4_0x1d14d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d14d4_0x1d14d4");
#endif

    switch (ctx->pc) {
        case 0x1d14ecu: goto label_1d14ec;
        default: break;
    }

    ctx->pc = 0x1d14d4u;

    // 0x1d14d4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1d14d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d14d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1d14d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d14dc: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1d14dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d14e0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1d14e0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d14e4: 0xc087170  jal         func_21C5C0
    ctx->pc = 0x1D14E4u;
    SET_GPR_U32(ctx, 31, 0x1D14ECu);
    ctx->pc = 0x21C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C5C0u, 0x1D14E4u, 0x1D14ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D14ECu;
label_1d14ec:
    // 0x1d14ec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D14ECu;
    {
        const bool branch_taken_0x1d14ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d14ec) {
            ctx->pc = 0x1D1518u;
            return;
        }
    }
    ctx->pc = 0x1D14F4u;
}
