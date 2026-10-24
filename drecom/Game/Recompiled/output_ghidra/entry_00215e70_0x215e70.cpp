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

// Function: entry_00215e70
// Address: 0x215e70 - 0x215ebc
void entry_00215e70_0x215e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215e70_0x215e70");
#endif

    ctx->pc = 0x215e70u;

label_215e70:
    // 0x215e70: 0x42000039  di
    ctx->pc = 0x215e70u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x215e74: 0x40f  sync.p
    ctx->pc = 0x215e74u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x215e78: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x215e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x215e7c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x215e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x215e80: 0x0  nop
    ctx->pc = 0x215e80u;
    // NOP
    // 0x215e84: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x215E84u;
    {
        const bool branch_taken_0x215e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215e84) {
            ctx->pc = 0x215E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215e70;
        }
    }
    ctx->pc = 0x215E8Cu;
    // 0x215e8c: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x215e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x215e90: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x215e90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x215e94: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x215e94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x215e98: 0x8d420008  lw          $v0, 0x8($t2)
    ctx->pc = 0x215e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x215e9c: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x215e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x215ea0: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x215ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x215ea4: 0xac880010  sw          $t0, 0x10($a0)
    ctx->pc = 0x215ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 8));
    // 0x215ea8: 0xac890014  sw          $t1, 0x14($a0)
    ctx->pc = 0x215ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 9));
    // 0x215eac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x215EACu;
    {
        const bool branch_taken_0x215eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215EACu;
        // 0x215eb0: 0xac8a0040  sw          $t2, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215eac) {
            ctx->pc = 0x215EBCu;
            return;
        }
    }
    ctx->pc = 0x215EB4u;
    // 0x215eb4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x215EB4u;
    {
        const bool branch_taken_0x215eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215EB4u;
        // 0x215eb8: 0xad440008  sw          $a0, 0x8($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215eb4) {
            ctx->pc = 0x215EF0u;
            return;
        }
    }
    ctx->pc = 0x215EBCu;
}
