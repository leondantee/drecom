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

// Function: entry_00356530
// Address: 0x356530 - 0x356570
void entry_00356530_0x356530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00356530_0x356530");
#endif

    switch (ctx->pc) {
        case 0x356554u: goto label_356554;
        case 0x356560u: goto label_356560;
        default: break;
    }

    ctx->pc = 0x356530u;

    // 0x356530: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x356530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x356534: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x356534u;
    {
        const bool branch_taken_0x356534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x356534) {
            ctx->pc = 0x356570u;
            return;
        }
    }
    ctx->pc = 0x35653Cu;
    // 0x35653c: 0x24041722  addiu       $a0, $zero, 0x1722
    ctx->pc = 0x35653cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5922));
    // 0x356540: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x356540u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x356544: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x356544u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x356548: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x356548u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35654c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x35654Cu;
    SET_GPR_U32(ctx, 31, 0x356554u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x35654Cu, 0x356554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356554u;
label_356554:
    // 0x356554: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x356554u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x356558: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x356558u;
    SET_GPR_U32(ctx, 31, 0x356560u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x356558u, 0x356560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356560u;
label_356560:
    // 0x356560: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x356560u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x356564: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x356564u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x356568: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x356568u;
    {
        const bool branch_taken_0x356568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356568) {
            ctx->pc = 0x3565C0u;
            return;
        }
    }
    ctx->pc = 0x356570u;
}
