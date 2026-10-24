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

// Function: entry_0017a13c
// Address: 0x17a13c - 0x17a15c
void entry_0017a13c_0x17a13c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a13c_0x17a13c");
#endif

    switch (ctx->pc) {
        case 0x17a144u: goto label_17a144;
        default: break;
    }

    ctx->pc = 0x17a13cu;

    // 0x17a13c: 0xc04086e  jal         func_1021B8
    ctx->pc = 0x17A13Cu;
    SET_GPR_U32(ctx, 31, 0x17A144u);
    ctx->pc = 0x1021B8u;
    {
        ctx->pc = 0x17A144u;
        ps2_stubs::sceDmaSend(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17A144u) { return; }
    ctx->pc = 0x17A144u;
label_17a144:
    // 0x17a144: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x17a144u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a148: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a14c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a14cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a150: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x17a150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17a154: 0x3e00008  jr          $ra
    ctx->pc = 0x17A154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A15Cu;
}
