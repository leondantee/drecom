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

// Function: entry_0033b340
// Address: 0x33b340 - 0x33b364
void entry_0033b340_0x33b340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033b340_0x33b340");
#endif

    switch (ctx->pc) {
        case 0x33b348u: goto label_33b348;
        default: break;
    }

    ctx->pc = 0x33b340u;

    // 0x33b340: 0xc046314  jal         func_118C50
    ctx->pc = 0x33B340u;
    SET_GPR_U32(ctx, 31, 0x33B348u);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x33B348u;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33B348u) { return; }
    ctx->pc = 0x33B348u;
label_33b348:
    // 0x33b348: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33b348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33b34c: 0xae030138  sw          $v1, 0x138($s0)
    ctx->pc = 0x33b34cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 3));
    // 0x33b350: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x33b350u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33b354: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33b354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b358: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x33b358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33b35c: 0x3e00008  jr          $ra
    ctx->pc = 0x33B35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B364u;
}
