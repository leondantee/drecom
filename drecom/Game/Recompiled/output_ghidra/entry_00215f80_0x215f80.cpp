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

// Function: entry_00215f80
// Address: 0x215f80 - 0x215fbc
void entry_00215f80_0x215f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215f80_0x215f80");
#endif

    ctx->pc = 0x215f80u;

label_215f80:
    // 0x215f80: 0x42000039  di
    ctx->pc = 0x215f80u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x215f84: 0x40f  sync.p
    ctx->pc = 0x215f84u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x215f88: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x215f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x215f8c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x215f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x215f90: 0x0  nop
    ctx->pc = 0x215f90u;
    // NOP
    // 0x215f94: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x215F94u;
    {
        const bool branch_taken_0x215f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215f94) {
            ctx->pc = 0x215F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215f80;
        }
    }
    ctx->pc = 0x215F9Cu;
    // 0x215f9c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x215f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x215fa0: 0x2443bc00  addiu       $v1, $v0, -0x4400
    ctx->pc = 0x215fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949888));
    // 0x215fa4: 0x8c650028  lw          $a1, 0x28($v1)
    ctx->pc = 0x215fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x61BC28u));
    // 0x215fa8: 0x14a40004  bne         $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x215FA8u;
    {
        const bool branch_taken_0x215fa8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x215fa8) {
            ctx->pc = 0x215FBCu;
            return;
        }
    }
    ctx->pc = 0x215FB0u;
    // 0x215fb0: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x215fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x215fb4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x215FB4u;
    {
        const bool branch_taken_0x215fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215FB4u;
        // 0x215fb8: 0xac620028  sw          $v0, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215fb4) {
            ctx->pc = 0x215FF0u;
            return;
        }
    }
    ctx->pc = 0x215FBCu;
}
