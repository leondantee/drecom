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

// Function: entry_0027aba4
// Address: 0x27aba4 - 0x27abc0
void entry_0027aba4_0x27aba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027aba4_0x27aba4");
#endif

    ctx->pc = 0x27aba4u;

    // 0x27aba4: 0xe420dc94  swc1        $f0, -0x236C($at)
    ctx->pc = 0x27aba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294958228), bits); }
    // 0x27aba8: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x27aba8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27abac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27abacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27abb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27abb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27abb4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x27abb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27abb8: 0x3e00008  jr          $ra
    ctx->pc = 0x27ABB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27ABB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27ABC0u;
}
