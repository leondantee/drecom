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

// Function: entry_0018a81c
// Address: 0x18a81c - 0x18a86c
void entry_0018a81c_0x18a81c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a81c_0x18a81c");
#endif

    switch (ctx->pc) {
        case 0x18a834u: goto label_18a834;
        case 0x18a858u: goto label_18a858;
        default: break;
    }

    ctx->pc = 0x18a81cu;

    // 0x18a81c: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x18a81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x18a820: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a824: 0x8c25ac50  lw          $a1, -0x53B0($at)
    ctx->pc = 0x18a824u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18a828: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18a828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a82c: 0xc076590  jal         func_1D9640
    ctx->pc = 0x18A82Cu;
    SET_GPR_U32(ctx, 31, 0x18A834u);
    ctx->pc = 0x1D9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9640u, 0x18A82Cu, 0x18A834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A834u;
label_18a834:
    // 0x18a834: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18a834u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18a838: 0x600000c  bltz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x18A838u;
    {
        const bool branch_taken_0x18a838 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x18a838) {
            ctx->pc = 0x18A86Cu;
            return;
        }
    }
    ctx->pc = 0x18A840u;
    // 0x18a840: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18a840u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18a844: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a848: 0x8c25ac50  lw          $a1, -0x53B0($at)
    ctx->pc = 0x18a848u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18a84c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18a84cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18a850: 0xc062c2c  jal         func_18B0B0
    ctx->pc = 0x18A850u;
    SET_GPR_U32(ctx, 31, 0x18A858u);
    ctx->pc = 0x18B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B0B0u, 0x18A850u, 0x18A858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A858u;
label_18a858:
    // 0x18a858: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a85c: 0x8c22ac50  lw          $v0, -0x53B0($at)
    ctx->pc = 0x18a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18a860: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a864: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a868: 0xac22ac50  sw          $v0, -0x53B0($at)
    ctx->pc = 0x18a868u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CAC50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CAC50u, _value); } while (0);
    ctx->pc = 0x18a86cu;
}
