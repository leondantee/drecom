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

// Function: entry_0010eefc
// Address: 0x10eefc - 0x10ef0c
void entry_0010eefc_0x10eefc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010eefc_0x10eefc");
#endif

    ctx->pc = 0x10eefcu;

    // 0x10eefc: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x10EEFCu;
    {
        const bool branch_taken_0x10eefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEFCu;
        // 0x10ef00: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eefc) {
            ctx->pc = 0x10EE70u;
            return;
        }
    }
    ctx->pc = 0x10EF04u;
    // 0x10ef04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10EF04u;
    {
        const bool branch_taken_0x10ef04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF04u;
        // 0x10ef08: 0xae2045e0  sw          $zero, 0x45E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 17888), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ef04) {
            ctx->pc = 0x10EF14u;
            return;
        }
    }
    ctx->pc = 0x10EF0Cu;
}
