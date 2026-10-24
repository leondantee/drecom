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

// Function: Em1b_R0_damage
// Address: 0x36d200 - 0x36d248
void Em1b_R0_damage_0x36d200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1b_R0_damage_0x36d200");
#endif

    ctx->pc = 0x36d200u;

    // 0x36d200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36d200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36d204: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x36d204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x36d208: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x36d208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36d20c: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x36d20cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d210: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36d210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d214: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x36d214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36d218: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36d218u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36d21c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x36d21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36d220: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x36d220u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d224: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x36d224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36d228: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36d228u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d22c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x36d22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36d230: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36d230u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d234: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x36d234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36d238: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36d238u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x36d23c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x36d23cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36d240: 0x3e00008  jr          $ra
    ctx->pc = 0x36D240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D248u;
}
