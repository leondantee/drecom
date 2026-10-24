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

// Function: entry_00224ab8
// Address: 0x224ab8 - 0x224ad4
void entry_00224ab8_0x224ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00224ab8_0x224ab8");
#endif

    switch (ctx->pc) {
        case 0x224ac0u: goto label_224ac0;
        default: break;
    }

    ctx->pc = 0x224ab8u;

    // 0x224ab8: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x224AB8u;
    SET_GPR_U32(ctx, 31, 0x224AC0u);
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x224AB8u, 0x224AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224AC0u;
label_224ac0:
    // 0x224ac0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x224ac0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224ac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x224ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224ac8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x224ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x224acc: 0x3e00008  jr          $ra
    ctx->pc = 0x224ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224AD4u;
}
