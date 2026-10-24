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

// Function: entry_00103cf0
// Address: 0x103cf0 - 0x103d0c
void entry_00103cf0_0x103cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103cf0_0x103cf0");
#endif

    ctx->pc = 0x103cf0u;

    // 0x103cf0: 0x24843a10  addiu       $a0, $a0, 0x3A10
    ctx->pc = 0x103cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14864));
    // 0x103cf4: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x103cf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x103cf8: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x103cf8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x103cfc: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x103cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x103d00: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x103d00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x103d04: 0x3e00008  jr          $ra
    ctx->pc = 0x103D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D04u;
        // 0x103d08: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103D0Cu;
}
