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

// Function: entry_00356418
// Address: 0x356418 - 0x356454
void entry_00356418_0x356418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00356418_0x356418");
#endif

    switch (ctx->pc) {
        case 0x35643cu: goto label_35643c;
        case 0x356448u: goto label_356448;
        default: break;
    }

    ctx->pc = 0x356418u;

    // 0x356418: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x356418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x35641c: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x35641Cu;
    {
        const bool branch_taken_0x35641c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35641c) {
            ctx->pc = 0x356454u;
            return;
        }
    }
    ctx->pc = 0x356424u;
    // 0x356424: 0x34048300  ori         $a0, $zero, 0x8300
    ctx->pc = 0x356424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33536);
    // 0x356428: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x356428u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35642c: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x35642cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x356430: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x356430u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x356434: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x356434u;
    SET_GPR_U32(ctx, 31, 0x35643Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x356434u, 0x35643Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35643Cu;
label_35643c:
    // 0x35643c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x35643cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x356440: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x356440u;
    SET_GPR_U32(ctx, 31, 0x356448u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x356440u, 0x356448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356448u;
label_356448:
    // 0x356448: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x356448u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35644c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x35644Cu;
    {
        const bool branch_taken_0x35644c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35644c) {
            ctx->pc = 0x3564A4u;
            return;
        }
    }
    ctx->pc = 0x356454u;
}
