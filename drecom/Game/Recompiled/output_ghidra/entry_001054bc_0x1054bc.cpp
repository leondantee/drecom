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

// Function: entry_001054bc
// Address: 0x1054bc - 0x1054dc
void entry_001054bc_0x1054bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001054bc_0x1054bc");
#endif

    ctx->pc = 0x1054bcu;

    // 0x1054bc: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1054bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1054c0: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1054c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1054c4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1054c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1054c8: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x1054c8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x1054cc: 0x1540ffdb  bnez        $t2, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1054CCu;
    {
        const bool branch_taken_0x1054cc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1054D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1054CCu;
        // 0x1054d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054cc) {
            ctx->pc = 0x10543Cu;
            return;
        }
    }
    ctx->pc = 0x1054D4u;
    // 0x1054d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1054D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1054D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1054DCu;
}
