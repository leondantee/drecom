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

// Function: matherr
// Address: 0x1149e8 - 0x114a0c
void matherr_0x1149e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("matherr_0x1149e8");
#endif

    switch (ctx->pc) {
        case 0x1149fcu: goto label_1149fc;
        default: break;
    }

    ctx->pc = 0x1149e8u;

    // 0x1149e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1149e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1149ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1149ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1149f0: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x1149f0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1149f4: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x1149F4u;
    SET_GPR_U32(ctx, 31, 0x1149FCu);
    ctx->pc = 0x1149F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1149F4u;
    // 0x1149f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x1149F4u, 0x1149FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1149FCu;
label_1149fc:
    // 0x1149fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1149fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114a00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x114a00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114a04: 0x3e00008  jr          $ra
    ctx->pc = 0x114A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A04u;
        // 0x114a08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114A0Cu;
}
