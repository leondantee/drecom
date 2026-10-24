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

// Function: entry_0018e1ac
// Address: 0x18e1ac - 0x18e1e4
void entry_0018e1ac_0x18e1ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e1ac_0x18e1ac");
#endif

    switch (ctx->pc) {
        case 0x18e1d8u: goto label_18e1d8;
        default: break;
    }

    ctx->pc = 0x18e1acu;

    // 0x18e1ac: 0x8e43020c  lw          $v1, 0x20C($s2)
    ctx->pc = 0x18e1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
    // 0x18e1b0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x18e1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x18e1b4: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x18E1B4u;
    {
        const bool branch_taken_0x18e1b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e1b4) {
            ctx->pc = 0x18E2A0u;
            return;
        }
    }
    ctx->pc = 0x18E1BCu;
    // 0x18e1bc: 0x8e42020c  lw          $v0, 0x20C($s2)
    ctx->pc = 0x18e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
    // 0x18e1c0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x18e1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x18e1c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18E1C4u;
    {
        const bool branch_taken_0x18e1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e1c4) {
            ctx->pc = 0x18E1E4u;
            return;
        }
    }
    ctx->pc = 0x18E1CCu;
    // 0x18e1cc: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x18e1ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x18e1d0: 0xc063b08  jal         func_18EC20
    ctx->pc = 0x18E1D0u;
    SET_GPR_U32(ctx, 31, 0x18E1D8u);
    ctx->pc = 0x18EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EC20u, 0x18E1D0u, 0x18E1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E1D8u;
label_18e1d8:
    // 0x18e1d8: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x18e1d8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18e1dc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x18E1DCu;
    {
        const bool branch_taken_0x18e1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e1dc) {
            ctx->pc = 0x18E2A8u;
            return;
        }
    }
    ctx->pc = 0x18E1E4u;
}
