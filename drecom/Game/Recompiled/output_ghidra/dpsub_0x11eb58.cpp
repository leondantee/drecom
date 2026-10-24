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

// Function: dpsub
// Address: 0x11eb58 - 0x11ebbc
void dpsub_0x11eb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpsub_0x11eb58");
#endif

    switch (ctx->pc) {
        case 0x11eb78u: goto label_11eb78;
        case 0x11eb88u: goto label_11eb88;
        case 0x11eba4u: goto label_11eba4;
        case 0x11ebacu: goto label_11ebac;
        default: break;
    }

    ctx->pc = 0x11eb58u;

    // 0x11eb58: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x11eb58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x11eb5c: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x11eb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x11eb60: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x11eb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x11eb64: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x11eb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x11eb68: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x11eb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x11eb6c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x11eb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x11eb70: 0xc047a08  jal         func_11E820
    ctx->pc = 0x11EB70u;
    SET_GPR_U32(ctx, 31, 0x11EB78u);
    ctx->pc = 0x11EB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EB70u;
    // 0x11eb74: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E820u, 0x11EB70u, 0x11EB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EB78u;
label_11eb78:
    // 0x11eb78: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x11eb78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11eb7c: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x11eb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x11eb80: 0xc047a08  jal         func_11E820
    ctx->pc = 0x11EB80u;
    SET_GPR_U32(ctx, 31, 0x11EB88u);
    ctx->pc = 0x11EB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EB80u;
    // 0x11eb84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E820u, 0x11EB80u, 0x11EB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EB88u;
label_11eb88:
    // 0x11eb88: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x11eb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x11eb8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11eb8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb90: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x11eb90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11eb94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11eb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb98: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x11eb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x11eb9c: 0xc047a30  jal         func_11E8C0
    ctx->pc = 0x11EB9Cu;
    SET_GPR_U32(ctx, 31, 0x11EBA4u);
    ctx->pc = 0x11EBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EB9Cu;
    // 0x11eba0: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8C0u, 0x11EB9Cu, 0x11EBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EBA4u;
label_11eba4:
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
