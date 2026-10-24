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

// Function: entry_0011eba4
// Address: 0x11eba4 - 0x11ebbc
void entry_0011eba4_0x11eba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011eba4_0x11eba4");
#endif

    switch (ctx->pc) {
        case 0x11ebacu: goto label_11ebac;
        default: break;
    }

    ctx->pc = 0x11eba4u;

    // 0x11eba4: 0xc0479bc  jal         func_11E6F0
    ctx->pc = 0x11EBA4u;
    SET_GPR_U32(ctx, 31, 0x11EBACu);
    ctx->pc = 0x11EBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EBA4u;
    // 0x11eba8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E6F0u, 0x11EBA4u, 0x11EBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EBACu;
label_11ebac:
    // 0x11ebac: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x11ebacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11ebb0: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x11ebb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11ebb4: 0x3e00008  jr          $ra
    ctx->pc = 0x11EBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EBB4u;
        // 0x11ebb8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EBBCu;
}
