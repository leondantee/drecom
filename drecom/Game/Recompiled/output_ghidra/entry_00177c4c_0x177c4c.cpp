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

// Function: entry_00177c4c
// Address: 0x177c4c - 0x177ce0
void entry_00177c4c_0x177c4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177c4c_0x177c4c");
#endif

    ctx->pc = 0x177c4cu;

    // 0x177c4c: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x177c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x177c50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177c54: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177c58: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x177c58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x177c5c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177c60: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x177c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177c64: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x177c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x177c68: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x177c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x177c6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177c70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177c74: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x177c74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x177c78: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x177c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x177c7c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177c80: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x177c80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x177c84: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x177c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x177c88: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177c8c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177c90: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x177c90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x177c94: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177c98: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x177c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177c9c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x177c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x177ca0: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x177ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x177ca4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177ca8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177cac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x177cacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x177cb0: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x177cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x177cb4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177cb8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x177cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x177cbc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177cc0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x177cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177cc4: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x177cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x177cc8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177ccc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x177cccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177cd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177cd4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x177cd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x177cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x177CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177CE0u;
}
