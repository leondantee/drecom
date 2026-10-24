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

// Function: entry_002142ec
// Address: 0x2142ec - 0x2142fc
void entry_002142ec_0x2142ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002142ec_0x2142ec");
#endif

    ctx->pc = 0x2142ecu;

    // 0x2142ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2142ECu;
    {
        const bool branch_taken_0x2142ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2142F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2142ECu;
        // 0x2142f0: 0x51338  dsll        $v0, $a1, 12 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2142ec) {
            ctx->pc = 0x2142FCu;
            return;
        }
    }
    ctx->pc = 0x2142F4u;
    // 0x2142f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2142F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2142F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2142F4u;
        // 0x2142f8: 0x2402270f  addiu       $v0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2142F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2142FCu;
}
