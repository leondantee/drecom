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

// Function: entry_00215540
// Address: 0x215540 - 0x215570
void entry_00215540_0x215540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215540_0x215540");
#endif

    ctx->pc = 0x215540u;

label_215540:
    // 0x215540: 0x42000039  di
    ctx->pc = 0x215540u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x215544: 0x40f  sync.p
    ctx->pc = 0x215544u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x215548: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x215548u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x21554c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x21554cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x215550: 0x0  nop
    ctx->pc = 0x215550u;
    // NOP
    // 0x215554: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x215554u;
    {
        const bool branch_taken_0x215554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215554) {
            ctx->pc = 0x215540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215540;
        }
    }
    ctx->pc = 0x21555Cu;
    // 0x21555c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x21555cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215560: 0x18c00019  blez        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x215560u;
    {
        const bool branch_taken_0x215560 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x215564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215560u;
        // 0x215564: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215560) {
            ctx->pc = 0x2155C8u;
            return;
        }
    }
    ctx->pc = 0x215568u;
    // 0x215568: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x215568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21556c: 0x0  nop
    ctx->pc = 0x21556cu;
    // NOP
    ctx->pc = 0x215570u;
}
