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

// Function: entry_00340160
// Address: 0x340160 - 0x3401ac
void entry_00340160_0x340160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340160_0x340160");
#endif

    switch (ctx->pc) {
        case 0x340190u: goto label_340190;
        default: break;
    }

    ctx->pc = 0x340160u;

    // 0x340160: 0x2e03000d  sltiu       $v1, $s0, 0xD
    ctx->pc = 0x340160u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x340164: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x340164u;
    {
        const bool branch_taken_0x340164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x340164) {
            ctx->pc = 0x340120u;
            return;
        }
    }
    ctx->pc = 0x34016Cu;
    // 0x34016c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x34016cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x340170: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x340170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x340174: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x340174u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340178: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x340178u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34017c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x34017cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340180: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x340180u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340184: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x340184u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x340188: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x340188u;
    SET_GPR_U32(ctx, 31, 0x340190u);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x340188u, 0x340190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340190u;
label_340190:
    // 0x340190: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x340190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x340194: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x340194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x340198: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x340198u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34019c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x34019cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3401a0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3401a0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3401a4: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x3401a4u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3401a8: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x3401a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x3401acu;
}
