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

// Function: entry_0028b610
// Address: 0x28b610 - 0x28b64c
void entry_0028b610_0x28b610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028b610_0x28b610");
#endif

    switch (ctx->pc) {
        case 0x28b62cu: goto label_28b62c;
        case 0x28b63cu: goto label_28b63c;
        default: break;
    }

    ctx->pc = 0x28b610u;

    // 0x28b610: 0x24026901  addiu       $v0, $zero, 0x6901
    ctx->pc = 0x28b610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26881));
    // 0x28b614: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28b614u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b618: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28b618u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b61c: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x28b61cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x28b620: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28b620u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b624: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x28B624u;
    SET_GPR_U32(ctx, 31, 0x28B62Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28B624u, 0x28B62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B62Cu;
label_28b62c:
    // 0x28b62c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28b62cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b630: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x28b630u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28b634: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28B634u;
    SET_GPR_U32(ctx, 31, 0x28B63Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28B634u, 0x28B63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B63Cu;
label_28b63c:
    // 0x28b63c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b640: 0xac22204c  sw          $v0, 0x204C($at)
    ctx->pc = 0x28b640u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x62204Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62204Cu, _value); } while (0);
    // 0x28b644: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x28B644u;
    {
        const bool branch_taken_0x28b644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b644) {
            ctx->pc = 0x28B7B4u;
            return;
        }
    }
    ctx->pc = 0x28B64Cu;
}
