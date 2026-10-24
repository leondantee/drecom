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

// Function: Mk_index_set_f
// Address: 0x1dff20 - 0x1dffcc
void Mk_index_set_f_0x1dff20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Mk_index_set_f_0x1dff20");
#endif

    ctx->pc = 0x1dff20u;

    // 0x1dff20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dff20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dff24: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1dff24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1dff28: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1dff28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x1dff2c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dff30: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dff30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dff34: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1dff34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1dff38: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dff38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dff3c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dff40: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1dff40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1dff44: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1dff44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1dff48: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dff48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dff4c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1dff4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1dff50: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dff50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dff54: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dff54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dff58: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1dff58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1dff5c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dff60: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dff60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dff64: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1dff64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1dff68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dff68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dff6c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dff70: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1dff70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1dff74: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1dff74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1dff78: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dff78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dff7c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1dff7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1dff80: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dff80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dff84: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dff84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dff88: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1dff88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1dff8c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dff90: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dff90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dff94: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1dff94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1dff98: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dff98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dff9c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dffa0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1dffa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1dffa4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1dffa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dffa8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dffac: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1dffacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1dffb0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dffb4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dffb8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1dffb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1dffbc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dffc0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1dffc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1dffc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFFCCu;
}
