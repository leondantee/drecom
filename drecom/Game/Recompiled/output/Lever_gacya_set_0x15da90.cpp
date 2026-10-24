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

// Function: Lever_gacya_set
// Address: 0x15da90 - 0x15dad4
void Lever_gacya_set_0x15da90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Lever_gacya_set_0x15da90");
#endif

    ctx->pc = 0x15da90u;

    // 0x15da90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15da90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15da94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15da94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15da98: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x15da98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x15da9c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x15da9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x15daa0: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x15daa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x15daa4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x15daa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x15daa8: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x15daa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x15daac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x15daacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15dab0: 0xae03140c  sw          $v1, 0x140C($s0)
    ctx->pc = 0x15dab0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EEFCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EEFCCu, _value); } while (0);
    // 0x15dab4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x15dab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15dab8: 0xae031404  sw          $v1, 0x1404($s0)
    ctx->pc = 0x15dab8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EEFC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EEFC4u, _value); } while (0);
    // 0x15dabc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x15dabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15dac0: 0xae031408  sw          $v1, 0x1408($s0)
    ctx->pc = 0x15dac0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EEFC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EEFC8u, _value); } while (0);
    // 0x15dac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15dac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15dac8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15dac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15dacc: 0x3e00008  jr          $ra
    ctx->pc = 0x15DACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15DAD4u;
}
