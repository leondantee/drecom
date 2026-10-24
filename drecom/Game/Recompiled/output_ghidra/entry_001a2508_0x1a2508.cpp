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

// Function: entry_001a2508
// Address: 0x1a2508 - 0x1a2554
void entry_001a2508_0x1a2508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2508_0x1a2508");
#endif

    switch (ctx->pc) {
        case 0x1a252cu: goto label_1a252c;
        default: break;
    }

    ctx->pc = 0x1a2508u;

    // 0x1a2508: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a2508u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a250c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a250cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2510: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1a2510u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2514: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a2514u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2518: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x1a2518u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x1a251c: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x1a251cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2520: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x1a2520u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a2524: 0xc059190  jal         func_164640
    ctx->pc = 0x1A2524u;
    SET_GPR_U32(ctx, 31, 0x1A252Cu);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x1A2524u, 0x1A252Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A252Cu;
label_1a252c:
    // 0x1a252c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1a252cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a2530: 0xa0400005  sb          $zero, 0x5($v0)
    ctx->pc = 0x1a2530u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2534: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1a2534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a2538: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1a2538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1a253c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1a253cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a2540: 0xa0400006  sb          $zero, 0x6($v0)
    ctx->pc = 0x1a2540u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2544: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a2544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a2548: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x1a2548u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1a254c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a254cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a2550: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x1a2550u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1a2554u;
}
