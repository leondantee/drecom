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

// Function: entry_0021785c
// Address: 0x21785c - 0x217870
void entry_0021785c_0x21785c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021785c_0x21785c");
#endif

    ctx->pc = 0x21785cu;

    // 0x21785c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21785Cu;
    {
        const bool branch_taken_0x21785c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21785c) {
            ctx->pc = 0x217860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21785Cu;
            // 0x217860: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217870u;
            return;
        }
    }
    ctx->pc = 0x217864u;
    // 0x217864: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x217864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x217868: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x217868u;
    {
        const bool branch_taken_0x217868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217868u;
        // 0x21786c: 0x3442fffd  ori         $v0, $v0, 0xFFFD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
        ctx->in_delay_slot = false;
        if (branch_taken_0x217868) {
            ctx->pc = 0x21787Cu;
            return;
        }
    }
    ctx->pc = 0x217870u;
}
