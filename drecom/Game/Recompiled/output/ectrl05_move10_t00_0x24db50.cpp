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

// Function: ectrl05_move10_t00
// Address: 0x24db50 - 0x24db78
void ectrl05_move10_t00_0x24db50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl05_move10_t00_0x24db50");
#endif

    ctx->pc = 0x24db50u;

    // 0x24db50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24db50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24db54: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x24db54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x24db58: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x24db58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24db5c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24db5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24db60: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x24db60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x24db64: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x24db64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24db68: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x24db68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x24db6c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x24db6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24db70: 0x3e00008  jr          $ra
    ctx->pc = 0x24DB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DB78u;
}
