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

// Function: entry_0021d6ac
// Address: 0x21d6ac - 0x21d6c8
void entry_0021d6ac_0x21d6ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021d6ac_0x21d6ac");
#endif

    switch (ctx->pc) {
        case 0x21d6b4u: goto label_21d6b4;
        default: break;
    }

    ctx->pc = 0x21d6acu;

    // 0x21d6ac: 0xc086488  jal         func_219220
    ctx->pc = 0x21D6ACu;
    SET_GPR_U32(ctx, 31, 0x21D6B4u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x21D6ACu, 0x21D6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D6B4u;
label_21d6b4:
    // 0x21d6b4: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x21d6b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d6b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21d6b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d6bc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x21d6bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x21d6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x21D6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D6C8u;
}
