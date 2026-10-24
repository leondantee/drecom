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

// Function: entry_00119560
// Address: 0x119560 - 0x119584
void entry_00119560_0x119560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119560_0x119560");
#endif

    ctx->pc = 0x119560u;

label_119560:
    // 0x119560: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x119560u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x119564: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x119564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x119568: 0xf0102a  slt         $v0, $a3, $s0
    ctx->pc = 0x119568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11956c: 0x0  nop
    ctx->pc = 0x11956cu;
    // NOP
    // 0x119570: 0x0  nop
    ctx->pc = 0x119570u;
    // NOP
    // 0x119574: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x119574u;
    {
        const bool branch_taken_0x119574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119574) {
            ctx->pc = 0x119560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119560;
        }
    }
    ctx->pc = 0x11957Cu;
    // 0x11957c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11957Cu;
    {
        const bool branch_taken_0x11957c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11957c) {
            ctx->pc = 0x11958Cu;
            return;
        }
    }
    ctx->pc = 0x119584u;
}
