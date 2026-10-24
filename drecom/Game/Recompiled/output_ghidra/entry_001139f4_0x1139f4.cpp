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

// Function: entry_001139f4
// Address: 0x1139f4 - 0x113a0c
void entry_001139f4_0x1139f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001139f4_0x1139f4");
#endif

    ctx->pc = 0x1139f4u;

    // 0x1139f4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1139f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1139f8: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x1139f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1139fc: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1139FCu;
    {
        const bool branch_taken_0x1139fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1139FCu;
        // 0x113a00: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1139fc) {
            ctx->pc = 0x1139C8u;
            return;
        }
    }
    ctx->pc = 0x113A04u;
    // 0x113a04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x113A04u;
    {
        const bool branch_taken_0x113a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113A04u;
        // 0x113a08: 0x8fa80154  lw          $t0, 0x154($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113a04) {
            ctx->pc = 0x113A28u;
            return;
        }
    }
    ctx->pc = 0x113A0Cu;
}
