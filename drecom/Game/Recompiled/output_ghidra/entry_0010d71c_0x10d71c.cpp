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

// Function: entry_0010d71c
// Address: 0x10d71c - 0x10d728
void entry_0010d71c_0x10d71c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d71c_0x10d71c");
#endif

    ctx->pc = 0x10d71cu;

    // 0x10d71c: 0x1040ffd6  beqz        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x10D71Cu;
    {
        const bool branch_taken_0x10d71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D71Cu;
        // 0x10d720: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d71c) {
            ctx->pc = 0x10D678u;
            return;
        }
    }
    ctx->pc = 0x10D724u;
    // 0x10d724: 0xae4045cc  sw          $zero, 0x45CC($s2)
    ctx->pc = 0x10d724u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 17868), GPR_U32(ctx, 0));
    ctx->pc = 0x10d728u;
}
