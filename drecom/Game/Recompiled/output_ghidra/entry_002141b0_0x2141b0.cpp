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

// Function: entry_002141b0
// Address: 0x2141b0 - 0x2141e0
void entry_002141b0_0x2141b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002141b0_0x2141b0");
#endif

    ctx->pc = 0x2141b0u;

label_2141b0:
    // 0x2141b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2141b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2141b4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2141b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2141b8: 0x0  nop
    ctx->pc = 0x2141b8u;
    // NOP
    // 0x2141bc: 0x0  nop
    ctx->pc = 0x2141bcu;
    // NOP
    // 0x2141c0: 0x0  nop
    ctx->pc = 0x2141c0u;
    // NOP
    // 0x2141c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2141C4u;
    {
        const bool branch_taken_0x2141c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2141c4) {
            ctx->pc = 0x2141B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2141b0;
        }
    }
    ctx->pc = 0x2141CCu;
    // 0x2141cc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2141ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2141d0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2141d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2141d4: 0x3463f180  ori         $v1, $v1, 0xF180
    ctx->pc = 0x2141d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61824);
    // 0x2141d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2141D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2141DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2141D8u;
        // 0x2141dc: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2141D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2141E0u;
}
