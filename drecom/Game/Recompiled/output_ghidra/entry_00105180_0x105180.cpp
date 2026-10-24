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

// Function: entry_00105180
// Address: 0x105180 - 0x1051a0
void entry_00105180_0x105180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105180_0x105180");
#endif

    ctx->pc = 0x105180u;

    // 0x105180: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x105180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x105184: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x105184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x105188: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x105188u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x10518c: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x10518cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x105190: 0x1540ffde  bnez        $t2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x105190u;
    {
        const bool branch_taken_0x105190 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x105194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105190u;
        // 0x105194: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105190) {
            ctx->pc = 0x10510Cu;
            return;
        }
    }
    ctx->pc = 0x105198u;
    // 0x105198: 0x3e00008  jr          $ra
    ctx->pc = 0x105198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1051A0u;
}
