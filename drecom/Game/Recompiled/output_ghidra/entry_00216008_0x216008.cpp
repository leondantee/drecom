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

// Function: entry_00216008
// Address: 0x216008 - 0x216034
void entry_00216008_0x216008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216008_0x216008");
#endif

    ctx->pc = 0x216008u;

label_216008:
    // 0x216008: 0x42000039  di
    ctx->pc = 0x216008u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x21600c: 0x40f  sync.p
    ctx->pc = 0x21600cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x216010: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x216010u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x216014: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x216014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x216018: 0x0  nop
    ctx->pc = 0x216018u;
    // NOP
    // 0x21601c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21601Cu;
    {
        const bool branch_taken_0x21601c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21601c) {
            ctx->pc = 0x216008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216008;
        }
    }
    ctx->pc = 0x216024u;
    // 0x216024: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x216024u;
    {
        const bool branch_taken_0x216024 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x216024) {
            ctx->pc = 0x216028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216024u;
            // 0x216028: 0x8ca3003c  lw          $v1, 0x3C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216034u;
            return;
        }
    }
    ctx->pc = 0x21602Cu;
    // 0x21602c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21602Cu;
    {
        const bool branch_taken_0x21602c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21602Cu;
        // 0x216030: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21602c) {
            ctx->pc = 0x216040u;
            return;
        }
    }
    ctx->pc = 0x216034u;
}
