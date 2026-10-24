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

// Function: entry_00215120
// Address: 0x215120 - 0x215134
void entry_00215120_0x215120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215120_0x215120");
#endif

    switch (ctx->pc) {
        case 0x215128u: goto label_215128;
        default: break;
    }

    ctx->pc = 0x215120u;

    // 0x215120: 0xc0853f0  jal         func_214FC0
    ctx->pc = 0x215120u;
    SET_GPR_U32(ctx, 31, 0x215128u);
    ctx->pc = 0x215124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215120u;
    // 0x215124: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214FC0u, 0x215120u, 0x215128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215128u;
label_215128:
    // 0x215128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x215128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21512c: 0x3e00008  jr          $ra
    ctx->pc = 0x21512Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21512Cu;
        // 0x215130: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21512Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215134u;
}
