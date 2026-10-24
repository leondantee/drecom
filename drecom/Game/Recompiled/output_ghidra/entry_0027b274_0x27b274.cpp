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

// Function: entry_0027b274
// Address: 0x27b274 - 0x27b2ac
void entry_0027b274_0x27b274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027b274_0x27b274");
#endif

    switch (ctx->pc) {
        case 0x27b298u: goto label_27b298;
        case 0x27b2a4u: goto label_27b2a4;
        default: break;
    }

    ctx->pc = 0x27b274u;

    // 0x27b274: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27b274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27b278: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27b278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27b27c: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x27b27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x27b280: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x27b280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27b284: 0x24047404  addiu       $a0, $zero, 0x7404
    ctx->pc = 0x27b284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29700));
    // 0x27b288: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27b288u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27b28c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27b28cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27b290: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27B290u;
    SET_GPR_U32(ctx, 31, 0x27B298u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27B290u, 0x27B298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B298u;
label_27b298:
    // 0x27b298: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27b298u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27b29c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27B29Cu;
    SET_GPR_U32(ctx, 31, 0x27B2A4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27B29Cu, 0x27B2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B2A4u;
label_27b2a4:
    // 0x27b2a4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x27B2A4u;
    {
        const bool branch_taken_0x27b2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b2a4) {
            ctx->pc = 0x27B320u;
            return;
        }
    }
    ctx->pc = 0x27B2ACu;
}
