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

// Function: dpcmp
// Address: 0x11f0e8 - 0x11f134
void dpcmp_0x11f0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpcmp_0x11f0e8");
#endif

    switch (ctx->pc) {
        case 0x11f108u: goto label_11f108;
        case 0x11f118u: goto label_11f118;
        case 0x11f124u: goto label_11f124;
        default: break;
    }

    ctx->pc = 0x11f0e8u;

    // 0x11f0e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x11f0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11f0ec: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x11f0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x11f0f0: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x11f0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x11f0f4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x11f0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11f0f8: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x11f0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x11f0fc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x11f0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x11f100: 0xc047a08  jal         func_11E820
    ctx->pc = 0x11F100u;
    SET_GPR_U32(ctx, 31, 0x11F108u);
    ctx->pc = 0x11F104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F100u;
    // 0x11f104: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E820u, 0x11F100u, 0x11F108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F108u;
label_11f108:
    // 0x11f108: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x11f108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11f10c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x11f10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x11f110: 0xc047a08  jal         func_11E820
    ctx->pc = 0x11F110u;
    SET_GPR_U32(ctx, 31, 0x11F118u);
    ctx->pc = 0x11F114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F110u;
    // 0x11f114: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E820u, 0x11F110u, 0x11F118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F118u;
label_11f118:
    // 0x11f118: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11f118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f11c: 0xc047bf4  jal         func_11EFD0
    ctx->pc = 0x11F11Cu;
    SET_GPR_U32(ctx, 31, 0x11F124u);
    ctx->pc = 0x11F120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F11Cu;
    // 0x11f120: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EFD0u, 0x11F11Cu, 0x11F124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F124u;
label_11f124:
    // 0x11f124: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x11f124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11f128: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x11f128u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11f12c: 0x3e00008  jr          $ra
    ctx->pc = 0x11F12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F12Cu;
        // 0x11f130: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F134u;
}
