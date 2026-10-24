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

// Function: entry_00103c08
// Address: 0x103c08 - 0x103c20
void entry_00103c08_0x103c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103c08_0x103c08");
#endif

    ctx->pc = 0x103c08u;

    // 0x103c08: 0x4a0002ff  vnop
    ctx->pc = 0x103c08u;
    // NOP operation, no action needed for VU0
    // 0x103c0c: 0x4a0002ff  vnop
    ctx->pc = 0x103c0cu;
    // NOP operation, no action needed for VU0
    // 0x103c10: 0x4a0002ff  vnop
    ctx->pc = 0x103c10u;
    // NOP operation, no action needed for VU0
    // 0x103c14: 0x48428000  cfc2.ni     $v0, $vi16
    ctx->pc = 0x103c14u;
    SET_GPR_U32(ctx, 2, ctx->vu0_status);
    // 0x103c18: 0x3e00008  jr          $ra
    ctx->pc = 0x103C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C18u;
        // 0x103c1c: 0x304200c0  andi        $v0, $v0, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103C20u;
}
