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

// Function: entry_0011b368
// Address: 0x11b368 - 0x11b388
void entry_0011b368_0x11b368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b368_0x11b368");
#endif

    switch (ctx->pc) {
        case 0x11b370u: goto label_11b370;
        default: break;
    }

    ctx->pc = 0x11b368u;

    // 0x11b368: 0xc046ce2  jal         func_11B388
    ctx->pc = 0x11B368u;
    SET_GPR_U32(ctx, 31, 0x11B370u);
    ctx->pc = 0x11B36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B368u;
    // 0x11b36c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B388u, 0x11B368u, 0x11B370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B370u;
label_11b370:
    // 0x11b370: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11b370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11b374: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11b374u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b378: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11b378u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b37c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b37cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b380: 0x3e00008  jr          $ra
    ctx->pc = 0x11B380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B380u;
        // 0x11b384: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B388u;
}
