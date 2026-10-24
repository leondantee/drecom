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

// Function: Moji_sys_init
// Address: 0x1670f0 - 0x167120
void Moji_sys_init_0x1670f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Moji_sys_init_0x1670f0");
#endif

    ctx->pc = 0x1670f0u;

    // 0x1670f0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1670f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1670f4: 0x24635ab0  addiu       $v1, $v1, 0x5AB0
    ctx->pc = 0x1670f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23216));
    // 0x1670f8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1670f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1670fc: 0xac239ab0  sw          $v1, -0x6550($at)
    ctx->pc = 0x1670fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x479AB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x479AB0u, _value); } while (0);
    // 0x167100: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x167100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x167104: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x167104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x167108: 0xa023aab5  sb          $v1, -0x554B($at)
    ctx->pc = 0x167108u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47AAB5u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x47AAB5u, _value); } while (0);
    // 0x16710c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x16710cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x167110: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x167110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x167114: 0xa023aab6  sb          $v1, -0x554A($at)
    ctx->pc = 0x167114u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47AAB6u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x47AAB6u, _value); } while (0);
    // 0x167118: 0x3e00008  jr          $ra
    ctx->pc = 0x167118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167120u;
}
