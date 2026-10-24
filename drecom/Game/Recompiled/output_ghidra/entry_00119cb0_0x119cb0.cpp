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

// Function: entry_00119cb0
// Address: 0x119cb0 - 0x119cd0
void entry_00119cb0_0x119cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119cb0_0x119cb0");
#endif

    switch (ctx->pc) {
        case 0x119cb8u: goto label_119cb8;
        default: break;
    }

    ctx->pc = 0x119cb0u;

    // 0x119cb0: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x119CB0u;
    SET_GPR_U32(ctx, 31, 0x119CB8u);
    ctx->pc = 0x119CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119CB0u;
    // 0x119cb4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x119CB0u, 0x119CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119CB8u;
label_119cb8:
    // 0x119cb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x119cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119cbc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x119cbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119cc0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x119cc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119cc4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x119cc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x119CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119CC8u;
        // 0x119ccc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119CD0u;
}
