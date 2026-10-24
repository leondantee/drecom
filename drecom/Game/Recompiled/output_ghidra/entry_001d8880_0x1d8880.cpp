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

// Function: entry_001d8880
// Address: 0x1d8880 - 0x1d88d8
void entry_001d8880_0x1d8880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8880_0x1d8880");
#endif

    switch (ctx->pc) {
        case 0x1d889cu: goto label_1d889c;
        case 0x1d88c4u: goto label_1d88c4;
        default: break;
    }

    ctx->pc = 0x1d8880u;

    // 0x1d8880: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x1d8880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1d8884: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D8884u;
    {
        const bool branch_taken_0x1d8884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8884) {
            ctx->pc = 0x1D88D8u;
            return;
        }
    }
    ctx->pc = 0x1D888Cu;
    // 0x1d888c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1d888cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d8890: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x1d8890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x1d8894: 0xc0d71ec  jal         func_35C7B0
    ctx->pc = 0x1D8894u;
    SET_GPR_U32(ctx, 31, 0x1D889Cu);
    ctx->pc = 0x35C7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C7B0u, 0x1D8894u, 0x1D889Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D889Cu;
label_1d889c:
    // 0x1d889c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1d889cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d88a0: 0x1a40000d  blez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x1D88A0u;
    {
        const bool branch_taken_0x1d88a0 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x1d88a0) {
            ctx->pc = 0x1D88D8u;
            return;
        }
    }
    ctx->pc = 0x1D88A8u;
    // 0x1d88a8: 0x26040230  addiu       $a0, $s0, 0x230
    ctx->pc = 0x1d88a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    // 0x1d88ac: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x1d88acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1d88b0: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x1d88b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x1d88b4: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x1d88b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d88b8: 0x3c080002  lui         $t0, 0x2
    ctx->pc = 0x1d88b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2 << 16));
    // 0x1d88bc: 0xc0424f4  jal         func_1093D0
    ctx->pc = 0x1D88BCu;
    SET_GPR_U32(ctx, 31, 0x1D88C4u);
    ctx->pc = 0x1093D0u;
    {
        ctx->pc = 0x1D88C4u;
        ps2_stubs::sceMpegDemuxPssRing(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D88C4u) { return; }
    ctx->pc = 0x1D88C4u;
label_1d88c4:
    // 0x1d88c4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1d88c4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d88c8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1d88c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d88cc: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1d88ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1d88d0: 0xc0d720c  jal         func_35C830
    ctx->pc = 0x1D88D0u;
    SET_GPR_U32(ctx, 31, 0x1D88D8u);
    ctx->pc = 0x35C830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C830u, 0x1D88D0u, 0x1D88D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D88D8u;
}
