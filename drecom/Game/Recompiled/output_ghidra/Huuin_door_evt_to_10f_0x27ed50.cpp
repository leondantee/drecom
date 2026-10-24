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

// Function: Huuin_door_evt_to_10f
// Address: 0x27ed50 - 0x27eda0
void Huuin_door_evt_to_10f_0x27ed50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Huuin_door_evt_to_10f_0x27ed50");
#endif

    switch (ctx->pc) {
        case 0x27ed84u: goto label_27ed84;
        case 0x27ed8cu: goto label_27ed8c;
        default: break;
    }

    ctx->pc = 0x27ed50u;

    // 0x27ed50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27ed50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27ed54: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x27ed54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x27ed58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27ed58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27ed5c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x27ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x27ed60: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x27ed60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x27ed64: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x27ed64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x27ed68: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27ed68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27ed6c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x27ed6cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27ed70: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27ed70u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27ed74: 0x2408001e  addiu       $t0, $zero, 0x1E
    ctx->pc = 0x27ed74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x27ed78: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x27ed78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27ed7c: 0xc0c7bd4  jal         func_31EF50
    ctx->pc = 0x27ED7Cu;
    SET_GPR_U32(ctx, 31, 0x27ED84u);
    ctx->pc = 0x31EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EF50u, 0x27ED7Cu, 0x27ED84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ED84u;
label_27ed84:
    // 0x27ed84: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27ED84u;
    SET_GPR_U32(ctx, 31, 0x27ED8Cu);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27ED84u, 0x27ED8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ED8Cu;
label_27ed8c:
    // 0x27ed8c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x27ed8cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ed90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27ed90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ed94: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27ed94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27ed98: 0x3e00008  jr          $ra
    ctx->pc = 0x27ED98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27ED98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27EDA0u;
}
