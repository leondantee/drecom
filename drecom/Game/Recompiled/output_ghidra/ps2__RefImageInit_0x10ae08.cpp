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

// Function: _RefImageInit
// Address: 0x10ae08 - 0x10ae28
void ps2__RefImageInit_0x10ae08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__RefImageInit_0x10ae08");
#endif

    ctx->pc = 0x10ae08u;

    // 0x10ae08: 0x51103  sra         $v0, $a1, 4
    ctx->pc = 0x10ae08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 4));
    // 0x10ae0c: 0x61903  sra         $v1, $a2, 4
    ctx->pc = 0x10ae0cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 4));
    // 0x10ae10: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x10ae10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x10ae14: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x10ae14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x10ae18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10ae18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ae1c: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x10ae1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x10ae20: 0x3e00008  jr          $ra
    ctx->pc = 0x10AE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AE20u;
        // 0x10ae24: 0xac860008  sw          $a2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AE28u;
}
