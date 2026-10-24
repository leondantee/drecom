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

// Function: entry_0018a86c
// Address: 0x18a86c - 0x18a8bc
void entry_0018a86c_0x18a86c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a86c_0x18a86c");
#endif

    switch (ctx->pc) {
        case 0x18a884u: goto label_18a884;
        case 0x18a8a8u: goto label_18a8a8;
        default: break;
    }

    ctx->pc = 0x18a86cu;

    // 0x18a86c: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x18a86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x18a870: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a874: 0x8c25ac50  lw          $a1, -0x53B0($at)
    ctx->pc = 0x18a874u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18a878: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18a878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a87c: 0xc076590  jal         func_1D9640
    ctx->pc = 0x18A87Cu;
    SET_GPR_U32(ctx, 31, 0x18A884u);
    ctx->pc = 0x1D9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9640u, 0x18A87Cu, 0x18A884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A884u;
label_18a884:
    // 0x18a884: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18a884u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18a888: 0x600000c  bltz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x18A888u;
    {
        const bool branch_taken_0x18a888 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x18a888) {
            ctx->pc = 0x18A8BCu;
            return;
        }
    }
    ctx->pc = 0x18A890u;
    // 0x18a890: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18a890u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18a894: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a898: 0x8c25ac50  lw          $a1, -0x53B0($at)
    ctx->pc = 0x18a898u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18a89c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18a89cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18a8a0: 0xc062b00  jal         func_18AC00
    ctx->pc = 0x18A8A0u;
    SET_GPR_U32(ctx, 31, 0x18A8A8u);
    ctx->pc = 0x18AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AC00u, 0x18A8A0u, 0x18A8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A8A8u;
label_18a8a8:
    // 0x18a8a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a8a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a8ac: 0x8c22ac50  lw          $v0, -0x53B0($at)
    ctx->pc = 0x18a8acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18a8b0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a8b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a8b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a8b8: 0xac22ac50  sw          $v0, -0x53B0($at)
    ctx->pc = 0x18a8b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CAC50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CAC50u, _value); } while (0);
    ctx->pc = 0x18a8bcu;
}
