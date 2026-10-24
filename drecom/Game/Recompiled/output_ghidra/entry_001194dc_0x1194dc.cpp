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

// Function: entry_001194dc
// Address: 0x1194dc - 0x1194ec
void entry_001194dc_0x1194dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001194dc_0x1194dc");
#endif

    ctx->pc = 0x1194dcu;

    // 0x1194dc: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x1194dcu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
    // 0x1194e0: 0x5620ffeb  bnel        $s1, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1194E0u;
    {
        const bool branch_taken_0x1194e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1194e0) {
            ctx->pc = 0x1194E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1194E0u;
            // 0x1194e4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119490u;
            return;
        }
    }
    ctx->pc = 0x1194E8u;
    // 0x1194e8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1194e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1194ecu;
}
