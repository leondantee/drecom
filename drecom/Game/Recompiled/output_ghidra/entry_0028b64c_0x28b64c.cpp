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

// Function: entry_0028b64c
// Address: 0x28b64c - 0x28b68c
void entry_0028b64c_0x28b64c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028b64c_0x28b64c");
#endif

    switch (ctx->pc) {
        case 0x28b66cu: goto label_28b66c;
        case 0x28b678u: goto label_28b678;
        default: break;
    }

    ctx->pc = 0x28b64cu;

    // 0x28b64c: 0x24086a01  addiu       $t0, $zero, 0x6A01
    ctx->pc = 0x28b64cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 27137));
    // 0x28b650: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x28b650u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x28b654: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28b654u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b658: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x28b658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x28b65c: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x28b65cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28b660: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28b660u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b664: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x28B664u;
    SET_GPR_U32(ctx, 31, 0x28B66Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28B664u, 0x28B66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B66Cu;
label_28b66c:
    // 0x28b66c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28b66cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b670: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28B670u;
    SET_GPR_U32(ctx, 31, 0x28B678u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28B670u, 0x28B678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B678u;
label_28b678:
    // 0x28b678: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28b678u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b67c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b67cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b680: 0xac23204c  sw          $v1, 0x204C($at)
    ctx->pc = 0x28b680u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x62204Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62204Cu, _value); } while (0);
    // 0x28b684: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x28B684u;
    {
        const bool branch_taken_0x28b684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b684) {
            ctx->pc = 0x28B7B4u;
            return;
        }
    }
    ctx->pc = 0x28B68Cu;
}
