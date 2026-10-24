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

// Function: capTransposeMatrix
// Address: 0x1768c0 - 0x176908
void capTransposeMatrix_0x1768c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("capTransposeMatrix_0x1768c0");
#endif

    ctx->pc = 0x1768c0u;

    // 0x1768c0: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x1768c0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1768c4: 0x78a90010  lq          $t1, 0x10($a1)
    ctx->pc = 0x1768c4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1768c8: 0x78aa0020  lq          $t2, 0x20($a1)
    ctx->pc = 0x1768c8u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1768cc: 0x78ab0030  lq          $t3, 0x30($a1)
    ctx->pc = 0x1768ccu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1768d0: 0x71286488  pextlw      $t4, $t1, $t0
    ctx->pc = 0x1768d0u;
    SET_GPR_VEC(ctx, 12, PS2_PEXTLW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1768d4: 0x71286ca8  pextuw      $t5, $t1, $t0
    ctx->pc = 0x1768d4u;
    SET_GPR_VEC(ctx, 13, PS2_PEXTUW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1768d8: 0x716a7488  pextlw      $t6, $t3, $t2
    ctx->pc = 0x1768d8u;
    SET_GPR_VEC(ctx, 14, PS2_PEXTLW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x1768dc: 0x716a7ca8  pextuw      $t7, $t3, $t2
    ctx->pc = 0x1768dcu;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x1768e0: 0x71cc4389  pcpyld      $t0, $t6, $t4
    ctx->pc = 0x1768e0u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x1768e4: 0x718e4ba9  pcpyud      $t1, $t4, $t6
    ctx->pc = 0x1768e4u;
    SET_GPR_VEC(ctx, 9, _mm_unpackhi_epi64(GPR_VEC(ctx, 12), GPR_VEC(ctx, 14)));
    // 0x1768e8: 0x71ed5389  pcpyld      $t2, $t7, $t5
    ctx->pc = 0x1768e8u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 15), GPR_VEC(ctx, 13)));
    // 0x1768ec: 0x71af5ba9  pcpyud      $t3, $t5, $t7
    ctx->pc = 0x1768ecu;
    SET_GPR_VEC(ctx, 11, _mm_unpackhi_epi64(GPR_VEC(ctx, 13), GPR_VEC(ctx, 15)));
    // 0x1768f0: 0x7c880000  sq          $t0, 0x0($a0)
    ctx->pc = 0x1768f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 8));
    // 0x1768f4: 0x7c890010  sq          $t1, 0x10($a0)
    ctx->pc = 0x1768f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 9));
    // 0x1768f8: 0x7c8a0020  sq          $t2, 0x20($a0)
    ctx->pc = 0x1768f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 10));
    // 0x1768fc: 0x7c8b0030  sq          $t3, 0x30($a0)
    ctx->pc = 0x1768fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 11));
    // 0x176900: 0x3e00008  jr          $ra
    ctx->pc = 0x176900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176908u;
}
