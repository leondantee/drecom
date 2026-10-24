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

// Function: eff2d_02_move20
// Address: 0x1a9e30 - 0x1a9e90
void eff2d_02_move20_0x1a9e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_02_move20_0x1a9e30");
#endif

    switch (ctx->pc) {
        case 0x1a9e60u: goto label_1a9e60;
        default: break;
    }

    ctx->pc = 0x1a9e30u;

    // 0x1a9e30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a9e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a9e34: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1a9e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1a9e38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a9e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a9e3c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1a9e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1a9e40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a9e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9e44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a9e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9e48: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1a9e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a9e4c: 0x246500c0  addiu       $a1, $v1, 0xC0
    ctx->pc = 0x1a9e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x1a9e50: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x1a9e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1a9e54: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x1a9e54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x1a9e58: 0xc059e1c  jal         func_167870
    ctx->pc = 0x1A9E58u;
    SET_GPR_U32(ctx, 31, 0x1A9E60u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x1A9E58u, 0x1A9E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9E60u;
label_1a9e60:
    // 0x1a9e60: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1a9e60u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a9e64: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A9E64u;
    {
        const bool branch_taken_0x1a9e64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9e64) {
            ctx->pc = 0x1A9E7Cu;
            goto label_1a9e7c;
        }
    }
    ctx->pc = 0x1A9E6Cu;
    // 0x1a9e6c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1a9e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9e70: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x1a9e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x1a9e74: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1a9e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1a9e78: 0xac83020c  sw          $v1, 0x20C($a0)
    ctx->pc = 0x1a9e78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 3));
label_1a9e7c:
    // 0x1a9e7c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1a9e7cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9e80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a9e80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9e84: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1a9e84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a9e88: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9E90u;
}
