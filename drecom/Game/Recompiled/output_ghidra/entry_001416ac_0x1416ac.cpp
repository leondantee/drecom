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

// Function: entry_001416ac
// Address: 0x1416ac - 0x1416c8
void entry_001416ac_0x1416ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001416ac_0x1416ac");
#endif

    switch (ctx->pc) {
        case 0x1416b4u: goto label_1416b4;
        default: break;
    }

    ctx->pc = 0x1416acu;

    // 0x1416ac: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1416ACu;
    SET_GPR_U32(ctx, 31, 0x1416B4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1416ACu, 0x1416B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1416B4u;
label_1416b4:
    // 0x1416b4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1416b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1416b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1416b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1416bc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1416bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1416c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1416C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1416C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1416C8u;
}
