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

// Function: entry_00110668
// Address: 0x110668 - 0x110678
void entry_00110668_0x110668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110668_0x110668");
#endif

    ctx->pc = 0x110668u;

    // 0x110668: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x110668u;
    {
        const bool branch_taken_0x110668 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x11066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110668u;
        // 0x11066c: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x110668) {
            ctx->pc = 0x110678u;
            return;
        }
    }
    ctx->pc = 0x110670u;
    // 0x110670: 0x8e424618  lw          $v0, 0x4618($s2)
    ctx->pc = 0x110670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17944)));
    // 0x110674: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x110674u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x110678u;
}
