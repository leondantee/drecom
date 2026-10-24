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

// Function: entry_00165ac8
// Address: 0x165ac8 - 0x165b08
void entry_00165ac8_0x165ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165ac8_0x165ac8");
#endif

    switch (ctx->pc) {
        case 0x165ad0u: goto label_165ad0;
        case 0x165ad8u: goto label_165ad8;
        case 0x165ae8u: goto label_165ae8;
        case 0x165b00u: goto label_165b00;
        default: break;
    }

    ctx->pc = 0x165ac8u;

    // 0x165ac8: 0xc06793c  jal         func_19E4F0
    ctx->pc = 0x165AC8u;
    SET_GPR_U32(ctx, 31, 0x165AD0u);
    ctx->pc = 0x19E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E4F0u, 0x165AC8u, 0x165AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165AD0u;
label_165ad0:
    // 0x165ad0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x165AD0u;
    SET_GPR_U32(ctx, 31, 0x165AD8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x165AD0u, 0x165AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165AD8u;
label_165ad8:
    // 0x165ad8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x165ad8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165adc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x165adcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165ae0: 0xc04026a  jal         func_1009A8
    ctx->pc = 0x165AE0u;
    SET_GPR_U32(ctx, 31, 0x165AE8u);
    ctx->pc = 0x1009A8u;
    {
        ctx->pc = 0x165AE8u;
        ps2_stubs::sceGsSyncPath(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165AE8u) { return; }
    ctx->pc = 0x165AE8u;
label_165ae8:
    // 0x165ae8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x165ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x165aec: 0x8c225a08  lw          $v0, 0x5A08($at)
    ctx->pc = 0x165aecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F5A08u));
    // 0x165af0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x165AF0u;
    {
        const bool branch_taken_0x165af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165af0) {
            ctx->pc = 0x165B08u;
            return;
        }
    }
    ctx->pc = 0x165AF8u;
    // 0x165af8: 0xc0591e0  jal         func_164780
    ctx->pc = 0x165AF8u;
    SET_GPR_U32(ctx, 31, 0x165B00u);
    ctx->pc = 0x164780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164780u, 0x165AF8u, 0x165B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165B00u;
label_165b00:
    // 0x165b00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x165B00u;
    {
        const bool branch_taken_0x165b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165b00) {
            ctx->pc = 0x165B10u;
            return;
        }
    }
    ctx->pc = 0x165B08u;
}
