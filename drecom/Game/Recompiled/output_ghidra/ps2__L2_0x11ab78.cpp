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

// Function: $L2
// Address: 0x11ab78 - 0x11ab9c
void ps2__L2_0x11ab78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L2_0x11ab78");
#endif

    ctx->pc = 0x11ab78u;

    // 0x11ab78: 0x70481248  psubb       $v0, $v0, $t0
    ctx->pc = 0x11ab78u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x11ab7c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x11ab7cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x11ab80: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x11ab80u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x11ab84: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x11ab84u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x11ab88: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x11ab88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11ab8c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x11AB8Cu;
    {
        const bool branch_taken_0x11ab8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB8Cu;
        // 0x11ab90: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab8c) {
            ctx->pc = 0x11AB9Cu;
            return;
        }
    }
    ctx->pc = 0x11AB94u;
    // 0x11ab94: 0x3e00008  jr          $ra
    ctx->pc = 0x11AB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB94u;
        // 0x11ab98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AB94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AB9Cu;
}
