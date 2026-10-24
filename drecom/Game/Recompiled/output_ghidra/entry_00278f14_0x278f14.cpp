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

// Function: entry_00278f14
// Address: 0x278f14 - 0x278f2c
void entry_00278f14_0x278f14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00278f14_0x278f14");
#endif

    switch (ctx->pc) {
        case 0x278f1cu: goto label_278f1c;
        default: break;
    }

    ctx->pc = 0x278f14u;

    // 0x278f14: 0xc09e3d0  jal         func_278F40
    ctx->pc = 0x278F14u;
    SET_GPR_U32(ctx, 31, 0x278F1Cu);
    ctx->pc = 0x278F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278F40u, 0x278F14u, 0x278F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278F1Cu;
label_278f1c:
    // 0x278f1c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x278f1cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278f20: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x278f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x278f24: 0x3e00008  jr          $ra
    ctx->pc = 0x278F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278F2Cu;
}
