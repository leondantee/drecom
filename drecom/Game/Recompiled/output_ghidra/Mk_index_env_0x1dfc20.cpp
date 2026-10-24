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

// Function: Mk_index_env
// Address: 0x1dfc20 - 0x1dfce4
void Mk_index_env_0x1dfc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Mk_index_env_0x1dfc20");
#endif

    ctx->pc = 0x1dfc20u;

    // 0x1dfc20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dfc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dfc24: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1dfc24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1dfc28: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x1dfc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
    // 0x1dfc2c: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x1dfc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x1dfc30: 0xffa70018  sd          $a3, 0x18($sp)
    ctx->pc = 0x1dfc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 7));
    // 0x1dfc34: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1dfc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1dfc38: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1dfc38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dfc3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dfc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dfc40: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1dfc40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1dfc44: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dfc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfc48: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1dfc48u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1dfc4c: 0x3c02000e  lui         $v0, 0xE
    ctx->pc = 0x1dfc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14 << 16));
    // 0x1dfc50: 0x3443eeee  ori         $v1, $v0, 0xEEEE
    ctx->pc = 0x1dfc50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61166);
    // 0x1dfc54: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dfc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfc58: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1dfc58u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1dfc5c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dfc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfc60: 0xfc400010  sd          $zero, 0x10($v0)
    ctx->pc = 0x1dfc60u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 0));
    // 0x1dfc64: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1dfc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1dfc68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dfc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfc6c: 0xfc430018  sd          $v1, 0x18($v0)
    ctx->pc = 0x1dfc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
    // 0x1dfc70: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x1dfc70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfc74: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dfc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfc78: 0xfc430020  sd          $v1, 0x20($v0)
    ctx->pc = 0x1dfc78u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 3));
    // 0x1dfc7c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1dfc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1dfc80: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dfc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfc84: 0xfc430028  sd          $v1, 0x28($v0)
    ctx->pc = 0x1dfc84u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 3));
    // 0x1dfc88: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1dfc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1dfc8c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dfc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfc90: 0xfc430030  sd          $v1, 0x30($v0)
    ctx->pc = 0x1dfc90u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 3));
    // 0x1dfc94: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1dfc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1dfc98: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dfc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfc9c: 0xfc430038  sd          $v1, 0x38($v0)
    ctx->pc = 0x1dfc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 3));
    // 0x1dfca0: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x1dfca0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dfca4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dfca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfca8: 0xfc430040  sd          $v1, 0x40($v0)
    ctx->pc = 0x1dfca8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 3));
    // 0x1dfcac: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1dfcacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1dfcb0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dfcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfcb4: 0xfc430048  sd          $v1, 0x48($v0)
    ctx->pc = 0x1dfcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 3));
    // 0x1dfcb8: 0xdfa30010  ld          $v1, 0x10($sp)
    ctx->pc = 0x1dfcb8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfcbc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dfcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfcc0: 0xfc430050  sd          $v1, 0x50($v0)
    ctx->pc = 0x1dfcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 80), GPR_U64(ctx, 3));
    // 0x1dfcc4: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x1dfcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1dfcc8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dfcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfccc: 0xfc430058  sd          $v1, 0x58($v0)
    ctx->pc = 0x1dfcccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 88), GPR_U64(ctx, 3));
    // 0x1dfcd0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dfcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfcd4: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1dfcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1dfcd8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1dfcd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1dfcdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFCDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFCE4u;
}
