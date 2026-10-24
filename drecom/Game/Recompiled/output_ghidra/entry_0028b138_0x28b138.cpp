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

// Function: entry_0028b138
// Address: 0x28b138 - 0x28b17c
void entry_0028b138_0x28b138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028b138_0x28b138");
#endif

    switch (ctx->pc) {
        case 0x28b158u: goto label_28b158;
        case 0x28b168u: goto label_28b168;
        default: break;
    }

    ctx->pc = 0x28b138u;

    // 0x28b138: 0x24026a01  addiu       $v0, $zero, 0x6A01
    ctx->pc = 0x28b138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27137));
    // 0x28b13c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28b13cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b140: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28b140u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b144: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x28b144u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x28b148: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x28b148u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x28b14c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28b14cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b150: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x28B150u;
    SET_GPR_U32(ctx, 31, 0x28B158u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28B150u, 0x28B158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B158u;
label_28b158:
    // 0x28b158: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x28b158u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b15c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x28b15cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28b160: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28B160u;
    SET_GPR_U32(ctx, 31, 0x28B168u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28B160u, 0x28B168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B168u;
label_28b168:
    // 0x28b168: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28b168u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b16c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b170: 0xac232044  sw          $v1, 0x2044($at)
    ctx->pc = 0x28b170u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622044u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622044u, _value); } while (0);
    // 0x28b174: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x28B174u;
    {
        const bool branch_taken_0x28b174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b174) {
            ctx->pc = 0x28B290u;
            return;
        }
    }
    ctx->pc = 0x28B17Cu;
}
