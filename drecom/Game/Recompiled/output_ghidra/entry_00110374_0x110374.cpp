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

// Function: entry_00110374
// Address: 0x110374 - 0x110390
void entry_00110374_0x110374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110374_0x110374");
#endif

    ctx->pc = 0x110374u;

    // 0x110374: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x110374u;
    {
        const bool branch_taken_0x110374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x110374) {
            ctx->pc = 0x1103B0u;
            return;
        }
    }
    ctx->pc = 0x11037Cu;
    // 0x11037c: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x11037cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x110380: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x110380u;
    {
        const bool branch_taken_0x110380 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x110384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110380u;
        // 0x110384: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110380) {
            ctx->pc = 0x1103B0u;
            return;
        }
    }
    ctx->pc = 0x110388u;
    // 0x110388: 0x24870050  addiu       $a3, $a0, 0x50
    ctx->pc = 0x110388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x11038c: 0x0  nop
    ctx->pc = 0x11038cu;
    // NOP
    ctx->pc = 0x110390u;
}
