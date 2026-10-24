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

// Function: entry_0011eb40
// Address: 0x11eb40 - 0x11eb58
void entry_0011eb40_0x11eb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011eb40_0x11eb40");
#endif

    switch (ctx->pc) {
        case 0x11eb48u: goto label_11eb48;
        default: break;
    }

    ctx->pc = 0x11eb40u;

    // 0x11eb40: 0xc0479bc  jal         func_11E6F0
    ctx->pc = 0x11EB40u;
    SET_GPR_U32(ctx, 31, 0x11EB48u);
    ctx->pc = 0x11EB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EB40u;
    // 0x11eb44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E6F0u, 0x11EB40u, 0x11EB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EB48u;
label_11eb48:
    // 0x11eb48: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x11eb48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11eb4c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x11eb4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11eb50: 0x3e00008  jr          $ra
    ctx->pc = 0x11EB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB50u;
        // 0x11eb54: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EB58u;
}
