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

// Function: entry_00283098
// Address: 0x283098 - 0x2830f0
void entry_00283098_0x283098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00283098_0x283098");
#endif

    switch (ctx->pc) {
        case 0x2830bcu: goto label_2830bc;
        case 0x2830c8u: goto label_2830c8;
        default: break;
    }

    ctx->pc = 0x283098u;

label_283098:
    // 0x283098: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x283098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_28309c:
    // 0x28309c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x28309cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2830a0:
    // 0x2830a0: 0x24424e30  addiu       $v0, $v0, 0x4E30
    ctx->pc = 0x2830a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20016));
label_2830a4:
    // 0x2830a4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2830a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2830a8:
    // 0x2830a8: 0x24045705  addiu       $a0, $zero, 0x5705
    ctx->pc = 0x2830a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22277));
label_2830ac:
    // 0x2830ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2830acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2830b0:
    // 0x2830b0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2830b0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2830b4:
    // 0x2830b4: 0xc062f5c  jal         func_18BD70
label_2830b8:
    if (ctx->pc == 0x2830B8u) {
        ctx->pc = 0x2830BCu;
        goto label_2830bc;
    }
    ctx->pc = 0x2830B4u;
    SET_GPR_U32(ctx, 31, 0x2830BCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2830B4u, 0x2830BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2830BCu;
label_2830bc:
    // 0x2830bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2830bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2830c0:
    // 0x2830c0: 0xc0630a8  jal         func_18C2A0
label_2830c4:
    if (ctx->pc == 0x2830C4u) {
        ctx->pc = 0x2830C8u;
        goto label_2830c8;
    }
    ctx->pc = 0x2830C0u;
    SET_GPR_U32(ctx, 31, 0x2830C8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2830C0u, 0x2830C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2830C8u;
label_2830c8:
    // 0x2830c8: 0x2e010008  sltiu       $at, $s0, 0x8
    ctx->pc = 0x2830c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_2830cc:
    // 0x2830cc: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_2830d0:
    if (ctx->pc == 0x2830D0u) {
        ctx->pc = 0x2830D4u;
        goto label_2830d4;
    }
    ctx->pc = 0x2830CCu;
    {
        const bool branch_taken_0x2830cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2830cc) {
            ctx->pc = 0x283128u;
            return;
        }
    }
    ctx->pc = 0x2830D4u;
label_2830d4:
    // 0x2830d4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2830d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2830d8:
    // 0x2830d8: 0x24431650  addiu       $v1, $v0, 0x1650
    ctx->pc = 0x2830d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5712));
label_2830dc:
    // 0x2830dc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2830dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2830e0:
    // 0x2830e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2830e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2830e4:
    // 0x2830e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2830e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2830e8:
    // 0x2830e8: 0x400008  jr          $v0
label_2830ec:
    if (ctx->pc == 0x2830ECu) {
        ctx->pc = 0x2830F0u;
        goto label_fallthrough_0x2830e8;
    }
    ctx->pc = 0x2830E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2830E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x2830e8:
    ctx->pc = 0x2830F0u;
}
