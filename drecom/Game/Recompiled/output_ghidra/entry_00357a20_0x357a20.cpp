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

// Function: entry_00357a20
// Address: 0x357a20 - 0x357a60
void entry_00357a20_0x357a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00357a20_0x357a20");
#endif

    ctx->pc = 0x357a20u;

    // 0x357a20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x357a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357a24: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x357a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x357a28: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x357a28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x357a2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x357a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x357a30: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x357a30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x357a34: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x357a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x357a38: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x357a38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x357a3c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x357a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x357a40: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x357a40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x357a44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x357a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x357a48: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x357a48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x357a4c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x357a4cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357a50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x357a50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357a54: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x357a54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x357a58: 0x3e00008  jr          $ra
    ctx->pc = 0x357A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357A60u;
}
