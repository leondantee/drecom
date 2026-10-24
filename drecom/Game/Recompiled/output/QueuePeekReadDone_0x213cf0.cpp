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

// Function: QueuePeekReadDone
// Address: 0x213cf0 - 0x213d2c
void QueuePeekReadDone_0x213cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("QueuePeekReadDone_0x213cf0");
#endif

    ctx->pc = 0x213cf0u;

    // 0x213cf0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x213cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213cf4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x213cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x213cf8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x213cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x213cfc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x213cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x213d00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x213d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x213d04: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x213d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x213d08: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x213d08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x213d0c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x213d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x213d10: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x213d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x213d14: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x213D14u;
    {
        const bool branch_taken_0x213d14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x213D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213D14u;
        // 0x213d18: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213d14) {
            ctx->pc = 0x213D24u;
            goto label_213d24;
        }
    }
    ctx->pc = 0x213D1Cu;
    // 0x213d1c: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x213d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x213d20: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x213d20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_213d24:
    // 0x213d24: 0x3e00008  jr          $ra
    ctx->pc = 0x213D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213D2Cu;
}
