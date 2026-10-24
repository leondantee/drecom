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

// Function: entry_00105cf8
// Address: 0x105cf8 - 0x105d14
void entry_00105cf8_0x105cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105cf8_0x105cf8");
#endif

    ctx->pc = 0x105cf8u;

    // 0x105cf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x105cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105cfc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x105cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x105d00: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x105D00u;
    {
        const bool branch_taken_0x105d00 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x105D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D00u;
        // 0x105d04: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d00) {
            ctx->pc = 0x105D14u;
            return;
        }
    }
    ctx->pc = 0x105D08u;
    // 0x105d08: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x105d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x105d0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105D0Cu;
    {
        const bool branch_taken_0x105d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D0Cu;
        // 0x105d10: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d0c) {
            ctx->pc = 0x105D18u;
            return;
        }
    }
    ctx->pc = 0x105D14u;
}
