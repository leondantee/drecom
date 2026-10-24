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

// Function: entry_001a2fac
// Address: 0x1a2fac - 0x1a2fc4
void entry_001a2fac_0x1a2fac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2fac_0x1a2fac");
#endif

    switch (ctx->pc) {
        case 0x1a2fb4u: goto label_1a2fb4;
        default: break;
    }

    ctx->pc = 0x1a2facu;

    // 0x1a2fac: 0xc068fe4  jal         func_1A3F90
    ctx->pc = 0x1A2FACu;
    SET_GPR_U32(ctx, 31, 0x1A2FB4u);
    ctx->pc = 0x1A3F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3F90u, 0x1A2FACu, 0x1A2FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2FB4u;
label_1a2fb4:
    // 0x1a2fb4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1a2fb4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2fb8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a2fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a2fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2FC4u;
}
