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

// Function: entry_001a1550
// Address: 0x1a1550 - 0x1a1570
void entry_001a1550_0x1a1550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1550_0x1a1550");
#endif

    switch (ctx->pc) {
        case 0x1a1558u: goto label_1a1558;
        default: break;
    }

    ctx->pc = 0x1a1550u;

    // 0x1a1550: 0xc043296  jal         func_10CA58
    ctx->pc = 0x1A1550u;
    SET_GPR_U32(ctx, 31, 0x1A1558u);
    ctx->pc = 0x10CA58u;
    {
        ctx->pc = 0x1A1558u;
        ps2_stubs::scePadSetActDirect(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A1558u) { return; }
    ctx->pc = 0x1A1558u;
label_1a1558:
    // 0x1a1558: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1a1558u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a155c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a155cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1560: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a1560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1564: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a1564u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a1568: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1570u;
}
