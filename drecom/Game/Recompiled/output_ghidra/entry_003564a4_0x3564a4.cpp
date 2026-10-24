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

// Function: entry_003564a4
// Address: 0x3564a4 - 0x3564e0
void entry_003564a4_0x3564a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003564a4_0x3564a4");
#endif

    switch (ctx->pc) {
        case 0x3564c8u: goto label_3564c8;
        case 0x3564d4u: goto label_3564d4;
        default: break;
    }

    ctx->pc = 0x3564a4u;

    // 0x3564a4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x3564a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3564a8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3564A8u;
    {
        const bool branch_taken_0x3564a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3564a8) {
            ctx->pc = 0x3564E0u;
            return;
        }
    }
    ctx->pc = 0x3564B0u;
    // 0x3564b0: 0x34048300  ori         $a0, $zero, 0x8300
    ctx->pc = 0x3564b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33536);
    // 0x3564b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3564b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3564b8: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x3564b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3564bc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3564bcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3564c0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3564C0u;
    SET_GPR_U32(ctx, 31, 0x3564C8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3564C0u, 0x3564C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3564C8u;
label_3564c8:
    // 0x3564c8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3564c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3564cc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3564CCu;
    SET_GPR_U32(ctx, 31, 0x3564D4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3564CCu, 0x3564D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3564D4u;
label_3564d4:
    // 0x3564d4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3564d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3564d8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3564D8u;
    {
        const bool branch_taken_0x3564d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3564d8) {
            ctx->pc = 0x356530u;
            return;
        }
    }
    ctx->pc = 0x3564E0u;
}
