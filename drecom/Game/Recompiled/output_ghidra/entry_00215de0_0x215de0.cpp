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

// Function: entry_00215de0
// Address: 0x215de0 - 0x215e2c
void entry_00215de0_0x215de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215de0_0x215de0");
#endif

    ctx->pc = 0x215de0u;

label_215de0:
    // 0x215de0: 0x42000039  di
    ctx->pc = 0x215de0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x215de4: 0x40f  sync.p
    ctx->pc = 0x215de4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x215de8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x215de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x215dec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x215decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x215df0: 0x0  nop
    ctx->pc = 0x215df0u;
    // NOP
    // 0x215df4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x215DF4u;
    {
        const bool branch_taken_0x215df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215df4) {
            ctx->pc = 0x215DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215de0;
        }
    }
    ctx->pc = 0x215DFCu;
    // 0x215dfc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x215dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x215e00: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x215e00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x215e04: 0x2442bc00  addiu       $v0, $v0, -0x4400
    ctx->pc = 0x215e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949888));
    // 0x215e08: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x215e08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x215e0c: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x215e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61BC28u));
    // 0x215e10: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x215e10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x215e14: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x215e14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x215e18: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x215e18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x215e1c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x215E1Cu;
    {
        const bool branch_taken_0x215e1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x215E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215E1Cu;
        // 0x215e20: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215e1c) {
            ctx->pc = 0x215E2Cu;
            return;
        }
    }
    ctx->pc = 0x215E24u;
    // 0x215e24: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x215E24u;
    {
        const bool branch_taken_0x215e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215E24u;
        // 0x215e28: 0xac440028  sw          $a0, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215e24) {
            ctx->pc = 0x215E60u;
            return;
        }
    }
    ctx->pc = 0x215E2Cu;
}
