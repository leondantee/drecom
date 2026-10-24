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

// Function: entry_0011a974
// Address: 0x11a974 - 0x11a990
void entry_0011a974_0x11a974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a974_0x11a974");
#endif

    switch (ctx->pc) {
        case 0x11a97cu: goto label_11a97c;
        default: break;
    }

    ctx->pc = 0x11a974u;

    // 0x11a974: 0xc046cc4  jal         func_11B310
    ctx->pc = 0x11A974u;
    SET_GPR_U32(ctx, 31, 0x11A97Cu);
    ctx->pc = 0x11A978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A974u;
    // 0x11a978: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B310u;
    {
        ctx->pc = 0x11A97Cu;
        ps2_stubs::vfprintf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x11A97Cu) { return; }
    ctx->pc = 0x11A97Cu;
label_11a97c:
    // 0x11a97c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x11a97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a980: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x11a980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11a984: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x11a984u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x11a988: 0x3e00008  jr          $ra
    ctx->pc = 0x11A988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A988u;
        // 0x11a98c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A990u;
}
