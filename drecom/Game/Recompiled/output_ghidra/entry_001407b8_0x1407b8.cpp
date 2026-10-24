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

// Function: entry_001407b8
// Address: 0x1407b8 - 0x140804
void entry_001407b8_0x1407b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001407b8_0x1407b8");
#endif

    switch (ctx->pc) {
        case 0x1407c4u: goto label_1407c4;
        case 0x1407d4u: goto label_1407d4;
        case 0x1407e4u: goto label_1407e4;
        default: break;
    }

    ctx->pc = 0x1407b8u;

    // 0x1407b8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1407b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1407bc: 0xc0592dc  jal         func_164B70
    ctx->pc = 0x1407BCu;
    SET_GPR_U32(ctx, 31, 0x1407C4u);
    ctx->pc = 0x164B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B70u, 0x1407BCu, 0x1407C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1407C4u;
label_1407c4:
    // 0x1407c4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1407c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1407c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1407c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1407cc: 0xc0683a0  jal         func_1A0E80
    ctx->pc = 0x1407CCu;
    SET_GPR_U32(ctx, 31, 0x1407D4u);
    ctx->pc = 0x1A0E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E80u, 0x1407CCu, 0x1407D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1407D4u;
label_1407d4:
    // 0x1407d4: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x1407d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x1407d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1407d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1407dc: 0xc0683a0  jal         func_1A0E80
    ctx->pc = 0x1407DCu;
    SET_GPR_U32(ctx, 31, 0x1407E4u);
    ctx->pc = 0x1A0E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E80u, 0x1407DCu, 0x1407E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1407E4u;
label_1407e4:
    // 0x1407e4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1407e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1407e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1407e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1407ec: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1407ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1407f0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1407f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1407f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1407f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1407f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1407f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1407fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1407FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1407FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140804u;
}
