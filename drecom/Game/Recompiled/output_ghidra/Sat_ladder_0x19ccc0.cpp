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

// Function: Sat_ladder
// Address: 0x19ccc0 - 0x19ccf8
void Sat_ladder_0x19ccc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sat_ladder_0x19ccc0");
#endif

    ctx->pc = 0x19ccc0u;

    // 0x19ccc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19ccc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19ccc4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x19ccc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x19ccc8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x19ccc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x19cccc: 0x8c2295b4  lw          $v0, -0x6A4C($at)
    ctx->pc = 0x19ccccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6195B4u));
    // 0x19ccd0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x19ccd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x19ccd4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x19ccd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x19ccd8: 0xac2295b4  sw          $v0, -0x6A4C($at)
    ctx->pc = 0x19ccd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6195B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6195B4u, _value); } while (0);
    // 0x19ccdc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x19ccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19cce0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x19cce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x19cce4: 0xac2295bc  sw          $v0, -0x6A44($at)
    ctx->pc = 0x19cce4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6195BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6195BCu, _value); } while (0);
    // 0x19cce8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19cce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ccec: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x19ccecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19ccf0: 0x3e00008  jr          $ra
    ctx->pc = 0x19CCF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CCF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CCF8u;
}
