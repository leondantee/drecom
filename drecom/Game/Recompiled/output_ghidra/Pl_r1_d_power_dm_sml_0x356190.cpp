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

// Function: Pl_r1_d_power_dm_sml
// Address: 0x356190 - 0x3561d0
void Pl_r1_d_power_dm_sml_0x356190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_d_power_dm_sml_0x356190");
#endif

    ctx->pc = 0x356190u;

    // 0x356190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x356190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x356194: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x356194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x356198: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x356198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35619c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x35619cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3561a0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3561a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3561a4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3561a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3561a8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3561a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3561ac: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3561acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3561b0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3561b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3561b4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3561b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3561b8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3561b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3561bc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3561bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3561c0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3561c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3561c4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3561c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3561c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3561C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3561C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3561D0u;
}
