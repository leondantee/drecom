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

// Function: Oba_init
// Address: 0x189190 - 0x1891b0
void Oba_init_0x189190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Oba_init_0x189190");
#endif

    ctx->pc = 0x189190u;

    // 0x189190: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x189190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x189194: 0xac202508  sw          $zero, 0x2508($at)
    ctx->pc = 0x189194u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4B2508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B2508u, _value); } while (0);
    // 0x189198: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x189198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x18919c: 0xac202500  sw          $zero, 0x2500($at)
    ctx->pc = 0x18919cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4B2500u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B2500u, _value); } while (0);
    // 0x1891a0: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1891a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x1891a4: 0xac202504  sw          $zero, 0x2504($at)
    ctx->pc = 0x1891a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4B2504u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B2504u, _value); } while (0);
    // 0x1891a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1891A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1891A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1891B0u;
}
