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

// Function: entry_00213c90
// Address: 0x213c90 - 0x213cac
void entry_00213c90_0x213c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213c90_0x213c90");
#endif

    ctx->pc = 0x213c90u;

    // 0x213c90: 0xac449d40  sw          $a0, -0x62C0($v0)
    ctx->pc = 0x213c90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294942016), GPR_U32(ctx, 4));
    // 0x213c94: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x213c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x213c98: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x213c98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213c9c: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x213c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x213ca0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x213ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x213ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x213CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213CA4u;
        // 0x213ca8: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213CACu;
}
