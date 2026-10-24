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

// Function: entry_002b7d00
// Address: 0x2b7d00 - 0x2b7d20
void entry_002b7d00_0x2b7d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b7d00_0x2b7d00");
#endif

    switch (ctx->pc) {
        case 0x2b7d08u: goto label_2b7d08;
        default: break;
    }

    ctx->pc = 0x2b7d00u;

    // 0x2b7d00: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B7D00u;
    SET_GPR_U32(ctx, 31, 0x2B7D08u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B7D00u, 0x2B7D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7D08u;
label_2b7d08:
    // 0x2b7d08: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7d0c: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x2b7d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x2b7d10: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b7d10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7d14: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b7d14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b7d18: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7D20u;
}
