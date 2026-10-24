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

// Function: Om94_R0_init
// Address: 0x361100 - 0x361140
void Om94_R0_init_0x361100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om94_R0_init_0x361100");
#endif

    ctx->pc = 0x361100u;

    // 0x361100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x361100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x361104: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x361104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x361108: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x361108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36110c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x36110cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x361110: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x361110u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x361114: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x361114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x361118: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x361118u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x36111c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x36111cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x361120: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x361120u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x361124: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x361124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x361128: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x361128u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36112c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x36112cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x361130: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x361130u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x361134: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x361134u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x361138: 0x3e00008  jr          $ra
    ctx->pc = 0x361138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361140u;
}
