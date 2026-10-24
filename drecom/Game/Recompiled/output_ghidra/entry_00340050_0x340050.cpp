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

// Function: entry_00340050
// Address: 0x340050 - 0x3400ac
void entry_00340050_0x340050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340050_0x340050");
#endif

    switch (ctx->pc) {
        case 0x340080u: goto label_340080;
        case 0x3400a4u: goto label_3400a4;
        default: break;
    }

    ctx->pc = 0x340050u;

    // 0x340050: 0x2e03000d  sltiu       $v1, $s0, 0xD
    ctx->pc = 0x340050u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x340054: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x340054u;
    {
        const bool branch_taken_0x340054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x340054) {
            ctx->pc = 0x340018u;
            return;
        }
    }
    ctx->pc = 0x34005Cu;
    // 0x34005c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x34005cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x340060: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x340060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x340064: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x340064u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340068: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x340068u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34006c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x34006cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340070: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x340070u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340074: 0x240a0009  addiu       $t2, $zero, 0x9
    ctx->pc = 0x340074u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x340078: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x340078u;
    SET_GPR_U32(ctx, 31, 0x340080u);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x340078u, 0x340080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340080u;
label_340080:
    // 0x340080: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x340080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x340084: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x340084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x340088: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x340088u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34008c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x34008cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340090: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x340090u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340094: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x340094u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340098: 0x240a0009  addiu       $t2, $zero, 0x9
    ctx->pc = 0x340098u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x34009c: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x34009Cu;
    SET_GPR_U32(ctx, 31, 0x3400A4u);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x34009Cu, 0x3400A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3400A4u;
label_3400a4:
    // 0x3400a4: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x3400A4u;
    {
        const bool branch_taken_0x3400a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3400a4) {
            ctx->pc = 0x3401B4u;
            return;
        }
    }
    ctx->pc = 0x3400ACu;
}
