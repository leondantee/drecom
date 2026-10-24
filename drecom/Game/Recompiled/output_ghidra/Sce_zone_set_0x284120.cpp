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

// Function: Sce_zone_set
// Address: 0x284120 - 0x284148
void Sce_zone_set_0x284120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sce_zone_set_0x284120");
#endif

    switch (ctx->pc) {
        case 0x284138u: goto label_284138;
        default: break;
    }

    ctx->pc = 0x284120u;

    // 0x284120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x284120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x284124: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x284124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x284128: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x284128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x28412c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x28412cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x284130: 0xc0cece0  jal         func_33B380
    ctx->pc = 0x284130u;
    SET_GPR_U32(ctx, 31, 0x284138u);
    ctx->pc = 0x33B380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B380u, 0x284130u, 0x284138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284138u;
label_284138:
    // 0x284138: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x284138u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28413c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x28413cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x284140: 0x3e00008  jr          $ra
    ctx->pc = 0x284140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284148u;
}
