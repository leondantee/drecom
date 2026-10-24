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

// Function: entry_0011fcc8
// Address: 0x11fcc8 - 0x11fcec
void entry_0011fcc8_0x11fcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fcc8_0x11fcc8");
#endif

    ctx->pc = 0x11fcc8u;

    // 0x11fcc8: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x11fcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x11fccc: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x11fcccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11fcd0: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x11FCD0u;
    {
        const bool branch_taken_0x11fcd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11fcd0) {
            ctx->pc = 0x11FCD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FCD0u;
            // 0x11fcd4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FC90u;
            return;
        }
    }
    ctx->pc = 0x11FCD8u;
    // 0x11fcd8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x11fcd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11fcdc: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11FCDCu;
    {
        const bool branch_taken_0x11fcdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCDCu;
        // 0x11fce0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fcdc) {
            ctx->pc = 0x11FCBCu;
            return;
        }
    }
    ctx->pc = 0x11FCE4u;
    // 0x11fce4: 0x3e00008  jr          $ra
    ctx->pc = 0x11FCE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCE4u;
        // 0x11fce8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FCE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FCECu;
}
