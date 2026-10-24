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

// Function: __make_dp
// Address: 0x11f360 - 0x11f38c
void ps2___make_dp_0x11f360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___make_dp_0x11f360");
#endif

    switch (ctx->pc) {
        case 0x11f380u: goto label_11f380;
        default: break;
    }

    ctx->pc = 0x11f360u;

    // 0x11f360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11f360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11f364: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x11f364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x11f368: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11f368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11f36c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11f36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f370: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x11f370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x11f374: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x11f374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x11f378: 0xc0479bc  jal         func_11E6F0
    ctx->pc = 0x11F378u;
    SET_GPR_U32(ctx, 31, 0x11F380u);
    ctx->pc = 0x11F37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F378u;
    // 0x11f37c: 0xffa70010  sd          $a3, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E6F0u, 0x11F378u, 0x11F380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F380u;
label_11f380:
    // 0x11f380: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11f380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f384: 0x3e00008  jr          $ra
    ctx->pc = 0x11F384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F384u;
        // 0x11f388: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F38Cu;
}
