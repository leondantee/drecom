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

// Function: entry_0014e880
// Address: 0x14e880 - 0x14e8a4
void entry_0014e880_0x14e880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e880_0x14e880");
#endif

    switch (ctx->pc) {
        case 0x14e888u: goto label_14e888;
        default: break;
    }

    ctx->pc = 0x14e880u;

    // 0x14e880: 0xc06b0d4  jal         func_1AC350
    ctx->pc = 0x14E880u;
    SET_GPR_U32(ctx, 31, 0x14E888u);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x14E880u, 0x14E888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E888u;
label_14e888:
    // 0x14e888: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x14e888u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14e88c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14e88cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14e890: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14e890u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e894: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14e894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e898: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x14e898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14e89c: 0x3e00008  jr          $ra
    ctx->pc = 0x14E89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E8A4u;
}
