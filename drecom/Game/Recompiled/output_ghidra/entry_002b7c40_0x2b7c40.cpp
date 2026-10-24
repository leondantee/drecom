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

// Function: entry_002b7c40
// Address: 0x2b7c40 - 0x2b7c60
void entry_002b7c40_0x2b7c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b7c40_0x2b7c40");
#endif

    switch (ctx->pc) {
        case 0x2b7c48u: goto label_2b7c48;
        default: break;
    }

    ctx->pc = 0x2b7c40u;

    // 0x2b7c40: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B7C40u;
    SET_GPR_U32(ctx, 31, 0x2B7C48u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B7C40u, 0x2B7C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7C48u;
label_2b7c48:
    // 0x2b7c48: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7c4c: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x2b7c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x2b7c50: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b7c50u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7c54: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b7c54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b7c58: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7C60u;
}
