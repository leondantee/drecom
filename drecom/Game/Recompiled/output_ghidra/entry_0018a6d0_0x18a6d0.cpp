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

// Function: entry_0018a6d0
// Address: 0x18a6d0 - 0x18a70c
void entry_0018a6d0_0x18a6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a6d0_0x18a6d0");
#endif

    switch (ctx->pc) {
        case 0x18a6ecu: goto label_18a6ec;
        case 0x18a700u: goto label_18a700;
        default: break;
    }

    ctx->pc = 0x18a6d0u;

    // 0x18a6d0: 0x1620000e  bnez        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x18A6D0u;
    {
        const bool branch_taken_0x18a6d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a6d0) {
            ctx->pc = 0x18A70Cu;
            return;
        }
    }
    ctx->pc = 0x18A6D8u;
    // 0x18a6d8: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x18a6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x18a6dc: 0x24050e20  addiu       $a1, $zero, 0xE20
    ctx->pc = 0x18a6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3616));
    // 0x18a6e0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x18a6e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18a6e4: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x18A6E4u;
    SET_GPR_U32(ctx, 31, 0x18A6ECu);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x18A6E4u, 0x18A6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A6ECu;
label_18a6ec:
    // 0x18a6ec: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x18a6ecu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18a6f0: 0x1640000b  bnez        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x18A6F0u;
    {
        const bool branch_taken_0x18a6f0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a6f0) {
            ctx->pc = 0x18A720u;
            return;
        }
    }
    ctx->pc = 0x18A6F8u;
    // 0x18a6f8: 0xc0593e8  jal         func_164FA0
    ctx->pc = 0x18A6F8u;
    SET_GPR_U32(ctx, 31, 0x18A700u);
    ctx->pc = 0x164FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164FA0u, 0x18A6F8u, 0x18A700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A700u;
label_18a700:
    // 0x18a700: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x18a700u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18a704: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x18A704u;
    {
        const bool branch_taken_0x18a704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a704) {
            ctx->pc = 0x18A754u;
            return;
        }
    }
    ctx->pc = 0x18A70Cu;
}
