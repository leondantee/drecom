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

// Function: entry_0011bab0
// Address: 0x11bab0 - 0x11bac0
void entry_0011bab0_0x11bab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bab0_0x11bab0");
#endif

    ctx->pc = 0x11bab0u;

    // 0x11bab0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BAB0u;
    {
        const bool branch_taken_0x11bab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BAB0u;
        // 0x11bab4: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bab0) {
            ctx->pc = 0x11BAC0u;
            return;
        }
    }
    ctx->pc = 0x11BAB8u;
    // 0x11bab8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11BAB8u;
    {
        const bool branch_taken_0x11bab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BAB8u;
        // 0x11babc: 0x9690fff8  lhu         $s0, -0x8($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bab8) {
            ctx->pc = 0x11BAC4u;
            return;
        }
    }
    ctx->pc = 0x11BAC0u;
}
