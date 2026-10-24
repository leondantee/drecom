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

// Function: Ck_scr_near_clip_init
// Address: 0x13e240 - 0x13e258
void Ck_scr_near_clip_init_0x13e240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ck_scr_near_clip_init_0x13e240");
#endif

    ctx->pc = 0x13e240u;

    // 0x13e240: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x13e240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x13e244: 0xfc2078b0  sd          $zero, 0x78B0($at)
    ctx->pc = 0x13e244u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3B78B0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3B78B0u, _value); } while (0);
    // 0x13e248: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x13e248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x13e24c: 0xfc20efb0  sd          $zero, -0x1050($at)
    ctx->pc = 0x13e24cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3CEFB0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3CEFB0u, _value); } while (0);
    // 0x13e250: 0x3e00008  jr          $ra
    ctx->pc = 0x13E250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E258u;
}
