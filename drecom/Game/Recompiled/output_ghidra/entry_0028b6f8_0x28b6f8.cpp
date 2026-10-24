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

// Function: entry_0028b6f8
// Address: 0x28b6f8 - 0x28b73c
void entry_0028b6f8_0x28b6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028b6f8_0x28b6f8");
#endif

    switch (ctx->pc) {
        case 0x28b718u: goto label_28b718;
        case 0x28b728u: goto label_28b728;
        default: break;
    }

    ctx->pc = 0x28b6f8u;

    // 0x28b6f8: 0x24066902  addiu       $a2, $zero, 0x6902
    ctx->pc = 0x28b6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26882));
    // 0x28b6fc: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x28b6fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28b700: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28b700u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b704: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x28b704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x28b708: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28b708u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b70c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28b70cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b710: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x28B710u;
    SET_GPR_U32(ctx, 31, 0x28B718u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28B710u, 0x28B718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B718u;
label_28b718:
    // 0x28b718: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28b718u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b71c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x28b71cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28b720: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28B720u;
    SET_GPR_U32(ctx, 31, 0x28B728u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28B720u, 0x28B728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B728u;
label_28b728:
    // 0x28b728: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28b728u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b72c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b72cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b730: 0xac26204c  sw          $a2, 0x204C($at)
    ctx->pc = 0x28b730u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x62204Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62204Cu, _value); } while (0);
    // 0x28b734: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x28B734u;
    {
        const bool branch_taken_0x28b734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b734) {
            ctx->pc = 0x28B7B4u;
            return;
        }
    }
    ctx->pc = 0x28B73Cu;
}
