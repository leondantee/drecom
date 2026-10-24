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

// Function: entry_0016b340
// Address: 0x16b340 - 0x16b370
void entry_0016b340_0x16b340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b340_0x16b340");
#endif

    ctx->pc = 0x16b340u;

    // 0x16b340: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x16b340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x16b344: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x16b344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x16b348: 0xafa30180  sw          $v1, 0x180($sp)
    ctx->pc = 0x16b348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 3));
    // 0x16b34c: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x16b34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x16b350: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16b350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16b354: 0xafa30188  sw          $v1, 0x188($sp)
    ctx->pc = 0x16b354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 3));
    // 0x16b358: 0x1460feca  bnez        $v1, . + 4 + (-0x136 << 2)
    ctx->pc = 0x16B358u;
    {
        const bool branch_taken_0x16b358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b358) {
            ctx->pc = 0x16AE84u;
            return;
        }
    }
    ctx->pc = 0x16B360u;
    // 0x16b360: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x16b360u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b364: 0x27bd0190  addiu       $sp, $sp, 0x190
    ctx->pc = 0x16b364u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x16b368: 0x3e00008  jr          $ra
    ctx->pc = 0x16B368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B370u;
}
