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

// Function: entry_00215f00
// Address: 0x215f00 - 0x215f34
void entry_00215f00_0x215f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215f00_0x215f00");
#endif

    ctx->pc = 0x215f00u;

label_215f00:
    // 0x215f00: 0x42000039  di
    ctx->pc = 0x215f00u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x215f04: 0x40f  sync.p
    ctx->pc = 0x215f04u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x215f08: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x215f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x215f0c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x215f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x215f10: 0x0  nop
    ctx->pc = 0x215f10u;
    // NOP
    // 0x215f14: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x215F14u;
    {
        const bool branch_taken_0x215f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215f14) {
            ctx->pc = 0x215F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215f00;
        }
    }
    ctx->pc = 0x215F1Cu;
    // 0x215f1c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x215f1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215f20: 0x14c40004  bne         $a2, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x215F20u;
    {
        const bool branch_taken_0x215f20 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x215f20) {
            ctx->pc = 0x215F34u;
            return;
        }
    }
    ctx->pc = 0x215F28u;
    // 0x215f28: 0x8cc20038  lw          $v0, 0x38($a2)
    ctx->pc = 0x215f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x215f2c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x215F2Cu;
    {
        const bool branch_taken_0x215f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215F2Cu;
        // 0x215f30: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215f2c) {
            ctx->pc = 0x215F68u;
            return;
        }
    }
    ctx->pc = 0x215F34u;
}
