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

// Function: entry_0018e138
// Address: 0x18e138 - 0x18e180
void entry_0018e138_0x18e138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e138_0x18e138");
#endif

    switch (ctx->pc) {
        case 0x18e158u: goto label_18e158;
        case 0x18e174u: goto label_18e174;
        default: break;
    }

    ctx->pc = 0x18e138u;

    // 0x18e138: 0x8e23020c  lw          $v1, 0x20C($s1)
    ctx->pc = 0x18e138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
    // 0x18e13c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x18e13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x18e140: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x18E140u;
    {
        const bool branch_taken_0x18e140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e140) {
            ctx->pc = 0x18E180u;
            return;
        }
    }
    ctx->pc = 0x18E148u;
    // 0x18e148: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x18e148u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x18e14c: 0x8e2501fc  lw          $a1, 0x1FC($s1)
    ctx->pc = 0x18e14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 508)));
    // 0x18e150: 0xc0c9838  jal         func_3260E0
    ctx->pc = 0x18E150u;
    SET_GPR_U32(ctx, 31, 0x18E158u);
    ctx->pc = 0x3260E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260E0u, 0x18E150u, 0x18E158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E158u;
label_18e158:
    // 0x18e158: 0x8e23020c  lw          $v1, 0x20C($s1)
    ctx->pc = 0x18e158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
    // 0x18e15c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x18e15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x18e160: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x18E160u;
    {
        const bool branch_taken_0x18e160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e160) {
            ctx->pc = 0x18E180u;
            return;
        }
    }
    ctx->pc = 0x18E168u;
    // 0x18e168: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x18e168u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x18e16c: 0xc063ab8  jal         func_18EAE0
    ctx->pc = 0x18E16Cu;
    SET_GPR_U32(ctx, 31, 0x18E174u);
    ctx->pc = 0x18EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EAE0u, 0x18E16Cu, 0x18E174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E174u;
label_18e174:
    // 0x18e174: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x18e174u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18e178: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18E178u;
    {
        const bool branch_taken_0x18e178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e178) {
            ctx->pc = 0x18E198u;
            return;
        }
    }
    ctx->pc = 0x18E180u;
}
