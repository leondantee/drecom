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

// Function: __negdf2
// Address: 0x11f328 - 0x11f360
void ps2___negdf2_0x11f328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___negdf2_0x11f328");
#endif

    switch (ctx->pc) {
        case 0x11f340u: goto label_11f340;
        case 0x11f354u: goto label_11f354;
        default: break;
    }

    ctx->pc = 0x11f328u;

    // 0x11f328: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11f328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11f32c: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x11f32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x11f330: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11f330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f334: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11f334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11f338: 0xc047a08  jal         func_11E820
    ctx->pc = 0x11F338u;
    SET_GPR_U32(ctx, 31, 0x11F340u);
    ctx->pc = 0x11F33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F338u;
    // 0x11f33c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E820u, 0x11F338u, 0x11F340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F340u;
label_11f340:
    // 0x11f340: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x11f340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11f344: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11f344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f348: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x11f348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x11f34c: 0xc0479bc  jal         func_11E6F0
    ctx->pc = 0x11F34Cu;
    SET_GPR_U32(ctx, 31, 0x11F354u);
    ctx->pc = 0x11F350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F34Cu;
    // 0x11f350: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E6F0u, 0x11F34Cu, 0x11F354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F354u;
label_11f354:
    // 0x11f354: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11f354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f358: 0x3e00008  jr          $ra
    ctx->pc = 0x11F358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F358u;
        // 0x11f35c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F360u;
}
