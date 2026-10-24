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

// Function: ectrl0c_move10_t01
// Address: 0x250e70 - 0x250e98
void ectrl0c_move10_t01_0x250e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl0c_move10_t01_0x250e70");
#endif

    ctx->pc = 0x250e70u;

    // 0x250e70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x250e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x250e74: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x250e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x250e78: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x250e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x250e7c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x250e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x250e80: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x250e80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x250e84: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x250e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x250e88: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x250e88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x250e8c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x250e8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x250e90: 0x3e00008  jr          $ra
    ctx->pc = 0x250E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250E98u;
}
