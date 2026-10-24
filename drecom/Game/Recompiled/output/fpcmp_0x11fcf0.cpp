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

// Function: fpcmp
// Address: 0x11fcf0 - 0x11fd3c
void fpcmp_0x11fcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fpcmp_0x11fcf0");
#endif

    switch (ctx->pc) {
        case 0x11fd10u: goto label_11fd10;
        case 0x11fd20u: goto label_11fd20;
        case 0x11fd2cu: goto label_11fd2c;
        default: break;
    }

    ctx->pc = 0x11fcf0u;

    // 0x11fcf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11fcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11fcf4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x11fcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x11fcf8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x11fcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11fcfc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11fcfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11fd00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11fd00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd04: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x11fd04u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x11fd08: 0xc047d3e  jal         func_11F4F8
    ctx->pc = 0x11FD08u;
    SET_GPR_U32(ctx, 31, 0x11FD10u);
    ctx->pc = 0x11FD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FD08u;
    // 0x11fd0c: 0xe7ad0024  swc1        $f13, 0x24($sp) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F4F8u, 0x11FD08u, 0x11FD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FD10u;
label_11fd10:
    // 0x11fd10: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x11fd10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11fd14: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x11fd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x11fd18: 0xc047d3e  jal         func_11F4F8
    ctx->pc = 0x11FD18u;
    SET_GPR_U32(ctx, 31, 0x11FD20u);
    ctx->pc = 0x11FD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FD18u;
    // 0x11fd1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F4F8u, 0x11FD18u, 0x11FD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FD20u;
label_11fd20:
    // 0x11fd20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11fd20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd24: 0xc047ef6  jal         func_11FBD8
    ctx->pc = 0x11FD24u;
    SET_GPR_U32(ctx, 31, 0x11FD2Cu);
    ctx->pc = 0x11FD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FD24u;
    // 0x11fd28: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBD8u, 0x11FD24u, 0x11FD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FD2Cu;
label_11fd2c:
    // 0x11fd2c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11fd2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11fd30: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x11fd30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11fd34: 0x3e00008  jr          $ra
    ctx->pc = 0x11FD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD34u;
        // 0x11fd38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FD34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FD3Cu;
}
