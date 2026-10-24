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

// Function: entry_001cc4fc
// Address: 0x1cc4fc - 0x1cc53c
void entry_001cc4fc_0x1cc4fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc4fc_0x1cc4fc");
#endif

    switch (ctx->pc) {
        case 0x1cc504u: goto label_1cc504;
        case 0x1cc530u: goto label_1cc530;
        default: break;
    }

    ctx->pc = 0x1cc4fcu;

    // 0x1cc4fc: 0xc0bccb0  jal         func_2F32C0
    ctx->pc = 0x1CC4FCu;
    SET_GPR_U32(ctx, 31, 0x1CC504u);
    ctx->pc = 0x2F32C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F32C0u, 0x1CC4FCu, 0x1CC504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC504u;
label_1cc504:
    // 0x1cc504: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1cc504u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cc508: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1cc508u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc50c: 0x910309df  lbu         $v1, 0x9DF($t0)
    ctx->pc = 0x1cc50cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2527)));
    // 0x1cc510: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1cc510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cc514: 0x308300c0  andi        $v1, $a0, 0xC0
    ctx->pc = 0x1cc514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)192);
    // 0x1cc518: 0x1060007e  beqz        $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x1CC518u;
    {
        const bool branch_taken_0x1cc518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc518) {
            ctx->pc = 0x1CC714u;
            return;
        }
    }
    ctx->pc = 0x1CC520u;
    // 0x1cc520: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1cc520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc524: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1cc524u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1cc528: 0xc09b8cc  jal         func_26E330
    ctx->pc = 0x1CC528u;
    SET_GPR_U32(ctx, 31, 0x1CC530u);
    ctx->pc = 0x26E330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E330u, 0x1CC528u, 0x1CC530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC530u;
label_1cc530:
    // 0x1cc530: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1cc530u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cc534: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x1CC534u;
    {
        const bool branch_taken_0x1cc534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc534) {
            ctx->pc = 0x1CC714u;
            return;
        }
    }
    ctx->pc = 0x1CC53Cu;
}
