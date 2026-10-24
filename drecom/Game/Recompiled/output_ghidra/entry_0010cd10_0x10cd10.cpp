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

// Function: entry_0010cd10
// Address: 0x10cd10 - 0x10cd30
void entry_0010cd10_0x10cd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cd10_0x10cd10");
#endif

    ctx->pc = 0x10cd10u;

    // 0x10cd10: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10cd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10cd14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10cd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10cd18: 0x24423990  addiu       $v0, $v0, 0x3990
    ctx->pc = 0x10cd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14736));
    // 0x10cd1c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x10cd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10cd20: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10cd24: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x10cd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x10cd28: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10CD28u;
    {
        const bool branch_taken_0x10cd28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CD28u;
        // 0x10cd2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cd28) {
            ctx->pc = 0x10CD48u;
            return;
        }
    }
    ctx->pc = 0x10CD30u;
}
