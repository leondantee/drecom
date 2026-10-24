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

// Function: entry_0011fc00
// Address: 0x11fc00 - 0x11fc20
void entry_0011fc00_0x11fc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fc00_0x11fc00");
#endif

    ctx->pc = 0x11fc00u;

    // 0x11fc00: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11FC00u;
    {
        const bool branch_taken_0x11fc00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC00u;
        // 0x11fc04: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fc00) {
            ctx->pc = 0x11FC30u;
            return;
        }
    }
    ctx->pc = 0x11FC08u;
    // 0x11fc08: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11FC08u;
    {
        const bool branch_taken_0x11fc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11fc08) {
            ctx->pc = 0x11FC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FC08u;
            // 0x11fc0c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FC20u;
            return;
        }
    }
    ctx->pc = 0x11FC10u;
    // 0x11fc10: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x11fc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11fc14: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x11fc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x11fc18: 0x3e00008  jr          $ra
    ctx->pc = 0x11FC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC18u;
        // 0x11fc1c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FC20u;
}
