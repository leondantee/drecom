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

// Function: dpadd
// Address: 0x11eb00 - 0x11eb58
void dpadd_0x11eb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpadd_0x11eb00");
#endif

    switch (ctx->pc) {
        case 0x11eb20u: goto label_11eb20;
        case 0x11eb30u: goto label_11eb30;
        case 0x11eb40u: goto label_11eb40;
        case 0x11eb48u: goto label_11eb48;
        default: break;
    }

    ctx->pc = 0x11eb00u;

    // 0x11eb00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x11eb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x11eb04: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x11eb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x11eb08: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x11eb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x11eb0c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x11eb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x11eb10: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x11eb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x11eb14: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x11eb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x11eb18: 0xc047a08  jal         func_11E820
    ctx->pc = 0x11EB18u;
    SET_GPR_U32(ctx, 31, 0x11EB20u);
    ctx->pc = 0x11EB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EB18u;
    // 0x11eb1c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E820u, 0x11EB18u, 0x11EB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EB20u;
label_11eb20:
    // 0x11eb20: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x11eb20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11eb24: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x11eb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x11eb28: 0xc047a08  jal         func_11E820
    ctx->pc = 0x11EB28u;
    SET_GPR_U32(ctx, 31, 0x11EB30u);
    ctx->pc = 0x11EB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EB28u;
    // 0x11eb2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E820u, 0x11EB28u, 0x11EB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EB30u;
label_11eb30:
    // 0x11eb30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11eb30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb34: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x11eb34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11eb38: 0xc047a30  jal         func_11E8C0
    ctx->pc = 0x11EB38u;
    SET_GPR_U32(ctx, 31, 0x11EB40u);
    ctx->pc = 0x11EB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EB38u;
    // 0x11eb3c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8C0u, 0x11EB38u, 0x11EB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EB40u;
label_11eb40:
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
